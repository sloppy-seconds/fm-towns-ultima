#include "p_tbios_funcs.h"
namespace p_tbios {
void f_0000c80c(X86Cpu& c) {
    X86_TICK(c, 27);
    // 00c80c  mov word ptr gs:[ebp + 0x416], ax
    X86_AT(c, 0xc80cu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x416u)), (c.r[0] & 0xFFFFu));
    // 00c814  mov word ptr gs:[ebp + 0x480], dx
    X86_AT(c, 0xc814u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x480u)), (c.r[2] & 0xFFFFu));
    // 00c81c  mov word ptr gs:[ebp + 0x482], ax
    X86_AT(c, 0xc81cu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x482u)), (c.r[0] & 0xFFFFu));
    // 00c824  shl word ptr gs:[ebp + 0x480], 1
    X86_AT(c, 0xc824u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x480u)); uint32_t v = rd16(ea); bool w; uint32_t r = x86_shift(c, 4, v, 0x1u, 2, w); if (w) wr16(ea, r); }
    // 00c82c  shl word ptr gs:[ebp + 0x482], 1
    X86_AT(c, 0xc82cu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x482u)); uint32_t v = rd16(ea); bool w; uint32_t r = x86_shift(c, 4, v, 0x1u, 2, w); if (w) wr16(ea, r); }
    // 00c834  cmp dx, ax
    X86_AT(c, 0xc834u);
    (void)x86_sub(c, (c.r[2] & 0xFFFFu), (c.r[0] & 0xFFFFu), 0, 2);
    // 00c837  jbe 0xc84b
    X86_AT(c, 0xc837u);
    if (x86_cc(c, 6)) { goto L_c84b; }
    X86_TICK(c, 11);
    // 00c839  mov word ptr gs:[ebp + 0x47c], dx
    X86_AT(c, 0xc839u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x47Cu)), (c.r[2] & 0xFFFFu));
    // 00c841  mov byte ptr gs:[ebp + 0x4c8], 0
    X86_AT(c, 0xc841u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x4C8u)), 0x0u);
    // 00c849  jmp 0xc85b
    X86_AT(c, 0xc849u);
    goto L_c85b;
L_c84b:
    X86_TICK(c, 4);
    // 00c84b  mov word ptr gs:[ebp + 0x47c], ax
    X86_AT(c, 0xc84bu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x47Cu)), (c.r[0] & 0xFFFFu));
    // 00c853  mov byte ptr gs:[ebp + 0x4c8], 1
    X86_AT(c, 0xc853u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x4C8u)), 0x1u);
L_c85b:
    X86_TICK(c, 25);
    // 00c85b  mov word ptr gs:[ebp + 0x484], cx
    X86_AT(c, 0xc85bu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x484u)), (c.r[1] & 0xFFFFu));
    // 00c863  mov word ptr gs:[ebp + 0x486], bx
    X86_AT(c, 0xc863u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x486u)), (c.r[3] & 0xFFFFu));
    // 00c86b  shl word ptr gs:[ebp + 0x484], 1
    X86_AT(c, 0xc86bu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x484u)); uint32_t v = rd16(ea); bool w; uint32_t r = x86_shift(c, 4, v, 0x1u, 2, w); if (w) wr16(ea, r); }
    // 00c873  shl word ptr gs:[ebp + 0x486], 1
    X86_AT(c, 0xc873u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x486u)); uint32_t v = rd16(ea); bool w; uint32_t r = x86_shift(c, 4, v, 0x1u, 2, w); if (w) wr16(ea, r); }
    // 00c87b  cmp cx, bx
    X86_AT(c, 0xc87bu);
    (void)x86_sub(c, (c.r[1] & 0xFFFFu), (c.r[3] & 0xFFFFu), 0, 2);
    // 00c87e  jbe 0xc892
    X86_AT(c, 0xc87eu);
    if (x86_cc(c, 6)) { goto L_c892; }
    X86_TICK(c, 11);
    // 00c880  mov word ptr gs:[ebp + 0x47e], cx
    X86_AT(c, 0xc880u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x47Eu)), (c.r[1] & 0xFFFFu));
    // 00c888  mov byte ptr gs:[ebp + 0x4c9], 0
    X86_AT(c, 0xc888u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x4C9u)), 0x0u);
    // 00c890  jmp 0xc8a2
    X86_AT(c, 0xc890u);
    goto L_c8a2;
L_c892:
    X86_TICK(c, 4);
    // 00c892  mov word ptr gs:[ebp + 0x47e], bx
    X86_AT(c, 0xc892u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x47Eu)), (c.r[3] & 0xFFFFu));
    // 00c89a  mov byte ptr gs:[ebp + 0x4c9], 1
    X86_AT(c, 0xc89au);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x4C9u)), 0x1u);
L_c8a2:
    X86_TICK(c, 226);
    // 00c8a2  sub eax, eax
    X86_AT(c, 0xc8a2u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 00c8a4  mov word ptr gs:[ebp + 0x43a], ax
    X86_AT(c, 0xc8a4u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x43Au)), (c.r[0] & 0xFFFFu));
    // 00c8ac  mov dword ptr gs:[ebp + 0x444], eax
    X86_AT(c, 0xc8acu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x444u)), c.r[0]);
    // 00c8b3  mov dword ptr gs:[ebp + 0x448], eax
    X86_AT(c, 0xc8b3u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x448u)), c.r[0]);
    // 00c8ba  mov dword ptr gs:[ebp + 0x440], eax
    X86_AT(c, 0xc8bau);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x440u)), c.r[0]);
    // 00c8c1  sub eax, eax
    X86_AT(c, 0xc8c1u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 00c8c3  mov ax, word ptr gs:[ebp + 0x40c]
    X86_AT(c, 0xc8c3u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x40Cu))));
    // 00c8cb  mov word ptr gs:[ebp + 0x438], ax
    X86_AT(c, 0xc8cbu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x438u)), (c.r[0] & 0xFFFFu));
    // 00c8d3  mov ebx, eax
    X86_AT(c, 0xc8d3u);
    c.r[3] = c.r[0];
    // 00c8d5  mul eax
    X86_AT(c, 0xc8d5u);
    x86_mul(c, c.r[0], 4);
    // 00c8d7  mov esi, eax
    X86_AT(c, 0xc8d7u);
    c.r[6] = c.r[0];
    // 00c8d9  add eax, eax
    X86_AT(c, 0xc8d9u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, c.r[0], 0, 4); }
    // 00c8db  mov dword ptr gs:[ebp + 0x458], eax
    X86_AT(c, 0xc8dbu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x458u)), c.r[0]);
    // 00c8e2  add eax, eax
    X86_AT(c, 0xc8e2u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, c.r[0], 0, 4); }
    // 00c8e4  mov dword ptr gs:[ebp + 0x468], eax
    X86_AT(c, 0xc8e4u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x468u)), c.r[0]);
    // 00c8eb  movzx eax, word ptr gs:[ebp + 0x40e]
    X86_AT(c, 0xc8ebu);
    c.r[0] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x40Eu)));
    // 00c8f3  mul eax
    X86_AT(c, 0xc8f3u);
    x86_mul(c, c.r[0], 4);
    // 00c8f5  mov dword ptr gs:[ebp + 0x454], eax
    X86_AT(c, 0xc8f5u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x454u)), c.r[0]);
    // 00c8fc  add eax, eax
    X86_AT(c, 0xc8fcu);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, c.r[0], 0, 4); }
    // 00c8fe  mov dword ptr gs:[ebp + 0x45c], eax
    X86_AT(c, 0xc8feu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x45Cu)), c.r[0]);
    // 00c905  push eax
    X86_AT(c, 0xc905u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 00c906  add eax, eax
    X86_AT(c, 0xc906u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, c.r[0], 0, 4); }
    // 00c908  mov dword ptr gs:[ebp + 0x46c], eax
    X86_AT(c, 0xc908u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x46Cu)), c.r[0]);
    // 00c90f  pop eax
    X86_AT(c, 0xc90fu);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 00c910  mul ebx
    X86_AT(c, 0xc910u);
    x86_mul(c, c.r[3], 4);
    // 00c912  push eax
    X86_AT(c, 0xc912u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 00c913  push edx
    X86_AT(c, 0xc913u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 00c914  add eax, eax
    X86_AT(c, 0xc914u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, c.r[0], 0, 4); }
    // 00c916  adc edx, edx
    X86_AT(c, 0xc916u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[2], c.fl & 1, 4); }
    // 00c918  mov dword ptr gs:[ebp + 0x44c], eax
    X86_AT(c, 0xc918u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x44Cu)), c.r[0]);
    // 00c91f  mov dword ptr gs:[ebp + 0x450], edx
    X86_AT(c, 0xc91fu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x450u)), c.r[2]);
    // 00c926  shr esi, 1
    X86_AT(c, 0xc926u);
    { uint32_t v = c.r[6]; bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 4, w); if (w) c.r[6] = r; }
    // 00c928  add esi, dword ptr gs:[ebp + 0x45c]
    X86_AT(c, 0xc928u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x45Cu))), 0, 4); }
    // 00c92f  not edx
    X86_AT(c, 0xc92fu);
    { uint32_t v = c.r[2]; c.r[2] = ~v & 0xFFFFFFFFu; }
    // 00c931  not eax
    X86_AT(c, 0xc931u);
    { uint32_t v = c.r[0]; c.r[0] = ~v & 0xFFFFFFFFu; }
    // 00c933  add eax, 1
    X86_AT(c, 0xc933u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0x1u, 0, 4); }
    // 00c938  adc edx, 0
    X86_AT(c, 0xc938u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, 0x0u, c.fl & 1, 4); }
    // 00c93b  and edx, 0xffff
    X86_AT(c, 0xc93bu);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & 0xFFFFu, 4); }
    // 00c941  add eax, esi
    X86_AT(c, 0xc941u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, c.r[6], 0, 4); }
    // 00c943  adc edx, 0
    X86_AT(c, 0xc943u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, 0x0u, c.fl & 1, 4); }
    // 00c946  mov dword ptr gs:[ebp + 0x460], eax
    X86_AT(c, 0xc946u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x460u)), c.r[0]);
    // 00c94d  mov dword ptr gs:[ebp + 0x464], edx
    X86_AT(c, 0xc94du);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x464u)), c.r[2]);
    // 00c954  mov eax, dword ptr gs:[ebp + 0x454]
    X86_AT(c, 0xc954u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x454u)));
    // 00c95b  shr eax, 1
    X86_AT(c, 0xc95bu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 4, w); if (w) c.r[0] = r; }
    // 00c95d  add eax, dword ptr gs:[ebp + 0x458]
    X86_AT(c, 0xc95du);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x458u))), 0, 4); }
    // 00c964  mov dword ptr gs:[ebp + 0x43c], eax
    X86_AT(c, 0xc964u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x43Cu)), c.r[0]);
    // 00c96b  pop edx
    X86_AT(c, 0xc96bu);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 00c96c  pop eax
    X86_AT(c, 0xc96cu);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 00c96d  not edx
    X86_AT(c, 0xc96du);
    { uint32_t v = c.r[2]; c.r[2] = ~v & 0xFFFFFFFFu; }
    // 00c96f  not eax
    X86_AT(c, 0xc96fu);
    { uint32_t v = c.r[0]; c.r[0] = ~v & 0xFFFFFFFFu; }
    // 00c971  add eax, 1
    X86_AT(c, 0xc971u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0x1u, 0, 4); }
    // 00c976  adc edx, 0
    X86_AT(c, 0xc976u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, 0x0u, c.fl & 1, 4); }
    // 00c979  and edx, 0xffff
    X86_AT(c, 0xc979u);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & 0xFFFFu, 4); }
    // 00c97f  add dword ptr gs:[ebp + 0x43c], eax
    X86_AT(c, 0xc97fu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x43Cu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 00c986  adc dword ptr gs:[ebp + 0x440], edx
    X86_AT(c, 0xc986u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x440u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[2], c.fl & 1, 4)); }
    // 00c98d  mov dx, word ptr gs:[ebp + 0x438]
    X86_AT(c, 0xc98du);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x438u))));
    // 00c995  mov ax, word ptr gs:[ebp + 0x43a]
    X86_AT(c, 0xc995u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x43Au))));
    // 00c99d  mov bx, word ptr gs:[ebp + 0x488]
    X86_AT(c, 0xc99du);
    s16(c, 3, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x488u))));
    // 00c9a5  mov word ptr gs:[ebp + 0x47a], 0xffff
    X86_AT(c, 0xc9a5u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x47Au)), 0xFFFFu);
    // 00c9af  mov word ptr gs:[ebp + 0x470], dx
    X86_AT(c, 0xc9afu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x470u)), (c.r[2] & 0xFFFFu));
    // 00c9b7  mov word ptr gs:[ebp + 0x472], dx
    X86_AT(c, 0xc9b7u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x472u)), (c.r[2] & 0xFFFFu));
    // 00c9bf  mov word ptr gs:[ebp + 0x474], dx
    X86_AT(c, 0xc9bfu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x474u)), (c.r[2] & 0xFFFFu));
    // 00c9c7  mov word ptr gs:[ebp + 0x476], dx
    X86_AT(c, 0xc9c7u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x476u)), (c.r[2] & 0xFFFFu));
L_c9cf:
    X86_TICK(c, 7);
    // 00c9cf  test dx, dx
    X86_AT(c, 0xc9cfu);
    (void)x86_logic(c, (c.r[2] & 0xFFFFu) & (c.r[2] & 0xFFFFu), 2);
    // 00c9d2  jge 0xca16
    X86_AT(c, 0xc9d2u);
    if (x86_cc(c, 13)) { goto L_ca16; }
    X86_TICK(c, 12);
    // 00c9d4  cmp byte ptr gs:[ebp + 0x41c], 0
    X86_AT(c, 0xc9d4u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x41Cu))), 0x0u, 0, 1);
    // 00c9dc  jne 0xca13
    X86_AT(c, 0xc9dcu);
    if (x86_cc(c, 5)) { goto L_ca13; }
    X86_TICK(c, 12);
    // 00c9de  cmp word ptr gs:[ebp + 0x40e], ax
    X86_AT(c, 0xc9deu);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x40Eu))), (c.r[0] & 0xFFFFu), 0, 2);
    // 00c9e6  jne 0xca13
    X86_AT(c, 0xc9e6u);
    if (x86_cc(c, 5)) { goto L_ca13; }
    X86_TICK(c, 12);
    // 00c9e8  cmp word ptr gs:[ebp + 0x472], 0
    X86_AT(c, 0xc9e8u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x472u))), 0x0u, 0, 2);
    // 00c9f1  jl 0xca13
    X86_AT(c, 0xc9f1u);
    if (x86_cc(c, 12)) { goto L_ca13; }
    X86_TICK(c, 17);
    // 00c9f3  mov word ptr gs:[ebp + 0x47a], ax
    X86_AT(c, 0xc9f3u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x47Au)), (c.r[0] & 0xFFFFu));
    // 00c9fb  mov esi, dword ptr gs:[ebp + 0x48c]
    X86_AT(c, 0xc9fbu);
    c.r[6] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x48Cu)));
    // 00ca02  mov edi, dword ptr gs:[ebp + 0x490]
    X86_AT(c, 0xca02u);
    c.r[7] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x490u)));
    // 00ca09  call 0xd134
    X86_AT(c, 0xca09u);
    push32(c, 0xca0eu); f_0000d134(c); X86_RET(c, 0xca0eu);
    X86_TICK(c, 7);
    // 00ca0e  call 0xd31c
    X86_AT(c, 0xca0eu);
    push32(c, 0xca13u); f_0000d31c(c); X86_RET(c, 0xca13u);
L_ca13:
    X86_TICK(c, 12);
    // 00ca13  xor ah, ah
    X86_AT(c, 0xca13u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_logic(c, v ^ g8(c, 4), 1)); }
    // 00ca15  ret 
    X86_AT(c, 0xca15u);
    c.eip = pop32(c); return;
L_ca16:
    X86_TICK(c, 20);
    // 00ca16  mov esi, dword ptr gs:[ebp + 0x48c]
    X86_AT(c, 0xca16u);
    c.r[6] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x48Cu)));
    // 00ca1d  mov edi, dword ptr gs:[ebp + 0x490]
    X86_AT(c, 0xca1du);
    c.r[7] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x490u)));
    // 00ca24  cmp byte ptr gs:[ebp + 0x41e], 1
    X86_AT(c, 0xca24u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x41Eu))), 0x1u, 0, 1);
    // 00ca2c  jne 0xcbb0
    X86_AT(c, 0xca2cu);
    if (x86_cc(c, 5)) { goto L_cbb0; }
    X86_TICK(c, 12);
    // 00ca32  cmp word ptr gs:[ebp + 0x47a], ax
    X86_AT(c, 0xca32u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x47Au))), (c.r[0] & 0xFFFFu), 0, 2);
    // 00ca3a  jge 0xcbb0
    X86_AT(c, 0xca3au);
    if (x86_cc(c, 13)) { goto L_cbb0; }
    X86_TICK(c, 15);
    // 00ca40  push eax
    X86_AT(c, 0xca40u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 00ca41  mov ax, word ptr gs:[ebp + 0x4bc]
    X86_AT(c, 0xca41u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x4BCu))));
    // 00ca49  mov word ptr gs:[ebp + 0x4c0], ax
    X86_AT(c, 0xca49u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x4C0u)), (c.r[0] & 0xFFFFu));
    // 00ca51  cmp ax, dx
    X86_AT(c, 0xca51u);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), (c.r[2] & 0xFFFFu), 0, 2);
    // 00ca54  jbe 0xca7b
    X86_AT(c, 0xca54u);
    if (x86_cc(c, 6)) { goto L_ca7b; }
    X86_TICK(c, 12);
    // 00ca56  test byte ptr gs:[ebp + 0x4ba], 1
    X86_AT(c, 0xca56u);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x4BAu))) & 0x1u, 1);
    // 00ca5e  jne 0xca7b
    X86_AT(c, 0xca5eu);
    if (x86_cc(c, 5)) { goto L_ca7b; }
    X86_TICK(c, 18);
    // 00ca60  mov byte ptr gs:[ebp + 0x4ba], 1
    X86_AT(c, 0xca60u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x4BAu)), 0x1u);
    // 00ca68  mov byte ptr gs:[ebp + 0x4b8], 1
    X86_AT(c, 0xca68u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x4B8u)), 0x1u);
    // 00ca70  xor byte ptr gs:[ebp + esi*1 + 0x494], 1
    X86_AT(c, 0xca70u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x494u)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v ^ 0x1u, 1)); }
    // 00ca79  jmp 0xcaf8
    X86_AT(c, 0xca79u);
    goto L_caf8;
L_ca7b:
    X86_TICK(c, 16);
    // 00ca7b  mov cx, word ptr gs:[ebp + 0x47c]
    X86_AT(c, 0xca7bu);
    s16(c, 1, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x47Cu))));
    // 00ca83  cmp byte ptr gs:[ebp + 0x4c8], 0
    X86_AT(c, 0xca83u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x4C8u))), 0x0u, 0, 1);
    // 00ca8b  jne 0xcacc
    X86_AT(c, 0xca8bu);
    if (x86_cc(c, 5)) { goto L_cacc; }
L_ca8d:
    X86_TICK(c, 7);
    // 00ca8d  cmp ax, dx
    X86_AT(c, 0xca8du);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), (c.r[2] & 0xFFFFu), 0, 2);
    // 00ca90  ja 0xcaba
    X86_AT(c, 0xca90u);
    if (x86_cc(c, 7)) { goto L_caba; }
    X86_TICK(c, 13);
    // 00ca92  inc ax
    X86_AT(c, 0xca92u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_inc(c, v, 2)); }
    // 00ca94  sub cx, word ptr gs:[ebp + 0x482]
    X86_AT(c, 0xca94u);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_sub(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x482u))), 0, 2)); }
    // 00ca9c  jae 0xca8d
    X86_AT(c, 0xca9cu);
    if (x86_cc(c, 3)) { X86_POLL(c, 0xca8du); goto L_ca8d; }
    X86_TICK(c, 19);
    // 00ca9e  mov word ptr gs:[ebp + 0x4bc], ax
    X86_AT(c, 0xca9eu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x4BCu)), (c.r[0] & 0xFFFFu));
    // 00caa6  dec ax
    X86_AT(c, 0xcaa6u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_dec(c, v, 2)); }
    // 00caa8  mov word ptr gs:[ebp + 0x4c2], ax
    X86_AT(c, 0xcaa8u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x4C2u)), (c.r[0] & 0xFFFFu));
    // 00cab0  add cx, word ptr gs:[ebp + 0x480]
    X86_AT(c, 0xcab0u);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x480u))), 0, 2)); }
    // 00cab8  jmp 0xcaf0
    X86_AT(c, 0xcab8u);
    goto L_caf0;
L_caba:
    X86_TICK(c, 11);
    // 00caba  mov word ptr gs:[ebp + 0x4bc], ax
    X86_AT(c, 0xcabau);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x4BCu)), (c.r[0] & 0xFFFFu));
    // 00cac2  mov word ptr gs:[ebp + 0x4c2], dx
    X86_AT(c, 0xcac2u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x4C2u)), (c.r[2] & 0xFFFFu));
    // 00caca  jmp 0xcaf0
    X86_AT(c, 0xcacau);
    goto L_caf0;
L_cacc:
    X86_TICK(c, 13);
    // 00cacc  mov word ptr gs:[ebp + 0x4c2], ax
    X86_AT(c, 0xcaccu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x4C2u)), (c.r[0] & 0xFFFFu));
    // 00cad4  sub cx, word ptr gs:[ebp + 0x480]
    X86_AT(c, 0xcad4u);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_sub(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x480u))), 0, 2)); }
    // 00cadc  jae 0xcae8
    X86_AT(c, 0xcadcu);
    if (x86_cc(c, 3)) { goto L_cae8; }
    X86_TICK(c, 8);
    // 00cade  inc ax
    X86_AT(c, 0xcadeu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_inc(c, v, 2)); }
    // 00cae0  add cx, word ptr gs:[ebp + 0x482]
    X86_AT(c, 0xcae0u);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x482u))), 0, 2)); }
L_cae8:
    X86_TICK(c, 2);
    // 00cae8  mov word ptr gs:[ebp + 0x4bc], ax
    X86_AT(c, 0xcae8u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x4BCu)), (c.r[0] & 0xFFFFu));
L_caf0:
    X86_TICK(c, 2);
    // 00caf0  mov word ptr gs:[ebp + 0x47c], cx
    X86_AT(c, 0xcaf0u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x47Cu)), (c.r[1] & 0xFFFFu));
L_caf8:
    X86_TICK(c, 13);
    // 00caf8  mov ax, word ptr gs:[ebp + 0x4be]
    X86_AT(c, 0xcaf8u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x4BEu))));
    // 00cb00  mov word ptr gs:[ebp + 0x4c4], ax
    X86_AT(c, 0xcb00u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x4C4u)), (c.r[0] & 0xFFFFu));
    // 00cb08  cmp ax, dx
    X86_AT(c, 0xcb08u);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), (c.r[2] & 0xFFFFu), 0, 2);
    // 00cb0b  jbe 0xcb32
    X86_AT(c, 0xcb0bu);
    if (x86_cc(c, 6)) { goto L_cb32; }
    X86_TICK(c, 12);
    // 00cb0d  test byte ptr gs:[ebp + 0x4bb], 1
    X86_AT(c, 0xcb0du);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x4BBu))) & 0x1u, 1);
    // 00cb15  jne 0xcb32
    X86_AT(c, 0xcb15u);
    if (x86_cc(c, 5)) { goto L_cb32; }
    X86_TICK(c, 18);
    // 00cb17  mov byte ptr gs:[ebp + 0x4bb], 1
    X86_AT(c, 0xcb17u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x4BBu)), 0x1u);
    // 00cb1f  mov byte ptr gs:[ebp + 0x4b9], 1
    X86_AT(c, 0xcb1fu);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x4B9u)), 0x1u);
    // 00cb27  xor byte ptr gs:[ebp + edi*1 + 0x494], 1
    X86_AT(c, 0xcb27u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + c.r[7] + 0x494u)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v ^ 0x1u, 1)); }
    // 00cb30  jmp 0xcbaf
    X86_AT(c, 0xcb30u);
    goto L_cbaf;
L_cb32:
    X86_TICK(c, 16);
    // 00cb32  mov cx, word ptr gs:[ebp + 0x47e]
    X86_AT(c, 0xcb32u);
    s16(c, 1, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x47Eu))));
    // 00cb3a  cmp byte ptr gs:[ebp + 0x4c9], 0
    X86_AT(c, 0xcb3au);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x4C9u))), 0x0u, 0, 1);
    // 00cb42  jne 0xcb83
    X86_AT(c, 0xcb42u);
    if (x86_cc(c, 5)) { goto L_cb83; }
L_cb44:
    X86_TICK(c, 7);
    // 00cb44  cmp ax, dx
    X86_AT(c, 0xcb44u);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), (c.r[2] & 0xFFFFu), 0, 2);
    // 00cb47  ja 0xcb71
    X86_AT(c, 0xcb47u);
    if (x86_cc(c, 7)) { goto L_cb71; }
    X86_TICK(c, 13);
    // 00cb49  inc ax
    X86_AT(c, 0xcb49u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_inc(c, v, 2)); }
    // 00cb4b  sub cx, word ptr gs:[ebp + 0x486]
    X86_AT(c, 0xcb4bu);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_sub(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x486u))), 0, 2)); }
    // 00cb53  jae 0xcb44
    X86_AT(c, 0xcb53u);
    if (x86_cc(c, 3)) { X86_POLL(c, 0xcb44u); goto L_cb44; }
    X86_TICK(c, 19);
    // 00cb55  mov word ptr gs:[ebp + 0x4be], ax
    X86_AT(c, 0xcb55u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x4BEu)), (c.r[0] & 0xFFFFu));
    // 00cb5d  dec ax
    X86_AT(c, 0xcb5du);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_dec(c, v, 2)); }
    // 00cb5f  mov word ptr gs:[ebp + 0x4c6], ax
    X86_AT(c, 0xcb5fu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x4C6u)), (c.r[0] & 0xFFFFu));
    // 00cb67  add cx, word ptr gs:[ebp + 0x484]
    X86_AT(c, 0xcb67u);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x484u))), 0, 2)); }
    // 00cb6f  jmp 0xcba7
    X86_AT(c, 0xcb6fu);
    goto L_cba7;
L_cb71:
    X86_TICK(c, 11);
    // 00cb71  mov word ptr gs:[ebp + 0x4be], ax
    X86_AT(c, 0xcb71u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x4BEu)), (c.r[0] & 0xFFFFu));
    // 00cb79  mov word ptr gs:[ebp + 0x4c6], dx
    X86_AT(c, 0xcb79u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x4C6u)), (c.r[2] & 0xFFFFu));
    // 00cb81  jmp 0xcba7
    X86_AT(c, 0xcb81u);
    goto L_cba7;
L_cb83:
    X86_TICK(c, 13);
    // 00cb83  mov word ptr gs:[ebp + 0x4c6], ax
    X86_AT(c, 0xcb83u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x4C6u)), (c.r[0] & 0xFFFFu));
    // 00cb8b  sub cx, word ptr gs:[ebp + 0x484]
    X86_AT(c, 0xcb8bu);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_sub(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x484u))), 0, 2)); }
    // 00cb93  jae 0xcb9f
    X86_AT(c, 0xcb93u);
    if (x86_cc(c, 3)) { goto L_cb9f; }
    X86_TICK(c, 8);
    // 00cb95  inc ax
    X86_AT(c, 0xcb95u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_inc(c, v, 2)); }
    // 00cb97  add cx, word ptr gs:[ebp + 0x486]
    X86_AT(c, 0xcb97u);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x486u))), 0, 2)); }
L_cb9f:
    X86_TICK(c, 2);
    // 00cb9f  mov word ptr gs:[ebp + 0x4be], ax
    X86_AT(c, 0xcb9fu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x4BEu)), (c.r[0] & 0xFFFFu));
L_cba7:
    X86_TICK(c, 2);
    // 00cba7  mov word ptr gs:[ebp + 0x47e], cx
    X86_AT(c, 0xcba7u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x47Eu)), (c.r[1] & 0xFFFFu));
L_cbaf:
    X86_TICK(c, 4);
    // 00cbaf  pop eax
    X86_AT(c, 0xcbafu);
    { uint32_t v = pop32(c); c.r[0] = v; }
L_cbb0:
    X86_TICK(c, 12);
    // 00cbb0  cmp byte ptr gs:[ebp + 0x41e], 1
    X86_AT(c, 0xcbb0u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x41Eu))), 0x1u, 0, 1);
    // 00cbb8  jne 0xccce
    X86_AT(c, 0xcbb8u);
    if (x86_cc(c, 5)) { goto L_ccce; }
    X86_TICK(c, 12);
    // 00cbbe  test byte ptr gs:[ebp + 0x4ba], 1
    X86_AT(c, 0xcbbeu);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x4BAu))) & 0x1u, 1);
    // 00cbc6  jne 0xcc57
    X86_AT(c, 0xcbc6u);
    if (x86_cc(c, 5)) { goto L_cc57; }
    X86_TICK(c, 11);
    // 00cbcc  mov cx, word ptr gs:[ebp + 0x4c0]
    X86_AT(c, 0xcbccu);
    s16(c, 1, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x4C0u))));
    // 00cbd4  cmp dx, cx
    X86_AT(c, 0xcbd4u);
    (void)x86_sub(c, (c.r[2] & 0xFFFFu), (c.r[1] & 0xFFFFu), 0, 2);
    // 00cbd7  jae 0xcbf4
    X86_AT(c, 0xcbd7u);
    if (x86_cc(c, 3)) { goto L_cbf4; }
    X86_TICK(c, 18);
    // 00cbd9  mov byte ptr gs:[ebp + 0x4b8], 1
    X86_AT(c, 0xcbd9u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x4B8u)), 0x1u);
    // 00cbe1  mov byte ptr gs:[ebp + 0x4ba], 1
    X86_AT(c, 0xcbe1u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x4BAu)), 0x1u);
    // 00cbe9  xor byte ptr gs:[ebp + esi*1 + 0x494], 1
    X86_AT(c, 0xcbe9u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x494u)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v ^ 0x1u, 1)); }
    // 00cbf2  jmp 0xcc57
    X86_AT(c, 0xcbf2u);
    goto L_cc57;
L_cbf4:
    X86_TICK(c, 5);
    // 00cbf4  jne 0xcbfe
    X86_AT(c, 0xcbf4u);
    if (x86_cc(c, 5)) { goto L_cbfe; }
    X86_TICK(c, 2);
    // 00cbf6  mov byte ptr gs:[ebp + 0x4b8], 2
    X86_AT(c, 0xcbf6u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x4B8u)), 0x2u);
L_cbfe:
    X86_TICK(c, 11);
    // 00cbfe  mov cx, word ptr gs:[ebp + 0x4c2]
    X86_AT(c, 0xcbfeu);
    s16(c, 1, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x4C2u))));
    // 00cc06  cmp dx, cx
    X86_AT(c, 0xcc06u);
    (void)x86_sub(c, (c.r[2] & 0xFFFFu), (c.r[1] & 0xFFFFu), 0, 2);
    // 00cc09  ja 0xcc3b
    X86_AT(c, 0xcc09u);
    if (x86_cc(c, 7)) { goto L_cc3b; }
    X86_TICK(c, 25);
    // 00cc0b  or byte ptr gs:[ebp + esi*1 + 0x494], 2
    X86_AT(c, 0xcc0bu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x494u)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | 0x2u, 1)); }
    // 00cc14  dec dx
    X86_AT(c, 0xcc14u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_dec(c, v, 2)); }
    // 00cc16  mov word ptr gs:[ebp + 0x4c2], dx
    X86_AT(c, 0xcc16u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x4C2u)), (c.r[2] & 0xFFFFu));
    // 00cc1e  inc dx
    X86_AT(c, 0xcc1eu);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_inc(c, v, 2)); }
    // 00cc20  cmp byte ptr gs:[ebp + 0x478], 0
    X86_AT(c, 0xcc20u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x478u))), 0x0u, 0, 1);
    // 00cc28  jne 0xcc57
    X86_AT(c, 0xcc28u);
    if (x86_cc(c, 5)) { goto L_cc57; }
    X86_TICK(c, 15);
    // 00cc2a  mov word ptr gs:[ebp + 0x474], dx
    X86_AT(c, 0xcc2au);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x474u)), (c.r[2] & 0xFFFFu));
    // 00cc32  not byte ptr gs:[ebp + 0x478]
    X86_AT(c, 0xcc32u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x478u)); uint32_t v = rd8(ea); wr8(ea, ~v & 0xFFu); }
    // 00cc39  jmp 0xcc57
    X86_AT(c, 0xcc39u);
    goto L_cc57;
L_cc3b:
    X86_TICK(c, 7);
    // 00cc3b  cmp bh, bl
    X86_AT(c, 0xcc3bu);
    (void)x86_sub(c, g8(c, 7), g8(c, 3), 0, 1);
    // 00cc3d  jne 0xcc57
    X86_AT(c, 0xcc3du);
    if (x86_cc(c, 5)) { goto L_cc57; }
    X86_TICK(c, 7);
    // 00cc3f  cmp dx, cx
    X86_AT(c, 0xcc3fu);
    (void)x86_sub(c, (c.r[2] & 0xFFFFu), (c.r[1] & 0xFFFFu), 0, 2);
    // 00cc42  jbe 0xcc57
    X86_AT(c, 0xcc42u);
    if (x86_cc(c, 6)) { goto L_cc57; }
    X86_TICK(c, 12);
    // 00cc44  cmp word ptr gs:[ebp + 0x4bc], dx
    X86_AT(c, 0xcc44u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x4BCu))), (c.r[2] & 0xFFFFu), 0, 2);
    // 00cc4c  jne 0xcc57
    X86_AT(c, 0xcc4cu);
    if (x86_cc(c, 5)) { goto L_cc57; }
    X86_TICK(c, 7);
    // 00cc4e  or byte ptr gs:[ebp + esi*1 + 0x494], 2
    X86_AT(c, 0xcc4eu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x494u)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | 0x2u, 1)); }
L_cc57:
    X86_TICK(c, 12);
    // 00cc57  test byte ptr gs:[ebp + 0x4bb], 1
    X86_AT(c, 0xcc57u);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x4BBu))) & 0x1u, 1);
    // 00cc5f  jne 0xccce
    X86_AT(c, 0xcc5fu);
    if (x86_cc(c, 5)) { goto L_ccce; }
    X86_TICK(c, 11);
    // 00cc61  mov cx, word ptr gs:[ebp + 0x4c4]
    X86_AT(c, 0xcc61u);
    s16(c, 1, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x4C4u))));
    // 00cc69  cmp dx, cx
    X86_AT(c, 0xcc69u);
    (void)x86_sub(c, (c.r[2] & 0xFFFFu), (c.r[1] & 0xFFFFu), 0, 2);
    // 00cc6c  jae 0xcc89
    X86_AT(c, 0xcc6cu);
    if (x86_cc(c, 3)) { goto L_cc89; }
    X86_TICK(c, 18);
    // 00cc6e  mov byte ptr gs:[ebp + 0x4b9], 1
    X86_AT(c, 0xcc6eu);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x4B9u)), 0x1u);
    // 00cc76  mov byte ptr gs:[ebp + 0x4bb], 1
    X86_AT(c, 0xcc76u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x4BBu)), 0x1u);
    // 00cc7e  xor byte ptr gs:[ebp + edi*1 + 0x494], 1
    X86_AT(c, 0xcc7eu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + c.r[7] + 0x494u)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v ^ 0x1u, 1)); }
    // 00cc87  jmp 0xccce
    X86_AT(c, 0xcc87u);
    goto L_ccce;
L_cc89:
    X86_TICK(c, 5);
    // 00cc89  jne 0xcc93
    X86_AT(c, 0xcc89u);
    if (x86_cc(c, 5)) { goto L_cc93; }
    X86_TICK(c, 2);
    // 00cc8b  mov byte ptr gs:[ebp + 0x4b9], 2
    X86_AT(c, 0xcc8bu);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x4B9u)), 0x2u);
L_cc93:
    X86_TICK(c, 11);
    // 00cc93  mov cx, word ptr gs:[ebp + 0x4c6]
    X86_AT(c, 0xcc93u);
    s16(c, 1, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x4C6u))));
    // 00cc9b  cmp dx, cx
    X86_AT(c, 0xcc9bu);
    (void)x86_sub(c, (c.r[2] & 0xFFFFu), (c.r[1] & 0xFFFFu), 0, 2);
    // 00cc9e  ja 0xccce
    X86_AT(c, 0xcc9eu);
    if (x86_cc(c, 7)) { goto L_ccce; }
    X86_TICK(c, 25);
    // 00cca0  or byte ptr gs:[ebp + edi*1 + 0x494], 2
    X86_AT(c, 0xcca0u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + c.r[7] + 0x494u)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | 0x2u, 1)); }
    // 00cca9  dec dx
    X86_AT(c, 0xcca9u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_dec(c, v, 2)); }
    // 00ccab  mov word ptr gs:[ebp + 0x4c6], dx
    X86_AT(c, 0xccabu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x4C6u)), (c.r[2] & 0xFFFFu));
    // 00ccb3  inc dx
    X86_AT(c, 0xccb3u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_inc(c, v, 2)); }
    // 00ccb5  cmp byte ptr gs:[ebp + 0x479], 0
    X86_AT(c, 0xccb5u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x479u))), 0x0u, 0, 1);
    // 00ccbd  jne 0xccce
    X86_AT(c, 0xccbdu);
    if (x86_cc(c, 5)) { goto L_ccce; }
    X86_TICK(c, 8);
    // 00ccbf  mov word ptr gs:[ebp + 0x476], dx
    X86_AT(c, 0xccbfu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x476u)), (c.r[2] & 0xFFFFu));
    // 00ccc7  not byte ptr gs:[ebp + 0x479]
    X86_AT(c, 0xccc7u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x479u)); uint32_t v = rd8(ea); wr8(ea, ~v & 0xFFu); }
L_ccce:
    X86_TICK(c, 12);
    // 00ccce  cmp byte ptr gs:[ebp + 0x41c], 1
    X86_AT(c, 0xccceu);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x41Cu))), 0x1u, 0, 1);
    // 00ccd6  jne 0xcd90
    X86_AT(c, 0xccd6u);
    if (x86_cc(c, 5)) { goto L_cd90; }
    X86_TICK(c, 9);
    // 00ccdc  push ebx
    X86_AT(c, 0xccdcu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 00ccdd  or dx, dx
    X86_AT(c, 0xccddu);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_logic(c, v | (c.r[2] & 0xFFFFu), 2)); }
    // 00cce0  je 0xcd36
    X86_AT(c, 0xcce0u);
    if (x86_cc(c, 4)) { goto L_cd36; }
    X86_TICK(c, 12);
    // 00cce2  cmp byte ptr gs:[ebp + 0x494], 0
    X86_AT(c, 0xcce2u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x494u))), 0x0u, 0, 1);
    // 00ccea  je 0xcd09
    X86_AT(c, 0xcceau);
    if (x86_cc(c, 4)) { goto L_cd09; }
    X86_TICK(c, 15);
    // 00ccec  push edx
    X86_AT(c, 0xccecu);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 00cced  push eax
    X86_AT(c, 0xccedu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 00ccee  add dx, word ptr gs:[ebp + 0x408]
    X86_AT(c, 0xcceeu);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x408u))), 0, 2)); }
    // 00ccf6  jo 0xcd07
    X86_AT(c, 0xccf6u);
    if (x86_cc(c, 0)) { goto L_cd07; }
    X86_TICK(c, 11);
    // 00ccf8  add ax, word ptr gs:[ebp + 0x40a]
    X86_AT(c, 0xccf8u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x40Au))), 0, 2)); }
    // 00cd00  jo 0xcd07
    X86_AT(c, 0xcd00u);
    if (x86_cc(c, 0)) { goto L_cd07; }
    X86_TICK(c, 7);
    // 00cd02  call 0x5db0
    X86_AT(c, 0xcd02u);
    push32(c, 0xcd07u); f_00005db0(c); X86_RET(c, 0xcd07u);
L_cd07:
    X86_TICK(c, 8);
    // 00cd07  pop eax
    X86_AT(c, 0xcd07u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 00cd08  pop edx
    X86_AT(c, 0xcd08u);
    { uint32_t v = pop32(c); c.r[2] = v; }
L_cd09:
    X86_TICK(c, 12);
    // 00cd09  cmp byte ptr gs:[ebp + 0x496], 0
    X86_AT(c, 0xcd09u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x496u))), 0x0u, 0, 1);
    // 00cd11  je 0xcd36
    X86_AT(c, 0xcd11u);
    if (x86_cc(c, 4)) { goto L_cd36; }
    X86_TICK(c, 19);
    // 00cd13  push edx
    X86_AT(c, 0xcd13u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 00cd14  push eax
    X86_AT(c, 0xcd14u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 00cd15  neg dx
    X86_AT(c, 0xcd15u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_neg(c, v, 2)); }
    // 00cd18  neg ax
    X86_AT(c, 0xcd18u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_neg(c, v, 2)); }
    // 00cd1b  add dx, word ptr gs:[ebp + 0x408]
    X86_AT(c, 0xcd1bu);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x408u))), 0, 2)); }
    // 00cd23  jo 0xcd34
    X86_AT(c, 0xcd23u);
    if (x86_cc(c, 0)) { goto L_cd34; }
    X86_TICK(c, 11);
    // 00cd25  add ax, word ptr gs:[ebp + 0x40a]
    X86_AT(c, 0xcd25u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x40Au))), 0, 2)); }
    // 00cd2d  jo 0xcd34
    X86_AT(c, 0xcd2du);
    if (x86_cc(c, 0)) { goto L_cd34; }
    X86_TICK(c, 7);
    // 00cd2f  call 0x5e58
    X86_AT(c, 0xcd2fu);
    push32(c, 0xcd34u); f_00005e58(c); X86_RET(c, 0xcd34u);
L_cd34:
    X86_TICK(c, 8);
    // 00cd34  pop eax
    X86_AT(c, 0xcd34u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 00cd35  pop edx
    X86_AT(c, 0xcd35u);
    { uint32_t v = pop32(c); c.r[2] = v; }
L_cd36:
    X86_TICK(c, 7);
    // 00cd36  or ax, ax
    X86_AT(c, 0xcd36u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_logic(c, v | (c.r[0] & 0xFFFFu), 2)); }
    // 00cd39  je 0xcd8f
    X86_AT(c, 0xcd39u);
    if (x86_cc(c, 4)) { goto L_cd8f; }
    X86_TICK(c, 12);
    // 00cd3b  cmp byte ptr gs:[ebp + 0x495], 0
    X86_AT(c, 0xcd3bu);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x495u))), 0x0u, 0, 1);
    // 00cd43  je 0xcd65
    X86_AT(c, 0xcd43u);
    if (x86_cc(c, 4)) { goto L_cd65; }
    X86_TICK(c, 17);
    // 00cd45  push edx
    X86_AT(c, 0xcd45u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 00cd46  push eax
    X86_AT(c, 0xcd46u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 00cd47  neg dx
    X86_AT(c, 0xcd47u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_neg(c, v, 2)); }
    // 00cd4a  add dx, word ptr gs:[ebp + 0x408]
    X86_AT(c, 0xcd4au);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x408u))), 0, 2)); }
    // 00cd52  jo 0xcd63
    X86_AT(c, 0xcd52u);
    if (x86_cc(c, 0)) { goto L_cd63; }
    X86_TICK(c, 11);
    // 00cd54  add ax, word ptr gs:[ebp + 0x40a]
    X86_AT(c, 0xcd54u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x40Au))), 0, 2)); }
    // 00cd5c  jo 0xcd63
    X86_AT(c, 0xcd5cu);
    if (x86_cc(c, 0)) { goto L_cd63; }
    X86_TICK(c, 7);
    // 00cd5e  call 0x5e04
    X86_AT(c, 0xcd5eu);
    push32(c, 0xcd63u); f_00005e04(c); X86_RET(c, 0xcd63u);
L_cd63:
    X86_TICK(c, 8);
    // 00cd63  pop eax
    X86_AT(c, 0xcd63u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 00cd64  pop edx
    X86_AT(c, 0xcd64u);
    { uint32_t v = pop32(c); c.r[2] = v; }
L_cd65:
    X86_TICK(c, 12);
    // 00cd65  cmp byte ptr gs:[ebp + 0x497], 0
    X86_AT(c, 0xcd65u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x497u))), 0x0u, 0, 1);
    // 00cd6d  je 0xcd8f
    X86_AT(c, 0xcd6du);
    if (x86_cc(c, 4)) { goto L_cd8f; }
    X86_TICK(c, 17);
    // 00cd6f  push edx
    X86_AT(c, 0xcd6fu);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 00cd70  push eax
    X86_AT(c, 0xcd70u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 00cd71  neg ax
    X86_AT(c, 0xcd71u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_neg(c, v, 2)); }
    // 00cd74  add dx, word ptr gs:[ebp + 0x408]
    X86_AT(c, 0xcd74u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x408u))), 0, 2)); }
    // 00cd7c  jo 0xcd8d
    X86_AT(c, 0xcd7cu);
    if (x86_cc(c, 0)) { goto L_cd8d; }
    X86_TICK(c, 11);
    // 00cd7e  add ax, word ptr gs:[ebp + 0x40a]
    X86_AT(c, 0xcd7eu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x40Au))), 0, 2)); }
    // 00cd86  jo 0xcd8d
    X86_AT(c, 0xcd86u);
    if (x86_cc(c, 0)) { goto L_cd8d; }
    X86_TICK(c, 7);
    // 00cd88  call 0x5eac
    X86_AT(c, 0xcd88u);
    push32(c, 0xcd8du); f_00005eac(c); X86_RET(c, 0xcd8du);
L_cd8d:
    X86_TICK(c, 8);
    // 00cd8d  pop eax
    X86_AT(c, 0xcd8du);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 00cd8e  pop edx
    X86_AT(c, 0xcd8eu);
    { uint32_t v = pop32(c); c.r[2] = v; }
L_cd8f:
    X86_TICK(c, 4);
    // 00cd8f  pop ebx
    X86_AT(c, 0xcd8fu);
    { uint32_t v = pop32(c); c.r[3] = v; }
L_cd90:
    X86_TICK(c, 27);
    // 00cd90  push eax
    X86_AT(c, 0xcd90u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 00cd91  mov eax, dword ptr gs:[ebp + 0x494]
    X86_AT(c, 0xcd91u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x494u)));
    // 00cd98  mov dword ptr gs:[ebp + 0x498], eax
    X86_AT(c, 0xcd98u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x498u)), c.r[0]);
    // 00cd9f  and eax, 0x1010101
    X86_AT(c, 0xcd9fu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x1010101u, 4); }
    // 00cda4  mov dword ptr gs:[ebp + 0x494], eax
    X86_AT(c, 0xcda4u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x494u)), c.r[0]);
    // 00cdab  pop eax
    X86_AT(c, 0xcdabu);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 00cdac  mov word ptr gs:[ebp + 0x470], dx
    X86_AT(c, 0xcdacu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x470u)), (c.r[2] & 0xFFFFu));
    // 00cdb4  mov word ptr gs:[ebp + 0x47a], ax
    X86_AT(c, 0xcdb4u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x47Au)), (c.r[0] & 0xFFFFu));
    // 00cdbc  call 0xd794
    X86_AT(c, 0xcdbcu);
    push32(c, 0xcdc1u); f_0000d794(c); X86_RET(c, 0xcdc1u);
    X86_TICK(c, 12);
    // 00cdc1  cmp byte ptr gs:[ebp + 0x41f], 1
    X86_AT(c, 0xcdc1u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x41Fu))), 0x1u, 0, 1);
    // 00cdc9  jne 0xd001
    X86_AT(c, 0xcdc9u);
    if (x86_cc(c, 5)) { goto L_d001; }
    X86_TICK(c, 12);
    // 00cdcf  cmp word ptr gs:[ebp + 0x47a], ax
    X86_AT(c, 0xcdcfu);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x47Au))), (c.r[0] & 0xFFFFu), 0, 2);
    // 00cdd7  jae 0xd001
    X86_AT(c, 0xcdd7u);
    if (x86_cc(c, 3)) { goto L_d001; }
    X86_TICK(c, 27);
    // 00cddd  push edx
    X86_AT(c, 0xcdddu);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 00cdde  push eax
    X86_AT(c, 0xcddeu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 00cddf  mov esi, dword ptr gs:[ebp + 0x4c0]
    X86_AT(c, 0xcddfu);
    c.r[6] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x4C0u)));
    // 00cde6  shld edi, esi, 0x10
    X86_AT(c, 0xcde6u);
    { uint32_t v = c.r[7]; bool w; uint32_t r = x86_double(c, true, v, c.r[6], 0x10u, 4, w); if (w) c.r[7] = r; }
    // 00cdea  push esi
    X86_AT(c, 0xcdeau);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 00cdeb  push edi
    X86_AT(c, 0xcdebu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 00cdec  cmp byte ptr gs:[ebp + 0x41c], 1
    X86_AT(c, 0xcdecu);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x41Cu))), 0x1u, 0, 1);
    // 00cdf4  jne 0xce13
    X86_AT(c, 0xcdf4u);
    if (x86_cc(c, 5)) { goto L_ce13; }
    X86_TICK(c, 15);
    // 00cdf6  mov ax, word ptr gs:[ebp + 0x47a]
    X86_AT(c, 0xcdf6u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x47Au))));
    // 00cdfe  mov cx, word ptr gs:[ebp + 0x40a]
    X86_AT(c, 0xcdfeu);
    s16(c, 1, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x40Au))));
    // 00ce06  test bh, 2
    X86_AT(c, 0xce06u);
    (void)x86_logic(c, g8(c, 7) & 0x2u, 1);
    // 00ce09  je 0xce10
    X86_AT(c, 0xce09u);
    if (x86_cc(c, 4)) { goto L_ce10; }
    X86_TICK(c, 9);
    // 00ce0b  sub cx, ax
    X86_AT(c, 0xce0bu);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_sub(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 00ce0e  jmp 0xce13
    X86_AT(c, 0xce0eu);
    goto L_ce13;
L_ce10:
    X86_TICK(c, 2);
    // 00ce10  add cx, ax
    X86_AT(c, 0xce10u);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
L_ce13:
    X86_TICK(c, 5);
    // 00ce13  jo 0xce88
    X86_AT(c, 0xce13u);
    if (x86_cc(c, 0)) { goto L_ce88; }
    X86_TICK(c, 18);
    // 00ce15  mov ax, word ptr gs:[ebp + 0x408]
    X86_AT(c, 0xce15u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x408u))));
    // 00ce1d  mov dx, ax
    X86_AT(c, 0xce1du);
    s16(c, 2, (c.r[0] & 0xFFFFu));
    // 00ce20  cmp byte ptr gs:[ebp + 0x41c], 0
    X86_AT(c, 0xce20u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x41Cu))), 0x0u, 0, 1);
    // 00ce28  jne 0xce3c
    X86_AT(c, 0xce28u);
    if (x86_cc(c, 5)) { goto L_ce3c; }
    X86_TICK(c, 12);
    // 00ce2a  cmp byte ptr gs:[ebp + 0x478], 0
    X86_AT(c, 0xce2au);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x478u))), 0x0u, 0, 1);
    // 00ce32  je 0xce3c
    X86_AT(c, 0xce32u);
    if (x86_cc(c, 4)) { goto L_ce3c; }
    X86_TICK(c, 4);
    // 00ce34  mov di, word ptr gs:[ebp + 0x474]
    X86_AT(c, 0xce34u);
    s16(c, 7, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x474u))));
L_ce3c:
    X86_TICK(c, 7);
    // 00ce3c  cmp bh, 1
    X86_AT(c, 0xce3cu);
    (void)x86_sub(c, g8(c, 7), 0x1u, 0, 1);
    // 00ce3f  je 0xce46
    X86_AT(c, 0xce3fu);
    if (x86_cc(c, 4)) { goto L_ce46; }
    X86_TICK(c, 7);
    // 00ce41  cmp bh, 2
    X86_AT(c, 0xce41u);
    (void)x86_sub(c, g8(c, 7), 0x2u, 0, 1);
    // 00ce44  jne 0xce4c
    X86_AT(c, 0xce44u);
    if (x86_cc(c, 5)) { goto L_ce4c; }
L_ce46:
    X86_TICK(c, 4);
    // 00ce46  neg si
    X86_AT(c, 0xce46u);
    { uint32_t v = (c.r[6] & 0xFFFFu); s16(c, 6, x86_neg(c, v, 2)); }
    // 00ce49  neg di
    X86_AT(c, 0xce49u);
    { uint32_t v = (c.r[7] & 0xFFFFu); s16(c, 7, x86_neg(c, v, 2)); }
L_ce4c:
    X86_TICK(c, 7);
    // 00ce4c  cmp si, di
    X86_AT(c, 0xce4cu);
    (void)x86_sub(c, (c.r[6] & 0xFFFFu), (c.r[7] & 0xFFFFu), 0, 2);
    // 00ce4f  jle 0xce54
    X86_AT(c, 0xce4fu);
    if (x86_cc(c, 14)) { goto L_ce54; }
    X86_TICK(c, 3);
    // 00ce51  xchg di, si
    X86_AT(c, 0xce51u);
    { uint32_t t = (c.r[7] & 0xFFFFu); s16(c, 7, (c.r[6] & 0xFFFFu)); s16(c, 6, t); }
L_ce54:
    X86_TICK(c, 11);
    // 00ce54  mov word ptr gs:[ebp + 0x4b0], si
    X86_AT(c, 0xce54u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x4B0u)), (c.r[6] & 0xFFFFu));
    // 00ce5c  mov word ptr gs:[ebp + 0x4b2], di
    X86_AT(c, 0xce5cu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x4B2u)), (c.r[7] & 0xFFFFu));
    // 00ce64  add ax, si
    X86_AT(c, 0xce64u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, (c.r[6] & 0xFFFFu), 0, 2)); }
    // 00ce67  jno 0xce75
    X86_AT(c, 0xce67u);
    if (x86_cc(c, 1)) { goto L_ce75; }
    X86_TICK(c, 9);
    // 00ce69  mov ax, 0x7fff
    X86_AT(c, 0xce69u);
    s16(c, 0, 0x7FFFu);
    // 00ce6d  test si, si
    X86_AT(c, 0xce6du);
    (void)x86_logic(c, (c.r[6] & 0xFFFFu) & (c.r[6] & 0xFFFFu), 2);
    // 00ce70  jge 0xce75
    X86_AT(c, 0xce70u);
    if (x86_cc(c, 13)) { goto L_ce75; }
    X86_TICK(c, 2);
    // 00ce72  neg ax
    X86_AT(c, 0xce72u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_neg(c, v, 2)); }
L_ce75:
    X86_TICK(c, 7);
    // 00ce75  add dx, di
    X86_AT(c, 0xce75u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, (c.r[7] & 0xFFFFu), 0, 2)); }
    // 00ce78  jno 0xce90
    X86_AT(c, 0xce78u);
    if (x86_cc(c, 1)) { goto L_ce90; }
    X86_TICK(c, 9);
    // 00ce7a  mov dx, 0x7fff
    X86_AT(c, 0xce7au);
    s16(c, 2, 0x7FFFu);
    // 00ce7e  test di, di
    X86_AT(c, 0xce7eu);
    (void)x86_logic(c, (c.r[7] & 0xFFFFu) & (c.r[7] & 0xFFFFu), 2);
    // 00ce81  jge 0xce90
    X86_AT(c, 0xce81u);
    if (x86_cc(c, 13)) { goto L_ce90; }
    X86_TICK(c, 9);
    // 00ce83  neg dx
    X86_AT(c, 0xce83u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_neg(c, v, 2)); }
    // 00ce86  jmp 0xce90
    X86_AT(c, 0xce86u);
    goto L_ce90;
L_ce88:
    X86_TICK(c, 2);
    // 00ce88  mov byte ptr gs:[ebp + 0x4b8], 1
    X86_AT(c, 0xce88u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x4B8u)), 0x1u);
L_ce90:
    X86_TICK(c, 12);
    // 00ce90  cmp byte ptr gs:[ebp + 0x41c], 1
    X86_AT(c, 0xce90u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x41Cu))), 0x1u, 0, 1);
    // 00ce98  jne 0xcee5
    X86_AT(c, 0xce98u);
    if (x86_cc(c, 5)) { goto L_cee5; }
    X86_TICK(c, 12);
    // 00ce9a  cmp byte ptr gs:[ebp + 0x4b8], 0
    X86_AT(c, 0xce9au);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x4B8u))), 0x0u, 0, 1);
    // 00cea2  jne 0xcee5
    X86_AT(c, 0xcea2u);
    if (x86_cc(c, 5)) { goto L_cee5; }
    X86_TICK(c, 22);
    // 00cea4  push ebx
    X86_AT(c, 0xcea4u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 00cea5  mov bx, dx
    X86_AT(c, 0xcea5u);
    s16(c, 3, (c.r[2] & 0xFFFFu));
    // 00cea8  sub bx, ax
    X86_AT(c, 0xcea8u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_sub(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 00ceab  mov word ptr gs:[ebp + 0x434], bx
    X86_AT(c, 0xceabu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x434u)), (c.r[3] & 0xFFFFu));
    // 00ceb3  mov bx, 1
    X86_AT(c, 0xceb3u);
    s16(c, 3, 0x1u);
    // 00ceb7  cmp byte ptr gs:[ebp + 0x428], 1
    X86_AT(c, 0xceb7u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x428u))), 0x1u, 0, 1);
    // 00cebf  jne 0xcec6
    X86_AT(c, 0xcebfu);
    if (x86_cc(c, 5)) { goto L_cec6; }
    X86_TICK(c, 5);
    // 00cec1  xchg dx, ax
    X86_AT(c, 0xcec1u);
    { uint32_t t = (c.r[2] & 0xFFFFu); s16(c, 2, (c.r[0] & 0xFFFFu)); s16(c, 0, t); }
    // 00cec3  neg bx
    X86_AT(c, 0xcec3u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_neg(c, v, 2)); }
L_cec6:
    X86_TICK(c, 4);
    // 00cec6  mov dx, ax
    X86_AT(c, 0xcec6u);
    s16(c, 2, (c.r[0] & 0xFFFFu));
    // 00cec9  mov ax, cx
    X86_AT(c, 0xcec9u);
    s16(c, 0, (c.r[1] & 0xFFFFu));
L_cecc:
    X86_TICK(c, 13);
    // 00cecc  push eax
    X86_AT(c, 0xceccu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 00cecd  push ebx
    X86_AT(c, 0xcecdu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 00cece  push edx
    X86_AT(c, 0xceceu);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 00cecf  call 0x5f00
    X86_AT(c, 0xcecfu);
    push32(c, 0xced4u); f_00005f00(c); X86_RET(c, 0xced4u);
    X86_TICK(c, 25);
    // 00ced4  pop edx
    X86_AT(c, 0xced4u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 00ced5  pop ebx
    X86_AT(c, 0xced5u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 00ced6  pop eax
    X86_AT(c, 0xced6u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 00ced7  add dx, bx
    X86_AT(c, 0xced7u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
    // 00ceda  dec word ptr gs:[ebp + 0x434]
    X86_AT(c, 0xcedau);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x434u)); uint32_t v = rd16(ea); wr16(ea, x86_dec(c, v, 2)); }
    // 00cee2  jns 0xcecc
    X86_AT(c, 0xcee2u);
    if (x86_cc(c, 9)) { X86_POLL(c, 0xceccu); goto L_cecc; }
    X86_TICK(c, 4);
    // 00cee4  pop ebx
    X86_AT(c, 0xcee4u);
    { uint32_t v = pop32(c); c.r[3] = v; }
L_cee5:
    X86_TICK(c, 20);
    // 00cee5  pop edi
    X86_AT(c, 0xcee5u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 00cee6  pop esi
    X86_AT(c, 0xcee6u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 00cee7  cmp byte ptr gs:[ebp + 0x4bb], 0
    X86_AT(c, 0xcee7u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x4BBu))), 0x0u, 0, 1);
    // 00ceef  jne 0xcfff
    X86_AT(c, 0xceefu);
    if (x86_cc(c, 5)) { goto L_cfff; }
    X86_TICK(c, 23);
    // 00cef5  mov eax, dword ptr gs:[ebp + 0x4c4]
    X86_AT(c, 0xcef5u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x4C4u)));
    // 00cefc  shld edx, eax, 0x10
    X86_AT(c, 0xcefcu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_double(c, true, v, c.r[0], 0x10u, 4, w); if (w) c.r[2] = r; }
    // 00cf00  mov si, ax
    X86_AT(c, 0xcf00u);
    s16(c, 6, (c.r[0] & 0xFFFFu));
    // 00cf03  mov di, dx
    X86_AT(c, 0xcf03u);
    s16(c, 7, (c.r[2] & 0xFFFFu));
    // 00cf06  cmp byte ptr gs:[ebp + 0x41c], 1
    X86_AT(c, 0xcf06u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x41Cu))), 0x1u, 0, 1);
    // 00cf0e  jne 0xcf2d
    X86_AT(c, 0xcf0eu);
    if (x86_cc(c, 5)) { goto L_cf2d; }
    X86_TICK(c, 15);
    // 00cf10  mov ax, word ptr gs:[ebp + 0x47a]
    X86_AT(c, 0xcf10u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x47Au))));
    // 00cf18  mov cx, word ptr gs:[ebp + 0x40a]
    X86_AT(c, 0xcf18u);
    s16(c, 1, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x40Au))));
    // 00cf20  test bl, 2
    X86_AT(c, 0xcf20u);
    (void)x86_logic(c, g8(c, 3) & 0x2u, 1);
    // 00cf23  je 0xcf2a
    X86_AT(c, 0xcf23u);
    if (x86_cc(c, 4)) { goto L_cf2a; }
    X86_TICK(c, 9);
    // 00cf25  sub cx, ax
    X86_AT(c, 0xcf25u);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_sub(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 00cf28  jmp 0xcf2d
    X86_AT(c, 0xcf28u);
    goto L_cf2d;
L_cf2a:
    X86_TICK(c, 2);
    // 00cf2a  add cx, ax
    X86_AT(c, 0xcf2au);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
L_cf2d:
    X86_TICK(c, 5);
    // 00cf2d  jo 0xcfa2
    X86_AT(c, 0xcf2du);
    if (x86_cc(c, 0)) { goto L_cfa2; }
    X86_TICK(c, 18);
    // 00cf2f  mov ax, word ptr gs:[ebp + 0x408]
    X86_AT(c, 0xcf2fu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x408u))));
    // 00cf37  mov dx, ax
    X86_AT(c, 0xcf37u);
    s16(c, 2, (c.r[0] & 0xFFFFu));
    // 00cf3a  cmp byte ptr gs:[ebp + 0x41c], 0
    X86_AT(c, 0xcf3au);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x41Cu))), 0x0u, 0, 1);
    // 00cf42  jne 0xcf56
    X86_AT(c, 0xcf42u);
    if (x86_cc(c, 5)) { goto L_cf56; }
    X86_TICK(c, 12);
    // 00cf44  cmp byte ptr gs:[ebp + 0x479], 0
    X86_AT(c, 0xcf44u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x479u))), 0x0u, 0, 1);
    // 00cf4c  je 0xcf56
    X86_AT(c, 0xcf4cu);
    if (x86_cc(c, 4)) { goto L_cf56; }
    X86_TICK(c, 4);
    // 00cf4e  mov di, word ptr gs:[ebp + 0x476]
    X86_AT(c, 0xcf4eu);
    s16(c, 7, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x476u))));
L_cf56:
    X86_TICK(c, 7);
    // 00cf56  cmp bl, 1
    X86_AT(c, 0xcf56u);
    (void)x86_sub(c, g8(c, 3), 0x1u, 0, 1);
    // 00cf59  je 0xcf60
    X86_AT(c, 0xcf59u);
    if (x86_cc(c, 4)) { goto L_cf60; }
    X86_TICK(c, 7);
    // 00cf5b  cmp bl, 2
    X86_AT(c, 0xcf5bu);
    (void)x86_sub(c, g8(c, 3), 0x2u, 0, 1);
    // 00cf5e  jne 0xcf66
    X86_AT(c, 0xcf5eu);
    if (x86_cc(c, 5)) { goto L_cf66; }
L_cf60:
    X86_TICK(c, 4);
    // 00cf60  neg si
    X86_AT(c, 0xcf60u);
    { uint32_t v = (c.r[6] & 0xFFFFu); s16(c, 6, x86_neg(c, v, 2)); }
    // 00cf63  neg di
    X86_AT(c, 0xcf63u);
    { uint32_t v = (c.r[7] & 0xFFFFu); s16(c, 7, x86_neg(c, v, 2)); }
L_cf66:
    X86_TICK(c, 7);
    // 00cf66  cmp si, di
    X86_AT(c, 0xcf66u);
    (void)x86_sub(c, (c.r[6] & 0xFFFFu), (c.r[7] & 0xFFFFu), 0, 2);
    // 00cf69  jle 0xcf6e
    X86_AT(c, 0xcf69u);
    if (x86_cc(c, 14)) { goto L_cf6e; }
    X86_TICK(c, 3);
    // 00cf6b  xchg di, si
    X86_AT(c, 0xcf6bu);
    { uint32_t t = (c.r[7] & 0xFFFFu); s16(c, 7, (c.r[6] & 0xFFFFu)); s16(c, 6, t); }
L_cf6e:
    X86_TICK(c, 11);
    // 00cf6e  mov word ptr gs:[ebp + 0x4b4], si
    X86_AT(c, 0xcf6eu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x4B4u)), (c.r[6] & 0xFFFFu));
    // 00cf76  mov word ptr gs:[ebp + 0x4b6], di
    X86_AT(c, 0xcf76u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x4B6u)), (c.r[7] & 0xFFFFu));
    // 00cf7e  add ax, si
    X86_AT(c, 0xcf7eu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, (c.r[6] & 0xFFFFu), 0, 2)); }
    // 00cf81  jno 0xcf8f
    X86_AT(c, 0xcf81u);
    if (x86_cc(c, 1)) { goto L_cf8f; }
    X86_TICK(c, 9);
    // 00cf83  mov ax, 0x7fff
    X86_AT(c, 0xcf83u);
    s16(c, 0, 0x7FFFu);
    // 00cf87  test si, si
    X86_AT(c, 0xcf87u);
    (void)x86_logic(c, (c.r[6] & 0xFFFFu) & (c.r[6] & 0xFFFFu), 2);
    // 00cf8a  jge 0xcf8f
    X86_AT(c, 0xcf8au);
    if (x86_cc(c, 13)) { goto L_cf8f; }
    X86_TICK(c, 2);
    // 00cf8c  neg ax
    X86_AT(c, 0xcf8cu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_neg(c, v, 2)); }
L_cf8f:
    X86_TICK(c, 7);
    // 00cf8f  add dx, di
    X86_AT(c, 0xcf8fu);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, (c.r[7] & 0xFFFFu), 0, 2)); }
    // 00cf92  jno 0xcfaa
    X86_AT(c, 0xcf92u);
    if (x86_cc(c, 1)) { goto L_cfaa; }
    X86_TICK(c, 9);
    // 00cf94  mov dx, 0x7fff
    X86_AT(c, 0xcf94u);
    s16(c, 2, 0x7FFFu);
    // 00cf98  test di, di
    X86_AT(c, 0xcf98u);
    (void)x86_logic(c, (c.r[7] & 0xFFFFu) & (c.r[7] & 0xFFFFu), 2);
    // 00cf9b  jge 0xcfaa
    X86_AT(c, 0xcf9bu);
    if (x86_cc(c, 13)) { goto L_cfaa; }
    X86_TICK(c, 9);
    // 00cf9d  neg dx
    X86_AT(c, 0xcf9du);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_neg(c, v, 2)); }
    // 00cfa0  jmp 0xcfaa
    X86_AT(c, 0xcfa0u);
    goto L_cfaa;
L_cfa2:
    X86_TICK(c, 2);
    // 00cfa2  mov byte ptr gs:[ebp + 0x4b9], 1
    X86_AT(c, 0xcfa2u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x4B9u)), 0x1u);
L_cfaa:
    X86_TICK(c, 12);
    // 00cfaa  cmp byte ptr gs:[ebp + 0x41c], 1
    X86_AT(c, 0xcfaau);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x41Cu))), 0x1u, 0, 1);
    // 00cfb2  jne 0xcfff
    X86_AT(c, 0xcfb2u);
    if (x86_cc(c, 5)) { goto L_cfff; }
    X86_TICK(c, 12);
    // 00cfb4  cmp byte ptr gs:[ebp + 0x4b9], 0
    X86_AT(c, 0xcfb4u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x4B9u))), 0x0u, 0, 1);
    // 00cfbc  jne 0xcfff
    X86_AT(c, 0xcfbcu);
    if (x86_cc(c, 5)) { goto L_cfff; }
    X86_TICK(c, 22);
    // 00cfbe  push ebx
    X86_AT(c, 0xcfbeu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 00cfbf  mov bx, dx
    X86_AT(c, 0xcfbfu);
    s16(c, 3, (c.r[2] & 0xFFFFu));
    // 00cfc2  sub bx, ax
    X86_AT(c, 0xcfc2u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_sub(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 00cfc5  mov word ptr gs:[ebp + 0x434], bx
    X86_AT(c, 0xcfc5u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x434u)), (c.r[3] & 0xFFFFu));
    // 00cfcd  mov bx, 1
    X86_AT(c, 0xcfcdu);
    s16(c, 3, 0x1u);
    // 00cfd1  cmp byte ptr gs:[ebp + 0x429], 1
    X86_AT(c, 0xcfd1u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x429u))), 0x1u, 0, 1);
    // 00cfd9  jne 0xcfe0
    X86_AT(c, 0xcfd9u);
    if (x86_cc(c, 5)) { goto L_cfe0; }
    X86_TICK(c, 5);
    // 00cfdb  xchg dx, ax
    X86_AT(c, 0xcfdbu);
    { uint32_t t = (c.r[2] & 0xFFFFu); s16(c, 2, (c.r[0] & 0xFFFFu)); s16(c, 0, t); }
    // 00cfdd  neg bx
    X86_AT(c, 0xcfddu);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_neg(c, v, 2)); }
L_cfe0:
    X86_TICK(c, 4);
    // 00cfe0  mov dx, ax
    X86_AT(c, 0xcfe0u);
    s16(c, 2, (c.r[0] & 0xFFFFu));
    // 00cfe3  mov ax, cx
    X86_AT(c, 0xcfe3u);
    s16(c, 0, (c.r[1] & 0xFFFFu));
L_cfe6:
    X86_TICK(c, 13);
    // 00cfe6  push eax
    X86_AT(c, 0xcfe6u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 00cfe7  push ebx
    X86_AT(c, 0xcfe7u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 00cfe8  push edx
    X86_AT(c, 0xcfe8u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 00cfe9  call 0x5f54
    X86_AT(c, 0xcfe9u);
    push32(c, 0xcfeeu); f_00005f54(c); X86_RET(c, 0xcfeeu);
    X86_TICK(c, 25);
    // 00cfee  pop edx
    X86_AT(c, 0xcfeeu);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 00cfef  pop ebx
    X86_AT(c, 0xcfefu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 00cff0  pop eax
    X86_AT(c, 0xcff0u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 00cff1  add dx, bx
    X86_AT(c, 0xcff1u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
    // 00cff4  dec word ptr gs:[ebp + 0x434]
    X86_AT(c, 0xcff4u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x434u)); uint32_t v = rd16(ea); wr16(ea, x86_dec(c, v, 2)); }
    // 00cffc  jns 0xcfe6
    X86_AT(c, 0xcffcu);
    if (x86_cc(c, 9)) { X86_POLL(c, 0xcfe6u); goto L_cfe6; }
    X86_TICK(c, 4);
    // 00cffe  pop ebx
    X86_AT(c, 0xcffeu);
    { uint32_t v = pop32(c); c.r[3] = v; }
L_cfff:
    X86_TICK(c, 8);
    // 00cfff  pop eax
    X86_AT(c, 0xcfffu);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 00d000  pop edx
    X86_AT(c, 0xd000u);
    { uint32_t v = pop32(c); c.r[2] = v; }
L_d001:
    X86_TICK(c, 12);
    // 00d001  cmp byte ptr gs:[ebp + 0x41f], 1
    X86_AT(c, 0xd001u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x41Fu))), 0x1u, 0, 1);
    // 00d009  jne 0xd03b
    X86_AT(c, 0xd009u);
    if (x86_cc(c, 5)) { goto L_d03b; }
    X86_TICK(c, 26);
    // 00d00b  push eax
    X86_AT(c, 0xd00bu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 00d00c  mov al, byte ptr gs:[ebp + 0x4b8]
    X86_AT(c, 0xd00cu);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x4B8u))));
    // 00d013  mov byte ptr gs:[ebp + 0x4ca], al
    X86_AT(c, 0xd013u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x4CAu)), g8(c, 0));
    // 00d01a  and al, 1
    X86_AT(c, 0xd01au);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & 0x1u, 1)); }
    // 00d01c  mov byte ptr gs:[ebp + 0x4b8], al
    X86_AT(c, 0xd01cu);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x4B8u)), g8(c, 0));
    // 00d023  mov al, byte ptr gs:[ebp + 0x4b9]
    X86_AT(c, 0xd023u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x4B9u))));
    // 00d02a  mov byte ptr gs:[ebp + 0x4cb], al
    X86_AT(c, 0xd02au);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x4CBu)), g8(c, 0));
    // 00d031  and al, 1
    X86_AT(c, 0xd031u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & 0x1u, 1)); }
    // 00d033  mov byte ptr gs:[ebp + 0x4b9], al
    X86_AT(c, 0xd033u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x4B9u)), g8(c, 0));
    // 00d03a  pop eax
    X86_AT(c, 0xd03au);
    { uint32_t v = pop32(c); c.r[0] = v; }
L_d03b:
    X86_TICK(c, 12);
    // 00d03b  cmp byte ptr gs:[ebp + 0x41c], 0
    X86_AT(c, 0xd03bu);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x41Cu))), 0x0u, 0, 1);
    // 00d043  jne 0xd0a1
    X86_AT(c, 0xd043u);
    if (x86_cc(c, 5)) { goto L_d0a1; }
    X86_TICK(c, 12);
    // 00d045  cmp word ptr gs:[ebp + 0x47a], ax
    X86_AT(c, 0xd045u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x47Au))), (c.r[0] & 0xFFFFu), 0, 2);
    // 00d04d  jae 0xd0a1
    X86_AT(c, 0xd04du);
    if (x86_cc(c, 3)) { goto L_d0a1; }
    X86_TICK(c, 26);
    // 00d04f  push ebx
    X86_AT(c, 0xd04fu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 00d050  push edx
    X86_AT(c, 0xd050u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 00d051  push eax
    X86_AT(c, 0xd051u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 00d052  mov esi, dword ptr gs:[ebp + 0x48c]
    X86_AT(c, 0xd052u);
    c.r[6] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x48Cu)));
    // 00d059  mov edi, dword ptr gs:[ebp + 0x490]
    X86_AT(c, 0xd059u);
    c.r[7] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x490u)));
    // 00d060  cmp word ptr gs:[ebp + 0x47a], 0
    X86_AT(c, 0xd060u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x47Au))), 0x0u, 0, 2);
    // 00d069  jne 0xd072
    X86_AT(c, 0xd069u);
    if (x86_cc(c, 5)) { goto L_d072; }
    X86_TICK(c, 7);
    // 00d06b  call 0xd0ac
    X86_AT(c, 0xd06bu);
    push32(c, 0xd070u); f_0000d0ac(c); X86_RET(c, 0xd070u);
    X86_TICK(c, 7);
    // 00d070  jmp 0xd07c
    X86_AT(c, 0xd070u);
    goto L_d07c;
L_d072:
    X86_TICK(c, 7);
    // 00d072  call 0xd134
    X86_AT(c, 0xd072u);
    push32(c, 0xd077u); f_0000d134(c); X86_RET(c, 0xd077u);
    X86_TICK(c, 7);
    // 00d077  call 0xd31c
    X86_AT(c, 0xd077u);
    push32(c, 0xd07cu); f_0000d31c(c); X86_RET(c, 0xd07cu);
L_d07c:
    X86_TICK(c, 20);
    // 00d07c  pop eax
    X86_AT(c, 0xd07cu);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 00d07d  pop edx
    X86_AT(c, 0xd07du);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 00d07e  pop ebx
    X86_AT(c, 0xd07eu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 00d07f  mov word ptr gs:[ebp + 0x472], dx
    X86_AT(c, 0xd07fu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x472u)), (c.r[2] & 0xFFFFu));
    // 00d087  mov word ptr gs:[ebp + 0x474], dx
    X86_AT(c, 0xd087u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x474u)), (c.r[2] & 0xFFFFu));
    // 00d08f  mov word ptr gs:[ebp + 0x476], dx
    X86_AT(c, 0xd08fu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x476u)), (c.r[2] & 0xFFFFu));
    // 00d097  mov word ptr gs:[ebp + 0x478], 0
    X86_AT(c, 0xd097u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x478u)), 0x0u);
L_d0a1:
    X86_TICK(c, 7);
    // 00d0a1  jmp 0xc9cf
    X86_AT(c, 0xd0a1u);
    X86_POLL(c, 0xc9cfu); goto L_c9cf;
    x86_fault(c, 0xc80cu, "ran off the end of a function");
}
void f_0000c814(X86Cpu& c) {
    X86_TICK(c, 25);
    // 00c814  mov word ptr gs:[ebp + 0x480], dx
    X86_AT(c, 0xc814u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x480u)), (c.r[2] & 0xFFFFu));
    // 00c81c  mov word ptr gs:[ebp + 0x482], ax
    X86_AT(c, 0xc81cu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x482u)), (c.r[0] & 0xFFFFu));
    // 00c824  shl word ptr gs:[ebp + 0x480], 1
    X86_AT(c, 0xc824u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x480u)); uint32_t v = rd16(ea); bool w; uint32_t r = x86_shift(c, 4, v, 0x1u, 2, w); if (w) wr16(ea, r); }
    // 00c82c  shl word ptr gs:[ebp + 0x482], 1
    X86_AT(c, 0xc82cu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x482u)); uint32_t v = rd16(ea); bool w; uint32_t r = x86_shift(c, 4, v, 0x1u, 2, w); if (w) wr16(ea, r); }
    // 00c834  cmp dx, ax
    X86_AT(c, 0xc834u);
    (void)x86_sub(c, (c.r[2] & 0xFFFFu), (c.r[0] & 0xFFFFu), 0, 2);
    // 00c837  jbe 0xc84b
    X86_AT(c, 0xc837u);
    if (x86_cc(c, 6)) { goto L_c84b; }
    X86_TICK(c, 11);
    // 00c839  mov word ptr gs:[ebp + 0x47c], dx
    X86_AT(c, 0xc839u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x47Cu)), (c.r[2] & 0xFFFFu));
    // 00c841  mov byte ptr gs:[ebp + 0x4c8], 0
    X86_AT(c, 0xc841u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x4C8u)), 0x0u);
    // 00c849  jmp 0xc85b
    X86_AT(c, 0xc849u);
    goto L_c85b;
L_c84b:
    X86_TICK(c, 4);
    // 00c84b  mov word ptr gs:[ebp + 0x47c], ax
    X86_AT(c, 0xc84bu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x47Cu)), (c.r[0] & 0xFFFFu));
    // 00c853  mov byte ptr gs:[ebp + 0x4c8], 1
    X86_AT(c, 0xc853u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x4C8u)), 0x1u);
L_c85b:
    X86_TICK(c, 25);
    // 00c85b  mov word ptr gs:[ebp + 0x484], cx
    X86_AT(c, 0xc85bu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x484u)), (c.r[1] & 0xFFFFu));
    // 00c863  mov word ptr gs:[ebp + 0x486], bx
    X86_AT(c, 0xc863u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x486u)), (c.r[3] & 0xFFFFu));
    // 00c86b  shl word ptr gs:[ebp + 0x484], 1
    X86_AT(c, 0xc86bu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x484u)); uint32_t v = rd16(ea); bool w; uint32_t r = x86_shift(c, 4, v, 0x1u, 2, w); if (w) wr16(ea, r); }
    // 00c873  shl word ptr gs:[ebp + 0x486], 1
    X86_AT(c, 0xc873u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x486u)); uint32_t v = rd16(ea); bool w; uint32_t r = x86_shift(c, 4, v, 0x1u, 2, w); if (w) wr16(ea, r); }
    // 00c87b  cmp cx, bx
    X86_AT(c, 0xc87bu);
    (void)x86_sub(c, (c.r[1] & 0xFFFFu), (c.r[3] & 0xFFFFu), 0, 2);
    // 00c87e  jbe 0xc892
    X86_AT(c, 0xc87eu);
    if (x86_cc(c, 6)) { goto L_c892; }
    X86_TICK(c, 11);
    // 00c880  mov word ptr gs:[ebp + 0x47e], cx
    X86_AT(c, 0xc880u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x47Eu)), (c.r[1] & 0xFFFFu));
    // 00c888  mov byte ptr gs:[ebp + 0x4c9], 0
    X86_AT(c, 0xc888u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x4C9u)), 0x0u);
    // 00c890  jmp 0xc8a2
    X86_AT(c, 0xc890u);
    goto L_c8a2;
L_c892:
    X86_TICK(c, 4);
    // 00c892  mov word ptr gs:[ebp + 0x47e], bx
    X86_AT(c, 0xc892u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x47Eu)), (c.r[3] & 0xFFFFu));
    // 00c89a  mov byte ptr gs:[ebp + 0x4c9], 1
    X86_AT(c, 0xc89au);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x4C9u)), 0x1u);
L_c8a2:
    X86_TICK(c, 226);
    // 00c8a2  sub eax, eax
    X86_AT(c, 0xc8a2u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 00c8a4  mov word ptr gs:[ebp + 0x43a], ax
    X86_AT(c, 0xc8a4u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x43Au)), (c.r[0] & 0xFFFFu));
    // 00c8ac  mov dword ptr gs:[ebp + 0x444], eax
    X86_AT(c, 0xc8acu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x444u)), c.r[0]);
    // 00c8b3  mov dword ptr gs:[ebp + 0x448], eax
    X86_AT(c, 0xc8b3u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x448u)), c.r[0]);
    // 00c8ba  mov dword ptr gs:[ebp + 0x440], eax
    X86_AT(c, 0xc8bau);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x440u)), c.r[0]);
    // 00c8c1  sub eax, eax
    X86_AT(c, 0xc8c1u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 00c8c3  mov ax, word ptr gs:[ebp + 0x40c]
    X86_AT(c, 0xc8c3u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x40Cu))));
    // 00c8cb  mov word ptr gs:[ebp + 0x438], ax
    X86_AT(c, 0xc8cbu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x438u)), (c.r[0] & 0xFFFFu));
    // 00c8d3  mov ebx, eax
    X86_AT(c, 0xc8d3u);
    c.r[3] = c.r[0];
    // 00c8d5  mul eax
    X86_AT(c, 0xc8d5u);
    x86_mul(c, c.r[0], 4);
    // 00c8d7  mov esi, eax
    X86_AT(c, 0xc8d7u);
    c.r[6] = c.r[0];
    // 00c8d9  add eax, eax
    X86_AT(c, 0xc8d9u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, c.r[0], 0, 4); }
    // 00c8db  mov dword ptr gs:[ebp + 0x458], eax
    X86_AT(c, 0xc8dbu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x458u)), c.r[0]);
    // 00c8e2  add eax, eax
    X86_AT(c, 0xc8e2u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, c.r[0], 0, 4); }
    // 00c8e4  mov dword ptr gs:[ebp + 0x468], eax
    X86_AT(c, 0xc8e4u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x468u)), c.r[0]);
    // 00c8eb  movzx eax, word ptr gs:[ebp + 0x40e]
    X86_AT(c, 0xc8ebu);
    c.r[0] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x40Eu)));
    // 00c8f3  mul eax
    X86_AT(c, 0xc8f3u);
    x86_mul(c, c.r[0], 4);
    // 00c8f5  mov dword ptr gs:[ebp + 0x454], eax
    X86_AT(c, 0xc8f5u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x454u)), c.r[0]);
    // 00c8fc  add eax, eax
    X86_AT(c, 0xc8fcu);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, c.r[0], 0, 4); }
    // 00c8fe  mov dword ptr gs:[ebp + 0x45c], eax
    X86_AT(c, 0xc8feu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x45Cu)), c.r[0]);
    // 00c905  push eax
    X86_AT(c, 0xc905u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 00c906  add eax, eax
    X86_AT(c, 0xc906u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, c.r[0], 0, 4); }
    // 00c908  mov dword ptr gs:[ebp + 0x46c], eax
    X86_AT(c, 0xc908u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x46Cu)), c.r[0]);
    // 00c90f  pop eax
    X86_AT(c, 0xc90fu);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 00c910  mul ebx
    X86_AT(c, 0xc910u);
    x86_mul(c, c.r[3], 4);
    // 00c912  push eax
    X86_AT(c, 0xc912u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 00c913  push edx
    X86_AT(c, 0xc913u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 00c914  add eax, eax
    X86_AT(c, 0xc914u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, c.r[0], 0, 4); }
    // 00c916  adc edx, edx
    X86_AT(c, 0xc916u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[2], c.fl & 1, 4); }
    // 00c918  mov dword ptr gs:[ebp + 0x44c], eax
    X86_AT(c, 0xc918u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x44Cu)), c.r[0]);
    // 00c91f  mov dword ptr gs:[ebp + 0x450], edx
    X86_AT(c, 0xc91fu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x450u)), c.r[2]);
    // 00c926  shr esi, 1
    X86_AT(c, 0xc926u);
    { uint32_t v = c.r[6]; bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 4, w); if (w) c.r[6] = r; }
    // 00c928  add esi, dword ptr gs:[ebp + 0x45c]
    X86_AT(c, 0xc928u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x45Cu))), 0, 4); }
    // 00c92f  not edx
    X86_AT(c, 0xc92fu);
    { uint32_t v = c.r[2]; c.r[2] = ~v & 0xFFFFFFFFu; }
    // 00c931  not eax
    X86_AT(c, 0xc931u);
    { uint32_t v = c.r[0]; c.r[0] = ~v & 0xFFFFFFFFu; }
    // 00c933  add eax, 1
    X86_AT(c, 0xc933u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0x1u, 0, 4); }
    // 00c938  adc edx, 0
    X86_AT(c, 0xc938u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, 0x0u, c.fl & 1, 4); }
    // 00c93b  and edx, 0xffff
    X86_AT(c, 0xc93bu);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & 0xFFFFu, 4); }
    // 00c941  add eax, esi
    X86_AT(c, 0xc941u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, c.r[6], 0, 4); }
    // 00c943  adc edx, 0
    X86_AT(c, 0xc943u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, 0x0u, c.fl & 1, 4); }
    // 00c946  mov dword ptr gs:[ebp + 0x460], eax
    X86_AT(c, 0xc946u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x460u)), c.r[0]);
    // 00c94d  mov dword ptr gs:[ebp + 0x464], edx
    X86_AT(c, 0xc94du);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x464u)), c.r[2]);
    // 00c954  mov eax, dword ptr gs:[ebp + 0x454]
    X86_AT(c, 0xc954u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x454u)));
    // 00c95b  shr eax, 1
    X86_AT(c, 0xc95bu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 4, w); if (w) c.r[0] = r; }
    // 00c95d  add eax, dword ptr gs:[ebp + 0x458]
    X86_AT(c, 0xc95du);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x458u))), 0, 4); }
    // 00c964  mov dword ptr gs:[ebp + 0x43c], eax
    X86_AT(c, 0xc964u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x43Cu)), c.r[0]);
    // 00c96b  pop edx
    X86_AT(c, 0xc96bu);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 00c96c  pop eax
    X86_AT(c, 0xc96cu);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 00c96d  not edx
    X86_AT(c, 0xc96du);
    { uint32_t v = c.r[2]; c.r[2] = ~v & 0xFFFFFFFFu; }
    // 00c96f  not eax
    X86_AT(c, 0xc96fu);
    { uint32_t v = c.r[0]; c.r[0] = ~v & 0xFFFFFFFFu; }
    // 00c971  add eax, 1
    X86_AT(c, 0xc971u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0x1u, 0, 4); }
    // 00c976  adc edx, 0
    X86_AT(c, 0xc976u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, 0x0u, c.fl & 1, 4); }
    // 00c979  and edx, 0xffff
    X86_AT(c, 0xc979u);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & 0xFFFFu, 4); }
    // 00c97f  add dword ptr gs:[ebp + 0x43c], eax
    X86_AT(c, 0xc97fu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x43Cu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 00c986  adc dword ptr gs:[ebp + 0x440], edx
    X86_AT(c, 0xc986u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x440u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[2], c.fl & 1, 4)); }
    // 00c98d  mov dx, word ptr gs:[ebp + 0x438]
    X86_AT(c, 0xc98du);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x438u))));
    // 00c995  mov ax, word ptr gs:[ebp + 0x43a]
    X86_AT(c, 0xc995u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x43Au))));
    // 00c99d  mov bx, word ptr gs:[ebp + 0x488]
    X86_AT(c, 0xc99du);
    s16(c, 3, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x488u))));
    // 00c9a5  mov word ptr gs:[ebp + 0x47a], 0xffff
    X86_AT(c, 0xc9a5u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x47Au)), 0xFFFFu);
    // 00c9af  mov word ptr gs:[ebp + 0x470], dx
    X86_AT(c, 0xc9afu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x470u)), (c.r[2] & 0xFFFFu));
    // 00c9b7  mov word ptr gs:[ebp + 0x472], dx
    X86_AT(c, 0xc9b7u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x472u)), (c.r[2] & 0xFFFFu));
    // 00c9bf  mov word ptr gs:[ebp + 0x474], dx
    X86_AT(c, 0xc9bfu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x474u)), (c.r[2] & 0xFFFFu));
    // 00c9c7  mov word ptr gs:[ebp + 0x476], dx
    X86_AT(c, 0xc9c7u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x476u)), (c.r[2] & 0xFFFFu));
L_c9cf:
    X86_TICK(c, 7);
    // 00c9cf  test dx, dx
    X86_AT(c, 0xc9cfu);
    (void)x86_logic(c, (c.r[2] & 0xFFFFu) & (c.r[2] & 0xFFFFu), 2);
    // 00c9d2  jge 0xca16
    X86_AT(c, 0xc9d2u);
    if (x86_cc(c, 13)) { goto L_ca16; }
    X86_TICK(c, 12);
    // 00c9d4  cmp byte ptr gs:[ebp + 0x41c], 0
    X86_AT(c, 0xc9d4u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x41Cu))), 0x0u, 0, 1);
    // 00c9dc  jne 0xca13
    X86_AT(c, 0xc9dcu);
    if (x86_cc(c, 5)) { goto L_ca13; }
    X86_TICK(c, 12);
    // 00c9de  cmp word ptr gs:[ebp + 0x40e], ax
    X86_AT(c, 0xc9deu);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x40Eu))), (c.r[0] & 0xFFFFu), 0, 2);
    // 00c9e6  jne 0xca13
    X86_AT(c, 0xc9e6u);
    if (x86_cc(c, 5)) { goto L_ca13; }
    X86_TICK(c, 12);
    // 00c9e8  cmp word ptr gs:[ebp + 0x472], 0
    X86_AT(c, 0xc9e8u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x472u))), 0x0u, 0, 2);
    // 00c9f1  jl 0xca13
    X86_AT(c, 0xc9f1u);
    if (x86_cc(c, 12)) { goto L_ca13; }
    X86_TICK(c, 17);
    // 00c9f3  mov word ptr gs:[ebp + 0x47a], ax
    X86_AT(c, 0xc9f3u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x47Au)), (c.r[0] & 0xFFFFu));
    // 00c9fb  mov esi, dword ptr gs:[ebp + 0x48c]
    X86_AT(c, 0xc9fbu);
    c.r[6] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x48Cu)));
    // 00ca02  mov edi, dword ptr gs:[ebp + 0x490]
    X86_AT(c, 0xca02u);
    c.r[7] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x490u)));
    // 00ca09  call 0xd134
    X86_AT(c, 0xca09u);
    push32(c, 0xca0eu); f_0000d134(c); X86_RET(c, 0xca0eu);
    X86_TICK(c, 7);
    // 00ca0e  call 0xd31c
    X86_AT(c, 0xca0eu);
    push32(c, 0xca13u); f_0000d31c(c); X86_RET(c, 0xca13u);
L_ca13:
    X86_TICK(c, 12);
    // 00ca13  xor ah, ah
    X86_AT(c, 0xca13u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_logic(c, v ^ g8(c, 4), 1)); }
    // 00ca15  ret 
    X86_AT(c, 0xca15u);
    c.eip = pop32(c); return;
L_ca16:
    X86_TICK(c, 20);
    // 00ca16  mov esi, dword ptr gs:[ebp + 0x48c]
    X86_AT(c, 0xca16u);
    c.r[6] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x48Cu)));
    // 00ca1d  mov edi, dword ptr gs:[ebp + 0x490]
    X86_AT(c, 0xca1du);
    c.r[7] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x490u)));
    // 00ca24  cmp byte ptr gs:[ebp + 0x41e], 1
    X86_AT(c, 0xca24u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x41Eu))), 0x1u, 0, 1);
    // 00ca2c  jne 0xcbb0
    X86_AT(c, 0xca2cu);
    if (x86_cc(c, 5)) { goto L_cbb0; }
    X86_TICK(c, 12);
    // 00ca32  cmp word ptr gs:[ebp + 0x47a], ax
    X86_AT(c, 0xca32u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x47Au))), (c.r[0] & 0xFFFFu), 0, 2);
    // 00ca3a  jge 0xcbb0
    X86_AT(c, 0xca3au);
    if (x86_cc(c, 13)) { goto L_cbb0; }
    X86_TICK(c, 15);
    // 00ca40  push eax
    X86_AT(c, 0xca40u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 00ca41  mov ax, word ptr gs:[ebp + 0x4bc]
    X86_AT(c, 0xca41u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x4BCu))));
    // 00ca49  mov word ptr gs:[ebp + 0x4c0], ax
    X86_AT(c, 0xca49u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x4C0u)), (c.r[0] & 0xFFFFu));
    // 00ca51  cmp ax, dx
    X86_AT(c, 0xca51u);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), (c.r[2] & 0xFFFFu), 0, 2);
    // 00ca54  jbe 0xca7b
    X86_AT(c, 0xca54u);
    if (x86_cc(c, 6)) { goto L_ca7b; }
    X86_TICK(c, 12);
    // 00ca56  test byte ptr gs:[ebp + 0x4ba], 1
    X86_AT(c, 0xca56u);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x4BAu))) & 0x1u, 1);
    // 00ca5e  jne 0xca7b
    X86_AT(c, 0xca5eu);
    if (x86_cc(c, 5)) { goto L_ca7b; }
    X86_TICK(c, 18);
    // 00ca60  mov byte ptr gs:[ebp + 0x4ba], 1
    X86_AT(c, 0xca60u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x4BAu)), 0x1u);
    // 00ca68  mov byte ptr gs:[ebp + 0x4b8], 1
    X86_AT(c, 0xca68u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x4B8u)), 0x1u);
    // 00ca70  xor byte ptr gs:[ebp + esi*1 + 0x494], 1
    X86_AT(c, 0xca70u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x494u)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v ^ 0x1u, 1)); }
    // 00ca79  jmp 0xcaf8
    X86_AT(c, 0xca79u);
    goto L_caf8;
L_ca7b:
    X86_TICK(c, 16);
    // 00ca7b  mov cx, word ptr gs:[ebp + 0x47c]
    X86_AT(c, 0xca7bu);
    s16(c, 1, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x47Cu))));
    // 00ca83  cmp byte ptr gs:[ebp + 0x4c8], 0
    X86_AT(c, 0xca83u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x4C8u))), 0x0u, 0, 1);
    // 00ca8b  jne 0xcacc
    X86_AT(c, 0xca8bu);
    if (x86_cc(c, 5)) { goto L_cacc; }
L_ca8d:
    X86_TICK(c, 7);
    // 00ca8d  cmp ax, dx
    X86_AT(c, 0xca8du);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), (c.r[2] & 0xFFFFu), 0, 2);
    // 00ca90  ja 0xcaba
    X86_AT(c, 0xca90u);
    if (x86_cc(c, 7)) { goto L_caba; }
    X86_TICK(c, 13);
    // 00ca92  inc ax
    X86_AT(c, 0xca92u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_inc(c, v, 2)); }
    // 00ca94  sub cx, word ptr gs:[ebp + 0x482]
    X86_AT(c, 0xca94u);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_sub(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x482u))), 0, 2)); }
    // 00ca9c  jae 0xca8d
    X86_AT(c, 0xca9cu);
    if (x86_cc(c, 3)) { X86_POLL(c, 0xca8du); goto L_ca8d; }
    X86_TICK(c, 19);
    // 00ca9e  mov word ptr gs:[ebp + 0x4bc], ax
    X86_AT(c, 0xca9eu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x4BCu)), (c.r[0] & 0xFFFFu));
    // 00caa6  dec ax
    X86_AT(c, 0xcaa6u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_dec(c, v, 2)); }
    // 00caa8  mov word ptr gs:[ebp + 0x4c2], ax
    X86_AT(c, 0xcaa8u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x4C2u)), (c.r[0] & 0xFFFFu));
    // 00cab0  add cx, word ptr gs:[ebp + 0x480]
    X86_AT(c, 0xcab0u);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x480u))), 0, 2)); }
    // 00cab8  jmp 0xcaf0
    X86_AT(c, 0xcab8u);
    goto L_caf0;
L_caba:
    X86_TICK(c, 11);
    // 00caba  mov word ptr gs:[ebp + 0x4bc], ax
    X86_AT(c, 0xcabau);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x4BCu)), (c.r[0] & 0xFFFFu));
    // 00cac2  mov word ptr gs:[ebp + 0x4c2], dx
    X86_AT(c, 0xcac2u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x4C2u)), (c.r[2] & 0xFFFFu));
    // 00caca  jmp 0xcaf0
    X86_AT(c, 0xcacau);
    goto L_caf0;
L_cacc:
    X86_TICK(c, 13);
    // 00cacc  mov word ptr gs:[ebp + 0x4c2], ax
    X86_AT(c, 0xcaccu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x4C2u)), (c.r[0] & 0xFFFFu));
    // 00cad4  sub cx, word ptr gs:[ebp + 0x480]
    X86_AT(c, 0xcad4u);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_sub(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x480u))), 0, 2)); }
    // 00cadc  jae 0xcae8
    X86_AT(c, 0xcadcu);
    if (x86_cc(c, 3)) { goto L_cae8; }
    X86_TICK(c, 8);
    // 00cade  inc ax
    X86_AT(c, 0xcadeu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_inc(c, v, 2)); }
    // 00cae0  add cx, word ptr gs:[ebp + 0x482]
    X86_AT(c, 0xcae0u);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x482u))), 0, 2)); }
L_cae8:
    X86_TICK(c, 2);
    // 00cae8  mov word ptr gs:[ebp + 0x4bc], ax
    X86_AT(c, 0xcae8u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x4BCu)), (c.r[0] & 0xFFFFu));
L_caf0:
    X86_TICK(c, 2);
    // 00caf0  mov word ptr gs:[ebp + 0x47c], cx
    X86_AT(c, 0xcaf0u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x47Cu)), (c.r[1] & 0xFFFFu));
L_caf8:
    X86_TICK(c, 13);
    // 00caf8  mov ax, word ptr gs:[ebp + 0x4be]
    X86_AT(c, 0xcaf8u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x4BEu))));
    // 00cb00  mov word ptr gs:[ebp + 0x4c4], ax
    X86_AT(c, 0xcb00u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x4C4u)), (c.r[0] & 0xFFFFu));
    // 00cb08  cmp ax, dx
    X86_AT(c, 0xcb08u);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), (c.r[2] & 0xFFFFu), 0, 2);
    // 00cb0b  jbe 0xcb32
    X86_AT(c, 0xcb0bu);
    if (x86_cc(c, 6)) { goto L_cb32; }
    X86_TICK(c, 12);
    // 00cb0d  test byte ptr gs:[ebp + 0x4bb], 1
    X86_AT(c, 0xcb0du);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x4BBu))) & 0x1u, 1);
    // 00cb15  jne 0xcb32
    X86_AT(c, 0xcb15u);
    if (x86_cc(c, 5)) { goto L_cb32; }
    X86_TICK(c, 18);
    // 00cb17  mov byte ptr gs:[ebp + 0x4bb], 1
    X86_AT(c, 0xcb17u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x4BBu)), 0x1u);
    // 00cb1f  mov byte ptr gs:[ebp + 0x4b9], 1
    X86_AT(c, 0xcb1fu);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x4B9u)), 0x1u);
    // 00cb27  xor byte ptr gs:[ebp + edi*1 + 0x494], 1
    X86_AT(c, 0xcb27u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + c.r[7] + 0x494u)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v ^ 0x1u, 1)); }
    // 00cb30  jmp 0xcbaf
    X86_AT(c, 0xcb30u);
    goto L_cbaf;
L_cb32:
    X86_TICK(c, 16);
    // 00cb32  mov cx, word ptr gs:[ebp + 0x47e]
    X86_AT(c, 0xcb32u);
    s16(c, 1, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x47Eu))));
    // 00cb3a  cmp byte ptr gs:[ebp + 0x4c9], 0
    X86_AT(c, 0xcb3au);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x4C9u))), 0x0u, 0, 1);
    // 00cb42  jne 0xcb83
    X86_AT(c, 0xcb42u);
    if (x86_cc(c, 5)) { goto L_cb83; }
L_cb44:
    X86_TICK(c, 7);
    // 00cb44  cmp ax, dx
    X86_AT(c, 0xcb44u);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), (c.r[2] & 0xFFFFu), 0, 2);
    // 00cb47  ja 0xcb71
    X86_AT(c, 0xcb47u);
    if (x86_cc(c, 7)) { goto L_cb71; }
    X86_TICK(c, 13);
    // 00cb49  inc ax
    X86_AT(c, 0xcb49u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_inc(c, v, 2)); }
    // 00cb4b  sub cx, word ptr gs:[ebp + 0x486]
    X86_AT(c, 0xcb4bu);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_sub(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x486u))), 0, 2)); }
    // 00cb53  jae 0xcb44
    X86_AT(c, 0xcb53u);
    if (x86_cc(c, 3)) { X86_POLL(c, 0xcb44u); goto L_cb44; }
    X86_TICK(c, 19);
    // 00cb55  mov word ptr gs:[ebp + 0x4be], ax
    X86_AT(c, 0xcb55u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x4BEu)), (c.r[0] & 0xFFFFu));
    // 00cb5d  dec ax
    X86_AT(c, 0xcb5du);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_dec(c, v, 2)); }
    // 00cb5f  mov word ptr gs:[ebp + 0x4c6], ax
    X86_AT(c, 0xcb5fu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x4C6u)), (c.r[0] & 0xFFFFu));
    // 00cb67  add cx, word ptr gs:[ebp + 0x484]
    X86_AT(c, 0xcb67u);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x484u))), 0, 2)); }
    // 00cb6f  jmp 0xcba7
    X86_AT(c, 0xcb6fu);
    goto L_cba7;
L_cb71:
    X86_TICK(c, 11);
    // 00cb71  mov word ptr gs:[ebp + 0x4be], ax
    X86_AT(c, 0xcb71u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x4BEu)), (c.r[0] & 0xFFFFu));
    // 00cb79  mov word ptr gs:[ebp + 0x4c6], dx
    X86_AT(c, 0xcb79u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x4C6u)), (c.r[2] & 0xFFFFu));
    // 00cb81  jmp 0xcba7
    X86_AT(c, 0xcb81u);
    goto L_cba7;
L_cb83:
    X86_TICK(c, 13);
    // 00cb83  mov word ptr gs:[ebp + 0x4c6], ax
    X86_AT(c, 0xcb83u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x4C6u)), (c.r[0] & 0xFFFFu));
    // 00cb8b  sub cx, word ptr gs:[ebp + 0x484]
    X86_AT(c, 0xcb8bu);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_sub(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x484u))), 0, 2)); }
    // 00cb93  jae 0xcb9f
    X86_AT(c, 0xcb93u);
    if (x86_cc(c, 3)) { goto L_cb9f; }
    X86_TICK(c, 8);
    // 00cb95  inc ax
    X86_AT(c, 0xcb95u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_inc(c, v, 2)); }
    // 00cb97  add cx, word ptr gs:[ebp + 0x486]
    X86_AT(c, 0xcb97u);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x486u))), 0, 2)); }
L_cb9f:
    X86_TICK(c, 2);
    // 00cb9f  mov word ptr gs:[ebp + 0x4be], ax
    X86_AT(c, 0xcb9fu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x4BEu)), (c.r[0] & 0xFFFFu));
L_cba7:
    X86_TICK(c, 2);
    // 00cba7  mov word ptr gs:[ebp + 0x47e], cx
    X86_AT(c, 0xcba7u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x47Eu)), (c.r[1] & 0xFFFFu));
L_cbaf:
    X86_TICK(c, 4);
    // 00cbaf  pop eax
    X86_AT(c, 0xcbafu);
    { uint32_t v = pop32(c); c.r[0] = v; }
L_cbb0:
    X86_TICK(c, 12);
    // 00cbb0  cmp byte ptr gs:[ebp + 0x41e], 1
    X86_AT(c, 0xcbb0u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x41Eu))), 0x1u, 0, 1);
    // 00cbb8  jne 0xccce
    X86_AT(c, 0xcbb8u);
    if (x86_cc(c, 5)) { goto L_ccce; }
    X86_TICK(c, 12);
    // 00cbbe  test byte ptr gs:[ebp + 0x4ba], 1
    X86_AT(c, 0xcbbeu);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x4BAu))) & 0x1u, 1);
    // 00cbc6  jne 0xcc57
    X86_AT(c, 0xcbc6u);
    if (x86_cc(c, 5)) { goto L_cc57; }
    X86_TICK(c, 11);
    // 00cbcc  mov cx, word ptr gs:[ebp + 0x4c0]
    X86_AT(c, 0xcbccu);
    s16(c, 1, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x4C0u))));
    // 00cbd4  cmp dx, cx
    X86_AT(c, 0xcbd4u);
    (void)x86_sub(c, (c.r[2] & 0xFFFFu), (c.r[1] & 0xFFFFu), 0, 2);
    // 00cbd7  jae 0xcbf4
    X86_AT(c, 0xcbd7u);
    if (x86_cc(c, 3)) { goto L_cbf4; }
    X86_TICK(c, 18);
    // 00cbd9  mov byte ptr gs:[ebp + 0x4b8], 1
    X86_AT(c, 0xcbd9u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x4B8u)), 0x1u);
    // 00cbe1  mov byte ptr gs:[ebp + 0x4ba], 1
    X86_AT(c, 0xcbe1u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x4BAu)), 0x1u);
    // 00cbe9  xor byte ptr gs:[ebp + esi*1 + 0x494], 1
    X86_AT(c, 0xcbe9u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x494u)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v ^ 0x1u, 1)); }
    // 00cbf2  jmp 0xcc57
    X86_AT(c, 0xcbf2u);
    goto L_cc57;
L_cbf4:
    X86_TICK(c, 5);
    // 00cbf4  jne 0xcbfe
    X86_AT(c, 0xcbf4u);
    if (x86_cc(c, 5)) { goto L_cbfe; }
    X86_TICK(c, 2);
    // 00cbf6  mov byte ptr gs:[ebp + 0x4b8], 2
    X86_AT(c, 0xcbf6u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x4B8u)), 0x2u);
L_cbfe:
    X86_TICK(c, 11);
    // 00cbfe  mov cx, word ptr gs:[ebp + 0x4c2]
    X86_AT(c, 0xcbfeu);
    s16(c, 1, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x4C2u))));
    // 00cc06  cmp dx, cx
    X86_AT(c, 0xcc06u);
    (void)x86_sub(c, (c.r[2] & 0xFFFFu), (c.r[1] & 0xFFFFu), 0, 2);
    // 00cc09  ja 0xcc3b
    X86_AT(c, 0xcc09u);
    if (x86_cc(c, 7)) { goto L_cc3b; }
    X86_TICK(c, 25);
    // 00cc0b  or byte ptr gs:[ebp + esi*1 + 0x494], 2
    X86_AT(c, 0xcc0bu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x494u)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | 0x2u, 1)); }
    // 00cc14  dec dx
    X86_AT(c, 0xcc14u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_dec(c, v, 2)); }
    // 00cc16  mov word ptr gs:[ebp + 0x4c2], dx
    X86_AT(c, 0xcc16u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x4C2u)), (c.r[2] & 0xFFFFu));
    // 00cc1e  inc dx
    X86_AT(c, 0xcc1eu);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_inc(c, v, 2)); }
    // 00cc20  cmp byte ptr gs:[ebp + 0x478], 0
    X86_AT(c, 0xcc20u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x478u))), 0x0u, 0, 1);
    // 00cc28  jne 0xcc57
    X86_AT(c, 0xcc28u);
    if (x86_cc(c, 5)) { goto L_cc57; }
    X86_TICK(c, 15);
    // 00cc2a  mov word ptr gs:[ebp + 0x474], dx
    X86_AT(c, 0xcc2au);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x474u)), (c.r[2] & 0xFFFFu));
    // 00cc32  not byte ptr gs:[ebp + 0x478]
    X86_AT(c, 0xcc32u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x478u)); uint32_t v = rd8(ea); wr8(ea, ~v & 0xFFu); }
    // 00cc39  jmp 0xcc57
    X86_AT(c, 0xcc39u);
    goto L_cc57;
L_cc3b:
    X86_TICK(c, 7);
    // 00cc3b  cmp bh, bl
    X86_AT(c, 0xcc3bu);
    (void)x86_sub(c, g8(c, 7), g8(c, 3), 0, 1);
    // 00cc3d  jne 0xcc57
    X86_AT(c, 0xcc3du);
    if (x86_cc(c, 5)) { goto L_cc57; }
    X86_TICK(c, 7);
    // 00cc3f  cmp dx, cx
    X86_AT(c, 0xcc3fu);
    (void)x86_sub(c, (c.r[2] & 0xFFFFu), (c.r[1] & 0xFFFFu), 0, 2);
    // 00cc42  jbe 0xcc57
    X86_AT(c, 0xcc42u);
    if (x86_cc(c, 6)) { goto L_cc57; }
    X86_TICK(c, 12);
    // 00cc44  cmp word ptr gs:[ebp + 0x4bc], dx
    X86_AT(c, 0xcc44u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x4BCu))), (c.r[2] & 0xFFFFu), 0, 2);
    // 00cc4c  jne 0xcc57
    X86_AT(c, 0xcc4cu);
    if (x86_cc(c, 5)) { goto L_cc57; }
    X86_TICK(c, 7);
    // 00cc4e  or byte ptr gs:[ebp + esi*1 + 0x494], 2
    X86_AT(c, 0xcc4eu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x494u)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | 0x2u, 1)); }
L_cc57:
    X86_TICK(c, 12);
    // 00cc57  test byte ptr gs:[ebp + 0x4bb], 1
    X86_AT(c, 0xcc57u);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x4BBu))) & 0x1u, 1);
    // 00cc5f  jne 0xccce
    X86_AT(c, 0xcc5fu);
    if (x86_cc(c, 5)) { goto L_ccce; }
    X86_TICK(c, 11);
    // 00cc61  mov cx, word ptr gs:[ebp + 0x4c4]
    X86_AT(c, 0xcc61u);
    s16(c, 1, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x4C4u))));
    // 00cc69  cmp dx, cx
    X86_AT(c, 0xcc69u);
    (void)x86_sub(c, (c.r[2] & 0xFFFFu), (c.r[1] & 0xFFFFu), 0, 2);
    // 00cc6c  jae 0xcc89
    X86_AT(c, 0xcc6cu);
    if (x86_cc(c, 3)) { goto L_cc89; }
    X86_TICK(c, 18);
    // 00cc6e  mov byte ptr gs:[ebp + 0x4b9], 1
    X86_AT(c, 0xcc6eu);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x4B9u)), 0x1u);
    // 00cc76  mov byte ptr gs:[ebp + 0x4bb], 1
    X86_AT(c, 0xcc76u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x4BBu)), 0x1u);
    // 00cc7e  xor byte ptr gs:[ebp + edi*1 + 0x494], 1
    X86_AT(c, 0xcc7eu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + c.r[7] + 0x494u)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v ^ 0x1u, 1)); }
    // 00cc87  jmp 0xccce
    X86_AT(c, 0xcc87u);
    goto L_ccce;
L_cc89:
    X86_TICK(c, 5);
    // 00cc89  jne 0xcc93
    X86_AT(c, 0xcc89u);
    if (x86_cc(c, 5)) { goto L_cc93; }
    X86_TICK(c, 2);
    // 00cc8b  mov byte ptr gs:[ebp + 0x4b9], 2
    X86_AT(c, 0xcc8bu);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x4B9u)), 0x2u);
L_cc93:
    X86_TICK(c, 11);
    // 00cc93  mov cx, word ptr gs:[ebp + 0x4c6]
    X86_AT(c, 0xcc93u);
    s16(c, 1, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x4C6u))));
    // 00cc9b  cmp dx, cx
    X86_AT(c, 0xcc9bu);
    (void)x86_sub(c, (c.r[2] & 0xFFFFu), (c.r[1] & 0xFFFFu), 0, 2);
    // 00cc9e  ja 0xccce
    X86_AT(c, 0xcc9eu);
    if (x86_cc(c, 7)) { goto L_ccce; }
    X86_TICK(c, 25);
    // 00cca0  or byte ptr gs:[ebp + edi*1 + 0x494], 2
    X86_AT(c, 0xcca0u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + c.r[7] + 0x494u)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | 0x2u, 1)); }
    // 00cca9  dec dx
    X86_AT(c, 0xcca9u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_dec(c, v, 2)); }
    // 00ccab  mov word ptr gs:[ebp + 0x4c6], dx
    X86_AT(c, 0xccabu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x4C6u)), (c.r[2] & 0xFFFFu));
    // 00ccb3  inc dx
    X86_AT(c, 0xccb3u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_inc(c, v, 2)); }
    // 00ccb5  cmp byte ptr gs:[ebp + 0x479], 0
    X86_AT(c, 0xccb5u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x479u))), 0x0u, 0, 1);
    // 00ccbd  jne 0xccce
    X86_AT(c, 0xccbdu);
    if (x86_cc(c, 5)) { goto L_ccce; }
    X86_TICK(c, 8);
    // 00ccbf  mov word ptr gs:[ebp + 0x476], dx
    X86_AT(c, 0xccbfu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x476u)), (c.r[2] & 0xFFFFu));
    // 00ccc7  not byte ptr gs:[ebp + 0x479]
    X86_AT(c, 0xccc7u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x479u)); uint32_t v = rd8(ea); wr8(ea, ~v & 0xFFu); }
L_ccce:
    X86_TICK(c, 12);
    // 00ccce  cmp byte ptr gs:[ebp + 0x41c], 1
    X86_AT(c, 0xccceu);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x41Cu))), 0x1u, 0, 1);
    // 00ccd6  jne 0xcd90
    X86_AT(c, 0xccd6u);
    if (x86_cc(c, 5)) { goto L_cd90; }
    X86_TICK(c, 9);
    // 00ccdc  push ebx
    X86_AT(c, 0xccdcu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 00ccdd  or dx, dx
    X86_AT(c, 0xccddu);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_logic(c, v | (c.r[2] & 0xFFFFu), 2)); }
    // 00cce0  je 0xcd36
    X86_AT(c, 0xcce0u);
    if (x86_cc(c, 4)) { goto L_cd36; }
    X86_TICK(c, 12);
    // 00cce2  cmp byte ptr gs:[ebp + 0x494], 0
    X86_AT(c, 0xcce2u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x494u))), 0x0u, 0, 1);
    // 00ccea  je 0xcd09
    X86_AT(c, 0xcceau);
    if (x86_cc(c, 4)) { goto L_cd09; }
    X86_TICK(c, 15);
    // 00ccec  push edx
    X86_AT(c, 0xccecu);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 00cced  push eax
    X86_AT(c, 0xccedu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 00ccee  add dx, word ptr gs:[ebp + 0x408]
    X86_AT(c, 0xcceeu);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x408u))), 0, 2)); }
    // 00ccf6  jo 0xcd07
    X86_AT(c, 0xccf6u);
    if (x86_cc(c, 0)) { goto L_cd07; }
    X86_TICK(c, 11);
    // 00ccf8  add ax, word ptr gs:[ebp + 0x40a]
    X86_AT(c, 0xccf8u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x40Au))), 0, 2)); }
    // 00cd00  jo 0xcd07
    X86_AT(c, 0xcd00u);
    if (x86_cc(c, 0)) { goto L_cd07; }
    X86_TICK(c, 7);
    // 00cd02  call 0x5db0
    X86_AT(c, 0xcd02u);
    push32(c, 0xcd07u); f_00005db0(c); X86_RET(c, 0xcd07u);
L_cd07:
    X86_TICK(c, 8);
    // 00cd07  pop eax
    X86_AT(c, 0xcd07u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 00cd08  pop edx
    X86_AT(c, 0xcd08u);
    { uint32_t v = pop32(c); c.r[2] = v; }
L_cd09:
    X86_TICK(c, 12);
    // 00cd09  cmp byte ptr gs:[ebp + 0x496], 0
    X86_AT(c, 0xcd09u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x496u))), 0x0u, 0, 1);
    // 00cd11  je 0xcd36
    X86_AT(c, 0xcd11u);
    if (x86_cc(c, 4)) { goto L_cd36; }
    X86_TICK(c, 19);
    // 00cd13  push edx
    X86_AT(c, 0xcd13u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 00cd14  push eax
    X86_AT(c, 0xcd14u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 00cd15  neg dx
    X86_AT(c, 0xcd15u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_neg(c, v, 2)); }
    // 00cd18  neg ax
    X86_AT(c, 0xcd18u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_neg(c, v, 2)); }
    // 00cd1b  add dx, word ptr gs:[ebp + 0x408]
    X86_AT(c, 0xcd1bu);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x408u))), 0, 2)); }
    // 00cd23  jo 0xcd34
    X86_AT(c, 0xcd23u);
    if (x86_cc(c, 0)) { goto L_cd34; }
    X86_TICK(c, 11);
    // 00cd25  add ax, word ptr gs:[ebp + 0x40a]
    X86_AT(c, 0xcd25u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x40Au))), 0, 2)); }
    // 00cd2d  jo 0xcd34
    X86_AT(c, 0xcd2du);
    if (x86_cc(c, 0)) { goto L_cd34; }
    X86_TICK(c, 7);
    // 00cd2f  call 0x5e58
    X86_AT(c, 0xcd2fu);
    push32(c, 0xcd34u); f_00005e58(c); X86_RET(c, 0xcd34u);
L_cd34:
    X86_TICK(c, 8);
    // 00cd34  pop eax
    X86_AT(c, 0xcd34u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 00cd35  pop edx
    X86_AT(c, 0xcd35u);
    { uint32_t v = pop32(c); c.r[2] = v; }
L_cd36:
    X86_TICK(c, 7);
    // 00cd36  or ax, ax
    X86_AT(c, 0xcd36u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_logic(c, v | (c.r[0] & 0xFFFFu), 2)); }
    // 00cd39  je 0xcd8f
    X86_AT(c, 0xcd39u);
    if (x86_cc(c, 4)) { goto L_cd8f; }
    X86_TICK(c, 12);
    // 00cd3b  cmp byte ptr gs:[ebp + 0x495], 0
    X86_AT(c, 0xcd3bu);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x495u))), 0x0u, 0, 1);
    // 00cd43  je 0xcd65
    X86_AT(c, 0xcd43u);
    if (x86_cc(c, 4)) { goto L_cd65; }
    X86_TICK(c, 17);
    // 00cd45  push edx
    X86_AT(c, 0xcd45u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 00cd46  push eax
    X86_AT(c, 0xcd46u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 00cd47  neg dx
    X86_AT(c, 0xcd47u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_neg(c, v, 2)); }
    // 00cd4a  add dx, word ptr gs:[ebp + 0x408]
    X86_AT(c, 0xcd4au);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x408u))), 0, 2)); }
    // 00cd52  jo 0xcd63
    X86_AT(c, 0xcd52u);
    if (x86_cc(c, 0)) { goto L_cd63; }
    X86_TICK(c, 11);
    // 00cd54  add ax, word ptr gs:[ebp + 0x40a]
    X86_AT(c, 0xcd54u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x40Au))), 0, 2)); }
    // 00cd5c  jo 0xcd63
    X86_AT(c, 0xcd5cu);
    if (x86_cc(c, 0)) { goto L_cd63; }
    X86_TICK(c, 7);
    // 00cd5e  call 0x5e04
    X86_AT(c, 0xcd5eu);
    push32(c, 0xcd63u); f_00005e04(c); X86_RET(c, 0xcd63u);
L_cd63:
    X86_TICK(c, 8);
    // 00cd63  pop eax
    X86_AT(c, 0xcd63u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 00cd64  pop edx
    X86_AT(c, 0xcd64u);
    { uint32_t v = pop32(c); c.r[2] = v; }
L_cd65:
    X86_TICK(c, 12);
    // 00cd65  cmp byte ptr gs:[ebp + 0x497], 0
    X86_AT(c, 0xcd65u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x497u))), 0x0u, 0, 1);
    // 00cd6d  je 0xcd8f
    X86_AT(c, 0xcd6du);
    if (x86_cc(c, 4)) { goto L_cd8f; }
    X86_TICK(c, 17);
    // 00cd6f  push edx
    X86_AT(c, 0xcd6fu);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 00cd70  push eax
    X86_AT(c, 0xcd70u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 00cd71  neg ax
    X86_AT(c, 0xcd71u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_neg(c, v, 2)); }
    // 00cd74  add dx, word ptr gs:[ebp + 0x408]
    X86_AT(c, 0xcd74u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x408u))), 0, 2)); }
    // 00cd7c  jo 0xcd8d
    X86_AT(c, 0xcd7cu);
    if (x86_cc(c, 0)) { goto L_cd8d; }
    X86_TICK(c, 11);
    // 00cd7e  add ax, word ptr gs:[ebp + 0x40a]
    X86_AT(c, 0xcd7eu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x40Au))), 0, 2)); }
    // 00cd86  jo 0xcd8d
    X86_AT(c, 0xcd86u);
    if (x86_cc(c, 0)) { goto L_cd8d; }
    X86_TICK(c, 7);
    // 00cd88  call 0x5eac
    X86_AT(c, 0xcd88u);
    push32(c, 0xcd8du); f_00005eac(c); X86_RET(c, 0xcd8du);
L_cd8d:
    X86_TICK(c, 8);
    // 00cd8d  pop eax
    X86_AT(c, 0xcd8du);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 00cd8e  pop edx
    X86_AT(c, 0xcd8eu);
    { uint32_t v = pop32(c); c.r[2] = v; }
L_cd8f:
    X86_TICK(c, 4);
    // 00cd8f  pop ebx
    X86_AT(c, 0xcd8fu);
    { uint32_t v = pop32(c); c.r[3] = v; }
L_cd90:
    X86_TICK(c, 27);
    // 00cd90  push eax
    X86_AT(c, 0xcd90u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 00cd91  mov eax, dword ptr gs:[ebp + 0x494]
    X86_AT(c, 0xcd91u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x494u)));
    // 00cd98  mov dword ptr gs:[ebp + 0x498], eax
    X86_AT(c, 0xcd98u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x498u)), c.r[0]);
    // 00cd9f  and eax, 0x1010101
    X86_AT(c, 0xcd9fu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x1010101u, 4); }
    // 00cda4  mov dword ptr gs:[ebp + 0x494], eax
    X86_AT(c, 0xcda4u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x494u)), c.r[0]);
    // 00cdab  pop eax
    X86_AT(c, 0xcdabu);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 00cdac  mov word ptr gs:[ebp + 0x470], dx
    X86_AT(c, 0xcdacu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x470u)), (c.r[2] & 0xFFFFu));
    // 00cdb4  mov word ptr gs:[ebp + 0x47a], ax
    X86_AT(c, 0xcdb4u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x47Au)), (c.r[0] & 0xFFFFu));
    // 00cdbc  call 0xd794
    X86_AT(c, 0xcdbcu);
    push32(c, 0xcdc1u); f_0000d794(c); X86_RET(c, 0xcdc1u);
    X86_TICK(c, 12);
    // 00cdc1  cmp byte ptr gs:[ebp + 0x41f], 1
    X86_AT(c, 0xcdc1u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x41Fu))), 0x1u, 0, 1);
    // 00cdc9  jne 0xd001
    X86_AT(c, 0xcdc9u);
    if (x86_cc(c, 5)) { goto L_d001; }
    X86_TICK(c, 12);
    // 00cdcf  cmp word ptr gs:[ebp + 0x47a], ax
    X86_AT(c, 0xcdcfu);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x47Au))), (c.r[0] & 0xFFFFu), 0, 2);
    // 00cdd7  jae 0xd001
    X86_AT(c, 0xcdd7u);
    if (x86_cc(c, 3)) { goto L_d001; }
    X86_TICK(c, 27);
    // 00cddd  push edx
    X86_AT(c, 0xcdddu);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 00cdde  push eax
    X86_AT(c, 0xcddeu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 00cddf  mov esi, dword ptr gs:[ebp + 0x4c0]
    X86_AT(c, 0xcddfu);
    c.r[6] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x4C0u)));
    // 00cde6  shld edi, esi, 0x10
    X86_AT(c, 0xcde6u);
    { uint32_t v = c.r[7]; bool w; uint32_t r = x86_double(c, true, v, c.r[6], 0x10u, 4, w); if (w) c.r[7] = r; }
    // 00cdea  push esi
    X86_AT(c, 0xcdeau);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 00cdeb  push edi
    X86_AT(c, 0xcdebu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 00cdec  cmp byte ptr gs:[ebp + 0x41c], 1
    X86_AT(c, 0xcdecu);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x41Cu))), 0x1u, 0, 1);
    // 00cdf4  jne 0xce13
    X86_AT(c, 0xcdf4u);
    if (x86_cc(c, 5)) { goto L_ce13; }
    X86_TICK(c, 15);
    // 00cdf6  mov ax, word ptr gs:[ebp + 0x47a]
    X86_AT(c, 0xcdf6u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x47Au))));
    // 00cdfe  mov cx, word ptr gs:[ebp + 0x40a]
    X86_AT(c, 0xcdfeu);
    s16(c, 1, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x40Au))));
    // 00ce06  test bh, 2
    X86_AT(c, 0xce06u);
    (void)x86_logic(c, g8(c, 7) & 0x2u, 1);
    // 00ce09  je 0xce10
    X86_AT(c, 0xce09u);
    if (x86_cc(c, 4)) { goto L_ce10; }
    X86_TICK(c, 9);
    // 00ce0b  sub cx, ax
    X86_AT(c, 0xce0bu);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_sub(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 00ce0e  jmp 0xce13
    X86_AT(c, 0xce0eu);
    goto L_ce13;
L_ce10:
    X86_TICK(c, 2);
    // 00ce10  add cx, ax
    X86_AT(c, 0xce10u);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
L_ce13:
    X86_TICK(c, 5);
    // 00ce13  jo 0xce88
    X86_AT(c, 0xce13u);
    if (x86_cc(c, 0)) { goto L_ce88; }
    X86_TICK(c, 18);
    // 00ce15  mov ax, word ptr gs:[ebp + 0x408]
    X86_AT(c, 0xce15u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x408u))));
    // 00ce1d  mov dx, ax
    X86_AT(c, 0xce1du);
    s16(c, 2, (c.r[0] & 0xFFFFu));
    // 00ce20  cmp byte ptr gs:[ebp + 0x41c], 0
    X86_AT(c, 0xce20u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x41Cu))), 0x0u, 0, 1);
    // 00ce28  jne 0xce3c
    X86_AT(c, 0xce28u);
    if (x86_cc(c, 5)) { goto L_ce3c; }
    X86_TICK(c, 12);
    // 00ce2a  cmp byte ptr gs:[ebp + 0x478], 0
    X86_AT(c, 0xce2au);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x478u))), 0x0u, 0, 1);
    // 00ce32  je 0xce3c
    X86_AT(c, 0xce32u);
    if (x86_cc(c, 4)) { goto L_ce3c; }
    X86_TICK(c, 4);
    // 00ce34  mov di, word ptr gs:[ebp + 0x474]
    X86_AT(c, 0xce34u);
    s16(c, 7, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x474u))));
L_ce3c:
    X86_TICK(c, 7);
    // 00ce3c  cmp bh, 1
    X86_AT(c, 0xce3cu);
    (void)x86_sub(c, g8(c, 7), 0x1u, 0, 1);
    // 00ce3f  je 0xce46
    X86_AT(c, 0xce3fu);
    if (x86_cc(c, 4)) { goto L_ce46; }
    X86_TICK(c, 7);
    // 00ce41  cmp bh, 2
    X86_AT(c, 0xce41u);
    (void)x86_sub(c, g8(c, 7), 0x2u, 0, 1);
    // 00ce44  jne 0xce4c
    X86_AT(c, 0xce44u);
    if (x86_cc(c, 5)) { goto L_ce4c; }
L_ce46:
    X86_TICK(c, 4);
    // 00ce46  neg si
    X86_AT(c, 0xce46u);
    { uint32_t v = (c.r[6] & 0xFFFFu); s16(c, 6, x86_neg(c, v, 2)); }
    // 00ce49  neg di
    X86_AT(c, 0xce49u);
    { uint32_t v = (c.r[7] & 0xFFFFu); s16(c, 7, x86_neg(c, v, 2)); }
L_ce4c:
    X86_TICK(c, 7);
    // 00ce4c  cmp si, di
    X86_AT(c, 0xce4cu);
    (void)x86_sub(c, (c.r[6] & 0xFFFFu), (c.r[7] & 0xFFFFu), 0, 2);
    // 00ce4f  jle 0xce54
    X86_AT(c, 0xce4fu);
    if (x86_cc(c, 14)) { goto L_ce54; }
    X86_TICK(c, 3);
    // 00ce51  xchg di, si
    X86_AT(c, 0xce51u);
    { uint32_t t = (c.r[7] & 0xFFFFu); s16(c, 7, (c.r[6] & 0xFFFFu)); s16(c, 6, t); }
L_ce54:
    X86_TICK(c, 11);
    // 00ce54  mov word ptr gs:[ebp + 0x4b0], si
    X86_AT(c, 0xce54u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x4B0u)), (c.r[6] & 0xFFFFu));
    // 00ce5c  mov word ptr gs:[ebp + 0x4b2], di
    X86_AT(c, 0xce5cu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x4B2u)), (c.r[7] & 0xFFFFu));
    // 00ce64  add ax, si
    X86_AT(c, 0xce64u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, (c.r[6] & 0xFFFFu), 0, 2)); }
    // 00ce67  jno 0xce75
    X86_AT(c, 0xce67u);
    if (x86_cc(c, 1)) { goto L_ce75; }
    X86_TICK(c, 9);
    // 00ce69  mov ax, 0x7fff
    X86_AT(c, 0xce69u);
    s16(c, 0, 0x7FFFu);
    // 00ce6d  test si, si
    X86_AT(c, 0xce6du);
    (void)x86_logic(c, (c.r[6] & 0xFFFFu) & (c.r[6] & 0xFFFFu), 2);
    // 00ce70  jge 0xce75
    X86_AT(c, 0xce70u);
    if (x86_cc(c, 13)) { goto L_ce75; }
    X86_TICK(c, 2);
    // 00ce72  neg ax
    X86_AT(c, 0xce72u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_neg(c, v, 2)); }
L_ce75:
    X86_TICK(c, 7);
    // 00ce75  add dx, di
    X86_AT(c, 0xce75u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, (c.r[7] & 0xFFFFu), 0, 2)); }
    // 00ce78  jno 0xce90
    X86_AT(c, 0xce78u);
    if (x86_cc(c, 1)) { goto L_ce90; }
    X86_TICK(c, 9);
    // 00ce7a  mov dx, 0x7fff
    X86_AT(c, 0xce7au);
    s16(c, 2, 0x7FFFu);
    // 00ce7e  test di, di
    X86_AT(c, 0xce7eu);
    (void)x86_logic(c, (c.r[7] & 0xFFFFu) & (c.r[7] & 0xFFFFu), 2);
    // 00ce81  jge 0xce90
    X86_AT(c, 0xce81u);
    if (x86_cc(c, 13)) { goto L_ce90; }
    X86_TICK(c, 9);
    // 00ce83  neg dx
    X86_AT(c, 0xce83u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_neg(c, v, 2)); }
    // 00ce86  jmp 0xce90
    X86_AT(c, 0xce86u);
    goto L_ce90;
L_ce88:
    X86_TICK(c, 2);
    // 00ce88  mov byte ptr gs:[ebp + 0x4b8], 1
    X86_AT(c, 0xce88u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x4B8u)), 0x1u);
L_ce90:
    X86_TICK(c, 12);
    // 00ce90  cmp byte ptr gs:[ebp + 0x41c], 1
    X86_AT(c, 0xce90u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x41Cu))), 0x1u, 0, 1);
    // 00ce98  jne 0xcee5
    X86_AT(c, 0xce98u);
    if (x86_cc(c, 5)) { goto L_cee5; }
    X86_TICK(c, 12);
    // 00ce9a  cmp byte ptr gs:[ebp + 0x4b8], 0
    X86_AT(c, 0xce9au);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x4B8u))), 0x0u, 0, 1);
    // 00cea2  jne 0xcee5
    X86_AT(c, 0xcea2u);
    if (x86_cc(c, 5)) { goto L_cee5; }
    X86_TICK(c, 22);
    // 00cea4  push ebx
    X86_AT(c, 0xcea4u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 00cea5  mov bx, dx
    X86_AT(c, 0xcea5u);
    s16(c, 3, (c.r[2] & 0xFFFFu));
    // 00cea8  sub bx, ax
    X86_AT(c, 0xcea8u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_sub(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 00ceab  mov word ptr gs:[ebp + 0x434], bx
    X86_AT(c, 0xceabu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x434u)), (c.r[3] & 0xFFFFu));
    // 00ceb3  mov bx, 1
    X86_AT(c, 0xceb3u);
    s16(c, 3, 0x1u);
    // 00ceb7  cmp byte ptr gs:[ebp + 0x428], 1
    X86_AT(c, 0xceb7u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x428u))), 0x1u, 0, 1);
    // 00cebf  jne 0xcec6
    X86_AT(c, 0xcebfu);
    if (x86_cc(c, 5)) { goto L_cec6; }
    X86_TICK(c, 5);
    // 00cec1  xchg dx, ax
    X86_AT(c, 0xcec1u);
    { uint32_t t = (c.r[2] & 0xFFFFu); s16(c, 2, (c.r[0] & 0xFFFFu)); s16(c, 0, t); }
    // 00cec3  neg bx
    X86_AT(c, 0xcec3u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_neg(c, v, 2)); }
L_cec6:
    X86_TICK(c, 4);
    // 00cec6  mov dx, ax
    X86_AT(c, 0xcec6u);
    s16(c, 2, (c.r[0] & 0xFFFFu));
    // 00cec9  mov ax, cx
    X86_AT(c, 0xcec9u);
    s16(c, 0, (c.r[1] & 0xFFFFu));
L_cecc:
    X86_TICK(c, 13);
    // 00cecc  push eax
    X86_AT(c, 0xceccu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 00cecd  push ebx
    X86_AT(c, 0xcecdu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 00cece  push edx
    X86_AT(c, 0xceceu);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 00cecf  call 0x5f00
    X86_AT(c, 0xcecfu);
    push32(c, 0xced4u); f_00005f00(c); X86_RET(c, 0xced4u);
    X86_TICK(c, 25);
    // 00ced4  pop edx
    X86_AT(c, 0xced4u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 00ced5  pop ebx
    X86_AT(c, 0xced5u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 00ced6  pop eax
    X86_AT(c, 0xced6u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 00ced7  add dx, bx
    X86_AT(c, 0xced7u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
    // 00ceda  dec word ptr gs:[ebp + 0x434]
    X86_AT(c, 0xcedau);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x434u)); uint32_t v = rd16(ea); wr16(ea, x86_dec(c, v, 2)); }
    // 00cee2  jns 0xcecc
    X86_AT(c, 0xcee2u);
    if (x86_cc(c, 9)) { X86_POLL(c, 0xceccu); goto L_cecc; }
    X86_TICK(c, 4);
    // 00cee4  pop ebx
    X86_AT(c, 0xcee4u);
    { uint32_t v = pop32(c); c.r[3] = v; }
L_cee5:
    X86_TICK(c, 20);
    // 00cee5  pop edi
    X86_AT(c, 0xcee5u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 00cee6  pop esi
    X86_AT(c, 0xcee6u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 00cee7  cmp byte ptr gs:[ebp + 0x4bb], 0
    X86_AT(c, 0xcee7u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x4BBu))), 0x0u, 0, 1);
    // 00ceef  jne 0xcfff
    X86_AT(c, 0xceefu);
    if (x86_cc(c, 5)) { goto L_cfff; }
    X86_TICK(c, 23);
    // 00cef5  mov eax, dword ptr gs:[ebp + 0x4c4]
    X86_AT(c, 0xcef5u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x4C4u)));
    // 00cefc  shld edx, eax, 0x10
    X86_AT(c, 0xcefcu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_double(c, true, v, c.r[0], 0x10u, 4, w); if (w) c.r[2] = r; }
    // 00cf00  mov si, ax
    X86_AT(c, 0xcf00u);
    s16(c, 6, (c.r[0] & 0xFFFFu));
    // 00cf03  mov di, dx
    X86_AT(c, 0xcf03u);
    s16(c, 7, (c.r[2] & 0xFFFFu));
    // 00cf06  cmp byte ptr gs:[ebp + 0x41c], 1
    X86_AT(c, 0xcf06u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x41Cu))), 0x1u, 0, 1);
    // 00cf0e  jne 0xcf2d
    X86_AT(c, 0xcf0eu);
    if (x86_cc(c, 5)) { goto L_cf2d; }
    X86_TICK(c, 15);
    // 00cf10  mov ax, word ptr gs:[ebp + 0x47a]
    X86_AT(c, 0xcf10u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x47Au))));
    // 00cf18  mov cx, word ptr gs:[ebp + 0x40a]
    X86_AT(c, 0xcf18u);
    s16(c, 1, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x40Au))));
    // 00cf20  test bl, 2
    X86_AT(c, 0xcf20u);
    (void)x86_logic(c, g8(c, 3) & 0x2u, 1);
    // 00cf23  je 0xcf2a
    X86_AT(c, 0xcf23u);
    if (x86_cc(c, 4)) { goto L_cf2a; }
    X86_TICK(c, 9);
    // 00cf25  sub cx, ax
    X86_AT(c, 0xcf25u);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_sub(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 00cf28  jmp 0xcf2d
    X86_AT(c, 0xcf28u);
    goto L_cf2d;
L_cf2a:
    X86_TICK(c, 2);
    // 00cf2a  add cx, ax
    X86_AT(c, 0xcf2au);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
L_cf2d:
    X86_TICK(c, 5);
    // 00cf2d  jo 0xcfa2
    X86_AT(c, 0xcf2du);
    if (x86_cc(c, 0)) { goto L_cfa2; }
    X86_TICK(c, 18);
    // 00cf2f  mov ax, word ptr gs:[ebp + 0x408]
    X86_AT(c, 0xcf2fu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x408u))));
    // 00cf37  mov dx, ax
    X86_AT(c, 0xcf37u);
    s16(c, 2, (c.r[0] & 0xFFFFu));
    // 00cf3a  cmp byte ptr gs:[ebp + 0x41c], 0
    X86_AT(c, 0xcf3au);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x41Cu))), 0x0u, 0, 1);
    // 00cf42  jne 0xcf56
    X86_AT(c, 0xcf42u);
    if (x86_cc(c, 5)) { goto L_cf56; }
    X86_TICK(c, 12);
    // 00cf44  cmp byte ptr gs:[ebp + 0x479], 0
    X86_AT(c, 0xcf44u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x479u))), 0x0u, 0, 1);
    // 00cf4c  je 0xcf56
    X86_AT(c, 0xcf4cu);
    if (x86_cc(c, 4)) { goto L_cf56; }
    X86_TICK(c, 4);
    // 00cf4e  mov di, word ptr gs:[ebp + 0x476]
    X86_AT(c, 0xcf4eu);
    s16(c, 7, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x476u))));
L_cf56:
    X86_TICK(c, 7);
    // 00cf56  cmp bl, 1
    X86_AT(c, 0xcf56u);
    (void)x86_sub(c, g8(c, 3), 0x1u, 0, 1);
    // 00cf59  je 0xcf60
    X86_AT(c, 0xcf59u);
    if (x86_cc(c, 4)) { goto L_cf60; }
    X86_TICK(c, 7);
    // 00cf5b  cmp bl, 2
    X86_AT(c, 0xcf5bu);
    (void)x86_sub(c, g8(c, 3), 0x2u, 0, 1);
    // 00cf5e  jne 0xcf66
    X86_AT(c, 0xcf5eu);
    if (x86_cc(c, 5)) { goto L_cf66; }
L_cf60:
    X86_TICK(c, 4);
    // 00cf60  neg si
    X86_AT(c, 0xcf60u);
    { uint32_t v = (c.r[6] & 0xFFFFu); s16(c, 6, x86_neg(c, v, 2)); }
    // 00cf63  neg di
    X86_AT(c, 0xcf63u);
    { uint32_t v = (c.r[7] & 0xFFFFu); s16(c, 7, x86_neg(c, v, 2)); }
L_cf66:
    X86_TICK(c, 7);
    // 00cf66  cmp si, di
    X86_AT(c, 0xcf66u);
    (void)x86_sub(c, (c.r[6] & 0xFFFFu), (c.r[7] & 0xFFFFu), 0, 2);
    // 00cf69  jle 0xcf6e
    X86_AT(c, 0xcf69u);
    if (x86_cc(c, 14)) { goto L_cf6e; }
    X86_TICK(c, 3);
    // 00cf6b  xchg di, si
    X86_AT(c, 0xcf6bu);
    { uint32_t t = (c.r[7] & 0xFFFFu); s16(c, 7, (c.r[6] & 0xFFFFu)); s16(c, 6, t); }
L_cf6e:
    X86_TICK(c, 11);
    // 00cf6e  mov word ptr gs:[ebp + 0x4b4], si
    X86_AT(c, 0xcf6eu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x4B4u)), (c.r[6] & 0xFFFFu));
    // 00cf76  mov word ptr gs:[ebp + 0x4b6], di
    X86_AT(c, 0xcf76u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x4B6u)), (c.r[7] & 0xFFFFu));
    // 00cf7e  add ax, si
    X86_AT(c, 0xcf7eu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, (c.r[6] & 0xFFFFu), 0, 2)); }
    // 00cf81  jno 0xcf8f
    X86_AT(c, 0xcf81u);
    if (x86_cc(c, 1)) { goto L_cf8f; }
    X86_TICK(c, 9);
    // 00cf83  mov ax, 0x7fff
    X86_AT(c, 0xcf83u);
    s16(c, 0, 0x7FFFu);
    // 00cf87  test si, si
    X86_AT(c, 0xcf87u);
    (void)x86_logic(c, (c.r[6] & 0xFFFFu) & (c.r[6] & 0xFFFFu), 2);
    // 00cf8a  jge 0xcf8f
    X86_AT(c, 0xcf8au);
    if (x86_cc(c, 13)) { goto L_cf8f; }
    X86_TICK(c, 2);
    // 00cf8c  neg ax
    X86_AT(c, 0xcf8cu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_neg(c, v, 2)); }
L_cf8f:
    X86_TICK(c, 7);
    // 00cf8f  add dx, di
    X86_AT(c, 0xcf8fu);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, (c.r[7] & 0xFFFFu), 0, 2)); }
    // 00cf92  jno 0xcfaa
    X86_AT(c, 0xcf92u);
    if (x86_cc(c, 1)) { goto L_cfaa; }
    X86_TICK(c, 9);
    // 00cf94  mov dx, 0x7fff
    X86_AT(c, 0xcf94u);
    s16(c, 2, 0x7FFFu);
    // 00cf98  test di, di
    X86_AT(c, 0xcf98u);
    (void)x86_logic(c, (c.r[7] & 0xFFFFu) & (c.r[7] & 0xFFFFu), 2);
    // 00cf9b  jge 0xcfaa
    X86_AT(c, 0xcf9bu);
    if (x86_cc(c, 13)) { goto L_cfaa; }
    X86_TICK(c, 9);
    // 00cf9d  neg dx
    X86_AT(c, 0xcf9du);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_neg(c, v, 2)); }
    // 00cfa0  jmp 0xcfaa
    X86_AT(c, 0xcfa0u);
    goto L_cfaa;
L_cfa2:
    X86_TICK(c, 2);
    // 00cfa2  mov byte ptr gs:[ebp + 0x4b9], 1
    X86_AT(c, 0xcfa2u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x4B9u)), 0x1u);
L_cfaa:
    X86_TICK(c, 12);
    // 00cfaa  cmp byte ptr gs:[ebp + 0x41c], 1
    X86_AT(c, 0xcfaau);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x41Cu))), 0x1u, 0, 1);
    // 00cfb2  jne 0xcfff
    X86_AT(c, 0xcfb2u);
    if (x86_cc(c, 5)) { goto L_cfff; }
    X86_TICK(c, 12);
    // 00cfb4  cmp byte ptr gs:[ebp + 0x4b9], 0
    X86_AT(c, 0xcfb4u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x4B9u))), 0x0u, 0, 1);
    // 00cfbc  jne 0xcfff
    X86_AT(c, 0xcfbcu);
    if (x86_cc(c, 5)) { goto L_cfff; }
    X86_TICK(c, 22);
    // 00cfbe  push ebx
    X86_AT(c, 0xcfbeu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 00cfbf  mov bx, dx
    X86_AT(c, 0xcfbfu);
    s16(c, 3, (c.r[2] & 0xFFFFu));
    // 00cfc2  sub bx, ax
    X86_AT(c, 0xcfc2u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_sub(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 00cfc5  mov word ptr gs:[ebp + 0x434], bx
    X86_AT(c, 0xcfc5u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x434u)), (c.r[3] & 0xFFFFu));
    // 00cfcd  mov bx, 1
    X86_AT(c, 0xcfcdu);
    s16(c, 3, 0x1u);
    // 00cfd1  cmp byte ptr gs:[ebp + 0x429], 1
    X86_AT(c, 0xcfd1u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x429u))), 0x1u, 0, 1);
    // 00cfd9  jne 0xcfe0
    X86_AT(c, 0xcfd9u);
    if (x86_cc(c, 5)) { goto L_cfe0; }
    X86_TICK(c, 5);
    // 00cfdb  xchg dx, ax
    X86_AT(c, 0xcfdbu);
    { uint32_t t = (c.r[2] & 0xFFFFu); s16(c, 2, (c.r[0] & 0xFFFFu)); s16(c, 0, t); }
    // 00cfdd  neg bx
    X86_AT(c, 0xcfddu);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_neg(c, v, 2)); }
L_cfe0:
    X86_TICK(c, 4);
    // 00cfe0  mov dx, ax
    X86_AT(c, 0xcfe0u);
    s16(c, 2, (c.r[0] & 0xFFFFu));
    // 00cfe3  mov ax, cx
    X86_AT(c, 0xcfe3u);
    s16(c, 0, (c.r[1] & 0xFFFFu));
L_cfe6:
    X86_TICK(c, 13);
    // 00cfe6  push eax
    X86_AT(c, 0xcfe6u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 00cfe7  push ebx
    X86_AT(c, 0xcfe7u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 00cfe8  push edx
    X86_AT(c, 0xcfe8u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 00cfe9  call 0x5f54
    X86_AT(c, 0xcfe9u);
    push32(c, 0xcfeeu); f_00005f54(c); X86_RET(c, 0xcfeeu);
    X86_TICK(c, 25);
    // 00cfee  pop edx
    X86_AT(c, 0xcfeeu);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 00cfef  pop ebx
    X86_AT(c, 0xcfefu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 00cff0  pop eax
    X86_AT(c, 0xcff0u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 00cff1  add dx, bx
    X86_AT(c, 0xcff1u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
    // 00cff4  dec word ptr gs:[ebp + 0x434]
    X86_AT(c, 0xcff4u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x434u)); uint32_t v = rd16(ea); wr16(ea, x86_dec(c, v, 2)); }
    // 00cffc  jns 0xcfe6
    X86_AT(c, 0xcffcu);
    if (x86_cc(c, 9)) { X86_POLL(c, 0xcfe6u); goto L_cfe6; }
    X86_TICK(c, 4);
    // 00cffe  pop ebx
    X86_AT(c, 0xcffeu);
    { uint32_t v = pop32(c); c.r[3] = v; }
L_cfff:
    X86_TICK(c, 8);
    // 00cfff  pop eax
    X86_AT(c, 0xcfffu);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 00d000  pop edx
    X86_AT(c, 0xd000u);
    { uint32_t v = pop32(c); c.r[2] = v; }
L_d001:
    X86_TICK(c, 12);
    // 00d001  cmp byte ptr gs:[ebp + 0x41f], 1
    X86_AT(c, 0xd001u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x41Fu))), 0x1u, 0, 1);
    // 00d009  jne 0xd03b
    X86_AT(c, 0xd009u);
    if (x86_cc(c, 5)) { goto L_d03b; }
    X86_TICK(c, 26);
    // 00d00b  push eax
    X86_AT(c, 0xd00bu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 00d00c  mov al, byte ptr gs:[ebp + 0x4b8]
    X86_AT(c, 0xd00cu);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x4B8u))));
    // 00d013  mov byte ptr gs:[ebp + 0x4ca], al
    X86_AT(c, 0xd013u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x4CAu)), g8(c, 0));
    // 00d01a  and al, 1
    X86_AT(c, 0xd01au);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & 0x1u, 1)); }
    // 00d01c  mov byte ptr gs:[ebp + 0x4b8], al
    X86_AT(c, 0xd01cu);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x4B8u)), g8(c, 0));
    // 00d023  mov al, byte ptr gs:[ebp + 0x4b9]
    X86_AT(c, 0xd023u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x4B9u))));
    // 00d02a  mov byte ptr gs:[ebp + 0x4cb], al
    X86_AT(c, 0xd02au);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x4CBu)), g8(c, 0));
    // 00d031  and al, 1
    X86_AT(c, 0xd031u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & 0x1u, 1)); }
    // 00d033  mov byte ptr gs:[ebp + 0x4b9], al
    X86_AT(c, 0xd033u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x4B9u)), g8(c, 0));
    // 00d03a  pop eax
    X86_AT(c, 0xd03au);
    { uint32_t v = pop32(c); c.r[0] = v; }
L_d03b:
    X86_TICK(c, 12);
    // 00d03b  cmp byte ptr gs:[ebp + 0x41c], 0
    X86_AT(c, 0xd03bu);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x41Cu))), 0x0u, 0, 1);
    // 00d043  jne 0xd0a1
    X86_AT(c, 0xd043u);
    if (x86_cc(c, 5)) { goto L_d0a1; }
    X86_TICK(c, 12);
    // 00d045  cmp word ptr gs:[ebp + 0x47a], ax
    X86_AT(c, 0xd045u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x47Au))), (c.r[0] & 0xFFFFu), 0, 2);
    // 00d04d  jae 0xd0a1
    X86_AT(c, 0xd04du);
    if (x86_cc(c, 3)) { goto L_d0a1; }
    X86_TICK(c, 26);
    // 00d04f  push ebx
    X86_AT(c, 0xd04fu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 00d050  push edx
    X86_AT(c, 0xd050u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 00d051  push eax
    X86_AT(c, 0xd051u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 00d052  mov esi, dword ptr gs:[ebp + 0x48c]
    X86_AT(c, 0xd052u);
    c.r[6] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x48Cu)));
    // 00d059  mov edi, dword ptr gs:[ebp + 0x490]
    X86_AT(c, 0xd059u);
    c.r[7] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x490u)));
    // 00d060  cmp word ptr gs:[ebp + 0x47a], 0
    X86_AT(c, 0xd060u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x47Au))), 0x0u, 0, 2);
    // 00d069  jne 0xd072
    X86_AT(c, 0xd069u);
    if (x86_cc(c, 5)) { goto L_d072; }
    X86_TICK(c, 7);
    // 00d06b  call 0xd0ac
    X86_AT(c, 0xd06bu);
    push32(c, 0xd070u); f_0000d0ac(c); X86_RET(c, 0xd070u);
    X86_TICK(c, 7);
    // 00d070  jmp 0xd07c
    X86_AT(c, 0xd070u);
    goto L_d07c;
L_d072:
    X86_TICK(c, 7);
    // 00d072  call 0xd134
    X86_AT(c, 0xd072u);
    push32(c, 0xd077u); f_0000d134(c); X86_RET(c, 0xd077u);
    X86_TICK(c, 7);
    // 00d077  call 0xd31c
    X86_AT(c, 0xd077u);
    push32(c, 0xd07cu); f_0000d31c(c); X86_RET(c, 0xd07cu);
L_d07c:
    X86_TICK(c, 20);
    // 00d07c  pop eax
    X86_AT(c, 0xd07cu);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 00d07d  pop edx
    X86_AT(c, 0xd07du);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 00d07e  pop ebx
    X86_AT(c, 0xd07eu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 00d07f  mov word ptr gs:[ebp + 0x472], dx
    X86_AT(c, 0xd07fu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x472u)), (c.r[2] & 0xFFFFu));
    // 00d087  mov word ptr gs:[ebp + 0x474], dx
    X86_AT(c, 0xd087u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x474u)), (c.r[2] & 0xFFFFu));
    // 00d08f  mov word ptr gs:[ebp + 0x476], dx
    X86_AT(c, 0xd08fu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x476u)), (c.r[2] & 0xFFFFu));
    // 00d097  mov word ptr gs:[ebp + 0x478], 0
    X86_AT(c, 0xd097u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x478u)), 0x0u);
L_d0a1:
    X86_TICK(c, 7);
    // 00d0a1  jmp 0xc9cf
    X86_AT(c, 0xd0a1u);
    X86_POLL(c, 0xc9cfu); goto L_c9cf;
    x86_fault(c, 0xc814u, "ran off the end of a function");
}
void f_0000c81c(X86Cpu& c) {
    X86_TICK(c, 23);
    // 00c81c  mov word ptr gs:[ebp + 0x482], ax
    X86_AT(c, 0xc81cu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x482u)), (c.r[0] & 0xFFFFu));
    // 00c824  shl word ptr gs:[ebp + 0x480], 1
    X86_AT(c, 0xc824u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x480u)); uint32_t v = rd16(ea); bool w; uint32_t r = x86_shift(c, 4, v, 0x1u, 2, w); if (w) wr16(ea, r); }
    // 00c82c  shl word ptr gs:[ebp + 0x482], 1
    X86_AT(c, 0xc82cu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x482u)); uint32_t v = rd16(ea); bool w; uint32_t r = x86_shift(c, 4, v, 0x1u, 2, w); if (w) wr16(ea, r); }
    // 00c834  cmp dx, ax
    X86_AT(c, 0xc834u);
    (void)x86_sub(c, (c.r[2] & 0xFFFFu), (c.r[0] & 0xFFFFu), 0, 2);
    // 00c837  jbe 0xc84b
    X86_AT(c, 0xc837u);
    if (x86_cc(c, 6)) { goto L_c84b; }
    X86_TICK(c, 11);
    // 00c839  mov word ptr gs:[ebp + 0x47c], dx
    X86_AT(c, 0xc839u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x47Cu)), (c.r[2] & 0xFFFFu));
    // 00c841  mov byte ptr gs:[ebp + 0x4c8], 0
    X86_AT(c, 0xc841u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x4C8u)), 0x0u);
    // 00c849  jmp 0xc85b
    X86_AT(c, 0xc849u);
    goto L_c85b;
L_c84b:
    X86_TICK(c, 4);
    // 00c84b  mov word ptr gs:[ebp + 0x47c], ax
    X86_AT(c, 0xc84bu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x47Cu)), (c.r[0] & 0xFFFFu));
    // 00c853  mov byte ptr gs:[ebp + 0x4c8], 1
    X86_AT(c, 0xc853u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x4C8u)), 0x1u);
L_c85b:
    X86_TICK(c, 25);
    // 00c85b  mov word ptr gs:[ebp + 0x484], cx
    X86_AT(c, 0xc85bu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x484u)), (c.r[1] & 0xFFFFu));
    // 00c863  mov word ptr gs:[ebp + 0x486], bx
    X86_AT(c, 0xc863u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x486u)), (c.r[3] & 0xFFFFu));
    // 00c86b  shl word ptr gs:[ebp + 0x484], 1
    X86_AT(c, 0xc86bu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x484u)); uint32_t v = rd16(ea); bool w; uint32_t r = x86_shift(c, 4, v, 0x1u, 2, w); if (w) wr16(ea, r); }
    // 00c873  shl word ptr gs:[ebp + 0x486], 1
    X86_AT(c, 0xc873u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x486u)); uint32_t v = rd16(ea); bool w; uint32_t r = x86_shift(c, 4, v, 0x1u, 2, w); if (w) wr16(ea, r); }
    // 00c87b  cmp cx, bx
    X86_AT(c, 0xc87bu);
    (void)x86_sub(c, (c.r[1] & 0xFFFFu), (c.r[3] & 0xFFFFu), 0, 2);
    // 00c87e  jbe 0xc892
    X86_AT(c, 0xc87eu);
    if (x86_cc(c, 6)) { goto L_c892; }
    X86_TICK(c, 11);
    // 00c880  mov word ptr gs:[ebp + 0x47e], cx
    X86_AT(c, 0xc880u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x47Eu)), (c.r[1] & 0xFFFFu));
    // 00c888  mov byte ptr gs:[ebp + 0x4c9], 0
    X86_AT(c, 0xc888u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x4C9u)), 0x0u);
    // 00c890  jmp 0xc8a2
    X86_AT(c, 0xc890u);
    goto L_c8a2;
L_c892:
    X86_TICK(c, 4);
    // 00c892  mov word ptr gs:[ebp + 0x47e], bx
    X86_AT(c, 0xc892u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x47Eu)), (c.r[3] & 0xFFFFu));
    // 00c89a  mov byte ptr gs:[ebp + 0x4c9], 1
    X86_AT(c, 0xc89au);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x4C9u)), 0x1u);
L_c8a2:
    X86_TICK(c, 226);
    // 00c8a2  sub eax, eax
    X86_AT(c, 0xc8a2u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 00c8a4  mov word ptr gs:[ebp + 0x43a], ax
    X86_AT(c, 0xc8a4u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x43Au)), (c.r[0] & 0xFFFFu));
    // 00c8ac  mov dword ptr gs:[ebp + 0x444], eax
    X86_AT(c, 0xc8acu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x444u)), c.r[0]);
    // 00c8b3  mov dword ptr gs:[ebp + 0x448], eax
    X86_AT(c, 0xc8b3u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x448u)), c.r[0]);
    // 00c8ba  mov dword ptr gs:[ebp + 0x440], eax
    X86_AT(c, 0xc8bau);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x440u)), c.r[0]);
    // 00c8c1  sub eax, eax
    X86_AT(c, 0xc8c1u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 00c8c3  mov ax, word ptr gs:[ebp + 0x40c]
    X86_AT(c, 0xc8c3u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x40Cu))));
    // 00c8cb  mov word ptr gs:[ebp + 0x438], ax
    X86_AT(c, 0xc8cbu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x438u)), (c.r[0] & 0xFFFFu));
    // 00c8d3  mov ebx, eax
    X86_AT(c, 0xc8d3u);
    c.r[3] = c.r[0];
    // 00c8d5  mul eax
    X86_AT(c, 0xc8d5u);
    x86_mul(c, c.r[0], 4);
    // 00c8d7  mov esi, eax
    X86_AT(c, 0xc8d7u);
    c.r[6] = c.r[0];
    // 00c8d9  add eax, eax
    X86_AT(c, 0xc8d9u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, c.r[0], 0, 4); }
    // 00c8db  mov dword ptr gs:[ebp + 0x458], eax
    X86_AT(c, 0xc8dbu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x458u)), c.r[0]);
    // 00c8e2  add eax, eax
    X86_AT(c, 0xc8e2u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, c.r[0], 0, 4); }
    // 00c8e4  mov dword ptr gs:[ebp + 0x468], eax
    X86_AT(c, 0xc8e4u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x468u)), c.r[0]);
    // 00c8eb  movzx eax, word ptr gs:[ebp + 0x40e]
    X86_AT(c, 0xc8ebu);
    c.r[0] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x40Eu)));
    // 00c8f3  mul eax
    X86_AT(c, 0xc8f3u);
    x86_mul(c, c.r[0], 4);
    // 00c8f5  mov dword ptr gs:[ebp + 0x454], eax
    X86_AT(c, 0xc8f5u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x454u)), c.r[0]);
    // 00c8fc  add eax, eax
    X86_AT(c, 0xc8fcu);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, c.r[0], 0, 4); }
    // 00c8fe  mov dword ptr gs:[ebp + 0x45c], eax
    X86_AT(c, 0xc8feu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x45Cu)), c.r[0]);
    // 00c905  push eax
    X86_AT(c, 0xc905u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 00c906  add eax, eax
    X86_AT(c, 0xc906u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, c.r[0], 0, 4); }
    // 00c908  mov dword ptr gs:[ebp + 0x46c], eax
    X86_AT(c, 0xc908u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x46Cu)), c.r[0]);
    // 00c90f  pop eax
    X86_AT(c, 0xc90fu);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 00c910  mul ebx
    X86_AT(c, 0xc910u);
    x86_mul(c, c.r[3], 4);
    // 00c912  push eax
    X86_AT(c, 0xc912u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 00c913  push edx
    X86_AT(c, 0xc913u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 00c914  add eax, eax
    X86_AT(c, 0xc914u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, c.r[0], 0, 4); }
    // 00c916  adc edx, edx
    X86_AT(c, 0xc916u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[2], c.fl & 1, 4); }
    // 00c918  mov dword ptr gs:[ebp + 0x44c], eax
    X86_AT(c, 0xc918u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x44Cu)), c.r[0]);
    // 00c91f  mov dword ptr gs:[ebp + 0x450], edx
    X86_AT(c, 0xc91fu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x450u)), c.r[2]);
    // 00c926  shr esi, 1
    X86_AT(c, 0xc926u);
    { uint32_t v = c.r[6]; bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 4, w); if (w) c.r[6] = r; }
    // 00c928  add esi, dword ptr gs:[ebp + 0x45c]
    X86_AT(c, 0xc928u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x45Cu))), 0, 4); }
    // 00c92f  not edx
    X86_AT(c, 0xc92fu);
    { uint32_t v = c.r[2]; c.r[2] = ~v & 0xFFFFFFFFu; }
    // 00c931  not eax
    X86_AT(c, 0xc931u);
    { uint32_t v = c.r[0]; c.r[0] = ~v & 0xFFFFFFFFu; }
    // 00c933  add eax, 1
    X86_AT(c, 0xc933u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0x1u, 0, 4); }
    // 00c938  adc edx, 0
    X86_AT(c, 0xc938u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, 0x0u, c.fl & 1, 4); }
    // 00c93b  and edx, 0xffff
    X86_AT(c, 0xc93bu);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & 0xFFFFu, 4); }
    // 00c941  add eax, esi
    X86_AT(c, 0xc941u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, c.r[6], 0, 4); }
    // 00c943  adc edx, 0
    X86_AT(c, 0xc943u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, 0x0u, c.fl & 1, 4); }
    // 00c946  mov dword ptr gs:[ebp + 0x460], eax
    X86_AT(c, 0xc946u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x460u)), c.r[0]);
    // 00c94d  mov dword ptr gs:[ebp + 0x464], edx
    X86_AT(c, 0xc94du);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x464u)), c.r[2]);
    // 00c954  mov eax, dword ptr gs:[ebp + 0x454]
    X86_AT(c, 0xc954u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x454u)));
    // 00c95b  shr eax, 1
    X86_AT(c, 0xc95bu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 4, w); if (w) c.r[0] = r; }
    // 00c95d  add eax, dword ptr gs:[ebp + 0x458]
    X86_AT(c, 0xc95du);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x458u))), 0, 4); }
    // 00c964  mov dword ptr gs:[ebp + 0x43c], eax
    X86_AT(c, 0xc964u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x43Cu)), c.r[0]);
    // 00c96b  pop edx
    X86_AT(c, 0xc96bu);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 00c96c  pop eax
    X86_AT(c, 0xc96cu);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 00c96d  not edx
    X86_AT(c, 0xc96du);
    { uint32_t v = c.r[2]; c.r[2] = ~v & 0xFFFFFFFFu; }
    // 00c96f  not eax
    X86_AT(c, 0xc96fu);
    { uint32_t v = c.r[0]; c.r[0] = ~v & 0xFFFFFFFFu; }
    // 00c971  add eax, 1
    X86_AT(c, 0xc971u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0x1u, 0, 4); }
    // 00c976  adc edx, 0
    X86_AT(c, 0xc976u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, 0x0u, c.fl & 1, 4); }
    // 00c979  and edx, 0xffff
    X86_AT(c, 0xc979u);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & 0xFFFFu, 4); }
    // 00c97f  add dword ptr gs:[ebp + 0x43c], eax
    X86_AT(c, 0xc97fu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x43Cu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 00c986  adc dword ptr gs:[ebp + 0x440], edx
    X86_AT(c, 0xc986u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x440u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[2], c.fl & 1, 4)); }
    // 00c98d  mov dx, word ptr gs:[ebp + 0x438]
    X86_AT(c, 0xc98du);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x438u))));
    // 00c995  mov ax, word ptr gs:[ebp + 0x43a]
    X86_AT(c, 0xc995u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x43Au))));
    // 00c99d  mov bx, word ptr gs:[ebp + 0x488]
    X86_AT(c, 0xc99du);
    s16(c, 3, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x488u))));
    // 00c9a5  mov word ptr gs:[ebp + 0x47a], 0xffff
    X86_AT(c, 0xc9a5u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x47Au)), 0xFFFFu);
    // 00c9af  mov word ptr gs:[ebp + 0x470], dx
    X86_AT(c, 0xc9afu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x470u)), (c.r[2] & 0xFFFFu));
    // 00c9b7  mov word ptr gs:[ebp + 0x472], dx
    X86_AT(c, 0xc9b7u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x472u)), (c.r[2] & 0xFFFFu));
    // 00c9bf  mov word ptr gs:[ebp + 0x474], dx
    X86_AT(c, 0xc9bfu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x474u)), (c.r[2] & 0xFFFFu));
    // 00c9c7  mov word ptr gs:[ebp + 0x476], dx
    X86_AT(c, 0xc9c7u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x476u)), (c.r[2] & 0xFFFFu));
L_c9cf:
    X86_TICK(c, 7);
    // 00c9cf  test dx, dx
    X86_AT(c, 0xc9cfu);
    (void)x86_logic(c, (c.r[2] & 0xFFFFu) & (c.r[2] & 0xFFFFu), 2);
    // 00c9d2  jge 0xca16
    X86_AT(c, 0xc9d2u);
    if (x86_cc(c, 13)) { goto L_ca16; }
    X86_TICK(c, 12);
    // 00c9d4  cmp byte ptr gs:[ebp + 0x41c], 0
    X86_AT(c, 0xc9d4u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x41Cu))), 0x0u, 0, 1);
    // 00c9dc  jne 0xca13
    X86_AT(c, 0xc9dcu);
    if (x86_cc(c, 5)) { goto L_ca13; }
    X86_TICK(c, 12);
    // 00c9de  cmp word ptr gs:[ebp + 0x40e], ax
    X86_AT(c, 0xc9deu);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x40Eu))), (c.r[0] & 0xFFFFu), 0, 2);
    // 00c9e6  jne 0xca13
    X86_AT(c, 0xc9e6u);
    if (x86_cc(c, 5)) { goto L_ca13; }
    X86_TICK(c, 12);
    // 00c9e8  cmp word ptr gs:[ebp + 0x472], 0
    X86_AT(c, 0xc9e8u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x472u))), 0x0u, 0, 2);
    // 00c9f1  jl 0xca13
    X86_AT(c, 0xc9f1u);
    if (x86_cc(c, 12)) { goto L_ca13; }
    X86_TICK(c, 17);
    // 00c9f3  mov word ptr gs:[ebp + 0x47a], ax
    X86_AT(c, 0xc9f3u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x47Au)), (c.r[0] & 0xFFFFu));
    // 00c9fb  mov esi, dword ptr gs:[ebp + 0x48c]
    X86_AT(c, 0xc9fbu);
    c.r[6] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x48Cu)));
    // 00ca02  mov edi, dword ptr gs:[ebp + 0x490]
    X86_AT(c, 0xca02u);
    c.r[7] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x490u)));
    // 00ca09  call 0xd134
    X86_AT(c, 0xca09u);
    push32(c, 0xca0eu); f_0000d134(c); X86_RET(c, 0xca0eu);
    X86_TICK(c, 7);
    // 00ca0e  call 0xd31c
    X86_AT(c, 0xca0eu);
    push32(c, 0xca13u); f_0000d31c(c); X86_RET(c, 0xca13u);
L_ca13:
    X86_TICK(c, 12);
    // 00ca13  xor ah, ah
    X86_AT(c, 0xca13u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_logic(c, v ^ g8(c, 4), 1)); }
    // 00ca15  ret 
    X86_AT(c, 0xca15u);
    c.eip = pop32(c); return;
L_ca16:
    X86_TICK(c, 20);
    // 00ca16  mov esi, dword ptr gs:[ebp + 0x48c]
    X86_AT(c, 0xca16u);
    c.r[6] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x48Cu)));
    // 00ca1d  mov edi, dword ptr gs:[ebp + 0x490]
    X86_AT(c, 0xca1du);
    c.r[7] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x490u)));
    // 00ca24  cmp byte ptr gs:[ebp + 0x41e], 1
    X86_AT(c, 0xca24u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x41Eu))), 0x1u, 0, 1);
    // 00ca2c  jne 0xcbb0
    X86_AT(c, 0xca2cu);
    if (x86_cc(c, 5)) { goto L_cbb0; }
    X86_TICK(c, 12);
    // 00ca32  cmp word ptr gs:[ebp + 0x47a], ax
    X86_AT(c, 0xca32u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x47Au))), (c.r[0] & 0xFFFFu), 0, 2);
    // 00ca3a  jge 0xcbb0
    X86_AT(c, 0xca3au);
    if (x86_cc(c, 13)) { goto L_cbb0; }
    X86_TICK(c, 15);
    // 00ca40  push eax
    X86_AT(c, 0xca40u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 00ca41  mov ax, word ptr gs:[ebp + 0x4bc]
    X86_AT(c, 0xca41u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x4BCu))));
    // 00ca49  mov word ptr gs:[ebp + 0x4c0], ax
    X86_AT(c, 0xca49u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x4C0u)), (c.r[0] & 0xFFFFu));
    // 00ca51  cmp ax, dx
    X86_AT(c, 0xca51u);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), (c.r[2] & 0xFFFFu), 0, 2);
    // 00ca54  jbe 0xca7b
    X86_AT(c, 0xca54u);
    if (x86_cc(c, 6)) { goto L_ca7b; }
    X86_TICK(c, 12);
    // 00ca56  test byte ptr gs:[ebp + 0x4ba], 1
    X86_AT(c, 0xca56u);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x4BAu))) & 0x1u, 1);
    // 00ca5e  jne 0xca7b
    X86_AT(c, 0xca5eu);
    if (x86_cc(c, 5)) { goto L_ca7b; }
    X86_TICK(c, 18);
    // 00ca60  mov byte ptr gs:[ebp + 0x4ba], 1
    X86_AT(c, 0xca60u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x4BAu)), 0x1u);
    // 00ca68  mov byte ptr gs:[ebp + 0x4b8], 1
    X86_AT(c, 0xca68u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x4B8u)), 0x1u);
    // 00ca70  xor byte ptr gs:[ebp + esi*1 + 0x494], 1
    X86_AT(c, 0xca70u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x494u)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v ^ 0x1u, 1)); }
    // 00ca79  jmp 0xcaf8
    X86_AT(c, 0xca79u);
    goto L_caf8;
L_ca7b:
    X86_TICK(c, 16);
    // 00ca7b  mov cx, word ptr gs:[ebp + 0x47c]
    X86_AT(c, 0xca7bu);
    s16(c, 1, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x47Cu))));
    // 00ca83  cmp byte ptr gs:[ebp + 0x4c8], 0
    X86_AT(c, 0xca83u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x4C8u))), 0x0u, 0, 1);
    // 00ca8b  jne 0xcacc
    X86_AT(c, 0xca8bu);
    if (x86_cc(c, 5)) { goto L_cacc; }
L_ca8d:
    X86_TICK(c, 7);
    // 00ca8d  cmp ax, dx
    X86_AT(c, 0xca8du);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), (c.r[2] & 0xFFFFu), 0, 2);
    // 00ca90  ja 0xcaba
    X86_AT(c, 0xca90u);
    if (x86_cc(c, 7)) { goto L_caba; }
    X86_TICK(c, 13);
    // 00ca92  inc ax
    X86_AT(c, 0xca92u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_inc(c, v, 2)); }
    // 00ca94  sub cx, word ptr gs:[ebp + 0x482]
    X86_AT(c, 0xca94u);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_sub(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x482u))), 0, 2)); }
    // 00ca9c  jae 0xca8d
    X86_AT(c, 0xca9cu);
    if (x86_cc(c, 3)) { X86_POLL(c, 0xca8du); goto L_ca8d; }
    X86_TICK(c, 19);
    // 00ca9e  mov word ptr gs:[ebp + 0x4bc], ax
    X86_AT(c, 0xca9eu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x4BCu)), (c.r[0] & 0xFFFFu));
    // 00caa6  dec ax
    X86_AT(c, 0xcaa6u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_dec(c, v, 2)); }
    // 00caa8  mov word ptr gs:[ebp + 0x4c2], ax
    X86_AT(c, 0xcaa8u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x4C2u)), (c.r[0] & 0xFFFFu));
    // 00cab0  add cx, word ptr gs:[ebp + 0x480]
    X86_AT(c, 0xcab0u);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x480u))), 0, 2)); }
    // 00cab8  jmp 0xcaf0
    X86_AT(c, 0xcab8u);
    goto L_caf0;
L_caba:
    X86_TICK(c, 11);
    // 00caba  mov word ptr gs:[ebp + 0x4bc], ax
    X86_AT(c, 0xcabau);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x4BCu)), (c.r[0] & 0xFFFFu));
    // 00cac2  mov word ptr gs:[ebp + 0x4c2], dx
    X86_AT(c, 0xcac2u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x4C2u)), (c.r[2] & 0xFFFFu));
    // 00caca  jmp 0xcaf0
    X86_AT(c, 0xcacau);
    goto L_caf0;
L_cacc:
    X86_TICK(c, 13);
    // 00cacc  mov word ptr gs:[ebp + 0x4c2], ax
    X86_AT(c, 0xcaccu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x4C2u)), (c.r[0] & 0xFFFFu));
    // 00cad4  sub cx, word ptr gs:[ebp + 0x480]
    X86_AT(c, 0xcad4u);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_sub(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x480u))), 0, 2)); }
    // 00cadc  jae 0xcae8
    X86_AT(c, 0xcadcu);
    if (x86_cc(c, 3)) { goto L_cae8; }
    X86_TICK(c, 8);
    // 00cade  inc ax
    X86_AT(c, 0xcadeu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_inc(c, v, 2)); }
    // 00cae0  add cx, word ptr gs:[ebp + 0x482]
    X86_AT(c, 0xcae0u);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x482u))), 0, 2)); }
L_cae8:
    X86_TICK(c, 2);
    // 00cae8  mov word ptr gs:[ebp + 0x4bc], ax
    X86_AT(c, 0xcae8u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x4BCu)), (c.r[0] & 0xFFFFu));
L_caf0:
    X86_TICK(c, 2);
    // 00caf0  mov word ptr gs:[ebp + 0x47c], cx
    X86_AT(c, 0xcaf0u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x47Cu)), (c.r[1] & 0xFFFFu));
L_caf8:
    X86_TICK(c, 13);
    // 00caf8  mov ax, word ptr gs:[ebp + 0x4be]
    X86_AT(c, 0xcaf8u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x4BEu))));
    // 00cb00  mov word ptr gs:[ebp + 0x4c4], ax
    X86_AT(c, 0xcb00u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x4C4u)), (c.r[0] & 0xFFFFu));
    // 00cb08  cmp ax, dx
    X86_AT(c, 0xcb08u);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), (c.r[2] & 0xFFFFu), 0, 2);
    // 00cb0b  jbe 0xcb32
    X86_AT(c, 0xcb0bu);
    if (x86_cc(c, 6)) { goto L_cb32; }
    X86_TICK(c, 12);
    // 00cb0d  test byte ptr gs:[ebp + 0x4bb], 1
    X86_AT(c, 0xcb0du);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x4BBu))) & 0x1u, 1);
    // 00cb15  jne 0xcb32
    X86_AT(c, 0xcb15u);
    if (x86_cc(c, 5)) { goto L_cb32; }
    X86_TICK(c, 18);
    // 00cb17  mov byte ptr gs:[ebp + 0x4bb], 1
    X86_AT(c, 0xcb17u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x4BBu)), 0x1u);
    // 00cb1f  mov byte ptr gs:[ebp + 0x4b9], 1
    X86_AT(c, 0xcb1fu);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x4B9u)), 0x1u);
    // 00cb27  xor byte ptr gs:[ebp + edi*1 + 0x494], 1
    X86_AT(c, 0xcb27u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + c.r[7] + 0x494u)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v ^ 0x1u, 1)); }
    // 00cb30  jmp 0xcbaf
    X86_AT(c, 0xcb30u);
    goto L_cbaf;
L_cb32:
    X86_TICK(c, 16);
    // 00cb32  mov cx, word ptr gs:[ebp + 0x47e]
    X86_AT(c, 0xcb32u);
    s16(c, 1, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x47Eu))));
    // 00cb3a  cmp byte ptr gs:[ebp + 0x4c9], 0
    X86_AT(c, 0xcb3au);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x4C9u))), 0x0u, 0, 1);
    // 00cb42  jne 0xcb83
    X86_AT(c, 0xcb42u);
    if (x86_cc(c, 5)) { goto L_cb83; }
L_cb44:
    X86_TICK(c, 7);
    // 00cb44  cmp ax, dx
    X86_AT(c, 0xcb44u);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), (c.r[2] & 0xFFFFu), 0, 2);
    // 00cb47  ja 0xcb71
    X86_AT(c, 0xcb47u);
    if (x86_cc(c, 7)) { goto L_cb71; }
    X86_TICK(c, 13);
    // 00cb49  inc ax
    X86_AT(c, 0xcb49u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_inc(c, v, 2)); }
    // 00cb4b  sub cx, word ptr gs:[ebp + 0x486]
    X86_AT(c, 0xcb4bu);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_sub(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x486u))), 0, 2)); }
    // 00cb53  jae 0xcb44
    X86_AT(c, 0xcb53u);
    if (x86_cc(c, 3)) { X86_POLL(c, 0xcb44u); goto L_cb44; }
    X86_TICK(c, 19);
    // 00cb55  mov word ptr gs:[ebp + 0x4be], ax
    X86_AT(c, 0xcb55u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x4BEu)), (c.r[0] & 0xFFFFu));
    // 00cb5d  dec ax
    X86_AT(c, 0xcb5du);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_dec(c, v, 2)); }
    // 00cb5f  mov word ptr gs:[ebp + 0x4c6], ax
    X86_AT(c, 0xcb5fu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x4C6u)), (c.r[0] & 0xFFFFu));
    // 00cb67  add cx, word ptr gs:[ebp + 0x484]
    X86_AT(c, 0xcb67u);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x484u))), 0, 2)); }
    // 00cb6f  jmp 0xcba7
    X86_AT(c, 0xcb6fu);
    goto L_cba7;
L_cb71:
    X86_TICK(c, 11);
    // 00cb71  mov word ptr gs:[ebp + 0x4be], ax
    X86_AT(c, 0xcb71u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x4BEu)), (c.r[0] & 0xFFFFu));
    // 00cb79  mov word ptr gs:[ebp + 0x4c6], dx
    X86_AT(c, 0xcb79u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x4C6u)), (c.r[2] & 0xFFFFu));
    // 00cb81  jmp 0xcba7
    X86_AT(c, 0xcb81u);
    goto L_cba7;
L_cb83:
    X86_TICK(c, 13);
    // 00cb83  mov word ptr gs:[ebp + 0x4c6], ax
    X86_AT(c, 0xcb83u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x4C6u)), (c.r[0] & 0xFFFFu));
    // 00cb8b  sub cx, word ptr gs:[ebp + 0x484]
    X86_AT(c, 0xcb8bu);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_sub(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x484u))), 0, 2)); }
    // 00cb93  jae 0xcb9f
    X86_AT(c, 0xcb93u);
    if (x86_cc(c, 3)) { goto L_cb9f; }
    X86_TICK(c, 8);
    // 00cb95  inc ax
    X86_AT(c, 0xcb95u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_inc(c, v, 2)); }
    // 00cb97  add cx, word ptr gs:[ebp + 0x486]
    X86_AT(c, 0xcb97u);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x486u))), 0, 2)); }
L_cb9f:
    X86_TICK(c, 2);
    // 00cb9f  mov word ptr gs:[ebp + 0x4be], ax
    X86_AT(c, 0xcb9fu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x4BEu)), (c.r[0] & 0xFFFFu));
L_cba7:
    X86_TICK(c, 2);
    // 00cba7  mov word ptr gs:[ebp + 0x47e], cx
    X86_AT(c, 0xcba7u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x47Eu)), (c.r[1] & 0xFFFFu));
L_cbaf:
    X86_TICK(c, 4);
    // 00cbaf  pop eax
    X86_AT(c, 0xcbafu);
    { uint32_t v = pop32(c); c.r[0] = v; }
L_cbb0:
    X86_TICK(c, 12);
    // 00cbb0  cmp byte ptr gs:[ebp + 0x41e], 1
    X86_AT(c, 0xcbb0u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x41Eu))), 0x1u, 0, 1);
    // 00cbb8  jne 0xccce
    X86_AT(c, 0xcbb8u);
    if (x86_cc(c, 5)) { goto L_ccce; }
    X86_TICK(c, 12);
    // 00cbbe  test byte ptr gs:[ebp + 0x4ba], 1
    X86_AT(c, 0xcbbeu);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x4BAu))) & 0x1u, 1);
    // 00cbc6  jne 0xcc57
    X86_AT(c, 0xcbc6u);
    if (x86_cc(c, 5)) { goto L_cc57; }
    X86_TICK(c, 11);
    // 00cbcc  mov cx, word ptr gs:[ebp + 0x4c0]
    X86_AT(c, 0xcbccu);
    s16(c, 1, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x4C0u))));
    // 00cbd4  cmp dx, cx
    X86_AT(c, 0xcbd4u);
    (void)x86_sub(c, (c.r[2] & 0xFFFFu), (c.r[1] & 0xFFFFu), 0, 2);
    // 00cbd7  jae 0xcbf4
    X86_AT(c, 0xcbd7u);
    if (x86_cc(c, 3)) { goto L_cbf4; }
    X86_TICK(c, 18);
    // 00cbd9  mov byte ptr gs:[ebp + 0x4b8], 1
    X86_AT(c, 0xcbd9u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x4B8u)), 0x1u);
    // 00cbe1  mov byte ptr gs:[ebp + 0x4ba], 1
    X86_AT(c, 0xcbe1u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x4BAu)), 0x1u);
    // 00cbe9  xor byte ptr gs:[ebp + esi*1 + 0x494], 1
    X86_AT(c, 0xcbe9u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x494u)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v ^ 0x1u, 1)); }
    // 00cbf2  jmp 0xcc57
    X86_AT(c, 0xcbf2u);
    goto L_cc57;
L_cbf4:
    X86_TICK(c, 5);
    // 00cbf4  jne 0xcbfe
    X86_AT(c, 0xcbf4u);
    if (x86_cc(c, 5)) { goto L_cbfe; }
    X86_TICK(c, 2);
    // 00cbf6  mov byte ptr gs:[ebp + 0x4b8], 2
    X86_AT(c, 0xcbf6u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x4B8u)), 0x2u);
L_cbfe:
    X86_TICK(c, 11);
    // 00cbfe  mov cx, word ptr gs:[ebp + 0x4c2]
    X86_AT(c, 0xcbfeu);
    s16(c, 1, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x4C2u))));
    // 00cc06  cmp dx, cx
    X86_AT(c, 0xcc06u);
    (void)x86_sub(c, (c.r[2] & 0xFFFFu), (c.r[1] & 0xFFFFu), 0, 2);
    // 00cc09  ja 0xcc3b
    X86_AT(c, 0xcc09u);
    if (x86_cc(c, 7)) { goto L_cc3b; }
    X86_TICK(c, 25);
    // 00cc0b  or byte ptr gs:[ebp + esi*1 + 0x494], 2
    X86_AT(c, 0xcc0bu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x494u)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | 0x2u, 1)); }
    // 00cc14  dec dx
    X86_AT(c, 0xcc14u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_dec(c, v, 2)); }
    // 00cc16  mov word ptr gs:[ebp + 0x4c2], dx
    X86_AT(c, 0xcc16u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x4C2u)), (c.r[2] & 0xFFFFu));
    // 00cc1e  inc dx
    X86_AT(c, 0xcc1eu);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_inc(c, v, 2)); }
    // 00cc20  cmp byte ptr gs:[ebp + 0x478], 0
    X86_AT(c, 0xcc20u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x478u))), 0x0u, 0, 1);
    // 00cc28  jne 0xcc57
    X86_AT(c, 0xcc28u);
    if (x86_cc(c, 5)) { goto L_cc57; }
    X86_TICK(c, 15);
    // 00cc2a  mov word ptr gs:[ebp + 0x474], dx
    X86_AT(c, 0xcc2au);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x474u)), (c.r[2] & 0xFFFFu));
    // 00cc32  not byte ptr gs:[ebp + 0x478]
    X86_AT(c, 0xcc32u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x478u)); uint32_t v = rd8(ea); wr8(ea, ~v & 0xFFu); }
    // 00cc39  jmp 0xcc57
    X86_AT(c, 0xcc39u);
    goto L_cc57;
L_cc3b:
    X86_TICK(c, 7);
    // 00cc3b  cmp bh, bl
    X86_AT(c, 0xcc3bu);
    (void)x86_sub(c, g8(c, 7), g8(c, 3), 0, 1);
    // 00cc3d  jne 0xcc57
    X86_AT(c, 0xcc3du);
    if (x86_cc(c, 5)) { goto L_cc57; }
    X86_TICK(c, 7);
    // 00cc3f  cmp dx, cx
    X86_AT(c, 0xcc3fu);
    (void)x86_sub(c, (c.r[2] & 0xFFFFu), (c.r[1] & 0xFFFFu), 0, 2);
    // 00cc42  jbe 0xcc57
    X86_AT(c, 0xcc42u);
    if (x86_cc(c, 6)) { goto L_cc57; }
    X86_TICK(c, 12);
    // 00cc44  cmp word ptr gs:[ebp + 0x4bc], dx
    X86_AT(c, 0xcc44u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x4BCu))), (c.r[2] & 0xFFFFu), 0, 2);
    // 00cc4c  jne 0xcc57
    X86_AT(c, 0xcc4cu);
    if (x86_cc(c, 5)) { goto L_cc57; }
    X86_TICK(c, 7);
    // 00cc4e  or byte ptr gs:[ebp + esi*1 + 0x494], 2
    X86_AT(c, 0xcc4eu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x494u)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | 0x2u, 1)); }
L_cc57:
    X86_TICK(c, 12);
    // 00cc57  test byte ptr gs:[ebp + 0x4bb], 1
    X86_AT(c, 0xcc57u);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x4BBu))) & 0x1u, 1);
    // 00cc5f  jne 0xccce
    X86_AT(c, 0xcc5fu);
    if (x86_cc(c, 5)) { goto L_ccce; }
    X86_TICK(c, 11);
    // 00cc61  mov cx, word ptr gs:[ebp + 0x4c4]
    X86_AT(c, 0xcc61u);
    s16(c, 1, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x4C4u))));
    // 00cc69  cmp dx, cx
    X86_AT(c, 0xcc69u);
    (void)x86_sub(c, (c.r[2] & 0xFFFFu), (c.r[1] & 0xFFFFu), 0, 2);
    // 00cc6c  jae 0xcc89
    X86_AT(c, 0xcc6cu);
    if (x86_cc(c, 3)) { goto L_cc89; }
    X86_TICK(c, 18);
    // 00cc6e  mov byte ptr gs:[ebp + 0x4b9], 1
    X86_AT(c, 0xcc6eu);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x4B9u)), 0x1u);
    // 00cc76  mov byte ptr gs:[ebp + 0x4bb], 1
    X86_AT(c, 0xcc76u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x4BBu)), 0x1u);
    // 00cc7e  xor byte ptr gs:[ebp + edi*1 + 0x494], 1
    X86_AT(c, 0xcc7eu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + c.r[7] + 0x494u)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v ^ 0x1u, 1)); }
    // 00cc87  jmp 0xccce
    X86_AT(c, 0xcc87u);
    goto L_ccce;
L_cc89:
    X86_TICK(c, 5);
    // 00cc89  jne 0xcc93
    X86_AT(c, 0xcc89u);
    if (x86_cc(c, 5)) { goto L_cc93; }
    X86_TICK(c, 2);
    // 00cc8b  mov byte ptr gs:[ebp + 0x4b9], 2
    X86_AT(c, 0xcc8bu);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x4B9u)), 0x2u);
L_cc93:
    X86_TICK(c, 11);
    // 00cc93  mov cx, word ptr gs:[ebp + 0x4c6]
    X86_AT(c, 0xcc93u);
    s16(c, 1, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x4C6u))));
    // 00cc9b  cmp dx, cx
    X86_AT(c, 0xcc9bu);
    (void)x86_sub(c, (c.r[2] & 0xFFFFu), (c.r[1] & 0xFFFFu), 0, 2);
    // 00cc9e  ja 0xccce
    X86_AT(c, 0xcc9eu);
    if (x86_cc(c, 7)) { goto L_ccce; }
    X86_TICK(c, 25);
    // 00cca0  or byte ptr gs:[ebp + edi*1 + 0x494], 2
    X86_AT(c, 0xcca0u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + c.r[7] + 0x494u)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | 0x2u, 1)); }
    // 00cca9  dec dx
    X86_AT(c, 0xcca9u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_dec(c, v, 2)); }
    // 00ccab  mov word ptr gs:[ebp + 0x4c6], dx
    X86_AT(c, 0xccabu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x4C6u)), (c.r[2] & 0xFFFFu));
    // 00ccb3  inc dx
    X86_AT(c, 0xccb3u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_inc(c, v, 2)); }
    // 00ccb5  cmp byte ptr gs:[ebp + 0x479], 0
    X86_AT(c, 0xccb5u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x479u))), 0x0u, 0, 1);
    // 00ccbd  jne 0xccce
    X86_AT(c, 0xccbdu);
    if (x86_cc(c, 5)) { goto L_ccce; }
    X86_TICK(c, 8);
    // 00ccbf  mov word ptr gs:[ebp + 0x476], dx
    X86_AT(c, 0xccbfu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x476u)), (c.r[2] & 0xFFFFu));
    // 00ccc7  not byte ptr gs:[ebp + 0x479]
    X86_AT(c, 0xccc7u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x479u)); uint32_t v = rd8(ea); wr8(ea, ~v & 0xFFu); }
L_ccce:
    X86_TICK(c, 12);
    // 00ccce  cmp byte ptr gs:[ebp + 0x41c], 1
    X86_AT(c, 0xccceu);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x41Cu))), 0x1u, 0, 1);
    // 00ccd6  jne 0xcd90
    X86_AT(c, 0xccd6u);
    if (x86_cc(c, 5)) { goto L_cd90; }
    X86_TICK(c, 9);
    // 00ccdc  push ebx
    X86_AT(c, 0xccdcu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 00ccdd  or dx, dx
    X86_AT(c, 0xccddu);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_logic(c, v | (c.r[2] & 0xFFFFu), 2)); }
    // 00cce0  je 0xcd36
    X86_AT(c, 0xcce0u);
    if (x86_cc(c, 4)) { goto L_cd36; }
    X86_TICK(c, 12);
    // 00cce2  cmp byte ptr gs:[ebp + 0x494], 0
    X86_AT(c, 0xcce2u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x494u))), 0x0u, 0, 1);
    // 00ccea  je 0xcd09
    X86_AT(c, 0xcceau);
    if (x86_cc(c, 4)) { goto L_cd09; }
    X86_TICK(c, 15);
    // 00ccec  push edx
    X86_AT(c, 0xccecu);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 00cced  push eax
    X86_AT(c, 0xccedu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 00ccee  add dx, word ptr gs:[ebp + 0x408]
    X86_AT(c, 0xcceeu);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x408u))), 0, 2)); }
    // 00ccf6  jo 0xcd07
    X86_AT(c, 0xccf6u);
    if (x86_cc(c, 0)) { goto L_cd07; }
    X86_TICK(c, 11);
    // 00ccf8  add ax, word ptr gs:[ebp + 0x40a]
    X86_AT(c, 0xccf8u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x40Au))), 0, 2)); }
    // 00cd00  jo 0xcd07
    X86_AT(c, 0xcd00u);
    if (x86_cc(c, 0)) { goto L_cd07; }
    X86_TICK(c, 7);
    // 00cd02  call 0x5db0
    X86_AT(c, 0xcd02u);
    push32(c, 0xcd07u); f_00005db0(c); X86_RET(c, 0xcd07u);
L_cd07:
    X86_TICK(c, 8);
    // 00cd07  pop eax
    X86_AT(c, 0xcd07u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 00cd08  pop edx
    X86_AT(c, 0xcd08u);
    { uint32_t v = pop32(c); c.r[2] = v; }
L_cd09:
    X86_TICK(c, 12);
    // 00cd09  cmp byte ptr gs:[ebp + 0x496], 0
    X86_AT(c, 0xcd09u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x496u))), 0x0u, 0, 1);
    // 00cd11  je 0xcd36
    X86_AT(c, 0xcd11u);
    if (x86_cc(c, 4)) { goto L_cd36; }
    X86_TICK(c, 19);
    // 00cd13  push edx
    X86_AT(c, 0xcd13u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 00cd14  push eax
    X86_AT(c, 0xcd14u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 00cd15  neg dx
    X86_AT(c, 0xcd15u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_neg(c, v, 2)); }
    // 00cd18  neg ax
    X86_AT(c, 0xcd18u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_neg(c, v, 2)); }
    // 00cd1b  add dx, word ptr gs:[ebp + 0x408]
    X86_AT(c, 0xcd1bu);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x408u))), 0, 2)); }
    // 00cd23  jo 0xcd34
    X86_AT(c, 0xcd23u);
    if (x86_cc(c, 0)) { goto L_cd34; }
    X86_TICK(c, 11);
    // 00cd25  add ax, word ptr gs:[ebp + 0x40a]
    X86_AT(c, 0xcd25u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x40Au))), 0, 2)); }
    // 00cd2d  jo 0xcd34
    X86_AT(c, 0xcd2du);
    if (x86_cc(c, 0)) { goto L_cd34; }
    X86_TICK(c, 7);
    // 00cd2f  call 0x5e58
    X86_AT(c, 0xcd2fu);
    push32(c, 0xcd34u); f_00005e58(c); X86_RET(c, 0xcd34u);
L_cd34:
    X86_TICK(c, 8);
    // 00cd34  pop eax
    X86_AT(c, 0xcd34u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 00cd35  pop edx
    X86_AT(c, 0xcd35u);
    { uint32_t v = pop32(c); c.r[2] = v; }
L_cd36:
    X86_TICK(c, 7);
    // 00cd36  or ax, ax
    X86_AT(c, 0xcd36u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_logic(c, v | (c.r[0] & 0xFFFFu), 2)); }
    // 00cd39  je 0xcd8f
    X86_AT(c, 0xcd39u);
    if (x86_cc(c, 4)) { goto L_cd8f; }
    X86_TICK(c, 12);
    // 00cd3b  cmp byte ptr gs:[ebp + 0x495], 0
    X86_AT(c, 0xcd3bu);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x495u))), 0x0u, 0, 1);
    // 00cd43  je 0xcd65
    X86_AT(c, 0xcd43u);
    if (x86_cc(c, 4)) { goto L_cd65; }
    X86_TICK(c, 17);
    // 00cd45  push edx
    X86_AT(c, 0xcd45u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 00cd46  push eax
    X86_AT(c, 0xcd46u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 00cd47  neg dx
    X86_AT(c, 0xcd47u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_neg(c, v, 2)); }
    // 00cd4a  add dx, word ptr gs:[ebp + 0x408]
    X86_AT(c, 0xcd4au);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x408u))), 0, 2)); }
    // 00cd52  jo 0xcd63
    X86_AT(c, 0xcd52u);
    if (x86_cc(c, 0)) { goto L_cd63; }
    X86_TICK(c, 11);
    // 00cd54  add ax, word ptr gs:[ebp + 0x40a]
    X86_AT(c, 0xcd54u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x40Au))), 0, 2)); }
    // 00cd5c  jo 0xcd63
    X86_AT(c, 0xcd5cu);
    if (x86_cc(c, 0)) { goto L_cd63; }
    X86_TICK(c, 7);
    // 00cd5e  call 0x5e04
    X86_AT(c, 0xcd5eu);
    push32(c, 0xcd63u); f_00005e04(c); X86_RET(c, 0xcd63u);
L_cd63:
    X86_TICK(c, 8);
    // 00cd63  pop eax
    X86_AT(c, 0xcd63u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 00cd64  pop edx
    X86_AT(c, 0xcd64u);
    { uint32_t v = pop32(c); c.r[2] = v; }
L_cd65:
    X86_TICK(c, 12);
    // 00cd65  cmp byte ptr gs:[ebp + 0x497], 0
    X86_AT(c, 0xcd65u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x497u))), 0x0u, 0, 1);
    // 00cd6d  je 0xcd8f
    X86_AT(c, 0xcd6du);
    if (x86_cc(c, 4)) { goto L_cd8f; }
    X86_TICK(c, 17);
    // 00cd6f  push edx
    X86_AT(c, 0xcd6fu);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 00cd70  push eax
    X86_AT(c, 0xcd70u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 00cd71  neg ax
    X86_AT(c, 0xcd71u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_neg(c, v, 2)); }
    // 00cd74  add dx, word ptr gs:[ebp + 0x408]
    X86_AT(c, 0xcd74u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x408u))), 0, 2)); }
    // 00cd7c  jo 0xcd8d
    X86_AT(c, 0xcd7cu);
    if (x86_cc(c, 0)) { goto L_cd8d; }
    X86_TICK(c, 11);
    // 00cd7e  add ax, word ptr gs:[ebp + 0x40a]
    X86_AT(c, 0xcd7eu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x40Au))), 0, 2)); }
    // 00cd86  jo 0xcd8d
    X86_AT(c, 0xcd86u);
    if (x86_cc(c, 0)) { goto L_cd8d; }
    X86_TICK(c, 7);
    // 00cd88  call 0x5eac
    X86_AT(c, 0xcd88u);
    push32(c, 0xcd8du); f_00005eac(c); X86_RET(c, 0xcd8du);
L_cd8d:
    X86_TICK(c, 8);
    // 00cd8d  pop eax
    X86_AT(c, 0xcd8du);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 00cd8e  pop edx
    X86_AT(c, 0xcd8eu);
    { uint32_t v = pop32(c); c.r[2] = v; }
L_cd8f:
    X86_TICK(c, 4);
    // 00cd8f  pop ebx
    X86_AT(c, 0xcd8fu);
    { uint32_t v = pop32(c); c.r[3] = v; }
L_cd90:
    X86_TICK(c, 27);
    // 00cd90  push eax
    X86_AT(c, 0xcd90u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 00cd91  mov eax, dword ptr gs:[ebp + 0x494]
    X86_AT(c, 0xcd91u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x494u)));
    // 00cd98  mov dword ptr gs:[ebp + 0x498], eax
    X86_AT(c, 0xcd98u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x498u)), c.r[0]);
    // 00cd9f  and eax, 0x1010101
    X86_AT(c, 0xcd9fu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x1010101u, 4); }
    // 00cda4  mov dword ptr gs:[ebp + 0x494], eax
    X86_AT(c, 0xcda4u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x494u)), c.r[0]);
    // 00cdab  pop eax
    X86_AT(c, 0xcdabu);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 00cdac  mov word ptr gs:[ebp + 0x470], dx
    X86_AT(c, 0xcdacu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x470u)), (c.r[2] & 0xFFFFu));
    // 00cdb4  mov word ptr gs:[ebp + 0x47a], ax
    X86_AT(c, 0xcdb4u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x47Au)), (c.r[0] & 0xFFFFu));
    // 00cdbc  call 0xd794
    X86_AT(c, 0xcdbcu);
    push32(c, 0xcdc1u); f_0000d794(c); X86_RET(c, 0xcdc1u);
    X86_TICK(c, 12);
    // 00cdc1  cmp byte ptr gs:[ebp + 0x41f], 1
    X86_AT(c, 0xcdc1u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x41Fu))), 0x1u, 0, 1);
    // 00cdc9  jne 0xd001
    X86_AT(c, 0xcdc9u);
    if (x86_cc(c, 5)) { goto L_d001; }
    X86_TICK(c, 12);
    // 00cdcf  cmp word ptr gs:[ebp + 0x47a], ax
    X86_AT(c, 0xcdcfu);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x47Au))), (c.r[0] & 0xFFFFu), 0, 2);
    // 00cdd7  jae 0xd001
    X86_AT(c, 0xcdd7u);
    if (x86_cc(c, 3)) { goto L_d001; }
    X86_TICK(c, 27);
    // 00cddd  push edx
    X86_AT(c, 0xcdddu);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 00cdde  push eax
    X86_AT(c, 0xcddeu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 00cddf  mov esi, dword ptr gs:[ebp + 0x4c0]
    X86_AT(c, 0xcddfu);
    c.r[6] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x4C0u)));
    // 00cde6  shld edi, esi, 0x10
    X86_AT(c, 0xcde6u);
    { uint32_t v = c.r[7]; bool w; uint32_t r = x86_double(c, true, v, c.r[6], 0x10u, 4, w); if (w) c.r[7] = r; }
    // 00cdea  push esi
    X86_AT(c, 0xcdeau);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 00cdeb  push edi
    X86_AT(c, 0xcdebu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 00cdec  cmp byte ptr gs:[ebp + 0x41c], 1
    X86_AT(c, 0xcdecu);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x41Cu))), 0x1u, 0, 1);
    // 00cdf4  jne 0xce13
    X86_AT(c, 0xcdf4u);
    if (x86_cc(c, 5)) { goto L_ce13; }
    X86_TICK(c, 15);
    // 00cdf6  mov ax, word ptr gs:[ebp + 0x47a]
    X86_AT(c, 0xcdf6u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x47Au))));
    // 00cdfe  mov cx, word ptr gs:[ebp + 0x40a]
    X86_AT(c, 0xcdfeu);
    s16(c, 1, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x40Au))));
    // 00ce06  test bh, 2
    X86_AT(c, 0xce06u);
    (void)x86_logic(c, g8(c, 7) & 0x2u, 1);
    // 00ce09  je 0xce10
    X86_AT(c, 0xce09u);
    if (x86_cc(c, 4)) { goto L_ce10; }
    X86_TICK(c, 9);
    // 00ce0b  sub cx, ax
    X86_AT(c, 0xce0bu);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_sub(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 00ce0e  jmp 0xce13
    X86_AT(c, 0xce0eu);
    goto L_ce13;
L_ce10:
    X86_TICK(c, 2);
    // 00ce10  add cx, ax
    X86_AT(c, 0xce10u);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
L_ce13:
    X86_TICK(c, 5);
    // 00ce13  jo 0xce88
    X86_AT(c, 0xce13u);
    if (x86_cc(c, 0)) { goto L_ce88; }
    X86_TICK(c, 18);
    // 00ce15  mov ax, word ptr gs:[ebp + 0x408]
    X86_AT(c, 0xce15u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x408u))));
    // 00ce1d  mov dx, ax
    X86_AT(c, 0xce1du);
    s16(c, 2, (c.r[0] & 0xFFFFu));
    // 00ce20  cmp byte ptr gs:[ebp + 0x41c], 0
    X86_AT(c, 0xce20u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x41Cu))), 0x0u, 0, 1);
    // 00ce28  jne 0xce3c
    X86_AT(c, 0xce28u);
    if (x86_cc(c, 5)) { goto L_ce3c; }
    X86_TICK(c, 12);
    // 00ce2a  cmp byte ptr gs:[ebp + 0x478], 0
    X86_AT(c, 0xce2au);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x478u))), 0x0u, 0, 1);
    // 00ce32  je 0xce3c
    X86_AT(c, 0xce32u);
    if (x86_cc(c, 4)) { goto L_ce3c; }
    X86_TICK(c, 4);
    // 00ce34  mov di, word ptr gs:[ebp + 0x474]
    X86_AT(c, 0xce34u);
    s16(c, 7, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x474u))));
L_ce3c:
    X86_TICK(c, 7);
    // 00ce3c  cmp bh, 1
    X86_AT(c, 0xce3cu);
    (void)x86_sub(c, g8(c, 7), 0x1u, 0, 1);
    // 00ce3f  je 0xce46
    X86_AT(c, 0xce3fu);
    if (x86_cc(c, 4)) { goto L_ce46; }
    X86_TICK(c, 7);
    // 00ce41  cmp bh, 2
    X86_AT(c, 0xce41u);
    (void)x86_sub(c, g8(c, 7), 0x2u, 0, 1);
    // 00ce44  jne 0xce4c
    X86_AT(c, 0xce44u);
    if (x86_cc(c, 5)) { goto L_ce4c; }
L_ce46:
    X86_TICK(c, 4);
    // 00ce46  neg si
    X86_AT(c, 0xce46u);
    { uint32_t v = (c.r[6] & 0xFFFFu); s16(c, 6, x86_neg(c, v, 2)); }
    // 00ce49  neg di
    X86_AT(c, 0xce49u);
    { uint32_t v = (c.r[7] & 0xFFFFu); s16(c, 7, x86_neg(c, v, 2)); }
L_ce4c:
    X86_TICK(c, 7);
    // 00ce4c  cmp si, di
    X86_AT(c, 0xce4cu);
    (void)x86_sub(c, (c.r[6] & 0xFFFFu), (c.r[7] & 0xFFFFu), 0, 2);
    // 00ce4f  jle 0xce54
    X86_AT(c, 0xce4fu);
    if (x86_cc(c, 14)) { goto L_ce54; }
    X86_TICK(c, 3);
    // 00ce51  xchg di, si
    X86_AT(c, 0xce51u);
    { uint32_t t = (c.r[7] & 0xFFFFu); s16(c, 7, (c.r[6] & 0xFFFFu)); s16(c, 6, t); }
L_ce54:
    X86_TICK(c, 11);
    // 00ce54  mov word ptr gs:[ebp + 0x4b0], si
    X86_AT(c, 0xce54u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x4B0u)), (c.r[6] & 0xFFFFu));
    // 00ce5c  mov word ptr gs:[ebp + 0x4b2], di
    X86_AT(c, 0xce5cu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x4B2u)), (c.r[7] & 0xFFFFu));
    // 00ce64  add ax, si
    X86_AT(c, 0xce64u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, (c.r[6] & 0xFFFFu), 0, 2)); }
    // 00ce67  jno 0xce75
    X86_AT(c, 0xce67u);
    if (x86_cc(c, 1)) { goto L_ce75; }
    X86_TICK(c, 9);
    // 00ce69  mov ax, 0x7fff
    X86_AT(c, 0xce69u);
    s16(c, 0, 0x7FFFu);
    // 00ce6d  test si, si
    X86_AT(c, 0xce6du);
    (void)x86_logic(c, (c.r[6] & 0xFFFFu) & (c.r[6] & 0xFFFFu), 2);
    // 00ce70  jge 0xce75
    X86_AT(c, 0xce70u);
    if (x86_cc(c, 13)) { goto L_ce75; }
    X86_TICK(c, 2);
    // 00ce72  neg ax
    X86_AT(c, 0xce72u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_neg(c, v, 2)); }
L_ce75:
    X86_TICK(c, 7);
    // 00ce75  add dx, di
    X86_AT(c, 0xce75u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, (c.r[7] & 0xFFFFu), 0, 2)); }
    // 00ce78  jno 0xce90
    X86_AT(c, 0xce78u);
    if (x86_cc(c, 1)) { goto L_ce90; }
    X86_TICK(c, 9);
    // 00ce7a  mov dx, 0x7fff
    X86_AT(c, 0xce7au);
    s16(c, 2, 0x7FFFu);
    // 00ce7e  test di, di
    X86_AT(c, 0xce7eu);
    (void)x86_logic(c, (c.r[7] & 0xFFFFu) & (c.r[7] & 0xFFFFu), 2);
    // 00ce81  jge 0xce90
    X86_AT(c, 0xce81u);
    if (x86_cc(c, 13)) { goto L_ce90; }
    X86_TICK(c, 9);
    // 00ce83  neg dx
    X86_AT(c, 0xce83u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_neg(c, v, 2)); }
    // 00ce86  jmp 0xce90
    X86_AT(c, 0xce86u);
    goto L_ce90;
L_ce88:
    X86_TICK(c, 2);
    // 00ce88  mov byte ptr gs:[ebp + 0x4b8], 1
    X86_AT(c, 0xce88u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x4B8u)), 0x1u);
L_ce90:
    X86_TICK(c, 12);
    // 00ce90  cmp byte ptr gs:[ebp + 0x41c], 1
    X86_AT(c, 0xce90u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x41Cu))), 0x1u, 0, 1);
    // 00ce98  jne 0xcee5
    X86_AT(c, 0xce98u);
    if (x86_cc(c, 5)) { goto L_cee5; }
    X86_TICK(c, 12);
    // 00ce9a  cmp byte ptr gs:[ebp + 0x4b8], 0
    X86_AT(c, 0xce9au);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x4B8u))), 0x0u, 0, 1);
    // 00cea2  jne 0xcee5
    X86_AT(c, 0xcea2u);
    if (x86_cc(c, 5)) { goto L_cee5; }
    X86_TICK(c, 22);
    // 00cea4  push ebx
    X86_AT(c, 0xcea4u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 00cea5  mov bx, dx
    X86_AT(c, 0xcea5u);
    s16(c, 3, (c.r[2] & 0xFFFFu));
    // 00cea8  sub bx, ax
    X86_AT(c, 0xcea8u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_sub(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 00ceab  mov word ptr gs:[ebp + 0x434], bx
    X86_AT(c, 0xceabu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x434u)), (c.r[3] & 0xFFFFu));
    // 00ceb3  mov bx, 1
    X86_AT(c, 0xceb3u);
    s16(c, 3, 0x1u);
    // 00ceb7  cmp byte ptr gs:[ebp + 0x428], 1
    X86_AT(c, 0xceb7u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x428u))), 0x1u, 0, 1);
    // 00cebf  jne 0xcec6
    X86_AT(c, 0xcebfu);
    if (x86_cc(c, 5)) { goto L_cec6; }
    X86_TICK(c, 5);
    // 00cec1  xchg dx, ax
    X86_AT(c, 0xcec1u);
    { uint32_t t = (c.r[2] & 0xFFFFu); s16(c, 2, (c.r[0] & 0xFFFFu)); s16(c, 0, t); }
    // 00cec3  neg bx
    X86_AT(c, 0xcec3u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_neg(c, v, 2)); }
L_cec6:
    X86_TICK(c, 4);
    // 00cec6  mov dx, ax
    X86_AT(c, 0xcec6u);
    s16(c, 2, (c.r[0] & 0xFFFFu));
    // 00cec9  mov ax, cx
    X86_AT(c, 0xcec9u);
    s16(c, 0, (c.r[1] & 0xFFFFu));
L_cecc:
    X86_TICK(c, 13);
    // 00cecc  push eax
    X86_AT(c, 0xceccu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 00cecd  push ebx
    X86_AT(c, 0xcecdu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 00cece  push edx
    X86_AT(c, 0xceceu);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 00cecf  call 0x5f00
    X86_AT(c, 0xcecfu);
    push32(c, 0xced4u); f_00005f00(c); X86_RET(c, 0xced4u);
    X86_TICK(c, 25);
    // 00ced4  pop edx
    X86_AT(c, 0xced4u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 00ced5  pop ebx
    X86_AT(c, 0xced5u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 00ced6  pop eax
    X86_AT(c, 0xced6u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 00ced7  add dx, bx
    X86_AT(c, 0xced7u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
    // 00ceda  dec word ptr gs:[ebp + 0x434]
    X86_AT(c, 0xcedau);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x434u)); uint32_t v = rd16(ea); wr16(ea, x86_dec(c, v, 2)); }
    // 00cee2  jns 0xcecc
    X86_AT(c, 0xcee2u);
    if (x86_cc(c, 9)) { X86_POLL(c, 0xceccu); goto L_cecc; }
    X86_TICK(c, 4);
    // 00cee4  pop ebx
    X86_AT(c, 0xcee4u);
    { uint32_t v = pop32(c); c.r[3] = v; }
L_cee5:
    X86_TICK(c, 20);
    // 00cee5  pop edi
    X86_AT(c, 0xcee5u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 00cee6  pop esi
    X86_AT(c, 0xcee6u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 00cee7  cmp byte ptr gs:[ebp + 0x4bb], 0
    X86_AT(c, 0xcee7u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x4BBu))), 0x0u, 0, 1);
    // 00ceef  jne 0xcfff
    X86_AT(c, 0xceefu);
    if (x86_cc(c, 5)) { goto L_cfff; }
    X86_TICK(c, 23);
    // 00cef5  mov eax, dword ptr gs:[ebp + 0x4c4]
    X86_AT(c, 0xcef5u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x4C4u)));
    // 00cefc  shld edx, eax, 0x10
    X86_AT(c, 0xcefcu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_double(c, true, v, c.r[0], 0x10u, 4, w); if (w) c.r[2] = r; }
    // 00cf00  mov si, ax
    X86_AT(c, 0xcf00u);
    s16(c, 6, (c.r[0] & 0xFFFFu));
    // 00cf03  mov di, dx
    X86_AT(c, 0xcf03u);
    s16(c, 7, (c.r[2] & 0xFFFFu));
    // 00cf06  cmp byte ptr gs:[ebp + 0x41c], 1
    X86_AT(c, 0xcf06u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x41Cu))), 0x1u, 0, 1);
    // 00cf0e  jne 0xcf2d
    X86_AT(c, 0xcf0eu);
    if (x86_cc(c, 5)) { goto L_cf2d; }
    X86_TICK(c, 15);
    // 00cf10  mov ax, word ptr gs:[ebp + 0x47a]
    X86_AT(c, 0xcf10u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x47Au))));
    // 00cf18  mov cx, word ptr gs:[ebp + 0x40a]
    X86_AT(c, 0xcf18u);
    s16(c, 1, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x40Au))));
    // 00cf20  test bl, 2
    X86_AT(c, 0xcf20u);
    (void)x86_logic(c, g8(c, 3) & 0x2u, 1);
    // 00cf23  je 0xcf2a
    X86_AT(c, 0xcf23u);
    if (x86_cc(c, 4)) { goto L_cf2a; }
    X86_TICK(c, 9);
    // 00cf25  sub cx, ax
    X86_AT(c, 0xcf25u);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_sub(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 00cf28  jmp 0xcf2d
    X86_AT(c, 0xcf28u);
    goto L_cf2d;
L_cf2a:
    X86_TICK(c, 2);
    // 00cf2a  add cx, ax
    X86_AT(c, 0xcf2au);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
L_cf2d:
    X86_TICK(c, 5);
    // 00cf2d  jo 0xcfa2
    X86_AT(c, 0xcf2du);
    if (x86_cc(c, 0)) { goto L_cfa2; }
    X86_TICK(c, 18);
    // 00cf2f  mov ax, word ptr gs:[ebp + 0x408]
    X86_AT(c, 0xcf2fu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x408u))));
    // 00cf37  mov dx, ax
    X86_AT(c, 0xcf37u);
    s16(c, 2, (c.r[0] & 0xFFFFu));
    // 00cf3a  cmp byte ptr gs:[ebp + 0x41c], 0
    X86_AT(c, 0xcf3au);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x41Cu))), 0x0u, 0, 1);
    // 00cf42  jne 0xcf56
    X86_AT(c, 0xcf42u);
    if (x86_cc(c, 5)) { goto L_cf56; }
    X86_TICK(c, 12);
    // 00cf44  cmp byte ptr gs:[ebp + 0x479], 0
    X86_AT(c, 0xcf44u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x479u))), 0x0u, 0, 1);
    // 00cf4c  je 0xcf56
    X86_AT(c, 0xcf4cu);
    if (x86_cc(c, 4)) { goto L_cf56; }
    X86_TICK(c, 4);
    // 00cf4e  mov di, word ptr gs:[ebp + 0x476]
    X86_AT(c, 0xcf4eu);
    s16(c, 7, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x476u))));
L_cf56:
    X86_TICK(c, 7);
    // 00cf56  cmp bl, 1
    X86_AT(c, 0xcf56u);
    (void)x86_sub(c, g8(c, 3), 0x1u, 0, 1);
    // 00cf59  je 0xcf60
    X86_AT(c, 0xcf59u);
    if (x86_cc(c, 4)) { goto L_cf60; }
    X86_TICK(c, 7);
    // 00cf5b  cmp bl, 2
    X86_AT(c, 0xcf5bu);
    (void)x86_sub(c, g8(c, 3), 0x2u, 0, 1);
    // 00cf5e  jne 0xcf66
    X86_AT(c, 0xcf5eu);
    if (x86_cc(c, 5)) { goto L_cf66; }
L_cf60:
    X86_TICK(c, 4);
    // 00cf60  neg si
    X86_AT(c, 0xcf60u);
    { uint32_t v = (c.r[6] & 0xFFFFu); s16(c, 6, x86_neg(c, v, 2)); }
    // 00cf63  neg di
    X86_AT(c, 0xcf63u);
    { uint32_t v = (c.r[7] & 0xFFFFu); s16(c, 7, x86_neg(c, v, 2)); }
L_cf66:
    X86_TICK(c, 7);
    // 00cf66  cmp si, di
    X86_AT(c, 0xcf66u);
    (void)x86_sub(c, (c.r[6] & 0xFFFFu), (c.r[7] & 0xFFFFu), 0, 2);
    // 00cf69  jle 0xcf6e
    X86_AT(c, 0xcf69u);
    if (x86_cc(c, 14)) { goto L_cf6e; }
    X86_TICK(c, 3);
    // 00cf6b  xchg di, si
    X86_AT(c, 0xcf6bu);
    { uint32_t t = (c.r[7] & 0xFFFFu); s16(c, 7, (c.r[6] & 0xFFFFu)); s16(c, 6, t); }
L_cf6e:
    X86_TICK(c, 11);
    // 00cf6e  mov word ptr gs:[ebp + 0x4b4], si
    X86_AT(c, 0xcf6eu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x4B4u)), (c.r[6] & 0xFFFFu));
    // 00cf76  mov word ptr gs:[ebp + 0x4b6], di
    X86_AT(c, 0xcf76u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x4B6u)), (c.r[7] & 0xFFFFu));
    // 00cf7e  add ax, si
    X86_AT(c, 0xcf7eu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, (c.r[6] & 0xFFFFu), 0, 2)); }
    // 00cf81  jno 0xcf8f
    X86_AT(c, 0xcf81u);
    if (x86_cc(c, 1)) { goto L_cf8f; }
    X86_TICK(c, 9);
    // 00cf83  mov ax, 0x7fff
    X86_AT(c, 0xcf83u);
    s16(c, 0, 0x7FFFu);
    // 00cf87  test si, si
    X86_AT(c, 0xcf87u);
    (void)x86_logic(c, (c.r[6] & 0xFFFFu) & (c.r[6] & 0xFFFFu), 2);
    // 00cf8a  jge 0xcf8f
    X86_AT(c, 0xcf8au);
    if (x86_cc(c, 13)) { goto L_cf8f; }
    X86_TICK(c, 2);
    // 00cf8c  neg ax
    X86_AT(c, 0xcf8cu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_neg(c, v, 2)); }
L_cf8f:
    X86_TICK(c, 7);
    // 00cf8f  add dx, di
    X86_AT(c, 0xcf8fu);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, (c.r[7] & 0xFFFFu), 0, 2)); }
    // 00cf92  jno 0xcfaa
    X86_AT(c, 0xcf92u);
    if (x86_cc(c, 1)) { goto L_cfaa; }
    X86_TICK(c, 9);
    // 00cf94  mov dx, 0x7fff
    X86_AT(c, 0xcf94u);
    s16(c, 2, 0x7FFFu);
    // 00cf98  test di, di
    X86_AT(c, 0xcf98u);
    (void)x86_logic(c, (c.r[7] & 0xFFFFu) & (c.r[7] & 0xFFFFu), 2);
    // 00cf9b  jge 0xcfaa
    X86_AT(c, 0xcf9bu);
    if (x86_cc(c, 13)) { goto L_cfaa; }
    X86_TICK(c, 9);
    // 00cf9d  neg dx
    X86_AT(c, 0xcf9du);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_neg(c, v, 2)); }
    // 00cfa0  jmp 0xcfaa
    X86_AT(c, 0xcfa0u);
    goto L_cfaa;
L_cfa2:
    X86_TICK(c, 2);
    // 00cfa2  mov byte ptr gs:[ebp + 0x4b9], 1
    X86_AT(c, 0xcfa2u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x4B9u)), 0x1u);
L_cfaa:
    X86_TICK(c, 12);
    // 00cfaa  cmp byte ptr gs:[ebp + 0x41c], 1
    X86_AT(c, 0xcfaau);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x41Cu))), 0x1u, 0, 1);
    // 00cfb2  jne 0xcfff
    X86_AT(c, 0xcfb2u);
    if (x86_cc(c, 5)) { goto L_cfff; }
    X86_TICK(c, 12);
    // 00cfb4  cmp byte ptr gs:[ebp + 0x4b9], 0
    X86_AT(c, 0xcfb4u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x4B9u))), 0x0u, 0, 1);
    // 00cfbc  jne 0xcfff
    X86_AT(c, 0xcfbcu);
    if (x86_cc(c, 5)) { goto L_cfff; }
    X86_TICK(c, 22);
    // 00cfbe  push ebx
    X86_AT(c, 0xcfbeu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 00cfbf  mov bx, dx
    X86_AT(c, 0xcfbfu);
    s16(c, 3, (c.r[2] & 0xFFFFu));
    // 00cfc2  sub bx, ax
    X86_AT(c, 0xcfc2u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_sub(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 00cfc5  mov word ptr gs:[ebp + 0x434], bx
    X86_AT(c, 0xcfc5u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x434u)), (c.r[3] & 0xFFFFu));
    // 00cfcd  mov bx, 1
    X86_AT(c, 0xcfcdu);
    s16(c, 3, 0x1u);
    // 00cfd1  cmp byte ptr gs:[ebp + 0x429], 1
    X86_AT(c, 0xcfd1u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x429u))), 0x1u, 0, 1);
    // 00cfd9  jne 0xcfe0
    X86_AT(c, 0xcfd9u);
    if (x86_cc(c, 5)) { goto L_cfe0; }
    X86_TICK(c, 5);
    // 00cfdb  xchg dx, ax
    X86_AT(c, 0xcfdbu);
    { uint32_t t = (c.r[2] & 0xFFFFu); s16(c, 2, (c.r[0] & 0xFFFFu)); s16(c, 0, t); }
    // 00cfdd  neg bx
    X86_AT(c, 0xcfddu);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_neg(c, v, 2)); }
L_cfe0:
    X86_TICK(c, 4);
    // 00cfe0  mov dx, ax
    X86_AT(c, 0xcfe0u);
    s16(c, 2, (c.r[0] & 0xFFFFu));
    // 00cfe3  mov ax, cx
    X86_AT(c, 0xcfe3u);
    s16(c, 0, (c.r[1] & 0xFFFFu));
L_cfe6:
    X86_TICK(c, 13);
    // 00cfe6  push eax
    X86_AT(c, 0xcfe6u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 00cfe7  push ebx
    X86_AT(c, 0xcfe7u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 00cfe8  push edx
    X86_AT(c, 0xcfe8u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 00cfe9  call 0x5f54
    X86_AT(c, 0xcfe9u);
    push32(c, 0xcfeeu); f_00005f54(c); X86_RET(c, 0xcfeeu);
    X86_TICK(c, 25);
    // 00cfee  pop edx
    X86_AT(c, 0xcfeeu);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 00cfef  pop ebx
    X86_AT(c, 0xcfefu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 00cff0  pop eax
    X86_AT(c, 0xcff0u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 00cff1  add dx, bx
    X86_AT(c, 0xcff1u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
    // 00cff4  dec word ptr gs:[ebp + 0x434]
    X86_AT(c, 0xcff4u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x434u)); uint32_t v = rd16(ea); wr16(ea, x86_dec(c, v, 2)); }
    // 00cffc  jns 0xcfe6
    X86_AT(c, 0xcffcu);
    if (x86_cc(c, 9)) { X86_POLL(c, 0xcfe6u); goto L_cfe6; }
    X86_TICK(c, 4);
    // 00cffe  pop ebx
    X86_AT(c, 0xcffeu);
    { uint32_t v = pop32(c); c.r[3] = v; }
L_cfff:
    X86_TICK(c, 8);
    // 00cfff  pop eax
    X86_AT(c, 0xcfffu);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 00d000  pop edx
    X86_AT(c, 0xd000u);
    { uint32_t v = pop32(c); c.r[2] = v; }
L_d001:
    X86_TICK(c, 12);
    // 00d001  cmp byte ptr gs:[ebp + 0x41f], 1
    X86_AT(c, 0xd001u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x41Fu))), 0x1u, 0, 1);
    // 00d009  jne 0xd03b
    X86_AT(c, 0xd009u);
    if (x86_cc(c, 5)) { goto L_d03b; }
    X86_TICK(c, 26);
    // 00d00b  push eax
    X86_AT(c, 0xd00bu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 00d00c  mov al, byte ptr gs:[ebp + 0x4b8]
    X86_AT(c, 0xd00cu);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x4B8u))));
    // 00d013  mov byte ptr gs:[ebp + 0x4ca], al
    X86_AT(c, 0xd013u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x4CAu)), g8(c, 0));
    // 00d01a  and al, 1
    X86_AT(c, 0xd01au);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & 0x1u, 1)); }
    // 00d01c  mov byte ptr gs:[ebp + 0x4b8], al
    X86_AT(c, 0xd01cu);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x4B8u)), g8(c, 0));
    // 00d023  mov al, byte ptr gs:[ebp + 0x4b9]
    X86_AT(c, 0xd023u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x4B9u))));
    // 00d02a  mov byte ptr gs:[ebp + 0x4cb], al
    X86_AT(c, 0xd02au);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x4CBu)), g8(c, 0));
    // 00d031  and al, 1
    X86_AT(c, 0xd031u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & 0x1u, 1)); }
    // 00d033  mov byte ptr gs:[ebp + 0x4b9], al
    X86_AT(c, 0xd033u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x4B9u)), g8(c, 0));
    // 00d03a  pop eax
    X86_AT(c, 0xd03au);
    { uint32_t v = pop32(c); c.r[0] = v; }
L_d03b:
    X86_TICK(c, 12);
    // 00d03b  cmp byte ptr gs:[ebp + 0x41c], 0
    X86_AT(c, 0xd03bu);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x41Cu))), 0x0u, 0, 1);
    // 00d043  jne 0xd0a1
    X86_AT(c, 0xd043u);
    if (x86_cc(c, 5)) { goto L_d0a1; }
    X86_TICK(c, 12);
    // 00d045  cmp word ptr gs:[ebp + 0x47a], ax
    X86_AT(c, 0xd045u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x47Au))), (c.r[0] & 0xFFFFu), 0, 2);
    // 00d04d  jae 0xd0a1
    X86_AT(c, 0xd04du);
    if (x86_cc(c, 3)) { goto L_d0a1; }
    X86_TICK(c, 26);
    // 00d04f  push ebx
    X86_AT(c, 0xd04fu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 00d050  push edx
    X86_AT(c, 0xd050u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 00d051  push eax
    X86_AT(c, 0xd051u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 00d052  mov esi, dword ptr gs:[ebp + 0x48c]
    X86_AT(c, 0xd052u);
    c.r[6] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x48Cu)));
    // 00d059  mov edi, dword ptr gs:[ebp + 0x490]
    X86_AT(c, 0xd059u);
    c.r[7] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x490u)));
    // 00d060  cmp word ptr gs:[ebp + 0x47a], 0
    X86_AT(c, 0xd060u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x47Au))), 0x0u, 0, 2);
    // 00d069  jne 0xd072
    X86_AT(c, 0xd069u);
    if (x86_cc(c, 5)) { goto L_d072; }
    X86_TICK(c, 7);
    // 00d06b  call 0xd0ac
    X86_AT(c, 0xd06bu);
    push32(c, 0xd070u); f_0000d0ac(c); X86_RET(c, 0xd070u);
    X86_TICK(c, 7);
    // 00d070  jmp 0xd07c
    X86_AT(c, 0xd070u);
    goto L_d07c;
L_d072:
    X86_TICK(c, 7);
    // 00d072  call 0xd134
    X86_AT(c, 0xd072u);
    push32(c, 0xd077u); f_0000d134(c); X86_RET(c, 0xd077u);
    X86_TICK(c, 7);
    // 00d077  call 0xd31c
    X86_AT(c, 0xd077u);
    push32(c, 0xd07cu); f_0000d31c(c); X86_RET(c, 0xd07cu);
L_d07c:
    X86_TICK(c, 20);
    // 00d07c  pop eax
    X86_AT(c, 0xd07cu);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 00d07d  pop edx
    X86_AT(c, 0xd07du);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 00d07e  pop ebx
    X86_AT(c, 0xd07eu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 00d07f  mov word ptr gs:[ebp + 0x472], dx
    X86_AT(c, 0xd07fu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x472u)), (c.r[2] & 0xFFFFu));
    // 00d087  mov word ptr gs:[ebp + 0x474], dx
    X86_AT(c, 0xd087u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x474u)), (c.r[2] & 0xFFFFu));
    // 00d08f  mov word ptr gs:[ebp + 0x476], dx
    X86_AT(c, 0xd08fu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x476u)), (c.r[2] & 0xFFFFu));
    // 00d097  mov word ptr gs:[ebp + 0x478], 0
    X86_AT(c, 0xd097u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x478u)), 0x0u);
L_d0a1:
    X86_TICK(c, 7);
    // 00d0a1  jmp 0xc9cf
    X86_AT(c, 0xd0a1u);
    X86_POLL(c, 0xc9cfu); goto L_c9cf;
    x86_fault(c, 0xc81cu, "ran off the end of a function");
}
void f_0000c824(X86Cpu& c) {
    X86_TICK(c, 21);
    // 00c824  shl word ptr gs:[ebp + 0x480], 1
    X86_AT(c, 0xc824u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x480u)); uint32_t v = rd16(ea); bool w; uint32_t r = x86_shift(c, 4, v, 0x1u, 2, w); if (w) wr16(ea, r); }
    // 00c82c  shl word ptr gs:[ebp + 0x482], 1
    X86_AT(c, 0xc82cu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x482u)); uint32_t v = rd16(ea); bool w; uint32_t r = x86_shift(c, 4, v, 0x1u, 2, w); if (w) wr16(ea, r); }
    // 00c834  cmp dx, ax
    X86_AT(c, 0xc834u);
    (void)x86_sub(c, (c.r[2] & 0xFFFFu), (c.r[0] & 0xFFFFu), 0, 2);
    // 00c837  jbe 0xc84b
    X86_AT(c, 0xc837u);
    if (x86_cc(c, 6)) { goto L_c84b; }
    X86_TICK(c, 11);
    // 00c839  mov word ptr gs:[ebp + 0x47c], dx
    X86_AT(c, 0xc839u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x47Cu)), (c.r[2] & 0xFFFFu));
    // 00c841  mov byte ptr gs:[ebp + 0x4c8], 0
    X86_AT(c, 0xc841u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x4C8u)), 0x0u);
    // 00c849  jmp 0xc85b
    X86_AT(c, 0xc849u);
    goto L_c85b;
L_c84b:
    X86_TICK(c, 4);
    // 00c84b  mov word ptr gs:[ebp + 0x47c], ax
    X86_AT(c, 0xc84bu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x47Cu)), (c.r[0] & 0xFFFFu));
    // 00c853  mov byte ptr gs:[ebp + 0x4c8], 1
    X86_AT(c, 0xc853u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x4C8u)), 0x1u);
L_c85b:
    X86_TICK(c, 25);
    // 00c85b  mov word ptr gs:[ebp + 0x484], cx
    X86_AT(c, 0xc85bu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x484u)), (c.r[1] & 0xFFFFu));
    // 00c863  mov word ptr gs:[ebp + 0x486], bx
    X86_AT(c, 0xc863u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x486u)), (c.r[3] & 0xFFFFu));
    // 00c86b  shl word ptr gs:[ebp + 0x484], 1
    X86_AT(c, 0xc86bu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x484u)); uint32_t v = rd16(ea); bool w; uint32_t r = x86_shift(c, 4, v, 0x1u, 2, w); if (w) wr16(ea, r); }
    // 00c873  shl word ptr gs:[ebp + 0x486], 1
    X86_AT(c, 0xc873u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x486u)); uint32_t v = rd16(ea); bool w; uint32_t r = x86_shift(c, 4, v, 0x1u, 2, w); if (w) wr16(ea, r); }
    // 00c87b  cmp cx, bx
    X86_AT(c, 0xc87bu);
    (void)x86_sub(c, (c.r[1] & 0xFFFFu), (c.r[3] & 0xFFFFu), 0, 2);
    // 00c87e  jbe 0xc892
    X86_AT(c, 0xc87eu);
    if (x86_cc(c, 6)) { goto L_c892; }
    X86_TICK(c, 11);
    // 00c880  mov word ptr gs:[ebp + 0x47e], cx
    X86_AT(c, 0xc880u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x47Eu)), (c.r[1] & 0xFFFFu));
    // 00c888  mov byte ptr gs:[ebp + 0x4c9], 0
    X86_AT(c, 0xc888u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x4C9u)), 0x0u);
    // 00c890  jmp 0xc8a2
    X86_AT(c, 0xc890u);
    goto L_c8a2;
L_c892:
    X86_TICK(c, 4);
    // 00c892  mov word ptr gs:[ebp + 0x47e], bx
    X86_AT(c, 0xc892u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x47Eu)), (c.r[3] & 0xFFFFu));
    // 00c89a  mov byte ptr gs:[ebp + 0x4c9], 1
    X86_AT(c, 0xc89au);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x4C9u)), 0x1u);
L_c8a2:
    X86_TICK(c, 226);
    // 00c8a2  sub eax, eax
    X86_AT(c, 0xc8a2u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 00c8a4  mov word ptr gs:[ebp + 0x43a], ax
    X86_AT(c, 0xc8a4u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x43Au)), (c.r[0] & 0xFFFFu));
    // 00c8ac  mov dword ptr gs:[ebp + 0x444], eax
    X86_AT(c, 0xc8acu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x444u)), c.r[0]);
    // 00c8b3  mov dword ptr gs:[ebp + 0x448], eax
    X86_AT(c, 0xc8b3u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x448u)), c.r[0]);
    // 00c8ba  mov dword ptr gs:[ebp + 0x440], eax
    X86_AT(c, 0xc8bau);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x440u)), c.r[0]);
    // 00c8c1  sub eax, eax
    X86_AT(c, 0xc8c1u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 00c8c3  mov ax, word ptr gs:[ebp + 0x40c]
    X86_AT(c, 0xc8c3u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x40Cu))));
    // 00c8cb  mov word ptr gs:[ebp + 0x438], ax
    X86_AT(c, 0xc8cbu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x438u)), (c.r[0] & 0xFFFFu));
    // 00c8d3  mov ebx, eax
    X86_AT(c, 0xc8d3u);
    c.r[3] = c.r[0];
    // 00c8d5  mul eax
    X86_AT(c, 0xc8d5u);
    x86_mul(c, c.r[0], 4);
    // 00c8d7  mov esi, eax
    X86_AT(c, 0xc8d7u);
    c.r[6] = c.r[0];
    // 00c8d9  add eax, eax
    X86_AT(c, 0xc8d9u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, c.r[0], 0, 4); }
    // 00c8db  mov dword ptr gs:[ebp + 0x458], eax
    X86_AT(c, 0xc8dbu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x458u)), c.r[0]);
    // 00c8e2  add eax, eax
    X86_AT(c, 0xc8e2u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, c.r[0], 0, 4); }
    // 00c8e4  mov dword ptr gs:[ebp + 0x468], eax
    X86_AT(c, 0xc8e4u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x468u)), c.r[0]);
    // 00c8eb  movzx eax, word ptr gs:[ebp + 0x40e]
    X86_AT(c, 0xc8ebu);
    c.r[0] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x40Eu)));
    // 00c8f3  mul eax
    X86_AT(c, 0xc8f3u);
    x86_mul(c, c.r[0], 4);
    // 00c8f5  mov dword ptr gs:[ebp + 0x454], eax
    X86_AT(c, 0xc8f5u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x454u)), c.r[0]);
    // 00c8fc  add eax, eax
    X86_AT(c, 0xc8fcu);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, c.r[0], 0, 4); }
    // 00c8fe  mov dword ptr gs:[ebp + 0x45c], eax
    X86_AT(c, 0xc8feu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x45Cu)), c.r[0]);
    // 00c905  push eax
    X86_AT(c, 0xc905u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 00c906  add eax, eax
    X86_AT(c, 0xc906u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, c.r[0], 0, 4); }
    // 00c908  mov dword ptr gs:[ebp + 0x46c], eax
    X86_AT(c, 0xc908u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x46Cu)), c.r[0]);
    // 00c90f  pop eax
    X86_AT(c, 0xc90fu);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 00c910  mul ebx
    X86_AT(c, 0xc910u);
    x86_mul(c, c.r[3], 4);
    // 00c912  push eax
    X86_AT(c, 0xc912u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 00c913  push edx
    X86_AT(c, 0xc913u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 00c914  add eax, eax
    X86_AT(c, 0xc914u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, c.r[0], 0, 4); }
    // 00c916  adc edx, edx
    X86_AT(c, 0xc916u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[2], c.fl & 1, 4); }
    // 00c918  mov dword ptr gs:[ebp + 0x44c], eax
    X86_AT(c, 0xc918u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x44Cu)), c.r[0]);
    // 00c91f  mov dword ptr gs:[ebp + 0x450], edx
    X86_AT(c, 0xc91fu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x450u)), c.r[2]);
    // 00c926  shr esi, 1
    X86_AT(c, 0xc926u);
    { uint32_t v = c.r[6]; bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 4, w); if (w) c.r[6] = r; }
    // 00c928  add esi, dword ptr gs:[ebp + 0x45c]
    X86_AT(c, 0xc928u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x45Cu))), 0, 4); }
    // 00c92f  not edx
    X86_AT(c, 0xc92fu);
    { uint32_t v = c.r[2]; c.r[2] = ~v & 0xFFFFFFFFu; }
    // 00c931  not eax
    X86_AT(c, 0xc931u);
    { uint32_t v = c.r[0]; c.r[0] = ~v & 0xFFFFFFFFu; }
    // 00c933  add eax, 1
    X86_AT(c, 0xc933u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0x1u, 0, 4); }
    // 00c938  adc edx, 0
    X86_AT(c, 0xc938u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, 0x0u, c.fl & 1, 4); }
    // 00c93b  and edx, 0xffff
    X86_AT(c, 0xc93bu);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & 0xFFFFu, 4); }
    // 00c941  add eax, esi
    X86_AT(c, 0xc941u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, c.r[6], 0, 4); }
    // 00c943  adc edx, 0
    X86_AT(c, 0xc943u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, 0x0u, c.fl & 1, 4); }
    // 00c946  mov dword ptr gs:[ebp + 0x460], eax
    X86_AT(c, 0xc946u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x460u)), c.r[0]);
    // 00c94d  mov dword ptr gs:[ebp + 0x464], edx
    X86_AT(c, 0xc94du);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x464u)), c.r[2]);
    // 00c954  mov eax, dword ptr gs:[ebp + 0x454]
    X86_AT(c, 0xc954u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x454u)));
    // 00c95b  shr eax, 1
    X86_AT(c, 0xc95bu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 4, w); if (w) c.r[0] = r; }
    // 00c95d  add eax, dword ptr gs:[ebp + 0x458]
    X86_AT(c, 0xc95du);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x458u))), 0, 4); }
    // 00c964  mov dword ptr gs:[ebp + 0x43c], eax
    X86_AT(c, 0xc964u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x43Cu)), c.r[0]);
    // 00c96b  pop edx
    X86_AT(c, 0xc96bu);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 00c96c  pop eax
    X86_AT(c, 0xc96cu);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 00c96d  not edx
    X86_AT(c, 0xc96du);
    { uint32_t v = c.r[2]; c.r[2] = ~v & 0xFFFFFFFFu; }
    // 00c96f  not eax
    X86_AT(c, 0xc96fu);
    { uint32_t v = c.r[0]; c.r[0] = ~v & 0xFFFFFFFFu; }
    // 00c971  add eax, 1
    X86_AT(c, 0xc971u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0x1u, 0, 4); }
    // 00c976  adc edx, 0
    X86_AT(c, 0xc976u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, 0x0u, c.fl & 1, 4); }
    // 00c979  and edx, 0xffff
    X86_AT(c, 0xc979u);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & 0xFFFFu, 4); }
    // 00c97f  add dword ptr gs:[ebp + 0x43c], eax
    X86_AT(c, 0xc97fu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x43Cu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 00c986  adc dword ptr gs:[ebp + 0x440], edx
    X86_AT(c, 0xc986u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x440u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[2], c.fl & 1, 4)); }
    // 00c98d  mov dx, word ptr gs:[ebp + 0x438]
    X86_AT(c, 0xc98du);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x438u))));
    // 00c995  mov ax, word ptr gs:[ebp + 0x43a]
    X86_AT(c, 0xc995u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x43Au))));
    // 00c99d  mov bx, word ptr gs:[ebp + 0x488]
    X86_AT(c, 0xc99du);
    s16(c, 3, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x488u))));
    // 00c9a5  mov word ptr gs:[ebp + 0x47a], 0xffff
    X86_AT(c, 0xc9a5u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x47Au)), 0xFFFFu);
    // 00c9af  mov word ptr gs:[ebp + 0x470], dx
    X86_AT(c, 0xc9afu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x470u)), (c.r[2] & 0xFFFFu));
    // 00c9b7  mov word ptr gs:[ebp + 0x472], dx
    X86_AT(c, 0xc9b7u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x472u)), (c.r[2] & 0xFFFFu));
    // 00c9bf  mov word ptr gs:[ebp + 0x474], dx
    X86_AT(c, 0xc9bfu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x474u)), (c.r[2] & 0xFFFFu));
    // 00c9c7  mov word ptr gs:[ebp + 0x476], dx
    X86_AT(c, 0xc9c7u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x476u)), (c.r[2] & 0xFFFFu));
L_c9cf:
    X86_TICK(c, 7);
    // 00c9cf  test dx, dx
    X86_AT(c, 0xc9cfu);
    (void)x86_logic(c, (c.r[2] & 0xFFFFu) & (c.r[2] & 0xFFFFu), 2);
    // 00c9d2  jge 0xca16
    X86_AT(c, 0xc9d2u);
    if (x86_cc(c, 13)) { goto L_ca16; }
    X86_TICK(c, 12);
    // 00c9d4  cmp byte ptr gs:[ebp + 0x41c], 0
    X86_AT(c, 0xc9d4u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x41Cu))), 0x0u, 0, 1);
    // 00c9dc  jne 0xca13
    X86_AT(c, 0xc9dcu);
    if (x86_cc(c, 5)) { goto L_ca13; }
    X86_TICK(c, 12);
    // 00c9de  cmp word ptr gs:[ebp + 0x40e], ax
    X86_AT(c, 0xc9deu);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x40Eu))), (c.r[0] & 0xFFFFu), 0, 2);
    // 00c9e6  jne 0xca13
    X86_AT(c, 0xc9e6u);
    if (x86_cc(c, 5)) { goto L_ca13; }
    X86_TICK(c, 12);
    // 00c9e8  cmp word ptr gs:[ebp + 0x472], 0
    X86_AT(c, 0xc9e8u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x472u))), 0x0u, 0, 2);
    // 00c9f1  jl 0xca13
    X86_AT(c, 0xc9f1u);
    if (x86_cc(c, 12)) { goto L_ca13; }
    X86_TICK(c, 17);
    // 00c9f3  mov word ptr gs:[ebp + 0x47a], ax
    X86_AT(c, 0xc9f3u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x47Au)), (c.r[0] & 0xFFFFu));
    // 00c9fb  mov esi, dword ptr gs:[ebp + 0x48c]
    X86_AT(c, 0xc9fbu);
    c.r[6] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x48Cu)));
    // 00ca02  mov edi, dword ptr gs:[ebp + 0x490]
    X86_AT(c, 0xca02u);
    c.r[7] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x490u)));
    // 00ca09  call 0xd134
    X86_AT(c, 0xca09u);
    push32(c, 0xca0eu); f_0000d134(c); X86_RET(c, 0xca0eu);
    X86_TICK(c, 7);
    // 00ca0e  call 0xd31c
    X86_AT(c, 0xca0eu);
    push32(c, 0xca13u); f_0000d31c(c); X86_RET(c, 0xca13u);
L_ca13:
    X86_TICK(c, 12);
    // 00ca13  xor ah, ah
    X86_AT(c, 0xca13u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_logic(c, v ^ g8(c, 4), 1)); }
    // 00ca15  ret 
    X86_AT(c, 0xca15u);
    c.eip = pop32(c); return;
L_ca16:
    X86_TICK(c, 20);
    // 00ca16  mov esi, dword ptr gs:[ebp + 0x48c]
    X86_AT(c, 0xca16u);
    c.r[6] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x48Cu)));
    // 00ca1d  mov edi, dword ptr gs:[ebp + 0x490]
    X86_AT(c, 0xca1du);
    c.r[7] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x490u)));
    // 00ca24  cmp byte ptr gs:[ebp + 0x41e], 1
    X86_AT(c, 0xca24u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x41Eu))), 0x1u, 0, 1);
    // 00ca2c  jne 0xcbb0
    X86_AT(c, 0xca2cu);
    if (x86_cc(c, 5)) { goto L_cbb0; }
    X86_TICK(c, 12);
    // 00ca32  cmp word ptr gs:[ebp + 0x47a], ax
    X86_AT(c, 0xca32u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x47Au))), (c.r[0] & 0xFFFFu), 0, 2);
    // 00ca3a  jge 0xcbb0
    X86_AT(c, 0xca3au);
    if (x86_cc(c, 13)) { goto L_cbb0; }
    X86_TICK(c, 15);
    // 00ca40  push eax
    X86_AT(c, 0xca40u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 00ca41  mov ax, word ptr gs:[ebp + 0x4bc]
    X86_AT(c, 0xca41u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x4BCu))));
    // 00ca49  mov word ptr gs:[ebp + 0x4c0], ax
    X86_AT(c, 0xca49u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x4C0u)), (c.r[0] & 0xFFFFu));
    // 00ca51  cmp ax, dx
    X86_AT(c, 0xca51u);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), (c.r[2] & 0xFFFFu), 0, 2);
    // 00ca54  jbe 0xca7b
    X86_AT(c, 0xca54u);
    if (x86_cc(c, 6)) { goto L_ca7b; }
    X86_TICK(c, 12);
    // 00ca56  test byte ptr gs:[ebp + 0x4ba], 1
    X86_AT(c, 0xca56u);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x4BAu))) & 0x1u, 1);
    // 00ca5e  jne 0xca7b
    X86_AT(c, 0xca5eu);
    if (x86_cc(c, 5)) { goto L_ca7b; }
    X86_TICK(c, 18);
    // 00ca60  mov byte ptr gs:[ebp + 0x4ba], 1
    X86_AT(c, 0xca60u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x4BAu)), 0x1u);
    // 00ca68  mov byte ptr gs:[ebp + 0x4b8], 1
    X86_AT(c, 0xca68u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x4B8u)), 0x1u);
    // 00ca70  xor byte ptr gs:[ebp + esi*1 + 0x494], 1
    X86_AT(c, 0xca70u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x494u)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v ^ 0x1u, 1)); }
    // 00ca79  jmp 0xcaf8
    X86_AT(c, 0xca79u);
    goto L_caf8;
L_ca7b:
    X86_TICK(c, 16);
    // 00ca7b  mov cx, word ptr gs:[ebp + 0x47c]
    X86_AT(c, 0xca7bu);
    s16(c, 1, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x47Cu))));
    // 00ca83  cmp byte ptr gs:[ebp + 0x4c8], 0
    X86_AT(c, 0xca83u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x4C8u))), 0x0u, 0, 1);
    // 00ca8b  jne 0xcacc
    X86_AT(c, 0xca8bu);
    if (x86_cc(c, 5)) { goto L_cacc; }
L_ca8d:
    X86_TICK(c, 7);
    // 00ca8d  cmp ax, dx
    X86_AT(c, 0xca8du);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), (c.r[2] & 0xFFFFu), 0, 2);
    // 00ca90  ja 0xcaba
    X86_AT(c, 0xca90u);
    if (x86_cc(c, 7)) { goto L_caba; }
    X86_TICK(c, 13);
    // 00ca92  inc ax
    X86_AT(c, 0xca92u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_inc(c, v, 2)); }
    // 00ca94  sub cx, word ptr gs:[ebp + 0x482]
    X86_AT(c, 0xca94u);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_sub(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x482u))), 0, 2)); }
    // 00ca9c  jae 0xca8d
    X86_AT(c, 0xca9cu);
    if (x86_cc(c, 3)) { X86_POLL(c, 0xca8du); goto L_ca8d; }
    X86_TICK(c, 19);
    // 00ca9e  mov word ptr gs:[ebp + 0x4bc], ax
    X86_AT(c, 0xca9eu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x4BCu)), (c.r[0] & 0xFFFFu));
    // 00caa6  dec ax
    X86_AT(c, 0xcaa6u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_dec(c, v, 2)); }
    // 00caa8  mov word ptr gs:[ebp + 0x4c2], ax
    X86_AT(c, 0xcaa8u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x4C2u)), (c.r[0] & 0xFFFFu));
    // 00cab0  add cx, word ptr gs:[ebp + 0x480]
    X86_AT(c, 0xcab0u);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x480u))), 0, 2)); }
    // 00cab8  jmp 0xcaf0
    X86_AT(c, 0xcab8u);
    goto L_caf0;
L_caba:
    X86_TICK(c, 11);
    // 00caba  mov word ptr gs:[ebp + 0x4bc], ax
    X86_AT(c, 0xcabau);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x4BCu)), (c.r[0] & 0xFFFFu));
    // 00cac2  mov word ptr gs:[ebp + 0x4c2], dx
    X86_AT(c, 0xcac2u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x4C2u)), (c.r[2] & 0xFFFFu));
    // 00caca  jmp 0xcaf0
    X86_AT(c, 0xcacau);
    goto L_caf0;
L_cacc:
    X86_TICK(c, 13);
    // 00cacc  mov word ptr gs:[ebp + 0x4c2], ax
    X86_AT(c, 0xcaccu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x4C2u)), (c.r[0] & 0xFFFFu));
    // 00cad4  sub cx, word ptr gs:[ebp + 0x480]
    X86_AT(c, 0xcad4u);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_sub(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x480u))), 0, 2)); }
    // 00cadc  jae 0xcae8
    X86_AT(c, 0xcadcu);
    if (x86_cc(c, 3)) { goto L_cae8; }
    X86_TICK(c, 8);
    // 00cade  inc ax
    X86_AT(c, 0xcadeu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_inc(c, v, 2)); }
    // 00cae0  add cx, word ptr gs:[ebp + 0x482]
    X86_AT(c, 0xcae0u);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x482u))), 0, 2)); }
L_cae8:
    X86_TICK(c, 2);
    // 00cae8  mov word ptr gs:[ebp + 0x4bc], ax
    X86_AT(c, 0xcae8u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x4BCu)), (c.r[0] & 0xFFFFu));
L_caf0:
    X86_TICK(c, 2);
    // 00caf0  mov word ptr gs:[ebp + 0x47c], cx
    X86_AT(c, 0xcaf0u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x47Cu)), (c.r[1] & 0xFFFFu));
L_caf8:
    X86_TICK(c, 13);
    // 00caf8  mov ax, word ptr gs:[ebp + 0x4be]
    X86_AT(c, 0xcaf8u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x4BEu))));
    // 00cb00  mov word ptr gs:[ebp + 0x4c4], ax
    X86_AT(c, 0xcb00u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x4C4u)), (c.r[0] & 0xFFFFu));
    // 00cb08  cmp ax, dx
    X86_AT(c, 0xcb08u);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), (c.r[2] & 0xFFFFu), 0, 2);
    // 00cb0b  jbe 0xcb32
    X86_AT(c, 0xcb0bu);
    if (x86_cc(c, 6)) { goto L_cb32; }
    X86_TICK(c, 12);
    // 00cb0d  test byte ptr gs:[ebp + 0x4bb], 1
    X86_AT(c, 0xcb0du);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x4BBu))) & 0x1u, 1);
    // 00cb15  jne 0xcb32
    X86_AT(c, 0xcb15u);
    if (x86_cc(c, 5)) { goto L_cb32; }
    X86_TICK(c, 18);
    // 00cb17  mov byte ptr gs:[ebp + 0x4bb], 1
    X86_AT(c, 0xcb17u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x4BBu)), 0x1u);
    // 00cb1f  mov byte ptr gs:[ebp + 0x4b9], 1
    X86_AT(c, 0xcb1fu);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x4B9u)), 0x1u);
    // 00cb27  xor byte ptr gs:[ebp + edi*1 + 0x494], 1
    X86_AT(c, 0xcb27u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + c.r[7] + 0x494u)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v ^ 0x1u, 1)); }
    // 00cb30  jmp 0xcbaf
    X86_AT(c, 0xcb30u);
    goto L_cbaf;
L_cb32:
    X86_TICK(c, 16);
    // 00cb32  mov cx, word ptr gs:[ebp + 0x47e]
    X86_AT(c, 0xcb32u);
    s16(c, 1, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x47Eu))));
    // 00cb3a  cmp byte ptr gs:[ebp + 0x4c9], 0
    X86_AT(c, 0xcb3au);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x4C9u))), 0x0u, 0, 1);
    // 00cb42  jne 0xcb83
    X86_AT(c, 0xcb42u);
    if (x86_cc(c, 5)) { goto L_cb83; }
L_cb44:
    X86_TICK(c, 7);
    // 00cb44  cmp ax, dx
    X86_AT(c, 0xcb44u);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), (c.r[2] & 0xFFFFu), 0, 2);
    // 00cb47  ja 0xcb71
    X86_AT(c, 0xcb47u);
    if (x86_cc(c, 7)) { goto L_cb71; }
    X86_TICK(c, 13);
    // 00cb49  inc ax
    X86_AT(c, 0xcb49u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_inc(c, v, 2)); }
    // 00cb4b  sub cx, word ptr gs:[ebp + 0x486]
    X86_AT(c, 0xcb4bu);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_sub(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x486u))), 0, 2)); }
    // 00cb53  jae 0xcb44
    X86_AT(c, 0xcb53u);
    if (x86_cc(c, 3)) { X86_POLL(c, 0xcb44u); goto L_cb44; }
    X86_TICK(c, 19);
    // 00cb55  mov word ptr gs:[ebp + 0x4be], ax
    X86_AT(c, 0xcb55u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x4BEu)), (c.r[0] & 0xFFFFu));
    // 00cb5d  dec ax
    X86_AT(c, 0xcb5du);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_dec(c, v, 2)); }
    // 00cb5f  mov word ptr gs:[ebp + 0x4c6], ax
    X86_AT(c, 0xcb5fu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x4C6u)), (c.r[0] & 0xFFFFu));
    // 00cb67  add cx, word ptr gs:[ebp + 0x484]
    X86_AT(c, 0xcb67u);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x484u))), 0, 2)); }
    // 00cb6f  jmp 0xcba7
    X86_AT(c, 0xcb6fu);
    goto L_cba7;
L_cb71:
    X86_TICK(c, 11);
    // 00cb71  mov word ptr gs:[ebp + 0x4be], ax
    X86_AT(c, 0xcb71u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x4BEu)), (c.r[0] & 0xFFFFu));
    // 00cb79  mov word ptr gs:[ebp + 0x4c6], dx
    X86_AT(c, 0xcb79u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x4C6u)), (c.r[2] & 0xFFFFu));
    // 00cb81  jmp 0xcba7
    X86_AT(c, 0xcb81u);
    goto L_cba7;
L_cb83:
    X86_TICK(c, 13);
    // 00cb83  mov word ptr gs:[ebp + 0x4c6], ax
    X86_AT(c, 0xcb83u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x4C6u)), (c.r[0] & 0xFFFFu));
    // 00cb8b  sub cx, word ptr gs:[ebp + 0x484]
    X86_AT(c, 0xcb8bu);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_sub(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x484u))), 0, 2)); }
    // 00cb93  jae 0xcb9f
    X86_AT(c, 0xcb93u);
    if (x86_cc(c, 3)) { goto L_cb9f; }
    X86_TICK(c, 8);
    // 00cb95  inc ax
    X86_AT(c, 0xcb95u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_inc(c, v, 2)); }
    // 00cb97  add cx, word ptr gs:[ebp + 0x486]
    X86_AT(c, 0xcb97u);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x486u))), 0, 2)); }
L_cb9f:
    X86_TICK(c, 2);
    // 00cb9f  mov word ptr gs:[ebp + 0x4be], ax
    X86_AT(c, 0xcb9fu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x4BEu)), (c.r[0] & 0xFFFFu));
L_cba7:
    X86_TICK(c, 2);
    // 00cba7  mov word ptr gs:[ebp + 0x47e], cx
    X86_AT(c, 0xcba7u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x47Eu)), (c.r[1] & 0xFFFFu));
L_cbaf:
    X86_TICK(c, 4);
    // 00cbaf  pop eax
    X86_AT(c, 0xcbafu);
    { uint32_t v = pop32(c); c.r[0] = v; }
L_cbb0:
    X86_TICK(c, 12);
    // 00cbb0  cmp byte ptr gs:[ebp + 0x41e], 1
    X86_AT(c, 0xcbb0u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x41Eu))), 0x1u, 0, 1);
    // 00cbb8  jne 0xccce
    X86_AT(c, 0xcbb8u);
    if (x86_cc(c, 5)) { goto L_ccce; }
    X86_TICK(c, 12);
    // 00cbbe  test byte ptr gs:[ebp + 0x4ba], 1
    X86_AT(c, 0xcbbeu);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x4BAu))) & 0x1u, 1);
    // 00cbc6  jne 0xcc57
    X86_AT(c, 0xcbc6u);
    if (x86_cc(c, 5)) { goto L_cc57; }
    X86_TICK(c, 11);
    // 00cbcc  mov cx, word ptr gs:[ebp + 0x4c0]
    X86_AT(c, 0xcbccu);
    s16(c, 1, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x4C0u))));
    // 00cbd4  cmp dx, cx
    X86_AT(c, 0xcbd4u);
    (void)x86_sub(c, (c.r[2] & 0xFFFFu), (c.r[1] & 0xFFFFu), 0, 2);
    // 00cbd7  jae 0xcbf4
    X86_AT(c, 0xcbd7u);
    if (x86_cc(c, 3)) { goto L_cbf4; }
    X86_TICK(c, 18);
    // 00cbd9  mov byte ptr gs:[ebp + 0x4b8], 1
    X86_AT(c, 0xcbd9u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x4B8u)), 0x1u);
    // 00cbe1  mov byte ptr gs:[ebp + 0x4ba], 1
    X86_AT(c, 0xcbe1u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x4BAu)), 0x1u);
    // 00cbe9  xor byte ptr gs:[ebp + esi*1 + 0x494], 1
    X86_AT(c, 0xcbe9u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x494u)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v ^ 0x1u, 1)); }
    // 00cbf2  jmp 0xcc57
    X86_AT(c, 0xcbf2u);
    goto L_cc57;
L_cbf4:
    X86_TICK(c, 5);
    // 00cbf4  jne 0xcbfe
    X86_AT(c, 0xcbf4u);
    if (x86_cc(c, 5)) { goto L_cbfe; }
    X86_TICK(c, 2);
    // 00cbf6  mov byte ptr gs:[ebp + 0x4b8], 2
    X86_AT(c, 0xcbf6u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x4B8u)), 0x2u);
L_cbfe:
    X86_TICK(c, 11);
    // 00cbfe  mov cx, word ptr gs:[ebp + 0x4c2]
    X86_AT(c, 0xcbfeu);
    s16(c, 1, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x4C2u))));
    // 00cc06  cmp dx, cx
    X86_AT(c, 0xcc06u);
    (void)x86_sub(c, (c.r[2] & 0xFFFFu), (c.r[1] & 0xFFFFu), 0, 2);
    // 00cc09  ja 0xcc3b
    X86_AT(c, 0xcc09u);
    if (x86_cc(c, 7)) { goto L_cc3b; }
    X86_TICK(c, 25);
    // 00cc0b  or byte ptr gs:[ebp + esi*1 + 0x494], 2
    X86_AT(c, 0xcc0bu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x494u)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | 0x2u, 1)); }
    // 00cc14  dec dx
    X86_AT(c, 0xcc14u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_dec(c, v, 2)); }
    // 00cc16  mov word ptr gs:[ebp + 0x4c2], dx
    X86_AT(c, 0xcc16u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x4C2u)), (c.r[2] & 0xFFFFu));
    // 00cc1e  inc dx
    X86_AT(c, 0xcc1eu);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_inc(c, v, 2)); }
    // 00cc20  cmp byte ptr gs:[ebp + 0x478], 0
    X86_AT(c, 0xcc20u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x478u))), 0x0u, 0, 1);
    // 00cc28  jne 0xcc57
    X86_AT(c, 0xcc28u);
    if (x86_cc(c, 5)) { goto L_cc57; }
    X86_TICK(c, 15);
    // 00cc2a  mov word ptr gs:[ebp + 0x474], dx
    X86_AT(c, 0xcc2au);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x474u)), (c.r[2] & 0xFFFFu));
    // 00cc32  not byte ptr gs:[ebp + 0x478]
    X86_AT(c, 0xcc32u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x478u)); uint32_t v = rd8(ea); wr8(ea, ~v & 0xFFu); }
    // 00cc39  jmp 0xcc57
    X86_AT(c, 0xcc39u);
    goto L_cc57;
L_cc3b:
    X86_TICK(c, 7);
    // 00cc3b  cmp bh, bl
    X86_AT(c, 0xcc3bu);
    (void)x86_sub(c, g8(c, 7), g8(c, 3), 0, 1);
    // 00cc3d  jne 0xcc57
    X86_AT(c, 0xcc3du);
    if (x86_cc(c, 5)) { goto L_cc57; }
    X86_TICK(c, 7);
    // 00cc3f  cmp dx, cx
    X86_AT(c, 0xcc3fu);
    (void)x86_sub(c, (c.r[2] & 0xFFFFu), (c.r[1] & 0xFFFFu), 0, 2);
    // 00cc42  jbe 0xcc57
    X86_AT(c, 0xcc42u);
    if (x86_cc(c, 6)) { goto L_cc57; }
    X86_TICK(c, 12);
    // 00cc44  cmp word ptr gs:[ebp + 0x4bc], dx
    X86_AT(c, 0xcc44u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x4BCu))), (c.r[2] & 0xFFFFu), 0, 2);
    // 00cc4c  jne 0xcc57
    X86_AT(c, 0xcc4cu);
    if (x86_cc(c, 5)) { goto L_cc57; }
    X86_TICK(c, 7);
    // 00cc4e  or byte ptr gs:[ebp + esi*1 + 0x494], 2
    X86_AT(c, 0xcc4eu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x494u)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | 0x2u, 1)); }
L_cc57:
    X86_TICK(c, 12);
    // 00cc57  test byte ptr gs:[ebp + 0x4bb], 1
    X86_AT(c, 0xcc57u);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x4BBu))) & 0x1u, 1);
    // 00cc5f  jne 0xccce
    X86_AT(c, 0xcc5fu);
    if (x86_cc(c, 5)) { goto L_ccce; }
    X86_TICK(c, 11);
    // 00cc61  mov cx, word ptr gs:[ebp + 0x4c4]
    X86_AT(c, 0xcc61u);
    s16(c, 1, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x4C4u))));
    // 00cc69  cmp dx, cx
    X86_AT(c, 0xcc69u);
    (void)x86_sub(c, (c.r[2] & 0xFFFFu), (c.r[1] & 0xFFFFu), 0, 2);
    // 00cc6c  jae 0xcc89
    X86_AT(c, 0xcc6cu);
    if (x86_cc(c, 3)) { goto L_cc89; }
    X86_TICK(c, 18);
    // 00cc6e  mov byte ptr gs:[ebp + 0x4b9], 1
    X86_AT(c, 0xcc6eu);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x4B9u)), 0x1u);
    // 00cc76  mov byte ptr gs:[ebp + 0x4bb], 1
    X86_AT(c, 0xcc76u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x4BBu)), 0x1u);
    // 00cc7e  xor byte ptr gs:[ebp + edi*1 + 0x494], 1
    X86_AT(c, 0xcc7eu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + c.r[7] + 0x494u)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v ^ 0x1u, 1)); }
    // 00cc87  jmp 0xccce
    X86_AT(c, 0xcc87u);
    goto L_ccce;
L_cc89:
    X86_TICK(c, 5);
    // 00cc89  jne 0xcc93
    X86_AT(c, 0xcc89u);
    if (x86_cc(c, 5)) { goto L_cc93; }
    X86_TICK(c, 2);
    // 00cc8b  mov byte ptr gs:[ebp + 0x4b9], 2
    X86_AT(c, 0xcc8bu);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x4B9u)), 0x2u);
L_cc93:
    X86_TICK(c, 11);
    // 00cc93  mov cx, word ptr gs:[ebp + 0x4c6]
    X86_AT(c, 0xcc93u);
    s16(c, 1, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x4C6u))));
    // 00cc9b  cmp dx, cx
    X86_AT(c, 0xcc9bu);
    (void)x86_sub(c, (c.r[2] & 0xFFFFu), (c.r[1] & 0xFFFFu), 0, 2);
    // 00cc9e  ja 0xccce
    X86_AT(c, 0xcc9eu);
    if (x86_cc(c, 7)) { goto L_ccce; }
    X86_TICK(c, 25);
    // 00cca0  or byte ptr gs:[ebp + edi*1 + 0x494], 2
    X86_AT(c, 0xcca0u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + c.r[7] + 0x494u)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | 0x2u, 1)); }
    // 00cca9  dec dx
    X86_AT(c, 0xcca9u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_dec(c, v, 2)); }
    // 00ccab  mov word ptr gs:[ebp + 0x4c6], dx
    X86_AT(c, 0xccabu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x4C6u)), (c.r[2] & 0xFFFFu));
    // 00ccb3  inc dx
    X86_AT(c, 0xccb3u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_inc(c, v, 2)); }
    // 00ccb5  cmp byte ptr gs:[ebp + 0x479], 0
    X86_AT(c, 0xccb5u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x479u))), 0x0u, 0, 1);
    // 00ccbd  jne 0xccce
    X86_AT(c, 0xccbdu);
    if (x86_cc(c, 5)) { goto L_ccce; }
    X86_TICK(c, 8);
    // 00ccbf  mov word ptr gs:[ebp + 0x476], dx
    X86_AT(c, 0xccbfu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x476u)), (c.r[2] & 0xFFFFu));
    // 00ccc7  not byte ptr gs:[ebp + 0x479]
    X86_AT(c, 0xccc7u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x479u)); uint32_t v = rd8(ea); wr8(ea, ~v & 0xFFu); }
L_ccce:
    X86_TICK(c, 12);
    // 00ccce  cmp byte ptr gs:[ebp + 0x41c], 1
    X86_AT(c, 0xccceu);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x41Cu))), 0x1u, 0, 1);
    // 00ccd6  jne 0xcd90
    X86_AT(c, 0xccd6u);
    if (x86_cc(c, 5)) { goto L_cd90; }
    X86_TICK(c, 9);
    // 00ccdc  push ebx
    X86_AT(c, 0xccdcu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 00ccdd  or dx, dx
    X86_AT(c, 0xccddu);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_logic(c, v | (c.r[2] & 0xFFFFu), 2)); }
    // 00cce0  je 0xcd36
    X86_AT(c, 0xcce0u);
    if (x86_cc(c, 4)) { goto L_cd36; }
    X86_TICK(c, 12);
    // 00cce2  cmp byte ptr gs:[ebp + 0x494], 0
    X86_AT(c, 0xcce2u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x494u))), 0x0u, 0, 1);
    // 00ccea  je 0xcd09
    X86_AT(c, 0xcceau);
    if (x86_cc(c, 4)) { goto L_cd09; }
    X86_TICK(c, 15);
    // 00ccec  push edx
    X86_AT(c, 0xccecu);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 00cced  push eax
    X86_AT(c, 0xccedu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 00ccee  add dx, word ptr gs:[ebp + 0x408]
    X86_AT(c, 0xcceeu);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x408u))), 0, 2)); }
    // 00ccf6  jo 0xcd07
    X86_AT(c, 0xccf6u);
    if (x86_cc(c, 0)) { goto L_cd07; }
    X86_TICK(c, 11);
    // 00ccf8  add ax, word ptr gs:[ebp + 0x40a]
    X86_AT(c, 0xccf8u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x40Au))), 0, 2)); }
    // 00cd00  jo 0xcd07
    X86_AT(c, 0xcd00u);
    if (x86_cc(c, 0)) { goto L_cd07; }
    X86_TICK(c, 7);
    // 00cd02  call 0x5db0
    X86_AT(c, 0xcd02u);
    push32(c, 0xcd07u); f_00005db0(c); X86_RET(c, 0xcd07u);
L_cd07:
    X86_TICK(c, 8);
    // 00cd07  pop eax
    X86_AT(c, 0xcd07u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 00cd08  pop edx
    X86_AT(c, 0xcd08u);
    { uint32_t v = pop32(c); c.r[2] = v; }
L_cd09:
    X86_TICK(c, 12);
    // 00cd09  cmp byte ptr gs:[ebp + 0x496], 0
    X86_AT(c, 0xcd09u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x496u))), 0x0u, 0, 1);
    // 00cd11  je 0xcd36
    X86_AT(c, 0xcd11u);
    if (x86_cc(c, 4)) { goto L_cd36; }
    X86_TICK(c, 19);
    // 00cd13  push edx
    X86_AT(c, 0xcd13u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 00cd14  push eax
    X86_AT(c, 0xcd14u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 00cd15  neg dx
    X86_AT(c, 0xcd15u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_neg(c, v, 2)); }
    // 00cd18  neg ax
    X86_AT(c, 0xcd18u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_neg(c, v, 2)); }
    // 00cd1b  add dx, word ptr gs:[ebp + 0x408]
    X86_AT(c, 0xcd1bu);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x408u))), 0, 2)); }
    // 00cd23  jo 0xcd34
    X86_AT(c, 0xcd23u);
    if (x86_cc(c, 0)) { goto L_cd34; }
    X86_TICK(c, 11);
    // 00cd25  add ax, word ptr gs:[ebp + 0x40a]
    X86_AT(c, 0xcd25u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x40Au))), 0, 2)); }
    // 00cd2d  jo 0xcd34
    X86_AT(c, 0xcd2du);
    if (x86_cc(c, 0)) { goto L_cd34; }
    X86_TICK(c, 7);
    // 00cd2f  call 0x5e58
    X86_AT(c, 0xcd2fu);
    push32(c, 0xcd34u); f_00005e58(c); X86_RET(c, 0xcd34u);
L_cd34:
    X86_TICK(c, 8);
    // 00cd34  pop eax
    X86_AT(c, 0xcd34u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 00cd35  pop edx
    X86_AT(c, 0xcd35u);
    { uint32_t v = pop32(c); c.r[2] = v; }
L_cd36:
    X86_TICK(c, 7);
    // 00cd36  or ax, ax
    X86_AT(c, 0xcd36u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_logic(c, v | (c.r[0] & 0xFFFFu), 2)); }
    // 00cd39  je 0xcd8f
    X86_AT(c, 0xcd39u);
    if (x86_cc(c, 4)) { goto L_cd8f; }
    X86_TICK(c, 12);
    // 00cd3b  cmp byte ptr gs:[ebp + 0x495], 0
    X86_AT(c, 0xcd3bu);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x495u))), 0x0u, 0, 1);
    // 00cd43  je 0xcd65
    X86_AT(c, 0xcd43u);
    if (x86_cc(c, 4)) { goto L_cd65; }
    X86_TICK(c, 17);
    // 00cd45  push edx
    X86_AT(c, 0xcd45u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 00cd46  push eax
    X86_AT(c, 0xcd46u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 00cd47  neg dx
    X86_AT(c, 0xcd47u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_neg(c, v, 2)); }
    // 00cd4a  add dx, word ptr gs:[ebp + 0x408]
    X86_AT(c, 0xcd4au);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x408u))), 0, 2)); }
    // 00cd52  jo 0xcd63
    X86_AT(c, 0xcd52u);
    if (x86_cc(c, 0)) { goto L_cd63; }
    X86_TICK(c, 11);
    // 00cd54  add ax, word ptr gs:[ebp + 0x40a]
    X86_AT(c, 0xcd54u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x40Au))), 0, 2)); }
    // 00cd5c  jo 0xcd63
    X86_AT(c, 0xcd5cu);
    if (x86_cc(c, 0)) { goto L_cd63; }
    X86_TICK(c, 7);
    // 00cd5e  call 0x5e04
    X86_AT(c, 0xcd5eu);
    push32(c, 0xcd63u); f_00005e04(c); X86_RET(c, 0xcd63u);
L_cd63:
    X86_TICK(c, 8);
    // 00cd63  pop eax
    X86_AT(c, 0xcd63u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 00cd64  pop edx
    X86_AT(c, 0xcd64u);
    { uint32_t v = pop32(c); c.r[2] = v; }
L_cd65:
    X86_TICK(c, 12);
    // 00cd65  cmp byte ptr gs:[ebp + 0x497], 0
    X86_AT(c, 0xcd65u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x497u))), 0x0u, 0, 1);
    // 00cd6d  je 0xcd8f
    X86_AT(c, 0xcd6du);
    if (x86_cc(c, 4)) { goto L_cd8f; }
    X86_TICK(c, 17);
    // 00cd6f  push edx
    X86_AT(c, 0xcd6fu);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 00cd70  push eax
    X86_AT(c, 0xcd70u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 00cd71  neg ax
    X86_AT(c, 0xcd71u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_neg(c, v, 2)); }
    // 00cd74  add dx, word ptr gs:[ebp + 0x408]
    X86_AT(c, 0xcd74u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x408u))), 0, 2)); }
    // 00cd7c  jo 0xcd8d
    X86_AT(c, 0xcd7cu);
    if (x86_cc(c, 0)) { goto L_cd8d; }
    X86_TICK(c, 11);
    // 00cd7e  add ax, word ptr gs:[ebp + 0x40a]
    X86_AT(c, 0xcd7eu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x40Au))), 0, 2)); }
    // 00cd86  jo 0xcd8d
    X86_AT(c, 0xcd86u);
    if (x86_cc(c, 0)) { goto L_cd8d; }
    X86_TICK(c, 7);
    // 00cd88  call 0x5eac
    X86_AT(c, 0xcd88u);
    push32(c, 0xcd8du); f_00005eac(c); X86_RET(c, 0xcd8du);
L_cd8d:
    X86_TICK(c, 8);
    // 00cd8d  pop eax
    X86_AT(c, 0xcd8du);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 00cd8e  pop edx
    X86_AT(c, 0xcd8eu);
    { uint32_t v = pop32(c); c.r[2] = v; }
L_cd8f:
    X86_TICK(c, 4);
    // 00cd8f  pop ebx
    X86_AT(c, 0xcd8fu);
    { uint32_t v = pop32(c); c.r[3] = v; }
L_cd90:
    X86_TICK(c, 27);
    // 00cd90  push eax
    X86_AT(c, 0xcd90u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 00cd91  mov eax, dword ptr gs:[ebp + 0x494]
    X86_AT(c, 0xcd91u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x494u)));
    // 00cd98  mov dword ptr gs:[ebp + 0x498], eax
    X86_AT(c, 0xcd98u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x498u)), c.r[0]);
    // 00cd9f  and eax, 0x1010101
    X86_AT(c, 0xcd9fu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x1010101u, 4); }
    // 00cda4  mov dword ptr gs:[ebp + 0x494], eax
    X86_AT(c, 0xcda4u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x494u)), c.r[0]);
    // 00cdab  pop eax
    X86_AT(c, 0xcdabu);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 00cdac  mov word ptr gs:[ebp + 0x470], dx
    X86_AT(c, 0xcdacu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x470u)), (c.r[2] & 0xFFFFu));
    // 00cdb4  mov word ptr gs:[ebp + 0x47a], ax
    X86_AT(c, 0xcdb4u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x47Au)), (c.r[0] & 0xFFFFu));
    // 00cdbc  call 0xd794
    X86_AT(c, 0xcdbcu);
    push32(c, 0xcdc1u); f_0000d794(c); X86_RET(c, 0xcdc1u);
    X86_TICK(c, 12);
    // 00cdc1  cmp byte ptr gs:[ebp + 0x41f], 1
    X86_AT(c, 0xcdc1u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x41Fu))), 0x1u, 0, 1);
    // 00cdc9  jne 0xd001
    X86_AT(c, 0xcdc9u);
    if (x86_cc(c, 5)) { goto L_d001; }
    X86_TICK(c, 12);
    // 00cdcf  cmp word ptr gs:[ebp + 0x47a], ax
    X86_AT(c, 0xcdcfu);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x47Au))), (c.r[0] & 0xFFFFu), 0, 2);
    // 00cdd7  jae 0xd001
    X86_AT(c, 0xcdd7u);
    if (x86_cc(c, 3)) { goto L_d001; }
    X86_TICK(c, 27);
    // 00cddd  push edx
    X86_AT(c, 0xcdddu);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 00cdde  push eax
    X86_AT(c, 0xcddeu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 00cddf  mov esi, dword ptr gs:[ebp + 0x4c0]
    X86_AT(c, 0xcddfu);
    c.r[6] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x4C0u)));
    // 00cde6  shld edi, esi, 0x10
    X86_AT(c, 0xcde6u);
    { uint32_t v = c.r[7]; bool w; uint32_t r = x86_double(c, true, v, c.r[6], 0x10u, 4, w); if (w) c.r[7] = r; }
    // 00cdea  push esi
    X86_AT(c, 0xcdeau);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 00cdeb  push edi
    X86_AT(c, 0xcdebu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 00cdec  cmp byte ptr gs:[ebp + 0x41c], 1
    X86_AT(c, 0xcdecu);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x41Cu))), 0x1u, 0, 1);
    // 00cdf4  jne 0xce13
    X86_AT(c, 0xcdf4u);
    if (x86_cc(c, 5)) { goto L_ce13; }
    X86_TICK(c, 15);
    // 00cdf6  mov ax, word ptr gs:[ebp + 0x47a]
    X86_AT(c, 0xcdf6u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x47Au))));
    // 00cdfe  mov cx, word ptr gs:[ebp + 0x40a]
    X86_AT(c, 0xcdfeu);
    s16(c, 1, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x40Au))));
    // 00ce06  test bh, 2
    X86_AT(c, 0xce06u);
    (void)x86_logic(c, g8(c, 7) & 0x2u, 1);
    // 00ce09  je 0xce10
    X86_AT(c, 0xce09u);
    if (x86_cc(c, 4)) { goto L_ce10; }
    X86_TICK(c, 9);
    // 00ce0b  sub cx, ax
    X86_AT(c, 0xce0bu);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_sub(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 00ce0e  jmp 0xce13
    X86_AT(c, 0xce0eu);
    goto L_ce13;
L_ce10:
    X86_TICK(c, 2);
    // 00ce10  add cx, ax
    X86_AT(c, 0xce10u);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
L_ce13:
    X86_TICK(c, 5);
    // 00ce13  jo 0xce88
    X86_AT(c, 0xce13u);
    if (x86_cc(c, 0)) { goto L_ce88; }
    X86_TICK(c, 18);
    // 00ce15  mov ax, word ptr gs:[ebp + 0x408]
    X86_AT(c, 0xce15u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x408u))));
    // 00ce1d  mov dx, ax
    X86_AT(c, 0xce1du);
    s16(c, 2, (c.r[0] & 0xFFFFu));
    // 00ce20  cmp byte ptr gs:[ebp + 0x41c], 0
    X86_AT(c, 0xce20u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x41Cu))), 0x0u, 0, 1);
    // 00ce28  jne 0xce3c
    X86_AT(c, 0xce28u);
    if (x86_cc(c, 5)) { goto L_ce3c; }
    X86_TICK(c, 12);
    // 00ce2a  cmp byte ptr gs:[ebp + 0x478], 0
    X86_AT(c, 0xce2au);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x478u))), 0x0u, 0, 1);
    // 00ce32  je 0xce3c
    X86_AT(c, 0xce32u);
    if (x86_cc(c, 4)) { goto L_ce3c; }
    X86_TICK(c, 4);
    // 00ce34  mov di, word ptr gs:[ebp + 0x474]
    X86_AT(c, 0xce34u);
    s16(c, 7, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x474u))));
L_ce3c:
    X86_TICK(c, 7);
    // 00ce3c  cmp bh, 1
    X86_AT(c, 0xce3cu);
    (void)x86_sub(c, g8(c, 7), 0x1u, 0, 1);
    // 00ce3f  je 0xce46
    X86_AT(c, 0xce3fu);
    if (x86_cc(c, 4)) { goto L_ce46; }
    X86_TICK(c, 7);
    // 00ce41  cmp bh, 2
    X86_AT(c, 0xce41u);
    (void)x86_sub(c, g8(c, 7), 0x2u, 0, 1);
    // 00ce44  jne 0xce4c
    X86_AT(c, 0xce44u);
    if (x86_cc(c, 5)) { goto L_ce4c; }
L_ce46:
    X86_TICK(c, 4);
    // 00ce46  neg si
    X86_AT(c, 0xce46u);
    { uint32_t v = (c.r[6] & 0xFFFFu); s16(c, 6, x86_neg(c, v, 2)); }
    // 00ce49  neg di
    X86_AT(c, 0xce49u);
    { uint32_t v = (c.r[7] & 0xFFFFu); s16(c, 7, x86_neg(c, v, 2)); }
L_ce4c:
    X86_TICK(c, 7);
    // 00ce4c  cmp si, di
    X86_AT(c, 0xce4cu);
    (void)x86_sub(c, (c.r[6] & 0xFFFFu), (c.r[7] & 0xFFFFu), 0, 2);
    // 00ce4f  jle 0xce54
    X86_AT(c, 0xce4fu);
    if (x86_cc(c, 14)) { goto L_ce54; }
    X86_TICK(c, 3);
    // 00ce51  xchg di, si
    X86_AT(c, 0xce51u);
    { uint32_t t = (c.r[7] & 0xFFFFu); s16(c, 7, (c.r[6] & 0xFFFFu)); s16(c, 6, t); }
L_ce54:
    X86_TICK(c, 11);
    // 00ce54  mov word ptr gs:[ebp + 0x4b0], si
    X86_AT(c, 0xce54u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x4B0u)), (c.r[6] & 0xFFFFu));
    // 00ce5c  mov word ptr gs:[ebp + 0x4b2], di
    X86_AT(c, 0xce5cu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x4B2u)), (c.r[7] & 0xFFFFu));
    // 00ce64  add ax, si
    X86_AT(c, 0xce64u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, (c.r[6] & 0xFFFFu), 0, 2)); }
    // 00ce67  jno 0xce75
    X86_AT(c, 0xce67u);
    if (x86_cc(c, 1)) { goto L_ce75; }
    X86_TICK(c, 9);
    // 00ce69  mov ax, 0x7fff
    X86_AT(c, 0xce69u);
    s16(c, 0, 0x7FFFu);
    // 00ce6d  test si, si
    X86_AT(c, 0xce6du);
    (void)x86_logic(c, (c.r[6] & 0xFFFFu) & (c.r[6] & 0xFFFFu), 2);
    // 00ce70  jge 0xce75
    X86_AT(c, 0xce70u);
    if (x86_cc(c, 13)) { goto L_ce75; }
    X86_TICK(c, 2);
    // 00ce72  neg ax
    X86_AT(c, 0xce72u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_neg(c, v, 2)); }
L_ce75:
    X86_TICK(c, 7);
    // 00ce75  add dx, di
    X86_AT(c, 0xce75u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, (c.r[7] & 0xFFFFu), 0, 2)); }
    // 00ce78  jno 0xce90
    X86_AT(c, 0xce78u);
    if (x86_cc(c, 1)) { goto L_ce90; }
    X86_TICK(c, 9);
    // 00ce7a  mov dx, 0x7fff
    X86_AT(c, 0xce7au);
    s16(c, 2, 0x7FFFu);
    // 00ce7e  test di, di
    X86_AT(c, 0xce7eu);
    (void)x86_logic(c, (c.r[7] & 0xFFFFu) & (c.r[7] & 0xFFFFu), 2);
    // 00ce81  jge 0xce90
    X86_AT(c, 0xce81u);
    if (x86_cc(c, 13)) { goto L_ce90; }
    X86_TICK(c, 9);
    // 00ce83  neg dx
    X86_AT(c, 0xce83u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_neg(c, v, 2)); }
    // 00ce86  jmp 0xce90
    X86_AT(c, 0xce86u);
    goto L_ce90;
L_ce88:
    X86_TICK(c, 2);
    // 00ce88  mov byte ptr gs:[ebp + 0x4b8], 1
    X86_AT(c, 0xce88u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x4B8u)), 0x1u);
L_ce90:
    X86_TICK(c, 12);
    // 00ce90  cmp byte ptr gs:[ebp + 0x41c], 1
    X86_AT(c, 0xce90u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x41Cu))), 0x1u, 0, 1);
    // 00ce98  jne 0xcee5
    X86_AT(c, 0xce98u);
    if (x86_cc(c, 5)) { goto L_cee5; }
    X86_TICK(c, 12);
    // 00ce9a  cmp byte ptr gs:[ebp + 0x4b8], 0
    X86_AT(c, 0xce9au);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x4B8u))), 0x0u, 0, 1);
    // 00cea2  jne 0xcee5
    X86_AT(c, 0xcea2u);
    if (x86_cc(c, 5)) { goto L_cee5; }
    X86_TICK(c, 22);
    // 00cea4  push ebx
    X86_AT(c, 0xcea4u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 00cea5  mov bx, dx
    X86_AT(c, 0xcea5u);
    s16(c, 3, (c.r[2] & 0xFFFFu));
    // 00cea8  sub bx, ax
    X86_AT(c, 0xcea8u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_sub(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 00ceab  mov word ptr gs:[ebp + 0x434], bx
    X86_AT(c, 0xceabu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x434u)), (c.r[3] & 0xFFFFu));
    // 00ceb3  mov bx, 1
    X86_AT(c, 0xceb3u);
    s16(c, 3, 0x1u);
    // 00ceb7  cmp byte ptr gs:[ebp + 0x428], 1
    X86_AT(c, 0xceb7u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x428u))), 0x1u, 0, 1);
    // 00cebf  jne 0xcec6
    X86_AT(c, 0xcebfu);
    if (x86_cc(c, 5)) { goto L_cec6; }
    X86_TICK(c, 5);
    // 00cec1  xchg dx, ax
    X86_AT(c, 0xcec1u);
    { uint32_t t = (c.r[2] & 0xFFFFu); s16(c, 2, (c.r[0] & 0xFFFFu)); s16(c, 0, t); }
    // 00cec3  neg bx
    X86_AT(c, 0xcec3u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_neg(c, v, 2)); }
L_cec6:
    X86_TICK(c, 4);
    // 00cec6  mov dx, ax
    X86_AT(c, 0xcec6u);
    s16(c, 2, (c.r[0] & 0xFFFFu));
    // 00cec9  mov ax, cx
    X86_AT(c, 0xcec9u);
    s16(c, 0, (c.r[1] & 0xFFFFu));
L_cecc:
    X86_TICK(c, 13);
    // 00cecc  push eax
    X86_AT(c, 0xceccu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 00cecd  push ebx
    X86_AT(c, 0xcecdu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 00cece  push edx
    X86_AT(c, 0xceceu);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 00cecf  call 0x5f00
    X86_AT(c, 0xcecfu);
    push32(c, 0xced4u); f_00005f00(c); X86_RET(c, 0xced4u);
    X86_TICK(c, 25);
    // 00ced4  pop edx
    X86_AT(c, 0xced4u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 00ced5  pop ebx
    X86_AT(c, 0xced5u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 00ced6  pop eax
    X86_AT(c, 0xced6u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 00ced7  add dx, bx
    X86_AT(c, 0xced7u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
    // 00ceda  dec word ptr gs:[ebp + 0x434]
    X86_AT(c, 0xcedau);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x434u)); uint32_t v = rd16(ea); wr16(ea, x86_dec(c, v, 2)); }
    // 00cee2  jns 0xcecc
    X86_AT(c, 0xcee2u);
    if (x86_cc(c, 9)) { X86_POLL(c, 0xceccu); goto L_cecc; }
    X86_TICK(c, 4);
    // 00cee4  pop ebx
    X86_AT(c, 0xcee4u);
    { uint32_t v = pop32(c); c.r[3] = v; }
L_cee5:
    X86_TICK(c, 20);
    // 00cee5  pop edi
    X86_AT(c, 0xcee5u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 00cee6  pop esi
    X86_AT(c, 0xcee6u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 00cee7  cmp byte ptr gs:[ebp + 0x4bb], 0
    X86_AT(c, 0xcee7u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x4BBu))), 0x0u, 0, 1);
    // 00ceef  jne 0xcfff
    X86_AT(c, 0xceefu);
    if (x86_cc(c, 5)) { goto L_cfff; }
    X86_TICK(c, 23);
    // 00cef5  mov eax, dword ptr gs:[ebp + 0x4c4]
    X86_AT(c, 0xcef5u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x4C4u)));
    // 00cefc  shld edx, eax, 0x10
    X86_AT(c, 0xcefcu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_double(c, true, v, c.r[0], 0x10u, 4, w); if (w) c.r[2] = r; }
    // 00cf00  mov si, ax
    X86_AT(c, 0xcf00u);
    s16(c, 6, (c.r[0] & 0xFFFFu));
    // 00cf03  mov di, dx
    X86_AT(c, 0xcf03u);
    s16(c, 7, (c.r[2] & 0xFFFFu));
    // 00cf06  cmp byte ptr gs:[ebp + 0x41c], 1
    X86_AT(c, 0xcf06u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x41Cu))), 0x1u, 0, 1);
    // 00cf0e  jne 0xcf2d
    X86_AT(c, 0xcf0eu);
    if (x86_cc(c, 5)) { goto L_cf2d; }
    X86_TICK(c, 15);
    // 00cf10  mov ax, word ptr gs:[ebp + 0x47a]
    X86_AT(c, 0xcf10u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x47Au))));
    // 00cf18  mov cx, word ptr gs:[ebp + 0x40a]
    X86_AT(c, 0xcf18u);
    s16(c, 1, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x40Au))));
    // 00cf20  test bl, 2
    X86_AT(c, 0xcf20u);
    (void)x86_logic(c, g8(c, 3) & 0x2u, 1);
    // 00cf23  je 0xcf2a
    X86_AT(c, 0xcf23u);
    if (x86_cc(c, 4)) { goto L_cf2a; }
    X86_TICK(c, 9);
    // 00cf25  sub cx, ax
    X86_AT(c, 0xcf25u);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_sub(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 00cf28  jmp 0xcf2d
    X86_AT(c, 0xcf28u);
    goto L_cf2d;
L_cf2a:
    X86_TICK(c, 2);
    // 00cf2a  add cx, ax
    X86_AT(c, 0xcf2au);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
L_cf2d:
    X86_TICK(c, 5);
    // 00cf2d  jo 0xcfa2
    X86_AT(c, 0xcf2du);
    if (x86_cc(c, 0)) { goto L_cfa2; }
    X86_TICK(c, 18);
    // 00cf2f  mov ax, word ptr gs:[ebp + 0x408]
    X86_AT(c, 0xcf2fu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x408u))));
    // 00cf37  mov dx, ax
    X86_AT(c, 0xcf37u);
    s16(c, 2, (c.r[0] & 0xFFFFu));
    // 00cf3a  cmp byte ptr gs:[ebp + 0x41c], 0
    X86_AT(c, 0xcf3au);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x41Cu))), 0x0u, 0, 1);
    // 00cf42  jne 0xcf56
    X86_AT(c, 0xcf42u);
    if (x86_cc(c, 5)) { goto L_cf56; }
    X86_TICK(c, 12);
    // 00cf44  cmp byte ptr gs:[ebp + 0x479], 0
    X86_AT(c, 0xcf44u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x479u))), 0x0u, 0, 1);
    // 00cf4c  je 0xcf56
    X86_AT(c, 0xcf4cu);
    if (x86_cc(c, 4)) { goto L_cf56; }
    X86_TICK(c, 4);
    // 00cf4e  mov di, word ptr gs:[ebp + 0x476]
    X86_AT(c, 0xcf4eu);
    s16(c, 7, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x476u))));
L_cf56:
    X86_TICK(c, 7);
    // 00cf56  cmp bl, 1
    X86_AT(c, 0xcf56u);
    (void)x86_sub(c, g8(c, 3), 0x1u, 0, 1);
    // 00cf59  je 0xcf60
    X86_AT(c, 0xcf59u);
    if (x86_cc(c, 4)) { goto L_cf60; }
    X86_TICK(c, 7);
    // 00cf5b  cmp bl, 2
    X86_AT(c, 0xcf5bu);
    (void)x86_sub(c, g8(c, 3), 0x2u, 0, 1);
    // 00cf5e  jne 0xcf66
    X86_AT(c, 0xcf5eu);
    if (x86_cc(c, 5)) { goto L_cf66; }
L_cf60:
    X86_TICK(c, 4);
    // 00cf60  neg si
    X86_AT(c, 0xcf60u);
    { uint32_t v = (c.r[6] & 0xFFFFu); s16(c, 6, x86_neg(c, v, 2)); }
    // 00cf63  neg di
    X86_AT(c, 0xcf63u);
    { uint32_t v = (c.r[7] & 0xFFFFu); s16(c, 7, x86_neg(c, v, 2)); }
L_cf66:
    X86_TICK(c, 7);
    // 00cf66  cmp si, di
    X86_AT(c, 0xcf66u);
    (void)x86_sub(c, (c.r[6] & 0xFFFFu), (c.r[7] & 0xFFFFu), 0, 2);
    // 00cf69  jle 0xcf6e
    X86_AT(c, 0xcf69u);
    if (x86_cc(c, 14)) { goto L_cf6e; }
    X86_TICK(c, 3);
    // 00cf6b  xchg di, si
    X86_AT(c, 0xcf6bu);
    { uint32_t t = (c.r[7] & 0xFFFFu); s16(c, 7, (c.r[6] & 0xFFFFu)); s16(c, 6, t); }
L_cf6e:
    X86_TICK(c, 11);
    // 00cf6e  mov word ptr gs:[ebp + 0x4b4], si
    X86_AT(c, 0xcf6eu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x4B4u)), (c.r[6] & 0xFFFFu));
    // 00cf76  mov word ptr gs:[ebp + 0x4b6], di
    X86_AT(c, 0xcf76u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x4B6u)), (c.r[7] & 0xFFFFu));
    // 00cf7e  add ax, si
    X86_AT(c, 0xcf7eu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, (c.r[6] & 0xFFFFu), 0, 2)); }
    // 00cf81  jno 0xcf8f
    X86_AT(c, 0xcf81u);
    if (x86_cc(c, 1)) { goto L_cf8f; }
    X86_TICK(c, 9);
    // 00cf83  mov ax, 0x7fff
    X86_AT(c, 0xcf83u);
    s16(c, 0, 0x7FFFu);
    // 00cf87  test si, si
    X86_AT(c, 0xcf87u);
    (void)x86_logic(c, (c.r[6] & 0xFFFFu) & (c.r[6] & 0xFFFFu), 2);
    // 00cf8a  jge 0xcf8f
    X86_AT(c, 0xcf8au);
    if (x86_cc(c, 13)) { goto L_cf8f; }
    X86_TICK(c, 2);
    // 00cf8c  neg ax
    X86_AT(c, 0xcf8cu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_neg(c, v, 2)); }
L_cf8f:
    X86_TICK(c, 7);
    // 00cf8f  add dx, di
    X86_AT(c, 0xcf8fu);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, (c.r[7] & 0xFFFFu), 0, 2)); }
    // 00cf92  jno 0xcfaa
    X86_AT(c, 0xcf92u);
    if (x86_cc(c, 1)) { goto L_cfaa; }
    X86_TICK(c, 9);
    // 00cf94  mov dx, 0x7fff
    X86_AT(c, 0xcf94u);
    s16(c, 2, 0x7FFFu);
    // 00cf98  test di, di
    X86_AT(c, 0xcf98u);
    (void)x86_logic(c, (c.r[7] & 0xFFFFu) & (c.r[7] & 0xFFFFu), 2);
    // 00cf9b  jge 0xcfaa
    X86_AT(c, 0xcf9bu);
    if (x86_cc(c, 13)) { goto L_cfaa; }
    X86_TICK(c, 9);
    // 00cf9d  neg dx
    X86_AT(c, 0xcf9du);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_neg(c, v, 2)); }
    // 00cfa0  jmp 0xcfaa
    X86_AT(c, 0xcfa0u);
    goto L_cfaa;
L_cfa2:
    X86_TICK(c, 2);
    // 00cfa2  mov byte ptr gs:[ebp + 0x4b9], 1
    X86_AT(c, 0xcfa2u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x4B9u)), 0x1u);
L_cfaa:
    X86_TICK(c, 12);
    // 00cfaa  cmp byte ptr gs:[ebp + 0x41c], 1
    X86_AT(c, 0xcfaau);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x41Cu))), 0x1u, 0, 1);
    // 00cfb2  jne 0xcfff
    X86_AT(c, 0xcfb2u);
    if (x86_cc(c, 5)) { goto L_cfff; }
    X86_TICK(c, 12);
    // 00cfb4  cmp byte ptr gs:[ebp + 0x4b9], 0
    X86_AT(c, 0xcfb4u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x4B9u))), 0x0u, 0, 1);
    // 00cfbc  jne 0xcfff
    X86_AT(c, 0xcfbcu);
    if (x86_cc(c, 5)) { goto L_cfff; }
    X86_TICK(c, 22);
    // 00cfbe  push ebx
    X86_AT(c, 0xcfbeu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 00cfbf  mov bx, dx
    X86_AT(c, 0xcfbfu);
    s16(c, 3, (c.r[2] & 0xFFFFu));
    // 00cfc2  sub bx, ax
    X86_AT(c, 0xcfc2u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_sub(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 00cfc5  mov word ptr gs:[ebp + 0x434], bx
    X86_AT(c, 0xcfc5u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x434u)), (c.r[3] & 0xFFFFu));
    // 00cfcd  mov bx, 1
    X86_AT(c, 0xcfcdu);
    s16(c, 3, 0x1u);
    // 00cfd1  cmp byte ptr gs:[ebp + 0x429], 1
    X86_AT(c, 0xcfd1u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x429u))), 0x1u, 0, 1);
    // 00cfd9  jne 0xcfe0
    X86_AT(c, 0xcfd9u);
    if (x86_cc(c, 5)) { goto L_cfe0; }
    X86_TICK(c, 5);
    // 00cfdb  xchg dx, ax
    X86_AT(c, 0xcfdbu);
    { uint32_t t = (c.r[2] & 0xFFFFu); s16(c, 2, (c.r[0] & 0xFFFFu)); s16(c, 0, t); }
    // 00cfdd  neg bx
    X86_AT(c, 0xcfddu);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_neg(c, v, 2)); }
L_cfe0:
    X86_TICK(c, 4);
    // 00cfe0  mov dx, ax
    X86_AT(c, 0xcfe0u);
    s16(c, 2, (c.r[0] & 0xFFFFu));
    // 00cfe3  mov ax, cx
    X86_AT(c, 0xcfe3u);
    s16(c, 0, (c.r[1] & 0xFFFFu));
L_cfe6:
    X86_TICK(c, 13);
    // 00cfe6  push eax
    X86_AT(c, 0xcfe6u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 00cfe7  push ebx
    X86_AT(c, 0xcfe7u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 00cfe8  push edx
    X86_AT(c, 0xcfe8u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 00cfe9  call 0x5f54
    X86_AT(c, 0xcfe9u);
    push32(c, 0xcfeeu); f_00005f54(c); X86_RET(c, 0xcfeeu);
    X86_TICK(c, 25);
    // 00cfee  pop edx
    X86_AT(c, 0xcfeeu);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 00cfef  pop ebx
    X86_AT(c, 0xcfefu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 00cff0  pop eax
    X86_AT(c, 0xcff0u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 00cff1  add dx, bx
    X86_AT(c, 0xcff1u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
    // 00cff4  dec word ptr gs:[ebp + 0x434]
    X86_AT(c, 0xcff4u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x434u)); uint32_t v = rd16(ea); wr16(ea, x86_dec(c, v, 2)); }
    // 00cffc  jns 0xcfe6
    X86_AT(c, 0xcffcu);
    if (x86_cc(c, 9)) { X86_POLL(c, 0xcfe6u); goto L_cfe6; }
    X86_TICK(c, 4);
    // 00cffe  pop ebx
    X86_AT(c, 0xcffeu);
    { uint32_t v = pop32(c); c.r[3] = v; }
L_cfff:
    X86_TICK(c, 8);
    // 00cfff  pop eax
    X86_AT(c, 0xcfffu);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 00d000  pop edx
    X86_AT(c, 0xd000u);
    { uint32_t v = pop32(c); c.r[2] = v; }
L_d001:
    X86_TICK(c, 12);
    // 00d001  cmp byte ptr gs:[ebp + 0x41f], 1
    X86_AT(c, 0xd001u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x41Fu))), 0x1u, 0, 1);
    // 00d009  jne 0xd03b
    X86_AT(c, 0xd009u);
    if (x86_cc(c, 5)) { goto L_d03b; }
    X86_TICK(c, 26);
    // 00d00b  push eax
    X86_AT(c, 0xd00bu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 00d00c  mov al, byte ptr gs:[ebp + 0x4b8]
    X86_AT(c, 0xd00cu);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x4B8u))));
    // 00d013  mov byte ptr gs:[ebp + 0x4ca], al
    X86_AT(c, 0xd013u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x4CAu)), g8(c, 0));
    // 00d01a  and al, 1
    X86_AT(c, 0xd01au);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & 0x1u, 1)); }
    // 00d01c  mov byte ptr gs:[ebp + 0x4b8], al
    X86_AT(c, 0xd01cu);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x4B8u)), g8(c, 0));
    // 00d023  mov al, byte ptr gs:[ebp + 0x4b9]
    X86_AT(c, 0xd023u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x4B9u))));
    // 00d02a  mov byte ptr gs:[ebp + 0x4cb], al
    X86_AT(c, 0xd02au);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x4CBu)), g8(c, 0));
    // 00d031  and al, 1
    X86_AT(c, 0xd031u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & 0x1u, 1)); }
    // 00d033  mov byte ptr gs:[ebp + 0x4b9], al
    X86_AT(c, 0xd033u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x4B9u)), g8(c, 0));
    // 00d03a  pop eax
    X86_AT(c, 0xd03au);
    { uint32_t v = pop32(c); c.r[0] = v; }
L_d03b:
    X86_TICK(c, 12);
    // 00d03b  cmp byte ptr gs:[ebp + 0x41c], 0
    X86_AT(c, 0xd03bu);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x41Cu))), 0x0u, 0, 1);
    // 00d043  jne 0xd0a1
    X86_AT(c, 0xd043u);
    if (x86_cc(c, 5)) { goto L_d0a1; }
    X86_TICK(c, 12);
    // 00d045  cmp word ptr gs:[ebp + 0x47a], ax
    X86_AT(c, 0xd045u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x47Au))), (c.r[0] & 0xFFFFu), 0, 2);
    // 00d04d  jae 0xd0a1
    X86_AT(c, 0xd04du);
    if (x86_cc(c, 3)) { goto L_d0a1; }
    X86_TICK(c, 26);
    // 00d04f  push ebx
    X86_AT(c, 0xd04fu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 00d050  push edx
    X86_AT(c, 0xd050u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 00d051  push eax
    X86_AT(c, 0xd051u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 00d052  mov esi, dword ptr gs:[ebp + 0x48c]
    X86_AT(c, 0xd052u);
    c.r[6] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x48Cu)));
    // 00d059  mov edi, dword ptr gs:[ebp + 0x490]
    X86_AT(c, 0xd059u);
    c.r[7] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x490u)));
    // 00d060  cmp word ptr gs:[ebp + 0x47a], 0
    X86_AT(c, 0xd060u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x47Au))), 0x0u, 0, 2);
    // 00d069  jne 0xd072
    X86_AT(c, 0xd069u);
    if (x86_cc(c, 5)) { goto L_d072; }
    X86_TICK(c, 7);
    // 00d06b  call 0xd0ac
    X86_AT(c, 0xd06bu);
    push32(c, 0xd070u); f_0000d0ac(c); X86_RET(c, 0xd070u);
    X86_TICK(c, 7);
    // 00d070  jmp 0xd07c
    X86_AT(c, 0xd070u);
    goto L_d07c;
L_d072:
    X86_TICK(c, 7);
    // 00d072  call 0xd134
    X86_AT(c, 0xd072u);
    push32(c, 0xd077u); f_0000d134(c); X86_RET(c, 0xd077u);
    X86_TICK(c, 7);
    // 00d077  call 0xd31c
    X86_AT(c, 0xd077u);
    push32(c, 0xd07cu); f_0000d31c(c); X86_RET(c, 0xd07cu);
L_d07c:
    X86_TICK(c, 20);
    // 00d07c  pop eax
    X86_AT(c, 0xd07cu);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 00d07d  pop edx
    X86_AT(c, 0xd07du);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 00d07e  pop ebx
    X86_AT(c, 0xd07eu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 00d07f  mov word ptr gs:[ebp + 0x472], dx
    X86_AT(c, 0xd07fu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x472u)), (c.r[2] & 0xFFFFu));
    // 00d087  mov word ptr gs:[ebp + 0x474], dx
    X86_AT(c, 0xd087u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x474u)), (c.r[2] & 0xFFFFu));
    // 00d08f  mov word ptr gs:[ebp + 0x476], dx
    X86_AT(c, 0xd08fu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x476u)), (c.r[2] & 0xFFFFu));
    // 00d097  mov word ptr gs:[ebp + 0x478], 0
    X86_AT(c, 0xd097u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x478u)), 0x0u);
L_d0a1:
    X86_TICK(c, 7);
    // 00d0a1  jmp 0xc9cf
    X86_AT(c, 0xd0a1u);
    X86_POLL(c, 0xc9cfu); goto L_c9cf;
    x86_fault(c, 0xc824u, "ran off the end of a function");
}
}

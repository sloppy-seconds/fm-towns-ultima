#include "p_game_funcs.h"
namespace p_game {
void f_00051ecc(X86Cpu& c) {
    X86_TICK(c, 28);
    // 051ecc  pushal 
    X86_AT(c, 0x51eccu);
    { uint32_t sp = c.r[4]; for (int k = 0; k < 8; ++k) push32(c, k == 4 ? sp : c.r[k]); }
    // 051ecd  lea esi, [0x4a955]
    X86_AT(c, 0x51ecdu);
    c.r[6] = (uint32_t)(0x4A955u);
    // 051ed3  lea eax, [0x4aad5]
    X86_AT(c, 0x51ed3u);
    c.r[0] = (uint32_t)(0x4AAD5u);
    // 051ed9  mov bx, 0xe50
    X86_AT(c, 0x51ed9u);
    s16(c, 3, 0xE50u);
    // 051edd  mov ecx, 4
    X86_AT(c, 0x51eddu);
    c.r[1] = 0x4u;
    // 051ee2  mov dx, 1
    X86_AT(c, 0x51ee2u);
    s16(c, 2, 0x1u);
L_51ee6:
    X86_TICK(c, 82);
    // 051ee6  mov word ptr [esi + 0x10], 0
    X86_AT(c, 0x51ee6u);
    wr16((c.sbase[3] + (uint32_t)(c.r[6] + 0x10u)), 0x0u);
    // 051eec  mov dword ptr [esi], eax
    X86_AT(c, 0x51eecu);
    wr32((c.sbase[3] + (uint32_t)(c.r[6])), c.r[0]);
    // 051eee  mov dword ptr [esi + 8], eax
    X86_AT(c, 0x51eeeu);
    wr32((c.sbase[3] + (uint32_t)(c.r[6] + 0x8u)), c.r[0]);
    // 051ef1  mov dword ptr [esi + 0xc], eax
    X86_AT(c, 0x51ef1u);
    wr32((c.sbase[3] + (uint32_t)(c.r[6] + 0xCu)), c.r[0]);
    // 051ef4  add eax, 0x10
    X86_AT(c, 0x51ef4u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0x10u, 0, 4); }
    // 051ef9  mov dword ptr [esi + 4], eax
    X86_AT(c, 0x51ef9u);
    wr32((c.sbase[3] + (uint32_t)(c.r[6] + 0x4u)), c.r[0]);
    // 051efc  mov byte ptr [esi + 0x19], 0
    X86_AT(c, 0x51efcu);
    wr8((c.sbase[3] + (uint32_t)(c.r[6] + 0x19u)), 0x0u);
    // 051f00  mov byte ptr [esi + 0x1a], dl
    X86_AT(c, 0x51f00u);
    wr8((c.sbase[3] + (uint32_t)(c.r[6] + 0x1Au)), g8(c, 2));
    // 051f03  inc bx
    X86_AT(c, 0x51f03u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_inc(c, v, 2)); }
    // 051f05  mov word ptr [esi + 0x12], bx
    X86_AT(c, 0x51f05u);
    wr16((c.sbase[3] + (uint32_t)(c.r[6] + 0x12u)), (c.r[3] & 0xFFFFu));
    // 051f09  add bx, 2
    X86_AT(c, 0x51f09u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, 0x2u, 0, 2)); }
    // 051f0d  mov word ptr [esi + 0x14], bx
    X86_AT(c, 0x51f0du);
    wr16((c.sbase[3] + (uint32_t)(c.r[6] + 0x14u)), (c.r[3] & 0xFFFFu));
    // 051f11  inc bx
    X86_AT(c, 0x51f11u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_inc(c, v, 2)); }
    // 051f13  shl dl, 1
    X86_AT(c, 0x51f13u);
    { uint32_t v = g8(c, 2); bool w; uint32_t r = x86_shift(c, 4, v, 0x1u, 1, w); if (w) s8(c, 2, r); }
    // 051f15  add esi, 0x20
    X86_AT(c, 0x51f15u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x20u, 0, 4); }
    // 051f18  mov word ptr [esi + 0x10], 0
    X86_AT(c, 0x51f18u);
    wr16((c.sbase[3] + (uint32_t)(c.r[6] + 0x10u)), 0x0u);
    // 051f1e  mov dword ptr [esi], eax
    X86_AT(c, 0x51f1eu);
    wr32((c.sbase[3] + (uint32_t)(c.r[6])), c.r[0]);
    // 051f20  mov dword ptr [esi + 8], eax
    X86_AT(c, 0x51f20u);
    wr32((c.sbase[3] + (uint32_t)(c.r[6] + 0x8u)), c.r[0]);
    // 051f23  mov dword ptr [esi + 0xc], eax
    X86_AT(c, 0x51f23u);
    wr32((c.sbase[3] + (uint32_t)(c.r[6] + 0xCu)), c.r[0]);
    // 051f26  add eax, 0x10
    X86_AT(c, 0x51f26u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0x10u, 0, 4); }
    // 051f2b  mov dword ptr [esi + 4], eax
    X86_AT(c, 0x51f2bu);
    wr32((c.sbase[3] + (uint32_t)(c.r[6] + 0x4u)), c.r[0]);
    // 051f2e  mov byte ptr [esi + 0x19], 0
    X86_AT(c, 0x51f2eu);
    wr8((c.sbase[3] + (uint32_t)(c.r[6] + 0x19u)), 0x0u);
    // 051f32  mov byte ptr [esi + 0x1a], dl
    X86_AT(c, 0x51f32u);
    wr8((c.sbase[3] + (uint32_t)(c.r[6] + 0x1Au)), g8(c, 2));
    // 051f35  inc bx
    X86_AT(c, 0x51f35u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_inc(c, v, 2)); }
    // 051f37  mov word ptr [esi + 0x12], bx
    X86_AT(c, 0x51f37u);
    wr16((c.sbase[3] + (uint32_t)(c.r[6] + 0x12u)), (c.r[3] & 0xFFFFu));
    // 051f3b  inc bx
    X86_AT(c, 0x51f3bu);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_inc(c, v, 2)); }
    // 051f3d  inc bx
    X86_AT(c, 0x51f3du);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_inc(c, v, 2)); }
    // 051f3f  mov word ptr [esi + 0x14], bx
    X86_AT(c, 0x51f3fu);
    wr16((c.sbase[3] + (uint32_t)(c.r[6] + 0x14u)), (c.r[3] & 0xFFFFu));
    // 051f43  sub word ptr [esi + 0x14], 4
    X86_AT(c, 0x51f43u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[6] + 0x14u)); uint32_t v = rd16(ea); wr16(ea, x86_sub(c, v, 0x4u, 0, 2)); }
    // 051f48  inc bx
    X86_AT(c, 0x51f48u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_inc(c, v, 2)); }
    // 051f4a  shl dl, 1
    X86_AT(c, 0x51f4au);
    { uint32_t v = g8(c, 2); bool w; uint32_t r = x86_shift(c, 4, v, 0x1u, 1, w); if (w) s8(c, 2, r); }
    // 051f4c  add esi, 0x20
    X86_AT(c, 0x51f4cu);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x20u, 0, 4); }
    // 051f4f  loop 0x51ee6
    X86_AT(c, 0x51f4fu);
    c.r[1] -= 1; if (c.r[1] != 0) { X86_POLL(c, 0x51ee6u); goto L_51ee6; }
    X86_TICK(c, 34);
    // 051f51  popal 
    X86_AT(c, 0x51f51u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 051f52  ret 
    X86_AT(c, 0x51f52u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x51eccu, "ran off the end of a function");
}
void f_00051f53(X86Cpu& c) {
    X86_TICK(c, 28);
    // 051f53  pushal 
    X86_AT(c, 0x51f53u);
    { uint32_t sp = c.r[4]; for (int k = 0; k < 8; ++k) push32(c, k == 4 ? sp : c.r[k]); }
    // 051f54  lea esi, [0x4aa55]
    X86_AT(c, 0x51f54u);
    c.r[6] = (uint32_t)(0x4AA55u);
    // 051f5a  lea eax, [0x4ab55]
    X86_AT(c, 0x51f5au);
    c.r[0] = (uint32_t)(0x4AB55u);
    // 051f60  mov bx, 0xe50
    X86_AT(c, 0x51f60u);
    s16(c, 3, 0xE50u);
    // 051f64  mov ecx, 4
    X86_AT(c, 0x51f64u);
    c.r[1] = 0x4u;
    // 051f69  mov dx, 1
    X86_AT(c, 0x51f69u);
    s16(c, 2, 0x1u);
L_51f6d:
    X86_TICK(c, 44);
    // 051f6d  mov word ptr [esi + 0x10], 0
    X86_AT(c, 0x51f6du);
    wr16((c.sbase[3] + (uint32_t)(c.r[6] + 0x10u)), 0x0u);
    // 051f73  mov dword ptr [esi], eax
    X86_AT(c, 0x51f73u);
    wr32((c.sbase[3] + (uint32_t)(c.r[6])), c.r[0]);
    // 051f75  mov dword ptr [esi + 8], eax
    X86_AT(c, 0x51f75u);
    wr32((c.sbase[3] + (uint32_t)(c.r[6] + 0x8u)), c.r[0]);
    // 051f78  mov dword ptr [esi + 0xc], eax
    X86_AT(c, 0x51f78u);
    wr32((c.sbase[3] + (uint32_t)(c.r[6] + 0xCu)), c.r[0]);
    // 051f7b  add eax, 0x40
    X86_AT(c, 0x51f7bu);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0x40u, 0, 4); }
    // 051f80  mov dword ptr [esi + 4], eax
    X86_AT(c, 0x51f80u);
    wr32((c.sbase[3] + (uint32_t)(c.r[6] + 0x4u)), c.r[0]);
    // 051f83  mov byte ptr [esi + 0x19], 0
    X86_AT(c, 0x51f83u);
    wr8((c.sbase[3] + (uint32_t)(c.r[6] + 0x19u)), 0x0u);
    // 051f87  mov byte ptr [esi + 0x1a], dl
    X86_AT(c, 0x51f87u);
    wr8((c.sbase[3] + (uint32_t)(c.r[6] + 0x1Au)), g8(c, 2));
    // 051f8a  inc bx
    X86_AT(c, 0x51f8au);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_inc(c, v, 2)); }
    // 051f8c  mov word ptr [esi + 0x12], bx
    X86_AT(c, 0x51f8cu);
    wr16((c.sbase[3] + (uint32_t)(c.r[6] + 0x12u)), (c.r[3] & 0xFFFFu));
    // 051f90  add bx, 2
    X86_AT(c, 0x51f90u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, 0x2u, 0, 2)); }
    // 051f94  mov word ptr [esi + 0x14], bx
    X86_AT(c, 0x51f94u);
    wr16((c.sbase[3] + (uint32_t)(c.r[6] + 0x14u)), (c.r[3] & 0xFFFFu));
    // 051f98  inc bx
    X86_AT(c, 0x51f98u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_inc(c, v, 2)); }
    // 051f9a  shl dl, 1
    X86_AT(c, 0x51f9au);
    { uint32_t v = g8(c, 2); bool w; uint32_t r = x86_shift(c, 4, v, 0x1u, 1, w); if (w) s8(c, 2, r); }
    // 051f9c  add bx, 4
    X86_AT(c, 0x51f9cu);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, 0x4u, 0, 2)); }
    // 051fa0  add esi, 0x20
    X86_AT(c, 0x51fa0u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x20u, 0, 4); }
    // 051fa3  loop 0x51f6d
    X86_AT(c, 0x51fa3u);
    c.r[1] -= 1; if (c.r[1] != 0) { X86_POLL(c, 0x51f6du); goto L_51f6d; }
    X86_TICK(c, 34);
    // 051fa5  popal 
    X86_AT(c, 0x51fa5u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 051fa6  ret 
    X86_AT(c, 0x51fa6u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x51f53u, "ran off the end of a function");
}
void f_00051fa7(X86Cpu& c) {
    X86_TICK(c, 24);
    // 051fa7  pushal 
    X86_AT(c, 0x51fa7u);
    { uint32_t sp = c.r[4]; for (int k = 0; k < 8; ++k) push32(c, k == 4 ? sp : c.r[k]); }
    // 051fa8  xor cx, cx
    X86_AT(c, 0x51fa8u);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_logic(c, v ^ (c.r[1] & 0xFFFFu), 2)); }
    // 051fab  lea esi, [0x4aa55]
    X86_AT(c, 0x51fabu);
    c.r[6] = (uint32_t)(0x4AA55u);
    // 051fb1  lea edi, [0x4a955]
    X86_AT(c, 0x51fb1u);
    c.r[7] = (uint32_t)(0x4A955u);
L_51fb7:
    X86_TICK(c, 16);
    // 051fb7  mov dx, cx
    X86_AT(c, 0x51fb7u);
    s16(c, 2, (c.r[1] & 0xFFFFu));
    // 051fba  shl dx, 3
    X86_AT(c, 0x51fbau);
    { uint32_t v = (c.r[2] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 4, v, 0x3u, 2, w); if (w) s16(c, 2, r); }
    // 051fbe  add dx, 0xe51
    X86_AT(c, 0x51fbeu);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, 0xE51u, 0, 2)); }
    // 051fc3  mov al, 0
    X86_AT(c, 0x51fc3u);
    s8(c, 0, 0x0u);
    // 051fc5  call 0x5206d
    X86_AT(c, 0x51fc5u);
    push32(c, 0x51fcau); x86_call_known(c, 0x5206du, f_0005206d); X86_RET(c, 0x51fcau);
    X86_TICK(c, 7);
    // 051fca  call 0x5206d
    X86_AT(c, 0x51fcau);
    push32(c, 0x51fcfu); x86_call_known(c, 0x5206du, f_0005206d); X86_RET(c, 0x51fcfu);
    X86_TICK(c, 7);
    // 051fcf  call 0x5206d
    X86_AT(c, 0x51fcfu);
    push32(c, 0x51fd4u); x86_call_known(c, 0x5206du, f_0005206d); X86_RET(c, 0x51fd4u);
    X86_TICK(c, 9);
    // 051fd4  mov al, 0x40
    X86_AT(c, 0x51fd4u);
    s8(c, 0, 0x40u);
    // 051fd6  call 0x5206d
    X86_AT(c, 0x51fd6u);
    push32(c, 0x51fdbu); x86_call_known(c, 0x5206du, f_0005206d); X86_RET(c, 0x51fdbu);
    X86_TICK(c, 9);
    // 051fdb  mov al, 0x4e
    X86_AT(c, 0x51fdbu);
    s8(c, 0, 0x4Eu);
    // 051fdd  call 0x5206d
    X86_AT(c, 0x51fddu);
    push32(c, 0x51fe2u); x86_call_known(c, 0x5206du, f_0005206d); X86_RET(c, 0x51fe2u);
    X86_TICK(c, 9);
    // 051fe2  mov al, 0x37
    X86_AT(c, 0x51fe2u);
    s8(c, 0, 0x37u);
    // 051fe4  call 0x5206d
    X86_AT(c, 0x51fe4u);
    push32(c, 0x51fe9u); x86_call_known(c, 0x5206du, f_0005206d); X86_RET(c, 0x51fe9u);
    X86_TICK(c, 25);
    // 051fe9  mov byte ptr [esi + 0x18], 0
    X86_AT(c, 0x51fe9u);
    wr8((c.sbase[3] + (uint32_t)(c.r[6] + 0x18u)), 0x0u);
    // 051fed  mov byte ptr [edi + 0x18], 0
    X86_AT(c, 0x51fedu);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0x18u)), 0x0u);
    // 051ff1  mov byte ptr [edi + 0x38], 0
    X86_AT(c, 0x51ff1u);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0x38u)), 0x0u);
    // 051ff5  in al, dx
    X86_AT(c, 0x51ff5u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 051ff6  cmp al, 0xff
    X86_AT(c, 0x51ff6u);
    (void)x86_sub(c, g8(c, 0), 0xFFu, 0, 1);
    // 051ff8  je 0x5200a
    X86_AT(c, 0x51ff8u);
    if (x86_cc(c, 4)) { goto L_5200a; }
    X86_TICK(c, 6);
    // 051ffe  mov byte ptr [esi + 0x18], 0xff
    X86_AT(c, 0x51ffeu);
    wr8((c.sbase[3] + (uint32_t)(c.r[6] + 0x18u)), 0xFFu);
    // 052002  mov byte ptr [edi + 0x18], 0xff
    X86_AT(c, 0x52002u);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0x18u)), 0xFFu);
    // 052006  mov byte ptr [edi + 0x38], 0xff
    X86_AT(c, 0x52006u);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0x38u)), 0xFFu);
L_5200a:
    X86_TICK(c, 31);
    // 05200a  add esi, 0x20
    X86_AT(c, 0x5200au);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x20u, 0, 4); }
    // 05200d  add edi, 0x40
    X86_AT(c, 0x5200du);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x40u, 0, 4); }
    // 052010  add dx, 2
    X86_AT(c, 0x52010u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, 0x2u, 0, 2)); }
    // 052014  mov al, 1
    X86_AT(c, 0x52014u);
    s8(c, 0, 0x1u);
    // 052016  out dx, al
    X86_AT(c, 0x52016u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 052017  add dx, 2
    X86_AT(c, 0x52017u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, 0x2u, 0, 2)); }
    // 05201b  mov al, 0
    X86_AT(c, 0x5201bu);
    s8(c, 0, 0x0u);
    // 05201d  call 0x5206d
    X86_AT(c, 0x5201du);
    push32(c, 0x52022u); x86_call_known(c, 0x5206du, f_0005206d); X86_RET(c, 0x52022u);
    X86_TICK(c, 7);
    // 052022  call 0x5206d
    X86_AT(c, 0x52022u);
    push32(c, 0x52027u); x86_call_known(c, 0x5206du, f_0005206d); X86_RET(c, 0x52027u);
    X86_TICK(c, 7);
    // 052027  call 0x5206d
    X86_AT(c, 0x52027u);
    push32(c, 0x5202cu); x86_call_known(c, 0x5206du, f_0005206d); X86_RET(c, 0x5202cu);
    X86_TICK(c, 9);
    // 05202c  mov al, 0x40
    X86_AT(c, 0x5202cu);
    s8(c, 0, 0x40u);
    // 05202e  call 0x5206d
    X86_AT(c, 0x5202eu);
    push32(c, 0x52033u); x86_call_known(c, 0x5206du, f_0005206d); X86_RET(c, 0x52033u);
    X86_TICK(c, 9);
    // 052033  mov al, 0x4e
    X86_AT(c, 0x52033u);
    s8(c, 0, 0x4Eu);
    // 052035  call 0x5206d
    X86_AT(c, 0x52035u);
    push32(c, 0x5203au); x86_call_known(c, 0x5206du, f_0005206d); X86_RET(c, 0x5203au);
    X86_TICK(c, 9);
    // 05203a  mov al, 0x33
    X86_AT(c, 0x5203au);
    s8(c, 0, 0x33u);
    // 05203c  call 0x5206d
    X86_AT(c, 0x5203cu);
    push32(c, 0x52041u); x86_call_known(c, 0x5206du, f_0005206d); X86_RET(c, 0x52041u);
    X86_TICK(c, 9);
    // 052041  inc cx
    X86_AT(c, 0x52041u);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_inc(c, v, 2)); }
    // 052043  cmp cx, 4
    X86_AT(c, 0x52043u);
    (void)x86_sub(c, (c.r[1] & 0xFFFFu), 0x4u, 0, 2);
    // 052047  jb 0x51fb7
    X86_AT(c, 0x52047u);
    if (x86_cc(c, 2)) { X86_POLL(c, 0x51fb7u); goto L_51fb7; }
    X86_TICK(c, 16);
    // 05204d  mov byte ptr [0x4a929], 0
    X86_AT(c, 0x5204du);
    wr8((c.sbase[3] + (uint32_t)(0x4A929u)), 0x0u);
    // 052054  lea esi, [0x4aa55]
    X86_AT(c, 0x52054u);
    c.r[6] = (uint32_t)(0x4AA55u);
    // 05205a  cmp byte ptr [esi + 0x18], 0
    X86_AT(c, 0x5205au);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[6] + 0x18u))), 0x0u, 0, 1);
    // 05205e  je 0x5206b
    X86_AT(c, 0x5205eu);
    if (x86_cc(c, 4)) { goto L_5206b; }
    X86_TICK(c, 2);
    // 052064  mov byte ptr [0x4a929], 1
    X86_AT(c, 0x52064u);
    wr8((c.sbase[3] + (uint32_t)(0x4A929u)), 0x1u);
L_5206b:
    X86_TICK(c, 34);
    // 05206b  popal 
    X86_AT(c, 0x5206bu);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 05206c  ret 
    X86_AT(c, 0x5206cu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x51fa7u, "ran off the end of a function");
}
void f_0005206d(X86Cpu& c) {
    X86_TICK(c, 7);
    // 05206d  jmp 0x5206f
    X86_AT(c, 0x5206du);
    goto L_5206f;
L_5206f:
    X86_TICK(c, 19);
    // 05206f  out dx, al
    X86_AT(c, 0x5206fu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 052070  jmp 0x52072
    X86_AT(c, 0x52070u);
    goto L_52072;
L_52072:
    X86_TICK(c, 10);
    // 052072  ret 
    X86_AT(c, 0x52072u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x5206du, "ran off the end of a function");
}
void f_00052073(X86Cpu& c) {
    X86_TICK(c, 28);
    // 052073  pushal 
    X86_AT(c, 0x52073u);
    { uint32_t sp = c.r[4]; for (int k = 0; k < 8; ++k) push32(c, k == 4 ? sp : c.r[k]); }
    // 052074  pushf 
    X86_AT(c, 0x52074u);
    push16(c, c.fl & 0xFFFFu);
    // 052076  cli 
    X86_AT(c, 0x52076u);
    c.fl &= ~X86_IF;
    // 052077  mov ecx, 4
    X86_AT(c, 0x52077u);
    c.r[1] = 0x4u;
L_5207c:
    X86_TICK(c, 34);
    // 05207c  mov dx, cx
    X86_AT(c, 0x5207cu);
    s16(c, 2, (c.r[1] & 0xFFFFu));
    // 05207f  dec dx
    X86_AT(c, 0x5207fu);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_dec(c, v, 2)); }
    // 052081  shl dx, 3
    X86_AT(c, 0x52081u);
    { uint32_t v = (c.r[2] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 4, v, 0x3u, 2, w); if (w) s16(c, 2, r); }
    // 052085  add dx, 0xe53
    X86_AT(c, 0x52085u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, 0xE53u, 0, 2)); }
    // 05208a  mov al, 0
    X86_AT(c, 0x5208au);
    s8(c, 0, 0x0u);
    // 05208c  out dx, al
    X86_AT(c, 0x5208cu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 05208d  loop 0x5207c
    X86_AT(c, 0x5208du);
    c.r[1] -= 1; if (c.r[1] != 0) { X86_POLL(c, 0x5207cu); goto L_5207c; }
    X86_TICK(c, 40);
    // 05208f  popf 
    X86_AT(c, 0x5208fu);
    x86_popfd(c, 2);
    // 052091  popal 
    X86_AT(c, 0x52091u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 052092  ret 
    X86_AT(c, 0x52092u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x52073u, "ran off the end of a function");
}
void f_00052093(X86Cpu& c) {
    X86_TICK(c, 23);
    // 052093  push ax
    X86_AT(c, 0x52093u);
    { uint32_t v = (c.r[0] & 0xFFFFu); push16(c, v); }
    // 052095  push dx
    X86_AT(c, 0x52095u);
    { uint32_t v = (c.r[2] & 0xFFFFu); push16(c, v); }
    // 052097  pushf 
    X86_AT(c, 0x52097u);
    push16(c, c.fl & 0xFFFFu);
    // 052099  cli 
    X86_AT(c, 0x52099u);
    c.fl &= ~X86_IF;
    // 05209a  mov ax, word ptr [0x4a6fe]
    X86_AT(c, 0x5209au);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(0x4A6FEu))));
    // 0520a0  call 0x52102
    X86_AT(c, 0x520a0u);
    push32(c, 0x520a5u); x86_call_known(c, 0x52102u, f_00052102); X86_RET(c, 0x520a5u);
    X86_TICK(c, 46);
    // 0520a5  mov al, byte ptr [0x4a926]
    X86_AT(c, 0x520a5u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(0x4A926u))));
    // 0520aa  or al, 1
    X86_AT(c, 0x520aau);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v | 0x1u, 1)); }
    // 0520ac  mov dx, 0xe73
    X86_AT(c, 0x520acu);
    s16(c, 2, 0xE73u);
    // 0520b0  out dx, al
    X86_AT(c, 0x520b0u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 0520b1  mov byte ptr [0x4a926], al
    X86_AT(c, 0x520b1u);
    wr8((c.sbase[3] + (uint32_t)(0x4A926u)), g8(c, 0));
    // 0520b6  popf 
    X86_AT(c, 0x520b6u);
    x86_popfd(c, 2);
    // 0520b8  pop dx
    X86_AT(c, 0x520b8u);
    { uint32_t v = pop16(c); s16(c, 2, v); }
    // 0520ba  pop ax
    X86_AT(c, 0x520bau);
    { uint32_t v = pop16(c); s16(c, 0, v); }
    // 0520bc  ret 
    X86_AT(c, 0x520bcu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x52093u, "ran off the end of a function");
}
void f_000520d4(X86Cpu& c) {
    X86_TICK(c, 46);
    // 0520d4  pushf 
    X86_AT(c, 0x520d4u);
    push16(c, c.fl & 0xFFFFu);
    // 0520d6  cli 
    X86_AT(c, 0x520d6u);
    c.fl &= ~X86_IF;
    // 0520d7  mov al, byte ptr [0x4a926]
    X86_AT(c, 0x520d7u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(0x4A926u))));
    // 0520dc  and al, 0xfe
    X86_AT(c, 0x520dcu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & 0xFEu, 1)); }
    // 0520de  mov dx, 0xe73
    X86_AT(c, 0x520deu);
    s16(c, 2, 0xE73u);
    // 0520e2  out dx, al
    X86_AT(c, 0x520e2u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 0520e3  mov byte ptr [0x4a926], al
    X86_AT(c, 0x520e3u);
    wr8((c.sbase[3] + (uint32_t)(0x4A926u)), g8(c, 0));
    // 0520e8  popf 
    X86_AT(c, 0x520e8u);
    x86_popfd(c, 2);
    // 0520ea  ret 
    X86_AT(c, 0x520eau);
    c.eip = pop32(c); return;
    x86_fault(c, 0x520d4u, "ran off the end of a function");
}
void f_00052102(X86Cpu& c) {
    X86_TICK(c, 80);
    // 052102  push dx
    X86_AT(c, 0x52102u);
    { uint32_t v = (c.r[2] & 0xFFFFu); push16(c, v); }
    // 052104  pushf 
    X86_AT(c, 0x52104u);
    push16(c, c.fl & 0xFFFFu);
    // 052106  cli 
    X86_AT(c, 0x52106u);
    c.fl &= ~X86_IF;
    // 052107  mov dx, 0xe77
    X86_AT(c, 0x52107u);
    s16(c, 2, 0xE77u);
    // 05210b  push ax
    X86_AT(c, 0x5210bu);
    { uint32_t v = (c.r[0] & 0xFFFFu); push16(c, v); }
    // 05210d  mov al, 0x30
    X86_AT(c, 0x5210du);
    s8(c, 0, 0x30u);
    // 05210f  out dx, al
    X86_AT(c, 0x5210fu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 052110  pop ax
    X86_AT(c, 0x52110u);
    { uint32_t v = pop16(c); s16(c, 0, v); }
    // 052112  mov dx, 0xe74
    X86_AT(c, 0x52112u);
    s16(c, 2, 0xE74u);
    // 052116  out dx, al
    X86_AT(c, 0x52116u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 052117  mov al, ah
    X86_AT(c, 0x52117u);
    s8(c, 0, g8(c, 4));
    // 052119  out dx, al
    X86_AT(c, 0x52119u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 05211a  popf 
    X86_AT(c, 0x5211au);
    x86_popfd(c, 2);
    // 05211c  pop dx
    X86_AT(c, 0x5211cu);
    { uint32_t v = pop16(c); s16(c, 2, v); }
    // 05211e  ret 
    X86_AT(c, 0x5211eu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x52102u, "ran off the end of a function");
}
void f_0005211f(X86Cpu& c) {
    X86_TICK(c, 57);
    // 05211f  mov dx, 0xe77
    X86_AT(c, 0x5211fu);
    s16(c, 2, 0xE77u);
    // 052123  mov al, 0
    X86_AT(c, 0x52123u);
    s8(c, 0, 0x0u);
    // 052125  out dx, al
    X86_AT(c, 0x52125u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 052126  mov dx, 0xe74
    X86_AT(c, 0x52126u);
    s16(c, 2, 0xE74u);
    // 05212a  in al, dx
    X86_AT(c, 0x5212au);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 05212b  mov ah, al
    X86_AT(c, 0x5212bu);
    s8(c, 4, g8(c, 0));
    // 05212d  in al, dx
    X86_AT(c, 0x5212du);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 05212e  xchg ah, al
    X86_AT(c, 0x5212eu);
    { uint32_t t = g8(c, 4); s8(c, 4, g8(c, 0)); s8(c, 0, t); }
    // 052130  ret 
    X86_AT(c, 0x52130u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x5211fu, "ran off the end of a function");
}
void f_00052131(X86Cpu& c) {
    X86_TICK(c, 82);
    // 052131  push dx
    X86_AT(c, 0x52131u);
    { uint32_t v = (c.r[2] & 0xFFFFu); push16(c, v); }
    // 052133  mov dx, 0xe77
    X86_AT(c, 0x52133u);
    s16(c, 2, 0xE77u);
    // 052137  pushf 
    X86_AT(c, 0x52137u);
    push16(c, c.fl & 0xFFFFu);
    // 052139  cli 
    X86_AT(c, 0x52139u);
    c.fl &= ~X86_IF;
    // 05213a  push ax
    X86_AT(c, 0x5213au);
    { uint32_t v = (c.r[0] & 0xFFFFu); push16(c, v); }
    // 05213c  mov al, 0x70
    X86_AT(c, 0x5213cu);
    s8(c, 0, 0x70u);
    // 05213e  out dx, al
    X86_AT(c, 0x5213eu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 05213f  nop 
    X86_AT(c, 0x5213fu);
    // 052140  mov dx, 0xe75
    X86_AT(c, 0x52140u);
    s16(c, 2, 0xE75u);
    // 052144  pop ax
    X86_AT(c, 0x52144u);
    { uint32_t v = pop16(c); s16(c, 0, v); }
    // 052146  out dx, al
    X86_AT(c, 0x52146u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 052147  mov al, ah
    X86_AT(c, 0x52147u);
    s8(c, 0, g8(c, 4));
    // 052149  out dx, al
    X86_AT(c, 0x52149u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 05214a  popf 
    X86_AT(c, 0x5214au);
    x86_popfd(c, 2);
    // 05214c  pop dx
    X86_AT(c, 0x5214cu);
    { uint32_t v = pop16(c); s16(c, 2, v); }
    // 05214e  ret 
    X86_AT(c, 0x5214eu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x52131u, "ran off the end of a function");
}
void f_0005216f(X86Cpu& c) {
    X86_TICK(c, 12);
    // 05216f  cmp byte ptr [0x4a929], 0
    X86_AT(c, 0x5216fu);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0x4A929u))), 0x0u, 0, 1);
    // 052176  jne 0x521d8
    X86_AT(c, 0x52176u);
    if (x86_cc(c, 5)) { goto L_521d8; }
    X86_TICK(c, 13);
    // 05217c  push eax
    X86_AT(c, 0x5217cu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 05217d  push ebx
    X86_AT(c, 0x5217du);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 05217e  movzx ebx, al
    X86_AT(c, 0x5217eu);
    c.r[3] = g8(c, 0);
    // 052181  mov ax, word ptr cs:[ebx*2 + 0x519e4]
    X86_AT(c, 0x52181u);
    s16(c, 0, rd16((c.sbase[1] + (uint32_t)(c.r[3] * 2 + 0x519E4u))));
    // 05218a  mov bx, 0x10
    X86_AT(c, 0x5218au);
    s16(c, 3, 0x10u);
L_5218e:
    X86_TICK(c, 7);
    // 05218e  cmp ax, 0x7d
    X86_AT(c, 0x5218eu);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), 0x7Du, 0, 2);
    // 052192  ja 0x5219c
    X86_AT(c, 0x52192u);
    if (x86_cc(c, 7)) { goto L_5219c; }
    X86_TICK(c, 13);
    // 052194  shl ax, 1
    X86_AT(c, 0x52194u);
    { uint32_t v = (c.r[0] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 4, v, 0x1u, 2, w); if (w) s16(c, 0, r); }
    // 052197  shl bx, 1
    X86_AT(c, 0x52197u);
    { uint32_t v = (c.r[3] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 4, v, 0x1u, 2, w); if (w) s16(c, 3, r); }
    // 05219a  jmp 0x5218e
    X86_AT(c, 0x5219au);
    X86_POLL(c, 0x5218eu); goto L_5218e;
L_5219c:
    X86_TICK(c, 7);
    // 05219c  cmp ax, 0x3ff
    X86_AT(c, 0x5219cu);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), 0x3FFu, 0, 2);
    // 0521a0  jb 0x521ae
    X86_AT(c, 0x521a0u);
    if (x86_cc(c, 2)) { goto L_521ae; }
    X86_TICK(c, 13);
    // 0521a6  shr ax, 1
    X86_AT(c, 0x521a6u);
    { uint32_t v = (c.r[0] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 2, w); if (w) s16(c, 0, r); }
    // 0521a9  shr bx, 1
    X86_AT(c, 0x521a9u);
    { uint32_t v = (c.r[3] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 2, w); if (w) s16(c, 3, r); }
    // 0521ac  jmp 0x5219c
    X86_AT(c, 0x521acu);
    X86_POLL(c, 0x5219cu); goto L_5219c;
L_521ae:
    X86_TICK(c, 31);
    // 0521ae  pushf 
    X86_AT(c, 0x521aeu);
    push16(c, c.fl & 0xFFFFu);
    // 0521b0  cli 
    X86_AT(c, 0x521b0u);
    c.fl &= ~X86_IF;
    // 0521b1  mov word ptr [0x4a6fe], ax
    X86_AT(c, 0x521b1u);
    wr16((c.sbase[3] + (uint32_t)(0x4A6FEu)), (c.r[0] & 0xFFFFu));
    // 0521b7  mov word ptr [0x4a6f7], bx
    X86_AT(c, 0x521b7u);
    wr16((c.sbase[3] + (uint32_t)(0x4A6F7u)), (c.r[3] & 0xFFFFu));
    // 0521be  mov ecx, eax
    X86_AT(c, 0x521beu);
    c.r[1] = c.r[0];
    // 0521c0  sub ecx, 2
    X86_AT(c, 0x521c0u);
    { uint32_t v = c.r[1]; c.r[1] = x86_sub(c, v, 0x2u, 0, 4); }
    // 0521c3  neg ecx
    X86_AT(c, 0x521c3u);
    { uint32_t v = c.r[1]; c.r[1] = x86_neg(c, v, 4); }
    // 0521c5  mov bl, 0xff
    X86_AT(c, 0x521c5u);
    s8(c, 3, 0xFFu);
    // 0521c7  push ecx
    X86_AT(c, 0x521c7u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 0521c8  push ebx
    X86_AT(c, 0x521c8u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0521c9  call 0x503b1
    X86_AT(c, 0x521c9u);
    push32(c, 0x521ceu); x86_call_known(c, 0x503b1u, f_000503b1); X86_RET(c, 0x521ceu);
    X86_TICK(c, 15);
    // 0521ce  add esp, 8
    X86_AT(c, 0x521ceu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0521d1  popf 
    X86_AT(c, 0x521d1u);
    x86_popfd(c, 2);
    // 0521d3  jmp 0x5220c
    X86_AT(c, 0x521d3u);
    goto L_5220c;
L_521d8:
    X86_TICK(c, 13);
    // 0521d8  push eax
    X86_AT(c, 0x521d8u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0521d9  push ebx
    X86_AT(c, 0x521d9u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0521da  movzx ebx, al
    X86_AT(c, 0x521dau);
    c.r[3] = g8(c, 0);
    // 0521dd  mov ax, word ptr cs:[ebx*2 + 0x517e2]
    X86_AT(c, 0x521ddu);
    s16(c, 0, rd16((c.sbase[1] + (uint32_t)(c.r[3] * 2 + 0x517E2u))));
    // 0521e6  mov bx, 0x10
    X86_AT(c, 0x521e6u);
    s16(c, 3, 0x10u);
L_521ea:
    X86_TICK(c, 7);
    // 0521ea  cmp ax, 0x450
    X86_AT(c, 0x521eau);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), 0x450u, 0, 2);
    // 0521ee  ja 0x521fc
    X86_AT(c, 0x521eeu);
    if (x86_cc(c, 7)) { goto L_521fc; }
    X86_TICK(c, 13);
    // 0521f4  shl ax, 1
    X86_AT(c, 0x521f4u);
    { uint32_t v = (c.r[0] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 4, v, 0x1u, 2, w); if (w) s16(c, 0, r); }
    // 0521f7  shl bx, 1
    X86_AT(c, 0x521f7u);
    { uint32_t v = (c.r[3] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 4, v, 0x1u, 2, w); if (w) s16(c, 3, r); }
    // 0521fa  jmp 0x521ea
    X86_AT(c, 0x521fau);
    X86_POLL(c, 0x521eau); goto L_521ea;
L_521fc:
    X86_TICK(c, 18);
    // 0521fc  pushfd 
    X86_AT(c, 0x521fcu);
    push32(c, c.fl & 0x00FCFFFFu);
    // 0521fd  cli 
    X86_AT(c, 0x521fdu);
    c.fl &= ~X86_IF;
    // 0521fe  mov word ptr [0x4a6fe], ax
    X86_AT(c, 0x521feu);
    wr16((c.sbase[3] + (uint32_t)(0x4A6FEu)), (c.r[0] & 0xFFFFu));
    // 052204  mov word ptr [0x4a6f7], bx
    X86_AT(c, 0x52204u);
    wr16((c.sbase[3] + (uint32_t)(0x4A6F7u)), (c.r[3] & 0xFFFFu));
    // 05220b  popfd 
    X86_AT(c, 0x5220bu);
    x86_popfd(c, 4);
L_5220c:
    X86_TICK(c, 18);
    // 05220c  pop ebx
    X86_AT(c, 0x5220cu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 05220d  pop eax
    X86_AT(c, 0x5220du);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 05220e  ret 
    X86_AT(c, 0x5220eu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x5216fu, "ran off the end of a function");
}
void f_0005220f(X86Cpu& c) {
    X86_TICK(c, 26);
    // 05220f  push eax
    X86_AT(c, 0x5220fu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 052210  push ds
    X86_AT(c, 0x52210u);
    push32(c, c.sreg[3]);
    // 052211  push es
    X86_AT(c, 0x52211u);
    push32(c, c.sreg[0]);
    // 052212  mov ax, 0x14
    X86_AT(c, 0x52212u);
    s16(c, 0, 0x14u);
    // 052216  mov ds, eax
    X86_AT(c, 0x52216u);
    x86_load_seg(c, 3, (c.r[0] & 0xFFFFu) & 0xFFFFu);
    // 052218  mov es, eax
    X86_AT(c, 0x52218u);
    x86_load_seg(c, 0, (c.r[0] & 0xFFFFu) & 0xFFFFu);
    // 05221a  cld 
    X86_AT(c, 0x5221au);
    c.fl &= ~X86_DF;
    // 05221b  cmp byte ptr [0x4a948], 0
    X86_AT(c, 0x5221bu);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0x4A948u))), 0x0u, 0, 1);
    // 052222  jne 0x5223e
    X86_AT(c, 0x52222u);
    if (x86_cc(c, 5)) { goto L_5223e; }
    X86_TICK(c, 10);
    // 052228  mov dword ptr [0x4a94f], esp
    X86_AT(c, 0x52228u);
    wr32((c.sbase[3] + (uint32_t)(0x4A94Fu)), c.r[4]);
    // 05222e  mov word ptr [0x4a953], ss
    X86_AT(c, 0x5222eu);
    wr16((c.sbase[3] + (uint32_t)(0x4A953u)), (uint32_t)c.sreg[2]);
    // 052234  mov eax, ds
    X86_AT(c, 0x52234u);
    c.r[0] = (uint32_t)c.sreg[3];
    // 052236  mov ss, eax
    X86_AT(c, 0x52236u);
    x86_load_seg(c, 2, (c.r[0] & 0xFFFFu) & 0xFFFFu);
    // 052238  lea esp, [0x4b255]
    X86_AT(c, 0x52238u);
    c.r[4] = (uint32_t)(0x4B255u);
L_5223e:
    X86_TICK(c, 53);
    // 05223e  inc byte ptr [0x4a948]
    X86_AT(c, 0x5223eu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x4A948u)); uint32_t v = rd8(ea); wr8(ea, x86_inc(c, v, 1)); }
    // 052244  sti 
    X86_AT(c, 0x52244u);
    c.fl |= X86_IF;
    // 052245  push fs
    X86_AT(c, 0x52245u);
    push32(c, c.sreg[4]);
    // 052247  push gs
    X86_AT(c, 0x52247u);
    push32(c, c.sreg[5]);
    // 052249  pushal 
    X86_AT(c, 0x52249u);
    { uint32_t sp = c.r[4]; for (int k = 0; k < 8; ++k) push32(c, k == 4 ? sp : c.r[k]); }
    // 05224a  mov dx, 0xe70
    X86_AT(c, 0x5224au);
    s16(c, 2, 0xE70u);
    // 05224e  in ax, dx
    X86_AT(c, 0x5224eu);
    s16(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 2));
    // 052250  xor ax, 0xffff
    X86_AT(c, 0x52250u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_logic(c, v ^ 0xFFFFu, 2)); }
    // 052254  call 0x5231a
    X86_AT(c, 0x52254u);
    push32(c, 0x52259u); x86_call_known(c, 0x5231au, f_0005231a); X86_RET(c, 0x52259u);
    X86_TICK(c, 7);
    // 052259  call 0x52336
    X86_AT(c, 0x52259u);
    push32(c, 0x5225eu); x86_call_known(c, 0x52336u, f_00052336); X86_RET(c, 0x5225eu);
    X86_TICK(c, 7);
    // 05225e  call 0x52356
    X86_AT(c, 0x5225eu);
    push32(c, 0x52263u); x86_call_known(c, 0x52356u, f_00052356); X86_RET(c, 0x52263u);
    X86_TICK(c, 7);
    // 052263  call 0x5078d
    X86_AT(c, 0x52263u);
    push32(c, 0x52268u); x86_call_known(c, 0x5078du, f_0005078d); X86_RET(c, 0x52268u);
    X86_TICK(c, 45);
    // 052268  popal 
    X86_AT(c, 0x52268u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 052269  pop gs
    X86_AT(c, 0x52269u);
    x86_load_seg(c, 5, pop32(c) & 0xFFFFu);
    // 05226b  pop fs
    X86_AT(c, 0x5226bu);
    x86_load_seg(c, 4, pop32(c) & 0xFFFFu);
    // 05226d  cli 
    X86_AT(c, 0x5226du);
    c.fl &= ~X86_IF;
    // 05226e  dec byte ptr [0x4a948]
    X86_AT(c, 0x5226eu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x4A948u)); uint32_t v = rd8(ea); wr8(ea, x86_dec(c, v, 1)); }
    // 052274  jne 0x52286
    X86_AT(c, 0x52274u);
    if (x86_cc(c, 5)) { goto L_52286; }
    X86_TICK(c, 8);
    // 05227a  mov esp, dword ptr [0x4a94f]
    X86_AT(c, 0x5227au);
    c.r[4] = rd32((c.sbase[3] + (uint32_t)(0x4A94Fu)));
    // 052280  mov ss, word ptr [0x4a953]
    X86_AT(c, 0x52280u);
    x86_load_seg(c, 2, rd16((c.sbase[3] + (uint32_t)(0x4A953u))) & 0xFFFFu);
L_52286:
    X86_TICK(c, 18);
    // 052286  pop es
    X86_AT(c, 0x52286u);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 052287  pop ds
    X86_AT(c, 0x52287u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 052288  pop eax
    X86_AT(c, 0x52288u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 052289  iretd 
    X86_AT(c, 0x52289u);
    x86_iret(c, 4); return;
    x86_fault(c, 0x5220fu, "ran off the end of a function");
}
void f_0005228a(X86Cpu& c) {
    X86_TICK(c, 26);
    // 05228a  push eax
    X86_AT(c, 0x5228au);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 05228b  push ds
    X86_AT(c, 0x5228bu);
    push32(c, c.sreg[3]);
    // 05228c  push es
    X86_AT(c, 0x5228cu);
    push32(c, c.sreg[0]);
    // 05228d  mov ax, 0x14
    X86_AT(c, 0x5228du);
    s16(c, 0, 0x14u);
    // 052291  mov ds, eax
    X86_AT(c, 0x52291u);
    x86_load_seg(c, 3, (c.r[0] & 0xFFFFu) & 0xFFFFu);
    // 052293  mov es, eax
    X86_AT(c, 0x52293u);
    x86_load_seg(c, 0, (c.r[0] & 0xFFFFu) & 0xFFFFu);
    // 052295  cld 
    X86_AT(c, 0x52295u);
    c.fl &= ~X86_DF;
    // 052296  cmp byte ptr [0x4a947], 0
    X86_AT(c, 0x52296u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0x4A947u))), 0x0u, 0, 1);
    // 05229d  jne 0x522b9
    X86_AT(c, 0x5229du);
    if (x86_cc(c, 5)) { goto L_522b9; }
    X86_TICK(c, 10);
    // 0522a3  mov dword ptr [0x4a949], esp
    X86_AT(c, 0x522a3u);
    wr32((c.sbase[3] + (uint32_t)(0x4A949u)), c.r[4]);
    // 0522a9  mov word ptr [0x4a94d], ss
    X86_AT(c, 0x522a9u);
    wr16((c.sbase[3] + (uint32_t)(0x4A94Du)), (uint32_t)c.sreg[2]);
    // 0522af  mov eax, ds
    X86_AT(c, 0x522afu);
    c.r[0] = (uint32_t)c.sreg[3];
    // 0522b1  mov ss, eax
    X86_AT(c, 0x522b1u);
    x86_load_seg(c, 2, (c.r[0] & 0xFFFFu) & 0xFFFFu);
    // 0522b3  lea esp, [0x4b055]
    X86_AT(c, 0x522b3u);
    c.r[4] = (uint32_t)(0x4B055u);
L_522b9:
    X86_TICK(c, 51);
    // 0522b9  inc byte ptr [0x4a947]
    X86_AT(c, 0x522b9u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x4A947u)); uint32_t v = rd8(ea); wr8(ea, x86_inc(c, v, 1)); }
    // 0522bf  sti 
    X86_AT(c, 0x522bfu);
    c.fl |= X86_IF;
    // 0522c0  push fs
    X86_AT(c, 0x522c0u);
    push32(c, c.sreg[4]);
    // 0522c2  push gs
    X86_AT(c, 0x522c2u);
    push32(c, c.sreg[5]);
    // 0522c4  pushal 
    X86_AT(c, 0x522c4u);
    { uint32_t sp = c.r[4]; for (int k = 0; k < 8; ++k) push32(c, k == 4 ? sp : c.r[k]); }
    // 0522c5  mov dx, 0xe73
    X86_AT(c, 0x522c5u);
    s16(c, 2, 0xE73u);
    // 0522c9  in al, dx
    X86_AT(c, 0x522c9u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 0522ca  test al, 1
    X86_AT(c, 0x522cau);
    (void)x86_logic(c, g8(c, 0) & 0x1u, 1);
    // 0522cc  je 0x522d3
    X86_AT(c, 0x522ccu);
    if (x86_cc(c, 4)) { goto L_522d3; }
    X86_TICK(c, 7);
    // 0522ce  call 0x5237f
    X86_AT(c, 0x522ceu);
    push32(c, 0x522d3u); x86_call_known(c, 0x5237fu, f_0005237f); X86_RET(c, 0x522d3u);
L_522d3:
    X86_TICK(c, 7);
    // 0522d3  test al, 2
    X86_AT(c, 0x522d3u);
    (void)x86_logic(c, g8(c, 0) & 0x2u, 1);
    // 0522d5  je 0x522dc
    X86_AT(c, 0x522d5u);
    if (x86_cc(c, 4)) { goto L_522dc; }
    X86_TICK(c, 7);
    // 0522d7  call 0x523f4
    X86_AT(c, 0x522d7u);
    push32(c, 0x522dcu); x86_call_known(c, 0x523f4u, f_000523f4); X86_RET(c, 0x522dcu);
L_522dc:
    X86_TICK(c, 9);
    // 0522dc  cli 
    X86_AT(c, 0x522dcu);
    c.fl &= ~X86_IF;
    // 0522dd  call 0x5078d
    X86_AT(c, 0x522ddu);
    push32(c, 0x522e2u); x86_call_known(c, 0x5078du, f_0005078d); X86_RET(c, 0x522e2u);
    X86_TICK(c, 7);
    // 0522e2  test al, 1
    X86_AT(c, 0x522e2u);
    (void)x86_logic(c, g8(c, 0) & 0x1u, 1);
    // 0522e4  je 0x522f8
    X86_AT(c, 0x522e4u);
    if (x86_cc(c, 4)) { goto L_522f8; }
    X86_TICK(c, 7);
    // 0522e6  call 0x50787
    X86_AT(c, 0x522e6u);
    push32(c, 0x522ebu); x86_call_known(c, 0x50787u, f_00050787); X86_RET(c, 0x522ebu);
    X86_TICK(c, 7);
    // 0522eb  or al, al
    X86_AT(c, 0x522ebu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v | g8(c, 0), 1)); }
    // 0522ed  jne 0x522f8
    X86_AT(c, 0x522edu);
    if (x86_cc(c, 5)) { goto L_522f8; }
    X86_TICK(c, 7);
    // 0522f3  call 0x52520
    X86_AT(c, 0x522f3u);
    push32(c, 0x522f8u); x86_call_known(c, 0x52520u, f_00052520); X86_RET(c, 0x522f8u);
L_522f8:
    X86_TICK(c, 45);
    // 0522f8  popal 
    X86_AT(c, 0x522f8u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 0522f9  pop gs
    X86_AT(c, 0x522f9u);
    x86_load_seg(c, 5, pop32(c) & 0xFFFFu);
    // 0522fb  pop fs
    X86_AT(c, 0x522fbu);
    x86_load_seg(c, 4, pop32(c) & 0xFFFFu);
    // 0522fd  cli 
    X86_AT(c, 0x522fdu);
    c.fl &= ~X86_IF;
    // 0522fe  dec byte ptr [0x4a947]
    X86_AT(c, 0x522feu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x4A947u)); uint32_t v = rd8(ea); wr8(ea, x86_dec(c, v, 1)); }
    // 052304  jne 0x52316
    X86_AT(c, 0x52304u);
    if (x86_cc(c, 5)) { goto L_52316; }
    X86_TICK(c, 8);
    // 05230a  mov esp, dword ptr [0x4a949]
    X86_AT(c, 0x5230au);
    c.r[4] = rd32((c.sbase[3] + (uint32_t)(0x4A949u)));
    // 052310  mov ss, word ptr [0x4a94d]
    X86_AT(c, 0x52310u);
    x86_load_seg(c, 2, rd16((c.sbase[3] + (uint32_t)(0x4A94Du))) & 0xFFFFu);
L_52316:
    X86_TICK(c, 18);
    // 052316  pop es
    X86_AT(c, 0x52316u);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 052317  pop ds
    X86_AT(c, 0x52317u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 052318  pop eax
    X86_AT(c, 0x52318u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 052319  iretd 
    X86_AT(c, 0x52319u);
    x86_iret(c, 4); return;
    x86_fault(c, 0x5228au, "ran off the end of a function");
}
void f_0005231a(X86Cpu& c) {
    X86_TICK(c, 11);
    // 05231a  push ax
    X86_AT(c, 0x5231au);
    { uint32_t v = (c.r[0] & 0xFFFFu); push16(c, v); }
    // 05231c  mov al, ah
    X86_AT(c, 0x5231cu);
    s8(c, 0, g8(c, 4));
    // 05231e  and al, 0xf
    X86_AT(c, 0x5231eu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & 0xFu, 1)); }
    // 052320  je 0x52333
    X86_AT(c, 0x52320u);
    if (x86_cc(c, 4)) { goto L_52333; }
    X86_TICK(c, 2);
    // 052322  xor ecx, ecx
    X86_AT(c, 0x52322u);
    { uint32_t v = c.r[1]; c.r[1] = x86_logic(c, v ^ c.r[1], 4); }
L_52324:
    X86_TICK(c, 8);
    // 052324  shr al, 1
    X86_AT(c, 0x52324u);
    { uint32_t v = g8(c, 0); bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 1, w); if (w) s8(c, 0, r); }
    // 052326  jae 0x5232d
    X86_AT(c, 0x52326u);
    if (x86_cc(c, 3)) { goto L_5232d; }
    X86_TICK(c, 7);
    // 052328  call 0x52452
    X86_AT(c, 0x52328u);
    push32(c, 0x5232du); x86_call_known(c, 0x52452u, f_00052452); X86_RET(c, 0x5232du);
L_5232d:
    X86_TICK(c, 9);
    // 05232d  inc ecx
    X86_AT(c, 0x5232du);
    { uint32_t v = c.r[1]; c.r[1] = x86_inc(c, v, 4); }
    // 05232e  cmp ecx, 4
    X86_AT(c, 0x5232eu);
    (void)x86_sub(c, c.r[1], 0x4u, 0, 4);
    // 052331  jb 0x52324
    X86_AT(c, 0x52331u);
    if (x86_cc(c, 2)) { X86_POLL(c, 0x52324u); goto L_52324; }
L_52333:
    X86_TICK(c, 14);
    // 052333  pop ax
    X86_AT(c, 0x52333u);
    { uint32_t v = pop16(c); s16(c, 0, v); }
    // 052335  ret 
    X86_AT(c, 0x52335u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x5231au, "ran off the end of a function");
}
void f_00052336(X86Cpu& c) {
    X86_TICK(c, 9);
    // 052336  push ax
    X86_AT(c, 0x52336u);
    { uint32_t v = (c.r[0] & 0xFFFFu); push16(c, v); }
    // 052338  or al, al
    X86_AT(c, 0x52338u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v | g8(c, 0), 1)); }
    // 05233a  je 0x52353
    X86_AT(c, 0x5233au);
    if (x86_cc(c, 4)) { goto L_52353; }
    X86_TICK(c, 2);
    // 05233c  xor ecx, ecx
    X86_AT(c, 0x5233cu);
    { uint32_t v = c.r[1]; c.r[1] = x86_logic(c, v ^ c.r[1], 4); }
L_5233e:
    X86_TICK(c, 8);
    // 05233e  shr al, 1
    X86_AT(c, 0x5233eu);
    { uint32_t v = g8(c, 0); bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 1, w); if (w) s8(c, 0, r); }
    // 052340  jae 0x5234b
    X86_AT(c, 0x52340u);
    if (x86_cc(c, 3)) { goto L_5234b; }
    X86_TICK(c, 7);
    // 052346  call 0x524b2
    X86_AT(c, 0x52346u);
    push32(c, 0x5234bu); x86_call_known(c, 0x524b2u, f_000524b2); X86_RET(c, 0x5234bu);
L_5234b:
    X86_TICK(c, 9);
    // 05234b  inc cx
    X86_AT(c, 0x5234bu);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_inc(c, v, 2)); }
    // 05234d  cmp cx, 8
    X86_AT(c, 0x5234du);
    (void)x86_sub(c, (c.r[1] & 0xFFFFu), 0x8u, 0, 2);
    // 052351  jb 0x5233e
    X86_AT(c, 0x52351u);
    if (x86_cc(c, 2)) { X86_POLL(c, 0x5233eu); goto L_5233e; }
L_52353:
    X86_TICK(c, 14);
    // 052353  pop ax
    X86_AT(c, 0x52353u);
    { uint32_t v = pop16(c); s16(c, 0, v); }
    // 052355  ret 
    X86_AT(c, 0x52355u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x52336u, "ran off the end of a function");
}
void f_00052356(X86Cpu& c) {
    X86_TICK(c, 17);
    // 052356  push ax
    X86_AT(c, 0x52356u);
    { uint32_t v = (c.r[0] & 0xFFFFu); push16(c, v); }
    // 052358  mov al, ah
    X86_AT(c, 0x52358u);
    s8(c, 0, g8(c, 4));
    // 05235a  and al, 0xf0
    X86_AT(c, 0x5235au);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & 0xF0u, 1)); }
    // 05235c  and al, byte ptr [0x4a927]
    X86_AT(c, 0x5235cu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & rd8((c.sbase[3] + (uint32_t)(0x4A927u))), 1)); }
    // 052362  je 0x5237c
    X86_AT(c, 0x52362u);
    if (x86_cc(c, 4)) { goto L_5237c; }
    X86_TICK(c, 31);
    // 052364  or byte ptr [0x4a928], al
    X86_AT(c, 0x52364u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x4A928u)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | g8(c, 0), 1)); }
    // 05236a  xor al, 0xff
    X86_AT(c, 0x5236au);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ 0xFFu, 1)); }
    // 05236c  and al, byte ptr [0x4a927]
    X86_AT(c, 0x5236cu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & rd8((c.sbase[3] + (uint32_t)(0x4A927u))), 1)); }
    // 052372  mov dx, 0xe71
    X86_AT(c, 0x52372u);
    s16(c, 2, 0xE71u);
    // 052376  out dx, al
    X86_AT(c, 0x52376u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 052377  mov byte ptr [0x4a927], al
    X86_AT(c, 0x52377u);
    wr8((c.sbase[3] + (uint32_t)(0x4A927u)), g8(c, 0));
L_5237c:
    X86_TICK(c, 14);
    // 05237c  pop ax
    X86_AT(c, 0x5237cu);
    { uint32_t v = pop16(c); s16(c, 0, v); }
    // 05237e  ret 
    X86_AT(c, 0x5237eu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x52356u, "ran off the end of a function");
}
void f_0005237f(X86Cpu& c) {
    X86_TICK(c, 9);
    // 05237f  push ax
    X86_AT(c, 0x5237fu);
    { uint32_t v = (c.r[0] & 0xFFFFu); push16(c, v); }
    // 052381  call 0x5211f
    X86_AT(c, 0x52381u);
    push32(c, 0x52386u); x86_call_known(c, 0x5211fu, f_0005211f); X86_RET(c, 0x52386u);
    X86_TICK(c, 8);
    // 052386  sub ax, 8
    X86_AT(c, 0x52386u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_sub(c, v, 0x8u, 0, 2)); }
    // 05238a  mov dx, word ptr [0x4a6fe]
    X86_AT(c, 0x5238au);
    s16(c, 2, rd16((c.sbase[3] + (uint32_t)(0x4A6FEu))));
    // 052391  xor cx, cx
    X86_AT(c, 0x52391u);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_logic(c, v ^ (c.r[1] & 0xFFFFu), 2)); }
L_52394:
    X86_TICK(c, 9);
    // 052394  inc cx
    X86_AT(c, 0x52394u);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_inc(c, v, 2)); }
    // 052396  add ax, dx
    X86_AT(c, 0x52396u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, (c.r[2] & 0xFFFFu), 0, 2)); }
    // 052399  jae 0x52394
    X86_AT(c, 0x52399u);
    if (x86_cc(c, 3)) { X86_POLL(c, 0x52394u); goto L_52394; }
    X86_TICK(c, 7);
    // 05239b  call 0x52102
    X86_AT(c, 0x5239bu);
    push32(c, 0x523a0u); x86_call_known(c, 0x52102u, f_00052102); X86_RET(c, 0x523a0u);
    X86_TICK(c, 53);
    // 0523a0  mov ax, word ptr [0x4a6f7]
    X86_AT(c, 0x523a0u);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(0x4A6F7u))));
    // 0523a6  mul cl
    X86_AT(c, 0x523a6u);
    x86_mul(c, g8(c, 1), 1);
    // 0523a8  add ax, word ptr [0x4a6f5]
    X86_AT(c, 0x523a8u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[3] + (uint32_t)(0x4A6F5u))), 0, 2)); }
    // 0523af  mov cx, ax
    X86_AT(c, 0x523afu);
    s16(c, 1, (c.r[0] & 0xFFFFu));
    // 0523b2  and cx, 0xf
    X86_AT(c, 0x523b2u);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_logic(c, v & 0xFu, 2)); }
    // 0523b6  mov word ptr [0x4a6f5], cx
    X86_AT(c, 0x523b6u);
    wr16((c.sbase[3] + (uint32_t)(0x4A6F5u)), (c.r[1] & 0xFFFFu));
    // 0523bd  shr ax, 4
    X86_AT(c, 0x523bdu);
    { uint32_t v = (c.r[0] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 5, v, 0x4u, 2, w); if (w) s16(c, 0, r); }
    // 0523c1  sub byte ptr [0x4a6f4], al
    X86_AT(c, 0x523c1u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x4A6F4u)); uint32_t v = rd8(ea); wr8(ea, x86_sub(c, v, g8(c, 0), 0, 1)); }
    // 0523c7  jns 0x523d8
    X86_AT(c, 0x523c7u);
    if (x86_cc(c, 9)) { goto L_523d8; }
L_523c9:
    X86_TICK(c, 18);
    // 0523c9  inc byte ptr [0x4a6f3]
    X86_AT(c, 0x523c9u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x4A6F3u)); uint32_t v = rd8(ea); wr8(ea, x86_inc(c, v, 1)); }
    // 0523cf  add byte ptr [0x4a6f4], 4
    X86_AT(c, 0x523cfu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x4A6F4u)); uint32_t v = rd8(ea); wr8(ea, x86_add(c, v, 0x4u, 0, 1)); }
    // 0523d6  jae 0x523c9
    X86_AT(c, 0x523d6u);
    if (x86_cc(c, 3)) { X86_POLL(c, 0x523c9u); goto L_523c9; }
L_523d8:
    X86_TICK(c, 12);
    // 0523d8  cmp byte ptr [0x4a6e6], 0
    X86_AT(c, 0x523d8u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0x4A6E6u))), 0x0u, 0, 1);
    // 0523df  je 0x523f1
    X86_AT(c, 0x523dfu);
    if (x86_cc(c, 4)) { goto L_523f1; }
    X86_TICK(c, 12);
    // 0523e1  cmp byte ptr [0x4a6e8], 0
    X86_AT(c, 0x523e1u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0x4A6E8u))), 0x0u, 0, 1);
    // 0523e8  jne 0x523f1
    X86_AT(c, 0x523e8u);
    if (x86_cc(c, 5)) { goto L_523f1; }
    X86_TICK(c, 7);
    // 0523ea  add word ptr [0x4a6f9], ax
    X86_AT(c, 0x523eau);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x4A6F9u)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
L_523f1:
    X86_TICK(c, 14);
    // 0523f1  pop ax
    X86_AT(c, 0x523f1u);
    { uint32_t v = pop16(c); s16(c, 0, v); }
    // 0523f3  ret 
    X86_AT(c, 0x523f3u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x5237fu, "ran off the end of a function");
}
void f_000523f4(X86Cpu& c) {
    X86_TICK(c, 11);
    // 0523f4  push ax
    X86_AT(c, 0x523f4u);
    { uint32_t v = (c.r[0] & 0xFFFFu); push16(c, v); }
    // 0523f6  mov ax, 0xffff
    X86_AT(c, 0x523f6u);
    s16(c, 0, 0xFFFFu);
    // 0523fa  call 0x52131
    X86_AT(c, 0x523fau);
    push32(c, 0x523ffu); x86_call_known(c, 0x52131u, f_00052131); X86_RET(c, 0x523ffu);
    X86_TICK(c, 14);
    // 0523ff  pop ax
    X86_AT(c, 0x523ffu);
    { uint32_t v = pop16(c); s16(c, 0, v); }
    // 052401  ret 
    X86_AT(c, 0x52401u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x523f4u, "ran off the end of a function");
}
void f_00052402(X86Cpu& c) {
    X86_TICK(c, 31);
    // 052402  mov ax, word ptr [0x4a6f7]
    X86_AT(c, 0x52402u);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(0x4A6F7u))));
    // 052408  add ax, word ptr [0x4a6f5]
    X86_AT(c, 0x52408u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[3] + (uint32_t)(0x4A6F5u))), 0, 2)); }
    // 05240f  mov cx, ax
    X86_AT(c, 0x5240fu);
    s16(c, 1, (c.r[0] & 0xFFFFu));
    // 052412  and cx, 0xf
    X86_AT(c, 0x52412u);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_logic(c, v & 0xFu, 2)); }
    // 052416  mov word ptr [0x4a6f5], cx
    X86_AT(c, 0x52416u);
    wr16((c.sbase[3] + (uint32_t)(0x4A6F5u)), (c.r[1] & 0xFFFFu));
    // 05241d  shr ax, 4
    X86_AT(c, 0x5241du);
    { uint32_t v = (c.r[0] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 5, v, 0x4u, 2, w); if (w) s16(c, 0, r); }
    // 052421  sub byte ptr [0x4a6f4], al
    X86_AT(c, 0x52421u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x4A6F4u)); uint32_t v = rd8(ea); wr8(ea, x86_sub(c, v, g8(c, 0), 0, 1)); }
    // 052427  jns 0x52438
    X86_AT(c, 0x52427u);
    if (x86_cc(c, 9)) { goto L_52438; }
L_52429:
    X86_TICK(c, 18);
    // 052429  inc byte ptr [0x4a6f3]
    X86_AT(c, 0x52429u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x4A6F3u)); uint32_t v = rd8(ea); wr8(ea, x86_inc(c, v, 1)); }
    // 05242f  add byte ptr [0x4a6f4], 4
    X86_AT(c, 0x5242fu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x4A6F4u)); uint32_t v = rd8(ea); wr8(ea, x86_add(c, v, 0x4u, 0, 1)); }
    // 052436  jae 0x52429
    X86_AT(c, 0x52436u);
    if (x86_cc(c, 3)) { X86_POLL(c, 0x52429u); goto L_52429; }
L_52438:
    X86_TICK(c, 12);
    // 052438  cmp byte ptr [0x4a6e6], 0
    X86_AT(c, 0x52438u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0x4A6E6u))), 0x0u, 0, 1);
    // 05243f  je 0x52451
    X86_AT(c, 0x5243fu);
    if (x86_cc(c, 4)) { goto L_52451; }
    X86_TICK(c, 12);
    // 052441  cmp byte ptr [0x4a6e8], 0
    X86_AT(c, 0x52441u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0x4A6E8u))), 0x0u, 0, 1);
    // 052448  jne 0x52451
    X86_AT(c, 0x52448u);
    if (x86_cc(c, 5)) { goto L_52451; }
    X86_TICK(c, 7);
    // 05244a  add word ptr [0x4a6f9], ax
    X86_AT(c, 0x5244au);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x4A6F9u)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
L_52451:
    X86_TICK(c, 10);
    // 052451  ret 
    X86_AT(c, 0x52451u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x52402u, "ran off the end of a function");
}
void f_00052452(X86Cpu& c) {
    X86_TICK(c, 32);
    // 052452  push ax
    X86_AT(c, 0x52452u);
    { uint32_t v = (c.r[0] & 0xFFFFu); push16(c, v); }
    // 052454  mov ebx, ecx
    X86_AT(c, 0x52454u);
    c.r[3] = c.r[1];
    // 052456  shl ebx, 5
    X86_AT(c, 0x52456u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[3] = r; }
    // 052459  lea ebx, [ebx + 0x4aa55]
    X86_AT(c, 0x52459u);
    c.r[3] = (uint32_t)(c.r[3] + 0x4AA55u);
    // 05245f  mov dx, word ptr [ebx + 0x14]
    X86_AT(c, 0x5245fu);
    s16(c, 2, rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x14u))));
    // 052463  in al, dx
    X86_AT(c, 0x52463u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 052464  test al, 4
    X86_AT(c, 0x52464u);
    (void)x86_logic(c, g8(c, 0) & 0x4u, 1);
    // 052466  je 0x52480
    X86_AT(c, 0x52466u);
    if (x86_cc(c, 4)) { goto L_52480; }
    X86_TICK(c, 6);
    // 052468  mov byte ptr [ebx + 0x19], 0x10
    X86_AT(c, 0x52468u);
    wr8((c.sbase[3] + (uint32_t)(c.r[3] + 0x19u)), 0x10u);
    // 05246c  mov dx, word ptr [ebx + 0x14]
    X86_AT(c, 0x5246cu);
    s16(c, 2, rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x14u))));
L_52470:
    X86_TICK(c, 19);
    // 052470  in al, dx
    X86_AT(c, 0x52470u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 052471  test al, 1
    X86_AT(c, 0x52471u);
    (void)x86_logic(c, g8(c, 0) & 0x1u, 1);
    // 052473  jne 0x52470
    X86_AT(c, 0x52473u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x52470u); goto L_52470; }
    X86_TICK(c, 24);
    // 052475  push dx
    X86_AT(c, 0x52475u);
    { uint32_t v = (c.r[2] & 0xFFFFu); push16(c, v); }
    // 052477  mov dx, word ptr [ebx + 0x12]
    X86_AT(c, 0x52477u);
    s16(c, 2, rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x12u))));
    // 05247b  mov al, 0x37
    X86_AT(c, 0x5247bu);
    s8(c, 0, 0x37u);
    // 05247d  out dx, al
    X86_AT(c, 0x5247du);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 05247e  pop dx
    X86_AT(c, 0x5247eu);
    { uint32_t v = pop16(c); s16(c, 2, v); }
L_52480:
    X86_TICK(c, 19);
    // 052480  in al, dx
    X86_AT(c, 0x52480u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 052481  test al, 2
    X86_AT(c, 0x52481u);
    (void)x86_logic(c, g8(c, 0) & 0x2u, 1);
    // 052483  jne 0x52480
    X86_AT(c, 0x52483u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x52480u); goto L_52480; }
    X86_TICK(c, 21);
    // 052485  dec dx
    X86_AT(c, 0x52485u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_dec(c, v, 2)); }
    // 052487  in al, dx
    X86_AT(c, 0x52487u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 052488  cmp al, 0xf8
    X86_AT(c, 0x52488u);
    (void)x86_sub(c, g8(c, 0), 0xF8u, 0, 1);
    // 05248a  jb 0x52490
    X86_AT(c, 0x5248au);
    if (x86_cc(c, 2)) { goto L_52490; }
    X86_TICK(c, 9);
    // 05248c  mov bl, cl
    X86_AT(c, 0x5248cu);
    s8(c, 3, g8(c, 1));
    // 05248e  jmp 0x524af
    X86_AT(c, 0x5248eu);
    goto L_524af;
L_52490:
    X86_TICK(c, 12);
    // 052490  cmp word ptr [ebx + 0x10], 0x40
    X86_AT(c, 0x52490u);
    (void)x86_sub(c, rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u))), 0x40u, 0, 2);
    // 052495  jb 0x5249d
    X86_AT(c, 0x52495u);
    if (x86_cc(c, 2)) { goto L_5249d; }
    X86_TICK(c, 9);
    // 052497  mov byte ptr [ebx + 0x19], 0x10
    X86_AT(c, 0x52497u);
    wr8((c.sbase[3] + (uint32_t)(c.r[3] + 0x19u)), 0x10u);
    // 05249b  jmp 0x524af
    X86_AT(c, 0x5249bu);
    goto L_524af;
L_5249d:
    X86_TICK(c, 28);
    // 05249d  mov edi, dword ptr [ebx + 8]
    X86_AT(c, 0x5249du);
    c.r[7] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x8u)));
    // 0524a0  stosb byte ptr es:[edi], al
    X86_AT(c, 0x524a0u);
    x86_string(c, 2, 1, 0, 4, 3);
    // 0524a1  inc word ptr [ebx + 0x10]
    X86_AT(c, 0x524a1u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3] + 0x10u)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
    // 0524a5  cmp edi, dword ptr [ebx + 4]
    X86_AT(c, 0x524a5u);
    (void)x86_sub(c, c.r[7], rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u))), 0, 4);
    // 0524a8  jne 0x524ac
    X86_AT(c, 0x524a8u);
    if (x86_cc(c, 5)) { goto L_524ac; }
    X86_TICK(c, 4);
    // 0524aa  mov edi, dword ptr [ebx]
    X86_AT(c, 0x524aau);
    c.r[7] = rd32((c.sbase[3] + (uint32_t)(c.r[3])));
L_524ac:
    X86_TICK(c, 2);
    // 0524ac  mov dword ptr [ebx + 8], edi
    X86_AT(c, 0x524acu);
    wr32((c.sbase[3] + (uint32_t)(c.r[3] + 0x8u)), c.r[7]);
L_524af:
    X86_TICK(c, 14);
    // 0524af  pop ax
    X86_AT(c, 0x524afu);
    { uint32_t v = pop16(c); s16(c, 0, v); }
    // 0524b1  ret 
    X86_AT(c, 0x524b1u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x52452u, "ran off the end of a function");
}
void f_000524b2(X86Cpu& c) {
    X86_TICK(c, 20);
    // 0524b2  push ax
    X86_AT(c, 0x524b2u);
    { uint32_t v = (c.r[0] & 0xFFFFu); push16(c, v); }
    // 0524b4  mov ebx, ecx
    X86_AT(c, 0x524b4u);
    c.r[3] = c.r[1];
    // 0524b6  shl ebx, 5
    X86_AT(c, 0x524b6u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[3] = r; }
    // 0524b9  lea ebx, [ebx + 0x4a955]
    X86_AT(c, 0x524b9u);
    c.r[3] = (uint32_t)(c.r[3] + 0x4A955u);
    // 0524bf  dec word ptr [ebx + 0x10]
    X86_AT(c, 0x524bfu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3] + 0x10u)); uint32_t v = rd16(ea); wr16(ea, x86_dec(c, v, 2)); }
    // 0524c3  js 0x52504
    X86_AT(c, 0x524c3u);
    if (x86_cc(c, 8)) { goto L_52504; }
    X86_TICK(c, 4);
    // 0524c9  mov dx, word ptr [ebx + 0x14]
    X86_AT(c, 0x524c9u);
    s16(c, 2, rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x14u))));
L_524cd:
    X86_TICK(c, 37);
    // 0524cd  mov al, 1
    X86_AT(c, 0x524cdu);
    s8(c, 0, 0x1u);
    // 0524cf  out dx, al
    X86_AT(c, 0x524cfu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 0524d0  nop 
    X86_AT(c, 0x524d0u);
    // 0524d1  nop 
    X86_AT(c, 0x524d1u);
    // 0524d2  in al, dx
    X86_AT(c, 0x524d2u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 0524d3  test al, 1
    X86_AT(c, 0x524d3u);
    (void)x86_logic(c, g8(c, 0) & 0x1u, 1);
    // 0524d5  jne 0x524cd
    X86_AT(c, 0x524d5u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x524cdu); goto L_524cd; }
    X86_TICK(c, 35);
    // 0524d7  out dx, al
    X86_AT(c, 0x524d7u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 0524d8  nop 
    X86_AT(c, 0x524d8u);
    // 0524d9  nop 
    X86_AT(c, 0x524d9u);
    // 0524da  in al, dx
    X86_AT(c, 0x524dau);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 0524db  test al, 1
    X86_AT(c, 0x524dbu);
    (void)x86_logic(c, g8(c, 0) & 0x1u, 1);
    // 0524dd  jne 0x524cd
    X86_AT(c, 0x524ddu);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x524cdu); goto L_524cd; }
    X86_TICK(c, 60);
    // 0524df  push dx
    X86_AT(c, 0x524dfu);
    { uint32_t v = (c.r[2] & 0xFFFFu); push16(c, v); }
    // 0524e1  mov esi, dword ptr [ebx + 0xc]
    X86_AT(c, 0x524e1u);
    c.r[6] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0xCu)));
    // 0524e4  lodsb al, byte ptr [esi]
    X86_AT(c, 0x524e4u);
    x86_string(c, 3, 1, 0, 4, 3);
    // 0524e5  mov dx, word ptr [ebx + 0x12]
    X86_AT(c, 0x524e5u);
    s16(c, 2, rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x12u))));
    // 0524e9  dec dx
    X86_AT(c, 0x524e9u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_dec(c, v, 2)); }
    // 0524eb  out dx, al
    X86_AT(c, 0x524ebu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 0524ec  pop dx
    X86_AT(c, 0x524ecu);
    { uint32_t v = pop16(c); s16(c, 2, v); }
    // 0524ee  mov al, 1
    X86_AT(c, 0x524eeu);
    s8(c, 0, 0x1u);
    // 0524f0  out dx, al
    X86_AT(c, 0x524f0u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 0524f1  cmp esi, dword ptr [ebx + 4]
    X86_AT(c, 0x524f1u);
    (void)x86_sub(c, c.r[6], rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u))), 0, 4);
    // 0524f4  jne 0x524fc
    X86_AT(c, 0x524f4u);
    if (x86_cc(c, 5)) { goto L_524fc; }
    X86_TICK(c, 4);
    // 0524fa  mov esi, dword ptr [ebx]
    X86_AT(c, 0x524fau);
    c.r[6] = rd32((c.sbase[3] + (uint32_t)(c.r[3])));
L_524fc:
    X86_TICK(c, 9);
    // 0524fc  mov dword ptr [ebx + 0xc], esi
    X86_AT(c, 0x524fcu);
    wr32((c.sbase[3] + (uint32_t)(c.r[3] + 0xCu)), c.r[6]);
    // 0524ff  jmp 0x5251d
    X86_AT(c, 0x524ffu);
    goto L_5251d;
L_52504:
    X86_TICK(c, 34);
    // 052504  inc word ptr [ebx + 0x10]
    X86_AT(c, 0x52504u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3] + 0x10u)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
    // 052508  mov al, byte ptr [ebx + 0x1a]
    X86_AT(c, 0x52508u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0x1Au))));
    // 05250b  xor al, 0xff
    X86_AT(c, 0x5250bu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ 0xFFu, 1)); }
    // 05250d  and al, byte ptr [0x4a925]
    X86_AT(c, 0x5250du);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & rd8((c.sbase[3] + (uint32_t)(0x4A925u))), 1)); }
    // 052513  mov byte ptr [0x4a925], al
    X86_AT(c, 0x52513u);
    wr8((c.sbase[3] + (uint32_t)(0x4A925u)), g8(c, 0));
    // 052518  mov dx, 0xe70
    X86_AT(c, 0x52518u);
    s16(c, 2, 0xE70u);
    // 05251c  out dx, al
    X86_AT(c, 0x5251cu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
L_5251d:
    X86_TICK(c, 14);
    // 05251d  pop ax
    X86_AT(c, 0x5251du);
    { uint32_t v = pop16(c); s16(c, 0, v); }
    // 05251f  ret 
    X86_AT(c, 0x5251fu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x524b2u, "ran off the end of a function");
}
void f_00052520(X86Cpu& c) {
    X86_TICK(c, 14);
    // 052520  cli 
    X86_AT(c, 0x52520u);
    c.fl &= ~X86_IF;
    // 052521  cmp byte ptr [0x4a946], 0
    X86_AT(c, 0x52521u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0x4A946u))), 0x0u, 0, 1);
    // 052528  jne 0x52580
    X86_AT(c, 0x52528u);
    if (x86_cc(c, 5)) { goto L_52580; }
    X86_TICK(c, 14);
    // 05252a  mov byte ptr [0x4a946], 0xff
    X86_AT(c, 0x5252au);
    wr8((c.sbase[3] + (uint32_t)(0x4A946u)), 0xFFu);
    // 052531  cmp byte ptr [0x4a947], 0
    X86_AT(c, 0x52531u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0x4A947u))), 0x0u, 0, 1);
    // 052538  jne 0x52554
    X86_AT(c, 0x52538u);
    if (x86_cc(c, 5)) { goto L_52554; }
    X86_TICK(c, 10);
    // 05253e  mov dword ptr [0x4a949], esp
    X86_AT(c, 0x5253eu);
    wr32((c.sbase[3] + (uint32_t)(0x4A949u)), c.r[4]);
    // 052544  mov word ptr [0x4a94d], ss
    X86_AT(c, 0x52544u);
    wr16((c.sbase[3] + (uint32_t)(0x4A94Du)), (uint32_t)c.sreg[2]);
    // 05254a  mov eax, ds
    X86_AT(c, 0x5254au);
    c.r[0] = (uint32_t)c.sreg[3];
    // 05254c  mov ss, eax
    X86_AT(c, 0x5254cu);
    x86_load_seg(c, 2, (c.r[0] & 0xFFFFu) & 0xFFFFu);
    // 05254e  lea esp, [0x4b055]
    X86_AT(c, 0x5254eu);
    c.r[4] = (uint32_t)(0x4B055u);
L_52554:
    X86_TICK(c, 15);
    // 052554  inc byte ptr [0x4a947]
    X86_AT(c, 0x52554u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x4A947u)); uint32_t v = rd8(ea); wr8(ea, x86_inc(c, v, 1)); }
    // 05255a  sti 
    X86_AT(c, 0x5255au);
    c.fl |= X86_IF;
    // 05255b  call 0x511ee
    X86_AT(c, 0x5255bu);
    push32(c, 0x52560u); x86_call_known(c, 0x511eeu, f_000511ee); X86_RET(c, 0x52560u);
    X86_TICK(c, 13);
    // 052560  cli 
    X86_AT(c, 0x52560u);
    c.fl &= ~X86_IF;
    // 052561  dec byte ptr [0x4a947]
    X86_AT(c, 0x52561u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x4A947u)); uint32_t v = rd8(ea); wr8(ea, x86_dec(c, v, 1)); }
    // 052567  jne 0x52579
    X86_AT(c, 0x52567u);
    if (x86_cc(c, 5)) { goto L_52579; }
    X86_TICK(c, 8);
    // 05256d  mov esp, dword ptr [0x4a949]
    X86_AT(c, 0x5256du);
    c.r[4] = rd32((c.sbase[3] + (uint32_t)(0x4A949u)));
    // 052573  mov ss, word ptr [0x4a94d]
    X86_AT(c, 0x52573u);
    x86_load_seg(c, 2, rd16((c.sbase[3] + (uint32_t)(0x4A94Du))) & 0xFFFFu);
L_52579:
    X86_TICK(c, 2);
    // 052579  mov byte ptr [0x4a946], 0
    X86_AT(c, 0x52579u);
    wr8((c.sbase[3] + (uint32_t)(0x4A946u)), 0x0u);
L_52580:
    X86_TICK(c, 10);
    // 052580  ret 
    X86_AT(c, 0x52580u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x52520u, "ran off the end of a function");
}
void f_00052590(X86Cpu& c) {
    X86_TICK(c, 70);
    // 052590  push es
    X86_AT(c, 0x52590u);
    push32(c, c.sreg[0]);
    // 052591  pushal 
    X86_AT(c, 0x52591u);
    { uint32_t sp = c.r[4]; for (int k = 0; k < 8; ++k) push32(c, k == 4 ? sp : c.r[k]); }
    // 052592  push ds
    X86_AT(c, 0x52592u);
    push32(c, c.sreg[3]);
    // 052593  pop es
    X86_AT(c, 0x52593u);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 052594  cld 
    X86_AT(c, 0x52594u);
    c.fl &= ~X86_DF;
    // 052595  xor eax, eax
    X86_AT(c, 0x52595u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v ^ c.r[0], 4); }
    // 052597  mov byte ptr [0x4b260], al
    X86_AT(c, 0x52597u);
    wr8((c.sbase[3] + (uint32_t)(0x4B260u)), g8(c, 0));
    // 05259c  mov byte ptr [0x4b261], al
    X86_AT(c, 0x5259cu);
    wr8((c.sbase[3] + (uint32_t)(0x4B261u)), g8(c, 0));
    // 0525a1  mov byte ptr [0x4b262], al
    X86_AT(c, 0x525a1u);
    wr8((c.sbase[3] + (uint32_t)(0x4B262u)), g8(c, 0));
    // 0525a6  mov byte ptr [0x4b263], al
    X86_AT(c, 0x525a6u);
    wr8((c.sbase[3] + (uint32_t)(0x4B263u)), g8(c, 0));
    // 0525ab  mov byte ptr [0x4b264], al
    X86_AT(c, 0x525abu);
    wr8((c.sbase[3] + (uint32_t)(0x4B264u)), g8(c, 0));
    // 0525b0  lea edi, [0x4b265]
    X86_AT(c, 0x525b0u);
    c.r[7] = (uint32_t)(0x4B265u);
    // 0525b6  mov ecx, 4
    X86_AT(c, 0x525b6u);
    c.r[1] = 0x4u;
    // 0525bb  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x525bbu);
    x86_string(c, 2, 4, 243, 4, 3);
    // 0525bd  not eax
    X86_AT(c, 0x525bdu);
    { uint32_t v = c.r[0]; c.r[0] = ~v & 0xFFFFFFFFu; }
    // 0525bf  lea edi, [0x4b275]
    X86_AT(c, 0x525bfu);
    c.r[7] = (uint32_t)(0x4B275u);
    // 0525c5  mov ecx, 4
    X86_AT(c, 0x525c5u);
    c.r[1] = 0x4u;
    // 0525ca  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x525cau);
    x86_string(c, 2, 4, 243, 4, 3);
    // 0525cc  xor al, al
    X86_AT(c, 0x525ccu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 0525ce  mov ecx, 0x80
    X86_AT(c, 0x525ceu);
    c.r[1] = 0x80u;
    // 0525d3  lea edi, [0x4b285]
    X86_AT(c, 0x525d3u);
    c.r[7] = (uint32_t)(0x4B285u);
L_525d9:
    X86_TICK(c, 21);
    // 0525d9  mov byte ptr [edi], ah
    X86_AT(c, 0x525d9u);
    wr8((c.sbase[3] + (uint32_t)(c.r[7])), g8(c, 4));
    // 0525db  mov byte ptr [edi + 1], ah
    X86_AT(c, 0x525dbu);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0x1u)), g8(c, 4));
    // 0525de  mov byte ptr [edi + 2], al
    X86_AT(c, 0x525deu);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0x2u)), g8(c, 0));
    // 0525e1  mov byte ptr [edi + 3], al
    X86_AT(c, 0x525e1u);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0x3u)), g8(c, 0));
    // 0525e4  add edi, 4
    X86_AT(c, 0x525e4u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x4u, 0, 4); }
    // 0525e7  loop 0x525d9
    X86_AT(c, 0x525e7u);
    c.r[1] -= 1; if (c.r[1] != 0) { X86_POLL(c, 0x525d9u); goto L_525d9; }
    X86_TICK(c, 6);
    // 0525e9  mov ecx, 6
    X86_AT(c, 0x525e9u);
    c.r[1] = 0x6u;
    // 0525ee  xor dl, dl
    X86_AT(c, 0x525eeu);
    { uint32_t v = g8(c, 2); s8(c, 2, x86_logic(c, v ^ g8(c, 2), 1)); }
    // 0525f0  mov bl, 0
    X86_AT(c, 0x525f0u);
    s8(c, 3, 0x0u);
L_525f2:
    X86_TICK(c, 7);
    // 0525f2  call 0x52612
    X86_AT(c, 0x525f2u);
    push32(c, 0x525f7u); x86_call_known(c, 0x52612u, f_00052612); X86_RET(c, 0x525f7u);
    X86_TICK(c, 15);
    // 0525f7  inc dl
    X86_AT(c, 0x525f7u);
    { uint32_t v = g8(c, 2); s8(c, 2, x86_inc(c, v, 1)); }
    // 0525f9  inc bl
    X86_AT(c, 0x525f9u);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_inc(c, v, 1)); }
    // 0525fb  loop 0x525f2
    X86_AT(c, 0x525fbu);
    c.r[1] -= 1; if (c.r[1] != 0) { X86_POLL(c, 0x525f2u); goto L_525f2; }
    X86_TICK(c, 4);
    // 0525fd  mov ecx, 8
    X86_AT(c, 0x525fdu);
    c.r[1] = 0x8u;
    // 052602  mov bl, 0x40
    X86_AT(c, 0x52602u);
    s8(c, 3, 0x40u);
L_52604:
    X86_TICK(c, 7);
    // 052604  call 0x52612
    X86_AT(c, 0x52604u);
    push32(c, 0x52609u); x86_call_known(c, 0x52612u, f_00052612); X86_RET(c, 0x52609u);
    X86_TICK(c, 15);
    // 052609  inc dl
    X86_AT(c, 0x52609u);
    { uint32_t v = g8(c, 2); s8(c, 2, x86_inc(c, v, 1)); }
    // 05260b  inc bl
    X86_AT(c, 0x5260bu);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_inc(c, v, 1)); }
    // 05260d  loop 0x52604
    X86_AT(c, 0x5260du);
    c.r[1] -= 1; if (c.r[1] != 0) { X86_POLL(c, 0x52604u); goto L_52604; }
    X86_TICK(c, 38);
    // 05260f  popal 
    X86_AT(c, 0x5260fu);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 052610  pop es
    X86_AT(c, 0x52610u);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 052611  ret 
    X86_AT(c, 0x52611u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x52590u, "ran off the end of a function");
}
void f_00052612(X86Cpu& c) {
    X86_TICK(c, 25);
    // 052612  pushal 
    X86_AT(c, 0x52612u);
    { uint32_t sp = c.r[4]; for (int k = 0; k < 8; ++k) push32(c, k == 4 ? sp : c.r[k]); }
    // 052613  cmp dl, 0x10
    X86_AT(c, 0x52613u);
    (void)x86_sub(c, g8(c, 2), 0x10u, 0, 1);
    // 052616  jae 0x526b0
    X86_AT(c, 0x52616u);
    if (x86_cc(c, 3)) { goto L_526b0; }
    X86_TICK(c, 7);
    // 05261c  cmp bl, 0x80
    X86_AT(c, 0x5261cu);
    (void)x86_sub(c, g8(c, 3), 0x80u, 0, 1);
    // 05261f  jae 0x526b0
    X86_AT(c, 0x5261fu);
    if (x86_cc(c, 3)) { goto L_526b0; }
    X86_TICK(c, 16);
    // 052625  movzx ebx, bl
    X86_AT(c, 0x52625u);
    c.r[3] = g8(c, 3);
    // 052628  lea edi, [ebx*4 + 0x4b285]
    X86_AT(c, 0x52628u);
    c.r[7] = (uint32_t)(c.r[3] * 4 + 0x4B285u);
    // 05262f  mov al, byte ptr [edi]
    X86_AT(c, 0x5262fu);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[7]))));
    // 052631  cmp al, dl
    X86_AT(c, 0x52631u);
    (void)x86_sub(c, g8(c, 0), g8(c, 2), 0, 1);
    // 052633  je 0x526ac
    X86_AT(c, 0x52633u);
    if (x86_cc(c, 4)) { goto L_526ac; }
    X86_TICK(c, 7);
    // 052639  cmp al, 0xff
    X86_AT(c, 0x52639u);
    (void)x86_sub(c, g8(c, 0), 0xFFu, 0, 1);
    // 05263b  je 0x5268d
    X86_AT(c, 0x5263bu);
    if (x86_cc(c, 4)) { goto L_5268d; }
    X86_TICK(c, 16);
    // 052641  movzx eax, al
    X86_AT(c, 0x52641u);
    c.r[0] = g8(c, 0);
    // 052644  lea esi, [eax + 0x4b275]
    X86_AT(c, 0x52644u);
    c.r[6] = (uint32_t)(c.r[0] + 0x4B275u);
    // 05264a  mov al, byte ptr [esi]
    X86_AT(c, 0x5264au);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[6]))));
    // 05264c  cmp al, bl
    X86_AT(c, 0x5264cu);
    (void)x86_sub(c, g8(c, 0), g8(c, 3), 0, 1);
    // 05264e  je 0x52669
    X86_AT(c, 0x5264eu);
    if (x86_cc(c, 4)) { goto L_52669; }
L_52650:
    X86_TICK(c, 18);
    // 052650  movzx eax, al
    X86_AT(c, 0x52650u);
    c.r[0] = g8(c, 0);
    // 052653  lea esi, [eax*4 + 0x4b285]
    X86_AT(c, 0x52653u);
    c.r[6] = (uint32_t)(c.r[0] * 4 + 0x4B285u);
    // 05265a  lea esi, [esi + 1]
    X86_AT(c, 0x5265au);
    c.r[6] = (uint32_t)(c.r[6] + 0x1u);
    // 05265d  mov al, byte ptr [esi]
    X86_AT(c, 0x5265du);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[6]))));
    // 05265f  cmp al, bl
    X86_AT(c, 0x5265fu);
    (void)x86_sub(c, g8(c, 0), g8(c, 3), 0, 1);
    // 052661  je 0x52669
    X86_AT(c, 0x52661u);
    if (x86_cc(c, 4)) { goto L_52669; }
    X86_TICK(c, 7);
    // 052663  cmp al, 0xff
    X86_AT(c, 0x52663u);
    (void)x86_sub(c, g8(c, 0), 0xFFu, 0, 1);
    // 052665  je 0x526b0
    X86_AT(c, 0x52665u);
    if (x86_cc(c, 4)) { goto L_526b0; }
    X86_TICK(c, 7);
    // 052667  jmp 0x52650
    X86_AT(c, 0x52667u);
    X86_POLL(c, 0x52650u); goto L_52650;
L_52669:
    X86_TICK(c, 28);
    // 052669  push edx
    X86_AT(c, 0x52669u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 05266a  pushf 
    X86_AT(c, 0x5266au);
    push16(c, c.fl & 0xFFFFu);
    // 05266c  cli 
    X86_AT(c, 0x5266cu);
    c.fl &= ~X86_IF;
    // 05266d  mov dl, byte ptr [edi + 1]
    X86_AT(c, 0x5266du);
    s8(c, 2, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x1u))));
    // 052670  mov byte ptr [esi], dl
    X86_AT(c, 0x52670u);
    wr8((c.sbase[3] + (uint32_t)(c.r[6])), g8(c, 2));
    // 052672  cmp byte ptr [edi + 2], 0
    X86_AT(c, 0x52672u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x2u))), 0x0u, 0, 1);
    // 052676  je 0x5267f
    X86_AT(c, 0x52676u);
    if (x86_cc(c, 4)) { goto L_5267f; }
    X86_TICK(c, 9);
    // 052678  mov ah, 2
    X86_AT(c, 0x52678u);
    s8(c, 4, 0x2u);
    // 05267a  call 0x507d8
    X86_AT(c, 0x5267au);
    push32(c, 0x5267fu); x86_call_known(c, 0x507d8u, f_000507d8); X86_RET(c, 0x5267fu);
L_5267f:
    X86_TICK(c, 16);
    // 05267f  mov byte ptr [edi], 0xff
    X86_AT(c, 0x5267fu);
    wr8((c.sbase[3] + (uint32_t)(c.r[7])), 0xFFu);
    // 052682  mov byte ptr [edi + 1], 0xff
    X86_AT(c, 0x52682u);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0x1u)), 0xFFu);
    // 052686  mov byte ptr [edi + 2], 0
    X86_AT(c, 0x52686u);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0x2u)), 0x0u);
    // 05268a  popf 
    X86_AT(c, 0x5268au);
    x86_popfd(c, 2);
    // 05268c  pop edx
    X86_AT(c, 0x5268cu);
    { uint32_t v = pop32(c); c.r[2] = v; }
L_5268d:
    X86_TICK(c, 33);
    // 05268d  movzx edx, dl
    X86_AT(c, 0x5268du);
    c.r[2] = g8(c, 2);
    // 052690  lea esi, [edx + 0x4b275]
    X86_AT(c, 0x52690u);
    c.r[6] = (uint32_t)(c.r[2] + 0x4B275u);
    // 052696  pushf 
    X86_AT(c, 0x52696u);
    push16(c, c.fl & 0xFFFFu);
    // 052698  cli 
    X86_AT(c, 0x52698u);
    c.fl &= ~X86_IF;
    // 052699  mov al, byte ptr [esi]
    X86_AT(c, 0x52699u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[6]))));
    // 05269b  mov byte ptr [esi], bl
    X86_AT(c, 0x5269bu);
    wr8((c.sbase[3] + (uint32_t)(c.r[6])), g8(c, 3));
    // 05269d  mov byte ptr [edi], dl
    X86_AT(c, 0x5269du);
    wr8((c.sbase[3] + (uint32_t)(c.r[7])), g8(c, 2));
    // 05269f  mov byte ptr [edi + 1], al
    X86_AT(c, 0x5269fu);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0x1u)), g8(c, 0));
    // 0526a2  mov byte ptr [edi + 2], 0
    X86_AT(c, 0x526a2u);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0x2u)), 0x0u);
    // 0526a6  mov byte ptr [edi + 3], 0
    X86_AT(c, 0x526a6u);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0x3u)), 0x0u);
    // 0526aa  popf 
    X86_AT(c, 0x526aau);
    x86_popfd(c, 2);
L_526ac:
    X86_TICK(c, 36);
    // 0526ac  popal 
    X86_AT(c, 0x526acu);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 0526ad  xor al, al
    X86_AT(c, 0x526adu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 0526af  ret 
    X86_AT(c, 0x526afu);
    c.eip = pop32(c); return;
L_526b0:
    X86_TICK(c, 36);
    // 0526b0  popal 
    X86_AT(c, 0x526b0u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 0526b1  mov al, 3
    X86_AT(c, 0x526b1u);
    s8(c, 0, 0x3u);
    // 0526b3  ret 
    X86_AT(c, 0x526b3u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x52612u, "ran off the end of a function");
}
void f_000526b4(X86Cpu& c) {
    X86_TICK(c, 25);
    // 0526b4  pushal 
    X86_AT(c, 0x526b4u);
    { uint32_t sp = c.r[4]; for (int k = 0; k < 8; ++k) push32(c, k == 4 ? sp : c.r[k]); }
    // 0526b5  cmp al, 0x80
    X86_AT(c, 0x526b5u);
    (void)x86_sub(c, g8(c, 0), 0x80u, 0, 1);
    // 0526b7  jb 0x526cb
    X86_AT(c, 0x526b7u);
    if (x86_cc(c, 2)) { goto L_526cb; }
    X86_TICK(c, 7);
    // 0526b9  cmp al, 0xf0
    X86_AT(c, 0x526b9u);
    (void)x86_sub(c, g8(c, 0), 0xF0u, 0, 1);
    // 0526bb  jae 0x526f3
    X86_AT(c, 0x526bbu);
    if (x86_cc(c, 3)) { goto L_526f3; }
    X86_TICK(c, 11);
    // 0526bd  mov byte ptr [0x4b260], al
    X86_AT(c, 0x526bdu);
    wr8((c.sbase[3] + (uint32_t)(0x4B260u)), g8(c, 0));
    // 0526c2  mov byte ptr [0x4b261], 1
    X86_AT(c, 0x526c2u);
    wr8((c.sbase[3] + (uint32_t)(0x4B261u)), 0x1u);
    // 0526c9  jmp 0x526f1
    X86_AT(c, 0x526c9u);
    goto L_526f1;
L_526cb:
    X86_TICK(c, 13);
    // 0526cb  movzx ebx, byte ptr [0x4b260]
    X86_AT(c, 0x526cbu);
    c.r[3] = rd8((c.sbase[3] + (uint32_t)(0x4B260u)));
    // 0526d2  cmp ebx, 0x80
    X86_AT(c, 0x526d2u);
    (void)x86_sub(c, c.r[3], 0x80u, 0, 4);
    // 0526d8  jb 0x526f1
    X86_AT(c, 0x526d8u);
    if (x86_cc(c, 2)) { goto L_526f1; }
    X86_TICK(c, 14);
    // 0526de  sub ebx, 0x80
    X86_AT(c, 0x526deu);
    { uint32_t v = c.r[3]; c.r[3] = x86_sub(c, v, 0x80u, 0, 4); }
    // 0526e4  shr ebx, 4
    X86_AT(c, 0x526e4u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 5, v, 0x4u, 4, w); if (w) c.r[3] = r; }
    // 0526e7  lea ebx, [ebx*4 + 0x52703]
    X86_AT(c, 0x526e7u);
    c.r[3] = (uint32_t)(c.r[3] * 4 + 0x52703u);
    // 0526ee  call dword ptr cs:[ebx]
    X86_AT(c, 0x526eeu);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[3]))); push32(c, 0x526f1u); x86_call(c, t); X86_RET(c, 0x526f1u); }
L_526f1:
    X86_TICK(c, 34);
    // 0526f1  popal 
    X86_AT(c, 0x526f1u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 0526f2  ret 
    X86_AT(c, 0x526f2u);
    c.eip = pop32(c); return;
L_526f3:
    X86_TICK(c, 38);
    // 0526f3  mov byte ptr [0x4b261], 1
    X86_AT(c, 0x526f3u);
    wr8((c.sbase[3] + (uint32_t)(0x4B261u)), 0x1u);
    // 0526fa  mov byte ptr [0x4b260], 0
    X86_AT(c, 0x526fau);
    wr8((c.sbase[3] + (uint32_t)(0x4B260u)), 0x0u);
    // 052701  popal 
    X86_AT(c, 0x52701u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 052702  ret 
    X86_AT(c, 0x52702u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x526b4u, "ran off the end of a function");
}
void f_0005282b(X86Cpu& c) {
    X86_TICK(c, 17);
    // 05282b  mov al, byte ptr [0x4b260]
    X86_AT(c, 0x5282bu);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(0x4B260u))));
    // 052830  and eax, 0xf
    X86_AT(c, 0x52830u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0xFu, 4); }
    // 052835  mov bl, byte ptr [eax + 0x4b275]
    X86_AT(c, 0x52835u);
    s8(c, 3, rd8((c.sbase[3] + (uint32_t)(c.r[0] + 0x4B275u))));
    // 05283b  cmp bl, 0xff
    X86_AT(c, 0x5283bu);
    (void)x86_sub(c, g8(c, 3), 0xFFu, 0, 1);
    // 05283e  je 0x5288c
    X86_AT(c, 0x5283eu);
    if (x86_cc(c, 4)) { goto L_5288c; }
    X86_TICK(c, 4);
    // 052844  mov dl, byte ptr [0x4b262]
    X86_AT(c, 0x52844u);
    s8(c, 2, rd8((c.sbase[3] + (uint32_t)(0x4B262u))));
L_5284a:
    X86_TICK(c, 16);
    // 05284a  movzx eax, bl
    X86_AT(c, 0x5284au);
    c.r[0] = g8(c, 3);
    // 05284d  lea esi, [eax*4 + 0x4b285]
    X86_AT(c, 0x5284du);
    c.r[6] = (uint32_t)(c.r[0] * 4 + 0x4B285u);
    // 052854  cmp dl, byte ptr [esi + 2]
    X86_AT(c, 0x52854u);
    (void)x86_sub(c, g8(c, 2), rd8((c.sbase[3] + (uint32_t)(c.r[6] + 0x2u))), 0, 1);
    // 052857  je 0x52866
    X86_AT(c, 0x52857u);
    if (x86_cc(c, 4)) { goto L_52866; }
    X86_TICK(c, 11);
    // 052859  mov bl, byte ptr [esi + 1]
    X86_AT(c, 0x52859u);
    s8(c, 3, rd8((c.sbase[3] + (uint32_t)(c.r[6] + 0x1u))));
    // 05285c  cmp bl, 0xff
    X86_AT(c, 0x5285cu);
    (void)x86_sub(c, g8(c, 3), 0xFFu, 0, 1);
    // 05285f  jne 0x5284a
    X86_AT(c, 0x5285fu);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x5284au); goto L_5284a; }
    X86_TICK(c, 7);
    // 052861  jmp 0x5288c
    X86_AT(c, 0x52861u);
    goto L_5288c;
L_52866:
    X86_TICK(c, 18);
    // 052866  mov al, byte ptr [0x4b260]
    X86_AT(c, 0x52866u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(0x4B260u))));
    // 05286b  and eax, 0xf
    X86_AT(c, 0x5286bu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0xFu, 4); }
    // 052870  cmp byte ptr [eax + 0x4b265], 0
    X86_AT(c, 0x52870u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[0] + 0x4B265u))), 0x0u, 0, 1);
    // 052877  jne 0x52886
    X86_AT(c, 0x52877u);
    if (x86_cc(c, 5)) { goto L_52886; }
    X86_TICK(c, 11);
    // 052879  mov byte ptr [esi + 2], 0
    X86_AT(c, 0x52879u);
    wr8((c.sbase[3] + (uint32_t)(c.r[6] + 0x2u)), 0x0u);
    // 05287d  mov ah, 2
    X86_AT(c, 0x5287du);
    s8(c, 4, 0x2u);
    // 05287f  call 0x507d8
    X86_AT(c, 0x5287fu);
    push32(c, 0x52884u); x86_call_known(c, 0x507d8u, f_000507d8); X86_RET(c, 0x52884u);
    X86_TICK(c, 12);
    // 052884  clc 
    X86_AT(c, 0x52884u);
    c.fl &= ~X86_CF;
    // 052885  ret 
    X86_AT(c, 0x52885u);
    c.eip = pop32(c); return;
L_52886:
    X86_TICK(c, 19);
    // 052886  or byte ptr [esi + 2], 0x80
    X86_AT(c, 0x52886u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[6] + 0x2u)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | 0x80u, 1)); }
    // 05288a  clc 
    X86_AT(c, 0x5288au);
    c.fl &= ~X86_CF;
    // 05288b  ret 
    X86_AT(c, 0x5288bu);
    c.eip = pop32(c); return;
L_5288c:
    X86_TICK(c, 12);
    // 05288c  stc 
    X86_AT(c, 0x5288cu);
    c.fl |= X86_CF;
    // 05288d  ret 
    X86_AT(c, 0x5288du);
    c.eip = pop32(c); return;
    x86_fault(c, 0x5282bu, "ran off the end of a function");
}
void f_0005288e(X86Cpu& c) {
    X86_TICK(c, 12);
    // 05288e  cmp byte ptr [0x4b262], 0
    X86_AT(c, 0x5288eu);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0x4B262u))), 0x0u, 0, 1);
    // 052895  je 0x5291e
    X86_AT(c, 0x52895u);
    if (x86_cc(c, 4)) { goto L_5291e; }
    X86_TICK(c, 17);
    // 05289b  mov al, byte ptr [0x4b260]
    X86_AT(c, 0x5289bu);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(0x4B260u))));
    // 0528a0  and eax, 0xf
    X86_AT(c, 0x528a0u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0xFu, 4); }
    // 0528a5  mov bl, byte ptr [eax + 0x4b275]
    X86_AT(c, 0x528a5u);
    s8(c, 3, rd8((c.sbase[3] + (uint32_t)(c.r[0] + 0x4B275u))));
    // 0528ab  cmp bl, 0xff
    X86_AT(c, 0x528abu);
    (void)x86_sub(c, g8(c, 3), 0xFFu, 0, 1);
    // 0528ae  je 0x5291e
    X86_AT(c, 0x528aeu);
    if (x86_cc(c, 4)) { goto L_5291e; }
    X86_TICK(c, 2);
    // 0528b4  push bx
    X86_AT(c, 0x528b4u);
    { uint32_t v = (c.r[3] & 0xFFFFu); push16(c, v); }
L_528b6:
    X86_TICK(c, 22);
    // 0528b6  movzx eax, bl
    X86_AT(c, 0x528b6u);
    c.r[0] = g8(c, 3);
    // 0528b9  lea esi, [eax*4 + 0x4b285]
    X86_AT(c, 0x528b9u);
    c.r[6] = (uint32_t)(c.r[0] * 4 + 0x4B285u);
    // 0528c0  inc byte ptr [esi + 3]
    X86_AT(c, 0x528c0u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[6] + 0x3u)); uint32_t v = rd8(ea); wr8(ea, x86_inc(c, v, 1)); }
    // 0528c3  mov bl, byte ptr [esi + 1]
    X86_AT(c, 0x528c3u);
    s8(c, 3, rd8((c.sbase[3] + (uint32_t)(c.r[6] + 0x1u))));
    // 0528c6  cmp bl, 0xff
    X86_AT(c, 0x528c6u);
    (void)x86_sub(c, g8(c, 3), 0xFFu, 0, 1);
    // 0528c9  jne 0x528b6
    X86_AT(c, 0x528c9u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x528b6u); goto L_528b6; }
    X86_TICK(c, 6);
    // 0528cb  pop bx
    X86_AT(c, 0x528cbu);
    { uint32_t v = pop16(c); s16(c, 3, v); }
    // 0528cd  xor dl, dl
    X86_AT(c, 0x528cdu);
    { uint32_t v = g8(c, 2); s8(c, 2, x86_logic(c, v ^ g8(c, 2), 1)); }
L_528cf:
    X86_TICK(c, 17);
    // 0528cf  movzx eax, bl
    X86_AT(c, 0x528cfu);
    c.r[0] = g8(c, 3);
    // 0528d2  lea esi, [eax*4 + 0x4b285]
    X86_AT(c, 0x528d2u);
    c.r[6] = (uint32_t)(c.r[0] * 4 + 0x4B285u);
    // 0528d9  cmp byte ptr [esi + 2], 0
    X86_AT(c, 0x528d9u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[6] + 0x2u))), 0x0u, 0, 1);
    // 0528dd  je 0x528fa
    X86_AT(c, 0x528ddu);
    if (x86_cc(c, 4)) { goto L_528fa; }
    X86_TICK(c, 11);
    // 0528df  cmp dl, byte ptr [esi + 3]
    X86_AT(c, 0x528dfu);
    (void)x86_sub(c, g8(c, 2), rd8((c.sbase[3] + (uint32_t)(c.r[6] + 0x3u))), 0, 1);
    // 0528e2  ja 0x528e9
    X86_AT(c, 0x528e2u);
    if (x86_cc(c, 7)) { goto L_528e9; }
    X86_TICK(c, 6);
    // 0528e4  mov cl, bl
    X86_AT(c, 0x528e4u);
    s8(c, 1, g8(c, 3));
    // 0528e6  mov dl, byte ptr [esi + 3]
    X86_AT(c, 0x528e6u);
    s8(c, 2, rd8((c.sbase[3] + (uint32_t)(c.r[6] + 0x3u))));
L_528e9:
    X86_TICK(c, 11);
    // 0528e9  mov bl, byte ptr [esi + 1]
    X86_AT(c, 0x528e9u);
    s8(c, 3, rd8((c.sbase[3] + (uint32_t)(c.r[6] + 0x1u))));
    // 0528ec  cmp bl, 0xff
    X86_AT(c, 0x528ecu);
    (void)x86_sub(c, g8(c, 3), 0xFFu, 0, 1);
    // 0528ef  jne 0x528cf
    X86_AT(c, 0x528efu);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x528cfu); goto L_528cf; }
    X86_TICK(c, 11);
    // 0528f1  mov bl, cl
    X86_AT(c, 0x528f1u);
    s8(c, 3, g8(c, 1));
    // 0528f3  mov ah, 2
    X86_AT(c, 0x528f3u);
    s8(c, 4, 0x2u);
    // 0528f5  call 0x507d8
    X86_AT(c, 0x528f5u);
    push32(c, 0x528fau); x86_call_known(c, 0x507d8u, f_000507d8); X86_RET(c, 0x528fau);
L_528fa:
    X86_TICK(c, 26);
    // 0528fa  movzx eax, bl
    X86_AT(c, 0x528fau);
    c.r[0] = g8(c, 3);
    // 0528fd  lea esi, [eax*4 + 0x4b285]
    X86_AT(c, 0x528fdu);
    c.r[6] = (uint32_t)(c.r[0] * 4 + 0x4B285u);
    // 052904  mov dh, byte ptr [0x4b262]
    X86_AT(c, 0x52904u);
    s8(c, 6, rd8((c.sbase[3] + (uint32_t)(0x4B262u))));
    // 05290a  mov byte ptr [esi + 2], dh
    X86_AT(c, 0x5290au);
    wr8((c.sbase[3] + (uint32_t)(c.r[6] + 0x2u)), g8(c, 6));
    // 05290d  mov byte ptr [esi + 3], 0
    X86_AT(c, 0x5290du);
    wr8((c.sbase[3] + (uint32_t)(c.r[6] + 0x3u)), 0x0u);
    // 052911  mov dl, byte ptr [0x4b263]
    X86_AT(c, 0x52911u);
    s8(c, 2, rd8((c.sbase[3] + (uint32_t)(0x4B263u))));
    // 052917  mov ah, 1
    X86_AT(c, 0x52917u);
    s8(c, 4, 0x1u);
    // 052919  call 0x507d8
    X86_AT(c, 0x52919u);
    push32(c, 0x5291eu); x86_call_known(c, 0x507d8u, f_000507d8); X86_RET(c, 0x5291eu);
L_5291e:
    X86_TICK(c, 10);
    // 05291e  ret 
    X86_AT(c, 0x5291eu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x5288eu, "ran off the end of a function");
}
void f_00052a88(X86Cpu& c) {
    X86_TICK(c, 28);
    // 052a88  push ebp
    X86_AT(c, 0x52a88u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 052a89  mov ebp, esp
    X86_AT(c, 0x52a89u);
    c.r[5] = c.r[4];
    // 052a8b  sub esp, 0xb4
    X86_AT(c, 0x52a8bu);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, 0xB4u, 0, 4); }
    // 052a91  push ebx
    X86_AT(c, 0x52a91u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 052a92  push esi
    X86_AT(c, 0x52a92u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 052a93  push edi
    X86_AT(c, 0x52a93u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 052a94  mov eax, dword ptr [ebp + 8]
    X86_AT(c, 0x52a94u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 052a97  cmp byte ptr [eax], 0
    X86_AT(c, 0x52a97u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[0]))), 0x0u, 0, 1);
    // 052a9a  je 0x52b39
    X86_AT(c, 0x52a9au);
    if (x86_cc(c, 4)) { goto L_52b39; }
    X86_TICK(c, 14);
    // 052aa0  push 0x16f8
    X86_AT(c, 0x52aa0u);
    { uint32_t v = 0x16F8u; push32(c, v); }
    // 052aa5  push dword ptr [ebp + 8]
    X86_AT(c, 0x52aa5u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, v); }
    // 052aa8  call 0x534dc
    X86_AT(c, 0x52aa8u);
    push32(c, 0x52aadu); x86_call_known(c, 0x534dcu, f_000534dc); X86_RET(c, 0x52aadu);
    X86_TICK(c, 12);
    // 052aad  add esp, 8
    X86_AT(c, 0x52aadu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 052ab0  xchg edi, eax
    X86_AT(c, 0x52ab0u);
    { uint32_t t = c.r[7]; c.r[7] = c.r[0]; c.r[0] = t; }
    // 052ab1  and edi, edi
    X86_AT(c, 0x52ab1u);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & c.r[7], 4); }
    // 052ab3  jne 0x52b40
    X86_AT(c, 0x52ab3u);
    if (x86_cc(c, 5)) { goto L_52b40; }
    X86_TICK(c, 9);
    // 052ab9  push 0x16fc
    X86_AT(c, 0x52ab9u);
    { uint32_t v = 0x16FCu; push32(c, v); }
    // 052abe  call 0x53f1c
    X86_AT(c, 0x52abeu);
    push32(c, 0x52ac3u); x86_call_known(c, 0x53f1cu, f_00053f1c); X86_RET(c, 0x52ac3u);
    X86_TICK(c, 11);
    // 052ac3  add esp, 4
    X86_AT(c, 0x52ac3u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 052ac6  mov dword ptr [ebp - 0x34], eax
    X86_AT(c, 0x52ac6u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFCCu)), c.r[0]);
    // 052ac9  and eax, eax
    X86_AT(c, 0x52ac9u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 052acb  je 0x52b39
    X86_AT(c, 0x52acbu);
    if (x86_cc(c, 4)) { goto L_52b39; }
    X86_TICK(c, 16);
    // 052acd  push dword ptr [ebp - 0x34]
    X86_AT(c, 0x52acdu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFCCu))); push32(c, v); }
    // 052ad0  lea eax, [ebp - 0xb4]
    X86_AT(c, 0x52ad0u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFF4Cu);
    // 052ad6  push eax
    X86_AT(c, 0x52ad6u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 052ad7  call 0x54014
    X86_AT(c, 0x52ad7u);
    push32(c, 0x52adcu); x86_call_known(c, 0x54014u, f_00054014); X86_RET(c, 0x52adcu);
    X86_TICK(c, 4);
    // 052adc  sub esi, esi
    X86_AT(c, 0x52adcu);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[6], 0, 4); }
    // 052ade  add esp, 8
    X86_AT(c, 0x52adeu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
L_52ae1:
    X86_TICK(c, 12);
    // 052ae1  cmp byte ptr [ebp + esi*1 - 0xb4], 0
    X86_AT(c, 0x52ae1u);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + c.r[6] + 0xFFFFFF4Cu))), 0x0u, 0, 1);
    // 052ae9  je 0x52aee
    X86_AT(c, 0x52ae9u);
    if (x86_cc(c, 4)) { goto L_52aee; }
    X86_TICK(c, 9);
    // 052aeb  inc esi
    X86_AT(c, 0x52aebu);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 052aec  jmp 0x52ae1
    X86_AT(c, 0x52aecu);
    X86_POLL(c, 0x52ae1u); goto L_52ae1;
L_52aee:
    X86_TICK(c, 12);
    // 052aee  cmp byte ptr [ebp + esi*1 - 0xb5], 0x5c
    X86_AT(c, 0x52aeeu);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + c.r[6] + 0xFFFFFF4Bu))), 0x5Cu, 0, 1);
    // 052af6  je 0x52b01
    X86_AT(c, 0x52af6u);
    if (x86_cc(c, 4)) { goto L_52b01; }
    X86_TICK(c, 4);
    // 052af8  inc esi
    X86_AT(c, 0x52af8u);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 052af9  mov byte ptr [ebp + esi*1 - 0xb5], 0x5c
    X86_AT(c, 0x52af9u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + c.r[6] + 0xFFFFFF4Bu)), 0x5Cu);
L_52b01:
    X86_TICK(c, 2);
    // 052b01  sub ebx, ebx
    X86_AT(c, 0x52b01u);
    { uint32_t v = c.r[3]; c.r[3] = x86_sub(c, v, c.r[3], 0, 4); }
L_52b03:
    X86_TICK(c, 15);
    // 052b03  mov eax, dword ptr [ebp + 8]
    X86_AT(c, 0x52b03u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 052b06  mov al, byte ptr [eax + ebx*1]
    X86_AT(c, 0x52b06u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[0] + c.r[3]))));
    // 052b09  and al, al
    X86_AT(c, 0x52b09u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & g8(c, 0), 1)); }
    // 052b0b  je 0x52b18
    X86_AT(c, 0x52b0bu);
    if (x86_cc(c, 4)) { goto L_52b18; }
    X86_TICK(c, 13);
    // 052b0d  inc esi
    X86_AT(c, 0x52b0du);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 052b0e  mov byte ptr [ebp + esi*1 - 0xb5], al
    X86_AT(c, 0x52b0eu);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + c.r[6] + 0xFFFFFF4Bu)), g8(c, 0));
    // 052b15  inc ebx
    X86_AT(c, 0x52b15u);
    { uint32_t v = c.r[3]; c.r[3] = x86_inc(c, v, 4); }
    // 052b16  jmp 0x52b03
    X86_AT(c, 0x52b16u);
    X86_POLL(c, 0x52b03u); goto L_52b03;
L_52b18:
    X86_TICK(c, 15);
    // 052b18  mov byte ptr [ebp + esi*1 - 0xb4], 0
    X86_AT(c, 0x52b18u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + c.r[6] + 0xFFFFFF4Cu)), 0x0u);
    // 052b20  push 0x1704
    X86_AT(c, 0x52b20u);
    { uint32_t v = 0x1704u; push32(c, v); }
    // 052b25  lea eax, [ebp - 0xb4]
    X86_AT(c, 0x52b25u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFF4Cu);
    // 052b2b  push eax
    X86_AT(c, 0x52b2bu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 052b2c  call 0x534dc
    X86_AT(c, 0x52b2cu);
    push32(c, 0x52b31u); x86_call_known(c, 0x534dcu, f_000534dc); X86_RET(c, 0x52b31u);
    X86_TICK(c, 12);
    // 052b31  add esp, 8
    X86_AT(c, 0x52b31u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 052b34  xchg edi, eax
    X86_AT(c, 0x52b34u);
    { uint32_t t = c.r[7]; c.r[7] = c.r[0]; c.r[0] = t; }
    // 052b35  and edi, edi
    X86_AT(c, 0x52b35u);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & c.r[7], 4); }
    // 052b37  jne 0x52b40
    X86_AT(c, 0x52b37u);
    if (x86_cc(c, 5)) { goto L_52b40; }
L_52b39:
    X86_TICK(c, 9);
    // 052b39  mov eax, 1
    X86_AT(c, 0x52b39u);
    c.r[0] = 0x1u;
    // 052b3e  jmp 0x52b9f
    X86_AT(c, 0x52b3eu);
    goto L_52b9f;
L_52b40:
    X86_TICK(c, 18);
    // 052b40  push edi
    X86_AT(c, 0x52b40u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 052b41  push 8
    X86_AT(c, 0x52b41u);
    { uint32_t v = 0x8u; push32(c, v); }
    // 052b43  push 1
    X86_AT(c, 0x52b43u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 052b45  push dword ptr [ebp + 0xc]
    X86_AT(c, 0x52b45u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))); push32(c, v); }
    // 052b48  call 0x53200
    X86_AT(c, 0x52b48u);
    push32(c, 0x52b4du); x86_call_known(c, 0x53200u, f_00053200); X86_RET(c, 0x52b4du);
    X86_TICK(c, 9);
    // 052b4d  add esp, 0x10
    X86_AT(c, 0x52b4du);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 052b50  cmp eax, 8
    X86_AT(c, 0x52b50u);
    (void)x86_sub(c, c.r[0], 0x8u, 0, 4);
    // 052b53  jl 0x52b75
    X86_AT(c, 0x52b53u);
    if (x86_cc(c, 12)) { goto L_52b75; }
    X86_TICK(c, 2);
    // 052b55  sub esi, esi
    X86_AT(c, 0x52b55u);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[6], 0, 4); }
L_52b57:
    X86_TICK(c, 7);
    // 052b57  cmp esi, 0x80
    X86_AT(c, 0x52b57u);
    (void)x86_sub(c, c.r[6], 0x80u, 0, 4);
    // 052b5d  jge 0x52b94
    X86_AT(c, 0x52b5du);
    if (x86_cc(c, 13)) { goto L_52b94; }
    X86_TICK(c, 17);
    // 052b5f  push edi
    X86_AT(c, 0x52b5fu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 052b60  push 0x30
    X86_AT(c, 0x52b60u);
    { uint32_t v = 0x30u; push32(c, v); }
    // 052b62  push 1
    X86_AT(c, 0x52b62u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 052b64  lea eax, [ebp - 0x30]
    X86_AT(c, 0x52b64u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFD0u);
    // 052b67  push eax
    X86_AT(c, 0x52b67u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 052b68  call 0x53200
    X86_AT(c, 0x52b68u);
    push32(c, 0x52b6du); x86_call_known(c, 0x53200u, f_00053200); X86_RET(c, 0x52b6du);
    X86_TICK(c, 9);
    // 052b6d  add esp, 0x10
    X86_AT(c, 0x52b6du);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 052b70  cmp eax, 0x30
    X86_AT(c, 0x52b70u);
    (void)x86_sub(c, c.r[0], 0x30u, 0, 4);
    // 052b73  jge 0x52b82
    X86_AT(c, 0x52b73u);
    if (x86_cc(c, 13)) { goto L_52b82; }
L_52b75:
    X86_TICK(c, 9);
    // 052b75  push edi
    X86_AT(c, 0x52b75u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 052b76  call 0x539d8
    X86_AT(c, 0x52b76u);
    push32(c, 0x52b7bu); x86_call_known(c, 0x539d8u, f_000539d8); X86_RET(c, 0x52b7bu);
    X86_TICK(c, 9);
    // 052b7b  mov eax, 2
    X86_AT(c, 0x52b7bu);
    c.r[0] = 0x2u;
    // 052b80  jmp 0x52b9c
    X86_AT(c, 0x52b80u);
    goto L_52b9c;
L_52b82:
    X86_TICK(c, 15);
    // 052b82  lea eax, [ebp - 0x30]
    X86_AT(c, 0x52b82u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFD0u);
    // 052b85  push eax
    X86_AT(c, 0x52b85u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 052b86  push esi
    X86_AT(c, 0x52b86u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 052b87  push 0
    X86_AT(c, 0x52b87u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 052b89  call 0x502c1
    X86_AT(c, 0x52b89u);
    push32(c, 0x52b8eu); x86_call_known(c, 0x502c1u, f_000502c1); X86_RET(c, 0x52b8eu);
    X86_TICK(c, 11);
    // 052b8e  inc esi
    X86_AT(c, 0x52b8eu);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 052b8f  add esp, 0xc
    X86_AT(c, 0x52b8fu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 052b92  jmp 0x52b57
    X86_AT(c, 0x52b92u);
    X86_POLL(c, 0x52b57u); goto L_52b57;
L_52b94:
    X86_TICK(c, 9);
    // 052b94  push edi
    X86_AT(c, 0x52b94u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 052b95  call 0x539d8
    X86_AT(c, 0x52b95u);
    push32(c, 0x52b9au); x86_call_known(c, 0x539d8u, f_000539d8); X86_RET(c, 0x52b9au);
    X86_TICK(c, 2);
    // 052b9a  sub eax, eax
    X86_AT(c, 0x52b9au);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
L_52b9c:
    X86_TICK(c, 2);
    // 052b9c  add esp, 4
    X86_AT(c, 0x52b9cu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
L_52b9f:
    X86_TICK(c, 28);
    // 052b9f  pop edi
    X86_AT(c, 0x52b9fu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 052ba0  pop esi
    X86_AT(c, 0x52ba0u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 052ba1  pop ebx
    X86_AT(c, 0x52ba1u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 052ba2  leave 
    X86_AT(c, 0x52ba2u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 052ba3  ret 
    X86_AT(c, 0x52ba3u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x52a88u, "ran off the end of a function");
}
void f_00052d98(X86Cpu& c) {
    X86_TICK(c, 42);
    // 052d98  enter 0x14, 0
    X86_AT(c, 0x52d98u);
    x86_enter(c, 0x14u, 0x0u, 4);
    // 052d9c  push ebx
    X86_AT(c, 0x52d9cu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 052d9d  push esi
    X86_AT(c, 0x52d9du);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 052d9e  push edi
    X86_AT(c, 0x52d9eu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 052d9f  mov edi, dword ptr [ebp + 0x10]
    X86_AT(c, 0x52d9fu);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u)));
    // 052da2  mov ax, word ptr [0x4b81e]
    X86_AT(c, 0x52da2u);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(0x4B81Eu))));
    // 052da8  mov word ptr [ebp - 0xe], ax
    X86_AT(c, 0x52da8u);
    wr16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF2u)), (c.r[0] & 0xFFFFu));
    // 052dac  sub eax, eax
    X86_AT(c, 0x52dacu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 052dae  mov word ptr [0x4b81e], ax
    X86_AT(c, 0x52daeu);
    wr16((c.sbase[3] + (uint32_t)(0x4B81Eu)), (c.r[0] & 0xFFFFu));
    // 052db4  mov ebx, dword ptr [ebp + 8]
    X86_AT(c, 0x52db4u);
    c.r[3] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 052db7  test byte ptr [ebx + 0xc], 1
    X86_AT(c, 0x52db7u);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xCu))) & 0x1u, 1);
    // 052dbb  je 0x530ad
    X86_AT(c, 0x52dbbu);
    if (x86_cc(c, 4)) { goto L_530ad; }
    X86_TICK(c, 9);
    // 052dc1  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0x52dc1u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
    // 052dc4  jmp 0x5308e
    X86_AT(c, 0x52dc4u);
    goto L_5308e;
L_52dc9:
    X86_TICK(c, 12);
    // 052dc9  test byte ptr [ebx + 0xc], 0x40
    X86_AT(c, 0x52dc9u);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xCu))) & 0x40u, 1);
    // 052dcd  je 0x52fc6
    X86_AT(c, 0x52dcdu);
    if (x86_cc(c, 4)) { goto L_52fc6; }
    X86_TICK(c, 12);
    // 052dd3  cmp dword ptr [ebx + 4], 1
    X86_AT(c, 0x52dd3u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u))), 0x1u, 0, 4);
    // 052dd7  jne 0x52e1e
    X86_AT(c, 0x52dd7u);
    if (x86_cc(c, 5)) { goto L_52e1e; }
    X86_TICK(c, 12);
    // 052dd9  cmp word ptr [ebx + 0x10], 0xfffe
    X86_AT(c, 0x52dd9u);
    (void)x86_sub(c, rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u))), 0xFFFEu, 0, 2);
    // 052dde  jne 0x52e1e
    X86_AT(c, 0x52ddeu);
    if (x86_cc(c, 5)) { goto L_52e1e; }
    X86_TICK(c, 12);
    // 052de0  test byte ptr [ebx + 0xd], 4
    X86_AT(c, 0x52de0u);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xDu))) & 0x4u, 1);
    // 052de4  jne 0x53064
    X86_AT(c, 0x52de4u);
    if (x86_cc(c, 5)) { goto L_53064; }
    X86_TICK(c, 33);
    // 052dea  mov al, byte ptr [0x4b48a]
    X86_AT(c, 0x52deau);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(0x4B48Au))));
    // 052def  mov edx, dword ptr [ebx + 8]
    X86_AT(c, 0x52defu);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x8u)));
    // 052df2  mov byte ptr [edx], al
    X86_AT(c, 0x52df2u);
    wr8((c.sbase[3] + (uint32_t)(c.r[2])), g8(c, 0));
    // 052df4  push 0x1ff
    X86_AT(c, 0x52df4u);
    { uint32_t v = 0x1FFu; push32(c, v); }
    // 052df9  mov eax, dword ptr [ebx + 8]
    X86_AT(c, 0x52df9u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x8u)));
    // 052dfc  inc eax
    X86_AT(c, 0x52dfcu);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 052dfd  push eax
    X86_AT(c, 0x52dfdu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 052dfe  mov al, byte ptr [ebx + 0xe]
    X86_AT(c, 0x52dfeu);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xEu))));
    // 052e01  push eax
    X86_AT(c, 0x52e01u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 052e02  call 0x55ce0
    X86_AT(c, 0x52e02u);
    push32(c, 0x52e07u); x86_call_known(c, 0x55ce0u, f_00055ce0); X86_RET(c, 0x52e07u);
    X86_TICK(c, 11);
    // 052e07  inc eax
    X86_AT(c, 0x52e07u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 052e08  mov dword ptr [ebx + 4], eax
    X86_AT(c, 0x52e08u);
    wr32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)), c.r[0]);
    // 052e0b  dec eax
    X86_AT(c, 0x52e0bu);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 052e0c  jne 0x52e56
    X86_AT(c, 0x52e0cu);
    if (x86_cc(c, 5)) { goto L_52e56; }
    X86_TICK(c, 15);
    // 052e0e  mov eax, dword ptr [ebx + 8]
    X86_AT(c, 0x52e0eu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x8u)));
    // 052e11  mov dword ptr [ebx], eax
    X86_AT(c, 0x52e11u);
    wr32((c.sbase[3] + (uint32_t)(c.r[3])), c.r[0]);
    // 052e13  mov word ptr [ebx + 0x10], 0x200
    X86_AT(c, 0x52e13u);
    wr16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u)), 0x200u);
    // 052e19  jmp 0x53064
    X86_AT(c, 0x52e19u);
    goto L_53064;
L_52e1e:
    X86_TICK(c, 12);
    // 052e1e  cmp dword ptr [ebx + 4], 0
    X86_AT(c, 0x52e1eu);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u))), 0x0u, 0, 4);
    // 052e22  jne 0x52e9b
    X86_AT(c, 0x52e22u);
    if (x86_cc(c, 5)) { goto L_52e9b; }
    X86_TICK(c, 12);
    // 052e28  test byte ptr [ebx + 0xc], 0x10
    X86_AT(c, 0x52e28u);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xCu))) & 0x10u, 1);
    // 052e2c  jne 0x53096
    X86_AT(c, 0x52e2cu);
    if (x86_cc(c, 5)) { goto L_53096; }
    X86_TICK(c, 12);
    // 052e32  test byte ptr [ebx + 0xd], 4
    X86_AT(c, 0x52e32u);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xDu))) & 0x4u, 1);
    // 052e36  jne 0x52e4c
    X86_AT(c, 0x52e36u);
    if (x86_cc(c, 5)) { goto L_52e4c; }
    X86_TICK(c, 20);
    // 052e38  push 0x200
    X86_AT(c, 0x52e38u);
    { uint32_t v = 0x200u; push32(c, v); }
    // 052e3d  push dword ptr [ebx + 8]
    X86_AT(c, 0x52e3du);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x8u))); push32(c, v); }
    // 052e40  mov al, byte ptr [ebx + 0xe]
    X86_AT(c, 0x52e40u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xEu))));
    // 052e43  push eax
    X86_AT(c, 0x52e43u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 052e44  call 0x55ce0
    X86_AT(c, 0x52e44u);
    push32(c, 0x52e49u); x86_call_known(c, 0x55ce0u, f_00055ce0); X86_RET(c, 0x52e49u);
    X86_TICK(c, 2);
    // 052e49  mov dword ptr [ebx + 4], eax
    X86_AT(c, 0x52e49u);
    wr32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)), c.r[0]);
L_52e4c:
    X86_TICK(c, 12);
    // 052e4c  cmp dword ptr [ebx + 4], 0
    X86_AT(c, 0x52e4cu);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u))), 0x0u, 0, 4);
    // 052e50  je 0x53096
    X86_AT(c, 0x52e50u);
    if (x86_cc(c, 4)) { goto L_53096; }
L_52e56:
    X86_TICK(c, 28);
    // 052e56  mov edx, dword ptr [ebx + 4]
    X86_AT(c, 0x52e56u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)));
    // 052e59  mov al, 0x1a
    X86_AT(c, 0x52e59u);
    s8(c, 0, 0x1Au);
    // 052e5b  mov ecx, dword ptr [ebx + 8]
    X86_AT(c, 0x52e5bu);
    c.r[1] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x8u)));
    // 052e5e  push edi
    X86_AT(c, 0x52e5eu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 052e5f  mov edi, ecx
    X86_AT(c, 0x52e5fu);
    c.r[7] = c.r[1];
    // 052e61  mov ecx, edx
    X86_AT(c, 0x52e61u);
    c.r[1] = c.r[2];
    // 052e63  scasb al, byte ptr es:[edi]
    X86_AT(c, 0x52e63u);
    x86_string(c, 4, 1, 242, 4, 3);
    // 052e65  jne 0x52e6a
    X86_AT(c, 0x52e65u);
    if (x86_cc(c, 5)) { goto L_52e6a; }
    X86_TICK(c, 4);
    // 052e67  inc ecx
    X86_AT(c, 0x52e67u);
    { uint32_t v = c.r[1]; c.r[1] = x86_inc(c, v, 4); }
    // 052e68  sub edx, ecx
    X86_AT(c, 0x52e68u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[1], 0, 4); }
L_52e6a:
    X86_TICK(c, 17);
    // 052e6a  pop edi
    X86_AT(c, 0x52e6au);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 052e6b  mov word ptr [ebp - 0x10], dx
    X86_AT(c, 0x52e6bu);
    wr16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u)), (c.r[2] & 0xFFFFu));
    // 052e6f  cmp edx, dword ptr [ebx + 4]
    X86_AT(c, 0x52e6fu);
    (void)x86_sub(c, c.r[2], rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u))), 0, 4);
    // 052e72  je 0x52e90
    X86_AT(c, 0x52e72u);
    if (x86_cc(c, 4)) { goto L_52e90; }
    X86_TICK(c, 32);
    // 052e74  or byte ptr [ebx + 0xd], 4
    X86_AT(c, 0x52e74u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3] + 0xDu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | 0x4u, 1)); }
    // 052e78  push 1
    X86_AT(c, 0x52e78u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 052e7a  mov dword ptr [ebp - 0x14], edx
    X86_AT(c, 0x52e7au);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu)), c.r[2]);
    // 052e7d  sub edx, dword ptr [ebx + 4]
    X86_AT(c, 0x52e7du);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u))), 0, 4); }
    // 052e80  push edx
    X86_AT(c, 0x52e80u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 052e81  mov al, byte ptr [ebx + 0xe]
    X86_AT(c, 0x52e81u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xEu))));
    // 052e84  push eax
    X86_AT(c, 0x52e84u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 052e85  call 0x55db8
    X86_AT(c, 0x52e85u);
    push32(c, 0x52e8au); x86_call_known(c, 0x55db8u, f_00055db8); X86_RET(c, 0x52e8au);
    X86_TICK(c, 6);
    // 052e8a  mov eax, dword ptr [ebp - 0x14]
    X86_AT(c, 0x52e8au);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu)));
    // 052e8d  mov dword ptr [ebx + 4], eax
    X86_AT(c, 0x52e8du);
    wr32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)), c.r[0]);
L_52e90:
    X86_TICK(c, 8);
    // 052e90  mov eax, dword ptr [ebx + 8]
    X86_AT(c, 0x52e90u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x8u)));
    // 052e93  mov dword ptr [ebx], eax
    X86_AT(c, 0x52e93u);
    wr32((c.sbase[3] + (uint32_t)(c.r[3])), c.r[0]);
    // 052e95  mov word ptr [ebx + 0x10], 0xffff
    X86_AT(c, 0x52e95u);
    wr16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u)), 0xFFFFu);
L_52e9b:
    X86_TICK(c, 12);
    // 052e9b  cmp dword ptr [ebx + 4], 0
    X86_AT(c, 0x52e9bu);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u))), 0x0u, 0, 4);
    // 052e9f  jle 0x5308e
    X86_AT(c, 0x52e9fu);
    if (x86_cc(c, 14)) { goto L_5308e; }
    X86_TICK(c, 11);
    // 052ea5  mov ax, word ptr [ebx + 0x10]
    X86_AT(c, 0x52ea5u);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u))));
    // 052ea9  cmp ax, 0xffff
    X86_AT(c, 0x52ea9u);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), 0xFFFFu, 0, 2);
    // 052ead  je 0x52ebd
    X86_AT(c, 0x52eadu);
    if (x86_cc(c, 4)) { goto L_52ebd; }
    X86_TICK(c, 20);
    // 052eaf  movsx eax, ax
    X86_AT(c, 0x52eafu);
    c.r[0] = (uint32_t)(int32_t)(int16_t)(c.r[0] & 0xFFFFu);
    // 052eb2  add eax, dword ptr [ebx + 8]
    X86_AT(c, 0x52eb2u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x8u))), 0, 4); }
    // 052eb5  cmp eax, dword ptr [ebx]
    X86_AT(c, 0x52eb5u);
    (void)x86_sub(c, c.r[0], rd32((c.sbase[3] + (uint32_t)(c.r[3]))), 0, 4);
    // 052eb7  jge 0x52f54
    X86_AT(c, 0x52eb7u);
    if (x86_cc(c, 13)) { goto L_52f54; }
L_52ebd:
    X86_TICK(c, 30);
    // 052ebd  mov edx, dword ptr [ebx + 4]
    X86_AT(c, 0x52ebdu);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)));
    // 052ec0  mov al, byte ptr [0x4b48a]
    X86_AT(c, 0x52ec0u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(0x4B48Au))));
    // 052ec5  mov ecx, dword ptr [ebx]
    X86_AT(c, 0x52ec5u);
    c.r[1] = rd32((c.sbase[3] + (uint32_t)(c.r[3])));
    // 052ec7  push edi
    X86_AT(c, 0x52ec7u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 052ec8  mov edi, ecx
    X86_AT(c, 0x52ec8u);
    c.r[7] = c.r[1];
    // 052eca  mov ecx, edx
    X86_AT(c, 0x52ecau);
    c.r[1] = c.r[2];
    // 052ecc  scasb al, byte ptr es:[edi]
    X86_AT(c, 0x52eccu);
    x86_string(c, 4, 1, 242, 4, 3);
    // 052ece  jne 0x52ed3
    X86_AT(c, 0x52eceu);
    if (x86_cc(c, 5)) { goto L_52ed3; }
    X86_TICK(c, 4);
    // 052ed0  inc ecx
    X86_AT(c, 0x52ed0u);
    { uint32_t v = c.r[1]; c.r[1] = x86_inc(c, v, 4); }
    // 052ed1  sub edx, ecx
    X86_AT(c, 0x52ed1u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[1], 0, 4); }
L_52ed3:
    X86_TICK(c, 13);
    // 052ed3  pop edi
    X86_AT(c, 0x52ed3u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 052ed4  mov word ptr [ebx + 0x10], dx
    X86_AT(c, 0x52ed4u);
    wr16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u)), (c.r[2] & 0xFFFFu));
    // 052ed8  jmp 0x52f0d
    X86_AT(c, 0x52ed8u);
    goto L_52f0d;
L_52eda:
    X86_TICK(c, 59);
    // 052eda  movsx eax, word ptr [ebx + 0x10]
    X86_AT(c, 0x52edau);
    c.r[0] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u)));
    // 052ede  add eax, dword ptr [ebx]
    X86_AT(c, 0x52edeu);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[3]))), 0, 4); }
    // 052ee0  inc eax
    X86_AT(c, 0x52ee0u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 052ee1  mov dx, word ptr [ebx + 0x10]
    X86_AT(c, 0x52ee1u);
    s16(c, 2, rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u))));
    // 052ee5  inc edx
    X86_AT(c, 0x52ee5u);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
    // 052ee6  movsx edx, dx
    X86_AT(c, 0x52ee6u);
    c.r[2] = (uint32_t)(int32_t)(int16_t)(c.r[2] & 0xFFFFu);
    // 052ee9  mov ecx, dword ptr [ebx + 4]
    X86_AT(c, 0x52ee9u);
    c.r[1] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)));
    // 052eec  sub ecx, edx
    X86_AT(c, 0x52eecu);
    { uint32_t v = c.r[1]; c.r[1] = x86_sub(c, v, c.r[2], 0, 4); }
    // 052eee  mov edx, ecx
    X86_AT(c, 0x52eeeu);
    c.r[2] = c.r[1];
    // 052ef0  mov dword ptr [ebp - 0x14], eax
    X86_AT(c, 0x52ef0u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu)), c.r[0]);
    // 052ef3  mov al, byte ptr [0x4b48a]
    X86_AT(c, 0x52ef3u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(0x4B48Au))));
    // 052ef8  mov ecx, dword ptr [ebp - 0x14]
    X86_AT(c, 0x52ef8u);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu)));
    // 052efb  push edi
    X86_AT(c, 0x52efbu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 052efc  mov edi, ecx
    X86_AT(c, 0x52efcu);
    c.r[7] = c.r[1];
    // 052efe  mov ecx, edx
    X86_AT(c, 0x52efeu);
    c.r[1] = c.r[2];
    // 052f00  scasb al, byte ptr es:[edi]
    X86_AT(c, 0x52f00u);
    x86_string(c, 4, 1, 242, 4, 3);
    // 052f02  jne 0x52f07
    X86_AT(c, 0x52f02u);
    if (x86_cc(c, 5)) { goto L_52f07; }
    X86_TICK(c, 4);
    // 052f04  inc ecx
    X86_AT(c, 0x52f04u);
    { uint32_t v = c.r[1]; c.r[1] = x86_inc(c, v, 4); }
    // 052f05  sub edx, ecx
    X86_AT(c, 0x52f05u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[1], 0, 4); }
L_52f07:
    X86_TICK(c, 13);
    // 052f07  pop edi
    X86_AT(c, 0x52f07u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 052f08  inc edx
    X86_AT(c, 0x52f08u);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
    // 052f09  add word ptr [ebx + 0x10], dx
    X86_AT(c, 0x52f09u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3] + 0x10u)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[2] & 0xFFFFu), 0, 2)); }
L_52f0d:
    X86_TICK(c, 19);
    // 052f0d  movsx eax, word ptr [ebx + 0x10]
    X86_AT(c, 0x52f0du);
    c.r[0] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u)));
    // 052f11  mov edx, dword ptr [ebx + 4]
    X86_AT(c, 0x52f11u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)));
    // 052f14  dec edx
    X86_AT(c, 0x52f14u);
    { uint32_t v = c.r[2]; c.r[2] = x86_dec(c, v, 4); }
    // 052f15  cmp edx, eax
    X86_AT(c, 0x52f15u);
    (void)x86_sub(c, c.r[2], c.r[0], 0, 4);
    // 052f17  jle 0x52f26
    X86_AT(c, 0x52f17u);
    if (x86_cc(c, 14)) { goto L_52f26; }
    X86_TICK(c, 23);
    // 052f19  add eax, dword ptr [ebx]
    X86_AT(c, 0x52f19u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[3]))), 0, 4); }
    // 052f1b  inc eax
    X86_AT(c, 0x52f1bu);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 052f1c  mov al, byte ptr [eax]
    X86_AT(c, 0x52f1cu);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[0]))));
    // 052f1e  cmp al, byte ptr [0x4b48b]
    X86_AT(c, 0x52f1eu);
    (void)x86_sub(c, g8(c, 0), rd8((c.sbase[3] + (uint32_t)(0x4B48Bu))), 0, 1);
    // 052f24  jne 0x52eda
    X86_AT(c, 0x52f24u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x52edau); goto L_52eda; }
L_52f26:
    X86_TICK(c, 17);
    // 052f26  movsx eax, word ptr [ebx + 0x10]
    X86_AT(c, 0x52f26u);
    c.r[0] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u)));
    // 052f2a  cmp eax, dword ptr [ebx + 4]
    X86_AT(c, 0x52f2au);
    (void)x86_sub(c, c.r[0], rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u))), 0, 4);
    // 052f2d  jne 0x52f37
    X86_AT(c, 0x52f2du);
    if (x86_cc(c, 5)) { goto L_52f37; }
    X86_TICK(c, 9);
    // 052f2f  mov word ptr [ebx + 0x10], 0x200
    X86_AT(c, 0x52f2fu);
    wr16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u)), 0x200u);
    // 052f35  jmp 0x52f54
    X86_AT(c, 0x52f35u);
    goto L_52f54;
L_52f37:
    X86_TICK(c, 19);
    // 052f37  movsx eax, word ptr [ebx + 0x10]
    X86_AT(c, 0x52f37u);
    c.r[0] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u)));
    // 052f3b  mov edx, dword ptr [ebx + 4]
    X86_AT(c, 0x52f3bu);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)));
    // 052f3e  dec edx
    X86_AT(c, 0x52f3eu);
    { uint32_t v = c.r[2]; c.r[2] = x86_dec(c, v, 4); }
    // 052f3f  cmp edx, eax
    X86_AT(c, 0x52f3fu);
    (void)x86_sub(c, c.r[2], c.r[0], 0, 4);
    // 052f41  jne 0x52f4b
    X86_AT(c, 0x52f41u);
    if (x86_cc(c, 5)) { goto L_52f4b; }
    X86_TICK(c, 9);
    // 052f43  mov word ptr [ebx + 0x10], 0xfffe
    X86_AT(c, 0x52f43u);
    wr16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u)), 0xFFFEu);
    // 052f49  jmp 0x52f54
    X86_AT(c, 0x52f49u);
    goto L_52f54;
L_52f4b:
    X86_TICK(c, 17);
    // 052f4b  mov eax, dword ptr [ebx]
    X86_AT(c, 0x52f4bu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3])));
    // 052f4d  sub eax, dword ptr [ebx + 8]
    X86_AT(c, 0x52f4du);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x8u))), 0, 4); }
    // 052f50  add word ptr [ebx + 0x10], ax
    X86_AT(c, 0x52f50u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3] + 0x10u)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
L_52f54:
    X86_TICK(c, 12);
    // 052f54  cmp word ptr [ebx + 0x10], 0x200
    X86_AT(c, 0x52f54u);
    (void)x86_sub(c, rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u))), 0x200u, 0, 2);
    // 052f5a  je 0x53064
    X86_AT(c, 0x52f5au);
    if (x86_cc(c, 4)) { goto L_53064; }
    X86_TICK(c, 12);
    // 052f60  cmp word ptr [ebx + 0x10], 0xfffe
    X86_AT(c, 0x52f60u);
    (void)x86_sub(c, rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u))), 0xFFFEu, 0, 2);
    // 052f65  jne 0x52f75
    X86_AT(c, 0x52f65u);
    if (x86_cc(c, 5)) { goto L_52f75; }
    X86_TICK(c, 11);
    // 052f67  cmp edi, dword ptr [ebx + 4]
    X86_AT(c, 0x52f67u);
    (void)x86_sub(c, c.r[7], rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u))), 0, 4);
    // 052f6a  jl 0x52fbf
    X86_AT(c, 0x52f6au);
    if (x86_cc(c, 12)) { goto L_52fbf; }
    X86_TICK(c, 13);
    // 052f6c  mov esi, dword ptr [ebx + 4]
    X86_AT(c, 0x52f6cu);
    c.r[6] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)));
    // 052f6f  dec esi
    X86_AT(c, 0x52f6fu);
    { uint32_t v = c.r[6]; c.r[6] = x86_dec(c, v, 4); }
    // 052f70  jmp 0x53070
    X86_AT(c, 0x52f70u);
    goto L_53070;
L_52f75:
    X86_TICK(c, 25);
    // 052f75  mov eax, dword ptr [ebx]
    X86_AT(c, 0x52f75u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3])));
    // 052f77  sub eax, dword ptr [ebx + 8]
    X86_AT(c, 0x52f77u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x8u))), 0, 4); }
    // 052f7a  movsx esi, word ptr [ebx + 0x10]
    X86_AT(c, 0x52f7au);
    c.r[6] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u)));
    // 052f7e  sub esi, eax
    X86_AT(c, 0x52f7eu);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[0], 0, 4); }
    // 052f80  cmp edi, esi
    X86_AT(c, 0x52f80u);
    (void)x86_sub(c, c.r[7], c.r[6], 0, 4);
    // 052f82  jbe 0x52fbf
    X86_AT(c, 0x52f82u);
    if (x86_cc(c, 6)) { goto L_52fbf; }
    X86_TICK(c, 87);
    // 052f84  mov ecx, esi
    X86_AT(c, 0x52f84u);
    c.r[1] = c.r[6];
    // 052f86  mov eax, dword ptr [ebx]
    X86_AT(c, 0x52f86u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3])));
    // 052f88  mov edx, dword ptr [ebp + 0xc]
    X86_AT(c, 0x52f88u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 052f8b  mov dword ptr [ebp - 0x14], edi
    X86_AT(c, 0x52f8bu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu)), c.r[7]);
    // 052f8e  mov edi, dword ptr [ebp - 4]
    X86_AT(c, 0x52f8eu);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 052f91  lea edx, [edx + edi*1]
    X86_AT(c, 0x52f91u);
    c.r[2] = (uint32_t)(c.r[2] + c.r[7]);
    // 052f94  push esi
    X86_AT(c, 0x52f94u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 052f95  push edi
    X86_AT(c, 0x52f95u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 052f96  mov esi, eax
    X86_AT(c, 0x52f96u);
    c.r[6] = c.r[0];
    // 052f98  mov edi, edx
    X86_AT(c, 0x52f98u);
    c.r[7] = c.r[2];
    // 052f9a  movsb byte ptr es:[edi], byte ptr [esi]
    X86_AT(c, 0x52f9au);
    x86_string(c, 0, 1, 243, 4, 3);
    // 052f9c  pop edi
    X86_AT(c, 0x52f9cu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 052f9d  pop esi
    X86_AT(c, 0x52f9du);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 052f9e  add edi, esi
    X86_AT(c, 0x52f9eu);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, c.r[6], 0, 4); }
    // 052fa0  mov eax, dword ptr [ebp + 0xc]
    X86_AT(c, 0x52fa0u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 052fa3  mov byte ptr [eax + edi*1], 0xa
    X86_AT(c, 0x52fa3u);
    wr8((c.sbase[3] + (uint32_t)(c.r[0] + c.r[7])), 0xAu);
    // 052fa7  lea eax, [esi + 1]
    X86_AT(c, 0x52fa7u);
    c.r[0] = (uint32_t)(c.r[6] + 0x1u);
    // 052faa  add dword ptr [ebp - 4], eax
    X86_AT(c, 0x52faau);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 052fad  mov edi, dword ptr [ebp - 0x14]
    X86_AT(c, 0x52fadu);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu)));
    // 052fb0  sub edi, eax
    X86_AT(c, 0x52fb0u);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[0], 0, 4); }
    // 052fb2  lea eax, [esi + 2]
    X86_AT(c, 0x52fb2u);
    c.r[0] = (uint32_t)(c.r[6] + 0x2u);
    // 052fb5  sub dword ptr [ebx + 4], eax
    X86_AT(c, 0x52fb5u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)); uint32_t v = rd32(ea); wr32(ea, x86_sub(c, v, c.r[0], 0, 4)); }
    // 052fb8  add dword ptr [ebx], eax
    X86_AT(c, 0x52fb8u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3])); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 052fba  jmp 0x5308e
    X86_AT(c, 0x52fbau);
    goto L_5308e;
L_52fbf:
    X86_TICK(c, 9);
    // 052fbf  mov esi, edi
    X86_AT(c, 0x52fbfu);
    c.r[6] = c.r[7];
    // 052fc1  jmp 0x53070
    X86_AT(c, 0x52fc1u);
    goto L_53070;
L_52fc6:
    X86_TICK(c, 13);
    // 052fc6  mov word ptr [ebx + 0x10], 0xffff
    X86_AT(c, 0x52fc6u);
    wr16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u)), 0xFFFFu);
    // 052fcc  mov eax, dword ptr [ebx + 4]
    X86_AT(c, 0x52fccu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)));
    // 052fcf  cmp edi, eax
    X86_AT(c, 0x52fcfu);
    (void)x86_sub(c, c.r[7], c.r[0], 0, 4);
    // 052fd1  jl 0x52ff7
    X86_AT(c, 0x52fd1u);
    if (x86_cc(c, 12)) { goto L_52ff7; }
    X86_TICK(c, 7);
    // 052fd3  and eax, eax
    X86_AT(c, 0x52fd3u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 052fd5  jle 0x52ff7
    X86_AT(c, 0x52fd5u);
    if (x86_cc(c, 14)) { goto L_52ff7; }
    X86_TICK(c, 53);
    // 052fd7  xchg ecx, eax
    X86_AT(c, 0x52fd7u);
    { uint32_t t = c.r[1]; c.r[1] = c.r[0]; c.r[0] = t; }
    // 052fd8  mov eax, dword ptr [ebx]
    X86_AT(c, 0x52fd8u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3])));
    // 052fda  mov edx, dword ptr [ebp + 0xc]
    X86_AT(c, 0x52fdau);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 052fdd  push esi
    X86_AT(c, 0x52fddu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 052fde  push edi
    X86_AT(c, 0x52fdeu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 052fdf  mov esi, eax
    X86_AT(c, 0x52fdfu);
    c.r[6] = c.r[0];
    // 052fe1  mov edi, edx
    X86_AT(c, 0x52fe1u);
    c.r[7] = c.r[2];
    // 052fe3  movsb byte ptr es:[edi], byte ptr [esi]
    X86_AT(c, 0x52fe3u);
    x86_string(c, 0, 1, 243, 4, 3);
    // 052fe5  pop edi
    X86_AT(c, 0x52fe5u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 052fe6  pop esi
    X86_AT(c, 0x52fe6u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 052fe7  sub edi, dword ptr [ebx + 4]
    X86_AT(c, 0x52fe7u);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u))), 0, 4); }
    // 052fea  mov eax, dword ptr [ebx + 4]
    X86_AT(c, 0x52feau);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)));
    // 052fed  add dword ptr [ebp - 4], eax
    X86_AT(c, 0x52fedu);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 052ff0  mov dword ptr [ebx + 4], 0
    X86_AT(c, 0x52ff0u);
    wr32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)), 0x0u);
L_52ff7:
    X86_TICK(c, 7);
    // 052ff7  cmp edi, 0x200
    X86_AT(c, 0x52ff7u);
    (void)x86_sub(c, c.r[7], 0x200u, 0, 4);
    // 052ffd  jb 0x53035
    X86_AT(c, 0x52ffdu);
    if (x86_cc(c, 2)) { goto L_53035; }
    X86_TICK(c, 10);
    // 052fff  mov esi, edi
    X86_AT(c, 0x52fffu);
    c.r[6] = c.r[7];
    // 053001  shr esi, 9
    X86_AT(c, 0x53001u);
    { uint32_t v = c.r[6]; bool w; uint32_t r = x86_shift(c, 5, v, 0x9u, 4, w); if (w) c.r[6] = r; }
    // 053004  shl esi, 9
    X86_AT(c, 0x53004u);
    { uint32_t v = c.r[6]; bool w; uint32_t r = x86_shift(c, 4, v, 0x9u, 4, w); if (w) c.r[6] = r; }
    // 053007  mov dword ptr [ebp - 0xc], 0
    X86_AT(c, 0x53007u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)), 0x0u);
L_5300e:
    X86_TICK(c, 27);
    // 05300e  push esi
    X86_AT(c, 0x5300eu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 05300f  mov eax, dword ptr [ebp + 0xc]
    X86_AT(c, 0x5300fu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 053012  add eax, dword ptr [ebp - 4]
    X86_AT(c, 0x53012u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))), 0, 4); }
    // 053015  push eax
    X86_AT(c, 0x53015u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 053016  mov al, byte ptr [ebx + 0xe]
    X86_AT(c, 0x53016u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xEu))));
    // 053019  push eax
    X86_AT(c, 0x53019u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 05301a  call 0x55ce0
    X86_AT(c, 0x5301au);
    push32(c, 0x5301fu); x86_call_known(c, 0x55ce0u, f_00055ce0); X86_RET(c, 0x5301fu);
    X86_TICK(c, 25);
    // 05301f  mov dword ptr [ebp - 8], eax
    X86_AT(c, 0x5301fu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), c.r[0]);
    // 053022  add dword ptr [ebp - 0xc], eax
    X86_AT(c, 0x53022u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 053025  sub esi, eax
    X86_AT(c, 0x53025u);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[0], 0, 4); }
    // 053027  add dword ptr [ebp - 4], eax
    X86_AT(c, 0x53027u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 05302a  and esi, esi
    X86_AT(c, 0x5302au);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & c.r[6], 4); }
    // 05302c  je 0x53032
    X86_AT(c, 0x5302cu);
    if (x86_cc(c, 4)) { goto L_53032; }
    X86_TICK(c, 7);
    // 05302e  and eax, eax
    X86_AT(c, 0x5302eu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 053030  jne 0x5300e
    X86_AT(c, 0x53030u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x5300eu); goto L_5300e; }
L_53032:
    X86_TICK(c, 6);
    // 053032  sub edi, dword ptr [ebp - 0xc]
    X86_AT(c, 0x53032u);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u))), 0, 4); }
L_53035:
    X86_TICK(c, 7);
    // 053035  and edi, edi
    X86_AT(c, 0x53035u);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & c.r[7], 4); }
    // 053037  jbe 0x5308e
    X86_AT(c, 0x53037u);
    if (x86_cc(c, 6)) { goto L_5308e; }
    X86_TICK(c, 12);
    // 053039  cmp dword ptr [ebx + 4], 0
    X86_AT(c, 0x53039u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u))), 0x0u, 0, 4);
    // 05303d  jne 0x5305e
    X86_AT(c, 0x5303du);
    if (x86_cc(c, 5)) { goto L_5305e; }
    X86_TICK(c, 12);
    // 05303f  test byte ptr [ebx + 0xc], 0x10
    X86_AT(c, 0x5303fu);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xCu))) & 0x10u, 1);
    // 053043  jne 0x53096
    X86_AT(c, 0x53043u);
    if (x86_cc(c, 5)) { goto L_53096; }
    X86_TICK(c, 20);
    // 053045  push 0x200
    X86_AT(c, 0x53045u);
    { uint32_t v = 0x200u; push32(c, v); }
    // 05304a  push dword ptr [ebx + 8]
    X86_AT(c, 0x5304au);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x8u))); push32(c, v); }
    // 05304d  mov al, byte ptr [ebx + 0xe]
    X86_AT(c, 0x5304du);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xEu))));
    // 053050  push eax
    X86_AT(c, 0x53050u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 053051  call 0x55ce0
    X86_AT(c, 0x53051u);
    push32(c, 0x53056u); x86_call_known(c, 0x55ce0u, f_00055ce0); X86_RET(c, 0x53056u);
    X86_TICK(c, 8);
    // 053056  mov dword ptr [ebx + 4], eax
    X86_AT(c, 0x53056u);
    wr32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)), c.r[0]);
    // 053059  mov eax, dword ptr [ebx + 8]
    X86_AT(c, 0x53059u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x8u)));
    // 05305c  mov dword ptr [ebx], eax
    X86_AT(c, 0x5305cu);
    wr32((c.sbase[3] + (uint32_t)(c.r[3])), c.r[0]);
L_5305e:
    X86_TICK(c, 12);
    // 05305e  cmp dword ptr [ebx + 4], 0
    X86_AT(c, 0x5305eu);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u))), 0x0u, 0, 4);
    // 053062  jle 0x53096
    X86_AT(c, 0x53062u);
    if (x86_cc(c, 14)) { goto L_53096; }
L_53064:
    X86_TICK(c, 13);
    // 053064  mov eax, dword ptr [ebx + 4]
    X86_AT(c, 0x53064u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)));
    // 053067  mov edx, edi
    X86_AT(c, 0x53067u);
    c.r[2] = c.r[7];
    // 053069  cmp edx, eax
    X86_AT(c, 0x53069u);
    (void)x86_sub(c, c.r[2], c.r[0], 0, 4);
    // 05306b  jl 0x5306e
    X86_AT(c, 0x5306bu);
    if (x86_cc(c, 12)) { goto L_5306e; }
    X86_TICK(c, 3);
    // 05306d  xchg edx, eax
    X86_AT(c, 0x5306du);
    { uint32_t t = c.r[2]; c.r[2] = c.r[0]; c.r[0] = t; }
L_5306e:
    X86_TICK(c, 2);
    // 05306e  mov esi, edx
    X86_AT(c, 0x5306eu);
    c.r[6] = c.r[2];
L_53070:
    X86_TICK(c, 62);
    // 053070  mov ecx, esi
    X86_AT(c, 0x53070u);
    c.r[1] = c.r[6];
    // 053072  mov eax, dword ptr [ebx]
    X86_AT(c, 0x53072u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3])));
    // 053074  mov edx, dword ptr [ebp + 0xc]
    X86_AT(c, 0x53074u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 053077  add edx, dword ptr [ebp - 4]
    X86_AT(c, 0x53077u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))), 0, 4); }
    // 05307a  push esi
    X86_AT(c, 0x5307au);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 05307b  push edi
    X86_AT(c, 0x5307bu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 05307c  mov esi, eax
    X86_AT(c, 0x5307cu);
    c.r[6] = c.r[0];
    // 05307e  mov edi, edx
    X86_AT(c, 0x5307eu);
    c.r[7] = c.r[2];
    // 053080  movsb byte ptr es:[edi], byte ptr [esi]
    X86_AT(c, 0x53080u);
    x86_string(c, 0, 1, 243, 4, 3);
    // 053082  pop edi
    X86_AT(c, 0x53082u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 053083  pop esi
    X86_AT(c, 0x53083u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 053084  add dword ptr [ebp - 4], esi
    X86_AT(c, 0x53084u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[6], 0, 4)); }
    // 053087  sub dword ptr [ebx + 4], esi
    X86_AT(c, 0x53087u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)); uint32_t v = rd32(ea); wr32(ea, x86_sub(c, v, c.r[6], 0, 4)); }
    // 05308a  sub edi, esi
    X86_AT(c, 0x5308au);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[6], 0, 4); }
    // 05308c  add dword ptr [ebx], esi
    X86_AT(c, 0x5308cu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3])); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[6], 0, 4)); }
L_5308e:
    X86_TICK(c, 7);
    // 05308e  and edi, edi
    X86_AT(c, 0x5308eu);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & c.r[7], 4); }
    // 053090  ja 0x52dc9
    X86_AT(c, 0x53090u);
    if (x86_cc(c, 7)) { X86_POLL(c, 0x52dc9u); goto L_52dc9; }
L_53096:
    X86_TICK(c, 12);
    // 053096  cmp dword ptr [ebp - 4], 0
    X86_AT(c, 0x53096u);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))), 0x0u, 0, 4);
    // 05309a  jne 0x530a0
    X86_AT(c, 0x5309au);
    if (x86_cc(c, 5)) { goto L_530a0; }
    X86_TICK(c, 7);
    // 05309c  or byte ptr [ebx + 0xc], 0x10
    X86_AT(c, 0x5309cu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3] + 0xCu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | 0x10u, 1)); }
L_530a0:
    X86_TICK(c, 13);
    // 0530a0  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0x530a0u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0530a3  mov dword ptr [0x4b490], eax
    X86_AT(c, 0x530a3u);
    wr32((c.sbase[3] + (uint32_t)(0x4B490u)), c.r[0]);
    // 0530a8  jmp 0x531d8
    X86_AT(c, 0x530a8u);
    goto L_531d8;
L_530ad:
    X86_TICK(c, 14);
    // 0530ad  mov dword ptr [0x4b490], 0
    X86_AT(c, 0x530adu);
    wr32((c.sbase[3] + (uint32_t)(0x4B490u)), 0x0u);
    // 0530b7  test byte ptr [ebx + 0xc], 0x40
    X86_AT(c, 0x530b7u);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xCu))) & 0x40u, 1);
    // 0530bb  je 0x531c3
    X86_AT(c, 0x530bbu);
    if (x86_cc(c, 4)) { goto L_531c3; }
    X86_TICK(c, 12);
    // 0530c1  test byte ptr [ebx + 0xd], 4
    X86_AT(c, 0x530c1u);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xDu))) & 0x4u, 1);
    // 0530c5  jne 0x531c7
    X86_AT(c, 0x530c5u);
    if (x86_cc(c, 5)) { goto L_531c7; }
    X86_TICK(c, 7);
    // 0530cb  jmp 0x53195
    X86_AT(c, 0x530cbu);
    goto L_53195;
L_530d0:
    X86_TICK(c, 19);
    // 0530d0  push 1
    X86_AT(c, 0x530d0u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0530d2  lea eax, [ebp - 0xf]
    X86_AT(c, 0x530d2u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFF1u);
    // 0530d5  push eax
    X86_AT(c, 0x530d5u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0530d6  mov dl, byte ptr [ebx + 0xe]
    X86_AT(c, 0x530d6u);
    s8(c, 2, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xEu))));
    // 0530d9  push edx
    X86_AT(c, 0x530d9u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0530da  call 0x55ce0
    X86_AT(c, 0x530dau);
    push32(c, 0x530dfu); x86_call_known(c, 0x55ce0u, f_00055ce0); X86_RET(c, 0x530dfu);
    X86_TICK(c, 10);
    // 0530df  xchg esi, eax
    X86_AT(c, 0x530dfu);
    { uint32_t t = c.r[6]; c.r[6] = c.r[0]; c.r[0] = t; }
    // 0530e0  and esi, esi
    X86_AT(c, 0x530e0u);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & c.r[6], 4); }
    // 0530e2  je 0x5313a
    X86_AT(c, 0x530e2u);
    if (x86_cc(c, 4)) { goto L_5313a; }
    X86_TICK(c, 12);
    // 0530e4  cmp byte ptr [ebp - 0xf], 0x1a
    X86_AT(c, 0x530e4u);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF1u))), 0x1Au, 0, 1);
    // 0530e8  je 0x5313a
    X86_AT(c, 0x530e8u);
    if (x86_cc(c, 4)) { goto L_5313a; }
L_530ea:
    X86_TICK(c, 15);
    // 0530ea  mov al, byte ptr [ebp - 0xf]
    X86_AT(c, 0x530eau);
    s8(c, 0, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF1u))));
    // 0530ed  cmp al, byte ptr [0x4b48a]
    X86_AT(c, 0x530edu);
    (void)x86_sub(c, g8(c, 0), rd8((c.sbase[3] + (uint32_t)(0x4B48Au))), 0, 1);
    // 0530f3  jne 0x53184
    X86_AT(c, 0x530f3u);
    if (x86_cc(c, 5)) { goto L_53184; }
    X86_TICK(c, 13);
    // 0530f9  mov al, byte ptr [ebx + 0xe]
    X86_AT(c, 0x530f9u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xEu))));
    // 0530fc  push eax
    X86_AT(c, 0x530fcu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0530fd  call 0x55d70
    X86_AT(c, 0x530fdu);
    push32(c, 0x53102u); x86_call_known(c, 0x55d70u, f_00055d70); X86_RET(c, 0x53102u);
    X86_TICK(c, 7);
    // 053102  dec al
    X86_AT(c, 0x53102u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_dec(c, v, 1)); }
    // 053104  je 0x5314e
    X86_AT(c, 0x53104u);
    if (x86_cc(c, 4)) { goto L_5314e; }
    X86_TICK(c, 19);
    // 053106  push 1
    X86_AT(c, 0x53106u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 053108  lea eax, [ebp - 0xf]
    X86_AT(c, 0x53108u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFF1u);
    // 05310b  push eax
    X86_AT(c, 0x5310bu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 05310c  mov dl, byte ptr [ebx + 0xe]
    X86_AT(c, 0x5310cu);
    s8(c, 2, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xEu))));
    // 05310f  push edx
    X86_AT(c, 0x5310fu);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 053110  call 0x55ce0
    X86_AT(c, 0x53110u);
    push32(c, 0x53115u); x86_call_known(c, 0x55ce0u, f_00055ce0); X86_RET(c, 0x53115u);
    X86_TICK(c, 10);
    // 053115  xchg esi, eax
    X86_AT(c, 0x53115u);
    { uint32_t t = c.r[6]; c.r[6] = c.r[0]; c.r[0] = t; }
    // 053116  and esi, esi
    X86_AT(c, 0x53116u);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & c.r[6], 4); }
    // 053118  je 0x53120
    X86_AT(c, 0x53118u);
    if (x86_cc(c, 4)) { goto L_53120; }
    X86_TICK(c, 12);
    // 05311a  cmp byte ptr [ebp - 0xf], 0x1a
    X86_AT(c, 0x5311au);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF1u))), 0x1Au, 0, 1);
    // 05311e  jne 0x53143
    X86_AT(c, 0x5311eu);
    if (x86_cc(c, 5)) { goto L_53143; }
L_53120:
    X86_TICK(c, 28);
    // 053120  mov al, byte ptr [0x4b48a]
    X86_AT(c, 0x53120u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(0x4B48Au))));
    // 053125  mov edx, dword ptr [ebp + 0xc]
    X86_AT(c, 0x53125u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 053128  mov byte ptr [edx], al
    X86_AT(c, 0x53128u);
    wr8((c.sbase[3] + (uint32_t)(c.r[2])), g8(c, 0));
    // 05312a  inc dword ptr [0x4b490]
    X86_AT(c, 0x5312au);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x4B490u)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 053130  cmp byte ptr [ebp - 0xf], 0x1a
    X86_AT(c, 0x53130u);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF1u))), 0x1Au, 0, 1);
    // 053134  jne 0x531c7
    X86_AT(c, 0x53134u);
    if (x86_cc(c, 5)) { goto L_531c7; }
L_5313a:
    X86_TICK(c, 14);
    // 05313a  or byte ptr [ebx + 0xd], 4
    X86_AT(c, 0x5313au);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3] + 0xDu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | 0x4u, 1)); }
    // 05313e  jmp 0x531c7
    X86_AT(c, 0x5313eu);
    goto L_531c7;
L_53143:
    X86_TICK(c, 15);
    // 053143  mov al, byte ptr [ebp - 0xf]
    X86_AT(c, 0x53143u);
    s8(c, 0, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF1u))));
    // 053146  cmp al, byte ptr [0x4b48b]
    X86_AT(c, 0x53146u);
    (void)x86_sub(c, g8(c, 0), rd8((c.sbase[3] + (uint32_t)(0x4B48Bu))), 0, 1);
    // 05314c  jne 0x53156
    X86_AT(c, 0x5314cu);
    if (x86_cc(c, 5)) { goto L_53156; }
L_5314e:
    X86_TICK(c, 13);
    // 05314e  mov eax, dword ptr [ebp + 0xc]
    X86_AT(c, 0x5314eu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 053151  mov byte ptr [eax], 0xa
    X86_AT(c, 0x53151u);
    wr8((c.sbase[3] + (uint32_t)(c.r[0])), 0xAu);
    // 053154  jmp 0x5318c
    X86_AT(c, 0x53154u);
    goto L_5318c;
L_53156:
    X86_TICK(c, 33);
    // 053156  mov al, byte ptr [0x4b48a]
    X86_AT(c, 0x53156u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(0x4B48Au))));
    // 05315b  mov edx, dword ptr [ebp + 0xc]
    X86_AT(c, 0x5315bu);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 05315e  mov byte ptr [edx], al
    X86_AT(c, 0x5315eu);
    wr8((c.sbase[3] + (uint32_t)(c.r[2])), g8(c, 0));
    // 053160  inc dword ptr [0x4b490]
    X86_AT(c, 0x53160u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x4B490u)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 053166  inc dword ptr [ebp + 0xc]
    X86_AT(c, 0x53166u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 053169  cmp edi, dword ptr [0x4b490]
    X86_AT(c, 0x53169u);
    (void)x86_sub(c, c.r[7], rd32((c.sbase[3] + (uint32_t)(0x4B490u))), 0, 4);
    // 05316f  jne 0x530ea
    X86_AT(c, 0x5316fu);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x530eau); goto L_530ea; }
    X86_TICK(c, 17);
    // 053175  push 1
    X86_AT(c, 0x53175u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 053177  push 0xffffffff
    X86_AT(c, 0x53177u);
    { uint32_t v = 0xFFFFFFFFu; push32(c, v); }
    // 053179  mov al, byte ptr [ebx + 0xe]
    X86_AT(c, 0x53179u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xEu))));
    // 05317c  push eax
    X86_AT(c, 0x5317cu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 05317d  call 0x55db8
    X86_AT(c, 0x5317du);
    push32(c, 0x53182u); x86_call_known(c, 0x55db8u, f_00055db8); X86_RET(c, 0x53182u);
    X86_TICK(c, 7);
    // 053182  jmp 0x531c7
    X86_AT(c, 0x53182u);
    goto L_531c7;
L_53184:
    X86_TICK(c, 10);
    // 053184  mov al, byte ptr [ebp - 0xf]
    X86_AT(c, 0x53184u);
    s8(c, 0, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF1u))));
    // 053187  mov edx, dword ptr [ebp + 0xc]
    X86_AT(c, 0x53187u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 05318a  mov byte ptr [edx], al
    X86_AT(c, 0x5318au);
    wr8((c.sbase[3] + (uint32_t)(c.r[2])), g8(c, 0));
L_5318c:
    X86_TICK(c, 12);
    // 05318c  inc dword ptr [0x4b490]
    X86_AT(c, 0x5318cu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x4B490u)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 053192  inc dword ptr [ebp + 0xc]
    X86_AT(c, 0x53192u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
L_53195:
    X86_TICK(c, 11);
    // 053195  cmp edi, dword ptr [0x4b490]
    X86_AT(c, 0x53195u);
    (void)x86_sub(c, c.r[7], rd32((c.sbase[3] + (uint32_t)(0x4B490u))), 0, 4);
    // 05319b  jbe 0x531c7
    X86_AT(c, 0x5319bu);
    if (x86_cc(c, 6)) { goto L_531c7; }
    X86_TICK(c, 7);
    // 05319d  jmp 0x530d0
    X86_AT(c, 0x5319du);
    X86_POLL(c, 0x530d0u); goto L_530d0;
L_531a2:
    X86_TICK(c, 27);
    // 0531a2  push edi
    X86_AT(c, 0x531a2u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0531a3  mov eax, dword ptr [ebp + 0xc]
    X86_AT(c, 0x531a3u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0531a6  add eax, dword ptr [0x4b490]
    X86_AT(c, 0x531a6u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[3] + (uint32_t)(0x4B490u))), 0, 4); }
    // 0531ac  push eax
    X86_AT(c, 0x531acu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0531ad  mov al, byte ptr [ebx + 0xe]
    X86_AT(c, 0x531adu);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xEu))));
    // 0531b0  push eax
    X86_AT(c, 0x531b0u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0531b1  call 0x55ce0
    X86_AT(c, 0x531b1u);
    push32(c, 0x531b6u); x86_call_known(c, 0x55ce0u, f_00055ce0); X86_RET(c, 0x531b6u);
    X86_TICK(c, 10);
    // 0531b6  xchg esi, eax
    X86_AT(c, 0x531b6u);
    { uint32_t t = c.r[6]; c.r[6] = c.r[0]; c.r[0] = t; }
    // 0531b7  and esi, esi
    X86_AT(c, 0x531b7u);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & c.r[6], 4); }
    // 0531b9  je 0x531c7
    X86_AT(c, 0x531b9u);
    if (x86_cc(c, 4)) { goto L_531c7; }
    X86_TICK(c, 9);
    // 0531bb  add dword ptr [0x4b490], esi
    X86_AT(c, 0x531bbu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x4B490u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[6], 0, 4)); }
    // 0531c1  sub edi, esi
    X86_AT(c, 0x531c1u);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[6], 0, 4); }
L_531c3:
    X86_TICK(c, 7);
    // 0531c3  and edi, edi
    X86_AT(c, 0x531c3u);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & c.r[7], 4); }
    // 0531c5  ja 0x531a2
    X86_AT(c, 0x531c5u);
    if (x86_cc(c, 7)) { X86_POLL(c, 0x531a2u); goto L_531a2; }
L_531c7:
    X86_TICK(c, 12);
    // 0531c7  cmp dword ptr [0x4b490], 0
    X86_AT(c, 0x531c7u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0x4B490u))), 0x0u, 0, 4);
    // 0531ce  jne 0x531d8
    X86_AT(c, 0x531ceu);
    if (x86_cc(c, 5)) { goto L_531d8; }
    X86_TICK(c, 7);
    // 0531d0  and edi, edi
    X86_AT(c, 0x531d0u);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & c.r[7], 4); }
    // 0531d2  jbe 0x531d8
    X86_AT(c, 0x531d2u);
    if (x86_cc(c, 6)) { goto L_531d8; }
    X86_TICK(c, 7);
    // 0531d4  or byte ptr [ebx + 0xc], 0x10
    X86_AT(c, 0x531d4u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3] + 0xCu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | 0x10u, 1)); }
L_531d8:
    X86_TICK(c, 12);
    // 0531d8  cmp word ptr [0x4b81e], 0
    X86_AT(c, 0x531d8u);
    (void)x86_sub(c, rd16((c.sbase[3] + (uint32_t)(0x4B81Eu))), 0x0u, 0, 2);
    // 0531e0  je 0x531e8
    X86_AT(c, 0x531e0u);
    if (x86_cc(c, 4)) { goto L_531e8; }
    X86_TICK(c, 14);
    // 0531e2  or byte ptr [ebx + 0xc], 0x20
    X86_AT(c, 0x531e2u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3] + 0xCu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | 0x20u, 1)); }
    // 0531e6  jmp 0x531f2
    X86_AT(c, 0x531e6u);
    goto L_531f2;
L_531e8:
    X86_TICK(c, 6);
    // 0531e8  mov ax, word ptr [ebp - 0xe]
    X86_AT(c, 0x531e8u);
    s16(c, 0, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF2u))));
    // 0531ec  mov word ptr [0x4b81e], ax
    X86_AT(c, 0x531ecu);
    wr16((c.sbase[3] + (uint32_t)(0x4B81Eu)), (c.r[0] & 0xFFFFu));
L_531f2:
    X86_TICK(c, 28);
    // 0531f2  pop edi
    X86_AT(c, 0x531f2u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0531f3  pop esi
    X86_AT(c, 0x531f3u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0531f4  pop ebx
    X86_AT(c, 0x531f4u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0531f5  leave 
    X86_AT(c, 0x531f5u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0531f6  ret 0xc
    X86_AT(c, 0x531f6u);
    c.eip = pop32(c); c.r[4] += 0xCu; return;
    x86_fault(c, 0x52d98u, "ran off the end of a function");
}
void f_00053070(X86Cpu& c) {
    goto L_53070;
L_52dc9:
    X86_TICK(c, 12);
    // 052dc9  test byte ptr [ebx + 0xc], 0x40
    X86_AT(c, 0x52dc9u);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xCu))) & 0x40u, 1);
    // 052dcd  je 0x52fc6
    X86_AT(c, 0x52dcdu);
    if (x86_cc(c, 4)) { goto L_52fc6; }
    X86_TICK(c, 12);
    // 052dd3  cmp dword ptr [ebx + 4], 1
    X86_AT(c, 0x52dd3u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u))), 0x1u, 0, 4);
    // 052dd7  jne 0x52e1e
    X86_AT(c, 0x52dd7u);
    if (x86_cc(c, 5)) { goto L_52e1e; }
    X86_TICK(c, 12);
    // 052dd9  cmp word ptr [ebx + 0x10], 0xfffe
    X86_AT(c, 0x52dd9u);
    (void)x86_sub(c, rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u))), 0xFFFEu, 0, 2);
    // 052dde  jne 0x52e1e
    X86_AT(c, 0x52ddeu);
    if (x86_cc(c, 5)) { goto L_52e1e; }
    X86_TICK(c, 12);
    // 052de0  test byte ptr [ebx + 0xd], 4
    X86_AT(c, 0x52de0u);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xDu))) & 0x4u, 1);
    // 052de4  jne 0x53064
    X86_AT(c, 0x52de4u);
    if (x86_cc(c, 5)) { goto L_53064; }
    X86_TICK(c, 33);
    // 052dea  mov al, byte ptr [0x4b48a]
    X86_AT(c, 0x52deau);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(0x4B48Au))));
    // 052def  mov edx, dword ptr [ebx + 8]
    X86_AT(c, 0x52defu);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x8u)));
    // 052df2  mov byte ptr [edx], al
    X86_AT(c, 0x52df2u);
    wr8((c.sbase[3] + (uint32_t)(c.r[2])), g8(c, 0));
    // 052df4  push 0x1ff
    X86_AT(c, 0x52df4u);
    { uint32_t v = 0x1FFu; push32(c, v); }
    // 052df9  mov eax, dword ptr [ebx + 8]
    X86_AT(c, 0x52df9u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x8u)));
    // 052dfc  inc eax
    X86_AT(c, 0x52dfcu);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 052dfd  push eax
    X86_AT(c, 0x52dfdu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 052dfe  mov al, byte ptr [ebx + 0xe]
    X86_AT(c, 0x52dfeu);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xEu))));
    // 052e01  push eax
    X86_AT(c, 0x52e01u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 052e02  call 0x55ce0
    X86_AT(c, 0x52e02u);
    push32(c, 0x52e07u); x86_call_known(c, 0x55ce0u, f_00055ce0); X86_RET(c, 0x52e07u);
    X86_TICK(c, 11);
    // 052e07  inc eax
    X86_AT(c, 0x52e07u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 052e08  mov dword ptr [ebx + 4], eax
    X86_AT(c, 0x52e08u);
    wr32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)), c.r[0]);
    // 052e0b  dec eax
    X86_AT(c, 0x52e0bu);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 052e0c  jne 0x52e56
    X86_AT(c, 0x52e0cu);
    if (x86_cc(c, 5)) { goto L_52e56; }
    X86_TICK(c, 15);
    // 052e0e  mov eax, dword ptr [ebx + 8]
    X86_AT(c, 0x52e0eu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x8u)));
    // 052e11  mov dword ptr [ebx], eax
    X86_AT(c, 0x52e11u);
    wr32((c.sbase[3] + (uint32_t)(c.r[3])), c.r[0]);
    // 052e13  mov word ptr [ebx + 0x10], 0x200
    X86_AT(c, 0x52e13u);
    wr16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u)), 0x200u);
    // 052e19  jmp 0x53064
    X86_AT(c, 0x52e19u);
    goto L_53064;
L_52e1e:
    X86_TICK(c, 12);
    // 052e1e  cmp dword ptr [ebx + 4], 0
    X86_AT(c, 0x52e1eu);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u))), 0x0u, 0, 4);
    // 052e22  jne 0x52e9b
    X86_AT(c, 0x52e22u);
    if (x86_cc(c, 5)) { goto L_52e9b; }
    X86_TICK(c, 12);
    // 052e28  test byte ptr [ebx + 0xc], 0x10
    X86_AT(c, 0x52e28u);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xCu))) & 0x10u, 1);
    // 052e2c  jne 0x53096
    X86_AT(c, 0x52e2cu);
    if (x86_cc(c, 5)) { goto L_53096; }
    X86_TICK(c, 12);
    // 052e32  test byte ptr [ebx + 0xd], 4
    X86_AT(c, 0x52e32u);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xDu))) & 0x4u, 1);
    // 052e36  jne 0x52e4c
    X86_AT(c, 0x52e36u);
    if (x86_cc(c, 5)) { goto L_52e4c; }
    X86_TICK(c, 20);
    // 052e38  push 0x200
    X86_AT(c, 0x52e38u);
    { uint32_t v = 0x200u; push32(c, v); }
    // 052e3d  push dword ptr [ebx + 8]
    X86_AT(c, 0x52e3du);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x8u))); push32(c, v); }
    // 052e40  mov al, byte ptr [ebx + 0xe]
    X86_AT(c, 0x52e40u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xEu))));
    // 052e43  push eax
    X86_AT(c, 0x52e43u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 052e44  call 0x55ce0
    X86_AT(c, 0x52e44u);
    push32(c, 0x52e49u); x86_call_known(c, 0x55ce0u, f_00055ce0); X86_RET(c, 0x52e49u);
    X86_TICK(c, 2);
    // 052e49  mov dword ptr [ebx + 4], eax
    X86_AT(c, 0x52e49u);
    wr32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)), c.r[0]);
L_52e4c:
    X86_TICK(c, 12);
    // 052e4c  cmp dword ptr [ebx + 4], 0
    X86_AT(c, 0x52e4cu);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u))), 0x0u, 0, 4);
    // 052e50  je 0x53096
    X86_AT(c, 0x52e50u);
    if (x86_cc(c, 4)) { goto L_53096; }
L_52e56:
    X86_TICK(c, 28);
    // 052e56  mov edx, dword ptr [ebx + 4]
    X86_AT(c, 0x52e56u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)));
    // 052e59  mov al, 0x1a
    X86_AT(c, 0x52e59u);
    s8(c, 0, 0x1Au);
    // 052e5b  mov ecx, dword ptr [ebx + 8]
    X86_AT(c, 0x52e5bu);
    c.r[1] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x8u)));
    // 052e5e  push edi
    X86_AT(c, 0x52e5eu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 052e5f  mov edi, ecx
    X86_AT(c, 0x52e5fu);
    c.r[7] = c.r[1];
    // 052e61  mov ecx, edx
    X86_AT(c, 0x52e61u);
    c.r[1] = c.r[2];
    // 052e63  scasb al, byte ptr es:[edi]
    X86_AT(c, 0x52e63u);
    x86_string(c, 4, 1, 242, 4, 3);
    // 052e65  jne 0x52e6a
    X86_AT(c, 0x52e65u);
    if (x86_cc(c, 5)) { goto L_52e6a; }
    X86_TICK(c, 4);
    // 052e67  inc ecx
    X86_AT(c, 0x52e67u);
    { uint32_t v = c.r[1]; c.r[1] = x86_inc(c, v, 4); }
    // 052e68  sub edx, ecx
    X86_AT(c, 0x52e68u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[1], 0, 4); }
L_52e6a:
    X86_TICK(c, 17);
    // 052e6a  pop edi
    X86_AT(c, 0x52e6au);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 052e6b  mov word ptr [ebp - 0x10], dx
    X86_AT(c, 0x52e6bu);
    wr16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u)), (c.r[2] & 0xFFFFu));
    // 052e6f  cmp edx, dword ptr [ebx + 4]
    X86_AT(c, 0x52e6fu);
    (void)x86_sub(c, c.r[2], rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u))), 0, 4);
    // 052e72  je 0x52e90
    X86_AT(c, 0x52e72u);
    if (x86_cc(c, 4)) { goto L_52e90; }
    X86_TICK(c, 32);
    // 052e74  or byte ptr [ebx + 0xd], 4
    X86_AT(c, 0x52e74u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3] + 0xDu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | 0x4u, 1)); }
    // 052e78  push 1
    X86_AT(c, 0x52e78u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 052e7a  mov dword ptr [ebp - 0x14], edx
    X86_AT(c, 0x52e7au);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu)), c.r[2]);
    // 052e7d  sub edx, dword ptr [ebx + 4]
    X86_AT(c, 0x52e7du);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u))), 0, 4); }
    // 052e80  push edx
    X86_AT(c, 0x52e80u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 052e81  mov al, byte ptr [ebx + 0xe]
    X86_AT(c, 0x52e81u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xEu))));
    // 052e84  push eax
    X86_AT(c, 0x52e84u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 052e85  call 0x55db8
    X86_AT(c, 0x52e85u);
    push32(c, 0x52e8au); x86_call_known(c, 0x55db8u, f_00055db8); X86_RET(c, 0x52e8au);
    X86_TICK(c, 6);
    // 052e8a  mov eax, dword ptr [ebp - 0x14]
    X86_AT(c, 0x52e8au);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu)));
    // 052e8d  mov dword ptr [ebx + 4], eax
    X86_AT(c, 0x52e8du);
    wr32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)), c.r[0]);
L_52e90:
    X86_TICK(c, 8);
    // 052e90  mov eax, dword ptr [ebx + 8]
    X86_AT(c, 0x52e90u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x8u)));
    // 052e93  mov dword ptr [ebx], eax
    X86_AT(c, 0x52e93u);
    wr32((c.sbase[3] + (uint32_t)(c.r[3])), c.r[0]);
    // 052e95  mov word ptr [ebx + 0x10], 0xffff
    X86_AT(c, 0x52e95u);
    wr16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u)), 0xFFFFu);
L_52e9b:
    X86_TICK(c, 12);
    // 052e9b  cmp dword ptr [ebx + 4], 0
    X86_AT(c, 0x52e9bu);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u))), 0x0u, 0, 4);
    // 052e9f  jle 0x5308e
    X86_AT(c, 0x52e9fu);
    if (x86_cc(c, 14)) { goto L_5308e; }
    X86_TICK(c, 11);
    // 052ea5  mov ax, word ptr [ebx + 0x10]
    X86_AT(c, 0x52ea5u);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u))));
    // 052ea9  cmp ax, 0xffff
    X86_AT(c, 0x52ea9u);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), 0xFFFFu, 0, 2);
    // 052ead  je 0x52ebd
    X86_AT(c, 0x52eadu);
    if (x86_cc(c, 4)) { goto L_52ebd; }
    X86_TICK(c, 20);
    // 052eaf  movsx eax, ax
    X86_AT(c, 0x52eafu);
    c.r[0] = (uint32_t)(int32_t)(int16_t)(c.r[0] & 0xFFFFu);
    // 052eb2  add eax, dword ptr [ebx + 8]
    X86_AT(c, 0x52eb2u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x8u))), 0, 4); }
    // 052eb5  cmp eax, dword ptr [ebx]
    X86_AT(c, 0x52eb5u);
    (void)x86_sub(c, c.r[0], rd32((c.sbase[3] + (uint32_t)(c.r[3]))), 0, 4);
    // 052eb7  jge 0x52f54
    X86_AT(c, 0x52eb7u);
    if (x86_cc(c, 13)) { goto L_52f54; }
L_52ebd:
    X86_TICK(c, 30);
    // 052ebd  mov edx, dword ptr [ebx + 4]
    X86_AT(c, 0x52ebdu);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)));
    // 052ec0  mov al, byte ptr [0x4b48a]
    X86_AT(c, 0x52ec0u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(0x4B48Au))));
    // 052ec5  mov ecx, dword ptr [ebx]
    X86_AT(c, 0x52ec5u);
    c.r[1] = rd32((c.sbase[3] + (uint32_t)(c.r[3])));
    // 052ec7  push edi
    X86_AT(c, 0x52ec7u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 052ec8  mov edi, ecx
    X86_AT(c, 0x52ec8u);
    c.r[7] = c.r[1];
    // 052eca  mov ecx, edx
    X86_AT(c, 0x52ecau);
    c.r[1] = c.r[2];
    // 052ecc  scasb al, byte ptr es:[edi]
    X86_AT(c, 0x52eccu);
    x86_string(c, 4, 1, 242, 4, 3);
    // 052ece  jne 0x52ed3
    X86_AT(c, 0x52eceu);
    if (x86_cc(c, 5)) { goto L_52ed3; }
    X86_TICK(c, 4);
    // 052ed0  inc ecx
    X86_AT(c, 0x52ed0u);
    { uint32_t v = c.r[1]; c.r[1] = x86_inc(c, v, 4); }
    // 052ed1  sub edx, ecx
    X86_AT(c, 0x52ed1u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[1], 0, 4); }
L_52ed3:
    X86_TICK(c, 13);
    // 052ed3  pop edi
    X86_AT(c, 0x52ed3u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 052ed4  mov word ptr [ebx + 0x10], dx
    X86_AT(c, 0x52ed4u);
    wr16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u)), (c.r[2] & 0xFFFFu));
    // 052ed8  jmp 0x52f0d
    X86_AT(c, 0x52ed8u);
    goto L_52f0d;
L_52eda:
    X86_TICK(c, 59);
    // 052eda  movsx eax, word ptr [ebx + 0x10]
    X86_AT(c, 0x52edau);
    c.r[0] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u)));
    // 052ede  add eax, dword ptr [ebx]
    X86_AT(c, 0x52edeu);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[3]))), 0, 4); }
    // 052ee0  inc eax
    X86_AT(c, 0x52ee0u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 052ee1  mov dx, word ptr [ebx + 0x10]
    X86_AT(c, 0x52ee1u);
    s16(c, 2, rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u))));
    // 052ee5  inc edx
    X86_AT(c, 0x52ee5u);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
    // 052ee6  movsx edx, dx
    X86_AT(c, 0x52ee6u);
    c.r[2] = (uint32_t)(int32_t)(int16_t)(c.r[2] & 0xFFFFu);
    // 052ee9  mov ecx, dword ptr [ebx + 4]
    X86_AT(c, 0x52ee9u);
    c.r[1] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)));
    // 052eec  sub ecx, edx
    X86_AT(c, 0x52eecu);
    { uint32_t v = c.r[1]; c.r[1] = x86_sub(c, v, c.r[2], 0, 4); }
    // 052eee  mov edx, ecx
    X86_AT(c, 0x52eeeu);
    c.r[2] = c.r[1];
    // 052ef0  mov dword ptr [ebp - 0x14], eax
    X86_AT(c, 0x52ef0u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu)), c.r[0]);
    // 052ef3  mov al, byte ptr [0x4b48a]
    X86_AT(c, 0x52ef3u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(0x4B48Au))));
    // 052ef8  mov ecx, dword ptr [ebp - 0x14]
    X86_AT(c, 0x52ef8u);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu)));
    // 052efb  push edi
    X86_AT(c, 0x52efbu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 052efc  mov edi, ecx
    X86_AT(c, 0x52efcu);
    c.r[7] = c.r[1];
    // 052efe  mov ecx, edx
    X86_AT(c, 0x52efeu);
    c.r[1] = c.r[2];
    // 052f00  scasb al, byte ptr es:[edi]
    X86_AT(c, 0x52f00u);
    x86_string(c, 4, 1, 242, 4, 3);
    // 052f02  jne 0x52f07
    X86_AT(c, 0x52f02u);
    if (x86_cc(c, 5)) { goto L_52f07; }
    X86_TICK(c, 4);
    // 052f04  inc ecx
    X86_AT(c, 0x52f04u);
    { uint32_t v = c.r[1]; c.r[1] = x86_inc(c, v, 4); }
    // 052f05  sub edx, ecx
    X86_AT(c, 0x52f05u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[1], 0, 4); }
L_52f07:
    X86_TICK(c, 13);
    // 052f07  pop edi
    X86_AT(c, 0x52f07u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 052f08  inc edx
    X86_AT(c, 0x52f08u);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
    // 052f09  add word ptr [ebx + 0x10], dx
    X86_AT(c, 0x52f09u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3] + 0x10u)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[2] & 0xFFFFu), 0, 2)); }
L_52f0d:
    X86_TICK(c, 19);
    // 052f0d  movsx eax, word ptr [ebx + 0x10]
    X86_AT(c, 0x52f0du);
    c.r[0] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u)));
    // 052f11  mov edx, dword ptr [ebx + 4]
    X86_AT(c, 0x52f11u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)));
    // 052f14  dec edx
    X86_AT(c, 0x52f14u);
    { uint32_t v = c.r[2]; c.r[2] = x86_dec(c, v, 4); }
    // 052f15  cmp edx, eax
    X86_AT(c, 0x52f15u);
    (void)x86_sub(c, c.r[2], c.r[0], 0, 4);
    // 052f17  jle 0x52f26
    X86_AT(c, 0x52f17u);
    if (x86_cc(c, 14)) { goto L_52f26; }
    X86_TICK(c, 23);
    // 052f19  add eax, dword ptr [ebx]
    X86_AT(c, 0x52f19u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[3]))), 0, 4); }
    // 052f1b  inc eax
    X86_AT(c, 0x52f1bu);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 052f1c  mov al, byte ptr [eax]
    X86_AT(c, 0x52f1cu);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[0]))));
    // 052f1e  cmp al, byte ptr [0x4b48b]
    X86_AT(c, 0x52f1eu);
    (void)x86_sub(c, g8(c, 0), rd8((c.sbase[3] + (uint32_t)(0x4B48Bu))), 0, 1);
    // 052f24  jne 0x52eda
    X86_AT(c, 0x52f24u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x52edau); goto L_52eda; }
L_52f26:
    X86_TICK(c, 17);
    // 052f26  movsx eax, word ptr [ebx + 0x10]
    X86_AT(c, 0x52f26u);
    c.r[0] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u)));
    // 052f2a  cmp eax, dword ptr [ebx + 4]
    X86_AT(c, 0x52f2au);
    (void)x86_sub(c, c.r[0], rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u))), 0, 4);
    // 052f2d  jne 0x52f37
    X86_AT(c, 0x52f2du);
    if (x86_cc(c, 5)) { goto L_52f37; }
    X86_TICK(c, 9);
    // 052f2f  mov word ptr [ebx + 0x10], 0x200
    X86_AT(c, 0x52f2fu);
    wr16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u)), 0x200u);
    // 052f35  jmp 0x52f54
    X86_AT(c, 0x52f35u);
    goto L_52f54;
L_52f37:
    X86_TICK(c, 19);
    // 052f37  movsx eax, word ptr [ebx + 0x10]
    X86_AT(c, 0x52f37u);
    c.r[0] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u)));
    // 052f3b  mov edx, dword ptr [ebx + 4]
    X86_AT(c, 0x52f3bu);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)));
    // 052f3e  dec edx
    X86_AT(c, 0x52f3eu);
    { uint32_t v = c.r[2]; c.r[2] = x86_dec(c, v, 4); }
    // 052f3f  cmp edx, eax
    X86_AT(c, 0x52f3fu);
    (void)x86_sub(c, c.r[2], c.r[0], 0, 4);
    // 052f41  jne 0x52f4b
    X86_AT(c, 0x52f41u);
    if (x86_cc(c, 5)) { goto L_52f4b; }
    X86_TICK(c, 9);
    // 052f43  mov word ptr [ebx + 0x10], 0xfffe
    X86_AT(c, 0x52f43u);
    wr16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u)), 0xFFFEu);
    // 052f49  jmp 0x52f54
    X86_AT(c, 0x52f49u);
    goto L_52f54;
L_52f4b:
    X86_TICK(c, 17);
    // 052f4b  mov eax, dword ptr [ebx]
    X86_AT(c, 0x52f4bu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3])));
    // 052f4d  sub eax, dword ptr [ebx + 8]
    X86_AT(c, 0x52f4du);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x8u))), 0, 4); }
    // 052f50  add word ptr [ebx + 0x10], ax
    X86_AT(c, 0x52f50u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3] + 0x10u)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
L_52f54:
    X86_TICK(c, 12);
    // 052f54  cmp word ptr [ebx + 0x10], 0x200
    X86_AT(c, 0x52f54u);
    (void)x86_sub(c, rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u))), 0x200u, 0, 2);
    // 052f5a  je 0x53064
    X86_AT(c, 0x52f5au);
    if (x86_cc(c, 4)) { goto L_53064; }
    X86_TICK(c, 12);
    // 052f60  cmp word ptr [ebx + 0x10], 0xfffe
    X86_AT(c, 0x52f60u);
    (void)x86_sub(c, rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u))), 0xFFFEu, 0, 2);
    // 052f65  jne 0x52f75
    X86_AT(c, 0x52f65u);
    if (x86_cc(c, 5)) { goto L_52f75; }
    X86_TICK(c, 11);
    // 052f67  cmp edi, dword ptr [ebx + 4]
    X86_AT(c, 0x52f67u);
    (void)x86_sub(c, c.r[7], rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u))), 0, 4);
    // 052f6a  jl 0x52fbf
    X86_AT(c, 0x52f6au);
    if (x86_cc(c, 12)) { goto L_52fbf; }
    X86_TICK(c, 13);
    // 052f6c  mov esi, dword ptr [ebx + 4]
    X86_AT(c, 0x52f6cu);
    c.r[6] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)));
    // 052f6f  dec esi
    X86_AT(c, 0x52f6fu);
    { uint32_t v = c.r[6]; c.r[6] = x86_dec(c, v, 4); }
    // 052f70  jmp 0x53070
    X86_AT(c, 0x52f70u);
    goto L_53070;
L_52f75:
    X86_TICK(c, 25);
    // 052f75  mov eax, dword ptr [ebx]
    X86_AT(c, 0x52f75u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3])));
    // 052f77  sub eax, dword ptr [ebx + 8]
    X86_AT(c, 0x52f77u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x8u))), 0, 4); }
    // 052f7a  movsx esi, word ptr [ebx + 0x10]
    X86_AT(c, 0x52f7au);
    c.r[6] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u)));
    // 052f7e  sub esi, eax
    X86_AT(c, 0x52f7eu);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[0], 0, 4); }
    // 052f80  cmp edi, esi
    X86_AT(c, 0x52f80u);
    (void)x86_sub(c, c.r[7], c.r[6], 0, 4);
    // 052f82  jbe 0x52fbf
    X86_AT(c, 0x52f82u);
    if (x86_cc(c, 6)) { goto L_52fbf; }
    X86_TICK(c, 87);
    // 052f84  mov ecx, esi
    X86_AT(c, 0x52f84u);
    c.r[1] = c.r[6];
    // 052f86  mov eax, dword ptr [ebx]
    X86_AT(c, 0x52f86u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3])));
    // 052f88  mov edx, dword ptr [ebp + 0xc]
    X86_AT(c, 0x52f88u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 052f8b  mov dword ptr [ebp - 0x14], edi
    X86_AT(c, 0x52f8bu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu)), c.r[7]);
    // 052f8e  mov edi, dword ptr [ebp - 4]
    X86_AT(c, 0x52f8eu);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 052f91  lea edx, [edx + edi*1]
    X86_AT(c, 0x52f91u);
    c.r[2] = (uint32_t)(c.r[2] + c.r[7]);
    // 052f94  push esi
    X86_AT(c, 0x52f94u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 052f95  push edi
    X86_AT(c, 0x52f95u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 052f96  mov esi, eax
    X86_AT(c, 0x52f96u);
    c.r[6] = c.r[0];
    // 052f98  mov edi, edx
    X86_AT(c, 0x52f98u);
    c.r[7] = c.r[2];
    // 052f9a  movsb byte ptr es:[edi], byte ptr [esi]
    X86_AT(c, 0x52f9au);
    x86_string(c, 0, 1, 243, 4, 3);
    // 052f9c  pop edi
    X86_AT(c, 0x52f9cu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 052f9d  pop esi
    X86_AT(c, 0x52f9du);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 052f9e  add edi, esi
    X86_AT(c, 0x52f9eu);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, c.r[6], 0, 4); }
    // 052fa0  mov eax, dword ptr [ebp + 0xc]
    X86_AT(c, 0x52fa0u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 052fa3  mov byte ptr [eax + edi*1], 0xa
    X86_AT(c, 0x52fa3u);
    wr8((c.sbase[3] + (uint32_t)(c.r[0] + c.r[7])), 0xAu);
    // 052fa7  lea eax, [esi + 1]
    X86_AT(c, 0x52fa7u);
    c.r[0] = (uint32_t)(c.r[6] + 0x1u);
    // 052faa  add dword ptr [ebp - 4], eax
    X86_AT(c, 0x52faau);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 052fad  mov edi, dword ptr [ebp - 0x14]
    X86_AT(c, 0x52fadu);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu)));
    // 052fb0  sub edi, eax
    X86_AT(c, 0x52fb0u);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[0], 0, 4); }
    // 052fb2  lea eax, [esi + 2]
    X86_AT(c, 0x52fb2u);
    c.r[0] = (uint32_t)(c.r[6] + 0x2u);
    // 052fb5  sub dword ptr [ebx + 4], eax
    X86_AT(c, 0x52fb5u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)); uint32_t v = rd32(ea); wr32(ea, x86_sub(c, v, c.r[0], 0, 4)); }
    // 052fb8  add dword ptr [ebx], eax
    X86_AT(c, 0x52fb8u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3])); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 052fba  jmp 0x5308e
    X86_AT(c, 0x52fbau);
    goto L_5308e;
L_52fbf:
    X86_TICK(c, 9);
    // 052fbf  mov esi, edi
    X86_AT(c, 0x52fbfu);
    c.r[6] = c.r[7];
    // 052fc1  jmp 0x53070
    X86_AT(c, 0x52fc1u);
    goto L_53070;
L_52fc6:
    X86_TICK(c, 13);
    // 052fc6  mov word ptr [ebx + 0x10], 0xffff
    X86_AT(c, 0x52fc6u);
    wr16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u)), 0xFFFFu);
    // 052fcc  mov eax, dword ptr [ebx + 4]
    X86_AT(c, 0x52fccu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)));
    // 052fcf  cmp edi, eax
    X86_AT(c, 0x52fcfu);
    (void)x86_sub(c, c.r[7], c.r[0], 0, 4);
    // 052fd1  jl 0x52ff7
    X86_AT(c, 0x52fd1u);
    if (x86_cc(c, 12)) { goto L_52ff7; }
    X86_TICK(c, 7);
    // 052fd3  and eax, eax
    X86_AT(c, 0x52fd3u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 052fd5  jle 0x52ff7
    X86_AT(c, 0x52fd5u);
    if (x86_cc(c, 14)) { goto L_52ff7; }
    X86_TICK(c, 53);
    // 052fd7  xchg ecx, eax
    X86_AT(c, 0x52fd7u);
    { uint32_t t = c.r[1]; c.r[1] = c.r[0]; c.r[0] = t; }
    // 052fd8  mov eax, dword ptr [ebx]
    X86_AT(c, 0x52fd8u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3])));
    // 052fda  mov edx, dword ptr [ebp + 0xc]
    X86_AT(c, 0x52fdau);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 052fdd  push esi
    X86_AT(c, 0x52fddu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 052fde  push edi
    X86_AT(c, 0x52fdeu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 052fdf  mov esi, eax
    X86_AT(c, 0x52fdfu);
    c.r[6] = c.r[0];
    // 052fe1  mov edi, edx
    X86_AT(c, 0x52fe1u);
    c.r[7] = c.r[2];
    // 052fe3  movsb byte ptr es:[edi], byte ptr [esi]
    X86_AT(c, 0x52fe3u);
    x86_string(c, 0, 1, 243, 4, 3);
    // 052fe5  pop edi
    X86_AT(c, 0x52fe5u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 052fe6  pop esi
    X86_AT(c, 0x52fe6u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 052fe7  sub edi, dword ptr [ebx + 4]
    X86_AT(c, 0x52fe7u);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u))), 0, 4); }
    // 052fea  mov eax, dword ptr [ebx + 4]
    X86_AT(c, 0x52feau);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)));
    // 052fed  add dword ptr [ebp - 4], eax
    X86_AT(c, 0x52fedu);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 052ff0  mov dword ptr [ebx + 4], 0
    X86_AT(c, 0x52ff0u);
    wr32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)), 0x0u);
L_52ff7:
    X86_TICK(c, 7);
    // 052ff7  cmp edi, 0x200
    X86_AT(c, 0x52ff7u);
    (void)x86_sub(c, c.r[7], 0x200u, 0, 4);
    // 052ffd  jb 0x53035
    X86_AT(c, 0x52ffdu);
    if (x86_cc(c, 2)) { goto L_53035; }
    X86_TICK(c, 10);
    // 052fff  mov esi, edi
    X86_AT(c, 0x52fffu);
    c.r[6] = c.r[7];
    // 053001  shr esi, 9
    X86_AT(c, 0x53001u);
    { uint32_t v = c.r[6]; bool w; uint32_t r = x86_shift(c, 5, v, 0x9u, 4, w); if (w) c.r[6] = r; }
    // 053004  shl esi, 9
    X86_AT(c, 0x53004u);
    { uint32_t v = c.r[6]; bool w; uint32_t r = x86_shift(c, 4, v, 0x9u, 4, w); if (w) c.r[6] = r; }
    // 053007  mov dword ptr [ebp - 0xc], 0
    X86_AT(c, 0x53007u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)), 0x0u);
L_5300e:
    X86_TICK(c, 27);
    // 05300e  push esi
    X86_AT(c, 0x5300eu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 05300f  mov eax, dword ptr [ebp + 0xc]
    X86_AT(c, 0x5300fu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 053012  add eax, dword ptr [ebp - 4]
    X86_AT(c, 0x53012u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))), 0, 4); }
    // 053015  push eax
    X86_AT(c, 0x53015u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 053016  mov al, byte ptr [ebx + 0xe]
    X86_AT(c, 0x53016u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xEu))));
    // 053019  push eax
    X86_AT(c, 0x53019u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 05301a  call 0x55ce0
    X86_AT(c, 0x5301au);
    push32(c, 0x5301fu); x86_call_known(c, 0x55ce0u, f_00055ce0); X86_RET(c, 0x5301fu);
    X86_TICK(c, 25);
    // 05301f  mov dword ptr [ebp - 8], eax
    X86_AT(c, 0x5301fu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), c.r[0]);
    // 053022  add dword ptr [ebp - 0xc], eax
    X86_AT(c, 0x53022u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 053025  sub esi, eax
    X86_AT(c, 0x53025u);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[0], 0, 4); }
    // 053027  add dword ptr [ebp - 4], eax
    X86_AT(c, 0x53027u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 05302a  and esi, esi
    X86_AT(c, 0x5302au);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & c.r[6], 4); }
    // 05302c  je 0x53032
    X86_AT(c, 0x5302cu);
    if (x86_cc(c, 4)) { goto L_53032; }
    X86_TICK(c, 7);
    // 05302e  and eax, eax
    X86_AT(c, 0x5302eu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 053030  jne 0x5300e
    X86_AT(c, 0x53030u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x5300eu); goto L_5300e; }
L_53032:
    X86_TICK(c, 6);
    // 053032  sub edi, dword ptr [ebp - 0xc]
    X86_AT(c, 0x53032u);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u))), 0, 4); }
L_53035:
    X86_TICK(c, 7);
    // 053035  and edi, edi
    X86_AT(c, 0x53035u);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & c.r[7], 4); }
    // 053037  jbe 0x5308e
    X86_AT(c, 0x53037u);
    if (x86_cc(c, 6)) { goto L_5308e; }
    X86_TICK(c, 12);
    // 053039  cmp dword ptr [ebx + 4], 0
    X86_AT(c, 0x53039u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u))), 0x0u, 0, 4);
    // 05303d  jne 0x5305e
    X86_AT(c, 0x5303du);
    if (x86_cc(c, 5)) { goto L_5305e; }
    X86_TICK(c, 12);
    // 05303f  test byte ptr [ebx + 0xc], 0x10
    X86_AT(c, 0x5303fu);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xCu))) & 0x10u, 1);
    // 053043  jne 0x53096
    X86_AT(c, 0x53043u);
    if (x86_cc(c, 5)) { goto L_53096; }
    X86_TICK(c, 20);
    // 053045  push 0x200
    X86_AT(c, 0x53045u);
    { uint32_t v = 0x200u; push32(c, v); }
    // 05304a  push dword ptr [ebx + 8]
    X86_AT(c, 0x5304au);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x8u))); push32(c, v); }
    // 05304d  mov al, byte ptr [ebx + 0xe]
    X86_AT(c, 0x5304du);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xEu))));
    // 053050  push eax
    X86_AT(c, 0x53050u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 053051  call 0x55ce0
    X86_AT(c, 0x53051u);
    push32(c, 0x53056u); x86_call_known(c, 0x55ce0u, f_00055ce0); X86_RET(c, 0x53056u);
    X86_TICK(c, 8);
    // 053056  mov dword ptr [ebx + 4], eax
    X86_AT(c, 0x53056u);
    wr32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)), c.r[0]);
    // 053059  mov eax, dword ptr [ebx + 8]
    X86_AT(c, 0x53059u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x8u)));
    // 05305c  mov dword ptr [ebx], eax
    X86_AT(c, 0x5305cu);
    wr32((c.sbase[3] + (uint32_t)(c.r[3])), c.r[0]);
L_5305e:
    X86_TICK(c, 12);
    // 05305e  cmp dword ptr [ebx + 4], 0
    X86_AT(c, 0x5305eu);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u))), 0x0u, 0, 4);
    // 053062  jle 0x53096
    X86_AT(c, 0x53062u);
    if (x86_cc(c, 14)) { goto L_53096; }
L_53064:
    X86_TICK(c, 13);
    // 053064  mov eax, dword ptr [ebx + 4]
    X86_AT(c, 0x53064u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)));
    // 053067  mov edx, edi
    X86_AT(c, 0x53067u);
    c.r[2] = c.r[7];
    // 053069  cmp edx, eax
    X86_AT(c, 0x53069u);
    (void)x86_sub(c, c.r[2], c.r[0], 0, 4);
    // 05306b  jl 0x5306e
    X86_AT(c, 0x5306bu);
    if (x86_cc(c, 12)) { goto L_5306e; }
    X86_TICK(c, 3);
    // 05306d  xchg edx, eax
    X86_AT(c, 0x5306du);
    { uint32_t t = c.r[2]; c.r[2] = c.r[0]; c.r[0] = t; }
L_5306e:
    X86_TICK(c, 2);
    // 05306e  mov esi, edx
    X86_AT(c, 0x5306eu);
    c.r[6] = c.r[2];
L_53070:
    X86_TICK(c, 62);
    // 053070  mov ecx, esi
    X86_AT(c, 0x53070u);
    c.r[1] = c.r[6];
    // 053072  mov eax, dword ptr [ebx]
    X86_AT(c, 0x53072u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3])));
    // 053074  mov edx, dword ptr [ebp + 0xc]
    X86_AT(c, 0x53074u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 053077  add edx, dword ptr [ebp - 4]
    X86_AT(c, 0x53077u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))), 0, 4); }
    // 05307a  push esi
    X86_AT(c, 0x5307au);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 05307b  push edi
    X86_AT(c, 0x5307bu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 05307c  mov esi, eax
    X86_AT(c, 0x5307cu);
    c.r[6] = c.r[0];
    // 05307e  mov edi, edx
    X86_AT(c, 0x5307eu);
    c.r[7] = c.r[2];
    // 053080  movsb byte ptr es:[edi], byte ptr [esi]
    X86_AT(c, 0x53080u);
    x86_string(c, 0, 1, 243, 4, 3);
    // 053082  pop edi
    X86_AT(c, 0x53082u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 053083  pop esi
    X86_AT(c, 0x53083u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 053084  add dword ptr [ebp - 4], esi
    X86_AT(c, 0x53084u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[6], 0, 4)); }
    // 053087  sub dword ptr [ebx + 4], esi
    X86_AT(c, 0x53087u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)); uint32_t v = rd32(ea); wr32(ea, x86_sub(c, v, c.r[6], 0, 4)); }
    // 05308a  sub edi, esi
    X86_AT(c, 0x5308au);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[6], 0, 4); }
    // 05308c  add dword ptr [ebx], esi
    X86_AT(c, 0x5308cu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3])); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[6], 0, 4)); }
L_5308e:
    X86_TICK(c, 7);
    // 05308e  and edi, edi
    X86_AT(c, 0x5308eu);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & c.r[7], 4); }
    // 053090  ja 0x52dc9
    X86_AT(c, 0x53090u);
    if (x86_cc(c, 7)) { X86_POLL(c, 0x52dc9u); goto L_52dc9; }
L_53096:
    X86_TICK(c, 12);
    // 053096  cmp dword ptr [ebp - 4], 0
    X86_AT(c, 0x53096u);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))), 0x0u, 0, 4);
    // 05309a  jne 0x530a0
    X86_AT(c, 0x5309au);
    if (x86_cc(c, 5)) { goto L_530a0; }
    X86_TICK(c, 7);
    // 05309c  or byte ptr [ebx + 0xc], 0x10
    X86_AT(c, 0x5309cu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3] + 0xCu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | 0x10u, 1)); }
L_530a0:
    X86_TICK(c, 13);
    // 0530a0  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0x530a0u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0530a3  mov dword ptr [0x4b490], eax
    X86_AT(c, 0x530a3u);
    wr32((c.sbase[3] + (uint32_t)(0x4B490u)), c.r[0]);
    // 0530a8  jmp 0x531d8
    X86_AT(c, 0x530a8u);
    goto L_531d8;
L_531d8:
    X86_TICK(c, 12);
    // 0531d8  cmp word ptr [0x4b81e], 0
    X86_AT(c, 0x531d8u);
    (void)x86_sub(c, rd16((c.sbase[3] + (uint32_t)(0x4B81Eu))), 0x0u, 0, 2);
    // 0531e0  je 0x531e8
    X86_AT(c, 0x531e0u);
    if (x86_cc(c, 4)) { goto L_531e8; }
    X86_TICK(c, 14);
    // 0531e2  or byte ptr [ebx + 0xc], 0x20
    X86_AT(c, 0x531e2u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3] + 0xCu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | 0x20u, 1)); }
    // 0531e6  jmp 0x531f2
    X86_AT(c, 0x531e6u);
    goto L_531f2;
L_531e8:
    X86_TICK(c, 6);
    // 0531e8  mov ax, word ptr [ebp - 0xe]
    X86_AT(c, 0x531e8u);
    s16(c, 0, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF2u))));
    // 0531ec  mov word ptr [0x4b81e], ax
    X86_AT(c, 0x531ecu);
    wr16((c.sbase[3] + (uint32_t)(0x4B81Eu)), (c.r[0] & 0xFFFFu));
L_531f2:
    X86_TICK(c, 28);
    // 0531f2  pop edi
    X86_AT(c, 0x531f2u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0531f3  pop esi
    X86_AT(c, 0x531f3u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0531f4  pop ebx
    X86_AT(c, 0x531f4u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0531f5  leave 
    X86_AT(c, 0x531f5u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0531f6  ret 0xc
    X86_AT(c, 0x531f6u);
    c.eip = pop32(c); c.r[4] += 0xCu; return;
    x86_fault(c, 0x53070u, "ran off the end of a function");
}
void f_0005308e(X86Cpu& c) {
    goto L_5308e;
L_52dc9:
    X86_TICK(c, 12);
    // 052dc9  test byte ptr [ebx + 0xc], 0x40
    X86_AT(c, 0x52dc9u);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xCu))) & 0x40u, 1);
    // 052dcd  je 0x52fc6
    X86_AT(c, 0x52dcdu);
    if (x86_cc(c, 4)) { goto L_52fc6; }
    X86_TICK(c, 12);
    // 052dd3  cmp dword ptr [ebx + 4], 1
    X86_AT(c, 0x52dd3u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u))), 0x1u, 0, 4);
    // 052dd7  jne 0x52e1e
    X86_AT(c, 0x52dd7u);
    if (x86_cc(c, 5)) { goto L_52e1e; }
    X86_TICK(c, 12);
    // 052dd9  cmp word ptr [ebx + 0x10], 0xfffe
    X86_AT(c, 0x52dd9u);
    (void)x86_sub(c, rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u))), 0xFFFEu, 0, 2);
    // 052dde  jne 0x52e1e
    X86_AT(c, 0x52ddeu);
    if (x86_cc(c, 5)) { goto L_52e1e; }
    X86_TICK(c, 12);
    // 052de0  test byte ptr [ebx + 0xd], 4
    X86_AT(c, 0x52de0u);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xDu))) & 0x4u, 1);
    // 052de4  jne 0x53064
    X86_AT(c, 0x52de4u);
    if (x86_cc(c, 5)) { goto L_53064; }
    X86_TICK(c, 33);
    // 052dea  mov al, byte ptr [0x4b48a]
    X86_AT(c, 0x52deau);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(0x4B48Au))));
    // 052def  mov edx, dword ptr [ebx + 8]
    X86_AT(c, 0x52defu);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x8u)));
    // 052df2  mov byte ptr [edx], al
    X86_AT(c, 0x52df2u);
    wr8((c.sbase[3] + (uint32_t)(c.r[2])), g8(c, 0));
    // 052df4  push 0x1ff
    X86_AT(c, 0x52df4u);
    { uint32_t v = 0x1FFu; push32(c, v); }
    // 052df9  mov eax, dword ptr [ebx + 8]
    X86_AT(c, 0x52df9u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x8u)));
    // 052dfc  inc eax
    X86_AT(c, 0x52dfcu);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 052dfd  push eax
    X86_AT(c, 0x52dfdu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 052dfe  mov al, byte ptr [ebx + 0xe]
    X86_AT(c, 0x52dfeu);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xEu))));
    // 052e01  push eax
    X86_AT(c, 0x52e01u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 052e02  call 0x55ce0
    X86_AT(c, 0x52e02u);
    push32(c, 0x52e07u); x86_call_known(c, 0x55ce0u, f_00055ce0); X86_RET(c, 0x52e07u);
    X86_TICK(c, 11);
    // 052e07  inc eax
    X86_AT(c, 0x52e07u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 052e08  mov dword ptr [ebx + 4], eax
    X86_AT(c, 0x52e08u);
    wr32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)), c.r[0]);
    // 052e0b  dec eax
    X86_AT(c, 0x52e0bu);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 052e0c  jne 0x52e56
    X86_AT(c, 0x52e0cu);
    if (x86_cc(c, 5)) { goto L_52e56; }
    X86_TICK(c, 15);
    // 052e0e  mov eax, dword ptr [ebx + 8]
    X86_AT(c, 0x52e0eu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x8u)));
    // 052e11  mov dword ptr [ebx], eax
    X86_AT(c, 0x52e11u);
    wr32((c.sbase[3] + (uint32_t)(c.r[3])), c.r[0]);
    // 052e13  mov word ptr [ebx + 0x10], 0x200
    X86_AT(c, 0x52e13u);
    wr16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u)), 0x200u);
    // 052e19  jmp 0x53064
    X86_AT(c, 0x52e19u);
    goto L_53064;
L_52e1e:
    X86_TICK(c, 12);
    // 052e1e  cmp dword ptr [ebx + 4], 0
    X86_AT(c, 0x52e1eu);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u))), 0x0u, 0, 4);
    // 052e22  jne 0x52e9b
    X86_AT(c, 0x52e22u);
    if (x86_cc(c, 5)) { goto L_52e9b; }
    X86_TICK(c, 12);
    // 052e28  test byte ptr [ebx + 0xc], 0x10
    X86_AT(c, 0x52e28u);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xCu))) & 0x10u, 1);
    // 052e2c  jne 0x53096
    X86_AT(c, 0x52e2cu);
    if (x86_cc(c, 5)) { goto L_53096; }
    X86_TICK(c, 12);
    // 052e32  test byte ptr [ebx + 0xd], 4
    X86_AT(c, 0x52e32u);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xDu))) & 0x4u, 1);
    // 052e36  jne 0x52e4c
    X86_AT(c, 0x52e36u);
    if (x86_cc(c, 5)) { goto L_52e4c; }
    X86_TICK(c, 20);
    // 052e38  push 0x200
    X86_AT(c, 0x52e38u);
    { uint32_t v = 0x200u; push32(c, v); }
    // 052e3d  push dword ptr [ebx + 8]
    X86_AT(c, 0x52e3du);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x8u))); push32(c, v); }
    // 052e40  mov al, byte ptr [ebx + 0xe]
    X86_AT(c, 0x52e40u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xEu))));
    // 052e43  push eax
    X86_AT(c, 0x52e43u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 052e44  call 0x55ce0
    X86_AT(c, 0x52e44u);
    push32(c, 0x52e49u); x86_call_known(c, 0x55ce0u, f_00055ce0); X86_RET(c, 0x52e49u);
    X86_TICK(c, 2);
    // 052e49  mov dword ptr [ebx + 4], eax
    X86_AT(c, 0x52e49u);
    wr32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)), c.r[0]);
L_52e4c:
    X86_TICK(c, 12);
    // 052e4c  cmp dword ptr [ebx + 4], 0
    X86_AT(c, 0x52e4cu);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u))), 0x0u, 0, 4);
    // 052e50  je 0x53096
    X86_AT(c, 0x52e50u);
    if (x86_cc(c, 4)) { goto L_53096; }
L_52e56:
    X86_TICK(c, 28);
    // 052e56  mov edx, dword ptr [ebx + 4]
    X86_AT(c, 0x52e56u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)));
    // 052e59  mov al, 0x1a
    X86_AT(c, 0x52e59u);
    s8(c, 0, 0x1Au);
    // 052e5b  mov ecx, dword ptr [ebx + 8]
    X86_AT(c, 0x52e5bu);
    c.r[1] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x8u)));
    // 052e5e  push edi
    X86_AT(c, 0x52e5eu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 052e5f  mov edi, ecx
    X86_AT(c, 0x52e5fu);
    c.r[7] = c.r[1];
    // 052e61  mov ecx, edx
    X86_AT(c, 0x52e61u);
    c.r[1] = c.r[2];
    // 052e63  scasb al, byte ptr es:[edi]
    X86_AT(c, 0x52e63u);
    x86_string(c, 4, 1, 242, 4, 3);
    // 052e65  jne 0x52e6a
    X86_AT(c, 0x52e65u);
    if (x86_cc(c, 5)) { goto L_52e6a; }
    X86_TICK(c, 4);
    // 052e67  inc ecx
    X86_AT(c, 0x52e67u);
    { uint32_t v = c.r[1]; c.r[1] = x86_inc(c, v, 4); }
    // 052e68  sub edx, ecx
    X86_AT(c, 0x52e68u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[1], 0, 4); }
L_52e6a:
    X86_TICK(c, 17);
    // 052e6a  pop edi
    X86_AT(c, 0x52e6au);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 052e6b  mov word ptr [ebp - 0x10], dx
    X86_AT(c, 0x52e6bu);
    wr16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u)), (c.r[2] & 0xFFFFu));
    // 052e6f  cmp edx, dword ptr [ebx + 4]
    X86_AT(c, 0x52e6fu);
    (void)x86_sub(c, c.r[2], rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u))), 0, 4);
    // 052e72  je 0x52e90
    X86_AT(c, 0x52e72u);
    if (x86_cc(c, 4)) { goto L_52e90; }
    X86_TICK(c, 32);
    // 052e74  or byte ptr [ebx + 0xd], 4
    X86_AT(c, 0x52e74u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3] + 0xDu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | 0x4u, 1)); }
    // 052e78  push 1
    X86_AT(c, 0x52e78u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 052e7a  mov dword ptr [ebp - 0x14], edx
    X86_AT(c, 0x52e7au);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu)), c.r[2]);
    // 052e7d  sub edx, dword ptr [ebx + 4]
    X86_AT(c, 0x52e7du);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u))), 0, 4); }
    // 052e80  push edx
    X86_AT(c, 0x52e80u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 052e81  mov al, byte ptr [ebx + 0xe]
    X86_AT(c, 0x52e81u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xEu))));
    // 052e84  push eax
    X86_AT(c, 0x52e84u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 052e85  call 0x55db8
    X86_AT(c, 0x52e85u);
    push32(c, 0x52e8au); x86_call_known(c, 0x55db8u, f_00055db8); X86_RET(c, 0x52e8au);
    X86_TICK(c, 6);
    // 052e8a  mov eax, dword ptr [ebp - 0x14]
    X86_AT(c, 0x52e8au);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu)));
    // 052e8d  mov dword ptr [ebx + 4], eax
    X86_AT(c, 0x52e8du);
    wr32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)), c.r[0]);
L_52e90:
    X86_TICK(c, 8);
    // 052e90  mov eax, dword ptr [ebx + 8]
    X86_AT(c, 0x52e90u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x8u)));
    // 052e93  mov dword ptr [ebx], eax
    X86_AT(c, 0x52e93u);
    wr32((c.sbase[3] + (uint32_t)(c.r[3])), c.r[0]);
    // 052e95  mov word ptr [ebx + 0x10], 0xffff
    X86_AT(c, 0x52e95u);
    wr16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u)), 0xFFFFu);
L_52e9b:
    X86_TICK(c, 12);
    // 052e9b  cmp dword ptr [ebx + 4], 0
    X86_AT(c, 0x52e9bu);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u))), 0x0u, 0, 4);
    // 052e9f  jle 0x5308e
    X86_AT(c, 0x52e9fu);
    if (x86_cc(c, 14)) { goto L_5308e; }
    X86_TICK(c, 11);
    // 052ea5  mov ax, word ptr [ebx + 0x10]
    X86_AT(c, 0x52ea5u);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u))));
    // 052ea9  cmp ax, 0xffff
    X86_AT(c, 0x52ea9u);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), 0xFFFFu, 0, 2);
    // 052ead  je 0x52ebd
    X86_AT(c, 0x52eadu);
    if (x86_cc(c, 4)) { goto L_52ebd; }
    X86_TICK(c, 20);
    // 052eaf  movsx eax, ax
    X86_AT(c, 0x52eafu);
    c.r[0] = (uint32_t)(int32_t)(int16_t)(c.r[0] & 0xFFFFu);
    // 052eb2  add eax, dword ptr [ebx + 8]
    X86_AT(c, 0x52eb2u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x8u))), 0, 4); }
    // 052eb5  cmp eax, dword ptr [ebx]
    X86_AT(c, 0x52eb5u);
    (void)x86_sub(c, c.r[0], rd32((c.sbase[3] + (uint32_t)(c.r[3]))), 0, 4);
    // 052eb7  jge 0x52f54
    X86_AT(c, 0x52eb7u);
    if (x86_cc(c, 13)) { goto L_52f54; }
L_52ebd:
    X86_TICK(c, 30);
    // 052ebd  mov edx, dword ptr [ebx + 4]
    X86_AT(c, 0x52ebdu);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)));
    // 052ec0  mov al, byte ptr [0x4b48a]
    X86_AT(c, 0x52ec0u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(0x4B48Au))));
    // 052ec5  mov ecx, dword ptr [ebx]
    X86_AT(c, 0x52ec5u);
    c.r[1] = rd32((c.sbase[3] + (uint32_t)(c.r[3])));
    // 052ec7  push edi
    X86_AT(c, 0x52ec7u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 052ec8  mov edi, ecx
    X86_AT(c, 0x52ec8u);
    c.r[7] = c.r[1];
    // 052eca  mov ecx, edx
    X86_AT(c, 0x52ecau);
    c.r[1] = c.r[2];
    // 052ecc  scasb al, byte ptr es:[edi]
    X86_AT(c, 0x52eccu);
    x86_string(c, 4, 1, 242, 4, 3);
    // 052ece  jne 0x52ed3
    X86_AT(c, 0x52eceu);
    if (x86_cc(c, 5)) { goto L_52ed3; }
    X86_TICK(c, 4);
    // 052ed0  inc ecx
    X86_AT(c, 0x52ed0u);
    { uint32_t v = c.r[1]; c.r[1] = x86_inc(c, v, 4); }
    // 052ed1  sub edx, ecx
    X86_AT(c, 0x52ed1u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[1], 0, 4); }
L_52ed3:
    X86_TICK(c, 13);
    // 052ed3  pop edi
    X86_AT(c, 0x52ed3u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 052ed4  mov word ptr [ebx + 0x10], dx
    X86_AT(c, 0x52ed4u);
    wr16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u)), (c.r[2] & 0xFFFFu));
    // 052ed8  jmp 0x52f0d
    X86_AT(c, 0x52ed8u);
    goto L_52f0d;
L_52eda:
    X86_TICK(c, 59);
    // 052eda  movsx eax, word ptr [ebx + 0x10]
    X86_AT(c, 0x52edau);
    c.r[0] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u)));
    // 052ede  add eax, dword ptr [ebx]
    X86_AT(c, 0x52edeu);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[3]))), 0, 4); }
    // 052ee0  inc eax
    X86_AT(c, 0x52ee0u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 052ee1  mov dx, word ptr [ebx + 0x10]
    X86_AT(c, 0x52ee1u);
    s16(c, 2, rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u))));
    // 052ee5  inc edx
    X86_AT(c, 0x52ee5u);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
    // 052ee6  movsx edx, dx
    X86_AT(c, 0x52ee6u);
    c.r[2] = (uint32_t)(int32_t)(int16_t)(c.r[2] & 0xFFFFu);
    // 052ee9  mov ecx, dword ptr [ebx + 4]
    X86_AT(c, 0x52ee9u);
    c.r[1] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)));
    // 052eec  sub ecx, edx
    X86_AT(c, 0x52eecu);
    { uint32_t v = c.r[1]; c.r[1] = x86_sub(c, v, c.r[2], 0, 4); }
    // 052eee  mov edx, ecx
    X86_AT(c, 0x52eeeu);
    c.r[2] = c.r[1];
    // 052ef0  mov dword ptr [ebp - 0x14], eax
    X86_AT(c, 0x52ef0u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu)), c.r[0]);
    // 052ef3  mov al, byte ptr [0x4b48a]
    X86_AT(c, 0x52ef3u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(0x4B48Au))));
    // 052ef8  mov ecx, dword ptr [ebp - 0x14]
    X86_AT(c, 0x52ef8u);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu)));
    // 052efb  push edi
    X86_AT(c, 0x52efbu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 052efc  mov edi, ecx
    X86_AT(c, 0x52efcu);
    c.r[7] = c.r[1];
    // 052efe  mov ecx, edx
    X86_AT(c, 0x52efeu);
    c.r[1] = c.r[2];
    // 052f00  scasb al, byte ptr es:[edi]
    X86_AT(c, 0x52f00u);
    x86_string(c, 4, 1, 242, 4, 3);
    // 052f02  jne 0x52f07
    X86_AT(c, 0x52f02u);
    if (x86_cc(c, 5)) { goto L_52f07; }
    X86_TICK(c, 4);
    // 052f04  inc ecx
    X86_AT(c, 0x52f04u);
    { uint32_t v = c.r[1]; c.r[1] = x86_inc(c, v, 4); }
    // 052f05  sub edx, ecx
    X86_AT(c, 0x52f05u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[1], 0, 4); }
L_52f07:
    X86_TICK(c, 13);
    // 052f07  pop edi
    X86_AT(c, 0x52f07u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 052f08  inc edx
    X86_AT(c, 0x52f08u);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
    // 052f09  add word ptr [ebx + 0x10], dx
    X86_AT(c, 0x52f09u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3] + 0x10u)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[2] & 0xFFFFu), 0, 2)); }
L_52f0d:
    X86_TICK(c, 19);
    // 052f0d  movsx eax, word ptr [ebx + 0x10]
    X86_AT(c, 0x52f0du);
    c.r[0] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u)));
    // 052f11  mov edx, dword ptr [ebx + 4]
    X86_AT(c, 0x52f11u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)));
    // 052f14  dec edx
    X86_AT(c, 0x52f14u);
    { uint32_t v = c.r[2]; c.r[2] = x86_dec(c, v, 4); }
    // 052f15  cmp edx, eax
    X86_AT(c, 0x52f15u);
    (void)x86_sub(c, c.r[2], c.r[0], 0, 4);
    // 052f17  jle 0x52f26
    X86_AT(c, 0x52f17u);
    if (x86_cc(c, 14)) { goto L_52f26; }
    X86_TICK(c, 23);
    // 052f19  add eax, dword ptr [ebx]
    X86_AT(c, 0x52f19u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[3]))), 0, 4); }
    // 052f1b  inc eax
    X86_AT(c, 0x52f1bu);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 052f1c  mov al, byte ptr [eax]
    X86_AT(c, 0x52f1cu);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[0]))));
    // 052f1e  cmp al, byte ptr [0x4b48b]
    X86_AT(c, 0x52f1eu);
    (void)x86_sub(c, g8(c, 0), rd8((c.sbase[3] + (uint32_t)(0x4B48Bu))), 0, 1);
    // 052f24  jne 0x52eda
    X86_AT(c, 0x52f24u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x52edau); goto L_52eda; }
L_52f26:
    X86_TICK(c, 17);
    // 052f26  movsx eax, word ptr [ebx + 0x10]
    X86_AT(c, 0x52f26u);
    c.r[0] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u)));
    // 052f2a  cmp eax, dword ptr [ebx + 4]
    X86_AT(c, 0x52f2au);
    (void)x86_sub(c, c.r[0], rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u))), 0, 4);
    // 052f2d  jne 0x52f37
    X86_AT(c, 0x52f2du);
    if (x86_cc(c, 5)) { goto L_52f37; }
    X86_TICK(c, 9);
    // 052f2f  mov word ptr [ebx + 0x10], 0x200
    X86_AT(c, 0x52f2fu);
    wr16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u)), 0x200u);
    // 052f35  jmp 0x52f54
    X86_AT(c, 0x52f35u);
    goto L_52f54;
L_52f37:
    X86_TICK(c, 19);
    // 052f37  movsx eax, word ptr [ebx + 0x10]
    X86_AT(c, 0x52f37u);
    c.r[0] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u)));
    // 052f3b  mov edx, dword ptr [ebx + 4]
    X86_AT(c, 0x52f3bu);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)));
    // 052f3e  dec edx
    X86_AT(c, 0x52f3eu);
    { uint32_t v = c.r[2]; c.r[2] = x86_dec(c, v, 4); }
    // 052f3f  cmp edx, eax
    X86_AT(c, 0x52f3fu);
    (void)x86_sub(c, c.r[2], c.r[0], 0, 4);
    // 052f41  jne 0x52f4b
    X86_AT(c, 0x52f41u);
    if (x86_cc(c, 5)) { goto L_52f4b; }
    X86_TICK(c, 9);
    // 052f43  mov word ptr [ebx + 0x10], 0xfffe
    X86_AT(c, 0x52f43u);
    wr16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u)), 0xFFFEu);
    // 052f49  jmp 0x52f54
    X86_AT(c, 0x52f49u);
    goto L_52f54;
L_52f4b:
    X86_TICK(c, 17);
    // 052f4b  mov eax, dword ptr [ebx]
    X86_AT(c, 0x52f4bu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3])));
    // 052f4d  sub eax, dword ptr [ebx + 8]
    X86_AT(c, 0x52f4du);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x8u))), 0, 4); }
    // 052f50  add word ptr [ebx + 0x10], ax
    X86_AT(c, 0x52f50u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3] + 0x10u)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
L_52f54:
    X86_TICK(c, 12);
    // 052f54  cmp word ptr [ebx + 0x10], 0x200
    X86_AT(c, 0x52f54u);
    (void)x86_sub(c, rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u))), 0x200u, 0, 2);
    // 052f5a  je 0x53064
    X86_AT(c, 0x52f5au);
    if (x86_cc(c, 4)) { goto L_53064; }
    X86_TICK(c, 12);
    // 052f60  cmp word ptr [ebx + 0x10], 0xfffe
    X86_AT(c, 0x52f60u);
    (void)x86_sub(c, rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u))), 0xFFFEu, 0, 2);
    // 052f65  jne 0x52f75
    X86_AT(c, 0x52f65u);
    if (x86_cc(c, 5)) { goto L_52f75; }
    X86_TICK(c, 11);
    // 052f67  cmp edi, dword ptr [ebx + 4]
    X86_AT(c, 0x52f67u);
    (void)x86_sub(c, c.r[7], rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u))), 0, 4);
    // 052f6a  jl 0x52fbf
    X86_AT(c, 0x52f6au);
    if (x86_cc(c, 12)) { goto L_52fbf; }
    X86_TICK(c, 13);
    // 052f6c  mov esi, dword ptr [ebx + 4]
    X86_AT(c, 0x52f6cu);
    c.r[6] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)));
    // 052f6f  dec esi
    X86_AT(c, 0x52f6fu);
    { uint32_t v = c.r[6]; c.r[6] = x86_dec(c, v, 4); }
    // 052f70  jmp 0x53070
    X86_AT(c, 0x52f70u);
    goto L_53070;
L_52f75:
    X86_TICK(c, 25);
    // 052f75  mov eax, dword ptr [ebx]
    X86_AT(c, 0x52f75u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3])));
    // 052f77  sub eax, dword ptr [ebx + 8]
    X86_AT(c, 0x52f77u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x8u))), 0, 4); }
    // 052f7a  movsx esi, word ptr [ebx + 0x10]
    X86_AT(c, 0x52f7au);
    c.r[6] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u)));
    // 052f7e  sub esi, eax
    X86_AT(c, 0x52f7eu);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[0], 0, 4); }
    // 052f80  cmp edi, esi
    X86_AT(c, 0x52f80u);
    (void)x86_sub(c, c.r[7], c.r[6], 0, 4);
    // 052f82  jbe 0x52fbf
    X86_AT(c, 0x52f82u);
    if (x86_cc(c, 6)) { goto L_52fbf; }
    X86_TICK(c, 87);
    // 052f84  mov ecx, esi
    X86_AT(c, 0x52f84u);
    c.r[1] = c.r[6];
    // 052f86  mov eax, dword ptr [ebx]
    X86_AT(c, 0x52f86u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3])));
    // 052f88  mov edx, dword ptr [ebp + 0xc]
    X86_AT(c, 0x52f88u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 052f8b  mov dword ptr [ebp - 0x14], edi
    X86_AT(c, 0x52f8bu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu)), c.r[7]);
    // 052f8e  mov edi, dword ptr [ebp - 4]
    X86_AT(c, 0x52f8eu);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 052f91  lea edx, [edx + edi*1]
    X86_AT(c, 0x52f91u);
    c.r[2] = (uint32_t)(c.r[2] + c.r[7]);
    // 052f94  push esi
    X86_AT(c, 0x52f94u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 052f95  push edi
    X86_AT(c, 0x52f95u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 052f96  mov esi, eax
    X86_AT(c, 0x52f96u);
    c.r[6] = c.r[0];
    // 052f98  mov edi, edx
    X86_AT(c, 0x52f98u);
    c.r[7] = c.r[2];
    // 052f9a  movsb byte ptr es:[edi], byte ptr [esi]
    X86_AT(c, 0x52f9au);
    x86_string(c, 0, 1, 243, 4, 3);
    // 052f9c  pop edi
    X86_AT(c, 0x52f9cu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 052f9d  pop esi
    X86_AT(c, 0x52f9du);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 052f9e  add edi, esi
    X86_AT(c, 0x52f9eu);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, c.r[6], 0, 4); }
    // 052fa0  mov eax, dword ptr [ebp + 0xc]
    X86_AT(c, 0x52fa0u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 052fa3  mov byte ptr [eax + edi*1], 0xa
    X86_AT(c, 0x52fa3u);
    wr8((c.sbase[3] + (uint32_t)(c.r[0] + c.r[7])), 0xAu);
    // 052fa7  lea eax, [esi + 1]
    X86_AT(c, 0x52fa7u);
    c.r[0] = (uint32_t)(c.r[6] + 0x1u);
    // 052faa  add dword ptr [ebp - 4], eax
    X86_AT(c, 0x52faau);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 052fad  mov edi, dword ptr [ebp - 0x14]
    X86_AT(c, 0x52fadu);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu)));
    // 052fb0  sub edi, eax
    X86_AT(c, 0x52fb0u);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[0], 0, 4); }
    // 052fb2  lea eax, [esi + 2]
    X86_AT(c, 0x52fb2u);
    c.r[0] = (uint32_t)(c.r[6] + 0x2u);
    // 052fb5  sub dword ptr [ebx + 4], eax
    X86_AT(c, 0x52fb5u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)); uint32_t v = rd32(ea); wr32(ea, x86_sub(c, v, c.r[0], 0, 4)); }
    // 052fb8  add dword ptr [ebx], eax
    X86_AT(c, 0x52fb8u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3])); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 052fba  jmp 0x5308e
    X86_AT(c, 0x52fbau);
    goto L_5308e;
L_52fbf:
    X86_TICK(c, 9);
    // 052fbf  mov esi, edi
    X86_AT(c, 0x52fbfu);
    c.r[6] = c.r[7];
    // 052fc1  jmp 0x53070
    X86_AT(c, 0x52fc1u);
    goto L_53070;
L_52fc6:
    X86_TICK(c, 13);
    // 052fc6  mov word ptr [ebx + 0x10], 0xffff
    X86_AT(c, 0x52fc6u);
    wr16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u)), 0xFFFFu);
    // 052fcc  mov eax, dword ptr [ebx + 4]
    X86_AT(c, 0x52fccu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)));
    // 052fcf  cmp edi, eax
    X86_AT(c, 0x52fcfu);
    (void)x86_sub(c, c.r[7], c.r[0], 0, 4);
    // 052fd1  jl 0x52ff7
    X86_AT(c, 0x52fd1u);
    if (x86_cc(c, 12)) { goto L_52ff7; }
    X86_TICK(c, 7);
    // 052fd3  and eax, eax
    X86_AT(c, 0x52fd3u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 052fd5  jle 0x52ff7
    X86_AT(c, 0x52fd5u);
    if (x86_cc(c, 14)) { goto L_52ff7; }
    X86_TICK(c, 53);
    // 052fd7  xchg ecx, eax
    X86_AT(c, 0x52fd7u);
    { uint32_t t = c.r[1]; c.r[1] = c.r[0]; c.r[0] = t; }
    // 052fd8  mov eax, dword ptr [ebx]
    X86_AT(c, 0x52fd8u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3])));
    // 052fda  mov edx, dword ptr [ebp + 0xc]
    X86_AT(c, 0x52fdau);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 052fdd  push esi
    X86_AT(c, 0x52fddu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 052fde  push edi
    X86_AT(c, 0x52fdeu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 052fdf  mov esi, eax
    X86_AT(c, 0x52fdfu);
    c.r[6] = c.r[0];
    // 052fe1  mov edi, edx
    X86_AT(c, 0x52fe1u);
    c.r[7] = c.r[2];
    // 052fe3  movsb byte ptr es:[edi], byte ptr [esi]
    X86_AT(c, 0x52fe3u);
    x86_string(c, 0, 1, 243, 4, 3);
    // 052fe5  pop edi
    X86_AT(c, 0x52fe5u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 052fe6  pop esi
    X86_AT(c, 0x52fe6u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 052fe7  sub edi, dword ptr [ebx + 4]
    X86_AT(c, 0x52fe7u);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u))), 0, 4); }
    // 052fea  mov eax, dword ptr [ebx + 4]
    X86_AT(c, 0x52feau);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)));
    // 052fed  add dword ptr [ebp - 4], eax
    X86_AT(c, 0x52fedu);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 052ff0  mov dword ptr [ebx + 4], 0
    X86_AT(c, 0x52ff0u);
    wr32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)), 0x0u);
L_52ff7:
    X86_TICK(c, 7);
    // 052ff7  cmp edi, 0x200
    X86_AT(c, 0x52ff7u);
    (void)x86_sub(c, c.r[7], 0x200u, 0, 4);
    // 052ffd  jb 0x53035
    X86_AT(c, 0x52ffdu);
    if (x86_cc(c, 2)) { goto L_53035; }
    X86_TICK(c, 10);
    // 052fff  mov esi, edi
    X86_AT(c, 0x52fffu);
    c.r[6] = c.r[7];
    // 053001  shr esi, 9
    X86_AT(c, 0x53001u);
    { uint32_t v = c.r[6]; bool w; uint32_t r = x86_shift(c, 5, v, 0x9u, 4, w); if (w) c.r[6] = r; }
    // 053004  shl esi, 9
    X86_AT(c, 0x53004u);
    { uint32_t v = c.r[6]; bool w; uint32_t r = x86_shift(c, 4, v, 0x9u, 4, w); if (w) c.r[6] = r; }
    // 053007  mov dword ptr [ebp - 0xc], 0
    X86_AT(c, 0x53007u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)), 0x0u);
L_5300e:
    X86_TICK(c, 27);
    // 05300e  push esi
    X86_AT(c, 0x5300eu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 05300f  mov eax, dword ptr [ebp + 0xc]
    X86_AT(c, 0x5300fu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 053012  add eax, dword ptr [ebp - 4]
    X86_AT(c, 0x53012u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))), 0, 4); }
    // 053015  push eax
    X86_AT(c, 0x53015u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 053016  mov al, byte ptr [ebx + 0xe]
    X86_AT(c, 0x53016u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xEu))));
    // 053019  push eax
    X86_AT(c, 0x53019u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 05301a  call 0x55ce0
    X86_AT(c, 0x5301au);
    push32(c, 0x5301fu); x86_call_known(c, 0x55ce0u, f_00055ce0); X86_RET(c, 0x5301fu);
    X86_TICK(c, 25);
    // 05301f  mov dword ptr [ebp - 8], eax
    X86_AT(c, 0x5301fu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), c.r[0]);
    // 053022  add dword ptr [ebp - 0xc], eax
    X86_AT(c, 0x53022u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 053025  sub esi, eax
    X86_AT(c, 0x53025u);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[0], 0, 4); }
    // 053027  add dword ptr [ebp - 4], eax
    X86_AT(c, 0x53027u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 05302a  and esi, esi
    X86_AT(c, 0x5302au);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & c.r[6], 4); }
    // 05302c  je 0x53032
    X86_AT(c, 0x5302cu);
    if (x86_cc(c, 4)) { goto L_53032; }
    X86_TICK(c, 7);
    // 05302e  and eax, eax
    X86_AT(c, 0x5302eu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 053030  jne 0x5300e
    X86_AT(c, 0x53030u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x5300eu); goto L_5300e; }
L_53032:
    X86_TICK(c, 6);
    // 053032  sub edi, dword ptr [ebp - 0xc]
    X86_AT(c, 0x53032u);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u))), 0, 4); }
L_53035:
    X86_TICK(c, 7);
    // 053035  and edi, edi
    X86_AT(c, 0x53035u);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & c.r[7], 4); }
    // 053037  jbe 0x5308e
    X86_AT(c, 0x53037u);
    if (x86_cc(c, 6)) { goto L_5308e; }
    X86_TICK(c, 12);
    // 053039  cmp dword ptr [ebx + 4], 0
    X86_AT(c, 0x53039u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u))), 0x0u, 0, 4);
    // 05303d  jne 0x5305e
    X86_AT(c, 0x5303du);
    if (x86_cc(c, 5)) { goto L_5305e; }
    X86_TICK(c, 12);
    // 05303f  test byte ptr [ebx + 0xc], 0x10
    X86_AT(c, 0x5303fu);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xCu))) & 0x10u, 1);
    // 053043  jne 0x53096
    X86_AT(c, 0x53043u);
    if (x86_cc(c, 5)) { goto L_53096; }
    X86_TICK(c, 20);
    // 053045  push 0x200
    X86_AT(c, 0x53045u);
    { uint32_t v = 0x200u; push32(c, v); }
    // 05304a  push dword ptr [ebx + 8]
    X86_AT(c, 0x5304au);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x8u))); push32(c, v); }
    // 05304d  mov al, byte ptr [ebx + 0xe]
    X86_AT(c, 0x5304du);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xEu))));
    // 053050  push eax
    X86_AT(c, 0x53050u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 053051  call 0x55ce0
    X86_AT(c, 0x53051u);
    push32(c, 0x53056u); x86_call_known(c, 0x55ce0u, f_00055ce0); X86_RET(c, 0x53056u);
    X86_TICK(c, 8);
    // 053056  mov dword ptr [ebx + 4], eax
    X86_AT(c, 0x53056u);
    wr32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)), c.r[0]);
    // 053059  mov eax, dword ptr [ebx + 8]
    X86_AT(c, 0x53059u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x8u)));
    // 05305c  mov dword ptr [ebx], eax
    X86_AT(c, 0x5305cu);
    wr32((c.sbase[3] + (uint32_t)(c.r[3])), c.r[0]);
L_5305e:
    X86_TICK(c, 12);
    // 05305e  cmp dword ptr [ebx + 4], 0
    X86_AT(c, 0x5305eu);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u))), 0x0u, 0, 4);
    // 053062  jle 0x53096
    X86_AT(c, 0x53062u);
    if (x86_cc(c, 14)) { goto L_53096; }
L_53064:
    X86_TICK(c, 13);
    // 053064  mov eax, dword ptr [ebx + 4]
    X86_AT(c, 0x53064u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)));
    // 053067  mov edx, edi
    X86_AT(c, 0x53067u);
    c.r[2] = c.r[7];
    // 053069  cmp edx, eax
    X86_AT(c, 0x53069u);
    (void)x86_sub(c, c.r[2], c.r[0], 0, 4);
    // 05306b  jl 0x5306e
    X86_AT(c, 0x5306bu);
    if (x86_cc(c, 12)) { goto L_5306e; }
    X86_TICK(c, 3);
    // 05306d  xchg edx, eax
    X86_AT(c, 0x5306du);
    { uint32_t t = c.r[2]; c.r[2] = c.r[0]; c.r[0] = t; }
L_5306e:
    X86_TICK(c, 2);
    // 05306e  mov esi, edx
    X86_AT(c, 0x5306eu);
    c.r[6] = c.r[2];
L_53070:
    X86_TICK(c, 62);
    // 053070  mov ecx, esi
    X86_AT(c, 0x53070u);
    c.r[1] = c.r[6];
    // 053072  mov eax, dword ptr [ebx]
    X86_AT(c, 0x53072u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3])));
    // 053074  mov edx, dword ptr [ebp + 0xc]
    X86_AT(c, 0x53074u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 053077  add edx, dword ptr [ebp - 4]
    X86_AT(c, 0x53077u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))), 0, 4); }
    // 05307a  push esi
    X86_AT(c, 0x5307au);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 05307b  push edi
    X86_AT(c, 0x5307bu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 05307c  mov esi, eax
    X86_AT(c, 0x5307cu);
    c.r[6] = c.r[0];
    // 05307e  mov edi, edx
    X86_AT(c, 0x5307eu);
    c.r[7] = c.r[2];
    // 053080  movsb byte ptr es:[edi], byte ptr [esi]
    X86_AT(c, 0x53080u);
    x86_string(c, 0, 1, 243, 4, 3);
    // 053082  pop edi
    X86_AT(c, 0x53082u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 053083  pop esi
    X86_AT(c, 0x53083u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 053084  add dword ptr [ebp - 4], esi
    X86_AT(c, 0x53084u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[6], 0, 4)); }
    // 053087  sub dword ptr [ebx + 4], esi
    X86_AT(c, 0x53087u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)); uint32_t v = rd32(ea); wr32(ea, x86_sub(c, v, c.r[6], 0, 4)); }
    // 05308a  sub edi, esi
    X86_AT(c, 0x5308au);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[6], 0, 4); }
    // 05308c  add dword ptr [ebx], esi
    X86_AT(c, 0x5308cu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3])); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[6], 0, 4)); }
L_5308e:
    X86_TICK(c, 7);
    // 05308e  and edi, edi
    X86_AT(c, 0x5308eu);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & c.r[7], 4); }
    // 053090  ja 0x52dc9
    X86_AT(c, 0x53090u);
    if (x86_cc(c, 7)) { X86_POLL(c, 0x52dc9u); goto L_52dc9; }
L_53096:
    X86_TICK(c, 12);
    // 053096  cmp dword ptr [ebp - 4], 0
    X86_AT(c, 0x53096u);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))), 0x0u, 0, 4);
    // 05309a  jne 0x530a0
    X86_AT(c, 0x5309au);
    if (x86_cc(c, 5)) { goto L_530a0; }
    X86_TICK(c, 7);
    // 05309c  or byte ptr [ebx + 0xc], 0x10
    X86_AT(c, 0x5309cu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3] + 0xCu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | 0x10u, 1)); }
L_530a0:
    X86_TICK(c, 13);
    // 0530a0  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0x530a0u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0530a3  mov dword ptr [0x4b490], eax
    X86_AT(c, 0x530a3u);
    wr32((c.sbase[3] + (uint32_t)(0x4B490u)), c.r[0]);
    // 0530a8  jmp 0x531d8
    X86_AT(c, 0x530a8u);
    goto L_531d8;
L_531d8:
    X86_TICK(c, 12);
    // 0531d8  cmp word ptr [0x4b81e], 0
    X86_AT(c, 0x531d8u);
    (void)x86_sub(c, rd16((c.sbase[3] + (uint32_t)(0x4B81Eu))), 0x0u, 0, 2);
    // 0531e0  je 0x531e8
    X86_AT(c, 0x531e0u);
    if (x86_cc(c, 4)) { goto L_531e8; }
    X86_TICK(c, 14);
    // 0531e2  or byte ptr [ebx + 0xc], 0x20
    X86_AT(c, 0x531e2u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3] + 0xCu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | 0x20u, 1)); }
    // 0531e6  jmp 0x531f2
    X86_AT(c, 0x531e6u);
    goto L_531f2;
L_531e8:
    X86_TICK(c, 6);
    // 0531e8  mov ax, word ptr [ebp - 0xe]
    X86_AT(c, 0x531e8u);
    s16(c, 0, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF2u))));
    // 0531ec  mov word ptr [0x4b81e], ax
    X86_AT(c, 0x531ecu);
    wr16((c.sbase[3] + (uint32_t)(0x4B81Eu)), (c.r[0] & 0xFFFFu));
L_531f2:
    X86_TICK(c, 28);
    // 0531f2  pop edi
    X86_AT(c, 0x531f2u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0531f3  pop esi
    X86_AT(c, 0x531f3u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0531f4  pop ebx
    X86_AT(c, 0x531f4u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0531f5  leave 
    X86_AT(c, 0x531f5u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0531f6  ret 0xc
    X86_AT(c, 0x531f6u);
    c.eip = pop32(c); c.r[4] += 0xCu; return;
    x86_fault(c, 0x5308eu, "ran off the end of a function");
}
void f_00053200(X86Cpu& c) {
    X86_TICK(c, 30);
    // 053200  enter 4, 0
    X86_AT(c, 0x53200u);
    x86_enter(c, 0x4u, 0x0u, 4);
    // 053204  push ebx
    X86_AT(c, 0x53204u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 053205  push esi
    X86_AT(c, 0x53205u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 053206  push edi
    X86_AT(c, 0x53206u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 053207  mov edi, dword ptr [ebp + 0x14]
    X86_AT(c, 0x53207u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x14u)));
    // 05320a  mov ebx, edi
    X86_AT(c, 0x5320au);
    c.r[3] = c.r[7];
    // 05320c  test byte ptr [ebx + 0xc], 2
    X86_AT(c, 0x5320cu);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xCu))) & 0x2u, 1);
    // 053210  jne 0x53222
    X86_AT(c, 0x53210u);
    if (x86_cc(c, 5)) { goto L_53222; }
    X86_TICK(c, 18);
    // 053212  mov ax, 5
    X86_AT(c, 0x53212u);
    s16(c, 0, 0x5u);
    // 053216  mov word ptr [0x4b81e], ax
    X86_AT(c, 0x53216u);
    wr16((c.sbase[3] + (uint32_t)(0x4B81Eu)), (c.r[0] & 0xFFFFu));
    // 05321c  or byte ptr [ebx + 0xc], 0x20
    X86_AT(c, 0x5321cu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3] + 0xCu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | 0x20u, 1)); }
    // 053220  jmp 0x53262
    X86_AT(c, 0x53220u);
    goto L_53262;
L_53222:
    X86_TICK(c, 12);
    // 053222  test byte ptr [ebx + 0xc], 0x80
    X86_AT(c, 0x53222u);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xCu))) & 0x80u, 1);
    // 053226  je 0x5322e
    X86_AT(c, 0x53226u);
    if (x86_cc(c, 4)) { goto L_5322e; }
    X86_TICK(c, 9);
    // 053228  push edi
    X86_AT(c, 0x53228u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 053229  call 0x547e0
    X86_AT(c, 0x53229u);
    push32(c, 0x5322eu); x86_call_known(c, 0x547e0u, f_000547e0); X86_RET(c, 0x5322eu);
L_5322e:
    X86_TICK(c, 19);
    // 05322e  and byte ptr [ebx + 0xd], 0xf7
    X86_AT(c, 0x5322eu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3] + 0xDu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v & 0xF7u, 1)); }
    // 053232  cmp dword ptr [ebx + 4], 0xffffffff
    X86_AT(c, 0x53232u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u))), 0xFFFFFFFFu, 0, 4);
    // 053236  jne 0x5323f
    X86_AT(c, 0x53236u);
    if (x86_cc(c, 5)) { goto L_5323f; }
    X86_TICK(c, 2);
    // 053238  mov dword ptr [ebx + 4], 0
    X86_AT(c, 0x53238u);
    wr32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)), 0x0u);
L_5323f:
    X86_TICK(c, 36);
    // 05323f  mov eax, dword ptr [ebp + 0xc]
    X86_AT(c, 0x5323fu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 053242  imul eax, dword ptr [ebp + 0x10]
    X86_AT(c, 0x53242u);
    c.r[0] = x86_imul2(c, c.r[0], rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u))), 4);
    // 053246  xchg esi, eax
    X86_AT(c, 0x53246u);
    { uint32_t t = c.r[6]; c.r[6] = c.r[0]; c.r[0] = t; }
    // 053247  and esi, esi
    X86_AT(c, 0x53247u);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & c.r[6], 4); }
    // 053249  jl 0x53253
    X86_AT(c, 0x53249u);
    if (x86_cc(c, 12)) { goto L_53253; }
    X86_TICK(c, 7);
    // 05324b  cmp esi, 0x7fffffff
    X86_AT(c, 0x5324bu);
    (void)x86_sub(c, c.r[6], 0x7FFFFFFFu, 0, 4);
    // 053251  jle 0x5325e
    X86_AT(c, 0x53251u);
    if (x86_cc(c, 14)) { goto L_5325e; }
L_53253:
    X86_TICK(c, 9);
    // 053253  mov word ptr [0x4b81e], 1
    X86_AT(c, 0x53253u);
    wr16((c.sbase[3] + (uint32_t)(0x4B81Eu)), 0x1u);
    // 05325c  jmp 0x53262
    X86_AT(c, 0x5325cu);
    goto L_53262;
L_5325e:
    X86_TICK(c, 7);
    // 05325e  and esi, esi
    X86_AT(c, 0x5325eu);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & c.r[6], 4); }
    // 053260  jne 0x53266
    X86_AT(c, 0x53260u);
    if (x86_cc(c, 5)) { goto L_53266; }
L_53262:
    X86_TICK(c, 9);
    // 053262  sub eax, eax
    X86_AT(c, 0x53262u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 053264  jmp 0x5327c
    X86_AT(c, 0x53264u);
    goto L_5327c;
L_53266:
    X86_TICK(c, 16);
    // 053266  push esi
    X86_AT(c, 0x53266u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 053267  push dword ptr [ebp + 8]
    X86_AT(c, 0x53267u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, v); }
    // 05326a  push edi
    X86_AT(c, 0x5326au);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 05326b  call 0x52d98
    X86_AT(c, 0x5326bu);
    push32(c, 0x53270u); x86_call_known(c, 0x52d98u, f_00052d98); X86_RET(c, 0x53270u);
    X86_TICK(c, 48);
    // 053270  mov eax, dword ptr [0x4b490]
    X86_AT(c, 0x53270u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x4B490u)));
    // 053275  cdq 
    X86_AT(c, 0x53275u);
    c.r[2] = (c.r[0] & 0x80000000u) ? 0xFFFFFFFFu : 0u;
    // 053276  idiv dword ptr [ebp + 0xc]
    X86_AT(c, 0x53276u);
    x86_idiv(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))), 4, 0x53276u);
    // 053279  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0x53279u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
L_5327c:
    X86_TICK(c, 28);
    // 05327c  pop edi
    X86_AT(c, 0x5327cu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 05327d  pop esi
    X86_AT(c, 0x5327du);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 05327e  pop ebx
    X86_AT(c, 0x5327eu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 05327f  leave 
    X86_AT(c, 0x5327fu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 053280  ret 
    X86_AT(c, 0x53280u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x53200u, "ran off the end of a function");
}
}

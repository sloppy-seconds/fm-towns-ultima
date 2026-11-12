#include "p_game_funcs.h"
namespace p_game {
void f_000911a3(X86Cpu& c) {
    X86_TICK(c, 19);
    // 0911a3  pushfd 
    X86_AT(c, 0x911a3u);
    push32(c, c.fl & 0x00FCFFFFu);
    // 0911a4  cli 
    X86_AT(c, 0x911a4u);
    c.fl &= ~X86_IF;
    // 0911a5  mov bl, 0
    X86_AT(c, 0x911a5u);
    s8(c, 3, 0x0u);
    // 0911a7  mov ah, 0x15
    X86_AT(c, 0x911a7u);
    s8(c, 4, 0x15u);
    // 0911a9  call 0x8fad8
    X86_AT(c, 0x911a9u);
    push32(c, 0x911aeu); x86_call_known(c, 0x8fad8u, f_0008fad8); X86_RET(c, 0x911aeu);
    X86_TICK(c, 13);
    // 0911ae  mov eax, dword ptr [0x89bde]
    X86_AT(c, 0x911aeu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x89BDEu)));
    // 0911b3  push eax
    X86_AT(c, 0x911b3u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0911b4  call 0x8f82c
    X86_AT(c, 0x911b4u);
    push32(c, 0x911b9u); x86_call_known(c, 0x8f82cu, f_0008f82c); X86_RET(c, 0x911b9u);
    X86_TICK(c, 15);
    // 0911b9  add esp, 4
    X86_AT(c, 0x911b9u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0911bc  mov eax, dword ptr [0x89be2]
    X86_AT(c, 0x911bcu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x89BE2u)));
    // 0911c1  push eax
    X86_AT(c, 0x911c1u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0911c2  call 0x8f858
    X86_AT(c, 0x911c2u);
    push32(c, 0x911c7u); x86_call_known(c, 0x8f858u, f_0008f858); X86_RET(c, 0x911c7u);
    X86_TICK(c, 18);
    // 0911c7  add esp, 4
    X86_AT(c, 0x911c7u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0911ca  popfd 
    X86_AT(c, 0x911cau);
    x86_popfd(c, 4);
    // 0911cb  ret 
    X86_AT(c, 0x911cbu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x911a3u, "ran off the end of a function");
}
void f_000911cc(X86Cpu& c) {
    X86_TICK(c, 28);
    // 0911cc  pushal 
    X86_AT(c, 0x911ccu);
    { uint32_t sp = c.r[4]; for (int k = 0; k < 8; ++k) push32(c, k == 4 ? sp : c.r[k]); }
    // 0911cd  lea esi, [0x89bf5]
    X86_AT(c, 0x911cdu);
    c.r[6] = (uint32_t)(0x89BF5u);
    // 0911d3  lea eax, [0x89d75]
    X86_AT(c, 0x911d3u);
    c.r[0] = (uint32_t)(0x89D75u);
    // 0911d9  mov bx, 0xe50
    X86_AT(c, 0x911d9u);
    s16(c, 3, 0xE50u);
    // 0911dd  mov ecx, 4
    X86_AT(c, 0x911ddu);
    c.r[1] = 0x4u;
    // 0911e2  mov dx, 1
    X86_AT(c, 0x911e2u);
    s16(c, 2, 0x1u);
L_911e6:
    X86_TICK(c, 82);
    // 0911e6  mov word ptr [esi + 0x10], 0
    X86_AT(c, 0x911e6u);
    wr16((c.sbase[3] + (uint32_t)(c.r[6] + 0x10u)), 0x0u);
    // 0911ec  mov dword ptr [esi], eax
    X86_AT(c, 0x911ecu);
    wr32((c.sbase[3] + (uint32_t)(c.r[6])), c.r[0]);
    // 0911ee  mov dword ptr [esi + 8], eax
    X86_AT(c, 0x911eeu);
    wr32((c.sbase[3] + (uint32_t)(c.r[6] + 0x8u)), c.r[0]);
    // 0911f1  mov dword ptr [esi + 0xc], eax
    X86_AT(c, 0x911f1u);
    wr32((c.sbase[3] + (uint32_t)(c.r[6] + 0xCu)), c.r[0]);
    // 0911f4  add eax, 0x10
    X86_AT(c, 0x911f4u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0x10u, 0, 4); }
    // 0911f9  mov dword ptr [esi + 4], eax
    X86_AT(c, 0x911f9u);
    wr32((c.sbase[3] + (uint32_t)(c.r[6] + 0x4u)), c.r[0]);
    // 0911fc  mov byte ptr [esi + 0x19], 0
    X86_AT(c, 0x911fcu);
    wr8((c.sbase[3] + (uint32_t)(c.r[6] + 0x19u)), 0x0u);
    // 091200  mov byte ptr [esi + 0x1a], dl
    X86_AT(c, 0x91200u);
    wr8((c.sbase[3] + (uint32_t)(c.r[6] + 0x1Au)), g8(c, 2));
    // 091203  inc bx
    X86_AT(c, 0x91203u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_inc(c, v, 2)); }
    // 091205  mov word ptr [esi + 0x12], bx
    X86_AT(c, 0x91205u);
    wr16((c.sbase[3] + (uint32_t)(c.r[6] + 0x12u)), (c.r[3] & 0xFFFFu));
    // 091209  add bx, 2
    X86_AT(c, 0x91209u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, 0x2u, 0, 2)); }
    // 09120d  mov word ptr [esi + 0x14], bx
    X86_AT(c, 0x9120du);
    wr16((c.sbase[3] + (uint32_t)(c.r[6] + 0x14u)), (c.r[3] & 0xFFFFu));
    // 091211  inc bx
    X86_AT(c, 0x91211u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_inc(c, v, 2)); }
    // 091213  shl dl, 1
    X86_AT(c, 0x91213u);
    { uint32_t v = g8(c, 2); bool w; uint32_t r = x86_shift(c, 4, v, 0x1u, 1, w); if (w) s8(c, 2, r); }
    // 091215  add esi, 0x20
    X86_AT(c, 0x91215u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x20u, 0, 4); }
    // 091218  mov word ptr [esi + 0x10], 0
    X86_AT(c, 0x91218u);
    wr16((c.sbase[3] + (uint32_t)(c.r[6] + 0x10u)), 0x0u);
    // 09121e  mov dword ptr [esi], eax
    X86_AT(c, 0x9121eu);
    wr32((c.sbase[3] + (uint32_t)(c.r[6])), c.r[0]);
    // 091220  mov dword ptr [esi + 8], eax
    X86_AT(c, 0x91220u);
    wr32((c.sbase[3] + (uint32_t)(c.r[6] + 0x8u)), c.r[0]);
    // 091223  mov dword ptr [esi + 0xc], eax
    X86_AT(c, 0x91223u);
    wr32((c.sbase[3] + (uint32_t)(c.r[6] + 0xCu)), c.r[0]);
    // 091226  add eax, 0x10
    X86_AT(c, 0x91226u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0x10u, 0, 4); }
    // 09122b  mov dword ptr [esi + 4], eax
    X86_AT(c, 0x9122bu);
    wr32((c.sbase[3] + (uint32_t)(c.r[6] + 0x4u)), c.r[0]);
    // 09122e  mov byte ptr [esi + 0x19], 0
    X86_AT(c, 0x9122eu);
    wr8((c.sbase[3] + (uint32_t)(c.r[6] + 0x19u)), 0x0u);
    // 091232  mov byte ptr [esi + 0x1a], dl
    X86_AT(c, 0x91232u);
    wr8((c.sbase[3] + (uint32_t)(c.r[6] + 0x1Au)), g8(c, 2));
    // 091235  inc bx
    X86_AT(c, 0x91235u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_inc(c, v, 2)); }
    // 091237  mov word ptr [esi + 0x12], bx
    X86_AT(c, 0x91237u);
    wr16((c.sbase[3] + (uint32_t)(c.r[6] + 0x12u)), (c.r[3] & 0xFFFFu));
    // 09123b  inc bx
    X86_AT(c, 0x9123bu);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_inc(c, v, 2)); }
    // 09123d  inc bx
    X86_AT(c, 0x9123du);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_inc(c, v, 2)); }
    // 09123f  mov word ptr [esi + 0x14], bx
    X86_AT(c, 0x9123fu);
    wr16((c.sbase[3] + (uint32_t)(c.r[6] + 0x14u)), (c.r[3] & 0xFFFFu));
    // 091243  sub word ptr [esi + 0x14], 4
    X86_AT(c, 0x91243u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[6] + 0x14u)); uint32_t v = rd16(ea); wr16(ea, x86_sub(c, v, 0x4u, 0, 2)); }
    // 091248  inc bx
    X86_AT(c, 0x91248u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_inc(c, v, 2)); }
    // 09124a  shl dl, 1
    X86_AT(c, 0x9124au);
    { uint32_t v = g8(c, 2); bool w; uint32_t r = x86_shift(c, 4, v, 0x1u, 1, w); if (w) s8(c, 2, r); }
    // 09124c  add esi, 0x20
    X86_AT(c, 0x9124cu);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x20u, 0, 4); }
    // 09124f  loop 0x911e6
    X86_AT(c, 0x9124fu);
    c.r[1] -= 1; if (c.r[1] != 0) { X86_POLL(c, 0x911e6u); goto L_911e6; }
    X86_TICK(c, 34);
    // 091251  popal 
    X86_AT(c, 0x91251u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 091252  ret 
    X86_AT(c, 0x91252u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x911ccu, "ran off the end of a function");
}
void f_00091253(X86Cpu& c) {
    X86_TICK(c, 28);
    // 091253  pushal 
    X86_AT(c, 0x91253u);
    { uint32_t sp = c.r[4]; for (int k = 0; k < 8; ++k) push32(c, k == 4 ? sp : c.r[k]); }
    // 091254  lea esi, [0x89cf5]
    X86_AT(c, 0x91254u);
    c.r[6] = (uint32_t)(0x89CF5u);
    // 09125a  lea eax, [0x89df5]
    X86_AT(c, 0x9125au);
    c.r[0] = (uint32_t)(0x89DF5u);
    // 091260  mov bx, 0xe50
    X86_AT(c, 0x91260u);
    s16(c, 3, 0xE50u);
    // 091264  mov ecx, 4
    X86_AT(c, 0x91264u);
    c.r[1] = 0x4u;
    // 091269  mov dx, 1
    X86_AT(c, 0x91269u);
    s16(c, 2, 0x1u);
L_9126d:
    X86_TICK(c, 44);
    // 09126d  mov word ptr [esi + 0x10], 0
    X86_AT(c, 0x9126du);
    wr16((c.sbase[3] + (uint32_t)(c.r[6] + 0x10u)), 0x0u);
    // 091273  mov dword ptr [esi], eax
    X86_AT(c, 0x91273u);
    wr32((c.sbase[3] + (uint32_t)(c.r[6])), c.r[0]);
    // 091275  mov dword ptr [esi + 8], eax
    X86_AT(c, 0x91275u);
    wr32((c.sbase[3] + (uint32_t)(c.r[6] + 0x8u)), c.r[0]);
    // 091278  mov dword ptr [esi + 0xc], eax
    X86_AT(c, 0x91278u);
    wr32((c.sbase[3] + (uint32_t)(c.r[6] + 0xCu)), c.r[0]);
    // 09127b  add eax, 0x40
    X86_AT(c, 0x9127bu);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0x40u, 0, 4); }
    // 091280  mov dword ptr [esi + 4], eax
    X86_AT(c, 0x91280u);
    wr32((c.sbase[3] + (uint32_t)(c.r[6] + 0x4u)), c.r[0]);
    // 091283  mov byte ptr [esi + 0x19], 0
    X86_AT(c, 0x91283u);
    wr8((c.sbase[3] + (uint32_t)(c.r[6] + 0x19u)), 0x0u);
    // 091287  mov byte ptr [esi + 0x1a], dl
    X86_AT(c, 0x91287u);
    wr8((c.sbase[3] + (uint32_t)(c.r[6] + 0x1Au)), g8(c, 2));
    // 09128a  inc bx
    X86_AT(c, 0x9128au);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_inc(c, v, 2)); }
    // 09128c  mov word ptr [esi + 0x12], bx
    X86_AT(c, 0x9128cu);
    wr16((c.sbase[3] + (uint32_t)(c.r[6] + 0x12u)), (c.r[3] & 0xFFFFu));
    // 091290  add bx, 2
    X86_AT(c, 0x91290u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, 0x2u, 0, 2)); }
    // 091294  mov word ptr [esi + 0x14], bx
    X86_AT(c, 0x91294u);
    wr16((c.sbase[3] + (uint32_t)(c.r[6] + 0x14u)), (c.r[3] & 0xFFFFu));
    // 091298  inc bx
    X86_AT(c, 0x91298u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_inc(c, v, 2)); }
    // 09129a  shl dl, 1
    X86_AT(c, 0x9129au);
    { uint32_t v = g8(c, 2); bool w; uint32_t r = x86_shift(c, 4, v, 0x1u, 1, w); if (w) s8(c, 2, r); }
    // 09129c  add bx, 4
    X86_AT(c, 0x9129cu);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, 0x4u, 0, 2)); }
    // 0912a0  add esi, 0x20
    X86_AT(c, 0x912a0u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x20u, 0, 4); }
    // 0912a3  loop 0x9126d
    X86_AT(c, 0x912a3u);
    c.r[1] -= 1; if (c.r[1] != 0) { X86_POLL(c, 0x9126du); goto L_9126d; }
    X86_TICK(c, 34);
    // 0912a5  popal 
    X86_AT(c, 0x912a5u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 0912a6  ret 
    X86_AT(c, 0x912a6u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x91253u, "ran off the end of a function");
}
void f_000912a7(X86Cpu& c) {
    X86_TICK(c, 24);
    // 0912a7  pushal 
    X86_AT(c, 0x912a7u);
    { uint32_t sp = c.r[4]; for (int k = 0; k < 8; ++k) push32(c, k == 4 ? sp : c.r[k]); }
    // 0912a8  xor cx, cx
    X86_AT(c, 0x912a8u);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_logic(c, v ^ (c.r[1] & 0xFFFFu), 2)); }
    // 0912ab  lea esi, [0x89cf5]
    X86_AT(c, 0x912abu);
    c.r[6] = (uint32_t)(0x89CF5u);
    // 0912b1  lea edi, [0x89bf5]
    X86_AT(c, 0x912b1u);
    c.r[7] = (uint32_t)(0x89BF5u);
L_912b7:
    X86_TICK(c, 16);
    // 0912b7  mov dx, cx
    X86_AT(c, 0x912b7u);
    s16(c, 2, (c.r[1] & 0xFFFFu));
    // 0912ba  shl dx, 3
    X86_AT(c, 0x912bau);
    { uint32_t v = (c.r[2] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 4, v, 0x3u, 2, w); if (w) s16(c, 2, r); }
    // 0912be  add dx, 0xe51
    X86_AT(c, 0x912beu);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, 0xE51u, 0, 2)); }
    // 0912c3  mov al, 0
    X86_AT(c, 0x912c3u);
    s8(c, 0, 0x0u);
    // 0912c5  call 0x9136d
    X86_AT(c, 0x912c5u);
    push32(c, 0x912cau); x86_call_known(c, 0x9136du, f_0009136d); X86_RET(c, 0x912cau);
    X86_TICK(c, 7);
    // 0912ca  call 0x9136d
    X86_AT(c, 0x912cau);
    push32(c, 0x912cfu); x86_call_known(c, 0x9136du, f_0009136d); X86_RET(c, 0x912cfu);
    X86_TICK(c, 7);
    // 0912cf  call 0x9136d
    X86_AT(c, 0x912cfu);
    push32(c, 0x912d4u); x86_call_known(c, 0x9136du, f_0009136d); X86_RET(c, 0x912d4u);
    X86_TICK(c, 9);
    // 0912d4  mov al, 0x40
    X86_AT(c, 0x912d4u);
    s8(c, 0, 0x40u);
    // 0912d6  call 0x9136d
    X86_AT(c, 0x912d6u);
    push32(c, 0x912dbu); x86_call_known(c, 0x9136du, f_0009136d); X86_RET(c, 0x912dbu);
    X86_TICK(c, 9);
    // 0912db  mov al, 0x4e
    X86_AT(c, 0x912dbu);
    s8(c, 0, 0x4Eu);
    // 0912dd  call 0x9136d
    X86_AT(c, 0x912ddu);
    push32(c, 0x912e2u); x86_call_known(c, 0x9136du, f_0009136d); X86_RET(c, 0x912e2u);
    X86_TICK(c, 9);
    // 0912e2  mov al, 0x37
    X86_AT(c, 0x912e2u);
    s8(c, 0, 0x37u);
    // 0912e4  call 0x9136d
    X86_AT(c, 0x912e4u);
    push32(c, 0x912e9u); x86_call_known(c, 0x9136du, f_0009136d); X86_RET(c, 0x912e9u);
    X86_TICK(c, 25);
    // 0912e9  mov byte ptr [esi + 0x18], 0
    X86_AT(c, 0x912e9u);
    wr8((c.sbase[3] + (uint32_t)(c.r[6] + 0x18u)), 0x0u);
    // 0912ed  mov byte ptr [edi + 0x18], 0
    X86_AT(c, 0x912edu);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0x18u)), 0x0u);
    // 0912f1  mov byte ptr [edi + 0x38], 0
    X86_AT(c, 0x912f1u);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0x38u)), 0x0u);
    // 0912f5  in al, dx
    X86_AT(c, 0x912f5u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 0912f6  cmp al, 0xff
    X86_AT(c, 0x912f6u);
    (void)x86_sub(c, g8(c, 0), 0xFFu, 0, 1);
    // 0912f8  je 0x9130a
    X86_AT(c, 0x912f8u);
    if (x86_cc(c, 4)) { goto L_9130a; }
    X86_TICK(c, 6);
    // 0912fe  mov byte ptr [esi + 0x18], 0xff
    X86_AT(c, 0x912feu);
    wr8((c.sbase[3] + (uint32_t)(c.r[6] + 0x18u)), 0xFFu);
    // 091302  mov byte ptr [edi + 0x18], 0xff
    X86_AT(c, 0x91302u);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0x18u)), 0xFFu);
    // 091306  mov byte ptr [edi + 0x38], 0xff
    X86_AT(c, 0x91306u);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0x38u)), 0xFFu);
L_9130a:
    X86_TICK(c, 31);
    // 09130a  add esi, 0x20
    X86_AT(c, 0x9130au);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x20u, 0, 4); }
    // 09130d  add edi, 0x40
    X86_AT(c, 0x9130du);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x40u, 0, 4); }
    // 091310  add dx, 2
    X86_AT(c, 0x91310u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, 0x2u, 0, 2)); }
    // 091314  mov al, 1
    X86_AT(c, 0x91314u);
    s8(c, 0, 0x1u);
    // 091316  out dx, al
    X86_AT(c, 0x91316u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 091317  add dx, 2
    X86_AT(c, 0x91317u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, 0x2u, 0, 2)); }
    // 09131b  mov al, 0
    X86_AT(c, 0x9131bu);
    s8(c, 0, 0x0u);
    // 09131d  call 0x9136d
    X86_AT(c, 0x9131du);
    push32(c, 0x91322u); x86_call_known(c, 0x9136du, f_0009136d); X86_RET(c, 0x91322u);
    X86_TICK(c, 7);
    // 091322  call 0x9136d
    X86_AT(c, 0x91322u);
    push32(c, 0x91327u); x86_call_known(c, 0x9136du, f_0009136d); X86_RET(c, 0x91327u);
    X86_TICK(c, 7);
    // 091327  call 0x9136d
    X86_AT(c, 0x91327u);
    push32(c, 0x9132cu); x86_call_known(c, 0x9136du, f_0009136d); X86_RET(c, 0x9132cu);
    X86_TICK(c, 9);
    // 09132c  mov al, 0x40
    X86_AT(c, 0x9132cu);
    s8(c, 0, 0x40u);
    // 09132e  call 0x9136d
    X86_AT(c, 0x9132eu);
    push32(c, 0x91333u); x86_call_known(c, 0x9136du, f_0009136d); X86_RET(c, 0x91333u);
    X86_TICK(c, 9);
    // 091333  mov al, 0x4e
    X86_AT(c, 0x91333u);
    s8(c, 0, 0x4Eu);
    // 091335  call 0x9136d
    X86_AT(c, 0x91335u);
    push32(c, 0x9133au); x86_call_known(c, 0x9136du, f_0009136d); X86_RET(c, 0x9133au);
    X86_TICK(c, 9);
    // 09133a  mov al, 0x33
    X86_AT(c, 0x9133au);
    s8(c, 0, 0x33u);
    // 09133c  call 0x9136d
    X86_AT(c, 0x9133cu);
    push32(c, 0x91341u); x86_call_known(c, 0x9136du, f_0009136d); X86_RET(c, 0x91341u);
    X86_TICK(c, 9);
    // 091341  inc cx
    X86_AT(c, 0x91341u);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_inc(c, v, 2)); }
    // 091343  cmp cx, 4
    X86_AT(c, 0x91343u);
    (void)x86_sub(c, (c.r[1] & 0xFFFFu), 0x4u, 0, 2);
    // 091347  jb 0x912b7
    X86_AT(c, 0x91347u);
    if (x86_cc(c, 2)) { X86_POLL(c, 0x912b7u); goto L_912b7; }
    X86_TICK(c, 16);
    // 09134d  mov byte ptr [0x89bc9], 0
    X86_AT(c, 0x9134du);
    wr8((c.sbase[3] + (uint32_t)(0x89BC9u)), 0x0u);
    // 091354  lea esi, [0x89cf5]
    X86_AT(c, 0x91354u);
    c.r[6] = (uint32_t)(0x89CF5u);
    // 09135a  cmp byte ptr [esi + 0x18], 0
    X86_AT(c, 0x9135au);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[6] + 0x18u))), 0x0u, 0, 1);
    // 09135e  je 0x9136b
    X86_AT(c, 0x9135eu);
    if (x86_cc(c, 4)) { goto L_9136b; }
    X86_TICK(c, 2);
    // 091364  mov byte ptr [0x89bc9], 1
    X86_AT(c, 0x91364u);
    wr8((c.sbase[3] + (uint32_t)(0x89BC9u)), 0x1u);
L_9136b:
    X86_TICK(c, 34);
    // 09136b  popal 
    X86_AT(c, 0x9136bu);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 09136c  ret 
    X86_AT(c, 0x9136cu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x912a7u, "ran off the end of a function");
}
void f_0009136d(X86Cpu& c) {
    X86_TICK(c, 7);
    // 09136d  jmp 0x9136f
    X86_AT(c, 0x9136du);
    goto L_9136f;
L_9136f:
    X86_TICK(c, 19);
    // 09136f  out dx, al
    X86_AT(c, 0x9136fu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 091370  jmp 0x91372
    X86_AT(c, 0x91370u);
    goto L_91372;
L_91372:
    X86_TICK(c, 10);
    // 091372  ret 
    X86_AT(c, 0x91372u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x9136du, "ran off the end of a function");
}
void f_00091373(X86Cpu& c) {
    X86_TICK(c, 28);
    // 091373  pushal 
    X86_AT(c, 0x91373u);
    { uint32_t sp = c.r[4]; for (int k = 0; k < 8; ++k) push32(c, k == 4 ? sp : c.r[k]); }
    // 091374  pushf 
    X86_AT(c, 0x91374u);
    push16(c, c.fl & 0xFFFFu);
    // 091376  cli 
    X86_AT(c, 0x91376u);
    c.fl &= ~X86_IF;
    // 091377  mov ecx, 4
    X86_AT(c, 0x91377u);
    c.r[1] = 0x4u;
L_9137c:
    X86_TICK(c, 34);
    // 09137c  mov dx, cx
    X86_AT(c, 0x9137cu);
    s16(c, 2, (c.r[1] & 0xFFFFu));
    // 09137f  dec dx
    X86_AT(c, 0x9137fu);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_dec(c, v, 2)); }
    // 091381  shl dx, 3
    X86_AT(c, 0x91381u);
    { uint32_t v = (c.r[2] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 4, v, 0x3u, 2, w); if (w) s16(c, 2, r); }
    // 091385  add dx, 0xe53
    X86_AT(c, 0x91385u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, 0xE53u, 0, 2)); }
    // 09138a  mov al, 0
    X86_AT(c, 0x9138au);
    s8(c, 0, 0x0u);
    // 09138c  out dx, al
    X86_AT(c, 0x9138cu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 09138d  loop 0x9137c
    X86_AT(c, 0x9138du);
    c.r[1] -= 1; if (c.r[1] != 0) { X86_POLL(c, 0x9137cu); goto L_9137c; }
    X86_TICK(c, 40);
    // 09138f  popf 
    X86_AT(c, 0x9138fu);
    x86_popfd(c, 2);
    // 091391  popal 
    X86_AT(c, 0x91391u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 091392  ret 
    X86_AT(c, 0x91392u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x91373u, "ran off the end of a function");
}
void f_00091393(X86Cpu& c) {
    X86_TICK(c, 23);
    // 091393  push ax
    X86_AT(c, 0x91393u);
    { uint32_t v = (c.r[0] & 0xFFFFu); push16(c, v); }
    // 091395  push dx
    X86_AT(c, 0x91395u);
    { uint32_t v = (c.r[2] & 0xFFFFu); push16(c, v); }
    // 091397  pushf 
    X86_AT(c, 0x91397u);
    push16(c, c.fl & 0xFFFFu);
    // 091399  cli 
    X86_AT(c, 0x91399u);
    c.fl &= ~X86_IF;
    // 09139a  mov ax, word ptr [0x8999e]
    X86_AT(c, 0x9139au);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(0x8999Eu))));
    // 0913a0  call 0x91402
    X86_AT(c, 0x913a0u);
    push32(c, 0x913a5u); x86_call_known(c, 0x91402u, f_00091402); X86_RET(c, 0x913a5u);
    X86_TICK(c, 46);
    // 0913a5  mov al, byte ptr [0x89bc6]
    X86_AT(c, 0x913a5u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(0x89BC6u))));
    // 0913aa  or al, 1
    X86_AT(c, 0x913aau);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v | 0x1u, 1)); }
    // 0913ac  mov dx, 0xe73
    X86_AT(c, 0x913acu);
    s16(c, 2, 0xE73u);
    // 0913b0  out dx, al
    X86_AT(c, 0x913b0u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 0913b1  mov byte ptr [0x89bc6], al
    X86_AT(c, 0x913b1u);
    wr8((c.sbase[3] + (uint32_t)(0x89BC6u)), g8(c, 0));
    // 0913b6  popf 
    X86_AT(c, 0x913b6u);
    x86_popfd(c, 2);
    // 0913b8  pop dx
    X86_AT(c, 0x913b8u);
    { uint32_t v = pop16(c); s16(c, 2, v); }
    // 0913ba  pop ax
    X86_AT(c, 0x913bau);
    { uint32_t v = pop16(c); s16(c, 0, v); }
    // 0913bc  ret 
    X86_AT(c, 0x913bcu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x91393u, "ran off the end of a function");
}
void f_000913d4(X86Cpu& c) {
    X86_TICK(c, 46);
    // 0913d4  pushf 
    X86_AT(c, 0x913d4u);
    push16(c, c.fl & 0xFFFFu);
    // 0913d6  cli 
    X86_AT(c, 0x913d6u);
    c.fl &= ~X86_IF;
    // 0913d7  mov al, byte ptr [0x89bc6]
    X86_AT(c, 0x913d7u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(0x89BC6u))));
    // 0913dc  and al, 0xfe
    X86_AT(c, 0x913dcu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & 0xFEu, 1)); }
    // 0913de  mov dx, 0xe73
    X86_AT(c, 0x913deu);
    s16(c, 2, 0xE73u);
    // 0913e2  out dx, al
    X86_AT(c, 0x913e2u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 0913e3  mov byte ptr [0x89bc6], al
    X86_AT(c, 0x913e3u);
    wr8((c.sbase[3] + (uint32_t)(0x89BC6u)), g8(c, 0));
    // 0913e8  popf 
    X86_AT(c, 0x913e8u);
    x86_popfd(c, 2);
    // 0913ea  ret 
    X86_AT(c, 0x913eau);
    c.eip = pop32(c); return;
    x86_fault(c, 0x913d4u, "ran off the end of a function");
}
void f_00091402(X86Cpu& c) {
    X86_TICK(c, 80);
    // 091402  push dx
    X86_AT(c, 0x91402u);
    { uint32_t v = (c.r[2] & 0xFFFFu); push16(c, v); }
    // 091404  pushf 
    X86_AT(c, 0x91404u);
    push16(c, c.fl & 0xFFFFu);
    // 091406  cli 
    X86_AT(c, 0x91406u);
    c.fl &= ~X86_IF;
    // 091407  mov dx, 0xe77
    X86_AT(c, 0x91407u);
    s16(c, 2, 0xE77u);
    // 09140b  push ax
    X86_AT(c, 0x9140bu);
    { uint32_t v = (c.r[0] & 0xFFFFu); push16(c, v); }
    // 09140d  mov al, 0x30
    X86_AT(c, 0x9140du);
    s8(c, 0, 0x30u);
    // 09140f  out dx, al
    X86_AT(c, 0x9140fu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 091410  pop ax
    X86_AT(c, 0x91410u);
    { uint32_t v = pop16(c); s16(c, 0, v); }
    // 091412  mov dx, 0xe74
    X86_AT(c, 0x91412u);
    s16(c, 2, 0xE74u);
    // 091416  out dx, al
    X86_AT(c, 0x91416u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 091417  mov al, ah
    X86_AT(c, 0x91417u);
    s8(c, 0, g8(c, 4));
    // 091419  out dx, al
    X86_AT(c, 0x91419u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 09141a  popf 
    X86_AT(c, 0x9141au);
    x86_popfd(c, 2);
    // 09141c  pop dx
    X86_AT(c, 0x9141cu);
    { uint32_t v = pop16(c); s16(c, 2, v); }
    // 09141e  ret 
    X86_AT(c, 0x9141eu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x91402u, "ran off the end of a function");
}
void f_0009141f(X86Cpu& c) {
    X86_TICK(c, 57);
    // 09141f  mov dx, 0xe77
    X86_AT(c, 0x9141fu);
    s16(c, 2, 0xE77u);
    // 091423  mov al, 0
    X86_AT(c, 0x91423u);
    s8(c, 0, 0x0u);
    // 091425  out dx, al
    X86_AT(c, 0x91425u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 091426  mov dx, 0xe74
    X86_AT(c, 0x91426u);
    s16(c, 2, 0xE74u);
    // 09142a  in al, dx
    X86_AT(c, 0x9142au);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 09142b  mov ah, al
    X86_AT(c, 0x9142bu);
    s8(c, 4, g8(c, 0));
    // 09142d  in al, dx
    X86_AT(c, 0x9142du);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 09142e  xchg ah, al
    X86_AT(c, 0x9142eu);
    { uint32_t t = g8(c, 4); s8(c, 4, g8(c, 0)); s8(c, 0, t); }
    // 091430  ret 
    X86_AT(c, 0x91430u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x9141fu, "ran off the end of a function");
}
void f_00091431(X86Cpu& c) {
    X86_TICK(c, 82);
    // 091431  push dx
    X86_AT(c, 0x91431u);
    { uint32_t v = (c.r[2] & 0xFFFFu); push16(c, v); }
    // 091433  mov dx, 0xe77
    X86_AT(c, 0x91433u);
    s16(c, 2, 0xE77u);
    // 091437  pushf 
    X86_AT(c, 0x91437u);
    push16(c, c.fl & 0xFFFFu);
    // 091439  cli 
    X86_AT(c, 0x91439u);
    c.fl &= ~X86_IF;
    // 09143a  push ax
    X86_AT(c, 0x9143au);
    { uint32_t v = (c.r[0] & 0xFFFFu); push16(c, v); }
    // 09143c  mov al, 0x70
    X86_AT(c, 0x9143cu);
    s8(c, 0, 0x70u);
    // 09143e  out dx, al
    X86_AT(c, 0x9143eu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 09143f  nop 
    X86_AT(c, 0x9143fu);
    // 091440  mov dx, 0xe75
    X86_AT(c, 0x91440u);
    s16(c, 2, 0xE75u);
    // 091444  pop ax
    X86_AT(c, 0x91444u);
    { uint32_t v = pop16(c); s16(c, 0, v); }
    // 091446  out dx, al
    X86_AT(c, 0x91446u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 091447  mov al, ah
    X86_AT(c, 0x91447u);
    s8(c, 0, g8(c, 4));
    // 091449  out dx, al
    X86_AT(c, 0x91449u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 09144a  popf 
    X86_AT(c, 0x9144au);
    x86_popfd(c, 2);
    // 09144c  pop dx
    X86_AT(c, 0x9144cu);
    { uint32_t v = pop16(c); s16(c, 2, v); }
    // 09144e  ret 
    X86_AT(c, 0x9144eu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x91431u, "ran off the end of a function");
}
void f_0009146f(X86Cpu& c) {
    X86_TICK(c, 12);
    // 09146f  cmp byte ptr [0x89bc9], 0
    X86_AT(c, 0x9146fu);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0x89BC9u))), 0x0u, 0, 1);
    // 091476  jne 0x914d8
    X86_AT(c, 0x91476u);
    if (x86_cc(c, 5)) { goto L_914d8; }
    X86_TICK(c, 13);
    // 09147c  push eax
    X86_AT(c, 0x9147cu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 09147d  push ebx
    X86_AT(c, 0x9147du);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 09147e  movzx ebx, al
    X86_AT(c, 0x9147eu);
    c.r[3] = g8(c, 0);
    // 091481  mov ax, word ptr cs:[ebx*2 + 0x90ce4]
    X86_AT(c, 0x91481u);
    s16(c, 0, rd16((c.sbase[1] + (uint32_t)(c.r[3] * 2 + 0x90CE4u))));
    // 09148a  mov bx, 0x10
    X86_AT(c, 0x9148au);
    s16(c, 3, 0x10u);
L_9148e:
    X86_TICK(c, 7);
    // 09148e  cmp ax, 0x7d
    X86_AT(c, 0x9148eu);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), 0x7Du, 0, 2);
    // 091492  ja 0x9149c
    X86_AT(c, 0x91492u);
    if (x86_cc(c, 7)) { goto L_9149c; }
    X86_TICK(c, 13);
    // 091494  shl ax, 1
    X86_AT(c, 0x91494u);
    { uint32_t v = (c.r[0] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 4, v, 0x1u, 2, w); if (w) s16(c, 0, r); }
    // 091497  shl bx, 1
    X86_AT(c, 0x91497u);
    { uint32_t v = (c.r[3] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 4, v, 0x1u, 2, w); if (w) s16(c, 3, r); }
    // 09149a  jmp 0x9148e
    X86_AT(c, 0x9149au);
    X86_POLL(c, 0x9148eu); goto L_9148e;
L_9149c:
    X86_TICK(c, 7);
    // 09149c  cmp ax, 0x3ff
    X86_AT(c, 0x9149cu);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), 0x3FFu, 0, 2);
    // 0914a0  jb 0x914ae
    X86_AT(c, 0x914a0u);
    if (x86_cc(c, 2)) { goto L_914ae; }
    X86_TICK(c, 13);
    // 0914a6  shr ax, 1
    X86_AT(c, 0x914a6u);
    { uint32_t v = (c.r[0] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 2, w); if (w) s16(c, 0, r); }
    // 0914a9  shr bx, 1
    X86_AT(c, 0x914a9u);
    { uint32_t v = (c.r[3] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 2, w); if (w) s16(c, 3, r); }
    // 0914ac  jmp 0x9149c
    X86_AT(c, 0x914acu);
    X86_POLL(c, 0x9149cu); goto L_9149c;
L_914ae:
    X86_TICK(c, 31);
    // 0914ae  pushf 
    X86_AT(c, 0x914aeu);
    push16(c, c.fl & 0xFFFFu);
    // 0914b0  cli 
    X86_AT(c, 0x914b0u);
    c.fl &= ~X86_IF;
    // 0914b1  mov word ptr [0x8999e], ax
    X86_AT(c, 0x914b1u);
    wr16((c.sbase[3] + (uint32_t)(0x8999Eu)), (c.r[0] & 0xFFFFu));
    // 0914b7  mov word ptr [0x89997], bx
    X86_AT(c, 0x914b7u);
    wr16((c.sbase[3] + (uint32_t)(0x89997u)), (c.r[3] & 0xFFFFu));
    // 0914be  mov ecx, eax
    X86_AT(c, 0x914beu);
    c.r[1] = c.r[0];
    // 0914c0  sub ecx, 2
    X86_AT(c, 0x914c0u);
    { uint32_t v = c.r[1]; c.r[1] = x86_sub(c, v, 0x2u, 0, 4); }
    // 0914c3  neg ecx
    X86_AT(c, 0x914c3u);
    { uint32_t v = c.r[1]; c.r[1] = x86_neg(c, v, 4); }
    // 0914c5  mov bl, 0xff
    X86_AT(c, 0x914c5u);
    s8(c, 3, 0xFFu);
    // 0914c7  push ecx
    X86_AT(c, 0x914c7u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 0914c8  push ebx
    X86_AT(c, 0x914c8u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0914c9  call 0x8f6b1
    X86_AT(c, 0x914c9u);
    push32(c, 0x914ceu); x86_call_known(c, 0x8f6b1u, f_0008f6b1); X86_RET(c, 0x914ceu);
    X86_TICK(c, 15);
    // 0914ce  add esp, 8
    X86_AT(c, 0x914ceu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0914d1  popf 
    X86_AT(c, 0x914d1u);
    x86_popfd(c, 2);
    // 0914d3  jmp 0x9150c
    X86_AT(c, 0x914d3u);
    goto L_9150c;
L_914d8:
    X86_TICK(c, 13);
    // 0914d8  push eax
    X86_AT(c, 0x914d8u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0914d9  push ebx
    X86_AT(c, 0x914d9u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0914da  movzx ebx, al
    X86_AT(c, 0x914dau);
    c.r[3] = g8(c, 0);
    // 0914dd  mov ax, word ptr cs:[ebx*2 + 0x90ae2]
    X86_AT(c, 0x914ddu);
    s16(c, 0, rd16((c.sbase[1] + (uint32_t)(c.r[3] * 2 + 0x90AE2u))));
    // 0914e6  mov bx, 0x10
    X86_AT(c, 0x914e6u);
    s16(c, 3, 0x10u);
L_914ea:
    X86_TICK(c, 7);
    // 0914ea  cmp ax, 0x450
    X86_AT(c, 0x914eau);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), 0x450u, 0, 2);
    // 0914ee  ja 0x914fc
    X86_AT(c, 0x914eeu);
    if (x86_cc(c, 7)) { goto L_914fc; }
    X86_TICK(c, 13);
    // 0914f4  shl ax, 1
    X86_AT(c, 0x914f4u);
    { uint32_t v = (c.r[0] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 4, v, 0x1u, 2, w); if (w) s16(c, 0, r); }
    // 0914f7  shl bx, 1
    X86_AT(c, 0x914f7u);
    { uint32_t v = (c.r[3] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 4, v, 0x1u, 2, w); if (w) s16(c, 3, r); }
    // 0914fa  jmp 0x914ea
    X86_AT(c, 0x914fau);
    X86_POLL(c, 0x914eau); goto L_914ea;
L_914fc:
    X86_TICK(c, 18);
    // 0914fc  pushfd 
    X86_AT(c, 0x914fcu);
    push32(c, c.fl & 0x00FCFFFFu);
    // 0914fd  cli 
    X86_AT(c, 0x914fdu);
    c.fl &= ~X86_IF;
    // 0914fe  mov word ptr [0x8999e], ax
    X86_AT(c, 0x914feu);
    wr16((c.sbase[3] + (uint32_t)(0x8999Eu)), (c.r[0] & 0xFFFFu));
    // 091504  mov word ptr [0x89997], bx
    X86_AT(c, 0x91504u);
    wr16((c.sbase[3] + (uint32_t)(0x89997u)), (c.r[3] & 0xFFFFu));
    // 09150b  popfd 
    X86_AT(c, 0x9150bu);
    x86_popfd(c, 4);
L_9150c:
    X86_TICK(c, 18);
    // 09150c  pop ebx
    X86_AT(c, 0x9150cu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 09150d  pop eax
    X86_AT(c, 0x9150du);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 09150e  ret 
    X86_AT(c, 0x9150eu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x9146fu, "ran off the end of a function");
}
void f_0009150f(X86Cpu& c) {
    X86_TICK(c, 26);
    // 09150f  push eax
    X86_AT(c, 0x9150fu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 091510  push ds
    X86_AT(c, 0x91510u);
    push32(c, c.sreg[3]);
    // 091511  push es
    X86_AT(c, 0x91511u);
    push32(c, c.sreg[0]);
    // 091512  mov ax, 0x14
    X86_AT(c, 0x91512u);
    s16(c, 0, 0x14u);
    // 091516  mov ds, eax
    X86_AT(c, 0x91516u);
    x86_load_seg(c, 3, (c.r[0] & 0xFFFFu) & 0xFFFFu);
    // 091518  mov es, eax
    X86_AT(c, 0x91518u);
    x86_load_seg(c, 0, (c.r[0] & 0xFFFFu) & 0xFFFFu);
    // 09151a  cld 
    X86_AT(c, 0x9151au);
    c.fl &= ~X86_DF;
    // 09151b  cmp byte ptr [0x89be8], 0
    X86_AT(c, 0x9151bu);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0x89BE8u))), 0x0u, 0, 1);
    // 091522  jne 0x9153e
    X86_AT(c, 0x91522u);
    if (x86_cc(c, 5)) { goto L_9153e; }
    X86_TICK(c, 10);
    // 091528  mov dword ptr [0x89bef], esp
    X86_AT(c, 0x91528u);
    wr32((c.sbase[3] + (uint32_t)(0x89BEFu)), c.r[4]);
    // 09152e  mov word ptr [0x89bf3], ss
    X86_AT(c, 0x9152eu);
    wr16((c.sbase[3] + (uint32_t)(0x89BF3u)), (uint32_t)c.sreg[2]);
    // 091534  mov eax, ds
    X86_AT(c, 0x91534u);
    c.r[0] = (uint32_t)c.sreg[3];
    // 091536  mov ss, eax
    X86_AT(c, 0x91536u);
    x86_load_seg(c, 2, (c.r[0] & 0xFFFFu) & 0xFFFFu);
    // 091538  lea esp, [0x8a4f5]
    X86_AT(c, 0x91538u);
    c.r[4] = (uint32_t)(0x8A4F5u);
L_9153e:
    X86_TICK(c, 53);
    // 09153e  inc byte ptr [0x89be8]
    X86_AT(c, 0x9153eu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x89BE8u)); uint32_t v = rd8(ea); wr8(ea, x86_inc(c, v, 1)); }
    // 091544  sti 
    X86_AT(c, 0x91544u);
    c.fl |= X86_IF;
    // 091545  push fs
    X86_AT(c, 0x91545u);
    push32(c, c.sreg[4]);
    // 091547  push gs
    X86_AT(c, 0x91547u);
    push32(c, c.sreg[5]);
    // 091549  pushal 
    X86_AT(c, 0x91549u);
    { uint32_t sp = c.r[4]; for (int k = 0; k < 8; ++k) push32(c, k == 4 ? sp : c.r[k]); }
    // 09154a  mov dx, 0xe70
    X86_AT(c, 0x9154au);
    s16(c, 2, 0xE70u);
    // 09154e  in ax, dx
    X86_AT(c, 0x9154eu);
    s16(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 2));
    // 091550  xor ax, 0xffff
    X86_AT(c, 0x91550u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_logic(c, v ^ 0xFFFFu, 2)); }
    // 091554  call 0x9161a
    X86_AT(c, 0x91554u);
    push32(c, 0x91559u); x86_call_known(c, 0x9161au, f_0009161a); X86_RET(c, 0x91559u);
    X86_TICK(c, 7);
    // 091559  call 0x91636
    X86_AT(c, 0x91559u);
    push32(c, 0x9155eu); x86_call_known(c, 0x91636u, f_00091636); X86_RET(c, 0x9155eu);
    X86_TICK(c, 7);
    // 09155e  call 0x91656
    X86_AT(c, 0x9155eu);
    push32(c, 0x91563u); x86_call_known(c, 0x91656u, f_00091656); X86_RET(c, 0x91563u);
    X86_TICK(c, 7);
    // 091563  call 0x8fa8d
    X86_AT(c, 0x91563u);
    push32(c, 0x91568u); x86_call_known(c, 0x8fa8du, f_0008fa8d); X86_RET(c, 0x91568u);
    X86_TICK(c, 45);
    // 091568  popal 
    X86_AT(c, 0x91568u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 091569  pop gs
    X86_AT(c, 0x91569u);
    x86_load_seg(c, 5, pop32(c) & 0xFFFFu);
    // 09156b  pop fs
    X86_AT(c, 0x9156bu);
    x86_load_seg(c, 4, pop32(c) & 0xFFFFu);
    // 09156d  cli 
    X86_AT(c, 0x9156du);
    c.fl &= ~X86_IF;
    // 09156e  dec byte ptr [0x89be8]
    X86_AT(c, 0x9156eu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x89BE8u)); uint32_t v = rd8(ea); wr8(ea, x86_dec(c, v, 1)); }
    // 091574  jne 0x91586
    X86_AT(c, 0x91574u);
    if (x86_cc(c, 5)) { goto L_91586; }
    X86_TICK(c, 8);
    // 09157a  mov esp, dword ptr [0x89bef]
    X86_AT(c, 0x9157au);
    c.r[4] = rd32((c.sbase[3] + (uint32_t)(0x89BEFu)));
    // 091580  mov ss, word ptr [0x89bf3]
    X86_AT(c, 0x91580u);
    x86_load_seg(c, 2, rd16((c.sbase[3] + (uint32_t)(0x89BF3u))) & 0xFFFFu);
L_91586:
    X86_TICK(c, 18);
    // 091586  pop es
    X86_AT(c, 0x91586u);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 091587  pop ds
    X86_AT(c, 0x91587u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 091588  pop eax
    X86_AT(c, 0x91588u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 091589  iretd 
    X86_AT(c, 0x91589u);
    x86_iret(c, 4); return;
    x86_fault(c, 0x9150fu, "ran off the end of a function");
}
void f_0009158a(X86Cpu& c) {
    X86_TICK(c, 26);
    // 09158a  push eax
    X86_AT(c, 0x9158au);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 09158b  push ds
    X86_AT(c, 0x9158bu);
    push32(c, c.sreg[3]);
    // 09158c  push es
    X86_AT(c, 0x9158cu);
    push32(c, c.sreg[0]);
    // 09158d  mov ax, 0x14
    X86_AT(c, 0x9158du);
    s16(c, 0, 0x14u);
    // 091591  mov ds, eax
    X86_AT(c, 0x91591u);
    x86_load_seg(c, 3, (c.r[0] & 0xFFFFu) & 0xFFFFu);
    // 091593  mov es, eax
    X86_AT(c, 0x91593u);
    x86_load_seg(c, 0, (c.r[0] & 0xFFFFu) & 0xFFFFu);
    // 091595  cld 
    X86_AT(c, 0x91595u);
    c.fl &= ~X86_DF;
    // 091596  cmp byte ptr [0x89be7], 0
    X86_AT(c, 0x91596u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0x89BE7u))), 0x0u, 0, 1);
    // 09159d  jne 0x915b9
    X86_AT(c, 0x9159du);
    if (x86_cc(c, 5)) { goto L_915b9; }
    X86_TICK(c, 10);
    // 0915a3  mov dword ptr [0x89be9], esp
    X86_AT(c, 0x915a3u);
    wr32((c.sbase[3] + (uint32_t)(0x89BE9u)), c.r[4]);
    // 0915a9  mov word ptr [0x89bed], ss
    X86_AT(c, 0x915a9u);
    wr16((c.sbase[3] + (uint32_t)(0x89BEDu)), (uint32_t)c.sreg[2]);
    // 0915af  mov eax, ds
    X86_AT(c, 0x915afu);
    c.r[0] = (uint32_t)c.sreg[3];
    // 0915b1  mov ss, eax
    X86_AT(c, 0x915b1u);
    x86_load_seg(c, 2, (c.r[0] & 0xFFFFu) & 0xFFFFu);
    // 0915b3  lea esp, [0x8a2f5]
    X86_AT(c, 0x915b3u);
    c.r[4] = (uint32_t)(0x8A2F5u);
L_915b9:
    X86_TICK(c, 51);
    // 0915b9  inc byte ptr [0x89be7]
    X86_AT(c, 0x915b9u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x89BE7u)); uint32_t v = rd8(ea); wr8(ea, x86_inc(c, v, 1)); }
    // 0915bf  sti 
    X86_AT(c, 0x915bfu);
    c.fl |= X86_IF;
    // 0915c0  push fs
    X86_AT(c, 0x915c0u);
    push32(c, c.sreg[4]);
    // 0915c2  push gs
    X86_AT(c, 0x915c2u);
    push32(c, c.sreg[5]);
    // 0915c4  pushal 
    X86_AT(c, 0x915c4u);
    { uint32_t sp = c.r[4]; for (int k = 0; k < 8; ++k) push32(c, k == 4 ? sp : c.r[k]); }
    // 0915c5  mov dx, 0xe73
    X86_AT(c, 0x915c5u);
    s16(c, 2, 0xE73u);
    // 0915c9  in al, dx
    X86_AT(c, 0x915c9u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 0915ca  test al, 1
    X86_AT(c, 0x915cau);
    (void)x86_logic(c, g8(c, 0) & 0x1u, 1);
    // 0915cc  je 0x915d3
    X86_AT(c, 0x915ccu);
    if (x86_cc(c, 4)) { goto L_915d3; }
    X86_TICK(c, 7);
    // 0915ce  call 0x9167f
    X86_AT(c, 0x915ceu);
    push32(c, 0x915d3u); x86_call_known(c, 0x9167fu, f_0009167f); X86_RET(c, 0x915d3u);
L_915d3:
    X86_TICK(c, 7);
    // 0915d3  test al, 2
    X86_AT(c, 0x915d3u);
    (void)x86_logic(c, g8(c, 0) & 0x2u, 1);
    // 0915d5  je 0x915dc
    X86_AT(c, 0x915d5u);
    if (x86_cc(c, 4)) { goto L_915dc; }
    X86_TICK(c, 7);
    // 0915d7  call 0x916f4
    X86_AT(c, 0x915d7u);
    push32(c, 0x915dcu); x86_call_known(c, 0x916f4u, f_000916f4); X86_RET(c, 0x915dcu);
L_915dc:
    X86_TICK(c, 9);
    // 0915dc  cli 
    X86_AT(c, 0x915dcu);
    c.fl &= ~X86_IF;
    // 0915dd  call 0x8fa8d
    X86_AT(c, 0x915ddu);
    push32(c, 0x915e2u); x86_call_known(c, 0x8fa8du, f_0008fa8d); X86_RET(c, 0x915e2u);
    X86_TICK(c, 7);
    // 0915e2  test al, 1
    X86_AT(c, 0x915e2u);
    (void)x86_logic(c, g8(c, 0) & 0x1u, 1);
    // 0915e4  je 0x915f8
    X86_AT(c, 0x915e4u);
    if (x86_cc(c, 4)) { goto L_915f8; }
    X86_TICK(c, 7);
    // 0915e6  call 0x8fa87
    X86_AT(c, 0x915e6u);
    push32(c, 0x915ebu); x86_call_known(c, 0x8fa87u, f_0008fa87); X86_RET(c, 0x915ebu);
    X86_TICK(c, 7);
    // 0915eb  or al, al
    X86_AT(c, 0x915ebu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v | g8(c, 0), 1)); }
    // 0915ed  jne 0x915f8
    X86_AT(c, 0x915edu);
    if (x86_cc(c, 5)) { goto L_915f8; }
    X86_TICK(c, 7);
    // 0915f3  call 0x91820
    X86_AT(c, 0x915f3u);
    push32(c, 0x915f8u); x86_call_known(c, 0x91820u, f_00091820); X86_RET(c, 0x915f8u);
L_915f8:
    X86_TICK(c, 45);
    // 0915f8  popal 
    X86_AT(c, 0x915f8u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 0915f9  pop gs
    X86_AT(c, 0x915f9u);
    x86_load_seg(c, 5, pop32(c) & 0xFFFFu);
    // 0915fb  pop fs
    X86_AT(c, 0x915fbu);
    x86_load_seg(c, 4, pop32(c) & 0xFFFFu);
    // 0915fd  cli 
    X86_AT(c, 0x915fdu);
    c.fl &= ~X86_IF;
    // 0915fe  dec byte ptr [0x89be7]
    X86_AT(c, 0x915feu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x89BE7u)); uint32_t v = rd8(ea); wr8(ea, x86_dec(c, v, 1)); }
    // 091604  jne 0x91616
    X86_AT(c, 0x91604u);
    if (x86_cc(c, 5)) { goto L_91616; }
    X86_TICK(c, 8);
    // 09160a  mov esp, dword ptr [0x89be9]
    X86_AT(c, 0x9160au);
    c.r[4] = rd32((c.sbase[3] + (uint32_t)(0x89BE9u)));
    // 091610  mov ss, word ptr [0x89bed]
    X86_AT(c, 0x91610u);
    x86_load_seg(c, 2, rd16((c.sbase[3] + (uint32_t)(0x89BEDu))) & 0xFFFFu);
L_91616:
    X86_TICK(c, 18);
    // 091616  pop es
    X86_AT(c, 0x91616u);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 091617  pop ds
    X86_AT(c, 0x91617u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 091618  pop eax
    X86_AT(c, 0x91618u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 091619  iretd 
    X86_AT(c, 0x91619u);
    x86_iret(c, 4); return;
    x86_fault(c, 0x9158au, "ran off the end of a function");
}
void f_0009161a(X86Cpu& c) {
    X86_TICK(c, 11);
    // 09161a  push ax
    X86_AT(c, 0x9161au);
    { uint32_t v = (c.r[0] & 0xFFFFu); push16(c, v); }
    // 09161c  mov al, ah
    X86_AT(c, 0x9161cu);
    s8(c, 0, g8(c, 4));
    // 09161e  and al, 0xf
    X86_AT(c, 0x9161eu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & 0xFu, 1)); }
    // 091620  je 0x91633
    X86_AT(c, 0x91620u);
    if (x86_cc(c, 4)) { goto L_91633; }
    X86_TICK(c, 2);
    // 091622  xor ecx, ecx
    X86_AT(c, 0x91622u);
    { uint32_t v = c.r[1]; c.r[1] = x86_logic(c, v ^ c.r[1], 4); }
L_91624:
    X86_TICK(c, 8);
    // 091624  shr al, 1
    X86_AT(c, 0x91624u);
    { uint32_t v = g8(c, 0); bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 1, w); if (w) s8(c, 0, r); }
    // 091626  jae 0x9162d
    X86_AT(c, 0x91626u);
    if (x86_cc(c, 3)) { goto L_9162d; }
    X86_TICK(c, 7);
    // 091628  call 0x91752
    X86_AT(c, 0x91628u);
    push32(c, 0x9162du); x86_call_known(c, 0x91752u, f_00091752); X86_RET(c, 0x9162du);
L_9162d:
    X86_TICK(c, 9);
    // 09162d  inc ecx
    X86_AT(c, 0x9162du);
    { uint32_t v = c.r[1]; c.r[1] = x86_inc(c, v, 4); }
    // 09162e  cmp ecx, 4
    X86_AT(c, 0x9162eu);
    (void)x86_sub(c, c.r[1], 0x4u, 0, 4);
    // 091631  jb 0x91624
    X86_AT(c, 0x91631u);
    if (x86_cc(c, 2)) { X86_POLL(c, 0x91624u); goto L_91624; }
L_91633:
    X86_TICK(c, 14);
    // 091633  pop ax
    X86_AT(c, 0x91633u);
    { uint32_t v = pop16(c); s16(c, 0, v); }
    // 091635  ret 
    X86_AT(c, 0x91635u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x9161au, "ran off the end of a function");
}
void f_00091636(X86Cpu& c) {
    X86_TICK(c, 9);
    // 091636  push ax
    X86_AT(c, 0x91636u);
    { uint32_t v = (c.r[0] & 0xFFFFu); push16(c, v); }
    // 091638  or al, al
    X86_AT(c, 0x91638u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v | g8(c, 0), 1)); }
    // 09163a  je 0x91653
    X86_AT(c, 0x9163au);
    if (x86_cc(c, 4)) { goto L_91653; }
    X86_TICK(c, 2);
    // 09163c  xor ecx, ecx
    X86_AT(c, 0x9163cu);
    { uint32_t v = c.r[1]; c.r[1] = x86_logic(c, v ^ c.r[1], 4); }
L_9163e:
    X86_TICK(c, 8);
    // 09163e  shr al, 1
    X86_AT(c, 0x9163eu);
    { uint32_t v = g8(c, 0); bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 1, w); if (w) s8(c, 0, r); }
    // 091640  jae 0x9164b
    X86_AT(c, 0x91640u);
    if (x86_cc(c, 3)) { goto L_9164b; }
    X86_TICK(c, 7);
    // 091646  call 0x917b2
    X86_AT(c, 0x91646u);
    push32(c, 0x9164bu); x86_call_known(c, 0x917b2u, f_000917b2); X86_RET(c, 0x9164bu);
L_9164b:
    X86_TICK(c, 9);
    // 09164b  inc cx
    X86_AT(c, 0x9164bu);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_inc(c, v, 2)); }
    // 09164d  cmp cx, 8
    X86_AT(c, 0x9164du);
    (void)x86_sub(c, (c.r[1] & 0xFFFFu), 0x8u, 0, 2);
    // 091651  jb 0x9163e
    X86_AT(c, 0x91651u);
    if (x86_cc(c, 2)) { X86_POLL(c, 0x9163eu); goto L_9163e; }
L_91653:
    X86_TICK(c, 14);
    // 091653  pop ax
    X86_AT(c, 0x91653u);
    { uint32_t v = pop16(c); s16(c, 0, v); }
    // 091655  ret 
    X86_AT(c, 0x91655u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x91636u, "ran off the end of a function");
}
void f_00091656(X86Cpu& c) {
    X86_TICK(c, 17);
    // 091656  push ax
    X86_AT(c, 0x91656u);
    { uint32_t v = (c.r[0] & 0xFFFFu); push16(c, v); }
    // 091658  mov al, ah
    X86_AT(c, 0x91658u);
    s8(c, 0, g8(c, 4));
    // 09165a  and al, 0xf0
    X86_AT(c, 0x9165au);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & 0xF0u, 1)); }
    // 09165c  and al, byte ptr [0x89bc7]
    X86_AT(c, 0x9165cu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & rd8((c.sbase[3] + (uint32_t)(0x89BC7u))), 1)); }
    // 091662  je 0x9167c
    X86_AT(c, 0x91662u);
    if (x86_cc(c, 4)) { goto L_9167c; }
    X86_TICK(c, 31);
    // 091664  or byte ptr [0x89bc8], al
    X86_AT(c, 0x91664u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x89BC8u)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | g8(c, 0), 1)); }
    // 09166a  xor al, 0xff
    X86_AT(c, 0x9166au);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ 0xFFu, 1)); }
    // 09166c  and al, byte ptr [0x89bc7]
    X86_AT(c, 0x9166cu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & rd8((c.sbase[3] + (uint32_t)(0x89BC7u))), 1)); }
    // 091672  mov dx, 0xe71
    X86_AT(c, 0x91672u);
    s16(c, 2, 0xE71u);
    // 091676  out dx, al
    X86_AT(c, 0x91676u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 091677  mov byte ptr [0x89bc7], al
    X86_AT(c, 0x91677u);
    wr8((c.sbase[3] + (uint32_t)(0x89BC7u)), g8(c, 0));
L_9167c:
    X86_TICK(c, 14);
    // 09167c  pop ax
    X86_AT(c, 0x9167cu);
    { uint32_t v = pop16(c); s16(c, 0, v); }
    // 09167e  ret 
    X86_AT(c, 0x9167eu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x91656u, "ran off the end of a function");
}
void f_0009167f(X86Cpu& c) {
    X86_TICK(c, 9);
    // 09167f  push ax
    X86_AT(c, 0x9167fu);
    { uint32_t v = (c.r[0] & 0xFFFFu); push16(c, v); }
    // 091681  call 0x9141f
    X86_AT(c, 0x91681u);
    push32(c, 0x91686u); x86_call_known(c, 0x9141fu, f_0009141f); X86_RET(c, 0x91686u);
    X86_TICK(c, 8);
    // 091686  sub ax, 8
    X86_AT(c, 0x91686u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_sub(c, v, 0x8u, 0, 2)); }
    // 09168a  mov dx, word ptr [0x8999e]
    X86_AT(c, 0x9168au);
    s16(c, 2, rd16((c.sbase[3] + (uint32_t)(0x8999Eu))));
    // 091691  xor cx, cx
    X86_AT(c, 0x91691u);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_logic(c, v ^ (c.r[1] & 0xFFFFu), 2)); }
L_91694:
    X86_TICK(c, 9);
    // 091694  inc cx
    X86_AT(c, 0x91694u);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_inc(c, v, 2)); }
    // 091696  add ax, dx
    X86_AT(c, 0x91696u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, (c.r[2] & 0xFFFFu), 0, 2)); }
    // 091699  jae 0x91694
    X86_AT(c, 0x91699u);
    if (x86_cc(c, 3)) { X86_POLL(c, 0x91694u); goto L_91694; }
    X86_TICK(c, 7);
    // 09169b  call 0x91402
    X86_AT(c, 0x9169bu);
    push32(c, 0x916a0u); x86_call_known(c, 0x91402u, f_00091402); X86_RET(c, 0x916a0u);
    X86_TICK(c, 53);
    // 0916a0  mov ax, word ptr [0x89997]
    X86_AT(c, 0x916a0u);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(0x89997u))));
    // 0916a6  mul cl
    X86_AT(c, 0x916a6u);
    x86_mul(c, g8(c, 1), 1);
    // 0916a8  add ax, word ptr [0x89995]
    X86_AT(c, 0x916a8u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[3] + (uint32_t)(0x89995u))), 0, 2)); }
    // 0916af  mov cx, ax
    X86_AT(c, 0x916afu);
    s16(c, 1, (c.r[0] & 0xFFFFu));
    // 0916b2  and cx, 0xf
    X86_AT(c, 0x916b2u);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_logic(c, v & 0xFu, 2)); }
    // 0916b6  mov word ptr [0x89995], cx
    X86_AT(c, 0x916b6u);
    wr16((c.sbase[3] + (uint32_t)(0x89995u)), (c.r[1] & 0xFFFFu));
    // 0916bd  shr ax, 4
    X86_AT(c, 0x916bdu);
    { uint32_t v = (c.r[0] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 5, v, 0x4u, 2, w); if (w) s16(c, 0, r); }
    // 0916c1  sub byte ptr [0x89994], al
    X86_AT(c, 0x916c1u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x89994u)); uint32_t v = rd8(ea); wr8(ea, x86_sub(c, v, g8(c, 0), 0, 1)); }
    // 0916c7  jns 0x916d8
    X86_AT(c, 0x916c7u);
    if (x86_cc(c, 9)) { goto L_916d8; }
L_916c9:
    X86_TICK(c, 18);
    // 0916c9  inc byte ptr [0x89993]
    X86_AT(c, 0x916c9u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x89993u)); uint32_t v = rd8(ea); wr8(ea, x86_inc(c, v, 1)); }
    // 0916cf  add byte ptr [0x89994], 4
    X86_AT(c, 0x916cfu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x89994u)); uint32_t v = rd8(ea); wr8(ea, x86_add(c, v, 0x4u, 0, 1)); }
    // 0916d6  jae 0x916c9
    X86_AT(c, 0x916d6u);
    if (x86_cc(c, 3)) { X86_POLL(c, 0x916c9u); goto L_916c9; }
L_916d8:
    X86_TICK(c, 12);
    // 0916d8  cmp byte ptr [0x89986], 0
    X86_AT(c, 0x916d8u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0x89986u))), 0x0u, 0, 1);
    // 0916df  je 0x916f1
    X86_AT(c, 0x916dfu);
    if (x86_cc(c, 4)) { goto L_916f1; }
    X86_TICK(c, 12);
    // 0916e1  cmp byte ptr [0x89988], 0
    X86_AT(c, 0x916e1u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0x89988u))), 0x0u, 0, 1);
    // 0916e8  jne 0x916f1
    X86_AT(c, 0x916e8u);
    if (x86_cc(c, 5)) { goto L_916f1; }
    X86_TICK(c, 7);
    // 0916ea  add word ptr [0x89999], ax
    X86_AT(c, 0x916eau);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x89999u)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
L_916f1:
    X86_TICK(c, 14);
    // 0916f1  pop ax
    X86_AT(c, 0x916f1u);
    { uint32_t v = pop16(c); s16(c, 0, v); }
    // 0916f3  ret 
    X86_AT(c, 0x916f3u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x9167fu, "ran off the end of a function");
}
void f_000916f4(X86Cpu& c) {
    X86_TICK(c, 11);
    // 0916f4  push ax
    X86_AT(c, 0x916f4u);
    { uint32_t v = (c.r[0] & 0xFFFFu); push16(c, v); }
    // 0916f6  mov ax, 0xffff
    X86_AT(c, 0x916f6u);
    s16(c, 0, 0xFFFFu);
    // 0916fa  call 0x91431
    X86_AT(c, 0x916fau);
    push32(c, 0x916ffu); x86_call_known(c, 0x91431u, f_00091431); X86_RET(c, 0x916ffu);
    X86_TICK(c, 14);
    // 0916ff  pop ax
    X86_AT(c, 0x916ffu);
    { uint32_t v = pop16(c); s16(c, 0, v); }
    // 091701  ret 
    X86_AT(c, 0x91701u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x916f4u, "ran off the end of a function");
}
void f_00091702(X86Cpu& c) {
    X86_TICK(c, 31);
    // 091702  mov ax, word ptr [0x89997]
    X86_AT(c, 0x91702u);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(0x89997u))));
    // 091708  add ax, word ptr [0x89995]
    X86_AT(c, 0x91708u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[3] + (uint32_t)(0x89995u))), 0, 2)); }
    // 09170f  mov cx, ax
    X86_AT(c, 0x9170fu);
    s16(c, 1, (c.r[0] & 0xFFFFu));
    // 091712  and cx, 0xf
    X86_AT(c, 0x91712u);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_logic(c, v & 0xFu, 2)); }
    // 091716  mov word ptr [0x89995], cx
    X86_AT(c, 0x91716u);
    wr16((c.sbase[3] + (uint32_t)(0x89995u)), (c.r[1] & 0xFFFFu));
    // 09171d  shr ax, 4
    X86_AT(c, 0x9171du);
    { uint32_t v = (c.r[0] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 5, v, 0x4u, 2, w); if (w) s16(c, 0, r); }
    // 091721  sub byte ptr [0x89994], al
    X86_AT(c, 0x91721u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x89994u)); uint32_t v = rd8(ea); wr8(ea, x86_sub(c, v, g8(c, 0), 0, 1)); }
    // 091727  jns 0x91738
    X86_AT(c, 0x91727u);
    if (x86_cc(c, 9)) { goto L_91738; }
L_91729:
    X86_TICK(c, 18);
    // 091729  inc byte ptr [0x89993]
    X86_AT(c, 0x91729u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x89993u)); uint32_t v = rd8(ea); wr8(ea, x86_inc(c, v, 1)); }
    // 09172f  add byte ptr [0x89994], 4
    X86_AT(c, 0x9172fu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x89994u)); uint32_t v = rd8(ea); wr8(ea, x86_add(c, v, 0x4u, 0, 1)); }
    // 091736  jae 0x91729
    X86_AT(c, 0x91736u);
    if (x86_cc(c, 3)) { X86_POLL(c, 0x91729u); goto L_91729; }
L_91738:
    X86_TICK(c, 12);
    // 091738  cmp byte ptr [0x89986], 0
    X86_AT(c, 0x91738u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0x89986u))), 0x0u, 0, 1);
    // 09173f  je 0x91751
    X86_AT(c, 0x9173fu);
    if (x86_cc(c, 4)) { goto L_91751; }
    X86_TICK(c, 12);
    // 091741  cmp byte ptr [0x89988], 0
    X86_AT(c, 0x91741u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0x89988u))), 0x0u, 0, 1);
    // 091748  jne 0x91751
    X86_AT(c, 0x91748u);
    if (x86_cc(c, 5)) { goto L_91751; }
    X86_TICK(c, 7);
    // 09174a  add word ptr [0x89999], ax
    X86_AT(c, 0x9174au);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x89999u)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
L_91751:
    X86_TICK(c, 10);
    // 091751  ret 
    X86_AT(c, 0x91751u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x91702u, "ran off the end of a function");
}
void f_00091752(X86Cpu& c) {
    X86_TICK(c, 32);
    // 091752  push ax
    X86_AT(c, 0x91752u);
    { uint32_t v = (c.r[0] & 0xFFFFu); push16(c, v); }
    // 091754  mov ebx, ecx
    X86_AT(c, 0x91754u);
    c.r[3] = c.r[1];
    // 091756  shl ebx, 5
    X86_AT(c, 0x91756u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[3] = r; }
    // 091759  lea ebx, [ebx + 0x89cf5]
    X86_AT(c, 0x91759u);
    c.r[3] = (uint32_t)(c.r[3] + 0x89CF5u);
    // 09175f  mov dx, word ptr [ebx + 0x14]
    X86_AT(c, 0x9175fu);
    s16(c, 2, rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x14u))));
    // 091763  in al, dx
    X86_AT(c, 0x91763u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 091764  test al, 4
    X86_AT(c, 0x91764u);
    (void)x86_logic(c, g8(c, 0) & 0x4u, 1);
    // 091766  je 0x91780
    X86_AT(c, 0x91766u);
    if (x86_cc(c, 4)) { goto L_91780; }
    X86_TICK(c, 6);
    // 091768  mov byte ptr [ebx + 0x19], 0x10
    X86_AT(c, 0x91768u);
    wr8((c.sbase[3] + (uint32_t)(c.r[3] + 0x19u)), 0x10u);
    // 09176c  mov dx, word ptr [ebx + 0x14]
    X86_AT(c, 0x9176cu);
    s16(c, 2, rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x14u))));
L_91770:
    X86_TICK(c, 19);
    // 091770  in al, dx
    X86_AT(c, 0x91770u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 091771  test al, 1
    X86_AT(c, 0x91771u);
    (void)x86_logic(c, g8(c, 0) & 0x1u, 1);
    // 091773  jne 0x91770
    X86_AT(c, 0x91773u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x91770u); goto L_91770; }
    X86_TICK(c, 24);
    // 091775  push dx
    X86_AT(c, 0x91775u);
    { uint32_t v = (c.r[2] & 0xFFFFu); push16(c, v); }
    // 091777  mov dx, word ptr [ebx + 0x12]
    X86_AT(c, 0x91777u);
    s16(c, 2, rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x12u))));
    // 09177b  mov al, 0x37
    X86_AT(c, 0x9177bu);
    s8(c, 0, 0x37u);
    // 09177d  out dx, al
    X86_AT(c, 0x9177du);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 09177e  pop dx
    X86_AT(c, 0x9177eu);
    { uint32_t v = pop16(c); s16(c, 2, v); }
L_91780:
    X86_TICK(c, 19);
    // 091780  in al, dx
    X86_AT(c, 0x91780u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 091781  test al, 2
    X86_AT(c, 0x91781u);
    (void)x86_logic(c, g8(c, 0) & 0x2u, 1);
    // 091783  jne 0x91780
    X86_AT(c, 0x91783u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x91780u); goto L_91780; }
    X86_TICK(c, 21);
    // 091785  dec dx
    X86_AT(c, 0x91785u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_dec(c, v, 2)); }
    // 091787  in al, dx
    X86_AT(c, 0x91787u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 091788  cmp al, 0xf8
    X86_AT(c, 0x91788u);
    (void)x86_sub(c, g8(c, 0), 0xF8u, 0, 1);
    // 09178a  jb 0x91790
    X86_AT(c, 0x9178au);
    if (x86_cc(c, 2)) { goto L_91790; }
    X86_TICK(c, 9);
    // 09178c  mov bl, cl
    X86_AT(c, 0x9178cu);
    s8(c, 3, g8(c, 1));
    // 09178e  jmp 0x917af
    X86_AT(c, 0x9178eu);
    goto L_917af;
L_91790:
    X86_TICK(c, 12);
    // 091790  cmp word ptr [ebx + 0x10], 0x40
    X86_AT(c, 0x91790u);
    (void)x86_sub(c, rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u))), 0x40u, 0, 2);
    // 091795  jb 0x9179d
    X86_AT(c, 0x91795u);
    if (x86_cc(c, 2)) { goto L_9179d; }
    X86_TICK(c, 9);
    // 091797  mov byte ptr [ebx + 0x19], 0x10
    X86_AT(c, 0x91797u);
    wr8((c.sbase[3] + (uint32_t)(c.r[3] + 0x19u)), 0x10u);
    // 09179b  jmp 0x917af
    X86_AT(c, 0x9179bu);
    goto L_917af;
L_9179d:
    X86_TICK(c, 28);
    // 09179d  mov edi, dword ptr [ebx + 8]
    X86_AT(c, 0x9179du);
    c.r[7] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x8u)));
    // 0917a0  stosb byte ptr es:[edi], al
    X86_AT(c, 0x917a0u);
    x86_string(c, 2, 1, 0, 4, 3);
    // 0917a1  inc word ptr [ebx + 0x10]
    X86_AT(c, 0x917a1u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3] + 0x10u)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
    // 0917a5  cmp edi, dword ptr [ebx + 4]
    X86_AT(c, 0x917a5u);
    (void)x86_sub(c, c.r[7], rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u))), 0, 4);
    // 0917a8  jne 0x917ac
    X86_AT(c, 0x917a8u);
    if (x86_cc(c, 5)) { goto L_917ac; }
    X86_TICK(c, 4);
    // 0917aa  mov edi, dword ptr [ebx]
    X86_AT(c, 0x917aau);
    c.r[7] = rd32((c.sbase[3] + (uint32_t)(c.r[3])));
L_917ac:
    X86_TICK(c, 2);
    // 0917ac  mov dword ptr [ebx + 8], edi
    X86_AT(c, 0x917acu);
    wr32((c.sbase[3] + (uint32_t)(c.r[3] + 0x8u)), c.r[7]);
L_917af:
    X86_TICK(c, 14);
    // 0917af  pop ax
    X86_AT(c, 0x917afu);
    { uint32_t v = pop16(c); s16(c, 0, v); }
    // 0917b1  ret 
    X86_AT(c, 0x917b1u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x91752u, "ran off the end of a function");
}
void f_000917b2(X86Cpu& c) {
    X86_TICK(c, 20);
    // 0917b2  push ax
    X86_AT(c, 0x917b2u);
    { uint32_t v = (c.r[0] & 0xFFFFu); push16(c, v); }
    // 0917b4  mov ebx, ecx
    X86_AT(c, 0x917b4u);
    c.r[3] = c.r[1];
    // 0917b6  shl ebx, 5
    X86_AT(c, 0x917b6u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[3] = r; }
    // 0917b9  lea ebx, [ebx + 0x89bf5]
    X86_AT(c, 0x917b9u);
    c.r[3] = (uint32_t)(c.r[3] + 0x89BF5u);
    // 0917bf  dec word ptr [ebx + 0x10]
    X86_AT(c, 0x917bfu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3] + 0x10u)); uint32_t v = rd16(ea); wr16(ea, x86_dec(c, v, 2)); }
    // 0917c3  js 0x91804
    X86_AT(c, 0x917c3u);
    if (x86_cc(c, 8)) { goto L_91804; }
    X86_TICK(c, 4);
    // 0917c9  mov dx, word ptr [ebx + 0x14]
    X86_AT(c, 0x917c9u);
    s16(c, 2, rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x14u))));
L_917cd:
    X86_TICK(c, 37);
    // 0917cd  mov al, 1
    X86_AT(c, 0x917cdu);
    s8(c, 0, 0x1u);
    // 0917cf  out dx, al
    X86_AT(c, 0x917cfu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 0917d0  nop 
    X86_AT(c, 0x917d0u);
    // 0917d1  nop 
    X86_AT(c, 0x917d1u);
    // 0917d2  in al, dx
    X86_AT(c, 0x917d2u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 0917d3  test al, 1
    X86_AT(c, 0x917d3u);
    (void)x86_logic(c, g8(c, 0) & 0x1u, 1);
    // 0917d5  jne 0x917cd
    X86_AT(c, 0x917d5u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x917cdu); goto L_917cd; }
    X86_TICK(c, 35);
    // 0917d7  out dx, al
    X86_AT(c, 0x917d7u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 0917d8  nop 
    X86_AT(c, 0x917d8u);
    // 0917d9  nop 
    X86_AT(c, 0x917d9u);
    // 0917da  in al, dx
    X86_AT(c, 0x917dau);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 0917db  test al, 1
    X86_AT(c, 0x917dbu);
    (void)x86_logic(c, g8(c, 0) & 0x1u, 1);
    // 0917dd  jne 0x917cd
    X86_AT(c, 0x917ddu);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x917cdu); goto L_917cd; }
    X86_TICK(c, 60);
    // 0917df  push dx
    X86_AT(c, 0x917dfu);
    { uint32_t v = (c.r[2] & 0xFFFFu); push16(c, v); }
    // 0917e1  mov esi, dword ptr [ebx + 0xc]
    X86_AT(c, 0x917e1u);
    c.r[6] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0xCu)));
    // 0917e4  lodsb al, byte ptr [esi]
    X86_AT(c, 0x917e4u);
    x86_string(c, 3, 1, 0, 4, 3);
    // 0917e5  mov dx, word ptr [ebx + 0x12]
    X86_AT(c, 0x917e5u);
    s16(c, 2, rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x12u))));
    // 0917e9  dec dx
    X86_AT(c, 0x917e9u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_dec(c, v, 2)); }
    // 0917eb  out dx, al
    X86_AT(c, 0x917ebu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 0917ec  pop dx
    X86_AT(c, 0x917ecu);
    { uint32_t v = pop16(c); s16(c, 2, v); }
    // 0917ee  mov al, 1
    X86_AT(c, 0x917eeu);
    s8(c, 0, 0x1u);
    // 0917f0  out dx, al
    X86_AT(c, 0x917f0u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 0917f1  cmp esi, dword ptr [ebx + 4]
    X86_AT(c, 0x917f1u);
    (void)x86_sub(c, c.r[6], rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u))), 0, 4);
    // 0917f4  jne 0x917fc
    X86_AT(c, 0x917f4u);
    if (x86_cc(c, 5)) { goto L_917fc; }
    X86_TICK(c, 4);
    // 0917fa  mov esi, dword ptr [ebx]
    X86_AT(c, 0x917fau);
    c.r[6] = rd32((c.sbase[3] + (uint32_t)(c.r[3])));
L_917fc:
    X86_TICK(c, 9);
    // 0917fc  mov dword ptr [ebx + 0xc], esi
    X86_AT(c, 0x917fcu);
    wr32((c.sbase[3] + (uint32_t)(c.r[3] + 0xCu)), c.r[6]);
    // 0917ff  jmp 0x9181d
    X86_AT(c, 0x917ffu);
    goto L_9181d;
L_91804:
    X86_TICK(c, 34);
    // 091804  inc word ptr [ebx + 0x10]
    X86_AT(c, 0x91804u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3] + 0x10u)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
    // 091808  mov al, byte ptr [ebx + 0x1a]
    X86_AT(c, 0x91808u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0x1Au))));
    // 09180b  xor al, 0xff
    X86_AT(c, 0x9180bu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ 0xFFu, 1)); }
    // 09180d  and al, byte ptr [0x89bc5]
    X86_AT(c, 0x9180du);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & rd8((c.sbase[3] + (uint32_t)(0x89BC5u))), 1)); }
    // 091813  mov byte ptr [0x89bc5], al
    X86_AT(c, 0x91813u);
    wr8((c.sbase[3] + (uint32_t)(0x89BC5u)), g8(c, 0));
    // 091818  mov dx, 0xe70
    X86_AT(c, 0x91818u);
    s16(c, 2, 0xE70u);
    // 09181c  out dx, al
    X86_AT(c, 0x9181cu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
L_9181d:
    X86_TICK(c, 14);
    // 09181d  pop ax
    X86_AT(c, 0x9181du);
    { uint32_t v = pop16(c); s16(c, 0, v); }
    // 09181f  ret 
    X86_AT(c, 0x9181fu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x917b2u, "ran off the end of a function");
}
void f_00091820(X86Cpu& c) {
    X86_TICK(c, 14);
    // 091820  cli 
    X86_AT(c, 0x91820u);
    c.fl &= ~X86_IF;
    // 091821  cmp byte ptr [0x89be6], 0
    X86_AT(c, 0x91821u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0x89BE6u))), 0x0u, 0, 1);
    // 091828  jne 0x91880
    X86_AT(c, 0x91828u);
    if (x86_cc(c, 5)) { goto L_91880; }
    X86_TICK(c, 14);
    // 09182a  mov byte ptr [0x89be6], 0xff
    X86_AT(c, 0x9182au);
    wr8((c.sbase[3] + (uint32_t)(0x89BE6u)), 0xFFu);
    // 091831  cmp byte ptr [0x89be7], 0
    X86_AT(c, 0x91831u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0x89BE7u))), 0x0u, 0, 1);
    // 091838  jne 0x91854
    X86_AT(c, 0x91838u);
    if (x86_cc(c, 5)) { goto L_91854; }
    X86_TICK(c, 10);
    // 09183e  mov dword ptr [0x89be9], esp
    X86_AT(c, 0x9183eu);
    wr32((c.sbase[3] + (uint32_t)(0x89BE9u)), c.r[4]);
    // 091844  mov word ptr [0x89bed], ss
    X86_AT(c, 0x91844u);
    wr16((c.sbase[3] + (uint32_t)(0x89BEDu)), (uint32_t)c.sreg[2]);
    // 09184a  mov eax, ds
    X86_AT(c, 0x9184au);
    c.r[0] = (uint32_t)c.sreg[3];
    // 09184c  mov ss, eax
    X86_AT(c, 0x9184cu);
    x86_load_seg(c, 2, (c.r[0] & 0xFFFFu) & 0xFFFFu);
    // 09184e  lea esp, [0x8a2f5]
    X86_AT(c, 0x9184eu);
    c.r[4] = (uint32_t)(0x8A2F5u);
L_91854:
    X86_TICK(c, 15);
    // 091854  inc byte ptr [0x89be7]
    X86_AT(c, 0x91854u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x89BE7u)); uint32_t v = rd8(ea); wr8(ea, x86_inc(c, v, 1)); }
    // 09185a  sti 
    X86_AT(c, 0x9185au);
    c.fl |= X86_IF;
    // 09185b  call 0x904ee
    X86_AT(c, 0x9185bu);
    push32(c, 0x91860u); x86_call_known(c, 0x904eeu, f_000904ee); X86_RET(c, 0x91860u);
    X86_TICK(c, 13);
    // 091860  cli 
    X86_AT(c, 0x91860u);
    c.fl &= ~X86_IF;
    // 091861  dec byte ptr [0x89be7]
    X86_AT(c, 0x91861u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x89BE7u)); uint32_t v = rd8(ea); wr8(ea, x86_dec(c, v, 1)); }
    // 091867  jne 0x91879
    X86_AT(c, 0x91867u);
    if (x86_cc(c, 5)) { goto L_91879; }
    X86_TICK(c, 8);
    // 09186d  mov esp, dword ptr [0x89be9]
    X86_AT(c, 0x9186du);
    c.r[4] = rd32((c.sbase[3] + (uint32_t)(0x89BE9u)));
    // 091873  mov ss, word ptr [0x89bed]
    X86_AT(c, 0x91873u);
    x86_load_seg(c, 2, rd16((c.sbase[3] + (uint32_t)(0x89BEDu))) & 0xFFFFu);
L_91879:
    X86_TICK(c, 2);
    // 091879  mov byte ptr [0x89be6], 0
    X86_AT(c, 0x91879u);
    wr8((c.sbase[3] + (uint32_t)(0x89BE6u)), 0x0u);
L_91880:
    X86_TICK(c, 10);
    // 091880  ret 
    X86_AT(c, 0x91880u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x91820u, "ran off the end of a function");
}
void f_00091890(X86Cpu& c) {
    X86_TICK(c, 70);
    // 091890  push es
    X86_AT(c, 0x91890u);
    push32(c, c.sreg[0]);
    // 091891  pushal 
    X86_AT(c, 0x91891u);
    { uint32_t sp = c.r[4]; for (int k = 0; k < 8; ++k) push32(c, k == 4 ? sp : c.r[k]); }
    // 091892  push ds
    X86_AT(c, 0x91892u);
    push32(c, c.sreg[3]);
    // 091893  pop es
    X86_AT(c, 0x91893u);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 091894  cld 
    X86_AT(c, 0x91894u);
    c.fl &= ~X86_DF;
    // 091895  xor eax, eax
    X86_AT(c, 0x91895u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v ^ c.r[0], 4); }
    // 091897  mov byte ptr [0x8a500], al
    X86_AT(c, 0x91897u);
    wr8((c.sbase[3] + (uint32_t)(0x8A500u)), g8(c, 0));
    // 09189c  mov byte ptr [0x8a501], al
    X86_AT(c, 0x9189cu);
    wr8((c.sbase[3] + (uint32_t)(0x8A501u)), g8(c, 0));
    // 0918a1  mov byte ptr [0x8a502], al
    X86_AT(c, 0x918a1u);
    wr8((c.sbase[3] + (uint32_t)(0x8A502u)), g8(c, 0));
    // 0918a6  mov byte ptr [0x8a503], al
    X86_AT(c, 0x918a6u);
    wr8((c.sbase[3] + (uint32_t)(0x8A503u)), g8(c, 0));
    // 0918ab  mov byte ptr [0x8a504], al
    X86_AT(c, 0x918abu);
    wr8((c.sbase[3] + (uint32_t)(0x8A504u)), g8(c, 0));
    // 0918b0  lea edi, [0x8a505]
    X86_AT(c, 0x918b0u);
    c.r[7] = (uint32_t)(0x8A505u);
    // 0918b6  mov ecx, 4
    X86_AT(c, 0x918b6u);
    c.r[1] = 0x4u;
    // 0918bb  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x918bbu);
    x86_string(c, 2, 4, 243, 4, 3);
    // 0918bd  not eax
    X86_AT(c, 0x918bdu);
    { uint32_t v = c.r[0]; c.r[0] = ~v & 0xFFFFFFFFu; }
    // 0918bf  lea edi, [0x8a515]
    X86_AT(c, 0x918bfu);
    c.r[7] = (uint32_t)(0x8A515u);
    // 0918c5  mov ecx, 4
    X86_AT(c, 0x918c5u);
    c.r[1] = 0x4u;
    // 0918ca  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x918cau);
    x86_string(c, 2, 4, 243, 4, 3);
    // 0918cc  xor al, al
    X86_AT(c, 0x918ccu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 0918ce  mov ecx, 0x80
    X86_AT(c, 0x918ceu);
    c.r[1] = 0x80u;
    // 0918d3  lea edi, [0x8a525]
    X86_AT(c, 0x918d3u);
    c.r[7] = (uint32_t)(0x8A525u);
L_918d9:
    X86_TICK(c, 21);
    // 0918d9  mov byte ptr [edi], ah
    X86_AT(c, 0x918d9u);
    wr8((c.sbase[3] + (uint32_t)(c.r[7])), g8(c, 4));
    // 0918db  mov byte ptr [edi + 1], ah
    X86_AT(c, 0x918dbu);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0x1u)), g8(c, 4));
    // 0918de  mov byte ptr [edi + 2], al
    X86_AT(c, 0x918deu);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0x2u)), g8(c, 0));
    // 0918e1  mov byte ptr [edi + 3], al
    X86_AT(c, 0x918e1u);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0x3u)), g8(c, 0));
    // 0918e4  add edi, 4
    X86_AT(c, 0x918e4u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x4u, 0, 4); }
    // 0918e7  loop 0x918d9
    X86_AT(c, 0x918e7u);
    c.r[1] -= 1; if (c.r[1] != 0) { X86_POLL(c, 0x918d9u); goto L_918d9; }
    X86_TICK(c, 6);
    // 0918e9  mov ecx, 6
    X86_AT(c, 0x918e9u);
    c.r[1] = 0x6u;
    // 0918ee  xor dl, dl
    X86_AT(c, 0x918eeu);
    { uint32_t v = g8(c, 2); s8(c, 2, x86_logic(c, v ^ g8(c, 2), 1)); }
    // 0918f0  mov bl, 0
    X86_AT(c, 0x918f0u);
    s8(c, 3, 0x0u);
L_918f2:
    X86_TICK(c, 7);
    // 0918f2  call 0x91912
    X86_AT(c, 0x918f2u);
    push32(c, 0x918f7u); x86_call_known(c, 0x91912u, f_00091912); X86_RET(c, 0x918f7u);
    X86_TICK(c, 15);
    // 0918f7  inc dl
    X86_AT(c, 0x918f7u);
    { uint32_t v = g8(c, 2); s8(c, 2, x86_inc(c, v, 1)); }
    // 0918f9  inc bl
    X86_AT(c, 0x918f9u);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_inc(c, v, 1)); }
    // 0918fb  loop 0x918f2
    X86_AT(c, 0x918fbu);
    c.r[1] -= 1; if (c.r[1] != 0) { X86_POLL(c, 0x918f2u); goto L_918f2; }
    X86_TICK(c, 4);
    // 0918fd  mov ecx, 8
    X86_AT(c, 0x918fdu);
    c.r[1] = 0x8u;
    // 091902  mov bl, 0x40
    X86_AT(c, 0x91902u);
    s8(c, 3, 0x40u);
L_91904:
    X86_TICK(c, 7);
    // 091904  call 0x91912
    X86_AT(c, 0x91904u);
    push32(c, 0x91909u); x86_call_known(c, 0x91912u, f_00091912); X86_RET(c, 0x91909u);
    X86_TICK(c, 15);
    // 091909  inc dl
    X86_AT(c, 0x91909u);
    { uint32_t v = g8(c, 2); s8(c, 2, x86_inc(c, v, 1)); }
    // 09190b  inc bl
    X86_AT(c, 0x9190bu);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_inc(c, v, 1)); }
    // 09190d  loop 0x91904
    X86_AT(c, 0x9190du);
    c.r[1] -= 1; if (c.r[1] != 0) { X86_POLL(c, 0x91904u); goto L_91904; }
    X86_TICK(c, 38);
    // 09190f  popal 
    X86_AT(c, 0x9190fu);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 091910  pop es
    X86_AT(c, 0x91910u);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 091911  ret 
    X86_AT(c, 0x91911u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x91890u, "ran off the end of a function");
}
void f_00091912(X86Cpu& c) {
    X86_TICK(c, 25);
    // 091912  pushal 
    X86_AT(c, 0x91912u);
    { uint32_t sp = c.r[4]; for (int k = 0; k < 8; ++k) push32(c, k == 4 ? sp : c.r[k]); }
    // 091913  cmp dl, 0x10
    X86_AT(c, 0x91913u);
    (void)x86_sub(c, g8(c, 2), 0x10u, 0, 1);
    // 091916  jae 0x919b0
    X86_AT(c, 0x91916u);
    if (x86_cc(c, 3)) { goto L_919b0; }
    X86_TICK(c, 7);
    // 09191c  cmp bl, 0x80
    X86_AT(c, 0x9191cu);
    (void)x86_sub(c, g8(c, 3), 0x80u, 0, 1);
    // 09191f  jae 0x919b0
    X86_AT(c, 0x9191fu);
    if (x86_cc(c, 3)) { goto L_919b0; }
    X86_TICK(c, 16);
    // 091925  movzx ebx, bl
    X86_AT(c, 0x91925u);
    c.r[3] = g8(c, 3);
    // 091928  lea edi, [ebx*4 + 0x8a525]
    X86_AT(c, 0x91928u);
    c.r[7] = (uint32_t)(c.r[3] * 4 + 0x8A525u);
    // 09192f  mov al, byte ptr [edi]
    X86_AT(c, 0x9192fu);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[7]))));
    // 091931  cmp al, dl
    X86_AT(c, 0x91931u);
    (void)x86_sub(c, g8(c, 0), g8(c, 2), 0, 1);
    // 091933  je 0x919ac
    X86_AT(c, 0x91933u);
    if (x86_cc(c, 4)) { goto L_919ac; }
    X86_TICK(c, 7);
    // 091939  cmp al, 0xff
    X86_AT(c, 0x91939u);
    (void)x86_sub(c, g8(c, 0), 0xFFu, 0, 1);
    // 09193b  je 0x9198d
    X86_AT(c, 0x9193bu);
    if (x86_cc(c, 4)) { goto L_9198d; }
    X86_TICK(c, 16);
    // 091941  movzx eax, al
    X86_AT(c, 0x91941u);
    c.r[0] = g8(c, 0);
    // 091944  lea esi, [eax + 0x8a515]
    X86_AT(c, 0x91944u);
    c.r[6] = (uint32_t)(c.r[0] + 0x8A515u);
    // 09194a  mov al, byte ptr [esi]
    X86_AT(c, 0x9194au);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[6]))));
    // 09194c  cmp al, bl
    X86_AT(c, 0x9194cu);
    (void)x86_sub(c, g8(c, 0), g8(c, 3), 0, 1);
    // 09194e  je 0x91969
    X86_AT(c, 0x9194eu);
    if (x86_cc(c, 4)) { goto L_91969; }
L_91950:
    X86_TICK(c, 18);
    // 091950  movzx eax, al
    X86_AT(c, 0x91950u);
    c.r[0] = g8(c, 0);
    // 091953  lea esi, [eax*4 + 0x8a525]
    X86_AT(c, 0x91953u);
    c.r[6] = (uint32_t)(c.r[0] * 4 + 0x8A525u);
    // 09195a  lea esi, [esi + 1]
    X86_AT(c, 0x9195au);
    c.r[6] = (uint32_t)(c.r[6] + 0x1u);
    // 09195d  mov al, byte ptr [esi]
    X86_AT(c, 0x9195du);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[6]))));
    // 09195f  cmp al, bl
    X86_AT(c, 0x9195fu);
    (void)x86_sub(c, g8(c, 0), g8(c, 3), 0, 1);
    // 091961  je 0x91969
    X86_AT(c, 0x91961u);
    if (x86_cc(c, 4)) { goto L_91969; }
    X86_TICK(c, 7);
    // 091963  cmp al, 0xff
    X86_AT(c, 0x91963u);
    (void)x86_sub(c, g8(c, 0), 0xFFu, 0, 1);
    // 091965  je 0x919b0
    X86_AT(c, 0x91965u);
    if (x86_cc(c, 4)) { goto L_919b0; }
    X86_TICK(c, 7);
    // 091967  jmp 0x91950
    X86_AT(c, 0x91967u);
    X86_POLL(c, 0x91950u); goto L_91950;
L_91969:
    X86_TICK(c, 28);
    // 091969  push edx
    X86_AT(c, 0x91969u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 09196a  pushf 
    X86_AT(c, 0x9196au);
    push16(c, c.fl & 0xFFFFu);
    // 09196c  cli 
    X86_AT(c, 0x9196cu);
    c.fl &= ~X86_IF;
    // 09196d  mov dl, byte ptr [edi + 1]
    X86_AT(c, 0x9196du);
    s8(c, 2, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x1u))));
    // 091970  mov byte ptr [esi], dl
    X86_AT(c, 0x91970u);
    wr8((c.sbase[3] + (uint32_t)(c.r[6])), g8(c, 2));
    // 091972  cmp byte ptr [edi + 2], 0
    X86_AT(c, 0x91972u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x2u))), 0x0u, 0, 1);
    // 091976  je 0x9197f
    X86_AT(c, 0x91976u);
    if (x86_cc(c, 4)) { goto L_9197f; }
    X86_TICK(c, 9);
    // 091978  mov ah, 2
    X86_AT(c, 0x91978u);
    s8(c, 4, 0x2u);
    // 09197a  call 0x8fad8
    X86_AT(c, 0x9197au);
    push32(c, 0x9197fu); x86_call_known(c, 0x8fad8u, f_0008fad8); X86_RET(c, 0x9197fu);
L_9197f:
    X86_TICK(c, 16);
    // 09197f  mov byte ptr [edi], 0xff
    X86_AT(c, 0x9197fu);
    wr8((c.sbase[3] + (uint32_t)(c.r[7])), 0xFFu);
    // 091982  mov byte ptr [edi + 1], 0xff
    X86_AT(c, 0x91982u);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0x1u)), 0xFFu);
    // 091986  mov byte ptr [edi + 2], 0
    X86_AT(c, 0x91986u);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0x2u)), 0x0u);
    // 09198a  popf 
    X86_AT(c, 0x9198au);
    x86_popfd(c, 2);
    // 09198c  pop edx
    X86_AT(c, 0x9198cu);
    { uint32_t v = pop32(c); c.r[2] = v; }
L_9198d:
    X86_TICK(c, 33);
    // 09198d  movzx edx, dl
    X86_AT(c, 0x9198du);
    c.r[2] = g8(c, 2);
    // 091990  lea esi, [edx + 0x8a515]
    X86_AT(c, 0x91990u);
    c.r[6] = (uint32_t)(c.r[2] + 0x8A515u);
    // 091996  pushf 
    X86_AT(c, 0x91996u);
    push16(c, c.fl & 0xFFFFu);
    // 091998  cli 
    X86_AT(c, 0x91998u);
    c.fl &= ~X86_IF;
    // 091999  mov al, byte ptr [esi]
    X86_AT(c, 0x91999u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[6]))));
    // 09199b  mov byte ptr [esi], bl
    X86_AT(c, 0x9199bu);
    wr8((c.sbase[3] + (uint32_t)(c.r[6])), g8(c, 3));
    // 09199d  mov byte ptr [edi], dl
    X86_AT(c, 0x9199du);
    wr8((c.sbase[3] + (uint32_t)(c.r[7])), g8(c, 2));
    // 09199f  mov byte ptr [edi + 1], al
    X86_AT(c, 0x9199fu);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0x1u)), g8(c, 0));
    // 0919a2  mov byte ptr [edi + 2], 0
    X86_AT(c, 0x919a2u);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0x2u)), 0x0u);
    // 0919a6  mov byte ptr [edi + 3], 0
    X86_AT(c, 0x919a6u);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0x3u)), 0x0u);
    // 0919aa  popf 
    X86_AT(c, 0x919aau);
    x86_popfd(c, 2);
L_919ac:
    X86_TICK(c, 36);
    // 0919ac  popal 
    X86_AT(c, 0x919acu);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 0919ad  xor al, al
    X86_AT(c, 0x919adu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 0919af  ret 
    X86_AT(c, 0x919afu);
    c.eip = pop32(c); return;
L_919b0:
    X86_TICK(c, 36);
    // 0919b0  popal 
    X86_AT(c, 0x919b0u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 0919b1  mov al, 3
    X86_AT(c, 0x919b1u);
    s8(c, 0, 0x3u);
    // 0919b3  ret 
    X86_AT(c, 0x919b3u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x91912u, "ran off the end of a function");
}
void f_000919b4(X86Cpu& c) {
    X86_TICK(c, 25);
    // 0919b4  pushal 
    X86_AT(c, 0x919b4u);
    { uint32_t sp = c.r[4]; for (int k = 0; k < 8; ++k) push32(c, k == 4 ? sp : c.r[k]); }
    // 0919b5  cmp al, 0x80
    X86_AT(c, 0x919b5u);
    (void)x86_sub(c, g8(c, 0), 0x80u, 0, 1);
    // 0919b7  jb 0x919cb
    X86_AT(c, 0x919b7u);
    if (x86_cc(c, 2)) { goto L_919cb; }
    X86_TICK(c, 7);
    // 0919b9  cmp al, 0xf0
    X86_AT(c, 0x919b9u);
    (void)x86_sub(c, g8(c, 0), 0xF0u, 0, 1);
    // 0919bb  jae 0x919f3
    X86_AT(c, 0x919bbu);
    if (x86_cc(c, 3)) { goto L_919f3; }
    X86_TICK(c, 11);
    // 0919bd  mov byte ptr [0x8a500], al
    X86_AT(c, 0x919bdu);
    wr8((c.sbase[3] + (uint32_t)(0x8A500u)), g8(c, 0));
    // 0919c2  mov byte ptr [0x8a501], 1
    X86_AT(c, 0x919c2u);
    wr8((c.sbase[3] + (uint32_t)(0x8A501u)), 0x1u);
    // 0919c9  jmp 0x919f1
    X86_AT(c, 0x919c9u);
    goto L_919f1;
L_919cb:
    X86_TICK(c, 13);
    // 0919cb  movzx ebx, byte ptr [0x8a500]
    X86_AT(c, 0x919cbu);
    c.r[3] = rd8((c.sbase[3] + (uint32_t)(0x8A500u)));
    // 0919d2  cmp ebx, 0x80
    X86_AT(c, 0x919d2u);
    (void)x86_sub(c, c.r[3], 0x80u, 0, 4);
    // 0919d8  jb 0x919f1
    X86_AT(c, 0x919d8u);
    if (x86_cc(c, 2)) { goto L_919f1; }
    X86_TICK(c, 14);
    // 0919de  sub ebx, 0x80
    X86_AT(c, 0x919deu);
    { uint32_t v = c.r[3]; c.r[3] = x86_sub(c, v, 0x80u, 0, 4); }
    // 0919e4  shr ebx, 4
    X86_AT(c, 0x919e4u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 5, v, 0x4u, 4, w); if (w) c.r[3] = r; }
    // 0919e7  lea ebx, [ebx*4 + 0x91a03]
    X86_AT(c, 0x919e7u);
    c.r[3] = (uint32_t)(c.r[3] * 4 + 0x91A03u);
    // 0919ee  call dword ptr cs:[ebx]
    X86_AT(c, 0x919eeu);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[3]))); push32(c, 0x919f1u); x86_call(c, t); X86_RET(c, 0x919f1u); }
L_919f1:
    X86_TICK(c, 34);
    // 0919f1  popal 
    X86_AT(c, 0x919f1u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 0919f2  ret 
    X86_AT(c, 0x919f2u);
    c.eip = pop32(c); return;
L_919f3:
    X86_TICK(c, 38);
    // 0919f3  mov byte ptr [0x8a501], 1
    X86_AT(c, 0x919f3u);
    wr8((c.sbase[3] + (uint32_t)(0x8A501u)), 0x1u);
    // 0919fa  mov byte ptr [0x8a500], 0
    X86_AT(c, 0x919fau);
    wr8((c.sbase[3] + (uint32_t)(0x8A500u)), 0x0u);
    // 091a01  popal 
    X86_AT(c, 0x91a01u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 091a02  ret 
    X86_AT(c, 0x91a02u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x919b4u, "ran off the end of a function");
}
void f_00091b2b(X86Cpu& c) {
    X86_TICK(c, 17);
    // 091b2b  mov al, byte ptr [0x8a500]
    X86_AT(c, 0x91b2bu);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(0x8A500u))));
    // 091b30  and eax, 0xf
    X86_AT(c, 0x91b30u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0xFu, 4); }
    // 091b35  mov bl, byte ptr [eax + 0x8a515]
    X86_AT(c, 0x91b35u);
    s8(c, 3, rd8((c.sbase[3] + (uint32_t)(c.r[0] + 0x8A515u))));
    // 091b3b  cmp bl, 0xff
    X86_AT(c, 0x91b3bu);
    (void)x86_sub(c, g8(c, 3), 0xFFu, 0, 1);
    // 091b3e  je 0x91b8c
    X86_AT(c, 0x91b3eu);
    if (x86_cc(c, 4)) { goto L_91b8c; }
    X86_TICK(c, 4);
    // 091b44  mov dl, byte ptr [0x8a502]
    X86_AT(c, 0x91b44u);
    s8(c, 2, rd8((c.sbase[3] + (uint32_t)(0x8A502u))));
L_91b4a:
    X86_TICK(c, 16);
    // 091b4a  movzx eax, bl
    X86_AT(c, 0x91b4au);
    c.r[0] = g8(c, 3);
    // 091b4d  lea esi, [eax*4 + 0x8a525]
    X86_AT(c, 0x91b4du);
    c.r[6] = (uint32_t)(c.r[0] * 4 + 0x8A525u);
    // 091b54  cmp dl, byte ptr [esi + 2]
    X86_AT(c, 0x91b54u);
    (void)x86_sub(c, g8(c, 2), rd8((c.sbase[3] + (uint32_t)(c.r[6] + 0x2u))), 0, 1);
    // 091b57  je 0x91b66
    X86_AT(c, 0x91b57u);
    if (x86_cc(c, 4)) { goto L_91b66; }
    X86_TICK(c, 11);
    // 091b59  mov bl, byte ptr [esi + 1]
    X86_AT(c, 0x91b59u);
    s8(c, 3, rd8((c.sbase[3] + (uint32_t)(c.r[6] + 0x1u))));
    // 091b5c  cmp bl, 0xff
    X86_AT(c, 0x91b5cu);
    (void)x86_sub(c, g8(c, 3), 0xFFu, 0, 1);
    // 091b5f  jne 0x91b4a
    X86_AT(c, 0x91b5fu);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x91b4au); goto L_91b4a; }
    X86_TICK(c, 7);
    // 091b61  jmp 0x91b8c
    X86_AT(c, 0x91b61u);
    goto L_91b8c;
L_91b66:
    X86_TICK(c, 18);
    // 091b66  mov al, byte ptr [0x8a500]
    X86_AT(c, 0x91b66u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(0x8A500u))));
    // 091b6b  and eax, 0xf
    X86_AT(c, 0x91b6bu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0xFu, 4); }
    // 091b70  cmp byte ptr [eax + 0x8a505], 0
    X86_AT(c, 0x91b70u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[0] + 0x8A505u))), 0x0u, 0, 1);
    // 091b77  jne 0x91b86
    X86_AT(c, 0x91b77u);
    if (x86_cc(c, 5)) { goto L_91b86; }
    X86_TICK(c, 11);
    // 091b79  mov byte ptr [esi + 2], 0
    X86_AT(c, 0x91b79u);
    wr8((c.sbase[3] + (uint32_t)(c.r[6] + 0x2u)), 0x0u);
    // 091b7d  mov ah, 2
    X86_AT(c, 0x91b7du);
    s8(c, 4, 0x2u);
    // 091b7f  call 0x8fad8
    X86_AT(c, 0x91b7fu);
    push32(c, 0x91b84u); x86_call_known(c, 0x8fad8u, f_0008fad8); X86_RET(c, 0x91b84u);
    X86_TICK(c, 12);
    // 091b84  clc 
    X86_AT(c, 0x91b84u);
    c.fl &= ~X86_CF;
    // 091b85  ret 
    X86_AT(c, 0x91b85u);
    c.eip = pop32(c); return;
L_91b86:
    X86_TICK(c, 19);
    // 091b86  or byte ptr [esi + 2], 0x80
    X86_AT(c, 0x91b86u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[6] + 0x2u)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | 0x80u, 1)); }
    // 091b8a  clc 
    X86_AT(c, 0x91b8au);
    c.fl &= ~X86_CF;
    // 091b8b  ret 
    X86_AT(c, 0x91b8bu);
    c.eip = pop32(c); return;
L_91b8c:
    X86_TICK(c, 12);
    // 091b8c  stc 
    X86_AT(c, 0x91b8cu);
    c.fl |= X86_CF;
    // 091b8d  ret 
    X86_AT(c, 0x91b8du);
    c.eip = pop32(c); return;
    x86_fault(c, 0x91b2bu, "ran off the end of a function");
}
void f_00091d88(X86Cpu& c) {
    X86_TICK(c, 28);
    // 091d88  push ebp
    X86_AT(c, 0x91d88u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 091d89  mov ebp, esp
    X86_AT(c, 0x91d89u);
    c.r[5] = c.r[4];
    // 091d8b  sub esp, 0xb4
    X86_AT(c, 0x91d8bu);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, 0xB4u, 0, 4); }
    // 091d91  push ebx
    X86_AT(c, 0x91d91u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 091d92  push esi
    X86_AT(c, 0x91d92u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 091d93  push edi
    X86_AT(c, 0x91d93u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 091d94  mov eax, dword ptr [ebp + 8]
    X86_AT(c, 0x91d94u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 091d97  cmp byte ptr [eax], 0
    X86_AT(c, 0x91d97u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[0]))), 0x0u, 0, 1);
    // 091d9a  je 0x91e39
    X86_AT(c, 0x91d9au);
    if (x86_cc(c, 4)) { goto L_91e39; }
    X86_TICK(c, 14);
    // 091da0  push 0x1b9c
    X86_AT(c, 0x91da0u);
    { uint32_t v = 0x1B9Cu; push32(c, v); }
    // 091da5  push dword ptr [ebp + 8]
    X86_AT(c, 0x91da5u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, v); }
    // 091da8  call 0x927dc
    X86_AT(c, 0x91da8u);
    push32(c, 0x91dadu); x86_call_known(c, 0x927dcu, f_000927dc); X86_RET(c, 0x91dadu);
    X86_TICK(c, 12);
    // 091dad  add esp, 8
    X86_AT(c, 0x91dadu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 091db0  xchg edi, eax
    X86_AT(c, 0x91db0u);
    { uint32_t t = c.r[7]; c.r[7] = c.r[0]; c.r[0] = t; }
    // 091db1  and edi, edi
    X86_AT(c, 0x91db1u);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & c.r[7], 4); }
    // 091db3  jne 0x91e40
    X86_AT(c, 0x91db3u);
    if (x86_cc(c, 5)) { goto L_91e40; }
    X86_TICK(c, 9);
    // 091db9  push 0x1ba0
    X86_AT(c, 0x91db9u);
    { uint32_t v = 0x1BA0u; push32(c, v); }
    // 091dbe  call 0x9321c
    X86_AT(c, 0x91dbeu);
    push32(c, 0x91dc3u); x86_call_known(c, 0x9321cu, f_0009321c); X86_RET(c, 0x91dc3u);
    X86_TICK(c, 11);
    // 091dc3  add esp, 4
    X86_AT(c, 0x91dc3u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 091dc6  mov dword ptr [ebp - 0x34], eax
    X86_AT(c, 0x91dc6u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFCCu)), c.r[0]);
    // 091dc9  and eax, eax
    X86_AT(c, 0x91dc9u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 091dcb  je 0x91e39
    X86_AT(c, 0x91dcbu);
    if (x86_cc(c, 4)) { goto L_91e39; }
    X86_TICK(c, 16);
    // 091dcd  push dword ptr [ebp - 0x34]
    X86_AT(c, 0x91dcdu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFCCu))); push32(c, v); }
    // 091dd0  lea eax, [ebp - 0xb4]
    X86_AT(c, 0x91dd0u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFF4Cu);
    // 091dd6  push eax
    X86_AT(c, 0x91dd6u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 091dd7  call 0x93314
    X86_AT(c, 0x91dd7u);
    push32(c, 0x91ddcu); x86_call_known(c, 0x93314u, f_00093314); X86_RET(c, 0x91ddcu);
    X86_TICK(c, 4);
    // 091ddc  sub esi, esi
    X86_AT(c, 0x91ddcu);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[6], 0, 4); }
    // 091dde  add esp, 8
    X86_AT(c, 0x91ddeu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
L_91de1:
    X86_TICK(c, 12);
    // 091de1  cmp byte ptr [ebp + esi*1 - 0xb4], 0
    X86_AT(c, 0x91de1u);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + c.r[6] + 0xFFFFFF4Cu))), 0x0u, 0, 1);
    // 091de9  je 0x91dee
    X86_AT(c, 0x91de9u);
    if (x86_cc(c, 4)) { goto L_91dee; }
    X86_TICK(c, 9);
    // 091deb  inc esi
    X86_AT(c, 0x91debu);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 091dec  jmp 0x91de1
    X86_AT(c, 0x91decu);
    X86_POLL(c, 0x91de1u); goto L_91de1;
L_91dee:
    X86_TICK(c, 12);
    // 091dee  cmp byte ptr [ebp + esi*1 - 0xb5], 0x5c
    X86_AT(c, 0x91deeu);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + c.r[6] + 0xFFFFFF4Bu))), 0x5Cu, 0, 1);
    // 091df6  je 0x91e01
    X86_AT(c, 0x91df6u);
    if (x86_cc(c, 4)) { goto L_91e01; }
    X86_TICK(c, 4);
    // 091df8  inc esi
    X86_AT(c, 0x91df8u);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 091df9  mov byte ptr [ebp + esi*1 - 0xb5], 0x5c
    X86_AT(c, 0x91df9u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + c.r[6] + 0xFFFFFF4Bu)), 0x5Cu);
L_91e01:
    X86_TICK(c, 2);
    // 091e01  sub ebx, ebx
    X86_AT(c, 0x91e01u);
    { uint32_t v = c.r[3]; c.r[3] = x86_sub(c, v, c.r[3], 0, 4); }
L_91e03:
    X86_TICK(c, 15);
    // 091e03  mov eax, dword ptr [ebp + 8]
    X86_AT(c, 0x91e03u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 091e06  mov al, byte ptr [eax + ebx*1]
    X86_AT(c, 0x91e06u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[0] + c.r[3]))));
    // 091e09  and al, al
    X86_AT(c, 0x91e09u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & g8(c, 0), 1)); }
    // 091e0b  je 0x91e18
    X86_AT(c, 0x91e0bu);
    if (x86_cc(c, 4)) { goto L_91e18; }
    X86_TICK(c, 13);
    // 091e0d  inc esi
    X86_AT(c, 0x91e0du);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 091e0e  mov byte ptr [ebp + esi*1 - 0xb5], al
    X86_AT(c, 0x91e0eu);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + c.r[6] + 0xFFFFFF4Bu)), g8(c, 0));
    // 091e15  inc ebx
    X86_AT(c, 0x91e15u);
    { uint32_t v = c.r[3]; c.r[3] = x86_inc(c, v, 4); }
    // 091e16  jmp 0x91e03
    X86_AT(c, 0x91e16u);
    X86_POLL(c, 0x91e03u); goto L_91e03;
L_91e18:
    X86_TICK(c, 15);
    // 091e18  mov byte ptr [ebp + esi*1 - 0xb4], 0
    X86_AT(c, 0x91e18u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + c.r[6] + 0xFFFFFF4Cu)), 0x0u);
    // 091e20  push 0x1ba8
    X86_AT(c, 0x91e20u);
    { uint32_t v = 0x1BA8u; push32(c, v); }
    // 091e25  lea eax, [ebp - 0xb4]
    X86_AT(c, 0x91e25u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFF4Cu);
    // 091e2b  push eax
    X86_AT(c, 0x91e2bu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 091e2c  call 0x927dc
    X86_AT(c, 0x91e2cu);
    push32(c, 0x91e31u); x86_call_known(c, 0x927dcu, f_000927dc); X86_RET(c, 0x91e31u);
    X86_TICK(c, 12);
    // 091e31  add esp, 8
    X86_AT(c, 0x91e31u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 091e34  xchg edi, eax
    X86_AT(c, 0x91e34u);
    { uint32_t t = c.r[7]; c.r[7] = c.r[0]; c.r[0] = t; }
    // 091e35  and edi, edi
    X86_AT(c, 0x91e35u);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & c.r[7], 4); }
    // 091e37  jne 0x91e40
    X86_AT(c, 0x91e37u);
    if (x86_cc(c, 5)) { goto L_91e40; }
L_91e39:
    X86_TICK(c, 9);
    // 091e39  mov eax, 1
    X86_AT(c, 0x91e39u);
    c.r[0] = 0x1u;
    // 091e3e  jmp 0x91e9f
    X86_AT(c, 0x91e3eu);
    goto L_91e9f;
L_91e40:
    X86_TICK(c, 18);
    // 091e40  push edi
    X86_AT(c, 0x91e40u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 091e41  push 8
    X86_AT(c, 0x91e41u);
    { uint32_t v = 0x8u; push32(c, v); }
    // 091e43  push 1
    X86_AT(c, 0x91e43u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 091e45  push dword ptr [ebp + 0xc]
    X86_AT(c, 0x91e45u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))); push32(c, v); }
    // 091e48  call 0x92500
    X86_AT(c, 0x91e48u);
    push32(c, 0x91e4du); x86_call_known(c, 0x92500u, f_00092500); X86_RET(c, 0x91e4du);
    X86_TICK(c, 9);
    // 091e4d  add esp, 0x10
    X86_AT(c, 0x91e4du);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 091e50  cmp eax, 8
    X86_AT(c, 0x91e50u);
    (void)x86_sub(c, c.r[0], 0x8u, 0, 4);
    // 091e53  jl 0x91e75
    X86_AT(c, 0x91e53u);
    if (x86_cc(c, 12)) { goto L_91e75; }
    X86_TICK(c, 2);
    // 091e55  sub esi, esi
    X86_AT(c, 0x91e55u);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[6], 0, 4); }
L_91e57:
    X86_TICK(c, 7);
    // 091e57  cmp esi, 0x80
    X86_AT(c, 0x91e57u);
    (void)x86_sub(c, c.r[6], 0x80u, 0, 4);
    // 091e5d  jge 0x91e94
    X86_AT(c, 0x91e5du);
    if (x86_cc(c, 13)) { goto L_91e94; }
    X86_TICK(c, 17);
    // 091e5f  push edi
    X86_AT(c, 0x91e5fu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 091e60  push 0x30
    X86_AT(c, 0x91e60u);
    { uint32_t v = 0x30u; push32(c, v); }
    // 091e62  push 1
    X86_AT(c, 0x91e62u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 091e64  lea eax, [ebp - 0x30]
    X86_AT(c, 0x91e64u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFD0u);
    // 091e67  push eax
    X86_AT(c, 0x91e67u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 091e68  call 0x92500
    X86_AT(c, 0x91e68u);
    push32(c, 0x91e6du); x86_call_known(c, 0x92500u, f_00092500); X86_RET(c, 0x91e6du);
    X86_TICK(c, 9);
    // 091e6d  add esp, 0x10
    X86_AT(c, 0x91e6du);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 091e70  cmp eax, 0x30
    X86_AT(c, 0x91e70u);
    (void)x86_sub(c, c.r[0], 0x30u, 0, 4);
    // 091e73  jge 0x91e82
    X86_AT(c, 0x91e73u);
    if (x86_cc(c, 13)) { goto L_91e82; }
L_91e75:
    X86_TICK(c, 9);
    // 091e75  push edi
    X86_AT(c, 0x91e75u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 091e76  call 0x92cd8
    X86_AT(c, 0x91e76u);
    push32(c, 0x91e7bu); x86_call_known(c, 0x92cd8u, f_00092cd8); X86_RET(c, 0x91e7bu);
    X86_TICK(c, 9);
    // 091e7b  mov eax, 2
    X86_AT(c, 0x91e7bu);
    c.r[0] = 0x2u;
    // 091e80  jmp 0x91e9c
    X86_AT(c, 0x91e80u);
    goto L_91e9c;
L_91e82:
    X86_TICK(c, 15);
    // 091e82  lea eax, [ebp - 0x30]
    X86_AT(c, 0x91e82u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFD0u);
    // 091e85  push eax
    X86_AT(c, 0x91e85u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 091e86  push esi
    X86_AT(c, 0x91e86u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 091e87  push 0
    X86_AT(c, 0x91e87u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 091e89  call 0x8f5c1
    X86_AT(c, 0x91e89u);
    push32(c, 0x91e8eu); x86_call_known(c, 0x8f5c1u, f_0008f5c1); X86_RET(c, 0x91e8eu);
    X86_TICK(c, 11);
    // 091e8e  inc esi
    X86_AT(c, 0x91e8eu);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 091e8f  add esp, 0xc
    X86_AT(c, 0x91e8fu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 091e92  jmp 0x91e57
    X86_AT(c, 0x91e92u);
    X86_POLL(c, 0x91e57u); goto L_91e57;
L_91e94:
    X86_TICK(c, 9);
    // 091e94  push edi
    X86_AT(c, 0x91e94u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 091e95  call 0x92cd8
    X86_AT(c, 0x91e95u);
    push32(c, 0x91e9au); x86_call_known(c, 0x92cd8u, f_00092cd8); X86_RET(c, 0x91e9au);
    X86_TICK(c, 2);
    // 091e9a  sub eax, eax
    X86_AT(c, 0x91e9au);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
L_91e9c:
    X86_TICK(c, 2);
    // 091e9c  add esp, 4
    X86_AT(c, 0x91e9cu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
L_91e9f:
    X86_TICK(c, 28);
    // 091e9f  pop edi
    X86_AT(c, 0x91e9fu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 091ea0  pop esi
    X86_AT(c, 0x91ea0u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 091ea1  pop ebx
    X86_AT(c, 0x91ea1u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 091ea2  leave 
    X86_AT(c, 0x91ea2u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 091ea3  ret 
    X86_AT(c, 0x91ea3u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x91d88u, "ran off the end of a function");
}
void f_00092098(X86Cpu& c) {
    X86_TICK(c, 42);
    // 092098  enter 0x14, 0
    X86_AT(c, 0x92098u);
    x86_enter(c, 0x14u, 0x0u, 4);
    // 09209c  push ebx
    X86_AT(c, 0x9209cu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 09209d  push esi
    X86_AT(c, 0x9209du);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 09209e  push edi
    X86_AT(c, 0x9209eu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 09209f  mov edi, dword ptr [ebp + 0x10]
    X86_AT(c, 0x9209fu);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u)));
    // 0920a2  mov ax, word ptr [0x8aabe]
    X86_AT(c, 0x920a2u);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(0x8AABEu))));
    // 0920a8  mov word ptr [ebp - 0xe], ax
    X86_AT(c, 0x920a8u);
    wr16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF2u)), (c.r[0] & 0xFFFFu));
    // 0920ac  sub eax, eax
    X86_AT(c, 0x920acu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0920ae  mov word ptr [0x8aabe], ax
    X86_AT(c, 0x920aeu);
    wr16((c.sbase[3] + (uint32_t)(0x8AABEu)), (c.r[0] & 0xFFFFu));
    // 0920b4  mov ebx, dword ptr [ebp + 8]
    X86_AT(c, 0x920b4u);
    c.r[3] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0920b7  test byte ptr [ebx + 0xc], 1
    X86_AT(c, 0x920b7u);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xCu))) & 0x1u, 1);
    // 0920bb  je 0x923ad
    X86_AT(c, 0x920bbu);
    if (x86_cc(c, 4)) { goto L_923ad; }
    X86_TICK(c, 9);
    // 0920c1  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0x920c1u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
    // 0920c4  jmp 0x9238e
    X86_AT(c, 0x920c4u);
    goto L_9238e;
L_920c9:
    X86_TICK(c, 12);
    // 0920c9  test byte ptr [ebx + 0xc], 0x40
    X86_AT(c, 0x920c9u);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xCu))) & 0x40u, 1);
    // 0920cd  je 0x922c6
    X86_AT(c, 0x920cdu);
    if (x86_cc(c, 4)) { goto L_922c6; }
    X86_TICK(c, 12);
    // 0920d3  cmp dword ptr [ebx + 4], 1
    X86_AT(c, 0x920d3u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u))), 0x1u, 0, 4);
    // 0920d7  jne 0x9211e
    X86_AT(c, 0x920d7u);
    if (x86_cc(c, 5)) { goto L_9211e; }
    X86_TICK(c, 12);
    // 0920d9  cmp word ptr [ebx + 0x10], 0xfffe
    X86_AT(c, 0x920d9u);
    (void)x86_sub(c, rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u))), 0xFFFEu, 0, 2);
    // 0920de  jne 0x9211e
    X86_AT(c, 0x920deu);
    if (x86_cc(c, 5)) { goto L_9211e; }
    X86_TICK(c, 12);
    // 0920e0  test byte ptr [ebx + 0xd], 4
    X86_AT(c, 0x920e0u);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xDu))) & 0x4u, 1);
    // 0920e4  jne 0x92364
    X86_AT(c, 0x920e4u);
    if (x86_cc(c, 5)) { goto L_92364; }
    X86_TICK(c, 33);
    // 0920ea  mov al, byte ptr [0x8a72a]
    X86_AT(c, 0x920eau);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(0x8A72Au))));
    // 0920ef  mov edx, dword ptr [ebx + 8]
    X86_AT(c, 0x920efu);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x8u)));
    // 0920f2  mov byte ptr [edx], al
    X86_AT(c, 0x920f2u);
    wr8((c.sbase[3] + (uint32_t)(c.r[2])), g8(c, 0));
    // 0920f4  push 0x1ff
    X86_AT(c, 0x920f4u);
    { uint32_t v = 0x1FFu; push32(c, v); }
    // 0920f9  mov eax, dword ptr [ebx + 8]
    X86_AT(c, 0x920f9u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x8u)));
    // 0920fc  inc eax
    X86_AT(c, 0x920fcu);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0920fd  push eax
    X86_AT(c, 0x920fdu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0920fe  mov al, byte ptr [ebx + 0xe]
    X86_AT(c, 0x920feu);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xEu))));
    // 092101  push eax
    X86_AT(c, 0x92101u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 092102  call 0x94fe0
    X86_AT(c, 0x92102u);
    push32(c, 0x92107u); x86_call_known(c, 0x94fe0u, f_00094fe0); X86_RET(c, 0x92107u);
    X86_TICK(c, 11);
    // 092107  inc eax
    X86_AT(c, 0x92107u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 092108  mov dword ptr [ebx + 4], eax
    X86_AT(c, 0x92108u);
    wr32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)), c.r[0]);
    // 09210b  dec eax
    X86_AT(c, 0x9210bu);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 09210c  jne 0x92156
    X86_AT(c, 0x9210cu);
    if (x86_cc(c, 5)) { goto L_92156; }
    X86_TICK(c, 15);
    // 09210e  mov eax, dword ptr [ebx + 8]
    X86_AT(c, 0x9210eu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x8u)));
    // 092111  mov dword ptr [ebx], eax
    X86_AT(c, 0x92111u);
    wr32((c.sbase[3] + (uint32_t)(c.r[3])), c.r[0]);
    // 092113  mov word ptr [ebx + 0x10], 0x200
    X86_AT(c, 0x92113u);
    wr16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u)), 0x200u);
    // 092119  jmp 0x92364
    X86_AT(c, 0x92119u);
    goto L_92364;
L_9211e:
    X86_TICK(c, 12);
    // 09211e  cmp dword ptr [ebx + 4], 0
    X86_AT(c, 0x9211eu);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u))), 0x0u, 0, 4);
    // 092122  jne 0x9219b
    X86_AT(c, 0x92122u);
    if (x86_cc(c, 5)) { goto L_9219b; }
    X86_TICK(c, 12);
    // 092128  test byte ptr [ebx + 0xc], 0x10
    X86_AT(c, 0x92128u);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xCu))) & 0x10u, 1);
    // 09212c  jne 0x92396
    X86_AT(c, 0x9212cu);
    if (x86_cc(c, 5)) { goto L_92396; }
    X86_TICK(c, 12);
    // 092132  test byte ptr [ebx + 0xd], 4
    X86_AT(c, 0x92132u);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xDu))) & 0x4u, 1);
    // 092136  jne 0x9214c
    X86_AT(c, 0x92136u);
    if (x86_cc(c, 5)) { goto L_9214c; }
    X86_TICK(c, 20);
    // 092138  push 0x200
    X86_AT(c, 0x92138u);
    { uint32_t v = 0x200u; push32(c, v); }
    // 09213d  push dword ptr [ebx + 8]
    X86_AT(c, 0x9213du);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x8u))); push32(c, v); }
    // 092140  mov al, byte ptr [ebx + 0xe]
    X86_AT(c, 0x92140u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xEu))));
    // 092143  push eax
    X86_AT(c, 0x92143u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 092144  call 0x94fe0
    X86_AT(c, 0x92144u);
    push32(c, 0x92149u); x86_call_known(c, 0x94fe0u, f_00094fe0); X86_RET(c, 0x92149u);
    X86_TICK(c, 2);
    // 092149  mov dword ptr [ebx + 4], eax
    X86_AT(c, 0x92149u);
    wr32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)), c.r[0]);
L_9214c:
    X86_TICK(c, 12);
    // 09214c  cmp dword ptr [ebx + 4], 0
    X86_AT(c, 0x9214cu);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u))), 0x0u, 0, 4);
    // 092150  je 0x92396
    X86_AT(c, 0x92150u);
    if (x86_cc(c, 4)) { goto L_92396; }
L_92156:
    X86_TICK(c, 28);
    // 092156  mov edx, dword ptr [ebx + 4]
    X86_AT(c, 0x92156u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)));
    // 092159  mov al, 0x1a
    X86_AT(c, 0x92159u);
    s8(c, 0, 0x1Au);
    // 09215b  mov ecx, dword ptr [ebx + 8]
    X86_AT(c, 0x9215bu);
    c.r[1] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x8u)));
    // 09215e  push edi
    X86_AT(c, 0x9215eu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 09215f  mov edi, ecx
    X86_AT(c, 0x9215fu);
    c.r[7] = c.r[1];
    // 092161  mov ecx, edx
    X86_AT(c, 0x92161u);
    c.r[1] = c.r[2];
    // 092163  scasb al, byte ptr es:[edi]
    X86_AT(c, 0x92163u);
    x86_string(c, 4, 1, 242, 4, 3);
    // 092165  jne 0x9216a
    X86_AT(c, 0x92165u);
    if (x86_cc(c, 5)) { goto L_9216a; }
    X86_TICK(c, 4);
    // 092167  inc ecx
    X86_AT(c, 0x92167u);
    { uint32_t v = c.r[1]; c.r[1] = x86_inc(c, v, 4); }
    // 092168  sub edx, ecx
    X86_AT(c, 0x92168u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[1], 0, 4); }
L_9216a:
    X86_TICK(c, 17);
    // 09216a  pop edi
    X86_AT(c, 0x9216au);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 09216b  mov word ptr [ebp - 0x10], dx
    X86_AT(c, 0x9216bu);
    wr16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u)), (c.r[2] & 0xFFFFu));
    // 09216f  cmp edx, dword ptr [ebx + 4]
    X86_AT(c, 0x9216fu);
    (void)x86_sub(c, c.r[2], rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u))), 0, 4);
    // 092172  je 0x92190
    X86_AT(c, 0x92172u);
    if (x86_cc(c, 4)) { goto L_92190; }
    X86_TICK(c, 32);
    // 092174  or byte ptr [ebx + 0xd], 4
    X86_AT(c, 0x92174u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3] + 0xDu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | 0x4u, 1)); }
    // 092178  push 1
    X86_AT(c, 0x92178u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 09217a  mov dword ptr [ebp - 0x14], edx
    X86_AT(c, 0x9217au);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu)), c.r[2]);
    // 09217d  sub edx, dword ptr [ebx + 4]
    X86_AT(c, 0x9217du);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u))), 0, 4); }
    // 092180  push edx
    X86_AT(c, 0x92180u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 092181  mov al, byte ptr [ebx + 0xe]
    X86_AT(c, 0x92181u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xEu))));
    // 092184  push eax
    X86_AT(c, 0x92184u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 092185  call 0x950b8
    X86_AT(c, 0x92185u);
    push32(c, 0x9218au); x86_call_known(c, 0x950b8u, f_000950b8); X86_RET(c, 0x9218au);
    X86_TICK(c, 6);
    // 09218a  mov eax, dword ptr [ebp - 0x14]
    X86_AT(c, 0x9218au);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu)));
    // 09218d  mov dword ptr [ebx + 4], eax
    X86_AT(c, 0x9218du);
    wr32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)), c.r[0]);
L_92190:
    X86_TICK(c, 8);
    // 092190  mov eax, dword ptr [ebx + 8]
    X86_AT(c, 0x92190u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x8u)));
    // 092193  mov dword ptr [ebx], eax
    X86_AT(c, 0x92193u);
    wr32((c.sbase[3] + (uint32_t)(c.r[3])), c.r[0]);
    // 092195  mov word ptr [ebx + 0x10], 0xffff
    X86_AT(c, 0x92195u);
    wr16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u)), 0xFFFFu);
L_9219b:
    X86_TICK(c, 12);
    // 09219b  cmp dword ptr [ebx + 4], 0
    X86_AT(c, 0x9219bu);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u))), 0x0u, 0, 4);
    // 09219f  jle 0x9238e
    X86_AT(c, 0x9219fu);
    if (x86_cc(c, 14)) { goto L_9238e; }
    X86_TICK(c, 11);
    // 0921a5  mov ax, word ptr [ebx + 0x10]
    X86_AT(c, 0x921a5u);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u))));
    // 0921a9  cmp ax, 0xffff
    X86_AT(c, 0x921a9u);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), 0xFFFFu, 0, 2);
    // 0921ad  je 0x921bd
    X86_AT(c, 0x921adu);
    if (x86_cc(c, 4)) { goto L_921bd; }
    X86_TICK(c, 20);
    // 0921af  movsx eax, ax
    X86_AT(c, 0x921afu);
    c.r[0] = (uint32_t)(int32_t)(int16_t)(c.r[0] & 0xFFFFu);
    // 0921b2  add eax, dword ptr [ebx + 8]
    X86_AT(c, 0x921b2u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x8u))), 0, 4); }
    // 0921b5  cmp eax, dword ptr [ebx]
    X86_AT(c, 0x921b5u);
    (void)x86_sub(c, c.r[0], rd32((c.sbase[3] + (uint32_t)(c.r[3]))), 0, 4);
    // 0921b7  jge 0x92254
    X86_AT(c, 0x921b7u);
    if (x86_cc(c, 13)) { goto L_92254; }
L_921bd:
    X86_TICK(c, 30);
    // 0921bd  mov edx, dword ptr [ebx + 4]
    X86_AT(c, 0x921bdu);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)));
    // 0921c0  mov al, byte ptr [0x8a72a]
    X86_AT(c, 0x921c0u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(0x8A72Au))));
    // 0921c5  mov ecx, dword ptr [ebx]
    X86_AT(c, 0x921c5u);
    c.r[1] = rd32((c.sbase[3] + (uint32_t)(c.r[3])));
    // 0921c7  push edi
    X86_AT(c, 0x921c7u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0921c8  mov edi, ecx
    X86_AT(c, 0x921c8u);
    c.r[7] = c.r[1];
    // 0921ca  mov ecx, edx
    X86_AT(c, 0x921cau);
    c.r[1] = c.r[2];
    // 0921cc  scasb al, byte ptr es:[edi]
    X86_AT(c, 0x921ccu);
    x86_string(c, 4, 1, 242, 4, 3);
    // 0921ce  jne 0x921d3
    X86_AT(c, 0x921ceu);
    if (x86_cc(c, 5)) { goto L_921d3; }
    X86_TICK(c, 4);
    // 0921d0  inc ecx
    X86_AT(c, 0x921d0u);
    { uint32_t v = c.r[1]; c.r[1] = x86_inc(c, v, 4); }
    // 0921d1  sub edx, ecx
    X86_AT(c, 0x921d1u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[1], 0, 4); }
L_921d3:
    X86_TICK(c, 13);
    // 0921d3  pop edi
    X86_AT(c, 0x921d3u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0921d4  mov word ptr [ebx + 0x10], dx
    X86_AT(c, 0x921d4u);
    wr16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u)), (c.r[2] & 0xFFFFu));
    // 0921d8  jmp 0x9220d
    X86_AT(c, 0x921d8u);
    goto L_9220d;
L_921da:
    X86_TICK(c, 59);
    // 0921da  movsx eax, word ptr [ebx + 0x10]
    X86_AT(c, 0x921dau);
    c.r[0] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u)));
    // 0921de  add eax, dword ptr [ebx]
    X86_AT(c, 0x921deu);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[3]))), 0, 4); }
    // 0921e0  inc eax
    X86_AT(c, 0x921e0u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0921e1  mov dx, word ptr [ebx + 0x10]
    X86_AT(c, 0x921e1u);
    s16(c, 2, rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u))));
    // 0921e5  inc edx
    X86_AT(c, 0x921e5u);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
    // 0921e6  movsx edx, dx
    X86_AT(c, 0x921e6u);
    c.r[2] = (uint32_t)(int32_t)(int16_t)(c.r[2] & 0xFFFFu);
    // 0921e9  mov ecx, dword ptr [ebx + 4]
    X86_AT(c, 0x921e9u);
    c.r[1] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)));
    // 0921ec  sub ecx, edx
    X86_AT(c, 0x921ecu);
    { uint32_t v = c.r[1]; c.r[1] = x86_sub(c, v, c.r[2], 0, 4); }
    // 0921ee  mov edx, ecx
    X86_AT(c, 0x921eeu);
    c.r[2] = c.r[1];
    // 0921f0  mov dword ptr [ebp - 0x14], eax
    X86_AT(c, 0x921f0u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu)), c.r[0]);
    // 0921f3  mov al, byte ptr [0x8a72a]
    X86_AT(c, 0x921f3u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(0x8A72Au))));
    // 0921f8  mov ecx, dword ptr [ebp - 0x14]
    X86_AT(c, 0x921f8u);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu)));
    // 0921fb  push edi
    X86_AT(c, 0x921fbu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0921fc  mov edi, ecx
    X86_AT(c, 0x921fcu);
    c.r[7] = c.r[1];
    // 0921fe  mov ecx, edx
    X86_AT(c, 0x921feu);
    c.r[1] = c.r[2];
    // 092200  scasb al, byte ptr es:[edi]
    X86_AT(c, 0x92200u);
    x86_string(c, 4, 1, 242, 4, 3);
    // 092202  jne 0x92207
    X86_AT(c, 0x92202u);
    if (x86_cc(c, 5)) { goto L_92207; }
    X86_TICK(c, 4);
    // 092204  inc ecx
    X86_AT(c, 0x92204u);
    { uint32_t v = c.r[1]; c.r[1] = x86_inc(c, v, 4); }
    // 092205  sub edx, ecx
    X86_AT(c, 0x92205u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[1], 0, 4); }
L_92207:
    X86_TICK(c, 13);
    // 092207  pop edi
    X86_AT(c, 0x92207u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 092208  inc edx
    X86_AT(c, 0x92208u);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
    // 092209  add word ptr [ebx + 0x10], dx
    X86_AT(c, 0x92209u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3] + 0x10u)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[2] & 0xFFFFu), 0, 2)); }
L_9220d:
    X86_TICK(c, 19);
    // 09220d  movsx eax, word ptr [ebx + 0x10]
    X86_AT(c, 0x9220du);
    c.r[0] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u)));
    // 092211  mov edx, dword ptr [ebx + 4]
    X86_AT(c, 0x92211u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)));
    // 092214  dec edx
    X86_AT(c, 0x92214u);
    { uint32_t v = c.r[2]; c.r[2] = x86_dec(c, v, 4); }
    // 092215  cmp edx, eax
    X86_AT(c, 0x92215u);
    (void)x86_sub(c, c.r[2], c.r[0], 0, 4);
    // 092217  jle 0x92226
    X86_AT(c, 0x92217u);
    if (x86_cc(c, 14)) { goto L_92226; }
    X86_TICK(c, 23);
    // 092219  add eax, dword ptr [ebx]
    X86_AT(c, 0x92219u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[3]))), 0, 4); }
    // 09221b  inc eax
    X86_AT(c, 0x9221bu);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 09221c  mov al, byte ptr [eax]
    X86_AT(c, 0x9221cu);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[0]))));
    // 09221e  cmp al, byte ptr [0x8a72b]
    X86_AT(c, 0x9221eu);
    (void)x86_sub(c, g8(c, 0), rd8((c.sbase[3] + (uint32_t)(0x8A72Bu))), 0, 1);
    // 092224  jne 0x921da
    X86_AT(c, 0x92224u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x921dau); goto L_921da; }
L_92226:
    X86_TICK(c, 17);
    // 092226  movsx eax, word ptr [ebx + 0x10]
    X86_AT(c, 0x92226u);
    c.r[0] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u)));
    // 09222a  cmp eax, dword ptr [ebx + 4]
    X86_AT(c, 0x9222au);
    (void)x86_sub(c, c.r[0], rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u))), 0, 4);
    // 09222d  jne 0x92237
    X86_AT(c, 0x9222du);
    if (x86_cc(c, 5)) { goto L_92237; }
    X86_TICK(c, 9);
    // 09222f  mov word ptr [ebx + 0x10], 0x200
    X86_AT(c, 0x9222fu);
    wr16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u)), 0x200u);
    // 092235  jmp 0x92254
    X86_AT(c, 0x92235u);
    goto L_92254;
L_92237:
    X86_TICK(c, 19);
    // 092237  movsx eax, word ptr [ebx + 0x10]
    X86_AT(c, 0x92237u);
    c.r[0] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u)));
    // 09223b  mov edx, dword ptr [ebx + 4]
    X86_AT(c, 0x9223bu);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)));
    // 09223e  dec edx
    X86_AT(c, 0x9223eu);
    { uint32_t v = c.r[2]; c.r[2] = x86_dec(c, v, 4); }
    // 09223f  cmp edx, eax
    X86_AT(c, 0x9223fu);
    (void)x86_sub(c, c.r[2], c.r[0], 0, 4);
    // 092241  jne 0x9224b
    X86_AT(c, 0x92241u);
    if (x86_cc(c, 5)) { goto L_9224b; }
    X86_TICK(c, 9);
    // 092243  mov word ptr [ebx + 0x10], 0xfffe
    X86_AT(c, 0x92243u);
    wr16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u)), 0xFFFEu);
    // 092249  jmp 0x92254
    X86_AT(c, 0x92249u);
    goto L_92254;
L_9224b:
    X86_TICK(c, 17);
    // 09224b  mov eax, dword ptr [ebx]
    X86_AT(c, 0x9224bu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3])));
    // 09224d  sub eax, dword ptr [ebx + 8]
    X86_AT(c, 0x9224du);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x8u))), 0, 4); }
    // 092250  add word ptr [ebx + 0x10], ax
    X86_AT(c, 0x92250u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3] + 0x10u)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
L_92254:
    X86_TICK(c, 12);
    // 092254  cmp word ptr [ebx + 0x10], 0x200
    X86_AT(c, 0x92254u);
    (void)x86_sub(c, rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u))), 0x200u, 0, 2);
    // 09225a  je 0x92364
    X86_AT(c, 0x9225au);
    if (x86_cc(c, 4)) { goto L_92364; }
    X86_TICK(c, 12);
    // 092260  cmp word ptr [ebx + 0x10], 0xfffe
    X86_AT(c, 0x92260u);
    (void)x86_sub(c, rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u))), 0xFFFEu, 0, 2);
    // 092265  jne 0x92275
    X86_AT(c, 0x92265u);
    if (x86_cc(c, 5)) { goto L_92275; }
    X86_TICK(c, 11);
    // 092267  cmp edi, dword ptr [ebx + 4]
    X86_AT(c, 0x92267u);
    (void)x86_sub(c, c.r[7], rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u))), 0, 4);
    // 09226a  jl 0x922bf
    X86_AT(c, 0x9226au);
    if (x86_cc(c, 12)) { goto L_922bf; }
    X86_TICK(c, 13);
    // 09226c  mov esi, dword ptr [ebx + 4]
    X86_AT(c, 0x9226cu);
    c.r[6] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)));
    // 09226f  dec esi
    X86_AT(c, 0x9226fu);
    { uint32_t v = c.r[6]; c.r[6] = x86_dec(c, v, 4); }
    // 092270  jmp 0x92370
    X86_AT(c, 0x92270u);
    goto L_92370;
L_92275:
    X86_TICK(c, 25);
    // 092275  mov eax, dword ptr [ebx]
    X86_AT(c, 0x92275u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3])));
    // 092277  sub eax, dword ptr [ebx + 8]
    X86_AT(c, 0x92277u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x8u))), 0, 4); }
    // 09227a  movsx esi, word ptr [ebx + 0x10]
    X86_AT(c, 0x9227au);
    c.r[6] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u)));
    // 09227e  sub esi, eax
    X86_AT(c, 0x9227eu);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[0], 0, 4); }
    // 092280  cmp edi, esi
    X86_AT(c, 0x92280u);
    (void)x86_sub(c, c.r[7], c.r[6], 0, 4);
    // 092282  jbe 0x922bf
    X86_AT(c, 0x92282u);
    if (x86_cc(c, 6)) { goto L_922bf; }
    X86_TICK(c, 87);
    // 092284  mov ecx, esi
    X86_AT(c, 0x92284u);
    c.r[1] = c.r[6];
    // 092286  mov eax, dword ptr [ebx]
    X86_AT(c, 0x92286u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3])));
    // 092288  mov edx, dword ptr [ebp + 0xc]
    X86_AT(c, 0x92288u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 09228b  mov dword ptr [ebp - 0x14], edi
    X86_AT(c, 0x9228bu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu)), c.r[7]);
    // 09228e  mov edi, dword ptr [ebp - 4]
    X86_AT(c, 0x9228eu);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 092291  lea edx, [edx + edi*1]
    X86_AT(c, 0x92291u);
    c.r[2] = (uint32_t)(c.r[2] + c.r[7]);
    // 092294  push esi
    X86_AT(c, 0x92294u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 092295  push edi
    X86_AT(c, 0x92295u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 092296  mov esi, eax
    X86_AT(c, 0x92296u);
    c.r[6] = c.r[0];
    // 092298  mov edi, edx
    X86_AT(c, 0x92298u);
    c.r[7] = c.r[2];
    // 09229a  movsb byte ptr es:[edi], byte ptr [esi]
    X86_AT(c, 0x9229au);
    x86_string(c, 0, 1, 243, 4, 3);
    // 09229c  pop edi
    X86_AT(c, 0x9229cu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 09229d  pop esi
    X86_AT(c, 0x9229du);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 09229e  add edi, esi
    X86_AT(c, 0x9229eu);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, c.r[6], 0, 4); }
    // 0922a0  mov eax, dword ptr [ebp + 0xc]
    X86_AT(c, 0x922a0u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0922a3  mov byte ptr [eax + edi*1], 0xa
    X86_AT(c, 0x922a3u);
    wr8((c.sbase[3] + (uint32_t)(c.r[0] + c.r[7])), 0xAu);
    // 0922a7  lea eax, [esi + 1]
    X86_AT(c, 0x922a7u);
    c.r[0] = (uint32_t)(c.r[6] + 0x1u);
    // 0922aa  add dword ptr [ebp - 4], eax
    X86_AT(c, 0x922aau);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 0922ad  mov edi, dword ptr [ebp - 0x14]
    X86_AT(c, 0x922adu);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu)));
    // 0922b0  sub edi, eax
    X86_AT(c, 0x922b0u);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0922b2  lea eax, [esi + 2]
    X86_AT(c, 0x922b2u);
    c.r[0] = (uint32_t)(c.r[6] + 0x2u);
    // 0922b5  sub dword ptr [ebx + 4], eax
    X86_AT(c, 0x922b5u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)); uint32_t v = rd32(ea); wr32(ea, x86_sub(c, v, c.r[0], 0, 4)); }
    // 0922b8  add dword ptr [ebx], eax
    X86_AT(c, 0x922b8u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3])); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 0922ba  jmp 0x9238e
    X86_AT(c, 0x922bau);
    goto L_9238e;
L_922bf:
    X86_TICK(c, 9);
    // 0922bf  mov esi, edi
    X86_AT(c, 0x922bfu);
    c.r[6] = c.r[7];
    // 0922c1  jmp 0x92370
    X86_AT(c, 0x922c1u);
    goto L_92370;
L_922c6:
    X86_TICK(c, 13);
    // 0922c6  mov word ptr [ebx + 0x10], 0xffff
    X86_AT(c, 0x922c6u);
    wr16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u)), 0xFFFFu);
    // 0922cc  mov eax, dword ptr [ebx + 4]
    X86_AT(c, 0x922ccu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)));
    // 0922cf  cmp edi, eax
    X86_AT(c, 0x922cfu);
    (void)x86_sub(c, c.r[7], c.r[0], 0, 4);
    // 0922d1  jl 0x922f7
    X86_AT(c, 0x922d1u);
    if (x86_cc(c, 12)) { goto L_922f7; }
    X86_TICK(c, 7);
    // 0922d3  and eax, eax
    X86_AT(c, 0x922d3u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0922d5  jle 0x922f7
    X86_AT(c, 0x922d5u);
    if (x86_cc(c, 14)) { goto L_922f7; }
    X86_TICK(c, 53);
    // 0922d7  xchg ecx, eax
    X86_AT(c, 0x922d7u);
    { uint32_t t = c.r[1]; c.r[1] = c.r[0]; c.r[0] = t; }
    // 0922d8  mov eax, dword ptr [ebx]
    X86_AT(c, 0x922d8u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3])));
    // 0922da  mov edx, dword ptr [ebp + 0xc]
    X86_AT(c, 0x922dau);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0922dd  push esi
    X86_AT(c, 0x922ddu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0922de  push edi
    X86_AT(c, 0x922deu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0922df  mov esi, eax
    X86_AT(c, 0x922dfu);
    c.r[6] = c.r[0];
    // 0922e1  mov edi, edx
    X86_AT(c, 0x922e1u);
    c.r[7] = c.r[2];
    // 0922e3  movsb byte ptr es:[edi], byte ptr [esi]
    X86_AT(c, 0x922e3u);
    x86_string(c, 0, 1, 243, 4, 3);
    // 0922e5  pop edi
    X86_AT(c, 0x922e5u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0922e6  pop esi
    X86_AT(c, 0x922e6u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0922e7  sub edi, dword ptr [ebx + 4]
    X86_AT(c, 0x922e7u);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u))), 0, 4); }
    // 0922ea  mov eax, dword ptr [ebx + 4]
    X86_AT(c, 0x922eau);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)));
    // 0922ed  add dword ptr [ebp - 4], eax
    X86_AT(c, 0x922edu);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 0922f0  mov dword ptr [ebx + 4], 0
    X86_AT(c, 0x922f0u);
    wr32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)), 0x0u);
L_922f7:
    X86_TICK(c, 7);
    // 0922f7  cmp edi, 0x200
    X86_AT(c, 0x922f7u);
    (void)x86_sub(c, c.r[7], 0x200u, 0, 4);
    // 0922fd  jb 0x92335
    X86_AT(c, 0x922fdu);
    if (x86_cc(c, 2)) { goto L_92335; }
    X86_TICK(c, 10);
    // 0922ff  mov esi, edi
    X86_AT(c, 0x922ffu);
    c.r[6] = c.r[7];
    // 092301  shr esi, 9
    X86_AT(c, 0x92301u);
    { uint32_t v = c.r[6]; bool w; uint32_t r = x86_shift(c, 5, v, 0x9u, 4, w); if (w) c.r[6] = r; }
    // 092304  shl esi, 9
    X86_AT(c, 0x92304u);
    { uint32_t v = c.r[6]; bool w; uint32_t r = x86_shift(c, 4, v, 0x9u, 4, w); if (w) c.r[6] = r; }
    // 092307  mov dword ptr [ebp - 0xc], 0
    X86_AT(c, 0x92307u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)), 0x0u);
L_9230e:
    X86_TICK(c, 27);
    // 09230e  push esi
    X86_AT(c, 0x9230eu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 09230f  mov eax, dword ptr [ebp + 0xc]
    X86_AT(c, 0x9230fu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 092312  add eax, dword ptr [ebp - 4]
    X86_AT(c, 0x92312u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))), 0, 4); }
    // 092315  push eax
    X86_AT(c, 0x92315u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 092316  mov al, byte ptr [ebx + 0xe]
    X86_AT(c, 0x92316u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xEu))));
    // 092319  push eax
    X86_AT(c, 0x92319u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 09231a  call 0x94fe0
    X86_AT(c, 0x9231au);
    push32(c, 0x9231fu); x86_call_known(c, 0x94fe0u, f_00094fe0); X86_RET(c, 0x9231fu);
    X86_TICK(c, 25);
    // 09231f  mov dword ptr [ebp - 8], eax
    X86_AT(c, 0x9231fu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), c.r[0]);
    // 092322  add dword ptr [ebp - 0xc], eax
    X86_AT(c, 0x92322u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 092325  sub esi, eax
    X86_AT(c, 0x92325u);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[0], 0, 4); }
    // 092327  add dword ptr [ebp - 4], eax
    X86_AT(c, 0x92327u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 09232a  and esi, esi
    X86_AT(c, 0x9232au);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & c.r[6], 4); }
    // 09232c  je 0x92332
    X86_AT(c, 0x9232cu);
    if (x86_cc(c, 4)) { goto L_92332; }
    X86_TICK(c, 7);
    // 09232e  and eax, eax
    X86_AT(c, 0x9232eu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 092330  jne 0x9230e
    X86_AT(c, 0x92330u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x9230eu); goto L_9230e; }
L_92332:
    X86_TICK(c, 6);
    // 092332  sub edi, dword ptr [ebp - 0xc]
    X86_AT(c, 0x92332u);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u))), 0, 4); }
L_92335:
    X86_TICK(c, 7);
    // 092335  and edi, edi
    X86_AT(c, 0x92335u);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & c.r[7], 4); }
    // 092337  jbe 0x9238e
    X86_AT(c, 0x92337u);
    if (x86_cc(c, 6)) { goto L_9238e; }
    X86_TICK(c, 12);
    // 092339  cmp dword ptr [ebx + 4], 0
    X86_AT(c, 0x92339u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u))), 0x0u, 0, 4);
    // 09233d  jne 0x9235e
    X86_AT(c, 0x9233du);
    if (x86_cc(c, 5)) { goto L_9235e; }
    X86_TICK(c, 12);
    // 09233f  test byte ptr [ebx + 0xc], 0x10
    X86_AT(c, 0x9233fu);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xCu))) & 0x10u, 1);
    // 092343  jne 0x92396
    X86_AT(c, 0x92343u);
    if (x86_cc(c, 5)) { goto L_92396; }
    X86_TICK(c, 20);
    // 092345  push 0x200
    X86_AT(c, 0x92345u);
    { uint32_t v = 0x200u; push32(c, v); }
    // 09234a  push dword ptr [ebx + 8]
    X86_AT(c, 0x9234au);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x8u))); push32(c, v); }
    // 09234d  mov al, byte ptr [ebx + 0xe]
    X86_AT(c, 0x9234du);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xEu))));
    // 092350  push eax
    X86_AT(c, 0x92350u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 092351  call 0x94fe0
    X86_AT(c, 0x92351u);
    push32(c, 0x92356u); x86_call_known(c, 0x94fe0u, f_00094fe0); X86_RET(c, 0x92356u);
    X86_TICK(c, 8);
    // 092356  mov dword ptr [ebx + 4], eax
    X86_AT(c, 0x92356u);
    wr32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)), c.r[0]);
    // 092359  mov eax, dword ptr [ebx + 8]
    X86_AT(c, 0x92359u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x8u)));
    // 09235c  mov dword ptr [ebx], eax
    X86_AT(c, 0x9235cu);
    wr32((c.sbase[3] + (uint32_t)(c.r[3])), c.r[0]);
L_9235e:
    X86_TICK(c, 12);
    // 09235e  cmp dword ptr [ebx + 4], 0
    X86_AT(c, 0x9235eu);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u))), 0x0u, 0, 4);
    // 092362  jle 0x92396
    X86_AT(c, 0x92362u);
    if (x86_cc(c, 14)) { goto L_92396; }
L_92364:
    X86_TICK(c, 13);
    // 092364  mov eax, dword ptr [ebx + 4]
    X86_AT(c, 0x92364u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)));
    // 092367  mov edx, edi
    X86_AT(c, 0x92367u);
    c.r[2] = c.r[7];
    // 092369  cmp edx, eax
    X86_AT(c, 0x92369u);
    (void)x86_sub(c, c.r[2], c.r[0], 0, 4);
    // 09236b  jl 0x9236e
    X86_AT(c, 0x9236bu);
    if (x86_cc(c, 12)) { goto L_9236e; }
    X86_TICK(c, 3);
    // 09236d  xchg edx, eax
    X86_AT(c, 0x9236du);
    { uint32_t t = c.r[2]; c.r[2] = c.r[0]; c.r[0] = t; }
L_9236e:
    X86_TICK(c, 2);
    // 09236e  mov esi, edx
    X86_AT(c, 0x9236eu);
    c.r[6] = c.r[2];
L_92370:
    X86_TICK(c, 62);
    // 092370  mov ecx, esi
    X86_AT(c, 0x92370u);
    c.r[1] = c.r[6];
    // 092372  mov eax, dword ptr [ebx]
    X86_AT(c, 0x92372u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3])));
    // 092374  mov edx, dword ptr [ebp + 0xc]
    X86_AT(c, 0x92374u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 092377  add edx, dword ptr [ebp - 4]
    X86_AT(c, 0x92377u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))), 0, 4); }
    // 09237a  push esi
    X86_AT(c, 0x9237au);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 09237b  push edi
    X86_AT(c, 0x9237bu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 09237c  mov esi, eax
    X86_AT(c, 0x9237cu);
    c.r[6] = c.r[0];
    // 09237e  mov edi, edx
    X86_AT(c, 0x9237eu);
    c.r[7] = c.r[2];
    // 092380  movsb byte ptr es:[edi], byte ptr [esi]
    X86_AT(c, 0x92380u);
    x86_string(c, 0, 1, 243, 4, 3);
    // 092382  pop edi
    X86_AT(c, 0x92382u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 092383  pop esi
    X86_AT(c, 0x92383u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 092384  add dword ptr [ebp - 4], esi
    X86_AT(c, 0x92384u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[6], 0, 4)); }
    // 092387  sub dword ptr [ebx + 4], esi
    X86_AT(c, 0x92387u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)); uint32_t v = rd32(ea); wr32(ea, x86_sub(c, v, c.r[6], 0, 4)); }
    // 09238a  sub edi, esi
    X86_AT(c, 0x9238au);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[6], 0, 4); }
    // 09238c  add dword ptr [ebx], esi
    X86_AT(c, 0x9238cu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3])); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[6], 0, 4)); }
L_9238e:
    X86_TICK(c, 7);
    // 09238e  and edi, edi
    X86_AT(c, 0x9238eu);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & c.r[7], 4); }
    // 092390  ja 0x920c9
    X86_AT(c, 0x92390u);
    if (x86_cc(c, 7)) { X86_POLL(c, 0x920c9u); goto L_920c9; }
L_92396:
    X86_TICK(c, 12);
    // 092396  cmp dword ptr [ebp - 4], 0
    X86_AT(c, 0x92396u);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))), 0x0u, 0, 4);
    // 09239a  jne 0x923a0
    X86_AT(c, 0x9239au);
    if (x86_cc(c, 5)) { goto L_923a0; }
    X86_TICK(c, 7);
    // 09239c  or byte ptr [ebx + 0xc], 0x10
    X86_AT(c, 0x9239cu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3] + 0xCu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | 0x10u, 1)); }
L_923a0:
    X86_TICK(c, 13);
    // 0923a0  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0x923a0u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0923a3  mov dword ptr [0x8a730], eax
    X86_AT(c, 0x923a3u);
    wr32((c.sbase[3] + (uint32_t)(0x8A730u)), c.r[0]);
    // 0923a8  jmp 0x924d8
    X86_AT(c, 0x923a8u);
    goto L_924d8;
L_923ad:
    X86_TICK(c, 14);
    // 0923ad  mov dword ptr [0x8a730], 0
    X86_AT(c, 0x923adu);
    wr32((c.sbase[3] + (uint32_t)(0x8A730u)), 0x0u);
    // 0923b7  test byte ptr [ebx + 0xc], 0x40
    X86_AT(c, 0x923b7u);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xCu))) & 0x40u, 1);
    // 0923bb  je 0x924c3
    X86_AT(c, 0x923bbu);
    if (x86_cc(c, 4)) { goto L_924c3; }
    X86_TICK(c, 12);
    // 0923c1  test byte ptr [ebx + 0xd], 4
    X86_AT(c, 0x923c1u);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xDu))) & 0x4u, 1);
    // 0923c5  jne 0x924c7
    X86_AT(c, 0x923c5u);
    if (x86_cc(c, 5)) { goto L_924c7; }
    X86_TICK(c, 7);
    // 0923cb  jmp 0x92495
    X86_AT(c, 0x923cbu);
    goto L_92495;
L_923d0:
    X86_TICK(c, 19);
    // 0923d0  push 1
    X86_AT(c, 0x923d0u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0923d2  lea eax, [ebp - 0xf]
    X86_AT(c, 0x923d2u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFF1u);
    // 0923d5  push eax
    X86_AT(c, 0x923d5u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0923d6  mov dl, byte ptr [ebx + 0xe]
    X86_AT(c, 0x923d6u);
    s8(c, 2, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xEu))));
    // 0923d9  push edx
    X86_AT(c, 0x923d9u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0923da  call 0x94fe0
    X86_AT(c, 0x923dau);
    push32(c, 0x923dfu); x86_call_known(c, 0x94fe0u, f_00094fe0); X86_RET(c, 0x923dfu);
    X86_TICK(c, 10);
    // 0923df  xchg esi, eax
    X86_AT(c, 0x923dfu);
    { uint32_t t = c.r[6]; c.r[6] = c.r[0]; c.r[0] = t; }
    // 0923e0  and esi, esi
    X86_AT(c, 0x923e0u);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & c.r[6], 4); }
    // 0923e2  je 0x9243a
    X86_AT(c, 0x923e2u);
    if (x86_cc(c, 4)) { goto L_9243a; }
    X86_TICK(c, 12);
    // 0923e4  cmp byte ptr [ebp - 0xf], 0x1a
    X86_AT(c, 0x923e4u);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF1u))), 0x1Au, 0, 1);
    // 0923e8  je 0x9243a
    X86_AT(c, 0x923e8u);
    if (x86_cc(c, 4)) { goto L_9243a; }
L_923ea:
    X86_TICK(c, 15);
    // 0923ea  mov al, byte ptr [ebp - 0xf]
    X86_AT(c, 0x923eau);
    s8(c, 0, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF1u))));
    // 0923ed  cmp al, byte ptr [0x8a72a]
    X86_AT(c, 0x923edu);
    (void)x86_sub(c, g8(c, 0), rd8((c.sbase[3] + (uint32_t)(0x8A72Au))), 0, 1);
    // 0923f3  jne 0x92484
    X86_AT(c, 0x923f3u);
    if (x86_cc(c, 5)) { goto L_92484; }
    X86_TICK(c, 13);
    // 0923f9  mov al, byte ptr [ebx + 0xe]
    X86_AT(c, 0x923f9u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xEu))));
    // 0923fc  push eax
    X86_AT(c, 0x923fcu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0923fd  call 0x95070
    X86_AT(c, 0x923fdu);
    push32(c, 0x92402u); x86_call_known(c, 0x95070u, f_00095070); X86_RET(c, 0x92402u);
    X86_TICK(c, 7);
    // 092402  dec al
    X86_AT(c, 0x92402u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_dec(c, v, 1)); }
    // 092404  je 0x9244e
    X86_AT(c, 0x92404u);
    if (x86_cc(c, 4)) { goto L_9244e; }
    X86_TICK(c, 19);
    // 092406  push 1
    X86_AT(c, 0x92406u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 092408  lea eax, [ebp - 0xf]
    X86_AT(c, 0x92408u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFF1u);
    // 09240b  push eax
    X86_AT(c, 0x9240bu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 09240c  mov dl, byte ptr [ebx + 0xe]
    X86_AT(c, 0x9240cu);
    s8(c, 2, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xEu))));
    // 09240f  push edx
    X86_AT(c, 0x9240fu);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 092410  call 0x94fe0
    X86_AT(c, 0x92410u);
    push32(c, 0x92415u); x86_call_known(c, 0x94fe0u, f_00094fe0); X86_RET(c, 0x92415u);
    X86_TICK(c, 10);
    // 092415  xchg esi, eax
    X86_AT(c, 0x92415u);
    { uint32_t t = c.r[6]; c.r[6] = c.r[0]; c.r[0] = t; }
    // 092416  and esi, esi
    X86_AT(c, 0x92416u);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & c.r[6], 4); }
    // 092418  je 0x92420
    X86_AT(c, 0x92418u);
    if (x86_cc(c, 4)) { goto L_92420; }
    X86_TICK(c, 12);
    // 09241a  cmp byte ptr [ebp - 0xf], 0x1a
    X86_AT(c, 0x9241au);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF1u))), 0x1Au, 0, 1);
    // 09241e  jne 0x92443
    X86_AT(c, 0x9241eu);
    if (x86_cc(c, 5)) { goto L_92443; }
L_92420:
    X86_TICK(c, 28);
    // 092420  mov al, byte ptr [0x8a72a]
    X86_AT(c, 0x92420u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(0x8A72Au))));
    // 092425  mov edx, dword ptr [ebp + 0xc]
    X86_AT(c, 0x92425u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 092428  mov byte ptr [edx], al
    X86_AT(c, 0x92428u);
    wr8((c.sbase[3] + (uint32_t)(c.r[2])), g8(c, 0));
    // 09242a  inc dword ptr [0x8a730]
    X86_AT(c, 0x9242au);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x8A730u)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 092430  cmp byte ptr [ebp - 0xf], 0x1a
    X86_AT(c, 0x92430u);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF1u))), 0x1Au, 0, 1);
    // 092434  jne 0x924c7
    X86_AT(c, 0x92434u);
    if (x86_cc(c, 5)) { goto L_924c7; }
L_9243a:
    X86_TICK(c, 14);
    // 09243a  or byte ptr [ebx + 0xd], 4
    X86_AT(c, 0x9243au);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3] + 0xDu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | 0x4u, 1)); }
    // 09243e  jmp 0x924c7
    X86_AT(c, 0x9243eu);
    goto L_924c7;
L_92443:
    X86_TICK(c, 15);
    // 092443  mov al, byte ptr [ebp - 0xf]
    X86_AT(c, 0x92443u);
    s8(c, 0, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF1u))));
    // 092446  cmp al, byte ptr [0x8a72b]
    X86_AT(c, 0x92446u);
    (void)x86_sub(c, g8(c, 0), rd8((c.sbase[3] + (uint32_t)(0x8A72Bu))), 0, 1);
    // 09244c  jne 0x92456
    X86_AT(c, 0x9244cu);
    if (x86_cc(c, 5)) { goto L_92456; }
L_9244e:
    X86_TICK(c, 13);
    // 09244e  mov eax, dword ptr [ebp + 0xc]
    X86_AT(c, 0x9244eu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 092451  mov byte ptr [eax], 0xa
    X86_AT(c, 0x92451u);
    wr8((c.sbase[3] + (uint32_t)(c.r[0])), 0xAu);
    // 092454  jmp 0x9248c
    X86_AT(c, 0x92454u);
    goto L_9248c;
L_92456:
    X86_TICK(c, 33);
    // 092456  mov al, byte ptr [0x8a72a]
    X86_AT(c, 0x92456u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(0x8A72Au))));
    // 09245b  mov edx, dword ptr [ebp + 0xc]
    X86_AT(c, 0x9245bu);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 09245e  mov byte ptr [edx], al
    X86_AT(c, 0x9245eu);
    wr8((c.sbase[3] + (uint32_t)(c.r[2])), g8(c, 0));
    // 092460  inc dword ptr [0x8a730]
    X86_AT(c, 0x92460u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x8A730u)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 092466  inc dword ptr [ebp + 0xc]
    X86_AT(c, 0x92466u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 092469  cmp edi, dword ptr [0x8a730]
    X86_AT(c, 0x92469u);
    (void)x86_sub(c, c.r[7], rd32((c.sbase[3] + (uint32_t)(0x8A730u))), 0, 4);
    // 09246f  jne 0x923ea
    X86_AT(c, 0x9246fu);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x923eau); goto L_923ea; }
    X86_TICK(c, 17);
    // 092475  push 1
    X86_AT(c, 0x92475u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 092477  push 0xffffffff
    X86_AT(c, 0x92477u);
    { uint32_t v = 0xFFFFFFFFu; push32(c, v); }
    // 092479  mov al, byte ptr [ebx + 0xe]
    X86_AT(c, 0x92479u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xEu))));
    // 09247c  push eax
    X86_AT(c, 0x9247cu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 09247d  call 0x950b8
    X86_AT(c, 0x9247du);
    push32(c, 0x92482u); x86_call_known(c, 0x950b8u, f_000950b8); X86_RET(c, 0x92482u);
    X86_TICK(c, 7);
    // 092482  jmp 0x924c7
    X86_AT(c, 0x92482u);
    goto L_924c7;
L_92484:
    X86_TICK(c, 10);
    // 092484  mov al, byte ptr [ebp - 0xf]
    X86_AT(c, 0x92484u);
    s8(c, 0, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF1u))));
    // 092487  mov edx, dword ptr [ebp + 0xc]
    X86_AT(c, 0x92487u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 09248a  mov byte ptr [edx], al
    X86_AT(c, 0x9248au);
    wr8((c.sbase[3] + (uint32_t)(c.r[2])), g8(c, 0));
L_9248c:
    X86_TICK(c, 12);
    // 09248c  inc dword ptr [0x8a730]
    X86_AT(c, 0x9248cu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x8A730u)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 092492  inc dword ptr [ebp + 0xc]
    X86_AT(c, 0x92492u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
L_92495:
    X86_TICK(c, 11);
    // 092495  cmp edi, dword ptr [0x8a730]
    X86_AT(c, 0x92495u);
    (void)x86_sub(c, c.r[7], rd32((c.sbase[3] + (uint32_t)(0x8A730u))), 0, 4);
    // 09249b  jbe 0x924c7
    X86_AT(c, 0x9249bu);
    if (x86_cc(c, 6)) { goto L_924c7; }
    X86_TICK(c, 7);
    // 09249d  jmp 0x923d0
    X86_AT(c, 0x9249du);
    X86_POLL(c, 0x923d0u); goto L_923d0;
L_924a2:
    X86_TICK(c, 27);
    // 0924a2  push edi
    X86_AT(c, 0x924a2u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0924a3  mov eax, dword ptr [ebp + 0xc]
    X86_AT(c, 0x924a3u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0924a6  add eax, dword ptr [0x8a730]
    X86_AT(c, 0x924a6u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[3] + (uint32_t)(0x8A730u))), 0, 4); }
    // 0924ac  push eax
    X86_AT(c, 0x924acu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0924ad  mov al, byte ptr [ebx + 0xe]
    X86_AT(c, 0x924adu);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xEu))));
    // 0924b0  push eax
    X86_AT(c, 0x924b0u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0924b1  call 0x94fe0
    X86_AT(c, 0x924b1u);
    push32(c, 0x924b6u); x86_call_known(c, 0x94fe0u, f_00094fe0); X86_RET(c, 0x924b6u);
    X86_TICK(c, 10);
    // 0924b6  xchg esi, eax
    X86_AT(c, 0x924b6u);
    { uint32_t t = c.r[6]; c.r[6] = c.r[0]; c.r[0] = t; }
    // 0924b7  and esi, esi
    X86_AT(c, 0x924b7u);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & c.r[6], 4); }
    // 0924b9  je 0x924c7
    X86_AT(c, 0x924b9u);
    if (x86_cc(c, 4)) { goto L_924c7; }
    X86_TICK(c, 9);
    // 0924bb  add dword ptr [0x8a730], esi
    X86_AT(c, 0x924bbu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x8A730u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[6], 0, 4)); }
    // 0924c1  sub edi, esi
    X86_AT(c, 0x924c1u);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[6], 0, 4); }
L_924c3:
    X86_TICK(c, 7);
    // 0924c3  and edi, edi
    X86_AT(c, 0x924c3u);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & c.r[7], 4); }
    // 0924c5  ja 0x924a2
    X86_AT(c, 0x924c5u);
    if (x86_cc(c, 7)) { X86_POLL(c, 0x924a2u); goto L_924a2; }
L_924c7:
    X86_TICK(c, 12);
    // 0924c7  cmp dword ptr [0x8a730], 0
    X86_AT(c, 0x924c7u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0x8A730u))), 0x0u, 0, 4);
    // 0924ce  jne 0x924d8
    X86_AT(c, 0x924ceu);
    if (x86_cc(c, 5)) { goto L_924d8; }
    X86_TICK(c, 7);
    // 0924d0  and edi, edi
    X86_AT(c, 0x924d0u);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & c.r[7], 4); }
    // 0924d2  jbe 0x924d8
    X86_AT(c, 0x924d2u);
    if (x86_cc(c, 6)) { goto L_924d8; }
    X86_TICK(c, 7);
    // 0924d4  or byte ptr [ebx + 0xc], 0x10
    X86_AT(c, 0x924d4u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3] + 0xCu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | 0x10u, 1)); }
L_924d8:
    X86_TICK(c, 12);
    // 0924d8  cmp word ptr [0x8aabe], 0
    X86_AT(c, 0x924d8u);
    (void)x86_sub(c, rd16((c.sbase[3] + (uint32_t)(0x8AABEu))), 0x0u, 0, 2);
    // 0924e0  je 0x924e8
    X86_AT(c, 0x924e0u);
    if (x86_cc(c, 4)) { goto L_924e8; }
    X86_TICK(c, 14);
    // 0924e2  or byte ptr [ebx + 0xc], 0x20
    X86_AT(c, 0x924e2u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3] + 0xCu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | 0x20u, 1)); }
    // 0924e6  jmp 0x924f2
    X86_AT(c, 0x924e6u);
    goto L_924f2;
L_924e8:
    X86_TICK(c, 6);
    // 0924e8  mov ax, word ptr [ebp - 0xe]
    X86_AT(c, 0x924e8u);
    s16(c, 0, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF2u))));
    // 0924ec  mov word ptr [0x8aabe], ax
    X86_AT(c, 0x924ecu);
    wr16((c.sbase[3] + (uint32_t)(0x8AABEu)), (c.r[0] & 0xFFFFu));
L_924f2:
    X86_TICK(c, 28);
    // 0924f2  pop edi
    X86_AT(c, 0x924f2u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0924f3  pop esi
    X86_AT(c, 0x924f3u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0924f4  pop ebx
    X86_AT(c, 0x924f4u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0924f5  leave 
    X86_AT(c, 0x924f5u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0924f6  ret 0xc
    X86_AT(c, 0x924f6u);
    c.eip = pop32(c); c.r[4] += 0xCu; return;
    x86_fault(c, 0x92098u, "ran off the end of a function");
}
void f_00092370(X86Cpu& c) {
    goto L_92370;
L_920c9:
    X86_TICK(c, 12);
    // 0920c9  test byte ptr [ebx + 0xc], 0x40
    X86_AT(c, 0x920c9u);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xCu))) & 0x40u, 1);
    // 0920cd  je 0x922c6
    X86_AT(c, 0x920cdu);
    if (x86_cc(c, 4)) { goto L_922c6; }
    X86_TICK(c, 12);
    // 0920d3  cmp dword ptr [ebx + 4], 1
    X86_AT(c, 0x920d3u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u))), 0x1u, 0, 4);
    // 0920d7  jne 0x9211e
    X86_AT(c, 0x920d7u);
    if (x86_cc(c, 5)) { goto L_9211e; }
    X86_TICK(c, 12);
    // 0920d9  cmp word ptr [ebx + 0x10], 0xfffe
    X86_AT(c, 0x920d9u);
    (void)x86_sub(c, rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u))), 0xFFFEu, 0, 2);
    // 0920de  jne 0x9211e
    X86_AT(c, 0x920deu);
    if (x86_cc(c, 5)) { goto L_9211e; }
    X86_TICK(c, 12);
    // 0920e0  test byte ptr [ebx + 0xd], 4
    X86_AT(c, 0x920e0u);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xDu))) & 0x4u, 1);
    // 0920e4  jne 0x92364
    X86_AT(c, 0x920e4u);
    if (x86_cc(c, 5)) { goto L_92364; }
    X86_TICK(c, 33);
    // 0920ea  mov al, byte ptr [0x8a72a]
    X86_AT(c, 0x920eau);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(0x8A72Au))));
    // 0920ef  mov edx, dword ptr [ebx + 8]
    X86_AT(c, 0x920efu);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x8u)));
    // 0920f2  mov byte ptr [edx], al
    X86_AT(c, 0x920f2u);
    wr8((c.sbase[3] + (uint32_t)(c.r[2])), g8(c, 0));
    // 0920f4  push 0x1ff
    X86_AT(c, 0x920f4u);
    { uint32_t v = 0x1FFu; push32(c, v); }
    // 0920f9  mov eax, dword ptr [ebx + 8]
    X86_AT(c, 0x920f9u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x8u)));
    // 0920fc  inc eax
    X86_AT(c, 0x920fcu);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0920fd  push eax
    X86_AT(c, 0x920fdu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0920fe  mov al, byte ptr [ebx + 0xe]
    X86_AT(c, 0x920feu);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xEu))));
    // 092101  push eax
    X86_AT(c, 0x92101u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 092102  call 0x94fe0
    X86_AT(c, 0x92102u);
    push32(c, 0x92107u); x86_call_known(c, 0x94fe0u, f_00094fe0); X86_RET(c, 0x92107u);
    X86_TICK(c, 11);
    // 092107  inc eax
    X86_AT(c, 0x92107u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 092108  mov dword ptr [ebx + 4], eax
    X86_AT(c, 0x92108u);
    wr32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)), c.r[0]);
    // 09210b  dec eax
    X86_AT(c, 0x9210bu);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 09210c  jne 0x92156
    X86_AT(c, 0x9210cu);
    if (x86_cc(c, 5)) { goto L_92156; }
    X86_TICK(c, 15);
    // 09210e  mov eax, dword ptr [ebx + 8]
    X86_AT(c, 0x9210eu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x8u)));
    // 092111  mov dword ptr [ebx], eax
    X86_AT(c, 0x92111u);
    wr32((c.sbase[3] + (uint32_t)(c.r[3])), c.r[0]);
    // 092113  mov word ptr [ebx + 0x10], 0x200
    X86_AT(c, 0x92113u);
    wr16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u)), 0x200u);
    // 092119  jmp 0x92364
    X86_AT(c, 0x92119u);
    goto L_92364;
L_9211e:
    X86_TICK(c, 12);
    // 09211e  cmp dword ptr [ebx + 4], 0
    X86_AT(c, 0x9211eu);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u))), 0x0u, 0, 4);
    // 092122  jne 0x9219b
    X86_AT(c, 0x92122u);
    if (x86_cc(c, 5)) { goto L_9219b; }
    X86_TICK(c, 12);
    // 092128  test byte ptr [ebx + 0xc], 0x10
    X86_AT(c, 0x92128u);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xCu))) & 0x10u, 1);
    // 09212c  jne 0x92396
    X86_AT(c, 0x9212cu);
    if (x86_cc(c, 5)) { goto L_92396; }
    X86_TICK(c, 12);
    // 092132  test byte ptr [ebx + 0xd], 4
    X86_AT(c, 0x92132u);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xDu))) & 0x4u, 1);
    // 092136  jne 0x9214c
    X86_AT(c, 0x92136u);
    if (x86_cc(c, 5)) { goto L_9214c; }
    X86_TICK(c, 20);
    // 092138  push 0x200
    X86_AT(c, 0x92138u);
    { uint32_t v = 0x200u; push32(c, v); }
    // 09213d  push dword ptr [ebx + 8]
    X86_AT(c, 0x9213du);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x8u))); push32(c, v); }
    // 092140  mov al, byte ptr [ebx + 0xe]
    X86_AT(c, 0x92140u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xEu))));
    // 092143  push eax
    X86_AT(c, 0x92143u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 092144  call 0x94fe0
    X86_AT(c, 0x92144u);
    push32(c, 0x92149u); x86_call_known(c, 0x94fe0u, f_00094fe0); X86_RET(c, 0x92149u);
    X86_TICK(c, 2);
    // 092149  mov dword ptr [ebx + 4], eax
    X86_AT(c, 0x92149u);
    wr32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)), c.r[0]);
L_9214c:
    X86_TICK(c, 12);
    // 09214c  cmp dword ptr [ebx + 4], 0
    X86_AT(c, 0x9214cu);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u))), 0x0u, 0, 4);
    // 092150  je 0x92396
    X86_AT(c, 0x92150u);
    if (x86_cc(c, 4)) { goto L_92396; }
L_92156:
    X86_TICK(c, 28);
    // 092156  mov edx, dword ptr [ebx + 4]
    X86_AT(c, 0x92156u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)));
    // 092159  mov al, 0x1a
    X86_AT(c, 0x92159u);
    s8(c, 0, 0x1Au);
    // 09215b  mov ecx, dword ptr [ebx + 8]
    X86_AT(c, 0x9215bu);
    c.r[1] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x8u)));
    // 09215e  push edi
    X86_AT(c, 0x9215eu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 09215f  mov edi, ecx
    X86_AT(c, 0x9215fu);
    c.r[7] = c.r[1];
    // 092161  mov ecx, edx
    X86_AT(c, 0x92161u);
    c.r[1] = c.r[2];
    // 092163  scasb al, byte ptr es:[edi]
    X86_AT(c, 0x92163u);
    x86_string(c, 4, 1, 242, 4, 3);
    // 092165  jne 0x9216a
    X86_AT(c, 0x92165u);
    if (x86_cc(c, 5)) { goto L_9216a; }
    X86_TICK(c, 4);
    // 092167  inc ecx
    X86_AT(c, 0x92167u);
    { uint32_t v = c.r[1]; c.r[1] = x86_inc(c, v, 4); }
    // 092168  sub edx, ecx
    X86_AT(c, 0x92168u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[1], 0, 4); }
L_9216a:
    X86_TICK(c, 17);
    // 09216a  pop edi
    X86_AT(c, 0x9216au);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 09216b  mov word ptr [ebp - 0x10], dx
    X86_AT(c, 0x9216bu);
    wr16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u)), (c.r[2] & 0xFFFFu));
    // 09216f  cmp edx, dword ptr [ebx + 4]
    X86_AT(c, 0x9216fu);
    (void)x86_sub(c, c.r[2], rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u))), 0, 4);
    // 092172  je 0x92190
    X86_AT(c, 0x92172u);
    if (x86_cc(c, 4)) { goto L_92190; }
    X86_TICK(c, 32);
    // 092174  or byte ptr [ebx + 0xd], 4
    X86_AT(c, 0x92174u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3] + 0xDu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | 0x4u, 1)); }
    // 092178  push 1
    X86_AT(c, 0x92178u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 09217a  mov dword ptr [ebp - 0x14], edx
    X86_AT(c, 0x9217au);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu)), c.r[2]);
    // 09217d  sub edx, dword ptr [ebx + 4]
    X86_AT(c, 0x9217du);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u))), 0, 4); }
    // 092180  push edx
    X86_AT(c, 0x92180u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 092181  mov al, byte ptr [ebx + 0xe]
    X86_AT(c, 0x92181u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xEu))));
    // 092184  push eax
    X86_AT(c, 0x92184u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 092185  call 0x950b8
    X86_AT(c, 0x92185u);
    push32(c, 0x9218au); x86_call_known(c, 0x950b8u, f_000950b8); X86_RET(c, 0x9218au);
    X86_TICK(c, 6);
    // 09218a  mov eax, dword ptr [ebp - 0x14]
    X86_AT(c, 0x9218au);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu)));
    // 09218d  mov dword ptr [ebx + 4], eax
    X86_AT(c, 0x9218du);
    wr32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)), c.r[0]);
L_92190:
    X86_TICK(c, 8);
    // 092190  mov eax, dword ptr [ebx + 8]
    X86_AT(c, 0x92190u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x8u)));
    // 092193  mov dword ptr [ebx], eax
    X86_AT(c, 0x92193u);
    wr32((c.sbase[3] + (uint32_t)(c.r[3])), c.r[0]);
    // 092195  mov word ptr [ebx + 0x10], 0xffff
    X86_AT(c, 0x92195u);
    wr16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u)), 0xFFFFu);
L_9219b:
    X86_TICK(c, 12);
    // 09219b  cmp dword ptr [ebx + 4], 0
    X86_AT(c, 0x9219bu);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u))), 0x0u, 0, 4);
    // 09219f  jle 0x9238e
    X86_AT(c, 0x9219fu);
    if (x86_cc(c, 14)) { goto L_9238e; }
    X86_TICK(c, 11);
    // 0921a5  mov ax, word ptr [ebx + 0x10]
    X86_AT(c, 0x921a5u);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u))));
    // 0921a9  cmp ax, 0xffff
    X86_AT(c, 0x921a9u);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), 0xFFFFu, 0, 2);
    // 0921ad  je 0x921bd
    X86_AT(c, 0x921adu);
    if (x86_cc(c, 4)) { goto L_921bd; }
    X86_TICK(c, 20);
    // 0921af  movsx eax, ax
    X86_AT(c, 0x921afu);
    c.r[0] = (uint32_t)(int32_t)(int16_t)(c.r[0] & 0xFFFFu);
    // 0921b2  add eax, dword ptr [ebx + 8]
    X86_AT(c, 0x921b2u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x8u))), 0, 4); }
    // 0921b5  cmp eax, dword ptr [ebx]
    X86_AT(c, 0x921b5u);
    (void)x86_sub(c, c.r[0], rd32((c.sbase[3] + (uint32_t)(c.r[3]))), 0, 4);
    // 0921b7  jge 0x92254
    X86_AT(c, 0x921b7u);
    if (x86_cc(c, 13)) { goto L_92254; }
L_921bd:
    X86_TICK(c, 30);
    // 0921bd  mov edx, dword ptr [ebx + 4]
    X86_AT(c, 0x921bdu);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)));
    // 0921c0  mov al, byte ptr [0x8a72a]
    X86_AT(c, 0x921c0u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(0x8A72Au))));
    // 0921c5  mov ecx, dword ptr [ebx]
    X86_AT(c, 0x921c5u);
    c.r[1] = rd32((c.sbase[3] + (uint32_t)(c.r[3])));
    // 0921c7  push edi
    X86_AT(c, 0x921c7u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0921c8  mov edi, ecx
    X86_AT(c, 0x921c8u);
    c.r[7] = c.r[1];
    // 0921ca  mov ecx, edx
    X86_AT(c, 0x921cau);
    c.r[1] = c.r[2];
    // 0921cc  scasb al, byte ptr es:[edi]
    X86_AT(c, 0x921ccu);
    x86_string(c, 4, 1, 242, 4, 3);
    // 0921ce  jne 0x921d3
    X86_AT(c, 0x921ceu);
    if (x86_cc(c, 5)) { goto L_921d3; }
    X86_TICK(c, 4);
    // 0921d0  inc ecx
    X86_AT(c, 0x921d0u);
    { uint32_t v = c.r[1]; c.r[1] = x86_inc(c, v, 4); }
    // 0921d1  sub edx, ecx
    X86_AT(c, 0x921d1u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[1], 0, 4); }
L_921d3:
    X86_TICK(c, 13);
    // 0921d3  pop edi
    X86_AT(c, 0x921d3u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0921d4  mov word ptr [ebx + 0x10], dx
    X86_AT(c, 0x921d4u);
    wr16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u)), (c.r[2] & 0xFFFFu));
    // 0921d8  jmp 0x9220d
    X86_AT(c, 0x921d8u);
    goto L_9220d;
L_921da:
    X86_TICK(c, 59);
    // 0921da  movsx eax, word ptr [ebx + 0x10]
    X86_AT(c, 0x921dau);
    c.r[0] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u)));
    // 0921de  add eax, dword ptr [ebx]
    X86_AT(c, 0x921deu);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[3]))), 0, 4); }
    // 0921e0  inc eax
    X86_AT(c, 0x921e0u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0921e1  mov dx, word ptr [ebx + 0x10]
    X86_AT(c, 0x921e1u);
    s16(c, 2, rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u))));
    // 0921e5  inc edx
    X86_AT(c, 0x921e5u);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
    // 0921e6  movsx edx, dx
    X86_AT(c, 0x921e6u);
    c.r[2] = (uint32_t)(int32_t)(int16_t)(c.r[2] & 0xFFFFu);
    // 0921e9  mov ecx, dword ptr [ebx + 4]
    X86_AT(c, 0x921e9u);
    c.r[1] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)));
    // 0921ec  sub ecx, edx
    X86_AT(c, 0x921ecu);
    { uint32_t v = c.r[1]; c.r[1] = x86_sub(c, v, c.r[2], 0, 4); }
    // 0921ee  mov edx, ecx
    X86_AT(c, 0x921eeu);
    c.r[2] = c.r[1];
    // 0921f0  mov dword ptr [ebp - 0x14], eax
    X86_AT(c, 0x921f0u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu)), c.r[0]);
    // 0921f3  mov al, byte ptr [0x8a72a]
    X86_AT(c, 0x921f3u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(0x8A72Au))));
    // 0921f8  mov ecx, dword ptr [ebp - 0x14]
    X86_AT(c, 0x921f8u);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu)));
    // 0921fb  push edi
    X86_AT(c, 0x921fbu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0921fc  mov edi, ecx
    X86_AT(c, 0x921fcu);
    c.r[7] = c.r[1];
    // 0921fe  mov ecx, edx
    X86_AT(c, 0x921feu);
    c.r[1] = c.r[2];
    // 092200  scasb al, byte ptr es:[edi]
    X86_AT(c, 0x92200u);
    x86_string(c, 4, 1, 242, 4, 3);
    // 092202  jne 0x92207
    X86_AT(c, 0x92202u);
    if (x86_cc(c, 5)) { goto L_92207; }
    X86_TICK(c, 4);
    // 092204  inc ecx
    X86_AT(c, 0x92204u);
    { uint32_t v = c.r[1]; c.r[1] = x86_inc(c, v, 4); }
    // 092205  sub edx, ecx
    X86_AT(c, 0x92205u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[1], 0, 4); }
L_92207:
    X86_TICK(c, 13);
    // 092207  pop edi
    X86_AT(c, 0x92207u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 092208  inc edx
    X86_AT(c, 0x92208u);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
    // 092209  add word ptr [ebx + 0x10], dx
    X86_AT(c, 0x92209u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3] + 0x10u)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[2] & 0xFFFFu), 0, 2)); }
L_9220d:
    X86_TICK(c, 19);
    // 09220d  movsx eax, word ptr [ebx + 0x10]
    X86_AT(c, 0x9220du);
    c.r[0] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u)));
    // 092211  mov edx, dword ptr [ebx + 4]
    X86_AT(c, 0x92211u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)));
    // 092214  dec edx
    X86_AT(c, 0x92214u);
    { uint32_t v = c.r[2]; c.r[2] = x86_dec(c, v, 4); }
    // 092215  cmp edx, eax
    X86_AT(c, 0x92215u);
    (void)x86_sub(c, c.r[2], c.r[0], 0, 4);
    // 092217  jle 0x92226
    X86_AT(c, 0x92217u);
    if (x86_cc(c, 14)) { goto L_92226; }
    X86_TICK(c, 23);
    // 092219  add eax, dword ptr [ebx]
    X86_AT(c, 0x92219u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[3]))), 0, 4); }
    // 09221b  inc eax
    X86_AT(c, 0x9221bu);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 09221c  mov al, byte ptr [eax]
    X86_AT(c, 0x9221cu);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[0]))));
    // 09221e  cmp al, byte ptr [0x8a72b]
    X86_AT(c, 0x9221eu);
    (void)x86_sub(c, g8(c, 0), rd8((c.sbase[3] + (uint32_t)(0x8A72Bu))), 0, 1);
    // 092224  jne 0x921da
    X86_AT(c, 0x92224u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x921dau); goto L_921da; }
L_92226:
    X86_TICK(c, 17);
    // 092226  movsx eax, word ptr [ebx + 0x10]
    X86_AT(c, 0x92226u);
    c.r[0] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u)));
    // 09222a  cmp eax, dword ptr [ebx + 4]
    X86_AT(c, 0x9222au);
    (void)x86_sub(c, c.r[0], rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u))), 0, 4);
    // 09222d  jne 0x92237
    X86_AT(c, 0x9222du);
    if (x86_cc(c, 5)) { goto L_92237; }
    X86_TICK(c, 9);
    // 09222f  mov word ptr [ebx + 0x10], 0x200
    X86_AT(c, 0x9222fu);
    wr16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u)), 0x200u);
    // 092235  jmp 0x92254
    X86_AT(c, 0x92235u);
    goto L_92254;
L_92237:
    X86_TICK(c, 19);
    // 092237  movsx eax, word ptr [ebx + 0x10]
    X86_AT(c, 0x92237u);
    c.r[0] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u)));
    // 09223b  mov edx, dword ptr [ebx + 4]
    X86_AT(c, 0x9223bu);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)));
    // 09223e  dec edx
    X86_AT(c, 0x9223eu);
    { uint32_t v = c.r[2]; c.r[2] = x86_dec(c, v, 4); }
    // 09223f  cmp edx, eax
    X86_AT(c, 0x9223fu);
    (void)x86_sub(c, c.r[2], c.r[0], 0, 4);
    // 092241  jne 0x9224b
    X86_AT(c, 0x92241u);
    if (x86_cc(c, 5)) { goto L_9224b; }
    X86_TICK(c, 9);
    // 092243  mov word ptr [ebx + 0x10], 0xfffe
    X86_AT(c, 0x92243u);
    wr16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u)), 0xFFFEu);
    // 092249  jmp 0x92254
    X86_AT(c, 0x92249u);
    goto L_92254;
L_9224b:
    X86_TICK(c, 17);
    // 09224b  mov eax, dword ptr [ebx]
    X86_AT(c, 0x9224bu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3])));
    // 09224d  sub eax, dword ptr [ebx + 8]
    X86_AT(c, 0x9224du);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x8u))), 0, 4); }
    // 092250  add word ptr [ebx + 0x10], ax
    X86_AT(c, 0x92250u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3] + 0x10u)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
L_92254:
    X86_TICK(c, 12);
    // 092254  cmp word ptr [ebx + 0x10], 0x200
    X86_AT(c, 0x92254u);
    (void)x86_sub(c, rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u))), 0x200u, 0, 2);
    // 09225a  je 0x92364
    X86_AT(c, 0x9225au);
    if (x86_cc(c, 4)) { goto L_92364; }
    X86_TICK(c, 12);
    // 092260  cmp word ptr [ebx + 0x10], 0xfffe
    X86_AT(c, 0x92260u);
    (void)x86_sub(c, rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u))), 0xFFFEu, 0, 2);
    // 092265  jne 0x92275
    X86_AT(c, 0x92265u);
    if (x86_cc(c, 5)) { goto L_92275; }
    X86_TICK(c, 11);
    // 092267  cmp edi, dword ptr [ebx + 4]
    X86_AT(c, 0x92267u);
    (void)x86_sub(c, c.r[7], rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u))), 0, 4);
    // 09226a  jl 0x922bf
    X86_AT(c, 0x9226au);
    if (x86_cc(c, 12)) { goto L_922bf; }
    X86_TICK(c, 13);
    // 09226c  mov esi, dword ptr [ebx + 4]
    X86_AT(c, 0x9226cu);
    c.r[6] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)));
    // 09226f  dec esi
    X86_AT(c, 0x9226fu);
    { uint32_t v = c.r[6]; c.r[6] = x86_dec(c, v, 4); }
    // 092270  jmp 0x92370
    X86_AT(c, 0x92270u);
    goto L_92370;
L_92275:
    X86_TICK(c, 25);
    // 092275  mov eax, dword ptr [ebx]
    X86_AT(c, 0x92275u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3])));
    // 092277  sub eax, dword ptr [ebx + 8]
    X86_AT(c, 0x92277u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x8u))), 0, 4); }
    // 09227a  movsx esi, word ptr [ebx + 0x10]
    X86_AT(c, 0x9227au);
    c.r[6] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u)));
    // 09227e  sub esi, eax
    X86_AT(c, 0x9227eu);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[0], 0, 4); }
    // 092280  cmp edi, esi
    X86_AT(c, 0x92280u);
    (void)x86_sub(c, c.r[7], c.r[6], 0, 4);
    // 092282  jbe 0x922bf
    X86_AT(c, 0x92282u);
    if (x86_cc(c, 6)) { goto L_922bf; }
    X86_TICK(c, 87);
    // 092284  mov ecx, esi
    X86_AT(c, 0x92284u);
    c.r[1] = c.r[6];
    // 092286  mov eax, dword ptr [ebx]
    X86_AT(c, 0x92286u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3])));
    // 092288  mov edx, dword ptr [ebp + 0xc]
    X86_AT(c, 0x92288u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 09228b  mov dword ptr [ebp - 0x14], edi
    X86_AT(c, 0x9228bu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu)), c.r[7]);
    // 09228e  mov edi, dword ptr [ebp - 4]
    X86_AT(c, 0x9228eu);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 092291  lea edx, [edx + edi*1]
    X86_AT(c, 0x92291u);
    c.r[2] = (uint32_t)(c.r[2] + c.r[7]);
    // 092294  push esi
    X86_AT(c, 0x92294u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 092295  push edi
    X86_AT(c, 0x92295u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 092296  mov esi, eax
    X86_AT(c, 0x92296u);
    c.r[6] = c.r[0];
    // 092298  mov edi, edx
    X86_AT(c, 0x92298u);
    c.r[7] = c.r[2];
    // 09229a  movsb byte ptr es:[edi], byte ptr [esi]
    X86_AT(c, 0x9229au);
    x86_string(c, 0, 1, 243, 4, 3);
    // 09229c  pop edi
    X86_AT(c, 0x9229cu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 09229d  pop esi
    X86_AT(c, 0x9229du);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 09229e  add edi, esi
    X86_AT(c, 0x9229eu);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, c.r[6], 0, 4); }
    // 0922a0  mov eax, dword ptr [ebp + 0xc]
    X86_AT(c, 0x922a0u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0922a3  mov byte ptr [eax + edi*1], 0xa
    X86_AT(c, 0x922a3u);
    wr8((c.sbase[3] + (uint32_t)(c.r[0] + c.r[7])), 0xAu);
    // 0922a7  lea eax, [esi + 1]
    X86_AT(c, 0x922a7u);
    c.r[0] = (uint32_t)(c.r[6] + 0x1u);
    // 0922aa  add dword ptr [ebp - 4], eax
    X86_AT(c, 0x922aau);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 0922ad  mov edi, dword ptr [ebp - 0x14]
    X86_AT(c, 0x922adu);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu)));
    // 0922b0  sub edi, eax
    X86_AT(c, 0x922b0u);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0922b2  lea eax, [esi + 2]
    X86_AT(c, 0x922b2u);
    c.r[0] = (uint32_t)(c.r[6] + 0x2u);
    // 0922b5  sub dword ptr [ebx + 4], eax
    X86_AT(c, 0x922b5u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)); uint32_t v = rd32(ea); wr32(ea, x86_sub(c, v, c.r[0], 0, 4)); }
    // 0922b8  add dword ptr [ebx], eax
    X86_AT(c, 0x922b8u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3])); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 0922ba  jmp 0x9238e
    X86_AT(c, 0x922bau);
    goto L_9238e;
L_922bf:
    X86_TICK(c, 9);
    // 0922bf  mov esi, edi
    X86_AT(c, 0x922bfu);
    c.r[6] = c.r[7];
    // 0922c1  jmp 0x92370
    X86_AT(c, 0x922c1u);
    goto L_92370;
L_922c6:
    X86_TICK(c, 13);
    // 0922c6  mov word ptr [ebx + 0x10], 0xffff
    X86_AT(c, 0x922c6u);
    wr16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u)), 0xFFFFu);
    // 0922cc  mov eax, dword ptr [ebx + 4]
    X86_AT(c, 0x922ccu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)));
    // 0922cf  cmp edi, eax
    X86_AT(c, 0x922cfu);
    (void)x86_sub(c, c.r[7], c.r[0], 0, 4);
    // 0922d1  jl 0x922f7
    X86_AT(c, 0x922d1u);
    if (x86_cc(c, 12)) { goto L_922f7; }
    X86_TICK(c, 7);
    // 0922d3  and eax, eax
    X86_AT(c, 0x922d3u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0922d5  jle 0x922f7
    X86_AT(c, 0x922d5u);
    if (x86_cc(c, 14)) { goto L_922f7; }
    X86_TICK(c, 53);
    // 0922d7  xchg ecx, eax
    X86_AT(c, 0x922d7u);
    { uint32_t t = c.r[1]; c.r[1] = c.r[0]; c.r[0] = t; }
    // 0922d8  mov eax, dword ptr [ebx]
    X86_AT(c, 0x922d8u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3])));
    // 0922da  mov edx, dword ptr [ebp + 0xc]
    X86_AT(c, 0x922dau);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0922dd  push esi
    X86_AT(c, 0x922ddu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0922de  push edi
    X86_AT(c, 0x922deu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0922df  mov esi, eax
    X86_AT(c, 0x922dfu);
    c.r[6] = c.r[0];
    // 0922e1  mov edi, edx
    X86_AT(c, 0x922e1u);
    c.r[7] = c.r[2];
    // 0922e3  movsb byte ptr es:[edi], byte ptr [esi]
    X86_AT(c, 0x922e3u);
    x86_string(c, 0, 1, 243, 4, 3);
    // 0922e5  pop edi
    X86_AT(c, 0x922e5u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0922e6  pop esi
    X86_AT(c, 0x922e6u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0922e7  sub edi, dword ptr [ebx + 4]
    X86_AT(c, 0x922e7u);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u))), 0, 4); }
    // 0922ea  mov eax, dword ptr [ebx + 4]
    X86_AT(c, 0x922eau);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)));
    // 0922ed  add dword ptr [ebp - 4], eax
    X86_AT(c, 0x922edu);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 0922f0  mov dword ptr [ebx + 4], 0
    X86_AT(c, 0x922f0u);
    wr32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)), 0x0u);
L_922f7:
    X86_TICK(c, 7);
    // 0922f7  cmp edi, 0x200
    X86_AT(c, 0x922f7u);
    (void)x86_sub(c, c.r[7], 0x200u, 0, 4);
    // 0922fd  jb 0x92335
    X86_AT(c, 0x922fdu);
    if (x86_cc(c, 2)) { goto L_92335; }
    X86_TICK(c, 10);
    // 0922ff  mov esi, edi
    X86_AT(c, 0x922ffu);
    c.r[6] = c.r[7];
    // 092301  shr esi, 9
    X86_AT(c, 0x92301u);
    { uint32_t v = c.r[6]; bool w; uint32_t r = x86_shift(c, 5, v, 0x9u, 4, w); if (w) c.r[6] = r; }
    // 092304  shl esi, 9
    X86_AT(c, 0x92304u);
    { uint32_t v = c.r[6]; bool w; uint32_t r = x86_shift(c, 4, v, 0x9u, 4, w); if (w) c.r[6] = r; }
    // 092307  mov dword ptr [ebp - 0xc], 0
    X86_AT(c, 0x92307u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)), 0x0u);
L_9230e:
    X86_TICK(c, 27);
    // 09230e  push esi
    X86_AT(c, 0x9230eu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 09230f  mov eax, dword ptr [ebp + 0xc]
    X86_AT(c, 0x9230fu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 092312  add eax, dword ptr [ebp - 4]
    X86_AT(c, 0x92312u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))), 0, 4); }
    // 092315  push eax
    X86_AT(c, 0x92315u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 092316  mov al, byte ptr [ebx + 0xe]
    X86_AT(c, 0x92316u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xEu))));
    // 092319  push eax
    X86_AT(c, 0x92319u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 09231a  call 0x94fe0
    X86_AT(c, 0x9231au);
    push32(c, 0x9231fu); x86_call_known(c, 0x94fe0u, f_00094fe0); X86_RET(c, 0x9231fu);
    X86_TICK(c, 25);
    // 09231f  mov dword ptr [ebp - 8], eax
    X86_AT(c, 0x9231fu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), c.r[0]);
    // 092322  add dword ptr [ebp - 0xc], eax
    X86_AT(c, 0x92322u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 092325  sub esi, eax
    X86_AT(c, 0x92325u);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[0], 0, 4); }
    // 092327  add dword ptr [ebp - 4], eax
    X86_AT(c, 0x92327u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 09232a  and esi, esi
    X86_AT(c, 0x9232au);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & c.r[6], 4); }
    // 09232c  je 0x92332
    X86_AT(c, 0x9232cu);
    if (x86_cc(c, 4)) { goto L_92332; }
    X86_TICK(c, 7);
    // 09232e  and eax, eax
    X86_AT(c, 0x9232eu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 092330  jne 0x9230e
    X86_AT(c, 0x92330u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x9230eu); goto L_9230e; }
L_92332:
    X86_TICK(c, 6);
    // 092332  sub edi, dword ptr [ebp - 0xc]
    X86_AT(c, 0x92332u);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u))), 0, 4); }
L_92335:
    X86_TICK(c, 7);
    // 092335  and edi, edi
    X86_AT(c, 0x92335u);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & c.r[7], 4); }
    // 092337  jbe 0x9238e
    X86_AT(c, 0x92337u);
    if (x86_cc(c, 6)) { goto L_9238e; }
    X86_TICK(c, 12);
    // 092339  cmp dword ptr [ebx + 4], 0
    X86_AT(c, 0x92339u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u))), 0x0u, 0, 4);
    // 09233d  jne 0x9235e
    X86_AT(c, 0x9233du);
    if (x86_cc(c, 5)) { goto L_9235e; }
    X86_TICK(c, 12);
    // 09233f  test byte ptr [ebx + 0xc], 0x10
    X86_AT(c, 0x9233fu);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xCu))) & 0x10u, 1);
    // 092343  jne 0x92396
    X86_AT(c, 0x92343u);
    if (x86_cc(c, 5)) { goto L_92396; }
    X86_TICK(c, 20);
    // 092345  push 0x200
    X86_AT(c, 0x92345u);
    { uint32_t v = 0x200u; push32(c, v); }
    // 09234a  push dword ptr [ebx + 8]
    X86_AT(c, 0x9234au);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x8u))); push32(c, v); }
    // 09234d  mov al, byte ptr [ebx + 0xe]
    X86_AT(c, 0x9234du);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xEu))));
    // 092350  push eax
    X86_AT(c, 0x92350u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 092351  call 0x94fe0
    X86_AT(c, 0x92351u);
    push32(c, 0x92356u); x86_call_known(c, 0x94fe0u, f_00094fe0); X86_RET(c, 0x92356u);
    X86_TICK(c, 8);
    // 092356  mov dword ptr [ebx + 4], eax
    X86_AT(c, 0x92356u);
    wr32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)), c.r[0]);
    // 092359  mov eax, dword ptr [ebx + 8]
    X86_AT(c, 0x92359u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x8u)));
    // 09235c  mov dword ptr [ebx], eax
    X86_AT(c, 0x9235cu);
    wr32((c.sbase[3] + (uint32_t)(c.r[3])), c.r[0]);
L_9235e:
    X86_TICK(c, 12);
    // 09235e  cmp dword ptr [ebx + 4], 0
    X86_AT(c, 0x9235eu);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u))), 0x0u, 0, 4);
    // 092362  jle 0x92396
    X86_AT(c, 0x92362u);
    if (x86_cc(c, 14)) { goto L_92396; }
L_92364:
    X86_TICK(c, 13);
    // 092364  mov eax, dword ptr [ebx + 4]
    X86_AT(c, 0x92364u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)));
    // 092367  mov edx, edi
    X86_AT(c, 0x92367u);
    c.r[2] = c.r[7];
    // 092369  cmp edx, eax
    X86_AT(c, 0x92369u);
    (void)x86_sub(c, c.r[2], c.r[0], 0, 4);
    // 09236b  jl 0x9236e
    X86_AT(c, 0x9236bu);
    if (x86_cc(c, 12)) { goto L_9236e; }
    X86_TICK(c, 3);
    // 09236d  xchg edx, eax
    X86_AT(c, 0x9236du);
    { uint32_t t = c.r[2]; c.r[2] = c.r[0]; c.r[0] = t; }
L_9236e:
    X86_TICK(c, 2);
    // 09236e  mov esi, edx
    X86_AT(c, 0x9236eu);
    c.r[6] = c.r[2];
L_92370:
    X86_TICK(c, 62);
    // 092370  mov ecx, esi
    X86_AT(c, 0x92370u);
    c.r[1] = c.r[6];
    // 092372  mov eax, dword ptr [ebx]
    X86_AT(c, 0x92372u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3])));
    // 092374  mov edx, dword ptr [ebp + 0xc]
    X86_AT(c, 0x92374u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 092377  add edx, dword ptr [ebp - 4]
    X86_AT(c, 0x92377u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))), 0, 4); }
    // 09237a  push esi
    X86_AT(c, 0x9237au);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 09237b  push edi
    X86_AT(c, 0x9237bu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 09237c  mov esi, eax
    X86_AT(c, 0x9237cu);
    c.r[6] = c.r[0];
    // 09237e  mov edi, edx
    X86_AT(c, 0x9237eu);
    c.r[7] = c.r[2];
    // 092380  movsb byte ptr es:[edi], byte ptr [esi]
    X86_AT(c, 0x92380u);
    x86_string(c, 0, 1, 243, 4, 3);
    // 092382  pop edi
    X86_AT(c, 0x92382u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 092383  pop esi
    X86_AT(c, 0x92383u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 092384  add dword ptr [ebp - 4], esi
    X86_AT(c, 0x92384u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[6], 0, 4)); }
    // 092387  sub dword ptr [ebx + 4], esi
    X86_AT(c, 0x92387u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)); uint32_t v = rd32(ea); wr32(ea, x86_sub(c, v, c.r[6], 0, 4)); }
    // 09238a  sub edi, esi
    X86_AT(c, 0x9238au);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[6], 0, 4); }
    // 09238c  add dword ptr [ebx], esi
    X86_AT(c, 0x9238cu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3])); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[6], 0, 4)); }
L_9238e:
    X86_TICK(c, 7);
    // 09238e  and edi, edi
    X86_AT(c, 0x9238eu);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & c.r[7], 4); }
    // 092390  ja 0x920c9
    X86_AT(c, 0x92390u);
    if (x86_cc(c, 7)) { X86_POLL(c, 0x920c9u); goto L_920c9; }
L_92396:
    X86_TICK(c, 12);
    // 092396  cmp dword ptr [ebp - 4], 0
    X86_AT(c, 0x92396u);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))), 0x0u, 0, 4);
    // 09239a  jne 0x923a0
    X86_AT(c, 0x9239au);
    if (x86_cc(c, 5)) { goto L_923a0; }
    X86_TICK(c, 7);
    // 09239c  or byte ptr [ebx + 0xc], 0x10
    X86_AT(c, 0x9239cu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3] + 0xCu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | 0x10u, 1)); }
L_923a0:
    X86_TICK(c, 13);
    // 0923a0  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0x923a0u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0923a3  mov dword ptr [0x8a730], eax
    X86_AT(c, 0x923a3u);
    wr32((c.sbase[3] + (uint32_t)(0x8A730u)), c.r[0]);
    // 0923a8  jmp 0x924d8
    X86_AT(c, 0x923a8u);
    goto L_924d8;
L_924d8:
    X86_TICK(c, 12);
    // 0924d8  cmp word ptr [0x8aabe], 0
    X86_AT(c, 0x924d8u);
    (void)x86_sub(c, rd16((c.sbase[3] + (uint32_t)(0x8AABEu))), 0x0u, 0, 2);
    // 0924e0  je 0x924e8
    X86_AT(c, 0x924e0u);
    if (x86_cc(c, 4)) { goto L_924e8; }
    X86_TICK(c, 14);
    // 0924e2  or byte ptr [ebx + 0xc], 0x20
    X86_AT(c, 0x924e2u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3] + 0xCu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | 0x20u, 1)); }
    // 0924e6  jmp 0x924f2
    X86_AT(c, 0x924e6u);
    goto L_924f2;
L_924e8:
    X86_TICK(c, 6);
    // 0924e8  mov ax, word ptr [ebp - 0xe]
    X86_AT(c, 0x924e8u);
    s16(c, 0, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF2u))));
    // 0924ec  mov word ptr [0x8aabe], ax
    X86_AT(c, 0x924ecu);
    wr16((c.sbase[3] + (uint32_t)(0x8AABEu)), (c.r[0] & 0xFFFFu));
L_924f2:
    X86_TICK(c, 28);
    // 0924f2  pop edi
    X86_AT(c, 0x924f2u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0924f3  pop esi
    X86_AT(c, 0x924f3u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0924f4  pop ebx
    X86_AT(c, 0x924f4u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0924f5  leave 
    X86_AT(c, 0x924f5u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0924f6  ret 0xc
    X86_AT(c, 0x924f6u);
    c.eip = pop32(c); c.r[4] += 0xCu; return;
    x86_fault(c, 0x92370u, "ran off the end of a function");
}
void f_0009238e(X86Cpu& c) {
    goto L_9238e;
L_920c9:
    X86_TICK(c, 12);
    // 0920c9  test byte ptr [ebx + 0xc], 0x40
    X86_AT(c, 0x920c9u);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xCu))) & 0x40u, 1);
    // 0920cd  je 0x922c6
    X86_AT(c, 0x920cdu);
    if (x86_cc(c, 4)) { goto L_922c6; }
    X86_TICK(c, 12);
    // 0920d3  cmp dword ptr [ebx + 4], 1
    X86_AT(c, 0x920d3u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u))), 0x1u, 0, 4);
    // 0920d7  jne 0x9211e
    X86_AT(c, 0x920d7u);
    if (x86_cc(c, 5)) { goto L_9211e; }
    X86_TICK(c, 12);
    // 0920d9  cmp word ptr [ebx + 0x10], 0xfffe
    X86_AT(c, 0x920d9u);
    (void)x86_sub(c, rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u))), 0xFFFEu, 0, 2);
    // 0920de  jne 0x9211e
    X86_AT(c, 0x920deu);
    if (x86_cc(c, 5)) { goto L_9211e; }
    X86_TICK(c, 12);
    // 0920e0  test byte ptr [ebx + 0xd], 4
    X86_AT(c, 0x920e0u);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xDu))) & 0x4u, 1);
    // 0920e4  jne 0x92364
    X86_AT(c, 0x920e4u);
    if (x86_cc(c, 5)) { goto L_92364; }
    X86_TICK(c, 33);
    // 0920ea  mov al, byte ptr [0x8a72a]
    X86_AT(c, 0x920eau);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(0x8A72Au))));
    // 0920ef  mov edx, dword ptr [ebx + 8]
    X86_AT(c, 0x920efu);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x8u)));
    // 0920f2  mov byte ptr [edx], al
    X86_AT(c, 0x920f2u);
    wr8((c.sbase[3] + (uint32_t)(c.r[2])), g8(c, 0));
    // 0920f4  push 0x1ff
    X86_AT(c, 0x920f4u);
    { uint32_t v = 0x1FFu; push32(c, v); }
    // 0920f9  mov eax, dword ptr [ebx + 8]
    X86_AT(c, 0x920f9u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x8u)));
    // 0920fc  inc eax
    X86_AT(c, 0x920fcu);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0920fd  push eax
    X86_AT(c, 0x920fdu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0920fe  mov al, byte ptr [ebx + 0xe]
    X86_AT(c, 0x920feu);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xEu))));
    // 092101  push eax
    X86_AT(c, 0x92101u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 092102  call 0x94fe0
    X86_AT(c, 0x92102u);
    push32(c, 0x92107u); x86_call_known(c, 0x94fe0u, f_00094fe0); X86_RET(c, 0x92107u);
    X86_TICK(c, 11);
    // 092107  inc eax
    X86_AT(c, 0x92107u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 092108  mov dword ptr [ebx + 4], eax
    X86_AT(c, 0x92108u);
    wr32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)), c.r[0]);
    // 09210b  dec eax
    X86_AT(c, 0x9210bu);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 09210c  jne 0x92156
    X86_AT(c, 0x9210cu);
    if (x86_cc(c, 5)) { goto L_92156; }
    X86_TICK(c, 15);
    // 09210e  mov eax, dword ptr [ebx + 8]
    X86_AT(c, 0x9210eu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x8u)));
    // 092111  mov dword ptr [ebx], eax
    X86_AT(c, 0x92111u);
    wr32((c.sbase[3] + (uint32_t)(c.r[3])), c.r[0]);
    // 092113  mov word ptr [ebx + 0x10], 0x200
    X86_AT(c, 0x92113u);
    wr16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u)), 0x200u);
    // 092119  jmp 0x92364
    X86_AT(c, 0x92119u);
    goto L_92364;
L_9211e:
    X86_TICK(c, 12);
    // 09211e  cmp dword ptr [ebx + 4], 0
    X86_AT(c, 0x9211eu);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u))), 0x0u, 0, 4);
    // 092122  jne 0x9219b
    X86_AT(c, 0x92122u);
    if (x86_cc(c, 5)) { goto L_9219b; }
    X86_TICK(c, 12);
    // 092128  test byte ptr [ebx + 0xc], 0x10
    X86_AT(c, 0x92128u);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xCu))) & 0x10u, 1);
    // 09212c  jne 0x92396
    X86_AT(c, 0x9212cu);
    if (x86_cc(c, 5)) { goto L_92396; }
    X86_TICK(c, 12);
    // 092132  test byte ptr [ebx + 0xd], 4
    X86_AT(c, 0x92132u);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xDu))) & 0x4u, 1);
    // 092136  jne 0x9214c
    X86_AT(c, 0x92136u);
    if (x86_cc(c, 5)) { goto L_9214c; }
    X86_TICK(c, 20);
    // 092138  push 0x200
    X86_AT(c, 0x92138u);
    { uint32_t v = 0x200u; push32(c, v); }
    // 09213d  push dword ptr [ebx + 8]
    X86_AT(c, 0x9213du);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x8u))); push32(c, v); }
    // 092140  mov al, byte ptr [ebx + 0xe]
    X86_AT(c, 0x92140u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xEu))));
    // 092143  push eax
    X86_AT(c, 0x92143u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 092144  call 0x94fe0
    X86_AT(c, 0x92144u);
    push32(c, 0x92149u); x86_call_known(c, 0x94fe0u, f_00094fe0); X86_RET(c, 0x92149u);
    X86_TICK(c, 2);
    // 092149  mov dword ptr [ebx + 4], eax
    X86_AT(c, 0x92149u);
    wr32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)), c.r[0]);
L_9214c:
    X86_TICK(c, 12);
    // 09214c  cmp dword ptr [ebx + 4], 0
    X86_AT(c, 0x9214cu);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u))), 0x0u, 0, 4);
    // 092150  je 0x92396
    X86_AT(c, 0x92150u);
    if (x86_cc(c, 4)) { goto L_92396; }
L_92156:
    X86_TICK(c, 28);
    // 092156  mov edx, dword ptr [ebx + 4]
    X86_AT(c, 0x92156u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)));
    // 092159  mov al, 0x1a
    X86_AT(c, 0x92159u);
    s8(c, 0, 0x1Au);
    // 09215b  mov ecx, dword ptr [ebx + 8]
    X86_AT(c, 0x9215bu);
    c.r[1] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x8u)));
    // 09215e  push edi
    X86_AT(c, 0x9215eu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 09215f  mov edi, ecx
    X86_AT(c, 0x9215fu);
    c.r[7] = c.r[1];
    // 092161  mov ecx, edx
    X86_AT(c, 0x92161u);
    c.r[1] = c.r[2];
    // 092163  scasb al, byte ptr es:[edi]
    X86_AT(c, 0x92163u);
    x86_string(c, 4, 1, 242, 4, 3);
    // 092165  jne 0x9216a
    X86_AT(c, 0x92165u);
    if (x86_cc(c, 5)) { goto L_9216a; }
    X86_TICK(c, 4);
    // 092167  inc ecx
    X86_AT(c, 0x92167u);
    { uint32_t v = c.r[1]; c.r[1] = x86_inc(c, v, 4); }
    // 092168  sub edx, ecx
    X86_AT(c, 0x92168u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[1], 0, 4); }
L_9216a:
    X86_TICK(c, 17);
    // 09216a  pop edi
    X86_AT(c, 0x9216au);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 09216b  mov word ptr [ebp - 0x10], dx
    X86_AT(c, 0x9216bu);
    wr16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u)), (c.r[2] & 0xFFFFu));
    // 09216f  cmp edx, dword ptr [ebx + 4]
    X86_AT(c, 0x9216fu);
    (void)x86_sub(c, c.r[2], rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u))), 0, 4);
    // 092172  je 0x92190
    X86_AT(c, 0x92172u);
    if (x86_cc(c, 4)) { goto L_92190; }
    X86_TICK(c, 32);
    // 092174  or byte ptr [ebx + 0xd], 4
    X86_AT(c, 0x92174u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3] + 0xDu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | 0x4u, 1)); }
    // 092178  push 1
    X86_AT(c, 0x92178u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 09217a  mov dword ptr [ebp - 0x14], edx
    X86_AT(c, 0x9217au);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu)), c.r[2]);
    // 09217d  sub edx, dword ptr [ebx + 4]
    X86_AT(c, 0x9217du);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u))), 0, 4); }
    // 092180  push edx
    X86_AT(c, 0x92180u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 092181  mov al, byte ptr [ebx + 0xe]
    X86_AT(c, 0x92181u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xEu))));
    // 092184  push eax
    X86_AT(c, 0x92184u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 092185  call 0x950b8
    X86_AT(c, 0x92185u);
    push32(c, 0x9218au); x86_call_known(c, 0x950b8u, f_000950b8); X86_RET(c, 0x9218au);
    X86_TICK(c, 6);
    // 09218a  mov eax, dword ptr [ebp - 0x14]
    X86_AT(c, 0x9218au);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu)));
    // 09218d  mov dword ptr [ebx + 4], eax
    X86_AT(c, 0x9218du);
    wr32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)), c.r[0]);
L_92190:
    X86_TICK(c, 8);
    // 092190  mov eax, dword ptr [ebx + 8]
    X86_AT(c, 0x92190u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x8u)));
    // 092193  mov dword ptr [ebx], eax
    X86_AT(c, 0x92193u);
    wr32((c.sbase[3] + (uint32_t)(c.r[3])), c.r[0]);
    // 092195  mov word ptr [ebx + 0x10], 0xffff
    X86_AT(c, 0x92195u);
    wr16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u)), 0xFFFFu);
L_9219b:
    X86_TICK(c, 12);
    // 09219b  cmp dword ptr [ebx + 4], 0
    X86_AT(c, 0x9219bu);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u))), 0x0u, 0, 4);
    // 09219f  jle 0x9238e
    X86_AT(c, 0x9219fu);
    if (x86_cc(c, 14)) { goto L_9238e; }
    X86_TICK(c, 11);
    // 0921a5  mov ax, word ptr [ebx + 0x10]
    X86_AT(c, 0x921a5u);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u))));
    // 0921a9  cmp ax, 0xffff
    X86_AT(c, 0x921a9u);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), 0xFFFFu, 0, 2);
    // 0921ad  je 0x921bd
    X86_AT(c, 0x921adu);
    if (x86_cc(c, 4)) { goto L_921bd; }
    X86_TICK(c, 20);
    // 0921af  movsx eax, ax
    X86_AT(c, 0x921afu);
    c.r[0] = (uint32_t)(int32_t)(int16_t)(c.r[0] & 0xFFFFu);
    // 0921b2  add eax, dword ptr [ebx + 8]
    X86_AT(c, 0x921b2u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x8u))), 0, 4); }
    // 0921b5  cmp eax, dword ptr [ebx]
    X86_AT(c, 0x921b5u);
    (void)x86_sub(c, c.r[0], rd32((c.sbase[3] + (uint32_t)(c.r[3]))), 0, 4);
    // 0921b7  jge 0x92254
    X86_AT(c, 0x921b7u);
    if (x86_cc(c, 13)) { goto L_92254; }
L_921bd:
    X86_TICK(c, 30);
    // 0921bd  mov edx, dword ptr [ebx + 4]
    X86_AT(c, 0x921bdu);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)));
    // 0921c0  mov al, byte ptr [0x8a72a]
    X86_AT(c, 0x921c0u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(0x8A72Au))));
    // 0921c5  mov ecx, dword ptr [ebx]
    X86_AT(c, 0x921c5u);
    c.r[1] = rd32((c.sbase[3] + (uint32_t)(c.r[3])));
    // 0921c7  push edi
    X86_AT(c, 0x921c7u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0921c8  mov edi, ecx
    X86_AT(c, 0x921c8u);
    c.r[7] = c.r[1];
    // 0921ca  mov ecx, edx
    X86_AT(c, 0x921cau);
    c.r[1] = c.r[2];
    // 0921cc  scasb al, byte ptr es:[edi]
    X86_AT(c, 0x921ccu);
    x86_string(c, 4, 1, 242, 4, 3);
    // 0921ce  jne 0x921d3
    X86_AT(c, 0x921ceu);
    if (x86_cc(c, 5)) { goto L_921d3; }
    X86_TICK(c, 4);
    // 0921d0  inc ecx
    X86_AT(c, 0x921d0u);
    { uint32_t v = c.r[1]; c.r[1] = x86_inc(c, v, 4); }
    // 0921d1  sub edx, ecx
    X86_AT(c, 0x921d1u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[1], 0, 4); }
L_921d3:
    X86_TICK(c, 13);
    // 0921d3  pop edi
    X86_AT(c, 0x921d3u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0921d4  mov word ptr [ebx + 0x10], dx
    X86_AT(c, 0x921d4u);
    wr16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u)), (c.r[2] & 0xFFFFu));
    // 0921d8  jmp 0x9220d
    X86_AT(c, 0x921d8u);
    goto L_9220d;
L_921da:
    X86_TICK(c, 59);
    // 0921da  movsx eax, word ptr [ebx + 0x10]
    X86_AT(c, 0x921dau);
    c.r[0] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u)));
    // 0921de  add eax, dword ptr [ebx]
    X86_AT(c, 0x921deu);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[3]))), 0, 4); }
    // 0921e0  inc eax
    X86_AT(c, 0x921e0u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0921e1  mov dx, word ptr [ebx + 0x10]
    X86_AT(c, 0x921e1u);
    s16(c, 2, rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u))));
    // 0921e5  inc edx
    X86_AT(c, 0x921e5u);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
    // 0921e6  movsx edx, dx
    X86_AT(c, 0x921e6u);
    c.r[2] = (uint32_t)(int32_t)(int16_t)(c.r[2] & 0xFFFFu);
    // 0921e9  mov ecx, dword ptr [ebx + 4]
    X86_AT(c, 0x921e9u);
    c.r[1] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)));
    // 0921ec  sub ecx, edx
    X86_AT(c, 0x921ecu);
    { uint32_t v = c.r[1]; c.r[1] = x86_sub(c, v, c.r[2], 0, 4); }
    // 0921ee  mov edx, ecx
    X86_AT(c, 0x921eeu);
    c.r[2] = c.r[1];
    // 0921f0  mov dword ptr [ebp - 0x14], eax
    X86_AT(c, 0x921f0u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu)), c.r[0]);
    // 0921f3  mov al, byte ptr [0x8a72a]
    X86_AT(c, 0x921f3u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(0x8A72Au))));
    // 0921f8  mov ecx, dword ptr [ebp - 0x14]
    X86_AT(c, 0x921f8u);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu)));
    // 0921fb  push edi
    X86_AT(c, 0x921fbu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0921fc  mov edi, ecx
    X86_AT(c, 0x921fcu);
    c.r[7] = c.r[1];
    // 0921fe  mov ecx, edx
    X86_AT(c, 0x921feu);
    c.r[1] = c.r[2];
    // 092200  scasb al, byte ptr es:[edi]
    X86_AT(c, 0x92200u);
    x86_string(c, 4, 1, 242, 4, 3);
    // 092202  jne 0x92207
    X86_AT(c, 0x92202u);
    if (x86_cc(c, 5)) { goto L_92207; }
    X86_TICK(c, 4);
    // 092204  inc ecx
    X86_AT(c, 0x92204u);
    { uint32_t v = c.r[1]; c.r[1] = x86_inc(c, v, 4); }
    // 092205  sub edx, ecx
    X86_AT(c, 0x92205u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[1], 0, 4); }
L_92207:
    X86_TICK(c, 13);
    // 092207  pop edi
    X86_AT(c, 0x92207u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 092208  inc edx
    X86_AT(c, 0x92208u);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
    // 092209  add word ptr [ebx + 0x10], dx
    X86_AT(c, 0x92209u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3] + 0x10u)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[2] & 0xFFFFu), 0, 2)); }
L_9220d:
    X86_TICK(c, 19);
    // 09220d  movsx eax, word ptr [ebx + 0x10]
    X86_AT(c, 0x9220du);
    c.r[0] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u)));
    // 092211  mov edx, dword ptr [ebx + 4]
    X86_AT(c, 0x92211u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)));
    // 092214  dec edx
    X86_AT(c, 0x92214u);
    { uint32_t v = c.r[2]; c.r[2] = x86_dec(c, v, 4); }
    // 092215  cmp edx, eax
    X86_AT(c, 0x92215u);
    (void)x86_sub(c, c.r[2], c.r[0], 0, 4);
    // 092217  jle 0x92226
    X86_AT(c, 0x92217u);
    if (x86_cc(c, 14)) { goto L_92226; }
    X86_TICK(c, 23);
    // 092219  add eax, dword ptr [ebx]
    X86_AT(c, 0x92219u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[3]))), 0, 4); }
    // 09221b  inc eax
    X86_AT(c, 0x9221bu);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 09221c  mov al, byte ptr [eax]
    X86_AT(c, 0x9221cu);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[0]))));
    // 09221e  cmp al, byte ptr [0x8a72b]
    X86_AT(c, 0x9221eu);
    (void)x86_sub(c, g8(c, 0), rd8((c.sbase[3] + (uint32_t)(0x8A72Bu))), 0, 1);
    // 092224  jne 0x921da
    X86_AT(c, 0x92224u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x921dau); goto L_921da; }
L_92226:
    X86_TICK(c, 17);
    // 092226  movsx eax, word ptr [ebx + 0x10]
    X86_AT(c, 0x92226u);
    c.r[0] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u)));
    // 09222a  cmp eax, dword ptr [ebx + 4]
    X86_AT(c, 0x9222au);
    (void)x86_sub(c, c.r[0], rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u))), 0, 4);
    // 09222d  jne 0x92237
    X86_AT(c, 0x9222du);
    if (x86_cc(c, 5)) { goto L_92237; }
    X86_TICK(c, 9);
    // 09222f  mov word ptr [ebx + 0x10], 0x200
    X86_AT(c, 0x9222fu);
    wr16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u)), 0x200u);
    // 092235  jmp 0x92254
    X86_AT(c, 0x92235u);
    goto L_92254;
L_92237:
    X86_TICK(c, 19);
    // 092237  movsx eax, word ptr [ebx + 0x10]
    X86_AT(c, 0x92237u);
    c.r[0] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u)));
    // 09223b  mov edx, dword ptr [ebx + 4]
    X86_AT(c, 0x9223bu);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)));
    // 09223e  dec edx
    X86_AT(c, 0x9223eu);
    { uint32_t v = c.r[2]; c.r[2] = x86_dec(c, v, 4); }
    // 09223f  cmp edx, eax
    X86_AT(c, 0x9223fu);
    (void)x86_sub(c, c.r[2], c.r[0], 0, 4);
    // 092241  jne 0x9224b
    X86_AT(c, 0x92241u);
    if (x86_cc(c, 5)) { goto L_9224b; }
    X86_TICK(c, 9);
    // 092243  mov word ptr [ebx + 0x10], 0xfffe
    X86_AT(c, 0x92243u);
    wr16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u)), 0xFFFEu);
    // 092249  jmp 0x92254
    X86_AT(c, 0x92249u);
    goto L_92254;
L_9224b:
    X86_TICK(c, 17);
    // 09224b  mov eax, dword ptr [ebx]
    X86_AT(c, 0x9224bu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3])));
    // 09224d  sub eax, dword ptr [ebx + 8]
    X86_AT(c, 0x9224du);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x8u))), 0, 4); }
    // 092250  add word ptr [ebx + 0x10], ax
    X86_AT(c, 0x92250u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3] + 0x10u)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
L_92254:
    X86_TICK(c, 12);
    // 092254  cmp word ptr [ebx + 0x10], 0x200
    X86_AT(c, 0x92254u);
    (void)x86_sub(c, rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u))), 0x200u, 0, 2);
    // 09225a  je 0x92364
    X86_AT(c, 0x9225au);
    if (x86_cc(c, 4)) { goto L_92364; }
    X86_TICK(c, 12);
    // 092260  cmp word ptr [ebx + 0x10], 0xfffe
    X86_AT(c, 0x92260u);
    (void)x86_sub(c, rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u))), 0xFFFEu, 0, 2);
    // 092265  jne 0x92275
    X86_AT(c, 0x92265u);
    if (x86_cc(c, 5)) { goto L_92275; }
    X86_TICK(c, 11);
    // 092267  cmp edi, dword ptr [ebx + 4]
    X86_AT(c, 0x92267u);
    (void)x86_sub(c, c.r[7], rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u))), 0, 4);
    // 09226a  jl 0x922bf
    X86_AT(c, 0x9226au);
    if (x86_cc(c, 12)) { goto L_922bf; }
    X86_TICK(c, 13);
    // 09226c  mov esi, dword ptr [ebx + 4]
    X86_AT(c, 0x9226cu);
    c.r[6] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)));
    // 09226f  dec esi
    X86_AT(c, 0x9226fu);
    { uint32_t v = c.r[6]; c.r[6] = x86_dec(c, v, 4); }
    // 092270  jmp 0x92370
    X86_AT(c, 0x92270u);
    goto L_92370;
L_92275:
    X86_TICK(c, 25);
    // 092275  mov eax, dword ptr [ebx]
    X86_AT(c, 0x92275u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3])));
    // 092277  sub eax, dword ptr [ebx + 8]
    X86_AT(c, 0x92277u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x8u))), 0, 4); }
    // 09227a  movsx esi, word ptr [ebx + 0x10]
    X86_AT(c, 0x9227au);
    c.r[6] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u)));
    // 09227e  sub esi, eax
    X86_AT(c, 0x9227eu);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[0], 0, 4); }
    // 092280  cmp edi, esi
    X86_AT(c, 0x92280u);
    (void)x86_sub(c, c.r[7], c.r[6], 0, 4);
    // 092282  jbe 0x922bf
    X86_AT(c, 0x92282u);
    if (x86_cc(c, 6)) { goto L_922bf; }
    X86_TICK(c, 87);
    // 092284  mov ecx, esi
    X86_AT(c, 0x92284u);
    c.r[1] = c.r[6];
    // 092286  mov eax, dword ptr [ebx]
    X86_AT(c, 0x92286u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3])));
    // 092288  mov edx, dword ptr [ebp + 0xc]
    X86_AT(c, 0x92288u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 09228b  mov dword ptr [ebp - 0x14], edi
    X86_AT(c, 0x9228bu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu)), c.r[7]);
    // 09228e  mov edi, dword ptr [ebp - 4]
    X86_AT(c, 0x9228eu);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 092291  lea edx, [edx + edi*1]
    X86_AT(c, 0x92291u);
    c.r[2] = (uint32_t)(c.r[2] + c.r[7]);
    // 092294  push esi
    X86_AT(c, 0x92294u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 092295  push edi
    X86_AT(c, 0x92295u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 092296  mov esi, eax
    X86_AT(c, 0x92296u);
    c.r[6] = c.r[0];
    // 092298  mov edi, edx
    X86_AT(c, 0x92298u);
    c.r[7] = c.r[2];
    // 09229a  movsb byte ptr es:[edi], byte ptr [esi]
    X86_AT(c, 0x9229au);
    x86_string(c, 0, 1, 243, 4, 3);
    // 09229c  pop edi
    X86_AT(c, 0x9229cu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 09229d  pop esi
    X86_AT(c, 0x9229du);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 09229e  add edi, esi
    X86_AT(c, 0x9229eu);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, c.r[6], 0, 4); }
    // 0922a0  mov eax, dword ptr [ebp + 0xc]
    X86_AT(c, 0x922a0u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0922a3  mov byte ptr [eax + edi*1], 0xa
    X86_AT(c, 0x922a3u);
    wr8((c.sbase[3] + (uint32_t)(c.r[0] + c.r[7])), 0xAu);
    // 0922a7  lea eax, [esi + 1]
    X86_AT(c, 0x922a7u);
    c.r[0] = (uint32_t)(c.r[6] + 0x1u);
    // 0922aa  add dword ptr [ebp - 4], eax
    X86_AT(c, 0x922aau);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 0922ad  mov edi, dword ptr [ebp - 0x14]
    X86_AT(c, 0x922adu);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu)));
    // 0922b0  sub edi, eax
    X86_AT(c, 0x922b0u);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0922b2  lea eax, [esi + 2]
    X86_AT(c, 0x922b2u);
    c.r[0] = (uint32_t)(c.r[6] + 0x2u);
    // 0922b5  sub dword ptr [ebx + 4], eax
    X86_AT(c, 0x922b5u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)); uint32_t v = rd32(ea); wr32(ea, x86_sub(c, v, c.r[0], 0, 4)); }
    // 0922b8  add dword ptr [ebx], eax
    X86_AT(c, 0x922b8u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3])); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 0922ba  jmp 0x9238e
    X86_AT(c, 0x922bau);
    goto L_9238e;
L_922bf:
    X86_TICK(c, 9);
    // 0922bf  mov esi, edi
    X86_AT(c, 0x922bfu);
    c.r[6] = c.r[7];
    // 0922c1  jmp 0x92370
    X86_AT(c, 0x922c1u);
    goto L_92370;
L_922c6:
    X86_TICK(c, 13);
    // 0922c6  mov word ptr [ebx + 0x10], 0xffff
    X86_AT(c, 0x922c6u);
    wr16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u)), 0xFFFFu);
    // 0922cc  mov eax, dword ptr [ebx + 4]
    X86_AT(c, 0x922ccu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)));
    // 0922cf  cmp edi, eax
    X86_AT(c, 0x922cfu);
    (void)x86_sub(c, c.r[7], c.r[0], 0, 4);
    // 0922d1  jl 0x922f7
    X86_AT(c, 0x922d1u);
    if (x86_cc(c, 12)) { goto L_922f7; }
    X86_TICK(c, 7);
    // 0922d3  and eax, eax
    X86_AT(c, 0x922d3u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0922d5  jle 0x922f7
    X86_AT(c, 0x922d5u);
    if (x86_cc(c, 14)) { goto L_922f7; }
    X86_TICK(c, 53);
    // 0922d7  xchg ecx, eax
    X86_AT(c, 0x922d7u);
    { uint32_t t = c.r[1]; c.r[1] = c.r[0]; c.r[0] = t; }
    // 0922d8  mov eax, dword ptr [ebx]
    X86_AT(c, 0x922d8u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3])));
    // 0922da  mov edx, dword ptr [ebp + 0xc]
    X86_AT(c, 0x922dau);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0922dd  push esi
    X86_AT(c, 0x922ddu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0922de  push edi
    X86_AT(c, 0x922deu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0922df  mov esi, eax
    X86_AT(c, 0x922dfu);
    c.r[6] = c.r[0];
    // 0922e1  mov edi, edx
    X86_AT(c, 0x922e1u);
    c.r[7] = c.r[2];
    // 0922e3  movsb byte ptr es:[edi], byte ptr [esi]
    X86_AT(c, 0x922e3u);
    x86_string(c, 0, 1, 243, 4, 3);
    // 0922e5  pop edi
    X86_AT(c, 0x922e5u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0922e6  pop esi
    X86_AT(c, 0x922e6u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0922e7  sub edi, dword ptr [ebx + 4]
    X86_AT(c, 0x922e7u);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u))), 0, 4); }
    // 0922ea  mov eax, dword ptr [ebx + 4]
    X86_AT(c, 0x922eau);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)));
    // 0922ed  add dword ptr [ebp - 4], eax
    X86_AT(c, 0x922edu);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 0922f0  mov dword ptr [ebx + 4], 0
    X86_AT(c, 0x922f0u);
    wr32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)), 0x0u);
L_922f7:
    X86_TICK(c, 7);
    // 0922f7  cmp edi, 0x200
    X86_AT(c, 0x922f7u);
    (void)x86_sub(c, c.r[7], 0x200u, 0, 4);
    // 0922fd  jb 0x92335
    X86_AT(c, 0x922fdu);
    if (x86_cc(c, 2)) { goto L_92335; }
    X86_TICK(c, 10);
    // 0922ff  mov esi, edi
    X86_AT(c, 0x922ffu);
    c.r[6] = c.r[7];
    // 092301  shr esi, 9
    X86_AT(c, 0x92301u);
    { uint32_t v = c.r[6]; bool w; uint32_t r = x86_shift(c, 5, v, 0x9u, 4, w); if (w) c.r[6] = r; }
    // 092304  shl esi, 9
    X86_AT(c, 0x92304u);
    { uint32_t v = c.r[6]; bool w; uint32_t r = x86_shift(c, 4, v, 0x9u, 4, w); if (w) c.r[6] = r; }
    // 092307  mov dword ptr [ebp - 0xc], 0
    X86_AT(c, 0x92307u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)), 0x0u);
L_9230e:
    X86_TICK(c, 27);
    // 09230e  push esi
    X86_AT(c, 0x9230eu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 09230f  mov eax, dword ptr [ebp + 0xc]
    X86_AT(c, 0x9230fu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 092312  add eax, dword ptr [ebp - 4]
    X86_AT(c, 0x92312u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))), 0, 4); }
    // 092315  push eax
    X86_AT(c, 0x92315u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 092316  mov al, byte ptr [ebx + 0xe]
    X86_AT(c, 0x92316u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xEu))));
    // 092319  push eax
    X86_AT(c, 0x92319u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 09231a  call 0x94fe0
    X86_AT(c, 0x9231au);
    push32(c, 0x9231fu); x86_call_known(c, 0x94fe0u, f_00094fe0); X86_RET(c, 0x9231fu);
    X86_TICK(c, 25);
    // 09231f  mov dword ptr [ebp - 8], eax
    X86_AT(c, 0x9231fu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), c.r[0]);
    // 092322  add dword ptr [ebp - 0xc], eax
    X86_AT(c, 0x92322u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 092325  sub esi, eax
    X86_AT(c, 0x92325u);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[0], 0, 4); }
    // 092327  add dword ptr [ebp - 4], eax
    X86_AT(c, 0x92327u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 09232a  and esi, esi
    X86_AT(c, 0x9232au);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & c.r[6], 4); }
    // 09232c  je 0x92332
    X86_AT(c, 0x9232cu);
    if (x86_cc(c, 4)) { goto L_92332; }
    X86_TICK(c, 7);
    // 09232e  and eax, eax
    X86_AT(c, 0x9232eu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 092330  jne 0x9230e
    X86_AT(c, 0x92330u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x9230eu); goto L_9230e; }
L_92332:
    X86_TICK(c, 6);
    // 092332  sub edi, dword ptr [ebp - 0xc]
    X86_AT(c, 0x92332u);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u))), 0, 4); }
L_92335:
    X86_TICK(c, 7);
    // 092335  and edi, edi
    X86_AT(c, 0x92335u);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & c.r[7], 4); }
    // 092337  jbe 0x9238e
    X86_AT(c, 0x92337u);
    if (x86_cc(c, 6)) { goto L_9238e; }
    X86_TICK(c, 12);
    // 092339  cmp dword ptr [ebx + 4], 0
    X86_AT(c, 0x92339u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u))), 0x0u, 0, 4);
    // 09233d  jne 0x9235e
    X86_AT(c, 0x9233du);
    if (x86_cc(c, 5)) { goto L_9235e; }
    X86_TICK(c, 12);
    // 09233f  test byte ptr [ebx + 0xc], 0x10
    X86_AT(c, 0x9233fu);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xCu))) & 0x10u, 1);
    // 092343  jne 0x92396
    X86_AT(c, 0x92343u);
    if (x86_cc(c, 5)) { goto L_92396; }
    X86_TICK(c, 20);
    // 092345  push 0x200
    X86_AT(c, 0x92345u);
    { uint32_t v = 0x200u; push32(c, v); }
    // 09234a  push dword ptr [ebx + 8]
    X86_AT(c, 0x9234au);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x8u))); push32(c, v); }
    // 09234d  mov al, byte ptr [ebx + 0xe]
    X86_AT(c, 0x9234du);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xEu))));
    // 092350  push eax
    X86_AT(c, 0x92350u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 092351  call 0x94fe0
    X86_AT(c, 0x92351u);
    push32(c, 0x92356u); x86_call_known(c, 0x94fe0u, f_00094fe0); X86_RET(c, 0x92356u);
    X86_TICK(c, 8);
    // 092356  mov dword ptr [ebx + 4], eax
    X86_AT(c, 0x92356u);
    wr32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)), c.r[0]);
    // 092359  mov eax, dword ptr [ebx + 8]
    X86_AT(c, 0x92359u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x8u)));
    // 09235c  mov dword ptr [ebx], eax
    X86_AT(c, 0x9235cu);
    wr32((c.sbase[3] + (uint32_t)(c.r[3])), c.r[0]);
L_9235e:
    X86_TICK(c, 12);
    // 09235e  cmp dword ptr [ebx + 4], 0
    X86_AT(c, 0x9235eu);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u))), 0x0u, 0, 4);
    // 092362  jle 0x92396
    X86_AT(c, 0x92362u);
    if (x86_cc(c, 14)) { goto L_92396; }
L_92364:
    X86_TICK(c, 13);
    // 092364  mov eax, dword ptr [ebx + 4]
    X86_AT(c, 0x92364u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)));
    // 092367  mov edx, edi
    X86_AT(c, 0x92367u);
    c.r[2] = c.r[7];
    // 092369  cmp edx, eax
    X86_AT(c, 0x92369u);
    (void)x86_sub(c, c.r[2], c.r[0], 0, 4);
    // 09236b  jl 0x9236e
    X86_AT(c, 0x9236bu);
    if (x86_cc(c, 12)) { goto L_9236e; }
    X86_TICK(c, 3);
    // 09236d  xchg edx, eax
    X86_AT(c, 0x9236du);
    { uint32_t t = c.r[2]; c.r[2] = c.r[0]; c.r[0] = t; }
L_9236e:
    X86_TICK(c, 2);
    // 09236e  mov esi, edx
    X86_AT(c, 0x9236eu);
    c.r[6] = c.r[2];
L_92370:
    X86_TICK(c, 62);
    // 092370  mov ecx, esi
    X86_AT(c, 0x92370u);
    c.r[1] = c.r[6];
    // 092372  mov eax, dword ptr [ebx]
    X86_AT(c, 0x92372u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3])));
    // 092374  mov edx, dword ptr [ebp + 0xc]
    X86_AT(c, 0x92374u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 092377  add edx, dword ptr [ebp - 4]
    X86_AT(c, 0x92377u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))), 0, 4); }
    // 09237a  push esi
    X86_AT(c, 0x9237au);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 09237b  push edi
    X86_AT(c, 0x9237bu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 09237c  mov esi, eax
    X86_AT(c, 0x9237cu);
    c.r[6] = c.r[0];
    // 09237e  mov edi, edx
    X86_AT(c, 0x9237eu);
    c.r[7] = c.r[2];
    // 092380  movsb byte ptr es:[edi], byte ptr [esi]
    X86_AT(c, 0x92380u);
    x86_string(c, 0, 1, 243, 4, 3);
    // 092382  pop edi
    X86_AT(c, 0x92382u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 092383  pop esi
    X86_AT(c, 0x92383u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 092384  add dword ptr [ebp - 4], esi
    X86_AT(c, 0x92384u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[6], 0, 4)); }
    // 092387  sub dword ptr [ebx + 4], esi
    X86_AT(c, 0x92387u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)); uint32_t v = rd32(ea); wr32(ea, x86_sub(c, v, c.r[6], 0, 4)); }
    // 09238a  sub edi, esi
    X86_AT(c, 0x9238au);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[6], 0, 4); }
    // 09238c  add dword ptr [ebx], esi
    X86_AT(c, 0x9238cu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3])); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[6], 0, 4)); }
L_9238e:
    X86_TICK(c, 7);
    // 09238e  and edi, edi
    X86_AT(c, 0x9238eu);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & c.r[7], 4); }
    // 092390  ja 0x920c9
    X86_AT(c, 0x92390u);
    if (x86_cc(c, 7)) { X86_POLL(c, 0x920c9u); goto L_920c9; }
L_92396:
    X86_TICK(c, 12);
    // 092396  cmp dword ptr [ebp - 4], 0
    X86_AT(c, 0x92396u);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))), 0x0u, 0, 4);
    // 09239a  jne 0x923a0
    X86_AT(c, 0x9239au);
    if (x86_cc(c, 5)) { goto L_923a0; }
    X86_TICK(c, 7);
    // 09239c  or byte ptr [ebx + 0xc], 0x10
    X86_AT(c, 0x9239cu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3] + 0xCu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | 0x10u, 1)); }
L_923a0:
    X86_TICK(c, 13);
    // 0923a0  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0x923a0u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0923a3  mov dword ptr [0x8a730], eax
    X86_AT(c, 0x923a3u);
    wr32((c.sbase[3] + (uint32_t)(0x8A730u)), c.r[0]);
    // 0923a8  jmp 0x924d8
    X86_AT(c, 0x923a8u);
    goto L_924d8;
L_924d8:
    X86_TICK(c, 12);
    // 0924d8  cmp word ptr [0x8aabe], 0
    X86_AT(c, 0x924d8u);
    (void)x86_sub(c, rd16((c.sbase[3] + (uint32_t)(0x8AABEu))), 0x0u, 0, 2);
    // 0924e0  je 0x924e8
    X86_AT(c, 0x924e0u);
    if (x86_cc(c, 4)) { goto L_924e8; }
    X86_TICK(c, 14);
    // 0924e2  or byte ptr [ebx + 0xc], 0x20
    X86_AT(c, 0x924e2u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3] + 0xCu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | 0x20u, 1)); }
    // 0924e6  jmp 0x924f2
    X86_AT(c, 0x924e6u);
    goto L_924f2;
L_924e8:
    X86_TICK(c, 6);
    // 0924e8  mov ax, word ptr [ebp - 0xe]
    X86_AT(c, 0x924e8u);
    s16(c, 0, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF2u))));
    // 0924ec  mov word ptr [0x8aabe], ax
    X86_AT(c, 0x924ecu);
    wr16((c.sbase[3] + (uint32_t)(0x8AABEu)), (c.r[0] & 0xFFFFu));
L_924f2:
    X86_TICK(c, 28);
    // 0924f2  pop edi
    X86_AT(c, 0x924f2u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0924f3  pop esi
    X86_AT(c, 0x924f3u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0924f4  pop ebx
    X86_AT(c, 0x924f4u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0924f5  leave 
    X86_AT(c, 0x924f5u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0924f6  ret 0xc
    X86_AT(c, 0x924f6u);
    c.eip = pop32(c); c.r[4] += 0xCu; return;
    x86_fault(c, 0x9238eu, "ran off the end of a function");
}
void f_00092500(X86Cpu& c) {
    X86_TICK(c, 30);
    // 092500  enter 4, 0
    X86_AT(c, 0x92500u);
    x86_enter(c, 0x4u, 0x0u, 4);
    // 092504  push ebx
    X86_AT(c, 0x92504u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 092505  push esi
    X86_AT(c, 0x92505u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 092506  push edi
    X86_AT(c, 0x92506u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 092507  mov edi, dword ptr [ebp + 0x14]
    X86_AT(c, 0x92507u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x14u)));
    // 09250a  mov ebx, edi
    X86_AT(c, 0x9250au);
    c.r[3] = c.r[7];
    // 09250c  test byte ptr [ebx + 0xc], 2
    X86_AT(c, 0x9250cu);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xCu))) & 0x2u, 1);
    // 092510  jne 0x92522
    X86_AT(c, 0x92510u);
    if (x86_cc(c, 5)) { goto L_92522; }
    X86_TICK(c, 18);
    // 092512  mov ax, 5
    X86_AT(c, 0x92512u);
    s16(c, 0, 0x5u);
    // 092516  mov word ptr [0x8aabe], ax
    X86_AT(c, 0x92516u);
    wr16((c.sbase[3] + (uint32_t)(0x8AABEu)), (c.r[0] & 0xFFFFu));
    // 09251c  or byte ptr [ebx + 0xc], 0x20
    X86_AT(c, 0x9251cu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3] + 0xCu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | 0x20u, 1)); }
    // 092520  jmp 0x92562
    X86_AT(c, 0x92520u);
    goto L_92562;
L_92522:
    X86_TICK(c, 12);
    // 092522  test byte ptr [ebx + 0xc], 0x80
    X86_AT(c, 0x92522u);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xCu))) & 0x80u, 1);
    // 092526  je 0x9252e
    X86_AT(c, 0x92526u);
    if (x86_cc(c, 4)) { goto L_9252e; }
    X86_TICK(c, 9);
    // 092528  push edi
    X86_AT(c, 0x92528u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 092529  call 0x93ae0
    X86_AT(c, 0x92529u);
    push32(c, 0x9252eu); x86_call_known(c, 0x93ae0u, f_00093ae0); X86_RET(c, 0x9252eu);
L_9252e:
    X86_TICK(c, 19);
    // 09252e  and byte ptr [ebx + 0xd], 0xf7
    X86_AT(c, 0x9252eu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3] + 0xDu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v & 0xF7u, 1)); }
    // 092532  cmp dword ptr [ebx + 4], 0xffffffff
    X86_AT(c, 0x92532u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u))), 0xFFFFFFFFu, 0, 4);
    // 092536  jne 0x9253f
    X86_AT(c, 0x92536u);
    if (x86_cc(c, 5)) { goto L_9253f; }
    X86_TICK(c, 2);
    // 092538  mov dword ptr [ebx + 4], 0
    X86_AT(c, 0x92538u);
    wr32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)), 0x0u);
L_9253f:
    X86_TICK(c, 36);
    // 09253f  mov eax, dword ptr [ebp + 0xc]
    X86_AT(c, 0x9253fu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 092542  imul eax, dword ptr [ebp + 0x10]
    X86_AT(c, 0x92542u);
    c.r[0] = x86_imul2(c, c.r[0], rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u))), 4);
    // 092546  xchg esi, eax
    X86_AT(c, 0x92546u);
    { uint32_t t = c.r[6]; c.r[6] = c.r[0]; c.r[0] = t; }
    // 092547  and esi, esi
    X86_AT(c, 0x92547u);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & c.r[6], 4); }
    // 092549  jl 0x92553
    X86_AT(c, 0x92549u);
    if (x86_cc(c, 12)) { goto L_92553; }
    X86_TICK(c, 7);
    // 09254b  cmp esi, 0x7fffffff
    X86_AT(c, 0x9254bu);
    (void)x86_sub(c, c.r[6], 0x7FFFFFFFu, 0, 4);
    // 092551  jle 0x9255e
    X86_AT(c, 0x92551u);
    if (x86_cc(c, 14)) { goto L_9255e; }
L_92553:
    X86_TICK(c, 9);
    // 092553  mov word ptr [0x8aabe], 1
    X86_AT(c, 0x92553u);
    wr16((c.sbase[3] + (uint32_t)(0x8AABEu)), 0x1u);
    // 09255c  jmp 0x92562
    X86_AT(c, 0x9255cu);
    goto L_92562;
L_9255e:
    X86_TICK(c, 7);
    // 09255e  and esi, esi
    X86_AT(c, 0x9255eu);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & c.r[6], 4); }
    // 092560  jne 0x92566
    X86_AT(c, 0x92560u);
    if (x86_cc(c, 5)) { goto L_92566; }
L_92562:
    X86_TICK(c, 9);
    // 092562  sub eax, eax
    X86_AT(c, 0x92562u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 092564  jmp 0x9257c
    X86_AT(c, 0x92564u);
    goto L_9257c;
L_92566:
    X86_TICK(c, 16);
    // 092566  push esi
    X86_AT(c, 0x92566u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 092567  push dword ptr [ebp + 8]
    X86_AT(c, 0x92567u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, v); }
    // 09256a  push edi
    X86_AT(c, 0x9256au);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 09256b  call 0x92098
    X86_AT(c, 0x9256bu);
    push32(c, 0x92570u); x86_call_known(c, 0x92098u, f_00092098); X86_RET(c, 0x92570u);
    X86_TICK(c, 48);
    // 092570  mov eax, dword ptr [0x8a730]
    X86_AT(c, 0x92570u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x8A730u)));
    // 092575  cdq 
    X86_AT(c, 0x92575u);
    c.r[2] = (c.r[0] & 0x80000000u) ? 0xFFFFFFFFu : 0u;
    // 092576  idiv dword ptr [ebp + 0xc]
    X86_AT(c, 0x92576u);
    x86_idiv(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))), 4, 0x92576u);
    // 092579  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0x92579u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
L_9257c:
    X86_TICK(c, 28);
    // 09257c  pop edi
    X86_AT(c, 0x9257cu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 09257d  pop esi
    X86_AT(c, 0x9257du);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 09257e  pop ebx
    X86_AT(c, 0x9257eu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 09257f  leave 
    X86_AT(c, 0x9257fu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 092580  ret 
    X86_AT(c, 0x92580u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x92500u, "ran off the end of a function");
}
}

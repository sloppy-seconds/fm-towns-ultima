#include "p_game_funcs.h"
namespace p_game {
void f_000c47bb(X86Cpu& c) {
    goto L_c47bb;
L_c4540:
    X86_TICK(c, 9);
    // 0c4540  push 4
    X86_AT(c, 0xc4540u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c4542  call 0xbb6b0
    X86_AT(c, 0xc4542u);
    push32(c, 0xc4547u); x86_call_known(c, 0xbb6b0u, f_000bb6b0); X86_RET(c, 0xc4547u);
    X86_TICK(c, 13);
    // 0c4547  push 3
    X86_AT(c, 0xc4547u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0c4549  push 0x1f
    X86_AT(c, 0xc4549u);
    { uint32_t v = 0x1Fu; push32(c, v); }
    // 0c454b  push 4
    X86_AT(c, 0xc454bu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c454d  call 0xbc174
    X86_AT(c, 0xc454du);
    push32(c, 0xc4552u); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xc4552u);
    X86_TICK(c, 11);
    // 0c4552  push 0x4354
    X86_AT(c, 0xc4552u);
    { uint32_t v = 0x4354u; push32(c, v); }
    // 0c4557  push 4
    X86_AT(c, 0xc4557u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c4559  call 0xba428
    X86_AT(c, 0xc4559u);
    push32(c, 0xc455eu); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xc455eu);
    X86_TICK(c, 15);
    // 0c455e  push 1
    X86_AT(c, 0xc455eu);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0c4560  lea eax, [ebp - 0x20]
    X86_AT(c, 0xc4560u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFE0u);
    // 0c4563  push eax
    X86_AT(c, 0xc4563u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c4564  push 4
    X86_AT(c, 0xc4564u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c4566  call 0xba310
    X86_AT(c, 0xc4566u);
    push32(c, 0xc456bu); x86_call_known(c, 0xba310u, f_000ba310); X86_RET(c, 0xc456bu);
    X86_TICK(c, 12);
    // 0c456b  xchg ebx, eax
    X86_AT(c, 0xc456bu);
    { uint32_t t = c.r[3]; c.r[3] = c.r[0]; c.r[0] = t; }
    // 0c456c  add esp, 0x24
    X86_AT(c, 0xc456cu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x24u, 0, 4); }
    // 0c456f  cmp bl, 1
    X86_AT(c, 0xc456fu);
    (void)x86_sub(c, g8(c, 3), 0x1u, 0, 1);
    // 0c4572  jne 0xc45d2
    X86_AT(c, 0xc4572u);
    if (x86_cc(c, 5)) { goto L_c45d2; }
    X86_TICK(c, 7);
    // 0c4574  sub eax, eax
    X86_AT(c, 0xc4574u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0c4576  mov dword ptr [0xa4a62], eax
    X86_AT(c, 0xc4576u);
    wr32((c.sbase[3] + (uint32_t)(0xA4A62u)), c.r[0]);
    // 0c457b  xchg edi, eax
    X86_AT(c, 0xc457bu);
    { uint32_t t = c.r[7]; c.r[7] = c.r[0]; c.r[0] = t; }
L_c457c:
    X86_TICK(c, 7);
    // 0c457c  cmp edi, 0x14
    X86_AT(c, 0xc457cu);
    (void)x86_sub(c, c.r[7], 0x14u, 0, 4);
    // 0c457f  jge 0xc459b
    X86_AT(c, 0xc457fu);
    if (x86_cc(c, 13)) { goto L_c459b; }
    X86_TICK(c, 22);
    // 0c4581  mov eax, edi
    X86_AT(c, 0xc4581u);
    c.r[0] = c.r[7];
    // 0c4583  lea edx, [eax + eax*2]
    X86_AT(c, 0xc4583u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0c4586  shl edx, 5
    X86_AT(c, 0xc4586u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0c4589  add edx, eax
    X86_AT(c, 0xc4589u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0c458b  lea edx, [eax + edx*2]
    X86_AT(c, 0xc458bu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0c458e  mov dword ptr [edx + 0xa4dc5], 0xffffffff
    X86_AT(c, 0xc458eu);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4DC5u)), 0xFFFFFFFFu);
    // 0c4598  inc edi
    X86_AT(c, 0xc4598u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0c4599  jmp 0xc457c
    X86_AT(c, 0xc4599u);
    X86_POLL(c, 0xc457cu); goto L_c457c;
L_c459b:
    X86_TICK(c, 13);
    // 0c459b  push 3
    X86_AT(c, 0xc459bu);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0c459d  push 0x1f
    X86_AT(c, 0xc459du);
    { uint32_t v = 0x1Fu; push32(c, v); }
    // 0c459f  push 4
    X86_AT(c, 0xc459fu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c45a1  call 0xbc174
    X86_AT(c, 0xc45a1u);
    push32(c, 0xc45a6u); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xc45a6u);
    X86_TICK(c, 11);
    // 0c45a6  push 0x43a4
    X86_AT(c, 0xc45a6u);
    { uint32_t v = 0x43A4u; push32(c, v); }
    // 0c45ab  push 4
    X86_AT(c, 0xc45abu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c45ad  call 0xba428
    X86_AT(c, 0xc45adu);
    push32(c, 0xc45b2u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xc45b2u);
    X86_TICK(c, 9);
    // 0c45b2  push 0x43f8
    X86_AT(c, 0xc45b2u);
    { uint32_t v = 0x43F8u; push32(c, v); }
    // 0c45b7  call 0xbc50c
    X86_AT(c, 0xc45b7u);
    push32(c, 0xc45bcu); x86_call_known(c, 0xbc50cu, f_000bc50c); X86_RET(c, 0xc45bcu);
    X86_TICK(c, 2);
    // 0c45bc  add esp, 0x18
    X86_AT(c, 0xc45bcu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x18u, 0, 4); }
L_c45bf:
    X86_TICK(c, 9);
    // 0c45bf  push 4
    X86_AT(c, 0xc45bfu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c45c1  call 0xb9930
    X86_AT(c, 0xc45c1u);
    push32(c, 0xc45c6u); x86_call_known(c, 0xb9930u, f_000b9930); X86_RET(c, 0xc45c6u);
    X86_TICK(c, 9);
    // 0c45c6  add esp, 4
    X86_AT(c, 0xc45c6u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0c45c9  and al, al
    X86_AT(c, 0xc45c9u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & g8(c, 0), 1)); }
    // 0c45cb  je 0xc45bf
    X86_AT(c, 0xc45cbu);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xc45bfu); goto L_c45bf; }
    X86_TICK(c, 7);
    // 0c45cd  jmp 0xc4920
    X86_AT(c, 0xc45cdu);
    goto L_c4920;
L_c45d2:
    X86_TICK(c, 7);
    // 0c45d2  cmp bl, 0x41
    X86_AT(c, 0xc45d2u);
    (void)x86_sub(c, g8(c, 3), 0x41u, 0, 1);
    // 0c45d5  jb 0xc4540
    X86_AT(c, 0xc45d5u);
    if (x86_cc(c, 2)) { X86_POLL(c, 0xc4540u); goto L_c4540; }
    X86_TICK(c, 28);
    // 0c45db  sub bl, 0x41
    X86_AT(c, 0xc45dbu);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_sub(c, v, 0x41u, 0, 1)); }
    // 0c45de  movzx ebx, bl
    X86_AT(c, 0xc45deu);
    c.r[3] = g8(c, 3);
    // 0c45e1  mov eax, ebx
    X86_AT(c, 0xc45e1u);
    c.r[0] = c.r[3];
    // 0c45e3  lea edx, [eax + eax*2]
    X86_AT(c, 0xc45e3u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0c45e6  shl edx, 5
    X86_AT(c, 0xc45e6u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0c45e9  add edx, eax
    X86_AT(c, 0xc45e9u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0c45eb  lea edx, [eax + edx*2]
    X86_AT(c, 0xc45ebu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0c45ee  cmp dword ptr [edx + 0xa4dc5], 0
    X86_AT(c, 0xc45eeu);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4DC5u))), 0x0u, 0, 4);
    // 0c45f5  jne 0xc462e
    X86_AT(c, 0xc45f5u);
    if (x86_cc(c, 5)) { goto L_c462e; }
    X86_TICK(c, 13);
    // 0c45f7  push 3
    X86_AT(c, 0xc45f7u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0c45f9  push 0x1f
    X86_AT(c, 0xc45f9u);
    { uint32_t v = 0x1Fu; push32(c, v); }
    // 0c45fb  push 4
    X86_AT(c, 0xc45fbu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c45fd  call 0xbc174
    X86_AT(c, 0xc45fdu);
    push32(c, 0xc4602u); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xc4602u);
    X86_TICK(c, 11);
    // 0c4602  push 0x442c
    X86_AT(c, 0xc4602u);
    { uint32_t v = 0x442Cu; push32(c, v); }
    // 0c4607  push 4
    X86_AT(c, 0xc4607u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c4609  call 0xba428
    X86_AT(c, 0xc4609u);
    push32(c, 0xc460eu); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xc460eu);
    X86_TICK(c, 9);
    // 0c460e  push 0x4478
    X86_AT(c, 0xc460eu);
    { uint32_t v = 0x4478u; push32(c, v); }
    // 0c4613  call 0xbc50c
    X86_AT(c, 0xc4613u);
    push32(c, 0xc4618u); x86_call_known(c, 0xbc50cu, f_000bc50c); X86_RET(c, 0xc4618u);
    X86_TICK(c, 2);
    // 0c4618  add esp, 0x18
    X86_AT(c, 0xc4618u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x18u, 0, 4); }
L_c461b:
    X86_TICK(c, 9);
    // 0c461b  push 4
    X86_AT(c, 0xc461bu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c461d  call 0xb9930
    X86_AT(c, 0xc461du);
    push32(c, 0xc4622u); x86_call_known(c, 0xb9930u, f_000b9930); X86_RET(c, 0xc4622u);
    X86_TICK(c, 9);
    // 0c4622  add esp, 4
    X86_AT(c, 0xc4622u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0c4625  and al, al
    X86_AT(c, 0xc4625u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & g8(c, 0), 1)); }
    // 0c4627  je 0xc461b
    X86_AT(c, 0xc4627u);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xc461bu); goto L_c461b; }
    X86_TICK(c, 7);
    // 0c4629  jmp 0xc47bb
    X86_AT(c, 0xc4629u);
    goto L_c47bb;
L_c462e:
    X86_TICK(c, 26);
    // 0c462e  movzx ebx, bl
    X86_AT(c, 0xc462eu);
    c.r[3] = g8(c, 3);
    // 0c4631  mov eax, ebx
    X86_AT(c, 0xc4631u);
    c.r[0] = c.r[3];
    // 0c4633  lea edx, [eax + eax*2]
    X86_AT(c, 0xc4633u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0c4636  shl edx, 5
    X86_AT(c, 0xc4636u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0c4639  add edx, eax
    X86_AT(c, 0xc4639u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0c463b  lea edx, [eax + edx*2]
    X86_AT(c, 0xc463bu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0c463e  cmp byte ptr [edx + 0xa4dac], 0
    X86_AT(c, 0xc463eu);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4DACu))), 0x0u, 0, 1);
    // 0c4645  jne 0xc467e
    X86_AT(c, 0xc4645u);
    if (x86_cc(c, 5)) { goto L_c467e; }
    X86_TICK(c, 13);
    // 0c4647  push 3
    X86_AT(c, 0xc4647u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0c4649  push 0x1f
    X86_AT(c, 0xc4649u);
    { uint32_t v = 0x1Fu; push32(c, v); }
    // 0c464b  push 4
    X86_AT(c, 0xc464bu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c464d  call 0xbc174
    X86_AT(c, 0xc464du);
    push32(c, 0xc4652u); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xc4652u);
    X86_TICK(c, 11);
    // 0c4652  push 0x44ac
    X86_AT(c, 0xc4652u);
    { uint32_t v = 0x44ACu; push32(c, v); }
    // 0c4657  push 4
    X86_AT(c, 0xc4657u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c4659  call 0xba428
    X86_AT(c, 0xc4659u);
    push32(c, 0xc465eu); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xc465eu);
    X86_TICK(c, 9);
    // 0c465e  push 0x44f8
    X86_AT(c, 0xc465eu);
    { uint32_t v = 0x44F8u; push32(c, v); }
    // 0c4663  call 0xbc50c
    X86_AT(c, 0xc4663u);
    push32(c, 0xc4668u); x86_call_known(c, 0xbc50cu, f_000bc50c); X86_RET(c, 0xc4668u);
    X86_TICK(c, 2);
    // 0c4668  add esp, 0x18
    X86_AT(c, 0xc4668u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x18u, 0, 4); }
L_c466b:
    X86_TICK(c, 9);
    // 0c466b  push 4
    X86_AT(c, 0xc466bu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c466d  call 0xb9930
    X86_AT(c, 0xc466du);
    push32(c, 0xc4672u); x86_call_known(c, 0xb9930u, f_000b9930); X86_RET(c, 0xc4672u);
    X86_TICK(c, 9);
    // 0c4672  add esp, 4
    X86_AT(c, 0xc4672u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0c4675  and al, al
    X86_AT(c, 0xc4675u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & g8(c, 0), 1)); }
    // 0c4677  je 0xc466b
    X86_AT(c, 0xc4677u);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xc466bu); goto L_c466b; }
    X86_TICK(c, 7);
    // 0c4679  jmp 0xc47bb
    X86_AT(c, 0xc4679u);
    goto L_c47bb;
L_c467e:
    X86_TICK(c, 49);
    // 0c467e  movzx ebx, bl
    X86_AT(c, 0xc467eu);
    c.r[3] = g8(c, 3);
    // 0c4681  mov eax, ebx
    X86_AT(c, 0xc4681u);
    c.r[0] = c.r[3];
    // 0c4683  lea edx, [eax + eax*2]
    X86_AT(c, 0xc4683u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0c4686  shl edx, 5
    X86_AT(c, 0xc4686u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0c4689  add edx, eax
    X86_AT(c, 0xc4689u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0c468b  lea edx, [eax + edx*2]
    X86_AT(c, 0xc468bu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0c468e  mov dword ptr [edx + 0xa4dc5], 0
    X86_AT(c, 0xc468eu);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4DC5u)), 0x0u);
    // 0c4698  mov eax, dword ptr [0xa4a62]
    X86_AT(c, 0xc4698u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xA4A62u)));
    // 0c469d  mov dword ptr [eax*4 + 0xa4a7e], ebx
    X86_AT(c, 0xc469du);
    wr32((c.sbase[3] + (uint32_t)(c.r[0] * 4 + 0xA4A7Eu)), c.r[3]);
    // 0c46a4  inc dword ptr [0xa4a62]
    X86_AT(c, 0xc46a4u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xA4A62u)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0c46aa  mov eax, dword ptr [0xa4a62]
    X86_AT(c, 0xc46aau);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xA4A62u)));
    // 0c46af  add eax, 3
    X86_AT(c, 0xc46afu);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0x3u, 0, 4); }
    // 0c46b2  push eax
    X86_AT(c, 0xc46b2u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c46b3  push 0x37
    X86_AT(c, 0xc46b3u);
    { uint32_t v = 0x37u; push32(c, v); }
    // 0c46b5  push 4
    X86_AT(c, 0xc46b5u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c46b7  mov dword ptr [ebp - 0xa78], edx
    X86_AT(c, 0xc46b7u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFF588u)), c.r[2]);
    // 0c46bd  call 0xbc174
    X86_AT(c, 0xc46bdu);
    push32(c, 0xc46c2u); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xc46c2u);
    X86_TICK(c, 16);
    // 0c46c2  push 2
    X86_AT(c, 0xc46c2u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0c46c4  push dword ptr [0xa4a62]
    X86_AT(c, 0xc46c4u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xA4A62u))); push32(c, v); }
    // 0c46ca  push 4
    X86_AT(c, 0xc46cau);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c46cc  call 0xba404
    X86_AT(c, 0xc46ccu);
    push32(c, 0xc46d1u); x86_call_known(c, 0xba404u, f_000ba404); X86_RET(c, 0xc46d1u);
    X86_TICK(c, 11);
    // 0c46d1  push 0x452c
    X86_AT(c, 0xc46d1u);
    { uint32_t v = 0x452Cu; push32(c, v); }
    // 0c46d6  push 4
    X86_AT(c, 0xc46d6u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c46d8  call 0xbbba4
    X86_AT(c, 0xc46d8u);
    push32(c, 0xc46ddu); x86_call_known(c, 0xbbba4u, f_000bbba4); X86_RET(c, 0xc46ddu);
    X86_TICK(c, 17);
    // 0c46dd  mov eax, dword ptr [ebp - 0xa78]
    X86_AT(c, 0xc46ddu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFF588u)));
    // 0c46e3  lea edx, [eax*1 + 0xa4dac]
    X86_AT(c, 0xc46e3u);
    c.r[2] = (uint32_t)(c.r[0] + 0xA4DACu);
    // 0c46ea  push edx
    X86_AT(c, 0xc46eau);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0c46eb  push 4
    X86_AT(c, 0xc46ebu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c46ed  call 0xbbfe0
    X86_AT(c, 0xc46edu);
    push32(c, 0xc46f2u); x86_call_known(c, 0xbbfe0u, f_000bbfe0); X86_RET(c, 0xc46f2u);
    X86_TICK(c, 14);
    // 0c46f2  add esp, 0x28
    X86_AT(c, 0xc46f2u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x28u, 0, 4); }
    // 0c46f5  cmp dword ptr [0xa4a62], 4
    X86_AT(c, 0xc46f5u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xA4A62u))), 0x4u, 0, 4);
    // 0c46fc  jne 0xc4540
    X86_AT(c, 0xc46fcu);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xc4540u); goto L_c4540; }
    X86_TICK(c, 4);
    // 0c4702  mov dword ptr [ebp - 0xa74], 0xffffffff
    X86_AT(c, 0xc4702u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFF58Cu)), 0xFFFFFFFFu);
    // 0c470c  sub edi, edi
    X86_AT(c, 0xc470cu);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
L_c470e:
    X86_TICK(c, 7);
    // 0c470e  cmp edi, 4
    X86_AT(c, 0xc470eu);
    (void)x86_sub(c, c.r[7], 0x4u, 0, 4);
    // 0c4711  jge 0xc4740
    X86_AT(c, 0xc4711u);
    if (x86_cc(c, 13)) { goto L_c4740; }
    X86_TICK(c, 24);
    // 0c4713  mov eax, dword ptr [edi*4 + 0xa4a7e]
    X86_AT(c, 0xc4713u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[7] * 4 + 0xA4A7Eu)));
    // 0c471a  lea edx, [eax + eax*2]
    X86_AT(c, 0xc471au);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0c471d  shl edx, 5
    X86_AT(c, 0xc471du);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0c4720  add edx, eax
    X86_AT(c, 0xc4720u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0c4722  lea edx, [eax + edx*2]
    X86_AT(c, 0xc4722u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0c4725  mov al, byte ptr [edx + 0xa4dc9]
    X86_AT(c, 0xc4725u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4DC9u))));
    // 0c472b  cmp al, 0x47
    X86_AT(c, 0xc472bu);
    (void)x86_sub(c, g8(c, 0), 0x47u, 0, 1);
    // 0c472d  je 0xc4733
    X86_AT(c, 0xc472du);
    if (x86_cc(c, 4)) { goto L_c4733; }
    X86_TICK(c, 7);
    // 0c472f  cmp al, 0x50
    X86_AT(c, 0xc472fu);
    (void)x86_sub(c, g8(c, 0), 0x50u, 0, 1);
    // 0c4731  jne 0xc473d
    X86_AT(c, 0xc4731u);
    if (x86_cc(c, 5)) { goto L_c473d; }
L_c4733:
    X86_TICK(c, 2);
    // 0c4733  mov dword ptr [ebp - 0xa74], 0
    X86_AT(c, 0xc4733u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFF58Cu)), 0x0u);
L_c473d:
    X86_TICK(c, 9);
    // 0c473d  inc edi
    X86_AT(c, 0xc473du);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0c473e  jmp 0xc470e
    X86_AT(c, 0xc473eu);
    X86_POLL(c, 0xc470eu); goto L_c470e;
L_c4740:
    X86_TICK(c, 12);
    // 0c4740  cmp dword ptr [ebp - 0xa74], 0xffffffff
    X86_AT(c, 0xc4740u);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFF58Cu))), 0xFFFFFFFFu, 0, 4);
    // 0c4747  jne 0xc47d1
    X86_AT(c, 0xc4747u);
    if (x86_cc(c, 5)) { goto L_c47d1; }
    X86_TICK(c, 13);
    // 0c474d  push 3
    X86_AT(c, 0xc474du);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0c474f  push 0x1f
    X86_AT(c, 0xc474fu);
    { uint32_t v = 0x1Fu; push32(c, v); }
    // 0c4751  push 4
    X86_AT(c, 0xc4751u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c4753  call 0xbc174
    X86_AT(c, 0xc4753u);
    push32(c, 0xc4758u); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xc4758u);
    X86_TICK(c, 11);
    // 0c4758  push 0x4530
    X86_AT(c, 0xc4758u);
    { uint32_t v = 0x4530u; push32(c, v); }
    // 0c475d  push 4
    X86_AT(c, 0xc475du);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c475f  call 0xba428
    X86_AT(c, 0xc475fu);
    push32(c, 0xc4764u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xc4764u);
    X86_TICK(c, 4);
    // 0c4764  sub edi, edi
    X86_AT(c, 0xc4764u);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
    // 0c4766  add esp, 0x14
    X86_AT(c, 0xc4766u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x14u, 0, 4); }
L_c4769:
    X86_TICK(c, 7);
    // 0c4769  cmp edi, 4
    X86_AT(c, 0xc4769u);
    (void)x86_sub(c, c.r[7], 0x4u, 0, 4);
    // 0c476c  jge 0xc477f
    X86_AT(c, 0xc476cu);
    if (x86_cc(c, 13)) { goto L_c477f; }
    X86_TICK(c, 15);
    // 0c476e  sub eax, eax
    X86_AT(c, 0xc476eu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0c4770  mov dword ptr [edi*4 + 0xa4a7e], eax
    X86_AT(c, 0xc4770u);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] * 4 + 0xA4A7Eu)), c.r[0]);
    // 0c4777  mov dword ptr [0xa4a62], eax
    X86_AT(c, 0xc4777u);
    wr32((c.sbase[3] + (uint32_t)(0xA4A62u)), c.r[0]);
    // 0c477c  inc edi
    X86_AT(c, 0xc477cu);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0c477d  jmp 0xc4769
    X86_AT(c, 0xc477du);
    X86_POLL(c, 0xc4769u); goto L_c4769;
L_c477f:
    X86_TICK(c, 2);
    // 0c477f  sub edi, edi
    X86_AT(c, 0xc477fu);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
L_c4781:
    X86_TICK(c, 7);
    // 0c4781  cmp edi, 0x14
    X86_AT(c, 0xc4781u);
    (void)x86_sub(c, c.r[7], 0x14u, 0, 4);
    // 0c4784  jge 0xc47a0
    X86_AT(c, 0xc4784u);
    if (x86_cc(c, 13)) { goto L_c47a0; }
    X86_TICK(c, 22);
    // 0c4786  mov eax, edi
    X86_AT(c, 0xc4786u);
    c.r[0] = c.r[7];
    // 0c4788  lea edx, [eax + eax*2]
    X86_AT(c, 0xc4788u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0c478b  shl edx, 5
    X86_AT(c, 0xc478bu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0c478e  add edx, eax
    X86_AT(c, 0xc478eu);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0c4790  lea edx, [eax + edx*2]
    X86_AT(c, 0xc4790u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0c4793  mov dword ptr [edx + 0xa4dc5], 0xffffffff
    X86_AT(c, 0xc4793u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4DC5u)), 0xFFFFFFFFu);
    // 0c479d  inc edi
    X86_AT(c, 0xc479du);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0c479e  jmp 0xc4781
    X86_AT(c, 0xc479eu);
    X86_POLL(c, 0xc4781u); goto L_c4781;
L_c47a0:
    X86_TICK(c, 9);
    // 0c47a0  push 0x457c
    X86_AT(c, 0xc47a0u);
    { uint32_t v = 0x457Cu; push32(c, v); }
    // 0c47a5  call 0xbc50c
    X86_AT(c, 0xc47a5u);
    push32(c, 0xc47aau); x86_call_known(c, 0xbc50cu, f_000bc50c); X86_RET(c, 0xc47aau);
    X86_TICK(c, 2);
    // 0c47aa  add esp, 4
    X86_AT(c, 0xc47aau);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
L_c47ad:
    X86_TICK(c, 9);
    // 0c47ad  push 4
    X86_AT(c, 0xc47adu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c47af  call 0xb9930
    X86_AT(c, 0xc47afu);
    push32(c, 0xc47b4u); x86_call_known(c, 0xb9930u, f_000b9930); X86_RET(c, 0xc47b4u);
    X86_TICK(c, 9);
    // 0c47b4  add esp, 4
    X86_AT(c, 0xc47b4u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0c47b7  and al, al
    X86_AT(c, 0xc47b7u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & g8(c, 0), 1)); }
    // 0c47b9  je 0xc47ad
    X86_AT(c, 0xc47b9u);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xc47adu); goto L_c47ad; }
L_c47bb:
    X86_TICK(c, 9);
    // 0c47bb  push 2
    X86_AT(c, 0xc47bbu);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0c47bd  call 0xbbb5c
    X86_AT(c, 0xc47bdu);
    push32(c, 0xc47c2u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xc47c2u);
    X86_TICK(c, 9);
    // 0c47c2  push 4
    X86_AT(c, 0xc47c2u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c47c4  call 0xbb6b0
    X86_AT(c, 0xc47c4u);
    push32(c, 0xc47c9u); x86_call_known(c, 0xbb6b0u, f_000bb6b0); X86_RET(c, 0xc47c9u);
    X86_TICK(c, 9);
    // 0c47c9  add esp, 8
    X86_AT(c, 0xc47c9u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0c47cc  jmp 0xc4540
    X86_AT(c, 0xc47ccu);
    X86_POLL(c, 0xc4540u); goto L_c4540;
L_c47d1:
    X86_TICK(c, 17);
    // 0c47d1  push 0x17
    X86_AT(c, 0xc47d1u);
    { uint32_t v = 0x17u; push32(c, v); }
    // 0c47d3  push 0x38
    X86_AT(c, 0xc47d3u);
    { uint32_t v = 0x38u; push32(c, v); }
    // 0c47d5  push 3
    X86_AT(c, 0xc47d5u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0c47d7  push 0
    X86_AT(c, 0xc47d7u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0c47d9  push 4
    X86_AT(c, 0xc47d9u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c47db  call 0xbc2b0
    X86_AT(c, 0xc47dbu);
    push32(c, 0xc47e0u); x86_call_known(c, 0xbc2b0u, f_000bc2b0); X86_RET(c, 0xc47e0u);
    X86_TICK(c, 13);
    // 0c47e0  push 3
    X86_AT(c, 0xc47e0u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0c47e2  push 0x1f
    X86_AT(c, 0xc47e2u);
    { uint32_t v = 0x1Fu; push32(c, v); }
    // 0c47e4  push 4
    X86_AT(c, 0xc47e4u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c47e6  call 0xbc174
    X86_AT(c, 0xc47e6u);
    push32(c, 0xc47ebu); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xc47ebu);
    X86_TICK(c, 11);
    // 0c47eb  push 0x45b0
    X86_AT(c, 0xc47ebu);
    { uint32_t v = 0x45B0u; push32(c, v); }
    // 0c47f0  push 4
    X86_AT(c, 0xc47f0u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c47f2  call 0xba428
    X86_AT(c, 0xc47f2u);
    push32(c, 0xc47f7u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xc47f7u);
    X86_TICK(c, 13);
    // 0c47f7  push 3
    X86_AT(c, 0xc47f7u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0c47f9  push 0x37
    X86_AT(c, 0xc47f9u);
    { uint32_t v = 0x37u; push32(c, v); }
    // 0c47fb  push 4
    X86_AT(c, 0xc47fbu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c47fd  call 0xbc174
    X86_AT(c, 0xc47fdu);
    push32(c, 0xc4802u); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xc4802u);
    X86_TICK(c, 9);
    // 0c4802  push 4
    X86_AT(c, 0xc4802u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c4804  call 0xb6e88
    X86_AT(c, 0xc4804u);
    push32(c, 0xc4809u); x86_call_known(c, 0xb6e88u, f_000b6e88); X86_RET(c, 0xc4809u);
    X86_TICK(c, 12);
    // 0c4809  xchg ebx, eax
    X86_AT(c, 0xc4809u);
    { uint32_t t = c.r[3]; c.r[3] = c.r[0]; c.r[0] = t; }
    // 0c480a  push 4
    X86_AT(c, 0xc480au);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c480c  call 0xbb6b0
    X86_AT(c, 0xc480cu);
    push32(c, 0xc4811u); x86_call_known(c, 0xbb6b0u, f_000bb6b0); X86_RET(c, 0xc4811u);
    X86_TICK(c, 9);
    // 0c4811  add esp, 0x3c
    X86_AT(c, 0xc4811u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x3Cu, 0, 4); }
    // 0c4814  cmp bl, 0x59
    X86_AT(c, 0xc4814u);
    (void)x86_sub(c, g8(c, 3), 0x59u, 0, 1);
    // 0c4817  je 0xc489f
    X86_AT(c, 0xc4817u);
    if (x86_cc(c, 4)) { goto L_c489f; }
    X86_TICK(c, 4);
    // 0c481d  mov dword ptr [0xa4a62], 0
    X86_AT(c, 0xc481du);
    wr32((c.sbase[3] + (uint32_t)(0xA4A62u)), 0x0u);
    // 0c4827  sub edi, edi
    X86_AT(c, 0xc4827u);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
L_c4829:
    X86_TICK(c, 7);
    // 0c4829  cmp edi, 0x14
    X86_AT(c, 0xc4829u);
    (void)x86_sub(c, c.r[7], 0x14u, 0, 4);
    // 0c482c  jge 0xc4848
    X86_AT(c, 0xc482cu);
    if (x86_cc(c, 13)) { goto L_c4848; }
    X86_TICK(c, 22);
    // 0c482e  mov eax, edi
    X86_AT(c, 0xc482eu);
    c.r[0] = c.r[7];
    // 0c4830  lea edx, [eax + eax*2]
    X86_AT(c, 0xc4830u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0c4833  shl edx, 5
    X86_AT(c, 0xc4833u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0c4836  add edx, eax
    X86_AT(c, 0xc4836u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0c4838  lea edx, [eax + edx*2]
    X86_AT(c, 0xc4838u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0c483b  mov dword ptr [edx + 0xa4dc5], 0xffffffff
    X86_AT(c, 0xc483bu);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4DC5u)), 0xFFFFFFFFu);
    // 0c4845  inc edi
    X86_AT(c, 0xc4845u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0c4846  jmp 0xc4829
    X86_AT(c, 0xc4846u);
    X86_POLL(c, 0xc4829u); goto L_c4829;
L_c4848:
    X86_TICK(c, 13);
    // 0c4848  push 3
    X86_AT(c, 0xc4848u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0c484a  push 0x1f
    X86_AT(c, 0xc484au);
    { uint32_t v = 0x1Fu; push32(c, v); }
    // 0c484c  push 4
    X86_AT(c, 0xc484cu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c484e  call 0xbc174
    X86_AT(c, 0xc484eu);
    push32(c, 0xc4853u); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xc4853u);
    X86_TICK(c, 11);
    // 0c4853  push 0x4600
    X86_AT(c, 0xc4853u);
    { uint32_t v = 0x4600u; push32(c, v); }
    // 0c4858  push 4
    X86_AT(c, 0xc4858u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c485a  call 0xba428
    X86_AT(c, 0xc485au);
    push32(c, 0xc485fu); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xc485fu);
    X86_TICK(c, 9);
    // 0c485f  push 2
    X86_AT(c, 0xc485fu);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0c4861  call 0xbbb5c
    X86_AT(c, 0xc4861u);
    push32(c, 0xc4866u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xc4866u);
    X86_TICK(c, 9);
    // 0c4866  push 0x4644
    X86_AT(c, 0xc4866u);
    { uint32_t v = 0x4644u; push32(c, v); }
    // 0c486b  call 0xbc50c
    X86_AT(c, 0xc486bu);
    push32(c, 0xc4870u); x86_call_known(c, 0xbc50cu, f_000bc50c); X86_RET(c, 0xc4870u);
    X86_TICK(c, 2);
    // 0c4870  add esp, 0x1c
    X86_AT(c, 0xc4870u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x1Cu, 0, 4); }
L_c4873:
    X86_TICK(c, 9);
    // 0c4873  push 4
    X86_AT(c, 0xc4873u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c4875  call 0xb9930
    X86_AT(c, 0xc4875u);
    push32(c, 0xc487au); x86_call_known(c, 0xb9930u, f_000b9930); X86_RET(c, 0xc487au);
    X86_TICK(c, 9);
    // 0c487a  add esp, 4
    X86_AT(c, 0xc487au);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0c487d  and al, al
    X86_AT(c, 0xc487du);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & g8(c, 0), 1)); }
    // 0c487f  je 0xc4873
    X86_AT(c, 0xc487fu);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xc4873u); goto L_c4873; }
    X86_TICK(c, 9);
    // 0c4881  push 4
    X86_AT(c, 0xc4881u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c4883  call 0xbb6b0
    X86_AT(c, 0xc4883u);
    push32(c, 0xc4888u); x86_call_known(c, 0xbb6b0u, f_000bb6b0); X86_RET(c, 0xc4888u);
    X86_TICK(c, 17);
    // 0c4888  push 0x17
    X86_AT(c, 0xc4888u);
    { uint32_t v = 0x17u; push32(c, v); }
    // 0c488a  push 0x4d
    X86_AT(c, 0xc488au);
    { uint32_t v = 0x4Du; push32(c, v); }
    // 0c488c  push 3
    X86_AT(c, 0xc488cu);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0c488e  push 0
    X86_AT(c, 0xc488eu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0c4890  push 4
    X86_AT(c, 0xc4890u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c4892  call 0xbc2b0
    X86_AT(c, 0xc4892u);
    push32(c, 0xc4897u); x86_call_known(c, 0xbc2b0u, f_000bc2b0); X86_RET(c, 0xc4897u);
    X86_TICK(c, 9);
    // 0c4897  add esp, 0x18
    X86_AT(c, 0xc4897u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x18u, 0, 4); }
    // 0c489a  jmp 0xc4af8
    X86_AT(c, 0xc489au);
    goto L_c4af8;
L_c489f:
    X86_TICK(c, 9);
    // 0c489f  push 0
    X86_AT(c, 0xc489fu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0c48a1  call 0xb6d38
    X86_AT(c, 0xc48a1u);
    push32(c, 0xc48a6u); x86_call_known(c, 0xb6d38u, f_000b6d38); X86_RET(c, 0xc48a6u);
    X86_TICK(c, 12);
    // 0c48a6  xchg esi, eax
    X86_AT(c, 0xc48a6u);
    { uint32_t t = c.r[6]; c.r[6] = c.r[0]; c.r[0] = t; }
    // 0c48a7  push 4
    X86_AT(c, 0xc48a7u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c48a9  call 0xbb6b0
    X86_AT(c, 0xc48a9u);
    push32(c, 0xc48aeu); x86_call_known(c, 0xbb6b0u, f_000bb6b0); X86_RET(c, 0xc48aeu);
    X86_TICK(c, 9);
    // 0c48ae  add esp, 8
    X86_AT(c, 0xc48aeu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0c48b1  cmp esi, 0xffffffff
    X86_AT(c, 0xc48b1u);
    (void)x86_sub(c, c.r[6], 0xFFFFFFFFu, 0, 4);
    // 0c48b4  je 0xc48bf
    X86_AT(c, 0xc48b4u);
    if (x86_cc(c, 4)) { goto L_c48bf; }
    X86_TICK(c, 7);
    // 0c48b6  and esi, esi
    X86_AT(c, 0xc48b6u);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & c.r[6], 4); }
    // 0c48b8  je 0xc48bf
    X86_AT(c, 0xc48b8u);
    if (x86_cc(c, 4)) { goto L_c48bf; }
    X86_TICK(c, 7);
    // 0c48ba  cmp esi, 1
    X86_AT(c, 0xc48bau);
    (void)x86_sub(c, c.r[6], 0x1u, 0, 4);
    // 0c48bd  jne 0xc489f
    X86_AT(c, 0xc48bdu);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xc489fu); goto L_c489f; }
L_c48bf:
    X86_TICK(c, 7);
    // 0c48bf  and esi, esi
    X86_AT(c, 0xc48bfu);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & c.r[6], 4); }
    // 0c48c1  je 0xc4945
    X86_AT(c, 0xc48c1u);
    if (x86_cc(c, 4)) { goto L_c4945; }
    X86_TICK(c, 7);
    // 0c48c7  sub eax, eax
    X86_AT(c, 0xc48c7u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0c48c9  mov dword ptr [0xa4a62], eax
    X86_AT(c, 0xc48c9u);
    wr32((c.sbase[3] + (uint32_t)(0xA4A62u)), c.r[0]);
    // 0c48ce  xchg edi, eax
    X86_AT(c, 0xc48ceu);
    { uint32_t t = c.r[7]; c.r[7] = c.r[0]; c.r[0] = t; }
L_c48cf:
    X86_TICK(c, 7);
    // 0c48cf  cmp edi, 0x14
    X86_AT(c, 0xc48cfu);
    (void)x86_sub(c, c.r[7], 0x14u, 0, 4);
    // 0c48d2  jge 0xc48ee
    X86_AT(c, 0xc48d2u);
    if (x86_cc(c, 13)) { goto L_c48ee; }
    X86_TICK(c, 22);
    // 0c48d4  mov eax, edi
    X86_AT(c, 0xc48d4u);
    c.r[0] = c.r[7];
    // 0c48d6  lea edx, [eax + eax*2]
    X86_AT(c, 0xc48d6u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0c48d9  shl edx, 5
    X86_AT(c, 0xc48d9u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0c48dc  add edx, eax
    X86_AT(c, 0xc48dcu);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0c48de  lea edx, [eax + edx*2]
    X86_AT(c, 0xc48deu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0c48e1  mov dword ptr [edx + 0xa4dc5], 0xffffffff
    X86_AT(c, 0xc48e1u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4DC5u)), 0xFFFFFFFFu);
    // 0c48eb  inc edi
    X86_AT(c, 0xc48ebu);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0c48ec  jmp 0xc48cf
    X86_AT(c, 0xc48ecu);
    X86_POLL(c, 0xc48cfu); goto L_c48cf;
L_c48ee:
    X86_TICK(c, 13);
    // 0c48ee  push 3
    X86_AT(c, 0xc48eeu);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0c48f0  push 0x1f
    X86_AT(c, 0xc48f0u);
    { uint32_t v = 0x1Fu; push32(c, v); }
    // 0c48f2  push 4
    X86_AT(c, 0xc48f2u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c48f4  call 0xbc174
    X86_AT(c, 0xc48f4u);
    push32(c, 0xc48f9u); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xc48f9u);
    X86_TICK(c, 11);
    // 0c48f9  push 0x4678
    X86_AT(c, 0xc48f9u);
    { uint32_t v = 0x4678u; push32(c, v); }
    // 0c48fe  push 4
    X86_AT(c, 0xc48feu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c4900  call 0xba428
    X86_AT(c, 0xc4900u);
    push32(c, 0xc4905u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xc4905u);
    X86_TICK(c, 9);
    // 0c4905  push 0x46bc
    X86_AT(c, 0xc4905u);
    { uint32_t v = 0x46BCu; push32(c, v); }
    // 0c490a  call 0xbc50c
    X86_AT(c, 0xc490au);
    push32(c, 0xc490fu); x86_call_known(c, 0xbc50cu, f_000bc50c); X86_RET(c, 0xc490fu);
    X86_TICK(c, 2);
    // 0c490f  add esp, 0x18
    X86_AT(c, 0xc490fu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x18u, 0, 4); }
L_c4912:
    X86_TICK(c, 9);
    // 0c4912  push 4
    X86_AT(c, 0xc4912u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c4914  call 0xb9930
    X86_AT(c, 0xc4914u);
    push32(c, 0xc4919u); x86_call_known(c, 0xb9930u, f_000b9930); X86_RET(c, 0xc4919u);
    X86_TICK(c, 9);
    // 0c4919  add esp, 4
    X86_AT(c, 0xc4919u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0c491c  and al, al
    X86_AT(c, 0xc491cu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & g8(c, 0), 1)); }
    // 0c491e  je 0xc4912
    X86_AT(c, 0xc491eu);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xc4912u); goto L_c4912; }
L_c4920:
    X86_TICK(c, 9);
    // 0c4920  push 2
    X86_AT(c, 0xc4920u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0c4922  call 0xbbb5c
    X86_AT(c, 0xc4922u);
    push32(c, 0xc4927u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xc4927u);
    X86_TICK(c, 9);
    // 0c4927  push 4
    X86_AT(c, 0xc4927u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c4929  call 0xbb6b0
    X86_AT(c, 0xc4929u);
    push32(c, 0xc492eu); x86_call_known(c, 0xbb6b0u, f_000bb6b0); X86_RET(c, 0xc492eu);
    X86_TICK(c, 17);
    // 0c492e  push 0x17
    X86_AT(c, 0xc492eu);
    { uint32_t v = 0x17u; push32(c, v); }
    // 0c4930  push 0x4d
    X86_AT(c, 0xc4930u);
    { uint32_t v = 0x4Du; push32(c, v); }
    // 0c4932  push 3
    X86_AT(c, 0xc4932u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0c4934  push 0
    X86_AT(c, 0xc4934u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0c4936  push 4
    X86_AT(c, 0xc4936u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c4938  call 0xbc2b0
    X86_AT(c, 0xc4938u);
    push32(c, 0xc493du); x86_call_known(c, 0xbc2b0u, f_000bc2b0); X86_RET(c, 0xc493du);
    X86_TICK(c, 9);
    // 0c493d  add esp, 0x1c
    X86_AT(c, 0xc493du);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x1Cu, 0, 4); }
    // 0c4940  jmp 0xc4af8
    X86_AT(c, 0xc4940u);
    goto L_c4af8;
L_c4945:
    X86_TICK(c, 7);
    // 0c4945  sub eax, eax
    X86_AT(c, 0xc4945u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0c4947  mov dword ptr [0xa4a56], eax
    X86_AT(c, 0xc4947u);
    wr32((c.sbase[3] + (uint32_t)(0xA4A56u)), c.r[0]);
    // 0c494c  xchg edi, eax
    X86_AT(c, 0xc494cu);
    { uint32_t t = c.r[7]; c.r[7] = c.r[0]; c.r[0] = t; }
L_c494d:
    X86_TICK(c, 7);
    // 0c494d  cmp edi, 4
    X86_AT(c, 0xc494du);
    (void)x86_sub(c, c.r[7], 0x4u, 0, 4);
    // 0c4950  jge 0xc498c
    X86_AT(c, 0xc4950u);
    if (x86_cc(c, 13)) { goto L_c498c; }
    X86_TICK(c, 39);
    // 0c4952  mov eax, edi
    X86_AT(c, 0xc4952u);
    c.r[0] = c.r[7];
    // 0c4954  lea edx, [eax + eax*2]
    X86_AT(c, 0xc4954u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0c4957  shl edx, 5
    X86_AT(c, 0xc4957u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0c495a  add edx, eax
    X86_AT(c, 0xc495au);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0c495c  lea edx, [eax + edx*2]
    X86_AT(c, 0xc495cu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0c495f  lea eax, [edx*1 + 0xa4aa0]
    X86_AT(c, 0xc495fu);
    c.r[0] = (uint32_t)(c.r[2] + 0xA4AA0u);
    // 0c4966  push eax
    X86_AT(c, 0xc4966u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c4967  mov eax, dword ptr [edi*4 + 0xa4a7e]
    X86_AT(c, 0xc4967u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[7] * 4 + 0xA4A7Eu)));
    // 0c496e  lea edx, [eax + eax*2]
    X86_AT(c, 0xc496eu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0c4971  shl edx, 5
    X86_AT(c, 0xc4971u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0c4974  add edx, eax
    X86_AT(c, 0xc4974u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0c4976  lea edx, [eax + edx*2]
    X86_AT(c, 0xc4976u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0c4979  lea eax, [edx*1 + 0xa4dac]
    X86_AT(c, 0xc4979u);
    c.r[0] = (uint32_t)(c.r[2] + 0xA4DACu);
    // 0c4980  push eax
    X86_AT(c, 0xc4980u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c4981  call 0xc2414
    X86_AT(c, 0xc4981u);
    push32(c, 0xc4986u); x86_call_known(c, 0xc2414u, f_000c2414); X86_RET(c, 0xc4986u);
    X86_TICK(c, 11);
    // 0c4986  inc edi
    X86_AT(c, 0xc4986u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0c4987  add esp, 8
    X86_AT(c, 0xc4987u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0c498a  jmp 0xc494d
    X86_AT(c, 0xc498au);
    X86_POLL(c, 0xc494du); goto L_c494d;
L_c498c:
    X86_TICK(c, 31);
    // 0c498c  mov eax, dword ptr [0xa4a7e]
    X86_AT(c, 0xc498cu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xA4A7Eu)));
    // 0c4991  lea edx, [eax + eax*2]
    X86_AT(c, 0xc4991u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0c4994  shl edx, 5
    X86_AT(c, 0xc4994u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0c4997  add edx, eax
    X86_AT(c, 0xc4997u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0c4999  lea edx, [eax + edx*2]
    X86_AT(c, 0xc4999u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0c499c  movzx eax, byte ptr [edx + 0xa4ddb]
    X86_AT(c, 0xc499cu);
    c.r[0] = rd8((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4DDBu)));
    // 0c49a3  xchg edx, eax
    X86_AT(c, 0xc49a3u);
    { uint32_t t = c.r[2]; c.r[2] = c.r[0]; c.r[0] = t; }
    // 0c49a4  sub edx, 0x41
    X86_AT(c, 0xc49a4u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, 0x41u, 0, 4); }
    // 0c49a7  cmp edx, 0x16
    X86_AT(c, 0xc49a7u);
    (void)x86_sub(c, c.r[2], 0x16u, 0, 4);
    // 0c49aa  ja 0xc4a75
    X86_AT(c, 0xc49aau);
    if (x86_cc(c, 7)) { goto L_c4a75; }
    X86_TICK(c, 7);
    // 0c49b0  jmp dword ptr cs:[edx*4 + 0xc49b8]
    X86_AT(c, 0xc49b0u);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xC49B8u)));
      switch (t) {
      case 0xc4a14u: goto L_c4a14;
      case 0xc4a1du: goto L_c4a1d;
      case 0xc4a26u: goto L_c4a26;
      case 0xc4a2fu: goto L_c4a2f;
      case 0xc4a38u: goto L_c4a38;
      case 0xc4a41u: goto L_c4a41;
      case 0xc4a4au: goto L_c4a4a;
      case 0xc4a53u: goto L_c4a53;
      case 0xc4a5cu: goto L_c4a5c;
      case 0xc4a65u: goto L_c4a65;
      case 0xc4a6eu: goto L_c4a6e;
      case 0xc4a75u: goto L_c4a75;
      default: x86_jump(c, t); return; } }
L_c4a14:
    X86_TICK(c, 9);
    // 0c4a14  mov byte ptr [0xa4a49], 0
    X86_AT(c, 0xc4a14u);
    wr8((c.sbase[3] + (uint32_t)(0xA4A49u)), 0x0u);
    // 0c4a1b  jmp 0xc4a75
    X86_AT(c, 0xc4a1bu);
    goto L_c4a75;
L_c4a1d:
    X86_TICK(c, 9);
    // 0c4a1d  mov byte ptr [0xa4a49], 4
    X86_AT(c, 0xc4a1du);
    wr8((c.sbase[3] + (uint32_t)(0xA4A49u)), 0x4u);
    // 0c4a24  jmp 0xc4a75
    X86_AT(c, 0xc4a24u);
    goto L_c4a75;
L_c4a26:
    X86_TICK(c, 9);
    // 0c4a26  mov byte ptr [0xa4a49], 8
    X86_AT(c, 0xc4a26u);
    wr8((c.sbase[3] + (uint32_t)(0xA4A49u)), 0x8u);
    // 0c4a2d  jmp 0xc4a75
    X86_AT(c, 0xc4a2du);
    goto L_c4a75;
L_c4a2f:
    X86_TICK(c, 9);
    // 0c4a2f  mov byte ptr [0xa4a49], 0xc
    X86_AT(c, 0xc4a2fu);
    wr8((c.sbase[3] + (uint32_t)(0xA4A49u)), 0xCu);
    // 0c4a36  jmp 0xc4a75
    X86_AT(c, 0xc4a36u);
    goto L_c4a75;
L_c4a38:
    X86_TICK(c, 9);
    // 0c4a38  mov byte ptr [0xa4a49], 0x10
    X86_AT(c, 0xc4a38u);
    wr8((c.sbase[3] + (uint32_t)(0xA4A49u)), 0x10u);
    // 0c4a3f  jmp 0xc4a75
    X86_AT(c, 0xc4a3fu);
    goto L_c4a75;
L_c4a41:
    X86_TICK(c, 9);
    // 0c4a41  mov byte ptr [0xa4a49], 0x14
    X86_AT(c, 0xc4a41u);
    wr8((c.sbase[3] + (uint32_t)(0xA4A49u)), 0x14u);
    // 0c4a48  jmp 0xc4a75
    X86_AT(c, 0xc4a48u);
    goto L_c4a75;
L_c4a4a:
    X86_TICK(c, 9);
    // 0c4a4a  mov byte ptr [0xa4a49], 0x18
    X86_AT(c, 0xc4a4au);
    wr8((c.sbase[3] + (uint32_t)(0xA4A49u)), 0x18u);
    // 0c4a51  jmp 0xc4a75
    X86_AT(c, 0xc4a51u);
    goto L_c4a75;
L_c4a53:
    X86_TICK(c, 9);
    // 0c4a53  mov byte ptr [0xa4a49], 0x1c
    X86_AT(c, 0xc4a53u);
    wr8((c.sbase[3] + (uint32_t)(0xA4A49u)), 0x1Cu);
    // 0c4a5a  jmp 0xc4a75
    X86_AT(c, 0xc4a5au);
    goto L_c4a75;
L_c4a5c:
    X86_TICK(c, 9);
    // 0c4a5c  mov byte ptr [0xa4a49], 0x20
    X86_AT(c, 0xc4a5cu);
    wr8((c.sbase[3] + (uint32_t)(0xA4A49u)), 0x20u);
    // 0c4a63  jmp 0xc4a75
    X86_AT(c, 0xc4a63u);
    goto L_c4a75;
L_c4a65:
    X86_TICK(c, 9);
    // 0c4a65  mov byte ptr [0xa4a49], 0x24
    X86_AT(c, 0xc4a65u);
    wr8((c.sbase[3] + (uint32_t)(0xA4A49u)), 0x24u);
    // 0c4a6c  jmp 0xc4a75
    X86_AT(c, 0xc4a6cu);
    goto L_c4a75;
L_c4a6e:
    X86_TICK(c, 2);
    // 0c4a6e  mov byte ptr [0xa4a49], 0x28
    X86_AT(c, 0xc4a6eu);
    wr8((c.sbase[3] + (uint32_t)(0xA4A49u)), 0x28u);
L_c4a75:
    X86_TICK(c, 25);
    // 0c4a75  mov eax, dword ptr [0xa4a7e]
    X86_AT(c, 0xc4a75u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xA4A7Eu)));
    // 0c4a7a  lea edx, [eax + eax*2]
    X86_AT(c, 0xc4a7au);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0c4a7d  shl edx, 5
    X86_AT(c, 0xc4a7du);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0c4a80  add edx, eax
    X86_AT(c, 0xc4a80u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0c4a82  lea edx, [eax + edx*2]
    X86_AT(c, 0xc4a82u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0c4a85  cmp byte ptr [edx + 0xa4ddc], 0x46
    X86_AT(c, 0xc4a85u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4DDCu))), 0x46u, 0, 1);
    // 0c4a8c  jne 0xc4a94
    X86_AT(c, 0xc4a8cu);
    if (x86_cc(c, 5)) { goto L_c4a94; }
    X86_TICK(c, 6);
    // 0c4a8e  inc byte ptr [0xa4a49]
    X86_AT(c, 0xc4a8eu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xA4A49u)); uint32_t v = rd8(ea); wr8(ea, x86_inc(c, v, 1)); }
L_c4a94:
    X86_TICK(c, 11);
    // 0c4a94  mov dword ptr [0xa4a66], 0x2c
    X86_AT(c, 0xc4a94u);
    wr32((c.sbase[3] + (uint32_t)(0xA4A66u)), 0x2Cu);
    // 0c4a9e  mov dword ptr [0xa4a6a], 0x14
    X86_AT(c, 0xc4a9eu);
    wr32((c.sbase[3] + (uint32_t)(0xA4A6Au)), 0x14u);
    // 0c4aa8  call 0xc1694
    X86_AT(c, 0xc4aa8u);
    push32(c, 0xc4aadu); x86_call_known(c, 0xc1694u, f_000c1694); X86_RET(c, 0xc4aadu);
    X86_TICK(c, 7);
    // 0c4aad  call 0xc1060
    X86_AT(c, 0xc4aadu);
    push32(c, 0xc4ab2u); x86_call_known(c, 0xc1060u, f_000c1060); X86_RET(c, 0xc4ab2u);
    X86_TICK(c, 7);
    // 0c4ab2  call 0xc1864
    X86_AT(c, 0xc4ab2u);
    push32(c, 0xc4ab7u); x86_call_known(c, 0xc1864u, f_000c1864); X86_RET(c, 0xc4ab7u);
    X86_TICK(c, 7);
    // 0c4ab7  call 0xd40e4
    X86_AT(c, 0xc4ab7u);
    push32(c, 0xc4abcu); x86_call_known(c, 0xd40e4u, f_000d40e4); X86_RET(c, 0xc4abcu);
    X86_TICK(c, 7);
    // 0c4abc  call 0xc1eb0
    X86_AT(c, 0xc4abcu);
    push32(c, 0xc4ac1u); x86_call_known(c, 0xc1eb0u, f_000c1eb0); X86_RET(c, 0xc4ac1u);
    X86_TICK(c, 13);
    // 0c4ac1  push 4
    X86_AT(c, 0xc4ac1u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c4ac3  push 0
    X86_AT(c, 0xc4ac3u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0c4ac5  push 4
    X86_AT(c, 0xc4ac5u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c4ac7  call 0xbc174
    X86_AT(c, 0xc4ac7u);
    push32(c, 0xc4accu); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xc4accu);
    X86_TICK(c, 11);
    // 0c4acc  push 0x46f0
    X86_AT(c, 0xc4accu);
    { uint32_t v = 0x46F0u; push32(c, v); }
    // 0c4ad1  push 4
    X86_AT(c, 0xc4ad1u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c4ad3  call 0xba428
    X86_AT(c, 0xc4ad3u);
    push32(c, 0xc4ad8u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xc4ad8u);
    X86_TICK(c, 9);
    // 0c4ad8  push 2
    X86_AT(c, 0xc4ad8u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0c4ada  call 0xbbb5c
    X86_AT(c, 0xc4adau);
    push32(c, 0xc4adfu); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xc4adfu);
    X86_TICK(c, 9);
    // 0c4adf  push 4
    X86_AT(c, 0xc4adfu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c4ae1  call 0xbb6b0
    X86_AT(c, 0xc4ae1u);
    push32(c, 0xc4ae6u); x86_call_known(c, 0xbb6b0u, f_000bb6b0); X86_RET(c, 0xc4ae6u);
    X86_TICK(c, 17);
    // 0c4ae6  push 0x17
    X86_AT(c, 0xc4ae6u);
    { uint32_t v = 0x17u; push32(c, v); }
    // 0c4ae8  push 0x4d
    X86_AT(c, 0xc4ae8u);
    { uint32_t v = 0x4Du; push32(c, v); }
    // 0c4aea  push 3
    X86_AT(c, 0xc4aeau);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0c4aec  push 0
    X86_AT(c, 0xc4aecu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0c4aee  push 4
    X86_AT(c, 0xc4aeeu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c4af0  call 0xbc2b0
    X86_AT(c, 0xc4af0u);
    push32(c, 0xc4af5u); x86_call_known(c, 0xbc2b0u, f_000bc2b0); X86_RET(c, 0xc4af5u);
    X86_TICK(c, 2);
    // 0c4af5  add esp, 0x30
    X86_AT(c, 0xc4af5u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x30u, 0, 4); }
L_c4af8:
    X86_TICK(c, 28);
    // 0c4af8  pop edi
    X86_AT(c, 0xc4af8u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0c4af9  pop esi
    X86_AT(c, 0xc4af9u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0c4afa  pop ebx
    X86_AT(c, 0xc4afau);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0c4afb  leave 
    X86_AT(c, 0xc4afbu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0c4afc  ret 
    X86_AT(c, 0xc4afcu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xc47bbu, "ran off the end of a function");
}
void f_000c4920(X86Cpu& c) {
    X86_TICK(c, 9);
    // 0c4920  push 2
    X86_AT(c, 0xc4920u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0c4922  call 0xbbb5c
    X86_AT(c, 0xc4922u);
    push32(c, 0xc4927u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xc4927u);
    X86_TICK(c, 9);
    // 0c4927  push 4
    X86_AT(c, 0xc4927u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c4929  call 0xbb6b0
    X86_AT(c, 0xc4929u);
    push32(c, 0xc492eu); x86_call_known(c, 0xbb6b0u, f_000bb6b0); X86_RET(c, 0xc492eu);
    X86_TICK(c, 17);
    // 0c492e  push 0x17
    X86_AT(c, 0xc492eu);
    { uint32_t v = 0x17u; push32(c, v); }
    // 0c4930  push 0x4d
    X86_AT(c, 0xc4930u);
    { uint32_t v = 0x4Du; push32(c, v); }
    // 0c4932  push 3
    X86_AT(c, 0xc4932u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0c4934  push 0
    X86_AT(c, 0xc4934u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0c4936  push 4
    X86_AT(c, 0xc4936u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c4938  call 0xbc2b0
    X86_AT(c, 0xc4938u);
    push32(c, 0xc493du); x86_call_known(c, 0xbc2b0u, f_000bc2b0); X86_RET(c, 0xc493du);
    X86_TICK(c, 9);
    // 0c493d  add esp, 0x1c
    X86_AT(c, 0xc493du);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x1Cu, 0, 4); }
    // 0c4940  jmp 0xc4af8
    X86_AT(c, 0xc4940u);
    goto L_c4af8;
L_c4af8:
    X86_TICK(c, 28);
    // 0c4af8  pop edi
    X86_AT(c, 0xc4af8u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0c4af9  pop esi
    X86_AT(c, 0xc4af9u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0c4afa  pop ebx
    X86_AT(c, 0xc4afau);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0c4afb  leave 
    X86_AT(c, 0xc4afbu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0c4afc  ret 
    X86_AT(c, 0xc4afcu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xc4920u, "ran off the end of a function");
}
void f_000c4af8(X86Cpu& c) {
    X86_TICK(c, 28);
    // 0c4af8  pop edi
    X86_AT(c, 0xc4af8u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0c4af9  pop esi
    X86_AT(c, 0xc4af9u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0c4afa  pop ebx
    X86_AT(c, 0xc4afau);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0c4afb  leave 
    X86_AT(c, 0xc4afbu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0c4afc  ret 
    X86_AT(c, 0xc4afcu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xc4af8u, "ran off the end of a function");
}
void f_000c4b00(X86Cpu& c) {
    X86_TICK(c, 21);
    // 0c4b00  push esi
    X86_AT(c, 0xc4b00u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0c4b01  push edi
    X86_AT(c, 0xc4b01u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c4b02  push 0x17
    X86_AT(c, 0xc4b02u);
    { uint32_t v = 0x17u; push32(c, v); }
    // 0c4b04  push 0x4d
    X86_AT(c, 0xc4b04u);
    { uint32_t v = 0x4Du; push32(c, v); }
    // 0c4b06  push 3
    X86_AT(c, 0xc4b06u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0c4b08  push 0
    X86_AT(c, 0xc4b08u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0c4b0a  push 4
    X86_AT(c, 0xc4b0au);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c4b0c  call 0xbc2b0
    X86_AT(c, 0xc4b0cu);
    push32(c, 0xc4b11u); x86_call_known(c, 0xbc2b0u, f_000bc2b0); X86_RET(c, 0xc4b11u);
    X86_TICK(c, 13);
    // 0c4b11  push 3
    X86_AT(c, 0xc4b11u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0c4b13  push 0
    X86_AT(c, 0xc4b13u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0c4b15  push 4
    X86_AT(c, 0xc4b15u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c4b17  call 0xbc174
    X86_AT(c, 0xc4b17u);
    push32(c, 0xc4b1cu); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xc4b1cu);
    X86_TICK(c, 11);
    // 0c4b1c  push 0xe
    X86_AT(c, 0xc4b1cu);
    { uint32_t v = 0xEu; push32(c, v); }
    // 0c4b1e  push 4
    X86_AT(c, 0xc4b1eu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c4b20  call 0xbc3ec
    X86_AT(c, 0xc4b20u);
    push32(c, 0xc4b25u); x86_call_known(c, 0xbc3ecu, f_000bc3ec); X86_RET(c, 0xc4b25u);
    X86_TICK(c, 9);
    // 0c4b25  push 4
    X86_AT(c, 0xc4b25u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c4b27  call 0xbb6b0
    X86_AT(c, 0xc4b27u);
    push32(c, 0xc4b2cu); x86_call_known(c, 0xbb6b0u, f_000bb6b0); X86_RET(c, 0xc4b2cu);
    X86_TICK(c, 11);
    // 0c4b2c  push 0x473c
    X86_AT(c, 0xc4b2cu);
    { uint32_t v = 0x473Cu; push32(c, v); }
    // 0c4b31  push 4
    X86_AT(c, 0xc4b31u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c4b33  call 0xba428
    X86_AT(c, 0xc4b33u);
    push32(c, 0xc4b38u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xc4b38u);
    X86_TICK(c, 11);
    // 0c4b38  push 0xb
    X86_AT(c, 0xc4b38u);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0c4b3a  push 4
    X86_AT(c, 0xc4b3au);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c4b3c  call 0xbc3ec
    X86_AT(c, 0xc4b3cu);
    push32(c, 0xc4b41u); x86_call_known(c, 0xbc3ecu, f_000bc3ec); X86_RET(c, 0xc4b41u);
    X86_TICK(c, 11);
    // 0c4b41  add esp, 0x3c
    X86_AT(c, 0xc4b41u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x3Cu, 0, 4); }
    // 0c4b44  push 4
    X86_AT(c, 0xc4b44u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c4b46  call 0xbb6b0
    X86_AT(c, 0xc4b46u);
    push32(c, 0xc4b4bu); x86_call_known(c, 0xbb6b0u, f_000bb6b0); X86_RET(c, 0xc4b4bu);
    X86_TICK(c, 13);
    // 0c4b4b  push 4
    X86_AT(c, 0xc4b4bu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c4b4d  push 0
    X86_AT(c, 0xc4b4du);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0c4b4f  push 4
    X86_AT(c, 0xc4b4fu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c4b51  call 0xbc174
    X86_AT(c, 0xc4b51u);
    push32(c, 0xc4b56u); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xc4b56u);
    X86_TICK(c, 14);
    // 0c4b56  add esp, 0x10
    X86_AT(c, 0xc4b56u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0c4b59  cmp dword ptr [0xa4a62], 0
    X86_AT(c, 0xc4b59u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xA4A62u))), 0x0u, 0, 4);
    // 0c4b60  jne 0xc4b8e
    X86_AT(c, 0xc4b60u);
    if (x86_cc(c, 5)) { goto L_c4b8e; }
    X86_TICK(c, 11);
    // 0c4b62  push 0x4774
    X86_AT(c, 0xc4b62u);
    { uint32_t v = 0x4774u; push32(c, v); }
    // 0c4b67  push 4
    X86_AT(c, 0xc4b67u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c4b69  call 0xba428
    X86_AT(c, 0xc4b69u);
    push32(c, 0xc4b6eu); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xc4b6eu);
    X86_TICK(c, 9);
    // 0c4b6e  push 0x47c0
    X86_AT(c, 0xc4b6eu);
    { uint32_t v = 0x47C0u; push32(c, v); }
    // 0c4b73  call 0xbc50c
    X86_AT(c, 0xc4b73u);
    push32(c, 0xc4b78u); x86_call_known(c, 0xbc50cu, f_000bc50c); X86_RET(c, 0xc4b78u);
    X86_TICK(c, 2);
    // 0c4b78  add esp, 0xc
    X86_AT(c, 0xc4b78u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
L_c4b7b:
    X86_TICK(c, 9);
    // 0c4b7b  push 4
    X86_AT(c, 0xc4b7bu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c4b7d  call 0xb9930
    X86_AT(c, 0xc4b7du);
    push32(c, 0xc4b82u); x86_call_known(c, 0xb9930u, f_000b9930); X86_RET(c, 0xc4b82u);
    X86_TICK(c, 9);
    // 0c4b82  add esp, 4
    X86_AT(c, 0xc4b82u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0c4b85  and al, al
    X86_AT(c, 0xc4b85u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & g8(c, 0), 1)); }
    // 0c4b87  je 0xc4b7b
    X86_AT(c, 0xc4b87u);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xc4b7bu); goto L_c4b7b; }
    X86_TICK(c, 7);
    // 0c4b89  jmp 0xc4cd4
    X86_AT(c, 0xc4b89u);
    goto L_c4cd4;
L_c4b8e:
    X86_TICK(c, 9);
    // 0c4b8e  push 0
    X86_AT(c, 0xc4b8eu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0c4b90  call 0xb6d38
    X86_AT(c, 0xc4b90u);
    push32(c, 0xc4b95u); x86_call_known(c, 0xb6d38u, f_000b6d38); X86_RET(c, 0xc4b95u);
    X86_TICK(c, 12);
    // 0c4b95  xchg esi, eax
    X86_AT(c, 0xc4b95u);
    { uint32_t t = c.r[6]; c.r[6] = c.r[0]; c.r[0] = t; }
    // 0c4b96  push 4
    X86_AT(c, 0xc4b96u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c4b98  call 0xbb6b0
    X86_AT(c, 0xc4b98u);
    push32(c, 0xc4b9du); x86_call_known(c, 0xbb6b0u, f_000bb6b0); X86_RET(c, 0xc4b9du);
    X86_TICK(c, 9);
    // 0c4b9d  add esp, 8
    X86_AT(c, 0xc4b9du);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0c4ba0  cmp esi, 0xffffffff
    X86_AT(c, 0xc4ba0u);
    (void)x86_sub(c, c.r[6], 0xFFFFFFFFu, 0, 4);
    // 0c4ba3  je 0xc4bae
    X86_AT(c, 0xc4ba3u);
    if (x86_cc(c, 4)) { goto L_c4bae; }
    X86_TICK(c, 7);
    // 0c4ba5  and esi, esi
    X86_AT(c, 0xc4ba5u);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & c.r[6], 4); }
    // 0c4ba7  je 0xc4bae
    X86_AT(c, 0xc4ba7u);
    if (x86_cc(c, 4)) { goto L_c4bae; }
    X86_TICK(c, 7);
    // 0c4ba9  cmp esi, 1
    X86_AT(c, 0xc4ba9u);
    (void)x86_sub(c, c.r[6], 0x1u, 0, 4);
    // 0c4bac  jne 0xc4b8e
    X86_AT(c, 0xc4bacu);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xc4b8eu); goto L_c4b8e; }
L_c4bae:
    X86_TICK(c, 7);
    // 0c4bae  and esi, esi
    X86_AT(c, 0xc4baeu);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & c.r[6], 4); }
    // 0c4bb0  je 0xc4bd1
    X86_AT(c, 0xc4bb0u);
    if (x86_cc(c, 4)) { goto L_c4bd1; }
    X86_TICK(c, 13);
    // 0c4bb2  push 4
    X86_AT(c, 0xc4bb2u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c4bb4  push 0
    X86_AT(c, 0xc4bb4u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0c4bb6  push 4
    X86_AT(c, 0xc4bb6u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c4bb8  call 0xbc174
    X86_AT(c, 0xc4bb8u);
    push32(c, 0xc4bbdu); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xc4bbdu);
    X86_TICK(c, 11);
    // 0c4bbd  push 0x47f4
    X86_AT(c, 0xc4bbdu);
    { uint32_t v = 0x47F4u; push32(c, v); }
    // 0c4bc2  push 4
    X86_AT(c, 0xc4bc2u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c4bc4  call 0xba428
    X86_AT(c, 0xc4bc4u);
    push32(c, 0xc4bc9u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xc4bc9u);
    X86_TICK(c, 9);
    // 0c4bc9  add esp, 0x14
    X86_AT(c, 0xc4bc9u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x14u, 0, 4); }
    // 0c4bcc  jmp 0xc4cf4
    X86_AT(c, 0xc4bccu);
    goto L_c4cf4;
L_c4bd1:
    X86_TICK(c, 2);
    // 0c4bd1  sub edi, edi
    X86_AT(c, 0xc4bd1u);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
L_c4bd3:
    X86_TICK(c, 7);
    // 0c4bd3  cmp edi, 4
    X86_AT(c, 0xc4bd3u);
    (void)x86_sub(c, c.r[7], 0x4u, 0, 4);
    // 0c4bd6  jge 0xc4c12
    X86_AT(c, 0xc4bd6u);
    if (x86_cc(c, 13)) { goto L_c4c12; }
    X86_TICK(c, 39);
    // 0c4bd8  mov eax, dword ptr [edi*4 + 0xa4a7e]
    X86_AT(c, 0xc4bd8u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[7] * 4 + 0xA4A7Eu)));
    // 0c4bdf  lea edx, [eax + eax*2]
    X86_AT(c, 0xc4bdfu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0c4be2  shl edx, 5
    X86_AT(c, 0xc4be2u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0c4be5  add edx, eax
    X86_AT(c, 0xc4be5u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0c4be7  lea edx, [eax + edx*2]
    X86_AT(c, 0xc4be7u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0c4bea  lea eax, [edx*1 + 0xa4dac]
    X86_AT(c, 0xc4beau);
    c.r[0] = (uint32_t)(c.r[2] + 0xA4DACu);
    // 0c4bf1  push eax
    X86_AT(c, 0xc4bf1u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c4bf2  mov eax, edi
    X86_AT(c, 0xc4bf2u);
    c.r[0] = c.r[7];
    // 0c4bf4  lea edx, [eax + eax*2]
    X86_AT(c, 0xc4bf4u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0c4bf7  shl edx, 5
    X86_AT(c, 0xc4bf7u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0c4bfa  add edx, eax
    X86_AT(c, 0xc4bfau);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0c4bfc  lea edx, [eax + edx*2]
    X86_AT(c, 0xc4bfcu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0c4bff  lea eax, [edx*1 + 0xa4aa0]
    X86_AT(c, 0xc4bffu);
    c.r[0] = (uint32_t)(c.r[2] + 0xA4AA0u);
    // 0c4c06  push eax
    X86_AT(c, 0xc4c06u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c4c07  call 0xc2414
    X86_AT(c, 0xc4c07u);
    push32(c, 0xc4c0cu); x86_call_known(c, 0xc2414u, f_000c2414); X86_RET(c, 0xc4c0cu);
    X86_TICK(c, 11);
    // 0c4c0c  inc edi
    X86_AT(c, 0xc4c0cu);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0c4c0d  add esp, 8
    X86_AT(c, 0xc4c0du);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0c4c10  jmp 0xc4bd3
    X86_AT(c, 0xc4c10u);
    X86_POLL(c, 0xc4bd3u); goto L_c4bd3;
L_c4c12:
    X86_TICK(c, 2);
    // 0c4c12  sub edi, edi
    X86_AT(c, 0xc4c12u);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
L_c4c14:
    X86_TICK(c, 7);
    // 0c4c14  cmp edi, 4
    X86_AT(c, 0xc4c14u);
    (void)x86_sub(c, c.r[7], 0x4u, 0, 4);
    // 0c4c17  jge 0xc4c42
    X86_AT(c, 0xc4c17u);
    if (x86_cc(c, 13)) { goto L_c4c42; }
    X86_TICK(c, 28);
    // 0c4c19  sub eax, eax
    X86_AT(c, 0xc4c19u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0c4c1b  mov dword ptr [edi*4 + 0xa4a7e], eax
    X86_AT(c, 0xc4c1bu);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] * 4 + 0xA4A7Eu)), c.r[0]);
    // 0c4c22  mov edx, edi
    X86_AT(c, 0xc4c22u);
    c.r[2] = c.r[7];
    // 0c4c24  lea ecx, [edx + edx*2]
    X86_AT(c, 0xc4c24u);
    c.r[1] = (uint32_t)(c.r[2] + c.r[2] * 2);
    // 0c4c27  shl ecx, 5
    X86_AT(c, 0xc4c27u);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[1] = r; }
    // 0c4c2a  add ecx, edx
    X86_AT(c, 0xc4c2au);
    { uint32_t v = c.r[1]; c.r[1] = x86_add(c, v, c.r[2], 0, 4); }
    // 0c4c2c  lea ecx, [edx + ecx*2]
    X86_AT(c, 0xc4c2cu);
    c.r[1] = (uint32_t)(c.r[2] + c.r[1] * 2);
    // 0c4c2f  mov dword ptr [ecx + 0xa4ab9], 0xffffffff
    X86_AT(c, 0xc4c2fu);
    wr32((c.sbase[3] + (uint32_t)(c.r[1] + 0xA4AB9u)), 0xFFFFFFFFu);
    // 0c4c39  mov byte ptr [ecx + 0xa4aa0], al
    X86_AT(c, 0xc4c39u);
    wr8((c.sbase[3] + (uint32_t)(c.r[1] + 0xA4AA0u)), g8(c, 0));
    // 0c4c3f  inc edi
    X86_AT(c, 0xc4c3fu);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0c4c40  jmp 0xc4c14
    X86_AT(c, 0xc4c40u);
    X86_POLL(c, 0xc4c14u); goto L_c4c14;
L_c4c42:
    X86_TICK(c, 7);
    // 0c4c42  sub eax, eax
    X86_AT(c, 0xc4c42u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0c4c44  mov dword ptr [0xa4a62], eax
    X86_AT(c, 0xc4c44u);
    wr32((c.sbase[3] + (uint32_t)(0xA4A62u)), c.r[0]);
    // 0c4c49  xchg edi, eax
    X86_AT(c, 0xc4c49u);
    { uint32_t t = c.r[7]; c.r[7] = c.r[0]; c.r[0] = t; }
L_c4c4a:
    X86_TICK(c, 7);
    // 0c4c4a  cmp edi, 4
    X86_AT(c, 0xc4c4au);
    (void)x86_sub(c, c.r[7], 0x4u, 0, 4);
    // 0c4c4d  jge 0xc4c66
    X86_AT(c, 0xc4c4du);
    if (x86_cc(c, 13)) { goto L_c4c66; }
    X86_TICK(c, 22);
    // 0c4c4f  mov eax, edi
    X86_AT(c, 0xc4c4fu);
    c.r[0] = c.r[7];
    // 0c4c51  lea edx, [eax + eax*2]
    X86_AT(c, 0xc4c51u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0c4c54  shl edx, 5
    X86_AT(c, 0xc4c54u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0c4c57  add edx, eax
    X86_AT(c, 0xc4c57u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0c4c59  lea edx, [eax + edx*2]
    X86_AT(c, 0xc4c59u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0c4c5c  mov byte ptr [edx + 0xa4aa0], 0
    X86_AT(c, 0xc4c5cu);
    wr8((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4AA0u)), 0x0u);
    // 0c4c63  inc edi
    X86_AT(c, 0xc4c63u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0c4c64  jmp 0xc4c4a
    X86_AT(c, 0xc4c64u);
    X86_POLL(c, 0xc4c4au); goto L_c4c4a;
L_c4c66:
    X86_TICK(c, 2);
    // 0c4c66  sub edi, edi
    X86_AT(c, 0xc4c66u);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
L_c4c68:
    X86_TICK(c, 7);
    // 0c4c68  cmp edi, 0x14
    X86_AT(c, 0xc4c68u);
    (void)x86_sub(c, c.r[7], 0x14u, 0, 4);
    // 0c4c6b  jge 0xc4c87
    X86_AT(c, 0xc4c6bu);
    if (x86_cc(c, 13)) { goto L_c4c87; }
    X86_TICK(c, 22);
    // 0c4c6d  mov eax, edi
    X86_AT(c, 0xc4c6du);
    c.r[0] = c.r[7];
    // 0c4c6f  lea edx, [eax + eax*2]
    X86_AT(c, 0xc4c6fu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0c4c72  shl edx, 5
    X86_AT(c, 0xc4c72u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0c4c75  add edx, eax
    X86_AT(c, 0xc4c75u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0c4c77  lea edx, [eax + edx*2]
    X86_AT(c, 0xc4c77u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0c4c7a  mov dword ptr [edx + 0xa4dc5], 0xffffffff
    X86_AT(c, 0xc4c7au);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4DC5u)), 0xFFFFFFFFu);
    // 0c4c84  inc edi
    X86_AT(c, 0xc4c84u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0c4c85  jmp 0xc4c68
    X86_AT(c, 0xc4c85u);
    X86_POLL(c, 0xc4c68u); goto L_c4c68;
L_c4c87:
    X86_TICK(c, 7);
    // 0c4c87  call 0xc1060
    X86_AT(c, 0xc4c87u);
    push32(c, 0xc4c8cu); x86_call_known(c, 0xc1060u, f_000c1060); X86_RET(c, 0xc4c8cu);
    X86_TICK(c, 7);
    // 0c4c8c  call 0xc1694
    X86_AT(c, 0xc4c8cu);
    push32(c, 0xc4c91u); x86_call_known(c, 0xc1694u, f_000c1694); X86_RET(c, 0xc4c91u);
    X86_TICK(c, 7);
    // 0c4c91  call 0xc1864
    X86_AT(c, 0xc4c91u);
    push32(c, 0xc4c96u); x86_call_known(c, 0xc1864u, f_000c1864); X86_RET(c, 0xc4c96u);
    X86_TICK(c, 13);
    // 0c4c96  push 3
    X86_AT(c, 0xc4c96u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0c4c98  push 0
    X86_AT(c, 0xc4c98u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0c4c9a  push 4
    X86_AT(c, 0xc4c9au);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c4c9c  call 0xbc174
    X86_AT(c, 0xc4c9cu);
    push32(c, 0xc4ca1u); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xc4ca1u);
    X86_TICK(c, 11);
    // 0c4ca1  push 0x4838
    X86_AT(c, 0xc4ca1u);
    { uint32_t v = 0x4838u; push32(c, v); }
    // 0c4ca6  push 4
    X86_AT(c, 0xc4ca6u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c4ca8  call 0xba428
    X86_AT(c, 0xc4ca8u);
    push32(c, 0xc4cadu); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xc4cadu);
    X86_TICK(c, 11);
    // 0c4cad  push 0x4860
    X86_AT(c, 0xc4cadu);
    { uint32_t v = 0x4860u; push32(c, v); }
    // 0c4cb2  push 4
    X86_AT(c, 0xc4cb2u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c4cb4  call 0xbbba4
    X86_AT(c, 0xc4cb4u);
    push32(c, 0xc4cb9u); x86_call_known(c, 0xbbba4u, f_000bbba4); X86_RET(c, 0xc4cb9u);
    X86_TICK(c, 9);
    // 0c4cb9  push 0x4878
    X86_AT(c, 0xc4cb9u);
    { uint32_t v = 0x4878u; push32(c, v); }
    // 0c4cbe  call 0xbc50c
    X86_AT(c, 0xc4cbeu);
    push32(c, 0xc4cc3u); x86_call_known(c, 0xbc50cu, f_000bc50c); X86_RET(c, 0xc4cc3u);
    X86_TICK(c, 2);
    // 0c4cc3  add esp, 0x20
    X86_AT(c, 0xc4cc3u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x20u, 0, 4); }
L_c4cc6:
    X86_TICK(c, 9);
    // 0c4cc6  push 4
    X86_AT(c, 0xc4cc6u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c4cc8  call 0xb9930
    X86_AT(c, 0xc4cc8u);
    push32(c, 0xc4ccdu); x86_call_known(c, 0xb9930u, f_000b9930); X86_RET(c, 0xc4ccdu);
    X86_TICK(c, 9);
    // 0c4ccd  add esp, 4
    X86_AT(c, 0xc4ccdu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0c4cd0  and al, al
    X86_AT(c, 0xc4cd0u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & g8(c, 0), 1)); }
    // 0c4cd2  je 0xc4cc6
    X86_AT(c, 0xc4cd2u);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xc4cc6u); goto L_c4cc6; }
L_c4cd4:
    X86_TICK(c, 9);
    // 0c4cd4  push 2
    X86_AT(c, 0xc4cd4u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0c4cd6  call 0xbbb5c
    X86_AT(c, 0xc4cd6u);
    push32(c, 0xc4cdbu); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xc4cdbu);
    X86_TICK(c, 9);
    // 0c4cdb  push 4
    X86_AT(c, 0xc4cdbu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c4cdd  call 0xbb6b0
    X86_AT(c, 0xc4cddu);
    push32(c, 0xc4ce2u); x86_call_known(c, 0xbb6b0u, f_000bb6b0); X86_RET(c, 0xc4ce2u);
    X86_TICK(c, 17);
    // 0c4ce2  push 0x17
    X86_AT(c, 0xc4ce2u);
    { uint32_t v = 0x17u; push32(c, v); }
    // 0c4ce4  push 0x4d
    X86_AT(c, 0xc4ce4u);
    { uint32_t v = 0x4Du; push32(c, v); }
    // 0c4ce6  push 3
    X86_AT(c, 0xc4ce6u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0c4ce8  push 0
    X86_AT(c, 0xc4ce8u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0c4cea  push 4
    X86_AT(c, 0xc4ceau);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c4cec  call 0xbc2b0
    X86_AT(c, 0xc4cecu);
    push32(c, 0xc4cf1u); x86_call_known(c, 0xbc2b0u, f_000bc2b0); X86_RET(c, 0xc4cf1u);
    X86_TICK(c, 2);
    // 0c4cf1  add esp, 0x1c
    X86_AT(c, 0xc4cf1u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x1Cu, 0, 4); }
L_c4cf4:
    X86_TICK(c, 18);
    // 0c4cf4  pop edi
    X86_AT(c, 0xc4cf4u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0c4cf5  pop esi
    X86_AT(c, 0xc4cf5u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0c4cf6  ret 
    X86_AT(c, 0xc4cf6u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xc4b00u, "ran off the end of a function");
}
void f_000c4cf8(X86Cpu& c) {
    X86_TICK(c, 21);
    // 0c4cf8  push ebp
    X86_AT(c, 0xc4cf8u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0c4cf9  mov ebp, esp
    X86_AT(c, 0xc4cf9u);
    c.r[5] = c.r[4];
    // 0c4cfb  sub esp, 0x24
    X86_AT(c, 0xc4cfbu);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, 0x24u, 0, 4); }
    // 0c4cfe  push ebx
    X86_AT(c, 0xc4cfeu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0c4cff  push esi
    X86_AT(c, 0xc4cffu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0c4d00  push edi
    X86_AT(c, 0xc4d00u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c4d01  push 6
    X86_AT(c, 0xc4d01u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0c4d03  call 0xb8888
    X86_AT(c, 0xc4d03u);
    push32(c, 0xc4d08u); x86_call_known(c, 0xb8888u, f_000b8888); X86_RET(c, 0xc4d08u);
    X86_TICK(c, 27);
    // 0c4d08  push 0xd
    X86_AT(c, 0xc4d08u);
    { uint32_t v = 0xDu; push32(c, v); }
    // 0c4d0a  push 0xf
    X86_AT(c, 0xc4d0au);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0c4d0c  push 0xb
    X86_AT(c, 0xc4d0cu);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0c4d0e  push 0x17
    X86_AT(c, 0xc4d0eu);
    { uint32_t v = 0x17u; push32(c, v); }
    // 0c4d10  push 0x4d
    X86_AT(c, 0xc4d10u);
    { uint32_t v = 0x4Du; push32(c, v); }
    // 0c4d12  push 0x186
    X86_AT(c, 0xc4d12u);
    { uint32_t v = 0x186u; push32(c, v); }
    // 0c4d17  push 0x276
    X86_AT(c, 0xc4d17u);
    { uint32_t v = 0x276u; push32(c, v); }
    // 0c4d1c  push 0x1c
    X86_AT(c, 0xc4d1cu);
    { uint32_t v = 0x1Cu; push32(c, v); }
    // 0c4d1e  push 5
    X86_AT(c, 0xc4d1eu);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0c4d20  push 4
    X86_AT(c, 0xc4d20u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c4d22  call 0xbb5cc
    X86_AT(c, 0xc4d22u);
    push32(c, 0xc4d27u); x86_call_known(c, 0xbb5ccu, f_000bb5cc); X86_RET(c, 0xc4d27u);
    X86_TICK(c, 9);
    // 0c4d27  push 4
    X86_AT(c, 0xc4d27u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c4d29  call 0xbb710
    X86_AT(c, 0xc4d29u);
    push32(c, 0xc4d2eu); x86_call_known(c, 0xbb710u, f_000bb710); X86_RET(c, 0xc4d2eu);
    X86_TICK(c, 11);
    // 0c4d2e  push 0xe
    X86_AT(c, 0xc4d2eu);
    { uint32_t v = 0xEu; push32(c, v); }
    // 0c4d30  push 4
    X86_AT(c, 0xc4d30u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c4d32  call 0xbc3ec
    X86_AT(c, 0xc4d32u);
    push32(c, 0xc4d37u); x86_call_known(c, 0xbc3ecu, f_000bc3ec); X86_RET(c, 0xc4d37u);
    X86_TICK(c, 9);
    // 0c4d37  push 4
    X86_AT(c, 0xc4d37u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c4d39  call 0xbb6b0
    X86_AT(c, 0xc4d39u);
    push32(c, 0xc4d3eu); x86_call_known(c, 0xbb6b0u, f_000bb6b0); X86_RET(c, 0xc4d3eu);
    X86_TICK(c, 15);
    // 0c4d3e  add esp, 0x3c
    X86_AT(c, 0xc4d3eu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x3Cu, 0, 4); }
    // 0c4d41  push 0
    X86_AT(c, 0xc4d41u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0c4d43  push 0x13
    X86_AT(c, 0xc4d43u);
    { uint32_t v = 0x13u; push32(c, v); }
    // 0c4d45  push 4
    X86_AT(c, 0xc4d45u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c4d47  call 0xbc174
    X86_AT(c, 0xc4d47u);
    push32(c, 0xc4d4cu); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xc4d4cu);
    X86_TICK(c, 11);
    // 0c4d4c  push 0x48ac
    X86_AT(c, 0xc4d4cu);
    { uint32_t v = 0x48ACu; push32(c, v); }
    // 0c4d51  push 4
    X86_AT(c, 0xc4d51u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c4d53  call 0xba428
    X86_AT(c, 0xc4d53u);
    push32(c, 0xc4d58u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xc4d58u);
    X86_TICK(c, 11);
    // 0c4d58  push 0xb
    X86_AT(c, 0xc4d58u);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0c4d5a  push 4
    X86_AT(c, 0xc4d5au);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c4d5c  call 0xbc3ec
    X86_AT(c, 0xc4d5cu);
    push32(c, 0xc4d61u); x86_call_known(c, 0xbc3ecu, f_000bc3ec); X86_RET(c, 0xc4d61u);
    X86_TICK(c, 9);
    // 0c4d61  push 4
    X86_AT(c, 0xc4d61u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c4d63  call 0xbb6b0
    X86_AT(c, 0xc4d63u);
    push32(c, 0xc4d68u); x86_call_known(c, 0xbb6b0u, f_000bb6b0); X86_RET(c, 0xc4d68u);
    X86_TICK(c, 13);
    // 0c4d68  push 2
    X86_AT(c, 0xc4d68u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0c4d6a  push 5
    X86_AT(c, 0xc4d6au);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0c4d6c  push 4
    X86_AT(c, 0xc4d6cu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c4d6e  call 0xbc174
    X86_AT(c, 0xc4d6eu);
    push32(c, 0xc4d73u); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xc4d73u);
    X86_TICK(c, 11);
    // 0c4d73  push 0x4900
    X86_AT(c, 0xc4d73u);
    { uint32_t v = 0x4900u; push32(c, v); }
    // 0c4d78  push 4
    X86_AT(c, 0xc4d78u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c4d7a  call 0xba428
    X86_AT(c, 0xc4d7au);
    push32(c, 0xc4d7fu); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xc4d7fu);
    X86_TICK(c, 2);
    // 0c4d7f  add esp, 0x34
    X86_AT(c, 0xc4d7fu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x34u, 0, 4); }
L_c4d82:
    X86_TICK(c, 9);
    // 0c4d82  push 0
    X86_AT(c, 0xc4d82u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0c4d84  call 0xb6d38
    X86_AT(c, 0xc4d84u);
    push32(c, 0xc4d89u); x86_call_known(c, 0xb6d38u, f_000b6d38); X86_RET(c, 0xc4d89u);
    X86_TICK(c, 12);
    // 0c4d89  xchg edi, eax
    X86_AT(c, 0xc4d89u);
    { uint32_t t = c.r[7]; c.r[7] = c.r[0]; c.r[0] = t; }
    // 0c4d8a  push 4
    X86_AT(c, 0xc4d8au);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c4d8c  call 0xbb6b0
    X86_AT(c, 0xc4d8cu);
    push32(c, 0xc4d91u); x86_call_known(c, 0xbb6b0u, f_000bb6b0); X86_RET(c, 0xc4d91u);
    X86_TICK(c, 9);
    // 0c4d91  add esp, 8
    X86_AT(c, 0xc4d91u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0c4d94  cmp edi, 0xffffffff
    X86_AT(c, 0xc4d94u);
    (void)x86_sub(c, c.r[7], 0xFFFFFFFFu, 0, 4);
    // 0c4d97  je 0xc4da2
    X86_AT(c, 0xc4d97u);
    if (x86_cc(c, 4)) { goto L_c4da2; }
    X86_TICK(c, 7);
    // 0c4d99  and edi, edi
    X86_AT(c, 0xc4d99u);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & c.r[7], 4); }
    // 0c4d9b  je 0xc4da2
    X86_AT(c, 0xc4d9bu);
    if (x86_cc(c, 4)) { goto L_c4da2; }
    X86_TICK(c, 7);
    // 0c4d9d  cmp edi, 1
    X86_AT(c, 0xc4d9du);
    (void)x86_sub(c, c.r[7], 0x1u, 0, 4);
    // 0c4da0  jne 0xc4d82
    X86_AT(c, 0xc4da0u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xc4d82u); goto L_c4d82; }
L_c4da2:
    X86_TICK(c, 9);
    // 0c4da2  push 2
    X86_AT(c, 0xc4da2u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0c4da4  call 0xbbb5c
    X86_AT(c, 0xc4da4u);
    push32(c, 0xc4da9u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xc4da9u);
    X86_TICK(c, 9);
    // 0c4da9  add esp, 4
    X86_AT(c, 0xc4da9u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0c4dac  and edi, edi
    X86_AT(c, 0xc4dacu);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & c.r[7], 4); }
    // 0c4dae  je 0xc4dd8
    X86_AT(c, 0xc4daeu);
    if (x86_cc(c, 4)) { goto L_c4dd8; }
    X86_TICK(c, 13);
    // 0c4db0  push 4
    X86_AT(c, 0xc4db0u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c4db2  push 0
    X86_AT(c, 0xc4db2u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0c4db4  push 4
    X86_AT(c, 0xc4db4u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c4db6  call 0xbc174
    X86_AT(c, 0xc4db6u);
    push32(c, 0xc4dbbu); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xc4dbbu);
    X86_TICK(c, 11);
    // 0c4dbb  push 0x4920
    X86_AT(c, 0xc4dbbu);
    { uint32_t v = 0x4920u; push32(c, v); }
    // 0c4dc0  push 4
    X86_AT(c, 0xc4dc0u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c4dc2  call 0xba428
    X86_AT(c, 0xc4dc2u);
    push32(c, 0xc4dc7u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xc4dc7u);
    X86_TICK(c, 11);
    // 0c4dc7  push 0
    X86_AT(c, 0xc4dc7u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0c4dc9  push 4
    X86_AT(c, 0xc4dc9u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c4dcb  call 0xbba64
    X86_AT(c, 0xc4dcbu);
    push32(c, 0xc4dd0u); x86_call_known(c, 0xbba64u, f_000bba64); X86_RET(c, 0xc4dd0u);
    X86_TICK(c, 9);
    // 0c4dd0  add esp, 0x1c
    X86_AT(c, 0xc4dd0u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x1Cu, 0, 4); }
    // 0c4dd3  jmp 0xc4f3d
    X86_AT(c, 0xc4dd3u);
    goto L_c4f3d;
L_c4dd8:
    X86_TICK(c, 9);
    // 0c4dd8  push 0x4960
    X86_AT(c, 0xc4dd8u);
    { uint32_t v = 0x4960u; push32(c, v); }
    // 0c4ddd  call 0xb6c2c
    X86_AT(c, 0xc4dddu);
    push32(c, 0xc4de2u); x86_call_known(c, 0xb6c2cu, f_000b6c2c); X86_RET(c, 0xc4de2u);
    X86_TICK(c, 9);
    // 0c4de2  add esp, 4
    X86_AT(c, 0xc4de2u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0c4de5  and eax, eax
    X86_AT(c, 0xc4de5u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0c4de7  jne 0xc4dee
    X86_AT(c, 0xc4de7u);
    if (x86_cc(c, 5)) { goto L_c4dee; }
    X86_TICK(c, 7);
    // 0c4de9  call 0xbf3b4
    X86_AT(c, 0xc4de9u);
    push32(c, 0xc4deeu); x86_call_known(c, 0xbf3b4u, f_000bf3b4); X86_RET(c, 0xc4deeu);
L_c4dee:
    X86_TICK(c, 9);
    // 0c4dee  push 0x4970
    X86_AT(c, 0xc4deeu);
    { uint32_t v = 0x4970u; push32(c, v); }
    // 0c4df3  call 0xb6c2c
    X86_AT(c, 0xc4df3u);
    push32(c, 0xc4df8u); x86_call_known(c, 0xb6c2cu, f_000b6c2c); X86_RET(c, 0xc4df8u);
    X86_TICK(c, 9);
    // 0c4df8  add esp, 4
    X86_AT(c, 0xc4df8u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0c4dfb  and eax, eax
    X86_AT(c, 0xc4dfbu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0c4dfd  jne 0xc4e04
    X86_AT(c, 0xc4dfdu);
    if (x86_cc(c, 5)) { goto L_c4e04; }
    X86_TICK(c, 7);
    // 0c4dff  call 0xbfeb4
    X86_AT(c, 0xc4dffu);
    push32(c, 0xc4e04u); x86_call_known(c, 0xbfeb4u, f_000bfeb4); X86_RET(c, 0xc4e04u);
L_c4e04:
    X86_TICK(c, 9);
    // 0c4e04  push 0x4980
    X86_AT(c, 0xc4e04u);
    { uint32_t v = 0x4980u; push32(c, v); }
    // 0c4e09  call 0xb6c2c
    X86_AT(c, 0xc4e09u);
    push32(c, 0xc4e0eu); x86_call_known(c, 0xb6c2cu, f_000b6c2c); X86_RET(c, 0xc4e0eu);
    X86_TICK(c, 9);
    // 0c4e0e  add esp, 4
    X86_AT(c, 0xc4e0eu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0c4e11  and eax, eax
    X86_AT(c, 0xc4e11u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0c4e13  jne 0xc4e1a
    X86_AT(c, 0xc4e13u);
    if (x86_cc(c, 5)) { goto L_c4e1a; }
    X86_TICK(c, 7);
    // 0c4e15  call 0xc01e8
    X86_AT(c, 0xc4e15u);
    push32(c, 0xc4e1au); x86_call_known(c, 0xc01e8u, f_000c01e8); X86_RET(c, 0xc4e1au);
L_c4e1a:
    X86_TICK(c, 25);
    // 0c4e1a  push 0xa7914
    X86_AT(c, 0xc4e1au);
    { uint32_t v = 0xA7914u; push32(c, v); }
    // 0c4e1f  push 3
    X86_AT(c, 0xc4e1fu);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0c4e21  push 2
    X86_AT(c, 0xc4e21u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0c4e23  push 1
    X86_AT(c, 0xc4e23u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0c4e25  push 0x2a
    X86_AT(c, 0xc4e25u);
    { uint32_t v = 0x2Au; push32(c, v); }
    // 0c4e27  push 7
    X86_AT(c, 0xc4e27u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c4e29  push 4
    X86_AT(c, 0xc4e29u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c4e2b  lea eax, [ebp - 0x24]
    X86_AT(c, 0xc4e2bu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFDCu);
    // 0c4e2e  push eax
    X86_AT(c, 0xc4e2eu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c4e2f  call 0xb9e9c
    X86_AT(c, 0xc4e2fu);
    push32(c, 0xc4e34u); x86_call_known(c, 0xb9e9cu, f_000b9e9c); X86_RET(c, 0xc4e34u);
    X86_TICK(c, 2);
    // 0c4e34  add esp, 0x20
    X86_AT(c, 0xc4e34u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x20u, 0, 4); }
L_c4e37:
    X86_TICK(c, 9);
    // 0c4e37  push 4
    X86_AT(c, 0xc4e37u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c4e39  call 0xbb6b0
    X86_AT(c, 0xc4e39u);
    push32(c, 0xc4e3eu); x86_call_known(c, 0xbb6b0u, f_000bb6b0); X86_RET(c, 0xc4e3eu);
    X86_TICK(c, 13);
    // 0c4e3e  push 2
    X86_AT(c, 0xc4e3eu);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0c4e40  push 0x13
    X86_AT(c, 0xc4e40u);
    { uint32_t v = 0x13u; push32(c, v); }
    // 0c4e42  push 4
    X86_AT(c, 0xc4e42u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c4e44  call 0xbc174
    X86_AT(c, 0xc4e44u);
    push32(c, 0xc4e49u); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xc4e49u);
    X86_TICK(c, 11);
    // 0c4e49  push 0x4990
    X86_AT(c, 0xc4e49u);
    { uint32_t v = 0x4990u; push32(c, v); }
    // 0c4e4e  push 4
    X86_AT(c, 0xc4e4eu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c4e50  call 0xbbba4
    X86_AT(c, 0xc4e50u);
    push32(c, 0xc4e55u); x86_call_known(c, 0xbbba4u, f_000bbba4); X86_RET(c, 0xc4e55u);
    X86_TICK(c, 15);
    // 0c4e55  push 0x4d
    X86_AT(c, 0xc4e55u);
    { uint32_t v = 0x4Du; push32(c, v); }
    // 0c4e57  lea eax, [ebp - 0x24]
    X86_AT(c, 0xc4e57u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFDCu);
    // 0c4e5a  push eax
    X86_AT(c, 0xc4e5au);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c4e5b  push 4
    X86_AT(c, 0xc4e5bu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c4e5d  call 0xba21c
    X86_AT(c, 0xc4e5du);
    push32(c, 0xc4e62u); x86_call_known(c, 0xba21cu, f_000ba21c); X86_RET(c, 0xc4e62u);
    X86_TICK(c, 16);
    // 0c4e62  xchg ebx, eax
    X86_AT(c, 0xc4e62u);
    { uint32_t t = c.r[3]; c.r[3] = c.r[0]; c.r[0] = t; }
    // 0c4e63  push 2
    X86_AT(c, 0xc4e63u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0c4e65  push 0x13
    X86_AT(c, 0xc4e65u);
    { uint32_t v = 0x13u; push32(c, v); }
    // 0c4e67  push 4
    X86_AT(c, 0xc4e67u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c4e69  call 0xbc174
    X86_AT(c, 0xc4e69u);
    push32(c, 0xc4e6eu); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xc4e6eu);
    X86_TICK(c, 19);
    // 0c4e6e  mov byte ptr [ebp - 1], 0
    X86_AT(c, 0xc4e6eu);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFFu)), 0x0u);
    // 0c4e72  lea esi, [ebp - 1]
    X86_AT(c, 0xc4e72u);
    c.r[6] = (uint32_t)(c.r[5] + 0xFFFFFFFFu);
    // 0c4e75  push esi
    X86_AT(c, 0xc4e75u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0c4e76  push ebx
    X86_AT(c, 0xc4e76u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0c4e77  push 7
    X86_AT(c, 0xc4e77u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c4e79  push 0xa7cb0
    X86_AT(c, 0xc4e79u);
    { uint32_t v = 0xA7CB0u; push32(c, v); }
    // 0c4e7e  call 0xba1b4
    X86_AT(c, 0xc4e7eu);
    push32(c, 0xc4e83u); x86_call_known(c, 0xba1b4u, f_000ba1b4); X86_RET(c, 0xc4e83u);
    X86_TICK(c, 13);
    // 0c4e83  add esp, 0x40
    X86_AT(c, 0xc4e83u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x40u, 0, 4); }
    // 0c4e86  push eax
    X86_AT(c, 0xc4e86u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c4e87  push 4
    X86_AT(c, 0xc4e87u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c4e89  call 0xbbba4
    X86_AT(c, 0xc4e89u);
    push32(c, 0xc4e8eu); x86_call_known(c, 0xbbba4u, f_000bbba4); X86_RET(c, 0xc4e8eu);
    X86_TICK(c, 9);
    // 0c4e8e  push 0x14
    X86_AT(c, 0xc4e8eu);
    { uint32_t v = 0x14u; push32(c, v); }
    // 0c4e90  call 0xbebbc
    X86_AT(c, 0xc4e90u);
    push32(c, 0xc4e95u); x86_call_known(c, 0xbebbcu, f_000bebbc); X86_RET(c, 0xc4e95u);
    X86_TICK(c, 17);
    // 0c4e95  add esp, 0xc
    X86_AT(c, 0xc4e95u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0c4e98  movzx edx, byte ptr [esi]
    X86_AT(c, 0xc4e98u);
    c.r[2] = rd8((c.sbase[3] + (uint32_t)(c.r[6])));
    // 0c4e9b  sub edx, 0x43
    X86_AT(c, 0xc4e9bu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, 0x43u, 0, 4); }
    // 0c4e9e  cmp edx, 0x11
    X86_AT(c, 0xc4e9eu);
    (void)x86_sub(c, c.r[2], 0x11u, 0, 4);
    // 0c4ea1  ja 0xc4e37
    X86_AT(c, 0xc4ea1u);
    if (x86_cc(c, 7)) { X86_POLL(c, 0xc4e37u); goto L_c4e37; }
    X86_TICK(c, 7);
    // 0c4ea3  jmp dword ptr cs:[edx*4 + 0xc4eab]
    X86_AT(c, 0xc4ea3u);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xC4EABu)));
      switch (t) {
      case 0xc4e37u: X86_POLL(c, 0xc4e37u); goto L_c4e37;
      case 0xc4ef3u: goto L_c4ef3;
      case 0xc4f01u: goto L_c4f01;
      case 0xc4f0bu: goto L_c4f0b;
      case 0xc4f15u: goto L_c4f15;
      case 0xc4f1fu: goto L_c4f1f;
      case 0xc4f29u: goto L_c4f29;
      case 0xc4f33u: goto L_c4f33;
      default: x86_jump(c, t); return; } }
L_c4ef3:
    X86_TICK(c, 11);
    // 0c4ef3  push 0
    X86_AT(c, 0xc4ef3u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0c4ef5  push 4
    X86_AT(c, 0xc4ef5u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c4ef7  call 0xbba64
    X86_AT(c, 0xc4ef7u);
    push32(c, 0xc4efcu); x86_call_known(c, 0xbba64u, f_000bba64); X86_RET(c, 0xc4efcu);
    X86_TICK(c, 9);
    // 0c4efc  add esp, 8
    X86_AT(c, 0xc4efcu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0c4eff  jmp 0xc4f3d
    X86_AT(c, 0xc4effu);
    goto L_c4f3d;
L_c4f01:
    X86_TICK(c, 7);
    // 0c4f01  call 0xc2430
    X86_AT(c, 0xc4f01u);
    push32(c, 0xc4f06u); x86_call_known(c, 0xc2430u, f_000c2430); X86_RET(c, 0xc4f06u);
    X86_TICK(c, 7);
    // 0c4f06  jmp 0xc4e37
    X86_AT(c, 0xc4f06u);
    X86_POLL(c, 0xc4e37u); goto L_c4e37;
L_c4f0b:
    X86_TICK(c, 7);
    // 0c4f0b  call 0xc35d0
    X86_AT(c, 0xc4f0bu);
    push32(c, 0xc4f10u); x86_call_known(c, 0xc35d0u, f_000c35d0); X86_RET(c, 0xc4f10u);
    X86_TICK(c, 7);
    // 0c4f10  jmp 0xc4e37
    X86_AT(c, 0xc4f10u);
    X86_POLL(c, 0xc4e37u); goto L_c4e37;
L_c4f15:
    X86_TICK(c, 7);
    // 0c4f15  call 0xc4408
    X86_AT(c, 0xc4f15u);
    push32(c, 0xc4f1au); x86_call_known(c, 0xc4408u, f_000c4408); X86_RET(c, 0xc4f1au);
    X86_TICK(c, 7);
    // 0c4f1a  jmp 0xc4e37
    X86_AT(c, 0xc4f1au);
    X86_POLL(c, 0xc4e37u); goto L_c4e37;
L_c4f1f:
    X86_TICK(c, 7);
    // 0c4f1f  call 0xc4b00
    X86_AT(c, 0xc4f1fu);
    push32(c, 0xc4f24u); x86_call_known(c, 0xc4b00u, f_000c4b00); X86_RET(c, 0xc4f24u);
    X86_TICK(c, 7);
    // 0c4f24  jmp 0xc4e37
    X86_AT(c, 0xc4f24u);
    X86_POLL(c, 0xc4e37u); goto L_c4e37;
L_c4f29:
    X86_TICK(c, 7);
    // 0c4f29  call 0xc3b44
    X86_AT(c, 0xc4f29u);
    push32(c, 0xc4f2eu); x86_call_known(c, 0xc3b44u, f_000c3b44); X86_RET(c, 0xc4f2eu);
    X86_TICK(c, 7);
    // 0c4f2e  jmp 0xc4e37
    X86_AT(c, 0xc4f2eu);
    X86_POLL(c, 0xc4e37u); goto L_c4e37;
L_c4f33:
    X86_TICK(c, 7);
    // 0c4f33  call 0xc3ec8
    X86_AT(c, 0xc4f33u);
    push32(c, 0xc4f38u); x86_call_known(c, 0xc3ec8u, f_000c3ec8); X86_RET(c, 0xc4f38u);
    X86_TICK(c, 7);
    // 0c4f38  jmp 0xc4e37
    X86_AT(c, 0xc4f38u);
    X86_POLL(c, 0xc4e37u); goto L_c4e37;
L_c4f3d:
    X86_TICK(c, 28);
    // 0c4f3d  pop edi
    X86_AT(c, 0xc4f3du);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0c4f3e  pop esi
    X86_AT(c, 0xc4f3eu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0c4f3f  pop ebx
    X86_AT(c, 0xc4f3fu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0c4f40  leave 
    X86_AT(c, 0xc4f40u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0c4f41  ret 
    X86_AT(c, 0xc4f41u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xc4cf8u, "ran off the end of a function");
}
void f_000c4e37(X86Cpu& c) {
L_c4e37:
    X86_TICK(c, 9);
    // 0c4e37  push 4
    X86_AT(c, 0xc4e37u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c4e39  call 0xbb6b0
    X86_AT(c, 0xc4e39u);
    push32(c, 0xc4e3eu); x86_call_known(c, 0xbb6b0u, f_000bb6b0); X86_RET(c, 0xc4e3eu);
    X86_TICK(c, 13);
    // 0c4e3e  push 2
    X86_AT(c, 0xc4e3eu);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0c4e40  push 0x13
    X86_AT(c, 0xc4e40u);
    { uint32_t v = 0x13u; push32(c, v); }
    // 0c4e42  push 4
    X86_AT(c, 0xc4e42u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c4e44  call 0xbc174
    X86_AT(c, 0xc4e44u);
    push32(c, 0xc4e49u); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xc4e49u);
    X86_TICK(c, 11);
    // 0c4e49  push 0x4990
    X86_AT(c, 0xc4e49u);
    { uint32_t v = 0x4990u; push32(c, v); }
    // 0c4e4e  push 4
    X86_AT(c, 0xc4e4eu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c4e50  call 0xbbba4
    X86_AT(c, 0xc4e50u);
    push32(c, 0xc4e55u); x86_call_known(c, 0xbbba4u, f_000bbba4); X86_RET(c, 0xc4e55u);
    X86_TICK(c, 15);
    // 0c4e55  push 0x4d
    X86_AT(c, 0xc4e55u);
    { uint32_t v = 0x4Du; push32(c, v); }
    // 0c4e57  lea eax, [ebp - 0x24]
    X86_AT(c, 0xc4e57u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFDCu);
    // 0c4e5a  push eax
    X86_AT(c, 0xc4e5au);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c4e5b  push 4
    X86_AT(c, 0xc4e5bu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c4e5d  call 0xba21c
    X86_AT(c, 0xc4e5du);
    push32(c, 0xc4e62u); x86_call_known(c, 0xba21cu, f_000ba21c); X86_RET(c, 0xc4e62u);
    X86_TICK(c, 16);
    // 0c4e62  xchg ebx, eax
    X86_AT(c, 0xc4e62u);
    { uint32_t t = c.r[3]; c.r[3] = c.r[0]; c.r[0] = t; }
    // 0c4e63  push 2
    X86_AT(c, 0xc4e63u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0c4e65  push 0x13
    X86_AT(c, 0xc4e65u);
    { uint32_t v = 0x13u; push32(c, v); }
    // 0c4e67  push 4
    X86_AT(c, 0xc4e67u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c4e69  call 0xbc174
    X86_AT(c, 0xc4e69u);
    push32(c, 0xc4e6eu); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xc4e6eu);
    X86_TICK(c, 19);
    // 0c4e6e  mov byte ptr [ebp - 1], 0
    X86_AT(c, 0xc4e6eu);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFFu)), 0x0u);
    // 0c4e72  lea esi, [ebp - 1]
    X86_AT(c, 0xc4e72u);
    c.r[6] = (uint32_t)(c.r[5] + 0xFFFFFFFFu);
    // 0c4e75  push esi
    X86_AT(c, 0xc4e75u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0c4e76  push ebx
    X86_AT(c, 0xc4e76u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0c4e77  push 7
    X86_AT(c, 0xc4e77u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c4e79  push 0xa7cb0
    X86_AT(c, 0xc4e79u);
    { uint32_t v = 0xA7CB0u; push32(c, v); }
    // 0c4e7e  call 0xba1b4
    X86_AT(c, 0xc4e7eu);
    push32(c, 0xc4e83u); x86_call_known(c, 0xba1b4u, f_000ba1b4); X86_RET(c, 0xc4e83u);
    X86_TICK(c, 13);
    // 0c4e83  add esp, 0x40
    X86_AT(c, 0xc4e83u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x40u, 0, 4); }
    // 0c4e86  push eax
    X86_AT(c, 0xc4e86u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c4e87  push 4
    X86_AT(c, 0xc4e87u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c4e89  call 0xbbba4
    X86_AT(c, 0xc4e89u);
    push32(c, 0xc4e8eu); x86_call_known(c, 0xbbba4u, f_000bbba4); X86_RET(c, 0xc4e8eu);
    X86_TICK(c, 9);
    // 0c4e8e  push 0x14
    X86_AT(c, 0xc4e8eu);
    { uint32_t v = 0x14u; push32(c, v); }
    // 0c4e90  call 0xbebbc
    X86_AT(c, 0xc4e90u);
    push32(c, 0xc4e95u); x86_call_known(c, 0xbebbcu, f_000bebbc); X86_RET(c, 0xc4e95u);
    X86_TICK(c, 17);
    // 0c4e95  add esp, 0xc
    X86_AT(c, 0xc4e95u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0c4e98  movzx edx, byte ptr [esi]
    X86_AT(c, 0xc4e98u);
    c.r[2] = rd8((c.sbase[3] + (uint32_t)(c.r[6])));
    // 0c4e9b  sub edx, 0x43
    X86_AT(c, 0xc4e9bu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, 0x43u, 0, 4); }
    // 0c4e9e  cmp edx, 0x11
    X86_AT(c, 0xc4e9eu);
    (void)x86_sub(c, c.r[2], 0x11u, 0, 4);
    // 0c4ea1  ja 0xc4e37
    X86_AT(c, 0xc4ea1u);
    if (x86_cc(c, 7)) { X86_POLL(c, 0xc4e37u); goto L_c4e37; }
    X86_TICK(c, 7);
    // 0c4ea3  jmp dword ptr cs:[edx*4 + 0xc4eab]
    X86_AT(c, 0xc4ea3u);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xC4EABu)));
      switch (t) {
      case 0xc4e37u: X86_POLL(c, 0xc4e37u); goto L_c4e37;
      case 0xc4ef3u: goto L_c4ef3;
      case 0xc4f01u: goto L_c4f01;
      case 0xc4f0bu: goto L_c4f0b;
      case 0xc4f15u: goto L_c4f15;
      case 0xc4f1fu: goto L_c4f1f;
      case 0xc4f29u: goto L_c4f29;
      case 0xc4f33u: goto L_c4f33;
      default: x86_jump(c, t); return; } }
L_c4ef3:
    X86_TICK(c, 11);
    // 0c4ef3  push 0
    X86_AT(c, 0xc4ef3u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0c4ef5  push 4
    X86_AT(c, 0xc4ef5u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c4ef7  call 0xbba64
    X86_AT(c, 0xc4ef7u);
    push32(c, 0xc4efcu); x86_call_known(c, 0xbba64u, f_000bba64); X86_RET(c, 0xc4efcu);
    X86_TICK(c, 9);
    // 0c4efc  add esp, 8
    X86_AT(c, 0xc4efcu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0c4eff  jmp 0xc4f3d
    X86_AT(c, 0xc4effu);
    goto L_c4f3d;
L_c4f01:
    X86_TICK(c, 7);
    // 0c4f01  call 0xc2430
    X86_AT(c, 0xc4f01u);
    push32(c, 0xc4f06u); x86_call_known(c, 0xc2430u, f_000c2430); X86_RET(c, 0xc4f06u);
    X86_TICK(c, 7);
    // 0c4f06  jmp 0xc4e37
    X86_AT(c, 0xc4f06u);
    X86_POLL(c, 0xc4e37u); goto L_c4e37;
L_c4f0b:
    X86_TICK(c, 7);
    // 0c4f0b  call 0xc35d0
    X86_AT(c, 0xc4f0bu);
    push32(c, 0xc4f10u); x86_call_known(c, 0xc35d0u, f_000c35d0); X86_RET(c, 0xc4f10u);
    X86_TICK(c, 7);
    // 0c4f10  jmp 0xc4e37
    X86_AT(c, 0xc4f10u);
    X86_POLL(c, 0xc4e37u); goto L_c4e37;
L_c4f15:
    X86_TICK(c, 7);
    // 0c4f15  call 0xc4408
    X86_AT(c, 0xc4f15u);
    push32(c, 0xc4f1au); x86_call_known(c, 0xc4408u, f_000c4408); X86_RET(c, 0xc4f1au);
    X86_TICK(c, 7);
    // 0c4f1a  jmp 0xc4e37
    X86_AT(c, 0xc4f1au);
    X86_POLL(c, 0xc4e37u); goto L_c4e37;
L_c4f1f:
    X86_TICK(c, 7);
    // 0c4f1f  call 0xc4b00
    X86_AT(c, 0xc4f1fu);
    push32(c, 0xc4f24u); x86_call_known(c, 0xc4b00u, f_000c4b00); X86_RET(c, 0xc4f24u);
    X86_TICK(c, 7);
    // 0c4f24  jmp 0xc4e37
    X86_AT(c, 0xc4f24u);
    X86_POLL(c, 0xc4e37u); goto L_c4e37;
L_c4f29:
    X86_TICK(c, 7);
    // 0c4f29  call 0xc3b44
    X86_AT(c, 0xc4f29u);
    push32(c, 0xc4f2eu); x86_call_known(c, 0xc3b44u, f_000c3b44); X86_RET(c, 0xc4f2eu);
    X86_TICK(c, 7);
    // 0c4f2e  jmp 0xc4e37
    X86_AT(c, 0xc4f2eu);
    X86_POLL(c, 0xc4e37u); goto L_c4e37;
L_c4f33:
    X86_TICK(c, 7);
    // 0c4f33  call 0xc3ec8
    X86_AT(c, 0xc4f33u);
    push32(c, 0xc4f38u); x86_call_known(c, 0xc3ec8u, f_000c3ec8); X86_RET(c, 0xc4f38u);
    X86_TICK(c, 7);
    // 0c4f38  jmp 0xc4e37
    X86_AT(c, 0xc4f38u);
    X86_POLL(c, 0xc4e37u); goto L_c4e37;
L_c4f3d:
    X86_TICK(c, 28);
    // 0c4f3d  pop edi
    X86_AT(c, 0xc4f3du);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0c4f3e  pop esi
    X86_AT(c, 0xc4f3eu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0c4f3f  pop ebx
    X86_AT(c, 0xc4f3fu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0c4f40  leave 
    X86_AT(c, 0xc4f40u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0c4f41  ret 
    X86_AT(c, 0xc4f41u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xc4e37u, "ran off the end of a function");
}
void f_000c4f44(X86Cpu& c) {
    X86_TICK(c, 27);
    // 0c4f44  push ebp
    X86_AT(c, 0xc4f44u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0c4f45  mov ebp, esp
    X86_AT(c, 0xc4f45u);
    c.r[5] = c.r[4];
    // 0c4f47  sub esp, 0xc
    X86_AT(c, 0xc4f47u);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, 0xCu, 0, 4); }
    // 0c4f4a  push ebx
    X86_AT(c, 0xc4f4au);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0c4f4b  push esi
    X86_AT(c, 0xc4f4bu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0c4f4c  push edi
    X86_AT(c, 0xc4f4cu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c4f4d  mov dword ptr [ebp - 4], 0xa95b0
    X86_AT(c, 0xc4f4du);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), 0xA95B0u);
    // 0c4f54  mov edx, dword ptr [ebp + 0xc]
    X86_AT(c, 0xc4f54u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0c4f57  dec edx
    X86_AT(c, 0xc4f57u);
    { uint32_t v = c.r[2]; c.r[2] = x86_dec(c, v, 4); }
    // 0c4f58  cmp edx, 3
    X86_AT(c, 0xc4f58u);
    (void)x86_sub(c, c.r[2], 0x3u, 0, 4);
    // 0c4f5b  ja 0xc5072
    X86_AT(c, 0xc4f5bu);
    if (x86_cc(c, 7)) { goto L_c5072; }
    X86_TICK(c, 7);
    // 0c4f61  jmp dword ptr cs:[edx*4 + 0xc4f69]
    X86_AT(c, 0xc4f61u);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xC4F69u)));
      switch (t) {
      case 0xc4f79u: goto L_c4f79;
      case 0xc4f9au: goto L_c4f9a;
      case 0xc4fe4u: goto L_c4fe4;
      case 0xc502du: goto L_c502d;
      default: x86_jump(c, t); return; } }
L_c4f79:
    X86_TICK(c, 2);
    // 0c4f79  sub edi, edi
    X86_AT(c, 0xc4f79u);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
L_c4f7b:
    X86_TICK(c, 7);
    // 0c4f7b  cmp edi, 0x100
    X86_AT(c, 0xc4f7bu);
    (void)x86_sub(c, c.r[7], 0x100u, 0, 4);
    // 0c4f81  jge 0xc5072
    X86_AT(c, 0xc4f81u);
    if (x86_cc(c, 13)) { goto L_c5072; }
    X86_TICK(c, 35);
    // 0c4f87  mov eax, dword ptr [ebp + 8]
    X86_AT(c, 0xc4f87u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0c4f8a  inc dword ptr [ebp + 8]
    X86_AT(c, 0xc4f8au);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0c4f8d  mov al, byte ptr [eax]
    X86_AT(c, 0xc4f8du);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[0]))));
    // 0c4f8f  mov edx, dword ptr [ebp - 4]
    X86_AT(c, 0xc4f8fu);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0c4f92  inc dword ptr [ebp - 4]
    X86_AT(c, 0xc4f92u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0c4f95  mov byte ptr [edx], al
    X86_AT(c, 0xc4f95u);
    wr8((c.sbase[3] + (uint32_t)(c.r[2])), g8(c, 0));
    // 0c4f97  inc edi
    X86_AT(c, 0xc4f97u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0c4f98  jmp 0xc4f7b
    X86_AT(c, 0xc4f98u);
    X86_POLL(c, 0xc4f7bu); goto L_c4f7b;
L_c4f9a:
    X86_TICK(c, 4);
    // 0c4f9a  mov edi, 0xf0
    X86_AT(c, 0xc4f9au);
    c.r[7] = 0xF0u;
    // 0c4f9f  sub ebx, ebx
    X86_AT(c, 0xc4f9fu);
    { uint32_t v = c.r[3]; c.r[3] = x86_sub(c, v, c.r[3], 0, 4); }
L_c4fa1:
    X86_TICK(c, 7);
    // 0c4fa1  cmp ebx, 0x10
    X86_AT(c, 0xc4fa1u);
    (void)x86_sub(c, c.r[3], 0x10u, 0, 4);
    // 0c4fa4  jge 0xc4fcc
    X86_AT(c, 0xc4fa4u);
    if (x86_cc(c, 13)) { goto L_c4fcc; }
    X86_TICK(c, 2);
    // 0c4fa6  sub esi, esi
    X86_AT(c, 0xc4fa6u);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[6], 0, 4); }
L_c4fa8:
    X86_TICK(c, 7);
    // 0c4fa8  cmp esi, 0x10
    X86_AT(c, 0xc4fa8u);
    (void)x86_sub(c, c.r[6], 0x10u, 0, 4);
    // 0c4fab  jge 0xc4fc8
    X86_AT(c, 0xc4fabu);
    if (x86_cc(c, 13)) { goto L_c4fc8; }
    X86_TICK(c, 38);
    // 0c4fad  mov eax, esi
    X86_AT(c, 0xc4fadu);
    c.r[0] = c.r[6];
    // 0c4faf  shl eax, 4
    X86_AT(c, 0xc4fafu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[0] = r; }
    // 0c4fb2  neg eax
    X86_AT(c, 0xc4fb2u);
    { uint32_t v = c.r[0]; c.r[0] = x86_neg(c, v, 4); }
    // 0c4fb4  mov edx, dword ptr [ebp + 8]
    X86_AT(c, 0xc4fb4u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0c4fb7  lea ecx, [edi + edx*1]
    X86_AT(c, 0xc4fb7u);
    c.r[1] = (uint32_t)(c.r[7] + c.r[2]);
    // 0c4fba  mov al, byte ptr [ecx + eax*1]
    X86_AT(c, 0xc4fbau);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[1] + c.r[0]))));
    // 0c4fbd  mov edx, dword ptr [ebp - 4]
    X86_AT(c, 0xc4fbdu);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0c4fc0  inc dword ptr [ebp - 4]
    X86_AT(c, 0xc4fc0u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0c4fc3  mov byte ptr [edx], al
    X86_AT(c, 0xc4fc3u);
    wr8((c.sbase[3] + (uint32_t)(c.r[2])), g8(c, 0));
    // 0c4fc5  inc esi
    X86_AT(c, 0xc4fc5u);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 0c4fc6  jmp 0xc4fa8
    X86_AT(c, 0xc4fc6u);
    X86_POLL(c, 0xc4fa8u); goto L_c4fa8;
L_c4fc8:
    X86_TICK(c, 11);
    // 0c4fc8  inc edi
    X86_AT(c, 0xc4fc8u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0c4fc9  inc ebx
    X86_AT(c, 0xc4fc9u);
    { uint32_t v = c.r[3]; c.r[3] = x86_inc(c, v, 4); }
    // 0c4fca  jmp 0xc4fa1
    X86_AT(c, 0xc4fcau);
    X86_POLL(c, 0xc4fa1u); goto L_c4fa1;
L_c4fcc:
    X86_TICK(c, 31);
    // 0c4fcc  mov eax, dword ptr [ebp + 0x10]
    X86_AT(c, 0xc4fccu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u)));
    // 0c4fcf  mov esi, dword ptr [eax]
    X86_AT(c, 0xc4fcfu);
    c.r[6] = rd32((c.sbase[3] + (uint32_t)(c.r[0])));
    // 0c4fd1  mov edx, 0xf
    X86_AT(c, 0xc4fd1u);
    c.r[2] = 0xFu;
    // 0c4fd6  mov ecx, dword ptr [ebp + 0x14]
    X86_AT(c, 0xc4fd6u);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x14u)));
    // 0c4fd9  sub edx, dword ptr [ecx]
    X86_AT(c, 0xc4fd9u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[1]))), 0, 4); }
    // 0c4fdb  mov dword ptr [eax], edx
    X86_AT(c, 0xc4fdbu);
    wr32((c.sbase[3] + (uint32_t)(c.r[0])), c.r[2]);
    // 0c4fdd  mov dword ptr [ecx], esi
    X86_AT(c, 0xc4fddu);
    wr32((c.sbase[3] + (uint32_t)(c.r[1])), c.r[6]);
    // 0c4fdf  jmp 0xc5072
    X86_AT(c, 0xc4fdfu);
    goto L_c5072;
L_c4fe4:
    X86_TICK(c, 4);
    // 0c4fe4  mov edi, 0xff
    X86_AT(c, 0xc4fe4u);
    c.r[7] = 0xFFu;
    // 0c4fe9  sub ebx, ebx
    X86_AT(c, 0xc4fe9u);
    { uint32_t v = c.r[3]; c.r[3] = x86_sub(c, v, c.r[3], 0, 4); }
L_c4feb:
    X86_TICK(c, 7);
    // 0c4feb  cmp ebx, 0x10
    X86_AT(c, 0xc4febu);
    (void)x86_sub(c, c.r[3], 0x10u, 0, 4);
    // 0c4fee  jge 0xc5015
    X86_AT(c, 0xc4feeu);
    if (x86_cc(c, 13)) { goto L_c5015; }
    X86_TICK(c, 2);
    // 0c4ff0  sub esi, esi
    X86_AT(c, 0xc4ff0u);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[6], 0, 4); }
L_c4ff2:
    X86_TICK(c, 7);
    // 0c4ff2  cmp esi, 0x10
    X86_AT(c, 0xc4ff2u);
    (void)x86_sub(c, c.r[6], 0x10u, 0, 4);
    // 0c4ff5  jge 0xc500f
    X86_AT(c, 0xc4ff5u);
    if (x86_cc(c, 13)) { goto L_c500f; }
    X86_TICK(c, 35);
    // 0c4ff7  mov eax, esi
    X86_AT(c, 0xc4ff7u);
    c.r[0] = c.r[6];
    // 0c4ff9  neg eax
    X86_AT(c, 0xc4ff9u);
    { uint32_t v = c.r[0]; c.r[0] = x86_neg(c, v, 4); }
    // 0c4ffb  mov edx, dword ptr [ebp + 8]
    X86_AT(c, 0xc4ffbu);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0c4ffe  lea ecx, [edi + edx*1]
    X86_AT(c, 0xc4ffeu);
    c.r[1] = (uint32_t)(c.r[7] + c.r[2]);
    // 0c5001  mov al, byte ptr [ecx + eax*1]
    X86_AT(c, 0xc5001u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[1] + c.r[0]))));
    // 0c5004  mov edx, dword ptr [ebp - 4]
    X86_AT(c, 0xc5004u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0c5007  inc dword ptr [ebp - 4]
    X86_AT(c, 0xc5007u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0c500a  mov byte ptr [edx], al
    X86_AT(c, 0xc500au);
    wr8((c.sbase[3] + (uint32_t)(c.r[2])), g8(c, 0));
    // 0c500c  inc esi
    X86_AT(c, 0xc500cu);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 0c500d  jmp 0xc4ff2
    X86_AT(c, 0xc500du);
    X86_POLL(c, 0xc4ff2u); goto L_c4ff2;
L_c500f:
    X86_TICK(c, 11);
    // 0c500f  sub edi, 0x10
    X86_AT(c, 0xc500fu);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, 0x10u, 0, 4); }
    // 0c5012  inc ebx
    X86_AT(c, 0xc5012u);
    { uint32_t v = c.r[3]; c.r[3] = x86_inc(c, v, 4); }
    // 0c5013  jmp 0xc4feb
    X86_AT(c, 0xc5013u);
    X86_POLL(c, 0xc4febu); goto L_c4feb;
L_c5015:
    X86_TICK(c, 33);
    // 0c5015  mov eax, 0xf
    X86_AT(c, 0xc5015u);
    c.r[0] = 0xFu;
    // 0c501a  mov edx, dword ptr [ebp + 0x10]
    X86_AT(c, 0xc501au);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u)));
    // 0c501d  sub eax, dword ptr [edx]
    X86_AT(c, 0xc501du);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[2]))), 0, 4); }
    // 0c501f  mov dword ptr [edx], eax
    X86_AT(c, 0xc501fu);
    wr32((c.sbase[3] + (uint32_t)(c.r[2])), c.r[0]);
    // 0c5021  mov eax, 0xf
    X86_AT(c, 0xc5021u);
    c.r[0] = 0xFu;
    // 0c5026  mov edx, dword ptr [ebp + 0x14]
    X86_AT(c, 0xc5026u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x14u)));
    // 0c5029  sub eax, dword ptr [edx]
    X86_AT(c, 0xc5029u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[2]))), 0, 4); }
    // 0c502b  jmp 0xc5070
    X86_AT(c, 0xc502bu);
    goto L_c5070;
L_c502d:
    X86_TICK(c, 4);
    // 0c502d  mov edi, 0xf
    X86_AT(c, 0xc502du);
    c.r[7] = 0xFu;
    // 0c5032  sub ebx, ebx
    X86_AT(c, 0xc5032u);
    { uint32_t v = c.r[3]; c.r[3] = x86_sub(c, v, c.r[3], 0, 4); }
L_c5034:
    X86_TICK(c, 7);
    // 0c5034  cmp ebx, 0x10
    X86_AT(c, 0xc5034u);
    (void)x86_sub(c, c.r[3], 0x10u, 0, 4);
    // 0c5037  jge 0xc505d
    X86_AT(c, 0xc5037u);
    if (x86_cc(c, 13)) { goto L_c505d; }
    X86_TICK(c, 2);
    // 0c5039  sub esi, esi
    X86_AT(c, 0xc5039u);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[6], 0, 4); }
L_c503b:
    X86_TICK(c, 7);
    // 0c503b  cmp esi, 0x10
    X86_AT(c, 0xc503bu);
    (void)x86_sub(c, c.r[6], 0x10u, 0, 4);
    // 0c503e  jge 0xc5059
    X86_AT(c, 0xc503eu);
    if (x86_cc(c, 13)) { goto L_c5059; }
    X86_TICK(c, 36);
    // 0c5040  mov eax, esi
    X86_AT(c, 0xc5040u);
    c.r[0] = c.r[6];
    // 0c5042  shl eax, 4
    X86_AT(c, 0xc5042u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[0] = r; }
    // 0c5045  mov edx, dword ptr [ebp + 8]
    X86_AT(c, 0xc5045u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0c5048  lea ecx, [edi + edx*1]
    X86_AT(c, 0xc5048u);
    c.r[1] = (uint32_t)(c.r[7] + c.r[2]);
    // 0c504b  mov al, byte ptr [ecx + eax*1]
    X86_AT(c, 0xc504bu);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[1] + c.r[0]))));
    // 0c504e  mov edx, dword ptr [ebp - 4]
    X86_AT(c, 0xc504eu);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0c5051  inc dword ptr [ebp - 4]
    X86_AT(c, 0xc5051u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0c5054  mov byte ptr [edx], al
    X86_AT(c, 0xc5054u);
    wr8((c.sbase[3] + (uint32_t)(c.r[2])), g8(c, 0));
    // 0c5056  inc esi
    X86_AT(c, 0xc5056u);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 0c5057  jmp 0xc503b
    X86_AT(c, 0xc5057u);
    X86_POLL(c, 0xc503bu); goto L_c503b;
L_c5059:
    X86_TICK(c, 11);
    // 0c5059  dec edi
    X86_AT(c, 0xc5059u);
    { uint32_t v = c.r[7]; c.r[7] = x86_dec(c, v, 4); }
    // 0c505a  inc ebx
    X86_AT(c, 0xc505au);
    { uint32_t v = c.r[3]; c.r[3] = x86_inc(c, v, 4); }
    // 0c505b  jmp 0xc5034
    X86_AT(c, 0xc505bu);
    X86_POLL(c, 0xc5034u); goto L_c5034;
L_c505d:
    X86_TICK(c, 22);
    // 0c505d  mov eax, dword ptr [ebp + 0x10]
    X86_AT(c, 0xc505du);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u)));
    // 0c5060  mov esi, dword ptr [eax]
    X86_AT(c, 0xc5060u);
    c.r[6] = rd32((c.sbase[3] + (uint32_t)(c.r[0])));
    // 0c5062  mov edx, dword ptr [ebp + 0x14]
    X86_AT(c, 0xc5062u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x14u)));
    // 0c5065  mov ecx, dword ptr [edx]
    X86_AT(c, 0xc5065u);
    c.r[1] = rd32((c.sbase[3] + (uint32_t)(c.r[2])));
    // 0c5067  mov dword ptr [eax], ecx
    X86_AT(c, 0xc5067u);
    wr32((c.sbase[3] + (uint32_t)(c.r[0])), c.r[1]);
    // 0c5069  mov eax, 0xf
    X86_AT(c, 0xc5069u);
    c.r[0] = 0xFu;
    // 0c506e  sub eax, esi
    X86_AT(c, 0xc506eu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[6], 0, 4); }
L_c5070:
    X86_TICK(c, 2);
    // 0c5070  mov dword ptr [edx], eax
    X86_AT(c, 0xc5070u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2])), c.r[0]);
L_c5072:
    X86_TICK(c, 19);
    // 0c5072  mov eax, dword ptr [ebp + 0x10]
    X86_AT(c, 0xc5072u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u)));
    // 0c5075  mov eax, dword ptr [eax]
    X86_AT(c, 0xc5075u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[0])));
    // 0c5077  sub eax, 2
    X86_AT(c, 0xc5077u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, 0x2u, 0, 4); }
    // 0c507a  mov dword ptr [ebp - 0xc], eax
    X86_AT(c, 0xc507au);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)), c.r[0]);
    // 0c507d  and eax, eax
    X86_AT(c, 0xc507du);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0c507f  jge 0xc5085
    X86_AT(c, 0xc507fu);
    if (x86_cc(c, 13)) { goto L_c5085; }
    X86_TICK(c, 7);
    // 0c5081  add dword ptr [ebp - 0xc], 0x10
    X86_AT(c, 0xc5081u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0x10u, 0, 4)); }
L_c5085:
    X86_TICK(c, 19);
    // 0c5085  mov eax, dword ptr [ebp + 0x14]
    X86_AT(c, 0xc5085u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x14u)));
    // 0c5088  mov eax, dword ptr [eax]
    X86_AT(c, 0xc5088u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[0])));
    // 0c508a  sub eax, 3
    X86_AT(c, 0xc508au);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, 0x3u, 0, 4); }
    // 0c508d  mov dword ptr [ebp - 8], eax
    X86_AT(c, 0xc508du);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), c.r[0]);
    // 0c5090  and eax, eax
    X86_AT(c, 0xc5090u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0c5092  jge 0xc5098
    X86_AT(c, 0xc5092u);
    if (x86_cc(c, 13)) { goto L_c5098; }
    X86_TICK(c, 7);
    // 0c5094  add dword ptr [ebp - 8], 0x10
    X86_AT(c, 0xc5094u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0x10u, 0, 4)); }
L_c5098:
    X86_TICK(c, 2);
    // 0c5098  sub ebx, ebx
    X86_AT(c, 0xc5098u);
    { uint32_t v = c.r[3]; c.r[3] = x86_sub(c, v, c.r[3], 0, 4); }
L_c509a:
    X86_TICK(c, 7);
    // 0c509a  cmp ebx, 5
    X86_AT(c, 0xc509au);
    (void)x86_sub(c, c.r[3], 0x5u, 0, 4);
    // 0c509d  jge 0xc50e1
    X86_AT(c, 0xc509du);
    if (x86_cc(c, 13)) { goto L_c50e1; }
    X86_TICK(c, 6);
    // 0c509f  mov edi, dword ptr [ebp - 0xc]
    X86_AT(c, 0xc509fu);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)));
    // 0c50a2  sub esi, esi
    X86_AT(c, 0xc50a2u);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[6], 0, 4); }
L_c50a4:
    X86_TICK(c, 7);
    // 0c50a4  cmp esi, 5
    X86_AT(c, 0xc50a4u);
    (void)x86_sub(c, c.r[6], 0x5u, 0, 4);
    // 0c50a7  jge 0xc50ce
    X86_AT(c, 0xc50a7u);
    if (x86_cc(c, 13)) { goto L_c50ce; }
    X86_TICK(c, 28);
    // 0c50a9  mov eax, dword ptr [ebp - 8]
    X86_AT(c, 0xc50a9u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)));
    // 0c50ac  shl eax, 4
    X86_AT(c, 0xc50acu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[0] = r; }
    // 0c50af  add eax, edi
    X86_AT(c, 0xc50afu);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, c.r[7], 0, 4); }
    // 0c50b1  lea edx, [ebx + ebx*4]
    X86_AT(c, 0xc50b1u);
    c.r[2] = (uint32_t)(c.r[3] + c.r[3] * 4);
    // 0c50b4  lea ecx, [esi + edx*1]
    X86_AT(c, 0xc50b4u);
    c.r[1] = (uint32_t)(c.r[6] + c.r[2]);
    // 0c50b7  mov al, byte ptr [eax + 0xa95b0]
    X86_AT(c, 0xc50b7u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[0] + 0xA95B0u))));
    // 0c50bd  mov byte ptr [ecx + 0xa9334], al
    X86_AT(c, 0xc50bdu);
    wr8((c.sbase[3] + (uint32_t)(c.r[1] + 0xA9334u)), g8(c, 0));
    // 0c50c3  inc edi
    X86_AT(c, 0xc50c3u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0c50c4  cmp edi, 0x10
    X86_AT(c, 0xc50c4u);
    (void)x86_sub(c, c.r[7], 0x10u, 0, 4);
    // 0c50c7  jne 0xc50cb
    X86_AT(c, 0xc50c7u);
    if (x86_cc(c, 5)) { goto L_c50cb; }
    X86_TICK(c, 2);
    // 0c50c9  sub edi, edi
    X86_AT(c, 0xc50c9u);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
L_c50cb:
    X86_TICK(c, 9);
    // 0c50cb  inc esi
    X86_AT(c, 0xc50cbu);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 0c50cc  jmp 0xc50a4
    X86_AT(c, 0xc50ccu);
    X86_POLL(c, 0xc50a4u); goto L_c50a4;
L_c50ce:
    X86_TICK(c, 18);
    // 0c50ce  inc dword ptr [ebp - 8]
    X86_AT(c, 0xc50ceu);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0c50d1  cmp dword ptr [ebp - 8], 0x10
    X86_AT(c, 0xc50d1u);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u))), 0x10u, 0, 4);
    // 0c50d5  jne 0xc50de
    X86_AT(c, 0xc50d5u);
    if (x86_cc(c, 5)) { goto L_c50de; }
    X86_TICK(c, 2);
    // 0c50d7  mov dword ptr [ebp - 8], 0
    X86_AT(c, 0xc50d7u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), 0x0u);
L_c50de:
    X86_TICK(c, 9);
    // 0c50de  inc ebx
    X86_AT(c, 0xc50deu);
    { uint32_t v = c.r[3]; c.r[3] = x86_inc(c, v, 4); }
    // 0c50df  jmp 0xc509a
    X86_AT(c, 0xc50dfu);
    X86_POLL(c, 0xc509au); goto L_c509a;
L_c50e1:
    X86_TICK(c, 30);
    // 0c50e1  mov eax, 0xa95b0
    X86_AT(c, 0xc50e1u);
    c.r[0] = 0xA95B0u;
    // 0c50e6  pop edi
    X86_AT(c, 0xc50e6u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0c50e7  pop esi
    X86_AT(c, 0xc50e7u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0c50e8  pop ebx
    X86_AT(c, 0xc50e8u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0c50e9  leave 
    X86_AT(c, 0xc50e9u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0c50ea  ret 
    X86_AT(c, 0xc50eau);
    c.eip = pop32(c); return;
    x86_fault(c, 0xc4f44u, "ran off the end of a function");
}
void f_000c50ec(X86Cpu& c) {
    X86_TICK(c, 22);
    // 0c50ec  push ebp
    X86_AT(c, 0xc50ecu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0c50ed  mov ebp, esp
    X86_AT(c, 0xc50edu);
    c.r[5] = c.r[4];
    // 0c50ef  push ebx
    X86_AT(c, 0xc50efu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0c50f0  push esi
    X86_AT(c, 0xc50f0u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0c50f1  push edi
    X86_AT(c, 0xc50f1u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c50f2  cmp dword ptr [0xa6134], 2
    X86_AT(c, 0xc50f2u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xA6134u))), 0x2u, 0, 4);
    // 0c50f9  jne 0xc518f
    X86_AT(c, 0xc50f9u);
    if (x86_cc(c, 5)) { goto L_c518f; }
    X86_TICK(c, 2);
    // 0c50ff  sub edi, edi
    X86_AT(c, 0xc50ffu);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
L_c5101:
    X86_TICK(c, 7);
    // 0c5101  cmp edi, 0x10
    X86_AT(c, 0xc5101u);
    (void)x86_sub(c, c.r[7], 0x10u, 0, 4);
    // 0c5104  jge 0xc5165
    X86_AT(c, 0xc5104u);
    if (x86_cc(c, 13)) { goto L_c5165; }
    X86_TICK(c, 2);
    // 0c5106  sub esi, esi
    X86_AT(c, 0xc5106u);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[6], 0, 4); }
L_c5108:
    X86_TICK(c, 7);
    // 0c5108  cmp esi, 0x10
    X86_AT(c, 0xc5108u);
    (void)x86_sub(c, c.r[6], 0x10u, 0, 4);
    // 0c510b  jge 0xc5162
    X86_AT(c, 0xc510bu);
    if (x86_cc(c, 13)) { goto L_c5162; }
    X86_TICK(c, 24);
    // 0c510d  mov eax, edi
    X86_AT(c, 0xc510du);
    c.r[0] = c.r[7];
    // 0c510f  shl eax, 4
    X86_AT(c, 0xc510fu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[0] = r; }
    // 0c5112  mov edx, dword ptr [ebp + 8]
    X86_AT(c, 0xc5112u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0c5115  add eax, edx
    X86_AT(c, 0xc5115u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, c.r[2], 0, 4); }
    // 0c5117  movzx ebx, byte ptr [eax + esi*1]
    X86_AT(c, 0xc5117u);
    c.r[3] = rd8((c.sbase[3] + (uint32_t)(c.r[0] + c.r[6])));
    // 0c511b  and ebx, ebx
    X86_AT(c, 0xc511bu);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & c.r[3], 4); }
    // 0c511d  jl 0xc5124
    X86_AT(c, 0xc511du);
    if (x86_cc(c, 12)) { goto L_c5124; }
    X86_TICK(c, 7);
    // 0c511f  cmp ebx, 0x10
    X86_AT(c, 0xc511fu);
    (void)x86_sub(c, c.r[3], 0x10u, 0, 4);
    // 0c5122  jle 0xc5129
    X86_AT(c, 0xc5122u);
    if (x86_cc(c, 14)) { goto L_c5129; }
L_c5124:
    X86_TICK(c, 2);
    // 0c5124  mov ebx, 6
    X86_AT(c, 0xc5124u);
    c.r[3] = 0x6u;
L_c5129:
    X86_TICK(c, 35);
    // 0c5129  push 6
    X86_AT(c, 0xc5129u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0c512b  push 6
    X86_AT(c, 0xc512bu);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0c512d  lea eax, [edi + edi*2]
    X86_AT(c, 0xc512du);
    c.r[0] = (uint32_t)(c.r[7] + c.r[7] * 2);
    // 0c5130  lea eax, [eax + eax*1 + 0x40]
    X86_AT(c, 0xc5130u);
    c.r[0] = (uint32_t)(c.r[0] + c.r[0] + 0x40u);
    // 0c5134  push eax
    X86_AT(c, 0xc5134u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c5135  lea eax, [esi + esi*2]
    X86_AT(c, 0xc5135u);
    c.r[0] = (uint32_t)(c.r[6] + c.r[6] * 2);
    // 0c5138  lea eax, [eax*2 + 0xfa]
    X86_AT(c, 0xc5138u);
    c.r[0] = (uint32_t)(c.r[0] * 2 + 0xFAu);
    // 0c513f  push eax
    X86_AT(c, 0xc513fu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c5140  mov eax, dword ptr [ebx*4 + 0xa96b0]
    X86_AT(c, 0xc5140u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3] * 4 + 0xA96B0u)));
    // 0c5147  lea eax, [eax*8]
    X86_AT(c, 0xc5147u);
    c.r[0] = (uint32_t)(c.r[0] * 8);
    // 0c514e  lea eax, [eax + eax*2]
    X86_AT(c, 0xc514eu);
    c.r[0] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0c5151  add eax, 0xa96f4
    X86_AT(c, 0xc5151u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0xA96F4u, 0, 4); }
    // 0c5156  push eax
    X86_AT(c, 0xc5156u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c5157  call 0xbb018
    X86_AT(c, 0xc5157u);
    push32(c, 0xc515cu); x86_call_known(c, 0xbb018u, f_000bb018); X86_RET(c, 0xc515cu);
    X86_TICK(c, 11);
    // 0c515c  inc esi
    X86_AT(c, 0xc515cu);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 0c515d  add esp, 0x14
    X86_AT(c, 0xc515du);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x14u, 0, 4); }
    // 0c5160  jmp 0xc5108
    X86_AT(c, 0xc5160u);
    X86_POLL(c, 0xc5108u); goto L_c5108;
L_c5162:
    X86_TICK(c, 9);
    // 0c5162  inc edi
    X86_AT(c, 0xc5162u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0c5163  jmp 0xc5101
    X86_AT(c, 0xc5163u);
    X86_POLL(c, 0xc5101u); goto L_c5101;
L_c5165:
    X86_TICK(c, 33);
    // 0c5165  push 6
    X86_AT(c, 0xc5165u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0c5167  push 6
    X86_AT(c, 0xc5167u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0c5169  mov eax, dword ptr [ebp + 0x10]
    X86_AT(c, 0xc5169u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u)));
    // 0c516c  lea eax, [eax + eax*2]
    X86_AT(c, 0xc516cu);
    c.r[0] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0c516f  lea eax, [eax + eax*1 + 0x40]
    X86_AT(c, 0xc516fu);
    c.r[0] = (uint32_t)(c.r[0] + c.r[0] + 0x40u);
    // 0c5173  push eax
    X86_AT(c, 0xc5173u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c5174  mov eax, dword ptr [ebp + 0xc]
    X86_AT(c, 0xc5174u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0c5177  lea eax, [eax + eax*2]
    X86_AT(c, 0xc5177u);
    c.r[0] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0c517a  lea eax, [eax*2 + 0xfa]
    X86_AT(c, 0xc517au);
    c.r[0] = (uint32_t)(c.r[0] * 2 + 0xFAu);
    // 0c5181  push eax
    X86_AT(c, 0xc5181u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c5182  push 0xa979c
    X86_AT(c, 0xc5182u);
    { uint32_t v = 0xA979Cu; push32(c, v); }
    // 0c5187  call 0xbb018
    X86_AT(c, 0xc5187u);
    push32(c, 0xc518cu); x86_call_known(c, 0xbb018u, f_000bb018); X86_RET(c, 0xc518cu);
    X86_TICK(c, 2);
    // 0c518c  add esp, 0x14
    X86_AT(c, 0xc518cu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x14u, 0, 4); }
L_c518f:
    X86_TICK(c, 28);
    // 0c518f  pop edi
    X86_AT(c, 0xc518fu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0c5190  pop esi
    X86_AT(c, 0xc5190u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0c5191  pop ebx
    X86_AT(c, 0xc5191u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0c5192  leave 
    X86_AT(c, 0xc5192u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0c5193  ret 
    X86_AT(c, 0xc5193u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xc50ecu, "ran off the end of a function");
}
void f_000c5194(X86Cpu& c) {
    X86_TICK(c, 26);
    // 0c5194  push ebp
    X86_AT(c, 0xc5194u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0c5195  mov ebp, esp
    X86_AT(c, 0xc5195u);
    c.r[5] = c.r[4];
    // 0c5197  sub esp, 8
    X86_AT(c, 0xc5197u);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, 0x8u, 0, 4); }
    // 0c519a  push ebx
    X86_AT(c, 0xc519au);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0c519b  push esi
    X86_AT(c, 0xc519bu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0c519c  push edi
    X86_AT(c, 0xc519cu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c519d  mov edi, 0xffffffff
    X86_AT(c, 0xc519du);
    c.r[7] = 0xFFFFFFFFu;
    // 0c51a2  cmp word ptr [0xa8a18], 0
    X86_AT(c, 0xc51a2u);
    (void)x86_sub(c, rd16((c.sbase[3] + (uint32_t)(0xA8A18u))), 0x0u, 0, 2);
    // 0c51aa  jne 0xc51b3
    X86_AT(c, 0xc51aau);
    if (x86_cc(c, 5)) { goto L_c51b3; }
    X86_TICK(c, 9);
    // 0c51ac  mov eax, edi
    X86_AT(c, 0xc51acu);
    c.r[0] = c.r[7];
    // 0c51ae  jmp 0xc543b
    X86_AT(c, 0xc51aeu);
    goto L_c543b;
L_c51b3:
    X86_TICK(c, 9);
    // 0c51b3  push 7
    X86_AT(c, 0xc51b3u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c51b5  call 0xbb6b0
    X86_AT(c, 0xc51b5u);
    push32(c, 0xc51bau); x86_call_known(c, 0xbb6b0u, f_000bb6b0); X86_RET(c, 0xc51bau);
    X86_TICK(c, 15);
    // 0c51ba  add esp, 4
    X86_AT(c, 0xc51bau);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0c51bd  movzx edx, byte ptr [ebp + 8]
    X86_AT(c, 0xc51bdu);
    c.r[2] = rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0c51c1  cmp edx, 3
    X86_AT(c, 0xc51c1u);
    (void)x86_sub(c, c.r[2], 0x3u, 0, 4);
    // 0c51c4  ja 0xc53fb
    X86_AT(c, 0xc51c4u);
    if (x86_cc(c, 7)) { goto L_c53fb; }
    X86_TICK(c, 7);
    // 0c51ca  jmp dword ptr cs:[edx*4 + 0xc51d2]
    X86_AT(c, 0xc51cau);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xC51D2u)));
      switch (t) {
      case 0xc51e2u: goto L_c51e2;
      case 0xc52d5u: goto L_c52d5;
      case 0xc532eu: goto L_c532e;
      case 0xc5384u: goto L_c5384;
      default: x86_jump(c, t); return; } }
L_c51e2:
    X86_TICK(c, 15);
    // 0c51e2  movsx edx, word ptr [0xa8a2c]
    X86_AT(c, 0xc51e2u);
    c.r[2] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[3] + (uint32_t)(0xA8A2Cu)));
    // 0c51e9  dec edx
    X86_AT(c, 0xc51e9u);
    { uint32_t v = c.r[2]; c.r[2] = x86_dec(c, v, 4); }
    // 0c51ea  cmp edx, 3
    X86_AT(c, 0xc51eau);
    (void)x86_sub(c, c.r[2], 0x3u, 0, 4);
    // 0c51ed  ja 0xc528f
    X86_AT(c, 0xc51edu);
    if (x86_cc(c, 7)) { goto L_c528f; }
    X86_TICK(c, 7);
    // 0c51f3  jmp dword ptr cs:[edx*4 + 0xc51fb]
    X86_AT(c, 0xc51f3u);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xC51FBu)));
      switch (t) {
      case 0xc520bu: goto L_c520b;
      case 0xc5230u: goto L_c5230;
      case 0xc524au: goto L_c524a;
      case 0xc526cu: goto L_c526c;
      default: x86_jump(c, t); return; } }
L_c520b:
    X86_TICK(c, 18);
    // 0c520b  mov eax, dword ptr [0xa4a6e]
    X86_AT(c, 0xc520bu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xA4A6Eu)));
    // 0c5210  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0xc5210u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
    // 0c5213  cmp dword ptr [0xa4a72], 0
    X86_AT(c, 0xc5213u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xA4A72u))), 0x0u, 0, 4);
    // 0c521a  jne 0xc5228
    X86_AT(c, 0xc521au);
    if (x86_cc(c, 5)) { goto L_c5228; }
    X86_TICK(c, 9);
    // 0c521c  mov dword ptr [ebp - 8], 0xf
    X86_AT(c, 0xc521cu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), 0xFu);
    // 0c5223  jmp 0xc528f
    X86_AT(c, 0xc5223u);
    goto L_c528f;
L_c5228:
    X86_TICK(c, 13);
    // 0c5228  mov eax, dword ptr [0xa4a72]
    X86_AT(c, 0xc5228u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xA4A72u)));
    // 0c522d  dec eax
    X86_AT(c, 0xc522du);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 0c522e  jmp 0xc528c
    X86_AT(c, 0xc522eu);
    goto L_c528c;
L_c5230:
    X86_TICK(c, 12);
    // 0c5230  cmp dword ptr [0xa4a6e], 0xf
    X86_AT(c, 0xc5230u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xA4A6Eu))), 0xFu, 0, 4);
    // 0c5237  jne 0xc5242
    X86_AT(c, 0xc5237u);
    if (x86_cc(c, 5)) { goto L_c5242; }
    X86_TICK(c, 9);
    // 0c5239  mov dword ptr [ebp - 4], 0
    X86_AT(c, 0xc5239u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), 0x0u);
    // 0c5240  jmp 0xc5287
    X86_AT(c, 0xc5240u);
    goto L_c5287;
L_c5242:
    X86_TICK(c, 13);
    // 0c5242  mov eax, dword ptr [0xa4a6e]
    X86_AT(c, 0xc5242u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xA4A6Eu)));
    // 0c5247  inc eax
    X86_AT(c, 0xc5247u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0c5248  jmp 0xc5284
    X86_AT(c, 0xc5248u);
    goto L_c5284;
L_c524a:
    X86_TICK(c, 18);
    // 0c524a  mov eax, dword ptr [0xa4a6e]
    X86_AT(c, 0xc524au);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xA4A6Eu)));
    // 0c524f  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0xc524fu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
    // 0c5252  cmp dword ptr [0xa4a72], 0xf
    X86_AT(c, 0xc5252u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xA4A72u))), 0xFu, 0, 4);
    // 0c5259  jne 0xc5264
    X86_AT(c, 0xc5259u);
    if (x86_cc(c, 5)) { goto L_c5264; }
    X86_TICK(c, 9);
    // 0c525b  mov dword ptr [ebp - 8], 0
    X86_AT(c, 0xc525bu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), 0x0u);
    // 0c5262  jmp 0xc528f
    X86_AT(c, 0xc5262u);
    goto L_c528f;
L_c5264:
    X86_TICK(c, 13);
    // 0c5264  mov eax, dword ptr [0xa4a72]
    X86_AT(c, 0xc5264u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xA4A72u)));
    // 0c5269  inc eax
    X86_AT(c, 0xc5269u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0c526a  jmp 0xc528c
    X86_AT(c, 0xc526au);
    goto L_c528c;
L_c526c:
    X86_TICK(c, 12);
    // 0c526c  cmp dword ptr [0xa4a6e], 0
    X86_AT(c, 0xc526cu);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xA4A6Eu))), 0x0u, 0, 4);
    // 0c5273  jne 0xc527e
    X86_AT(c, 0xc5273u);
    if (x86_cc(c, 5)) { goto L_c527e; }
    X86_TICK(c, 9);
    // 0c5275  mov dword ptr [ebp - 4], 0xf
    X86_AT(c, 0xc5275u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), 0xFu);
    // 0c527c  jmp 0xc5287
    X86_AT(c, 0xc527cu);
    goto L_c5287;
L_c527e:
    X86_TICK(c, 6);
    // 0c527e  mov eax, dword ptr [0xa4a6e]
    X86_AT(c, 0xc527eu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xA4A6Eu)));
    // 0c5283  dec eax
    X86_AT(c, 0xc5283u);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
L_c5284:
    X86_TICK(c, 2);
    // 0c5284  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0xc5284u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
L_c5287:
    X86_TICK(c, 4);
    // 0c5287  mov eax, dword ptr [0xa4a72]
    X86_AT(c, 0xc5287u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xA4A72u)));
L_c528c:
    X86_TICK(c, 2);
    // 0c528c  mov dword ptr [ebp - 8], eax
    X86_AT(c, 0xc528cu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), c.r[0]);
L_c528f:
    X86_TICK(c, 11);
    // 0c528f  push 0x49a8
    X86_AT(c, 0xc528fu);
    { uint32_t v = 0x49A8u; push32(c, v); }
    // 0c5294  push 7
    X86_AT(c, 0xc5294u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c5296  call 0xba428
    X86_AT(c, 0xc5296u);
    push32(c, 0xc529bu); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xc529bu);
    X86_TICK(c, 9);
    // 0c529b  push 7
    X86_AT(c, 0xc529bu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c529d  call 0xbbb5c
    X86_AT(c, 0xc529du);
    push32(c, 0xc52a2u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xc52a2u);
    X86_TICK(c, 17);
    // 0c52a2  push dword ptr [ebp - 8]
    X86_AT(c, 0xc52a2u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u))); push32(c, v); }
    // 0c52a5  push dword ptr [ebp - 4]
    X86_AT(c, 0xc52a5u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))); push32(c, v); }
    // 0c52a8  call 0xc5abc
    X86_AT(c, 0xc52a8u);
    push32(c, 0xc52adu); x86_call_known(c, 0xc5abcu, f_000c5abc); X86_RET(c, 0xc52adu);
    X86_TICK(c, 9);
    // 0c52ad  add esp, 0x14
    X86_AT(c, 0xc52adu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x14u, 0, 4); }
    // 0c52b0  and eax, eax
    X86_AT(c, 0xc52b0u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0c52b2  je 0xc52be
    X86_AT(c, 0xc52b2u);
    if (x86_cc(c, 4)) { goto L_c52be; }
    X86_TICK(c, 9);
    // 0c52b4  mov eax, 0xffffffff
    X86_AT(c, 0xc52b4u);
    c.r[0] = 0xFFFFFFFFu;
    // 0c52b9  jmp 0xc543b
    X86_AT(c, 0xc52b9u);
    goto L_c543b;
L_c52be:
    X86_TICK(c, 21);
    // 0c52be  sub edi, edi
    X86_AT(c, 0xc52beu);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
    // 0c52c0  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0xc52c0u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0c52c3  mov dword ptr [0xa4a6e], eax
    X86_AT(c, 0xc52c3u);
    wr32((c.sbase[3] + (uint32_t)(0xA4A6Eu)), c.r[0]);
    // 0c52c8  mov eax, dword ptr [ebp - 8]
    X86_AT(c, 0xc52c8u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)));
    // 0c52cb  mov dword ptr [0xa4a72], eax
    X86_AT(c, 0xc52cbu);
    wr32((c.sbase[3] + (uint32_t)(0xA4A72u)), c.r[0]);
    // 0c52d0  jmp 0xc5410
    X86_AT(c, 0xc52d0u);
    goto L_c5410;
L_c52d5:
    X86_TICK(c, 15);
    // 0c52d5  movsx edx, word ptr [0xa8a2c]
    X86_AT(c, 0xc52d5u);
    c.r[2] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[3] + (uint32_t)(0xA8A2Cu)));
    // 0c52dc  dec edx
    X86_AT(c, 0xc52dcu);
    { uint32_t v = c.r[2]; c.r[2] = x86_dec(c, v, 4); }
    // 0c52dd  cmp edx, 3
    X86_AT(c, 0xc52ddu);
    (void)x86_sub(c, c.r[2], 0x3u, 0, 4);
    // 0c52e0  ja 0xc5324
    X86_AT(c, 0xc52e0u);
    if (x86_cc(c, 7)) { goto L_c5324; }
    X86_TICK(c, 7);
    // 0c52e2  jmp dword ptr cs:[edx*4 + 0xc52ea]
    X86_AT(c, 0xc52e2u);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xC52EAu)));
      switch (t) {
      case 0xc52fau: goto L_c52fa;
      case 0xc5305u: goto L_c5305;
      case 0xc5310u: goto L_c5310;
      case 0xc531bu: goto L_c531b;
      default: x86_jump(c, t); return; } }
L_c52fa:
    X86_TICK(c, 9);
    // 0c52fa  mov word ptr [0xa8a2c], 2
    X86_AT(c, 0xc52fau);
    wr16((c.sbase[3] + (uint32_t)(0xA8A2Cu)), 0x2u);
    // 0c5303  jmp 0xc5324
    X86_AT(c, 0xc5303u);
    goto L_c5324;
L_c5305:
    X86_TICK(c, 9);
    // 0c5305  mov word ptr [0xa8a2c], 3
    X86_AT(c, 0xc5305u);
    wr16((c.sbase[3] + (uint32_t)(0xA8A2Cu)), 0x3u);
    // 0c530e  jmp 0xc5324
    X86_AT(c, 0xc530eu);
    goto L_c5324;
L_c5310:
    X86_TICK(c, 9);
    // 0c5310  mov word ptr [0xa8a2c], 4
    X86_AT(c, 0xc5310u);
    wr16((c.sbase[3] + (uint32_t)(0xA8A2Cu)), 0x4u);
    // 0c5319  jmp 0xc5324
    X86_AT(c, 0xc5319u);
    goto L_c5324;
L_c531b:
    X86_TICK(c, 2);
    // 0c531b  mov word ptr [0xa8a2c], 1
    X86_AT(c, 0xc531bu);
    wr16((c.sbase[3] + (uint32_t)(0xA8A2Cu)), 0x1u);
L_c5324:
    X86_TICK(c, 9);
    // 0c5324  push 0x49bc
    X86_AT(c, 0xc5324u);
    { uint32_t v = 0x49BCu; push32(c, v); }
    // 0c5329  jmp 0xc53d8
    X86_AT(c, 0xc5329u);
    goto L_c53d8;
L_c532e:
    X86_TICK(c, 15);
    // 0c532e  movsx edx, word ptr [0xa8a2c]
    X86_AT(c, 0xc532eu);
    c.r[2] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[3] + (uint32_t)(0xA8A2Cu)));
    // 0c5335  dec edx
    X86_AT(c, 0xc5335u);
    { uint32_t v = c.r[2]; c.r[2] = x86_dec(c, v, 4); }
    // 0c5336  cmp edx, 3
    X86_AT(c, 0xc5336u);
    (void)x86_sub(c, c.r[2], 0x3u, 0, 4);
    // 0c5339  ja 0xc537d
    X86_AT(c, 0xc5339u);
    if (x86_cc(c, 7)) { goto L_c537d; }
    X86_TICK(c, 7);
    // 0c533b  jmp dword ptr cs:[edx*4 + 0xc5343]
    X86_AT(c, 0xc533bu);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xC5343u)));
      switch (t) {
      case 0xc5353u: goto L_c5353;
      case 0xc535eu: goto L_c535e;
      case 0xc5369u: goto L_c5369;
      case 0xc5374u: goto L_c5374;
      default: x86_jump(c, t); return; } }
L_c5353:
    X86_TICK(c, 9);
    // 0c5353  mov word ptr [0xa8a2c], 3
    X86_AT(c, 0xc5353u);
    wr16((c.sbase[3] + (uint32_t)(0xA8A2Cu)), 0x3u);
    // 0c535c  jmp 0xc537d
    X86_AT(c, 0xc535cu);
    goto L_c537d;
L_c535e:
    X86_TICK(c, 9);
    // 0c535e  mov word ptr [0xa8a2c], 4
    X86_AT(c, 0xc535eu);
    wr16((c.sbase[3] + (uint32_t)(0xA8A2Cu)), 0x4u);
    // 0c5367  jmp 0xc537d
    X86_AT(c, 0xc5367u);
    goto L_c537d;
L_c5369:
    X86_TICK(c, 9);
    // 0c5369  mov word ptr [0xa8a2c], 1
    X86_AT(c, 0xc5369u);
    wr16((c.sbase[3] + (uint32_t)(0xA8A2Cu)), 0x1u);
    // 0c5372  jmp 0xc537d
    X86_AT(c, 0xc5372u);
    goto L_c537d;
L_c5374:
    X86_TICK(c, 2);
    // 0c5374  mov word ptr [0xa8a2c], 2
    X86_AT(c, 0xc5374u);
    wr16((c.sbase[3] + (uint32_t)(0xA8A2Cu)), 0x2u);
L_c537d:
    X86_TICK(c, 9);
    // 0c537d  push 0x49dc
    X86_AT(c, 0xc537du);
    { uint32_t v = 0x49DCu; push32(c, v); }
    // 0c5382  jmp 0xc53d8
    X86_AT(c, 0xc5382u);
    goto L_c53d8;
L_c5384:
    X86_TICK(c, 15);
    // 0c5384  movsx edx, word ptr [0xa8a2c]
    X86_AT(c, 0xc5384u);
    c.r[2] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[3] + (uint32_t)(0xA8A2Cu)));
    // 0c538b  dec edx
    X86_AT(c, 0xc538bu);
    { uint32_t v = c.r[2]; c.r[2] = x86_dec(c, v, 4); }
    // 0c538c  cmp edx, 3
    X86_AT(c, 0xc538cu);
    (void)x86_sub(c, c.r[2], 0x3u, 0, 4);
    // 0c538f  ja 0xc53d3
    X86_AT(c, 0xc538fu);
    if (x86_cc(c, 7)) { goto L_c53d3; }
    X86_TICK(c, 7);
    // 0c5391  jmp dword ptr cs:[edx*4 + 0xc5399]
    X86_AT(c, 0xc5391u);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xC5399u)));
      switch (t) {
      case 0xc53a9u: goto L_c53a9;
      case 0xc53b4u: goto L_c53b4;
      case 0xc53bfu: goto L_c53bf;
      case 0xc53cau: goto L_c53ca;
      default: x86_jump(c, t); return; } }
L_c53a9:
    X86_TICK(c, 9);
    // 0c53a9  mov word ptr [0xa8a2c], 4
    X86_AT(c, 0xc53a9u);
    wr16((c.sbase[3] + (uint32_t)(0xA8A2Cu)), 0x4u);
    // 0c53b2  jmp 0xc53d3
    X86_AT(c, 0xc53b2u);
    goto L_c53d3;
L_c53b4:
    X86_TICK(c, 9);
    // 0c53b4  mov word ptr [0xa8a2c], 1
    X86_AT(c, 0xc53b4u);
    wr16((c.sbase[3] + (uint32_t)(0xA8A2Cu)), 0x1u);
    // 0c53bd  jmp 0xc53d3
    X86_AT(c, 0xc53bdu);
    goto L_c53d3;
L_c53bf:
    X86_TICK(c, 9);
    // 0c53bf  mov word ptr [0xa8a2c], 2
    X86_AT(c, 0xc53bfu);
    wr16((c.sbase[3] + (uint32_t)(0xA8A2Cu)), 0x2u);
    // 0c53c8  jmp 0xc53d3
    X86_AT(c, 0xc53c8u);
    goto L_c53d3;
L_c53ca:
    X86_TICK(c, 2);
    // 0c53ca  mov word ptr [0xa8a2c], 3
    X86_AT(c, 0xc53cau);
    wr16((c.sbase[3] + (uint32_t)(0xA8A2Cu)), 0x3u);
L_c53d3:
    X86_TICK(c, 2);
    // 0c53d3  push 0x49f8
    X86_AT(c, 0xc53d3u);
    { uint32_t v = 0x49F8u; push32(c, v); }
L_c53d8:
    X86_TICK(c, 9);
    // 0c53d8  push 7
    X86_AT(c, 0xc53d8u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c53da  call 0xba428
    X86_AT(c, 0xc53dau);
    push32(c, 0xc53dfu); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xc53dfu);
    X86_TICK(c, 9);
    // 0c53df  push 7
    X86_AT(c, 0xc53dfu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c53e1  call 0xbbb5c
    X86_AT(c, 0xc53e1u);
    push32(c, 0xc53e6u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xc53e6u);
    X86_TICK(c, 21);
    // 0c53e6  mov eax, dword ptr [0xa4a6e]
    X86_AT(c, 0xc53e6u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xA4A6Eu)));
    // 0c53eb  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0xc53ebu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
    // 0c53ee  mov eax, dword ptr [0xa4a72]
    X86_AT(c, 0xc53eeu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xA4A72u)));
    // 0c53f3  mov dword ptr [ebp - 8], eax
    X86_AT(c, 0xc53f3u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), c.r[0]);
    // 0c53f6  add esp, 0xc
    X86_AT(c, 0xc53f6u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0c53f9  jmp 0xc5410
    X86_AT(c, 0xc53f9u);
    goto L_c5410;
L_c53fb:
    X86_TICK(c, 14);
    // 0c53fb  mov eax, dword ptr [0xa4a6e]
    X86_AT(c, 0xc53fbu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xA4A6Eu)));
    // 0c5400  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0xc5400u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
    // 0c5403  mov eax, dword ptr [0xa4a72]
    X86_AT(c, 0xc5403u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xA4A72u)));
    // 0c5408  mov dword ptr [ebp - 8], eax
    X86_AT(c, 0xc5408u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), c.r[0]);
    // 0c540b  mov edi, 0xffffffff
    X86_AT(c, 0xc540bu);
    c.r[7] = 0xFFFFFFFFu;
L_c5410:
    X86_TICK(c, 25);
    // 0c5410  lea ebx, [ebp - 8]
    X86_AT(c, 0xc5410u);
    c.r[3] = (uint32_t)(c.r[5] + 0xFFFFFFF8u);
    // 0c5413  push ebx
    X86_AT(c, 0xc5413u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0c5414  lea eax, [ebp - 4]
    X86_AT(c, 0xc5414u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFFCu);
    // 0c5417  push eax
    X86_AT(c, 0xc5417u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c5418  movsx edx, word ptr [0xa8a2c]
    X86_AT(c, 0xc5418u);
    c.r[2] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[3] + (uint32_t)(0xA8A2Cu)));
    // 0c541f  push edx
    X86_AT(c, 0xc541fu);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0c5420  push 0xa9234
    X86_AT(c, 0xc5420u);
    { uint32_t v = 0xA9234u; push32(c, v); }
    // 0c5425  call 0xc4f44
    X86_AT(c, 0xc5425u);
    push32(c, 0xc542au); x86_call_known(c, 0xc4f44u, f_000c4f44); X86_RET(c, 0xc542au);
    X86_TICK(c, 22);
    // 0c542a  xchg esi, eax
    X86_AT(c, 0xc542au);
    { uint32_t t = c.r[6]; c.r[6] = c.r[0]; c.r[0] = t; }
    // 0c542b  push dword ptr [ebx]
    X86_AT(c, 0xc542bu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3]))); push32(c, v); }
    // 0c542d  push dword ptr [ebp - 4]
    X86_AT(c, 0xc542du);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))); push32(c, v); }
    // 0c5430  push esi
    X86_AT(c, 0xc5430u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0c5431  call 0xc50ec
    X86_AT(c, 0xc5431u);
    push32(c, 0xc5436u); x86_call_known(c, 0xc50ecu, f_000c50ec); X86_RET(c, 0xc5436u);
    X86_TICK(c, 4);
    // 0c5436  mov eax, edi
    X86_AT(c, 0xc5436u);
    c.r[0] = c.r[7];
    // 0c5438  add esp, 0x1c
    X86_AT(c, 0xc5438u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x1Cu, 0, 4); }
L_c543b:
    X86_TICK(c, 28);
    // 0c543b  pop edi
    X86_AT(c, 0xc543bu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0c543c  pop esi
    X86_AT(c, 0xc543cu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0c543d  pop ebx
    X86_AT(c, 0xc543du);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0c543e  leave 
    X86_AT(c, 0xc543eu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0c543f  ret 
    X86_AT(c, 0xc543fu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xc5194u, "ran off the end of a function");
}
void f_000c543b(X86Cpu& c) {
    X86_TICK(c, 28);
    // 0c543b  pop edi
    X86_AT(c, 0xc543bu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0c543c  pop esi
    X86_AT(c, 0xc543cu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0c543d  pop ebx
    X86_AT(c, 0xc543du);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0c543e  leave 
    X86_AT(c, 0xc543eu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0c543f  ret 
    X86_AT(c, 0xc543fu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xc543bu, "ran off the end of a function");
}
void f_000c5440(X86Cpu& c) {
    X86_TICK(c, 20);
    // 0c5440  push ebp
    X86_AT(c, 0xc5440u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0c5441  mov ebp, esp
    X86_AT(c, 0xc5441u);
    c.r[5] = c.r[4];
    // 0c5443  push edi
    X86_AT(c, 0xc5443u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c5444  push 0x4a14
    X86_AT(c, 0xc5444u);
    { uint32_t v = 0x4A14u; push32(c, v); }
    // 0c5449  push dword ptr [ebp + 8]
    X86_AT(c, 0xc5449u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, v); }
    // 0c544c  call 0xd7fc4
    X86_AT(c, 0xc544cu);
    push32(c, 0xc5451u); x86_call_known(c, 0xd7fc4u, f_000d7fc4); X86_RET(c, 0xc5451u);
    X86_TICK(c, 12);
    // 0c5451  add esp, 8
    X86_AT(c, 0xc5451u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0c5454  xchg edi, eax
    X86_AT(c, 0xc5454u);
    { uint32_t t = c.r[7]; c.r[7] = c.r[0]; c.r[0] = t; }
    // 0c5455  and edi, edi
    X86_AT(c, 0xc5455u);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & c.r[7], 4); }
    // 0c5457  jne 0xc5468
    X86_AT(c, 0xc5457u);
    if (x86_cc(c, 5)) { goto L_c5468; }
    X86_TICK(c, 9);
    // 0c5459  push 0x4a18
    X86_AT(c, 0xc5459u);
    { uint32_t v = 0x4A18u; push32(c, v); }
    // 0c545e  call 0xbc50c
    X86_AT(c, 0xc545eu);
    push32(c, 0xc5463u); x86_call_known(c, 0xbc50cu, f_000bc50c); X86_RET(c, 0xc5463u);
    X86_TICK(c, 9);
    // 0c5463  add esp, 4
    X86_AT(c, 0xc5463u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0c5466  jmp 0xc5483
    X86_AT(c, 0xc5466u);
    goto L_c5483;
L_c5468:
    X86_TICK(c, 15);
    // 0c5468  push edi
    X86_AT(c, 0xc5468u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c5469  push 1
    X86_AT(c, 0xc5469u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0c546b  push 0x800
    X86_AT(c, 0xc546bu);
    { uint32_t v = 0x800u; push32(c, v); }
    // 0c5470  push 0xa8a34
    X86_AT(c, 0xc5470u);
    { uint32_t v = 0xA8A34u; push32(c, v); }
    // 0c5475  call 0xd7ce8
    X86_AT(c, 0xc5475u);
    push32(c, 0xc547au); x86_call_known(c, 0xd7ce8u, f_000d7ce8); X86_RET(c, 0xc547au);
    X86_TICK(c, 9);
    // 0c547a  push edi
    X86_AT(c, 0xc547au);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c547b  call 0xd84c0
    X86_AT(c, 0xc547bu);
    push32(c, 0xc5480u); x86_call_known(c, 0xd84c0u, f_000d84c0); X86_RET(c, 0xc5480u);
    X86_TICK(c, 2);
    // 0c5480  add esp, 0x14
    X86_AT(c, 0xc5480u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x14u, 0, 4); }
L_c5483:
    X86_TICK(c, 20);
    // 0c5483  pop edi
    X86_AT(c, 0xc5483u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0c5484  leave 
    X86_AT(c, 0xc5484u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0c5485  ret 
    X86_AT(c, 0xc5485u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xc5440u, "ran off the end of a function");
}
void f_000c5488(X86Cpu& c) {
    X86_TICK(c, 19);
    // 0c5488  push ebp
    X86_AT(c, 0xc5488u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0c5489  mov ebp, esp
    X86_AT(c, 0xc5489u);
    c.r[5] = c.r[4];
    // 0c548b  push ebx
    X86_AT(c, 0xc548bu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0c548c  push esi
    X86_AT(c, 0xc548cu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0c548d  push edi
    X86_AT(c, 0xc548du);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c548e  push 7
    X86_AT(c, 0xc548eu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c5490  call 0xbb6b0
    X86_AT(c, 0xc5490u);
    push32(c, 0xc5495u); x86_call_known(c, 0xbb6b0u, f_000bb6b0); X86_RET(c, 0xc5495u);
    X86_TICK(c, 9);
    // 0c5495  push 2
    X86_AT(c, 0xc5495u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0c5497  call 0xb607c
    X86_AT(c, 0xc5497u);
    push32(c, 0xc549cu); x86_call_known(c, 0xb607cu, f_000b607c); X86_RET(c, 0xc549cu);
    X86_TICK(c, 14);
    // 0c549c  push dword ptr [ebp + 8]
    X86_AT(c, 0xc549cu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, v); }
    // 0c549f  push 7
    X86_AT(c, 0xc549fu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c54a1  call 0xba428
    X86_AT(c, 0xc54a1u);
    push32(c, 0xc54a6u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xc54a6u);
    X86_TICK(c, 9);
    // 0c54a6  push 7
    X86_AT(c, 0xc54a6u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c54a8  call 0xbbb5c
    X86_AT(c, 0xc54a8u);
    push32(c, 0xc54adu); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xc54adu);
    X86_TICK(c, 7);
    // 0c54ad  call 0xbd5d0
    X86_AT(c, 0xc54adu);
    push32(c, 0xc54b2u); x86_call_known(c, 0xbd5d0u, f_000bd5d0); X86_RET(c, 0xc54b2u);
    X86_TICK(c, 6);
    // 0c54b2  sub ebx, ebx
    X86_AT(c, 0xc54b2u);
    { uint32_t v = c.r[3]; c.r[3] = x86_sub(c, v, c.r[3], 0, 4); }
    // 0c54b4  mov esi, ebx
    X86_AT(c, 0xc54b4u);
    c.r[6] = c.r[3];
    // 0c54b6  add esp, 0x14
    X86_AT(c, 0xc54b6u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x14u, 0, 4); }
L_c54b9:
    X86_TICK(c, 7);
    // 0c54b9  cmp esi, 0x40
    X86_AT(c, 0xc54b9u);
    (void)x86_sub(c, c.r[6], 0x40u, 0, 4);
    // 0c54bc  jge 0xc5638
    X86_AT(c, 0xc54bcu);
    if (x86_cc(c, 13)) { goto L_c5638; }
    X86_TICK(c, 2);
    // 0c54c2  sub edi, edi
    X86_AT(c, 0xc54c2u);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
L_c54c4:
    X86_TICK(c, 7);
    // 0c54c4  cmp edi, 0x40
    X86_AT(c, 0xc54c4u);
    (void)x86_sub(c, c.r[7], 0x40u, 0, 4);
    // 0c54c7  jge 0xc5632
    X86_AT(c, 0xc54c7u);
    if (x86_cc(c, 13)) { goto L_c5632; }
    X86_TICK(c, 25);
    // 0c54cd  mov eax, esi
    X86_AT(c, 0xc54cdu);
    c.r[0] = c.r[6];
    // 0c54cf  shl eax, 6
    X86_AT(c, 0xc54cfu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x6u, 4, w); if (w) c.r[0] = r; }
    // 0c54d2  lea edx, [edi + eax*1]
    X86_AT(c, 0xc54d2u);
    c.r[2] = (uint32_t)(c.r[7] + c.r[0]);
    // 0c54d5  movzx eax, byte ptr [edx + 0x8afa8]
    X86_AT(c, 0xc54d5u);
    c.r[0] = rd8((c.sbase[3] + (uint32_t)(c.r[2] + 0x8AFA8u)));
    // 0c54dc  xchg edx, eax
    X86_AT(c, 0xc54dcu);
    { uint32_t t = c.r[2]; c.r[2] = c.r[0]; c.r[0] = t; }
    // 0c54dd  dec edx
    X86_AT(c, 0xc54ddu);
    { uint32_t v = c.r[2]; c.r[2] = x86_dec(c, v, 4); }
    // 0c54de  cmp edx, 0x22
    X86_AT(c, 0xc54deu);
    (void)x86_sub(c, c.r[2], 0x22u, 0, 4);
    // 0c54e1  ja 0xc55a9
    X86_AT(c, 0xc54e1u);
    if (x86_cc(c, 7)) { goto L_c55a9; }
    X86_TICK(c, 7);
    // 0c54e7  jmp dword ptr cs:[edx*4 + 0xc54ef]
    X86_AT(c, 0xc54e7u);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xC54EFu)));
      switch (t) {
      case 0xc557bu: goto L_c557b;
      case 0xc5582u: goto L_c5582;
      case 0xc5589u: goto L_c5589;
      case 0xc5590u: goto L_c5590;
      case 0xc5597u: goto L_c5597;
      case 0xc559eu: goto L_c559e;
      case 0xc55a2u: goto L_c55a2;
      case 0xc55a9u: goto L_c55a9;
      default: x86_jump(c, t); return; } }
L_c557b:
    X86_TICK(c, 9);
    // 0c557b  mov ebx, 2
    X86_AT(c, 0xc557bu);
    c.r[3] = 0x2u;
    // 0c5580  jmp 0xc55ae
    X86_AT(c, 0xc5580u);
    goto L_c55ae;
L_c5582:
    X86_TICK(c, 9);
    // 0c5582  mov ebx, 6
    X86_AT(c, 0xc5582u);
    c.r[3] = 0x6u;
    // 0c5587  jmp 0xc55ae
    X86_AT(c, 0xc5587u);
    goto L_c55ae;
L_c5589:
    X86_TICK(c, 9);
    // 0c5589  mov ebx, 3
    X86_AT(c, 0xc5589u);
    c.r[3] = 0x3u;
    // 0c558e  jmp 0xc55ae
    X86_AT(c, 0xc558eu);
    goto L_c55ae;
L_c5590:
    X86_TICK(c, 9);
    // 0c5590  mov ebx, 4
    X86_AT(c, 0xc5590u);
    c.r[3] = 0x4u;
    // 0c5595  jmp 0xc55ae
    X86_AT(c, 0xc5595u);
    goto L_c55ae;
L_c5597:
    X86_TICK(c, 9);
    // 0c5597  mov ebx, 7
    X86_AT(c, 0xc5597u);
    c.r[3] = 0x7u;
    // 0c559c  jmp 0xc55ae
    X86_AT(c, 0xc559cu);
    goto L_c55ae;
L_c559e:
    X86_TICK(c, 9);
    // 0c559e  sub ebx, ebx
    X86_AT(c, 0xc559eu);
    { uint32_t v = c.r[3]; c.r[3] = x86_sub(c, v, c.r[3], 0, 4); }
    // 0c55a0  jmp 0xc55ae
    X86_AT(c, 0xc55a0u);
    goto L_c55ae;
L_c55a2:
    X86_TICK(c, 9);
    // 0c55a2  mov ebx, 8
    X86_AT(c, 0xc55a2u);
    c.r[3] = 0x8u;
    // 0c55a7  jmp 0xc55ae
    X86_AT(c, 0xc55a7u);
    goto L_c55ae;
L_c55a9:
    X86_TICK(c, 2);
    // 0c55a9  mov ebx, 9
    X86_AT(c, 0xc55a9u);
    c.r[3] = 0x9u;
L_c55ae:
    X86_TICK(c, 18);
    // 0c55ae  mov eax, esi
    X86_AT(c, 0xc55aeu);
    c.r[0] = c.r[6];
    // 0c55b0  shl eax, 6
    X86_AT(c, 0xc55b0u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x6u, 4, w); if (w) c.r[0] = r; }
    // 0c55b3  lea edx, [edi + eax*1]
    X86_AT(c, 0xc55b3u);
    c.r[2] = (uint32_t)(c.r[7] + c.r[0]);
    // 0c55b6  mov al, byte ptr [edx + 0x8afa8]
    X86_AT(c, 0xc55b6u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[2] + 0x8AFA8u))));
    // 0c55bc  cmp al, 0xa
    X86_AT(c, 0xc55bcu);
    (void)x86_sub(c, g8(c, 0), 0xAu, 0, 1);
    // 0c55be  je 0xc55c8
    X86_AT(c, 0xc55beu);
    if (x86_cc(c, 4)) { goto L_c55c8; }
    X86_TICK(c, 7);
    // 0c55c0  cmp al, 0x11
    X86_AT(c, 0xc55c0u);
    (void)x86_sub(c, g8(c, 0), 0x11u, 0, 1);
    // 0c55c2  jbe 0xc55cd
    X86_AT(c, 0xc55c2u);
    if (x86_cc(c, 6)) { goto L_c55cd; }
    X86_TICK(c, 7);
    // 0c55c4  cmp al, 0x21
    X86_AT(c, 0xc55c4u);
    (void)x86_sub(c, g8(c, 0), 0x21u, 0, 1);
    // 0c55c6  jae 0xc55cd
    X86_AT(c, 0xc55c6u);
    if (x86_cc(c, 3)) { goto L_c55cd; }
L_c55c8:
    X86_TICK(c, 2);
    // 0c55c8  mov ebx, 2
    X86_AT(c, 0xc55c8u);
    c.r[3] = 0x2u;
L_c55cd:
    X86_TICK(c, 18);
    // 0c55cd  mov eax, esi
    X86_AT(c, 0xc55cdu);
    c.r[0] = c.r[6];
    // 0c55cf  shl eax, 6
    X86_AT(c, 0xc55cfu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x6u, 4, w); if (w) c.r[0] = r; }
    // 0c55d2  lea edx, [edi + eax*1]
    X86_AT(c, 0xc55d2u);
    c.r[2] = (uint32_t)(c.r[7] + c.r[0]);
    // 0c55d5  mov al, byte ptr [edx + 0x8afa8]
    X86_AT(c, 0xc55d5u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[2] + 0x8AFA8u))));
    // 0c55db  cmp al, 0x24
    X86_AT(c, 0xc55dbu);
    (void)x86_sub(c, g8(c, 0), 0x24u, 0, 1);
    // 0c55dd  jbe 0xc55e8
    X86_AT(c, 0xc55ddu);
    if (x86_cc(c, 6)) { goto L_c55e8; }
    X86_TICK(c, 7);
    // 0c55df  cmp al, 0x40
    X86_AT(c, 0xc55dfu);
    (void)x86_sub(c, g8(c, 0), 0x40u, 0, 1);
    // 0c55e1  jae 0xc55e8
    X86_AT(c, 0xc55e1u);
    if (x86_cc(c, 3)) { goto L_c55e8; }
    X86_TICK(c, 2);
    // 0c55e3  mov ebx, 5
    X86_AT(c, 0xc55e3u);
    c.r[3] = 0x5u;
L_c55e8:
    X86_TICK(c, 12);
    // 0c55e8  cmp dword ptr [0xa4a56], 0
    X86_AT(c, 0xc55e8u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xA4A56u))), 0x0u, 0, 4);
    // 0c55ef  jne 0xc5606
    X86_AT(c, 0xc55efu);
    if (x86_cc(c, 5)) { goto L_c5606; }
    X86_TICK(c, 11);
    // 0c55f1  cmp edi, dword ptr [0xa6048]
    X86_AT(c, 0xc55f1u);
    (void)x86_sub(c, c.r[7], rd32((c.sbase[3] + (uint32_t)(0xA6048u))), 0, 4);
    // 0c55f7  jne 0xc5606
    X86_AT(c, 0xc55f7u);
    if (x86_cc(c, 5)) { goto L_c5606; }
    X86_TICK(c, 11);
    // 0c55f9  cmp esi, dword ptr [0xa604c]
    X86_AT(c, 0xc55f9u);
    (void)x86_sub(c, c.r[6], rd32((c.sbase[3] + (uint32_t)(0xA604Cu))), 0, 4);
    // 0c55ff  jne 0xc5606
    X86_AT(c, 0xc55ffu);
    if (x86_cc(c, 5)) { goto L_c5606; }
    X86_TICK(c, 2);
    // 0c5601  mov ebx, 1
    X86_AT(c, 0xc5601u);
    c.r[3] = 0x1u;
L_c5606:
    X86_TICK(c, 27);
    // 0c5606  push 5
    X86_AT(c, 0xc5606u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0c5608  push 5
    X86_AT(c, 0xc5608u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0c560a  lea eax, [esi + esi*4 + 0x3f]
    X86_AT(c, 0xc560au);
    c.r[0] = (uint32_t)(c.r[6] + c.r[6] * 4 + 0x3Fu);
    // 0c560e  push eax
    X86_AT(c, 0xc560eu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c560f  lea eax, [edi + edi*4 + 0x1a]
    X86_AT(c, 0xc560fu);
    c.r[0] = (uint32_t)(c.r[7] + c.r[7] * 4 + 0x1Au);
    // 0c5613  push eax
    X86_AT(c, 0xc5613u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c5614  lea eax, [ebx*8]
    X86_AT(c, 0xc5614u);
    c.r[0] = (uint32_t)(c.r[3] * 8);
    // 0c561b  lea eax, [eax + eax*2]
    X86_AT(c, 0xc561bu);
    c.r[0] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0c561e  add eax, 0xa97b4
    X86_AT(c, 0xc561eu);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0xA97B4u, 0, 4); }
    // 0c5623  push eax
    X86_AT(c, 0xc5623u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c5624  call 0xbb018
    X86_AT(c, 0xc5624u);
    push32(c, 0xc5629u); x86_call_known(c, 0xbb018u, f_000bb018); X86_RET(c, 0xc5629u);
    X86_TICK(c, 11);
    // 0c5629  inc edi
    X86_AT(c, 0xc5629u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0c562a  add esp, 0x14
    X86_AT(c, 0xc562au);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x14u, 0, 4); }
    // 0c562d  jmp 0xc54c4
    X86_AT(c, 0xc562du);
    X86_POLL(c, 0xc54c4u); goto L_c54c4;
L_c5632:
    X86_TICK(c, 9);
    // 0c5632  inc esi
    X86_AT(c, 0xc5632u);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 0c5633  jmp 0xc54b9
    X86_AT(c, 0xc5633u);
    X86_POLL(c, 0xc54b9u); goto L_c54b9;
L_c5638:
    X86_TICK(c, 11);
    // 0c5638  sub ebx, ebx
    X86_AT(c, 0xc5638u);
    { uint32_t v = c.r[3]; c.r[3] = x86_sub(c, v, c.r[3], 0, 4); }
    // 0c563a  push 0x4a60
    X86_AT(c, 0xc563au);
    { uint32_t v = 0x4A60u; push32(c, v); }
    // 0c563f  call 0xbc50c
    X86_AT(c, 0xc563fu);
    push32(c, 0xc5644u); x86_call_known(c, 0xbc50cu, f_000bc50c); X86_RET(c, 0xc5644u);
    X86_TICK(c, 2);
    // 0c5644  add esp, 4
    X86_AT(c, 0xc5644u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
L_c5647:
    X86_TICK(c, 9);
    // 0c5647  push 7
    X86_AT(c, 0xc5647u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c5649  call 0xb9930
    X86_AT(c, 0xc5649u);
    push32(c, 0xc564eu); x86_call_known(c, 0xb9930u, f_000b9930); X86_RET(c, 0xc564eu);
    X86_TICK(c, 9);
    // 0c564e  add esp, 4
    X86_AT(c, 0xc564eu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0c5651  and al, al
    X86_AT(c, 0xc5651u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & g8(c, 0), 1)); }
    // 0c5653  jne 0xc56b5
    X86_AT(c, 0xc5653u);
    if (x86_cc(c, 5)) { goto L_c56b5; }
    X86_TICK(c, 7);
    // 0c5655  and ebx, ebx
    X86_AT(c, 0xc5655u);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & c.r[3], 4); }
    // 0c5657  jne 0xc567e
    X86_AT(c, 0xc5657u);
    if (x86_cc(c, 5)) { goto L_c567e; }
    X86_TICK(c, 29);
    // 0c5659  push 5
    X86_AT(c, 0xc5659u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0c565b  push 5
    X86_AT(c, 0xc565bu);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0c565d  mov eax, dword ptr [0xa4a7a]
    X86_AT(c, 0xc565du);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xA4A7Au)));
    // 0c5662  lea eax, [eax + eax*4 + 0x3f]
    X86_AT(c, 0xc5662u);
    c.r[0] = (uint32_t)(c.r[0] + c.r[0] * 4 + 0x3Fu);
    // 0c5666  push eax
    X86_AT(c, 0xc5666u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c5667  mov eax, dword ptr [0xa4a76]
    X86_AT(c, 0xc5667u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xA4A76u)));
    // 0c566c  lea eax, [eax + eax*4 + 0x1a]
    X86_AT(c, 0xc566cu);
    c.r[0] = (uint32_t)(c.r[0] + c.r[0] * 4 + 0x1Au);
    // 0c5670  push eax
    X86_AT(c, 0xc5670u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c5671  push 0xa97cc
    X86_AT(c, 0xc5671u);
    { uint32_t v = 0xA97CCu; push32(c, v); }
    // 0c5676  call 0xbb018
    X86_AT(c, 0xc5676u);
    push32(c, 0xc567bu); x86_call_known(c, 0xbb018u, f_000bb018); X86_RET(c, 0xc567bu);
    X86_TICK(c, 2);
    // 0c567b  add esp, 0x14
    X86_AT(c, 0xc567bu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x14u, 0, 4); }
L_c567e:
    X86_TICK(c, 7);
    // 0c567e  cmp ebx, 0x64
    X86_AT(c, 0xc567eu);
    (void)x86_sub(c, c.r[3], 0x64u, 0, 4);
    // 0c5681  jne 0xc56a8
    X86_AT(c, 0xc5681u);
    if (x86_cc(c, 5)) { goto L_c56a8; }
    X86_TICK(c, 29);
    // 0c5683  push 5
    X86_AT(c, 0xc5683u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0c5685  push 5
    X86_AT(c, 0xc5685u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0c5687  mov eax, dword ptr [0xa4a7a]
    X86_AT(c, 0xc5687u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xA4A7Au)));
    // 0c568c  lea eax, [eax + eax*4 + 0x3f]
    X86_AT(c, 0xc568cu);
    c.r[0] = (uint32_t)(c.r[0] + c.r[0] * 4 + 0x3Fu);
    // 0c5690  push eax
    X86_AT(c, 0xc5690u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c5691  mov eax, dword ptr [0xa4a76]
    X86_AT(c, 0xc5691u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xA4A76u)));
    // 0c5696  lea eax, [eax + eax*4 + 0x1a]
    X86_AT(c, 0xc5696u);
    c.r[0] = (uint32_t)(c.r[0] + c.r[0] * 4 + 0x1Au);
    // 0c569a  push eax
    X86_AT(c, 0xc569au);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c569b  push 0xa9874
    X86_AT(c, 0xc569bu);
    { uint32_t v = 0xA9874u; push32(c, v); }
    // 0c56a0  call 0xbb018
    X86_AT(c, 0xc56a0u);
    push32(c, 0xc56a5u); x86_call_known(c, 0xbb018u, f_000bb018); X86_RET(c, 0xc56a5u);
    X86_TICK(c, 2);
    // 0c56a5  add esp, 0x14
    X86_AT(c, 0xc56a5u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x14u, 0, 4); }
L_c56a8:
    X86_TICK(c, 9);
    // 0c56a8  inc ebx
    X86_AT(c, 0xc56a8u);
    { uint32_t v = c.r[3]; c.r[3] = x86_inc(c, v, 4); }
    // 0c56a9  cmp ebx, 0xc8
    X86_AT(c, 0xc56a9u);
    (void)x86_sub(c, c.r[3], 0xC8u, 0, 4);
    // 0c56af  jne 0xc5647
    X86_AT(c, 0xc56afu);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xc5647u); goto L_c5647; }
    X86_TICK(c, 9);
    // 0c56b1  sub ebx, ebx
    X86_AT(c, 0xc56b1u);
    { uint32_t v = c.r[3]; c.r[3] = x86_sub(c, v, c.r[3], 0, 4); }
    // 0c56b3  jmp 0xc5647
    X86_AT(c, 0xc56b3u);
    X86_POLL(c, 0xc5647u); goto L_c5647;
L_c56b5:
    X86_TICK(c, 9);
    // 0c56b5  push 2
    X86_AT(c, 0xc56b5u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0c56b7  call 0xbbb5c
    X86_AT(c, 0xc56b7u);
    push32(c, 0xc56bcu); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xc56bcu);
    X86_TICK(c, 7);
    // 0c56bc  call 0xbd5d0
    X86_AT(c, 0xc56bcu);
    push32(c, 0xc56c1u); x86_call_known(c, 0xbd5d0u, f_000bd5d0); X86_RET(c, 0xc56c1u);
    X86_TICK(c, 14);
    // 0c56c1  add esp, 4
    X86_AT(c, 0xc56c1u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0c56c4  cmp dword ptr [0xa4a56], 1
    X86_AT(c, 0xc56c4u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xA4A56u))), 0x1u, 0, 4);
    // 0c56cb  je 0xc56d7
    X86_AT(c, 0xc56cbu);
    if (x86_cc(c, 4)) { goto L_c56d7; }
    X86_TICK(c, 9);
    // 0c56cd  push 1
    X86_AT(c, 0xc56cdu);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0c56cf  call 0xb61d4
    X86_AT(c, 0xc56cfu);
    push32(c, 0xc56d4u); x86_call_known(c, 0xb61d4u, f_000b61d4); X86_RET(c, 0xc56d4u);
    X86_TICK(c, 2);
    // 0c56d4  add esp, 4
    X86_AT(c, 0xc56d4u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
L_c56d7:
    X86_TICK(c, 28);
    // 0c56d7  pop edi
    X86_AT(c, 0xc56d7u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0c56d8  pop esi
    X86_AT(c, 0xc56d8u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0c56d9  pop ebx
    X86_AT(c, 0xc56d9u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0c56da  leave 
    X86_AT(c, 0xc56dau);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0c56db  ret 
    X86_AT(c, 0xc56dbu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xc5488u, "ran off the end of a function");
}
void f_000c56dc(X86Cpu& c) {
    X86_TICK(c, 39);
    // 0c56dc  push ebp
    X86_AT(c, 0xc56dcu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0c56dd  mov ebp, esp
    X86_AT(c, 0xc56ddu);
    c.r[5] = c.r[4];
    // 0c56df  push eax
    X86_AT(c, 0xc56dfu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c56e0  push ebx
    X86_AT(c, 0xc56e0u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0c56e1  push esi
    X86_AT(c, 0xc56e1u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0c56e2  push edi
    X86_AT(c, 0xc56e2u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c56e3  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0xc56e3u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0c56e6  mov eax, dword ptr [0xa4a56]
    X86_AT(c, 0xc56e6u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xA4A56u)));
    // 0c56eb  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0xc56ebu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
    // 0c56ee  mov esi, dword ptr [0xa4a66]
    X86_AT(c, 0xc56eeu);
    c.r[6] = rd32((c.sbase[3] + (uint32_t)(0xA4A66u)));
    // 0c56f4  mov ebx, dword ptr [0xa4a6a]
    X86_AT(c, 0xc56f4u);
    c.r[3] = rd32((c.sbase[3] + (uint32_t)(0xA4A6Au)));
    // 0c56fa  push 7
    X86_AT(c, 0xc56fau);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c56fc  call 0xbb6b0
    X86_AT(c, 0xc56fcu);
    push32(c, 0xc5701u); x86_call_known(c, 0xbb6b0u, f_000bb6b0); X86_RET(c, 0xc5701u);
    X86_TICK(c, 11);
    // 0c5701  add esp, 4
    X86_AT(c, 0xc5701u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0c5704  lea edx, [edi - 1]
    X86_AT(c, 0xc5704u);
    c.r[2] = (uint32_t)(c.r[7] + 0xFFFFFFFFu);
    // 0c5707  cmp edx, 6
    X86_AT(c, 0xc5707u);
    (void)x86_sub(c, c.r[2], 0x6u, 0, 4);
    // 0c570a  ja 0xc5769
    X86_AT(c, 0xc570au);
    if (x86_cc(c, 7)) { goto L_c5769; }
    X86_TICK(c, 7);
    // 0c570c  jmp dword ptr cs:[edx*4 + 0xc5714]
    X86_AT(c, 0xc570cu);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xC5714u)));
      switch (t) {
      case 0xc5730u: goto L_c5730;
      case 0xc5737u: goto L_c5737;
      case 0xc573eu: goto L_c573e;
      case 0xc5745u: goto L_c5745;
      case 0xc574cu: goto L_c574c;
      case 0xc5753u: goto L_c5753;
      case 0xc575au: goto L_c575a;
      default: x86_jump(c, t); return; } }
L_c5730:
    X86_TICK(c, 9);
    // 0c5730  push 0x4a94
    X86_AT(c, 0xc5730u);
    { uint32_t v = 0x4A94u; push32(c, v); }
    // 0c5735  jmp 0xc575f
    X86_AT(c, 0xc5735u);
    goto L_c575f;
L_c5737:
    X86_TICK(c, 9);
    // 0c5737  push 0x4aa0
    X86_AT(c, 0xc5737u);
    { uint32_t v = 0x4AA0u; push32(c, v); }
    // 0c573c  jmp 0xc575f
    X86_AT(c, 0xc573cu);
    goto L_c575f;
L_c573e:
    X86_TICK(c, 9);
    // 0c573e  push 0x4ab0
    X86_AT(c, 0xc573eu);
    { uint32_t v = 0x4AB0u; push32(c, v); }
    // 0c5743  jmp 0xc575f
    X86_AT(c, 0xc5743u);
    goto L_c575f;
L_c5745:
    X86_TICK(c, 9);
    // 0c5745  push 0x4ac0
    X86_AT(c, 0xc5745u);
    { uint32_t v = 0x4AC0u; push32(c, v); }
    // 0c574a  jmp 0xc575f
    X86_AT(c, 0xc574au);
    goto L_c575f;
L_c574c:
    X86_TICK(c, 9);
    // 0c574c  push 0x4acc
    X86_AT(c, 0xc574cu);
    { uint32_t v = 0x4ACCu; push32(c, v); }
    // 0c5751  jmp 0xc575f
    X86_AT(c, 0xc5751u);
    goto L_c575f;
L_c5753:
    X86_TICK(c, 9);
    // 0c5753  push 0x4ae0
    X86_AT(c, 0xc5753u);
    { uint32_t v = 0x4AE0u; push32(c, v); }
    // 0c5758  jmp 0xc575f
    X86_AT(c, 0xc5758u);
    goto L_c575f;
L_c575a:
    X86_TICK(c, 2);
    // 0c575a  push 0x4af0
    X86_AT(c, 0xc575au);
    { uint32_t v = 0x4AF0u; push32(c, v); }
L_c575f:
    X86_TICK(c, 7);
    // 0c575f  call 0xc5440
    X86_AT(c, 0xc575fu);
    push32(c, 0xc5764u); x86_call_known(c, 0xc5440u, f_000c5440); X86_RET(c, 0xc5764u);
    X86_TICK(c, 9);
    // 0c5764  add esp, 4
    X86_AT(c, 0xc5764u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0c5767  jmp 0xc577b
    X86_AT(c, 0xc5767u);
    goto L_c577b;
L_c5769:
    X86_TICK(c, 9);
    // 0c5769  push 0x4b00
    X86_AT(c, 0xc5769u);
    { uint32_t v = 0x4B00u; push32(c, v); }
    // 0c576e  call 0xbc50c
    X86_AT(c, 0xc576eu);
    push32(c, 0xc5773u); x86_call_known(c, 0xbc50cu, f_000bc50c); X86_RET(c, 0xc5773u);
    X86_TICK(c, 9);
    // 0c5773  add esp, 4
    X86_AT(c, 0xc5773u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0c5776  jmp 0xc58a7
    X86_AT(c, 0xc5776u);
    goto L_c58a7;
L_c577b:
    X86_TICK(c, 33);
    // 0c577b  mov dword ptr [0xa4a56], 1
    X86_AT(c, 0xc577bu);
    wr32((c.sbase[3] + (uint32_t)(0xA4A56u)), 0x1u);
    // 0c5785  mov dword ptr [0xa4a52], 1
    X86_AT(c, 0xc5785u);
    wr32((c.sbase[3] + (uint32_t)(0xA4A52u)), 0x1u);
    // 0c578f  mov dword ptr [0xa4a6e], 1
    X86_AT(c, 0xc578fu);
    wr32((c.sbase[3] + (uint32_t)(0xA4A6Eu)), 0x1u);
    // 0c5799  mov dword ptr [0xa4a72], 1
    X86_AT(c, 0xc5799u);
    wr32((c.sbase[3] + (uint32_t)(0xA4A72u)), 0x1u);
    // 0c57a3  mov eax, 0xa8a18
    X86_AT(c, 0xc57a3u);
    c.r[0] = 0xA8A18u;
    // 0c57a8  mov word ptr [eax + 0x14], 2
    X86_AT(c, 0xc57a8u);
    wr16((c.sbase[3] + (uint32_t)(c.r[0] + 0x14u)), 0x2u);
    // 0c57ae  mov dword ptr [0xa4a9a], 0
    X86_AT(c, 0xc57aeu);
    wr32((c.sbase[3] + (uint32_t)(0xA4A9Au)), 0x0u);
    // 0c57b8  mov edx, edi
    X86_AT(c, 0xc57b8u);
    c.r[2] = c.r[7];
    // 0c57ba  mov word ptr [eax + 0x16], dx
    X86_AT(c, 0xc57bau);
    wr16((c.sbase[3] + (uint32_t)(c.r[0] + 0x16u)), (c.r[2] & 0xFFFFu));
    // 0c57be  mov dx, 0xffff
    X86_AT(c, 0xc57beu);
    s16(c, 2, 0xFFFFu);
    // 0c57c2  mov word ptr [0x9c544], dx
    X86_AT(c, 0xc57c2u);
    wr16((c.sbase[3] + (uint32_t)(0x9C544u)), (c.r[2] & 0xFFFFu));
    // 0c57c9  mov word ptr [eax], dx
    X86_AT(c, 0xc57c9u);
    wr16((c.sbase[3] + (uint32_t)(c.r[0])), (c.r[2] & 0xFFFFu));
    // 0c57cc  push 1
    X86_AT(c, 0xc57ccu);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0c57ce  call 0xba6a0
    X86_AT(c, 0xc57ceu);
    push32(c, 0xc57d3u); x86_call_known(c, 0xba6a0u, f_000ba6a0); X86_RET(c, 0xc57d3u);
    X86_TICK(c, 9);
    // 0c57d3  push 1
    X86_AT(c, 0xc57d3u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0c57d5  call 0xbc724
    X86_AT(c, 0xc57d5u);
    push32(c, 0xc57dau); x86_call_known(c, 0xbc724u, f_000bc724); X86_RET(c, 0xc57dau);
    X86_TICK(c, 9);
    // 0c57da  push 0
    X86_AT(c, 0xc57dau);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0c57dc  call 0xba6a0
    X86_AT(c, 0xc57dcu);
    push32(c, 0xc57e1u); x86_call_known(c, 0xba6a0u, f_000ba6a0); X86_RET(c, 0xc57e1u);
    X86_TICK(c, 9);
    // 0c57e1  push 2
    X86_AT(c, 0xc57e1u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0c57e3  call 0xb84e0
    X86_AT(c, 0xc57e3u);
    push32(c, 0xc57e8u); x86_call_known(c, 0xb84e0u, f_000b84e0); X86_RET(c, 0xc57e8u);
    X86_TICK(c, 7);
    // 0c57e8  call 0xc59c4
    X86_AT(c, 0xc57e8u);
    push32(c, 0xc57edu); x86_call_known(c, 0xc59c4u, f_000c59c4); X86_RET(c, 0xc57edu);
    X86_TICK(c, 11);
    // 0c57ed  push 0x4b44
    X86_AT(c, 0xc57edu);
    { uint32_t v = 0x4B44u; push32(c, v); }
    // 0c57f2  push 7
    X86_AT(c, 0xc57f2u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c57f4  call 0xba428
    X86_AT(c, 0xc57f4u);
    push32(c, 0xc57f9u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xc57f9u);
    X86_TICK(c, 9);
    // 0c57f9  push 7
    X86_AT(c, 0xc57f9u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c57fb  call 0xbbb5c
    X86_AT(c, 0xc57fbu);
    push32(c, 0xc5800u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xc5800u);
    X86_TICK(c, 7);
    // 0c5800  call 0xb8d78
    X86_AT(c, 0xc5800u);
    push32(c, 0xc5805u); x86_call_known(c, 0xb8d78u, f_000b8d78); X86_RET(c, 0xc5805u);
    X86_TICK(c, 2);
    // 0c5805  add esp, 0x1c
    X86_AT(c, 0xc5805u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x1Cu, 0, 4); }
L_c5808:
    X86_TICK(c, 7);
    // 0c5808  call 0xc5a10
    X86_AT(c, 0xc5808u);
    push32(c, 0xc580du); x86_call_known(c, 0xc5a10u, f_000c5a10); X86_RET(c, 0xc580du);
    X86_TICK(c, 7);
    // 0c580d  and eax, eax
    X86_AT(c, 0xc580du);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0c580f  je 0xc5808
    X86_AT(c, 0xc580fu);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xc5808u); goto L_c5808; }
    X86_TICK(c, 12);
    // 0c5811  cmp word ptr [0xa492c], 0
    X86_AT(c, 0xc5811u);
    (void)x86_sub(c, rd16((c.sbase[3] + (uint32_t)(0xA492Cu))), 0x0u, 0, 2);
    // 0c5819  je 0xc58a7
    X86_AT(c, 0xc5819u);
    if (x86_cc(c, 4)) { goto L_c58a7; }
    X86_TICK(c, 19);
    // 0c581f  mov dword ptr [0xa4a52], 0
    X86_AT(c, 0xc581fu);
    wr32((c.sbase[3] + (uint32_t)(0xA4A52u)), 0x0u);
    // 0c5829  mov dword ptr [0xa4a56], 0
    X86_AT(c, 0xc5829u);
    wr32((c.sbase[3] + (uint32_t)(0xA4A56u)), 0x0u);
    // 0c5833  mov dword ptr [0xa4a76], esi
    X86_AT(c, 0xc5833u);
    wr32((c.sbase[3] + (uint32_t)(0xA4A76u)), c.r[6]);
    // 0c5839  mov dword ptr [0xa4a66], esi
    X86_AT(c, 0xc5839u);
    wr32((c.sbase[3] + (uint32_t)(0xA4A66u)), c.r[6]);
    // 0c583f  mov dword ptr [0xa4a7a], ebx
    X86_AT(c, 0xc583fu);
    wr32((c.sbase[3] + (uint32_t)(0xA4A7Au)), c.r[3]);
    // 0c5845  mov dword ptr [0xa4a6a], ebx
    X86_AT(c, 0xc5845u);
    wr32((c.sbase[3] + (uint32_t)(0xA4A6Au)), c.r[3]);
    // 0c584b  call 0xbd5d0
    X86_AT(c, 0xc584bu);
    push32(c, 0xc5850u); x86_call_known(c, 0xbd5d0u, f_000bd5d0); X86_RET(c, 0xc5850u);
    X86_TICK(c, 9);
    // 0c5850  push 0x4b88
    X86_AT(c, 0xc5850u);
    { uint32_t v = 0x4B88u; push32(c, v); }
    // 0c5855  call 0xbd018
    X86_AT(c, 0xc5855u);
    push32(c, 0xc585au); x86_call_known(c, 0xbd018u, f_000bd018); X86_RET(c, 0xc585au);
    X86_TICK(c, 11);
    // 0c585a  mov byte ptr [0x8bcf2], 8
    X86_AT(c, 0xc585au);
    wr8((c.sbase[3] + (uint32_t)(0x8BCF2u)), 0x8u);
    // 0c5861  push 0
    X86_AT(c, 0xc5861u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0c5863  call 0xb84e0
    X86_AT(c, 0xc5863u);
    push32(c, 0xc5868u); x86_call_known(c, 0xb84e0u, f_000b84e0); X86_RET(c, 0xc5868u);
    X86_TICK(c, 9);
    // 0c5868  push 8
    X86_AT(c, 0xc5868u);
    { uint32_t v = 0x8u; push32(c, v); }
    // 0c586a  call 0xbbb5c
    X86_AT(c, 0xc586au);
    push32(c, 0xc586fu); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xc586fu);
    X86_TICK(c, 7);
    // 0c586f  call 0xd42e0
    X86_AT(c, 0xc586fu);
    push32(c, 0xc5874u); x86_call_known(c, 0xd42e0u, f_000d42e0); X86_RET(c, 0xc5874u);
    X86_TICK(c, 7);
    // 0c5874  call 0xb62d0
    X86_AT(c, 0xc5874u);
    push32(c, 0xc5879u); x86_call_known(c, 0xb62d0u, f_000b62d0); X86_RET(c, 0xc5879u);
    X86_TICK(c, 9);
    // 0c5879  push 7
    X86_AT(c, 0xc5879u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c587b  call 0xbb6b0
    X86_AT(c, 0xc587bu);
    push32(c, 0xc5880u); x86_call_known(c, 0xbb6b0u, f_000bb6b0); X86_RET(c, 0xc5880u);
    X86_TICK(c, 11);
    // 0c5880  push 0x4b9c
    X86_AT(c, 0xc5880u);
    { uint32_t v = 0x4B9Cu; push32(c, v); }
    // 0c5885  push 7
    X86_AT(c, 0xc5885u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c5887  call 0xba428
    X86_AT(c, 0xc5887u);
    push32(c, 0xc588cu); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xc588cu);
    X86_TICK(c, 9);
    // 0c588c  push 7
    X86_AT(c, 0xc588cu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c588e  call 0xbbb5c
    X86_AT(c, 0xc588eu);
    push32(c, 0xc5893u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xc5893u);
    X86_TICK(c, 9);
    // 0c5893  push 0x45664
    X86_AT(c, 0xc5893u);
    { uint32_t v = 0x45664u; push32(c, v); }
    // 0c5898  call 0xbd8a4
    X86_AT(c, 0xc5898u);
    push32(c, 0xc589du); x86_call_known(c, 0xbd8a4u, f_000bd8a4); X86_RET(c, 0xc589du);
    X86_TICK(c, 9);
    // 0c589d  push 1
    X86_AT(c, 0xc589du);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0c589f  call 0xb61d4
    X86_AT(c, 0xc589fu);
    push32(c, 0xc58a4u); x86_call_known(c, 0xb61d4u, f_000b61d4); X86_RET(c, 0xc58a4u);
    X86_TICK(c, 2);
    // 0c58a4  add esp, 0x24
    X86_AT(c, 0xc58a4u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x24u, 0, 4); }
L_c58a7:
    X86_TICK(c, 28);
    // 0c58a7  pop edi
    X86_AT(c, 0xc58a7u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0c58a8  pop esi
    X86_AT(c, 0xc58a8u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0c58a9  pop ebx
    X86_AT(c, 0xc58a9u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0c58aa  leave 
    X86_AT(c, 0xc58aau);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0c58ab  ret 
    X86_AT(c, 0xc58abu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xc56dcu, "ran off the end of a function");
}
void f_000c58ac(X86Cpu& c) {
    X86_TICK(c, 15);
    // 0c58ac  push edi
    X86_AT(c, 0xc58acu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c58ad  mov edx, 0xa9234
    X86_AT(c, 0xc58adu);
    c.r[2] = 0xA9234u;
    // 0c58b2  mov eax, dword ptr [0xa4a52]
    X86_AT(c, 0xc58b2u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xA4A52u)));
    // 0c58b7  shl eax, 8
    X86_AT(c, 0xc58b7u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 0c58ba  lea ecx, [eax + 0xa8934]
    X86_AT(c, 0xc58bau);
    c.r[1] = (uint32_t)(c.r[0] + 0xA8934u);
    // 0c58c0  sub edi, edi
    X86_AT(c, 0xc58c0u);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
L_c58c2:
    X86_TICK(c, 7);
    // 0c58c2  cmp edi, 0x100
    X86_AT(c, 0xc58c2u);
    (void)x86_sub(c, c.r[7], 0x100u, 0, 4);
    // 0c58c8  jge 0xc58d3
    X86_AT(c, 0xc58c8u);
    if (x86_cc(c, 13)) { goto L_c58d3; }
    X86_TICK(c, 19);
    // 0c58ca  mov al, byte ptr [ecx]
    X86_AT(c, 0xc58cau);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[1]))));
    // 0c58cc  inc ecx
    X86_AT(c, 0xc58ccu);
    { uint32_t v = c.r[1]; c.r[1] = x86_inc(c, v, 4); }
    // 0c58cd  mov byte ptr [edx], al
    X86_AT(c, 0xc58cdu);
    wr8((c.sbase[3] + (uint32_t)(c.r[2])), g8(c, 0));
    // 0c58cf  inc edx
    X86_AT(c, 0xc58cfu);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
    // 0c58d0  inc edi
    X86_AT(c, 0xc58d0u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0c58d1  jmp 0xc58c2
    X86_AT(c, 0xc58d1u);
    X86_POLL(c, 0xc58c2u); goto L_c58c2;
L_c58d3:
    X86_TICK(c, 14);
    // 0c58d3  pop edi
    X86_AT(c, 0xc58d3u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0c58d4  ret 
    X86_AT(c, 0xc58d4u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xc58acu, "ran off the end of a function");
}
void f_000c58d8(X86Cpu& c) {
    X86_TICK(c, 12);
    // 0c58d8  cmp dword ptr [0xa4a9a], 0
    X86_AT(c, 0xc58d8u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xA4A9Au))), 0x0u, 0, 4);
    // 0c58df  jne 0xc58fe
    X86_AT(c, 0xc58dfu);
    if (x86_cc(c, 5)) { goto L_c58fe; }
    X86_TICK(c, 12);
    // 0c58e1  cmp dword ptr [0xa6134], 2
    X86_AT(c, 0xc58e1u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xA6134u))), 0x2u, 0, 4);
    // 0c58e8  je 0xc58fe
    X86_AT(c, 0xc58e8u);
    if (x86_cc(c, 4)) { goto L_c58fe; }
    X86_TICK(c, 2);
    // 0c58ea  sub eax, eax
    X86_AT(c, 0xc58eau);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
L_c58ec:
    X86_TICK(c, 7);
    // 0c58ec  cmp eax, 0xf200
    X86_AT(c, 0xc58ecu);
    (void)x86_sub(c, c.r[0], 0xF200u, 0, 4);
    // 0c58f2  jge 0xc58fe
    X86_AT(c, 0xc58f2u);
    if (x86_cc(c, 13)) { goto L_c58fe; }
    X86_TICK(c, 11);
    // 0c58f4  mov byte ptr [eax + 0x8d0a0], 0
    X86_AT(c, 0xc58f4u);
    wr8((c.sbase[3] + (uint32_t)(c.r[0] + 0x8D0A0u)), 0x0u);
    // 0c58fb  inc eax
    X86_AT(c, 0xc58fbu);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0c58fc  jmp 0xc58ec
    X86_AT(c, 0xc58fcu);
    X86_POLL(c, 0xc58ecu); goto L_c58ec;
L_c58fe:
    X86_TICK(c, 10);
    // 0c58fe  ret 
    X86_AT(c, 0xc58feu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xc58d8u, "ran off the end of a function");
}
void f_000c5900(X86Cpu& c) {
    X86_TICK(c, 11);
    // 0c5900  mov eax, dword ptr [0xa4a9a]
    X86_AT(c, 0xc5900u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xA4A9Au)));
    // 0c5905  and eax, eax
    X86_AT(c, 0xc5905u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0c5907  jle 0xc590f
    X86_AT(c, 0xc5907u);
    if (x86_cc(c, 14)) { goto L_c590f; }
    X86_TICK(c, 6);
    // 0c5909  dec dword ptr [0xa4a9a]
    X86_AT(c, 0xc5909u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xA4A9Au)); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
L_c590f:
    X86_TICK(c, 10);
    // 0c590f  ret 
    X86_AT(c, 0xc590fu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xc5900u, "ran off the end of a function");
}
void f_000c5910(X86Cpu& c) {
    X86_TICK(c, 9);
    // 0c5910  push 3
    X86_AT(c, 0xc5910u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0c5912  call 0xbb6b0
    X86_AT(c, 0xc5912u);
    push32(c, 0xc5917u); x86_call_known(c, 0xbb6b0u, f_000bb6b0); X86_RET(c, 0xc5917u);
    X86_TICK(c, 13);
    // 0c5917  push 0
    X86_AT(c, 0xc5917u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0c5919  push 0
    X86_AT(c, 0xc5919u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0c591b  push 3
    X86_AT(c, 0xc591bu);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0c591d  call 0xbc174
    X86_AT(c, 0xc591du);
    push32(c, 0xc5922u); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xc5922u);
    X86_TICK(c, 11);
    // 0c5922  push 0x4bf8
    X86_AT(c, 0xc5922u);
    { uint32_t v = 0x4BF8u; push32(c, v); }
    // 0c5927  push 3
    X86_AT(c, 0xc5927u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0c5929  call 0xba428
    X86_AT(c, 0xc5929u);
    push32(c, 0xc592eu); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xc592eu);
    X86_TICK(c, 13);
    // 0c592e  push 0
    X86_AT(c, 0xc592eu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0c5930  push 0xa
    X86_AT(c, 0xc5930u);
    { uint32_t v = 0xAu; push32(c, v); }
    // 0c5932  push 3
    X86_AT(c, 0xc5932u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0c5934  call 0xbc174
    X86_AT(c, 0xc5934u);
    push32(c, 0xc5939u); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xc5939u);
    X86_TICK(c, 17);
    // 0c5939  add esp, 0x24
    X86_AT(c, 0xc5939u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x24u, 0, 4); }
    // 0c593c  movsx edx, word ptr [0xa8a2c]
    X86_AT(c, 0xc593cu);
    c.r[2] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[3] + (uint32_t)(0xA8A2Cu)));
    // 0c5943  dec edx
    X86_AT(c, 0xc5943u);
    { uint32_t v = c.r[2]; c.r[2] = x86_dec(c, v, 4); }
    // 0c5944  cmp edx, 3
    X86_AT(c, 0xc5944u);
    (void)x86_sub(c, c.r[2], 0x3u, 0, 4);
    // 0c5947  ja 0xc5985
    X86_AT(c, 0xc5947u);
    if (x86_cc(c, 7)) { goto L_c5985; }
    X86_TICK(c, 7);
    // 0c5949  jmp dword ptr cs:[edx*4 + 0xc5951]
    X86_AT(c, 0xc5949u);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xC5951u)));
      switch (t) {
      case 0xc5961u: goto L_c5961;
      case 0xc5968u: goto L_c5968;
      case 0xc596fu: goto L_c596f;
      case 0xc5976u: goto L_c5976;
      default: x86_jump(c, t); return; } }
L_c5961:
    X86_TICK(c, 9);
    // 0c5961  push 0x4c14
    X86_AT(c, 0xc5961u);
    { uint32_t v = 0x4C14u; push32(c, v); }
    // 0c5966  jmp 0xc597b
    X86_AT(c, 0xc5966u);
    goto L_c597b;
L_c5968:
    X86_TICK(c, 9);
    // 0c5968  push 0x4c2c
    X86_AT(c, 0xc5968u);
    { uint32_t v = 0x4C2Cu; push32(c, v); }
    // 0c596d  jmp 0xc597b
    X86_AT(c, 0xc596du);
    goto L_c597b;
L_c596f:
    X86_TICK(c, 9);
    // 0c596f  push 0x4c44
    X86_AT(c, 0xc596fu);
    { uint32_t v = 0x4C44u; push32(c, v); }
    // 0c5974  jmp 0xc597b
    X86_AT(c, 0xc5974u);
    goto L_c597b;
L_c5976:
    X86_TICK(c, 2);
    // 0c5976  push 0x4c5c
    X86_AT(c, 0xc5976u);
    { uint32_t v = 0x4C5Cu; push32(c, v); }
L_c597b:
    X86_TICK(c, 9);
    // 0c597b  push 3
    X86_AT(c, 0xc597bu);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0c597d  call 0xba428
    X86_AT(c, 0xc597du);
    push32(c, 0xc5982u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xc5982u);
    X86_TICK(c, 2);
    // 0c5982  add esp, 8
    X86_AT(c, 0xc5982u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
L_c5985:
    X86_TICK(c, 9);
    // 0c5985  push 7
    X86_AT(c, 0xc5985u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c5987  call 0xbb6b0
    X86_AT(c, 0xc5987u);
    push32(c, 0xc598cu); x86_call_known(c, 0xbb6b0u, f_000bb6b0); X86_RET(c, 0xc598cu);
    X86_TICK(c, 12);
    // 0c598c  add esp, 4
    X86_AT(c, 0xc598cu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0c598f  ret 
    X86_AT(c, 0xc598fu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xc5910u, "ran off the end of a function");
}
void f_000c5990(X86Cpu& c) {
    X86_TICK(c, 9);
    // 0c5990  push 8
    X86_AT(c, 0xc5990u);
    { uint32_t v = 0x8u; push32(c, v); }
    // 0c5992  call 0xbb6b0
    X86_AT(c, 0xc5992u);
    push32(c, 0xc5997u); x86_call_known(c, 0xbb6b0u, f_000bb6b0); X86_RET(c, 0xc5997u);
    X86_TICK(c, 13);
    // 0c5997  push 0
    X86_AT(c, 0xc5997u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0c5999  push 0
    X86_AT(c, 0xc5999u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0c599b  push 8
    X86_AT(c, 0xc599bu);
    { uint32_t v = 0x8u; push32(c, v); }
    // 0c599d  call 0xbc174
    X86_AT(c, 0xc599du);
    push32(c, 0xc59a2u); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xc59a2u);
    X86_TICK(c, 11);
    // 0c59a2  push 0x4c74
    X86_AT(c, 0xc59a2u);
    { uint32_t v = 0x4C74u; push32(c, v); }
    // 0c59a7  push 8
    X86_AT(c, 0xc59a7u);
    { uint32_t v = 0x8u; push32(c, v); }
    // 0c59a9  call 0xbbba4
    X86_AT(c, 0xc59a9u);
    push32(c, 0xc59aeu); x86_call_known(c, 0xbbba4u, f_000bbba4); X86_RET(c, 0xc59aeu);
    X86_TICK(c, 16);
    // 0c59ae  push 1
    X86_AT(c, 0xc59aeu);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0c59b0  push dword ptr [0xa4a52]
    X86_AT(c, 0xc59b0u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xA4A52u))); push32(c, v); }
    // 0c59b6  push 8
    X86_AT(c, 0xc59b6u);
    { uint32_t v = 0x8u; push32(c, v); }
    // 0c59b8  call 0xba404
    X86_AT(c, 0xc59b8u);
    push32(c, 0xc59bdu); x86_call_known(c, 0xba404u, f_000ba404); X86_RET(c, 0xc59bdu);
    X86_TICK(c, 12);
    // 0c59bd  add esp, 0x24
    X86_AT(c, 0xc59bdu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x24u, 0, 4); }
    // 0c59c0  ret 
    X86_AT(c, 0xc59c0u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xc5990u, "ran off the end of a function");
}
void f_000c59c4(X86Cpu& c) {
    X86_TICK(c, 27);
    // 0c59c4  push ebp
    X86_AT(c, 0xc59c4u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0c59c5  mov ebp, esp
    X86_AT(c, 0xc59c5u);
    c.r[5] = c.r[4];
    // 0c59c7  sub esp, 8
    X86_AT(c, 0xc59c7u);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, 0x8u, 0, 4); }
    // 0c59ca  push ebx
    X86_AT(c, 0xc59cau);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0c59cb  mov eax, dword ptr [0xa4a6e]
    X86_AT(c, 0xc59cbu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xA4A6Eu)));
    // 0c59d0  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0xc59d0u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
    // 0c59d3  mov eax, dword ptr [0xa4a72]
    X86_AT(c, 0xc59d3u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xA4A72u)));
    // 0c59d8  mov dword ptr [ebp - 8], eax
    X86_AT(c, 0xc59d8u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), c.r[0]);
    // 0c59db  call 0xc58ac
    X86_AT(c, 0xc59dbu);
    push32(c, 0xc59e0u); x86_call_known(c, 0xc58acu, f_000c58ac); X86_RET(c, 0xc59e0u);
    X86_TICK(c, 25);
    // 0c59e0  lea ebx, [ebp - 8]
    X86_AT(c, 0xc59e0u);
    c.r[3] = (uint32_t)(c.r[5] + 0xFFFFFFF8u);
    // 0c59e3  push ebx
    X86_AT(c, 0xc59e3u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0c59e4  lea ebx, [ebp - 4]
    X86_AT(c, 0xc59e4u);
    c.r[3] = (uint32_t)(c.r[5] + 0xFFFFFFFCu);
    // 0c59e7  push ebx
    X86_AT(c, 0xc59e7u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0c59e8  movsx eax, word ptr [0xa8a2c]
    X86_AT(c, 0xc59e8u);
    c.r[0] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[3] + (uint32_t)(0xA8A2Cu)));
    // 0c59ef  push eax
    X86_AT(c, 0xc59efu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c59f0  push 0xa9234
    X86_AT(c, 0xc59f0u);
    { uint32_t v = 0xA9234u; push32(c, v); }
    // 0c59f5  call 0xc4f44
    X86_AT(c, 0xc59f5u);
    push32(c, 0xc59fau); x86_call_known(c, 0xc4f44u, f_000c4f44); X86_RET(c, 0xc59fau);
    X86_TICK(c, 7);
    // 0c59fa  call 0xc5910
    X86_AT(c, 0xc59fau);
    push32(c, 0xc59ffu); x86_call_known(c, 0xc5910u, f_000c5910); X86_RET(c, 0xc59ffu);
    X86_TICK(c, 7);
    // 0c59ff  call 0xc5990
    X86_AT(c, 0xc59ffu);
    push32(c, 0xc5a04u); x86_call_known(c, 0xc5990u, f_000c5990); X86_RET(c, 0xc5a04u);
    X86_TICK(c, 7);
    // 0c5a04  call 0xbdd7c
    X86_AT(c, 0xc5a04u);
    push32(c, 0xc5a09u); x86_call_known(c, 0xbdd7cu, f_000bdd7c); X86_RET(c, 0xc5a09u);
    X86_TICK(c, 22);
    // 0c5a09  add esp, 0x10
    X86_AT(c, 0xc5a09u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0c5a0c  pop ebx
    X86_AT(c, 0xc5a0cu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0c5a0d  leave 
    X86_AT(c, 0xc5a0du);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0c5a0e  ret 
    X86_AT(c, 0xc5a0eu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xc59c4u, "ran off the end of a function");
}
void f_000c5a10(X86Cpu& c) {
    X86_TICK(c, 9);
    // 0c5a10  push edi
    X86_AT(c, 0xc5a10u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c5a11  call 0xc9bcc
    X86_AT(c, 0xc5a11u);
    push32(c, 0xc5a16u); x86_call_known(c, 0xc9bccu, f_000c9bcc); X86_RET(c, 0xc5a16u);
    X86_TICK(c, 7);
    // 0c5a16  inc eax
    X86_AT(c, 0xc5a16u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0c5a17  jne 0xc5a27
    X86_AT(c, 0xc5a17u);
    if (x86_cc(c, 5)) { goto L_c5a27; }
    X86_TICK(c, 9);
    // 0c5a19  mov word ptr [0xa492c], 0
    X86_AT(c, 0xc5a19u);
    wr16((c.sbase[3] + (uint32_t)(0xA492Cu)), 0x0u);
    // 0c5a22  jmp 0xc5aa9
    X86_AT(c, 0xc5a22u);
    goto L_c5aa9;
L_c5a27:
    X86_TICK(c, 7);
    // 0c5a27  call 0xca6d0
    X86_AT(c, 0xc5a27u);
    push32(c, 0xc5a2cu); x86_call_known(c, 0xca6d0u, f_000ca6d0); X86_RET(c, 0xc5a2cu);
    X86_TICK(c, 7);
    // 0c5a2c  call 0xc5bec
    X86_AT(c, 0xc5a2cu);
    push32(c, 0xc5a31u); x86_call_known(c, 0xc5becu, f_000c5bec); X86_RET(c, 0xc5a31u);
    X86_TICK(c, 9);
    // 0c5a31  push eax
    X86_AT(c, 0xc5a31u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c5a32  call 0xc5194
    X86_AT(c, 0xc5a32u);
    push32(c, 0xc5a37u); x86_call_known(c, 0xc5194u, f_000c5194); X86_RET(c, 0xc5a37u);
    X86_TICK(c, 17);
    // 0c5a37  xchg edi, eax
    X86_AT(c, 0xc5a37u);
    { uint32_t t = c.r[7]; c.r[7] = c.r[0]; c.r[0] = t; }
    // 0c5a38  add esp, 4
    X86_AT(c, 0xc5a38u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0c5a3b  cmp word ptr [0xa8a18], 0
    X86_AT(c, 0xc5a3bu);
    (void)x86_sub(c, rd16((c.sbase[3] + (uint32_t)(0xA8A18u))), 0x0u, 0, 2);
    // 0c5a43  je 0xc5aa9
    X86_AT(c, 0xc5a43u);
    if (x86_cc(c, 4)) { goto L_c5aa9; }
    X86_TICK(c, 7);
    // 0c5a45  call 0xc5990
    X86_AT(c, 0xc5a45u);
    push32(c, 0xc5a4au); x86_call_known(c, 0xc5990u, f_000c5990); X86_RET(c, 0xc5a4au);
    X86_TICK(c, 7);
    // 0c5a4a  call 0xc5910
    X86_AT(c, 0xc5a4au);
    push32(c, 0xc5a4fu); x86_call_known(c, 0xc5910u, f_000c5910); X86_RET(c, 0xc5a4fu);
    X86_TICK(c, 7);
    // 0c5a4f  call 0xc5900
    X86_AT(c, 0xc5a4fu);
    push32(c, 0xc5a54u); x86_call_known(c, 0xc5900u, f_000c5900); X86_RET(c, 0xc5a54u);
    X86_TICK(c, 26);
    // 0c5a54  mov eax, dword ptr [0xa4a72]
    X86_AT(c, 0xc5a54u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xA4A72u)));
    // 0c5a59  shl eax, 4
    X86_AT(c, 0xc5a59u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[0] = r; }
    // 0c5a5c  add eax, dword ptr [0xa4a6e]
    X86_AT(c, 0xc5a5cu);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[3] + (uint32_t)(0xA4A6Eu))), 0, 4); }
    // 0c5a62  mov al, byte ptr [eax + 0xa9234]
    X86_AT(c, 0xc5a62u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[0] + 0xA9234u))));
    // 0c5a68  mov byte ptr [0xa8a30], al
    X86_AT(c, 0xc5a68u);
    wr8((c.sbase[3] + (uint32_t)(0xA8A30u)), g8(c, 0));
    // 0c5a6d  and edi, edi
    X86_AT(c, 0xc5a6du);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & c.r[7], 4); }
    // 0c5a6f  jne 0xc5a76
    X86_AT(c, 0xc5a6fu);
    if (x86_cc(c, 5)) { goto L_c5a76; }
    X86_TICK(c, 7);
    // 0c5a71  call 0xc6388
    X86_AT(c, 0xc5a71u);
    push32(c, 0xc5a76u); x86_call_known(c, 0xc6388u, f_000c6388); X86_RET(c, 0xc5a76u);
L_c5a76:
    X86_TICK(c, 12);
    // 0c5a76  cmp dword ptr [0xa4a9a], 0
    X86_AT(c, 0xc5a76u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xA4A9Au))), 0x0u, 0, 4);
    // 0c5a7d  jne 0xc5a95
    X86_AT(c, 0xc5a7du);
    if (x86_cc(c, 5)) { goto L_c5a95; }
    X86_TICK(c, 11);
    // 0c5a7f  push 0x4c7c
    X86_AT(c, 0xc5a7fu);
    { uint32_t v = 0x4C7Cu; push32(c, v); }
    // 0c5a84  push 7
    X86_AT(c, 0xc5a84u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c5a86  call 0xba428
    X86_AT(c, 0xc5a86u);
    push32(c, 0xc5a8bu); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xc5a8bu);
    X86_TICK(c, 9);
    // 0c5a8b  push 7
    X86_AT(c, 0xc5a8bu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c5a8d  call 0xbbb5c
    X86_AT(c, 0xc5a8du);
    push32(c, 0xc5a92u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xc5a92u);
    X86_TICK(c, 2);
    // 0c5a92  add esp, 0xc
    X86_AT(c, 0xc5a92u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
L_c5a95:
    X86_TICK(c, 7);
    // 0c5a95  call 0xbdd7c
    X86_AT(c, 0xc5a95u);
    push32(c, 0xc5a9au); x86_call_known(c, 0xbdd7cu, f_000bdd7c); X86_RET(c, 0xc5a9au);
    X86_TICK(c, 7);
    // 0c5a9a  call 0xc5b48
    X86_AT(c, 0xc5a9au);
    push32(c, 0xc5a9fu); x86_call_known(c, 0xc5b48u, f_000c5b48); X86_RET(c, 0xc5a9fu);
    X86_TICK(c, 12);
    // 0c5a9f  cmp word ptr [0xa492c], 0
    X86_AT(c, 0xc5a9fu);
    (void)x86_sub(c, rd16((c.sbase[3] + (uint32_t)(0xA492Cu))), 0x0u, 0, 2);
    // 0c5aa7  jne 0xc5ab0
    X86_AT(c, 0xc5aa7u);
    if (x86_cc(c, 5)) { goto L_c5ab0; }
L_c5aa9:
    X86_TICK(c, 9);
    // 0c5aa9  mov eax, 0xffffffff
    X86_AT(c, 0xc5aa9u);
    c.r[0] = 0xFFFFFFFFu;
    // 0c5aae  jmp 0xc5ab7
    X86_AT(c, 0xc5aaeu);
    goto L_c5ab7;
L_c5ab0:
    X86_TICK(c, 7);
    // 0c5ab0  call 0xbdd7c
    X86_AT(c, 0xc5ab0u);
    push32(c, 0xc5ab5u); x86_call_known(c, 0xbdd7cu, f_000bdd7c); X86_RET(c, 0xc5ab5u);
    X86_TICK(c, 2);
    // 0c5ab5  sub eax, eax
    X86_AT(c, 0xc5ab5u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
L_c5ab7:
    X86_TICK(c, 14);
    // 0c5ab7  pop edi
    X86_AT(c, 0xc5ab7u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0c5ab8  ret 
    X86_AT(c, 0xc5ab8u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xc5a10u, "ran off the end of a function");
}
void f_000c5abc(X86Cpu& c) {
    X86_TICK(c, 33);
    // 0c5abc  push ebp
    X86_AT(c, 0xc5abcu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0c5abd  mov ebp, esp
    X86_AT(c, 0xc5abdu);
    c.r[5] = c.r[4];
    // 0c5abf  push ebx
    X86_AT(c, 0xc5abfu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0c5ac0  mov eax, dword ptr [ebp + 0xc]
    X86_AT(c, 0xc5ac0u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0c5ac3  shl eax, 4
    X86_AT(c, 0xc5ac3u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[0] = r; }
    // 0c5ac6  add eax, dword ptr [ebp + 8]
    X86_AT(c, 0xc5ac6u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))), 0, 4); }
    // 0c5ac9  mov bl, byte ptr [eax + 0xa9234]
    X86_AT(c, 0xc5ac9u);
    s8(c, 3, rd8((c.sbase[3] + (uint32_t)(c.r[0] + 0xA9234u))));
    // 0c5acf  movzx edx, bl
    X86_AT(c, 0xc5acfu);
    c.r[2] = g8(c, 3);
    // 0c5ad2  cmp edx, 1
    X86_AT(c, 0xc5ad2u);
    (void)x86_sub(c, c.r[2], 0x1u, 0, 4);
    // 0c5ad5  je 0xc5b10
    X86_AT(c, 0xc5ad5u);
    if (x86_cc(c, 4)) { goto L_c5b10; }
    X86_TICK(c, 7);
    // 0c5ad7  cmp edx, 2
    X86_AT(c, 0xc5ad7u);
    (void)x86_sub(c, c.r[2], 0x2u, 0, 4);
    // 0c5ada  je 0xc5ae3
    X86_AT(c, 0xc5adau);
    if (x86_cc(c, 4)) { goto L_c5ae3; }
    X86_TICK(c, 7);
    // 0c5adc  cmp edx, 3
    X86_AT(c, 0xc5adcu);
    (void)x86_sub(c, c.r[2], 0x3u, 0, 4);
    // 0c5adf  je 0xc5af1
    X86_AT(c, 0xc5adfu);
    if (x86_cc(c, 4)) { goto L_c5af1; }
    X86_TICK(c, 7);
    // 0c5ae1  jmp 0xc5b34
    X86_AT(c, 0xc5ae1u);
    goto L_c5b34;
L_c5ae3:
    X86_TICK(c, 9);
    // 0c5ae3  push 0
    X86_AT(c, 0xc5ae3u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0c5ae5  call 0xb607c
    X86_AT(c, 0xc5ae5u);
    push32(c, 0xc5aeau); x86_call_known(c, 0xb607cu, f_000b607c); X86_RET(c, 0xc5aeau);
    X86_TICK(c, 9);
    // 0c5aea  push 0x4c9c
    X86_AT(c, 0xc5aeau);
    { uint32_t v = 0x4C9Cu; push32(c, v); }
    // 0c5aef  jmp 0xc5afd
    X86_AT(c, 0xc5aefu);
    goto L_c5afd;
L_c5af1:
    X86_TICK(c, 9);
    // 0c5af1  push 9
    X86_AT(c, 0xc5af1u);
    { uint32_t v = 0x9u; push32(c, v); }
    // 0c5af3  call 0xb607c
    X86_AT(c, 0xc5af3u);
    push32(c, 0xc5af8u); x86_call_known(c, 0xb607cu, f_000b607c); X86_RET(c, 0xc5af8u);
    X86_TICK(c, 2);
    // 0c5af8  push 0x4cdc
    X86_AT(c, 0xc5af8u);
    { uint32_t v = 0x4CDCu; push32(c, v); }
L_c5afd:
    X86_TICK(c, 9);
    // 0c5afd  push 7
    X86_AT(c, 0xc5afdu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c5aff  call 0xba428
    X86_AT(c, 0xc5affu);
    push32(c, 0xc5b04u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xc5b04u);
    X86_TICK(c, 9);
    // 0c5b04  push 7
    X86_AT(c, 0xc5b04u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c5b06  call 0xbbb5c
    X86_AT(c, 0xc5b06u);
    push32(c, 0xc5b0bu); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xc5b0bu);
    X86_TICK(c, 9);
    // 0c5b0b  add esp, 0x10
    X86_AT(c, 0xc5b0bu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0c5b0e  jmp 0xc5b34
    X86_AT(c, 0xc5b0eu);
    goto L_c5b34;
L_c5b10:
    X86_TICK(c, 9);
    // 0c5b10  push 9
    X86_AT(c, 0xc5b10u);
    { uint32_t v = 0x9u; push32(c, v); }
    // 0c5b12  call 0xb607c
    X86_AT(c, 0xc5b12u);
    push32(c, 0xc5b17u); x86_call_known(c, 0xb607cu, f_000b607c); X86_RET(c, 0xc5b17u);
    X86_TICK(c, 9);
    // 0c5b17  push 5
    X86_AT(c, 0xc5b17u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0c5b19  call 0xbebbc
    X86_AT(c, 0xc5b19u);
    push32(c, 0xc5b1eu); x86_call_known(c, 0xbebbcu, f_000bebbc); X86_RET(c, 0xc5b1eu);
    X86_TICK(c, 11);
    // 0c5b1e  push 0x4d34
    X86_AT(c, 0xc5b1eu);
    { uint32_t v = 0x4D34u; push32(c, v); }
    // 0c5b23  push 7
    X86_AT(c, 0xc5b23u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c5b25  call 0xba428
    X86_AT(c, 0xc5b25u);
    push32(c, 0xc5b2au); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xc5b2au);
    X86_TICK(c, 9);
    // 0c5b2a  push 7
    X86_AT(c, 0xc5b2au);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c5b2c  call 0xbbb5c
    X86_AT(c, 0xc5b2cu);
    push32(c, 0xc5b31u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xc5b31u);
    X86_TICK(c, 2);
    // 0c5b31  add esp, 0x14
    X86_AT(c, 0xc5b31u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x14u, 0, 4); }
L_c5b34:
    X86_TICK(c, 7);
    // 0c5b34  cmp bl, 2
    X86_AT(c, 0xc5b34u);
    (void)x86_sub(c, g8(c, 3), 0x2u, 0, 1);
    // 0c5b37  jne 0xc5b40
    X86_AT(c, 0xc5b37u);
    if (x86_cc(c, 5)) { goto L_c5b40; }
    X86_TICK(c, 9);
    // 0c5b39  mov eax, 0xffffffff
    X86_AT(c, 0xc5b39u);
    c.r[0] = 0xFFFFFFFFu;
    // 0c5b3e  jmp 0xc5b42
    X86_AT(c, 0xc5b3eu);
    goto L_c5b42;
L_c5b40:
    X86_TICK(c, 2);
    // 0c5b40  sub eax, eax
    X86_AT(c, 0xc5b40u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
L_c5b42:
    X86_TICK(c, 20);
    // 0c5b42  pop ebx
    X86_AT(c, 0xc5b42u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0c5b43  leave 
    X86_AT(c, 0xc5b43u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0c5b44  ret 
    X86_AT(c, 0xc5b44u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xc5abcu, "ran off the end of a function");
}
void f_000c5b48(X86Cpu& c) {
    X86_TICK(c, 18);
    // 0c5b48  push ebp
    X86_AT(c, 0xc5b48u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0c5b49  mov ebp, esp
    X86_AT(c, 0xc5b49u);
    c.r[5] = c.r[4];
    // 0c5b4b  sub esp, 8
    X86_AT(c, 0xc5b4bu);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, 0x8u, 0, 4); }
    // 0c5b4e  cmp byte ptr [0xa8a30], 0
    X86_AT(c, 0xc5b4eu);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0xA8A30u))), 0x0u, 0, 1);
    // 0c5b55  jne 0xc5be8
    X86_AT(c, 0xc5b55u);
    if (x86_cc(c, 5)) { goto L_c5be8; }
    X86_TICK(c, 18);
    // 0c5b5b  dec dword ptr [0xa98ac]
    X86_AT(c, 0xc5b5bu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xA98ACu)); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 0c5b61  cmp dword ptr [0xa98ac], 2
    X86_AT(c, 0xc5b61u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xA98ACu))), 0x2u, 0, 4);
    // 0c5b68  jge 0xc5b74
    X86_AT(c, 0xc5b68u);
    if (x86_cc(c, 13)) { goto L_c5b74; }
    X86_TICK(c, 2);
    // 0c5b6a  mov dword ptr [0xa98ac], 0x50
    X86_AT(c, 0xc5b6au);
    wr32((c.sbase[3] + (uint32_t)(0xA98ACu)), 0x50u);
L_c5b74:
    X86_TICK(c, 12);
    // 0c5b74  push dword ptr [0xa98ac]
    X86_AT(c, 0xc5b74u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xA98ACu))); push32(c, v); }
    // 0c5b7a  call 0xb61b4
    X86_AT(c, 0xc5b7au);
    push32(c, 0xc5b7fu); x86_call_known(c, 0xb61b4u, f_000b61b4); X86_RET(c, 0xc5b7fu);
    X86_TICK(c, 13);
    // 0c5b7f  add esp, 4
    X86_AT(c, 0xc5b7fu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0c5b82  cmp eax, dword ptr [0xa4a52]
    X86_AT(c, 0xc5b82u);
    (void)x86_sub(c, c.r[0], rd32((c.sbase[3] + (uint32_t)(0xA4A52u))), 0, 4);
    // 0c5b88  jge 0xc5be8
    X86_AT(c, 0xc5b88u);
    if (x86_cc(c, 13)) { goto L_c5be8; }
    X86_TICK(c, 13);
    // 0c5b8a  mov eax, dword ptr [0xa4a56]
    X86_AT(c, 0xc5b8au);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xA4A56u)));
    // 0c5b8f  mov dword ptr [0xa4a5a], eax
    X86_AT(c, 0xc5b8fu);
    wr32((c.sbase[3] + (uint32_t)(0xA4A5Au)), c.r[0]);
    // 0c5b94  call 0xb8d78
    X86_AT(c, 0xc5b94u);
    push32(c, 0xc5b99u); x86_call_known(c, 0xb8d78u, f_000b8d78); X86_RET(c, 0xc5b99u);
    X86_TICK(c, 15);
    // 0c5b99  mov eax, dword ptr [0xa4a52]
    X86_AT(c, 0xc5b99u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xA4A52u)));
    // 0c5b9e  dec eax
    X86_AT(c, 0xc5b9eu);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 0c5b9f  push eax
    X86_AT(c, 0xc5b9fu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c5ba0  call 0xb61b4
    X86_AT(c, 0xc5ba0u);
    push32(c, 0xc5ba5u); x86_call_known(c, 0xb61b4u, f_000b61b4); X86_RET(c, 0xc5ba5u);
    X86_TICK(c, 13);
    // 0c5ba5  mov al, byte ptr [eax + 0xa98a4]
    X86_AT(c, 0xc5ba5u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[0] + 0xA98A4u))));
    // 0c5bab  push eax
    X86_AT(c, 0xc5babu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c5bac  call 0xcda84
    X86_AT(c, 0xc5bacu);
    push32(c, 0xc5bb1u); x86_call_known(c, 0xcda84u, f_000cda84); X86_RET(c, 0xc5bb1u);
    X86_TICK(c, 37);
    // 0c5bb1  mov eax, dword ptr [0xa4a6e]
    X86_AT(c, 0xc5bb1u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xA4A6Eu)));
    // 0c5bb6  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0xc5bb6u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
    // 0c5bb9  mov eax, dword ptr [0xa4a72]
    X86_AT(c, 0xc5bb9u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xA4A72u)));
    // 0c5bbe  mov dword ptr [ebp - 8], eax
    X86_AT(c, 0xc5bbeu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), c.r[0]);
    // 0c5bc1  lea eax, [ebp - 8]
    X86_AT(c, 0xc5bc1u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFF8u);
    // 0c5bc4  push eax
    X86_AT(c, 0xc5bc4u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c5bc5  lea eax, [ebp - 4]
    X86_AT(c, 0xc5bc5u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFFCu);
    // 0c5bc8  push eax
    X86_AT(c, 0xc5bc8u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c5bc9  movsx eax, word ptr [0xa8a2c]
    X86_AT(c, 0xc5bc9u);
    c.r[0] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[3] + (uint32_t)(0xA8A2Cu)));
    // 0c5bd0  push eax
    X86_AT(c, 0xc5bd0u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c5bd1  push 0xa9234
    X86_AT(c, 0xc5bd1u);
    { uint32_t v = 0xA9234u; push32(c, v); }
    // 0c5bd6  call 0xc4f44
    X86_AT(c, 0xc5bd6u);
    push32(c, 0xc5bdbu); x86_call_known(c, 0xc4f44u, f_000c4f44); X86_RET(c, 0xc5bdbu);
    X86_TICK(c, 4);
    // 0c5bdb  mov dword ptr [0xa98ac], 0x50
    X86_AT(c, 0xc5bdbu);
    wr32((c.sbase[3] + (uint32_t)(0xA98ACu)), 0x50u);
    // 0c5be5  add esp, 0x18
    X86_AT(c, 0xc5be5u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x18u, 0, 4); }
L_c5be8:
    X86_TICK(c, 16);
    // 0c5be8  leave 
    X86_AT(c, 0xc5be8u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0c5be9  ret 
    X86_AT(c, 0xc5be9u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xc5b48u, "ran off the end of a function");
}
}

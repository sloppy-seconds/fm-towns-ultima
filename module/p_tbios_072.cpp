#include "p_tbios_funcs.h"
namespace p_tbios {
void f_000044a0(X86Cpu& c) {
    X86_TICK(c, 12);
    // 0044a0  cmp word ptr gs:[ebp + 0x1f2], 3
    X86_AT(c, 0x44a0u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1F2u))), 0x3u, 0, 2);
    // 0044a9  jb 0x44e1
    X86_AT(c, 0x44a9u);
    if (x86_cc(c, 2)) { goto L_44e1; }
    X86_TICK(c, 17);
    // 0044ab  mov dword ptr gs:[ebp + 0x1fc], esp
    X86_AT(c, 0x44abu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1FCu)), c.r[4]);
    // 0044b2  sub esp, 0x730
    X86_AT(c, 0x44b2u);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, 0x730u, 0, 4); }
    // 0044b8  mov dword ptr gs:[ebp + 0x1f8], esp
    X86_AT(c, 0x44b8u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1F8u)), c.r[4]);
    // 0044bf  sub esp, 0xa28
    X86_AT(c, 0x44bfu);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, 0xA28u, 0, 4); }
    // 0044c5  mov dword ptr gs:[ebp + 0x1f4], esp
    X86_AT(c, 0x44c5u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1F4u)), c.r[4]);
    // 0044cc  call 0x44e4
    X86_AT(c, 0x44ccu);
    push32(c, 0x44d1u); f_000044e4(c); X86_RET(c, 0x44d1u);
    X86_TICK(c, 7);
    // 0044d1  call 0x4644
    X86_AT(c, 0x44d1u);
    push32(c, 0x44d6u); f_00004644(c); X86_RET(c, 0x44d6u);
    X86_TICK(c, 7);
    // 0044d6  call 0x4700
    X86_AT(c, 0x44d6u);
    push32(c, 0x44dbu); f_00004700(c); X86_RET(c, 0x44dbu);
    X86_TICK(c, 2);
    // 0044db  add esp, 0x1158
    X86_AT(c, 0x44dbu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x1158u, 0, 4); }
L_44e1:
    X86_TICK(c, 10);
    // 0044e1  ret 
    X86_AT(c, 0x44e1u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x44a0u, "ran off the end of a function");
}
void f_000044e4(X86Cpu& c) {
    X86_TICK(c, 40);
    // 0044e4  lds esi, fword ptr gs:[ebp + 0x1ec]
    X86_AT(c, 0x44e4u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1ECu)); uint32_t o = rd32(ea); uint32_t s = rd16(ea + 4); x86_load_seg(c, 3, s); c.r[6] = o; }
    // 0044eb  mov edi, dword ptr gs:[ebp + 0x1f4]
    X86_AT(c, 0x44ebu);
    c.r[7] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1F4u)));
    // 0044f2  lodsd eax, dword ptr [esi]
    X86_AT(c, 0x44f2u);
    x86_string(c, 3, 4, 0, 4, 3);
    // 0044f3  add ax, ax
    X86_AT(c, 0x44f3u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 0044f6  mov word ptr gs:[ebp + 0x204], ax
    X86_AT(c, 0x44f6u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x204u)), (c.r[0] & 0xFFFFu));
    // 0044fe  mov word ptr gs:[ebp + 0x20c], ax
    X86_AT(c, 0x44feu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x20Cu)), (c.r[0] & 0xFFFFu));
    // 004506  shr eax, 0x10
    X86_AT(c, 0x4506u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 004509  add ax, ax
    X86_AT(c, 0x4509u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 00450c  inc ax
    X86_AT(c, 0x450cu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_inc(c, v, 2)); }
    // 00450e  mov word ptr gs:[ebp + 0x206], ax
    X86_AT(c, 0x450eu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x206u)), (c.r[0] & 0xFFFFu));
    // 004516  mov word ptr gs:[ebp + 0x20e], ax
    X86_AT(c, 0x4516u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x20Eu)), (c.r[0] & 0xFFFFu));
    // 00451e  mov word ptr gs:[ebp + 0x212], ax
    X86_AT(c, 0x451eu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x212u)), (c.r[0] & 0xFFFFu));
    // 004526  mov cx, word ptr gs:[ebp + 0x1f2]
    X86_AT(c, 0x4526u);
    s16(c, 1, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1F2u))));
L_452e:
    X86_TICK(c, 13);
    // 00452e  mov eax, dword ptr gs:[ebp + 0x20c]
    X86_AT(c, 0x452eu);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x20Cu)));
    // 004535  mov dword ptr gs:[ebp + 0x208], eax
    X86_AT(c, 0x4535u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x208u)), c.r[0]);
    // 00453c  cmp cx, 1
    X86_AT(c, 0x453cu);
    (void)x86_sub(c, (c.r[1] & 0xFFFFu), 0x1u, 0, 2);
    // 004540  je 0x45f4
    X86_AT(c, 0x4540u);
    if (x86_cc(c, 4)) { goto L_45f4; }
    X86_TICK(c, 32);
    // 004546  lodsd eax, dword ptr [esi]
    X86_AT(c, 0x4546u);
    x86_string(c, 3, 4, 0, 4, 3);
    // 004547  add ax, ax
    X86_AT(c, 0x4547u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 00454a  mov word ptr gs:[ebp + 0x20c], ax
    X86_AT(c, 0x454au);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x20Cu)), (c.r[0] & 0xFFFFu));
    // 004552  shr eax, 0x10
    X86_AT(c, 0x4552u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 004555  add ax, ax
    X86_AT(c, 0x4555u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 004558  inc ax
    X86_AT(c, 0x4558u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_inc(c, v, 2)); }
    // 00455a  mov word ptr gs:[ebp + 0x20e], ax
    X86_AT(c, 0x455au);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x20Eu)), (c.r[0] & 0xFFFFu));
    // 004562  cmp word ptr gs:[ebp + 0x212], ax
    X86_AT(c, 0x4562u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x212u))), (c.r[0] & 0xFFFFu), 0, 2);
    // 00456a  jg 0x4574
    X86_AT(c, 0x456au);
    if (x86_cc(c, 15)) { goto L_4574; }
    X86_TICK(c, 2);
    // 00456c  mov word ptr gs:[ebp + 0x212], ax
    X86_AT(c, 0x456cu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x212u)), (c.r[0] & 0xFFFFu));
L_4574:
    X86_TICK(c, 28);
    // 004574  mov edx, dword ptr gs:[ebp + 0x20c]
    X86_AT(c, 0x4574u);
    c.r[2] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x20Cu)));
    // 00457b  sub dx, word ptr gs:[ebp + 0x208]
    X86_AT(c, 0x457bu);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_sub(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x208u))), 0, 2)); }
    // 004583  shld ebx, edx, 0x10
    X86_AT(c, 0x4583u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_double(c, true, v, c.r[2], 0x10u, 4, w); if (w) c.r[3] = r; }
    // 004587  sub bx, word ptr gs:[ebp + 0x20a]
    X86_AT(c, 0x4587u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_sub(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x20Au))), 0, 2)); }
    // 00458f  mov ax, bx
    X86_AT(c, 0x458fu);
    s16(c, 0, (c.r[3] & 0xFFFFu));
    // 004592  or ax, dx
    X86_AT(c, 0x4592u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_logic(c, v | (c.r[2] & 0xFFFFu), 2)); }
    // 004595  je 0x45d4
    X86_AT(c, 0x4595u);
    if (x86_cc(c, 4)) { goto L_45d4; }
    X86_TICK(c, 7);
    // 004597  test bh, bh
    X86_AT(c, 0x4597u);
    (void)x86_logic(c, g8(c, 7) & g8(c, 7), 1);
    // 004599  jl 0x4608
    X86_AT(c, 0x4599u);
    if (x86_cc(c, 12)) { goto L_4608; }
L_459b:
    X86_TICK(c, 30);
    // 00459b  mov eax, dword ptr gs:[ebp + 0x208]
    X86_AT(c, 0x459bu);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x208u)));
    // 0045a2  mov word ptr ss:[edi + 4], ax
    X86_AT(c, 0x45a2u);
    wr16((c.sbase[2] + (uint32_t)(c.r[7] + 0x4u)), (c.r[0] & 0xFFFFu));
    // 0045a7  shr eax, 0x10
    X86_AT(c, 0x45a7u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 0045aa  mov word ptr ss:[edi], ax
    X86_AT(c, 0x45aau);
    wr16((c.sbase[2] + (uint32_t)(c.r[7])), (c.r[0] & 0xFFFFu));
    // 0045ae  mov ax, word ptr gs:[ebp + 0x20e]
    X86_AT(c, 0x45aeu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x20Eu))));
    // 0045b6  mov word ptr ss:[edi + 2], ax
    X86_AT(c, 0x45b6u);
    wr16((c.sbase[2] + (uint32_t)(c.r[7] + 0x2u)), (c.r[0] & 0xFFFFu));
    // 0045bb  mov word ptr ss:[edi + 6], dx
    X86_AT(c, 0x45bbu);
    wr16((c.sbase[2] + (uint32_t)(c.r[7] + 0x6u)), (c.r[2] & 0xFFFFu));
    // 0045c0  mov word ptr ss:[edi + 8], bx
    X86_AT(c, 0x45c0u);
    wr16((c.sbase[2] + (uint32_t)(c.r[7] + 0x8u)), (c.r[3] & 0xFFFFu));
    // 0045c5  add edi, 0xa
    X86_AT(c, 0x45c5u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0xAu, 0, 4); }
    // 0045c8  dec cx
    X86_AT(c, 0x45c8u);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_dec(c, v, 2)); }
    // 0045ca  jne 0x452e
    X86_AT(c, 0x45cau);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x452eu); goto L_452e; }
    X86_TICK(c, 10);
    // 0045d0  ret 
    X86_AT(c, 0x45d0u);
    c.eip = pop32(c); return;
L_45d4:
    X86_TICK(c, 11);
    // 0045d4  dec word ptr gs:[ebp + 0x1f2]
    X86_AT(c, 0x45d4u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1F2u)); uint32_t v = rd16(ea); wr16(ea, x86_dec(c, v, 2)); }
    // 0045dc  je 0x45e7
    X86_AT(c, 0x45dcu);
    if (x86_cc(c, 4)) { goto L_45e7; }
    X86_TICK(c, 7);
    // 0045de  dec cx
    X86_AT(c, 0x45deu);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_dec(c, v, 2)); }
    // 0045e0  jne 0x452e
    X86_AT(c, 0x45e0u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x452eu); goto L_452e; }
    X86_TICK(c, 10);
    // 0045e6  ret 
    X86_AT(c, 0x45e6u);
    c.eip = pop32(c); return;
L_45e7:
    X86_TICK(c, 9);
    // 0045e7  mov word ptr gs:[ebp + 0x1f2], 1
    X86_AT(c, 0x45e7u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1F2u)), 0x1u);
    // 0045f1  jmp 0x459b
    X86_AT(c, 0x45f1u);
    X86_POLL(c, 0x459bu); goto L_459b;
L_45f4:
    X86_TICK(c, 13);
    // 0045f4  mov eax, dword ptr gs:[ebp + 0x204]
    X86_AT(c, 0x45f4u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x204u)));
    // 0045fb  mov dword ptr gs:[ebp + 0x20c], eax
    X86_AT(c, 0x45fbu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x20Cu)), c.r[0]);
    // 004602  jmp 0x4574
    X86_AT(c, 0x4602u);
    X86_POLL(c, 0x4574u); goto L_4574;
L_4608:
    X86_TICK(c, 34);
    // 004608  mov eax, dword ptr gs:[ebp + 0x20c]
    X86_AT(c, 0x4608u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x20Cu)));
    // 00460f  mov word ptr ss:[edi + 4], ax
    X86_AT(c, 0x460fu);
    wr16((c.sbase[2] + (uint32_t)(c.r[7] + 0x4u)), (c.r[0] & 0xFFFFu));
    // 004614  shr eax, 0x10
    X86_AT(c, 0x4614u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 004617  mov word ptr ss:[edi], ax
    X86_AT(c, 0x4617u);
    wr16((c.sbase[2] + (uint32_t)(c.r[7])), (c.r[0] & 0xFFFFu));
    // 00461b  mov ax, word ptr gs:[ebp + 0x20a]
    X86_AT(c, 0x461bu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x20Au))));
    // 004623  mov word ptr ss:[edi + 2], ax
    X86_AT(c, 0x4623u);
    wr16((c.sbase[2] + (uint32_t)(c.r[7] + 0x2u)), (c.r[0] & 0xFFFFu));
    // 004628  neg dx
    X86_AT(c, 0x4628u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_neg(c, v, 2)); }
    // 00462b  mov word ptr ss:[edi + 6], dx
    X86_AT(c, 0x462bu);
    wr16((c.sbase[2] + (uint32_t)(c.r[7] + 0x6u)), (c.r[2] & 0xFFFFu));
    // 004630  neg bx
    X86_AT(c, 0x4630u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_neg(c, v, 2)); }
    // 004633  mov word ptr ss:[edi + 8], bx
    X86_AT(c, 0x4633u);
    wr16((c.sbase[2] + (uint32_t)(c.r[7] + 0x8u)), (c.r[3] & 0xFFFFu));
    // 004638  add edi, 0xa
    X86_AT(c, 0x4638u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0xAu, 0, 4); }
    // 00463b  dec cx
    X86_AT(c, 0x463bu);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_dec(c, v, 2)); }
    // 00463d  jne 0x452e
    X86_AT(c, 0x463du);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x452eu); goto L_452e; }
    X86_TICK(c, 10);
    // 004643  ret 
    X86_AT(c, 0x4643u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x44e4u, "ran off the end of a function");
}
void f_00004644(X86Cpu& c) {
    X86_TICK(c, 31);
    // 004644  movzx ebx, word ptr gs:[ebp + 0x1f2]
    X86_AT(c, 0x4644u);
    c.r[3] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1F2u)));
    // 00464c  dec ebx
    X86_AT(c, 0x464cu);
    { uint32_t v = c.r[3]; c.r[3] = x86_dec(c, v, 4); }
    // 00464d  lea ebx, [ebx + ebx*4]
    X86_AT(c, 0x464du);
    c.r[3] = (uint32_t)(c.r[3] + c.r[3] * 4);
    // 004650  mov edx, dword ptr gs:[ebp + 0x1f4]
    X86_AT(c, 0x4650u);
    c.r[2] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1F4u)));
    // 004657  lea ebx, [edx + ebx*2]
    X86_AT(c, 0x4657u);
    c.r[3] = (uint32_t)(c.r[2] + c.r[3] * 2);
    // 00465a  mov eax, edx
    X86_AT(c, 0x465au);
    c.r[0] = c.r[2];
    // 00465c  push ebp
    X86_AT(c, 0x465cu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 00465d  mov ebp, dword ptr gs:[ebp + 0x1fc]
    X86_AT(c, 0x465du);
    c.r[5] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1FCu)));
    // 004664  call 0x466c
    X86_AT(c, 0x4664u);
    push32(c, 0x4669u); f_0000466c(c); X86_RET(c, 0x4669u);
    X86_TICK(c, 14);
    // 004669  pop ebp
    X86_AT(c, 0x4669u);
    { uint32_t v = pop32(c); c.r[5] = v; }
    // 00466a  ret 
    X86_AT(c, 0x466au);
    c.eip = pop32(c); return;
    x86_fault(c, 0x4644u, "ran off the end of a function");
}
void f_0000466c(X86Cpu& c) {
    X86_TICK(c, 22);
    // 00466c  sub ebp, 8
    X86_AT(c, 0x466cu);
    { uint32_t v = c.r[5]; c.r[5] = x86_sub(c, v, 0x8u, 0, 4); }
    // 00466f  mov esi, eax
    X86_AT(c, 0x466fu);
    c.r[6] = c.r[0];
    // 004671  mov edi, ebx
    X86_AT(c, 0x4671u);
    c.r[7] = c.r[3];
    // 004673  sub eax, edx
    X86_AT(c, 0x4673u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[2], 0, 4); }
    // 004675  sub ebx, edx
    X86_AT(c, 0x4675u);
    { uint32_t v = c.r[3]; c.r[3] = x86_sub(c, v, c.r[2], 0, 4); }
    // 004677  add ebx, eax
    X86_AT(c, 0x4677u);
    { uint32_t v = c.r[3]; c.r[3] = x86_add(c, v, c.r[0], 0, 4); }
    // 004679  shr ebx, 1
    X86_AT(c, 0x4679u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 4, w); if (w) c.r[3] = r; }
    // 00467b  test bl, 1
    X86_AT(c, 0x467bu);
    (void)x86_logic(c, g8(c, 3) & 0x1u, 1);
    // 00467e  je 0x4683
    X86_AT(c, 0x467eu);
    if (x86_cc(c, 4)) { goto L_4683; }
    X86_TICK(c, 2);
    // 004680  sub ebx, 5
    X86_AT(c, 0x4680u);
    { uint32_t v = c.r[3]; c.r[3] = x86_sub(c, v, 0x5u, 0, 4); }
L_4683:
    X86_TICK(c, 12);
    // 004683  add ebx, edx
    X86_AT(c, 0x4683u);
    { uint32_t v = c.r[3]; c.r[3] = x86_add(c, v, c.r[2], 0, 4); }
    // 004685  push edx
    X86_AT(c, 0x4685u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 004686  mov dx, word ptr ss:[ebx]
    X86_AT(c, 0x4686u);
    s16(c, 2, rd16((c.sbase[2] + (uint32_t)(c.r[3]))));
    // 00468a  mov ebx, edi
    X86_AT(c, 0x468au);
    c.r[3] = c.r[7];
    // 00468c  mov ecx, esi
    X86_AT(c, 0x468cu);
    c.r[1] = c.r[6];
L_468e:
    X86_TICK(c, 12);
    // 00468e  cmp word ptr ss:[esi], dx
    X86_AT(c, 0x468eu);
    (void)x86_sub(c, rd16((c.sbase[2] + (uint32_t)(c.r[6]))), (c.r[2] & 0xFFFFu), 0, 2);
    // 004692  jge 0x4699
    X86_AT(c, 0x4692u);
    if (x86_cc(c, 13)) { goto L_4699; }
    X86_TICK(c, 9);
    // 004694  add esi, 0xa
    X86_AT(c, 0x4694u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0xAu, 0, 4); }
    // 004697  jmp 0x468e
    X86_AT(c, 0x4697u);
    X86_POLL(c, 0x468eu); goto L_468e;
L_4699:
    X86_TICK(c, 12);
    // 004699  cmp word ptr ss:[edi], dx
    X86_AT(c, 0x4699u);
    (void)x86_sub(c, rd16((c.sbase[2] + (uint32_t)(c.r[7]))), (c.r[2] & 0xFFFFu), 0, 2);
    // 00469d  jle 0x46a4
    X86_AT(c, 0x469du);
    if (x86_cc(c, 14)) { goto L_46a4; }
    X86_TICK(c, 9);
    // 00469f  sub edi, 0xa
    X86_AT(c, 0x469fu);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, 0xAu, 0, 4); }
    // 0046a2  jmp 0x4699
    X86_AT(c, 0x46a2u);
    X86_POLL(c, 0x4699u); goto L_4699;
L_46a4:
    X86_TICK(c, 7);
    // 0046a4  cmp esi, edi
    X86_AT(c, 0x46a4u);
    (void)x86_sub(c, c.r[6], c.r[7], 0, 4);
    // 0046a6  jg 0x46d2
    X86_AT(c, 0x46a6u);
    if (x86_cc(c, 15)) { goto L_46d2; }
    X86_TICK(c, 37);
    // 0046a8  mov eax, dword ptr ss:[edi]
    X86_AT(c, 0x46a8u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[7])));
    // 0046ab  xchg dword ptr ss:[esi], eax
    X86_AT(c, 0x46abu);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[6])); uint32_t t = rd32(ea); wr32(ea, c.r[0]); c.r[0] = t; }
    // 0046ae  mov dword ptr ss:[edi], eax
    X86_AT(c, 0x46aeu);
    wr32((c.sbase[2] + (uint32_t)(c.r[7])), c.r[0]);
    // 0046b1  mov eax, dword ptr ss:[edi + 4]
    X86_AT(c, 0x46b1u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[7] + 0x4u)));
    // 0046b5  xchg dword ptr ss:[esi + 4], eax
    X86_AT(c, 0x46b5u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[6] + 0x4u)); uint32_t t = rd32(ea); wr32(ea, c.r[0]); c.r[0] = t; }
    // 0046b9  mov dword ptr ss:[edi + 4], eax
    X86_AT(c, 0x46b9u);
    wr32((c.sbase[2] + (uint32_t)(c.r[7] + 0x4u)), c.r[0]);
    // 0046bd  mov ax, word ptr ss:[edi + 8]
    X86_AT(c, 0x46bdu);
    s16(c, 0, rd16((c.sbase[2] + (uint32_t)(c.r[7] + 0x8u))));
    // 0046c2  xchg word ptr ss:[esi + 8], ax
    X86_AT(c, 0x46c2u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[6] + 0x8u)); uint32_t t = rd16(ea); wr16(ea, (c.r[0] & 0xFFFFu)); s16(c, 0, t); }
    // 0046c7  mov word ptr ss:[edi + 8], ax
    X86_AT(c, 0x46c7u);
    wr16((c.sbase[2] + (uint32_t)(c.r[7] + 0x8u)), (c.r[0] & 0xFFFFu));
    // 0046cc  add esi, 0xa
    X86_AT(c, 0x46ccu);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0xAu, 0, 4); }
    // 0046cf  sub edi, 0xa
    X86_AT(c, 0x46cfu);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, 0xAu, 0, 4); }
L_46d2:
    X86_TICK(c, 7);
    // 0046d2  cmp esi, edi
    X86_AT(c, 0x46d2u);
    (void)x86_sub(c, c.r[6], c.r[7], 0, 4);
    // 0046d4  jle 0x468e
    X86_AT(c, 0x46d4u);
    if (x86_cc(c, 14)) { X86_POLL(c, 0x468eu); goto L_468e; }
    X86_TICK(c, 15);
    // 0046d6  pop edx
    X86_AT(c, 0x46d6u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 0046d7  mov dword ptr [ebp], esi
    X86_AT(c, 0x46d7u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5])), c.r[6]);
    // 0046da  mov dword ptr [ebp + 4], ebx
    X86_AT(c, 0x46dau);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0x4u)), c.r[3]);
    // 0046dd  cmp ecx, edi
    X86_AT(c, 0x46ddu);
    (void)x86_sub(c, c.r[1], c.r[7], 0, 4);
    // 0046df  jge 0x46ea
    X86_AT(c, 0x46dfu);
    if (x86_cc(c, 13)) { goto L_46ea; }
    X86_TICK(c, 11);
    // 0046e1  mov eax, ecx
    X86_AT(c, 0x46e1u);
    c.r[0] = c.r[1];
    // 0046e3  mov ebx, edi
    X86_AT(c, 0x46e3u);
    c.r[3] = c.r[7];
    // 0046e5  call 0x466c
    X86_AT(c, 0x46e5u);
    push32(c, 0x46eau); f_0000466c(c); X86_RET(c, 0x46eau);
L_46ea:
    X86_TICK(c, 15);
    // 0046ea  mov eax, dword ptr [ebp]
    X86_AT(c, 0x46eau);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5])));
    // 0046ed  mov ebx, dword ptr [ebp + 4]
    X86_AT(c, 0x46edu);
    c.r[3] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x4u)));
    // 0046f0  cmp eax, ebx
    X86_AT(c, 0x46f0u);
    (void)x86_sub(c, c.r[0], c.r[3], 0, 4);
    // 0046f2  jge 0x46f9
    X86_AT(c, 0x46f2u);
    if (x86_cc(c, 13)) { goto L_46f9; }
    X86_TICK(c, 7);
    // 0046f4  call 0x466c
    X86_AT(c, 0x46f4u);
    push32(c, 0x46f9u); f_0000466c(c); X86_RET(c, 0x46f9u);
L_46f9:
    X86_TICK(c, 12);
    // 0046f9  add ebp, 8
    X86_AT(c, 0x46f9u);
    { uint32_t v = c.r[5]; c.r[5] = x86_add(c, v, 0x8u, 0, 4); }
    // 0046fc  ret 
    X86_AT(c, 0x46fcu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x466cu, "ran off the end of a function");
}
void f_00004700(X86Cpu& c) {
    X86_TICK(c, 33);
    // 004700  movzx eax, byte ptr gs:[ebp + 0x220]
    X86_AT(c, 0x4700u);
    c.r[0] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x220u)));
    // 004708  mov eax, dword ptr cs:[eax*4 + 0x7fec]
    X86_AT(c, 0x4708u);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0x7FECu)));
    // 004710  mov dword ptr gs:[ebp + 0x324], eax
    X86_AT(c, 0x4710u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x324u)), c.r[0]);
    // 004717  mov esi, dword ptr gs:[ebp + 0x1f4]
    X86_AT(c, 0x4717u);
    c.r[6] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1F4u)));
    // 00471e  xor dl, dl
    X86_AT(c, 0x471eu);
    { uint32_t v = g8(c, 2); s8(c, 2, x86_logic(c, v ^ g8(c, 2), 1)); }
    // 004720  mov al, byte ptr gs:[ebp + 0x220]
    X86_AT(c, 0x4720u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x220u))));
    // 004727  and al, 0xf
    X86_AT(c, 0x4727u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & 0xFu, 1)); }
    // 004729  sub al, 0xd
    X86_AT(c, 0x4729u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_sub(c, v, 0xDu, 0, 1)); }
    // 00472b  cmp al, 2
    X86_AT(c, 0x472bu);
    (void)x86_sub(c, g8(c, 0), 0x2u, 0, 1);
    // 00472d  jb 0x4744
    X86_AT(c, 0x472du);
    if (x86_cc(c, 2)) { goto L_4744; }
    X86_TICK(c, 21);
    // 00472f  mov bx, word ptr gs:[ebp + 0x2a]
    X86_AT(c, 0x472fu);
    s16(c, 3, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Au))));
    // 004734  add bx, bx
    X86_AT(c, 0x4734u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
    // 004737  dec bx
    X86_AT(c, 0x4737u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_dec(c, v, 2)); }
    // 004739  mov cx, word ptr gs:[ebp + 0x2e]
    X86_AT(c, 0x4739u);
    s16(c, 1, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Eu))));
    // 00473e  add cx, cx
    X86_AT(c, 0x473eu);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_add(c, v, (c.r[1] & 0xFFFFu), 0, 2)); }
    // 004741  jmp 0x474c
    X86_AT(c, 0x4741u);
    goto L_474c;
L_4744:
    X86_TICK(c, 4);
    // 004744  mov bx, 0x8000
    X86_AT(c, 0x4744u);
    s16(c, 3, 0x8000u);
    // 004748  mov cx, 0x7fff
    X86_AT(c, 0x4748u);
    s16(c, 1, 0x7FFFu);
L_474c:
    X86_TICK(c, 11);
    // 00474c  mov ax, word ptr ss:[esi]
    X86_AT(c, 0x474cu);
    s16(c, 0, rd16((c.sbase[2] + (uint32_t)(c.r[6]))));
    // 004750  cmp ax, bx
    X86_AT(c, 0x4750u);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), (c.r[3] & 0xFFFFu), 0, 2);
    // 004753  jge 0x475a
    X86_AT(c, 0x4753u);
    if (x86_cc(c, 13)) { goto L_475a; }
    X86_TICK(c, 4);
    // 004755  mov dl, 1
    X86_AT(c, 0x4755u);
    s8(c, 2, 0x1u);
    // 004757  mov ax, bx
    X86_AT(c, 0x4757u);
    s16(c, 0, (c.r[3] & 0xFFFFu));
L_475a:
    X86_TICK(c, 7);
    // 00475a  cmp ax, cx
    X86_AT(c, 0x475au);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), (c.r[1] & 0xFFFFu), 0, 2);
    // 00475d  jg 0x479a
    X86_AT(c, 0x475du);
    if (x86_cc(c, 15)) { goto L_479a; }
    X86_TICK(c, 13);
    // 00475f  mov word ptr gs:[ebp + 0x210], ax
    X86_AT(c, 0x475fu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x210u)), (c.r[0] & 0xFFFFu));
    // 004767  mov ax, word ptr gs:[ebp + 0x212]
    X86_AT(c, 0x4767u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x212u))));
    // 00476f  cmp ax, cx
    X86_AT(c, 0x476fu);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), (c.r[1] & 0xFFFFu), 0, 2);
    // 004772  jle 0x4777
    X86_AT(c, 0x4772u);
    if (x86_cc(c, 14)) { goto L_4777; }
    X86_TICK(c, 2);
    // 004774  mov ax, cx
    X86_AT(c, 0x4774u);
    s16(c, 0, (c.r[1] & 0xFFFFu));
L_4777:
    X86_TICK(c, 7);
    // 004777  cmp ax, bx
    X86_AT(c, 0x4777u);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), (c.r[3] & 0xFFFFu), 0, 2);
    // 00477a  jl 0x479a
    X86_AT(c, 0x477au);
    if (x86_cc(c, 12)) { goto L_479a; }
    X86_TICK(c, 9);
    // 00477c  mov word ptr gs:[ebp + 0x212], ax
    X86_AT(c, 0x477cu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x212u)), (c.r[0] & 0xFFFFu));
    // 004784  and dl, dl
    X86_AT(c, 0x4784u);
    { uint32_t v = g8(c, 2); s8(c, 2, x86_logic(c, v & g8(c, 2), 1)); }
    // 004786  je 0x479c
    X86_AT(c, 0x4786u);
    if (x86_cc(c, 4)) { goto L_479c; }
L_4788:
    X86_TICK(c, 12);
    // 004788  cmp word ptr ss:[esi + 2], bx
    X86_AT(c, 0x4788u);
    (void)x86_sub(c, rd16((c.sbase[2] + (uint32_t)(c.r[6] + 0x2u))), (c.r[3] & 0xFFFFu), 0, 2);
    // 00478d  jge 0x479c
    X86_AT(c, 0x478du);
    if (x86_cc(c, 13)) { goto L_479c; }
    X86_TICK(c, 11);
    // 00478f  mov word ptr ss:[esi], 0
    X86_AT(c, 0x478fu);
    wr16((c.sbase[2] + (uint32_t)(c.r[6])), 0x0u);
    // 004795  add esi, 0xa
    X86_AT(c, 0x4795u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0xAu, 0, 4); }
    // 004798  jmp 0x4788
    X86_AT(c, 0x4798u);
    X86_POLL(c, 0x4788u); goto L_4788;
L_479a:
    X86_TICK(c, 10);
    // 00479a  ret 
    X86_AT(c, 0x479au);
    c.eip = pop32(c); return;
L_479c:
    X86_TICK(c, 6);
    // 00479c  mov bx, word ptr gs:[ebp + 0x210]
    X86_AT(c, 0x479cu);
    s16(c, 3, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x210u))));
    // 0047a4  inc bx
    X86_AT(c, 0x47a4u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_inc(c, v, 2)); }
L_47a6:
    X86_TICK(c, 14);
    // 0047a6  mov cx, word ptr gs:[ebp + 0x1f2]
    X86_AT(c, 0x47a6u);
    s16(c, 1, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1F2u))));
    // 0047ae  mov word ptr gs:[ebp + 0x214], 0
    X86_AT(c, 0x47aeu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x214u)), 0x0u);
    // 0047b8  mov edi, dword ptr gs:[ebp + 0x1f8]
    X86_AT(c, 0x47b8u);
    c.r[7] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1F8u)));
    // 0047bf  mov esi, dword ptr gs:[ebp + 0x1f4]
    X86_AT(c, 0x47bfu);
    c.r[6] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1F4u)));
L_47c6:
    X86_TICK(c, 13);
    // 0047c6  mov ax, word ptr ss:[esi]
    X86_AT(c, 0x47c6u);
    s16(c, 0, rd16((c.sbase[2] + (uint32_t)(c.r[6]))));
    // 0047ca  mov word ptr gs:[ebp + 0x20a], ax
    X86_AT(c, 0x47cau);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x20Au)), (c.r[0] & 0xFFFFu));
    // 0047d2  and ax, ax
    X86_AT(c, 0x47d2u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_logic(c, v & (c.r[0] & 0xFFFFu), 2)); }
    // 0047d5  je 0x4834
    X86_AT(c, 0x47d5u);
    if (x86_cc(c, 4)) { goto L_4834; }
    X86_TICK(c, 7);
    // 0047d7  cmp bx, ax
    X86_AT(c, 0x47d7u);
    (void)x86_sub(c, (c.r[3] & 0xFFFFu), (c.r[0] & 0xFFFFu), 0, 2);
    // 0047da  jl 0x483b
    X86_AT(c, 0x47dau);
    if (x86_cc(c, 12)) { goto L_483b; }
    X86_TICK(c, 12);
    // 0047dc  cmp word ptr ss:[esi + 2], bx
    X86_AT(c, 0x47dcu);
    (void)x86_sub(c, rd16((c.sbase[2] + (uint32_t)(c.r[6] + 0x2u))), (c.r[3] & 0xFFFFu), 0, 2);
    // 0047e1  jge 0x47f4
    X86_AT(c, 0x47e1u);
    if (x86_cc(c, 13)) { goto L_47f4; }
    X86_TICK(c, 12);
    // 0047e3  cmp word ptr ss:[esi + 8], 0
    X86_AT(c, 0x47e3u);
    (void)x86_sub(c, rd16((c.sbase[2] + (uint32_t)(c.r[6] + 0x8u))), 0x0u, 0, 2);
    // 0047e9  je 0x4860
    X86_AT(c, 0x47e9u);
    if (x86_cc(c, 4)) { goto L_4860; }
L_47eb:
    X86_TICK(c, 9);
    // 0047eb  mov word ptr ss:[esi], 0
    X86_AT(c, 0x47ebu);
    wr16((c.sbase[2] + (uint32_t)(c.r[6])), 0x0u);
    // 0047f1  jmp 0x4834
    X86_AT(c, 0x47f1u);
    goto L_4834;
L_47f4:
    X86_TICK(c, 51);
    // 0047f4  mov eax, dword ptr ss:[esi + 6]
    X86_AT(c, 0x47f4u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[6] + 0x6u)));
    // 0047f8  push ebx
    X86_AT(c, 0x47f8u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0047f9  inc bx
    X86_AT(c, 0x47f9u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_inc(c, v, 2)); }
    // 0047fb  sub bx, word ptr gs:[ebp + 0x20a]
    X86_AT(c, 0x47fbu);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_sub(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x20Au))), 0, 2)); }
    // 004803  imul bx
    X86_AT(c, 0x4803u);
    x86_imul1(c, (c.r[3] & 0xFFFFu), 2);
    // 004806  shld ebx, eax, 0x10
    X86_AT(c, 0x4806u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_double(c, true, v, c.r[0], 0x10u, 4, w); if (w) c.r[3] = r; }
    // 00480a  cmp word ptr ss:[esi + 6], 0
    X86_AT(c, 0x480au);
    (void)x86_sub(c, rd16((c.sbase[2] + (uint32_t)(c.r[6] + 0x6u))), 0x0u, 0, 2);
    // 004810  jl 0x4819
    X86_AT(c, 0x4810u);
    if (x86_cc(c, 12)) { goto L_4819; }
    X86_TICK(c, 4);
    // 004812  add ax, bx
    X86_AT(c, 0x4812u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
    // 004815  adc dx, 0
    X86_AT(c, 0x4815u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, 0x0u, c.fl & 1, 2)); }
L_4819:
    X86_TICK(c, 63);
    // 004819  idiv bx
    X86_AT(c, 0x4819u);
    x86_idiv(c, (c.r[3] & 0xFFFFu), 2, 0x4819u);
    // 00481c  add ax, word ptr ss:[esi + 4]
    X86_AT(c, 0x481cu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[2] + (uint32_t)(c.r[6] + 0x4u))), 0, 2)); }
    // 004821  sar ax, 1
    X86_AT(c, 0x4821u);
    { uint32_t v = (c.r[0] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 7, v, 0x1u, 2, w); if (w) s16(c, 0, r); }
    // 004824  pop ebx
    X86_AT(c, 0x4824u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 004825  mov word ptr ss:[edi], ax
    X86_AT(c, 0x4825u);
    wr16((c.sbase[2] + (uint32_t)(c.r[7])), (c.r[0] & 0xFFFFu));
    // 004829  add edi, 2
    X86_AT(c, 0x4829u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x2u, 0, 4); }
    // 00482c  inc word ptr gs:[ebp + 0x214]
    X86_AT(c, 0x482cu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x214u)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
L_4834:
    X86_TICK(c, 9);
    // 004834  add esi, 0xa
    X86_AT(c, 0x4834u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0xAu, 0, 4); }
    // 004837  dec cx
    X86_AT(c, 0x4837u);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_dec(c, v, 2)); }
    // 004839  jne 0x47c6
    X86_AT(c, 0x4839u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x47c6u); goto L_47c6; }
L_483b:
    X86_TICK(c, 12);
    // 00483b  cmp word ptr gs:[ebp + 0x214], 0
    X86_AT(c, 0x483bu);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x214u))), 0x0u, 0, 2);
    // 004844  jne 0x48b4
    X86_AT(c, 0x4844u);
    if (x86_cc(c, 5)) { goto L_48b4; }
    X86_TICK(c, 15);
    // 004846  add bx, 2
    X86_AT(c, 0x4846u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, 0x2u, 0, 2)); }
    // 00484a  mov ax, word ptr gs:[ebp + 0x212]
    X86_AT(c, 0x484au);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x212u))));
    // 004852  add ax, 4
    X86_AT(c, 0x4852u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, 0x4u, 0, 2)); }
    // 004856  cmp bx, ax
    X86_AT(c, 0x4856u);
    (void)x86_sub(c, (c.r[3] & 0xFFFFu), (c.r[0] & 0xFFFFu), 0, 2);
    // 004859  jl 0x47a6
    X86_AT(c, 0x4859u);
    if (x86_cc(c, 12)) { X86_POLL(c, 0x47a6u); goto L_47a6; }
    X86_TICK(c, 10);
    // 00485f  ret 
    X86_AT(c, 0x485fu);
    c.eip = pop32(c); return;
L_4860:
    X86_TICK(c, 29);
    // 004860  push ebx
    X86_AT(c, 0x4860u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 004861  push ecx
    X86_AT(c, 0x4861u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 004862  mov ax, word ptr ss:[esi + 4]
    X86_AT(c, 0x4862u);
    s16(c, 0, rd16((c.sbase[2] + (uint32_t)(c.r[6] + 0x4u))));
    // 004867  mov bx, ax
    X86_AT(c, 0x4867u);
    s16(c, 3, (c.r[0] & 0xFFFFu));
    // 00486a  sar ax, 1
    X86_AT(c, 0x486au);
    { uint32_t v = (c.r[0] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 7, v, 0x1u, 2, w); if (w) s16(c, 0, r); }
    // 00486d  add bx, word ptr ss:[esi + 6]
    X86_AT(c, 0x486du);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, rd16((c.sbase[2] + (uint32_t)(c.r[6] + 0x6u))), 0, 2)); }
    // 004872  sar bx, 1
    X86_AT(c, 0x4872u);
    { uint32_t v = (c.r[3] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 7, v, 0x1u, 2, w); if (w) s16(c, 3, r); }
    // 004875  cmp ax, bx
    X86_AT(c, 0x4875u);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), (c.r[3] & 0xFFFFu), 0, 2);
    // 004878  jle 0x487c
    X86_AT(c, 0x4878u);
    if (x86_cc(c, 14)) { goto L_487c; }
    X86_TICK(c, 3);
    // 00487a  xchg bx, ax
    X86_AT(c, 0x487au);
    { uint32_t t = (c.r[3] & 0xFFFFu); s16(c, 3, (c.r[0] & 0xFFFFu)); s16(c, 0, t); }
L_487c:
    X86_TICK(c, 24);
    // 00487c  mov word ptr gs:[ebp + 0x222], ax
    X86_AT(c, 0x487cu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u)), (c.r[0] & 0xFFFFu));
    // 004884  mov word ptr gs:[ebp + 0x224], bx
    X86_AT(c, 0x4884u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u)), (c.r[3] & 0xFFFFu));
    // 00488c  mov ax, word ptr gs:[ebp + 0x20a]
    X86_AT(c, 0x488cu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x20Au))));
    // 004894  sar ax, 1
    X86_AT(c, 0x4894u);
    { uint32_t v = (c.r[0] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 7, v, 0x1u, 2, w); if (w) s16(c, 0, r); }
    // 004897  mov word ptr gs:[ebp + 0x226], ax
    X86_AT(c, 0x4897u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u)), (c.r[0] & 0xFFFFu));
    // 00489f  push esi
    X86_AT(c, 0x489fu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0048a0  push edi
    X86_AT(c, 0x48a0u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0048a1  call dword ptr gs:[ebp + 0x324]
    X86_AT(c, 0x48a1u);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x324u))); push32(c, 0x48a8u); x86_call(c, t); X86_RET(c, 0x48a8u); }
    X86_TICK(c, 23);
    // 0048a8  pop edi
    X86_AT(c, 0x48a8u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0048a9  pop esi
    X86_AT(c, 0x48a9u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0048aa  pop ecx
    X86_AT(c, 0x48aau);
    { uint32_t v = pop32(c); c.r[1] = v; }
    // 0048ab  pop ebx
    X86_AT(c, 0x48abu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0048ac  jmp 0x47eb
    X86_AT(c, 0x48acu);
    X86_POLL(c, 0x47ebu); goto L_47eb;
L_48b4:
    X86_TICK(c, 36);
    // 0048b4  push ebx
    X86_AT(c, 0x48b4u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0048b5  sar bx, 1
    X86_AT(c, 0x48b5u);
    { uint32_t v = (c.r[3] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 7, v, 0x1u, 2, w); if (w) s16(c, 3, r); }
    // 0048b8  mov word ptr gs:[ebp + 0x226], bx
    X86_AT(c, 0x48b8u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u)), (c.r[3] & 0xFFFFu));
    // 0048c0  movzx ebx, word ptr gs:[ebp + 0x214]
    X86_AT(c, 0x48c0u);
    c.r[3] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x214u)));
    // 0048c8  dec ebx
    X86_AT(c, 0x48c8u);
    { uint32_t v = c.r[3]; c.r[3] = x86_dec(c, v, 4); }
    // 0048c9  mov edx, dword ptr gs:[ebp + 0x1f8]
    X86_AT(c, 0x48c9u);
    c.r[2] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1F8u)));
    // 0048d0  lea ebx, [edx + ebx*2]
    X86_AT(c, 0x48d0u);
    c.r[3] = (uint32_t)(c.r[2] + c.r[3] * 2);
    // 0048d3  mov eax, edx
    X86_AT(c, 0x48d3u);
    c.r[0] = c.r[2];
    // 0048d5  push ebp
    X86_AT(c, 0x48d5u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0048d6  mov ebp, dword ptr gs:[ebp + 0x1fc]
    X86_AT(c, 0x48d6u);
    c.r[5] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1FCu)));
    // 0048dd  call 0x492c
    X86_AT(c, 0x48ddu);
    push32(c, 0x48e2u); f_0000492c(c); X86_RET(c, 0x48e2u);
    X86_TICK(c, 17);
    // 0048e2  pop ebp
    X86_AT(c, 0x48e2u);
    { uint32_t v = pop32(c); c.r[5] = v; }
    // 0048e3  movzx ecx, word ptr gs:[ebp + 0x214]
    X86_AT(c, 0x48e3u);
    c.r[1] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x214u)));
    // 0048eb  shr ecx, 1
    X86_AT(c, 0x48ebu);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 4, w); if (w) c.r[1] = r; }
    // 0048ed  mov edi, dword ptr gs:[ebp + 0x1f8]
    X86_AT(c, 0x48edu);
    c.r[7] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1F8u)));
L_48f4:
    X86_TICK(c, 19);
    // 0048f4  mov eax, dword ptr ss:[edi]
    X86_AT(c, 0x48f4u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[7])));
    // 0048f7  mov dword ptr gs:[ebp + 0x222], eax
    X86_AT(c, 0x48f7u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u)), c.r[0]);
    // 0048fe  add edi, 4
    X86_AT(c, 0x48feu);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x4u, 0, 4); }
    // 004901  push ecx
    X86_AT(c, 0x4901u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 004902  push edi
    X86_AT(c, 0x4902u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 004903  call dword ptr gs:[ebp + 0x324]
    X86_AT(c, 0x4903u);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x324u))); push32(c, 0x490au); x86_call(c, t); X86_RET(c, 0x490au); }
    X86_TICK(c, 15);
    // 00490a  pop edi
    X86_AT(c, 0x490au);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 00490b  pop ecx
    X86_AT(c, 0x490bu);
    { uint32_t v = pop32(c); c.r[1] = v; }
    // 00490c  dec ecx
    X86_AT(c, 0x490cu);
    { uint32_t v = c.r[1]; c.r[1] = x86_dec(c, v, 4); }
    // 00490d  jne 0x48f4
    X86_AT(c, 0x490du);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x48f4u); goto L_48f4; }
    X86_TICK(c, 19);
    // 00490f  pop ebx
    X86_AT(c, 0x490fu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 004910  add bx, 2
    X86_AT(c, 0x4910u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, 0x2u, 0, 2)); }
    // 004914  mov ax, word ptr gs:[ebp + 0x212]
    X86_AT(c, 0x4914u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x212u))));
    // 00491c  add ax, 4
    X86_AT(c, 0x491cu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, 0x4u, 0, 2)); }
    // 004920  cmp bx, ax
    X86_AT(c, 0x4920u);
    (void)x86_sub(c, (c.r[3] & 0xFFFFu), (c.r[0] & 0xFFFFu), 0, 2);
    // 004923  jl 0x47a6
    X86_AT(c, 0x4923u);
    if (x86_cc(c, 12)) { X86_POLL(c, 0x47a6u); goto L_47a6; }
    X86_TICK(c, 10);
    // 004929  ret 
    X86_AT(c, 0x4929u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x4700u, "ran off the end of a function");
}
void f_0000492c(X86Cpu& c) {
    X86_TICK(c, 22);
    // 00492c  sub ebp, 8
    X86_AT(c, 0x492cu);
    { uint32_t v = c.r[5]; c.r[5] = x86_sub(c, v, 0x8u, 0, 4); }
    // 00492f  mov esi, eax
    X86_AT(c, 0x492fu);
    c.r[6] = c.r[0];
    // 004931  mov edi, ebx
    X86_AT(c, 0x4931u);
    c.r[7] = c.r[3];
    // 004933  sub eax, edx
    X86_AT(c, 0x4933u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[2], 0, 4); }
    // 004935  sub ebx, edx
    X86_AT(c, 0x4935u);
    { uint32_t v = c.r[3]; c.r[3] = x86_sub(c, v, c.r[2], 0, 4); }
    // 004937  add ebx, eax
    X86_AT(c, 0x4937u);
    { uint32_t v = c.r[3]; c.r[3] = x86_add(c, v, c.r[0], 0, 4); }
    // 004939  shr ebx, 1
    X86_AT(c, 0x4939u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 4, w); if (w) c.r[3] = r; }
    // 00493b  test ebx, 1
    X86_AT(c, 0x493bu);
    (void)x86_logic(c, c.r[3] & 0x1u, 4);
    // 004941  je 0x4946
    X86_AT(c, 0x4941u);
    if (x86_cc(c, 4)) { goto L_4946; }
    X86_TICK(c, 2);
    // 004943  sub ebx, 1
    X86_AT(c, 0x4943u);
    { uint32_t v = c.r[3]; c.r[3] = x86_sub(c, v, 0x1u, 0, 4); }
L_4946:
    X86_TICK(c, 12);
    // 004946  add ebx, edx
    X86_AT(c, 0x4946u);
    { uint32_t v = c.r[3]; c.r[3] = x86_add(c, v, c.r[2], 0, 4); }
    // 004948  push edx
    X86_AT(c, 0x4948u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 004949  mov dx, word ptr ss:[ebx]
    X86_AT(c, 0x4949u);
    s16(c, 2, rd16((c.sbase[2] + (uint32_t)(c.r[3]))));
    // 00494d  mov ebx, edi
    X86_AT(c, 0x494du);
    c.r[3] = c.r[7];
    // 00494f  mov ecx, esi
    X86_AT(c, 0x494fu);
    c.r[1] = c.r[6];
L_4951:
    X86_TICK(c, 12);
    // 004951  cmp word ptr ss:[esi], dx
    X86_AT(c, 0x4951u);
    (void)x86_sub(c, rd16((c.sbase[2] + (uint32_t)(c.r[6]))), (c.r[2] & 0xFFFFu), 0, 2);
    // 004955  jge 0x495c
    X86_AT(c, 0x4955u);
    if (x86_cc(c, 13)) { goto L_495c; }
    X86_TICK(c, 9);
    // 004957  add esi, 2
    X86_AT(c, 0x4957u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x2u, 0, 4); }
    // 00495a  jmp 0x4951
    X86_AT(c, 0x495au);
    X86_POLL(c, 0x4951u); goto L_4951;
L_495c:
    X86_TICK(c, 12);
    // 00495c  cmp word ptr ss:[edi], dx
    X86_AT(c, 0x495cu);
    (void)x86_sub(c, rd16((c.sbase[2] + (uint32_t)(c.r[7]))), (c.r[2] & 0xFFFFu), 0, 2);
    // 004960  jle 0x4967
    X86_AT(c, 0x4960u);
    if (x86_cc(c, 14)) { goto L_4967; }
    X86_TICK(c, 9);
    // 004962  sub edi, 2
    X86_AT(c, 0x4962u);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, 0x2u, 0, 4); }
    // 004965  jmp 0x495c
    X86_AT(c, 0x4965u);
    X86_POLL(c, 0x495cu); goto L_495c;
L_4967:
    X86_TICK(c, 7);
    // 004967  cmp esi, edi
    X86_AT(c, 0x4967u);
    (void)x86_sub(c, c.r[6], c.r[7], 0, 4);
    // 004969  jg 0x497d
    X86_AT(c, 0x4969u);
    if (x86_cc(c, 15)) { goto L_497d; }
    X86_TICK(c, 15);
    // 00496b  mov ax, word ptr ss:[edi]
    X86_AT(c, 0x496bu);
    s16(c, 0, rd16((c.sbase[2] + (uint32_t)(c.r[7]))));
    // 00496f  xchg word ptr ss:[esi], ax
    X86_AT(c, 0x496fu);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[6])); uint32_t t = rd16(ea); wr16(ea, (c.r[0] & 0xFFFFu)); s16(c, 0, t); }
    // 004973  mov word ptr ss:[edi], ax
    X86_AT(c, 0x4973u);
    wr16((c.sbase[2] + (uint32_t)(c.r[7])), (c.r[0] & 0xFFFFu));
    // 004977  add esi, 2
    X86_AT(c, 0x4977u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x2u, 0, 4); }
    // 00497a  sub edi, 2
    X86_AT(c, 0x497au);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, 0x2u, 0, 4); }
L_497d:
    X86_TICK(c, 7);
    // 00497d  cmp esi, edi
    X86_AT(c, 0x497du);
    (void)x86_sub(c, c.r[6], c.r[7], 0, 4);
    // 00497f  jle 0x4951
    X86_AT(c, 0x497fu);
    if (x86_cc(c, 14)) { X86_POLL(c, 0x4951u); goto L_4951; }
    X86_TICK(c, 15);
    // 004981  pop edx
    X86_AT(c, 0x4981u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 004982  mov dword ptr [ebp], esi
    X86_AT(c, 0x4982u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5])), c.r[6]);
    // 004985  mov dword ptr [ebp + 4], ebx
    X86_AT(c, 0x4985u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0x4u)), c.r[3]);
    // 004988  cmp ecx, edi
    X86_AT(c, 0x4988u);
    (void)x86_sub(c, c.r[1], c.r[7], 0, 4);
    // 00498a  jge 0x4995
    X86_AT(c, 0x498au);
    if (x86_cc(c, 13)) { goto L_4995; }
    X86_TICK(c, 11);
    // 00498c  mov eax, ecx
    X86_AT(c, 0x498cu);
    c.r[0] = c.r[1];
    // 00498e  mov ebx, edi
    X86_AT(c, 0x498eu);
    c.r[3] = c.r[7];
    // 004990  call 0x492c
    X86_AT(c, 0x4990u);
    push32(c, 0x4995u); f_0000492c(c); X86_RET(c, 0x4995u);
L_4995:
    X86_TICK(c, 15);
    // 004995  mov eax, dword ptr [ebp]
    X86_AT(c, 0x4995u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5])));
    // 004998  mov ebx, dword ptr [ebp + 4]
    X86_AT(c, 0x4998u);
    c.r[3] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x4u)));
    // 00499b  cmp eax, ebx
    X86_AT(c, 0x499bu);
    (void)x86_sub(c, c.r[0], c.r[3], 0, 4);
    // 00499d  jge 0x49a4
    X86_AT(c, 0x499du);
    if (x86_cc(c, 13)) { goto L_49a4; }
    X86_TICK(c, 7);
    // 00499f  call 0x492c
    X86_AT(c, 0x499fu);
    push32(c, 0x49a4u); f_0000492c(c); X86_RET(c, 0x49a4u);
L_49a4:
    X86_TICK(c, 12);
    // 0049a4  add ebp, 8
    X86_AT(c, 0x49a4u);
    { uint32_t v = c.r[5]; c.r[5] = x86_add(c, v, 0x8u, 0, 4); }
    // 0049a7  ret 
    X86_AT(c, 0x49a7u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x492cu, "ran off the end of a function");
}
void f_000049a8(X86Cpu& c) {
    X86_TICK(c, 44);
    // 0049a8  mov ebx, dword ptr gs:[ebp + 0x2f0]
    X86_AT(c, 0x49a8u);
    c.r[3] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2F0u)));
    // 0049af  mov cl, bl
    X86_AT(c, 0x49afu);
    s8(c, 1, g8(c, 3));
    // 0049b1  and cl, 0x1f
    X86_AT(c, 0x49b1u);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_logic(c, v & 0x1Fu, 1)); }
    // 0049b4  mov byte ptr gs:[ebp + 0x22b], cl
    X86_AT(c, 0x49b4u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x22Bu)), g8(c, 1));
    // 0049bb  push dword ptr gs:[ebp + 0x10]
    X86_AT(c, 0x49bbu);
    { uint32_t v = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x10u))); push32(c, v); }
    // 0049bf  mov byte ptr gs:[ebp + 0x10], 0
    X86_AT(c, 0x49bfu);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x10u)), 0x0u);
    // 0049c4  mov es, word ptr gs:[ebp + 4]
    X86_AT(c, 0x49c4u);
    x86_load_seg(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x4u))) & 0xFFFFu);
    // 0049c8  push dword ptr gs:[ebp + 0x104]
    X86_AT(c, 0x49c8u);
    { uint32_t v = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u))); push32(c, v); }
    // 0049cf  push dword ptr gs:[ebp + 0x10c]
    X86_AT(c, 0x49cfu);
    { uint32_t v = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x10Cu))); push32(c, v); }
    // 0049d6  mov byte ptr gs:[ebp + 0x104], 0
    X86_AT(c, 0x49d6u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u)), 0x0u);
    // 0049de  mov byte ptr gs:[ebp + 0x10a], 0
    X86_AT(c, 0x49deu);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x10Au)), 0x0u);
    // 0049e6  mov dword ptr gs:[ebp + 0x10c], 0
    X86_AT(c, 0x49e6u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x10Cu)), 0x0u);
    // 0049f1  call 0x6120
    X86_AT(c, 0x49f1u);
    push32(c, 0x49f6u); f_00006120(c); X86_RET(c, 0x49f6u);
    X86_TICK(c, 17);
    // 0049f6  mov ecx, ebx
    X86_AT(c, 0x49f6u);
    c.r[1] = c.r[3];
    // 0049f8  shld edx, ecx, 0x10
    X86_AT(c, 0x49f8u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_double(c, true, v, c.r[1], 0x10u, 4, w); if (w) c.r[2] = r; }
    // 0049fc  cmp word ptr gs:[ebp + 0x28], cx
    X86_AT(c, 0x49fcu);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x28u))), (c.r[1] & 0xFFFFu), 0, 2);
    // 004a01  jg 0x4a38
    X86_AT(c, 0x4a01u);
    if (x86_cc(c, 15)) { goto L_4a38; }
    X86_TICK(c, 14);
    // 004a03  add cx, 0x20
    X86_AT(c, 0x4a03u);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_add(c, v, 0x20u, 0, 2)); }
    // 004a07  cmp word ptr gs:[ebp + 0x2c], cx
    X86_AT(c, 0x4a07u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu))), (c.r[1] & 0xFFFFu), 0, 2);
    // 004a0c  jl 0x4a38
    X86_AT(c, 0x4a0cu);
    if (x86_cc(c, 12)) { goto L_4a38; }
    X86_TICK(c, 15);
    // 004a0e  shr ecx, 0x10
    X86_AT(c, 0x4a0eu);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[1] = r; }
    // 004a11  cmp word ptr gs:[ebp + 0x2a], cx
    X86_AT(c, 0x4a11u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Au))), (c.r[1] & 0xFFFFu), 0, 2);
    // 004a16  jg 0x4a38
    X86_AT(c, 0x4a16u);
    if (x86_cc(c, 15)) { goto L_4a38; }
    X86_TICK(c, 20);
    // 004a18  movzx ax, byte ptr gs:[ebp + 0x2ef]
    X86_AT(c, 0x4a18u);
    s16(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x2EFu))));
    // 004a21  add cx, ax
    X86_AT(c, 0x4a21u);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 004a24  cmp word ptr gs:[ebp + 0x2e], cx
    X86_AT(c, 0x4a24u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Eu))), (c.r[1] & 0xFFFFu), 0, 2);
    // 004a29  jl 0x4a38
    X86_AT(c, 0x4a29u);
    if (x86_cc(c, 12)) { goto L_4a38; }
    X86_TICK(c, 9);
    // 004a2b  mov dword ptr gs:[ebp + 0x32c], 0x4b50
    X86_AT(c, 0x4a2bu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x32Cu)), 0x4B50u);
    // 004a36  jmp 0x4a43
    X86_AT(c, 0x4a36u);
    goto L_4a43;
L_4a38:
    X86_TICK(c, 2);
    // 004a38  mov dword ptr gs:[ebp + 0x32c], 0x4ae8
    X86_AT(c, 0x4a38u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x32Cu)), 0x4AE8u);
L_4a43:
    X86_TICK(c, 92);
    // 004a43  and bl, 0xe0
    X86_AT(c, 0x4a43u);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v & 0xE0u, 1)); }
    // 004a46  lds esi, fword ptr gs:[ebp + 0x2e8]
    X86_AT(c, 0x4a46u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x2E8u)); uint32_t o = rd32(ea); uint32_t s = rd16(ea + 4); x86_load_seg(c, 3, s); c.r[6] = o; }
    // 004a4d  movzx eax, byte ptr gs:[ebp + 0x2ef]
    X86_AT(c, 0x4a4du);
    c.r[0] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x2EFu)));
    // 004a55  mul byte ptr gs:[ebp + 0x2ee]
    X86_AT(c, 0x4a55u);
    x86_mul(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x2EEu))), 1);
    // 004a5c  add esi, eax
    X86_AT(c, 0x4a5cu);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, c.r[0], 0, 4); }
    // 004a5e  movzx eax, byte ptr gs:[ebp + 0x2ee]
    X86_AT(c, 0x4a5eu);
    c.r[0] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x2EEu)));
    // 004a66  mov eax, dword ptr cs:[eax*8 + 0x4ba8]
    X86_AT(c, 0x4a66u);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 8 + 0x4BA8u)));
    // 004a6e  mov dword ptr gs:[ebp + 0x2f4], eax
    X86_AT(c, 0x4a6eu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2F4u)), c.r[0]);
    // 004a75  movsx eax, dx
    X86_AT(c, 0x4a75u);
    c.r[0] = (uint32_t)(int32_t)(int16_t)(c.r[2] & 0xFFFFu);
    // 004a78  imul eax, dword ptr gs:[ebp + 0x20]
    X86_AT(c, 0x4a78u);
    c.r[0] = x86_imul2(c, c.r[0], rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x20u))), 4);
    // 004a7d  add eax, dword ptr gs:[ebp]
    X86_AT(c, 0x4a7du);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5]))), 0, 4); }
    // 004a81  mov dword ptr gs:[ebp + 0x1cc], eax
    X86_AT(c, 0x4a81u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu)), c.r[0]);
    // 004a88  push eax
    X86_AT(c, 0x4a88u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 004a89  call dword ptr gs:[ebp + 0x32c]
    X86_AT(c, 0x4a89u);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x32Cu))); push32(c, 0x4a90u); x86_call(c, t); X86_RET(c, 0x4a90u); }
    X86_TICK(c, 22);
    // 004a90  pop dword ptr gs:[ebp + 0x1cc]
    X86_AT(c, 0x4a90u);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu)), v); }
    // 004a97  pop dword ptr gs:[ebp + 0x10c]
    X86_AT(c, 0x4a97u);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x10Cu)), v); }
    // 004a9e  pop dword ptr gs:[ebp + 0x104]
    X86_AT(c, 0x4a9eu);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u)), v); }
    // 004aa5  call 0x36e4
    X86_AT(c, 0x4aa5u);
    push32(c, 0x4aaau); f_000036e4(c); X86_RET(c, 0x4aaau);
    X86_TICK(c, 7);
    // 004aaa  call 0x6120
    X86_AT(c, 0x4aaau);
    push32(c, 0x4aafu); f_00006120(c); X86_RET(c, 0x4aafu);
    X86_TICK(c, 32);
    // 004aaf  mov ebx, dword ptr gs:[ebp + 0x2f0]
    X86_AT(c, 0x4aafu);
    c.r[3] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2F0u)));
    // 004ab6  shld edx, ebx, 0x10
    X86_AT(c, 0x4ab6u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_double(c, true, v, c.r[3], 0x10u, 4, w); if (w) c.r[2] = r; }
    // 004aba  and bl, 0xe0
    X86_AT(c, 0x4abau);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v & 0xE0u, 1)); }
    // 004abd  mov esi, dword ptr gs:[ebp + 0x2e8]
    X86_AT(c, 0x4abdu);
    c.r[6] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2E8u)));
    // 004ac4  movzx eax, byte ptr gs:[ebp + 0x2ee]
    X86_AT(c, 0x4ac4u);
    c.r[0] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x2EEu)));
    // 004acc  mov eax, dword ptr cs:[eax*8 + 0x4bac]
    X86_AT(c, 0x4accu);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 8 + 0x4BACu)));
    // 004ad4  mov dword ptr gs:[ebp + 0x2f4], eax
    X86_AT(c, 0x4ad4u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2F4u)), c.r[0]);
    // 004adb  call dword ptr gs:[ebp + 0x32c]
    X86_AT(c, 0x4adbu);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x32Cu))); push32(c, 0x4ae2u); x86_call(c, t); X86_RET(c, 0x4ae2u); }
    X86_TICK(c, 15);
    // 004ae2  pop dword ptr gs:[ebp + 0x10]
    X86_AT(c, 0x4ae2u);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x10u)), v); }
    // 004ae6  ret 
    X86_AT(c, 0x4ae6u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x49a8u, "ran off the end of a function");
}
void f_000049af(X86Cpu& c) {
    X86_TICK(c, 40);
    // 0049af  mov cl, bl
    X86_AT(c, 0x49afu);
    s8(c, 1, g8(c, 3));
    // 0049b1  and cl, 0x1f
    X86_AT(c, 0x49b1u);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_logic(c, v & 0x1Fu, 1)); }
    // 0049b4  mov byte ptr gs:[ebp + 0x22b], cl
    X86_AT(c, 0x49b4u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x22Bu)), g8(c, 1));
    // 0049bb  push dword ptr gs:[ebp + 0x10]
    X86_AT(c, 0x49bbu);
    { uint32_t v = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x10u))); push32(c, v); }
    // 0049bf  mov byte ptr gs:[ebp + 0x10], 0
    X86_AT(c, 0x49bfu);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x10u)), 0x0u);
    // 0049c4  mov es, word ptr gs:[ebp + 4]
    X86_AT(c, 0x49c4u);
    x86_load_seg(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x4u))) & 0xFFFFu);
    // 0049c8  push dword ptr gs:[ebp + 0x104]
    X86_AT(c, 0x49c8u);
    { uint32_t v = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u))); push32(c, v); }
    // 0049cf  push dword ptr gs:[ebp + 0x10c]
    X86_AT(c, 0x49cfu);
    { uint32_t v = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x10Cu))); push32(c, v); }
    // 0049d6  mov byte ptr gs:[ebp + 0x104], 0
    X86_AT(c, 0x49d6u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u)), 0x0u);
    // 0049de  mov byte ptr gs:[ebp + 0x10a], 0
    X86_AT(c, 0x49deu);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x10Au)), 0x0u);
    // 0049e6  mov dword ptr gs:[ebp + 0x10c], 0
    X86_AT(c, 0x49e6u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x10Cu)), 0x0u);
    // 0049f1  call 0x6120
    X86_AT(c, 0x49f1u);
    push32(c, 0x49f6u); f_00006120(c); X86_RET(c, 0x49f6u);
    X86_TICK(c, 17);
    // 0049f6  mov ecx, ebx
    X86_AT(c, 0x49f6u);
    c.r[1] = c.r[3];
    // 0049f8  shld edx, ecx, 0x10
    X86_AT(c, 0x49f8u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_double(c, true, v, c.r[1], 0x10u, 4, w); if (w) c.r[2] = r; }
    // 0049fc  cmp word ptr gs:[ebp + 0x28], cx
    X86_AT(c, 0x49fcu);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x28u))), (c.r[1] & 0xFFFFu), 0, 2);
    // 004a01  jg 0x4a38
    X86_AT(c, 0x4a01u);
    if (x86_cc(c, 15)) { goto L_4a38; }
    X86_TICK(c, 14);
    // 004a03  add cx, 0x20
    X86_AT(c, 0x4a03u);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_add(c, v, 0x20u, 0, 2)); }
    // 004a07  cmp word ptr gs:[ebp + 0x2c], cx
    X86_AT(c, 0x4a07u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu))), (c.r[1] & 0xFFFFu), 0, 2);
    // 004a0c  jl 0x4a38
    X86_AT(c, 0x4a0cu);
    if (x86_cc(c, 12)) { goto L_4a38; }
    X86_TICK(c, 15);
    // 004a0e  shr ecx, 0x10
    X86_AT(c, 0x4a0eu);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[1] = r; }
    // 004a11  cmp word ptr gs:[ebp + 0x2a], cx
    X86_AT(c, 0x4a11u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Au))), (c.r[1] & 0xFFFFu), 0, 2);
    // 004a16  jg 0x4a38
    X86_AT(c, 0x4a16u);
    if (x86_cc(c, 15)) { goto L_4a38; }
    X86_TICK(c, 20);
    // 004a18  movzx ax, byte ptr gs:[ebp + 0x2ef]
    X86_AT(c, 0x4a18u);
    s16(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x2EFu))));
    // 004a21  add cx, ax
    X86_AT(c, 0x4a21u);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 004a24  cmp word ptr gs:[ebp + 0x2e], cx
    X86_AT(c, 0x4a24u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Eu))), (c.r[1] & 0xFFFFu), 0, 2);
    // 004a29  jl 0x4a38
    X86_AT(c, 0x4a29u);
    if (x86_cc(c, 12)) { goto L_4a38; }
    X86_TICK(c, 9);
    // 004a2b  mov dword ptr gs:[ebp + 0x32c], 0x4b50
    X86_AT(c, 0x4a2bu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x32Cu)), 0x4B50u);
    // 004a36  jmp 0x4a43
    X86_AT(c, 0x4a36u);
    goto L_4a43;
L_4a38:
    X86_TICK(c, 2);
    // 004a38  mov dword ptr gs:[ebp + 0x32c], 0x4ae8
    X86_AT(c, 0x4a38u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x32Cu)), 0x4AE8u);
L_4a43:
    X86_TICK(c, 92);
    // 004a43  and bl, 0xe0
    X86_AT(c, 0x4a43u);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v & 0xE0u, 1)); }
    // 004a46  lds esi, fword ptr gs:[ebp + 0x2e8]
    X86_AT(c, 0x4a46u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x2E8u)); uint32_t o = rd32(ea); uint32_t s = rd16(ea + 4); x86_load_seg(c, 3, s); c.r[6] = o; }
    // 004a4d  movzx eax, byte ptr gs:[ebp + 0x2ef]
    X86_AT(c, 0x4a4du);
    c.r[0] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x2EFu)));
    // 004a55  mul byte ptr gs:[ebp + 0x2ee]
    X86_AT(c, 0x4a55u);
    x86_mul(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x2EEu))), 1);
    // 004a5c  add esi, eax
    X86_AT(c, 0x4a5cu);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, c.r[0], 0, 4); }
    // 004a5e  movzx eax, byte ptr gs:[ebp + 0x2ee]
    X86_AT(c, 0x4a5eu);
    c.r[0] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x2EEu)));
    // 004a66  mov eax, dword ptr cs:[eax*8 + 0x4ba8]
    X86_AT(c, 0x4a66u);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 8 + 0x4BA8u)));
    // 004a6e  mov dword ptr gs:[ebp + 0x2f4], eax
    X86_AT(c, 0x4a6eu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2F4u)), c.r[0]);
    // 004a75  movsx eax, dx
    X86_AT(c, 0x4a75u);
    c.r[0] = (uint32_t)(int32_t)(int16_t)(c.r[2] & 0xFFFFu);
    // 004a78  imul eax, dword ptr gs:[ebp + 0x20]
    X86_AT(c, 0x4a78u);
    c.r[0] = x86_imul2(c, c.r[0], rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x20u))), 4);
    // 004a7d  add eax, dword ptr gs:[ebp]
    X86_AT(c, 0x4a7du);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5]))), 0, 4); }
    // 004a81  mov dword ptr gs:[ebp + 0x1cc], eax
    X86_AT(c, 0x4a81u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu)), c.r[0]);
    // 004a88  push eax
    X86_AT(c, 0x4a88u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 004a89  call dword ptr gs:[ebp + 0x32c]
    X86_AT(c, 0x4a89u);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x32Cu))); push32(c, 0x4a90u); x86_call(c, t); X86_RET(c, 0x4a90u); }
    X86_TICK(c, 22);
    // 004a90  pop dword ptr gs:[ebp + 0x1cc]
    X86_AT(c, 0x4a90u);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu)), v); }
    // 004a97  pop dword ptr gs:[ebp + 0x10c]
    X86_AT(c, 0x4a97u);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x10Cu)), v); }
    // 004a9e  pop dword ptr gs:[ebp + 0x104]
    X86_AT(c, 0x4a9eu);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u)), v); }
    // 004aa5  call 0x36e4
    X86_AT(c, 0x4aa5u);
    push32(c, 0x4aaau); f_000036e4(c); X86_RET(c, 0x4aaau);
    X86_TICK(c, 7);
    // 004aaa  call 0x6120
    X86_AT(c, 0x4aaau);
    push32(c, 0x4aafu); f_00006120(c); X86_RET(c, 0x4aafu);
    X86_TICK(c, 32);
    // 004aaf  mov ebx, dword ptr gs:[ebp + 0x2f0]
    X86_AT(c, 0x4aafu);
    c.r[3] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2F0u)));
    // 004ab6  shld edx, ebx, 0x10
    X86_AT(c, 0x4ab6u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_double(c, true, v, c.r[3], 0x10u, 4, w); if (w) c.r[2] = r; }
    // 004aba  and bl, 0xe0
    X86_AT(c, 0x4abau);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v & 0xE0u, 1)); }
    // 004abd  mov esi, dword ptr gs:[ebp + 0x2e8]
    X86_AT(c, 0x4abdu);
    c.r[6] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2E8u)));
    // 004ac4  movzx eax, byte ptr gs:[ebp + 0x2ee]
    X86_AT(c, 0x4ac4u);
    c.r[0] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x2EEu)));
    // 004acc  mov eax, dword ptr cs:[eax*8 + 0x4bac]
    X86_AT(c, 0x4accu);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 8 + 0x4BACu)));
    // 004ad4  mov dword ptr gs:[ebp + 0x2f4], eax
    X86_AT(c, 0x4ad4u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2F4u)), c.r[0]);
    // 004adb  call dword ptr gs:[ebp + 0x32c]
    X86_AT(c, 0x4adbu);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x32Cu))); push32(c, 0x4ae2u); x86_call(c, t); X86_RET(c, 0x4ae2u); }
    X86_TICK(c, 15);
    // 004ae2  pop dword ptr gs:[ebp + 0x10]
    X86_AT(c, 0x4ae2u);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x10u)), v); }
    // 004ae6  ret 
    X86_AT(c, 0x4ae6u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x49afu, "ran off the end of a function");
}
void f_000049b1(X86Cpu& c) {
    X86_TICK(c, 38);
    // 0049b1  and cl, 0x1f
    X86_AT(c, 0x49b1u);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_logic(c, v & 0x1Fu, 1)); }
    // 0049b4  mov byte ptr gs:[ebp + 0x22b], cl
    X86_AT(c, 0x49b4u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x22Bu)), g8(c, 1));
    // 0049bb  push dword ptr gs:[ebp + 0x10]
    X86_AT(c, 0x49bbu);
    { uint32_t v = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x10u))); push32(c, v); }
    // 0049bf  mov byte ptr gs:[ebp + 0x10], 0
    X86_AT(c, 0x49bfu);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x10u)), 0x0u);
    // 0049c4  mov es, word ptr gs:[ebp + 4]
    X86_AT(c, 0x49c4u);
    x86_load_seg(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x4u))) & 0xFFFFu);
    // 0049c8  push dword ptr gs:[ebp + 0x104]
    X86_AT(c, 0x49c8u);
    { uint32_t v = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u))); push32(c, v); }
    // 0049cf  push dword ptr gs:[ebp + 0x10c]
    X86_AT(c, 0x49cfu);
    { uint32_t v = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x10Cu))); push32(c, v); }
    // 0049d6  mov byte ptr gs:[ebp + 0x104], 0
    X86_AT(c, 0x49d6u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u)), 0x0u);
    // 0049de  mov byte ptr gs:[ebp + 0x10a], 0
    X86_AT(c, 0x49deu);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x10Au)), 0x0u);
    // 0049e6  mov dword ptr gs:[ebp + 0x10c], 0
    X86_AT(c, 0x49e6u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x10Cu)), 0x0u);
    // 0049f1  call 0x6120
    X86_AT(c, 0x49f1u);
    push32(c, 0x49f6u); f_00006120(c); X86_RET(c, 0x49f6u);
    X86_TICK(c, 17);
    // 0049f6  mov ecx, ebx
    X86_AT(c, 0x49f6u);
    c.r[1] = c.r[3];
    // 0049f8  shld edx, ecx, 0x10
    X86_AT(c, 0x49f8u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_double(c, true, v, c.r[1], 0x10u, 4, w); if (w) c.r[2] = r; }
    // 0049fc  cmp word ptr gs:[ebp + 0x28], cx
    X86_AT(c, 0x49fcu);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x28u))), (c.r[1] & 0xFFFFu), 0, 2);
    // 004a01  jg 0x4a38
    X86_AT(c, 0x4a01u);
    if (x86_cc(c, 15)) { goto L_4a38; }
    X86_TICK(c, 14);
    // 004a03  add cx, 0x20
    X86_AT(c, 0x4a03u);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_add(c, v, 0x20u, 0, 2)); }
    // 004a07  cmp word ptr gs:[ebp + 0x2c], cx
    X86_AT(c, 0x4a07u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu))), (c.r[1] & 0xFFFFu), 0, 2);
    // 004a0c  jl 0x4a38
    X86_AT(c, 0x4a0cu);
    if (x86_cc(c, 12)) { goto L_4a38; }
    X86_TICK(c, 15);
    // 004a0e  shr ecx, 0x10
    X86_AT(c, 0x4a0eu);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[1] = r; }
    // 004a11  cmp word ptr gs:[ebp + 0x2a], cx
    X86_AT(c, 0x4a11u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Au))), (c.r[1] & 0xFFFFu), 0, 2);
    // 004a16  jg 0x4a38
    X86_AT(c, 0x4a16u);
    if (x86_cc(c, 15)) { goto L_4a38; }
    X86_TICK(c, 20);
    // 004a18  movzx ax, byte ptr gs:[ebp + 0x2ef]
    X86_AT(c, 0x4a18u);
    s16(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x2EFu))));
    // 004a21  add cx, ax
    X86_AT(c, 0x4a21u);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 004a24  cmp word ptr gs:[ebp + 0x2e], cx
    X86_AT(c, 0x4a24u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Eu))), (c.r[1] & 0xFFFFu), 0, 2);
    // 004a29  jl 0x4a38
    X86_AT(c, 0x4a29u);
    if (x86_cc(c, 12)) { goto L_4a38; }
    X86_TICK(c, 9);
    // 004a2b  mov dword ptr gs:[ebp + 0x32c], 0x4b50
    X86_AT(c, 0x4a2bu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x32Cu)), 0x4B50u);
    // 004a36  jmp 0x4a43
    X86_AT(c, 0x4a36u);
    goto L_4a43;
L_4a38:
    X86_TICK(c, 2);
    // 004a38  mov dword ptr gs:[ebp + 0x32c], 0x4ae8
    X86_AT(c, 0x4a38u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x32Cu)), 0x4AE8u);
L_4a43:
    X86_TICK(c, 92);
    // 004a43  and bl, 0xe0
    X86_AT(c, 0x4a43u);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v & 0xE0u, 1)); }
    // 004a46  lds esi, fword ptr gs:[ebp + 0x2e8]
    X86_AT(c, 0x4a46u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x2E8u)); uint32_t o = rd32(ea); uint32_t s = rd16(ea + 4); x86_load_seg(c, 3, s); c.r[6] = o; }
    // 004a4d  movzx eax, byte ptr gs:[ebp + 0x2ef]
    X86_AT(c, 0x4a4du);
    c.r[0] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x2EFu)));
    // 004a55  mul byte ptr gs:[ebp + 0x2ee]
    X86_AT(c, 0x4a55u);
    x86_mul(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x2EEu))), 1);
    // 004a5c  add esi, eax
    X86_AT(c, 0x4a5cu);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, c.r[0], 0, 4); }
    // 004a5e  movzx eax, byte ptr gs:[ebp + 0x2ee]
    X86_AT(c, 0x4a5eu);
    c.r[0] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x2EEu)));
    // 004a66  mov eax, dword ptr cs:[eax*8 + 0x4ba8]
    X86_AT(c, 0x4a66u);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 8 + 0x4BA8u)));
    // 004a6e  mov dword ptr gs:[ebp + 0x2f4], eax
    X86_AT(c, 0x4a6eu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2F4u)), c.r[0]);
    // 004a75  movsx eax, dx
    X86_AT(c, 0x4a75u);
    c.r[0] = (uint32_t)(int32_t)(int16_t)(c.r[2] & 0xFFFFu);
    // 004a78  imul eax, dword ptr gs:[ebp + 0x20]
    X86_AT(c, 0x4a78u);
    c.r[0] = x86_imul2(c, c.r[0], rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x20u))), 4);
    // 004a7d  add eax, dword ptr gs:[ebp]
    X86_AT(c, 0x4a7du);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5]))), 0, 4); }
    // 004a81  mov dword ptr gs:[ebp + 0x1cc], eax
    X86_AT(c, 0x4a81u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu)), c.r[0]);
    // 004a88  push eax
    X86_AT(c, 0x4a88u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 004a89  call dword ptr gs:[ebp + 0x32c]
    X86_AT(c, 0x4a89u);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x32Cu))); push32(c, 0x4a90u); x86_call(c, t); X86_RET(c, 0x4a90u); }
    X86_TICK(c, 22);
    // 004a90  pop dword ptr gs:[ebp + 0x1cc]
    X86_AT(c, 0x4a90u);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu)), v); }
    // 004a97  pop dword ptr gs:[ebp + 0x10c]
    X86_AT(c, 0x4a97u);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x10Cu)), v); }
    // 004a9e  pop dword ptr gs:[ebp + 0x104]
    X86_AT(c, 0x4a9eu);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u)), v); }
    // 004aa5  call 0x36e4
    X86_AT(c, 0x4aa5u);
    push32(c, 0x4aaau); f_000036e4(c); X86_RET(c, 0x4aaau);
    X86_TICK(c, 7);
    // 004aaa  call 0x6120
    X86_AT(c, 0x4aaau);
    push32(c, 0x4aafu); f_00006120(c); X86_RET(c, 0x4aafu);
    X86_TICK(c, 32);
    // 004aaf  mov ebx, dword ptr gs:[ebp + 0x2f0]
    X86_AT(c, 0x4aafu);
    c.r[3] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2F0u)));
    // 004ab6  shld edx, ebx, 0x10
    X86_AT(c, 0x4ab6u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_double(c, true, v, c.r[3], 0x10u, 4, w); if (w) c.r[2] = r; }
    // 004aba  and bl, 0xe0
    X86_AT(c, 0x4abau);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v & 0xE0u, 1)); }
    // 004abd  mov esi, dword ptr gs:[ebp + 0x2e8]
    X86_AT(c, 0x4abdu);
    c.r[6] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2E8u)));
    // 004ac4  movzx eax, byte ptr gs:[ebp + 0x2ee]
    X86_AT(c, 0x4ac4u);
    c.r[0] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x2EEu)));
    // 004acc  mov eax, dword ptr cs:[eax*8 + 0x4bac]
    X86_AT(c, 0x4accu);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 8 + 0x4BACu)));
    // 004ad4  mov dword ptr gs:[ebp + 0x2f4], eax
    X86_AT(c, 0x4ad4u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2F4u)), c.r[0]);
    // 004adb  call dword ptr gs:[ebp + 0x32c]
    X86_AT(c, 0x4adbu);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x32Cu))); push32(c, 0x4ae2u); x86_call(c, t); X86_RET(c, 0x4ae2u); }
    X86_TICK(c, 15);
    // 004ae2  pop dword ptr gs:[ebp + 0x10]
    X86_AT(c, 0x4ae2u);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x10u)), v); }
    // 004ae6  ret 
    X86_AT(c, 0x4ae6u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x49b1u, "ran off the end of a function");
}
void f_000049b4(X86Cpu& c) {
    X86_TICK(c, 36);
    // 0049b4  mov byte ptr gs:[ebp + 0x22b], cl
    X86_AT(c, 0x49b4u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x22Bu)), g8(c, 1));
    // 0049bb  push dword ptr gs:[ebp + 0x10]
    X86_AT(c, 0x49bbu);
    { uint32_t v = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x10u))); push32(c, v); }
    // 0049bf  mov byte ptr gs:[ebp + 0x10], 0
    X86_AT(c, 0x49bfu);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x10u)), 0x0u);
    // 0049c4  mov es, word ptr gs:[ebp + 4]
    X86_AT(c, 0x49c4u);
    x86_load_seg(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x4u))) & 0xFFFFu);
    // 0049c8  push dword ptr gs:[ebp + 0x104]
    X86_AT(c, 0x49c8u);
    { uint32_t v = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u))); push32(c, v); }
    // 0049cf  push dword ptr gs:[ebp + 0x10c]
    X86_AT(c, 0x49cfu);
    { uint32_t v = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x10Cu))); push32(c, v); }
    // 0049d6  mov byte ptr gs:[ebp + 0x104], 0
    X86_AT(c, 0x49d6u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u)), 0x0u);
    // 0049de  mov byte ptr gs:[ebp + 0x10a], 0
    X86_AT(c, 0x49deu);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x10Au)), 0x0u);
    // 0049e6  mov dword ptr gs:[ebp + 0x10c], 0
    X86_AT(c, 0x49e6u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x10Cu)), 0x0u);
    // 0049f1  call 0x6120
    X86_AT(c, 0x49f1u);
    push32(c, 0x49f6u); f_00006120(c); X86_RET(c, 0x49f6u);
    X86_TICK(c, 17);
    // 0049f6  mov ecx, ebx
    X86_AT(c, 0x49f6u);
    c.r[1] = c.r[3];
    // 0049f8  shld edx, ecx, 0x10
    X86_AT(c, 0x49f8u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_double(c, true, v, c.r[1], 0x10u, 4, w); if (w) c.r[2] = r; }
    // 0049fc  cmp word ptr gs:[ebp + 0x28], cx
    X86_AT(c, 0x49fcu);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x28u))), (c.r[1] & 0xFFFFu), 0, 2);
    // 004a01  jg 0x4a38
    X86_AT(c, 0x4a01u);
    if (x86_cc(c, 15)) { goto L_4a38; }
    X86_TICK(c, 14);
    // 004a03  add cx, 0x20
    X86_AT(c, 0x4a03u);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_add(c, v, 0x20u, 0, 2)); }
    // 004a07  cmp word ptr gs:[ebp + 0x2c], cx
    X86_AT(c, 0x4a07u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu))), (c.r[1] & 0xFFFFu), 0, 2);
    // 004a0c  jl 0x4a38
    X86_AT(c, 0x4a0cu);
    if (x86_cc(c, 12)) { goto L_4a38; }
    X86_TICK(c, 15);
    // 004a0e  shr ecx, 0x10
    X86_AT(c, 0x4a0eu);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[1] = r; }
    // 004a11  cmp word ptr gs:[ebp + 0x2a], cx
    X86_AT(c, 0x4a11u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Au))), (c.r[1] & 0xFFFFu), 0, 2);
    // 004a16  jg 0x4a38
    X86_AT(c, 0x4a16u);
    if (x86_cc(c, 15)) { goto L_4a38; }
    X86_TICK(c, 20);
    // 004a18  movzx ax, byte ptr gs:[ebp + 0x2ef]
    X86_AT(c, 0x4a18u);
    s16(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x2EFu))));
    // 004a21  add cx, ax
    X86_AT(c, 0x4a21u);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 004a24  cmp word ptr gs:[ebp + 0x2e], cx
    X86_AT(c, 0x4a24u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Eu))), (c.r[1] & 0xFFFFu), 0, 2);
    // 004a29  jl 0x4a38
    X86_AT(c, 0x4a29u);
    if (x86_cc(c, 12)) { goto L_4a38; }
    X86_TICK(c, 9);
    // 004a2b  mov dword ptr gs:[ebp + 0x32c], 0x4b50
    X86_AT(c, 0x4a2bu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x32Cu)), 0x4B50u);
    // 004a36  jmp 0x4a43
    X86_AT(c, 0x4a36u);
    goto L_4a43;
L_4a38:
    X86_TICK(c, 2);
    // 004a38  mov dword ptr gs:[ebp + 0x32c], 0x4ae8
    X86_AT(c, 0x4a38u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x32Cu)), 0x4AE8u);
L_4a43:
    X86_TICK(c, 92);
    // 004a43  and bl, 0xe0
    X86_AT(c, 0x4a43u);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v & 0xE0u, 1)); }
    // 004a46  lds esi, fword ptr gs:[ebp + 0x2e8]
    X86_AT(c, 0x4a46u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x2E8u)); uint32_t o = rd32(ea); uint32_t s = rd16(ea + 4); x86_load_seg(c, 3, s); c.r[6] = o; }
    // 004a4d  movzx eax, byte ptr gs:[ebp + 0x2ef]
    X86_AT(c, 0x4a4du);
    c.r[0] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x2EFu)));
    // 004a55  mul byte ptr gs:[ebp + 0x2ee]
    X86_AT(c, 0x4a55u);
    x86_mul(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x2EEu))), 1);
    // 004a5c  add esi, eax
    X86_AT(c, 0x4a5cu);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, c.r[0], 0, 4); }
    // 004a5e  movzx eax, byte ptr gs:[ebp + 0x2ee]
    X86_AT(c, 0x4a5eu);
    c.r[0] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x2EEu)));
    // 004a66  mov eax, dword ptr cs:[eax*8 + 0x4ba8]
    X86_AT(c, 0x4a66u);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 8 + 0x4BA8u)));
    // 004a6e  mov dword ptr gs:[ebp + 0x2f4], eax
    X86_AT(c, 0x4a6eu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2F4u)), c.r[0]);
    // 004a75  movsx eax, dx
    X86_AT(c, 0x4a75u);
    c.r[0] = (uint32_t)(int32_t)(int16_t)(c.r[2] & 0xFFFFu);
    // 004a78  imul eax, dword ptr gs:[ebp + 0x20]
    X86_AT(c, 0x4a78u);
    c.r[0] = x86_imul2(c, c.r[0], rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x20u))), 4);
    // 004a7d  add eax, dword ptr gs:[ebp]
    X86_AT(c, 0x4a7du);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5]))), 0, 4); }
    // 004a81  mov dword ptr gs:[ebp + 0x1cc], eax
    X86_AT(c, 0x4a81u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu)), c.r[0]);
    // 004a88  push eax
    X86_AT(c, 0x4a88u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 004a89  call dword ptr gs:[ebp + 0x32c]
    X86_AT(c, 0x4a89u);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x32Cu))); push32(c, 0x4a90u); x86_call(c, t); X86_RET(c, 0x4a90u); }
    X86_TICK(c, 22);
    // 004a90  pop dword ptr gs:[ebp + 0x1cc]
    X86_AT(c, 0x4a90u);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu)), v); }
    // 004a97  pop dword ptr gs:[ebp + 0x10c]
    X86_AT(c, 0x4a97u);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x10Cu)), v); }
    // 004a9e  pop dword ptr gs:[ebp + 0x104]
    X86_AT(c, 0x4a9eu);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u)), v); }
    // 004aa5  call 0x36e4
    X86_AT(c, 0x4aa5u);
    push32(c, 0x4aaau); f_000036e4(c); X86_RET(c, 0x4aaau);
    X86_TICK(c, 7);
    // 004aaa  call 0x6120
    X86_AT(c, 0x4aaau);
    push32(c, 0x4aafu); f_00006120(c); X86_RET(c, 0x4aafu);
    X86_TICK(c, 32);
    // 004aaf  mov ebx, dword ptr gs:[ebp + 0x2f0]
    X86_AT(c, 0x4aafu);
    c.r[3] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2F0u)));
    // 004ab6  shld edx, ebx, 0x10
    X86_AT(c, 0x4ab6u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_double(c, true, v, c.r[3], 0x10u, 4, w); if (w) c.r[2] = r; }
    // 004aba  and bl, 0xe0
    X86_AT(c, 0x4abau);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v & 0xE0u, 1)); }
    // 004abd  mov esi, dword ptr gs:[ebp + 0x2e8]
    X86_AT(c, 0x4abdu);
    c.r[6] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2E8u)));
    // 004ac4  movzx eax, byte ptr gs:[ebp + 0x2ee]
    X86_AT(c, 0x4ac4u);
    c.r[0] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x2EEu)));
    // 004acc  mov eax, dword ptr cs:[eax*8 + 0x4bac]
    X86_AT(c, 0x4accu);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 8 + 0x4BACu)));
    // 004ad4  mov dword ptr gs:[ebp + 0x2f4], eax
    X86_AT(c, 0x4ad4u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2F4u)), c.r[0]);
    // 004adb  call dword ptr gs:[ebp + 0x32c]
    X86_AT(c, 0x4adbu);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x32Cu))); push32(c, 0x4ae2u); x86_call(c, t); X86_RET(c, 0x4ae2u); }
    X86_TICK(c, 15);
    // 004ae2  pop dword ptr gs:[ebp + 0x10]
    X86_AT(c, 0x4ae2u);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x10u)), v); }
    // 004ae6  ret 
    X86_AT(c, 0x4ae6u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x49b4u, "ran off the end of a function");
}
void f_000049bb(X86Cpu& c) {
    X86_TICK(c, 34);
    // 0049bb  push dword ptr gs:[ebp + 0x10]
    X86_AT(c, 0x49bbu);
    { uint32_t v = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x10u))); push32(c, v); }
    // 0049bf  mov byte ptr gs:[ebp + 0x10], 0
    X86_AT(c, 0x49bfu);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x10u)), 0x0u);
    // 0049c4  mov es, word ptr gs:[ebp + 4]
    X86_AT(c, 0x49c4u);
    x86_load_seg(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x4u))) & 0xFFFFu);
    // 0049c8  push dword ptr gs:[ebp + 0x104]
    X86_AT(c, 0x49c8u);
    { uint32_t v = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u))); push32(c, v); }
    // 0049cf  push dword ptr gs:[ebp + 0x10c]
    X86_AT(c, 0x49cfu);
    { uint32_t v = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x10Cu))); push32(c, v); }
    // 0049d6  mov byte ptr gs:[ebp + 0x104], 0
    X86_AT(c, 0x49d6u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u)), 0x0u);
    // 0049de  mov byte ptr gs:[ebp + 0x10a], 0
    X86_AT(c, 0x49deu);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x10Au)), 0x0u);
    // 0049e6  mov dword ptr gs:[ebp + 0x10c], 0
    X86_AT(c, 0x49e6u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x10Cu)), 0x0u);
    // 0049f1  call 0x6120
    X86_AT(c, 0x49f1u);
    push32(c, 0x49f6u); f_00006120(c); X86_RET(c, 0x49f6u);
    X86_TICK(c, 17);
    // 0049f6  mov ecx, ebx
    X86_AT(c, 0x49f6u);
    c.r[1] = c.r[3];
    // 0049f8  shld edx, ecx, 0x10
    X86_AT(c, 0x49f8u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_double(c, true, v, c.r[1], 0x10u, 4, w); if (w) c.r[2] = r; }
    // 0049fc  cmp word ptr gs:[ebp + 0x28], cx
    X86_AT(c, 0x49fcu);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x28u))), (c.r[1] & 0xFFFFu), 0, 2);
    // 004a01  jg 0x4a38
    X86_AT(c, 0x4a01u);
    if (x86_cc(c, 15)) { goto L_4a38; }
    X86_TICK(c, 14);
    // 004a03  add cx, 0x20
    X86_AT(c, 0x4a03u);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_add(c, v, 0x20u, 0, 2)); }
    // 004a07  cmp word ptr gs:[ebp + 0x2c], cx
    X86_AT(c, 0x4a07u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu))), (c.r[1] & 0xFFFFu), 0, 2);
    // 004a0c  jl 0x4a38
    X86_AT(c, 0x4a0cu);
    if (x86_cc(c, 12)) { goto L_4a38; }
    X86_TICK(c, 15);
    // 004a0e  shr ecx, 0x10
    X86_AT(c, 0x4a0eu);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[1] = r; }
    // 004a11  cmp word ptr gs:[ebp + 0x2a], cx
    X86_AT(c, 0x4a11u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Au))), (c.r[1] & 0xFFFFu), 0, 2);
    // 004a16  jg 0x4a38
    X86_AT(c, 0x4a16u);
    if (x86_cc(c, 15)) { goto L_4a38; }
    X86_TICK(c, 20);
    // 004a18  movzx ax, byte ptr gs:[ebp + 0x2ef]
    X86_AT(c, 0x4a18u);
    s16(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x2EFu))));
    // 004a21  add cx, ax
    X86_AT(c, 0x4a21u);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 004a24  cmp word ptr gs:[ebp + 0x2e], cx
    X86_AT(c, 0x4a24u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Eu))), (c.r[1] & 0xFFFFu), 0, 2);
    // 004a29  jl 0x4a38
    X86_AT(c, 0x4a29u);
    if (x86_cc(c, 12)) { goto L_4a38; }
    X86_TICK(c, 9);
    // 004a2b  mov dword ptr gs:[ebp + 0x32c], 0x4b50
    X86_AT(c, 0x4a2bu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x32Cu)), 0x4B50u);
    // 004a36  jmp 0x4a43
    X86_AT(c, 0x4a36u);
    goto L_4a43;
L_4a38:
    X86_TICK(c, 2);
    // 004a38  mov dword ptr gs:[ebp + 0x32c], 0x4ae8
    X86_AT(c, 0x4a38u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x32Cu)), 0x4AE8u);
L_4a43:
    X86_TICK(c, 92);
    // 004a43  and bl, 0xe0
    X86_AT(c, 0x4a43u);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v & 0xE0u, 1)); }
    // 004a46  lds esi, fword ptr gs:[ebp + 0x2e8]
    X86_AT(c, 0x4a46u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x2E8u)); uint32_t o = rd32(ea); uint32_t s = rd16(ea + 4); x86_load_seg(c, 3, s); c.r[6] = o; }
    // 004a4d  movzx eax, byte ptr gs:[ebp + 0x2ef]
    X86_AT(c, 0x4a4du);
    c.r[0] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x2EFu)));
    // 004a55  mul byte ptr gs:[ebp + 0x2ee]
    X86_AT(c, 0x4a55u);
    x86_mul(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x2EEu))), 1);
    // 004a5c  add esi, eax
    X86_AT(c, 0x4a5cu);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, c.r[0], 0, 4); }
    // 004a5e  movzx eax, byte ptr gs:[ebp + 0x2ee]
    X86_AT(c, 0x4a5eu);
    c.r[0] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x2EEu)));
    // 004a66  mov eax, dword ptr cs:[eax*8 + 0x4ba8]
    X86_AT(c, 0x4a66u);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 8 + 0x4BA8u)));
    // 004a6e  mov dword ptr gs:[ebp + 0x2f4], eax
    X86_AT(c, 0x4a6eu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2F4u)), c.r[0]);
    // 004a75  movsx eax, dx
    X86_AT(c, 0x4a75u);
    c.r[0] = (uint32_t)(int32_t)(int16_t)(c.r[2] & 0xFFFFu);
    // 004a78  imul eax, dword ptr gs:[ebp + 0x20]
    X86_AT(c, 0x4a78u);
    c.r[0] = x86_imul2(c, c.r[0], rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x20u))), 4);
    // 004a7d  add eax, dword ptr gs:[ebp]
    X86_AT(c, 0x4a7du);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5]))), 0, 4); }
    // 004a81  mov dword ptr gs:[ebp + 0x1cc], eax
    X86_AT(c, 0x4a81u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu)), c.r[0]);
    // 004a88  push eax
    X86_AT(c, 0x4a88u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 004a89  call dword ptr gs:[ebp + 0x32c]
    X86_AT(c, 0x4a89u);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x32Cu))); push32(c, 0x4a90u); x86_call(c, t); X86_RET(c, 0x4a90u); }
    X86_TICK(c, 22);
    // 004a90  pop dword ptr gs:[ebp + 0x1cc]
    X86_AT(c, 0x4a90u);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu)), v); }
    // 004a97  pop dword ptr gs:[ebp + 0x10c]
    X86_AT(c, 0x4a97u);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x10Cu)), v); }
    // 004a9e  pop dword ptr gs:[ebp + 0x104]
    X86_AT(c, 0x4a9eu);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u)), v); }
    // 004aa5  call 0x36e4
    X86_AT(c, 0x4aa5u);
    push32(c, 0x4aaau); f_000036e4(c); X86_RET(c, 0x4aaau);
    X86_TICK(c, 7);
    // 004aaa  call 0x6120
    X86_AT(c, 0x4aaau);
    push32(c, 0x4aafu); f_00006120(c); X86_RET(c, 0x4aafu);
    X86_TICK(c, 32);
    // 004aaf  mov ebx, dword ptr gs:[ebp + 0x2f0]
    X86_AT(c, 0x4aafu);
    c.r[3] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2F0u)));
    // 004ab6  shld edx, ebx, 0x10
    X86_AT(c, 0x4ab6u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_double(c, true, v, c.r[3], 0x10u, 4, w); if (w) c.r[2] = r; }
    // 004aba  and bl, 0xe0
    X86_AT(c, 0x4abau);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v & 0xE0u, 1)); }
    // 004abd  mov esi, dword ptr gs:[ebp + 0x2e8]
    X86_AT(c, 0x4abdu);
    c.r[6] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2E8u)));
    // 004ac4  movzx eax, byte ptr gs:[ebp + 0x2ee]
    X86_AT(c, 0x4ac4u);
    c.r[0] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x2EEu)));
    // 004acc  mov eax, dword ptr cs:[eax*8 + 0x4bac]
    X86_AT(c, 0x4accu);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 8 + 0x4BACu)));
    // 004ad4  mov dword ptr gs:[ebp + 0x2f4], eax
    X86_AT(c, 0x4ad4u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2F4u)), c.r[0]);
    // 004adb  call dword ptr gs:[ebp + 0x32c]
    X86_AT(c, 0x4adbu);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x32Cu))); push32(c, 0x4ae2u); x86_call(c, t); X86_RET(c, 0x4ae2u); }
    X86_TICK(c, 15);
    // 004ae2  pop dword ptr gs:[ebp + 0x10]
    X86_AT(c, 0x4ae2u);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x10u)), v); }
    // 004ae6  ret 
    X86_AT(c, 0x4ae6u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x49bbu, "ran off the end of a function");
}
void f_000049bf(X86Cpu& c) {
    X86_TICK(c, 29);
    // 0049bf  mov byte ptr gs:[ebp + 0x10], 0
    X86_AT(c, 0x49bfu);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x10u)), 0x0u);
    // 0049c4  mov es, word ptr gs:[ebp + 4]
    X86_AT(c, 0x49c4u);
    x86_load_seg(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x4u))) & 0xFFFFu);
    // 0049c8  push dword ptr gs:[ebp + 0x104]
    X86_AT(c, 0x49c8u);
    { uint32_t v = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u))); push32(c, v); }
    // 0049cf  push dword ptr gs:[ebp + 0x10c]
    X86_AT(c, 0x49cfu);
    { uint32_t v = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x10Cu))); push32(c, v); }
    // 0049d6  mov byte ptr gs:[ebp + 0x104], 0
    X86_AT(c, 0x49d6u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u)), 0x0u);
    // 0049de  mov byte ptr gs:[ebp + 0x10a], 0
    X86_AT(c, 0x49deu);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x10Au)), 0x0u);
    // 0049e6  mov dword ptr gs:[ebp + 0x10c], 0
    X86_AT(c, 0x49e6u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x10Cu)), 0x0u);
    // 0049f1  call 0x6120
    X86_AT(c, 0x49f1u);
    push32(c, 0x49f6u); f_00006120(c); X86_RET(c, 0x49f6u);
    X86_TICK(c, 17);
    // 0049f6  mov ecx, ebx
    X86_AT(c, 0x49f6u);
    c.r[1] = c.r[3];
    // 0049f8  shld edx, ecx, 0x10
    X86_AT(c, 0x49f8u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_double(c, true, v, c.r[1], 0x10u, 4, w); if (w) c.r[2] = r; }
    // 0049fc  cmp word ptr gs:[ebp + 0x28], cx
    X86_AT(c, 0x49fcu);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x28u))), (c.r[1] & 0xFFFFu), 0, 2);
    // 004a01  jg 0x4a38
    X86_AT(c, 0x4a01u);
    if (x86_cc(c, 15)) { goto L_4a38; }
    X86_TICK(c, 14);
    // 004a03  add cx, 0x20
    X86_AT(c, 0x4a03u);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_add(c, v, 0x20u, 0, 2)); }
    // 004a07  cmp word ptr gs:[ebp + 0x2c], cx
    X86_AT(c, 0x4a07u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu))), (c.r[1] & 0xFFFFu), 0, 2);
    // 004a0c  jl 0x4a38
    X86_AT(c, 0x4a0cu);
    if (x86_cc(c, 12)) { goto L_4a38; }
    X86_TICK(c, 15);
    // 004a0e  shr ecx, 0x10
    X86_AT(c, 0x4a0eu);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[1] = r; }
    // 004a11  cmp word ptr gs:[ebp + 0x2a], cx
    X86_AT(c, 0x4a11u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Au))), (c.r[1] & 0xFFFFu), 0, 2);
    // 004a16  jg 0x4a38
    X86_AT(c, 0x4a16u);
    if (x86_cc(c, 15)) { goto L_4a38; }
    X86_TICK(c, 20);
    // 004a18  movzx ax, byte ptr gs:[ebp + 0x2ef]
    X86_AT(c, 0x4a18u);
    s16(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x2EFu))));
    // 004a21  add cx, ax
    X86_AT(c, 0x4a21u);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 004a24  cmp word ptr gs:[ebp + 0x2e], cx
    X86_AT(c, 0x4a24u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Eu))), (c.r[1] & 0xFFFFu), 0, 2);
    // 004a29  jl 0x4a38
    X86_AT(c, 0x4a29u);
    if (x86_cc(c, 12)) { goto L_4a38; }
    X86_TICK(c, 9);
    // 004a2b  mov dword ptr gs:[ebp + 0x32c], 0x4b50
    X86_AT(c, 0x4a2bu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x32Cu)), 0x4B50u);
    // 004a36  jmp 0x4a43
    X86_AT(c, 0x4a36u);
    goto L_4a43;
L_4a38:
    X86_TICK(c, 2);
    // 004a38  mov dword ptr gs:[ebp + 0x32c], 0x4ae8
    X86_AT(c, 0x4a38u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x32Cu)), 0x4AE8u);
L_4a43:
    X86_TICK(c, 92);
    // 004a43  and bl, 0xe0
    X86_AT(c, 0x4a43u);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v & 0xE0u, 1)); }
    // 004a46  lds esi, fword ptr gs:[ebp + 0x2e8]
    X86_AT(c, 0x4a46u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x2E8u)); uint32_t o = rd32(ea); uint32_t s = rd16(ea + 4); x86_load_seg(c, 3, s); c.r[6] = o; }
    // 004a4d  movzx eax, byte ptr gs:[ebp + 0x2ef]
    X86_AT(c, 0x4a4du);
    c.r[0] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x2EFu)));
    // 004a55  mul byte ptr gs:[ebp + 0x2ee]
    X86_AT(c, 0x4a55u);
    x86_mul(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x2EEu))), 1);
    // 004a5c  add esi, eax
    X86_AT(c, 0x4a5cu);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, c.r[0], 0, 4); }
    // 004a5e  movzx eax, byte ptr gs:[ebp + 0x2ee]
    X86_AT(c, 0x4a5eu);
    c.r[0] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x2EEu)));
    // 004a66  mov eax, dword ptr cs:[eax*8 + 0x4ba8]
    X86_AT(c, 0x4a66u);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 8 + 0x4BA8u)));
    // 004a6e  mov dword ptr gs:[ebp + 0x2f4], eax
    X86_AT(c, 0x4a6eu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2F4u)), c.r[0]);
    // 004a75  movsx eax, dx
    X86_AT(c, 0x4a75u);
    c.r[0] = (uint32_t)(int32_t)(int16_t)(c.r[2] & 0xFFFFu);
    // 004a78  imul eax, dword ptr gs:[ebp + 0x20]
    X86_AT(c, 0x4a78u);
    c.r[0] = x86_imul2(c, c.r[0], rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x20u))), 4);
    // 004a7d  add eax, dword ptr gs:[ebp]
    X86_AT(c, 0x4a7du);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5]))), 0, 4); }
    // 004a81  mov dword ptr gs:[ebp + 0x1cc], eax
    X86_AT(c, 0x4a81u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu)), c.r[0]);
    // 004a88  push eax
    X86_AT(c, 0x4a88u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 004a89  call dword ptr gs:[ebp + 0x32c]
    X86_AT(c, 0x4a89u);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x32Cu))); push32(c, 0x4a90u); x86_call(c, t); X86_RET(c, 0x4a90u); }
    X86_TICK(c, 22);
    // 004a90  pop dword ptr gs:[ebp + 0x1cc]
    X86_AT(c, 0x4a90u);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu)), v); }
    // 004a97  pop dword ptr gs:[ebp + 0x10c]
    X86_AT(c, 0x4a97u);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x10Cu)), v); }
    // 004a9e  pop dword ptr gs:[ebp + 0x104]
    X86_AT(c, 0x4a9eu);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u)), v); }
    // 004aa5  call 0x36e4
    X86_AT(c, 0x4aa5u);
    push32(c, 0x4aaau); f_000036e4(c); X86_RET(c, 0x4aaau);
    X86_TICK(c, 7);
    // 004aaa  call 0x6120
    X86_AT(c, 0x4aaau);
    push32(c, 0x4aafu); f_00006120(c); X86_RET(c, 0x4aafu);
    X86_TICK(c, 32);
    // 004aaf  mov ebx, dword ptr gs:[ebp + 0x2f0]
    X86_AT(c, 0x4aafu);
    c.r[3] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2F0u)));
    // 004ab6  shld edx, ebx, 0x10
    X86_AT(c, 0x4ab6u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_double(c, true, v, c.r[3], 0x10u, 4, w); if (w) c.r[2] = r; }
    // 004aba  and bl, 0xe0
    X86_AT(c, 0x4abau);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v & 0xE0u, 1)); }
    // 004abd  mov esi, dword ptr gs:[ebp + 0x2e8]
    X86_AT(c, 0x4abdu);
    c.r[6] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2E8u)));
    // 004ac4  movzx eax, byte ptr gs:[ebp + 0x2ee]
    X86_AT(c, 0x4ac4u);
    c.r[0] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x2EEu)));
    // 004acc  mov eax, dword ptr cs:[eax*8 + 0x4bac]
    X86_AT(c, 0x4accu);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 8 + 0x4BACu)));
    // 004ad4  mov dword ptr gs:[ebp + 0x2f4], eax
    X86_AT(c, 0x4ad4u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2F4u)), c.r[0]);
    // 004adb  call dword ptr gs:[ebp + 0x32c]
    X86_AT(c, 0x4adbu);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x32Cu))); push32(c, 0x4ae2u); x86_call(c, t); X86_RET(c, 0x4ae2u); }
    X86_TICK(c, 15);
    // 004ae2  pop dword ptr gs:[ebp + 0x10]
    X86_AT(c, 0x4ae2u);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x10u)), v); }
    // 004ae6  ret 
    X86_AT(c, 0x4ae6u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x49bfu, "ran off the end of a function");
}
void f_000049c4(X86Cpu& c) {
    X86_TICK(c, 27);
    // 0049c4  mov es, word ptr gs:[ebp + 4]
    X86_AT(c, 0x49c4u);
    x86_load_seg(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x4u))) & 0xFFFFu);
    // 0049c8  push dword ptr gs:[ebp + 0x104]
    X86_AT(c, 0x49c8u);
    { uint32_t v = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u))); push32(c, v); }
    // 0049cf  push dword ptr gs:[ebp + 0x10c]
    X86_AT(c, 0x49cfu);
    { uint32_t v = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x10Cu))); push32(c, v); }
    // 0049d6  mov byte ptr gs:[ebp + 0x104], 0
    X86_AT(c, 0x49d6u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u)), 0x0u);
    // 0049de  mov byte ptr gs:[ebp + 0x10a], 0
    X86_AT(c, 0x49deu);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x10Au)), 0x0u);
    // 0049e6  mov dword ptr gs:[ebp + 0x10c], 0
    X86_AT(c, 0x49e6u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x10Cu)), 0x0u);
    // 0049f1  call 0x6120
    X86_AT(c, 0x49f1u);
    push32(c, 0x49f6u); f_00006120(c); X86_RET(c, 0x49f6u);
    X86_TICK(c, 17);
    // 0049f6  mov ecx, ebx
    X86_AT(c, 0x49f6u);
    c.r[1] = c.r[3];
    // 0049f8  shld edx, ecx, 0x10
    X86_AT(c, 0x49f8u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_double(c, true, v, c.r[1], 0x10u, 4, w); if (w) c.r[2] = r; }
    // 0049fc  cmp word ptr gs:[ebp + 0x28], cx
    X86_AT(c, 0x49fcu);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x28u))), (c.r[1] & 0xFFFFu), 0, 2);
    // 004a01  jg 0x4a38
    X86_AT(c, 0x4a01u);
    if (x86_cc(c, 15)) { goto L_4a38; }
    X86_TICK(c, 14);
    // 004a03  add cx, 0x20
    X86_AT(c, 0x4a03u);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_add(c, v, 0x20u, 0, 2)); }
    // 004a07  cmp word ptr gs:[ebp + 0x2c], cx
    X86_AT(c, 0x4a07u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu))), (c.r[1] & 0xFFFFu), 0, 2);
    // 004a0c  jl 0x4a38
    X86_AT(c, 0x4a0cu);
    if (x86_cc(c, 12)) { goto L_4a38; }
    X86_TICK(c, 15);
    // 004a0e  shr ecx, 0x10
    X86_AT(c, 0x4a0eu);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[1] = r; }
    // 004a11  cmp word ptr gs:[ebp + 0x2a], cx
    X86_AT(c, 0x4a11u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Au))), (c.r[1] & 0xFFFFu), 0, 2);
    // 004a16  jg 0x4a38
    X86_AT(c, 0x4a16u);
    if (x86_cc(c, 15)) { goto L_4a38; }
    X86_TICK(c, 20);
    // 004a18  movzx ax, byte ptr gs:[ebp + 0x2ef]
    X86_AT(c, 0x4a18u);
    s16(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x2EFu))));
    // 004a21  add cx, ax
    X86_AT(c, 0x4a21u);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 004a24  cmp word ptr gs:[ebp + 0x2e], cx
    X86_AT(c, 0x4a24u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Eu))), (c.r[1] & 0xFFFFu), 0, 2);
    // 004a29  jl 0x4a38
    X86_AT(c, 0x4a29u);
    if (x86_cc(c, 12)) { goto L_4a38; }
    X86_TICK(c, 9);
    // 004a2b  mov dword ptr gs:[ebp + 0x32c], 0x4b50
    X86_AT(c, 0x4a2bu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x32Cu)), 0x4B50u);
    // 004a36  jmp 0x4a43
    X86_AT(c, 0x4a36u);
    goto L_4a43;
L_4a38:
    X86_TICK(c, 2);
    // 004a38  mov dword ptr gs:[ebp + 0x32c], 0x4ae8
    X86_AT(c, 0x4a38u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x32Cu)), 0x4AE8u);
L_4a43:
    X86_TICK(c, 92);
    // 004a43  and bl, 0xe0
    X86_AT(c, 0x4a43u);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v & 0xE0u, 1)); }
    // 004a46  lds esi, fword ptr gs:[ebp + 0x2e8]
    X86_AT(c, 0x4a46u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x2E8u)); uint32_t o = rd32(ea); uint32_t s = rd16(ea + 4); x86_load_seg(c, 3, s); c.r[6] = o; }
    // 004a4d  movzx eax, byte ptr gs:[ebp + 0x2ef]
    X86_AT(c, 0x4a4du);
    c.r[0] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x2EFu)));
    // 004a55  mul byte ptr gs:[ebp + 0x2ee]
    X86_AT(c, 0x4a55u);
    x86_mul(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x2EEu))), 1);
    // 004a5c  add esi, eax
    X86_AT(c, 0x4a5cu);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, c.r[0], 0, 4); }
    // 004a5e  movzx eax, byte ptr gs:[ebp + 0x2ee]
    X86_AT(c, 0x4a5eu);
    c.r[0] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x2EEu)));
    // 004a66  mov eax, dword ptr cs:[eax*8 + 0x4ba8]
    X86_AT(c, 0x4a66u);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 8 + 0x4BA8u)));
    // 004a6e  mov dword ptr gs:[ebp + 0x2f4], eax
    X86_AT(c, 0x4a6eu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2F4u)), c.r[0]);
    // 004a75  movsx eax, dx
    X86_AT(c, 0x4a75u);
    c.r[0] = (uint32_t)(int32_t)(int16_t)(c.r[2] & 0xFFFFu);
    // 004a78  imul eax, dword ptr gs:[ebp + 0x20]
    X86_AT(c, 0x4a78u);
    c.r[0] = x86_imul2(c, c.r[0], rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x20u))), 4);
    // 004a7d  add eax, dword ptr gs:[ebp]
    X86_AT(c, 0x4a7du);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5]))), 0, 4); }
    // 004a81  mov dword ptr gs:[ebp + 0x1cc], eax
    X86_AT(c, 0x4a81u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu)), c.r[0]);
    // 004a88  push eax
    X86_AT(c, 0x4a88u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 004a89  call dword ptr gs:[ebp + 0x32c]
    X86_AT(c, 0x4a89u);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x32Cu))); push32(c, 0x4a90u); x86_call(c, t); X86_RET(c, 0x4a90u); }
    X86_TICK(c, 22);
    // 004a90  pop dword ptr gs:[ebp + 0x1cc]
    X86_AT(c, 0x4a90u);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu)), v); }
    // 004a97  pop dword ptr gs:[ebp + 0x10c]
    X86_AT(c, 0x4a97u);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x10Cu)), v); }
    // 004a9e  pop dword ptr gs:[ebp + 0x104]
    X86_AT(c, 0x4a9eu);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u)), v); }
    // 004aa5  call 0x36e4
    X86_AT(c, 0x4aa5u);
    push32(c, 0x4aaau); f_000036e4(c); X86_RET(c, 0x4aaau);
    X86_TICK(c, 7);
    // 004aaa  call 0x6120
    X86_AT(c, 0x4aaau);
    push32(c, 0x4aafu); f_00006120(c); X86_RET(c, 0x4aafu);
    X86_TICK(c, 32);
    // 004aaf  mov ebx, dword ptr gs:[ebp + 0x2f0]
    X86_AT(c, 0x4aafu);
    c.r[3] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2F0u)));
    // 004ab6  shld edx, ebx, 0x10
    X86_AT(c, 0x4ab6u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_double(c, true, v, c.r[3], 0x10u, 4, w); if (w) c.r[2] = r; }
    // 004aba  and bl, 0xe0
    X86_AT(c, 0x4abau);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v & 0xE0u, 1)); }
    // 004abd  mov esi, dword ptr gs:[ebp + 0x2e8]
    X86_AT(c, 0x4abdu);
    c.r[6] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2E8u)));
    // 004ac4  movzx eax, byte ptr gs:[ebp + 0x2ee]
    X86_AT(c, 0x4ac4u);
    c.r[0] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x2EEu)));
    // 004acc  mov eax, dword ptr cs:[eax*8 + 0x4bac]
    X86_AT(c, 0x4accu);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 8 + 0x4BACu)));
    // 004ad4  mov dword ptr gs:[ebp + 0x2f4], eax
    X86_AT(c, 0x4ad4u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2F4u)), c.r[0]);
    // 004adb  call dword ptr gs:[ebp + 0x32c]
    X86_AT(c, 0x4adbu);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x32Cu))); push32(c, 0x4ae2u); x86_call(c, t); X86_RET(c, 0x4ae2u); }
    X86_TICK(c, 15);
    // 004ae2  pop dword ptr gs:[ebp + 0x10]
    X86_AT(c, 0x4ae2u);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x10u)), v); }
    // 004ae6  ret 
    X86_AT(c, 0x4ae6u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x49c4u, "ran off the end of a function");
}
void f_000049c8(X86Cpu& c) {
    X86_TICK(c, 23);
    // 0049c8  push dword ptr gs:[ebp + 0x104]
    X86_AT(c, 0x49c8u);
    { uint32_t v = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u))); push32(c, v); }
    // 0049cf  push dword ptr gs:[ebp + 0x10c]
    X86_AT(c, 0x49cfu);
    { uint32_t v = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x10Cu))); push32(c, v); }
    // 0049d6  mov byte ptr gs:[ebp + 0x104], 0
    X86_AT(c, 0x49d6u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u)), 0x0u);
    // 0049de  mov byte ptr gs:[ebp + 0x10a], 0
    X86_AT(c, 0x49deu);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x10Au)), 0x0u);
    // 0049e6  mov dword ptr gs:[ebp + 0x10c], 0
    X86_AT(c, 0x49e6u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x10Cu)), 0x0u);
    // 0049f1  call 0x6120
    X86_AT(c, 0x49f1u);
    push32(c, 0x49f6u); f_00006120(c); X86_RET(c, 0x49f6u);
    X86_TICK(c, 17);
    // 0049f6  mov ecx, ebx
    X86_AT(c, 0x49f6u);
    c.r[1] = c.r[3];
    // 0049f8  shld edx, ecx, 0x10
    X86_AT(c, 0x49f8u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_double(c, true, v, c.r[1], 0x10u, 4, w); if (w) c.r[2] = r; }
    // 0049fc  cmp word ptr gs:[ebp + 0x28], cx
    X86_AT(c, 0x49fcu);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x28u))), (c.r[1] & 0xFFFFu), 0, 2);
    // 004a01  jg 0x4a38
    X86_AT(c, 0x4a01u);
    if (x86_cc(c, 15)) { goto L_4a38; }
    X86_TICK(c, 14);
    // 004a03  add cx, 0x20
    X86_AT(c, 0x4a03u);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_add(c, v, 0x20u, 0, 2)); }
    // 004a07  cmp word ptr gs:[ebp + 0x2c], cx
    X86_AT(c, 0x4a07u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu))), (c.r[1] & 0xFFFFu), 0, 2);
    // 004a0c  jl 0x4a38
    X86_AT(c, 0x4a0cu);
    if (x86_cc(c, 12)) { goto L_4a38; }
    X86_TICK(c, 15);
    // 004a0e  shr ecx, 0x10
    X86_AT(c, 0x4a0eu);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[1] = r; }
    // 004a11  cmp word ptr gs:[ebp + 0x2a], cx
    X86_AT(c, 0x4a11u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Au))), (c.r[1] & 0xFFFFu), 0, 2);
    // 004a16  jg 0x4a38
    X86_AT(c, 0x4a16u);
    if (x86_cc(c, 15)) { goto L_4a38; }
    X86_TICK(c, 20);
    // 004a18  movzx ax, byte ptr gs:[ebp + 0x2ef]
    X86_AT(c, 0x4a18u);
    s16(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x2EFu))));
    // 004a21  add cx, ax
    X86_AT(c, 0x4a21u);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 004a24  cmp word ptr gs:[ebp + 0x2e], cx
    X86_AT(c, 0x4a24u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Eu))), (c.r[1] & 0xFFFFu), 0, 2);
    // 004a29  jl 0x4a38
    X86_AT(c, 0x4a29u);
    if (x86_cc(c, 12)) { goto L_4a38; }
    X86_TICK(c, 9);
    // 004a2b  mov dword ptr gs:[ebp + 0x32c], 0x4b50
    X86_AT(c, 0x4a2bu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x32Cu)), 0x4B50u);
    // 004a36  jmp 0x4a43
    X86_AT(c, 0x4a36u);
    goto L_4a43;
L_4a38:
    X86_TICK(c, 2);
    // 004a38  mov dword ptr gs:[ebp + 0x32c], 0x4ae8
    X86_AT(c, 0x4a38u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x32Cu)), 0x4AE8u);
L_4a43:
    X86_TICK(c, 92);
    // 004a43  and bl, 0xe0
    X86_AT(c, 0x4a43u);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v & 0xE0u, 1)); }
    // 004a46  lds esi, fword ptr gs:[ebp + 0x2e8]
    X86_AT(c, 0x4a46u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x2E8u)); uint32_t o = rd32(ea); uint32_t s = rd16(ea + 4); x86_load_seg(c, 3, s); c.r[6] = o; }
    // 004a4d  movzx eax, byte ptr gs:[ebp + 0x2ef]
    X86_AT(c, 0x4a4du);
    c.r[0] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x2EFu)));
    // 004a55  mul byte ptr gs:[ebp + 0x2ee]
    X86_AT(c, 0x4a55u);
    x86_mul(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x2EEu))), 1);
    // 004a5c  add esi, eax
    X86_AT(c, 0x4a5cu);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, c.r[0], 0, 4); }
    // 004a5e  movzx eax, byte ptr gs:[ebp + 0x2ee]
    X86_AT(c, 0x4a5eu);
    c.r[0] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x2EEu)));
    // 004a66  mov eax, dword ptr cs:[eax*8 + 0x4ba8]
    X86_AT(c, 0x4a66u);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 8 + 0x4BA8u)));
    // 004a6e  mov dword ptr gs:[ebp + 0x2f4], eax
    X86_AT(c, 0x4a6eu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2F4u)), c.r[0]);
    // 004a75  movsx eax, dx
    X86_AT(c, 0x4a75u);
    c.r[0] = (uint32_t)(int32_t)(int16_t)(c.r[2] & 0xFFFFu);
    // 004a78  imul eax, dword ptr gs:[ebp + 0x20]
    X86_AT(c, 0x4a78u);
    c.r[0] = x86_imul2(c, c.r[0], rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x20u))), 4);
    // 004a7d  add eax, dword ptr gs:[ebp]
    X86_AT(c, 0x4a7du);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5]))), 0, 4); }
    // 004a81  mov dword ptr gs:[ebp + 0x1cc], eax
    X86_AT(c, 0x4a81u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu)), c.r[0]);
    // 004a88  push eax
    X86_AT(c, 0x4a88u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 004a89  call dword ptr gs:[ebp + 0x32c]
    X86_AT(c, 0x4a89u);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x32Cu))); push32(c, 0x4a90u); x86_call(c, t); X86_RET(c, 0x4a90u); }
    X86_TICK(c, 22);
    // 004a90  pop dword ptr gs:[ebp + 0x1cc]
    X86_AT(c, 0x4a90u);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu)), v); }
    // 004a97  pop dword ptr gs:[ebp + 0x10c]
    X86_AT(c, 0x4a97u);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x10Cu)), v); }
    // 004a9e  pop dword ptr gs:[ebp + 0x104]
    X86_AT(c, 0x4a9eu);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u)), v); }
    // 004aa5  call 0x36e4
    X86_AT(c, 0x4aa5u);
    push32(c, 0x4aaau); f_000036e4(c); X86_RET(c, 0x4aaau);
    X86_TICK(c, 7);
    // 004aaa  call 0x6120
    X86_AT(c, 0x4aaau);
    push32(c, 0x4aafu); f_00006120(c); X86_RET(c, 0x4aafu);
    X86_TICK(c, 32);
    // 004aaf  mov ebx, dword ptr gs:[ebp + 0x2f0]
    X86_AT(c, 0x4aafu);
    c.r[3] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2F0u)));
    // 004ab6  shld edx, ebx, 0x10
    X86_AT(c, 0x4ab6u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_double(c, true, v, c.r[3], 0x10u, 4, w); if (w) c.r[2] = r; }
    // 004aba  and bl, 0xe0
    X86_AT(c, 0x4abau);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v & 0xE0u, 1)); }
    // 004abd  mov esi, dword ptr gs:[ebp + 0x2e8]
    X86_AT(c, 0x4abdu);
    c.r[6] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2E8u)));
    // 004ac4  movzx eax, byte ptr gs:[ebp + 0x2ee]
    X86_AT(c, 0x4ac4u);
    c.r[0] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x2EEu)));
    // 004acc  mov eax, dword ptr cs:[eax*8 + 0x4bac]
    X86_AT(c, 0x4accu);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 8 + 0x4BACu)));
    // 004ad4  mov dword ptr gs:[ebp + 0x2f4], eax
    X86_AT(c, 0x4ad4u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2F4u)), c.r[0]);
    // 004adb  call dword ptr gs:[ebp + 0x32c]
    X86_AT(c, 0x4adbu);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x32Cu))); push32(c, 0x4ae2u); x86_call(c, t); X86_RET(c, 0x4ae2u); }
    X86_TICK(c, 15);
    // 004ae2  pop dword ptr gs:[ebp + 0x10]
    X86_AT(c, 0x4ae2u);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x10u)), v); }
    // 004ae6  ret 
    X86_AT(c, 0x4ae6u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x49c8u, "ran off the end of a function");
}
void f_000049cf(X86Cpu& c) {
    X86_TICK(c, 18);
    // 0049cf  push dword ptr gs:[ebp + 0x10c]
    X86_AT(c, 0x49cfu);
    { uint32_t v = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x10Cu))); push32(c, v); }
    // 0049d6  mov byte ptr gs:[ebp + 0x104], 0
    X86_AT(c, 0x49d6u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u)), 0x0u);
    // 0049de  mov byte ptr gs:[ebp + 0x10a], 0
    X86_AT(c, 0x49deu);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x10Au)), 0x0u);
    // 0049e6  mov dword ptr gs:[ebp + 0x10c], 0
    X86_AT(c, 0x49e6u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x10Cu)), 0x0u);
    // 0049f1  call 0x6120
    X86_AT(c, 0x49f1u);
    push32(c, 0x49f6u); f_00006120(c); X86_RET(c, 0x49f6u);
    X86_TICK(c, 17);
    // 0049f6  mov ecx, ebx
    X86_AT(c, 0x49f6u);
    c.r[1] = c.r[3];
    // 0049f8  shld edx, ecx, 0x10
    X86_AT(c, 0x49f8u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_double(c, true, v, c.r[1], 0x10u, 4, w); if (w) c.r[2] = r; }
    // 0049fc  cmp word ptr gs:[ebp + 0x28], cx
    X86_AT(c, 0x49fcu);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x28u))), (c.r[1] & 0xFFFFu), 0, 2);
    // 004a01  jg 0x4a38
    X86_AT(c, 0x4a01u);
    if (x86_cc(c, 15)) { goto L_4a38; }
    X86_TICK(c, 14);
    // 004a03  add cx, 0x20
    X86_AT(c, 0x4a03u);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_add(c, v, 0x20u, 0, 2)); }
    // 004a07  cmp word ptr gs:[ebp + 0x2c], cx
    X86_AT(c, 0x4a07u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu))), (c.r[1] & 0xFFFFu), 0, 2);
    // 004a0c  jl 0x4a38
    X86_AT(c, 0x4a0cu);
    if (x86_cc(c, 12)) { goto L_4a38; }
    X86_TICK(c, 15);
    // 004a0e  shr ecx, 0x10
    X86_AT(c, 0x4a0eu);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[1] = r; }
    // 004a11  cmp word ptr gs:[ebp + 0x2a], cx
    X86_AT(c, 0x4a11u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Au))), (c.r[1] & 0xFFFFu), 0, 2);
    // 004a16  jg 0x4a38
    X86_AT(c, 0x4a16u);
    if (x86_cc(c, 15)) { goto L_4a38; }
    X86_TICK(c, 20);
    // 004a18  movzx ax, byte ptr gs:[ebp + 0x2ef]
    X86_AT(c, 0x4a18u);
    s16(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x2EFu))));
    // 004a21  add cx, ax
    X86_AT(c, 0x4a21u);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 004a24  cmp word ptr gs:[ebp + 0x2e], cx
    X86_AT(c, 0x4a24u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Eu))), (c.r[1] & 0xFFFFu), 0, 2);
    // 004a29  jl 0x4a38
    X86_AT(c, 0x4a29u);
    if (x86_cc(c, 12)) { goto L_4a38; }
    X86_TICK(c, 9);
    // 004a2b  mov dword ptr gs:[ebp + 0x32c], 0x4b50
    X86_AT(c, 0x4a2bu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x32Cu)), 0x4B50u);
    // 004a36  jmp 0x4a43
    X86_AT(c, 0x4a36u);
    goto L_4a43;
L_4a38:
    X86_TICK(c, 2);
    // 004a38  mov dword ptr gs:[ebp + 0x32c], 0x4ae8
    X86_AT(c, 0x4a38u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x32Cu)), 0x4AE8u);
L_4a43:
    X86_TICK(c, 92);
    // 004a43  and bl, 0xe0
    X86_AT(c, 0x4a43u);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v & 0xE0u, 1)); }
    // 004a46  lds esi, fword ptr gs:[ebp + 0x2e8]
    X86_AT(c, 0x4a46u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x2E8u)); uint32_t o = rd32(ea); uint32_t s = rd16(ea + 4); x86_load_seg(c, 3, s); c.r[6] = o; }
    // 004a4d  movzx eax, byte ptr gs:[ebp + 0x2ef]
    X86_AT(c, 0x4a4du);
    c.r[0] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x2EFu)));
    // 004a55  mul byte ptr gs:[ebp + 0x2ee]
    X86_AT(c, 0x4a55u);
    x86_mul(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x2EEu))), 1);
    // 004a5c  add esi, eax
    X86_AT(c, 0x4a5cu);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, c.r[0], 0, 4); }
    // 004a5e  movzx eax, byte ptr gs:[ebp + 0x2ee]
    X86_AT(c, 0x4a5eu);
    c.r[0] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x2EEu)));
    // 004a66  mov eax, dword ptr cs:[eax*8 + 0x4ba8]
    X86_AT(c, 0x4a66u);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 8 + 0x4BA8u)));
    // 004a6e  mov dword ptr gs:[ebp + 0x2f4], eax
    X86_AT(c, 0x4a6eu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2F4u)), c.r[0]);
    // 004a75  movsx eax, dx
    X86_AT(c, 0x4a75u);
    c.r[0] = (uint32_t)(int32_t)(int16_t)(c.r[2] & 0xFFFFu);
    // 004a78  imul eax, dword ptr gs:[ebp + 0x20]
    X86_AT(c, 0x4a78u);
    c.r[0] = x86_imul2(c, c.r[0], rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x20u))), 4);
    // 004a7d  add eax, dword ptr gs:[ebp]
    X86_AT(c, 0x4a7du);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5]))), 0, 4); }
    // 004a81  mov dword ptr gs:[ebp + 0x1cc], eax
    X86_AT(c, 0x4a81u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu)), c.r[0]);
    // 004a88  push eax
    X86_AT(c, 0x4a88u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 004a89  call dword ptr gs:[ebp + 0x32c]
    X86_AT(c, 0x4a89u);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x32Cu))); push32(c, 0x4a90u); x86_call(c, t); X86_RET(c, 0x4a90u); }
    X86_TICK(c, 22);
    // 004a90  pop dword ptr gs:[ebp + 0x1cc]
    X86_AT(c, 0x4a90u);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu)), v); }
    // 004a97  pop dword ptr gs:[ebp + 0x10c]
    X86_AT(c, 0x4a97u);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x10Cu)), v); }
    // 004a9e  pop dword ptr gs:[ebp + 0x104]
    X86_AT(c, 0x4a9eu);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u)), v); }
    // 004aa5  call 0x36e4
    X86_AT(c, 0x4aa5u);
    push32(c, 0x4aaau); f_000036e4(c); X86_RET(c, 0x4aaau);
    X86_TICK(c, 7);
    // 004aaa  call 0x6120
    X86_AT(c, 0x4aaau);
    push32(c, 0x4aafu); f_00006120(c); X86_RET(c, 0x4aafu);
    X86_TICK(c, 32);
    // 004aaf  mov ebx, dword ptr gs:[ebp + 0x2f0]
    X86_AT(c, 0x4aafu);
    c.r[3] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2F0u)));
    // 004ab6  shld edx, ebx, 0x10
    X86_AT(c, 0x4ab6u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_double(c, true, v, c.r[3], 0x10u, 4, w); if (w) c.r[2] = r; }
    // 004aba  and bl, 0xe0
    X86_AT(c, 0x4abau);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v & 0xE0u, 1)); }
    // 004abd  mov esi, dword ptr gs:[ebp + 0x2e8]
    X86_AT(c, 0x4abdu);
    c.r[6] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2E8u)));
    // 004ac4  movzx eax, byte ptr gs:[ebp + 0x2ee]
    X86_AT(c, 0x4ac4u);
    c.r[0] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x2EEu)));
    // 004acc  mov eax, dword ptr cs:[eax*8 + 0x4bac]
    X86_AT(c, 0x4accu);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 8 + 0x4BACu)));
    // 004ad4  mov dword ptr gs:[ebp + 0x2f4], eax
    X86_AT(c, 0x4ad4u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2F4u)), c.r[0]);
    // 004adb  call dword ptr gs:[ebp + 0x32c]
    X86_AT(c, 0x4adbu);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x32Cu))); push32(c, 0x4ae2u); x86_call(c, t); X86_RET(c, 0x4ae2u); }
    X86_TICK(c, 15);
    // 004ae2  pop dword ptr gs:[ebp + 0x10]
    X86_AT(c, 0x4ae2u);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x10u)), v); }
    // 004ae6  ret 
    X86_AT(c, 0x4ae6u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x49cfu, "ran off the end of a function");
}
void f_000049d6(X86Cpu& c) {
    X86_TICK(c, 13);
    // 0049d6  mov byte ptr gs:[ebp + 0x104], 0
    X86_AT(c, 0x49d6u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u)), 0x0u);
    // 0049de  mov byte ptr gs:[ebp + 0x10a], 0
    X86_AT(c, 0x49deu);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x10Au)), 0x0u);
    // 0049e6  mov dword ptr gs:[ebp + 0x10c], 0
    X86_AT(c, 0x49e6u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x10Cu)), 0x0u);
    // 0049f1  call 0x6120
    X86_AT(c, 0x49f1u);
    push32(c, 0x49f6u); f_00006120(c); X86_RET(c, 0x49f6u);
    X86_TICK(c, 17);
    // 0049f6  mov ecx, ebx
    X86_AT(c, 0x49f6u);
    c.r[1] = c.r[3];
    // 0049f8  shld edx, ecx, 0x10
    X86_AT(c, 0x49f8u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_double(c, true, v, c.r[1], 0x10u, 4, w); if (w) c.r[2] = r; }
    // 0049fc  cmp word ptr gs:[ebp + 0x28], cx
    X86_AT(c, 0x49fcu);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x28u))), (c.r[1] & 0xFFFFu), 0, 2);
    // 004a01  jg 0x4a38
    X86_AT(c, 0x4a01u);
    if (x86_cc(c, 15)) { goto L_4a38; }
    X86_TICK(c, 14);
    // 004a03  add cx, 0x20
    X86_AT(c, 0x4a03u);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_add(c, v, 0x20u, 0, 2)); }
    // 004a07  cmp word ptr gs:[ebp + 0x2c], cx
    X86_AT(c, 0x4a07u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu))), (c.r[1] & 0xFFFFu), 0, 2);
    // 004a0c  jl 0x4a38
    X86_AT(c, 0x4a0cu);
    if (x86_cc(c, 12)) { goto L_4a38; }
    X86_TICK(c, 15);
    // 004a0e  shr ecx, 0x10
    X86_AT(c, 0x4a0eu);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[1] = r; }
    // 004a11  cmp word ptr gs:[ebp + 0x2a], cx
    X86_AT(c, 0x4a11u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Au))), (c.r[1] & 0xFFFFu), 0, 2);
    // 004a16  jg 0x4a38
    X86_AT(c, 0x4a16u);
    if (x86_cc(c, 15)) { goto L_4a38; }
    X86_TICK(c, 20);
    // 004a18  movzx ax, byte ptr gs:[ebp + 0x2ef]
    X86_AT(c, 0x4a18u);
    s16(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x2EFu))));
    // 004a21  add cx, ax
    X86_AT(c, 0x4a21u);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 004a24  cmp word ptr gs:[ebp + 0x2e], cx
    X86_AT(c, 0x4a24u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Eu))), (c.r[1] & 0xFFFFu), 0, 2);
    // 004a29  jl 0x4a38
    X86_AT(c, 0x4a29u);
    if (x86_cc(c, 12)) { goto L_4a38; }
    X86_TICK(c, 9);
    // 004a2b  mov dword ptr gs:[ebp + 0x32c], 0x4b50
    X86_AT(c, 0x4a2bu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x32Cu)), 0x4B50u);
    // 004a36  jmp 0x4a43
    X86_AT(c, 0x4a36u);
    goto L_4a43;
L_4a38:
    X86_TICK(c, 2);
    // 004a38  mov dword ptr gs:[ebp + 0x32c], 0x4ae8
    X86_AT(c, 0x4a38u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x32Cu)), 0x4AE8u);
L_4a43:
    X86_TICK(c, 92);
    // 004a43  and bl, 0xe0
    X86_AT(c, 0x4a43u);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v & 0xE0u, 1)); }
    // 004a46  lds esi, fword ptr gs:[ebp + 0x2e8]
    X86_AT(c, 0x4a46u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x2E8u)); uint32_t o = rd32(ea); uint32_t s = rd16(ea + 4); x86_load_seg(c, 3, s); c.r[6] = o; }
    // 004a4d  movzx eax, byte ptr gs:[ebp + 0x2ef]
    X86_AT(c, 0x4a4du);
    c.r[0] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x2EFu)));
    // 004a55  mul byte ptr gs:[ebp + 0x2ee]
    X86_AT(c, 0x4a55u);
    x86_mul(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x2EEu))), 1);
    // 004a5c  add esi, eax
    X86_AT(c, 0x4a5cu);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, c.r[0], 0, 4); }
    // 004a5e  movzx eax, byte ptr gs:[ebp + 0x2ee]
    X86_AT(c, 0x4a5eu);
    c.r[0] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x2EEu)));
    // 004a66  mov eax, dword ptr cs:[eax*8 + 0x4ba8]
    X86_AT(c, 0x4a66u);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 8 + 0x4BA8u)));
    // 004a6e  mov dword ptr gs:[ebp + 0x2f4], eax
    X86_AT(c, 0x4a6eu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2F4u)), c.r[0]);
    // 004a75  movsx eax, dx
    X86_AT(c, 0x4a75u);
    c.r[0] = (uint32_t)(int32_t)(int16_t)(c.r[2] & 0xFFFFu);
    // 004a78  imul eax, dword ptr gs:[ebp + 0x20]
    X86_AT(c, 0x4a78u);
    c.r[0] = x86_imul2(c, c.r[0], rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x20u))), 4);
    // 004a7d  add eax, dword ptr gs:[ebp]
    X86_AT(c, 0x4a7du);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5]))), 0, 4); }
    // 004a81  mov dword ptr gs:[ebp + 0x1cc], eax
    X86_AT(c, 0x4a81u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu)), c.r[0]);
    // 004a88  push eax
    X86_AT(c, 0x4a88u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 004a89  call dword ptr gs:[ebp + 0x32c]
    X86_AT(c, 0x4a89u);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x32Cu))); push32(c, 0x4a90u); x86_call(c, t); X86_RET(c, 0x4a90u); }
    X86_TICK(c, 22);
    // 004a90  pop dword ptr gs:[ebp + 0x1cc]
    X86_AT(c, 0x4a90u);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu)), v); }
    // 004a97  pop dword ptr gs:[ebp + 0x10c]
    X86_AT(c, 0x4a97u);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x10Cu)), v); }
    // 004a9e  pop dword ptr gs:[ebp + 0x104]
    X86_AT(c, 0x4a9eu);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u)), v); }
    // 004aa5  call 0x36e4
    X86_AT(c, 0x4aa5u);
    push32(c, 0x4aaau); f_000036e4(c); X86_RET(c, 0x4aaau);
    X86_TICK(c, 7);
    // 004aaa  call 0x6120
    X86_AT(c, 0x4aaau);
    push32(c, 0x4aafu); f_00006120(c); X86_RET(c, 0x4aafu);
    X86_TICK(c, 32);
    // 004aaf  mov ebx, dword ptr gs:[ebp + 0x2f0]
    X86_AT(c, 0x4aafu);
    c.r[3] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2F0u)));
    // 004ab6  shld edx, ebx, 0x10
    X86_AT(c, 0x4ab6u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_double(c, true, v, c.r[3], 0x10u, 4, w); if (w) c.r[2] = r; }
    // 004aba  and bl, 0xe0
    X86_AT(c, 0x4abau);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v & 0xE0u, 1)); }
    // 004abd  mov esi, dword ptr gs:[ebp + 0x2e8]
    X86_AT(c, 0x4abdu);
    c.r[6] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2E8u)));
    // 004ac4  movzx eax, byte ptr gs:[ebp + 0x2ee]
    X86_AT(c, 0x4ac4u);
    c.r[0] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x2EEu)));
    // 004acc  mov eax, dword ptr cs:[eax*8 + 0x4bac]
    X86_AT(c, 0x4accu);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 8 + 0x4BACu)));
    // 004ad4  mov dword ptr gs:[ebp + 0x2f4], eax
    X86_AT(c, 0x4ad4u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2F4u)), c.r[0]);
    // 004adb  call dword ptr gs:[ebp + 0x32c]
    X86_AT(c, 0x4adbu);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x32Cu))); push32(c, 0x4ae2u); x86_call(c, t); X86_RET(c, 0x4ae2u); }
    X86_TICK(c, 15);
    // 004ae2  pop dword ptr gs:[ebp + 0x10]
    X86_AT(c, 0x4ae2u);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x10u)), v); }
    // 004ae6  ret 
    X86_AT(c, 0x4ae6u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x49d6u, "ran off the end of a function");
}
void f_000049de(X86Cpu& c) {
    X86_TICK(c, 11);
    // 0049de  mov byte ptr gs:[ebp + 0x10a], 0
    X86_AT(c, 0x49deu);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x10Au)), 0x0u);
    // 0049e6  mov dword ptr gs:[ebp + 0x10c], 0
    X86_AT(c, 0x49e6u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x10Cu)), 0x0u);
    // 0049f1  call 0x6120
    X86_AT(c, 0x49f1u);
    push32(c, 0x49f6u); f_00006120(c); X86_RET(c, 0x49f6u);
    X86_TICK(c, 17);
    // 0049f6  mov ecx, ebx
    X86_AT(c, 0x49f6u);
    c.r[1] = c.r[3];
    // 0049f8  shld edx, ecx, 0x10
    X86_AT(c, 0x49f8u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_double(c, true, v, c.r[1], 0x10u, 4, w); if (w) c.r[2] = r; }
    // 0049fc  cmp word ptr gs:[ebp + 0x28], cx
    X86_AT(c, 0x49fcu);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x28u))), (c.r[1] & 0xFFFFu), 0, 2);
    // 004a01  jg 0x4a38
    X86_AT(c, 0x4a01u);
    if (x86_cc(c, 15)) { goto L_4a38; }
    X86_TICK(c, 14);
    // 004a03  add cx, 0x20
    X86_AT(c, 0x4a03u);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_add(c, v, 0x20u, 0, 2)); }
    // 004a07  cmp word ptr gs:[ebp + 0x2c], cx
    X86_AT(c, 0x4a07u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu))), (c.r[1] & 0xFFFFu), 0, 2);
    // 004a0c  jl 0x4a38
    X86_AT(c, 0x4a0cu);
    if (x86_cc(c, 12)) { goto L_4a38; }
    X86_TICK(c, 15);
    // 004a0e  shr ecx, 0x10
    X86_AT(c, 0x4a0eu);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[1] = r; }
    // 004a11  cmp word ptr gs:[ebp + 0x2a], cx
    X86_AT(c, 0x4a11u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Au))), (c.r[1] & 0xFFFFu), 0, 2);
    // 004a16  jg 0x4a38
    X86_AT(c, 0x4a16u);
    if (x86_cc(c, 15)) { goto L_4a38; }
    X86_TICK(c, 20);
    // 004a18  movzx ax, byte ptr gs:[ebp + 0x2ef]
    X86_AT(c, 0x4a18u);
    s16(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x2EFu))));
    // 004a21  add cx, ax
    X86_AT(c, 0x4a21u);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 004a24  cmp word ptr gs:[ebp + 0x2e], cx
    X86_AT(c, 0x4a24u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Eu))), (c.r[1] & 0xFFFFu), 0, 2);
    // 004a29  jl 0x4a38
    X86_AT(c, 0x4a29u);
    if (x86_cc(c, 12)) { goto L_4a38; }
    X86_TICK(c, 9);
    // 004a2b  mov dword ptr gs:[ebp + 0x32c], 0x4b50
    X86_AT(c, 0x4a2bu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x32Cu)), 0x4B50u);
    // 004a36  jmp 0x4a43
    X86_AT(c, 0x4a36u);
    goto L_4a43;
L_4a38:
    X86_TICK(c, 2);
    // 004a38  mov dword ptr gs:[ebp + 0x32c], 0x4ae8
    X86_AT(c, 0x4a38u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x32Cu)), 0x4AE8u);
L_4a43:
    X86_TICK(c, 92);
    // 004a43  and bl, 0xe0
    X86_AT(c, 0x4a43u);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v & 0xE0u, 1)); }
    // 004a46  lds esi, fword ptr gs:[ebp + 0x2e8]
    X86_AT(c, 0x4a46u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x2E8u)); uint32_t o = rd32(ea); uint32_t s = rd16(ea + 4); x86_load_seg(c, 3, s); c.r[6] = o; }
    // 004a4d  movzx eax, byte ptr gs:[ebp + 0x2ef]
    X86_AT(c, 0x4a4du);
    c.r[0] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x2EFu)));
    // 004a55  mul byte ptr gs:[ebp + 0x2ee]
    X86_AT(c, 0x4a55u);
    x86_mul(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x2EEu))), 1);
    // 004a5c  add esi, eax
    X86_AT(c, 0x4a5cu);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, c.r[0], 0, 4); }
    // 004a5e  movzx eax, byte ptr gs:[ebp + 0x2ee]
    X86_AT(c, 0x4a5eu);
    c.r[0] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x2EEu)));
    // 004a66  mov eax, dword ptr cs:[eax*8 + 0x4ba8]
    X86_AT(c, 0x4a66u);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 8 + 0x4BA8u)));
    // 004a6e  mov dword ptr gs:[ebp + 0x2f4], eax
    X86_AT(c, 0x4a6eu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2F4u)), c.r[0]);
    // 004a75  movsx eax, dx
    X86_AT(c, 0x4a75u);
    c.r[0] = (uint32_t)(int32_t)(int16_t)(c.r[2] & 0xFFFFu);
    // 004a78  imul eax, dword ptr gs:[ebp + 0x20]
    X86_AT(c, 0x4a78u);
    c.r[0] = x86_imul2(c, c.r[0], rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x20u))), 4);
    // 004a7d  add eax, dword ptr gs:[ebp]
    X86_AT(c, 0x4a7du);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5]))), 0, 4); }
    // 004a81  mov dword ptr gs:[ebp + 0x1cc], eax
    X86_AT(c, 0x4a81u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu)), c.r[0]);
    // 004a88  push eax
    X86_AT(c, 0x4a88u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 004a89  call dword ptr gs:[ebp + 0x32c]
    X86_AT(c, 0x4a89u);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x32Cu))); push32(c, 0x4a90u); x86_call(c, t); X86_RET(c, 0x4a90u); }
    X86_TICK(c, 22);
    // 004a90  pop dword ptr gs:[ebp + 0x1cc]
    X86_AT(c, 0x4a90u);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu)), v); }
    // 004a97  pop dword ptr gs:[ebp + 0x10c]
    X86_AT(c, 0x4a97u);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x10Cu)), v); }
    // 004a9e  pop dword ptr gs:[ebp + 0x104]
    X86_AT(c, 0x4a9eu);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u)), v); }
    // 004aa5  call 0x36e4
    X86_AT(c, 0x4aa5u);
    push32(c, 0x4aaau); f_000036e4(c); X86_RET(c, 0x4aaau);
    X86_TICK(c, 7);
    // 004aaa  call 0x6120
    X86_AT(c, 0x4aaau);
    push32(c, 0x4aafu); f_00006120(c); X86_RET(c, 0x4aafu);
    X86_TICK(c, 32);
    // 004aaf  mov ebx, dword ptr gs:[ebp + 0x2f0]
    X86_AT(c, 0x4aafu);
    c.r[3] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2F0u)));
    // 004ab6  shld edx, ebx, 0x10
    X86_AT(c, 0x4ab6u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_double(c, true, v, c.r[3], 0x10u, 4, w); if (w) c.r[2] = r; }
    // 004aba  and bl, 0xe0
    X86_AT(c, 0x4abau);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v & 0xE0u, 1)); }
    // 004abd  mov esi, dword ptr gs:[ebp + 0x2e8]
    X86_AT(c, 0x4abdu);
    c.r[6] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2E8u)));
    // 004ac4  movzx eax, byte ptr gs:[ebp + 0x2ee]
    X86_AT(c, 0x4ac4u);
    c.r[0] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x2EEu)));
    // 004acc  mov eax, dword ptr cs:[eax*8 + 0x4bac]
    X86_AT(c, 0x4accu);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 8 + 0x4BACu)));
    // 004ad4  mov dword ptr gs:[ebp + 0x2f4], eax
    X86_AT(c, 0x4ad4u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2F4u)), c.r[0]);
    // 004adb  call dword ptr gs:[ebp + 0x32c]
    X86_AT(c, 0x4adbu);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x32Cu))); push32(c, 0x4ae2u); x86_call(c, t); X86_RET(c, 0x4ae2u); }
    X86_TICK(c, 15);
    // 004ae2  pop dword ptr gs:[ebp + 0x10]
    X86_AT(c, 0x4ae2u);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x10u)), v); }
    // 004ae6  ret 
    X86_AT(c, 0x4ae6u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x49deu, "ran off the end of a function");
}
void f_000049e6(X86Cpu& c) {
    X86_TICK(c, 9);
    // 0049e6  mov dword ptr gs:[ebp + 0x10c], 0
    X86_AT(c, 0x49e6u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x10Cu)), 0x0u);
    // 0049f1  call 0x6120
    X86_AT(c, 0x49f1u);
    push32(c, 0x49f6u); f_00006120(c); X86_RET(c, 0x49f6u);
    X86_TICK(c, 17);
    // 0049f6  mov ecx, ebx
    X86_AT(c, 0x49f6u);
    c.r[1] = c.r[3];
    // 0049f8  shld edx, ecx, 0x10
    X86_AT(c, 0x49f8u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_double(c, true, v, c.r[1], 0x10u, 4, w); if (w) c.r[2] = r; }
    // 0049fc  cmp word ptr gs:[ebp + 0x28], cx
    X86_AT(c, 0x49fcu);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x28u))), (c.r[1] & 0xFFFFu), 0, 2);
    // 004a01  jg 0x4a38
    X86_AT(c, 0x4a01u);
    if (x86_cc(c, 15)) { goto L_4a38; }
    X86_TICK(c, 14);
    // 004a03  add cx, 0x20
    X86_AT(c, 0x4a03u);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_add(c, v, 0x20u, 0, 2)); }
    // 004a07  cmp word ptr gs:[ebp + 0x2c], cx
    X86_AT(c, 0x4a07u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu))), (c.r[1] & 0xFFFFu), 0, 2);
    // 004a0c  jl 0x4a38
    X86_AT(c, 0x4a0cu);
    if (x86_cc(c, 12)) { goto L_4a38; }
    X86_TICK(c, 15);
    // 004a0e  shr ecx, 0x10
    X86_AT(c, 0x4a0eu);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[1] = r; }
    // 004a11  cmp word ptr gs:[ebp + 0x2a], cx
    X86_AT(c, 0x4a11u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Au))), (c.r[1] & 0xFFFFu), 0, 2);
    // 004a16  jg 0x4a38
    X86_AT(c, 0x4a16u);
    if (x86_cc(c, 15)) { goto L_4a38; }
    X86_TICK(c, 20);
    // 004a18  movzx ax, byte ptr gs:[ebp + 0x2ef]
    X86_AT(c, 0x4a18u);
    s16(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x2EFu))));
    // 004a21  add cx, ax
    X86_AT(c, 0x4a21u);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 004a24  cmp word ptr gs:[ebp + 0x2e], cx
    X86_AT(c, 0x4a24u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Eu))), (c.r[1] & 0xFFFFu), 0, 2);
    // 004a29  jl 0x4a38
    X86_AT(c, 0x4a29u);
    if (x86_cc(c, 12)) { goto L_4a38; }
    X86_TICK(c, 9);
    // 004a2b  mov dword ptr gs:[ebp + 0x32c], 0x4b50
    X86_AT(c, 0x4a2bu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x32Cu)), 0x4B50u);
    // 004a36  jmp 0x4a43
    X86_AT(c, 0x4a36u);
    goto L_4a43;
L_4a38:
    X86_TICK(c, 2);
    // 004a38  mov dword ptr gs:[ebp + 0x32c], 0x4ae8
    X86_AT(c, 0x4a38u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x32Cu)), 0x4AE8u);
L_4a43:
    X86_TICK(c, 92);
    // 004a43  and bl, 0xe0
    X86_AT(c, 0x4a43u);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v & 0xE0u, 1)); }
    // 004a46  lds esi, fword ptr gs:[ebp + 0x2e8]
    X86_AT(c, 0x4a46u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x2E8u)); uint32_t o = rd32(ea); uint32_t s = rd16(ea + 4); x86_load_seg(c, 3, s); c.r[6] = o; }
    // 004a4d  movzx eax, byte ptr gs:[ebp + 0x2ef]
    X86_AT(c, 0x4a4du);
    c.r[0] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x2EFu)));
    // 004a55  mul byte ptr gs:[ebp + 0x2ee]
    X86_AT(c, 0x4a55u);
    x86_mul(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x2EEu))), 1);
    // 004a5c  add esi, eax
    X86_AT(c, 0x4a5cu);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, c.r[0], 0, 4); }
    // 004a5e  movzx eax, byte ptr gs:[ebp + 0x2ee]
    X86_AT(c, 0x4a5eu);
    c.r[0] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x2EEu)));
    // 004a66  mov eax, dword ptr cs:[eax*8 + 0x4ba8]
    X86_AT(c, 0x4a66u);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 8 + 0x4BA8u)));
    // 004a6e  mov dword ptr gs:[ebp + 0x2f4], eax
    X86_AT(c, 0x4a6eu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2F4u)), c.r[0]);
    // 004a75  movsx eax, dx
    X86_AT(c, 0x4a75u);
    c.r[0] = (uint32_t)(int32_t)(int16_t)(c.r[2] & 0xFFFFu);
    // 004a78  imul eax, dword ptr gs:[ebp + 0x20]
    X86_AT(c, 0x4a78u);
    c.r[0] = x86_imul2(c, c.r[0], rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x20u))), 4);
    // 004a7d  add eax, dword ptr gs:[ebp]
    X86_AT(c, 0x4a7du);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5]))), 0, 4); }
    // 004a81  mov dword ptr gs:[ebp + 0x1cc], eax
    X86_AT(c, 0x4a81u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu)), c.r[0]);
    // 004a88  push eax
    X86_AT(c, 0x4a88u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 004a89  call dword ptr gs:[ebp + 0x32c]
    X86_AT(c, 0x4a89u);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x32Cu))); push32(c, 0x4a90u); x86_call(c, t); X86_RET(c, 0x4a90u); }
    X86_TICK(c, 22);
    // 004a90  pop dword ptr gs:[ebp + 0x1cc]
    X86_AT(c, 0x4a90u);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu)), v); }
    // 004a97  pop dword ptr gs:[ebp + 0x10c]
    X86_AT(c, 0x4a97u);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x10Cu)), v); }
    // 004a9e  pop dword ptr gs:[ebp + 0x104]
    X86_AT(c, 0x4a9eu);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u)), v); }
    // 004aa5  call 0x36e4
    X86_AT(c, 0x4aa5u);
    push32(c, 0x4aaau); f_000036e4(c); X86_RET(c, 0x4aaau);
    X86_TICK(c, 7);
    // 004aaa  call 0x6120
    X86_AT(c, 0x4aaau);
    push32(c, 0x4aafu); f_00006120(c); X86_RET(c, 0x4aafu);
    X86_TICK(c, 32);
    // 004aaf  mov ebx, dword ptr gs:[ebp + 0x2f0]
    X86_AT(c, 0x4aafu);
    c.r[3] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2F0u)));
    // 004ab6  shld edx, ebx, 0x10
    X86_AT(c, 0x4ab6u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_double(c, true, v, c.r[3], 0x10u, 4, w); if (w) c.r[2] = r; }
    // 004aba  and bl, 0xe0
    X86_AT(c, 0x4abau);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v & 0xE0u, 1)); }
    // 004abd  mov esi, dword ptr gs:[ebp + 0x2e8]
    X86_AT(c, 0x4abdu);
    c.r[6] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2E8u)));
    // 004ac4  movzx eax, byte ptr gs:[ebp + 0x2ee]
    X86_AT(c, 0x4ac4u);
    c.r[0] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x2EEu)));
    // 004acc  mov eax, dword ptr cs:[eax*8 + 0x4bac]
    X86_AT(c, 0x4accu);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 8 + 0x4BACu)));
    // 004ad4  mov dword ptr gs:[ebp + 0x2f4], eax
    X86_AT(c, 0x4ad4u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2F4u)), c.r[0]);
    // 004adb  call dword ptr gs:[ebp + 0x32c]
    X86_AT(c, 0x4adbu);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x32Cu))); push32(c, 0x4ae2u); x86_call(c, t); X86_RET(c, 0x4ae2u); }
    X86_TICK(c, 15);
    // 004ae2  pop dword ptr gs:[ebp + 0x10]
    X86_AT(c, 0x4ae2u);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x10u)), v); }
    // 004ae6  ret 
    X86_AT(c, 0x4ae6u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x49e6u, "ran off the end of a function");
}
void f_000049f1(X86Cpu& c) {
    X86_TICK(c, 7);
    // 0049f1  call 0x6120
    X86_AT(c, 0x49f1u);
    push32(c, 0x49f6u); f_00006120(c); X86_RET(c, 0x49f6u);
    X86_TICK(c, 17);
    // 0049f6  mov ecx, ebx
    X86_AT(c, 0x49f6u);
    c.r[1] = c.r[3];
    // 0049f8  shld edx, ecx, 0x10
    X86_AT(c, 0x49f8u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_double(c, true, v, c.r[1], 0x10u, 4, w); if (w) c.r[2] = r; }
    // 0049fc  cmp word ptr gs:[ebp + 0x28], cx
    X86_AT(c, 0x49fcu);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x28u))), (c.r[1] & 0xFFFFu), 0, 2);
    // 004a01  jg 0x4a38
    X86_AT(c, 0x4a01u);
    if (x86_cc(c, 15)) { goto L_4a38; }
    X86_TICK(c, 14);
    // 004a03  add cx, 0x20
    X86_AT(c, 0x4a03u);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_add(c, v, 0x20u, 0, 2)); }
    // 004a07  cmp word ptr gs:[ebp + 0x2c], cx
    X86_AT(c, 0x4a07u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu))), (c.r[1] & 0xFFFFu), 0, 2);
    // 004a0c  jl 0x4a38
    X86_AT(c, 0x4a0cu);
    if (x86_cc(c, 12)) { goto L_4a38; }
    X86_TICK(c, 15);
    // 004a0e  shr ecx, 0x10
    X86_AT(c, 0x4a0eu);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[1] = r; }
    // 004a11  cmp word ptr gs:[ebp + 0x2a], cx
    X86_AT(c, 0x4a11u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Au))), (c.r[1] & 0xFFFFu), 0, 2);
    // 004a16  jg 0x4a38
    X86_AT(c, 0x4a16u);
    if (x86_cc(c, 15)) { goto L_4a38; }
    X86_TICK(c, 20);
    // 004a18  movzx ax, byte ptr gs:[ebp + 0x2ef]
    X86_AT(c, 0x4a18u);
    s16(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x2EFu))));
    // 004a21  add cx, ax
    X86_AT(c, 0x4a21u);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 004a24  cmp word ptr gs:[ebp + 0x2e], cx
    X86_AT(c, 0x4a24u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Eu))), (c.r[1] & 0xFFFFu), 0, 2);
    // 004a29  jl 0x4a38
    X86_AT(c, 0x4a29u);
    if (x86_cc(c, 12)) { goto L_4a38; }
    X86_TICK(c, 9);
    // 004a2b  mov dword ptr gs:[ebp + 0x32c], 0x4b50
    X86_AT(c, 0x4a2bu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x32Cu)), 0x4B50u);
    // 004a36  jmp 0x4a43
    X86_AT(c, 0x4a36u);
    goto L_4a43;
L_4a38:
    X86_TICK(c, 2);
    // 004a38  mov dword ptr gs:[ebp + 0x32c], 0x4ae8
    X86_AT(c, 0x4a38u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x32Cu)), 0x4AE8u);
L_4a43:
    X86_TICK(c, 92);
    // 004a43  and bl, 0xe0
    X86_AT(c, 0x4a43u);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v & 0xE0u, 1)); }
    // 004a46  lds esi, fword ptr gs:[ebp + 0x2e8]
    X86_AT(c, 0x4a46u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x2E8u)); uint32_t o = rd32(ea); uint32_t s = rd16(ea + 4); x86_load_seg(c, 3, s); c.r[6] = o; }
    // 004a4d  movzx eax, byte ptr gs:[ebp + 0x2ef]
    X86_AT(c, 0x4a4du);
    c.r[0] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x2EFu)));
    // 004a55  mul byte ptr gs:[ebp + 0x2ee]
    X86_AT(c, 0x4a55u);
    x86_mul(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x2EEu))), 1);
    // 004a5c  add esi, eax
    X86_AT(c, 0x4a5cu);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, c.r[0], 0, 4); }
    // 004a5e  movzx eax, byte ptr gs:[ebp + 0x2ee]
    X86_AT(c, 0x4a5eu);
    c.r[0] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x2EEu)));
    // 004a66  mov eax, dword ptr cs:[eax*8 + 0x4ba8]
    X86_AT(c, 0x4a66u);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 8 + 0x4BA8u)));
    // 004a6e  mov dword ptr gs:[ebp + 0x2f4], eax
    X86_AT(c, 0x4a6eu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2F4u)), c.r[0]);
    // 004a75  movsx eax, dx
    X86_AT(c, 0x4a75u);
    c.r[0] = (uint32_t)(int32_t)(int16_t)(c.r[2] & 0xFFFFu);
    // 004a78  imul eax, dword ptr gs:[ebp + 0x20]
    X86_AT(c, 0x4a78u);
    c.r[0] = x86_imul2(c, c.r[0], rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x20u))), 4);
    // 004a7d  add eax, dword ptr gs:[ebp]
    X86_AT(c, 0x4a7du);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5]))), 0, 4); }
    // 004a81  mov dword ptr gs:[ebp + 0x1cc], eax
    X86_AT(c, 0x4a81u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu)), c.r[0]);
    // 004a88  push eax
    X86_AT(c, 0x4a88u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 004a89  call dword ptr gs:[ebp + 0x32c]
    X86_AT(c, 0x4a89u);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x32Cu))); push32(c, 0x4a90u); x86_call(c, t); X86_RET(c, 0x4a90u); }
    X86_TICK(c, 22);
    // 004a90  pop dword ptr gs:[ebp + 0x1cc]
    X86_AT(c, 0x4a90u);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu)), v); }
    // 004a97  pop dword ptr gs:[ebp + 0x10c]
    X86_AT(c, 0x4a97u);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x10Cu)), v); }
    // 004a9e  pop dword ptr gs:[ebp + 0x104]
    X86_AT(c, 0x4a9eu);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u)), v); }
    // 004aa5  call 0x36e4
    X86_AT(c, 0x4aa5u);
    push32(c, 0x4aaau); f_000036e4(c); X86_RET(c, 0x4aaau);
    X86_TICK(c, 7);
    // 004aaa  call 0x6120
    X86_AT(c, 0x4aaau);
    push32(c, 0x4aafu); f_00006120(c); X86_RET(c, 0x4aafu);
    X86_TICK(c, 32);
    // 004aaf  mov ebx, dword ptr gs:[ebp + 0x2f0]
    X86_AT(c, 0x4aafu);
    c.r[3] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2F0u)));
    // 004ab6  shld edx, ebx, 0x10
    X86_AT(c, 0x4ab6u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_double(c, true, v, c.r[3], 0x10u, 4, w); if (w) c.r[2] = r; }
    // 004aba  and bl, 0xe0
    X86_AT(c, 0x4abau);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v & 0xE0u, 1)); }
    // 004abd  mov esi, dword ptr gs:[ebp + 0x2e8]
    X86_AT(c, 0x4abdu);
    c.r[6] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2E8u)));
    // 004ac4  movzx eax, byte ptr gs:[ebp + 0x2ee]
    X86_AT(c, 0x4ac4u);
    c.r[0] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x2EEu)));
    // 004acc  mov eax, dword ptr cs:[eax*8 + 0x4bac]
    X86_AT(c, 0x4accu);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 8 + 0x4BACu)));
    // 004ad4  mov dword ptr gs:[ebp + 0x2f4], eax
    X86_AT(c, 0x4ad4u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2F4u)), c.r[0]);
    // 004adb  call dword ptr gs:[ebp + 0x32c]
    X86_AT(c, 0x4adbu);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x32Cu))); push32(c, 0x4ae2u); x86_call(c, t); X86_RET(c, 0x4ae2u); }
    X86_TICK(c, 15);
    // 004ae2  pop dword ptr gs:[ebp + 0x10]
    X86_AT(c, 0x4ae2u);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x10u)), v); }
    // 004ae6  ret 
    X86_AT(c, 0x4ae6u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x49f1u, "ran off the end of a function");
}
void f_000049f6(X86Cpu& c) {
    X86_TICK(c, 17);
    // 0049f6  mov ecx, ebx
    X86_AT(c, 0x49f6u);
    c.r[1] = c.r[3];
    // 0049f8  shld edx, ecx, 0x10
    X86_AT(c, 0x49f8u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_double(c, true, v, c.r[1], 0x10u, 4, w); if (w) c.r[2] = r; }
    // 0049fc  cmp word ptr gs:[ebp + 0x28], cx
    X86_AT(c, 0x49fcu);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x28u))), (c.r[1] & 0xFFFFu), 0, 2);
    // 004a01  jg 0x4a38
    X86_AT(c, 0x4a01u);
    if (x86_cc(c, 15)) { goto L_4a38; }
    X86_TICK(c, 14);
    // 004a03  add cx, 0x20
    X86_AT(c, 0x4a03u);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_add(c, v, 0x20u, 0, 2)); }
    // 004a07  cmp word ptr gs:[ebp + 0x2c], cx
    X86_AT(c, 0x4a07u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu))), (c.r[1] & 0xFFFFu), 0, 2);
    // 004a0c  jl 0x4a38
    X86_AT(c, 0x4a0cu);
    if (x86_cc(c, 12)) { goto L_4a38; }
    X86_TICK(c, 15);
    // 004a0e  shr ecx, 0x10
    X86_AT(c, 0x4a0eu);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[1] = r; }
    // 004a11  cmp word ptr gs:[ebp + 0x2a], cx
    X86_AT(c, 0x4a11u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Au))), (c.r[1] & 0xFFFFu), 0, 2);
    // 004a16  jg 0x4a38
    X86_AT(c, 0x4a16u);
    if (x86_cc(c, 15)) { goto L_4a38; }
    X86_TICK(c, 20);
    // 004a18  movzx ax, byte ptr gs:[ebp + 0x2ef]
    X86_AT(c, 0x4a18u);
    s16(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x2EFu))));
    // 004a21  add cx, ax
    X86_AT(c, 0x4a21u);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 004a24  cmp word ptr gs:[ebp + 0x2e], cx
    X86_AT(c, 0x4a24u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Eu))), (c.r[1] & 0xFFFFu), 0, 2);
    // 004a29  jl 0x4a38
    X86_AT(c, 0x4a29u);
    if (x86_cc(c, 12)) { goto L_4a38; }
    X86_TICK(c, 9);
    // 004a2b  mov dword ptr gs:[ebp + 0x32c], 0x4b50
    X86_AT(c, 0x4a2bu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x32Cu)), 0x4B50u);
    // 004a36  jmp 0x4a43
    X86_AT(c, 0x4a36u);
    goto L_4a43;
L_4a38:
    X86_TICK(c, 2);
    // 004a38  mov dword ptr gs:[ebp + 0x32c], 0x4ae8
    X86_AT(c, 0x4a38u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x32Cu)), 0x4AE8u);
L_4a43:
    X86_TICK(c, 92);
    // 004a43  and bl, 0xe0
    X86_AT(c, 0x4a43u);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v & 0xE0u, 1)); }
    // 004a46  lds esi, fword ptr gs:[ebp + 0x2e8]
    X86_AT(c, 0x4a46u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x2E8u)); uint32_t o = rd32(ea); uint32_t s = rd16(ea + 4); x86_load_seg(c, 3, s); c.r[6] = o; }
    // 004a4d  movzx eax, byte ptr gs:[ebp + 0x2ef]
    X86_AT(c, 0x4a4du);
    c.r[0] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x2EFu)));
    // 004a55  mul byte ptr gs:[ebp + 0x2ee]
    X86_AT(c, 0x4a55u);
    x86_mul(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x2EEu))), 1);
    // 004a5c  add esi, eax
    X86_AT(c, 0x4a5cu);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, c.r[0], 0, 4); }
    // 004a5e  movzx eax, byte ptr gs:[ebp + 0x2ee]
    X86_AT(c, 0x4a5eu);
    c.r[0] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x2EEu)));
    // 004a66  mov eax, dword ptr cs:[eax*8 + 0x4ba8]
    X86_AT(c, 0x4a66u);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 8 + 0x4BA8u)));
    // 004a6e  mov dword ptr gs:[ebp + 0x2f4], eax
    X86_AT(c, 0x4a6eu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2F4u)), c.r[0]);
    // 004a75  movsx eax, dx
    X86_AT(c, 0x4a75u);
    c.r[0] = (uint32_t)(int32_t)(int16_t)(c.r[2] & 0xFFFFu);
    // 004a78  imul eax, dword ptr gs:[ebp + 0x20]
    X86_AT(c, 0x4a78u);
    c.r[0] = x86_imul2(c, c.r[0], rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x20u))), 4);
    // 004a7d  add eax, dword ptr gs:[ebp]
    X86_AT(c, 0x4a7du);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5]))), 0, 4); }
    // 004a81  mov dword ptr gs:[ebp + 0x1cc], eax
    X86_AT(c, 0x4a81u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu)), c.r[0]);
    // 004a88  push eax
    X86_AT(c, 0x4a88u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 004a89  call dword ptr gs:[ebp + 0x32c]
    X86_AT(c, 0x4a89u);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x32Cu))); push32(c, 0x4a90u); x86_call(c, t); X86_RET(c, 0x4a90u); }
    X86_TICK(c, 22);
    // 004a90  pop dword ptr gs:[ebp + 0x1cc]
    X86_AT(c, 0x4a90u);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu)), v); }
    // 004a97  pop dword ptr gs:[ebp + 0x10c]
    X86_AT(c, 0x4a97u);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x10Cu)), v); }
    // 004a9e  pop dword ptr gs:[ebp + 0x104]
    X86_AT(c, 0x4a9eu);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u)), v); }
    // 004aa5  call 0x36e4
    X86_AT(c, 0x4aa5u);
    push32(c, 0x4aaau); f_000036e4(c); X86_RET(c, 0x4aaau);
    X86_TICK(c, 7);
    // 004aaa  call 0x6120
    X86_AT(c, 0x4aaau);
    push32(c, 0x4aafu); f_00006120(c); X86_RET(c, 0x4aafu);
    X86_TICK(c, 32);
    // 004aaf  mov ebx, dword ptr gs:[ebp + 0x2f0]
    X86_AT(c, 0x4aafu);
    c.r[3] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2F0u)));
    // 004ab6  shld edx, ebx, 0x10
    X86_AT(c, 0x4ab6u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_double(c, true, v, c.r[3], 0x10u, 4, w); if (w) c.r[2] = r; }
    // 004aba  and bl, 0xe0
    X86_AT(c, 0x4abau);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v & 0xE0u, 1)); }
    // 004abd  mov esi, dword ptr gs:[ebp + 0x2e8]
    X86_AT(c, 0x4abdu);
    c.r[6] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2E8u)));
    // 004ac4  movzx eax, byte ptr gs:[ebp + 0x2ee]
    X86_AT(c, 0x4ac4u);
    c.r[0] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x2EEu)));
    // 004acc  mov eax, dword ptr cs:[eax*8 + 0x4bac]
    X86_AT(c, 0x4accu);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 8 + 0x4BACu)));
    // 004ad4  mov dword ptr gs:[ebp + 0x2f4], eax
    X86_AT(c, 0x4ad4u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2F4u)), c.r[0]);
    // 004adb  call dword ptr gs:[ebp + 0x32c]
    X86_AT(c, 0x4adbu);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x32Cu))); push32(c, 0x4ae2u); x86_call(c, t); X86_RET(c, 0x4ae2u); }
    X86_TICK(c, 15);
    // 004ae2  pop dword ptr gs:[ebp + 0x10]
    X86_AT(c, 0x4ae2u);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x10u)), v); }
    // 004ae6  ret 
    X86_AT(c, 0x4ae6u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x49f6u, "ran off the end of a function");
}
void f_000049f8(X86Cpu& c) {
    X86_TICK(c, 15);
    // 0049f8  shld edx, ecx, 0x10
    X86_AT(c, 0x49f8u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_double(c, true, v, c.r[1], 0x10u, 4, w); if (w) c.r[2] = r; }
    // 0049fc  cmp word ptr gs:[ebp + 0x28], cx
    X86_AT(c, 0x49fcu);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x28u))), (c.r[1] & 0xFFFFu), 0, 2);
    // 004a01  jg 0x4a38
    X86_AT(c, 0x4a01u);
    if (x86_cc(c, 15)) { goto L_4a38; }
    X86_TICK(c, 14);
    // 004a03  add cx, 0x20
    X86_AT(c, 0x4a03u);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_add(c, v, 0x20u, 0, 2)); }
    // 004a07  cmp word ptr gs:[ebp + 0x2c], cx
    X86_AT(c, 0x4a07u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu))), (c.r[1] & 0xFFFFu), 0, 2);
    // 004a0c  jl 0x4a38
    X86_AT(c, 0x4a0cu);
    if (x86_cc(c, 12)) { goto L_4a38; }
    X86_TICK(c, 15);
    // 004a0e  shr ecx, 0x10
    X86_AT(c, 0x4a0eu);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[1] = r; }
    // 004a11  cmp word ptr gs:[ebp + 0x2a], cx
    X86_AT(c, 0x4a11u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Au))), (c.r[1] & 0xFFFFu), 0, 2);
    // 004a16  jg 0x4a38
    X86_AT(c, 0x4a16u);
    if (x86_cc(c, 15)) { goto L_4a38; }
    X86_TICK(c, 20);
    // 004a18  movzx ax, byte ptr gs:[ebp + 0x2ef]
    X86_AT(c, 0x4a18u);
    s16(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x2EFu))));
    // 004a21  add cx, ax
    X86_AT(c, 0x4a21u);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 004a24  cmp word ptr gs:[ebp + 0x2e], cx
    X86_AT(c, 0x4a24u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Eu))), (c.r[1] & 0xFFFFu), 0, 2);
    // 004a29  jl 0x4a38
    X86_AT(c, 0x4a29u);
    if (x86_cc(c, 12)) { goto L_4a38; }
    X86_TICK(c, 9);
    // 004a2b  mov dword ptr gs:[ebp + 0x32c], 0x4b50
    X86_AT(c, 0x4a2bu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x32Cu)), 0x4B50u);
    // 004a36  jmp 0x4a43
    X86_AT(c, 0x4a36u);
    goto L_4a43;
L_4a38:
    X86_TICK(c, 2);
    // 004a38  mov dword ptr gs:[ebp + 0x32c], 0x4ae8
    X86_AT(c, 0x4a38u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x32Cu)), 0x4AE8u);
L_4a43:
    X86_TICK(c, 92);
    // 004a43  and bl, 0xe0
    X86_AT(c, 0x4a43u);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v & 0xE0u, 1)); }
    // 004a46  lds esi, fword ptr gs:[ebp + 0x2e8]
    X86_AT(c, 0x4a46u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x2E8u)); uint32_t o = rd32(ea); uint32_t s = rd16(ea + 4); x86_load_seg(c, 3, s); c.r[6] = o; }
    // 004a4d  movzx eax, byte ptr gs:[ebp + 0x2ef]
    X86_AT(c, 0x4a4du);
    c.r[0] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x2EFu)));
    // 004a55  mul byte ptr gs:[ebp + 0x2ee]
    X86_AT(c, 0x4a55u);
    x86_mul(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x2EEu))), 1);
    // 004a5c  add esi, eax
    X86_AT(c, 0x4a5cu);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, c.r[0], 0, 4); }
    // 004a5e  movzx eax, byte ptr gs:[ebp + 0x2ee]
    X86_AT(c, 0x4a5eu);
    c.r[0] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x2EEu)));
    // 004a66  mov eax, dword ptr cs:[eax*8 + 0x4ba8]
    X86_AT(c, 0x4a66u);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 8 + 0x4BA8u)));
    // 004a6e  mov dword ptr gs:[ebp + 0x2f4], eax
    X86_AT(c, 0x4a6eu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2F4u)), c.r[0]);
    // 004a75  movsx eax, dx
    X86_AT(c, 0x4a75u);
    c.r[0] = (uint32_t)(int32_t)(int16_t)(c.r[2] & 0xFFFFu);
    // 004a78  imul eax, dword ptr gs:[ebp + 0x20]
    X86_AT(c, 0x4a78u);
    c.r[0] = x86_imul2(c, c.r[0], rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x20u))), 4);
    // 004a7d  add eax, dword ptr gs:[ebp]
    X86_AT(c, 0x4a7du);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5]))), 0, 4); }
    // 004a81  mov dword ptr gs:[ebp + 0x1cc], eax
    X86_AT(c, 0x4a81u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu)), c.r[0]);
    // 004a88  push eax
    X86_AT(c, 0x4a88u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 004a89  call dword ptr gs:[ebp + 0x32c]
    X86_AT(c, 0x4a89u);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x32Cu))); push32(c, 0x4a90u); x86_call(c, t); X86_RET(c, 0x4a90u); }
    X86_TICK(c, 22);
    // 004a90  pop dword ptr gs:[ebp + 0x1cc]
    X86_AT(c, 0x4a90u);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu)), v); }
    // 004a97  pop dword ptr gs:[ebp + 0x10c]
    X86_AT(c, 0x4a97u);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x10Cu)), v); }
    // 004a9e  pop dword ptr gs:[ebp + 0x104]
    X86_AT(c, 0x4a9eu);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u)), v); }
    // 004aa5  call 0x36e4
    X86_AT(c, 0x4aa5u);
    push32(c, 0x4aaau); f_000036e4(c); X86_RET(c, 0x4aaau);
    X86_TICK(c, 7);
    // 004aaa  call 0x6120
    X86_AT(c, 0x4aaau);
    push32(c, 0x4aafu); f_00006120(c); X86_RET(c, 0x4aafu);
    X86_TICK(c, 32);
    // 004aaf  mov ebx, dword ptr gs:[ebp + 0x2f0]
    X86_AT(c, 0x4aafu);
    c.r[3] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2F0u)));
    // 004ab6  shld edx, ebx, 0x10
    X86_AT(c, 0x4ab6u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_double(c, true, v, c.r[3], 0x10u, 4, w); if (w) c.r[2] = r; }
    // 004aba  and bl, 0xe0
    X86_AT(c, 0x4abau);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v & 0xE0u, 1)); }
    // 004abd  mov esi, dword ptr gs:[ebp + 0x2e8]
    X86_AT(c, 0x4abdu);
    c.r[6] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2E8u)));
    // 004ac4  movzx eax, byte ptr gs:[ebp + 0x2ee]
    X86_AT(c, 0x4ac4u);
    c.r[0] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x2EEu)));
    // 004acc  mov eax, dword ptr cs:[eax*8 + 0x4bac]
    X86_AT(c, 0x4accu);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 8 + 0x4BACu)));
    // 004ad4  mov dword ptr gs:[ebp + 0x2f4], eax
    X86_AT(c, 0x4ad4u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2F4u)), c.r[0]);
    // 004adb  call dword ptr gs:[ebp + 0x32c]
    X86_AT(c, 0x4adbu);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x32Cu))); push32(c, 0x4ae2u); x86_call(c, t); X86_RET(c, 0x4ae2u); }
    X86_TICK(c, 15);
    // 004ae2  pop dword ptr gs:[ebp + 0x10]
    X86_AT(c, 0x4ae2u);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x10u)), v); }
    // 004ae6  ret 
    X86_AT(c, 0x4ae6u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x49f8u, "ran off the end of a function");
}
void f_000049fc(X86Cpu& c) {
    X86_TICK(c, 12);
    // 0049fc  cmp word ptr gs:[ebp + 0x28], cx
    X86_AT(c, 0x49fcu);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x28u))), (c.r[1] & 0xFFFFu), 0, 2);
    // 004a01  jg 0x4a38
    X86_AT(c, 0x4a01u);
    if (x86_cc(c, 15)) { goto L_4a38; }
    X86_TICK(c, 14);
    // 004a03  add cx, 0x20
    X86_AT(c, 0x4a03u);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_add(c, v, 0x20u, 0, 2)); }
    // 004a07  cmp word ptr gs:[ebp + 0x2c], cx
    X86_AT(c, 0x4a07u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu))), (c.r[1] & 0xFFFFu), 0, 2);
    // 004a0c  jl 0x4a38
    X86_AT(c, 0x4a0cu);
    if (x86_cc(c, 12)) { goto L_4a38; }
    X86_TICK(c, 15);
    // 004a0e  shr ecx, 0x10
    X86_AT(c, 0x4a0eu);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[1] = r; }
    // 004a11  cmp word ptr gs:[ebp + 0x2a], cx
    X86_AT(c, 0x4a11u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Au))), (c.r[1] & 0xFFFFu), 0, 2);
    // 004a16  jg 0x4a38
    X86_AT(c, 0x4a16u);
    if (x86_cc(c, 15)) { goto L_4a38; }
    X86_TICK(c, 20);
    // 004a18  movzx ax, byte ptr gs:[ebp + 0x2ef]
    X86_AT(c, 0x4a18u);
    s16(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x2EFu))));
    // 004a21  add cx, ax
    X86_AT(c, 0x4a21u);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 004a24  cmp word ptr gs:[ebp + 0x2e], cx
    X86_AT(c, 0x4a24u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Eu))), (c.r[1] & 0xFFFFu), 0, 2);
    // 004a29  jl 0x4a38
    X86_AT(c, 0x4a29u);
    if (x86_cc(c, 12)) { goto L_4a38; }
    X86_TICK(c, 9);
    // 004a2b  mov dword ptr gs:[ebp + 0x32c], 0x4b50
    X86_AT(c, 0x4a2bu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x32Cu)), 0x4B50u);
    // 004a36  jmp 0x4a43
    X86_AT(c, 0x4a36u);
    goto L_4a43;
L_4a38:
    X86_TICK(c, 2);
    // 004a38  mov dword ptr gs:[ebp + 0x32c], 0x4ae8
    X86_AT(c, 0x4a38u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x32Cu)), 0x4AE8u);
L_4a43:
    X86_TICK(c, 92);
    // 004a43  and bl, 0xe0
    X86_AT(c, 0x4a43u);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v & 0xE0u, 1)); }
    // 004a46  lds esi, fword ptr gs:[ebp + 0x2e8]
    X86_AT(c, 0x4a46u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x2E8u)); uint32_t o = rd32(ea); uint32_t s = rd16(ea + 4); x86_load_seg(c, 3, s); c.r[6] = o; }
    // 004a4d  movzx eax, byte ptr gs:[ebp + 0x2ef]
    X86_AT(c, 0x4a4du);
    c.r[0] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x2EFu)));
    // 004a55  mul byte ptr gs:[ebp + 0x2ee]
    X86_AT(c, 0x4a55u);
    x86_mul(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x2EEu))), 1);
    // 004a5c  add esi, eax
    X86_AT(c, 0x4a5cu);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, c.r[0], 0, 4); }
    // 004a5e  movzx eax, byte ptr gs:[ebp + 0x2ee]
    X86_AT(c, 0x4a5eu);
    c.r[0] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x2EEu)));
    // 004a66  mov eax, dword ptr cs:[eax*8 + 0x4ba8]
    X86_AT(c, 0x4a66u);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 8 + 0x4BA8u)));
    // 004a6e  mov dword ptr gs:[ebp + 0x2f4], eax
    X86_AT(c, 0x4a6eu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2F4u)), c.r[0]);
    // 004a75  movsx eax, dx
    X86_AT(c, 0x4a75u);
    c.r[0] = (uint32_t)(int32_t)(int16_t)(c.r[2] & 0xFFFFu);
    // 004a78  imul eax, dword ptr gs:[ebp + 0x20]
    X86_AT(c, 0x4a78u);
    c.r[0] = x86_imul2(c, c.r[0], rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x20u))), 4);
    // 004a7d  add eax, dword ptr gs:[ebp]
    X86_AT(c, 0x4a7du);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5]))), 0, 4); }
    // 004a81  mov dword ptr gs:[ebp + 0x1cc], eax
    X86_AT(c, 0x4a81u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu)), c.r[0]);
    // 004a88  push eax
    X86_AT(c, 0x4a88u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 004a89  call dword ptr gs:[ebp + 0x32c]
    X86_AT(c, 0x4a89u);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x32Cu))); push32(c, 0x4a90u); x86_call(c, t); X86_RET(c, 0x4a90u); }
    X86_TICK(c, 22);
    // 004a90  pop dword ptr gs:[ebp + 0x1cc]
    X86_AT(c, 0x4a90u);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu)), v); }
    // 004a97  pop dword ptr gs:[ebp + 0x10c]
    X86_AT(c, 0x4a97u);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x10Cu)), v); }
    // 004a9e  pop dword ptr gs:[ebp + 0x104]
    X86_AT(c, 0x4a9eu);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u)), v); }
    // 004aa5  call 0x36e4
    X86_AT(c, 0x4aa5u);
    push32(c, 0x4aaau); f_000036e4(c); X86_RET(c, 0x4aaau);
    X86_TICK(c, 7);
    // 004aaa  call 0x6120
    X86_AT(c, 0x4aaau);
    push32(c, 0x4aafu); f_00006120(c); X86_RET(c, 0x4aafu);
    X86_TICK(c, 32);
    // 004aaf  mov ebx, dword ptr gs:[ebp + 0x2f0]
    X86_AT(c, 0x4aafu);
    c.r[3] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2F0u)));
    // 004ab6  shld edx, ebx, 0x10
    X86_AT(c, 0x4ab6u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_double(c, true, v, c.r[3], 0x10u, 4, w); if (w) c.r[2] = r; }
    // 004aba  and bl, 0xe0
    X86_AT(c, 0x4abau);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v & 0xE0u, 1)); }
    // 004abd  mov esi, dword ptr gs:[ebp + 0x2e8]
    X86_AT(c, 0x4abdu);
    c.r[6] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2E8u)));
    // 004ac4  movzx eax, byte ptr gs:[ebp + 0x2ee]
    X86_AT(c, 0x4ac4u);
    c.r[0] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x2EEu)));
    // 004acc  mov eax, dword ptr cs:[eax*8 + 0x4bac]
    X86_AT(c, 0x4accu);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 8 + 0x4BACu)));
    // 004ad4  mov dword ptr gs:[ebp + 0x2f4], eax
    X86_AT(c, 0x4ad4u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2F4u)), c.r[0]);
    // 004adb  call dword ptr gs:[ebp + 0x32c]
    X86_AT(c, 0x4adbu);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x32Cu))); push32(c, 0x4ae2u); x86_call(c, t); X86_RET(c, 0x4ae2u); }
    X86_TICK(c, 15);
    // 004ae2  pop dword ptr gs:[ebp + 0x10]
    X86_AT(c, 0x4ae2u);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x10u)), v); }
    // 004ae6  ret 
    X86_AT(c, 0x4ae6u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x49fcu, "ran off the end of a function");
}
void f_00004a01(X86Cpu& c) {
    X86_TICK(c, 5);
    // 004a01  jg 0x4a38
    X86_AT(c, 0x4a01u);
    if (x86_cc(c, 15)) { goto L_4a38; }
    X86_TICK(c, 14);
    // 004a03  add cx, 0x20
    X86_AT(c, 0x4a03u);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_add(c, v, 0x20u, 0, 2)); }
    // 004a07  cmp word ptr gs:[ebp + 0x2c], cx
    X86_AT(c, 0x4a07u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu))), (c.r[1] & 0xFFFFu), 0, 2);
    // 004a0c  jl 0x4a38
    X86_AT(c, 0x4a0cu);
    if (x86_cc(c, 12)) { goto L_4a38; }
    X86_TICK(c, 15);
    // 004a0e  shr ecx, 0x10
    X86_AT(c, 0x4a0eu);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[1] = r; }
    // 004a11  cmp word ptr gs:[ebp + 0x2a], cx
    X86_AT(c, 0x4a11u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Au))), (c.r[1] & 0xFFFFu), 0, 2);
    // 004a16  jg 0x4a38
    X86_AT(c, 0x4a16u);
    if (x86_cc(c, 15)) { goto L_4a38; }
    X86_TICK(c, 20);
    // 004a18  movzx ax, byte ptr gs:[ebp + 0x2ef]
    X86_AT(c, 0x4a18u);
    s16(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x2EFu))));
    // 004a21  add cx, ax
    X86_AT(c, 0x4a21u);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 004a24  cmp word ptr gs:[ebp + 0x2e], cx
    X86_AT(c, 0x4a24u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Eu))), (c.r[1] & 0xFFFFu), 0, 2);
    // 004a29  jl 0x4a38
    X86_AT(c, 0x4a29u);
    if (x86_cc(c, 12)) { goto L_4a38; }
    X86_TICK(c, 9);
    // 004a2b  mov dword ptr gs:[ebp + 0x32c], 0x4b50
    X86_AT(c, 0x4a2bu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x32Cu)), 0x4B50u);
    // 004a36  jmp 0x4a43
    X86_AT(c, 0x4a36u);
    goto L_4a43;
L_4a38:
    X86_TICK(c, 2);
    // 004a38  mov dword ptr gs:[ebp + 0x32c], 0x4ae8
    X86_AT(c, 0x4a38u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x32Cu)), 0x4AE8u);
L_4a43:
    X86_TICK(c, 92);
    // 004a43  and bl, 0xe0
    X86_AT(c, 0x4a43u);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v & 0xE0u, 1)); }
    // 004a46  lds esi, fword ptr gs:[ebp + 0x2e8]
    X86_AT(c, 0x4a46u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x2E8u)); uint32_t o = rd32(ea); uint32_t s = rd16(ea + 4); x86_load_seg(c, 3, s); c.r[6] = o; }
    // 004a4d  movzx eax, byte ptr gs:[ebp + 0x2ef]
    X86_AT(c, 0x4a4du);
    c.r[0] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x2EFu)));
    // 004a55  mul byte ptr gs:[ebp + 0x2ee]
    X86_AT(c, 0x4a55u);
    x86_mul(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x2EEu))), 1);
    // 004a5c  add esi, eax
    X86_AT(c, 0x4a5cu);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, c.r[0], 0, 4); }
    // 004a5e  movzx eax, byte ptr gs:[ebp + 0x2ee]
    X86_AT(c, 0x4a5eu);
    c.r[0] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x2EEu)));
    // 004a66  mov eax, dword ptr cs:[eax*8 + 0x4ba8]
    X86_AT(c, 0x4a66u);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 8 + 0x4BA8u)));
    // 004a6e  mov dword ptr gs:[ebp + 0x2f4], eax
    X86_AT(c, 0x4a6eu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2F4u)), c.r[0]);
    // 004a75  movsx eax, dx
    X86_AT(c, 0x4a75u);
    c.r[0] = (uint32_t)(int32_t)(int16_t)(c.r[2] & 0xFFFFu);
    // 004a78  imul eax, dword ptr gs:[ebp + 0x20]
    X86_AT(c, 0x4a78u);
    c.r[0] = x86_imul2(c, c.r[0], rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x20u))), 4);
    // 004a7d  add eax, dword ptr gs:[ebp]
    X86_AT(c, 0x4a7du);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5]))), 0, 4); }
    // 004a81  mov dword ptr gs:[ebp + 0x1cc], eax
    X86_AT(c, 0x4a81u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu)), c.r[0]);
    // 004a88  push eax
    X86_AT(c, 0x4a88u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 004a89  call dword ptr gs:[ebp + 0x32c]
    X86_AT(c, 0x4a89u);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x32Cu))); push32(c, 0x4a90u); x86_call(c, t); X86_RET(c, 0x4a90u); }
    X86_TICK(c, 22);
    // 004a90  pop dword ptr gs:[ebp + 0x1cc]
    X86_AT(c, 0x4a90u);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu)), v); }
    // 004a97  pop dword ptr gs:[ebp + 0x10c]
    X86_AT(c, 0x4a97u);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x10Cu)), v); }
    // 004a9e  pop dword ptr gs:[ebp + 0x104]
    X86_AT(c, 0x4a9eu);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u)), v); }
    // 004aa5  call 0x36e4
    X86_AT(c, 0x4aa5u);
    push32(c, 0x4aaau); f_000036e4(c); X86_RET(c, 0x4aaau);
    X86_TICK(c, 7);
    // 004aaa  call 0x6120
    X86_AT(c, 0x4aaau);
    push32(c, 0x4aafu); f_00006120(c); X86_RET(c, 0x4aafu);
    X86_TICK(c, 32);
    // 004aaf  mov ebx, dword ptr gs:[ebp + 0x2f0]
    X86_AT(c, 0x4aafu);
    c.r[3] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2F0u)));
    // 004ab6  shld edx, ebx, 0x10
    X86_AT(c, 0x4ab6u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_double(c, true, v, c.r[3], 0x10u, 4, w); if (w) c.r[2] = r; }
    // 004aba  and bl, 0xe0
    X86_AT(c, 0x4abau);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v & 0xE0u, 1)); }
    // 004abd  mov esi, dword ptr gs:[ebp + 0x2e8]
    X86_AT(c, 0x4abdu);
    c.r[6] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2E8u)));
    // 004ac4  movzx eax, byte ptr gs:[ebp + 0x2ee]
    X86_AT(c, 0x4ac4u);
    c.r[0] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x2EEu)));
    // 004acc  mov eax, dword ptr cs:[eax*8 + 0x4bac]
    X86_AT(c, 0x4accu);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 8 + 0x4BACu)));
    // 004ad4  mov dword ptr gs:[ebp + 0x2f4], eax
    X86_AT(c, 0x4ad4u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2F4u)), c.r[0]);
    // 004adb  call dword ptr gs:[ebp + 0x32c]
    X86_AT(c, 0x4adbu);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x32Cu))); push32(c, 0x4ae2u); x86_call(c, t); X86_RET(c, 0x4ae2u); }
    X86_TICK(c, 15);
    // 004ae2  pop dword ptr gs:[ebp + 0x10]
    X86_AT(c, 0x4ae2u);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x10u)), v); }
    // 004ae6  ret 
    X86_AT(c, 0x4ae6u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x4a01u, "ran off the end of a function");
}
void f_00004a03(X86Cpu& c) {
    X86_TICK(c, 14);
    // 004a03  add cx, 0x20
    X86_AT(c, 0x4a03u);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_add(c, v, 0x20u, 0, 2)); }
    // 004a07  cmp word ptr gs:[ebp + 0x2c], cx
    X86_AT(c, 0x4a07u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu))), (c.r[1] & 0xFFFFu), 0, 2);
    // 004a0c  jl 0x4a38
    X86_AT(c, 0x4a0cu);
    if (x86_cc(c, 12)) { goto L_4a38; }
    X86_TICK(c, 15);
    // 004a0e  shr ecx, 0x10
    X86_AT(c, 0x4a0eu);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[1] = r; }
    // 004a11  cmp word ptr gs:[ebp + 0x2a], cx
    X86_AT(c, 0x4a11u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Au))), (c.r[1] & 0xFFFFu), 0, 2);
    // 004a16  jg 0x4a38
    X86_AT(c, 0x4a16u);
    if (x86_cc(c, 15)) { goto L_4a38; }
    X86_TICK(c, 20);
    // 004a18  movzx ax, byte ptr gs:[ebp + 0x2ef]
    X86_AT(c, 0x4a18u);
    s16(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x2EFu))));
    // 004a21  add cx, ax
    X86_AT(c, 0x4a21u);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 004a24  cmp word ptr gs:[ebp + 0x2e], cx
    X86_AT(c, 0x4a24u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Eu))), (c.r[1] & 0xFFFFu), 0, 2);
    // 004a29  jl 0x4a38
    X86_AT(c, 0x4a29u);
    if (x86_cc(c, 12)) { goto L_4a38; }
    X86_TICK(c, 9);
    // 004a2b  mov dword ptr gs:[ebp + 0x32c], 0x4b50
    X86_AT(c, 0x4a2bu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x32Cu)), 0x4B50u);
    // 004a36  jmp 0x4a43
    X86_AT(c, 0x4a36u);
    goto L_4a43;
L_4a38:
    X86_TICK(c, 2);
    // 004a38  mov dword ptr gs:[ebp + 0x32c], 0x4ae8
    X86_AT(c, 0x4a38u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x32Cu)), 0x4AE8u);
L_4a43:
    X86_TICK(c, 92);
    // 004a43  and bl, 0xe0
    X86_AT(c, 0x4a43u);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v & 0xE0u, 1)); }
    // 004a46  lds esi, fword ptr gs:[ebp + 0x2e8]
    X86_AT(c, 0x4a46u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x2E8u)); uint32_t o = rd32(ea); uint32_t s = rd16(ea + 4); x86_load_seg(c, 3, s); c.r[6] = o; }
    // 004a4d  movzx eax, byte ptr gs:[ebp + 0x2ef]
    X86_AT(c, 0x4a4du);
    c.r[0] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x2EFu)));
    // 004a55  mul byte ptr gs:[ebp + 0x2ee]
    X86_AT(c, 0x4a55u);
    x86_mul(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x2EEu))), 1);
    // 004a5c  add esi, eax
    X86_AT(c, 0x4a5cu);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, c.r[0], 0, 4); }
    // 004a5e  movzx eax, byte ptr gs:[ebp + 0x2ee]
    X86_AT(c, 0x4a5eu);
    c.r[0] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x2EEu)));
    // 004a66  mov eax, dword ptr cs:[eax*8 + 0x4ba8]
    X86_AT(c, 0x4a66u);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 8 + 0x4BA8u)));
    // 004a6e  mov dword ptr gs:[ebp + 0x2f4], eax
    X86_AT(c, 0x4a6eu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2F4u)), c.r[0]);
    // 004a75  movsx eax, dx
    X86_AT(c, 0x4a75u);
    c.r[0] = (uint32_t)(int32_t)(int16_t)(c.r[2] & 0xFFFFu);
    // 004a78  imul eax, dword ptr gs:[ebp + 0x20]
    X86_AT(c, 0x4a78u);
    c.r[0] = x86_imul2(c, c.r[0], rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x20u))), 4);
    // 004a7d  add eax, dword ptr gs:[ebp]
    X86_AT(c, 0x4a7du);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5]))), 0, 4); }
    // 004a81  mov dword ptr gs:[ebp + 0x1cc], eax
    X86_AT(c, 0x4a81u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu)), c.r[0]);
    // 004a88  push eax
    X86_AT(c, 0x4a88u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 004a89  call dword ptr gs:[ebp + 0x32c]
    X86_AT(c, 0x4a89u);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x32Cu))); push32(c, 0x4a90u); x86_call(c, t); X86_RET(c, 0x4a90u); }
    X86_TICK(c, 22);
    // 004a90  pop dword ptr gs:[ebp + 0x1cc]
    X86_AT(c, 0x4a90u);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu)), v); }
    // 004a97  pop dword ptr gs:[ebp + 0x10c]
    X86_AT(c, 0x4a97u);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x10Cu)), v); }
    // 004a9e  pop dword ptr gs:[ebp + 0x104]
    X86_AT(c, 0x4a9eu);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u)), v); }
    // 004aa5  call 0x36e4
    X86_AT(c, 0x4aa5u);
    push32(c, 0x4aaau); f_000036e4(c); X86_RET(c, 0x4aaau);
    X86_TICK(c, 7);
    // 004aaa  call 0x6120
    X86_AT(c, 0x4aaau);
    push32(c, 0x4aafu); f_00006120(c); X86_RET(c, 0x4aafu);
    X86_TICK(c, 32);
    // 004aaf  mov ebx, dword ptr gs:[ebp + 0x2f0]
    X86_AT(c, 0x4aafu);
    c.r[3] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2F0u)));
    // 004ab6  shld edx, ebx, 0x10
    X86_AT(c, 0x4ab6u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_double(c, true, v, c.r[3], 0x10u, 4, w); if (w) c.r[2] = r; }
    // 004aba  and bl, 0xe0
    X86_AT(c, 0x4abau);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v & 0xE0u, 1)); }
    // 004abd  mov esi, dword ptr gs:[ebp + 0x2e8]
    X86_AT(c, 0x4abdu);
    c.r[6] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2E8u)));
    // 004ac4  movzx eax, byte ptr gs:[ebp + 0x2ee]
    X86_AT(c, 0x4ac4u);
    c.r[0] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x2EEu)));
    // 004acc  mov eax, dword ptr cs:[eax*8 + 0x4bac]
    X86_AT(c, 0x4accu);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 8 + 0x4BACu)));
    // 004ad4  mov dword ptr gs:[ebp + 0x2f4], eax
    X86_AT(c, 0x4ad4u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2F4u)), c.r[0]);
    // 004adb  call dword ptr gs:[ebp + 0x32c]
    X86_AT(c, 0x4adbu);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x32Cu))); push32(c, 0x4ae2u); x86_call(c, t); X86_RET(c, 0x4ae2u); }
    X86_TICK(c, 15);
    // 004ae2  pop dword ptr gs:[ebp + 0x10]
    X86_AT(c, 0x4ae2u);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x10u)), v); }
    // 004ae6  ret 
    X86_AT(c, 0x4ae6u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x4a03u, "ran off the end of a function");
}
void f_00004a07(X86Cpu& c) {
    X86_TICK(c, 12);
    // 004a07  cmp word ptr gs:[ebp + 0x2c], cx
    X86_AT(c, 0x4a07u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu))), (c.r[1] & 0xFFFFu), 0, 2);
    // 004a0c  jl 0x4a38
    X86_AT(c, 0x4a0cu);
    if (x86_cc(c, 12)) { goto L_4a38; }
    X86_TICK(c, 15);
    // 004a0e  shr ecx, 0x10
    X86_AT(c, 0x4a0eu);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[1] = r; }
    // 004a11  cmp word ptr gs:[ebp + 0x2a], cx
    X86_AT(c, 0x4a11u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Au))), (c.r[1] & 0xFFFFu), 0, 2);
    // 004a16  jg 0x4a38
    X86_AT(c, 0x4a16u);
    if (x86_cc(c, 15)) { goto L_4a38; }
    X86_TICK(c, 20);
    // 004a18  movzx ax, byte ptr gs:[ebp + 0x2ef]
    X86_AT(c, 0x4a18u);
    s16(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x2EFu))));
    // 004a21  add cx, ax
    X86_AT(c, 0x4a21u);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 004a24  cmp word ptr gs:[ebp + 0x2e], cx
    X86_AT(c, 0x4a24u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Eu))), (c.r[1] & 0xFFFFu), 0, 2);
    // 004a29  jl 0x4a38
    X86_AT(c, 0x4a29u);
    if (x86_cc(c, 12)) { goto L_4a38; }
    X86_TICK(c, 9);
    // 004a2b  mov dword ptr gs:[ebp + 0x32c], 0x4b50
    X86_AT(c, 0x4a2bu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x32Cu)), 0x4B50u);
    // 004a36  jmp 0x4a43
    X86_AT(c, 0x4a36u);
    goto L_4a43;
L_4a38:
    X86_TICK(c, 2);
    // 004a38  mov dword ptr gs:[ebp + 0x32c], 0x4ae8
    X86_AT(c, 0x4a38u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x32Cu)), 0x4AE8u);
L_4a43:
    X86_TICK(c, 92);
    // 004a43  and bl, 0xe0
    X86_AT(c, 0x4a43u);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v & 0xE0u, 1)); }
    // 004a46  lds esi, fword ptr gs:[ebp + 0x2e8]
    X86_AT(c, 0x4a46u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x2E8u)); uint32_t o = rd32(ea); uint32_t s = rd16(ea + 4); x86_load_seg(c, 3, s); c.r[6] = o; }
    // 004a4d  movzx eax, byte ptr gs:[ebp + 0x2ef]
    X86_AT(c, 0x4a4du);
    c.r[0] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x2EFu)));
    // 004a55  mul byte ptr gs:[ebp + 0x2ee]
    X86_AT(c, 0x4a55u);
    x86_mul(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x2EEu))), 1);
    // 004a5c  add esi, eax
    X86_AT(c, 0x4a5cu);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, c.r[0], 0, 4); }
    // 004a5e  movzx eax, byte ptr gs:[ebp + 0x2ee]
    X86_AT(c, 0x4a5eu);
    c.r[0] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x2EEu)));
    // 004a66  mov eax, dword ptr cs:[eax*8 + 0x4ba8]
    X86_AT(c, 0x4a66u);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 8 + 0x4BA8u)));
    // 004a6e  mov dword ptr gs:[ebp + 0x2f4], eax
    X86_AT(c, 0x4a6eu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2F4u)), c.r[0]);
    // 004a75  movsx eax, dx
    X86_AT(c, 0x4a75u);
    c.r[0] = (uint32_t)(int32_t)(int16_t)(c.r[2] & 0xFFFFu);
    // 004a78  imul eax, dword ptr gs:[ebp + 0x20]
    X86_AT(c, 0x4a78u);
    c.r[0] = x86_imul2(c, c.r[0], rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x20u))), 4);
    // 004a7d  add eax, dword ptr gs:[ebp]
    X86_AT(c, 0x4a7du);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5]))), 0, 4); }
    // 004a81  mov dword ptr gs:[ebp + 0x1cc], eax
    X86_AT(c, 0x4a81u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu)), c.r[0]);
    // 004a88  push eax
    X86_AT(c, 0x4a88u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 004a89  call dword ptr gs:[ebp + 0x32c]
    X86_AT(c, 0x4a89u);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x32Cu))); push32(c, 0x4a90u); x86_call(c, t); X86_RET(c, 0x4a90u); }
    X86_TICK(c, 22);
    // 004a90  pop dword ptr gs:[ebp + 0x1cc]
    X86_AT(c, 0x4a90u);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu)), v); }
    // 004a97  pop dword ptr gs:[ebp + 0x10c]
    X86_AT(c, 0x4a97u);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x10Cu)), v); }
    // 004a9e  pop dword ptr gs:[ebp + 0x104]
    X86_AT(c, 0x4a9eu);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u)), v); }
    // 004aa5  call 0x36e4
    X86_AT(c, 0x4aa5u);
    push32(c, 0x4aaau); f_000036e4(c); X86_RET(c, 0x4aaau);
    X86_TICK(c, 7);
    // 004aaa  call 0x6120
    X86_AT(c, 0x4aaau);
    push32(c, 0x4aafu); f_00006120(c); X86_RET(c, 0x4aafu);
    X86_TICK(c, 32);
    // 004aaf  mov ebx, dword ptr gs:[ebp + 0x2f0]
    X86_AT(c, 0x4aafu);
    c.r[3] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2F0u)));
    // 004ab6  shld edx, ebx, 0x10
    X86_AT(c, 0x4ab6u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_double(c, true, v, c.r[3], 0x10u, 4, w); if (w) c.r[2] = r; }
    // 004aba  and bl, 0xe0
    X86_AT(c, 0x4abau);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v & 0xE0u, 1)); }
    // 004abd  mov esi, dword ptr gs:[ebp + 0x2e8]
    X86_AT(c, 0x4abdu);
    c.r[6] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2E8u)));
    // 004ac4  movzx eax, byte ptr gs:[ebp + 0x2ee]
    X86_AT(c, 0x4ac4u);
    c.r[0] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x2EEu)));
    // 004acc  mov eax, dword ptr cs:[eax*8 + 0x4bac]
    X86_AT(c, 0x4accu);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 8 + 0x4BACu)));
    // 004ad4  mov dword ptr gs:[ebp + 0x2f4], eax
    X86_AT(c, 0x4ad4u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2F4u)), c.r[0]);
    // 004adb  call dword ptr gs:[ebp + 0x32c]
    X86_AT(c, 0x4adbu);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x32Cu))); push32(c, 0x4ae2u); x86_call(c, t); X86_RET(c, 0x4ae2u); }
    X86_TICK(c, 15);
    // 004ae2  pop dword ptr gs:[ebp + 0x10]
    X86_AT(c, 0x4ae2u);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x10u)), v); }
    // 004ae6  ret 
    X86_AT(c, 0x4ae6u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x4a07u, "ran off the end of a function");
}
void f_00004a0c(X86Cpu& c) {
    X86_TICK(c, 5);
    // 004a0c  jl 0x4a38
    X86_AT(c, 0x4a0cu);
    if (x86_cc(c, 12)) { goto L_4a38; }
    X86_TICK(c, 15);
    // 004a0e  shr ecx, 0x10
    X86_AT(c, 0x4a0eu);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[1] = r; }
    // 004a11  cmp word ptr gs:[ebp + 0x2a], cx
    X86_AT(c, 0x4a11u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Au))), (c.r[1] & 0xFFFFu), 0, 2);
    // 004a16  jg 0x4a38
    X86_AT(c, 0x4a16u);
    if (x86_cc(c, 15)) { goto L_4a38; }
    X86_TICK(c, 20);
    // 004a18  movzx ax, byte ptr gs:[ebp + 0x2ef]
    X86_AT(c, 0x4a18u);
    s16(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x2EFu))));
    // 004a21  add cx, ax
    X86_AT(c, 0x4a21u);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 004a24  cmp word ptr gs:[ebp + 0x2e], cx
    X86_AT(c, 0x4a24u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Eu))), (c.r[1] & 0xFFFFu), 0, 2);
    // 004a29  jl 0x4a38
    X86_AT(c, 0x4a29u);
    if (x86_cc(c, 12)) { goto L_4a38; }
    X86_TICK(c, 9);
    // 004a2b  mov dword ptr gs:[ebp + 0x32c], 0x4b50
    X86_AT(c, 0x4a2bu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x32Cu)), 0x4B50u);
    // 004a36  jmp 0x4a43
    X86_AT(c, 0x4a36u);
    goto L_4a43;
L_4a38:
    X86_TICK(c, 2);
    // 004a38  mov dword ptr gs:[ebp + 0x32c], 0x4ae8
    X86_AT(c, 0x4a38u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x32Cu)), 0x4AE8u);
L_4a43:
    X86_TICK(c, 92);
    // 004a43  and bl, 0xe0
    X86_AT(c, 0x4a43u);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v & 0xE0u, 1)); }
    // 004a46  lds esi, fword ptr gs:[ebp + 0x2e8]
    X86_AT(c, 0x4a46u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x2E8u)); uint32_t o = rd32(ea); uint32_t s = rd16(ea + 4); x86_load_seg(c, 3, s); c.r[6] = o; }
    // 004a4d  movzx eax, byte ptr gs:[ebp + 0x2ef]
    X86_AT(c, 0x4a4du);
    c.r[0] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x2EFu)));
    // 004a55  mul byte ptr gs:[ebp + 0x2ee]
    X86_AT(c, 0x4a55u);
    x86_mul(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x2EEu))), 1);
    // 004a5c  add esi, eax
    X86_AT(c, 0x4a5cu);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, c.r[0], 0, 4); }
    // 004a5e  movzx eax, byte ptr gs:[ebp + 0x2ee]
    X86_AT(c, 0x4a5eu);
    c.r[0] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x2EEu)));
    // 004a66  mov eax, dword ptr cs:[eax*8 + 0x4ba8]
    X86_AT(c, 0x4a66u);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 8 + 0x4BA8u)));
    // 004a6e  mov dword ptr gs:[ebp + 0x2f4], eax
    X86_AT(c, 0x4a6eu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2F4u)), c.r[0]);
    // 004a75  movsx eax, dx
    X86_AT(c, 0x4a75u);
    c.r[0] = (uint32_t)(int32_t)(int16_t)(c.r[2] & 0xFFFFu);
    // 004a78  imul eax, dword ptr gs:[ebp + 0x20]
    X86_AT(c, 0x4a78u);
    c.r[0] = x86_imul2(c, c.r[0], rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x20u))), 4);
    // 004a7d  add eax, dword ptr gs:[ebp]
    X86_AT(c, 0x4a7du);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5]))), 0, 4); }
    // 004a81  mov dword ptr gs:[ebp + 0x1cc], eax
    X86_AT(c, 0x4a81u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu)), c.r[0]);
    // 004a88  push eax
    X86_AT(c, 0x4a88u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 004a89  call dword ptr gs:[ebp + 0x32c]
    X86_AT(c, 0x4a89u);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x32Cu))); push32(c, 0x4a90u); x86_call(c, t); X86_RET(c, 0x4a90u); }
    X86_TICK(c, 22);
    // 004a90  pop dword ptr gs:[ebp + 0x1cc]
    X86_AT(c, 0x4a90u);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu)), v); }
    // 004a97  pop dword ptr gs:[ebp + 0x10c]
    X86_AT(c, 0x4a97u);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x10Cu)), v); }
    // 004a9e  pop dword ptr gs:[ebp + 0x104]
    X86_AT(c, 0x4a9eu);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u)), v); }
    // 004aa5  call 0x36e4
    X86_AT(c, 0x4aa5u);
    push32(c, 0x4aaau); f_000036e4(c); X86_RET(c, 0x4aaau);
    X86_TICK(c, 7);
    // 004aaa  call 0x6120
    X86_AT(c, 0x4aaau);
    push32(c, 0x4aafu); f_00006120(c); X86_RET(c, 0x4aafu);
    X86_TICK(c, 32);
    // 004aaf  mov ebx, dword ptr gs:[ebp + 0x2f0]
    X86_AT(c, 0x4aafu);
    c.r[3] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2F0u)));
    // 004ab6  shld edx, ebx, 0x10
    X86_AT(c, 0x4ab6u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_double(c, true, v, c.r[3], 0x10u, 4, w); if (w) c.r[2] = r; }
    // 004aba  and bl, 0xe0
    X86_AT(c, 0x4abau);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v & 0xE0u, 1)); }
    // 004abd  mov esi, dword ptr gs:[ebp + 0x2e8]
    X86_AT(c, 0x4abdu);
    c.r[6] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2E8u)));
    // 004ac4  movzx eax, byte ptr gs:[ebp + 0x2ee]
    X86_AT(c, 0x4ac4u);
    c.r[0] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x2EEu)));
    // 004acc  mov eax, dword ptr cs:[eax*8 + 0x4bac]
    X86_AT(c, 0x4accu);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 8 + 0x4BACu)));
    // 004ad4  mov dword ptr gs:[ebp + 0x2f4], eax
    X86_AT(c, 0x4ad4u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2F4u)), c.r[0]);
    // 004adb  call dword ptr gs:[ebp + 0x32c]
    X86_AT(c, 0x4adbu);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x32Cu))); push32(c, 0x4ae2u); x86_call(c, t); X86_RET(c, 0x4ae2u); }
    X86_TICK(c, 15);
    // 004ae2  pop dword ptr gs:[ebp + 0x10]
    X86_AT(c, 0x4ae2u);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x10u)), v); }
    // 004ae6  ret 
    X86_AT(c, 0x4ae6u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x4a0cu, "ran off the end of a function");
}
void f_00004a0e(X86Cpu& c) {
    X86_TICK(c, 15);
    // 004a0e  shr ecx, 0x10
    X86_AT(c, 0x4a0eu);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[1] = r; }
    // 004a11  cmp word ptr gs:[ebp + 0x2a], cx
    X86_AT(c, 0x4a11u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Au))), (c.r[1] & 0xFFFFu), 0, 2);
    // 004a16  jg 0x4a38
    X86_AT(c, 0x4a16u);
    if (x86_cc(c, 15)) { goto L_4a38; }
    X86_TICK(c, 20);
    // 004a18  movzx ax, byte ptr gs:[ebp + 0x2ef]
    X86_AT(c, 0x4a18u);
    s16(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x2EFu))));
    // 004a21  add cx, ax
    X86_AT(c, 0x4a21u);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 004a24  cmp word ptr gs:[ebp + 0x2e], cx
    X86_AT(c, 0x4a24u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Eu))), (c.r[1] & 0xFFFFu), 0, 2);
    // 004a29  jl 0x4a38
    X86_AT(c, 0x4a29u);
    if (x86_cc(c, 12)) { goto L_4a38; }
    X86_TICK(c, 9);
    // 004a2b  mov dword ptr gs:[ebp + 0x32c], 0x4b50
    X86_AT(c, 0x4a2bu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x32Cu)), 0x4B50u);
    // 004a36  jmp 0x4a43
    X86_AT(c, 0x4a36u);
    goto L_4a43;
L_4a38:
    X86_TICK(c, 2);
    // 004a38  mov dword ptr gs:[ebp + 0x32c], 0x4ae8
    X86_AT(c, 0x4a38u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x32Cu)), 0x4AE8u);
L_4a43:
    X86_TICK(c, 92);
    // 004a43  and bl, 0xe0
    X86_AT(c, 0x4a43u);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v & 0xE0u, 1)); }
    // 004a46  lds esi, fword ptr gs:[ebp + 0x2e8]
    X86_AT(c, 0x4a46u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x2E8u)); uint32_t o = rd32(ea); uint32_t s = rd16(ea + 4); x86_load_seg(c, 3, s); c.r[6] = o; }
    // 004a4d  movzx eax, byte ptr gs:[ebp + 0x2ef]
    X86_AT(c, 0x4a4du);
    c.r[0] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x2EFu)));
    // 004a55  mul byte ptr gs:[ebp + 0x2ee]
    X86_AT(c, 0x4a55u);
    x86_mul(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x2EEu))), 1);
    // 004a5c  add esi, eax
    X86_AT(c, 0x4a5cu);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, c.r[0], 0, 4); }
    // 004a5e  movzx eax, byte ptr gs:[ebp + 0x2ee]
    X86_AT(c, 0x4a5eu);
    c.r[0] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x2EEu)));
    // 004a66  mov eax, dword ptr cs:[eax*8 + 0x4ba8]
    X86_AT(c, 0x4a66u);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 8 + 0x4BA8u)));
    // 004a6e  mov dword ptr gs:[ebp + 0x2f4], eax
    X86_AT(c, 0x4a6eu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2F4u)), c.r[0]);
    // 004a75  movsx eax, dx
    X86_AT(c, 0x4a75u);
    c.r[0] = (uint32_t)(int32_t)(int16_t)(c.r[2] & 0xFFFFu);
    // 004a78  imul eax, dword ptr gs:[ebp + 0x20]
    X86_AT(c, 0x4a78u);
    c.r[0] = x86_imul2(c, c.r[0], rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x20u))), 4);
    // 004a7d  add eax, dword ptr gs:[ebp]
    X86_AT(c, 0x4a7du);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5]))), 0, 4); }
    // 004a81  mov dword ptr gs:[ebp + 0x1cc], eax
    X86_AT(c, 0x4a81u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu)), c.r[0]);
    // 004a88  push eax
    X86_AT(c, 0x4a88u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 004a89  call dword ptr gs:[ebp + 0x32c]
    X86_AT(c, 0x4a89u);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x32Cu))); push32(c, 0x4a90u); x86_call(c, t); X86_RET(c, 0x4a90u); }
    X86_TICK(c, 22);
    // 004a90  pop dword ptr gs:[ebp + 0x1cc]
    X86_AT(c, 0x4a90u);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu)), v); }
    // 004a97  pop dword ptr gs:[ebp + 0x10c]
    X86_AT(c, 0x4a97u);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x10Cu)), v); }
    // 004a9e  pop dword ptr gs:[ebp + 0x104]
    X86_AT(c, 0x4a9eu);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u)), v); }
    // 004aa5  call 0x36e4
    X86_AT(c, 0x4aa5u);
    push32(c, 0x4aaau); f_000036e4(c); X86_RET(c, 0x4aaau);
    X86_TICK(c, 7);
    // 004aaa  call 0x6120
    X86_AT(c, 0x4aaau);
    push32(c, 0x4aafu); f_00006120(c); X86_RET(c, 0x4aafu);
    X86_TICK(c, 32);
    // 004aaf  mov ebx, dword ptr gs:[ebp + 0x2f0]
    X86_AT(c, 0x4aafu);
    c.r[3] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2F0u)));
    // 004ab6  shld edx, ebx, 0x10
    X86_AT(c, 0x4ab6u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_double(c, true, v, c.r[3], 0x10u, 4, w); if (w) c.r[2] = r; }
    // 004aba  and bl, 0xe0
    X86_AT(c, 0x4abau);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v & 0xE0u, 1)); }
    // 004abd  mov esi, dword ptr gs:[ebp + 0x2e8]
    X86_AT(c, 0x4abdu);
    c.r[6] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2E8u)));
    // 004ac4  movzx eax, byte ptr gs:[ebp + 0x2ee]
    X86_AT(c, 0x4ac4u);
    c.r[0] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x2EEu)));
    // 004acc  mov eax, dword ptr cs:[eax*8 + 0x4bac]
    X86_AT(c, 0x4accu);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 8 + 0x4BACu)));
    // 004ad4  mov dword ptr gs:[ebp + 0x2f4], eax
    X86_AT(c, 0x4ad4u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2F4u)), c.r[0]);
    // 004adb  call dword ptr gs:[ebp + 0x32c]
    X86_AT(c, 0x4adbu);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x32Cu))); push32(c, 0x4ae2u); x86_call(c, t); X86_RET(c, 0x4ae2u); }
    X86_TICK(c, 15);
    // 004ae2  pop dword ptr gs:[ebp + 0x10]
    X86_AT(c, 0x4ae2u);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x10u)), v); }
    // 004ae6  ret 
    X86_AT(c, 0x4ae6u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x4a0eu, "ran off the end of a function");
}
void f_00004a11(X86Cpu& c) {
    X86_TICK(c, 12);
    // 004a11  cmp word ptr gs:[ebp + 0x2a], cx
    X86_AT(c, 0x4a11u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Au))), (c.r[1] & 0xFFFFu), 0, 2);
    // 004a16  jg 0x4a38
    X86_AT(c, 0x4a16u);
    if (x86_cc(c, 15)) { goto L_4a38; }
    X86_TICK(c, 20);
    // 004a18  movzx ax, byte ptr gs:[ebp + 0x2ef]
    X86_AT(c, 0x4a18u);
    s16(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x2EFu))));
    // 004a21  add cx, ax
    X86_AT(c, 0x4a21u);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 004a24  cmp word ptr gs:[ebp + 0x2e], cx
    X86_AT(c, 0x4a24u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Eu))), (c.r[1] & 0xFFFFu), 0, 2);
    // 004a29  jl 0x4a38
    X86_AT(c, 0x4a29u);
    if (x86_cc(c, 12)) { goto L_4a38; }
    X86_TICK(c, 9);
    // 004a2b  mov dword ptr gs:[ebp + 0x32c], 0x4b50
    X86_AT(c, 0x4a2bu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x32Cu)), 0x4B50u);
    // 004a36  jmp 0x4a43
    X86_AT(c, 0x4a36u);
    goto L_4a43;
L_4a38:
    X86_TICK(c, 2);
    // 004a38  mov dword ptr gs:[ebp + 0x32c], 0x4ae8
    X86_AT(c, 0x4a38u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x32Cu)), 0x4AE8u);
L_4a43:
    X86_TICK(c, 92);
    // 004a43  and bl, 0xe0
    X86_AT(c, 0x4a43u);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v & 0xE0u, 1)); }
    // 004a46  lds esi, fword ptr gs:[ebp + 0x2e8]
    X86_AT(c, 0x4a46u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x2E8u)); uint32_t o = rd32(ea); uint32_t s = rd16(ea + 4); x86_load_seg(c, 3, s); c.r[6] = o; }
    // 004a4d  movzx eax, byte ptr gs:[ebp + 0x2ef]
    X86_AT(c, 0x4a4du);
    c.r[0] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x2EFu)));
    // 004a55  mul byte ptr gs:[ebp + 0x2ee]
    X86_AT(c, 0x4a55u);
    x86_mul(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x2EEu))), 1);
    // 004a5c  add esi, eax
    X86_AT(c, 0x4a5cu);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, c.r[0], 0, 4); }
    // 004a5e  movzx eax, byte ptr gs:[ebp + 0x2ee]
    X86_AT(c, 0x4a5eu);
    c.r[0] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x2EEu)));
    // 004a66  mov eax, dword ptr cs:[eax*8 + 0x4ba8]
    X86_AT(c, 0x4a66u);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 8 + 0x4BA8u)));
    // 004a6e  mov dword ptr gs:[ebp + 0x2f4], eax
    X86_AT(c, 0x4a6eu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2F4u)), c.r[0]);
    // 004a75  movsx eax, dx
    X86_AT(c, 0x4a75u);
    c.r[0] = (uint32_t)(int32_t)(int16_t)(c.r[2] & 0xFFFFu);
    // 004a78  imul eax, dword ptr gs:[ebp + 0x20]
    X86_AT(c, 0x4a78u);
    c.r[0] = x86_imul2(c, c.r[0], rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x20u))), 4);
    // 004a7d  add eax, dword ptr gs:[ebp]
    X86_AT(c, 0x4a7du);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5]))), 0, 4); }
    // 004a81  mov dword ptr gs:[ebp + 0x1cc], eax
    X86_AT(c, 0x4a81u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu)), c.r[0]);
    // 004a88  push eax
    X86_AT(c, 0x4a88u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 004a89  call dword ptr gs:[ebp + 0x32c]
    X86_AT(c, 0x4a89u);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x32Cu))); push32(c, 0x4a90u); x86_call(c, t); X86_RET(c, 0x4a90u); }
    X86_TICK(c, 22);
    // 004a90  pop dword ptr gs:[ebp + 0x1cc]
    X86_AT(c, 0x4a90u);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu)), v); }
    // 004a97  pop dword ptr gs:[ebp + 0x10c]
    X86_AT(c, 0x4a97u);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x10Cu)), v); }
    // 004a9e  pop dword ptr gs:[ebp + 0x104]
    X86_AT(c, 0x4a9eu);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u)), v); }
    // 004aa5  call 0x36e4
    X86_AT(c, 0x4aa5u);
    push32(c, 0x4aaau); f_000036e4(c); X86_RET(c, 0x4aaau);
    X86_TICK(c, 7);
    // 004aaa  call 0x6120
    X86_AT(c, 0x4aaau);
    push32(c, 0x4aafu); f_00006120(c); X86_RET(c, 0x4aafu);
    X86_TICK(c, 32);
    // 004aaf  mov ebx, dword ptr gs:[ebp + 0x2f0]
    X86_AT(c, 0x4aafu);
    c.r[3] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2F0u)));
    // 004ab6  shld edx, ebx, 0x10
    X86_AT(c, 0x4ab6u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_double(c, true, v, c.r[3], 0x10u, 4, w); if (w) c.r[2] = r; }
    // 004aba  and bl, 0xe0
    X86_AT(c, 0x4abau);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v & 0xE0u, 1)); }
    // 004abd  mov esi, dword ptr gs:[ebp + 0x2e8]
    X86_AT(c, 0x4abdu);
    c.r[6] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2E8u)));
    // 004ac4  movzx eax, byte ptr gs:[ebp + 0x2ee]
    X86_AT(c, 0x4ac4u);
    c.r[0] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x2EEu)));
    // 004acc  mov eax, dword ptr cs:[eax*8 + 0x4bac]
    X86_AT(c, 0x4accu);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 8 + 0x4BACu)));
    // 004ad4  mov dword ptr gs:[ebp + 0x2f4], eax
    X86_AT(c, 0x4ad4u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2F4u)), c.r[0]);
    // 004adb  call dword ptr gs:[ebp + 0x32c]
    X86_AT(c, 0x4adbu);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x32Cu))); push32(c, 0x4ae2u); x86_call(c, t); X86_RET(c, 0x4ae2u); }
    X86_TICK(c, 15);
    // 004ae2  pop dword ptr gs:[ebp + 0x10]
    X86_AT(c, 0x4ae2u);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x10u)), v); }
    // 004ae6  ret 
    X86_AT(c, 0x4ae6u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x4a11u, "ran off the end of a function");
}
void f_00004a16(X86Cpu& c) {
    X86_TICK(c, 5);
    // 004a16  jg 0x4a38
    X86_AT(c, 0x4a16u);
    if (x86_cc(c, 15)) { goto L_4a38; }
    X86_TICK(c, 20);
    // 004a18  movzx ax, byte ptr gs:[ebp + 0x2ef]
    X86_AT(c, 0x4a18u);
    s16(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x2EFu))));
    // 004a21  add cx, ax
    X86_AT(c, 0x4a21u);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 004a24  cmp word ptr gs:[ebp + 0x2e], cx
    X86_AT(c, 0x4a24u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Eu))), (c.r[1] & 0xFFFFu), 0, 2);
    // 004a29  jl 0x4a38
    X86_AT(c, 0x4a29u);
    if (x86_cc(c, 12)) { goto L_4a38; }
    X86_TICK(c, 9);
    // 004a2b  mov dword ptr gs:[ebp + 0x32c], 0x4b50
    X86_AT(c, 0x4a2bu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x32Cu)), 0x4B50u);
    // 004a36  jmp 0x4a43
    X86_AT(c, 0x4a36u);
    goto L_4a43;
L_4a38:
    X86_TICK(c, 2);
    // 004a38  mov dword ptr gs:[ebp + 0x32c], 0x4ae8
    X86_AT(c, 0x4a38u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x32Cu)), 0x4AE8u);
L_4a43:
    X86_TICK(c, 92);
    // 004a43  and bl, 0xe0
    X86_AT(c, 0x4a43u);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v & 0xE0u, 1)); }
    // 004a46  lds esi, fword ptr gs:[ebp + 0x2e8]
    X86_AT(c, 0x4a46u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x2E8u)); uint32_t o = rd32(ea); uint32_t s = rd16(ea + 4); x86_load_seg(c, 3, s); c.r[6] = o; }
    // 004a4d  movzx eax, byte ptr gs:[ebp + 0x2ef]
    X86_AT(c, 0x4a4du);
    c.r[0] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x2EFu)));
    // 004a55  mul byte ptr gs:[ebp + 0x2ee]
    X86_AT(c, 0x4a55u);
    x86_mul(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x2EEu))), 1);
    // 004a5c  add esi, eax
    X86_AT(c, 0x4a5cu);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, c.r[0], 0, 4); }
    // 004a5e  movzx eax, byte ptr gs:[ebp + 0x2ee]
    X86_AT(c, 0x4a5eu);
    c.r[0] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x2EEu)));
    // 004a66  mov eax, dword ptr cs:[eax*8 + 0x4ba8]
    X86_AT(c, 0x4a66u);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 8 + 0x4BA8u)));
    // 004a6e  mov dword ptr gs:[ebp + 0x2f4], eax
    X86_AT(c, 0x4a6eu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2F4u)), c.r[0]);
    // 004a75  movsx eax, dx
    X86_AT(c, 0x4a75u);
    c.r[0] = (uint32_t)(int32_t)(int16_t)(c.r[2] & 0xFFFFu);
    // 004a78  imul eax, dword ptr gs:[ebp + 0x20]
    X86_AT(c, 0x4a78u);
    c.r[0] = x86_imul2(c, c.r[0], rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x20u))), 4);
    // 004a7d  add eax, dword ptr gs:[ebp]
    X86_AT(c, 0x4a7du);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5]))), 0, 4); }
    // 004a81  mov dword ptr gs:[ebp + 0x1cc], eax
    X86_AT(c, 0x4a81u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu)), c.r[0]);
    // 004a88  push eax
    X86_AT(c, 0x4a88u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 004a89  call dword ptr gs:[ebp + 0x32c]
    X86_AT(c, 0x4a89u);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x32Cu))); push32(c, 0x4a90u); x86_call(c, t); X86_RET(c, 0x4a90u); }
    X86_TICK(c, 22);
    // 004a90  pop dword ptr gs:[ebp + 0x1cc]
    X86_AT(c, 0x4a90u);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu)), v); }
    // 004a97  pop dword ptr gs:[ebp + 0x10c]
    X86_AT(c, 0x4a97u);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x10Cu)), v); }
    // 004a9e  pop dword ptr gs:[ebp + 0x104]
    X86_AT(c, 0x4a9eu);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u)), v); }
    // 004aa5  call 0x36e4
    X86_AT(c, 0x4aa5u);
    push32(c, 0x4aaau); f_000036e4(c); X86_RET(c, 0x4aaau);
    X86_TICK(c, 7);
    // 004aaa  call 0x6120
    X86_AT(c, 0x4aaau);
    push32(c, 0x4aafu); f_00006120(c); X86_RET(c, 0x4aafu);
    X86_TICK(c, 32);
    // 004aaf  mov ebx, dword ptr gs:[ebp + 0x2f0]
    X86_AT(c, 0x4aafu);
    c.r[3] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2F0u)));
    // 004ab6  shld edx, ebx, 0x10
    X86_AT(c, 0x4ab6u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_double(c, true, v, c.r[3], 0x10u, 4, w); if (w) c.r[2] = r; }
    // 004aba  and bl, 0xe0
    X86_AT(c, 0x4abau);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v & 0xE0u, 1)); }
    // 004abd  mov esi, dword ptr gs:[ebp + 0x2e8]
    X86_AT(c, 0x4abdu);
    c.r[6] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2E8u)));
    // 004ac4  movzx eax, byte ptr gs:[ebp + 0x2ee]
    X86_AT(c, 0x4ac4u);
    c.r[0] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x2EEu)));
    // 004acc  mov eax, dword ptr cs:[eax*8 + 0x4bac]
    X86_AT(c, 0x4accu);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 8 + 0x4BACu)));
    // 004ad4  mov dword ptr gs:[ebp + 0x2f4], eax
    X86_AT(c, 0x4ad4u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2F4u)), c.r[0]);
    // 004adb  call dword ptr gs:[ebp + 0x32c]
    X86_AT(c, 0x4adbu);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x32Cu))); push32(c, 0x4ae2u); x86_call(c, t); X86_RET(c, 0x4ae2u); }
    X86_TICK(c, 15);
    // 004ae2  pop dword ptr gs:[ebp + 0x10]
    X86_AT(c, 0x4ae2u);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x10u)), v); }
    // 004ae6  ret 
    X86_AT(c, 0x4ae6u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x4a16u, "ran off the end of a function");
}
void f_00004a18(X86Cpu& c) {
    X86_TICK(c, 20);
    // 004a18  movzx ax, byte ptr gs:[ebp + 0x2ef]
    X86_AT(c, 0x4a18u);
    s16(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x2EFu))));
    // 004a21  add cx, ax
    X86_AT(c, 0x4a21u);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 004a24  cmp word ptr gs:[ebp + 0x2e], cx
    X86_AT(c, 0x4a24u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Eu))), (c.r[1] & 0xFFFFu), 0, 2);
    // 004a29  jl 0x4a38
    X86_AT(c, 0x4a29u);
    if (x86_cc(c, 12)) { goto L_4a38; }
    X86_TICK(c, 9);
    // 004a2b  mov dword ptr gs:[ebp + 0x32c], 0x4b50
    X86_AT(c, 0x4a2bu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x32Cu)), 0x4B50u);
    // 004a36  jmp 0x4a43
    X86_AT(c, 0x4a36u);
    goto L_4a43;
L_4a38:
    X86_TICK(c, 2);
    // 004a38  mov dword ptr gs:[ebp + 0x32c], 0x4ae8
    X86_AT(c, 0x4a38u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x32Cu)), 0x4AE8u);
L_4a43:
    X86_TICK(c, 92);
    // 004a43  and bl, 0xe0
    X86_AT(c, 0x4a43u);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v & 0xE0u, 1)); }
    // 004a46  lds esi, fword ptr gs:[ebp + 0x2e8]
    X86_AT(c, 0x4a46u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x2E8u)); uint32_t o = rd32(ea); uint32_t s = rd16(ea + 4); x86_load_seg(c, 3, s); c.r[6] = o; }
    // 004a4d  movzx eax, byte ptr gs:[ebp + 0x2ef]
    X86_AT(c, 0x4a4du);
    c.r[0] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x2EFu)));
    // 004a55  mul byte ptr gs:[ebp + 0x2ee]
    X86_AT(c, 0x4a55u);
    x86_mul(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x2EEu))), 1);
    // 004a5c  add esi, eax
    X86_AT(c, 0x4a5cu);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, c.r[0], 0, 4); }
    // 004a5e  movzx eax, byte ptr gs:[ebp + 0x2ee]
    X86_AT(c, 0x4a5eu);
    c.r[0] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x2EEu)));
    // 004a66  mov eax, dword ptr cs:[eax*8 + 0x4ba8]
    X86_AT(c, 0x4a66u);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 8 + 0x4BA8u)));
    // 004a6e  mov dword ptr gs:[ebp + 0x2f4], eax
    X86_AT(c, 0x4a6eu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2F4u)), c.r[0]);
    // 004a75  movsx eax, dx
    X86_AT(c, 0x4a75u);
    c.r[0] = (uint32_t)(int32_t)(int16_t)(c.r[2] & 0xFFFFu);
    // 004a78  imul eax, dword ptr gs:[ebp + 0x20]
    X86_AT(c, 0x4a78u);
    c.r[0] = x86_imul2(c, c.r[0], rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x20u))), 4);
    // 004a7d  add eax, dword ptr gs:[ebp]
    X86_AT(c, 0x4a7du);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5]))), 0, 4); }
    // 004a81  mov dword ptr gs:[ebp + 0x1cc], eax
    X86_AT(c, 0x4a81u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu)), c.r[0]);
    // 004a88  push eax
    X86_AT(c, 0x4a88u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 004a89  call dword ptr gs:[ebp + 0x32c]
    X86_AT(c, 0x4a89u);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x32Cu))); push32(c, 0x4a90u); x86_call(c, t); X86_RET(c, 0x4a90u); }
    X86_TICK(c, 22);
    // 004a90  pop dword ptr gs:[ebp + 0x1cc]
    X86_AT(c, 0x4a90u);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu)), v); }
    // 004a97  pop dword ptr gs:[ebp + 0x10c]
    X86_AT(c, 0x4a97u);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x10Cu)), v); }
    // 004a9e  pop dword ptr gs:[ebp + 0x104]
    X86_AT(c, 0x4a9eu);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u)), v); }
    // 004aa5  call 0x36e4
    X86_AT(c, 0x4aa5u);
    push32(c, 0x4aaau); f_000036e4(c); X86_RET(c, 0x4aaau);
    X86_TICK(c, 7);
    // 004aaa  call 0x6120
    X86_AT(c, 0x4aaau);
    push32(c, 0x4aafu); f_00006120(c); X86_RET(c, 0x4aafu);
    X86_TICK(c, 32);
    // 004aaf  mov ebx, dword ptr gs:[ebp + 0x2f0]
    X86_AT(c, 0x4aafu);
    c.r[3] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2F0u)));
    // 004ab6  shld edx, ebx, 0x10
    X86_AT(c, 0x4ab6u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_double(c, true, v, c.r[3], 0x10u, 4, w); if (w) c.r[2] = r; }
    // 004aba  and bl, 0xe0
    X86_AT(c, 0x4abau);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v & 0xE0u, 1)); }
    // 004abd  mov esi, dword ptr gs:[ebp + 0x2e8]
    X86_AT(c, 0x4abdu);
    c.r[6] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2E8u)));
    // 004ac4  movzx eax, byte ptr gs:[ebp + 0x2ee]
    X86_AT(c, 0x4ac4u);
    c.r[0] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x2EEu)));
    // 004acc  mov eax, dword ptr cs:[eax*8 + 0x4bac]
    X86_AT(c, 0x4accu);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 8 + 0x4BACu)));
    // 004ad4  mov dword ptr gs:[ebp + 0x2f4], eax
    X86_AT(c, 0x4ad4u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2F4u)), c.r[0]);
    // 004adb  call dword ptr gs:[ebp + 0x32c]
    X86_AT(c, 0x4adbu);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x32Cu))); push32(c, 0x4ae2u); x86_call(c, t); X86_RET(c, 0x4ae2u); }
    X86_TICK(c, 15);
    // 004ae2  pop dword ptr gs:[ebp + 0x10]
    X86_AT(c, 0x4ae2u);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x10u)), v); }
    // 004ae6  ret 
    X86_AT(c, 0x4ae6u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x4a18u, "ran off the end of a function");
}
void f_00004a21(X86Cpu& c) {
    X86_TICK(c, 14);
    // 004a21  add cx, ax
    X86_AT(c, 0x4a21u);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 004a24  cmp word ptr gs:[ebp + 0x2e], cx
    X86_AT(c, 0x4a24u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Eu))), (c.r[1] & 0xFFFFu), 0, 2);
    // 004a29  jl 0x4a38
    X86_AT(c, 0x4a29u);
    if (x86_cc(c, 12)) { goto L_4a38; }
    X86_TICK(c, 9);
    // 004a2b  mov dword ptr gs:[ebp + 0x32c], 0x4b50
    X86_AT(c, 0x4a2bu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x32Cu)), 0x4B50u);
    // 004a36  jmp 0x4a43
    X86_AT(c, 0x4a36u);
    goto L_4a43;
L_4a38:
    X86_TICK(c, 2);
    // 004a38  mov dword ptr gs:[ebp + 0x32c], 0x4ae8
    X86_AT(c, 0x4a38u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x32Cu)), 0x4AE8u);
L_4a43:
    X86_TICK(c, 92);
    // 004a43  and bl, 0xe0
    X86_AT(c, 0x4a43u);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v & 0xE0u, 1)); }
    // 004a46  lds esi, fword ptr gs:[ebp + 0x2e8]
    X86_AT(c, 0x4a46u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x2E8u)); uint32_t o = rd32(ea); uint32_t s = rd16(ea + 4); x86_load_seg(c, 3, s); c.r[6] = o; }
    // 004a4d  movzx eax, byte ptr gs:[ebp + 0x2ef]
    X86_AT(c, 0x4a4du);
    c.r[0] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x2EFu)));
    // 004a55  mul byte ptr gs:[ebp + 0x2ee]
    X86_AT(c, 0x4a55u);
    x86_mul(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x2EEu))), 1);
    // 004a5c  add esi, eax
    X86_AT(c, 0x4a5cu);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, c.r[0], 0, 4); }
    // 004a5e  movzx eax, byte ptr gs:[ebp + 0x2ee]
    X86_AT(c, 0x4a5eu);
    c.r[0] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x2EEu)));
    // 004a66  mov eax, dword ptr cs:[eax*8 + 0x4ba8]
    X86_AT(c, 0x4a66u);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 8 + 0x4BA8u)));
    // 004a6e  mov dword ptr gs:[ebp + 0x2f4], eax
    X86_AT(c, 0x4a6eu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2F4u)), c.r[0]);
    // 004a75  movsx eax, dx
    X86_AT(c, 0x4a75u);
    c.r[0] = (uint32_t)(int32_t)(int16_t)(c.r[2] & 0xFFFFu);
    // 004a78  imul eax, dword ptr gs:[ebp + 0x20]
    X86_AT(c, 0x4a78u);
    c.r[0] = x86_imul2(c, c.r[0], rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x20u))), 4);
    // 004a7d  add eax, dword ptr gs:[ebp]
    X86_AT(c, 0x4a7du);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5]))), 0, 4); }
    // 004a81  mov dword ptr gs:[ebp + 0x1cc], eax
    X86_AT(c, 0x4a81u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu)), c.r[0]);
    // 004a88  push eax
    X86_AT(c, 0x4a88u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 004a89  call dword ptr gs:[ebp + 0x32c]
    X86_AT(c, 0x4a89u);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x32Cu))); push32(c, 0x4a90u); x86_call(c, t); X86_RET(c, 0x4a90u); }
    X86_TICK(c, 22);
    // 004a90  pop dword ptr gs:[ebp + 0x1cc]
    X86_AT(c, 0x4a90u);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu)), v); }
    // 004a97  pop dword ptr gs:[ebp + 0x10c]
    X86_AT(c, 0x4a97u);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x10Cu)), v); }
    // 004a9e  pop dword ptr gs:[ebp + 0x104]
    X86_AT(c, 0x4a9eu);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u)), v); }
    // 004aa5  call 0x36e4
    X86_AT(c, 0x4aa5u);
    push32(c, 0x4aaau); f_000036e4(c); X86_RET(c, 0x4aaau);
    X86_TICK(c, 7);
    // 004aaa  call 0x6120
    X86_AT(c, 0x4aaau);
    push32(c, 0x4aafu); f_00006120(c); X86_RET(c, 0x4aafu);
    X86_TICK(c, 32);
    // 004aaf  mov ebx, dword ptr gs:[ebp + 0x2f0]
    X86_AT(c, 0x4aafu);
    c.r[3] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2F0u)));
    // 004ab6  shld edx, ebx, 0x10
    X86_AT(c, 0x4ab6u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_double(c, true, v, c.r[3], 0x10u, 4, w); if (w) c.r[2] = r; }
    // 004aba  and bl, 0xe0
    X86_AT(c, 0x4abau);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v & 0xE0u, 1)); }
    // 004abd  mov esi, dword ptr gs:[ebp + 0x2e8]
    X86_AT(c, 0x4abdu);
    c.r[6] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2E8u)));
    // 004ac4  movzx eax, byte ptr gs:[ebp + 0x2ee]
    X86_AT(c, 0x4ac4u);
    c.r[0] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x2EEu)));
    // 004acc  mov eax, dword ptr cs:[eax*8 + 0x4bac]
    X86_AT(c, 0x4accu);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 8 + 0x4BACu)));
    // 004ad4  mov dword ptr gs:[ebp + 0x2f4], eax
    X86_AT(c, 0x4ad4u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2F4u)), c.r[0]);
    // 004adb  call dword ptr gs:[ebp + 0x32c]
    X86_AT(c, 0x4adbu);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x32Cu))); push32(c, 0x4ae2u); x86_call(c, t); X86_RET(c, 0x4ae2u); }
    X86_TICK(c, 15);
    // 004ae2  pop dword ptr gs:[ebp + 0x10]
    X86_AT(c, 0x4ae2u);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x10u)), v); }
    // 004ae6  ret 
    X86_AT(c, 0x4ae6u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x4a21u, "ran off the end of a function");
}
void f_00004a24(X86Cpu& c) {
    X86_TICK(c, 12);
    // 004a24  cmp word ptr gs:[ebp + 0x2e], cx
    X86_AT(c, 0x4a24u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Eu))), (c.r[1] & 0xFFFFu), 0, 2);
    // 004a29  jl 0x4a38
    X86_AT(c, 0x4a29u);
    if (x86_cc(c, 12)) { goto L_4a38; }
    X86_TICK(c, 9);
    // 004a2b  mov dword ptr gs:[ebp + 0x32c], 0x4b50
    X86_AT(c, 0x4a2bu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x32Cu)), 0x4B50u);
    // 004a36  jmp 0x4a43
    X86_AT(c, 0x4a36u);
    goto L_4a43;
L_4a38:
    X86_TICK(c, 2);
    // 004a38  mov dword ptr gs:[ebp + 0x32c], 0x4ae8
    X86_AT(c, 0x4a38u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x32Cu)), 0x4AE8u);
L_4a43:
    X86_TICK(c, 92);
    // 004a43  and bl, 0xe0
    X86_AT(c, 0x4a43u);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v & 0xE0u, 1)); }
    // 004a46  lds esi, fword ptr gs:[ebp + 0x2e8]
    X86_AT(c, 0x4a46u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x2E8u)); uint32_t o = rd32(ea); uint32_t s = rd16(ea + 4); x86_load_seg(c, 3, s); c.r[6] = o; }
    // 004a4d  movzx eax, byte ptr gs:[ebp + 0x2ef]
    X86_AT(c, 0x4a4du);
    c.r[0] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x2EFu)));
    // 004a55  mul byte ptr gs:[ebp + 0x2ee]
    X86_AT(c, 0x4a55u);
    x86_mul(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x2EEu))), 1);
    // 004a5c  add esi, eax
    X86_AT(c, 0x4a5cu);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, c.r[0], 0, 4); }
    // 004a5e  movzx eax, byte ptr gs:[ebp + 0x2ee]
    X86_AT(c, 0x4a5eu);
    c.r[0] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x2EEu)));
    // 004a66  mov eax, dword ptr cs:[eax*8 + 0x4ba8]
    X86_AT(c, 0x4a66u);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 8 + 0x4BA8u)));
    // 004a6e  mov dword ptr gs:[ebp + 0x2f4], eax
    X86_AT(c, 0x4a6eu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2F4u)), c.r[0]);
    // 004a75  movsx eax, dx
    X86_AT(c, 0x4a75u);
    c.r[0] = (uint32_t)(int32_t)(int16_t)(c.r[2] & 0xFFFFu);
    // 004a78  imul eax, dword ptr gs:[ebp + 0x20]
    X86_AT(c, 0x4a78u);
    c.r[0] = x86_imul2(c, c.r[0], rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x20u))), 4);
    // 004a7d  add eax, dword ptr gs:[ebp]
    X86_AT(c, 0x4a7du);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5]))), 0, 4); }
    // 004a81  mov dword ptr gs:[ebp + 0x1cc], eax
    X86_AT(c, 0x4a81u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu)), c.r[0]);
    // 004a88  push eax
    X86_AT(c, 0x4a88u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 004a89  call dword ptr gs:[ebp + 0x32c]
    X86_AT(c, 0x4a89u);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x32Cu))); push32(c, 0x4a90u); x86_call(c, t); X86_RET(c, 0x4a90u); }
    X86_TICK(c, 22);
    // 004a90  pop dword ptr gs:[ebp + 0x1cc]
    X86_AT(c, 0x4a90u);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu)), v); }
    // 004a97  pop dword ptr gs:[ebp + 0x10c]
    X86_AT(c, 0x4a97u);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x10Cu)), v); }
    // 004a9e  pop dword ptr gs:[ebp + 0x104]
    X86_AT(c, 0x4a9eu);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u)), v); }
    // 004aa5  call 0x36e4
    X86_AT(c, 0x4aa5u);
    push32(c, 0x4aaau); f_000036e4(c); X86_RET(c, 0x4aaau);
    X86_TICK(c, 7);
    // 004aaa  call 0x6120
    X86_AT(c, 0x4aaau);
    push32(c, 0x4aafu); f_00006120(c); X86_RET(c, 0x4aafu);
    X86_TICK(c, 32);
    // 004aaf  mov ebx, dword ptr gs:[ebp + 0x2f0]
    X86_AT(c, 0x4aafu);
    c.r[3] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2F0u)));
    // 004ab6  shld edx, ebx, 0x10
    X86_AT(c, 0x4ab6u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_double(c, true, v, c.r[3], 0x10u, 4, w); if (w) c.r[2] = r; }
    // 004aba  and bl, 0xe0
    X86_AT(c, 0x4abau);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v & 0xE0u, 1)); }
    // 004abd  mov esi, dword ptr gs:[ebp + 0x2e8]
    X86_AT(c, 0x4abdu);
    c.r[6] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2E8u)));
    // 004ac4  movzx eax, byte ptr gs:[ebp + 0x2ee]
    X86_AT(c, 0x4ac4u);
    c.r[0] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x2EEu)));
    // 004acc  mov eax, dword ptr cs:[eax*8 + 0x4bac]
    X86_AT(c, 0x4accu);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 8 + 0x4BACu)));
    // 004ad4  mov dword ptr gs:[ebp + 0x2f4], eax
    X86_AT(c, 0x4ad4u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2F4u)), c.r[0]);
    // 004adb  call dword ptr gs:[ebp + 0x32c]
    X86_AT(c, 0x4adbu);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x32Cu))); push32(c, 0x4ae2u); x86_call(c, t); X86_RET(c, 0x4ae2u); }
    X86_TICK(c, 15);
    // 004ae2  pop dword ptr gs:[ebp + 0x10]
    X86_AT(c, 0x4ae2u);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x10u)), v); }
    // 004ae6  ret 
    X86_AT(c, 0x4ae6u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x4a24u, "ran off the end of a function");
}
void f_00004a29(X86Cpu& c) {
    X86_TICK(c, 5);
    // 004a29  jl 0x4a38
    X86_AT(c, 0x4a29u);
    if (x86_cc(c, 12)) { goto L_4a38; }
    X86_TICK(c, 9);
    // 004a2b  mov dword ptr gs:[ebp + 0x32c], 0x4b50
    X86_AT(c, 0x4a2bu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x32Cu)), 0x4B50u);
    // 004a36  jmp 0x4a43
    X86_AT(c, 0x4a36u);
    goto L_4a43;
L_4a38:
    X86_TICK(c, 2);
    // 004a38  mov dword ptr gs:[ebp + 0x32c], 0x4ae8
    X86_AT(c, 0x4a38u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x32Cu)), 0x4AE8u);
L_4a43:
    X86_TICK(c, 92);
    // 004a43  and bl, 0xe0
    X86_AT(c, 0x4a43u);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v & 0xE0u, 1)); }
    // 004a46  lds esi, fword ptr gs:[ebp + 0x2e8]
    X86_AT(c, 0x4a46u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x2E8u)); uint32_t o = rd32(ea); uint32_t s = rd16(ea + 4); x86_load_seg(c, 3, s); c.r[6] = o; }
    // 004a4d  movzx eax, byte ptr gs:[ebp + 0x2ef]
    X86_AT(c, 0x4a4du);
    c.r[0] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x2EFu)));
    // 004a55  mul byte ptr gs:[ebp + 0x2ee]
    X86_AT(c, 0x4a55u);
    x86_mul(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x2EEu))), 1);
    // 004a5c  add esi, eax
    X86_AT(c, 0x4a5cu);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, c.r[0], 0, 4); }
    // 004a5e  movzx eax, byte ptr gs:[ebp + 0x2ee]
    X86_AT(c, 0x4a5eu);
    c.r[0] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x2EEu)));
    // 004a66  mov eax, dword ptr cs:[eax*8 + 0x4ba8]
    X86_AT(c, 0x4a66u);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 8 + 0x4BA8u)));
    // 004a6e  mov dword ptr gs:[ebp + 0x2f4], eax
    X86_AT(c, 0x4a6eu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2F4u)), c.r[0]);
    // 004a75  movsx eax, dx
    X86_AT(c, 0x4a75u);
    c.r[0] = (uint32_t)(int32_t)(int16_t)(c.r[2] & 0xFFFFu);
    // 004a78  imul eax, dword ptr gs:[ebp + 0x20]
    X86_AT(c, 0x4a78u);
    c.r[0] = x86_imul2(c, c.r[0], rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x20u))), 4);
    // 004a7d  add eax, dword ptr gs:[ebp]
    X86_AT(c, 0x4a7du);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5]))), 0, 4); }
    // 004a81  mov dword ptr gs:[ebp + 0x1cc], eax
    X86_AT(c, 0x4a81u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu)), c.r[0]);
    // 004a88  push eax
    X86_AT(c, 0x4a88u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 004a89  call dword ptr gs:[ebp + 0x32c]
    X86_AT(c, 0x4a89u);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x32Cu))); push32(c, 0x4a90u); x86_call(c, t); X86_RET(c, 0x4a90u); }
    X86_TICK(c, 22);
    // 004a90  pop dword ptr gs:[ebp + 0x1cc]
    X86_AT(c, 0x4a90u);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu)), v); }
    // 004a97  pop dword ptr gs:[ebp + 0x10c]
    X86_AT(c, 0x4a97u);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x10Cu)), v); }
    // 004a9e  pop dword ptr gs:[ebp + 0x104]
    X86_AT(c, 0x4a9eu);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u)), v); }
    // 004aa5  call 0x36e4
    X86_AT(c, 0x4aa5u);
    push32(c, 0x4aaau); f_000036e4(c); X86_RET(c, 0x4aaau);
    X86_TICK(c, 7);
    // 004aaa  call 0x6120
    X86_AT(c, 0x4aaau);
    push32(c, 0x4aafu); f_00006120(c); X86_RET(c, 0x4aafu);
    X86_TICK(c, 32);
    // 004aaf  mov ebx, dword ptr gs:[ebp + 0x2f0]
    X86_AT(c, 0x4aafu);
    c.r[3] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2F0u)));
    // 004ab6  shld edx, ebx, 0x10
    X86_AT(c, 0x4ab6u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_double(c, true, v, c.r[3], 0x10u, 4, w); if (w) c.r[2] = r; }
    // 004aba  and bl, 0xe0
    X86_AT(c, 0x4abau);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v & 0xE0u, 1)); }
    // 004abd  mov esi, dword ptr gs:[ebp + 0x2e8]
    X86_AT(c, 0x4abdu);
    c.r[6] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2E8u)));
    // 004ac4  movzx eax, byte ptr gs:[ebp + 0x2ee]
    X86_AT(c, 0x4ac4u);
    c.r[0] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x2EEu)));
    // 004acc  mov eax, dword ptr cs:[eax*8 + 0x4bac]
    X86_AT(c, 0x4accu);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 8 + 0x4BACu)));
    // 004ad4  mov dword ptr gs:[ebp + 0x2f4], eax
    X86_AT(c, 0x4ad4u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2F4u)), c.r[0]);
    // 004adb  call dword ptr gs:[ebp + 0x32c]
    X86_AT(c, 0x4adbu);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x32Cu))); push32(c, 0x4ae2u); x86_call(c, t); X86_RET(c, 0x4ae2u); }
    X86_TICK(c, 15);
    // 004ae2  pop dword ptr gs:[ebp + 0x10]
    X86_AT(c, 0x4ae2u);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x10u)), v); }
    // 004ae6  ret 
    X86_AT(c, 0x4ae6u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x4a29u, "ran off the end of a function");
}
void f_00004a2b(X86Cpu& c) {
    X86_TICK(c, 9);
    // 004a2b  mov dword ptr gs:[ebp + 0x32c], 0x4b50
    X86_AT(c, 0x4a2bu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x32Cu)), 0x4B50u);
    // 004a36  jmp 0x4a43
    X86_AT(c, 0x4a36u);
    goto L_4a43;
L_4a43:
    X86_TICK(c, 92);
    // 004a43  and bl, 0xe0
    X86_AT(c, 0x4a43u);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v & 0xE0u, 1)); }
    // 004a46  lds esi, fword ptr gs:[ebp + 0x2e8]
    X86_AT(c, 0x4a46u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x2E8u)); uint32_t o = rd32(ea); uint32_t s = rd16(ea + 4); x86_load_seg(c, 3, s); c.r[6] = o; }
    // 004a4d  movzx eax, byte ptr gs:[ebp + 0x2ef]
    X86_AT(c, 0x4a4du);
    c.r[0] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x2EFu)));
    // 004a55  mul byte ptr gs:[ebp + 0x2ee]
    X86_AT(c, 0x4a55u);
    x86_mul(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x2EEu))), 1);
    // 004a5c  add esi, eax
    X86_AT(c, 0x4a5cu);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, c.r[0], 0, 4); }
    // 004a5e  movzx eax, byte ptr gs:[ebp + 0x2ee]
    X86_AT(c, 0x4a5eu);
    c.r[0] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x2EEu)));
    // 004a66  mov eax, dword ptr cs:[eax*8 + 0x4ba8]
    X86_AT(c, 0x4a66u);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 8 + 0x4BA8u)));
    // 004a6e  mov dword ptr gs:[ebp + 0x2f4], eax
    X86_AT(c, 0x4a6eu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2F4u)), c.r[0]);
    // 004a75  movsx eax, dx
    X86_AT(c, 0x4a75u);
    c.r[0] = (uint32_t)(int32_t)(int16_t)(c.r[2] & 0xFFFFu);
    // 004a78  imul eax, dword ptr gs:[ebp + 0x20]
    X86_AT(c, 0x4a78u);
    c.r[0] = x86_imul2(c, c.r[0], rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x20u))), 4);
    // 004a7d  add eax, dword ptr gs:[ebp]
    X86_AT(c, 0x4a7du);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5]))), 0, 4); }
    // 004a81  mov dword ptr gs:[ebp + 0x1cc], eax
    X86_AT(c, 0x4a81u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu)), c.r[0]);
    // 004a88  push eax
    X86_AT(c, 0x4a88u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 004a89  call dword ptr gs:[ebp + 0x32c]
    X86_AT(c, 0x4a89u);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x32Cu))); push32(c, 0x4a90u); x86_call(c, t); X86_RET(c, 0x4a90u); }
    X86_TICK(c, 22);
    // 004a90  pop dword ptr gs:[ebp + 0x1cc]
    X86_AT(c, 0x4a90u);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu)), v); }
    // 004a97  pop dword ptr gs:[ebp + 0x10c]
    X86_AT(c, 0x4a97u);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x10Cu)), v); }
    // 004a9e  pop dword ptr gs:[ebp + 0x104]
    X86_AT(c, 0x4a9eu);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u)), v); }
    // 004aa5  call 0x36e4
    X86_AT(c, 0x4aa5u);
    push32(c, 0x4aaau); f_000036e4(c); X86_RET(c, 0x4aaau);
    X86_TICK(c, 7);
    // 004aaa  call 0x6120
    X86_AT(c, 0x4aaau);
    push32(c, 0x4aafu); f_00006120(c); X86_RET(c, 0x4aafu);
    X86_TICK(c, 32);
    // 004aaf  mov ebx, dword ptr gs:[ebp + 0x2f0]
    X86_AT(c, 0x4aafu);
    c.r[3] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2F0u)));
    // 004ab6  shld edx, ebx, 0x10
    X86_AT(c, 0x4ab6u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_double(c, true, v, c.r[3], 0x10u, 4, w); if (w) c.r[2] = r; }
    // 004aba  and bl, 0xe0
    X86_AT(c, 0x4abau);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v & 0xE0u, 1)); }
    // 004abd  mov esi, dword ptr gs:[ebp + 0x2e8]
    X86_AT(c, 0x4abdu);
    c.r[6] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2E8u)));
    // 004ac4  movzx eax, byte ptr gs:[ebp + 0x2ee]
    X86_AT(c, 0x4ac4u);
    c.r[0] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x2EEu)));
    // 004acc  mov eax, dword ptr cs:[eax*8 + 0x4bac]
    X86_AT(c, 0x4accu);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 8 + 0x4BACu)));
    // 004ad4  mov dword ptr gs:[ebp + 0x2f4], eax
    X86_AT(c, 0x4ad4u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2F4u)), c.r[0]);
    // 004adb  call dword ptr gs:[ebp + 0x32c]
    X86_AT(c, 0x4adbu);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x32Cu))); push32(c, 0x4ae2u); x86_call(c, t); X86_RET(c, 0x4ae2u); }
    X86_TICK(c, 15);
    // 004ae2  pop dword ptr gs:[ebp + 0x10]
    X86_AT(c, 0x4ae2u);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x10u)), v); }
    // 004ae6  ret 
    X86_AT(c, 0x4ae6u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x4a2bu, "ran off the end of a function");
}
void f_00004a36(X86Cpu& c) {
    X86_TICK(c, 7);
    // 004a36  jmp 0x4a43
    X86_AT(c, 0x4a36u);
    goto L_4a43;
L_4a43:
    X86_TICK(c, 92);
    // 004a43  and bl, 0xe0
    X86_AT(c, 0x4a43u);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v & 0xE0u, 1)); }
    // 004a46  lds esi, fword ptr gs:[ebp + 0x2e8]
    X86_AT(c, 0x4a46u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x2E8u)); uint32_t o = rd32(ea); uint32_t s = rd16(ea + 4); x86_load_seg(c, 3, s); c.r[6] = o; }
    // 004a4d  movzx eax, byte ptr gs:[ebp + 0x2ef]
    X86_AT(c, 0x4a4du);
    c.r[0] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x2EFu)));
    // 004a55  mul byte ptr gs:[ebp + 0x2ee]
    X86_AT(c, 0x4a55u);
    x86_mul(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x2EEu))), 1);
    // 004a5c  add esi, eax
    X86_AT(c, 0x4a5cu);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, c.r[0], 0, 4); }
    // 004a5e  movzx eax, byte ptr gs:[ebp + 0x2ee]
    X86_AT(c, 0x4a5eu);
    c.r[0] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x2EEu)));
    // 004a66  mov eax, dword ptr cs:[eax*8 + 0x4ba8]
    X86_AT(c, 0x4a66u);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 8 + 0x4BA8u)));
    // 004a6e  mov dword ptr gs:[ebp + 0x2f4], eax
    X86_AT(c, 0x4a6eu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2F4u)), c.r[0]);
    // 004a75  movsx eax, dx
    X86_AT(c, 0x4a75u);
    c.r[0] = (uint32_t)(int32_t)(int16_t)(c.r[2] & 0xFFFFu);
    // 004a78  imul eax, dword ptr gs:[ebp + 0x20]
    X86_AT(c, 0x4a78u);
    c.r[0] = x86_imul2(c, c.r[0], rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x20u))), 4);
    // 004a7d  add eax, dword ptr gs:[ebp]
    X86_AT(c, 0x4a7du);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5]))), 0, 4); }
    // 004a81  mov dword ptr gs:[ebp + 0x1cc], eax
    X86_AT(c, 0x4a81u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu)), c.r[0]);
    // 004a88  push eax
    X86_AT(c, 0x4a88u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 004a89  call dword ptr gs:[ebp + 0x32c]
    X86_AT(c, 0x4a89u);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x32Cu))); push32(c, 0x4a90u); x86_call(c, t); X86_RET(c, 0x4a90u); }
    X86_TICK(c, 22);
    // 004a90  pop dword ptr gs:[ebp + 0x1cc]
    X86_AT(c, 0x4a90u);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu)), v); }
    // 004a97  pop dword ptr gs:[ebp + 0x10c]
    X86_AT(c, 0x4a97u);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x10Cu)), v); }
    // 004a9e  pop dword ptr gs:[ebp + 0x104]
    X86_AT(c, 0x4a9eu);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u)), v); }
    // 004aa5  call 0x36e4
    X86_AT(c, 0x4aa5u);
    push32(c, 0x4aaau); f_000036e4(c); X86_RET(c, 0x4aaau);
    X86_TICK(c, 7);
    // 004aaa  call 0x6120
    X86_AT(c, 0x4aaau);
    push32(c, 0x4aafu); f_00006120(c); X86_RET(c, 0x4aafu);
    X86_TICK(c, 32);
    // 004aaf  mov ebx, dword ptr gs:[ebp + 0x2f0]
    X86_AT(c, 0x4aafu);
    c.r[3] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2F0u)));
    // 004ab6  shld edx, ebx, 0x10
    X86_AT(c, 0x4ab6u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_double(c, true, v, c.r[3], 0x10u, 4, w); if (w) c.r[2] = r; }
    // 004aba  and bl, 0xe0
    X86_AT(c, 0x4abau);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v & 0xE0u, 1)); }
    // 004abd  mov esi, dword ptr gs:[ebp + 0x2e8]
    X86_AT(c, 0x4abdu);
    c.r[6] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2E8u)));
    // 004ac4  movzx eax, byte ptr gs:[ebp + 0x2ee]
    X86_AT(c, 0x4ac4u);
    c.r[0] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x2EEu)));
    // 004acc  mov eax, dword ptr cs:[eax*8 + 0x4bac]
    X86_AT(c, 0x4accu);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 8 + 0x4BACu)));
    // 004ad4  mov dword ptr gs:[ebp + 0x2f4], eax
    X86_AT(c, 0x4ad4u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2F4u)), c.r[0]);
    // 004adb  call dword ptr gs:[ebp + 0x32c]
    X86_AT(c, 0x4adbu);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x32Cu))); push32(c, 0x4ae2u); x86_call(c, t); X86_RET(c, 0x4ae2u); }
    X86_TICK(c, 15);
    // 004ae2  pop dword ptr gs:[ebp + 0x10]
    X86_AT(c, 0x4ae2u);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x10u)), v); }
    // 004ae6  ret 
    X86_AT(c, 0x4ae6u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x4a36u, "ran off the end of a function");
}
void f_00004a43(X86Cpu& c) {
    X86_TICK(c, 92);
    // 004a43  and bl, 0xe0
    X86_AT(c, 0x4a43u);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v & 0xE0u, 1)); }
    // 004a46  lds esi, fword ptr gs:[ebp + 0x2e8]
    X86_AT(c, 0x4a46u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x2E8u)); uint32_t o = rd32(ea); uint32_t s = rd16(ea + 4); x86_load_seg(c, 3, s); c.r[6] = o; }
    // 004a4d  movzx eax, byte ptr gs:[ebp + 0x2ef]
    X86_AT(c, 0x4a4du);
    c.r[0] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x2EFu)));
    // 004a55  mul byte ptr gs:[ebp + 0x2ee]
    X86_AT(c, 0x4a55u);
    x86_mul(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x2EEu))), 1);
    // 004a5c  add esi, eax
    X86_AT(c, 0x4a5cu);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, c.r[0], 0, 4); }
    // 004a5e  movzx eax, byte ptr gs:[ebp + 0x2ee]
    X86_AT(c, 0x4a5eu);
    c.r[0] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x2EEu)));
    // 004a66  mov eax, dword ptr cs:[eax*8 + 0x4ba8]
    X86_AT(c, 0x4a66u);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 8 + 0x4BA8u)));
    // 004a6e  mov dword ptr gs:[ebp + 0x2f4], eax
    X86_AT(c, 0x4a6eu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2F4u)), c.r[0]);
    // 004a75  movsx eax, dx
    X86_AT(c, 0x4a75u);
    c.r[0] = (uint32_t)(int32_t)(int16_t)(c.r[2] & 0xFFFFu);
    // 004a78  imul eax, dword ptr gs:[ebp + 0x20]
    X86_AT(c, 0x4a78u);
    c.r[0] = x86_imul2(c, c.r[0], rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x20u))), 4);
    // 004a7d  add eax, dword ptr gs:[ebp]
    X86_AT(c, 0x4a7du);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5]))), 0, 4); }
    // 004a81  mov dword ptr gs:[ebp + 0x1cc], eax
    X86_AT(c, 0x4a81u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu)), c.r[0]);
    // 004a88  push eax
    X86_AT(c, 0x4a88u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 004a89  call dword ptr gs:[ebp + 0x32c]
    X86_AT(c, 0x4a89u);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x32Cu))); push32(c, 0x4a90u); x86_call(c, t); X86_RET(c, 0x4a90u); }
    X86_TICK(c, 22);
    // 004a90  pop dword ptr gs:[ebp + 0x1cc]
    X86_AT(c, 0x4a90u);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu)), v); }
    // 004a97  pop dword ptr gs:[ebp + 0x10c]
    X86_AT(c, 0x4a97u);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x10Cu)), v); }
    // 004a9e  pop dword ptr gs:[ebp + 0x104]
    X86_AT(c, 0x4a9eu);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u)), v); }
    // 004aa5  call 0x36e4
    X86_AT(c, 0x4aa5u);
    push32(c, 0x4aaau); f_000036e4(c); X86_RET(c, 0x4aaau);
    X86_TICK(c, 7);
    // 004aaa  call 0x6120
    X86_AT(c, 0x4aaau);
    push32(c, 0x4aafu); f_00006120(c); X86_RET(c, 0x4aafu);
    X86_TICK(c, 32);
    // 004aaf  mov ebx, dword ptr gs:[ebp + 0x2f0]
    X86_AT(c, 0x4aafu);
    c.r[3] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2F0u)));
    // 004ab6  shld edx, ebx, 0x10
    X86_AT(c, 0x4ab6u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_double(c, true, v, c.r[3], 0x10u, 4, w); if (w) c.r[2] = r; }
    // 004aba  and bl, 0xe0
    X86_AT(c, 0x4abau);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v & 0xE0u, 1)); }
    // 004abd  mov esi, dword ptr gs:[ebp + 0x2e8]
    X86_AT(c, 0x4abdu);
    c.r[6] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2E8u)));
    // 004ac4  movzx eax, byte ptr gs:[ebp + 0x2ee]
    X86_AT(c, 0x4ac4u);
    c.r[0] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x2EEu)));
    // 004acc  mov eax, dword ptr cs:[eax*8 + 0x4bac]
    X86_AT(c, 0x4accu);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 8 + 0x4BACu)));
    // 004ad4  mov dword ptr gs:[ebp + 0x2f4], eax
    X86_AT(c, 0x4ad4u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2F4u)), c.r[0]);
    // 004adb  call dword ptr gs:[ebp + 0x32c]
    X86_AT(c, 0x4adbu);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x32Cu))); push32(c, 0x4ae2u); x86_call(c, t); X86_RET(c, 0x4ae2u); }
    X86_TICK(c, 15);
    // 004ae2  pop dword ptr gs:[ebp + 0x10]
    X86_AT(c, 0x4ae2u);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x10u)), v); }
    // 004ae6  ret 
    X86_AT(c, 0x4ae6u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x4a43u, "ran off the end of a function");
}
void f_00004a46(X86Cpu& c) {
    X86_TICK(c, 90);
    // 004a46  lds esi, fword ptr gs:[ebp + 0x2e8]
    X86_AT(c, 0x4a46u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x2E8u)); uint32_t o = rd32(ea); uint32_t s = rd16(ea + 4); x86_load_seg(c, 3, s); c.r[6] = o; }
    // 004a4d  movzx eax, byte ptr gs:[ebp + 0x2ef]
    X86_AT(c, 0x4a4du);
    c.r[0] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x2EFu)));
    // 004a55  mul byte ptr gs:[ebp + 0x2ee]
    X86_AT(c, 0x4a55u);
    x86_mul(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x2EEu))), 1);
    // 004a5c  add esi, eax
    X86_AT(c, 0x4a5cu);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, c.r[0], 0, 4); }
    // 004a5e  movzx eax, byte ptr gs:[ebp + 0x2ee]
    X86_AT(c, 0x4a5eu);
    c.r[0] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x2EEu)));
    // 004a66  mov eax, dword ptr cs:[eax*8 + 0x4ba8]
    X86_AT(c, 0x4a66u);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 8 + 0x4BA8u)));
    // 004a6e  mov dword ptr gs:[ebp + 0x2f4], eax
    X86_AT(c, 0x4a6eu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2F4u)), c.r[0]);
    // 004a75  movsx eax, dx
    X86_AT(c, 0x4a75u);
    c.r[0] = (uint32_t)(int32_t)(int16_t)(c.r[2] & 0xFFFFu);
    // 004a78  imul eax, dword ptr gs:[ebp + 0x20]
    X86_AT(c, 0x4a78u);
    c.r[0] = x86_imul2(c, c.r[0], rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x20u))), 4);
    // 004a7d  add eax, dword ptr gs:[ebp]
    X86_AT(c, 0x4a7du);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5]))), 0, 4); }
    // 004a81  mov dword ptr gs:[ebp + 0x1cc], eax
    X86_AT(c, 0x4a81u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu)), c.r[0]);
    // 004a88  push eax
    X86_AT(c, 0x4a88u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 004a89  call dword ptr gs:[ebp + 0x32c]
    X86_AT(c, 0x4a89u);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x32Cu))); push32(c, 0x4a90u); x86_call(c, t); X86_RET(c, 0x4a90u); }
    X86_TICK(c, 22);
    // 004a90  pop dword ptr gs:[ebp + 0x1cc]
    X86_AT(c, 0x4a90u);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu)), v); }
    // 004a97  pop dword ptr gs:[ebp + 0x10c]
    X86_AT(c, 0x4a97u);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x10Cu)), v); }
    // 004a9e  pop dword ptr gs:[ebp + 0x104]
    X86_AT(c, 0x4a9eu);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u)), v); }
    // 004aa5  call 0x36e4
    X86_AT(c, 0x4aa5u);
    push32(c, 0x4aaau); f_000036e4(c); X86_RET(c, 0x4aaau);
    X86_TICK(c, 7);
    // 004aaa  call 0x6120
    X86_AT(c, 0x4aaau);
    push32(c, 0x4aafu); f_00006120(c); X86_RET(c, 0x4aafu);
    X86_TICK(c, 32);
    // 004aaf  mov ebx, dword ptr gs:[ebp + 0x2f0]
    X86_AT(c, 0x4aafu);
    c.r[3] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2F0u)));
    // 004ab6  shld edx, ebx, 0x10
    X86_AT(c, 0x4ab6u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_double(c, true, v, c.r[3], 0x10u, 4, w); if (w) c.r[2] = r; }
    // 004aba  and bl, 0xe0
    X86_AT(c, 0x4abau);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v & 0xE0u, 1)); }
    // 004abd  mov esi, dword ptr gs:[ebp + 0x2e8]
    X86_AT(c, 0x4abdu);
    c.r[6] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2E8u)));
    // 004ac4  movzx eax, byte ptr gs:[ebp + 0x2ee]
    X86_AT(c, 0x4ac4u);
    c.r[0] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x2EEu)));
    // 004acc  mov eax, dword ptr cs:[eax*8 + 0x4bac]
    X86_AT(c, 0x4accu);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 8 + 0x4BACu)));
    // 004ad4  mov dword ptr gs:[ebp + 0x2f4], eax
    X86_AT(c, 0x4ad4u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2F4u)), c.r[0]);
    // 004adb  call dword ptr gs:[ebp + 0x32c]
    X86_AT(c, 0x4adbu);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x32Cu))); push32(c, 0x4ae2u); x86_call(c, t); X86_RET(c, 0x4ae2u); }
    X86_TICK(c, 15);
    // 004ae2  pop dword ptr gs:[ebp + 0x10]
    X86_AT(c, 0x4ae2u);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x10u)), v); }
    // 004ae6  ret 
    X86_AT(c, 0x4ae6u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x4a46u, "ran off the end of a function");
}
void f_00004a4d(X86Cpu& c) {
    X86_TICK(c, 84);
    // 004a4d  movzx eax, byte ptr gs:[ebp + 0x2ef]
    X86_AT(c, 0x4a4du);
    c.r[0] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x2EFu)));
    // 004a55  mul byte ptr gs:[ebp + 0x2ee]
    X86_AT(c, 0x4a55u);
    x86_mul(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x2EEu))), 1);
    // 004a5c  add esi, eax
    X86_AT(c, 0x4a5cu);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, c.r[0], 0, 4); }
    // 004a5e  movzx eax, byte ptr gs:[ebp + 0x2ee]
    X86_AT(c, 0x4a5eu);
    c.r[0] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x2EEu)));
    // 004a66  mov eax, dword ptr cs:[eax*8 + 0x4ba8]
    X86_AT(c, 0x4a66u);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 8 + 0x4BA8u)));
    // 004a6e  mov dword ptr gs:[ebp + 0x2f4], eax
    X86_AT(c, 0x4a6eu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2F4u)), c.r[0]);
    // 004a75  movsx eax, dx
    X86_AT(c, 0x4a75u);
    c.r[0] = (uint32_t)(int32_t)(int16_t)(c.r[2] & 0xFFFFu);
    // 004a78  imul eax, dword ptr gs:[ebp + 0x20]
    X86_AT(c, 0x4a78u);
    c.r[0] = x86_imul2(c, c.r[0], rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x20u))), 4);
    // 004a7d  add eax, dword ptr gs:[ebp]
    X86_AT(c, 0x4a7du);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5]))), 0, 4); }
    // 004a81  mov dword ptr gs:[ebp + 0x1cc], eax
    X86_AT(c, 0x4a81u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu)), c.r[0]);
    // 004a88  push eax
    X86_AT(c, 0x4a88u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 004a89  call dword ptr gs:[ebp + 0x32c]
    X86_AT(c, 0x4a89u);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x32Cu))); push32(c, 0x4a90u); x86_call(c, t); X86_RET(c, 0x4a90u); }
    X86_TICK(c, 22);
    // 004a90  pop dword ptr gs:[ebp + 0x1cc]
    X86_AT(c, 0x4a90u);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu)), v); }
    // 004a97  pop dword ptr gs:[ebp + 0x10c]
    X86_AT(c, 0x4a97u);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x10Cu)), v); }
    // 004a9e  pop dword ptr gs:[ebp + 0x104]
    X86_AT(c, 0x4a9eu);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u)), v); }
    // 004aa5  call 0x36e4
    X86_AT(c, 0x4aa5u);
    push32(c, 0x4aaau); f_000036e4(c); X86_RET(c, 0x4aaau);
    X86_TICK(c, 7);
    // 004aaa  call 0x6120
    X86_AT(c, 0x4aaau);
    push32(c, 0x4aafu); f_00006120(c); X86_RET(c, 0x4aafu);
    X86_TICK(c, 32);
    // 004aaf  mov ebx, dword ptr gs:[ebp + 0x2f0]
    X86_AT(c, 0x4aafu);
    c.r[3] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2F0u)));
    // 004ab6  shld edx, ebx, 0x10
    X86_AT(c, 0x4ab6u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_double(c, true, v, c.r[3], 0x10u, 4, w); if (w) c.r[2] = r; }
    // 004aba  and bl, 0xe0
    X86_AT(c, 0x4abau);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v & 0xE0u, 1)); }
    // 004abd  mov esi, dword ptr gs:[ebp + 0x2e8]
    X86_AT(c, 0x4abdu);
    c.r[6] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2E8u)));
    // 004ac4  movzx eax, byte ptr gs:[ebp + 0x2ee]
    X86_AT(c, 0x4ac4u);
    c.r[0] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x2EEu)));
    // 004acc  mov eax, dword ptr cs:[eax*8 + 0x4bac]
    X86_AT(c, 0x4accu);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 8 + 0x4BACu)));
    // 004ad4  mov dword ptr gs:[ebp + 0x2f4], eax
    X86_AT(c, 0x4ad4u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2F4u)), c.r[0]);
    // 004adb  call dword ptr gs:[ebp + 0x32c]
    X86_AT(c, 0x4adbu);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x32Cu))); push32(c, 0x4ae2u); x86_call(c, t); X86_RET(c, 0x4ae2u); }
    X86_TICK(c, 15);
    // 004ae2  pop dword ptr gs:[ebp + 0x10]
    X86_AT(c, 0x4ae2u);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x10u)), v); }
    // 004ae6  ret 
    X86_AT(c, 0x4ae6u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x4a4du, "ran off the end of a function");
}
void f_00004a55(X86Cpu& c) {
    X86_TICK(c, 78);
    // 004a55  mul byte ptr gs:[ebp + 0x2ee]
    X86_AT(c, 0x4a55u);
    x86_mul(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x2EEu))), 1);
    // 004a5c  add esi, eax
    X86_AT(c, 0x4a5cu);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, c.r[0], 0, 4); }
    // 004a5e  movzx eax, byte ptr gs:[ebp + 0x2ee]
    X86_AT(c, 0x4a5eu);
    c.r[0] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x2EEu)));
    // 004a66  mov eax, dword ptr cs:[eax*8 + 0x4ba8]
    X86_AT(c, 0x4a66u);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 8 + 0x4BA8u)));
    // 004a6e  mov dword ptr gs:[ebp + 0x2f4], eax
    X86_AT(c, 0x4a6eu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2F4u)), c.r[0]);
    // 004a75  movsx eax, dx
    X86_AT(c, 0x4a75u);
    c.r[0] = (uint32_t)(int32_t)(int16_t)(c.r[2] & 0xFFFFu);
    // 004a78  imul eax, dword ptr gs:[ebp + 0x20]
    X86_AT(c, 0x4a78u);
    c.r[0] = x86_imul2(c, c.r[0], rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x20u))), 4);
    // 004a7d  add eax, dword ptr gs:[ebp]
    X86_AT(c, 0x4a7du);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5]))), 0, 4); }
    // 004a81  mov dword ptr gs:[ebp + 0x1cc], eax
    X86_AT(c, 0x4a81u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu)), c.r[0]);
    // 004a88  push eax
    X86_AT(c, 0x4a88u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 004a89  call dword ptr gs:[ebp + 0x32c]
    X86_AT(c, 0x4a89u);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x32Cu))); push32(c, 0x4a90u); x86_call(c, t); X86_RET(c, 0x4a90u); }
    X86_TICK(c, 22);
    // 004a90  pop dword ptr gs:[ebp + 0x1cc]
    X86_AT(c, 0x4a90u);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu)), v); }
    // 004a97  pop dword ptr gs:[ebp + 0x10c]
    X86_AT(c, 0x4a97u);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x10Cu)), v); }
    // 004a9e  pop dword ptr gs:[ebp + 0x104]
    X86_AT(c, 0x4a9eu);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u)), v); }
    // 004aa5  call 0x36e4
    X86_AT(c, 0x4aa5u);
    push32(c, 0x4aaau); f_000036e4(c); X86_RET(c, 0x4aaau);
    X86_TICK(c, 7);
    // 004aaa  call 0x6120
    X86_AT(c, 0x4aaau);
    push32(c, 0x4aafu); f_00006120(c); X86_RET(c, 0x4aafu);
    X86_TICK(c, 32);
    // 004aaf  mov ebx, dword ptr gs:[ebp + 0x2f0]
    X86_AT(c, 0x4aafu);
    c.r[3] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2F0u)));
    // 004ab6  shld edx, ebx, 0x10
    X86_AT(c, 0x4ab6u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_double(c, true, v, c.r[3], 0x10u, 4, w); if (w) c.r[2] = r; }
    // 004aba  and bl, 0xe0
    X86_AT(c, 0x4abau);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v & 0xE0u, 1)); }
    // 004abd  mov esi, dword ptr gs:[ebp + 0x2e8]
    X86_AT(c, 0x4abdu);
    c.r[6] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2E8u)));
    // 004ac4  movzx eax, byte ptr gs:[ebp + 0x2ee]
    X86_AT(c, 0x4ac4u);
    c.r[0] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x2EEu)));
    // 004acc  mov eax, dword ptr cs:[eax*8 + 0x4bac]
    X86_AT(c, 0x4accu);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 8 + 0x4BACu)));
    // 004ad4  mov dword ptr gs:[ebp + 0x2f4], eax
    X86_AT(c, 0x4ad4u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2F4u)), c.r[0]);
    // 004adb  call dword ptr gs:[ebp + 0x32c]
    X86_AT(c, 0x4adbu);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x32Cu))); push32(c, 0x4ae2u); x86_call(c, t); X86_RET(c, 0x4ae2u); }
    X86_TICK(c, 15);
    // 004ae2  pop dword ptr gs:[ebp + 0x10]
    X86_AT(c, 0x4ae2u);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x10u)), v); }
    // 004ae6  ret 
    X86_AT(c, 0x4ae6u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x4a55u, "ran off the end of a function");
}
void f_00004a5c(X86Cpu& c) {
    X86_TICK(c, 56);
    // 004a5c  add esi, eax
    X86_AT(c, 0x4a5cu);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, c.r[0], 0, 4); }
    // 004a5e  movzx eax, byte ptr gs:[ebp + 0x2ee]
    X86_AT(c, 0x4a5eu);
    c.r[0] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x2EEu)));
    // 004a66  mov eax, dword ptr cs:[eax*8 + 0x4ba8]
    X86_AT(c, 0x4a66u);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 8 + 0x4BA8u)));
    // 004a6e  mov dword ptr gs:[ebp + 0x2f4], eax
    X86_AT(c, 0x4a6eu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2F4u)), c.r[0]);
    // 004a75  movsx eax, dx
    X86_AT(c, 0x4a75u);
    c.r[0] = (uint32_t)(int32_t)(int16_t)(c.r[2] & 0xFFFFu);
    // 004a78  imul eax, dword ptr gs:[ebp + 0x20]
    X86_AT(c, 0x4a78u);
    c.r[0] = x86_imul2(c, c.r[0], rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x20u))), 4);
    // 004a7d  add eax, dword ptr gs:[ebp]
    X86_AT(c, 0x4a7du);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5]))), 0, 4); }
    // 004a81  mov dword ptr gs:[ebp + 0x1cc], eax
    X86_AT(c, 0x4a81u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu)), c.r[0]);
    // 004a88  push eax
    X86_AT(c, 0x4a88u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 004a89  call dword ptr gs:[ebp + 0x32c]
    X86_AT(c, 0x4a89u);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x32Cu))); push32(c, 0x4a90u); x86_call(c, t); X86_RET(c, 0x4a90u); }
    X86_TICK(c, 22);
    // 004a90  pop dword ptr gs:[ebp + 0x1cc]
    X86_AT(c, 0x4a90u);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu)), v); }
    // 004a97  pop dword ptr gs:[ebp + 0x10c]
    X86_AT(c, 0x4a97u);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x10Cu)), v); }
    // 004a9e  pop dword ptr gs:[ebp + 0x104]
    X86_AT(c, 0x4a9eu);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u)), v); }
    // 004aa5  call 0x36e4
    X86_AT(c, 0x4aa5u);
    push32(c, 0x4aaau); f_000036e4(c); X86_RET(c, 0x4aaau);
    X86_TICK(c, 7);
    // 004aaa  call 0x6120
    X86_AT(c, 0x4aaau);
    push32(c, 0x4aafu); f_00006120(c); X86_RET(c, 0x4aafu);
    X86_TICK(c, 32);
    // 004aaf  mov ebx, dword ptr gs:[ebp + 0x2f0]
    X86_AT(c, 0x4aafu);
    c.r[3] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2F0u)));
    // 004ab6  shld edx, ebx, 0x10
    X86_AT(c, 0x4ab6u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_double(c, true, v, c.r[3], 0x10u, 4, w); if (w) c.r[2] = r; }
    // 004aba  and bl, 0xe0
    X86_AT(c, 0x4abau);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v & 0xE0u, 1)); }
    // 004abd  mov esi, dword ptr gs:[ebp + 0x2e8]
    X86_AT(c, 0x4abdu);
    c.r[6] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2E8u)));
    // 004ac4  movzx eax, byte ptr gs:[ebp + 0x2ee]
    X86_AT(c, 0x4ac4u);
    c.r[0] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x2EEu)));
    // 004acc  mov eax, dword ptr cs:[eax*8 + 0x4bac]
    X86_AT(c, 0x4accu);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 8 + 0x4BACu)));
    // 004ad4  mov dword ptr gs:[ebp + 0x2f4], eax
    X86_AT(c, 0x4ad4u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2F4u)), c.r[0]);
    // 004adb  call dword ptr gs:[ebp + 0x32c]
    X86_AT(c, 0x4adbu);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x32Cu))); push32(c, 0x4ae2u); x86_call(c, t); X86_RET(c, 0x4ae2u); }
    X86_TICK(c, 15);
    // 004ae2  pop dword ptr gs:[ebp + 0x10]
    X86_AT(c, 0x4ae2u);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x10u)), v); }
    // 004ae6  ret 
    X86_AT(c, 0x4ae6u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x4a5cu, "ran off the end of a function");
}
void f_00004a5e(X86Cpu& c) {
    X86_TICK(c, 54);
    // 004a5e  movzx eax, byte ptr gs:[ebp + 0x2ee]
    X86_AT(c, 0x4a5eu);
    c.r[0] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x2EEu)));
    // 004a66  mov eax, dword ptr cs:[eax*8 + 0x4ba8]
    X86_AT(c, 0x4a66u);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 8 + 0x4BA8u)));
    // 004a6e  mov dword ptr gs:[ebp + 0x2f4], eax
    X86_AT(c, 0x4a6eu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2F4u)), c.r[0]);
    // 004a75  movsx eax, dx
    X86_AT(c, 0x4a75u);
    c.r[0] = (uint32_t)(int32_t)(int16_t)(c.r[2] & 0xFFFFu);
    // 004a78  imul eax, dword ptr gs:[ebp + 0x20]
    X86_AT(c, 0x4a78u);
    c.r[0] = x86_imul2(c, c.r[0], rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x20u))), 4);
    // 004a7d  add eax, dword ptr gs:[ebp]
    X86_AT(c, 0x4a7du);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5]))), 0, 4); }
    // 004a81  mov dword ptr gs:[ebp + 0x1cc], eax
    X86_AT(c, 0x4a81u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu)), c.r[0]);
    // 004a88  push eax
    X86_AT(c, 0x4a88u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 004a89  call dword ptr gs:[ebp + 0x32c]
    X86_AT(c, 0x4a89u);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x32Cu))); push32(c, 0x4a90u); x86_call(c, t); X86_RET(c, 0x4a90u); }
    X86_TICK(c, 22);
    // 004a90  pop dword ptr gs:[ebp + 0x1cc]
    X86_AT(c, 0x4a90u);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu)), v); }
    // 004a97  pop dword ptr gs:[ebp + 0x10c]
    X86_AT(c, 0x4a97u);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x10Cu)), v); }
    // 004a9e  pop dword ptr gs:[ebp + 0x104]
    X86_AT(c, 0x4a9eu);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u)), v); }
    // 004aa5  call 0x36e4
    X86_AT(c, 0x4aa5u);
    push32(c, 0x4aaau); f_000036e4(c); X86_RET(c, 0x4aaau);
    X86_TICK(c, 7);
    // 004aaa  call 0x6120
    X86_AT(c, 0x4aaau);
    push32(c, 0x4aafu); f_00006120(c); X86_RET(c, 0x4aafu);
    X86_TICK(c, 32);
    // 004aaf  mov ebx, dword ptr gs:[ebp + 0x2f0]
    X86_AT(c, 0x4aafu);
    c.r[3] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2F0u)));
    // 004ab6  shld edx, ebx, 0x10
    X86_AT(c, 0x4ab6u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_double(c, true, v, c.r[3], 0x10u, 4, w); if (w) c.r[2] = r; }
    // 004aba  and bl, 0xe0
    X86_AT(c, 0x4abau);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v & 0xE0u, 1)); }
    // 004abd  mov esi, dword ptr gs:[ebp + 0x2e8]
    X86_AT(c, 0x4abdu);
    c.r[6] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2E8u)));
    // 004ac4  movzx eax, byte ptr gs:[ebp + 0x2ee]
    X86_AT(c, 0x4ac4u);
    c.r[0] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x2EEu)));
    // 004acc  mov eax, dword ptr cs:[eax*8 + 0x4bac]
    X86_AT(c, 0x4accu);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 8 + 0x4BACu)));
    // 004ad4  mov dword ptr gs:[ebp + 0x2f4], eax
    X86_AT(c, 0x4ad4u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2F4u)), c.r[0]);
    // 004adb  call dword ptr gs:[ebp + 0x32c]
    X86_AT(c, 0x4adbu);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x32Cu))); push32(c, 0x4ae2u); x86_call(c, t); X86_RET(c, 0x4ae2u); }
    X86_TICK(c, 15);
    // 004ae2  pop dword ptr gs:[ebp + 0x10]
    X86_AT(c, 0x4ae2u);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x10u)), v); }
    // 004ae6  ret 
    X86_AT(c, 0x4ae6u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x4a5eu, "ran off the end of a function");
}
}

#include "p_game_funcs.h"
namespace p_game {
void f_000bd628(X86Cpu& c) {
    X86_TICK(c, 41);
    // 0bd628  push ebp
    X86_AT(c, 0xbd628u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0bd629  mov ebp, esp
    X86_AT(c, 0xbd629u);
    c.r[5] = c.r[4];
    // 0bd62b  push ebx
    X86_AT(c, 0xbd62bu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0bd62c  push esi
    X86_AT(c, 0xbd62cu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0bd62d  push edi
    X86_AT(c, 0xbd62du);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0bd62e  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0xbd62eu);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0bd631  mov esi, dword ptr [edi]
    X86_AT(c, 0xbd631u);
    c.r[6] = rd32((c.sbase[3] + (uint32_t)(c.r[7])));
    // 0bd633  mov eax, dword ptr [ebp + 0xc]
    X86_AT(c, 0xbd633u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0bd636  mov ebx, dword ptr [eax]
    X86_AT(c, 0xbd636u);
    c.r[3] = rd32((c.sbase[3] + (uint32_t)(c.r[0])));
    // 0bd638  movzx edx, byte ptr [ebp + 0x10]
    X86_AT(c, 0xbd638u);
    c.r[2] = rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u)));
    // 0bd63c  sub edx, 3
    X86_AT(c, 0xbd63cu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, 0x3u, 0, 4); }
    // 0bd63f  cmp edx, 4
    X86_AT(c, 0xbd63fu);
    (void)x86_sub(c, c.r[2], 0x4u, 0, 4);
    // 0bd642  ja 0xbd688
    X86_AT(c, 0xbd642u);
    if (x86_cc(c, 7)) { goto L_bd688; }
    X86_TICK(c, 7);
    // 0bd644  jmp dword ptr cs:[edx*4 + 0xbd64c]
    X86_AT(c, 0xbd644u);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xBD64Cu)));
      switch (t) {
      case 0xbd660u: goto L_bd660;
      case 0xbd66au: goto L_bd66a;
      case 0xbd675u: goto L_bd675;
      case 0xbd680u: goto L_bd680;
      case 0xbd688u: goto L_bd688;
      default: x86_jump(c, t); return; } }
L_bd660:
    X86_TICK(c, 9);
    // 0bd660  dec ebx
    X86_AT(c, 0xbd660u);
    { uint32_t v = c.r[3]; c.r[3] = x86_dec(c, v, 4); }
    // 0bd661  and ebx, ebx
    X86_AT(c, 0xbd661u);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & c.r[3], 4); }
    // 0bd663  jge 0xbd688
    X86_AT(c, 0xbd663u);
    if (x86_cc(c, 13)) { goto L_bd688; }
    X86_TICK(c, 9);
    // 0bd665  add ebx, 0x40
    X86_AT(c, 0xbd665u);
    { uint32_t v = c.r[3]; c.r[3] = x86_add(c, v, 0x40u, 0, 4); }
    // 0bd668  jmp 0xbd688
    X86_AT(c, 0xbd668u);
    goto L_bd688;
L_bd66a:
    X86_TICK(c, 9);
    // 0bd66a  inc ebx
    X86_AT(c, 0xbd66au);
    { uint32_t v = c.r[3]; c.r[3] = x86_inc(c, v, 4); }
    // 0bd66b  cmp ebx, 0x3f
    X86_AT(c, 0xbd66bu);
    (void)x86_sub(c, c.r[3], 0x3Fu, 0, 4);
    // 0bd66e  jle 0xbd688
    X86_AT(c, 0xbd66eu);
    if (x86_cc(c, 14)) { goto L_bd688; }
    X86_TICK(c, 9);
    // 0bd670  sub ebx, 0x40
    X86_AT(c, 0xbd670u);
    { uint32_t v = c.r[3]; c.r[3] = x86_sub(c, v, 0x40u, 0, 4); }
    // 0bd673  jmp 0xbd688
    X86_AT(c, 0xbd673u);
    goto L_bd688;
L_bd675:
    X86_TICK(c, 9);
    // 0bd675  inc esi
    X86_AT(c, 0xbd675u);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 0bd676  cmp esi, 0x3f
    X86_AT(c, 0xbd676u);
    (void)x86_sub(c, c.r[6], 0x3Fu, 0, 4);
    // 0bd679  jle 0xbd688
    X86_AT(c, 0xbd679u);
    if (x86_cc(c, 14)) { goto L_bd688; }
    X86_TICK(c, 9);
    // 0bd67b  sub esi, 0x40
    X86_AT(c, 0xbd67bu);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, 0x40u, 0, 4); }
    // 0bd67e  jmp 0xbd688
    X86_AT(c, 0xbd67eu);
    goto L_bd688;
L_bd680:
    X86_TICK(c, 9);
    // 0bd680  dec esi
    X86_AT(c, 0xbd680u);
    { uint32_t v = c.r[6]; c.r[6] = x86_dec(c, v, 4); }
    // 0bd681  and esi, esi
    X86_AT(c, 0xbd681u);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & c.r[6], 4); }
    // 0bd683  jge 0xbd688
    X86_AT(c, 0xbd683u);
    if (x86_cc(c, 13)) { goto L_bd688; }
    X86_TICK(c, 2);
    // 0bd685  add esi, 0x40
    X86_AT(c, 0xbd685u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x40u, 0, 4); }
L_bd688:
    X86_TICK(c, 11);
    // 0bd688  push ebx
    X86_AT(c, 0xbd688u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0bd689  push esi
    X86_AT(c, 0xbd689u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0bd68a  call 0xbd6b4
    X86_AT(c, 0xbd68au);
    push32(c, 0xbd68fu); x86_call_known(c, 0xbd6b4u, f_000bd6b4); X86_RET(c, 0xbd68fu);
    X86_TICK(c, 7);
    // 0bd68f  call 0xbd7c8
    X86_AT(c, 0xbd68fu);
    push32(c, 0xbd694u); x86_call_known(c, 0xbd7c8u, f_000bd7c8); X86_RET(c, 0xbd694u);
    X86_TICK(c, 11);
    // 0bd694  push ebx
    X86_AT(c, 0xbd694u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0bd695  push esi
    X86_AT(c, 0xbd695u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0bd696  call 0xb7aa0
    X86_AT(c, 0xbd696u);
    push32(c, 0xbd69bu); x86_call_known(c, 0xb7aa0u, f_000b7aa0); X86_RET(c, 0xbd69bu);
    X86_TICK(c, 13);
    // 0bd69b  push 0
    X86_AT(c, 0xbd69bu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0bd69d  push ebx
    X86_AT(c, 0xbd69du);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0bd69e  push esi
    X86_AT(c, 0xbd69eu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0bd69f  call 0xbd068
    X86_AT(c, 0xbd69fu);
    push32(c, 0xbd6a4u); x86_call_known(c, 0xbd068u, f_000bd068); X86_RET(c, 0xbd6a4u);
    X86_TICK(c, 38);
    // 0bd6a4  mov dword ptr [edi], esi
    X86_AT(c, 0xbd6a4u);
    wr32((c.sbase[3] + (uint32_t)(c.r[7])), c.r[6]);
    // 0bd6a6  mov eax, dword ptr [ebp + 0xc]
    X86_AT(c, 0xbd6a6u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0bd6a9  mov dword ptr [eax], ebx
    X86_AT(c, 0xbd6a9u);
    wr32((c.sbase[3] + (uint32_t)(c.r[0])), c.r[3]);
    // 0bd6ab  add esp, 0x1c
    X86_AT(c, 0xbd6abu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x1Cu, 0, 4); }
    // 0bd6ae  pop edi
    X86_AT(c, 0xbd6aeu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0bd6af  pop esi
    X86_AT(c, 0xbd6afu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0bd6b0  pop ebx
    X86_AT(c, 0xbd6b0u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0bd6b1  leave 
    X86_AT(c, 0xbd6b1u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0bd6b2  ret 
    X86_AT(c, 0xbd6b2u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xbd628u, "ran off the end of a function");
}
void f_000bd6b4(X86Cpu& c) {
    X86_TICK(c, 28);
    // 0bd6b4  push ebp
    X86_AT(c, 0xbd6b4u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0bd6b5  mov ebp, esp
    X86_AT(c, 0xbd6b5u);
    c.r[5] = c.r[4];
    // 0bd6b7  push eax
    X86_AT(c, 0xbd6b7u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0bd6b8  push ebx
    X86_AT(c, 0xbd6b8u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0bd6b9  push esi
    X86_AT(c, 0xbd6b9u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0bd6ba  push edi
    X86_AT(c, 0xbd6bau);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0bd6bb  mov edi, dword ptr [ebp + 0xc]
    X86_AT(c, 0xbd6bbu);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0bd6be  cmp dword ptr [0x9c53c], 0
    X86_AT(c, 0xbd6beu);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0x9C53Cu))), 0x0u, 0, 4);
    // 0bd6c5  je 0xbd6d8
    X86_AT(c, 0xbd6c5u);
    if (x86_cc(c, 4)) { goto L_bd6d8; }
    X86_TICK(c, 14);
    // 0bd6c7  push edi
    X86_AT(c, 0xbd6c7u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0bd6c8  push dword ptr [ebp + 8]
    X86_AT(c, 0xbd6c8u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, v); }
    // 0bd6cb  call 0xbd748
    X86_AT(c, 0xbd6cbu);
    push32(c, 0xbd6d0u); x86_call_known(c, 0xbd748u, f_000bd748); X86_RET(c, 0xbd6d0u);
    X86_TICK(c, 9);
    // 0bd6d0  add esp, 8
    X86_AT(c, 0xbd6d0u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0bd6d3  jmp 0xbd743
    X86_AT(c, 0xbd6d3u);
    goto L_bd743;
L_bd6d8:
    X86_TICK(c, 18);
    // 0bd6d8  sub dword ptr [ebp + 8], 5
    X86_AT(c, 0xbd6d8u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)); uint32_t v = rd32(ea); wr32(ea, x86_sub(c, v, 0x5u, 0, 4)); }
    // 0bd6dc  mov eax, dword ptr [ebp + 8]
    X86_AT(c, 0xbd6dcu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0bd6df  and eax, eax
    X86_AT(c, 0xbd6dfu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0bd6e1  jge 0xbd6e7
    X86_AT(c, 0xbd6e1u);
    if (x86_cc(c, 13)) { goto L_bd6e7; }
    X86_TICK(c, 7);
    // 0bd6e3  add dword ptr [ebp + 8], 0x40
    X86_AT(c, 0xbd6e3u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0x40u, 0, 4)); }
L_bd6e7:
    X86_TICK(c, 9);
    // 0bd6e7  sub edi, 5
    X86_AT(c, 0xbd6e7u);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, 0x5u, 0, 4); }
    // 0bd6ea  and edi, edi
    X86_AT(c, 0xbd6eau);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & c.r[7], 4); }
    // 0bd6ec  jge 0xbd6f1
    X86_AT(c, 0xbd6ecu);
    if (x86_cc(c, 13)) { goto L_bd6f1; }
    X86_TICK(c, 2);
    // 0bd6ee  add edi, 0x40
    X86_AT(c, 0xbd6eeu);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x40u, 0, 4); }
L_bd6f1:
    X86_TICK(c, 2);
    // 0bd6f1  mov dword ptr [ebp - 4], 0
    X86_AT(c, 0xbd6f1u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), 0x0u);
L_bd6f8:
    X86_TICK(c, 12);
    // 0bd6f8  cmp dword ptr [ebp - 4], 0xb
    X86_AT(c, 0xbd6f8u);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))), 0xBu, 0, 4);
    // 0bd6fc  jge 0xbd743
    X86_AT(c, 0xbd6fcu);
    if (x86_cc(c, 13)) { goto L_bd743; }
    X86_TICK(c, 6);
    // 0bd6fe  mov ebx, dword ptr [ebp + 8]
    X86_AT(c, 0xbd6feu);
    c.r[3] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0bd701  sub esi, esi
    X86_AT(c, 0xbd701u);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[6], 0, 4); }
L_bd703:
    X86_TICK(c, 7);
    // 0bd703  cmp esi, 0xb
    X86_AT(c, 0xbd703u);
    (void)x86_sub(c, c.r[6], 0xBu, 0, 4);
    // 0bd706  jge 0xbd734
    X86_AT(c, 0xbd706u);
    if (x86_cc(c, 13)) { goto L_bd734; }
    X86_TICK(c, 30);
    // 0bd708  mov eax, edi
    X86_AT(c, 0xbd708u);
    c.r[0] = c.r[7];
    // 0bd70a  shl eax, 6
    X86_AT(c, 0xbd70au);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x6u, 4, w); if (w) c.r[0] = r; }
    // 0bd70d  add eax, ebx
    X86_AT(c, 0xbd70du);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, c.r[3], 0, 4); }
    // 0bd70f  mov edx, dword ptr [ebp - 4]
    X86_AT(c, 0xbd70fu);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0bd712  lea ecx, [edx + edx*8]
    X86_AT(c, 0xbd712u);
    c.r[1] = (uint32_t)(c.r[2] + c.r[2] * 8);
    // 0bd715  lea edx, [ecx + edx*2]
    X86_AT(c, 0xbd715u);
    c.r[2] = (uint32_t)(c.r[1] + c.r[2] * 2);
    // 0bd718  lea ecx, [esi + edx*1]
    X86_AT(c, 0xbd718u);
    c.r[1] = (uint32_t)(c.r[6] + c.r[2]);
    // 0bd71b  mov al, byte ptr [eax + 0x8afa8]
    X86_AT(c, 0xbd71bu);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[0] + 0x8AFA8u))));
    // 0bd721  mov byte ptr [ecx + 0x8cfa8], al
    X86_AT(c, 0xbd721u);
    wr8((c.sbase[3] + (uint32_t)(c.r[1] + 0x8CFA8u)), g8(c, 0));
    // 0bd727  cmp ebx, 0x3f
    X86_AT(c, 0xbd727u);
    (void)x86_sub(c, c.r[3], 0x3Fu, 0, 4);
    // 0bd72a  jne 0xbd730
    X86_AT(c, 0xbd72au);
    if (x86_cc(c, 5)) { goto L_bd730; }
    X86_TICK(c, 9);
    // 0bd72c  sub ebx, ebx
    X86_AT(c, 0xbd72cu);
    { uint32_t v = c.r[3]; c.r[3] = x86_sub(c, v, c.r[3], 0, 4); }
    // 0bd72e  jmp 0xbd731
    X86_AT(c, 0xbd72eu);
    goto L_bd731;
L_bd730:
    X86_TICK(c, 2);
    // 0bd730  inc ebx
    X86_AT(c, 0xbd730u);
    { uint32_t v = c.r[3]; c.r[3] = x86_inc(c, v, 4); }
L_bd731:
    X86_TICK(c, 9);
    // 0bd731  inc esi
    X86_AT(c, 0xbd731u);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 0bd732  jmp 0xbd703
    X86_AT(c, 0xbd732u);
    X86_POLL(c, 0xbd703u); goto L_bd703;
L_bd734:
    X86_TICK(c, 7);
    // 0bd734  cmp edi, 0x3f
    X86_AT(c, 0xbd734u);
    (void)x86_sub(c, c.r[7], 0x3Fu, 0, 4);
    // 0bd737  jne 0xbd73d
    X86_AT(c, 0xbd737u);
    if (x86_cc(c, 5)) { goto L_bd73d; }
    X86_TICK(c, 9);
    // 0bd739  sub edi, edi
    X86_AT(c, 0xbd739u);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
    // 0bd73b  jmp 0xbd73e
    X86_AT(c, 0xbd73bu);
    goto L_bd73e;
L_bd73d:
    X86_TICK(c, 2);
    // 0bd73d  inc edi
    X86_AT(c, 0xbd73du);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
L_bd73e:
    X86_TICK(c, 13);
    // 0bd73e  inc dword ptr [ebp - 4]
    X86_AT(c, 0xbd73eu);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0bd741  jmp 0xbd6f8
    X86_AT(c, 0xbd741u);
    X86_POLL(c, 0xbd6f8u); goto L_bd6f8;
L_bd743:
    X86_TICK(c, 28);
    // 0bd743  pop edi
    X86_AT(c, 0xbd743u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0bd744  pop esi
    X86_AT(c, 0xbd744u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0bd745  pop ebx
    X86_AT(c, 0xbd745u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0bd746  leave 
    X86_AT(c, 0xbd746u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0bd747  ret 
    X86_AT(c, 0xbd747u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xbd6b4u, "ran off the end of a function");
}
void f_000bd748(X86Cpu& c) {
    X86_TICK(c, 27);
    // 0bd748  push ebp
    X86_AT(c, 0xbd748u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0bd749  mov ebp, esp
    X86_AT(c, 0xbd749u);
    c.r[5] = c.r[4];
    // 0bd74b  push eax
    X86_AT(c, 0xbd74bu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0bd74c  push ebx
    X86_AT(c, 0xbd74cu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0bd74d  push esi
    X86_AT(c, 0xbd74du);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0bd74e  push edi
    X86_AT(c, 0xbd74eu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0bd74f  mov edi, dword ptr [ebp + 0xc]
    X86_AT(c, 0xbd74fu);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0bd752  sub dword ptr [ebp + 8], 5
    X86_AT(c, 0xbd752u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)); uint32_t v = rd32(ea); wr32(ea, x86_sub(c, v, 0x5u, 0, 4)); }
    // 0bd756  sub edi, 5
    X86_AT(c, 0xbd756u);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, 0x5u, 0, 4); }
    // 0bd759  mov dword ptr [ebp - 4], 0
    X86_AT(c, 0xbd759u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), 0x0u);
L_bd760:
    X86_TICK(c, 12);
    // 0bd760  cmp dword ptr [ebp - 4], 0xb
    X86_AT(c, 0xbd760u);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))), 0xBu, 0, 4);
    // 0bd764  jge 0xbd7c1
    X86_AT(c, 0xbd764u);
    if (x86_cc(c, 13)) { goto L_bd7c1; }
    X86_TICK(c, 6);
    // 0bd766  mov ebx, dword ptr [ebp + 8]
    X86_AT(c, 0xbd766u);
    c.r[3] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0bd769  sub esi, esi
    X86_AT(c, 0xbd769u);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[6], 0, 4); }
L_bd76b:
    X86_TICK(c, 7);
    // 0bd76b  cmp esi, 0xb
    X86_AT(c, 0xbd76bu);
    (void)x86_sub(c, c.r[6], 0xBu, 0, 4);
    // 0bd76e  jge 0xbd7bb
    X86_AT(c, 0xbd76eu);
    if (x86_cc(c, 13)) { goto L_bd7bb; }
    X86_TICK(c, 7);
    // 0bd770  and ebx, ebx
    X86_AT(c, 0xbd770u);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & c.r[3], 4); }
    // 0bd772  jl 0xbd782
    X86_AT(c, 0xbd772u);
    if (x86_cc(c, 12)) { goto L_bd782; }
    X86_TICK(c, 7);
    // 0bd774  and edi, edi
    X86_AT(c, 0xbd774u);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & c.r[7], 4); }
    // 0bd776  jl 0xbd782
    X86_AT(c, 0xbd776u);
    if (x86_cc(c, 12)) { goto L_bd782; }
    X86_TICK(c, 7);
    // 0bd778  cmp ebx, 0x40
    X86_AT(c, 0xbd778u);
    (void)x86_sub(c, c.r[3], 0x40u, 0, 4);
    // 0bd77b  jge 0xbd782
    X86_AT(c, 0xbd77bu);
    if (x86_cc(c, 13)) { goto L_bd782; }
    X86_TICK(c, 7);
    // 0bd77d  cmp edi, 0x40
    X86_AT(c, 0xbd77du);
    (void)x86_sub(c, c.r[7], 0x40u, 0, 4);
    // 0bd780  jl 0xbd797
    X86_AT(c, 0xbd780u);
    if (x86_cc(c, 12)) { goto L_bd797; }
L_bd782:
    X86_TICK(c, 19);
    // 0bd782  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0xbd782u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0bd785  lea edx, [eax + eax*8]
    X86_AT(c, 0xbd785u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 8);
    // 0bd788  lea eax, [edx + eax*2]
    X86_AT(c, 0xbd788u);
    c.r[0] = (uint32_t)(c.r[2] + c.r[0] * 2);
    // 0bd78b  lea edx, [esi + eax*1]
    X86_AT(c, 0xbd78bu);
    c.r[2] = (uint32_t)(c.r[6] + c.r[0]);
    // 0bd78e  mov byte ptr [edx + 0x8cfa8], 2
    X86_AT(c, 0xbd78eu);
    wr8((c.sbase[3] + (uint32_t)(c.r[2] + 0x8CFA8u)), 0x2u);
    // 0bd795  jmp 0xbd7b7
    X86_AT(c, 0xbd795u);
    goto L_bd7b7;
L_bd797:
    X86_TICK(c, 23);
    // 0bd797  mov eax, edi
    X86_AT(c, 0xbd797u);
    c.r[0] = c.r[7];
    // 0bd799  shl eax, 6
    X86_AT(c, 0xbd799u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x6u, 4, w); if (w) c.r[0] = r; }
    // 0bd79c  lea edx, [ebx + eax*1]
    X86_AT(c, 0xbd79cu);
    c.r[2] = (uint32_t)(c.r[3] + c.r[0]);
    // 0bd79f  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0xbd79fu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0bd7a2  lea ecx, [eax + eax*8]
    X86_AT(c, 0xbd7a2u);
    c.r[1] = (uint32_t)(c.r[0] + c.r[0] * 8);
    // 0bd7a5  lea eax, [ecx + eax*2]
    X86_AT(c, 0xbd7a5u);
    c.r[0] = (uint32_t)(c.r[1] + c.r[0] * 2);
    // 0bd7a8  lea ecx, [esi + eax*1]
    X86_AT(c, 0xbd7a8u);
    c.r[1] = (uint32_t)(c.r[6] + c.r[0]);
    // 0bd7ab  mov al, byte ptr [edx + 0x8afa8]
    X86_AT(c, 0xbd7abu);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[2] + 0x8AFA8u))));
    // 0bd7b1  mov byte ptr [ecx + 0x8cfa8], al
    X86_AT(c, 0xbd7b1u);
    wr8((c.sbase[3] + (uint32_t)(c.r[1] + 0x8CFA8u)), g8(c, 0));
L_bd7b7:
    X86_TICK(c, 11);
    // 0bd7b7  inc ebx
    X86_AT(c, 0xbd7b7u);
    { uint32_t v = c.r[3]; c.r[3] = x86_inc(c, v, 4); }
    // 0bd7b8  inc esi
    X86_AT(c, 0xbd7b8u);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 0bd7b9  jmp 0xbd76b
    X86_AT(c, 0xbd7b9u);
    X86_POLL(c, 0xbd76bu); goto L_bd76b;
L_bd7bb:
    X86_TICK(c, 15);
    // 0bd7bb  inc edi
    X86_AT(c, 0xbd7bbu);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0bd7bc  inc dword ptr [ebp - 4]
    X86_AT(c, 0xbd7bcu);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0bd7bf  jmp 0xbd760
    X86_AT(c, 0xbd7bfu);
    X86_POLL(c, 0xbd760u); goto L_bd760;
L_bd7c1:
    X86_TICK(c, 28);
    // 0bd7c1  pop edi
    X86_AT(c, 0xbd7c1u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0bd7c2  pop esi
    X86_AT(c, 0xbd7c2u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0bd7c3  pop ebx
    X86_AT(c, 0xbd7c3u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0bd7c4  leave 
    X86_AT(c, 0xbd7c4u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0bd7c5  ret 
    X86_AT(c, 0xbd7c5u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xbd748u, "ran off the end of a function");
}
void f_000bd7c8(X86Cpu& c) {
    X86_TICK(c, 14);
    // 0bd7c8  push ebp
    X86_AT(c, 0xbd7c8u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0bd7c9  mov ebp, esp
    X86_AT(c, 0xbd7c9u);
    c.r[5] = c.r[4];
    // 0bd7cb  sub esp, 8
    X86_AT(c, 0xbd7cbu);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, 0x8u, 0, 4); }
    // 0bd7ce  push ebx
    X86_AT(c, 0xbd7ceu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0bd7cf  push esi
    X86_AT(c, 0xbd7cfu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0bd7d0  push edi
    X86_AT(c, 0xbd7d0u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0bd7d1  mov word ptr [ebp - 2], 0
    X86_AT(c, 0xbd7d1u);
    wr16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFEu)), 0x0u);
L_bd7d7:
    X86_TICK(c, 12);
    // 0bd7d7  cmp word ptr [ebp - 2], 0xb
    X86_AT(c, 0xbd7d7u);
    (void)x86_sub(c, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFEu))), 0xBu, 0, 2);
    // 0bd7dc  jge 0xbd89d
    X86_AT(c, 0xbd7dcu);
    if (x86_cc(c, 13)) { goto L_bd89d; }
    X86_TICK(c, 2);
    // 0bd7e2  sub ebx, ebx
    X86_AT(c, 0xbd7e2u);
    { uint32_t v = c.r[3]; c.r[3] = x86_sub(c, v, c.r[3], 0, 4); }
L_bd7e4:
    X86_TICK(c, 7);
    // 0bd7e4  cmp bx, 0xb
    X86_AT(c, 0xbd7e4u);
    (void)x86_sub(c, (c.r[3] & 0xFFFFu), 0xBu, 0, 2);
    // 0bd7e8  jge 0xbd894
    X86_AT(c, 0xbd7e8u);
    if (x86_cc(c, 13)) { goto L_bd894; }
    X86_TICK(c, 8);
    // 0bd7ee  mov edi, ebx
    X86_AT(c, 0xbd7eeu);
    c.r[7] = c.r[3];
    // 0bd7f0  mov si, word ptr [ebp - 2]
    X86_AT(c, 0xbd7f0u);
    s16(c, 6, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFEu))));
    // 0bd7f4  mov dword ptr [ebp - 8], 0
    X86_AT(c, 0xbd7f4u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), 0x0u);
L_bd7fb:
    X86_TICK(c, 12);
    // 0bd7fb  cmp dword ptr [ebp - 8], 0
    X86_AT(c, 0xbd7fbu);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u))), 0x0u, 0, 4);
    // 0bd7ff  jne 0xbd88e
    X86_AT(c, 0xbd7ffu);
    if (x86_cc(c, 5)) { goto L_bd88e; }
    X86_TICK(c, 27);
    // 0bd805  mov eax, 0x46200
    X86_AT(c, 0xbd805u);
    c.r[0] = 0x46200u;
    // 0bd80a  movsx edx, di
    X86_AT(c, 0xbd80au);
    c.r[2] = (uint32_t)(int32_t)(int16_t)(c.r[7] & 0xFFFFu);
    // 0bd80d  add di, word ptr [eax + edx*2 + 0x56504]
    X86_AT(c, 0xbd80du);
    { uint32_t v = (c.r[7] & 0xFFFFu); s16(c, 7, x86_add(c, v, rd16((c.sbase[3] + (uint32_t)(c.r[0] + c.r[2] * 2 + 0x56504u))), 0, 2)); }
    // 0bd815  movsx edx, si
    X86_AT(c, 0xbd815u);
    c.r[2] = (uint32_t)(int32_t)(int16_t)(c.r[6] & 0xFFFFu);
    // 0bd818  add si, word ptr [eax + edx*2 + 0x56504]
    X86_AT(c, 0xbd818u);
    { uint32_t v = (c.r[6] & 0xFFFFu); s16(c, 6, x86_add(c, v, rd16((c.sbase[3] + (uint32_t)(c.r[0] + c.r[2] * 2 + 0x56504u))), 0, 2)); }
    // 0bd820  cmp di, 5
    X86_AT(c, 0xbd820u);
    (void)x86_sub(c, (c.r[7] & 0xFFFFu), 0x5u, 0, 2);
    // 0bd824  jne 0xbd845
    X86_AT(c, 0xbd824u);
    if (x86_cc(c, 5)) { goto L_bd845; }
    X86_TICK(c, 7);
    // 0bd826  cmp si, 5
    X86_AT(c, 0xbd826u);
    (void)x86_sub(c, (c.r[6] & 0xFFFFu), 0x5u, 0, 2);
    // 0bd82a  jne 0xbd845
    X86_AT(c, 0xbd82au);
    if (x86_cc(c, 5)) { goto L_bd845; }
    X86_TICK(c, 24);
    // 0bd82c  movsx edx, word ptr [ebp - 2]
    X86_AT(c, 0xbd82cu);
    c.r[2] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFEu)));
    // 0bd830  lea ecx, [edx + edx*8]
    X86_AT(c, 0xbd830u);
    c.r[1] = (uint32_t)(c.r[2] + c.r[2] * 8);
    // 0bd833  lea edx, [ecx + edx*2]
    X86_AT(c, 0xbd833u);
    c.r[2] = (uint32_t)(c.r[1] + c.r[2] * 2);
    // 0bd836  movsx ecx, bx
    X86_AT(c, 0xbd836u);
    c.r[1] = (uint32_t)(int32_t)(int16_t)(c.r[3] & 0xFFFFu);
    // 0bd839  add ecx, edx
    X86_AT(c, 0xbd839u);
    { uint32_t v = c.r[1]; c.r[1] = x86_add(c, v, c.r[2], 0, 4); }
    // 0bd83b  mov byte ptr [eax + ecx*1 + 0x46e24], 0
    X86_AT(c, 0xbd83bu);
    wr8((c.sbase[3] + (uint32_t)(c.r[0] + c.r[1] + 0x46E24u)), 0x0u);
    // 0bd843  jmp 0xbd88e
    X86_AT(c, 0xbd843u);
    goto L_bd88e;
L_bd845:
    X86_TICK(c, 30);
    // 0bd845  mov eax, esi
    X86_AT(c, 0xbd845u);
    c.r[0] = c.r[6];
    // 0bd847  movsx eax, ax
    X86_AT(c, 0xbd847u);
    c.r[0] = (uint32_t)(int32_t)(int16_t)(c.r[0] & 0xFFFFu);
    // 0bd84a  lea edx, [eax + eax*8]
    X86_AT(c, 0xbd84au);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 8);
    // 0bd84d  lea eax, [edx + eax*2]
    X86_AT(c, 0xbd84du);
    c.r[0] = (uint32_t)(c.r[2] + c.r[0] * 2);
    // 0bd850  movsx edx, di
    X86_AT(c, 0xbd850u);
    c.r[2] = (uint32_t)(int32_t)(int16_t)(c.r[7] & 0xFFFFu);
    // 0bd853  add edx, eax
    X86_AT(c, 0xbd853u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0bd855  movzx eax, byte ptr [edx + 0x8cfa8]
    X86_AT(c, 0xbd855u);
    c.r[0] = rd8((c.sbase[3] + (uint32_t)(c.r[2] + 0x8CFA8u)));
    // 0bd85c  xchg edx, eax
    X86_AT(c, 0xbd85cu);
    { uint32_t t = c.r[2]; c.r[2] = c.r[0]; c.r[0] = t; }
    // 0bd85d  cmp edx, 4
    X86_AT(c, 0xbd85du);
    (void)x86_sub(c, c.r[2], 0x4u, 0, 4);
    // 0bd860  je 0xbd86c
    X86_AT(c, 0xbd860u);
    if (x86_cc(c, 4)) { goto L_bd86c; }
    X86_TICK(c, 7);
    // 0bd862  cmp edx, 5
    X86_AT(c, 0xbd862u);
    (void)x86_sub(c, c.r[2], 0x5u, 0, 4);
    // 0bd865  je 0xbd86c
    X86_AT(c, 0xbd865u);
    if (x86_cc(c, 4)) { goto L_bd86c; }
    X86_TICK(c, 7);
    // 0bd867  cmp edx, 0x24
    X86_AT(c, 0xbd867u);
    (void)x86_sub(c, c.r[2], 0x24u, 0, 4);
    // 0bd86a  jne 0xbd7fb
    X86_AT(c, 0xbd86au);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xbd7fbu); goto L_bd7fb; }
L_bd86c:
    X86_TICK(c, 26);
    // 0bd86c  movsx eax, word ptr [ebp - 2]
    X86_AT(c, 0xbd86cu);
    c.r[0] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFEu)));
    // 0bd870  lea edx, [eax + eax*8]
    X86_AT(c, 0xbd870u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 8);
    // 0bd873  lea eax, [edx + eax*2]
    X86_AT(c, 0xbd873u);
    c.r[0] = (uint32_t)(c.r[2] + c.r[0] * 2);
    // 0bd876  movsx edx, bx
    X86_AT(c, 0xbd876u);
    c.r[2] = (uint32_t)(int32_t)(int16_t)(c.r[3] & 0xFFFFu);
    // 0bd879  add edx, eax
    X86_AT(c, 0xbd879u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0bd87b  mov byte ptr [edx + 0x8d024], 1
    X86_AT(c, 0xbd87bu);
    wr8((c.sbase[3] + (uint32_t)(c.r[2] + 0x8D024u)), 0x1u);
    // 0bd882  mov dword ptr [ebp - 8], 1
    X86_AT(c, 0xbd882u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), 0x1u);
    // 0bd889  jmp 0xbd7fb
    X86_AT(c, 0xbd889u);
    X86_POLL(c, 0xbd7fbu); goto L_bd7fb;
L_bd88e:
    X86_TICK(c, 9);
    // 0bd88e  inc ebx
    X86_AT(c, 0xbd88eu);
    { uint32_t v = c.r[3]; c.r[3] = x86_inc(c, v, 4); }
    // 0bd88f  jmp 0xbd7e4
    X86_AT(c, 0xbd88fu);
    X86_POLL(c, 0xbd7e4u); goto L_bd7e4;
L_bd894:
    X86_TICK(c, 13);
    // 0bd894  inc word ptr [ebp - 2]
    X86_AT(c, 0xbd894u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFEu)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
    // 0bd898  jmp 0xbd7d7
    X86_AT(c, 0xbd898u);
    X86_POLL(c, 0xbd7d7u); goto L_bd7d7;
L_bd89d:
    X86_TICK(c, 28);
    // 0bd89d  pop edi
    X86_AT(c, 0xbd89du);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0bd89e  pop esi
    X86_AT(c, 0xbd89eu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0bd89f  pop ebx
    X86_AT(c, 0xbd89fu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0bd8a0  leave 
    X86_AT(c, 0xbd8a0u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0bd8a1  ret 
    X86_AT(c, 0xbd8a1u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xbd7c8u, "ran off the end of a function");
}
void f_000bd8a4(X86Cpu& c) {
    X86_TICK(c, 16);
    // 0bd8a4  mov eax, dword ptr [esp + 4]
    X86_AT(c, 0xbd8a4u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[4] + 0x4u)));
    // 0bd8a8  mov dword ptr [0x9c540], eax
    X86_AT(c, 0xbd8a8u);
    wr32((c.sbase[3] + (uint32_t)(0x9C540u)), c.r[0]);
    // 0bd8ad  ret 
    X86_AT(c, 0xbd8adu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xbd8a4u, "ran off the end of a function");
}
void f_000bd8b0(X86Cpu& c) {
    X86_TICK(c, 82);
    // 0bd8b0  push ebp
    X86_AT(c, 0xbd8b0u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0bd8b1  mov ebp, esp
    X86_AT(c, 0xbd8b1u);
    c.r[5] = c.r[4];
    // 0bd8b3  sub esp, 0x2c
    X86_AT(c, 0xbd8b3u);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, 0x2Cu, 0, 4); }
    // 0bd8b6  push ebx
    X86_AT(c, 0xbd8b6u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0bd8b7  push esi
    X86_AT(c, 0xbd8b7u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0bd8b8  push edi
    X86_AT(c, 0xbd8b8u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0bd8b9  mov eax, dword ptr [0x9c540]
    X86_AT(c, 0xbd8b9u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x9C540u)));
    // 0bd8be  mov dword ptr [ebp - 0x14], eax
    X86_AT(c, 0xbd8beu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu)), c.r[0]);
    // 0bd8c1  add dword ptr [ebp - 0x14], 4
    X86_AT(c, 0xbd8c1u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0x4u, 0, 4)); }
    // 0bd8c5  mov eax, dword ptr [eax]
    X86_AT(c, 0xbd8c5u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[0])));
    // 0bd8c7  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0xbd8c7u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
    // 0bd8ca  mov edx, dword ptr [ebp - 0x14]
    X86_AT(c, 0xbd8cau);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu)));
    // 0bd8cd  add dword ptr [ebp - 0x14], 4
    X86_AT(c, 0xbd8cdu);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0x4u, 0, 4)); }
    // 0bd8d1  mov edx, dword ptr [edx]
    X86_AT(c, 0xbd8d1u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[2])));
    // 0bd8d3  mov dword ptr [ebp - 0x18], edx
    X86_AT(c, 0xbd8d3u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE8u)), c.r[2]);
    // 0bd8d6  mov edx, dword ptr [ebp - 0x14]
    X86_AT(c, 0xbd8d6u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu)));
    // 0bd8d9  add dword ptr [ebp - 0x14], 4
    X86_AT(c, 0xbd8d9u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0x4u, 0, 4)); }
    // 0bd8dd  mov edx, dword ptr [edx]
    X86_AT(c, 0xbd8ddu);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[2])));
    // 0bd8df  mov dword ptr [ebp - 0x1c], edx
    X86_AT(c, 0xbd8dfu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE4u)), c.r[2]);
    // 0bd8e2  mov edx, dword ptr [ebp - 0x14]
    X86_AT(c, 0xbd8e2u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu)));
    // 0bd8e5  add dword ptr [ebp - 0x14], 4
    X86_AT(c, 0xbd8e5u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0x4u, 0, 4)); }
    // 0bd8e9  mov edx, dword ptr [edx]
    X86_AT(c, 0xbd8e9u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[2])));
    // 0bd8eb  mov dword ptr [ebp - 0x20], edx
    X86_AT(c, 0xbd8ebu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE0u)), c.r[2]);
L_bd8ee:
    X86_TICK(c, 18);
    // 0bd8ee  dec dword ptr [ebp - 4]
    X86_AT(c, 0xbd8eeu);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 0bd8f1  cmp dword ptr [ebp - 4], 0
    X86_AT(c, 0xbd8f1u);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))), 0x0u, 0, 4);
    // 0bd8f5  jle 0xbd9cf
    X86_AT(c, 0xbd8f5u);
    if (x86_cc(c, 14)) { goto L_bd9cf; }
    X86_TICK(c, 100);
    // 0bd8fb  mov eax, dword ptr [ebp - 0x14]
    X86_AT(c, 0xbd8fbu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu)));
    // 0bd8fe  add dword ptr [ebp - 0x14], 4
    X86_AT(c, 0xbd8feu);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0x4u, 0, 4)); }
    // 0bd902  mov eax, dword ptr [eax]
    X86_AT(c, 0xbd902u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[0])));
    // 0bd904  mov dword ptr [ebp - 0xc], eax
    X86_AT(c, 0xbd904u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)), c.r[0]);
    // 0bd907  mov edx, dword ptr [ebp - 0x14]
    X86_AT(c, 0xbd907u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu)));
    // 0bd90a  add dword ptr [ebp - 0x14], 4
    X86_AT(c, 0xbd90au);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0x4u, 0, 4)); }
    // 0bd90e  mov edx, dword ptr [edx]
    X86_AT(c, 0xbd90eu);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[2])));
    // 0bd910  mov dword ptr [ebp - 0x10], edx
    X86_AT(c, 0xbd910u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u)), c.r[2]);
    // 0bd913  mov ecx, 0x46200
    X86_AT(c, 0xbd913u);
    c.r[1] = 0x46200u;
    // 0bd918  shl eax, 5
    X86_AT(c, 0xbd918u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[0] = r; }
    // 0bd91b  cdq 
    X86_AT(c, 0xbd91bu);
    c.r[2] = (c.r[0] & 0x80000000u) ? 0xFFFFFFFFu : 0u;
    // 0bd91c  sub eax, edx
    X86_AT(c, 0xbd91cu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[2], 0, 4); }
    // 0bd91e  sar eax, 1
    X86_AT(c, 0xbd91eu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 7, v, 0x1u, 4, w); if (w) c.r[0] = r; }
    // 0bd920  mov edx, dword ptr [ebp - 0x10]
    X86_AT(c, 0xbd920u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u)));
    // 0bd923  mov dword ptr [ebp - 0x2c], eax
    X86_AT(c, 0xbd923u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFD4u)), c.r[0]);
    // 0bd926  lea eax, [edx + edx*4]
    X86_AT(c, 0xbd926u);
    c.r[0] = (uint32_t)(c.r[2] + c.r[2] * 4);
    // 0bd929  lea eax, [edx + eax*2]
    X86_AT(c, 0xbd929u);
    c.r[0] = (uint32_t)(c.r[2] + c.r[0] * 2);
    // 0bd92c  shl eax, 0xa
    X86_AT(c, 0xbd92cu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0xAu, 4, w); if (w) c.r[0] = r; }
    // 0bd92f  cdq 
    X86_AT(c, 0xbd92fu);
    c.r[2] = (c.r[0] & 0x80000000u) ? 0xFFFFFFFFu : 0u;
    // 0bd930  sub eax, edx
    X86_AT(c, 0xbd930u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[2], 0, 4); }
    // 0bd932  sar eax, 1
    X86_AT(c, 0xbd932u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 7, v, 0x1u, 4, w); if (w) c.r[0] = r; }
    // 0bd934  add eax, dword ptr [ebp - 0x2c]
    X86_AT(c, 0xbd934u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFD4u))), 0, 4); }
    // 0bd937  lea esi, [ecx + eax*1 + 0x46ea0]
    X86_AT(c, 0xbd937u);
    c.r[6] = (uint32_t)(c.r[1] + c.r[0] + 0x46EA0u);
    // 0bd93e  mov eax, dword ptr [ebp - 0x10]
    X86_AT(c, 0xbd93eu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u)));
    // 0bd941  lea edx, [eax + eax*8]
    X86_AT(c, 0xbd941u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 8);
    // 0bd944  lea eax, [edx + eax*2]
    X86_AT(c, 0xbd944u);
    c.r[0] = (uint32_t)(c.r[2] + c.r[0] * 2);
    // 0bd947  add eax, dword ptr [ebp - 0xc]
    X86_AT(c, 0xbd947u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u))), 0, 4); }
    // 0bd94a  cmp byte ptr [ecx + eax*1 + 0x46e24], 1
    X86_AT(c, 0xbd94au);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[1] + c.r[0] + 0x46E24u))), 0x1u, 0, 1);
    // 0bd952  jne 0xbd963
    X86_AT(c, 0xbd952u);
    if (x86_cc(c, 5)) { goto L_bd963; }
    X86_TICK(c, 12);
    // 0bd954  cmp byte ptr [ecx + 0x560a0], 1
    X86_AT(c, 0xbd954u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[1] + 0x560A0u))), 0x1u, 0, 1);
    // 0bd95b  jne 0xbd963
    X86_AT(c, 0xbd95bu);
    if (x86_cc(c, 5)) { goto L_bd963; }
    X86_TICK(c, 14);
    // 0bd95d  add dword ptr [ebp - 0x14], 4
    X86_AT(c, 0xbd95du);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0x4u, 0, 4)); }
    // 0bd961  jmp 0xbd8ee
    X86_AT(c, 0xbd961u);
    X86_POLL(c, 0xbd8eeu); goto L_bd8ee;
L_bd963:
    X86_TICK(c, 23);
    // 0bd963  mov eax, dword ptr [ebp - 0x14]
    X86_AT(c, 0xbd963u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu)));
    // 0bd966  add dword ptr [ebp - 0x14], 4
    X86_AT(c, 0xbd966u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0x4u, 0, 4)); }
    // 0bd96a  mov eax, dword ptr [eax]
    X86_AT(c, 0xbd96au);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[0])));
    // 0bd96c  mov eax, dword ptr [eax*4 + 0x9c2a4]
    X86_AT(c, 0xbd96cu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[0] * 4 + 0x9C2A4u)));
    // 0bd973  mov dword ptr [ebp - 0x28], eax
    X86_AT(c, 0xbd973u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFD8u)), c.r[0]);
    // 0bd976  mov dword ptr [ebp - 8], 0
    X86_AT(c, 0xbd976u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), 0x0u);
L_bd97d:
    X86_TICK(c, 12);
    // 0bd97d  cmp dword ptr [ebp - 8], 0x20
    X86_AT(c, 0xbd97du);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u))), 0x20u, 0, 4);
    // 0bd981  jge 0xbd8ee
    X86_AT(c, 0xbd981u);
    if (x86_cc(c, 13)) { X86_POLL(c, 0xbd8eeu); goto L_bd8ee; }
    X86_TICK(c, 2);
    // 0bd987  sub edi, edi
    X86_AT(c, 0xbd987u);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
L_bd989:
    X86_TICK(c, 7);
    // 0bd989  cmp edi, 0x10
    X86_AT(c, 0xbd989u);
    (void)x86_sub(c, c.r[7], 0x10u, 0, 4);
    // 0bd98c  jge 0xbd9c4
    X86_AT(c, 0xbd98cu);
    if (x86_cc(c, 13)) { goto L_bd9c4; }
    X86_TICK(c, 17);
    // 0bd98e  mov eax, dword ptr [ebp - 0x28]
    X86_AT(c, 0xbd98eu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFD8u)));
    // 0bd991  mov bl, byte ptr [eax]
    X86_AT(c, 0xbd991u);
    s8(c, 3, rd8((c.sbase[3] + (uint32_t)(c.r[0]))));
    // 0bd993  and bl, 0xf
    X86_AT(c, 0xbd993u);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v & 0xFu, 1)); }
    // 0bd996  and bl, bl
    X86_AT(c, 0xbd996u);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v & g8(c, 3), 1)); }
    // 0bd998  jne 0xbd9a0
    X86_AT(c, 0xbd998u);
    if (x86_cc(c, 5)) { goto L_bd9a0; }
    X86_TICK(c, 6);
    // 0bd99a  mov bl, byte ptr [esi + edi*1]
    X86_AT(c, 0xbd99au);
    s8(c, 3, rd8((c.sbase[3] + (uint32_t)(c.r[6] + c.r[7]))));
    // 0bd99d  and bl, 0xf
    X86_AT(c, 0xbd99du);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v & 0xFu, 1)); }
L_bd9a0:
    X86_TICK(c, 25);
    // 0bd9a0  mov eax, dword ptr [ebp - 0x28]
    X86_AT(c, 0xbd9a0u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFD8u)));
    // 0bd9a3  inc dword ptr [ebp - 0x28]
    X86_AT(c, 0xbd9a3u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFD8u)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0bd9a6  mov al, byte ptr [eax]
    X86_AT(c, 0xbd9a6u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[0]))));
    // 0bd9a8  and al, 0xf0
    X86_AT(c, 0xbd9a8u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & 0xF0u, 1)); }
    // 0bd9aa  mov byte ptr [ebp - 0x21], al
    X86_AT(c, 0xbd9aau);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFDFu)), g8(c, 0));
    // 0bd9ad  and al, al
    X86_AT(c, 0xbd9adu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & g8(c, 0), 1)); }
    // 0bd9af  jne 0xbd9b9
    X86_AT(c, 0xbd9afu);
    if (x86_cc(c, 5)) { goto L_bd9b9; }
    X86_TICK(c, 8);
    // 0bd9b1  mov al, byte ptr [esi + edi*1]
    X86_AT(c, 0xbd9b1u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[6] + c.r[7]))));
    // 0bd9b4  and al, 0xf0
    X86_AT(c, 0xbd9b4u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & 0xF0u, 1)); }
    // 0bd9b6  mov byte ptr [ebp - 0x21], al
    X86_AT(c, 0xbd9b6u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFDFu)), g8(c, 0));
L_bd9b9:
    X86_TICK(c, 19);
    // 0bd9b9  mov eax, ebx
    X86_AT(c, 0xbd9b9u);
    c.r[0] = c.r[3];
    // 0bd9bb  add al, byte ptr [ebp - 0x21]
    X86_AT(c, 0xbd9bbu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFDFu))), 0, 1)); }
    // 0bd9be  mov byte ptr [esi + edi*1], al
    X86_AT(c, 0xbd9beu);
    wr8((c.sbase[3] + (uint32_t)(c.r[6] + c.r[7])), g8(c, 0));
    // 0bd9c1  inc edi
    X86_AT(c, 0xbd9c1u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0bd9c2  jmp 0xbd989
    X86_AT(c, 0xbd9c2u);
    X86_POLL(c, 0xbd989u); goto L_bd989;
L_bd9c4:
    X86_TICK(c, 15);
    // 0bd9c4  inc dword ptr [ebp - 8]
    X86_AT(c, 0xbd9c4u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0bd9c7  add esi, 0xb0
    X86_AT(c, 0xbd9c7u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0xB0u, 0, 4); }
    // 0bd9cd  jmp 0xbd97d
    X86_AT(c, 0xbd9cdu);
    X86_POLL(c, 0xbd97du); goto L_bd97d;
L_bd9cf:
    X86_TICK(c, 54);
    // 0bd9cf  mov eax, dword ptr [ebp - 0x18]
    X86_AT(c, 0xbd9cfu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE8u)));
    // 0bd9d2  shl eax, 5
    X86_AT(c, 0xbd9d2u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[0] = r; }
    // 0bd9d5  cdq 
    X86_AT(c, 0xbd9d5u);
    c.r[2] = (c.r[0] & 0x80000000u) ? 0xFFFFFFFFu : 0u;
    // 0bd9d6  sub eax, edx
    X86_AT(c, 0xbd9d6u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[2], 0, 4); }
    // 0bd9d8  sar eax, 1
    X86_AT(c, 0xbd9d8u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 7, v, 0x1u, 4, w); if (w) c.r[0] = r; }
    // 0bd9da  mov edx, dword ptr [ebp - 0x1c]
    X86_AT(c, 0xbd9dau);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE4u)));
    // 0bd9dd  mov dword ptr [ebp - 0x2c], eax
    X86_AT(c, 0xbd9ddu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFD4u)), c.r[0]);
    // 0bd9e0  lea eax, [edx + edx*4]
    X86_AT(c, 0xbd9e0u);
    c.r[0] = (uint32_t)(c.r[2] + c.r[2] * 4);
    // 0bd9e3  lea eax, [edx + eax*2]
    X86_AT(c, 0xbd9e3u);
    c.r[0] = (uint32_t)(c.r[2] + c.r[0] * 2);
    // 0bd9e6  shl eax, 0xa
    X86_AT(c, 0xbd9e6u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0xAu, 4, w); if (w) c.r[0] = r; }
    // 0bd9e9  cdq 
    X86_AT(c, 0xbd9e9u);
    c.r[2] = (c.r[0] & 0x80000000u) ? 0xFFFFFFFFu : 0u;
    // 0bd9ea  sub eax, edx
    X86_AT(c, 0xbd9eau);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[2], 0, 4); }
    // 0bd9ec  sar eax, 1
    X86_AT(c, 0xbd9ecu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 7, v, 0x1u, 4, w); if (w) c.r[0] = r; }
    // 0bd9ee  add eax, dword ptr [ebp - 0x2c]
    X86_AT(c, 0xbd9eeu);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFD4u))), 0, 4); }
    // 0bd9f1  lea esi, [eax + 0x8d0a0]
    X86_AT(c, 0xbd9f1u);
    c.r[6] = (uint32_t)(c.r[0] + 0x8D0A0u);
    // 0bd9f7  mov eax, dword ptr [ebp - 0x20]
    X86_AT(c, 0xbd9f7u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE0u)));
    // 0bd9fa  mov eax, dword ptr [eax*4 + 0x9c2a4]
    X86_AT(c, 0xbd9fau);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[0] * 4 + 0x9C2A4u)));
    // 0bda01  mov dword ptr [ebp - 0x28], eax
    X86_AT(c, 0xbda01u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFD8u)), c.r[0]);
    // 0bda04  mov dword ptr [ebp - 8], 0
    X86_AT(c, 0xbda04u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), 0x0u);
L_bda0b:
    X86_TICK(c, 12);
    // 0bda0b  cmp dword ptr [ebp - 8], 0x20
    X86_AT(c, 0xbda0bu);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u))), 0x20u, 0, 4);
    // 0bda0f  jge 0xbda59
    X86_AT(c, 0xbda0fu);
    if (x86_cc(c, 13)) { goto L_bda59; }
    X86_TICK(c, 2);
    // 0bda11  sub edi, edi
    X86_AT(c, 0xbda11u);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
L_bda13:
    X86_TICK(c, 7);
    // 0bda13  cmp edi, 0x10
    X86_AT(c, 0xbda13u);
    (void)x86_sub(c, c.r[7], 0x10u, 0, 4);
    // 0bda16  jge 0xbda4e
    X86_AT(c, 0xbda16u);
    if (x86_cc(c, 13)) { goto L_bda4e; }
    X86_TICK(c, 17);
    // 0bda18  mov eax, dword ptr [ebp - 0x28]
    X86_AT(c, 0xbda18u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFD8u)));
    // 0bda1b  mov bl, byte ptr [eax]
    X86_AT(c, 0xbda1bu);
    s8(c, 3, rd8((c.sbase[3] + (uint32_t)(c.r[0]))));
    // 0bda1d  and bl, 0xf
    X86_AT(c, 0xbda1du);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v & 0xFu, 1)); }
    // 0bda20  and bl, bl
    X86_AT(c, 0xbda20u);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v & g8(c, 3), 1)); }
    // 0bda22  jne 0xbda2a
    X86_AT(c, 0xbda22u);
    if (x86_cc(c, 5)) { goto L_bda2a; }
    X86_TICK(c, 6);
    // 0bda24  mov bl, byte ptr [esi + edi*1]
    X86_AT(c, 0xbda24u);
    s8(c, 3, rd8((c.sbase[3] + (uint32_t)(c.r[6] + c.r[7]))));
    // 0bda27  and bl, 0xf
    X86_AT(c, 0xbda27u);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v & 0xFu, 1)); }
L_bda2a:
    X86_TICK(c, 25);
    // 0bda2a  mov eax, dword ptr [ebp - 0x28]
    X86_AT(c, 0xbda2au);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFD8u)));
    // 0bda2d  inc dword ptr [ebp - 0x28]
    X86_AT(c, 0xbda2du);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFD8u)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0bda30  mov al, byte ptr [eax]
    X86_AT(c, 0xbda30u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[0]))));
    // 0bda32  and al, 0xf0
    X86_AT(c, 0xbda32u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & 0xF0u, 1)); }
    // 0bda34  mov byte ptr [ebp - 0x21], al
    X86_AT(c, 0xbda34u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFDFu)), g8(c, 0));
    // 0bda37  and al, al
    X86_AT(c, 0xbda37u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & g8(c, 0), 1)); }
    // 0bda39  jne 0xbda43
    X86_AT(c, 0xbda39u);
    if (x86_cc(c, 5)) { goto L_bda43; }
    X86_TICK(c, 8);
    // 0bda3b  mov al, byte ptr [esi + edi*1]
    X86_AT(c, 0xbda3bu);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[6] + c.r[7]))));
    // 0bda3e  and al, 0xf0
    X86_AT(c, 0xbda3eu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & 0xF0u, 1)); }
    // 0bda40  mov byte ptr [ebp - 0x21], al
    X86_AT(c, 0xbda40u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFDFu)), g8(c, 0));
L_bda43:
    X86_TICK(c, 19);
    // 0bda43  mov eax, ebx
    X86_AT(c, 0xbda43u);
    c.r[0] = c.r[3];
    // 0bda45  add al, byte ptr [ebp - 0x21]
    X86_AT(c, 0xbda45u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFDFu))), 0, 1)); }
    // 0bda48  mov byte ptr [esi + edi*1], al
    X86_AT(c, 0xbda48u);
    wr8((c.sbase[3] + (uint32_t)(c.r[6] + c.r[7])), g8(c, 0));
    // 0bda4b  inc edi
    X86_AT(c, 0xbda4bu);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0bda4c  jmp 0xbda13
    X86_AT(c, 0xbda4cu);
    X86_POLL(c, 0xbda13u); goto L_bda13;
L_bda4e:
    X86_TICK(c, 15);
    // 0bda4e  inc dword ptr [ebp - 8]
    X86_AT(c, 0xbda4eu);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0bda51  add esi, 0xb0
    X86_AT(c, 0xbda51u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0xB0u, 0, 4); }
    // 0bda57  jmp 0xbda0b
    X86_AT(c, 0xbda57u);
    X86_POLL(c, 0xbda0bu); goto L_bda0b;
L_bda59:
    X86_TICK(c, 28);
    // 0bda59  pop edi
    X86_AT(c, 0xbda59u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0bda5a  pop esi
    X86_AT(c, 0xbda5au);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0bda5b  pop ebx
    X86_AT(c, 0xbda5bu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0bda5c  leave 
    X86_AT(c, 0xbda5cu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0bda5d  ret 
    X86_AT(c, 0xbda5du);
    c.eip = pop32(c); return;
    x86_fault(c, 0xbd8b0u, "ran off the end of a function");
}
void f_000bda60(X86Cpu& c) {
    X86_TICK(c, 29);
    // 0bda60  push ebp
    X86_AT(c, 0xbda60u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0bda61  mov ebp, esp
    X86_AT(c, 0xbda61u);
    c.r[5] = c.r[4];
    // 0bda63  sub esp, 0x20
    X86_AT(c, 0xbda63u);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, 0x20u, 0, 4); }
    // 0bda66  push esi
    X86_AT(c, 0xbda66u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0bda67  push edi
    X86_AT(c, 0xbda67u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0bda68  mov eax, dword ptr [0x9c540]
    X86_AT(c, 0xbda68u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x9C540u)));
    // 0bda6d  mov dword ptr [ebp - 0x14], eax
    X86_AT(c, 0xbda6du);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu)), c.r[0]);
    // 0bda70  add dword ptr [ebp - 0x14], 4
    X86_AT(c, 0xbda70u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0x4u, 0, 4)); }
    // 0bda74  mov eax, dword ptr [eax]
    X86_AT(c, 0xbda74u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[0])));
    // 0bda76  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0xbda76u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
L_bda79:
    X86_TICK(c, 12);
    // 0bda79  cmp dword ptr [ebp - 4], 0
    X86_AT(c, 0xbda79u);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))), 0x0u, 0, 4);
    // 0bda7d  jle 0xbdb30
    X86_AT(c, 0xbda7du);
    if (x86_cc(c, 14)) { goto L_bdb30; }
    X86_TICK(c, 95);
    // 0bda83  mov eax, dword ptr [ebp - 0x14]
    X86_AT(c, 0xbda83u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu)));
    // 0bda86  add dword ptr [ebp - 0x14], 4
    X86_AT(c, 0xbda86u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0x4u, 0, 4)); }
    // 0bda8a  mov eax, dword ptr [eax]
    X86_AT(c, 0xbda8au);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[0])));
    // 0bda8c  mov dword ptr [ebp - 0xc], eax
    X86_AT(c, 0xbda8cu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)), c.r[0]);
    // 0bda8f  mov edx, dword ptr [ebp - 0x14]
    X86_AT(c, 0xbda8fu);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu)));
    // 0bda92  add dword ptr [ebp - 0x14], 4
    X86_AT(c, 0xbda92u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0x4u, 0, 4)); }
    // 0bda96  mov edx, dword ptr [edx]
    X86_AT(c, 0xbda96u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[2])));
    // 0bda98  mov dword ptr [ebp - 0x10], edx
    X86_AT(c, 0xbda98u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u)), c.r[2]);
    // 0bda9b  shl eax, 5
    X86_AT(c, 0xbda9bu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[0] = r; }
    // 0bda9e  cdq 
    X86_AT(c, 0xbda9eu);
    c.r[2] = (c.r[0] & 0x80000000u) ? 0xFFFFFFFFu : 0u;
    // 0bda9f  sub eax, edx
    X86_AT(c, 0xbda9fu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[2], 0, 4); }
    // 0bdaa1  sar eax, 1
    X86_AT(c, 0xbdaa1u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 7, v, 0x1u, 4, w); if (w) c.r[0] = r; }
    // 0bdaa3  mov edx, dword ptr [ebp - 0x10]
    X86_AT(c, 0xbdaa3u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u)));
    // 0bdaa6  mov dword ptr [ebp - 0x20], eax
    X86_AT(c, 0xbdaa6u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE0u)), c.r[0]);
    // 0bdaa9  lea eax, [edx + edx*4]
    X86_AT(c, 0xbdaa9u);
    c.r[0] = (uint32_t)(c.r[2] + c.r[2] * 4);
    // 0bdaac  lea eax, [edx + eax*2]
    X86_AT(c, 0xbdaacu);
    c.r[0] = (uint32_t)(c.r[2] + c.r[0] * 2);
    // 0bdaaf  shl eax, 0xa
    X86_AT(c, 0xbdaafu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0xAu, 4, w); if (w) c.r[0] = r; }
    // 0bdab2  cdq 
    X86_AT(c, 0xbdab2u);
    c.r[2] = (c.r[0] & 0x80000000u) ? 0xFFFFFFFFu : 0u;
    // 0bdab3  sub eax, edx
    X86_AT(c, 0xbdab3u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[2], 0, 4); }
    // 0bdab5  sar eax, 1
    X86_AT(c, 0xbdab5u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 7, v, 0x1u, 4, w); if (w) c.r[0] = r; }
    // 0bdab7  add eax, dword ptr [ebp - 0x20]
    X86_AT(c, 0xbdab7u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE0u))), 0, 4); }
    // 0bdaba  lea esi, [eax + 0x8d0a0]
    X86_AT(c, 0xbdabau);
    c.r[6] = (uint32_t)(c.r[0] + 0x8D0A0u);
    // 0bdac0  mov eax, dword ptr [ebp - 0x14]
    X86_AT(c, 0xbdac0u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu)));
    // 0bdac3  add dword ptr [ebp - 0x14], 4
    X86_AT(c, 0xbdac3u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0x4u, 0, 4)); }
    // 0bdac7  mov eax, dword ptr [eax]
    X86_AT(c, 0xbdac7u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[0])));
    // 0bdac9  mov eax, dword ptr [eax*4 + 0x9c2a4]
    X86_AT(c, 0xbdac9u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[0] * 4 + 0x9C2A4u)));
    // 0bdad0  mov dword ptr [ebp - 0x1c], eax
    X86_AT(c, 0xbdad0u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE4u)), c.r[0]);
    // 0bdad3  mov dword ptr [ebp - 8], 0
    X86_AT(c, 0xbdad3u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), 0x0u);
L_bdada:
    X86_TICK(c, 12);
    // 0bdada  cmp dword ptr [ebp - 8], 0x20
    X86_AT(c, 0xbdadau);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u))), 0x20u, 0, 4);
    // 0bdade  jge 0xbdb28
    X86_AT(c, 0xbdadeu);
    if (x86_cc(c, 13)) { goto L_bdb28; }
    X86_TICK(c, 2);
    // 0bdae0  sub edi, edi
    X86_AT(c, 0xbdae0u);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
L_bdae2:
    X86_TICK(c, 7);
    // 0bdae2  cmp edi, 0x10
    X86_AT(c, 0xbdae2u);
    (void)x86_sub(c, c.r[7], 0x10u, 0, 4);
    // 0bdae5  jge 0xbdb1d
    X86_AT(c, 0xbdae5u);
    if (x86_cc(c, 13)) { goto L_bdb1d; }
    X86_TICK(c, 17);
    // 0bdae7  mov eax, dword ptr [ebp - 0x1c]
    X86_AT(c, 0xbdae7u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE4u)));
    // 0bdaea  mov cl, byte ptr [eax]
    X86_AT(c, 0xbdaeau);
    s8(c, 1, rd8((c.sbase[3] + (uint32_t)(c.r[0]))));
    // 0bdaec  and cl, 0xf
    X86_AT(c, 0xbdaecu);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_logic(c, v & 0xFu, 1)); }
    // 0bdaef  and cl, cl
    X86_AT(c, 0xbdaefu);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_logic(c, v & g8(c, 1), 1)); }
    // 0bdaf1  jne 0xbdaf9
    X86_AT(c, 0xbdaf1u);
    if (x86_cc(c, 5)) { goto L_bdaf9; }
    X86_TICK(c, 6);
    // 0bdaf3  mov cl, byte ptr [esi + edi*1]
    X86_AT(c, 0xbdaf3u);
    s8(c, 1, rd8((c.sbase[3] + (uint32_t)(c.r[6] + c.r[7]))));
    // 0bdaf6  and cl, 0xf
    X86_AT(c, 0xbdaf6u);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_logic(c, v & 0xFu, 1)); }
L_bdaf9:
    X86_TICK(c, 25);
    // 0bdaf9  mov eax, dword ptr [ebp - 0x1c]
    X86_AT(c, 0xbdaf9u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE4u)));
    // 0bdafc  inc dword ptr [ebp - 0x1c]
    X86_AT(c, 0xbdafcu);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE4u)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0bdaff  mov al, byte ptr [eax]
    X86_AT(c, 0xbdaffu);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[0]))));
    // 0bdb01  and al, 0xf0
    X86_AT(c, 0xbdb01u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & 0xF0u, 1)); }
    // 0bdb03  mov byte ptr [ebp - 0x15], al
    X86_AT(c, 0xbdb03u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFEBu)), g8(c, 0));
    // 0bdb06  and al, al
    X86_AT(c, 0xbdb06u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & g8(c, 0), 1)); }
    // 0bdb08  jne 0xbdb12
    X86_AT(c, 0xbdb08u);
    if (x86_cc(c, 5)) { goto L_bdb12; }
    X86_TICK(c, 8);
    // 0bdb0a  mov al, byte ptr [esi + edi*1]
    X86_AT(c, 0xbdb0au);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[6] + c.r[7]))));
    // 0bdb0d  and al, 0xf0
    X86_AT(c, 0xbdb0du);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & 0xF0u, 1)); }
    // 0bdb0f  mov byte ptr [ebp - 0x15], al
    X86_AT(c, 0xbdb0fu);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFEBu)), g8(c, 0));
L_bdb12:
    X86_TICK(c, 19);
    // 0bdb12  mov eax, ecx
    X86_AT(c, 0xbdb12u);
    c.r[0] = c.r[1];
    // 0bdb14  add al, byte ptr [ebp - 0x15]
    X86_AT(c, 0xbdb14u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFEBu))), 0, 1)); }
    // 0bdb17  mov byte ptr [esi + edi*1], al
    X86_AT(c, 0xbdb17u);
    wr8((c.sbase[3] + (uint32_t)(c.r[6] + c.r[7])), g8(c, 0));
    // 0bdb1a  inc edi
    X86_AT(c, 0xbdb1au);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0bdb1b  jmp 0xbdae2
    X86_AT(c, 0xbdb1bu);
    X86_POLL(c, 0xbdae2u); goto L_bdae2;
L_bdb1d:
    X86_TICK(c, 15);
    // 0bdb1d  inc dword ptr [ebp - 8]
    X86_AT(c, 0xbdb1du);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0bdb20  add esi, 0xb0
    X86_AT(c, 0xbdb20u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0xB0u, 0, 4); }
    // 0bdb26  jmp 0xbdada
    X86_AT(c, 0xbdb26u);
    X86_POLL(c, 0xbdadau); goto L_bdada;
L_bdb28:
    X86_TICK(c, 13);
    // 0bdb28  dec dword ptr [ebp - 4]
    X86_AT(c, 0xbdb28u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 0bdb2b  jmp 0xbda79
    X86_AT(c, 0xbdb2bu);
    X86_POLL(c, 0xbda79u); goto L_bda79;
L_bdb30:
    X86_TICK(c, 24);
    // 0bdb30  pop edi
    X86_AT(c, 0xbdb30u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0bdb31  pop esi
    X86_AT(c, 0xbdb31u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0bdb32  leave 
    X86_AT(c, 0xbdb32u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0bdb33  ret 
    X86_AT(c, 0xbdb33u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xbda60u, "ran off the end of a function");
}
void f_000bdb34(X86Cpu& c) {
    X86_TICK(c, 4);
    // 0bdb34  sub edx, edx
    X86_AT(c, 0xbdb34u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[2], 0, 4); }
    // 0bdb36  mov ecx, edx
    X86_AT(c, 0xbdb36u);
    c.r[1] = c.r[2];
L_bdb38:
    X86_TICK(c, 7);
    // 0bdb38  cmp edx, 0x2b
    X86_AT(c, 0xbdb38u);
    (void)x86_sub(c, c.r[2], 0x2Bu, 0, 4);
    // 0bdb3b  jg 0xbdb52
    X86_AT(c, 0xbdb3bu);
    if (x86_cc(c, 15)) { goto L_bdb52; }
    X86_TICK(c, 20);
    // 0bdb3d  mov eax, ecx
    X86_AT(c, 0xbdb3du);
    c.r[0] = c.r[1];
    // 0bdb3f  shl eax, 9
    X86_AT(c, 0xbdb3fu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x9u, 4, w); if (w) c.r[0] = r; }
    // 0bdb42  add eax, 0x4eda8
    X86_AT(c, 0xbdb42u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0x4EDA8u, 0, 4); }
    // 0bdb47  mov dword ptr [edx*4 + 0x9c2a4], eax
    X86_AT(c, 0xbdb47u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] * 4 + 0x9C2A4u)), c.r[0]);
    // 0bdb4e  inc edx
    X86_AT(c, 0xbdb4eu);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
    // 0bdb4f  inc ecx
    X86_AT(c, 0xbdb4fu);
    { uint32_t v = c.r[1]; c.r[1] = x86_inc(c, v, 4); }
    // 0bdb50  jmp 0xbdb38
    X86_AT(c, 0xbdb50u);
    X86_POLL(c, 0xbdb38u); goto L_bdb38;
L_bdb52:
    X86_TICK(c, 4);
    // 0bdb52  mov edx, 0x2c
    X86_AT(c, 0xbdb52u);
    c.r[2] = 0x2Cu;
    // 0bdb57  sub ecx, ecx
    X86_AT(c, 0xbdb57u);
    { uint32_t v = c.r[1]; c.r[1] = x86_sub(c, v, c.r[1], 0, 4); }
L_bdb59:
    X86_TICK(c, 7);
    // 0bdb59  cmp edx, 0x6b
    X86_AT(c, 0xbdb59u);
    (void)x86_sub(c, c.r[2], 0x6Bu, 0, 4);
    // 0bdb5c  jg 0xbdb73
    X86_AT(c, 0xbdb5cu);
    if (x86_cc(c, 15)) { goto L_bdb73; }
    X86_TICK(c, 20);
    // 0bdb5e  mov eax, ecx
    X86_AT(c, 0xbdb5eu);
    c.r[0] = c.r[1];
    // 0bdb60  shl eax, 9
    X86_AT(c, 0xbdb60u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x9u, 4, w); if (w) c.r[0] = r; }
    // 0bdb63  add eax, 0x56da8
    X86_AT(c, 0xbdb63u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0x56DA8u, 0, 4); }
    // 0bdb68  mov dword ptr [edx*4 + 0x9c2a4], eax
    X86_AT(c, 0xbdb68u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] * 4 + 0x9C2A4u)), c.r[0]);
    // 0bdb6f  inc edx
    X86_AT(c, 0xbdb6fu);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
    // 0bdb70  inc ecx
    X86_AT(c, 0xbdb70u);
    { uint32_t v = c.r[1]; c.r[1] = x86_inc(c, v, 4); }
    // 0bdb71  jmp 0xbdb59
    X86_AT(c, 0xbdb71u);
    X86_POLL(c, 0xbdb59u); goto L_bdb59;
L_bdb73:
    X86_TICK(c, 114);
    // 0bdb73  mov dword ptr [0x9c454], 0x5efa8
    X86_AT(c, 0xbdb73u);
    wr32((c.sbase[3] + (uint32_t)(0x9C454u)), 0x5EFA8u);
    // 0bdb7d  mov dword ptr [0x9c458], 0x5f3a8
    X86_AT(c, 0xbdb7du);
    wr32((c.sbase[3] + (uint32_t)(0x9C458u)), 0x5F3A8u);
    // 0bdb87  mov dword ptr [0x9c45c], 0x5f7a8
    X86_AT(c, 0xbdb87u);
    wr32((c.sbase[3] + (uint32_t)(0x9C45Cu)), 0x5F7A8u);
    // 0bdb91  mov dword ptr [0x9c460], 0x63da8
    X86_AT(c, 0xbdb91u);
    wr32((c.sbase[3] + (uint32_t)(0x9C460u)), 0x63DA8u);
    // 0bdb9b  mov dword ptr [0x9c464], 0x5fba8
    X86_AT(c, 0xbdb9bu);
    wr32((c.sbase[3] + (uint32_t)(0x9C464u)), 0x5FBA8u);
    // 0bdba5  mov dword ptr [0x9c468], 0x615a8
    X86_AT(c, 0xbdba5u);
    wr32((c.sbase[3] + (uint32_t)(0x9C468u)), 0x615A8u);
    // 0bdbaf  mov dword ptr [0x9c46c], 0x617a8
    X86_AT(c, 0xbdbafu);
    wr32((c.sbase[3] + (uint32_t)(0x9C46Cu)), 0x617A8u);
    // 0bdbb9  mov dword ptr [0x9c470], 0x619a8
    X86_AT(c, 0xbdbb9u);
    wr32((c.sbase[3] + (uint32_t)(0x9C470u)), 0x619A8u);
    // 0bdbc3  mov dword ptr [0x9c474], 0x61ba8
    X86_AT(c, 0xbdbc3u);
    wr32((c.sbase[3] + (uint32_t)(0x9C474u)), 0x61BA8u);
    // 0bdbcd  mov dword ptr [0x9c478], 0x60da8
    X86_AT(c, 0xbdbcdu);
    wr32((c.sbase[3] + (uint32_t)(0x9C478u)), 0x60DA8u);
    // 0bdbd7  mov dword ptr [0x9c47c], 0x60fa8
    X86_AT(c, 0xbdbd7u);
    wr32((c.sbase[3] + (uint32_t)(0x9C47Cu)), 0x60FA8u);
    // 0bdbe1  mov dword ptr [0x9c480], 0x611a8
    X86_AT(c, 0xbdbe1u);
    wr32((c.sbase[3] + (uint32_t)(0x9C480u)), 0x611A8u);
    // 0bdbeb  mov dword ptr [0x9c484], 0x613a8
    X86_AT(c, 0xbdbebu);
    wr32((c.sbase[3] + (uint32_t)(0x9C484u)), 0x613A8u);
    // 0bdbf5  mov dword ptr [0x9c488], 0x621a8
    X86_AT(c, 0xbdbf5u);
    wr32((c.sbase[3] + (uint32_t)(0x9C488u)), 0x621A8u);
    // 0bdbff  mov dword ptr [0x9c48c], 0x5fda8
    X86_AT(c, 0xbdbffu);
    wr32((c.sbase[3] + (uint32_t)(0x9C48Cu)), 0x5FDA8u);
    // 0bdc09  mov dword ptr [0x9c490], 0x605a8
    X86_AT(c, 0xbdc09u);
    wr32((c.sbase[3] + (uint32_t)(0x9C490u)), 0x605A8u);
    // 0bdc13  mov dword ptr [0x9c494], 0x64fa8
    X86_AT(c, 0xbdc13u);
    wr32((c.sbase[3] + (uint32_t)(0x9C494u)), 0x64FA8u);
    // 0bdc1d  mov dword ptr [0x9c49c], 0x627a8
    X86_AT(c, 0xbdc1du);
    wr32((c.sbase[3] + (uint32_t)(0x9C49Cu)), 0x627A8u);
    // 0bdc27  mov dword ptr [0x9c4a0], 0x62ba8
    X86_AT(c, 0xbdc27u);
    wr32((c.sbase[3] + (uint32_t)(0x9C4A0u)), 0x62BA8u);
    // 0bdc31  mov dword ptr [0x9c4a4], 0x65ba8
    X86_AT(c, 0xbdc31u);
    wr32((c.sbase[3] + (uint32_t)(0x9C4A4u)), 0x65BA8u);
    // 0bdc3b  mov dword ptr [0x9c4a8], 0x61da8
    X86_AT(c, 0xbdc3bu);
    wr32((c.sbase[3] + (uint32_t)(0x9C4A8u)), 0x61DA8u);
    // 0bdc45  mov dword ptr [0x9c4ac], 0x61fa8
    X86_AT(c, 0xbdc45u);
    wr32((c.sbase[3] + (uint32_t)(0x9C4ACu)), 0x61FA8u);
    // 0bdc4f  mov dword ptr [0x9c4b0], 0x62da8
    X86_AT(c, 0xbdc4fu);
    wr32((c.sbase[3] + (uint32_t)(0x9C4B0u)), 0x62DA8u);
    // 0bdc59  mov dword ptr [0x9c4b4], 0x62fa8
    X86_AT(c, 0xbdc59u);
    wr32((c.sbase[3] + (uint32_t)(0x9C4B4u)), 0x62FA8u);
    // 0bdc63  mov dword ptr [0x9c4b8], 0x631a8
    X86_AT(c, 0xbdc63u);
    wr32((c.sbase[3] + (uint32_t)(0x9C4B8u)), 0x631A8u);
    // 0bdc6d  mov dword ptr [0x9c4bc], 0x633a8
    X86_AT(c, 0xbdc6du);
    wr32((c.sbase[3] + (uint32_t)(0x9C4BCu)), 0x633A8u);
    // 0bdc77  mov dword ptr [0x9c4c0], 0x635a8
    X86_AT(c, 0xbdc77u);
    wr32((c.sbase[3] + (uint32_t)(0x9C4C0u)), 0x635A8u);
    // 0bdc81  mov dword ptr [0x9c4c4], 0x637a8
    X86_AT(c, 0xbdc81u);
    wr32((c.sbase[3] + (uint32_t)(0x9C4C4u)), 0x637A8u);
    // 0bdc8b  mov dword ptr [0x9c4c8], 0x639a8
    X86_AT(c, 0xbdc8bu);
    wr32((c.sbase[3] + (uint32_t)(0x9C4C8u)), 0x639A8u);
    // 0bdc95  mov dword ptr [0x9c4cc], 0x63ba8
    X86_AT(c, 0xbdc95u);
    wr32((c.sbase[3] + (uint32_t)(0x9C4CCu)), 0x63BA8u);
    // 0bdc9f  mov dword ptr [0x9c4d0], 0x641a8
    X86_AT(c, 0xbdc9fu);
    wr32((c.sbase[3] + (uint32_t)(0x9C4D0u)), 0x641A8u);
    // 0bdca9  mov dword ptr [0x9c4d4], 0x643a8
    X86_AT(c, 0xbdca9u);
    wr32((c.sbase[3] + (uint32_t)(0x9C4D4u)), 0x643A8u);
    // 0bdcb3  mov dword ptr [0x9c4d8], 0x645a8
    X86_AT(c, 0xbdcb3u);
    wr32((c.sbase[3] + (uint32_t)(0x9C4D8u)), 0x645A8u);
    // 0bdcbd  mov dword ptr [0x9c4dc], 0x647a8
    X86_AT(c, 0xbdcbdu);
    wr32((c.sbase[3] + (uint32_t)(0x9C4DCu)), 0x647A8u);
    // 0bdcc7  mov dword ptr [0x9c4e0], 0x649a8
    X86_AT(c, 0xbdcc7u);
    wr32((c.sbase[3] + (uint32_t)(0x9C4E0u)), 0x649A8u);
    // 0bdcd1  mov dword ptr [0x9c4e4], 0x64ba8
    X86_AT(c, 0xbdcd1u);
    wr32((c.sbase[3] + (uint32_t)(0x9C4E4u)), 0x64BA8u);
    // 0bdcdb  mov dword ptr [0x9c4e8], 0x565a8
    X86_AT(c, 0xbdcdbu);
    wr32((c.sbase[3] + (uint32_t)(0x9C4E8u)), 0x565A8u);
    // 0bdce5  mov dword ptr [0x9c4ec], 0x567a8
    X86_AT(c, 0xbdce5u);
    wr32((c.sbase[3] + (uint32_t)(0x9C4ECu)), 0x567A8u);
    // 0bdcef  mov dword ptr [0x9c4f0], 0x569a8
    X86_AT(c, 0xbdcefu);
    wr32((c.sbase[3] + (uint32_t)(0x9C4F0u)), 0x569A8u);
    // 0bdcf9  mov dword ptr [0x9c4f4], 0x56ba8
    X86_AT(c, 0xbdcf9u);
    wr32((c.sbase[3] + (uint32_t)(0x9C4F4u)), 0x56BA8u);
    // 0bdd03  mov dword ptr [0x9c4f8], 0x56ba8
    X86_AT(c, 0xbdd03u);
    wr32((c.sbase[3] + (uint32_t)(0x9C4F8u)), 0x56BA8u);
    // 0bdd0d  mov dword ptr [0x9c4fc], 0x607a8
    X86_AT(c, 0xbdd0du);
    wr32((c.sbase[3] + (uint32_t)(0x9C4FCu)), 0x607A8u);
    // 0bdd17  mov dword ptr [0x9c500], 0x609a8
    X86_AT(c, 0xbdd17u);
    wr32((c.sbase[3] + (uint32_t)(0x9C500u)), 0x609A8u);
    // 0bdd21  mov dword ptr [0x9c504], 0x60ba8
    X86_AT(c, 0xbdd21u);
    wr32((c.sbase[3] + (uint32_t)(0x9C504u)), 0x60BA8u);
    // 0bdd2b  mov dword ptr [0x9c50c], 0x60da8
    X86_AT(c, 0xbdd2bu);
    wr32((c.sbase[3] + (uint32_t)(0x9C50Cu)), 0x60DA8u);
    // 0bdd35  mov dword ptr [0x9c510], 0x60fa8
    X86_AT(c, 0xbdd35u);
    wr32((c.sbase[3] + (uint32_t)(0x9C510u)), 0x60FA8u);
    // 0bdd3f  mov dword ptr [0x9c514], 0x611a8
    X86_AT(c, 0xbdd3fu);
    wr32((c.sbase[3] + (uint32_t)(0x9C514u)), 0x611A8u);
    // 0bdd49  mov dword ptr [0x9c518], 0x613a8
    X86_AT(c, 0xbdd49u);
    wr32((c.sbase[3] + (uint32_t)(0x9C518u)), 0x613A8u);
    // 0bdd53  mov dword ptr [0x9c51c], 0x615a8
    X86_AT(c, 0xbdd53u);
    wr32((c.sbase[3] + (uint32_t)(0x9C51Cu)), 0x615A8u);
    // 0bdd5d  mov dword ptr [0x9c520], 0x617a8
    X86_AT(c, 0xbdd5du);
    wr32((c.sbase[3] + (uint32_t)(0x9C520u)), 0x617A8u);
    // 0bdd67  mov dword ptr [0x9c524], 0x619a8
    X86_AT(c, 0xbdd67u);
    wr32((c.sbase[3] + (uint32_t)(0x9C524u)), 0x619A8u);
    // 0bdd71  mov dword ptr [0x9c528], 0x61ba8
    X86_AT(c, 0xbdd71u);
    wr32((c.sbase[3] + (uint32_t)(0x9C528u)), 0x61BA8u);
    // 0bdd7b  ret 
    X86_AT(c, 0xbdd7bu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xbdb34u, "ran off the end of a function");
}
void f_000bdd7c(X86Cpu& c) {
    X86_TICK(c, 24);
    // 0bdd7c  push ebp
    X86_AT(c, 0xbdd7cu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0bdd7d  mov ebp, esp
    X86_AT(c, 0xbdd7du);
    c.r[5] = c.r[4];
    // 0bdd7f  sub esp, 0x10
    X86_AT(c, 0xbdd7fu);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, 0x10u, 0, 4); }
    // 0bdd82  push ebx
    X86_AT(c, 0xbdd82u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0bdd83  push esi
    X86_AT(c, 0xbdd83u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0bdd84  push edi
    X86_AT(c, 0xbdd84u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0bdd85  cmp word ptr [0x9c544], 0
    X86_AT(c, 0xbdd85u);
    (void)x86_sub(c, rd16((c.sbase[3] + (uint32_t)(0x9C544u))), 0x0u, 0, 2);
    // 0bdd8d  je 0xbdea2
    X86_AT(c, 0xbdd8du);
    if (x86_cc(c, 4)) { goto L_bdea2; }
    X86_TICK(c, 7);
    // 0bdd93  call 0xc5e70
    X86_AT(c, 0xbdd93u);
    push32(c, 0xbdd98u); x86_call_known(c, 0xc5e70u, f_000c5e70); X86_RET(c, 0xbdd98u);
    X86_TICK(c, 7);
    // 0bdd98  call 0xc6e68
    X86_AT(c, 0xbdd98u);
    push32(c, 0xbdd9du); x86_call_known(c, 0xc6e68u, f_000c6e68); X86_RET(c, 0xbdd9du);
    X86_TICK(c, 2);
    // 0bdd9d  mov dword ptr [ebp - 4], 0
    X86_AT(c, 0xbdd9du);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), 0x0u);
L_bdda4:
    X86_TICK(c, 12);
    // 0bdda4  cmp dword ptr [ebp - 4], 0xb
    X86_AT(c, 0xbdda4u);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))), 0xBu, 0, 4);
    // 0bdda8  jge 0xbde3f
    X86_AT(c, 0xbdda8u);
    if (x86_cc(c, 13)) { goto L_bde3f; }
    X86_TICK(c, 2);
    // 0bddae  sub edi, edi
    X86_AT(c, 0xbddaeu);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
L_bddb0:
    X86_TICK(c, 7);
    // 0bddb0  cmp edi, 0xb
    X86_AT(c, 0xbddb0u);
    (void)x86_sub(c, c.r[7], 0xBu, 0, 4);
    // 0bddb3  jge 0xbde37
    X86_AT(c, 0xbddb3u);
    if (x86_cc(c, 13)) { goto L_bde37; }
    X86_TICK(c, 67);
    // 0bddb9  mov eax, 0x46200
    X86_AT(c, 0xbddb9u);
    c.r[0] = 0x46200u;
    // 0bddbe  mov eax, edi
    X86_AT(c, 0xbddbeu);
    c.r[0] = c.r[7];
    // 0bddc0  shl eax, 5
    X86_AT(c, 0xbddc0u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[0] = r; }
    // 0bddc3  cdq 
    X86_AT(c, 0xbddc3u);
    c.r[2] = (c.r[0] & 0x80000000u) ? 0xFFFFFFFFu : 0u;
    // 0bddc4  sub eax, edx
    X86_AT(c, 0xbddc4u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[2], 0, 4); }
    // 0bddc6  sar eax, 1
    X86_AT(c, 0xbddc6u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 7, v, 0x1u, 4, w); if (w) c.r[0] = r; }
    // 0bddc8  mov edx, dword ptr [ebp - 4]
    X86_AT(c, 0xbddc8u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0bddcb  mov dword ptr [ebp - 0x10], eax
    X86_AT(c, 0xbddcbu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u)), c.r[0]);
    // 0bddce  lea eax, [edx + edx*4]
    X86_AT(c, 0xbddceu);
    c.r[0] = (uint32_t)(c.r[2] + c.r[2] * 4);
    // 0bddd1  lea eax, [edx + eax*2]
    X86_AT(c, 0xbddd1u);
    c.r[0] = (uint32_t)(c.r[2] + c.r[0] * 2);
    // 0bddd4  shl eax, 0xa
    X86_AT(c, 0xbddd4u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0xAu, 4, w); if (w) c.r[0] = r; }
    // 0bddd7  cdq 
    X86_AT(c, 0xbddd7u);
    c.r[2] = (c.r[0] & 0x80000000u) ? 0xFFFFFFFFu : 0u;
    // 0bddd8  sub eax, edx
    X86_AT(c, 0xbddd8u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[2], 0, 4); }
    // 0bddda  sar eax, 1
    X86_AT(c, 0xbdddau);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 7, v, 0x1u, 4, w); if (w) c.r[0] = r; }
    // 0bdddc  add eax, dword ptr [ebp - 0x10]
    X86_AT(c, 0xbdddcu);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u))), 0, 4); }
    // 0bdddf  lea esi, [eax + 0x8d0a0]
    X86_AT(c, 0xbdddfu);
    c.r[6] = (uint32_t)(c.r[0] + 0x8D0A0u);
    // 0bdde5  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0xbdde5u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0bdde8  lea edx, [eax + eax*8]
    X86_AT(c, 0xbdde8u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 8);
    // 0bddeb  lea eax, [edx + eax*2]
    X86_AT(c, 0xbddebu);
    c.r[0] = (uint32_t)(c.r[2] + c.r[0] * 2);
    // 0bddee  lea edx, [edi + eax*1]
    X86_AT(c, 0xbddeeu);
    c.r[2] = (uint32_t)(c.r[7] + c.r[0]);
    // 0bddf1  movzx eax, byte ptr [edx + 0x8cfa8]
    X86_AT(c, 0xbddf1u);
    c.r[0] = rd8((c.sbase[3] + (uint32_t)(c.r[2] + 0x8CFA8u)));
    // 0bddf8  shl eax, 9
    X86_AT(c, 0xbddf8u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x9u, 4, w); if (w) c.r[0] = r; }
    // 0bddfb  add eax, 0x66da8
    X86_AT(c, 0xbddfbu);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0x66DA8u, 0, 4); }
    // 0bde00  mov dword ptr [ebp - 8], eax
    X86_AT(c, 0xbde00u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), c.r[0]);
    // 0bde03  mov dword ptr [ebp - 0xc], 0
    X86_AT(c, 0xbde03u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)), 0x0u);
L_bde0a:
    X86_TICK(c, 12);
    // 0bde0a  cmp dword ptr [ebp - 0xc], 0x20
    X86_AT(c, 0xbde0au);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u))), 0x20u, 0, 4);
    // 0bde0e  jge 0xbde31
    X86_AT(c, 0xbde0eu);
    if (x86_cc(c, 13)) { goto L_bde31; }
    X86_TICK(c, 2);
    // 0bde10  sub ebx, ebx
    X86_AT(c, 0xbde10u);
    { uint32_t v = c.r[3]; c.r[3] = x86_sub(c, v, c.r[3], 0, 4); }
L_bde12:
    X86_TICK(c, 7);
    // 0bde12  cmp ebx, 4
    X86_AT(c, 0xbde12u);
    (void)x86_sub(c, c.r[3], 0x4u, 0, 4);
    // 0bde15  jge 0xbde26
    X86_AT(c, 0xbde15u);
    if (x86_cc(c, 13)) { goto L_bde26; }
    X86_TICK(c, 26);
    // 0bde17  mov eax, dword ptr [ebp - 8]
    X86_AT(c, 0xbde17u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)));
    // 0bde1a  add dword ptr [ebp - 8], 4
    X86_AT(c, 0xbde1au);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0x4u, 0, 4)); }
    // 0bde1e  mov eax, dword ptr [eax]
    X86_AT(c, 0xbde1eu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[0])));
    // 0bde20  mov dword ptr [esi + ebx*4], eax
    X86_AT(c, 0xbde20u);
    wr32((c.sbase[3] + (uint32_t)(c.r[6] + c.r[3] * 4)), c.r[0]);
    // 0bde23  inc ebx
    X86_AT(c, 0xbde23u);
    { uint32_t v = c.r[3]; c.r[3] = x86_inc(c, v, 4); }
    // 0bde24  jmp 0xbde12
    X86_AT(c, 0xbde24u);
    X86_POLL(c, 0xbde12u); goto L_bde12;
L_bde26:
    X86_TICK(c, 15);
    // 0bde26  inc dword ptr [ebp - 0xc]
    X86_AT(c, 0xbde26u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0bde29  add esi, 0xb0
    X86_AT(c, 0xbde29u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0xB0u, 0, 4); }
    // 0bde2f  jmp 0xbde0a
    X86_AT(c, 0xbde2fu);
    X86_POLL(c, 0xbde0au); goto L_bde0a;
L_bde31:
    X86_TICK(c, 9);
    // 0bde31  inc edi
    X86_AT(c, 0xbde31u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0bde32  jmp 0xbddb0
    X86_AT(c, 0xbde32u);
    X86_POLL(c, 0xbddb0u); goto L_bddb0;
L_bde37:
    X86_TICK(c, 13);
    // 0bde37  inc dword ptr [ebp - 4]
    X86_AT(c, 0xbde37u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0bde3a  jmp 0xbdda4
    X86_AT(c, 0xbde3au);
    X86_POLL(c, 0xbdda4u); goto L_bdda4;
L_bde3f:
    X86_TICK(c, 7);
    // 0bde3f  call 0xc626c
    X86_AT(c, 0xbde3fu);
    push32(c, 0xbde44u); x86_call_known(c, 0xc626cu, f_000c626c); X86_RET(c, 0xbde44u);
    X86_TICK(c, 9);
    // 0bde44  push 1
    X86_AT(c, 0xbde44u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0bde46  call 0xba6a0
    X86_AT(c, 0xbde46u);
    push32(c, 0xbde4bu); x86_call_known(c, 0xba6a0u, f_000ba6a0); X86_RET(c, 0xbde4bu);
    X86_TICK(c, 7);
    // 0bde4b  call 0xc58d8
    X86_AT(c, 0xbde4bu);
    push32(c, 0xbde50u); x86_call_known(c, 0xc58d8u, f_000c58d8); X86_RET(c, 0xbde50u);
    X86_TICK(c, 25);
    // 0bde50  mov dword ptr [0x46808], 0x8d0a0
    X86_AT(c, 0xbde50u);
    wr32((c.sbase[3] + (uint32_t)(0x46808u)), 0x8D0A0u);
    // 0bde5a  mov word ptr [0x4680c], 0x14
    X86_AT(c, 0xbde5au);
    wr16((c.sbase[3] + (uint32_t)(0x4680Cu)), 0x14u);
    // 0bde63  mov word ptr [0x4680e], 0x40
    X86_AT(c, 0xbde63u);
    wr16((c.sbase[3] + (uint32_t)(0x4680Eu)), 0x40u);
    // 0bde6c  mov word ptr [0x46810], 0x60
    X86_AT(c, 0xbde6cu);
    wr16((c.sbase[3] + (uint32_t)(0x46810u)), 0x60u);
    // 0bde75  mov word ptr [0x46812], 0x19f
    X86_AT(c, 0xbde75u);
    wr16((c.sbase[3] + (uint32_t)(0x46812u)), 0x19Fu);
    // 0bde7e  mov word ptr [0x46814], 0x1bf
    X86_AT(c, 0xbde7eu);
    wr16((c.sbase[3] + (uint32_t)(0x46814u)), 0x1BFu);
    // 0bde87  push 0x46808
    X86_AT(c, 0xbde87u);
    { uint32_t v = 0x46808u; push32(c, v); }
    // 0bde8c  push 0
    X86_AT(c, 0xbde8cu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0bde8e  push 0x46208
    X86_AT(c, 0xbde8eu);
    { uint32_t v = 0x46208u; push32(c, v); }
    // 0bde93  call 0x5c4
    X86_AT(c, 0xbde93u);
    push32(c, 0xbde98u); x86_call_known(c, 0x5c4u, f_000005c4); X86_RET(c, 0xbde98u);
    X86_TICK(c, 9);
    // 0bde98  push 0
    X86_AT(c, 0xbde98u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0bde9a  call 0xba6a0
    X86_AT(c, 0xbde9au);
    push32(c, 0xbde9fu); x86_call_known(c, 0xba6a0u, f_000ba6a0); X86_RET(c, 0xbde9fu);
    X86_TICK(c, 2);
    // 0bde9f  add esp, 0x14
    X86_AT(c, 0xbde9fu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x14u, 0, 4); }
L_bdea2:
    X86_TICK(c, 28);
    // 0bdea2  pop edi
    X86_AT(c, 0xbdea2u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0bdea3  pop esi
    X86_AT(c, 0xbdea3u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0bdea4  pop ebx
    X86_AT(c, 0xbdea4u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0bdea5  leave 
    X86_AT(c, 0xbdea5u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0bdea6  ret 
    X86_AT(c, 0xbdea6u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xbdd7cu, "ran off the end of a function");
}
void f_000bdea8(X86Cpu& c) {
    X86_TICK(c, 24);
    // 0bdea8  push ebp
    X86_AT(c, 0xbdea8u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0bdea9  mov ebp, esp
    X86_AT(c, 0xbdea9u);
    c.r[5] = c.r[4];
    // 0bdeab  sub esp, 0x10
    X86_AT(c, 0xbdeabu);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, 0x10u, 0, 4); }
    // 0bdeae  push ebx
    X86_AT(c, 0xbdeaeu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0bdeaf  push esi
    X86_AT(c, 0xbdeafu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0bdeb0  push edi
    X86_AT(c, 0xbdeb0u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0bdeb1  cmp dword ptr [ebp + 8], 0
    X86_AT(c, 0xbdeb1u);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))), 0x0u, 0, 4);
    // 0bdeb5  je 0xbdebc
    X86_AT(c, 0xbdeb5u);
    if (x86_cc(c, 4)) { goto L_bdebc; }
    X86_TICK(c, 7);
    // 0bdeb7  call 0xbccc0
    X86_AT(c, 0xbdeb7u);
    push32(c, 0xbdebcu); x86_call_known(c, 0xbccc0u, f_000bccc0); X86_RET(c, 0xbdebcu);
L_bdebc:
    X86_TICK(c, 2);
    // 0bdebc  mov dword ptr [ebp - 4], 0
    X86_AT(c, 0xbdebcu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), 0x0u);
L_bdec3:
    X86_TICK(c, 12);
    // 0bdec3  cmp dword ptr [ebp - 4], 0xb
    X86_AT(c, 0xbdec3u);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))), 0xBu, 0, 4);
    // 0bdec7  jge 0xbdf5e
    X86_AT(c, 0xbdec7u);
    if (x86_cc(c, 13)) { goto L_bdf5e; }
    X86_TICK(c, 2);
    // 0bdecd  sub edi, edi
    X86_AT(c, 0xbdecdu);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
L_bdecf:
    X86_TICK(c, 7);
    // 0bdecf  cmp edi, 0xb
    X86_AT(c, 0xbdecfu);
    (void)x86_sub(c, c.r[7], 0xBu, 0, 4);
    // 0bded2  jge 0xbdf56
    X86_AT(c, 0xbded2u);
    if (x86_cc(c, 13)) { goto L_bdf56; }
    X86_TICK(c, 71);
    // 0bded8  mov eax, 0x46200
    X86_AT(c, 0xbded8u);
    c.r[0] = 0x46200u;
    // 0bdedd  mov edx, dword ptr [ebp - 4]
    X86_AT(c, 0xbdeddu);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0bdee0  lea ecx, [edx + edx*8]
    X86_AT(c, 0xbdee0u);
    c.r[1] = (uint32_t)(c.r[2] + c.r[2] * 8);
    // 0bdee3  lea edx, [ecx + edx*2]
    X86_AT(c, 0xbdee3u);
    c.r[2] = (uint32_t)(c.r[1] + c.r[2] * 2);
    // 0bdee6  add edx, edi
    X86_AT(c, 0xbdee6u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[7], 0, 4); }
    // 0bdee8  mov dl, byte ptr [eax + edx*1 + 0x46da8]
    X86_AT(c, 0xbdee8u);
    s8(c, 2, rd8((c.sbase[3] + (uint32_t)(c.r[0] + c.r[2] + 0x46DA8u))));
    // 0bdeef  mov byte ptr [ebp - 9], dl
    X86_AT(c, 0xbdeefu);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF7u)), g8(c, 2));
    // 0bdef2  mov eax, edi
    X86_AT(c, 0xbdef2u);
    c.r[0] = c.r[7];
    // 0bdef4  shl eax, 5
    X86_AT(c, 0xbdef4u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[0] = r; }
    // 0bdef7  cdq 
    X86_AT(c, 0xbdef7u);
    c.r[2] = (c.r[0] & 0x80000000u) ? 0xFFFFFFFFu : 0u;
    // 0bdef8  sub eax, edx
    X86_AT(c, 0xbdef8u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[2], 0, 4); }
    // 0bdefa  sar eax, 1
    X86_AT(c, 0xbdefau);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 7, v, 0x1u, 4, w); if (w) c.r[0] = r; }
    // 0bdefc  mov edx, dword ptr [ebp - 4]
    X86_AT(c, 0xbdefcu);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0bdeff  mov dword ptr [ebp - 0x10], eax
    X86_AT(c, 0xbdeffu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u)), c.r[0]);
    // 0bdf02  lea eax, [edx + edx*4]
    X86_AT(c, 0xbdf02u);
    c.r[0] = (uint32_t)(c.r[2] + c.r[2] * 4);
    // 0bdf05  lea eax, [edx + eax*2]
    X86_AT(c, 0xbdf05u);
    c.r[0] = (uint32_t)(c.r[2] + c.r[0] * 2);
    // 0bdf08  shl eax, 0xa
    X86_AT(c, 0xbdf08u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0xAu, 4, w); if (w) c.r[0] = r; }
    // 0bdf0b  cdq 
    X86_AT(c, 0xbdf0bu);
    c.r[2] = (c.r[0] & 0x80000000u) ? 0xFFFFFFFFu : 0u;
    // 0bdf0c  sub eax, edx
    X86_AT(c, 0xbdf0cu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[2], 0, 4); }
    // 0bdf0e  sar eax, 1
    X86_AT(c, 0xbdf0eu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 7, v, 0x1u, 4, w); if (w) c.r[0] = r; }
    // 0bdf10  add eax, dword ptr [ebp - 0x10]
    X86_AT(c, 0xbdf10u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u))), 0, 4); }
    // 0bdf13  lea ebx, [eax + 0x8d0a0]
    X86_AT(c, 0xbdf13u);
    c.r[3] = (uint32_t)(c.r[0] + 0x8D0A0u);
    // 0bdf19  movzx eax, byte ptr [ebp - 9]
    X86_AT(c, 0xbdf19u);
    c.r[0] = rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF7u)));
    // 0bdf1d  shl eax, 9
    X86_AT(c, 0xbdf1du);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x9u, 4, w); if (w) c.r[0] = r; }
    // 0bdf20  lea esi, [eax + 0x46da8]
    X86_AT(c, 0xbdf20u);
    c.r[6] = (uint32_t)(c.r[0] + 0x46DA8u);
    // 0bdf26  mov dword ptr [ebp - 8], 0
    X86_AT(c, 0xbdf26u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), 0x0u);
L_bdf2d:
    X86_TICK(c, 11);
    // 0bdf2d  mov eax, dword ptr [ebp - 8]
    X86_AT(c, 0xbdf2du);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)));
    // 0bdf30  cmp eax, 0x20
    X86_AT(c, 0xbdf30u);
    (void)x86_sub(c, c.r[0], 0x20u, 0, 4);
    // 0bdf33  jge 0xbdf50
    X86_AT(c, 0xbdf33u);
    if (x86_cc(c, 13)) { goto L_bdf50; }
    X86_TICK(c, 40);
    // 0bdf35  push esi
    X86_AT(c, 0xbdf35u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0bdf36  push edi
    X86_AT(c, 0xbdf36u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0bdf37  mov edi, ebx
    X86_AT(c, 0xbdf37u);
    c.r[7] = c.r[3];
    // 0bdf39  mov ecx, 4
    X86_AT(c, 0xbdf39u);
    c.r[1] = 0x4u;
    // 0bdf3e  movsd dword ptr es:[edi], dword ptr [esi]
    X86_AT(c, 0xbdf3eu);
    x86_string(c, 0, 4, 243, 4, 3);
    // 0bdf40  pop edi
    X86_AT(c, 0xbdf40u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0bdf41  pop esi
    X86_AT(c, 0xbdf41u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0bdf42  inc dword ptr [ebp - 8]
    X86_AT(c, 0xbdf42u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0bdf45  add ebx, 0xb0
    X86_AT(c, 0xbdf45u);
    { uint32_t v = c.r[3]; c.r[3] = x86_add(c, v, 0xB0u, 0, 4); }
    // 0bdf4b  add esi, 0x10
    X86_AT(c, 0xbdf4bu);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x10u, 0, 4); }
    // 0bdf4e  jmp 0xbdf2d
    X86_AT(c, 0xbdf4eu);
    X86_POLL(c, 0xbdf2du); goto L_bdf2d;
L_bdf50:
    X86_TICK(c, 9);
    // 0bdf50  inc edi
    X86_AT(c, 0xbdf50u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0bdf51  jmp 0xbdecf
    X86_AT(c, 0xbdf51u);
    X86_POLL(c, 0xbdecfu); goto L_bdecf;
L_bdf56:
    X86_TICK(c, 13);
    // 0bdf56  inc dword ptr [ebp - 4]
    X86_AT(c, 0xbdf56u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0bdf59  jmp 0xbdec3
    X86_AT(c, 0xbdf59u);
    X86_POLL(c, 0xbdec3u); goto L_bdec3;
L_bdf5e:
    X86_TICK(c, 7);
    // 0bdf5e  call 0xbda60
    X86_AT(c, 0xbdf5eu);
    push32(c, 0xbdf63u); x86_call_known(c, 0xbda60u, f_000bda60); X86_RET(c, 0xbdf63u);
    X86_TICK(c, 9);
    // 0bdf63  push 1
    X86_AT(c, 0xbdf63u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0bdf65  call 0xba6a0
    X86_AT(c, 0xbdf65u);
    push32(c, 0xbdf6au); x86_call_known(c, 0xba6a0u, f_000ba6a0); X86_RET(c, 0xbdf6au);
    X86_TICK(c, 25);
    // 0bdf6a  mov dword ptr [0x46808], 0x8d0a0
    X86_AT(c, 0xbdf6au);
    wr32((c.sbase[3] + (uint32_t)(0x46808u)), 0x8D0A0u);
    // 0bdf74  mov word ptr [0x4680c], 0x14
    X86_AT(c, 0xbdf74u);
    wr16((c.sbase[3] + (uint32_t)(0x4680Cu)), 0x14u);
    // 0bdf7d  mov word ptr [0x4680e], 0x40
    X86_AT(c, 0xbdf7du);
    wr16((c.sbase[3] + (uint32_t)(0x4680Eu)), 0x40u);
    // 0bdf86  mov word ptr [0x46810], 0x60
    X86_AT(c, 0xbdf86u);
    wr16((c.sbase[3] + (uint32_t)(0x46810u)), 0x60u);
    // 0bdf8f  mov word ptr [0x46812], 0x19f
    X86_AT(c, 0xbdf8fu);
    wr16((c.sbase[3] + (uint32_t)(0x46812u)), 0x19Fu);
    // 0bdf98  mov word ptr [0x46814], 0x1bf
    X86_AT(c, 0xbdf98u);
    wr16((c.sbase[3] + (uint32_t)(0x46814u)), 0x1BFu);
    // 0bdfa1  push 0x46808
    X86_AT(c, 0xbdfa1u);
    { uint32_t v = 0x46808u; push32(c, v); }
    // 0bdfa6  push 0
    X86_AT(c, 0xbdfa6u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0bdfa8  push 0x46208
    X86_AT(c, 0xbdfa8u);
    { uint32_t v = 0x46208u; push32(c, v); }
    // 0bdfad  call 0x5c4
    X86_AT(c, 0xbdfadu);
    push32(c, 0xbdfb2u); x86_call_known(c, 0x5c4u, f_000005c4); X86_RET(c, 0xbdfb2u);
    X86_TICK(c, 9);
    // 0bdfb2  push 0
    X86_AT(c, 0xbdfb2u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0bdfb4  call 0xba6a0
    X86_AT(c, 0xbdfb4u);
    push32(c, 0xbdfb9u); x86_call_known(c, 0xba6a0u, f_000ba6a0); X86_RET(c, 0xbdfb9u);
    X86_TICK(c, 30);
    // 0bdfb9  add esp, 0x14
    X86_AT(c, 0xbdfb9u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x14u, 0, 4); }
    // 0bdfbc  pop edi
    X86_AT(c, 0xbdfbcu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0bdfbd  pop esi
    X86_AT(c, 0xbdfbdu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0bdfbe  pop ebx
    X86_AT(c, 0xbdfbeu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0bdfbf  leave 
    X86_AT(c, 0xbdfbfu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0bdfc0  ret 
    X86_AT(c, 0xbdfc0u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xbdea8u, "ran off the end of a function");
}
void f_000bdfc4(X86Cpu& c) {
    X86_TICK(c, 10);
    // 0bdfc4  push ebx
    X86_AT(c, 0xbdfc4u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0bdfc5  push esi
    X86_AT(c, 0xbdfc5u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0bdfc6  push edi
    X86_AT(c, 0xbdfc6u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0bdfc7  mov esi, 0x46da8
    X86_AT(c, 0xbdfc7u);
    c.r[6] = 0x46DA8u;
    // 0bdfcc  sub edi, edi
    X86_AT(c, 0xbdfccu);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
L_bdfce:
    X86_TICK(c, 7);
    // 0bdfce  cmp edi, 0x8000
    X86_AT(c, 0xbdfceu);
    (void)x86_sub(c, c.r[7], 0x8000u, 0, 4);
    // 0bdfd4  jge 0xbe012
    X86_AT(c, 0xbdfd4u);
    if (x86_cc(c, 13)) { goto L_be012; }
    X86_TICK(c, 13);
    // 0bdfd6  mov bl, byte ptr [esi]
    X86_AT(c, 0xbdfd6u);
    s8(c, 3, rd8((c.sbase[3] + (uint32_t)(c.r[6]))));
    // 0bdfd8  and bl, 0xf0
    X86_AT(c, 0xbdfd8u);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v & 0xF0u, 1)); }
    // 0bdfdb  cmp bl, 0x50
    X86_AT(c, 0xbdfdbu);
    (void)x86_sub(c, g8(c, 3), 0x50u, 0, 1);
    // 0bdfde  je 0xbdfea
    X86_AT(c, 0xbdfdeu);
    if (x86_cc(c, 4)) { goto L_bdfea; }
    X86_TICK(c, 7);
    // 0bdfe0  cmp bl, 0x40
    X86_AT(c, 0xbdfe0u);
    (void)x86_sub(c, g8(c, 3), 0x40u, 0, 1);
    // 0bdfe3  je 0xbdfea
    X86_AT(c, 0xbdfe3u);
    if (x86_cc(c, 4)) { goto L_bdfea; }
    X86_TICK(c, 7);
    // 0bdfe5  cmp bl, 0x10
    X86_AT(c, 0xbdfe5u);
    (void)x86_sub(c, g8(c, 3), 0x10u, 0, 1);
    // 0bdfe8  jne 0xbdff2
    X86_AT(c, 0xbdfe8u);
    if (x86_cc(c, 5)) { goto L_bdff2; }
L_bdfea:
    X86_TICK(c, 10);
    // 0bdfea  mov al, byte ptr [esi]
    X86_AT(c, 0xbdfeau);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[6]))));
    // 0bdfec  and al, 0xf
    X86_AT(c, 0xbdfecu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & 0xFu, 1)); }
    // 0bdfee  add al, 0x20
    X86_AT(c, 0xbdfeeu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, 0x20u, 0, 1)); }
    // 0bdff0  mov byte ptr [esi], al
    X86_AT(c, 0xbdff0u);
    wr8((c.sbase[3] + (uint32_t)(c.r[6])), g8(c, 0));
L_bdff2:
    X86_TICK(c, 13);
    // 0bdff2  mov bl, byte ptr [esi]
    X86_AT(c, 0xbdff2u);
    s8(c, 3, rd8((c.sbase[3] + (uint32_t)(c.r[6]))));
    // 0bdff4  and bl, 0xf
    X86_AT(c, 0xbdff4u);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v & 0xFu, 1)); }
    // 0bdff7  cmp bl, 5
    X86_AT(c, 0xbdff7u);
    (void)x86_sub(c, g8(c, 3), 0x5u, 0, 1);
    // 0bdffa  je 0xbe006
    X86_AT(c, 0xbdffau);
    if (x86_cc(c, 4)) { goto L_be006; }
    X86_TICK(c, 7);
    // 0bdffc  cmp bl, 4
    X86_AT(c, 0xbdffcu);
    (void)x86_sub(c, g8(c, 3), 0x4u, 0, 1);
    // 0bdfff  je 0xbe006
    X86_AT(c, 0xbdfffu);
    if (x86_cc(c, 4)) { goto L_be006; }
    X86_TICK(c, 7);
    // 0be001  cmp bl, 1
    X86_AT(c, 0xbe001u);
    (void)x86_sub(c, g8(c, 3), 0x1u, 0, 1);
    // 0be004  jne 0xbe00e
    X86_AT(c, 0xbe004u);
    if (x86_cc(c, 5)) { goto L_be00e; }
L_be006:
    X86_TICK(c, 10);
    // 0be006  mov al, byte ptr [esi]
    X86_AT(c, 0xbe006u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[6]))));
    // 0be008  and al, 0xf0
    X86_AT(c, 0xbe008u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & 0xF0u, 1)); }
    // 0be00a  add al, 2
    X86_AT(c, 0xbe00au);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, 0x2u, 0, 1)); }
    // 0be00c  mov byte ptr [esi], al
    X86_AT(c, 0xbe00cu);
    wr8((c.sbase[3] + (uint32_t)(c.r[6])), g8(c, 0));
L_be00e:
    X86_TICK(c, 11);
    // 0be00e  inc edi
    X86_AT(c, 0xbe00eu);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0be00f  inc esi
    X86_AT(c, 0xbe00fu);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 0be010  jmp 0xbdfce
    X86_AT(c, 0xbe010u);
    X86_POLL(c, 0xbdfceu); goto L_bdfce;
L_be012:
    X86_TICK(c, 7);
    // 0be012  call 0xbc86c
    X86_AT(c, 0xbe012u);
    push32(c, 0xbe017u); x86_call_known(c, 0xbc86cu, f_000bc86c); X86_RET(c, 0xbe017u);
    X86_TICK(c, 22);
    // 0be017  pop edi
    X86_AT(c, 0xbe017u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0be018  pop esi
    X86_AT(c, 0xbe018u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0be019  pop ebx
    X86_AT(c, 0xbe019u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0be01a  ret 
    X86_AT(c, 0xbe01au);
    c.eip = pop32(c); return;
    x86_fault(c, 0xbdfc4u, "ran off the end of a function");
}
void f_000be01c(X86Cpu& c) {
    X86_TICK(c, 31);
    // 0be01c  push ebp
    X86_AT(c, 0xbe01cu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0be01d  mov ebp, esp
    X86_AT(c, 0xbe01du);
    c.r[5] = c.r[4];
    // 0be01f  sub esp, 0xc
    X86_AT(c, 0xbe01fu);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, 0xCu, 0, 4); }
    // 0be022  lea eax, [ebp - 0xc]
    X86_AT(c, 0xbe022u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFF4u);
    // 0be025  push eax
    X86_AT(c, 0xbe025u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0be026  lea eax, [ebp - 8]
    X86_AT(c, 0xbe026u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFF8u);
    // 0be029  push eax
    X86_AT(c, 0xbe029u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0be02a  lea eax, [ebp - 4]
    X86_AT(c, 0xbe02au);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFFCu);
    // 0be02d  push eax
    X86_AT(c, 0xbe02du);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0be02e  push 0x8000
    X86_AT(c, 0xbe02eu);
    { uint32_t v = 0x8000u; push32(c, v); }
    // 0be033  push 0x46da8
    X86_AT(c, 0xbe033u);
    { uint32_t v = 0x46DA8u; push32(c, v); }
    // 0be038  push 0x22a4
    X86_AT(c, 0xbe038u);
    { uint32_t v = 0x22A4u; push32(c, v); }
    // 0be03d  call 0xbb1f0
    X86_AT(c, 0xbe03du);
    push32(c, 0xbe042u); x86_call_known(c, 0xbb1f0u, f_000bb1f0); X86_RET(c, 0xbe042u);
    X86_TICK(c, 16);
    // 0be042  leave 
    X86_AT(c, 0xbe042u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0be043  ret 
    X86_AT(c, 0xbe043u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xbe01cu, "ran off the end of a function");
}
void f_000be044(X86Cpu& c) {
    X86_TICK(c, 13);
    // 0be044  push edi
    X86_AT(c, 0xbe044u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0be045  push 0x22b4
    X86_AT(c, 0xbe045u);
    { uint32_t v = 0x22B4u; push32(c, v); }
    // 0be04a  push 0x22b8
    X86_AT(c, 0xbe04au);
    { uint32_t v = 0x22B8u; push32(c, v); }
    // 0be04f  call 0xd7fc4
    X86_AT(c, 0xbe04fu);
    push32(c, 0xbe054u); x86_call_known(c, 0xd7fc4u, f_000d7fc4); X86_RET(c, 0xbe054u);
    X86_TICK(c, 18);
    // 0be054  xchg edi, eax
    X86_AT(c, 0xbe054u);
    { uint32_t t = c.r[7]; c.r[7] = c.r[0]; c.r[0] = t; }
    // 0be055  push edi
    X86_AT(c, 0xbe055u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0be056  push 1
    X86_AT(c, 0xbe056u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0be058  push 0x1000
    X86_AT(c, 0xbe058u);
    { uint32_t v = 0x1000u; push32(c, v); }
    // 0be05d  push 0x8bfa8
    X86_AT(c, 0xbe05du);
    { uint32_t v = 0x8BFA8u; push32(c, v); }
    // 0be062  call 0xd7ce8
    X86_AT(c, 0xbe062u);
    push32(c, 0xbe067u); x86_call_known(c, 0xd7ce8u, f_000d7ce8); X86_RET(c, 0xbe067u);
    X86_TICK(c, 9);
    // 0be067  push edi
    X86_AT(c, 0xbe067u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0be068  call 0xd84c0
    X86_AT(c, 0xbe068u);
    push32(c, 0xbe06du); x86_call_known(c, 0xd84c0u, f_000d84c0); X86_RET(c, 0xbe06du);
    X86_TICK(c, 16);
    // 0be06d  add esp, 0x1c
    X86_AT(c, 0xbe06du);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x1Cu, 0, 4); }
    // 0be070  pop edi
    X86_AT(c, 0xbe070u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0be071  ret 
    X86_AT(c, 0xbe071u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xbe044u, "ran off the end of a function");
}
void f_000be074(X86Cpu& c) {
    X86_TICK(c, 21);
    // 0be074  push ebp
    X86_AT(c, 0xbe074u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0be075  mov ebp, esp
    X86_AT(c, 0xbe075u);
    c.r[5] = c.r[4];
    // 0be077  sub esp, 8
    X86_AT(c, 0xbe077u);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, 0x8u, 0, 4); }
    // 0be07a  push esi
    X86_AT(c, 0xbe07au);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0be07b  push edi
    X86_AT(c, 0xbe07bu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0be07c  mov edx, dword ptr [ebp + 8]
    X86_AT(c, 0xbe07cu);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0be07f  cmp edx, 9
    X86_AT(c, 0xbe07fu);
    (void)x86_sub(c, c.r[2], 0x9u, 0, 4);
    // 0be082  ja 0xbe11d
    X86_AT(c, 0xbe082u);
    if (x86_cc(c, 7)) { goto L_be11d; }
    X86_TICK(c, 7);
    // 0be088  jmp dword ptr cs:[edx*4 + 0xbe090]
    X86_AT(c, 0xbe088u);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xBE090u)));
      switch (t) {
      case 0xbe0b8u: goto L_be0b8;
      case 0xbe0bcu: goto L_be0bc;
      case 0xbe0c5u: goto L_be0c5;
      case 0xbe0ceu: goto L_be0ce;
      case 0xbe0d7u: goto L_be0d7;
      case 0xbe0e7u: goto L_be0e7;
      case 0xbe0f0u: goto L_be0f0;
      case 0xbe0fdu: goto L_be0fd;
      case 0xbe106u: goto L_be106;
      case 0xbe10fu: goto L_be10f;
      default: x86_jump(c, t); return; } }
L_be0b8:
    X86_TICK(c, 9);
    // 0be0b8  sub eax, eax
    X86_AT(c, 0xbe0b8u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0be0ba  jmp 0xbe0f5
    X86_AT(c, 0xbe0bau);
    goto L_be0f5;
L_be0bc:
    X86_TICK(c, 9);
    // 0be0bc  mov dword ptr [ebp - 4], 0xb
    X86_AT(c, 0xbe0bcu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), 0xBu);
    // 0be0c3  jmp 0xbe0de
    X86_AT(c, 0xbe0c3u);
    goto L_be0de;
L_be0c5:
    X86_TICK(c, 9);
    // 0be0c5  mov dword ptr [ebp - 4], 0x16
    X86_AT(c, 0xbe0c5u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), 0x16u);
    // 0be0cc  jmp 0xbe0de
    X86_AT(c, 0xbe0ccu);
    goto L_be0de;
L_be0ce:
    X86_TICK(c, 9);
    // 0be0ce  mov dword ptr [ebp - 4], 0x21
    X86_AT(c, 0xbe0ceu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), 0x21u);
    // 0be0d5  jmp 0xbe0de
    X86_AT(c, 0xbe0d5u);
    goto L_be0de;
L_be0d7:
    X86_TICK(c, 2);
    // 0be0d7  mov dword ptr [ebp - 4], 0x2c
    X86_AT(c, 0xbe0d7u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), 0x2Cu);
L_be0de:
    X86_TICK(c, 9);
    // 0be0de  mov dword ptr [ebp - 8], 0
    X86_AT(c, 0xbe0deu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), 0x0u);
    // 0be0e5  jmp 0xbe11d
    X86_AT(c, 0xbe0e5u);
    goto L_be11d;
L_be0e7:
    X86_TICK(c, 9);
    // 0be0e7  mov dword ptr [ebp - 4], 0
    X86_AT(c, 0xbe0e7u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), 0x0u);
    // 0be0ee  jmp 0xbe116
    X86_AT(c, 0xbe0eeu);
    goto L_be116;
L_be0f0:
    X86_TICK(c, 2);
    // 0be0f0  mov eax, 0xb
    X86_AT(c, 0xbe0f0u);
    c.r[0] = 0xBu;
L_be0f5:
    X86_TICK(c, 11);
    // 0be0f5  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0xbe0f5u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
    // 0be0f8  mov dword ptr [ebp - 8], eax
    X86_AT(c, 0xbe0f8u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), c.r[0]);
    // 0be0fb  jmp 0xbe11d
    X86_AT(c, 0xbe0fbu);
    goto L_be11d;
L_be0fd:
    X86_TICK(c, 9);
    // 0be0fd  mov dword ptr [ebp - 4], 0x16
    X86_AT(c, 0xbe0fdu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), 0x16u);
    // 0be104  jmp 0xbe116
    X86_AT(c, 0xbe104u);
    goto L_be116;
L_be106:
    X86_TICK(c, 9);
    // 0be106  mov dword ptr [ebp - 4], 0x21
    X86_AT(c, 0xbe106u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), 0x21u);
    // 0be10d  jmp 0xbe116
    X86_AT(c, 0xbe10du);
    goto L_be116;
L_be10f:
    X86_TICK(c, 2);
    // 0be10f  mov dword ptr [ebp - 4], 0x2c
    X86_AT(c, 0xbe10fu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), 0x2Cu);
L_be116:
    X86_TICK(c, 2);
    // 0be116  mov dword ptr [ebp - 8], 0xb
    X86_AT(c, 0xbe116u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), 0xBu);
L_be11d:
    X86_TICK(c, 2);
    // 0be11d  sub esi, esi
    X86_AT(c, 0xbe11du);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[6], 0, 4); }
L_be11f:
    X86_TICK(c, 7);
    // 0be11f  cmp esi, 0xb
    X86_AT(c, 0xbe11fu);
    (void)x86_sub(c, c.r[6], 0xBu, 0, 4);
    // 0be122  jge 0xbe15d
    X86_AT(c, 0xbe122u);
    if (x86_cc(c, 13)) { goto L_be15d; }
    X86_TICK(c, 2);
    // 0be124  sub edi, edi
    X86_AT(c, 0xbe124u);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
L_be126:
    X86_TICK(c, 7);
    // 0be126  cmp edi, 0xb
    X86_AT(c, 0xbe126u);
    (void)x86_sub(c, c.r[7], 0xBu, 0, 4);
    // 0be129  jge 0xbe15a
    X86_AT(c, 0xbe129u);
    if (x86_cc(c, 13)) { goto L_be15a; }
    X86_TICK(c, 32);
    // 0be12b  mov eax, esi
    X86_AT(c, 0xbe12bu);
    c.r[0] = c.r[6];
    // 0be12d  add eax, dword ptr [ebp - 8]
    X86_AT(c, 0xbe12du);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u))), 0, 4); }
    // 0be130  shl eax, 6
    X86_AT(c, 0xbe130u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x6u, 4, w); if (w) c.r[0] = r; }
    // 0be133  mov edx, edi
    X86_AT(c, 0xbe133u);
    c.r[2] = c.r[7];
    // 0be135  add edx, dword ptr [ebp - 4]
    X86_AT(c, 0xbe135u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))), 0, 4); }
    // 0be138  add edx, eax
    X86_AT(c, 0xbe138u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0be13a  mov cl, byte ptr [edx + 0x8bfa8]
    X86_AT(c, 0xbe13au);
    s8(c, 1, rd8((c.sbase[3] + (uint32_t)(c.r[2] + 0x8BFA8u))));
    // 0be140  cmp cl, 8
    X86_AT(c, 0xbe140u);
    (void)x86_sub(c, g8(c, 1), 0x8u, 0, 1);
    // 0be143  jne 0xbe147
    X86_AT(c, 0xbe143u);
    if (x86_cc(c, 5)) { goto L_be147; }
    X86_TICK(c, 2);
    // 0be145  mov cl, 2
    X86_AT(c, 0xbe145u);
    s8(c, 1, 0x2u);
L_be147:
    X86_TICK(c, 19);
    // 0be147  mov eax, esi
    X86_AT(c, 0xbe147u);
    c.r[0] = c.r[6];
    // 0be149  lea edx, [eax + eax*8]
    X86_AT(c, 0xbe149u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 8);
    // 0be14c  lea eax, [edx + eax*2]
    X86_AT(c, 0xbe14cu);
    c.r[0] = (uint32_t)(c.r[2] + c.r[0] * 2);
    // 0be14f  add eax, edi
    X86_AT(c, 0xbe14fu);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, c.r[7], 0, 4); }
    // 0be151  mov byte ptr [eax + 0x8cfa8], cl
    X86_AT(c, 0xbe151u);
    wr8((c.sbase[3] + (uint32_t)(c.r[0] + 0x8CFA8u)), g8(c, 1));
    // 0be157  inc edi
    X86_AT(c, 0xbe157u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0be158  jmp 0xbe126
    X86_AT(c, 0xbe158u);
    X86_POLL(c, 0xbe126u); goto L_be126;
L_be15a:
    X86_TICK(c, 9);
    // 0be15a  inc esi
    X86_AT(c, 0xbe15au);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 0be15b  jmp 0xbe11f
    X86_AT(c, 0xbe15bu);
    X86_POLL(c, 0xbe11fu); goto L_be11f;
L_be15d:
    X86_TICK(c, 24);
    // 0be15d  pop edi
    X86_AT(c, 0xbe15du);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0be15e  pop esi
    X86_AT(c, 0xbe15eu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0be15f  leave 
    X86_AT(c, 0xbe15fu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0be160  ret 
    X86_AT(c, 0xbe160u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xbe074u, "ran off the end of a function");
}
void f_000be164(X86Cpu& c) {
    X86_TICK(c, 4);
    // 0be164  push edi
    X86_AT(c, 0xbe164u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0be165  sub edi, edi
    X86_AT(c, 0xbe165u);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
L_be167:
    X86_TICK(c, 7);
    // 0be167  cmp edi, 0x40
    X86_AT(c, 0xbe167u);
    (void)x86_sub(c, c.r[7], 0x40u, 0, 4);
    // 0be16a  jge 0xbe191
    X86_AT(c, 0xbe16au);
    if (x86_cc(c, 13)) { goto L_be191; }
    X86_TICK(c, 2);
    // 0be16c  sub ecx, ecx
    X86_AT(c, 0xbe16cu);
    { uint32_t v = c.r[1]; c.r[1] = x86_sub(c, v, c.r[1], 0, 4); }
L_be16e:
    X86_TICK(c, 7);
    // 0be16e  cmp ecx, 0x40
    X86_AT(c, 0xbe16eu);
    (void)x86_sub(c, c.r[1], 0x40u, 0, 4);
    // 0be171  jge 0xbe18e
    X86_AT(c, 0xbe171u);
    if (x86_cc(c, 13)) { goto L_be18e; }
    X86_TICK(c, 19);
    // 0be173  mov eax, edi
    X86_AT(c, 0xbe173u);
    c.r[0] = c.r[7];
    // 0be175  shl eax, 6
    X86_AT(c, 0xbe175u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x6u, 4, w); if (w) c.r[0] = r; }
    // 0be178  lea edx, [ecx + eax*1]
    X86_AT(c, 0xbe178u);
    c.r[2] = (uint32_t)(c.r[1] + c.r[0]);
    // 0be17b  cmp byte ptr [edx + 0x8afa8], 8
    X86_AT(c, 0xbe17bu);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[2] + 0x8AFA8u))), 0x8u, 0, 1);
    // 0be182  jne 0xbe18b
    X86_AT(c, 0xbe182u);
    if (x86_cc(c, 5)) { goto L_be18b; }
    X86_TICK(c, 2);
    // 0be184  mov byte ptr [edx + 0x8afa8], 0
    X86_AT(c, 0xbe184u);
    wr8((c.sbase[3] + (uint32_t)(c.r[2] + 0x8AFA8u)), 0x0u);
L_be18b:
    X86_TICK(c, 9);
    // 0be18b  inc ecx
    X86_AT(c, 0xbe18bu);
    { uint32_t v = c.r[1]; c.r[1] = x86_inc(c, v, 4); }
    // 0be18c  jmp 0xbe16e
    X86_AT(c, 0xbe18cu);
    X86_POLL(c, 0xbe16eu); goto L_be16e;
L_be18e:
    X86_TICK(c, 9);
    // 0be18e  inc edi
    X86_AT(c, 0xbe18eu);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0be18f  jmp 0xbe167
    X86_AT(c, 0xbe18fu);
    X86_POLL(c, 0xbe167u); goto L_be167;
L_be191:
    X86_TICK(c, 14);
    // 0be191  pop edi
    X86_AT(c, 0xbe191u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0be192  ret 
    X86_AT(c, 0xbe192u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xbe164u, "ran off the end of a function");
}
void f_000be194(X86Cpu& c) {
    X86_TICK(c, 31);
    // 0be194  push esi
    X86_AT(c, 0xbe194u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0be195  push edi
    X86_AT(c, 0xbe195u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0be196  push 0
    X86_AT(c, 0xbe196u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0be198  push 0xf
    X86_AT(c, 0xbe198u);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0be19a  push 0xf
    X86_AT(c, 0xbe19au);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0be19c  push 2
    X86_AT(c, 0xbe19cu);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0be19e  push 0x1f
    X86_AT(c, 0xbe19eu);
    { uint32_t v = 0x1Fu; push32(c, v); }
    // 0be1a0  push 0x34
    X86_AT(c, 0xbe1a0u);
    { uint32_t v = 0x34u; push32(c, v); }
    // 0be1a2  push 0x107
    X86_AT(c, 0xbe1a2u);
    { uint32_t v = 0x107u; push32(c, v); }
    // 0be1a7  push 0x2f
    X86_AT(c, 0xbe1a7u);
    { uint32_t v = 0x2Fu; push32(c, v); }
    // 0be1a9  push 0x172
    X86_AT(c, 0xbe1a9u);
    { uint32_t v = 0x172u; push32(c, v); }
    // 0be1ae  push 0xa
    X86_AT(c, 0xbe1aeu);
    { uint32_t v = 0xAu; push32(c, v); }
    // 0be1b0  call 0xbb5cc
    X86_AT(c, 0xbe1b0u);
    push32(c, 0xbe1b5u); x86_call_known(c, 0xbb5ccu, f_000bb5cc); X86_RET(c, 0xbe1b5u);
    X86_TICK(c, 27);
    // 0be1b5  push 0
    X86_AT(c, 0xbe1b5u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0be1b7  push 0xf
    X86_AT(c, 0xbe1b7u);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0be1b9  push 0xf
    X86_AT(c, 0xbe1b9u);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0be1bb  push 2
    X86_AT(c, 0xbe1bbu);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0be1bd  push 0x1f
    X86_AT(c, 0xbe1bdu);
    { uint32_t v = 0x1Fu; push32(c, v); }
    // 0be1bf  push 0x34
    X86_AT(c, 0xbe1bfu);
    { uint32_t v = 0x34u; push32(c, v); }
    // 0be1c1  push 0x107
    X86_AT(c, 0xbe1c1u);
    { uint32_t v = 0x107u; push32(c, v); }
    // 0be1c6  push 0x6f
    X86_AT(c, 0xbe1c6u);
    { uint32_t v = 0x6Fu; push32(c, v); }
    // 0be1c8  push 0x172
    X86_AT(c, 0xbe1c8u);
    { uint32_t v = 0x172u; push32(c, v); }
    // 0be1cd  push 0xb
    X86_AT(c, 0xbe1cdu);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0be1cf  call 0xbb5cc
    X86_AT(c, 0xbe1cfu);
    push32(c, 0xbe1d4u); x86_call_known(c, 0xbb5ccu, f_000bb5cc); X86_RET(c, 0xbe1d4u);
    X86_TICK(c, 29);
    // 0be1d4  add esp, 0x50
    X86_AT(c, 0xbe1d4u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x50u, 0, 4); }
    // 0be1d7  push 0
    X86_AT(c, 0xbe1d7u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0be1d9  push 0xf
    X86_AT(c, 0xbe1d9u);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0be1db  push 0xf
    X86_AT(c, 0xbe1dbu);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0be1dd  push 2
    X86_AT(c, 0xbe1ddu);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0be1df  push 0x1f
    X86_AT(c, 0xbe1dfu);
    { uint32_t v = 0x1Fu; push32(c, v); }
    // 0be1e1  push 0x34
    X86_AT(c, 0xbe1e1u);
    { uint32_t v = 0x34u; push32(c, v); }
    // 0be1e3  push 0x107
    X86_AT(c, 0xbe1e3u);
    { uint32_t v = 0x107u; push32(c, v); }
    // 0be1e8  push 0xaf
    X86_AT(c, 0xbe1e8u);
    { uint32_t v = 0xAFu; push32(c, v); }
    // 0be1ed  push 0x172
    X86_AT(c, 0xbe1edu);
    { uint32_t v = 0x172u; push32(c, v); }
    // 0be1f2  push 0xc
    X86_AT(c, 0xbe1f2u);
    { uint32_t v = 0xCu; push32(c, v); }
    // 0be1f4  call 0xbb5cc
    X86_AT(c, 0xbe1f4u);
    push32(c, 0xbe1f9u); x86_call_known(c, 0xbb5ccu, f_000bb5cc); X86_RET(c, 0xbe1f9u);
    X86_TICK(c, 27);
    // 0be1f9  push 0
    X86_AT(c, 0xbe1f9u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0be1fb  push 0xf
    X86_AT(c, 0xbe1fbu);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0be1fd  push 0xf
    X86_AT(c, 0xbe1fdu);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0be1ff  push 2
    X86_AT(c, 0xbe1ffu);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0be201  push 0x1f
    X86_AT(c, 0xbe201u);
    { uint32_t v = 0x1Fu; push32(c, v); }
    // 0be203  push 0x34
    X86_AT(c, 0xbe203u);
    { uint32_t v = 0x34u; push32(c, v); }
    // 0be205  push 0x107
    X86_AT(c, 0xbe205u);
    { uint32_t v = 0x107u; push32(c, v); }
    // 0be20a  push 0xef
    X86_AT(c, 0xbe20au);
    { uint32_t v = 0xEFu; push32(c, v); }
    // 0be20f  push 0x172
    X86_AT(c, 0xbe20fu);
    { uint32_t v = 0x172u; push32(c, v); }
    // 0be214  push 0xd
    X86_AT(c, 0xbe214u);
    { uint32_t v = 0xDu; push32(c, v); }
    // 0be216  call 0xbb5cc
    X86_AT(c, 0xbe216u);
    push32(c, 0xbe21bu); x86_call_known(c, 0xbb5ccu, f_000bb5cc); X86_RET(c, 0xbe21bu);
    X86_TICK(c, 29);
    // 0be21b  add esp, 0x50
    X86_AT(c, 0xbe21bu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x50u, 0, 4); }
    // 0be21e  push 0
    X86_AT(c, 0xbe21eu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0be220  push 0xf
    X86_AT(c, 0xbe220u);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0be222  push 0xf
    X86_AT(c, 0xbe222u);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0be224  push 6
    X86_AT(c, 0xbe224u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0be226  push 0x1f
    X86_AT(c, 0xbe226u);
    { uint32_t v = 0x1Fu; push32(c, v); }
    // 0be228  push 0x75
    X86_AT(c, 0xbe228u);
    { uint32_t v = 0x75u; push32(c, v); }
    // 0be22a  push 0x107
    X86_AT(c, 0xbe22au);
    { uint32_t v = 0x107u; push32(c, v); }
    // 0be22f  push 0x12f
    X86_AT(c, 0xbe22fu);
    { uint32_t v = 0x12Fu; push32(c, v); }
    // 0be234  push 0x172
    X86_AT(c, 0xbe234u);
    { uint32_t v = 0x172u; push32(c, v); }
    // 0be239  push 7
    X86_AT(c, 0xbe239u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0be23b  call 0xbb5cc
    X86_AT(c, 0xbe23bu);
    push32(c, 0xbe240u); x86_call_known(c, 0xbb5ccu, f_000bb5cc); X86_RET(c, 0xbe240u);
    X86_TICK(c, 9);
    // 0be240  push 0xa
    X86_AT(c, 0xbe240u);
    { uint32_t v = 0xAu; push32(c, v); }
    // 0be242  call 0xbb6b0
    X86_AT(c, 0xbe242u);
    push32(c, 0xbe247u); x86_call_known(c, 0xbb6b0u, f_000bb6b0); X86_RET(c, 0xbe247u);
    X86_TICK(c, 9);
    // 0be247  push 0xa
    X86_AT(c, 0xbe247u);
    { uint32_t v = 0xAu; push32(c, v); }
    // 0be249  call 0xbb710
    X86_AT(c, 0xbe249u);
    push32(c, 0xbe24eu); x86_call_known(c, 0xbb710u, f_000bb710); X86_RET(c, 0xbe24eu);
    X86_TICK(c, 9);
    // 0be24e  push 0xa
    X86_AT(c, 0xbe24eu);
    { uint32_t v = 0xAu; push32(c, v); }
    // 0be250  call 0xbb6b0
    X86_AT(c, 0xbe250u);
    push32(c, 0xbe255u); x86_call_known(c, 0xbb6b0u, f_000bb6b0); X86_RET(c, 0xbe255u);
    X86_TICK(c, 13);
    // 0be255  push 0
    X86_AT(c, 0xbe255u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0be257  push 0
    X86_AT(c, 0xbe257u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0be259  push 0xa
    X86_AT(c, 0xbe259u);
    { uint32_t v = 0xAu; push32(c, v); }
    // 0be25b  call 0xbc174
    X86_AT(c, 0xbe25bu);
    push32(c, 0xbe260u); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xbe260u);
    X86_TICK(c, 13);
    // 0be260  add esp, 0x40
    X86_AT(c, 0xbe260u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x40u, 0, 4); }
    // 0be263  push 0xa4aa0
    X86_AT(c, 0xbe263u);
    { uint32_t v = 0xA4AA0u; push32(c, v); }
    // 0be268  push 0xa
    X86_AT(c, 0xbe268u);
    { uint32_t v = 0xAu; push32(c, v); }
    // 0be26a  call 0xbbfe0
    X86_AT(c, 0xbe26au);
    push32(c, 0xbe26fu); x86_call_known(c, 0xbbfe0u, f_000bbfe0); X86_RET(c, 0xbe26fu);
    X86_TICK(c, 13);
    // 0be26f  push 1
    X86_AT(c, 0xbe26fu);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0be271  push 2
    X86_AT(c, 0xbe271u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0be273  push 0xa
    X86_AT(c, 0xbe273u);
    { uint32_t v = 0xAu; push32(c, v); }
    // 0be275  call 0xbc174
    X86_AT(c, 0xbe275u);
    push32(c, 0xbe27au); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xbe27au);
    X86_TICK(c, 11);
    // 0be27a  push 0x22c8
    X86_AT(c, 0xbe27au);
    { uint32_t v = 0x22C8u; push32(c, v); }
    // 0be27f  push 0xa
    X86_AT(c, 0xbe27fu);
    { uint32_t v = 0xAu; push32(c, v); }
    // 0be281  call 0xbbba4
    X86_AT(c, 0xbe281u);
    push32(c, 0xbe286u); x86_call_known(c, 0xbbba4u, f_000bbba4); X86_RET(c, 0xbe286u);
    X86_TICK(c, 13);
    // 0be286  push 2
    X86_AT(c, 0xbe286u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0be288  push 2
    X86_AT(c, 0xbe288u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0be28a  push 0xa
    X86_AT(c, 0xbe28au);
    { uint32_t v = 0xAu; push32(c, v); }
    // 0be28c  call 0xbc174
    X86_AT(c, 0xbe28cu);
    push32(c, 0xbe291u); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xbe291u);
    X86_TICK(c, 11);
    // 0be291  push 0x22dc
    X86_AT(c, 0xbe291u);
    { uint32_t v = 0x22DCu; push32(c, v); }
    // 0be296  push 0xa
    X86_AT(c, 0xbe296u);
    { uint32_t v = 0xAu; push32(c, v); }
    // 0be298  call 0xbbba4
    X86_AT(c, 0xbe298u);
    push32(c, 0xbe29du); x86_call_known(c, 0xbbba4u, f_000bbba4); X86_RET(c, 0xbe29du);
    X86_TICK(c, 9);
    // 0be29d  push 0xb
    X86_AT(c, 0xbe29du);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0be29f  call 0xbb710
    X86_AT(c, 0xbe29fu);
    push32(c, 0xbe2a4u); x86_call_known(c, 0xbb710u, f_000bb710); X86_RET(c, 0xbe2a4u);
    X86_TICK(c, 13);
    // 0be2a4  push 0
    X86_AT(c, 0xbe2a4u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0be2a6  push 0
    X86_AT(c, 0xbe2a6u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0be2a8  push 0xb
    X86_AT(c, 0xbe2a8u);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0be2aa  call 0xbc174
    X86_AT(c, 0xbe2aau);
    push32(c, 0xbe2afu); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xbe2afu);
    X86_TICK(c, 13);
    // 0be2af  add esp, 0x40
    X86_AT(c, 0xbe2afu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x40u, 0, 4); }
    // 0be2b2  push 0xa4b63
    X86_AT(c, 0xbe2b2u);
    { uint32_t v = 0xA4B63u; push32(c, v); }
    // 0be2b7  push 0xb
    X86_AT(c, 0xbe2b7u);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0be2b9  call 0xbbfe0
    X86_AT(c, 0xbe2b9u);
    push32(c, 0xbe2beu); x86_call_known(c, 0xbbfe0u, f_000bbfe0); X86_RET(c, 0xbe2beu);
    X86_TICK(c, 13);
    // 0be2be  push 1
    X86_AT(c, 0xbe2beu);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0be2c0  push 2
    X86_AT(c, 0xbe2c0u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0be2c2  push 0xb
    X86_AT(c, 0xbe2c2u);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0be2c4  call 0xbc174
    X86_AT(c, 0xbe2c4u);
    push32(c, 0xbe2c9u); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xbe2c9u);
    X86_TICK(c, 11);
    // 0be2c9  push 0x22f0
    X86_AT(c, 0xbe2c9u);
    { uint32_t v = 0x22F0u; push32(c, v); }
    // 0be2ce  push 0xb
    X86_AT(c, 0xbe2ceu);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0be2d0  call 0xbbba4
    X86_AT(c, 0xbe2d0u);
    push32(c, 0xbe2d5u); x86_call_known(c, 0xbbba4u, f_000bbba4); X86_RET(c, 0xbe2d5u);
    X86_TICK(c, 13);
    // 0be2d5  push 2
    X86_AT(c, 0xbe2d5u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0be2d7  push 2
    X86_AT(c, 0xbe2d7u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0be2d9  push 0xb
    X86_AT(c, 0xbe2d9u);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0be2db  call 0xbc174
    X86_AT(c, 0xbe2dbu);
    push32(c, 0xbe2e0u); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xbe2e0u);
    X86_TICK(c, 11);
    // 0be2e0  push 0x2304
    X86_AT(c, 0xbe2e0u);
    { uint32_t v = 0x2304u; push32(c, v); }
    // 0be2e5  push 0xb
    X86_AT(c, 0xbe2e5u);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0be2e7  call 0xbbba4
    X86_AT(c, 0xbe2e7u);
    push32(c, 0xbe2ecu); x86_call_known(c, 0xbbba4u, f_000bbba4); X86_RET(c, 0xbe2ecu);
    X86_TICK(c, 9);
    // 0be2ec  push 0xc
    X86_AT(c, 0xbe2ecu);
    { uint32_t v = 0xCu; push32(c, v); }
    // 0be2ee  call 0xbb710
    X86_AT(c, 0xbe2eeu);
    push32(c, 0xbe2f3u); x86_call_known(c, 0xbb710u, f_000bb710); X86_RET(c, 0xbe2f3u);
    X86_TICK(c, 13);
    // 0be2f3  push 0
    X86_AT(c, 0xbe2f3u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0be2f5  push 0
    X86_AT(c, 0xbe2f5u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0be2f7  push 0xc
    X86_AT(c, 0xbe2f7u);
    { uint32_t v = 0xCu; push32(c, v); }
    // 0be2f9  call 0xbc174
    X86_AT(c, 0xbe2f9u);
    push32(c, 0xbe2feu); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xbe2feu);
    X86_TICK(c, 13);
    // 0be2fe  add esp, 0x40
    X86_AT(c, 0xbe2feu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x40u, 0, 4); }
    // 0be301  push 0xa4c26
    X86_AT(c, 0xbe301u);
    { uint32_t v = 0xA4C26u; push32(c, v); }
    // 0be306  push 0xc
    X86_AT(c, 0xbe306u);
    { uint32_t v = 0xCu; push32(c, v); }
    // 0be308  call 0xbbfe0
    X86_AT(c, 0xbe308u);
    push32(c, 0xbe30du); x86_call_known(c, 0xbbfe0u, f_000bbfe0); X86_RET(c, 0xbe30du);
    X86_TICK(c, 13);
    // 0be30d  push 1
    X86_AT(c, 0xbe30du);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0be30f  push 2
    X86_AT(c, 0xbe30fu);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0be311  push 0xc
    X86_AT(c, 0xbe311u);
    { uint32_t v = 0xCu; push32(c, v); }
    // 0be313  call 0xbc174
    X86_AT(c, 0xbe313u);
    push32(c, 0xbe318u); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xbe318u);
    X86_TICK(c, 11);
    // 0be318  push 0x2318
    X86_AT(c, 0xbe318u);
    { uint32_t v = 0x2318u; push32(c, v); }
    // 0be31d  push 0xc
    X86_AT(c, 0xbe31du);
    { uint32_t v = 0xCu; push32(c, v); }
    // 0be31f  call 0xbbba4
    X86_AT(c, 0xbe31fu);
    push32(c, 0xbe324u); x86_call_known(c, 0xbbba4u, f_000bbba4); X86_RET(c, 0xbe324u);
    X86_TICK(c, 15);
    // 0be324  add esp, 0x1c
    X86_AT(c, 0xbe324u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x1Cu, 0, 4); }
    // 0be327  push 2
    X86_AT(c, 0xbe327u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0be329  push 2
    X86_AT(c, 0xbe329u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0be32b  push 0xc
    X86_AT(c, 0xbe32bu);
    { uint32_t v = 0xCu; push32(c, v); }
    // 0be32d  call 0xbc174
    X86_AT(c, 0xbe32du);
    push32(c, 0xbe332u); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xbe332u);
    X86_TICK(c, 11);
    // 0be332  push 0x232c
    X86_AT(c, 0xbe332u);
    { uint32_t v = 0x232Cu; push32(c, v); }
    // 0be337  push 0xc
    X86_AT(c, 0xbe337u);
    { uint32_t v = 0xCu; push32(c, v); }
    // 0be339  call 0xbbba4
    X86_AT(c, 0xbe339u);
    push32(c, 0xbe33eu); x86_call_known(c, 0xbbba4u, f_000bbba4); X86_RET(c, 0xbe33eu);
    X86_TICK(c, 9);
    // 0be33e  push 0xd
    X86_AT(c, 0xbe33eu);
    { uint32_t v = 0xDu; push32(c, v); }
    // 0be340  call 0xbb710
    X86_AT(c, 0xbe340u);
    push32(c, 0xbe345u); x86_call_known(c, 0xbb710u, f_000bb710); X86_RET(c, 0xbe345u);
    X86_TICK(c, 13);
    // 0be345  push 0
    X86_AT(c, 0xbe345u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0be347  push 0
    X86_AT(c, 0xbe347u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0be349  push 0xd
    X86_AT(c, 0xbe349u);
    { uint32_t v = 0xDu; push32(c, v); }
    // 0be34b  call 0xbc174
    X86_AT(c, 0xbe34bu);
    push32(c, 0xbe350u); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xbe350u);
    X86_TICK(c, 11);
    // 0be350  push 0xa4ce9
    X86_AT(c, 0xbe350u);
    { uint32_t v = 0xA4CE9u; push32(c, v); }
    // 0be355  push 0xd
    X86_AT(c, 0xbe355u);
    { uint32_t v = 0xDu; push32(c, v); }
    // 0be357  call 0xbbfe0
    X86_AT(c, 0xbe357u);
    push32(c, 0xbe35cu); x86_call_known(c, 0xbbfe0u, f_000bbfe0); X86_RET(c, 0xbe35cu);
    X86_TICK(c, 13);
    // 0be35c  push 1
    X86_AT(c, 0xbe35cu);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0be35e  push 2
    X86_AT(c, 0xbe35eu);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0be360  push 0xd
    X86_AT(c, 0xbe360u);
    { uint32_t v = 0xDu; push32(c, v); }
    // 0be362  call 0xbc174
    X86_AT(c, 0xbe362u);
    push32(c, 0xbe367u); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xbe367u);
    X86_TICK(c, 11);
    // 0be367  push 0x2340
    X86_AT(c, 0xbe367u);
    { uint32_t v = 0x2340u; push32(c, v); }
    // 0be36c  push 0xd
    X86_AT(c, 0xbe36cu);
    { uint32_t v = 0xDu; push32(c, v); }
    // 0be36e  call 0xbbba4
    X86_AT(c, 0xbe36eu);
    push32(c, 0xbe373u); x86_call_known(c, 0xbbba4u, f_000bbba4); X86_RET(c, 0xbe373u);
    X86_TICK(c, 15);
    // 0be373  add esp, 0x40
    X86_AT(c, 0xbe373u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x40u, 0, 4); }
    // 0be376  push 2
    X86_AT(c, 0xbe376u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0be378  push 2
    X86_AT(c, 0xbe378u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0be37a  push 0xd
    X86_AT(c, 0xbe37au);
    { uint32_t v = 0xDu; push32(c, v); }
    // 0be37c  call 0xbc174
    X86_AT(c, 0xbe37cu);
    push32(c, 0xbe381u); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xbe381u);
    X86_TICK(c, 11);
    // 0be381  push 0x2354
    X86_AT(c, 0xbe381u);
    { uint32_t v = 0x2354u; push32(c, v); }
    // 0be386  push 0xd
    X86_AT(c, 0xbe386u);
    { uint32_t v = 0xDu; push32(c, v); }
    // 0be388  call 0xbbba4
    X86_AT(c, 0xbe388u);
    push32(c, 0xbe38du); x86_call_known(c, 0xbbba4u, f_000bbba4); X86_RET(c, 0xbe38du);
    X86_TICK(c, 6);
    // 0be38d  sub esi, esi
    X86_AT(c, 0xbe38du);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[6], 0, 4); }
    // 0be38f  mov edi, esi
    X86_AT(c, 0xbe38fu);
    c.r[7] = c.r[6];
    // 0be391  add esp, 0x14
    X86_AT(c, 0xbe391u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x14u, 0, 4); }
L_be394:
    X86_TICK(c, 7);
    // 0be394  cmp edi, 4
    X86_AT(c, 0xbe394u);
    (void)x86_sub(c, c.r[7], 0x4u, 0, 4);
    // 0be397  jge 0xbe49c
    X86_AT(c, 0xbe397u);
    if (x86_cc(c, 13)) { goto L_be49c; }
    X86_TICK(c, 24);
    // 0be39d  lea eax, [edi + edi*2]
    X86_AT(c, 0xbe39du);
    c.r[0] = (uint32_t)(c.r[7] + c.r[7] * 2);
    // 0be3a0  lea edx, [eax*8]
    X86_AT(c, 0xbe3a0u);
    c.r[2] = (uint32_t)(c.r[0] * 8);
    // 0be3a7  lea edx, [eax + edx*8]
    X86_AT(c, 0xbe3a7u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 8);
    // 0be3aa  movzx eax, byte ptr [edx + 0xa4acf]
    X86_AT(c, 0xbe3aau);
    c.r[0] = rd8((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4ACFu)));
    // 0be3b1  xchg edx, eax
    X86_AT(c, 0xbe3b1u);
    { uint32_t t = c.r[2]; c.r[2] = c.r[0]; c.r[0] = t; }
    // 0be3b2  sub edx, 0x41
    X86_AT(c, 0xbe3b2u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, 0x41u, 0, 4); }
    // 0be3b5  cmp edx, 0x16
    X86_AT(c, 0xbe3b5u);
    (void)x86_sub(c, c.r[2], 0x16u, 0, 4);
    // 0be3b8  ja 0xbe46a
    X86_AT(c, 0xbe3b8u);
    if (x86_cc(c, 7)) { goto L_be46a; }
    X86_TICK(c, 7);
    // 0be3be  jmp dword ptr cs:[edx*4 + 0xbe3c6]
    X86_AT(c, 0xbe3beu);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xBE3C6u)));
      switch (t) {
      case 0xbe422u: goto L_be422;
      case 0xbe426u: goto L_be426;
      case 0xbe42du: goto L_be42d;
      case 0xbe434u: goto L_be434;
      case 0xbe43bu: goto L_be43b;
      case 0xbe442u: goto L_be442;
      case 0xbe449u: goto L_be449;
      case 0xbe450u: goto L_be450;
      case 0xbe457u: goto L_be457;
      case 0xbe45eu: goto L_be45e;
      case 0xbe465u: goto L_be465;
      case 0xbe46au: goto L_be46a;
      default: x86_jump(c, t); return; } }
L_be422:
    X86_TICK(c, 9);
    // 0be422  sub esi, esi
    X86_AT(c, 0xbe422u);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[6], 0, 4); }
    // 0be424  jmp 0xbe46a
    X86_AT(c, 0xbe424u);
    goto L_be46a;
L_be426:
    X86_TICK(c, 9);
    // 0be426  mov esi, 4
    X86_AT(c, 0xbe426u);
    c.r[6] = 0x4u;
    // 0be42b  jmp 0xbe46a
    X86_AT(c, 0xbe42bu);
    goto L_be46a;
L_be42d:
    X86_TICK(c, 9);
    // 0be42d  mov esi, 8
    X86_AT(c, 0xbe42du);
    c.r[6] = 0x8u;
    // 0be432  jmp 0xbe46a
    X86_AT(c, 0xbe432u);
    goto L_be46a;
L_be434:
    X86_TICK(c, 9);
    // 0be434  mov esi, 0xc
    X86_AT(c, 0xbe434u);
    c.r[6] = 0xCu;
    // 0be439  jmp 0xbe46a
    X86_AT(c, 0xbe439u);
    goto L_be46a;
L_be43b:
    X86_TICK(c, 9);
    // 0be43b  mov esi, 0x10
    X86_AT(c, 0xbe43bu);
    c.r[6] = 0x10u;
    // 0be440  jmp 0xbe46a
    X86_AT(c, 0xbe440u);
    goto L_be46a;
L_be442:
    X86_TICK(c, 9);
    // 0be442  mov esi, 0x18
    X86_AT(c, 0xbe442u);
    c.r[6] = 0x18u;
    // 0be447  jmp 0xbe46a
    X86_AT(c, 0xbe447u);
    goto L_be46a;
L_be449:
    X86_TICK(c, 9);
    // 0be449  mov esi, 0x14
    X86_AT(c, 0xbe449u);
    c.r[6] = 0x14u;
    // 0be44e  jmp 0xbe46a
    X86_AT(c, 0xbe44eu);
    goto L_be46a;
L_be450:
    X86_TICK(c, 9);
    // 0be450  mov esi, 0x20
    X86_AT(c, 0xbe450u);
    c.r[6] = 0x20u;
    // 0be455  jmp 0xbe46a
    X86_AT(c, 0xbe455u);
    goto L_be46a;
L_be457:
    X86_TICK(c, 9);
    // 0be457  mov esi, 0x1c
    X86_AT(c, 0xbe457u);
    c.r[6] = 0x1Cu;
    // 0be45c  jmp 0xbe46a
    X86_AT(c, 0xbe45cu);
    goto L_be46a;
L_be45e:
    X86_TICK(c, 9);
    // 0be45e  mov esi, 0x24
    X86_AT(c, 0xbe45eu);
    c.r[6] = 0x24u;
    // 0be463  jmp 0xbe46a
    X86_AT(c, 0xbe463u);
    goto L_be46a;
L_be465:
    X86_TICK(c, 2);
    // 0be465  mov esi, 0x28
    X86_AT(c, 0xbe465u);
    c.r[6] = 0x28u;
L_be46a:
    X86_TICK(c, 18);
    // 0be46a  lea eax, [edi + edi*2]
    X86_AT(c, 0xbe46au);
    c.r[0] = (uint32_t)(c.r[7] + c.r[7] * 2);
    // 0be46d  lea edx, [eax*8]
    X86_AT(c, 0xbe46du);
    c.r[2] = (uint32_t)(c.r[0] * 8);
    // 0be474  lea edx, [eax + edx*8]
    X86_AT(c, 0xbe474u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 8);
    // 0be477  cmp byte ptr [edx + 0xa4ad0], 0x46
    X86_AT(c, 0xbe477u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4AD0u))), 0x46u, 0, 1);
    // 0be47e  jne 0xbe483
    X86_AT(c, 0xbe47eu);
    if (x86_cc(c, 5)) { goto L_be483; }
    X86_TICK(c, 2);
    // 0be480  add esi, 2
    X86_AT(c, 0xbe480u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x2u, 0, 4); }
L_be483:
    X86_TICK(c, 17);
    // 0be483  lea eax, [edi + edi*2]
    X86_AT(c, 0xbe483u);
    c.r[0] = (uint32_t)(c.r[7] + c.r[7] * 2);
    // 0be486  lea edx, [eax*8]
    X86_AT(c, 0xbe486u);
    c.r[2] = (uint32_t)(c.r[0] * 8);
    // 0be48d  lea edx, [eax + edx*8]
    X86_AT(c, 0xbe48du);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 8);
    // 0be490  mov dword ptr [edx + 0xa4aa9], esi
    X86_AT(c, 0xbe490u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4AA9u)), c.r[6]);
    // 0be496  inc edi
    X86_AT(c, 0xbe496u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0be497  jmp 0xbe394
    X86_AT(c, 0xbe497u);
    X86_POLL(c, 0xbe394u); goto L_be394;
L_be49c:
    X86_TICK(c, 9);
    // 0be49c  push 7
    X86_AT(c, 0xbe49cu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0be49e  call 0xbb710
    X86_AT(c, 0xbe49eu);
    push32(c, 0xbe4a3u); x86_call_known(c, 0xbb710u, f_000bb710); X86_RET(c, 0xbe4a3u);
    X86_TICK(c, 9);
    // 0be4a3  push 7
    X86_AT(c, 0xbe4a3u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0be4a5  call 0xbc480
    X86_AT(c, 0xbe4a5u);
    push32(c, 0xbe4aau); x86_call_known(c, 0xbc480u, f_000bc480); X86_RET(c, 0xbe4aau);
    X86_TICK(c, 20);
    // 0be4aa  add esp, 8
    X86_AT(c, 0xbe4aau);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0be4ad  pop edi
    X86_AT(c, 0xbe4adu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0be4ae  pop esi
    X86_AT(c, 0xbe4aeu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0be4af  ret 
    X86_AT(c, 0xbe4afu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xbe194u, "ran off the end of a function");
}
void f_000be4b0(X86Cpu& c) {
    X86_TICK(c, 13);
    // 0be4b0  push esi
    X86_AT(c, 0xbe4b0u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0be4b1  push edi
    X86_AT(c, 0xbe4b1u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0be4b2  push 0xa
    X86_AT(c, 0xbe4b2u);
    { uint32_t v = 0xAu; push32(c, v); }
    // 0be4b4  call 0xbb6b0
    X86_AT(c, 0xbe4b4u);
    push32(c, 0xbe4b9u); x86_call_known(c, 0xbb6b0u, f_000bb6b0); X86_RET(c, 0xbe4b9u);
    X86_TICK(c, 9);
    // 0be4b9  push 0xa
    X86_AT(c, 0xbe4b9u);
    { uint32_t v = 0xAu; push32(c, v); }
    // 0be4bb  call 0xbb9e4
    X86_AT(c, 0xbe4bbu);
    push32(c, 0xbe4c0u); x86_call_known(c, 0xbb9e4u, f_000bb9e4); X86_RET(c, 0xbe4c0u);
    X86_TICK(c, 9);
    // 0be4c0  push 0xa
    X86_AT(c, 0xbe4c0u);
    { uint32_t v = 0xAu; push32(c, v); }
    // 0be4c2  call 0xbb6b0
    X86_AT(c, 0xbe4c2u);
    push32(c, 0xbe4c7u); x86_call_known(c, 0xbb6b0u, f_000bb6b0); X86_RET(c, 0xbe4c7u);
    X86_TICK(c, 13);
    // 0be4c7  push 0
    X86_AT(c, 0xbe4c7u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0be4c9  push 0
    X86_AT(c, 0xbe4c9u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0be4cb  push 0xa
    X86_AT(c, 0xbe4cbu);
    { uint32_t v = 0xAu; push32(c, v); }
    // 0be4cd  call 0xbc174
    X86_AT(c, 0xbe4cdu);
    push32(c, 0xbe4d2u); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xbe4d2u);
    X86_TICK(c, 11);
    // 0be4d2  push 0xa4aa0
    X86_AT(c, 0xbe4d2u);
    { uint32_t v = 0xA4AA0u; push32(c, v); }
    // 0be4d7  push 0xa
    X86_AT(c, 0xbe4d7u);
    { uint32_t v = 0xAu; push32(c, v); }
    // 0be4d9  call 0xbbfe0
    X86_AT(c, 0xbe4d9u);
    push32(c, 0xbe4deu); x86_call_known(c, 0xbbfe0u, f_000bbfe0); X86_RET(c, 0xbe4deu);
    X86_TICK(c, 13);
    // 0be4de  push 1
    X86_AT(c, 0xbe4deu);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0be4e0  push 2
    X86_AT(c, 0xbe4e0u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0be4e2  push 0xa
    X86_AT(c, 0xbe4e2u);
    { uint32_t v = 0xAu; push32(c, v); }
    // 0be4e4  call 0xbc174
    X86_AT(c, 0xbe4e4u);
    push32(c, 0xbe4e9u); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xbe4e9u);
    X86_TICK(c, 11);
    // 0be4e9  push 0x2368
    X86_AT(c, 0xbe4e9u);
    { uint32_t v = 0x2368u; push32(c, v); }
    // 0be4ee  push 0xa
    X86_AT(c, 0xbe4eeu);
    { uint32_t v = 0xAu; push32(c, v); }
    // 0be4f0  call 0xbbba4
    X86_AT(c, 0xbe4f0u);
    push32(c, 0xbe4f5u); x86_call_known(c, 0xbbba4u, f_000bbba4); X86_RET(c, 0xbe4f5u);
    X86_TICK(c, 13);
    // 0be4f5  push 2
    X86_AT(c, 0xbe4f5u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0be4f7  push 2
    X86_AT(c, 0xbe4f7u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0be4f9  push 0xa
    X86_AT(c, 0xbe4f9u);
    { uint32_t v = 0xAu; push32(c, v); }
    // 0be4fb  call 0xbc174
    X86_AT(c, 0xbe4fbu);
    push32(c, 0xbe500u); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xbe500u);
    X86_TICK(c, 13);
    // 0be500  add esp, 0x40
    X86_AT(c, 0xbe500u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x40u, 0, 4); }
    // 0be503  push 0x237c
    X86_AT(c, 0xbe503u);
    { uint32_t v = 0x237Cu; push32(c, v); }
    // 0be508  push 0xa
    X86_AT(c, 0xbe508u);
    { uint32_t v = 0xAu; push32(c, v); }
    // 0be50a  call 0xbbba4
    X86_AT(c, 0xbe50au);
    push32(c, 0xbe50fu); x86_call_known(c, 0xbbba4u, f_000bbba4); X86_RET(c, 0xbe50fu);
    X86_TICK(c, 9);
    // 0be50f  push 0xb
    X86_AT(c, 0xbe50fu);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0be511  call 0xbb9e4
    X86_AT(c, 0xbe511u);
    push32(c, 0xbe516u); x86_call_known(c, 0xbb9e4u, f_000bb9e4); X86_RET(c, 0xbe516u);
    X86_TICK(c, 13);
    // 0be516  push 0
    X86_AT(c, 0xbe516u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0be518  push 0
    X86_AT(c, 0xbe518u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0be51a  push 0xb
    X86_AT(c, 0xbe51au);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0be51c  call 0xbc174
    X86_AT(c, 0xbe51cu);
    push32(c, 0xbe521u); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xbe521u);
    X86_TICK(c, 11);
    // 0be521  push 0xa4b63
    X86_AT(c, 0xbe521u);
    { uint32_t v = 0xA4B63u; push32(c, v); }
    // 0be526  push 0xb
    X86_AT(c, 0xbe526u);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0be528  call 0xbbfe0
    X86_AT(c, 0xbe528u);
    push32(c, 0xbe52du); x86_call_known(c, 0xbbfe0u, f_000bbfe0); X86_RET(c, 0xbe52du);
    X86_TICK(c, 13);
    // 0be52d  push 1
    X86_AT(c, 0xbe52du);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0be52f  push 2
    X86_AT(c, 0xbe52fu);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0be531  push 0xb
    X86_AT(c, 0xbe531u);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0be533  call 0xbc174
    X86_AT(c, 0xbe533u);
    push32(c, 0xbe538u); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xbe538u);
    X86_TICK(c, 11);
    // 0be538  push 0x2390
    X86_AT(c, 0xbe538u);
    { uint32_t v = 0x2390u; push32(c, v); }
    // 0be53d  push 0xb
    X86_AT(c, 0xbe53du);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0be53f  call 0xbbba4
    X86_AT(c, 0xbe53fu);
    push32(c, 0xbe544u); x86_call_known(c, 0xbbba4u, f_000bbba4); X86_RET(c, 0xbe544u);
    X86_TICK(c, 13);
    // 0be544  push 2
    X86_AT(c, 0xbe544u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0be546  push 2
    X86_AT(c, 0xbe546u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0be548  push 0xb
    X86_AT(c, 0xbe548u);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0be54a  call 0xbc174
    X86_AT(c, 0xbe54au);
    push32(c, 0xbe54fu); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xbe54fu);
    X86_TICK(c, 13);
    // 0be54f  add esp, 0x40
    X86_AT(c, 0xbe54fu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x40u, 0, 4); }
    // 0be552  push 0x23a4
    X86_AT(c, 0xbe552u);
    { uint32_t v = 0x23A4u; push32(c, v); }
    // 0be557  push 0xb
    X86_AT(c, 0xbe557u);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0be559  call 0xbbba4
    X86_AT(c, 0xbe559u);
    push32(c, 0xbe55eu); x86_call_known(c, 0xbbba4u, f_000bbba4); X86_RET(c, 0xbe55eu);
    X86_TICK(c, 9);
    // 0be55e  push 0xc
    X86_AT(c, 0xbe55eu);
    { uint32_t v = 0xCu; push32(c, v); }
    // 0be560  call 0xbb9e4
    X86_AT(c, 0xbe560u);
    push32(c, 0xbe565u); x86_call_known(c, 0xbb9e4u, f_000bb9e4); X86_RET(c, 0xbe565u);
    X86_TICK(c, 15);
    // 0be565  add esp, 0xc
    X86_AT(c, 0xbe565u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0be568  push 0
    X86_AT(c, 0xbe568u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0be56a  push 0
    X86_AT(c, 0xbe56au);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0be56c  push 0xc
    X86_AT(c, 0xbe56cu);
    { uint32_t v = 0xCu; push32(c, v); }
    // 0be56e  call 0xbc174
    X86_AT(c, 0xbe56eu);
    push32(c, 0xbe573u); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xbe573u);
    X86_TICK(c, 11);
    // 0be573  push 0xa4c26
    X86_AT(c, 0xbe573u);
    { uint32_t v = 0xA4C26u; push32(c, v); }
    // 0be578  push 0xc
    X86_AT(c, 0xbe578u);
    { uint32_t v = 0xCu; push32(c, v); }
    // 0be57a  call 0xbbfe0
    X86_AT(c, 0xbe57au);
    push32(c, 0xbe57fu); x86_call_known(c, 0xbbfe0u, f_000bbfe0); X86_RET(c, 0xbe57fu);
    X86_TICK(c, 13);
    // 0be57f  push 1
    X86_AT(c, 0xbe57fu);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0be581  push 2
    X86_AT(c, 0xbe581u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0be583  push 0xc
    X86_AT(c, 0xbe583u);
    { uint32_t v = 0xCu; push32(c, v); }
    // 0be585  call 0xbc174
    X86_AT(c, 0xbe585u);
    push32(c, 0xbe58au); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xbe58au);
    X86_TICK(c, 11);
    // 0be58a  push 0x23b8
    X86_AT(c, 0xbe58au);
    { uint32_t v = 0x23B8u; push32(c, v); }
    // 0be58f  push 0xc
    X86_AT(c, 0xbe58fu);
    { uint32_t v = 0xCu; push32(c, v); }
    // 0be591  call 0xbbba4
    X86_AT(c, 0xbe591u);
    push32(c, 0xbe596u); x86_call_known(c, 0xbbba4u, f_000bbba4); X86_RET(c, 0xbe596u);
    X86_TICK(c, 13);
    // 0be596  push 2
    X86_AT(c, 0xbe596u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0be598  push 2
    X86_AT(c, 0xbe598u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0be59a  push 0xc
    X86_AT(c, 0xbe59au);
    { uint32_t v = 0xCu; push32(c, v); }
    // 0be59c  call 0xbc174
    X86_AT(c, 0xbe59cu);
    push32(c, 0xbe5a1u); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xbe5a1u);
    X86_TICK(c, 11);
    // 0be5a1  push 0x23cc
    X86_AT(c, 0xbe5a1u);
    { uint32_t v = 0x23CCu; push32(c, v); }
    // 0be5a6  push 0xc
    X86_AT(c, 0xbe5a6u);
    { uint32_t v = 0xCu; push32(c, v); }
    // 0be5a8  call 0xbbba4
    X86_AT(c, 0xbe5a8u);
    push32(c, 0xbe5adu); x86_call_known(c, 0xbbba4u, f_000bbba4); X86_RET(c, 0xbe5adu);
    X86_TICK(c, 11);
    // 0be5ad  add esp, 0x3c
    X86_AT(c, 0xbe5adu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x3Cu, 0, 4); }
    // 0be5b0  push 0xd
    X86_AT(c, 0xbe5b0u);
    { uint32_t v = 0xDu; push32(c, v); }
    // 0be5b2  call 0xbb9e4
    X86_AT(c, 0xbe5b2u);
    push32(c, 0xbe5b7u); x86_call_known(c, 0xbb9e4u, f_000bb9e4); X86_RET(c, 0xbe5b7u);
    X86_TICK(c, 13);
    // 0be5b7  push 0
    X86_AT(c, 0xbe5b7u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0be5b9  push 0
    X86_AT(c, 0xbe5b9u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0be5bb  push 0xd
    X86_AT(c, 0xbe5bbu);
    { uint32_t v = 0xDu; push32(c, v); }
    // 0be5bd  call 0xbc174
    X86_AT(c, 0xbe5bdu);
    push32(c, 0xbe5c2u); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xbe5c2u);
    X86_TICK(c, 11);
    // 0be5c2  push 0xa4ce9
    X86_AT(c, 0xbe5c2u);
    { uint32_t v = 0xA4CE9u; push32(c, v); }
    // 0be5c7  push 0xd
    X86_AT(c, 0xbe5c7u);
    { uint32_t v = 0xDu; push32(c, v); }
    // 0be5c9  call 0xbbfe0
    X86_AT(c, 0xbe5c9u);
    push32(c, 0xbe5ceu); x86_call_known(c, 0xbbfe0u, f_000bbfe0); X86_RET(c, 0xbe5ceu);
    X86_TICK(c, 13);
    // 0be5ce  push 1
    X86_AT(c, 0xbe5ceu);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0be5d0  push 2
    X86_AT(c, 0xbe5d0u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0be5d2  push 0xd
    X86_AT(c, 0xbe5d2u);
    { uint32_t v = 0xDu; push32(c, v); }
    // 0be5d4  call 0xbc174
    X86_AT(c, 0xbe5d4u);
    push32(c, 0xbe5d9u); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xbe5d9u);
    X86_TICK(c, 11);
    // 0be5d9  push 0x23e0
    X86_AT(c, 0xbe5d9u);
    { uint32_t v = 0x23E0u; push32(c, v); }
    // 0be5de  push 0xd
    X86_AT(c, 0xbe5deu);
    { uint32_t v = 0xDu; push32(c, v); }
    // 0be5e0  call 0xbbba4
    X86_AT(c, 0xbe5e0u);
    push32(c, 0xbe5e5u); x86_call_known(c, 0xbbba4u, f_000bbba4); X86_RET(c, 0xbe5e5u);
    X86_TICK(c, 13);
    // 0be5e5  push 2
    X86_AT(c, 0xbe5e5u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0be5e7  push 2
    X86_AT(c, 0xbe5e7u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0be5e9  push 0xd
    X86_AT(c, 0xbe5e9u);
    { uint32_t v = 0xDu; push32(c, v); }
    // 0be5eb  call 0xbc174
    X86_AT(c, 0xbe5ebu);
    push32(c, 0xbe5f0u); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xbe5f0u);
    X86_TICK(c, 11);
    // 0be5f0  push 0x23f4
    X86_AT(c, 0xbe5f0u);
    { uint32_t v = 0x23F4u; push32(c, v); }
    // 0be5f5  push 0xd
    X86_AT(c, 0xbe5f5u);
    { uint32_t v = 0xDu; push32(c, v); }
    // 0be5f7  call 0xbbba4
    X86_AT(c, 0xbe5f7u);
    push32(c, 0xbe5fcu); x86_call_known(c, 0xbbba4u, f_000bbba4); X86_RET(c, 0xbe5fcu);
    X86_TICK(c, 6);
    // 0be5fc  add esp, 0x40
    X86_AT(c, 0xbe5fcu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x40u, 0, 4); }
    // 0be5ff  sub esi, esi
    X86_AT(c, 0xbe5ffu);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[6], 0, 4); }
    // 0be601  mov edi, esi
    X86_AT(c, 0xbe601u);
    c.r[7] = c.r[6];
L_be603:
    X86_TICK(c, 7);
    // 0be603  cmp edi, 4
    X86_AT(c, 0xbe603u);
    (void)x86_sub(c, c.r[7], 0x4u, 0, 4);
    // 0be606  jge 0xbe71b
    X86_AT(c, 0xbe606u);
    if (x86_cc(c, 13)) { goto L_be71b; }
    X86_TICK(c, 24);
    // 0be60c  lea eax, [edi + edi*2]
    X86_AT(c, 0xbe60cu);
    c.r[0] = (uint32_t)(c.r[7] + c.r[7] * 2);
    // 0be60f  lea edx, [eax*8]
    X86_AT(c, 0xbe60fu);
    c.r[2] = (uint32_t)(c.r[0] * 8);
    // 0be616  lea edx, [eax + edx*8]
    X86_AT(c, 0xbe616u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 8);
    // 0be619  movzx eax, byte ptr [edx + 0xa4acf]
    X86_AT(c, 0xbe619u);
    c.r[0] = rd8((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4ACFu)));
    // 0be620  xchg edx, eax
    X86_AT(c, 0xbe620u);
    { uint32_t t = c.r[2]; c.r[2] = c.r[0]; c.r[0] = t; }
    // 0be621  sub edx, 0x41
    X86_AT(c, 0xbe621u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, 0x41u, 0, 4); }
    // 0be624  cmp edx, 0x16
    X86_AT(c, 0xbe624u);
    (void)x86_sub(c, c.r[2], 0x16u, 0, 4);
    // 0be627  ja 0xbe6d9
    X86_AT(c, 0xbe627u);
    if (x86_cc(c, 7)) { goto L_be6d9; }
    X86_TICK(c, 7);
    // 0be62d  jmp dword ptr cs:[edx*4 + 0xbe635]
    X86_AT(c, 0xbe62du);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xBE635u)));
      switch (t) {
      case 0xbe691u: goto L_be691;
      case 0xbe695u: goto L_be695;
      case 0xbe69cu: goto L_be69c;
      case 0xbe6a3u: goto L_be6a3;
      case 0xbe6aau: goto L_be6aa;
      case 0xbe6b1u: goto L_be6b1;
      case 0xbe6b8u: goto L_be6b8;
      case 0xbe6bfu: goto L_be6bf;
      case 0xbe6c6u: goto L_be6c6;
      case 0xbe6cdu: goto L_be6cd;
      case 0xbe6d4u: goto L_be6d4;
      case 0xbe6d9u: goto L_be6d9;
      default: x86_jump(c, t); return; } }
L_be691:
    X86_TICK(c, 9);
    // 0be691  sub esi, esi
    X86_AT(c, 0xbe691u);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[6], 0, 4); }
    // 0be693  jmp 0xbe6d9
    X86_AT(c, 0xbe693u);
    goto L_be6d9;
L_be695:
    X86_TICK(c, 9);
    // 0be695  mov esi, 4
    X86_AT(c, 0xbe695u);
    c.r[6] = 0x4u;
    // 0be69a  jmp 0xbe6d9
    X86_AT(c, 0xbe69au);
    goto L_be6d9;
L_be69c:
    X86_TICK(c, 9);
    // 0be69c  mov esi, 8
    X86_AT(c, 0xbe69cu);
    c.r[6] = 0x8u;
    // 0be6a1  jmp 0xbe6d9
    X86_AT(c, 0xbe6a1u);
    goto L_be6d9;
L_be6a3:
    X86_TICK(c, 9);
    // 0be6a3  mov esi, 0xc
    X86_AT(c, 0xbe6a3u);
    c.r[6] = 0xCu;
    // 0be6a8  jmp 0xbe6d9
    X86_AT(c, 0xbe6a8u);
    goto L_be6d9;
L_be6aa:
    X86_TICK(c, 9);
    // 0be6aa  mov esi, 0x10
    X86_AT(c, 0xbe6aau);
    c.r[6] = 0x10u;
    // 0be6af  jmp 0xbe6d9
    X86_AT(c, 0xbe6afu);
    goto L_be6d9;
L_be6b1:
    X86_TICK(c, 9);
    // 0be6b1  mov esi, 0x18
    X86_AT(c, 0xbe6b1u);
    c.r[6] = 0x18u;
    // 0be6b6  jmp 0xbe6d9
    X86_AT(c, 0xbe6b6u);
    goto L_be6d9;
L_be6b8:
    X86_TICK(c, 9);
    // 0be6b8  mov esi, 0x14
    X86_AT(c, 0xbe6b8u);
    c.r[6] = 0x14u;
    // 0be6bd  jmp 0xbe6d9
    X86_AT(c, 0xbe6bdu);
    goto L_be6d9;
L_be6bf:
    X86_TICK(c, 9);
    // 0be6bf  mov esi, 0x20
    X86_AT(c, 0xbe6bfu);
    c.r[6] = 0x20u;
    // 0be6c4  jmp 0xbe6d9
    X86_AT(c, 0xbe6c4u);
    goto L_be6d9;
L_be6c6:
    X86_TICK(c, 9);
    // 0be6c6  mov esi, 0x1c
    X86_AT(c, 0xbe6c6u);
    c.r[6] = 0x1Cu;
    // 0be6cb  jmp 0xbe6d9
    X86_AT(c, 0xbe6cbu);
    goto L_be6d9;
L_be6cd:
    X86_TICK(c, 9);
    // 0be6cd  mov esi, 0x24
    X86_AT(c, 0xbe6cdu);
    c.r[6] = 0x24u;
    // 0be6d2  jmp 0xbe6d9
    X86_AT(c, 0xbe6d2u);
    goto L_be6d9;
L_be6d4:
    X86_TICK(c, 2);
    // 0be6d4  mov esi, 0x28
    X86_AT(c, 0xbe6d4u);
    c.r[6] = 0x28u;
L_be6d9:
    X86_TICK(c, 18);
    // 0be6d9  lea eax, [edi + edi*2]
    X86_AT(c, 0xbe6d9u);
    c.r[0] = (uint32_t)(c.r[7] + c.r[7] * 2);
    // 0be6dc  lea edx, [eax*8]
    X86_AT(c, 0xbe6dcu);
    c.r[2] = (uint32_t)(c.r[0] * 8);
    // 0be6e3  lea edx, [eax + edx*8]
    X86_AT(c, 0xbe6e3u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 8);
    // 0be6e6  cmp byte ptr [edx + 0xa4ad0], 0x46
    X86_AT(c, 0xbe6e6u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4AD0u))), 0x46u, 0, 1);
    // 0be6ed  jne 0xbe6f2
    X86_AT(c, 0xbe6edu);
    if (x86_cc(c, 5)) { goto L_be6f2; }
    X86_TICK(c, 2);
    // 0be6ef  add esi, 2
    X86_AT(c, 0xbe6efu);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x2u, 0, 4); }
L_be6f2:
    X86_TICK(c, 19);
    // 0be6f2  lea eax, [edi + edi*2]
    X86_AT(c, 0xbe6f2u);
    c.r[0] = (uint32_t)(c.r[7] + c.r[7] * 2);
    // 0be6f5  lea edx, [eax*8]
    X86_AT(c, 0xbe6f5u);
    c.r[2] = (uint32_t)(c.r[0] * 8);
    // 0be6fc  lea edx, [eax + edx*8]
    X86_AT(c, 0xbe6fcu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 8);
    // 0be6ff  mov dword ptr [edx + 0xa4aa9], esi
    X86_AT(c, 0xbe6ffu);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4AA9u)), c.r[6]);
    // 0be705  mov byte ptr [edi + 0xa491c], 0x20
    X86_AT(c, 0xbe705u);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0xA491Cu)), 0x20u);
    // 0be70c  push edi
    X86_AT(c, 0xbe70cu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0be70d  call 0xbe720
    X86_AT(c, 0xbe70du);
    push32(c, 0xbe712u); x86_call_known(c, 0xbe720u, f_000be720); X86_RET(c, 0xbe712u);
    X86_TICK(c, 11);
    // 0be712  inc edi
    X86_AT(c, 0xbe712u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0be713  add esp, 4
    X86_AT(c, 0xbe713u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0be716  jmp 0xbe603
    X86_AT(c, 0xbe716u);
    X86_POLL(c, 0xbe603u); goto L_be603;
L_be71b:
    X86_TICK(c, 18);
    // 0be71b  pop edi
    X86_AT(c, 0xbe71bu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0be71c  pop esi
    X86_AT(c, 0xbe71cu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0be71d  ret 
    X86_AT(c, 0xbe71du);
    c.eip = pop32(c); return;
    x86_fault(c, 0xbe4b0u, "ran off the end of a function");
}
void f_000be720(X86Cpu& c) {
    X86_TICK(c, 37);
    // 0be720  push ebp
    X86_AT(c, 0xbe720u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0be721  mov ebp, esp
    X86_AT(c, 0xbe721u);
    c.r[5] = c.r[4];
    // 0be723  sub esp, 0xc
    X86_AT(c, 0xbe723u);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, 0xCu, 0, 4); }
    // 0be726  push ebx
    X86_AT(c, 0xbe726u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0be727  push esi
    X86_AT(c, 0xbe727u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0be728  push edi
    X86_AT(c, 0xbe728u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0be729  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0xbe729u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0be72c  lea eax, [edi + 0xa]
    X86_AT(c, 0xbe72cu);
    c.r[0] = (uint32_t)(c.r[7] + 0xAu);
    // 0be72f  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0xbe72fu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
    // 0be732  lea eax, [edi + edi*2]
    X86_AT(c, 0xbe732u);
    c.r[0] = (uint32_t)(c.r[7] + c.r[7] * 2);
    // 0be735  lea edx, [eax*8]
    X86_AT(c, 0xbe735u);
    c.r[2] = (uint32_t)(c.r[0] * 8);
    // 0be73c  lea edx, [eax + edx*8]
    X86_AT(c, 0xbe73cu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 8);
    // 0be73f  mov al, byte ptr [edx + 0xa4abd]
    X86_AT(c, 0xbe73fu);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4ABDu))));
    // 0be745  cmp al, 0x44
    X86_AT(c, 0xbe745u);
    (void)x86_sub(c, g8(c, 0), 0x44u, 0, 1);
    // 0be747  je 0xbe74d
    X86_AT(c, 0xbe747u);
    if (x86_cc(c, 4)) { goto L_be74d; }
    X86_TICK(c, 7);
    // 0be749  cmp al, 0x41
    X86_AT(c, 0xbe749u);
    (void)x86_sub(c, g8(c, 0), 0x41u, 0, 1);
    // 0be74b  jne 0xbe751
    X86_AT(c, 0xbe74bu);
    if (x86_cc(c, 5)) { goto L_be751; }
L_be74d:
    X86_TICK(c, 9);
    // 0be74d  push 0xe
    X86_AT(c, 0xbe74du);
    { uint32_t v = 0xEu; push32(c, v); }
    // 0be74f  jmp 0xbe76d
    X86_AT(c, 0xbe74fu);
    goto L_be76d;
L_be751:
    X86_TICK(c, 18);
    // 0be751  lea eax, [edi + edi*2]
    X86_AT(c, 0xbe751u);
    c.r[0] = (uint32_t)(c.r[7] + c.r[7] * 2);
    // 0be754  lea edx, [eax*8]
    X86_AT(c, 0xbe754u);
    c.r[2] = (uint32_t)(c.r[0] * 8);
    // 0be75b  lea edx, [eax + edx*8]
    X86_AT(c, 0xbe75bu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 8);
    // 0be75e  cmp dword ptr [edx + 0xa4ad5], 0x32
    X86_AT(c, 0xbe75eu);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4AD5u))), 0x32u, 0, 4);
    // 0be765  jge 0xbe76b
    X86_AT(c, 0xbe765u);
    if (x86_cc(c, 13)) { goto L_be76b; }
    X86_TICK(c, 9);
    // 0be767  push 0xb
    X86_AT(c, 0xbe767u);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0be769  jmp 0xbe76d
    X86_AT(c, 0xbe769u);
    goto L_be76d;
L_be76b:
    X86_TICK(c, 2);
    // 0be76b  push 0xf
    X86_AT(c, 0xbe76bu);
    { uint32_t v = 0xFu; push32(c, v); }
L_be76d:
    X86_TICK(c, 12);
    // 0be76d  push dword ptr [ebp - 4]
    X86_AT(c, 0xbe76du);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))); push32(c, v); }
    // 0be770  call 0xbc3ec
    X86_AT(c, 0xbe770u);
    push32(c, 0xbe775u); x86_call_known(c, 0xbc3ecu, f_000bc3ec); X86_RET(c, 0xbe775u);
    X86_TICK(c, 14);
    // 0be775  add esp, 8
    X86_AT(c, 0xbe775u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0be778  push dword ptr [ebp - 4]
    X86_AT(c, 0xbe778u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))); push32(c, v); }
    // 0be77b  call 0xbb6b0
    X86_AT(c, 0xbe77bu);
    push32(c, 0xbe780u); x86_call_known(c, 0xbb6b0u, f_000bb6b0); X86_RET(c, 0xbe780u);
    X86_TICK(c, 16);
    // 0be780  push 1
    X86_AT(c, 0xbe780u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0be782  push 6
    X86_AT(c, 0xbe782u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0be784  push dword ptr [ebp - 4]
    X86_AT(c, 0xbe784u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))); push32(c, v); }
    // 0be787  call 0xbc174
    X86_AT(c, 0xbe787u);
    push32(c, 0xbe78cu); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xbe78cu);
    X86_TICK(c, 27);
    // 0be78c  push 4
    X86_AT(c, 0xbe78cu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0be78e  lea eax, [edi + edi*2]
    X86_AT(c, 0xbe78eu);
    c.r[0] = (uint32_t)(c.r[7] + c.r[7] * 2);
    // 0be791  lea edx, [eax*8]
    X86_AT(c, 0xbe791u);
    c.r[2] = (uint32_t)(c.r[0] * 8);
    // 0be798  lea edx, [eax + edx*8]
    X86_AT(c, 0xbe798u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 8);
    // 0be79b  push dword ptr [edx + 0xa4ad5]
    X86_AT(c, 0xbe79bu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4AD5u))); push32(c, v); }
    // 0be7a1  push dword ptr [ebp - 4]
    X86_AT(c, 0xbe7a1u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))); push32(c, v); }
    // 0be7a4  mov dword ptr [ebp - 0xc], edx
    X86_AT(c, 0xbe7a4u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)), c.r[2]);
    // 0be7a7  call 0xba404
    X86_AT(c, 0xbe7a7u);
    push32(c, 0xbe7acu); x86_call_known(c, 0xba404u, f_000ba404); X86_RET(c, 0xbe7acu);
    X86_TICK(c, 16);
    // 0be7ac  push 1
    X86_AT(c, 0xbe7acu);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0be7ae  push 0x14
    X86_AT(c, 0xbe7aeu);
    { uint32_t v = 0x14u; push32(c, v); }
    // 0be7b0  push dword ptr [ebp - 4]
    X86_AT(c, 0xbe7b0u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))); push32(c, v); }
    // 0be7b3  call 0xbc174
    X86_AT(c, 0xbe7b3u);
    push32(c, 0xbe7b8u); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xbe7b8u);
    X86_TICK(c, 23);
    // 0be7b8  push 2
    X86_AT(c, 0xbe7b8u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0be7ba  mov eax, dword ptr [ebp - 0xc]
    X86_AT(c, 0xbe7bau);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)));
    // 0be7bd  push dword ptr [eax + 0xa4ad1]
    X86_AT(c, 0xbe7bdu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0xA4AD1u))); push32(c, v); }
    // 0be7c3  push dword ptr [ebp - 4]
    X86_AT(c, 0xbe7c3u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))); push32(c, v); }
    // 0be7c6  call 0xba404
    X86_AT(c, 0xbe7c6u);
    push32(c, 0xbe7cbu); x86_call_known(c, 0xba404u, f_000ba404); X86_RET(c, 0xbe7cbu);
    X86_TICK(c, 16);
    // 0be7cb  push 2
    X86_AT(c, 0xbe7cbu);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0be7cd  push 6
    X86_AT(c, 0xbe7cdu);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0be7cf  push dword ptr [ebp - 4]
    X86_AT(c, 0xbe7cfu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))); push32(c, v); }
    // 0be7d2  call 0xbc174
    X86_AT(c, 0xbe7d2u);
    push32(c, 0xbe7d7u); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xbe7d7u);
    X86_TICK(c, 70);
    // 0be7d7  add esp, 0x40
    X86_AT(c, 0xbe7d7u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x40u, 0, 4); }
    // 0be7da  push 4
    X86_AT(c, 0xbe7dau);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0be7dc  mov eax, dword ptr [ebp - 0xc]
    X86_AT(c, 0xbe7dcu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)));
    // 0be7df  mov eax, dword ptr [eax + 0xa4ae5]
    X86_AT(c, 0xbe7dfu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0xA4AE5u)));
    // 0be7e5  cdq 
    X86_AT(c, 0xbe7e5u);
    c.r[2] = (c.r[0] & 0x80000000u) ? 0xFFFFFFFFu : 0u;
    // 0be7e6  mov ecx, 0x64
    X86_AT(c, 0xbe7e6u);
    c.r[1] = 0x64u;
    // 0be7eb  idiv ecx
    X86_AT(c, 0xbe7ebu);
    x86_idiv(c, c.r[1], 4, 0xbe7ebu);
    // 0be7ed  push eax
    X86_AT(c, 0xbe7edu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0be7ee  push dword ptr [ebp - 4]
    X86_AT(c, 0xbe7eeu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))); push32(c, v); }
    // 0be7f1  call 0xba404
    X86_AT(c, 0xbe7f1u);
    push32(c, 0xbe7f6u); x86_call_known(c, 0xba404u, f_000ba404); X86_RET(c, 0xbe7f6u);
    X86_TICK(c, 16);
    // 0be7f6  push 2
    X86_AT(c, 0xbe7f6u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0be7f8  push 0x14
    X86_AT(c, 0xbe7f8u);
    { uint32_t v = 0x14u; push32(c, v); }
    // 0be7fa  push dword ptr [ebp - 4]
    X86_AT(c, 0xbe7fau);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))); push32(c, v); }
    // 0be7fd  call 0xbc174
    X86_AT(c, 0xbe7fdu);
    push32(c, 0xbe802u); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xbe802u);
    X86_TICK(c, 19);
    // 0be802  push 2
    X86_AT(c, 0xbe802u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0be804  lea eax, [edi + edi*2]
    X86_AT(c, 0xbe804u);
    c.r[0] = (uint32_t)(c.r[7] + c.r[7] * 2);
    // 0be807  lea edx, [eax*8]
    X86_AT(c, 0xbe807u);
    c.r[2] = (uint32_t)(c.r[0] * 8);
    // 0be80e  lea edx, [eax + edx*8]
    X86_AT(c, 0xbe80eu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 8);
    // 0be811  mov eax, dword ptr [edx + 0xa4add]
    X86_AT(c, 0xbe811u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4ADDu)));
    // 0be817  cmp eax, 0x26ac
    X86_AT(c, 0xbe817u);
    (void)x86_sub(c, c.r[0], 0x26ACu, 0, 4);
    // 0be81c  jg 0xbe829
    X86_AT(c, 0xbe81cu);
    if (x86_cc(c, 15)) { goto L_be829; }
    X86_TICK(c, 53);
    // 0be81e  cdq 
    X86_AT(c, 0xbe81eu);
    c.r[2] = (c.r[0] & 0x80000000u) ? 0xFFFFFFFFu : 0u;
    // 0be81f  mov ecx, 0x64
    X86_AT(c, 0xbe81fu);
    c.r[1] = 0x64u;
    // 0be824  idiv ecx
    X86_AT(c, 0xbe824u);
    x86_idiv(c, c.r[1], 4, 0xbe824u);
    // 0be826  inc eax
    X86_AT(c, 0xbe826u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0be827  jmp 0xbe82e
    X86_AT(c, 0xbe827u);
    goto L_be82e;
L_be829:
    X86_TICK(c, 2);
    // 0be829  mov eax, 0x63
    X86_AT(c, 0xbe829u);
    c.r[0] = 0x63u;
L_be82e:
    X86_TICK(c, 14);
    // 0be82e  push eax
    X86_AT(c, 0xbe82eu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0be82f  push dword ptr [ebp - 4]
    X86_AT(c, 0xbe82fu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))); push32(c, v); }
    // 0be832  call 0xba404
    X86_AT(c, 0xbe832u);
    push32(c, 0xbe837u); x86_call_known(c, 0xba404u, f_000ba404); X86_RET(c, 0xbe837u);
    X86_TICK(c, 14);
    // 0be837  push 0xf
    X86_AT(c, 0xbe837u);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0be839  push dword ptr [ebp - 4]
    X86_AT(c, 0xbe839u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))); push32(c, v); }
    // 0be83c  call 0xbc3ec
    X86_AT(c, 0xbe83cu);
    push32(c, 0xbe841u); x86_call_known(c, 0xbc3ecu, f_000bc3ec); X86_RET(c, 0xbe841u);
    X86_TICK(c, 23);
    // 0be841  lea eax, [edi + edi*2]
    X86_AT(c, 0xbe841u);
    c.r[0] = (uint32_t)(c.r[7] + c.r[7] * 2);
    // 0be844  lea edx, [eax*8]
    X86_AT(c, 0xbe844u);
    c.r[2] = (uint32_t)(c.r[0] * 8);
    // 0be84b  lea edx, [eax + edx*8]
    X86_AT(c, 0xbe84bu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 8);
    // 0be84e  add esp, 0x2c
    X86_AT(c, 0xbe84eu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x2Cu, 0, 4); }
    // 0be851  mov al, byte ptr [edi + 0xa491c]
    X86_AT(c, 0xbe851u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0xA491Cu))));
    // 0be857  cmp al, byte ptr [edx + 0xa4abd]
    X86_AT(c, 0xbe857u);
    (void)x86_sub(c, g8(c, 0), rd8((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4ABDu))), 0, 1);
    // 0be85d  je 0xbe961
    X86_AT(c, 0xbe85du);
    if (x86_cc(c, 4)) { goto L_be961; }
    X86_TICK(c, 19);
    // 0be863  lea eax, [edi + edi*2]
    X86_AT(c, 0xbe863u);
    c.r[0] = (uint32_t)(c.r[7] + c.r[7] * 2);
    // 0be866  lea edx, [eax*8]
    X86_AT(c, 0xbe866u);
    c.r[2] = (uint32_t)(c.r[0] * 8);
    // 0be86d  lea edx, [eax + edx*8]
    X86_AT(c, 0xbe86du);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 8);
    // 0be870  mov al, byte ptr [edx + 0xa4abd]
    X86_AT(c, 0xbe870u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4ABDu))));
    // 0be876  mov byte ptr [edi + 0xa491c], al
    X86_AT(c, 0xbe876u);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0xA491Cu)), g8(c, 0));
    // 0be87c  cmp al, 0x41
    X86_AT(c, 0xbe87cu);
    (void)x86_sub(c, g8(c, 0), 0x41u, 0, 1);
    // 0be87e  jne 0xbe884
    X86_AT(c, 0xbe87eu);
    if (x86_cc(c, 5)) { goto L_be884; }
    X86_TICK(c, 9);
    // 0be880  push 0x37
    X86_AT(c, 0xbe880u);
    { uint32_t v = 0x37u; push32(c, v); }
    // 0be882  jmp 0xbe89c
    X86_AT(c, 0xbe882u);
    goto L_be89c;
L_be884:
    X86_TICK(c, 18);
    // 0be884  lea eax, [edi + edi*2]
    X86_AT(c, 0xbe884u);
    c.r[0] = (uint32_t)(c.r[7] + c.r[7] * 2);
    // 0be887  lea edx, [eax*8]
    X86_AT(c, 0xbe887u);
    c.r[2] = (uint32_t)(c.r[0] * 8);
    // 0be88e  lea edx, [eax + edx*8]
    X86_AT(c, 0xbe88eu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 8);
    // 0be891  cmp byte ptr [edx + 0xa4abd], 0x44
    X86_AT(c, 0xbe891u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4ABDu))), 0x44u, 0, 1);
    // 0be898  jne 0xbe8bc
    X86_AT(c, 0xbe898u);
    if (x86_cc(c, 5)) { goto L_be8bc; }
    X86_TICK(c, 2);
    // 0be89a  push 0x1f
    X86_AT(c, 0xbe89au);
    { uint32_t v = 0x1Fu; push32(c, v); }
L_be89c:
    X86_TICK(c, 20);
    // 0be89c  mov eax, edi
    X86_AT(c, 0xbe89cu);
    c.r[0] = c.r[7];
    // 0be89e  shl eax, 6
    X86_AT(c, 0xbe89eu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x6u, 4, w); if (w) c.r[0] = r; }
    // 0be8a1  add eax, 0x3f
    X86_AT(c, 0xbe8a1u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0x3Fu, 0, 4); }
    // 0be8a4  push eax
    X86_AT(c, 0xbe8a4u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0be8a5  push 0x244
    X86_AT(c, 0xbe8a5u);
    { uint32_t v = 0x244u; push32(c, v); }
    // 0be8aa  push 0x5eda8
    X86_AT(c, 0xbe8aau);
    { uint32_t v = 0x5EDA8u; push32(c, v); }
    // 0be8af  call 0xbb078
    X86_AT(c, 0xbe8afu);
    push32(c, 0xbe8b4u); x86_call_known(c, 0xbb078u, f_000bb078); X86_RET(c, 0xbe8b4u);
    X86_TICK(c, 9);
    // 0be8b4  add esp, 0x10
    X86_AT(c, 0xbe8b4u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0be8b7  jmp 0xbe961
    X86_AT(c, 0xbe8b7u);
    goto L_be961;
L_be8bc:
    X86_TICK(c, 23);
    // 0be8bc  lea eax, [edi + edi*2]
    X86_AT(c, 0xbe8bcu);
    c.r[0] = (uint32_t)(c.r[7] + c.r[7] * 2);
    // 0be8bf  lea edx, [eax*8]
    X86_AT(c, 0xbe8bfu);
    c.r[2] = (uint32_t)(c.r[0] * 8);
    // 0be8c6  lea edx, [eax + edx*8]
    X86_AT(c, 0xbe8c6u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 8);
    // 0be8c9  mov eax, dword ptr [edx + 0xa4aa9]
    X86_AT(c, 0xbe8c9u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4AA9u)));
    // 0be8cf  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0xbe8cfu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
    // 0be8d2  push 0
    X86_AT(c, 0xbe8d2u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0be8d4  mov dword ptr [ebp - 0xc], edx
    X86_AT(c, 0xbe8d4u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)), c.r[2]);
    // 0be8d7  call 0xba68c
    X86_AT(c, 0xbe8d7u);
    push32(c, 0xbe8dcu); x86_call_known(c, 0xba68cu, f_000ba68c); X86_RET(c, 0xbe8dcu);
    X86_TICK(c, 18);
    // 0be8dc  add esp, 4
    X86_AT(c, 0xbe8dcu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0be8df  mov eax, dword ptr [ebp - 0xc]
    X86_AT(c, 0xbe8dfu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)));
    // 0be8e2  cmp byte ptr [eax + 0xa4abd], 0x50
    X86_AT(c, 0xbe8e2u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[0] + 0xA4ABDu))), 0x50u, 0, 1);
    // 0be8e9  jne 0xbe936
    X86_AT(c, 0xbe8e9u);
    if (x86_cc(c, 5)) { goto L_be936; }
    X86_TICK(c, 15);
    // 0be8eb  mov ebx, 0x9c71c
    X86_AT(c, 0xbe8ebu);
    c.r[3] = 0x9C71Cu;
    // 0be8f0  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0xbe8f0u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0be8f3  shl eax, 9
    X86_AT(c, 0xbe8f3u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x9u, 4, w); if (w) c.r[0] = r; }
    // 0be8f6  add eax, 0x4eda8
    X86_AT(c, 0xbe8f6u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0x4EDA8u, 0, 4); }
    // 0be8fb  mov dword ptr [ebp - 8], eax
    X86_AT(c, 0xbe8fbu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), c.r[0]);
    // 0be8fe  sub esi, esi
    X86_AT(c, 0xbe8feu);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[6], 0, 4); }
L_be900:
    X86_TICK(c, 7);
    // 0be900  cmp esi, 0x80
    X86_AT(c, 0xbe900u);
    (void)x86_sub(c, c.r[6], 0x80u, 0, 4);
    // 0be906  jge 0xbe91f
    X86_AT(c, 0xbe906u);
    if (x86_cc(c, 13)) { goto L_be91f; }
    X86_TICK(c, 30);
    // 0be908  mov eax, dword ptr [ebp - 8]
    X86_AT(c, 0xbe908u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)));
    // 0be90b  mov edx, dword ptr [eax]
    X86_AT(c, 0xbe90bu);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[0])));
    // 0be90d  and edx, 0xeeeeeeee
    X86_AT(c, 0xbe90du);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & 0xEEEEEEEEu, 4); }
    // 0be913  mov dword ptr [ebx], edx
    X86_AT(c, 0xbe913u);
    wr32((c.sbase[3] + (uint32_t)(c.r[3])), c.r[2]);
    // 0be915  inc esi
    X86_AT(c, 0xbe915u);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 0be916  add ebx, 4
    X86_AT(c, 0xbe916u);
    { uint32_t v = c.r[3]; c.r[3] = x86_add(c, v, 0x4u, 0, 4); }
    // 0be919  add dword ptr [ebp - 8], 4
    X86_AT(c, 0xbe919u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0x4u, 0, 4)); }
    // 0be91d  jmp 0xbe900
    X86_AT(c, 0xbe91du);
    X86_POLL(c, 0xbe900u); goto L_be900;
L_be91f:
    X86_TICK(c, 22);
    // 0be91f  push 0
    X86_AT(c, 0xbe91fu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0be921  mov eax, edi
    X86_AT(c, 0xbe921u);
    c.r[0] = c.r[7];
    // 0be923  shl eax, 6
    X86_AT(c, 0xbe923u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x6u, 4, w); if (w) c.r[0] = r; }
    // 0be926  add eax, 0x3f
    X86_AT(c, 0xbe926u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0x3Fu, 0, 4); }
    // 0be929  push eax
    X86_AT(c, 0xbe929u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0be92a  push 0x245
    X86_AT(c, 0xbe92au);
    { uint32_t v = 0x245u; push32(c, v); }
    // 0be92f  push 0x9c71c
    X86_AT(c, 0xbe92fu);
    { uint32_t v = 0x9C71Cu; push32(c, v); }
    // 0be934  jmp 0xbe94c
    X86_AT(c, 0xbe934u);
    goto L_be94c;
L_be936:
    X86_TICK(c, 18);
    // 0be936  push dword ptr [ebp - 4]
    X86_AT(c, 0xbe936u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))); push32(c, v); }
    // 0be939  mov eax, edi
    X86_AT(c, 0xbe939u);
    c.r[0] = c.r[7];
    // 0be93b  shl eax, 6
    X86_AT(c, 0xbe93bu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x6u, 4, w); if (w) c.r[0] = r; }
    // 0be93e  add eax, 0x3f
    X86_AT(c, 0xbe93eu);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0x3Fu, 0, 4); }
    // 0be941  push eax
    X86_AT(c, 0xbe941u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0be942  push 0x244
    X86_AT(c, 0xbe942u);
    { uint32_t v = 0x244u; push32(c, v); }
    // 0be947  push 0x4eda8
    X86_AT(c, 0xbe947u);
    { uint32_t v = 0x4EDA8u; push32(c, v); }
L_be94c:
    X86_TICK(c, 7);
    // 0be94c  call 0xbb078
    X86_AT(c, 0xbe94cu);
    push32(c, 0xbe951u); x86_call_known(c, 0xbb078u, f_000bb078); X86_RET(c, 0xbe951u);
    X86_TICK(c, 15);
    // 0be951  movsx eax, word ptr [0x46204]
    X86_AT(c, 0xbe951u);
    c.r[0] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[3] + (uint32_t)(0x46204u)));
    // 0be958  push eax
    X86_AT(c, 0xbe958u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0be959  call 0xba68c
    X86_AT(c, 0xbe959u);
    push32(c, 0xbe95eu); x86_call_known(c, 0xba68cu, f_000ba68c); X86_RET(c, 0xbe95eu);
    X86_TICK(c, 2);
    // 0be95e  add esp, 0x14
    X86_AT(c, 0xbe95eu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x14u, 0, 4); }
L_be961:
    X86_TICK(c, 28);
    // 0be961  pop edi
    X86_AT(c, 0xbe961u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0be962  pop esi
    X86_AT(c, 0xbe962u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0be963  pop ebx
    X86_AT(c, 0xbe963u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0be964  leave 
    X86_AT(c, 0xbe964u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0be965  ret 
    X86_AT(c, 0xbe965u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xbe720u, "ran off the end of a function");
}
void f_000be968(X86Cpu& c) {
    X86_TICK(c, 27);
    // 0be968  push 0xa
    X86_AT(c, 0xbe968u);
    { uint32_t v = 0xAu; push32(c, v); }
    // 0be96a  push 0xf
    X86_AT(c, 0xbe96au);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0be96c  push 0xf
    X86_AT(c, 0xbe96cu);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0be96e  push 0
    X86_AT(c, 0xbe96eu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0be970  push 0x14
    X86_AT(c, 0xbe970u);
    { uint32_t v = 0x14u; push32(c, v); }
    // 0be972  push 0x14
    X86_AT(c, 0xbe972u);
    { uint32_t v = 0x14u; push32(c, v); }
    // 0be974  push 0xb4
    X86_AT(c, 0xbe974u);
    { uint32_t v = 0xB4u; push32(c, v); }
    // 0be979  push 0x191
    X86_AT(c, 0xbe979u);
    { uint32_t v = 0x191u; push32(c, v); }
    // 0be97e  push 0x5f
    X86_AT(c, 0xbe97eu);
    { uint32_t v = 0x5Fu; push32(c, v); }
    // 0be980  push 3
    X86_AT(c, 0xbe980u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0be982  call 0xbb5cc
    X86_AT(c, 0xbe982u);
    push32(c, 0xbe987u); x86_call_known(c, 0xbb5ccu, f_000bb5cc); X86_RET(c, 0xbe987u);
    X86_TICK(c, 9);
    // 0be987  push 3
    X86_AT(c, 0xbe987u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0be989  call 0xbb710
    X86_AT(c, 0xbe989u);
    push32(c, 0xbe98eu); x86_call_known(c, 0xbb710u, f_000bb710); X86_RET(c, 0xbe98eu);
    X86_TICK(c, 12);
    // 0be98e  add esp, 0x2c
    X86_AT(c, 0xbe98eu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x2Cu, 0, 4); }
    // 0be991  ret 
    X86_AT(c, 0xbe991u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xbe968u, "ran off the end of a function");
}
void f_000be994(X86Cpu& c) {
    X86_TICK(c, 27);
    // 0be994  push 9
    X86_AT(c, 0xbe994u);
    { uint32_t v = 0x9u; push32(c, v); }
    // 0be996  push 0xe
    X86_AT(c, 0xbe996u);
    { uint32_t v = 0xEu; push32(c, v); }
    // 0be998  push 0xb
    X86_AT(c, 0xbe998u);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0be99a  push 0
    X86_AT(c, 0xbe99au);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0be99c  push 7
    X86_AT(c, 0xbe99cu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0be99e  push 0x14
    X86_AT(c, 0xbe99eu);
    { uint32_t v = 0x14u; push32(c, v); }
    // 0be9a0  push 0x44
    X86_AT(c, 0xbe9a0u);
    { uint32_t v = 0x44u; push32(c, v); }
    // 0be9a2  push 0x19
    X86_AT(c, 0xbe9a2u);
    { uint32_t v = 0x19u; push32(c, v); }
    // 0be9a4  push 0x98
    X86_AT(c, 0xbe9a4u);
    { uint32_t v = 0x98u; push32(c, v); }
    // 0be9a9  push 8
    X86_AT(c, 0xbe9a9u);
    { uint32_t v = 0x8u; push32(c, v); }
    // 0be9ab  call 0xbb5cc
    X86_AT(c, 0xbe9abu);
    push32(c, 0xbe9b0u); x86_call_known(c, 0xbb5ccu, f_000bb5cc); X86_RET(c, 0xbe9b0u);
    X86_TICK(c, 9);
    // 0be9b0  push 8
    X86_AT(c, 0xbe9b0u);
    { uint32_t v = 0x8u; push32(c, v); }
    // 0be9b2  call 0xbb710
    X86_AT(c, 0xbe9b2u);
    push32(c, 0xbe9b7u); x86_call_known(c, 0xbb710u, f_000bb710); X86_RET(c, 0xbe9b7u);
    X86_TICK(c, 9);
    // 0be9b7  push 8
    X86_AT(c, 0xbe9b7u);
    { uint32_t v = 0x8u; push32(c, v); }
    // 0be9b9  call 0xbb6b0
    X86_AT(c, 0xbe9b9u);
    push32(c, 0xbe9beu); x86_call_known(c, 0xbb6b0u, f_000bb6b0); X86_RET(c, 0xbe9beu);
    X86_TICK(c, 7);
    // 0be9be  call 0xd42e0
    X86_AT(c, 0xbe9beu);
    push32(c, 0xbe9c3u); x86_call_known(c, 0xd42e0u, f_000d42e0); X86_RET(c, 0xbe9c3u);
    X86_TICK(c, 12);
    // 0be9c3  add esp, 0x30
    X86_AT(c, 0xbe9c3u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x30u, 0, 4); }
    // 0be9c6  ret 
    X86_AT(c, 0xbe9c6u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xbe994u, "ran off the end of a function");
}
void f_000be9c8(X86Cpu& c) {
    X86_TICK(c, 13);
    // 0be9c8  push ebp
    X86_AT(c, 0xbe9c8u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0be9c9  mov ebp, esp
    X86_AT(c, 0xbe9c9u);
    c.r[5] = c.r[4];
    // 0be9cb  push 3
    X86_AT(c, 0xbe9cbu);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0be9cd  call 0xbb6b0
    X86_AT(c, 0xbe9cdu);
    push32(c, 0xbe9d2u); x86_call_known(c, 0xbb6b0u, f_000bb6b0); X86_RET(c, 0xbe9d2u);
    X86_TICK(c, 14);
    // 0be9d2  push dword ptr [ebp + 8]
    X86_AT(c, 0xbe9d2u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, v); }
    // 0be9d5  push 3
    X86_AT(c, 0xbe9d5u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0be9d7  call 0xba428
    X86_AT(c, 0xbe9d7u);
    push32(c, 0xbe9dcu); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xbe9dcu);
    X86_TICK(c, 16);
    // 0be9dc  leave 
    X86_AT(c, 0xbe9dcu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0be9dd  ret 
    X86_AT(c, 0xbe9ddu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xbe9c8u, "ran off the end of a function");
}
void f_000be9e0(X86Cpu& c) {
    X86_TICK(c, 12);
    // 0be9e0  cmp dword ptr [0xa6134], 0
    X86_AT(c, 0xbe9e0u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xA6134u))), 0x0u, 0, 4);
    // 0be9e7  jne 0xbea0b
    X86_AT(c, 0xbe9e7u);
    if (x86_cc(c, 5)) { goto L_bea0b; }
    X86_TICK(c, 16);
    // 0be9e9  mov eax, 0xa4aa0
    X86_AT(c, 0xbe9e9u);
    c.r[0] = 0xA4AA0u;
    // 0be9ee  inc eax
    X86_AT(c, 0xbe9eeu);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0be9ef  cmp byte ptr [eax - 1], 0x54
    X86_AT(c, 0xbe9efu);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[0] + 0xFFFFFFFFu))), 0x54u, 0, 1);
    // 0be9f3  jne 0xbea0b
    X86_AT(c, 0xbe9f3u);
    if (x86_cc(c, 5)) { goto L_bea0b; }
    X86_TICK(c, 14);
    // 0be9f5  inc eax
    X86_AT(c, 0xbe9f5u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0be9f6  cmp byte ptr [eax - 1], 0x4f
    X86_AT(c, 0xbe9f6u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[0] + 0xFFFFFFFFu))), 0x4Fu, 0, 1);
    // 0be9fa  jne 0xbea0b
    X86_AT(c, 0xbe9fau);
    if (x86_cc(c, 5)) { goto L_bea0b; }
    X86_TICK(c, 12);
    // 0be9fc  cmp byte ptr [eax], 0x59
    X86_AT(c, 0xbe9fcu);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[0]))), 0x59u, 0, 1);
    // 0be9ff  jne 0xbea0b
    X86_AT(c, 0xbe9ffu);
    if (x86_cc(c, 5)) { goto L_bea0b; }
    X86_TICK(c, 2);
    // 0bea01  mov dword ptr [0xa6134], 2
    X86_AT(c, 0xbea01u);
    wr32((c.sbase[3] + (uint32_t)(0xA6134u)), 0x2u);
L_bea0b:
    X86_TICK(c, 10);
    // 0bea0b  ret 
    X86_AT(c, 0xbea0bu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xbe9e0u, "ran off the end of a function");
}
void f_000bea0c(X86Cpu& c) {
    X86_TICK(c, 17);
    // 0bea0c  push ebp
    X86_AT(c, 0xbea0cu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0bea0d  mov ebp, esp
    X86_AT(c, 0xbea0du);
    c.r[5] = c.r[4];
    // 0bea0f  push eax
    X86_AT(c, 0xbea0fu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0bea10  mov dword ptr [ebp - 4], 0
    X86_AT(c, 0xbea10u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), 0x0u);
    // 0bea17  mov dword ptr [0xa4920], 0xffffffff
    X86_AT(c, 0xbea17u);
    wr32((c.sbase[3] + (uint32_t)(0xA4920u)), 0xFFFFFFFFu);
    // 0bea21  call 0xb51a8
    X86_AT(c, 0xbea21u);
    push32(c, 0xbea26u); x86_call_known(c, 0xb51a8u, f_000b51a8); X86_RET(c, 0xbea26u);
    X86_TICK(c, 9);
    // 0bea26  push 0x2408
    X86_AT(c, 0xbea26u);
    { uint32_t v = 0x2408u; push32(c, v); }
    // 0bea2b  call 0xbd018
    X86_AT(c, 0xbea2bu);
    push32(c, 0xbea30u); x86_call_known(c, 0xbd018u, f_000bd018); X86_RET(c, 0xbea30u);
    X86_TICK(c, 7);
    // 0bea30  call 0xc0cf4
    X86_AT(c, 0xbea30u);
    push32(c, 0xbea35u); x86_call_known(c, 0xc0cf4u, f_000c0cf4); X86_RET(c, 0xbea35u);
    X86_TICK(c, 11);
    // 0bea35  mov byte ptr [0x8bcf2], 8
    X86_AT(c, 0xbea35u);
    wr8((c.sbase[3] + (uint32_t)(0x8BCF2u)), 0x8u);
    // 0bea3c  push 3
    X86_AT(c, 0xbea3cu);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0bea3e  call 0xba6b4
    X86_AT(c, 0xbea3eu);
    push32(c, 0xbea43u); x86_call_known(c, 0xba6b4u, f_000ba6b4); X86_RET(c, 0xbea43u);
    X86_TICK(c, 9);
    // 0bea43  push 1
    X86_AT(c, 0xbea43u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0bea45  call 0xba6a0
    X86_AT(c, 0xbea45u);
    push32(c, 0xbea4au); x86_call_known(c, 0xba6a0u, f_000ba6a0); X86_RET(c, 0xbea4au);
    X86_TICK(c, 9);
    // 0bea4a  push 0
    X86_AT(c, 0xbea4au);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0bea4c  call 0xbaa40
    X86_AT(c, 0xbea4cu);
    push32(c, 0xbea51u); x86_call_known(c, 0xbaa40u, f_000baa40); X86_RET(c, 0xbea51u);
    X86_TICK(c, 9);
    // 0bea51  push 0
    X86_AT(c, 0xbea51u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0bea53  call 0xba6a0
    X86_AT(c, 0xbea53u);
    push32(c, 0xbea58u); x86_call_known(c, 0xba6a0u, f_000ba6a0); X86_RET(c, 0xbea58u);
    X86_TICK(c, 9);
    // 0bea58  push 0xd
    X86_AT(c, 0xbea58u);
    { uint32_t v = 0xDu; push32(c, v); }
    // 0bea5a  call 0xbec48
    X86_AT(c, 0xbea5au);
    push32(c, 0xbea5fu); x86_call_known(c, 0xbec48u, f_000bec48); X86_RET(c, 0xbea5fu);
    X86_TICK(c, 7);
    // 0bea5f  call 0xbe194
    X86_AT(c, 0xbea5fu);
    push32(c, 0xbea64u); x86_call_known(c, 0xbe194u, f_000be194); X86_RET(c, 0xbea64u);
    X86_TICK(c, 7);
    // 0bea64  call 0xbe968
    X86_AT(c, 0xbea64u);
    push32(c, 0xbea69u); x86_call_known(c, 0xbe968u, f_000be968); X86_RET(c, 0xbea69u);
    X86_TICK(c, 7);
    // 0bea69  call 0xbe994
    X86_AT(c, 0xbea69u);
    push32(c, 0xbea6eu); x86_call_known(c, 0xbe994u, f_000be994); X86_RET(c, 0xbea6eu);
    X86_TICK(c, 9);
    // 0bea6e  push 2
    X86_AT(c, 0xbea6eu);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0bea70  call 0xba6b4
    X86_AT(c, 0xbea70u);
    push32(c, 0xbea75u); x86_call_known(c, 0xba6b4u, f_000ba6b4); X86_RET(c, 0xbea75u);
    X86_TICK(c, 7);
    // 0bea75  call 0xbe9e0
    X86_AT(c, 0xbea75u);
    push32(c, 0xbea7au); x86_call_known(c, 0xbe9e0u, f_000be9e0); X86_RET(c, 0xbea7au);
    X86_TICK(c, 9);
    // 0bea7a  push 0
    X86_AT(c, 0xbea7au);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0bea7c  call 0xb84e0
    X86_AT(c, 0xbea7cu);
    push32(c, 0xbea81u); x86_call_known(c, 0xb84e0u, f_000b84e0); X86_RET(c, 0xbea81u);
    X86_TICK(c, 7);
    // 0bea81  call 0xc5f10
    X86_AT(c, 0xbea81u);
    push32(c, 0xbea86u); x86_call_known(c, 0xc5f10u, f_000c5f10); X86_RET(c, 0xbea86u);
    X86_TICK(c, 7);
    // 0bea86  call 0xba14c
    X86_AT(c, 0xbea86u);
    push32(c, 0xbea8bu); x86_call_known(c, 0xba14cu, f_000ba14c); X86_RET(c, 0xbea8bu);
    X86_TICK(c, 7);
    // 0bea8b  call 0xba14c
    X86_AT(c, 0xbea8bu);
    push32(c, 0xbea90u); x86_call_known(c, 0xba14cu, f_000ba14c); X86_RET(c, 0xbea90u);
    X86_TICK(c, 9);
    // 0bea90  push 0x45664
    X86_AT(c, 0xbea90u);
    { uint32_t v = 0x45664u; push32(c, v); }
    // 0bea95  call 0xbd8a4
    X86_AT(c, 0xbea95u);
    push32(c, 0xbea9au); x86_call_known(c, 0xbd8a4u, f_000bd8a4); X86_RET(c, 0xbea9au);
    X86_TICK(c, 7);
    // 0bea9a  call 0xb75c0
    X86_AT(c, 0xbea9au);
    push32(c, 0xbea9fu); x86_call_known(c, 0xb75c0u, f_000b75c0); X86_RET(c, 0xbea9fu);
    X86_TICK(c, 9);
    // 0bea9f  push 0
    X86_AT(c, 0xbea9fu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0beaa1  call 0xbe720
    X86_AT(c, 0xbeaa1u);
    push32(c, 0xbeaa6u); x86_call_known(c, 0xbe720u, f_000be720); X86_RET(c, 0xbeaa6u);
    X86_TICK(c, 9);
    // 0beaa6  push 1
    X86_AT(c, 0xbeaa6u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0beaa8  call 0xbe720
    X86_AT(c, 0xbeaa8u);
    push32(c, 0xbeaadu); x86_call_known(c, 0xbe720u, f_000be720); X86_RET(c, 0xbeaadu);
    X86_TICK(c, 9);
    // 0beaad  push 2
    X86_AT(c, 0xbeaadu);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0beaaf  call 0xbe720
    X86_AT(c, 0xbeaafu);
    push32(c, 0xbeab4u); x86_call_known(c, 0xbe720u, f_000be720); X86_RET(c, 0xbeab4u);
    X86_TICK(c, 11);
    // 0beab4  add esp, 0x30
    X86_AT(c, 0xbeab4u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x30u, 0, 4); }
    // 0beab7  push 3
    X86_AT(c, 0xbeab7u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0beab9  call 0xbe720
    X86_AT(c, 0xbeab9u);
    push32(c, 0xbeabeu); x86_call_known(c, 0xbe720u, f_000be720); X86_RET(c, 0xbeabeu);
    X86_TICK(c, 7);
    // 0beabe  call 0xbe4b0
    X86_AT(c, 0xbeabeu);
    push32(c, 0xbeac3u); x86_call_known(c, 0xbe4b0u, f_000be4b0); X86_RET(c, 0xbeac3u);
    X86_TICK(c, 7);
    // 0beac3  call 0xb8d28
    X86_AT(c, 0xbeac3u);
    push32(c, 0xbeac8u); x86_call_known(c, 0xb8d28u, f_000b8d28); X86_RET(c, 0xbeac8u);
    X86_TICK(c, 9);
    // 0beac8  push 1
    X86_AT(c, 0xbeac8u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0beaca  call 0xb61d4
    X86_AT(c, 0xbeacau);
    push32(c, 0xbeacfu); x86_call_known(c, 0xb61d4u, f_000b61d4); X86_RET(c, 0xbeacfu);
    X86_TICK(c, 7);
    // 0beacf  call 0xb62d0
    X86_AT(c, 0xbeacfu);
    push32(c, 0xbead4u); x86_call_known(c, 0xb62d0u, f_000b62d0); X86_RET(c, 0xbead4u);
    X86_TICK(c, 9);
    // 0bead4  push 2
    X86_AT(c, 0xbead4u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0bead6  call 0xbbb5c
    X86_AT(c, 0xbead6u);
    push32(c, 0xbeadbu); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xbeadbu);
    X86_TICK(c, 9);
    // 0beadb  push 7
    X86_AT(c, 0xbeadbu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0beadd  call 0xbc480
    X86_AT(c, 0xbeaddu);
    push32(c, 0xbeae2u); x86_call_known(c, 0xbc480u, f_000bc480); X86_RET(c, 0xbeae2u);
    X86_TICK(c, 4);
    // 0beae2  mov word ptr [0x45660], 0
    X86_AT(c, 0xbeae2u);
    wr16((c.sbase[3] + (uint32_t)(0x45660u)), 0x0u);
    // 0beaeb  add esp, 0x10
    X86_AT(c, 0xbeaebu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
L_beaee:
    X86_TICK(c, 7);
    // 0beaee  call 0xd1d40
    X86_AT(c, 0xbeaeeu);
    push32(c, 0xbeaf3u); x86_call_known(c, 0xd1d40u, f_000d1d40); X86_RET(c, 0xbeaf3u);
    X86_TICK(c, 12);
    // 0beaf3  cmp dword ptr [0xa4920], 0
    X86_AT(c, 0xbeaf3u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xA4920u))), 0x0u, 0, 4);
    // 0beafa  jne 0xbeaee
    X86_AT(c, 0xbeafau);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xbeaeeu); goto L_beaee; }
    X86_TICK(c, 9);
    // 0beafc  mov word ptr [0x9c544], 0xffff
    X86_AT(c, 0xbeafcu);
    wr16((c.sbase[3] + (uint32_t)(0x9C544u)), 0xFFFFu);
    // 0beb05  call 0xb5aac
    X86_AT(c, 0xbeb05u);
    push32(c, 0xbeb0au); x86_call_known(c, 0xb5aacu, f_000b5aac); X86_RET(c, 0xbeb0au);
    X86_TICK(c, 7);
    // 0beb0a  call 0xb8d84
    X86_AT(c, 0xbeb0au);
    push32(c, 0xbeb0fu); x86_call_known(c, 0xb8d84u, f_000b8d84); X86_RET(c, 0xbeb0fu);
    X86_TICK(c, 7);
    // 0beb0f  call 0xbd5d0
    X86_AT(c, 0xbeb0fu);
    push32(c, 0xbeb14u); x86_call_known(c, 0xbd5d0u, f_000bd5d0); X86_RET(c, 0xbeb14u);
    X86_TICK(c, 11);
    // 0beb14  push 0xd
    X86_AT(c, 0xbeb14u);
    { uint32_t v = 0xDu; push32(c, v); }
    // 0beb16  push 8
    X86_AT(c, 0xbeb16u);
    { uint32_t v = 0x8u; push32(c, v); }
    // 0beb18  call 0xbba64
    X86_AT(c, 0xbeb18u);
    push32(c, 0xbeb1du); x86_call_known(c, 0xbba64u, f_000bba64); X86_RET(c, 0xbeb1du);
    X86_TICK(c, 9);
    // 0beb1d  push 0xf
    X86_AT(c, 0xbeb1du);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0beb1f  call 0xbebbc
    X86_AT(c, 0xbeb1fu);
    push32(c, 0xbeb24u); x86_call_known(c, 0xbebbcu, f_000bebbc); X86_RET(c, 0xbeb24u);
    X86_TICK(c, 11);
    // 0beb24  push 0xd
    X86_AT(c, 0xbeb24u);
    { uint32_t v = 0xDu; push32(c, v); }
    // 0beb26  push 3
    X86_AT(c, 0xbeb26u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0beb28  call 0xbba64
    X86_AT(c, 0xbeb28u);
    push32(c, 0xbeb2du); x86_call_known(c, 0xbba64u, f_000bba64); X86_RET(c, 0xbeb2du);
    X86_TICK(c, 9);
    // 0beb2d  push 0xf
    X86_AT(c, 0xbeb2du);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0beb2f  call 0xbebbc
    X86_AT(c, 0xbeb2fu);
    push32(c, 0xbeb34u); x86_call_known(c, 0xbebbcu, f_000bebbc); X86_RET(c, 0xbeb34u);
    X86_TICK(c, 11);
    // 0beb34  push 0xd
    X86_AT(c, 0xbeb34u);
    { uint32_t v = 0xDu; push32(c, v); }
    // 0beb36  push 0xa
    X86_AT(c, 0xbeb36u);
    { uint32_t v = 0xAu; push32(c, v); }
    // 0beb38  call 0xbba64
    X86_AT(c, 0xbeb38u);
    push32(c, 0xbeb3du); x86_call_known(c, 0xbba64u, f_000bba64); X86_RET(c, 0xbeb3du);
    X86_TICK(c, 9);
    // 0beb3d  push 0xf
    X86_AT(c, 0xbeb3du);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0beb3f  call 0xbebbc
    X86_AT(c, 0xbeb3fu);
    push32(c, 0xbeb44u); x86_call_known(c, 0xbebbcu, f_000bebbc); X86_RET(c, 0xbeb44u);
    X86_TICK(c, 11);
    // 0beb44  push 0xd
    X86_AT(c, 0xbeb44u);
    { uint32_t v = 0xDu; push32(c, v); }
    // 0beb46  push 0xb
    X86_AT(c, 0xbeb46u);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0beb48  call 0xbba64
    X86_AT(c, 0xbeb48u);
    push32(c, 0xbeb4du); x86_call_known(c, 0xbba64u, f_000bba64); X86_RET(c, 0xbeb4du);
    X86_TICK(c, 9);
    // 0beb4d  push 0xf
    X86_AT(c, 0xbeb4du);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0beb4f  call 0xbebbc
    X86_AT(c, 0xbeb4fu);
    push32(c, 0xbeb54u); x86_call_known(c, 0xbebbcu, f_000bebbc); X86_RET(c, 0xbeb54u);
    X86_TICK(c, 11);
    // 0beb54  push 0xd
    X86_AT(c, 0xbeb54u);
    { uint32_t v = 0xDu; push32(c, v); }
    // 0beb56  push 0xc
    X86_AT(c, 0xbeb56u);
    { uint32_t v = 0xCu; push32(c, v); }
    // 0beb58  call 0xbba64
    X86_AT(c, 0xbeb58u);
    push32(c, 0xbeb5du); x86_call_known(c, 0xbba64u, f_000bba64); X86_RET(c, 0xbeb5du);
    X86_TICK(c, 9);
    // 0beb5d  push 0xf
    X86_AT(c, 0xbeb5du);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0beb5f  call 0xbebbc
    X86_AT(c, 0xbeb5fu);
    push32(c, 0xbeb64u); x86_call_known(c, 0xbebbcu, f_000bebbc); X86_RET(c, 0xbeb64u);
    X86_TICK(c, 13);
    // 0beb64  add esp, 0x3c
    X86_AT(c, 0xbeb64u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x3Cu, 0, 4); }
    // 0beb67  push 0xd
    X86_AT(c, 0xbeb67u);
    { uint32_t v = 0xDu; push32(c, v); }
    // 0beb69  push 0xd
    X86_AT(c, 0xbeb69u);
    { uint32_t v = 0xDu; push32(c, v); }
    // 0beb6b  call 0xbba64
    X86_AT(c, 0xbeb6bu);
    push32(c, 0xbeb70u); x86_call_known(c, 0xbba64u, f_000bba64); X86_RET(c, 0xbeb70u);
    X86_TICK(c, 9);
    // 0beb70  push 0xf
    X86_AT(c, 0xbeb70u);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0beb72  call 0xbebbc
    X86_AT(c, 0xbeb72u);
    push32(c, 0xbeb77u); x86_call_known(c, 0xbebbcu, f_000bebbc); X86_RET(c, 0xbeb77u);
    X86_TICK(c, 11);
    // 0beb77  push 0xd
    X86_AT(c, 0xbeb77u);
    { uint32_t v = 0xDu; push32(c, v); }
    // 0beb79  push 7
    X86_AT(c, 0xbeb79u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0beb7b  call 0xbba64
    X86_AT(c, 0xbeb7bu);
    push32(c, 0xbeb80u); x86_call_known(c, 0xbba64u, f_000bba64); X86_RET(c, 0xbeb80u);
    X86_TICK(c, 9);
    // 0beb80  push 0xf
    X86_AT(c, 0xbeb80u);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0beb82  call 0xbebbc
    X86_AT(c, 0xbeb82u);
    push32(c, 0xbeb87u); x86_call_known(c, 0xbebbcu, f_000bebbc); X86_RET(c, 0xbeb87u);
    X86_TICK(c, 7);
    // 0beb87  call 0xb8d28
    X86_AT(c, 0xbeb87u);
    push32(c, 0xbeb8cu); x86_call_known(c, 0xb8d28u, f_000b8d28); X86_RET(c, 0xbeb8cu);
    X86_TICK(c, 9);
    // 0beb8c  push 3
    X86_AT(c, 0xbeb8cu);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0beb8e  call 0xba6b4
    X86_AT(c, 0xbeb8eu);
    push32(c, 0xbeb93u); x86_call_known(c, 0xba6b4u, f_000ba6b4); X86_RET(c, 0xbeb93u);
    X86_TICK(c, 11);
    // 0beb93  add esp, 0x1c
    X86_AT(c, 0xbeb93u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x1Cu, 0, 4); }
    // 0beb96  push 0
    X86_AT(c, 0xbeb96u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0beb98  call 0xba6a0
    X86_AT(c, 0xbeb98u);
    push32(c, 0xbeb9du); x86_call_known(c, 0xba6a0u, f_000ba6a0); X86_RET(c, 0xbeb9du);
    X86_TICK(c, 9);
    // 0beb9d  push 0
    X86_AT(c, 0xbeb9du);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0beb9f  call 0xbec48
    X86_AT(c, 0xbeb9fu);
    push32(c, 0xbeba4u); x86_call_known(c, 0xbec48u, f_000bec48); X86_RET(c, 0xbeba4u);
    X86_TICK(c, 9);
    // 0beba4  push 2
    X86_AT(c, 0xbeba4u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0beba6  call 0xba6b4
    X86_AT(c, 0xbeba6u);
    push32(c, 0xbebabu); x86_call_known(c, 0xba6b4u, f_000ba6b4); X86_RET(c, 0xbebabu);
    X86_TICK(c, 20);
    // 0bebab  mov word ptr [0x45660], 0xffff
    X86_AT(c, 0xbebabu);
    wr16((c.sbase[3] + (uint32_t)(0x45660u)), 0xFFFFu);
    // 0bebb4  add esp, 0xc
    X86_AT(c, 0xbebb4u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0bebb7  leave 
    X86_AT(c, 0xbebb7u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0bebb8  ret 
    X86_AT(c, 0xbebb8u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xbea0cu, "ran off the end of a function");
}
void f_000bebbc(X86Cpu& c) {
    X86_TICK(c, 12);
    // 0bebbc  push ebp
    X86_AT(c, 0xbebbcu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0bebbd  mov ebp, esp
    X86_AT(c, 0xbebbdu);
    c.r[5] = c.r[4];
    // 0bebbf  push edi
    X86_AT(c, 0xbebbfu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0bebc0  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0xbebc0u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0bebc3  sub ecx, ecx
    X86_AT(c, 0xbebc3u);
    { uint32_t v = c.r[1]; c.r[1] = x86_sub(c, v, c.r[1], 0, 4); }
L_bebc5:
    X86_TICK(c, 24);
    // 0bebc5  mov eax, edi
    X86_AT(c, 0xbebc5u);
    c.r[0] = c.r[7];
    // 0bebc7  lea edx, [eax + eax*4]
    X86_AT(c, 0xbebc7u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0bebca  shl edx, 3
    X86_AT(c, 0xbebcau);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x3u, 4, w); if (w) c.r[2] = r; }
    // 0bebcd  sub edx, eax
    X86_AT(c, 0xbebcdu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0bebcf  shl edx, 4
    X86_AT(c, 0xbebcfu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[2] = r; }
    // 0bebd2  add edx, eax
    X86_AT(c, 0xbebd2u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0bebd4  shl edx, 3
    X86_AT(c, 0xbebd4u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x3u, 4, w); if (w) c.r[2] = r; }
    // 0bebd7  cmp edx, ecx
    X86_AT(c, 0xbebd7u);
    (void)x86_sub(c, c.r[2], c.r[1], 0, 4);
    // 0bebd9  jle 0xbebde
    X86_AT(c, 0xbebd9u);
    if (x86_cc(c, 14)) { goto L_bebde; }
    X86_TICK(c, 9);
    // 0bebdb  inc ecx
    X86_AT(c, 0xbebdbu);
    { uint32_t v = c.r[1]; c.r[1] = x86_inc(c, v, 4); }
    // 0bebdc  jmp 0xbebc5
    X86_AT(c, 0xbebdcu);
    X86_POLL(c, 0xbebc5u); goto L_bebc5;
L_bebde:
    X86_TICK(c, 20);
    // 0bebde  pop edi
    X86_AT(c, 0xbebdeu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0bebdf  leave 
    X86_AT(c, 0xbebdfu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0bebe0  ret 
    X86_AT(c, 0xbebe0u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xbebbcu, "ran off the end of a function");
}
void f_000bebe4(X86Cpu& c) {
    X86_TICK(c, 23);
    // 0bebe4  push ebp
    X86_AT(c, 0xbebe4u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0bebe5  mov ebp, esp
    X86_AT(c, 0xbebe5u);
    c.r[5] = c.r[4];
    // 0bebe7  push edi
    X86_AT(c, 0xbebe7u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0bebe8  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0xbebe8u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0bebeb  push 0
    X86_AT(c, 0xbebebu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0bebed  push 0
    X86_AT(c, 0xbebedu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0bebef  push 0x241c
    X86_AT(c, 0xbebefu);
    { uint32_t v = 0x241Cu; push32(c, v); }
    // 0bebf4  call 0xbb2c4
    X86_AT(c, 0xbebf4u);
    push32(c, 0xbebf9u); x86_call_known(c, 0xbb2c4u, f_000bb2c4); X86_RET(c, 0xbebf9u);
    X86_TICK(c, 9);
    // 0bebf9  push 0xe
    X86_AT(c, 0xbebf9u);
    { uint32_t v = 0xEu; push32(c, v); }
    // 0bebfb  call 0xba51c
    X86_AT(c, 0xbebfbu);
    push32(c, 0xbec00u); x86_call_known(c, 0xba51cu, f_000ba51c); X86_RET(c, 0xbec00u);
    X86_TICK(c, 9);
    // 0bec00  push 0xb
    X86_AT(c, 0xbec00u);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0bec02  call 0xba534
    X86_AT(c, 0xbec02u);
    push32(c, 0xbec07u); x86_call_known(c, 0xba534u, f_000ba534); X86_RET(c, 0xbec07u);
    X86_TICK(c, 9);
    // 0bec07  push 1
    X86_AT(c, 0xbec07u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0bec09  call 0xba5e4
    X86_AT(c, 0xbec09u);
    push32(c, 0xbec0eu); x86_call_known(c, 0xba5e4u, f_000ba5e4); X86_RET(c, 0xbec0eu);
    X86_TICK(c, 24);
    // 0bec0e  push edi
    X86_AT(c, 0xbec0eu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0bec0f  push 0x13
    X86_AT(c, 0xbec0fu);
    { uint32_t v = 0x13u; push32(c, v); }
    // 0bec11  mov edx, 0xffffffff
    X86_AT(c, 0xbec11u);
    c.r[2] = 0xFFFFFFFFu;
    // 0bec16  sub eax, eax
    X86_AT(c, 0xbec16u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0bec18  push edi
    X86_AT(c, 0xbec18u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0bec19  mov ecx, edx
    X86_AT(c, 0xbec19u);
    c.r[1] = c.r[2];
    // 0bec1b  scasb al, byte ptr es:[edi]
    X86_AT(c, 0xbec1bu);
    x86_string(c, 4, 1, 242, 4, 3);
    // 0bec1d  jne 0xbec22
    X86_AT(c, 0xbec1du);
    if (x86_cc(c, 5)) { goto L_bec22; }
    X86_TICK(c, 4);
    // 0bec1f  inc ecx
    X86_AT(c, 0xbec1fu);
    { uint32_t v = c.r[1]; c.r[1] = x86_inc(c, v, 4); }
    // 0bec20  sub edx, ecx
    X86_AT(c, 0xbec20u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[1], 0, 4); }
L_bec22:
    X86_TICK(c, 27);
    // 0bec22  pop edi
    X86_AT(c, 0xbec22u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0bec23  shl edx, 3
    X86_AT(c, 0xbec23u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x3u, 4, w); if (w) c.r[2] = r; }
    // 0bec26  mov eax, 0x280
    X86_AT(c, 0xbec26u);
    c.r[0] = 0x280u;
    // 0bec2b  sub eax, edx
    X86_AT(c, 0xbec2bu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[2], 0, 4); }
    // 0bec2d  cdq 
    X86_AT(c, 0xbec2du);
    c.r[2] = (c.r[0] & 0x80000000u) ? 0xFFFFFFFFu : 0u;
    // 0bec2e  sub eax, edx
    X86_AT(c, 0xbec2eu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[2], 0, 4); }
    // 0bec30  sar eax, 1
    X86_AT(c, 0xbec30u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 7, v, 0x1u, 4, w); if (w) c.r[0] = r; }
    // 0bec32  push eax
    X86_AT(c, 0xbec32u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0bec33  call 0xbb97c
    X86_AT(c, 0xbec33u);
    push32(c, 0xbec38u); x86_call_known(c, 0xbb97cu, f_000bb97c); X86_RET(c, 0xbec38u);
    X86_TICK(c, 9);
    // 0bec38  push 0
    X86_AT(c, 0xbec38u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0bec3a  call 0xba5e4
    X86_AT(c, 0xbec3au);
    push32(c, 0xbec3fu); x86_call_known(c, 0xba5e4u, f_000ba5e4); X86_RET(c, 0xbec3fu);
    X86_TICK(c, 22);
    // 0bec3f  add esp, 0x28
    X86_AT(c, 0xbec3fu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x28u, 0, 4); }
    // 0bec42  pop edi
    X86_AT(c, 0xbec42u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0bec43  leave 
    X86_AT(c, 0xbec43u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0bec44  ret 
    X86_AT(c, 0xbec44u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xbebe4u, "ran off the end of a function");
}
void f_000bec48(X86Cpu& c) {
    X86_TICK(c, 24);
    // 0bec48  push ebp
    X86_AT(c, 0xbec48u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0bec49  mov ebp, esp
    X86_AT(c, 0xbec49u);
    c.r[5] = c.r[4];
    // 0bec4b  push dword ptr [ebp + 8]
    X86_AT(c, 0xbec4bu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, v); }
    // 0bec4e  push 0x190
    X86_AT(c, 0xbec4eu);
    { uint32_t v = 0x190u; push32(c, v); }
    // 0bec53  push 0x280
    X86_AT(c, 0xbec53u);
    { uint32_t v = 0x280u; push32(c, v); }
    // 0bec58  push 0x18
    X86_AT(c, 0xbec58u);
    { uint32_t v = 0x18u; push32(c, v); }
    // 0bec5a  push 0
    X86_AT(c, 0xbec5au);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0bec5c  call 0xbac90
    X86_AT(c, 0xbec5cu);
    push32(c, 0xbec61u); x86_call_known(c, 0xbac90u, f_000bac90); X86_RET(c, 0xbec61u);
    X86_TICK(c, 16);
    // 0bec61  leave 
    X86_AT(c, 0xbec61u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0bec62  ret 
    X86_AT(c, 0xbec62u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xbec48u, "ran off the end of a function");
}
void f_000bec64(X86Cpu& c) {
    X86_TICK(c, 11);
    // 0bec64  push ebp
    X86_AT(c, 0xbec64u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0bec65  mov ebp, esp
    X86_AT(c, 0xbec65u);
    c.r[5] = c.r[4];
    // 0bec67  call 0xba964
    X86_AT(c, 0xbec67u);
    push32(c, 0xbec6cu); x86_call_known(c, 0xba964u, f_000ba964); X86_RET(c, 0xbec6cu);
    X86_TICK(c, 7);
    // 0bec6c  call 0xb90c8
    X86_AT(c, 0xbec6cu);
    push32(c, 0xbec71u); x86_call_known(c, 0xb90c8u, f_000b90c8); X86_RET(c, 0xbec71u);
    X86_TICK(c, 9);
    // 0bec71  push 0
    X86_AT(c, 0xbec71u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0bec73  call 0xba868
    X86_AT(c, 0xbec73u);
    push32(c, 0xbec78u); x86_call_known(c, 0xba868u, f_000ba868); X86_RET(c, 0xbec78u);
    X86_TICK(c, 9);
    // 0bec78  push 1
    X86_AT(c, 0xbec78u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0bec7a  call 0xba868
    X86_AT(c, 0xbec7au);
    push32(c, 0xbec7fu); x86_call_known(c, 0xba868u, f_000ba868); X86_RET(c, 0xbec7fu);
    X86_TICK(c, 9);
    // 0bec7f  push 3
    X86_AT(c, 0xbec7fu);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0bec81  call 0xba6b4
    X86_AT(c, 0xbec81u);
    push32(c, 0xbec86u); x86_call_known(c, 0xba6b4u, f_000ba6b4); X86_RET(c, 0xbec86u);
    X86_TICK(c, 9);
    // 0bec86  push 1
    X86_AT(c, 0xbec86u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0bec88  call 0xba6a0
    X86_AT(c, 0xbec88u);
    push32(c, 0xbec8du); x86_call_known(c, 0xba6a0u, f_000ba6a0); X86_RET(c, 0xbec8du);
    X86_TICK(c, 7);
    // 0bec8d  call 0xba464
    X86_AT(c, 0xbec8du);
    push32(c, 0xbec92u); x86_call_known(c, 0xba464u, f_000ba464); X86_RET(c, 0xbec92u);
    X86_TICK(c, 9);
    // 0bec92  push 1
    X86_AT(c, 0xbec92u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0bec94  call 0xba810
    X86_AT(c, 0xbec94u);
    push32(c, 0xbec99u); x86_call_known(c, 0xba810u, f_000ba810); X86_RET(c, 0xbec99u);
    X86_TICK(c, 9);
    // 0bec99  push 0
    X86_AT(c, 0xbec99u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0bec9b  call 0xba6a0
    X86_AT(c, 0xbec9bu);
    push32(c, 0xbeca0u); x86_call_known(c, 0xba6a0u, f_000ba6a0); X86_RET(c, 0xbeca0u);
    X86_TICK(c, 7);
    // 0beca0  call 0xba464
    X86_AT(c, 0xbeca0u);
    push32(c, 0xbeca5u); x86_call_known(c, 0xba464u, f_000ba464); X86_RET(c, 0xbeca5u);
    X86_TICK(c, 9);
    // 0beca5  push 9
    X86_AT(c, 0xbeca5u);
    { uint32_t v = 0x9u; push32(c, v); }
    // 0beca7  call 0xbaa40
    X86_AT(c, 0xbeca7u);
    push32(c, 0xbecacu); x86_call_known(c, 0xbaa40u, f_000baa40); X86_RET(c, 0xbecacu);
    X86_TICK(c, 12);
    // 0becac  push dword ptr [ebp + 8]
    X86_AT(c, 0xbecacu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, v); }
    // 0becaf  call 0xbec48
    X86_AT(c, 0xbecafu);
    push32(c, 0xbecb4u); x86_call_known(c, 0xbec48u, f_000bec48); X86_RET(c, 0xbecb4u);
    X86_TICK(c, 9);
    // 0becb4  push 0x2430
    X86_AT(c, 0xbecb4u);
    { uint32_t v = 0x2430u; push32(c, v); }
    // 0becb9  call 0xbebe4
    X86_AT(c, 0xbecb9u);
    push32(c, 0xbecbeu); x86_call_known(c, 0xbebe4u, f_000bebe4); X86_RET(c, 0xbecbeu);
    X86_TICK(c, 7);
    // 0becbe  call 0xbc4d8
    X86_AT(c, 0xbecbeu);
    push32(c, 0xbecc3u); x86_call_known(c, 0xbc4d8u, f_000bc4d8); X86_RET(c, 0xbecc3u);
    X86_TICK(c, 7);
    // 0becc3  call 0xb6644
    X86_AT(c, 0xbecc3u);
    push32(c, 0xbecc8u); x86_call_known(c, 0xb6644u, f_000b6644); X86_RET(c, 0xbecc8u);
    X86_TICK(c, 9);
    // 0becc8  push 2
    X86_AT(c, 0xbecc8u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0becca  call 0xba6b4
    X86_AT(c, 0xbeccau);
    push32(c, 0xbeccfu); x86_call_known(c, 0xba6b4u, f_000ba6b4); X86_RET(c, 0xbeccfu);
    X86_TICK(c, 7);
    // 0beccf  call 0xb5e0c
    X86_AT(c, 0xbeccfu);
    push32(c, 0xbecd4u); x86_call_known(c, 0xb5e0cu, f_000b5e0c); X86_RET(c, 0xbecd4u);
    X86_TICK(c, 7);
    // 0becd4  call 0xb4b28
    X86_AT(c, 0xbecd4u);
    push32(c, 0xbecd9u); x86_call_known(c, 0xb4b28u, f_000b4b28); X86_RET(c, 0xbecd9u);
    X86_TICK(c, 7);
    // 0becd9  call 0xbe044
    X86_AT(c, 0xbecd9u);
    push32(c, 0xbecdeu); x86_call_known(c, 0xbe044u, f_000be044); X86_RET(c, 0xbecdeu);
    X86_TICK(c, 9);
    // 0becde  push 0xbc14c
    X86_AT(c, 0xbecdeu);
    { uint32_t v = 0xBC14Cu; push32(c, v); }
    // 0bece3  call 0xb618c
    X86_AT(c, 0xbece3u);
    push32(c, 0xbece8u); x86_call_known(c, 0xb618cu, f_000b618c); X86_RET(c, 0xbece8u);
    X86_TICK(c, 20);
    // 0bece8  sub eax, eax
    X86_AT(c, 0xbece8u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0becea  add esp, 0x2c
    X86_AT(c, 0xbeceau);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x2Cu, 0, 4); }
    // 0beced  leave 
    X86_AT(c, 0xbecedu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0becee  ret 
    X86_AT(c, 0xbeceeu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xbec64u, "ran off the end of a function");
}
void f_000becf0(X86Cpu& c) {
    X86_TICK(c, 9);
    // 0becf0  push 1
    X86_AT(c, 0xbecf0u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0becf2  call 0xba6a0
    X86_AT(c, 0xbecf2u);
    push32(c, 0xbecf7u); x86_call_known(c, 0xba6a0u, f_000ba6a0); X86_RET(c, 0xbecf7u);
    X86_TICK(c, 9);
    // 0becf7  push 0
    X86_AT(c, 0xbecf7u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0becf9  call 0xbaa40
    X86_AT(c, 0xbecf9u);
    push32(c, 0xbecfeu); x86_call_known(c, 0xbaa40u, f_000baa40); X86_RET(c, 0xbecfeu);
    X86_TICK(c, 9);
    // 0becfe  push 0
    X86_AT(c, 0xbecfeu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0bed00  call 0xba6a0
    X86_AT(c, 0xbed00u);
    push32(c, 0xbed05u); x86_call_known(c, 0xba6a0u, f_000ba6a0); X86_RET(c, 0xbed05u);
    X86_TICK(c, 9);
    // 0bed05  push 0
    X86_AT(c, 0xbed05u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0bed07  call 0xbaa40
    X86_AT(c, 0xbed07u);
    push32(c, 0xbed0cu); x86_call_known(c, 0xbaa40u, f_000baa40); X86_RET(c, 0xbed0cu);
    X86_TICK(c, 9);
    // 0bed0c  push 2
    X86_AT(c, 0xbed0cu);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0bed0e  call 0xba6b4
    X86_AT(c, 0xbed0eu);
    push32(c, 0xbed13u); x86_call_known(c, 0xba6b4u, f_000ba6b4); X86_RET(c, 0xbed13u);
    X86_TICK(c, 7);
    // 0bed13  call 0xb5aac
    X86_AT(c, 0xbed13u);
    push32(c, 0xbed18u); x86_call_known(c, 0xb5aacu, f_000b5aac); X86_RET(c, 0xbed18u);
    X86_TICK(c, 7);
    // 0bed18  call 0xb51a8
    X86_AT(c, 0xbed18u);
    push32(c, 0xbed1du); x86_call_known(c, 0xb51a8u, f_000b51a8); X86_RET(c, 0xbed1du);
    X86_TICK(c, 7);
    // 0bed1d  call 0xb61a4
    X86_AT(c, 0xbed1du);
    push32(c, 0xbed22u); x86_call_known(c, 0xb61a4u, f_000b61a4); X86_RET(c, 0xbed22u);
    X86_TICK(c, 7);
    // 0bed22  call 0xb5598
    X86_AT(c, 0xbed22u);
    push32(c, 0xbed27u); x86_call_known(c, 0xb5598u, f_000b5598); X86_RET(c, 0xbed27u);
    X86_TICK(c, 7);
    // 0bed27  call 0xb5e94
    X86_AT(c, 0xbed27u);
    push32(c, 0xbed2cu); x86_call_known(c, 0xb5e94u, f_000b5e94); X86_RET(c, 0xbed2cu);
    X86_TICK(c, 12);
    // 0bed2c  add esp, 0x14
    X86_AT(c, 0xbed2cu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x14u, 0, 4); }
    // 0bed2f  ret 
    X86_AT(c, 0xbed2fu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xbecf0u, "ran off the end of a function");
}
void f_000bed30(X86Cpu& c) {
    X86_TICK(c, 9);
    // 0bed30  push 0x5cc60
    X86_AT(c, 0xbed30u);
    { uint32_t v = 0x5CC60u; push32(c, v); }
    // 0bed35  call 0xd8814
    X86_AT(c, 0xbed35u);
    push32(c, 0xbed3au); x86_call_known(c, 0xd8814u, f_000d8814); X86_RET(c, 0xbed3au);
    X86_TICK(c, 11);
    // 0bed3a  add esp, 4
    X86_AT(c, 0xbed3au);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0bed3d  mov dword ptr [0xa6654], eax
    X86_AT(c, 0xbed3du);
    wr32((c.sbase[3] + (uint32_t)(0xA6654u)), c.r[0]);
    // 0bed42  and eax, eax
    X86_AT(c, 0xbed42u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0bed44  jne 0xbed53
    X86_AT(c, 0xbed44u);
    if (x86_cc(c, 5)) { goto L_bed53; }
    X86_TICK(c, 9);
    // 0bed46  push 0x2448
    X86_AT(c, 0xbed46u);
    { uint32_t v = 0x2448u; push32(c, v); }
    // 0bed4b  call 0xbc50c
    X86_AT(c, 0xbed4bu);
    push32(c, 0xbed50u); x86_call_known(c, 0xbc50cu, f_000bc50c); X86_RET(c, 0xbed50u);
    X86_TICK(c, 2);
    // 0bed50  add esp, 4
    X86_AT(c, 0xbed50u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
L_bed53:
    X86_TICK(c, 10);
    // 0bed53  ret 
    X86_AT(c, 0xbed53u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xbed30u, "ran off the end of a function");
}
void f_000bed54(X86Cpu& c) {
    X86_TICK(c, 35);
    // 0bed54  push ebp
    X86_AT(c, 0xbed54u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0bed55  mov ebp, esp
    X86_AT(c, 0xbed55u);
    c.r[5] = c.r[4];
    // 0bed57  sub esp, 0x48
    X86_AT(c, 0xbed57u);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, 0x48u, 0, 4); }
    // 0bed5a  push ebx
    X86_AT(c, 0xbed5au);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0bed5b  push esi
    X86_AT(c, 0xbed5bu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0bed5c  push edi
    X86_AT(c, 0xbed5cu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0bed5d  mov dword ptr [ebp - 0x40], 0
    X86_AT(c, 0xbed5du);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFC0u)), 0x0u);
    // 0bed64  mov dword ptr [ebp - 0xc], 0
    X86_AT(c, 0xbed64u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)), 0x0u);
    // 0bed6b  sub eax, eax
    X86_AT(c, 0xbed6bu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0bed6d  mov dword ptr [ebp - 8], eax
    X86_AT(c, 0xbed6du);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), c.r[0]);
    // 0bed70  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0xbed70u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
    // 0bed73  mov eax, 0xffffffff
    X86_AT(c, 0xbed73u);
    c.r[0] = 0xFFFFFFFFu;
    // 0bed78  mov dword ptr [0xa6658], eax
    X86_AT(c, 0xbed78u);
    wr32((c.sbase[3] + (uint32_t)(0xA6658u)), c.r[0]);
    // 0bed7d  push 0
    X86_AT(c, 0xbed7du);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0bed7f  call 0xba6b4
    X86_AT(c, 0xbed7fu);
    push32(c, 0xbed84u); x86_call_known(c, 0xba6b4u, f_000ba6b4); X86_RET(c, 0xbed84u);
    X86_TICK(c, 9);
    // 0bed84  push 1
    X86_AT(c, 0xbed84u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0bed86  call 0xba6a0
    X86_AT(c, 0xbed86u);
    push32(c, 0xbed8bu); x86_call_known(c, 0xba6a0u, f_000ba6a0); X86_RET(c, 0xbed8bu);
    X86_TICK(c, 9);
    // 0bed8b  push 0
    X86_AT(c, 0xbed8bu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0bed8d  call 0xbaa40
    X86_AT(c, 0xbed8du);
    push32(c, 0xbed92u); x86_call_known(c, 0xbaa40u, f_000baa40); X86_RET(c, 0xbed92u);
    X86_TICK(c, 29);
    // 0bed92  mov dword ptr [0xa6658], 0
    X86_AT(c, 0xbed92u);
    wr32((c.sbase[3] + (uint32_t)(0xA6658u)), 0x0u);
    // 0bed9c  push 0xa
    X86_AT(c, 0xbed9cu);
    { uint32_t v = 0xAu; push32(c, v); }
    // 0bed9e  push 0xb
    X86_AT(c, 0xbed9eu);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0beda0  push 0xf
    X86_AT(c, 0xbeda0u);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0beda2  push 0xc
    X86_AT(c, 0xbeda2u);
    { uint32_t v = 0xCu; push32(c, v); }
    // 0beda4  push 0x45
    X86_AT(c, 0xbeda4u);
    { uint32_t v = 0x45u; push32(c, v); }
    // 0beda6  push 0xe6
    X86_AT(c, 0xbeda6u);
    { uint32_t v = 0xE6u; push32(c, v); }
    // 0bedab  push 0x236
    X86_AT(c, 0xbedabu);
    { uint32_t v = 0x236u; push32(c, v); }
    // 0bedb0  push 0x83
    X86_AT(c, 0xbedb0u);
    { uint32_t v = 0x83u; push32(c, v); }
    // 0bedb5  push 0x5c
    X86_AT(c, 0xbedb5u);
    { uint32_t v = 0x5Cu; push32(c, v); }
    // 0bedb7  push 1
    X86_AT(c, 0xbedb7u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0bedb9  call 0xbb5cc
    X86_AT(c, 0xbedb9u);
    push32(c, 0xbedbeu); x86_call_known(c, 0xbb5ccu, f_000bb5cc); X86_RET(c, 0xbedbeu);
    X86_TICK(c, 9);
    // 0bedbe  push 1
    X86_AT(c, 0xbedbeu);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0bedc0  call 0xbb710
    X86_AT(c, 0xbedc0u);
    push32(c, 0xbedc5u); x86_call_known(c, 0xbb710u, f_000bb710); X86_RET(c, 0xbedc5u);
    X86_TICK(c, 11);
    // 0bedc5  push 0xd
    X86_AT(c, 0xbedc5u);
    { uint32_t v = 0xDu; push32(c, v); }
    // 0bedc7  push 1
    X86_AT(c, 0xbedc7u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0bedc9  call 0xbc3ec
    X86_AT(c, 0xbedc9u);
    push32(c, 0xbedceu); x86_call_known(c, 0xbc3ecu, f_000bc3ec); X86_RET(c, 0xbedceu);
    X86_TICK(c, 11);
    // 0bedce  add esp, 0x40
    X86_AT(c, 0xbedceu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x40u, 0, 4); }
    // 0bedd1  push 1
    X86_AT(c, 0xbedd1u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0bedd3  call 0xbb6b0
    X86_AT(c, 0xbedd3u);
    push32(c, 0xbedd8u); x86_call_known(c, 0xbb6b0u, f_000bb6b0); X86_RET(c, 0xbedd8u);
    X86_TICK(c, 13);
    // 0bedd8  push 1
    X86_AT(c, 0xbedd8u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0bedda  push 0x17
    X86_AT(c, 0xbeddau);
    { uint32_t v = 0x17u; push32(c, v); }
    // 0beddc  push 1
    X86_AT(c, 0xbeddcu);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0bedde  call 0xbc174
    X86_AT(c, 0xbeddeu);
    push32(c, 0xbede3u); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xbede3u);
    X86_TICK(c, 11);
    // 0bede3  push 0x248c
    X86_AT(c, 0xbede3u);
    { uint32_t v = 0x248Cu; push32(c, v); }
    // 0bede8  push 1
    X86_AT(c, 0xbede8u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0bedea  call 0xbbba4
    X86_AT(c, 0xbedeau);
    push32(c, 0xbedefu); x86_call_known(c, 0xbbba4u, f_000bbba4); X86_RET(c, 0xbedefu);
    X86_TICK(c, 15);
    // 0bedef  add esp, 0x18
    X86_AT(c, 0xbedefu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x18u, 0, 4); }
    // 0bedf2  push 3
    X86_AT(c, 0xbedf2u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0bedf4  push 0x17
    X86_AT(c, 0xbedf4u);
    { uint32_t v = 0x17u; push32(c, v); }
    // 0bedf6  push 1
    X86_AT(c, 0xbedf6u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0bedf8  call 0xbc174
    X86_AT(c, 0xbedf8u);
    push32(c, 0xbedfdu); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xbedfdu);
    X86_TICK(c, 11);
    // 0bedfd  push 0x24a4
    X86_AT(c, 0xbedfdu);
    { uint32_t v = 0x24A4u; push32(c, v); }
    // 0bee02  push 1
    X86_AT(c, 0xbee02u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0bee04  call 0xbbba4
    X86_AT(c, 0xbee04u);
    push32(c, 0xbee09u); x86_call_known(c, 0xbbba4u, f_000bbba4); X86_RET(c, 0xbee09u);
    X86_TICK(c, 11);
    // 0bee09  push 0xf
    X86_AT(c, 0xbee09u);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0bee0b  push 1
    X86_AT(c, 0xbee0bu);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0bee0d  call 0xbc3ec
    X86_AT(c, 0xbee0du);
    push32(c, 0xbee12u); x86_call_known(c, 0xbc3ecu, f_000bc3ec); X86_RET(c, 0xbee12u);
    X86_TICK(c, 9);
    // 0bee12  push 1
    X86_AT(c, 0xbee12u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0bee14  call 0xbb6b0
    X86_AT(c, 0xbee14u);
    push32(c, 0xbee19u); x86_call_known(c, 0xbb6b0u, f_000bb6b0); X86_RET(c, 0xbee19u);
    X86_TICK(c, 13);
    // 0bee19  push 2
    X86_AT(c, 0xbee19u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0bee1b  push 0x18
    X86_AT(c, 0xbee1bu);
    { uint32_t v = 0x18u; push32(c, v); }
    // 0bee1d  push 1
    X86_AT(c, 0xbee1du);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0bee1f  call 0xbc174
    X86_AT(c, 0xbee1fu);
    push32(c, 0xbee24u); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xbee24u);
    X86_TICK(c, 11);
    // 0bee24  push 0xa6450
    X86_AT(c, 0xbee24u);
    { uint32_t v = 0xA6450u; push32(c, v); }
    // 0bee29  push 1
    X86_AT(c, 0xbee29u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0bee2b  call 0xba428
    X86_AT(c, 0xbee2bu);
    push32(c, 0xbee30u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xbee30u);
    X86_TICK(c, 13);
    // 0bee30  push 5
    X86_AT(c, 0xbee30u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0bee32  push 3
    X86_AT(c, 0xbee32u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0bee34  push 1
    X86_AT(c, 0xbee34u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0bee36  call 0xbc174
    X86_AT(c, 0xbee36u);
    push32(c, 0xbee3bu); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xbee3bu);
    X86_TICK(c, 13);
    // 0bee3b  add esp, 0x40
    X86_AT(c, 0xbee3bu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x40u, 0, 4); }
    // 0bee3e  push 0xa6478
    X86_AT(c, 0xbee3eu);
    { uint32_t v = 0xA6478u; push32(c, v); }
    // 0bee43  push 1
    X86_AT(c, 0xbee43u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0bee45  call 0xbbba4
    X86_AT(c, 0xbee45u);
    push32(c, 0xbee4au); x86_call_known(c, 0xbbba4u, f_000bbba4); X86_RET(c, 0xbee4au);
    X86_TICK(c, 13);
    // 0bee4a  push 6
    X86_AT(c, 0xbee4au);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0bee4c  push 8
    X86_AT(c, 0xbee4cu);
    { uint32_t v = 0x8u; push32(c, v); }
    // 0bee4e  push 1
    X86_AT(c, 0xbee4eu);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0bee50  call 0xbc174
    X86_AT(c, 0xbee50u);
    push32(c, 0xbee55u); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xbee55u);
    X86_TICK(c, 11);
    // 0bee55  push 0xa64b8
    X86_AT(c, 0xbee55u);
    { uint32_t v = 0xA64B8u; push32(c, v); }
    // 0bee5a  push 1
    X86_AT(c, 0xbee5au);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0bee5c  call 0xbbba4
    X86_AT(c, 0xbee5cu);
    push32(c, 0xbee61u); x86_call_known(c, 0xbbba4u, f_000bbba4); X86_RET(c, 0xbee61u);
    X86_TICK(c, 13);
    // 0bee61  push 7
    X86_AT(c, 0xbee61u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0bee63  push 6
    X86_AT(c, 0xbee63u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0bee65  push 1
    X86_AT(c, 0xbee65u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0bee67  call 0xbc174
    X86_AT(c, 0xbee67u);
    push32(c, 0xbee6cu); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xbee6cu);
    X86_TICK(c, 11);
    // 0bee6c  push 0xa64ec
    X86_AT(c, 0xbee6cu);
    { uint32_t v = 0xA64ECu; push32(c, v); }
    // 0bee71  push 1
    X86_AT(c, 0xbee71u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0bee73  call 0xbbba4
    X86_AT(c, 0xbee73u);
    push32(c, 0xbee78u); x86_call_known(c, 0xbbba4u, f_000bbba4); X86_RET(c, 0xbee78u);
    X86_TICK(c, 13);
    // 0bee78  push 9
    X86_AT(c, 0xbee78u);
    { uint32_t v = 0x9u; push32(c, v); }
    // 0bee7a  push 0xe
    X86_AT(c, 0xbee7au);
    { uint32_t v = 0xEu; push32(c, v); }
    // 0bee7c  push 1
    X86_AT(c, 0xbee7cu);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0bee7e  call 0xbc174
    X86_AT(c, 0xbee7eu);
    push32(c, 0xbee83u); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xbee83u);
    X86_TICK(c, 13);
    // 0bee83  add esp, 0x3c
    X86_AT(c, 0xbee83u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x3Cu, 0, 4); }
    // 0bee86  push 0xa6528
    X86_AT(c, 0xbee86u);
    { uint32_t v = 0xA6528u; push32(c, v); }
    // 0bee8b  push 1
    X86_AT(c, 0xbee8bu);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0bee8d  call 0xba428
    X86_AT(c, 0xbee8du);
    push32(c, 0xbee92u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xbee92u);
    X86_TICK(c, 13);
    // 0bee92  push 0xb
    X86_AT(c, 0xbee92u);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0bee94  push 8
    X86_AT(c, 0xbee94u);
    { uint32_t v = 0x8u; push32(c, v); }
    // 0bee96  push 1
    X86_AT(c, 0xbee96u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0bee98  call 0xbc174
    X86_AT(c, 0xbee98u);
    push32(c, 0xbee9du); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xbee9du);
    X86_TICK(c, 11);
    // 0bee9d  push 0xa6578
    X86_AT(c, 0xbee9du);
    { uint32_t v = 0xA6578u; push32(c, v); }
    // 0beea2  push 1
    X86_AT(c, 0xbeea2u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0beea4  call 0xba428
    X86_AT(c, 0xbeea4u);
    push32(c, 0xbeea9u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xbeea9u);
    X86_TICK(c, 15);
    // 0beea9  add esp, 0x1c
    X86_AT(c, 0xbeea9u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x1Cu, 0, 4); }
    // 0beeac  push 0xc
    X86_AT(c, 0xbeeacu);
    { uint32_t v = 0xCu; push32(c, v); }
    // 0beeae  push 8
    X86_AT(c, 0xbeeaeu);
    { uint32_t v = 0x8u; push32(c, v); }
    // 0beeb0  push 1
    X86_AT(c, 0xbeeb0u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0beeb2  call 0xbc174
    X86_AT(c, 0xbeeb2u);
    push32(c, 0xbeeb7u); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xbeeb7u);
    X86_TICK(c, 11);
    // 0beeb7  push 0xa65e0
    X86_AT(c, 0xbeeb7u);
    { uint32_t v = 0xA65E0u; push32(c, v); }
    // 0beebc  push 1
    X86_AT(c, 0xbeebcu);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0beebe  call 0xba428
    X86_AT(c, 0xbeebeu);
    push32(c, 0xbeec3u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xbeec3u);
    X86_TICK(c, 9);
    // 0beec3  push 2
    X86_AT(c, 0xbeec3u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0beec5  call 0xba6b4
    X86_AT(c, 0xbeec5u);
    push32(c, 0xbeecau); x86_call_known(c, 0xba6b4u, f_000ba6b4); X86_RET(c, 0xbeecau);
    X86_TICK(c, 9);
    // 0beeca  push 0
    X86_AT(c, 0xbeecau);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0beecc  call 0xba6a0
    X86_AT(c, 0xbeeccu);
    push32(c, 0xbeed1u); x86_call_known(c, 0xba6a0u, f_000ba6a0); X86_RET(c, 0xbeed1u);
    X86_TICK(c, 10);
    // 0beed1  add esp, 0x1c
    X86_AT(c, 0xbeed1u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x1Cu, 0, 4); }
    // 0beed4  mov eax, dword ptr [0x460e4]
    X86_AT(c, 0xbeed4u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x460E4u)));
    // 0beed9  mov dword ptr [ebp - 0xc], eax
    X86_AT(c, 0xbeed9u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)), c.r[0]);
    // 0beedc  sub edi, edi
    X86_AT(c, 0xbeedcu);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
L_beede:
    X86_TICK(c, 7);
    // 0beede  cmp edi, 0x2710
    X86_AT(c, 0xbeedeu);
    (void)x86_sub(c, c.r[7], 0x2710u, 0, 4);
    // 0beee4  jge 0xbef03
    X86_AT(c, 0xbeee4u);
    if (x86_cc(c, 13)) { goto L_bef03; }
    X86_TICK(c, 9);
    // 0beee6  push 1
    X86_AT(c, 0xbeee6u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0beee8  call 0xb9930
    X86_AT(c, 0xbeee8u);
    push32(c, 0xbeeedu); x86_call_known(c, 0xb9930u, f_000b9930); X86_RET(c, 0xbeeedu);
    X86_TICK(c, 9);
    // 0beeed  add esp, 4
    X86_AT(c, 0xbeeedu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0beef0  and al, al
    X86_AT(c, 0xbeef0u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & g8(c, 0), 1)); }
    // 0beef2  je 0xbef00
    X86_AT(c, 0xbeef2u);
    if (x86_cc(c, 4)) { goto L_bef00; }
    X86_TICK(c, 9);
    // 0beef4  push 2
    X86_AT(c, 0xbeef4u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0beef6  call 0xbbb5c
    X86_AT(c, 0xbeef6u);
    push32(c, 0xbeefbu); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xbeefbu);
    X86_TICK(c, 7);
    // 0beefb  jmp 0xbf293
    X86_AT(c, 0xbeefbu);
    goto L_bf293;
L_bef00:
    X86_TICK(c, 9);
    // 0bef00  inc edi
    X86_AT(c, 0xbef00u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0bef01  jmp 0xbeede
    X86_AT(c, 0xbef01u);
    X86_POLL(c, 0xbeedeu); goto L_beede;
L_bef03:
    X86_TICK(c, 9);
    // 0bef03  push 2
    X86_AT(c, 0xbef03u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0bef05  call 0xbbb5c
    X86_AT(c, 0xbef05u);
    push32(c, 0xbef0au); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xbef0au);
    X86_TICK(c, 14);
    // 0bef0a  add esp, 4
    X86_AT(c, 0xbef0au);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0bef0d  cmp dword ptr [0xa6654], 0
    X86_AT(c, 0xbef0du);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xA6654u))), 0x0u, 0, 4);
    // 0bef14  je 0xbf395
    X86_AT(c, 0xbef14u);
    if (x86_cc(c, 4)) { goto L_bf395; }
    X86_TICK(c, 15);
    // 0bef1a  mov eax, dword ptr [0xa6654]
    X86_AT(c, 0xbef1au);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xA6654u)));
    // 0bef1f  mov dword ptr [ebp - 0x28], eax
    X86_AT(c, 0xbef1fu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFD8u)), c.r[0]);
    // 0bef22  push 0
    X86_AT(c, 0xbef22u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0bef24  call 0xba6b4
    X86_AT(c, 0xbef24u);
    push32(c, 0xbef29u); x86_call_known(c, 0xba6b4u, f_000ba6b4); X86_RET(c, 0xbef29u);
    X86_TICK(c, 9);
    // 0bef29  push 1
    X86_AT(c, 0xbef29u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0bef2b  call 0xba6a0
    X86_AT(c, 0xbef2bu);
    push32(c, 0xbef30u); x86_call_known(c, 0xba6a0u, f_000ba6a0); X86_RET(c, 0xbef30u);
    X86_TICK(c, 11);
    // 0bef30  push 0
    X86_AT(c, 0xbef30u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0bef32  push 1
    X86_AT(c, 0xbef32u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0bef34  call 0xbba64
    X86_AT(c, 0xbef34u);
    push32(c, 0xbef39u); x86_call_known(c, 0xbba64u, f_000bba64); X86_RET(c, 0xbef39u);
    X86_TICK(c, 9);
    // 0bef39  mov dword ptr [0xa6658], 0xffffffff
    X86_AT(c, 0xbef39u);
    wr32((c.sbase[3] + (uint32_t)(0xA6658u)), 0xFFFFFFFFu);
    // 0bef43  call 0xb51a8
    X86_AT(c, 0xbef43u);
    push32(c, 0xbef48u); x86_call_known(c, 0xb51a8u, f_000b51a8); X86_RET(c, 0xbef48u);
    X86_TICK(c, 15);
    // 0bef48  push 0x64
    X86_AT(c, 0xbef48u);
    { uint32_t v = 0x64u; push32(c, v); }
    // 0bef4a  push 0x19
    X86_AT(c, 0xbef4au);
    { uint32_t v = 0x19u; push32(c, v); }
    // 0bef4c  push 0
    X86_AT(c, 0xbef4cu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0bef4e  push 6
    X86_AT(c, 0xbef4eu);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0bef50  call 0xba4d4
    X86_AT(c, 0xbef50u);
    push32(c, 0xbef55u); x86_call_known(c, 0xba4d4u, f_000ba4d4); X86_RET(c, 0xbef55u);
    X86_TICK(c, 37);
    // 0bef55  mov eax, dword ptr [ebp - 0x28]
    X86_AT(c, 0xbef55u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFD8u)));
    // 0bef58  lea ecx, [eax + 0x10680]
    X86_AT(c, 0xbef58u);
    c.r[1] = (uint32_t)(c.r[0] + 0x10680u);
    // 0bef5e  mov dword ptr [ebp - 0x2c], ecx
    X86_AT(c, 0xbef5eu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFD4u)), c.r[1]);
    // 0bef61  lea edx, [ecx + 0x10680]
    X86_AT(c, 0xbef61u);
    c.r[2] = (uint32_t)(c.r[1] + 0x10680u);
    // 0bef67  mov dword ptr [ebp - 0x30], edx
    X86_AT(c, 0xbef67u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFD0u)), c.r[2]);
    // 0bef6a  lea eax, [edx + 0x4b00]
    X86_AT(c, 0xbef6au);
    c.r[0] = (uint32_t)(c.r[2] + 0x4B00u);
    // 0bef70  mov dword ptr [ebp - 0x34], eax
    X86_AT(c, 0xbef70u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFCCu)), c.r[0]);
    // 0bef73  add eax, 0x1900
    X86_AT(c, 0xbef73u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0x1900u, 0, 4); }
    // 0bef78  mov dword ptr [ebp - 0x38], eax
    X86_AT(c, 0xbef78u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFC8u)), c.r[0]);
    // 0bef7b  add eax, 0x1400
    X86_AT(c, 0xbef7bu);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0x1400u, 0, 4); }
    // 0bef80  mov dword ptr [ebp - 0x3c], eax
    X86_AT(c, 0xbef80u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFC4u)), c.r[0]);
    // 0bef83  push 0x4b
    X86_AT(c, 0xbef83u);
    { uint32_t v = 0x4Bu; push32(c, v); }
    // 0bef85  push 0x36
    X86_AT(c, 0xbef85u);
    { uint32_t v = 0x36u; push32(c, v); }
    // 0bef87  push 0x24bc
    X86_AT(c, 0xbef87u);
    { uint32_t v = 0x24BCu; push32(c, v); }
    // 0bef8c  call 0xbb2c4
    X86_AT(c, 0xbef8cu);
    push32(c, 0xbef91u); x86_call_known(c, 0xbb2c4u, f_000bb2c4); X86_RET(c, 0xbef91u);
    X86_TICK(c, 28);
    // 0bef91  lea eax, [ebp - 0xc]
    X86_AT(c, 0xbef91u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFF4u);
    // 0bef94  push eax
    X86_AT(c, 0xbef94u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0bef95  lea ecx, [ebp - 8]
    X86_AT(c, 0xbef95u);
    c.r[1] = (uint32_t)(c.r[5] + 0xFFFFFFF8u);
    // 0bef98  push ecx
    X86_AT(c, 0xbef98u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 0bef99  lea edx, [ebp - 4]
    X86_AT(c, 0xbef99u);
    c.r[2] = (uint32_t)(c.r[5] + 0xFFFFFFFCu);
    // 0bef9c  push edx
    X86_AT(c, 0xbef9cu);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0bef9d  push 0x10680
    X86_AT(c, 0xbef9du);
    { uint32_t v = 0x10680u; push32(c, v); }
    // 0befa2  push dword ptr [ebp - 0x28]
    X86_AT(c, 0xbefa2u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFD8u))); push32(c, v); }
    // 0befa5  push 0x24d0
    X86_AT(c, 0xbefa5u);
    { uint32_t v = 0x24D0u; push32(c, v); }
    // 0befaa  call 0xbb1f0
    X86_AT(c, 0xbefaau);
    push32(c, 0xbefafu); x86_call_known(c, 0xbb1f0u, f_000bb1f0); X86_RET(c, 0xbefafu);
    X86_TICK(c, 30);
    // 0befaf  add esp, 0x44
    X86_AT(c, 0xbefafu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x44u, 0, 4); }
    // 0befb2  lea eax, [ebp - 0xc]
    X86_AT(c, 0xbefb2u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFF4u);
    // 0befb5  push eax
    X86_AT(c, 0xbefb5u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0befb6  lea ecx, [ebp - 8]
    X86_AT(c, 0xbefb6u);
    c.r[1] = (uint32_t)(c.r[5] + 0xFFFFFFF8u);
    // 0befb9  push ecx
    X86_AT(c, 0xbefb9u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 0befba  lea edx, [ebp - 4]
    X86_AT(c, 0xbefbau);
    c.r[2] = (uint32_t)(c.r[5] + 0xFFFFFFFCu);
    // 0befbd  push edx
    X86_AT(c, 0xbefbdu);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0befbe  push 0x10680
    X86_AT(c, 0xbefbeu);
    { uint32_t v = 0x10680u; push32(c, v); }
    // 0befc3  push dword ptr [ebp - 0x2c]
    X86_AT(c, 0xbefc3u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFD4u))); push32(c, v); }
    // 0befc6  push 0x24e4
    X86_AT(c, 0xbefc6u);
    { uint32_t v = 0x24E4u; push32(c, v); }
    // 0befcb  call 0xbb1f0
    X86_AT(c, 0xbefcbu);
    push32(c, 0xbefd0u); x86_call_known(c, 0xbb1f0u, f_000bb1f0); X86_RET(c, 0xbefd0u);
    X86_TICK(c, 28);
    // 0befd0  lea eax, [ebp - 0xc]
    X86_AT(c, 0xbefd0u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFF4u);
    // 0befd3  push eax
    X86_AT(c, 0xbefd3u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0befd4  lea eax, [ebp - 8]
    X86_AT(c, 0xbefd4u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFF8u);
    // 0befd7  push eax
    X86_AT(c, 0xbefd7u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0befd8  lea eax, [ebp - 4]
    X86_AT(c, 0xbefd8u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFFCu);
    // 0befdb  push eax
    X86_AT(c, 0xbefdbu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0befdc  push 0x4b00
    X86_AT(c, 0xbefdcu);
    { uint32_t v = 0x4B00u; push32(c, v); }
    // 0befe1  push dword ptr [ebp - 0x30]
    X86_AT(c, 0xbefe1u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFD0u))); push32(c, v); }
    // 0befe4  push 0x24f8
    X86_AT(c, 0xbefe4u);
    { uint32_t v = 0x24F8u; push32(c, v); }
    // 0befe9  call 0xbb1f0
    X86_AT(c, 0xbefe9u);
    push32(c, 0xbefeeu); x86_call_known(c, 0xbb1f0u, f_000bb1f0); X86_RET(c, 0xbefeeu);
    X86_TICK(c, 30);
    // 0befee  add esp, 0x30
    X86_AT(c, 0xbefeeu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x30u, 0, 4); }
    // 0beff1  lea eax, [ebp - 0xc]
    X86_AT(c, 0xbeff1u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFF4u);
    // 0beff4  push eax
    X86_AT(c, 0xbeff4u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0beff5  lea ecx, [ebp - 8]
    X86_AT(c, 0xbeff5u);
    c.r[1] = (uint32_t)(c.r[5] + 0xFFFFFFF8u);
    // 0beff8  push ecx
    X86_AT(c, 0xbeff8u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 0beff9  lea edx, [ebp - 4]
    X86_AT(c, 0xbeff9u);
    c.r[2] = (uint32_t)(c.r[5] + 0xFFFFFFFCu);
    // 0beffc  push edx
    X86_AT(c, 0xbeffcu);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0beffd  push 0x1900
    X86_AT(c, 0xbeffdu);
    { uint32_t v = 0x1900u; push32(c, v); }
    // 0bf002  push dword ptr [ebp - 0x34]
    X86_AT(c, 0xbf002u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFCCu))); push32(c, v); }
    // 0bf005  push 0x250c
    X86_AT(c, 0xbf005u);
    { uint32_t v = 0x250Cu; push32(c, v); }
    // 0bf00a  call 0xbb1f0
    X86_AT(c, 0xbf00au);
    push32(c, 0xbf00fu); x86_call_known(c, 0xbb1f0u, f_000bb1f0); X86_RET(c, 0xbf00fu);
    X86_TICK(c, 28);
    // 0bf00f  lea eax, [ebp - 0xc]
    X86_AT(c, 0xbf00fu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFF4u);
    // 0bf012  push eax
    X86_AT(c, 0xbf012u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0bf013  lea ecx, [ebp - 8]
    X86_AT(c, 0xbf013u);
    c.r[1] = (uint32_t)(c.r[5] + 0xFFFFFFF8u);
    // 0bf016  push ecx
    X86_AT(c, 0xbf016u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 0bf017  lea edx, [ebp - 4]
    X86_AT(c, 0xbf017u);
    c.r[2] = (uint32_t)(c.r[5] + 0xFFFFFFFCu);
    // 0bf01a  push edx
    X86_AT(c, 0xbf01au);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0bf01b  push 0x1400
    X86_AT(c, 0xbf01bu);
    { uint32_t v = 0x1400u; push32(c, v); }
    // 0bf020  push dword ptr [ebp - 0x38]
    X86_AT(c, 0xbf020u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFC8u))); push32(c, v); }
    // 0bf023  push 0x2520
    X86_AT(c, 0xbf023u);
    { uint32_t v = 0x2520u; push32(c, v); }
    // 0bf028  call 0xbb1f0
    X86_AT(c, 0xbf028u);
    push32(c, 0xbf02du); x86_call_known(c, 0xbb1f0u, f_000bb1f0); X86_RET(c, 0xbf02du);
    X86_TICK(c, 28);
    // 0bf02d  lea eax, [ebp - 0xc]
    X86_AT(c, 0xbf02du);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFF4u);
    // 0bf030  push eax
    X86_AT(c, 0xbf030u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0bf031  lea ecx, [ebp - 8]
    X86_AT(c, 0xbf031u);
    c.r[1] = (uint32_t)(c.r[5] + 0xFFFFFFF8u);
    // 0bf034  push ecx
    X86_AT(c, 0xbf034u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 0bf035  lea ecx, [ebp - 4]
    X86_AT(c, 0xbf035u);
    c.r[1] = (uint32_t)(c.r[5] + 0xFFFFFFFCu);
    // 0bf038  push ecx
    X86_AT(c, 0xbf038u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 0bf039  push 0x8700
    X86_AT(c, 0xbf039u);
    { uint32_t v = 0x8700u; push32(c, v); }
    // 0bf03e  push dword ptr [ebp - 0x3c]
    X86_AT(c, 0xbf03eu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFC4u))); push32(c, v); }
    // 0bf041  push 0x2530
    X86_AT(c, 0xbf041u);
    { uint32_t v = 0x2530u; push32(c, v); }
    // 0bf046  call 0xbb1f0
    X86_AT(c, 0xbf046u);
    push32(c, 0xbf04bu); x86_call_known(c, 0xbb1f0u, f_000bb1f0); X86_RET(c, 0xbf04bu);
    X86_TICK(c, 11);
    // 0bf04b  add esp, 0x48
    X86_AT(c, 0xbf04bu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x48u, 0, 4); }
    // 0bf04e  push 0
    X86_AT(c, 0xbf04eu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0bf050  call 0xba6a0
    X86_AT(c, 0xbf050u);
    push32(c, 0xbf055u); x86_call_known(c, 0xba6a0u, f_000ba6a0); X86_RET(c, 0xbf055u);
    X86_TICK(c, 9);
    // 0bf055  push 5
    X86_AT(c, 0xbf055u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0bf057  call 0xb8888
    X86_AT(c, 0xbf057u);
    push32(c, 0xbf05cu); x86_call_known(c, 0xb8888u, f_000b8888); X86_RET(c, 0xbf05cu);
    X86_TICK(c, 9);
    // 0bf05c  push 1
    X86_AT(c, 0xbf05cu);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0bf05e  call 0xba6a0
    X86_AT(c, 0xbf05eu);
    push32(c, 0xbf063u); x86_call_known(c, 0xba6a0u, f_000ba6a0); X86_RET(c, 0xbf063u);
    X86_TICK(c, 9);
    // 0bf063  push 2
    X86_AT(c, 0xbf063u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0bf065  call 0xba6b4
    X86_AT(c, 0xbf065u);
    push32(c, 0xbf06au); x86_call_known(c, 0xba6b4u, f_000ba6b4); X86_RET(c, 0xbf06au);
    X86_TICK(c, 4);
    // 0bf06a  mov dword ptr [ebp - 0xc], 1
    X86_AT(c, 0xbf06au);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)), 0x1u);
    // 0bf071  add esp, 0x10
    X86_AT(c, 0xbf071u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
L_bf074:
    X86_TICK(c, 12);
    // 0bf074  cmp dword ptr [ebp - 0xc], 3
    X86_AT(c, 0xbf074u);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u))), 0x3u, 0, 4);
    // 0bf078  jge 0xbf1bc
    X86_AT(c, 0xbf078u);
    if (x86_cc(c, 13)) { goto L_bf1bc; }
    X86_TICK(c, 2);
    // 0bf07e  mov dword ptr [ebp - 0x1c], 0
    X86_AT(c, 0xbf07eu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE4u)), 0x0u);
L_bf085:
    X86_TICK(c, 12);
    // 0bf085  cmp dword ptr [ebp - 0x1c], 8
    X86_AT(c, 0xbf085u);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE4u))), 0x8u, 0, 4);
    // 0bf089  jge 0xbf1b4
    X86_AT(c, 0xbf089u);
    if (x86_cc(c, 13)) { goto L_bf1b4; }
    X86_TICK(c, 2);
    // 0bf08f  mov dword ptr [ebp - 0x20], 0
    X86_AT(c, 0xbf08fu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE0u)), 0x0u);
L_bf096:
    X86_TICK(c, 12);
    // 0bf096  cmp dword ptr [ebp - 0x20], 8
    X86_AT(c, 0xbf096u);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE0u))), 0x8u, 0, 4);
    // 0bf09a  jge 0xbf1ac
    X86_AT(c, 0xbf09au);
    if (x86_cc(c, 13)) { goto L_bf1ac; }
    X86_TICK(c, 2);
    // 0bf0a0  mov dword ptr [ebp - 0x18], 0
    X86_AT(c, 0xbf0a0u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE8u)), 0x0u);
L_bf0a7:
    X86_TICK(c, 11);
    // 0bf0a7  mov eax, dword ptr [ebp - 0x18]
    X86_AT(c, 0xbf0a7u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE8u)));
    // 0bf0aa  cmp eax, 4
    X86_AT(c, 0xbf0aau);
    (void)x86_sub(c, c.r[0], 0x4u, 0, 4);
    // 0bf0ad  jge 0xbf1a4
    X86_AT(c, 0xbf0adu);
    if (x86_cc(c, 13)) { goto L_bf1a4; }
    X86_TICK(c, 46);
    // 0bf0b3  shl eax, 5
    X86_AT(c, 0xbf0b3u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[0] = r; }
    // 0bf0b6  mov edx, dword ptr [ebp - 0x20]
    X86_AT(c, 0xbf0b6u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE0u)));
    // 0bf0b9  mov dword ptr [ebp - 0x44], edx
    X86_AT(c, 0xbf0b9u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFBCu)), c.r[2]);
    // 0bf0bc  shl edx, 5
    X86_AT(c, 0xbf0bcu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0bf0bf  mov ecx, dword ptr [ebp - 0x1c]
    X86_AT(c, 0xbf0bfu);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE4u)));
    // 0bf0c2  mov dword ptr [ebp - 0x48], edx
    X86_AT(c, 0xbf0c2u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFB8u)), c.r[2]);
    // 0bf0c5  mov edx, dword ptr [ebp - 0x44]
    X86_AT(c, 0xbf0c5u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFBCu)));
    // 0bf0c8  mov eax, dword ptr [eax + edx*4 + 0xa678c]
    X86_AT(c, 0xbf0c8u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[0] + c.r[2] * 4 + 0xA678Cu)));
    // 0bf0cf  shl eax, 3
    X86_AT(c, 0xbf0cfu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x3u, 4, w); if (w) c.r[0] = r; }
    // 0bf0d2  mov edx, dword ptr [ebp - 0x48]
    X86_AT(c, 0xbf0d2u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFB8u)));
    // 0bf0d5  add eax, dword ptr [edx + ecx*4 + 0xa678c]
    X86_AT(c, 0xbf0d5u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[2] + c.r[1] * 4 + 0xA678Cu))), 0, 4); }
    // 0bf0dc  mov dword ptr [ebp - 0x24], eax
    X86_AT(c, 0xbf0dcu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFDCu)), c.r[0]);
    // 0bf0df  mov dword ptr [ebp - 0x14], 0
    X86_AT(c, 0xbf0dfu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu)), 0x0u);
    // 0bf0e6  xchg ebx, eax
    X86_AT(c, 0xbf0e6u);
    { uint32_t t = c.r[3]; c.r[3] = c.r[0]; c.r[0] = t; }
L_bf0e7:
    X86_TICK(c, 12);
    // 0bf0e7  cmp dword ptr [ebp - 0x14], 4
    X86_AT(c, 0xbf0e7u);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu))), 0x4u, 0, 4);
    // 0bf0eb  jge 0xbf165
    X86_AT(c, 0xbf0ebu);
    if (x86_cc(c, 13)) { goto L_bf165; }
    X86_TICK(c, 17);
    // 0bf0f1  mov eax, dword ptr [ebp - 0xc]
    X86_AT(c, 0xbf0f1u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)));
    // 0bf0f4  lea eax, [eax*8]
    X86_AT(c, 0xbf0f4u);
    c.r[0] = (uint32_t)(c.r[0] * 8);
    // 0bf0fb  lea edx, [eax + eax*8]
    X86_AT(c, 0xbf0fbu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 8);
    // 0bf0fe  lea eax, [edx + eax*4]
    X86_AT(c, 0xbf0feu);
    c.r[0] = (uint32_t)(c.r[2] + c.r[0] * 4);
    // 0bf101  cmp eax, ebx
    X86_AT(c, 0xbf101u);
    (void)x86_sub(c, c.r[0], c.r[3], 0, 4);
    // 0bf103  jle 0xbf15d
    X86_AT(c, 0xbf103u);
    if (x86_cc(c, 14)) { goto L_bf15d; }
    X86_TICK(c, 9);
    // 0bf105  sub eax, 0x68
    X86_AT(c, 0xbf105u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, 0x68u, 0, 4); }
    // 0bf108  cmp eax, ebx
    X86_AT(c, 0xbf108u);
    (void)x86_sub(c, c.r[0], c.r[3], 0, 4);
    // 0bf10a  jge 0xbf15d
    X86_AT(c, 0xbf10au);
    if (x86_cc(c, 13)) { goto L_bf15d; }
    X86_TICK(c, 10);
    // 0bf10c  mov dword ptr [ebp - 0x10], 0
    X86_AT(c, 0xbf10cu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u)), 0x0u);
    // 0bf113  mov eax, dword ptr [ebp - 0x18]
    X86_AT(c, 0xbf113u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE8u)));
    // 0bf116  mov esi, dword ptr [eax*4 + 0xa677c]
    X86_AT(c, 0xbf116u);
    c.r[6] = rd32((c.sbase[3] + (uint32_t)(c.r[0] * 4 + 0xA677Cu)));
L_bf11d:
    X86_TICK(c, 12);
    // 0bf11d  cmp dword ptr [ebp - 0x10], 0xa
    X86_AT(c, 0xbf11du);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u))), 0xAu, 0, 4);
    // 0bf121  jge 0xbf15d
    X86_AT(c, 0xbf121u);
    if (x86_cc(c, 13)) { goto L_bf15d; }
    X86_TICK(c, 2);
    // 0bf123  sub edi, edi
    X86_AT(c, 0xbf123u);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
L_bf125:
    X86_TICK(c, 7);
    // 0bf125  cmp edi, 8
    X86_AT(c, 0xbf125u);
    (void)x86_sub(c, c.r[7], 0x8u, 0, 4);
    // 0bf128  jge 0xbf155
    X86_AT(c, 0xbf128u);
    if (x86_cc(c, 13)) { goto L_bf155; }
    X86_TICK(c, 56);
    // 0bf12a  lea eax, [ebx + ebx*4]
    X86_AT(c, 0xbf12au);
    c.r[0] = (uint32_t)(c.r[3] + c.r[3] * 4);
    // 0bf12d  shl eax, 7
    X86_AT(c, 0xbf12du);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x7u, 4, w); if (w) c.r[0] = r; }
    // 0bf130  cdq 
    X86_AT(c, 0xbf130u);
    c.r[2] = (c.r[0] & 0x80000000u) ? 0xFFFFFFFFu : 0u;
    // 0bf131  sub eax, edx
    X86_AT(c, 0xbf131u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[2], 0, 4); }
    // 0bf133  sar eax, 1
    X86_AT(c, 0xbf133u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 7, v, 0x1u, 4, w); if (w) c.r[0] = r; }
    // 0bf135  mov dword ptr [ebp - 0x44], eax
    X86_AT(c, 0xbf135u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFBCu)), c.r[0]);
    // 0bf138  mov eax, esi
    X86_AT(c, 0xbf138u);
    c.r[0] = c.r[6];
    // 0bf13a  cdq 
    X86_AT(c, 0xbf13au);
    c.r[2] = (c.r[0] & 0x80000000u) ? 0xFFFFFFFFu : 0u;
    // 0bf13b  sub eax, edx
    X86_AT(c, 0xbf13bu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[2], 0, 4); }
    // 0bf13d  sar eax, 1
    X86_AT(c, 0xbf13du);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 7, v, 0x1u, 4, w); if (w) c.r[0] = r; }
    // 0bf13f  add eax, dword ptr [ebp - 0x44]
    X86_AT(c, 0xbf13fu);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFBCu))), 0, 4); }
    // 0bf142  mov edx, dword ptr [ebp - 0x28]
    X86_AT(c, 0xbf142u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFD8u)));
    // 0bf145  add edx, eax
    X86_AT(c, 0xbf145u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0bf147  mov dl, byte ptr [edx + edi*1]
    X86_AT(c, 0xbf147u);
    s8(c, 2, rd8((c.sbase[3] + (uint32_t)(c.r[2] + c.r[7]))));
    // 0bf14a  mov ecx, dword ptr [ebp - 0x2c]
    X86_AT(c, 0xbf14au);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFD4u)));
    // 0bf14d  add eax, ecx
    X86_AT(c, 0xbf14du);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, c.r[1], 0, 4); }
    // 0bf14f  mov byte ptr [eax + edi*1], dl
    X86_AT(c, 0xbf14fu);
    wr8((c.sbase[3] + (uint32_t)(c.r[0] + c.r[7])), g8(c, 2));
    // 0bf152  inc edi
    X86_AT(c, 0xbf152u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0bf153  jmp 0xbf125
    X86_AT(c, 0xbf153u);
    X86_POLL(c, 0xbf125u); goto L_bf125;
L_bf155:
    X86_TICK(c, 15);
    // 0bf155  inc dword ptr [ebp - 0x10]
    X86_AT(c, 0xbf155u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0bf158  add esi, 0x40
    X86_AT(c, 0xbf158u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x40u, 0, 4); }
    // 0bf15b  jmp 0xbf11d
    X86_AT(c, 0xbf15bu);
    X86_POLL(c, 0xbf11du); goto L_bf11d;
L_bf15d:
    X86_TICK(c, 15);
    // 0bf15d  inc dword ptr [ebp - 0x14]
    X86_AT(c, 0xbf15du);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0bf160  add ebx, 0x40
    X86_AT(c, 0xbf160u);
    { uint32_t v = c.r[3]; c.r[3] = x86_add(c, v, 0x40u, 0, 4); }
    // 0bf163  jmp 0xbf0e7
    X86_AT(c, 0xbf163u);
    X86_POLL(c, 0xbf0e7u); goto L_bf0e7;
L_bf165:
    X86_TICK(c, 20);
    // 0bf165  push 0xd1
    X86_AT(c, 0xbf165u);
    { uint32_t v = 0xD1u; push32(c, v); }
    // 0bf16a  push 0x280
    X86_AT(c, 0xbf16au);
    { uint32_t v = 0x280u; push32(c, v); }
    // 0bf16f  push 0x4b
    X86_AT(c, 0xbf16fu);
    { uint32_t v = 0x4Bu; push32(c, v); }
    // 0bf171  push 0x36
    X86_AT(c, 0xbf171u);
    { uint32_t v = 0x36u; push32(c, v); }
    // 0bf173  push dword ptr [ebp - 0x2c]
    X86_AT(c, 0xbf173u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFD4u))); push32(c, v); }
    // 0bf176  call 0xbb018
    X86_AT(c, 0xbf176u);
    push32(c, 0xbf17bu); x86_call_known(c, 0xbb018u, f_000bb018); X86_RET(c, 0xbf17bu);
    X86_TICK(c, 13);
    // 0bf17b  lea eax, [ebp - 0x40]
    X86_AT(c, 0xbf17bu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFC0u);
    // 0bf17e  push eax
    X86_AT(c, 0xbf17eu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0bf17f  push 1
    X86_AT(c, 0xbf17fu);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0bf181  call 0xa9
    X86_AT(c, 0xbf181u);
    push32(c, 0xbf186u); x86_call_known(c, 0xa9u, f_000000a9); X86_RET(c, 0xbf186u);
    X86_TICK(c, 15);
    // 0bf186  add esp, 0x1c
    X86_AT(c, 0xbf186u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x1Cu, 0, 4); }
    // 0bf189  mov eax, dword ptr [ebp - 0x40]
    X86_AT(c, 0xbf189u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFC0u)));
    // 0bf18c  and eax, 0xff00
    X86_AT(c, 0xbf18cu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0xFF00u, 4); }
    // 0bf191  cmp eax, 0xff00
    X86_AT(c, 0xbf191u);
    (void)x86_sub(c, c.r[0], 0xFF00u, 0, 4);
    // 0bf196  jne 0xbf28c
    X86_AT(c, 0xbf196u);
    if (x86_cc(c, 5)) { goto L_bf28c; }
    X86_TICK(c, 13);
    // 0bf19c  inc dword ptr [ebp - 0x18]
    X86_AT(c, 0xbf19cu);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE8u)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0bf19f  jmp 0xbf0a7
    X86_AT(c, 0xbf19fu);
    X86_POLL(c, 0xbf0a7u); goto L_bf0a7;
L_bf1a4:
    X86_TICK(c, 13);
    // 0bf1a4  inc dword ptr [ebp - 0x20]
    X86_AT(c, 0xbf1a4u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE0u)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0bf1a7  jmp 0xbf096
    X86_AT(c, 0xbf1a7u);
    X86_POLL(c, 0xbf096u); goto L_bf096;
L_bf1ac:
    X86_TICK(c, 13);
    // 0bf1ac  inc dword ptr [ebp - 0x1c]
    X86_AT(c, 0xbf1acu);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE4u)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0bf1af  jmp 0xbf085
    X86_AT(c, 0xbf1afu);
    X86_POLL(c, 0xbf085u); goto L_bf085;
L_bf1b4:
    X86_TICK(c, 13);
    // 0bf1b4  inc dword ptr [ebp - 0xc]
    X86_AT(c, 0xbf1b4u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0bf1b7  jmp 0xbf074
    X86_AT(c, 0xbf1b7u);
    X86_POLL(c, 0xbf074u); goto L_bf074;
L_bf1bc:
    X86_TICK(c, 4);
    // 0bf1bc  sub edi, edi
    X86_AT(c, 0xbf1bcu);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
    // 0bf1be  mov dword ptr [ebp - 0x10], edi
    X86_AT(c, 0xbf1beu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u)), c.r[7]);
L_bf1c1:
    X86_TICK(c, 7);
    // 0bf1c1  cmp edi, 0x40
    X86_AT(c, 0xbf1c1u);
    (void)x86_sub(c, c.r[7], 0x40u, 0, 4);
    // 0bf1c4  jge 0xbf2ab
    X86_AT(c, 0xbf1c4u);
    if (x86_cc(c, 13)) { goto L_bf2ab; }
    X86_TICK(c, 17);
    // 0bf1ca  push 0
    X86_AT(c, 0xbf1cau);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0bf1cc  push 0x17b
    X86_AT(c, 0xbf1ccu);
    { uint32_t v = 0x17Bu; push32(c, v); }
    // 0bf1d1  push 0x196
    X86_AT(c, 0xbf1d1u);
    { uint32_t v = 0x196u; push32(c, v); }
    // 0bf1d6  push 0x12c
    X86_AT(c, 0xbf1d6u);
    { uint32_t v = 0x12Cu; push32(c, v); }
    // 0bf1db  push 0x176
    X86_AT(c, 0xbf1dbu);
    { uint32_t v = 0x176u; push32(c, v); }
    // 0bf1e0  call 0xbac18
    X86_AT(c, 0xbf1e0u);
    push32(c, 0xbf1e5u); x86_call_known(c, 0xbac18u, f_000bac18); X86_RET(c, 0xbf1e5u);
    X86_TICK(c, 60);
    // 0bf1e5  push 0x50
    X86_AT(c, 0xbf1e5u);
    { uint32_t v = 0x50u; push32(c, v); }
    // 0bf1e7  push 0x78
    X86_AT(c, 0xbf1e7u);
    { uint32_t v = 0x78u; push32(c, v); }
    // 0bf1e9  push 0x12c
    X86_AT(c, 0xbf1e9u);
    { uint32_t v = 0x12Cu; push32(c, v); }
    // 0bf1ee  movsx eax, word ptr [edi*4 + 0xa665e]
    X86_AT(c, 0xbf1eeu);
    c.r[0] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[3] + (uint32_t)(c.r[7] * 4 + 0xA665Eu)));
    // 0bf1f6  add eax, 0x36
    X86_AT(c, 0xbf1f6u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0x36u, 0, 4); }
    // 0bf1f9  push eax
    X86_AT(c, 0xbf1f9u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0bf1fa  mov eax, dword ptr [ebp - 0xc]
    X86_AT(c, 0xbf1fau);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)));
    // 0bf1fd  movsx eax, word ptr [eax*2 + 0xa675c]
    X86_AT(c, 0xbf1fdu);
    c.r[0] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[3] + (uint32_t)(c.r[0] * 2 + 0xA675Cu)));
    // 0bf205  lea edx, [eax + eax*8]
    X86_AT(c, 0xbf205u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 8);
    // 0bf208  lea edx, [eax + edx*4]
    X86_AT(c, 0xbf208u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 4);
    // 0bf20b  lea edx, [eax + edx*2]
    X86_AT(c, 0xbf20bu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0bf20e  shl edx, 7
    X86_AT(c, 0xbf20eu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x7u, 4, w); if (w) c.r[2] = r; }
    // 0bf211  xchg edx, eax
    X86_AT(c, 0xbf211u);
    { uint32_t t = c.r[2]; c.r[2] = c.r[0]; c.r[0] = t; }
    // 0bf212  cdq 
    X86_AT(c, 0xbf212u);
    c.r[2] = (c.r[0] & 0x80000000u) ? 0xFFFFFFFFu : 0u;
    // 0bf213  sub eax, edx
    X86_AT(c, 0xbf213u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[2], 0, 4); }
    // 0bf215  sar eax, 1
    X86_AT(c, 0xbf215u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 7, v, 0x1u, 4, w); if (w) c.r[0] = r; }
    // 0bf217  add eax, dword ptr [ebp - 0x30]
    X86_AT(c, 0xbf217u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFD0u))), 0, 4); }
    // 0bf21a  push eax
    X86_AT(c, 0xbf21au);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0bf21b  call 0xbb018
    X86_AT(c, 0xbf21bu);
    push32(c, 0xbf220u); x86_call_known(c, 0xbb018u, f_000bb018); X86_RET(c, 0xbf220u);
    X86_TICK(c, 47);
    // 0bf220  push 0x20
    X86_AT(c, 0xbf220u);
    { uint32_t v = 0x20u; push32(c, v); }
    // 0bf222  push 0x50
    X86_AT(c, 0xbf222u);
    { uint32_t v = 0x50u; push32(c, v); }
    // 0bf224  push 0x15c
    X86_AT(c, 0xbf224u);
    { uint32_t v = 0x15Cu; push32(c, v); }
    // 0bf229  movsx eax, word ptr [edi*4 + 0xa665c]
    X86_AT(c, 0xbf229u);
    c.r[0] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[3] + (uint32_t)(c.r[7] * 4 + 0xA665Cu)));
    // 0bf231  add eax, 0x36
    X86_AT(c, 0xbf231u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0x36u, 0, 4); }
    // 0bf234  push eax
    X86_AT(c, 0xbf234u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0bf235  mov eax, dword ptr [ebp - 0x10]
    X86_AT(c, 0xbf235u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u)));
    // 0bf238  lea eax, [eax + eax*4]
    X86_AT(c, 0xbf238u);
    c.r[0] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0bf23b  shl eax, 9
    X86_AT(c, 0xbf23bu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x9u, 4, w); if (w) c.r[0] = r; }
    // 0bf23e  cdq 
    X86_AT(c, 0xbf23eu);
    c.r[2] = (c.r[0] & 0x80000000u) ? 0xFFFFFFFFu : 0u;
    // 0bf23f  sub eax, edx
    X86_AT(c, 0xbf23fu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[2], 0, 4); }
    // 0bf241  sar eax, 1
    X86_AT(c, 0xbf241u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 7, v, 0x1u, 4, w); if (w) c.r[0] = r; }
    // 0bf243  add eax, dword ptr [ebp - 0x38]
    X86_AT(c, 0xbf243u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFC8u))), 0, 4); }
    // 0bf246  push eax
    X86_AT(c, 0xbf246u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0bf247  call 0xbb018
    X86_AT(c, 0xbf247u);
    push32(c, 0xbf24cu); x86_call_known(c, 0xbb018u, f_000bb018); X86_RET(c, 0xbf24cu);
    X86_TICK(c, 20);
    // 0bf24c  add esp, 0x3c
    X86_AT(c, 0xbf24cu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x3Cu, 0, 4); }
    // 0bf24f  inc dword ptr [ebp - 0x10]
    X86_AT(c, 0xbf24fu);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0bf252  cmp dword ptr [ebp - 0x10], 3
    X86_AT(c, 0xbf252u);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u))), 0x3u, 0, 4);
    // 0bf256  jle 0xbf25f
    X86_AT(c, 0xbf256u);
    if (x86_cc(c, 14)) { goto L_bf25f; }
    X86_TICK(c, 2);
    // 0bf258  mov dword ptr [ebp - 0x10], 0
    X86_AT(c, 0xbf258u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u)), 0x0u);
L_bf25f:
    X86_TICK(c, 18);
    // 0bf25f  inc dword ptr [ebp - 0xc]
    X86_AT(c, 0xbf25fu);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0bf262  cmp dword ptr [ebp - 0xc], 0xb
    X86_AT(c, 0xbf262u);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u))), 0xBu, 0, 4);
    // 0bf266  jle 0xbf26f
    X86_AT(c, 0xbf266u);
    if (x86_cc(c, 14)) { goto L_bf26f; }
    X86_TICK(c, 2);
    // 0bf268  mov dword ptr [ebp - 0xc], 0
    X86_AT(c, 0xbf268u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)), 0x0u);
L_bf26f:
    X86_TICK(c, 13);
    // 0bf26f  lea eax, [ebp - 0x40]
    X86_AT(c, 0xbf26fu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFC0u);
    // 0bf272  push eax
    X86_AT(c, 0xbf272u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0bf273  push 1
    X86_AT(c, 0xbf273u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0bf275  call 0xa9
    X86_AT(c, 0xbf275u);
    push32(c, 0xbf27au); x86_call_known(c, 0xa9u, f_000000a9); X86_RET(c, 0xbf27au);
    X86_TICK(c, 15);
    // 0bf27a  add esp, 8
    X86_AT(c, 0xbf27au);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0bf27d  mov eax, dword ptr [ebp - 0x40]
    X86_AT(c, 0xbf27du);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFC0u)));
    // 0bf280  and eax, 0xff00
    X86_AT(c, 0xbf280u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0xFF00u, 4); }
    // 0bf285  cmp eax, 0xff00
    X86_AT(c, 0xbf285u);
    (void)x86_sub(c, c.r[0], 0xFF00u, 0, 4);
    // 0bf28a  je 0xbf29b
    X86_AT(c, 0xbf28au);
    if (x86_cc(c, 4)) { goto L_bf29b; }
L_bf28c:
    X86_TICK(c, 9);
    // 0bf28c  push 0
    X86_AT(c, 0xbf28cu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0bf28e  call 0xba6a0
    X86_AT(c, 0xbf28eu);
    push32(c, 0xbf293u); x86_call_known(c, 0xba6a0u, f_000ba6a0); X86_RET(c, 0xbf293u);
L_bf293:
    X86_TICK(c, 9);
    // 0bf293  add esp, 4
    X86_AT(c, 0xbf293u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0bf296  jmp 0xbf395
    X86_AT(c, 0xbf296u);
    goto L_bf395;
L_bf29b:
    X86_TICK(c, 9);
    // 0bf29b  push 0xa
    X86_AT(c, 0xbf29bu);
    { uint32_t v = 0xAu; push32(c, v); }
    // 0bf29d  call 0xbebbc
    X86_AT(c, 0xbf29du);
    push32(c, 0xbf2a2u); x86_call_known(c, 0xbebbcu, f_000bebbc); X86_RET(c, 0xbf2a2u);
    X86_TICK(c, 11);
    // 0bf2a2  inc edi
    X86_AT(c, 0xbf2a2u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0bf2a3  add esp, 4
    X86_AT(c, 0xbf2a3u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0bf2a6  jmp 0xbf1c1
    X86_AT(c, 0xbf2a6u);
    X86_POLL(c, 0xbf1c1u); goto L_bf1c1;
L_bf2ab:
    X86_TICK(c, 9);
    // 0bf2ab  push 7
    X86_AT(c, 0xbf2abu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0bf2ad  call 0xbebbc
    X86_AT(c, 0xbf2adu);
    push32(c, 0xbf2b2u); x86_call_known(c, 0xbebbcu, f_000bebbc); X86_RET(c, 0xbf2b2u);
    X86_TICK(c, 15);
    // 0bf2b2  push 0xff
    X86_AT(c, 0xbf2b2u);
    { uint32_t v = 0xFFu; push32(c, v); }
    // 0bf2b7  push 0xff
    X86_AT(c, 0xbf2b7u);
    { uint32_t v = 0xFFu; push32(c, v); }
    // 0bf2bc  push 0
    X86_AT(c, 0xbf2bcu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0bf2be  push 6
    X86_AT(c, 0xbf2beu);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0bf2c0  call 0xba4d4
    X86_AT(c, 0xbf2c0u);
    push32(c, 0xbf2c5u); x86_call_known(c, 0xba4d4u, f_000ba4d4); X86_RET(c, 0xbf2c5u);
    X86_TICK(c, 20);
    // 0bf2c5  push 0x90
    X86_AT(c, 0xbf2c5u);
    { uint32_t v = 0x90u; push32(c, v); }
    // 0bf2ca  push 0x1e0
    X86_AT(c, 0xbf2cau);
    { uint32_t v = 0x1E0u; push32(c, v); }
    // 0bf2cf  push 0xeb
    X86_AT(c, 0xbf2cfu);
    { uint32_t v = 0xEBu; push32(c, v); }
    // 0bf2d4  push 0x95
    X86_AT(c, 0xbf2d4u);
    { uint32_t v = 0x95u; push32(c, v); }
    // 0bf2d9  push dword ptr [ebp - 0x3c]
    X86_AT(c, 0xbf2d9u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFC4u))); push32(c, v); }
    // 0bf2dc  call 0xbb018
    X86_AT(c, 0xbf2dcu);
    push32(c, 0xbf2e1u); x86_call_known(c, 0xbb018u, f_000bb018); X86_RET(c, 0xbf2e1u);
    X86_TICK(c, 4);
    // 0bf2e1  sub edi, edi
    X86_AT(c, 0xbf2e1u);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
    // 0bf2e3  add esp, 0x28
    X86_AT(c, 0xbf2e3u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x28u, 0, 4); }
L_bf2e6:
    X86_TICK(c, 7);
    // 0bf2e6  cmp edi, 3
    X86_AT(c, 0xbf2e6u);
    (void)x86_sub(c, c.r[7], 0x3u, 0, 4);
    // 0bf2e9  jge 0xbf350
    X86_AT(c, 0xbf2e9u);
    if (x86_cc(c, 13)) { goto L_bf350; }
    X86_TICK(c, 15);
    // 0bf2eb  push 0x64
    X86_AT(c, 0xbf2ebu);
    { uint32_t v = 0x64u; push32(c, v); }
    // 0bf2ed  push 0x19
    X86_AT(c, 0xbf2edu);
    { uint32_t v = 0x19u; push32(c, v); }
    // 0bf2ef  push 0
    X86_AT(c, 0xbf2efu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0bf2f1  push 6
    X86_AT(c, 0xbf2f1u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0bf2f3  call 0xba4d4
    X86_AT(c, 0xbf2f3u);
    push32(c, 0xbf2f8u); x86_call_known(c, 0xba4d4u, f_000ba4d4); X86_RET(c, 0xbf2f8u);
    X86_TICK(c, 9);
    // 0bf2f8  push 5
    X86_AT(c, 0xbf2f8u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0bf2fa  call 0xbebbc
    X86_AT(c, 0xbf2fau);
    push32(c, 0xbf2ffu); x86_call_known(c, 0xbebbcu, f_000bebbc); X86_RET(c, 0xbf2ffu);
    X86_TICK(c, 15);
    // 0bf2ff  push 0xff
    X86_AT(c, 0xbf2ffu);
    { uint32_t v = 0xFFu; push32(c, v); }
    // 0bf304  push 0xff
    X86_AT(c, 0xbf304u);
    { uint32_t v = 0xFFu; push32(c, v); }
    // 0bf309  push 0
    X86_AT(c, 0xbf309u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0bf30b  push 6
    X86_AT(c, 0xbf30bu);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0bf30d  call 0xba4d4
    X86_AT(c, 0xbf30du);
    push32(c, 0xbf312u); x86_call_known(c, 0xba4d4u, f_000ba4d4); X86_RET(c, 0xbf312u);
    X86_TICK(c, 9);
    // 0bf312  push 0xa
    X86_AT(c, 0xbf312u);
    { uint32_t v = 0xAu; push32(c, v); }
    // 0bf314  call 0xbebbc
    X86_AT(c, 0xbf314u);
    push32(c, 0xbf319u); x86_call_known(c, 0xbebbcu, f_000bebbc); X86_RET(c, 0xbf319u);
    X86_TICK(c, 15);
    // 0bf319  push 0x64
    X86_AT(c, 0xbf319u);
    { uint32_t v = 0x64u; push32(c, v); }
    // 0bf31b  push 0x19
    X86_AT(c, 0xbf31bu);
    { uint32_t v = 0x19u; push32(c, v); }
    // 0bf31d  push 0
    X86_AT(c, 0xbf31du);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0bf31f  push 6
    X86_AT(c, 0xbf31fu);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0bf321  call 0xba4d4
    X86_AT(c, 0xbf321u);
    push32(c, 0xbf326u); x86_call_known(c, 0xba4d4u, f_000ba4d4); X86_RET(c, 0xbf326u);
    X86_TICK(c, 9);
    // 0bf326  push 0xa
    X86_AT(c, 0xbf326u);
    { uint32_t v = 0xAu; push32(c, v); }
    // 0bf328  call 0xbebbc
    X86_AT(c, 0xbf328u);
    push32(c, 0xbf32du); x86_call_known(c, 0xbebbcu, f_000bebbc); X86_RET(c, 0xbf32du);
    X86_TICK(c, 17);
    // 0bf32d  add esp, 0x3c
    X86_AT(c, 0xbf32du);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x3Cu, 0, 4); }
    // 0bf330  push 0xff
    X86_AT(c, 0xbf330u);
    { uint32_t v = 0xFFu; push32(c, v); }
    // 0bf335  push 0xff
    X86_AT(c, 0xbf335u);
    { uint32_t v = 0xFFu; push32(c, v); }
    // 0bf33a  push 0
    X86_AT(c, 0xbf33au);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0bf33c  push 6
    X86_AT(c, 0xbf33cu);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0bf33e  call 0xba4d4
    X86_AT(c, 0xbf33eu);
    push32(c, 0xbf343u); x86_call_known(c, 0xba4d4u, f_000ba4d4); X86_RET(c, 0xbf343u);
    X86_TICK(c, 9);
    // 0bf343  push 3
    X86_AT(c, 0xbf343u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0bf345  call 0xbebbc
    X86_AT(c, 0xbf345u);
    push32(c, 0xbf34au); x86_call_known(c, 0xbebbcu, f_000bebbc); X86_RET(c, 0xbf34au);
    X86_TICK(c, 11);
    // 0bf34a  inc edi
    X86_AT(c, 0xbf34au);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0bf34b  add esp, 0x14
    X86_AT(c, 0xbf34bu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x14u, 0, 4); }
    // 0bf34e  jmp 0xbf2e6
    X86_AT(c, 0xbf34eu);
    X86_POLL(c, 0xbf2e6u); goto L_bf2e6;
L_bf350:
    X86_TICK(c, 17);
    // 0bf350  push 0
    X86_AT(c, 0xbf350u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0bf352  push 0x17b
    X86_AT(c, 0xbf352u);
    { uint32_t v = 0x17Bu; push32(c, v); }
    // 0bf357  push 0x1eb
    X86_AT(c, 0xbf357u);
    { uint32_t v = 0x1EBu; push32(c, v); }
    // 0bf35c  push 0x12c
    X86_AT(c, 0xbf35cu);
    { uint32_t v = 0x12Cu; push32(c, v); }
    // 0bf361  push 0x123
    X86_AT(c, 0xbf361u);
    { uint32_t v = 0x123u; push32(c, v); }
    // 0bf366  call 0xbac18
    X86_AT(c, 0xbf366u);
    push32(c, 0xbf36bu); x86_call_known(c, 0xbac18u, f_000bac18); X86_RET(c, 0xbf36bu);
    X86_TICK(c, 20);
    // 0bf36b  push 0x50
    X86_AT(c, 0xbf36bu);
    { uint32_t v = 0x50u; push32(c, v); }
    // 0bf36d  push 0xa0
    X86_AT(c, 0xbf36du);
    { uint32_t v = 0xA0u; push32(c, v); }
    // 0bf372  push 0x12c
    X86_AT(c, 0xbf372u);
    { uint32_t v = 0x12Cu; push32(c, v); }
    // 0bf377  push 0x133
    X86_AT(c, 0xbf377u);
    { uint32_t v = 0x133u; push32(c, v); }
    // 0bf37c  push dword ptr [ebp - 0x34]
    X86_AT(c, 0xbf37cu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFCCu))); push32(c, v); }
    // 0bf37f  call 0xbb018
    X86_AT(c, 0xbf37fu);
    push32(c, 0xbf384u); x86_call_known(c, 0xbb018u, f_000bb018); X86_RET(c, 0xbf384u);
    X86_TICK(c, 9);
    // 0bf384  push 0
    X86_AT(c, 0xbf384u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0bf386  call 0xba6a0
    X86_AT(c, 0xbf386u);
    push32(c, 0xbf38bu); x86_call_known(c, 0xba6a0u, f_000ba6a0); X86_RET(c, 0xbf38bu);
    X86_TICK(c, 9);
    // 0bf38b  push 0x32
    X86_AT(c, 0xbf38bu);
    { uint32_t v = 0x32u; push32(c, v); }
    // 0bf38d  call 0xbebbc
    X86_AT(c, 0xbf38du);
    push32(c, 0xbf392u); x86_call_known(c, 0xbebbcu, f_000bebbc); X86_RET(c, 0xbf392u);
    X86_TICK(c, 2);
    // 0bf392  add esp, 0x30
    X86_AT(c, 0xbf392u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x30u, 0, 4); }
L_bf395:
    X86_TICK(c, 28);
    // 0bf395  pop edi
    X86_AT(c, 0xbf395u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0bf396  pop esi
    X86_AT(c, 0xbf396u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0bf397  pop ebx
    X86_AT(c, 0xbf397u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0bf398  leave 
    X86_AT(c, 0xbf398u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0bf399  ret 
    X86_AT(c, 0xbf399u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xbed54u, "ran off the end of a function");
}
}

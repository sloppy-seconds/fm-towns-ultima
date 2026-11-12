#include "p_game_funcs.h"
namespace p_game {
void f_000ce382(X86Cpu& c) {
    X86_TICK(c, 7);
    // 0ce382  call 0xcc7bc
    X86_AT(c, 0xce382u);
    push32(c, 0xce387u); x86_call_known(c, 0xcc7bcu, f_000cc7bc); X86_RET(c, 0xce387u);
    X86_TICK(c, 9);
    // 0ce387  push 1
    X86_AT(c, 0xce387u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0ce389  call 0xc5ca4
    X86_AT(c, 0xce389u);
    push32(c, 0xce38eu); x86_call_known(c, 0xc5ca4u, f_000c5ca4); X86_RET(c, 0xce38eu);
    X86_TICK(c, 9);
    // 0ce38e  add esp, 8
    X86_AT(c, 0xce38eu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0ce391  jmp 0xce41e
    X86_AT(c, 0xce391u);
    goto L_ce41e;
L_ce41e:
    X86_TICK(c, 28);
    // 0ce41e  pop edi
    X86_AT(c, 0xce41eu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0ce41f  pop esi
    X86_AT(c, 0xce41fu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0ce420  pop ebx
    X86_AT(c, 0xce420u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0ce421  leave 
    X86_AT(c, 0xce421u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0ce422  ret 
    X86_AT(c, 0xce422u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xce382u, "ran off the end of a function");
}
void f_000ce424(X86Cpu& c) {
    X86_TICK(c, 10);
    // 0ce424  ret 
    X86_AT(c, 0xce424u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xce424u, "ran off the end of a function");
}
void f_000ce428(X86Cpu& c) {
    X86_TICK(c, 20);
    // 0ce428  mov eax, 0x270f
    X86_AT(c, 0xce428u);
    c.r[0] = 0x270Fu;
    // 0ce42d  mov dword ptr [0xb02fe], eax
    X86_AT(c, 0xce42du);
    wr32((c.sbase[3] + (uint32_t)(0xB02FEu)), c.r[0]);
    // 0ce432  mov dword ptr [0xb0322], eax
    X86_AT(c, 0xce432u);
    wr32((c.sbase[3] + (uint32_t)(0xB0322u)), c.r[0]);
    // 0ce437  mov dword ptr [0xb031e], eax
    X86_AT(c, 0xce437u);
    wr32((c.sbase[3] + (uint32_t)(0xB031Eu)), c.r[0]);
    // 0ce43c  mov dword ptr [0xb031a], eax
    X86_AT(c, 0xce43cu);
    wr32((c.sbase[3] + (uint32_t)(0xB031Au)), c.r[0]);
    // 0ce441  ret 
    X86_AT(c, 0xce441u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xce428u, "ran off the end of a function");
}
void f_000ce444(X86Cpu& c) {
    X86_TICK(c, 9);
    // 0ce444  push 7
    X86_AT(c, 0xce444u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0ce446  call 0xca0a0
    X86_AT(c, 0xce446u);
    push32(c, 0xce44bu); x86_call_known(c, 0xca0a0u, f_000ca0a0); X86_RET(c, 0xce44bu);
    X86_TICK(c, 7);
    // 0ce44b  call 0xc5cf4
    X86_AT(c, 0xce44bu);
    push32(c, 0xce450u); x86_call_known(c, 0xc5cf4u, f_000c5cf4); X86_RET(c, 0xce450u);
    X86_TICK(c, 12);
    // 0ce450  add esp, 4
    X86_AT(c, 0xce450u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0ce453  xchg edx, eax
    X86_AT(c, 0xce453u);
    { uint32_t t = c.r[2]; c.r[2] = c.r[0]; c.r[0] = t; }
    // 0ce454  cmp edx, 3
    X86_AT(c, 0xce454u);
    (void)x86_sub(c, c.r[2], 0x3u, 0, 4);
    // 0ce457  ja 0xce534
    X86_AT(c, 0xce457u);
    if (x86_cc(c, 7)) { goto L_ce534; }
    X86_TICK(c, 7);
    // 0ce45d  jmp dword ptr cs:[edx*4 + 0xce465]
    X86_AT(c, 0xce45du);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xCE465u)));
      switch (t) {
      case 0xce475u: goto L_ce475;
      case 0xce4a5u: goto L_ce4a5;
      case 0xce4d2u: goto L_ce4d2;
      case 0xce4ffu: goto L_ce4ff;
      default: x86_jump(c, t); return; } }
L_ce475:
    X86_TICK(c, 11);
    // 0ce475  push 0x321c
    X86_AT(c, 0xce475u);
    { uint32_t v = 0x321Cu; push32(c, v); }
    // 0ce47a  push 7
    X86_AT(c, 0xce47au);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0ce47c  call 0xc8cdc
    X86_AT(c, 0xce47cu);
    push32(c, 0xce481u); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xce481u);
    X86_TICK(c, 9);
    // 0ce481  push 7
    X86_AT(c, 0xce481u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0ce483  call 0xca3cc
    X86_AT(c, 0xce483u);
    push32(c, 0xce488u); x86_call_known(c, 0xca3ccu, f_000ca3cc); X86_RET(c, 0xce488u);
    X86_TICK(c, 11);
    // 0ce488  push 0x3244
    X86_AT(c, 0xce488u);
    { uint32_t v = 0x3244u; push32(c, v); }
    // 0ce48d  push 7
    X86_AT(c, 0xce48du);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0ce48f  call 0xca414
    X86_AT(c, 0xce48fu);
    push32(c, 0xce494u); x86_call_known(c, 0xca414u, f_000ca414); X86_RET(c, 0xce494u);
    X86_TICK(c, 9);
    // 0ce494  push 7
    X86_AT(c, 0xce494u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0ce496  call 0xca3cc
    X86_AT(c, 0xce496u);
    push32(c, 0xce49bu); x86_call_known(c, 0xca3ccu, f_000ca3cc); X86_RET(c, 0xce49bu);
    X86_TICK(c, 9);
    // 0ce49b  push 0x3254
    X86_AT(c, 0xce49bu);
    { uint32_t v = 0x3254u; push32(c, v); }
    // 0ce4a0  jmp 0xce52a
    X86_AT(c, 0xce4a0u);
    goto L_ce52a;
L_ce4a5:
    X86_TICK(c, 11);
    // 0ce4a5  push 0x3264
    X86_AT(c, 0xce4a5u);
    { uint32_t v = 0x3264u; push32(c, v); }
    // 0ce4aa  push 7
    X86_AT(c, 0xce4aau);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0ce4ac  call 0xc8cdc
    X86_AT(c, 0xce4acu);
    push32(c, 0xce4b1u); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xce4b1u);
    X86_TICK(c, 9);
    // 0ce4b1  push 7
    X86_AT(c, 0xce4b1u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0ce4b3  call 0xca3cc
    X86_AT(c, 0xce4b3u);
    push32(c, 0xce4b8u); x86_call_known(c, 0xca3ccu, f_000ca3cc); X86_RET(c, 0xce4b8u);
    X86_TICK(c, 11);
    // 0ce4b8  push 0x328c
    X86_AT(c, 0xce4b8u);
    { uint32_t v = 0x328Cu; push32(c, v); }
    // 0ce4bd  push 7
    X86_AT(c, 0xce4bdu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0ce4bf  call 0xca414
    X86_AT(c, 0xce4bfu);
    push32(c, 0xce4c4u); x86_call_known(c, 0xca414u, f_000ca414); X86_RET(c, 0xce4c4u);
    X86_TICK(c, 9);
    // 0ce4c4  push 7
    X86_AT(c, 0xce4c4u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0ce4c6  call 0xca3cc
    X86_AT(c, 0xce4c6u);
    push32(c, 0xce4cbu); x86_call_known(c, 0xca3ccu, f_000ca3cc); X86_RET(c, 0xce4cbu);
    X86_TICK(c, 9);
    // 0ce4cb  push 0x32a0
    X86_AT(c, 0xce4cbu);
    { uint32_t v = 0x32A0u; push32(c, v); }
    // 0ce4d0  jmp 0xce52a
    X86_AT(c, 0xce4d0u);
    goto L_ce52a;
L_ce4d2:
    X86_TICK(c, 11);
    // 0ce4d2  push 0x32b0
    X86_AT(c, 0xce4d2u);
    { uint32_t v = 0x32B0u; push32(c, v); }
    // 0ce4d7  push 7
    X86_AT(c, 0xce4d7u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0ce4d9  call 0xc8cdc
    X86_AT(c, 0xce4d9u);
    push32(c, 0xce4deu); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xce4deu);
    X86_TICK(c, 9);
    // 0ce4de  push 7
    X86_AT(c, 0xce4deu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0ce4e0  call 0xca3cc
    X86_AT(c, 0xce4e0u);
    push32(c, 0xce4e5u); x86_call_known(c, 0xca3ccu, f_000ca3cc); X86_RET(c, 0xce4e5u);
    X86_TICK(c, 11);
    // 0ce4e5  push 0x32d8
    X86_AT(c, 0xce4e5u);
    { uint32_t v = 0x32D8u; push32(c, v); }
    // 0ce4ea  push 7
    X86_AT(c, 0xce4eau);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0ce4ec  call 0xca414
    X86_AT(c, 0xce4ecu);
    push32(c, 0xce4f1u); x86_call_known(c, 0xca414u, f_000ca414); X86_RET(c, 0xce4f1u);
    X86_TICK(c, 9);
    // 0ce4f1  push 7
    X86_AT(c, 0xce4f1u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0ce4f3  call 0xca3cc
    X86_AT(c, 0xce4f3u);
    push32(c, 0xce4f8u); x86_call_known(c, 0xca3ccu, f_000ca3cc); X86_RET(c, 0xce4f8u);
    X86_TICK(c, 9);
    // 0ce4f8  push 0x32e8
    X86_AT(c, 0xce4f8u);
    { uint32_t v = 0x32E8u; push32(c, v); }
    // 0ce4fd  jmp 0xce52a
    X86_AT(c, 0xce4fdu);
    goto L_ce52a;
L_ce4ff:
    X86_TICK(c, 11);
    // 0ce4ff  push 0x32fc
    X86_AT(c, 0xce4ffu);
    { uint32_t v = 0x32FCu; push32(c, v); }
    // 0ce504  push 7
    X86_AT(c, 0xce504u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0ce506  call 0xc8cdc
    X86_AT(c, 0xce506u);
    push32(c, 0xce50bu); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xce50bu);
    X86_TICK(c, 9);
    // 0ce50b  push 7
    X86_AT(c, 0xce50bu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0ce50d  call 0xca3cc
    X86_AT(c, 0xce50du);
    push32(c, 0xce512u); x86_call_known(c, 0xca3ccu, f_000ca3cc); X86_RET(c, 0xce512u);
    X86_TICK(c, 11);
    // 0ce512  push 0x3324
    X86_AT(c, 0xce512u);
    { uint32_t v = 0x3324u; push32(c, v); }
    // 0ce517  push 7
    X86_AT(c, 0xce517u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0ce519  call 0xca414
    X86_AT(c, 0xce519u);
    push32(c, 0xce51eu); x86_call_known(c, 0xca414u, f_000ca414); X86_RET(c, 0xce51eu);
    X86_TICK(c, 9);
    // 0ce51e  push 7
    X86_AT(c, 0xce51eu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0ce520  call 0xca3cc
    X86_AT(c, 0xce520u);
    push32(c, 0xce525u); x86_call_known(c, 0xca3ccu, f_000ca3cc); X86_RET(c, 0xce525u);
    X86_TICK(c, 2);
    // 0ce525  push 0x3338
    X86_AT(c, 0xce525u);
    { uint32_t v = 0x3338u; push32(c, v); }
L_ce52a:
    X86_TICK(c, 9);
    // 0ce52a  push 7
    X86_AT(c, 0xce52au);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0ce52c  call 0xca414
    X86_AT(c, 0xce52cu);
    push32(c, 0xce531u); x86_call_known(c, 0xca414u, f_000ca414); X86_RET(c, 0xce531u);
    X86_TICK(c, 2);
    // 0ce531  add esp, 0x20
    X86_AT(c, 0xce531u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x20u, 0, 4); }
L_ce534:
    X86_TICK(c, 9);
    // 0ce534  push 7
    X86_AT(c, 0xce534u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0ce536  call 0xca3cc
    X86_AT(c, 0xce536u);
    push32(c, 0xce53bu); x86_call_known(c, 0xca3ccu, f_000ca3cc); X86_RET(c, 0xce53bu);
    X86_TICK(c, 12);
    // 0ce53b  add esp, 4
    X86_AT(c, 0xce53bu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0ce53e  ret 
    X86_AT(c, 0xce53eu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xce444u, "ran off the end of a function");
}
void f_000ce540(X86Cpu& c) {
    X86_TICK(c, 8);
    // 0ce540  mov edx, dword ptr [esp + 4]
    X86_AT(c, 0xce540u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[4] + 0x4u)));
    // 0ce544  mov ecx, dword ptr [esp + 8]
    X86_AT(c, 0xce544u);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[4] + 0x8u)));
L_ce548:
    X86_TICK(c, 12);
    // 0ce548  cmp byte ptr [edx], 0x20
    X86_AT(c, 0xce548u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[2]))), 0x20u, 0, 1);
    // 0ce54b  jne 0xce550
    X86_AT(c, 0xce54bu);
    if (x86_cc(c, 5)) { goto L_ce550; }
    X86_TICK(c, 9);
    // 0ce54d  inc edx
    X86_AT(c, 0xce54du);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
    // 0ce54e  jmp 0xce548
    X86_AT(c, 0xce54eu);
    X86_POLL(c, 0xce548u); goto L_ce548;
L_ce550:
    X86_TICK(c, 11);
    // 0ce550  mov al, byte ptr [edx]
    X86_AT(c, 0xce550u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[2]))));
    // 0ce552  cmp al, 0x20
    X86_AT(c, 0xce552u);
    (void)x86_sub(c, g8(c, 0), 0x20u, 0, 1);
    // 0ce554  je 0xce55a
    X86_AT(c, 0xce554u);
    if (x86_cc(c, 4)) { goto L_ce55a; }
    X86_TICK(c, 7);
    // 0ce556  and al, al
    X86_AT(c, 0xce556u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & g8(c, 0), 1)); }
    // 0ce558  jne 0xce568
    X86_AT(c, 0xce558u);
    if (x86_cc(c, 5)) { goto L_ce568; }
L_ce55a:
    X86_TICK(c, 11);
    // 0ce55a  mov al, byte ptr [ecx]
    X86_AT(c, 0xce55au);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[1]))));
    // 0ce55c  cmp al, 0x20
    X86_AT(c, 0xce55cu);
    (void)x86_sub(c, g8(c, 0), 0x20u, 0, 1);
    // 0ce55e  je 0xce564
    X86_AT(c, 0xce55eu);
    if (x86_cc(c, 4)) { goto L_ce564; }
    X86_TICK(c, 7);
    // 0ce560  and al, al
    X86_AT(c, 0xce560u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & g8(c, 0), 1)); }
    // 0ce562  jne 0xce56e
    X86_AT(c, 0xce562u);
    if (x86_cc(c, 5)) { goto L_ce56e; }
L_ce564:
    X86_TICK(c, 9);
    // 0ce564  sub eax, eax
    X86_AT(c, 0xce564u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0ce566  jmp 0xce579
    X86_AT(c, 0xce566u);
    goto L_ce579;
L_ce568:
    X86_TICK(c, 15);
    // 0ce568  mov al, byte ptr [edx]
    X86_AT(c, 0xce568u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[2]))));
    // 0ce56a  cmp al, byte ptr [ecx]
    X86_AT(c, 0xce56au);
    (void)x86_sub(c, g8(c, 0), rd8((c.sbase[3] + (uint32_t)(c.r[1]))), 0, 1);
    // 0ce56c  je 0xce575
    X86_AT(c, 0xce56cu);
    if (x86_cc(c, 4)) { goto L_ce575; }
L_ce56e:
    X86_TICK(c, 9);
    // 0ce56e  mov eax, 0xffffffff
    X86_AT(c, 0xce56eu);
    c.r[0] = 0xFFFFFFFFu;
    // 0ce573  jmp 0xce579
    X86_AT(c, 0xce573u);
    goto L_ce579;
L_ce575:
    X86_TICK(c, 11);
    // 0ce575  inc edx
    X86_AT(c, 0xce575u);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
    // 0ce576  inc ecx
    X86_AT(c, 0xce576u);
    { uint32_t v = c.r[1]; c.r[1] = x86_inc(c, v, 4); }
    // 0ce577  jmp 0xce550
    X86_AT(c, 0xce577u);
    X86_POLL(c, 0xce550u); goto L_ce550;
L_ce579:
    X86_TICK(c, 10);
    // 0ce579  ret 
    X86_AT(c, 0xce579u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xce540u, "ran off the end of a function");
}
void f_000ce57c(X86Cpu& c) {
    X86_TICK(c, 21);
    // 0ce57c  push ebp
    X86_AT(c, 0xce57cu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0ce57d  mov ebp, esp
    X86_AT(c, 0xce57du);
    c.r[5] = c.r[4];
    // 0ce57f  sub esp, 0xc
    X86_AT(c, 0xce57fu);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, 0xCu, 0, 4); }
    // 0ce582  push ebx
    X86_AT(c, 0xce582u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0ce583  push esi
    X86_AT(c, 0xce583u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0ce584  push edi
    X86_AT(c, 0xce584u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0ce585  push 7
    X86_AT(c, 0xce585u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0ce587  call 0xca0a0
    X86_AT(c, 0xce587u);
    push32(c, 0xce58cu); x86_call_known(c, 0xca0a0u, f_000ca0a0); X86_RET(c, 0xce58cu);
    X86_TICK(c, 11);
    // 0ce58c  push 0x334c
    X86_AT(c, 0xce58cu);
    { uint32_t v = 0x334Cu; push32(c, v); }
    // 0ce591  push 7
    X86_AT(c, 0xce591u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0ce593  call 0xc8cdc
    X86_AT(c, 0xce593u);
    push32(c, 0xce598u); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xce598u);
    X86_TICK(c, 9);
    // 0ce598  push 7
    X86_AT(c, 0xce598u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0ce59a  call 0xca3cc
    X86_AT(c, 0xce59au);
    push32(c, 0xce59fu); x86_call_known(c, 0xca3ccu, f_000ca3cc); X86_RET(c, 0xce59fu);
    X86_TICK(c, 11);
    // 0ce59f  push 0x3360
    X86_AT(c, 0xce59fu);
    { uint32_t v = 0x3360u; push32(c, v); }
    // 0ce5a4  push 7
    X86_AT(c, 0xce5a4u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0ce5a6  call 0xc8cdc
    X86_AT(c, 0xce5a6u);
    push32(c, 0xce5abu); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xce5abu);
    X86_TICK(c, 15);
    // 0ce5ab  push 0xa
    X86_AT(c, 0xce5abu);
    { uint32_t v = 0xAu; push32(c, v); }
    // 0ce5ad  lea eax, [ebp - 0xc]
    X86_AT(c, 0xce5adu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFF4u);
    // 0ce5b0  push eax
    X86_AT(c, 0xce5b0u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ce5b1  push 7
    X86_AT(c, 0xce5b1u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0ce5b3  call 0xc85e4
    X86_AT(c, 0xce5b3u);
    push32(c, 0xce5b8u); x86_call_known(c, 0xc85e4u, f_000c85e4); X86_RET(c, 0xce5b8u);
    X86_TICK(c, 9);
    // 0ce5b8  add esp, 0x24
    X86_AT(c, 0xce5b8u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x24u, 0, 4); }
    // 0ce5bb  dec eax
    X86_AT(c, 0xce5bbu);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 0ce5bc  jge 0xce5c8
    X86_AT(c, 0xce5bcu);
    if (x86_cc(c, 13)) { goto L_ce5c8; }
    X86_TICK(c, 9);
    // 0ce5be  push 0x3378
    X86_AT(c, 0xce5beu);
    { uint32_t v = 0x3378u; push32(c, v); }
    // 0ce5c3  jmp 0xced84
    X86_AT(c, 0xce5c3u);
    goto L_ced84;
L_ce5c8:
    X86_TICK(c, 9);
    // 0ce5c8  push 7
    X86_AT(c, 0xce5c8u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0ce5ca  call 0xca3cc
    X86_AT(c, 0xce5cau);
    push32(c, 0xce5cfu); x86_call_known(c, 0xca3ccu, f_000ca3cc); X86_RET(c, 0xce5cfu);
    X86_TICK(c, 13);
    // 0ce5cf  push 0x3390
    X86_AT(c, 0xce5cfu);
    { uint32_t v = 0x3390u; push32(c, v); }
    // 0ce5d4  lea eax, [ebp - 0xc]
    X86_AT(c, 0xce5d4u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFF4u);
    // 0ce5d7  push eax
    X86_AT(c, 0xce5d7u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ce5d8  call 0xce540
    X86_AT(c, 0xce5d8u);
    push32(c, 0xce5ddu); x86_call_known(c, 0xce540u, f_000ce540); X86_RET(c, 0xce5ddu);
    X86_TICK(c, 9);
    // 0ce5dd  add esp, 0xc
    X86_AT(c, 0xce5ddu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0ce5e0  and eax, eax
    X86_AT(c, 0xce5e0u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0ce5e2  jne 0xce706
    X86_AT(c, 0xce5e2u);
    if (x86_cc(c, 5)) { goto L_ce706; }
    X86_TICK(c, 16);
    // 0ce5e8  mov eax, dword ptr [0xaaeac]
    X86_AT(c, 0xce5e8u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xAAEACu)));
    // 0ce5ed  cmp dword ptr [eax*4 + 0xb0346], 0
    X86_AT(c, 0xce5edu);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[0] * 4 + 0xB0346u))), 0x0u, 0, 4);
    // 0ce5f5  je 0xce5fb
    X86_AT(c, 0xce5f5u);
    if (x86_cc(c, 4)) { goto L_ce5fb; }
    X86_TICK(c, 7);
    // 0ce5f7  and eax, eax
    X86_AT(c, 0xce5f7u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0ce5f9  jne 0xce61c
    X86_AT(c, 0xce5f9u);
    if (x86_cc(c, 5)) { goto L_ce61c; }
L_ce5fb:
    X86_TICK(c, 2);
    // 0ce5fb  mov edi, 2
    X86_AT(c, 0xce5fbu);
    c.r[7] = 0x2u;
L_ce600:
    X86_TICK(c, 7);
    // 0ce600  cmp edi, 8
    X86_AT(c, 0xce600u);
    (void)x86_sub(c, c.r[7], 0x8u, 0, 4);
    // 0ce603  jg 0xce61c
    X86_AT(c, 0xce603u);
    if (x86_cc(c, 15)) { goto L_ce61c; }
    X86_TICK(c, 12);
    // 0ce605  cmp dword ptr [edi*4 + 0xb0346], 1
    X86_AT(c, 0xce605u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[7] * 4 + 0xB0346u))), 0x1u, 0, 4);
    // 0ce60d  jne 0xce617
    X86_AT(c, 0xce60du);
    if (x86_cc(c, 5)) { goto L_ce617; }
    X86_TICK(c, 9);
    // 0ce60f  mov dword ptr [0xaaeac], edi
    X86_AT(c, 0xce60fu);
    wr32((c.sbase[3] + (uint32_t)(0xAAEACu)), c.r[7]);
    // 0ce615  jmp 0xce61c
    X86_AT(c, 0xce615u);
    goto L_ce61c;
L_ce617:
    X86_TICK(c, 9);
    // 0ce617  add edi, 2
    X86_AT(c, 0xce617u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x2u, 0, 4); }
    // 0ce61a  jmp 0xce600
    X86_AT(c, 0xce61au);
    X86_POLL(c, 0xce600u); goto L_ce600;
L_ce61c:
    X86_TICK(c, 16);
    // 0ce61c  mov eax, dword ptr [0xaaeac]
    X86_AT(c, 0xce61cu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xAAEACu)));
    // 0ce621  cmp dword ptr [eax*4 + 0xb0346], 0
    X86_AT(c, 0xce621u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[0] * 4 + 0xB0346u))), 0x0u, 0, 4);
    // 0ce629  je 0xce62f
    X86_AT(c, 0xce629u);
    if (x86_cc(c, 4)) { goto L_ce62f; }
    X86_TICK(c, 7);
    // 0ce62b  and eax, eax
    X86_AT(c, 0xce62bu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0ce62d  jne 0xce650
    X86_AT(c, 0xce62du);
    if (x86_cc(c, 5)) { goto L_ce650; }
L_ce62f:
    X86_TICK(c, 2);
    // 0ce62f  mov edi, 1
    X86_AT(c, 0xce62fu);
    c.r[7] = 0x1u;
L_ce634:
    X86_TICK(c, 7);
    // 0ce634  cmp edi, 7
    X86_AT(c, 0xce634u);
    (void)x86_sub(c, c.r[7], 0x7u, 0, 4);
    // 0ce637  jg 0xce650
    X86_AT(c, 0xce637u);
    if (x86_cc(c, 15)) { goto L_ce650; }
    X86_TICK(c, 12);
    // 0ce639  cmp dword ptr [edi*4 + 0xb0346], 1
    X86_AT(c, 0xce639u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[7] * 4 + 0xB0346u))), 0x1u, 0, 4);
    // 0ce641  jne 0xce64b
    X86_AT(c, 0xce641u);
    if (x86_cc(c, 5)) { goto L_ce64b; }
    X86_TICK(c, 9);
    // 0ce643  mov dword ptr [0xaaeac], edi
    X86_AT(c, 0xce643u);
    wr32((c.sbase[3] + (uint32_t)(0xAAEACu)), c.r[7]);
    // 0ce649  jmp 0xce650
    X86_AT(c, 0xce649u);
    goto L_ce650;
L_ce64b:
    X86_TICK(c, 9);
    // 0ce64b  add edi, 2
    X86_AT(c, 0xce64bu);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x2u, 0, 4); }
    // 0ce64e  jmp 0xce634
    X86_AT(c, 0xce64eu);
    X86_POLL(c, 0xce634u); goto L_ce634;
L_ce650:
    X86_TICK(c, 16);
    // 0ce650  mov eax, dword ptr [0xaaeac]
    X86_AT(c, 0xce650u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xAAEACu)));
    // 0ce655  cmp dword ptr [eax*4 + 0xb0346], 1
    X86_AT(c, 0xce655u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[0] * 4 + 0xB0346u))), 0x1u, 0, 4);
    // 0ce65d  jne 0xced8c
    X86_AT(c, 0xce65du);
    if (x86_cc(c, 5)) { goto L_ced8c; }
    X86_TICK(c, 9);
    // 0ce663  push 0x3398
    X86_AT(c, 0xce663u);
    { uint32_t v = 0x3398u; push32(c, v); }
    // 0ce668  call 0xcc7bc
    X86_AT(c, 0xce668u);
    push32(c, 0xce66du); x86_call_known(c, 0xcc7bcu, f_000cc7bc); X86_RET(c, 0xce66du);
    X86_TICK(c, 15);
    // 0ce66d  add esp, 4
    X86_AT(c, 0xce66du);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0ce670  mov edx, dword ptr [0xaaeac]
    X86_AT(c, 0xce670u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(0xAAEACu)));
    // 0ce676  dec edx
    X86_AT(c, 0xce676u);
    { uint32_t v = c.r[2]; c.r[2] = x86_dec(c, v, 4); }
    // 0ce677  cmp edx, 7
    X86_AT(c, 0xce677u);
    (void)x86_sub(c, c.r[2], 0x7u, 0, 4);
    // 0ce67a  ja 0xced8c
    X86_AT(c, 0xce67au);
    if (x86_cc(c, 7)) { goto L_ced8c; }
    X86_TICK(c, 7);
    // 0ce680  jmp dword ptr cs:[edx*4 + 0xce688]
    X86_AT(c, 0xce680u);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xCE688u)));
      switch (t) {
      case 0xce6a8u: goto L_ce6a8;
      case 0xce6d2u: goto L_ce6d2;
      default: x86_jump(c, t); return; } }
L_ce6a8:
    X86_TICK(c, 9);
    // 0ce6a8  push 0x33b4
    X86_AT(c, 0xce6a8u);
    { uint32_t v = 0x33B4u; push32(c, v); }
    // 0ce6ad  call 0xcc7bc
    X86_AT(c, 0xce6adu);
    push32(c, 0xce6b2u); x86_call_known(c, 0xcc7bcu, f_000cc7bc); X86_RET(c, 0xce6b2u);
    X86_TICK(c, 22);
    // 0ce6b2  mov eax, 0x31
    X86_AT(c, 0xce6b2u);
    c.r[0] = 0x31u;
    // 0ce6b7  sub eax, dword ptr [0xaaeac]
    X86_AT(c, 0xce6b7u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, rd32((c.sbase[3] + (uint32_t)(0xAAEACu))), 0, 4); }
    // 0ce6bd  push dword ptr [eax*4 + 0xaaeb0]
    X86_AT(c, 0xce6bdu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[0] * 4 + 0xAAEB0u))); push32(c, v); }
    // 0ce6c4  push 7
    X86_AT(c, 0xce6c4u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0ce6c6  call 0xc8cdc
    X86_AT(c, 0xce6c6u);
    push32(c, 0xce6cbu); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xce6cbu);
    X86_TICK(c, 9);
    // 0ce6cb  push 0x33d8
    X86_AT(c, 0xce6cbu);
    { uint32_t v = 0x33D8u; push32(c, v); }
    // 0ce6d0  jmp 0xce6fc
    X86_AT(c, 0xce6d0u);
    goto L_ce6fc;
L_ce6d2:
    X86_TICK(c, 9);
    // 0ce6d2  push 0x33f0
    X86_AT(c, 0xce6d2u);
    { uint32_t v = 0x33F0u; push32(c, v); }
    // 0ce6d7  call 0xcc7bc
    X86_AT(c, 0xce6d7u);
    push32(c, 0xce6dcu); x86_call_known(c, 0xcc7bcu, f_000cc7bc); X86_RET(c, 0xce6dcu);
    X86_TICK(c, 27);
    // 0ce6dc  mov eax, dword ptr [0xaaeac]
    X86_AT(c, 0xce6dcu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xAAEACu)));
    // 0ce6e1  lea eax, [eax + eax*4]
    X86_AT(c, 0xce6e1u);
    c.r[0] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0ce6e4  cdq 
    X86_AT(c, 0xce6e4u);
    c.r[2] = (c.r[0] & 0x80000000u) ? 0xFFFFFFFFu : 0u;
    // 0ce6e5  sub eax, edx
    X86_AT(c, 0xce6e5u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[2], 0, 4); }
    // 0ce6e7  sar eax, 1
    X86_AT(c, 0xce6e7u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 7, v, 0x1u, 4, w); if (w) c.r[0] = r; }
    // 0ce6e9  push dword ptr [eax*4 + 0xb344c]
    X86_AT(c, 0xce6e9u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[0] * 4 + 0xB344Cu))); push32(c, v); }
    // 0ce6f0  push 7
    X86_AT(c, 0xce6f0u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0ce6f2  call 0xc8cdc
    X86_AT(c, 0xce6f2u);
    push32(c, 0xce6f7u); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xce6f7u);
    X86_TICK(c, 2);
    // 0ce6f7  push 0x3414
    X86_AT(c, 0xce6f7u);
    { uint32_t v = 0x3414u; push32(c, v); }
L_ce6fc:
    X86_TICK(c, 7);
    // 0ce6fc  call 0xcc7bc
    X86_AT(c, 0xce6fcu);
    push32(c, 0xce701u); x86_call_known(c, 0xcc7bcu, f_000cc7bc); X86_RET(c, 0xce701u);
    X86_TICK(c, 7);
    // 0ce701  jmp 0xceaf1
    X86_AT(c, 0xce701u);
    goto L_ceaf1;
L_ce706:
    X86_TICK(c, 13);
    // 0ce706  push 0x3424
    X86_AT(c, 0xce706u);
    { uint32_t v = 0x3424u; push32(c, v); }
    // 0ce70b  lea eax, [ebp - 0xc]
    X86_AT(c, 0xce70bu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFF4u);
    // 0ce70e  push eax
    X86_AT(c, 0xce70eu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ce70f  call 0xce540
    X86_AT(c, 0xce70fu);
    push32(c, 0xce714u); x86_call_known(c, 0xce540u, f_000ce540); X86_RET(c, 0xce714u);
    X86_TICK(c, 9);
    // 0ce714  add esp, 8
    X86_AT(c, 0xce714u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0ce717  and eax, eax
    X86_AT(c, 0xce717u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0ce719  jne 0xce734
    X86_AT(c, 0xce719u);
    if (x86_cc(c, 5)) { goto L_ce734; }
    X86_TICK(c, 9);
    // 0ce71b  push 3
    X86_AT(c, 0xce71bu);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0ce71d  call 0xc5ca4
    X86_AT(c, 0xce71du);
    push32(c, 0xce722u); x86_call_known(c, 0xc5ca4u, f_000c5ca4); X86_RET(c, 0xce722u);
    X86_TICK(c, 9);
    // 0ce722  push 0x342c
    X86_AT(c, 0xce722u);
    { uint32_t v = 0x342Cu; push32(c, v); }
    // 0ce727  call 0xcc7bc
    X86_AT(c, 0xce727u);
    push32(c, 0xce72cu); x86_call_known(c, 0xcc7bcu, f_000cc7bc); X86_RET(c, 0xce72cu);
    X86_TICK(c, 9);
    // 0ce72c  add esp, 8
    X86_AT(c, 0xce72cu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0ce72f  jmp 0xced8c
    X86_AT(c, 0xce72fu);
    goto L_ced8c;
L_ce734:
    X86_TICK(c, 13);
    // 0ce734  push 0x3478
    X86_AT(c, 0xce734u);
    { uint32_t v = 0x3478u; push32(c, v); }
    // 0ce739  lea eax, [ebp - 0xc]
    X86_AT(c, 0xce739u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFF4u);
    // 0ce73c  push eax
    X86_AT(c, 0xce73cu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ce73d  call 0xce540
    X86_AT(c, 0xce73du);
    push32(c, 0xce742u); x86_call_known(c, 0xce540u, f_000ce540); X86_RET(c, 0xce742u);
    X86_TICK(c, 9);
    // 0ce742  add esp, 8
    X86_AT(c, 0xce742u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0ce745  and eax, eax
    X86_AT(c, 0xce745u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0ce747  jne 0xce86b
    X86_AT(c, 0xce747u);
    if (x86_cc(c, 5)) { goto L_ce86b; }
    X86_TICK(c, 12);
    // 0ce74d  cmp dword ptr [0xb02fe], 0x270f
    X86_AT(c, 0xce74du);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xB02FEu))), 0x270Fu, 0, 4);
    // 0ce757  jne 0xce86b
    X86_AT(c, 0xce757u);
    if (x86_cc(c, 5)) { goto L_ce86b; }
    X86_TICK(c, 9);
    // 0ce75d  push 0x3480
    X86_AT(c, 0xce75du);
    { uint32_t v = 0x3480u; push32(c, v); }
    // 0ce762  call 0xcc7bc
    X86_AT(c, 0xce762u);
    push32(c, 0xce767u); x86_call_known(c, 0xcc7bcu, f_000cc7bc); X86_RET(c, 0xce767u);
    X86_TICK(c, 9);
    // 0ce767  push 0x3484
    X86_AT(c, 0xce767u);
    { uint32_t v = 0x3484u; push32(c, v); }
    // 0ce76c  call 0xcc7bc
    X86_AT(c, 0xce76cu);
    push32(c, 0xce771u); x86_call_known(c, 0xcc7bcu, f_000cc7bc); X86_RET(c, 0xce771u);
    X86_TICK(c, 9);
    // 0ce771  push 0x14
    X86_AT(c, 0xce771u);
    { uint32_t v = 0x14u; push32(c, v); }
    // 0ce773  call 0xd6660
    X86_AT(c, 0xce773u);
    push32(c, 0xce778u); x86_call_known(c, 0xd6660u, f_000d6660); X86_RET(c, 0xce778u);
    X86_TICK(c, 9);
    // 0ce778  push 0x34a0
    X86_AT(c, 0xce778u);
    { uint32_t v = 0x34A0u; push32(c, v); }
    // 0ce77d  call 0xcc7bc
    X86_AT(c, 0xce77du);
    push32(c, 0xce782u); x86_call_known(c, 0xcc7bcu, f_000cc7bc); X86_RET(c, 0xce782u);
    X86_TICK(c, 9);
    // 0ce782  push 0x14
    X86_AT(c, 0xce782u);
    { uint32_t v = 0x14u; push32(c, v); }
    // 0ce784  call 0xd6660
    X86_AT(c, 0xce784u);
    push32(c, 0xce789u); x86_call_known(c, 0xd6660u, f_000d6660); X86_RET(c, 0xce789u);
    X86_TICK(c, 9);
    // 0ce789  push 0x34cc
    X86_AT(c, 0xce789u);
    { uint32_t v = 0x34CCu; push32(c, v); }
    // 0ce78e  call 0xcc7bc
    X86_AT(c, 0xce78eu);
    push32(c, 0xce793u); x86_call_known(c, 0xcc7bcu, f_000cc7bc); X86_RET(c, 0xce793u);
    X86_TICK(c, 9);
    // 0ce793  push 0x14
    X86_AT(c, 0xce793u);
    { uint32_t v = 0x14u; push32(c, v); }
    // 0ce795  call 0xd6660
    X86_AT(c, 0xce795u);
    push32(c, 0xce79au); x86_call_known(c, 0xd6660u, f_000d6660); X86_RET(c, 0xce79au);
    X86_TICK(c, 9);
    // 0ce79a  push 0x3500
    X86_AT(c, 0xce79au);
    { uint32_t v = 0x3500u; push32(c, v); }
    // 0ce79f  call 0xcc7bc
    X86_AT(c, 0xce79fu);
    push32(c, 0xce7a4u); x86_call_known(c, 0xcc7bcu, f_000cc7bc); X86_RET(c, 0xce7a4u);
    X86_TICK(c, 9);
    // 0ce7a4  push 0x14
    X86_AT(c, 0xce7a4u);
    { uint32_t v = 0x14u; push32(c, v); }
    // 0ce7a6  call 0xd6660
    X86_AT(c, 0xce7a6u);
    push32(c, 0xce7abu); x86_call_known(c, 0xd6660u, f_000d6660); X86_RET(c, 0xce7abu);
    X86_TICK(c, 9);
    // 0ce7ab  push 0x3528
    X86_AT(c, 0xce7abu);
    { uint32_t v = 0x3528u; push32(c, v); }
    // 0ce7b0  call 0xcc7bc
    X86_AT(c, 0xce7b0u);
    push32(c, 0xce7b5u); x86_call_known(c, 0xcc7bcu, f_000cc7bc); X86_RET(c, 0xce7b5u);
    X86_TICK(c, 9);
    // 0ce7b5  push 0x78
    X86_AT(c, 0xce7b5u);
    { uint32_t v = 0x78u; push32(c, v); }
    // 0ce7b7  call 0xd6660
    X86_AT(c, 0xce7b7u);
    push32(c, 0xce7bcu); x86_call_known(c, 0xd6660u, f_000d6660); X86_RET(c, 0xce7bcu);
    X86_TICK(c, 9);
    // 0ce7bc  push 0x354c
    X86_AT(c, 0xce7bcu);
    { uint32_t v = 0x354Cu; push32(c, v); }
    // 0ce7c1  call 0xcc7bc
    X86_AT(c, 0xce7c1u);
    push32(c, 0xce7c6u); x86_call_known(c, 0xcc7bcu, f_000cc7bc); X86_RET(c, 0xce7c6u);
    X86_TICK(c, 9);
    // 0ce7c6  push 0x354e
    X86_AT(c, 0xce7c6u);
    { uint32_t v = 0x354Eu; push32(c, v); }
    // 0ce7cb  call 0xcc7bc
    X86_AT(c, 0xce7cbu);
    push32(c, 0xce7d0u); x86_call_known(c, 0xcc7bcu, f_000cc7bc); X86_RET(c, 0xce7d0u);
    X86_TICK(c, 9);
    // 0ce7d0  push 0x3550
    X86_AT(c, 0xce7d0u);
    { uint32_t v = 0x3550u; push32(c, v); }
    // 0ce7d5  call 0xcc7bc
    X86_AT(c, 0xce7d5u);
    push32(c, 0xce7dau); x86_call_known(c, 0xcc7bcu, f_000cc7bc); X86_RET(c, 0xce7dau);
    X86_TICK(c, 9);
    // 0ce7da  push 0x3552
    X86_AT(c, 0xce7dau);
    { uint32_t v = 0x3552u; push32(c, v); }
    // 0ce7df  call 0xcc7bc
    X86_AT(c, 0xce7dfu);
    push32(c, 0xce7e4u); x86_call_known(c, 0xcc7bcu, f_000cc7bc); X86_RET(c, 0xce7e4u);
    X86_TICK(c, 11);
    // 0ce7e4  add esp, 0x3c
    X86_AT(c, 0xce7e4u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x3Cu, 0, 4); }
    // 0ce7e7  push 0x3554
    X86_AT(c, 0xce7e7u);
    { uint32_t v = 0x3554u; push32(c, v); }
    // 0ce7ec  call 0xcc7bc
    X86_AT(c, 0xce7ecu);
    push32(c, 0xce7f1u); x86_call_known(c, 0xcc7bcu, f_000cc7bc); X86_RET(c, 0xce7f1u);
    X86_TICK(c, 9);
    // 0ce7f1  push 0x3558
    X86_AT(c, 0xce7f1u);
    { uint32_t v = 0x3558u; push32(c, v); }
    // 0ce7f6  call 0xcc7bc
    X86_AT(c, 0xce7f6u);
    push32(c, 0xce7fbu); x86_call_known(c, 0xcc7bcu, f_000cc7bc); X86_RET(c, 0xce7fbu);
    X86_TICK(c, 9);
    // 0ce7fb  push 0x14
    X86_AT(c, 0xce7fbu);
    { uint32_t v = 0x14u; push32(c, v); }
    // 0ce7fd  call 0xd6660
    X86_AT(c, 0xce7fdu);
    push32(c, 0xce802u); x86_call_known(c, 0xd6660u, f_000d6660); X86_RET(c, 0xce802u);
    X86_TICK(c, 9);
    // 0ce802  push 0x3588
    X86_AT(c, 0xce802u);
    { uint32_t v = 0x3588u; push32(c, v); }
    // 0ce807  call 0xcc7bc
    X86_AT(c, 0xce807u);
    push32(c, 0xce80cu); x86_call_known(c, 0xcc7bcu, f_000cc7bc); X86_RET(c, 0xce80cu);
    X86_TICK(c, 9);
    // 0ce80c  push 0x14
    X86_AT(c, 0xce80cu);
    { uint32_t v = 0x14u; push32(c, v); }
    // 0ce80e  call 0xd6660
    X86_AT(c, 0xce80eu);
    push32(c, 0xce813u); x86_call_known(c, 0xd6660u, f_000d6660); X86_RET(c, 0xce813u);
    X86_TICK(c, 9);
    // 0ce813  push 0x35b4
    X86_AT(c, 0xce813u);
    { uint32_t v = 0x35B4u; push32(c, v); }
    // 0ce818  call 0xcc7bc
    X86_AT(c, 0xce818u);
    push32(c, 0xce81du); x86_call_known(c, 0xcc7bcu, f_000cc7bc); X86_RET(c, 0xce81du);
    X86_TICK(c, 9);
    // 0ce81d  push 0x35ee
    X86_AT(c, 0xce81du);
    { uint32_t v = 0x35EEu; push32(c, v); }
    // 0ce822  call 0xcc7bc
    X86_AT(c, 0xce822u);
    push32(c, 0xce827u); x86_call_known(c, 0xcc7bcu, f_000cc7bc); X86_RET(c, 0xce827u);
    X86_TICK(c, 9);
    // 0ce827  push 0x78
    X86_AT(c, 0xce827u);
    { uint32_t v = 0x78u; push32(c, v); }
    // 0ce829  call 0xd6660
    X86_AT(c, 0xce829u);
    push32(c, 0xce82eu); x86_call_known(c, 0xd6660u, f_000d6660); X86_RET(c, 0xce82eu);
    X86_TICK(c, 11);
    // 0ce82e  add esp, 0x20
    X86_AT(c, 0xce82eu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x20u, 0, 4); }
    // 0ce831  push 0x35f0
    X86_AT(c, 0xce831u);
    { uint32_t v = 0x35F0u; push32(c, v); }
    // 0ce836  call 0xcc7bc
    X86_AT(c, 0xce836u);
    push32(c, 0xce83bu); x86_call_known(c, 0xcc7bcu, f_000cc7bc); X86_RET(c, 0xce83bu);
    X86_TICK(c, 9);
    // 0ce83b  push 0x35f2
    X86_AT(c, 0xce83bu);
    { uint32_t v = 0x35F2u; push32(c, v); }
    // 0ce840  call 0xcc7bc
    X86_AT(c, 0xce840u);
    push32(c, 0xce845u); x86_call_known(c, 0xcc7bcu, f_000cc7bc); X86_RET(c, 0xce845u);
    X86_TICK(c, 9);
    // 0ce845  push 0x35f4
    X86_AT(c, 0xce845u);
    { uint32_t v = 0x35F4u; push32(c, v); }
    // 0ce84a  call 0xcc7bc
    X86_AT(c, 0xce84au);
    push32(c, 0xce84fu); x86_call_known(c, 0xcc7bcu, f_000cc7bc); X86_RET(c, 0xce84fu);
    X86_TICK(c, 9);
    // 0ce84f  push 0x35f6
    X86_AT(c, 0xce84fu);
    { uint32_t v = 0x35F6u; push32(c, v); }
    // 0ce854  call 0xcc7bc
    X86_AT(c, 0xce854u);
    push32(c, 0xce859u); x86_call_known(c, 0xcc7bcu, f_000cc7bc); X86_RET(c, 0xce859u);
    X86_TICK(c, 9);
    // 0ce859  push 0x35f8
    X86_AT(c, 0xce859u);
    { uint32_t v = 0x35F8u; push32(c, v); }
    // 0ce85e  call 0xcc7bc
    X86_AT(c, 0xce85eu);
    push32(c, 0xce863u); x86_call_known(c, 0xcc7bcu, f_000cc7bc); X86_RET(c, 0xce863u);
    X86_TICK(c, 9);
    // 0ce863  add esp, 0x14
    X86_AT(c, 0xce863u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x14u, 0, 4); }
    // 0ce866  jmp 0xced8c
    X86_AT(c, 0xce866u);
    goto L_ced8c;
L_ce86b:
    X86_TICK(c, 12);
    // 0ce86b  cmp dword ptr [0xb0e38], 1
    X86_AT(c, 0xce86bu);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xB0E38u))), 0x1u, 0, 4);
    // 0ce872  jne 0xceb82
    X86_AT(c, 0xce872u);
    if (x86_cc(c, 5)) { goto L_ceb82; }
    X86_TICK(c, 13);
    // 0ce878  push 0x35fc
    X86_AT(c, 0xce878u);
    { uint32_t v = 0x35FCu; push32(c, v); }
    // 0ce87d  lea eax, [ebp - 0xc]
    X86_AT(c, 0xce87du);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFF4u);
    // 0ce880  push eax
    X86_AT(c, 0xce880u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ce881  call 0xce540
    X86_AT(c, 0xce881u);
    push32(c, 0xce886u); x86_call_known(c, 0xce540u, f_000ce540); X86_RET(c, 0xce886u);
    X86_TICK(c, 9);
    // 0ce886  add esp, 8
    X86_AT(c, 0xce886u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0ce889  and eax, eax
    X86_AT(c, 0xce889u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0ce88b  jne 0xce8a4
    X86_AT(c, 0xce88bu);
    if (x86_cc(c, 5)) { goto L_ce8a4; }
    X86_TICK(c, 12);
    // 0ce88d  cmp dword ptr [0xb52f8], 5
    X86_AT(c, 0xce88du);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xB52F8u))), 0x5u, 0, 4);
    // 0ce894  jne 0xced8c
    X86_AT(c, 0xce894u);
    if (x86_cc(c, 5)) { goto L_ced8c; }
    X86_TICK(c, 7);
    // 0ce89a  call 0xe319c
    X86_AT(c, 0xce89au);
    push32(c, 0xce89fu); x86_call_known(c, 0xe319cu, f_000e319c); X86_RET(c, 0xce89fu);
    X86_TICK(c, 7);
    // 0ce89f  jmp 0xced8c
    X86_AT(c, 0xce89fu);
    goto L_ced8c;
L_ce8a4:
    X86_TICK(c, 13);
    // 0ce8a4  push 0x3604
    X86_AT(c, 0xce8a4u);
    { uint32_t v = 0x3604u; push32(c, v); }
    // 0ce8a9  lea eax, [ebp - 0xc]
    X86_AT(c, 0xce8a9u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFF4u);
    // 0ce8ac  push eax
    X86_AT(c, 0xce8acu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ce8ad  call 0xce540
    X86_AT(c, 0xce8adu);
    push32(c, 0xce8b2u); x86_call_known(c, 0xce540u, f_000ce540); X86_RET(c, 0xce8b2u);
    X86_TICK(c, 9);
    // 0ce8b2  add esp, 8
    X86_AT(c, 0xce8b2u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0ce8b5  and eax, eax
    X86_AT(c, 0xce8b5u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0ce8b7  jne 0xce8d2
    X86_AT(c, 0xce8b7u);
    if (x86_cc(c, 5)) { goto L_ce8d2; }
    X86_TICK(c, 9);
    // 0ce8b9  mov dword ptr [0xb0322], 0x270f
    X86_AT(c, 0xce8b9u);
    wr32((c.sbase[3] + (uint32_t)(0xB0322u)), 0x270Fu);
    // 0ce8c3  call 0xd351c
    X86_AT(c, 0xce8c3u);
    push32(c, 0xce8c8u); x86_call_known(c, 0xd351cu, f_000d351c); X86_RET(c, 0xce8c8u);
    X86_TICK(c, 9);
    // 0ce8c8  push 0x3608
    X86_AT(c, 0xce8c8u);
    { uint32_t v = 0x3608u; push32(c, v); }
    // 0ce8cd  jmp 0xced84
    X86_AT(c, 0xce8cdu);
    goto L_ced84;
L_ce8d2:
    X86_TICK(c, 13);
    // 0ce8d2  push 0x361c
    X86_AT(c, 0xce8d2u);
    { uint32_t v = 0x361Cu; push32(c, v); }
    // 0ce8d7  lea eax, [ebp - 0xc]
    X86_AT(c, 0xce8d7u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFF4u);
    // 0ce8da  push eax
    X86_AT(c, 0xce8dau);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ce8db  call 0xce540
    X86_AT(c, 0xce8dbu);
    push32(c, 0xce8e0u); x86_call_known(c, 0xce540u, f_000ce540); X86_RET(c, 0xce8e0u);
    X86_TICK(c, 9);
    // 0ce8e0  add esp, 8
    X86_AT(c, 0xce8e0u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0ce8e3  and eax, eax
    X86_AT(c, 0xce8e3u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0ce8e5  jne 0xce900
    X86_AT(c, 0xce8e5u);
    if (x86_cc(c, 5)) { goto L_ce900; }
    X86_TICK(c, 9);
    // 0ce8e7  mov dword ptr [0xb031a], 0x270f
    X86_AT(c, 0xce8e7u);
    wr32((c.sbase[3] + (uint32_t)(0xB031Au)), 0x270Fu);
    // 0ce8f1  call 0xd351c
    X86_AT(c, 0xce8f1u);
    push32(c, 0xce8f6u); x86_call_known(c, 0xd351cu, f_000d351c); X86_RET(c, 0xce8f6u);
    X86_TICK(c, 9);
    // 0ce8f6  push 0x3620
    X86_AT(c, 0xce8f6u);
    { uint32_t v = 0x3620u; push32(c, v); }
    // 0ce8fb  jmp 0xced84
    X86_AT(c, 0xce8fbu);
    goto L_ced84;
L_ce900:
    X86_TICK(c, 13);
    // 0ce900  push 0x3638
    X86_AT(c, 0xce900u);
    { uint32_t v = 0x3638u; push32(c, v); }
    // 0ce905  lea eax, [ebp - 0xc]
    X86_AT(c, 0xce905u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFF4u);
    // 0ce908  push eax
    X86_AT(c, 0xce908u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ce909  call 0xce540
    X86_AT(c, 0xce909u);
    push32(c, 0xce90eu); x86_call_known(c, 0xce540u, f_000ce540); X86_RET(c, 0xce90eu);
    X86_TICK(c, 9);
    // 0ce90e  add esp, 8
    X86_AT(c, 0xce90eu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0ce911  and eax, eax
    X86_AT(c, 0xce911u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0ce913  jne 0xce924
    X86_AT(c, 0xce913u);
    if (x86_cc(c, 5)) { goto L_ce924; }
    X86_TICK(c, 17);
    // 0ce915  movzx esi, byte ptr [0x92494]
    X86_AT(c, 0xce915u);
    c.r[6] = rd8((c.sbase[3] + (uint32_t)(0x92494u)));
    // 0ce91c  push 4
    X86_AT(c, 0xce91cu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ce91e  push esi
    X86_AT(c, 0xce91eu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0ce91f  jmp 0xceae3
    X86_AT(c, 0xce91fu);
    goto L_ceae3;
L_ce924:
    X86_TICK(c, 13);
    // 0ce924  push 0x363c
    X86_AT(c, 0xce924u);
    { uint32_t v = 0x363Cu; push32(c, v); }
    // 0ce929  lea eax, [ebp - 0xc]
    X86_AT(c, 0xce929u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFF4u);
    // 0ce92c  push eax
    X86_AT(c, 0xce92cu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ce92d  call 0xce540
    X86_AT(c, 0xce92du);
    push32(c, 0xce932u); x86_call_known(c, 0xce540u, f_000ce540); X86_RET(c, 0xce932u);
    X86_TICK(c, 9);
    // 0ce932  add esp, 8
    X86_AT(c, 0xce932u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0ce935  and eax, eax
    X86_AT(c, 0xce935u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0ce937  jne 0xce952
    X86_AT(c, 0xce937u);
    if (x86_cc(c, 5)) { goto L_ce952; }
    X86_TICK(c, 9);
    // 0ce939  mov dword ptr [0xb02fe], 0x270f
    X86_AT(c, 0xce939u);
    wr32((c.sbase[3] + (uint32_t)(0xB02FEu)), 0x270Fu);
    // 0ce943  call 0xd351c
    X86_AT(c, 0xce943u);
    push32(c, 0xce948u); x86_call_known(c, 0xd351cu, f_000d351c); X86_RET(c, 0xce948u);
    X86_TICK(c, 9);
    // 0ce948  push 0x3640
    X86_AT(c, 0xce948u);
    { uint32_t v = 0x3640u; push32(c, v); }
    // 0ce94d  jmp 0xced84
    X86_AT(c, 0xce94du);
    goto L_ced84;
L_ce952:
    X86_TICK(c, 13);
    // 0ce952  push 0x365c
    X86_AT(c, 0xce952u);
    { uint32_t v = 0x365Cu; push32(c, v); }
    // 0ce957  lea eax, [ebp - 0xc]
    X86_AT(c, 0xce957u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFF4u);
    // 0ce95a  push eax
    X86_AT(c, 0xce95au);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ce95b  call 0xce540
    X86_AT(c, 0xce95bu);
    push32(c, 0xce960u); x86_call_known(c, 0xce540u, f_000ce540); X86_RET(c, 0xce960u);
    X86_TICK(c, 9);
    // 0ce960  add esp, 8
    X86_AT(c, 0xce960u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0ce963  and eax, eax
    X86_AT(c, 0xce963u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0ce965  jne 0xce974
    X86_AT(c, 0xce965u);
    if (x86_cc(c, 5)) { goto L_ce974; }
    X86_TICK(c, 14);
    // 0ce967  push 6
    X86_AT(c, 0xce967u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0ce969  push dword ptr [0xaa2a0]
    X86_AT(c, 0xce969u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xAA2A0u))); push32(c, v); }
    // 0ce96f  jmp 0xceae3
    X86_AT(c, 0xce96fu);
    goto L_ceae3;
L_ce974:
    X86_TICK(c, 13);
    // 0ce974  push 0x3660
    X86_AT(c, 0xce974u);
    { uint32_t v = 0x3660u; push32(c, v); }
    // 0ce979  lea eax, [ebp - 0xc]
    X86_AT(c, 0xce979u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFF4u);
    // 0ce97c  push eax
    X86_AT(c, 0xce97cu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ce97d  call 0xce540
    X86_AT(c, 0xce97du);
    push32(c, 0xce982u); x86_call_known(c, 0xce540u, f_000ce540); X86_RET(c, 0xce982u);
    X86_TICK(c, 9);
    // 0ce982  add esp, 8
    X86_AT(c, 0xce982u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0ce985  and eax, eax
    X86_AT(c, 0xce985u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0ce987  jne 0xce996
    X86_AT(c, 0xce987u);
    if (x86_cc(c, 5)) { goto L_ce996; }
    X86_TICK(c, 14);
    // 0ce989  push 3
    X86_AT(c, 0xce989u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0ce98b  push dword ptr [0xaa2a8]
    X86_AT(c, 0xce98bu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xAA2A8u))); push32(c, v); }
    // 0ce991  jmp 0xceae3
    X86_AT(c, 0xce991u);
    goto L_ceae3;
L_ce996:
    X86_TICK(c, 13);
    // 0ce996  push 0x3664
    X86_AT(c, 0xce996u);
    { uint32_t v = 0x3664u; push32(c, v); }
    // 0ce99b  lea eax, [ebp - 0xc]
    X86_AT(c, 0xce99bu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFF4u);
    // 0ce99e  push eax
    X86_AT(c, 0xce99eu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ce99f  call 0xce540
    X86_AT(c, 0xce99fu);
    push32(c, 0xce9a4u); x86_call_known(c, 0xce540u, f_000ce540); X86_RET(c, 0xce9a4u);
    X86_TICK(c, 9);
    // 0ce9a4  add esp, 8
    X86_AT(c, 0xce9a4u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0ce9a7  and eax, eax
    X86_AT(c, 0xce9a7u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0ce9a9  jne 0xce9c2
    X86_AT(c, 0xce9a9u);
    if (x86_cc(c, 5)) { goto L_ce9c2; }
    X86_TICK(c, 12);
    // 0ce9ab  cmp dword ptr [0xb52f8], 0
    X86_AT(c, 0xce9abu);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xB52F8u))), 0x0u, 0, 4);
    // 0ce9b2  jne 0xced8c
    X86_AT(c, 0xce9b2u);
    if (x86_cc(c, 5)) { goto L_ced8c; }
    X86_TICK(c, 7);
    // 0ce9b8  call 0xe32c8
    X86_AT(c, 0xce9b8u);
    push32(c, 0xce9bdu); x86_call_known(c, 0xe32c8u, f_000e32c8); X86_RET(c, 0xce9bdu);
    X86_TICK(c, 7);
    // 0ce9bd  jmp 0xced8c
    X86_AT(c, 0xce9bdu);
    goto L_ced8c;
L_ce9c2:
    X86_TICK(c, 13);
    // 0ce9c2  push 0x366c
    X86_AT(c, 0xce9c2u);
    { uint32_t v = 0x366Cu; push32(c, v); }
    // 0ce9c7  lea eax, [ebp - 0xc]
    X86_AT(c, 0xce9c7u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFF4u);
    // 0ce9ca  push eax
    X86_AT(c, 0xce9cau);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ce9cb  call 0xce540
    X86_AT(c, 0xce9cbu);
    push32(c, 0xce9d0u); x86_call_known(c, 0xce540u, f_000ce540); X86_RET(c, 0xce9d0u);
    X86_TICK(c, 9);
    // 0ce9d0  add esp, 8
    X86_AT(c, 0xce9d0u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0ce9d3  and eax, eax
    X86_AT(c, 0xce9d3u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0ce9d5  jne 0xcea1c
    X86_AT(c, 0xce9d5u);
    if (x86_cc(c, 5)) { goto L_cea1c; }
    X86_TICK(c, 11);
    // 0ce9d7  push 0x3670
    X86_AT(c, 0xce9d7u);
    { uint32_t v = 0x3670u; push32(c, v); }
    // 0ce9dc  push 7
    X86_AT(c, 0xce9dcu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0ce9de  call 0xc8cdc
    X86_AT(c, 0xce9deu);
    push32(c, 0xce9e3u); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xce9e3u);
    X86_TICK(c, 16);
    // 0ce9e3  push 3
    X86_AT(c, 0xce9e3u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0ce9e5  push dword ptr [0xb033a]
    X86_AT(c, 0xce9e5u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xB033Au))); push32(c, v); }
    // 0ce9eb  push 7
    X86_AT(c, 0xce9ebu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0ce9ed  call 0xc8cb8
    X86_AT(c, 0xce9edu);
    push32(c, 0xce9f2u); x86_call_known(c, 0xc8cb8u, f_000c8cb8); X86_RET(c, 0xce9f2u);
    X86_TICK(c, 11);
    // 0ce9f2  push 0x367c
    X86_AT(c, 0xce9f2u);
    { uint32_t v = 0x367Cu; push32(c, v); }
    // 0ce9f7  push 7
    X86_AT(c, 0xce9f7u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0ce9f9  call 0xc8cdc
    X86_AT(c, 0xce9f9u);
    push32(c, 0xce9feu); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xce9feu);
    X86_TICK(c, 16);
    // 0ce9fe  push 3
    X86_AT(c, 0xce9feu);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0cea00  push dword ptr [0xb033e]
    X86_AT(c, 0xcea00u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xB033Eu))); push32(c, v); }
    // 0cea06  push 7
    X86_AT(c, 0xcea06u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cea08  call 0xc8cb8
    X86_AT(c, 0xcea08u);
    push32(c, 0xcea0du); x86_call_known(c, 0xc8cb8u, f_000c8cb8); X86_RET(c, 0xcea0du);
    X86_TICK(c, 9);
    // 0cea0d  push 7
    X86_AT(c, 0xcea0du);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cea0f  call 0xca3cc
    X86_AT(c, 0xcea0fu);
    push32(c, 0xcea14u); x86_call_known(c, 0xca3ccu, f_000ca3cc); X86_RET(c, 0xcea14u);
    X86_TICK(c, 9);
    // 0cea14  add esp, 0x2c
    X86_AT(c, 0xcea14u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x2Cu, 0, 4); }
    // 0cea17  jmp 0xced8c
    X86_AT(c, 0xcea17u);
    goto L_ced8c;
L_cea1c:
    X86_TICK(c, 13);
    // 0cea1c  push 0x3688
    X86_AT(c, 0xcea1cu);
    { uint32_t v = 0x3688u; push32(c, v); }
    // 0cea21  lea eax, [ebp - 0xc]
    X86_AT(c, 0xcea21u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFF4u);
    // 0cea24  push eax
    X86_AT(c, 0xcea24u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0cea25  call 0xce540
    X86_AT(c, 0xcea25u);
    push32(c, 0xcea2au); x86_call_known(c, 0xce540u, f_000ce540); X86_RET(c, 0xcea2au);
    X86_TICK(c, 9);
    // 0cea2a  add esp, 8
    X86_AT(c, 0xcea2au);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0cea2d  and eax, eax
    X86_AT(c, 0xcea2du);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0cea2f  jne 0xcea4d
    X86_AT(c, 0xcea2fu);
    if (x86_cc(c, 5)) { goto L_cea4d; }
    X86_TICK(c, 12);
    // 0cea31  cmp dword ptr [0xb52f8], 3
    X86_AT(c, 0xcea31u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xB52F8u))), 0x3u, 0, 4);
    // 0cea38  jne 0xced8c
    X86_AT(c, 0xcea38u);
    if (x86_cc(c, 5)) { goto L_ced8c; }
    X86_TICK(c, 9);
    // 0cea3e  mov dword ptr [0xb2300], 0
    X86_AT(c, 0xcea3eu);
    wr32((c.sbase[3] + (uint32_t)(0xB2300u)), 0x0u);
    // 0cea48  jmp 0xced8c
    X86_AT(c, 0xcea48u);
    goto L_ced8c;
L_cea4d:
    X86_TICK(c, 13);
    // 0cea4d  push 0x3690
    X86_AT(c, 0xcea4du);
    { uint32_t v = 0x3690u; push32(c, v); }
    // 0cea52  lea eax, [ebp - 0xc]
    X86_AT(c, 0xcea52u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFF4u);
    // 0cea55  push eax
    X86_AT(c, 0xcea55u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0cea56  call 0xce540
    X86_AT(c, 0xcea56u);
    push32(c, 0xcea5bu); x86_call_known(c, 0xce540u, f_000ce540); X86_RET(c, 0xcea5bu);
    X86_TICK(c, 9);
    // 0cea5b  add esp, 8
    X86_AT(c, 0xcea5bu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0cea5e  and eax, eax
    X86_AT(c, 0xcea5eu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0cea60  jne 0xcea88
    X86_AT(c, 0xcea60u);
    if (x86_cc(c, 5)) { goto L_cea88; }
    X86_TICK(c, 12);
    // 0cea62  cmp dword ptr [0xb52f8], 0
    X86_AT(c, 0xcea62u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xB52F8u))), 0x0u, 0, 4);
    // 0cea69  jne 0xced8c
    X86_AT(c, 0xcea69u);
    if (x86_cc(c, 5)) { goto L_ced8c; }
    X86_TICK(c, 13);
    // 0cea6f  mov eax, 0x3e8
    X86_AT(c, 0xcea6fu);
    c.r[0] = 0x3E8u;
    // 0cea74  mov dword ptr [0xb042e], eax
    X86_AT(c, 0xcea74u);
    wr32((c.sbase[3] + (uint32_t)(0xB042Eu)), c.r[0]);
    // 0cea79  mov dword ptr [0xb0432], eax
    X86_AT(c, 0xcea79u);
    wr32((c.sbase[3] + (uint32_t)(0xB0432u)), c.r[0]);
    // 0cea7e  call 0xe0c0c
    X86_AT(c, 0xcea7eu);
    push32(c, 0xcea83u); x86_call_known(c, 0xe0c0cu, f_000e0c0c); X86_RET(c, 0xcea83u);
    X86_TICK(c, 7);
    // 0cea83  jmp 0xced8c
    X86_AT(c, 0xcea83u);
    goto L_ced8c;
L_cea88:
    X86_TICK(c, 13);
    // 0cea88  push 0x3694
    X86_AT(c, 0xcea88u);
    { uint32_t v = 0x3694u; push32(c, v); }
    // 0cea8d  lea eax, [ebp - 0xc]
    X86_AT(c, 0xcea8du);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFF4u);
    // 0cea90  push eax
    X86_AT(c, 0xcea90u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0cea91  call 0xce540
    X86_AT(c, 0xcea91u);
    push32(c, 0xcea96u); x86_call_known(c, 0xce540u, f_000ce540); X86_RET(c, 0xcea96u);
    X86_TICK(c, 9);
    // 0cea96  add esp, 8
    X86_AT(c, 0xcea96u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0cea99  and eax, eax
    X86_AT(c, 0xcea99u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0cea9b  jne 0xceaa7
    X86_AT(c, 0xcea9bu);
    if (x86_cc(c, 5)) { goto L_ceaa7; }
    X86_TICK(c, 14);
    // 0cea9d  push 3
    X86_AT(c, 0xcea9du);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0cea9f  push dword ptr [0x4319c]
    X86_AT(c, 0xcea9fu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0x4319Cu))); push32(c, v); }
    // 0ceaa5  jmp 0xceae3
    X86_AT(c, 0xceaa5u);
    goto L_ceae3;
L_ceaa7:
    X86_TICK(c, 13);
    // 0ceaa7  push 0x3698
    X86_AT(c, 0xceaa7u);
    { uint32_t v = 0x3698u; push32(c, v); }
    // 0ceaac  lea eax, [ebp - 0xc]
    X86_AT(c, 0xceaacu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFF4u);
    // 0ceaaf  push eax
    X86_AT(c, 0xceaafu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ceab0  call 0xce540
    X86_AT(c, 0xceab0u);
    push32(c, 0xceab5u); x86_call_known(c, 0xce540u, f_000ce540); X86_RET(c, 0xceab5u);
    X86_TICK(c, 9);
    // 0ceab5  add esp, 8
    X86_AT(c, 0xceab5u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0ceab8  and eax, eax
    X86_AT(c, 0xceab8u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0ceaba  jne 0xceac6
    X86_AT(c, 0xceabau);
    if (x86_cc(c, 5)) { goto L_ceac6; }
    X86_TICK(c, 14);
    // 0ceabc  push 6
    X86_AT(c, 0xceabcu);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0ceabe  push dword ptr [0xaa2dc]
    X86_AT(c, 0xceabeu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xAA2DCu))); push32(c, v); }
    // 0ceac4  jmp 0xceae3
    X86_AT(c, 0xceac4u);
    goto L_ceae3;
L_ceac6:
    X86_TICK(c, 13);
    // 0ceac6  push 0x369c
    X86_AT(c, 0xceac6u);
    { uint32_t v = 0x369Cu; push32(c, v); }
    // 0ceacb  lea eax, [ebp - 0xc]
    X86_AT(c, 0xceacbu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFF4u);
    // 0ceace  push eax
    X86_AT(c, 0xceaceu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ceacf  call 0xce540
    X86_AT(c, 0xceacfu);
    push32(c, 0xcead4u); x86_call_known(c, 0xce540u, f_000ce540); X86_RET(c, 0xcead4u);
    X86_TICK(c, 9);
    // 0cead4  add esp, 8
    X86_AT(c, 0xcead4u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0cead7  and eax, eax
    X86_AT(c, 0xcead7u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0cead9  jne 0xceaf9
    X86_AT(c, 0xcead9u);
    if (x86_cc(c, 5)) { goto L_ceaf9; }
    X86_TICK(c, 7);
    // 0ceadb  push 3
    X86_AT(c, 0xceadbu);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0ceadd  push dword ptr [0xaa2ac]
    X86_AT(c, 0xceaddu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xAA2ACu))); push32(c, v); }
L_ceae3:
    X86_TICK(c, 9);
    // 0ceae3  push 7
    X86_AT(c, 0xceae3u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0ceae5  call 0xc8cb8
    X86_AT(c, 0xceae5u);
    push32(c, 0xceaeau); x86_call_known(c, 0xc8cb8u, f_000c8cb8); X86_RET(c, 0xceaeau);
    X86_TICK(c, 9);
    // 0ceaea  push 7
    X86_AT(c, 0xceaeau);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0ceaec  call 0xca3cc
    X86_AT(c, 0xceaecu);
    push32(c, 0xceaf1u); x86_call_known(c, 0xca3ccu, f_000ca3cc); X86_RET(c, 0xceaf1u);
L_ceaf1:
    X86_TICK(c, 9);
    // 0ceaf1  add esp, 0x10
    X86_AT(c, 0xceaf1u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0ceaf4  jmp 0xced8c
    X86_AT(c, 0xceaf4u);
    goto L_ced8c;
L_ceaf9:
    X86_TICK(c, 13);
    // 0ceaf9  push 0x36a0
    X86_AT(c, 0xceaf9u);
    { uint32_t v = 0x36A0u; push32(c, v); }
    // 0ceafe  lea eax, [ebp - 0xc]
    X86_AT(c, 0xceafeu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFF4u);
    // 0ceb01  push eax
    X86_AT(c, 0xceb01u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ceb02  call 0xce540
    X86_AT(c, 0xceb02u);
    push32(c, 0xceb07u); x86_call_known(c, 0xce540u, f_000ce540); X86_RET(c, 0xceb07u);
    X86_TICK(c, 9);
    // 0ceb07  add esp, 8
    X86_AT(c, 0xceb07u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0ceb0a  and eax, eax
    X86_AT(c, 0xceb0au);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0ceb0c  jne 0xceb57
    X86_AT(c, 0xceb0cu);
    if (x86_cc(c, 5)) { goto L_ceb57; }
    X86_TICK(c, 7);
    // 0ceb0e  call 0xce428
    X86_AT(c, 0xceb0eu);
    push32(c, 0xceb13u); x86_call_known(c, 0xce428u, f_000ce428); X86_RET(c, 0xceb13u);
    X86_TICK(c, 23);
    // 0ceb13  inc dword ptr [0xb03ce]
    X86_AT(c, 0xceb13u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xB03CEu)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0ceb19  inc dword ptr [0xb038e]
    X86_AT(c, 0xceb19u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xB038Eu)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0ceb1f  mov dword ptr [0xb0326], 0xf
    X86_AT(c, 0xceb1fu);
    wr32((c.sbase[3] + (uint32_t)(0xB0326u)), 0xFu);
    // 0ceb29  mov dword ptr [0xb032e], 5
    X86_AT(c, 0xceb29u);
    wr32((c.sbase[3] + (uint32_t)(0xB032Eu)), 0x5u);
    // 0ceb33  call 0xd351c
    X86_AT(c, 0xceb33u);
    push32(c, 0xceb38u); x86_call_known(c, 0xd351cu, f_000d351c); X86_RET(c, 0xceb38u);
    X86_TICK(c, 12);
    // 0ceb38  cmp dword ptr [0xb52f8], 5
    X86_AT(c, 0xceb38u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xB52F8u))), 0x5u, 0, 4);
    // 0ceb3f  je 0xceb48
    X86_AT(c, 0xceb3fu);
    if (x86_cc(c, 4)) { goto L_ceb48; }
    X86_TICK(c, 7);
    // 0ceb41  call 0xcc700
    X86_AT(c, 0xceb41u);
    push32(c, 0xceb46u); x86_call_known(c, 0xcc700u, f_000cc700); X86_RET(c, 0xceb46u);
    X86_TICK(c, 7);
    // 0ceb46  jmp 0xceb4d
    X86_AT(c, 0xceb46u);
    goto L_ceb4d;
L_ceb48:
    X86_TICK(c, 7);
    // 0ceb48  call 0xe2a34
    X86_AT(c, 0xceb48u);
    push32(c, 0xceb4du); x86_call_known(c, 0xe2a34u, f_000e2a34); X86_RET(c, 0xceb4du);
L_ceb4d:
    X86_TICK(c, 9);
    // 0ceb4d  push 0x36a8
    X86_AT(c, 0xceb4du);
    { uint32_t v = 0x36A8u; push32(c, v); }
    // 0ceb52  jmp 0xced84
    X86_AT(c, 0xceb52u);
    goto L_ced84;
L_ceb57:
    X86_TICK(c, 13);
    // 0ceb57  push 0x36d4
    X86_AT(c, 0xceb57u);
    { uint32_t v = 0x36D4u; push32(c, v); }
    // 0ceb5c  lea eax, [ebp - 0xc]
    X86_AT(c, 0xceb5cu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFF4u);
    // 0ceb5f  push eax
    X86_AT(c, 0xceb5fu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ceb60  call 0xce540
    X86_AT(c, 0xceb60u);
    push32(c, 0xceb65u); x86_call_known(c, 0xce540u, f_000ce540); X86_RET(c, 0xceb65u);
    X86_TICK(c, 9);
    // 0ceb65  add esp, 8
    X86_AT(c, 0xceb65u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0ceb68  and eax, eax
    X86_AT(c, 0xceb68u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0ceb6a  jne 0xceb82
    X86_AT(c, 0xceb6au);
    if (x86_cc(c, 5)) { goto L_ceb82; }
    X86_TICK(c, 16);
    // 0ceb6c  mov dword ptr [0xb0e38], 0
    X86_AT(c, 0xceb6cu);
    wr32((c.sbase[3] + (uint32_t)(0xB0E38u)), 0x0u);
    // 0ceb76  add dword ptr [0xb031a], 0x1388
    X86_AT(c, 0xceb76u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xB031Au)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0x1388u, 0, 4)); }
    // 0ceb80  jmp 0xcebdb
    X86_AT(c, 0xceb80u);
    goto L_cebdb;
L_ceb82:
    X86_TICK(c, 13);
    // 0ceb82  push 0x36dc
    X86_AT(c, 0xceb82u);
    { uint32_t v = 0x36DCu; push32(c, v); }
    // 0ceb87  lea eax, [ebp - 0xc]
    X86_AT(c, 0xceb87u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFF4u);
    // 0ceb8a  push eax
    X86_AT(c, 0xceb8au);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ceb8b  call 0xce540
    X86_AT(c, 0xceb8bu);
    push32(c, 0xceb90u); x86_call_known(c, 0xce540u, f_000ce540); X86_RET(c, 0xceb90u);
    X86_TICK(c, 9);
    // 0ceb90  add esp, 8
    X86_AT(c, 0xceb90u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0ceb93  and eax, eax
    X86_AT(c, 0xceb93u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0ceb95  jne 0xcebe5
    X86_AT(c, 0xceb95u);
    if (x86_cc(c, 5)) { goto L_cebe5; }
    X86_TICK(c, 11);
    // 0ceb97  mov eax, dword ptr [0xb0322]
    X86_AT(c, 0xceb97u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xB0322u)));
    // 0ceb9c  cmp eax, 0x3e8
    X86_AT(c, 0xceb9cu);
    (void)x86_sub(c, c.r[0], 0x3E8u, 0, 4);
    // 0ceba1  jne 0xced8c
    X86_AT(c, 0xceba1u);
    if (x86_cc(c, 5)) { goto L_ced8c; }
    X86_TICK(c, 12);
    // 0ceba7  cmp dword ptr [0xb031a], 0x3e8
    X86_AT(c, 0xceba7u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xB031Au))), 0x3E8u, 0, 4);
    // 0cebb1  jne 0xced8c
    X86_AT(c, 0xcebb1u);
    if (x86_cc(c, 5)) { goto L_ced8c; }
    X86_TICK(c, 12);
    // 0cebb7  cmp dword ptr [0xb02fe], 0x3e8
    X86_AT(c, 0xcebb7u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xB02FEu))), 0x3E8u, 0, 4);
    // 0cebc1  jne 0xced8c
    X86_AT(c, 0xcebc1u);
    if (x86_cc(c, 5)) { goto L_ced8c; }
    X86_TICK(c, 9);
    // 0cebc7  mov dword ptr [0xb0e38], 1
    X86_AT(c, 0xcebc7u);
    wr32((c.sbase[3] + (uint32_t)(0xB0E38u)), 0x1u);
    // 0cebd1  add dword ptr [0xb0322], 0x1388
    X86_AT(c, 0xcebd1u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xB0322u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0x1388u, 0, 4)); }
L_cebdb:
    X86_TICK(c, 7);
    // 0cebdb  call 0xcc6cc
    X86_AT(c, 0xcebdbu);
    push32(c, 0xcebe0u); x86_call_known(c, 0xcc6ccu, f_000cc6cc); X86_RET(c, 0xcebe0u);
    X86_TICK(c, 7);
    // 0cebe0  jmp 0xced8c
    X86_AT(c, 0xcebe0u);
    goto L_ced8c;
L_cebe5:
    X86_TICK(c, 13);
    // 0cebe5  push 0x36e0
    X86_AT(c, 0xcebe5u);
    { uint32_t v = 0x36E0u; push32(c, v); }
    // 0cebea  lea eax, [ebp - 0xc]
    X86_AT(c, 0xcebeau);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFF4u);
    // 0cebed  push eax
    X86_AT(c, 0xcebedu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0cebee  call 0xce540
    X86_AT(c, 0xcebeeu);
    push32(c, 0xcebf3u); x86_call_known(c, 0xce540u, f_000ce540); X86_RET(c, 0xcebf3u);
    X86_TICK(c, 9);
    // 0cebf3  add esp, 8
    X86_AT(c, 0xcebf3u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0cebf6  and eax, eax
    X86_AT(c, 0xcebf6u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0cebf8  jne 0xcec04
    X86_AT(c, 0xcebf8u);
    if (x86_cc(c, 5)) { goto L_cec04; }
    X86_TICK(c, 9);
    // 0cebfa  push 0x36e8
    X86_AT(c, 0xcebfau);
    { uint32_t v = 0x36E8u; push32(c, v); }
    // 0cebff  jmp 0xced84
    X86_AT(c, 0xcebffu);
    goto L_ced84;
L_cec04:
    X86_TICK(c, 13);
    // 0cec04  push 0x3714
    X86_AT(c, 0xcec04u);
    { uint32_t v = 0x3714u; push32(c, v); }
    // 0cec09  lea eax, [ebp - 0xc]
    X86_AT(c, 0xcec09u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFF4u);
    // 0cec0c  push eax
    X86_AT(c, 0xcec0cu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0cec0d  call 0xce540
    X86_AT(c, 0xcec0du);
    push32(c, 0xcec12u); x86_call_known(c, 0xce540u, f_000ce540); X86_RET(c, 0xcec12u);
    X86_TICK(c, 9);
    // 0cec12  add esp, 8
    X86_AT(c, 0xcec12u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0cec15  and eax, eax
    X86_AT(c, 0xcec15u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0cec17  jne 0xcec23
    X86_AT(c, 0xcec17u);
    if (x86_cc(c, 5)) { goto L_cec23; }
    X86_TICK(c, 9);
    // 0cec19  push 0x371c
    X86_AT(c, 0xcec19u);
    { uint32_t v = 0x371Cu; push32(c, v); }
    // 0cec1e  jmp 0xced84
    X86_AT(c, 0xcec1eu);
    goto L_ced84;
L_cec23:
    X86_TICK(c, 13);
    // 0cec23  push 0x3738
    X86_AT(c, 0xcec23u);
    { uint32_t v = 0x3738u; push32(c, v); }
    // 0cec28  lea eax, [ebp - 0xc]
    X86_AT(c, 0xcec28u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFF4u);
    // 0cec2b  push eax
    X86_AT(c, 0xcec2bu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0cec2c  call 0xce540
    X86_AT(c, 0xcec2cu);
    push32(c, 0xcec31u); x86_call_known(c, 0xce540u, f_000ce540); X86_RET(c, 0xcec31u);
    X86_TICK(c, 9);
    // 0cec31  add esp, 8
    X86_AT(c, 0xcec31u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0cec34  and eax, eax
    X86_AT(c, 0xcec34u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0cec36  jne 0xcec42
    X86_AT(c, 0xcec36u);
    if (x86_cc(c, 5)) { goto L_cec42; }
    X86_TICK(c, 9);
    // 0cec38  push 0x373c
    X86_AT(c, 0xcec38u);
    { uint32_t v = 0x373Cu; push32(c, v); }
    // 0cec3d  jmp 0xced84
    X86_AT(c, 0xcec3du);
    goto L_ced84;
L_cec42:
    X86_TICK(c, 13);
    // 0cec42  push 0x3764
    X86_AT(c, 0xcec42u);
    { uint32_t v = 0x3764u; push32(c, v); }
    // 0cec47  lea eax, [ebp - 0xc]
    X86_AT(c, 0xcec47u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFF4u);
    // 0cec4a  push eax
    X86_AT(c, 0xcec4au);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0cec4b  call 0xce540
    X86_AT(c, 0xcec4bu);
    push32(c, 0xcec50u); x86_call_known(c, 0xce540u, f_000ce540); X86_RET(c, 0xcec50u);
    X86_TICK(c, 9);
    // 0cec50  add esp, 8
    X86_AT(c, 0xcec50u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0cec53  and eax, eax
    X86_AT(c, 0xcec53u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0cec55  jne 0xcec61
    X86_AT(c, 0xcec55u);
    if (x86_cc(c, 5)) { goto L_cec61; }
    X86_TICK(c, 9);
    // 0cec57  push 0x376c
    X86_AT(c, 0xcec57u);
    { uint32_t v = 0x376Cu; push32(c, v); }
    // 0cec5c  jmp 0xced84
    X86_AT(c, 0xcec5cu);
    goto L_ced84;
L_cec61:
    X86_TICK(c, 13);
    // 0cec61  push 0x379c
    X86_AT(c, 0xcec61u);
    { uint32_t v = 0x379Cu; push32(c, v); }
    // 0cec66  lea eax, [ebp - 0xc]
    X86_AT(c, 0xcec66u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFF4u);
    // 0cec69  push eax
    X86_AT(c, 0xcec69u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0cec6a  call 0xce540
    X86_AT(c, 0xcec6au);
    push32(c, 0xcec6fu); x86_call_known(c, 0xce540u, f_000ce540); X86_RET(c, 0xcec6fu);
    X86_TICK(c, 9);
    // 0cec6f  add esp, 8
    X86_AT(c, 0xcec6fu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0cec72  and eax, eax
    X86_AT(c, 0xcec72u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0cec74  jne 0xcec80
    X86_AT(c, 0xcec74u);
    if (x86_cc(c, 5)) { goto L_cec80; }
    X86_TICK(c, 9);
    // 0cec76  push 0x37a4
    X86_AT(c, 0xcec76u);
    { uint32_t v = 0x37A4u; push32(c, v); }
    // 0cec7b  jmp 0xced84
    X86_AT(c, 0xcec7bu);
    goto L_ced84;
L_cec80:
    X86_TICK(c, 13);
    // 0cec80  push 0x37d0
    X86_AT(c, 0xcec80u);
    { uint32_t v = 0x37D0u; push32(c, v); }
    // 0cec85  lea eax, [ebp - 0xc]
    X86_AT(c, 0xcec85u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFF4u);
    // 0cec88  push eax
    X86_AT(c, 0xcec88u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0cec89  call 0xce540
    X86_AT(c, 0xcec89u);
    push32(c, 0xcec8eu); x86_call_known(c, 0xce540u, f_000ce540); X86_RET(c, 0xcec8eu);
    X86_TICK(c, 9);
    // 0cec8e  add esp, 8
    X86_AT(c, 0xcec8eu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0cec91  and eax, eax
    X86_AT(c, 0xcec91u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0cec93  jne 0xcec9f
    X86_AT(c, 0xcec93u);
    if (x86_cc(c, 5)) { goto L_cec9f; }
    X86_TICK(c, 9);
    // 0cec95  push 0x37d8
    X86_AT(c, 0xcec95u);
    { uint32_t v = 0x37D8u; push32(c, v); }
    // 0cec9a  jmp 0xced84
    X86_AT(c, 0xcec9au);
    goto L_ced84;
L_cec9f:
    X86_TICK(c, 13);
    // 0cec9f  push 0x3804
    X86_AT(c, 0xcec9fu);
    { uint32_t v = 0x3804u; push32(c, v); }
    // 0ceca4  lea eax, [ebp - 0xc]
    X86_AT(c, 0xceca4u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFF4u);
    // 0ceca7  push eax
    X86_AT(c, 0xceca7u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ceca8  call 0xce540
    X86_AT(c, 0xceca8u);
    push32(c, 0xcecadu); x86_call_known(c, 0xce540u, f_000ce540); X86_RET(c, 0xcecadu);
    X86_TICK(c, 9);
    // 0cecad  add esp, 8
    X86_AT(c, 0xcecadu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0cecb0  and eax, eax
    X86_AT(c, 0xcecb0u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0cecb2  jne 0xcecbe
    X86_AT(c, 0xcecb2u);
    if (x86_cc(c, 5)) { goto L_cecbe; }
    X86_TICK(c, 7);
    // 0cecb4  call 0xc74dc
    X86_AT(c, 0xcecb4u);
    push32(c, 0xcecb9u); x86_call_known(c, 0xc74dcu, f_000c74dc); X86_RET(c, 0xcecb9u);
    X86_TICK(c, 7);
    // 0cecb9  jmp 0xced8c
    X86_AT(c, 0xcecb9u);
    goto L_ced8c;
L_cecbe:
    X86_TICK(c, 13);
    // 0cecbe  push 0x380c
    X86_AT(c, 0xcecbeu);
    { uint32_t v = 0x380Cu; push32(c, v); }
    // 0cecc3  lea eax, [ebp - 0xc]
    X86_AT(c, 0xcecc3u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFF4u);
    // 0cecc6  push eax
    X86_AT(c, 0xcecc6u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0cecc7  call 0xce540
    X86_AT(c, 0xcecc7u);
    push32(c, 0xcecccu); x86_call_known(c, 0xce540u, f_000ce540); X86_RET(c, 0xcecccu);
    X86_TICK(c, 9);
    // 0ceccc  add esp, 8
    X86_AT(c, 0xcecccu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0ceccf  and eax, eax
    X86_AT(c, 0xceccfu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0cecd1  jne 0xcecdd
    X86_AT(c, 0xcecd1u);
    if (x86_cc(c, 5)) { goto L_cecdd; }
    X86_TICK(c, 7);
    // 0cecd3  call 0xc7430
    X86_AT(c, 0xcecd3u);
    push32(c, 0xcecd8u); x86_call_known(c, 0xc7430u, f_000c7430); X86_RET(c, 0xcecd8u);
    X86_TICK(c, 7);
    // 0cecd8  jmp 0xced8c
    X86_AT(c, 0xcecd8u);
    goto L_ced8c;
L_cecdd:
    X86_TICK(c, 13);
    // 0cecdd  push 0x3814
    X86_AT(c, 0xcecddu);
    { uint32_t v = 0x3814u; push32(c, v); }
    // 0cece2  lea ebx, [ebp - 0xc]
    X86_AT(c, 0xcece2u);
    c.r[3] = (uint32_t)(c.r[5] + 0xFFFFFFF4u);
    // 0cece5  push ebx
    X86_AT(c, 0xcece5u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0cece6  call 0xce540
    X86_AT(c, 0xcece6u);
    push32(c, 0xcecebu); x86_call_known(c, 0xce540u, f_000ce540); X86_RET(c, 0xcecebu);
    X86_TICK(c, 9);
    // 0ceceb  add esp, 8
    X86_AT(c, 0xcecebu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0cecee  and eax, eax
    X86_AT(c, 0xceceeu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0cecf0  je 0xced04
    X86_AT(c, 0xcecf0u);
    if (x86_cc(c, 4)) { goto L_ced04; }
    X86_TICK(c, 11);
    // 0cecf2  push 0x381c
    X86_AT(c, 0xcecf2u);
    { uint32_t v = 0x381Cu; push32(c, v); }
    // 0cecf7  push ebx
    X86_AT(c, 0xcecf7u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0cecf8  call 0xce540
    X86_AT(c, 0xcecf8u);
    push32(c, 0xcecfdu); x86_call_known(c, 0xce540u, f_000ce540); X86_RET(c, 0xcecfdu);
    X86_TICK(c, 9);
    // 0cecfd  add esp, 8
    X86_AT(c, 0xcecfdu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0ced00  and eax, eax
    X86_AT(c, 0xced00u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0ced02  jne 0xced0e
    X86_AT(c, 0xced02u);
    if (x86_cc(c, 5)) { goto L_ced0e; }
L_ced04:
    X86_TICK(c, 7);
    // 0ced04  call 0xce444
    X86_AT(c, 0xced04u);
    push32(c, 0xced09u); x86_call_known(c, 0xce444u, f_000ce444); X86_RET(c, 0xced09u);
    X86_TICK(c, 7);
    // 0ced09  jmp 0xced8c
    X86_AT(c, 0xced09u);
    goto L_ced8c;
L_ced0e:
    X86_TICK(c, 13);
    // 0ced0e  push 0x3820
    X86_AT(c, 0xced0eu);
    { uint32_t v = 0x3820u; push32(c, v); }
    // 0ced13  lea eax, [ebp - 0xc]
    X86_AT(c, 0xced13u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFF4u);
    // 0ced16  push eax
    X86_AT(c, 0xced16u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ced17  call 0xce540
    X86_AT(c, 0xced17u);
    push32(c, 0xced1cu); x86_call_known(c, 0xce540u, f_000ce540); X86_RET(c, 0xced1cu);
    X86_TICK(c, 9);
    // 0ced1c  add esp, 8
    X86_AT(c, 0xced1cu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0ced1f  and eax, eax
    X86_AT(c, 0xced1fu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0ced21  jne 0xced7f
    X86_AT(c, 0xced21u);
    if (x86_cc(c, 5)) { goto L_ced7f; }
    X86_TICK(c, 9);
    // 0ced23  push 0x3828
    X86_AT(c, 0xced23u);
    { uint32_t v = 0x3828u; push32(c, v); }
    // 0ced28  call 0xcc7bc
    X86_AT(c, 0xced28u);
    push32(c, 0xced2du); x86_call_known(c, 0xcc7bcu, f_000cc7bc); X86_RET(c, 0xced2du);
    X86_TICK(c, 15);
    // 0ced2d  add esp, 4
    X86_AT(c, 0xced2du);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0ced30  mov edx, dword ptr [0xb0e38]
    X86_AT(c, 0xced30u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(0xB0E38u)));
    // 0ced36  dec edx
    X86_AT(c, 0xced36u);
    { uint32_t v = c.r[2]; c.r[2] = x86_dec(c, v, 4); }
    // 0ced37  cmp edx, 3
    X86_AT(c, 0xced37u);
    (void)x86_sub(c, c.r[2], 0x3u, 0, 4);
    // 0ced3a  ja 0xced76
    X86_AT(c, 0xced3au);
    if (x86_cc(c, 7)) { goto L_ced76; }
    X86_TICK(c, 7);
    // 0ced3c  jmp dword ptr cs:[edx*4 + 0xced44]
    X86_AT(c, 0xced3cu);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xCED44u)));
      switch (t) {
      case 0xced54u: goto L_ced54;
      case 0xced5bu: goto L_ced5b;
      case 0xced62u: goto L_ced62;
      case 0xced69u: goto L_ced69;
      default: x86_jump(c, t); return; } }
L_ced54:
    X86_TICK(c, 9);
    // 0ced54  push 0x3854
    X86_AT(c, 0xced54u);
    { uint32_t v = 0x3854u; push32(c, v); }
    // 0ced59  jmp 0xced6e
    X86_AT(c, 0xced59u);
    goto L_ced6e;
L_ced5b:
    X86_TICK(c, 9);
    // 0ced5b  push 0x3884
    X86_AT(c, 0xced5bu);
    { uint32_t v = 0x3884u; push32(c, v); }
    // 0ced60  jmp 0xced6e
    X86_AT(c, 0xced60u);
    goto L_ced6e;
L_ced62:
    X86_TICK(c, 9);
    // 0ced62  push 0x38b4
    X86_AT(c, 0xced62u);
    { uint32_t v = 0x38B4u; push32(c, v); }
    // 0ced67  jmp 0xced6e
    X86_AT(c, 0xced67u);
    goto L_ced6e;
L_ced69:
    X86_TICK(c, 2);
    // 0ced69  push 0x38d0
    X86_AT(c, 0xced69u);
    { uint32_t v = 0x38D0u; push32(c, v); }
L_ced6e:
    X86_TICK(c, 7);
    // 0ced6e  call 0xcc7bc
    X86_AT(c, 0xced6eu);
    push32(c, 0xced73u); x86_call_known(c, 0xcc7bcu, f_000cc7bc); X86_RET(c, 0xced73u);
    X86_TICK(c, 2);
    // 0ced73  add esp, 4
    X86_AT(c, 0xced73u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
L_ced76:
    X86_TICK(c, 9);
    // 0ced76  push 7
    X86_AT(c, 0xced76u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0ced78  call 0xca3cc
    X86_AT(c, 0xced78u);
    push32(c, 0xced7du); x86_call_known(c, 0xca3ccu, f_000ca3cc); X86_RET(c, 0xced7du);
    X86_TICK(c, 7);
    // 0ced7d  jmp 0xced89
    X86_AT(c, 0xced7du);
    goto L_ced89;
L_ced7f:
    X86_TICK(c, 2);
    // 0ced7f  push 0x38ee
    X86_AT(c, 0xced7fu);
    { uint32_t v = 0x38EEu; push32(c, v); }
L_ced84:
    X86_TICK(c, 7);
    // 0ced84  call 0xcc7bc
    X86_AT(c, 0xced84u);
    push32(c, 0xced89u); x86_call_known(c, 0xcc7bcu, f_000cc7bc); X86_RET(c, 0xced89u);
L_ced89:
    X86_TICK(c, 2);
    // 0ced89  add esp, 4
    X86_AT(c, 0xced89u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
L_ced8c:
    X86_TICK(c, 28);
    // 0ced8c  pop edi
    X86_AT(c, 0xced8cu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0ced8d  pop esi
    X86_AT(c, 0xced8du);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0ced8e  pop ebx
    X86_AT(c, 0xced8eu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0ced8f  leave 
    X86_AT(c, 0xced8fu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0ced90  ret 
    X86_AT(c, 0xced90u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xce57cu, "ran off the end of a function");
}
void f_000ceae3(X86Cpu& c) {
    X86_TICK(c, 9);
    // 0ceae3  push 7
    X86_AT(c, 0xceae3u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0ceae5  call 0xc8cb8
    X86_AT(c, 0xceae5u);
    push32(c, 0xceaeau); x86_call_known(c, 0xc8cb8u, f_000c8cb8); X86_RET(c, 0xceaeau);
    X86_TICK(c, 9);
    // 0ceaea  push 7
    X86_AT(c, 0xceaeau);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0ceaec  call 0xca3cc
    X86_AT(c, 0xceaecu);
    push32(c, 0xceaf1u); x86_call_known(c, 0xca3ccu, f_000ca3cc); X86_RET(c, 0xceaf1u);
    X86_TICK(c, 9);
    // 0ceaf1  add esp, 0x10
    X86_AT(c, 0xceaf1u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0ceaf4  jmp 0xced8c
    X86_AT(c, 0xceaf4u);
    goto L_ced8c;
L_ced8c:
    X86_TICK(c, 28);
    // 0ced8c  pop edi
    X86_AT(c, 0xced8cu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0ced8d  pop esi
    X86_AT(c, 0xced8du);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0ced8e  pop ebx
    X86_AT(c, 0xced8eu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0ced8f  leave 
    X86_AT(c, 0xced8fu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0ced90  ret 
    X86_AT(c, 0xced90u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xceae3u, "ran off the end of a function");
}
void f_000ced84(X86Cpu& c) {
    X86_TICK(c, 7);
    // 0ced84  call 0xcc7bc
    X86_AT(c, 0xced84u);
    push32(c, 0xced89u); x86_call_known(c, 0xcc7bcu, f_000cc7bc); X86_RET(c, 0xced89u);
    X86_TICK(c, 30);
    // 0ced89  add esp, 4
    X86_AT(c, 0xced89u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0ced8c  pop edi
    X86_AT(c, 0xced8cu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0ced8d  pop esi
    X86_AT(c, 0xced8du);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0ced8e  pop ebx
    X86_AT(c, 0xced8eu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0ced8f  leave 
    X86_AT(c, 0xced8fu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0ced90  ret 
    X86_AT(c, 0xced90u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xced84u, "ran off the end of a function");
}
void f_000ced8c(X86Cpu& c) {
    X86_TICK(c, 28);
    // 0ced8c  pop edi
    X86_AT(c, 0xced8cu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0ced8d  pop esi
    X86_AT(c, 0xced8du);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0ced8e  pop ebx
    X86_AT(c, 0xced8eu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0ced8f  leave 
    X86_AT(c, 0xced8fu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0ced90  ret 
    X86_AT(c, 0xced90u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xced8cu, "ran off the end of a function");
}
void f_000ced94(X86Cpu& c) {
    X86_TICK(c, 19);
    // 0ced94  push ebp
    X86_AT(c, 0xced94u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0ced95  mov ebp, esp
    X86_AT(c, 0xced95u);
    c.r[5] = c.r[4];
    // 0ced97  push edi
    X86_AT(c, 0xced97u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0ced98  mov edx, dword ptr [ebp + 8]
    X86_AT(c, 0xced98u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0ced9b  sub edx, 9
    X86_AT(c, 0xced9bu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, 0x9u, 0, 4); }
    // 0ced9e  cmp edx, 0xf
    X86_AT(c, 0xced9eu);
    (void)x86_sub(c, c.r[2], 0xFu, 0, 4);
    // 0ceda1  ja 0xcee07
    X86_AT(c, 0xceda1u);
    if (x86_cc(c, 7)) { goto L_cee07; }
    X86_TICK(c, 7);
    // 0ceda3  jmp dword ptr cs:[edx*4 + 0xcedab]
    X86_AT(c, 0xceda3u);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xCEDABu)));
      switch (t) {
      case 0xcedebu: goto L_cedeb;
      case 0xcedf2u: goto L_cedf2;
      case 0xcedf9u: goto L_cedf9;
      case 0xcee00u: goto L_cee00;
      case 0xcee07u: goto L_cee07;
      default: x86_jump(c, t); return; } }
L_cedeb:
    X86_TICK(c, 9);
    // 0cedeb  mov edi, 2
    X86_AT(c, 0xcedebu);
    c.r[7] = 0x2u;
    // 0cedf0  jmp 0xcee09
    X86_AT(c, 0xcedf0u);
    goto L_cee09;
L_cedf2:
    X86_TICK(c, 9);
    // 0cedf2  mov edi, 4
    X86_AT(c, 0xcedf2u);
    c.r[7] = 0x4u;
    // 0cedf7  jmp 0xcee09
    X86_AT(c, 0xcedf7u);
    goto L_cee09;
L_cedf9:
    X86_TICK(c, 9);
    // 0cedf9  mov edi, 6
    X86_AT(c, 0xcedf9u);
    c.r[7] = 0x6u;
    // 0cedfe  jmp 0xcee09
    X86_AT(c, 0xcedfeu);
    goto L_cee09;
L_cee00:
    X86_TICK(c, 9);
    // 0cee00  mov edi, 8
    X86_AT(c, 0xcee00u);
    c.r[7] = 0x8u;
    // 0cee05  jmp 0xcee09
    X86_AT(c, 0xcee05u);
    goto L_cee09;
L_cee07:
    X86_TICK(c, 2);
    // 0cee07  sub edi, edi
    X86_AT(c, 0xcee07u);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
L_cee09:
    X86_TICK(c, 7);
    // 0cee09  and edi, edi
    X86_AT(c, 0xcee09u);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & c.r[7], 4); }
    // 0cee0b  je 0xcee1d
    X86_AT(c, 0xcee0bu);
    if (x86_cc(c, 4)) { goto L_cee1d; }
    X86_TICK(c, 13);
    // 0cee0d  mov eax, 8
    X86_AT(c, 0xcee0du);
    c.r[0] = 0x8u;
    // 0cee12  sub eax, edi
    X86_AT(c, 0xcee12u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[7], 0, 4); }
    // 0cee14  push eax
    X86_AT(c, 0xcee14u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0cee15  call 0xd643c
    X86_AT(c, 0xcee15u);
    push32(c, 0xcee1au); x86_call_known(c, 0xd643cu, f_000d643c); X86_RET(c, 0xcee1au);
    X86_TICK(c, 2);
    // 0cee1a  add esp, 4
    X86_AT(c, 0xcee1au);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
L_cee1d:
    X86_TICK(c, 20);
    // 0cee1d  pop edi
    X86_AT(c, 0xcee1du);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0cee1e  leave 
    X86_AT(c, 0xcee1eu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0cee1f  ret 
    X86_AT(c, 0xcee1fu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xced94u, "ran off the end of a function");
}
void f_000cee20(X86Cpu& c) {
    X86_TICK(c, 54);
    // 0cee20  push ebp
    X86_AT(c, 0xcee20u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0cee21  mov ebp, esp
    X86_AT(c, 0xcee21u);
    c.r[5] = c.r[4];
    // 0cee23  sub esp, 0x10
    X86_AT(c, 0xcee23u);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, 0x10u, 0, 4); }
    // 0cee26  push ebx
    X86_AT(c, 0xcee26u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0cee27  push esi
    X86_AT(c, 0xcee27u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0cee28  push edi
    X86_AT(c, 0xcee28u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0cee29  mov edi, dword ptr [ebp + 0x10]
    X86_AT(c, 0xcee29u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u)));
    // 0cee2c  mov esi, dword ptr [ebp + 0x14]
    X86_AT(c, 0xcee2cu);
    c.r[6] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x14u)));
    // 0cee2f  mov ebx, dword ptr [ebp + 0x18]
    X86_AT(c, 0xcee2fu);
    c.r[3] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x18u)));
    // 0cee32  mov dword ptr [ebp - 0xc], 1
    X86_AT(c, 0xcee32u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)), 0x1u);
    // 0cee39  mov eax, dword ptr [0xb2304]
    X86_AT(c, 0xcee39u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xB2304u)));
    // 0cee3e  shl eax, 8
    X86_AT(c, 0xcee3eu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 0cee41  mov edx, dword ptr [0xb2308]
    X86_AT(c, 0xcee41u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(0xB2308u)));
    // 0cee47  shl edx, 4
    X86_AT(c, 0xcee47u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[2] = r; }
    // 0cee4a  add edx, eax
    X86_AT(c, 0xcee4au);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0cee4c  cmp dword ptr [edx + 0xb2334], 1
    X86_AT(c, 0xcee4cu);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xB2334u))), 0x1u, 0, 4);
    // 0cee53  jne 0xcee81
    X86_AT(c, 0xcee53u);
    if (x86_cc(c, 5)) { goto L_cee81; }
    X86_TICK(c, 23);
    // 0cee55  mov eax, esi
    X86_AT(c, 0xcee55u);
    c.r[0] = c.r[6];
    // 0cee57  shl eax, 8
    X86_AT(c, 0xcee57u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 0cee5a  mov edx, ebx
    X86_AT(c, 0xcee5au);
    c.r[2] = c.r[3];
    // 0cee5c  shl edx, 4
    X86_AT(c, 0xcee5cu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[2] = r; }
    // 0cee5f  add edx, eax
    X86_AT(c, 0xcee5fu);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0cee61  mov eax, dword ptr [edx + 0xb2334]
    X86_AT(c, 0xcee61u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xB2334u)));
    // 0cee67  and eax, eax
    X86_AT(c, 0xcee67u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0cee69  je 0xcee79
    X86_AT(c, 0xcee69u);
    if (x86_cc(c, 4)) { goto L_cee79; }
    X86_TICK(c, 7);
    // 0cee6b  cmp eax, 0xf
    X86_AT(c, 0xcee6bu);
    (void)x86_sub(c, c.r[0], 0xFu, 0, 4);
    // 0cee6e  je 0xcee79
    X86_AT(c, 0xcee6eu);
    if (x86_cc(c, 4)) { goto L_cee79; }
    X86_TICK(c, 7);
    // 0cee70  cmp eax, 0xe
    X86_AT(c, 0xcee70u);
    (void)x86_sub(c, c.r[0], 0xEu, 0, 4);
    // 0cee73  je 0xcee79
    X86_AT(c, 0xcee73u);
    if (x86_cc(c, 4)) { goto L_cee79; }
    X86_TICK(c, 9);
    // 0cee75  sub eax, eax
    X86_AT(c, 0xcee75u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0cee77  jmp 0xcee7b
    X86_AT(c, 0xcee77u);
    goto L_cee7b;
L_cee79:
    X86_TICK(c, 2);
    // 0cee79  mov al, 1
    X86_AT(c, 0xcee79u);
    s8(c, 0, 0x1u);
L_cee7b:
    X86_TICK(c, 5);
    // 0cee7b  movzx eax, al
    X86_AT(c, 0xcee7bu);
    c.r[0] = g8(c, 0);
    // 0cee7e  mov dword ptr [ebp - 0xc], eax
    X86_AT(c, 0xcee7eu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)), c.r[0]);
L_cee81:
    X86_TICK(c, 11);
    // 0cee81  push 0x64
    X86_AT(c, 0xcee81u);
    { uint32_t v = 0x64u; push32(c, v); }
    // 0cee83  push 1
    X86_AT(c, 0xcee83u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0cee85  call 0xc5df0
    X86_AT(c, 0xcee85u);
    push32(c, 0xcee8au); x86_call_known(c, 0xc5df0u, f_000c5df0); X86_RET(c, 0xcee8au);
    X86_TICK(c, 13);
    // 0cee8a  add esp, 8
    X86_AT(c, 0xcee8au);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0cee8d  cmp eax, dword ptr [ebp + 0xc]
    X86_AT(c, 0xcee8du);
    (void)x86_sub(c, c.r[0], rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))), 0, 4);
    // 0cee90  jg 0xcf029
    X86_AT(c, 0xcee90u);
    if (x86_cc(c, 15)) { goto L_cf029; }
    X86_TICK(c, 27);
    // 0cee96  mov eax, dword ptr [0xb2304]
    X86_AT(c, 0xcee96u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xB2304u)));
    // 0cee9b  shl eax, 8
    X86_AT(c, 0xcee9bu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 0cee9e  mov edx, dword ptr [0xb2308]
    X86_AT(c, 0xcee9eu);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(0xB2308u)));
    // 0ceea4  shl edx, 4
    X86_AT(c, 0xceea4u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[2] = r; }
    // 0ceea7  add edx, eax
    X86_AT(c, 0xceea7u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0ceea9  mov eax, dword ptr [edx + 0xb2334]
    X86_AT(c, 0xceea9u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xB2334u)));
    // 0ceeaf  cmp eax, 2
    X86_AT(c, 0xceeafu);
    (void)x86_sub(c, c.r[0], 0x2u, 0, 4);
    // 0ceeb2  je 0xcf029
    X86_AT(c, 0xceeb2u);
    if (x86_cc(c, 4)) { goto L_cf029; }
    X86_TICK(c, 7);
    // 0ceeb8  cmp eax, 3
    X86_AT(c, 0xceeb8u);
    (void)x86_sub(c, c.r[0], 0x3u, 0, 4);
    // 0ceebb  je 0xcf029
    X86_AT(c, 0xceebbu);
    if (x86_cc(c, 4)) { goto L_cf029; }
    X86_TICK(c, 7);
    // 0ceec1  cmp eax, 8
    X86_AT(c, 0xceec1u);
    (void)x86_sub(c, c.r[0], 0x8u, 0, 4);
    // 0ceec4  je 0xcf029
    X86_AT(c, 0xceec4u);
    if (x86_cc(c, 4)) { goto L_cf029; }
    X86_TICK(c, 12);
    // 0ceeca  cmp dword ptr [ebp - 0xc], 0
    X86_AT(c, 0xceecau);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u))), 0x0u, 0, 4);
    // 0ceece  je 0xcf029
    X86_AT(c, 0xceeceu);
    if (x86_cc(c, 4)) { goto L_cf029; }
    X86_TICK(c, 12);
    // 0ceed4  push dword ptr [ebp + 8]
    X86_AT(c, 0xceed4u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, v); }
    // 0ceed7  call 0xc71dc
    X86_AT(c, 0xceed7u);
    push32(c, 0xceedcu); x86_call_known(c, 0xc71dcu, f_000c71dc); X86_RET(c, 0xceedcu);
    X86_TICK(c, 9);
    // 0ceedc  add esp, 4
    X86_AT(c, 0xceedcu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0ceedf  cmp edi, 0x2710
    X86_AT(c, 0xceedfu);
    (void)x86_sub(c, c.r[7], 0x2710u, 0, 4);
    // 0ceee5  je 0xceef6
    X86_AT(c, 0xceee5u);
    if (x86_cc(c, 4)) { goto L_ceef6; }
    X86_TICK(c, 11);
    // 0ceee7  push 0xe
    X86_AT(c, 0xceee7u);
    { uint32_t v = 0xEu; push32(c, v); }
    // 0ceee9  push 0x38f0
    X86_AT(c, 0xceee9u);
    { uint32_t v = 0x38F0u; push32(c, v); }
    // 0ceeee  call 0xcc830
    X86_AT(c, 0xceeeeu);
    push32(c, 0xceef3u); x86_call_known(c, 0xcc830u, f_000cc830); X86_RET(c, 0xceef3u);
    X86_TICK(c, 2);
    // 0ceef3  add esp, 8
    X86_AT(c, 0xceef3u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
L_ceef6:
    X86_TICK(c, 23);
    // 0ceef6  mov eax, esi
    X86_AT(c, 0xceef6u);
    c.r[0] = c.r[6];
    // 0ceef8  shl eax, 8
    X86_AT(c, 0xceef8u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 0ceefb  mov edx, ebx
    X86_AT(c, 0xceefbu);
    c.r[2] = c.r[3];
    // 0ceefd  shl edx, 4
    X86_AT(c, 0xceefdu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[2] = r; }
    // 0cef00  add edx, eax
    X86_AT(c, 0xcef00u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0cef02  cmp edi, dword ptr [edx + 0xb2340]
    X86_AT(c, 0xcef02u);
    (void)x86_sub(c, c.r[7], rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xB2340u))), 0, 4);
    // 0cef08  jl 0xceffe
    X86_AT(c, 0xcef08u);
    if (x86_cc(c, 12)) { goto L_ceffe; }
    X86_TICK(c, 12);
    // 0cef0e  push dword ptr [edx + 0xb2338]
    X86_AT(c, 0xcef0eu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xB2338u))); push32(c, v); }
    // 0cef14  call 0xdb1f4
    X86_AT(c, 0xcef14u);
    push32(c, 0xcef19u); x86_call_known(c, 0xdb1f4u, f_000db1f4); X86_RET(c, 0xcef19u);
    X86_TICK(c, 9);
    // 0cef19  add esp, 4
    X86_AT(c, 0xcef19u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0cef1c  cmp edi, 0x2710
    X86_AT(c, 0xcef1cu);
    (void)x86_sub(c, c.r[7], 0x2710u, 0, 4);
    // 0cef22  jne 0xcef2b
    X86_AT(c, 0xcef22u);
    if (x86_cc(c, 5)) { goto L_cef2b; }
    X86_TICK(c, 9);
    // 0cef24  push 0x3904
    X86_AT(c, 0xcef24u);
    { uint32_t v = 0x3904u; push32(c, v); }
    // 0cef29  jmp 0xcef30
    X86_AT(c, 0xcef29u);
    goto L_cef30;
L_cef2b:
    X86_TICK(c, 2);
    // 0cef2b  push 0x3928
    X86_AT(c, 0xcef2bu);
    { uint32_t v = 0x3928u; push32(c, v); }
L_cef30:
    X86_TICK(c, 7);
    // 0cef30  call 0xcc7bc
    X86_AT(c, 0xcef30u);
    push32(c, 0xcef35u); x86_call_known(c, 0xcc7bcu, f_000cc7bc); X86_RET(c, 0xcef35u);
    X86_TICK(c, 28);
    // 0cef35  add esp, 4
    X86_AT(c, 0xcef35u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0cef38  mov eax, esi
    X86_AT(c, 0xcef38u);
    c.r[0] = c.r[6];
    // 0cef3a  shl eax, 8
    X86_AT(c, 0xcef3au);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 0cef3d  mov edx, ebx
    X86_AT(c, 0xcef3du);
    c.r[2] = c.r[3];
    // 0cef3f  shl edx, 4
    X86_AT(c, 0xcef3fu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[2] = r; }
    // 0cef42  add edx, eax
    X86_AT(c, 0xcef42u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0cef44  push dword ptr [edx + 0xb2338]
    X86_AT(c, 0xcef44u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xB2338u))); push32(c, v); }
    // 0cef4a  mov dword ptr [ebp - 0x10], edx
    X86_AT(c, 0xcef4au);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u)), c.r[2]);
    // 0cef4d  call 0xced94
    X86_AT(c, 0xcef4du);
    push32(c, 0xcef52u); x86_call_known(c, 0xced94u, f_000ced94); X86_RET(c, 0xcef52u);
    X86_TICK(c, 27);
    // 0cef52  mov eax, dword ptr [0xb2328]
    X86_AT(c, 0xcef52u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xB2328u)));
    // 0cef57  lea eax, [eax + eax*2 + 0xa]
    X86_AT(c, 0xcef57u);
    c.r[0] = (uint32_t)(c.r[0] + c.r[0] * 2 + 0xAu);
    // 0cef5b  mov edx, dword ptr [ebp - 0x10]
    X86_AT(c, 0xcef5bu);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u)));
    // 0cef5e  add eax, dword ptr [edx + 0xb2338]
    X86_AT(c, 0xcef5eu);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xB2338u))), 0, 4); }
    // 0cef64  push eax
    X86_AT(c, 0xcef64u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0cef65  push 2
    X86_AT(c, 0xcef65u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0cef67  call 0xc5df0
    X86_AT(c, 0xcef67u);
    push32(c, 0xcef6cu); x86_call_known(c, 0xc5df0u, f_000c5df0); X86_RET(c, 0xcef6cu);
    X86_TICK(c, 16);
    // 0cef6c  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0xcef6cu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
    // 0cef6f  add esp, 0xc
    X86_AT(c, 0xcef6fu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0cef72  cmp dword ptr [0x43eb8], 0
    X86_AT(c, 0xcef72u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0x43EB8u))), 0x0u, 0, 4);
    // 0cef79  jne 0xcef8a
    X86_AT(c, 0xcef79u);
    if (x86_cc(c, 5)) { goto L_cef8a; }
    X86_TICK(c, 11);
    // 0cef7b  push 0xf
    X86_AT(c, 0xcef7bu);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0cef7d  push 0x3948
    X86_AT(c, 0xcef7du);
    { uint32_t v = 0x3948u; push32(c, v); }
    // 0cef82  call 0xcc830
    X86_AT(c, 0xcef82u);
    push32(c, 0xcef87u); x86_call_known(c, 0xcc830u, f_000cc830); X86_RET(c, 0xcef87u);
    X86_TICK(c, 2);
    // 0cef87  add esp, 8
    X86_AT(c, 0xcef87u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
L_cef8a:
    X86_TICK(c, 14);
    // 0cef8a  push 0
    X86_AT(c, 0xcef8au);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0cef8c  push dword ptr [ebp - 4]
    X86_AT(c, 0xcef8cu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))); push32(c, v); }
    // 0cef8f  call 0xcc8b8
    X86_AT(c, 0xcef8fu);
    push32(c, 0xcef94u); x86_call_known(c, 0xcc8b8u, f_000cc8b8); X86_RET(c, 0xcef94u);
    X86_TICK(c, 111);
    // 0cef94  mov eax, esi
    X86_AT(c, 0xcef94u);
    c.r[0] = c.r[6];
    // 0cef96  shl eax, 8
    X86_AT(c, 0xcef96u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 0cef99  mov edx, ebx
    X86_AT(c, 0xcef99u);
    c.r[2] = c.r[3];
    // 0cef9b  shl edx, 4
    X86_AT(c, 0xcef9bu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[2] = r; }
    // 0cef9e  add edx, eax
    X86_AT(c, 0xcef9eu);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0cefa0  mov eax, dword ptr [edx + 0xb2338]
    X86_AT(c, 0xcefa0u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xB2338u)));
    // 0cefa6  mov dword ptr [ebp - 0x10], edx
    X86_AT(c, 0xcefa6u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u)), c.r[2]);
    // 0cefa9  cdq 
    X86_AT(c, 0xcefa9u);
    c.r[2] = (c.r[0] & 0x80000000u) ? 0xFFFFFFFFu : 0u;
    // 0cefaa  mov ecx, 5
    X86_AT(c, 0xcefaau);
    c.r[1] = 0x5u;
    // 0cefaf  idiv ecx
    X86_AT(c, 0xcefafu);
    x86_idiv(c, c.r[1], 4, 0xcefafu);
    // 0cefb1  mov byte ptr [edx + 0xb3334], 0
    X86_AT(c, 0xcefb1u);
    wr8((c.sbase[3] + (uint32_t)(c.r[2] + 0xB3334u)), 0x0u);
    // 0cefb8  mov eax, dword ptr [ebp - 0x10]
    X86_AT(c, 0xcefb8u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u)));
    // 0cefbb  mov dword ptr [eax + 0xb2338], 0xffffffff
    X86_AT(c, 0xcefbbu);
    wr32((c.sbase[3] + (uint32_t)(c.r[0] + 0xB2338u)), 0xFFFFFFFFu);
    // 0cefc5  mov dword ptr [eax + 0xb2340], 0
    X86_AT(c, 0xcefc5u);
    wr32((c.sbase[3] + (uint32_t)(c.r[0] + 0xB2340u)), 0x0u);
    // 0cefcf  mov eax, dword ptr [0xb2328]
    X86_AT(c, 0xcefcfu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xB2328u)));
    // 0cefd4  mul eax
    X86_AT(c, 0xcefd4u);
    x86_mul(c, c.r[0], 4);
    // 0cefd6  add eax, 0xa
    X86_AT(c, 0xcefd6u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0xAu, 0, 4); }
    // 0cefd9  push eax
    X86_AT(c, 0xcefd9u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0cefda  push 2
    X86_AT(c, 0xcefdau);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0cefdc  call 0xc5df0
    X86_AT(c, 0xcefdcu);
    push32(c, 0xcefe1u); x86_call_known(c, 0xc5df0u, f_000c5df0); X86_RET(c, 0xcefe1u);
    X86_TICK(c, 25);
    // 0cefe1  mov dword ptr [ebp - 8], eax
    X86_AT(c, 0xcefe1u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), c.r[0]);
    // 0cefe4  add dword ptr [0xb031e], eax
    X86_AT(c, 0xcefe4u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xB031Eu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 0cefea  add eax, eax
    X86_AT(c, 0xcefeau);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, c.r[0], 0, 4); }
    // 0cefec  add dword ptr [0xb2330], eax
    X86_AT(c, 0xcefecu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xB2330u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 0ceff2  call 0xcc6b0
    X86_AT(c, 0xceff2u);
    push32(c, 0xceff7u); x86_call_known(c, 0xcc6b0u, f_000cc6b0); X86_RET(c, 0xceff7u);
    X86_TICK(c, 7);
    // 0ceff7  call 0xdbdfc
    X86_AT(c, 0xceff7u);
    push32(c, 0xceffcu); x86_call_known(c, 0xdbdfcu, f_000dbdfc); X86_RET(c, 0xceffcu);
    X86_TICK(c, 7);
    // 0ceffc  jmp 0xcf024
    X86_AT(c, 0xceffcu);
    goto L_cf024;
L_ceffe:
    X86_TICK(c, 13);
    // 0ceffe  push 3
    X86_AT(c, 0xceffeu);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0cf000  push edi
    X86_AT(c, 0xcf000u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0cf001  push 7
    X86_AT(c, 0xcf001u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cf003  call 0xc8cb8
    X86_AT(c, 0xcf003u);
    push32(c, 0xcf008u); x86_call_known(c, 0xc8cb8u, f_000c8cb8); X86_RET(c, 0xcf008u);
    X86_TICK(c, 9);
    // 0cf008  push 0x3968
    X86_AT(c, 0xcf008u);
    { uint32_t v = 0x3968u; push32(c, v); }
    // 0cf00d  call 0xcc7bc
    X86_AT(c, 0xcf00du);
    push32(c, 0xcf012u); x86_call_known(c, 0xcc7bcu, f_000cc7bc); X86_RET(c, 0xcf012u);
    X86_TICK(c, 19);
    // 0cf012  mov eax, esi
    X86_AT(c, 0xcf012u);
    c.r[0] = c.r[6];
    // 0cf014  shl eax, 8
    X86_AT(c, 0xcf014u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 0cf017  mov edx, ebx
    X86_AT(c, 0xcf017u);
    c.r[2] = c.r[3];
    // 0cf019  shl edx, 4
    X86_AT(c, 0xcf019u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[2] = r; }
    // 0cf01c  add edx, eax
    X86_AT(c, 0xcf01cu);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0cf01e  sub dword ptr [edx + 0xb2340], edi
    X86_AT(c, 0xcf01eu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[2] + 0xB2340u)); uint32_t v = rd32(ea); wr32(ea, x86_sub(c, v, c.r[7], 0, 4)); }
L_cf024:
    X86_TICK(c, 9);
    // 0cf024  add esp, 0x10
    X86_AT(c, 0xcf024u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0cf027  jmp 0xcf036
    X86_AT(c, 0xcf027u);
    goto L_cf036;
L_cf029:
    X86_TICK(c, 9);
    // 0cf029  push 0x3990
    X86_AT(c, 0xcf029u);
    { uint32_t v = 0x3990u; push32(c, v); }
    // 0cf02e  call 0xcc7bc
    X86_AT(c, 0xcf02eu);
    push32(c, 0xcf033u); x86_call_known(c, 0xcc7bcu, f_000cc7bc); X86_RET(c, 0xcf033u);
    X86_TICK(c, 2);
    // 0cf033  add esp, 4
    X86_AT(c, 0xcf033u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
L_cf036:
    X86_TICK(c, 28);
    // 0cf036  pop edi
    X86_AT(c, 0xcf036u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0cf037  pop esi
    X86_AT(c, 0xcf037u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0cf038  pop ebx
    X86_AT(c, 0xcf038u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0cf039  leave 
    X86_AT(c, 0xcf039u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0cf03a  ret 
    X86_AT(c, 0xcf03au);
    c.eip = pop32(c); return;
    x86_fault(c, 0xcee20u, "ran off the end of a function");
}
void f_000cf03c(X86Cpu& c) {
    X86_TICK(c, 21);
    // 0cf03c  push ebp
    X86_AT(c, 0xcf03cu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0cf03d  mov ebp, esp
    X86_AT(c, 0xcf03du);
    c.r[5] = c.r[4];
    // 0cf03f  sub esp, 0x10
    X86_AT(c, 0xcf03fu);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, 0x10u, 0, 4); }
    // 0cf042  push ebx
    X86_AT(c, 0xcf042u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0cf043  push esi
    X86_AT(c, 0xcf043u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0cf044  push edi
    X86_AT(c, 0xcf044u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0cf045  sub edi, edi
    X86_AT(c, 0xcf045u);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
    // 0cf047  call 0xdb23c
    X86_AT(c, 0xcf047u);
    push32(c, 0xcf04cu); x86_call_known(c, 0xdb23cu, f_000db23c); X86_RET(c, 0xcf04cu);
    X86_TICK(c, 9);
    // 0cf04c  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0xcf04cu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
    // 0cf04f  call 0xdb260
    X86_AT(c, 0xcf04fu);
    push32(c, 0xcf054u); x86_call_known(c, 0xdb260u, f_000db260); X86_RET(c, 0xcf054u);
    X86_TICK(c, 2);
    // 0cf054  mov dword ptr [ebp - 8], eax
    X86_AT(c, 0xcf054u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), c.r[0]);
L_cf057:
    X86_TICK(c, 97);
    // 0cf057  inc edi
    X86_AT(c, 0xcf057u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0cf058  mov eax, edi
    X86_AT(c, 0xcf058u);
    c.r[0] = c.r[7];
    // 0cf05a  imul eax, dword ptr [ebp - 4]
    X86_AT(c, 0xcf05au);
    c.r[0] = x86_imul2(c, c.r[0], rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))), 4);
    // 0cf05e  mov dword ptr [ebp - 0xc], eax
    X86_AT(c, 0xcf05eu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)), c.r[0]);
    // 0cf061  mov edx, edi
    X86_AT(c, 0xcf061u);
    c.r[2] = c.r[7];
    // 0cf063  imul edx, dword ptr [ebp - 8]
    X86_AT(c, 0xcf063u);
    c.r[2] = x86_imul2(c, c.r[2], rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u))), 4);
    // 0cf067  mov esi, edx
    X86_AT(c, 0xcf067u);
    c.r[6] = c.r[2];
    // 0cf069  add eax, dword ptr [0xb2304]
    X86_AT(c, 0xcf069u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[3] + (uint32_t)(0xB2304u))), 0, 4); }
    // 0cf06f  shl eax, 8
    X86_AT(c, 0xcf06fu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 0cf072  mov edx, esi
    X86_AT(c, 0xcf072u);
    c.r[2] = c.r[6];
    // 0cf074  add edx, dword ptr [0xb2308]
    X86_AT(c, 0xcf074u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, rd32((c.sbase[3] + (uint32_t)(0xB2308u))), 0, 4); }
    // 0cf07a  shl edx, 4
    X86_AT(c, 0xcf07au);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[2] = r; }
    // 0cf07d  add edx, eax
    X86_AT(c, 0xcf07du);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0cf07f  mov ebx, dword ptr [edx + 0xb2334]
    X86_AT(c, 0xcf07fu);
    c.r[3] = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xB2334u)));
    // 0cf085  mov eax, dword ptr [edx + 0xb2338]
    X86_AT(c, 0xcf085u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xB2338u)));
    // 0cf08b  mov dword ptr [ebp - 0x10], eax
    X86_AT(c, 0xcf08bu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u)), c.r[0]);
    // 0cf08e  cmp edi, dword ptr [ebp + 8]
    X86_AT(c, 0xcf08eu);
    (void)x86_sub(c, c.r[7], rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))), 0, 4);
    // 0cf091  jge 0xcf0aa
    X86_AT(c, 0xcf091u);
    if (x86_cc(c, 13)) { goto L_cf0aa; }
    X86_TICK(c, 7);
    // 0cf093  inc eax
    X86_AT(c, 0xcf093u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0cf094  jne 0xcf0aa
    X86_AT(c, 0xcf094u);
    if (x86_cc(c, 5)) { goto L_cf0aa; }
    X86_TICK(c, 7);
    // 0cf096  cmp ebx, 2
    X86_AT(c, 0xcf096u);
    (void)x86_sub(c, c.r[3], 0x2u, 0, 4);
    // 0cf099  je 0xcf0aa
    X86_AT(c, 0xcf099u);
    if (x86_cc(c, 4)) { goto L_cf0aa; }
    X86_TICK(c, 7);
    // 0cf09b  cmp ebx, 3
    X86_AT(c, 0xcf09bu);
    (void)x86_sub(c, c.r[3], 0x3u, 0, 4);
    // 0cf09e  je 0xcf0aa
    X86_AT(c, 0xcf09eu);
    if (x86_cc(c, 4)) { goto L_cf0aa; }
    X86_TICK(c, 7);
    // 0cf0a0  cmp ebx, 8
    X86_AT(c, 0xcf0a0u);
    (void)x86_sub(c, c.r[3], 0x8u, 0, 4);
    // 0cf0a3  je 0xcf0aa
    X86_AT(c, 0xcf0a3u);
    if (x86_cc(c, 4)) { goto L_cf0aa; }
    X86_TICK(c, 7);
    // 0cf0a5  cmp ebx, 1
    X86_AT(c, 0xcf0a5u);
    (void)x86_sub(c, c.r[3], 0x1u, 0, 4);
    // 0cf0a8  jne 0xcf057
    X86_AT(c, 0xcf0a8u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xcf057u); goto L_cf057; }
L_cf0aa:
    X86_TICK(c, 12);
    // 0cf0aa  cmp dword ptr [ebp - 0x10], 0xffffffff
    X86_AT(c, 0xcf0aau);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u))), 0xFFFFFFFFu, 0, 4);
    // 0cf0ae  je 0xcf0bf
    X86_AT(c, 0xcf0aeu);
    if (x86_cc(c, 4)) { goto L_cf0bf; }
    X86_TICK(c, 7);
    // 0cf0b0  cmp ebx, 2
    X86_AT(c, 0xcf0b0u);
    (void)x86_sub(c, c.r[3], 0x2u, 0, 4);
    // 0cf0b3  je 0xcf0bf
    X86_AT(c, 0xcf0b3u);
    if (x86_cc(c, 4)) { goto L_cf0bf; }
    X86_TICK(c, 7);
    // 0cf0b5  cmp ebx, 3
    X86_AT(c, 0xcf0b5u);
    (void)x86_sub(c, c.r[3], 0x3u, 0, 4);
    // 0cf0b8  je 0xcf0bf
    X86_AT(c, 0xcf0b8u);
    if (x86_cc(c, 4)) { goto L_cf0bf; }
    X86_TICK(c, 7);
    // 0cf0ba  cmp ebx, 8
    X86_AT(c, 0xcf0bau);
    (void)x86_sub(c, c.r[3], 0x8u, 0, 4);
    // 0cf0bd  jne 0xcf0c3
    X86_AT(c, 0xcf0bdu);
    if (x86_cc(c, 5)) { goto L_cf0c3; }
L_cf0bf:
    X86_TICK(c, 9);
    // 0cf0bf  sub eax, eax
    X86_AT(c, 0xcf0bfu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0cf0c1  jmp 0xcf0c5
    X86_AT(c, 0xcf0c1u);
    goto L_cf0c5;
L_cf0c3:
    X86_TICK(c, 2);
    // 0cf0c3  mov eax, edi
    X86_AT(c, 0xcf0c3u);
    c.r[0] = c.r[7];
L_cf0c5:
    X86_TICK(c, 28);
    // 0cf0c5  pop edi
    X86_AT(c, 0xcf0c5u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0cf0c6  pop esi
    X86_AT(c, 0xcf0c6u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0cf0c7  pop ebx
    X86_AT(c, 0xcf0c7u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0cf0c8  leave 
    X86_AT(c, 0xcf0c8u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0cf0c9  ret 
    X86_AT(c, 0xcf0c9u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xcf03cu, "ran off the end of a function");
}
void f_000cf0cc(X86Cpu& c) {
    X86_TICK(c, 15);
    // 0cf0cc  push ebx
    X86_AT(c, 0xcf0ccu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0cf0cd  push esi
    X86_AT(c, 0xcf0cdu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0cf0ce  push edi
    X86_AT(c, 0xcf0ceu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0cf0cf  push 0xa
    X86_AT(c, 0xcf0cfu);
    { uint32_t v = 0xAu; push32(c, v); }
    // 0cf0d1  call 0xc5ca4
    X86_AT(c, 0xcf0d1u);
    push32(c, 0xcf0d6u); x86_call_known(c, 0xc5ca4u, f_000c5ca4); X86_RET(c, 0xcf0d6u);
    X86_TICK(c, 16);
    // 0cf0d6  mov eax, dword ptr [0xb0326]
    X86_AT(c, 0xcf0d6u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xB0326u)));
    // 0cf0db  push dword ptr [eax*4 + 0xab014]
    X86_AT(c, 0xcf0dbu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[0] * 4 + 0xAB014u))); push32(c, v); }
    // 0cf0e2  call 0xcf03c
    X86_AT(c, 0xcf0e2u);
    push32(c, 0xcf0e7u); x86_call_known(c, 0xcf03cu, f_000cf03c); X86_RET(c, 0xcf0e7u);
    X86_TICK(c, 12);
    // 0cf0e7  xchg ebx, eax
    X86_AT(c, 0xcf0e7u);
    { uint32_t t = c.r[3]; c.r[3] = c.r[0]; c.r[0] = t; }
    // 0cf0e8  add esp, 8
    X86_AT(c, 0xcf0e8u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0cf0eb  and ebx, ebx
    X86_AT(c, 0xcf0ebu);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & c.r[3], 4); }
    // 0cf0ed  jne 0xcf0fe
    X86_AT(c, 0xcf0edu);
    if (x86_cc(c, 5)) { goto L_cf0fe; }
    X86_TICK(c, 9);
    // 0cf0ef  push 0x39a8
    X86_AT(c, 0xcf0efu);
    { uint32_t v = 0x39A8u; push32(c, v); }
    // 0cf0f4  call 0xcc7bc
    X86_AT(c, 0xcf0f4u);
    push32(c, 0xcf0f9u); x86_call_known(c, 0xcc7bcu, f_000cc7bc); X86_RET(c, 0xcf0f9u);
    X86_TICK(c, 9);
    // 0cf0f9  add esp, 4
    X86_AT(c, 0xcf0f9u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0cf0fc  jmp 0xcf148
    X86_AT(c, 0xcf0fcu);
    goto L_cf148;
L_cf0fe:
    X86_TICK(c, 30);
    // 0cf0fe  mov edi, dword ptr [0xb0306]
    X86_AT(c, 0xcf0feu);
    c.r[7] = rd32((c.sbase[3] + (uint32_t)(0xB0306u)));
    // 0cf104  add edi, 0x32
    X86_AT(c, 0xcf104u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x32u, 0, 4); }
    // 0cf107  mov eax, dword ptr [0xb0326]
    X86_AT(c, 0xcf107u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xB0326u)));
    // 0cf10c  shl eax, 3
    X86_AT(c, 0xcf10cu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x3u, 4, w); if (w) c.r[0] = r; }
    // 0cf10f  add eax, dword ptr [0xb0302]
    X86_AT(c, 0xcf10fu);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[3] + (uint32_t)(0xB0302u))), 0, 4); }
    // 0cf115  push eax
    X86_AT(c, 0xcf115u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0cf116  push 2
    X86_AT(c, 0xcf116u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0cf118  call 0xc5df0
    X86_AT(c, 0xcf118u);
    push32(c, 0xcf11du); x86_call_known(c, 0xc5df0u, f_000c5df0); X86_RET(c, 0xcf11du);
    X86_TICK(c, 10);
    // 0cf11d  xchg esi, eax
    X86_AT(c, 0xcf11du);
    { uint32_t t = c.r[6]; c.r[6] = c.r[0]; c.r[0] = t; }
    // 0cf11e  call 0xdb260
    X86_AT(c, 0xcf11eu);
    push32(c, 0xcf123u); x86_call_known(c, 0xdb260u, f_000db260); X86_RET(c, 0xcf123u);
    X86_TICK(c, 37);
    // 0cf123  imul eax, ebx
    X86_AT(c, 0xcf123u);
    c.r[0] = x86_imul2(c, c.r[0], c.r[3], 4);
    // 0cf126  add eax, dword ptr [0xb2308]
    X86_AT(c, 0xcf126u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[3] + (uint32_t)(0xB2308u))), 0, 4); }
    // 0cf12c  push eax
    X86_AT(c, 0xcf12cu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0cf12d  call 0xdb23c
    X86_AT(c, 0xcf12du);
    push32(c, 0xcf132u); x86_call_known(c, 0xdb23cu, f_000db23c); X86_RET(c, 0xcf132u);
    X86_TICK(c, 43);
    // 0cf132  imul eax, ebx
    X86_AT(c, 0xcf132u);
    c.r[0] = x86_imul2(c, c.r[0], c.r[3], 4);
    // 0cf135  add eax, dword ptr [0xb2304]
    X86_AT(c, 0xcf135u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[3] + (uint32_t)(0xB2304u))), 0, 4); }
    // 0cf13b  push eax
    X86_AT(c, 0xcf13bu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0cf13c  push esi
    X86_AT(c, 0xcf13cu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0cf13d  push edi
    X86_AT(c, 0xcf13du);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0cf13e  push 2
    X86_AT(c, 0xcf13eu);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0cf140  call 0xcee20
    X86_AT(c, 0xcf140u);
    push32(c, 0xcf145u); x86_call_known(c, 0xcee20u, f_000cee20); X86_RET(c, 0xcf145u);
    X86_TICK(c, 2);
    // 0cf145  add esp, 0x1c
    X86_AT(c, 0xcf145u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x1Cu, 0, 4); }
L_cf148:
    X86_TICK(c, 22);
    // 0cf148  pop edi
    X86_AT(c, 0xcf148u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0cf149  pop esi
    X86_AT(c, 0xcf149u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0cf14a  pop ebx
    X86_AT(c, 0xcf14au);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0cf14b  ret 
    X86_AT(c, 0xcf14bu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xcf0ccu, "ran off the end of a function");
}
void f_000cf14c(X86Cpu& c) {
    X86_TICK(c, 11);
    // 0cf14c  mov edx, dword ptr [esp + 4]
    X86_AT(c, 0xcf14cu);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[4] + 0x4u)));
    // 0cf150  and edx, edx
    X86_AT(c, 0xcf150u);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & c.r[2], 4); }
    // 0cf152  jle 0xcf182
    X86_AT(c, 0xcf152u);
    if (x86_cc(c, 14)) { goto L_cf182; }
    X86_TICK(c, 21);
    // 0cf154  lea eax, [edx*8]
    X86_AT(c, 0xcf154u);
    c.r[0] = (uint32_t)(c.r[2] * 8);
    // 0cf15b  lea eax, [eax + eax*4]
    X86_AT(c, 0xcf15bu);
    c.r[0] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0cf15e  mov ecx, dword ptr [eax + 0xbefcc]
    X86_AT(c, 0xcf15eu);
    c.r[1] = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0xBEFCCu)));
    // 0cf164  sub ecx, 0xa4
    X86_AT(c, 0xcf164u);
    { uint32_t v = c.r[1]; c.r[1] = x86_sub(c, v, 0xA4u, 0, 4); }
    // 0cf16a  mov eax, dword ptr [ecx*4 + 0xb03fe]
    X86_AT(c, 0xcf16au);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[1] * 4 + 0xB03FEu)));
    // 0cf171  and eax, eax
    X86_AT(c, 0xcf171u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0cf173  je 0xcf182
    X86_AT(c, 0xcf173u);
    if (x86_cc(c, 4)) { goto L_cf182; }
    X86_TICK(c, 12);
    // 0cf175  dec dword ptr [ecx*4 + 0xb03fe]
    X86_AT(c, 0xcf175u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[1] * 4 + 0xB03FEu)); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 0cf17c  dec dword ptr [0xaa2ac]
    X86_AT(c, 0xcf17cu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xAA2ACu)); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
L_cf182:
    X86_TICK(c, 10);
    // 0cf182  ret 
    X86_AT(c, 0xcf182u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xcf14cu, "ran off the end of a function");
}
void f_000cf184(X86Cpu& c) {
    X86_TICK(c, 25);
    // 0cf184  push ebp
    X86_AT(c, 0xcf184u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0cf185  mov ebp, esp
    X86_AT(c, 0xcf185u);
    c.r[5] = c.r[4];
    // 0cf187  sub esp, 0x30
    X86_AT(c, 0xcf187u);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, 0x30u, 0, 4); }
    // 0cf18a  push ebx
    X86_AT(c, 0xcf18au);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0cf18b  push esi
    X86_AT(c, 0xcf18bu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0cf18c  push edi
    X86_AT(c, 0xcf18cu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0cf18d  mov ebx, 1
    X86_AT(c, 0xcf18du);
    c.r[3] = 0x1u;
    // 0cf192  mov eax, dword ptr [0xb52f8]
    X86_AT(c, 0xcf192u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xB52F8u)));
    // 0cf197  cmp ebx, eax
    X86_AT(c, 0xcf197u);
    (void)x86_sub(c, c.r[3], c.r[0], 0, 4);
    // 0cf199  je 0xcf1a0
    X86_AT(c, 0xcf199u);
    if (x86_cc(c, 4)) { goto L_cf1a0; }
    X86_TICK(c, 7);
    // 0cf19b  cmp eax, 2
    X86_AT(c, 0xcf19bu);
    (void)x86_sub(c, c.r[0], 0x2u, 0, 4);
    // 0cf19e  jne 0xcf1b9
    X86_AT(c, 0xcf19eu);
    if (x86_cc(c, 5)) { goto L_cf1b9; }
L_cf1a0:
    X86_TICK(c, 27);
    // 0cf1a0  push dword ptr [ebp + 0x18]
    X86_AT(c, 0xcf1a0u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x18u))); push32(c, v); }
    // 0cf1a3  push dword ptr [ebp + 0x14]
    X86_AT(c, 0xcf1a3u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x14u))); push32(c, v); }
    // 0cf1a6  push dword ptr [ebp + 0x10]
    X86_AT(c, 0xcf1a6u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u))); push32(c, v); }
    // 0cf1a9  push dword ptr [ebp + 8]
    X86_AT(c, 0xcf1a9u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, v); }
    // 0cf1ac  call 0xd41c0
    X86_AT(c, 0xcf1acu);
    push32(c, 0xcf1b1u); x86_call_known(c, 0xd41c0u, f_000d41c0); X86_RET(c, 0xcf1b1u);
    X86_TICK(c, 9);
    // 0cf1b1  add esp, 0x10
    X86_AT(c, 0xcf1b1u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0cf1b4  jmp 0xcf4aa
    X86_AT(c, 0xcf1b4u);
    goto L_cf4aa;
L_cf1b9:
    X86_TICK(c, 15);
    // 0cf1b9  movzx edx, byte ptr [ebp + 8]
    X86_AT(c, 0xcf1b9u);
    c.r[2] = rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0cf1bd  sub edx, 3
    X86_AT(c, 0xcf1bdu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, 0x3u, 0, 4); }
    // 0cf1c0  cmp edx, 4
    X86_AT(c, 0xcf1c0u);
    (void)x86_sub(c, c.r[2], 0x4u, 0, 4);
    // 0cf1c3  ja 0xcf218
    X86_AT(c, 0xcf1c3u);
    if (x86_cc(c, 7)) { goto L_cf218; }
    X86_TICK(c, 7);
    // 0cf1c5  jmp dword ptr cs:[edx*4 + 0xcf1cd]
    X86_AT(c, 0xcf1c5u);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xCF1CDu)));
      switch (t) {
      case 0xcf1e1u: goto L_cf1e1;
      case 0xcf1f1u: goto L_cf1f1;
      case 0xcf201u: goto L_cf201;
      case 0xcf20au: goto L_cf20a;
      case 0xcf218u: goto L_cf218;
      default: x86_jump(c, t); return; } }
L_cf1e1:
    X86_TICK(c, 11);
    // 0cf1e1  mov dword ptr [ebp - 4], 0
    X86_AT(c, 0xcf1e1u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), 0x0u);
    // 0cf1e8  mov dword ptr [ebp - 8], 0xffffffff
    X86_AT(c, 0xcf1e8u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), 0xFFFFFFFFu);
    // 0cf1ef  jmp 0xcf218
    X86_AT(c, 0xcf1efu);
    goto L_cf218;
L_cf1f1:
    X86_TICK(c, 11);
    // 0cf1f1  mov dword ptr [ebp - 4], 0
    X86_AT(c, 0xcf1f1u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), 0x0u);
    // 0cf1f8  mov dword ptr [ebp - 8], 1
    X86_AT(c, 0xcf1f8u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), 0x1u);
    // 0cf1ff  jmp 0xcf218
    X86_AT(c, 0xcf1ffu);
    goto L_cf218;
L_cf201:
    X86_TICK(c, 9);
    // 0cf201  mov dword ptr [ebp - 4], 1
    X86_AT(c, 0xcf201u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), 0x1u);
    // 0cf208  jmp 0xcf211
    X86_AT(c, 0xcf208u);
    goto L_cf211;
L_cf20a:
    X86_TICK(c, 2);
    // 0cf20a  mov dword ptr [ebp - 4], 0xffffffff
    X86_AT(c, 0xcf20au);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), 0xFFFFFFFFu);
L_cf211:
    X86_TICK(c, 2);
    // 0cf211  mov dword ptr [ebp - 8], 0
    X86_AT(c, 0xcf211u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), 0x0u);
L_cf218:
    X86_TICK(c, 72);
    // 0cf218  mov eax, ebx
    X86_AT(c, 0xcf218u);
    c.r[0] = c.r[3];
    // 0cf21a  imul eax, dword ptr [ebp - 4]
    X86_AT(c, 0xcf21au);
    c.r[0] = x86_imul2(c, c.r[0], rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))), 4);
    // 0cf21e  xchg esi, eax
    X86_AT(c, 0xcf21eu);
    { uint32_t t = c.r[6]; c.r[6] = c.r[0]; c.r[0] = t; }
    // 0cf21f  mov eax, ebx
    X86_AT(c, 0xcf21fu);
    c.r[0] = c.r[3];
    // 0cf221  imul eax, dword ptr [ebp - 8]
    X86_AT(c, 0xcf221u);
    c.r[0] = x86_imul2(c, c.r[0], rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u))), 4);
    // 0cf225  mov dword ptr [ebp - 0xc], eax
    X86_AT(c, 0xcf225u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)), c.r[0]);
    // 0cf228  push 0xffffffff
    X86_AT(c, 0xcf228u);
    { uint32_t v = 0xFFFFFFFFu; push32(c, v); }
    // 0cf22a  push 0x46
    X86_AT(c, 0xcf22au);
    { uint32_t v = 0x46u; push32(c, v); }
    // 0cf22c  add eax, 5
    X86_AT(c, 0xcf22cu);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0x5u, 0, 4); }
    // 0cf22f  push eax
    X86_AT(c, 0xcf22fu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0cf230  lea eax, [esi + 5]
    X86_AT(c, 0xcf230u);
    c.r[0] = (uint32_t)(c.r[6] + 0x5u);
    // 0cf233  push eax
    X86_AT(c, 0xcf233u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0cf234  call 0xc6adc
    X86_AT(c, 0xcf234u);
    push32(c, 0xcf239u); x86_call_known(c, 0xc6adcu, f_000c6adc); X86_RET(c, 0xcf239u);
    X86_TICK(c, 21);
    // 0cf239  mov dword ptr [ebp - 0x28], eax
    X86_AT(c, 0xcf239u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFD8u)), c.r[0]);
    // 0cf23c  push 2
    X86_AT(c, 0xcf23cu);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0cf23e  push dword ptr [0xb033e]
    X86_AT(c, 0xcf23eu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xB033Eu))); push32(c, v); }
    // 0cf244  push dword ptr [0xb033a]
    X86_AT(c, 0xcf244u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xB033Au))); push32(c, v); }
    // 0cf24a  call 0xcba8c
    X86_AT(c, 0xcf24au);
    push32(c, 0xcf24fu); x86_call_known(c, 0xcba8cu, f_000cba8c); X86_RET(c, 0xcf24fu);
    X86_TICK(c, 9);
    // 0cf24f  add esp, 0x1c
    X86_AT(c, 0xcf24fu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x1Cu, 0, 4); }
    // 0cf252  cmp ebx, 1
    X86_AT(c, 0xcf252u);
    (void)x86_sub(c, c.r[3], 0x1u, 0, 4);
    // 0cf255  je 0xcf261
    X86_AT(c, 0xcf255u);
    if (x86_cc(c, 4)) { goto L_cf261; }
    X86_TICK(c, 9);
    // 0cf257  push 2
    X86_AT(c, 0xcf257u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0cf259  call 0xd6660
    X86_AT(c, 0xcf259u);
    push32(c, 0xcf25eu); x86_call_known(c, 0xd6660u, f_000d6660); X86_RET(c, 0xcf25eu);
    X86_TICK(c, 2);
    // 0cf25e  add esp, 4
    X86_AT(c, 0xcf25eu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
L_cf261:
    X86_TICK(c, 31);
    // 0cf261  push 1
    X86_AT(c, 0xcf261u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0cf263  mov eax, dword ptr [0xb033e]
    X86_AT(c, 0xcf263u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xB033Eu)));
    // 0cf268  add eax, dword ptr [ebp - 0xc]
    X86_AT(c, 0xcf268u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u))), 0, 4); }
    // 0cf26b  push eax
    X86_AT(c, 0xcf26bu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0cf26c  mov eax, esi
    X86_AT(c, 0xcf26cu);
    c.r[0] = c.r[6];
    // 0cf26e  add eax, dword ptr [0xb033a]
    X86_AT(c, 0xcf26eu);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[3] + (uint32_t)(0xB033Au))), 0, 4); }
    // 0cf274  push eax
    X86_AT(c, 0xcf274u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0cf275  call 0xcc538
    X86_AT(c, 0xcf275u);
    push32(c, 0xcf27au); x86_call_known(c, 0xcc538u, f_000cc538); X86_RET(c, 0xcf27au);
    X86_TICK(c, 15);
    // 0cf27a  xchg edi, eax
    X86_AT(c, 0xcf27au);
    { uint32_t t = c.r[7]; c.r[7] = c.r[0]; c.r[0] = t; }
    // 0cf27b  push dword ptr [ebp - 0x28]
    X86_AT(c, 0xcf27bu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFD8u))); push32(c, v); }
    // 0cf27e  call 0xc6c3c
    X86_AT(c, 0xcf27eu);
    push32(c, 0xcf283u); x86_call_known(c, 0xc6c3cu, f_000c6c3c); X86_RET(c, 0xcf283u);
    X86_TICK(c, 15);
    // 0cf283  inc ebx
    X86_AT(c, 0xcf283u);
    { uint32_t v = c.r[3]; c.r[3] = x86_inc(c, v, 4); }
    // 0cf284  add esp, 0x10
    X86_AT(c, 0xcf284u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0cf287  cmp ebx, dword ptr [ebp + 0x10]
    X86_AT(c, 0xcf287u);
    (void)x86_sub(c, c.r[3], rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u))), 0, 4);
    // 0cf28a  jg 0xcf29d
    X86_AT(c, 0xcf28au);
    if (x86_cc(c, 15)) { goto L_cf29d; }
    X86_TICK(c, 7);
    // 0cf28c  cmp edi, 0x8b
    X86_AT(c, 0xcf28cu);
    (void)x86_sub(c, c.r[7], 0x8Bu, 0, 4);
    // 0cf292  jge 0xcf29d
    X86_AT(c, 0xcf292u);
    if (x86_cc(c, 13)) { goto L_cf29d; }
    X86_TICK(c, 7);
    // 0cf294  cmp edi, 5
    X86_AT(c, 0xcf294u);
    (void)x86_sub(c, c.r[7], 0x5u, 0, 4);
    // 0cf297  jne 0xcf218
    X86_AT(c, 0xcf297u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xcf218u); goto L_cf218; }
L_cf29d:
    X86_TICK(c, 7);
    // 0cf29d  cmp edi, 0x8b
    X86_AT(c, 0xcf29du);
    (void)x86_sub(c, c.r[7], 0x8Bu, 0, 4);
    // 0cf2a3  jge 0xcf2b4
    X86_AT(c, 0xcf2a3u);
    if (x86_cc(c, 13)) { goto L_cf2b4; }
    X86_TICK(c, 9);
    // 0cf2a5  push 0x39c4
    X86_AT(c, 0xcf2a5u);
    { uint32_t v = 0x39C4u; push32(c, v); }
    // 0cf2aa  call 0xcc7bc
    X86_AT(c, 0xcf2aau);
    push32(c, 0xcf2afu); x86_call_known(c, 0xcc7bcu, f_000cc7bc); X86_RET(c, 0xcf2afu);
    X86_TICK(c, 7);
    // 0cf2af  jmp 0xcf496
    X86_AT(c, 0xcf2afu);
    goto L_cf496;
L_cf2b4:
    X86_TICK(c, 11);
    // 0cf2b4  push 0x64
    X86_AT(c, 0xcf2b4u);
    { uint32_t v = 0x64u; push32(c, v); }
    // 0cf2b6  push 1
    X86_AT(c, 0xcf2b6u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0cf2b8  call 0xc5df0
    X86_AT(c, 0xcf2b8u);
    push32(c, 0xcf2bdu); x86_call_known(c, 0xc5df0u, f_000c5df0); X86_RET(c, 0xcf2bdu);
    X86_TICK(c, 13);
    // 0cf2bd  add esp, 8
    X86_AT(c, 0xcf2bdu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0cf2c0  cmp eax, dword ptr [ebp + 0x18]
    X86_AT(c, 0xcf2c0u);
    (void)x86_sub(c, c.r[0], rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x18u))), 0, 4);
    // 0cf2c3  jg 0xcf49b
    X86_AT(c, 0xcf2c3u);
    if (x86_cc(c, 15)) { goto L_cf49b; }
    X86_TICK(c, 9);
    // 0cf2c9  push edi
    X86_AT(c, 0xcf2c9u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0cf2ca  call 0xcc898
    X86_AT(c, 0xcf2cau);
    push32(c, 0xcf2cfu); x86_call_known(c, 0xcc898u, f_000cc898); X86_RET(c, 0xcf2cfu);
    X86_TICK(c, 9);
    // 0cf2cf  push eax
    X86_AT(c, 0xcf2cfu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0cf2d0  call 0xcc884
    X86_AT(c, 0xcf2d0u);
    push32(c, 0xcf2d5u); x86_call_known(c, 0xcc884u, f_000cc884); X86_RET(c, 0xcf2d5u);
    X86_TICK(c, 15);
    // 0cf2d5  mov dword ptr [ebp - 0x24], eax
    X86_AT(c, 0xcf2d5u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFDCu)), c.r[0]);
    // 0cf2d8  lea eax, [esi + 5]
    X86_AT(c, 0xcf2d8u);
    c.r[0] = (uint32_t)(c.r[6] + 0x5u);
    // 0cf2db  push eax
    X86_AT(c, 0xcf2dbu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0cf2dc  mov dword ptr [ebp - 0x2c], eax
    X86_AT(c, 0xcf2dcu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFD4u)), c.r[0]);
    // 0cf2df  call 0xcc5ac
    X86_AT(c, 0xcf2dfu);
    push32(c, 0xcf2e4u); x86_call_known(c, 0xcc5acu, f_000cc5ac); X86_RET(c, 0xcf2e4u);
    X86_TICK(c, 19);
    // 0cf2e4  mov dword ptr [ebp - 0x14], eax
    X86_AT(c, 0xcf2e4u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu)), c.r[0]);
    // 0cf2e7  mov edx, dword ptr [ebp - 0xc]
    X86_AT(c, 0xcf2e7u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)));
    // 0cf2ea  add edx, 5
    X86_AT(c, 0xcf2eau);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, 0x5u, 0, 4); }
    // 0cf2ed  push edx
    X86_AT(c, 0xcf2edu);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0cf2ee  mov dword ptr [ebp - 0x30], edx
    X86_AT(c, 0xcf2eeu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFD0u)), c.r[2]);
    // 0cf2f1  call 0xcc5d8
    X86_AT(c, 0xcf2f1u);
    push32(c, 0xcf2f6u); x86_call_known(c, 0xcc5d8u, f_000cc5d8); X86_RET(c, 0xcf2f6u);
    X86_TICK(c, 23);
    // 0cf2f6  mov dword ptr [ebp - 0x18], eax
    X86_AT(c, 0xcf2f6u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE8u)), c.r[0]);
    // 0cf2f9  push 0
    X86_AT(c, 0xcf2f9u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0cf2fb  push 0x47
    X86_AT(c, 0xcf2fbu);
    { uint32_t v = 0x47u; push32(c, v); }
    // 0cf2fd  push dword ptr [ebp - 0x30]
    X86_AT(c, 0xcf2fdu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFD0u))); push32(c, v); }
    // 0cf300  push dword ptr [ebp - 0x2c]
    X86_AT(c, 0xcf300u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFD4u))); push32(c, v); }
    // 0cf303  call 0xc6adc
    X86_AT(c, 0xcf303u);
    push32(c, 0xcf308u); x86_call_known(c, 0xc6adcu, f_000c6adc); X86_RET(c, 0xcf308u);
    X86_TICK(c, 21);
    // 0cf308  mov dword ptr [ebp - 0x28], eax
    X86_AT(c, 0xcf308u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFD8u)), c.r[0]);
    // 0cf30b  push 2
    X86_AT(c, 0xcf30bu);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0cf30d  push dword ptr [0xb033e]
    X86_AT(c, 0xcf30du);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xB033Eu))); push32(c, v); }
    // 0cf313  push dword ptr [0xb033a]
    X86_AT(c, 0xcf313u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xB033Au))); push32(c, v); }
    // 0cf319  call 0xcba8c
    X86_AT(c, 0xcf319u);
    push32(c, 0xcf31eu); x86_call_known(c, 0xcba8cu, f_000cba8c); X86_RET(c, 0xcf31eu);
    X86_TICK(c, 19);
    // 0cf31e  push 1
    X86_AT(c, 0xcf31eu);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0cf320  push dword ptr [ebp - 0x18]
    X86_AT(c, 0xcf320u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE8u))); push32(c, v); }
    // 0cf323  push dword ptr [ebp - 0x14]
    X86_AT(c, 0xcf323u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu))); push32(c, v); }
    // 0cf326  call 0xcf714
    X86_AT(c, 0xcf326u);
    push32(c, 0xcf32bu); x86_call_known(c, 0xcf714u, f_000cf714); X86_RET(c, 0xcf32bu);
    X86_TICK(c, 31);
    // 0cf32b  mov dword ptr [ebp - 0x10], eax
    X86_AT(c, 0xcf32bu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u)), c.r[0]);
    // 0cf32e  lea eax, [eax*8]
    X86_AT(c, 0xcf32eu);
    c.r[0] = (uint32_t)(c.r[0] * 8);
    // 0cf335  lea eax, [eax + eax*4]
    X86_AT(c, 0xcf335u);
    c.r[0] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0cf338  mov edx, dword ptr [ebp + 0x14]
    X86_AT(c, 0xcf338u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x14u)));
    // 0cf33b  sub dword ptr [eax + 0xbefdc], edx
    X86_AT(c, 0xcf33bu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[0] + 0xBEFDCu)); uint32_t v = rd32(ea); wr32(ea, x86_sub(c, v, c.r[2], 0, 4)); }
    // 0cf341  add esp, 0x38
    X86_AT(c, 0xcf341u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x38u, 0, 4); }
    // 0cf344  cmp dword ptr [0x43eb8], 0
    X86_AT(c, 0xcf344u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0x43EB8u))), 0x0u, 0, 4);
    // 0cf34b  jne 0xcf36e
    X86_AT(c, 0xcf34bu);
    if (x86_cc(c, 5)) { goto L_cf36e; }
    X86_TICK(c, 12);
    // 0cf34d  cmp dword ptr [eax + 0xbefdc], 0
    X86_AT(c, 0xcf34du);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0xBEFDCu))), 0x0u, 0, 4);
    // 0cf354  jg 0xcf35f
    X86_AT(c, 0xcf354u);
    if (x86_cc(c, 15)) { goto L_cf35f; }
    X86_TICK(c, 11);
    // 0cf356  push 0xf
    X86_AT(c, 0xcf356u);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0cf358  push 0x39d8
    X86_AT(c, 0xcf358u);
    { uint32_t v = 0x39D8u; push32(c, v); }
    // 0cf35d  jmp 0xcf366
    X86_AT(c, 0xcf35du);
    goto L_cf366;
L_cf35f:
    X86_TICK(c, 4);
    // 0cf35f  push 0xf
    X86_AT(c, 0xcf35fu);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0cf361  push 0x39f0
    X86_AT(c, 0xcf361u);
    { uint32_t v = 0x39F0u; push32(c, v); }
L_cf366:
    X86_TICK(c, 7);
    // 0cf366  call 0xcc830
    X86_AT(c, 0xcf366u);
    push32(c, 0xcf36bu); x86_call_known(c, 0xcc830u, f_000cc830); X86_RET(c, 0xcf36bu);
    X86_TICK(c, 2);
    // 0cf36b  add esp, 8
    X86_AT(c, 0xcf36bu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
L_cf36e:
    X86_TICK(c, 9);
    // 0cf36e  push edi
    X86_AT(c, 0xcf36eu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0cf36f  call 0xcc898
    X86_AT(c, 0xcf36fu);
    push32(c, 0xcf374u); x86_call_known(c, 0xcc898u, f_000cc898); X86_RET(c, 0xcf374u);
    X86_TICK(c, 11);
    // 0cf374  push eax
    X86_AT(c, 0xcf374u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0cf375  push 7
    X86_AT(c, 0xcf375u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cf377  call 0xc8cdc
    X86_AT(c, 0xcf377u);
    push32(c, 0xcf37cu); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xcf37cu);
    X86_TICK(c, 22);
    // 0cf37c  mov eax, dword ptr [ebp - 0x10]
    X86_AT(c, 0xcf37cu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u)));
    // 0cf37f  lea eax, [eax*8]
    X86_AT(c, 0xcf37fu);
    c.r[0] = (uint32_t)(c.r[0] * 8);
    // 0cf386  lea eax, [eax + eax*4]
    X86_AT(c, 0xcf386u);
    c.r[0] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0cf389  add esp, 0xc
    X86_AT(c, 0xcf389u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0cf38c  cmp dword ptr [eax + 0xbefdc], 0
    X86_AT(c, 0xcf38cu);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0xBEFDCu))), 0x0u, 0, 4);
    // 0cf393  jg 0xcf3dc
    X86_AT(c, 0xcf393u);
    if (x86_cc(c, 15)) { goto L_cf3dc; }
    X86_TICK(c, 13);
    // 0cf395  push 0xf
    X86_AT(c, 0xcf395u);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0cf397  push 0x3a04
    X86_AT(c, 0xcf397u);
    { uint32_t v = 0x3A04u; push32(c, v); }
    // 0cf39c  mov dword ptr [ebp - 0x2c], eax
    X86_AT(c, 0xcf39cu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFD4u)), c.r[0]);
    // 0cf39f  call 0xcc830
    X86_AT(c, 0xcf39fu);
    push32(c, 0xcf3a4u); x86_call_known(c, 0xcc830u, f_000cc830); X86_RET(c, 0xcf3a4u);
    X86_TICK(c, 17);
    // 0cf3a4  add esp, 8
    X86_AT(c, 0xcf3a4u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0cf3a7  mov eax, dword ptr [ebp - 0x2c]
    X86_AT(c, 0xcf3a7u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFD4u)));
    // 0cf3aa  mov eax, dword ptr [eax + 0xbefcc]
    X86_AT(c, 0xcf3aau);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0xBEFCCu)));
    // 0cf3b0  cmp eax, 0xa5
    X86_AT(c, 0xcf3b0u);
    (void)x86_sub(c, c.r[0], 0xA5u, 0, 4);
    // 0cf3b5  jl 0xcf3c9
    X86_AT(c, 0xcf3b5u);
    if (x86_cc(c, 12)) { goto L_cf3c9; }
    X86_TICK(c, 7);
    // 0cf3b7  cmp eax, 0xab
    X86_AT(c, 0xcf3b7u);
    (void)x86_sub(c, c.r[0], 0xABu, 0, 4);
    // 0cf3bc  jg 0xcf3c9
    X86_AT(c, 0xcf3bcu);
    if (x86_cc(c, 15)) { goto L_cf3c9; }
    X86_TICK(c, 12);
    // 0cf3be  push dword ptr [ebp - 0x10]
    X86_AT(c, 0xcf3beu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u))); push32(c, v); }
    // 0cf3c1  call 0xcf14c
    X86_AT(c, 0xcf3c1u);
    push32(c, 0xcf3c6u); x86_call_known(c, 0xcf14cu, f_000cf14c); X86_RET(c, 0xcf3c6u);
    X86_TICK(c, 2);
    // 0cf3c6  add esp, 4
    X86_AT(c, 0xcf3c6u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
L_cf3c9:
    X86_TICK(c, 12);
    // 0cf3c9  cmp dword ptr [0xaa134], 1
    X86_AT(c, 0xcf3c9u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xAA134u))), 0x1u, 0, 4);
    // 0cf3d0  jne 0xcf3dc
    X86_AT(c, 0xcf3d0u);
    if (x86_cc(c, 5)) { goto L_cf3dc; }
    X86_TICK(c, 2);
    // 0cf3d2  mov dword ptr [0xaa134], 0
    X86_AT(c, 0xcf3d2u);
    wr32((c.sbase[3] + (uint32_t)(0xAA134u)), 0x0u);
L_cf3dc:
    X86_TICK(c, 20);
    // 0cf3dc  mov eax, dword ptr [ebp - 0x10]
    X86_AT(c, 0xcf3dcu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u)));
    // 0cf3df  lea eax, [eax*8]
    X86_AT(c, 0xcf3dfu);
    c.r[0] = (uint32_t)(c.r[0] * 8);
    // 0cf3e6  lea eax, [eax + eax*4]
    X86_AT(c, 0xcf3e6u);
    c.r[0] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0cf3e9  cmp dword ptr [eax + 0xbefdc], 0
    X86_AT(c, 0xcf3e9u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0xBEFDCu))), 0x0u, 0, 4);
    // 0cf3f0  jle 0xcf430
    X86_AT(c, 0xcf3f0u);
    if (x86_cc(c, 14)) { goto L_cf430; }
    X86_TICK(c, 11);
    // 0cf3f2  push 0xf
    X86_AT(c, 0xcf3f2u);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0cf3f4  push 0x3a14
    X86_AT(c, 0xcf3f4u);
    { uint32_t v = 0x3A14u; push32(c, v); }
    // 0cf3f9  call 0xcc830
    X86_AT(c, 0xcf3f9u);
    push32(c, 0xcf3feu); x86_call_known(c, 0xcc830u, f_000cc830); X86_RET(c, 0xcf3feu);
    X86_TICK(c, 16);
    // 0cf3fe  push 3
    X86_AT(c, 0xcf3feu);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0cf400  push dword ptr [ebp + 0x14]
    X86_AT(c, 0xcf400u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x14u))); push32(c, v); }
    // 0cf403  push 7
    X86_AT(c, 0xcf403u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cf405  call 0xc8cb8
    X86_AT(c, 0xcf405u);
    push32(c, 0xcf40au); x86_call_known(c, 0xc8cb8u, f_000c8cb8); X86_RET(c, 0xcf40au);
    X86_TICK(c, 9);
    // 0cf40a  push 0x3a18
    X86_AT(c, 0xcf40au);
    { uint32_t v = 0x3A18u; push32(c, v); }
    // 0cf40f  call 0xcc7bc
    X86_AT(c, 0xcf40fu);
    push32(c, 0xcf414u); x86_call_known(c, 0xcc7bcu, f_000cc7bc); X86_RET(c, 0xcf414u);
    X86_TICK(c, 14);
    // 0cf414  add esp, 0x18
    X86_AT(c, 0xcf414u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x18u, 0, 4); }
    // 0cf417  cmp dword ptr [0xb0332], 4
    X86_AT(c, 0xcf417u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xB0332u))), 0x4u, 0, 4);
    // 0cf41e  jne 0xcf424
    X86_AT(c, 0xcf41eu);
    if (x86_cc(c, 5)) { goto L_cf424; }
    X86_TICK(c, 9);
    // 0cf420  push 4
    X86_AT(c, 0xcf420u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0cf422  jmp 0xcf426
    X86_AT(c, 0xcf422u);
    goto L_cf426;
L_cf424:
    X86_TICK(c, 2);
    // 0cf424  push 7
    X86_AT(c, 0xcf424u);
    { uint32_t v = 0x7u; push32(c, v); }
L_cf426:
    X86_TICK(c, 7);
    // 0cf426  call 0xc5ca4
    X86_AT(c, 0xcf426u);
    push32(c, 0xcf42bu); x86_call_known(c, 0xc5ca4u, f_000c5ca4); X86_RET(c, 0xcf42bu);
    X86_TICK(c, 9);
    // 0cf42b  add esp, 4
    X86_AT(c, 0xcf42bu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0cf42e  jmp 0xcf48e
    X86_AT(c, 0xcf42eu);
    goto L_cf48e;
L_cf430:
    X86_TICK(c, 17);
    // 0cf430  push dword ptr [ebp - 0x18]
    X86_AT(c, 0xcf430u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE8u))); push32(c, v); }
    // 0cf433  push dword ptr [ebp - 0x14]
    X86_AT(c, 0xcf433u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu))); push32(c, v); }
    // 0cf436  call 0xcf758
    X86_AT(c, 0xcf436u);
    push32(c, 0xcf43bu); x86_call_known(c, 0xcf758u, f_000cf758); X86_RET(c, 0xcf43bu);
    X86_TICK(c, 24);
    // 0cf43b  dec dword ptr [0xaa2a8]
    X86_AT(c, 0xcf43bu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xAA2A8u)); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 0cf441  mov eax, dword ptr [edi*4 + 0xa9f14]
    X86_AT(c, 0xcf441u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[7] * 4 + 0xA9F14u)));
    // 0cf448  shl eax, 2
    X86_AT(c, 0xcf448u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x2u, 4, w); if (w) c.r[0] = r; }
    // 0cf44b  push eax
    X86_AT(c, 0xcf44bu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0cf44c  push 1
    X86_AT(c, 0xcf44cu);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0cf44e  call 0xc5df0
    X86_AT(c, 0xcf44eu);
    push32(c, 0xcf453u); x86_call_known(c, 0xc5df0u, f_000c5df0); X86_RET(c, 0xcf453u);
    X86_TICK(c, 21);
    // 0cf453  add eax, 0xa
    X86_AT(c, 0xcf453u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0xAu, 0, 4); }
    // 0cf456  mov dword ptr [ebp - 0x20], eax
    X86_AT(c, 0xcf456u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE0u)), c.r[0]);
    // 0cf459  mov edx, dword ptr [edi*4 + 0xa9f14]
    X86_AT(c, 0xcf459u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[7] * 4 + 0xA9F14u)));
    // 0cf460  lea edx, [edx + edx*4]
    X86_AT(c, 0xcf460u);
    c.r[2] = (uint32_t)(c.r[2] + c.r[2] * 4);
    // 0cf463  push edx
    X86_AT(c, 0xcf463u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0cf464  push 2
    X86_AT(c, 0xcf464u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0cf466  call 0xc5df0
    X86_AT(c, 0xcf466u);
    push32(c, 0xcf46bu); x86_call_known(c, 0xc5df0u, f_000c5df0); X86_RET(c, 0xcf46bu);
    X86_TICK(c, 18);
    // 0cf46b  mov dword ptr [ebp - 0x1c], eax
    X86_AT(c, 0xcf46bu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE4u)), c.r[0]);
    // 0cf46e  add dword ptr [0xb031e], eax
    X86_AT(c, 0xcf46eu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xB031Eu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 0cf474  push 8
    X86_AT(c, 0xcf474u);
    { uint32_t v = 0x8u; push32(c, v); }
    // 0cf476  call 0xc5ca4
    X86_AT(c, 0xcf476u);
    push32(c, 0xcf47bu); x86_call_known(c, 0xc5ca4u, f_000c5ca4); X86_RET(c, 0xcf47bu);
    X86_TICK(c, 17);
    // 0cf47b  push dword ptr [ebp - 0x24]
    X86_AT(c, 0xcf47bu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFDCu))); push32(c, v); }
    // 0cf47e  push dword ptr [ebp - 0x20]
    X86_AT(c, 0xcf47eu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE0u))); push32(c, v); }
    // 0cf481  call 0xcc8b8
    X86_AT(c, 0xcf481u);
    push32(c, 0xcf486u); x86_call_known(c, 0xcc8b8u, f_000cc8b8); X86_RET(c, 0xcf486u);
    X86_TICK(c, 7);
    // 0cf486  call 0xcc6b0
    X86_AT(c, 0xcf486u);
    push32(c, 0xcf48bu); x86_call_known(c, 0xcc6b0u, f_000cc6b0); X86_RET(c, 0xcf48bu);
    X86_TICK(c, 2);
    // 0cf48b  add esp, 0x24
    X86_AT(c, 0xcf48bu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x24u, 0, 4); }
L_cf48e:
    X86_TICK(c, 12);
    // 0cf48e  push dword ptr [ebp - 0x28]
    X86_AT(c, 0xcf48eu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFD8u))); push32(c, v); }
    // 0cf491  call 0xc6c3c
    X86_AT(c, 0xcf491u);
    push32(c, 0xcf496u); x86_call_known(c, 0xc6c3cu, f_000c6c3c); X86_RET(c, 0xcf496u);
L_cf496:
    X86_TICK(c, 9);
    // 0cf496  add esp, 4
    X86_AT(c, 0xcf496u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0cf499  jmp 0xcf4aa
    X86_AT(c, 0xcf499u);
    goto L_cf4aa;
L_cf49b:
    X86_TICK(c, 11);
    // 0cf49b  push 0xf
    X86_AT(c, 0xcf49bu);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0cf49d  push 0x3a3c
    X86_AT(c, 0xcf49du);
    { uint32_t v = 0x3A3Cu; push32(c, v); }
    // 0cf4a2  call 0xcc830
    X86_AT(c, 0xcf4a2u);
    push32(c, 0xcf4a7u); x86_call_known(c, 0xcc830u, f_000cc830); X86_RET(c, 0xcf4a7u);
    X86_TICK(c, 2);
    // 0cf4a7  add esp, 8
    X86_AT(c, 0xcf4a7u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
L_cf4aa:
    X86_TICK(c, 28);
    // 0cf4aa  pop edi
    X86_AT(c, 0xcf4aau);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0cf4ab  pop esi
    X86_AT(c, 0xcf4abu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0cf4ac  pop ebx
    X86_AT(c, 0xcf4acu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0cf4ad  leave 
    X86_AT(c, 0xcf4adu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0cf4ae  ret 
    X86_AT(c, 0xcf4aeu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xcf184u, "ran off the end of a function");
}
void f_000cf4b0(X86Cpu& c) {
    X86_TICK(c, 22);
    // 0cf4b0  push ebp
    X86_AT(c, 0xcf4b0u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0cf4b1  mov ebp, esp
    X86_AT(c, 0xcf4b1u);
    c.r[5] = c.r[4];
    // 0cf4b3  push ebx
    X86_AT(c, 0xcf4b3u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0cf4b4  push esi
    X86_AT(c, 0xcf4b4u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0cf4b5  push edi
    X86_AT(c, 0xcf4b5u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0cf4b6  cmp dword ptr [ebp + 0xc], 7
    X86_AT(c, 0xcf4b6u);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))), 0x7u, 0, 4);
    // 0cf4ba  jne 0xcf4e5
    X86_AT(c, 0xcf4bau);
    if (x86_cc(c, 5)) { goto L_cf4e5; }
    X86_TICK(c, 34);
    // 0cf4bc  mov eax, dword ptr [0xb0326]
    X86_AT(c, 0xcf4bcu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xB0326u)));
    // 0cf4c1  mov ebx, dword ptr [eax*4 + 0xab014]
    X86_AT(c, 0xcf4c1u);
    c.r[3] = rd32((c.sbase[3] + (uint32_t)(c.r[0] * 4 + 0xAB014u)));
    // 0cf4c8  mov esi, dword ptr [0xb0306]
    X86_AT(c, 0xcf4c8u);
    c.r[6] = rd32((c.sbase[3] + (uint32_t)(0xB0306u)));
    // 0cf4ce  add esi, 0x32
    X86_AT(c, 0xcf4ceu);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x32u, 0, 4); }
    // 0cf4d1  shl eax, 3
    X86_AT(c, 0xcf4d1u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x3u, 4, w); if (w) c.r[0] = r; }
    // 0cf4d4  add eax, dword ptr [0xb0302]
    X86_AT(c, 0xcf4d4u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[3] + (uint32_t)(0xB0302u))), 0, 4); }
    // 0cf4da  push eax
    X86_AT(c, 0xcf4dau);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0cf4db  push 2
    X86_AT(c, 0xcf4dbu);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0cf4dd  call 0xc5df0
    X86_AT(c, 0xcf4ddu);
    push32(c, 0xcf4e2u); x86_call_known(c, 0xc5df0u, f_000c5df0); X86_RET(c, 0xcf4e2u);
    X86_TICK(c, 10);
    // 0cf4e2  xchg edi, eax
    X86_AT(c, 0xcf4e2u);
    { uint32_t t = c.r[7]; c.r[7] = c.r[0]; c.r[0] = t; }
    // 0cf4e3  jmp 0xcf505
    X86_AT(c, 0xcf4e3u);
    goto L_cf505;
L_cf4e5:
    X86_TICK(c, 23);
    // 0cf4e5  mov ebx, 3
    X86_AT(c, 0xcf4e5u);
    c.r[3] = 0x3u;
    // 0cf4ea  mov esi, 0x50
    X86_AT(c, 0xcf4eau);
    c.r[6] = 0x50u;
    // 0cf4ef  mov eax, dword ptr [0xb0332]
    X86_AT(c, 0xcf4efu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xB0332u)));
    // 0cf4f4  lea eax, [eax + eax*4]
    X86_AT(c, 0xcf4f4u);
    c.r[0] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0cf4f7  add eax, eax
    X86_AT(c, 0xcf4f7u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, c.r[0], 0, 4); }
    // 0cf4f9  push eax
    X86_AT(c, 0xcf4f9u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0cf4fa  push 1
    X86_AT(c, 0xcf4fau);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0cf4fc  call 0xc5df0
    X86_AT(c, 0xcf4fcu);
    push32(c, 0xcf501u); x86_call_known(c, 0xc5df0u, f_000c5df0); X86_RET(c, 0xcf501u);
    X86_TICK(c, 5);
    // 0cf501  xchg edi, eax
    X86_AT(c, 0xcf501u);
    { uint32_t t = c.r[7]; c.r[7] = c.r[0]; c.r[0] = t; }
    // 0cf502  add edi, 0x1e
    X86_AT(c, 0xcf502u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x1Eu, 0, 4); }
L_cf505:
    X86_TICK(c, 27);
    // 0cf505  add esp, 8
    X86_AT(c, 0xcf505u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0cf508  push 0xa1
    X86_AT(c, 0xcf508u);
    { uint32_t v = 0xA1u; push32(c, v); }
    // 0cf50d  push esi
    X86_AT(c, 0xcf50du);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0cf50e  push edi
    X86_AT(c, 0xcf50eu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0cf50f  push ebx
    X86_AT(c, 0xcf50fu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0cf510  push dword ptr [ebp + 0xc]
    X86_AT(c, 0xcf510u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))); push32(c, v); }
    // 0cf513  push dword ptr [ebp + 8]
    X86_AT(c, 0xcf513u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, v); }
    // 0cf516  call 0xcf184
    X86_AT(c, 0xcf516u);
    push32(c, 0xcf51bu); x86_call_known(c, 0xcf184u, f_000cf184); X86_RET(c, 0xcf51bu);
    X86_TICK(c, 30);
    // 0cf51b  add esp, 0x18
    X86_AT(c, 0xcf51bu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x18u, 0, 4); }
    // 0cf51e  pop edi
    X86_AT(c, 0xcf51eu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0cf51f  pop esi
    X86_AT(c, 0xcf51fu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0cf520  pop ebx
    X86_AT(c, 0xcf520u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0cf521  leave 
    X86_AT(c, 0xcf521u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0cf522  ret 
    X86_AT(c, 0xcf522u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xcf4b0u, "ran off the end of a function");
}
void f_000cf524(X86Cpu& c) {
    X86_TICK(c, 19);
    // 0cf524  push ebp
    X86_AT(c, 0xcf524u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0cf525  mov ebp, esp
    X86_AT(c, 0xcf525u);
    c.r[5] = c.r[4];
    // 0cf527  push ebx
    X86_AT(c, 0xcf527u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0cf528  push edi
    X86_AT(c, 0xcf528u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0cf529  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0xcf529u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0cf52c  cmp edi, 0xffffffff
    X86_AT(c, 0xcf52cu);
    (void)x86_sub(c, c.r[7], 0xFFFFFFFFu, 0, 4);
    // 0cf52f  jne 0xcf539
    X86_AT(c, 0xcf52fu);
    if (x86_cc(c, 5)) { goto L_cf539; }
    X86_TICK(c, 7);
    // 0cf531  call 0xcf8e0
    X86_AT(c, 0xcf531u);
    push32(c, 0xcf536u); x86_call_known(c, 0xcf8e0u, f_000cf8e0); X86_RET(c, 0xcf536u);
    X86_TICK(c, 10);
    // 0cf536  xchg ebx, eax
    X86_AT(c, 0xcf536u);
    { uint32_t t = c.r[3]; c.r[3] = c.r[0]; c.r[0] = t; }
    // 0cf537  jmp 0xcf53b
    X86_AT(c, 0xcf537u);
    goto L_cf53b;
L_cf539:
    X86_TICK(c, 2);
    // 0cf539  mov ebx, edi
    X86_AT(c, 0xcf539u);
    c.r[3] = c.r[7];
L_cf53b:
    X86_TICK(c, 7);
    // 0cf53b  cmp bl, 3
    X86_AT(c, 0xcf53bu);
    (void)x86_sub(c, g8(c, 3), 0x3u, 0, 1);
    // 0cf53e  je 0xcf55e
    X86_AT(c, 0xcf53eu);
    if (x86_cc(c, 4)) { goto L_cf55e; }
    X86_TICK(c, 7);
    // 0cf540  cmp bl, 7
    X86_AT(c, 0xcf540u);
    (void)x86_sub(c, g8(c, 3), 0x7u, 0, 1);
    // 0cf543  je 0xcf55e
    X86_AT(c, 0xcf543u);
    if (x86_cc(c, 4)) { goto L_cf55e; }
    X86_TICK(c, 7);
    // 0cf545  cmp bl, 5
    X86_AT(c, 0xcf545u);
    (void)x86_sub(c, g8(c, 3), 0x5u, 0, 1);
    // 0cf548  je 0xcf55e
    X86_AT(c, 0xcf548u);
    if (x86_cc(c, 4)) { goto L_cf55e; }
    X86_TICK(c, 7);
    // 0cf54a  cmp bl, 6
    X86_AT(c, 0xcf54au);
    (void)x86_sub(c, g8(c, 3), 0x6u, 0, 1);
    // 0cf54d  je 0xcf55e
    X86_AT(c, 0xcf54du);
    if (x86_cc(c, 4)) { goto L_cf55e; }
    X86_TICK(c, 9);
    // 0cf54f  push 0x3a5c
    X86_AT(c, 0xcf54fu);
    { uint32_t v = 0x3A5Cu; push32(c, v); }
    // 0cf554  call 0xcc7bc
    X86_AT(c, 0xcf554u);
    push32(c, 0xcf559u); x86_call_known(c, 0xcc7bcu, f_000cc7bc); X86_RET(c, 0xcf559u);
    X86_TICK(c, 9);
    // 0cf559  add esp, 4
    X86_AT(c, 0xcf559u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0cf55c  jmp 0xcf579
    X86_AT(c, 0xcf55cu);
    goto L_cf579;
L_cf55e:
    X86_TICK(c, 15);
    // 0cf55e  movzx ebx, bl
    X86_AT(c, 0xcf55eu);
    c.r[3] = g8(c, 3);
    // 0cf561  push dword ptr [ebx*4 + 0xaa274]
    X86_AT(c, 0xcf561u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] * 4 + 0xAA274u))); push32(c, v); }
    // 0cf568  call 0xcc7bc
    X86_AT(c, 0xcf568u);
    push32(c, 0xcf56du); x86_call_known(c, 0xcc7bcu, f_000cc7bc); X86_RET(c, 0xcf56du);
    X86_TICK(c, 14);
    // 0cf56d  push dword ptr [ebp + 0xc]
    X86_AT(c, 0xcf56du);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))); push32(c, v); }
    // 0cf570  push ebx
    X86_AT(c, 0xcf570u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0cf571  call 0xcf4b0
    X86_AT(c, 0xcf571u);
    push32(c, 0xcf576u); x86_call_known(c, 0xcf4b0u, f_000cf4b0); X86_RET(c, 0xcf576u);
    X86_TICK(c, 2);
    // 0cf576  add esp, 0xc
    X86_AT(c, 0xcf576u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
L_cf579:
    X86_TICK(c, 24);
    // 0cf579  pop edi
    X86_AT(c, 0xcf579u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0cf57a  pop ebx
    X86_AT(c, 0xcf57au);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0cf57b  leave 
    X86_AT(c, 0xcf57bu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0cf57c  ret 
    X86_AT(c, 0xcf57cu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xcf524u, "ran off the end of a function");
}
void f_000cf580(X86Cpu& c) {
    X86_TICK(c, 15);
    // 0cf580  push ebp
    X86_AT(c, 0xcf580u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0cf581  mov ebp, esp
    X86_AT(c, 0xcf581u);
    c.r[5] = c.r[4];
    // 0cf583  push 0xf
    X86_AT(c, 0xcf583u);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0cf585  push 0x3a74
    X86_AT(c, 0xcf585u);
    { uint32_t v = 0x3A74u; push32(c, v); }
    // 0cf58a  call 0xcc830
    X86_AT(c, 0xcf58au);
    push32(c, 0xcf58fu); x86_call_known(c, 0xcc830u, f_000cc830); X86_RET(c, 0xcf58fu);
    X86_TICK(c, 18);
    // 0cf58f  mov eax, dword ptr [0xb0326]
    X86_AT(c, 0xcf58fu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xB0326u)));
    // 0cf594  push dword ptr [eax*4 + 0xab054]
    X86_AT(c, 0xcf594u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[0] * 4 + 0xAB054u))); push32(c, v); }
    // 0cf59b  push 7
    X86_AT(c, 0xcf59bu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cf59d  call 0xc8cdc
    X86_AT(c, 0xcf59du);
    push32(c, 0xcf5a2u); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xcf5a2u);
    X86_TICK(c, 11);
    // 0cf5a2  push 0xf
    X86_AT(c, 0xcf5a2u);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0cf5a4  push 0x3a9c
    X86_AT(c, 0xcf5a4u);
    { uint32_t v = 0x3A9Cu; push32(c, v); }
    // 0cf5a9  call 0xcc830
    X86_AT(c, 0xcf5a9u);
    push32(c, 0xcf5aeu); x86_call_known(c, 0xcc830u, f_000cc830); X86_RET(c, 0xcf5aeu);
    X86_TICK(c, 18);
    // 0cf5ae  mov eax, dword ptr [0xb0326]
    X86_AT(c, 0xcf5aeu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xB0326u)));
    // 0cf5b3  add esp, 0x18
    X86_AT(c, 0xcf5b3u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x18u, 0, 4); }
    // 0cf5b6  cmp dword ptr [eax*4 + 0xab014], 0
    X86_AT(c, 0xcf5b6u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[0] * 4 + 0xAB014u))), 0x0u, 0, 4);
    // 0cf5be  jne 0xcf5d6
    X86_AT(c, 0xcf5beu);
    if (x86_cc(c, 5)) { goto L_cf5d6; }
    X86_TICK(c, 9);
    // 0cf5c0  push 0x3aa8
    X86_AT(c, 0xcf5c0u);
    { uint32_t v = 0x3AA8u; push32(c, v); }
    // 0cf5c5  call 0xcc7bc
    X86_AT(c, 0xcf5c5u);
    push32(c, 0xcf5cau); x86_call_known(c, 0xcc7bcu, f_000cc7bc); X86_RET(c, 0xcf5cau);
    X86_TICK(c, 9);
    // 0cf5ca  push 1
    X86_AT(c, 0xcf5cau);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0cf5cc  call 0xc5ca4
    X86_AT(c, 0xcf5ccu);
    push32(c, 0xcf5d1u); x86_call_known(c, 0xc5ca4u, f_000c5ca4); X86_RET(c, 0xcf5d1u);
    X86_TICK(c, 9);
    // 0cf5d1  add esp, 8
    X86_AT(c, 0xcf5d1u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0cf5d4  jmp 0xcf5ff
    X86_AT(c, 0xcf5d4u);
    goto L_cf5ff;
L_cf5d6:
    X86_TICK(c, 12);
    // 0cf5d6  cmp dword ptr [0xb52f8], 3
    X86_AT(c, 0xcf5d6u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xB52F8u))), 0x3u, 0, 4);
    // 0cf5dd  jne 0xcf5e6
    X86_AT(c, 0xcf5ddu);
    if (x86_cc(c, 5)) { goto L_cf5e6; }
    X86_TICK(c, 7);
    // 0cf5df  call 0xcf0cc
    X86_AT(c, 0xcf5dfu);
    push32(c, 0xcf5e4u); x86_call_known(c, 0xcf0ccu, f_000cf0cc); X86_RET(c, 0xcf5e4u);
    X86_TICK(c, 7);
    // 0cf5e4  jmp 0xcf5ff
    X86_AT(c, 0xcf5e4u);
    goto L_cf5ff;
L_cf5e6:
    X86_TICK(c, 11);
    // 0cf5e6  push 0x3ab0
    X86_AT(c, 0xcf5e6u);
    { uint32_t v = 0x3AB0u; push32(c, v); }
    // 0cf5eb  push 7
    X86_AT(c, 0xcf5ebu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cf5ed  call 0xc8cdc
    X86_AT(c, 0xcf5edu);
    push32(c, 0xcf5f2u); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xcf5f2u);
    X86_TICK(c, 14);
    // 0cf5f2  push 7
    X86_AT(c, 0xcf5f2u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cf5f4  push dword ptr [ebp + 8]
    X86_AT(c, 0xcf5f4u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, v); }
    // 0cf5f7  call 0xcf524
    X86_AT(c, 0xcf5f7u);
    push32(c, 0xcf5fcu); x86_call_known(c, 0xcf524u, f_000cf524); X86_RET(c, 0xcf5fcu);
    X86_TICK(c, 2);
    // 0cf5fc  add esp, 0x10
    X86_AT(c, 0xcf5fcu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
L_cf5ff:
    X86_TICK(c, 16);
    // 0cf5ff  leave 
    X86_AT(c, 0xcf5ffu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0cf600  ret 
    X86_AT(c, 0xcf600u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xcf580u, "ran off the end of a function");
}
void f_000cf604(X86Cpu& c) {
    X86_TICK(c, 4);
    // 0cf604  push edi
    X86_AT(c, 0xcf604u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0cf605  sub edi, edi
    X86_AT(c, 0xcf605u);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
L_cf607:
    X86_TICK(c, 9);
    // 0cf607  push 4
    X86_AT(c, 0xcf607u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0cf609  call 0xc81e4
    X86_AT(c, 0xcf609u);
    push32(c, 0xcf60eu); x86_call_known(c, 0xc81e4u, f_000c81e4); X86_RET(c, 0xcf60eu);
    X86_TICK(c, 9);
    // 0cf60e  add esp, 4
    X86_AT(c, 0xcf60eu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0cf611  and al, al
    X86_AT(c, 0xcf611u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & g8(c, 0), 1)); }
    // 0cf613  jne 0xcf61f
    X86_AT(c, 0xcf613u);
    if (x86_cc(c, 5)) { goto L_cf61f; }
    X86_TICK(c, 11);
    // 0cf615  mov eax, edi
    X86_AT(c, 0xcf615u);
    c.r[0] = c.r[7];
    // 0cf617  inc edi
    X86_AT(c, 0xcf617u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0cf618  cmp eax, 0x2710
    X86_AT(c, 0xcf618u);
    (void)x86_sub(c, c.r[0], 0x2710u, 0, 4);
    // 0cf61d  jl 0xcf607
    X86_AT(c, 0xcf61du);
    if (x86_cc(c, 12)) { X86_POLL(c, 0xcf607u); goto L_cf607; }
L_cf61f:
    X86_TICK(c, 14);
    // 0cf61f  pop edi
    X86_AT(c, 0xcf61fu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0cf620  ret 
    X86_AT(c, 0xcf620u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xcf604u, "ran off the end of a function");
}
void f_000cf624(X86Cpu& c) {
    X86_TICK(c, 24);
    // 0cf624  push ebp
    X86_AT(c, 0xcf624u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0cf625  mov ebp, esp
    X86_AT(c, 0xcf625u);
    c.r[5] = c.r[4];
    // 0cf627  push dword ptr [ebp + 8]
    X86_AT(c, 0xcf627u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, v); }
    // 0cf62a  push 0x1a
    X86_AT(c, 0xcf62au);
    { uint32_t v = 0x1Au; push32(c, v); }
    // 0cf62c  push 0x11c
    X86_AT(c, 0xcf62cu);
    { uint32_t v = 0x11Cu; push32(c, v); }
    // 0cf631  push 0x1a
    X86_AT(c, 0xcf631u);
    { uint32_t v = 0x1Au; push32(c, v); }
    // 0cf633  push 0x22
    X86_AT(c, 0xcf633u);
    { uint32_t v = 0x22u; push32(c, v); }
    // 0cf635  call 0xc9378
    X86_AT(c, 0xcf635u);
    push32(c, 0xcf63au); x86_call_known(c, 0xc9378u, f_000c9378); X86_RET(c, 0xcf63au);
    X86_TICK(c, 16);
    // 0cf63a  leave 
    X86_AT(c, 0xcf63au);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0cf63b  ret 
    X86_AT(c, 0xcf63bu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xcf624u, "ran off the end of a function");
}
void f_000cf660(X86Cpu& c) {
    X86_TICK(c, 4);
    // 0cf660  push edi
    X86_AT(c, 0xcf660u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0cf661  mov edi, 1
    X86_AT(c, 0xcf661u);
    c.r[7] = 0x1u;
L_cf666:
    X86_TICK(c, 7);
    // 0cf666  cmp edi, 0x80
    X86_AT(c, 0xcf666u);
    (void)x86_sub(c, c.r[7], 0x80u, 0, 4);
    // 0cf66c  jge 0xcf6ac
    X86_AT(c, 0xcf66cu);
    if (x86_cc(c, 13)) { goto L_cf6ac; }
    X86_TICK(c, 31);
    // 0cf66e  lea eax, [edi*8]
    X86_AT(c, 0xcf66eu);
    c.r[0] = (uint32_t)(c.r[7] * 8);
    // 0cf675  lea eax, [eax + eax*4]
    X86_AT(c, 0xcf675u);
    c.r[0] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0cf678  sub edx, edx
    X86_AT(c, 0xcf678u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[2], 0, 4); }
    // 0cf67a  mov dword ptr [eax + 0xbefcc], edx
    X86_AT(c, 0xcf67au);
    wr32((c.sbase[3] + (uint32_t)(c.r[0] + 0xBEFCCu)), c.r[2]);
    // 0cf680  mov dword ptr [eax + 0xbefd0], edx
    X86_AT(c, 0xcf680u);
    wr32((c.sbase[3] + (uint32_t)(c.r[0] + 0xBEFD0u)), c.r[2]);
    // 0cf686  mov ecx, 0xffffffff
    X86_AT(c, 0xcf686u);
    c.r[1] = 0xFFFFFFFFu;
    // 0cf68b  mov dword ptr [eax + 0xbefd4], ecx
    X86_AT(c, 0xcf68bu);
    wr32((c.sbase[3] + (uint32_t)(c.r[0] + 0xBEFD4u)), c.r[1]);
    // 0cf691  mov dword ptr [eax + 0xbefd8], ecx
    X86_AT(c, 0xcf691u);
    wr32((c.sbase[3] + (uint32_t)(c.r[0] + 0xBEFD8u)), c.r[1]);
    // 0cf697  mov dword ptr [eax + 0xbefdc], edx
    X86_AT(c, 0xcf697u);
    wr32((c.sbase[3] + (uint32_t)(c.r[0] + 0xBEFDCu)), c.r[2]);
    // 0cf69d  mov dword ptr [eax + 0xbefe0], edx
    X86_AT(c, 0xcf69du);
    wr32((c.sbase[3] + (uint32_t)(c.r[0] + 0xBEFE0u)), c.r[2]);
    // 0cf6a3  mov dword ptr [eax + 0xbefe4], edx
    X86_AT(c, 0xcf6a3u);
    wr32((c.sbase[3] + (uint32_t)(c.r[0] + 0xBEFE4u)), c.r[2]);
    // 0cf6a9  inc edi
    X86_AT(c, 0xcf6a9u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0cf6aa  jmp 0xcf666
    X86_AT(c, 0xcf6aau);
    X86_POLL(c, 0xcf666u); goto L_cf666;
L_cf6ac:
    X86_TICK(c, 14);
    // 0cf6ac  pop edi
    X86_AT(c, 0xcf6acu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0cf6ad  ret 
    X86_AT(c, 0xcf6adu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xcf660u, "ran off the end of a function");
}
void f_000cf6b0(X86Cpu& c) {
    X86_TICK(c, 15);
    // 0cf6b0  push ebp
    X86_AT(c, 0xcf6b0u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0cf6b1  mov ebp, esp
    X86_AT(c, 0xcf6b1u);
    c.r[5] = c.r[4];
    // 0cf6b3  mov eax, dword ptr [0xaa2a0]
    X86_AT(c, 0xcf6b3u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xAA2A0u)));
    // 0cf6b8  cmp eax, 0x7f
    X86_AT(c, 0xcf6b8u);
    (void)x86_sub(c, c.r[0], 0x7Fu, 0, 4);
    // 0cf6bb  jge 0xcf712
    X86_AT(c, 0xcf6bbu);
    if (x86_cc(c, 13)) { goto L_cf712; }
    X86_TICK(c, 52);
    // 0cf6bd  inc dword ptr [0xaa2a0]
    X86_AT(c, 0xcf6bdu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xAA2A0u)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0cf6c3  mov eax, dword ptr [0xaa2a0]
    X86_AT(c, 0xcf6c3u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xAA2A0u)));
    // 0cf6c8  lea eax, [eax*8]
    X86_AT(c, 0xcf6c8u);
    c.r[0] = (uint32_t)(c.r[0] * 8);
    // 0cf6cf  lea eax, [eax + eax*4]
    X86_AT(c, 0xcf6cfu);
    c.r[0] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0cf6d2  mov edx, dword ptr [ebp + 8]
    X86_AT(c, 0xcf6d2u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0cf6d5  mov dword ptr [eax + 0xbefcc], edx
    X86_AT(c, 0xcf6d5u);
    wr32((c.sbase[3] + (uint32_t)(c.r[0] + 0xBEFCCu)), c.r[2]);
    // 0cf6db  mov edx, dword ptr [ebp + 0xc]
    X86_AT(c, 0xcf6dbu);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0cf6de  mov dword ptr [eax + 0xbefd0], edx
    X86_AT(c, 0xcf6deu);
    wr32((c.sbase[3] + (uint32_t)(c.r[0] + 0xBEFD0u)), c.r[2]);
    // 0cf6e4  mov edx, dword ptr [ebp + 0x10]
    X86_AT(c, 0xcf6e4u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u)));
    // 0cf6e7  mov dword ptr [eax + 0xbefd4], edx
    X86_AT(c, 0xcf6e7u);
    wr32((c.sbase[3] + (uint32_t)(c.r[0] + 0xBEFD4u)), c.r[2]);
    // 0cf6ed  mov edx, dword ptr [ebp + 0x14]
    X86_AT(c, 0xcf6edu);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x14u)));
    // 0cf6f0  mov dword ptr [eax + 0xbefd8], edx
    X86_AT(c, 0xcf6f0u);
    wr32((c.sbase[3] + (uint32_t)(c.r[0] + 0xBEFD8u)), c.r[2]);
    // 0cf6f6  mov edx, dword ptr [ebp + 0x18]
    X86_AT(c, 0xcf6f6u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x18u)));
    // 0cf6f9  mov dword ptr [eax + 0xbefdc], edx
    X86_AT(c, 0xcf6f9u);
    wr32((c.sbase[3] + (uint32_t)(c.r[0] + 0xBEFDCu)), c.r[2]);
    // 0cf6ff  mov edx, dword ptr [ebp + 0x1c]
    X86_AT(c, 0xcf6ffu);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x1Cu)));
    // 0cf702  mov dword ptr [eax + 0xbefe0], edx
    X86_AT(c, 0xcf702u);
    wr32((c.sbase[3] + (uint32_t)(c.r[0] + 0xBEFE0u)), c.r[2]);
    // 0cf708  mov dword ptr [eax + 0xbefe4], 0
    X86_AT(c, 0xcf708u);
    wr32((c.sbase[3] + (uint32_t)(c.r[0] + 0xBEFE4u)), 0x0u);
L_cf712:
    X86_TICK(c, 16);
    // 0cf712  leave 
    X86_AT(c, 0xcf712u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0cf713  ret 
    X86_AT(c, 0xcf713u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xcf6b0u, "ran off the end of a function");
}
void f_000cf714(X86Cpu& c) {
    X86_TICK(c, 16);
    // 0cf714  push ebp
    X86_AT(c, 0xcf714u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0cf715  mov ebp, esp
    X86_AT(c, 0xcf715u);
    c.r[5] = c.r[4];
    // 0cf717  push edi
    X86_AT(c, 0xcf717u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0cf718  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0xcf718u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0cf71b  mov edx, dword ptr [ebp + 0x10]
    X86_AT(c, 0xcf71bu);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u)));
    // 0cf71e  sub ecx, ecx
    X86_AT(c, 0xcf71eu);
    { uint32_t v = c.r[1]; c.r[1] = x86_sub(c, v, c.r[1], 0, 4); }
L_cf720:
    X86_TICK(c, 7);
    // 0cf720  and ecx, ecx
    X86_AT(c, 0xcf720u);
    { uint32_t v = c.r[1]; c.r[1] = x86_logic(c, v & c.r[1], 4); }
    // 0cf722  jne 0xcf74f
    X86_AT(c, 0xcf722u);
    if (x86_cc(c, 5)) { goto L_cf74f; }
    X86_TICK(c, 11);
    // 0cf724  cmp edx, dword ptr [0xaa2a0]
    X86_AT(c, 0xcf724u);
    (void)x86_sub(c, c.r[2], rd32((c.sbase[3] + (uint32_t)(0xAA2A0u))), 0, 4);
    // 0cf72a  jg 0xcf74f
    X86_AT(c, 0xcf72au);
    if (x86_cc(c, 15)) { goto L_cf74f; }
    X86_TICK(c, 15);
    // 0cf72c  lea eax, [edx*8]
    X86_AT(c, 0xcf72cu);
    c.r[0] = (uint32_t)(c.r[2] * 8);
    // 0cf733  lea eax, [eax + eax*4]
    X86_AT(c, 0xcf733u);
    c.r[0] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0cf736  cmp edi, dword ptr [eax + 0xbefd4]
    X86_AT(c, 0xcf736u);
    (void)x86_sub(c, c.r[7], rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0xBEFD4u))), 0, 4);
    // 0cf73c  jne 0xcf74c
    X86_AT(c, 0xcf73cu);
    if (x86_cc(c, 5)) { goto L_cf74c; }
    X86_TICK(c, 15);
    // 0cf73e  mov eax, dword ptr [eax + 0xbefd8]
    X86_AT(c, 0xcf73eu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0xBEFD8u)));
    // 0cf744  cmp eax, dword ptr [ebp + 0xc]
    X86_AT(c, 0xcf744u);
    (void)x86_sub(c, c.r[0], rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))), 0, 4);
    // 0cf747  jne 0xcf74c
    X86_AT(c, 0xcf747u);
    if (x86_cc(c, 5)) { goto L_cf74c; }
    X86_TICK(c, 2);
    // 0cf749  lea ecx, [edx + 1]
    X86_AT(c, 0xcf749u);
    c.r[1] = (uint32_t)(c.r[2] + 0x1u);
L_cf74c:
    X86_TICK(c, 9);
    // 0cf74c  inc edx
    X86_AT(c, 0xcf74cu);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
    // 0cf74d  jmp 0xcf720
    X86_AT(c, 0xcf74du);
    X86_POLL(c, 0xcf720u); goto L_cf720;
L_cf74f:
    X86_TICK(c, 24);
    // 0cf74f  dec ecx
    X86_AT(c, 0xcf74fu);
    { uint32_t v = c.r[1]; c.r[1] = x86_dec(c, v, 4); }
    // 0cf750  mov eax, ecx
    X86_AT(c, 0xcf750u);
    c.r[0] = c.r[1];
    // 0cf752  pop edi
    X86_AT(c, 0xcf752u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0cf753  leave 
    X86_AT(c, 0xcf753u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0cf754  ret 
    X86_AT(c, 0xcf754u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xcf714u, "ran off the end of a function");
}
void f_000cf758(X86Cpu& c) {
    X86_TICK(c, 27);
    // 0cf758  push ebp
    X86_AT(c, 0xcf758u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0cf759  mov ebp, esp
    X86_AT(c, 0xcf759u);
    c.r[5] = c.r[4];
    // 0cf75b  push esi
    X86_AT(c, 0xcf75bu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0cf75c  push edi
    X86_AT(c, 0xcf75cu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0cf75d  push 1
    X86_AT(c, 0xcf75du);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0cf75f  push dword ptr [ebp + 0xc]
    X86_AT(c, 0xcf75fu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))); push32(c, v); }
    // 0cf762  push dword ptr [ebp + 8]
    X86_AT(c, 0xcf762u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, v); }
    // 0cf765  call 0xcf714
    X86_AT(c, 0xcf765u);
    push32(c, 0xcf76au); x86_call_known(c, 0xcf714u, f_000cf714); X86_RET(c, 0xcf76au);
    X86_TICK(c, 12);
    // 0cf76a  xchg edi, eax
    X86_AT(c, 0xcf76au);
    { uint32_t t = c.r[7]; c.r[7] = c.r[0]; c.r[0] = t; }
    // 0cf76b  add esp, 0xc
    X86_AT(c, 0xcf76bu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0cf76e  and edi, edi
    X86_AT(c, 0xcf76eu);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & c.r[7], 4); }
    // 0cf770  jle 0xcf7fd
    X86_AT(c, 0xcf770u);
    if (x86_cc(c, 14)) { goto L_cf7fd; }
    X86_TICK(c, 15);
    // 0cf776  mov esi, edi
    X86_AT(c, 0xcf776u);
    c.r[6] = c.r[7];
    // 0cf778  lea eax, [esi*8]
    X86_AT(c, 0xcf778u);
    c.r[0] = (uint32_t)(c.r[6] * 8);
    // 0cf77f  mov eax, dword ptr [eax + eax*4 + 0xbefe4]
    X86_AT(c, 0xcf77fu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[0] + c.r[0] * 4 + 0xBEFE4u)));
    // 0cf786  and eax, eax
    X86_AT(c, 0xcf786u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0cf788  je 0xcf793
    X86_AT(c, 0xcf788u);
    if (x86_cc(c, 4)) { goto L_cf793; }
    X86_TICK(c, 9);
    // 0cf78a  push eax
    X86_AT(c, 0xcf78au);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0cf78b  call 0xc6c3c
    X86_AT(c, 0xcf78bu);
    push32(c, 0xcf790u); x86_call_known(c, 0xc6c3cu, f_000c6c3c); X86_RET(c, 0xcf790u);
    X86_TICK(c, 2);
    // 0cf790  add esp, 4
    X86_AT(c, 0xcf790u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
L_cf793:
    X86_TICK(c, 11);
    // 0cf793  cmp esi, dword ptr [0xaa2a0]
    X86_AT(c, 0xcf793u);
    (void)x86_sub(c, c.r[6], rd32((c.sbase[3] + (uint32_t)(0xAA2A0u))), 0, 4);
    // 0cf799  jge 0xcf7c2
    X86_AT(c, 0xcf799u);
    if (x86_cc(c, 13)) { goto L_cf7c2; }
    X86_TICK(c, 42);
    // 0cf79b  lea eax, [esi*8]
    X86_AT(c, 0xcf79bu);
    c.r[0] = (uint32_t)(c.r[6] * 8);
    // 0cf7a2  lea eax, [eax + eax*4]
    X86_AT(c, 0xcf7a2u);
    c.r[0] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0cf7a5  lea edx, [eax + 0xbeff4]
    X86_AT(c, 0xcf7a5u);
    c.r[2] = (uint32_t)(c.r[0] + 0xBEFF4u);
    // 0cf7ab  add eax, 0xbefcc
    X86_AT(c, 0xcf7abu);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0xBEFCCu, 0, 4); }
    // 0cf7b0  push esi
    X86_AT(c, 0xcf7b0u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0cf7b1  push edi
    X86_AT(c, 0xcf7b1u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0cf7b2  mov esi, edx
    X86_AT(c, 0xcf7b2u);
    c.r[6] = c.r[2];
    // 0cf7b4  mov edi, eax
    X86_AT(c, 0xcf7b4u);
    c.r[7] = c.r[0];
    // 0cf7b6  mov ecx, 0xa
    X86_AT(c, 0xcf7b6u);
    c.r[1] = 0xAu;
    // 0cf7bb  movsd dword ptr es:[edi], dword ptr [esi]
    X86_AT(c, 0xcf7bbu);
    x86_string(c, 0, 4, 243, 4, 3);
    // 0cf7bd  pop edi
    X86_AT(c, 0xcf7bdu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0cf7be  pop esi
    X86_AT(c, 0xcf7beu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0cf7bf  inc esi
    X86_AT(c, 0xcf7bfu);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 0cf7c0  jmp 0xcf793
    X86_AT(c, 0xcf7c0u);
    X86_POLL(c, 0xcf793u); goto L_cf793;
L_cf7c2:
    X86_TICK(c, 26);
    // 0cf7c2  lea eax, [esi*8]
    X86_AT(c, 0xcf7c2u);
    c.r[0] = (uint32_t)(c.r[6] * 8);
    // 0cf7c9  lea eax, [eax + eax*4]
    X86_AT(c, 0xcf7c9u);
    c.r[0] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0cf7cc  sub edx, edx
    X86_AT(c, 0xcf7ccu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[2], 0, 4); }
    // 0cf7ce  mov dword ptr [eax + 0xbefcc], edx
    X86_AT(c, 0xcf7ceu);
    wr32((c.sbase[3] + (uint32_t)(c.r[0] + 0xBEFCCu)), c.r[2]);
    // 0cf7d4  mov dword ptr [eax + 0xbefd0], edx
    X86_AT(c, 0xcf7d4u);
    wr32((c.sbase[3] + (uint32_t)(c.r[0] + 0xBEFD0u)), c.r[2]);
    // 0cf7da  mov ecx, 0xffffffff
    X86_AT(c, 0xcf7dau);
    c.r[1] = 0xFFFFFFFFu;
    // 0cf7df  mov dword ptr [eax + 0xbefd4], ecx
    X86_AT(c, 0xcf7dfu);
    wr32((c.sbase[3] + (uint32_t)(c.r[0] + 0xBEFD4u)), c.r[1]);
    // 0cf7e5  mov dword ptr [eax + 0xbefd8], ecx
    X86_AT(c, 0xcf7e5u);
    wr32((c.sbase[3] + (uint32_t)(c.r[0] + 0xBEFD8u)), c.r[1]);
    // 0cf7eb  mov dword ptr [eax + 0xbefe0], edx
    X86_AT(c, 0xcf7ebu);
    wr32((c.sbase[3] + (uint32_t)(c.r[0] + 0xBEFE0u)), c.r[2]);
    // 0cf7f1  mov dword ptr [eax + 0xbefe4], edx
    X86_AT(c, 0xcf7f1u);
    wr32((c.sbase[3] + (uint32_t)(c.r[0] + 0xBEFE4u)), c.r[2]);
    // 0cf7f7  dec dword ptr [0xaa2a0]
    X86_AT(c, 0xcf7f7u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xAA2A0u)); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
L_cf7fd:
    X86_TICK(c, 24);
    // 0cf7fd  pop edi
    X86_AT(c, 0xcf7fdu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0cf7fe  pop esi
    X86_AT(c, 0xcf7feu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0cf7ff  leave 
    X86_AT(c, 0xcf7ffu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0cf800  ret 
    X86_AT(c, 0xcf800u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xcf758u, "ran off the end of a function");
}
void f_000cf804(X86Cpu& c) {
    X86_TICK(c, 4);
    // 0cf804  sub ecx, ecx
    X86_AT(c, 0xcf804u);
    { uint32_t v = c.r[1]; c.r[1] = x86_sub(c, v, c.r[1], 0, 4); }
    // 0cf806  mov edx, ecx
    X86_AT(c, 0xcf806u);
    c.r[2] = c.r[1];
L_cf808:
    X86_TICK(c, 11);
    // 0cf808  cmp edx, dword ptr [0xaa2a0]
    X86_AT(c, 0xcf808u);
    (void)x86_sub(c, c.r[2], rd32((c.sbase[3] + (uint32_t)(0xAA2A0u))), 0, 4);
    // 0cf80e  jg 0xcf830
    X86_AT(c, 0xcf80eu);
    if (x86_cc(c, 15)) { goto L_cf830; }
    X86_TICK(c, 13);
    // 0cf810  lea eax, [edx*8]
    X86_AT(c, 0xcf810u);
    c.r[0] = (uint32_t)(c.r[2] * 8);
    // 0cf817  mov eax, dword ptr [eax + eax*4 + 0xbefcc]
    X86_AT(c, 0xcf817u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[0] + c.r[0] * 4 + 0xBEFCCu)));
    // 0cf81e  cmp eax, 0x8b
    X86_AT(c, 0xcf81eu);
    (void)x86_sub(c, c.r[0], 0x8Bu, 0, 4);
    // 0cf823  jl 0xcf82d
    X86_AT(c, 0xcf823u);
    if (x86_cc(c, 12)) { goto L_cf82d; }
    X86_TICK(c, 7);
    // 0cf825  cmp eax, 0x9e
    X86_AT(c, 0xcf825u);
    (void)x86_sub(c, c.r[0], 0x9Eu, 0, 4);
    // 0cf82a  jg 0xcf82d
    X86_AT(c, 0xcf82au);
    if (x86_cc(c, 15)) { goto L_cf82d; }
    X86_TICK(c, 2);
    // 0cf82c  inc ecx
    X86_AT(c, 0xcf82cu);
    { uint32_t v = c.r[1]; c.r[1] = x86_inc(c, v, 4); }
L_cf82d:
    X86_TICK(c, 9);
    // 0cf82d  inc edx
    X86_AT(c, 0xcf82du);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
    // 0cf82e  jmp 0xcf808
    X86_AT(c, 0xcf82eu);
    X86_POLL(c, 0xcf808u); goto L_cf808;
L_cf830:
    X86_TICK(c, 12);
    // 0cf830  mov eax, ecx
    X86_AT(c, 0xcf830u);
    c.r[0] = c.r[1];
    // 0cf832  ret 
    X86_AT(c, 0xcf832u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xcf804u, "ran off the end of a function");
}
void f_000cf834(X86Cpu& c) {
    X86_TICK(c, 4);
    // 0cf834  sub ecx, ecx
    X86_AT(c, 0xcf834u);
    { uint32_t v = c.r[1]; c.r[1] = x86_sub(c, v, c.r[1], 0, 4); }
    // 0cf836  mov edx, ecx
    X86_AT(c, 0xcf836u);
    c.r[2] = c.r[1];
L_cf838:
    X86_TICK(c, 11);
    // 0cf838  cmp edx, dword ptr [0xaa2a0]
    X86_AT(c, 0xcf838u);
    (void)x86_sub(c, c.r[2], rd32((c.sbase[3] + (uint32_t)(0xAA2A0u))), 0, 4);
    // 0cf83e  jg 0xcf860
    X86_AT(c, 0xcf83eu);
    if (x86_cc(c, 15)) { goto L_cf860; }
    X86_TICK(c, 13);
    // 0cf840  lea eax, [edx*8]
    X86_AT(c, 0xcf840u);
    c.r[0] = (uint32_t)(c.r[2] * 8);
    // 0cf847  mov eax, dword ptr [eax + eax*4 + 0xbefcc]
    X86_AT(c, 0xcf847u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[0] + c.r[0] * 4 + 0xBEFCCu)));
    // 0cf84e  cmp eax, 0xaa
    X86_AT(c, 0xcf84eu);
    (void)x86_sub(c, c.r[0], 0xAAu, 0, 4);
    // 0cf853  jg 0xcf85d
    X86_AT(c, 0xcf853u);
    if (x86_cc(c, 15)) { goto L_cf85d; }
    X86_TICK(c, 7);
    // 0cf855  cmp eax, 0xa5
    X86_AT(c, 0xcf855u);
    (void)x86_sub(c, c.r[0], 0xA5u, 0, 4);
    // 0cf85a  jl 0xcf85d
    X86_AT(c, 0xcf85au);
    if (x86_cc(c, 12)) { goto L_cf85d; }
    X86_TICK(c, 2);
    // 0cf85c  inc ecx
    X86_AT(c, 0xcf85cu);
    { uint32_t v = c.r[1]; c.r[1] = x86_inc(c, v, 4); }
L_cf85d:
    X86_TICK(c, 9);
    // 0cf85d  inc edx
    X86_AT(c, 0xcf85du);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
    // 0cf85e  jmp 0xcf838
    X86_AT(c, 0xcf85eu);
    X86_POLL(c, 0xcf838u); goto L_cf838;
L_cf860:
    X86_TICK(c, 12);
    // 0cf860  mov eax, ecx
    X86_AT(c, 0xcf860u);
    c.r[0] = c.r[1];
    // 0cf862  ret 
    X86_AT(c, 0xcf862u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xcf834u, "ran off the end of a function");
}
void f_000cf864(X86Cpu& c) {
    X86_TICK(c, 11);
    // 0cf864  mov cl, byte ptr [esp + 4]
    X86_AT(c, 0xcf864u);
    s8(c, 1, rd8((c.sbase[2] + (uint32_t)(c.r[4] + 0x4u))));
    // 0cf868  cmp cl, 0x41
    X86_AT(c, 0xcf868u);
    (void)x86_sub(c, g8(c, 1), 0x41u, 0, 1);
    // 0cf86b  je 0xcf881
    X86_AT(c, 0xcf86bu);
    if (x86_cc(c, 4)) { goto L_cf881; }
    X86_TICK(c, 7);
    // 0cf86d  cmp cl, 0x45
    X86_AT(c, 0xcf86du);
    (void)x86_sub(c, g8(c, 1), 0x45u, 0, 1);
    // 0cf870  je 0xcf881
    X86_AT(c, 0xcf870u);
    if (x86_cc(c, 4)) { goto L_cf881; }
    X86_TICK(c, 7);
    // 0cf872  cmp cl, 0x49
    X86_AT(c, 0xcf872u);
    (void)x86_sub(c, g8(c, 1), 0x49u, 0, 1);
    // 0cf875  je 0xcf881
    X86_AT(c, 0xcf875u);
    if (x86_cc(c, 4)) { goto L_cf881; }
    X86_TICK(c, 7);
    // 0cf877  cmp cl, 0x4f
    X86_AT(c, 0xcf877u);
    (void)x86_sub(c, g8(c, 1), 0x4Fu, 0, 1);
    // 0cf87a  je 0xcf881
    X86_AT(c, 0xcf87au);
    if (x86_cc(c, 4)) { goto L_cf881; }
    X86_TICK(c, 7);
    // 0cf87c  cmp cl, 0x55
    X86_AT(c, 0xcf87cu);
    (void)x86_sub(c, g8(c, 1), 0x55u, 0, 1);
    // 0cf87f  jne 0xcf888
    X86_AT(c, 0xcf87fu);
    if (x86_cc(c, 5)) { goto L_cf888; }
L_cf881:
    X86_TICK(c, 9);
    // 0cf881  mov eax, 1
    X86_AT(c, 0xcf881u);
    c.r[0] = 0x1u;
    // 0cf886  jmp 0xcf88a
    X86_AT(c, 0xcf886u);
    goto L_cf88a;
L_cf888:
    X86_TICK(c, 2);
    // 0cf888  sub eax, eax
    X86_AT(c, 0xcf888u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
L_cf88a:
    X86_TICK(c, 10);
    // 0cf88a  ret 
    X86_AT(c, 0xcf88au);
    c.eip = pop32(c); return;
    x86_fault(c, 0xcf864u, "ran off the end of a function");
}
void f_000cf88c(X86Cpu& c) {
    X86_TICK(c, 60);
    // 0cf88c  mov eax, dword ptr [0xb031e]
    X86_AT(c, 0xcf88cu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xB031Eu)));
    // 0cf891  cdq 
    X86_AT(c, 0xcf891u);
    c.r[2] = (c.r[0] & 0x80000000u) ? 0xFFFFFFFFu : 0u;
    // 0cf892  mov ecx, 0x3e8
    X86_AT(c, 0xcf892u);
    c.r[1] = 0x3E8u;
    // 0cf897  idiv ecx
    X86_AT(c, 0xcf897u);
    x86_idiv(c, c.r[1], 4, 0xcf897u);
    // 0cf899  inc eax
    X86_AT(c, 0xcf899u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0cf89a  ret 
    X86_AT(c, 0xcf89au);
    c.eip = pop32(c); return;
    x86_fault(c, 0xcf88cu, "ran off the end of a function");
}
void f_000cf89c(X86Cpu& c) {
    X86_TICK(c, 47);
    // 0cf89c  cmp dword ptr [esp + 8], 0x4d
    X86_AT(c, 0xcf89cu);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[4] + 0x8u))), 0x4Du, 0, 4);
    // 0cf8a1  setg al
    X86_AT(c, 0xcf8a1u);
    s8(c, 0, x86_cc(c, 15) ? 1u : 0u);
    // 0cf8a4  sub ah, ah
    X86_AT(c, 0xcf8a4u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_sub(c, v, g8(c, 4), 0, 1)); }
    // 0cf8a6  add eax, eax
    X86_AT(c, 0xcf8a6u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, c.r[0], 0, 4); }
    // 0cf8a8  movzx eax, ax
    X86_AT(c, 0xcf8a8u);
    c.r[0] = (c.r[0] & 0xFFFFu);
    // 0cf8ab  cmp dword ptr [esp + 4], 0x53
    X86_AT(c, 0xcf8abu);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[4] + 0x4u))), 0x53u, 0, 4);
    // 0cf8b0  setg dl
    X86_AT(c, 0xcf8b0u);
    s8(c, 2, x86_cc(c, 15) ? 1u : 0u);
    // 0cf8b3  movzx edx, dl
    X86_AT(c, 0xcf8b3u);
    c.r[2] = g8(c, 2);
    // 0cf8b6  add edx, eax
    X86_AT(c, 0xcf8b6u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0cf8b8  xchg edx, eax
    X86_AT(c, 0xcf8b8u);
    { uint32_t t = c.r[2]; c.r[2] = c.r[0]; c.r[0] = t; }
    // 0cf8b9  ret 
    X86_AT(c, 0xcf8b9u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xcf89cu, "ran off the end of a function");
}
void f_000cf8bc(X86Cpu& c) {
    X86_TICK(c, 11);
    // 0cf8bc  push ebx
    X86_AT(c, 0xcf8bcu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0cf8bd  push 7
    X86_AT(c, 0xcf8bdu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cf8bf  call 0xc81e4
    X86_AT(c, 0xcf8bfu);
    push32(c, 0xcf8c4u); x86_call_known(c, 0xc81e4u, f_000c81e4); X86_RET(c, 0xcf8c4u);
    X86_TICK(c, 12);
    // 0cf8c4  xchg ebx, eax
    X86_AT(c, 0xcf8c4u);
    { uint32_t t = c.r[3]; c.r[3] = c.r[0]; c.r[0] = t; }
    // 0cf8c5  add esp, 4
    X86_AT(c, 0xcf8c5u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0cf8c8  and bl, bl
    X86_AT(c, 0xcf8c8u);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v & g8(c, 3), 1)); }
    // 0cf8ca  jne 0xcf8d0
    X86_AT(c, 0xcf8cau);
    if (x86_cc(c, 5)) { goto L_cf8d0; }
    X86_TICK(c, 9);
    // 0cf8cc  push 3
    X86_AT(c, 0xcf8ccu);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0cf8ce  jmp 0xcf8d2
    X86_AT(c, 0xcf8ceu);
    goto L_cf8d2;
L_cf8d0:
    X86_TICK(c, 2);
    // 0cf8d0  push 1
    X86_AT(c, 0xcf8d0u);
    { uint32_t v = 0x1u; push32(c, v); }
L_cf8d2:
    X86_TICK(c, 7);
    // 0cf8d2  call 0xd6660
    X86_AT(c, 0xcf8d2u);
    push32(c, 0xcf8d7u); x86_call_known(c, 0xd6660u, f_000d6660); X86_RET(c, 0xcf8d7u);
    X86_TICK(c, 18);
    // 0cf8d7  add esp, 4
    X86_AT(c, 0xcf8d7u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0cf8da  mov eax, ebx
    X86_AT(c, 0xcf8dau);
    c.r[0] = c.r[3];
    // 0cf8dc  pop ebx
    X86_AT(c, 0xcf8dcu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0cf8dd  ret 
    X86_AT(c, 0xcf8ddu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xcf8bcu, "ran off the end of a function");
}
void f_000cf8e0(X86Cpu& c) {
    X86_TICK(c, 6);
    // 0cf8e0  push ebx
    X86_AT(c, 0xcf8e0u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0cf8e1  push edi
    X86_AT(c, 0xcf8e1u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0cf8e2  sub edi, edi
    X86_AT(c, 0xcf8e2u);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
L_cf8e4:
    X86_TICK(c, 7);
    // 0cf8e4  call 0xcf8bc
    X86_AT(c, 0xcf8e4u);
    push32(c, 0xcf8e9u); x86_call_known(c, 0xcf8bcu, f_000cf8bc); X86_RET(c, 0xcf8e9u);
    X86_TICK(c, 12);
    // 0cf8e9  xchg ebx, eax
    X86_AT(c, 0xcf8e9u);
    { uint32_t t = c.r[3]; c.r[3] = c.r[0]; c.r[0] = t; }
    // 0cf8ea  inc edi
    X86_AT(c, 0xcf8eau);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0cf8eb  and bl, bl
    X86_AT(c, 0xcf8ebu);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v & g8(c, 3), 1)); }
    // 0cf8ed  jne 0xcf8f7
    X86_AT(c, 0xcf8edu);
    if (x86_cc(c, 5)) { goto L_cf8f7; }
    X86_TICK(c, 7);
    // 0cf8ef  cmp edi, 0x5dc
    X86_AT(c, 0xcf8efu);
    (void)x86_sub(c, c.r[7], 0x5DCu, 0, 4);
    // 0cf8f5  jl 0xcf8e4
    X86_AT(c, 0xcf8f5u);
    if (x86_cc(c, 12)) { X86_POLL(c, 0xcf8e4u); goto L_cf8e4; }
L_cf8f7:
    X86_TICK(c, 20);
    // 0cf8f7  mov eax, ebx
    X86_AT(c, 0xcf8f7u);
    c.r[0] = c.r[3];
    // 0cf8f9  pop edi
    X86_AT(c, 0xcf8f9u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0cf8fa  pop ebx
    X86_AT(c, 0xcf8fau);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0cf8fb  ret 
    X86_AT(c, 0xcf8fbu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xcf8e0u, "ran off the end of a function");
}
void f_000cf8fc(X86Cpu& c) {
    X86_TICK(c, 22);
    // 0cf8fc  push ebp
    X86_AT(c, 0xcf8fcu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0cf8fd  mov ebp, esp
    X86_AT(c, 0xcf8fdu);
    c.r[5] = c.r[4];
    // 0cf8ff  mov eax, dword ptr [ebp + 8]
    X86_AT(c, 0xcf8ffu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0cf902  push dword ptr [eax*4 + 0xaa258]
    X86_AT(c, 0xcf902u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[0] * 4 + 0xAA258u))); push32(c, v); }
    // 0cf909  push 7
    X86_AT(c, 0xcf909u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cf90b  call 0xc8cdc
    X86_AT(c, 0xcf90bu);
    push32(c, 0xcf910u); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xcf910u);
    X86_TICK(c, 9);
    // 0cf910  push 7
    X86_AT(c, 0xcf910u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cf912  call 0xca3cc
    X86_AT(c, 0xcf912u);
    push32(c, 0xcf917u); x86_call_known(c, 0xca3ccu, f_000ca3cc); X86_RET(c, 0xcf917u);
    X86_TICK(c, 9);
    // 0cf917  push 0
    X86_AT(c, 0xcf917u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0cf919  call 0xc5ca4
    X86_AT(c, 0xcf919u);
    push32(c, 0xcf91eu); x86_call_known(c, 0xc5ca4u, f_000c5ca4); X86_RET(c, 0xcf91eu);
    X86_TICK(c, 20);
    // 0cf91e  sub eax, eax
    X86_AT(c, 0xcf91eu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0cf920  add esp, 0x10
    X86_AT(c, 0xcf920u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0cf923  leave 
    X86_AT(c, 0xcf923u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0cf924  ret 
    X86_AT(c, 0xcf924u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xcf8fcu, "ran off the end of a function");
}
void f_000cf928(X86Cpu& c) {
    X86_TICK(c, 9);
    // 0cf928  push 0x6226
    X86_AT(c, 0xcf928u);
    { uint32_t v = 0x6226u; push32(c, v); }
    // 0cf92d  call 0xcc7bc
    X86_AT(c, 0xcf92du);
    push32(c, 0xcf932u); x86_call_known(c, 0xcc7bcu, f_000cc7bc); X86_RET(c, 0xcf932u);
    X86_TICK(c, 9);
    // 0cf932  push 0x6228
    X86_AT(c, 0xcf932u);
    { uint32_t v = 0x6228u; push32(c, v); }
    // 0cf937  call 0xcc7bc
    X86_AT(c, 0xcf937u);
    push32(c, 0xcf93cu); x86_call_known(c, 0xcc7bcu, f_000cc7bc); X86_RET(c, 0xcf93cu);
    X86_TICK(c, 9);
    // 0cf93c  push 0x6274
    X86_AT(c, 0xcf93cu);
    { uint32_t v = 0x6274u; push32(c, v); }
    // 0cf941  call 0xcc7bc
    X86_AT(c, 0xcf941u);
    push32(c, 0xcf946u); x86_call_known(c, 0xcc7bcu, f_000cc7bc); X86_RET(c, 0xcf946u);
    X86_TICK(c, 9);
    // 0cf946  push 1
    X86_AT(c, 0xcf946u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0cf948  call 0xc5ca4
    X86_AT(c, 0xcf948u);
    push32(c, 0xcf94du); x86_call_known(c, 0xc5ca4u, f_000c5ca4); X86_RET(c, 0xcf94du);
    X86_TICK(c, 12);
    // 0cf94d  add esp, 0x10
    X86_AT(c, 0xcf94du);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0cf950  ret 
    X86_AT(c, 0xcf950u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xcf928u, "ran off the end of a function");
}
void f_000cf954(X86Cpu& c) {
    X86_TICK(c, 12);
    // 0cf954  cmp dword ptr [0xaa2d8], 0
    X86_AT(c, 0xcf954u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xAA2D8u))), 0x0u, 0, 4);
    // 0cf95b  jne 0xcf964
    X86_AT(c, 0xcf95bu);
    if (x86_cc(c, 5)) { goto L_cf964; }
    X86_TICK(c, 7);
    // 0cf95d  call 0xcf928
    X86_AT(c, 0xcf95du);
    push32(c, 0xcf962u); x86_call_known(c, 0xcf928u, f_000cf928); X86_RET(c, 0xcf962u);
    X86_TICK(c, 7);
    // 0cf962  jmp 0xcf974
    X86_AT(c, 0xcf962u);
    goto L_cf974;
L_cf964:
    X86_TICK(c, 15);
    // 0cf964  dec dword ptr [0xaa2d8]
    X86_AT(c, 0xcf964u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xAA2D8u)); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 0cf96a  push 0
    X86_AT(c, 0xcf96au);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0cf96c  call 0xcfeb4
    X86_AT(c, 0xcf96cu);
    push32(c, 0xcf971u); x86_call_known(c, 0xcfeb4u, f_000cfeb4); X86_RET(c, 0xcf971u);
    X86_TICK(c, 2);
    // 0cf971  add esp, 4
    X86_AT(c, 0xcf971u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
L_cf974:
    X86_TICK(c, 10);
    // 0cf974  ret 
    X86_AT(c, 0xcf974u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xcf954u, "ran off the end of a function");
}
void f_000cf978(X86Cpu& c) {
    X86_TICK(c, 12);
    // 0cf978  cmp dword ptr [0xaa2d8], 0
    X86_AT(c, 0xcf978u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xAA2D8u))), 0x0u, 0, 4);
    // 0cf97f  jne 0xcf988
    X86_AT(c, 0xcf97fu);
    if (x86_cc(c, 5)) { goto L_cf988; }
    X86_TICK(c, 7);
    // 0cf981  call 0xcf928
    X86_AT(c, 0xcf981u);
    push32(c, 0xcf986u); x86_call_known(c, 0xcf928u, f_000cf928); X86_RET(c, 0xcf986u);
    X86_TICK(c, 7);
    // 0cf986  jmp 0xcf998
    X86_AT(c, 0xcf986u);
    goto L_cf998;
L_cf988:
    X86_TICK(c, 15);
    // 0cf988  dec dword ptr [0xaa2d8]
    X86_AT(c, 0xcf988u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xAA2D8u)); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 0cf98e  push 0
    X86_AT(c, 0xcf98eu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0cf990  call 0xcfd70
    X86_AT(c, 0xcf990u);
    push32(c, 0xcf995u); x86_call_known(c, 0xcfd70u, f_000cfd70); X86_RET(c, 0xcf995u);
    X86_TICK(c, 2);
    // 0cf995  add esp, 4
    X86_AT(c, 0xcf995u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
L_cf998:
    X86_TICK(c, 10);
    // 0cf998  ret 
    X86_AT(c, 0xcf998u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xcf978u, "ran off the end of a function");
}
void f_000cf99c(X86Cpu& c) {
    X86_TICK(c, 12);
    // 0cf99c  cmp dword ptr [0xaa2d8], 0
    X86_AT(c, 0xcf99cu);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xAA2D8u))), 0x0u, 0, 4);
    // 0cf9a3  jne 0xcf9ac
    X86_AT(c, 0xcf9a3u);
    if (x86_cc(c, 5)) { goto L_cf9ac; }
    X86_TICK(c, 7);
    // 0cf9a5  call 0xcf928
    X86_AT(c, 0xcf9a5u);
    push32(c, 0xcf9aau); x86_call_known(c, 0xcf928u, f_000cf928); X86_RET(c, 0xcf9aau);
    X86_TICK(c, 7);
    // 0cf9aa  jmp 0xcf9bc
    X86_AT(c, 0xcf9aau);
    goto L_cf9bc;
L_cf9ac:
    X86_TICK(c, 15);
    // 0cf9ac  dec dword ptr [0xaa2d8]
    X86_AT(c, 0xcf9acu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xAA2D8u)); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 0cf9b2  push 0
    X86_AT(c, 0xcf9b2u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0cf9b4  call 0xcfe4c
    X86_AT(c, 0xcf9b4u);
    push32(c, 0xcf9b9u); x86_call_known(c, 0xcfe4cu, f_000cfe4c); X86_RET(c, 0xcf9b9u);
    X86_TICK(c, 2);
    // 0cf9b9  add esp, 4
    X86_AT(c, 0xcf9b9u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
L_cf9bc:
    X86_TICK(c, 10);
    // 0cf9bc  ret 
    X86_AT(c, 0xcf9bcu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xcf99cu, "ran off the end of a function");
}
void f_000cf9c0(X86Cpu& c) {
    X86_TICK(c, 33);
    // 0cf9c0  push edi
    X86_AT(c, 0xcf9c0u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0cf9c1  mov eax, dword ptr [0xb033e]
    X86_AT(c, 0xcf9c1u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xB033Eu)));
    // 0cf9c6  lea eax, [eax*8]
    X86_AT(c, 0xcf9c6u);
    c.r[0] = (uint32_t)(c.r[0] * 8);
    // 0cf9cd  lea edx, [eax + eax*4]
    X86_AT(c, 0xcf9cdu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0cf9d0  lea edx, [eax + edx*4]
    X86_AT(c, 0xcf9d0u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 4);
    // 0cf9d3  add edx, dword ptr [0xb033a]
    X86_AT(c, 0xcf9d3u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, rd32((c.sbase[3] + (uint32_t)(0xB033Au))), 0, 4); }
    // 0cf9d9  movzx edi, byte ptr [edx + 0x8bdf8]
    X86_AT(c, 0xcf9d9u);
    c.r[7] = rd8((c.sbase[3] + (uint32_t)(c.r[2] + 0x8BDF8u)));
    // 0cf9e0  mov edx, edi
    X86_AT(c, 0xcf9e0u);
    c.r[2] = c.r[7];
    // 0cf9e2  cmp edx, 0x44
    X86_AT(c, 0xcf9e2u);
    (void)x86_sub(c, c.r[2], 0x44u, 0, 4);
    // 0cf9e5  je 0xcf9fa
    X86_AT(c, 0xcf9e5u);
    if (x86_cc(c, 4)) { goto L_cf9fa; }
    X86_TICK(c, 7);
    // 0cf9e7  cmp edx, 0x46
    X86_AT(c, 0xcf9e7u);
    (void)x86_sub(c, c.r[2], 0x46u, 0, 4);
    // 0cf9ea  je 0xcf9f3
    X86_AT(c, 0xcf9eau);
    if (x86_cc(c, 4)) { goto L_cf9f3; }
    X86_TICK(c, 7);
    // 0cf9ec  cmp edx, 0x48
    X86_AT(c, 0xcf9ecu);
    (void)x86_sub(c, c.r[2], 0x48u, 0, 4);
    // 0cf9ef  je 0xcfa01
    X86_AT(c, 0xcf9efu);
    if (x86_cc(c, 4)) { goto L_cfa01; }
    X86_TICK(c, 7);
    // 0cf9f1  jmp 0xcfa08
    X86_AT(c, 0xcf9f1u);
    goto L_cfa08;
L_cf9f3:
    X86_TICK(c, 7);
    // 0cf9f3  call 0xcf99c
    X86_AT(c, 0xcf9f3u);
    push32(c, 0xcf9f8u); x86_call_known(c, 0xcf99cu, f_000cf99c); X86_RET(c, 0xcf9f8u);
    X86_TICK(c, 7);
    // 0cf9f8  jmp 0xcfa15
    X86_AT(c, 0xcf9f8u);
    goto L_cfa15;
L_cf9fa:
    X86_TICK(c, 7);
    // 0cf9fa  call 0xcf954
    X86_AT(c, 0xcf9fau);
    push32(c, 0xcf9ffu); x86_call_known(c, 0xcf954u, f_000cf954); X86_RET(c, 0xcf9ffu);
    X86_TICK(c, 7);
    // 0cf9ff  jmp 0xcfa15
    X86_AT(c, 0xcf9ffu);
    goto L_cfa15;
L_cfa01:
    X86_TICK(c, 7);
    // 0cfa01  call 0xcf978
    X86_AT(c, 0xcfa01u);
    push32(c, 0xcfa06u); x86_call_known(c, 0xcf978u, f_000cf978); X86_RET(c, 0xcfa06u);
    X86_TICK(c, 7);
    // 0cfa06  jmp 0xcfa15
    X86_AT(c, 0xcfa06u);
    goto L_cfa15;
L_cfa08:
    X86_TICK(c, 9);
    // 0cfa08  push 0x62a0
    X86_AT(c, 0xcfa08u);
    { uint32_t v = 0x62A0u; push32(c, v); }
    // 0cfa0d  call 0xcc7bc
    X86_AT(c, 0xcfa0du);
    push32(c, 0xcfa12u); x86_call_known(c, 0xcc7bcu, f_000cc7bc); X86_RET(c, 0xcfa12u);
    X86_TICK(c, 2);
    // 0cfa12  add esp, 4
    X86_AT(c, 0xcfa12u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
L_cfa15:
    X86_TICK(c, 14);
    // 0cfa15  pop edi
    X86_AT(c, 0xcfa15u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0cfa16  ret 
    X86_AT(c, 0xcfa16u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xcf9c0u, "ran off the end of a function");
}
void f_000cfa18(X86Cpu& c) {
    X86_TICK(c, 11);
    // 0cfa18  push 0xf
    X86_AT(c, 0xcfa18u);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0cfa1a  push 0x62d8
    X86_AT(c, 0xcfa1au);
    { uint32_t v = 0x62D8u; push32(c, v); }
    // 0cfa1f  call 0xcc830
    X86_AT(c, 0xcfa1fu);
    push32(c, 0xcfa24u); x86_call_known(c, 0xcc830u, f_000cc830); X86_RET(c, 0xcfa24u);
    X86_TICK(c, 14);
    // 0cfa24  add esp, 8
    X86_AT(c, 0xcfa24u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0cfa27  cmp dword ptr [0xb52f8], 2
    X86_AT(c, 0xcfa27u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xB52F8u))), 0x2u, 0, 4);
    // 0cfa2e  jne 0xcfa37
    X86_AT(c, 0xcfa2eu);
    if (x86_cc(c, 5)) { goto L_cfa37; }
    X86_TICK(c, 7);
    // 0cfa30  call 0xcf9c0
    X86_AT(c, 0xcfa30u);
    push32(c, 0xcfa35u); x86_call_known(c, 0xcf9c0u, f_000cf9c0); X86_RET(c, 0xcfa35u);
    X86_TICK(c, 7);
    // 0cfa35  jmp 0xcfa59
    X86_AT(c, 0xcfa35u);
    goto L_cfa59;
L_cfa37:
    X86_TICK(c, 12);
    // 0cfa37  cmp dword ptr [0xb52f8], 1
    X86_AT(c, 0xcfa37u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xB52F8u))), 0x1u, 0, 4);
    // 0cfa3e  jne 0xcfa4f
    X86_AT(c, 0xcfa3eu);
    if (x86_cc(c, 5)) { goto L_cfa4f; }
    X86_TICK(c, 11);
    // 0cfa40  push 0xf
    X86_AT(c, 0xcfa40u);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0cfa42  push 0x62e8
    X86_AT(c, 0xcfa42u);
    { uint32_t v = 0x62E8u; push32(c, v); }
    // 0cfa47  call 0xcc830
    X86_AT(c, 0xcfa47u);
    push32(c, 0xcfa4cu); x86_call_known(c, 0xcc830u, f_000cc830); X86_RET(c, 0xcfa4cu);
    X86_TICK(c, 2);
    // 0cfa4c  add esp, 8
    X86_AT(c, 0xcfa4cu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
L_cfa4f:
    X86_TICK(c, 9);
    // 0cfa4f  push 1
    X86_AT(c, 0xcfa4fu);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0cfa51  call 0xc5ca4
    X86_AT(c, 0xcfa51u);
    push32(c, 0xcfa56u); x86_call_known(c, 0xc5ca4u, f_000c5ca4); X86_RET(c, 0xcfa56u);
    X86_TICK(c, 2);
    // 0cfa56  add esp, 4
    X86_AT(c, 0xcfa56u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
L_cfa59:
    X86_TICK(c, 10);
    // 0cfa59  ret 
    X86_AT(c, 0xcfa59u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xcfa18u, "ran off the end of a function");
}
void f_000cfa5c(X86Cpu& c) {
    X86_TICK(c, 11);
    // 0cfa5c  push 0xf
    X86_AT(c, 0xcfa5cu);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0cfa5e  push 0x6300
    X86_AT(c, 0xcfa5eu);
    { uint32_t v = 0x6300u; push32(c, v); }
    // 0cfa63  call 0xcc830
    X86_AT(c, 0xcfa63u);
    push32(c, 0xcfa68u); x86_call_known(c, 0xcc830u, f_000cc830); X86_RET(c, 0xcfa68u);
    X86_TICK(c, 7);
    // 0cfa68  call 0xce444
    X86_AT(c, 0xcfa68u);
    push32(c, 0xcfa6du); x86_call_known(c, 0xce444u, f_000ce444); X86_RET(c, 0xcfa6du);
    X86_TICK(c, 12);
    // 0cfa6d  add esp, 8
    X86_AT(c, 0xcfa6du);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0cfa70  ret 
    X86_AT(c, 0xcfa70u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xcfa5cu, "ran off the end of a function");
}
void f_000cfa74(X86Cpu& c) {
    X86_TICK(c, 11);
    // 0cfa74  push 0xf
    X86_AT(c, 0xcfa74u);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0cfa76  push 0x6318
    X86_AT(c, 0xcfa76u);
    { uint32_t v = 0x6318u; push32(c, v); }
    // 0cfa7b  call 0xcc830
    X86_AT(c, 0xcfa7bu);
    push32(c, 0xcfa80u); x86_call_known(c, 0xcc830u, f_000cc830); X86_RET(c, 0xcfa80u);
    X86_TICK(c, 12);
    // 0cfa80  add esp, 8
    X86_AT(c, 0xcfa80u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0cfa83  ret 
    X86_AT(c, 0xcfa83u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xcfa74u, "ran off the end of a function");
}
void f_000cfa84(X86Cpu& c) {
    X86_TICK(c, 12);
    // 0cfa84  mov dword ptr [0xbef90], 1
    X86_AT(c, 0xcfa84u);
    wr32((c.sbase[3] + (uint32_t)(0xBEF90u)), 0x1u);
    // 0cfa8e  ret 
    X86_AT(c, 0xcfa8eu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xcfa84u, "ran off the end of a function");
}
void f_000cfa90(X86Cpu& c) {
    X86_TICK(c, 25);
    // 0cfa90  push ebp
    X86_AT(c, 0xcfa90u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0cfa91  mov ebp, esp
    X86_AT(c, 0xcfa91u);
    c.r[5] = c.r[4];
    // 0cfa93  sub esp, 8
    X86_AT(c, 0xcfa93u);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, 0x8u, 0, 4); }
    // 0cfa96  push ebx
    X86_AT(c, 0xcfa96u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0cfa97  push esi
    X86_AT(c, 0xcfa97u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0cfa98  push edi
    X86_AT(c, 0xcfa98u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0cfa99  mov dword ptr [ebp - 8], 0
    X86_AT(c, 0xcfa99u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), 0x0u);
    // 0cfaa0  mov bl, 0x41
    X86_AT(c, 0xcfaa0u);
    s8(c, 3, 0x41u);
    // 0cfaa2  mov esi, 4
    X86_AT(c, 0xcfaa2u);
    c.r[6] = 0x4u;
    // 0cfaa7  call 0xcfa74
    X86_AT(c, 0xcfaa7u);
    push32(c, 0xcfaacu); x86_call_known(c, 0xcfa74u, f_000cfa74); X86_RET(c, 0xcfaacu);
    X86_TICK(c, 4);
    // 0cfaac  mov edi, dword ptr [ebp + 0x10]
    X86_AT(c, 0xcfaacu);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u)));
L_cfaaf:
    X86_TICK(c, 11);
    // 0cfaaf  cmp edi, dword ptr [ebp + 0x14]
    X86_AT(c, 0xcfaafu);
    (void)x86_sub(c, c.r[7], rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x14u))), 0, 4);
    // 0cfab2  jg 0xcfac3
    X86_AT(c, 0xcfab2u);
    if (x86_cc(c, 15)) { goto L_cfac3; }
    X86_TICK(c, 16);
    // 0cfab4  mov eax, dword ptr [ebp + 8]
    X86_AT(c, 0xcfab4u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0cfab7  cmp dword ptr [eax + edi*4], 0
    X86_AT(c, 0xcfab7u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[0] + c.r[7] * 4))), 0x0u, 0, 4);
    // 0cfabb  je 0xcfac0
    X86_AT(c, 0xcfabbu);
    if (x86_cc(c, 4)) { goto L_cfac0; }
    X86_TICK(c, 6);
    // 0cfabd  inc dword ptr [ebp - 8]
    X86_AT(c, 0xcfabdu);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
L_cfac0:
    X86_TICK(c, 9);
    // 0cfac0  inc edi
    X86_AT(c, 0xcfac0u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0cfac1  jmp 0xcfaaf
    X86_AT(c, 0xcfac1u);
    X86_POLL(c, 0xcfaafu); goto L_cfaaf;
L_cfac3:
    X86_TICK(c, 23);
    // 0cfac3  mov eax, dword ptr [ebp - 8]
    X86_AT(c, 0xcfac3u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)));
    // 0cfac6  cdq 
    X86_AT(c, 0xcfac6u);
    c.r[2] = (c.r[0] & 0x80000000u) ? 0xFFFFFFFFu : 0u;
    // 0cfac7  sub eax, edx
    X86_AT(c, 0xcfac7u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[2], 0, 4); }
    // 0cfac9  sar eax, 1
    X86_AT(c, 0xcfac9u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 7, v, 0x1u, 4, w); if (w) c.r[0] = r; }
    // 0cfacb  mov edx, 9
    X86_AT(c, 0xcfacbu);
    c.r[2] = 0x9u;
    // 0cfad0  sub edx, eax
    X86_AT(c, 0xcfad0u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0cfad2  mov dword ptr [ebp - 4], edx
    X86_AT(c, 0xcfad2u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[2]);
    // 0cfad5  mov dword ptr [ebp - 8], 0
    X86_AT(c, 0xcfad5u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), 0x0u);
    // 0cfadc  mov edi, dword ptr [ebp + 0x10]
    X86_AT(c, 0xcfadcu);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u)));
L_cfadf:
    X86_TICK(c, 11);
    // 0cfadf  cmp edi, dword ptr [ebp + 0x14]
    X86_AT(c, 0xcfadfu);
    (void)x86_sub(c, c.r[7], rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x14u))), 0, 4);
    // 0cfae2  jg 0xcfb25
    X86_AT(c, 0xcfae2u);
    if (x86_cc(c, 15)) { goto L_cfb25; }
    X86_TICK(c, 16);
    // 0cfae4  mov eax, dword ptr [ebp + 8]
    X86_AT(c, 0xcfae4u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0cfae7  cmp dword ptr [eax + edi*4], 0
    X86_AT(c, 0xcfae7u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[0] + c.r[7] * 4))), 0x0u, 0, 4);
    // 0cfaeb  je 0xcfb21
    X86_AT(c, 0xcfaebu);
    if (x86_cc(c, 4)) { goto L_cfb21; }
    X86_TICK(c, 21);
    // 0cfaed  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0xcfaedu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0cfaf0  add eax, dword ptr [ebp - 8]
    X86_AT(c, 0xcfaf0u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u))), 0, 4); }
    // 0cfaf3  push eax
    X86_AT(c, 0xcfaf3u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0cfaf4  push 2
    X86_AT(c, 0xcfaf4u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0cfaf6  call 0xcc814
    X86_AT(c, 0xcfaf6u);
    push32(c, 0xcfafbu); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xcfafbu);
    X86_TICK(c, 13);
    // 0cfafb  push 0xf
    X86_AT(c, 0xcfafbu);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0cfafd  push ebx
    X86_AT(c, 0xcfafdu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0cfafe  push esi
    X86_AT(c, 0xcfafeu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0cfaff  call 0xcc7dc
    X86_AT(c, 0xcfaffu);
    push32(c, 0xcfb04u); x86_call_known(c, 0xcc7dcu, f_000cc7dc); X86_RET(c, 0xcfb04u);
    X86_TICK(c, 11);
    // 0cfb04  push 0x632c
    X86_AT(c, 0xcfb04u);
    { uint32_t v = 0x632Cu; push32(c, v); }
    // 0cfb09  push esi
    X86_AT(c, 0xcfb09u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0cfb0a  call 0xc8cdc
    X86_AT(c, 0xcfb0au);
    push32(c, 0xcfb0fu); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xcfb0fu);
    X86_TICK(c, 18);
    // 0cfb0f  mov eax, dword ptr [ebp + 0xc]
    X86_AT(c, 0xcfb0fu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0cfb12  push dword ptr [eax + edi*4]
    X86_AT(c, 0xcfb12u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[0] + c.r[7] * 4))); push32(c, v); }
    // 0cfb15  push esi
    X86_AT(c, 0xcfb15u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0cfb16  call 0xc8cdc
    X86_AT(c, 0xcfb16u);
    push32(c, 0xcfb1bu); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xcfb1bu);
    X86_TICK(c, 8);
    // 0cfb1b  inc dword ptr [ebp - 8]
    X86_AT(c, 0xcfb1bu);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0cfb1e  add esp, 0x24
    X86_AT(c, 0xcfb1eu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x24u, 0, 4); }
L_cfb21:
    X86_TICK(c, 11);
    // 0cfb21  inc ebx
    X86_AT(c, 0xcfb21u);
    { uint32_t v = c.r[3]; c.r[3] = x86_inc(c, v, 4); }
    // 0cfb22  inc edi
    X86_AT(c, 0xcfb22u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0cfb23  jmp 0xcfadf
    X86_AT(c, 0xcfb23u);
    X86_POLL(c, 0xcfadfu); goto L_cfadf;
L_cfb25:
    X86_TICK(c, 11);
    // 0cfb25  push 0x18
    X86_AT(c, 0xcfb25u);
    { uint32_t v = 0x18u; push32(c, v); }
    // 0cfb27  push 0xf
    X86_AT(c, 0xcfb27u);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0cfb29  call 0xcc814
    X86_AT(c, 0xcfb29u);
    push32(c, 0xcfb2eu); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xcfb2eu);
    X86_TICK(c, 2);
    // 0cfb2e  add esp, 8
    X86_AT(c, 0xcfb2eu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
L_cfb31:
    X86_TICK(c, 9);
    // 0cfb31  push 7
    X86_AT(c, 0xcfb31u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cfb33  call 0xc81e4
    X86_AT(c, 0xcfb33u);
    push32(c, 0xcfb38u); x86_call_known(c, 0xc81e4u, f_000c81e4); X86_RET(c, 0xcfb38u);
    X86_TICK(c, 12);
    // 0cfb38  add esp, 4
    X86_AT(c, 0xcfb38u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0cfb3b  xchg ebx, eax
    X86_AT(c, 0xcfb3bu);
    { uint32_t t = c.r[3]; c.r[3] = c.r[0]; c.r[0] = t; }
    // 0cfb3c  and bl, bl
    X86_AT(c, 0xcfb3cu);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v & g8(c, 3), 1)); }
    // 0cfb3e  je 0xcfb31
    X86_AT(c, 0xcfb3eu);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xcfb31u); goto L_cfb31; }
    X86_TICK(c, 22);
    // 0cfb40  mov al, byte ptr [ebp + 0x10]
    X86_AT(c, 0xcfb40u);
    s8(c, 0, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u))));
    // 0cfb43  add al, 0x41
    X86_AT(c, 0xcfb43u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, 0x41u, 0, 1)); }
    // 0cfb45  sub ebx, eax
    X86_AT(c, 0xcfb45u);
    { uint32_t v = c.r[3]; c.r[3] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0cfb47  movzx ebx, bl
    X86_AT(c, 0xcfb47u);
    c.r[3] = g8(c, 3);
    // 0cfb4a  cmp ebx, dword ptr [ebp + 0x10]
    X86_AT(c, 0xcfb4au);
    (void)x86_sub(c, c.r[3], rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u))), 0, 4);
    // 0cfb4d  jl 0xcfb64
    X86_AT(c, 0xcfb4du);
    if (x86_cc(c, 12)) { goto L_cfb64; }
    X86_TICK(c, 11);
    // 0cfb4f  cmp ebx, dword ptr [ebp + 0x14]
    X86_AT(c, 0xcfb4fu);
    (void)x86_sub(c, c.r[3], rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x14u))), 0, 4);
    // 0cfb52  jg 0xcfb64
    X86_AT(c, 0xcfb52u);
    if (x86_cc(c, 15)) { goto L_cfb64; }
    X86_TICK(c, 19);
    // 0cfb54  movzx ebx, bl
    X86_AT(c, 0xcfb54u);
    c.r[3] = g8(c, 3);
    // 0cfb57  mov eax, dword ptr [ebp + 8]
    X86_AT(c, 0xcfb57u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0cfb5a  cmp dword ptr [eax + ebx*4], 0
    X86_AT(c, 0xcfb5au);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[0] + c.r[3] * 4))), 0x0u, 0, 4);
    // 0cfb5e  je 0xcfb64
    X86_AT(c, 0xcfb5eu);
    if (x86_cc(c, 4)) { goto L_cfb64; }
    X86_TICK(c, 9);
    // 0cfb60  mov edi, ebx
    X86_AT(c, 0xcfb60u);
    c.r[7] = c.r[3];
    // 0cfb62  jmp 0xcfb67
    X86_AT(c, 0xcfb62u);
    goto L_cfb67;
L_cfb64:
    X86_TICK(c, 4);
    // 0cfb64  mov edi, dword ptr [ebp + 0x18]
    X86_AT(c, 0xcfb64u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x18u)));
L_cfb67:
    X86_TICK(c, 9);
    // 0cfb67  push esi
    X86_AT(c, 0xcfb67u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0cfb68  call 0xca0a0
    X86_AT(c, 0xcfb68u);
    push32(c, 0xcfb6du); x86_call_known(c, 0xca0a0u, f_000ca0a0); X86_RET(c, 0xcfb6du);
    X86_TICK(c, 18);
    // 0cfb6d  mov eax, dword ptr [ebp + 0xc]
    X86_AT(c, 0xcfb6du);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0cfb70  push dword ptr [eax + edi*4]
    X86_AT(c, 0xcfb70u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[0] + c.r[7] * 4))); push32(c, v); }
    // 0cfb73  push 7
    X86_AT(c, 0xcfb73u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cfb75  call 0xc8cdc
    X86_AT(c, 0xcfb75u);
    push32(c, 0xcfb7au); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xcfb7au);
    X86_TICK(c, 9);
    // 0cfb7a  push 0x6330
    X86_AT(c, 0xcfb7au);
    { uint32_t v = 0x6330u; push32(c, v); }
    // 0cfb7f  call 0xcc7bc
    X86_AT(c, 0xcfb7fu);
    push32(c, 0xcfb84u); x86_call_known(c, 0xcc7bcu, f_000cc7bc); X86_RET(c, 0xcfb84u);
    X86_TICK(c, 7);
    // 0cfb84  call 0xcfa84
    X86_AT(c, 0xcfb84u);
    push32(c, 0xcfb89u); x86_call_known(c, 0xcfa84u, f_000cfa84); X86_RET(c, 0xcfb89u);
    X86_TICK(c, 32);
    // 0cfb89  mov eax, edi
    X86_AT(c, 0xcfb89u);
    c.r[0] = c.r[7];
    // 0cfb8b  add esp, 0x10
    X86_AT(c, 0xcfb8bu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0cfb8e  pop edi
    X86_AT(c, 0xcfb8eu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0cfb8f  pop esi
    X86_AT(c, 0xcfb8fu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0cfb90  pop ebx
    X86_AT(c, 0xcfb90u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0cfb91  leave 
    X86_AT(c, 0xcfb91u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0cfb92  ret 
    X86_AT(c, 0xcfb92u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xcfa90u, "ran off the end of a function");
}
}

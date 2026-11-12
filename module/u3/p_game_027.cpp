#include "p_game_funcs.h"
namespace p_game {
void f_000d9814(X86Cpu& c) {
    X86_TICK(c, 28);
    // 0d9814  push ebp
    X86_AT(c, 0xd9814u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0d9815  mov ebp, esp
    X86_AT(c, 0xd9815u);
    c.r[5] = c.r[4];
    // 0d9817  push ecx
    X86_AT(c, 0xd9817u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 0d9818  mov ecx, dword ptr [ebp + 8]
    X86_AT(c, 0xd9818u);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0d981b  add dword ptr [0xb4388], ecx
    X86_AT(c, 0xd981bu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xB4388u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[1], 0, 4)); }
    // 0d9821  mov eax, dword ptr [0xb437c]
    X86_AT(c, 0xd9821u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xB437Cu)));
    // 0d9826  cmp eax, 0xffff
    X86_AT(c, 0xd9826u);
    (void)x86_sub(c, c.r[0], 0xFFFFu, 0, 4);
    // 0d982b  je 0xd9837
    X86_AT(c, 0xd982bu);
    if (x86_cc(c, 4)) { goto L_d9837; }
    X86_TICK(c, 7);
    // 0d982d  cmp ecx, eax
    X86_AT(c, 0xd982du);
    (void)x86_sub(c, c.r[1], c.r[0], 0, 4);
    // 0d982f  ja 0xd9837
    X86_AT(c, 0xd982fu);
    if (x86_cc(c, 7)) { goto L_d9837; }
    X86_TICK(c, 7);
    // 0d9831  sub dword ptr [0xb437c], ecx
    X86_AT(c, 0xd9831u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xB437Cu)); uint32_t v = rd32(ea); wr32(ea, x86_sub(c, v, c.r[1], 0, 4)); }
L_d9837:
    X86_TICK(c, 16);
    // 0d9837  leave 
    X86_AT(c, 0xd9837u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0d9838  ret 4
    X86_AT(c, 0xd9838u);
    c.eip = pop32(c); c.r[4] += 0x4u; return;
    x86_fault(c, 0xd9814u, "ran off the end of a function");
}
void f_000d9850(X86Cpu& c) {
    X86_TICK(c, 25);
    // 0d9850  push ebp
    X86_AT(c, 0xd9850u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0d9851  mov ebp, esp
    X86_AT(c, 0xd9851u);
    c.r[5] = c.r[4];
    // 0d9853  push ecx
    X86_AT(c, 0xd9853u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 0d9854  mov dword ptr [0xb47dc], 0
    X86_AT(c, 0xd9854u);
    wr32((c.sbase[3] + (uint32_t)(0xB47DCu)), 0x0u);
    // 0d985e  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0xd985eu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0d9861  movzx eax, byte ptr [eax + 0xc]
    X86_AT(c, 0xd9861u);
    c.r[0] = rd8((c.sbase[3] + (uint32_t)(c.r[0] + 0xCu)));
    // 0d9865  cmp eax, 0x69
    X86_AT(c, 0xd9865u);
    (void)x86_sub(c, c.r[0], 0x69u, 0, 4);
    // 0d9868  ja 0xd9882
    X86_AT(c, 0xd9868u);
    if (x86_cc(c, 7)) { goto L_d9882; }
    X86_TICK(c, 7);
    // 0d986a  cmp eax, 0x69
    X86_AT(c, 0xd986au);
    (void)x86_sub(c, c.r[0], 0x69u, 0, 4);
    // 0d986d  je 0xd989a
    X86_AT(c, 0xd986du);
    if (x86_cc(c, 4)) { goto L_d989a; }
    X86_TICK(c, 7);
    // 0d986f  cmp eax, 0x58
    X86_AT(c, 0xd986fu);
    (void)x86_sub(c, c.r[0], 0x58u, 0, 4);
    // 0d9872  je 0xd9909
    X86_AT(c, 0xd9872u);
    if (x86_cc(c, 4)) { goto L_d9909; }
    X86_TICK(c, 7);
    // 0d9878  cmp eax, 0x64
    X86_AT(c, 0xd9878u);
    (void)x86_sub(c, c.r[0], 0x64u, 0, 4);
    // 0d987b  je 0xd989a
    X86_AT(c, 0xd987bu);
    if (x86_cc(c, 4)) { goto L_d989a; }
    X86_TICK(c, 7);
    // 0d987d  jmp 0xd993d
    X86_AT(c, 0xd987du);
    goto L_d993d;
L_d9882:
    X86_TICK(c, 7);
    // 0d9882  cmp eax, 0x6f
    X86_AT(c, 0xd9882u);
    (void)x86_sub(c, c.r[0], 0x6Fu, 0, 4);
    // 0d9885  je 0xd98e4
    X86_AT(c, 0xd9885u);
    if (x86_cc(c, 4)) { goto L_d98e4; }
    X86_TICK(c, 7);
    // 0d9887  cmp eax, 0x75
    X86_AT(c, 0xd9887u);
    (void)x86_sub(c, c.r[0], 0x75u, 0, 4);
    // 0d988a  je 0xd98db
    X86_AT(c, 0xd988au);
    if (x86_cc(c, 4)) { goto L_d98db; }
    X86_TICK(c, 7);
    // 0d988c  cmp eax, 0x78
    X86_AT(c, 0xd988cu);
    (void)x86_sub(c, c.r[0], 0x78u, 0, 4);
    // 0d988f  je 0xd9909
    X86_AT(c, 0xd988fu);
    if (x86_cc(c, 4)) { goto L_d9909; }
    X86_TICK(c, 7);
    // 0d9895  jmp 0xd993d
    X86_AT(c, 0xd9895u);
    goto L_d993d;
L_d989a:
    X86_TICK(c, 17);
    // 0d989a  mov byte ptr [0xb47d0], 0xa
    X86_AT(c, 0xd989au);
    wr8((c.sbase[3] + (uint32_t)(0xB47D0u)), 0xAu);
    // 0d98a1  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0xd98a1u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0d98a4  mov edx, dword ptr [eax + 8]
    X86_AT(c, 0xd98a4u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0x8u)));
    // 0d98a7  and edx, edx
    X86_AT(c, 0xd98a7u);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & c.r[2], 4); }
    // 0d98a9  jge 0xd98b7
    X86_AT(c, 0xd98a9u);
    if (x86_cc(c, 13)) { goto L_d98b7; }
    X86_TICK(c, 15);
    // 0d98ab  neg dword ptr [eax + 8]
    X86_AT(c, 0xd98abu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[0] + 0x8u)); uint32_t v = rd32(ea); wr32(ea, x86_neg(c, v, 4)); }
    // 0d98ae  mov byte ptr [0xb47d2], 0x2d
    X86_AT(c, 0xd98aeu);
    wr8((c.sbase[3] + (uint32_t)(0xB47D2u)), 0x2Du);
    // 0d98b5  jmp 0xd98fb
    X86_AT(c, 0xd98b5u);
    goto L_d98fb;
L_d98b7:
    X86_TICK(c, 12);
    // 0d98b7  test byte ptr [0xb4378], 2
    X86_AT(c, 0xd98b7u);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(0xB4378u))) & 0x2u, 1);
    // 0d98be  je 0xd98c9
    X86_AT(c, 0xd98beu);
    if (x86_cc(c, 4)) { goto L_d98c9; }
    X86_TICK(c, 9);
    // 0d98c0  mov byte ptr [0xb47d2], 0x2b
    X86_AT(c, 0xd98c0u);
    wr8((c.sbase[3] + (uint32_t)(0xB47D2u)), 0x2Bu);
    // 0d98c7  jmp 0xd98fb
    X86_AT(c, 0xd98c7u);
    goto L_d98fb;
L_d98c9:
    X86_TICK(c, 12);
    // 0d98c9  test byte ptr [0xb4378], 4
    X86_AT(c, 0xd98c9u);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(0xB4378u))) & 0x4u, 1);
    // 0d98d0  je 0xd993d
    X86_AT(c, 0xd98d0u);
    if (x86_cc(c, 4)) { goto L_d993d; }
    X86_TICK(c, 9);
    // 0d98d2  mov byte ptr [0xb47d2], 0x20
    X86_AT(c, 0xd98d2u);
    wr8((c.sbase[3] + (uint32_t)(0xB47D2u)), 0x20u);
    // 0d98d9  jmp 0xd98fb
    X86_AT(c, 0xd98d9u);
    goto L_d98fb;
L_d98db:
    X86_TICK(c, 9);
    // 0d98db  mov byte ptr [0xb47d0], 0xa
    X86_AT(c, 0xd98dbu);
    wr8((c.sbase[3] + (uint32_t)(0xB47D0u)), 0xAu);
    // 0d98e2  jmp 0xd993d
    X86_AT(c, 0xd98e2u);
    goto L_d993d;
L_d98e4:
    X86_TICK(c, 14);
    // 0d98e4  mov byte ptr [0xb47d0], 8
    X86_AT(c, 0xd98e4u);
    wr8((c.sbase[3] + (uint32_t)(0xB47D0u)), 0x8u);
    // 0d98eb  test byte ptr [0xb4378], 8
    X86_AT(c, 0xd98ebu);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(0xB4378u))) & 0x8u, 1);
    // 0d98f2  je 0xd993d
    X86_AT(c, 0xd98f2u);
    if (x86_cc(c, 4)) { goto L_d993d; }
    X86_TICK(c, 2);
    // 0d98f4  mov byte ptr [0xb47d2], 0x30
    X86_AT(c, 0xd98f4u);
    wr8((c.sbase[3] + (uint32_t)(0xB47D2u)), 0x30u);
L_d98fb:
    X86_TICK(c, 11);
    // 0d98fb  mov dword ptr [0xb47dc], 1
    X86_AT(c, 0xd98fbu);
    wr32((c.sbase[3] + (uint32_t)(0xB47DCu)), 0x1u);
    // 0d9905  push 1
    X86_AT(c, 0xd9905u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0d9907  jmp 0xd9936
    X86_AT(c, 0xd9907u);
    goto L_d9936;
L_d9909:
    X86_TICK(c, 14);
    // 0d9909  mov byte ptr [0xb47d0], 0x10
    X86_AT(c, 0xd9909u);
    wr8((c.sbase[3] + (uint32_t)(0xB47D0u)), 0x10u);
    // 0d9910  test byte ptr [0xb4378], 8
    X86_AT(c, 0xd9910u);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(0xB4378u))) & 0x8u, 1);
    // 0d9917  je 0xd993d
    X86_AT(c, 0xd9917u);
    if (x86_cc(c, 4)) { goto L_d993d; }
    X86_TICK(c, 18);
    // 0d9919  mov byte ptr [0xb47d2], 0x30
    X86_AT(c, 0xd9919u);
    wr8((c.sbase[3] + (uint32_t)(0xB47D2u)), 0x30u);
    // 0d9920  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0xd9920u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0d9923  mov al, byte ptr [eax + 0xc]
    X86_AT(c, 0xd9923u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[0] + 0xCu))));
    // 0d9926  mov byte ptr [0xb47d3], al
    X86_AT(c, 0xd9926u);
    wr8((c.sbase[3] + (uint32_t)(0xB47D3u)), g8(c, 0));
    // 0d992b  mov eax, 2
    X86_AT(c, 0xd992bu);
    c.r[0] = 0x2u;
    // 0d9930  mov dword ptr [0xb47dc], eax
    X86_AT(c, 0xd9930u);
    wr32((c.sbase[3] + (uint32_t)(0xB47DCu)), c.r[0]);
    // 0d9935  push eax
    X86_AT(c, 0xd9935u);
    { uint32_t v = c.r[0]; push32(c, v); }
L_d9936:
    X86_TICK(c, 9);
    // 0d9936  mov ecx, ebp
    X86_AT(c, 0xd9936u);
    c.r[1] = c.r[5];
    // 0d9938  call 0xd9814
    X86_AT(c, 0xd9938u);
    push32(c, 0xd993du); x86_call_known(c, 0xd9814u, f_000d9814); X86_RET(c, 0xd993du);
L_d993d:
    X86_TICK(c, 16);
    // 0d993d  leave 
    X86_AT(c, 0xd993du);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0d993e  ret 
    X86_AT(c, 0xd993eu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd9850u, "ran off the end of a function");
}
void f_000d993d(X86Cpu& c) {
    X86_TICK(c, 16);
    // 0d993d  leave 
    X86_AT(c, 0xd993du);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0d993e  ret 
    X86_AT(c, 0xd993eu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd993du, "ran off the end of a function");
}
void f_000d9948(X86Cpu& c) {
    X86_TICK(c, 17);
    // 0d9948  push ebp
    X86_AT(c, 0xd9948u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0d9949  mov ebp, esp
    X86_AT(c, 0xd9949u);
    c.r[5] = c.r[4];
    // 0d994b  push ecx
    X86_AT(c, 0xd994bu);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 0d994c  mov ecx, dword ptr [ebp + 8]
    X86_AT(c, 0xd994cu);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0d994f  cmp ecx, 0xa
    X86_AT(c, 0xd994fu);
    (void)x86_sub(c, c.r[1], 0xAu, 0, 4);
    // 0d9952  jge 0xd9959
    X86_AT(c, 0xd9952u);
    if (x86_cc(c, 13)) { goto L_d9959; }
    X86_TICK(c, 9);
    // 0d9954  add ecx, 0x30
    X86_AT(c, 0xd9954u);
    { uint32_t v = c.r[1]; c.r[1] = x86_add(c, v, 0x30u, 0, 4); }
    // 0d9957  jmp 0xd996d
    X86_AT(c, 0xd9957u);
    goto L_d996d;
L_d9959:
    X86_TICK(c, 20);
    // 0d9959  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0xd9959u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0d995c  mov eax, dword ptr [eax - 4]
    X86_AT(c, 0xd995cu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0xFFFFFFFCu)));
    // 0d995f  cmp byte ptr [eax + 0xc], 0x78
    X86_AT(c, 0xd995fu);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[0] + 0xCu))), 0x78u, 0, 1);
    // 0d9963  jne 0xd996a
    X86_AT(c, 0xd9963u);
    if (x86_cc(c, 5)) { goto L_d996a; }
    X86_TICK(c, 9);
    // 0d9965  add ecx, 0x57
    X86_AT(c, 0xd9965u);
    { uint32_t v = c.r[1]; c.r[1] = x86_add(c, v, 0x57u, 0, 4); }
    // 0d9968  jmp 0xd996d
    X86_AT(c, 0xd9968u);
    goto L_d996d;
L_d996a:
    X86_TICK(c, 2);
    // 0d996a  add ecx, 0x37
    X86_AT(c, 0xd996au);
    { uint32_t v = c.r[1]; c.r[1] = x86_add(c, v, 0x37u, 0, 4); }
L_d996d:
    X86_TICK(c, 30);
    // 0d996d  mov eax, ecx
    X86_AT(c, 0xd996du);
    c.r[0] = c.r[1];
    // 0d996f  mov edx, dword ptr [0xb47c8]
    X86_AT(c, 0xd996fu);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(0xB47C8u)));
    // 0d9975  mov byte ptr [edx + 0xb47a7], al
    X86_AT(c, 0xd9975u);
    wr8((c.sbase[3] + (uint32_t)(c.r[2] + 0xB47A7u)), g8(c, 0));
    // 0d997b  dec dword ptr [0xb47c8]
    X86_AT(c, 0xd997bu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xB47C8u)); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 0d9981  leave 
    X86_AT(c, 0xd9981u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0d9982  ret 4
    X86_AT(c, 0xd9982u);
    c.eip = pop32(c); c.r[4] += 0x4u; return;
    x86_fault(c, 0xd9948u, "ran off the end of a function");
}
void f_000d9994(X86Cpu& c) {
    X86_TICK(c, 27);
    // 0d9994  push ebp
    X86_AT(c, 0xd9994u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0d9995  mov ebp, esp
    X86_AT(c, 0xd9995u);
    c.r[5] = c.r[4];
    // 0d9997  push ecx
    X86_AT(c, 0xd9997u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 0d9998  push ebx
    X86_AT(c, 0xd9998u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0d9999  push edi
    X86_AT(c, 0xd9999u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d999a  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0xd999au);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0d999d  mov edi, dword ptr [eax + 8]
    X86_AT(c, 0xd999du);
    c.r[7] = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0x8u)));
    // 0d99a0  mov dword ptr [0xb47c8], 0x1e
    X86_AT(c, 0xd99a0u);
    wr32((c.sbase[3] + (uint32_t)(0xB47C8u)), 0x1Eu);
    // 0d99aa  and edi, edi
    X86_AT(c, 0xd99aau);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & c.r[7], 4); }
    // 0d99ac  jbe 0xd99d1
    X86_AT(c, 0xd99acu);
    if (x86_cc(c, 6)) { goto L_d99d1; }
    X86_TICK(c, 7);
    // 0d99ae  jmp 0xd99cb
    X86_AT(c, 0xd99aeu);
    goto L_d99cb;
L_d99b0:
    X86_TICK(c, 69);
    // 0d99b0  movzx ecx, byte ptr [0xb47d0]
    X86_AT(c, 0xd99b0u);
    c.r[1] = rd8((c.sbase[3] + (uint32_t)(0xB47D0u)));
    // 0d99b7  mov eax, edi
    X86_AT(c, 0xd99b7u);
    c.r[0] = c.r[7];
    // 0d99b9  sub edx, edx
    X86_AT(c, 0xd99b9u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[2], 0, 4); }
    // 0d99bb  div ecx
    X86_AT(c, 0xd99bbu);
    x86_div(c, c.r[1], 4, 0xd99bbu);
    // 0d99bd  mov ebx, edx
    X86_AT(c, 0xd99bdu);
    c.r[3] = c.r[2];
    // 0d99bf  xchg edi, eax
    X86_AT(c, 0xd99bfu);
    { uint32_t t = c.r[7]; c.r[7] = c.r[0]; c.r[0] = t; }
    // 0d99c0  movzx ebx, bl
    X86_AT(c, 0xd99c0u);
    c.r[3] = g8(c, 3);
    // 0d99c3  push ebx
    X86_AT(c, 0xd99c3u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0d99c4  mov ecx, ebp
    X86_AT(c, 0xd99c4u);
    c.r[1] = c.r[5];
    // 0d99c6  call 0xd9948
    X86_AT(c, 0xd99c6u);
    push32(c, 0xd99cbu); x86_call_known(c, 0xd9948u, f_000d9948); X86_RET(c, 0xd99cbu);
L_d99cb:
    X86_TICK(c, 7);
    // 0d99cb  and edi, edi
    X86_AT(c, 0xd99cbu);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & c.r[7], 4); }
    // 0d99cd  ja 0xd99b0
    X86_AT(c, 0xd99cdu);
    if (x86_cc(c, 7)) { X86_POLL(c, 0xd99b0u); goto L_d99b0; }
    X86_TICK(c, 7);
    // 0d99cf  jmp 0xd99e3
    X86_AT(c, 0xd99cfu);
    goto L_d99e3;
L_d99d1:
    X86_TICK(c, 12);
    // 0d99d1  mov eax, dword ptr [0xb47c8]
    X86_AT(c, 0xd99d1u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xB47C8u)));
    // 0d99d6  mov byte ptr [eax + 0xb47a7], 0x30
    X86_AT(c, 0xd99d6u);
    wr8((c.sbase[3] + (uint32_t)(c.r[0] + 0xB47A7u)), 0x30u);
    // 0d99dd  dec dword ptr [0xb47c8]
    X86_AT(c, 0xd99ddu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xB47C8u)); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
L_d99e3:
    X86_TICK(c, 40);
    // 0d99e3  inc dword ptr [0xb47c8]
    X86_AT(c, 0xd99e3u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xB47C8u)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0d99e9  mov eax, 0x1f
    X86_AT(c, 0xd99e9u);
    c.r[0] = 0x1Fu;
    // 0d99ee  sub eax, dword ptr [0xb47c8]
    X86_AT(c, 0xd99eeu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, rd32((c.sbase[3] + (uint32_t)(0xB47C8u))), 0, 4); }
    // 0d99f4  mov dword ptr [0xb47cc], eax
    X86_AT(c, 0xd99f4u);
    wr32((c.sbase[3] + (uint32_t)(0xB47CCu)), c.r[0]);
    // 0d99f9  pop edi
    X86_AT(c, 0xd99f9u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0d99fa  pop ebx
    X86_AT(c, 0xd99fau);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0d99fb  leave 
    X86_AT(c, 0xd99fbu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0d99fc  ret 
    X86_AT(c, 0xd99fcu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd9994u, "ran off the end of a function");
}
void f_000d9a04(X86Cpu& c) {
    X86_TICK(c, 18);
    // 0d9a04  push ebp
    X86_AT(c, 0xd9a04u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0d9a05  mov ebp, esp
    X86_AT(c, 0xd9a05u);
    c.r[5] = c.r[4];
    // 0d9a07  push ecx
    X86_AT(c, 0xd9a07u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 0d9a08  push dword ptr [0xb47d8]
    X86_AT(c, 0xd9a08u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xB47D8u))); push32(c, v); }
    // 0d9a0e  call 0xd949c
    X86_AT(c, 0xd9a0eu);
    push32(c, 0xd9a13u); x86_call_known(c, 0xd949cu, f_000d949c); X86_RET(c, 0xd9a13u);
    X86_TICK(c, 22);
    // 0d9a13  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0xd9a13u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0d9a16  mov byte ptr [eax - 5], 0
    X86_AT(c, 0xd9a16u);
    wr8((c.sbase[3] + (uint32_t)(c.r[0] + 0xFFFFFFFBu)), 0x0u);
    // 0d9a1a  leave 
    X86_AT(c, 0xd9a1au);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0d9a1b  ret 
    X86_AT(c, 0xd9a1bu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd9a04u, "ran off the end of a function");
}
void f_000d9a30(X86Cpu& c) {
    X86_TICK(c, 24);
    // 0d9a30  push ebp
    X86_AT(c, 0xd9a30u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0d9a31  mov ebp, esp
    X86_AT(c, 0xd9a31u);
    c.r[5] = c.r[4];
    // 0d9a33  push ecx
    X86_AT(c, 0xd9a33u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 0d9a34  push eax
    X86_AT(c, 0xd9a34u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d9a35  push ebx
    X86_AT(c, 0xd9a35u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0d9a36  push edi
    X86_AT(c, 0xd9a36u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d9a37  cmp dword ptr [0xb4380], 0
    X86_AT(c, 0xd9a37u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xB4380u))), 0x0u, 0, 4);
    // 0d9a3e  jne 0xd9a52
    X86_AT(c, 0xd9a3eu);
    if (x86_cc(c, 5)) { goto L_d9a52; }
    X86_TICK(c, 12);
    // 0d9a40  cmp dword ptr [ebp + 8], 0
    X86_AT(c, 0xd9a40u);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))), 0x0u, 0, 4);
    // 0d9a44  jne 0xd9a52
    X86_AT(c, 0xd9a44u);
    if (x86_cc(c, 5)) { goto L_d9a52; }
    X86_TICK(c, 9);
    // 0d9a46  push 0
    X86_AT(c, 0xd9a46u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0d9a48  call 0xd949c
    X86_AT(c, 0xd9a48u);
    push32(c, 0xd9a4du); x86_call_known(c, 0xd949cu, f_000d949c); X86_RET(c, 0xd9a4du);
    X86_TICK(c, 7);
    // 0d9a4d  jmp 0xd9b78
    X86_AT(c, 0xd9a4du);
    goto L_d9b78;
L_d9a52:
    X86_TICK(c, 9);
    // 0d9a52  mov ecx, ebp
    X86_AT(c, 0xd9a52u);
    c.r[1] = c.r[5];
    // 0d9a54  call 0xd9850
    X86_AT(c, 0xd9a54u);
    push32(c, 0xd9a59u); x86_call_known(c, 0xd9850u, f_000d9850); X86_RET(c, 0xd9a59u);
    X86_TICK(c, 9);
    // 0d9a59  mov ecx, ebp
    X86_AT(c, 0xd9a59u);
    c.r[1] = c.r[5];
    // 0d9a5b  call 0xd9994
    X86_AT(c, 0xd9a5bu);
    push32(c, 0xd9a60u); x86_call_known(c, 0xd9994u, f_000d9994); X86_RET(c, 0xd9a60u);
    X86_TICK(c, 12);
    // 0d9a60  cmp dword ptr [0xb4380], 0xffff
    X86_AT(c, 0xd9a60u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xB4380u))), 0xFFFFu, 0, 4);
    // 0d9a6a  jne 0xd9a78
    X86_AT(c, 0xd9a6au);
    if (x86_cc(c, 5)) { goto L_d9a78; }
    X86_TICK(c, 13);
    // 0d9a6c  mov eax, dword ptr [0xb47cc]
    X86_AT(c, 0xd9a6cu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xB47CCu)));
    // 0d9a71  mov dword ptr [0xb47d8], eax
    X86_AT(c, 0xd9a71u);
    wr32((c.sbase[3] + (uint32_t)(0xB47D8u)), c.r[0]);
    // 0d9a76  jmp 0xd9a8e
    X86_AT(c, 0xd9a76u);
    goto L_d9a8e;
L_d9a78:
    X86_TICK(c, 15);
    // 0d9a78  mov eax, dword ptr [0xb4380]
    X86_AT(c, 0xd9a78u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xB4380u)));
    // 0d9a7d  mov edx, dword ptr [0xb47cc]
    X86_AT(c, 0xd9a7du);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(0xB47CCu)));
    // 0d9a83  cmp eax, edx
    X86_AT(c, 0xd9a83u);
    (void)x86_sub(c, c.r[0], c.r[2], 0, 4);
    // 0d9a85  jb 0xd9a88
    X86_AT(c, 0xd9a85u);
    if (x86_cc(c, 2)) { goto L_d9a88; }
    X86_TICK(c, 3);
    // 0d9a87  xchg edx, eax
    X86_AT(c, 0xd9a87u);
    { uint32_t t = c.r[2]; c.r[2] = c.r[0]; c.r[0] = t; }
L_d9a88:
    X86_TICK(c, 2);
    // 0d9a88  mov dword ptr [0xb47d8], edx
    X86_AT(c, 0xd9a88u);
    wr32((c.sbase[3] + (uint32_t)(0xB47D8u)), c.r[2]);
L_d9a8e:
    X86_TICK(c, 11);
    // 0d9a8e  mov eax, dword ptr [0xb437c]
    X86_AT(c, 0xd9a8eu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xB437Cu)));
    // 0d9a93  cmp eax, 0xffff
    X86_AT(c, 0xd9a93u);
    (void)x86_sub(c, c.r[0], 0xFFFFu, 0, 4);
    // 0d9a98  je 0xd9aa6
    X86_AT(c, 0xd9a98u);
    if (x86_cc(c, 4)) { goto L_d9aa6; }
    X86_TICK(c, 11);
    // 0d9a9a  cmp eax, dword ptr [0xb47d8]
    X86_AT(c, 0xd9a9au);
    (void)x86_sub(c, c.r[0], rd32((c.sbase[3] + (uint32_t)(0xB47D8u))), 0, 4);
    // 0d9aa0  jbe 0xd9aa6
    X86_AT(c, 0xd9aa0u);
    if (x86_cc(c, 6)) { goto L_d9aa6; }
    X86_TICK(c, 9);
    // 0d9aa2  mov bl, 1
    X86_AT(c, 0xd9aa2u);
    s8(c, 3, 0x1u);
    // 0d9aa4  jmp 0xd9aa8
    X86_AT(c, 0xd9aa4u);
    goto L_d9aa8;
L_d9aa6:
    X86_TICK(c, 2);
    // 0d9aa6  sub ebx, ebx
    X86_AT(c, 0xd9aa6u);
    { uint32_t v = c.r[3]; c.r[3] = x86_sub(c, v, c.r[3], 0, 4); }
L_d9aa8:
    X86_TICK(c, 9);
    // 0d9aa8  mov byte ptr [ebp - 5], bl
    X86_AT(c, 0xd9aa8u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFBu)), g8(c, 3));
    // 0d9aab  and bl, bl
    X86_AT(c, 0xd9aabu);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v & g8(c, 3), 1)); }
    // 0d9aad  je 0xd9ac8
    X86_AT(c, 0xd9aadu);
    if (x86_cc(c, 4)) { goto L_d9ac8; }
    X86_TICK(c, 12);
    // 0d9aaf  test byte ptr [0xb4378], 1
    X86_AT(c, 0xd9aafu);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(0xB4378u))) & 0x1u, 1);
    // 0d9ab6  jne 0xd9ac8
    X86_AT(c, 0xd9ab6u);
    if (x86_cc(c, 5)) { goto L_d9ac8; }
    X86_TICK(c, 12);
    // 0d9ab8  test byte ptr [0xb4378], 0x10
    X86_AT(c, 0xd9ab8u);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(0xB4378u))) & 0x10u, 1);
    // 0d9abf  jne 0xd9ac8
    X86_AT(c, 0xd9abfu);
    if (x86_cc(c, 5)) { goto L_d9ac8; }
    X86_TICK(c, 9);
    // 0d9ac1  mov ecx, ebp
    X86_AT(c, 0xd9ac1u);
    c.r[1] = c.r[5];
    // 0d9ac3  call 0xd9a04
    X86_AT(c, 0xd9ac3u);
    push32(c, 0xd9ac8u); x86_call_known(c, 0xd9a04u, f_000d9a04); X86_RET(c, 0xd9ac8u);
L_d9ac8:
    X86_TICK(c, 11);
    // 0d9ac8  mov eax, dword ptr [0xb47dc]
    X86_AT(c, 0xd9ac8u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xB47DCu)));
    // 0d9acd  and eax, eax
    X86_AT(c, 0xd9acdu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0d9acf  je 0xd9ae3
    X86_AT(c, 0xd9acfu);
    if (x86_cc(c, 4)) { goto L_d9ae3; }
    X86_TICK(c, 15);
    // 0d9ad1  push eax
    X86_AT(c, 0xd9ad1u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d9ad2  push 0xb47d2
    X86_AT(c, 0xd9ad2u);
    { uint32_t v = 0xB47D2u; push32(c, v); }
    // 0d9ad7  mov ecx, dword ptr [0xb4390]
    X86_AT(c, 0xd9ad7u);
    c.r[1] = rd32((c.sbase[3] + (uint32_t)(0xB4390u)));
    // 0d9add  call dword ptr [0xb438c]
    X86_AT(c, 0xd9addu);
    { uint32_t t = rd32((c.sbase[3] + (uint32_t)(0xB438Cu))); push32(c, 0xd9ae3u); x86_call(c, t); X86_RET(c, 0xd9ae3u); }
L_d9ae3:
    X86_TICK(c, 12);
    // 0d9ae3  cmp byte ptr [ebp - 5], 0
    X86_AT(c, 0xd9ae3u);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFBu))), 0x0u, 0, 1);
    // 0d9ae7  je 0xd9af9
    X86_AT(c, 0xd9ae7u);
    if (x86_cc(c, 4)) { goto L_d9af9; }
    X86_TICK(c, 12);
    // 0d9ae9  test byte ptr [0xb4378], 1
    X86_AT(c, 0xd9ae9u);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(0xB4378u))) & 0x1u, 1);
    // 0d9af0  jne 0xd9af9
    X86_AT(c, 0xd9af0u);
    if (x86_cc(c, 5)) { goto L_d9af9; }
    X86_TICK(c, 9);
    // 0d9af2  mov ecx, ebp
    X86_AT(c, 0xd9af2u);
    c.r[1] = c.r[5];
    // 0d9af4  call 0xd9a04
    X86_AT(c, 0xd9af4u);
    push32(c, 0xd9af9u); x86_call_known(c, 0xd9a04u, f_000d9a04); X86_RET(c, 0xd9af9u);
L_d9af9:
    X86_TICK(c, 11);
    // 0d9af9  mov eax, dword ptr [0xb4380]
    X86_AT(c, 0xd9af9u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xB4380u)));
    // 0d9afe  cmp eax, 0xffff
    X86_AT(c, 0xd9afeu);
    (void)x86_sub(c, c.r[0], 0xFFFFu, 0, 4);
    // 0d9b03  je 0xd9b25
    X86_AT(c, 0xd9b03u);
    if (x86_cc(c, 4)) { goto L_d9b25; }
    X86_TICK(c, 11);
    // 0d9b05  mov edx, dword ptr [0xb47cc]
    X86_AT(c, 0xd9b05u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(0xB47CCu)));
    // 0d9b0b  cmp eax, edx
    X86_AT(c, 0xd9b0bu);
    (void)x86_sub(c, c.r[0], c.r[2], 0, 4);
    // 0d9b0d  jbe 0xd9b25
    X86_AT(c, 0xd9b0du);
    if (x86_cc(c, 6)) { goto L_d9b25; }
    X86_TICK(c, 23);
    // 0d9b0f  xchg edi, eax
    X86_AT(c, 0xd9b0fu);
    { uint32_t t = c.r[7]; c.r[7] = c.r[0]; c.r[0] = t; }
    // 0d9b10  sub edi, edx
    X86_AT(c, 0xd9b10u);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[2], 0, 4); }
    // 0d9b12  add dword ptr [0xb4388], edi
    X86_AT(c, 0xd9b12u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xB4388u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[7], 0, 4)); }
    // 0d9b18  push edi
    X86_AT(c, 0xd9b18u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d9b19  push 0xb4394
    X86_AT(c, 0xd9b19u);
    { uint32_t v = 0xB4394u; push32(c, v); }
    // 0d9b1e  call 0xd9454
    X86_AT(c, 0xd9b1eu);
    push32(c, 0xd9b23u); x86_call_known(c, 0xd9454u, f_000d9454); X86_RET(c, 0xd9b23u);
    X86_TICK(c, 7);
    // 0d9b23  jmp 0xd9b48
    X86_AT(c, 0xd9b23u);
    goto L_d9b48;
L_d9b25:
    X86_TICK(c, 12);
    // 0d9b25  cmp dword ptr [0xb4380], 0
    X86_AT(c, 0xd9b25u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xB4380u))), 0x0u, 0, 4);
    // 0d9b2c  jne 0xd9b48
    X86_AT(c, 0xd9b2cu);
    if (x86_cc(c, 5)) { goto L_d9b48; }
    X86_TICK(c, 12);
    // 0d9b2e  cmp dword ptr [ebp + 8], 0
    X86_AT(c, 0xd9b2eu);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))), 0x0u, 0, 4);
    // 0d9b32  jne 0xd9b48
    X86_AT(c, 0xd9b32u);
    if (x86_cc(c, 5)) { goto L_d9b48; }
    X86_TICK(c, 4);
    // 0d9b34  mov dword ptr [0xb47c8], 0x1f
    X86_AT(c, 0xd9b34u);
    wr32((c.sbase[3] + (uint32_t)(0xB47C8u)), 0x1Fu);
    // 0d9b3e  mov dword ptr [0xb47cc], 0
    X86_AT(c, 0xd9b3eu);
    wr32((c.sbase[3] + (uint32_t)(0xB47CCu)), 0x0u);
L_d9b48:
    X86_TICK(c, 32);
    // 0d9b48  mov eax, dword ptr [0xb47cc]
    X86_AT(c, 0xd9b48u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xB47CCu)));
    // 0d9b4d  add dword ptr [0xb4388], eax
    X86_AT(c, 0xd9b4du);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xB4388u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 0d9b53  push eax
    X86_AT(c, 0xd9b53u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d9b54  mov eax, dword ptr [0xb47c8]
    X86_AT(c, 0xd9b54u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xB47C8u)));
    // 0d9b59  add eax, 0xb47a7
    X86_AT(c, 0xd9b59u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0xB47A7u, 0, 4); }
    // 0d9b5e  push eax
    X86_AT(c, 0xd9b5eu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d9b5f  mov ecx, dword ptr [0xb4390]
    X86_AT(c, 0xd9b5fu);
    c.r[1] = rd32((c.sbase[3] + (uint32_t)(0xB4390u)));
    // 0d9b65  call dword ptr [0xb438c]
    X86_AT(c, 0xd9b65u);
    { uint32_t t = rd32((c.sbase[3] + (uint32_t)(0xB438Cu))); push32(c, 0xd9b6bu); x86_call(c, t); X86_RET(c, 0xd9b6bu); }
    X86_TICK(c, 12);
    // 0d9b6b  cmp byte ptr [ebp - 5], 0
    X86_AT(c, 0xd9b6bu);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFBu))), 0x0u, 0, 1);
    // 0d9b6f  je 0xd9b78
    X86_AT(c, 0xd9b6fu);
    if (x86_cc(c, 4)) { goto L_d9b78; }
    X86_TICK(c, 9);
    // 0d9b71  mov ecx, ebp
    X86_AT(c, 0xd9b71u);
    c.r[1] = c.r[5];
    // 0d9b73  call 0xd9a04
    X86_AT(c, 0xd9b73u);
    push32(c, 0xd9b78u); x86_call_known(c, 0xd9a04u, f_000d9a04); X86_RET(c, 0xd9b78u);
L_d9b78:
    X86_TICK(c, 24);
    // 0d9b78  pop edi
    X86_AT(c, 0xd9b78u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0d9b79  pop ebx
    X86_AT(c, 0xd9b79u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0d9b7a  leave 
    X86_AT(c, 0xd9b7au);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0d9b7b  ret 8
    X86_AT(c, 0xd9b7bu);
    c.eip = pop32(c); c.r[4] += 0x8u; return;
    x86_fault(c, 0xd9a30u, "ran off the end of a function");
}
void f_000d9b8c(X86Cpu& c) {
    X86_TICK(c, 25);
    // 0d9b8c  push ebp
    X86_AT(c, 0xd9b8cu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0d9b8d  mov ebp, esp
    X86_AT(c, 0xd9b8du);
    c.r[5] = c.r[4];
    // 0d9b8f  push ecx
    X86_AT(c, 0xd9b8fu);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 0d9b90  push esi
    X86_AT(c, 0xd9b90u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d9b91  push edi
    X86_AT(c, 0xd9b91u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d9b92  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0xd9b92u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0d9b95  mov esi, dword ptr [ebp + 0xc]
    X86_AT(c, 0xd9b95u);
    c.r[6] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0d9b98  jmp 0xd9bba
    X86_AT(c, 0xd9b98u);
    goto L_d9bba;
L_d9b9a:
    X86_TICK(c, 14);
    // 0d9b9a  mov ecx, edi
    X86_AT(c, 0xd9b9au);
    c.r[1] = c.r[7];
    // 0d9b9c  and ecx, 0xf
    X86_AT(c, 0xd9b9cu);
    { uint32_t v = c.r[1]; c.r[1] = x86_logic(c, v & 0xFu, 4); }
    // 0d9ba2  shr edi, 4
    X86_AT(c, 0xd9ba2u);
    { uint32_t v = c.r[7]; bool w; uint32_t r = x86_shift(c, 5, v, 0x4u, 4, w); if (w) c.r[7] = r; }
    // 0d9ba5  cmp ecx, 0xa
    X86_AT(c, 0xd9ba5u);
    (void)x86_sub(c, c.r[1], 0xAu, 0, 4);
    // 0d9ba8  jae 0xd9baf
    X86_AT(c, 0xd9ba8u);
    if (x86_cc(c, 3)) { goto L_d9baf; }
    X86_TICK(c, 9);
    // 0d9baa  lea eax, [ecx + 0x30]
    X86_AT(c, 0xd9baau);
    c.r[0] = (uint32_t)(c.r[1] + 0x30u);
    // 0d9bad  jmp 0xd9bb2
    X86_AT(c, 0xd9badu);
    goto L_d9bb2;
L_d9baf:
    X86_TICK(c, 2);
    // 0d9baf  lea eax, [ecx + 0x57]
    X86_AT(c, 0xd9bafu);
    c.r[0] = (uint32_t)(c.r[1] + 0x57u);
L_d9bb2:
    X86_TICK(c, 8);
    // 0d9bb2  mov edx, dword ptr [ebp - 4]
    X86_AT(c, 0xd9bb2u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0d9bb5  mov byte ptr [edx + esi*1 - 0xf], al
    X86_AT(c, 0xd9bb5u);
    wr8((c.sbase[3] + (uint32_t)(c.r[2] + c.r[6] + 0xFFFFFFF1u)), g8(c, 0));
    // 0d9bb9  dec esi
    X86_AT(c, 0xd9bb9u);
    { uint32_t v = c.r[6]; c.r[6] = x86_dec(c, v, 4); }
L_d9bba:
    X86_TICK(c, 7);
    // 0d9bba  and edi, edi
    X86_AT(c, 0xd9bbau);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & c.r[7], 4); }
    // 0d9bbc  ja 0xd9b9a
    X86_AT(c, 0xd9bbcu);
    if (x86_cc(c, 7)) { X86_POLL(c, 0xd9b9au); goto L_d9b9a; }
    X86_TICK(c, 24);
    // 0d9bbe  pop edi
    X86_AT(c, 0xd9bbeu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0d9bbf  pop esi
    X86_AT(c, 0xd9bbfu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0d9bc0  leave 
    X86_AT(c, 0xd9bc0u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0d9bc1  ret 8
    X86_AT(c, 0xd9bc1u);
    c.eip = pop32(c); c.r[4] += 0x8u; return;
    x86_fault(c, 0xd9b8cu, "ran off the end of a function");
}
void f_000d9bd4(X86Cpu& c) {
    X86_TICK(c, 66);
    // 0d9bd4  push ebp
    X86_AT(c, 0xd9bd4u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0d9bd5  mov ebp, esp
    X86_AT(c, 0xd9bd5u);
    c.r[5] = c.r[4];
    // 0d9bd7  push ecx
    X86_AT(c, 0xd9bd7u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 0d9bd8  sub esp, 0xc
    X86_AT(c, 0xd9bd8u);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, 0xCu, 0, 4); }
    // 0d9bdb  push ebx
    X86_AT(c, 0xd9bdbu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0d9bdc  push esi
    X86_AT(c, 0xd9bdcu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d9bdd  push edi
    X86_AT(c, 0xd9bddu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d9bde  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0xd9bdeu);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0d9be1  mov eax, 0x30303030
    X86_AT(c, 0xd9be1u);
    c.r[0] = 0x30303030u;
    // 0d9be6  lea ecx, [ebp - 0xe]
    X86_AT(c, 0xd9be6u);
    c.r[1] = (uint32_t)(c.r[5] + 0xFFFFFFF2u);
    // 0d9be9  push edi
    X86_AT(c, 0xd9be9u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d9bea  mov edi, ecx
    X86_AT(c, 0xd9beau);
    c.r[7] = c.r[1];
    // 0d9bec  stosd dword ptr es:[edi], eax
    X86_AT(c, 0xd9becu);
    x86_string(c, 2, 4, 0, 4, 3);
    // 0d9bed  stosd dword ptr es:[edi], eax
    X86_AT(c, 0xd9bedu);
    x86_string(c, 2, 4, 0, 4, 3);
    // 0d9bee  stosw word ptr es:[edi], ax
    X86_AT(c, 0xd9beeu);
    x86_string(c, 2, 2, 0, 4, 3);
    // 0d9bf0  pop edi
    X86_AT(c, 0xd9bf0u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0d9bf1  mov ebx, 8
    X86_AT(c, 0xd9bf1u);
    c.r[3] = 0x8u;
    // 0d9bf6  push ebx
    X86_AT(c, 0xd9bf6u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0d9bf7  push edi
    X86_AT(c, 0xd9bf7u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d9bf8  mov ecx, ebp
    X86_AT(c, 0xd9bf8u);
    c.r[1] = c.r[5];
    // 0d9bfa  call 0xd9b8c
    X86_AT(c, 0xd9bfau);
    push32(c, 0xd9bffu); x86_call_known(c, 0xd9b8cu, f_000d9b8c); X86_RET(c, 0xd9bffu);
    X86_TICK(c, 24);
    // 0d9bff  add dword ptr [0xb4388], ebx
    X86_AT(c, 0xd9bffu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xB4388u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[3], 0, 4)); }
    // 0d9c05  push ebx
    X86_AT(c, 0xd9c05u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0d9c06  lea eax, [ebp - 0xe]
    X86_AT(c, 0xd9c06u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFF2u);
    // 0d9c09  push eax
    X86_AT(c, 0xd9c09u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d9c0a  mov ecx, dword ptr [0xb4390]
    X86_AT(c, 0xd9c0au);
    c.r[1] = rd32((c.sbase[3] + (uint32_t)(0xB4390u)));
    // 0d9c10  call dword ptr [0xb438c]
    X86_AT(c, 0xd9c10u);
    { uint32_t t = rd32((c.sbase[3] + (uint32_t)(0xB438Cu))); push32(c, 0xd9c16u); x86_call(c, t); X86_RET(c, 0xd9c16u); }
    X86_TICK(c, 28);
    // 0d9c16  pop edi
    X86_AT(c, 0xd9c16u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0d9c17  pop esi
    X86_AT(c, 0xd9c17u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0d9c18  pop ebx
    X86_AT(c, 0xd9c18u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0d9c19  leave 
    X86_AT(c, 0xd9c19u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0d9c1a  ret 4
    X86_AT(c, 0xd9c1au);
    c.eip = pop32(c); c.r[4] += 0x4u; return;
    x86_fault(c, 0xd9bd4u, "ran off the end of a function");
}
void f_000d9c28(X86Cpu& c) {
    X86_TICK(c, 32);
    // 0d9c28  push ebp
    X86_AT(c, 0xd9c28u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0d9c29  mov ebp, esp
    X86_AT(c, 0xd9c29u);
    c.r[5] = c.r[4];
    // 0d9c2b  push edi
    X86_AT(c, 0xd9c2bu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d9c2c  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0xd9c2cu);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0d9c2f  sub eax, eax
    X86_AT(c, 0xd9c2fu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0d9c31  mov dword ptr [0xb4388], eax
    X86_AT(c, 0xd9c31u);
    wr32((c.sbase[3] + (uint32_t)(0xB4388u)), c.r[0]);
    // 0d9c36  mov edx, 0x7fffffff
    X86_AT(c, 0xd9c36u);
    c.r[2] = 0x7FFFFFFFu;
    // 0d9c3b  push edi
    X86_AT(c, 0xd9c3bu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d9c3c  mov ecx, edx
    X86_AT(c, 0xd9c3cu);
    c.r[1] = c.r[2];
    // 0d9c3e  scasb al, byte ptr es:[edi]
    X86_AT(c, 0xd9c3eu);
    x86_string(c, 4, 1, 242, 4, 3);
    // 0d9c40  jne 0xd9c45
    X86_AT(c, 0xd9c40u);
    if (x86_cc(c, 5)) { goto L_d9c45; }
    X86_TICK(c, 4);
    // 0d9c42  inc ecx
    X86_AT(c, 0xd9c42u);
    { uint32_t v = c.r[1]; c.r[1] = x86_inc(c, v, 4); }
    // 0d9c43  sub edx, ecx
    X86_AT(c, 0xd9c43u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[1], 0, 4); }
L_d9c45:
    X86_TICK(c, 27);
    // 0d9c45  pop edi
    X86_AT(c, 0xd9c45u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0d9c46  mov dword ptr [0xb479c], edx
    X86_AT(c, 0xd9c46u);
    wr32((c.sbase[3] + (uint32_t)(0xB479Cu)), c.r[2]);
    // 0d9c4c  mov eax, dword ptr [ebp + 0xc]
    X86_AT(c, 0xd9c4cu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0d9c4f  mov dword ptr [0xb4790], eax
    X86_AT(c, 0xd9c4fu);
    wr32((c.sbase[3] + (uint32_t)(0xB4790u)), c.r[0]);
    // 0d9c54  push ebp
    X86_AT(c, 0xd9c54u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0d9c55  push 0xd9c70
    X86_AT(c, 0xd9c55u);
    { uint32_t v = 0xD9C70u; push32(c, v); }
    // 0d9c5a  push edi
    X86_AT(c, 0xd9c5au);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d9c5b  mov ecx, ebp
    X86_AT(c, 0xd9c5bu);
    c.r[1] = c.r[5];
    // 0d9c5d  call 0xd9618
    X86_AT(c, 0xd9c5du);
    push32(c, 0xd9c62u); x86_call_known(c, 0xd9618u, f_000d9618); X86_RET(c, 0xd9c62u);
    X86_TICK(c, 20);
    // 0d9c62  pop edi
    X86_AT(c, 0xd9c62u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0d9c63  leave 
    X86_AT(c, 0xd9c63u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0d9c64  ret 8
    X86_AT(c, 0xd9c64u);
    c.eip = pop32(c); c.r[4] += 0x8u; return;
    x86_fault(c, 0xd9c28u, "ran off the end of a function");
}
void f_000d9c70(X86Cpu& c) {
    X86_TICK(c, 28);
    // 0d9c70  push ebp
    X86_AT(c, 0xd9c70u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0d9c71  mov ebp, esp
    X86_AT(c, 0xd9c71u);
    c.r[5] = c.r[4];
    // 0d9c73  push ecx
    X86_AT(c, 0xd9c73u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 0d9c74  sub esp, 8
    X86_AT(c, 0xd9c74u);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, 0x8u, 0, 4); }
    // 0d9c77  push ebx
    X86_AT(c, 0xd9c77u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0d9c78  push esi
    X86_AT(c, 0xd9c78u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d9c79  push edi
    X86_AT(c, 0xd9c79u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d9c7a  mov bl, byte ptr [ebp + 8]
    X86_AT(c, 0xd9c7au);
    s8(c, 3, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))));
    // 0d9c7d  movzx eax, bl
    X86_AT(c, 0xd9c7du);
    c.r[0] = g8(c, 3);
    // 0d9c80  cmp eax, 0x25
    X86_AT(c, 0xd9c80u);
    (void)x86_sub(c, c.r[0], 0x25u, 0, 4);
    // 0d9c83  je 0xd9e49
    X86_AT(c, 0xd9c83u);
    if (x86_cc(c, 4)) { goto L_d9e49; }
    X86_TICK(c, 7);
    // 0d9c89  cmp eax, 0x30
    X86_AT(c, 0xd9c89u);
    (void)x86_sub(c, c.r[0], 0x30u, 0, 4);
    // 0d9c8c  je 0xd9d76
    X86_AT(c, 0xd9c8cu);
    if (x86_cc(c, 4)) { goto L_d9d76; }
    X86_TICK(c, 9);
    // 0d9c92  sub eax, 0x45
    X86_AT(c, 0xd9c92u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, 0x45u, 0, 4); }
    // 0d9c95  cmp eax, 0x33
    X86_AT(c, 0xd9c95u);
    (void)x86_sub(c, c.r[0], 0x33u, 0, 4);
    // 0d9c98  ja 0xd9f06
    X86_AT(c, 0xd9c98u);
    if (x86_cc(c, 7)) { goto L_d9f06; }
    X86_TICK(c, 7);
    // 0d9c9e  jmp dword ptr cs:[eax*4 + 0xd9ca6]
    X86_AT(c, 0xd9c9eu);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xD9CA6u)));
      switch (t) {
      case 0xd9d99u: goto L_d9d99;
      case 0xd9dc8u: goto L_d9dc8;
      case 0xd9e0cu: goto L_d9e0c;
      case 0xd9e2eu: goto L_d9e2e;
      case 0xd9e89u: goto L_d9e89;
      case 0xd9e9cu: goto L_d9e9c;
      case 0xd9f06u: goto L_d9f06;
      default: x86_jump(c, t); return; } }
L_d9d76:
    X86_TICK(c, 29);
    // 0d9d76  mov eax, dword ptr [0xb4798]
    X86_AT(c, 0xd9d76u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xB4798u)));
    // 0d9d7b  add dword ptr [0xb4388], eax
    X86_AT(c, 0xd9d7bu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xB4388u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 0d9d81  push eax
    X86_AT(c, 0xd9d81u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d9d82  push dword ptr [0xb4794]
    X86_AT(c, 0xd9d82u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xB4794u))); push32(c, v); }
    // 0d9d88  mov ecx, dword ptr [0xb4390]
    X86_AT(c, 0xd9d88u);
    c.r[1] = rd32((c.sbase[3] + (uint32_t)(0xB4390u)));
    // 0d9d8e  call dword ptr [0xb438c]
    X86_AT(c, 0xd9d8eu);
    { uint32_t t = rd32((c.sbase[3] + (uint32_t)(0xB438Cu))); push32(c, 0xd9d94u); x86_call(c, t); X86_RET(c, 0xd9d94u); }
    X86_TICK(c, 7);
    // 0d9d94  jmp 0xd9f0f
    X86_AT(c, 0xd9d94u);
    goto L_d9f0f;
L_d9d99:
    X86_TICK(c, 42);
    // 0d9d99  cmp byte ptr [0xb4384], 2
    X86_AT(c, 0xd9d99u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0xB4384u))), 0x2u, 0, 1);
    // 0d9da0  mov eax, dword ptr [0xb4790]
    X86_AT(c, 0xd9da0u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xB4790u)));
    // 0d9da5  mov edx, dword ptr [eax]
    X86_AT(c, 0xd9da5u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[0])));
    // 0d9da7  mov dword ptr [0xb47a0], edx
    X86_AT(c, 0xd9da7u);
    wr32((c.sbase[3] + (uint32_t)(0xB47A0u)), c.r[2]);
    // 0d9dad  add dword ptr [0xb4790], 4
    X86_AT(c, 0xd9dadu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xB4790u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0x4u, 0, 4)); }
    // 0d9db4  push ebx
    X86_AT(c, 0xd9db4u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0d9db5  push dword ptr [0xb47a0]
    X86_AT(c, 0xd9db5u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xB47A0u))); push32(c, v); }
    // 0d9dbb  mov ecx, dword ptr [ebp - 4]
    X86_AT(c, 0xd9dbbu);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0d9dbe  call 0xd9a30
    X86_AT(c, 0xd9dbeu);
    push32(c, 0xd9dc3u); x86_call_known(c, 0xd9a30u, f_000d9a30); X86_RET(c, 0xd9dc3u);
    X86_TICK(c, 7);
    // 0d9dc3  jmp 0xd9f0f
    X86_AT(c, 0xd9dc3u);
    goto L_d9f0f;
L_d9dc8:
    X86_TICK(c, 12);
    // 0d9dc8  cmp byte ptr [0xb4384], 3
    X86_AT(c, 0xd9dc8u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0xB4384u))), 0x3u, 0, 1);
    // 0d9dcf  jne 0xd9df0
    X86_AT(c, 0xd9dcfu);
    if (x86_cc(c, 5)) { goto L_d9df0; }
    X86_TICK(c, 28);
    // 0d9dd1  push ebx
    X86_AT(c, 0xd9dd1u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0d9dd2  mov eax, dword ptr [0xb4790]
    X86_AT(c, 0xd9dd2u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xB4790u)));
    // 0d9dd7  push dword ptr [eax + 8]
    X86_AT(c, 0xd9dd7u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0x8u))); push32(c, v); }
    // 0d9dda  push dword ptr [eax + 4]
    X86_AT(c, 0xd9ddau);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0x4u))); push32(c, v); }
    // 0d9ddd  push dword ptr [eax]
    X86_AT(c, 0xd9dddu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[0]))); push32(c, v); }
    // 0d9ddf  call 0xdbc18
    X86_AT(c, 0xd9ddfu);
    push32(c, 0xd9de4u); x86_call_known(c, 0xdbc18u, f_000dbc18); X86_RET(c, 0xd9de4u);
    X86_TICK(c, 14);
    // 0d9de4  add dword ptr [0xb4790], 0xa
    X86_AT(c, 0xd9de4u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xB4790u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0xAu, 0, 4)); }
    // 0d9deb  jmp 0xd9f0f
    X86_AT(c, 0xd9debu);
    goto L_d9f0f;
L_d9df0:
    X86_TICK(c, 23);
    // 0d9df0  push ebx
    X86_AT(c, 0xd9df0u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0d9df1  mov eax, dword ptr [0xb4790]
    X86_AT(c, 0xd9df1u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xB4790u)));
    // 0d9df6  push dword ptr [eax + 4]
    X86_AT(c, 0xd9df6u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0x4u))); push32(c, v); }
    // 0d9df9  push dword ptr [eax]
    X86_AT(c, 0xd9df9u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[0]))); push32(c, v); }
    // 0d9dfb  call 0xdb4ec
    X86_AT(c, 0xd9dfbu);
    push32(c, 0xd9e00u); x86_call_known(c, 0xdb4ecu, f_000db4ec); X86_RET(c, 0xd9e00u);
    X86_TICK(c, 14);
    // 0d9e00  add dword ptr [0xb4790], 8
    X86_AT(c, 0xd9e00u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xB4790u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0x8u, 0, 4)); }
    // 0d9e07  jmp 0xd9f0f
    X86_AT(c, 0xd9e07u);
    goto L_d9f0f;
L_d9e0c:
    X86_TICK(c, 30);
    // 0d9e0c  mov eax, dword ptr [0xb4790]
    X86_AT(c, 0xd9e0cu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xB4790u)));
    // 0d9e11  mov edx, dword ptr [eax]
    X86_AT(c, 0xd9e11u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[0])));
    // 0d9e13  mov dword ptr [0xb47a0], edx
    X86_AT(c, 0xd9e13u);
    wr32((c.sbase[3] + (uint32_t)(0xB47A0u)), c.r[2]);
    // 0d9e19  add dword ptr [0xb4790], 4
    X86_AT(c, 0xd9e19u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xB4790u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0x4u, 0, 4)); }
    // 0d9e20  push edx
    X86_AT(c, 0xd9e20u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0d9e21  mov ecx, dword ptr [ebp - 4]
    X86_AT(c, 0xd9e21u);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0d9e24  call 0xd9bd4
    X86_AT(c, 0xd9e24u);
    push32(c, 0xd9e29u); x86_call_known(c, 0xd9bd4u, f_000d9bd4); X86_RET(c, 0xd9e29u);
    X86_TICK(c, 7);
    // 0d9e29  jmp 0xd9f0f
    X86_AT(c, 0xd9e29u);
    goto L_d9f0f;
L_d9e2e:
    X86_TICK(c, 28);
    // 0d9e2e  mov eax, dword ptr [0xb4388]
    X86_AT(c, 0xd9e2eu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xB4388u)));
    // 0d9e33  mov edx, dword ptr [0xb4790]
    X86_AT(c, 0xd9e33u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(0xB4790u)));
    // 0d9e39  mov ecx, dword ptr [edx]
    X86_AT(c, 0xd9e39u);
    c.r[1] = rd32((c.sbase[3] + (uint32_t)(c.r[2])));
    // 0d9e3b  mov dword ptr [ecx], eax
    X86_AT(c, 0xd9e3bu);
    wr32((c.sbase[3] + (uint32_t)(c.r[1])), c.r[0]);
    // 0d9e3d  add dword ptr [0xb4790], 4
    X86_AT(c, 0xd9e3du);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xB4790u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0x4u, 0, 4)); }
    // 0d9e44  jmp 0xd9f0f
    X86_AT(c, 0xd9e44u);
    goto L_d9f0f;
L_d9e49:
    X86_TICK(c, 2);
    // 0d9e49  mov byte ptr [ebp - 6], 0x25
    X86_AT(c, 0xd9e49u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFAu)), 0x25u);
L_d9e4d:
    X86_TICK(c, 18);
    // 0d9e4d  inc dword ptr [0xb4388]
    X86_AT(c, 0xd9e4du);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xB4388u)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0d9e53  test byte ptr [0xb4378], 1
    X86_AT(c, 0xd9e53u);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(0xB4378u))) & 0x1u, 1);
    // 0d9e5a  jne 0xd9e63
    X86_AT(c, 0xd9e5au);
    if (x86_cc(c, 5)) { goto L_d9e63; }
    X86_TICK(c, 9);
    // 0d9e5c  push 1
    X86_AT(c, 0xd9e5cu);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0d9e5e  call 0xd949c
    X86_AT(c, 0xd9e5eu);
    push32(c, 0xd9e63u); x86_call_known(c, 0xd949cu, f_000d949c); X86_RET(c, 0xd9e63u);
L_d9e63:
    X86_TICK(c, 17);
    // 0d9e63  push 1
    X86_AT(c, 0xd9e63u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0d9e65  lea eax, [ebp - 6]
    X86_AT(c, 0xd9e65u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFFAu);
    // 0d9e68  push eax
    X86_AT(c, 0xd9e68u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d9e69  mov ecx, dword ptr [0xb4390]
    X86_AT(c, 0xd9e69u);
    c.r[1] = rd32((c.sbase[3] + (uint32_t)(0xB4390u)));
    // 0d9e6f  call dword ptr [0xb438c]
    X86_AT(c, 0xd9e6fu);
    { uint32_t t = rd32((c.sbase[3] + (uint32_t)(0xB438Cu))); push32(c, 0xd9e75u); x86_call(c, t); X86_RET(c, 0xd9e75u); }
    X86_TICK(c, 12);
    // 0d9e75  test byte ptr [0xb4378], 1
    X86_AT(c, 0xd9e75u);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(0xB4378u))) & 0x1u, 1);
    // 0d9e7c  je 0xd9f0f
    X86_AT(c, 0xd9e7cu);
    if (x86_cc(c, 4)) { goto L_d9f0f; }
    X86_TICK(c, 9);
    // 0d9e82  push 1
    X86_AT(c, 0xd9e82u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0d9e84  jmp 0xd9eff
    X86_AT(c, 0xd9e84u);
    goto L_d9eff;
L_d9e89:
    X86_TICK(c, 24);
    // 0d9e89  mov eax, dword ptr [0xb4790]
    X86_AT(c, 0xd9e89u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xB4790u)));
    // 0d9e8e  mov dl, byte ptr [eax]
    X86_AT(c, 0xd9e8eu);
    s8(c, 2, rd8((c.sbase[3] + (uint32_t)(c.r[0]))));
    // 0d9e90  mov byte ptr [ebp - 6], dl
    X86_AT(c, 0xd9e90u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFAu)), g8(c, 2));
    // 0d9e93  add dword ptr [0xb4790], 4
    X86_AT(c, 0xd9e93u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xB4790u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0x4u, 0, 4)); }
    // 0d9e9a  jmp 0xd9e4d
    X86_AT(c, 0xd9e9au);
    X86_POLL(c, 0xd9e4du); goto L_d9e4d;
L_d9e9c:
    X86_TICK(c, 22);
    // 0d9e9c  mov eax, dword ptr [0xb4790]
    X86_AT(c, 0xd9e9cu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xB4790u)));
    // 0d9ea1  mov edi, dword ptr [eax]
    X86_AT(c, 0xd9ea1u);
    c.r[7] = rd32((c.sbase[3] + (uint32_t)(c.r[0])));
    // 0d9ea3  add dword ptr [0xb4790], 4
    X86_AT(c, 0xd9ea3u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xB4790u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0x4u, 0, 4)); }
    // 0d9eaa  and edi, edi
    X86_AT(c, 0xd9eaau);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & c.r[7], 4); }
    // 0d9eac  je 0xd9f0f
    X86_AT(c, 0xd9eacu);
    if (x86_cc(c, 4)) { goto L_d9f0f; }
    X86_TICK(c, 22);
    // 0d9eae  mov edx, dword ptr [0xb4380]
    X86_AT(c, 0xd9eaeu);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(0xB4380u)));
    // 0d9eb4  sub eax, eax
    X86_AT(c, 0xd9eb4u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0d9eb6  push edi
    X86_AT(c, 0xd9eb6u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d9eb7  mov ecx, edx
    X86_AT(c, 0xd9eb7u);
    c.r[1] = c.r[2];
    // 0d9eb9  scasb al, byte ptr es:[edi]
    X86_AT(c, 0xd9eb9u);
    x86_string(c, 4, 1, 242, 4, 3);
    // 0d9ebb  jne 0xd9ec0
    X86_AT(c, 0xd9ebbu);
    if (x86_cc(c, 5)) { goto L_d9ec0; }
    X86_TICK(c, 4);
    // 0d9ebd  inc ecx
    X86_AT(c, 0xd9ebdu);
    { uint32_t v = c.r[1]; c.r[1] = x86_inc(c, v, 4); }
    // 0d9ebe  sub edx, ecx
    X86_AT(c, 0xd9ebeu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[1], 0, 4); }
L_d9ec0:
    X86_TICK(c, 17);
    // 0d9ec0  pop edi
    X86_AT(c, 0xd9ec0u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0d9ec1  mov dword ptr [ebp - 0xc], edx
    X86_AT(c, 0xd9ec1u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)), c.r[2]);
    // 0d9ec4  mov ecx, dword ptr [0xb4380]
    X86_AT(c, 0xd9ec4u);
    c.r[1] = rd32((c.sbase[3] + (uint32_t)(0xB4380u)));
    // 0d9eca  cmp edx, ecx
    X86_AT(c, 0xd9ecau);
    (void)x86_sub(c, c.r[2], c.r[1], 0, 4);
    // 0d9ecc  jb 0xd9ed0
    X86_AT(c, 0xd9eccu);
    if (x86_cc(c, 2)) { goto L_d9ed0; }
    X86_TICK(c, 2);
    // 0d9ece  mov edx, ecx
    X86_AT(c, 0xd9eceu);
    c.r[2] = c.r[1];
L_d9ed0:
    X86_TICK(c, 21);
    // 0d9ed0  mov esi, edx
    X86_AT(c, 0xd9ed0u);
    c.r[6] = c.r[2];
    // 0d9ed2  add dword ptr [0xb4388], esi
    X86_AT(c, 0xd9ed2u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xB4388u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[6], 0, 4)); }
    // 0d9ed8  test byte ptr [0xb4378], 1
    X86_AT(c, 0xd9ed8u);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(0xB4378u))) & 0x1u, 1);
    // 0d9edf  jne 0xd9ee7
    X86_AT(c, 0xd9edfu);
    if (x86_cc(c, 5)) { goto L_d9ee7; }
    X86_TICK(c, 9);
    // 0d9ee1  push esi
    X86_AT(c, 0xd9ee1u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d9ee2  call 0xd949c
    X86_AT(c, 0xd9ee2u);
    push32(c, 0xd9ee7u); x86_call_known(c, 0xd949cu, f_000d949c); X86_RET(c, 0xd9ee7u);
L_d9ee7:
    X86_TICK(c, 15);
    // 0d9ee7  push esi
    X86_AT(c, 0xd9ee7u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d9ee8  push edi
    X86_AT(c, 0xd9ee8u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d9ee9  mov ecx, dword ptr [0xb4390]
    X86_AT(c, 0xd9ee9u);
    c.r[1] = rd32((c.sbase[3] + (uint32_t)(0xB4390u)));
    // 0d9eef  call dword ptr [0xb438c]
    X86_AT(c, 0xd9eefu);
    { uint32_t t = rd32((c.sbase[3] + (uint32_t)(0xB438Cu))); push32(c, 0xd9ef5u); x86_call(c, t); X86_RET(c, 0xd9ef5u); }
    X86_TICK(c, 12);
    // 0d9ef5  test byte ptr [0xb4378], 1
    X86_AT(c, 0xd9ef5u);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(0xB4378u))) & 0x1u, 1);
    // 0d9efc  je 0xd9f0f
    X86_AT(c, 0xd9efcu);
    if (x86_cc(c, 4)) { goto L_d9f0f; }
    X86_TICK(c, 2);
    // 0d9efe  push esi
    X86_AT(c, 0xd9efeu);
    { uint32_t v = c.r[6]; push32(c, v); }
L_d9eff:
    X86_TICK(c, 7);
    // 0d9eff  call 0xd949c
    X86_AT(c, 0xd9effu);
    push32(c, 0xd9f04u); x86_call_known(c, 0xd949cu, f_000d949c); X86_RET(c, 0xd9f04u);
    X86_TICK(c, 7);
    // 0d9f04  jmp 0xd9f0f
    X86_AT(c, 0xd9f04u);
    goto L_d9f0f;
L_d9f06:
    X86_TICK(c, 2);
    // 0d9f06  mov word ptr [0xb47e6], 1
    X86_AT(c, 0xd9f06u);
    wr16((c.sbase[3] + (uint32_t)(0xB47E6u)), 0x1u);
L_d9f0f:
    X86_TICK(c, 28);
    // 0d9f0f  pop edi
    X86_AT(c, 0xd9f0fu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0d9f10  pop esi
    X86_AT(c, 0xd9f10u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0d9f11  pop ebx
    X86_AT(c, 0xd9f11u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0d9f12  leave 
    X86_AT(c, 0xd9f12u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0d9f13  ret 4
    X86_AT(c, 0xd9f13u);
    c.eip = pop32(c); c.r[4] += 0x4u; return;
    x86_fault(c, 0xd9c70u, "ran off the end of a function");
}
void f_000d9f0f(X86Cpu& c) {
    X86_TICK(c, 28);
    // 0d9f0f  pop edi
    X86_AT(c, 0xd9f0fu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0d9f10  pop esi
    X86_AT(c, 0xd9f10u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0d9f11  pop ebx
    X86_AT(c, 0xd9f11u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0d9f12  leave 
    X86_AT(c, 0xd9f12u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0d9f13  ret 4
    X86_AT(c, 0xd9f13u);
    c.eip = pop32(c); c.r[4] += 0x4u; return;
    x86_fault(c, 0xd9f0fu, "ran off the end of a function");
}
void f_000d9f2c(X86Cpu& c) {
    X86_TICK(c, 12);
    // 0d9f2c  test byte ptr [0xb4814], 2
    X86_AT(c, 0xd9f2cu);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(0xB4814u))) & 0x2u, 1);
    // 0d9f33  je 0xd9f49
    X86_AT(c, 0xd9f33u);
    if (x86_cc(c, 4)) { goto L_d9f49; }
    X86_TICK(c, 29);
    // 0d9f35  mov eax, dword ptr [0xb4360]
    X86_AT(c, 0xd9f35u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xB4360u)));
    // 0d9f3a  and byte ptr [eax + 0xc], 0xbf
    X86_AT(c, 0xd9f3au);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[0] + 0xCu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v & 0xBFu, 1)); }
    // 0d9f3e  mov eax, dword ptr [0xb4364]
    X86_AT(c, 0xd9f3eu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xB4364u)));
    // 0d9f43  and byte ptr [eax + 0xc], 0xbf
    X86_AT(c, 0xd9f43u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[0] + 0xCu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v & 0xBFu, 1)); }
    // 0d9f47  jmp 0xd9f5b
    X86_AT(c, 0xd9f47u);
    goto L_d9f5b;
L_d9f49:
    X86_TICK(c, 22);
    // 0d9f49  mov eax, dword ptr [0xb4360]
    X86_AT(c, 0xd9f49u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xB4360u)));
    // 0d9f4e  or byte ptr [eax + 0xc], 0x40
    X86_AT(c, 0xd9f4eu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[0] + 0xCu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | 0x40u, 1)); }
    // 0d9f52  mov eax, dword ptr [0xb4364]
    X86_AT(c, 0xd9f52u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xB4364u)));
    // 0d9f57  or byte ptr [eax + 0xc], 0x40
    X86_AT(c, 0xd9f57u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[0] + 0xCu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | 0x40u, 1)); }
L_d9f5b:
    X86_TICK(c, 12);
    // 0d9f5b  test byte ptr [0xb4814], 4
    X86_AT(c, 0xd9f5bu);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(0xB4814u))) & 0x4u, 1);
    // 0d9f62  je 0xd9f6f
    X86_AT(c, 0xd9f62u);
    if (x86_cc(c, 4)) { goto L_d9f6f; }
    X86_TICK(c, 18);
    // 0d9f64  mov eax, dword ptr [0xb4368]
    X86_AT(c, 0xd9f64u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xB4368u)));
    // 0d9f69  and byte ptr [eax + 0xc], 0xbf
    X86_AT(c, 0xd9f69u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[0] + 0xCu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v & 0xBFu, 1)); }
    // 0d9f6d  jmp 0xd9f78
    X86_AT(c, 0xd9f6du);
    goto L_d9f78;
L_d9f6f:
    X86_TICK(c, 11);
    // 0d9f6f  mov eax, dword ptr [0xb4368]
    X86_AT(c, 0xd9f6fu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xB4368u)));
    // 0d9f74  or byte ptr [eax + 0xc], 0x40
    X86_AT(c, 0xd9f74u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[0] + 0xCu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | 0x40u, 1)); }
L_d9f78:
    X86_TICK(c, 10);
    // 0d9f78  ret 
    X86_AT(c, 0xd9f78u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd9f2cu, "ran off the end of a function");
}
void f_000d9f80(X86Cpu& c) {
    X86_TICK(c, 9);
    // 0d9f80  push edi
    X86_AT(c, 0xd9f80u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d9f81  call 0xd8560
    X86_AT(c, 0xd9f81u);
    push32(c, 0xd9f86u); x86_call_known(c, 0xd8560u, f_000d8560); X86_RET(c, 0xd9f86u);
    X86_TICK(c, 7);
    // 0d9f86  jmp 0xd9fa8
    X86_AT(c, 0xd9f86u);
    goto L_d9fa8;
L_d9f88:
    X86_TICK(c, 12);
    // 0d9f88  push dword ptr [0xb436c]
    X86_AT(c, 0xd9f88u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xB436Cu))); push32(c, v); }
    // 0d9f8e  call 0xda248
    X86_AT(c, 0xd9f8eu);
    push32(c, 0xd9f93u); x86_call_known(c, 0xda248u, f_000da248); X86_RET(c, 0xd9f93u);
    X86_TICK(c, 19);
    // 0d9f93  mov edi, dword ptr [0xb436c]
    X86_AT(c, 0xd9f93u);
    c.r[7] = rd32((c.sbase[3] + (uint32_t)(0xB436Cu)));
    // 0d9f99  mov eax, dword ptr [edi + 0xc]
    X86_AT(c, 0xd9f99u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0xCu)));
    // 0d9f9c  mov dword ptr [0xb436c], eax
    X86_AT(c, 0xd9f9cu);
    wr32((c.sbase[3] + (uint32_t)(0xB436Cu)), c.r[0]);
    // 0d9fa1  push edi
    X86_AT(c, 0xd9fa1u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d9fa2  call 0xd8800
    X86_AT(c, 0xd9fa2u);
    push32(c, 0xd9fa7u); x86_call_known(c, 0xd8800u, f_000d8800); X86_RET(c, 0xd9fa7u);
    X86_TICK(c, 4);
    // 0d9fa7  pop ecx
    X86_AT(c, 0xd9fa7u);
    { uint32_t v = pop32(c); c.r[1] = v; }
L_d9fa8:
    X86_TICK(c, 12);
    // 0d9fa8  cmp dword ptr [0xb436c], 0
    X86_AT(c, 0xd9fa8u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xB436Cu))), 0x0u, 0, 4);
    // 0d9faf  jne 0xd9f88
    X86_AT(c, 0xd9fafu);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xd9f88u); goto L_d9f88; }
    X86_TICK(c, 14);
    // 0d9fb1  pop edi
    X86_AT(c, 0xd9fb1u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0d9fb2  ret 
    X86_AT(c, 0xd9fb2u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd9f80u, "ran off the end of a function");
}
void f_000d9fc8(X86Cpu& c) {
    X86_TICK(c, 33);
    // 0d9fc8  enter 0xc, 0
    X86_AT(c, 0xd9fc8u);
    x86_enter(c, 0xCu, 0x0u, 4);
    // 0d9fcc  push ebx
    X86_AT(c, 0xd9fccu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0d9fcd  push esi
    X86_AT(c, 0xd9fcdu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d9fce  push edi
    X86_AT(c, 0xd9fceu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d9fcf  sub eax, eax
    X86_AT(c, 0xd9fcfu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0d9fd1  mov dword ptr [ebp - 8], eax
    X86_AT(c, 0xd9fd1u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), c.r[0]);
    // 0d9fd4  xchg edi, eax
    X86_AT(c, 0xd9fd4u);
    { uint32_t t = c.r[7]; c.r[7] = c.r[0]; c.r[0] = t; }
    // 0d9fd5  mov esi, 1
    X86_AT(c, 0xd9fd5u);
    c.r[6] = 0x1u;
    // 0d9fda  mov dword ptr [ebp - 8], edi
    X86_AT(c, 0xd9fdau);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), c.r[7]);
    // 0d9fdd  mov eax, dword ptr [0xb4468]
    X86_AT(c, 0xd9fddu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xB4468u)));
    // 0d9fe2  mov edx, dword ptr [0xb444e]
    X86_AT(c, 0xd9fe2u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(0xB444Eu)));
    // 0d9fe8  mov dword ptr [edx], eax
    X86_AT(c, 0xd9fe8u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2])), c.r[0]);
L_d9fea:
    X86_TICK(c, 8);
    // 0d9fea  sub eax, eax
    X86_AT(c, 0xd9feau);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0d9fec  mov byte ptr [ebp - 1], al
    X86_AT(c, 0xd9fecu);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFFu)), g8(c, 0));
    // 0d9fef  mov byte ptr [ebp - 2], al
    X86_AT(c, 0xd9fefu);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFEu)), g8(c, 0));
    // 0d9ff2  mov dword ptr [ebp - 0xc], edi
    X86_AT(c, 0xd9ff2u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)), c.r[7]);
L_d9ff5:
    X86_TICK(c, 11);
    // 0d9ff5  cmp esi, dword ptr [0xb4454]
    X86_AT(c, 0xd9ff5u);
    (void)x86_sub(c, c.r[6], rd32((c.sbase[3] + (uint32_t)(0xB4454u))), 0, 4);
    // 0d9ffb  ja 0xda079
    X86_AT(c, 0xd9ffbu);
    if (x86_cc(c, 7)) { goto L_da079; }
    X86_TICK(c, 17);
    // 0da001  mov eax, dword ptr [0xb4448]
    X86_AT(c, 0xda001u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xB4448u)));
    // 0da006  mov bl, byte ptr [eax + esi*1 - 1]
    X86_AT(c, 0xda006u);
    s8(c, 3, rd8((c.sbase[3] + (uint32_t)(c.r[0] + c.r[6] + 0xFFFFFFFFu))));
    // 0da00a  inc esi
    X86_AT(c, 0xda00au);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 0da00b  cmp bl, 9
    X86_AT(c, 0xda00bu);
    (void)x86_sub(c, g8(c, 3), 0x9u, 0, 1);
    // 0da00e  je 0xda015
    X86_AT(c, 0xda00eu);
    if (x86_cc(c, 4)) { goto L_da015; }
    X86_TICK(c, 7);
    // 0da010  cmp bl, 0x20
    X86_AT(c, 0xda010u);
    (void)x86_sub(c, g8(c, 3), 0x20u, 0, 1);
    // 0da013  jne 0xda023
    X86_AT(c, 0xda013u);
    if (x86_cc(c, 5)) { goto L_da023; }
L_da015:
    X86_TICK(c, 12);
    // 0da015  cmp byte ptr [ebp - 1], 0
    X86_AT(c, 0xda015u);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFFu))), 0x0u, 0, 1);
    // 0da019  je 0xd9ff5
    X86_AT(c, 0xda019u);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xd9ff5u); goto L_d9ff5; }
    X86_TICK(c, 12);
    // 0da01b  cmp byte ptr [ebp - 2], 0
    X86_AT(c, 0xda01bu);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFEu))), 0x0u, 0, 1);
    // 0da01f  jne 0xda066
    X86_AT(c, 0xda01fu);
    if (x86_cc(c, 5)) { goto L_da066; }
    X86_TICK(c, 7);
    // 0da021  jmp 0xda079
    X86_AT(c, 0xda021u);
    goto L_da079;
L_da023:
    X86_TICK(c, 7);
    // 0da023  cmp bl, 0x22
    X86_AT(c, 0xda023u);
    (void)x86_sub(c, g8(c, 3), 0x22u, 0, 1);
    // 0da026  jne 0xda044
    X86_AT(c, 0xda026u);
    if (x86_cc(c, 5)) { goto L_da044; }
    X86_TICK(c, 12);
    // 0da028  cmp byte ptr [ebp - 2], 0
    X86_AT(c, 0xda028u);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFEu))), 0x0u, 0, 1);
    // 0da02c  jne 0xda034
    X86_AT(c, 0xda02cu);
    if (x86_cc(c, 5)) { goto L_da034; }
    X86_TICK(c, 12);
    // 0da02e  cmp byte ptr [ebp - 1], 0
    X86_AT(c, 0xda02eu);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFFu))), 0x0u, 0, 1);
    // 0da032  jne 0xda044
    X86_AT(c, 0xda032u);
    if (x86_cc(c, 5)) { goto L_da044; }
L_da034:
    X86_TICK(c, 12);
    // 0da034  cmp byte ptr [ebp - 2], 0
    X86_AT(c, 0xda034u);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFEu))), 0x0u, 0, 1);
    // 0da038  jne 0xda079
    X86_AT(c, 0xda038u);
    if (x86_cc(c, 5)) { goto L_da079; }
    X86_TICK(c, 13);
    // 0da03a  mov al, 1
    X86_AT(c, 0xda03au);
    s8(c, 0, 0x1u);
    // 0da03c  mov byte ptr [ebp - 1], al
    X86_AT(c, 0xda03cu);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFFu)), g8(c, 0));
    // 0da03f  mov byte ptr [ebp - 2], al
    X86_AT(c, 0xda03fu);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFEu)), g8(c, 0));
    // 0da042  jmp 0xd9ff5
    X86_AT(c, 0xda042u);
    X86_POLL(c, 0xd9ff5u); goto L_d9ff5;
L_da044:
    X86_TICK(c, 7);
    // 0da044  cmp bl, 0x5c
    X86_AT(c, 0xda044u);
    (void)x86_sub(c, g8(c, 3), 0x5Cu, 0, 1);
    // 0da047  jne 0xda066
    X86_AT(c, 0xda047u);
    if (x86_cc(c, 5)) { goto L_da066; }
    X86_TICK(c, 12);
    // 0da049  cmp byte ptr [ebp - 2], 0
    X86_AT(c, 0xda049u);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFEu))), 0x0u, 0, 1);
    // 0da04d  je 0xda066
    X86_AT(c, 0xda04du);
    if (x86_cc(c, 4)) { goto L_da066; }
    X86_TICK(c, 11);
    // 0da04f  cmp esi, dword ptr [0xb4454]
    X86_AT(c, 0xda04fu);
    (void)x86_sub(c, c.r[6], rd32((c.sbase[3] + (uint32_t)(0xB4454u))), 0, 4);
    // 0da055  ja 0xda066
    X86_AT(c, 0xda055u);
    if (x86_cc(c, 7)) { goto L_da066; }
    X86_TICK(c, 16);
    // 0da057  mov eax, dword ptr [0xb4448]
    X86_AT(c, 0xda057u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xB4448u)));
    // 0da05c  cmp byte ptr [eax + esi*1 - 1], 0x22
    X86_AT(c, 0xda05cu);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[0] + c.r[6] + 0xFFFFFFFFu))), 0x22u, 0, 1);
    // 0da061  jne 0xda066
    X86_AT(c, 0xda061u);
    if (x86_cc(c, 5)) { goto L_da066; }
    X86_TICK(c, 4);
    // 0da063  mov bl, 0x22
    X86_AT(c, 0xda063u);
    s8(c, 3, 0x22u);
    // 0da065  inc esi
    X86_AT(c, 0xda065u);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
L_da066:
    X86_TICK(c, 17);
    // 0da066  mov eax, dword ptr [0xb4448]
    X86_AT(c, 0xda066u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xB4448u)));
    // 0da06b  mov byte ptr [eax + edi*1 - 1], bl
    X86_AT(c, 0xda06bu);
    wr8((c.sbase[3] + (uint32_t)(c.r[0] + c.r[7] + 0xFFFFFFFFu)), g8(c, 3));
    // 0da06f  inc edi
    X86_AT(c, 0xda06fu);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0da070  mov byte ptr [ebp - 1], 1
    X86_AT(c, 0xda070u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFFu)), 0x1u);
    // 0da074  jmp 0xd9ff5
    X86_AT(c, 0xda074u);
    X86_POLL(c, 0xd9ff5u); goto L_d9ff5;
L_da079:
    X86_TICK(c, 12);
    // 0da079  cmp byte ptr [ebp - 1], 0
    X86_AT(c, 0xda079u);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFFu))), 0x0u, 0, 1);
    // 0da07d  je 0xda0a0
    X86_AT(c, 0xda07du);
    if (x86_cc(c, 4)) { goto L_da0a0; }
    X86_TICK(c, 30);
    // 0da07f  mov eax, dword ptr [0xb4448]
    X86_AT(c, 0xda07fu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xB4448u)));
    // 0da084  mov byte ptr [eax + edi*1 - 1], 0
    X86_AT(c, 0xda084u);
    wr8((c.sbase[3] + (uint32_t)(c.r[0] + c.r[7] + 0xFFFFFFFFu)), 0x0u);
    // 0da089  inc edi
    X86_AT(c, 0xda089u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0da08a  inc dword ptr [ebp - 8]
    X86_AT(c, 0xda08au);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0da08d  mov edx, dword ptr [ebp - 0xc]
    X86_AT(c, 0xda08du);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)));
    // 0da090  lea eax, [eax + edx*1 - 1]
    X86_AT(c, 0xda090u);
    c.r[0] = (uint32_t)(c.r[0] + c.r[2] + 0xFFFFFFFFu);
    // 0da094  mov edx, dword ptr [0xb444e]
    X86_AT(c, 0xda094u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(0xB444Eu)));
    // 0da09a  mov ecx, dword ptr [ebp - 8]
    X86_AT(c, 0xda09au);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)));
    // 0da09d  mov dword ptr [edx + ecx*4], eax
    X86_AT(c, 0xda09du);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + c.r[1] * 4)), c.r[0]);
L_da0a0:
    X86_TICK(c, 11);
    // 0da0a0  cmp esi, dword ptr [0xb4454]
    X86_AT(c, 0xda0a0u);
    (void)x86_sub(c, c.r[6], rd32((c.sbase[3] + (uint32_t)(0xB4454u))), 0, 4);
    // 0da0a6  jbe 0xd9fea
    X86_AT(c, 0xda0a6u);
    if (x86_cc(c, 6)) { X86_POLL(c, 0xd9feau); goto L_d9fea; }
    X86_TICK(c, 43);
    // 0da0ac  mov eax, dword ptr [0xb444e]
    X86_AT(c, 0xda0acu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xB444Eu)));
    // 0da0b1  mov edx, dword ptr [ebp - 8]
    X86_AT(c, 0xda0b1u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)));
    // 0da0b4  mov dword ptr [eax + edx*4 + 4], 0
    X86_AT(c, 0xda0b4u);
    wr32((c.sbase[3] + (uint32_t)(c.r[0] + c.r[2] * 4 + 0x4u)), 0x0u);
    // 0da0bc  xchg edx, eax
    X86_AT(c, 0xda0bcu);
    { uint32_t t = c.r[2]; c.r[2] = c.r[0]; c.r[0] = t; }
    // 0da0bd  inc eax
    X86_AT(c, 0xda0bdu);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0da0be  pop edi
    X86_AT(c, 0xda0beu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0da0bf  pop esi
    X86_AT(c, 0xda0bfu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0da0c0  pop ebx
    X86_AT(c, 0xda0c0u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0da0c1  leave 
    X86_AT(c, 0xda0c1u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0da0c2  ret 
    X86_AT(c, 0xda0c2u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd9fc8u, "ran off the end of a function");
}
void f_000da0c4(X86Cpu& c) {
    X86_TICK(c, 10);
    // 0da0c4  ret 
    X86_AT(c, 0xda0c4u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xda0c4u, "ran off the end of a function");
}
void f_000da0e0(X86Cpu& c) {
    X86_TICK(c, 13);
    // 0da0e0  mov al, byte ptr [esp + 4]
    X86_AT(c, 0xda0e0u);
    s8(c, 0, rd8((c.sbase[2] + (uint32_t)(c.r[4] + 0x4u))));
    // 0da0e4  mov byte ptr [0xb47ed], al
    X86_AT(c, 0xda0e4u);
    wr8((c.sbase[3] + (uint32_t)(0xB47EDu)), g8(c, 0));
    // 0da0e9  call 0xdbf2c
    X86_AT(c, 0xda0e9u);
    push32(c, 0xda0eeu); x86_call_known(c, 0xdbf2cu, f_000dbf2c); X86_RET(c, 0xda0eeu);
    X86_TICK(c, 12);
    // 0da0ee  mov eax, dword ptr [0xb480c]
    X86_AT(c, 0xda0eeu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xB480Cu)));
    // 0da0f3  rcr eax, 1
    X86_AT(c, 0xda0f3u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 3, v, 0x1u, 4, w); if (w) c.r[0] = r; }
    // 0da0f5  jae 0xda114
    X86_AT(c, 0xda0f5u);
    if (x86_cc(c, 3)) { goto L_da114; }
    X86_TICK(c, 14);
    // 0da0f7  mov ax, word ptr [0xb47ec]
    X86_AT(c, 0xda0f7u);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(0xB47ECu))));
    // 0da0fd  mov word ptr [0xb47e6], ax
    X86_AT(c, 0xda0fdu);
    wr16((c.sbase[3] + (uint32_t)(0xB47E6u)), (c.r[0] & 0xFFFFu));
    // 0da103  sub eax, eax
    X86_AT(c, 0xda103u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0da105  mov dword ptr [0xb47ec], eax
    X86_AT(c, 0xda105u);
    wr32((c.sbase[3] + (uint32_t)(0xB47ECu)), c.r[0]);
    // 0da10a  mov dword ptr [0xb47f4], eax
    X86_AT(c, 0xda10au);
    wr32((c.sbase[3] + (uint32_t)(0xB47F4u)), c.r[0]);
    // 0da10f  mov dword ptr [0xb47f8], eax
    X86_AT(c, 0xda10fu);
    wr32((c.sbase[3] + (uint32_t)(0xB47F8u)), c.r[0]);
L_da114:
    X86_TICK(c, 10);
    // 0da114  ret 4
    X86_AT(c, 0xda114u);
    c.eip = pop32(c); c.r[4] += 0x4u; return;
    x86_fault(c, 0xda0e0u, "ran off the end of a function");
}
void f_000da120(X86Cpu& c) {
    X86_TICK(c, 52);
    // 0da120  enter 0x10, 0
    X86_AT(c, 0xda120u);
    x86_enter(c, 0x10u, 0x0u, 4);
    // 0da124  mov ecx, dword ptr [ebp + 8]
    X86_AT(c, 0xda124u);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0da127  mov eax, dword ptr [ebp + 0x10]
    X86_AT(c, 0xda127u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u)));
    // 0da12a  mov dword ptr [ebp - 8], eax
    X86_AT(c, 0xda12au);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), c.r[0]);
    // 0da12d  mov edx, 0xb47ec
    X86_AT(c, 0xda12du);
    c.r[2] = 0xB47ECu;
    // 0da132  mov dword ptr [ebp - 0x10], edx
    X86_AT(c, 0xda132u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u)), c.r[2]);
    // 0da135  mov word ptr [ebp - 0xc], ds
    X86_AT(c, 0xda135u);
    wr16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)), (uint32_t)c.sreg[3]);
    // 0da138  movzx edx, word ptr [ebp - 0xc]
    X86_AT(c, 0xda138u);
    c.r[2] = rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)));
    // 0da13c  mov dword ptr [ecx], edx
    X86_AT(c, 0xda13cu);
    wr32((c.sbase[3] + (uint32_t)(c.r[1])), c.r[2]);
    // 0da13e  mov edx, dword ptr [ebp + 0xc]
    X86_AT(c, 0xda13eu);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0da141  mov dword ptr [edx], eax
    X86_AT(c, 0xda141u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2])), c.r[0]);
    // 0da143  leave 
    X86_AT(c, 0xda143u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0da144  ret 0xc
    X86_AT(c, 0xda144u);
    c.eip = pop32(c); c.r[4] += 0xCu; return;
    x86_fault(c, 0xda120u, "ran off the end of a function");
}
void f_000da154(X86Cpu& c) {
    X86_TICK(c, 20);
    // 0da154  push ebp
    X86_AT(c, 0xda154u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0da155  mov ebp, esp
    X86_AT(c, 0xda155u);
    c.r[5] = c.r[4];
    // 0da157  push dword ptr [ebp + 8]
    X86_AT(c, 0xda157u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, v); }
    // 0da15a  push 0xb47f8
    X86_AT(c, 0xda15au);
    { uint32_t v = 0xB47F8u; push32(c, v); }
    // 0da15f  push 0xb4804
    X86_AT(c, 0xda15fu);
    { uint32_t v = 0xB4804u; push32(c, v); }
    // 0da164  call 0xda120
    X86_AT(c, 0xda164u);
    push32(c, 0xda169u); x86_call_known(c, 0xda120u, f_000da120); X86_RET(c, 0xda169u);
    X86_TICK(c, 16);
    // 0da169  leave 
    X86_AT(c, 0xda169u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0da16a  ret 4
    X86_AT(c, 0xda16au);
    c.eip = pop32(c); c.r[4] += 0x4u; return;
    x86_fault(c, 0xda154u, "ran off the end of a function");
}
void f_000da178(X86Cpu& c) {
    X86_TICK(c, 21);
    // 0da178  push ebp
    X86_AT(c, 0xda178u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0da179  mov ebp, esp
    X86_AT(c, 0xda179u);
    c.r[5] = c.r[4];
    // 0da17b  movzx eax, byte ptr [ebp + 8]
    X86_AT(c, 0xda17bu);
    c.r[0] = rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0da17f  mov dword ptr [0xb47f0], eax
    X86_AT(c, 0xda17fu);
    wr32((c.sbase[3] + (uint32_t)(0xB47F0u)), c.r[0]);
    // 0da184  push 0x3e
    X86_AT(c, 0xda184u);
    { uint32_t v = 0x3Eu; push32(c, v); }
    // 0da186  call 0xda0e0
    X86_AT(c, 0xda186u);
    push32(c, 0xda18bu); x86_call_known(c, 0xda0e0u, f_000da0e0); X86_RET(c, 0xda18bu);
    X86_TICK(c, 16);
    // 0da18b  leave 
    X86_AT(c, 0xda18bu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0da18c  ret 4
    X86_AT(c, 0xda18cu);
    c.eip = pop32(c); c.r[4] += 0x4u; return;
    x86_fault(c, 0xda178u, "ran off the end of a function");
}
void f_000da198(X86Cpu& c) {
    X86_TICK(c, 19);
    // 0da198  push ebp
    X86_AT(c, 0xda198u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0da199  mov ebp, esp
    X86_AT(c, 0xda199u);
    c.r[5] = c.r[4];
    // 0da19b  mov al, byte ptr [ebp + 8]
    X86_AT(c, 0xda19bu);
    s8(c, 0, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))));
    // 0da19e  mov byte ptr [0xb47ec], al
    X86_AT(c, 0xda19eu);
    wr8((c.sbase[3] + (uint32_t)(0xB47ECu)), g8(c, 0));
    // 0da1a3  push 0x4c
    X86_AT(c, 0xda1a3u);
    { uint32_t v = 0x4Cu; push32(c, v); }
    // 0da1a5  call 0xda0e0
    X86_AT(c, 0xda1a5u);
    push32(c, 0xda1aau); x86_call_known(c, 0xda0e0u, f_000da0e0); X86_RET(c, 0xda1aau);
    X86_TICK(c, 16);
    // 0da1aa  leave 
    X86_AT(c, 0xda1aau);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0da1ab  ret 4
    X86_AT(c, 0xda1abu);
    c.eip = pop32(c); c.r[4] += 0x4u; return;
    x86_fault(c, 0xda198u, "ran off the end of a function");
}
void f_000da1d0(X86Cpu& c) {
    X86_TICK(c, 16);
    // 0da1d0  push ebp
    X86_AT(c, 0xda1d0u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0da1d1  mov ebp, esp
    X86_AT(c, 0xda1d1u);
    c.r[5] = c.r[4];
    // 0da1d3  push dword ptr [ebp + 8]
    X86_AT(c, 0xda1d3u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, v); }
    // 0da1d6  call 0xda154
    X86_AT(c, 0xda1d6u);
    push32(c, 0xda1dbu); x86_call_known(c, 0xda154u, f_000da154); X86_RET(c, 0xda1dbu);
    X86_TICK(c, 12);
    // 0da1db  push dword ptr [ebp + 0xc]
    X86_AT(c, 0xda1dbu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))); push32(c, v); }
    // 0da1de  call 0xda0e0
    X86_AT(c, 0xda1deu);
    push32(c, 0xda1e3u); x86_call_known(c, 0xda0e0u, f_000da0e0); X86_RET(c, 0xda1e3u);
    X86_TICK(c, 16);
    // 0da1e3  leave 
    X86_AT(c, 0xda1e3u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0da1e4  ret 8
    X86_AT(c, 0xda1e4u);
    c.eip = pop32(c); c.r[4] += 0x8u; return;
    x86_fault(c, 0xda1d0u, "ran off the end of a function");
}
void f_000da1f0(X86Cpu& c) {
    X86_TICK(c, 26);
    // 0da1f0  push ebp
    X86_AT(c, 0xda1f0u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0da1f1  mov ebp, esp
    X86_AT(c, 0xda1f1u);
    c.r[5] = c.r[4];
    // 0da1f3  movzx eax, byte ptr [ebp + 0xc]
    X86_AT(c, 0xda1f3u);
    c.r[0] = rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0da1f7  mov dword ptr [0xb47f4], eax
    X86_AT(c, 0xda1f7u);
    wr32((c.sbase[3] + (uint32_t)(0xB47F4u)), c.r[0]);
    // 0da1fc  push 0x3c
    X86_AT(c, 0xda1fcu);
    { uint32_t v = 0x3Cu; push32(c, v); }
    // 0da1fe  push dword ptr [ebp + 8]
    X86_AT(c, 0xda1feu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, v); }
    // 0da201  call 0xda1d0
    X86_AT(c, 0xda201u);
    push32(c, 0xda206u); x86_call_known(c, 0xda1d0u, f_000da1d0); X86_RET(c, 0xda206u);
    X86_TICK(c, 20);
    // 0da206  mov al, byte ptr [0xb47ec]
    X86_AT(c, 0xda206u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(0xB47ECu))));
    // 0da20b  leave 
    X86_AT(c, 0xda20bu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0da20c  ret 8
    X86_AT(c, 0xda20cu);
    c.eip = pop32(c); c.r[4] += 0x8u; return;
    x86_fault(c, 0xda1f0u, "ran off the end of a function");
}
void f_000da218(X86Cpu& c) {
    X86_TICK(c, 33);
    // 0da218  push ebp
    X86_AT(c, 0xda218u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0da219  mov ebp, esp
    X86_AT(c, 0xda219u);
    c.r[5] = c.r[4];
    // 0da21b  mov al, byte ptr [0xb4810]
    X86_AT(c, 0xda21bu);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(0xB4810u))));
    // 0da220  shl al, 4
    X86_AT(c, 0xda220u);
    { uint32_t v = g8(c, 0); bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 1, w); if (w) s8(c, 0, r); }
    // 0da223  or al, byte ptr [ebp + 0xc]
    X86_AT(c, 0xda223u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v | rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))), 1)); }
    // 0da226  mov byte ptr [0xb47ec], al
    X86_AT(c, 0xda226u);
    wr8((c.sbase[3] + (uint32_t)(0xB47ECu)), g8(c, 0));
    // 0da22b  push 0x3d
    X86_AT(c, 0xda22bu);
    { uint32_t v = 0x3Du; push32(c, v); }
    // 0da22d  push dword ptr [ebp + 8]
    X86_AT(c, 0xda22du);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, v); }
    // 0da230  call 0xda1d0
    X86_AT(c, 0xda230u);
    push32(c, 0xda235u); x86_call_known(c, 0xda1d0u, f_000da1d0); X86_RET(c, 0xda235u);
    X86_TICK(c, 20);
    // 0da235  mov al, byte ptr [0xb47ec]
    X86_AT(c, 0xda235u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(0xB47ECu))));
    // 0da23a  leave 
    X86_AT(c, 0xda23au);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0da23b  ret 8
    X86_AT(c, 0xda23bu);
    c.eip = pop32(c); c.r[4] += 0x8u; return;
    x86_fault(c, 0xda218u, "ran off the end of a function");
}
void f_000da248(X86Cpu& c) {
    X86_TICK(c, 18);
    // 0da248  push ebp
    X86_AT(c, 0xda248u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0da249  mov ebp, esp
    X86_AT(c, 0xda249u);
    c.r[5] = c.r[4];
    // 0da24b  push 0x41
    X86_AT(c, 0xda24bu);
    { uint32_t v = 0x41u; push32(c, v); }
    // 0da24d  push dword ptr [ebp + 8]
    X86_AT(c, 0xda24du);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, v); }
    // 0da250  call 0xda1d0
    X86_AT(c, 0xda250u);
    push32(c, 0xda255u); x86_call_known(c, 0xda1d0u, f_000da1d0); X86_RET(c, 0xda255u);
    X86_TICK(c, 16);
    // 0da255  leave 
    X86_AT(c, 0xda255u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0da256  ret 4
    X86_AT(c, 0xda256u);
    c.eip = pop32(c); c.r[4] += 0x4u; return;
    x86_fault(c, 0xda248u, "ran off the end of a function");
}
void f_000da270(X86Cpu& c) {
    X86_TICK(c, 21);
    // 0da270  push ebp
    X86_AT(c, 0xda270u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0da271  mov ebp, esp
    X86_AT(c, 0xda271u);
    c.r[5] = c.r[4];
    // 0da273  push ebx
    X86_AT(c, 0xda273u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0da274  push esi
    X86_AT(c, 0xda274u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0da275  push edi
    X86_AT(c, 0xda275u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0da276  mov edi, dword ptr [0xb4824]
    X86_AT(c, 0xda276u);
    c.r[7] = rd32((c.sbase[3] + (uint32_t)(0xB4824u)));
    // 0da27c  jmp 0xda2ab
    X86_AT(c, 0xda27cu);
    goto L_da2ab;
L_da27e:
    X86_TICK(c, 11);
    // 0da27e  mov esi, dword ptr [edi]
    X86_AT(c, 0xda27eu);
    c.r[6] = rd32((c.sbase[3] + (uint32_t)(c.r[7])));
    // 0da280  and esi, esi
    X86_AT(c, 0xda280u);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & c.r[6], 4); }
    // 0da282  je 0xda2a2
    X86_AT(c, 0xda282u);
    if (x86_cc(c, 4)) { goto L_da2a2; }
    X86_TICK(c, 11);
    // 0da284  cmp edi, dword ptr [esi + 4]
    X86_AT(c, 0xda284u);
    (void)x86_sub(c, c.r[7], rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0x4u))), 0, 4);
    // 0da287  je 0xda2a2
    X86_AT(c, 0xda287u);
    if (x86_cc(c, 4)) { goto L_da2a2; }
    X86_TICK(c, 11);
    // 0da289  push edi
    X86_AT(c, 0xda289u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0da28a  push 1
    X86_AT(c, 0xda28au);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0da28c  call 0xdbe00
    X86_AT(c, 0xda28cu);
    push32(c, 0xda291u); x86_call_known(c, 0xdbe00u, f_000dbe00); X86_RET(c, 0xda291u);
    X86_TICK(c, 15);
    // 0da291  push edi
    X86_AT(c, 0xda291u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0da292  mov ecx, dword ptr [ebp + 0xc]
    X86_AT(c, 0xda292u);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0da295  mov ebx, ecx
    X86_AT(c, 0xda295u);
    c.r[3] = c.r[1];
    // 0da297  call dword ptr [ebp + 8]
    X86_AT(c, 0xda297u);
    { uint32_t t = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, 0xda29au); x86_call(c, t); X86_RET(c, 0xda29au); }
    X86_TICK(c, 11);
    // 0da29a  push esi
    X86_AT(c, 0xda29au);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0da29b  mov ecx, ebx
    X86_AT(c, 0xda29bu);
    c.r[1] = c.r[3];
    // 0da29d  call dword ptr [ebp + 8]
    X86_AT(c, 0xda29du);
    { uint32_t t = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, 0xda2a0u); x86_call(c, t); X86_RET(c, 0xda2a0u); }
    X86_TICK(c, 7);
    // 0da2a0  jmp 0xda2af
    X86_AT(c, 0xda2a0u);
    goto L_da2af;
L_da2a2:
    X86_TICK(c, 13);
    // 0da2a2  push edi
    X86_AT(c, 0xda2a2u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0da2a3  mov ecx, dword ptr [ebp + 0xc]
    X86_AT(c, 0xda2a3u);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0da2a6  call dword ptr [ebp + 8]
    X86_AT(c, 0xda2a6u);
    { uint32_t t = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, 0xda2a9u); x86_call(c, t); X86_RET(c, 0xda2a9u); }
    X86_TICK(c, 2);
    // 0da2a9  mov edi, esi
    X86_AT(c, 0xda2a9u);
    c.r[7] = c.r[6];
L_da2ab:
    X86_TICK(c, 7);
    // 0da2ab  and edi, edi
    X86_AT(c, 0xda2abu);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & c.r[7], 4); }
    // 0da2ad  jne 0xda27e
    X86_AT(c, 0xda2adu);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xda27eu); goto L_da27e; }
L_da2af:
    X86_TICK(c, 28);
    // 0da2af  pop edi
    X86_AT(c, 0xda2afu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0da2b0  pop esi
    X86_AT(c, 0xda2b0u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0da2b1  pop ebx
    X86_AT(c, 0xda2b1u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0da2b2  leave 
    X86_AT(c, 0xda2b2u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0da2b3  ret 8
    X86_AT(c, 0xda2b3u);
    c.eip = pop32(c); c.r[4] += 0x8u; return;
    x86_fault(c, 0xda270u, "ran off the end of a function");
}
void f_000da2c8(X86Cpu& c) {
    X86_TICK(c, 23);
    // 0da2c8  push ebp
    X86_AT(c, 0xda2c8u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0da2c9  mov ebp, esp
    X86_AT(c, 0xda2c9u);
    c.r[5] = c.r[4];
    // 0da2cb  push ebx
    X86_AT(c, 0xda2cbu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0da2cc  push esi
    X86_AT(c, 0xda2ccu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0da2cd  push edi
    X86_AT(c, 0xda2cdu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0da2ce  mov edi, dword ptr [0xb4820]
    X86_AT(c, 0xda2ceu);
    c.r[7] = rd32((c.sbase[3] + (uint32_t)(0xB4820u)));
    // 0da2d4  sub esi, esi
    X86_AT(c, 0xda2d4u);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[6], 0, 4); }
    // 0da2d6  jmp 0xda31a
    X86_AT(c, 0xda2d6u);
    goto L_da31a;
L_da2d8:
    X86_TICK(c, 14);
    // 0da2d8  mov ebx, edi
    X86_AT(c, 0xda2d8u);
    c.r[3] = c.r[7];
    // 0da2da  cmp byte ptr [ebx + 0xf], 0x55
    X86_AT(c, 0xda2dau);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xFu))), 0x55u, 0, 1);
    // 0da2de  je 0xda2ea
    X86_AT(c, 0xda2deu);
    if (x86_cc(c, 4)) { goto L_da2ea; }
    X86_TICK(c, 11);
    // 0da2e0  push edi
    X86_AT(c, 0xda2e0u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0da2e1  push 4
    X86_AT(c, 0xda2e1u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0da2e3  call 0xdbe00
    X86_AT(c, 0xda2e3u);
    push32(c, 0xda2e8u); x86_call_known(c, 0xdbe00u, f_000dbe00); X86_RET(c, 0xda2e8u);
    X86_TICK(c, 7);
    // 0da2e8  jmp 0xda31a
    X86_AT(c, 0xda2e8u);
    goto L_da31a;
L_da2ea:
    X86_TICK(c, 11);
    // 0da2ea  cmp esi, dword ptr [ebx + 0x14]
    X86_AT(c, 0xda2eau);
    (void)x86_sub(c, c.r[6], rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x14u))), 0, 4);
    // 0da2ed  je 0xda2fb
    X86_AT(c, 0xda2edu);
    if (x86_cc(c, 4)) { goto L_da2fb; }
    X86_TICK(c, 11);
    // 0da2ef  push edi
    X86_AT(c, 0xda2efu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0da2f0  push 5
    X86_AT(c, 0xda2f0u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0da2f2  call 0xdbe00
    X86_AT(c, 0xda2f2u);
    push32(c, 0xda2f7u); x86_call_known(c, 0xdbe00u, f_000dbe00); X86_RET(c, 0xda2f7u);
    X86_TICK(c, 9);
    // 0da2f7  sub edi, edi
    X86_AT(c, 0xda2f7u);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
    // 0da2f9  jmp 0xda31a
    X86_AT(c, 0xda2f9u);
    goto L_da31a;
L_da2fb:
    X86_TICK(c, 11);
    // 0da2fb  mov eax, dword ptr [edi]
    X86_AT(c, 0xda2fbu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[7])));
    // 0da2fd  and eax, eax
    X86_AT(c, 0xda2fdu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0da2ff  je 0xda30e
    X86_AT(c, 0xda2ffu);
    if (x86_cc(c, 4)) { goto L_da30e; }
    X86_TICK(c, 11);
    // 0da301  cmp edi, dword ptr [eax + 4]
    X86_AT(c, 0xda301u);
    (void)x86_sub(c, c.r[7], rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0x4u))), 0, 4);
    // 0da304  je 0xda30e
    X86_AT(c, 0xda304u);
    if (x86_cc(c, 4)) { goto L_da30e; }
    X86_TICK(c, 11);
    // 0da306  push edi
    X86_AT(c, 0xda306u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0da307  push 1
    X86_AT(c, 0xda307u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0da309  call 0xdbe00
    X86_AT(c, 0xda309u);
    push32(c, 0xda30eu); x86_call_known(c, 0xdbe00u, f_000dbe00); X86_RET(c, 0xda30eu);
L_da30e:
    X86_TICK(c, 13);
    // 0da30e  push edi
    X86_AT(c, 0xda30eu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0da30f  mov ecx, dword ptr [ebp + 0xc]
    X86_AT(c, 0xda30fu);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0da312  call dword ptr [ebp + 8]
    X86_AT(c, 0xda312u);
    { uint32_t t = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, 0xda315u); x86_call(c, t); X86_RET(c, 0xda315u); }
    X86_TICK(c, 6);
    // 0da315  mov esi, edi
    X86_AT(c, 0xda315u);
    c.r[6] = c.r[7];
    // 0da317  mov edi, dword ptr [ebx + 0x10]
    X86_AT(c, 0xda317u);
    c.r[7] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u)));
L_da31a:
    X86_TICK(c, 7);
    // 0da31a  and edi, edi
    X86_AT(c, 0xda31au);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & c.r[7], 4); }
    // 0da31c  jne 0xda2d8
    X86_AT(c, 0xda31cu);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xda2d8u); goto L_da2d8; }
    X86_TICK(c, 28);
    // 0da31e  pop edi
    X86_AT(c, 0xda31eu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0da31f  pop esi
    X86_AT(c, 0xda31fu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0da320  pop ebx
    X86_AT(c, 0xda320u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0da321  leave 
    X86_AT(c, 0xda321u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0da322  ret 8
    X86_AT(c, 0xda322u);
    c.eip = pop32(c); c.r[4] += 0x8u; return;
    x86_fault(c, 0xda2c8u, "ran off the end of a function");
}
void f_000da33c(X86Cpu& c) {
    X86_TICK(c, 16);
    // 0da33c  mov ecx, dword ptr [esp + 4]
    X86_AT(c, 0xda33cu);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[4] + 0x4u)));
    // 0da340  cmp dword ptr [ecx + 8], 0x18
    X86_AT(c, 0xda340u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[1] + 0x8u))), 0x18u, 0, 4);
    // 0da344  jb 0xda36c
    X86_AT(c, 0xda344u);
    if (x86_cc(c, 2)) { goto L_da36c; }
    X86_TICK(c, 12);
    // 0da346  cmp dword ptr [ecx + 0x14], 0
    X86_AT(c, 0xda346u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[1] + 0x14u))), 0x0u, 0, 4);
    // 0da34a  jne 0xda356
    X86_AT(c, 0xda34au);
    if (x86_cc(c, 5)) { goto L_da356; }
    X86_TICK(c, 13);
    // 0da34c  mov eax, dword ptr [ecx + 0x10]
    X86_AT(c, 0xda34cu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[1] + 0x10u)));
    // 0da34f  mov dword ptr [0xb4820], eax
    X86_AT(c, 0xda34fu);
    wr32((c.sbase[3] + (uint32_t)(0xB4820u)), c.r[0]);
    // 0da354  jmp 0xda35f
    X86_AT(c, 0xda354u);
    goto L_da35f;
L_da356:
    X86_TICK(c, 10);
    // 0da356  mov eax, dword ptr [ecx + 0x10]
    X86_AT(c, 0xda356u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[1] + 0x10u)));
    // 0da359  mov edx, dword ptr [ecx + 0x14]
    X86_AT(c, 0xda359u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[1] + 0x14u)));
    // 0da35c  mov dword ptr [edx + 0x10], eax
    X86_AT(c, 0xda35cu);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0x10u)), c.r[0]);
L_da35f:
    X86_TICK(c, 11);
    // 0da35f  mov eax, dword ptr [ecx + 0x10]
    X86_AT(c, 0xda35fu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[1] + 0x10u)));
    // 0da362  and eax, eax
    X86_AT(c, 0xda362u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0da364  je 0xda36c
    X86_AT(c, 0xda364u);
    if (x86_cc(c, 4)) { goto L_da36c; }
    X86_TICK(c, 6);
    // 0da366  mov edx, dword ptr [ecx + 0x14]
    X86_AT(c, 0xda366u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[1] + 0x14u)));
    // 0da369  mov dword ptr [eax + 0x14], edx
    X86_AT(c, 0xda369u);
    wr32((c.sbase[3] + (uint32_t)(c.r[0] + 0x14u)), c.r[2]);
L_da36c:
    X86_TICK(c, 10);
    // 0da36c  ret 4
    X86_AT(c, 0xda36cu);
    c.eip = pop32(c); c.r[4] += 0x4u; return;
    x86_fault(c, 0xda33cu, "ran off the end of a function");
}
void f_000da390(X86Cpu& c) {
    X86_TICK(c, 23);
    // 0da390  push ebp
    X86_AT(c, 0xda390u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0da391  mov ebp, esp
    X86_AT(c, 0xda391u);
    c.r[5] = c.r[4];
    // 0da393  push esi
    X86_AT(c, 0xda393u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0da394  push edi
    X86_AT(c, 0xda394u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0da395  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0xda395u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0da398  mov esi, dword ptr [edi]
    X86_AT(c, 0xda398u);
    c.r[6] = rd32((c.sbase[3] + (uint32_t)(c.r[7])));
    // 0da39a  and esi, esi
    X86_AT(c, 0xda39au);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & c.r[6], 4); }
    // 0da39c  je 0xda3c5
    X86_AT(c, 0xda39cu);
    if (x86_cc(c, 4)) { goto L_da3c5; }
    X86_TICK(c, 12);
    // 0da39e  cmp byte ptr [esi + 0xf], 0x55
    X86_AT(c, 0xda39eu);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[6] + 0xFu))), 0x55u, 0, 1);
    // 0da3a2  jne 0xda3c5
    X86_AT(c, 0xda3a2u);
    if (x86_cc(c, 5)) { goto L_da3c5; }
    X86_TICK(c, 11);
    // 0da3a4  cmp esi, dword ptr [0xb4828]
    X86_AT(c, 0xda3a4u);
    (void)x86_sub(c, c.r[6], rd32((c.sbase[3] + (uint32_t)(0xB4828u))), 0, 4);
    // 0da3aa  jne 0xda3b2
    X86_AT(c, 0xda3aau);
    if (x86_cc(c, 5)) { goto L_da3b2; }
    X86_TICK(c, 2);
    // 0da3ac  mov dword ptr [0xb4828], edi
    X86_AT(c, 0xda3acu);
    wr32((c.sbase[3] + (uint32_t)(0xB4828u)), c.r[7]);
L_da3b2:
    X86_TICK(c, 9);
    // 0da3b2  push esi
    X86_AT(c, 0xda3b2u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0da3b3  call 0xda33c
    X86_AT(c, 0xda3b3u);
    push32(c, 0xda3b8u); x86_call_known(c, 0xda33cu, f_000da33c); X86_RET(c, 0xda3b8u);
    X86_TICK(c, 27);
    // 0da3b8  mov eax, dword ptr [esi + 8]
    X86_AT(c, 0xda3b8u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0x8u)));
    // 0da3bb  add dword ptr [edi + 8], eax
    X86_AT(c, 0xda3bbu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x8u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 0da3be  mov eax, dword ptr [esi]
    X86_AT(c, 0xda3beu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[6])));
    // 0da3c0  mov dword ptr [edi], eax
    X86_AT(c, 0xda3c0u);
    wr32((c.sbase[3] + (uint32_t)(c.r[7])), c.r[0]);
    // 0da3c2  xchg esi, eax
    X86_AT(c, 0xda3c2u);
    { uint32_t t = c.r[6]; c.r[6] = c.r[0]; c.r[0] = t; }
    // 0da3c3  jmp 0xda3f8
    X86_AT(c, 0xda3c3u);
    goto L_da3f8;
L_da3c5:
    X86_TICK(c, 11);
    // 0da3c5  mov eax, dword ptr [edi + 4]
    X86_AT(c, 0xda3c5u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x4u)));
    // 0da3c8  and eax, eax
    X86_AT(c, 0xda3c8u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0da3ca  je 0xda403
    X86_AT(c, 0xda3cau);
    if (x86_cc(c, 4)) { goto L_da403; }
    X86_TICK(c, 15);
    // 0da3cc  xchg esi, eax
    X86_AT(c, 0xda3ccu);
    { uint32_t t = c.r[6]; c.r[6] = c.r[0]; c.r[0] = t; }
    // 0da3cd  cmp byte ptr [esi + 0xf], 0x55
    X86_AT(c, 0xda3cdu);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[6] + 0xFu))), 0x55u, 0, 1);
    // 0da3d1  jne 0xda403
    X86_AT(c, 0xda3d1u);
    if (x86_cc(c, 5)) { goto L_da403; }
    X86_TICK(c, 11);
    // 0da3d3  cmp edi, dword ptr [0xb4828]
    X86_AT(c, 0xda3d3u);
    (void)x86_sub(c, c.r[7], rd32((c.sbase[3] + (uint32_t)(0xB4828u))), 0, 4);
    // 0da3d9  jne 0xda3e1
    X86_AT(c, 0xda3d9u);
    if (x86_cc(c, 5)) { goto L_da3e1; }
    X86_TICK(c, 2);
    // 0da3db  mov dword ptr [0xb4828], esi
    X86_AT(c, 0xda3dbu);
    wr32((c.sbase[3] + (uint32_t)(0xB4828u)), c.r[6]);
L_da3e1:
    X86_TICK(c, 9);
    // 0da3e1  push esi
    X86_AT(c, 0xda3e1u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0da3e2  call 0xda33c
    X86_AT(c, 0xda3e2u);
    push32(c, 0xda3e7u); x86_call_known(c, 0xda33cu, f_000da33c); X86_RET(c, 0xda3e7u);
    X86_TICK(c, 29);
    // 0da3e7  mov eax, dword ptr [edi + 8]
    X86_AT(c, 0xda3e7u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x8u)));
    // 0da3ea  add dword ptr [esi + 8], eax
    X86_AT(c, 0xda3eau);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[6] + 0x8u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 0da3ed  mov eax, dword ptr [edi]
    X86_AT(c, 0xda3edu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[7])));
    // 0da3ef  mov dword ptr [esi], eax
    X86_AT(c, 0xda3efu);
    wr32((c.sbase[3] + (uint32_t)(c.r[6])), c.r[0]);
    // 0da3f1  mov edi, esi
    X86_AT(c, 0xda3f1u);
    c.r[7] = c.r[6];
    // 0da3f3  xchg esi, eax
    X86_AT(c, 0xda3f3u);
    { uint32_t t = c.r[6]; c.r[6] = c.r[0]; c.r[0] = t; }
    // 0da3f4  and esi, esi
    X86_AT(c, 0xda3f4u);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & c.r[6], 4); }
    // 0da3f6  je 0xda3fb
    X86_AT(c, 0xda3f6u);
    if (x86_cc(c, 4)) { goto L_da3fb; }
L_da3f8:
    X86_TICK(c, 2);
    // 0da3f8  mov dword ptr [esi + 4], edi
    X86_AT(c, 0xda3f8u);
    wr32((c.sbase[3] + (uint32_t)(c.r[6] + 0x4u)), c.r[7]);
L_da3fb:
    X86_TICK(c, 9);
    // 0da3fb  push edi
    X86_AT(c, 0xda3fbu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0da3fc  call 0xda390
    X86_AT(c, 0xda3fcu);
    push32(c, 0xda401u); x86_call_known(c, 0xda390u, f_000da390); X86_RET(c, 0xda401u);
    X86_TICK(c, 7);
    // 0da401  jmp 0xda426
    X86_AT(c, 0xda401u);
    goto L_da426;
L_da403:
    X86_TICK(c, 12);
    // 0da403  cmp dword ptr [edi + 8], 0x18
    X86_AT(c, 0xda403u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x8u))), 0x18u, 0, 4);
    // 0da407  jb 0xda426
    X86_AT(c, 0xda407u);
    if (x86_cc(c, 2)) { goto L_da426; }
    X86_TICK(c, 13);
    // 0da409  mov esi, dword ptr [0xb4820]
    X86_AT(c, 0xda409u);
    c.r[6] = rd32((c.sbase[3] + (uint32_t)(0xB4820u)));
    // 0da40f  mov dword ptr [edi + 0x10], esi
    X86_AT(c, 0xda40fu);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] + 0x10u)), c.r[6]);
    // 0da412  and esi, esi
    X86_AT(c, 0xda412u);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & c.r[6], 4); }
    // 0da414  je 0xda419
    X86_AT(c, 0xda414u);
    if (x86_cc(c, 4)) { goto L_da419; }
    X86_TICK(c, 2);
    // 0da416  mov dword ptr [esi + 0x14], edi
    X86_AT(c, 0xda416u);
    wr32((c.sbase[3] + (uint32_t)(c.r[6] + 0x14u)), c.r[7]);
L_da419:
    X86_TICK(c, 4);
    // 0da419  mov dword ptr [edi + 0x14], 0
    X86_AT(c, 0xda419u);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] + 0x14u)), 0x0u);
    // 0da420  mov dword ptr [0xb4820], edi
    X86_AT(c, 0xda420u);
    wr32((c.sbase[3] + (uint32_t)(0xB4820u)), c.r[7]);
L_da426:
    X86_TICK(c, 24);
    // 0da426  pop edi
    X86_AT(c, 0xda426u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0da427  pop esi
    X86_AT(c, 0xda427u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0da428  leave 
    X86_AT(c, 0xda428u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0da429  ret 4
    X86_AT(c, 0xda429u);
    c.eip = pop32(c); c.r[4] += 0x4u; return;
    x86_fault(c, 0xda390u, "ran off the end of a function");
}
void f_000da440(X86Cpu& c) {
    X86_TICK(c, 23);
    // 0da440  enter 4, 0
    X86_AT(c, 0xda440u);
    x86_enter(c, 0x4u, 0x0u, 4);
    // 0da444  push ebx
    X86_AT(c, 0xda444u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0da445  push esi
    X86_AT(c, 0xda445u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0da446  push edi
    X86_AT(c, 0xda446u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0da447  push ebp
    X86_AT(c, 0xda447u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0da448  push 0xda470
    X86_AT(c, 0xda448u);
    { uint32_t v = 0xDA470u; push32(c, v); }
    // 0da44d  call 0xda2c8
    X86_AT(c, 0xda44du);
    push32(c, 0xda452u); x86_call_known(c, 0xda2c8u, f_000da2c8); X86_RET(c, 0xda452u);
    X86_TICK(c, 36);
    // 0da452  mov dword ptr [ebp - 4], 0
    X86_AT(c, 0xda452u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), 0x0u);
    // 0da459  lea esp, [ebp - 0x10]
    X86_AT(c, 0xda459u);
    c.r[4] = (uint32_t)(c.r[5] + 0xFFFFFFF0u);
    // 0da45c  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0xda45cu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0da45f  pop edi
    X86_AT(c, 0xda45fu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0da460  pop esi
    X86_AT(c, 0xda460u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0da461  pop ebx
    X86_AT(c, 0xda461u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0da462  leave 
    X86_AT(c, 0xda462u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0da463  ret 4
    X86_AT(c, 0xda463u);
    c.eip = pop32(c); c.r[4] += 0x4u; return;
    x86_fault(c, 0xda440u, "ran off the end of a function");
}
void f_000da470(X86Cpu& c) {
    goto L_da470;
L_da459:
    X86_TICK(c, 34);
    // 0da459  lea esp, [ebp - 0x10]
    X86_AT(c, 0xda459u);
    c.r[4] = (uint32_t)(c.r[5] + 0xFFFFFFF0u);
    // 0da45c  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0xda45cu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0da45f  pop edi
    X86_AT(c, 0xda45fu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0da460  pop esi
    X86_AT(c, 0xda460u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0da461  pop ebx
    X86_AT(c, 0xda461u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0da462  leave 
    X86_AT(c, 0xda462u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0da463  ret 4
    X86_AT(c, 0xda463u);
    c.eip = pop32(c); c.r[4] += 0x4u; return;
L_da470:
    X86_TICK(c, 29);
    // 0da470  push ebp
    X86_AT(c, 0xda470u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0da471  mov ebp, esp
    X86_AT(c, 0xda471u);
    c.r[5] = c.r[4];
    // 0da473  push ecx
    X86_AT(c, 0xda473u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 0da474  mov ecx, dword ptr [ebp + 8]
    X86_AT(c, 0xda474u);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0da477  mov eax, dword ptr [ecx + 8]
    X86_AT(c, 0xda477u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[1] + 0x8u)));
    // 0da47a  mov edx, dword ptr [ebp - 4]
    X86_AT(c, 0xda47au);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0da47d  cmp eax, dword ptr [edx + 8]
    X86_AT(c, 0xda47du);
    (void)x86_sub(c, c.r[0], rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0x8u))), 0, 4);
    // 0da480  jb 0xda489
    X86_AT(c, 0xda480u);
    if (x86_cc(c, 2)) { goto L_da489; }
    X86_TICK(c, 11);
    // 0da482  mov dword ptr [edx - 4], ecx
    X86_AT(c, 0xda482u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xFFFFFFFCu)), c.r[1]);
    // 0da485  mov ebp, edx
    X86_AT(c, 0xda485u);
    c.r[5] = c.r[2];
    // 0da487  jmp 0xda459
    X86_AT(c, 0xda487u);
    X86_POLL(c, 0xda459u); goto L_da459;
L_da489:
    X86_TICK(c, 16);
    // 0da489  leave 
    X86_AT(c, 0xda489u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0da48a  ret 4
    X86_AT(c, 0xda48au);
    c.eip = pop32(c); c.r[4] += 0x4u; return;
    x86_fault(c, 0xda470u, "ran off the end of a function");
}
void f_000da498(X86Cpu& c) {
    X86_TICK(c, 23);
    // 0da498  mov eax, dword ptr [0xb482c]
    X86_AT(c, 0xda498u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xB482Cu)));
    // 0da49d  add eax, 0x200
    X86_AT(c, 0xda49du);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0x200u, 0, 4); }
    // 0da4a2  push eax
    X86_AT(c, 0xda4a2u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0da4a3  mov eax, dword ptr [0xb482c]
    X86_AT(c, 0xda4a3u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xB482Cu)));
    // 0da4a8  add eax, 0x100
    X86_AT(c, 0xda4a8u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0x100u, 0, 4); }
    // 0da4ad  push eax
    X86_AT(c, 0xda4adu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0da4ae  call 0xd8ff5
    X86_AT(c, 0xda4aeu);
    push32(c, 0xda4b3u); x86_call_known(c, 0xd8ff5u, f_000d8ff5); X86_RET(c, 0xda4b3u);
    X86_TICK(c, 10);
    // 0da4b3  ret 
    X86_AT(c, 0xda4b3u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xda498u, "ran off the end of a function");
}
void f_000da4c0(X86Cpu& c) {
    X86_TICK(c, 28);
    // 0da4c0  enter 4, 0
    X86_AT(c, 0xda4c0u);
    x86_enter(c, 0x4u, 0x0u, 4);
    // 0da4c4  push ebx
    X86_AT(c, 0xda4c4u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0da4c5  push esi
    X86_AT(c, 0xda4c5u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0da4c6  push edi
    X86_AT(c, 0xda4c6u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0da4c7  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0xda4c7u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0da4ca  cmp dword ptr [0xb482c], 0
    X86_AT(c, 0xda4cau);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xB482Cu))), 0x0u, 0, 4);
    // 0da4d1  jne 0xda4dd
    X86_AT(c, 0xda4d1u);
    if (x86_cc(c, 5)) { goto L_da4dd; }
    X86_TICK(c, 7);
    // 0da4d3  call 0xd8f9a
    X86_AT(c, 0xda4d3u);
    push32(c, 0xda4d8u); x86_call_known(c, 0xd8f9au, f_000d8f9a); X86_RET(c, 0xda4d8u);
    X86_TICK(c, 2);
    // 0da4d8  mov dword ptr [0xb482c], eax
    X86_AT(c, 0xda4d8u);
    wr32((c.sbase[3] + (uint32_t)(0xB482Cu)), c.r[0]);
L_da4dd:
    X86_TICK(c, 7);
    // 0da4dd  call 0xd8fa6
    X86_AT(c, 0xda4ddu);
    push32(c, 0xda4e2u); x86_call_known(c, 0xd8fa6u, f_000d8fa6); X86_RET(c, 0xda4e2u);
    X86_TICK(c, 16);
    // 0da4e2  xchg esi, eax
    X86_AT(c, 0xda4e2u);
    { uint32_t t = c.r[6]; c.r[6] = c.r[0]; c.r[0] = t; }
    // 0da4e3  sub esi, dword ptr [0xb482c]
    X86_AT(c, 0xda4e3u);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, rd32((c.sbase[3] + (uint32_t)(0xB482Cu))), 0, 4); }
    // 0da4e9  cmp esi, edi
    X86_AT(c, 0xda4e9u);
    (void)x86_sub(c, c.r[6], c.r[7], 0, 4);
    // 0da4eb  jb 0xda4f8
    X86_AT(c, 0xda4ebu);
    if (x86_cc(c, 2)) { goto L_da4f8; }
    X86_TICK(c, 11);
    // 0da4ed  mov eax, esi
    X86_AT(c, 0xda4edu);
    c.r[0] = c.r[6];
    // 0da4ef  sub eax, edi
    X86_AT(c, 0xda4efu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[7], 0, 4); }
    // 0da4f1  cmp eax, 0x200
    X86_AT(c, 0xda4f1u);
    (void)x86_sub(c, c.r[0], 0x200u, 0, 4);
    // 0da4f6  jge 0xda53d
    X86_AT(c, 0xda4f6u);
    if (x86_cc(c, 13)) { goto L_da53d; }
L_da4f8:
    X86_TICK(c, 7);
    // 0da4f8  cmp esi, edi
    X86_AT(c, 0xda4f8u);
    (void)x86_sub(c, c.r[6], c.r[7], 0, 4);
    // 0da4fa  jae 0xda513
    X86_AT(c, 0xda4fau);
    if (x86_cc(c, 3)) { goto L_da513; }
    X86_TICK(c, 63);
    // 0da4fc  mov eax, edi
    X86_AT(c, 0xda4fcu);
    c.r[0] = c.r[7];
    // 0da4fe  sub eax, esi
    X86_AT(c, 0xda4feu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[6], 0, 4); }
    // 0da500  add eax, 0xfff
    X86_AT(c, 0xda500u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0xFFFu, 0, 4); }
    // 0da505  cdq 
    X86_AT(c, 0xda505u);
    c.r[2] = (c.r[0] & 0x80000000u) ? 0xFFFFFFFFu : 0u;
    // 0da506  mov ecx, 0x1000
    X86_AT(c, 0xda506u);
    c.r[1] = 0x1000u;
    // 0da50b  idiv ecx
    X86_AT(c, 0xda50bu);
    x86_idiv(c, c.r[1], 4, 0xda50bu);
    // 0da50d  xchg ebx, eax
    X86_AT(c, 0xda50du);
    { uint32_t t = c.r[3]; c.r[3] = c.r[0]; c.r[0] = t; }
    // 0da50e  shl ebx, 0xc
    X86_AT(c, 0xda50eu);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 4, v, 0xCu, 4, w); if (w) c.r[3] = r; }
    // 0da511  jmp 0xda518
    X86_AT(c, 0xda511u);
    goto L_da518;
L_da513:
    X86_TICK(c, 2);
    // 0da513  mov ebx, 0x1000
    X86_AT(c, 0xda513u);
    c.r[3] = 0x1000u;
L_da518:
    X86_TICK(c, 9);
    // 0da518  push ebx
    X86_AT(c, 0xda518u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0da519  call 0xd8fac
    X86_AT(c, 0xda519u);
    push32(c, 0xda51eu); x86_call_known(c, 0xd8facu, f_000d8fac); X86_RET(c, 0xda51eu);
    X86_TICK(c, 7);
    // 0da51e  call 0xd8fa6
    X86_AT(c, 0xda51eu);
    push32(c, 0xda523u); x86_call_known(c, 0xd8fa6u, f_000d8fa6); X86_RET(c, 0xda523u);
    X86_TICK(c, 16);
    // 0da523  xchg esi, eax
    X86_AT(c, 0xda523u);
    { uint32_t t = c.r[6]; c.r[6] = c.r[0]; c.r[0] = t; }
    // 0da524  sub esi, dword ptr [0xb482c]
    X86_AT(c, 0xda524u);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, rd32((c.sbase[3] + (uint32_t)(0xB482Cu))), 0, 4); }
    // 0da52a  cmp esi, edi
    X86_AT(c, 0xda52au);
    (void)x86_sub(c, c.r[6], c.r[7], 0, 4);
    // 0da52c  jb 0xda539
    X86_AT(c, 0xda52cu);
    if (x86_cc(c, 2)) { goto L_da539; }
    X86_TICK(c, 11);
    // 0da52e  mov eax, esi
    X86_AT(c, 0xda52eu);
    c.r[0] = c.r[6];
    // 0da530  sub eax, edi
    X86_AT(c, 0xda530u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[7], 0, 4); }
    // 0da532  cmp eax, 0x200
    X86_AT(c, 0xda532u);
    (void)x86_sub(c, c.r[0], 0x200u, 0, 4);
    // 0da537  jge 0xda53d
    X86_AT(c, 0xda537u);
    if (x86_cc(c, 13)) { goto L_da53d; }
L_da539:
    X86_TICK(c, 9);
    // 0da539  sub eax, eax
    X86_AT(c, 0xda539u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0da53b  jmp 0xda552
    X86_AT(c, 0xda53bu);
    goto L_da552;
L_da53d:
    X86_TICK(c, 20);
    // 0da53d  mov ebx, dword ptr [0xb482c]
    X86_AT(c, 0xda53du);
    c.r[3] = rd32((c.sbase[3] + (uint32_t)(0xB482Cu)));
    // 0da543  mov dword ptr [ebp - 4], ebx
    X86_AT(c, 0xda543u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[3]);
    // 0da546  add dword ptr [0xb482c], edi
    X86_AT(c, 0xda546u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xB482Cu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[7], 0, 4)); }
    // 0da54c  call 0xda498
    X86_AT(c, 0xda54cu);
    push32(c, 0xda551u); x86_call_known(c, 0xda498u, f_000da498); X86_RET(c, 0xda551u);
    X86_TICK(c, 3);
    // 0da551  xchg ebx, eax
    X86_AT(c, 0xda551u);
    { uint32_t t = c.r[3]; c.r[3] = c.r[0]; c.r[0] = t; }
L_da552:
    X86_TICK(c, 28);
    // 0da552  pop edi
    X86_AT(c, 0xda552u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0da553  pop esi
    X86_AT(c, 0xda553u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0da554  pop ebx
    X86_AT(c, 0xda554u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0da555  leave 
    X86_AT(c, 0xda555u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0da556  ret 4
    X86_AT(c, 0xda556u);
    c.eip = pop32(c); c.r[4] += 0x4u; return;
    x86_fault(c, 0xda4c0u, "ran off the end of a function");
}
void f_000da568(X86Cpu& c) {
    X86_TICK(c, 21);
    // 0da568  push ebp
    X86_AT(c, 0xda568u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0da569  mov ebp, esp
    X86_AT(c, 0xda569u);
    c.r[5] = c.r[4];
    // 0da56b  push esi
    X86_AT(c, 0xda56bu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0da56c  push edi
    X86_AT(c, 0xda56cu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0da56d  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0xda56du);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0da570  mov eax, 0x18
    X86_AT(c, 0xda570u);
    c.r[0] = 0x18u;
    // 0da575  cmp eax, edi
    X86_AT(c, 0xda575u);
    (void)x86_sub(c, c.r[0], c.r[7], 0, 4);
    // 0da577  jb 0xda57a
    X86_AT(c, 0xda577u);
    if (x86_cc(c, 2)) { goto L_da57a; }
    X86_TICK(c, 3);
    // 0da579  xchg edi, eax
    X86_AT(c, 0xda579u);
    { uint32_t t = c.r[7]; c.r[7] = c.r[0]; c.r[0] = t; }
L_da57a:
    X86_TICK(c, 7);
    // 0da57a  cmp edi, 0x7fffffff
    X86_AT(c, 0xda57au);
    (void)x86_sub(c, c.r[7], 0x7FFFFFFFu, 0, 4);
    // 0da580  ja 0xda5c5
    X86_AT(c, 0xda580u);
    if (x86_cc(c, 7)) { goto L_da5c5; }
    X86_TICK(c, 9);
    // 0da582  push edi
    X86_AT(c, 0xda582u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0da583  call 0xda4c0
    X86_AT(c, 0xda583u);
    push32(c, 0xda588u); x86_call_known(c, 0xda4c0u, f_000da4c0); X86_RET(c, 0xda588u);
    X86_TICK(c, 10);
    // 0da588  xchg esi, eax
    X86_AT(c, 0xda588u);
    { uint32_t t = c.r[6]; c.r[6] = c.r[0]; c.r[0] = t; }
    // 0da589  and esi, esi
    X86_AT(c, 0xda589u);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & c.r[6], 4); }
    // 0da58b  je 0xda5c5
    X86_AT(c, 0xda58bu);
    if (x86_cc(c, 4)) { goto L_da5c5; }
    X86_TICK(c, 23);
    // 0da58d  sub eax, eax
    X86_AT(c, 0xda58du);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0da58f  mov dword ptr [esi], eax
    X86_AT(c, 0xda58fu);
    wr32((c.sbase[3] + (uint32_t)(c.r[6])), c.r[0]);
    // 0da591  mov edx, dword ptr [0xb4828]
    X86_AT(c, 0xda591u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(0xB4828u)));
    // 0da597  mov dword ptr [esi + 4], edx
    X86_AT(c, 0xda597u);
    wr32((c.sbase[3] + (uint32_t)(c.r[6] + 0x4u)), c.r[2]);
    // 0da59a  mov byte ptr [esi + 0xf], 0x55
    X86_AT(c, 0xda59au);
    wr8((c.sbase[3] + (uint32_t)(c.r[6] + 0xFu)), 0x55u);
    // 0da59e  mov dword ptr [esi + 8], edi
    X86_AT(c, 0xda59eu);
    wr32((c.sbase[3] + (uint32_t)(c.r[6] + 0x8u)), c.r[7]);
    // 0da5a1  mov byte ptr [esi + 0xe], al
    X86_AT(c, 0xda5a1u);
    wr8((c.sbase[3] + (uint32_t)(c.r[6] + 0xEu)), g8(c, 0));
    // 0da5a4  cmp eax, edx
    X86_AT(c, 0xda5a4u);
    (void)x86_sub(c, c.r[0], c.r[2], 0, 4);
    // 0da5a6  je 0xda5aa
    X86_AT(c, 0xda5a6u);
    if (x86_cc(c, 4)) { goto L_da5aa; }
    X86_TICK(c, 2);
    // 0da5a8  mov dword ptr [edx], esi
    X86_AT(c, 0xda5a8u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2])), c.r[6]);
L_da5aa:
    X86_TICK(c, 14);
    // 0da5aa  mov dword ptr [0xb4828], esi
    X86_AT(c, 0xda5aau);
    wr32((c.sbase[3] + (uint32_t)(0xB4828u)), c.r[6]);
    // 0da5b0  cmp dword ptr [0xb4824], 0
    X86_AT(c, 0xda5b0u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xB4824u))), 0x0u, 0, 4);
    // 0da5b7  jne 0xda5bf
    X86_AT(c, 0xda5b7u);
    if (x86_cc(c, 5)) { goto L_da5bf; }
    X86_TICK(c, 2);
    // 0da5b9  mov dword ptr [0xb4824], esi
    X86_AT(c, 0xda5b9u);
    wr32((c.sbase[3] + (uint32_t)(0xB4824u)), c.r[6]);
L_da5bf:
    X86_TICK(c, 9);
    // 0da5bf  push esi
    X86_AT(c, 0xda5bfu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0da5c0  call 0xda390
    X86_AT(c, 0xda5c0u);
    push32(c, 0xda5c5u); x86_call_known(c, 0xda390u, f_000da390); X86_RET(c, 0xda5c5u);
L_da5c5:
    X86_TICK(c, 24);
    // 0da5c5  pop edi
    X86_AT(c, 0xda5c5u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0da5c6  pop esi
    X86_AT(c, 0xda5c6u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0da5c7  leave 
    X86_AT(c, 0xda5c7u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0da5c8  ret 4
    X86_AT(c, 0xda5c8u);
    c.eip = pop32(c); c.r[4] += 0x4u; return;
    x86_fault(c, 0xda568u, "ran off the end of a function");
}
void f_000da5d4(X86Cpu& c) {
    X86_TICK(c, 28);
    // 0da5d4  enter 8, 0
    X86_AT(c, 0xda5d4u);
    x86_enter(c, 0x8u, 0x0u, 4);
    // 0da5d8  push ebx
    X86_AT(c, 0xda5d8u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0da5d9  push esi
    X86_AT(c, 0xda5d9u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0da5da  push edi
    X86_AT(c, 0xda5dau);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0da5db  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0xda5dbu);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0da5de  cmp byte ptr [0xb4818], 0
    X86_AT(c, 0xda5deu);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0xB4818u))), 0x0u, 0, 1);
    // 0da5e5  je 0xda5ec
    X86_AT(c, 0xda5e5u);
    if (x86_cc(c, 4)) { goto L_da5ec; }
    X86_TICK(c, 7);
    // 0da5e7  call 0xda82c
    X86_AT(c, 0xda5e7u);
    push32(c, 0xda5ecu); x86_call_known(c, 0xda82cu, f_000da82c); X86_RET(c, 0xda5ecu);
L_da5ec:
    X86_TICK(c, 7);
    // 0da5ec  cmp edi, 0x7fffffec
    X86_AT(c, 0xda5ecu);
    (void)x86_sub(c, c.r[7], 0x7FFFFFECu, 0, 4);
    // 0da5f2  jbe 0xda5fb
    X86_AT(c, 0xda5f2u);
    if (x86_cc(c, 6)) { goto L_da5fb; }
    X86_TICK(c, 9);
    // 0da5f4  sub eax, eax
    X86_AT(c, 0xda5f4u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0da5f6  jmp 0xda6d3
    X86_AT(c, 0xda5f6u);
    goto L_da6d3;
L_da5fb:
    X86_TICK(c, 10);
    // 0da5fb  mov eax, edi
    X86_AT(c, 0xda5fbu);
    c.r[0] = c.r[7];
    // 0da5fd  rcr eax, 1
    X86_AT(c, 0xda5fdu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 3, v, 0x1u, 4, w); if (w) c.r[0] = r; }
    // 0da5ff  jae 0xda602
    X86_AT(c, 0xda5ffu);
    if (x86_cc(c, 3)) { goto L_da602; }
    X86_TICK(c, 2);
    // 0da601  inc edi
    X86_AT(c, 0xda601u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
L_da602:
    X86_TICK(c, 7);
    // 0da602  test di, 3
    X86_AT(c, 0xda602u);
    (void)x86_logic(c, (c.r[7] & 0xFFFFu) & 0x3u, 2);
    // 0da607  je 0xda60c
    X86_AT(c, 0xda607u);
    if (x86_cc(c, 4)) { goto L_da60c; }
    X86_TICK(c, 2);
    // 0da609  add edi, 2
    X86_AT(c, 0xda609u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x2u, 0, 4); }
L_da60c:
    X86_TICK(c, 11);
    // 0da60c  add edi, 0x10
    X86_AT(c, 0xda60cu);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x10u, 0, 4); }
    // 0da60f  push edi
    X86_AT(c, 0xda60fu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0da610  call 0xda440
    X86_AT(c, 0xda610u);
    push32(c, 0xda615u); x86_call_known(c, 0xda440u, f_000da440); X86_RET(c, 0xda615u);
    X86_TICK(c, 10);
    // 0da615  xchg esi, eax
    X86_AT(c, 0xda615u);
    { uint32_t t = c.r[6]; c.r[6] = c.r[0]; c.r[0] = t; }
    // 0da616  and esi, esi
    X86_AT(c, 0xda616u);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & c.r[6], 4); }
    // 0da618  jne 0xda627
    X86_AT(c, 0xda618u);
    if (x86_cc(c, 5)) { goto L_da627; }
    X86_TICK(c, 9);
    // 0da61a  push edi
    X86_AT(c, 0xda61au);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0da61b  call 0xda568
    X86_AT(c, 0xda61bu);
    push32(c, 0xda620u); x86_call_known(c, 0xda568u, f_000da568); X86_RET(c, 0xda620u);
    X86_TICK(c, 9);
    // 0da620  push edi
    X86_AT(c, 0xda620u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0da621  call 0xda440
    X86_AT(c, 0xda621u);
    push32(c, 0xda626u); x86_call_known(c, 0xda440u, f_000da440); X86_RET(c, 0xda626u);
    X86_TICK(c, 3);
    // 0da626  xchg esi, eax
    X86_AT(c, 0xda626u);
    { uint32_t t = c.r[6]; c.r[6] = c.r[0]; c.r[0] = t; }
L_da627:
    X86_TICK(c, 7);
    // 0da627  and esi, esi
    X86_AT(c, 0xda627u);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & c.r[6], 4); }
    // 0da629  je 0xda6bb
    X86_AT(c, 0xda629u);
    if (x86_cc(c, 4)) { goto L_da6bb; }
    X86_TICK(c, 9);
    // 0da62f  push esi
    X86_AT(c, 0xda62fu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0da630  call 0xda33c
    X86_AT(c, 0xda630u);
    push32(c, 0xda635u); x86_call_known(c, 0xda33cu, f_000da33c); X86_RET(c, 0xda635u);
    X86_TICK(c, 15);
    // 0da635  mov eax, dword ptr [esi + 8]
    X86_AT(c, 0xda635u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0x8u)));
    // 0da638  sub eax, edi
    X86_AT(c, 0xda638u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[7], 0, 4); }
    // 0da63a  mov dword ptr [ebp - 8], eax
    X86_AT(c, 0xda63au);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), c.r[0]);
    // 0da63d  cmp eax, 0x10
    X86_AT(c, 0xda63du);
    (void)x86_sub(c, c.r[0], 0x10u, 0, 4);
    // 0da640  ja 0xda64c
    X86_AT(c, 0xda640u);
    if (x86_cc(c, 7)) { goto L_da64c; }
    X86_TICK(c, 6);
    // 0da642  mov edi, dword ptr [esi + 8]
    X86_AT(c, 0xda642u);
    c.r[7] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0x8u)));
    // 0da645  mov dword ptr [ebp - 8], 0
    X86_AT(c, 0xda645u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), 0x0u);
L_da64c:
    X86_TICK(c, 37);
    // 0da64c  mov dword ptr [esi + 8], edi
    X86_AT(c, 0xda64cu);
    wr32((c.sbase[3] + (uint32_t)(c.r[6] + 0x8u)), c.r[7]);
    // 0da64f  lea eax, [edi - 0x10]
    X86_AT(c, 0xda64fu);
    c.r[0] = (uint32_t)(c.r[7] + 0xFFFFFFF0u);
    // 0da652  mov dword ptr [0xb4830], eax
    X86_AT(c, 0xda652u);
    wr32((c.sbase[3] + (uint32_t)(0xB4830u)), c.r[0]);
    // 0da657  mov byte ptr [esi + 0xf], 0x44
    X86_AT(c, 0xda657u);
    wr8((c.sbase[3] + (uint32_t)(c.r[6] + 0xFu)), 0x44u);
    // 0da65b  mov ax, word ptr [0xb484c]
    X86_AT(c, 0xda65bu);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(0xB484Cu))));
    // 0da661  mov word ptr [esi + 0xc], ax
    X86_AT(c, 0xda661u);
    wr16((c.sbase[3] + (uint32_t)(c.r[6] + 0xCu)), (c.r[0] & 0xFFFFu));
    // 0da665  mov al, byte ptr [ebp + 0xc]
    X86_AT(c, 0xda665u);
    s8(c, 0, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))));
    // 0da668  mov byte ptr [esi + 0xe], al
    X86_AT(c, 0xda668u);
    wr8((c.sbase[3] + (uint32_t)(c.r[6] + 0xEu)), g8(c, 0));
    // 0da66b  lea eax, [esi + 0x10]
    X86_AT(c, 0xda66bu);
    c.r[0] = (uint32_t)(c.r[6] + 0x10u);
    // 0da66e  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0xda66eu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
    // 0da671  push eax
    X86_AT(c, 0xda671u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0da672  mov ecx, dword ptr [ebp + 0x14]
    X86_AT(c, 0xda672u);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x14u)));
    // 0da675  call dword ptr [ebp + 0x10]
    X86_AT(c, 0xda675u);
    { uint32_t t = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u))); push32(c, 0xda678u); x86_call(c, t); X86_RET(c, 0xda678u); }
    X86_TICK(c, 11);
    // 0da678  mov eax, dword ptr [ebp - 8]
    X86_AT(c, 0xda678u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)));
    // 0da67b  and eax, eax
    X86_AT(c, 0xda67bu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0da67d  jbe 0xda6c2
    X86_AT(c, 0xda67du);
    if (x86_cc(c, 6)) { goto L_da6c2; }
    X86_TICK(c, 37);
    // 0da67f  lea ebx, [edi + esi*1]
    X86_AT(c, 0xda67fu);
    c.r[3] = (uint32_t)(c.r[7] + c.r[6]);
    // 0da682  mov edx, dword ptr [esi]
    X86_AT(c, 0xda682u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[6])));
    // 0da684  mov dword ptr [ebx], edx
    X86_AT(c, 0xda684u);
    wr32((c.sbase[3] + (uint32_t)(c.r[3])), c.r[2]);
    // 0da686  mov dword ptr [esi], ebx
    X86_AT(c, 0xda686u);
    wr32((c.sbase[3] + (uint32_t)(c.r[6])), c.r[3]);
    // 0da688  mov dword ptr [ebx + 4], esi
    X86_AT(c, 0xda688u);
    wr32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)), c.r[6]);
    // 0da68b  mov dword ptr [ebx + 8], eax
    X86_AT(c, 0xda68bu);
    wr32((c.sbase[3] + (uint32_t)(c.r[3] + 0x8u)), c.r[0]);
    // 0da68e  mov byte ptr [ebx + 0xf], 0x55
    X86_AT(c, 0xda68eu);
    wr8((c.sbase[3] + (uint32_t)(c.r[3] + 0xFu)), 0x55u);
    // 0da692  mov byte ptr [ebx + 0xe], 0
    X86_AT(c, 0xda692u);
    wr8((c.sbase[3] + (uint32_t)(c.r[3] + 0xEu)), 0x0u);
    // 0da696  mov dx, word ptr [0xb484c]
    X86_AT(c, 0xda696u);
    s16(c, 2, rd16((c.sbase[3] + (uint32_t)(0xB484Cu))));
    // 0da69d  mov word ptr [ebx + 0xc], dx
    X86_AT(c, 0xda69du);
    wr16((c.sbase[3] + (uint32_t)(c.r[3] + 0xCu)), (c.r[2] & 0xFFFFu));
    // 0da6a1  mov dword ptr [ebx + eax*1 + 4], ebx
    X86_AT(c, 0xda6a1u);
    wr32((c.sbase[3] + (uint32_t)(c.r[3] + c.r[0] + 0x4u)), c.r[3]);
    // 0da6a5  cmp esi, dword ptr [0xb4828]
    X86_AT(c, 0xda6a5u);
    (void)x86_sub(c, c.r[6], rd32((c.sbase[3] + (uint32_t)(0xB4828u))), 0, 4);
    // 0da6ab  jne 0xda6b3
    X86_AT(c, 0xda6abu);
    if (x86_cc(c, 5)) { goto L_da6b3; }
    X86_TICK(c, 2);
    // 0da6ad  mov dword ptr [0xb4828], ebx
    X86_AT(c, 0xda6adu);
    wr32((c.sbase[3] + (uint32_t)(0xB4828u)), c.r[3]);
L_da6b3:
    X86_TICK(c, 9);
    // 0da6b3  push ebx
    X86_AT(c, 0xda6b3u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0da6b4  call 0xda390
    X86_AT(c, 0xda6b4u);
    push32(c, 0xda6b9u); x86_call_known(c, 0xda390u, f_000da390); X86_RET(c, 0xda6b9u);
    X86_TICK(c, 7);
    // 0da6b9  jmp 0xda6c2
    X86_AT(c, 0xda6b9u);
    goto L_da6c2;
L_da6bb:
    X86_TICK(c, 2);
    // 0da6bb  mov dword ptr [ebp - 4], 0
    X86_AT(c, 0xda6bbu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), 0x0u);
L_da6c2:
    X86_TICK(c, 12);
    // 0da6c2  cmp byte ptr [0xb4818], 0
    X86_AT(c, 0xda6c2u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0xB4818u))), 0x0u, 0, 1);
    // 0da6c9  je 0xda6d0
    X86_AT(c, 0xda6c9u);
    if (x86_cc(c, 4)) { goto L_da6d0; }
    X86_TICK(c, 7);
    // 0da6cb  call 0xda82c
    X86_AT(c, 0xda6cbu);
    push32(c, 0xda6d0u); x86_call_known(c, 0xda82cu, f_000da82c); X86_RET(c, 0xda6d0u);
L_da6d0:
    X86_TICK(c, 4);
    // 0da6d0  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0xda6d0u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
L_da6d3:
    X86_TICK(c, 28);
    // 0da6d3  pop edi
    X86_AT(c, 0xda6d3u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0da6d4  pop esi
    X86_AT(c, 0xda6d4u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0da6d5  pop ebx
    X86_AT(c, 0xda6d5u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0da6d6  leave 
    X86_AT(c, 0xda6d6u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0da6d7  ret 0x10
    X86_AT(c, 0xda6d7u);
    c.eip = pop32(c); c.r[4] += 0x10u; return;
    x86_fault(c, 0xda5d4u, "ran off the end of a function");
}
void f_000da6dc(X86Cpu& c) {
    X86_TICK(c, 22);
    // 0da6dc  push ebp
    X86_AT(c, 0xda6dcu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0da6dd  mov ebp, esp
    X86_AT(c, 0xda6ddu);
    c.r[5] = c.r[4];
    // 0da6df  push ecx
    X86_AT(c, 0xda6dfu);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 0da6e0  leave 
    X86_AT(c, 0xda6e0u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0da6e1  ret 4
    X86_AT(c, 0xda6e1u);
    c.eip = pop32(c); c.r[4] += 0x4u; return;
    x86_fault(c, 0xda6dcu, "ran off the end of a function");
}
void f_000da6ec(X86Cpu& c) {
    X86_TICK(c, 29);
    // 0da6ec  enter 4, 0
    X86_AT(c, 0xda6ecu);
    x86_enter(c, 0x4u, 0x0u, 4);
    // 0da6f0  push edi
    X86_AT(c, 0xda6f0u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0da6f1  push ebp
    X86_AT(c, 0xda6f1u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0da6f2  push 0xda6dc
    X86_AT(c, 0xda6f2u);
    { uint32_t v = 0xDA6DCu; push32(c, v); }
    // 0da6f7  push dword ptr [ebp + 8]
    X86_AT(c, 0xda6f7u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, v); }
    // 0da6fa  push dword ptr [ebp + 0xc]
    X86_AT(c, 0xda6fau);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))); push32(c, v); }
    // 0da6fd  call 0xda5d4
    X86_AT(c, 0xda6fdu);
    push32(c, 0xda702u); x86_call_known(c, 0xda5d4u, f_000da5d4); X86_RET(c, 0xda702u);
    X86_TICK(c, 14);
    // 0da702  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0xda702u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
    // 0da705  cmp byte ptr [0xb481a], 0
    X86_AT(c, 0xda705u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0xB481Au))), 0x0u, 0, 1);
    // 0da70c  je 0xda728
    X86_AT(c, 0xda70cu);
    if (x86_cc(c, 4)) { goto L_da728; }
    X86_TICK(c, 7);
    // 0da70e  and eax, eax
    X86_AT(c, 0xda70eu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0da710  je 0xda728
    X86_AT(c, 0xda710u);
    if (x86_cc(c, 4)) { goto L_da728; }
    X86_TICK(c, 11);
    // 0da712  mov edx, dword ptr [0xb4830]
    X86_AT(c, 0xda712u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(0xB4830u)));
    // 0da718  and edx, edx
    X86_AT(c, 0xda718u);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & c.r[2], 4); }
    // 0da71a  jbe 0xda728
    X86_AT(c, 0xda71au);
    if (x86_cc(c, 6)) { goto L_da728; }
    X86_TICK(c, 17);
    // 0da71c  mov al, byte ptr [0xb4819]
    X86_AT(c, 0xda71cu);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(0xB4819u))));
    // 0da721  mov ecx, edx
    X86_AT(c, 0xda721u);
    c.r[1] = c.r[2];
    // 0da723  mov edi, dword ptr [ebp - 4]
    X86_AT(c, 0xda723u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0da726  stosb byte ptr es:[edi], al
    X86_AT(c, 0xda726u);
    x86_string(c, 2, 1, 243, 4, 3);
L_da728:
    X86_TICK(c, 24);
    // 0da728  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0xda728u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0da72b  pop edi
    X86_AT(c, 0xda72bu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0da72c  leave 
    X86_AT(c, 0xda72cu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0da72d  ret 8
    X86_AT(c, 0xda72du);
    c.eip = pop32(c); c.r[4] += 0x8u; return;
    x86_fault(c, 0xda6ecu, "ran off the end of a function");
}
void f_000da738(X86Cpu& c) {
    X86_TICK(c, 22);
    // 0da738  push ebp
    X86_AT(c, 0xda738u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0da739  mov ebp, esp
    X86_AT(c, 0xda739u);
    c.r[5] = c.r[4];
    // 0da73b  push dword ptr [ebp + 8]
    X86_AT(c, 0xda73bu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, v); }
    // 0da73e  mov ax, word ptr [0xb481c]
    X86_AT(c, 0xda73eu);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(0xB481Cu))));
    // 0da744  push eax
    X86_AT(c, 0xda744u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0da745  call 0xda6ec
    X86_AT(c, 0xda745u);
    push32(c, 0xda74au); x86_call_known(c, 0xda6ecu, f_000da6ec); X86_RET(c, 0xda74au);
    X86_TICK(c, 16);
    // 0da74a  leave 
    X86_AT(c, 0xda74au);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0da74b  ret 4
    X86_AT(c, 0xda74bu);
    c.eip = pop32(c); c.r[4] += 0x4u; return;
    x86_fault(c, 0xda738u, "ran off the end of a function");
}
void f_000da754(X86Cpu& c) {
    X86_TICK(c, 26);
    // 0da754  push ebp
    X86_AT(c, 0xda754u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0da755  mov ebp, esp
    X86_AT(c, 0xda755u);
    c.r[5] = c.r[4];
    // 0da757  push ecx
    X86_AT(c, 0xda757u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 0da758  push ebx
    X86_AT(c, 0xda758u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0da759  mov ebx, dword ptr [ebp - 4]
    X86_AT(c, 0xda759u);
    c.r[3] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0da75c  push dword ptr [ebx + 8]
    X86_AT(c, 0xda75cu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x8u))); push32(c, v); }
    // 0da75f  push 6
    X86_AT(c, 0xda75fu);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0da761  call 0xdbe00
    X86_AT(c, 0xda761u);
    push32(c, 0xda766u); x86_call_known(c, 0xdbe00u, f_000dbe00); X86_RET(c, 0xda766u);
    X86_TICK(c, 9);
    // 0da766  mov ebp, ebx
    X86_AT(c, 0xda766u);
    c.r[5] = c.r[3];
    // 0da768  jmp 0xda80c
    X86_AT(c, 0xda768u);
    goto L_da80c;
L_da80c:
    X86_TICK(c, 30);
    // 0da80c  lea esp, [ebp - 0x10]
    X86_AT(c, 0xda80cu);
    c.r[4] = (uint32_t)(c.r[5] + 0xFFFFFFF0u);
    // 0da80f  pop edi
    X86_AT(c, 0xda80fu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0da810  pop esi
    X86_AT(c, 0xda810u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0da811  pop ebx
    X86_AT(c, 0xda811u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0da812  leave 
    X86_AT(c, 0xda812u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0da813  ret 4
    X86_AT(c, 0xda813u);
    c.eip = pop32(c); c.r[4] += 0x4u; return;
    x86_fault(c, 0xda754u, "ran off the end of a function");
}
void f_000da772(X86Cpu& c) {
    X86_TICK(c, 24);
    // 0da772  enter 4, 0
    X86_AT(c, 0xda772u);
    x86_enter(c, 0x4u, 0x0u, 4);
    // 0da776  push ebx
    X86_AT(c, 0xda776u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0da777  push esi
    X86_AT(c, 0xda777u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0da778  push edi
    X86_AT(c, 0xda778u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0da779  cmp dword ptr [ebp + 8], 0
    X86_AT(c, 0xda779u);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))), 0x0u, 0, 4);
    // 0da77d  je 0xda80f
    X86_AT(c, 0xda77du);
    if (x86_cc(c, 4)) { goto L_da80f; }
    X86_TICK(c, 25);
    // 0da783  add dword ptr [ebp + 8], 0xfffffff0
    X86_AT(c, 0xda783u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0xFFFFFFF0u, 0, 4)); }
    // 0da787  mov eax, dword ptr [ebp + 8]
    X86_AT(c, 0xda787u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0da78a  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0xda78au);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
    // 0da78d  cmp byte ptr [0xb4818], 0
    X86_AT(c, 0xda78du);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0xB4818u))), 0x0u, 0, 1);
    // 0da794  je 0xda79b
    X86_AT(c, 0xda794u);
    if (x86_cc(c, 4)) { goto L_da79b; }
    X86_TICK(c, 7);
    // 0da796  call 0xda82c
    X86_AT(c, 0xda796u);
    push32(c, 0xda79bu); x86_call_known(c, 0xda82cu, f_000da82c); X86_RET(c, 0xda79bu);
L_da79b:
    X86_TICK(c, 16);
    // 0da79b  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0xda79bu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0da79e  cmp byte ptr [eax + 0xf], 0x44
    X86_AT(c, 0xda79eu);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[0] + 0xFu))), 0x44u, 0, 1);
    // 0da7a2  jne 0xda7b2
    X86_AT(c, 0xda7a2u);
    if (x86_cc(c, 5)) { goto L_da7b2; }
    X86_TICK(c, 15);
    // 0da7a4  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0xda7a4u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0da7a7  mov edx, dword ptr [eax]
    X86_AT(c, 0xda7a7u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[0])));
    // 0da7a9  and edx, edx
    X86_AT(c, 0xda7a9u);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & c.r[2], 4); }
    // 0da7ab  je 0xda7b9
    X86_AT(c, 0xda7abu);
    if (x86_cc(c, 4)) { goto L_da7b9; }
    X86_TICK(c, 11);
    // 0da7ad  cmp eax, dword ptr [edx + 4]
    X86_AT(c, 0xda7adu);
    (void)x86_sub(c, c.r[0], rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0x4u))), 0, 4);
    // 0da7b0  je 0xda7b9
    X86_AT(c, 0xda7b0u);
    if (x86_cc(c, 4)) { goto L_da7b9; }
L_da7b2:
    X86_TICK(c, 9);
    // 0da7b2  mov ecx, ebp
    X86_AT(c, 0xda7b2u);
    c.r[1] = c.r[5];
    // 0da7b4  call 0xda754
    X86_AT(c, 0xda7b4u);
    push32(c, 0xda7b9u); x86_call_known(c, 0xda754u, f_000da754); X86_RET(c, 0xda7b9u);
L_da7b9:
    X86_TICK(c, 15);
    // 0da7b9  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0xda7b9u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0da7bc  mov byte ptr [eax + 0xf], 0x55
    X86_AT(c, 0xda7bcu);
    wr8((c.sbase[3] + (uint32_t)(c.r[0] + 0xFu)), 0x55u);
    // 0da7c0  push eax
    X86_AT(c, 0xda7c0u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0da7c1  call 0xda390
    X86_AT(c, 0xda7c1u);
    push32(c, 0xda7c6u); x86_call_known(c, 0xda390u, f_000da390); X86_RET(c, 0xda7c6u);
    X86_TICK(c, 16);
    // 0da7c6  mov eax, dword ptr [0xb4828]
    X86_AT(c, 0xda7c6u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xB4828u)));
    // 0da7cb  cmp byte ptr [eax + 0xf], 0x55
    X86_AT(c, 0xda7cbu);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[0] + 0xFu))), 0x55u, 0, 1);
    // 0da7cf  jne 0xda7fe
    X86_AT(c, 0xda7cfu);
    if (x86_cc(c, 5)) { goto L_da7fe; }
    X86_TICK(c, 28);
    // 0da7d1  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0xda7d1u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
    // 0da7d4  mov edx, dword ptr [eax + 8]
    X86_AT(c, 0xda7d4u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0x8u)));
    // 0da7d7  neg edx
    X86_AT(c, 0xda7d7u);
    { uint32_t v = c.r[2]; c.r[2] = x86_neg(c, v, 4); }
    // 0da7d9  add dword ptr [0xb482c], edx
    X86_AT(c, 0xda7d9u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xB482Cu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[2], 0, 4)); }
    // 0da7df  mov eax, dword ptr [eax + 4]
    X86_AT(c, 0xda7dfu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0x4u)));
    // 0da7e2  mov dword ptr [0xb4828], eax
    X86_AT(c, 0xda7e2u);
    wr32((c.sbase[3] + (uint32_t)(0xB4828u)), c.r[0]);
    // 0da7e7  and eax, eax
    X86_AT(c, 0xda7e7u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0da7e9  je 0xda7f1
    X86_AT(c, 0xda7e9u);
    if (x86_cc(c, 4)) { goto L_da7f1; }
    X86_TICK(c, 2);
    // 0da7eb  mov dword ptr [eax], 0
    X86_AT(c, 0xda7ebu);
    wr32((c.sbase[3] + (uint32_t)(c.r[0])), 0x0u);
L_da7f1:
    X86_TICK(c, 12);
    // 0da7f1  push dword ptr [ebp - 4]
    X86_AT(c, 0xda7f1u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))); push32(c, v); }
    // 0da7f4  call 0xda33c
    X86_AT(c, 0xda7f4u);
    push32(c, 0xda7f9u); x86_call_known(c, 0xda33cu, f_000da33c); X86_RET(c, 0xda7f9u);
    X86_TICK(c, 7);
    // 0da7f9  call 0xda498
    X86_AT(c, 0xda7f9u);
    push32(c, 0xda7feu); x86_call_known(c, 0xda498u, f_000da498); X86_RET(c, 0xda7feu);
L_da7fe:
    X86_TICK(c, 12);
    // 0da7fe  cmp byte ptr [0xb4818], 0
    X86_AT(c, 0xda7feu);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0xB4818u))), 0x0u, 0, 1);
    // 0da805  je 0xda80c
    X86_AT(c, 0xda805u);
    if (x86_cc(c, 4)) { goto L_da80c; }
    X86_TICK(c, 7);
    // 0da807  call 0xda82c
    X86_AT(c, 0xda807u);
    push32(c, 0xda80cu); x86_call_known(c, 0xda82cu, f_000da82c); X86_RET(c, 0xda80cu);
L_da80c:
    X86_TICK(c, 2);
    // 0da80c  lea esp, [ebp - 0x10]
    X86_AT(c, 0xda80cu);
    c.r[4] = (uint32_t)(c.r[5] + 0xFFFFFFF0u);
L_da80f:
    X86_TICK(c, 28);
    // 0da80f  pop edi
    X86_AT(c, 0xda80fu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0da810  pop esi
    X86_AT(c, 0xda810u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0da811  pop ebx
    X86_AT(c, 0xda811u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0da812  leave 
    X86_AT(c, 0xda812u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0da813  ret 4
    X86_AT(c, 0xda813u);
    c.eip = pop32(c); c.r[4] += 0x4u; return;
    x86_fault(c, 0xda772u, "ran off the end of a function");
}
void f_000da82c(X86Cpu& c) {
    X86_TICK(c, 15);
    // 0da82c  push ebp
    X86_AT(c, 0xda82cu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0da82d  mov ebp, esp
    X86_AT(c, 0xda82du);
    c.r[5] = c.r[4];
    // 0da82f  push ebp
    X86_AT(c, 0xda82fu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0da830  push 0xda844
    X86_AT(c, 0xda830u);
    { uint32_t v = 0xDA844u; push32(c, v); }
    // 0da835  call 0xda270
    X86_AT(c, 0xda835u);
    push32(c, 0xda83au); x86_call_known(c, 0xda270u, f_000da270); X86_RET(c, 0xda83au);
    X86_TICK(c, 16);
    // 0da83a  leave 
    X86_AT(c, 0xda83au);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0da83b  ret 
    X86_AT(c, 0xda83bu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xda82cu, "ran off the end of a function");
}
void f_000da844(X86Cpu& c) {
    X86_TICK(c, 22);
    // 0da844  push ebp
    X86_AT(c, 0xda844u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0da845  mov ebp, esp
    X86_AT(c, 0xda845u);
    c.r[5] = c.r[4];
    // 0da847  push ecx
    X86_AT(c, 0xda847u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 0da848  leave 
    X86_AT(c, 0xda848u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0da849  ret 4
    X86_AT(c, 0xda849u);
    c.eip = pop32(c); c.r[4] += 0x4u; return;
    x86_fault(c, 0xda844u, "ran off the end of a function");
}
void f_000da84c(X86Cpu& c) {
    X86_TICK(c, 13);
    // 0da84c  inc byte ptr [0xb4851]
    X86_AT(c, 0xda84cu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xB4851u)); uint32_t v = rd8(ea); wr8(ea, x86_inc(c, v, 1)); }
    // 0da852  call 0xdbdd8
    X86_AT(c, 0xda852u);
    push32(c, 0xda857u); x86_call_known(c, 0xdbdd8u, f_000dbdd8); X86_RET(c, 0xda857u);
    X86_TICK(c, 7);
    // 0da857  call 0xda0c4
    X86_AT(c, 0xda857u);
    push32(c, 0xda85cu); x86_call_known(c, 0xda0c4u, f_000da0c4); X86_RET(c, 0xda85cu);
    X86_TICK(c, 7);
    // 0da85c  call 0xd9f80
    X86_AT(c, 0xda85cu);
    push32(c, 0xda861u); x86_call_known(c, 0xd9f80u, f_000d9f80); X86_RET(c, 0xda861u);
    X86_TICK(c, 7);
    // 0da861  call 0xd8ac1
    X86_AT(c, 0xda861u);
    push32(c, 0xda866u); x86_call_known(c, 0xd8ac1u, f_000d8ac1); X86_RET(c, 0xda866u);
    X86_TICK(c, 13);
    // 0da866  mov al, byte ptr [0xb4850]
    X86_AT(c, 0xda866u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(0xB4850u))));
    // 0da86b  push eax
    X86_AT(c, 0xda86bu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0da86c  call 0xda198
    X86_AT(c, 0xda86cu);
    push32(c, 0xda871u); x86_call_known(c, 0xda198u, f_000da198); X86_RET(c, 0xda871u);
    X86_TICK(c, 10);
    // 0da871  ret 
    X86_AT(c, 0xda871u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xda84cu, "ran off the end of a function");
}
void f_000da874(X86Cpu& c) {
    X86_TICK(c, 16);
    // 0da874  push ebp
    X86_AT(c, 0xda874u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0da875  mov ebp, esp
    X86_AT(c, 0xda875u);
    c.r[5] = c.r[4];
    // 0da877  cmp byte ptr [0xb4852], 0
    X86_AT(c, 0xda877u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0xB4852u))), 0x0u, 0, 1);
    // 0da87e  je 0xda88d
    X86_AT(c, 0xda87eu);
    if (x86_cc(c, 4)) { goto L_da88d; }
    X86_TICK(c, 13);
    // 0da880  mov al, byte ptr [0xb4850]
    X86_AT(c, 0xda880u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(0xB4850u))));
    // 0da885  push eax
    X86_AT(c, 0xda885u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0da886  call 0xda198
    X86_AT(c, 0xda886u);
    push32(c, 0xda88bu); x86_call_known(c, 0xda198u, f_000da198); X86_RET(c, 0xda88bu);
    X86_TICK(c, 7);
    // 0da88b  jmp 0xda894
    X86_AT(c, 0xda88bu);
    goto L_da894;
L_da88d:
    X86_TICK(c, 2);
    // 0da88d  mov byte ptr [0xb4852], 1
    X86_AT(c, 0xda88du);
    wr8((c.sbase[3] + (uint32_t)(0xB4852u)), 0x1u);
L_da894:
    X86_TICK(c, 13);
    // 0da894  mov al, byte ptr [ebp + 8]
    X86_AT(c, 0xda894u);
    s8(c, 0, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))));
    // 0da897  mov byte ptr [0xb4850], al
    X86_AT(c, 0xda897u);
    wr8((c.sbase[3] + (uint32_t)(0xB4850u)), g8(c, 0));
    // 0da89c  call 0xda84c
    X86_AT(c, 0xda89cu);
    push32(c, 0xda8a1u); x86_call_known(c, 0xda84cu, f_000da84c); X86_RET(c, 0xda8a1u);
    X86_TICK(c, 16);
    // 0da8a1  leave 
    X86_AT(c, 0xda8a1u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0da8a2  ret 4
    X86_AT(c, 0xda8a2u);
    c.eip = pop32(c); c.r[4] += 0x4u; return;
    x86_fault(c, 0xda874u, "ran off the end of a function");
}
void f_000da8a8(X86Cpu& c) {
    X86_TICK(c, 16);
    // 0da8a8  push ebp
    X86_AT(c, 0xda8a8u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0da8a9  mov ebp, esp
    X86_AT(c, 0xda8a9u);
    c.r[5] = c.r[4];
    // 0da8ab  push dword ptr [ebp + 0xc]
    X86_AT(c, 0xda8abu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))); push32(c, v); }
    // 0da8ae  call 0xda154
    X86_AT(c, 0xda8aeu);
    push32(c, 0xda8b3u); x86_call_known(c, 0xda154u, f_000da154); X86_RET(c, 0xda8b3u);
    X86_TICK(c, 23);
    // 0da8b3  mov eax, dword ptr [ebp + 0x10]
    X86_AT(c, 0xda8b3u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u)));
    // 0da8b6  mov dword ptr [0xb47f4], eax
    X86_AT(c, 0xda8b6u);
    wr32((c.sbase[3] + (uint32_t)(0xB47F4u)), c.r[0]);
    // 0da8bb  movzx eax, byte ptr [ebp + 8]
    X86_AT(c, 0xda8bbu);
    c.r[0] = rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0da8bf  mov dword ptr [0xb47f0], eax
    X86_AT(c, 0xda8bfu);
    wr32((c.sbase[3] + (uint32_t)(0xB47F0u)), c.r[0]);
    // 0da8c4  push 0x3f
    X86_AT(c, 0xda8c4u);
    { uint32_t v = 0x3Fu; push32(c, v); }
    // 0da8c6  call 0xda0e0
    X86_AT(c, 0xda8c6u);
    push32(c, 0xda8cbu); x86_call_known(c, 0xda0e0u, f_000da0e0); X86_RET(c, 0xda8cbu);
    X86_TICK(c, 20);
    // 0da8cb  mov eax, dword ptr [0xb47ec]
    X86_AT(c, 0xda8cbu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xB47ECu)));
    // 0da8d0  leave 
    X86_AT(c, 0xda8d0u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0da8d1  ret 0xc
    X86_AT(c, 0xda8d1u);
    c.eip = pop32(c); c.r[4] += 0xCu; return;
    x86_fault(c, 0xda8a8u, "ran off the end of a function");
}
void f_000da8d4(X86Cpu& c) {
    X86_TICK(c, 22);
    // 0da8d4  push ebp
    X86_AT(c, 0xda8d4u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0da8d5  mov ebp, esp
    X86_AT(c, 0xda8d5u);
    c.r[5] = c.r[4];
    // 0da8d7  push edi
    X86_AT(c, 0xda8d7u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0da8d8  mov edi, dword ptr [ebp + 0x10]
    X86_AT(c, 0xda8d8u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u)));
    // 0da8db  push dword ptr [ebp + 0xc]
    X86_AT(c, 0xda8dbu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))); push32(c, v); }
    // 0da8de  call 0xda154
    X86_AT(c, 0xda8deu);
    push32(c, 0xda8e3u); x86_call_known(c, 0xda154u, f_000da154); X86_RET(c, 0xda8e3u);
    X86_TICK(c, 19);
    // 0da8e3  mov dword ptr [0xb47f4], edi
    X86_AT(c, 0xda8e3u);
    wr32((c.sbase[3] + (uint32_t)(0xB47F4u)), c.r[7]);
    // 0da8e9  movzx eax, byte ptr [ebp + 8]
    X86_AT(c, 0xda8e9u);
    c.r[0] = rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0da8ed  mov dword ptr [0xb47f0], eax
    X86_AT(c, 0xda8edu);
    wr32((c.sbase[3] + (uint32_t)(0xB47F0u)), c.r[0]);
    // 0da8f2  push 0x40
    X86_AT(c, 0xda8f2u);
    { uint32_t v = 0x40u; push32(c, v); }
    // 0da8f4  call 0xda0e0
    X86_AT(c, 0xda8f4u);
    push32(c, 0xda8f9u); x86_call_known(c, 0xda0e0u, f_000da0e0); X86_RET(c, 0xda8f9u);
    X86_TICK(c, 11);
    // 0da8f9  cmp edi, dword ptr [0xb47ec]
    X86_AT(c, 0xda8f9u);
    (void)x86_sub(c, c.r[7], rd32((c.sbase[3] + (uint32_t)(0xB47ECu))), 0, 4);
    // 0da8ff  jbe 0xda914
    X86_AT(c, 0xda8ffu);
    if (x86_cc(c, 6)) { goto L_da914; }
    X86_TICK(c, 12);
    // 0da901  cmp word ptr [0xb47e6], 0
    X86_AT(c, 0xda901u);
    (void)x86_sub(c, rd16((c.sbase[3] + (uint32_t)(0xB47E6u))), 0x0u, 0, 2);
    // 0da909  jne 0xda914
    X86_AT(c, 0xda909u);
    if (x86_cc(c, 5)) { goto L_da914; }
    X86_TICK(c, 2);
    // 0da90b  mov word ptr [0xb47e6], 0x15
    X86_AT(c, 0xda90bu);
    wr16((c.sbase[3] + (uint32_t)(0xB47E6u)), 0x15u);
L_da914:
    X86_TICK(c, 24);
    // 0da914  mov eax, dword ptr [0xb47ec]
    X86_AT(c, 0xda914u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xB47ECu)));
    // 0da919  pop edi
    X86_AT(c, 0xda919u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0da91a  leave 
    X86_AT(c, 0xda91au);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0da91b  ret 0xc
    X86_AT(c, 0xda91bu);
    c.eip = pop32(c); c.r[4] += 0xCu; return;
    x86_fault(c, 0xda8d4u, "ran off the end of a function");
}
void f_000da938(X86Cpu& c) {
    X86_TICK(c, 23);
    // 0da938  push ebp
    X86_AT(c, 0xda938u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0da939  mov ebp, esp
    X86_AT(c, 0xda939u);
    c.r[5] = c.r[4];
    // 0da93b  movzx eax, byte ptr [ebp + 8]
    X86_AT(c, 0xda93bu);
    c.r[0] = rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0da93f  mov dword ptr [0xb47f0], eax
    X86_AT(c, 0xda93fu);
    wr32((c.sbase[3] + (uint32_t)(0xB47F0u)), c.r[0]);
    // 0da944  mov byte ptr [0xb47ec], 0
    X86_AT(c, 0xda944u);
    wr8((c.sbase[3] + (uint32_t)(0xB47ECu)), 0x0u);
    // 0da94b  push 0x44
    X86_AT(c, 0xda94bu);
    { uint32_t v = 0x44u; push32(c, v); }
    // 0da94d  call 0xda0e0
    X86_AT(c, 0xda94du);
    push32(c, 0xda952u); x86_call_known(c, 0xda0e0u, f_000da0e0); X86_RET(c, 0xda952u);
    X86_TICK(c, 12);
    // 0da952  test byte ptr [0xb47f8], 0x80
    X86_AT(c, 0xda952u);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(0xB47F8u))) & 0x80u, 1);
    // 0da959  jne 0xda95f
    X86_AT(c, 0xda959u);
    if (x86_cc(c, 5)) { goto L_da95f; }
    X86_TICK(c, 9);
    // 0da95b  sub eax, eax
    X86_AT(c, 0xda95bu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0da95d  jmp 0xda97b
    X86_AT(c, 0xda95du);
    goto L_da97b;
L_da95f:
    X86_TICK(c, 12);
    // 0da95f  test byte ptr [0xb47f8], 2
    X86_AT(c, 0xda95fu);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(0xB47F8u))) & 0x2u, 1);
    // 0da966  je 0xda96c
    X86_AT(c, 0xda966u);
    if (x86_cc(c, 4)) { goto L_da96c; }
    X86_TICK(c, 9);
    // 0da968  mov al, 2
    X86_AT(c, 0xda968u);
    s8(c, 0, 0x2u);
    // 0da96a  jmp 0xda97b
    X86_AT(c, 0xda96au);
    goto L_da97b;
L_da96c:
    X86_TICK(c, 12);
    // 0da96c  test byte ptr [0xb47f8], 1
    X86_AT(c, 0xda96cu);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(0xB47F8u))) & 0x1u, 1);
    // 0da973  je 0xda979
    X86_AT(c, 0xda973u);
    if (x86_cc(c, 4)) { goto L_da979; }
    X86_TICK(c, 9);
    // 0da975  mov al, 1
    X86_AT(c, 0xda975u);
    s8(c, 0, 0x1u);
    // 0da977  jmp 0xda97b
    X86_AT(c, 0xda977u);
    goto L_da97b;
L_da979:
    X86_TICK(c, 2);
    // 0da979  mov al, 4
    X86_AT(c, 0xda979u);
    s8(c, 0, 0x4u);
L_da97b:
    X86_TICK(c, 16);
    // 0da97b  leave 
    X86_AT(c, 0xda97bu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0da97c  ret 4
    X86_AT(c, 0xda97cu);
    c.eip = pop32(c); c.r[4] += 0x4u; return;
    x86_fault(c, 0xda938u, "ran off the end of a function");
}
void f_000da980(X86Cpu& c) {
    X86_TICK(c, 45);
    // 0da980  enter 4, 0
    X86_AT(c, 0xda980u);
    x86_enter(c, 0x4u, 0x0u, 4);
    // 0da984  movzx eax, byte ptr [ebp + 8]
    X86_AT(c, 0xda984u);
    c.r[0] = rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0da988  mov dword ptr [0xb47f0], eax
    X86_AT(c, 0xda988u);
    wr32((c.sbase[3] + (uint32_t)(0xB47F0u)), c.r[0]);
    // 0da98d  mov al, byte ptr [ebp + 0x10]
    X86_AT(c, 0xda98du);
    s8(c, 0, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u))));
    // 0da990  mov byte ptr [0xb47ec], al
    X86_AT(c, 0xda990u);
    wr8((c.sbase[3] + (uint32_t)(0xB47ECu)), g8(c, 0));
    // 0da995  movzx eax, word ptr [ebp + 0xe]
    X86_AT(c, 0xda995u);
    c.r[0] = rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0xEu)));
    // 0da999  mov dword ptr [0xb47f4], eax
    X86_AT(c, 0xda999u);
    wr32((c.sbase[3] + (uint32_t)(0xB47F4u)), c.r[0]);
    // 0da99e  movzx eax, word ptr [ebp + 0xc]
    X86_AT(c, 0xda99eu);
    c.r[0] = rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0da9a2  mov dword ptr [0xb47f8], eax
    X86_AT(c, 0xda9a2u);
    wr32((c.sbase[3] + (uint32_t)(0xB47F8u)), c.r[0]);
    // 0da9a7  push 0x42
    X86_AT(c, 0xda9a7u);
    { uint32_t v = 0x42u; push32(c, v); }
    // 0da9a9  call 0xda0e0
    X86_AT(c, 0xda9a9u);
    push32(c, 0xda9aeu); x86_call_known(c, 0xda0e0u, f_000da0e0); X86_RET(c, 0xda9aeu);
    X86_TICK(c, 32);
    // 0da9ae  mov ax, word ptr [0xb47f8]
    X86_AT(c, 0xda9aeu);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(0xB47F8u))));
    // 0da9b4  mov word ptr [ebp - 2], ax
    X86_AT(c, 0xda9b4u);
    wr16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFEu)), (c.r[0] & 0xFFFFu));
    // 0da9b8  mov ax, word ptr [0xb47ec]
    X86_AT(c, 0xda9b8u);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(0xB47ECu))));
    // 0da9be  mov word ptr [ebp - 4], ax
    X86_AT(c, 0xda9beu);
    wr16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), (c.r[0] & 0xFFFFu));
    // 0da9c2  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0xda9c2u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0da9c5  leave 
    X86_AT(c, 0xda9c5u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0da9c6  ret 0xc
    X86_AT(c, 0xda9c6u);
    c.eip = pop32(c); c.r[4] += 0xCu; return;
    x86_fault(c, 0xda980u, "ran off the end of a function");
}
void f_000da9cc(X86Cpu& c) {
    X86_TICK(c, 13);
    // 0da9cc  push ebp
    X86_AT(c, 0xda9ccu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0da9cd  mov ebp, esp
    X86_AT(c, 0xda9cdu);
    c.r[5] = c.r[4];
    // 0da9cf  push 0x2a
    X86_AT(c, 0xda9cfu);
    { uint32_t v = 0x2Au; push32(c, v); }
    // 0da9d1  call 0xda0e0
    X86_AT(c, 0xda9d1u);
    push32(c, 0xda9d6u); x86_call_known(c, 0xda0e0u, f_000da0e0); X86_RET(c, 0xda9d6u);
    X86_TICK(c, 50);
    // 0da9d6  mov ax, word ptr [0xb47f4]
    X86_AT(c, 0xda9d6u);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(0xB47F4u))));
    // 0da9dc  mov edx, dword ptr [ebp + 0x10]
    X86_AT(c, 0xda9dcu);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u)));
    // 0da9df  mov word ptr [edx], ax
    X86_AT(c, 0xda9dfu);
    wr16((c.sbase[3] + (uint32_t)(c.r[2])), (c.r[0] & 0xFFFFu));
    // 0da9e2  movzx eax, byte ptr [0xb47f8]
    X86_AT(c, 0xda9e2u);
    c.r[0] = rd8((c.sbase[3] + (uint32_t)(0xB47F8u)));
    // 0da9e9  mov edx, dword ptr [ebp + 8]
    X86_AT(c, 0xda9e9u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0da9ec  mov word ptr [edx], ax
    X86_AT(c, 0xda9ecu);
    wr16((c.sbase[3] + (uint32_t)(c.r[2])), (c.r[0] & 0xFFFFu));
    // 0da9ef  movzx eax, byte ptr [0xb47f9]
    X86_AT(c, 0xda9efu);
    c.r[0] = rd8((c.sbase[3] + (uint32_t)(0xB47F9u)));
    // 0da9f6  mov edx, dword ptr [ebp + 0xc]
    X86_AT(c, 0xda9f6u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0da9f9  mov word ptr [edx], ax
    X86_AT(c, 0xda9f9u);
    wr16((c.sbase[3] + (uint32_t)(c.r[2])), (c.r[0] & 0xFFFFu));
    // 0da9fc  leave 
    X86_AT(c, 0xda9fcu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0da9fd  ret 0xc
    X86_AT(c, 0xda9fdu);
    c.eip = pop32(c); c.r[4] += 0xCu; return;
    x86_fault(c, 0xda9ccu, "ran off the end of a function");
}
void f_000daa00(X86Cpu& c) {
    X86_TICK(c, 13);
    // 0daa00  push ebp
    X86_AT(c, 0xdaa00u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0daa01  mov ebp, esp
    X86_AT(c, 0xdaa01u);
    c.r[5] = c.r[4];
    // 0daa03  push 0x2c
    X86_AT(c, 0xdaa03u);
    { uint32_t v = 0x2Cu; push32(c, v); }
    // 0daa05  call 0xda0e0
    X86_AT(c, 0xdaa05u);
    push32(c, 0xdaa0au); x86_call_known(c, 0xda0e0u, f_000da0e0); X86_RET(c, 0xdaa0au);
    X86_TICK(c, 52);
    // 0daa0a  movzx eax, byte ptr [0xb47f5]
    X86_AT(c, 0xdaa0au);
    c.r[0] = rd8((c.sbase[3] + (uint32_t)(0xB47F5u)));
    // 0daa11  mov edx, dword ptr [ebp + 8]
    X86_AT(c, 0xdaa11u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0daa14  mov word ptr [edx], ax
    X86_AT(c, 0xdaa14u);
    wr16((c.sbase[3] + (uint32_t)(c.r[2])), (c.r[0] & 0xFFFFu));
    // 0daa17  movzx eax, byte ptr [0xb47f4]
    X86_AT(c, 0xdaa17u);
    c.r[0] = rd8((c.sbase[3] + (uint32_t)(0xB47F4u)));
    // 0daa1e  mov edx, dword ptr [ebp + 0xc]
    X86_AT(c, 0xdaa1eu);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0daa21  mov word ptr [edx], ax
    X86_AT(c, 0xdaa21u);
    wr16((c.sbase[3] + (uint32_t)(c.r[2])), (c.r[0] & 0xFFFFu));
    // 0daa24  movzx eax, byte ptr [0xb47f9]
    X86_AT(c, 0xdaa24u);
    c.r[0] = rd8((c.sbase[3] + (uint32_t)(0xB47F9u)));
    // 0daa2b  mov edx, dword ptr [ebp + 0x10]
    X86_AT(c, 0xdaa2bu);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u)));
    // 0daa2e  mov word ptr [edx], ax
    X86_AT(c, 0xdaa2eu);
    wr16((c.sbase[3] + (uint32_t)(c.r[2])), (c.r[0] & 0xFFFFu));
    // 0daa31  leave 
    X86_AT(c, 0xdaa31u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0daa32  ret 0xc
    X86_AT(c, 0xdaa32u);
    c.eip = pop32(c); c.r[4] += 0xCu; return;
    x86_fault(c, 0xdaa00u, "ran off the end of a function");
}
void f_000daa38(X86Cpu& c) {
    X86_TICK(c, 17);
    // 0daa38  enter 4, 0
    X86_AT(c, 0xdaa38u);
    x86_enter(c, 0x4u, 0x0u, 4);
    // 0daa3c  push edi
    X86_AT(c, 0xdaa3cu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0daa3d  push 0x2c
    X86_AT(c, 0xdaa3du);
    { uint32_t v = 0x2Cu; push32(c, v); }
    // 0daa3f  call 0xda0e0
    X86_AT(c, 0xdaa3fu);
    push32(c, 0xdaa44u); x86_call_known(c, 0xda0e0u, f_000da0e0); X86_RET(c, 0xdaa44u);
    X86_TICK(c, 96);
    // 0daa44  mov edi, 0xe10
    X86_AT(c, 0xdaa44u);
    c.r[7] = 0xE10u;
    // 0daa49  movzx ecx, byte ptr [0xb47f5]
    X86_AT(c, 0xdaa49u);
    c.r[1] = rd8((c.sbase[3] + (uint32_t)(0xB47F5u)));
    // 0daa50  imul edi, ecx
    X86_AT(c, 0xdaa50u);
    c.r[7] = x86_imul2(c, c.r[7], c.r[1], 4);
    // 0daa53  movzx eax, byte ptr [0xb47f4]
    X86_AT(c, 0xdaa53u);
    c.r[0] = rd8((c.sbase[3] + (uint32_t)(0xB47F4u)));
    // 0daa5a  lea eax, [eax + eax*4]
    X86_AT(c, 0xdaa5au);
    c.r[0] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0daa5d  lea eax, [eax*4]
    X86_AT(c, 0xdaa5du);
    c.r[0] = (uint32_t)(c.r[0] * 4);
    // 0daa64  lea eax, [eax + eax*2]
    X86_AT(c, 0xdaa64u);
    c.r[0] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0daa67  add eax, edi
    X86_AT(c, 0xdaa67u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, c.r[7], 0, 4); }
    // 0daa69  xchg edi, eax
    X86_AT(c, 0xdaa69u);
    { uint32_t t = c.r[7]; c.r[7] = c.r[0]; c.r[0] = t; }
    // 0daa6a  movzx eax, byte ptr [0xb47f9]
    X86_AT(c, 0xdaa6au);
    c.r[0] = rd8((c.sbase[3] + (uint32_t)(0xB47F9u)));
    // 0daa71  add edi, eax
    X86_AT(c, 0xdaa71u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, c.r[0], 0, 4); }
    // 0daa73  lea edi, [edi + edi*4]
    X86_AT(c, 0xdaa73u);
    c.r[7] = (uint32_t)(c.r[7] + c.r[7] * 4);
    // 0daa76  lea edi, [edi + edi*4]
    X86_AT(c, 0xdaa76u);
    c.r[7] = (uint32_t)(c.r[7] + c.r[7] * 4);
    // 0daa79  lea edi, [edi*4]
    X86_AT(c, 0xdaa79u);
    c.r[7] = (uint32_t)(c.r[7] * 4);
    // 0daa80  movzx eax, byte ptr [0xb47f8]
    X86_AT(c, 0xdaa80u);
    c.r[0] = rd8((c.sbase[3] + (uint32_t)(0xB47F8u)));
    // 0daa87  add eax, edi
    X86_AT(c, 0xdaa87u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, c.r[7], 0, 4); }
    // 0daa89  xchg edi, eax
    X86_AT(c, 0xdaa89u);
    { uint32_t t = c.r[7]; c.r[7] = c.r[0]; c.r[0] = t; }
    // 0daa8a  mov dword ptr [ebp - 4], edi
    X86_AT(c, 0xdaa8au);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[7]);
    // 0daa8d  mov eax, edi
    X86_AT(c, 0xdaa8du);
    c.r[0] = c.r[7];
    // 0daa8f  pop edi
    X86_AT(c, 0xdaa8fu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0daa90  leave 
    X86_AT(c, 0xdaa90u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0daa91  ret 
    X86_AT(c, 0xdaa91u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xdaa38u, "ran off the end of a function");
}
void f_000daa94(X86Cpu& c) {
    X86_TICK(c, 32);
    // 0daa94  esc 0xf, byte ptr [0xb4858]
    X86_AT(c, 0xdaa94u);
    // 0daa9a  wait 
    X86_AT(c, 0xdaa9au);
    // 0daa9b  mov ax, word ptr [0xb4858]
    X86_AT(c, 0xdaa9bu);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(0xB4858u))));
    // 0daaa1  and ax, 0xf3ff
    X86_AT(c, 0xdaaa1u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_logic(c, v & 0xF3FFu, 2)); }
    // 0daaa5  or eax, ecx
    X86_AT(c, 0xdaaa5u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v | c.r[1], 4); }
    // 0daaa7  mov word ptr [0xb4856], ax
    X86_AT(c, 0xdaaa7u);
    wr16((c.sbase[3] + (uint32_t)(0xB4856u)), (c.r[0] & 0xFFFFu));
    // 0daaad  esc 0xd, byte ptr [0xb4856]
    X86_AT(c, 0xdaaadu);
    // 0daab3  ret 
    X86_AT(c, 0xdaab3u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xdaa94u, "ran off the end of a function");
}
void f_000daab4(X86Cpu& c) {
    X86_TICK(c, 20);
    // 0daab4  push eax
    X86_AT(c, 0xdaab4u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0daab5  esc 0x3c, al
    X86_AT(c, 0xdaab5u);
    // 0daab7  wait 
    X86_AT(c, 0xdaab7u);
    // 0daab8  and ax, 0x4100
    X86_AT(c, 0xdaab8u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_logic(c, v & 0x4100u, 2)); }
    // 0daabc  cmp ax, 0x4000
    X86_AT(c, 0xdaabcu);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), 0x4000u, 0, 2);
    // 0daac0  je 0xdaac6
    X86_AT(c, 0xdaac0u);
    if (x86_cc(c, 4)) { goto L_daac6; }
    X86_TICK(c, 2);
    // 0daac2  cmp ax, 1
    X86_AT(c, 0xdaac2u);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), 0x1u, 0, 2);
L_daac6:
    X86_TICK(c, 14);
    // 0daac6  pop eax
    X86_AT(c, 0xdaac6u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 0daac7  ret 
    X86_AT(c, 0xdaac7u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xdaab4u, "ran off the end of a function");
}
void f_000daadd(X86Cpu& c) {
    X86_TICK(c, 27);
    // 0daadd  xor edx, edx
    X86_AT(c, 0xdaaddu);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v ^ c.r[2], 4); }
    // 0daadf  mov ecx, dword ptr [esp + 8]
    X86_AT(c, 0xdaadfu);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[4] + 0x8u)));
    // 0daae3  esc 0x1d, byte ptr [ecx]
    X86_AT(c, 0xdaae3u);
    // 0daae5  mov ecx, dword ptr [esp + 4]
    X86_AT(c, 0xdaae5u);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[4] + 0x4u)));
    // 0daae9  esc 0x1d, byte ptr [ecx]
    X86_AT(c, 0xdaae9u);
    // 0daaeb  mov eax, dword ptr cs:[edx + 0xdaad1]
    X86_AT(c, 0xdaaebu);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[2] + 0xDAAD1u)));
    // 0daaf2  call eax
    X86_AT(c, 0xdaaf2u);
    { uint32_t t = c.r[0]; push32(c, 0xdaaf4u); x86_call(c, t); X86_RET(c, 0xdaaf4u); }
    X86_TICK(c, 13);
    // 0daaf4  esc 0x1f, byte ptr [ecx]
    X86_AT(c, 0xdaaf4u);
    // 0daaf6  ret 8
    X86_AT(c, 0xdaaf6u);
    c.eip = pop32(c); c.r[4] += 0x8u; return;
    x86_fault(c, 0xdaaddu, "ran off the end of a function");
}
void f_000daaf9(X86Cpu& c) {
    goto L_daaf9;
L_daadf:
    X86_TICK(c, 25);
    // 0daadf  mov ecx, dword ptr [esp + 8]
    X86_AT(c, 0xdaadfu);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[4] + 0x8u)));
    // 0daae3  esc 0x1d, byte ptr [ecx]
    X86_AT(c, 0xdaae3u);
    // 0daae5  mov ecx, dword ptr [esp + 4]
    X86_AT(c, 0xdaae5u);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[4] + 0x4u)));
    // 0daae9  esc 0x1d, byte ptr [ecx]
    X86_AT(c, 0xdaae9u);
    // 0daaeb  mov eax, dword ptr cs:[edx + 0xdaad1]
    X86_AT(c, 0xdaaebu);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[2] + 0xDAAD1u)));
    // 0daaf2  call eax
    X86_AT(c, 0xdaaf2u);
    { uint32_t t = c.r[0]; push32(c, 0xdaaf4u); x86_call(c, t); X86_RET(c, 0xdaaf4u); }
    X86_TICK(c, 13);
    // 0daaf4  esc 0x1f, byte ptr [ecx]
    X86_AT(c, 0xdaaf4u);
    // 0daaf6  ret 8
    X86_AT(c, 0xdaaf6u);
    c.eip = pop32(c); c.r[4] += 0x8u; return;
L_daaf9:
    X86_TICK(c, 9);
    // 0daaf9  mov edx, 4
    X86_AT(c, 0xdaaf9u);
    c.r[2] = 0x4u;
    // 0daafe  jmp 0xdaadf
    X86_AT(c, 0xdaafeu);
    X86_POLL(c, 0xdaadfu); goto L_daadf;
    x86_fault(c, 0xdaaf9u, "ran off the end of a function");
}
void f_000dab00(X86Cpu& c) {
    goto L_dab00;
L_daadf:
    X86_TICK(c, 25);
    // 0daadf  mov ecx, dword ptr [esp + 8]
    X86_AT(c, 0xdaadfu);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[4] + 0x8u)));
    // 0daae3  esc 0x1d, byte ptr [ecx]
    X86_AT(c, 0xdaae3u);
    // 0daae5  mov ecx, dword ptr [esp + 4]
    X86_AT(c, 0xdaae5u);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[4] + 0x4u)));
    // 0daae9  esc 0x1d, byte ptr [ecx]
    X86_AT(c, 0xdaae9u);
    // 0daaeb  mov eax, dword ptr cs:[edx + 0xdaad1]
    X86_AT(c, 0xdaaebu);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[2] + 0xDAAD1u)));
    // 0daaf2  call eax
    X86_AT(c, 0xdaaf2u);
    { uint32_t t = c.r[0]; push32(c, 0xdaaf4u); x86_call(c, t); X86_RET(c, 0xdaaf4u); }
    X86_TICK(c, 13);
    // 0daaf4  esc 0x1f, byte ptr [ecx]
    X86_AT(c, 0xdaaf4u);
    // 0daaf6  ret 8
    X86_AT(c, 0xdaaf6u);
    c.eip = pop32(c); c.r[4] += 0x8u; return;
L_dab00:
    X86_TICK(c, 9);
    // 0dab00  mov edx, 8
    X86_AT(c, 0xdab00u);
    c.r[2] = 0x8u;
    // 0dab05  jmp 0xdaadf
    X86_AT(c, 0xdab05u);
    X86_POLL(c, 0xdaadfu); goto L_daadf;
    x86_fault(c, 0xdab00u, "ran off the end of a function");
}
void f_000dab07(X86Cpu& c) {
    X86_TICK(c, 24);
    // 0dab07  mov eax, dword ptr [esp + 4]
    X86_AT(c, 0xdab07u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[4] + 0x4u)));
    // 0dab0b  esc 0x1d, byte ptr [eax]
    X86_AT(c, 0xdab0bu);
    // 0dab0d  mov eax, dword ptr [esp + 8]
    X86_AT(c, 0xdab0du);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[4] + 0x8u)));
    // 0dab11  esc 0x1d, byte ptr [eax]
    X86_AT(c, 0xdab11u);
    // 0dab13  esc 0x33, cl
    X86_AT(c, 0xdab13u);
    // 0dab15  call 0xdab7a
    X86_AT(c, 0xdab15u);
    push32(c, 0xdab1au); x86_call_known(c, 0xdab7au, f_000dab7a); X86_RET(c, 0xdab1au);
    X86_TICK(c, 10);
    // 0dab1a  ret 8
    X86_AT(c, 0xdab1au);
    c.eip = pop32(c); c.r[4] += 0x8u; return;
    x86_fault(c, 0xdab07u, "ran off the end of a function");
}
void f_000dab43(X86Cpu& c) {
    X86_TICK(c, 13);
    // 0dab43  esc 8, byte ptr [esp + 4]
    X86_AT(c, 0xdab43u);
    // 0dab47  ret 4
    X86_AT(c, 0xdab47u);
    c.eip = pop32(c); c.r[4] += 0x4u; return;
    x86_fault(c, 0xdab43u, "ran off the end of a function");
}
void f_000dab5d(X86Cpu& c) {
    X86_TICK(c, 13);
    // 0dab5d  esc 0x28, byte ptr [esp + 4]
    X86_AT(c, 0xdab5du);
    // 0dab61  ret 8
    X86_AT(c, 0xdab61u);
    c.eip = pop32(c); c.r[4] += 0x8u; return;
    x86_fault(c, 0xdab5du, "ran off the end of a function");
}
void f_000dab64(X86Cpu& c) {
    X86_TICK(c, 23);
    // 0dab64  mov eax, dword ptr [esp + 4]
    X86_AT(c, 0xdab64u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[4] + 0x4u)));
    // 0dab68  esc 0x1f, byte ptr [eax]
    X86_AT(c, 0xdab68u);
    // 0dab6a  wait 
    X86_AT(c, 0xdab6au);
    // 0dab6b  ret 4
    X86_AT(c, 0xdab6bu);
    c.eip = pop32(c); c.r[4] += 0x4u; return;
    x86_fault(c, 0xdab64u, "ran off the end of a function");
}
void f_000dab6e(X86Cpu& c) {
    X86_TICK(c, 17);
    // 0dab6e  mov eax, dword ptr [esp + 4]
    X86_AT(c, 0xdab6eu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[4] + 0x4u)));
    // 0dab72  esc 0x1d, byte ptr [eax]
    X86_AT(c, 0xdab72u);
    // 0dab74  ret 4
    X86_AT(c, 0xdab74u);
    c.eip = pop32(c); c.r[4] += 0x4u; return;
    x86_fault(c, 0xdab6eu, "ran off the end of a function");
}
void f_000dab77(X86Cpu& c) {
    X86_TICK(c, 13);
    // 0dab77  esc 0x2b, al
    X86_AT(c, 0xdab77u);
    // 0dab79  ret 
    X86_AT(c, 0xdab79u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xdab77u, "ran off the end of a function");
}
void f_000dab7a(X86Cpu& c) {
    X86_TICK(c, 9);
    // 0dab7a  xor eax, eax
    X86_AT(c, 0xdab7au);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v ^ c.r[0], 4); }
    // 0dab7c  call 0xdaab4
    X86_AT(c, 0xdab7cu);
    push32(c, 0xdab81u); x86_call_known(c, 0xdaab4u, f_000daab4); X86_RET(c, 0xdab81u);
    X86_TICK(c, 5);
    // 0dab81  je 0xdab88
    X86_AT(c, 0xdab81u);
    if (x86_cc(c, 4)) { goto L_dab88; }
    X86_TICK(c, 5);
    // 0dab83  jb 0xdab87
    X86_AT(c, 0xdab83u);
    if (x86_cc(c, 2)) { goto L_dab87; }
    X86_TICK(c, 12);
    // 0dab85  inc eax
    X86_AT(c, 0xdab85u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0dab86  ret 
    X86_AT(c, 0xdab86u);
    c.eip = pop32(c); return;
L_dab87:
    X86_TICK(c, 2);
    // 0dab87  dec eax
    X86_AT(c, 0xdab87u);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
L_dab88:
    X86_TICK(c, 10);
    // 0dab88  ret 
    X86_AT(c, 0xdab88u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xdab7au, "ran off the end of a function");
}
void f_000dab91(X86Cpu& c) {
    X86_TICK(c, 9);
    // 0dab91  mov cx, 0xc00
    X86_AT(c, 0xdab91u);
    s16(c, 1, 0xC00u);
    // 0dab95  call 0xdaa94
    X86_AT(c, 0xdab95u);
    push32(c, 0xdab9au); x86_call_known(c, 0xdaa94u, f_000daa94); X86_RET(c, 0xdab9au);
    X86_TICK(c, 20);
    // 0dab9a  esc 0x3f, byte ptr [0xb485a]
    X86_AT(c, 0xdab9au);
    // 0daba0  esc 0xd, byte ptr [0xb4858]
    X86_AT(c, 0xdaba0u);
    // 0daba6  mov eax, dword ptr [0xb485a]
    X86_AT(c, 0xdaba6u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xB485Au)));
    // 0dabab  ret 
    X86_AT(c, 0xdababu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xdab91u, "ran off the end of a function");
}
void f_000dabb7(X86Cpu& c) {
    X86_TICK(c, 24);
    // 0dabb7  esc 0xc, ch
    X86_AT(c, 0xdabb7u);
    // 0dabb9  xor eax, eax
    X86_AT(c, 0xdabb9u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v ^ c.r[0], 4); }
    // 0dabbb  esc 0x3c, al
    X86_AT(c, 0xdabbbu);
    // 0dabbd  wait 
    X86_AT(c, 0xdabbdu);
    // 0dabbe  ret 
    X86_AT(c, 0xdabbeu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xdabb7u, "ran off the end of a function");
}
void f_000dabbf(X86Cpu& c) {
    X86_TICK(c, 23);
    // 0dabbf  mov eax, dword ptr [esp + 4]
    X86_AT(c, 0xdabbfu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[4] + 0x4u)));
    // 0dabc3  esc 0x3e, byte ptr [eax]
    X86_AT(c, 0xdabc3u);
    // 0dabc5  wait 
    X86_AT(c, 0xdabc5u);
    // 0dabc6  ret 4
    X86_AT(c, 0xdabc6u);
    c.eip = pop32(c); c.r[4] += 0x4u; return;
    x86_fault(c, 0xdabbfu, "ran off the end of a function");
}
void f_000dabd4(X86Cpu& c) {
    X86_TICK(c, 40);
    // 0dabd4  push ebp
    X86_AT(c, 0xdabd4u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0dabd5  mov ebp, esp
    X86_AT(c, 0xdabd5u);
    c.r[5] = c.r[4];
    // 0dabd7  push esi
    X86_AT(c, 0xdabd7u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0dabd8  push edi
    X86_AT(c, 0xdabd8u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0dabd9  push ebx
    X86_AT(c, 0xdabd9u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0dabda  mov esi, dword ptr [ebp + 8]
    X86_AT(c, 0xdabdau);
    c.r[6] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0dabdd  mov edi, dword ptr [ebp + 0xc]
    X86_AT(c, 0xdabddu);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0dabe0  movzx ecx, word ptr [ebp + 0x10]
    X86_AT(c, 0xdabe0u);
    c.r[1] = rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u)));
    // 0dabe4  sub eax, eax
    X86_AT(c, 0xdabe4u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0dabe6  cld 
    X86_AT(c, 0xdabe6u);
    c.fl &= ~X86_DF;
    // 0dabe7  cmpsb byte ptr [esi], byte ptr es:[edi]
    X86_AT(c, 0xdabe7u);
    x86_string(c, 1, 1, 243, 4, 3);
    // 0dabe9  jb 0xdabf0
    X86_AT(c, 0xdabe9u);
    if (x86_cc(c, 2)) { goto L_dabf0; }
    X86_TICK(c, 5);
    // 0dabeb  je 0xdabf1
    X86_AT(c, 0xdabebu);
    if (x86_cc(c, 4)) { goto L_dabf1; }
    X86_TICK(c, 9);
    // 0dabed  inc eax
    X86_AT(c, 0xdabedu);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0dabee  jmp 0xdabf1
    X86_AT(c, 0xdabeeu);
    goto L_dabf1;
L_dabf0:
    X86_TICK(c, 2);
    // 0dabf0  dec eax
    X86_AT(c, 0xdabf0u);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
L_dabf1:
    X86_TICK(c, 26);
    // 0dabf1  pop ebx
    X86_AT(c, 0xdabf1u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0dabf2  pop edi
    X86_AT(c, 0xdabf2u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0dabf3  pop esi
    X86_AT(c, 0xdabf3u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0dabf4  pop ebp
    X86_AT(c, 0xdabf4u);
    { uint32_t v = pop32(c); c.r[5] = v; }
    // 0dabf5  ret 0xc
    X86_AT(c, 0xdabf5u);
    c.eip = pop32(c); c.r[4] += 0xCu; return;
    x86_fault(c, 0xdabd4u, "ran off the end of a function");
}
void f_000dabf8(X86Cpu& c) {
    X86_TICK(c, 36);
    // 0dabf8  push ebp
    X86_AT(c, 0xdabf8u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0dabf9  mov ebp, esp
    X86_AT(c, 0xdabf9u);
    c.r[5] = c.r[4];
    // 0dabfb  push esi
    X86_AT(c, 0xdabfbu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0dabfc  mov eax, dword ptr [ebp + 0xc]
    X86_AT(c, 0xdabfcu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0dabff  mov edx, dword ptr [eax + 4]
    X86_AT(c, 0xdabffu);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0x4u)));
    // 0dac02  mov esi, edx
    X86_AT(c, 0xdac02u);
    c.r[6] = c.r[2];
    // 0dac04  shr esi, 0x14
    X86_AT(c, 0xdac04u);
    { uint32_t v = c.r[6]; bool w; uint32_t r = x86_shift(c, 5, v, 0x14u, 4, w); if (w) c.r[6] = r; }
    // 0dac07  mov ecx, dword ptr [eax]
    X86_AT(c, 0xdac07u);
    c.r[1] = rd32((c.sbase[3] + (uint32_t)(c.r[0])));
    // 0dac09  mov eax, dword ptr [ebp + 8]
    X86_AT(c, 0xdac09u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0dac0c  and si, 0x7ff
    X86_AT(c, 0xdac0cu);
    { uint32_t v = (c.r[6] & 0xFFFFu); s16(c, 6, x86_logic(c, v & 0x7FFu, 2)); }
    // 0dac11  cmp si, 0x7ff
    X86_AT(c, 0xdac11u);
    (void)x86_sub(c, (c.r[6] & 0xFFFFu), 0x7FFu, 0, 2);
    // 0dac16  je 0xdac5d
    X86_AT(c, 0xdac16u);
    if (x86_cc(c, 4)) { goto L_dac5d; }
    X86_TICK(c, 7);
    // 0dac18  and si, si
    X86_AT(c, 0xdac18u);
    { uint32_t v = (c.r[6] & 0xFFFFu); s16(c, 6, x86_logic(c, v & (c.r[6] & 0xFFFFu), 2)); }
    // 0dac1b  je 0xdac67
    X86_AT(c, 0xdac1bu);
    if (x86_cc(c, 4)) { goto L_dac67; }
    X86_TICK(c, 6);
    // 0dac1d  mov byte ptr [eax + 0xb], 0
    X86_AT(c, 0xdac1du);
    wr8((c.sbase[3] + (uint32_t)(c.r[0] + 0xBu)), 0x0u);
    // 0dac21  sub si, 0x3ff
    X86_AT(c, 0xdac21u);
    { uint32_t v = (c.r[6] & 0xFFFFu); s16(c, 6, x86_sub(c, v, 0x3FFu, 0, 2)); }
    // 0dac26  add si, 0x3fff
    X86_AT(c, 0xdac26u);
    { uint32_t v = (c.r[6] & 0xFFFFu); s16(c, 6, x86_add(c, v, 0x3FFFu, 0, 2)); }
L_dac2b:
    X86_TICK(c, 9);
    // 0dac2b  mov word ptr [eax + 8], si
    X86_AT(c, 0xdac2bu);
    wr16((c.sbase[3] + (uint32_t)(c.r[0] + 0x8u)), (c.r[6] & 0xFFFFu));
    // 0dac2f  test edx, 0x80000000
    X86_AT(c, 0xdac2fu);
    (void)x86_logic(c, c.r[2] & 0x80000000u, 4);
    // 0dac35  je 0xdac3d
    X86_AT(c, 0xdac35u);
    if (x86_cc(c, 4)) { goto L_dac3d; }
    X86_TICK(c, 9);
    // 0dac37  mov byte ptr [eax + 0xa], 1
    X86_AT(c, 0xdac37u);
    wr8((c.sbase[3] + (uint32_t)(c.r[0] + 0xAu)), 0x1u);
    // 0dac3b  jmp 0xdac41
    X86_AT(c, 0xdac3bu);
    goto L_dac41;
L_dac3d:
    X86_TICK(c, 2);
    // 0dac3d  mov byte ptr [eax + 0xa], 0
    X86_AT(c, 0xdac3du);
    wr8((c.sbase[3] + (uint32_t)(c.r[0] + 0xAu)), 0x0u);
L_dac41:
    X86_TICK(c, 13);
    // 0dac41  shld edx, ecx, 0xb
    X86_AT(c, 0xdac41u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_double(c, true, v, c.r[1], 0xBu, 4, w); if (w) c.r[2] = r; }
    // 0dac45  shl ecx, 0xb
    X86_AT(c, 0xdac45u);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 4, v, 0xBu, 4, w); if (w) c.r[1] = r; }
    // 0dac48  and si, si
    X86_AT(c, 0xdac48u);
    { uint32_t v = (c.r[6] & 0xFFFFu); s16(c, 6, x86_logic(c, v & (c.r[6] & 0xFFFFu), 2)); }
    // 0dac4b  je 0xdac53
    X86_AT(c, 0xdac4bu);
    if (x86_cc(c, 4)) { goto L_dac53; }
    X86_TICK(c, 2);
    // 0dac4d  or edx, 0x80000000
    X86_AT(c, 0xdac4du);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v | 0x80000000u, 4); }
L_dac53:
    X86_TICK(c, 22);
    // 0dac53  mov dword ptr [eax + 4], edx
    X86_AT(c, 0xdac53u);
    wr32((c.sbase[3] + (uint32_t)(c.r[0] + 0x4u)), c.r[2]);
    // 0dac56  mov dword ptr [eax], ecx
    X86_AT(c, 0xdac56u);
    wr32((c.sbase[3] + (uint32_t)(c.r[0])), c.r[1]);
    // 0dac58  pop esi
    X86_AT(c, 0xdac58u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0dac59  pop ebp
    X86_AT(c, 0xdac59u);
    { uint32_t v = pop32(c); c.r[5] = v; }
    // 0dac5a  ret 8
    X86_AT(c, 0xdac5au);
    c.eip = pop32(c); c.r[4] += 0x8u; return;
L_dac5d:
    X86_TICK(c, 11);
    // 0dac5d  mov si, 0x7fff
    X86_AT(c, 0xdac5du);
    s16(c, 6, 0x7FFFu);
    // 0dac61  mov byte ptr [eax + 0xb], 0
    X86_AT(c, 0xdac61u);
    wr8((c.sbase[3] + (uint32_t)(c.r[0] + 0xBu)), 0x0u);
    // 0dac65  jmp 0xdac2b
    X86_AT(c, 0xdac65u);
    X86_POLL(c, 0xdac2bu); goto L_dac2b;
L_dac67:
    X86_TICK(c, 9);
    // 0dac67  mov byte ptr [eax + 0xb], 1
    X86_AT(c, 0xdac67u);
    wr8((c.sbase[3] + (uint32_t)(c.r[0] + 0xBu)), 0x1u);
    // 0dac6b  jmp 0xdac2b
    X86_AT(c, 0xdac6bu);
    X86_POLL(c, 0xdac2bu); goto L_dac2b;
    x86_fault(c, 0xdabf8u, "ran off the end of a function");
}
void f_000dacf0(X86Cpu& c) {
    X86_TICK(c, 9);
    // 0dacf0  push 0x12a98
    X86_AT(c, 0xdacf0u);
    { uint32_t v = 0x12A98u; push32(c, v); }
    // 0dacf5  call 0xdbe98
    X86_AT(c, 0xdacf5u);
    push32(c, 0xdacfau); x86_call_known(c, 0xdbe98u, f_000dbe98); X86_RET(c, 0xdacfau);
    X86_TICK(c, 13);
    // 0dacfa  mov ax, word ptr [0xb4874]
    X86_AT(c, 0xdacfau);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(0xB4874u))));
    // 0dad00  push eax
    X86_AT(c, 0xdad00u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0dad01  call 0xdbe84
    X86_AT(c, 0xdad01u);
    push32(c, 0xdad06u); x86_call_known(c, 0xdbe84u, f_000dbe84); X86_RET(c, 0xdad06u);
    X86_TICK(c, 9);
    // 0dad06  push 1
    X86_AT(c, 0xdad06u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0dad08  call 0xda874
    X86_AT(c, 0xdad08u);
    push32(c, 0xdad0du); x86_call_known(c, 0xda874u, f_000da874); X86_RET(c, 0xdad0du);
    X86_TICK(c, 10);
    // 0dad0d  ret 
    X86_AT(c, 0xdad0du);
    c.eip = pop32(c); return;
    x86_fault(c, 0xdacf0u, "ran off the end of a function");
}
void f_000dad10(X86Cpu& c) {
    X86_TICK(c, 13);
    // 0dad10  mov eax, 0xb451c
    X86_AT(c, 0xdad10u);
    c.r[0] = 0xB451Cu;
    // 0dad15  cmp eax, dword ptr [0xb4528]
    X86_AT(c, 0xdad15u);
    (void)x86_sub(c, c.r[0], rd32((c.sbase[3] + (uint32_t)(0xB4528u))), 0, 4);
    // 0dad1b  ja 0xdad22
    X86_AT(c, 0xdad1bu);
    if (x86_cc(c, 7)) { goto L_dad22; }
    X86_TICK(c, 7);
    // 0dad1d  call 0xdacf0
    X86_AT(c, 0xdad1du);
    push32(c, 0xdad22u); x86_call_known(c, 0xdacf0u, f_000dacf0); X86_RET(c, 0xdad22u);
L_dad22:
    X86_TICK(c, 17);
    // 0dad22  add dword ptr [0xb4528], 0xc
    X86_AT(c, 0xdad22u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xB4528u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0xCu, 0, 4)); }
    // 0dad29  ret 
    X86_AT(c, 0xdad29u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xdad10u, "ran off the end of a function");
}
void f_000dad2c(X86Cpu& c) {
    X86_TICK(c, 17);
    // 0dad2c  add dword ptr [0xb4528], 0xfffffff4
    X86_AT(c, 0xdad2cu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xB4528u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0xFFFFFFF4u, 0, 4)); }
    // 0dad33  ret 
    X86_AT(c, 0xdad33u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xdad2cu, "ran off the end of a function");
}
void f_000dad34(X86Cpu& c) {
    X86_TICK(c, 41);
    // 0dad34  push ebp
    X86_AT(c, 0xdad34u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0dad35  mov ebp, esp
    X86_AT(c, 0xdad35u);
    c.r[5] = c.r[4];
    // 0dad37  push esi
    X86_AT(c, 0xdad37u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0dad38  push edi
    X86_AT(c, 0xdad38u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0dad39  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0xdad39u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0dad3c  mov ax, word ptr [edi]
    X86_AT(c, 0xdad3cu);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(c.r[7]))));
    // 0dad3f  or ax, word ptr [edi + 2]
    X86_AT(c, 0xdad3fu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_logic(c, v | rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x2u))), 2)); }
    // 0dad43  or ax, word ptr [edi + 4]
    X86_AT(c, 0xdad43u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_logic(c, v | rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x4u))), 2)); }
    // 0dad47  or ax, word ptr [edi + 6]
    X86_AT(c, 0xdad47u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_logic(c, v | rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x6u))), 2)); }
    // 0dad4b  and ax, ax
    X86_AT(c, 0xdad4bu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_logic(c, v & (c.r[0] & 0xFFFFu), 2)); }
    // 0dad4e  jne 0xdad5f
    X86_AT(c, 0xdad4eu);
    if (x86_cc(c, 5)) { goto L_dad5f; }
    X86_TICK(c, 15);
    // 0dad50  sub eax, eax
    X86_AT(c, 0xdad50u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0dad52  mov word ptr [edi + 8], ax
    X86_AT(c, 0xdad52u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x8u)), (c.r[0] & 0xFFFFu));
    // 0dad56  mov byte ptr [edi + 0xb], 1
    X86_AT(c, 0xdad56u);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0xBu)), 0x1u);
    // 0dad5a  mov byte ptr [edi + 0xa], al
    X86_AT(c, 0xdad5au);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0xAu)), g8(c, 0));
    // 0dad5d  jmp 0xdadb4
    X86_AT(c, 0xdad5du);
    goto L_dadb4;
L_dad5f:
    X86_TICK(c, 12);
    // 0dad5f  cmp word ptr [edi + 8], 0x7fff
    X86_AT(c, 0xdad5fu);
    (void)x86_sub(c, rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x8u))), 0x7FFFu, 0, 2);
    // 0dad65  jb 0xdad83
    X86_AT(c, 0xdad65u);
    if (x86_cc(c, 2)) { goto L_dad83; }
    X86_TICK(c, 25);
    // 0dad67  mov ax, word ptr [0xb4558]
    X86_AT(c, 0xdad67u);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(0xB4558u))));
    // 0dad6d  mov word ptr [edi + 8], ax
    X86_AT(c, 0xdad6du);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x8u)), (c.r[0] & 0xFFFFu));
    // 0dad71  mov eax, dword ptr [0xb4550]
    X86_AT(c, 0xdad71u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xB4550u)));
    // 0dad76  mov edx, dword ptr [0xb4554]
    X86_AT(c, 0xdad76u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(0xB4554u)));
    // 0dad7c  mov dword ptr [edi], eax
    X86_AT(c, 0xdad7cu);
    wr32((c.sbase[3] + (uint32_t)(c.r[7])), c.r[0]);
    // 0dad7e  mov dword ptr [edi + 4], edx
    X86_AT(c, 0xdad7eu);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] + 0x4u)), c.r[2]);
    // 0dad81  jmp 0xdadb4
    X86_AT(c, 0xdad81u);
    goto L_dadb4;
L_dad83:
    X86_TICK(c, 12);
    // 0dad83  cmp byte ptr [edi + 7], 0x80
    X86_AT(c, 0xdad83u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x7u))), 0x80u, 0, 1);
    // 0dad87  jae 0xdadb4
    X86_AT(c, 0xdad87u);
    if (x86_cc(c, 3)) { goto L_dadb4; }
    X86_TICK(c, 9);
    // 0dad89  push edi
    X86_AT(c, 0xdad89u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0dad8a  call 0xdc04f
    X86_AT(c, 0xdad8au);
    push32(c, 0xdad8fu); x86_call_known(c, 0xdc04fu, f_000dc04f); X86_RET(c, 0xdad8fu);
    X86_TICK(c, 19);
    // 0dad8f  xchg esi, eax
    X86_AT(c, 0xdad8fu);
    { uint32_t t = c.r[6]; c.r[6] = c.r[0]; c.r[0] = t; }
    // 0dad90  movsx eax, si
    X86_AT(c, 0xdad90u);
    c.r[0] = (uint32_t)(int32_t)(int16_t)(c.r[6] & 0xFFFFu);
    // 0dad93  movzx edx, word ptr [edi + 8]
    X86_AT(c, 0xdad93u);
    c.r[2] = rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x8u)));
    // 0dad97  cmp edx, eax
    X86_AT(c, 0xdad97u);
    (void)x86_sub(c, c.r[2], c.r[0], 0, 4);
    // 0dad99  jl 0xdada1
    X86_AT(c, 0xdad99u);
    if (x86_cc(c, 12)) { goto L_dada1; }
    X86_TICK(c, 14);
    // 0dad9b  sub word ptr [edi + 8], si
    X86_AT(c, 0xdad9bu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x8u)); uint32_t v = rd16(ea); wr16(ea, x86_sub(c, v, (c.r[6] & 0xFFFFu), 0, 2)); }
    // 0dad9f  jmp 0xdadb4
    X86_AT(c, 0xdad9fu);
    goto L_dadb4;
L_dada1:
    X86_TICK(c, 19);
    // 0dada1  mov eax, esi
    X86_AT(c, 0xdada1u);
    c.r[0] = c.r[6];
    // 0dada3  sub ax, word ptr [edi + 8]
    X86_AT(c, 0xdada3u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_sub(c, v, rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x8u))), 0, 2)); }
    // 0dada7  push eax
    X86_AT(c, 0xdada7u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0dada8  push edi
    X86_AT(c, 0xdada8u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0dada9  call 0xdc0a0
    X86_AT(c, 0xdada9u);
    push32(c, 0xdadaeu); x86_call_known(c, 0xdc0a0u, f_000dc0a0); X86_RET(c, 0xdadaeu);
    X86_TICK(c, 2);
    // 0dadae  mov word ptr [edi + 8], 0
    X86_AT(c, 0xdadaeu);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x8u)), 0x0u);
L_dadb4:
    X86_TICK(c, 24);
    // 0dadb4  pop edi
    X86_AT(c, 0xdadb4u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0dadb5  pop esi
    X86_AT(c, 0xdadb5u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0dadb6  leave 
    X86_AT(c, 0xdadb6u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0dadb7  ret 4
    X86_AT(c, 0xdadb7u);
    c.eip = pop32(c); c.r[4] += 0x4u; return;
    x86_fault(c, 0xdad34u, "ran off the end of a function");
}
void f_000dadbc(X86Cpu& c) {
    X86_TICK(c, 24);
    // 0dadbc  enter 8, 0
    X86_AT(c, 0xdadbcu);
    x86_enter(c, 0x8u, 0x0u, 4);
    // 0dadc0  push ebx
    X86_AT(c, 0xdadc0u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0dadc1  push esi
    X86_AT(c, 0xdadc1u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0dadc2  push edi
    X86_AT(c, 0xdadc2u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0dadc3  cmp byte ptr [0xb445f], 0
    X86_AT(c, 0xdadc3u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0xB445Fu))), 0x0u, 0, 1);
    // 0dadca  je 0xdade2
    X86_AT(c, 0xdadcau);
    if (x86_cc(c, 4)) { goto L_dade2; }
    X86_TICK(c, 20);
    // 0dadcc  push dword ptr [0xb4528]
    X86_AT(c, 0xdadccu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xB4528u))); push32(c, v); }
    // 0dadd2  mov eax, dword ptr [0xb4528]
    X86_AT(c, 0xdadd2u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xB4528u)));
    // 0dadd7  sub eax, 0xc
    X86_AT(c, 0xdadd7u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, 0xCu, 0, 4); }
    // 0dadda  push eax
    X86_AT(c, 0xdaddau);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0daddb  call 0xdaadd
    X86_AT(c, 0xdaddbu);
    push32(c, 0xdade0u); x86_call_known(c, 0xdaaddu, f_000daadd); X86_RET(c, 0xdade0u);
    X86_TICK(c, 7);
    // 0dade0  jmp 0xdae36
    X86_AT(c, 0xdade0u);
    goto L_dae36;
L_dade2:
    X86_TICK(c, 33);
    // 0dade2  mov eax, dword ptr [0xb4528]
    X86_AT(c, 0xdade2u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xB4528u)));
    // 0dade7  lea esi, [eax - 0xc]
    X86_AT(c, 0xdade7u);
    c.r[6] = (uint32_t)(c.r[0] + 0xFFFFFFF4u);
    // 0dadea  xchg edi, eax
    X86_AT(c, 0xdadeau);
    { uint32_t t = c.r[7]; c.r[7] = c.r[0]; c.r[0] = t; }
    // 0dadeb  mov ax, word ptr [edi + 8]
    X86_AT(c, 0xdadebu);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x8u))));
    // 0dadef  cmp ax, word ptr [esi + 8]
    X86_AT(c, 0xdadefu);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), rd16((c.sbase[3] + (uint32_t)(c.r[6] + 0x8u))), 0, 2);
    // 0dadf3  setb al
    X86_AT(c, 0xdadf3u);
    s8(c, 0, x86_cc(c, 2) ? 1u : 0u);
    // 0dadf6  xchg ebx, eax
    X86_AT(c, 0xdadf6u);
    { uint32_t t = c.r[3]; c.r[3] = c.r[0]; c.r[0] = t; }
    // 0dadf7  and bl, bl
    X86_AT(c, 0xdadf7u);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v & g8(c, 3), 1)); }
    // 0dadf9  je 0xdae03
    X86_AT(c, 0xdadf9u);
    if (x86_cc(c, 4)) { goto L_dae03; }
    X86_TICK(c, 8);
    // 0dadfb  mov dword ptr [ebp - 8], esi
    X86_AT(c, 0xdadfbu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), c.r[6]);
    // 0dadfe  mov esi, edi
    X86_AT(c, 0xdadfeu);
    c.r[6] = c.r[7];
    // 0dae00  mov edi, dword ptr [ebp - 8]
    X86_AT(c, 0xdae00u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)));
L_dae03:
    X86_TICK(c, 19);
    // 0dae03  mov ax, word ptr [edi + 8]
    X86_AT(c, 0xdae03u);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x8u))));
    // 0dae07  sub ax, word ptr [esi + 8]
    X86_AT(c, 0xdae07u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_sub(c, v, rd16((c.sbase[3] + (uint32_t)(c.r[6] + 0x8u))), 0, 2)); }
    // 0dae0b  mov word ptr [ebp - 2], ax
    X86_AT(c, 0xdae0bu);
    wr16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFEu)), (c.r[0] & 0xFFFFu));
    // 0dae0f  cmp ax, 0x40
    X86_AT(c, 0xdae0fu);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), 0x40u, 0, 2);
    // 0dae13  jg 0xdae1b
    X86_AT(c, 0xdae13u);
    if (x86_cc(c, 15)) { goto L_dae1b; }
    X86_TICK(c, 12);
    // 0dae15  cmp byte ptr [esi + 0xb], 0
    X86_AT(c, 0xdae15u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[6] + 0xBu))), 0x0u, 0, 1);
    // 0dae19  je 0xdae42
    X86_AT(c, 0xdae19u);
    if (x86_cc(c, 4)) { goto L_dae42; }
L_dae1b:
    X86_TICK(c, 7);
    // 0dae1b  and bl, bl
    X86_AT(c, 0xdae1bu);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v & g8(c, 3), 1)); }
    // 0dae1d  jne 0xdae36
    X86_AT(c, 0xdae1du);
    if (x86_cc(c, 5)) { goto L_dae36; }
    X86_TICK(c, 31);
    // 0dae1f  mov eax, dword ptr [0xb4528]
    X86_AT(c, 0xdae1fu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xB4528u)));
    // 0dae24  lea edx, [eax - 0xc]
    X86_AT(c, 0xdae24u);
    c.r[2] = (uint32_t)(c.r[0] + 0xFFFFFFF4u);
    // 0dae27  push esi
    X86_AT(c, 0xdae27u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0dae28  push edi
    X86_AT(c, 0xdae28u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0dae29  mov esi, eax
    X86_AT(c, 0xdae29u);
    c.r[6] = c.r[0];
    // 0dae2b  mov edi, edx
    X86_AT(c, 0xdae2bu);
    c.r[7] = c.r[2];
    // 0dae2d  mov ecx, 3
    X86_AT(c, 0xdae2du);
    c.r[1] = 0x3u;
    // 0dae32  movsd dword ptr es:[edi], dword ptr [esi]
    X86_AT(c, 0xdae32u);
    x86_string(c, 0, 4, 243, 4, 3);
    // 0dae34  pop edi
    X86_AT(c, 0xdae34u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0dae35  pop esi
    X86_AT(c, 0xdae35u);
    { uint32_t v = pop32(c); c.r[6] = v; }
L_dae36:
    X86_TICK(c, 14);
    // 0dae36  add dword ptr [0xb4528], 0xfffffff4
    X86_AT(c, 0xdae36u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xB4528u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0xFFFFFFF4u, 0, 4)); }
    // 0dae3d  jmp 0xdaece
    X86_AT(c, 0xdae3du);
    goto L_daece;
L_dae42:
    X86_TICK(c, 11);
    // 0dae42  mov ax, word ptr [ebp - 2]
    X86_AT(c, 0xdae42u);
    s16(c, 0, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFEu))));
    // 0dae46  and ax, ax
    X86_AT(c, 0xdae46u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_logic(c, v & (c.r[0] & 0xFFFFu), 2)); }
    // 0dae49  je 0xdae52
    X86_AT(c, 0xdae49u);
    if (x86_cc(c, 4)) { goto L_dae52; }
    X86_TICK(c, 11);
    // 0dae4b  push eax
    X86_AT(c, 0xdae4bu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0dae4c  push esi
    X86_AT(c, 0xdae4cu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0dae4d  call 0xdc0a0
    X86_AT(c, 0xdae4du);
    push32(c, 0xdae52u); x86_call_known(c, 0xdc0a0u, f_000dc0a0); X86_RET(c, 0xdae52u);
L_dae52:
    X86_TICK(c, 15);
    // 0dae52  mov al, byte ptr [edi + 0xa]
    X86_AT(c, 0xdae52u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0xAu))));
    // 0dae55  cmp al, byte ptr [esi + 0xa]
    X86_AT(c, 0xdae55u);
    (void)x86_sub(c, g8(c, 0), rd8((c.sbase[3] + (uint32_t)(c.r[6] + 0xAu))), 0, 1);
    // 0dae58  jne 0xdae79
    X86_AT(c, 0xdae58u);
    if (x86_cc(c, 5)) { goto L_dae79; }
    X86_TICK(c, 13);
    // 0dae5a  push 4
    X86_AT(c, 0xdae5au);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0dae5c  push esi
    X86_AT(c, 0xdae5cu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0dae5d  push edi
    X86_AT(c, 0xdae5du);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0dae5e  call 0xdbfac
    X86_AT(c, 0xdae5eu);
    push32(c, 0xdae63u); x86_call_known(c, 0xdbfacu, f_000dbfac); X86_RET(c, 0xdae63u);
    X86_TICK(c, 7);
    // 0dae63  and al, al
    X86_AT(c, 0xdae63u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & g8(c, 0), 1)); }
    // 0dae65  je 0xdaea4
    X86_AT(c, 0xdae65u);
    if (x86_cc(c, 4)) { goto L_daea4; }
    X86_TICK(c, 11);
    // 0dae67  push 1
    X86_AT(c, 0xdae67u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0dae69  push edi
    X86_AT(c, 0xdae69u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0dae6a  call 0xdc0a0
    X86_AT(c, 0xdae6au);
    push32(c, 0xdae6fu); x86_call_known(c, 0xdc0a0u, f_000dc0a0); X86_RET(c, 0xdae6fu);
    X86_TICK(c, 20);
    // 0dae6f  or byte ptr [edi + 7], 0x80
    X86_AT(c, 0xdae6fu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x7u)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | 0x80u, 1)); }
    // 0dae73  inc word ptr [edi + 8]
    X86_AT(c, 0xdae73u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x8u)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
    // 0dae77  jmp 0xdaea4
    X86_AT(c, 0xdae77u);
    goto L_daea4;
L_dae79:
    X86_TICK(c, 12);
    // 0dae79  cmp byte ptr [edi + 0xa], 0
    X86_AT(c, 0xdae79u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0xAu))), 0x0u, 0, 1);
    // 0dae7d  je 0xdae8a
    X86_AT(c, 0xdae7du);
    if (x86_cc(c, 4)) { goto L_dae8a; }
    X86_TICK(c, 13);
    // 0dae7f  push 4
    X86_AT(c, 0xdae7fu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0dae81  push esi
    X86_AT(c, 0xdae81u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0dae82  push edi
    X86_AT(c, 0xdae82u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0dae83  call 0xdbffe
    X86_AT(c, 0xdae83u);
    push32(c, 0xdae88u); x86_call_known(c, 0xdbffeu, f_000dbffe); X86_RET(c, 0xdae88u);
    X86_TICK(c, 7);
    // 0dae88  jmp 0xdae93
    X86_AT(c, 0xdae88u);
    goto L_dae93;
L_dae8a:
    X86_TICK(c, 13);
    // 0dae8a  push 4
    X86_AT(c, 0xdae8au);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0dae8c  push esi
    X86_AT(c, 0xdae8cu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0dae8d  push edi
    X86_AT(c, 0xdae8du);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0dae8e  call 0xdbfd5
    X86_AT(c, 0xdae8eu);
    push32(c, 0xdae93u); x86_call_known(c, 0xdbfd5u, f_000dbfd5); X86_RET(c, 0xdae93u);
L_dae93:
    X86_TICK(c, 14);
    // 0dae93  mov byte ptr [edi + 0xa], al
    X86_AT(c, 0xdae93u);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0xAu)), g8(c, 0));
    // 0dae96  cmp byte ptr [edi + 0xa], 0
    X86_AT(c, 0xdae96u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0xAu))), 0x0u, 0, 1);
    // 0dae9a  je 0xdaea4
    X86_AT(c, 0xdae9au);
    if (x86_cc(c, 4)) { goto L_daea4; }
    X86_TICK(c, 11);
    // 0dae9c  push 4
    X86_AT(c, 0xdae9cu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0dae9e  push edi
    X86_AT(c, 0xdae9eu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0dae9f  call 0xdc02a
    X86_AT(c, 0xdae9fu);
    push32(c, 0xdaea4u); x86_call_known(c, 0xdc02au, f_000dc02a); X86_RET(c, 0xdaea4u);
L_daea4:
    X86_TICK(c, 14);
    // 0daea4  add dword ptr [0xb4528], 0xfffffff4
    X86_AT(c, 0xdaea4u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xB4528u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0xFFFFFFF4u, 0, 4)); }
    // 0daeab  and bl, bl
    X86_AT(c, 0xdaeabu);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v & g8(c, 3), 1)); }
    // 0daead  jne 0xdaec3
    X86_AT(c, 0xdaeadu);
    if (x86_cc(c, 5)) { goto L_daec3; }
    X86_TICK(c, 29);
    // 0daeaf  mov eax, dword ptr [0xb4528]
    X86_AT(c, 0xdaeafu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xB4528u)));
    // 0daeb4  push esi
    X86_AT(c, 0xdaeb4u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0daeb5  push edi
    X86_AT(c, 0xdaeb5u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0daeb6  mov esi, edi
    X86_AT(c, 0xdaeb6u);
    c.r[6] = c.r[7];
    // 0daeb8  mov edi, eax
    X86_AT(c, 0xdaeb8u);
    c.r[7] = c.r[0];
    // 0daeba  mov ecx, 3
    X86_AT(c, 0xdaebau);
    c.r[1] = 0x3u;
    // 0daebf  movsd dword ptr es:[edi], dword ptr [esi]
    X86_AT(c, 0xdaebfu);
    x86_string(c, 0, 4, 243, 4, 3);
    // 0daec1  pop edi
    X86_AT(c, 0xdaec1u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0daec2  pop esi
    X86_AT(c, 0xdaec2u);
    { uint32_t v = pop32(c); c.r[6] = v; }
L_daec3:
    X86_TICK(c, 12);
    // 0daec3  push dword ptr [0xb4528]
    X86_AT(c, 0xdaec3u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xB4528u))); push32(c, v); }
    // 0daec9  call 0xdad34
    X86_AT(c, 0xdaec9u);
    push32(c, 0xdaeceu); x86_call_known(c, 0xdad34u, f_000dad34); X86_RET(c, 0xdaeceu);
L_daece:
    X86_TICK(c, 28);
    // 0daece  pop edi
    X86_AT(c, 0xdaeceu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0daecf  pop esi
    X86_AT(c, 0xdaecfu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0daed0  pop ebx
    X86_AT(c, 0xdaed0u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0daed1  leave 
    X86_AT(c, 0xdaed1u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0daed2  ret 
    X86_AT(c, 0xdaed2u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xdadbcu, "ran off the end of a function");
}
void f_000daed4(X86Cpu& c) {
    X86_TICK(c, 15);
    // 0daed4  push ebp
    X86_AT(c, 0xdaed4u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0daed5  mov ebp, esp
    X86_AT(c, 0xdaed5u);
    c.r[5] = c.r[4];
    // 0daed7  push esi
    X86_AT(c, 0xdaed7u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0daed8  push edi
    X86_AT(c, 0xdaed8u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0daed9  call 0xdad10
    X86_AT(c, 0xdaed9u);
    push32(c, 0xdaedeu); x86_call_known(c, 0xdad10u, f_000dad10); X86_RET(c, 0xdaedeu);
    X86_TICK(c, 41);
    // 0daede  mov esi, dword ptr [ebp + 8]
    X86_AT(c, 0xdaedeu);
    c.r[6] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0daee1  mov edi, dword ptr [0xb4528]
    X86_AT(c, 0xdaee1u);
    c.r[7] = rd32((c.sbase[3] + (uint32_t)(0xB4528u)));
    // 0daee7  movsd dword ptr es:[edi], dword ptr [esi]
    X86_AT(c, 0xdaee7u);
    x86_string(c, 0, 4, 0, 4, 3);
    // 0daee8  movsd dword ptr es:[edi], dword ptr [esi]
    X86_AT(c, 0xdaee8u);
    x86_string(c, 0, 4, 0, 4, 3);
    // 0daee9  movsw word ptr es:[edi], word ptr [esi]
    X86_AT(c, 0xdaee9u);
    x86_string(c, 0, 2, 0, 4, 3);
    // 0daeeb  cmp byte ptr [0xb445f], 0
    X86_AT(c, 0xdaeebu);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0xB445Fu))), 0x0u, 0, 1);
    // 0daef2  jne 0xdaf2c
    X86_AT(c, 0xdaef2u);
    if (x86_cc(c, 5)) { goto L_daf2c; }
    X86_TICK(c, 24);
    // 0daef4  mov edi, dword ptr [0xb4528]
    X86_AT(c, 0xdaef4u);
    c.r[7] = rd32((c.sbase[3] + (uint32_t)(0xB4528u)));
    // 0daefa  test byte ptr [edi + 9], 0x80
    X86_AT(c, 0xdaefau);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x9u))) & 0x80u, 1);
    // 0daefe  setne al
    X86_AT(c, 0xdaefeu);
    s8(c, 0, x86_cc(c, 5) ? 1u : 0u);
    // 0daf01  mov byte ptr [edi + 0xa], al
    X86_AT(c, 0xdaf01u);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0xAu)), g8(c, 0));
    // 0daf04  and al, al
    X86_AT(c, 0xdaf04u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & g8(c, 0), 1)); }
    // 0daf06  je 0xdaf0c
    X86_AT(c, 0xdaf06u);
    if (x86_cc(c, 4)) { goto L_daf0c; }
    X86_TICK(c, 7);
    // 0daf08  and byte ptr [edi + 9], 0x7f
    X86_AT(c, 0xdaf08u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x9u)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v & 0x7Fu, 1)); }
L_daf0c:
    X86_TICK(c, 37);
    // 0daf0c  mov ax, word ptr [edi]
    X86_AT(c, 0xdaf0cu);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(c.r[7]))));
    // 0daf0f  or ax, word ptr [edi + 2]
    X86_AT(c, 0xdaf0fu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_logic(c, v | rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x2u))), 2)); }
    // 0daf13  or ax, word ptr [edi + 4]
    X86_AT(c, 0xdaf13u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_logic(c, v | rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x4u))), 2)); }
    // 0daf17  or ax, word ptr [edi + 6]
    X86_AT(c, 0xdaf17u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_logic(c, v | rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x6u))), 2)); }
    // 0daf1b  and ax, ax
    X86_AT(c, 0xdaf1bu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_logic(c, v & (c.r[0] & 0xFFFFu), 2)); }
    // 0daf1e  sete al
    X86_AT(c, 0xdaf1eu);
    s8(c, 0, x86_cc(c, 4) ? 1u : 0u);
    // 0daf21  mov byte ptr [edi + 0xb], al
    X86_AT(c, 0xdaf21u);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0xBu)), g8(c, 0));
    // 0daf24  and al, al
    X86_AT(c, 0xdaf24u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & g8(c, 0), 1)); }
    // 0daf26  je 0xdaf2c
    X86_AT(c, 0xdaf26u);
    if (x86_cc(c, 4)) { goto L_daf2c; }
    X86_TICK(c, 2);
    // 0daf28  mov byte ptr [edi + 0xa], 0
    X86_AT(c, 0xdaf28u);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0xAu)), 0x0u);
L_daf2c:
    X86_TICK(c, 24);
    // 0daf2c  pop edi
    X86_AT(c, 0xdaf2cu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0daf2d  pop esi
    X86_AT(c, 0xdaf2du);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0daf2e  leave 
    X86_AT(c, 0xdaf2eu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0daf2f  ret 4
    X86_AT(c, 0xdaf2fu);
    c.eip = pop32(c); c.r[4] += 0x4u; return;
    x86_fault(c, 0xdaed4u, "ran off the end of a function");
}
void f_000daf34(X86Cpu& c) {
    X86_TICK(c, 49);
    // 0daf34  push ebp
    X86_AT(c, 0xdaf34u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0daf35  mov ebp, esp
    X86_AT(c, 0xdaf35u);
    c.r[5] = c.r[4];
    // 0daf37  push esi
    X86_AT(c, 0xdaf37u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0daf38  push edi
    X86_AT(c, 0xdaf38u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0daf39  mov esi, dword ptr [0xb4528]
    X86_AT(c, 0xdaf39u);
    c.r[6] = rd32((c.sbase[3] + (uint32_t)(0xB4528u)));
    // 0daf3f  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0xdaf3fu);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0daf42  movsd dword ptr es:[edi], dword ptr [esi]
    X86_AT(c, 0xdaf42u);
    x86_string(c, 0, 4, 0, 4, 3);
    // 0daf43  movsd dword ptr es:[edi], dword ptr [esi]
    X86_AT(c, 0xdaf43u);
    x86_string(c, 0, 4, 0, 4, 3);
    // 0daf44  movsw word ptr es:[edi], word ptr [esi]
    X86_AT(c, 0xdaf44u);
    x86_string(c, 0, 2, 0, 4, 3);
    // 0daf46  cmp byte ptr [0xb445f], 0
    X86_AT(c, 0xdaf46u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0xB445Fu))), 0x0u, 0, 1);
    // 0daf4d  jne 0xdaf67
    X86_AT(c, 0xdaf4du);
    if (x86_cc(c, 5)) { goto L_daf67; }
    X86_TICK(c, 16);
    // 0daf4f  mov eax, dword ptr [0xb4528]
    X86_AT(c, 0xdaf4fu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xB4528u)));
    // 0daf54  cmp byte ptr [eax + 0xa], 0
    X86_AT(c, 0xdaf54u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[0] + 0xAu))), 0x0u, 0, 1);
    // 0daf58  je 0xdaf67
    X86_AT(c, 0xdaf58u);
    if (x86_cc(c, 4)) { goto L_daf67; }
    X86_TICK(c, 12);
    // 0daf5a  cmp byte ptr [eax + 0xb], 0
    X86_AT(c, 0xdaf5au);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[0] + 0xBu))), 0x0u, 0, 1);
    // 0daf5e  jne 0xdaf67
    X86_AT(c, 0xdaf5eu);
    if (x86_cc(c, 5)) { goto L_daf67; }
    X86_TICK(c, 11);
    // 0daf60  mov eax, dword ptr [ebp + 8]
    X86_AT(c, 0xdaf60u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0daf63  or byte ptr [eax + 9], 0x80
    X86_AT(c, 0xdaf63u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[0] + 0x9u)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | 0x80u, 1)); }
L_daf67:
    X86_TICK(c, 31);
    // 0daf67  add dword ptr [0xb4528], 0xfffffff4
    X86_AT(c, 0xdaf67u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xB4528u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0xFFFFFFF4u, 0, 4)); }
    // 0daf6e  pop edi
    X86_AT(c, 0xdaf6eu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0daf6f  pop esi
    X86_AT(c, 0xdaf6fu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0daf70  leave 
    X86_AT(c, 0xdaf70u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0daf71  ret 4
    X86_AT(c, 0xdaf71u);
    c.eip = pop32(c); c.r[4] += 0x4u; return;
    x86_fault(c, 0xdaf34u, "ran off the end of a function");
}
void f_000daf74(X86Cpu& c) {
    X86_TICK(c, 83);
    // 0daf74  enter 0xc, 0
    X86_AT(c, 0xdaf74u);
    x86_enter(c, 0xCu, 0x0u, 4);
    // 0daf78  push esi
    X86_AT(c, 0xdaf78u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0daf79  push edi
    X86_AT(c, 0xdaf79u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0daf7a  mov eax, dword ptr [0xb4528]
    X86_AT(c, 0xdaf7au);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xB4528u)));
    // 0daf7f  lea esi, [eax - 0xc]
    X86_AT(c, 0xdaf7fu);
    c.r[6] = (uint32_t)(c.r[0] + 0xFFFFFFF4u);
    // 0daf82  lea edi, [ebp - 0xc]
    X86_AT(c, 0xdaf82u);
    c.r[7] = (uint32_t)(c.r[5] + 0xFFFFFFF4u);
    // 0daf85  mov ecx, 3
    X86_AT(c, 0xdaf85u);
    c.r[1] = 0x3u;
    // 0daf8a  movsd dword ptr es:[edi], dword ptr [esi]
    X86_AT(c, 0xdaf8au);
    x86_string(c, 0, 4, 243, 4, 3);
    // 0daf8c  xchg esi, eax
    X86_AT(c, 0xdaf8cu);
    { uint32_t t = c.r[6]; c.r[6] = c.r[0]; c.r[0] = t; }
    // 0daf8d  mov eax, dword ptr [0xb4528]
    X86_AT(c, 0xdaf8du);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xB4528u)));
    // 0daf92  lea edi, [eax - 0xc]
    X86_AT(c, 0xdaf92u);
    c.r[7] = (uint32_t)(c.r[0] + 0xFFFFFFF4u);
    // 0daf95  mov ecx, 3
    X86_AT(c, 0xdaf95u);
    c.r[1] = 0x3u;
    // 0daf9a  movsd dword ptr es:[edi], dword ptr [esi]
    X86_AT(c, 0xdaf9au);
    x86_string(c, 0, 4, 243, 4, 3);
    // 0daf9c  lea esi, [ebp - 0xc]
    X86_AT(c, 0xdaf9cu);
    c.r[6] = (uint32_t)(c.r[5] + 0xFFFFFFF4u);
    // 0daf9f  xchg edi, eax
    X86_AT(c, 0xdaf9fu);
    { uint32_t t = c.r[7]; c.r[7] = c.r[0]; c.r[0] = t; }
    // 0dafa0  mov ecx, 3
    X86_AT(c, 0xdafa0u);
    c.r[1] = 0x3u;
    // 0dafa5  movsd dword ptr es:[edi], dword ptr [esi]
    X86_AT(c, 0xdafa5u);
    x86_string(c, 0, 4, 243, 4, 3);
    // 0dafa7  pop edi
    X86_AT(c, 0xdafa7u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0dafa8  pop esi
    X86_AT(c, 0xdafa8u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0dafa9  leave 
    X86_AT(c, 0xdafa9u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0dafaa  ret 
    X86_AT(c, 0xdafaau);
    c.eip = pop32(c); return;
    x86_fault(c, 0xdaf74u, "ran off the end of a function");
}
void f_000dafac(X86Cpu& c) {
    X86_TICK(c, 12);
    // 0dafac  cmp byte ptr [0xb445f], 0
    X86_AT(c, 0xdafacu);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0xB445Fu))), 0x0u, 0, 1);
    // 0dafb3  je 0xdafc0
    X86_AT(c, 0xdafb3u);
    if (x86_cc(c, 4)) { goto L_dafc0; }
    X86_TICK(c, 18);
    // 0dafb5  mov eax, dword ptr [0xb4528]
    X86_AT(c, 0xdafb5u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xB4528u)));
    // 0dafba  xor byte ptr [eax + 9], 0x80
    X86_AT(c, 0xdafbau);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[0] + 0x9u)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v ^ 0x80u, 1)); }
    // 0dafbe  jmp 0xdafcf
    X86_AT(c, 0xdafbeu);
    goto L_dafcf;
L_dafc0:
    X86_TICK(c, 16);
    // 0dafc0  mov eax, dword ptr [0xb4528]
    X86_AT(c, 0xdafc0u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xB4528u)));
    // 0dafc5  cmp byte ptr [eax + 0xb], 0
    X86_AT(c, 0xdafc5u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[0] + 0xBu))), 0x0u, 0, 1);
    // 0dafc9  jne 0xdafcf
    X86_AT(c, 0xdafc9u);
    if (x86_cc(c, 5)) { goto L_dafcf; }
    X86_TICK(c, 7);
    // 0dafcb  xor byte ptr [eax + 0xa], 1
    X86_AT(c, 0xdafcbu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[0] + 0xAu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v ^ 0x1u, 1)); }
L_dafcf:
    X86_TICK(c, 10);
    // 0dafcf  ret 
    X86_AT(c, 0xdafcfu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xdafacu, "ran off the end of a function");
}
void f_000dafdc(X86Cpu& c) {
    X86_TICK(c, 12);
    // 0dafdc  cmp byte ptr [0xb445f], 0
    X86_AT(c, 0xdafdcu);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0xB445Fu))), 0x0u, 0, 1);
    // 0dafe3  je 0xdaff0
    X86_AT(c, 0xdafe3u);
    if (x86_cc(c, 4)) { goto L_daff0; }
    X86_TICK(c, 18);
    // 0dafe5  mov eax, dword ptr [0xb4528]
    X86_AT(c, 0xdafe5u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xB4528u)));
    // 0dafea  xor byte ptr [eax + 9], 0x80
    X86_AT(c, 0xdafeau);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[0] + 0x9u)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v ^ 0x80u, 1)); }
    // 0dafee  jmp 0xdafff
    X86_AT(c, 0xdafeeu);
    goto L_dafff;
L_daff0:
    X86_TICK(c, 16);
    // 0daff0  mov eax, dword ptr [0xb4528]
    X86_AT(c, 0xdaff0u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xB4528u)));
    // 0daff5  cmp byte ptr [eax + 0xb], 0
    X86_AT(c, 0xdaff5u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[0] + 0xBu))), 0x0u, 0, 1);
    // 0daff9  jne 0xdafff
    X86_AT(c, 0xdaff9u);
    if (x86_cc(c, 5)) { goto L_dafff; }
    X86_TICK(c, 7);
    // 0daffb  xor byte ptr [eax + 0xa], 1
    X86_AT(c, 0xdaffbu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[0] + 0xAu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v ^ 0x1u, 1)); }
L_dafff:
    X86_TICK(c, 7);
    // 0dafff  call 0xdadbc
    X86_AT(c, 0xdafffu);
    push32(c, 0xdb004u); x86_call_known(c, 0xdadbcu, f_000dadbc); X86_RET(c, 0xdb004u);
    X86_TICK(c, 10);
    // 0db004  ret 
    X86_AT(c, 0xdb004u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xdafdcu, "ran off the end of a function");
}
void f_000db044(X86Cpu& c) {
    X86_TICK(c, 24);
    // 0db044  enter 0x10, 0
    X86_AT(c, 0xdb044u);
    x86_enter(c, 0x10u, 0x0u, 4);
    // 0db048  push ebx
    X86_AT(c, 0xdb048u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0db049  push esi
    X86_AT(c, 0xdb049u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0db04a  push edi
    X86_AT(c, 0xdb04au);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0db04b  cmp byte ptr [0xb445f], 0
    X86_AT(c, 0xdb04bu);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0xB445Fu))), 0x0u, 0, 1);
    // 0db052  je 0xdb06d
    X86_AT(c, 0xdb052u);
    if (x86_cc(c, 4)) { goto L_db06d; }
    X86_TICK(c, 20);
    // 0db054  push dword ptr [0xb4528]
    X86_AT(c, 0xdb054u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xB4528u))); push32(c, v); }
    // 0db05a  mov eax, dword ptr [0xb4528]
    X86_AT(c, 0xdb05au);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xB4528u)));
    // 0db05f  sub eax, 0xc
    X86_AT(c, 0xdb05fu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, 0xCu, 0, 4); }
    // 0db062  push eax
    X86_AT(c, 0xdb062u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0db063  call 0xdab07
    X86_AT(c, 0xdb063u);
    push32(c, 0xdb068u); x86_call_known(c, 0xdab07u, f_000dab07); X86_RET(c, 0xdb068u);
    X86_TICK(c, 7);
    // 0db068  jmp 0xdb0da
    X86_AT(c, 0xdb068u);
    goto L_db0da;
L_db06d:
    X86_TICK(c, 16);
    // 0db06d  mov eax, dword ptr [0xb4528]
    X86_AT(c, 0xdb06du);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xB4528u)));
    // 0db072  cmp byte ptr [eax + 0xb], 0
    X86_AT(c, 0xdb072u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[0] + 0xBu))), 0x0u, 0, 1);
    // 0db076  je 0xdb07e
    X86_AT(c, 0xdb076u);
    if (x86_cc(c, 4)) { goto L_db07e; }
    X86_TICK(c, 12);
    // 0db078  cmp byte ptr [eax - 1], 0
    X86_AT(c, 0xdb078u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[0] + 0xFFFFFFFFu))), 0x0u, 0, 1);
    // 0db07c  jne 0xdb096
    X86_AT(c, 0xdb07cu);
    if (x86_cc(c, 5)) { goto L_db096; }
L_db07e:
    X86_TICK(c, 24);
    // 0db07e  mov esi, dword ptr [0xb4528]
    X86_AT(c, 0xdb07eu);
    c.r[6] = rd32((c.sbase[3] + (uint32_t)(0xB4528u)));
    // 0db084  mov edi, dword ptr [0xb4528]
    X86_AT(c, 0xdb084u);
    c.r[7] = rd32((c.sbase[3] + (uint32_t)(0xB4528u)));
    // 0db08a  sub edi, 0xc
    X86_AT(c, 0xdb08au);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, 0xCu, 0, 4); }
    // 0db08d  mov ecx, 0xc
    X86_AT(c, 0xdb08du);
    c.r[1] = 0xCu;
    // 0db092  cmpsb byte ptr [esi], byte ptr es:[edi]
    X86_AT(c, 0xdb092u);
    x86_string(c, 1, 1, 243, 4, 3);
    // 0db094  jne 0xdb09a
    X86_AT(c, 0xdb094u);
    if (x86_cc(c, 5)) { goto L_db09a; }
L_db096:
    X86_TICK(c, 9);
    // 0db096  sub eax, eax
    X86_AT(c, 0xdb096u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0db098  jmp 0xdb0da
    X86_AT(c, 0xdb098u);
    goto L_db0da;
L_db09a:
    X86_TICK(c, 21);
    // 0db09a  mov eax, dword ptr [0xb4528]
    X86_AT(c, 0xdb09au);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xB4528u)));
    // 0db09f  mov dl, byte ptr [eax + 0xa]
    X86_AT(c, 0xdb09fu);
    s8(c, 2, rd8((c.sbase[3] + (uint32_t)(c.r[0] + 0xAu))));
    // 0db0a2  mov byte ptr [ebp - 0xd], dl
    X86_AT(c, 0xdb0a2u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF3u)), g8(c, 2));
    // 0db0a5  mov bl, byte ptr [eax - 2]
    X86_AT(c, 0xdb0a5u);
    s8(c, 3, rd8((c.sbase[3] + (uint32_t)(c.r[0] + 0xFFFFFFFEu))));
    // 0db0a8  cmp dl, bl
    X86_AT(c, 0xdb0a8u);
    (void)x86_sub(c, g8(c, 2), g8(c, 3), 0, 1);
    // 0db0aa  jne 0xdb0cd
    X86_AT(c, 0xdb0aau);
    if (x86_cc(c, 5)) { goto L_db0cd; }
    X86_TICK(c, 28);
    // 0db0ac  lea esi, [eax - 0xc]
    X86_AT(c, 0xdb0acu);
    c.r[6] = (uint32_t)(c.r[0] + 0xFFFFFFF4u);
    // 0db0af  lea edi, [ebp - 0xc]
    X86_AT(c, 0xdb0afu);
    c.r[7] = (uint32_t)(c.r[5] + 0xFFFFFFF4u);
    // 0db0b2  mov ecx, 3
    X86_AT(c, 0xdb0b2u);
    c.r[1] = 0x3u;
    // 0db0b7  movsd dword ptr es:[edi], dword ptr [esi]
    X86_AT(c, 0xdb0b7u);
    x86_string(c, 0, 4, 243, 4, 3);
    // 0db0b9  push 5
    X86_AT(c, 0xdb0b9u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0db0bb  push eax
    X86_AT(c, 0xdb0bbu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0db0bc  lea eax, [ebp - 0xc]
    X86_AT(c, 0xdb0bcu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFF4u);
    // 0db0bf  push eax
    X86_AT(c, 0xdb0bfu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0db0c0  call 0xdbfd5
    X86_AT(c, 0xdb0c0u);
    push32(c, 0xdb0c5u); x86_call_known(c, 0xdbfd5u, f_000dbfd5); X86_RET(c, 0xdb0c5u);
    X86_TICK(c, 14);
    // 0db0c5  cmp al, bl
    X86_AT(c, 0xdb0c5u);
    (void)x86_sub(c, g8(c, 0), g8(c, 3), 0, 1);
    // 0db0c7  setne byte ptr [ebp - 0xe]
    X86_AT(c, 0xdb0c7u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF2u)), x86_cc(c, 5) ? 1u : 0u);
    // 0db0cb  jmp 0xdb0d0
    X86_AT(c, 0xdb0cbu);
    goto L_db0d0;
L_db0cd:
    X86_TICK(c, 2);
    // 0db0cd  mov byte ptr [ebp - 0xe], bl
    X86_AT(c, 0xdb0cdu);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF2u)), g8(c, 3));
L_db0d0:
    X86_TICK(c, 12);
    // 0db0d0  mov al, byte ptr [ebp - 0xe]
    X86_AT(c, 0xdb0d0u);
    s8(c, 0, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF2u))));
    // 0db0d3  add eax, eax
    X86_AT(c, 0xdb0d3u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, c.r[0], 0, 4); }
    // 0db0d5  sub ah, ah
    X86_AT(c, 0xdb0d5u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_sub(c, v, g8(c, 4), 0, 1)); }
    // 0db0d7  neg eax
    X86_AT(c, 0xdb0d7u);
    { uint32_t v = c.r[0]; c.r[0] = x86_neg(c, v, 4); }
    // 0db0d9  inc eax
    X86_AT(c, 0xdb0d9u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
L_db0da:
    X86_TICK(c, 28);
    // 0db0da  pop edi
    X86_AT(c, 0xdb0dau);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0db0db  pop esi
    X86_AT(c, 0xdb0dbu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0db0dc  pop ebx
    X86_AT(c, 0xdb0dcu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0db0dd  leave 
    X86_AT(c, 0xdb0ddu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0db0de  ret 
    X86_AT(c, 0xdb0deu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xdb044u, "ran off the end of a function");
}
}

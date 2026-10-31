#include "p_game_funcs.h"
namespace p_game {
void f_00105304(X86Cpu& c) {
    X86_TICK(c, 21);
    // 105304  mov eax, dword ptr [esp + 4]
    X86_AT(c, 0x105304u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[4] + 0x4u)));
    // 105308  mov edx, dword ptr [eax]
    X86_AT(c, 0x105308u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[0])));
    // 10530a  or edx, dword ptr [eax + 4]
    X86_AT(c, 0x10530au);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v | rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0x4u))), 4); }
    // 10530d  and edx, edx
    X86_AT(c, 0x10530du);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & c.r[2], 4); }
    // 10530f  jne 0x105315
    X86_AT(c, 0x10530fu);
    if (x86_cc(c, 5)) { goto L_105315; }
    X86_TICK(c, 9);
    // 105311  sub eax, eax
    X86_AT(c, 0x105311u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 105313  jmp 0x105324
    X86_AT(c, 0x105313u);
    goto L_105324;
L_105315:
    X86_TICK(c, 12);
    // 105315  mov eax, dword ptr [esp + 4]
    X86_AT(c, 0x105315u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[4] + 0x4u)));
    // 105319  mov ax, word ptr [eax + 8]
    X86_AT(c, 0x105319u);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(c.r[0] + 0x8u))));
    // 10531d  and ah, 0x7f
    X86_AT(c, 0x10531du);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_logic(c, v & 0x7Fu, 1)); }
    // 105320  sub ax, 0x3fff
    X86_AT(c, 0x105320u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_sub(c, v, 0x3FFFu, 0, 2)); }
L_105324:
    X86_TICK(c, 10);
    // 105324  ret 4
    X86_AT(c, 0x105324u);
    c.eip = pop32(c); c.r[4] += 0x4u; return;
    x86_fault(c, 0x105304u, "ran off the end of a function");
}
void f_00105328(X86Cpu& c) {
    X86_TICK(c, 16);
    // 105328  push ebp
    X86_AT(c, 0x105328u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 105329  mov ebp, esp
    X86_AT(c, 0x105329u);
    c.r[5] = c.r[4];
    // 10532b  push dword ptr [ebp + 0xc]
    X86_AT(c, 0x10532bu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))); push32(c, v); }
    // 10532e  call 0x1040b8
    X86_AT(c, 0x10532eu);
    push32(c, 0x105333u); f_001040b8(c); X86_RET(c, 0x105333u);
    X86_TICK(c, 12);
    // 105333  push dword ptr [ebp + 8]
    X86_AT(c, 0x105333u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, v); }
    // 105336  call 0x105894
    X86_AT(c, 0x105336u);
    push32(c, 0x10533bu); f_00105894(c); X86_RET(c, 0x10533bu);
    X86_TICK(c, 16);
    // 10533b  leave 
    X86_AT(c, 0x10533bu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 10533c  ret 8
    X86_AT(c, 0x10533cu);
    c.eip = pop32(c); c.r[4] += 0x8u; return;
    x86_fault(c, 0x105328u, "ran off the end of a function");
}
void f_00105340(X86Cpu& c) {
    X86_TICK(c, 16);
    // 105340  push ebp
    X86_AT(c, 0x105340u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 105341  mov ebp, esp
    X86_AT(c, 0x105341u);
    c.r[5] = c.r[4];
    // 105343  push dword ptr [ebp + 0xc]
    X86_AT(c, 0x105343u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))); push32(c, v); }
    // 105346  call 0x10579c
    X86_AT(c, 0x105346u);
    push32(c, 0x10534bu); f_0010579c(c); X86_RET(c, 0x10534bu);
    X86_TICK(c, 12);
    // 10534b  push dword ptr [ebp + 8]
    X86_AT(c, 0x10534bu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, v); }
    // 10534e  call 0x104118
    X86_AT(c, 0x10534eu);
    push32(c, 0x105353u); f_00104118(c); X86_RET(c, 0x105353u);
    X86_TICK(c, 16);
    // 105353  leave 
    X86_AT(c, 0x105353u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 105354  ret 8
    X86_AT(c, 0x105354u);
    c.eip = pop32(c); c.r[4] += 0x8u; return;
    x86_fault(c, 0x105340u, "ran off the end of a function");
}
void f_00105358(X86Cpu& c) {
    X86_TICK(c, 13);
    // 105358  enter 0x14, 0
    X86_AT(c, 0x105358u);
    x86_enter(c, 0x14u, 0x0u, 4);
    // 10535c  call 0x10400c
    X86_AT(c, 0x10535cu);
    push32(c, 0x105361u); f_0010400c(c); X86_RET(c, 0x105361u);
    X86_TICK(c, 12);
    // 105361  cmp byte ptr [0xdfd2f], 0
    X86_AT(c, 0x105361u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0xDFD2Fu))), 0x0u, 0, 1);
    // 105368  je 0x10537f
    X86_AT(c, 0x105368u);
    if (x86_cc(c, 4)) { goto L_10537f; }
    X86_TICK(c, 12);
    // 10536a  push dword ptr [ebp + 8]
    X86_AT(c, 0x10536au);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, v); }
    // 10536d  call 0x103cf3
    X86_AT(c, 0x10536du);
    push32(c, 0x105372u); f_00103cf3(c); X86_RET(c, 0x105372u);
    X86_TICK(c, 12);
    // 105372  push dword ptr [0xdfdf8]
    X86_AT(c, 0x105372u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xDFDF8u))); push32(c, v); }
    // 105378  call 0x103d14
    X86_AT(c, 0x105378u);
    push32(c, 0x10537du); f_00103d14(c); X86_RET(c, 0x10537du);
    X86_TICK(c, 7);
    // 10537d  jmp 0x10538d
    X86_AT(c, 0x10537du);
    goto L_10538d;
L_10537f:
    X86_TICK(c, 17);
    // 10537f  push dword ptr [ebp + 8]
    X86_AT(c, 0x10537fu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, v); }
    // 105382  push dword ptr [0xdfdf8]
    X86_AT(c, 0x105382u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xDFDF8u))); push32(c, v); }
    // 105388  call 0x105614
    X86_AT(c, 0x105388u);
    push32(c, 0x10538du); f_00105614(c); X86_RET(c, 0x10538du);
L_10538d:
    X86_TICK(c, 16);
    // 10538d  leave 
    X86_AT(c, 0x10538du);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 10538e  ret 4
    X86_AT(c, 0x10538eu);
    c.eip = pop32(c); c.r[4] += 0x4u; return;
    x86_fault(c, 0x105358u, "ran off the end of a function");
}
void f_00105394(X86Cpu& c) {
    X86_TICK(c, 22);
    // 105394  enter 0x24, 0
    X86_AT(c, 0x105394u);
    x86_enter(c, 0x24u, 0x0u, 4);
    // 105398  push esi
    X86_AT(c, 0x105398u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 105399  push edi
    X86_AT(c, 0x105399u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 10539a  cmp byte ptr [0xdfd2f], 0
    X86_AT(c, 0x10539au);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0xDFD2Fu))), 0x0u, 0, 1);
    // 1053a1  je 0x1053c3
    X86_AT(c, 0x1053a1u);
    if (x86_cc(c, 4)) { goto L_1053c3; }
    X86_TICK(c, 20);
    // 1053a3  push dword ptr [0xdfdf8]
    X86_AT(c, 0x1053a3u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xDFDF8u))); push32(c, v); }
    // 1053a9  mov eax, dword ptr [0xdfdf8]
    X86_AT(c, 0x1053a9u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xDFDF8u)));
    // 1053ae  sub eax, 0xc
    X86_AT(c, 0x1053aeu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, 0xCu, 0, 4); }
    // 1053b1  push eax
    X86_AT(c, 0x1053b1u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 1053b2  call 0x103ca9
    X86_AT(c, 0x1053b2u);
    push32(c, 0x1053b7u); f_00103ca9(c); X86_RET(c, 0x1053b7u);
    X86_TICK(c, 14);
    // 1053b7  add dword ptr [0xdfdf8], 0xfffffff4
    X86_AT(c, 0x1053b7u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xDFDF8u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0xFFFFFFF4u, 0, 4)); }
    // 1053be  jmp 0x1054b2
    X86_AT(c, 0x1053beu);
    goto L_1054b2;
L_1053c3:
    X86_TICK(c, 48);
    // 1053c3  mov eax, dword ptr [0xdfdf8]
    X86_AT(c, 0x1053c3u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xDFDF8u)));
    // 1053c8  lea edx, [ebp - 0x14]
    X86_AT(c, 0x1053c8u);
    c.r[2] = (uint32_t)(c.r[5] + 0xFFFFFFECu);
    // 1053cb  push esi
    X86_AT(c, 0x1053cbu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 1053cc  push edi
    X86_AT(c, 0x1053ccu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 1053cd  mov esi, eax
    X86_AT(c, 0x1053cdu);
    c.r[6] = c.r[0];
    // 1053cf  mov edi, edx
    X86_AT(c, 0x1053cfu);
    c.r[7] = c.r[2];
    // 1053d1  mov ecx, 3
    X86_AT(c, 0x1053d1u);
    c.r[1] = 0x3u;
    // 1053d6  movsd dword ptr es:[edi], dword ptr [esi]
    X86_AT(c, 0x1053d6u);
    x86_string(c, 0, 4, 243, 4, 3);
    // 1053d8  pop edi
    X86_AT(c, 0x1053d8u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 1053d9  pop esi
    X86_AT(c, 0x1053d9u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 1053da  xchg esi, eax
    X86_AT(c, 0x1053dau);
    { uint32_t t = c.r[6]; c.r[6] = c.r[0]; c.r[0] = t; }
    // 1053db  sub esi, 0xc
    X86_AT(c, 0x1053dbu);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, 0xCu, 0, 4); }
    // 1053de  cmp byte ptr [ebp - 9], 0
    X86_AT(c, 0x1053deu);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF7u))), 0x0u, 0, 1);
    // 1053e2  jne 0x1053ea
    X86_AT(c, 0x1053e2u);
    if (x86_cc(c, 5)) { goto L_1053ea; }
    X86_TICK(c, 12);
    // 1053e4  cmp byte ptr [esi + 0xb], 0
    X86_AT(c, 0x1053e4u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[6] + 0xBu))), 0x0u, 0, 1);
    // 1053e8  je 0x105410
    X86_AT(c, 0x1053e8u);
    if (x86_cc(c, 4)) { goto L_105410; }
L_1053ea:
    X86_TICK(c, 45);
    // 1053ea  add dword ptr [0xdfdf8], 0xfffffff4
    X86_AT(c, 0x1053eau);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xDFDF8u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0xFFFFFFF4u, 0, 4)); }
    // 1053f1  mov eax, 0xdfe08
    X86_AT(c, 0x1053f1u);
    c.r[0] = 0xDFE08u;
    // 1053f6  mov edx, dword ptr [0xdfdf8]
    X86_AT(c, 0x1053f6u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(0xDFDF8u)));
    // 1053fc  push esi
    X86_AT(c, 0x1053fcu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 1053fd  push edi
    X86_AT(c, 0x1053fdu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 1053fe  mov esi, eax
    X86_AT(c, 0x1053feu);
    c.r[6] = c.r[0];
    // 105400  mov edi, edx
    X86_AT(c, 0x105400u);
    c.r[7] = c.r[2];
    // 105402  mov ecx, 3
    X86_AT(c, 0x105402u);
    c.r[1] = 0x3u;
    // 105407  movsd dword ptr es:[edi], dword ptr [esi]
    X86_AT(c, 0x105407u);
    x86_string(c, 0, 4, 243, 4, 3);
    // 105409  pop edi
    X86_AT(c, 0x105409u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 10540a  pop esi
    X86_AT(c, 0x10540au);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 10540b  jmp 0x1054b2
    X86_AT(c, 0x10540bu);
    goto L_1054b2;
L_105410:
    X86_TICK(c, 69);
    // 105410  add dword ptr [0xdfdf8], 0xfffffff4
    X86_AT(c, 0x105410u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xDFDF8u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0xFFFFFFF4u, 0, 4)); }
    // 105417  mov al, byte ptr [ebp - 0xa]
    X86_AT(c, 0x105417u);
    s8(c, 0, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF6u))));
    // 10541a  cmp al, byte ptr [esi + 0xa]
    X86_AT(c, 0x10541au);
    (void)x86_sub(c, g8(c, 0), rd8((c.sbase[3] + (uint32_t)(c.r[6] + 0xAu))), 0, 1);
    // 10541d  setne byte ptr [ebp - 0xa]
    X86_AT(c, 0x10541du);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF6u)), x86_cc(c, 5) ? 1u : 0u);
    // 105421  mov ax, word ptr [ebp - 0xc]
    X86_AT(c, 0x105421u);
    s16(c, 0, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u))));
    // 105425  sub ax, 0x3fff
    X86_AT(c, 0x105425u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_sub(c, v, 0x3FFFu, 0, 2)); }
    // 105429  add ax, word ptr [esi + 8]
    X86_AT(c, 0x105429u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[3] + (uint32_t)(c.r[6] + 0x8u))), 0, 2)); }
    // 10542d  inc eax
    X86_AT(c, 0x10542du);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 10542e  mov word ptr [ebp - 0xc], ax
    X86_AT(c, 0x10542eu);
    wr16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)), (c.r[0] & 0xFFFFu));
    // 105432  push dword ptr [esi + 4]
    X86_AT(c, 0x105432u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0x4u))); push32(c, v); }
    // 105435  push dword ptr [esi]
    X86_AT(c, 0x105435u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[6]))); push32(c, v); }
    // 105437  push dword ptr [ebp - 0x10]
    X86_AT(c, 0x105437u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u))); push32(c, v); }
    // 10543a  push dword ptr [ebp - 0x14]
    X86_AT(c, 0x10543au);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu))); push32(c, v); }
    // 10543d  lea eax, [ebp - 0x24]
    X86_AT(c, 0x10543du);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFDCu);
    // 105440  push eax
    X86_AT(c, 0x105440u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 105441  call 0x105a2c
    X86_AT(c, 0x105441u);
    push32(c, 0x105446u); f_00105a2c(c); X86_RET(c, 0x105446u);
    X86_TICK(c, 9);
    // 105446  mov di, 0x80
    X86_AT(c, 0x105446u);
    s16(c, 7, 0x80u);
    // 10544a  jmp 0x10545a
    X86_AT(c, 0x10544au);
    goto L_10545a;
L_10544c:
    X86_TICK(c, 19);
    // 10544c  dec word ptr [ebp - 0xc]
    X86_AT(c, 0x10544cu);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)); uint32_t v = rd16(ea); wr16(ea, x86_dec(c, v, 2)); }
    // 105450  dec edi
    X86_AT(c, 0x105450u);
    { uint32_t v = c.r[7]; c.r[7] = x86_dec(c, v, 4); }
    // 105451  lea eax, [ebp - 0x24]
    X86_AT(c, 0x105451u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFDCu);
    // 105454  push eax
    X86_AT(c, 0x105454u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 105455  call 0x103fd7
    X86_AT(c, 0x105455u);
    push32(c, 0x10545au); f_00103fd7(c); X86_RET(c, 0x10545au);
L_10545a:
    X86_TICK(c, 12);
    // 10545a  cmp byte ptr [ebp - 0x15], 0x80
    X86_AT(c, 0x10545au);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFEBu))), 0x80u, 0, 1);
    // 10545e  jae 0x105465
    X86_AT(c, 0x10545eu);
    if (x86_cc(c, 3)) { goto L_105465; }
    X86_TICK(c, 7);
    // 105460  and di, di
    X86_AT(c, 0x105460u);
    { uint32_t v = (c.r[7] & 0xFFFFu); s16(c, 7, x86_logic(c, v & (c.r[7] & 0xFFFFu), 2)); }
    // 105463  ja 0x10544c
    X86_AT(c, 0x105463u);
    if (x86_cc(c, 7)) { X86_POLL(c, 0x10544cu); goto L_10544c; }
L_105465:
    X86_TICK(c, 24);
    // 105465  mov eax, dword ptr [ebp - 0x1c]
    X86_AT(c, 0x105465u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE4u)));
    // 105468  mov edx, dword ptr [ebp - 0x18]
    X86_AT(c, 0x105468u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE8u)));
    // 10546b  mov dword ptr [ebp - 0x14], eax
    X86_AT(c, 0x10546bu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu)), c.r[0]);
    // 10546e  mov dword ptr [ebp - 0x10], edx
    X86_AT(c, 0x10546eu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u)), c.r[2]);
    // 105471  cmp byte ptr [ebp - 0x1d], 0x80
    X86_AT(c, 0x105471u);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE3u))), 0x80u, 0, 1);
    // 105475  jb 0x105494
    X86_AT(c, 0x105475u);
    if (x86_cc(c, 2)) { goto L_105494; }
    X86_TICK(c, 21);
    // 105477  mov dword ptr [ebp - 4], 0
    X86_AT(c, 0x105477u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), 0x0u);
    // 10547e  mov dword ptr [ebp - 8], 1
    X86_AT(c, 0x10547eu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), 0x1u);
    // 105485  push 4
    X86_AT(c, 0x105485u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 105487  lea eax, [ebp - 8]
    X86_AT(c, 0x105487u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFF8u);
    // 10548a  push eax
    X86_AT(c, 0x10548au);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 10548b  lea eax, [ebp - 0x14]
    X86_AT(c, 0x10548bu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFECu);
    // 10548e  push eax
    X86_AT(c, 0x10548eu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 10548f  call 0x103ea0
    X86_AT(c, 0x10548fu);
    push32(c, 0x105494u); f_00103ea0(c); X86_RET(c, 0x105494u);
L_105494:
    X86_TICK(c, 40);
    // 105494  lea eax, [ebp - 0x14]
    X86_AT(c, 0x105494u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFECu);
    // 105497  mov edx, dword ptr [0xdfdf8]
    X86_AT(c, 0x105497u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(0xDFDF8u)));
    // 10549d  push esi
    X86_AT(c, 0x10549du);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 10549e  push edi
    X86_AT(c, 0x10549eu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 10549f  mov esi, eax
    X86_AT(c, 0x10549fu);
    c.r[6] = c.r[0];
    // 1054a1  mov edi, edx
    X86_AT(c, 0x1054a1u);
    c.r[7] = c.r[2];
    // 1054a3  mov ecx, 3
    X86_AT(c, 0x1054a3u);
    c.r[1] = 0x3u;
    // 1054a8  movsd dword ptr es:[edi], dword ptr [esi]
    X86_AT(c, 0x1054a8u);
    x86_string(c, 0, 4, 243, 4, 3);
    // 1054aa  pop edi
    X86_AT(c, 0x1054aau);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 1054ab  pop esi
    X86_AT(c, 0x1054abu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 1054ac  push edx
    X86_AT(c, 0x1054acu);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 1054ad  call 0x104030
    X86_AT(c, 0x1054adu);
    push32(c, 0x1054b2u); f_00104030(c); X86_RET(c, 0x1054b2u);
L_1054b2:
    X86_TICK(c, 24);
    // 1054b2  pop edi
    X86_AT(c, 0x1054b2u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 1054b3  pop esi
    X86_AT(c, 0x1054b3u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 1054b4  leave 
    X86_AT(c, 0x1054b4u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 1054b5  ret 
    X86_AT(c, 0x1054b5u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x105394u, "ran off the end of a function");
}
void f_001054b2(X86Cpu& c) {
    X86_TICK(c, 24);
    // 1054b2  pop edi
    X86_AT(c, 0x1054b2u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 1054b3  pop esi
    X86_AT(c, 0x1054b3u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 1054b4  leave 
    X86_AT(c, 0x1054b4u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 1054b5  ret 
    X86_AT(c, 0x1054b5u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x1054b2u, "ran off the end of a function");
}
void f_001054b8(X86Cpu& c) {
    X86_TICK(c, 7);
    // 1054b8  call 0x104158
    X86_AT(c, 0x1054b8u);
    push32(c, 0x1054bdu); f_00104158(c); X86_RET(c, 0x1054bdu);
    X86_TICK(c, 7);
    // 1054bd  call 0x1054c4
    X86_AT(c, 0x1054bdu);
    push32(c, 0x1054c2u); f_001054c4(c); X86_RET(c, 0x1054c2u);
    X86_TICK(c, 10);
    // 1054c2  ret 
    X86_AT(c, 0x1054c2u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x1054b8u, "ran off the end of a function");
}
void f_001054c4(X86Cpu& c) {
    X86_TICK(c, 18);
    // 1054c4  push ebx
    X86_AT(c, 0x1054c4u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 1054c5  push esi
    X86_AT(c, 0x1054c5u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 1054c6  push edi
    X86_AT(c, 0x1054c6u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 1054c7  cmp byte ptr [0xdfd2f], 0
    X86_AT(c, 0x1054c7u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0xDFD2Fu))), 0x0u, 0, 1);
    // 1054ce  je 0x1054e6
    X86_AT(c, 0x1054ceu);
    if (x86_cc(c, 4)) { goto L_1054e6; }
    X86_TICK(c, 20);
    // 1054d0  push dword ptr [0xdfdf8]
    X86_AT(c, 0x1054d0u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xDFDF8u))); push32(c, v); }
    // 1054d6  mov eax, dword ptr [0xdfdf8]
    X86_AT(c, 0x1054d6u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xDFDF8u)));
    // 1054db  sub eax, 0xc
    X86_AT(c, 0x1054dbu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, 0xCu, 0, 4); }
    // 1054de  push eax
    X86_AT(c, 0x1054deu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 1054df  call 0x103cb0
    X86_AT(c, 0x1054dfu);
    push32(c, 0x1054e4u); f_00103cb0(c); X86_RET(c, 0x1054e4u);
    X86_TICK(c, 7);
    // 1054e4  jmp 0x105537
    X86_AT(c, 0x1054e4u);
    goto L_105537;
L_1054e6:
    X86_TICK(c, 35);
    // 1054e6  mov eax, dword ptr [0xdfdf8]
    X86_AT(c, 0x1054e6u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xDFDF8u)));
    // 1054eb  mov dl, byte ptr [eax + 0xa]
    X86_AT(c, 0x1054ebu);
    s8(c, 2, rd8((c.sbase[3] + (uint32_t)(c.r[0] + 0xAu))));
    // 1054ee  cmp dl, byte ptr [eax - 2]
    X86_AT(c, 0x1054eeu);
    (void)x86_sub(c, g8(c, 2), rd8((c.sbase[3] + (uint32_t)(c.r[0] + 0xFFFFFFFEu))), 0, 1);
    // 1054f1  setne byte ptr [eax - 2]
    X86_AT(c, 0x1054f1u);
    wr8((c.sbase[3] + (uint32_t)(c.r[0] + 0xFFFFFFFEu)), x86_cc(c, 5) ? 1u : 0u);
    // 1054f5  mov eax, dword ptr [0xdfdf8]
    X86_AT(c, 0x1054f5u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xDFDF8u)));
    // 1054fa  cmp byte ptr [eax + 0xb], 0
    X86_AT(c, 0x1054fau);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[0] + 0xBu))), 0x0u, 0, 1);
    // 1054fe  je 0x10552c
    X86_AT(c, 0x1054feu);
    if (x86_cc(c, 4)) { goto L_10552c; }
    X86_TICK(c, 36);
    // 105500  add dword ptr [0xdfdf8], 0xfffffff4
    X86_AT(c, 0x105500u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xDFDF8u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0xFFFFFFF4u, 0, 4)); }
    // 105507  mov ax, word ptr [0xdfe28]
    X86_AT(c, 0x105507u);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(0xDFE28u))));
    // 10550d  mov edx, dword ptr [0xdfdf8]
    X86_AT(c, 0x10550du);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(0xDFDF8u)));
    // 105513  mov word ptr [edx + 8], ax
    X86_AT(c, 0x105513u);
    wr16((c.sbase[3] + (uint32_t)(c.r[2] + 0x8u)), (c.r[0] & 0xFFFFu));
    // 105517  mov eax, dword ptr [0xdfe20]
    X86_AT(c, 0x105517u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xDFE20u)));
    // 10551c  mov ecx, dword ptr [0xdfe24]
    X86_AT(c, 0x10551cu);
    c.r[1] = rd32((c.sbase[3] + (uint32_t)(0xDFE24u)));
    // 105522  mov dword ptr [edx], eax
    X86_AT(c, 0x105522u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2])), c.r[0]);
    // 105524  mov dword ptr [edx + 4], ecx
    X86_AT(c, 0x105524u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0x4u)), c.r[1]);
    // 105527  jmp 0x10560e
    X86_AT(c, 0x105527u);
    goto L_10560e;
L_10552c:
    X86_TICK(c, 16);
    // 10552c  mov eax, dword ptr [0xdfdf8]
    X86_AT(c, 0x10552cu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xDFDF8u)));
    // 105531  cmp byte ptr [eax - 1], 0
    X86_AT(c, 0x105531u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[0] + 0xFFFFFFFFu))), 0x0u, 0, 1);
    // 105535  je 0x10555a
    X86_AT(c, 0x105535u);
    if (x86_cc(c, 4)) { goto L_10555a; }
L_105537:
    X86_TICK(c, 14);
    // 105537  add dword ptr [0xdfdf8], 0xfffffff4
    X86_AT(c, 0x105537u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xDFDF8u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0xFFFFFFF4u, 0, 4)); }
    // 10553e  jmp 0x10560e
    X86_AT(c, 0x10553eu);
    goto L_10560e;
L_105543:
    X86_TICK(c, 15);
    // 105543  mov eax, dword ptr [0xdfdf8]
    X86_AT(c, 0x105543u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xDFDF8u)));
    // 105548  sub eax, 0xc
    X86_AT(c, 0x105548u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, 0xCu, 0, 4); }
    // 10554b  push eax
    X86_AT(c, 0x10554bu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 10554c  call 0x103f78
    X86_AT(c, 0x10554cu);
    push32(c, 0x105551u); f_00103f78(c); X86_RET(c, 0x105551u);
    X86_TICK(c, 10);
    // 105551  mov eax, dword ptr [0xdfdf8]
    X86_AT(c, 0x105551u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xDFDF8u)));
    // 105556  dec word ptr [eax - 4]
    X86_AT(c, 0x105556u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[0] + 0xFFFFFFFCu)); uint32_t v = rd16(ea); wr16(ea, x86_dec(c, v, 2)); }
L_10555a:
    X86_TICK(c, 16);
    // 10555a  mov eax, dword ptr [0xdfdf8]
    X86_AT(c, 0x10555au);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xDFDF8u)));
    // 10555f  cmp byte ptr [eax - 5], 0x80
    X86_AT(c, 0x10555fu);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[0] + 0xFFFFFFFBu))), 0x80u, 0, 1);
    // 105563  jb 0x105543
    X86_AT(c, 0x105563u);
    if (x86_cc(c, 2)) { X86_POLL(c, 0x105543u); goto L_105543; }
    X86_TICK(c, 7);
    // 105565  jmp 0x10557b
    X86_AT(c, 0x105565u);
    goto L_10557b;
L_105567:
    X86_TICK(c, 12);
    // 105567  push dword ptr [0xdfdf8]
    X86_AT(c, 0x105567u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xDFDF8u))); push32(c, v); }
    // 10556d  call 0x103f78
    X86_AT(c, 0x10556du);
    push32(c, 0x105572u); f_00103f78(c); X86_RET(c, 0x105572u);
    X86_TICK(c, 10);
    // 105572  mov eax, dword ptr [0xdfdf8]
    X86_AT(c, 0x105572u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xDFDF8u)));
    // 105577  dec word ptr [eax + 8]
    X86_AT(c, 0x105577u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[0] + 0x8u)); uint32_t v = rd16(ea); wr16(ea, x86_dec(c, v, 2)); }
L_10557b:
    X86_TICK(c, 16);
    // 10557b  mov eax, dword ptr [0xdfdf8]
    X86_AT(c, 0x10557bu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xDFDF8u)));
    // 105580  cmp byte ptr [eax + 7], 0x80
    X86_AT(c, 0x105580u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[0] + 0x7u))), 0x80u, 0, 1);
    // 105584  jb 0x105567
    X86_AT(c, 0x105584u);
    if (x86_cc(c, 2)) { X86_POLL(c, 0x105567u); goto L_105567; }
    X86_TICK(c, 35);
    // 105586  push dword ptr [eax + 4]
    X86_AT(c, 0x105586u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0x4u))); push32(c, v); }
    // 105589  push dword ptr [eax]
    X86_AT(c, 0x105589u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[0]))); push32(c, v); }
    // 10558b  push dword ptr [eax - 8]
    X86_AT(c, 0x10558bu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0xFFFFFFF8u))); push32(c, v); }
    // 10558e  push dword ptr [eax - 0xc]
    X86_AT(c, 0x10558eu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0xFFFFFFF4u))); push32(c, v); }
    // 105591  lea edx, [eax - 0xc]
    X86_AT(c, 0x105591u);
    c.r[2] = (uint32_t)(c.r[0] + 0xFFFFFFF4u);
    // 105594  push edx
    X86_AT(c, 0x105594u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 105595  mov ebx, eax
    X86_AT(c, 0x105595u);
    c.r[3] = c.r[0];
    // 105597  mov esi, edx
    X86_AT(c, 0x105597u);
    c.r[6] = c.r[2];
    // 105599  call 0x105a78
    X86_AT(c, 0x105599u);
    push32(c, 0x10559eu); f_00105a78(c); X86_RET(c, 0x10559eu);
    X86_TICK(c, 35);
    // 10559e  movzx eax, ax
    X86_AT(c, 0x10559eu);
    c.r[0] = (c.r[0] & 0xFFFFu);
    // 1055a1  movzx edx, word ptr [ebx + 8]
    X86_AT(c, 0x1055a1u);
    c.r[2] = rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x8u)));
    // 1055a5  movzx edi, word ptr [esi + 8]
    X86_AT(c, 0x1055a5u);
    c.r[7] = rd16((c.sbase[3] + (uint32_t)(c.r[6] + 0x8u)));
    // 1055a9  sub edi, edx
    X86_AT(c, 0x1055a9u);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[2], 0, 4); }
    // 1055ab  add edi, 0x403e
    X86_AT(c, 0x1055abu);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x403Eu, 0, 4); }
    // 1055b1  sub edi, eax
    X86_AT(c, 0x1055b1u);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[0], 0, 4); }
    // 1055b3  add dword ptr [0xdfdf8], 0xfffffff4
    X86_AT(c, 0x1055b3u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xDFDF8u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0xFFFFFFF4u, 0, 4)); }
    // 1055ba  and edi, edi
    X86_AT(c, 0x1055bau);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & c.r[7], 4); }
    // 1055bc  jge 0x1055f7
    X86_AT(c, 0x1055bcu);
    if (x86_cc(c, 13)) { goto L_1055f7; }
    X86_TICK(c, 7);
    // 1055be  cmp edi, 0xffffffc1
    X86_AT(c, 0x1055beu);
    (void)x86_sub(c, c.r[7], 0xFFFFFFC1u, 0, 4);
    // 1055c1  jl 0x1055e0
    X86_AT(c, 0x1055c1u);
    if (x86_cc(c, 12)) { goto L_1055e0; }
    X86_TICK(c, 18);
    // 1055c3  mov eax, edi
    X86_AT(c, 0x1055c3u);
    c.r[0] = c.r[7];
    // 1055c5  neg eax
    X86_AT(c, 0x1055c5u);
    { uint32_t v = c.r[0]; c.r[0] = x86_neg(c, v, 4); }
    // 1055c7  push eax
    X86_AT(c, 0x1055c7u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 1055c8  push dword ptr [0xdfdf8]
    X86_AT(c, 0x1055c8u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xDFDF8u))); push32(c, v); }
    // 1055ce  call 0x103f94
    X86_AT(c, 0x1055ceu);
    push32(c, 0x1055d3u); f_00103f94(c); X86_RET(c, 0x1055d3u);
    X86_TICK(c, 13);
    // 1055d3  mov eax, dword ptr [0xdfdf8]
    X86_AT(c, 0x1055d3u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xDFDF8u)));
    // 1055d8  mov word ptr [eax + 8], 0
    X86_AT(c, 0x1055d8u);
    wr16((c.sbase[3] + (uint32_t)(c.r[0] + 0x8u)), 0x0u);
    // 1055de  jmp 0x105603
    X86_AT(c, 0x1055deu);
    goto L_105603;
L_1055e0:
    X86_TICK(c, 30);
    // 1055e0  mov esi, 0xdfe08
    X86_AT(c, 0x1055e0u);
    c.r[6] = 0xDFE08u;
    // 1055e5  mov eax, dword ptr [0xdfdf8]
    X86_AT(c, 0x1055e5u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xDFDF8u)));
    // 1055ea  push edi
    X86_AT(c, 0x1055eau);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 1055eb  mov edi, eax
    X86_AT(c, 0x1055ebu);
    c.r[7] = c.r[0];
    // 1055ed  mov ecx, 3
    X86_AT(c, 0x1055edu);
    c.r[1] = 0x3u;
    // 1055f2  movsd dword ptr es:[edi], dword ptr [esi]
    X86_AT(c, 0x1055f2u);
    x86_string(c, 0, 4, 243, 4, 3);
    // 1055f4  pop edi
    X86_AT(c, 0x1055f4u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 1055f5  jmp 0x105603
    X86_AT(c, 0x1055f5u);
    goto L_105603;
L_1055f7:
    X86_TICK(c, 8);
    // 1055f7  mov eax, edi
    X86_AT(c, 0x1055f7u);
    c.r[0] = c.r[7];
    // 1055f9  mov edx, dword ptr [0xdfdf8]
    X86_AT(c, 0x1055f9u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(0xDFDF8u)));
    // 1055ff  mov word ptr [edx + 8], ax
    X86_AT(c, 0x1055ffu);
    wr16((c.sbase[3] + (uint32_t)(c.r[2] + 0x8u)), (c.r[0] & 0xFFFFu));
L_105603:
    X86_TICK(c, 12);
    // 105603  push dword ptr [0xdfdf8]
    X86_AT(c, 0x105603u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xDFDF8u))); push32(c, v); }
    // 105609  call 0x104030
    X86_AT(c, 0x105609u);
    push32(c, 0x10560eu); f_00104030(c); X86_RET(c, 0x10560eu);
L_10560e:
    X86_TICK(c, 22);
    // 10560e  pop edi
    X86_AT(c, 0x10560eu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 10560f  pop esi
    X86_AT(c, 0x10560fu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 105610  pop ebx
    X86_AT(c, 0x105610u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 105611  ret 
    X86_AT(c, 0x105611u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x1054c4u, "ran off the end of a function");
}
void f_0010560e(X86Cpu& c) {
    X86_TICK(c, 22);
    // 10560e  pop edi
    X86_AT(c, 0x10560eu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 10560f  pop esi
    X86_AT(c, 0x10560fu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 105610  pop ebx
    X86_AT(c, 0x105610u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 105611  ret 
    X86_AT(c, 0x105611u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x10560eu, "ran off the end of a function");
}
void f_00105614(X86Cpu& c) {
    X86_TICK(c, 27);
    // 105614  push ebp
    X86_AT(c, 0x105614u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 105615  mov ebp, esp
    X86_AT(c, 0x105615u);
    c.r[5] = c.r[4];
    // 105617  mov eax, dword ptr [ebp + 0xc]
    X86_AT(c, 0x105617u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 10561a  mov ecx, eax
    X86_AT(c, 0x10561au);
    c.r[1] = c.r[0];
    // 10561c  shl ecx, 1
    X86_AT(c, 0x10561cu);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 4, v, 0x1u, 4, w); if (w) c.r[1] = r; }
    // 10561e  shr ecx, 0x18
    X86_AT(c, 0x10561eu);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 5, v, 0x18u, 4, w); if (w) c.r[1] = r; }
    // 105621  mov edx, dword ptr [ebp + 8]
    X86_AT(c, 0x105621u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 105624  cmp cl, 0xff
    X86_AT(c, 0x105624u);
    (void)x86_sub(c, g8(c, 1), 0xFFu, 0, 1);
    // 105627  je 0x105669
    X86_AT(c, 0x105627u);
    if (x86_cc(c, 4)) { goto L_105669; }
    X86_TICK(c, 7);
    // 105629  and cl, cl
    X86_AT(c, 0x105629u);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_logic(c, v & g8(c, 1), 1)); }
    // 10562b  je 0x105673
    X86_AT(c, 0x10562bu);
    if (x86_cc(c, 4)) { goto L_105673; }
    X86_TICK(c, 6);
    // 10562d  mov byte ptr [edx + 0xb], 0
    X86_AT(c, 0x10562du);
    wr8((c.sbase[3] + (uint32_t)(c.r[2] + 0xBu)), 0x0u);
    // 105631  sub cx, 0x7f
    X86_AT(c, 0x105631u);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_sub(c, v, 0x7Fu, 0, 2)); }
    // 105635  add cx, 0x3fff
    X86_AT(c, 0x105635u);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_add(c, v, 0x3FFFu, 0, 2)); }
L_10563a:
    X86_TICK(c, 9);
    // 10563a  mov word ptr [edx + 8], cx
    X86_AT(c, 0x10563au);
    wr16((c.sbase[3] + (uint32_t)(c.r[2] + 0x8u)), (c.r[1] & 0xFFFFu));
    // 10563e  test eax, 0x80000000
    X86_AT(c, 0x10563eu);
    (void)x86_logic(c, c.r[0] & 0x80000000u, 4);
    // 105643  je 0x10564b
    X86_AT(c, 0x105643u);
    if (x86_cc(c, 4)) { goto L_10564b; }
    X86_TICK(c, 9);
    // 105645  mov byte ptr [edx + 0xa], 1
    X86_AT(c, 0x105645u);
    wr8((c.sbase[3] + (uint32_t)(c.r[2] + 0xAu)), 0x1u);
    // 105649  jmp 0x10564f
    X86_AT(c, 0x105649u);
    goto L_10564f;
L_10564b:
    X86_TICK(c, 2);
    // 10564b  mov byte ptr [edx + 0xa], 0
    X86_AT(c, 0x10564bu);
    wr8((c.sbase[3] + (uint32_t)(c.r[2] + 0xAu)), 0x0u);
L_10564f:
    X86_TICK(c, 10);
    // 10564f  shl eax, 8
    X86_AT(c, 0x10564fu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 105652  and cx, cx
    X86_AT(c, 0x105652u);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_logic(c, v & (c.r[1] & 0xFFFFu), 2)); }
    // 105655  je 0x10565c
    X86_AT(c, 0x105655u);
    if (x86_cc(c, 4)) { goto L_10565c; }
    X86_TICK(c, 2);
    // 105657  or eax, 0x80000000
    X86_AT(c, 0x105657u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v | 0x80000000u, 4); }
L_10565c:
    X86_TICK(c, 18);
    // 10565c  mov dword ptr [edx + 4], eax
    X86_AT(c, 0x10565cu);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0x4u)), c.r[0]);
    // 10565f  mov dword ptr [edx], 0
    X86_AT(c, 0x10565fu);
    wr32((c.sbase[3] + (uint32_t)(c.r[2])), 0x0u);
    // 105665  pop ebp
    X86_AT(c, 0x105665u);
    { uint32_t v = pop32(c); c.r[5] = v; }
    // 105666  ret 8
    X86_AT(c, 0x105666u);
    c.eip = pop32(c); c.r[4] += 0x8u; return;
L_105669:
    X86_TICK(c, 11);
    // 105669  mov cx, 0x7fff
    X86_AT(c, 0x105669u);
    s16(c, 1, 0x7FFFu);
    // 10566d  mov byte ptr [edx + 0xb], 0
    X86_AT(c, 0x10566du);
    wr8((c.sbase[3] + (uint32_t)(c.r[2] + 0xBu)), 0x0u);
    // 105671  jmp 0x10563a
    X86_AT(c, 0x105671u);
    X86_POLL(c, 0x10563au); goto L_10563a;
L_105673:
    X86_TICK(c, 9);
    // 105673  mov byte ptr [edx + 0xb], 1
    X86_AT(c, 0x105673u);
    wr8((c.sbase[3] + (uint32_t)(c.r[2] + 0xBu)), 0x1u);
    // 105677  jmp 0x10563a
    X86_AT(c, 0x105677u);
    X86_POLL(c, 0x10563au); goto L_10563a;
    x86_fault(c, 0x105614u, "ran off the end of a function");
}
void f_001056dc(X86Cpu& c) {
    X86_TICK(c, 24);
    // 1056dc  enter 0x10, 0
    X86_AT(c, 0x1056dcu);
    x86_enter(c, 0x10u, 0x0u, 4);
    // 1056e0  push ebx
    X86_AT(c, 0x1056e0u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 1056e1  push esi
    X86_AT(c, 0x1056e1u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 1056e2  push edi
    X86_AT(c, 0x1056e2u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 1056e3  cmp byte ptr [0xdfd2f], 0
    X86_AT(c, 0x1056e3u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0xDFD2Fu))), 0x0u, 0, 1);
    // 1056ea  je 0x10570a
    X86_AT(c, 0x1056eau);
    if (x86_cc(c, 4)) { goto L_10570a; }
    X86_TICK(c, 12);
    // 1056ec  push dword ptr [0xdfdf8]
    X86_AT(c, 0x1056ecu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xDFDF8u))); push32(c, v); }
    // 1056f2  call 0x103d1e
    X86_AT(c, 0x1056f2u);
    push32(c, 0x1056f7u); f_00103d1e(c); X86_RET(c, 0x1056f7u);
    X86_TICK(c, 7);
    // 1056f7  call 0x103d67
    X86_AT(c, 0x1056f7u);
    push32(c, 0x1056fcu); f_00103d67(c); X86_RET(c, 0x1056fcu);
    X86_TICK(c, 9);
    // 1056fc  mov word ptr [ebp - 2], ax
    X86_AT(c, 0x1056fcu);
    wr16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFEu)), (c.r[0] & 0xFFFFu));
    // 105700  call 0x103d27
    X86_AT(c, 0x105700u);
    push32(c, 0x105705u); f_00103d27(c); X86_RET(c, 0x105705u);
    X86_TICK(c, 7);
    // 105705  jmp 0x105791
    X86_AT(c, 0x105705u);
    goto L_105791;
L_10570a:
    X86_TICK(c, 13);
    // 10570a  mov eax, 0xdfd5c
    X86_AT(c, 0x10570au);
    c.r[0] = 0xDFD5Cu;
    // 10570f  cmp eax, dword ptr [0xdfdf8]
    X86_AT(c, 0x10570fu);
    (void)x86_sub(c, c.r[0], rd32((c.sbase[3] + (uint32_t)(0xDFDF8u))), 0, 4);
    // 105715  jne 0x10571b
    X86_AT(c, 0x105715u);
    if (x86_cc(c, 5)) { goto L_10571b; }
    X86_TICK(c, 9);
    // 105717  mov bl, 0x41
    X86_AT(c, 0x105717u);
    s8(c, 3, 0x41u);
    // 105719  jmp 0x105773
    X86_AT(c, 0x105719u);
    goto L_105773;
L_10571b:
    X86_TICK(c, 33);
    // 10571b  mov esi, dword ptr [0xdfdf8]
    X86_AT(c, 0x10571bu);
    c.r[6] = rd32((c.sbase[3] + (uint32_t)(0xDFDF8u)));
    // 105721  lea edi, [ebp - 0x10]
    X86_AT(c, 0x105721u);
    c.r[7] = (uint32_t)(c.r[5] + 0xFFFFFFF0u);
    // 105724  mov ecx, 3
    X86_AT(c, 0x105724u);
    c.r[1] = 0x3u;
    // 105729  movsd dword ptr es:[edi], dword ptr [esi]
    X86_AT(c, 0x105729u);
    x86_string(c, 0, 4, 243, 4, 3);
    // 10572b  mov bl, byte ptr [ebp - 6]
    X86_AT(c, 0x10572bu);
    s8(c, 3, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFAu))));
    // 10572e  add ebx, ebx
    X86_AT(c, 0x10572eu);
    { uint32_t v = c.r[3]; c.r[3] = x86_add(c, v, c.r[3], 0, 4); }
    // 105730  cmp byte ptr [ebp - 5], 0
    X86_AT(c, 0x105730u);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFBu))), 0x0u, 0, 1);
    // 105734  je 0x10573b
    X86_AT(c, 0x105734u);
    if (x86_cc(c, 4)) { goto L_10573b; }
    X86_TICK(c, 9);
    // 105736  or bl, 0x40
    X86_AT(c, 0x105736u);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v | 0x40u, 1)); }
    // 105739  jmp 0x105773
    X86_AT(c, 0x105739u);
    goto L_105773;
L_10573b:
    X86_TICK(c, 12);
    // 10573b  cmp word ptr [ebp - 8], 0x7fff
    X86_AT(c, 0x10573bu);
    (void)x86_sub(c, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u))), 0x7FFFu, 0, 2);
    // 105741  jne 0x10575e
    X86_AT(c, 0x105741u);
    if (x86_cc(c, 5)) { goto L_10575e; }
    X86_TICK(c, 18);
    // 105743  lea esi, [ebp - 0x10]
    X86_AT(c, 0x105743u);
    c.r[6] = (uint32_t)(c.r[5] + 0xFFFFFFF0u);
    // 105746  mov edi, 0xdfe20
    X86_AT(c, 0x105746u);
    c.r[7] = 0xDFE20u;
    // 10574b  mov ecx, 8
    X86_AT(c, 0x10574bu);
    c.r[1] = 0x8u;
    // 105750  cmpsb byte ptr [esi], byte ptr es:[edi]
    X86_AT(c, 0x105750u);
    x86_string(c, 1, 1, 243, 4, 3);
    // 105752  jne 0x105759
    X86_AT(c, 0x105752u);
    if (x86_cc(c, 5)) { goto L_105759; }
    X86_TICK(c, 9);
    // 105754  or bl, 5
    X86_AT(c, 0x105754u);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v | 0x5u, 1)); }
    // 105757  jmp 0x105773
    X86_AT(c, 0x105757u);
    goto L_105773;
L_105759:
    X86_TICK(c, 9);
    // 105759  or bl, 1
    X86_AT(c, 0x105759u);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v | 0x1u, 1)); }
    // 10575c  jmp 0x105773
    X86_AT(c, 0x10575cu);
    goto L_105773;
L_10575e:
    X86_TICK(c, 12);
    // 10575e  cmp word ptr [ebp - 8], 0
    X86_AT(c, 0x10575eu);
    (void)x86_sub(c, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u))), 0x0u, 0, 2);
    // 105763  jne 0x10576a
    X86_AT(c, 0x105763u);
    if (x86_cc(c, 5)) { goto L_10576a; }
    X86_TICK(c, 9);
    // 105765  or bl, 0x44
    X86_AT(c, 0x105765u);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v | 0x44u, 1)); }
    // 105768  jmp 0x105773
    X86_AT(c, 0x105768u);
    goto L_105773;
L_10576a:
    X86_TICK(c, 12);
    // 10576a  cmp byte ptr [ebp - 9], 0x80
    X86_AT(c, 0x10576au);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF7u))), 0x80u, 0, 1);
    // 10576e  jb 0x105773
    X86_AT(c, 0x10576eu);
    if (x86_cc(c, 2)) { goto L_105773; }
    X86_TICK(c, 2);
    // 105770  or bl, 4
    X86_AT(c, 0x105770u);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v | 0x4u, 1)); }
L_105773:
    X86_TICK(c, 27);
    // 105773  mov ax, word ptr [0xdfdfc]
    X86_AT(c, 0x105773u);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(0xDFDFCu))));
    // 105779  and ax, 0xb800
    X86_AT(c, 0x105779u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_logic(c, v & 0xB800u, 2)); }
    // 10577d  sub bh, bh
    X86_AT(c, 0x10577du);
    { uint32_t v = g8(c, 7); s8(c, 7, x86_sub(c, v, g8(c, 7), 0, 1)); }
    // 10577f  mov edx, ebx
    X86_AT(c, 0x10577fu);
    c.r[2] = c.r[3];
    // 105781  shl edx, 8
    X86_AT(c, 0x105781u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[2] = r; }
    // 105784  or dx, ax
    X86_AT(c, 0x105784u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_logic(c, v | (c.r[0] & 0xFFFFu), 2)); }
    // 105787  mov word ptr [0xdfdfc], dx
    X86_AT(c, 0x105787u);
    wr16((c.sbase[3] + (uint32_t)(0xDFDFCu)), (c.r[2] & 0xFFFFu));
    // 10578e  xchg edx, eax
    X86_AT(c, 0x10578eu);
    { uint32_t t = c.r[2]; c.r[2] = c.r[0]; c.r[0] = t; }
    // 10578f  jmp 0x105795
    X86_AT(c, 0x10578fu);
    goto L_105795;
L_105791:
    X86_TICK(c, 4);
    // 105791  mov ax, word ptr [ebp - 2]
    X86_AT(c, 0x105791u);
    s16(c, 0, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFEu))));
L_105795:
    X86_TICK(c, 28);
    // 105795  pop edi
    X86_AT(c, 0x105795u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 105796  pop esi
    X86_AT(c, 0x105796u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 105797  pop ebx
    X86_AT(c, 0x105797u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 105798  leave 
    X86_AT(c, 0x105798u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 105799  ret 
    X86_AT(c, 0x105799u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x1056dcu, "ran off the end of a function");
}
void f_0010579c(X86Cpu& c) {
    X86_TICK(c, 23);
    // 10579c  enter 0x1c, 0
    X86_AT(c, 0x10579cu);
    x86_enter(c, 0x1Cu, 0x0u, 4);
    // 1057a0  push ebx
    X86_AT(c, 0x1057a0u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 1057a1  push esi
    X86_AT(c, 0x1057a1u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 1057a2  push edi
    X86_AT(c, 0x1057a2u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 1057a3  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0x1057a3u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 1057a6  call 0x10400c
    X86_AT(c, 0x1057a6u);
    push32(c, 0x1057abu); f_0010400c(c); X86_RET(c, 0x1057abu);
    X86_TICK(c, 12);
    // 1057ab  cmp byte ptr [0xdfd2f], 0
    X86_AT(c, 0x1057abu);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0xDFD2Fu))), 0x0u, 0, 1);
    // 1057b2  je 0x1057ca
    X86_AT(c, 0x1057b2u);
    if (x86_cc(c, 4)) { goto L_1057ca; }
    X86_TICK(c, 9);
    // 1057b4  push edi
    X86_AT(c, 0x1057b4u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 1057b5  call 0x103d79
    X86_AT(c, 0x1057b5u);
    push32(c, 0x1057bau); f_00103d79(c); X86_RET(c, 0x1057bau);
    X86_TICK(c, 12);
    // 1057ba  push dword ptr [0xdfdf8]
    X86_AT(c, 0x1057bau);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xDFDF8u))); push32(c, v); }
    // 1057c0  call 0x103d14
    X86_AT(c, 0x1057c0u);
    push32(c, 0x1057c5u); f_00103d14(c); X86_RET(c, 0x1057c5u);
    X86_TICK(c, 7);
    // 1057c5  jmp 0x10588a
    X86_AT(c, 0x1057c5u);
    goto L_10588a;
L_1057ca:
    X86_TICK(c, 32);
    // 1057ca  mov byte ptr [ebp - 1], 0
    X86_AT(c, 0x1057cau);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFFu)), 0x0u);
    // 1057ce  cmp byte ptr [edi + 9], 0x80
    X86_AT(c, 0x1057ceu);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x9u))), 0x80u, 0, 1);
    // 1057d2  seta byte ptr [ebp - 2]
    X86_AT(c, 0x1057d2u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFEu)), x86_cc(c, 7) ? 1u : 0u);
    // 1057d6  mov eax, dword ptr [0xdfe00]
    X86_AT(c, 0x1057d6u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xDFE00u)));
    // 1057db  mov edx, dword ptr [0xdfe04]
    X86_AT(c, 0x1057dbu);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(0xDFE04u)));
    // 1057e1  mov dword ptr [ebp - 0xc], eax
    X86_AT(c, 0x1057e1u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)), c.r[0]);
    // 1057e4  mov dword ptr [ebp - 8], edx
    X86_AT(c, 0x1057e4u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), c.r[2]);
    // 1057e7  mov dword ptr [ebp - 0x1c], eax
    X86_AT(c, 0x1057e7u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE4u)), c.r[0]);
    // 1057ea  mov dword ptr [ebp - 0x18], edx
    X86_AT(c, 0x1057eau);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE8u)), c.r[2]);
    // 1057ed  mov si, 0x11
    X86_AT(c, 0x1057edu);
    s16(c, 6, 0x11u);
L_1057f1:
    X86_TICK(c, 10);
    // 1057f1  mov eax, esi
    X86_AT(c, 0x1057f1u);
    c.r[0] = c.r[6];
    // 1057f3  rcr ax, 1
    X86_AT(c, 0x1057f3u);
    { uint32_t v = (c.r[0] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 3, v, 0x1u, 2, w); if (w) s16(c, 0, r); }
    // 1057f6  jb 0x105808
    X86_AT(c, 0x1057f6u);
    if (x86_cc(c, 2)) { goto L_105808; }
    X86_TICK(c, 21);
    // 1057f8  mov eax, esi
    X86_AT(c, 0x1057f8u);
    c.r[0] = c.r[6];
    // 1057fa  shr ax, 1
    X86_AT(c, 0x1057fau);
    { uint32_t v = (c.r[0] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 2, w); if (w) s16(c, 0, r); }
    // 1057fd  movzx eax, ax
    X86_AT(c, 0x1057fdu);
    c.r[0] = (c.r[0] & 0xFFFFu);
    // 105800  mov bl, byte ptr [edi + eax*1]
    X86_AT(c, 0x105800u);
    s8(c, 3, rd8((c.sbase[3] + (uint32_t)(c.r[7] + c.r[0]))));
    // 105803  and bl, 0xf
    X86_AT(c, 0x105803u);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v & 0xFu, 1)); }
    // 105806  jmp 0x105816
    X86_AT(c, 0x105806u);
    goto L_105816;
L_105808:
    X86_TICK(c, 15);
    // 105808  mov eax, esi
    X86_AT(c, 0x105808u);
    c.r[0] = c.r[6];
    // 10580a  shr ax, 1
    X86_AT(c, 0x10580au);
    { uint32_t v = (c.r[0] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 2, w); if (w) s16(c, 0, r); }
    // 10580d  movzx eax, ax
    X86_AT(c, 0x10580du);
    c.r[0] = (c.r[0] & 0xFFFFu);
    // 105810  mov bl, byte ptr [edi + eax*1]
    X86_AT(c, 0x105810u);
    s8(c, 3, rd8((c.sbase[3] + (uint32_t)(c.r[7] + c.r[0]))));
    // 105813  shr bl, 4
    X86_AT(c, 0x105813u);
    { uint32_t v = g8(c, 3); bool w; uint32_t r = x86_shift(c, 5, v, 0x4u, 1, w); if (w) s8(c, 3, r); }
L_105816:
    X86_TICK(c, 11);
    // 105816  lea eax, [ebp - 0xc]
    X86_AT(c, 0x105816u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFF4u);
    // 105819  push eax
    X86_AT(c, 0x105819u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 10581a  call 0x103f78
    X86_AT(c, 0x10581au);
    push32(c, 0x10581fu); f_00103f78(c); X86_RET(c, 0x10581fu);
    X86_TICK(c, 23);
    // 10581f  mov eax, dword ptr [ebp - 0xc]
    X86_AT(c, 0x10581fu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)));
    // 105822  mov edx, dword ptr [ebp - 8]
    X86_AT(c, 0x105822u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)));
    // 105825  mov dword ptr [ebp - 0x14], eax
    X86_AT(c, 0x105825u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu)), c.r[0]);
    // 105828  mov dword ptr [ebp - 0x10], edx
    X86_AT(c, 0x105828u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u)), c.r[2]);
    // 10582b  lea eax, [ebp - 0xc]
    X86_AT(c, 0x10582bu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFF4u);
    // 10582e  push eax
    X86_AT(c, 0x10582eu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 10582f  call 0x103f78
    X86_AT(c, 0x10582fu);
    push32(c, 0x105834u); f_00103f78(c); X86_RET(c, 0x105834u);
    X86_TICK(c, 11);
    // 105834  lea eax, [ebp - 0xc]
    X86_AT(c, 0x105834u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFF4u);
    // 105837  push eax
    X86_AT(c, 0x105837u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 105838  call 0x103f78
    X86_AT(c, 0x105838u);
    push32(c, 0x10583du); f_00103f78(c); X86_RET(c, 0x10583du);
    X86_TICK(c, 17);
    // 10583d  push 4
    X86_AT(c, 0x10583du);
    { uint32_t v = 0x4u; push32(c, v); }
    // 10583f  lea eax, [ebp - 0x14]
    X86_AT(c, 0x10583fu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFECu);
    // 105842  push eax
    X86_AT(c, 0x105842u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 105843  lea eax, [ebp - 0xc]
    X86_AT(c, 0x105843u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFF4u);
    // 105846  push eax
    X86_AT(c, 0x105846u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 105847  call 0x103ea0
    X86_AT(c, 0x105847u);
    push32(c, 0x10584cu); f_00103ea0(c); X86_RET(c, 0x10584cu);
    X86_TICK(c, 19);
    // 10584c  mov byte ptr [ebp - 0x1c], bl
    X86_AT(c, 0x10584cu);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE4u)), g8(c, 3));
    // 10584f  push 4
    X86_AT(c, 0x10584fu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 105851  lea eax, [ebp - 0x1c]
    X86_AT(c, 0x105851u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFE4u);
    // 105854  push eax
    X86_AT(c, 0x105854u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 105855  lea eax, [ebp - 0xc]
    X86_AT(c, 0x105855u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFF4u);
    // 105858  push eax
    X86_AT(c, 0x105858u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 105859  call 0x103ea0
    X86_AT(c, 0x105859u);
    push32(c, 0x10585eu); f_00103ea0(c); X86_RET(c, 0x10585eu);
    X86_TICK(c, 7);
    // 10585e  and si, si
    X86_AT(c, 0x10585eu);
    { uint32_t v = (c.r[6] & 0xFFFFu); s16(c, 6, x86_logic(c, v & (c.r[6] & 0xFFFFu), 2)); }
    // 105861  jbe 0x105866
    X86_AT(c, 0x105861u);
    if (x86_cc(c, 6)) { goto L_105866; }
    X86_TICK(c, 9);
    // 105863  dec esi
    X86_AT(c, 0x105863u);
    { uint32_t v = c.r[6]; c.r[6] = x86_dec(c, v, 4); }
    // 105864  jmp 0x1057f1
    X86_AT(c, 0x105864u);
    X86_POLL(c, 0x1057f1u); goto L_1057f1;
L_105866:
    X86_TICK(c, 42);
    // 105866  mov word ptr [ebp - 4], 0x403e
    X86_AT(c, 0x105866u);
    wr16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), 0x403Eu);
    // 10586c  lea eax, [ebp - 0xc]
    X86_AT(c, 0x10586cu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFF4u);
    // 10586f  mov edx, dword ptr [0xdfdf8]
    X86_AT(c, 0x10586fu);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(0xDFDF8u)));
    // 105875  push esi
    X86_AT(c, 0x105875u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 105876  push edi
    X86_AT(c, 0x105876u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 105877  mov esi, eax
    X86_AT(c, 0x105877u);
    c.r[6] = c.r[0];
    // 105879  mov edi, edx
    X86_AT(c, 0x105879u);
    c.r[7] = c.r[2];
    // 10587b  mov ecx, 3
    X86_AT(c, 0x10587bu);
    c.r[1] = 0x3u;
    // 105880  movsd dword ptr es:[edi], dword ptr [esi]
    X86_AT(c, 0x105880u);
    x86_string(c, 0, 4, 243, 4, 3);
    // 105882  pop edi
    X86_AT(c, 0x105882u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 105883  pop esi
    X86_AT(c, 0x105883u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 105884  push edx
    X86_AT(c, 0x105884u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 105885  call 0x104030
    X86_AT(c, 0x105885u);
    push32(c, 0x10588au); f_00104030(c); X86_RET(c, 0x10588au);
L_10588a:
    X86_TICK(c, 28);
    // 10588a  pop edi
    X86_AT(c, 0x10588au);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 10588b  pop esi
    X86_AT(c, 0x10588bu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 10588c  pop ebx
    X86_AT(c, 0x10588cu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 10588d  leave 
    X86_AT(c, 0x10588du);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 10588e  ret 4
    X86_AT(c, 0x10588eu);
    c.eip = pop32(c); c.r[4] += 0x4u; return;
    x86_fault(c, 0x10579cu, "ran off the end of a function");
}
void f_00105894(X86Cpu& c) {
    X86_TICK(c, 24);
    // 105894  enter 0x2c, 0
    X86_AT(c, 0x105894u);
    x86_enter(c, 0x2Cu, 0x0u, 4);
    // 105898  push ebx
    X86_AT(c, 0x105898u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 105899  push esi
    X86_AT(c, 0x105899u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 10589a  push edi
    X86_AT(c, 0x10589au);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 10589b  cmp byte ptr [0xdfd2f], 0
    X86_AT(c, 0x10589bu);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0xDFD2Fu))), 0x0u, 0, 1);
    // 1058a2  je 0x1058bc
    X86_AT(c, 0x1058a2u);
    if (x86_cc(c, 4)) { goto L_1058bc; }
    X86_TICK(c, 12);
    // 1058a4  push dword ptr [0xdfdf8]
    X86_AT(c, 0x1058a4u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xDFDF8u))); push32(c, v); }
    // 1058aa  call 0x103d1e
    X86_AT(c, 0x1058aau);
    push32(c, 0x1058afu); f_00103d1e(c); X86_RET(c, 0x1058afu);
    X86_TICK(c, 12);
    // 1058af  push dword ptr [ebp + 8]
    X86_AT(c, 0x1058afu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, v); }
    // 1058b2  call 0x103d6f
    X86_AT(c, 0x1058b2u);
    push32(c, 0x1058b7u); f_00103d6f(c); X86_RET(c, 0x1058b7u);
    X86_TICK(c, 7);
    // 1058b7  jmp 0x105a1d
    X86_AT(c, 0x1058b7u);
    goto L_105a1d;
L_1058bc:
    X86_TICK(c, 35);
    // 1058bc  mov esi, dword ptr [0xdfdf8]
    X86_AT(c, 0x1058bcu);
    c.r[6] = rd32((c.sbase[3] + (uint32_t)(0xDFDF8u)));
    // 1058c2  lea edi, [ebp - 0xc]
    X86_AT(c, 0x1058c2u);
    c.r[7] = (uint32_t)(c.r[5] + 0xFFFFFFF4u);
    // 1058c5  mov ecx, 3
    X86_AT(c, 0x1058c5u);
    c.r[1] = 0x3u;
    // 1058ca  movsd dword ptr es:[edi], dword ptr [esi]
    X86_AT(c, 0x1058cau);
    x86_string(c, 0, 4, 243, 4, 3);
    // 1058cc  mov ax, word ptr [ebp - 4]
    X86_AT(c, 0x1058ccu);
    s16(c, 0, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))));
    // 1058d0  sub ax, 0x3fff
    X86_AT(c, 0x1058d0u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_sub(c, v, 0x3FFFu, 0, 2)); }
    // 1058d4  mov word ptr [ebp - 0x10], ax
    X86_AT(c, 0x1058d4u);
    wr16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u)), (c.r[0] & 0xFFFFu));
    // 1058d8  cmp byte ptr [ebp - 2], 0
    X86_AT(c, 0x1058d8u);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFEu))), 0x0u, 0, 1);
    // 1058dc  je 0x1058e7
    X86_AT(c, 0x1058dcu);
    if (x86_cc(c, 4)) { goto L_1058e7; }
    X86_TICK(c, 13);
    // 1058de  mov eax, dword ptr [ebp + 8]
    X86_AT(c, 0x1058deu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 1058e1  mov byte ptr [eax + 9], 0x80
    X86_AT(c, 0x1058e1u);
    wr8((c.sbase[3] + (uint32_t)(c.r[0] + 0x9u)), 0x80u);
    // 1058e5  jmp 0x1058ee
    X86_AT(c, 0x1058e5u);
    goto L_1058ee;
L_1058e7:
    X86_TICK(c, 6);
    // 1058e7  mov eax, dword ptr [ebp + 8]
    X86_AT(c, 0x1058e7u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 1058ea  mov byte ptr [eax + 9], 0
    X86_AT(c, 0x1058eau);
    wr8((c.sbase[3] + (uint32_t)(c.r[0] + 0x9u)), 0x0u);
L_1058ee:
    X86_TICK(c, 12);
    // 1058ee  cmp word ptr [ebp - 0x10], 0x3f
    X86_AT(c, 0x1058eeu);
    (void)x86_sub(c, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u))), 0x3Fu, 0, 2);
    // 1058f3  jle 0x1058fb
    X86_AT(c, 0x1058f3u);
    if (x86_cc(c, 14)) { goto L_1058fb; }
    X86_TICK(c, 9);
    // 1058f5  mov byte ptr [ebp - 0xd], 0x99
    X86_AT(c, 0x1058f5u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF3u)), 0x99u);
    // 1058f9  jmp 0x1058ff
    X86_AT(c, 0x1058f9u);
    goto L_1058ff;
L_1058fb:
    X86_TICK(c, 2);
    // 1058fb  mov byte ptr [ebp - 0xd], 0
    X86_AT(c, 0x1058fbu);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF3u)), 0x0u);
L_1058ff:
    X86_TICK(c, 2);
    // 1058ff  mov word ptr [ebp - 0x12], 1
    X86_AT(c, 0x1058ffu);
    wr16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFEEu)), 0x1u);
L_105905:
    X86_TICK(c, 23);
    // 105905  movzx eax, word ptr [ebp - 0x12]
    X86_AT(c, 0x105905u);
    c.r[0] = rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFEEu)));
    // 105909  mov dl, byte ptr [ebp - 0xd]
    X86_AT(c, 0x105909u);
    s8(c, 2, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF3u))));
    // 10590c  mov ecx, dword ptr [ebp + 8]
    X86_AT(c, 0x10590cu);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 10590f  mov byte ptr [ecx + eax*1 - 1], dl
    X86_AT(c, 0x10590fu);
    wr8((c.sbase[3] + (uint32_t)(c.r[1] + c.r[0] + 0xFFFFFFFFu)), g8(c, 2));
    // 105913  cmp ax, 9
    X86_AT(c, 0x105913u);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), 0x9u, 0, 2);
    // 105917  jae 0x10591f
    X86_AT(c, 0x105917u);
    if (x86_cc(c, 3)) { goto L_10591f; }
    X86_TICK(c, 13);
    // 105919  inc word ptr [ebp - 0x12]
    X86_AT(c, 0x105919u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFEEu)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
    // 10591d  jmp 0x105905
    X86_AT(c, 0x10591du);
    X86_POLL(c, 0x105905u); goto L_105905;
L_10591f:
    X86_TICK(c, 11);
    // 10591f  mov ax, word ptr [ebp - 0x10]
    X86_AT(c, 0x10591fu);
    s16(c, 0, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u))));
    // 105923  and ax, ax
    X86_AT(c, 0x105923u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_logic(c, v & (c.r[0] & 0xFFFFu), 2)); }
    // 105926  jl 0x105a1d
    X86_AT(c, 0x105926u);
    if (x86_cc(c, 12)) { goto L_105a1d; }
    X86_TICK(c, 7);
    // 10592c  cmp ax, 0x3f
    X86_AT(c, 0x10592cu);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), 0x3Fu, 0, 2);
    // 105930  jg 0x105a1d
    X86_AT(c, 0x105930u);
    if (x86_cc(c, 15)) { goto L_105a1d; }
    X86_TICK(c, 17);
    // 105936  mov dx, 0x3f
    X86_AT(c, 0x105936u);
    s16(c, 2, 0x3Fu);
    // 10593a  sub edx, eax
    X86_AT(c, 0x10593au);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 10593c  push edx
    X86_AT(c, 0x10593cu);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 10593d  lea eax, [ebp - 0xc]
    X86_AT(c, 0x10593du);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFF4u);
    // 105940  push eax
    X86_AT(c, 0x105940u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 105941  call 0x103f94
    X86_AT(c, 0x105941u);
    push32(c, 0x105946u); f_00103f94(c); X86_RET(c, 0x105946u);
    X86_TICK(c, 26);
    // 105946  mov eax, dword ptr [ebp - 0xc]
    X86_AT(c, 0x105946u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)));
    // 105949  mov edx, dword ptr [ebp - 8]
    X86_AT(c, 0x105949u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)));
    // 10594c  mov dword ptr [ebp - 0x1c], eax
    X86_AT(c, 0x10594cu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE4u)), c.r[0]);
    // 10594f  mov dword ptr [ebp - 0x18], edx
    X86_AT(c, 0x10594fu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE8u)), c.r[2]);
    // 105952  cmp dword ptr [ebp - 0x18], 0
    X86_AT(c, 0x105952u);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE8u))), 0x0u, 0, 4);
    // 105956  sete byte ptr [ebp - 0x26]
    X86_AT(c, 0x105956u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFDAu)), x86_cc(c, 4) ? 1u : 0u);
    // 10595a  mov byte ptr [ebp - 0x25], 0
    X86_AT(c, 0x10595au);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFDBu)), 0x0u);
L_10595e:
    X86_TICK(c, 12);
    // 10595e  cmp byte ptr [ebp - 0x26], 0
    X86_AT(c, 0x10595eu);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFDAu))), 0x0u, 0, 1);
    // 105962  je 0x105984
    X86_AT(c, 0x105962u);
    if (x86_cc(c, 4)) { goto L_105984; }
    X86_TICK(c, 12);
    // 105964  cmp dword ptr [ebp - 0x1c], 0
    X86_AT(c, 0x105964u);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE4u))), 0x0u, 0, 4);
    // 105968  je 0x105a1d
    X86_AT(c, 0x105968u);
    if (x86_cc(c, 4)) { goto L_105a1d; }
    X86_TICK(c, 61);
    // 10596e  mov eax, dword ptr [ebp - 0x1c]
    X86_AT(c, 0x10596eu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE4u)));
    // 105971  sub edx, edx
    X86_AT(c, 0x105971u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[2], 0, 4); }
    // 105973  mov ecx, 0xa
    X86_AT(c, 0x105973u);
    c.r[1] = 0xAu;
    // 105978  div ecx
    X86_AT(c, 0x105978u);
    x86_div(c, c.r[1], 4, 0x105978u);
    // 10597a  mov dword ptr [ebp - 0x2c], eax
    X86_AT(c, 0x10597au);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFD4u)), c.r[0]);
    // 10597d  mov ebx, edx
    X86_AT(c, 0x10597du);
    c.r[3] = c.r[2];
    // 10597f  mov dword ptr [ebp - 0x1c], eax
    X86_AT(c, 0x10597fu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE4u)), c.r[0]);
    // 105982  jmp 0x1059e4
    X86_AT(c, 0x105982u);
    goto L_1059e4;
L_105984:
    X86_TICK(c, 17);
    // 105984  mov eax, dword ptr [ebp - 0x1c]
    X86_AT(c, 0x105984u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE4u)));
    // 105987  or eax, dword ptr [ebp - 0x18]
    X86_AT(c, 0x105987u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v | rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE8u))), 4); }
    // 10598a  and eax, eax
    X86_AT(c, 0x10598au);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 10598c  je 0x105a1d
    X86_AT(c, 0x10598cu);
    if (x86_cc(c, 4)) { goto L_105a1d; }
    X86_TICK(c, 4);
    // 105992  sub edi, edi
    X86_AT(c, 0x105992u);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
    // 105994  mov si, 3
    X86_AT(c, 0x105994u);
    s16(c, 6, 0x3u);
L_105998:
    X86_TICK(c, 24);
    // 105998  movzx esi, si
    X86_AT(c, 0x105998u);
    c.r[6] = (c.r[6] & 0xFFFFu);
    // 10599b  shl edi, 0x10
    X86_AT(c, 0x10599bu);
    { uint32_t v = c.r[7]; bool w; uint32_t r = x86_shift(c, 4, v, 0x10u, 4, w); if (w) c.r[7] = r; }
    // 10599e  movzx eax, word ptr [ebp + esi*2 - 0x1c]
    X86_AT(c, 0x10599eu);
    c.r[0] = rd16((c.sbase[2] + (uint32_t)(c.r[5] + c.r[6] * 2 + 0xFFFFFFE4u)));
    // 1059a3  or eax, edi
    X86_AT(c, 0x1059a3u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v | c.r[7], 4); }
    // 1059a5  xchg edi, eax
    X86_AT(c, 0x1059a5u);
    { uint32_t t = c.r[7]; c.r[7] = c.r[0]; c.r[0] = t; }
    // 1059a6  and edi, edi
    X86_AT(c, 0x1059a6u);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & c.r[7], 4); }
    // 1059a8  jne 0x1059b6
    X86_AT(c, 0x1059a8u);
    if (x86_cc(c, 5)) { goto L_1059b6; }
    X86_TICK(c, 13);
    // 1059aa  sub ebx, ebx
    X86_AT(c, 0x1059aau);
    { uint32_t v = c.r[3]; c.r[3] = x86_sub(c, v, c.r[3], 0, 4); }
    // 1059ac  sub bx, bx
    X86_AT(c, 0x1059acu);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_sub(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
    // 1059af  mov word ptr [ebp + esi*2 - 0x24], bx
    X86_AT(c, 0x1059afu);
    wr16((c.sbase[2] + (uint32_t)(c.r[5] + c.r[6] * 2 + 0xFFFFFFDCu)), (c.r[3] & 0xFFFFu));
    // 1059b4  jmp 0x1059d0
    X86_AT(c, 0x1059b4u);
    goto L_1059d0;
L_1059b6:
    X86_TICK(c, 57);
    // 1059b6  movzx esi, si
    X86_AT(c, 0x1059b6u);
    c.r[6] = (c.r[6] & 0xFFFFu);
    // 1059b9  mov eax, edi
    X86_AT(c, 0x1059b9u);
    c.r[0] = c.r[7];
    // 1059bb  sub edx, edx
    X86_AT(c, 0x1059bbu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[2], 0, 4); }
    // 1059bd  mov ecx, 0xa
    X86_AT(c, 0x1059bdu);
    c.r[1] = 0xAu;
    // 1059c2  div ecx
    X86_AT(c, 0x1059c2u);
    x86_div(c, c.r[1], 4, 0x1059c2u);
    // 1059c4  mov dword ptr [ebp - 0x2c], eax
    X86_AT(c, 0x1059c4u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFD4u)), c.r[0]);
    // 1059c7  mov word ptr [ebp + esi*2 - 0x24], ax
    X86_AT(c, 0x1059c7u);
    wr16((c.sbase[2] + (uint32_t)(c.r[5] + c.r[6] * 2 + 0xFFFFFFDCu)), (c.r[0] & 0xFFFFu));
    // 1059cc  mov edi, edx
    X86_AT(c, 0x1059ccu);
    c.r[7] = c.r[2];
    // 1059ce  mov ebx, edi
    X86_AT(c, 0x1059ceu);
    c.r[3] = c.r[7];
L_1059d0:
    X86_TICK(c, 7);
    // 1059d0  and si, si
    X86_AT(c, 0x1059d0u);
    { uint32_t v = (c.r[6] & 0xFFFFu); s16(c, 6, x86_logic(c, v & (c.r[6] & 0xFFFFu), 2)); }
    // 1059d3  jbe 0x1059d8
    X86_AT(c, 0x1059d3u);
    if (x86_cc(c, 6)) { goto L_1059d8; }
    X86_TICK(c, 9);
    // 1059d5  dec esi
    X86_AT(c, 0x1059d5u);
    { uint32_t v = c.r[6]; c.r[6] = x86_dec(c, v, 4); }
    // 1059d6  jmp 0x105998
    X86_AT(c, 0x1059d6u);
    X86_POLL(c, 0x105998u); goto L_105998;
L_1059d8:
    X86_TICK(c, 12);
    // 1059d8  mov eax, dword ptr [ebp - 0x24]
    X86_AT(c, 0x1059d8u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFDCu)));
    // 1059db  mov edx, dword ptr [ebp - 0x20]
    X86_AT(c, 0x1059dbu);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE0u)));
    // 1059de  mov dword ptr [ebp - 0x1c], eax
    X86_AT(c, 0x1059deu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE4u)), c.r[0]);
    // 1059e1  mov dword ptr [ebp - 0x18], edx
    X86_AT(c, 0x1059e1u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE8u)), c.r[2]);
L_1059e4:
    X86_TICK(c, 12);
    // 1059e4  mov al, byte ptr [ebp - 0x25]
    X86_AT(c, 0x1059e4u);
    s8(c, 0, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFDBu))));
    // 1059e7  rcr al, 1
    X86_AT(c, 0x1059e7u);
    { uint32_t v = g8(c, 0); bool w; uint32_t r = x86_shift(c, 3, v, 0x1u, 1, w); if (w) s8(c, 0, r); }
    // 1059e9  jb 0x1059fb
    X86_AT(c, 0x1059e9u);
    if (x86_cc(c, 2)) { goto L_1059fb; }
    X86_TICK(c, 23);
    // 1059eb  mov al, byte ptr [ebp - 0x25]
    X86_AT(c, 0x1059ebu);
    s8(c, 0, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFDBu))));
    // 1059ee  shr al, 1
    X86_AT(c, 0x1059eeu);
    { uint32_t v = g8(c, 0); bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 1, w); if (w) s8(c, 0, r); }
    // 1059f0  movzx eax, al
    X86_AT(c, 0x1059f0u);
    c.r[0] = g8(c, 0);
    // 1059f3  mov edx, dword ptr [ebp + 8]
    X86_AT(c, 0x1059f3u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 1059f6  mov byte ptr [edx + eax*1], bl
    X86_AT(c, 0x1059f6u);
    wr8((c.sbase[3] + (uint32_t)(c.r[2] + c.r[0])), g8(c, 3));
    // 1059f9  jmp 0x105a0e
    X86_AT(c, 0x1059f9u);
    goto L_105a0e;
L_1059fb:
    X86_TICK(c, 26);
    // 1059fb  mov al, byte ptr [ebp - 0x25]
    X86_AT(c, 0x1059fbu);
    s8(c, 0, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFDBu))));
    // 1059fe  shr al, 1
    X86_AT(c, 0x1059feu);
    { uint32_t v = g8(c, 0); bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 1, w); if (w) s8(c, 0, r); }
    // 105a00  movzx eax, al
    X86_AT(c, 0x105a00u);
    c.r[0] = g8(c, 0);
    // 105a03  mov edx, ebx
    X86_AT(c, 0x105a03u);
    c.r[2] = c.r[3];
    // 105a05  shl dl, 4
    X86_AT(c, 0x105a05u);
    { uint32_t v = g8(c, 2); bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 1, w); if (w) s8(c, 2, r); }
    // 105a08  mov ecx, dword ptr [ebp + 8]
    X86_AT(c, 0x105a08u);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 105a0b  add byte ptr [ecx + eax*1], dl
    X86_AT(c, 0x105a0bu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[1] + c.r[0])); uint32_t v = rd8(ea); wr8(ea, x86_add(c, v, g8(c, 2), 0, 1)); }
L_105a0e:
    X86_TICK(c, 11);
    // 105a0e  mov al, byte ptr [ebp - 0x25]
    X86_AT(c, 0x105a0eu);
    s8(c, 0, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFDBu))));
    // 105a11  cmp al, 0x11
    X86_AT(c, 0x105a11u);
    (void)x86_sub(c, g8(c, 0), 0x11u, 0, 1);
    // 105a13  jae 0x105a1d
    X86_AT(c, 0x105a13u);
    if (x86_cc(c, 3)) { goto L_105a1d; }
    X86_TICK(c, 13);
    // 105a15  inc byte ptr [ebp - 0x25]
    X86_AT(c, 0x105a15u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFDBu)); uint32_t v = rd8(ea); wr8(ea, x86_inc(c, v, 1)); }
    // 105a18  jmp 0x10595e
    X86_AT(c, 0x105a18u);
    X86_POLL(c, 0x10595eu); goto L_10595e;
L_105a1d:
    X86_TICK(c, 35);
    // 105a1d  add dword ptr [0xdfdf8], 0xfffffff4
    X86_AT(c, 0x105a1du);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xDFDF8u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0xFFFFFFF4u, 0, 4)); }
    // 105a24  pop edi
    X86_AT(c, 0x105a24u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 105a25  pop esi
    X86_AT(c, 0x105a25u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 105a26  pop ebx
    X86_AT(c, 0x105a26u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 105a27  leave 
    X86_AT(c, 0x105a27u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 105a28  ret 4
    X86_AT(c, 0x105a28u);
    c.eip = pop32(c); c.r[4] += 0x4u; return;
    x86_fault(c, 0x105894u, "ran off the end of a function");
}
void f_00105a2c(X86Cpu& c) {
    X86_TICK(c, 173);
    // 105a2c  push ebp
    X86_AT(c, 0x105a2cu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 105a2d  mov ebp, esp
    X86_AT(c, 0x105a2du);
    c.r[5] = c.r[4];
    // 105a2f  push edi
    X86_AT(c, 0x105a2fu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 105a30  push ebx
    X86_AT(c, 0x105a30u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 105a31  xor ecx, ecx
    X86_AT(c, 0x105a31u);
    { uint32_t v = c.r[1]; c.r[1] = x86_logic(c, v ^ c.r[1], 4); }
    // 105a33  mov ebx, ecx
    X86_AT(c, 0x105a33u);
    c.r[3] = c.r[1];
    // 105a35  mov eax, dword ptr [ebp + 0xc]
    X86_AT(c, 0x105a35u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 105a38  mul dword ptr [ebp + 0x14]
    X86_AT(c, 0x105a38u);
    x86_mul(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x14u))), 4);
    // 105a3b  push eax
    X86_AT(c, 0x105a3bu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 105a3c  mov edi, edx
    X86_AT(c, 0x105a3cu);
    c.r[7] = c.r[2];
    // 105a3e  mov eax, dword ptr [ebp + 0xc]
    X86_AT(c, 0x105a3eu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 105a41  mul dword ptr [ebp + 0x18]
    X86_AT(c, 0x105a41u);
    x86_mul(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x18u))), 4);
    // 105a44  add edi, eax
    X86_AT(c, 0x105a44u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, c.r[0], 0, 4); }
    // 105a46  adc ecx, edx
    X86_AT(c, 0x105a46u);
    { uint32_t v = c.r[1]; c.r[1] = x86_add(c, v, c.r[2], c.fl & 1, 4); }
    // 105a48  adc ebx, 0
    X86_AT(c, 0x105a48u);
    { uint32_t v = c.r[3]; c.r[3] = x86_add(c, v, 0x0u, c.fl & 1, 4); }
    // 105a4b  mov eax, dword ptr [ebp + 0x14]
    X86_AT(c, 0x105a4bu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x14u)));
    // 105a4e  mul dword ptr [ebp + 0x10]
    X86_AT(c, 0x105a4eu);
    x86_mul(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u))), 4);
    // 105a51  add edi, eax
    X86_AT(c, 0x105a51u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, c.r[0], 0, 4); }
    // 105a53  adc ecx, edx
    X86_AT(c, 0x105a53u);
    { uint32_t v = c.r[1]; c.r[1] = x86_add(c, v, c.r[2], c.fl & 1, 4); }
    // 105a55  adc ebx, 0
    X86_AT(c, 0x105a55u);
    { uint32_t v = c.r[3]; c.r[3] = x86_add(c, v, 0x0u, c.fl & 1, 4); }
    // 105a58  mov eax, dword ptr [ebp + 0x18]
    X86_AT(c, 0x105a58u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x18u)));
    // 105a5b  mul dword ptr [ebp + 0x10]
    X86_AT(c, 0x105a5bu);
    x86_mul(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u))), 4);
    // 105a5e  add ecx, eax
    X86_AT(c, 0x105a5eu);
    { uint32_t v = c.r[1]; c.r[1] = x86_add(c, v, c.r[0], 0, 4); }
    // 105a60  adc ebx, edx
    X86_AT(c, 0x105a60u);
    { uint32_t v = c.r[3]; c.r[3] = x86_add(c, v, c.r[2], c.fl & 1, 4); }
    // 105a62  mov edx, dword ptr [ebp + 8]
    X86_AT(c, 0x105a62u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 105a65  mov dword ptr [edx + 0xc], ebx
    X86_AT(c, 0x105a65u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCu)), c.r[3]);
    // 105a68  mov dword ptr [edx + 8], ecx
    X86_AT(c, 0x105a68u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0x8u)), c.r[1]);
    // 105a6b  mov dword ptr [edx + 4], edi
    X86_AT(c, 0x105a6bu);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0x4u)), c.r[7]);
    // 105a6e  pop dword ptr [edx]
    X86_AT(c, 0x105a6eu);
    { uint32_t v = pop32(c); wr32((c.sbase[3] + (uint32_t)(c.r[2])), v); }
    // 105a70  pop ebx
    X86_AT(c, 0x105a70u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 105a71  pop edi
    X86_AT(c, 0x105a71u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 105a72  pop ebp
    X86_AT(c, 0x105a72u);
    { uint32_t v = pop32(c); c.r[5] = v; }
    // 105a73  ret 0x14
    X86_AT(c, 0x105a73u);
    c.eip = pop32(c); c.r[4] += 0x14u; return;
    x86_fault(c, 0x105a2cu, "ran off the end of a function");
}
void f_00105a78(X86Cpu& c) {
    X86_TICK(c, 34);
    // 105a78  push ebp
    X86_AT(c, 0x105a78u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 105a79  mov ebp, esp
    X86_AT(c, 0x105a79u);
    c.r[5] = c.r[4];
    // 105a7b  push esi
    X86_AT(c, 0x105a7bu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 105a7c  push edi
    X86_AT(c, 0x105a7cu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 105a7d  push ebx
    X86_AT(c, 0x105a7du);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 105a7e  sub ebx, ebx
    X86_AT(c, 0x105a7eu);
    { uint32_t v = c.r[3]; c.r[3] = x86_sub(c, v, c.r[3], 0, 4); }
    // 105a80  mov eax, ebx
    X86_AT(c, 0x105a80u);
    c.r[0] = c.r[3];
    // 105a82  mov edx, dword ptr [ebp + 0x10]
    X86_AT(c, 0x105a82u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u)));
    // 105a85  mov esi, dword ptr [ebp + 0xc]
    X86_AT(c, 0x105a85u);
    c.r[6] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 105a88  mov ecx, dword ptr [ebp + 0x18]
    X86_AT(c, 0x105a88u);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x18u)));
    // 105a8b  mov edi, dword ptr [ebp + 0x14]
    X86_AT(c, 0x105a8bu);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x14u)));
    // 105a8e  push ebp
    X86_AT(c, 0x105a8eu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 105a8f  xor ebp, ebp
    X86_AT(c, 0x105a8fu);
    { uint32_t v = c.r[5]; c.r[5] = x86_logic(c, v ^ c.r[5], 4); }
L_105a91:
    X86_TICK(c, 7);
    // 105a91  cmp edx, ecx
    X86_AT(c, 0x105a91u);
    (void)x86_sub(c, c.r[2], c.r[1], 0, 4);
    // 105a93  ja 0x105a9b
    X86_AT(c, 0x105a93u);
    if (x86_cc(c, 7)) { goto L_105a9b; }
    X86_TICK(c, 5);
    // 105a95  jb 0x105aa6
    X86_AT(c, 0x105a95u);
    if (x86_cc(c, 2)) { goto L_105aa6; }
    X86_TICK(c, 7);
    // 105a97  cmp esi, edi
    X86_AT(c, 0x105a97u);
    (void)x86_sub(c, c.r[6], c.r[7], 0, 4);
    // 105a99  jb 0x105aa6
    X86_AT(c, 0x105a99u);
    if (x86_cc(c, 2)) { goto L_105aa6; }
L_105a9b:
    X86_TICK(c, 19);
    // 105a9b  sub esi, edi
    X86_AT(c, 0x105a9bu);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[7], 0, 4); }
    // 105a9d  sbb edx, ecx
    X86_AT(c, 0x105a9du);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[1], c.fl & 1, 4); }
    // 105a9f  stc 
    X86_AT(c, 0x105a9fu);
    c.fl |= X86_CF;
    // 105aa0  rcl eax, 1
    X86_AT(c, 0x105aa0u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 2, v, 0x1u, 4, w); if (w) c.r[0] = r; }
    // 105aa2  rcl ebx, 1
    X86_AT(c, 0x105aa2u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 2, v, 0x1u, 4, w); if (w) c.r[3] = r; }
    // 105aa4  jmp 0x105aaa
    X86_AT(c, 0x105aa4u);
    goto L_105aaa;
L_105aa6:
    X86_TICK(c, 6);
    // 105aa6  shl eax, 1
    X86_AT(c, 0x105aa6u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x1u, 4, w); if (w) c.r[0] = r; }
    // 105aa8  rcl ebx, 1
    X86_AT(c, 0x105aa8u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 2, v, 0x1u, 4, w); if (w) c.r[3] = r; }
L_105aaa:
    X86_TICK(c, 7);
    // 105aaa  test ebx, 0x80000000
    X86_AT(c, 0x105aaau);
    (void)x86_logic(c, c.r[3] & 0x80000000u, 4);
    // 105ab0  jne 0x105abc
    X86_AT(c, 0x105ab0u);
    if (x86_cc(c, 5)) { goto L_105abc; }
    X86_TICK(c, 7);
    // 105ab2  and edx, edx
    X86_AT(c, 0x105ab2u);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & c.r[2], 4); }
    // 105ab4  jne 0x105ad6
    X86_AT(c, 0x105ab4u);
    if (x86_cc(c, 5)) { goto L_105ad6; }
    X86_TICK(c, 7);
    // 105ab6  and esi, esi
    X86_AT(c, 0x105ab6u);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & c.r[6], 4); }
    // 105ab8  jne 0x105ad6
    X86_AT(c, 0x105ab8u);
    if (x86_cc(c, 5)) { goto L_105ad6; }
    X86_TICK(c, 7);
    // 105aba  jmp 0x105adf
    X86_AT(c, 0x105abau);
    goto L_105adf;
L_105abc:
    X86_TICK(c, 11);
    // 105abc  shl esi, 1
    X86_AT(c, 0x105abcu);
    { uint32_t v = c.r[6]; bool w; uint32_t r = x86_shift(c, 4, v, 0x1u, 4, w); if (w) c.r[6] = r; }
    // 105abe  rcl edx, 1
    X86_AT(c, 0x105abeu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 2, v, 0x1u, 4, w); if (w) c.r[2] = r; }
    // 105ac0  jb 0x105acc
    X86_AT(c, 0x105ac0u);
    if (x86_cc(c, 2)) { goto L_105acc; }
    X86_TICK(c, 7);
    // 105ac2  cmp edx, ecx
    X86_AT(c, 0x105ac2u);
    (void)x86_sub(c, c.r[2], c.r[1], 0, 4);
    // 105ac4  ja 0x105acc
    X86_AT(c, 0x105ac4u);
    if (x86_cc(c, 7)) { goto L_105acc; }
    X86_TICK(c, 5);
    // 105ac6  jb 0x105afb
    X86_AT(c, 0x105ac6u);
    if (x86_cc(c, 2)) { goto L_105afb; }
    X86_TICK(c, 7);
    // 105ac8  cmp esi, edi
    X86_AT(c, 0x105ac8u);
    (void)x86_sub(c, c.r[6], c.r[7], 0, 4);
    // 105aca  jb 0x105afb
    X86_AT(c, 0x105acau);
    if (x86_cc(c, 2)) { goto L_105afb; }
L_105acc:
    X86_TICK(c, 11);
    // 105acc  add eax, 1
    X86_AT(c, 0x105accu);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0x1u, 0, 4); }
    // 105ad1  adc ebx, 0
    X86_AT(c, 0x105ad1u);
    { uint32_t v = c.r[3]; c.r[3] = x86_add(c, v, 0x0u, c.fl & 1, 4); }
    // 105ad4  jmp 0x105afb
    X86_AT(c, 0x105ad4u);
    goto L_105afb;
L_105ad6:
    X86_TICK(c, 13);
    // 105ad6  inc ebp
    X86_AT(c, 0x105ad6u);
    { uint32_t v = c.r[5]; c.r[5] = x86_inc(c, v, 4); }
    // 105ad7  shl esi, 1
    X86_AT(c, 0x105ad7u);
    { uint32_t v = c.r[6]; bool w; uint32_t r = x86_shift(c, 4, v, 0x1u, 4, w); if (w) c.r[6] = r; }
    // 105ad9  rcl edx, 1
    X86_AT(c, 0x105ad9u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 2, v, 0x1u, 4, w); if (w) c.r[2] = r; }
    // 105adb  jb 0x105a9b
    X86_AT(c, 0x105adbu);
    if (x86_cc(c, 2)) { X86_POLL(c, 0x105a9bu); goto L_105a9b; }
    X86_TICK(c, 7);
    // 105add  jmp 0x105a91
    X86_AT(c, 0x105addu);
    X86_POLL(c, 0x105a91u); goto L_105a91;
L_105adf:
    X86_TICK(c, 7);
    // 105adf  and ebx, ebx
    X86_AT(c, 0x105adfu);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & c.r[3], 4); }
    // 105ae1  jne 0x105aec
    X86_AT(c, 0x105ae1u);
    if (x86_cc(c, 5)) { goto L_105aec; }
    X86_TICK(c, 13);
    // 105ae3  add ebp, 0x20
    X86_AT(c, 0x105ae3u);
    { uint32_t v = c.r[5]; c.r[5] = x86_add(c, v, 0x20u, 0, 4); }
    // 105ae6  mov ebx, eax
    X86_AT(c, 0x105ae6u);
    c.r[3] = c.r[0];
    // 105ae8  xor eax, eax
    X86_AT(c, 0x105ae8u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v ^ c.r[0], 4); }
    // 105aea  jmp 0x105adf
    X86_AT(c, 0x105aeau);
    X86_POLL(c, 0x105adfu); goto L_105adf;
L_105aec:
    X86_TICK(c, 22);
    // 105aec  bsr ecx, ebx
    X86_AT(c, 0x105aecu);
    c.r[1] = x86_bsr(c, c.r[3], c.r[1]);
    // 105aef  sub ecx, 0x1f
    X86_AT(c, 0x105aefu);
    { uint32_t v = c.r[1]; c.r[1] = x86_sub(c, v, 0x1Fu, 0, 4); }
    // 105af2  neg ecx
    X86_AT(c, 0x105af2u);
    { uint32_t v = c.r[1]; c.r[1] = x86_neg(c, v, 4); }
    // 105af4  shld ebx, eax, cl
    X86_AT(c, 0x105af4u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_double(c, true, v, c.r[0], g8(c, 1), 4, w); if (w) c.r[3] = r; }
    // 105af7  shl eax, cl
    X86_AT(c, 0x105af7u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 105af9  add ebp, ecx
    X86_AT(c, 0x105af9u);
    { uint32_t v = c.r[5]; c.r[5] = x86_add(c, v, c.r[1], 0, 4); }
L_105afb:
    X86_TICK(c, 44);
    // 105afb  pop ecx
    X86_AT(c, 0x105afbu);
    { uint32_t v = pop32(c); c.r[1] = v; }
    // 105afc  xchg ebp, ecx
    X86_AT(c, 0x105afcu);
    { uint32_t t = c.r[5]; c.r[5] = c.r[1]; c.r[1] = t; }
    // 105afe  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0x105afeu);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 105b01  mov dword ptr [edi], eax
    X86_AT(c, 0x105b01u);
    wr32((c.sbase[3] + (uint32_t)(c.r[7])), c.r[0]);
    // 105b03  mov dword ptr [edi + 4], ebx
    X86_AT(c, 0x105b03u);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] + 0x4u)), c.r[3]);
    // 105b06  xchg ecx, eax
    X86_AT(c, 0x105b06u);
    { uint32_t t = c.r[1]; c.r[1] = c.r[0]; c.r[0] = t; }
    // 105b07  pop ebx
    X86_AT(c, 0x105b07u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 105b08  pop edi
    X86_AT(c, 0x105b08u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 105b09  pop esi
    X86_AT(c, 0x105b09u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 105b0a  pop ebp
    X86_AT(c, 0x105b0au);
    { uint32_t v = pop32(c); c.r[5] = v; }
    // 105b0b  ret 0x14
    X86_AT(c, 0x105b0bu);
    c.eip = pop32(c); c.r[4] += 0x14u; return;
    x86_fault(c, 0x105a78u, "ran off the end of a function");
}
}

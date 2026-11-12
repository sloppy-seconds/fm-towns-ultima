#include "p_game_funcs.h"
namespace p_game {
void f_000cbaed(X86Cpu& c) {
    X86_TICK(c, 9);
    // 0cbaed  push 7
    X86_AT(c, 0xcbaedu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cbaef  call 0xba428
    X86_AT(c, 0xcbaefu);
    push32(c, 0xcbaf4u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xcbaf4u);
    X86_TICK(c, 9);
    // 0cbaf4  push 7
    X86_AT(c, 0xcbaf4u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cbaf6  call 0xbbb5c
    X86_AT(c, 0xcbaf6u);
    push32(c, 0xcbafbu); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xcbafbu);
    X86_TICK(c, 9);
    // 0cbafb  add esp, 0xc
    X86_AT(c, 0xcbafbu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0cbafe  jmp 0xcbce0
    X86_AT(c, 0xcbafeu);
    goto L_cbce0;
L_cbce0:
    X86_TICK(c, 28);
    // 0cbce0  pop edi
    X86_AT(c, 0xcbce0u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0cbce1  pop esi
    X86_AT(c, 0xcbce1u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0cbce2  pop ebx
    X86_AT(c, 0xcbce2u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0cbce3  leave 
    X86_AT(c, 0xcbce3u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0cbce4  ret 
    X86_AT(c, 0xcbce4u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xcbaedu, "ran off the end of a function");
}
void f_000cbce8(X86Cpu& c) {
    X86_TICK(c, 9);
    // 0cbce8  push 7
    X86_AT(c, 0xcbce8u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cbcea  call 0xcf828
    X86_AT(c, 0xcbceau);
    push32(c, 0xcbcefu); x86_call_known(c, 0xcf828u, f_000cf828); X86_RET(c, 0xcbcefu);
    X86_TICK(c, 9);
    // 0cbcef  push 7
    X86_AT(c, 0xcbcefu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cbcf1  call 0xbbb5c
    X86_AT(c, 0xcbcf1u);
    push32(c, 0xcbcf6u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xcbcf6u);
    X86_TICK(c, 12);
    // 0cbcf6  add esp, 8
    X86_AT(c, 0xcbcf6u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0cbcf9  ret 
    X86_AT(c, 0xcbcf9u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xcbce8u, "ran off the end of a function");
}
void f_000cbcfc(X86Cpu& c) {
    X86_TICK(c, 29);
    // 0cbcfc  push ebp
    X86_AT(c, 0xcbcfcu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0cbcfd  mov ebp, esp
    X86_AT(c, 0xcbcfdu);
    c.r[5] = c.r[4];
    // 0cbcff  push edi
    X86_AT(c, 0xcbcffu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0cbd00  mov edi, dword ptr [ebp + 0xc]
    X86_AT(c, 0xcbd00u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0cbd03  mov ecx, dword ptr [ebp + 0x10]
    X86_AT(c, 0xcbd03u);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u)));
    // 0cbd06  movzx edx, byte ptr [ebp + 8]
    X86_AT(c, 0xcbd06u);
    c.r[2] = rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0cbd0a  sub edx, 0x41
    X86_AT(c, 0xcbd0au);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, 0x41u, 0, 4); }
    // 0cbd0d  cmp edx, 0x16
    X86_AT(c, 0xcbd0du);
    (void)x86_sub(c, c.r[2], 0x16u, 0, 4);
    // 0cbd10  ja 0xcbd99
    X86_AT(c, 0xcbd10u);
    if (x86_cc(c, 7)) { goto L_cbd99; }
    X86_TICK(c, 7);
    // 0cbd16  jmp dword ptr cs:[edx*4 + 0xcbd1e]
    X86_AT(c, 0xcbd16u);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xCBD1Eu)));
      switch (t) {
      case 0xcbd7au: goto L_cbd7a;
      case 0xcbd7eu: goto L_cbd7e;
      case 0xcbd82u: goto L_cbd82;
      case 0xcbd88u: goto L_cbd88;
      case 0xcbd8cu: goto L_cbd8c;
      case 0xcbd90u: goto L_cbd90;
      case 0xcbd99u: goto L_cbd99;
      default: x86_jump(c, t); return; } }
L_cbd7a:
    X86_TICK(c, 9);
    // 0cbd7a  mov eax, ecx
    X86_AT(c, 0xcbd7au);
    c.r[0] = c.r[1];
    // 0cbd7c  jmp 0xcbd9b
    X86_AT(c, 0xcbd7cu);
    goto L_cbd9b;
L_cbd7e:
    X86_TICK(c, 9);
    // 0cbd7e  mov eax, edi
    X86_AT(c, 0xcbd7eu);
    c.r[0] = c.r[7];
    // 0cbd80  jmp 0xcbd9b
    X86_AT(c, 0xcbd80u);
    goto L_cbd9b;
L_cbd82:
    X86_TICK(c, 7);
    // 0cbd82  cmp edi, ecx
    X86_AT(c, 0xcbd82u);
    (void)x86_sub(c, c.r[7], c.r[1], 0, 4);
    // 0cbd84  jle 0xcbd90
    X86_AT(c, 0xcbd84u);
    if (x86_cc(c, 14)) { goto L_cbd90; }
    X86_TICK(c, 7);
    // 0cbd86  jmp 0xcbd8c
    X86_AT(c, 0xcbd86u);
    goto L_cbd8c;
L_cbd88:
    X86_TICK(c, 7);
    // 0cbd88  cmp edi, ecx
    X86_AT(c, 0xcbd88u);
    (void)x86_sub(c, c.r[7], c.r[1], 0, 4);
    // 0cbd8a  jg 0xcbd90
    X86_AT(c, 0xcbd8au);
    if (x86_cc(c, 15)) { goto L_cbd90; }
L_cbd8c:
    X86_TICK(c, 9);
    // 0cbd8c  mov eax, edi
    X86_AT(c, 0xcbd8cu);
    c.r[0] = c.r[7];
    // 0cbd8e  jmp 0xcbd92
    X86_AT(c, 0xcbd8eu);
    goto L_cbd92;
L_cbd90:
    X86_TICK(c, 2);
    // 0cbd90  mov eax, ecx
    X86_AT(c, 0xcbd90u);
    c.r[0] = c.r[1];
L_cbd92:
    X86_TICK(c, 14);
    // 0cbd92  cdq 
    X86_AT(c, 0xcbd92u);
    c.r[2] = (c.r[0] & 0x80000000u) ? 0xFFFFFFFFu : 0u;
    // 0cbd93  sub eax, edx
    X86_AT(c, 0xcbd93u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[2], 0, 4); }
    // 0cbd95  sar eax, 1
    X86_AT(c, 0xcbd95u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 7, v, 0x1u, 4, w); if (w) c.r[0] = r; }
    // 0cbd97  jmp 0xcbd9b
    X86_AT(c, 0xcbd97u);
    goto L_cbd9b;
L_cbd99:
    X86_TICK(c, 2);
    // 0cbd99  sub eax, eax
    X86_AT(c, 0xcbd99u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
L_cbd9b:
    X86_TICK(c, 20);
    // 0cbd9b  pop edi
    X86_AT(c, 0xcbd9bu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0cbd9c  leave 
    X86_AT(c, 0xcbd9cu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0cbd9d  ret 
    X86_AT(c, 0xcbd9du);
    c.eip = pop32(c); return;
    x86_fault(c, 0xcbcfcu, "ran off the end of a function");
}
void f_000cbda0(X86Cpu& c) {
    X86_TICK(c, 12);
    // 0cbda0  cmp dword ptr [0xa6134], 0
    X86_AT(c, 0xcbda0u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xA6134u))), 0x0u, 0, 4);
    // 0cbda7  jne 0xcbdc4
    X86_AT(c, 0xcbda7u);
    if (x86_cc(c, 5)) { goto L_cbdc4; }
    X86_TICK(c, 11);
    // 0cbda9  push 0x7e5c
    X86_AT(c, 0xcbda9u);
    { uint32_t v = 0x7E5Cu; push32(c, v); }
    // 0cbdae  push 7
    X86_AT(c, 0xcbdaeu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cbdb0  call 0xba428
    X86_AT(c, 0xcbdb0u);
    push32(c, 0xcbdb5u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xcbdb5u);
    X86_TICK(c, 9);
    // 0cbdb5  push 7
    X86_AT(c, 0xcbdb5u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cbdb7  call 0xbbb5c
    X86_AT(c, 0xcbdb7u);
    push32(c, 0xcbdbcu); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xcbdbcu);
    X86_TICK(c, 9);
    // 0cbdbc  add esp, 0xc
    X86_AT(c, 0xcbdbcu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0cbdbf  jmp 0xcbf96
    X86_AT(c, 0xcbdbfu);
    goto L_cbf96;
L_cbdc4:
    X86_TICK(c, 9);
    // 0cbdc4  push 7
    X86_AT(c, 0xcbdc4u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cbdc6  call 0xbb6b0
    X86_AT(c, 0xcbdc6u);
    push32(c, 0xcbdcbu); x86_call_known(c, 0xbb6b0u, f_000bb6b0); X86_RET(c, 0xcbdcbu);
    X86_TICK(c, 11);
    // 0cbdcb  push 0x7e84
    X86_AT(c, 0xcbdcbu);
    { uint32_t v = 0x7E84u; push32(c, v); }
    // 0cbdd0  push 7
    X86_AT(c, 0xcbdd0u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cbdd2  call 0xbbba4
    X86_AT(c, 0xcbdd2u);
    push32(c, 0xcbdd7u); x86_call_known(c, 0xbbba4u, f_000bbba4); X86_RET(c, 0xcbdd7u);
    X86_TICK(c, 16);
    // 0cbdd7  push 2
    X86_AT(c, 0xcbdd7u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0cbdd9  push dword ptr [0xa6048]
    X86_AT(c, 0xcbdd9u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xA6048u))); push32(c, v); }
    // 0cbddf  push 7
    X86_AT(c, 0xcbddfu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cbde1  call 0xba404
    X86_AT(c, 0xcbde1u);
    push32(c, 0xcbde6u); x86_call_known(c, 0xba404u, f_000ba404); X86_RET(c, 0xcbde6u);
    X86_TICK(c, 9);
    // 0cbde6  push 7
    X86_AT(c, 0xcbde6u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cbde8  call 0xbbb5c
    X86_AT(c, 0xcbde8u);
    push32(c, 0xcbdedu); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xcbdedu);
    X86_TICK(c, 11);
    // 0cbded  push 0x7e90
    X86_AT(c, 0xcbdedu);
    { uint32_t v = 0x7E90u; push32(c, v); }
    // 0cbdf2  push 7
    X86_AT(c, 0xcbdf2u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cbdf4  call 0xbbba4
    X86_AT(c, 0xcbdf4u);
    push32(c, 0xcbdf9u); x86_call_known(c, 0xbbba4u, f_000bbba4); X86_RET(c, 0xcbdf9u);
    X86_TICK(c, 16);
    // 0cbdf9  push 2
    X86_AT(c, 0xcbdf9u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0cbdfb  push dword ptr [0xa604c]
    X86_AT(c, 0xcbdfbu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xA604Cu))); push32(c, v); }
    // 0cbe01  push 7
    X86_AT(c, 0xcbe01u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cbe03  call 0xba404
    X86_AT(c, 0xcbe03u);
    push32(c, 0xcbe08u); x86_call_known(c, 0xba404u, f_000ba404); X86_RET(c, 0xcbe08u);
    X86_TICK(c, 9);
    // 0cbe08  push 7
    X86_AT(c, 0xcbe08u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cbe0a  call 0xbbb5c
    X86_AT(c, 0xcbe0au);
    push32(c, 0xcbe0fu); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xcbe0fu);
    X86_TICK(c, 11);
    // 0cbe0f  push 0x7e9c
    X86_AT(c, 0xcbe0fu);
    { uint32_t v = 0x7E9Cu; push32(c, v); }
    // 0cbe14  push 7
    X86_AT(c, 0xcbe14u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cbe16  call 0xbbba4
    X86_AT(c, 0xcbe16u);
    push32(c, 0xcbe1bu); x86_call_known(c, 0xbbba4u, f_000bbba4); X86_RET(c, 0xcbe1bu);
    X86_TICK(c, 18);
    // 0cbe1b  add esp, 0x3c
    X86_AT(c, 0xcbe1bu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x3Cu, 0, 4); }
    // 0cbe1e  push 2
    X86_AT(c, 0xcbe1eu);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0cbe20  push dword ptr [0xa6068]
    X86_AT(c, 0xcbe20u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xA6068u))); push32(c, v); }
    // 0cbe26  push 7
    X86_AT(c, 0xcbe26u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cbe28  call 0xba404
    X86_AT(c, 0xcbe28u);
    push32(c, 0xcbe2du); x86_call_known(c, 0xba404u, f_000ba404); X86_RET(c, 0xcbe2du);
    X86_TICK(c, 9);
    // 0cbe2d  push 7
    X86_AT(c, 0xcbe2du);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cbe2f  call 0xbbb5c
    X86_AT(c, 0xcbe2fu);
    push32(c, 0xcbe34u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xcbe34u);
    X86_TICK(c, 11);
    // 0cbe34  push 0x7ea8
    X86_AT(c, 0xcbe34u);
    { uint32_t v = 0x7EA8u; push32(c, v); }
    // 0cbe39  push 7
    X86_AT(c, 0xcbe39u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cbe3b  call 0xbbba4
    X86_AT(c, 0xcbe3bu);
    push32(c, 0xcbe40u); x86_call_known(c, 0xbbba4u, f_000bbba4); X86_RET(c, 0xcbe40u);
    X86_TICK(c, 16);
    // 0cbe40  push 2
    X86_AT(c, 0xcbe40u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0cbe42  push dword ptr [0xa606c]
    X86_AT(c, 0xcbe42u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xA606Cu))); push32(c, v); }
    // 0cbe48  push 7
    X86_AT(c, 0xcbe48u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cbe4a  call 0xba404
    X86_AT(c, 0xcbe4au);
    push32(c, 0xcbe4fu); x86_call_known(c, 0xba404u, f_000ba404); X86_RET(c, 0xcbe4fu);
    X86_TICK(c, 9);
    // 0cbe4f  push 7
    X86_AT(c, 0xcbe4fu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cbe51  call 0xbbb5c
    X86_AT(c, 0xcbe51u);
    push32(c, 0xcbe56u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xcbe56u);
    X86_TICK(c, 9);
    // 0cbe56  push 7
    X86_AT(c, 0xcbe56u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cbe58  call 0xc9890
    X86_AT(c, 0xcbe58u);
    push32(c, 0xcbe5du); x86_call_known(c, 0xc9890u, f_000c9890); X86_RET(c, 0xcbe5du);
    X86_TICK(c, 11);
    // 0cbe5d  push 0x7eb4
    X86_AT(c, 0xcbe5du);
    { uint32_t v = 0x7EB4u; push32(c, v); }
    // 0cbe62  push 7
    X86_AT(c, 0xcbe62u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cbe64  call 0xbbba4
    X86_AT(c, 0xcbe64u);
    push32(c, 0xcbe69u); x86_call_known(c, 0xbbba4u, f_000bbba4); X86_RET(c, 0xcbe69u);
    X86_TICK(c, 20);
    // 0cbe69  push 2
    X86_AT(c, 0xcbe69u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0cbe6b  mov eax, dword ptr [0xa605c]
    X86_AT(c, 0xcbe6bu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xA605Cu)));
    // 0cbe70  push dword ptr [eax*8 + 0xaef4c]
    X86_AT(c, 0xcbe70u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[0] * 8 + 0xAEF4Cu))); push32(c, v); }
    // 0cbe77  push 7
    X86_AT(c, 0xcbe77u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cbe79  call 0xba404
    X86_AT(c, 0xcbe79u);
    push32(c, 0xcbe7eu); x86_call_known(c, 0xba404u, f_000ba404); X86_RET(c, 0xcbe7eu);
    X86_TICK(c, 11);
    // 0cbe7e  add esp, 0x40
    X86_AT(c, 0xcbe7eu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x40u, 0, 4); }
    // 0cbe81  push 7
    X86_AT(c, 0xcbe81u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cbe83  call 0xbbb5c
    X86_AT(c, 0xcbe83u);
    push32(c, 0xcbe88u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xcbe88u);
    X86_TICK(c, 11);
    // 0cbe88  push 0x7ec0
    X86_AT(c, 0xcbe88u);
    { uint32_t v = 0x7EC0u; push32(c, v); }
    // 0cbe8d  push 7
    X86_AT(c, 0xcbe8du);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cbe8f  call 0xbbba4
    X86_AT(c, 0xcbe8fu);
    push32(c, 0xcbe94u); x86_call_known(c, 0xbbba4u, f_000bbba4); X86_RET(c, 0xcbe94u);
    X86_TICK(c, 20);
    // 0cbe94  push 2
    X86_AT(c, 0xcbe94u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0cbe96  mov eax, dword ptr [0xa605c]
    X86_AT(c, 0xcbe96u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xA605Cu)));
    // 0cbe9b  push dword ptr [eax*8 + 0xaef50]
    X86_AT(c, 0xcbe9bu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[0] * 8 + 0xAEF50u))); push32(c, v); }
    // 0cbea2  push 7
    X86_AT(c, 0xcbea2u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cbea4  call 0xba404
    X86_AT(c, 0xcbea4u);
    push32(c, 0xcbea9u); x86_call_known(c, 0xba404u, f_000ba404); X86_RET(c, 0xcbea9u);
    X86_TICK(c, 9);
    // 0cbea9  push 7
    X86_AT(c, 0xcbea9u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cbeab  call 0xbbb5c
    X86_AT(c, 0xcbeabu);
    push32(c, 0xcbeb0u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xcbeb0u);
    X86_TICK(c, 11);
    // 0cbeb0  push 0x7ecc
    X86_AT(c, 0xcbeb0u);
    { uint32_t v = 0x7ECCu; push32(c, v); }
    // 0cbeb5  push 7
    X86_AT(c, 0xcbeb5u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cbeb7  call 0xbbba4
    X86_AT(c, 0xcbeb7u);
    push32(c, 0xcbebcu); x86_call_known(c, 0xbbba4u, f_000bbba4); X86_RET(c, 0xcbebcu);
    X86_TICK(c, 16);
    // 0cbebc  push 2
    X86_AT(c, 0xcbebcu);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0cbebe  push dword ptr [0xa4a66]
    X86_AT(c, 0xcbebeu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xA4A66u))); push32(c, v); }
    // 0cbec4  push 7
    X86_AT(c, 0xcbec4u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cbec6  call 0xba404
    X86_AT(c, 0xcbec6u);
    push32(c, 0xcbecbu); x86_call_known(c, 0xba404u, f_000ba404); X86_RET(c, 0xcbecbu);
    X86_TICK(c, 9);
    // 0cbecb  push 7
    X86_AT(c, 0xcbecbu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cbecd  call 0xbbb5c
    X86_AT(c, 0xcbecdu);
    push32(c, 0xcbed2u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xcbed2u);
    X86_TICK(c, 11);
    // 0cbed2  push 0x7ed4
    X86_AT(c, 0xcbed2u);
    { uint32_t v = 0x7ED4u; push32(c, v); }
    // 0cbed7  push 7
    X86_AT(c, 0xcbed7u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cbed9  call 0xbbba4
    X86_AT(c, 0xcbed9u);
    push32(c, 0xcbedeu); x86_call_known(c, 0xbbba4u, f_000bbba4); X86_RET(c, 0xcbedeu);
    X86_TICK(c, 18);
    // 0cbede  add esp, 0x3c
    X86_AT(c, 0xcbedeu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x3Cu, 0, 4); }
    // 0cbee1  push 2
    X86_AT(c, 0xcbee1u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0cbee3  push dword ptr [0xa4a6a]
    X86_AT(c, 0xcbee3u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xA4A6Au))); push32(c, v); }
    // 0cbee9  push 7
    X86_AT(c, 0xcbee9u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cbeeb  call 0xba404
    X86_AT(c, 0xcbeebu);
    push32(c, 0xcbef0u); x86_call_known(c, 0xba404u, f_000ba404); X86_RET(c, 0xcbef0u);
    X86_TICK(c, 9);
    // 0cbef0  push 7
    X86_AT(c, 0xcbef0u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cbef2  call 0xbbb5c
    X86_AT(c, 0xcbef2u);
    push32(c, 0xcbef7u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xcbef7u);
    X86_TICK(c, 11);
    // 0cbef7  push 0x7edc
    X86_AT(c, 0xcbef7u);
    { uint32_t v = 0x7EDCu; push32(c, v); }
    // 0cbefc  push 7
    X86_AT(c, 0xcbefcu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cbefe  call 0xbbba4
    X86_AT(c, 0xcbefeu);
    push32(c, 0xcbf03u); x86_call_known(c, 0xbbba4u, f_000bbba4); X86_RET(c, 0xcbf03u);
    X86_TICK(c, 16);
    // 0cbf03  push 2
    X86_AT(c, 0xcbf03u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0cbf05  push dword ptr [0xa4a6e]
    X86_AT(c, 0xcbf05u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xA4A6Eu))); push32(c, v); }
    // 0cbf0b  push 7
    X86_AT(c, 0xcbf0bu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cbf0d  call 0xba404
    X86_AT(c, 0xcbf0du);
    push32(c, 0xcbf12u); x86_call_known(c, 0xba404u, f_000ba404); X86_RET(c, 0xcbf12u);
    X86_TICK(c, 9);
    // 0cbf12  push 7
    X86_AT(c, 0xcbf12u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cbf14  call 0xbbb5c
    X86_AT(c, 0xcbf14u);
    push32(c, 0xcbf19u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xcbf19u);
    X86_TICK(c, 11);
    // 0cbf19  push 0x7ee4
    X86_AT(c, 0xcbf19u);
    { uint32_t v = 0x7EE4u; push32(c, v); }
    // 0cbf1e  push 7
    X86_AT(c, 0xcbf1eu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cbf20  call 0xbbba4
    X86_AT(c, 0xcbf20u);
    push32(c, 0xcbf25u); x86_call_known(c, 0xbbba4u, f_000bbba4); X86_RET(c, 0xcbf25u);
    X86_TICK(c, 16);
    // 0cbf25  push 2
    X86_AT(c, 0xcbf25u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0cbf27  push dword ptr [0xa4a72]
    X86_AT(c, 0xcbf27u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xA4A72u))); push32(c, v); }
    // 0cbf2d  push 7
    X86_AT(c, 0xcbf2du);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cbf2f  call 0xba404
    X86_AT(c, 0xcbf2fu);
    push32(c, 0xcbf34u); x86_call_known(c, 0xba404u, f_000ba404); X86_RET(c, 0xcbf34u);
    X86_TICK(c, 11);
    // 0cbf34  add esp, 0x3c
    X86_AT(c, 0xcbf34u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x3Cu, 0, 4); }
    // 0cbf37  push 7
    X86_AT(c, 0xcbf37u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cbf39  call 0xbbb5c
    X86_AT(c, 0xcbf39u);
    push32(c, 0xcbf3eu); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xcbf3eu);
    X86_TICK(c, 11);
    // 0cbf3e  add esp, 4
    X86_AT(c, 0xcbf3eu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0cbf41  push 7
    X86_AT(c, 0xcbf41u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cbf43  call 0xc9890
    X86_AT(c, 0xcbf43u);
    push32(c, 0xcbf48u); x86_call_known(c, 0xc9890u, f_000c9890); X86_RET(c, 0xcbf48u);
    X86_TICK(c, 11);
    // 0cbf48  push 0x7eec
    X86_AT(c, 0xcbf48u);
    { uint32_t v = 0x7EECu; push32(c, v); }
    // 0cbf4d  push 7
    X86_AT(c, 0xcbf4du);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cbf4f  call 0xbbba4
    X86_AT(c, 0xcbf4fu);
    push32(c, 0xcbf54u); x86_call_known(c, 0xbbba4u, f_000bbba4); X86_RET(c, 0xcbf54u);
    X86_TICK(c, 16);
    // 0cbf54  push 2
    X86_AT(c, 0xcbf54u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0cbf56  push dword ptr [0xa4a76]
    X86_AT(c, 0xcbf56u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xA4A76u))); push32(c, v); }
    // 0cbf5c  push 7
    X86_AT(c, 0xcbf5cu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cbf5e  call 0xba404
    X86_AT(c, 0xcbf5eu);
    push32(c, 0xcbf63u); x86_call_known(c, 0xba404u, f_000ba404); X86_RET(c, 0xcbf63u);
    X86_TICK(c, 9);
    // 0cbf63  push 7
    X86_AT(c, 0xcbf63u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cbf65  call 0xbbb5c
    X86_AT(c, 0xcbf65u);
    push32(c, 0xcbf6au); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xcbf6au);
    X86_TICK(c, 11);
    // 0cbf6a  push 0x7ef4
    X86_AT(c, 0xcbf6au);
    { uint32_t v = 0x7EF4u; push32(c, v); }
    // 0cbf6f  push 7
    X86_AT(c, 0xcbf6fu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cbf71  call 0xbbba4
    X86_AT(c, 0xcbf71u);
    push32(c, 0xcbf76u); x86_call_known(c, 0xbbba4u, f_000bbba4); X86_RET(c, 0xcbf76u);
    X86_TICK(c, 16);
    // 0cbf76  push 2
    X86_AT(c, 0xcbf76u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0cbf78  push dword ptr [0xa4a7a]
    X86_AT(c, 0xcbf78u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xA4A7Au))); push32(c, v); }
    // 0cbf7e  push 7
    X86_AT(c, 0xcbf7eu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cbf80  call 0xba404
    X86_AT(c, 0xcbf80u);
    push32(c, 0xcbf85u); x86_call_known(c, 0xba404u, f_000ba404); X86_RET(c, 0xcbf85u);
    X86_TICK(c, 9);
    // 0cbf85  push 7
    X86_AT(c, 0xcbf85u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cbf87  call 0xbbb5c
    X86_AT(c, 0xcbf87u);
    push32(c, 0xcbf8cu); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xcbf8cu);
    X86_TICK(c, 9);
    // 0cbf8c  push 7
    X86_AT(c, 0xcbf8cu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cbf8e  call 0xc9890
    X86_AT(c, 0xcbf8eu);
    push32(c, 0xcbf93u); x86_call_known(c, 0xc9890u, f_000c9890); X86_RET(c, 0xcbf93u);
    X86_TICK(c, 2);
    // 0cbf93  add esp, 0x38
    X86_AT(c, 0xcbf93u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x38u, 0, 4); }
L_cbf96:
    X86_TICK(c, 10);
    // 0cbf96  ret 
    X86_AT(c, 0xcbf96u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xcbda0u, "ran off the end of a function");
}
void f_000cbf98(X86Cpu& c) {
    X86_TICK(c, 9);
    // 0cbf98  push 0xb
    X86_AT(c, 0xcbf98u);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0cbf9a  call 0xb607c
    X86_AT(c, 0xcbf9au);
    push32(c, 0xcbf9fu); x86_call_known(c, 0xb607cu, f_000b607c); X86_RET(c, 0xcbf9fu);
    X86_TICK(c, 9);
    // 0cbf9f  push 7
    X86_AT(c, 0xcbf9fu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cbfa1  call 0xbb6b0
    X86_AT(c, 0xcbfa1u);
    push32(c, 0xcbfa6u); x86_call_known(c, 0xbb6b0u, f_000bb6b0); X86_RET(c, 0xcbfa6u);
    X86_TICK(c, 11);
    // 0cbfa6  push 0x7efc
    X86_AT(c, 0xcbfa6u);
    { uint32_t v = 0x7EFCu; push32(c, v); }
    // 0cbfab  push 7
    X86_AT(c, 0xcbfabu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cbfad  call 0xba428
    X86_AT(c, 0xcbfadu);
    push32(c, 0xcbfb2u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xcbfb2u);
    X86_TICK(c, 9);
    // 0cbfb2  push 7
    X86_AT(c, 0xcbfb2u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cbfb4  call 0xbbb5c
    X86_AT(c, 0xcbfb4u);
    push32(c, 0xcbfb9u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xcbfb9u);
    X86_TICK(c, 11);
    // 0cbfb9  push 0x7f54
    X86_AT(c, 0xcbfb9u);
    { uint32_t v = 0x7F54u; push32(c, v); }
    // 0cbfbe  push 7
    X86_AT(c, 0xcbfbeu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cbfc0  call 0xba428
    X86_AT(c, 0xcbfc0u);
    push32(c, 0xcbfc5u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xcbfc5u);
    X86_TICK(c, 9);
    // 0cbfc5  push 7
    X86_AT(c, 0xcbfc5u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cbfc7  call 0xbbb5c
    X86_AT(c, 0xcbfc7u);
    push32(c, 0xcbfccu); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xcbfccu);
    X86_TICK(c, 9);
    // 0cbfcc  push 7
    X86_AT(c, 0xcbfccu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cbfce  call 0xbbb5c
    X86_AT(c, 0xcbfceu);
    push32(c, 0xcbfd3u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xcbfd3u);
    X86_TICK(c, 9);
    // 0cbfd3  push 7
    X86_AT(c, 0xcbfd3u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cbfd5  call 0xc9890
    X86_AT(c, 0xcbfd5u);
    push32(c, 0xcbfdau); x86_call_known(c, 0xc9890u, f_000c9890); X86_RET(c, 0xcbfdau);
    X86_TICK(c, 9);
    // 0cbfda  push 7
    X86_AT(c, 0xcbfdau);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cbfdc  call 0xbbb5c
    X86_AT(c, 0xcbfdcu);
    push32(c, 0xcbfe1u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xcbfe1u);
    X86_TICK(c, 11);
    // 0cbfe1  push 0x7fc0
    X86_AT(c, 0xcbfe1u);
    { uint32_t v = 0x7FC0u; push32(c, v); }
    // 0cbfe6  push 7
    X86_AT(c, 0xcbfe6u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cbfe8  call 0xbbba4
    X86_AT(c, 0xcbfe8u);
    push32(c, 0xcbfedu); x86_call_known(c, 0xbbba4u, f_000bbba4); X86_RET(c, 0xcbfedu);
    X86_TICK(c, 9);
    // 0cbfed  push 7
    X86_AT(c, 0xcbfedu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cbfef  call 0xbbb5c
    X86_AT(c, 0xcbfefu);
    push32(c, 0xcbff4u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xcbff4u);
    X86_TICK(c, 11);
    // 0cbff4  push 0x7fe0
    X86_AT(c, 0xcbff4u);
    { uint32_t v = 0x7FE0u; push32(c, v); }
    // 0cbff9  push 7
    X86_AT(c, 0xcbff9u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cbffb  call 0xbbba4
    X86_AT(c, 0xcbffbu);
    push32(c, 0xcc000u); x86_call_known(c, 0xbbba4u, f_000bbba4); X86_RET(c, 0xcc000u);
    X86_TICK(c, 11);
    // 0cc000  add esp, 0x40
    X86_AT(c, 0xcc000u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x40u, 0, 4); }
    // 0cc003  push 7
    X86_AT(c, 0xcc003u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cc005  call 0xbbb5c
    X86_AT(c, 0xcc005u);
    push32(c, 0xcc00au); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xcc00au);
    X86_TICK(c, 11);
    // 0cc00a  push 0x7ff4
    X86_AT(c, 0xcc00au);
    { uint32_t v = 0x7FF4u; push32(c, v); }
    // 0cc00f  push 7
    X86_AT(c, 0xcc00fu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cc011  call 0xbbba4
    X86_AT(c, 0xcc011u);
    push32(c, 0xcc016u); x86_call_known(c, 0xbbba4u, f_000bbba4); X86_RET(c, 0xcc016u);
    X86_TICK(c, 9);
    // 0cc016  push 7
    X86_AT(c, 0xcc016u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cc018  call 0xbbb5c
    X86_AT(c, 0xcc018u);
    push32(c, 0xcc01du); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xcc01du);
    X86_TICK(c, 11);
    // 0cc01d  push 0x800c
    X86_AT(c, 0xcc01du);
    { uint32_t v = 0x800Cu; push32(c, v); }
    // 0cc022  push 7
    X86_AT(c, 0xcc022u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cc024  call 0xbbba4
    X86_AT(c, 0xcc024u);
    push32(c, 0xcc029u); x86_call_known(c, 0xbbba4u, f_000bbba4); X86_RET(c, 0xcc029u);
    X86_TICK(c, 9);
    // 0cc029  push 7
    X86_AT(c, 0xcc029u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cc02b  call 0xbbb5c
    X86_AT(c, 0xcc02bu);
    push32(c, 0xcc030u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xcc030u);
    X86_TICK(c, 11);
    // 0cc030  push 0x8028
    X86_AT(c, 0xcc030u);
    { uint32_t v = 0x8028u; push32(c, v); }
    // 0cc035  push 7
    X86_AT(c, 0xcc035u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cc037  call 0xbbba4
    X86_AT(c, 0xcc037u);
    push32(c, 0xcc03cu); x86_call_known(c, 0xbbba4u, f_000bbba4); X86_RET(c, 0xcc03cu);
    X86_TICK(c, 9);
    // 0cc03c  push 7
    X86_AT(c, 0xcc03cu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cc03e  call 0xbbb5c
    X86_AT(c, 0xcc03eu);
    push32(c, 0xcc043u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xcc043u);
    X86_TICK(c, 9);
    // 0cc043  push 7
    X86_AT(c, 0xcc043u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cc045  call 0xbbb5c
    X86_AT(c, 0xcc045u);
    push32(c, 0xcc04au); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xcc04au);
    X86_TICK(c, 9);
    // 0cc04a  push 7
    X86_AT(c, 0xcc04au);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cc04c  call 0xc9890
    X86_AT(c, 0xcc04cu);
    push32(c, 0xcc051u); x86_call_known(c, 0xc9890u, f_000c9890); X86_RET(c, 0xcc051u);
    X86_TICK(c, 13);
    // 0cc051  add esp, 0x30
    X86_AT(c, 0xcc051u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x30u, 0, 4); }
    // 0cc054  push 0x8038
    X86_AT(c, 0xcc054u);
    { uint32_t v = 0x8038u; push32(c, v); }
    // 0cc059  push 7
    X86_AT(c, 0xcc059u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cc05b  call 0xbbba4
    X86_AT(c, 0xcc05bu);
    push32(c, 0xcc060u); x86_call_known(c, 0xbbba4u, f_000bbba4); X86_RET(c, 0xcc060u);
    X86_TICK(c, 9);
    // 0cc060  push 7
    X86_AT(c, 0xcc060u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cc062  call 0xbbb5c
    X86_AT(c, 0xcc062u);
    push32(c, 0xcc067u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xcc067u);
    X86_TICK(c, 11);
    // 0cc067  push 0x804c
    X86_AT(c, 0xcc067u);
    { uint32_t v = 0x804Cu; push32(c, v); }
    // 0cc06c  push 7
    X86_AT(c, 0xcc06cu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cc06e  call 0xbbba4
    X86_AT(c, 0xcc06eu);
    push32(c, 0xcc073u); x86_call_known(c, 0xbbba4u, f_000bbba4); X86_RET(c, 0xcc073u);
    X86_TICK(c, 9);
    // 0cc073  push 7
    X86_AT(c, 0xcc073u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cc075  call 0xbbb5c
    X86_AT(c, 0xcc075u);
    push32(c, 0xcc07au); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xcc07au);
    X86_TICK(c, 11);
    // 0cc07a  push 0x8068
    X86_AT(c, 0xcc07au);
    { uint32_t v = 0x8068u; push32(c, v); }
    // 0cc07f  push 7
    X86_AT(c, 0xcc07fu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cc081  call 0xbbba4
    X86_AT(c, 0xcc081u);
    push32(c, 0xcc086u); x86_call_known(c, 0xbbba4u, f_000bbba4); X86_RET(c, 0xcc086u);
    X86_TICK(c, 9);
    // 0cc086  push 7
    X86_AT(c, 0xcc086u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cc088  call 0xbbb5c
    X86_AT(c, 0xcc088u);
    push32(c, 0xcc08du); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xcc08du);
    X86_TICK(c, 11);
    // 0cc08d  push 0x8084
    X86_AT(c, 0xcc08du);
    { uint32_t v = 0x8084u; push32(c, v); }
    // 0cc092  push 7
    X86_AT(c, 0xcc092u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cc094  call 0xbbba4
    X86_AT(c, 0xcc094u);
    push32(c, 0xcc099u); x86_call_known(c, 0xbbba4u, f_000bbba4); X86_RET(c, 0xcc099u);
    X86_TICK(c, 9);
    // 0cc099  push 7
    X86_AT(c, 0xcc099u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cc09b  call 0xbbb5c
    X86_AT(c, 0xcc09bu);
    push32(c, 0xcc0a0u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xcc0a0u);
    X86_TICK(c, 11);
    // 0cc0a0  push 0x80a0
    X86_AT(c, 0xcc0a0u);
    { uint32_t v = 0x80A0u; push32(c, v); }
    // 0cc0a5  push 7
    X86_AT(c, 0xcc0a5u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cc0a7  call 0xbbba4
    X86_AT(c, 0xcc0a7u);
    push32(c, 0xcc0acu); x86_call_known(c, 0xbbba4u, f_000bbba4); X86_RET(c, 0xcc0acu);
    X86_TICK(c, 9);
    // 0cc0ac  push 7
    X86_AT(c, 0xcc0acu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cc0ae  call 0xbbb5c
    X86_AT(c, 0xcc0aeu);
    push32(c, 0xcc0b3u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xcc0b3u);
    X86_TICK(c, 13);
    // 0cc0b3  add esp, 0x3c
    X86_AT(c, 0xcc0b3u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x3Cu, 0, 4); }
    // 0cc0b6  push 0x80c0
    X86_AT(c, 0xcc0b6u);
    { uint32_t v = 0x80C0u; push32(c, v); }
    // 0cc0bb  push 7
    X86_AT(c, 0xcc0bbu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cc0bd  call 0xbbba4
    X86_AT(c, 0xcc0bdu);
    push32(c, 0xcc0c2u); x86_call_known(c, 0xbbba4u, f_000bbba4); X86_RET(c, 0xcc0c2u);
    X86_TICK(c, 9);
    // 0cc0c2  push 7
    X86_AT(c, 0xcc0c2u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cc0c4  call 0xbbb5c
    X86_AT(c, 0xcc0c4u);
    push32(c, 0xcc0c9u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xcc0c9u);
    X86_TICK(c, 11);
    // 0cc0c9  push 0x80d0
    X86_AT(c, 0xcc0c9u);
    { uint32_t v = 0x80D0u; push32(c, v); }
    // 0cc0ce  push 7
    X86_AT(c, 0xcc0ceu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cc0d0  call 0xbbba4
    X86_AT(c, 0xcc0d0u);
    push32(c, 0xcc0d5u); x86_call_known(c, 0xbbba4u, f_000bbba4); X86_RET(c, 0xcc0d5u);
    X86_TICK(c, 9);
    // 0cc0d5  push 7
    X86_AT(c, 0xcc0d5u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cc0d7  call 0xc9890
    X86_AT(c, 0xcc0d7u);
    push32(c, 0xcc0dcu); x86_call_known(c, 0xc9890u, f_000c9890); X86_RET(c, 0xcc0dcu);
    X86_TICK(c, 9);
    // 0cc0dc  push 7
    X86_AT(c, 0xcc0dcu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cc0de  call 0xbbb5c
    X86_AT(c, 0xcc0deu);
    push32(c, 0xcc0e3u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xcc0e3u);
    X86_TICK(c, 11);
    // 0cc0e3  push 0x80f0
    X86_AT(c, 0xcc0e3u);
    { uint32_t v = 0x80F0u; push32(c, v); }
    // 0cc0e8  push 7
    X86_AT(c, 0xcc0e8u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cc0ea  call 0xbbba4
    X86_AT(c, 0xcc0eau);
    push32(c, 0xcc0efu); x86_call_known(c, 0xbbba4u, f_000bbba4); X86_RET(c, 0xcc0efu);
    X86_TICK(c, 9);
    // 0cc0ef  push 7
    X86_AT(c, 0xcc0efu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cc0f1  call 0xbbb5c
    X86_AT(c, 0xcc0f1u);
    push32(c, 0xcc0f6u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xcc0f6u);
    X86_TICK(c, 11);
    // 0cc0f6  push 0x8100
    X86_AT(c, 0xcc0f6u);
    { uint32_t v = 0x8100u; push32(c, v); }
    // 0cc0fb  push 7
    X86_AT(c, 0xcc0fbu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cc0fd  call 0xbbba4
    X86_AT(c, 0xcc0fdu);
    push32(c, 0xcc102u); x86_call_known(c, 0xbbba4u, f_000bbba4); X86_RET(c, 0xcc102u);
    X86_TICK(c, 9);
    // 0cc102  push 7
    X86_AT(c, 0xcc102u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cc104  call 0xbbb5c
    X86_AT(c, 0xcc104u);
    push32(c, 0xcc109u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xcc109u);
    X86_TICK(c, 11);
    // 0cc109  push 0x811c
    X86_AT(c, 0xcc109u);
    { uint32_t v = 0x811Cu; push32(c, v); }
    // 0cc10e  push 7
    X86_AT(c, 0xcc10eu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cc110  call 0xbbba4
    X86_AT(c, 0xcc110u);
    push32(c, 0xcc115u); x86_call_known(c, 0xbbba4u, f_000bbba4); X86_RET(c, 0xcc115u);
    X86_TICK(c, 11);
    // 0cc115  add esp, 0x3c
    X86_AT(c, 0xcc115u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x3Cu, 0, 4); }
    // 0cc118  push 7
    X86_AT(c, 0xcc118u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cc11a  call 0xbbb5c
    X86_AT(c, 0xcc11au);
    push32(c, 0xcc11fu); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xcc11fu);
    X86_TICK(c, 13);
    // 0cc11f  add esp, 4
    X86_AT(c, 0xcc11fu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0cc122  push 0x8138
    X86_AT(c, 0xcc122u);
    { uint32_t v = 0x8138u; push32(c, v); }
    // 0cc127  push 7
    X86_AT(c, 0xcc127u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cc129  call 0xbbba4
    X86_AT(c, 0xcc129u);
    push32(c, 0xcc12eu); x86_call_known(c, 0xbbba4u, f_000bbba4); X86_RET(c, 0xcc12eu);
    X86_TICK(c, 9);
    // 0cc12e  push 7
    X86_AT(c, 0xcc12eu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cc130  call 0xbbb5c
    X86_AT(c, 0xcc130u);
    push32(c, 0xcc135u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xcc135u);
    X86_TICK(c, 9);
    // 0cc135  push 7
    X86_AT(c, 0xcc135u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cc137  call 0xbb6b0
    X86_AT(c, 0xcc137u);
    push32(c, 0xcc13cu); x86_call_known(c, 0xbb6b0u, f_000bb6b0); X86_RET(c, 0xcc13cu);
    X86_TICK(c, 12);
    // 0cc13c  add esp, 0x10
    X86_AT(c, 0xcc13cu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0cc13f  ret 
    X86_AT(c, 0xcc13fu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xcbf98u, "ran off the end of a function");
}
void f_000cc140(X86Cpu& c) {
    X86_TICK(c, 21);
    // 0cc140  push ebp
    X86_AT(c, 0xcc140u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0cc141  mov ebp, esp
    X86_AT(c, 0xcc141u);
    c.r[5] = c.r[4];
    // 0cc143  sub esp, 8
    X86_AT(c, 0xcc143u);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, 0x8u, 0, 4); }
    // 0cc146  push ebx
    X86_AT(c, 0xcc146u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0cc147  push esi
    X86_AT(c, 0xcc147u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0cc148  push edi
    X86_AT(c, 0xcc148u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0cc149  push 7
    X86_AT(c, 0xcc149u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cc14b  call 0xbb6b0
    X86_AT(c, 0xcc14bu);
    push32(c, 0xcc150u); x86_call_known(c, 0xbb6b0u, f_000bb6b0); X86_RET(c, 0xcc150u);
    X86_TICK(c, 11);
    // 0cc150  push 0x8154
    X86_AT(c, 0xcc150u);
    { uint32_t v = 0x8154u; push32(c, v); }
    // 0cc155  push 7
    X86_AT(c, 0xcc155u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cc157  call 0xba428
    X86_AT(c, 0xcc157u);
    push32(c, 0xcc15cu); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xcc15cu);
    X86_TICK(c, 9);
    // 0cc15c  push 7
    X86_AT(c, 0xcc15cu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cc15e  call 0xbbb5c
    X86_AT(c, 0xcc15eu);
    push32(c, 0xcc163u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xcc163u);
    X86_TICK(c, 11);
    // 0cc163  push 0x816c
    X86_AT(c, 0xcc163u);
    { uint32_t v = 0x816Cu; push32(c, v); }
    // 0cc168  push 7
    X86_AT(c, 0xcc168u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cc16a  call 0xba428
    X86_AT(c, 0xcc16au);
    push32(c, 0xcc16fu); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xcc16fu);
    X86_TICK(c, 9);
    // 0cc16f  push 7
    X86_AT(c, 0xcc16fu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cc171  call 0xbbb5c
    X86_AT(c, 0xcc171u);
    push32(c, 0xcc176u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xcc176u);
    X86_TICK(c, 11);
    // 0cc176  push 0x8188
    X86_AT(c, 0xcc176u);
    { uint32_t v = 0x8188u; push32(c, v); }
    // 0cc17b  push 7
    X86_AT(c, 0xcc17bu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cc17d  call 0xba428
    X86_AT(c, 0xcc17du);
    push32(c, 0xcc182u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xcc182u);
    X86_TICK(c, 9);
    // 0cc182  push 7
    X86_AT(c, 0xcc182u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cc184  call 0xbbb5c
    X86_AT(c, 0xcc184u);
    push32(c, 0xcc189u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xcc189u);
    X86_TICK(c, 11);
    // 0cc189  push 0x81ac
    X86_AT(c, 0xcc189u);
    { uint32_t v = 0x81ACu; push32(c, v); }
    // 0cc18e  push 7
    X86_AT(c, 0xcc18eu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cc190  call 0xba428
    X86_AT(c, 0xcc190u);
    push32(c, 0xcc195u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xcc195u);
    X86_TICK(c, 9);
    // 0cc195  push 7
    X86_AT(c, 0xcc195u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cc197  call 0xbbb5c
    X86_AT(c, 0xcc197u);
    push32(c, 0xcc19cu); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xcc19cu);
    X86_TICK(c, 11);
    // 0cc19c  push 0x81c8
    X86_AT(c, 0xcc19cu);
    { uint32_t v = 0x81C8u; push32(c, v); }
    // 0cc1a1  push 7
    X86_AT(c, 0xcc1a1u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cc1a3  call 0xba428
    X86_AT(c, 0xcc1a3u);
    push32(c, 0xcc1a8u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xcc1a8u);
    X86_TICK(c, 11);
    // 0cc1a8  add esp, 0x3c
    X86_AT(c, 0xcc1a8u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x3Cu, 0, 4); }
    // 0cc1ab  push 7
    X86_AT(c, 0xcc1abu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cc1ad  call 0xbbb5c
    X86_AT(c, 0xcc1adu);
    push32(c, 0xcc1b2u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xcc1b2u);
    X86_TICK(c, 11);
    // 0cc1b2  push 0x81e4
    X86_AT(c, 0xcc1b2u);
    { uint32_t v = 0x81E4u; push32(c, v); }
    // 0cc1b7  push 7
    X86_AT(c, 0xcc1b7u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cc1b9  call 0xba428
    X86_AT(c, 0xcc1b9u);
    push32(c, 0xcc1beu); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xcc1beu);
    X86_TICK(c, 2);
    // 0cc1be  add esp, 0xc
    X86_AT(c, 0xcc1beu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
L_cc1c1:
    X86_TICK(c, 9);
    // 0cc1c1  push 7
    X86_AT(c, 0xcc1c1u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cc1c3  call 0xb9514
    X86_AT(c, 0xcc1c3u);
    push32(c, 0xcc1c8u); x86_call_known(c, 0xb9514u, f_000b9514); X86_RET(c, 0xcc1c8u);
    X86_TICK(c, 11);
    // 0cc1c8  mov byte ptr [ebp - 1], al
    X86_AT(c, 0xcc1c8u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFFu)), g8(c, 0));
    // 0cc1cb  add esp, 4
    X86_AT(c, 0xcc1cbu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0cc1ce  cmp al, 1
    X86_AT(c, 0xcc1ceu);
    (void)x86_sub(c, g8(c, 0), 0x1u, 0, 1);
    // 0cc1d0  je 0xcc1f6
    X86_AT(c, 0xcc1d0u);
    if (x86_cc(c, 4)) { goto L_cc1f6; }
    X86_TICK(c, 7);
    // 0cc1d2  cmp al, 0x46
    X86_AT(c, 0xcc1d2u);
    (void)x86_sub(c, g8(c, 0), 0x46u, 0, 1);
    // 0cc1d4  je 0xcc1f6
    X86_AT(c, 0xcc1d4u);
    if (x86_cc(c, 4)) { goto L_cc1f6; }
    X86_TICK(c, 7);
    // 0cc1d6  cmp al, 0x47
    X86_AT(c, 0xcc1d6u);
    (void)x86_sub(c, g8(c, 0), 0x47u, 0, 1);
    // 0cc1d8  je 0xcc1f6
    X86_AT(c, 0xcc1d8u);
    if (x86_cc(c, 4)) { goto L_cc1f6; }
    X86_TICK(c, 7);
    // 0cc1da  cmp al, 0x45
    X86_AT(c, 0xcc1dau);
    (void)x86_sub(c, g8(c, 0), 0x45u, 0, 1);
    // 0cc1dc  je 0xcc1f6
    X86_AT(c, 0xcc1dcu);
    if (x86_cc(c, 4)) { goto L_cc1f6; }
    X86_TICK(c, 7);
    // 0cc1de  cmp al, 0x57
    X86_AT(c, 0xcc1deu);
    (void)x86_sub(c, g8(c, 0), 0x57u, 0, 1);
    // 0cc1e0  je 0xcc1f6
    X86_AT(c, 0xcc1e0u);
    if (x86_cc(c, 4)) { goto L_cc1f6; }
    X86_TICK(c, 7);
    // 0cc1e2  cmp al, 0x41
    X86_AT(c, 0xcc1e2u);
    (void)x86_sub(c, g8(c, 0), 0x41u, 0, 1);
    // 0cc1e4  je 0xcc1f6
    X86_AT(c, 0xcc1e4u);
    if (x86_cc(c, 4)) { goto L_cc1f6; }
    X86_TICK(c, 7);
    // 0cc1e6  and al, al
    X86_AT(c, 0xcc1e6u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & g8(c, 0), 1)); }
    // 0cc1e8  je 0xcc1c1
    X86_AT(c, 0xcc1e8u);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xcc1c1u); goto L_cc1c1; }
    X86_TICK(c, 9);
    // 0cc1ea  push 1
    X86_AT(c, 0xcc1eau);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0cc1ec  call 0xb607c
    X86_AT(c, 0xcc1ecu);
    push32(c, 0xcc1f1u); x86_call_known(c, 0xb607cu, f_000b607c); X86_RET(c, 0xcc1f1u);
    X86_TICK(c, 9);
    // 0cc1f1  add esp, 4
    X86_AT(c, 0xcc1f1u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0cc1f4  jmp 0xcc1c1
    X86_AT(c, 0xcc1f4u);
    X86_POLL(c, 0xcc1c1u); goto L_cc1c1;
L_cc1f6:
    X86_TICK(c, 9);
    // 0cc1f6  push 7
    X86_AT(c, 0xcc1f6u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cc1f8  call 0xbb6b0
    X86_AT(c, 0xcc1f8u);
    push32(c, 0xcc1fdu); x86_call_known(c, 0xbb6b0u, f_000bb6b0); X86_RET(c, 0xcc1fdu);
    X86_TICK(c, 14);
    // 0cc1fd  add esp, 4
    X86_AT(c, 0xcc1fdu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0cc200  cmp byte ptr [ebp - 1], 1
    X86_AT(c, 0xcc200u);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFFu))), 0x1u, 0, 1);
    // 0cc204  jne 0xcc210
    X86_AT(c, 0xcc204u);
    if (x86_cc(c, 5)) { goto L_cc210; }
    X86_TICK(c, 9);
    // 0cc206  push 0x8204
    X86_AT(c, 0xcc206u);
    { uint32_t v = 0x8204u; push32(c, v); }
    // 0cc20b  jmp 0xcc7d2
    X86_AT(c, 0xcc20bu);
    goto L_cc7d2;
L_cc210:
    X86_TICK(c, 13);
    // 0cc210  movzx edx, byte ptr [ebp - 1]
    X86_AT(c, 0xcc210u);
    c.r[2] = rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFFu)));
    // 0cc214  cmp edx, 0x41
    X86_AT(c, 0xcc214u);
    (void)x86_sub(c, c.r[2], 0x41u, 0, 4);
    // 0cc217  je 0xcc24b
    X86_AT(c, 0xcc217u);
    if (x86_cc(c, 4)) { goto L_cc24b; }
    X86_TICK(c, 7);
    // 0cc219  cmp edx, 0x45
    X86_AT(c, 0xcc219u);
    (void)x86_sub(c, c.r[2], 0x45u, 0, 4);
    // 0cc21c  je 0xcc23d
    X86_AT(c, 0xcc21cu);
    if (x86_cc(c, 4)) { goto L_cc23d; }
    X86_TICK(c, 7);
    // 0cc21e  cmp edx, 0x46
    X86_AT(c, 0xcc21eu);
    (void)x86_sub(c, c.r[2], 0x46u, 0, 4);
    // 0cc221  je 0xcc22f
    X86_AT(c, 0xcc221u);
    if (x86_cc(c, 4)) { goto L_cc22f; }
    X86_TICK(c, 7);
    // 0cc223  cmp edx, 0x47
    X86_AT(c, 0xcc223u);
    (void)x86_sub(c, c.r[2], 0x47u, 0, 4);
    // 0cc226  je 0xcc236
    X86_AT(c, 0xcc226u);
    if (x86_cc(c, 4)) { goto L_cc236; }
    X86_TICK(c, 7);
    // 0cc228  cmp edx, 0x57
    X86_AT(c, 0xcc228u);
    (void)x86_sub(c, c.r[2], 0x57u, 0, 4);
    // 0cc22b  je 0xcc244
    X86_AT(c, 0xcc22bu);
    if (x86_cc(c, 4)) { goto L_cc244; }
    X86_TICK(c, 7);
    // 0cc22d  jmp 0xcc25a
    X86_AT(c, 0xcc22du);
    goto L_cc25a;
L_cc22f:
    X86_TICK(c, 9);
    // 0cc22f  push 0x821c
    X86_AT(c, 0xcc22fu);
    { uint32_t v = 0x821Cu; push32(c, v); }
    // 0cc234  jmp 0xcc250
    X86_AT(c, 0xcc234u);
    goto L_cc250;
L_cc236:
    X86_TICK(c, 9);
    // 0cc236  push 0x8230
    X86_AT(c, 0xcc236u);
    { uint32_t v = 0x8230u; push32(c, v); }
    // 0cc23b  jmp 0xcc250
    X86_AT(c, 0xcc23bu);
    goto L_cc250;
L_cc23d:
    X86_TICK(c, 9);
    // 0cc23d  push 0x8248
    X86_AT(c, 0xcc23du);
    { uint32_t v = 0x8248u; push32(c, v); }
    // 0cc242  jmp 0xcc250
    X86_AT(c, 0xcc242u);
    goto L_cc250;
L_cc244:
    X86_TICK(c, 9);
    // 0cc244  push 0x8268
    X86_AT(c, 0xcc244u);
    { uint32_t v = 0x8268u; push32(c, v); }
    // 0cc249  jmp 0xcc250
    X86_AT(c, 0xcc249u);
    goto L_cc250;
L_cc24b:
    X86_TICK(c, 2);
    // 0cc24b  push 0x8280
    X86_AT(c, 0xcc24bu);
    { uint32_t v = 0x8280u; push32(c, v); }
L_cc250:
    X86_TICK(c, 9);
    // 0cc250  push 7
    X86_AT(c, 0xcc250u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cc252  call 0xba428
    X86_AT(c, 0xcc252u);
    push32(c, 0xcc257u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xcc257u);
    X86_TICK(c, 2);
    // 0cc257  add esp, 8
    X86_AT(c, 0xcc257u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
L_cc25a:
    X86_TICK(c, 9);
    // 0cc25a  push 7
    X86_AT(c, 0xcc25au);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cc25c  call 0xbbb5c
    X86_AT(c, 0xcc25cu);
    push32(c, 0xcc261u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xcc261u);
    X86_TICK(c, 15);
    // 0cc261  add esp, 4
    X86_AT(c, 0xcc261u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0cc264  movzx edx, byte ptr [ebp - 1]
    X86_AT(c, 0xcc264u);
    c.r[2] = rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFFu)));
    // 0cc268  cmp edx, 0x41
    X86_AT(c, 0xcc268u);
    (void)x86_sub(c, c.r[2], 0x41u, 0, 4);
    // 0cc26b  je 0xcc73a
    X86_AT(c, 0xcc26bu);
    if (x86_cc(c, 4)) { goto L_cc73a; }
    X86_TICK(c, 7);
    // 0cc271  cmp edx, 0x45
    X86_AT(c, 0xcc271u);
    (void)x86_sub(c, c.r[2], 0x45u, 0, 4);
    // 0cc274  je 0xcc34c
    X86_AT(c, 0xcc274u);
    if (x86_cc(c, 4)) { goto L_cc34c; }
    X86_TICK(c, 7);
    // 0cc27a  cmp edx, 0x46
    X86_AT(c, 0xcc27au);
    (void)x86_sub(c, c.r[2], 0x46u, 0, 4);
    // 0cc27d  je 0xcc569
    X86_AT(c, 0xcc27du);
    if (x86_cc(c, 4)) { goto L_cc569; }
    X86_TICK(c, 7);
    // 0cc283  cmp edx, 0x47
    X86_AT(c, 0xcc283u);
    (void)x86_sub(c, c.r[2], 0x47u, 0, 4);
    // 0cc286  je 0xcc296
    X86_AT(c, 0xcc286u);
    if (x86_cc(c, 4)) { goto L_cc296; }
    X86_TICK(c, 7);
    // 0cc288  cmp edx, 0x57
    X86_AT(c, 0xcc288u);
    (void)x86_sub(c, c.r[2], 0x57u, 0, 4);
    // 0cc28b  je 0xcc650
    X86_AT(c, 0xcc28bu);
    if (x86_cc(c, 4)) { goto L_cc650; }
    X86_TICK(c, 7);
    // 0cc291  jmp 0xcc833
    X86_AT(c, 0xcc291u);
    goto L_cc833;
L_cc296:
    X86_TICK(c, 11);
    // 0cc296  push 0x8298
    X86_AT(c, 0xcc296u);
    { uint32_t v = 0x8298u; push32(c, v); }
    // 0cc29b  push 7
    X86_AT(c, 0xcc29bu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cc29d  call 0xba428
    X86_AT(c, 0xcc29du);
    push32(c, 0xcc2a2u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xcc2a2u);
    X86_TICK(c, 9);
    // 0cc2a2  push 7
    X86_AT(c, 0xcc2a2u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cc2a4  call 0xb6404
    X86_AT(c, 0xcc2a4u);
    push32(c, 0xcc2a9u); x86_call_known(c, 0xb6404u, f_000b6404); X86_RET(c, 0xcc2a9u);
    X86_TICK(c, 12);
    // 0cc2a9  xchg edi, eax
    X86_AT(c, 0xcc2a9u);
    { uint32_t t = c.r[7]; c.r[7] = c.r[0]; c.r[0] = t; }
    // 0cc2aa  push 7
    X86_AT(c, 0xcc2aau);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cc2ac  call 0xbbb5c
    X86_AT(c, 0xcc2acu);
    push32(c, 0xcc2b1u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xcc2b1u);
    X86_TICK(c, 9);
    // 0cc2b1  add esp, 0x10
    X86_AT(c, 0xcc2b1u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0cc2b4  and edi, edi
    X86_AT(c, 0xcc2b4u);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & c.r[7], 4); }
    // 0cc2b6  jg 0xcc2c2
    X86_AT(c, 0xcc2b6u);
    if (x86_cc(c, 15)) { goto L_cc2c2; }
    X86_TICK(c, 9);
    // 0cc2b8  push 0x82c0
    X86_AT(c, 0xcc2b8u);
    { uint32_t v = 0x82C0u; push32(c, v); }
    // 0cc2bd  jmp 0xcc7d2
    X86_AT(c, 0xcc2bdu);
    goto L_cc7d2;
L_cc2c2:
    X86_TICK(c, 21);
    // 0cc2c2  mov eax, dword ptr [ebp + 8]
    X86_AT(c, 0xcc2c2u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0cc2c5  lea eax, [eax + eax*2]
    X86_AT(c, 0xcc2c5u);
    c.r[0] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0cc2c8  lea edx, [eax*8]
    X86_AT(c, 0xcc2c8u);
    c.r[2] = (uint32_t)(c.r[0] * 8);
    // 0cc2cf  lea edx, [eax + edx*8]
    X86_AT(c, 0xcc2cfu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 8);
    // 0cc2d2  cmp edi, dword ptr [edx + 0xa4ae9]
    X86_AT(c, 0xcc2d2u);
    (void)x86_sub(c, c.r[7], rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4AE9u))), 0, 4);
    // 0cc2d8  jle 0xcc2eb
    X86_AT(c, 0xcc2d8u);
    if (x86_cc(c, 14)) { goto L_cc2eb; }
    X86_TICK(c, 9);
    // 0cc2da  push 3
    X86_AT(c, 0xcc2dau);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0cc2dc  call 0xb607c
    X86_AT(c, 0xcc2dcu);
    push32(c, 0xcc2e1u); x86_call_known(c, 0xb607cu, f_000b607c); X86_RET(c, 0xcc2e1u);
    X86_TICK(c, 9);
    // 0cc2e1  push 0x82d8
    X86_AT(c, 0xcc2e1u);
    { uint32_t v = 0x82D8u; push32(c, v); }
    // 0cc2e6  jmp 0xcc5f6
    X86_AT(c, 0xcc2e6u);
    goto L_cc5f6;
L_cc2eb:
    X86_TICK(c, 25);
    // 0cc2eb  mov eax, dword ptr [ebp + 0xc]
    X86_AT(c, 0xcc2ebu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0cc2ee  lea eax, [eax + eax*2]
    X86_AT(c, 0xcc2eeu);
    c.r[0] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0cc2f1  lea edx, [eax*8]
    X86_AT(c, 0xcc2f1u);
    c.r[2] = (uint32_t)(c.r[0] * 8);
    // 0cc2f8  lea edx, [eax + edx*8]
    X86_AT(c, 0xcc2f8u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 8);
    // 0cc2fb  mov eax, edi
    X86_AT(c, 0xcc2fbu);
    c.r[0] = c.r[7];
    // 0cc2fd  add eax, dword ptr [edx + 0xa4ae9]
    X86_AT(c, 0xcc2fdu);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4AE9u))), 0, 4); }
    // 0cc303  cmp eax, 0x270f
    X86_AT(c, 0xcc303u);
    (void)x86_sub(c, c.r[0], 0x270Fu, 0, 4);
    // 0cc308  jle 0xcc31b
    X86_AT(c, 0xcc308u);
    if (x86_cc(c, 14)) { goto L_cc31b; }
    X86_TICK(c, 9);
    // 0cc30a  push 3
    X86_AT(c, 0xcc30au);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0cc30c  call 0xb607c
    X86_AT(c, 0xcc30cu);
    push32(c, 0xcc311u); x86_call_known(c, 0xb607cu, f_000b607c); X86_RET(c, 0xcc311u);
    X86_TICK(c, 9);
    // 0cc311  push 0x8300
    X86_AT(c, 0xcc311u);
    { uint32_t v = 0x8300u; push32(c, v); }
    // 0cc316  jmp 0xcc5f6
    X86_AT(c, 0xcc316u);
    goto L_cc5f6;
L_cc31b:
    X86_TICK(c, 41);
    // 0cc31b  mov eax, dword ptr [ebp + 8]
    X86_AT(c, 0xcc31bu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0cc31e  lea eax, [eax + eax*2]
    X86_AT(c, 0xcc31eu);
    c.r[0] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0cc321  lea edx, [eax*8]
    X86_AT(c, 0xcc321u);
    c.r[2] = (uint32_t)(c.r[0] * 8);
    // 0cc328  lea edx, [eax + edx*8]
    X86_AT(c, 0xcc328u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 8);
    // 0cc32b  sub dword ptr [edx + 0xa4ae9], edi
    X86_AT(c, 0xcc32bu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[2] + 0xA4AE9u)); uint32_t v = rd32(ea); wr32(ea, x86_sub(c, v, c.r[7], 0, 4)); }
    // 0cc331  mov eax, dword ptr [ebp + 0xc]
    X86_AT(c, 0xcc331u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0cc334  lea eax, [eax + eax*2]
    X86_AT(c, 0xcc334u);
    c.r[0] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0cc337  lea edx, [eax*8]
    X86_AT(c, 0xcc337u);
    c.r[2] = (uint32_t)(c.r[0] * 8);
    // 0cc33e  lea edx, [eax + edx*8]
    X86_AT(c, 0xcc33eu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 8);
    // 0cc341  add dword ptr [edx + 0xa4ae9], edi
    X86_AT(c, 0xcc341u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[2] + 0xA4AE9u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[7], 0, 4)); }
    // 0cc347  jmp 0xcc833
    X86_AT(c, 0xcc347u);
    goto L_cc833;
L_cc34c:
    X86_TICK(c, 11);
    // 0cc34c  push 0x8328
    X86_AT(c, 0xcc34cu);
    { uint32_t v = 0x8328u; push32(c, v); }
    // 0cc351  push 7
    X86_AT(c, 0xcc351u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cc353  call 0xba428
    X86_AT(c, 0xcc353u);
    push32(c, 0xcc358u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xcc358u);
    X86_TICK(c, 9);
    // 0cc358  push 7
    X86_AT(c, 0xcc358u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cc35a  call 0xbbb5c
    X86_AT(c, 0xcc35au);
    push32(c, 0xcc35fu); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xcc35fu);
    X86_TICK(c, 11);
    // 0cc35f  push 0x8354
    X86_AT(c, 0xcc35fu);
    { uint32_t v = 0x8354u; push32(c, v); }
    // 0cc364  push 7
    X86_AT(c, 0xcc364u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cc366  call 0xba428
    X86_AT(c, 0xcc366u);
    push32(c, 0xcc36bu); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xcc36bu);
    X86_TICK(c, 9);
    // 0cc36b  push 7
    X86_AT(c, 0xcc36bu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cc36d  call 0xbbb5c
    X86_AT(c, 0xcc36du);
    push32(c, 0xcc372u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xcc372u);
    X86_TICK(c, 11);
    // 0cc372  push 0x836c
    X86_AT(c, 0xcc372u);
    { uint32_t v = 0x836Cu; push32(c, v); }
    // 0cc377  push 7
    X86_AT(c, 0xcc377u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cc379  call 0xba428
    X86_AT(c, 0xcc379u);
    push32(c, 0xcc37eu); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xcc37eu);
    X86_TICK(c, 9);
    // 0cc37e  push 7
    X86_AT(c, 0xcc37eu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cc380  call 0xbbb5c
    X86_AT(c, 0xcc380u);
    push32(c, 0xcc385u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xcc385u);
    X86_TICK(c, 11);
    // 0cc385  push 0x8380
    X86_AT(c, 0xcc385u);
    { uint32_t v = 0x8380u; push32(c, v); }
    // 0cc38a  push 7
    X86_AT(c, 0xcc38au);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cc38c  call 0xba428
    X86_AT(c, 0xcc38cu);
    push32(c, 0xcc391u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xcc391u);
    X86_TICK(c, 9);
    // 0cc391  push 7
    X86_AT(c, 0xcc391u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cc393  call 0xbbb5c
    X86_AT(c, 0xcc393u);
    push32(c, 0xcc398u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xcc398u);
    X86_TICK(c, 11);
    // 0cc398  push 0x839c
    X86_AT(c, 0xcc398u);
    { uint32_t v = 0x839Cu; push32(c, v); }
    // 0cc39d  push 7
    X86_AT(c, 0xcc39du);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cc39f  call 0xba428
    X86_AT(c, 0xcc39fu);
    push32(c, 0xcc3a4u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xcc3a4u);
    X86_TICK(c, 9);
    // 0cc3a4  push 7
    X86_AT(c, 0xcc3a4u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cc3a6  call 0xbbb5c
    X86_AT(c, 0xcc3a6u);
    push32(c, 0xcc3abu); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xcc3abu);
    X86_TICK(c, 13);
    // 0cc3ab  add esp, 0x3c
    X86_AT(c, 0xcc3abu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x3Cu, 0, 4); }
    // 0cc3ae  push 0x83b8
    X86_AT(c, 0xcc3aeu);
    { uint32_t v = 0x83B8u; push32(c, v); }
    // 0cc3b3  push 7
    X86_AT(c, 0xcc3b3u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cc3b5  call 0xba428
    X86_AT(c, 0xcc3b5u);
    push32(c, 0xcc3bau); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xcc3bau);
    X86_TICK(c, 2);
    // 0cc3ba  add esp, 8
    X86_AT(c, 0xcc3bau);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
L_cc3bd:
    X86_TICK(c, 9);
    // 0cc3bd  push 7
    X86_AT(c, 0xcc3bdu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cc3bf  call 0xb9514
    X86_AT(c, 0xcc3bfu);
    push32(c, 0xcc3c4u); x86_call_known(c, 0xb9514u, f_000b9514); X86_RET(c, 0xcc3c4u);
    X86_TICK(c, 12);
    // 0cc3c4  xchg ebx, eax
    X86_AT(c, 0xcc3c4u);
    { uint32_t t = c.r[3]; c.r[3] = c.r[0]; c.r[0] = t; }
    // 0cc3c5  add esp, 4
    X86_AT(c, 0xcc3c5u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0cc3c8  cmp bl, 1
    X86_AT(c, 0xcc3c8u);
    (void)x86_sub(c, g8(c, 3), 0x1u, 0, 1);
    // 0cc3cb  je 0xcc3f1
    X86_AT(c, 0xcc3cbu);
    if (x86_cc(c, 4)) { goto L_cc3f1; }
    X86_TICK(c, 7);
    // 0cc3cd  cmp bl, 0x47
    X86_AT(c, 0xcc3cdu);
    (void)x86_sub(c, g8(c, 3), 0x47u, 0, 1);
    // 0cc3d0  je 0xcc3f1
    X86_AT(c, 0xcc3d0u);
    if (x86_cc(c, 4)) { goto L_cc3f1; }
    X86_TICK(c, 7);
    // 0cc3d2  cmp bl, 0x4b
    X86_AT(c, 0xcc3d2u);
    (void)x86_sub(c, g8(c, 3), 0x4Bu, 0, 1);
    // 0cc3d5  je 0xcc3f1
    X86_AT(c, 0xcc3d5u);
    if (x86_cc(c, 4)) { goto L_cc3f1; }
    X86_TICK(c, 7);
    // 0cc3d7  cmp bl, 0x50
    X86_AT(c, 0xcc3d7u);
    (void)x86_sub(c, g8(c, 3), 0x50u, 0, 1);
    // 0cc3da  je 0xcc3f1
    X86_AT(c, 0xcc3dau);
    if (x86_cc(c, 4)) { goto L_cc3f1; }
    X86_TICK(c, 7);
    // 0cc3dc  cmp bl, 0x54
    X86_AT(c, 0xcc3dcu);
    (void)x86_sub(c, g8(c, 3), 0x54u, 0, 1);
    // 0cc3df  je 0xcc3f1
    X86_AT(c, 0xcc3dfu);
    if (x86_cc(c, 4)) { goto L_cc3f1; }
    X86_TICK(c, 7);
    // 0cc3e1  and bl, bl
    X86_AT(c, 0xcc3e1u);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v & g8(c, 3), 1)); }
    // 0cc3e3  je 0xcc3bd
    X86_AT(c, 0xcc3e3u);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xcc3bdu); goto L_cc3bd; }
    X86_TICK(c, 9);
    // 0cc3e5  push 1
    X86_AT(c, 0xcc3e5u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0cc3e7  call 0xb607c
    X86_AT(c, 0xcc3e7u);
    push32(c, 0xcc3ecu); x86_call_known(c, 0xb607cu, f_000b607c); X86_RET(c, 0xcc3ecu);
    X86_TICK(c, 9);
    // 0cc3ec  add esp, 4
    X86_AT(c, 0xcc3ecu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0cc3ef  jmp 0xcc3bd
    X86_AT(c, 0xcc3efu);
    X86_POLL(c, 0xcc3bdu); goto L_cc3bd;
L_cc3f1:
    X86_TICK(c, 7);
    // 0cc3f1  cmp bl, 1
    X86_AT(c, 0xcc3f1u);
    (void)x86_sub(c, g8(c, 3), 0x1u, 0, 1);
    // 0cc3f4  jne 0xcc400
    X86_AT(c, 0xcc3f4u);
    if (x86_cc(c, 5)) { goto L_cc400; }
    X86_TICK(c, 9);
    // 0cc3f6  push 0x83d8
    X86_AT(c, 0xcc3f6u);
    { uint32_t v = 0x83D8u; push32(c, v); }
    // 0cc3fb  jmp 0xcc7d2
    X86_AT(c, 0xcc3fbu);
    goto L_cc7d2;
L_cc400:
    X86_TICK(c, 12);
    // 0cc400  movzx edx, bl
    X86_AT(c, 0xcc400u);
    c.r[2] = g8(c, 3);
    // 0cc403  sub edx, 0x47
    X86_AT(c, 0xcc403u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, 0x47u, 0, 4); }
    // 0cc406  cmp edx, 0xd
    X86_AT(c, 0xcc406u);
    (void)x86_sub(c, c.r[2], 0xDu, 0, 4);
    // 0cc409  ja 0xcc833
    X86_AT(c, 0xcc409u);
    if (x86_cc(c, 7)) { goto L_cc833; }
    X86_TICK(c, 7);
    // 0cc40f  jmp dword ptr cs:[edx*4 + 0xcc417]
    X86_AT(c, 0xcc40fu);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xCC417u)));
      switch (t) {
      case 0xcc44fu: goto L_cc44f;
      case 0xcc496u: goto L_cc496;
      case 0xcc4ddu: goto L_cc4dd;
      case 0xcc521u: goto L_cc521;
      case 0xcc833u: goto L_cc833;
      default: x86_jump(c, t); return; } }
L_cc44f:
    X86_TICK(c, 11);
    // 0cc44f  push 0x83f0
    X86_AT(c, 0xcc44fu);
    { uint32_t v = 0x83F0u; push32(c, v); }
    // 0cc454  push 7
    X86_AT(c, 0xcc454u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cc456  call 0xba428
    X86_AT(c, 0xcc456u);
    push32(c, 0xcc45bu); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xcc45bu);
    X86_TICK(c, 9);
    // 0cc45b  push 7
    X86_AT(c, 0xcc45bu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cc45d  call 0xbbb5c
    X86_AT(c, 0xcc45du);
    push32(c, 0xcc462u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xcc462u);
    X86_TICK(c, 35);
    // 0cc462  push 0x63
    X86_AT(c, 0xcc462u);
    { uint32_t v = 0x63u; push32(c, v); }
    // 0cc464  mov eax, dword ptr [ebp + 0xc]
    X86_AT(c, 0xcc464u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0cc467  lea eax, [eax + eax*2]
    X86_AT(c, 0xcc467u);
    c.r[0] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0cc46a  lea edx, [eax*8]
    X86_AT(c, 0xcc46au);
    c.r[2] = (uint32_t)(c.r[0] * 8);
    // 0cc471  lea edx, [eax + edx*8]
    X86_AT(c, 0xcc471u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 8);
    // 0cc474  add edx, 0xa4aed
    X86_AT(c, 0xcc474u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, 0xA4AEDu, 0, 4); }
    // 0cc47a  push edx
    X86_AT(c, 0xcc47au);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0cc47b  mov eax, dword ptr [ebp + 8]
    X86_AT(c, 0xcc47bu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0cc47e  lea eax, [eax + eax*2]
    X86_AT(c, 0xcc47eu);
    c.r[0] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0cc481  lea edx, [eax*8]
    X86_AT(c, 0xcc481u);
    c.r[2] = (uint32_t)(c.r[0] * 8);
    // 0cc488  lea edx, [eax + edx*8]
    X86_AT(c, 0xcc488u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 8);
    // 0cc48b  add edx, 0xa4aed
    X86_AT(c, 0xcc48bu);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, 0xA4AEDu, 0, 4); }
    // 0cc491  jmp 0xcc563
    X86_AT(c, 0xcc491u);
    goto L_cc563;
L_cc496:
    X86_TICK(c, 11);
    // 0cc496  push 0x8404
    X86_AT(c, 0xcc496u);
    { uint32_t v = 0x8404u; push32(c, v); }
    // 0cc49b  push 7
    X86_AT(c, 0xcc49bu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cc49d  call 0xba428
    X86_AT(c, 0xcc49du);
    push32(c, 0xcc4a2u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xcc4a2u);
    X86_TICK(c, 9);
    // 0cc4a2  push 7
    X86_AT(c, 0xcc4a2u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cc4a4  call 0xbbb5c
    X86_AT(c, 0xcc4a4u);
    push32(c, 0xcc4a9u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xcc4a9u);
    X86_TICK(c, 35);
    // 0cc4a9  push 0x63
    X86_AT(c, 0xcc4a9u);
    { uint32_t v = 0x63u; push32(c, v); }
    // 0cc4ab  mov eax, dword ptr [ebp + 0xc]
    X86_AT(c, 0xcc4abu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0cc4ae  lea eax, [eax + eax*2]
    X86_AT(c, 0xcc4aeu);
    c.r[0] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0cc4b1  lea edx, [eax*8]
    X86_AT(c, 0xcc4b1u);
    c.r[2] = (uint32_t)(c.r[0] * 8);
    // 0cc4b8  lea edx, [eax + edx*8]
    X86_AT(c, 0xcc4b8u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 8);
    // 0cc4bb  add edx, 0xa4af1
    X86_AT(c, 0xcc4bbu);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, 0xA4AF1u, 0, 4); }
    // 0cc4c1  push edx
    X86_AT(c, 0xcc4c1u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0cc4c2  mov eax, dword ptr [ebp + 8]
    X86_AT(c, 0xcc4c2u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0cc4c5  lea eax, [eax + eax*2]
    X86_AT(c, 0xcc4c5u);
    c.r[0] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0cc4c8  lea edx, [eax*8]
    X86_AT(c, 0xcc4c8u);
    c.r[2] = (uint32_t)(c.r[0] * 8);
    // 0cc4cf  lea edx, [eax + edx*8]
    X86_AT(c, 0xcc4cfu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 8);
    // 0cc4d2  add edx, 0xa4af1
    X86_AT(c, 0xcc4d2u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, 0xA4AF1u, 0, 4); }
    // 0cc4d8  jmp 0xcc563
    X86_AT(c, 0xcc4d8u);
    goto L_cc563;
L_cc4dd:
    X86_TICK(c, 11);
    // 0cc4dd  push 0x8414
    X86_AT(c, 0xcc4ddu);
    { uint32_t v = 0x8414u; push32(c, v); }
    // 0cc4e2  push 7
    X86_AT(c, 0xcc4e2u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cc4e4  call 0xba428
    X86_AT(c, 0xcc4e4u);
    push32(c, 0xcc4e9u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xcc4e9u);
    X86_TICK(c, 9);
    // 0cc4e9  push 7
    X86_AT(c, 0xcc4e9u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cc4eb  call 0xbbb5c
    X86_AT(c, 0xcc4ebu);
    push32(c, 0xcc4f0u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xcc4f0u);
    X86_TICK(c, 35);
    // 0cc4f0  push 0x63
    X86_AT(c, 0xcc4f0u);
    { uint32_t v = 0x63u; push32(c, v); }
    // 0cc4f2  mov eax, dword ptr [ebp + 0xc]
    X86_AT(c, 0xcc4f2u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0cc4f5  lea eax, [eax + eax*2]
    X86_AT(c, 0xcc4f5u);
    c.r[0] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0cc4f8  lea edx, [eax*8]
    X86_AT(c, 0xcc4f8u);
    c.r[2] = (uint32_t)(c.r[0] * 8);
    // 0cc4ff  lea edx, [eax + edx*8]
    X86_AT(c, 0xcc4ffu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 8);
    // 0cc502  add edx, 0xa4af5
    X86_AT(c, 0xcc502u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, 0xA4AF5u, 0, 4); }
    // 0cc508  push edx
    X86_AT(c, 0xcc508u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0cc509  mov eax, dword ptr [ebp + 8]
    X86_AT(c, 0xcc509u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0cc50c  lea eax, [eax + eax*2]
    X86_AT(c, 0xcc50cu);
    c.r[0] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0cc50f  lea edx, [eax*8]
    X86_AT(c, 0xcc50fu);
    c.r[2] = (uint32_t)(c.r[0] * 8);
    // 0cc516  lea edx, [eax + edx*8]
    X86_AT(c, 0xcc516u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 8);
    // 0cc519  add edx, 0xa4af5
    X86_AT(c, 0xcc519u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, 0xA4AF5u, 0, 4); }
    // 0cc51f  jmp 0xcc563
    X86_AT(c, 0xcc51fu);
    goto L_cc563;
L_cc521:
    X86_TICK(c, 11);
    // 0cc521  push 0x842c
    X86_AT(c, 0xcc521u);
    { uint32_t v = 0x842Cu; push32(c, v); }
    // 0cc526  push 7
    X86_AT(c, 0xcc526u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cc528  call 0xba428
    X86_AT(c, 0xcc528u);
    push32(c, 0xcc52du); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xcc52du);
    X86_TICK(c, 9);
    // 0cc52d  push 7
    X86_AT(c, 0xcc52du);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cc52f  call 0xbbb5c
    X86_AT(c, 0xcc52fu);
    push32(c, 0xcc534u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xcc534u);
    X86_TICK(c, 28);
    // 0cc534  push 0x63
    X86_AT(c, 0xcc534u);
    { uint32_t v = 0x63u; push32(c, v); }
    // 0cc536  mov eax, dword ptr [ebp + 0xc]
    X86_AT(c, 0xcc536u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0cc539  lea eax, [eax + eax*2]
    X86_AT(c, 0xcc539u);
    c.r[0] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0cc53c  lea edx, [eax*8]
    X86_AT(c, 0xcc53cu);
    c.r[2] = (uint32_t)(c.r[0] * 8);
    // 0cc543  lea edx, [eax + edx*8]
    X86_AT(c, 0xcc543u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 8);
    // 0cc546  add edx, 0xa4ab5
    X86_AT(c, 0xcc546u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, 0xA4AB5u, 0, 4); }
    // 0cc54c  push edx
    X86_AT(c, 0xcc54cu);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0cc54d  mov eax, dword ptr [ebp + 8]
    X86_AT(c, 0xcc54du);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0cc550  lea eax, [eax + eax*2]
    X86_AT(c, 0xcc550u);
    c.r[0] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0cc553  lea edx, [eax*8]
    X86_AT(c, 0xcc553u);
    c.r[2] = (uint32_t)(c.r[0] * 8);
    // 0cc55a  lea edx, [eax + edx*8]
    X86_AT(c, 0xcc55au);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 8);
    // 0cc55d  add edx, 0xa4ab5
    X86_AT(c, 0xcc55du);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, 0xA4AB5u, 0, 4); }
L_cc563:
    X86_TICK(c, 9);
    // 0cc563  push edx
    X86_AT(c, 0xcc563u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0cc564  jmp 0xcc82b
    X86_AT(c, 0xcc564u);
    goto L_cc82b;
L_cc569:
    X86_TICK(c, 11);
    // 0cc569  push 0x8444
    X86_AT(c, 0xcc569u);
    { uint32_t v = 0x8444u; push32(c, v); }
    // 0cc56e  push 7
    X86_AT(c, 0xcc56eu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cc570  call 0xba428
    X86_AT(c, 0xcc570u);
    push32(c, 0xcc575u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xcc575u);
    X86_TICK(c, 9);
    // 0cc575  push 7
    X86_AT(c, 0xcc575u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cc577  call 0xb6404
    X86_AT(c, 0xcc577u);
    push32(c, 0xcc57cu); x86_call_known(c, 0xb6404u, f_000b6404); X86_RET(c, 0xcc57cu);
    X86_TICK(c, 12);
    // 0cc57c  xchg edi, eax
    X86_AT(c, 0xcc57cu);
    { uint32_t t = c.r[7]; c.r[7] = c.r[0]; c.r[0] = t; }
    // 0cc57d  add esp, 0xc
    X86_AT(c, 0xcc57du);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0cc580  and edi, edi
    X86_AT(c, 0xcc580u);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & c.r[7], 4); }
    // 0cc582  jg 0xcc58e
    X86_AT(c, 0xcc582u);
    if (x86_cc(c, 15)) { goto L_cc58e; }
    X86_TICK(c, 9);
    // 0cc584  push 0x846c
    X86_AT(c, 0xcc584u);
    { uint32_t v = 0x846Cu; push32(c, v); }
    // 0cc589  jmp 0xcc7d2
    X86_AT(c, 0xcc589u);
    goto L_cc7d2;
L_cc58e:
    X86_TICK(c, 9);
    // 0cc58e  push 7
    X86_AT(c, 0xcc58eu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cc590  call 0xbbb5c
    X86_AT(c, 0xcc590u);
    push32(c, 0xcc595u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xcc595u);
    X86_TICK(c, 29);
    // 0cc595  lea edi, [edi + edi*4]
    X86_AT(c, 0xcc595u);
    c.r[7] = (uint32_t)(c.r[7] + c.r[7] * 4);
    // 0cc598  lea edi, [edi + edi*4]
    X86_AT(c, 0xcc598u);
    c.r[7] = (uint32_t)(c.r[7] + c.r[7] * 4);
    // 0cc59b  lea edi, [edi*4]
    X86_AT(c, 0xcc59bu);
    c.r[7] = (uint32_t)(c.r[7] * 4);
    // 0cc5a2  mov eax, dword ptr [ebp + 8]
    X86_AT(c, 0xcc5a2u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0cc5a5  lea eax, [eax + eax*2]
    X86_AT(c, 0xcc5a5u);
    c.r[0] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0cc5a8  lea edx, [eax*8]
    X86_AT(c, 0xcc5a8u);
    c.r[2] = (uint32_t)(c.r[0] * 8);
    // 0cc5af  lea edx, [eax + edx*8]
    X86_AT(c, 0xcc5afu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 8);
    // 0cc5b2  add esp, 4
    X86_AT(c, 0xcc5b2u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0cc5b5  cmp edi, dword ptr [edx + 0xa4ae5]
    X86_AT(c, 0xcc5b5u);
    (void)x86_sub(c, c.r[7], rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4AE5u))), 0, 4);
    // 0cc5bb  jle 0xcc5cb
    X86_AT(c, 0xcc5bbu);
    if (x86_cc(c, 14)) { goto L_cc5cb; }
    X86_TICK(c, 9);
    // 0cc5bd  push 3
    X86_AT(c, 0xcc5bdu);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0cc5bf  call 0xb607c
    X86_AT(c, 0xcc5bfu);
    push32(c, 0xcc5c4u); x86_call_known(c, 0xb607cu, f_000b607c); X86_RET(c, 0xcc5c4u);
    X86_TICK(c, 9);
    // 0cc5c4  push 0x8484
    X86_AT(c, 0xcc5c4u);
    { uint32_t v = 0x8484u; push32(c, v); }
    // 0cc5c9  jmp 0xcc5f6
    X86_AT(c, 0xcc5c9u);
    goto L_cc5f6;
L_cc5cb:
    X86_TICK(c, 25);
    // 0cc5cb  mov eax, dword ptr [ebp + 0xc]
    X86_AT(c, 0xcc5cbu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0cc5ce  lea eax, [eax + eax*2]
    X86_AT(c, 0xcc5ceu);
    c.r[0] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0cc5d1  lea edx, [eax*8]
    X86_AT(c, 0xcc5d1u);
    c.r[2] = (uint32_t)(c.r[0] * 8);
    // 0cc5d8  lea edx, [eax + edx*8]
    X86_AT(c, 0xcc5d8u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 8);
    // 0cc5db  mov eax, edi
    X86_AT(c, 0xcc5dbu);
    c.r[0] = c.r[7];
    // 0cc5dd  add eax, dword ptr [edx + 0xa4ae5]
    X86_AT(c, 0xcc5ddu);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4AE5u))), 0, 4); }
    // 0cc5e3  cmp eax, 0xf41dc
    X86_AT(c, 0xcc5e3u);
    (void)x86_sub(c, c.r[0], 0xF41DCu, 0, 4);
    // 0cc5e8  jle 0xcc60c
    X86_AT(c, 0xcc5e8u);
    if (x86_cc(c, 14)) { goto L_cc60c; }
    X86_TICK(c, 9);
    // 0cc5ea  push 3
    X86_AT(c, 0xcc5eau);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0cc5ec  call 0xb607c
    X86_AT(c, 0xcc5ecu);
    push32(c, 0xcc5f1u); x86_call_known(c, 0xb607cu, f_000b607c); X86_RET(c, 0xcc5f1u);
    X86_TICK(c, 2);
    // 0cc5f1  push 0x84b4
    X86_AT(c, 0xcc5f1u);
    { uint32_t v = 0x84B4u; push32(c, v); }
L_cc5f6:
    X86_TICK(c, 9);
    // 0cc5f6  push 7
    X86_AT(c, 0xcc5f6u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cc5f8  call 0xba428
    X86_AT(c, 0xcc5f8u);
    push32(c, 0xcc5fdu); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xcc5fdu);
    X86_TICK(c, 9);
    // 0cc5fd  push 7
    X86_AT(c, 0xcc5fdu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cc5ff  call 0xbbb5c
    X86_AT(c, 0xcc5ffu);
    push32(c, 0xcc604u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xcc604u);
    X86_TICK(c, 9);
    // 0cc604  add esp, 0x10
    X86_AT(c, 0xcc604u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0cc607  jmp 0xcc833
    X86_AT(c, 0xcc607u);
    goto L_cc833;
L_cc60c:
    X86_TICK(c, 46);
    // 0cc60c  mov eax, dword ptr [ebp + 8]
    X86_AT(c, 0xcc60cu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0cc60f  lea eax, [eax + eax*2]
    X86_AT(c, 0xcc60fu);
    c.r[0] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0cc612  lea edx, [eax*8]
    X86_AT(c, 0xcc612u);
    c.r[2] = (uint32_t)(c.r[0] * 8);
    // 0cc619  lea edx, [eax + edx*8]
    X86_AT(c, 0xcc619u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 8);
    // 0cc61c  sub dword ptr [edx + 0xa4ae5], edi
    X86_AT(c, 0xcc61cu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[2] + 0xA4AE5u)); uint32_t v = rd32(ea); wr32(ea, x86_sub(c, v, c.r[7], 0, 4)); }
    // 0cc622  mov eax, dword ptr [ebp + 0xc]
    X86_AT(c, 0xcc622u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0cc625  lea eax, [eax + eax*2]
    X86_AT(c, 0xcc625u);
    c.r[0] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0cc628  lea edx, [eax*8]
    X86_AT(c, 0xcc628u);
    c.r[2] = (uint32_t)(c.r[0] * 8);
    // 0cc62f  lea edx, [eax + edx*8]
    X86_AT(c, 0xcc62fu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 8);
    // 0cc632  add dword ptr [edx + 0xa4ae5], edi
    X86_AT(c, 0xcc632u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[2] + 0xA4AE5u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[7], 0, 4)); }
    // 0cc638  push dword ptr [ebp + 8]
    X86_AT(c, 0xcc638u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, v); }
    // 0cc63b  call 0xbe720
    X86_AT(c, 0xcc63bu);
    push32(c, 0xcc640u); x86_call_known(c, 0xbe720u, f_000be720); X86_RET(c, 0xcc640u);
    X86_TICK(c, 12);
    // 0cc640  push dword ptr [ebp + 0xc]
    X86_AT(c, 0xcc640u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))); push32(c, v); }
    // 0cc643  call 0xbe720
    X86_AT(c, 0xcc643u);
    push32(c, 0xcc648u); x86_call_known(c, 0xbe720u, f_000be720); X86_RET(c, 0xcc648u);
    X86_TICK(c, 9);
    // 0cc648  add esp, 8
    X86_AT(c, 0xcc648u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0cc64b  jmp 0xcc833
    X86_AT(c, 0xcc64bu);
    goto L_cc833;
L_cc650:
    X86_TICK(c, 12);
    // 0cc650  cmp dword ptr [0xa4a8e], 0
    X86_AT(c, 0xcc650u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xA4A8Eu))), 0x0u, 0, 4);
    // 0cc657  jne 0xcc660
    X86_AT(c, 0xcc657u);
    if (x86_cc(c, 5)) { goto L_cc660; }
    X86_TICK(c, 9);
    // 0cc659  mov esi, 0xf
    X86_AT(c, 0xcc659u);
    c.r[6] = 0xFu;
    // 0cc65e  jmp 0xcc675
    X86_AT(c, 0xcc65eu);
    goto L_cc675;
L_cc660:
    X86_TICK(c, 12);
    // 0cc660  cmp dword ptr [0xa4a96], 0
    X86_AT(c, 0xcc660u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xA4A96u))), 0x0u, 0, 4);
    // 0cc667  jne 0xcc670
    X86_AT(c, 0xcc667u);
    if (x86_cc(c, 5)) { goto L_cc670; }
    X86_TICK(c, 9);
    // 0cc669  mov esi, 0xe
    X86_AT(c, 0xcc669u);
    c.r[6] = 0xEu;
    // 0cc66e  jmp 0xcc675
    X86_AT(c, 0xcc66eu);
    goto L_cc675;
L_cc670:
    X86_TICK(c, 2);
    // 0cc670  mov esi, 7
    X86_AT(c, 0xcc670u);
    c.r[6] = 0x7u;
L_cc675:
    X86_TICK(c, 11);
    // 0cc675  push 0x84dc
    X86_AT(c, 0xcc675u);
    { uint32_t v = 0x84DCu; push32(c, v); }
    // 0cc67a  push 7
    X86_AT(c, 0xcc67au);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cc67c  call 0xba428
    X86_AT(c, 0xcc67cu);
    push32(c, 0xcc681u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xcc681u);
    X86_TICK(c, 2);
    // 0cc681  add esp, 8
    X86_AT(c, 0xcc681u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
L_cc684:
    X86_TICK(c, 9);
    // 0cc684  push 7
    X86_AT(c, 0xcc684u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cc686  call 0xb9514
    X86_AT(c, 0xcc686u);
    push32(c, 0xcc68bu); x86_call_known(c, 0xb9514u, f_000b9514); X86_RET(c, 0xcc68bu);
    X86_TICK(c, 12);
    // 0cc68b  xchg ebx, eax
    X86_AT(c, 0xcc68bu);
    { uint32_t t = c.r[3]; c.r[3] = c.r[0]; c.r[0] = t; }
    // 0cc68c  add esp, 4
    X86_AT(c, 0xcc68cu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0cc68f  cmp bl, 1
    X86_AT(c, 0xcc68fu);
    (void)x86_sub(c, g8(c, 3), 0x1u, 0, 1);
    // 0cc692  je 0xcc6b3
    X86_AT(c, 0xcc692u);
    if (x86_cc(c, 4)) { goto L_cc6b3; }
    X86_TICK(c, 7);
    // 0cc694  cmp bl, 0x41
    X86_AT(c, 0xcc694u);
    (void)x86_sub(c, g8(c, 3), 0x41u, 0, 1);
    // 0cc697  jbe 0xcc6a3
    X86_AT(c, 0xcc697u);
    if (x86_cc(c, 6)) { goto L_cc6a3; }
    X86_TICK(c, 12);
    // 0cc699  movzx ebx, bl
    X86_AT(c, 0xcc699u);
    c.r[3] = g8(c, 3);
    // 0cc69c  lea eax, [esi + 0x41]
    X86_AT(c, 0xcc69cu);
    c.r[0] = (uint32_t)(c.r[6] + 0x41u);
    // 0cc69f  cmp eax, ebx
    X86_AT(c, 0xcc69fu);
    (void)x86_sub(c, c.r[0], c.r[3], 0, 4);
    // 0cc6a1  jge 0xcc6b3
    X86_AT(c, 0xcc6a1u);
    if (x86_cc(c, 13)) { goto L_cc6b3; }
L_cc6a3:
    X86_TICK(c, 7);
    // 0cc6a3  and bl, bl
    X86_AT(c, 0xcc6a3u);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v & g8(c, 3), 1)); }
    // 0cc6a5  je 0xcc684
    X86_AT(c, 0xcc6a5u);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xcc684u); goto L_cc684; }
    X86_TICK(c, 9);
    // 0cc6a7  push 1
    X86_AT(c, 0xcc6a7u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0cc6a9  call 0xb607c
    X86_AT(c, 0xcc6a9u);
    push32(c, 0xcc6aeu); x86_call_known(c, 0xb607cu, f_000b607c); X86_RET(c, 0xcc6aeu);
    X86_TICK(c, 9);
    // 0cc6ae  add esp, 4
    X86_AT(c, 0xcc6aeu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0cc6b1  jmp 0xcc684
    X86_AT(c, 0xcc6b1u);
    X86_POLL(c, 0xcc684u); goto L_cc684;
L_cc6b3:
    X86_TICK(c, 7);
    // 0cc6b3  cmp bl, 1
    X86_AT(c, 0xcc6b3u);
    (void)x86_sub(c, g8(c, 3), 0x1u, 0, 1);
    // 0cc6b6  jne 0xcc6c2
    X86_AT(c, 0xcc6b6u);
    if (x86_cc(c, 5)) { goto L_cc6c2; }
    X86_TICK(c, 9);
    // 0cc6b8  push 0x8514
    X86_AT(c, 0xcc6b8u);
    { uint32_t v = 0x8514u; push32(c, v); }
    // 0cc6bd  jmp 0xcc7d2
    X86_AT(c, 0xcc6bdu);
    goto L_cc7d2;
L_cc6c2:
    X86_TICK(c, 21);
    // 0cc6c2  mov byte ptr [ebp - 2], 0
    X86_AT(c, 0xcc6c2u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFEu)), 0x0u);
    // 0cc6c6  lea eax, [ebp - 2]
    X86_AT(c, 0xcc6c6u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFFEu);
    // 0cc6c9  push eax
    X86_AT(c, 0xcc6c9u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0cc6ca  push ebx
    X86_AT(c, 0xcc6cau);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0cc6cb  lea eax, [esi + 1]
    X86_AT(c, 0xcc6cbu);
    c.r[0] = (uint32_t)(c.r[6] + 0x1u);
    // 0cc6ce  push eax
    X86_AT(c, 0xcc6ceu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0cc6cf  push 0xa6bac
    X86_AT(c, 0xcc6cfu);
    { uint32_t v = 0xA6BACu; push32(c, v); }
    // 0cc6d4  call 0xba1b4
    X86_AT(c, 0xcc6d4u);
    push32(c, 0xcc6d9u); x86_call_known(c, 0xba1b4u, f_000ba1b4); X86_RET(c, 0xcc6d9u);
    X86_TICK(c, 13);
    // 0cc6d9  mov dword ptr [ebp - 8], eax
    X86_AT(c, 0xcc6d9u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), c.r[0]);
    // 0cc6dc  sub bl, 0x41
    X86_AT(c, 0xcc6dcu);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_sub(c, v, 0x41u, 0, 1)); }
    // 0cc6df  add esp, 0x10
    X86_AT(c, 0xcc6dfu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0cc6e2  and eax, eax
    X86_AT(c, 0xcc6e2u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0cc6e4  jne 0xcc6f0
    X86_AT(c, 0xcc6e4u);
    if (x86_cc(c, 5)) { goto L_cc6f0; }
    X86_TICK(c, 9);
    // 0cc6e6  push 0x852c
    X86_AT(c, 0xcc6e6u);
    { uint32_t v = 0x852Cu; push32(c, v); }
    // 0cc6eb  jmp 0xcc7d2
    X86_AT(c, 0xcc6ebu);
    goto L_cc7d2;
L_cc6f0:
    X86_TICK(c, 14);
    // 0cc6f0  push dword ptr [ebp - 8]
    X86_AT(c, 0xcc6f0u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u))); push32(c, v); }
    // 0cc6f3  push 7
    X86_AT(c, 0xcc6f3u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cc6f5  call 0xbbba4
    X86_AT(c, 0xcc6f5u);
    push32(c, 0xcc6fau); x86_call_known(c, 0xbbba4u, f_000bbba4); X86_RET(c, 0xcc6fau);
    X86_TICK(c, 9);
    // 0cc6fa  push 7
    X86_AT(c, 0xcc6fau);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cc6fc  call 0xbbb5c
    X86_AT(c, 0xcc6fcu);
    push32(c, 0xcc701u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xcc701u);
    X86_TICK(c, 38);
    // 0cc701  push 0x63
    X86_AT(c, 0xcc701u);
    { uint32_t v = 0x63u; push32(c, v); }
    // 0cc703  mov eax, dword ptr [ebp + 0xc]
    X86_AT(c, 0xcc703u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0cc706  lea eax, [eax + eax*2]
    X86_AT(c, 0xcc706u);
    c.r[0] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0cc709  lea edx, [eax*8]
    X86_AT(c, 0xcc709u);
    c.r[2] = (uint32_t)(c.r[0] * 8);
    // 0cc710  lea edx, [eax + edx*8]
    X86_AT(c, 0xcc710u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 8);
    // 0cc713  movzx ebx, bl
    X86_AT(c, 0xcc713u);
    c.r[3] = g8(c, 3);
    // 0cc716  lea eax, [edx + ebx*4 + 0xa4b1b]
    X86_AT(c, 0xcc716u);
    c.r[0] = (uint32_t)(c.r[2] + c.r[3] * 4 + 0xA4B1Bu);
    // 0cc71d  push eax
    X86_AT(c, 0xcc71du);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0cc71e  mov eax, dword ptr [ebp + 8]
    X86_AT(c, 0xcc71eu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0cc721  lea eax, [eax + eax*2]
    X86_AT(c, 0xcc721u);
    c.r[0] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0cc724  lea edx, [eax*8]
    X86_AT(c, 0xcc724u);
    c.r[2] = (uint32_t)(c.r[0] * 8);
    // 0cc72b  lea edx, [eax + edx*8]
    X86_AT(c, 0xcc72bu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 8);
    // 0cc72e  lea eax, [edx + ebx*4 + 0xa4b1b]
    X86_AT(c, 0xcc72eu);
    c.r[0] = (uint32_t)(c.r[2] + c.r[3] * 4 + 0xA4B1Bu);
    // 0cc735  jmp 0xcc82a
    X86_AT(c, 0xcc735u);
    goto L_cc82a;
L_cc73a:
    X86_TICK(c, 12);
    // 0cc73a  cmp dword ptr [0xa4a92], 0
    X86_AT(c, 0xcc73au);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xA4A92u))), 0x0u, 0, 4);
    // 0cc741  jne 0xcc74a
    X86_AT(c, 0xcc741u);
    if (x86_cc(c, 5)) { goto L_cc74a; }
    X86_TICK(c, 9);
    // 0cc743  mov esi, 7
    X86_AT(c, 0xcc743u);
    c.r[6] = 0x7u;
    // 0cc748  jmp 0xcc75f
    X86_AT(c, 0xcc748u);
    goto L_cc75f;
L_cc74a:
    X86_TICK(c, 12);
    // 0cc74a  cmp dword ptr [0xa4a96], 0
    X86_AT(c, 0xcc74au);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xA4A96u))), 0x0u, 0, 4);
    // 0cc751  jne 0xcc75a
    X86_AT(c, 0xcc751u);
    if (x86_cc(c, 5)) { goto L_cc75a; }
    X86_TICK(c, 9);
    // 0cc753  mov esi, 6
    X86_AT(c, 0xcc753u);
    c.r[6] = 0x6u;
    // 0cc758  jmp 0xcc75f
    X86_AT(c, 0xcc758u);
    goto L_cc75f;
L_cc75a:
    X86_TICK(c, 2);
    // 0cc75a  mov esi, 4
    X86_AT(c, 0xcc75au);
    c.r[6] = 0x4u;
L_cc75f:
    X86_TICK(c, 11);
    // 0cc75f  push 0x8544
    X86_AT(c, 0xcc75fu);
    { uint32_t v = 0x8544u; push32(c, v); }
    // 0cc764  push 7
    X86_AT(c, 0xcc764u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cc766  call 0xba428
    X86_AT(c, 0xcc766u);
    push32(c, 0xcc76bu); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xcc76bu);
    X86_TICK(c, 2);
    // 0cc76b  add esp, 8
    X86_AT(c, 0xcc76bu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
L_cc76e:
    X86_TICK(c, 9);
    // 0cc76e  push 7
    X86_AT(c, 0xcc76eu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cc770  call 0xb9514
    X86_AT(c, 0xcc770u);
    push32(c, 0xcc775u); x86_call_known(c, 0xb9514u, f_000b9514); X86_RET(c, 0xcc775u);
    X86_TICK(c, 12);
    // 0cc775  xchg ebx, eax
    X86_AT(c, 0xcc775u);
    { uint32_t t = c.r[3]; c.r[3] = c.r[0]; c.r[0] = t; }
    // 0cc776  add esp, 4
    X86_AT(c, 0xcc776u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0cc779  cmp bl, 1
    X86_AT(c, 0xcc779u);
    (void)x86_sub(c, g8(c, 3), 0x1u, 0, 1);
    // 0cc77c  je 0xcc79d
    X86_AT(c, 0xcc77cu);
    if (x86_cc(c, 4)) { goto L_cc79d; }
    X86_TICK(c, 7);
    // 0cc77e  cmp bl, 0x42
    X86_AT(c, 0xcc77eu);
    (void)x86_sub(c, g8(c, 3), 0x42u, 0, 1);
    // 0cc781  jb 0xcc78d
    X86_AT(c, 0xcc781u);
    if (x86_cc(c, 2)) { goto L_cc78d; }
    X86_TICK(c, 12);
    // 0cc783  movzx ebx, bl
    X86_AT(c, 0xcc783u);
    c.r[3] = g8(c, 3);
    // 0cc786  lea eax, [esi + 0x41]
    X86_AT(c, 0xcc786u);
    c.r[0] = (uint32_t)(c.r[6] + 0x41u);
    // 0cc789  cmp eax, ebx
    X86_AT(c, 0xcc789u);
    (void)x86_sub(c, c.r[0], c.r[3], 0, 4);
    // 0cc78b  jge 0xcc79d
    X86_AT(c, 0xcc78bu);
    if (x86_cc(c, 13)) { goto L_cc79d; }
L_cc78d:
    X86_TICK(c, 7);
    // 0cc78d  and bl, bl
    X86_AT(c, 0xcc78du);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v & g8(c, 3), 1)); }
    // 0cc78f  je 0xcc76e
    X86_AT(c, 0xcc78fu);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xcc76eu); goto L_cc76e; }
    X86_TICK(c, 9);
    // 0cc791  push 1
    X86_AT(c, 0xcc791u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0cc793  call 0xb607c
    X86_AT(c, 0xcc793u);
    push32(c, 0xcc798u); x86_call_known(c, 0xb607cu, f_000b607c); X86_RET(c, 0xcc798u);
    X86_TICK(c, 9);
    // 0cc798  add esp, 4
    X86_AT(c, 0xcc798u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0cc79b  jmp 0xcc76e
    X86_AT(c, 0xcc79bu);
    X86_POLL(c, 0xcc76eu); goto L_cc76e;
L_cc79d:
    X86_TICK(c, 7);
    // 0cc79d  cmp bl, 1
    X86_AT(c, 0xcc79du);
    (void)x86_sub(c, g8(c, 3), 0x1u, 0, 1);
    // 0cc7a0  jne 0xcc7a9
    X86_AT(c, 0xcc7a0u);
    if (x86_cc(c, 5)) { goto L_cc7a9; }
    X86_TICK(c, 9);
    // 0cc7a2  push 0x8580
    X86_AT(c, 0xcc7a2u);
    { uint32_t v = 0x8580u; push32(c, v); }
    // 0cc7a7  jmp 0xcc7d2
    X86_AT(c, 0xcc7a7u);
    goto L_cc7d2;
L_cc7a9:
    X86_TICK(c, 21);
    // 0cc7a9  mov byte ptr [ebp - 2], 0
    X86_AT(c, 0xcc7a9u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFEu)), 0x0u);
    // 0cc7ad  lea eax, [ebp - 2]
    X86_AT(c, 0xcc7adu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFFEu);
    // 0cc7b0  push eax
    X86_AT(c, 0xcc7b0u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0cc7b1  push ebx
    X86_AT(c, 0xcc7b1u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0cc7b2  lea eax, [esi + 1]
    X86_AT(c, 0xcc7b2u);
    c.r[0] = (uint32_t)(c.r[6] + 0x1u);
    // 0cc7b5  push eax
    X86_AT(c, 0xcc7b5u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0cc7b6  push 0xa74f4
    X86_AT(c, 0xcc7b6u);
    { uint32_t v = 0xA74F4u; push32(c, v); }
    // 0cc7bb  call 0xba1b4
    X86_AT(c, 0xcc7bbu);
    push32(c, 0xcc7c0u); x86_call_known(c, 0xba1b4u, f_000ba1b4); X86_RET(c, 0xcc7c0u);
    X86_TICK(c, 13);
    // 0cc7c0  mov dword ptr [ebp - 8], eax
    X86_AT(c, 0xcc7c0u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), c.r[0]);
    // 0cc7c3  sub bl, 0x41
    X86_AT(c, 0xcc7c3u);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_sub(c, v, 0x41u, 0, 1)); }
    // 0cc7c6  add esp, 0x10
    X86_AT(c, 0xcc7c6u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0cc7c9  and eax, eax
    X86_AT(c, 0xcc7c9u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0cc7cb  jne 0xcc7e5
    X86_AT(c, 0xcc7cbu);
    if (x86_cc(c, 5)) { goto L_cc7e5; }
    X86_TICK(c, 2);
    // 0cc7cd  push 0x8598
    X86_AT(c, 0xcc7cdu);
    { uint32_t v = 0x8598u; push32(c, v); }
L_cc7d2:
    X86_TICK(c, 9);
    // 0cc7d2  push 7
    X86_AT(c, 0xcc7d2u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cc7d4  call 0xba428
    X86_AT(c, 0xcc7d4u);
    push32(c, 0xcc7d9u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xcc7d9u);
    X86_TICK(c, 9);
    // 0cc7d9  push 7
    X86_AT(c, 0xcc7d9u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cc7db  call 0xbbb5c
    X86_AT(c, 0xcc7dbu);
    push32(c, 0xcc7e0u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xcc7e0u);
    X86_TICK(c, 9);
    // 0cc7e0  add esp, 0xc
    X86_AT(c, 0xcc7e0u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0cc7e3  jmp 0xcc833
    X86_AT(c, 0xcc7e3u);
    goto L_cc833;
L_cc7e5:
    X86_TICK(c, 14);
    // 0cc7e5  push dword ptr [ebp - 8]
    X86_AT(c, 0xcc7e5u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u))); push32(c, v); }
    // 0cc7e8  push 7
    X86_AT(c, 0xcc7e8u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cc7ea  call 0xbbba4
    X86_AT(c, 0xcc7eau);
    push32(c, 0xcc7efu); x86_call_known(c, 0xbbba4u, f_000bbba4); X86_RET(c, 0xcc7efu);
    X86_TICK(c, 9);
    // 0cc7ef  push 7
    X86_AT(c, 0xcc7efu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cc7f1  call 0xbbb5c
    X86_AT(c, 0xcc7f1u);
    push32(c, 0xcc7f6u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xcc7f6u);
    X86_TICK(c, 31);
    // 0cc7f6  push 0x63
    X86_AT(c, 0xcc7f6u);
    { uint32_t v = 0x63u; push32(c, v); }
    // 0cc7f8  mov eax, dword ptr [ebp + 0xc]
    X86_AT(c, 0xcc7f8u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0cc7fb  lea eax, [eax + eax*2]
    X86_AT(c, 0xcc7fbu);
    c.r[0] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0cc7fe  lea edx, [eax*8]
    X86_AT(c, 0xcc7feu);
    c.r[2] = (uint32_t)(c.r[0] * 8);
    // 0cc805  lea edx, [eax + edx*8]
    X86_AT(c, 0xcc805u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 8);
    // 0cc808  movzx ebx, bl
    X86_AT(c, 0xcc808u);
    c.r[3] = g8(c, 3);
    // 0cc80b  lea eax, [edx + ebx*4 + 0xa4afa]
    X86_AT(c, 0xcc80bu);
    c.r[0] = (uint32_t)(c.r[2] + c.r[3] * 4 + 0xA4AFAu);
    // 0cc812  push eax
    X86_AT(c, 0xcc812u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0cc813  mov eax, dword ptr [ebp + 8]
    X86_AT(c, 0xcc813u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0cc816  lea eax, [eax + eax*2]
    X86_AT(c, 0xcc816u);
    c.r[0] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0cc819  lea edx, [eax*8]
    X86_AT(c, 0xcc819u);
    c.r[2] = (uint32_t)(c.r[0] * 8);
    // 0cc820  lea edx, [eax + edx*8]
    X86_AT(c, 0xcc820u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 8);
    // 0cc823  lea eax, [edx + ebx*4 + 0xa4afa]
    X86_AT(c, 0xcc823u);
    c.r[0] = (uint32_t)(c.r[2] + c.r[3] * 4 + 0xA4AFAu);
L_cc82a:
    X86_TICK(c, 2);
    // 0cc82a  push eax
    X86_AT(c, 0xcc82au);
    { uint32_t v = c.r[0]; push32(c, v); }
L_cc82b:
    X86_TICK(c, 7);
    // 0cc82b  call 0xcc838
    X86_AT(c, 0xcc82bu);
    push32(c, 0xcc830u); x86_call_known(c, 0xcc838u, f_000cc838); X86_RET(c, 0xcc830u);
    X86_TICK(c, 2);
    // 0cc830  add esp, 0x18
    X86_AT(c, 0xcc830u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x18u, 0, 4); }
L_cc833:
    X86_TICK(c, 28);
    // 0cc833  pop edi
    X86_AT(c, 0xcc833u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0cc834  pop esi
    X86_AT(c, 0xcc834u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0cc835  pop ebx
    X86_AT(c, 0xcc835u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0cc836  leave 
    X86_AT(c, 0xcc836u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0cc837  ret 
    X86_AT(c, 0xcc837u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xcc140u, "ran off the end of a function");
}
void f_000cc563(X86Cpu& c) {
    X86_TICK(c, 9);
    // 0cc563  push edx
    X86_AT(c, 0xcc563u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0cc564  jmp 0xcc82b
    X86_AT(c, 0xcc564u);
    goto L_cc82b;
L_cc82b:
    X86_TICK(c, 7);
    // 0cc82b  call 0xcc838
    X86_AT(c, 0xcc82bu);
    push32(c, 0xcc830u); x86_call_known(c, 0xcc838u, f_000cc838); X86_RET(c, 0xcc830u);
    X86_TICK(c, 30);
    // 0cc830  add esp, 0x18
    X86_AT(c, 0xcc830u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x18u, 0, 4); }
    // 0cc833  pop edi
    X86_AT(c, 0xcc833u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0cc834  pop esi
    X86_AT(c, 0xcc834u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0cc835  pop ebx
    X86_AT(c, 0xcc835u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0cc836  leave 
    X86_AT(c, 0xcc836u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0cc837  ret 
    X86_AT(c, 0xcc837u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xcc563u, "ran off the end of a function");
}
void f_000cc5f6(X86Cpu& c) {
    X86_TICK(c, 9);
    // 0cc5f6  push 7
    X86_AT(c, 0xcc5f6u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cc5f8  call 0xba428
    X86_AT(c, 0xcc5f8u);
    push32(c, 0xcc5fdu); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xcc5fdu);
    X86_TICK(c, 9);
    // 0cc5fd  push 7
    X86_AT(c, 0xcc5fdu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cc5ff  call 0xbbb5c
    X86_AT(c, 0xcc5ffu);
    push32(c, 0xcc604u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xcc604u);
    X86_TICK(c, 9);
    // 0cc604  add esp, 0x10
    X86_AT(c, 0xcc604u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0cc607  jmp 0xcc833
    X86_AT(c, 0xcc607u);
    goto L_cc833;
L_cc833:
    X86_TICK(c, 28);
    // 0cc833  pop edi
    X86_AT(c, 0xcc833u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0cc834  pop esi
    X86_AT(c, 0xcc834u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0cc835  pop ebx
    X86_AT(c, 0xcc835u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0cc836  leave 
    X86_AT(c, 0xcc836u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0cc837  ret 
    X86_AT(c, 0xcc837u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xcc5f6u, "ran off the end of a function");
}
void f_000cc7d2(X86Cpu& c) {
    X86_TICK(c, 9);
    // 0cc7d2  push 7
    X86_AT(c, 0xcc7d2u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cc7d4  call 0xba428
    X86_AT(c, 0xcc7d4u);
    push32(c, 0xcc7d9u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xcc7d9u);
    X86_TICK(c, 9);
    // 0cc7d9  push 7
    X86_AT(c, 0xcc7d9u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cc7db  call 0xbbb5c
    X86_AT(c, 0xcc7dbu);
    push32(c, 0xcc7e0u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xcc7e0u);
    X86_TICK(c, 9);
    // 0cc7e0  add esp, 0xc
    X86_AT(c, 0xcc7e0u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0cc7e3  jmp 0xcc833
    X86_AT(c, 0xcc7e3u);
    goto L_cc833;
L_cc833:
    X86_TICK(c, 28);
    // 0cc833  pop edi
    X86_AT(c, 0xcc833u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0cc834  pop esi
    X86_AT(c, 0xcc834u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0cc835  pop ebx
    X86_AT(c, 0xcc835u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0cc836  leave 
    X86_AT(c, 0xcc836u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0cc837  ret 
    X86_AT(c, 0xcc837u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xcc7d2u, "ran off the end of a function");
}
void f_000cc833(X86Cpu& c) {
    X86_TICK(c, 28);
    // 0cc833  pop edi
    X86_AT(c, 0xcc833u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0cc834  pop esi
    X86_AT(c, 0xcc834u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0cc835  pop ebx
    X86_AT(c, 0xcc835u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0cc836  leave 
    X86_AT(c, 0xcc836u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0cc837  ret 
    X86_AT(c, 0xcc837u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xcc833u, "ran off the end of a function");
}
void f_000cc838(X86Cpu& c) {
    X86_TICK(c, 27);
    // 0cc838  push ebp
    X86_AT(c, 0xcc838u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0cc839  mov ebp, esp
    X86_AT(c, 0xcc839u);
    c.r[5] = c.r[4];
    // 0cc83b  push ebx
    X86_AT(c, 0xcc83bu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0cc83c  push esi
    X86_AT(c, 0xcc83cu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0cc83d  push edi
    X86_AT(c, 0xcc83du);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0cc83e  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0xcc83eu);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0cc841  mov esi, dword ptr [ebp + 0xc]
    X86_AT(c, 0xcc841u);
    c.r[6] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0cc844  push 7
    X86_AT(c, 0xcc844u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cc846  call 0xbb6b0
    X86_AT(c, 0xcc846u);
    push32(c, 0xcc84bu); x86_call_known(c, 0xbb6b0u, f_000bb6b0); X86_RET(c, 0xcc84bu);
    X86_TICK(c, 11);
    // 0cc84b  push 0x85b0
    X86_AT(c, 0xcc84bu);
    { uint32_t v = 0x85B0u; push32(c, v); }
    // 0cc850  push 7
    X86_AT(c, 0xcc850u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cc852  call 0xba428
    X86_AT(c, 0xcc852u);
    push32(c, 0xcc857u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xcc857u);
    X86_TICK(c, 14);
    // 0cc857  add esp, 0xc
    X86_AT(c, 0xcc857u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0cc85a  cmp dword ptr [ebp + 0x10], 0x64
    X86_AT(c, 0xcc85au);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u))), 0x64u, 0, 4);
    // 0cc85e  jge 0xcc880
    X86_AT(c, 0xcc85eu);
    if (x86_cc(c, 13)) { goto L_cc880; }
    X86_TICK(c, 16);
    // 0cc860  push 2
    X86_AT(c, 0xcc860u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0cc862  push dword ptr [edi]
    X86_AT(c, 0xcc862u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[7]))); push32(c, v); }
    // 0cc864  push 7
    X86_AT(c, 0xcc864u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cc866  call 0xba404
    X86_AT(c, 0xcc866u);
    push32(c, 0xcc86bu); x86_call_known(c, 0xba404u, f_000ba404); X86_RET(c, 0xcc86bu);
    X86_TICK(c, 11);
    // 0cc86b  push 0x85dc
    X86_AT(c, 0xcc86bu);
    { uint32_t v = 0x85DCu; push32(c, v); }
    // 0cc870  push 7
    X86_AT(c, 0xcc870u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cc872  call 0xbbba4
    X86_AT(c, 0xcc872u);
    push32(c, 0xcc877u); x86_call_known(c, 0xbbba4u, f_000bbba4); X86_RET(c, 0xcc877u);
    X86_TICK(c, 9);
    // 0cc877  push 7
    X86_AT(c, 0xcc877u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cc879  call 0xb6308
    X86_AT(c, 0xcc879u);
    push32(c, 0xcc87eu); x86_call_known(c, 0xb6308u, f_000b6308); X86_RET(c, 0xcc87eu);
    X86_TICK(c, 7);
    // 0cc87e  jmp 0xcc89e
    X86_AT(c, 0xcc87eu);
    goto L_cc89e;
L_cc880:
    X86_TICK(c, 16);
    // 0cc880  push 4
    X86_AT(c, 0xcc880u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0cc882  push dword ptr [edi]
    X86_AT(c, 0xcc882u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[7]))); push32(c, v); }
    // 0cc884  push 7
    X86_AT(c, 0xcc884u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cc886  call 0xba404
    X86_AT(c, 0xcc886u);
    push32(c, 0xcc88bu); x86_call_known(c, 0xba404u, f_000ba404); X86_RET(c, 0xcc88bu);
    X86_TICK(c, 11);
    // 0cc88b  push 0x85e4
    X86_AT(c, 0xcc88bu);
    { uint32_t v = 0x85E4u; push32(c, v); }
    // 0cc890  push 7
    X86_AT(c, 0xcc890u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cc892  call 0xbbba4
    X86_AT(c, 0xcc892u);
    push32(c, 0xcc897u); x86_call_known(c, 0xbbba4u, f_000bbba4); X86_RET(c, 0xcc897u);
    X86_TICK(c, 9);
    // 0cc897  push 7
    X86_AT(c, 0xcc897u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cc899  call 0xb6404
    X86_AT(c, 0xcc899u);
    push32(c, 0xcc89eu); x86_call_known(c, 0xb6404u, f_000b6404); X86_RET(c, 0xcc89eu);
L_cc89e:
    X86_TICK(c, 14);
    // 0cc89e  xchg ebx, eax
    X86_AT(c, 0xcc89eu);
    { uint32_t t = c.r[3]; c.r[3] = c.r[0]; c.r[0] = t; }
    // 0cc89f  add esp, 0x18
    X86_AT(c, 0xcc89fu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x18u, 0, 4); }
    // 0cc8a2  push 7
    X86_AT(c, 0xcc8a2u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cc8a4  call 0xbbb5c
    X86_AT(c, 0xcc8a4u);
    push32(c, 0xcc8a9u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xcc8a9u);
    X86_TICK(c, 9);
    // 0cc8a9  add esp, 4
    X86_AT(c, 0xcc8a9u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0cc8ac  and ebx, ebx
    X86_AT(c, 0xcc8acu);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & c.r[3], 4); }
    // 0cc8ae  jg 0xcc8c8
    X86_AT(c, 0xcc8aeu);
    if (x86_cc(c, 15)) { goto L_cc8c8; }
    X86_TICK(c, 11);
    // 0cc8b0  push 0x85ec
    X86_AT(c, 0xcc8b0u);
    { uint32_t v = 0x85ECu; push32(c, v); }
    // 0cc8b5  push 7
    X86_AT(c, 0xcc8b5u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cc8b7  call 0xba428
    X86_AT(c, 0xcc8b7u);
    push32(c, 0xcc8bcu); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xcc8bcu);
    X86_TICK(c, 9);
    // 0cc8bc  push 7
    X86_AT(c, 0xcc8bcu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cc8be  call 0xbbb5c
    X86_AT(c, 0xcc8beu);
    push32(c, 0xcc8c3u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xcc8c3u);
    X86_TICK(c, 9);
    // 0cc8c3  add esp, 0xc
    X86_AT(c, 0xcc8c3u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0cc8c6  jmp 0xcc906
    X86_AT(c, 0xcc8c6u);
    goto L_cc906;
L_cc8c8:
    X86_TICK(c, 11);
    // 0cc8c8  cmp ebx, dword ptr [edi]
    X86_AT(c, 0xcc8c8u);
    (void)x86_sub(c, c.r[3], rd32((c.sbase[3] + (uint32_t)(c.r[7]))), 0, 4);
    // 0cc8ca  jle 0xcc8da
    X86_AT(c, 0xcc8cau);
    if (x86_cc(c, 14)) { goto L_cc8da; }
    X86_TICK(c, 9);
    // 0cc8cc  push 3
    X86_AT(c, 0xcc8ccu);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0cc8ce  call 0xb607c
    X86_AT(c, 0xcc8ceu);
    push32(c, 0xcc8d3u); x86_call_known(c, 0xb607cu, f_000b607c); X86_RET(c, 0xcc8d3u);
    X86_TICK(c, 9);
    // 0cc8d3  push 0x8604
    X86_AT(c, 0xcc8d3u);
    { uint32_t v = 0x8604u; push32(c, v); }
    // 0cc8d8  jmp 0xcc8ef
    X86_AT(c, 0xcc8d8u);
    goto L_cc8ef;
L_cc8da:
    X86_TICK(c, 19);
    // 0cc8da  mov eax, ebx
    X86_AT(c, 0xcc8dau);
    c.r[0] = c.r[3];
    // 0cc8dc  add eax, dword ptr [esi]
    X86_AT(c, 0xcc8dcu);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[6]))), 0, 4); }
    // 0cc8de  cmp eax, dword ptr [ebp + 0x10]
    X86_AT(c, 0xcc8deu);
    (void)x86_sub(c, c.r[0], rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u))), 0, 4);
    // 0cc8e1  jle 0xcc902
    X86_AT(c, 0xcc8e1u);
    if (x86_cc(c, 14)) { goto L_cc902; }
    X86_TICK(c, 9);
    // 0cc8e3  push 3
    X86_AT(c, 0xcc8e3u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0cc8e5  call 0xb607c
    X86_AT(c, 0xcc8e5u);
    push32(c, 0xcc8eau); x86_call_known(c, 0xb607cu, f_000b607c); X86_RET(c, 0xcc8eau);
    X86_TICK(c, 2);
    // 0cc8ea  push 0x8634
    X86_AT(c, 0xcc8eau);
    { uint32_t v = 0x8634u; push32(c, v); }
L_cc8ef:
    X86_TICK(c, 9);
    // 0cc8ef  push 7
    X86_AT(c, 0xcc8efu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cc8f1  call 0xba428
    X86_AT(c, 0xcc8f1u);
    push32(c, 0xcc8f6u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xcc8f6u);
    X86_TICK(c, 9);
    // 0cc8f6  push 7
    X86_AT(c, 0xcc8f6u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cc8f8  call 0xbbb5c
    X86_AT(c, 0xcc8f8u);
    push32(c, 0xcc8fdu); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xcc8fdu);
    X86_TICK(c, 9);
    // 0cc8fd  add esp, 0x10
    X86_AT(c, 0xcc8fdu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0cc900  jmp 0xcc906
    X86_AT(c, 0xcc900u);
    goto L_cc906;
L_cc902:
    X86_TICK(c, 14);
    // 0cc902  sub dword ptr [edi], ebx
    X86_AT(c, 0xcc902u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7])); uint32_t v = rd32(ea); wr32(ea, x86_sub(c, v, c.r[3], 0, 4)); }
    // 0cc904  add dword ptr [esi], ebx
    X86_AT(c, 0xcc904u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[6])); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[3], 0, 4)); }
L_cc906:
    X86_TICK(c, 28);
    // 0cc906  pop edi
    X86_AT(c, 0xcc906u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0cc907  pop esi
    X86_AT(c, 0xcc907u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0cc908  pop ebx
    X86_AT(c, 0xcc908u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0cc909  leave 
    X86_AT(c, 0xcc909u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0cc90a  ret 
    X86_AT(c, 0xcc90au);
    c.eip = pop32(c); return;
    x86_fault(c, 0xcc838u, "ran off the end of a function");
}
void f_000cc934(X86Cpu& c) {
    X86_TICK(c, 21);
    // 0cc934  mov eax, dword ptr [esp + 4]
    X86_AT(c, 0xcc934u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[4] + 0x4u)));
    // 0cc938  add dword ptr [0xa4a5e], eax
    X86_AT(c, 0xcc938u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xA4A5Eu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 0cc93e  ret 
    X86_AT(c, 0xcc93eu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xcc934u, "ran off the end of a function");
}
void f_000cc940(X86Cpu& c) {
    X86_TICK(c, 11);
    // 0cc940  push edi
    X86_AT(c, 0xcc940u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0cc941  push 7
    X86_AT(c, 0xcc941u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cc943  call 0xbb6b0
    X86_AT(c, 0xcc943u);
    push32(c, 0xcc948u); x86_call_known(c, 0xbb6b0u, f_000bb6b0); X86_RET(c, 0xcc948u);
    X86_TICK(c, 11);
    // 0cc948  push 0x865c
    X86_AT(c, 0xcc948u);
    { uint32_t v = 0x865Cu; push32(c, v); }
    // 0cc94d  push 7
    X86_AT(c, 0xcc94du);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cc94f  call 0xba428
    X86_AT(c, 0xcc94fu);
    push32(c, 0xcc954u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xcc954u);
    X86_TICK(c, 9);
    // 0cc954  push 7
    X86_AT(c, 0xcc954u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cc956  call 0xbbb5c
    X86_AT(c, 0xcc956u);
    push32(c, 0xcc95bu); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xcc95bu);
    X86_TICK(c, 11);
    // 0cc95b  push 0
    X86_AT(c, 0xcc95bu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0cc95d  push 7
    X86_AT(c, 0xcc95du);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cc95f  call 0xb6f28
    X86_AT(c, 0xcc95fu);
    push32(c, 0xcc964u); x86_call_known(c, 0xb6f28u, f_000b6f28); X86_RET(c, 0xcc964u);
    X86_TICK(c, 12);
    // 0cc964  xchg edi, eax
    X86_AT(c, 0xcc964u);
    { uint32_t t = c.r[7]; c.r[7] = c.r[0]; c.r[0] = t; }
    // 0cc965  add esp, 0x18
    X86_AT(c, 0xcc965u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x18u, 0, 4); }
    // 0cc968  cmp edi, 0xffffffff
    X86_AT(c, 0xcc968u);
    (void)x86_sub(c, c.r[7], 0xFFFFFFFFu, 0, 4);
    // 0cc96b  jne 0xcc985
    X86_AT(c, 0xcc96bu);
    if (x86_cc(c, 5)) { goto L_cc985; }
    X86_TICK(c, 11);
    // 0cc96d  push 0x868c
    X86_AT(c, 0xcc96du);
    { uint32_t v = 0x868Cu; push32(c, v); }
    // 0cc972  push 7
    X86_AT(c, 0xcc972u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cc974  call 0xba428
    X86_AT(c, 0xcc974u);
    push32(c, 0xcc979u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xcc979u);
    X86_TICK(c, 9);
    // 0cc979  push 7
    X86_AT(c, 0xcc979u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cc97b  call 0xbbb5c
    X86_AT(c, 0xcc97bu);
    push32(c, 0xcc980u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xcc980u);
    X86_TICK(c, 9);
    // 0cc980  add esp, 0xc
    X86_AT(c, 0xcc980u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0cc983  jmp 0xcc98e
    X86_AT(c, 0xcc983u);
    goto L_cc98e;
L_cc985:
    X86_TICK(c, 9);
    // 0cc985  push edi
    X86_AT(c, 0xcc985u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0cc986  call 0xccad0
    X86_AT(c, 0xcc986u);
    push32(c, 0xcc98bu); x86_call_known(c, 0xccad0u, f_000ccad0); X86_RET(c, 0xcc98bu);
    X86_TICK(c, 2);
    // 0cc98b  add esp, 4
    X86_AT(c, 0xcc98bu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
L_cc98e:
    X86_TICK(c, 14);
    // 0cc98e  pop edi
    X86_AT(c, 0xcc98eu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0cc98f  ret 
    X86_AT(c, 0xcc98fu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xcc940u, "ran off the end of a function");
}
void f_000cc990(X86Cpu& c) {
    X86_TICK(c, 15);
    // 0cc990  movzx edx, byte ptr [esp + 4]
    X86_AT(c, 0xcc990u);
    c.r[2] = rd8((c.sbase[2] + (uint32_t)(c.r[4] + 0x4u)));
    // 0cc995  sub edx, 0x41
    X86_AT(c, 0xcc995u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, 0x41u, 0, 4); }
    // 0cc998  cmp edx, 0x16
    X86_AT(c, 0xcc998u);
    (void)x86_sub(c, c.r[2], 0x16u, 0, 4);
    // 0cc99b  ja 0xcca28
    X86_AT(c, 0xcc99bu);
    if (x86_cc(c, 7)) { goto L_cca28; }
    X86_TICK(c, 7);
    // 0cc9a1  jmp dword ptr cs:[edx*4 + 0xcc9a9]
    X86_AT(c, 0xcc9a1u);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xCC9A9u)));
      switch (t) {
      case 0xcca05u: goto L_cca05;
      case 0xcca0cu: goto L_cca0c;
      case 0xcca13u: goto L_cca13;
      case 0xcca1au: goto L_cca1a;
      case 0xcca21u: goto L_cca21;
      case 0xcca28u: goto L_cca28;
      default: x86_jump(c, t); return; } }
L_cca05:
    X86_TICK(c, 9);
    // 0cca05  mov ecx, 0x11
    X86_AT(c, 0xcca05u);
    c.r[1] = 0x11u;
    // 0cca0a  jmp 0xcca2d
    X86_AT(c, 0xcca0au);
    goto L_cca2d;
L_cca0c:
    X86_TICK(c, 9);
    // 0cca0c  mov ecx, 7
    X86_AT(c, 0xcca0cu);
    c.r[1] = 0x7u;
    // 0cca11  jmp 0xcca2d
    X86_AT(c, 0xcca11u);
    goto L_cca2d;
L_cca13:
    X86_TICK(c, 9);
    // 0cca13  mov ecx, 3
    X86_AT(c, 0xcca13u);
    c.r[1] = 0x3u;
    // 0cca18  jmp 0xcca2d
    X86_AT(c, 0xcca18u);
    goto L_cca2d;
L_cca1a:
    X86_TICK(c, 9);
    // 0cca1a  mov ecx, 2
    X86_AT(c, 0xcca1au);
    c.r[1] = 0x2u;
    // 0cca1f  jmp 0xcca2d
    X86_AT(c, 0xcca1fu);
    goto L_cca2d;
L_cca21:
    X86_TICK(c, 9);
    // 0cca21  mov ecx, 0xb
    X86_AT(c, 0xcca21u);
    c.r[1] = 0xBu;
    // 0cca26  jmp 0xcca2d
    X86_AT(c, 0xcca26u);
    goto L_cca2d;
L_cca28:
    X86_TICK(c, 2);
    // 0cca28  mov ecx, 0x10
    X86_AT(c, 0xcca28u);
    c.r[1] = 0x10u;
L_cca2d:
    X86_TICK(c, 12);
    // 0cca2d  mov eax, ecx
    X86_AT(c, 0xcca2du);
    c.r[0] = c.r[1];
    // 0cca2f  ret 
    X86_AT(c, 0xcca2fu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xcc990u, "ran off the end of a function");
}
void f_000cca30(X86Cpu& c) {
    X86_TICK(c, 15);
    // 0cca30  movzx edx, byte ptr [esp + 4]
    X86_AT(c, 0xcca30u);
    c.r[2] = rd8((c.sbase[2] + (uint32_t)(c.r[4] + 0x4u)));
    // 0cca35  sub edx, 0x41
    X86_AT(c, 0xcca35u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, 0x41u, 0, 4); }
    // 0cca38  cmp edx, 0x16
    X86_AT(c, 0xcca38u);
    (void)x86_sub(c, c.r[2], 0x16u, 0, 4);
    // 0cca3b  ja 0xccac8
    X86_AT(c, 0xcca3bu);
    if (x86_cc(c, 7)) { goto L_ccac8; }
    X86_TICK(c, 7);
    // 0cca41  jmp dword ptr cs:[edx*4 + 0xcca49]
    X86_AT(c, 0xcca41u);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xCCA49u)));
      switch (t) {
      case 0xccaa5u: goto L_ccaa5;
      case 0xccaacu: goto L_ccaac;
      case 0xccab3u: goto L_ccab3;
      case 0xccabau: goto L_ccaba;
      case 0xccac1u: goto L_ccac1;
      case 0xccac8u: goto L_ccac8;
      default: x86_jump(c, t); return; } }
L_ccaa5:
    X86_TICK(c, 9);
    // 0ccaa5  mov ecx, 4
    X86_AT(c, 0xccaa5u);
    c.r[1] = 0x4u;
    // 0ccaaa  jmp 0xccacd
    X86_AT(c, 0xccaaau);
    goto L_ccacd;
L_ccaac:
    X86_TICK(c, 9);
    // 0ccaac  mov ecx, 5
    X86_AT(c, 0xccaacu);
    c.r[1] = 0x5u;
    // 0ccab1  jmp 0xccacd
    X86_AT(c, 0xccab1u);
    goto L_ccacd;
L_ccab3:
    X86_TICK(c, 9);
    // 0ccab3  mov ecx, 3
    X86_AT(c, 0xccab3u);
    c.r[1] = 0x3u;
    // 0ccab8  jmp 0xccacd
    X86_AT(c, 0xccab8u);
    goto L_ccacd;
L_ccaba:
    X86_TICK(c, 9);
    // 0ccaba  mov ecx, 2
    X86_AT(c, 0xccabau);
    c.r[1] = 0x2u;
    // 0ccabf  jmp 0xccacd
    X86_AT(c, 0xccabfu);
    goto L_ccacd;
L_ccac1:
    X86_TICK(c, 9);
    // 0ccac1  mov ecx, 7
    X86_AT(c, 0xccac1u);
    c.r[1] = 0x7u;
    // 0ccac6  jmp 0xccacd
    X86_AT(c, 0xccac6u);
    goto L_ccacd;
L_ccac8:
    X86_TICK(c, 2);
    // 0ccac8  mov ecx, 8
    X86_AT(c, 0xccac8u);
    c.r[1] = 0x8u;
L_ccacd:
    X86_TICK(c, 12);
    // 0ccacd  mov eax, ecx
    X86_AT(c, 0xccacdu);
    c.r[0] = c.r[1];
    // 0ccacf  ret 
    X86_AT(c, 0xccacfu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xcca30u, "ran off the end of a function");
}
void f_000ccad0(X86Cpu& c) {
    X86_TICK(c, 26);
    // 0ccad0  push ebp
    X86_AT(c, 0xccad0u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0ccad1  mov ebp, esp
    X86_AT(c, 0xccad1u);
    c.r[5] = c.r[4];
    // 0ccad3  sub esp, 8
    X86_AT(c, 0xccad3u);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, 0x8u, 0, 4); }
    // 0ccad6  push ebx
    X86_AT(c, 0xccad6u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0ccad7  push esi
    X86_AT(c, 0xccad7u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0ccad8  push edi
    X86_AT(c, 0xccad8u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0ccad9  push 0
    X86_AT(c, 0xccad9u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0ccadb  push dword ptr [ebp + 8]
    X86_AT(c, 0xccadbu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, v); }
    // 0ccade  call 0xca47c
    X86_AT(c, 0xccadeu);
    push32(c, 0xccae3u); x86_call_known(c, 0xca47cu, f_000ca47c); X86_RET(c, 0xccae3u);
    X86_TICK(c, 9);
    // 0ccae3  push 7
    X86_AT(c, 0xccae3u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0ccae5  call 0xbb6b0
    X86_AT(c, 0xccae5u);
    push32(c, 0xccaeau); x86_call_known(c, 0xbb6b0u, f_000bb6b0); X86_RET(c, 0xccaeau);
    X86_TICK(c, 11);
    // 0ccaea  push 0x86a4
    X86_AT(c, 0xccaeau);
    { uint32_t v = 0x86A4u; push32(c, v); }
    // 0ccaef  push 7
    X86_AT(c, 0xccaefu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0ccaf1  call 0xba428
    X86_AT(c, 0xccaf1u);
    push32(c, 0xccaf6u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xccaf6u);
    X86_TICK(c, 26);
    // 0ccaf6  mov eax, dword ptr [ebp + 8]
    X86_AT(c, 0xccaf6u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0ccaf9  lea edx, [eax + eax*2]
    X86_AT(c, 0xccaf9u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0ccafc  shl edx, 5
    X86_AT(c, 0xccafcu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0ccaff  add edx, eax
    X86_AT(c, 0xccaffu);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0ccb01  lea edx, [eax + edx*2]
    X86_AT(c, 0xccb01u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0ccb04  mov al, byte ptr [edx + 0xa4acf]
    X86_AT(c, 0xccb04u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4ACFu))));
    // 0ccb0a  push eax
    X86_AT(c, 0xccb0au);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ccb0b  call 0xcc990
    X86_AT(c, 0xccb0bu);
    push32(c, 0xccb10u); x86_call_known(c, 0xcc990u, f_000cc990); X86_RET(c, 0xccb10u);
    X86_TICK(c, 19);
    // 0ccb10  xchg esi, eax
    X86_AT(c, 0xccb10u);
    { uint32_t t = c.r[6]; c.r[6] = c.r[0]; c.r[0] = t; }
    // 0ccb11  dec esi
    X86_AT(c, 0xccb11u);
    { uint32_t v = c.r[6]; c.r[6] = x86_dec(c, v, 4); }
    // 0ccb12  add esp, 0x18
    X86_AT(c, 0xccb12u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x18u, 0, 4); }
    // 0ccb15  cmp dword ptr [0xa4a8e], 0
    X86_AT(c, 0xccb15u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xA4A8Eu))), 0x0u, 0, 4);
    // 0ccb1c  jne 0xccb25
    X86_AT(c, 0xccb1cu);
    if (x86_cc(c, 5)) { goto L_ccb25; }
    X86_TICK(c, 9);
    // 0ccb1e  mov edi, 0xf
    X86_AT(c, 0xccb1eu);
    c.r[7] = 0xFu;
    // 0ccb23  jmp 0xccb3a
    X86_AT(c, 0xccb23u);
    goto L_ccb3a;
L_ccb25:
    X86_TICK(c, 12);
    // 0ccb25  cmp dword ptr [0xa4a96], 0
    X86_AT(c, 0xccb25u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xA4A96u))), 0x0u, 0, 4);
    // 0ccb2c  jne 0xccb35
    X86_AT(c, 0xccb2cu);
    if (x86_cc(c, 5)) { goto L_ccb35; }
    X86_TICK(c, 9);
    // 0ccb2e  mov edi, 0xe
    X86_AT(c, 0xccb2eu);
    c.r[7] = 0xEu;
    // 0ccb33  jmp 0xccb3a
    X86_AT(c, 0xccb33u);
    goto L_ccb3a;
L_ccb35:
    X86_TICK(c, 2);
    // 0ccb35  mov edi, 7
    X86_AT(c, 0xccb35u);
    c.r[7] = 0x7u;
L_ccb3a:
    X86_TICK(c, 7);
    // 0ccb3a  cmp esi, edi
    X86_AT(c, 0xccb3au);
    (void)x86_sub(c, c.r[6], c.r[7], 0, 4);
    // 0ccb3c  jle 0xccb40
    X86_AT(c, 0xccb3cu);
    if (x86_cc(c, 14)) { goto L_ccb40; }
    X86_TICK(c, 2);
    // 0ccb3e  mov esi, edi
    X86_AT(c, 0xccb3eu);
    c.r[6] = c.r[7];
L_ccb40:
    X86_TICK(c, 9);
    // 0ccb40  push 7
    X86_AT(c, 0xccb40u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0ccb42  call 0xb9514
    X86_AT(c, 0xccb42u);
    push32(c, 0xccb47u); x86_call_known(c, 0xb9514u, f_000b9514); X86_RET(c, 0xccb47u);
    X86_TICK(c, 12);
    // 0ccb47  xchg ebx, eax
    X86_AT(c, 0xccb47u);
    { uint32_t t = c.r[3]; c.r[3] = c.r[0]; c.r[0] = t; }
    // 0ccb48  add esp, 4
    X86_AT(c, 0xccb48u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0ccb4b  cmp bl, 1
    X86_AT(c, 0xccb4bu);
    (void)x86_sub(c, g8(c, 3), 0x1u, 0, 1);
    // 0ccb4e  je 0xccb6f
    X86_AT(c, 0xccb4eu);
    if (x86_cc(c, 4)) { goto L_ccb6f; }
    X86_TICK(c, 7);
    // 0ccb50  cmp bl, 0x41
    X86_AT(c, 0xccb50u);
    (void)x86_sub(c, g8(c, 3), 0x41u, 0, 1);
    // 0ccb53  jb 0xccb5f
    X86_AT(c, 0xccb53u);
    if (x86_cc(c, 2)) { goto L_ccb5f; }
    X86_TICK(c, 12);
    // 0ccb55  movzx ebx, bl
    X86_AT(c, 0xccb55u);
    c.r[3] = g8(c, 3);
    // 0ccb58  lea eax, [edi + 0x41]
    X86_AT(c, 0xccb58u);
    c.r[0] = (uint32_t)(c.r[7] + 0x41u);
    // 0ccb5b  cmp eax, ebx
    X86_AT(c, 0xccb5bu);
    (void)x86_sub(c, c.r[0], c.r[3], 0, 4);
    // 0ccb5d  jge 0xccb6f
    X86_AT(c, 0xccb5du);
    if (x86_cc(c, 13)) { goto L_ccb6f; }
L_ccb5f:
    X86_TICK(c, 7);
    // 0ccb5f  and bl, bl
    X86_AT(c, 0xccb5fu);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v & g8(c, 3), 1)); }
    // 0ccb61  je 0xccb40
    X86_AT(c, 0xccb61u);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xccb40u); goto L_ccb40; }
    X86_TICK(c, 9);
    // 0ccb63  push 1
    X86_AT(c, 0xccb63u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0ccb65  call 0xb607c
    X86_AT(c, 0xccb65u);
    push32(c, 0xccb6au); x86_call_known(c, 0xb607cu, f_000b607c); X86_RET(c, 0xccb6au);
    X86_TICK(c, 9);
    // 0ccb6a  add esp, 4
    X86_AT(c, 0xccb6au);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0ccb6d  jmp 0xccb40
    X86_AT(c, 0xccb6du);
    X86_POLL(c, 0xccb40u); goto L_ccb40;
L_ccb6f:
    X86_TICK(c, 11);
    // 0ccb6f  push 0
    X86_AT(c, 0xccb6fu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0ccb71  push 6
    X86_AT(c, 0xccb71u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0ccb73  call 0xbba64
    X86_AT(c, 0xccb73u);
    push32(c, 0xccb78u); x86_call_known(c, 0xbba64u, f_000bba64); X86_RET(c, 0xccb78u);
    X86_TICK(c, 7);
    // 0ccb78  call 0xb8d78
    X86_AT(c, 0xccb78u);
    push32(c, 0xccb7du); x86_call_known(c, 0xb8d78u, f_000b8d78); X86_RET(c, 0xccb7du);
    X86_TICK(c, 9);
    // 0ccb7d  add esp, 8
    X86_AT(c, 0xccb7du);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0ccb80  cmp bl, 1
    X86_AT(c, 0xccb80u);
    (void)x86_sub(c, g8(c, 3), 0x1u, 0, 1);
    // 0ccb83  jne 0xccb8f
    X86_AT(c, 0xccb83u);
    if (x86_cc(c, 5)) { goto L_ccb8f; }
    X86_TICK(c, 9);
    // 0ccb85  push 0x86dc
    X86_AT(c, 0xccb85u);
    { uint32_t v = 0x86DCu; push32(c, v); }
    // 0ccb8a  jmp 0xccc43
    X86_AT(c, 0xccb8au);
    goto L_ccc43;
L_ccb8f:
    X86_TICK(c, 12);
    // 0ccb8f  movzx ebx, bl
    X86_AT(c, 0xccb8fu);
    c.r[3] = g8(c, 3);
    // 0ccb92  lea eax, [ebx - 0x41]
    X86_AT(c, 0xccb92u);
    c.r[0] = (uint32_t)(c.r[3] + 0xFFFFFFBFu);
    // 0ccb95  cmp esi, eax
    X86_AT(c, 0xccb95u);
    (void)x86_sub(c, c.r[6], c.r[0], 0, 4);
    // 0ccb97  jge 0xccbac
    X86_AT(c, 0xccb97u);
    if (x86_cc(c, 13)) { goto L_ccbac; }
    X86_TICK(c, 7);
    // 0ccb99  cmp bl, 0x50
    X86_AT(c, 0xccb99u);
    (void)x86_sub(c, g8(c, 3), 0x50u, 0, 1);
    // 0ccb9c  je 0xccbac
    X86_AT(c, 0xccb9cu);
    if (x86_cc(c, 4)) { goto L_ccbac; }
    X86_TICK(c, 9);
    // 0ccb9e  push 3
    X86_AT(c, 0xccb9eu);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0ccba0  call 0xb607c
    X86_AT(c, 0xccba0u);
    push32(c, 0xccba5u); x86_call_known(c, 0xb607cu, f_000b607c); X86_RET(c, 0xccba5u);
    X86_TICK(c, 9);
    // 0ccba5  push 0x86f4
    X86_AT(c, 0xccba5u);
    { uint32_t v = 0x86F4u; push32(c, v); }
    // 0ccbaa  jmp 0xccc17
    X86_AT(c, 0xccbaau);
    goto L_ccc17;
L_ccbac:
    X86_TICK(c, 19);
    // 0ccbac  mov byte ptr [ebp - 1], 0
    X86_AT(c, 0xccbacu);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFFu)), 0x0u);
    // 0ccbb0  lea eax, [ebp - 1]
    X86_AT(c, 0xccbb0u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFFFu);
    // 0ccbb3  push eax
    X86_AT(c, 0xccbb3u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ccbb4  push ebx
    X86_AT(c, 0xccbb4u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0ccbb5  push 0x12
    X86_AT(c, 0xccbb5u);
    { uint32_t v = 0x12u; push32(c, v); }
    // 0ccbb7  push 0xa6bac
    X86_AT(c, 0xccbb7u);
    { uint32_t v = 0xA6BACu; push32(c, v); }
    // 0ccbbc  call 0xba1b4
    X86_AT(c, 0xccbbcu);
    push32(c, 0xccbc1u); x86_call_known(c, 0xba1b4u, f_000ba1b4); X86_RET(c, 0xccbc1u);
    X86_TICK(c, 11);
    // 0ccbc1  mov dword ptr [ebp - 8], eax
    X86_AT(c, 0xccbc1u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), c.r[0]);
    // 0ccbc4  add esp, 0x10
    X86_AT(c, 0xccbc4u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0ccbc7  and eax, eax
    X86_AT(c, 0xccbc7u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0ccbc9  jne 0xccbd9
    X86_AT(c, 0xccbc9u);
    if (x86_cc(c, 5)) { goto L_ccbd9; }
    X86_TICK(c, 9);
    // 0ccbcb  push 1
    X86_AT(c, 0xccbcbu);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0ccbcd  call 0xb607c
    X86_AT(c, 0xccbcdu);
    push32(c, 0xccbd2u); x86_call_known(c, 0xb607cu, f_000b607c); X86_RET(c, 0xccbd2u);
    X86_TICK(c, 9);
    // 0ccbd2  push 0x8724
    X86_AT(c, 0xccbd2u);
    { uint32_t v = 0x8724u; push32(c, v); }
    // 0ccbd7  jmp 0xccc17
    X86_AT(c, 0xccbd7u);
    goto L_ccc17;
L_ccbd9:
    X86_TICK(c, 14);
    // 0ccbd9  push dword ptr [ebp - 8]
    X86_AT(c, 0xccbd9u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u))); push32(c, v); }
    // 0ccbdc  push 7
    X86_AT(c, 0xccbdcu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0ccbde  call 0xbbba4
    X86_AT(c, 0xccbdeu);
    push32(c, 0xccbe3u); x86_call_known(c, 0xbbba4u, f_000bbba4); X86_RET(c, 0xccbe3u);
    X86_TICK(c, 9);
    // 0ccbe3  push 7
    X86_AT(c, 0xccbe3u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0ccbe5  call 0xbbb5c
    X86_AT(c, 0xccbe5u);
    push32(c, 0xccbeau); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xccbeau);
    X86_TICK(c, 32);
    // 0ccbea  mov eax, dword ptr [ebp + 8]
    X86_AT(c, 0xccbeau);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0ccbed  lea edx, [eax + eax*2]
    X86_AT(c, 0xccbedu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0ccbf0  shl edx, 5
    X86_AT(c, 0xccbf0u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0ccbf3  add edx, eax
    X86_AT(c, 0xccbf3u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0ccbf5  lea edx, [eax + edx*2]
    X86_AT(c, 0xccbf5u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0ccbf8  movzx ebx, bl
    X86_AT(c, 0xccbf8u);
    c.r[3] = g8(c, 3);
    // 0ccbfb  lea eax, [ebx - 0x41]
    X86_AT(c, 0xccbfbu);
    c.r[0] = (uint32_t)(c.r[3] + 0xFFFFFFBFu);
    // 0ccbfe  add esp, 0xc
    X86_AT(c, 0xccbfeu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0ccc01  cmp dword ptr [edx + eax*4 + 0xa4b1b], 1
    X86_AT(c, 0xccc01u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[2] + c.r[0] * 4 + 0xA4B1Bu))), 0x1u, 0, 4);
    // 0ccc09  jge 0xccc2a
    X86_AT(c, 0xccc09u);
    if (x86_cc(c, 13)) { goto L_ccc2a; }
    X86_TICK(c, 9);
    // 0ccc0b  push 0
    X86_AT(c, 0xccc0bu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0ccc0d  call 0xb607c
    X86_AT(c, 0xccc0du);
    push32(c, 0xccc12u); x86_call_known(c, 0xb607cu, f_000b607c); X86_RET(c, 0xccc12u);
    X86_TICK(c, 2);
    // 0ccc12  push 0x8738
    X86_AT(c, 0xccc12u);
    { uint32_t v = 0x8738u; push32(c, v); }
L_ccc17:
    X86_TICK(c, 9);
    // 0ccc17  push 7
    X86_AT(c, 0xccc17u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0ccc19  call 0xba428
    X86_AT(c, 0xccc19u);
    push32(c, 0xccc1eu); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xccc1eu);
    X86_TICK(c, 9);
    // 0ccc1e  push 7
    X86_AT(c, 0xccc1eu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0ccc20  call 0xbbb5c
    X86_AT(c, 0xccc20u);
    push32(c, 0xccc25u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xccc25u);
    X86_TICK(c, 9);
    // 0ccc25  add esp, 0x10
    X86_AT(c, 0xccc25u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0ccc28  jmp 0xccc54
    X86_AT(c, 0xccc28u);
    goto L_ccc54;
L_ccc2a:
    X86_TICK(c, 17);
    // 0ccc2a  mov eax, dword ptr [ebp + 8]
    X86_AT(c, 0xccc2au);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0ccc2d  lea edx, [eax + eax*2]
    X86_AT(c, 0xccc2du);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0ccc30  shl edx, 5
    X86_AT(c, 0xccc30u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0ccc33  add edx, eax
    X86_AT(c, 0xccc33u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0ccc35  lea edx, [eax + edx*2]
    X86_AT(c, 0xccc35u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0ccc38  mov byte ptr [edx + 0xa4b1a], bl
    X86_AT(c, 0xccc38u);
    wr8((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4B1Au)), g8(c, 3));
    // 0ccc3e  push 0x8764
    X86_AT(c, 0xccc3eu);
    { uint32_t v = 0x8764u; push32(c, v); }
L_ccc43:
    X86_TICK(c, 9);
    // 0ccc43  push 7
    X86_AT(c, 0xccc43u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0ccc45  call 0xba428
    X86_AT(c, 0xccc45u);
    push32(c, 0xccc4au); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xccc4au);
    X86_TICK(c, 9);
    // 0ccc4a  push 7
    X86_AT(c, 0xccc4au);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0ccc4c  call 0xbbb5c
    X86_AT(c, 0xccc4cu);
    push32(c, 0xccc51u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xccc51u);
    X86_TICK(c, 2);
    // 0ccc51  add esp, 0xc
    X86_AT(c, 0xccc51u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
L_ccc54:
    X86_TICK(c, 28);
    // 0ccc54  pop edi
    X86_AT(c, 0xccc54u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0ccc55  pop esi
    X86_AT(c, 0xccc55u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0ccc56  pop ebx
    X86_AT(c, 0xccc56u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0ccc57  leave 
    X86_AT(c, 0xccc57u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0ccc58  ret 
    X86_AT(c, 0xccc58u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xccad0u, "ran off the end of a function");
}
void f_000ccc5c(X86Cpu& c) {
    X86_TICK(c, 11);
    // 0ccc5c  push edi
    X86_AT(c, 0xccc5cu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0ccc5d  push 7
    X86_AT(c, 0xccc5du);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0ccc5f  call 0xbb6b0
    X86_AT(c, 0xccc5fu);
    push32(c, 0xccc64u); x86_call_known(c, 0xbb6b0u, f_000bb6b0); X86_RET(c, 0xccc64u);
    X86_TICK(c, 11);
    // 0ccc64  push 0x8780
    X86_AT(c, 0xccc64u);
    { uint32_t v = 0x8780u; push32(c, v); }
    // 0ccc69  push 7
    X86_AT(c, 0xccc69u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0ccc6b  call 0xba428
    X86_AT(c, 0xccc6bu);
    push32(c, 0xccc70u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xccc70u);
    X86_TICK(c, 9);
    // 0ccc70  push 7
    X86_AT(c, 0xccc70u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0ccc72  call 0xbbb5c
    X86_AT(c, 0xccc72u);
    push32(c, 0xccc77u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xccc77u);
    X86_TICK(c, 11);
    // 0ccc77  push 0
    X86_AT(c, 0xccc77u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0ccc79  push 7
    X86_AT(c, 0xccc79u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0ccc7b  call 0xb6f28
    X86_AT(c, 0xccc7bu);
    push32(c, 0xccc80u); x86_call_known(c, 0xb6f28u, f_000b6f28); X86_RET(c, 0xccc80u);
    X86_TICK(c, 12);
    // 0ccc80  xchg edi, eax
    X86_AT(c, 0xccc80u);
    { uint32_t t = c.r[7]; c.r[7] = c.r[0]; c.r[0] = t; }
    // 0ccc81  add esp, 0x18
    X86_AT(c, 0xccc81u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x18u, 0, 4); }
    // 0ccc84  cmp edi, 0xffffffff
    X86_AT(c, 0xccc84u);
    (void)x86_sub(c, c.r[7], 0xFFFFFFFFu, 0, 4);
    // 0ccc87  jne 0xccca1
    X86_AT(c, 0xccc87u);
    if (x86_cc(c, 5)) { goto L_ccca1; }
    X86_TICK(c, 11);
    // 0ccc89  push 0x87b4
    X86_AT(c, 0xccc89u);
    { uint32_t v = 0x87B4u; push32(c, v); }
    // 0ccc8e  push 7
    X86_AT(c, 0xccc8eu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0ccc90  call 0xba428
    X86_AT(c, 0xccc90u);
    push32(c, 0xccc95u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xccc95u);
    X86_TICK(c, 9);
    // 0ccc95  push 7
    X86_AT(c, 0xccc95u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0ccc97  call 0xbbb5c
    X86_AT(c, 0xccc97u);
    push32(c, 0xccc9cu); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xccc9cu);
    X86_TICK(c, 9);
    // 0ccc9c  add esp, 0xc
    X86_AT(c, 0xccc9cu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0ccc9f  jmp 0xcccaa
    X86_AT(c, 0xccc9fu);
    goto L_cccaa;
L_ccca1:
    X86_TICK(c, 9);
    // 0ccca1  push edi
    X86_AT(c, 0xccca1u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0ccca2  call 0xcccac
    X86_AT(c, 0xccca2u);
    push32(c, 0xccca7u); x86_call_known(c, 0xcccacu, f_000cccac); X86_RET(c, 0xccca7u);
    X86_TICK(c, 2);
    // 0ccca7  add esp, 4
    X86_AT(c, 0xccca7u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
L_cccaa:
    X86_TICK(c, 14);
    // 0cccaa  pop edi
    X86_AT(c, 0xcccaau);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0cccab  ret 
    X86_AT(c, 0xcccabu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xccc5cu, "ran off the end of a function");
}
void f_000cccac(X86Cpu& c) {
    X86_TICK(c, 26);
    // 0cccac  push ebp
    X86_AT(c, 0xcccacu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0cccad  mov ebp, esp
    X86_AT(c, 0xcccadu);
    c.r[5] = c.r[4];
    // 0cccaf  sub esp, 8
    X86_AT(c, 0xcccafu);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, 0x8u, 0, 4); }
    // 0cccb2  push ebx
    X86_AT(c, 0xcccb2u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0cccb3  push esi
    X86_AT(c, 0xcccb3u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0cccb4  push edi
    X86_AT(c, 0xcccb4u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0cccb5  push 1
    X86_AT(c, 0xcccb5u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0cccb7  push dword ptr [ebp + 8]
    X86_AT(c, 0xcccb7u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, v); }
    // 0cccba  call 0xca47c
    X86_AT(c, 0xcccbau);
    push32(c, 0xcccbfu); x86_call_known(c, 0xca47cu, f_000ca47c); X86_RET(c, 0xcccbfu);
    X86_TICK(c, 9);
    // 0cccbf  push 7
    X86_AT(c, 0xcccbfu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cccc1  call 0xbb6b0
    X86_AT(c, 0xcccc1u);
    push32(c, 0xcccc6u); x86_call_known(c, 0xbb6b0u, f_000bb6b0); X86_RET(c, 0xcccc6u);
    X86_TICK(c, 11);
    // 0cccc6  push 0x87cc
    X86_AT(c, 0xcccc6u);
    { uint32_t v = 0x87CCu; push32(c, v); }
    // 0ccccb  push 7
    X86_AT(c, 0xccccbu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0ccccd  call 0xba428
    X86_AT(c, 0xccccdu);
    push32(c, 0xcccd2u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xcccd2u);
    X86_TICK(c, 26);
    // 0cccd2  mov eax, dword ptr [ebp + 8]
    X86_AT(c, 0xcccd2u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0cccd5  lea edx, [eax + eax*2]
    X86_AT(c, 0xcccd5u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0cccd8  shl edx, 5
    X86_AT(c, 0xcccd8u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0cccdb  add edx, eax
    X86_AT(c, 0xcccdbu);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0cccdd  lea edx, [eax + edx*2]
    X86_AT(c, 0xcccddu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0ccce0  mov al, byte ptr [edx + 0xa4acf]
    X86_AT(c, 0xccce0u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4ACFu))));
    // 0ccce6  push eax
    X86_AT(c, 0xccce6u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ccce7  call 0xcca30
    X86_AT(c, 0xccce7u);
    push32(c, 0xcccecu); x86_call_known(c, 0xcca30u, f_000cca30); X86_RET(c, 0xcccecu);
    X86_TICK(c, 19);
    // 0cccec  xchg esi, eax
    X86_AT(c, 0xcccecu);
    { uint32_t t = c.r[6]; c.r[6] = c.r[0]; c.r[0] = t; }
    // 0ccced  dec esi
    X86_AT(c, 0xcccedu);
    { uint32_t v = c.r[6]; c.r[6] = x86_dec(c, v, 4); }
    // 0cccee  add esp, 0x18
    X86_AT(c, 0xccceeu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x18u, 0, 4); }
    // 0cccf1  cmp dword ptr [0xa4a92], 0
    X86_AT(c, 0xcccf1u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xA4A92u))), 0x0u, 0, 4);
    // 0cccf8  jne 0xccd01
    X86_AT(c, 0xcccf8u);
    if (x86_cc(c, 5)) { goto L_ccd01; }
    X86_TICK(c, 9);
    // 0cccfa  mov edi, 7
    X86_AT(c, 0xcccfau);
    c.r[7] = 0x7u;
    // 0cccff  jmp 0xccd16
    X86_AT(c, 0xcccffu);
    goto L_ccd16;
L_ccd01:
    X86_TICK(c, 12);
    // 0ccd01  cmp dword ptr [0xa4a96], 0
    X86_AT(c, 0xccd01u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xA4A96u))), 0x0u, 0, 4);
    // 0ccd08  jne 0xccd11
    X86_AT(c, 0xccd08u);
    if (x86_cc(c, 5)) { goto L_ccd11; }
    X86_TICK(c, 9);
    // 0ccd0a  mov edi, 6
    X86_AT(c, 0xccd0au);
    c.r[7] = 0x6u;
    // 0ccd0f  jmp 0xccd16
    X86_AT(c, 0xccd0fu);
    goto L_ccd16;
L_ccd11:
    X86_TICK(c, 2);
    // 0ccd11  mov edi, 4
    X86_AT(c, 0xccd11u);
    c.r[7] = 0x4u;
L_ccd16:
    X86_TICK(c, 7);
    // 0ccd16  cmp esi, edi
    X86_AT(c, 0xccd16u);
    (void)x86_sub(c, c.r[6], c.r[7], 0, 4);
    // 0ccd18  jle 0xccd1c
    X86_AT(c, 0xccd18u);
    if (x86_cc(c, 14)) { goto L_ccd1c; }
    X86_TICK(c, 2);
    // 0ccd1a  mov esi, edi
    X86_AT(c, 0xccd1au);
    c.r[6] = c.r[7];
L_ccd1c:
    X86_TICK(c, 9);
    // 0ccd1c  push 7
    X86_AT(c, 0xccd1cu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0ccd1e  call 0xb9514
    X86_AT(c, 0xccd1eu);
    push32(c, 0xccd23u); x86_call_known(c, 0xb9514u, f_000b9514); X86_RET(c, 0xccd23u);
    X86_TICK(c, 12);
    // 0ccd23  xchg ebx, eax
    X86_AT(c, 0xccd23u);
    { uint32_t t = c.r[3]; c.r[3] = c.r[0]; c.r[0] = t; }
    // 0ccd24  add esp, 4
    X86_AT(c, 0xccd24u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0ccd27  cmp bl, 1
    X86_AT(c, 0xccd27u);
    (void)x86_sub(c, g8(c, 3), 0x1u, 0, 1);
    // 0ccd2a  je 0xccd4b
    X86_AT(c, 0xccd2au);
    if (x86_cc(c, 4)) { goto L_ccd4b; }
    X86_TICK(c, 7);
    // 0ccd2c  cmp bl, 0x41
    X86_AT(c, 0xccd2cu);
    (void)x86_sub(c, g8(c, 3), 0x41u, 0, 1);
    // 0ccd2f  jb 0xccd3b
    X86_AT(c, 0xccd2fu);
    if (x86_cc(c, 2)) { goto L_ccd3b; }
    X86_TICK(c, 12);
    // 0ccd31  movzx ebx, bl
    X86_AT(c, 0xccd31u);
    c.r[3] = g8(c, 3);
    // 0ccd34  lea eax, [edi + 0x41]
    X86_AT(c, 0xccd34u);
    c.r[0] = (uint32_t)(c.r[7] + 0x41u);
    // 0ccd37  cmp eax, ebx
    X86_AT(c, 0xccd37u);
    (void)x86_sub(c, c.r[0], c.r[3], 0, 4);
    // 0ccd39  jge 0xccd4b
    X86_AT(c, 0xccd39u);
    if (x86_cc(c, 13)) { goto L_ccd4b; }
L_ccd3b:
    X86_TICK(c, 7);
    // 0ccd3b  and bl, bl
    X86_AT(c, 0xccd3bu);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v & g8(c, 3), 1)); }
    // 0ccd3d  je 0xccd1c
    X86_AT(c, 0xccd3du);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xccd1cu); goto L_ccd1c; }
    X86_TICK(c, 9);
    // 0ccd3f  push 1
    X86_AT(c, 0xccd3fu);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0ccd41  call 0xb607c
    X86_AT(c, 0xccd41u);
    push32(c, 0xccd46u); x86_call_known(c, 0xb607cu, f_000b607c); X86_RET(c, 0xccd46u);
    X86_TICK(c, 9);
    // 0ccd46  add esp, 4
    X86_AT(c, 0xccd46u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0ccd49  jmp 0xccd1c
    X86_AT(c, 0xccd49u);
    X86_POLL(c, 0xccd1cu); goto L_ccd1c;
L_ccd4b:
    X86_TICK(c, 11);
    // 0ccd4b  push 0
    X86_AT(c, 0xccd4bu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0ccd4d  push 6
    X86_AT(c, 0xccd4du);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0ccd4f  call 0xbba64
    X86_AT(c, 0xccd4fu);
    push32(c, 0xccd54u); x86_call_known(c, 0xbba64u, f_000bba64); X86_RET(c, 0xccd54u);
    X86_TICK(c, 7);
    // 0ccd54  call 0xb8d78
    X86_AT(c, 0xccd54u);
    push32(c, 0xccd59u); x86_call_known(c, 0xb8d78u, f_000b8d78); X86_RET(c, 0xccd59u);
    X86_TICK(c, 9);
    // 0ccd59  add esp, 8
    X86_AT(c, 0xccd59u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0ccd5c  cmp bl, 1
    X86_AT(c, 0xccd5cu);
    (void)x86_sub(c, g8(c, 3), 0x1u, 0, 1);
    // 0ccd5f  jne 0xccd6b
    X86_AT(c, 0xccd5fu);
    if (x86_cc(c, 5)) { goto L_ccd6b; }
    X86_TICK(c, 9);
    // 0ccd61  push 0x8808
    X86_AT(c, 0xccd61u);
    { uint32_t v = 0x8808u; push32(c, v); }
    // 0ccd66  jmp 0xcce1f
    X86_AT(c, 0xccd66u);
    goto L_cce1f;
L_ccd6b:
    X86_TICK(c, 12);
    // 0ccd6b  movzx ebx, bl
    X86_AT(c, 0xccd6bu);
    c.r[3] = g8(c, 3);
    // 0ccd6e  lea eax, [ebx - 0x41]
    X86_AT(c, 0xccd6eu);
    c.r[0] = (uint32_t)(c.r[3] + 0xFFFFFFBFu);
    // 0ccd71  cmp esi, eax
    X86_AT(c, 0xccd71u);
    (void)x86_sub(c, c.r[6], c.r[0], 0, 4);
    // 0ccd73  jge 0xccd88
    X86_AT(c, 0xccd73u);
    if (x86_cc(c, 13)) { goto L_ccd88; }
    X86_TICK(c, 7);
    // 0ccd75  cmp bl, 0x48
    X86_AT(c, 0xccd75u);
    (void)x86_sub(c, g8(c, 3), 0x48u, 0, 1);
    // 0ccd78  je 0xccd88
    X86_AT(c, 0xccd78u);
    if (x86_cc(c, 4)) { goto L_ccd88; }
    X86_TICK(c, 9);
    // 0ccd7a  push 3
    X86_AT(c, 0xccd7au);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0ccd7c  call 0xb607c
    X86_AT(c, 0xccd7cu);
    push32(c, 0xccd81u); x86_call_known(c, 0xb607cu, f_000b607c); X86_RET(c, 0xccd81u);
    X86_TICK(c, 9);
    // 0ccd81  push 0x8820
    X86_AT(c, 0xccd81u);
    { uint32_t v = 0x8820u; push32(c, v); }
    // 0ccd86  jmp 0xccdf3
    X86_AT(c, 0xccd86u);
    goto L_ccdf3;
L_ccd88:
    X86_TICK(c, 19);
    // 0ccd88  mov byte ptr [ebp - 1], 0
    X86_AT(c, 0xccd88u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFFu)), 0x0u);
    // 0ccd8c  lea eax, [ebp - 1]
    X86_AT(c, 0xccd8cu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFFFu);
    // 0ccd8f  push eax
    X86_AT(c, 0xccd8fu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ccd90  push ebx
    X86_AT(c, 0xccd90u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0ccd91  push 8
    X86_AT(c, 0xccd91u);
    { uint32_t v = 0x8u; push32(c, v); }
    // 0ccd93  push 0xa74f4
    X86_AT(c, 0xccd93u);
    { uint32_t v = 0xA74F4u; push32(c, v); }
    // 0ccd98  call 0xba1b4
    X86_AT(c, 0xccd98u);
    push32(c, 0xccd9du); x86_call_known(c, 0xba1b4u, f_000ba1b4); X86_RET(c, 0xccd9du);
    X86_TICK(c, 11);
    // 0ccd9d  mov dword ptr [ebp - 8], eax
    X86_AT(c, 0xccd9du);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), c.r[0]);
    // 0ccda0  add esp, 0x10
    X86_AT(c, 0xccda0u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0ccda3  and eax, eax
    X86_AT(c, 0xccda3u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0ccda5  jne 0xccdb5
    X86_AT(c, 0xccda5u);
    if (x86_cc(c, 5)) { goto L_ccdb5; }
    X86_TICK(c, 9);
    // 0ccda7  push 1
    X86_AT(c, 0xccda7u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0ccda9  call 0xb607c
    X86_AT(c, 0xccda9u);
    push32(c, 0xccdaeu); x86_call_known(c, 0xb607cu, f_000b607c); X86_RET(c, 0xccdaeu);
    X86_TICK(c, 9);
    // 0ccdae  push 0x8850
    X86_AT(c, 0xccdaeu);
    { uint32_t v = 0x8850u; push32(c, v); }
    // 0ccdb3  jmp 0xccdf3
    X86_AT(c, 0xccdb3u);
    goto L_ccdf3;
L_ccdb5:
    X86_TICK(c, 14);
    // 0ccdb5  push dword ptr [ebp - 8]
    X86_AT(c, 0xccdb5u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u))); push32(c, v); }
    // 0ccdb8  push 7
    X86_AT(c, 0xccdb8u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0ccdba  call 0xbbba4
    X86_AT(c, 0xccdbau);
    push32(c, 0xccdbfu); x86_call_known(c, 0xbbba4u, f_000bbba4); X86_RET(c, 0xccdbfu);
    X86_TICK(c, 9);
    // 0ccdbf  push 7
    X86_AT(c, 0xccdbfu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0ccdc1  call 0xbbb5c
    X86_AT(c, 0xccdc1u);
    push32(c, 0xccdc6u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xccdc6u);
    X86_TICK(c, 32);
    // 0ccdc6  mov eax, dword ptr [ebp + 8]
    X86_AT(c, 0xccdc6u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0ccdc9  lea edx, [eax + eax*2]
    X86_AT(c, 0xccdc9u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0ccdcc  shl edx, 5
    X86_AT(c, 0xccdccu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0ccdcf  add edx, eax
    X86_AT(c, 0xccdcfu);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0ccdd1  lea edx, [eax + edx*2]
    X86_AT(c, 0xccdd1u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0ccdd4  movzx ebx, bl
    X86_AT(c, 0xccdd4u);
    c.r[3] = g8(c, 3);
    // 0ccdd7  lea eax, [ebx - 0x41]
    X86_AT(c, 0xccdd7u);
    c.r[0] = (uint32_t)(c.r[3] + 0xFFFFFFBFu);
    // 0ccdda  add esp, 0xc
    X86_AT(c, 0xccddau);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0ccddd  cmp dword ptr [edx + eax*4 + 0xa4afa], 1
    X86_AT(c, 0xccdddu);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[2] + c.r[0] * 4 + 0xA4AFAu))), 0x1u, 0, 4);
    // 0ccde5  jge 0xcce06
    X86_AT(c, 0xccde5u);
    if (x86_cc(c, 13)) { goto L_cce06; }
    X86_TICK(c, 9);
    // 0ccde7  push 0
    X86_AT(c, 0xccde7u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0ccde9  call 0xb607c
    X86_AT(c, 0xccde9u);
    push32(c, 0xccdeeu); x86_call_known(c, 0xb607cu, f_000b607c); X86_RET(c, 0xccdeeu);
    X86_TICK(c, 2);
    // 0ccdee  push 0x8864
    X86_AT(c, 0xccdeeu);
    { uint32_t v = 0x8864u; push32(c, v); }
L_ccdf3:
    X86_TICK(c, 9);
    // 0ccdf3  push 7
    X86_AT(c, 0xccdf3u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0ccdf5  call 0xba428
    X86_AT(c, 0xccdf5u);
    push32(c, 0xccdfau); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xccdfau);
    X86_TICK(c, 9);
    // 0ccdfa  push 7
    X86_AT(c, 0xccdfau);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0ccdfc  call 0xbbb5c
    X86_AT(c, 0xccdfcu);
    push32(c, 0xcce01u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xcce01u);
    X86_TICK(c, 9);
    // 0cce01  add esp, 0x10
    X86_AT(c, 0xcce01u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0cce04  jmp 0xcce30
    X86_AT(c, 0xcce04u);
    goto L_cce30;
L_cce06:
    X86_TICK(c, 17);
    // 0cce06  mov eax, dword ptr [ebp + 8]
    X86_AT(c, 0xcce06u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0cce09  lea edx, [eax + eax*2]
    X86_AT(c, 0xcce09u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0cce0c  shl edx, 5
    X86_AT(c, 0xcce0cu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0cce0f  add edx, eax
    X86_AT(c, 0xcce0fu);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0cce11  lea edx, [eax + edx*2]
    X86_AT(c, 0xcce11u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0cce14  mov byte ptr [edx + 0xa4af9], bl
    X86_AT(c, 0xcce14u);
    wr8((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4AF9u)), g8(c, 3));
    // 0cce1a  push 0x8890
    X86_AT(c, 0xcce1au);
    { uint32_t v = 0x8890u; push32(c, v); }
L_cce1f:
    X86_TICK(c, 9);
    // 0cce1f  push 7
    X86_AT(c, 0xcce1fu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cce21  call 0xba428
    X86_AT(c, 0xcce21u);
    push32(c, 0xcce26u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xcce26u);
    X86_TICK(c, 9);
    // 0cce26  push 7
    X86_AT(c, 0xcce26u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cce28  call 0xbbb5c
    X86_AT(c, 0xcce28u);
    push32(c, 0xcce2du); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xcce2du);
    X86_TICK(c, 2);
    // 0cce2d  add esp, 0xc
    X86_AT(c, 0xcce2du);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
L_cce30:
    X86_TICK(c, 28);
    // 0cce30  pop edi
    X86_AT(c, 0xcce30u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0cce31  pop esi
    X86_AT(c, 0xcce31u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0cce32  pop ebx
    X86_AT(c, 0xcce32u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0cce33  leave 
    X86_AT(c, 0xcce33u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0cce34  ret 
    X86_AT(c, 0xcce34u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xcccacu, "ran off the end of a function");
}
void f_000cce38(X86Cpu& c) {
    X86_TICK(c, 21);
    // 0cce38  push ebp
    X86_AT(c, 0xcce38u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0cce39  mov ebp, esp
    X86_AT(c, 0xcce39u);
    c.r[5] = c.r[4];
    // 0cce3b  sub esp, 0x14
    X86_AT(c, 0xcce3bu);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, 0x14u, 0, 4); }
    // 0cce3e  push ebx
    X86_AT(c, 0xcce3eu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0cce3f  push esi
    X86_AT(c, 0xcce3fu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0cce40  push edi
    X86_AT(c, 0xcce40u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0cce41  push 7
    X86_AT(c, 0xcce41u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cce43  call 0xbb6b0
    X86_AT(c, 0xcce43u);
    push32(c, 0xcce48u); x86_call_known(c, 0xbb6b0u, f_000bb6b0); X86_RET(c, 0xcce48u);
    X86_TICK(c, 11);
    // 0cce48  push 0x88b0
    X86_AT(c, 0xcce48u);
    { uint32_t v = 0x88B0u; push32(c, v); }
    // 0cce4d  push 7
    X86_AT(c, 0xcce4du);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cce4f  call 0xba428
    X86_AT(c, 0xcce4fu);
    push32(c, 0xcce54u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xcce54u);
    X86_TICK(c, 9);
    // 0cce54  push 7
    X86_AT(c, 0xcce54u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cce56  call 0xbbb5c
    X86_AT(c, 0xcce56u);
    push32(c, 0xcce5bu); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xcce5bu);
    X86_TICK(c, 11);
    // 0cce5b  push 0
    X86_AT(c, 0xcce5bu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0cce5d  push 7
    X86_AT(c, 0xcce5du);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cce5f  call 0xb6f28
    X86_AT(c, 0xcce5fu);
    push32(c, 0xcce64u); x86_call_known(c, 0xb6f28u, f_000b6f28); X86_RET(c, 0xcce64u);
    X86_TICK(c, 12);
    // 0cce64  xchg edi, eax
    X86_AT(c, 0xcce64u);
    { uint32_t t = c.r[7]; c.r[7] = c.r[0]; c.r[0] = t; }
    // 0cce65  add esp, 0x18
    X86_AT(c, 0xcce65u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x18u, 0, 4); }
    // 0cce68  cmp edi, 0xffffffff
    X86_AT(c, 0xcce68u);
    (void)x86_sub(c, c.r[7], 0xFFFFFFFFu, 0, 4);
    // 0cce6b  jne 0xcce77
    X86_AT(c, 0xcce6bu);
    if (x86_cc(c, 5)) { goto L_cce77; }
    X86_TICK(c, 9);
    // 0cce6d  push 0x88e4
    X86_AT(c, 0xcce6du);
    { uint32_t v = 0x88E4u; push32(c, v); }
    // 0cce72  jmp 0xcd0a4
    X86_AT(c, 0xcce72u);
    goto L_cd0a4;
L_cce77:
    X86_TICK(c, 9);
    // 0cce77  push 7
    X86_AT(c, 0xcce77u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cce79  call 0xb7068
    X86_AT(c, 0xcce79u);
    push32(c, 0xcce7eu); x86_call_known(c, 0xb7068u, f_000b7068); X86_RET(c, 0xcce7eu);
    X86_TICK(c, 11);
    // 0cce7e  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0xcce7eu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
    // 0cce81  add esp, 4
    X86_AT(c, 0xcce81u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0cce84  inc eax
    X86_AT(c, 0xcce84u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0cce85  jne 0xcce91
    X86_AT(c, 0xcce85u);
    if (x86_cc(c, 5)) { goto L_cce91; }
    X86_TICK(c, 9);
    // 0cce87  push 0x88fc
    X86_AT(c, 0xcce87u);
    { uint32_t v = 0x88FCu; push32(c, v); }
    // 0cce8c  jmp 0xcd0a4
    X86_AT(c, 0xcce8cu);
    goto L_cd0a4;
L_cce91:
    X86_TICK(c, 34);
    // 0cce91  mov eax, dword ptr [0xa4a76]
    X86_AT(c, 0xcce91u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xA4A76u)));
    // 0cce96  mov dword ptr [ebp - 8], eax
    X86_AT(c, 0xcce96u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), c.r[0]);
    // 0cce99  mov eax, dword ptr [0xa4a7a]
    X86_AT(c, 0xcce99u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xA4A7Au)));
    // 0cce9e  mov dword ptr [ebp - 0xc], eax
    X86_AT(c, 0xcce9eu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)), c.r[0]);
    // 0ccea1  push 1
    X86_AT(c, 0xccea1u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0ccea3  push dword ptr [ebp - 4]
    X86_AT(c, 0xccea3u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))); push32(c, v); }
    // 0ccea6  lea eax, [ebp - 0xc]
    X86_AT(c, 0xccea6u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFF4u);
    // 0ccea9  push eax
    X86_AT(c, 0xccea9u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0cceaa  lea ecx, [ebp - 8]
    X86_AT(c, 0xcceaau);
    c.r[1] = (uint32_t)(c.r[5] + 0xFFFFFFF8u);
    // 0ccead  push ecx
    X86_AT(c, 0xcceadu);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 0cceae  call 0xc7248
    X86_AT(c, 0xcceaeu);
    push32(c, 0xcceb3u); x86_call_known(c, 0xc7248u, f_000c7248); X86_RET(c, 0xcceb3u);
    X86_TICK(c, 17);
    // 0cceb3  push dword ptr [ebp - 0xc]
    X86_AT(c, 0xcceb3u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u))); push32(c, v); }
    // 0cceb6  push dword ptr [ebp - 8]
    X86_AT(c, 0xcceb6u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u))); push32(c, v); }
    // 0cceb9  call 0xc735c
    X86_AT(c, 0xcceb9u);
    push32(c, 0xccebeu); x86_call_known(c, 0xc735cu, f_000c735c); X86_RET(c, 0xccebeu);
    X86_TICK(c, 12);
    // 0ccebe  xchg esi, eax
    X86_AT(c, 0xccebeu);
    { uint32_t t = c.r[6]; c.r[6] = c.r[0]; c.r[0] = t; }
    // 0ccebf  add esp, 0x18
    X86_AT(c, 0xccebfu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x18u, 0, 4); }
    // 0ccec2  cmp esi, 0xffffffff
    X86_AT(c, 0xccec2u);
    (void)x86_sub(c, c.r[6], 0xFFFFFFFFu, 0, 4);
    // 0ccec5  je 0xcd03e
    X86_AT(c, 0xccec5u);
    if (x86_cc(c, 4)) { goto L_cd03e; }
    X86_TICK(c, 11);
    // 0ccecb  mov bl, byte ptr [esi + 0xa5ce8]
    X86_AT(c, 0xccecbu);
    s8(c, 3, rd8((c.sbase[3] + (uint32_t)(c.r[6] + 0xA5CE8u))));
    // 0cced1  cmp bl, 0x99
    X86_AT(c, 0xcced1u);
    (void)x86_sub(c, g8(c, 3), 0x99u, 0, 1);
    // 0cced4  je 0xccee5
    X86_AT(c, 0xcced4u);
    if (x86_cc(c, 4)) { goto L_ccee5; }
    X86_TICK(c, 7);
    // 0cced6  cmp bl, 0x9a
    X86_AT(c, 0xcced6u);
    (void)x86_sub(c, g8(c, 3), 0x9Au, 0, 1);
    // 0cced9  je 0xccee5
    X86_AT(c, 0xcced9u);
    if (x86_cc(c, 4)) { goto L_ccee5; }
    X86_TICK(c, 7);
    // 0ccedb  cmp bl, 0x80
    X86_AT(c, 0xccedbu);
    (void)x86_sub(c, g8(c, 3), 0x80u, 0, 1);
    // 0ccede  je 0xccee5
    X86_AT(c, 0xccedeu);
    if (x86_cc(c, 4)) { goto L_ccee5; }
    X86_TICK(c, 7);
    // 0ccee0  cmp bl, 0x82
    X86_AT(c, 0xccee0u);
    (void)x86_sub(c, g8(c, 3), 0x82u, 0, 1);
    // 0ccee3  jne 0xccef6
    X86_AT(c, 0xccee3u);
    if (x86_cc(c, 5)) { goto L_ccef6; }
L_ccee5:
    X86_TICK(c, 9);
    // 0ccee5  push 3
    X86_AT(c, 0xccee5u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0ccee7  call 0xb607c
    X86_AT(c, 0xccee7u);
    push32(c, 0xcceecu); x86_call_known(c, 0xb607cu, f_000b607c); X86_RET(c, 0xcceecu);
    X86_TICK(c, 9);
    // 0cceec  push 0x8914
    X86_AT(c, 0xcceecu);
    { uint32_t v = 0x8914u; push32(c, v); }
    // 0ccef1  jmp 0xcd063
    X86_AT(c, 0xccef1u);
    goto L_cd063;
L_ccef6:
    X86_TICK(c, 7);
    // 0ccef6  cmp bl, 0x8a
    X86_AT(c, 0xccef6u);
    (void)x86_sub(c, g8(c, 3), 0x8Au, 0, 1);
    // 0ccef9  jne 0xcd006
    X86_AT(c, 0xccef9u);
    if (x86_cc(c, 5)) { goto L_cd006; }
    X86_TICK(c, 11);
    // 0cceff  push 0x8934
    X86_AT(c, 0xcceffu);
    { uint32_t v = 0x8934u; push32(c, v); }
    // 0ccf04  push 7
    X86_AT(c, 0xccf04u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0ccf06  call 0xba428
    X86_AT(c, 0xccf06u);
    push32(c, 0xccf0bu); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xccf0bu);
    X86_TICK(c, 9);
    // 0ccf0b  push 7
    X86_AT(c, 0xccf0bu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0ccf0d  call 0xbbb5c
    X86_AT(c, 0xccf0du);
    push32(c, 0xccf12u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xccf12u);
    X86_TICK(c, 126);
    // 0ccf12  mov eax, edi
    X86_AT(c, 0xccf12u);
    c.r[0] = c.r[7];
    // 0ccf14  lea edx, [eax + eax*2]
    X86_AT(c, 0xccf14u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0ccf17  shl edx, 5
    X86_AT(c, 0xccf17u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0ccf1a  add edx, eax
    X86_AT(c, 0xccf1au);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0ccf1c  lea edx, [eax + edx*2]
    X86_AT(c, 0xccf1cu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0ccf1f  add esp, 0xc
    X86_AT(c, 0xccf1fu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0ccf22  mov eax, dword ptr [edx + 0xa4ad9]
    X86_AT(c, 0xccf22u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4AD9u)));
    // 0ccf28  mov dword ptr [ebp - 0x10], edx
    X86_AT(c, 0xccf28u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u)), c.r[2]);
    // 0ccf2b  cdq 
    X86_AT(c, 0xccf2bu);
    c.r[2] = (c.r[0] & 0x80000000u) ? 0xFFFFFFFFu : 0u;
    // 0ccf2c  mov ecx, 0x64
    X86_AT(c, 0xccf2cu);
    c.r[1] = 0x64u;
    // 0ccf31  idiv ecx
    X86_AT(c, 0xccf31u);
    x86_idiv(c, c.r[1], 4, 0xccf31u);
    // 0ccf33  mov edx, dword ptr [ebp - 0x10]
    X86_AT(c, 0xccf33u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u)));
    // 0ccf36  mov dword ptr [ebp - 0x14], eax
    X86_AT(c, 0xccf36u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu)), c.r[0]);
    // 0ccf39  mov eax, dword ptr [edx + 0xa4add]
    X86_AT(c, 0xccf39u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4ADDu)));
    // 0ccf3f  cdq 
    X86_AT(c, 0xccf3fu);
    c.r[2] = (c.r[0] & 0x80000000u) ? 0xFFFFFFFFu : 0u;
    // 0ccf40  idiv ecx
    X86_AT(c, 0xccf40u);
    x86_idiv(c, c.r[1], 4, 0xccf40u);
    // 0ccf42  cmp eax, dword ptr [ebp - 0x14]
    X86_AT(c, 0xccf42u);
    (void)x86_sub(c, c.r[0], rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu))), 0, 4);
    // 0ccf45  jge 0xccf51
    X86_AT(c, 0xccf45u);
    if (x86_cc(c, 13)) { goto L_ccf51; }
    X86_TICK(c, 9);
    // 0ccf47  push 0x8970
    X86_AT(c, 0xccf47u);
    { uint32_t v = 0x8970u; push32(c, v); }
    // 0ccf4c  jmp 0xcd0a4
    X86_AT(c, 0xccf4cu);
    goto L_cd0a4;
L_ccf51:
    X86_TICK(c, 23);
    // 0ccf51  mov eax, edi
    X86_AT(c, 0xccf51u);
    c.r[0] = c.r[7];
    // 0ccf53  lea edx, [eax + eax*2]
    X86_AT(c, 0xccf53u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0ccf56  shl edx, 5
    X86_AT(c, 0xccf56u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0ccf59  add edx, eax
    X86_AT(c, 0xccf59u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0ccf5b  lea edx, [eax + edx*2]
    X86_AT(c, 0xccf5bu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0ccf5e  cmp dword ptr [edx + 0xa4ad9], 0x9c4
    X86_AT(c, 0xccf5eu);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4AD9u))), 0x9C4u, 0, 4);
    // 0ccf68  jl 0xccf74
    X86_AT(c, 0xccf68u);
    if (x86_cc(c, 12)) { goto L_ccf74; }
    X86_TICK(c, 9);
    // 0ccf6a  push 0x89a4
    X86_AT(c, 0xccf6au);
    { uint32_t v = 0x89A4u; push32(c, v); }
    // 0ccf6f  jmp 0xcd0a4
    X86_AT(c, 0xccf6fu);
    goto L_cd0a4;
L_ccf74:
    X86_TICK(c, 23);
    // 0ccf74  mov eax, edi
    X86_AT(c, 0xccf74u);
    c.r[0] = c.r[7];
    // 0ccf76  lea edx, [eax + eax*2]
    X86_AT(c, 0xccf76u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0ccf79  shl edx, 5
    X86_AT(c, 0xccf79u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0ccf7c  add edx, eax
    X86_AT(c, 0xccf7cu);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0ccf7e  lea edx, [eax + edx*2]
    X86_AT(c, 0xccf7eu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0ccf81  cmp dword ptr [edx + 0xa4ad9], 0x1f4
    X86_AT(c, 0xccf81u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4AD9u))), 0x1F4u, 0, 4);
    // 0ccf8b  jl 0xccfa0
    X86_AT(c, 0xccf8bu);
    if (x86_cc(c, 12)) { goto L_ccfa0; }
    X86_TICK(c, 12);
    // 0ccf8d  cmp byte ptr [edx + 0xa4aad], 1
    X86_AT(c, 0xccf8du);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4AADu))), 0x1u, 0, 1);
    // 0ccf94  je 0xccfa0
    X86_AT(c, 0xccf94u);
    if (x86_cc(c, 4)) { goto L_ccfa0; }
    X86_TICK(c, 9);
    // 0ccf96  push 0x89d0
    X86_AT(c, 0xccf96u);
    { uint32_t v = 0x89D0u; push32(c, v); }
    // 0ccf9b  jmp 0xcd0a4
    X86_AT(c, 0xccf9bu);
    goto L_cd0a4;
L_ccfa0:
    X86_TICK(c, 30);
    // 0ccfa0  mov eax, edi
    X86_AT(c, 0xccfa0u);
    c.r[0] = c.r[7];
    // 0ccfa2  lea edx, [eax + eax*2]
    X86_AT(c, 0xccfa2u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0ccfa5  shl edx, 5
    X86_AT(c, 0xccfa5u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0ccfa8  add edx, eax
    X86_AT(c, 0xccfa8u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0ccfaa  lea edx, [eax + edx*2]
    X86_AT(c, 0xccfaau);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0ccfad  add dword ptr [edx + 0xa4ad9], 0x64
    X86_AT(c, 0xccfadu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[2] + 0xA4AD9u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0x64u, 0, 4)); }
    // 0ccfb4  cmp dword ptr [edx + 0xa4ad9], 0x1f4
    X86_AT(c, 0xccfb4u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4AD9u))), 0x1F4u, 0, 4);
    // 0ccfbe  jl 0xccfd3
    X86_AT(c, 0xccfbeu);
    if (x86_cc(c, 12)) { goto L_ccfd3; }
    X86_TICK(c, 12);
    // 0ccfc0  cmp byte ptr [edx + 0xa4aad], 1
    X86_AT(c, 0xccfc0u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4AADu))), 0x1u, 0, 1);
    // 0ccfc7  je 0xccfd3
    X86_AT(c, 0xccfc7u);
    if (x86_cc(c, 4)) { goto L_ccfd3; }
    X86_TICK(c, 2);
    // 0ccfc9  mov dword ptr [edx + 0xa4ad9], 0x1f4
    X86_AT(c, 0xccfc9u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4AD9u)), 0x1F4u);
L_ccfd3:
    X86_TICK(c, 11);
    // 0ccfd3  push 0x8a1c
    X86_AT(c, 0xccfd3u);
    { uint32_t v = 0x8A1Cu; push32(c, v); }
    // 0ccfd8  push 7
    X86_AT(c, 0xccfd8u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0ccfda  call 0xba428
    X86_AT(c, 0xccfdau);
    push32(c, 0xccfdfu); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xccfdfu);
    X86_TICK(c, 9);
    // 0ccfdf  push 7
    X86_AT(c, 0xccfdfu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0ccfe1  call 0xbbb5c
    X86_AT(c, 0xccfe1u);
    push32(c, 0xccfe6u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xccfe6u);
    X86_TICK(c, 9);
    // 0ccfe6  push 2
    X86_AT(c, 0xccfe6u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0ccfe8  call 0xb607c
    X86_AT(c, 0xccfe8u);
    push32(c, 0xccfedu); x86_call_known(c, 0xb607cu, f_000b607c); X86_RET(c, 0xccfedu);
    X86_TICK(c, 7);
    // 0ccfed  call 0xcaa9c
    X86_AT(c, 0xccfedu);
    push32(c, 0xccff2u); x86_call_known(c, 0xcaa9cu, f_000caa9c); X86_RET(c, 0xccff2u);
    X86_TICK(c, 9);
    // 0ccff2  push 2
    X86_AT(c, 0xccff2u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0ccff4  call 0xbebbc
    X86_AT(c, 0xccff4u);
    push32(c, 0xccff9u); x86_call_known(c, 0xbebbcu, f_000bebbc); X86_RET(c, 0xccff9u);
    X86_TICK(c, 7);
    // 0ccff9  call 0xcaa9c
    X86_AT(c, 0xccff9u);
    push32(c, 0xccffeu); x86_call_known(c, 0xcaa9cu, f_000caa9c); X86_RET(c, 0xccffeu);
    X86_TICK(c, 9);
    // 0ccffe  add esp, 0x14
    X86_AT(c, 0xccffeu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x14u, 0, 4); }
    // 0cd001  jmp 0xcd142
    X86_AT(c, 0xcd001u);
    goto L_cd142;
L_cd006:
    X86_TICK(c, 12);
    // 0cd006  cmp dword ptr [esi*4 + 0xa5ec8], 3
    X86_AT(c, 0xcd006u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[6] * 4 + 0xA5EC8u))), 0x3u, 0, 4);
    // 0cd00e  jne 0xcd01a
    X86_AT(c, 0xcd00eu);
    if (x86_cc(c, 5)) { goto L_cd01a; }
    X86_TICK(c, 9);
    // 0cd010  push 0x8a54
    X86_AT(c, 0xcd010u);
    { uint32_t v = 0x8A54u; push32(c, v); }
    // 0cd015  jmp 0xcd0a4
    X86_AT(c, 0xcd015u);
    goto L_cd0a4;
L_cd01a:
    X86_TICK(c, 12);
    // 0cd01a  cmp dword ptr [esi*4 + 0xa5f88], 0
    X86_AT(c, 0xcd01au);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[6] * 4 + 0xA5F88u))), 0x0u, 0, 4);
    // 0cd022  jge 0xcd02e
    X86_AT(c, 0xcd022u);
    if (x86_cc(c, 13)) { goto L_cd02e; }
    X86_TICK(c, 9);
    // 0cd024  push 0x8a88
    X86_AT(c, 0xcd024u);
    { uint32_t v = 0x8A88u; push32(c, v); }
    // 0cd029  jmp 0xcd0a4
    X86_AT(c, 0xcd029u);
    goto L_cd0a4;
L_cd02e:
    X86_TICK(c, 16);
    // 0cd02e  mov eax, dword ptr [esi*4 + 0xa5f88]
    X86_AT(c, 0xcd02eu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[6] * 4 + 0xA5F88u)));
    // 0cd035  push dword ptr [eax*4 + 0xb2e30]
    X86_AT(c, 0xcd035u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[0] * 4 + 0xB2E30u))); push32(c, v); }
    // 0cd03c  jmp 0xcd0a4
    X86_AT(c, 0xcd03cu);
    goto L_cd0a4;
L_cd03e:
    X86_TICK(c, 17);
    // 0cd03e  push dword ptr [ebp - 0xc]
    X86_AT(c, 0xcd03eu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u))); push32(c, v); }
    // 0cd041  push dword ptr [ebp - 8]
    X86_AT(c, 0xcd041u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u))); push32(c, v); }
    // 0cd044  call 0xc8474
    X86_AT(c, 0xcd044u);
    push32(c, 0xcd049u); x86_call_known(c, 0xc8474u, f_000c8474); X86_RET(c, 0xcd049u);
    X86_TICK(c, 12);
    // 0cd049  xchg ebx, eax
    X86_AT(c, 0xcd049u);
    { uint32_t t = c.r[3]; c.r[3] = c.r[0]; c.r[0] = t; }
    // 0cd04a  add esp, 8
    X86_AT(c, 0xcd04au);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0cd04d  cmp bl, 0x25
    X86_AT(c, 0xcd04du);
    (void)x86_sub(c, g8(c, 3), 0x25u, 0, 1);
    // 0cd050  jb 0xcd057
    X86_AT(c, 0xcd050u);
    if (x86_cc(c, 2)) { goto L_cd057; }
    X86_TICK(c, 7);
    // 0cd052  cmp bl, 0x3f
    X86_AT(c, 0xcd052u);
    (void)x86_sub(c, g8(c, 3), 0x3Fu, 0, 1);
    // 0cd055  jbe 0xcd079
    X86_AT(c, 0xcd055u);
    if (x86_cc(c, 6)) { goto L_cd079; }
L_cd057:
    X86_TICK(c, 9);
    // 0cd057  push 3
    X86_AT(c, 0xcd057u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0cd059  call 0xb607c
    X86_AT(c, 0xcd059u);
    push32(c, 0xcd05eu); x86_call_known(c, 0xb607cu, f_000b607c); X86_RET(c, 0xcd05eu);
    X86_TICK(c, 2);
    // 0cd05e  push 0x8aa8
    X86_AT(c, 0xcd05eu);
    { uint32_t v = 0x8AA8u; push32(c, v); }
L_cd063:
    X86_TICK(c, 9);
    // 0cd063  push 7
    X86_AT(c, 0xcd063u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cd065  call 0xba428
    X86_AT(c, 0xcd065u);
    push32(c, 0xcd06au); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xcd06au);
    X86_TICK(c, 9);
    // 0cd06a  push 7
    X86_AT(c, 0xcd06au);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cd06c  call 0xbbb5c
    X86_AT(c, 0xcd06cu);
    push32(c, 0xcd071u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xcd071u);
    X86_TICK(c, 9);
    // 0cd071  add esp, 0x10
    X86_AT(c, 0xcd071u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0cd074  jmp 0xcd142
    X86_AT(c, 0xcd074u);
    goto L_cd142;
L_cd079:
    X86_TICK(c, 22);
    // 0cd079  push 1
    X86_AT(c, 0xcd079u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0cd07b  push dword ptr [ebp - 4]
    X86_AT(c, 0xcd07bu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))); push32(c, v); }
    // 0cd07e  lea eax, [ebp - 0xc]
    X86_AT(c, 0xcd07eu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFF4u);
    // 0cd081  push eax
    X86_AT(c, 0xcd081u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0cd082  lea ecx, [ebp - 8]
    X86_AT(c, 0xcd082u);
    c.r[1] = (uint32_t)(c.r[5] + 0xFFFFFFF8u);
    // 0cd085  push ecx
    X86_AT(c, 0xcd085u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 0cd086  call 0xc7248
    X86_AT(c, 0xcd086u);
    push32(c, 0xcd08bu); x86_call_known(c, 0xc7248u, f_000c7248); X86_RET(c, 0xcd08bu);
    X86_TICK(c, 17);
    // 0cd08b  push dword ptr [ebp - 0xc]
    X86_AT(c, 0xcd08bu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u))); push32(c, v); }
    // 0cd08e  push dword ptr [ebp - 8]
    X86_AT(c, 0xcd08eu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u))); push32(c, v); }
    // 0cd091  call 0xc8474
    X86_AT(c, 0xcd091u);
    push32(c, 0xcd096u); x86_call_known(c, 0xc8474u, f_000c8474); X86_RET(c, 0xcd096u);
    X86_TICK(c, 12);
    // 0cd096  xchg ebx, eax
    X86_AT(c, 0xcd096u);
    { uint32_t t = c.r[3]; c.r[3] = c.r[0]; c.r[0] = t; }
    // 0cd097  add esp, 0x18
    X86_AT(c, 0xcd097u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x18u, 0, 4); }
    // 0cd09a  cmp bl, 0x87
    X86_AT(c, 0xcd09au);
    (void)x86_sub(c, g8(c, 3), 0x87u, 0, 1);
    // 0cd09d  je 0xcd0ba
    X86_AT(c, 0xcd09du);
    if (x86_cc(c, 4)) { goto L_cd0ba; }
    X86_TICK(c, 2);
    // 0cd09f  push 0x8ac8
    X86_AT(c, 0xcd09fu);
    { uint32_t v = 0x8AC8u; push32(c, v); }
L_cd0a4:
    X86_TICK(c, 9);
    // 0cd0a4  push 7
    X86_AT(c, 0xcd0a4u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cd0a6  call 0xba428
    X86_AT(c, 0xcd0a6u);
    push32(c, 0xcd0abu); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xcd0abu);
    X86_TICK(c, 9);
    // 0cd0ab  push 7
    X86_AT(c, 0xcd0abu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cd0ad  call 0xbbb5c
    X86_AT(c, 0xcd0adu);
    push32(c, 0xcd0b2u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xcd0b2u);
    X86_TICK(c, 9);
    // 0cd0b2  add esp, 0xc
    X86_AT(c, 0xcd0b2u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0cd0b5  jmp 0xcd142
    X86_AT(c, 0xcd0b5u);
    goto L_cd142;
L_cd0ba:
    X86_TICK(c, 12);
    // 0cd0ba  cmp dword ptr [ebp - 4], 4
    X86_AT(c, 0xcd0bau);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))), 0x4u, 0, 4);
    // 0cd0be  je 0xcd139
    X86_AT(c, 0xcd0beu);
    if (x86_cc(c, 4)) { goto L_cd139; }
    X86_TICK(c, 13);
    // 0cd0c4  mov edx, dword ptr [0xa4a7a]
    X86_AT(c, 0xcd0c4u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(0xA4A7Au)));
    // 0cd0ca  and edx, 7
    X86_AT(c, 0xcd0cau);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & 0x7u, 4); }
    // 0cd0d0  cmp edx, 7
    X86_AT(c, 0xcd0d0u);
    (void)x86_sub(c, c.r[2], 0x7u, 0, 4);
    // 0cd0d3  ja 0xcd142
    X86_AT(c, 0xcd0d3u);
    if (x86_cc(c, 7)) { goto L_cd142; }
    X86_TICK(c, 7);
    // 0cd0d9  jmp dword ptr cs:[edx*4 + 0xcd0e1]
    X86_AT(c, 0xcd0d9u);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xCD0E1u)));
      switch (t) {
      case 0xcd101u: goto L_cd101;
      case 0xcd109u: goto L_cd109;
      case 0xcd111u: goto L_cd111;
      case 0xcd119u: goto L_cd119;
      case 0xcd121u: goto L_cd121;
      case 0xcd129u: goto L_cd129;
      case 0xcd131u: goto L_cd131;
      case 0xcd139u: goto L_cd139;
      default: x86_jump(c, t); return; } }
L_cd101:
    X86_TICK(c, 9);
    // 0cd101  push edi
    X86_AT(c, 0xcd101u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0cd102  call 0xcfec8
    X86_AT(c, 0xcd102u);
    push32(c, 0xcd107u); x86_call_known(c, 0xcfec8u, f_000cfec8); X86_RET(c, 0xcd107u);
    X86_TICK(c, 7);
    // 0cd107  jmp 0xcd13f
    X86_AT(c, 0xcd107u);
    goto L_cd13f;
L_cd109:
    X86_TICK(c, 9);
    // 0cd109  push edi
    X86_AT(c, 0xcd109u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0cd10a  call 0xd0304
    X86_AT(c, 0xcd10au);
    push32(c, 0xcd10fu); x86_call_known(c, 0xd0304u, f_000d0304); X86_RET(c, 0xcd10fu);
    X86_TICK(c, 7);
    // 0cd10f  jmp 0xcd13f
    X86_AT(c, 0xcd10fu);
    goto L_cd13f;
L_cd111:
    X86_TICK(c, 9);
    // 0cd111  push edi
    X86_AT(c, 0xcd111u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0cd112  call 0xd0444
    X86_AT(c, 0xcd112u);
    push32(c, 0xcd117u); x86_call_known(c, 0xd0444u, f_000d0444); X86_RET(c, 0xcd117u);
    X86_TICK(c, 7);
    // 0cd117  jmp 0xcd13f
    X86_AT(c, 0xcd117u);
    goto L_cd13f;
L_cd119:
    X86_TICK(c, 9);
    // 0cd119  push edi
    X86_AT(c, 0xcd119u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0cd11a  call 0xd09d0
    X86_AT(c, 0xcd11au);
    push32(c, 0xcd11fu); x86_call_known(c, 0xd09d0u, f_000d09d0); X86_RET(c, 0xcd11fu);
    X86_TICK(c, 7);
    // 0cd11f  jmp 0xcd13f
    X86_AT(c, 0xcd11fu);
    goto L_cd13f;
L_cd121:
    X86_TICK(c, 9);
    // 0cd121  push edi
    X86_AT(c, 0xcd121u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0cd122  call 0xd1188
    X86_AT(c, 0xcd122u);
    push32(c, 0xcd127u); x86_call_known(c, 0xd1188u, f_000d1188); X86_RET(c, 0xcd127u);
    X86_TICK(c, 7);
    // 0cd127  jmp 0xcd13f
    X86_AT(c, 0xcd127u);
    goto L_cd13f;
L_cd129:
    X86_TICK(c, 9);
    // 0cd129  push edi
    X86_AT(c, 0xcd129u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0cd12a  call 0xd1940
    X86_AT(c, 0xcd12au);
    push32(c, 0xcd12fu); x86_call_known(c, 0xd1940u, f_000d1940); X86_RET(c, 0xcd12fu);
    X86_TICK(c, 7);
    // 0cd12f  jmp 0xcd13f
    X86_AT(c, 0xcd12fu);
    goto L_cd13f;
L_cd131:
    X86_TICK(c, 9);
    // 0cd131  push edi
    X86_AT(c, 0xcd131u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0cd132  call 0xd002c
    X86_AT(c, 0xcd132u);
    push32(c, 0xcd137u); x86_call_known(c, 0xd002cu, f_000d002c); X86_RET(c, 0xcd137u);
    X86_TICK(c, 7);
    // 0cd137  jmp 0xcd13f
    X86_AT(c, 0xcd137u);
    goto L_cd13f;
L_cd139:
    X86_TICK(c, 9);
    // 0cd139  push edi
    X86_AT(c, 0xcd139u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0cd13a  call 0xd01ac
    X86_AT(c, 0xcd13au);
    push32(c, 0xcd13fu); x86_call_known(c, 0xd01acu, f_000d01ac); X86_RET(c, 0xcd13fu);
L_cd13f:
    X86_TICK(c, 2);
    // 0cd13f  add esp, 4
    X86_AT(c, 0xcd13fu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
L_cd142:
    X86_TICK(c, 28);
    // 0cd142  pop edi
    X86_AT(c, 0xcd142u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0cd143  pop esi
    X86_AT(c, 0xcd143u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0cd144  pop ebx
    X86_AT(c, 0xcd144u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0cd145  leave 
    X86_AT(c, 0xcd145u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0cd146  ret 
    X86_AT(c, 0xcd146u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xcce38u, "ran off the end of a function");
}
void f_000cd0a4(X86Cpu& c) {
    X86_TICK(c, 9);
    // 0cd0a4  push 7
    X86_AT(c, 0xcd0a4u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cd0a6  call 0xba428
    X86_AT(c, 0xcd0a6u);
    push32(c, 0xcd0abu); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xcd0abu);
    X86_TICK(c, 9);
    // 0cd0ab  push 7
    X86_AT(c, 0xcd0abu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cd0ad  call 0xbbb5c
    X86_AT(c, 0xcd0adu);
    push32(c, 0xcd0b2u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xcd0b2u);
    X86_TICK(c, 9);
    // 0cd0b2  add esp, 0xc
    X86_AT(c, 0xcd0b2u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0cd0b5  jmp 0xcd142
    X86_AT(c, 0xcd0b5u);
    goto L_cd142;
L_cd142:
    X86_TICK(c, 28);
    // 0cd142  pop edi
    X86_AT(c, 0xcd142u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0cd143  pop esi
    X86_AT(c, 0xcd143u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0cd144  pop ebx
    X86_AT(c, 0xcd144u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0cd145  leave 
    X86_AT(c, 0xcd145u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0cd146  ret 
    X86_AT(c, 0xcd146u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xcd0a4u, "ran off the end of a function");
}
void f_000cd142(X86Cpu& c) {
    X86_TICK(c, 28);
    // 0cd142  pop edi
    X86_AT(c, 0xcd142u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0cd143  pop esi
    X86_AT(c, 0xcd143u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0cd144  pop ebx
    X86_AT(c, 0xcd144u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0cd145  leave 
    X86_AT(c, 0xcd145u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0cd146  ret 
    X86_AT(c, 0xcd146u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xcd142u, "ran off the end of a function");
}
void f_000cd148(X86Cpu& c) {
    X86_TICK(c, 21);
    // 0cd148  push ebp
    X86_AT(c, 0xcd148u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0cd149  mov ebp, esp
    X86_AT(c, 0xcd149u);
    c.r[5] = c.r[4];
    // 0cd14b  sub esp, 8
    X86_AT(c, 0xcd14bu);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, 0x8u, 0, 4); }
    // 0cd14e  push ebx
    X86_AT(c, 0xcd14eu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0cd14f  push esi
    X86_AT(c, 0xcd14fu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0cd150  push edi
    X86_AT(c, 0xcd150u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0cd151  push 7
    X86_AT(c, 0xcd151u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cd153  call 0xbb6b0
    X86_AT(c, 0xcd153u);
    push32(c, 0xcd158u); x86_call_known(c, 0xbb6b0u, f_000bb6b0); X86_RET(c, 0xcd158u);
    X86_TICK(c, 9);
    // 0cd158  push 0x3c
    X86_AT(c, 0xcd158u);
    { uint32_t v = 0x3Cu; push32(c, v); }
    // 0cd15a  call 0xb61b4
    X86_AT(c, 0xcd15au);
    push32(c, 0xcd15fu); x86_call_known(c, 0xb61b4u, f_000b61b4); X86_RET(c, 0xcd15fu);
    X86_TICK(c, 19);
    // 0cd15f  xchg edi, eax
    X86_AT(c, 0xcd15fu);
    { uint32_t t = c.r[7]; c.r[7] = c.r[0]; c.r[0] = t; }
    // 0cd160  add edi, 0x1e
    X86_AT(c, 0xcd160u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x1Eu, 0, 4); }
    // 0cd163  add esp, 8
    X86_AT(c, 0xcd163u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0cd166  cmp dword ptr [0xa4a56], 1
    X86_AT(c, 0xcd166u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xA4A56u))), 0x1u, 0, 4);
    // 0cd16d  jne 0xcd188
    X86_AT(c, 0xcd16du);
    if (x86_cc(c, 5)) { goto L_cd188; }
    X86_TICK(c, 9);
    // 0cd16f  push 0x1e
    X86_AT(c, 0xcd16fu);
    { uint32_t v = 0x1Eu; push32(c, v); }
    // 0cd171  call 0xb61b4
    X86_AT(c, 0xcd171u);
    push32(c, 0xcd176u); x86_call_known(c, 0xb61b4u, f_000b61b4); X86_RET(c, 0xcd176u);
    X86_TICK(c, 14);
    // 0cd176  add eax, edi
    X86_AT(c, 0xcd176u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, c.r[7], 0, 4); }
    // 0cd178  mov edi, dword ptr [0xa4a52]
    X86_AT(c, 0xcd178u);
    c.r[7] = rd32((c.sbase[3] + (uint32_t)(0xA4A52u)));
    // 0cd17e  lea edi, [edi + edi*4]
    X86_AT(c, 0xcd17eu);
    c.r[7] = (uint32_t)(c.r[7] + c.r[7] * 4);
    // 0cd181  add edi, edi
    X86_AT(c, 0xcd181u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, c.r[7], 0, 4); }
    // 0cd183  add edi, eax
    X86_AT(c, 0xcd183u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, c.r[0], 0, 4); }
    // 0cd185  add esp, 4
    X86_AT(c, 0xcd185u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
L_cd188:
    X86_TICK(c, 9);
    // 0cd188  push 2
    X86_AT(c, 0xcd188u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0cd18a  call 0xb607c
    X86_AT(c, 0xcd18au);
    push32(c, 0xcd18fu); x86_call_known(c, 0xb607cu, f_000b607c); X86_RET(c, 0xcd18fu);
    X86_TICK(c, 9);
    // 0cd18f  push 2
    X86_AT(c, 0xcd18fu);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0cd191  call 0xbebbc
    X86_AT(c, 0xcd191u);
    push32(c, 0xcd196u); x86_call_known(c, 0xbebbcu, f_000bebbc); X86_RET(c, 0xcd196u);
    X86_TICK(c, 14);
    // 0cd196  push edi
    X86_AT(c, 0xcd196u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0cd197  push dword ptr [ebp + 8]
    X86_AT(c, 0xcd197u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, v); }
    // 0cd19a  call 0xc79f4
    X86_AT(c, 0xcd19au);
    push32(c, 0xcd19fu); x86_call_known(c, 0xc79f4u, f_000c79f4); X86_RET(c, 0xcd19fu);
    X86_TICK(c, 11);
    // 0cd19f  push 0x8af4
    X86_AT(c, 0xcd19fu);
    { uint32_t v = 0x8AF4u; push32(c, v); }
    // 0cd1a4  push 7
    X86_AT(c, 0xcd1a4u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cd1a6  call 0xba428
    X86_AT(c, 0xcd1a6u);
    push32(c, 0xcd1abu); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xcd1abu);
    X86_TICK(c, 13);
    // 0cd1ab  push 3
    X86_AT(c, 0xcd1abu);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0cd1ad  push edi
    X86_AT(c, 0xcd1adu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0cd1ae  push 7
    X86_AT(c, 0xcd1aeu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cd1b0  call 0xba404
    X86_AT(c, 0xcd1b0u);
    push32(c, 0xcd1b5u); x86_call_known(c, 0xba404u, f_000ba404); X86_RET(c, 0xcd1b5u);
    X86_TICK(c, 11);
    // 0cd1b5  push 0x8b0c
    X86_AT(c, 0xcd1b5u);
    { uint32_t v = 0x8B0Cu; push32(c, v); }
    // 0cd1ba  push 7
    X86_AT(c, 0xcd1bau);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cd1bc  call 0xba428
    X86_AT(c, 0xcd1bcu);
    push32(c, 0xcd1c1u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xcd1c1u);
    X86_TICK(c, 9);
    // 0cd1c1  push 7
    X86_AT(c, 0xcd1c1u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cd1c3  call 0xbbb5c
    X86_AT(c, 0xcd1c3u);
    push32(c, 0xcd1c8u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xcd1c8u);
    X86_TICK(c, 9);
    // 0cd1c8  push 3
    X86_AT(c, 0xcd1c8u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0cd1ca  call 0xb61b4
    X86_AT(c, 0xcd1cau);
    push32(c, 0xcd1cfu); x86_call_known(c, 0xb61b4u, f_000b61b4); X86_RET(c, 0xcd1cfu);
    X86_TICK(c, 9);
    // 0cd1cf  add esp, 0x34
    X86_AT(c, 0xcd1cfu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x34u, 0, 4); }
    // 0cd1d2  and eax, eax
    X86_AT(c, 0xcd1d2u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0cd1d4  je 0xcd318
    X86_AT(c, 0xcd1d4u);
    if (x86_cc(c, 4)) { goto L_cd318; }
    X86_TICK(c, 13);
    // 0cd1da  mov byte ptr [ebp - 5], 0
    X86_AT(c, 0xcd1dau);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFBu)), 0x0u);
    // 0cd1de  sub ebx, ebx
    X86_AT(c, 0xcd1deu);
    { uint32_t v = c.r[3]; c.r[3] = x86_sub(c, v, c.r[3], 0, 4); }
    // 0cd1e0  push 0xff
    X86_AT(c, 0xcd1e0u);
    { uint32_t v = 0xFFu; push32(c, v); }
    // 0cd1e5  call 0xb61b4
    X86_AT(c, 0xcd1e5u);
    push32(c, 0xcd1eau); x86_call_known(c, 0xb61b4u, f_000b61b4); X86_RET(c, 0xcd1eau);
    X86_TICK(c, 12);
    // 0cd1ea  xchg esi, eax
    X86_AT(c, 0xcd1eau);
    { uint32_t t = c.r[6]; c.r[6] = c.r[0]; c.r[0] = t; }
    // 0cd1eb  add esp, 4
    X86_AT(c, 0xcd1ebu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0cd1ee  cmp esi, 0x80
    X86_AT(c, 0xcd1eeu);
    (void)x86_sub(c, c.r[6], 0x80u, 0, 4);
    // 0cd1f4  jge 0xcd28f
    X86_AT(c, 0xcd1f4u);
    if (x86_cc(c, 13)) { goto L_cd28f; }
    X86_TICK(c, 9);
    // 0cd1fa  push 0xff
    X86_AT(c, 0xcd1fau);
    { uint32_t v = 0xFFu; push32(c, v); }
    // 0cd1ff  call 0xb61b4
    X86_AT(c, 0xcd1ffu);
    push32(c, 0xcd204u); x86_call_known(c, 0xb61b4u, f_000b61b4); X86_RET(c, 0xcd204u);
    X86_TICK(c, 18);
    // 0cd204  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0xcd204u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
    // 0cd207  and eax, esi
    X86_AT(c, 0xcd207u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[6], 4); }
    // 0cd209  and eax, 7
    X86_AT(c, 0xcd209u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x7u, 4); }
    // 0cd20e  xchg esi, eax
    X86_AT(c, 0xcd20eu);
    { uint32_t t = c.r[6]; c.r[6] = c.r[0]; c.r[0] = t; }
    // 0cd20f  add esp, 4
    X86_AT(c, 0xcd20fu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0cd212  and esi, esi
    X86_AT(c, 0xcd212u);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & c.r[6], 4); }
    // 0cd214  je 0xcd28f
    X86_AT(c, 0xcd214u);
    if (x86_cc(c, 4)) { goto L_cd28f; }
    X86_TICK(c, 15);
    // 0cd216  mov ebx, esi
    X86_AT(c, 0xcd216u);
    c.r[3] = c.r[6];
    // 0cd218  add bl, 0x41
    X86_AT(c, 0xcd218u);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_add(c, v, 0x41u, 0, 1)); }
    // 0cd21b  push 0x8b18
    X86_AT(c, 0xcd21bu);
    { uint32_t v = 0x8B18u; push32(c, v); }
    // 0cd220  push 7
    X86_AT(c, 0xcd220u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cd222  call 0xba428
    X86_AT(c, 0xcd222u);
    push32(c, 0xcd227u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xcd227u);
    X86_TICK(c, 17);
    // 0cd227  lea eax, [ebp - 5]
    X86_AT(c, 0xcd227u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFFBu);
    // 0cd22a  push eax
    X86_AT(c, 0xcd22au);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0cd22b  push ebx
    X86_AT(c, 0xcd22bu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0cd22c  push 8
    X86_AT(c, 0xcd22cu);
    { uint32_t v = 0x8u; push32(c, v); }
    // 0cd22e  push 0xa6bac
    X86_AT(c, 0xcd22eu);
    { uint32_t v = 0xA6BACu; push32(c, v); }
    // 0cd233  call 0xba1b4
    X86_AT(c, 0xcd233u);
    push32(c, 0xcd238u); x86_call_known(c, 0xba1b4u, f_000ba1b4); X86_RET(c, 0xcd238u);
    X86_TICK(c, 11);
    // 0cd238  push eax
    X86_AT(c, 0xcd238u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0cd239  push 7
    X86_AT(c, 0xcd239u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cd23b  call 0xbbba4
    X86_AT(c, 0xcd23bu);
    push32(c, 0xcd240u); x86_call_known(c, 0xbbba4u, f_000bbba4); X86_RET(c, 0xcd240u);
    X86_TICK(c, 13);
    // 0cd240  add esp, 0x20
    X86_AT(c, 0xcd240u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x20u, 0, 4); }
    // 0cd243  push 0x8b28
    X86_AT(c, 0xcd243u);
    { uint32_t v = 0x8B28u; push32(c, v); }
    // 0cd248  push 7
    X86_AT(c, 0xcd248u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cd24a  call 0xba428
    X86_AT(c, 0xcd24au);
    push32(c, 0xcd24fu); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xcd24fu);
    X86_TICK(c, 9);
    // 0cd24f  push 7
    X86_AT(c, 0xcd24fu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cd251  call 0xbbb5c
    X86_AT(c, 0xcd251u);
    push32(c, 0xcd256u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xcd256u);
    X86_TICK(c, 27);
    // 0cd256  mov eax, dword ptr [ebp + 8]
    X86_AT(c, 0xcd256u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0cd259  lea edx, [eax + eax*2]
    X86_AT(c, 0xcd259u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0cd25c  shl edx, 5
    X86_AT(c, 0xcd25cu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0cd25f  add edx, eax
    X86_AT(c, 0xcd25fu);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0cd261  lea edx, [eax + edx*2]
    X86_AT(c, 0xcd261u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0cd264  add esp, 0xc
    X86_AT(c, 0xcd264u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0cd267  cmp dword ptr [edx + esi*4 + 0xa4b1b], 0x63
    X86_AT(c, 0xcd267u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[2] + c.r[6] * 4 + 0xA4B1Bu))), 0x63u, 0, 4);
    // 0cd26f  jge 0xcd318
    X86_AT(c, 0xcd26fu);
    if (x86_cc(c, 13)) { goto L_cd318; }
    X86_TICK(c, 26);
    // 0cd275  mov eax, dword ptr [ebp + 8]
    X86_AT(c, 0xcd275u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0cd278  lea edx, [eax + eax*2]
    X86_AT(c, 0xcd278u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0cd27b  shl edx, 5
    X86_AT(c, 0xcd27bu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0cd27e  add edx, eax
    X86_AT(c, 0xcd27eu);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0cd280  lea edx, [eax + edx*2]
    X86_AT(c, 0xcd280u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0cd283  inc dword ptr [edx + esi*4 + 0xa4b1b]
    X86_AT(c, 0xcd283u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[2] + c.r[6] * 4 + 0xA4B1Bu)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0cd28a  jmp 0xcd318
    X86_AT(c, 0xcd28au);
    goto L_cd318;
L_cd28f:
    X86_TICK(c, 9);
    // 0cd28f  push 0xff
    X86_AT(c, 0xcd28fu);
    { uint32_t v = 0xFFu; push32(c, v); }
    // 0cd294  call 0xb61b4
    X86_AT(c, 0xcd294u);
    push32(c, 0xcd299u); x86_call_known(c, 0xb61b4u, f_000b61b4); X86_RET(c, 0xcd299u);
    X86_TICK(c, 18);
    // 0cd299  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0xcd299u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
    // 0cd29c  and eax, esi
    X86_AT(c, 0xcd29cu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[6], 4); }
    // 0cd29e  and eax, 3
    X86_AT(c, 0xcd29eu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x3u, 4); }
    // 0cd2a3  xchg esi, eax
    X86_AT(c, 0xcd2a3u);
    { uint32_t t = c.r[6]; c.r[6] = c.r[0]; c.r[0] = t; }
    // 0cd2a4  add esp, 4
    X86_AT(c, 0xcd2a4u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0cd2a7  and esi, esi
    X86_AT(c, 0xcd2a7u);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & c.r[6], 4); }
    // 0cd2a9  je 0xcd318
    X86_AT(c, 0xcd2a9u);
    if (x86_cc(c, 4)) { goto L_cd318; }
    X86_TICK(c, 15);
    // 0cd2ab  mov ebx, esi
    X86_AT(c, 0xcd2abu);
    c.r[3] = c.r[6];
    // 0cd2ad  add bl, 0x41
    X86_AT(c, 0xcd2adu);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_add(c, v, 0x41u, 0, 1)); }
    // 0cd2b0  push 0x8b34
    X86_AT(c, 0xcd2b0u);
    { uint32_t v = 0x8B34u; push32(c, v); }
    // 0cd2b5  push 7
    X86_AT(c, 0xcd2b5u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cd2b7  call 0xba428
    X86_AT(c, 0xcd2b7u);
    push32(c, 0xcd2bcu); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xcd2bcu);
    X86_TICK(c, 17);
    // 0cd2bc  lea eax, [ebp - 5]
    X86_AT(c, 0xcd2bcu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFFBu);
    // 0cd2bf  push eax
    X86_AT(c, 0xcd2bfu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0cd2c0  push ebx
    X86_AT(c, 0xcd2c0u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0cd2c1  push 4
    X86_AT(c, 0xcd2c1u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0cd2c3  push 0xa74f4
    X86_AT(c, 0xcd2c3u);
    { uint32_t v = 0xA74F4u; push32(c, v); }
    // 0cd2c8  call 0xba1b4
    X86_AT(c, 0xcd2c8u);
    push32(c, 0xcd2cdu); x86_call_known(c, 0xba1b4u, f_000ba1b4); X86_RET(c, 0xcd2cdu);
    X86_TICK(c, 11);
    // 0cd2cd  push eax
    X86_AT(c, 0xcd2cdu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0cd2ce  push 7
    X86_AT(c, 0xcd2ceu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cd2d0  call 0xbbba4
    X86_AT(c, 0xcd2d0u);
    push32(c, 0xcd2d5u); x86_call_known(c, 0xbbba4u, f_000bbba4); X86_RET(c, 0xcd2d5u);
    X86_TICK(c, 11);
    // 0cd2d5  push 0x8b44
    X86_AT(c, 0xcd2d5u);
    { uint32_t v = 0x8B44u; push32(c, v); }
    // 0cd2da  push 7
    X86_AT(c, 0xcd2dau);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cd2dc  call 0xba428
    X86_AT(c, 0xcd2dcu);
    push32(c, 0xcd2e1u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xcd2e1u);
    X86_TICK(c, 9);
    // 0cd2e1  push 7
    X86_AT(c, 0xcd2e1u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cd2e3  call 0xbbb5c
    X86_AT(c, 0xcd2e3u);
    push32(c, 0xcd2e8u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xcd2e8u);
    X86_TICK(c, 27);
    // 0cd2e8  mov eax, dword ptr [ebp + 8]
    X86_AT(c, 0xcd2e8u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0cd2eb  lea edx, [eax + eax*2]
    X86_AT(c, 0xcd2ebu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0cd2ee  shl edx, 5
    X86_AT(c, 0xcd2eeu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0cd2f1  add edx, eax
    X86_AT(c, 0xcd2f1u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0cd2f3  lea edx, [eax + edx*2]
    X86_AT(c, 0xcd2f3u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0cd2f6  add esp, 0x2c
    X86_AT(c, 0xcd2f6u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x2Cu, 0, 4); }
    // 0cd2f9  cmp dword ptr [edx + esi*4 + 0xa4afa], 0x63
    X86_AT(c, 0xcd2f9u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[2] + c.r[6] * 4 + 0xA4AFAu))), 0x63u, 0, 4);
    // 0cd301  jge 0xcd318
    X86_AT(c, 0xcd301u);
    if (x86_cc(c, 13)) { goto L_cd318; }
    X86_TICK(c, 19);
    // 0cd303  mov eax, dword ptr [ebp + 8]
    X86_AT(c, 0xcd303u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0cd306  lea edx, [eax + eax*2]
    X86_AT(c, 0xcd306u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0cd309  shl edx, 5
    X86_AT(c, 0xcd309u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0cd30c  add edx, eax
    X86_AT(c, 0xcd30cu);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0cd30e  lea edx, [eax + edx*2]
    X86_AT(c, 0xcd30eu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0cd311  inc dword ptr [edx + esi*4 + 0xa4afa]
    X86_AT(c, 0xcd311u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[2] + c.r[6] * 4 + 0xA4AFAu)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
L_cd318:
    X86_TICK(c, 28);
    // 0cd318  pop edi
    X86_AT(c, 0xcd318u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0cd319  pop esi
    X86_AT(c, 0xcd319u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0cd31a  pop ebx
    X86_AT(c, 0xcd31au);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0cd31b  leave 
    X86_AT(c, 0xcd31bu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0cd31c  ret 
    X86_AT(c, 0xcd31cu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xcd148u, "ran off the end of a function");
}
void f_000cd320(X86Cpu& c) {
    X86_TICK(c, 21);
    // 0cd320  push ebp
    X86_AT(c, 0xcd320u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0cd321  mov ebp, esp
    X86_AT(c, 0xcd321u);
    c.r[5] = c.r[4];
    // 0cd323  sub esp, 0xc
    X86_AT(c, 0xcd323u);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, 0xCu, 0, 4); }
    // 0cd326  push ebx
    X86_AT(c, 0xcd326u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0cd327  push esi
    X86_AT(c, 0xcd327u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0cd328  push edi
    X86_AT(c, 0xcd328u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0cd329  push 7
    X86_AT(c, 0xcd329u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cd32b  call 0xbb6b0
    X86_AT(c, 0xcd32bu);
    push32(c, 0xcd330u); x86_call_known(c, 0xbb6b0u, f_000bb6b0); X86_RET(c, 0xcd330u);
    X86_TICK(c, 11);
    // 0cd330  push 0x8b50
    X86_AT(c, 0xcd330u);
    { uint32_t v = 0x8B50u; push32(c, v); }
    // 0cd335  push 7
    X86_AT(c, 0xcd335u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cd337  call 0xba428
    X86_AT(c, 0xcd337u);
    push32(c, 0xcd33cu); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xcd33cu);
    X86_TICK(c, 9);
    // 0cd33c  push 7
    X86_AT(c, 0xcd33cu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cd33e  call 0xbbb5c
    X86_AT(c, 0xcd33eu);
    push32(c, 0xcd343u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xcd343u);
    X86_TICK(c, 14);
    // 0cd343  add esp, 0x10
    X86_AT(c, 0xcd343u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0cd346  cmp dword ptr [0xa4a56], 2
    X86_AT(c, 0xcd346u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xA4A56u))), 0x2u, 0, 4);
    // 0cd34d  jne 0xcd360
    X86_AT(c, 0xcd34du);
    if (x86_cc(c, 5)) { goto L_cd360; }
    X86_TICK(c, 9);
    // 0cd34f  push 1
    X86_AT(c, 0xcd34fu);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0cd351  call 0xb607c
    X86_AT(c, 0xcd351u);
    push32(c, 0xcd356u); x86_call_known(c, 0xb607cu, f_000b607c); X86_RET(c, 0xcd356u);
    X86_TICK(c, 9);
    // 0cd356  push 0x8b78
    X86_AT(c, 0xcd356u);
    { uint32_t v = 0x8B78u; push32(c, v); }
    // 0cd35b  jmp 0xcd427
    X86_AT(c, 0xcd35bu);
    goto L_cd427;
L_cd360:
    X86_TICK(c, 11);
    // 0cd360  push 0x8bb0
    X86_AT(c, 0xcd360u);
    { uint32_t v = 0x8BB0u; push32(c, v); }
    // 0cd365  push 7
    X86_AT(c, 0xcd365u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cd367  call 0xba428
    X86_AT(c, 0xcd367u);
    push32(c, 0xcd36cu); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xcd36cu);
    X86_TICK(c, 9);
    // 0cd36c  push 7
    X86_AT(c, 0xcd36cu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cd36e  call 0xbbb5c
    X86_AT(c, 0xcd36eu);
    push32(c, 0xcd373u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xcd373u);
    X86_TICK(c, 11);
    // 0cd373  push 0
    X86_AT(c, 0xcd373u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0cd375  push 7
    X86_AT(c, 0xcd375u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cd377  call 0xb6f28
    X86_AT(c, 0xcd377u);
    push32(c, 0xcd37cu); x86_call_known(c, 0xb6f28u, f_000b6f28); X86_RET(c, 0xcd37cu);
    X86_TICK(c, 12);
    // 0cd37c  xchg edi, eax
    X86_AT(c, 0xcd37cu);
    { uint32_t t = c.r[7]; c.r[7] = c.r[0]; c.r[0] = t; }
    // 0cd37d  add esp, 0x14
    X86_AT(c, 0xcd37du);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x14u, 0, 4); }
    // 0cd380  cmp edi, 0xffffffff
    X86_AT(c, 0xcd380u);
    (void)x86_sub(c, c.r[7], 0xFFFFFFFFu, 0, 4);
    // 0cd383  jne 0xcd3a0
    X86_AT(c, 0xcd383u);
    if (x86_cc(c, 5)) { goto L_cd3a0; }
    X86_TICK(c, 11);
    // 0cd385  push 0x8bd8
    X86_AT(c, 0xcd385u);
    { uint32_t v = 0x8BD8u; push32(c, v); }
    // 0cd38a  push 7
    X86_AT(c, 0xcd38au);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cd38c  call 0xba428
    X86_AT(c, 0xcd38cu);
    push32(c, 0xcd391u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xcd391u);
    X86_TICK(c, 9);
    // 0cd391  push 7
    X86_AT(c, 0xcd391u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cd393  call 0xbbb5c
    X86_AT(c, 0xcd393u);
    push32(c, 0xcd398u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xcd398u);
    X86_TICK(c, 9);
    // 0cd398  add esp, 0xc
    X86_AT(c, 0xcd398u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0cd39b  jmp 0xcd611
    X86_AT(c, 0xcd39bu);
    goto L_cd611;
L_cd3a0:
    X86_TICK(c, 12);
    // 0cd3a0  cmp dword ptr [0xa4a56], 1
    X86_AT(c, 0xcd3a0u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xA4A56u))), 0x1u, 0, 4);
    // 0cd3a7  jne 0xcd3f6
    X86_AT(c, 0xcd3a7u);
    if (x86_cc(c, 5)) { goto L_cd3f6; }
    X86_TICK(c, 25);
    // 0cd3a9  push dword ptr [0xa4a72]
    X86_AT(c, 0xcd3a9u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xA4A72u))); push32(c, v); }
    // 0cd3af  push dword ptr [0xa4a6e]
    X86_AT(c, 0xcd3afu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xA4A6Eu))); push32(c, v); }
    // 0cd3b5  mov eax, dword ptr [0xa4a52]
    X86_AT(c, 0xcd3b5u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xA4A52u)));
    // 0cd3ba  dec eax
    X86_AT(c, 0xcd3bau);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 0cd3bb  push eax
    X86_AT(c, 0xcd3bbu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0cd3bc  call 0xc6038
    X86_AT(c, 0xcd3bcu);
    push32(c, 0xcd3c1u); x86_call_known(c, 0xc6038u, f_000c6038); X86_RET(c, 0xcd3c1u);
    X86_TICK(c, 12);
    // 0cd3c1  xchg esi, eax
    X86_AT(c, 0xcd3c1u);
    { uint32_t t = c.r[6]; c.r[6] = c.r[0]; c.r[0] = t; }
    // 0cd3c2  add esp, 0xc
    X86_AT(c, 0xcd3c2u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0cd3c5  cmp esi, 4
    X86_AT(c, 0xcd3c5u);
    (void)x86_sub(c, c.r[6], 0x4u, 0, 4);
    // 0cd3c8  je 0xcd3d8
    X86_AT(c, 0xcd3c8u);
    if (x86_cc(c, 4)) { goto L_cd3d8; }
    X86_TICK(c, 9);
    // 0cd3ca  push 3
    X86_AT(c, 0xcd3cau);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0cd3cc  call 0xb607c
    X86_AT(c, 0xcd3ccu);
    push32(c, 0xcd3d1u); x86_call_known(c, 0xb607cu, f_000b607c); X86_RET(c, 0xcd3d1u);
    X86_TICK(c, 9);
    // 0cd3d1  push 0x8bf0
    X86_AT(c, 0xcd3d1u);
    { uint32_t v = 0x8BF0u; push32(c, v); }
    // 0cd3d6  jmp 0xcd427
    X86_AT(c, 0xcd3d6u);
    goto L_cd427;
L_cd3d8:
    X86_TICK(c, 24);
    // 0cd3d8  push dword ptr [0xa4a72]
    X86_AT(c, 0xcd3d8u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xA4A72u))); push32(c, v); }
    // 0cd3de  push dword ptr [0xa4a6e]
    X86_AT(c, 0xcd3deu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xA4A6Eu))); push32(c, v); }
    // 0cd3e4  push dword ptr [0xa4a52]
    X86_AT(c, 0xcd3e4u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xA4A52u))); push32(c, v); }
    // 0cd3ea  push 0
    X86_AT(c, 0xcd3eau);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0cd3ec  call 0xc604c
    X86_AT(c, 0xcd3ecu);
    push32(c, 0xcd3f1u); x86_call_known(c, 0xc604cu, f_000c604c); X86_RET(c, 0xcd3f1u);
    X86_TICK(c, 9);
    // 0cd3f1  add esp, 0x10
    X86_AT(c, 0xcd3f1u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0cd3f4  jmp 0xcd44c
    X86_AT(c, 0xcd3f4u);
    goto L_cd44c;
L_cd3f6:
    X86_TICK(c, 23);
    // 0cd3f6  mov eax, dword ptr [0xa4a76]
    X86_AT(c, 0xcd3f6u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xA4A76u)));
    // 0cd3fb  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0xcd3fbu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
    // 0cd3fe  mov edx, dword ptr [0xa4a7a]
    X86_AT(c, 0xcd3feu);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(0xA4A7Au)));
    // 0cd404  mov dword ptr [ebp - 8], edx
    X86_AT(c, 0xcd404u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), c.r[2]);
    // 0cd407  push edx
    X86_AT(c, 0xcd407u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0cd408  push eax
    X86_AT(c, 0xcd408u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0cd409  call 0xc735c
    X86_AT(c, 0xcd409u);
    push32(c, 0xcd40eu); x86_call_known(c, 0xc735cu, f_000c735c); X86_RET(c, 0xcd40eu);
    X86_TICK(c, 17);
    // 0cd40e  xchg esi, eax
    X86_AT(c, 0xcd40eu);
    { uint32_t t = c.r[6]; c.r[6] = c.r[0]; c.r[0] = t; }
    // 0cd40f  add esp, 8
    X86_AT(c, 0xcd40fu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0cd412  cmp byte ptr [esi + 0xa5ce8], 0x80
    X86_AT(c, 0xcd412u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[6] + 0xA5CE8u))), 0x80u, 0, 1);
    // 0cd419  je 0xcd43d
    X86_AT(c, 0xcd419u);
    if (x86_cc(c, 4)) { goto L_cd43d; }
    X86_TICK(c, 9);
    // 0cd41b  push 3
    X86_AT(c, 0xcd41bu);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0cd41d  call 0xb607c
    X86_AT(c, 0xcd41du);
    push32(c, 0xcd422u); x86_call_known(c, 0xb607cu, f_000b607c); X86_RET(c, 0xcd422u);
    X86_TICK(c, 2);
    // 0cd422  push 0x8c14
    X86_AT(c, 0xcd422u);
    { uint32_t v = 0x8C14u; push32(c, v); }
L_cd427:
    X86_TICK(c, 9);
    // 0cd427  push 7
    X86_AT(c, 0xcd427u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cd429  call 0xba428
    X86_AT(c, 0xcd429u);
    push32(c, 0xcd42eu); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xcd42eu);
    X86_TICK(c, 9);
    // 0cd42e  push 7
    X86_AT(c, 0xcd42eu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cd430  call 0xbbb5c
    X86_AT(c, 0xcd430u);
    push32(c, 0xcd435u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xcd435u);
    X86_TICK(c, 9);
    // 0cd435  add esp, 0x10
    X86_AT(c, 0xcd435u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0cd438  jmp 0xcd611
    X86_AT(c, 0xcd438u);
    goto L_cd611;
L_cd43d:
    X86_TICK(c, 6);
    // 0cd43d  sub eax, eax
    X86_AT(c, 0xcd43du);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0cd43f  mov byte ptr [esi + 0xa5ce8], al
    X86_AT(c, 0xcd43fu);
    wr8((c.sbase[3] + (uint32_t)(c.r[6] + 0xA5CE8u)), g8(c, 0));
    // 0cd445  mov dword ptr [esi*4 + 0xa6074], eax
    X86_AT(c, 0xcd445u);
    wr32((c.sbase[3] + (uint32_t)(c.r[6] * 4 + 0xA6074u)), c.r[0]);
L_cd44c:
    X86_TICK(c, 9);
    // 0cd44c  push 9
    X86_AT(c, 0xcd44cu);
    { uint32_t v = 0x9u; push32(c, v); }
    // 0cd44e  call 0xb61b4
    X86_AT(c, 0xcd44eu);
    push32(c, 0xcd453u); x86_call_known(c, 0xb61b4u, f_000b61b4); X86_RET(c, 0xcd453u);
    X86_TICK(c, 9);
    // 0cd453  add esp, 4
    X86_AT(c, 0xcd453u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0cd456  cmp eax, 5
    X86_AT(c, 0xcd456u);
    (void)x86_sub(c, c.r[0], 0x5u, 0, 4);
    // 0cd459  jge 0xcd469
    X86_AT(c, 0xcd459u);
    if (x86_cc(c, 13)) { goto L_cd469; }
    X86_TICK(c, 9);
    // 0cd45b  push edi
    X86_AT(c, 0xcd45bu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0cd45c  call 0xcd148
    X86_AT(c, 0xcd45cu);
    push32(c, 0xcd461u); x86_call_known(c, 0xcd148u, f_000cd148); X86_RET(c, 0xcd461u);
    X86_TICK(c, 9);
    // 0cd461  add esp, 4
    X86_AT(c, 0xcd461u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0cd464  jmp 0xcd611
    X86_AT(c, 0xcd464u);
    goto L_cd611;
L_cd469:
    X86_TICK(c, 9);
    // 0cd469  push 0xff
    X86_AT(c, 0xcd469u);
    { uint32_t v = 0xFFu; push32(c, v); }
    // 0cd46e  call 0xb61b4
    X86_AT(c, 0xcd46eu);
    push32(c, 0xcd473u); x86_call_known(c, 0xb61b4u, f_000b61b4); X86_RET(c, 0xcd473u);
    X86_TICK(c, 12);
    // 0cd473  xchg esi, eax
    X86_AT(c, 0xcd473u);
    { uint32_t t = c.r[6]; c.r[6] = c.r[0]; c.r[0] = t; }
    // 0cd474  push 0xff
    X86_AT(c, 0xcd474u);
    { uint32_t v = 0xFFu; push32(c, v); }
    // 0cd479  call 0xb61b4
    X86_AT(c, 0xcd479u);
    push32(c, 0xcd47eu); x86_call_known(c, 0xb61b4u, f_000b61b4); X86_RET(c, 0xcd47eu);
    X86_TICK(c, 20);
    // 0cd47e  mov ebx, eax
    X86_AT(c, 0xcd47eu);
    c.r[3] = c.r[0];
    // 0cd480  and eax, esi
    X86_AT(c, 0xcd480u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[6], 4); }
    // 0cd482  and eax, 3
    X86_AT(c, 0xcd482u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x3u, 4); }
    // 0cd487  xchg esi, eax
    X86_AT(c, 0xcd487u);
    { uint32_t t = c.r[6]; c.r[6] = c.r[0]; c.r[0] = t; }
    // 0cd488  add esp, 8
    X86_AT(c, 0xcd488u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0cd48b  mov edx, esi
    X86_AT(c, 0xcd48bu);
    c.r[2] = c.r[6];
    // 0cd48d  cmp edx, 3
    X86_AT(c, 0xcd48du);
    (void)x86_sub(c, c.r[2], 0x3u, 0, 4);
    // 0cd490  ja 0xcd611
    X86_AT(c, 0xcd490u);
    if (x86_cc(c, 7)) { goto L_cd611; }
    X86_TICK(c, 7);
    // 0cd496  jmp dword ptr cs:[edx*4 + 0xcd49e]
    X86_AT(c, 0xcd496u);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xCD49Eu)));
      switch (t) {
      case 0xcd4aeu: goto L_cd4ae;
      case 0xcd509u: goto L_cd509;
      case 0xcd562u: goto L_cd562;
      case 0xcd5deu: goto L_cd5de;
      default: x86_jump(c, t); return; } }
L_cd4ae:
    X86_TICK(c, 11);
    // 0cd4ae  push 0x8c38
    X86_AT(c, 0xcd4aeu);
    { uint32_t v = 0x8C38u; push32(c, v); }
    // 0cd4b3  push 7
    X86_AT(c, 0xcd4b3u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cd4b5  call 0xba428
    X86_AT(c, 0xcd4b5u);
    push32(c, 0xcd4bau); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xcd4bau);
    X86_TICK(c, 9);
    // 0cd4ba  push 7
    X86_AT(c, 0xcd4bau);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cd4bc  call 0xbbb5c
    X86_AT(c, 0xcd4bcu);
    push32(c, 0xcd4c1u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xcd4c1u);
    X86_TICK(c, 9);
    // 0cd4c1  push 8
    X86_AT(c, 0xcd4c1u);
    { uint32_t v = 0x8u; push32(c, v); }
    // 0cd4c3  call 0xb607c
    X86_AT(c, 0xcd4c3u);
    push32(c, 0xcd4c8u); x86_call_known(c, 0xb607cu, f_000b607c); X86_RET(c, 0xcd4c8u);
    X86_TICK(c, 9);
    // 0cd4c8  push edi
    X86_AT(c, 0xcd4c8u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0cd4c9  call 0xcd618
    X86_AT(c, 0xcd4c9u);
    push32(c, 0xcd4ceu); x86_call_known(c, 0xcd618u, f_000cd618); X86_RET(c, 0xcd4ceu);
    X86_TICK(c, 9);
    // 0cd4ce  add esp, 0x14
    X86_AT(c, 0xcd4ceu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x14u, 0, 4); }
    // 0cd4d1  inc eax
    X86_AT(c, 0xcd4d1u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0cd4d2  je 0xcd602
    X86_AT(c, 0xcd4d2u);
    if (x86_cc(c, 4)) { goto L_cd602; }
    X86_TICK(c, 9);
    // 0cd4d8  push edi
    X86_AT(c, 0xcd4d8u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0cd4d9  call 0xc7f0c
    X86_AT(c, 0xcd4d9u);
    push32(c, 0xcd4deu); x86_call_known(c, 0xc7f0cu, f_000c7f0c); X86_RET(c, 0xcd4deu);
    X86_TICK(c, 9);
    // 0cd4de  push 2
    X86_AT(c, 0xcd4deu);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0cd4e0  call 0xbebbc
    X86_AT(c, 0xcd4e0u);
    push32(c, 0xcd4e5u); x86_call_known(c, 0xbebbcu, f_000bebbc); X86_RET(c, 0xcd4e5u);
    X86_TICK(c, 9);
    // 0cd4e5  push edi
    X86_AT(c, 0xcd4e5u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0cd4e6  call 0xc7f0c
    X86_AT(c, 0xcd4e6u);
    push32(c, 0xcd4ebu); x86_call_known(c, 0xc7f0cu, f_000c7f0c); X86_RET(c, 0xcd4ebu);
    X86_TICK(c, 9);
    // 0cd4eb  push 0xff
    X86_AT(c, 0xcd4ebu);
    { uint32_t v = 0xFFu; push32(c, v); }
    // 0cd4f0  call 0xb61b4
    X86_AT(c, 0xcd4f0u);
    push32(c, 0xcd4f5u); x86_call_known(c, 0xb61b4u, f_000b61b4); X86_RET(c, 0xcd4f5u);
    X86_TICK(c, 13);
    // 0cd4f5  and eax, 0x37
    X86_AT(c, 0xcd4f5u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x37u, 4); }
    // 0cd4fa  push eax
    X86_AT(c, 0xcd4fau);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0cd4fb  push edi
    X86_AT(c, 0xcd4fbu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0cd4fc  call 0xc9b10
    X86_AT(c, 0xcd4fcu);
    push32(c, 0xcd501u); x86_call_known(c, 0xc9b10u, f_000c9b10); X86_RET(c, 0xcd501u);
    X86_TICK(c, 9);
    // 0cd501  add esp, 0x18
    X86_AT(c, 0xcd501u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x18u, 0, 4); }
    // 0cd504  jmp 0xcd602
    X86_AT(c, 0xcd504u);
    goto L_cd602;
L_cd509:
    X86_TICK(c, 11);
    // 0cd509  push 0x8c70
    X86_AT(c, 0xcd509u);
    { uint32_t v = 0x8C70u; push32(c, v); }
    // 0cd50e  push 7
    X86_AT(c, 0xcd50eu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cd510  call 0xba428
    X86_AT(c, 0xcd510u);
    push32(c, 0xcd515u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xcd515u);
    X86_TICK(c, 9);
    // 0cd515  push 7
    X86_AT(c, 0xcd515u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cd517  call 0xbbb5c
    X86_AT(c, 0xcd517u);
    push32(c, 0xcd51cu); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xcd51cu);
    X86_TICK(c, 9);
    // 0cd51c  push 8
    X86_AT(c, 0xcd51cu);
    { uint32_t v = 0x8u; push32(c, v); }
    // 0cd51e  call 0xb607c
    X86_AT(c, 0xcd51eu);
    push32(c, 0xcd523u); x86_call_known(c, 0xb607cu, f_000b607c); X86_RET(c, 0xcd523u);
    X86_TICK(c, 9);
    // 0cd523  push edi
    X86_AT(c, 0xcd523u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0cd524  call 0xcd618
    X86_AT(c, 0xcd524u);
    push32(c, 0xcd529u); x86_call_known(c, 0xcd618u, f_000cd618); X86_RET(c, 0xcd529u);
    X86_TICK(c, 9);
    // 0cd529  add esp, 0x14
    X86_AT(c, 0xcd529u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x14u, 0, 4); }
    // 0cd52c  inc eax
    X86_AT(c, 0xcd52cu);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0cd52d  je 0xcd602
    X86_AT(c, 0xcd52du);
    if (x86_cc(c, 4)) { goto L_cd602; }
    X86_TICK(c, 9);
    // 0cd533  push edi
    X86_AT(c, 0xcd533u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0cd534  call 0xc7f0c
    X86_AT(c, 0xcd534u);
    push32(c, 0xcd539u); x86_call_known(c, 0xc7f0cu, f_000c7f0c); X86_RET(c, 0xcd539u);
    X86_TICK(c, 9);
    // 0cd539  push 2
    X86_AT(c, 0xcd539u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0cd53b  call 0xbebbc
    X86_AT(c, 0xcd53bu);
    push32(c, 0xcd540u); x86_call_known(c, 0xbebbcu, f_000bebbc); X86_RET(c, 0xcd540u);
    X86_TICK(c, 9);
    // 0cd540  push edi
    X86_AT(c, 0xcd540u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0cd541  call 0xc7f0c
    X86_AT(c, 0xcd541u);
    push32(c, 0xcd546u); x86_call_known(c, 0xc7f0cu, f_000c7f0c); X86_RET(c, 0xcd546u);
    X86_TICK(c, 22);
    // 0cd546  mov eax, edi
    X86_AT(c, 0xcd546u);
    c.r[0] = c.r[7];
    // 0cd548  lea edx, [eax + eax*2]
    X86_AT(c, 0xcd548u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0cd54b  shl edx, 5
    X86_AT(c, 0xcd54bu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0cd54e  add edx, eax
    X86_AT(c, 0xcd54eu);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0cd550  lea edx, [eax + edx*2]
    X86_AT(c, 0xcd550u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0cd553  mov byte ptr [edx + 0xa4abd], 0x50
    X86_AT(c, 0xcd553u);
    wr8((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4ABDu)), 0x50u);
    // 0cd55a  add esp, 0xc
    X86_AT(c, 0xcd55au);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0cd55d  jmp 0xcd602
    X86_AT(c, 0xcd55du);
    goto L_cd602;
L_cd562:
    X86_TICK(c, 11);
    // 0cd562  push 0x8cc0
    X86_AT(c, 0xcd562u);
    { uint32_t v = 0x8CC0u; push32(c, v); }
    // 0cd567  push 7
    X86_AT(c, 0xcd567u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cd569  call 0xba428
    X86_AT(c, 0xcd569u);
    push32(c, 0xcd56eu); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xcd56eu);
    X86_TICK(c, 9);
    // 0cd56e  push 7
    X86_AT(c, 0xcd56eu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cd570  call 0xbbb5c
    X86_AT(c, 0xcd570u);
    push32(c, 0xcd575u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xcd575u);
    X86_TICK(c, 9);
    // 0cd575  push edi
    X86_AT(c, 0xcd575u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0cd576  call 0xcd618
    X86_AT(c, 0xcd576u);
    push32(c, 0xcd57bu); x86_call_known(c, 0xcd618u, f_000cd618); X86_RET(c, 0xcd57bu);
    X86_TICK(c, 9);
    // 0cd57b  add esp, 0x10
    X86_AT(c, 0xcd57bu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0cd57e  inc eax
    X86_AT(c, 0xcd57eu);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0cd57f  je 0xcd602
    X86_AT(c, 0xcd57fu);
    if (x86_cc(c, 4)) { goto L_cd602; }
    X86_TICK(c, 2);
    // 0cd585  sub ebx, ebx
    X86_AT(c, 0xcd585u);
    { uint32_t v = c.r[3]; c.r[3] = x86_sub(c, v, c.r[3], 0, 4); }
L_cd587:
    X86_TICK(c, 7);
    // 0cd587  cmp ebx, 4
    X86_AT(c, 0xcd587u);
    (void)x86_sub(c, c.r[3], 0x4u, 0, 4);
    // 0cd58a  jge 0xcd602
    X86_AT(c, 0xcd58au);
    if (x86_cc(c, 13)) { goto L_cd602; }
    X86_TICK(c, 22);
    // 0cd590  mov eax, ebx
    X86_AT(c, 0xcd590u);
    c.r[0] = c.r[3];
    // 0cd592  lea edx, [eax + eax*2]
    X86_AT(c, 0xcd592u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0cd595  shl edx, 5
    X86_AT(c, 0xcd595u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0cd598  add edx, eax
    X86_AT(c, 0xcd598u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0cd59a  lea edx, [eax + edx*2]
    X86_AT(c, 0xcd59au);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0cd59d  mov al, byte ptr [edx + 0xa4abd]
    X86_AT(c, 0xcd59du);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4ABDu))));
    // 0cd5a3  cmp al, 0x44
    X86_AT(c, 0xcd5a3u);
    (void)x86_sub(c, g8(c, 0), 0x44u, 0, 1);
    // 0cd5a5  je 0xcd5db
    X86_AT(c, 0xcd5a5u);
    if (x86_cc(c, 4)) { goto L_cd5db; }
    X86_TICK(c, 7);
    // 0cd5a7  cmp al, 0x41
    X86_AT(c, 0xcd5a7u);
    (void)x86_sub(c, g8(c, 0), 0x41u, 0, 1);
    // 0cd5a9  je 0xcd5db
    X86_AT(c, 0xcd5a9u);
    if (x86_cc(c, 4)) { goto L_cd5db; }
    X86_TICK(c, 11);
    // 0cd5ab  push 8
    X86_AT(c, 0xcd5abu);
    { uint32_t v = 0x8u; push32(c, v); }
    // 0cd5ad  mov dword ptr [ebp - 0xc], edx
    X86_AT(c, 0xcd5adu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)), c.r[2]);
    // 0cd5b0  call 0xb607c
    X86_AT(c, 0xcd5b0u);
    push32(c, 0xcd5b5u); x86_call_known(c, 0xb607cu, f_000b607c); X86_RET(c, 0xcd5b5u);
    X86_TICK(c, 9);
    // 0cd5b5  push ebx
    X86_AT(c, 0xcd5b5u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0cd5b6  call 0xc7f0c
    X86_AT(c, 0xcd5b6u);
    push32(c, 0xcd5bbu); x86_call_known(c, 0xc7f0cu, f_000c7f0c); X86_RET(c, 0xcd5bbu);
    X86_TICK(c, 9);
    // 0cd5bb  push 2
    X86_AT(c, 0xcd5bbu);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0cd5bd  call 0xbebbc
    X86_AT(c, 0xcd5bdu);
    push32(c, 0xcd5c2u); x86_call_known(c, 0xbebbcu, f_000bebbc); X86_RET(c, 0xcd5c2u);
    X86_TICK(c, 9);
    // 0cd5c2  push ebx
    X86_AT(c, 0xcd5c2u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0cd5c3  call 0xc7f0c
    X86_AT(c, 0xcd5c3u);
    push32(c, 0xcd5c8u); x86_call_known(c, 0xc7f0cu, f_000c7f0c); X86_RET(c, 0xcd5c8u);
    X86_TICK(c, 15);
    // 0cd5c8  mov eax, dword ptr [ebp - 0xc]
    X86_AT(c, 0xcd5c8u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)));
    // 0cd5cb  mov byte ptr [eax + 0xa4abd], 0x50
    X86_AT(c, 0xcd5cbu);
    wr8((c.sbase[3] + (uint32_t)(c.r[0] + 0xA4ABDu)), 0x50u);
    // 0cd5d2  push ebx
    X86_AT(c, 0xcd5d2u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0cd5d3  call 0xbe720
    X86_AT(c, 0xcd5d3u);
    push32(c, 0xcd5d8u); x86_call_known(c, 0xbe720u, f_000be720); X86_RET(c, 0xcd5d8u);
    X86_TICK(c, 2);
    // 0cd5d8  add esp, 0x14
    X86_AT(c, 0xcd5d8u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x14u, 0, 4); }
L_cd5db:
    X86_TICK(c, 9);
    // 0cd5db  inc ebx
    X86_AT(c, 0xcd5dbu);
    { uint32_t v = c.r[3]; c.r[3] = x86_inc(c, v, 4); }
    // 0cd5dc  jmp 0xcd587
    X86_AT(c, 0xcd5dcu);
    X86_POLL(c, 0xcd587u); goto L_cd587;
L_cd5de:
    X86_TICK(c, 11);
    // 0cd5de  push 0x8cfc
    X86_AT(c, 0xcd5deu);
    { uint32_t v = 0x8CFCu; push32(c, v); }
    // 0cd5e3  push 7
    X86_AT(c, 0xcd5e3u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cd5e5  call 0xba428
    X86_AT(c, 0xcd5e5u);
    push32(c, 0xcd5eau); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xcd5eau);
    X86_TICK(c, 9);
    // 0cd5ea  push 7
    X86_AT(c, 0xcd5eau);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cd5ec  call 0xbbb5c
    X86_AT(c, 0xcd5ecu);
    push32(c, 0xcd5f1u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xcd5f1u);
    X86_TICK(c, 9);
    // 0cd5f1  push edi
    X86_AT(c, 0xcd5f1u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0cd5f2  call 0xcd618
    X86_AT(c, 0xcd5f2u);
    push32(c, 0xcd5f7u); x86_call_known(c, 0xcd618u, f_000cd618); X86_RET(c, 0xcd5f7u);
    X86_TICK(c, 9);
    // 0cd5f7  add esp, 0x10
    X86_AT(c, 0xcd5f7u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0cd5fa  inc eax
    X86_AT(c, 0xcd5fau);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0cd5fb  je 0xcd602
    X86_AT(c, 0xcd5fbu);
    if (x86_cc(c, 4)) { goto L_cd602; }
    X86_TICK(c, 7);
    // 0cd5fd  call 0xcd64c
    X86_AT(c, 0xcd5fdu);
    push32(c, 0xcd602u); x86_call_known(c, 0xcd64cu, f_000cd64c); X86_RET(c, 0xcd602u);
L_cd602:
    X86_TICK(c, 9);
    // 0cd602  push edi
    X86_AT(c, 0xcd602u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0cd603  call 0xcd148
    X86_AT(c, 0xcd603u);
    push32(c, 0xcd608u); x86_call_known(c, 0xcd148u, f_000cd148); X86_RET(c, 0xcd608u);
    X86_TICK(c, 9);
    // 0cd608  push edi
    X86_AT(c, 0xcd608u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0cd609  call 0xbe720
    X86_AT(c, 0xcd609u);
    push32(c, 0xcd60eu); x86_call_known(c, 0xbe720u, f_000be720); X86_RET(c, 0xcd60eu);
    X86_TICK(c, 2);
    // 0cd60e  add esp, 8
    X86_AT(c, 0xcd60eu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
L_cd611:
    X86_TICK(c, 28);
    // 0cd611  pop edi
    X86_AT(c, 0xcd611u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0cd612  pop esi
    X86_AT(c, 0xcd612u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0cd613  pop ebx
    X86_AT(c, 0xcd613u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0cd614  leave 
    X86_AT(c, 0xcd614u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0cd615  ret 
    X86_AT(c, 0xcd615u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xcd320u, "ran off the end of a function");
}
}

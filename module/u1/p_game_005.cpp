#include "p_game_funcs.h"
namespace p_game {
void f_000ccc28(X86Cpu& c) {
    X86_TICK(c, 9);
    // 0ccc28  push 0x247c
    X86_AT(c, 0xccc28u);
    { uint32_t v = 0x247Cu; push32(c, v); }
    // 0ccc2d  call 0xcc7bc
    X86_AT(c, 0xccc2du);
    push32(c, 0xccc32u); x86_call_known(c, 0xcc7bcu, f_000cc7bc); X86_RET(c, 0xccc32u);
    X86_TICK(c, 27);
    // 0ccc32  mov eax, dword ptr [0xb2304]
    X86_AT(c, 0xccc32u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xB2304u)));
    // 0ccc37  shl eax, 8
    X86_AT(c, 0xccc37u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 0ccc3a  mov edx, dword ptr [0xb2308]
    X86_AT(c, 0xccc3au);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(0xB2308u)));
    // 0ccc40  shl edx, 4
    X86_AT(c, 0xccc40u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[2] = r; }
    // 0ccc43  add edx, eax
    X86_AT(c, 0xccc43u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0ccc45  mov dword ptr [edx + 0xb233c], 0
    X86_AT(c, 0xccc45u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xB233Cu)), 0x0u);
    // 0ccc4f  mov dword ptr [edx + 0xb2334], 0
    X86_AT(c, 0xccc4fu);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xB2334u)), 0x0u);
    // 0ccc59  call 0xdb454
    X86_AT(c, 0xccc59u);
    push32(c, 0xccc5eu); x86_call_known(c, 0xdb454u, f_000db454); X86_RET(c, 0xccc5eu);
    X86_TICK(c, 14);
    // 0ccc5e  add esp, 4
    X86_AT(c, 0xccc5eu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0ccc61  cmp dword ptr [0x43eb8], 0
    X86_AT(c, 0xccc61u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0x43EB8u))), 0x0u, 0, 4);
    // 0ccc68  jne 0xccc79
    X86_AT(c, 0xccc68u);
    if (x86_cc(c, 5)) { goto L_ccc79; }
    X86_TICK(c, 11);
    // 0ccc6a  push 0xf
    X86_AT(c, 0xccc6au);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0ccc6c  push 0x2498
    X86_AT(c, 0xccc6cu);
    { uint32_t v = 0x2498u; push32(c, v); }
    // 0ccc71  call 0xcc830
    X86_AT(c, 0xccc71u);
    push32(c, 0xccc76u); x86_call_known(c, 0xcc830u, f_000cc830); X86_RET(c, 0xccc76u);
    X86_TICK(c, 2);
    // 0ccc76  add esp, 8
    X86_AT(c, 0xccc76u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
L_ccc79:
    X86_TICK(c, 41);
    // 0ccc79  push 0
    X86_AT(c, 0xccc79u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0ccc7b  mov eax, dword ptr [0xb2328]
    X86_AT(c, 0xccc7bu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xB2328u)));
    // 0ccc80  mul eax
    X86_AT(c, 0xccc80u);
    x86_mul(c, c.r[0], 4);
    // 0ccc82  add eax, 9
    X86_AT(c, 0xccc82u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0x9u, 0, 4); }
    // 0ccc85  push eax
    X86_AT(c, 0xccc85u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ccc86  push 3
    X86_AT(c, 0xccc86u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0ccc88  call 0xc5df0
    X86_AT(c, 0xccc88u);
    push32(c, 0xccc8du); x86_call_known(c, 0xc5df0u, f_000c5df0); X86_RET(c, 0xccc8du);
    X86_TICK(c, 11);
    // 0ccc8d  add esp, 8
    X86_AT(c, 0xccc8du);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0ccc90  push eax
    X86_AT(c, 0xccc90u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ccc91  call 0xcc8b8
    X86_AT(c, 0xccc91u);
    push32(c, 0xccc96u); x86_call_known(c, 0xcc8b8u, f_000cc8b8); X86_RET(c, 0xccc96u);
    X86_TICK(c, 12);
    // 0ccc96  add esp, 8
    X86_AT(c, 0xccc96u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0ccc99  ret 
    X86_AT(c, 0xccc99u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xccc28u, "ran off the end of a function");
}
void f_000ccc9c(X86Cpu& c) {
    X86_TICK(c, 23);
    // 0ccc9c  push ebp
    X86_AT(c, 0xccc9cu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0ccc9d  mov ebp, esp
    X86_AT(c, 0xccc9du);
    c.r[5] = c.r[4];
    // 0ccc9f  push ebx
    X86_AT(c, 0xccc9fu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0ccca0  push esi
    X86_AT(c, 0xccca0u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0ccca1  push edi
    X86_AT(c, 0xccca1u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0ccca2  sub edi, edi
    X86_AT(c, 0xccca2u);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
    // 0ccca4  cmp edi, dword ptr [ebp + 0xc]
    X86_AT(c, 0xccca4u);
    (void)x86_sub(c, c.r[7], rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))), 0, 4);
    // 0ccca7  je 0xcccbb
    X86_AT(c, 0xccca7u);
    if (x86_cc(c, 4)) { goto L_cccbb; }
    X86_TICK(c, 16);
    // 0ccca9  mov eax, dword ptr [ebp + 8]
    X86_AT(c, 0xccca9u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0cccac  push dword ptr [eax*4 + 0xab144]
    X86_AT(c, 0xcccacu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[0] * 4 + 0xAB144u))); push32(c, v); }
    // 0cccb3  call 0xcc7bc
    X86_AT(c, 0xcccb3u);
    push32(c, 0xcccb8u); x86_call_known(c, 0xcc7bcu, f_000cc7bc); X86_RET(c, 0xcccb8u);
    X86_TICK(c, 2);
    // 0cccb8  add esp, 4
    X86_AT(c, 0xcccb8u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
L_cccbb:
    X86_TICK(c, 9);
    // 0cccbb  push 0x1e
    X86_AT(c, 0xcccbbu);
    { uint32_t v = 0x1Eu; push32(c, v); }
    // 0cccbd  call 0xd6660
    X86_AT(c, 0xcccbdu);
    push32(c, 0xcccc2u); x86_call_known(c, 0xd6660u, f_000d6660); X86_RET(c, 0xcccc2u);
    X86_TICK(c, 15);
    // 0cccc2  add esp, 4
    X86_AT(c, 0xcccc2u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0cccc5  mov edx, dword ptr [ebp + 8]
    X86_AT(c, 0xcccc5u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0cccc8  dec edx
    X86_AT(c, 0xcccc8u);
    { uint32_t v = c.r[2]; c.r[2] = x86_dec(c, v, 4); }
    // 0cccc9  cmp edx, 9
    X86_AT(c, 0xcccc9u);
    (void)x86_sub(c, c.r[2], 0x9u, 0, 4);
    // 0ccccc  ja 0xccf29
    X86_AT(c, 0xcccccu);
    if (x86_cc(c, 7)) { goto L_ccf29; }
    X86_TICK(c, 7);
    // 0cccd2  jmp dword ptr cs:[edx*4 + 0xcccda]
    X86_AT(c, 0xcccd2u);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xCCCDAu)));
      switch (t) {
      case 0xccd02u: goto L_ccd02;
      case 0xccd29u: goto L_ccd29;
      case 0xccd62u: goto L_ccd62;
      case 0xccd74u: goto L_ccd74;
      case 0xccddeu: goto L_ccdde;
      case 0xcce28u: goto L_cce28;
      case 0xcce8cu: goto L_cce8c;
      case 0xcceccu: goto L_ccecc;
      case 0xccefau: goto L_ccefa;
      case 0xccf29u: goto L_ccf29;
      default: x86_jump(c, t); return; } }
L_ccd02:
    X86_TICK(c, 28);
    // 0ccd02  mov eax, dword ptr [0xb2304]
    X86_AT(c, 0xccd02u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xB2304u)));
    // 0ccd07  shl eax, 8
    X86_AT(c, 0xccd07u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 0ccd0a  mov edx, dword ptr [0xb2308]
    X86_AT(c, 0xccd0au);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(0xB2308u)));
    // 0ccd10  shl edx, 4
    X86_AT(c, 0xccd10u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[2] = r; }
    // 0ccd13  add edx, eax
    X86_AT(c, 0xccd13u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0ccd15  cmp dword ptr [edx + 0xb233c], 5
    X86_AT(c, 0xccd15u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xB233Cu))), 0x5u, 0, 4);
    // 0ccd1c  jne 0xccf24
    X86_AT(c, 0xccd1cu);
    if (x86_cc(c, 5)) { goto L_ccf24; }
    X86_TICK(c, 9);
    // 0ccd22  push 0x24cc
    X86_AT(c, 0xccd22u);
    { uint32_t v = 0x24CCu; push32(c, v); }
    // 0ccd27  jmp 0xccd4e
    X86_AT(c, 0xccd27u);
    goto L_ccd4e;
L_ccd29:
    X86_TICK(c, 28);
    // 0ccd29  mov eax, dword ptr [0xb2304]
    X86_AT(c, 0xccd29u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xB2304u)));
    // 0ccd2e  shl eax, 8
    X86_AT(c, 0xccd2eu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 0ccd31  mov edx, dword ptr [0xb2308]
    X86_AT(c, 0xccd31u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(0xB2308u)));
    // 0ccd37  shl edx, 4
    X86_AT(c, 0xccd37u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[2] = r; }
    // 0ccd3a  add edx, eax
    X86_AT(c, 0xccd3au);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0ccd3c  cmp dword ptr [edx + 0xb233c], 4
    X86_AT(c, 0xccd3cu);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xB233Cu))), 0x4u, 0, 4);
    // 0ccd43  jne 0xccf24
    X86_AT(c, 0xccd43u);
    if (x86_cc(c, 5)) { goto L_ccf24; }
    X86_TICK(c, 2);
    // 0ccd49  push 0x24e4
    X86_AT(c, 0xccd49u);
    { uint32_t v = 0x24E4u; push32(c, v); }
L_ccd4e:
    X86_TICK(c, 9);
    // 0ccd4e  push 7
    X86_AT(c, 0xccd4eu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0ccd50  call 0xc8cdc
    X86_AT(c, 0xccd50u);
    push32(c, 0xccd55u); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xccd55u);
    X86_TICK(c, 7);
    // 0ccd55  call 0xccc28
    X86_AT(c, 0xccd55u);
    push32(c, 0xccd5au); x86_call_known(c, 0xccc28u, f_000ccc28); X86_RET(c, 0xccd5au);
    X86_TICK(c, 9);
    // 0ccd5a  add esp, 8
    X86_AT(c, 0xccd5au);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0ccd5d  jmp 0xccf29
    X86_AT(c, 0xccd5du);
    goto L_ccf29;
L_ccd62:
    X86_TICK(c, 9);
    // 0ccd62  push 5
    X86_AT(c, 0xccd62u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0ccd64  call 0xcf03c
    X86_AT(c, 0xccd64u);
    push32(c, 0xccd69u); x86_call_known(c, 0xcf03cu, f_000cf03c); X86_RET(c, 0xccd69u);
    X86_TICK(c, 12);
    // 0ccd69  xchg esi, eax
    X86_AT(c, 0xccd69u);
    { uint32_t t = c.r[6]; c.r[6] = c.r[0]; c.r[0] = t; }
    // 0ccd6a  mov edi, 1
    X86_AT(c, 0xccd6au);
    c.r[7] = 0x1u;
    // 0ccd6f  jmp 0xccef5
    X86_AT(c, 0xccd6fu);
    goto L_ccef5;
L_ccd74:
    X86_TICK(c, 12);
    // 0ccd74  cmp dword ptr [0xb2328], 0xa
    X86_AT(c, 0xccd74u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xB2328u))), 0xAu, 0, 4);
    // 0ccd7b  je 0xccf24
    X86_AT(c, 0xccd7bu);
    if (x86_cc(c, 4)) { goto L_ccf24; }
    X86_TICK(c, 28);
    // 0ccd81  mov eax, dword ptr [0xb2304]
    X86_AT(c, 0xccd81u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xB2304u)));
    // 0ccd86  shl eax, 8
    X86_AT(c, 0xccd86u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 0ccd89  mov edx, dword ptr [0xb2308]
    X86_AT(c, 0xccd89u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(0xB2308u)));
    // 0ccd8f  shl edx, 4
    X86_AT(c, 0xccd8fu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[2] = r; }
    // 0ccd92  add edx, eax
    X86_AT(c, 0xccd92u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0ccd94  cmp dword ptr [edx + 0xb2334], 8
    X86_AT(c, 0xccd94u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xB2334u))), 0x8u, 0, 4);
    // 0ccd9b  je 0xccf24
    X86_AT(c, 0xccd9bu);
    if (x86_cc(c, 4)) { goto L_ccf24; }
    X86_TICK(c, 12);
    // 0ccda1  test byte ptr [0xb2304], 1
    X86_AT(c, 0xccda1u);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(0xB2304u))) & 0x1u, 1);
    // 0ccda8  jne 0xccdb7
    X86_AT(c, 0xccda8u);
    if (x86_cc(c, 5)) { goto L_ccdb7; }
    X86_TICK(c, 12);
    // 0ccdaa  test byte ptr [0xb2308], 1
    X86_AT(c, 0xccdaau);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(0xB2308u))) & 0x1u, 1);
    // 0ccdb1  je 0xccf24
    X86_AT(c, 0xccdb1u);
    if (x86_cc(c, 4)) { goto L_ccf24; }
L_ccdb7:
    X86_TICK(c, 27);
    // 0ccdb7  mov eax, dword ptr [0xb2304]
    X86_AT(c, 0xccdb7u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xB2304u)));
    // 0ccdbc  shl eax, 8
    X86_AT(c, 0xccdbcu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 0ccdbf  mov edx, dword ptr [0xb2308]
    X86_AT(c, 0xccdbfu);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(0xB2308u)));
    // 0ccdc5  shl edx, 4
    X86_AT(c, 0xccdc5u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[2] = r; }
    // 0ccdc8  add edx, eax
    X86_AT(c, 0xccdc8u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0ccdca  mov dword ptr [edx + 0xb2334], 0xe
    X86_AT(c, 0xccdcau);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xB2334u)), 0xEu);
    // 0ccdd4  push 0x24f4
    X86_AT(c, 0xccdd4u);
    { uint32_t v = 0x24F4u; push32(c, v); }
    // 0ccdd9  jmp 0xccef0
    X86_AT(c, 0xccdd9u);
    goto L_ccef0;
L_ccdde:
    X86_TICK(c, 12);
    // 0ccdde  test byte ptr [0xb2304], 1
    X86_AT(c, 0xccddeu);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(0xB2304u))) & 0x1u, 1);
    // 0ccde5  jne 0xccdf4
    X86_AT(c, 0xccde5u);
    if (x86_cc(c, 5)) { goto L_ccdf4; }
    X86_TICK(c, 12);
    // 0ccde7  test byte ptr [0xb2308], 1
    X86_AT(c, 0xccde7u);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(0xB2308u))) & 0x1u, 1);
    // 0ccdee  je 0xccf24
    X86_AT(c, 0xccdeeu);
    if (x86_cc(c, 4)) { goto L_ccf24; }
L_ccdf4:
    X86_TICK(c, 28);
    // 0ccdf4  mov eax, dword ptr [0xb2304]
    X86_AT(c, 0xccdf4u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xB2304u)));
    // 0ccdf9  shl eax, 8
    X86_AT(c, 0xccdf9u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 0ccdfc  mov edx, dword ptr [0xb2308]
    X86_AT(c, 0xccdfcu);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(0xB2308u)));
    // 0cce02  shl edx, 4
    X86_AT(c, 0xcce02u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[2] = r; }
    // 0cce05  add edx, eax
    X86_AT(c, 0xcce05u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0cce07  cmp dword ptr [edx + 0xb2334], 8
    X86_AT(c, 0xcce07u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xB2334u))), 0x8u, 0, 4);
    // 0cce0e  je 0xccf24
    X86_AT(c, 0xcce0eu);
    if (x86_cc(c, 4)) { goto L_ccf24; }
    X86_TICK(c, 11);
    // 0cce14  mov dword ptr [edx + 0xb2334], 0xf
    X86_AT(c, 0xcce14u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xB2334u)), 0xFu);
    // 0cce1e  push 0x2524
    X86_AT(c, 0xcce1eu);
    { uint32_t v = 0x2524u; push32(c, v); }
    // 0cce23  jmp 0xccef0
    X86_AT(c, 0xcce23u);
    goto L_ccef0;
L_cce28:
    X86_TICK(c, 11);
    // 0cce28  push 9
    X86_AT(c, 0xcce28u);
    { uint32_t v = 0x9u; push32(c, v); }
    // 0cce2a  push 1
    X86_AT(c, 0xcce2au);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0cce2c  call 0xc5df0
    X86_AT(c, 0xcce2cu);
    push32(c, 0xcce31u); x86_call_known(c, 0xc5df0u, f_000c5df0); X86_RET(c, 0xcce31u);
    X86_TICK(c, 14);
    // 0cce31  xchg esi, eax
    X86_AT(c, 0xcce31u);
    { uint32_t t = c.r[6]; c.r[6] = c.r[0]; c.r[0] = t; }
    // 0cce32  push 9
    X86_AT(c, 0xcce32u);
    { uint32_t v = 0x9u; push32(c, v); }
    // 0cce34  push 1
    X86_AT(c, 0xcce34u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0cce36  call 0xc5df0
    X86_AT(c, 0xcce36u);
    push32(c, 0xcce3bu); x86_call_known(c, 0xc5df0u, f_000c5df0); X86_RET(c, 0xcce3bu);
    X86_TICK(c, 16);
    // 0cce3b  xchg ebx, eax
    X86_AT(c, 0xcce3bu);
    { uint32_t t = c.r[3]; c.r[3] = c.r[0]; c.r[0] = t; }
    // 0cce3c  add esp, 0x10
    X86_AT(c, 0xcce3cu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0cce3f  cmp esi, dword ptr [0xb2304]
    X86_AT(c, 0xcce3fu);
    (void)x86_sub(c, c.r[6], rd32((c.sbase[3] + (uint32_t)(0xB2304u))), 0, 4);
    // 0cce45  jne 0xcce4f
    X86_AT(c, 0xcce45u);
    if (x86_cc(c, 5)) { goto L_cce4f; }
    X86_TICK(c, 11);
    // 0cce47  cmp ebx, dword ptr [0xb2308]
    X86_AT(c, 0xcce47u);
    (void)x86_sub(c, c.r[3], rd32((c.sbase[3] + (uint32_t)(0xB2308u))), 0, 4);
    // 0cce4d  je 0xcce28
    X86_AT(c, 0xcce4du);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xcce28u); goto L_cce28; }
L_cce4f:
    X86_TICK(c, 23);
    // 0cce4f  mov eax, esi
    X86_AT(c, 0xcce4fu);
    c.r[0] = c.r[6];
    // 0cce51  shl eax, 8
    X86_AT(c, 0xcce51u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 0cce54  mov edx, ebx
    X86_AT(c, 0xcce54u);
    c.r[2] = c.r[3];
    // 0cce56  shl edx, 4
    X86_AT(c, 0xcce56u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[2] = r; }
    // 0cce59  add edx, eax
    X86_AT(c, 0xcce59u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0cce5b  mov eax, dword ptr [edx + 0xb2334]
    X86_AT(c, 0xcce5bu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xB2334u)));
    // 0cce61  cmp eax, 8
    X86_AT(c, 0xcce61u);
    (void)x86_sub(c, c.r[0], 0x8u, 0, 4);
    // 0cce64  je 0xcce28
    X86_AT(c, 0xcce64u);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xcce28u); goto L_cce28; }
    X86_TICK(c, 7);
    // 0cce66  cmp eax, 2
    X86_AT(c, 0xcce66u);
    (void)x86_sub(c, c.r[0], 0x2u, 0, 4);
    // 0cce69  je 0xcce28
    X86_AT(c, 0xcce69u);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xcce28u); goto L_cce28; }
    X86_TICK(c, 7);
    // 0cce6b  cmp eax, 3
    X86_AT(c, 0xcce6bu);
    (void)x86_sub(c, c.r[0], 0x3u, 0, 4);
    // 0cce6e  je 0xcce28
    X86_AT(c, 0xcce6eu);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xcce28u); goto L_cce28; }
    X86_TICK(c, 12);
    // 0cce70  cmp dword ptr [edx + 0xb2338], 0xffffffff
    X86_AT(c, 0xcce70u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xB2338u))), 0xFFFFFFFFu, 0, 4);
    // 0cce77  jne 0xcce28
    X86_AT(c, 0xcce77u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xcce28u); goto L_cce28; }
    X86_TICK(c, 13);
    // 0cce79  mov dword ptr [0xb2304], esi
    X86_AT(c, 0xcce79u);
    wr32((c.sbase[3] + (uint32_t)(0xB2304u)), c.r[6]);
    // 0cce7f  mov dword ptr [0xb2308], ebx
    X86_AT(c, 0xcce7fu);
    wr32((c.sbase[3] + (uint32_t)(0xB2308u)), c.r[3]);
    // 0cce85  push 0x2554
    X86_AT(c, 0xcce85u);
    { uint32_t v = 0x2554u; push32(c, v); }
    // 0cce8a  jmp 0xccef0
    X86_AT(c, 0xcce8au);
    goto L_ccef0;
L_cce8c:
    X86_TICK(c, 24);
    // 0cce8c  mov eax, esi
    X86_AT(c, 0xcce8cu);
    c.r[0] = c.r[6];
    // 0cce8e  shl eax, 8
    X86_AT(c, 0xcce8eu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 0cce91  mov edx, ebx
    X86_AT(c, 0xcce91u);
    c.r[2] = c.r[3];
    // 0cce93  shl edx, 4
    X86_AT(c, 0xcce93u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[2] = r; }
    // 0cce96  add edx, eax
    X86_AT(c, 0xcce96u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0cce98  cmp dword ptr [edx + 0xb2334], 0
    X86_AT(c, 0xcce98u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xB2334u))), 0x0u, 0, 4);
    // 0cce9f  jne 0xccf24
    X86_AT(c, 0xcce9fu);
    if (x86_cc(c, 5)) { goto L_ccf24; }
    X86_TICK(c, 12);
    // 0ccea5  cmp dword ptr [edx + 0xb2338], 0xffffffff
    X86_AT(c, 0xccea5u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xB2338u))), 0xFFFFFFFFu, 0, 4);
    // 0cceac  jne 0xccf24
    X86_AT(c, 0xcceacu);
    if (x86_cc(c, 5)) { goto L_ccf24; }
    X86_TICK(c, 12);
    // 0cceb2  cmp dword ptr [edx + 0xb233c], 0
    X86_AT(c, 0xcceb2u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xB233Cu))), 0x0u, 0, 4);
    // 0cceb9  jne 0xccf24
    X86_AT(c, 0xcceb9u);
    if (x86_cc(c, 5)) { goto L_ccf24; }
    X86_TICK(c, 11);
    // 0ccebb  mov dword ptr [edx + 0xb2334], 8
    X86_AT(c, 0xccebbu);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xB2334u)), 0x8u);
    // 0ccec5  push 0x2578
    X86_AT(c, 0xccec5u);
    { uint32_t v = 0x2578u; push32(c, v); }
    // 0cceca  jmp 0xccef0
    X86_AT(c, 0xccecau);
    goto L_ccef0;
L_ccecc:
    X86_TICK(c, 24);
    // 0ccecc  mov eax, esi
    X86_AT(c, 0xcceccu);
    c.r[0] = c.r[6];
    // 0ccece  shl eax, 8
    X86_AT(c, 0xcceceu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 0cced1  mov edx, ebx
    X86_AT(c, 0xcced1u);
    c.r[2] = c.r[3];
    // 0cced3  shl edx, 4
    X86_AT(c, 0xcced3u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[2] = r; }
    // 0cced6  add edx, eax
    X86_AT(c, 0xcced6u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0cced8  cmp dword ptr [edx + 0xb2334], 8
    X86_AT(c, 0xcced8u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xB2334u))), 0x8u, 0, 4);
    // 0ccedf  jne 0xccf24
    X86_AT(c, 0xccedfu);
    if (x86_cc(c, 5)) { goto L_ccf24; }
    X86_TICK(c, 4);
    // 0ccee1  mov dword ptr [edx + 0xb2334], 0
    X86_AT(c, 0xccee1u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xB2334u)), 0x0u);
    // 0cceeb  push 0x25a8
    X86_AT(c, 0xcceebu);
    { uint32_t v = 0x25A8u; push32(c, v); }
L_ccef0:
    X86_TICK(c, 7);
    // 0ccef0  call 0xcc7bc
    X86_AT(c, 0xccef0u);
    push32(c, 0xccef5u); x86_call_known(c, 0xcc7bcu, f_000cc7bc); X86_RET(c, 0xccef5u);
L_ccef5:
    X86_TICK(c, 9);
    // 0ccef5  add esp, 4
    X86_AT(c, 0xccef5u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0ccef8  jmp 0xccf29
    X86_AT(c, 0xccef8u);
    goto L_ccf29;
L_ccefa:
    X86_TICK(c, 24);
    // 0ccefa  mov eax, esi
    X86_AT(c, 0xccefau);
    c.r[0] = c.r[6];
    // 0ccefc  shl eax, 8
    X86_AT(c, 0xccefcu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 0cceff  mov edx, ebx
    X86_AT(c, 0xcceffu);
    c.r[2] = c.r[3];
    // 0ccf01  shl edx, 4
    X86_AT(c, 0xccf01u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[2] = r; }
    // 0ccf04  add edx, eax
    X86_AT(c, 0xccf04u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0ccf06  cmp dword ptr [edx + 0xb2338], 0xffffffff
    X86_AT(c, 0xccf06u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xB2338u))), 0xFFFFFFFFu, 0, 4);
    // 0ccf0d  je 0xccf24
    X86_AT(c, 0xccf0du);
    if (x86_cc(c, 4)) { goto L_ccf24; }
    X86_TICK(c, 17);
    // 0ccf0f  push ebx
    X86_AT(c, 0xccf0fu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0ccf10  push esi
    X86_AT(c, 0xccf10u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0ccf11  push 0x2710
    X86_AT(c, 0xccf11u);
    { uint32_t v = 0x2710u; push32(c, v); }
    // 0ccf16  push 0x65
    X86_AT(c, 0xccf16u);
    { uint32_t v = 0x65u; push32(c, v); }
    // 0ccf18  push 5
    X86_AT(c, 0xccf18u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0ccf1a  call 0xcee20
    X86_AT(c, 0xccf1au);
    push32(c, 0xccf1fu); x86_call_known(c, 0xcee20u, f_000cee20); X86_RET(c, 0xccf1fu);
    X86_TICK(c, 9);
    // 0ccf1f  add esp, 0x14
    X86_AT(c, 0xccf1fu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x14u, 0, 4); }
    // 0ccf22  jmp 0xccf29
    X86_AT(c, 0xccf22u);
    goto L_ccf29;
L_ccf24:
    X86_TICK(c, 2);
    // 0ccf24  mov edi, 1
    X86_AT(c, 0xccf24u);
    c.r[7] = 0x1u;
L_ccf29:
    X86_TICK(c, 7);
    // 0ccf29  and edi, edi
    X86_AT(c, 0xccf29u);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & c.r[7], 4); }
    // 0ccf2b  jne 0xccf32
    X86_AT(c, 0xccf2bu);
    if (x86_cc(c, 5)) { goto L_ccf32; }
    X86_TICK(c, 7);
    // 0ccf2d  call 0xdbd30
    X86_AT(c, 0xccf2du);
    push32(c, 0xccf32u); x86_call_known(c, 0xdbd30u, f_000dbd30); X86_RET(c, 0xccf32u);
L_ccf32:
    X86_TICK(c, 7);
    // 0ccf32  and edi, edi
    X86_AT(c, 0xccf32u);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & c.r[7], 4); }
    // 0ccf34  je 0xccf4c
    X86_AT(c, 0xccf34u);
    if (x86_cc(c, 4)) { goto L_ccf4c; }
    X86_TICK(c, 9);
    // 0ccf36  push 5
    X86_AT(c, 0xccf36u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0ccf38  call 0xc5ca4
    X86_AT(c, 0xccf38u);
    push32(c, 0xccf3du); x86_call_known(c, 0xc5ca4u, f_000c5ca4); X86_RET(c, 0xccf3du);
    X86_TICK(c, 9);
    // 0ccf3d  push 0x25dc
    X86_AT(c, 0xccf3du);
    { uint32_t v = 0x25DCu; push32(c, v); }
    // 0ccf42  call 0xcc7bc
    X86_AT(c, 0xccf42u);
    push32(c, 0xccf47u); x86_call_known(c, 0xcc7bcu, f_000cc7bc); X86_RET(c, 0xccf47u);
    X86_TICK(c, 9);
    // 0ccf47  add esp, 8
    X86_AT(c, 0xccf47u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0ccf4a  jmp 0xccf63
    X86_AT(c, 0xccf4au);
    goto L_ccf63;
L_ccf4c:
    X86_TICK(c, 11);
    // 0ccf4c  mov eax, dword ptr [ebp + 8]
    X86_AT(c, 0xccf4cu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0ccf4f  cmp eax, 0xa
    X86_AT(c, 0xccf4fu);
    (void)x86_sub(c, c.r[0], 0xAu, 0, 4);
    // 0ccf52  je 0xccf63
    X86_AT(c, 0xccf52u);
    if (x86_cc(c, 4)) { goto L_ccf63; }
    X86_TICK(c, 7);
    // 0ccf54  cmp eax, 3
    X86_AT(c, 0xccf54u);
    (void)x86_sub(c, c.r[0], 0x3u, 0, 4);
    // 0ccf57  je 0xccf63
    X86_AT(c, 0xccf57u);
    if (x86_cc(c, 4)) { goto L_ccf63; }
    X86_TICK(c, 9);
    // 0ccf59  push 5
    X86_AT(c, 0xccf59u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0ccf5b  call 0xc5ca4
    X86_AT(c, 0xccf5bu);
    push32(c, 0xccf60u); x86_call_known(c, 0xc5ca4u, f_000c5ca4); X86_RET(c, 0xccf60u);
    X86_TICK(c, 2);
    // 0ccf60  add esp, 4
    X86_AT(c, 0xccf60u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
L_ccf63:
    X86_TICK(c, 28);
    // 0ccf63  pop edi
    X86_AT(c, 0xccf63u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0ccf64  pop esi
    X86_AT(c, 0xccf64u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0ccf65  pop ebx
    X86_AT(c, 0xccf65u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0ccf66  leave 
    X86_AT(c, 0xccf66u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0ccf67  ret 
    X86_AT(c, 0xccf67u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xccc9cu, "ran off the end of a function");
}
void f_000ccef0(X86Cpu& c) {
    X86_TICK(c, 7);
    // 0ccef0  call 0xcc7bc
    X86_AT(c, 0xccef0u);
    push32(c, 0xccef5u); x86_call_known(c, 0xcc7bcu, f_000cc7bc); X86_RET(c, 0xccef5u);
    X86_TICK(c, 9);
    // 0ccef5  add esp, 4
    X86_AT(c, 0xccef5u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0ccef8  jmp 0xccf29
    X86_AT(c, 0xccef8u);
    goto L_ccf29;
L_ccf29:
    X86_TICK(c, 7);
    // 0ccf29  and edi, edi
    X86_AT(c, 0xccf29u);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & c.r[7], 4); }
    // 0ccf2b  jne 0xccf32
    X86_AT(c, 0xccf2bu);
    if (x86_cc(c, 5)) { goto L_ccf32; }
    X86_TICK(c, 7);
    // 0ccf2d  call 0xdbd30
    X86_AT(c, 0xccf2du);
    push32(c, 0xccf32u); x86_call_known(c, 0xdbd30u, f_000dbd30); X86_RET(c, 0xccf32u);
L_ccf32:
    X86_TICK(c, 7);
    // 0ccf32  and edi, edi
    X86_AT(c, 0xccf32u);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & c.r[7], 4); }
    // 0ccf34  je 0xccf4c
    X86_AT(c, 0xccf34u);
    if (x86_cc(c, 4)) { goto L_ccf4c; }
    X86_TICK(c, 9);
    // 0ccf36  push 5
    X86_AT(c, 0xccf36u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0ccf38  call 0xc5ca4
    X86_AT(c, 0xccf38u);
    push32(c, 0xccf3du); x86_call_known(c, 0xc5ca4u, f_000c5ca4); X86_RET(c, 0xccf3du);
    X86_TICK(c, 9);
    // 0ccf3d  push 0x25dc
    X86_AT(c, 0xccf3du);
    { uint32_t v = 0x25DCu; push32(c, v); }
    // 0ccf42  call 0xcc7bc
    X86_AT(c, 0xccf42u);
    push32(c, 0xccf47u); x86_call_known(c, 0xcc7bcu, f_000cc7bc); X86_RET(c, 0xccf47u);
    X86_TICK(c, 9);
    // 0ccf47  add esp, 8
    X86_AT(c, 0xccf47u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0ccf4a  jmp 0xccf63
    X86_AT(c, 0xccf4au);
    goto L_ccf63;
L_ccf4c:
    X86_TICK(c, 11);
    // 0ccf4c  mov eax, dword ptr [ebp + 8]
    X86_AT(c, 0xccf4cu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0ccf4f  cmp eax, 0xa
    X86_AT(c, 0xccf4fu);
    (void)x86_sub(c, c.r[0], 0xAu, 0, 4);
    // 0ccf52  je 0xccf63
    X86_AT(c, 0xccf52u);
    if (x86_cc(c, 4)) { goto L_ccf63; }
    X86_TICK(c, 7);
    // 0ccf54  cmp eax, 3
    X86_AT(c, 0xccf54u);
    (void)x86_sub(c, c.r[0], 0x3u, 0, 4);
    // 0ccf57  je 0xccf63
    X86_AT(c, 0xccf57u);
    if (x86_cc(c, 4)) { goto L_ccf63; }
    X86_TICK(c, 9);
    // 0ccf59  push 5
    X86_AT(c, 0xccf59u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0ccf5b  call 0xc5ca4
    X86_AT(c, 0xccf5bu);
    push32(c, 0xccf60u); x86_call_known(c, 0xc5ca4u, f_000c5ca4); X86_RET(c, 0xccf60u);
    X86_TICK(c, 2);
    // 0ccf60  add esp, 4
    X86_AT(c, 0xccf60u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
L_ccf63:
    X86_TICK(c, 28);
    // 0ccf63  pop edi
    X86_AT(c, 0xccf63u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0ccf64  pop esi
    X86_AT(c, 0xccf64u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0ccf65  pop ebx
    X86_AT(c, 0xccf65u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0ccf66  leave 
    X86_AT(c, 0xccf66u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0ccf67  ret 
    X86_AT(c, 0xccf67u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xccef0u, "ran off the end of a function");
}
void f_000ccf68(X86Cpu& c) {
    X86_TICK(c, 19);
    // 0ccf68  push ebx
    X86_AT(c, 0xccf68u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0ccf69  push esi
    X86_AT(c, 0xccf69u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0ccf6a  push edi
    X86_AT(c, 0xccf6au);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0ccf6b  mov edi, 1
    X86_AT(c, 0xccf6bu);
    c.r[7] = 0x1u;
    // 0ccf70  sub esi, esi
    X86_AT(c, 0xccf70u);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[6], 0, 4); }
    // 0ccf72  push 0x25f6
    X86_AT(c, 0xccf72u);
    { uint32_t v = 0x25F6u; push32(c, v); }
    // 0ccf77  call 0xcc7bc
    X86_AT(c, 0xccf77u);
    push32(c, 0xccf7cu); x86_call_known(c, 0xcc7bcu, f_000cc7bc); X86_RET(c, 0xccf7cu);
    X86_TICK(c, 12);
    // 0ccf7c  push dword ptr [0xab144]
    X86_AT(c, 0xccf7cu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xAB144u))); push32(c, v); }
    // 0ccf82  call 0xcc7bc
    X86_AT(c, 0xccf82u);
    push32(c, 0xccf87u); x86_call_known(c, 0xcc7bcu, f_000cc7bc); X86_RET(c, 0xccf87u);
    X86_TICK(c, 14);
    // 0ccf87  add esp, 8
    X86_AT(c, 0xccf87u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0ccf8a  cmp dword ptr [0xb52f8], 3
    X86_AT(c, 0xccf8au);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xB52F8u))), 0x3u, 0, 4);
    // 0ccf91  jne 0xccfb2
    X86_AT(c, 0xccf91u);
    if (x86_cc(c, 5)) { goto L_ccfb2; }
    X86_TICK(c, 11);
    // 0ccf93  push 0xa
    X86_AT(c, 0xccf93u);
    { uint32_t v = 0xAu; push32(c, v); }
    // 0ccf95  push edi
    X86_AT(c, 0xccf95u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0ccf96  call 0xc5df0
    X86_AT(c, 0xccf96u);
    push32(c, 0xccf9bu); x86_call_known(c, 0xc5df0u, f_000c5df0); X86_RET(c, 0xccf9bu);
    X86_TICK(c, 12);
    // 0ccf9b  xchg edi, eax
    X86_AT(c, 0xccf9bu);
    { uint32_t t = c.r[7]; c.r[7] = c.r[0]; c.r[0] = t; }
    // 0ccf9c  add esp, 8
    X86_AT(c, 0xccf9cu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0ccf9f  cmp edi, 4
    X86_AT(c, 0xccf9fu);
    (void)x86_sub(c, c.r[7], 0x4u, 0, 4);
    // 0ccfa2  jne 0xccfa5
    X86_AT(c, 0xccfa2u);
    if (x86_cc(c, 5)) { goto L_ccfa5; }
    X86_TICK(c, 2);
    // 0ccfa4  inc edi
    X86_AT(c, 0xccfa4u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
L_ccfa5:
    X86_TICK(c, 11);
    // 0ccfa5  push 0
    X86_AT(c, 0xccfa5u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0ccfa7  push edi
    X86_AT(c, 0xccfa7u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0ccfa8  call 0xccc9c
    X86_AT(c, 0xccfa8u);
    push32(c, 0xccfadu); x86_call_known(c, 0xccc9cu, f_000ccc9c); X86_RET(c, 0xccfadu);
    X86_TICK(c, 7);
    // 0ccfad  jmp 0xcd09c
    X86_AT(c, 0xccfadu);
    goto L_cd09c;
L_ccfb2:
    X86_TICK(c, 12);
    // 0ccfb2  cmp dword ptr [0xb02fe], 0xf
    X86_AT(c, 0xccfb2u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xB02FEu))), 0xFu, 0, 4);
    // 0ccfb9  jge 0xccfd6
    X86_AT(c, 0xccfb9u);
    if (x86_cc(c, 13)) { goto L_ccfd6; }
    X86_TICK(c, 11);
    // 0ccfbb  mov dword ptr [0xb02fe], 0xf
    X86_AT(c, 0xccfbbu);
    wr32((c.sbase[3] + (uint32_t)(0xB02FEu)), 0xFu);
    // 0ccfc5  push 0x25f8
    X86_AT(c, 0xccfc5u);
    { uint32_t v = 0x25F8u; push32(c, v); }
    // 0ccfca  call 0xcc7bc
    X86_AT(c, 0xccfcau);
    push32(c, 0xccfcfu); x86_call_known(c, 0xcc7bcu, f_000cc7bc); X86_RET(c, 0xccfcfu);
    X86_TICK(c, 7);
    // 0ccfcf  call 0xcc628
    X86_AT(c, 0xccfcfu);
    push32(c, 0xccfd4u); x86_call_known(c, 0xcc628u, f_000cc628); X86_RET(c, 0xccfd4u);
    X86_TICK(c, 7);
    // 0ccfd4  jmp 0xccff8
    X86_AT(c, 0xccfd4u);
    goto L_ccff8;
L_ccfd6:
    X86_TICK(c, 12);
    // 0ccfd6  cmp dword ptr [0xb0322], 0xf
    X86_AT(c, 0xccfd6u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xB0322u))), 0xFu, 0, 4);
    // 0ccfdd  jge 0xcd00c
    X86_AT(c, 0xccfddu);
    if (x86_cc(c, 13)) { goto L_cd00c; }
    X86_TICK(c, 11);
    // 0ccfdf  mov dword ptr [0xb0322], 0xf
    X86_AT(c, 0xccfdfu);
    wr32((c.sbase[3] + (uint32_t)(0xB0322u)), 0xFu);
    // 0ccfe9  push 0x2618
    X86_AT(c, 0xccfe9u);
    { uint32_t v = 0x2618u; push32(c, v); }
    // 0ccfee  call 0xcc7bc
    X86_AT(c, 0xccfeeu);
    push32(c, 0xccff3u); x86_call_known(c, 0xcc7bcu, f_000cc7bc); X86_RET(c, 0xccff3u);
    X86_TICK(c, 7);
    // 0ccff3  call 0xcc66c
    X86_AT(c, 0xccff3u);
    push32(c, 0xccff8u); x86_call_known(c, 0xcc66cu, f_000cc66c); X86_RET(c, 0xccff8u);
L_ccff8:
    X86_TICK(c, 9);
    // 0ccff8  push 5
    X86_AT(c, 0xccff8u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0ccffa  call 0xc5ca4
    X86_AT(c, 0xccffau);
    push32(c, 0xccfffu); x86_call_known(c, 0xc5ca4u, f_000c5ca4); X86_RET(c, 0xccfffu);
    X86_TICK(c, 11);
    // 0ccfff  mov esi, 1
    X86_AT(c, 0xccfffu);
    c.r[6] = 0x1u;
    // 0cd004  add esp, 8
    X86_AT(c, 0xcd004u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0cd007  jmp 0xcd087
    X86_AT(c, 0xcd007u);
    goto L_cd087;
L_cd00c:
    X86_TICK(c, 11);
    // 0cd00c  push 0x64
    X86_AT(c, 0xcd00cu);
    { uint32_t v = 0x64u; push32(c, v); }
    // 0cd00e  push 1
    X86_AT(c, 0xcd00eu);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0cd010  call 0xc5df0
    X86_AT(c, 0xcd010u);
    push32(c, 0xcd015u); x86_call_known(c, 0xc5df0u, f_000c5df0); X86_RET(c, 0xcd015u);
    X86_TICK(c, 9);
    // 0cd015  add esp, 8
    X86_AT(c, 0xcd015u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0cd018  cmp eax, 0x19
    X86_AT(c, 0xcd018u);
    (void)x86_sub(c, c.r[0], 0x19u, 0, 4);
    // 0cd01b  jge 0xcd087
    X86_AT(c, 0xcd01bu);
    if (x86_cc(c, 13)) { goto L_cd087; }
L_cd01d:
    X86_TICK(c, 11);
    // 0cd01d  cmp edi, dword ptr [0xaa2a0]
    X86_AT(c, 0xcd01du);
    (void)x86_sub(c, c.r[7], rd32((c.sbase[3] + (uint32_t)(0xAA2A0u))), 0, 4);
    // 0cd023  jg 0xcd087
    X86_AT(c, 0xcd023u);
    if (x86_cc(c, 15)) { goto L_cd087; }
    X86_TICK(c, 7);
    // 0cd025  and esi, esi
    X86_AT(c, 0xcd025u);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & c.r[6], 4); }
    // 0cd027  jne 0xcd087
    X86_AT(c, 0xcd027u);
    if (x86_cc(c, 5)) { goto L_cd087; }
    X86_TICK(c, 17);
    // 0cd029  lea eax, [edi*8]
    X86_AT(c, 0xcd029u);
    c.r[0] = (uint32_t)(c.r[7] * 8);
    // 0cd030  lea eax, [eax + eax*4]
    X86_AT(c, 0xcd030u);
    c.r[0] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0cd033  lea ebx, [eax*1 + 0xbefcc]
    X86_AT(c, 0xcd033u);
    c.r[3] = (uint32_t)(c.r[0] + 0xBEFCCu);
    // 0cd03a  mov eax, dword ptr [ebx]
    X86_AT(c, 0xcd03au);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3])));
    // 0cd03c  cmp eax, 0x8b
    X86_AT(c, 0xcd03cu);
    (void)x86_sub(c, c.r[0], 0x8Bu, 0, 4);
    // 0cd041  jl 0xcd084
    X86_AT(c, 0xcd041u);
    if (x86_cc(c, 12)) { goto L_cd084; }
    X86_TICK(c, 33);
    // 0cd043  mov edx, dword ptr [0xb033e]
    X86_AT(c, 0xcd043u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(0xB033Eu)));
    // 0cd049  sub edx, dword ptr [ebx + 0xc]
    X86_AT(c, 0xcd049u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0xCu))), 0, 4); }
    // 0cd04c  push edx
    X86_AT(c, 0xcd04cu);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0cd04d  mov edx, dword ptr [0xb033a]
    X86_AT(c, 0xcd04du);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(0xB033Au)));
    // 0cd053  sub edx, dword ptr [ebx + 8]
    X86_AT(c, 0xcd053u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x8u))), 0, 4); }
    // 0cd056  push edx
    X86_AT(c, 0xcd056u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0cd057  push eax
    X86_AT(c, 0xcd057u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0cd058  call 0xd29d0
    X86_AT(c, 0xcd058u);
    push32(c, 0xcd05du); x86_call_known(c, 0xd29d0u, f_000d29d0); X86_RET(c, 0xcd05du);
    X86_TICK(c, 12);
    // 0cd05d  xchg esi, eax
    X86_AT(c, 0xcd05du);
    { uint32_t t = c.r[6]; c.r[6] = c.r[0]; c.r[0] = t; }
    // 0cd05e  add esp, 0xc
    X86_AT(c, 0xcd05eu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0cd061  and esi, esi
    X86_AT(c, 0xcd061u);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & c.r[6], 4); }
    // 0cd063  je 0xcd084
    X86_AT(c, 0xcd063u);
    if (x86_cc(c, 4)) { goto L_cd084; }
    X86_TICK(c, 9);
    // 0cd065  push 0x2638
    X86_AT(c, 0xcd065u);
    { uint32_t v = 0x2638u; push32(c, v); }
    // 0cd06a  call 0xcc7bc
    X86_AT(c, 0xcd06au);
    push32(c, 0xcd06fu); x86_call_known(c, 0xcc7bcu, f_000cc7bc); X86_RET(c, 0xcd06fu);
    X86_TICK(c, 9);
    // 0cd06f  push 5
    X86_AT(c, 0xcd06fu);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0cd071  call 0xc5ca4
    X86_AT(c, 0xcd071u);
    push32(c, 0xcd076u); x86_call_known(c, 0xc5ca4u, f_000c5ca4); X86_RET(c, 0xcd076u);
    X86_TICK(c, 17);
    // 0cd076  push dword ptr [ebx + 0xc]
    X86_AT(c, 0xcd076u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0xCu))); push32(c, v); }
    // 0cd079  push dword ptr [ebx + 8]
    X86_AT(c, 0xcd079u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x8u))); push32(c, v); }
    // 0cd07c  call 0xcf758
    X86_AT(c, 0xcd07cu);
    push32(c, 0xcd081u); x86_call_known(c, 0xcf758u, f_000cf758); X86_RET(c, 0xcd081u);
    X86_TICK(c, 2);
    // 0cd081  add esp, 0x10
    X86_AT(c, 0xcd081u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
L_cd084:
    X86_TICK(c, 9);
    // 0cd084  inc edi
    X86_AT(c, 0xcd084u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0cd085  jmp 0xcd01d
    X86_AT(c, 0xcd085u);
    X86_POLL(c, 0xcd01du); goto L_cd01d;
L_cd087:
    X86_TICK(c, 7);
    // 0cd087  and esi, esi
    X86_AT(c, 0xcd087u);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & c.r[6], 4); }
    // 0cd089  jne 0xcd09f
    X86_AT(c, 0xcd089u);
    if (x86_cc(c, 5)) { goto L_cd09f; }
    X86_TICK(c, 9);
    // 0cd08b  push 0x2670
    X86_AT(c, 0xcd08bu);
    { uint32_t v = 0x2670u; push32(c, v); }
    // 0cd090  call 0xcc7bc
    X86_AT(c, 0xcd090u);
    push32(c, 0xcd095u); x86_call_known(c, 0xcc7bcu, f_000cc7bc); X86_RET(c, 0xcd095u);
    X86_TICK(c, 9);
    // 0cd095  push 5
    X86_AT(c, 0xcd095u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0cd097  call 0xc5ca4
    X86_AT(c, 0xcd097u);
    push32(c, 0xcd09cu); x86_call_known(c, 0xc5ca4u, f_000c5ca4); X86_RET(c, 0xcd09cu);
L_cd09c:
    X86_TICK(c, 2);
    // 0cd09c  add esp, 8
    X86_AT(c, 0xcd09cu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
L_cd09f:
    X86_TICK(c, 22);
    // 0cd09f  pop edi
    X86_AT(c, 0xcd09fu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0cd0a0  pop esi
    X86_AT(c, 0xcd0a0u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0cd0a1  pop ebx
    X86_AT(c, 0xcd0a1u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0cd0a2  ret 
    X86_AT(c, 0xcd0a2u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xccf68u, "ran off the end of a function");
}
void f_000cd0a4(X86Cpu& c) {
    X86_TICK(c, 25);
    // 0cd0a4  push ebp
    X86_AT(c, 0xcd0a4u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0cd0a5  mov ebp, esp
    X86_AT(c, 0xcd0a5u);
    c.r[5] = c.r[4];
    // 0cd0a7  push eax
    X86_AT(c, 0xcd0a7u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0cd0a8  push ebx
    X86_AT(c, 0xcd0a8u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0cd0a9  push esi
    X86_AT(c, 0xcd0a9u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0cd0aa  push edi
    X86_AT(c, 0xcd0aau);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0cd0ab  mov dword ptr [ebp - 4], 0
    X86_AT(c, 0xcd0abu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), 0x0u);
    // 0cd0b2  push 0xf
    X86_AT(c, 0xcd0b2u);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0cd0b4  push 0x26ac
    X86_AT(c, 0xcd0b4u);
    { uint32_t v = 0x26ACu; push32(c, v); }
    // 0cd0b9  call 0xcc830
    X86_AT(c, 0xcd0b9u);
    push32(c, 0xcd0beu); x86_call_known(c, 0xcc830u, f_000cc830); X86_RET(c, 0xcd0beu);
    X86_TICK(c, 7);
    // 0cd0be  call 0xcf8e0
    X86_AT(c, 0xcd0beu);
    push32(c, 0xcd0c3u); x86_call_known(c, 0xcf8e0u, f_000cf8e0); X86_RET(c, 0xcd0c3u);
    X86_TICK(c, 12);
    // 0cd0c3  xchg ebx, eax
    X86_AT(c, 0xcd0c3u);
    { uint32_t t = c.r[3]; c.r[3] = c.r[0]; c.r[0] = t; }
    // 0cd0c4  add esp, 8
    X86_AT(c, 0xcd0c4u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0cd0c7  cmp bl, 6
    X86_AT(c, 0xcd0c7u);
    (void)x86_sub(c, g8(c, 3), 0x6u, 0, 1);
    // 0cd0ca  jbe 0xcd0db
    X86_AT(c, 0xcd0cau);
    if (x86_cc(c, 6)) { goto L_cd0db; }
    X86_TICK(c, 13);
    // 0cd0cc  mov eax, 1
    X86_AT(c, 0xcd0ccu);
    c.r[0] = 0x1u;
    // 0cd0d1  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0xcd0d1u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
    // 0cd0d4  push 0x26b4
    X86_AT(c, 0xcd0d4u);
    { uint32_t v = 0x26B4u; push32(c, v); }
    // 0cd0d9  jmp 0xcd0e5
    X86_AT(c, 0xcd0d9u);
    goto L_cd0e5;
L_cd0db:
    X86_TICK(c, 8);
    // 0cd0db  movzx ebx, bl
    X86_AT(c, 0xcd0dbu);
    c.r[3] = g8(c, 3);
    // 0cd0de  push dword ptr [ebx*4 + 0xaa274]
    X86_AT(c, 0xcd0deu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] * 4 + 0xAA274u))); push32(c, v); }
L_cd0e5:
    X86_TICK(c, 7);
    // 0cd0e5  call 0xcc7bc
    X86_AT(c, 0xcd0e5u);
    push32(c, 0xcd0eau); x86_call_known(c, 0xcc7bcu, f_000cc7bc); X86_RET(c, 0xcd0eau);
    X86_TICK(c, 14);
    // 0cd0ea  add esp, 4
    X86_AT(c, 0xcd0eau);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0cd0ed  cmp dword ptr [ebp - 4], 0
    X86_AT(c, 0xcd0edu);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))), 0x0u, 0, 4);
    // 0cd0f1  je 0xcd104
    X86_AT(c, 0xcd0f1u);
    if (x86_cc(c, 4)) { goto L_cd104; }
    X86_TICK(c, 17);
    // 0cd0f3  mov eax, dword ptr [0xb032a]
    X86_AT(c, 0xcd0f3u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xB032Au)));
    // 0cd0f8  inc dword ptr [eax*4 + 0xb03d2]
    X86_AT(c, 0xcd0f8u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[0] * 4 + 0xB03D2u)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0cd0ff  jmp 0xcd1a3
    X86_AT(c, 0xcd0ffu);
    goto L_cd1a3;
L_cd104:
    X86_TICK(c, 12);
    // 0cd104  cmp dword ptr [0xb032a], 3
    X86_AT(c, 0xcd104u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xB032Au))), 0x3u, 0, 4);
    // 0cd10b  jne 0xcd121
    X86_AT(c, 0xcd10bu);
    if (x86_cc(c, 5)) { goto L_cd121; }
    X86_TICK(c, 11);
    // 0cd10d  push 0xf
    X86_AT(c, 0xcd10du);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0cd10f  push 0x26d4
    X86_AT(c, 0xcd10fu);
    { uint32_t v = 0x26D4u; push32(c, v); }
    // 0cd114  call 0xcc830
    X86_AT(c, 0xcd114u);
    push32(c, 0xcd119u); x86_call_known(c, 0xcc830u, f_000cc830); X86_RET(c, 0xcd119u);
    X86_TICK(c, 7);
    // 0cd119  call 0xccbdc
    X86_AT(c, 0xcd119u);
    push32(c, 0xcd11eu); x86_call_known(c, 0xccbdcu, f_000ccbdc); X86_RET(c, 0xcd11eu);
    X86_TICK(c, 10);
    // 0cd11e  xchg edi, eax
    X86_AT(c, 0xcd11eu);
    { uint32_t t = c.r[7]; c.r[7] = c.r[0]; c.r[0] = t; }
    // 0cd11f  jmp 0xcd132
    X86_AT(c, 0xcd11fu);
    goto L_cd132;
L_cd121:
    X86_TICK(c, 11);
    // 0cd121  push 0xf
    X86_AT(c, 0xcd121u);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0cd123  push 0x2714
    X86_AT(c, 0xcd123u);
    { uint32_t v = 0x2714u; push32(c, v); }
    // 0cd128  call 0xcc830
    X86_AT(c, 0xcd128u);
    push32(c, 0xcd12du); x86_call_known(c, 0xcc830u, f_000cc830); X86_RET(c, 0xcd12du);
    X86_TICK(c, 2);
    // 0cd12d  mov edi, 0x270f
    X86_AT(c, 0xcd12du);
    c.r[7] = 0x270Fu;
L_cd132:
    X86_TICK(c, 14);
    // 0cd132  add esp, 8
    X86_AT(c, 0xcd132u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0cd135  cmp byte ptr [0xb02fc], 1
    X86_AT(c, 0xcd135u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0xB02FCu))), 0x1u, 0, 1);
    // 0cd13c  jne 0xcd145
    X86_AT(c, 0xcd13cu);
    if (x86_cc(c, 5)) { goto L_cd145; }
    X86_TICK(c, 9);
    // 0cd13e  mov esi, 1
    X86_AT(c, 0xcd13eu);
    c.r[6] = 0x1u;
    // 0cd143  jmp 0xcd163
    X86_AT(c, 0xcd143u);
    goto L_cd163;
L_cd145:
    X86_TICK(c, 11);
    // 0cd145  push 0x64
    X86_AT(c, 0xcd145u);
    { uint32_t v = 0x64u; push32(c, v); }
    // 0cd147  push 1
    X86_AT(c, 0xcd147u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0cd149  call 0xc5df0
    X86_AT(c, 0xcd149u);
    push32(c, 0xcd14eu); x86_call_known(c, 0xc5df0u, f_000c5df0); X86_RET(c, 0xcd14eu);
    X86_TICK(c, 20);
    // 0cd14e  mov edx, dword ptr [0xb0312]
    X86_AT(c, 0xcd14eu);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(0xB0312u)));
    // 0cd154  add edx, 0x32
    X86_AT(c, 0xcd154u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, 0x32u, 0, 4); }
    // 0cd157  cmp edx, eax
    X86_AT(c, 0xcd157u);
    (void)x86_sub(c, c.r[2], c.r[0], 0, 4);
    // 0cd159  setg al
    X86_AT(c, 0xcd159u);
    s8(c, 0, x86_cc(c, 15) ? 1u : 0u);
    // 0cd15c  movzx eax, al
    X86_AT(c, 0xcd15cu);
    c.r[0] = g8(c, 0);
    // 0cd15f  xchg esi, eax
    X86_AT(c, 0xcd15fu);
    { uint32_t t = c.r[6]; c.r[6] = c.r[0]; c.r[0] = t; }
    // 0cd160  add esp, 8
    X86_AT(c, 0xcd160u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
L_cd163:
    X86_TICK(c, 7);
    // 0cd163  and esi, esi
    X86_AT(c, 0xcd163u);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & c.r[6], 4); }
    // 0cd165  jne 0xcd17d
    X86_AT(c, 0xcd165u);
    if (x86_cc(c, 5)) { goto L_cd17d; }
    X86_TICK(c, 9);
    // 0cd167  push 0x2760
    X86_AT(c, 0xcd167u);
    { uint32_t v = 0x2760u; push32(c, v); }
    // 0cd16c  call 0xcc7bc
    X86_AT(c, 0xcd16cu);
    push32(c, 0xcd171u); x86_call_known(c, 0xcc7bcu, f_000cc7bc); X86_RET(c, 0xcd171u);
    X86_TICK(c, 9);
    // 0cd171  push 5
    X86_AT(c, 0xcd171u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0cd173  call 0xc5ca4
    X86_AT(c, 0xcd173u);
    push32(c, 0xcd178u); x86_call_known(c, 0xc5ca4u, f_000c5ca4); X86_RET(c, 0xcd178u);
    X86_TICK(c, 9);
    // 0cd178  add esp, 8
    X86_AT(c, 0xcd178u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0cd17b  jmp 0xcd1a3
    X86_AT(c, 0xcd17bu);
    goto L_cd1a3;
L_cd17d:
    X86_TICK(c, 9);
    // 0cd17d  push 5
    X86_AT(c, 0xcd17du);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0cd17f  call 0xc5ca4
    X86_AT(c, 0xcd17fu);
    push32(c, 0xcd184u); x86_call_known(c, 0xc5ca4u, f_000c5ca4); X86_RET(c, 0xcd184u);
    X86_TICK(c, 9);
    // 0cd184  push 0x277a
    X86_AT(c, 0xcd184u);
    { uint32_t v = 0x277Au; push32(c, v); }
    // 0cd189  call 0xcc7bc
    X86_AT(c, 0xcd189u);
    push32(c, 0xcd18eu); x86_call_known(c, 0xcc7bcu, f_000cc7bc); X86_RET(c, 0xcd18eu);
    X86_TICK(c, 19);
    // 0cd18e  push 0xa0
    X86_AT(c, 0xcd18eu);
    { uint32_t v = 0xA0u; push32(c, v); }
    // 0cd193  push 0x65
    X86_AT(c, 0xcd193u);
    { uint32_t v = 0x65u; push32(c, v); }
    // 0cd195  push edi
    X86_AT(c, 0xcd195u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0cd196  push 3
    X86_AT(c, 0xcd196u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0cd198  push 7
    X86_AT(c, 0xcd198u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cd19a  push ebx
    X86_AT(c, 0xcd19au);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0cd19b  call 0xcf184
    X86_AT(c, 0xcd19bu);
    push32(c, 0xcd1a0u); x86_call_known(c, 0xcf184u, f_000cf184); X86_RET(c, 0xcd1a0u);
    X86_TICK(c, 2);
    // 0cd1a0  add esp, 0x20
    X86_AT(c, 0xcd1a0u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x20u, 0, 4); }
L_cd1a3:
    X86_TICK(c, 28);
    // 0cd1a3  pop edi
    X86_AT(c, 0xcd1a3u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0cd1a4  pop esi
    X86_AT(c, 0xcd1a4u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0cd1a5  pop ebx
    X86_AT(c, 0xcd1a5u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0cd1a6  leave 
    X86_AT(c, 0xcd1a6u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0cd1a7  ret 
    X86_AT(c, 0xcd1a7u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xcd0a4u, "ran off the end of a function");
}
void f_000cd1a8(X86Cpu& c) {
    X86_TICK(c, 11);
    // 0cd1a8  mov eax, dword ptr [0xb52f8]
    X86_AT(c, 0xcd1a8u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xB52F8u)));
    // 0cd1ad  cmp eax, 1
    X86_AT(c, 0xcd1adu);
    (void)x86_sub(c, c.r[0], 0x1u, 0, 4);
    // 0cd1b0  je 0xcd1bc
    X86_AT(c, 0xcd1b0u);
    if (x86_cc(c, 4)) { goto L_cd1bc; }
    X86_TICK(c, 7);
    // 0cd1b2  cmp eax, 2
    X86_AT(c, 0xcd1b2u);
    (void)x86_sub(c, c.r[0], 0x2u, 0, 4);
    // 0cd1b5  je 0xcd1bc
    X86_AT(c, 0xcd1b5u);
    if (x86_cc(c, 4)) { goto L_cd1bc; }
    X86_TICK(c, 7);
    // 0cd1b7  cmp eax, 4
    X86_AT(c, 0xcd1b7u);
    (void)x86_sub(c, c.r[0], 0x4u, 0, 4);
    // 0cd1ba  jne 0xcd1e1
    X86_AT(c, 0xcd1bau);
    if (x86_cc(c, 5)) { goto L_cd1e1; }
L_cd1bc:
    X86_TICK(c, 11);
    // 0cd1bc  push 0xf
    X86_AT(c, 0xcd1bcu);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0cd1be  push 0x277c
    X86_AT(c, 0xcd1beu);
    { uint32_t v = 0x277Cu; push32(c, v); }
    // 0cd1c3  call 0xcc830
    X86_AT(c, 0xcd1c3u);
    push32(c, 0xcd1c8u); x86_call_known(c, 0xcc830u, f_000cc830); X86_RET(c, 0xcd1c8u);
    X86_TICK(c, 9);
    // 0cd1c8  push 0x2798
    X86_AT(c, 0xcd1c8u);
    { uint32_t v = 0x2798u; push32(c, v); }
    // 0cd1cd  call 0xcc7bc
    X86_AT(c, 0xcd1cdu);
    push32(c, 0xcd1d2u); x86_call_known(c, 0xcc7bcu, f_000cc7bc); X86_RET(c, 0xcd1d2u);
    X86_TICK(c, 9);
    // 0cd1d2  push 5
    X86_AT(c, 0xcd1d2u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0cd1d4  call 0xc5ca4
    X86_AT(c, 0xcd1d4u);
    push32(c, 0xcd1d9u); x86_call_known(c, 0xc5ca4u, f_000c5ca4); X86_RET(c, 0xcd1d9u);
    X86_TICK(c, 9);
    // 0cd1d9  add esp, 0x10
    X86_AT(c, 0xcd1d9u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0cd1dc  jmp 0xcd284
    X86_AT(c, 0xcd1dcu);
    goto L_cd284;
L_cd1e1:
    X86_TICK(c, 11);
    // 0cd1e1  push 0xf
    X86_AT(c, 0xcd1e1u);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0cd1e3  push 0x27d4
    X86_AT(c, 0xcd1e3u);
    { uint32_t v = 0x27D4u; push32(c, v); }
    // 0cd1e8  call 0xcc830
    X86_AT(c, 0xcd1e8u);
    push32(c, 0xcd1edu); x86_call_known(c, 0xcc830u, f_000cc830); X86_RET(c, 0xcd1edu);
    X86_TICK(c, 16);
    // 0cd1ed  mov eax, dword ptr [0xb032a]
    X86_AT(c, 0xcd1edu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xB032Au)));
    // 0cd1f2  push dword ptr [eax*4 + 0xa1e44]
    X86_AT(c, 0xcd1f2u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[0] * 4 + 0xA1E44u))); push32(c, v); }
    // 0cd1f9  call 0xcc7bc
    X86_AT(c, 0xcd1f9u);
    push32(c, 0xcd1feu); x86_call_known(c, 0xcc7bcu, f_000cc7bc); X86_RET(c, 0xcd1feu);
    X86_TICK(c, 14);
    // 0cd1fe  add esp, 0xc
    X86_AT(c, 0xcd1feu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0cd201  cmp dword ptr [0xb032a], 0
    X86_AT(c, 0xcd201u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xB032Au))), 0x0u, 0, 4);
    // 0cd208  jne 0xcd214
    X86_AT(c, 0xcd208u);
    if (x86_cc(c, 5)) { goto L_cd214; }
    X86_TICK(c, 7);
    // 0cd20a  call 0xccf68
    X86_AT(c, 0xcd20au);
    push32(c, 0xcd20fu); x86_call_known(c, 0xccf68u, f_000ccf68); X86_RET(c, 0xcd20fu);
    X86_TICK(c, 7);
    // 0cd20f  jmp 0xcd284
    X86_AT(c, 0xcd20fu);
    goto L_cd284;
L_cd214:
    X86_TICK(c, 16);
    // 0cd214  mov eax, dword ptr [0xb032a]
    X86_AT(c, 0xcd214u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xB032Au)));
    // 0cd219  cmp dword ptr [eax*4 + 0xb03d2], 0
    X86_AT(c, 0xcd219u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[0] * 4 + 0xB03D2u))), 0x0u, 0, 4);
    // 0cd221  jne 0xcd231
    X86_AT(c, 0xcd221u);
    if (x86_cc(c, 5)) { goto L_cd231; }
    X86_TICK(c, 9);
    // 0cd223  push 7
    X86_AT(c, 0xcd223u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cd225  call 0xca3cc
    X86_AT(c, 0xcd225u);
    push32(c, 0xcd22au); x86_call_known(c, 0xca3ccu, f_000ca3cc); X86_RET(c, 0xcd22au);
    X86_TICK(c, 9);
    // 0cd22a  push 0x27e4
    X86_AT(c, 0xcd22au);
    { uint32_t v = 0x27E4u; push32(c, v); }
    // 0cd22f  jmp 0xcd26e
    X86_AT(c, 0xcd22fu);
    goto L_cd26e;
L_cd231:
    X86_TICK(c, 22);
    // 0cd231  mov eax, dword ptr [0xb032a]
    X86_AT(c, 0xcd231u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xB032Au)));
    // 0cd236  dec dword ptr [eax*4 + 0xb03d2]
    X86_AT(c, 0xcd236u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[0] * 4 + 0xB03D2u)); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 0cd23d  cmp dword ptr [0xb52f8], 3
    X86_AT(c, 0xcd23du);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xB52F8u))), 0x3u, 0, 4);
    // 0cd244  jne 0xcd253
    X86_AT(c, 0xcd244u);
    if (x86_cc(c, 5)) { goto L_cd253; }
    X86_TICK(c, 11);
    // 0cd246  push 1
    X86_AT(c, 0xcd246u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0cd248  push eax
    X86_AT(c, 0xcd248u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0cd249  call 0xccc9c
    X86_AT(c, 0xcd249u);
    push32(c, 0xcd24eu); x86_call_known(c, 0xccc9cu, f_000ccc9c); X86_RET(c, 0xcd24eu);
    X86_TICK(c, 9);
    // 0cd24e  add esp, 8
    X86_AT(c, 0xcd24eu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0cd251  jmp 0xcd284
    X86_AT(c, 0xcd251u);
    goto L_cd284;
L_cd253:
    X86_TICK(c, 11);
    // 0cd253  mov eax, dword ptr [0xb032a]
    X86_AT(c, 0xcd253u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xB032Au)));
    // 0cd258  cmp eax, 3
    X86_AT(c, 0xcd258u);
    (void)x86_sub(c, c.r[0], 0x3u, 0, 4);
    // 0cd25b  je 0xcd27f
    X86_AT(c, 0xcd25bu);
    if (x86_cc(c, 4)) { goto L_cd27f; }
    X86_TICK(c, 7);
    // 0cd25d  cmp eax, 0xa
    X86_AT(c, 0xcd25du);
    (void)x86_sub(c, c.r[0], 0xAu, 0, 4);
    // 0cd260  je 0xcd27f
    X86_AT(c, 0xcd260u);
    if (x86_cc(c, 4)) { goto L_cd27f; }
    X86_TICK(c, 9);
    // 0cd262  push 7
    X86_AT(c, 0xcd262u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cd264  call 0xca3cc
    X86_AT(c, 0xcd264u);
    push32(c, 0xcd269u); x86_call_known(c, 0xca3ccu, f_000ca3cc); X86_RET(c, 0xcd269u);
    X86_TICK(c, 2);
    // 0cd269  push 0x282c
    X86_AT(c, 0xcd269u);
    { uint32_t v = 0x282Cu; push32(c, v); }
L_cd26e:
    X86_TICK(c, 7);
    // 0cd26e  call 0xcc7bc
    X86_AT(c, 0xcd26eu);
    push32(c, 0xcd273u); x86_call_known(c, 0xcc7bcu, f_000cc7bc); X86_RET(c, 0xcd273u);
    X86_TICK(c, 9);
    // 0cd273  push 5
    X86_AT(c, 0xcd273u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0cd275  call 0xc5ca4
    X86_AT(c, 0xcd275u);
    push32(c, 0xcd27au); x86_call_known(c, 0xc5ca4u, f_000c5ca4); X86_RET(c, 0xcd27au);
    X86_TICK(c, 9);
    // 0cd27a  add esp, 0xc
    X86_AT(c, 0xcd27au);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0cd27d  jmp 0xcd284
    X86_AT(c, 0xcd27du);
    goto L_cd284;
L_cd27f:
    X86_TICK(c, 7);
    // 0cd27f  call 0xcd0a4
    X86_AT(c, 0xcd27fu);
    push32(c, 0xcd284u); x86_call_known(c, 0xcd0a4u, f_000cd0a4); X86_RET(c, 0xcd284u);
L_cd284:
    X86_TICK(c, 10);
    // 0cd284  ret 
    X86_AT(c, 0xcd284u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xcd1a8u, "ran off the end of a function");
}
void f_000cd284(X86Cpu& c) {
    X86_TICK(c, 10);
    // 0cd284  ret 
    X86_AT(c, 0xcd284u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xcd284u, "ran off the end of a function");
}
void f_000cd288(X86Cpu& c) {
    X86_TICK(c, 29);
    // 0cd288  push ebp
    X86_AT(c, 0xcd288u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0cd289  mov ebp, esp
    X86_AT(c, 0xcd289u);
    c.r[5] = c.r[4];
    // 0cd28b  push eax
    X86_AT(c, 0xcd28bu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0cd28c  push ebx
    X86_AT(c, 0xcd28cu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0cd28d  push esi
    X86_AT(c, 0xcd28du);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0cd28e  push edi
    X86_AT(c, 0xcd28eu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0cd28f  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0xcd28fu);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0cd292  movzx esi, byte ptr [0x92494]
    X86_AT(c, 0xcd292u);
    c.r[6] = rd8((c.sbase[3] + (uint32_t)(0x92494u)));
    // 0cd299  cmp esi, 0x40
    X86_AT(c, 0xcd299u);
    (void)x86_sub(c, c.r[6], 0x40u, 0, 4);
    // 0cd29c  je 0xcd2bc
    X86_AT(c, 0xcd29cu);
    if (x86_cc(c, 4)) { goto L_cd2bc; }
    X86_TICK(c, 7);
    // 0cd29e  cmp esi, 0x41
    X86_AT(c, 0xcd29eu);
    (void)x86_sub(c, c.r[6], 0x41u, 0, 4);
    // 0cd2a1  je 0xcd2bc
    X86_AT(c, 0xcd2a1u);
    if (x86_cc(c, 4)) { goto L_cd2bc; }
    X86_TICK(c, 7);
    // 0cd2a3  cmp esi, 0x42
    X86_AT(c, 0xcd2a3u);
    (void)x86_sub(c, c.r[6], 0x42u, 0, 4);
    // 0cd2a6  je 0xcd2bc
    X86_AT(c, 0xcd2a6u);
    if (x86_cc(c, 4)) { goto L_cd2bc; }
    X86_TICK(c, 11);
    // 0cd2a8  push 0xf
    X86_AT(c, 0xcd2a8u);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0cd2aa  push 0x2880
    X86_AT(c, 0xcd2aau);
    { uint32_t v = 0x2880u; push32(c, v); }
    // 0cd2af  call 0xcc830
    X86_AT(c, 0xcd2afu);
    push32(c, 0xcd2b4u); x86_call_known(c, 0xcc830u, f_000cc830); X86_RET(c, 0xcd2b4u);
    X86_TICK(c, 9);
    // 0cd2b4  add esp, 8
    X86_AT(c, 0xcd2b4u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0cd2b7  jmp 0xcd3d4
    X86_AT(c, 0xcd2b7u);
    goto L_cd3d4;
L_cd2bc:
    X86_TICK(c, 11);
    // 0cd2bc  push 0xf
    X86_AT(c, 0xcd2bcu);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0cd2be  push 0x2890
    X86_AT(c, 0xcd2beu);
    { uint32_t v = 0x2890u; push32(c, v); }
    // 0cd2c3  call 0xcc830
    X86_AT(c, 0xcd2c3u);
    push32(c, 0xcd2c8u); x86_call_known(c, 0xcc830u, f_000cc830); X86_RET(c, 0xcd2c8u);
    X86_TICK(c, 9);
    // 0cd2c8  push 5
    X86_AT(c, 0xcd2c8u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0cd2ca  call 0xc5ca4
    X86_AT(c, 0xcd2cau);
    push32(c, 0xcd2cfu); x86_call_known(c, 0xc5ca4u, f_000c5ca4); X86_RET(c, 0xcd2cfu);
    X86_TICK(c, 11);
    // 0cd2cf  add esp, 0xc
    X86_AT(c, 0xcd2cfu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0cd2d2  mov edx, esi
    X86_AT(c, 0xcd2d2u);
    c.r[2] = c.r[6];
    // 0cd2d4  cmp edx, 0x40
    X86_AT(c, 0xcd2d4u);
    (void)x86_sub(c, c.r[2], 0x40u, 0, 4);
    // 0cd2d7  je 0xcd2ec
    X86_AT(c, 0xcd2d7u);
    if (x86_cc(c, 4)) { goto L_cd2ec; }
    X86_TICK(c, 7);
    // 0cd2d9  cmp edx, 0x41
    X86_AT(c, 0xcd2d9u);
    (void)x86_sub(c, c.r[2], 0x41u, 0, 4);
    // 0cd2dc  je 0xcd35a
    X86_AT(c, 0xcd2dcu);
    if (x86_cc(c, 4)) { goto L_cd35a; }
    X86_TICK(c, 7);
    // 0cd2de  cmp edx, 0x42
    X86_AT(c, 0xcd2deu);
    (void)x86_sub(c, c.r[2], 0x42u, 0, 4);
    // 0cd2e1  je 0xcd39e
    X86_AT(c, 0xcd2e1u);
    if (x86_cc(c, 4)) { goto L_cd39e; }
    X86_TICK(c, 7);
    // 0cd2e7  jmp 0xcd3d4
    X86_AT(c, 0xcd2e7u);
    goto L_cd3d4;
L_cd2ec:
    X86_TICK(c, 11);
    // 0cd2ec  push 6
    X86_AT(c, 0xcd2ecu);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0cd2ee  push 1
    X86_AT(c, 0xcd2eeu);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0cd2f0  call 0xc5df0
    X86_AT(c, 0xcd2f0u);
    push32(c, 0xcd2f5u); x86_call_known(c, 0xc5df0u, f_000c5df0); X86_RET(c, 0xcd2f5u);
    X86_TICK(c, 64);
    // 0cd2f5  xchg ebx, eax
    X86_AT(c, 0xcd2f5u);
    { uint32_t t = c.r[3]; c.r[3] = c.r[0]; c.r[0] = t; }
    // 0cd2f6  push 3
    X86_AT(c, 0xcd2f6u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0cd2f8  mov eax, edi
    X86_AT(c, 0xcd2f8u);
    c.r[0] = c.r[7];
    // 0cd2fa  cdq 
    X86_AT(c, 0xcd2fau);
    c.r[2] = (c.r[0] & 0x80000000u) ? 0xFFFFFFFFu : 0u;
    // 0cd2fb  mov ecx, 0xa
    X86_AT(c, 0xcd2fbu);
    c.r[1] = 0xAu;
    // 0cd300  idiv ecx
    X86_AT(c, 0xcd300u);
    x86_idiv(c, c.r[1], 4, 0xcd300u);
    // 0cd302  push eax
    X86_AT(c, 0xcd302u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0cd303  push 7
    X86_AT(c, 0xcd303u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cd305  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0xcd305u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
    // 0cd308  call 0xc8cb8
    X86_AT(c, 0xcd308u);
    push32(c, 0xcd30du); x86_call_known(c, 0xc8cb8u, f_000c8cb8); X86_RET(c, 0xcd30du);
    X86_TICK(c, 9);
    // 0cd30d  push 0x28b0
    X86_AT(c, 0xcd30du);
    { uint32_t v = 0x28B0u; push32(c, v); }
    // 0cd312  call 0xcc7bc
    X86_AT(c, 0xcd312u);
    push32(c, 0xcd317u); x86_call_known(c, 0xcc7bcu, f_000cc7bc); X86_RET(c, 0xcd317u);
    X86_TICK(c, 14);
    // 0cd317  push dword ptr [ebx*4 + 0xa1eb8]
    X86_AT(c, 0xcd317u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] * 4 + 0xA1EB8u))); push32(c, v); }
    // 0cd31e  push 7
    X86_AT(c, 0xcd31eu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cd320  call 0xc8cdc
    X86_AT(c, 0xcd320u);
    push32(c, 0xcd325u); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xcd325u);
    X86_TICK(c, 9);
    // 0cd325  push 0x28bc
    X86_AT(c, 0xcd325u);
    { uint32_t v = 0x28BCu; push32(c, v); }
    // 0cd32a  call 0xcc7bc
    X86_AT(c, 0xcd32au);
    push32(c, 0xcd32fu); x86_call_known(c, 0xcc7bcu, f_000cc7bc); X86_RET(c, 0xcd32fu);
    X86_TICK(c, 25);
    // 0cd32f  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0xcd32fu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0cd332  add dword ptr [ebx*4 + 0xb02fe], eax
    X86_AT(c, 0xcd332u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3] * 4 + 0xB02FEu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 0cd339  add esp, 0x24
    X86_AT(c, 0xcd339u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x24u, 0, 4); }
    // 0cd33c  cmp dword ptr [ebx*4 + 0xb02fe], 0x63
    X86_AT(c, 0xcd33cu);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[3] * 4 + 0xB02FEu))), 0x63u, 0, 4);
    // 0cd344  jle 0xcd3d4
    X86_AT(c, 0xcd344u);
    if (x86_cc(c, 14)) { goto L_cd3d4; }
    X86_TICK(c, 9);
    // 0cd34a  mov dword ptr [ebx*4 + 0xb02fe], 0x63
    X86_AT(c, 0xcd34au);
    wr32((c.sbase[3] + (uint32_t)(c.r[3] * 4 + 0xB02FEu)), 0x63u);
    // 0cd355  jmp 0xcd3d4
    X86_AT(c, 0xcd355u);
    goto L_cd3d4;
L_cd35a:
    X86_TICK(c, 7);
    // 0cd35a  cmp edi, 0xa
    X86_AT(c, 0xcd35au);
    (void)x86_sub(c, c.r[7], 0xAu, 0, 4);
    // 0cd35d  jl 0xcd3d4
    X86_AT(c, 0xcd35du);
    if (x86_cc(c, 12)) { goto L_cd3d4; }
    X86_TICK(c, 11);
    // 0cd35f  push 0xf
    X86_AT(c, 0xcd35fu);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0cd361  push 1
    X86_AT(c, 0xcd361u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0cd363  call 0xc5df0
    X86_AT(c, 0xcd363u);
    push32(c, 0xcd368u); x86_call_known(c, 0xc5df0u, f_000c5df0); X86_RET(c, 0xcd368u);
    X86_TICK(c, 16);
    // 0cd368  xchg ebx, eax
    X86_AT(c, 0xcd368u);
    { uint32_t t = c.r[3]; c.r[3] = c.r[0]; c.r[0] = t; }
    // 0cd369  add esp, 8
    X86_AT(c, 0xcd369u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0cd36c  mov eax, dword ptr [ebx*4 + 0xb0392]
    X86_AT(c, 0xcd36cu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3] * 4 + 0xB0392u)));
    // 0cd373  cmp eax, 0xff
    X86_AT(c, 0xcd373u);
    (void)x86_sub(c, c.r[0], 0xFFu, 0, 4);
    // 0cd378  jge 0xcd3d4
    X86_AT(c, 0xcd378u);
    if (x86_cc(c, 13)) { goto L_cd3d4; }
    X86_TICK(c, 20);
    // 0cd37a  inc dword ptr [ebx*4 + 0xb0392]
    X86_AT(c, 0xcd37au);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3] * 4 + 0xB0392u)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0cd381  push dword ptr [ebx*4 + 0xab054]
    X86_AT(c, 0xcd381u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] * 4 + 0xAB054u))); push32(c, v); }
    // 0cd388  push 7
    X86_AT(c, 0xcd388u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cd38a  call 0xc8cdc
    X86_AT(c, 0xcd38au);
    push32(c, 0xcd38fu); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xcd38fu);
    X86_TICK(c, 9);
    // 0cd38f  push 0x28c8
    X86_AT(c, 0xcd38fu);
    { uint32_t v = 0x28C8u; push32(c, v); }
    // 0cd394  call 0xcc7bc
    X86_AT(c, 0xcd394u);
    push32(c, 0xcd399u); x86_call_known(c, 0xcc7bcu, f_000cc7bc); X86_RET(c, 0xcd399u);
    X86_TICK(c, 9);
    // 0cd399  add esp, 0xc
    X86_AT(c, 0xcd399u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0cd39c  jmp 0xcd3d4
    X86_AT(c, 0xcd39cu);
    goto L_cd3d4;
L_cd39e:
    X86_TICK(c, 22);
    // 0cd39e  lea eax, [edi + edi*2]
    X86_AT(c, 0xcd39eu);
    c.r[0] = (uint32_t)(c.r[7] + c.r[7] * 2);
    // 0cd3a1  add dword ptr [0xb0322], eax
    X86_AT(c, 0xcd3a1u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xB0322u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 0cd3a7  push 0x28d8
    X86_AT(c, 0xcd3a7u);
    { uint32_t v = 0x28D8u; push32(c, v); }
    // 0cd3ac  push 7
    X86_AT(c, 0xcd3acu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cd3ae  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0xcd3aeu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
    // 0cd3b1  call 0xc8cdc
    X86_AT(c, 0xcd3b1u);
    push32(c, 0xcd3b6u); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xcd3b6u);
    X86_TICK(c, 16);
    // 0cd3b6  push 4
    X86_AT(c, 0xcd3b6u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0cd3b8  push dword ptr [ebp - 4]
    X86_AT(c, 0xcd3b8u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))); push32(c, v); }
    // 0cd3bb  push 7
    X86_AT(c, 0xcd3bbu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cd3bd  call 0xc8cb8
    X86_AT(c, 0xcd3bdu);
    push32(c, 0xcd3c2u); x86_call_known(c, 0xc8cb8u, f_000c8cb8); X86_RET(c, 0xcd3c2u);
    X86_TICK(c, 9);
    // 0cd3c2  push 0x28e0
    X86_AT(c, 0xcd3c2u);
    { uint32_t v = 0x28E0u; push32(c, v); }
    // 0cd3c7  call 0xcc7bc
    X86_AT(c, 0xcd3c7u);
    push32(c, 0xcd3ccu); x86_call_known(c, 0xcc7bcu, f_000cc7bc); X86_RET(c, 0xcd3ccu);
    X86_TICK(c, 7);
    // 0cd3cc  call 0xcc66c
    X86_AT(c, 0xcd3ccu);
    push32(c, 0xcd3d1u); x86_call_known(c, 0xcc66cu, f_000cc66c); X86_RET(c, 0xcd3d1u);
    X86_TICK(c, 2);
    // 0cd3d1  add esp, 0x18
    X86_AT(c, 0xcd3d1u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x18u, 0, 4); }
L_cd3d4:
    X86_TICK(c, 28);
    // 0cd3d4  pop edi
    X86_AT(c, 0xcd3d4u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0cd3d5  pop esi
    X86_AT(c, 0xcd3d5u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0cd3d6  pop ebx
    X86_AT(c, 0xcd3d6u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0cd3d7  leave 
    X86_AT(c, 0xcd3d7u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0cd3d8  ret 
    X86_AT(c, 0xcd3d8u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xcd288u, "ran off the end of a function");
}
void f_000cd3d4(X86Cpu& c) {
    X86_TICK(c, 28);
    // 0cd3d4  pop edi
    X86_AT(c, 0xcd3d4u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0cd3d5  pop esi
    X86_AT(c, 0xcd3d5u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0cd3d6  pop ebx
    X86_AT(c, 0xcd3d6u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0cd3d7  leave 
    X86_AT(c, 0xcd3d7u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0cd3d8  ret 
    X86_AT(c, 0xcd3d8u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xcd3d4u, "ran off the end of a function");
}
void f_000cd3dc(X86Cpu& c) {
    X86_TICK(c, 13);
    // 0cd3dc  push esi
    X86_AT(c, 0xcd3dcu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0cd3dd  push edi
    X86_AT(c, 0xcd3ddu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0cd3de  push 7
    X86_AT(c, 0xcd3deu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cd3e0  call 0xca0a0
    X86_AT(c, 0xcd3e0u);
    push32(c, 0xcd3e5u); x86_call_known(c, 0xca0a0u, f_000ca0a0); X86_RET(c, 0xcd3e5u);
    X86_TICK(c, 11);
    // 0cd3e5  push 0x28f8
    X86_AT(c, 0xcd3e5u);
    { uint32_t v = 0x28F8u; push32(c, v); }
    // 0cd3ea  push 7
    X86_AT(c, 0xcd3eau);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cd3ec  call 0xc8cdc
    X86_AT(c, 0xcd3ecu);
    push32(c, 0xcd3f1u); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xcd3f1u);
    X86_TICK(c, 11);
    // 0cd3f1  push 0x18
    X86_AT(c, 0xcd3f1u);
    { uint32_t v = 0x18u; push32(c, v); }
    // 0cd3f3  push 0xc
    X86_AT(c, 0xcd3f3u);
    { uint32_t v = 0xCu; push32(c, v); }
    // 0cd3f5  call 0xd0038
    X86_AT(c, 0xcd3f5u);
    push32(c, 0xcd3fau); x86_call_known(c, 0xd0038u, f_000d0038); X86_RET(c, 0xcd3fau);
    X86_TICK(c, 12);
    // 0cd3fa  xchg edi, eax
    X86_AT(c, 0xcd3fau);
    { uint32_t t = c.r[7]; c.r[7] = c.r[0]; c.r[0] = t; }
    // 0cd3fb  add esp, 0x14
    X86_AT(c, 0xcd3fbu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x14u, 0, 4); }
    // 0cd3fe  and edi, edi
    X86_AT(c, 0xcd3feu);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & c.r[7], 4); }
    // 0cd400  jne 0xcd40b
    X86_AT(c, 0xcd400u);
    if (x86_cc(c, 5)) { goto L_cd40b; }
    X86_TICK(c, 11);
    // 0cd402  push 0xf
    X86_AT(c, 0xcd402u);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0cd404  push 0x2910
    X86_AT(c, 0xcd404u);
    { uint32_t v = 0x2910u; push32(c, v); }
    // 0cd409  jmp 0xcd46a
    X86_AT(c, 0xcd409u);
    goto L_cd46a;
L_cd40b:
    X86_TICK(c, 9);
    // 0cd40b  push 0x2922
    X86_AT(c, 0xcd40bu);
    { uint32_t v = 0x2922u; push32(c, v); }
    // 0cd410  call 0xcc7bc
    X86_AT(c, 0xcd410u);
    push32(c, 0xcd415u); x86_call_known(c, 0xcc7bcu, f_000cc7bc); X86_RET(c, 0xcd415u);
    X86_TICK(c, 13);
    // 0cd415  add esp, 4
    X86_AT(c, 0xcd415u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0cd418  cmp edi, dword ptr [0xb031a]
    X86_AT(c, 0xcd418u);
    (void)x86_sub(c, c.r[7], rd32((c.sbase[3] + (uint32_t)(0xB031Au))), 0, 4);
    // 0cd41e  jle 0xcd43b
    X86_AT(c, 0xcd41eu);
    if (x86_cc(c, 14)) { goto L_cd43b; }
    X86_TICK(c, 11);
    // 0cd420  push 0xf
    X86_AT(c, 0xcd420u);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0cd422  push 0x2924
    X86_AT(c, 0xcd422u);
    { uint32_t v = 0x2924u; push32(c, v); }
    // 0cd427  call 0xcc830
    X86_AT(c, 0xcd427u);
    push32(c, 0xcd42cu); x86_call_known(c, 0xcc830u, f_000cc830); X86_RET(c, 0xcd42cu);
    X86_TICK(c, 9);
    // 0cd42c  push 1
    X86_AT(c, 0xcd42cu);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0cd42e  call 0xc5ca4
    X86_AT(c, 0xcd42eu);
    push32(c, 0xcd433u); x86_call_known(c, 0xc5ca4u, f_000c5ca4); X86_RET(c, 0xcd433u);
    X86_TICK(c, 9);
    // 0cd433  add esp, 0xc
    X86_AT(c, 0xcd433u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0cd436  jmp 0xcd51a
    X86_AT(c, 0xcd436u);
    goto L_cd51a;
L_cd43b:
    X86_TICK(c, 14);
    // 0cd43b  sub dword ptr [0xb031a], edi
    X86_AT(c, 0xcd43bu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xB031Au)); uint32_t v = rd32(ea); wr32(ea, x86_sub(c, v, c.r[7], 0, 4)); }
    // 0cd441  call 0xcc6cc
    X86_AT(c, 0xcd441u);
    push32(c, 0xcd446u); x86_call_known(c, 0xcc6ccu, f_000cc6cc); X86_RET(c, 0xcd446u);
    X86_TICK(c, 12);
    // 0cd446  cmp dword ptr [0xb52f8], 2
    X86_AT(c, 0xcd446u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xB52F8u))), 0x2u, 0, 4);
    // 0cd44d  jne 0xcd45a
    X86_AT(c, 0xcd44du);
    if (x86_cc(c, 5)) { goto L_cd45a; }
    X86_TICK(c, 9);
    // 0cd44f  push edi
    X86_AT(c, 0xcd44fu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0cd450  call 0xcd288
    X86_AT(c, 0xcd450u);
    push32(c, 0xcd455u); x86_call_known(c, 0xcd288u, f_000cd288); X86_RET(c, 0xcd455u);
    X86_TICK(c, 7);
    // 0cd455  jmp 0xcd517
    X86_AT(c, 0xcd455u);
    goto L_cd517;
L_cd45a:
    X86_TICK(c, 12);
    // 0cd45a  cmp byte ptr [0x92494], 0x40
    X86_AT(c, 0xcd45au);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0x92494u))), 0x40u, 0, 1);
    // 0cd461  je 0xcd477
    X86_AT(c, 0xcd461u);
    if (x86_cc(c, 4)) { goto L_cd477; }
    X86_TICK(c, 4);
    // 0cd463  push 0xf
    X86_AT(c, 0xcd463u);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0cd465  push 0x2974
    X86_AT(c, 0xcd465u);
    { uint32_t v = 0x2974u; push32(c, v); }
L_cd46a:
    X86_TICK(c, 7);
    // 0cd46a  call 0xcc830
    X86_AT(c, 0xcd46au);
    push32(c, 0xcd46fu); x86_call_known(c, 0xcc830u, f_000cc830); X86_RET(c, 0xcd46fu);
    X86_TICK(c, 9);
    // 0cd46f  add esp, 8
    X86_AT(c, 0xcd46fu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0cd472  jmp 0xcd51a
    X86_AT(c, 0xcd472u);
    goto L_cd51a;
L_cd477:
    X86_TICK(c, 26);
    // 0cd477  lea esi, [edi + edi*2]
    X86_AT(c, 0xcd477u);
    c.r[6] = (uint32_t)(c.r[7] + c.r[7] * 2);
    // 0cd47a  xchg esi, eax
    X86_AT(c, 0xcd47au);
    { uint32_t t = c.r[6]; c.r[6] = c.r[0]; c.r[0] = t; }
    // 0cd47b  cdq 
    X86_AT(c, 0xcd47bu);
    c.r[2] = (c.r[0] & 0x80000000u) ? 0xFFFFFFFFu : 0u;
    // 0cd47c  sub eax, edx
    X86_AT(c, 0xcd47cu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[2], 0, 4); }
    // 0cd47e  sar eax, 1
    X86_AT(c, 0xcd47eu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 7, v, 0x1u, 4, w); if (w) c.r[0] = r; }
    // 0cd480  xchg esi, eax
    X86_AT(c, 0xcd480u);
    { uint32_t t = c.r[6]; c.r[6] = c.r[0]; c.r[0] = t; }
    // 0cd481  push 0x2984
    X86_AT(c, 0xcd481u);
    { uint32_t v = 0x2984u; push32(c, v); }
    // 0cd486  push 7
    X86_AT(c, 0xcd486u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cd488  call 0xc8cdc
    X86_AT(c, 0xcd488u);
    push32(c, 0xcd48du); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xcd48du);
    X86_TICK(c, 13);
    // 0cd48d  push 4
    X86_AT(c, 0xcd48du);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0cd48f  push esi
    X86_AT(c, 0xcd48fu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0cd490  push 7
    X86_AT(c, 0xcd490u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cd492  call 0xc8cb8
    X86_AT(c, 0xcd492u);
    push32(c, 0xcd497u); x86_call_known(c, 0xc8cb8u, f_000c8cb8); X86_RET(c, 0xcd497u);
    X86_TICK(c, 9);
    // 0cd497  push 0x2998
    X86_AT(c, 0xcd497u);
    { uint32_t v = 0x2998u; push32(c, v); }
    // 0cd49c  call 0xcc7bc
    X86_AT(c, 0xcd49cu);
    push32(c, 0xcd4a1u); x86_call_known(c, 0xcc7bcu, f_000cc7bc); X86_RET(c, 0xcd4a1u);
    X86_TICK(c, 14);
    // 0cd4a1  add dword ptr [0xb02fe], esi
    X86_AT(c, 0xcd4a1u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xB02FEu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[6], 0, 4)); }
    // 0cd4a7  call 0xcc628
    X86_AT(c, 0xcd4a7u);
    push32(c, 0xcd4acu); x86_call_known(c, 0xcc628u, f_000cc628); X86_RET(c, 0xcd4acu);
    X86_TICK(c, 11);
    // 0cd4ac  push 0xff
    X86_AT(c, 0xcd4acu);
    { uint32_t v = 0xFFu; push32(c, v); }
    // 0cd4b1  push 1
    X86_AT(c, 0xcd4b1u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0cd4b3  call 0xc5df0
    X86_AT(c, 0xcd4b3u);
    push32(c, 0xcd4b8u); x86_call_known(c, 0xc5df0u, f_000c5df0); X86_RET(c, 0xcd4b8u);
    X86_TICK(c, 9);
    // 0cd4b8  add esp, 0x20
    X86_AT(c, 0xcd4b8u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x20u, 0, 4); }
    // 0cd4bb  cmp eax, 0x10
    X86_AT(c, 0xcd4bbu);
    (void)x86_sub(c, c.r[0], 0x10u, 0, 4);
    // 0cd4be  jle 0xcd4d1
    X86_AT(c, 0xcd4beu);
    if (x86_cc(c, 14)) { goto L_cd4d1; }
    X86_TICK(c, 11);
    // 0cd4c0  push 0xf
    X86_AT(c, 0xcd4c0u);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0cd4c2  push 0x29b8
    X86_AT(c, 0xcd4c2u);
    { uint32_t v = 0x29B8u; push32(c, v); }
    // 0cd4c7  call 0xcc830
    X86_AT(c, 0xcd4c7u);
    push32(c, 0xcd4ccu); x86_call_known(c, 0xcc830u, f_000cc830); X86_RET(c, 0xcd4ccu);
    X86_TICK(c, 9);
    // 0cd4cc  add esp, 8
    X86_AT(c, 0xcd4ccu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0cd4cf  jmp 0xcd510
    X86_AT(c, 0xcd4cfu);
    goto L_cd510;
L_cd4d1:
    X86_TICK(c, 11);
    // 0cd4d1  push 7
    X86_AT(c, 0xcd4d1u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cd4d3  push 1
    X86_AT(c, 0xcd4d3u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0cd4d5  call 0xc5df0
    X86_AT(c, 0xcd4d5u);
    push32(c, 0xcd4dau); x86_call_known(c, 0xc5df0u, f_000c5df0); X86_RET(c, 0xcd4dau);
    X86_TICK(c, 12);
    // 0cd4da  xchg edi, eax
    X86_AT(c, 0xcd4dau);
    { uint32_t t = c.r[7]; c.r[7] = c.r[0]; c.r[0] = t; }
    // 0cd4db  add esp, 8
    X86_AT(c, 0xcd4dbu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0cd4de  cmp edi, 3
    X86_AT(c, 0xcd4deu);
    (void)x86_sub(c, c.r[7], 0x3u, 0, 4);
    // 0cd4e1  jne 0xcd4e4
    X86_AT(c, 0xcd4e1u);
    if (x86_cc(c, 5)) { goto L_cd4e4; }
    X86_TICK(c, 2);
    // 0cd4e3  inc edi
    X86_AT(c, 0xcd4e3u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
L_cd4e4:
    X86_TICK(c, 17);
    // 0cd4e4  inc dword ptr [edi*4 + 0xb03d6]
    X86_AT(c, 0xcd4e4u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] * 4 + 0xB03D6u)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0cd4eb  push 0xf
    X86_AT(c, 0xcd4ebu);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0cd4ed  push 0x29d8
    X86_AT(c, 0xcd4edu);
    { uint32_t v = 0x29D8u; push32(c, v); }
    // 0cd4f2  call 0xcc830
    X86_AT(c, 0xcd4f2u);
    push32(c, 0xcd4f7u); x86_call_known(c, 0xcc830u, f_000cc830); X86_RET(c, 0xcd4f7u);
    X86_TICK(c, 12);
    // 0cd4f7  push dword ptr [edi*4 + 0xa1e48]
    X86_AT(c, 0xcd4f7u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[7] * 4 + 0xA1E48u))); push32(c, v); }
    // 0cd4fe  call 0xcc7bc
    X86_AT(c, 0xcd4feu);
    push32(c, 0xcd503u); x86_call_known(c, 0xcc7bcu, f_000cc7bc); X86_RET(c, 0xcd503u);
    X86_TICK(c, 9);
    // 0cd503  push 0x2a00
    X86_AT(c, 0xcd503u);
    { uint32_t v = 0x2A00u; push32(c, v); }
    // 0cd508  call 0xcc7bc
    X86_AT(c, 0xcd508u);
    push32(c, 0xcd50du); x86_call_known(c, 0xcc7bcu, f_000cc7bc); X86_RET(c, 0xcd50du);
    X86_TICK(c, 2);
    // 0cd50d  add esp, 0x10
    X86_AT(c, 0xcd50du);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
L_cd510:
    X86_TICK(c, 9);
    // 0cd510  push 5
    X86_AT(c, 0xcd510u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0cd512  call 0xc5ca4
    X86_AT(c, 0xcd512u);
    push32(c, 0xcd517u); x86_call_known(c, 0xc5ca4u, f_000c5ca4); X86_RET(c, 0xcd517u);
L_cd517:
    X86_TICK(c, 2);
    // 0cd517  add esp, 4
    X86_AT(c, 0xcd517u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
L_cd51a:
    X86_TICK(c, 9);
    // 0cd51a  push 0x3c
    X86_AT(c, 0xcd51au);
    { uint32_t v = 0x3Cu; push32(c, v); }
    // 0cd51c  call 0xd6660
    X86_AT(c, 0xcd51cu);
    push32(c, 0xcd521u); x86_call_known(c, 0xd6660u, f_000d6660); X86_RET(c, 0xcd521u);
    X86_TICK(c, 20);
    // 0cd521  add esp, 4
    X86_AT(c, 0xcd521u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0cd524  pop edi
    X86_AT(c, 0xcd524u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0cd525  pop esi
    X86_AT(c, 0xcd525u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0cd526  ret 
    X86_AT(c, 0xcd526u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xcd3dcu, "ran off the end of a function");
}
void f_000cd51a(X86Cpu& c) {
    X86_TICK(c, 9);
    // 0cd51a  push 0x3c
    X86_AT(c, 0xcd51au);
    { uint32_t v = 0x3Cu; push32(c, v); }
    // 0cd51c  call 0xd6660
    X86_AT(c, 0xcd51cu);
    push32(c, 0xcd521u); x86_call_known(c, 0xd6660u, f_000d6660); X86_RET(c, 0xcd521u);
    X86_TICK(c, 20);
    // 0cd521  add esp, 4
    X86_AT(c, 0xcd521u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0cd524  pop edi
    X86_AT(c, 0xcd524u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0cd525  pop esi
    X86_AT(c, 0xcd525u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0cd526  ret 
    X86_AT(c, 0xcd526u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xcd51au, "ran off the end of a function");
}
void f_000cd528(X86Cpu& c) {
    X86_TICK(c, 11);
    // 0cd528  push 0xf
    X86_AT(c, 0xcd528u);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0cd52a  push 0x2a14
    X86_AT(c, 0xcd52au);
    { uint32_t v = 0x2A14u; push32(c, v); }
    // 0cd52f  call 0xcc830
    X86_AT(c, 0xcd52fu);
    push32(c, 0xcd534u); x86_call_known(c, 0xcc830u, f_000cc830); X86_RET(c, 0xcd534u);
    X86_TICK(c, 27);
    // 0cd534  push 9
    X86_AT(c, 0xcd534u);
    { uint32_t v = 0x9u; push32(c, v); }
    // 0cd536  push 0xf
    X86_AT(c, 0xcd536u);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0cd538  push 0xf
    X86_AT(c, 0xcd538u);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0cd53a  push 0x11
    X86_AT(c, 0xcd53au);
    { uint32_t v = 0x11u; push32(c, v); }
    // 0cd53c  push 0x29
    X86_AT(c, 0xcd53cu);
    { uint32_t v = 0x29u; push32(c, v); }
    // 0cd53e  push 0x11c
    X86_AT(c, 0xcd53eu);
    { uint32_t v = 0x11Cu; push32(c, v); }
    // 0cd543  push 0x13c
    X86_AT(c, 0xcd543u);
    { uint32_t v = 0x13Cu; push32(c, v); }
    // 0cd548  push 0x51
    X86_AT(c, 0xcd548u);
    { uint32_t v = 0x51u; push32(c, v); }
    // 0cd54a  push 0x1c
    X86_AT(c, 0xcd54au);
    { uint32_t v = 0x1Cu; push32(c, v); }
    // 0cd54c  push 4
    X86_AT(c, 0xcd54cu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0cd54e  call 0xc9fbc
    X86_AT(c, 0xcd54eu);
    push32(c, 0xcd553u); x86_call_known(c, 0xc9fbcu, f_000c9fbc); X86_RET(c, 0xcd553u);
    X86_TICK(c, 9);
    // 0cd553  push 4
    X86_AT(c, 0xcd553u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0cd555  call 0xca100
    X86_AT(c, 0xcd555u);
    push32(c, 0xcd55au); x86_call_known(c, 0xca100u, f_000ca100); X86_RET(c, 0xcd55au);
    X86_TICK(c, 9);
    // 0cd55a  push 7
    X86_AT(c, 0xcd55au);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cd55c  call 0xca0a0
    X86_AT(c, 0xcd55cu);
    push32(c, 0xcd561u); x86_call_known(c, 0xca0a0u, f_000ca0a0); X86_RET(c, 0xcd561u);
    X86_TICK(c, 12);
    // 0cd561  add esp, 0x38
    X86_AT(c, 0xcd561u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x38u, 0, 4); }
    // 0cd564  ret 
    X86_AT(c, 0xcd564u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xcd528u, "ran off the end of a function");
}
void f_000cd568(X86Cpu& c) {
    X86_TICK(c, 11);
    // 0cd568  push 0
    X86_AT(c, 0xcd568u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0cd56a  push 4
    X86_AT(c, 0xcd56au);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0cd56c  call 0xca2d4
    X86_AT(c, 0xcd56cu);
    push32(c, 0xcd571u); x86_call_known(c, 0xca2d4u, f_000ca2d4); X86_RET(c, 0xcd571u);
    X86_TICK(c, 14);
    // 0cd571  mov dword ptr [0xbef90], 1
    X86_AT(c, 0xcd571u);
    wr32((c.sbase[3] + (uint32_t)(0xBEF90u)), 0x1u);
    // 0cd57b  add esp, 8
    X86_AT(c, 0xcd57bu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0cd57e  ret 
    X86_AT(c, 0xcd57eu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xcd568u, "ran off the end of a function");
}
void f_000cd580(X86Cpu& c) {
    X86_TICK(c, 29);
    // 0cd580  push ebp
    X86_AT(c, 0xcd580u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0cd581  mov ebp, esp
    X86_AT(c, 0xcd581u);
    c.r[5] = c.r[4];
    // 0cd583  sub esp, 8
    X86_AT(c, 0xcd583u);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, 0x8u, 0, 4); }
    // 0cd586  push ebx
    X86_AT(c, 0xcd586u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0cd587  push esi
    X86_AT(c, 0xcd587u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0cd588  push edi
    X86_AT(c, 0xcd588u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0cd589  mov dword ptr [ebp - 8], 0
    X86_AT(c, 0xcd589u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), 0x0u);
    // 0cd590  mov bl, 0x42
    X86_AT(c, 0xcd590u);
    s8(c, 3, 0x42u);
    // 0cd592  mov esi, 4
    X86_AT(c, 0xcd592u);
    c.r[6] = 0x4u;
    // 0cd597  push 0xf
    X86_AT(c, 0xcd597u);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0cd599  push 0x2a24
    X86_AT(c, 0xcd599u);
    { uint32_t v = 0x2A24u; push32(c, v); }
    // 0cd59e  call 0xcc830
    X86_AT(c, 0xcd59eu);
    push32(c, 0xcd5a3u); x86_call_known(c, 0xcc830u, f_000cc830); X86_RET(c, 0xcd5a3u);
    X86_TICK(c, 4);
    // 0cd5a3  mov edi, 1
    X86_AT(c, 0xcd5a3u);
    c.r[7] = 0x1u;
    // 0cd5a8  add esp, 8
    X86_AT(c, 0xcd5a8u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
L_cd5ab:
    X86_TICK(c, 7);
    // 0cd5ab  cmp edi, 0xf
    X86_AT(c, 0xcd5abu);
    (void)x86_sub(c, c.r[7], 0xFu, 0, 4);
    // 0cd5ae  jg 0xcd5c0
    X86_AT(c, 0xcd5aeu);
    if (x86_cc(c, 15)) { goto L_cd5c0; }
    X86_TICK(c, 12);
    // 0cd5b0  cmp dword ptr [edi*4 + 0xb0392], 0
    X86_AT(c, 0xcd5b0u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[7] * 4 + 0xB0392u))), 0x0u, 0, 4);
    // 0cd5b8  je 0xcd5bd
    X86_AT(c, 0xcd5b8u);
    if (x86_cc(c, 4)) { goto L_cd5bd; }
    X86_TICK(c, 6);
    // 0cd5ba  inc dword ptr [ebp - 8]
    X86_AT(c, 0xcd5bau);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
L_cd5bd:
    X86_TICK(c, 9);
    // 0cd5bd  inc edi
    X86_AT(c, 0xcd5bdu);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0cd5be  jmp 0xcd5ab
    X86_AT(c, 0xcd5beu);
    X86_POLL(c, 0xcd5abu); goto L_cd5ab;
L_cd5c0:
    X86_TICK(c, 12);
    // 0cd5c0  cmp dword ptr [ebp - 8], 0
    X86_AT(c, 0xcd5c0u);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u))), 0x0u, 0, 4);
    // 0cd5c4  jne 0xcd5da
    X86_AT(c, 0xcd5c4u);
    if (x86_cc(c, 5)) { goto L_cd5da; }
    X86_TICK(c, 11);
    // 0cd5c6  push 0xf
    X86_AT(c, 0xcd5c6u);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0cd5c8  push 0x2a40
    X86_AT(c, 0xcd5c8u);
    { uint32_t v = 0x2A40u; push32(c, v); }
    // 0cd5cd  call 0xcc830
    X86_AT(c, 0xcd5cdu);
    push32(c, 0xcd5d2u); x86_call_known(c, 0xcc830u, f_000cc830); X86_RET(c, 0xcd5d2u);
    X86_TICK(c, 9);
    // 0cd5d2  add esp, 8
    X86_AT(c, 0xcd5d2u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0cd5d5  jmp 0xcd6d1
    X86_AT(c, 0xcd5d5u);
    goto L_cd6d1;
L_cd5da:
    X86_TICK(c, 7);
    // 0cd5da  call 0xcd528
    X86_AT(c, 0xcd5dau);
    push32(c, 0xcd5dfu); x86_call_known(c, 0xcd528u, f_000cd528); X86_RET(c, 0xcd5dfu);
    X86_TICK(c, 21);
    // 0cd5df  mov eax, dword ptr [ebp - 8]
    X86_AT(c, 0xcd5dfu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)));
    // 0cd5e2  cdq 
    X86_AT(c, 0xcd5e2u);
    c.r[2] = (c.r[0] & 0x80000000u) ? 0xFFFFFFFFu : 0u;
    // 0cd5e3  sub eax, edx
    X86_AT(c, 0xcd5e3u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[2], 0, 4); }
    // 0cd5e5  sar eax, 1
    X86_AT(c, 0xcd5e5u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 7, v, 0x1u, 4, w); if (w) c.r[0] = r; }
    // 0cd5e7  mov edx, 9
    X86_AT(c, 0xcd5e7u);
    c.r[2] = 0x9u;
    // 0cd5ec  sub edx, eax
    X86_AT(c, 0xcd5ecu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0cd5ee  mov dword ptr [ebp - 4], edx
    X86_AT(c, 0xcd5eeu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[2]);
    // 0cd5f1  mov dword ptr [ebp - 8], 0
    X86_AT(c, 0xcd5f1u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), 0x0u);
    // 0cd5f8  mov edi, 1
    X86_AT(c, 0xcd5f8u);
    c.r[7] = 0x1u;
L_cd5fd:
    X86_TICK(c, 7);
    // 0cd5fd  cmp edi, 0xf
    X86_AT(c, 0xcd5fdu);
    (void)x86_sub(c, c.r[7], 0xFu, 0, 4);
    // 0cd600  jg 0xcd646
    X86_AT(c, 0xcd600u);
    if (x86_cc(c, 15)) { goto L_cd646; }
    X86_TICK(c, 12);
    // 0cd602  cmp dword ptr [edi*4 + 0xb0392], 0
    X86_AT(c, 0xcd602u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[7] * 4 + 0xB0392u))), 0x0u, 0, 4);
    // 0cd60a  je 0xcd642
    X86_AT(c, 0xcd60au);
    if (x86_cc(c, 4)) { goto L_cd642; }
    X86_TICK(c, 23);
    // 0cd60c  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0xcd60cu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0cd60f  add eax, dword ptr [ebp - 8]
    X86_AT(c, 0xcd60fu);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u))), 0, 4); }
    // 0cd612  push eax
    X86_AT(c, 0xcd612u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0cd613  push 1
    X86_AT(c, 0xcd613u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0cd615  push esi
    X86_AT(c, 0xcd615u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0cd616  call 0xca9c8
    X86_AT(c, 0xcd616u);
    push32(c, 0xcd61bu); x86_call_known(c, 0xca9c8u, f_000ca9c8); X86_RET(c, 0xcd61bu);
    X86_TICK(c, 13);
    // 0cd61b  push 0xf
    X86_AT(c, 0xcd61bu);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0cd61d  push ebx
    X86_AT(c, 0xcd61du);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0cd61e  push esi
    X86_AT(c, 0xcd61eu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0cd61f  call 0xcc7dc
    X86_AT(c, 0xcd61fu);
    push32(c, 0xcd624u); x86_call_known(c, 0xcc7dcu, f_000cc7dc); X86_RET(c, 0xcd624u);
    X86_TICK(c, 11);
    // 0cd624  push 0x2a5c
    X86_AT(c, 0xcd624u);
    { uint32_t v = 0x2A5Cu; push32(c, v); }
    // 0cd629  push esi
    X86_AT(c, 0xcd629u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0cd62a  call 0xc8cdc
    X86_AT(c, 0xcd62au);
    push32(c, 0xcd62fu); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xcd62fu);
    X86_TICK(c, 14);
    // 0cd62f  push dword ptr [edi*4 + 0xa1de8]
    X86_AT(c, 0xcd62fu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[7] * 4 + 0xA1DE8u))); push32(c, v); }
    // 0cd636  push esi
    X86_AT(c, 0xcd636u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0cd637  call 0xc8cdc
    X86_AT(c, 0xcd637u);
    push32(c, 0xcd63cu); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xcd63cu);
    X86_TICK(c, 8);
    // 0cd63c  inc dword ptr [ebp - 8]
    X86_AT(c, 0xcd63cu);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0cd63f  add esp, 0x28
    X86_AT(c, 0xcd63fu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x28u, 0, 4); }
L_cd642:
    X86_TICK(c, 11);
    // 0cd642  inc ebx
    X86_AT(c, 0xcd642u);
    { uint32_t v = c.r[3]; c.r[3] = x86_inc(c, v, 4); }
    // 0cd643  inc edi
    X86_AT(c, 0xcd643u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0cd644  jmp 0xcd5fd
    X86_AT(c, 0xcd644u);
    X86_POLL(c, 0xcd5fdu); goto L_cd5fd;
L_cd646:
    X86_TICK(c, 11);
    // 0cd646  push 0x18
    X86_AT(c, 0xcd646u);
    { uint32_t v = 0x18u; push32(c, v); }
    // 0cd648  push 0xe
    X86_AT(c, 0xcd648u);
    { uint32_t v = 0xEu; push32(c, v); }
    // 0cd64a  call 0xcc814
    X86_AT(c, 0xcd64au);
    push32(c, 0xcd64fu); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xcd64fu);
    X86_TICK(c, 2);
    // 0cd64f  add esp, 8
    X86_AT(c, 0xcd64fu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
L_cd652:
    X86_TICK(c, 9);
    // 0cd652  push 7
    X86_AT(c, 0xcd652u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cd654  call 0xc81e4
    X86_AT(c, 0xcd654u);
    push32(c, 0xcd659u); x86_call_known(c, 0xc81e4u, f_000c81e4); X86_RET(c, 0xcd659u);
    X86_TICK(c, 12);
    // 0cd659  add esp, 4
    X86_AT(c, 0xcd659u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0cd65c  xchg ebx, eax
    X86_AT(c, 0xcd65cu);
    { uint32_t t = c.r[3]; c.r[3] = c.r[0]; c.r[0] = t; }
    // 0cd65d  and bl, bl
    X86_AT(c, 0xcd65du);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v & g8(c, 3), 1)); }
    // 0cd65f  je 0xcd652
    X86_AT(c, 0xcd65fu);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xcd652u); goto L_cd652; }
    X86_TICK(c, 9);
    // 0cd661  sub bl, 0x41
    X86_AT(c, 0xcd661u);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_sub(c, v, 0x41u, 0, 1)); }
    // 0cd664  cmp bl, 1
    X86_AT(c, 0xcd664u);
    (void)x86_sub(c, g8(c, 3), 0x1u, 0, 1);
    // 0cd667  jb 0xcd66e
    X86_AT(c, 0xcd667u);
    if (x86_cc(c, 2)) { goto L_cd66e; }
    X86_TICK(c, 7);
    // 0cd669  cmp bl, 0xf
    X86_AT(c, 0xcd669u);
    (void)x86_sub(c, g8(c, 3), 0xFu, 0, 1);
    // 0cd66c  jbe 0xcd677
    X86_AT(c, 0xcd66cu);
    if (x86_cc(c, 6)) { goto L_cd677; }
L_cd66e:
    X86_TICK(c, 11);
    // 0cd66e  push 0xf
    X86_AT(c, 0xcd66eu);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0cd670  push 0x2a60
    X86_AT(c, 0xcd670u);
    { uint32_t v = 0x2A60u; push32(c, v); }
    // 0cd675  jmp 0xcd68b
    X86_AT(c, 0xcd675u);
    goto L_cd68b;
L_cd677:
    X86_TICK(c, 15);
    // 0cd677  movzx ebx, bl
    X86_AT(c, 0xcd677u);
    c.r[3] = g8(c, 3);
    // 0cd67a  cmp dword ptr [ebx*4 + 0xb0392], 0
    X86_AT(c, 0xcd67au);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[3] * 4 + 0xB0392u))), 0x0u, 0, 4);
    // 0cd682  jne 0xcd695
    X86_AT(c, 0xcd682u);
    if (x86_cc(c, 5)) { goto L_cd695; }
    X86_TICK(c, 4);
    // 0cd684  push 0xf
    X86_AT(c, 0xcd684u);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0cd686  push 0x2a7c
    X86_AT(c, 0xcd686u);
    { uint32_t v = 0x2A7Cu; push32(c, v); }
L_cd68b:
    X86_TICK(c, 7);
    // 0cd68b  call 0xcc830
    X86_AT(c, 0xcd68bu);
    push32(c, 0xcd690u); x86_call_known(c, 0xcc830u, f_000cc830); X86_RET(c, 0xcd690u);
    X86_TICK(c, 9);
    // 0cd690  add esp, 8
    X86_AT(c, 0xcd690u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0cd693  jmp 0xcd6cc
    X86_AT(c, 0xcd693u);
    goto L_cd6cc;
L_cd695:
    X86_TICK(c, 17);
    // 0cd695  push 0xf
    X86_AT(c, 0xcd695u);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0cd697  movzx ebx, bl
    X86_AT(c, 0xcd697u);
    c.r[3] = g8(c, 3);
    // 0cd69a  push dword ptr [ebx*4 + 0xa1de8]
    X86_AT(c, 0xcd69au);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] * 4 + 0xA1DE8u))); push32(c, v); }
    // 0cd6a1  call 0xcc830
    X86_AT(c, 0xcd6a1u);
    push32(c, 0xcd6a6u); x86_call_known(c, 0xcc830u, f_000cc830); X86_RET(c, 0xcd6a6u);
    X86_TICK(c, 19);
    // 0cd6a6  dec dword ptr [ebx*4 + 0xb0392]
    X86_AT(c, 0xcd6a6u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3] * 4 + 0xB0392u)); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 0cd6ad  add esp, 8
    X86_AT(c, 0xcd6adu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0cd6b0  cmp ebx, dword ptr [0xb0326]
    X86_AT(c, 0xcd6b0u);
    (void)x86_sub(c, c.r[3], rd32((c.sbase[3] + (uint32_t)(0xB0326u))), 0, 4);
    // 0cd6b6  jne 0xcd6cc
    X86_AT(c, 0xcd6b6u);
    if (x86_cc(c, 5)) { goto L_cd6cc; }
    X86_TICK(c, 12);
    // 0cd6b8  cmp dword ptr [ebx*4 + 0xb0392], 0
    X86_AT(c, 0xcd6b8u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[3] * 4 + 0xB0392u))), 0x0u, 0, 4);
    // 0cd6c0  jne 0xcd6cc
    X86_AT(c, 0xcd6c0u);
    if (x86_cc(c, 5)) { goto L_cd6cc; }
    X86_TICK(c, 2);
    // 0cd6c2  mov dword ptr [0xb0326], 0
    X86_AT(c, 0xcd6c2u);
    wr32((c.sbase[3] + (uint32_t)(0xB0326u)), 0x0u);
L_cd6cc:
    X86_TICK(c, 7);
    // 0cd6cc  call 0xcd568
    X86_AT(c, 0xcd6ccu);
    push32(c, 0xcd6d1u); x86_call_known(c, 0xcd568u, f_000cd568); X86_RET(c, 0xcd6d1u);
L_cd6d1:
    X86_TICK(c, 28);
    // 0cd6d1  pop edi
    X86_AT(c, 0xcd6d1u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0cd6d2  pop esi
    X86_AT(c, 0xcd6d2u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0cd6d3  pop ebx
    X86_AT(c, 0xcd6d3u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0cd6d4  leave 
    X86_AT(c, 0xcd6d4u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0cd6d5  ret 
    X86_AT(c, 0xcd6d5u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xcd580u, "ran off the end of a function");
}
void f_000cd6d8(X86Cpu& c) {
    X86_TICK(c, 29);
    // 0cd6d8  push ebp
    X86_AT(c, 0xcd6d8u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0cd6d9  mov ebp, esp
    X86_AT(c, 0xcd6d9u);
    c.r[5] = c.r[4];
    // 0cd6db  sub esp, 8
    X86_AT(c, 0xcd6dbu);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, 0x8u, 0, 4); }
    // 0cd6de  push ebx
    X86_AT(c, 0xcd6deu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0cd6df  push esi
    X86_AT(c, 0xcd6dfu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0cd6e0  push edi
    X86_AT(c, 0xcd6e0u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0cd6e1  sub esi, esi
    X86_AT(c, 0xcd6e1u);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[6], 0, 4); }
    // 0cd6e3  mov bl, 0x42
    X86_AT(c, 0xcd6e3u);
    s8(c, 3, 0x42u);
    // 0cd6e5  mov dword ptr [ebp - 8], 4
    X86_AT(c, 0xcd6e5u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), 0x4u);
    // 0cd6ec  push 0xf
    X86_AT(c, 0xcd6ecu);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0cd6ee  push 0x2a98
    X86_AT(c, 0xcd6eeu);
    { uint32_t v = 0x2A98u; push32(c, v); }
    // 0cd6f3  call 0xcc830
    X86_AT(c, 0xcd6f3u);
    push32(c, 0xcd6f8u); x86_call_known(c, 0xcc830u, f_000cc830); X86_RET(c, 0xcd6f8u);
    X86_TICK(c, 4);
    // 0cd6f8  mov edi, 1
    X86_AT(c, 0xcd6f8u);
    c.r[7] = 0x1u;
    // 0cd6fd  add esp, 8
    X86_AT(c, 0xcd6fdu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
L_cd700:
    X86_TICK(c, 7);
    // 0cd700  cmp edi, 5
    X86_AT(c, 0xcd700u);
    (void)x86_sub(c, c.r[7], 0x5u, 0, 4);
    // 0cd703  jg 0xcd713
    X86_AT(c, 0xcd703u);
    if (x86_cc(c, 15)) { goto L_cd713; }
    X86_TICK(c, 12);
    // 0cd705  cmp dword ptr [edi*4 + 0xb037a], 0
    X86_AT(c, 0xcd705u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[7] * 4 + 0xB037Au))), 0x0u, 0, 4);
    // 0cd70d  je 0xcd710
    X86_AT(c, 0xcd70du);
    if (x86_cc(c, 4)) { goto L_cd710; }
    X86_TICK(c, 2);
    // 0cd70f  inc esi
    X86_AT(c, 0xcd70fu);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
L_cd710:
    X86_TICK(c, 9);
    // 0cd710  inc edi
    X86_AT(c, 0xcd710u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0cd711  jmp 0xcd700
    X86_AT(c, 0xcd711u);
    X86_POLL(c, 0xcd700u); goto L_cd700;
L_cd713:
    X86_TICK(c, 7);
    // 0cd713  and esi, esi
    X86_AT(c, 0xcd713u);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & c.r[6], 4); }
    // 0cd715  jne 0xcd72b
    X86_AT(c, 0xcd715u);
    if (x86_cc(c, 5)) { goto L_cd72b; }
    X86_TICK(c, 11);
    // 0cd717  push 0xf
    X86_AT(c, 0xcd717u);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0cd719  push 0x2ab4
    X86_AT(c, 0xcd719u);
    { uint32_t v = 0x2AB4u; push32(c, v); }
    // 0cd71e  call 0xcc830
    X86_AT(c, 0xcd71eu);
    push32(c, 0xcd723u); x86_call_known(c, 0xcc830u, f_000cc830); X86_RET(c, 0xcd723u);
    X86_TICK(c, 9);
    // 0cd723  add esp, 8
    X86_AT(c, 0xcd723u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0cd726  jmp 0xcd81e
    X86_AT(c, 0xcd726u);
    goto L_cd81e;
L_cd72b:
    X86_TICK(c, 7);
    // 0cd72b  call 0xcd528
    X86_AT(c, 0xcd72bu);
    push32(c, 0xcd730u); x86_call_known(c, 0xcd528u, f_000cd528); X86_RET(c, 0xcd730u);
    X86_TICK(c, 19);
    // 0cd730  mov eax, esi
    X86_AT(c, 0xcd730u);
    c.r[0] = c.r[6];
    // 0cd732  cdq 
    X86_AT(c, 0xcd732u);
    c.r[2] = (c.r[0] & 0x80000000u) ? 0xFFFFFFFFu : 0u;
    // 0cd733  sub eax, edx
    X86_AT(c, 0xcd733u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[2], 0, 4); }
    // 0cd735  sar eax, 1
    X86_AT(c, 0xcd735u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 7, v, 0x1u, 4, w); if (w) c.r[0] = r; }
    // 0cd737  mov edx, 9
    X86_AT(c, 0xcd737u);
    c.r[2] = 0x9u;
    // 0cd73c  sub edx, eax
    X86_AT(c, 0xcd73cu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0cd73e  mov dword ptr [ebp - 4], edx
    X86_AT(c, 0xcd73eu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[2]);
    // 0cd741  sub esi, esi
    X86_AT(c, 0xcd741u);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[6], 0, 4); }
    // 0cd743  mov edi, 1
    X86_AT(c, 0xcd743u);
    c.r[7] = 0x1u;
L_cd748:
    X86_TICK(c, 7);
    // 0cd748  cmp edi, 5
    X86_AT(c, 0xcd748u);
    (void)x86_sub(c, c.r[7], 0x5u, 0, 4);
    // 0cd74b  jg 0xcd793
    X86_AT(c, 0xcd74bu);
    if (x86_cc(c, 15)) { goto L_cd793; }
    X86_TICK(c, 12);
    // 0cd74d  cmp dword ptr [edi*4 + 0xb037a], 0
    X86_AT(c, 0xcd74du);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[7] * 4 + 0xB037Au))), 0x0u, 0, 4);
    // 0cd755  je 0xcd78f
    X86_AT(c, 0xcd755u);
    if (x86_cc(c, 4)) { goto L_cd78f; }
    X86_TICK(c, 17);
    // 0cd757  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0xcd757u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0cd75a  add eax, esi
    X86_AT(c, 0xcd75au);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, c.r[6], 0, 4); }
    // 0cd75c  push eax
    X86_AT(c, 0xcd75cu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0cd75d  push 1
    X86_AT(c, 0xcd75du);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0cd75f  call 0xcc814
    X86_AT(c, 0xcd75fu);
    push32(c, 0xcd764u); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xcd764u);
    X86_TICK(c, 16);
    // 0cd764  push 0xf
    X86_AT(c, 0xcd764u);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0cd766  push ebx
    X86_AT(c, 0xcd766u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0cd767  push dword ptr [ebp - 8]
    X86_AT(c, 0xcd767u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u))); push32(c, v); }
    // 0cd76a  call 0xcc7dc
    X86_AT(c, 0xcd76au);
    push32(c, 0xcd76fu); x86_call_known(c, 0xcc7dcu, f_000cc7dc); X86_RET(c, 0xcd76fu);
    X86_TICK(c, 14);
    // 0cd76f  push 0x2ad0
    X86_AT(c, 0xcd76fu);
    { uint32_t v = 0x2AD0u; push32(c, v); }
    // 0cd774  push dword ptr [ebp - 8]
    X86_AT(c, 0xcd774u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u))); push32(c, v); }
    // 0cd777  call 0xc8cdc
    X86_AT(c, 0xcd777u);
    push32(c, 0xcd77cu); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xcd77cu);
    X86_TICK(c, 17);
    // 0cd77c  push dword ptr [edi*4 + 0xa1e70]
    X86_AT(c, 0xcd77cu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[7] * 4 + 0xA1E70u))); push32(c, v); }
    // 0cd783  push dword ptr [ebp - 8]
    X86_AT(c, 0xcd783u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u))); push32(c, v); }
    // 0cd786  call 0xc8cdc
    X86_AT(c, 0xcd786u);
    push32(c, 0xcd78bu); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xcd78bu);
    X86_TICK(c, 4);
    // 0cd78b  inc esi
    X86_AT(c, 0xcd78bu);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 0cd78c  add esp, 0x24
    X86_AT(c, 0xcd78cu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x24u, 0, 4); }
L_cd78f:
    X86_TICK(c, 11);
    // 0cd78f  inc ebx
    X86_AT(c, 0xcd78fu);
    { uint32_t v = c.r[3]; c.r[3] = x86_inc(c, v, 4); }
    // 0cd790  inc edi
    X86_AT(c, 0xcd790u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0cd791  jmp 0xcd748
    X86_AT(c, 0xcd791u);
    X86_POLL(c, 0xcd748u); goto L_cd748;
L_cd793:
    X86_TICK(c, 11);
    // 0cd793  push 0x18
    X86_AT(c, 0xcd793u);
    { uint32_t v = 0x18u; push32(c, v); }
    // 0cd795  push 0xe
    X86_AT(c, 0xcd795u);
    { uint32_t v = 0xEu; push32(c, v); }
    // 0cd797  call 0xcc814
    X86_AT(c, 0xcd797u);
    push32(c, 0xcd79cu); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xcd79cu);
    X86_TICK(c, 2);
    // 0cd79c  add esp, 8
    X86_AT(c, 0xcd79cu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
L_cd79f:
    X86_TICK(c, 9);
    // 0cd79f  push 7
    X86_AT(c, 0xcd79fu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cd7a1  call 0xc81e4
    X86_AT(c, 0xcd7a1u);
    push32(c, 0xcd7a6u); x86_call_known(c, 0xc81e4u, f_000c81e4); X86_RET(c, 0xcd7a6u);
    X86_TICK(c, 12);
    // 0cd7a6  add esp, 4
    X86_AT(c, 0xcd7a6u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0cd7a9  xchg ebx, eax
    X86_AT(c, 0xcd7a9u);
    { uint32_t t = c.r[3]; c.r[3] = c.r[0]; c.r[0] = t; }
    // 0cd7aa  and bl, bl
    X86_AT(c, 0xcd7aau);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v & g8(c, 3), 1)); }
    // 0cd7ac  je 0xcd79f
    X86_AT(c, 0xcd7acu);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xcd79fu); goto L_cd79f; }
    X86_TICK(c, 9);
    // 0cd7ae  sub bl, 0x41
    X86_AT(c, 0xcd7aeu);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_sub(c, v, 0x41u, 0, 1)); }
    // 0cd7b1  cmp bl, 1
    X86_AT(c, 0xcd7b1u);
    (void)x86_sub(c, g8(c, 3), 0x1u, 0, 1);
    // 0cd7b4  jb 0xcd7bb
    X86_AT(c, 0xcd7b4u);
    if (x86_cc(c, 2)) { goto L_cd7bb; }
    X86_TICK(c, 7);
    // 0cd7b6  cmp bl, 5
    X86_AT(c, 0xcd7b6u);
    (void)x86_sub(c, g8(c, 3), 0x5u, 0, 1);
    // 0cd7b9  jbe 0xcd7c4
    X86_AT(c, 0xcd7b9u);
    if (x86_cc(c, 6)) { goto L_cd7c4; }
L_cd7bb:
    X86_TICK(c, 11);
    // 0cd7bb  push 0xf
    X86_AT(c, 0xcd7bbu);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0cd7bd  push 0x2ad4
    X86_AT(c, 0xcd7bdu);
    { uint32_t v = 0x2AD4u; push32(c, v); }
    // 0cd7c2  jmp 0xcd7d8
    X86_AT(c, 0xcd7c2u);
    goto L_cd7d8;
L_cd7c4:
    X86_TICK(c, 15);
    // 0cd7c4  movzx ebx, bl
    X86_AT(c, 0xcd7c4u);
    c.r[3] = g8(c, 3);
    // 0cd7c7  cmp dword ptr [ebx*4 + 0xb037a], 0
    X86_AT(c, 0xcd7c7u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[3] * 4 + 0xB037Au))), 0x0u, 0, 4);
    // 0cd7cf  jne 0xcd7e2
    X86_AT(c, 0xcd7cfu);
    if (x86_cc(c, 5)) { goto L_cd7e2; }
    X86_TICK(c, 4);
    // 0cd7d1  push 0xf
    X86_AT(c, 0xcd7d1u);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0cd7d3  push 0x2af0
    X86_AT(c, 0xcd7d3u);
    { uint32_t v = 0x2AF0u; push32(c, v); }
L_cd7d8:
    X86_TICK(c, 7);
    // 0cd7d8  call 0xcc830
    X86_AT(c, 0xcd7d8u);
    push32(c, 0xcd7ddu); x86_call_known(c, 0xcc830u, f_000cc830); X86_RET(c, 0xcd7ddu);
    X86_TICK(c, 9);
    // 0cd7dd  add esp, 8
    X86_AT(c, 0xcd7ddu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0cd7e0  jmp 0xcd819
    X86_AT(c, 0xcd7e0u);
    goto L_cd819;
L_cd7e2:
    X86_TICK(c, 17);
    // 0cd7e2  push 0xf
    X86_AT(c, 0xcd7e2u);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0cd7e4  movzx ebx, bl
    X86_AT(c, 0xcd7e4u);
    c.r[3] = g8(c, 3);
    // 0cd7e7  push dword ptr [ebx*4 + 0xa1e70]
    X86_AT(c, 0xcd7e7u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] * 4 + 0xA1E70u))); push32(c, v); }
    // 0cd7ee  call 0xcc830
    X86_AT(c, 0xcd7eeu);
    push32(c, 0xcd7f3u); x86_call_known(c, 0xcc830u, f_000cc830); X86_RET(c, 0xcd7f3u);
    X86_TICK(c, 19);
    // 0cd7f3  dec dword ptr [ebx*4 + 0xb037a]
    X86_AT(c, 0xcd7f3u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3] * 4 + 0xB037Au)); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 0cd7fa  add esp, 8
    X86_AT(c, 0xcd7fau);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0cd7fd  cmp ebx, dword ptr [0xb032e]
    X86_AT(c, 0xcd7fdu);
    (void)x86_sub(c, c.r[3], rd32((c.sbase[3] + (uint32_t)(0xB032Eu))), 0, 4);
    // 0cd803  jne 0xcd819
    X86_AT(c, 0xcd803u);
    if (x86_cc(c, 5)) { goto L_cd819; }
    X86_TICK(c, 12);
    // 0cd805  cmp dword ptr [ebx*4 + 0xb037a], 0
    X86_AT(c, 0xcd805u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[3] * 4 + 0xB037Au))), 0x0u, 0, 4);
    // 0cd80d  jne 0xcd819
    X86_AT(c, 0xcd80du);
    if (x86_cc(c, 5)) { goto L_cd819; }
    X86_TICK(c, 2);
    // 0cd80f  mov dword ptr [0xb032e], 0
    X86_AT(c, 0xcd80fu);
    wr32((c.sbase[3] + (uint32_t)(0xB032Eu)), 0x0u);
L_cd819:
    X86_TICK(c, 7);
    // 0cd819  call 0xcd568
    X86_AT(c, 0xcd819u);
    push32(c, 0xcd81eu); x86_call_known(c, 0xcd568u, f_000cd568); X86_RET(c, 0xcd81eu);
L_cd81e:
    X86_TICK(c, 28);
    // 0cd81e  pop edi
    X86_AT(c, 0xcd81eu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0cd81f  pop esi
    X86_AT(c, 0xcd81fu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0cd820  pop ebx
    X86_AT(c, 0xcd820u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0cd821  leave 
    X86_AT(c, 0xcd821u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0cd822  ret 
    X86_AT(c, 0xcd822u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xcd6d8u, "ran off the end of a function");
}
void f_000cd824(X86Cpu& c) {
    X86_TICK(c, 13);
    // 0cd824  push ebx
    X86_AT(c, 0xcd824u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0cd825  mov eax, dword ptr [0xb52f8]
    X86_AT(c, 0xcd825u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xB52F8u)));
    // 0cd82a  cmp eax, 1
    X86_AT(c, 0xcd82au);
    (void)x86_sub(c, c.r[0], 0x1u, 0, 4);
    // 0cd82d  je 0xcd84c
    X86_AT(c, 0xcd82du);
    if (x86_cc(c, 4)) { goto L_cd84c; }
    X86_TICK(c, 7);
    // 0cd82f  cmp eax, 2
    X86_AT(c, 0xcd82fu);
    (void)x86_sub(c, c.r[0], 0x2u, 0, 4);
    // 0cd832  je 0xcd84c
    X86_AT(c, 0xcd832u);
    if (x86_cc(c, 4)) { goto L_cd84c; }
    X86_TICK(c, 11);
    // 0cd834  push 0xf
    X86_AT(c, 0xcd834u);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0cd836  push 0x2b0c
    X86_AT(c, 0xcd836u);
    { uint32_t v = 0x2B0Cu; push32(c, v); }
    // 0cd83b  call 0xcc830
    X86_AT(c, 0xcd83bu);
    push32(c, 0xcd840u); x86_call_known(c, 0xcc830u, f_000cc830); X86_RET(c, 0xcd840u);
    X86_TICK(c, 9);
    // 0cd840  push 1
    X86_AT(c, 0xcd840u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0cd842  call 0xc5ca4
    X86_AT(c, 0xcd842u);
    push32(c, 0xcd847u); x86_call_known(c, 0xc5ca4u, f_000c5ca4); X86_RET(c, 0xcd847u);
    X86_TICK(c, 9);
    // 0cd847  add esp, 0xc
    X86_AT(c, 0xcd847u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0cd84a  jmp 0xcd8b1
    X86_AT(c, 0xcd84au);
    goto L_cd8b1;
L_cd84c:
    X86_TICK(c, 11);
    // 0cd84c  push 0xf
    X86_AT(c, 0xcd84cu);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0cd84e  push 0x2b20
    X86_AT(c, 0xcd84eu);
    { uint32_t v = 0x2B20u; push32(c, v); }
    // 0cd853  call 0xcc830
    X86_AT(c, 0xcd853u);
    push32(c, 0xcd858u); x86_call_known(c, 0xcc830u, f_000cc830); X86_RET(c, 0xcd858u);
    X86_TICK(c, 2);
    // 0cd858  add esp, 8
    X86_AT(c, 0xcd858u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
L_cd85b:
    X86_TICK(c, 9);
    // 0cd85b  push 2
    X86_AT(c, 0xcd85bu);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0cd85d  call 0xc81e4
    X86_AT(c, 0xcd85du);
    push32(c, 0xcd862u); x86_call_known(c, 0xc81e4u, f_000c81e4); X86_RET(c, 0xcd862u);
    X86_TICK(c, 12);
    // 0cd862  add esp, 4
    X86_AT(c, 0xcd862u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0cd865  xchg ebx, eax
    X86_AT(c, 0xcd865u);
    { uint32_t t = c.r[3]; c.r[3] = c.r[0]; c.r[0] = t; }
    // 0cd866  and bl, bl
    X86_AT(c, 0xcd866u);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v & g8(c, 3), 1)); }
    // 0cd868  je 0xcd85b
    X86_AT(c, 0xcd868u);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xcd85bu); goto L_cd85b; }
    X86_TICK(c, 10);
    // 0cd86a  movzx edx, bl
    X86_AT(c, 0xcd86au);
    c.r[2] = g8(c, 3);
    // 0cd86d  cmp edx, 0x41
    X86_AT(c, 0xcd86du);
    (void)x86_sub(c, c.r[2], 0x41u, 0, 4);
    // 0cd870  je 0xcd88c
    X86_AT(c, 0xcd870u);
    if (x86_cc(c, 4)) { goto L_cd88c; }
    X86_TICK(c, 7);
    // 0cd872  cmp edx, 0x50
    X86_AT(c, 0xcd872u);
    (void)x86_sub(c, c.r[2], 0x50u, 0, 4);
    // 0cd875  je 0xcd87e
    X86_AT(c, 0xcd875u);
    if (x86_cc(c, 4)) { goto L_cd87e; }
    X86_TICK(c, 7);
    // 0cd877  cmp edx, 0x57
    X86_AT(c, 0xcd877u);
    (void)x86_sub(c, c.r[2], 0x57u, 0, 4);
    // 0cd87a  je 0xcd885
    X86_AT(c, 0xcd87au);
    if (x86_cc(c, 4)) { goto L_cd885; }
    X86_TICK(c, 7);
    // 0cd87c  jmp 0xcd893
    X86_AT(c, 0xcd87cu);
    goto L_cd893;
L_cd87e:
    X86_TICK(c, 7);
    // 0cd87e  call 0xcd3dc
    X86_AT(c, 0xcd87eu);
    push32(c, 0xcd883u); x86_call_known(c, 0xcd3dcu, f_000cd3dc); X86_RET(c, 0xcd883u);
    X86_TICK(c, 7);
    // 0cd883  jmp 0xcd8a2
    X86_AT(c, 0xcd883u);
    goto L_cd8a2;
L_cd885:
    X86_TICK(c, 7);
    // 0cd885  call 0xcd580
    X86_AT(c, 0xcd885u);
    push32(c, 0xcd88au); x86_call_known(c, 0xcd580u, f_000cd580); X86_RET(c, 0xcd88au);
    X86_TICK(c, 7);
    // 0cd88a  jmp 0xcd8a2
    X86_AT(c, 0xcd88au);
    goto L_cd8a2;
L_cd88c:
    X86_TICK(c, 7);
    // 0cd88c  call 0xcd6d8
    X86_AT(c, 0xcd88cu);
    push32(c, 0xcd891u); x86_call_known(c, 0xcd6d8u, f_000cd6d8); X86_RET(c, 0xcd891u);
    X86_TICK(c, 7);
    // 0cd891  jmp 0xcd8a2
    X86_AT(c, 0xcd891u);
    goto L_cd8a2;
L_cd893:
    X86_TICK(c, 11);
    // 0cd893  push 0xf
    X86_AT(c, 0xcd893u);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0cd895  push 0x2b5c
    X86_AT(c, 0xcd895u);
    { uint32_t v = 0x2B5Cu; push32(c, v); }
    // 0cd89a  call 0xcc830
    X86_AT(c, 0xcd89au);
    push32(c, 0xcd89fu); x86_call_known(c, 0xcc830u, f_000cc830); X86_RET(c, 0xcd89fu);
    X86_TICK(c, 2);
    // 0cd89f  add esp, 8
    X86_AT(c, 0xcd89fu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
L_cd8a2:
    X86_TICK(c, 7);
    // 0cd8a2  call 0xd3370
    X86_AT(c, 0xcd8a2u);
    push32(c, 0xcd8a7u); x86_call_known(c, 0xd3370u, f_000d3370); X86_RET(c, 0xcd8a7u);
    X86_TICK(c, 7);
    // 0cd8a7  call 0xd351c
    X86_AT(c, 0xcd8a7u);
    push32(c, 0xcd8acu); x86_call_known(c, 0xd351cu, f_000d351c); X86_RET(c, 0xcd8acu);
    X86_TICK(c, 7);
    // 0cd8ac  call 0xcc700
    X86_AT(c, 0xcd8acu);
    push32(c, 0xcd8b1u); x86_call_known(c, 0xcc700u, f_000cc700); X86_RET(c, 0xcd8b1u);
L_cd8b1:
    X86_TICK(c, 9);
    // 0cd8b1  push 0x2b7c
    X86_AT(c, 0xcd8b1u);
    { uint32_t v = 0x2B7Cu; push32(c, v); }
    // 0cd8b6  call 0xcc7bc
    X86_AT(c, 0xcd8b6u);
    push32(c, 0xcd8bbu); x86_call_known(c, 0xcc7bcu, f_000cc7bc); X86_RET(c, 0xcd8bbu);
    X86_TICK(c, 16);
    // 0cd8bb  add esp, 4
    X86_AT(c, 0xcd8bbu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0cd8be  pop ebx
    X86_AT(c, 0xcd8beu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0cd8bf  ret 
    X86_AT(c, 0xcd8bfu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xcd824u, "ran off the end of a function");
}
void f_000cd8c0(X86Cpu& c) {
    X86_TICK(c, 11);
    // 0cd8c0  mov eax, dword ptr [0xb52f8]
    X86_AT(c, 0xcd8c0u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xB52F8u)));
    // 0cd8c5  cmp eax, 1
    X86_AT(c, 0xcd8c5u);
    (void)x86_sub(c, c.r[0], 0x1u, 0, 4);
    // 0cd8c8  je 0xcd8d4
    X86_AT(c, 0xcd8c8u);
    if (x86_cc(c, 4)) { goto L_cd8d4; }
    X86_TICK(c, 7);
    // 0cd8ca  cmp eax, 2
    X86_AT(c, 0xcd8cau);
    (void)x86_sub(c, c.r[0], 0x2u, 0, 4);
    // 0cd8cd  je 0xcd8d4
    X86_AT(c, 0xcd8cdu);
    if (x86_cc(c, 4)) { goto L_cd8d4; }
    X86_TICK(c, 7);
    // 0cd8cf  cmp eax, 3
    X86_AT(c, 0xcd8cfu);
    (void)x86_sub(c, c.r[0], 0x3u, 0, 4);
    // 0cd8d2  jne 0xcd8db
    X86_AT(c, 0xcd8d2u);
    if (x86_cc(c, 5)) { goto L_cd8db; }
L_cd8d4:
    X86_TICK(c, 9);
    // 0cd8d4  push 0x2b80
    X86_AT(c, 0xcd8d4u);
    { uint32_t v = 0x2B80u; push32(c, v); }
    // 0cd8d9  jmp 0xcd8fe
    X86_AT(c, 0xcd8d9u);
    goto L_cd8fe;
L_cd8db:
    X86_TICK(c, 11);
    // 0cd8db  push 0xf
    X86_AT(c, 0xcd8dbu);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0cd8dd  push 0x2b94
    X86_AT(c, 0xcd8ddu);
    { uint32_t v = 0x2B94u; push32(c, v); }
    // 0cd8e2  call 0xcc830
    X86_AT(c, 0xcd8e2u);
    push32(c, 0xcd8e7u); x86_call_known(c, 0xcc830u, f_000cc830); X86_RET(c, 0xcd8e7u);
    X86_TICK(c, 13);
    // 0cd8e7  add esp, 8
    X86_AT(c, 0xcd8e7u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0cd8ea  mov eax, dword ptr [0xb0332]
    X86_AT(c, 0xcd8eau);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xB0332u)));
    // 0cd8ef  cmp eax, 4
    X86_AT(c, 0xcd8efu);
    (void)x86_sub(c, c.r[0], 0x4u, 0, 4);
    // 0cd8f2  je 0xcd90c
    X86_AT(c, 0xcd8f2u);
    if (x86_cc(c, 4)) { goto L_cd90c; }
    X86_TICK(c, 7);
    // 0cd8f4  cmp eax, 5
    X86_AT(c, 0xcd8f4u);
    (void)x86_sub(c, c.r[0], 0x5u, 0, 4);
    // 0cd8f7  je 0xcd90c
    X86_AT(c, 0xcd8f7u);
    if (x86_cc(c, 4)) { goto L_cd90c; }
    X86_TICK(c, 2);
    // 0cd8f9  push 0x2ba8
    X86_AT(c, 0xcd8f9u);
    { uint32_t v = 0x2BA8u; push32(c, v); }
L_cd8fe:
    X86_TICK(c, 7);
    // 0cd8fe  call 0xcc7bc
    X86_AT(c, 0xcd8feu);
    push32(c, 0xcd903u); x86_call_known(c, 0xcc7bcu, f_000cc7bc); X86_RET(c, 0xcd903u);
    X86_TICK(c, 9);
    // 0cd903  push 1
    X86_AT(c, 0xcd903u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0cd905  call 0xc5ca4
    X86_AT(c, 0xcd905u);
    push32(c, 0xcd90au); x86_call_known(c, 0xc5ca4u, f_000c5ca4); X86_RET(c, 0xcd90au);
    X86_TICK(c, 7);
    // 0cd90a  jmp 0xcd934
    X86_AT(c, 0xcd90au);
    goto L_cd934;
L_cd90c:
    X86_TICK(c, 12);
    // 0cd90c  cmp dword ptr [0xb0332], 4
    X86_AT(c, 0xcd90cu);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xB0332u))), 0x4u, 0, 4);
    // 0cd913  jne 0xcd91c
    X86_AT(c, 0xcd913u);
    if (x86_cc(c, 5)) { goto L_cd91c; }
    X86_TICK(c, 9);
    // 0cd915  push 0x2bbc
    X86_AT(c, 0xcd915u);
    { uint32_t v = 0x2BBCu; push32(c, v); }
    // 0cd91a  jmp 0xcd921
    X86_AT(c, 0xcd91au);
    goto L_cd921;
L_cd91c:
    X86_TICK(c, 2);
    // 0cd91c  push 0x2bdc
    X86_AT(c, 0xcd91cu);
    { uint32_t v = 0x2BDCu; push32(c, v); }
L_cd921:
    X86_TICK(c, 9);
    // 0cd921  push 7
    X86_AT(c, 0xcd921u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cd923  call 0xc8cdc
    X86_AT(c, 0xcd923u);
    push32(c, 0xcd928u); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xcd928u);
    X86_TICK(c, 13);
    // 0cd928  add esp, 8
    X86_AT(c, 0xcd928u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0cd92b  push 8
    X86_AT(c, 0xcd92bu);
    { uint32_t v = 0x8u; push32(c, v); }
    // 0cd92d  push 0xffffffff
    X86_AT(c, 0xcd92du);
    { uint32_t v = 0xFFFFFFFFu; push32(c, v); }
    // 0cd92f  call 0xcf524
    X86_AT(c, 0xcd92fu);
    push32(c, 0xcd934u); x86_call_known(c, 0xcf524u, f_000cf524); X86_RET(c, 0xcd934u);
L_cd934:
    X86_TICK(c, 12);
    // 0cd934  add esp, 8
    X86_AT(c, 0xcd934u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0cd937  ret 
    X86_AT(c, 0xcd937u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xcd8c0u, "ran off the end of a function");
}
void f_000cd938(X86Cpu& c) {
    X86_TICK(c, 9);
    // 0cd938  push 0x2bf8
    X86_AT(c, 0xcd938u);
    { uint32_t v = 0x2BF8u; push32(c, v); }
    // 0cd93d  call 0xcc7bc
    X86_AT(c, 0xcd93du);
    push32(c, 0xcd942u); x86_call_known(c, 0xcc7bcu, f_000cc7bc); X86_RET(c, 0xcd942u);
    X86_TICK(c, 9);
    // 0cd942  push 1
    X86_AT(c, 0xcd942u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0cd944  call 0xc5ca4
    X86_AT(c, 0xcd944u);
    push32(c, 0xcd949u); x86_call_known(c, 0xc5ca4u, f_000c5ca4); X86_RET(c, 0xcd949u);
    X86_TICK(c, 12);
    // 0cd949  add esp, 8
    X86_AT(c, 0xcd949u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0cd94c  ret 
    X86_AT(c, 0xcd94cu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xcd938u, "ran off the end of a function");
}
void f_000cd950(X86Cpu& c) {
    X86_TICK(c, 13);
    // 0cd950  push ebx
    X86_AT(c, 0xcd950u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0cd951  push esi
    X86_AT(c, 0xcd951u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0cd952  push edi
    X86_AT(c, 0xcd952u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0cd953  call 0xdb23c
    X86_AT(c, 0xcd953u);
    push32(c, 0xcd958u); x86_call_known(c, 0xdb23cu, f_000db23c); X86_RET(c, 0xcd958u);
    X86_TICK(c, 10);
    // 0cd958  xchg esi, eax
    X86_AT(c, 0xcd958u);
    { uint32_t t = c.r[6]; c.r[6] = c.r[0]; c.r[0] = t; }
    // 0cd959  call 0xdb260
    X86_AT(c, 0xcd959u);
    push32(c, 0xcd95eu); x86_call_known(c, 0xdb260u, f_000db260); X86_RET(c, 0xcd95eu);
    X86_TICK(c, 38);
    // 0cd95e  xchg ebx, eax
    X86_AT(c, 0xcd95eu);
    { uint32_t t = c.r[3]; c.r[3] = c.r[0]; c.r[0] = t; }
    // 0cd95f  mov eax, dword ptr [0xb2304]
    X86_AT(c, 0xcd95fu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xB2304u)));
    // 0cd964  add eax, esi
    X86_AT(c, 0xcd964u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, c.r[6], 0, 4); }
    // 0cd966  shl eax, 8
    X86_AT(c, 0xcd966u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 0cd969  mov edx, dword ptr [0xb2308]
    X86_AT(c, 0xcd969u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(0xB2308u)));
    // 0cd96f  add edx, ebx
    X86_AT(c, 0xcd96fu);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[3], 0, 4); }
    // 0cd971  shl edx, 4
    X86_AT(c, 0xcd971u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[2] = r; }
    // 0cd974  add edx, eax
    X86_AT(c, 0xcd974u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0cd976  mov edi, dword ptr [edx + 0xb2334]
    X86_AT(c, 0xcd976u);
    c.r[7] = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xB2334u)));
    // 0cd97c  push 0x2c20
    X86_AT(c, 0xcd97cu);
    { uint32_t v = 0x2C20u; push32(c, v); }
    // 0cd981  push 7
    X86_AT(c, 0xcd981u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cd983  call 0xc8cdc
    X86_AT(c, 0xcd983u);
    push32(c, 0xcd988u); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xcd988u);
    X86_TICK(c, 9);
    // 0cd988  add esp, 8
    X86_AT(c, 0xcd988u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0cd98b  cmp edi, 3
    X86_AT(c, 0xcd98bu);
    (void)x86_sub(c, c.r[7], 0x3u, 0, 4);
    // 0cd98e  jne 0xcd9df
    X86_AT(c, 0xcd98eu);
    if (x86_cc(c, 5)) { goto L_cd9df; }
    X86_TICK(c, 28);
    // 0cd990  mov eax, dword ptr [0xb2304]
    X86_AT(c, 0xcd990u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xB2304u)));
    // 0cd995  shl eax, 8
    X86_AT(c, 0xcd995u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 0cd998  mov edx, dword ptr [0xb2308]
    X86_AT(c, 0xcd998u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(0xB2308u)));
    // 0cd99e  shl edx, 4
    X86_AT(c, 0xcd99eu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[2] = r; }
    // 0cd9a1  add edx, eax
    X86_AT(c, 0xcd9a1u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0cd9a3  cmp dword ptr [edx + 0xb2334], 1
    X86_AT(c, 0xcd9a3u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xB2334u))), 0x1u, 0, 4);
    // 0cd9aa  je 0xcd9df
    X86_AT(c, 0xcd9aau);
    if (x86_cc(c, 4)) { goto L_cd9df; }
    X86_TICK(c, 9);
    // 0cd9ac  push 0x2c4c
    X86_AT(c, 0xcd9acu);
    { uint32_t v = 0x2C4Cu; push32(c, v); }
    // 0cd9b1  call 0xcc7bc
    X86_AT(c, 0xcd9b1u);
    push32(c, 0xcd9b6u); x86_call_known(c, 0xcc7bcu, f_000cc7bc); X86_RET(c, 0xcd9b6u);
    X86_TICK(c, 33);
    // 0cd9b6  mov eax, esi
    X86_AT(c, 0xcd9b6u);
    c.r[0] = c.r[6];
    // 0cd9b8  add eax, dword ptr [0xb2304]
    X86_AT(c, 0xcd9b8u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[3] + (uint32_t)(0xB2304u))), 0, 4); }
    // 0cd9be  shl eax, 8
    X86_AT(c, 0xcd9beu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 0cd9c1  mov edx, ebx
    X86_AT(c, 0xcd9c1u);
    c.r[2] = c.r[3];
    // 0cd9c3  add edx, dword ptr [0xb2308]
    X86_AT(c, 0xcd9c3u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, rd32((c.sbase[3] + (uint32_t)(0xB2308u))), 0, 4); }
    // 0cd9c9  shl edx, 4
    X86_AT(c, 0xcd9c9u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[2] = r; }
    // 0cd9cc  add edx, eax
    X86_AT(c, 0xcd9ccu);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0cd9ce  mov dword ptr [edx + 0xb2334], 1
    X86_AT(c, 0xcd9ceu);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xB2334u)), 0x1u);
    // 0cd9d8  call 0xdb454
    X86_AT(c, 0xcd9d8u);
    push32(c, 0xcd9ddu); x86_call_known(c, 0xdb454u, f_000db454); X86_RET(c, 0xcd9ddu);
    X86_TICK(c, 7);
    // 0cd9dd  jmp 0xcd9e9
    X86_AT(c, 0xcd9ddu);
    goto L_cd9e9;
L_cd9df:
    X86_TICK(c, 9);
    // 0cd9df  push 0x2c88
    X86_AT(c, 0xcd9dfu);
    { uint32_t v = 0x2C88u; push32(c, v); }
    // 0cd9e4  call 0xcc7bc
    X86_AT(c, 0xcd9e4u);
    push32(c, 0xcd9e9u); x86_call_known(c, 0xcc7bcu, f_000cc7bc); X86_RET(c, 0xcd9e9u);
L_cd9e9:
    X86_TICK(c, 24);
    // 0cd9e9  add esp, 4
    X86_AT(c, 0xcd9e9u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0cd9ec  pop edi
    X86_AT(c, 0xcd9ecu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0cd9ed  pop esi
    X86_AT(c, 0xcd9edu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0cd9ee  pop ebx
    X86_AT(c, 0xcd9eeu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0cd9ef  ret 
    X86_AT(c, 0xcd9efu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xcd950u, "ran off the end of a function");
}
void f_000cd9f0(X86Cpu& c) {
    X86_TICK(c, 11);
    // 0cd9f0  push edi
    X86_AT(c, 0xcd9f0u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0cd9f1  push 0x2cac
    X86_AT(c, 0xcd9f1u);
    { uint32_t v = 0x2CACu; push32(c, v); }
    // 0cd9f6  call 0xcc7bc
    X86_AT(c, 0xcd9f6u);
    push32(c, 0xcd9fbu); x86_call_known(c, 0xcc7bcu, f_000cc7bc); X86_RET(c, 0xcd9fbu);
    X86_TICK(c, 14);
    // 0cd9fb  add esp, 4
    X86_AT(c, 0xcd9fbu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0cd9fe  cmp dword ptr [0xb52f8], 3
    X86_AT(c, 0xcd9feu);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xB52F8u))), 0x3u, 0, 4);
    // 0cda05  jne 0xcda11
    X86_AT(c, 0xcda05u);
    if (x86_cc(c, 5)) { goto L_cda11; }
    X86_TICK(c, 7);
    // 0cda07  call 0xcd950
    X86_AT(c, 0xcda07u);
    push32(c, 0xcda0cu); x86_call_known(c, 0xcd950u, f_000cd950); X86_RET(c, 0xcda0cu);
    X86_TICK(c, 7);
    // 0cda0c  jmp 0xcdb0a
    X86_AT(c, 0xcda0cu);
    goto L_cdb0a;
L_cda11:
    X86_TICK(c, 11);
    // 0cda11  mov eax, dword ptr [0xb52f8]
    X86_AT(c, 0xcda11u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xB52F8u)));
    // 0cda16  cmp eax, 1
    X86_AT(c, 0xcda16u);
    (void)x86_sub(c, c.r[0], 0x1u, 0, 4);
    // 0cda19  je 0xcda20
    X86_AT(c, 0xcda19u);
    if (x86_cc(c, 4)) { goto L_cda20; }
    X86_TICK(c, 7);
    // 0cda1b  cmp eax, 2
    X86_AT(c, 0xcda1bu);
    (void)x86_sub(c, c.r[0], 0x2u, 0, 4);
    // 0cda1e  jne 0xcda2e
    X86_AT(c, 0xcda1eu);
    if (x86_cc(c, 5)) { goto L_cda2e; }
L_cda20:
    X86_TICK(c, 17);
    // 0cda20  push dword ptr [0xaa0e8]
    X86_AT(c, 0xcda20u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xAA0E8u))); push32(c, v); }
    // 0cda26  push dword ptr [0xaa0e4]
    X86_AT(c, 0xcda26u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xAA0E4u))); push32(c, v); }
    // 0cda2c  jmp 0xcda3a
    X86_AT(c, 0xcda2cu);
    goto L_cda3a;
L_cda2e:
    X86_TICK(c, 10);
    // 0cda2e  push dword ptr [0xb033e]
    X86_AT(c, 0xcda2eu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xB033Eu))); push32(c, v); }
    // 0cda34  push dword ptr [0xb033a]
    X86_AT(c, 0xcda34u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xB033Au))); push32(c, v); }
L_cda3a:
    X86_TICK(c, 7);
    // 0cda3a  call 0xd3304
    X86_AT(c, 0xcda3au);
    push32(c, 0xcda3fu); x86_call_known(c, 0xd3304u, f_000d3304); X86_RET(c, 0xcda3fu);
    X86_TICK(c, 12);
    // 0cda3f  xchg edi, eax
    X86_AT(c, 0xcda3fu);
    { uint32_t t = c.r[7]; c.r[7] = c.r[0]; c.r[0] = t; }
    // 0cda40  add esp, 8
    X86_AT(c, 0xcda40u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0cda43  and edi, edi
    X86_AT(c, 0xcda43u);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & c.r[7], 4); }
    // 0cda45  je 0xcda87
    X86_AT(c, 0xcda45u);
    if (x86_cc(c, 4)) { goto L_cda87; }
    X86_TICK(c, 7);
    // 0cda47  cmp edi, 0x21
    X86_AT(c, 0xcda47u);
    (void)x86_sub(c, c.r[7], 0x21u, 0, 4);
    // 0cda4a  jge 0xcda5b
    X86_AT(c, 0xcda4au);
    if (x86_cc(c, 13)) { goto L_cda5b; }
    X86_TICK(c, 11);
    // 0cda4c  push 0xf
    X86_AT(c, 0xcda4cu);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0cda4e  push 0x2cd8
    X86_AT(c, 0xcda4eu);
    { uint32_t v = 0x2CD8u; push32(c, v); }
    // 0cda53  call 0xcc830
    X86_AT(c, 0xcda53u);
    push32(c, 0xcda58u); x86_call_known(c, 0xcc830u, f_000cc830); X86_RET(c, 0xcda58u);
    X86_TICK(c, 2);
    // 0cda58  add esp, 8
    X86_AT(c, 0xcda58u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
L_cda5b:
    X86_TICK(c, 14);
    // 0cda5b  push dword ptr [edi*4 + 0xaaeb0]
    X86_AT(c, 0xcda5bu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[7] * 4 + 0xAAEB0u))); push32(c, v); }
    // 0cda62  push 7
    X86_AT(c, 0xcda62u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cda64  call 0xc8cdc
    X86_AT(c, 0xcda64u);
    push32(c, 0xcda69u); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xcda69u);
    X86_TICK(c, 9);
    // 0cda69  add esp, 8
    X86_AT(c, 0xcda69u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0cda6c  cmp edi, 0x21
    X86_AT(c, 0xcda6cu);
    (void)x86_sub(c, c.r[7], 0x21u, 0, 4);
    // 0cda6f  jge 0xcda7e
    X86_AT(c, 0xcda6fu);
    if (x86_cc(c, 13)) { goto L_cda7e; }
    X86_TICK(c, 9);
    // 0cda71  push 0x2cf0
    X86_AT(c, 0xcda71u);
    { uint32_t v = 0x2CF0u; push32(c, v); }
    // 0cda76  call 0xcc7bc
    X86_AT(c, 0xcda76u);
    push32(c, 0xcda7bu); x86_call_known(c, 0xcc7bcu, f_000cc7bc); X86_RET(c, 0xcda7bu);
    X86_TICK(c, 2);
    // 0cda7b  add esp, 4
    X86_AT(c, 0xcda7bu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
L_cda7e:
    X86_TICK(c, 9);
    // 0cda7e  push 7
    X86_AT(c, 0xcda7eu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cda80  call 0xca3cc
    X86_AT(c, 0xcda80u);
    push32(c, 0xcda85u); x86_call_known(c, 0xca3ccu, f_000ca3cc); X86_RET(c, 0xcda85u);
    X86_TICK(c, 7);
    // 0cda85  jmp 0xcdac8
    X86_AT(c, 0xcda85u);
    goto L_cdac8;
L_cda87:
    X86_TICK(c, 17);
    // 0cda87  push dword ptr [0xb033e]
    X86_AT(c, 0xcda87u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xB033Eu))); push32(c, v); }
    // 0cda8d  push dword ptr [0xb033a]
    X86_AT(c, 0xcda8du);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xB033Au))); push32(c, v); }
    // 0cda93  call 0xcc518
    X86_AT(c, 0xcda93u);
    push32(c, 0xcda98u); x86_call_known(c, 0xcc518u, f_000cc518); X86_RET(c, 0xcda98u);
    X86_TICK(c, 12);
    // 0cda98  movzx edi, al
    X86_AT(c, 0xcda98u);
    c.r[7] = g8(c, 0);
    // 0cda9b  add esp, 8
    X86_AT(c, 0xcda9bu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0cda9e  cmp edi, 1
    X86_AT(c, 0xcda9eu);
    (void)x86_sub(c, c.r[7], 0x1u, 0, 4);
    // 0cdaa1  je 0xcdab2
    X86_AT(c, 0xcdaa1u);
    if (x86_cc(c, 4)) { goto L_cdab2; }
    X86_TICK(c, 7);
    // 0cdaa3  cmp edi, 0xa
    X86_AT(c, 0xcdaa3u);
    (void)x86_sub(c, c.r[7], 0xAu, 0, 4);
    // 0cdaa6  je 0xcdab2
    X86_AT(c, 0xcdaa6u);
    if (x86_cc(c, 4)) { goto L_cdab2; }
    X86_TICK(c, 7);
    // 0cdaa8  cmp edi, 0x11
    X86_AT(c, 0xcdaa8u);
    (void)x86_sub(c, c.r[7], 0x11u, 0, 4);
    // 0cdaab  jle 0xcdab9
    X86_AT(c, 0xcdaabu);
    if (x86_cc(c, 14)) { goto L_cdab9; }
    X86_TICK(c, 7);
    // 0cdaad  cmp edi, 0x21
    X86_AT(c, 0xcdaadu);
    (void)x86_sub(c, c.r[7], 0x21u, 0, 4);
    // 0cdab0  jge 0xcdab9
    X86_AT(c, 0xcdab0u);
    if (x86_cc(c, 13)) { goto L_cdab9; }
L_cdab2:
    X86_TICK(c, 9);
    // 0cdab2  push 0x2cf8
    X86_AT(c, 0xcdab2u);
    { uint32_t v = 0x2CF8u; push32(c, v); }
    // 0cdab7  jmp 0xcdac3
    X86_AT(c, 0xcdab7u);
    goto L_cdac3;
L_cdab9:
    X86_TICK(c, 7);
    // 0cdab9  cmp edi, 3
    X86_AT(c, 0xcdab9u);
    (void)x86_sub(c, c.r[7], 0x3u, 0, 4);
    // 0cdabc  jne 0xcdacd
    X86_AT(c, 0xcdabcu);
    if (x86_cc(c, 5)) { goto L_cdacd; }
    X86_TICK(c, 2);
    // 0cdabe  push 0x2d1c
    X86_AT(c, 0xcdabeu);
    { uint32_t v = 0x2D1Cu; push32(c, v); }
L_cdac3:
    X86_TICK(c, 7);
    // 0cdac3  call 0xcc7bc
    X86_AT(c, 0xcdac3u);
    push32(c, 0xcdac8u); x86_call_known(c, 0xcc7bcu, f_000cc7bc); X86_RET(c, 0xcdac8u);
L_cdac8:
    X86_TICK(c, 9);
    // 0cdac8  add esp, 4
    X86_AT(c, 0xcdac8u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0cdacb  jmp 0xcdb0a
    X86_AT(c, 0xcdacbu);
    goto L_cdb0a;
L_cdacd:
    X86_TICK(c, 9);
    // 0cdacd  push 0x2d54
    X86_AT(c, 0xcdacdu);
    { uint32_t v = 0x2D54u; push32(c, v); }
    // 0cdad2  call 0xcc7bc
    X86_AT(c, 0xcdad2u);
    push32(c, 0xcdad7u); x86_call_known(c, 0xcc7bcu, f_000cc7bc); X86_RET(c, 0xcdad7u);
    X86_TICK(c, 17);
    // 0cdad7  push dword ptr [0xb033e]
    X86_AT(c, 0xcdad7u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xB033Eu))); push32(c, v); }
    // 0cdadd  push dword ptr [0xb033a]
    X86_AT(c, 0xcdaddu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xB033Au))); push32(c, v); }
    // 0cdae3  call 0xcf89c
    X86_AT(c, 0xcdae3u);
    push32(c, 0xcdae8u); x86_call_known(c, 0xcf89cu, f_000cf89c); X86_RET(c, 0xcdae8u);
    X86_TICK(c, 14);
    // 0cdae8  push dword ptr [eax*4 + 0xab004]
    X86_AT(c, 0xcdae8u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[0] * 4 + 0xAB004u))); push32(c, v); }
    // 0cdaef  push 7
    X86_AT(c, 0xcdaefu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cdaf1  call 0xc8cdc
    X86_AT(c, 0xcdaf1u);
    push32(c, 0xcdaf6u); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xcdaf6u);
    X86_TICK(c, 9);
    // 0cdaf6  push 0x2d84
    X86_AT(c, 0xcdaf6u);
    { uint32_t v = 0x2D84u; push32(c, v); }
    // 0cdafb  call 0xcc7bc
    X86_AT(c, 0xcdafbu);
    push32(c, 0xcdb00u); x86_call_known(c, 0xcc7bcu, f_000cc7bc); X86_RET(c, 0xcdb00u);
    X86_TICK(c, 9);
    // 0cdb00  push 7
    X86_AT(c, 0xcdb00u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cdb02  call 0xca3cc
    X86_AT(c, 0xcdb02u);
    push32(c, 0xcdb07u); x86_call_known(c, 0xca3ccu, f_000ca3cc); X86_RET(c, 0xcdb07u);
    X86_TICK(c, 2);
    // 0cdb07  add esp, 0x1c
    X86_AT(c, 0xcdb07u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x1Cu, 0, 4); }
L_cdb0a:
    X86_TICK(c, 14);
    // 0cdb0a  pop edi
    X86_AT(c, 0xcdb0au);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0cdb0b  ret 
    X86_AT(c, 0xcdb0bu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xcd9f0u, "ran off the end of a function");
}
void f_000cdb0c(X86Cpu& c) {
    X86_TICK(c, 43);
    // 0cdb0c  push ebp
    X86_AT(c, 0xcdb0cu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0cdb0d  mov ebp, esp
    X86_AT(c, 0xcdb0du);
    c.r[5] = c.r[4];
    // 0cdb0f  sub esp, 8
    X86_AT(c, 0xcdb0fu);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, 0x8u, 0, 4); }
    // 0cdb12  push ebx
    X86_AT(c, 0xcdb12u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0cdb13  push esi
    X86_AT(c, 0xcdb13u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0cdb14  push edi
    X86_AT(c, 0xcdb14u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0cdb15  mov edi, dword ptr [ebp + 0xc]
    X86_AT(c, 0xcdb15u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0cdb18  sub ebx, ebx
    X86_AT(c, 0xcdb18u);
    { uint32_t v = c.r[3]; c.r[3] = x86_sub(c, v, c.r[3], 0, 4); }
    // 0cdb1a  mov eax, dword ptr [ebp + 8]
    X86_AT(c, 0xcdb1au);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0cdb1d  shl eax, 8
    X86_AT(c, 0xcdb1du);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 0cdb20  mov edx, edi
    X86_AT(c, 0xcdb20u);
    c.r[2] = c.r[7];
    // 0cdb22  shl edx, 4
    X86_AT(c, 0xcdb22u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[2] = r; }
    // 0cdb25  add edx, eax
    X86_AT(c, 0xcdb25u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0cdb27  mov esi, dword ptr [edx + 0xb2334]
    X86_AT(c, 0xcdb27u);
    c.r[6] = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xB2334u)));
    // 0cdb2d  cmp ebx, esi
    X86_AT(c, 0xcdb2du);
    (void)x86_sub(c, c.r[3], c.r[6], 0, 4);
    // 0cdb2f  je 0xcdb3f
    X86_AT(c, 0xcdb2fu);
    if (x86_cc(c, 4)) { goto L_cdb3f; }
    X86_TICK(c, 7);
    // 0cdb31  cmp esi, 0xf
    X86_AT(c, 0xcdb31u);
    (void)x86_sub(c, c.r[6], 0xFu, 0, 4);
    // 0cdb34  je 0xcdb3f
    X86_AT(c, 0xcdb34u);
    if (x86_cc(c, 4)) { goto L_cdb3f; }
    X86_TICK(c, 7);
    // 0cdb36  cmp esi, 0xe
    X86_AT(c, 0xcdb36u);
    (void)x86_sub(c, c.r[6], 0xEu, 0, 4);
    // 0cdb39  jne 0xcdbd2
    X86_AT(c, 0xcdb39u);
    if (x86_cc(c, 5)) { goto L_cdbd2; }
L_cdb3f:
    X86_TICK(c, 26);
    // 0cdb3f  mov eax, dword ptr [ebp + 8]
    X86_AT(c, 0xcdb3fu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0cdb42  shl eax, 8
    X86_AT(c, 0xcdb42u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 0cdb45  mov edx, edi
    X86_AT(c, 0xcdb45u);
    c.r[2] = c.r[7];
    // 0cdb47  shl edx, 4
    X86_AT(c, 0xcdb47u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[2] = r; }
    // 0cdb4a  add edx, eax
    X86_AT(c, 0xcdb4au);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0cdb4c  cmp dword ptr [edx + 0xb2338], 0xffffffff
    X86_AT(c, 0xcdb4cu);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xB2338u))), 0xFFFFFFFFu, 0, 4);
    // 0cdb53  jne 0xcdbd2
    X86_AT(c, 0xcdb53u);
    if (x86_cc(c, 5)) { goto L_cdbd2; }
L_cdb59:
    X86_TICK(c, 11);
    // 0cdb59  push 0x31
    X86_AT(c, 0xcdb59u);
    { uint32_t v = 0x31u; push32(c, v); }
    // 0cdb5b  push 0
    X86_AT(c, 0xcdb5bu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0cdb5d  call 0xc5df0
    X86_AT(c, 0xcdb5du);
    push32(c, 0xcdb62u); x86_call_known(c, 0xc5df0u, f_000c5df0); X86_RET(c, 0xcdb62u);
    X86_TICK(c, 61);
    // 0cdb62  cdq 
    X86_AT(c, 0xcdb62u);
    c.r[2] = (c.r[0] & 0x80000000u) ? 0xFFFFFFFFu : 0u;
    // 0cdb63  mov ecx, 0xa
    X86_AT(c, 0xcdb63u);
    c.r[1] = 0xAu;
    // 0cdb68  idiv ecx
    X86_AT(c, 0xcdb68u);
    x86_idiv(c, c.r[1], 4, 0xcdb68u);
    // 0cdb6a  xchg esi, eax
    X86_AT(c, 0xcdb6au);
    { uint32_t t = c.r[6]; c.r[6] = c.r[0]; c.r[0] = t; }
    // 0cdb6b  add esp, 8
    X86_AT(c, 0xcdb6bu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0cdb6e  cmp byte ptr [esi + 0xb3334], 0
    X86_AT(c, 0xcdb6eu);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[6] + 0xB3334u))), 0x0u, 0, 1);
    // 0cdb75  je 0xcdb7d
    X86_AT(c, 0xcdb75u);
    if (x86_cc(c, 4)) { goto L_cdb7d; }
    X86_TICK(c, 9);
    // 0cdb77  inc ebx
    X86_AT(c, 0xcdb77u);
    { uint32_t v = c.r[3]; c.r[3] = x86_inc(c, v, 4); }
    // 0cdb78  cmp ebx, 0x32
    X86_AT(c, 0xcdb78u);
    (void)x86_sub(c, c.r[3], 0x32u, 0, 4);
    // 0cdb7b  jl 0xcdb59
    X86_AT(c, 0xcdb7bu);
    if (x86_cc(c, 12)) { X86_POLL(c, 0xcdb59u); goto L_cdb59; }
L_cdb7d:
    X86_TICK(c, 82);
    // 0cdb7d  mov byte ptr [esi + 0xb3334], 1
    X86_AT(c, 0xcdb7du);
    wr8((c.sbase[3] + (uint32_t)(c.r[6] + 0xB3334u)), 0x1u);
    // 0cdb84  mov eax, dword ptr [0xb2328]
    X86_AT(c, 0xcdb84u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xB2328u)));
    // 0cdb89  dec eax
    X86_AT(c, 0xcdb89u);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 0cdb8a  cdq 
    X86_AT(c, 0xcdb8au);
    c.r[2] = (c.r[0] & 0x80000000u) ? 0xFFFFFFFFu : 0u;
    // 0cdb8b  sub eax, edx
    X86_AT(c, 0xcdb8bu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[2], 0, 4); }
    // 0cdb8d  sar eax, 1
    X86_AT(c, 0xcdb8du);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 7, v, 0x1u, 4, w); if (w) c.r[0] = r; }
    // 0cdb8f  lea eax, [eax + eax*4]
    X86_AT(c, 0xcdb8fu);
    c.r[0] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0cdb92  lea edx, [esi + eax*1]
    X86_AT(c, 0xcdb92u);
    c.r[2] = (uint32_t)(c.r[6] + c.r[0]);
    // 0cdb95  mov dword ptr [ebp - 4], edx
    X86_AT(c, 0xcdb95u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[2]);
    // 0cdb98  mov eax, dword ptr [ebp + 8]
    X86_AT(c, 0xcdb98u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0cdb9b  shl eax, 8
    X86_AT(c, 0xcdb9bu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 0cdb9e  mov edx, edi
    X86_AT(c, 0xcdb9eu);
    c.r[2] = c.r[7];
    // 0cdba0  shl edx, 4
    X86_AT(c, 0xcdba0u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[2] = r; }
    // 0cdba3  add edx, eax
    X86_AT(c, 0xcdba3u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0cdba5  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0xcdba5u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0cdba8  mov dword ptr [edx + 0xb2338], eax
    X86_AT(c, 0xcdba8u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xB2338u)), c.r[0]);
    // 0cdbae  mov eax, dword ptr [0xb2328]
    X86_AT(c, 0xcdbaeu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xB2328u)));
    // 0cdbb3  mov dword ptr [ebp - 8], edx
    X86_AT(c, 0xcdbb3u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), c.r[2]);
    // 0cdbb6  mul eax
    X86_AT(c, 0xcdbb6u);
    x86_mul(c, c.r[0], 4);
    // 0cdbb8  inc eax
    X86_AT(c, 0xcdbb8u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0cdbb9  push eax
    X86_AT(c, 0xcdbb9u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0cdbba  push 1
    X86_AT(c, 0xcdbbau);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0cdbbc  call 0xc5df0
    X86_AT(c, 0xcdbbcu);
    push32(c, 0xcdbc1u); x86_call_known(c, 0xc5df0u, f_000c5df0); X86_RET(c, 0xcdbc1u);
    X86_TICK(c, 21);
    // 0cdbc1  add eax, 0xa
    X86_AT(c, 0xcdbc1u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0xAu, 0, 4); }
    // 0cdbc4  add eax, dword ptr [ebp - 4]
    X86_AT(c, 0xcdbc4u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))), 0, 4); }
    // 0cdbc7  mov edx, dword ptr [ebp - 8]
    X86_AT(c, 0xcdbc7u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)));
    // 0cdbca  mov dword ptr [edx + 0xb2340], eax
    X86_AT(c, 0xcdbcau);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xB2340u)), c.r[0]);
    // 0cdbd0  jmp 0xcdbde
    X86_AT(c, 0xcdbd0u);
    goto L_cdbde;
L_cdbd2:
    X86_TICK(c, 11);
    // 0cdbd2  push 0xf
    X86_AT(c, 0xcdbd2u);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0cdbd4  push 0x2d8c
    X86_AT(c, 0xcdbd4u);
    { uint32_t v = 0x2D8Cu; push32(c, v); }
    // 0cdbd9  call 0xcc830
    X86_AT(c, 0xcdbd9u);
    push32(c, 0xcdbdeu); x86_call_known(c, 0xcc830u, f_000cc830); X86_RET(c, 0xcdbdeu);
L_cdbde:
    X86_TICK(c, 30);
    // 0cdbde  add esp, 8
    X86_AT(c, 0xcdbdeu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0cdbe1  pop edi
    X86_AT(c, 0xcdbe1u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0cdbe2  pop esi
    X86_AT(c, 0xcdbe2u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0cdbe3  pop ebx
    X86_AT(c, 0xcdbe3u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0cdbe4  leave 
    X86_AT(c, 0xcdbe4u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0cdbe5  ret 
    X86_AT(c, 0xcdbe5u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xcdb0cu, "ran off the end of a function");
}
void f_000cdbe8(X86Cpu& c) {
    X86_TICK(c, 11);
    // 0cdbe8  push esi
    X86_AT(c, 0xcdbe8u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0cdbe9  push edi
    X86_AT(c, 0xcdbe9u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0cdbea  call 0xdb23c
    X86_AT(c, 0xcdbeau);
    push32(c, 0xcdbefu); x86_call_known(c, 0xdb23cu, f_000db23c); X86_RET(c, 0xcdbefu);
    X86_TICK(c, 16);
    // 0cdbef  xchg edi, eax
    X86_AT(c, 0xcdbefu);
    { uint32_t t = c.r[7]; c.r[7] = c.r[0]; c.r[0] = t; }
    // 0cdbf0  add edi, dword ptr [0xb2304]
    X86_AT(c, 0xcdbf0u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, rd32((c.sbase[3] + (uint32_t)(0xB2304u))), 0, 4); }
    // 0cdbf6  call 0xdb260
    X86_AT(c, 0xcdbf6u);
    push32(c, 0xcdbfbu); x86_call_known(c, 0xdb260u, f_000db260); X86_RET(c, 0xcdbfbu);
    X86_TICK(c, 21);
    // 0cdbfb  xchg esi, eax
    X86_AT(c, 0xcdbfbu);
    { uint32_t t = c.r[6]; c.r[6] = c.r[0]; c.r[0] = t; }
    // 0cdbfc  add esi, dword ptr [0xb2308]
    X86_AT(c, 0xcdbfcu);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, rd32((c.sbase[3] + (uint32_t)(0xB2308u))), 0, 4); }
    // 0cdc02  cmp dword ptr [0xb52f8], 3
    X86_AT(c, 0xcdc02u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xB52F8u))), 0x3u, 0, 4);
    // 0cdc09  je 0xcdc12
    X86_AT(c, 0xcdc09u);
    if (x86_cc(c, 4)) { goto L_cdc12; }
    X86_TICK(c, 9);
    // 0cdc0b  push 0x2da4
    X86_AT(c, 0xcdc0bu);
    { uint32_t v = 0x2DA4u; push32(c, v); }
    // 0cdc10  jmp 0xcdc42
    X86_AT(c, 0xcdc10u);
    goto L_cdc42;
L_cdc12:
    X86_TICK(c, 11);
    // 0cdc12  push 0xf
    X86_AT(c, 0xcdc12u);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0cdc14  push 0x2db8
    X86_AT(c, 0xcdc14u);
    { uint32_t v = 0x2DB8u; push32(c, v); }
    // 0cdc19  call 0xcc830
    X86_AT(c, 0xcdc19u);
    push32(c, 0xcdc1eu); x86_call_known(c, 0xcc830u, f_000cc830); X86_RET(c, 0xcdc1eu);
    X86_TICK(c, 30);
    // 0cdc1e  mov eax, dword ptr [0xb2304]
    X86_AT(c, 0xcdc1eu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xB2304u)));
    // 0cdc23  shl eax, 8
    X86_AT(c, 0xcdc23u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 0cdc26  mov edx, dword ptr [0xb2308]
    X86_AT(c, 0xcdc26u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(0xB2308u)));
    // 0cdc2c  shl edx, 4
    X86_AT(c, 0xcdc2cu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[2] = r; }
    // 0cdc2f  add edx, eax
    X86_AT(c, 0xcdc2fu);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0cdc31  add esp, 8
    X86_AT(c, 0xcdc31u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0cdc34  cmp dword ptr [edx + 0xb233c], 5
    X86_AT(c, 0xcdc34u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xB233Cu))), 0x5u, 0, 4);
    // 0cdc3b  je 0xcdc56
    X86_AT(c, 0xcdc3bu);
    if (x86_cc(c, 4)) { goto L_cdc56; }
    X86_TICK(c, 2);
    // 0cdc3d  push 0x2de0
    X86_AT(c, 0xcdc3du);
    { uint32_t v = 0x2DE0u; push32(c, v); }
L_cdc42:
    X86_TICK(c, 7);
    // 0cdc42  call 0xcc7bc
    X86_AT(c, 0xcdc42u);
    push32(c, 0xcdc47u); x86_call_known(c, 0xcc7bcu, f_000cc7bc); X86_RET(c, 0xcdc47u);
    X86_TICK(c, 9);
    // 0cdc47  push 1
    X86_AT(c, 0xcdc47u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0cdc49  call 0xc5ca4
    X86_AT(c, 0xcdc49u);
    push32(c, 0xcdc4eu); x86_call_known(c, 0xc5ca4u, f_000c5ca4); X86_RET(c, 0xcdc4eu);
    X86_TICK(c, 9);
    // 0cdc4e  add esp, 8
    X86_AT(c, 0xcdc4eu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0cdc51  jmp 0xcdcf5
    X86_AT(c, 0xcdc51u);
    goto L_cdcf5;
L_cdc56:
    X86_TICK(c, 11);
    // 0cdc56  push 0xff
    X86_AT(c, 0xcdc56u);
    { uint32_t v = 0xFFu; push32(c, v); }
    // 0cdc5b  push 1
    X86_AT(c, 0xcdc5bu);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0cdc5d  call 0xc5df0
    X86_AT(c, 0xcdc5du);
    push32(c, 0xcdc62u); x86_call_known(c, 0xc5df0u, f_000c5df0); X86_RET(c, 0xcdc62u);
    X86_TICK(c, 9);
    // 0cdc62  add esp, 8
    X86_AT(c, 0xcdc62u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0cdc65  cmp eax, 0x68
    X86_AT(c, 0xcdc65u);
    (void)x86_sub(c, c.r[0], 0x68u, 0, 4);
    // 0cdc68  jge 0xcdc98
    X86_AT(c, 0xcdc68u);
    if (x86_cc(c, 13)) { goto L_cdc98; }
    X86_TICK(c, 23);
    // 0cdc6a  mov eax, edi
    X86_AT(c, 0xcdc6au);
    c.r[0] = c.r[7];
    // 0cdc6c  shl eax, 8
    X86_AT(c, 0xcdc6cu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 0cdc6f  mov edx, esi
    X86_AT(c, 0xcdc6fu);
    c.r[2] = c.r[6];
    // 0cdc71  shl edx, 4
    X86_AT(c, 0xcdc71u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[2] = r; }
    // 0cdc74  add edx, eax
    X86_AT(c, 0xcdc74u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0cdc76  mov eax, dword ptr [edx + 0xb2334]
    X86_AT(c, 0xcdc76u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xB2334u)));
    // 0cdc7c  cmp eax, 2
    X86_AT(c, 0xcdc7cu);
    (void)x86_sub(c, c.r[0], 0x2u, 0, 4);
    // 0cdc7f  je 0xcdc98
    X86_AT(c, 0xcdc7fu);
    if (x86_cc(c, 4)) { goto L_cdc98; }
    X86_TICK(c, 7);
    // 0cdc81  cmp eax, 3
    X86_AT(c, 0xcdc81u);
    (void)x86_sub(c, c.r[0], 0x3u, 0, 4);
    // 0cdc84  je 0xcdc98
    X86_AT(c, 0xcdc84u);
    if (x86_cc(c, 4)) { goto L_cdc98; }
    X86_TICK(c, 12);
    // 0cdc86  cmp dword ptr [edx + 0xb2338], 0xffffffff
    X86_AT(c, 0xcdc86u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xB2338u))), 0xFFFFFFFFu, 0, 4);
    // 0cdc8d  jne 0xcdc98
    X86_AT(c, 0xcdc8du);
    if (x86_cc(c, 5)) { goto L_cdc98; }
    X86_TICK(c, 11);
    // 0cdc8f  push esi
    X86_AT(c, 0xcdc8fu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0cdc90  push edi
    X86_AT(c, 0xcdc90u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0cdc91  call 0xcdb0c
    X86_AT(c, 0xcdc91u);
    push32(c, 0xcdc96u); x86_call_known(c, 0xcdb0cu, f_000cdb0c); X86_RET(c, 0xcdc96u);
    X86_TICK(c, 7);
    // 0cdc96  jmp 0xcdced
    X86_AT(c, 0xcdc96u);
    goto L_cdced;
L_cdc98:
    X86_TICK(c, 33);
    // 0cdc98  mov eax, dword ptr [0xb2304]
    X86_AT(c, 0xcdc98u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xB2304u)));
    // 0cdc9d  shl eax, 8
    X86_AT(c, 0xcdc9du);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 0cdca0  mov edx, dword ptr [0xb2308]
    X86_AT(c, 0xcdca0u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(0xB2308u)));
    // 0cdca6  shl edx, 4
    X86_AT(c, 0xcdca6u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[2] = r; }
    // 0cdca9  add edx, eax
    X86_AT(c, 0xcdca9u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0cdcab  sub eax, eax
    X86_AT(c, 0xcdcabu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0cdcad  mov dword ptr [edx + 0xb233c], eax
    X86_AT(c, 0xcdcadu);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xB233Cu)), c.r[0]);
    // 0cdcb3  mov dword ptr [edx + 0xb2334], eax
    X86_AT(c, 0xcdcb3u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xB2334u)), c.r[0]);
    // 0cdcb9  cmp eax, dword ptr [0x43eb8]
    X86_AT(c, 0xcdcb9u);
    (void)x86_sub(c, c.r[0], rd32((c.sbase[3] + (uint32_t)(0x43EB8u))), 0, 4);
    // 0cdcbf  jne 0xcdcd0
    X86_AT(c, 0xcdcbfu);
    if (x86_cc(c, 5)) { goto L_cdcd0; }
    X86_TICK(c, 11);
    // 0cdcc1  push 0xf
    X86_AT(c, 0xcdcc1u);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0cdcc3  push 0x2e10
    X86_AT(c, 0xcdcc3u);
    { uint32_t v = 0x2E10u; push32(c, v); }
    // 0cdcc8  call 0xcc830
    X86_AT(c, 0xcdcc8u);
    push32(c, 0xcdccdu); x86_call_known(c, 0xcc830u, f_000cc830); X86_RET(c, 0xcdccdu);
    X86_TICK(c, 2);
    // 0cdccd  add esp, 8
    X86_AT(c, 0xcdccdu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
L_cdcd0:
    X86_TICK(c, 41);
    // 0cdcd0  push 0
    X86_AT(c, 0xcdcd0u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0cdcd2  mov eax, dword ptr [0xb2328]
    X86_AT(c, 0xcdcd2u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xB2328u)));
    // 0cdcd7  mul eax
    X86_AT(c, 0xcdcd7u);
    x86_mul(c, c.r[0], 4);
    // 0cdcd9  add eax, 9
    X86_AT(c, 0xcdcd9u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0x9u, 0, 4); }
    // 0cdcdc  push eax
    X86_AT(c, 0xcdcdcu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0cdcdd  push 3
    X86_AT(c, 0xcdcddu);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0cdcdf  call 0xc5df0
    X86_AT(c, 0xcdcdfu);
    push32(c, 0xcdce4u); x86_call_known(c, 0xc5df0u, f_000c5df0); X86_RET(c, 0xcdce4u);
    X86_TICK(c, 11);
    // 0cdce4  add esp, 8
    X86_AT(c, 0xcdce4u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0cdce7  push eax
    X86_AT(c, 0xcdce7u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0cdce8  call 0xcc8b8
    X86_AT(c, 0xcdce8u);
    push32(c, 0xcdcedu); x86_call_known(c, 0xcc8b8u, f_000cc8b8); X86_RET(c, 0xcdcedu);
L_cdced:
    X86_TICK(c, 9);
    // 0cdced  add esp, 8
    X86_AT(c, 0xcdcedu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0cdcf0  call 0xdb454
    X86_AT(c, 0xcdcf0u);
    push32(c, 0xcdcf5u); x86_call_known(c, 0xdb454u, f_000db454); X86_RET(c, 0xcdcf5u);
L_cdcf5:
    X86_TICK(c, 18);
    // 0cdcf5  pop edi
    X86_AT(c, 0xcdcf5u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0cdcf6  pop esi
    X86_AT(c, 0xcdcf6u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0cdcf7  ret 
    X86_AT(c, 0xcdcf7u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xcdbe8u, "ran off the end of a function");
}
void f_000cdcf8(X86Cpu& c) {
    X86_TICK(c, 11);
    // 0cdcf8  push 0xf
    X86_AT(c, 0xcdcf8u);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0cdcfa  push 0x2e30
    X86_AT(c, 0xcdcfau);
    { uint32_t v = 0x2E30u; push32(c, v); }
    // 0cdcff  call 0xcc830
    X86_AT(c, 0xcdcffu);
    push32(c, 0xcdd04u); x86_call_known(c, 0xcc830u, f_000cc830); X86_RET(c, 0xcdd04u);
    X86_TICK(c, 12);
    // 0cdd04  add esp, 8
    X86_AT(c, 0xcdd04u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0cdd07  ret 
    X86_AT(c, 0xcdd07u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xcdcf8u, "ran off the end of a function");
}
void f_000cdd08(X86Cpu& c) {
    X86_TICK(c, 23);
    // 0cdd08  push ebp
    X86_AT(c, 0xcdd08u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0cdd09  mov ebp, esp
    X86_AT(c, 0xcdd09u);
    c.r[5] = c.r[4];
    // 0cdd0b  push eax
    X86_AT(c, 0xcdd0bu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0cdd0c  push ebx
    X86_AT(c, 0xcdd0cu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0cdd0d  push esi
    X86_AT(c, 0xcdd0du);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0cdd0e  push edi
    X86_AT(c, 0xcdd0eu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0cdd0f  push 0xb
    X86_AT(c, 0xcdd0fu);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0cdd11  push 0x2e40
    X86_AT(c, 0xcdd11u);
    { uint32_t v = 0x2E40u; push32(c, v); }
    // 0cdd16  call 0xcc830
    X86_AT(c, 0xcdd16u);
    push32(c, 0xcdd1bu); x86_call_known(c, 0xcc830u, f_000cc830); X86_RET(c, 0xcdd1bu);
    X86_TICK(c, 9);
    // 0cdd1b  push 0x2e6c
    X86_AT(c, 0xcdd1bu);
    { uint32_t v = 0x2E6Cu; push32(c, v); }
    // 0cdd20  call 0xcc7bc
    X86_AT(c, 0xcdd20u);
    push32(c, 0xcdd25u); x86_call_known(c, 0xcc7bcu, f_000cc7bc); X86_RET(c, 0xcdd25u);
    X86_TICK(c, 9);
    // 0cdd25  push 0x2e8c
    X86_AT(c, 0xcdd25u);
    { uint32_t v = 0x2E8Cu; push32(c, v); }
    // 0cdd2a  call 0xcad60
    X86_AT(c, 0xcdd2au);
    push32(c, 0xcdd2fu); x86_call_known(c, 0xcad60u, f_000cad60); X86_RET(c, 0xcdd2fu);
    X86_TICK(c, 2);
    // 0cdd2f  add esp, 0x10
    X86_AT(c, 0xcdd2fu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
L_cdd32:
    X86_TICK(c, 9);
    // 0cdd32  push 4
    X86_AT(c, 0xcdd32u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0cdd34  call 0xc81e4
    X86_AT(c, 0xcdd34u);
    push32(c, 0xcdd39u); x86_call_known(c, 0xc81e4u, f_000c81e4); X86_RET(c, 0xcdd39u);
    X86_TICK(c, 12);
    // 0cdd39  xchg ebx, eax
    X86_AT(c, 0xcdd39u);
    { uint32_t t = c.r[3]; c.r[3] = c.r[0]; c.r[0] = t; }
    // 0cdd3a  add esp, 4
    X86_AT(c, 0xcdd3au);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0cdd3d  cmp bl, 0x59
    X86_AT(c, 0xcdd3du);
    (void)x86_sub(c, g8(c, 3), 0x59u, 0, 1);
    // 0cdd40  je 0xcdd51
    X86_AT(c, 0xcdd40u);
    if (x86_cc(c, 4)) { goto L_cdd51; }
    X86_TICK(c, 7);
    // 0cdd42  cmp bl, 0x4e
    X86_AT(c, 0xcdd42u);
    (void)x86_sub(c, g8(c, 3), 0x4Eu, 0, 1);
    // 0cdd45  je 0xcdd51
    X86_AT(c, 0xcdd45u);
    if (x86_cc(c, 4)) { goto L_cdd51; }
    X86_TICK(c, 7);
    // 0cdd47  cmp bl, 0x52
    X86_AT(c, 0xcdd47u);
    (void)x86_sub(c, g8(c, 3), 0x52u, 0, 1);
    // 0cdd4a  je 0xcdd51
    X86_AT(c, 0xcdd4au);
    if (x86_cc(c, 4)) { goto L_cdd51; }
    X86_TICK(c, 7);
    // 0cdd4c  cmp bl, 1
    X86_AT(c, 0xcdd4cu);
    (void)x86_sub(c, g8(c, 3), 0x1u, 0, 1);
    // 0cdd4f  jne 0xcdd32
    X86_AT(c, 0xcdd4fu);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xcdd32u); goto L_cdd32; }
L_cdd51:
    X86_TICK(c, 9);
    // 0cdd51  push 7
    X86_AT(c, 0xcdd51u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cdd53  call 0xca0a0
    X86_AT(c, 0xcdd53u);
    push32(c, 0xcdd58u); x86_call_known(c, 0xca0a0u, f_000ca0a0); X86_RET(c, 0xcdd58u);
    X86_TICK(c, 9);
    // 0cdd58  add esp, 4
    X86_AT(c, 0xcdd58u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0cdd5b  cmp bl, 0x59
    X86_AT(c, 0xcdd5bu);
    (void)x86_sub(c, g8(c, 3), 0x59u, 0, 1);
    // 0cdd5e  je 0xcdd69
    X86_AT(c, 0xcdd5eu);
    if (x86_cc(c, 4)) { goto L_cdd69; }
    X86_TICK(c, 7);
    // 0cdd60  cmp bl, 0x52
    X86_AT(c, 0xcdd60u);
    (void)x86_sub(c, g8(c, 3), 0x52u, 0, 1);
    // 0cdd63  jne 0xcdfc7
    X86_AT(c, 0xcdd63u);
    if (x86_cc(c, 5)) { goto L_cdfc7; }
L_cdd69:
    X86_TICK(c, 4);
    // 0cdd69  mov dword ptr [ebp - 4], 0
    X86_AT(c, 0xcdd69u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), 0x0u);
    // 0cdd70  mov edi, 1
    X86_AT(c, 0xcdd70u);
    c.r[7] = 0x1u;
L_cdd75:
    X86_TICK(c, 7);
    // 0cdd75  cmp edi, 7
    X86_AT(c, 0xcdd75u);
    (void)x86_sub(c, c.r[7], 0x7u, 0, 4);
    // 0cdd78  jg 0xcdd88
    X86_AT(c, 0xcdd78u);
    if (x86_cc(c, 15)) { goto L_cdd88; }
    X86_TICK(c, 11);
    // 0cdd7a  mov dword ptr [edi*4 + 0xb03fe], 0
    X86_AT(c, 0xcdd7au);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] * 4 + 0xB03FEu)), 0x0u);
    // 0cdd85  inc edi
    X86_AT(c, 0xcdd85u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0cdd86  jmp 0xcdd75
    X86_AT(c, 0xcdd86u);
    X86_POLL(c, 0xcdd75u); goto L_cdd75;
L_cdd88:
    X86_TICK(c, 2);
    // 0cdd88  sub edi, edi
    X86_AT(c, 0xcdd88u);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
L_cdd8a:
    X86_TICK(c, 7);
    // 0cdd8a  cmp edi, 0x10
    X86_AT(c, 0xcdd8au);
    (void)x86_sub(c, c.r[7], 0x10u, 0, 4);
    // 0cdd8d  jg 0xcddb0
    X86_AT(c, 0xcdd8du);
    if (x86_cc(c, 15)) { goto L_cddb0; }
    X86_TICK(c, 17);
    // 0cdd8f  mov dword ptr [edi*4 + 0xb0436], 0
    X86_AT(c, 0xcdd8fu);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] * 4 + 0xB0436u)), 0x0u);
    // 0cdd9a  mov eax, 0xffffffff
    X86_AT(c, 0xcdd9au);
    c.r[0] = 0xFFFFFFFFu;
    // 0cdd9f  mov dword ptr [edi*4 + 0xb047a], eax
    X86_AT(c, 0xcdd9fu);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] * 4 + 0xB047Au)), c.r[0]);
    // 0cdda6  mov dword ptr [edi*4 + 0xb04be], eax
    X86_AT(c, 0xcdda6u);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] * 4 + 0xB04BEu)), c.r[0]);
    // 0cddad  inc edi
    X86_AT(c, 0xcddadu);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0cddae  jmp 0xcdd8a
    X86_AT(c, 0xcddaeu);
    X86_POLL(c, 0xcdd8au); goto L_cdd8a;
L_cddb0:
    X86_TICK(c, 2);
    // 0cddb0  sub esi, esi
    X86_AT(c, 0xcddb0u);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[6], 0, 4); }
L_cddb2:
    X86_TICK(c, 11);
    // 0cddb2  cmp esi, dword ptr [0xaa2a0]
    X86_AT(c, 0xcddb2u);
    (void)x86_sub(c, c.r[6], rd32((c.sbase[3] + (uint32_t)(0xAA2A0u))), 0, 4);
    // 0cddb8  jg 0xcde10
    X86_AT(c, 0xcddb8u);
    if (x86_cc(c, 15)) { goto L_cde10; }
    X86_TICK(c, 15);
    // 0cddba  lea eax, [esi*8]
    X86_AT(c, 0xcddbau);
    c.r[0] = (uint32_t)(c.r[6] * 8);
    // 0cddc1  lea eax, [eax + eax*4]
    X86_AT(c, 0xcddc1u);
    c.r[0] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0cddc4  mov edx, dword ptr [eax + 0xbefcc]
    X86_AT(c, 0xcddc4u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0xBEFCCu)));
    // 0cddca  cmp edx, 0xab
    X86_AT(c, 0xcddcau);
    (void)x86_sub(c, c.r[2], 0xABu, 0, 4);
    // 0cddd0  jg 0xcde0d
    X86_AT(c, 0xcddd0u);
    if (x86_cc(c, 15)) { goto L_cde0d; }
    X86_TICK(c, 7);
    // 0cddd2  cmp edx, 0xa5
    X86_AT(c, 0xcddd2u);
    (void)x86_sub(c, c.r[2], 0xA5u, 0, 4);
    // 0cddd8  jl 0xcde0d
    X86_AT(c, 0xcddd8u);
    if (x86_cc(c, 12)) { goto L_cde0d; }
    X86_TICK(c, 11);
    // 0cddda  mov ecx, dword ptr [ebp - 4]
    X86_AT(c, 0xcdddau);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0cdddd  cmp ecx, 0x10
    X86_AT(c, 0xcddddu);
    (void)x86_sub(c, c.r[1], 0x10u, 0, 4);
    // 0cdde0  jg 0xcde0d
    X86_AT(c, 0xcdde0u);
    if (x86_cc(c, 15)) { goto L_cde0d; }
    X86_TICK(c, 26);
    // 0cdde2  inc dword ptr [edx*4 + 0xb016e]
    X86_AT(c, 0xcdde2u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[2] * 4 + 0xB016Eu)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0cdde9  mov dword ptr [ecx*4 + 0xb0436], edx
    X86_AT(c, 0xcdde9u);
    wr32((c.sbase[3] + (uint32_t)(c.r[1] * 4 + 0xB0436u)), c.r[2]);
    // 0cddf0  mov edx, dword ptr [eax + 0xbefd4]
    X86_AT(c, 0xcddf0u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0xBEFD4u)));
    // 0cddf6  mov dword ptr [ecx*4 + 0xb047a], edx
    X86_AT(c, 0xcddf6u);
    wr32((c.sbase[3] + (uint32_t)(c.r[1] * 4 + 0xB047Au)), c.r[2]);
    // 0cddfd  mov eax, dword ptr [eax + 0xbefd8]
    X86_AT(c, 0xcddfdu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0xBEFD8u)));
    // 0cde03  mov dword ptr [ecx*4 + 0xb04be], eax
    X86_AT(c, 0xcde03u);
    wr32((c.sbase[3] + (uint32_t)(c.r[1] * 4 + 0xB04BEu)), c.r[0]);
    // 0cde0a  inc dword ptr [ebp - 4]
    X86_AT(c, 0xcde0au);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
L_cde0d:
    X86_TICK(c, 9);
    // 0cde0d  inc esi
    X86_AT(c, 0xcde0du);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 0cde0e  jmp 0xcddb2
    X86_AT(c, 0xcde0eu);
    X86_POLL(c, 0xcddb2u); goto L_cddb2;
L_cde10:
    X86_TICK(c, 14);
    // 0cde10  mov eax, dword ptr [0xaa2a0]
    X86_AT(c, 0xcde10u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xAA2A0u)));
    // 0cde15  mov dword ptr [0xb0426], eax
    X86_AT(c, 0xcde15u);
    wr32((c.sbase[3] + (uint32_t)(0xB0426u)), c.r[0]);
    // 0cde1a  mov eax, dword ptr [0xaa2dc]
    X86_AT(c, 0xcde1au);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xAA2DCu)));
    // 0cde1f  mov dword ptr [0xb042a], eax
    X86_AT(c, 0xcde1fu);
    wr32((c.sbase[3] + (uint32_t)(0xB042Au)), c.r[0]);
    // 0cde24  sub edi, edi
    X86_AT(c, 0xcde24u);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
L_cde26:
    X86_TICK(c, 7);
    // 0cde26  cmp edi, 4
    X86_AT(c, 0xcde26u);
    (void)x86_sub(c, c.r[7], 0x4u, 0, 4);
    // 0cde29  jge 0xcdf8d
    X86_AT(c, 0xcde29u);
    if (x86_cc(c, 13)) { goto L_cdf8d; }
    X86_TICK(c, 37);
    // 0cde2f  imul eax, edi, 0x21a
    X86_AT(c, 0xcde2fu);
    c.r[0] = x86_imul2(c, c.r[7], 0x21Au, 4);
    // 0cde35  mov dl, byte ptr [0xb02ec]
    X86_AT(c, 0xcde35u);
    s8(c, 2, rd8((c.sbase[3] + (uint32_t)(0xB02ECu))));
    // 0cde3b  cmp dl, byte ptr [eax + 0xb0508]
    X86_AT(c, 0xcde3bu);
    (void)x86_sub(c, g8(c, 2), rd8((c.sbase[3] + (uint32_t)(c.r[0] + 0xB0508u))), 0, 1);
    // 0cde41  jne 0xcdf87
    X86_AT(c, 0xcde41u);
    if (x86_cc(c, 5)) { goto L_cdf87; }
    X86_TICK(c, 15);
    // 0cde47  mov dl, byte ptr [0xb02ed]
    X86_AT(c, 0xcde47u);
    s8(c, 2, rd8((c.sbase[3] + (uint32_t)(0xB02EDu))));
    // 0cde4d  cmp dl, byte ptr [eax + 0xb0509]
    X86_AT(c, 0xcde4du);
    (void)x86_sub(c, g8(c, 2), rd8((c.sbase[3] + (uint32_t)(c.r[0] + 0xB0509u))), 0, 1);
    // 0cde53  jne 0xcdf87
    X86_AT(c, 0xcde53u);
    if (x86_cc(c, 5)) { goto L_cdf87; }
    X86_TICK(c, 15);
    // 0cde59  mov dl, byte ptr [0xb02ee]
    X86_AT(c, 0xcde59u);
    s8(c, 2, rd8((c.sbase[3] + (uint32_t)(0xB02EEu))));
    // 0cde5f  cmp dl, byte ptr [eax + 0xb050a]
    X86_AT(c, 0xcde5fu);
    (void)x86_sub(c, g8(c, 2), rd8((c.sbase[3] + (uint32_t)(c.r[0] + 0xB050Au))), 0, 1);
    // 0cde65  jne 0xcdf87
    X86_AT(c, 0xcde65u);
    if (x86_cc(c, 5)) { goto L_cdf87; }
    X86_TICK(c, 15);
    // 0cde6b  mov dl, byte ptr [0xb02ef]
    X86_AT(c, 0xcde6bu);
    s8(c, 2, rd8((c.sbase[3] + (uint32_t)(0xB02EFu))));
    // 0cde71  cmp dl, byte ptr [eax + 0xb050b]
    X86_AT(c, 0xcde71u);
    (void)x86_sub(c, g8(c, 2), rd8((c.sbase[3] + (uint32_t)(c.r[0] + 0xB050Bu))), 0, 1);
    // 0cde77  jne 0xcdf87
    X86_AT(c, 0xcde77u);
    if (x86_cc(c, 5)) { goto L_cdf87; }
    X86_TICK(c, 15);
    // 0cde7d  mov dl, byte ptr [0xb02f0]
    X86_AT(c, 0xcde7du);
    s8(c, 2, rd8((c.sbase[3] + (uint32_t)(0xB02F0u))));
    // 0cde83  cmp dl, byte ptr [eax + 0xb050c]
    X86_AT(c, 0xcde83u);
    (void)x86_sub(c, g8(c, 2), rd8((c.sbase[3] + (uint32_t)(c.r[0] + 0xB050Cu))), 0, 1);
    // 0cde89  jne 0xcdf87
    X86_AT(c, 0xcde89u);
    if (x86_cc(c, 5)) { goto L_cdf87; }
    X86_TICK(c, 15);
    // 0cde8f  mov dl, byte ptr [0xb02f1]
    X86_AT(c, 0xcde8fu);
    s8(c, 2, rd8((c.sbase[3] + (uint32_t)(0xB02F1u))));
    // 0cde95  cmp dl, byte ptr [eax + 0xb050d]
    X86_AT(c, 0xcde95u);
    (void)x86_sub(c, g8(c, 2), rd8((c.sbase[3] + (uint32_t)(c.r[0] + 0xB050Du))), 0, 1);
    // 0cde9b  jne 0xcdf87
    X86_AT(c, 0xcde9bu);
    if (x86_cc(c, 5)) { goto L_cdf87; }
    X86_TICK(c, 15);
    // 0cdea1  mov dl, byte ptr [0xb02f2]
    X86_AT(c, 0xcdea1u);
    s8(c, 2, rd8((c.sbase[3] + (uint32_t)(0xB02F2u))));
    // 0cdea7  cmp dl, byte ptr [eax + 0xb050e]
    X86_AT(c, 0xcdea7u);
    (void)x86_sub(c, g8(c, 2), rd8((c.sbase[3] + (uint32_t)(c.r[0] + 0xB050Eu))), 0, 1);
    // 0cdead  jne 0xcdf87
    X86_AT(c, 0xcdeadu);
    if (x86_cc(c, 5)) { goto L_cdf87; }
    X86_TICK(c, 15);
    // 0cdeb3  mov dl, byte ptr [0xb02f3]
    X86_AT(c, 0xcdeb3u);
    s8(c, 2, rd8((c.sbase[3] + (uint32_t)(0xB02F3u))));
    // 0cdeb9  cmp dl, byte ptr [eax + 0xb050f]
    X86_AT(c, 0xcdeb9u);
    (void)x86_sub(c, g8(c, 2), rd8((c.sbase[3] + (uint32_t)(c.r[0] + 0xB050Fu))), 0, 1);
    // 0cdebf  jne 0xcdf87
    X86_AT(c, 0xcdebfu);
    if (x86_cc(c, 5)) { goto L_cdf87; }
    X86_TICK(c, 15);
    // 0cdec5  mov dl, byte ptr [0xb02f4]
    X86_AT(c, 0xcdec5u);
    s8(c, 2, rd8((c.sbase[3] + (uint32_t)(0xB02F4u))));
    // 0cdecb  cmp dl, byte ptr [eax + 0xb0510]
    X86_AT(c, 0xcdecbu);
    (void)x86_sub(c, g8(c, 2), rd8((c.sbase[3] + (uint32_t)(c.r[0] + 0xB0510u))), 0, 1);
    // 0cded1  jne 0xcdf87
    X86_AT(c, 0xcded1u);
    if (x86_cc(c, 5)) { goto L_cdf87; }
    X86_TICK(c, 15);
    // 0cded7  mov dl, byte ptr [0xb02f5]
    X86_AT(c, 0xcded7u);
    s8(c, 2, rd8((c.sbase[3] + (uint32_t)(0xB02F5u))));
    // 0cdedd  cmp dl, byte ptr [eax + 0xb0511]
    X86_AT(c, 0xcdeddu);
    (void)x86_sub(c, g8(c, 2), rd8((c.sbase[3] + (uint32_t)(c.r[0] + 0xB0511u))), 0, 1);
    // 0cdee3  jne 0xcdf87
    X86_AT(c, 0xcdee3u);
    if (x86_cc(c, 5)) { goto L_cdf87; }
    X86_TICK(c, 15);
    // 0cdee9  mov dl, byte ptr [0xb02f6]
    X86_AT(c, 0xcdee9u);
    s8(c, 2, rd8((c.sbase[3] + (uint32_t)(0xB02F6u))));
    // 0cdeef  cmp dl, byte ptr [eax + 0xb0512]
    X86_AT(c, 0xcdeefu);
    (void)x86_sub(c, g8(c, 2), rd8((c.sbase[3] + (uint32_t)(c.r[0] + 0xB0512u))), 0, 1);
    // 0cdef5  jne 0xcdf87
    X86_AT(c, 0xcdef5u);
    if (x86_cc(c, 5)) { goto L_cdf87; }
    X86_TICK(c, 15);
    // 0cdefb  mov dl, byte ptr [0xb02f7]
    X86_AT(c, 0xcdefbu);
    s8(c, 2, rd8((c.sbase[3] + (uint32_t)(0xB02F7u))));
    // 0cdf01  cmp dl, byte ptr [eax + 0xb0513]
    X86_AT(c, 0xcdf01u);
    (void)x86_sub(c, g8(c, 2), rd8((c.sbase[3] + (uint32_t)(c.r[0] + 0xB0513u))), 0, 1);
    // 0cdf07  jne 0xcdf87
    X86_AT(c, 0xcdf07u);
    if (x86_cc(c, 5)) { goto L_cdf87; }
    X86_TICK(c, 15);
    // 0cdf0d  mov dl, byte ptr [0xb02f8]
    X86_AT(c, 0xcdf0du);
    s8(c, 2, rd8((c.sbase[3] + (uint32_t)(0xB02F8u))));
    // 0cdf13  cmp dl, byte ptr [eax + 0xb0514]
    X86_AT(c, 0xcdf13u);
    (void)x86_sub(c, g8(c, 2), rd8((c.sbase[3] + (uint32_t)(c.r[0] + 0xB0514u))), 0, 1);
    // 0cdf19  jne 0xcdf87
    X86_AT(c, 0xcdf19u);
    if (x86_cc(c, 5)) { goto L_cdf87; }
    X86_TICK(c, 15);
    // 0cdf1b  mov dl, byte ptr [0xb02f9]
    X86_AT(c, 0xcdf1bu);
    s8(c, 2, rd8((c.sbase[3] + (uint32_t)(0xB02F9u))));
    // 0cdf21  cmp dl, byte ptr [eax + 0xb0515]
    X86_AT(c, 0xcdf21u);
    (void)x86_sub(c, g8(c, 2), rd8((c.sbase[3] + (uint32_t)(c.r[0] + 0xB0515u))), 0, 1);
    // 0cdf27  jne 0xcdf87
    X86_AT(c, 0xcdf27u);
    if (x86_cc(c, 5)) { goto L_cdf87; }
    X86_TICK(c, 15);
    // 0cdf29  mov dl, byte ptr [0xb02fb]
    X86_AT(c, 0xcdf29u);
    s8(c, 2, rd8((c.sbase[3] + (uint32_t)(0xB02FBu))));
    // 0cdf2f  cmp dl, byte ptr [eax + 0xb0517]
    X86_AT(c, 0xcdf2fu);
    (void)x86_sub(c, g8(c, 2), rd8((c.sbase[3] + (uint32_t)(c.r[0] + 0xB0517u))), 0, 1);
    // 0cdf35  jne 0xcdf87
    X86_AT(c, 0xcdf35u);
    if (x86_cc(c, 5)) { goto L_cdf87; }
    X86_TICK(c, 15);
    // 0cdf37  mov dl, byte ptr [0xb02fc]
    X86_AT(c, 0xcdf37u);
    s8(c, 2, rd8((c.sbase[3] + (uint32_t)(0xB02FCu))));
    // 0cdf3d  cmp dl, byte ptr [eax + 0xb0518]
    X86_AT(c, 0xcdf3du);
    (void)x86_sub(c, g8(c, 2), rd8((c.sbase[3] + (uint32_t)(c.r[0] + 0xB0518u))), 0, 1);
    // 0cdf43  jne 0xcdf87
    X86_AT(c, 0xcdf43u);
    if (x86_cc(c, 5)) { goto L_cdf87; }
    X86_TICK(c, 15);
    // 0cdf45  mov dl, byte ptr [0xb02fd]
    X86_AT(c, 0xcdf45u);
    s8(c, 2, rd8((c.sbase[3] + (uint32_t)(0xB02FDu))));
    // 0cdf4b  cmp dl, byte ptr [eax + 0xb0519]
    X86_AT(c, 0xcdf4bu);
    (void)x86_sub(c, g8(c, 2), rd8((c.sbase[3] + (uint32_t)(c.r[0] + 0xB0519u))), 0, 1);
    // 0cdf51  jne 0xcdf87
    X86_AT(c, 0xcdf51u);
    if (x86_cc(c, 5)) { goto L_cdf87; }
    X86_TICK(c, 9);
    // 0cdf53  push 0x2ed4
    X86_AT(c, 0xcdf53u);
    { uint32_t v = 0x2ED4u; push32(c, v); }
    // 0cdf58  call 0xcc7bc
    X86_AT(c, 0xcdf58u);
    push32(c, 0xcdf5du); x86_call_known(c, 0xcc7bcu, f_000cc7bc); X86_RET(c, 0xcdf5du);
    X86_TICK(c, 35);
    // 0cdf5d  imul eax, edi, 0x21a
    X86_AT(c, 0xcdf5du);
    c.r[0] = x86_imul2(c, c.r[7], 0x21Au, 4);
    // 0cdf63  lea edx, [eax*1 + 0xb0508]
    X86_AT(c, 0xcdf63u);
    c.r[2] = (uint32_t)(c.r[0] + 0xB0508u);
    // 0cdf6a  push edx
    X86_AT(c, 0xcdf6au);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0cdf6b  push 0xb02ec
    X86_AT(c, 0xcdf6bu);
    { uint32_t v = 0xB02ECu; push32(c, v); }
    // 0cdf70  call 0xd87bc
    X86_AT(c, 0xcdf70u);
    push32(c, 0xcdf75u); x86_call_known(c, 0xd87bcu, f_000d87bc); X86_RET(c, 0xcdf75u);
    X86_TICK(c, 7);
    // 0cdf75  call 0xd79c8
    X86_AT(c, 0xcdf75u);
    push32(c, 0xcdf7au); x86_call_known(c, 0xd79c8u, f_000d79c8); X86_RET(c, 0xcdf7au);
    X86_TICK(c, 9);
    // 0cdf7a  push 0x2efc
    X86_AT(c, 0xcdf7au);
    { uint32_t v = 0x2EFCu; push32(c, v); }
    // 0cdf7f  call 0xcc7bc
    X86_AT(c, 0xcdf7fu);
    push32(c, 0xcdf84u); x86_call_known(c, 0xcc7bcu, f_000cc7bc); X86_RET(c, 0xcdf84u);
    X86_TICK(c, 2);
    // 0cdf84  add esp, 0x10
    X86_AT(c, 0xcdf84u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
L_cdf87:
    X86_TICK(c, 9);
    // 0cdf87  inc edi
    X86_AT(c, 0xcdf87u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0cdf88  jmp 0xcde26
    X86_AT(c, 0xcdf88u);
    X86_POLL(c, 0xcde26u); goto L_cde26;
L_cdf8d:
    X86_TICK(c, 7);
    // 0cdf8d  cmp bl, 0x52
    X86_AT(c, 0xcdf8du);
    (void)x86_sub(c, g8(c, 3), 0x52u, 0, 1);
    // 0cdf90  jne 0xcdfd4
    X86_AT(c, 0xcdf90u);
    if (x86_cc(c, 5)) { goto L_cdfd4; }
L_cdf92:
    X86_TICK(c, 12);
    // 0cdf92  cmp dword ptr [0xaa2a0], 1
    X86_AT(c, 0xcdf92u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xAA2A0u))), 0x1u, 0, 4);
    // 0cdf99  jl 0xcdfb1
    X86_AT(c, 0xcdf99u);
    if (x86_cc(c, 12)) { goto L_cdfb1; }
    X86_TICK(c, 17);
    // 0cdf9b  push dword ptr [0xbf000]
    X86_AT(c, 0xcdf9bu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xBF000u))); push32(c, v); }
    // 0cdfa1  push dword ptr [0xbeffc]
    X86_AT(c, 0xcdfa1u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xBEFFCu))); push32(c, v); }
    // 0cdfa7  call 0xcf758
    X86_AT(c, 0xcdfa7u);
    push32(c, 0xcdfacu); x86_call_known(c, 0xcf758u, f_000cf758); X86_RET(c, 0xcdfacu);
    X86_TICK(c, 9);
    // 0cdfac  add esp, 8
    X86_AT(c, 0xcdfacu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0cdfaf  jmp 0xcdf92
    X86_AT(c, 0xcdfafu);
    X86_POLL(c, 0xcdf92u); goto L_cdf92;
L_cdfb1:
    X86_TICK(c, 11);
    // 0cdfb1  mov dword ptr [0xaa2a8], 0
    X86_AT(c, 0xcdfb1u);
    wr32((c.sbase[3] + (uint32_t)(0xAA2A8u)), 0x0u);
    // 0cdfbb  mov dword ptr [0xb134c], 1
    X86_AT(c, 0xcdfbbu);
    wr32((c.sbase[3] + (uint32_t)(0xB134Cu)), 0x1u);
    // 0cdfc5  jmp 0xcdfd4
    X86_AT(c, 0xcdfc5u);
    goto L_cdfd4;
L_cdfc7:
    X86_TICK(c, 9);
    // 0cdfc7  push 0x2f18
    X86_AT(c, 0xcdfc7u);
    { uint32_t v = 0x2F18u; push32(c, v); }
    // 0cdfcc  call 0xcc7bc
    X86_AT(c, 0xcdfccu);
    push32(c, 0xcdfd1u); x86_call_known(c, 0xcc7bcu, f_000cc7bc); X86_RET(c, 0xcdfd1u);
    X86_TICK(c, 2);
    // 0cdfd1  add esp, 4
    X86_AT(c, 0xcdfd1u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
L_cdfd4:
    X86_TICK(c, 28);
    // 0cdfd4  pop edi
    X86_AT(c, 0xcdfd4u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0cdfd5  pop esi
    X86_AT(c, 0xcdfd5u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0cdfd6  pop ebx
    X86_AT(c, 0xcdfd6u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0cdfd7  leave 
    X86_AT(c, 0xcdfd7u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0cdfd8  ret 
    X86_AT(c, 0xcdfd8u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xcdd08u, "ran off the end of a function");
}
void f_000cdfdc(X86Cpu& c) {
    X86_TICK(c, 11);
    // 0cdfdc  push 0xf
    X86_AT(c, 0xcdfdcu);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0cdfde  push 0x2f38
    X86_AT(c, 0xcdfdeu);
    { uint32_t v = 0x2F38u; push32(c, v); }
    // 0cdfe3  call 0xcc830
    X86_AT(c, 0xcdfe3u);
    push32(c, 0xcdfe8u); x86_call_known(c, 0xcc830u, f_000cc830); X86_RET(c, 0xcdfe8u);
    X86_TICK(c, 14);
    // 0cdfe8  add esp, 8
    X86_AT(c, 0xcdfe8u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0cdfeb  cmp dword ptr [0xb52f8], 0
    X86_AT(c, 0xcdfebu);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xB52F8u))), 0x0u, 0, 4);
    // 0cdff2  je 0xce007
    X86_AT(c, 0xcdff2u);
    if (x86_cc(c, 4)) { goto L_ce007; }
    X86_TICK(c, 9);
    // 0cdff4  push 0x2f58
    X86_AT(c, 0xcdff4u);
    { uint32_t v = 0x2F58u; push32(c, v); }
    // 0cdff9  call 0xcc7bc
    X86_AT(c, 0xcdff9u);
    push32(c, 0xcdffeu); x86_call_known(c, 0xcc7bcu, f_000cc7bc); X86_RET(c, 0xcdffeu);
    X86_TICK(c, 9);
    // 0cdffe  push 1
    X86_AT(c, 0xcdffeu);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0ce000  call 0xc5ca4
    X86_AT(c, 0xce000u);
    push32(c, 0xce005u); x86_call_known(c, 0xc5ca4u, f_000c5ca4); X86_RET(c, 0xce005u);
    X86_TICK(c, 7);
    // 0ce005  jmp 0xce031
    X86_AT(c, 0xce005u);
    goto L_ce031;
L_ce007:
    X86_TICK(c, 7);
    // 0ce007  call 0xcdd08
    X86_AT(c, 0xce007u);
    push32(c, 0xce00cu); x86_call_known(c, 0xcdd08u, f_000cdd08); X86_RET(c, 0xce00cu);
    X86_TICK(c, 12);
    // 0ce00c  cmp dword ptr [0xb134c], 1
    X86_AT(c, 0xce00cu);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xB134Cu))), 0x1u, 0, 4);
    // 0ce013  je 0xce034
    X86_AT(c, 0xce013u);
    if (x86_cc(c, 4)) { goto L_ce034; }
L_ce015:
    X86_TICK(c, 9);
    // 0ce015  push 4
    X86_AT(c, 0xce015u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ce017  call 0xc81e4
    X86_AT(c, 0xce017u);
    push32(c, 0xce01cu); x86_call_known(c, 0xc81e4u, f_000c81e4); X86_RET(c, 0xce01cu);
    X86_TICK(c, 9);
    // 0ce01c  add esp, 4
    X86_AT(c, 0xce01cu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0ce01f  and al, al
    X86_AT(c, 0xce01fu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & g8(c, 0), 1)); }
    // 0ce021  je 0xce015
    X86_AT(c, 0xce021u);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xce015u); goto L_ce015; }
    X86_TICK(c, 9);
    // 0ce023  push 2
    X86_AT(c, 0xce023u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0ce025  call 0xca3cc
    X86_AT(c, 0xce025u);
    push32(c, 0xce02au); x86_call_known(c, 0xca3ccu, f_000ca3cc); X86_RET(c, 0xce02au);
    X86_TICK(c, 9);
    // 0ce02a  push 7
    X86_AT(c, 0xce02au);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0ce02c  call 0xca0a0
    X86_AT(c, 0xce02cu);
    push32(c, 0xce031u); x86_call_known(c, 0xca0a0u, f_000ca0a0); X86_RET(c, 0xce031u);
L_ce031:
    X86_TICK(c, 2);
    // 0ce031  add esp, 8
    X86_AT(c, 0xce031u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
L_ce034:
    X86_TICK(c, 10);
    // 0ce034  ret 
    X86_AT(c, 0xce034u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xcdfdcu, "ran off the end of a function");
}
void f_000ce038(X86Cpu& c) {
    X86_TICK(c, 15);
    // 0ce038  push ebp
    X86_AT(c, 0xce038u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0ce039  mov ebp, esp
    X86_AT(c, 0xce039u);
    c.r[5] = c.r[4];
    // 0ce03b  push 0xf
    X86_AT(c, 0xce03bu);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0ce03d  push 0x2fa4
    X86_AT(c, 0xce03du);
    { uint32_t v = 0x2FA4u; push32(c, v); }
    // 0ce042  call 0xcc830
    X86_AT(c, 0xce042u);
    push32(c, 0xce047u); x86_call_known(c, 0xcc830u, f_000cc830); X86_RET(c, 0xce047u);
    X86_TICK(c, 30);
    // 0ce047  mov eax, dword ptr [0xb2304]
    X86_AT(c, 0xce047u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xB2304u)));
    // 0ce04c  shl eax, 8
    X86_AT(c, 0xce04cu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 0ce04f  mov edx, dword ptr [0xb2308]
    X86_AT(c, 0xce04fu);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(0xB2308u)));
    // 0ce055  shl edx, 4
    X86_AT(c, 0xce055u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[2] = r; }
    // 0ce058  add edx, eax
    X86_AT(c, 0xce058u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0ce05a  add esp, 8
    X86_AT(c, 0xce05au);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0ce05d  cmp dword ptr [edx + 0xb233c], 4
    X86_AT(c, 0xce05du);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xB233Cu))), 0x4u, 0, 4);
    // 0ce064  je 0xce07f
    X86_AT(c, 0xce064u);
    if (x86_cc(c, 4)) { goto L_ce07f; }
    X86_TICK(c, 9);
    // 0ce066  push 0x2fb8
    X86_AT(c, 0xce066u);
    { uint32_t v = 0x2FB8u; push32(c, v); }
    // 0ce06b  call 0xcc7bc
    X86_AT(c, 0xce06bu);
    push32(c, 0xce070u); x86_call_known(c, 0xcc7bcu, f_000cc7bc); X86_RET(c, 0xce070u);
    X86_TICK(c, 9);
    // 0ce070  push 1
    X86_AT(c, 0xce070u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0ce072  call 0xc5ca4
    X86_AT(c, 0xce072u);
    push32(c, 0xce077u); x86_call_known(c, 0xc5ca4u, f_000c5ca4); X86_RET(c, 0xce077u);
    X86_TICK(c, 9);
    // 0ce077  add esp, 8
    X86_AT(c, 0xce077u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0ce07a  jmp 0xce118
    X86_AT(c, 0xce07au);
    goto L_ce118;
L_ce07f:
    X86_TICK(c, 15);
    // 0ce07f  mov eax, dword ptr [ebp + 8]
    X86_AT(c, 0xce07fu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0ce082  cmp eax, dword ptr [0xb0306]
    X86_AT(c, 0xce082u);
    (void)x86_sub(c, c.r[0], rd32((c.sbase[3] + (uint32_t)(0xB0306u))), 0, 4);
    // 0ce088  jle 0xce0bb
    X86_AT(c, 0xce088u);
    if (x86_cc(c, 14)) { goto L_ce0bb; }
    X86_TICK(c, 12);
    // 0ce08a  cmp byte ptr [0xb02fc], 3
    X86_AT(c, 0xce08au);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0xB02FCu))), 0x3u, 0, 1);
    // 0ce091  je 0xce0bb
    X86_AT(c, 0xce091u);
    if (x86_cc(c, 4)) { goto L_ce0bb; }
    X86_TICK(c, 11);
    // 0ce093  push 0xf
    X86_AT(c, 0xce093u);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0ce095  push 0x2fe8
    X86_AT(c, 0xce095u);
    { uint32_t v = 0x2FE8u; push32(c, v); }
    // 0ce09a  call 0xcc830
    X86_AT(c, 0xce09au);
    push32(c, 0xce09fu); x86_call_known(c, 0xcc830u, f_000cc830); X86_RET(c, 0xce09fu);
    X86_TICK(c, 9);
    // 0ce09f  push 8
    X86_AT(c, 0xce09fu);
    { uint32_t v = 0x8u; push32(c, v); }
    // 0ce0a1  call 0xc5ca4
    X86_AT(c, 0xce0a1u);
    push32(c, 0xce0a6u); x86_call_known(c, 0xc5ca4u, f_000c5ca4); X86_RET(c, 0xce0a6u);
    X86_TICK(c, 18);
    // 0ce0a6  mov eax, dword ptr [0xb2328]
    X86_AT(c, 0xce0a6u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xB2328u)));
    // 0ce0ab  sub dword ptr [0xb02fe], eax
    X86_AT(c, 0xce0abu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xB02FEu)); uint32_t v = rd32(ea); wr32(ea, x86_sub(c, v, c.r[0], 0, 4)); }
    // 0ce0b1  call 0xcc628
    X86_AT(c, 0xce0b1u);
    push32(c, 0xce0b6u); x86_call_known(c, 0xcc628u, f_000cc628); X86_RET(c, 0xce0b6u);
    X86_TICK(c, 9);
    // 0ce0b6  add esp, 0xc
    X86_AT(c, 0xce0b6u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0ce0b9  jmp 0xce113
    X86_AT(c, 0xce0b9u);
    goto L_ce113;
L_ce0bb:
    X86_TICK(c, 33);
    // 0ce0bb  mov eax, dword ptr [0xb2304]
    X86_AT(c, 0xce0bbu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xB2304u)));
    // 0ce0c0  shl eax, 8
    X86_AT(c, 0xce0c0u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 0ce0c3  mov edx, dword ptr [0xb2308]
    X86_AT(c, 0xce0c3u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(0xB2308u)));
    // 0ce0c9  shl edx, 4
    X86_AT(c, 0xce0c9u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[2] = r; }
    // 0ce0cc  add edx, eax
    X86_AT(c, 0xce0ccu);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0ce0ce  sub eax, eax
    X86_AT(c, 0xce0ceu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0ce0d0  mov dword ptr [edx + 0xb233c], eax
    X86_AT(c, 0xce0d0u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xB233Cu)), c.r[0]);
    // 0ce0d6  mov dword ptr [edx + 0xb2334], eax
    X86_AT(c, 0xce0d6u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xB2334u)), c.r[0]);
    // 0ce0dc  cmp eax, dword ptr [0x43eb8]
    X86_AT(c, 0xce0dcu);
    (void)x86_sub(c, c.r[0], rd32((c.sbase[3] + (uint32_t)(0x43EB8u))), 0, 4);
    // 0ce0e2  jne 0xce0f3
    X86_AT(c, 0xce0e2u);
    if (x86_cc(c, 5)) { goto L_ce0f3; }
    X86_TICK(c, 11);
    // 0ce0e4  push 0xf
    X86_AT(c, 0xce0e4u);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0ce0e6  push 0x3030
    X86_AT(c, 0xce0e6u);
    { uint32_t v = 0x3030u; push32(c, v); }
    // 0ce0eb  call 0xcc830
    X86_AT(c, 0xce0ebu);
    push32(c, 0xce0f0u); x86_call_known(c, 0xcc830u, f_000cc830); X86_RET(c, 0xce0f0u);
    X86_TICK(c, 2);
    // 0ce0f0  add esp, 8
    X86_AT(c, 0xce0f0u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
L_ce0f3:
    X86_TICK(c, 41);
    // 0ce0f3  push 0
    X86_AT(c, 0xce0f3u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0ce0f5  mov eax, dword ptr [0xb2328]
    X86_AT(c, 0xce0f5u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xB2328u)));
    // 0ce0fa  mul eax
    X86_AT(c, 0xce0fau);
    x86_mul(c, c.r[0], 4);
    // 0ce0fc  add eax, 9
    X86_AT(c, 0xce0fcu);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0x9u, 0, 4); }
    // 0ce0ff  push eax
    X86_AT(c, 0xce0ffu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ce100  push 3
    X86_AT(c, 0xce100u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0ce102  call 0xc5df0
    X86_AT(c, 0xce102u);
    push32(c, 0xce107u); x86_call_known(c, 0xc5df0u, f_000c5df0); X86_RET(c, 0xce107u);
    X86_TICK(c, 11);
    // 0ce107  add esp, 8
    X86_AT(c, 0xce107u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0ce10a  push eax
    X86_AT(c, 0xce10au);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ce10b  call 0xcc8b8
    X86_AT(c, 0xce10bu);
    push32(c, 0xce110u); x86_call_known(c, 0xcc8b8u, f_000cc8b8); X86_RET(c, 0xce110u);
    X86_TICK(c, 2);
    // 0ce110  add esp, 8
    X86_AT(c, 0xce110u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
L_ce113:
    X86_TICK(c, 7);
    // 0ce113  call 0xdb454
    X86_AT(c, 0xce113u);
    push32(c, 0xce118u); x86_call_known(c, 0xdb454u, f_000db454); X86_RET(c, 0xce118u);
L_ce118:
    X86_TICK(c, 16);
    // 0ce118  leave 
    X86_AT(c, 0xce118u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0ce119  ret 
    X86_AT(c, 0xce119u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xce038u, "ran off the end of a function");
}
void f_000ce11c(X86Cpu& c) {
    X86_TICK(c, 15);
    // 0ce11c  push edi
    X86_AT(c, 0xce11cu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0ce11d  movzx edi, byte ptr [0x92494]
    X86_AT(c, 0xce11du);
    c.r[7] = rd8((c.sbase[3] + (uint32_t)(0x92494u)));
    // 0ce124  cmp edi, 0x49
    X86_AT(c, 0xce124u);
    (void)x86_sub(c, c.r[7], 0x49u, 0, 4);
    // 0ce127  je 0xce151
    X86_AT(c, 0xce127u);
    if (x86_cc(c, 4)) { goto L_ce151; }
    X86_TICK(c, 7);
    // 0ce129  cmp edi, 0x4a
    X86_AT(c, 0xce129u);
    (void)x86_sub(c, c.r[7], 0x4Au, 0, 4);
    // 0ce12c  je 0xce151
    X86_AT(c, 0xce12cu);
    if (x86_cc(c, 4)) { goto L_ce151; }
    X86_TICK(c, 9);
    // 0ce12e  push 0x3050
    X86_AT(c, 0xce12eu);
    { uint32_t v = 0x3050u; push32(c, v); }
    // 0ce133  call 0xcc7bc
    X86_AT(c, 0xce133u);
    push32(c, 0xce138u); x86_call_known(c, 0xcc7bcu, f_000cc7bc); X86_RET(c, 0xce138u);
    X86_TICK(c, 9);
    // 0ce138  push 0x3054
    X86_AT(c, 0xce138u);
    { uint32_t v = 0x3054u; push32(c, v); }
    // 0ce13d  call 0xcc7bc
    X86_AT(c, 0xce13du);
    push32(c, 0xce142u); x86_call_known(c, 0xcc7bcu, f_000cc7bc); X86_RET(c, 0xce142u);
    X86_TICK(c, 9);
    // 0ce142  push 1
    X86_AT(c, 0xce142u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0ce144  call 0xc5ca4
    X86_AT(c, 0xce144u);
    push32(c, 0xce149u); x86_call_known(c, 0xc5ca4u, f_000c5ca4); X86_RET(c, 0xce149u);
    X86_TICK(c, 9);
    // 0ce149  add esp, 0xc
    X86_AT(c, 0xce149u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0ce14c  jmp 0xce1ce
    X86_AT(c, 0xce14cu);
    goto L_ce1ce;
L_ce151:
    X86_TICK(c, 9);
    // 0ce151  push 0x3066
    X86_AT(c, 0xce151u);
    { uint32_t v = 0x3066u; push32(c, v); }
    // 0ce156  call 0xcc7bc
    X86_AT(c, 0xce156u);
    push32(c, 0xce15bu); x86_call_known(c, 0xcc7bcu, f_000cc7bc); X86_RET(c, 0xce15bu);
    X86_TICK(c, 14);
    // 0ce15b  add esp, 4
    X86_AT(c, 0xce15bu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0ce15e  cmp dword ptr [0xaa2d0], 0
    X86_AT(c, 0xce15eu);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xAA2D0u))), 0x0u, 0, 4);
    // 0ce165  jne 0xce16e
    X86_AT(c, 0xce165u);
    if (x86_cc(c, 5)) { goto L_ce16e; }
    X86_TICK(c, 9);
    // 0ce167  push 0x3068
    X86_AT(c, 0xce167u);
    { uint32_t v = 0x3068u; push32(c, v); }
    // 0ce16c  jmp 0xce17b
    X86_AT(c, 0xce16cu);
    goto L_ce17b;
L_ce16e:
    X86_TICK(c, 11);
    // 0ce16e  cmp edi, dword ptr [0xaaea8]
    X86_AT(c, 0xce16eu);
    (void)x86_sub(c, c.r[7], rd32((c.sbase[3] + (uint32_t)(0xAAEA8u))), 0, 4);
    // 0ce174  je 0xce185
    X86_AT(c, 0xce174u);
    if (x86_cc(c, 4)) { goto L_ce185; }
    X86_TICK(c, 2);
    // 0ce176  push 0x30a4
    X86_AT(c, 0xce176u);
    { uint32_t v = 0x30A4u; push32(c, v); }
L_ce17b:
    X86_TICK(c, 7);
    // 0ce17b  call 0xcc7bc
    X86_AT(c, 0xce17bu);
    push32(c, 0xce180u); x86_call_known(c, 0xcc7bcu, f_000cc7bc); X86_RET(c, 0xce180u);
    X86_TICK(c, 9);
    // 0ce180  add esp, 4
    X86_AT(c, 0xce180u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0ce183  jmp 0xce1ce
    X86_AT(c, 0xce183u);
    goto L_ce1ce;
L_ce185:
    X86_TICK(c, 9);
    // 0ce185  push 0x30f0
    X86_AT(c, 0xce185u);
    { uint32_t v = 0x30F0u; push32(c, v); }
    // 0ce18a  call 0xcc7bc
    X86_AT(c, 0xce18au);
    push32(c, 0xce18fu); x86_call_known(c, 0xcc7bcu, f_000cc7bc); X86_RET(c, 0xce18fu);
    X86_TICK(c, 39);
    // 0ce18f  mov dword ptr [0xaa2cc], 1
    X86_AT(c, 0xce18fu);
    wr32((c.sbase[3] + (uint32_t)(0xAA2CCu)), 0x1u);
    // 0ce199  mov eax, dword ptr [0xb033e]
    X86_AT(c, 0xce199u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xB033Eu)));
    // 0ce19e  lea eax, [eax*8]
    X86_AT(c, 0xce19eu);
    c.r[0] = (uint32_t)(c.r[0] * 8);
    // 0ce1a5  lea edx, [eax + eax*4]
    X86_AT(c, 0xce1a5u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0ce1a8  lea edx, [eax + edx*4]
    X86_AT(c, 0xce1a8u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 4);
    // 0ce1ab  add edx, dword ptr [0xb033a]
    X86_AT(c, 0xce1abu);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, rd32((c.sbase[3] + (uint32_t)(0xB033Au))), 0, 4); }
    // 0ce1b1  mov byte ptr [edx + 0x8bd50], 9
    X86_AT(c, 0xce1b1u);
    wr8((c.sbase[3] + (uint32_t)(c.r[2] + 0x8BD50u)), 0x9u);
    // 0ce1b8  push 4
    X86_AT(c, 0xce1b8u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ce1ba  push dword ptr [0xb033e]
    X86_AT(c, 0xce1bau);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xB033Eu))); push32(c, v); }
    // 0ce1c0  push dword ptr [0xb033a]
    X86_AT(c, 0xce1c0u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xB033Au))); push32(c, v); }
    // 0ce1c6  call 0xcba8c
    X86_AT(c, 0xce1c6u);
    push32(c, 0xce1cbu); x86_call_known(c, 0xcba8cu, f_000cba8c); X86_RET(c, 0xce1cbu);
    X86_TICK(c, 2);
    // 0ce1cb  add esp, 0x10
    X86_AT(c, 0xce1cbu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
L_ce1ce:
    X86_TICK(c, 14);
    // 0ce1ce  pop edi
    X86_AT(c, 0xce1ceu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0ce1cf  ret 
    X86_AT(c, 0xce1cfu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xce11cu, "ran off the end of a function");
}
void f_000ce1d0(X86Cpu& c) {
    X86_TICK(c, 11);
    // 0ce1d0  push 0x3120
    X86_AT(c, 0xce1d0u);
    { uint32_t v = 0x3120u; push32(c, v); }
    // 0ce1d5  push 7
    X86_AT(c, 0xce1d5u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0ce1d7  call 0xc8cdc
    X86_AT(c, 0xce1d7u);
    push32(c, 0xce1dcu); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xce1dcu);
    X86_TICK(c, 14);
    // 0ce1dc  add esp, 8
    X86_AT(c, 0xce1dcu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0ce1df  cmp dword ptr [0xb52f8], 3
    X86_AT(c, 0xce1dfu);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xB52F8u))), 0x3u, 0, 4);
    // 0ce1e6  jne 0xce1f9
    X86_AT(c, 0xce1e6u);
    if (x86_cc(c, 5)) { goto L_ce1f9; }
    X86_TICK(c, 11);
    // 0ce1e8  push 0x4b
    X86_AT(c, 0xce1e8u);
    { uint32_t v = 0x4Bu; push32(c, v); }
    // 0ce1ea  push 1
    X86_AT(c, 0xce1eau);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0ce1ec  call 0xc5df0
    X86_AT(c, 0xce1ecu);
    push32(c, 0xce1f1u); x86_call_known(c, 0xc5df0u, f_000c5df0); X86_RET(c, 0xce1f1u);
    X86_TICK(c, 9);
    // 0ce1f1  push eax
    X86_AT(c, 0xce1f1u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ce1f2  call 0xce038
    X86_AT(c, 0xce1f2u);
    push32(c, 0xce1f7u); x86_call_known(c, 0xce038u, f_000ce038); X86_RET(c, 0xce1f7u);
    X86_TICK(c, 7);
    // 0ce1f7  jmp 0xce251
    X86_AT(c, 0xce1f7u);
    goto L_ce251;
L_ce1f9:
    X86_TICK(c, 12);
    // 0ce1f9  cmp dword ptr [0xb52f8], 2
    X86_AT(c, 0xce1f9u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xB52F8u))), 0x2u, 0, 4);
    // 0ce200  jne 0xce209
    X86_AT(c, 0xce200u);
    if (x86_cc(c, 5)) { goto L_ce209; }
    X86_TICK(c, 7);
    // 0ce202  call 0xce11c
    X86_AT(c, 0xce202u);
    push32(c, 0xce207u); x86_call_known(c, 0xce11cu, f_000ce11c); X86_RET(c, 0xce207u);
    X86_TICK(c, 7);
    // 0ce207  jmp 0xce254
    X86_AT(c, 0xce207u);
    goto L_ce254;
L_ce209:
    X86_TICK(c, 11);
    // 0ce209  mov eax, dword ptr [0xb52f8]
    X86_AT(c, 0xce209u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xB52F8u)));
    // 0ce20e  and eax, eax
    X86_AT(c, 0xce20eu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0ce210  je 0xce217
    X86_AT(c, 0xce210u);
    if (x86_cc(c, 4)) { goto L_ce217; }
    X86_TICK(c, 7);
    // 0ce212  cmp eax, 4
    X86_AT(c, 0xce212u);
    (void)x86_sub(c, c.r[0], 0x4u, 0, 4);
    // 0ce215  jne 0xce22d
    X86_AT(c, 0xce215u);
    if (x86_cc(c, 5)) { goto L_ce22d; }
L_ce217:
    X86_TICK(c, 9);
    // 0ce217  push 0x3134
    X86_AT(c, 0xce217u);
    { uint32_t v = 0x3134u; push32(c, v); }
    // 0ce21c  call 0xcc7bc
    X86_AT(c, 0xce21cu);
    push32(c, 0xce221u); x86_call_known(c, 0xcc7bcu, f_000cc7bc); X86_RET(c, 0xce221u);
    X86_TICK(c, 9);
    // 0ce221  push 1
    X86_AT(c, 0xce221u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0ce223  call 0xc5ca4
    X86_AT(c, 0xce223u);
    push32(c, 0xce228u); x86_call_known(c, 0xc5ca4u, f_000c5ca4); X86_RET(c, 0xce228u);
    X86_TICK(c, 9);
    // 0ce228  add esp, 8
    X86_AT(c, 0xce228u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0ce22b  jmp 0xce254
    X86_AT(c, 0xce22bu);
    goto L_ce254;
L_ce22d:
    X86_TICK(c, 12);
    // 0ce22d  cmp dword ptr [0xb52f8], 1
    X86_AT(c, 0xce22du);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xB52F8u))), 0x1u, 0, 4);
    // 0ce234  jne 0xce254
    X86_AT(c, 0xce234u);
    if (x86_cc(c, 5)) { goto L_ce254; }
    X86_TICK(c, 9);
    // 0ce236  push 0x313a
    X86_AT(c, 0xce236u);
    { uint32_t v = 0x313Au; push32(c, v); }
    // 0ce23b  call 0xcc7bc
    X86_AT(c, 0xce23bu);
    push32(c, 0xce240u); x86_call_known(c, 0xcc7bcu, f_000cc7bc); X86_RET(c, 0xce240u);
    X86_TICK(c, 9);
    // 0ce240  push 0x313c
    X86_AT(c, 0xce240u);
    { uint32_t v = 0x313Cu; push32(c, v); }
    // 0ce245  call 0xcc7bc
    X86_AT(c, 0xce245u);
    push32(c, 0xce24au); x86_call_known(c, 0xcc7bcu, f_000cc7bc); X86_RET(c, 0xce24au);
    X86_TICK(c, 9);
    // 0ce24a  push 1
    X86_AT(c, 0xce24au);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0ce24c  call 0xc5ca4
    X86_AT(c, 0xce24cu);
    push32(c, 0xce251u); x86_call_known(c, 0xc5ca4u, f_000c5ca4); X86_RET(c, 0xce251u);
L_ce251:
    X86_TICK(c, 2);
    // 0ce251  add esp, 0xc
    X86_AT(c, 0xce251u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
L_ce254:
    X86_TICK(c, 10);
    // 0ce254  ret 
    X86_AT(c, 0xce254u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xce1d0u, "ran off the end of a function");
}
void f_000ce258(X86Cpu& c) {
    X86_TICK(c, 9);
    // 0ce258  push 0x3150
    X86_AT(c, 0xce258u);
    { uint32_t v = 0x3150u; push32(c, v); }
    // 0ce25d  call 0xcc7bc
    X86_AT(c, 0xce25du);
    push32(c, 0xce262u); x86_call_known(c, 0xcc7bcu, f_000cc7bc); X86_RET(c, 0xce262u);
    X86_TICK(c, 9);
    // 0ce262  push 1
    X86_AT(c, 0xce262u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0ce264  call 0xc5ca4
    X86_AT(c, 0xce264u);
    push32(c, 0xce269u); x86_call_known(c, 0xc5ca4u, f_000c5ca4); X86_RET(c, 0xce269u);
    X86_TICK(c, 12);
    // 0ce269  add esp, 8
    X86_AT(c, 0xce269u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0ce26c  ret 
    X86_AT(c, 0xce26cu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xce258u, "ran off the end of a function");
}
void f_000ce270(X86Cpu& c) {
    X86_TICK(c, 25);
    // 0ce270  push ebp
    X86_AT(c, 0xce270u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0ce271  mov ebp, esp
    X86_AT(c, 0xce271u);
    c.r[5] = c.r[4];
    // 0ce273  push eax
    X86_AT(c, 0xce273u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ce274  push ebx
    X86_AT(c, 0xce274u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0ce275  push esi
    X86_AT(c, 0xce275u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0ce276  push edi
    X86_AT(c, 0xce276u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0ce277  sub ebx, ebx
    X86_AT(c, 0xce277u);
    { uint32_t v = c.r[3]; c.r[3] = x86_sub(c, v, c.r[3], 0, 4); }
    // 0ce279  cmp ebx, dword ptr [0xb52f8]
    X86_AT(c, 0xce279u);
    (void)x86_sub(c, c.r[3], rd32((c.sbase[3] + (uint32_t)(0xB52F8u))), 0, 4);
    // 0ce27f  je 0xce28b
    X86_AT(c, 0xce27fu);
    if (x86_cc(c, 4)) { goto L_ce28b; }
    X86_TICK(c, 9);
    // 0ce281  push 0x316c
    X86_AT(c, 0xce281u);
    { uint32_t v = 0x316Cu; push32(c, v); }
    // 0ce286  jmp 0xce382
    X86_AT(c, 0xce286u);
    goto L_ce382;
L_ce28b:
    X86_TICK(c, 12);
    // 0ce28b  cmp dword ptr [0xb0332], 0
    X86_AT(c, 0xce28bu);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xB0332u))), 0x0u, 0, 4);
    // 0ce292  jne 0xce29e
    X86_AT(c, 0xce292u);
    if (x86_cc(c, 5)) { goto L_ce29e; }
    X86_TICK(c, 9);
    // 0ce294  push 0x3180
    X86_AT(c, 0xce294u);
    { uint32_t v = 0x3180u; push32(c, v); }
    // 0ce299  jmp 0xce382
    X86_AT(c, 0xce299u);
    goto L_ce382;
L_ce29e:
    X86_TICK(c, 19);
    // 0ce29e  push 1
    X86_AT(c, 0xce29eu);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0ce2a0  push dword ptr [0xb033e]
    X86_AT(c, 0xce2a0u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xB033Eu))); push32(c, v); }
    // 0ce2a6  push dword ptr [0xb033a]
    X86_AT(c, 0xce2a6u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xB033Au))); push32(c, v); }
    // 0ce2ac  call 0xcc538
    X86_AT(c, 0xce2acu);
    push32(c, 0xce2b1u); x86_call_known(c, 0xcc538u, f_000cc538); X86_RET(c, 0xce2b1u);
    X86_TICK(c, 6);
    // 0ce2b1  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0xce2b1u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
    // 0ce2b4  mov edi, 0xfffffffe
    X86_AT(c, 0xce2b4u);
    c.r[7] = 0xFFFFFFFEu;
    // 0ce2b9  add esp, 0xc
    X86_AT(c, 0xce2b9u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
L_ce2bc:
    X86_TICK(c, 7);
    // 0ce2bc  cmp edi, 2
    X86_AT(c, 0xce2bcu);
    (void)x86_sub(c, c.r[7], 0x2u, 0, 4);
    // 0ce2bf  jg 0xce356
    X86_AT(c, 0xce2bfu);
    if (x86_cc(c, 15)) { goto L_ce356; }
    X86_TICK(c, 2);
    // 0ce2c5  mov esi, 0xfffffffe
    X86_AT(c, 0xce2c5u);
    c.r[6] = 0xFFFFFFFEu;
L_ce2ca:
    X86_TICK(c, 7);
    // 0ce2ca  cmp esi, 2
    X86_AT(c, 0xce2cau);
    (void)x86_sub(c, c.r[6], 0x2u, 0, 4);
    // 0ce2cd  jg 0xce350
    X86_AT(c, 0xce2cdu);
    if (x86_cc(c, 15)) { goto L_ce350; }
    X86_TICK(c, 23);
    // 0ce2d3  mov eax, dword ptr [0xb033e]
    X86_AT(c, 0xce2d3u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xB033Eu)));
    // 0ce2d8  add eax, esi
    X86_AT(c, 0xce2d8u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, c.r[6], 0, 4); }
    // 0ce2da  push eax
    X86_AT(c, 0xce2dau);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ce2db  mov eax, dword ptr [0xb033a]
    X86_AT(c, 0xce2dbu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xB033Au)));
    // 0ce2e0  add eax, edi
    X86_AT(c, 0xce2e0u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, c.r[7], 0, 4); }
    // 0ce2e2  push eax
    X86_AT(c, 0xce2e2u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ce2e3  call 0xcc518
    X86_AT(c, 0xce2e3u);
    push32(c, 0xce2e8u); x86_call_known(c, 0xcc518u, f_000cc518); X86_RET(c, 0xce2e8u);
    X86_TICK(c, 9);
    // 0ce2e8  add esp, 8
    X86_AT(c, 0xce2e8u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0ce2eb  dec al
    X86_AT(c, 0xce2ebu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_dec(c, v, 1)); }
    // 0ce2ed  je 0xce34a
    X86_AT(c, 0xce2edu);
    if (x86_cc(c, 4)) { goto L_ce34a; }
    X86_TICK(c, 23);
    // 0ce2ef  mov eax, dword ptr [0xb033e]
    X86_AT(c, 0xce2efu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xB033Eu)));
    // 0ce2f4  add eax, esi
    X86_AT(c, 0xce2f4u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, c.r[6], 0, 4); }
    // 0ce2f6  push eax
    X86_AT(c, 0xce2f6u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ce2f7  mov eax, dword ptr [0xb033a]
    X86_AT(c, 0xce2f7u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xB033Au)));
    // 0ce2fc  add eax, edi
    X86_AT(c, 0xce2fcu);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, c.r[7], 0, 4); }
    // 0ce2fe  push eax
    X86_AT(c, 0xce2feu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ce2ff  call 0xcc518
    X86_AT(c, 0xce2ffu);
    push32(c, 0xce304u); x86_call_known(c, 0xcc518u, f_000cc518); X86_RET(c, 0xce304u);
    X86_TICK(c, 9);
    // 0ce304  add esp, 8
    X86_AT(c, 0xce304u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0ce307  cmp al, 0xa
    X86_AT(c, 0xce307u);
    (void)x86_sub(c, g8(c, 0), 0xAu, 0, 1);
    // 0ce309  je 0xce34a
    X86_AT(c, 0xce309u);
    if (x86_cc(c, 4)) { goto L_ce34a; }
    X86_TICK(c, 23);
    // 0ce30b  mov eax, dword ptr [0xb033e]
    X86_AT(c, 0xce30bu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xB033Eu)));
    // 0ce310  add eax, esi
    X86_AT(c, 0xce310u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, c.r[6], 0, 4); }
    // 0ce312  push eax
    X86_AT(c, 0xce312u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ce313  mov eax, dword ptr [0xb033a]
    X86_AT(c, 0xce313u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xB033Au)));
    // 0ce318  add eax, edi
    X86_AT(c, 0xce318u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, c.r[7], 0, 4); }
    // 0ce31a  push eax
    X86_AT(c, 0xce31au);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ce31b  call 0xcc518
    X86_AT(c, 0xce31bu);
    push32(c, 0xce320u); x86_call_known(c, 0xcc518u, f_000cc518); X86_RET(c, 0xce320u);
    X86_TICK(c, 9);
    // 0ce320  add esp, 8
    X86_AT(c, 0xce320u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0ce323  cmp al, 0x11
    X86_AT(c, 0xce323u);
    (void)x86_sub(c, g8(c, 0), 0x11u, 0, 1);
    // 0ce325  jbe 0xce345
    X86_AT(c, 0xce325u);
    if (x86_cc(c, 6)) { goto L_ce345; }
    X86_TICK(c, 27);
    // 0ce327  mov eax, esi
    X86_AT(c, 0xce327u);
    c.r[0] = c.r[6];
    // 0ce329  add eax, dword ptr [0xb033e]
    X86_AT(c, 0xce329u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[3] + (uint32_t)(0xB033Eu))), 0, 4); }
    // 0ce32f  push eax
    X86_AT(c, 0xce32fu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ce330  mov eax, edi
    X86_AT(c, 0xce330u);
    c.r[0] = c.r[7];
    // 0ce332  add eax, dword ptr [0xb033a]
    X86_AT(c, 0xce332u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[3] + (uint32_t)(0xB033Au))), 0, 4); }
    // 0ce338  push eax
    X86_AT(c, 0xce338u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ce339  call 0xcc518
    X86_AT(c, 0xce339u);
    push32(c, 0xce33eu); x86_call_known(c, 0xcc518u, f_000cc518); X86_RET(c, 0xce33eu);
    X86_TICK(c, 9);
    // 0ce33e  add esp, 8
    X86_AT(c, 0xce33eu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0ce341  cmp al, 0x21
    X86_AT(c, 0xce341u);
    (void)x86_sub(c, g8(c, 0), 0x21u, 0, 1);
    // 0ce343  jb 0xce34a
    X86_AT(c, 0xce343u);
    if (x86_cc(c, 2)) { goto L_ce34a; }
L_ce345:
    X86_TICK(c, 2);
    // 0ce345  mov ebx, 1
    X86_AT(c, 0xce345u);
    c.r[3] = 0x1u;
L_ce34a:
    X86_TICK(c, 9);
    // 0ce34a  inc esi
    X86_AT(c, 0xce34au);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 0ce34b  jmp 0xce2ca
    X86_AT(c, 0xce34bu);
    X86_POLL(c, 0xce2cau); goto L_ce2ca;
L_ce350:
    X86_TICK(c, 9);
    // 0ce350  inc edi
    X86_AT(c, 0xce350u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0ce351  jmp 0xce2bc
    X86_AT(c, 0xce351u);
    X86_POLL(c, 0xce2bcu); goto L_ce2bc;
L_ce356:
    X86_TICK(c, 11);
    // 0ce356  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0xce356u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0ce359  cmp eax, 5
    X86_AT(c, 0xce359u);
    (void)x86_sub(c, c.r[0], 0x5u, 0, 4);
    // 0ce35c  jl 0xce363
    X86_AT(c, 0xce35cu);
    if (x86_cc(c, 12)) { goto L_ce363; }
    X86_TICK(c, 7);
    // 0ce35e  cmp eax, 8
    X86_AT(c, 0xce35eu);
    (void)x86_sub(c, c.r[0], 0x8u, 0, 4);
    // 0ce361  jle 0xce37d
    X86_AT(c, 0xce361u);
    if (x86_cc(c, 14)) { goto L_ce37d; }
L_ce363:
    X86_TICK(c, 11);
    // 0ce363  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0xce363u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0ce366  cmp eax, 0xd
    X86_AT(c, 0xce366u);
    (void)x86_sub(c, c.r[0], 0xDu, 0, 4);
    // 0ce369  je 0xce37d
    X86_AT(c, 0xce369u);
    if (x86_cc(c, 4)) { goto L_ce37d; }
    X86_TICK(c, 7);
    // 0ce36b  cmp eax, 0xa5
    X86_AT(c, 0xce36bu);
    (void)x86_sub(c, c.r[0], 0xA5u, 0, 4);
    // 0ce370  jl 0xce379
    X86_AT(c, 0xce370u);
    if (x86_cc(c, 12)) { goto L_ce379; }
    X86_TICK(c, 7);
    // 0ce372  cmp eax, 0xab
    X86_AT(c, 0xce372u);
    (void)x86_sub(c, c.r[0], 0xABu, 0, 4);
    // 0ce377  jle 0xce37d
    X86_AT(c, 0xce377u);
    if (x86_cc(c, 14)) { goto L_ce37d; }
L_ce379:
    X86_TICK(c, 7);
    // 0ce379  and ebx, ebx
    X86_AT(c, 0xce379u);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & c.r[3], 4); }
    // 0ce37b  jne 0xce396
    X86_AT(c, 0xce37bu);
    if (x86_cc(c, 5)) { goto L_ce396; }
L_ce37d:
    X86_TICK(c, 2);
    // 0ce37d  push 0x31a4
    X86_AT(c, 0xce37du);
    { uint32_t v = 0x31A4u; push32(c, v); }
L_ce382:
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
L_ce396:
    X86_TICK(c, 68);
    // 0ce396  mov eax, dword ptr [0xbefe0]
    X86_AT(c, 0xce396u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xBEFE0u)));
    // 0ce39b  cdq 
    X86_AT(c, 0xce39bu);
    c.r[2] = (c.r[0] & 0x80000000u) ? 0xFFFFFFFFu : 0u;
    // 0ce39c  sub eax, edx
    X86_AT(c, 0xce39cu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[2], 0, 4); }
    // 0ce39e  sar eax, 1
    X86_AT(c, 0xce39eu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 7, v, 0x1u, 4, w); if (w) c.r[0] = r; }
    // 0ce3a0  cdq 
    X86_AT(c, 0xce3a0u);
    c.r[2] = (c.r[0] & 0x80000000u) ? 0xFFFFFFFFu : 0u;
    // 0ce3a1  sub eax, edx
    X86_AT(c, 0xce3a1u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[2], 0, 4); }
    // 0ce3a3  sar eax, 1
    X86_AT(c, 0xce3a3u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 7, v, 0x1u, 4, w); if (w) c.r[0] = r; }
    // 0ce3a5  shl eax, 2
    X86_AT(c, 0xce3a5u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x2u, 4, w); if (w) c.r[0] = r; }
    // 0ce3a8  mov dword ptr [0xbefe0], eax
    X86_AT(c, 0xce3a8u);
    wr32((c.sbase[3] + (uint32_t)(0xBEFE0u)), c.r[0]);
    // 0ce3ad  push 0
    X86_AT(c, 0xce3adu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0ce3af  mov eax, dword ptr [0xb0332]
    X86_AT(c, 0xce3afu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xB0332u)));
    // 0ce3b4  lea eax, [eax*4 + 0x58]
    X86_AT(c, 0xce3b4u);
    c.r[0] = (uint32_t)(c.r[0] * 4 + 0x58u);
    // 0ce3bb  push eax
    X86_AT(c, 0xce3bbu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ce3bc  push 0
    X86_AT(c, 0xce3bcu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0ce3be  push dword ptr [0xb033e]
    X86_AT(c, 0xce3beu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xB033Eu))); push32(c, v); }
    // 0ce3c4  push dword ptr [0xb033a]
    X86_AT(c, 0xce3c4u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xB033Au))); push32(c, v); }
    // 0ce3ca  movzx eax, byte ptr [0xc2e1c]
    X86_AT(c, 0xce3cau);
    c.r[0] = rd8((c.sbase[3] + (uint32_t)(0xC2E1Cu)));
    // 0ce3d1  push eax
    X86_AT(c, 0xce3d1u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ce3d2  mov eax, dword ptr [0xb0332]
    X86_AT(c, 0xce3d2u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xB0332u)));
    // 0ce3d7  add eax, 0xa4
    X86_AT(c, 0xce3d7u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0xA4u, 0, 4); }
    // 0ce3dc  push eax
    X86_AT(c, 0xce3dcu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ce3dd  call 0xcf6b0
    X86_AT(c, 0xce3ddu);
    push32(c, 0xce3e2u); x86_call_known(c, 0xcf6b0u, f_000cf6b0); X86_RET(c, 0xce3e2u);
    X86_TICK(c, 29);
    // 0ce3e2  mov dword ptr [0xb0332], 0
    X86_AT(c, 0xce3e2u);
    wr32((c.sbase[3] + (uint32_t)(0xB0332u)), 0x0u);
    // 0ce3ec  mov eax, dword ptr [0xbefcc]
    X86_AT(c, 0xce3ecu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xBEFCCu)));
    // 0ce3f1  mov dword ptr [0xbefd0], eax
    X86_AT(c, 0xce3f1u);
    wr32((c.sbase[3] + (uint32_t)(0xBEFD0u)), c.r[0]);
    // 0ce3f6  mov eax, dword ptr [0x42b80]
    X86_AT(c, 0xce3f6u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x42B80u)));
    // 0ce3fb  mov dword ptr [0xbefcc], eax
    X86_AT(c, 0xce3fbu);
    wr32((c.sbase[3] + (uint32_t)(0xBEFCCu)), c.r[0]);
    // 0ce400  lea eax, [eax*2 - 0x100]
    X86_AT(c, 0xce400u);
    c.r[0] = (uint32_t)(c.r[0] * 2 + 0xFFFFFF00u);
    // 0ce407  mov dword ptr [0xbefe0], eax
    X86_AT(c, 0xce407u);
    wr32((c.sbase[3] + (uint32_t)(0xBEFE0u)), c.r[0]);
    // 0ce40c  mov dword ptr [0x4319c], eax
    X86_AT(c, 0xce40cu);
    wr32((c.sbase[3] + (uint32_t)(0x4319Cu)), c.r[0]);
    // 0ce411  push 0x3200
    X86_AT(c, 0xce411u);
    { uint32_t v = 0x3200u; push32(c, v); }
    // 0ce416  call 0xcc7bc
    X86_AT(c, 0xce416u);
    push32(c, 0xce41bu); x86_call_known(c, 0xcc7bcu, f_000cc7bc); X86_RET(c, 0xce41bu);
    X86_TICK(c, 2);
    // 0ce41b  add esp, 0x20
    X86_AT(c, 0xce41bu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x20u, 0, 4); }
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
    x86_fault(c, 0xce270u, "ran off the end of a function");
}
}

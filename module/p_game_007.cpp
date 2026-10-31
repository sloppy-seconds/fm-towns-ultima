#include "p_game_funcs.h"
namespace p_game {
void f_000eaddf(X86Cpu& c) {
    X86_TICK(c, 28);
    // 0eaddf  pop edi
    X86_AT(c, 0xeaddfu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0eade0  pop esi
    X86_AT(c, 0xeade0u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0eade1  pop ebx
    X86_AT(c, 0xeade1u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0eade2  leave 
    X86_AT(c, 0xeade2u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0eade3  ret 
    X86_AT(c, 0xeade3u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xeaddfu, "ran off the end of a function");
}
void f_000eade4(X86Cpu& c) {
    X86_TICK(c, 17);
    // 0eade4  push ebx
    X86_AT(c, 0xeade4u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0eade5  push esi
    X86_AT(c, 0xeade5u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0eade6  push edi
    X86_AT(c, 0xeade6u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0eade7  mov edx, dword ptr [0xceca0]
    X86_AT(c, 0xeade7u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0eaded  cmp edx, 3
    X86_AT(c, 0xeadedu);
    (void)x86_sub(c, c.r[2], 0x3u, 0, 4);
    // 0eadf0  ja 0xeae24
    X86_AT(c, 0xeadf0u);
    if (x86_cc(c, 7)) { goto L_eae24; }
    X86_TICK(c, 7);
    // 0eadf2  jmp dword ptr cs:[edx*4 + 0xeadfa]
    X86_AT(c, 0xeadf2u);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xEADFAu)));
      switch (t) {
      case 0xeae0au: goto L_eae0a;
      case 0xeae11u: goto L_eae11;
      case 0xeae18u: goto L_eae18;
      case 0xeae1fu: goto L_eae1f;
      default: x86_jump(c, t); return; } }
L_eae0a:
    X86_TICK(c, 9);
    // 0eae0a  mov esi, 0x259c
    X86_AT(c, 0xeae0au);
    c.r[6] = 0x259Cu;
    // 0eae0f  jmp 0xeae24
    X86_AT(c, 0xeae0fu);
    goto L_eae24;
L_eae11:
    X86_TICK(c, 9);
    // 0eae11  mov esi, 0x25ac
    X86_AT(c, 0xeae11u);
    c.r[6] = 0x25ACu;
    // 0eae16  jmp 0xeae24
    X86_AT(c, 0xeae16u);
    goto L_eae24;
L_eae18:
    X86_TICK(c, 9);
    // 0eae18  mov esi, 0x25bc
    X86_AT(c, 0xeae18u);
    c.r[6] = 0x25BCu;
    // 0eae1d  jmp 0xeae24
    X86_AT(c, 0xeae1du);
    goto L_eae24;
L_eae1f:
    X86_TICK(c, 2);
    // 0eae1f  mov esi, 0x25cc
    X86_AT(c, 0xeae1fu);
    c.r[6] = 0x25CCu;
L_eae24:
    X86_TICK(c, 9);
    // 0eae24  push 0x25dc
    X86_AT(c, 0xeae24u);
    { uint32_t v = 0x25DCu; push32(c, v); }
    // 0eae29  call 0xe9c44
    X86_AT(c, 0xeae29u);
    push32(c, 0xeae2eu); f_000e9c44(c); X86_RET(c, 0xeae2eu);
    X86_TICK(c, 2);
    // 0eae2e  add esp, 4
    X86_AT(c, 0xeae2eu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
L_eae31:
    X86_TICK(c, 11);
    // 0eae31  push esi
    X86_AT(c, 0xeae31u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0eae32  push 0
    X86_AT(c, 0xeae32u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0eae34  call 0xe2554
    X86_AT(c, 0xeae34u);
    push32(c, 0xeae39u); f_000e2554(c); X86_RET(c, 0xeae39u);
    X86_TICK(c, 12);
    // 0eae39  xchg ebx, eax
    X86_AT(c, 0xeae39u);
    { uint32_t t = c.r[3]; c.r[3] = c.r[0]; c.r[0] = t; }
    // 0eae3a  add esp, 8
    X86_AT(c, 0xeae3au);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0eae3d  cmp ebx, 0xffffffff
    X86_AT(c, 0xeae3du);
    (void)x86_sub(c, c.r[3], 0xFFFFFFFFu, 0, 4);
    // 0eae40  je 0xeae4b
    X86_AT(c, 0xeae40u);
    if (x86_cc(c, 4)) { goto L_eae4b; }
    X86_TICK(c, 7);
    // 0eae42  and ebx, ebx
    X86_AT(c, 0xeae42u);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & c.r[3], 4); }
    // 0eae44  je 0xeae4b
    X86_AT(c, 0xeae44u);
    if (x86_cc(c, 4)) { goto L_eae4b; }
    X86_TICK(c, 7);
    // 0eae46  cmp ebx, 1
    X86_AT(c, 0xeae46u);
    (void)x86_sub(c, c.r[3], 0x1u, 0, 4);
    // 0eae49  jne 0xeae31
    X86_AT(c, 0xeae49u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xeae31u); goto L_eae31; }
L_eae4b:
    X86_TICK(c, 7);
    // 0eae4b  and ebx, ebx
    X86_AT(c, 0xeae4bu);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & c.r[3], 4); }
    // 0eae4d  je 0xeae56
    X86_AT(c, 0xeae4du);
    if (x86_cc(c, 4)) { goto L_eae56; }
    X86_TICK(c, 9);
    // 0eae4f  push 0x25fc
    X86_AT(c, 0xeae4fu);
    { uint32_t v = 0x25FCu; push32(c, v); }
    // 0eae54  jmp 0xeae78
    X86_AT(c, 0xeae54u);
    goto L_eae78;
L_eae56:
    X86_TICK(c, 11);
    // 0eae56  push 0x261c
    X86_AT(c, 0xeae56u);
    { uint32_t v = 0x261Cu; push32(c, v); }
    // 0eae5b  push esi
    X86_AT(c, 0xeae5bu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0eae5c  call 0x100f34
    X86_AT(c, 0xeae5cu);
    push32(c, 0xeae61u); f_00100f34(c); X86_RET(c, 0xeae61u);
    X86_TICK(c, 12);
    // 0eae61  add esp, 8
    X86_AT(c, 0xeae61u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0eae64  xchg edi, eax
    X86_AT(c, 0xeae64u);
    { uint32_t t = c.r[7]; c.r[7] = c.r[0]; c.r[0] = t; }
    // 0eae65  and edi, edi
    X86_AT(c, 0xeae65u);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & c.r[7], 4); }
    // 0eae67  jne 0xeae8a
    X86_AT(c, 0xeae67u);
    if (x86_cc(c, 5)) { goto L_eae8a; }
    X86_TICK(c, 4);
    // 0eae69  mov dword ptr [0xcf190], 0xffffffff
    X86_AT(c, 0xeae69u);
    wr32((c.sbase[3] + (uint32_t)(0xCF190u)), 0xFFFFFFFFu);
    // 0eae73  push 0x2620
    X86_AT(c, 0xeae73u);
    { uint32_t v = 0x2620u; push32(c, v); }
L_eae78:
    X86_TICK(c, 7);
    // 0eae78  call 0xe9cb4
    X86_AT(c, 0xeae78u);
    push32(c, 0xeae7du); f_000e9cb4(c); X86_RET(c, 0xeae7du);
    X86_TICK(c, 11);
    // 0eae7d  mov eax, 0xffffffff
    X86_AT(c, 0xeae7du);
    c.r[0] = 0xFFFFFFFFu;
    // 0eae82  add esp, 4
    X86_AT(c, 0xeae82u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0eae85  jmp 0xeb0b8
    X86_AT(c, 0xeae85u);
    goto L_eb0b8;
L_eae8a:
    X86_TICK(c, 7);
    // 0eae8a  call 0xe3a20
    X86_AT(c, 0xeae8au);
    push32(c, 0xeae8fu); f_000e3a20(c); X86_RET(c, 0xeae8fu);
    X86_TICK(c, 15);
    // 0eae8f  push edi
    X86_AT(c, 0xeae8fu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0eae90  push 0x300
    X86_AT(c, 0xeae90u);
    { uint32_t v = 0x300u; push32(c, v); }
    // 0eae95  push 1
    X86_AT(c, 0xeae95u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0eae97  push 0xd902c
    X86_AT(c, 0xeae97u);
    { uint32_t v = 0xD902Cu; push32(c, v); }
    // 0eae9c  call 0x100c58
    X86_AT(c, 0xeae9cu);
    push32(c, 0xeaea1u); f_00100c58(c); X86_RET(c, 0xeaea1u);
    X86_TICK(c, 15);
    // 0eaea1  push edi
    X86_AT(c, 0xeaea1u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0eaea2  push 0x300
    X86_AT(c, 0xeaea2u);
    { uint32_t v = 0x300u; push32(c, v); }
    // 0eaea7  push 1
    X86_AT(c, 0xeaea7u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0eaea9  push 0xd932c
    X86_AT(c, 0xeaea9u);
    { uint32_t v = 0xD932Cu; push32(c, v); }
    // 0eaeae  call 0x100c58
    X86_AT(c, 0xeaeaeu);
    push32(c, 0xeaeb3u); f_00100c58(c); X86_RET(c, 0xeaeb3u);
    X86_TICK(c, 15);
    // 0eaeb3  push edi
    X86_AT(c, 0xeaeb3u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0eaeb4  push 0x300
    X86_AT(c, 0xeaeb4u);
    { uint32_t v = 0x300u; push32(c, v); }
    // 0eaeb9  push 1
    X86_AT(c, 0xeaeb9u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0eaebb  push 0xd962c
    X86_AT(c, 0xeaebbu);
    { uint32_t v = 0xD962Cu; push32(c, v); }
    // 0eaec0  call 0x100c58
    X86_AT(c, 0xeaec0u);
    push32(c, 0xeaec5u); f_00100c58(c); X86_RET(c, 0xeaec5u);
    X86_TICK(c, 15);
    // 0eaec5  push edi
    X86_AT(c, 0xeaec5u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0eaec6  push 0x300
    X86_AT(c, 0xeaec6u);
    { uint32_t v = 0x300u; push32(c, v); }
    // 0eaecb  push 1
    X86_AT(c, 0xeaecbu);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0eaecd  push 0xd992c
    X86_AT(c, 0xeaecdu);
    { uint32_t v = 0xD992Cu; push32(c, v); }
    // 0eaed2  call 0x100c58
    X86_AT(c, 0xeaed2u);
    push32(c, 0xeaed7u); f_00100c58(c); X86_RET(c, 0xeaed7u);
    X86_TICK(c, 17);
    // 0eaed7  add esp, 0x40
    X86_AT(c, 0xeaed7u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x40u, 0, 4); }
    // 0eaeda  push edi
    X86_AT(c, 0xeaedau);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0eaedb  push 0x300
    X86_AT(c, 0xeaedbu);
    { uint32_t v = 0x300u; push32(c, v); }
    // 0eaee0  push 1
    X86_AT(c, 0xeaee0u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0eaee2  push 0xd9c2c
    X86_AT(c, 0xeaee2u);
    { uint32_t v = 0xD9C2Cu; push32(c, v); }
    // 0eaee7  call 0x100c58
    X86_AT(c, 0xeaee7u);
    push32(c, 0xeaeecu); f_00100c58(c); X86_RET(c, 0xeaeecu);
    X86_TICK(c, 15);
    // 0eaeec  push edi
    X86_AT(c, 0xeaeecu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0eaeed  push 0x300
    X86_AT(c, 0xeaeedu);
    { uint32_t v = 0x300u; push32(c, v); }
    // 0eaef2  push 1
    X86_AT(c, 0xeaef2u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0eaef4  push 0xd9f2c
    X86_AT(c, 0xeaef4u);
    { uint32_t v = 0xD9F2Cu; push32(c, v); }
    // 0eaef9  call 0x100c58
    X86_AT(c, 0xeaef9u);
    push32(c, 0xeaefeu); f_00100c58(c); X86_RET(c, 0xeaefeu);
    X86_TICK(c, 15);
    // 0eaefe  push edi
    X86_AT(c, 0xeaefeu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0eaeff  push 0x300
    X86_AT(c, 0xeaeffu);
    { uint32_t v = 0x300u; push32(c, v); }
    // 0eaf04  push 1
    X86_AT(c, 0xeaf04u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0eaf06  push 0xda22c
    X86_AT(c, 0xeaf06u);
    { uint32_t v = 0xDA22Cu; push32(c, v); }
    // 0eaf0b  call 0x100c58
    X86_AT(c, 0xeaf0bu);
    push32(c, 0xeaf10u); f_00100c58(c); X86_RET(c, 0xeaf10u);
    X86_TICK(c, 15);
    // 0eaf10  push edi
    X86_AT(c, 0xeaf10u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0eaf11  push 0x300
    X86_AT(c, 0xeaf11u);
    { uint32_t v = 0x300u; push32(c, v); }
    // 0eaf16  push 1
    X86_AT(c, 0xeaf16u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0eaf18  push 0xda52c
    X86_AT(c, 0xeaf18u);
    { uint32_t v = 0xDA52Cu; push32(c, v); }
    // 0eaf1d  call 0x100c58
    X86_AT(c, 0xeaf1du);
    push32(c, 0xeaf22u); f_00100c58(c); X86_RET(c, 0xeaf22u);
    X86_TICK(c, 17);
    // 0eaf22  add esp, 0x40
    X86_AT(c, 0xeaf22u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x40u, 0, 4); }
    // 0eaf25  push edi
    X86_AT(c, 0xeaf25u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0eaf26  push 0x300
    X86_AT(c, 0xeaf26u);
    { uint32_t v = 0x300u; push32(c, v); }
    // 0eaf2b  push 1
    X86_AT(c, 0xeaf2bu);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0eaf2d  push 0xda82c
    X86_AT(c, 0xeaf2du);
    { uint32_t v = 0xDA82Cu; push32(c, v); }
    // 0eaf32  call 0x100c58
    X86_AT(c, 0xeaf32u);
    push32(c, 0xeaf37u); f_00100c58(c); X86_RET(c, 0xeaf37u);
    X86_TICK(c, 15);
    // 0eaf37  push edi
    X86_AT(c, 0xeaf37u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0eaf38  push 0x300
    X86_AT(c, 0xeaf38u);
    { uint32_t v = 0x300u; push32(c, v); }
    // 0eaf3d  push 1
    X86_AT(c, 0xeaf3du);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0eaf3f  push 0xdab2c
    X86_AT(c, 0xeaf3fu);
    { uint32_t v = 0xDAB2Cu; push32(c, v); }
    // 0eaf44  call 0x100c58
    X86_AT(c, 0xeaf44u);
    push32(c, 0xeaf49u); f_00100c58(c); X86_RET(c, 0xeaf49u);
    X86_TICK(c, 15);
    // 0eaf49  push edi
    X86_AT(c, 0xeaf49u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0eaf4a  push 0x300
    X86_AT(c, 0xeaf4au);
    { uint32_t v = 0x300u; push32(c, v); }
    // 0eaf4f  push 1
    X86_AT(c, 0xeaf4fu);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0eaf51  push 0xdae2c
    X86_AT(c, 0xeaf51u);
    { uint32_t v = 0xDAE2Cu; push32(c, v); }
    // 0eaf56  call 0x100c58
    X86_AT(c, 0xeaf56u);
    push32(c, 0xeaf5bu); f_00100c58(c); X86_RET(c, 0xeaf5bu);
    X86_TICK(c, 17);
    // 0eaf5b  add esp, 0x30
    X86_AT(c, 0xeaf5bu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x30u, 0, 4); }
    // 0eaf5e  push edi
    X86_AT(c, 0xeaf5eu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0eaf5f  push 0x300
    X86_AT(c, 0xeaf5fu);
    { uint32_t v = 0x300u; push32(c, v); }
    // 0eaf64  push 1
    X86_AT(c, 0xeaf64u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0eaf66  push 0xdb12c
    X86_AT(c, 0xeaf66u);
    { uint32_t v = 0xDB12Cu; push32(c, v); }
    // 0eaf6b  call 0x100c58
    X86_AT(c, 0xeaf6bu);
    push32(c, 0xeaf70u); f_00100c58(c); X86_RET(c, 0xeaf70u);
    X86_TICK(c, 15);
    // 0eaf70  push edi
    X86_AT(c, 0xeaf70u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0eaf71  push 0x300
    X86_AT(c, 0xeaf71u);
    { uint32_t v = 0x300u; push32(c, v); }
    // 0eaf76  push 1
    X86_AT(c, 0xeaf76u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0eaf78  push 0xdb42c
    X86_AT(c, 0xeaf78u);
    { uint32_t v = 0xDB42Cu; push32(c, v); }
    // 0eaf7d  call 0x100c58
    X86_AT(c, 0xeaf7du);
    push32(c, 0xeaf82u); f_00100c58(c); X86_RET(c, 0xeaf82u);
    X86_TICK(c, 15);
    // 0eaf82  push edi
    X86_AT(c, 0xeaf82u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0eaf83  push 0x300
    X86_AT(c, 0xeaf83u);
    { uint32_t v = 0x300u; push32(c, v); }
    // 0eaf88  push 1
    X86_AT(c, 0xeaf88u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0eaf8a  push 0xdb72c
    X86_AT(c, 0xeaf8au);
    { uint32_t v = 0xDB72Cu; push32(c, v); }
    // 0eaf8f  call 0x100c58
    X86_AT(c, 0xeaf8fu);
    push32(c, 0xeaf94u); f_00100c58(c); X86_RET(c, 0xeaf94u);
    X86_TICK(c, 15);
    // 0eaf94  push edi
    X86_AT(c, 0xeaf94u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0eaf95  push 0x1000
    X86_AT(c, 0xeaf95u);
    { uint32_t v = 0x1000u; push32(c, v); }
    // 0eaf9a  push 1
    X86_AT(c, 0xeaf9au);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0eaf9c  push 0x40e90
    X86_AT(c, 0xeaf9cu);
    { uint32_t v = 0x40E90u; push32(c, v); }
    // 0eafa1  call 0x100c58
    X86_AT(c, 0xeafa1u);
    push32(c, 0xeafa6u); f_00100c58(c); X86_RET(c, 0xeafa6u);
    X86_TICK(c, 17);
    // 0eafa6  add esp, 0x40
    X86_AT(c, 0xeafa6u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x40u, 0, 4); }
    // 0eafa9  push edi
    X86_AT(c, 0xeafa9u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0eafaa  push 0x1000
    X86_AT(c, 0xeafaau);
    { uint32_t v = 0x1000u; push32(c, v); }
    // 0eafaf  push 1
    X86_AT(c, 0xeafafu);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0eafb1  push 0x41e90
    X86_AT(c, 0xeafb1u);
    { uint32_t v = 0x41E90u; push32(c, v); }
    // 0eafb6  call 0x100c58
    X86_AT(c, 0xeafb6u);
    push32(c, 0xeafbbu); f_00100c58(c); X86_RET(c, 0xeafbbu);
    X86_TICK(c, 15);
    // 0eafbb  push edi
    X86_AT(c, 0xeafbbu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0eafbc  push 0x1000
    X86_AT(c, 0xeafbcu);
    { uint32_t v = 0x1000u; push32(c, v); }
    // 0eafc1  push 1
    X86_AT(c, 0xeafc1u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0eafc3  push 0x42e90
    X86_AT(c, 0xeafc3u);
    { uint32_t v = 0x42E90u; push32(c, v); }
    // 0eafc8  call 0x100c58
    X86_AT(c, 0xeafc8u);
    push32(c, 0xeafcdu); f_00100c58(c); X86_RET(c, 0xeafcdu);
    X86_TICK(c, 15);
    // 0eafcd  push edi
    X86_AT(c, 0xeafcdu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0eafce  push 0x1000
    X86_AT(c, 0xeafceu);
    { uint32_t v = 0x1000u; push32(c, v); }
    // 0eafd3  push 1
    X86_AT(c, 0xeafd3u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0eafd5  push 0x43e90
    X86_AT(c, 0xeafd5u);
    { uint32_t v = 0x43E90u; push32(c, v); }
    // 0eafda  call 0x100c58
    X86_AT(c, 0xeafdau);
    push32(c, 0xeafdfu); f_00100c58(c); X86_RET(c, 0xeafdfu);
    X86_TICK(c, 15);
    // 0eafdf  push edi
    X86_AT(c, 0xeafdfu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0eafe0  push 0x1000
    X86_AT(c, 0xeafe0u);
    { uint32_t v = 0x1000u; push32(c, v); }
    // 0eafe5  push 1
    X86_AT(c, 0xeafe5u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0eafe7  push 0x44e90
    X86_AT(c, 0xeafe7u);
    { uint32_t v = 0x44E90u; push32(c, v); }
    // 0eafec  call 0x100c58
    X86_AT(c, 0xeafecu);
    push32(c, 0xeaff1u); f_00100c58(c); X86_RET(c, 0xeaff1u);
    X86_TICK(c, 17);
    // 0eaff1  add esp, 0x40
    X86_AT(c, 0xeaff1u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x40u, 0, 4); }
    // 0eaff4  push edi
    X86_AT(c, 0xeaff4u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0eaff5  push 0x1000
    X86_AT(c, 0xeaff5u);
    { uint32_t v = 0x1000u; push32(c, v); }
    // 0eaffa  push 1
    X86_AT(c, 0xeaffau);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0eaffc  push 0x45e90
    X86_AT(c, 0xeaffcu);
    { uint32_t v = 0x45E90u; push32(c, v); }
    // 0eb001  call 0x100c58
    X86_AT(c, 0xeb001u);
    push32(c, 0xeb006u); f_00100c58(c); X86_RET(c, 0xeb006u);
    X86_TICK(c, 15);
    // 0eb006  push edi
    X86_AT(c, 0xeb006u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0eb007  push 0x1000
    X86_AT(c, 0xeb007u);
    { uint32_t v = 0x1000u; push32(c, v); }
    // 0eb00c  push 1
    X86_AT(c, 0xeb00cu);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0eb00e  push 0x46e90
    X86_AT(c, 0xeb00eu);
    { uint32_t v = 0x46E90u; push32(c, v); }
    // 0eb013  call 0x100c58
    X86_AT(c, 0xeb013u);
    push32(c, 0xeb018u); f_00100c58(c); X86_RET(c, 0xeb018u);
    X86_TICK(c, 15);
    // 0eb018  push edi
    X86_AT(c, 0xeb018u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0eb019  push 0x1000
    X86_AT(c, 0xeb019u);
    { uint32_t v = 0x1000u; push32(c, v); }
    // 0eb01e  push 1
    X86_AT(c, 0xeb01eu);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0eb020  push 0x47e90
    X86_AT(c, 0xeb020u);
    { uint32_t v = 0x47E90u; push32(c, v); }
    // 0eb025  call 0x100c58
    X86_AT(c, 0xeb025u);
    push32(c, 0xeb02au); f_00100c58(c); X86_RET(c, 0xeb02au);
    X86_TICK(c, 15);
    // 0eb02a  push edi
    X86_AT(c, 0xeb02au);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0eb02b  push 0x1000
    X86_AT(c, 0xeb02bu);
    { uint32_t v = 0x1000u; push32(c, v); }
    // 0eb030  push 1
    X86_AT(c, 0xeb030u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0eb032  push 0x48e90
    X86_AT(c, 0xeb032u);
    { uint32_t v = 0x48E90u; push32(c, v); }
    // 0eb037  call 0x100c58
    X86_AT(c, 0xeb037u);
    push32(c, 0xeb03cu); f_00100c58(c); X86_RET(c, 0xeb03cu);
    X86_TICK(c, 17);
    // 0eb03c  add esp, 0x40
    X86_AT(c, 0xeb03cu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x40u, 0, 4); }
    // 0eb03f  push edi
    X86_AT(c, 0xeb03fu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0eb040  push 0x1000
    X86_AT(c, 0xeb040u);
    { uint32_t v = 0x1000u; push32(c, v); }
    // 0eb045  push 1
    X86_AT(c, 0xeb045u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0eb047  push 0x49e90
    X86_AT(c, 0xeb047u);
    { uint32_t v = 0x49E90u; push32(c, v); }
    // 0eb04c  call 0x100c58
    X86_AT(c, 0xeb04cu);
    push32(c, 0xeb051u); f_00100c58(c); X86_RET(c, 0xeb051u);
    X86_TICK(c, 15);
    // 0eb051  push edi
    X86_AT(c, 0xeb051u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0eb052  push 0x1000
    X86_AT(c, 0xeb052u);
    { uint32_t v = 0x1000u; push32(c, v); }
    // 0eb057  push 1
    X86_AT(c, 0xeb057u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0eb059  push 0x4ae90
    X86_AT(c, 0xeb059u);
    { uint32_t v = 0x4AE90u; push32(c, v); }
    // 0eb05e  call 0x100c58
    X86_AT(c, 0xeb05eu);
    push32(c, 0xeb063u); f_00100c58(c); X86_RET(c, 0xeb063u);
    X86_TICK(c, 15);
    // 0eb063  push edi
    X86_AT(c, 0xeb063u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0eb064  push 0x1000
    X86_AT(c, 0xeb064u);
    { uint32_t v = 0x1000u; push32(c, v); }
    // 0eb069  push 1
    X86_AT(c, 0xeb069u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0eb06b  push 0x4be90
    X86_AT(c, 0xeb06bu);
    { uint32_t v = 0x4BE90u; push32(c, v); }
    // 0eb070  call 0x100c58
    X86_AT(c, 0xeb070u);
    push32(c, 0xeb075u); f_00100c58(c); X86_RET(c, 0xeb075u);
    X86_TICK(c, 15);
    // 0eb075  push edi
    X86_AT(c, 0xeb075u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0eb076  push 0x1000
    X86_AT(c, 0xeb076u);
    { uint32_t v = 0x1000u; push32(c, v); }
    // 0eb07b  push 1
    X86_AT(c, 0xeb07bu);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0eb07d  push 0x4ce90
    X86_AT(c, 0xeb07du);
    { uint32_t v = 0x4CE90u; push32(c, v); }
    // 0eb082  call 0x100c58
    X86_AT(c, 0xeb082u);
    push32(c, 0xeb087u); f_00100c58(c); X86_RET(c, 0xeb087u);
    X86_TICK(c, 17);
    // 0eb087  add esp, 0x40
    X86_AT(c, 0xeb087u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x40u, 0, 4); }
    // 0eb08a  push edi
    X86_AT(c, 0xeb08au);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0eb08b  push 0x1000
    X86_AT(c, 0xeb08bu);
    { uint32_t v = 0x1000u; push32(c, v); }
    // 0eb090  push 1
    X86_AT(c, 0xeb090u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0eb092  push 0x4de90
    X86_AT(c, 0xeb092u);
    { uint32_t v = 0x4DE90u; push32(c, v); }
    // 0eb097  call 0x100c58
    X86_AT(c, 0xeb097u);
    push32(c, 0xeb09cu); f_00100c58(c); X86_RET(c, 0xeb09cu);
    X86_TICK(c, 9);
    // 0eb09c  push edi
    X86_AT(c, 0xeb09cu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0eb09d  call 0x101430
    X86_AT(c, 0xeb09du);
    push32(c, 0xeb0a2u); f_00101430(c); X86_RET(c, 0xeb0a2u);
    X86_TICK(c, 11);
    // 0eb0a2  mov dword ptr [0xcf190], 0
    X86_AT(c, 0xeb0a2u);
    wr32((c.sbase[3] + (uint32_t)(0xCF190u)), 0x0u);
    // 0eb0ac  push 2
    X86_AT(c, 0xeb0acu);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0eb0ae  call 0xe6c68
    X86_AT(c, 0xeb0aeu);
    push32(c, 0xeb0b3u); f_000e6c68(c); X86_RET(c, 0xeb0b3u);
    X86_TICK(c, 4);
    // 0eb0b3  sub eax, eax
    X86_AT(c, 0xeb0b3u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0eb0b5  add esp, 0x18
    X86_AT(c, 0xeb0b5u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x18u, 0, 4); }
L_eb0b8:
    X86_TICK(c, 22);
    // 0eb0b8  pop edi
    X86_AT(c, 0xeb0b8u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0eb0b9  pop esi
    X86_AT(c, 0xeb0b9u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0eb0ba  pop ebx
    X86_AT(c, 0xeb0bau);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0eb0bb  ret 
    X86_AT(c, 0xeb0bbu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xeade4u, "ran off the end of a function");
}
void f_000eb174(X86Cpu& c) {
    X86_TICK(c, 21);
    // 0eb174  push ebp
    X86_AT(c, 0xeb174u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0eb175  mov ebp, esp
    X86_AT(c, 0xeb175u);
    c.r[5] = c.r[4];
    // 0eb177  push eax
    X86_AT(c, 0xeb177u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0eb178  push ebx
    X86_AT(c, 0xeb178u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0eb179  push esi
    X86_AT(c, 0xeb179u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0eb17a  push edi
    X86_AT(c, 0xeb17au);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0eb17b  push 0x2650
    X86_AT(c, 0xeb17bu);
    { uint32_t v = 0x2650u; push32(c, v); }
    // 0eb180  call 0xe75f8
    X86_AT(c, 0xeb180u);
    push32(c, 0xeb185u); f_000e75f8(c); X86_RET(c, 0xeb185u);
    X86_TICK(c, 9);
    // 0eb185  push 7
    X86_AT(c, 0xeb185u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0eb187  call 0xe693c
    X86_AT(c, 0xeb187u);
    push32(c, 0xeb18cu); f_000e693c(c); X86_RET(c, 0xeb18cu);
    X86_TICK(c, 4);
    // 0eb18c  sub edi, edi
    X86_AT(c, 0xeb18cu);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
    // 0eb18e  add esp, 8
    X86_AT(c, 0xeb18eu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
L_eb191:
    X86_TICK(c, 7);
    // 0eb191  cmp edi, 6
    X86_AT(c, 0xeb191u);
    (void)x86_sub(c, c.r[7], 0x6u, 0, 4);
    // 0eb194  jge 0xeb1b3
    X86_AT(c, 0xeb194u);
    if (x86_cc(c, 13)) { goto L_eb1b3; }
    X86_TICK(c, 9);
    // 0eb196  push 0
    X86_AT(c, 0xeb196u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0eb198  call 0xe24d8
    X86_AT(c, 0xeb198u);
    push32(c, 0xeb19du); f_000e24d8(c); X86_RET(c, 0xeb19du);
    X86_TICK(c, 9);
    // 0eb19d  add esp, 4
    X86_AT(c, 0xeb19du);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0eb1a0  and eax, eax
    X86_AT(c, 0xeb1a0u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0eb1a2  jne 0xeb1b0
    X86_AT(c, 0xeb1a2u);
    if (x86_cc(c, 5)) { goto L_eb1b0; }
    X86_TICK(c, 9);
    // 0eb1a4  push 2
    X86_AT(c, 0xeb1a4u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0eb1a6  call 0xe6c68
    X86_AT(c, 0xeb1a6u);
    push32(c, 0xeb1abu); f_000e6c68(c); X86_RET(c, 0xeb1abu);
    X86_TICK(c, 9);
    // 0eb1ab  add esp, 4
    X86_AT(c, 0xeb1abu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0eb1ae  jmp 0xeb1b3
    X86_AT(c, 0xeb1aeu);
    goto L_eb1b3;
L_eb1b0:
    X86_TICK(c, 9);
    // 0eb1b0  inc edi
    X86_AT(c, 0xeb1b0u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0eb1b1  jmp 0xeb191
    X86_AT(c, 0xeb1b1u);
    X86_POLL(c, 0xeb191u); goto L_eb191;
L_eb1b3:
    X86_TICK(c, 7);
    // 0eb1b3  cmp edi, 6
    X86_AT(c, 0xeb1b3u);
    (void)x86_sub(c, c.r[7], 0x6u, 0, 4);
    // 0eb1b6  jl 0xeb1bf
    X86_AT(c, 0xeb1b6u);
    if (x86_cc(c, 12)) { goto L_eb1bf; }
    X86_TICK(c, 9);
    // 0eb1b8  push 0x2698
    X86_AT(c, 0xeb1b8u);
    { uint32_t v = 0x2698u; push32(c, v); }
    // 0eb1bd  jmp 0xeb1db
    X86_AT(c, 0xeb1bdu);
    goto L_eb1db;
L_eb1bf:
    X86_TICK(c, 11);
    // 0eb1bf  push 0x26e0
    X86_AT(c, 0xeb1bfu);
    { uint32_t v = 0x26E0u; push32(c, v); }
    // 0eb1c4  push 0x26e4
    X86_AT(c, 0xeb1c4u);
    { uint32_t v = 0x26E4u; push32(c, v); }
    // 0eb1c9  call 0x100f34
    X86_AT(c, 0xeb1c9u);
    push32(c, 0xeb1ceu); f_00100f34(c); X86_RET(c, 0xeb1ceu);
    X86_TICK(c, 12);
    // 0eb1ce  add esp, 8
    X86_AT(c, 0xeb1ceu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0eb1d1  xchg esi, eax
    X86_AT(c, 0xeb1d1u);
    { uint32_t t = c.r[6]; c.r[6] = c.r[0]; c.r[0] = t; }
    // 0eb1d2  and esi, esi
    X86_AT(c, 0xeb1d2u);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & c.r[6], 4); }
    // 0eb1d4  jne 0xeb1f6
    X86_AT(c, 0xeb1d4u);
    if (x86_cc(c, 5)) { goto L_eb1f6; }
    X86_TICK(c, 2);
    // 0eb1d6  push 0x26f4
    X86_AT(c, 0xeb1d6u);
    { uint32_t v = 0x26F4u; push32(c, v); }
L_eb1db:
    X86_TICK(c, 7);
    // 0eb1db  call 0xe75f8
    X86_AT(c, 0xeb1dbu);
    push32(c, 0xeb1e0u); f_000e75f8(c); X86_RET(c, 0xeb1e0u);
    X86_TICK(c, 9);
    // 0eb1e0  push 0x14
    X86_AT(c, 0xeb1e0u);
    { uint32_t v = 0x14u; push32(c, v); }
    // 0eb1e2  call 0xe9740
    X86_AT(c, 0xeb1e2u);
    push32(c, 0xeb1e7u); f_000e9740(c); X86_RET(c, 0xeb1e7u);
    X86_TICK(c, 9);
    // 0eb1e7  push 2
    X86_AT(c, 0xeb1e7u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0eb1e9  call 0xe6c68
    X86_AT(c, 0xeb1e9u);
    push32(c, 0xeb1eeu); f_000e6c68(c); X86_RET(c, 0xeb1eeu);
    X86_TICK(c, 9);
    // 0eb1ee  add esp, 0xc
    X86_AT(c, 0xeb1eeu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0eb1f1  jmp 0xeb98b
    X86_AT(c, 0xeb1f1u);
    goto L_eb98b;
L_eb1f6:
    X86_TICK(c, 11);
    // 0eb1f6  push 0x2748
    X86_AT(c, 0xeb1f6u);
    { uint32_t v = 0x2748u; push32(c, v); }
    // 0eb1fb  push esi
    X86_AT(c, 0xeb1fbu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0eb1fc  call 0x101748
    X86_AT(c, 0xeb1fcu);
    push32(c, 0xeb201u); f_00101748(c); X86_RET(c, 0xeb201u);
    X86_TICK(c, 12);
    // 0eb201  cmp dword ptr [0x7a6b4], 0
    X86_AT(c, 0xeb201u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0x7A6B4u))), 0x0u, 0, 4);
    // 0eb208  je 0xeb211
    X86_AT(c, 0xeb208u);
    if (x86_cc(c, 4)) { goto L_eb211; }
    X86_TICK(c, 9);
    // 0eb20a  mov eax, 1
    X86_AT(c, 0xeb20au);
    c.r[0] = 0x1u;
    // 0eb20f  jmp 0xeb213
    X86_AT(c, 0xeb20fu);
    goto L_eb213;
L_eb211:
    X86_TICK(c, 2);
    // 0eb211  sub eax, eax
    X86_AT(c, 0xeb211u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
L_eb213:
    X86_TICK(c, 13);
    // 0eb213  push eax
    X86_AT(c, 0xeb213u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0eb214  push 0x276c
    X86_AT(c, 0xeb214u);
    { uint32_t v = 0x276Cu; push32(c, v); }
    // 0eb219  push esi
    X86_AT(c, 0xeb219u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0eb21a  call 0x101748
    X86_AT(c, 0xeb21au);
    push32(c, 0xeb21fu); f_00101748(c); X86_RET(c, 0xeb21fu);
    X86_TICK(c, 4);
    // 0eb21f  sub edi, edi
    X86_AT(c, 0xeb21fu);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
    // 0eb221  add esp, 0x14
    X86_AT(c, 0xeb221u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x14u, 0, 4); }
L_eb224:
    X86_TICK(c, 7);
    // 0eb224  cmp edi, 4
    X86_AT(c, 0xeb224u);
    (void)x86_sub(c, c.r[7], 0x4u, 0, 4);
    // 0eb227  jge 0xeb97b
    X86_AT(c, 0xeb227u);
    if (x86_cc(c, 13)) { goto L_eb97b; }
    X86_TICK(c, 23);
    // 0eb22d  mov eax, edi
    X86_AT(c, 0xeb22du);
    c.r[0] = c.r[7];
    // 0eb22f  lea edx, [eax + eax*4]
    X86_AT(c, 0xeb22fu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0eb232  lea edx, [eax + edx*2]
    X86_AT(c, 0xeb232u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0eb235  shl edx, 5
    X86_AT(c, 0xeb235u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0eb238  sub edx, eax
    X86_AT(c, 0xeb238u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0eb23a  cmp byte ptr [edx + 0xcde4d], 0
    X86_AT(c, 0xeb23au);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE4Du))), 0x0u, 0, 1);
    // 0eb241  jne 0xeb258
    X86_AT(c, 0xeb241u);
    if (x86_cc(c, 5)) { goto L_eb258; }
    X86_TICK(c, 17);
    // 0eb243  push 0
    X86_AT(c, 0xeb243u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0eb245  push 0
    X86_AT(c, 0xeb245u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0eb247  push edi
    X86_AT(c, 0xeb247u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0eb248  push 0x2778
    X86_AT(c, 0xeb248u);
    { uint32_t v = 0x2778u; push32(c, v); }
    // 0eb24d  push esi
    X86_AT(c, 0xeb24du);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0eb24e  call 0x101748
    X86_AT(c, 0xeb24eu);
    push32(c, 0xeb253u); f_00101748(c); X86_RET(c, 0xeb253u);
    X86_TICK(c, 9);
    // 0eb253  add esp, 0x14
    X86_AT(c, 0xeb253u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x14u, 0, 4); }
    // 0eb256  jmp 0xeb27b
    X86_AT(c, 0xeb256u);
    goto L_eb27b;
L_eb258:
    X86_TICK(c, 28);
    // 0eb258  mov eax, edi
    X86_AT(c, 0xeb258u);
    c.r[0] = c.r[7];
    // 0eb25a  lea edx, [eax + eax*4]
    X86_AT(c, 0xeb25au);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0eb25d  lea edx, [eax + edx*2]
    X86_AT(c, 0xeb25du);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0eb260  shl edx, 5
    X86_AT(c, 0xeb260u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0eb263  sub edx, eax
    X86_AT(c, 0xeb263u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0eb265  add edx, 0xcde4d
    X86_AT(c, 0xeb265u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, 0xCDE4Du, 0, 4); }
    // 0eb26b  push edx
    X86_AT(c, 0xeb26bu);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0eb26c  push edi
    X86_AT(c, 0xeb26cu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0eb26d  push 0x2788
    X86_AT(c, 0xeb26du);
    { uint32_t v = 0x2788u; push32(c, v); }
    // 0eb272  push esi
    X86_AT(c, 0xeb272u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0eb273  call 0x101748
    X86_AT(c, 0xeb273u);
    push32(c, 0xeb278u); f_00101748(c); X86_RET(c, 0xeb278u);
    X86_TICK(c, 2);
    // 0eb278  add esp, 0x10
    X86_AT(c, 0xeb278u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
L_eb27b:
    X86_TICK(c, 30);
    // 0eb27b  mov eax, edi
    X86_AT(c, 0xeb27bu);
    c.r[0] = c.r[7];
    // 0eb27d  lea edx, [eax + eax*4]
    X86_AT(c, 0xeb27du);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0eb280  lea edx, [eax + edx*2]
    X86_AT(c, 0xeb280u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0eb283  shl edx, 5
    X86_AT(c, 0xeb283u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0eb286  sub edx, eax
    X86_AT(c, 0xeb286u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0eb288  movzx eax, byte ptr [edx + 0xcde4c]
    X86_AT(c, 0xeb288u);
    c.r[0] = rd8((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE4Cu)));
    // 0eb28f  push eax
    X86_AT(c, 0xeb28fu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0eb290  push 0x2798
    X86_AT(c, 0xeb290u);
    { uint32_t v = 0x2798u; push32(c, v); }
    // 0eb295  push esi
    X86_AT(c, 0xeb295u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0eb296  call 0x101748
    X86_AT(c, 0xeb296u);
    push32(c, 0xeb29bu); f_00101748(c); X86_RET(c, 0xeb29bu);
    X86_TICK(c, 23);
    // 0eb29b  mov eax, edi
    X86_AT(c, 0xeb29bu);
    c.r[0] = c.r[7];
    // 0eb29d  lea edx, [eax + eax*4]
    X86_AT(c, 0xeb29du);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0eb2a0  lea edx, [eax + edx*2]
    X86_AT(c, 0xeb2a0u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0eb2a3  shl edx, 5
    X86_AT(c, 0xeb2a3u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0eb2a6  sub edx, eax
    X86_AT(c, 0xeb2a6u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0eb2a8  cmp dword ptr [edx + 0xcdf83], 0
    X86_AT(c, 0xeb2a8u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF83u))), 0x0u, 0, 4);
    // 0eb2af  je 0xeb2b8
    X86_AT(c, 0xeb2afu);
    if (x86_cc(c, 4)) { goto L_eb2b8; }
    X86_TICK(c, 9);
    // 0eb2b1  mov eax, 0x4a
    X86_AT(c, 0xeb2b1u);
    c.r[0] = 0x4Au;
    // 0eb2b6  jmp 0xeb2bd
    X86_AT(c, 0xeb2b6u);
    goto L_eb2bd;
L_eb2b8:
    X86_TICK(c, 2);
    // 0eb2b8  mov eax, 0x45
    X86_AT(c, 0xeb2b8u);
    c.r[0] = 0x45u;
L_eb2bd:
    X86_TICK(c, 13);
    // 0eb2bd  push eax
    X86_AT(c, 0xeb2bdu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0eb2be  push 0x27a4
    X86_AT(c, 0xeb2beu);
    { uint32_t v = 0x27A4u; push32(c, v); }
    // 0eb2c3  push esi
    X86_AT(c, 0xeb2c3u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0eb2c4  call 0x101748
    X86_AT(c, 0xeb2c4u);
    push32(c, 0xeb2c9u); f_00101748(c); X86_RET(c, 0xeb2c9u);
    X86_TICK(c, 33);
    // 0eb2c9  mov eax, 0xcde44
    X86_AT(c, 0xeb2c9u);
    c.r[0] = 0xCDE44u;
    // 0eb2ce  mov edx, edi
    X86_AT(c, 0xeb2ceu);
    c.r[2] = c.r[7];
    // 0eb2d0  lea ecx, [edx + edx*4]
    X86_AT(c, 0xeb2d0u);
    c.r[1] = (uint32_t)(c.r[2] + c.r[2] * 4);
    // 0eb2d3  lea ecx, [edx + ecx*2]
    X86_AT(c, 0xeb2d3u);
    c.r[1] = (uint32_t)(c.r[2] + c.r[1] * 2);
    // 0eb2d6  shl ecx, 5
    X86_AT(c, 0xeb2d6u);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[1] = r; }
    // 0eb2d9  sub ecx, edx
    X86_AT(c, 0xeb2d9u);
    { uint32_t v = c.r[1]; c.r[1] = x86_sub(c, v, c.r[2], 0, 4); }
    // 0eb2db  push dword ptr [eax + ecx*1 + 0x12]
    X86_AT(c, 0xeb2dbu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[0] + c.r[1] + 0x12u))); push32(c, v); }
    // 0eb2df  push 0x27b0
    X86_AT(c, 0xeb2dfu);
    { uint32_t v = 0x27B0u; push32(c, v); }
    // 0eb2e4  push esi
    X86_AT(c, 0xeb2e4u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0eb2e5  mov ebx, eax
    X86_AT(c, 0xeb2e5u);
    c.r[3] = c.r[0];
    // 0eb2e7  mov dword ptr [ebp - 4], ecx
    X86_AT(c, 0xeb2e7u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[1]);
    // 0eb2ea  call 0x101748
    X86_AT(c, 0xeb2eau);
    push32(c, 0xeb2efu); f_00101748(c); X86_RET(c, 0xeb2efu);
    X86_TICK(c, 20);
    // 0eb2ef  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0xeb2efu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0eb2f2  push dword ptr [ebx + eax*1 + 0x16]
    X86_AT(c, 0xeb2f2u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] + c.r[0] + 0x16u))); push32(c, v); }
    // 0eb2f6  push 0x27bc
    X86_AT(c, 0xeb2f6u);
    { uint32_t v = 0x27BCu; push32(c, v); }
    // 0eb2fb  push esi
    X86_AT(c, 0xeb2fbu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0eb2fc  call 0x101748
    X86_AT(c, 0xeb2fcu);
    push32(c, 0xeb301u); f_00101748(c); X86_RET(c, 0xeb301u);
    X86_TICK(c, 20);
    // 0eb301  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0xeb301u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0eb304  push dword ptr [ebx + eax*1 + 0x1a]
    X86_AT(c, 0xeb304u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] + c.r[0] + 0x1Au))); push32(c, v); }
    // 0eb308  push 0x27c8
    X86_AT(c, 0xeb308u);
    { uint32_t v = 0x27C8u; push32(c, v); }
    // 0eb30d  push esi
    X86_AT(c, 0xeb30du);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0eb30e  call 0x101748
    X86_AT(c, 0xeb30eu);
    push32(c, 0xeb313u); f_00101748(c); X86_RET(c, 0xeb313u);
    X86_TICK(c, 22);
    // 0eb313  add esp, 0x3c
    X86_AT(c, 0xeb313u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x3Cu, 0, 4); }
    // 0eb316  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0xeb316u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0eb319  push dword ptr [ebx + eax*1 + 0x1e]
    X86_AT(c, 0xeb319u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] + c.r[0] + 0x1Eu))); push32(c, v); }
    // 0eb31d  push 0x27d4
    X86_AT(c, 0xeb31du);
    { uint32_t v = 0x27D4u; push32(c, v); }
    // 0eb322  push esi
    X86_AT(c, 0xeb322u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0eb323  call 0x101748
    X86_AT(c, 0xeb323u);
    push32(c, 0xeb328u); f_00101748(c); X86_RET(c, 0xeb328u);
    X86_TICK(c, 20);
    // 0eb328  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0xeb328u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0eb32b  push dword ptr [ebx + eax*1 + 0x22]
    X86_AT(c, 0xeb32bu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] + c.r[0] + 0x22u))); push32(c, v); }
    // 0eb32f  push 0x27e4
    X86_AT(c, 0xeb32fu);
    { uint32_t v = 0x27E4u; push32(c, v); }
    // 0eb334  push esi
    X86_AT(c, 0xeb334u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0eb335  call 0x101748
    X86_AT(c, 0xeb335u);
    push32(c, 0xeb33au); f_00101748(c); X86_RET(c, 0xeb33au);
    X86_TICK(c, 20);
    // 0eb33a  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0xeb33au);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0eb33d  push dword ptr [ebx + eax*1 + 0x26]
    X86_AT(c, 0xeb33du);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] + c.r[0] + 0x26u))); push32(c, v); }
    // 0eb341  push 0x27f0
    X86_AT(c, 0xeb341u);
    { uint32_t v = 0x27F0u; push32(c, v); }
    // 0eb346  push esi
    X86_AT(c, 0xeb346u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0eb347  call 0x101748
    X86_AT(c, 0xeb347u);
    push32(c, 0xeb34cu); f_00101748(c); X86_RET(c, 0xeb34cu);
    X86_TICK(c, 20);
    // 0eb34c  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0xeb34cu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0eb34f  push dword ptr [ebx + eax*1 + 0x2a]
    X86_AT(c, 0xeb34fu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] + c.r[0] + 0x2Au))); push32(c, v); }
    // 0eb353  push 0x27fc
    X86_AT(c, 0xeb353u);
    { uint32_t v = 0x27FCu; push32(c, v); }
    // 0eb358  push esi
    X86_AT(c, 0xeb358u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0eb359  call 0x101748
    X86_AT(c, 0xeb359u);
    push32(c, 0xeb35eu); f_00101748(c); X86_RET(c, 0xeb35eu);
    X86_TICK(c, 31);
    // 0eb35e  add esp, 0x30
    X86_AT(c, 0xeb35eu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x30u, 0, 4); }
    // 0eb361  mov eax, edi
    X86_AT(c, 0xeb361u);
    c.r[0] = c.r[7];
    // 0eb363  lea edx, [eax + eax*4]
    X86_AT(c, 0xeb363u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0eb366  lea edx, [eax + edx*2]
    X86_AT(c, 0xeb366u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0eb369  shl edx, 5
    X86_AT(c, 0xeb369u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0eb36c  sub edx, eax
    X86_AT(c, 0xeb36cu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0eb36e  push dword ptr [edx + 0xcde72]
    X86_AT(c, 0xeb36eu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE72u))); push32(c, v); }
    // 0eb374  push 0x280c
    X86_AT(c, 0xeb374u);
    { uint32_t v = 0x280Cu; push32(c, v); }
    // 0eb379  push esi
    X86_AT(c, 0xeb379u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0eb37a  mov ebx, edx
    X86_AT(c, 0xeb37au);
    c.r[3] = c.r[2];
    // 0eb37c  call 0x101748
    X86_AT(c, 0xeb37cu);
    push32(c, 0xeb381u); f_00101748(c); X86_RET(c, 0xeb381u);
    X86_TICK(c, 16);
    // 0eb381  push dword ptr [ebx + 0xcde76]
    X86_AT(c, 0xeb381u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0xCDE76u))); push32(c, v); }
    // 0eb387  push 0x2818
    X86_AT(c, 0xeb387u);
    { uint32_t v = 0x2818u; push32(c, v); }
    // 0eb38c  push esi
    X86_AT(c, 0xeb38cu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0eb38d  call 0x101748
    X86_AT(c, 0xeb38du);
    push32(c, 0xeb392u); f_00101748(c); X86_RET(c, 0xeb392u);
    X86_TICK(c, 19);
    // 0eb392  movzx eax, byte ptr [ebx + 0xcde7a]
    X86_AT(c, 0xeb392u);
    c.r[0] = rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xCDE7Au)));
    // 0eb399  push eax
    X86_AT(c, 0xeb399u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0eb39a  push 0x282c
    X86_AT(c, 0xeb39au);
    { uint32_t v = 0x282Cu; push32(c, v); }
    // 0eb39f  push esi
    X86_AT(c, 0xeb39fu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0eb3a0  call 0x101748
    X86_AT(c, 0xeb3a0u);
    push32(c, 0xeb3a5u); f_00101748(c); X86_RET(c, 0xeb3a5u);
    X86_TICK(c, 19);
    // 0eb3a5  movzx eax, byte ptr [ebx + 0xcde7b]
    X86_AT(c, 0xeb3a5u);
    c.r[0] = rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xCDE7Bu)));
    // 0eb3ac  push eax
    X86_AT(c, 0xeb3acu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0eb3ad  push 0x2838
    X86_AT(c, 0xeb3adu);
    { uint32_t v = 0x2838u; push32(c, v); }
    // 0eb3b2  push esi
    X86_AT(c, 0xeb3b2u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0eb3b3  call 0x101748
    X86_AT(c, 0xeb3b3u);
    push32(c, 0xeb3b8u); f_00101748(c); X86_RET(c, 0xeb3b8u);
    X86_TICK(c, 19);
    // 0eb3b8  movzx eax, byte ptr [ebx + 0xcde7c]
    X86_AT(c, 0xeb3b8u);
    c.r[0] = rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xCDE7Cu)));
    // 0eb3bf  push eax
    X86_AT(c, 0xeb3bfu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0eb3c0  push 0x2848
    X86_AT(c, 0xeb3c0u);
    { uint32_t v = 0x2848u; push32(c, v); }
    // 0eb3c5  push esi
    X86_AT(c, 0xeb3c5u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0eb3c6  call 0x101748
    X86_AT(c, 0xeb3c6u);
    push32(c, 0xeb3cbu); f_00101748(c); X86_RET(c, 0xeb3cbu);
    X86_TICK(c, 18);
    // 0eb3cb  add esp, 0x3c
    X86_AT(c, 0xeb3cbu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x3Cu, 0, 4); }
    // 0eb3ce  push dword ptr [ebx + 0xcde7d]
    X86_AT(c, 0xeb3ceu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0xCDE7Du))); push32(c, v); }
    // 0eb3d4  push 0x2850
    X86_AT(c, 0xeb3d4u);
    { uint32_t v = 0x2850u; push32(c, v); }
    // 0eb3d9  push esi
    X86_AT(c, 0xeb3d9u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0eb3da  call 0x101748
    X86_AT(c, 0xeb3dau);
    push32(c, 0xeb3dfu); f_00101748(c); X86_RET(c, 0xeb3dfu);
    X86_TICK(c, 16);
    // 0eb3df  push dword ptr [ebx + 0xcde81]
    X86_AT(c, 0xeb3dfu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0xCDE81u))); push32(c, v); }
    // 0eb3e5  push 0x285c
    X86_AT(c, 0xeb3e5u);
    { uint32_t v = 0x285Cu; push32(c, v); }
    // 0eb3ea  push esi
    X86_AT(c, 0xeb3eau);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0eb3eb  call 0x101748
    X86_AT(c, 0xeb3ebu);
    push32(c, 0xeb3f0u); f_00101748(c); X86_RET(c, 0xeb3f0u);
    X86_TICK(c, 16);
    // 0eb3f0  push dword ptr [ebx + 0xcde85]
    X86_AT(c, 0xeb3f0u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0xCDE85u))); push32(c, v); }
    // 0eb3f6  push 0x2864
    X86_AT(c, 0xeb3f6u);
    { uint32_t v = 0x2864u; push32(c, v); }
    // 0eb3fb  push esi
    X86_AT(c, 0xeb3fbu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0eb3fc  call 0x101748
    X86_AT(c, 0xeb3fcu);
    push32(c, 0xeb401u); f_00101748(c); X86_RET(c, 0xeb401u);
    X86_TICK(c, 16);
    // 0eb401  push dword ptr [ebx + 0xcde89]
    X86_AT(c, 0xeb401u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0xCDE89u))); push32(c, v); }
    // 0eb407  push 0x286c
    X86_AT(c, 0xeb407u);
    { uint32_t v = 0x286Cu; push32(c, v); }
    // 0eb40c  push esi
    X86_AT(c, 0xeb40cu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0eb40d  call 0x101748
    X86_AT(c, 0xeb40du);
    push32(c, 0xeb412u); f_00101748(c); X86_RET(c, 0xeb412u);
    X86_TICK(c, 16);
    // 0eb412  push dword ptr [ebx + 0xcde8d]
    X86_AT(c, 0xeb412u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0xCDE8Du))); push32(c, v); }
    // 0eb418  push 0x287c
    X86_AT(c, 0xeb418u);
    { uint32_t v = 0x287Cu; push32(c, v); }
    // 0eb41d  push esi
    X86_AT(c, 0xeb41du);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0eb41e  call 0x101748
    X86_AT(c, 0xeb41eu);
    push32(c, 0xeb423u); f_00101748(c); X86_RET(c, 0xeb423u);
    X86_TICK(c, 18);
    // 0eb423  add esp, 0x3c
    X86_AT(c, 0xeb423u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x3Cu, 0, 4); }
    // 0eb426  push dword ptr [ebx + 0xcde91]
    X86_AT(c, 0xeb426u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0xCDE91u))); push32(c, v); }
    // 0eb42c  push 0x2888
    X86_AT(c, 0xeb42cu);
    { uint32_t v = 0x2888u; push32(c, v); }
    // 0eb431  push esi
    X86_AT(c, 0xeb431u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0eb432  call 0x101748
    X86_AT(c, 0xeb432u);
    push32(c, 0xeb437u); f_00101748(c); X86_RET(c, 0xeb437u);
    X86_TICK(c, 31);
    // 0eb437  add esp, 0xc
    X86_AT(c, 0xeb437u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0eb43a  mov eax, edi
    X86_AT(c, 0xeb43au);
    c.r[0] = c.r[7];
    // 0eb43c  lea edx, [eax + eax*4]
    X86_AT(c, 0xeb43cu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0eb43f  lea edx, [eax + edx*2]
    X86_AT(c, 0xeb43fu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0eb442  shl edx, 5
    X86_AT(c, 0xeb442u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0eb445  sub edx, eax
    X86_AT(c, 0xeb445u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0eb447  push dword ptr [edx + 0xcde95]
    X86_AT(c, 0xeb447u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE95u))); push32(c, v); }
    // 0eb44d  push 0x2894
    X86_AT(c, 0xeb44du);
    { uint32_t v = 0x2894u; push32(c, v); }
    // 0eb452  push esi
    X86_AT(c, 0xeb452u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0eb453  mov ebx, edx
    X86_AT(c, 0xeb453u);
    c.r[3] = c.r[2];
    // 0eb455  call 0x101748
    X86_AT(c, 0xeb455u);
    push32(c, 0xeb45au); f_00101748(c); X86_RET(c, 0xeb45au);
    X86_TICK(c, 16);
    // 0eb45a  push dword ptr [ebx + 0xcde99]
    X86_AT(c, 0xeb45au);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0xCDE99u))); push32(c, v); }
    // 0eb460  push 0x289c
    X86_AT(c, 0xeb460u);
    { uint32_t v = 0x289Cu; push32(c, v); }
    // 0eb465  push esi
    X86_AT(c, 0xeb465u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0eb466  call 0x101748
    X86_AT(c, 0xeb466u);
    push32(c, 0xeb46bu); f_00101748(c); X86_RET(c, 0xeb46bu);
    X86_TICK(c, 16);
    // 0eb46b  push dword ptr [ebx + 0xcde9d]
    X86_AT(c, 0xeb46bu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0xCDE9Du))); push32(c, v); }
    // 0eb471  push 0x28a4
    X86_AT(c, 0xeb471u);
    { uint32_t v = 0x28A4u; push32(c, v); }
    // 0eb476  push esi
    X86_AT(c, 0xeb476u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0eb477  call 0x101748
    X86_AT(c, 0xeb477u);
    push32(c, 0xeb47cu); f_00101748(c); X86_RET(c, 0xeb47cu);
    X86_TICK(c, 19);
    // 0eb47c  movzx eax, byte ptr [ebx + 0xcdea1]
    X86_AT(c, 0xeb47cu);
    c.r[0] = rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xCDEA1u)));
    // 0eb483  push eax
    X86_AT(c, 0xeb483u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0eb484  push 0x28b0
    X86_AT(c, 0xeb484u);
    { uint32_t v = 0x28B0u; push32(c, v); }
    // 0eb489  push esi
    X86_AT(c, 0xeb489u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0eb48a  call 0x101748
    X86_AT(c, 0xeb48au);
    push32(c, 0xeb48fu); f_00101748(c); X86_RET(c, 0xeb48fu);
    X86_TICK(c, 19);
    // 0eb48f  movzx eax, byte ptr [ebx + 0xcdebe]
    X86_AT(c, 0xeb48fu);
    c.r[0] = rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xCDEBEu)));
    // 0eb496  push eax
    X86_AT(c, 0xeb496u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0eb497  push 0x28c0
    X86_AT(c, 0xeb497u);
    { uint32_t v = 0x28C0u; push32(c, v); }
    // 0eb49c  push esi
    X86_AT(c, 0xeb49cu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0eb49d  call 0x101748
    X86_AT(c, 0xeb49du);
    push32(c, 0xeb4a2u); f_00101748(c); X86_RET(c, 0xeb4a2u);
    X86_TICK(c, 18);
    // 0eb4a2  add esp, 0x3c
    X86_AT(c, 0xeb4a2u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x3Cu, 0, 4); }
    // 0eb4a5  push dword ptr [ebx + 0xcdea2]
    X86_AT(c, 0xeb4a5u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0xCDEA2u))); push32(c, v); }
    // 0eb4ab  push 0x28d0
    X86_AT(c, 0xeb4abu);
    { uint32_t v = 0x28D0u; push32(c, v); }
    // 0eb4b0  push esi
    X86_AT(c, 0xeb4b0u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0eb4b1  call 0x101748
    X86_AT(c, 0xeb4b1u);
    push32(c, 0xeb4b6u); f_00101748(c); X86_RET(c, 0xeb4b6u);
    X86_TICK(c, 16);
    // 0eb4b6  push dword ptr [ebx + 0xcdea6]
    X86_AT(c, 0xeb4b6u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0xCDEA6u))); push32(c, v); }
    // 0eb4bc  push 0x28dc
    X86_AT(c, 0xeb4bcu);
    { uint32_t v = 0x28DCu; push32(c, v); }
    // 0eb4c1  push esi
    X86_AT(c, 0xeb4c1u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0eb4c2  call 0x101748
    X86_AT(c, 0xeb4c2u);
    push32(c, 0xeb4c7u); f_00101748(c); X86_RET(c, 0xeb4c7u);
    X86_TICK(c, 16);
    // 0eb4c7  push dword ptr [ebx + 0xcdeaa]
    X86_AT(c, 0xeb4c7u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0xCDEAAu))); push32(c, v); }
    // 0eb4cd  push 0x28e8
    X86_AT(c, 0xeb4cdu);
    { uint32_t v = 0x28E8u; push32(c, v); }
    // 0eb4d2  push esi
    X86_AT(c, 0xeb4d2u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0eb4d3  call 0x101748
    X86_AT(c, 0xeb4d3u);
    push32(c, 0xeb4d8u); f_00101748(c); X86_RET(c, 0xeb4d8u);
    X86_TICK(c, 16);
    // 0eb4d8  push dword ptr [ebx + 0xcdeae]
    X86_AT(c, 0xeb4d8u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0xCDEAEu))); push32(c, v); }
    // 0eb4de  push 0x28f4
    X86_AT(c, 0xeb4deu);
    { uint32_t v = 0x28F4u; push32(c, v); }
    // 0eb4e3  push esi
    X86_AT(c, 0xeb4e3u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0eb4e4  call 0x101748
    X86_AT(c, 0xeb4e4u);
    push32(c, 0xeb4e9u); f_00101748(c); X86_RET(c, 0xeb4e9u);
    X86_TICK(c, 16);
    // 0eb4e9  push dword ptr [ebx + 0xcdeb2]
    X86_AT(c, 0xeb4e9u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0xCDEB2u))); push32(c, v); }
    // 0eb4ef  push 0x2900
    X86_AT(c, 0xeb4efu);
    { uint32_t v = 0x2900u; push32(c, v); }
    // 0eb4f4  push esi
    X86_AT(c, 0xeb4f4u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0eb4f5  call 0x101748
    X86_AT(c, 0xeb4f5u);
    push32(c, 0xeb4fau); f_00101748(c); X86_RET(c, 0xeb4fau);
    X86_TICK(c, 18);
    // 0eb4fa  add esp, 0x3c
    X86_AT(c, 0xeb4fau);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x3Cu, 0, 4); }
    // 0eb4fd  push dword ptr [ebx + 0xcdeb6]
    X86_AT(c, 0xeb4fdu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0xCDEB6u))); push32(c, v); }
    // 0eb503  push 0x290c
    X86_AT(c, 0xeb503u);
    { uint32_t v = 0x290Cu; push32(c, v); }
    // 0eb508  push esi
    X86_AT(c, 0xeb508u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0eb509  call 0x101748
    X86_AT(c, 0xeb509u);
    push32(c, 0xeb50eu); f_00101748(c); X86_RET(c, 0xeb50eu);
    X86_TICK(c, 31);
    // 0eb50e  add esp, 0xc
    X86_AT(c, 0xeb50eu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0eb511  mov eax, edi
    X86_AT(c, 0xeb511u);
    c.r[0] = c.r[7];
    // 0eb513  lea edx, [eax + eax*4]
    X86_AT(c, 0xeb513u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0eb516  lea edx, [eax + edx*2]
    X86_AT(c, 0xeb516u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0eb519  shl edx, 5
    X86_AT(c, 0xeb519u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0eb51c  sub edx, eax
    X86_AT(c, 0xeb51cu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0eb51e  push dword ptr [edx + 0xcdeba]
    X86_AT(c, 0xeb51eu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDEBAu))); push32(c, v); }
    // 0eb524  push 0x2918
    X86_AT(c, 0xeb524u);
    { uint32_t v = 0x2918u; push32(c, v); }
    // 0eb529  push esi
    X86_AT(c, 0xeb529u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0eb52a  mov ebx, edx
    X86_AT(c, 0xeb52au);
    c.r[3] = c.r[2];
    // 0eb52c  call 0x101748
    X86_AT(c, 0xeb52cu);
    push32(c, 0xeb531u); f_00101748(c); X86_RET(c, 0xeb531u);
    X86_TICK(c, 16);
    // 0eb531  push dword ptr [ebx + 0xcdebf]
    X86_AT(c, 0xeb531u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0xCDEBFu))); push32(c, v); }
    // 0eb537  push 0x2924
    X86_AT(c, 0xeb537u);
    { uint32_t v = 0x2924u; push32(c, v); }
    // 0eb53c  push esi
    X86_AT(c, 0xeb53cu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0eb53d  call 0x101748
    X86_AT(c, 0xeb53du);
    push32(c, 0xeb542u); f_00101748(c); X86_RET(c, 0xeb542u);
    X86_TICK(c, 16);
    // 0eb542  push dword ptr [ebx + 0xcdec3]
    X86_AT(c, 0xeb542u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0xCDEC3u))); push32(c, v); }
    // 0eb548  push 0x2930
    X86_AT(c, 0xeb548u);
    { uint32_t v = 0x2930u; push32(c, v); }
    // 0eb54d  push esi
    X86_AT(c, 0xeb54du);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0eb54e  call 0x101748
    X86_AT(c, 0xeb54eu);
    push32(c, 0xeb553u); f_00101748(c); X86_RET(c, 0xeb553u);
    X86_TICK(c, 16);
    // 0eb553  push dword ptr [ebx + 0xcdec7]
    X86_AT(c, 0xeb553u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0xCDEC7u))); push32(c, v); }
    // 0eb559  push 0x293c
    X86_AT(c, 0xeb559u);
    { uint32_t v = 0x293Cu; push32(c, v); }
    // 0eb55e  push esi
    X86_AT(c, 0xeb55eu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0eb55f  call 0x101748
    X86_AT(c, 0xeb55fu);
    push32(c, 0xeb564u); f_00101748(c); X86_RET(c, 0xeb564u);
    X86_TICK(c, 16);
    // 0eb564  push dword ptr [ebx + 0xcdecb]
    X86_AT(c, 0xeb564u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0xCDECBu))); push32(c, v); }
    // 0eb56a  push 0x2948
    X86_AT(c, 0xeb56au);
    { uint32_t v = 0x2948u; push32(c, v); }
    // 0eb56f  push esi
    X86_AT(c, 0xeb56fu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0eb570  call 0x101748
    X86_AT(c, 0xeb570u);
    push32(c, 0xeb575u); f_00101748(c); X86_RET(c, 0xeb575u);
    X86_TICK(c, 18);
    // 0eb575  add esp, 0x3c
    X86_AT(c, 0xeb575u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x3Cu, 0, 4); }
    // 0eb578  push dword ptr [ebx + 0xcdecf]
    X86_AT(c, 0xeb578u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0xCDECFu))); push32(c, v); }
    // 0eb57e  push 0x2950
    X86_AT(c, 0xeb57eu);
    { uint32_t v = 0x2950u; push32(c, v); }
    // 0eb583  push esi
    X86_AT(c, 0xeb583u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0eb584  call 0x101748
    X86_AT(c, 0xeb584u);
    push32(c, 0xeb589u); f_00101748(c); X86_RET(c, 0xeb589u);
    X86_TICK(c, 16);
    // 0eb589  push dword ptr [ebx + 0xcded3]
    X86_AT(c, 0xeb589u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0xCDED3u))); push32(c, v); }
    // 0eb58f  push 0x2958
    X86_AT(c, 0xeb58fu);
    { uint32_t v = 0x2958u; push32(c, v); }
    // 0eb594  push esi
    X86_AT(c, 0xeb594u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0eb595  call 0x101748
    X86_AT(c, 0xeb595u);
    push32(c, 0xeb59au); f_00101748(c); X86_RET(c, 0xeb59au);
    X86_TICK(c, 16);
    // 0eb59a  push dword ptr [ebx + 0xcded7]
    X86_AT(c, 0xeb59au);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0xCDED7u))); push32(c, v); }
    // 0eb5a0  push 0x2964
    X86_AT(c, 0xeb5a0u);
    { uint32_t v = 0x2964u; push32(c, v); }
    // 0eb5a5  push esi
    X86_AT(c, 0xeb5a5u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0eb5a6  call 0x101748
    X86_AT(c, 0xeb5a6u);
    push32(c, 0xeb5abu); f_00101748(c); X86_RET(c, 0xeb5abu);
    X86_TICK(c, 16);
    // 0eb5ab  push dword ptr [ebx + 0xcdedb]
    X86_AT(c, 0xeb5abu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0xCDEDBu))); push32(c, v); }
    // 0eb5b1  push 0x2974
    X86_AT(c, 0xeb5b1u);
    { uint32_t v = 0x2974u; push32(c, v); }
    // 0eb5b6  push esi
    X86_AT(c, 0xeb5b6u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0eb5b7  call 0x101748
    X86_AT(c, 0xeb5b7u);
    push32(c, 0xeb5bcu); f_00101748(c); X86_RET(c, 0xeb5bcu);
    X86_TICK(c, 16);
    // 0eb5bc  push dword ptr [ebx + 0xcdedf]
    X86_AT(c, 0xeb5bcu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0xCDEDFu))); push32(c, v); }
    // 0eb5c2  push 0x2984
    X86_AT(c, 0xeb5c2u);
    { uint32_t v = 0x2984u; push32(c, v); }
    // 0eb5c7  push esi
    X86_AT(c, 0xeb5c7u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0eb5c8  call 0x101748
    X86_AT(c, 0xeb5c8u);
    push32(c, 0xeb5cdu); f_00101748(c); X86_RET(c, 0xeb5cdu);
    X86_TICK(c, 18);
    // 0eb5cd  add esp, 0x3c
    X86_AT(c, 0xeb5cdu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x3Cu, 0, 4); }
    // 0eb5d0  push dword ptr [ebx + 0xcdee3]
    X86_AT(c, 0xeb5d0u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0xCDEE3u))); push32(c, v); }
    // 0eb5d6  push 0x2990
    X86_AT(c, 0xeb5d6u);
    { uint32_t v = 0x2990u; push32(c, v); }
    // 0eb5db  push esi
    X86_AT(c, 0xeb5dbu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0eb5dc  call 0x101748
    X86_AT(c, 0xeb5dcu);
    push32(c, 0xeb5e1u); f_00101748(c); X86_RET(c, 0xeb5e1u);
    X86_TICK(c, 31);
    // 0eb5e1  add esp, 0xc
    X86_AT(c, 0xeb5e1u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0eb5e4  mov eax, edi
    X86_AT(c, 0xeb5e4u);
    c.r[0] = c.r[7];
    // 0eb5e6  lea edx, [eax + eax*4]
    X86_AT(c, 0xeb5e6u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0eb5e9  lea edx, [eax + edx*2]
    X86_AT(c, 0xeb5e9u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0eb5ec  shl edx, 5
    X86_AT(c, 0xeb5ecu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0eb5ef  sub edx, eax
    X86_AT(c, 0xeb5efu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0eb5f1  push dword ptr [edx + 0xcdee7]
    X86_AT(c, 0xeb5f1u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDEE7u))); push32(c, v); }
    // 0eb5f7  push 0x29a0
    X86_AT(c, 0xeb5f7u);
    { uint32_t v = 0x29A0u; push32(c, v); }
    // 0eb5fc  push esi
    X86_AT(c, 0xeb5fcu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0eb5fd  mov ebx, edx
    X86_AT(c, 0xeb5fdu);
    c.r[3] = c.r[2];
    // 0eb5ff  call 0x101748
    X86_AT(c, 0xeb5ffu);
    push32(c, 0xeb604u); f_00101748(c); X86_RET(c, 0xeb604u);
    X86_TICK(c, 16);
    // 0eb604  push dword ptr [ebx + 0xcdeeb]
    X86_AT(c, 0xeb604u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0xCDEEBu))); push32(c, v); }
    // 0eb60a  push 0x29ac
    X86_AT(c, 0xeb60au);
    { uint32_t v = 0x29ACu; push32(c, v); }
    // 0eb60f  push esi
    X86_AT(c, 0xeb60fu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0eb610  call 0x101748
    X86_AT(c, 0xeb610u);
    push32(c, 0xeb615u); f_00101748(c); X86_RET(c, 0xeb615u);
    X86_TICK(c, 16);
    // 0eb615  push dword ptr [ebx + 0xcdeef]
    X86_AT(c, 0xeb615u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0xCDEEFu))); push32(c, v); }
    // 0eb61b  push 0x29b8
    X86_AT(c, 0xeb61bu);
    { uint32_t v = 0x29B8u; push32(c, v); }
    // 0eb620  push esi
    X86_AT(c, 0xeb620u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0eb621  call 0x101748
    X86_AT(c, 0xeb621u);
    push32(c, 0xeb626u); f_00101748(c); X86_RET(c, 0xeb626u);
    X86_TICK(c, 16);
    // 0eb626  push dword ptr [ebx + 0xcdef3]
    X86_AT(c, 0xeb626u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0xCDEF3u))); push32(c, v); }
    // 0eb62c  push 0x29c4
    X86_AT(c, 0xeb62cu);
    { uint32_t v = 0x29C4u; push32(c, v); }
    // 0eb631  push esi
    X86_AT(c, 0xeb631u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0eb632  call 0x101748
    X86_AT(c, 0xeb632u);
    push32(c, 0xeb637u); f_00101748(c); X86_RET(c, 0xeb637u);
    X86_TICK(c, 16);
    // 0eb637  push dword ptr [ebx + 0xcdef7]
    X86_AT(c, 0xeb637u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0xCDEF7u))); push32(c, v); }
    // 0eb63d  push 0x29d0
    X86_AT(c, 0xeb63du);
    { uint32_t v = 0x29D0u; push32(c, v); }
    // 0eb642  push esi
    X86_AT(c, 0xeb642u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0eb643  call 0x101748
    X86_AT(c, 0xeb643u);
    push32(c, 0xeb648u); f_00101748(c); X86_RET(c, 0xeb648u);
    X86_TICK(c, 18);
    // 0eb648  add esp, 0x3c
    X86_AT(c, 0xeb648u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x3Cu, 0, 4); }
    // 0eb64b  push dword ptr [ebx + 0xcdefb]
    X86_AT(c, 0xeb64bu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0xCDEFBu))); push32(c, v); }
    // 0eb651  push 0x29dc
    X86_AT(c, 0xeb651u);
    { uint32_t v = 0x29DCu; push32(c, v); }
    // 0eb656  push esi
    X86_AT(c, 0xeb656u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0eb657  call 0x101748
    X86_AT(c, 0xeb657u);
    push32(c, 0xeb65cu); f_00101748(c); X86_RET(c, 0xeb65cu);
    X86_TICK(c, 16);
    // 0eb65c  push dword ptr [ebx + 0xcdeff]
    X86_AT(c, 0xeb65cu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0xCDEFFu))); push32(c, v); }
    // 0eb662  push 0x29e8
    X86_AT(c, 0xeb662u);
    { uint32_t v = 0x29E8u; push32(c, v); }
    // 0eb667  push esi
    X86_AT(c, 0xeb667u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0eb668  call 0x101748
    X86_AT(c, 0xeb668u);
    push32(c, 0xeb66du); f_00101748(c); X86_RET(c, 0xeb66du);
    X86_TICK(c, 16);
    // 0eb66d  push dword ptr [ebx + 0xcdf03]
    X86_AT(c, 0xeb66du);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0xCDF03u))); push32(c, v); }
    // 0eb673  push 0x29f0
    X86_AT(c, 0xeb673u);
    { uint32_t v = 0x29F0u; push32(c, v); }
    // 0eb678  push esi
    X86_AT(c, 0xeb678u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0eb679  call 0x101748
    X86_AT(c, 0xeb679u);
    push32(c, 0xeb67eu); f_00101748(c); X86_RET(c, 0xeb67eu);
    X86_TICK(c, 16);
    // 0eb67e  push dword ptr [ebx + 0xcdf07]
    X86_AT(c, 0xeb67eu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0xCDF07u))); push32(c, v); }
    // 0eb684  push 0x29fc
    X86_AT(c, 0xeb684u);
    { uint32_t v = 0x29FCu; push32(c, v); }
    // 0eb689  push esi
    X86_AT(c, 0xeb689u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0eb68a  call 0x101748
    X86_AT(c, 0xeb68au);
    push32(c, 0xeb68fu); f_00101748(c); X86_RET(c, 0xeb68fu);
    X86_TICK(c, 16);
    // 0eb68f  push dword ptr [ebx + 0xcdf0b]
    X86_AT(c, 0xeb68fu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0xCDF0Bu))); push32(c, v); }
    // 0eb695  push 0x2a08
    X86_AT(c, 0xeb695u);
    { uint32_t v = 0x2A08u; push32(c, v); }
    // 0eb69a  push esi
    X86_AT(c, 0xeb69au);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0eb69b  call 0x101748
    X86_AT(c, 0xeb69bu);
    push32(c, 0xeb6a0u); f_00101748(c); X86_RET(c, 0xeb6a0u);
    X86_TICK(c, 18);
    // 0eb6a0  add esp, 0x3c
    X86_AT(c, 0xeb6a0u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x3Cu, 0, 4); }
    // 0eb6a3  push dword ptr [ebx + 0xcdf0f]
    X86_AT(c, 0xeb6a3u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0xCDF0Fu))); push32(c, v); }
    // 0eb6a9  push 0x2a18
    X86_AT(c, 0xeb6a9u);
    { uint32_t v = 0x2A18u; push32(c, v); }
    // 0eb6ae  push esi
    X86_AT(c, 0xeb6aeu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0eb6af  call 0x101748
    X86_AT(c, 0xeb6afu);
    push32(c, 0xeb6b4u); f_00101748(c); X86_RET(c, 0xeb6b4u);
    X86_TICK(c, 31);
    // 0eb6b4  add esp, 0xc
    X86_AT(c, 0xeb6b4u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0eb6b7  mov eax, edi
    X86_AT(c, 0xeb6b7u);
    c.r[0] = c.r[7];
    // 0eb6b9  lea edx, [eax + eax*4]
    X86_AT(c, 0xeb6b9u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0eb6bc  lea edx, [eax + edx*2]
    X86_AT(c, 0xeb6bcu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0eb6bf  shl edx, 5
    X86_AT(c, 0xeb6bfu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0eb6c2  sub edx, eax
    X86_AT(c, 0xeb6c2u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0eb6c4  push dword ptr [edx + 0xcdf13]
    X86_AT(c, 0xeb6c4u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF13u))); push32(c, v); }
    // 0eb6ca  push 0x2a28
    X86_AT(c, 0xeb6cau);
    { uint32_t v = 0x2A28u; push32(c, v); }
    // 0eb6cf  push esi
    X86_AT(c, 0xeb6cfu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0eb6d0  mov ebx, edx
    X86_AT(c, 0xeb6d0u);
    c.r[3] = c.r[2];
    // 0eb6d2  call 0x101748
    X86_AT(c, 0xeb6d2u);
    push32(c, 0xeb6d7u); f_00101748(c); X86_RET(c, 0xeb6d7u);
    X86_TICK(c, 16);
    // 0eb6d7  push dword ptr [ebx + 0xcdf17]
    X86_AT(c, 0xeb6d7u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0xCDF17u))); push32(c, v); }
    // 0eb6dd  push 0x2a3c
    X86_AT(c, 0xeb6ddu);
    { uint32_t v = 0x2A3Cu; push32(c, v); }
    // 0eb6e2  push esi
    X86_AT(c, 0xeb6e2u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0eb6e3  call 0x101748
    X86_AT(c, 0xeb6e3u);
    push32(c, 0xeb6e8u); f_00101748(c); X86_RET(c, 0xeb6e8u);
    X86_TICK(c, 16);
    // 0eb6e8  push dword ptr [ebx + 0xcdf1b]
    X86_AT(c, 0xeb6e8u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0xCDF1Bu))); push32(c, v); }
    // 0eb6ee  push 0x2a4c
    X86_AT(c, 0xeb6eeu);
    { uint32_t v = 0x2A4Cu; push32(c, v); }
    // 0eb6f3  push esi
    X86_AT(c, 0xeb6f3u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0eb6f4  call 0x101748
    X86_AT(c, 0xeb6f4u);
    push32(c, 0xeb6f9u); f_00101748(c); X86_RET(c, 0xeb6f9u);
    X86_TICK(c, 16);
    // 0eb6f9  push dword ptr [ebx + 0xcdf1f]
    X86_AT(c, 0xeb6f9u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0xCDF1Fu))); push32(c, v); }
    // 0eb6ff  push 0x2a60
    X86_AT(c, 0xeb6ffu);
    { uint32_t v = 0x2A60u; push32(c, v); }
    // 0eb704  push esi
    X86_AT(c, 0xeb704u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0eb705  call 0x101748
    X86_AT(c, 0xeb705u);
    push32(c, 0xeb70au); f_00101748(c); X86_RET(c, 0xeb70au);
    X86_TICK(c, 16);
    // 0eb70a  push dword ptr [ebx + 0xcdf23]
    X86_AT(c, 0xeb70au);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0xCDF23u))); push32(c, v); }
    // 0eb710  push 0x2a70
    X86_AT(c, 0xeb710u);
    { uint32_t v = 0x2A70u; push32(c, v); }
    // 0eb715  push esi
    X86_AT(c, 0xeb715u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0eb716  call 0x101748
    X86_AT(c, 0xeb716u);
    push32(c, 0xeb71bu); f_00101748(c); X86_RET(c, 0xeb71bu);
    X86_TICK(c, 18);
    // 0eb71b  add esp, 0x3c
    X86_AT(c, 0xeb71bu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x3Cu, 0, 4); }
    // 0eb71e  push dword ptr [ebx + 0xcdf27]
    X86_AT(c, 0xeb71eu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0xCDF27u))); push32(c, v); }
    // 0eb724  push 0x2a80
    X86_AT(c, 0xeb724u);
    { uint32_t v = 0x2A80u; push32(c, v); }
    // 0eb729  push esi
    X86_AT(c, 0xeb729u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0eb72a  call 0x101748
    X86_AT(c, 0xeb72au);
    push32(c, 0xeb72fu); f_00101748(c); X86_RET(c, 0xeb72fu);
    X86_TICK(c, 16);
    // 0eb72f  push dword ptr [ebx + 0xcdf2b]
    X86_AT(c, 0xeb72fu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0xCDF2Bu))); push32(c, v); }
    // 0eb735  push 0x2a8c
    X86_AT(c, 0xeb735u);
    { uint32_t v = 0x2A8Cu; push32(c, v); }
    // 0eb73a  push esi
    X86_AT(c, 0xeb73au);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0eb73b  call 0x101748
    X86_AT(c, 0xeb73bu);
    push32(c, 0xeb740u); f_00101748(c); X86_RET(c, 0xeb740u);
    X86_TICK(c, 16);
    // 0eb740  push dword ptr [ebx + 0xcdf2f]
    X86_AT(c, 0xeb740u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0xCDF2Fu))); push32(c, v); }
    // 0eb746  push 0x2a98
    X86_AT(c, 0xeb746u);
    { uint32_t v = 0x2A98u; push32(c, v); }
    // 0eb74b  push esi
    X86_AT(c, 0xeb74bu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0eb74c  call 0x101748
    X86_AT(c, 0xeb74cu);
    push32(c, 0xeb751u); f_00101748(c); X86_RET(c, 0xeb751u);
    X86_TICK(c, 16);
    // 0eb751  push dword ptr [ebx + 0xcdf33]
    X86_AT(c, 0xeb751u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0xCDF33u))); push32(c, v); }
    // 0eb757  push 0x2aa4
    X86_AT(c, 0xeb757u);
    { uint32_t v = 0x2AA4u; push32(c, v); }
    // 0eb75c  push esi
    X86_AT(c, 0xeb75cu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0eb75d  call 0x101748
    X86_AT(c, 0xeb75du);
    push32(c, 0xeb762u); f_00101748(c); X86_RET(c, 0xeb762u);
    X86_TICK(c, 16);
    // 0eb762  push dword ptr [ebx + 0xcdf37]
    X86_AT(c, 0xeb762u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0xCDF37u))); push32(c, v); }
    // 0eb768  push 0x2aac
    X86_AT(c, 0xeb768u);
    { uint32_t v = 0x2AACu; push32(c, v); }
    // 0eb76d  push esi
    X86_AT(c, 0xeb76du);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0eb76e  call 0x101748
    X86_AT(c, 0xeb76eu);
    push32(c, 0xeb773u); f_00101748(c); X86_RET(c, 0xeb773u);
    X86_TICK(c, 18);
    // 0eb773  add esp, 0x3c
    X86_AT(c, 0xeb773u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x3Cu, 0, 4); }
    // 0eb776  push dword ptr [ebx + 0xcdf3b]
    X86_AT(c, 0xeb776u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0xCDF3Bu))); push32(c, v); }
    // 0eb77c  push 0x2abc
    X86_AT(c, 0xeb77cu);
    { uint32_t v = 0x2ABCu; push32(c, v); }
    // 0eb781  push esi
    X86_AT(c, 0xeb781u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0eb782  call 0x101748
    X86_AT(c, 0xeb782u);
    push32(c, 0xeb787u); f_00101748(c); X86_RET(c, 0xeb787u);
    X86_TICK(c, 31);
    // 0eb787  add esp, 0xc
    X86_AT(c, 0xeb787u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0eb78a  mov eax, edi
    X86_AT(c, 0xeb78au);
    c.r[0] = c.r[7];
    // 0eb78c  lea edx, [eax + eax*4]
    X86_AT(c, 0xeb78cu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0eb78f  lea edx, [eax + edx*2]
    X86_AT(c, 0xeb78fu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0eb792  shl edx, 5
    X86_AT(c, 0xeb792u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0eb795  sub edx, eax
    X86_AT(c, 0xeb795u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0eb797  push dword ptr [edx + 0xcdf3f]
    X86_AT(c, 0xeb797u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF3Fu))); push32(c, v); }
    // 0eb79d  push 0x2ac8
    X86_AT(c, 0xeb79du);
    { uint32_t v = 0x2AC8u; push32(c, v); }
    // 0eb7a2  push esi
    X86_AT(c, 0xeb7a2u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0eb7a3  mov ebx, edx
    X86_AT(c, 0xeb7a3u);
    c.r[3] = c.r[2];
    // 0eb7a5  call 0x101748
    X86_AT(c, 0xeb7a5u);
    push32(c, 0xeb7aau); f_00101748(c); X86_RET(c, 0xeb7aau);
    X86_TICK(c, 16);
    // 0eb7aa  push dword ptr [ebx + 0xcdf43]
    X86_AT(c, 0xeb7aau);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0xCDF43u))); push32(c, v); }
    // 0eb7b0  push 0x2ad4
    X86_AT(c, 0xeb7b0u);
    { uint32_t v = 0x2AD4u; push32(c, v); }
    // 0eb7b5  push esi
    X86_AT(c, 0xeb7b5u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0eb7b6  call 0x101748
    X86_AT(c, 0xeb7b6u);
    push32(c, 0xeb7bbu); f_00101748(c); X86_RET(c, 0xeb7bbu);
    X86_TICK(c, 16);
    // 0eb7bb  push dword ptr [ebx + 0xcdf47]
    X86_AT(c, 0xeb7bbu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0xCDF47u))); push32(c, v); }
    // 0eb7c1  push 0x2ae0
    X86_AT(c, 0xeb7c1u);
    { uint32_t v = 0x2AE0u; push32(c, v); }
    // 0eb7c6  push esi
    X86_AT(c, 0xeb7c6u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0eb7c7  call 0x101748
    X86_AT(c, 0xeb7c7u);
    push32(c, 0xeb7ccu); f_00101748(c); X86_RET(c, 0xeb7ccu);
    X86_TICK(c, 16);
    // 0eb7cc  push dword ptr [ebx + 0xcdf4b]
    X86_AT(c, 0xeb7ccu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0xCDF4Bu))); push32(c, v); }
    // 0eb7d2  push 0x2aec
    X86_AT(c, 0xeb7d2u);
    { uint32_t v = 0x2AECu; push32(c, v); }
    // 0eb7d7  push esi
    X86_AT(c, 0xeb7d7u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0eb7d8  call 0x101748
    X86_AT(c, 0xeb7d8u);
    push32(c, 0xeb7ddu); f_00101748(c); X86_RET(c, 0xeb7ddu);
    X86_TICK(c, 16);
    // 0eb7dd  push dword ptr [ebx + 0xcdf53]
    X86_AT(c, 0xeb7ddu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0xCDF53u))); push32(c, v); }
    // 0eb7e3  push 0x2af8
    X86_AT(c, 0xeb7e3u);
    { uint32_t v = 0x2AF8u; push32(c, v); }
    // 0eb7e8  push esi
    X86_AT(c, 0xeb7e8u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0eb7e9  call 0x101748
    X86_AT(c, 0xeb7e9u);
    push32(c, 0xeb7eeu); f_00101748(c); X86_RET(c, 0xeb7eeu);
    X86_TICK(c, 18);
    // 0eb7ee  add esp, 0x3c
    X86_AT(c, 0xeb7eeu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x3Cu, 0, 4); }
    // 0eb7f1  push dword ptr [ebx + 0xcdf57]
    X86_AT(c, 0xeb7f1u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0xCDF57u))); push32(c, v); }
    // 0eb7f7  push 0x2b04
    X86_AT(c, 0xeb7f7u);
    { uint32_t v = 0x2B04u; push32(c, v); }
    // 0eb7fc  push esi
    X86_AT(c, 0xeb7fcu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0eb7fd  call 0x101748
    X86_AT(c, 0xeb7fdu);
    push32(c, 0xeb802u); f_00101748(c); X86_RET(c, 0xeb802u);
    X86_TICK(c, 16);
    // 0eb802  push dword ptr [ebx + 0xcdf5b]
    X86_AT(c, 0xeb802u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0xCDF5Bu))); push32(c, v); }
    // 0eb808  push 0x2b0c
    X86_AT(c, 0xeb808u);
    { uint32_t v = 0x2B0Cu; push32(c, v); }
    // 0eb80d  push esi
    X86_AT(c, 0xeb80du);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0eb80e  call 0x101748
    X86_AT(c, 0xeb80eu);
    push32(c, 0xeb813u); f_00101748(c); X86_RET(c, 0xeb813u);
    X86_TICK(c, 16);
    // 0eb813  push dword ptr [ebx + 0xcdf5f]
    X86_AT(c, 0xeb813u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0xCDF5Fu))); push32(c, v); }
    // 0eb819  push 0x2b18
    X86_AT(c, 0xeb819u);
    { uint32_t v = 0x2B18u; push32(c, v); }
    // 0eb81e  push esi
    X86_AT(c, 0xeb81eu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0eb81f  call 0x101748
    X86_AT(c, 0xeb81fu);
    push32(c, 0xeb824u); f_00101748(c); X86_RET(c, 0xeb824u);
    X86_TICK(c, 16);
    // 0eb824  push dword ptr [ebx + 0xcdf63]
    X86_AT(c, 0xeb824u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0xCDF63u))); push32(c, v); }
    // 0eb82a  push 0x2b24
    X86_AT(c, 0xeb82au);
    { uint32_t v = 0x2B24u; push32(c, v); }
    // 0eb82f  push esi
    X86_AT(c, 0xeb82fu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0eb830  call 0x101748
    X86_AT(c, 0xeb830u);
    push32(c, 0xeb835u); f_00101748(c); X86_RET(c, 0xeb835u);
    X86_TICK(c, 16);
    // 0eb835  push dword ptr [ebx + 0xcdf67]
    X86_AT(c, 0xeb835u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0xCDF67u))); push32(c, v); }
    // 0eb83b  push 0x2b30
    X86_AT(c, 0xeb83bu);
    { uint32_t v = 0x2B30u; push32(c, v); }
    // 0eb840  push esi
    X86_AT(c, 0xeb840u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0eb841  call 0x101748
    X86_AT(c, 0xeb841u);
    push32(c, 0xeb846u); f_00101748(c); X86_RET(c, 0xeb846u);
    X86_TICK(c, 18);
    // 0eb846  add esp, 0x3c
    X86_AT(c, 0xeb846u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x3Cu, 0, 4); }
    // 0eb849  push dword ptr [ebx + 0xcdf6b]
    X86_AT(c, 0xeb849u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0xCDF6Bu))); push32(c, v); }
    // 0eb84f  push 0x2b3c
    X86_AT(c, 0xeb84fu);
    { uint32_t v = 0x2B3Cu; push32(c, v); }
    // 0eb854  push esi
    X86_AT(c, 0xeb854u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0eb855  call 0x101748
    X86_AT(c, 0xeb855u);
    push32(c, 0xeb85au); f_00101748(c); X86_RET(c, 0xeb85au);
    X86_TICK(c, 31);
    // 0eb85a  add esp, 0xc
    X86_AT(c, 0xeb85au);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0eb85d  mov eax, edi
    X86_AT(c, 0xeb85du);
    c.r[0] = c.r[7];
    // 0eb85f  lea edx, [eax + eax*4]
    X86_AT(c, 0xeb85fu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0eb862  lea edx, [eax + edx*2]
    X86_AT(c, 0xeb862u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0eb865  shl edx, 5
    X86_AT(c, 0xeb865u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0eb868  sub edx, eax
    X86_AT(c, 0xeb868u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0eb86a  push dword ptr [edx + 0xcdf6f]
    X86_AT(c, 0xeb86au);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF6Fu))); push32(c, v); }
    // 0eb870  push 0x2b4c
    X86_AT(c, 0xeb870u);
    { uint32_t v = 0x2B4Cu; push32(c, v); }
    // 0eb875  push esi
    X86_AT(c, 0xeb875u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0eb876  mov ebx, edx
    X86_AT(c, 0xeb876u);
    c.r[3] = c.r[2];
    // 0eb878  call 0x101748
    X86_AT(c, 0xeb878u);
    push32(c, 0xeb87du); f_00101748(c); X86_RET(c, 0xeb87du);
    X86_TICK(c, 16);
    // 0eb87d  push dword ptr [ebx + 0xcdf73]
    X86_AT(c, 0xeb87du);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0xCDF73u))); push32(c, v); }
    // 0eb883  push 0x2b5c
    X86_AT(c, 0xeb883u);
    { uint32_t v = 0x2B5Cu; push32(c, v); }
    // 0eb888  push esi
    X86_AT(c, 0xeb888u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0eb889  call 0x101748
    X86_AT(c, 0xeb889u);
    push32(c, 0xeb88eu); f_00101748(c); X86_RET(c, 0xeb88eu);
    X86_TICK(c, 16);
    // 0eb88e  push dword ptr [ebx + 0xcdf77]
    X86_AT(c, 0xeb88eu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0xCDF77u))); push32(c, v); }
    // 0eb894  push 0x2b68
    X86_AT(c, 0xeb894u);
    { uint32_t v = 0x2B68u; push32(c, v); }
    // 0eb899  push esi
    X86_AT(c, 0xeb899u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0eb89a  call 0x101748
    X86_AT(c, 0xeb89au);
    push32(c, 0xeb89fu); f_00101748(c); X86_RET(c, 0xeb89fu);
    X86_TICK(c, 16);
    // 0eb89f  push dword ptr [ebx + 0xcdf7b]
    X86_AT(c, 0xeb89fu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0xCDF7Bu))); push32(c, v); }
    // 0eb8a5  push 0x2b74
    X86_AT(c, 0xeb8a5u);
    { uint32_t v = 0x2B74u; push32(c, v); }
    // 0eb8aa  push esi
    X86_AT(c, 0xeb8aau);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0eb8ab  call 0x101748
    X86_AT(c, 0xeb8abu);
    push32(c, 0xeb8b0u); f_00101748(c); X86_RET(c, 0xeb8b0u);
    X86_TICK(c, 16);
    // 0eb8b0  push dword ptr [ebx + 0xcdf7f]
    X86_AT(c, 0xeb8b0u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0xCDF7Fu))); push32(c, v); }
    // 0eb8b6  push 0x2b80
    X86_AT(c, 0xeb8b6u);
    { uint32_t v = 0x2B80u; push32(c, v); }
    // 0eb8bb  push esi
    X86_AT(c, 0xeb8bbu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0eb8bc  call 0x101748
    X86_AT(c, 0xeb8bcu);
    push32(c, 0xeb8c1u); f_00101748(c); X86_RET(c, 0xeb8c1u);
    X86_TICK(c, 18);
    // 0eb8c1  add esp, 0x3c
    X86_AT(c, 0xeb8c1u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x3Cu, 0, 4); }
    // 0eb8c4  push dword ptr [ebx + 0xcdf87]
    X86_AT(c, 0xeb8c4u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0xCDF87u))); push32(c, v); }
    // 0eb8ca  push 0x2b8c
    X86_AT(c, 0xeb8cau);
    { uint32_t v = 0x2B8Cu; push32(c, v); }
    // 0eb8cf  push esi
    X86_AT(c, 0xeb8cfu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0eb8d0  call 0x101748
    X86_AT(c, 0xeb8d0u);
    push32(c, 0xeb8d5u); f_00101748(c); X86_RET(c, 0xeb8d5u);
    X86_TICK(c, 16);
    // 0eb8d5  push dword ptr [ebx + 0xcdf8b]
    X86_AT(c, 0xeb8d5u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0xCDF8Bu))); push32(c, v); }
    // 0eb8db  push 0x2b98
    X86_AT(c, 0xeb8dbu);
    { uint32_t v = 0x2B98u; push32(c, v); }
    // 0eb8e0  push esi
    X86_AT(c, 0xeb8e0u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0eb8e1  call 0x101748
    X86_AT(c, 0xeb8e1u);
    push32(c, 0xeb8e6u); f_00101748(c); X86_RET(c, 0xeb8e6u);
    X86_TICK(c, 16);
    // 0eb8e6  push dword ptr [ebx + 0xcdf8f]
    X86_AT(c, 0xeb8e6u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0xCDF8Fu))); push32(c, v); }
    // 0eb8ec  push 0x2ba4
    X86_AT(c, 0xeb8ecu);
    { uint32_t v = 0x2BA4u; push32(c, v); }
    // 0eb8f1  push esi
    X86_AT(c, 0xeb8f1u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0eb8f2  call 0x101748
    X86_AT(c, 0xeb8f2u);
    push32(c, 0xeb8f7u); f_00101748(c); X86_RET(c, 0xeb8f7u);
    X86_TICK(c, 16);
    // 0eb8f7  push dword ptr [ebx + 0xcdf93]
    X86_AT(c, 0xeb8f7u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0xCDF93u))); push32(c, v); }
    // 0eb8fd  push 0x2bb0
    X86_AT(c, 0xeb8fdu);
    { uint32_t v = 0x2BB0u; push32(c, v); }
    // 0eb902  push esi
    X86_AT(c, 0xeb902u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0eb903  call 0x101748
    X86_AT(c, 0xeb903u);
    push32(c, 0xeb908u); f_00101748(c); X86_RET(c, 0xeb908u);
    X86_TICK(c, 16);
    // 0eb908  push dword ptr [ebx + 0xcdf97]
    X86_AT(c, 0xeb908u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0xCDF97u))); push32(c, v); }
    // 0eb90e  push 0x2bb8
    X86_AT(c, 0xeb90eu);
    { uint32_t v = 0x2BB8u; push32(c, v); }
    // 0eb913  push esi
    X86_AT(c, 0xeb913u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0eb914  call 0x101748
    X86_AT(c, 0xeb914u);
    push32(c, 0xeb919u); f_00101748(c); X86_RET(c, 0xeb919u);
    X86_TICK(c, 18);
    // 0eb919  add esp, 0x3c
    X86_AT(c, 0xeb919u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x3Cu, 0, 4); }
    // 0eb91c  push dword ptr [ebx + 0xcdf9b]
    X86_AT(c, 0xeb91cu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0xCDF9Bu))); push32(c, v); }
    // 0eb922  push 0x2bc4
    X86_AT(c, 0xeb922u);
    { uint32_t v = 0x2BC4u; push32(c, v); }
    // 0eb927  push esi
    X86_AT(c, 0xeb927u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0eb928  call 0x101748
    X86_AT(c, 0xeb928u);
    push32(c, 0xeb92du); f_00101748(c); X86_RET(c, 0xeb92du);
    X86_TICK(c, 31);
    // 0eb92d  add esp, 0xc
    X86_AT(c, 0xeb92du);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0eb930  mov eax, edi
    X86_AT(c, 0xeb930u);
    c.r[0] = c.r[7];
    // 0eb932  lea edx, [eax + eax*4]
    X86_AT(c, 0xeb932u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0eb935  lea edx, [eax + edx*2]
    X86_AT(c, 0xeb935u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0eb938  shl edx, 5
    X86_AT(c, 0xeb938u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0eb93b  sub edx, eax
    X86_AT(c, 0xeb93bu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0eb93d  push dword ptr [edx + 0xcdf9f]
    X86_AT(c, 0xeb93du);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF9Fu))); push32(c, v); }
    // 0eb943  push 0x2bd0
    X86_AT(c, 0xeb943u);
    { uint32_t v = 0x2BD0u; push32(c, v); }
    // 0eb948  push esi
    X86_AT(c, 0xeb948u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0eb949  mov ebx, edx
    X86_AT(c, 0xeb949u);
    c.r[3] = c.r[2];
    // 0eb94b  call 0x101748
    X86_AT(c, 0xeb94bu);
    push32(c, 0xeb950u); f_00101748(c); X86_RET(c, 0xeb950u);
    X86_TICK(c, 16);
    // 0eb950  push dword ptr [ebx + 0xcdfa3]
    X86_AT(c, 0xeb950u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0xCDFA3u))); push32(c, v); }
    // 0eb956  push 0x2bdc
    X86_AT(c, 0xeb956u);
    { uint32_t v = 0x2BDCu; push32(c, v); }
    // 0eb95b  push esi
    X86_AT(c, 0xeb95bu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0eb95c  call 0x101748
    X86_AT(c, 0xeb95cu);
    push32(c, 0xeb961u); f_00101748(c); X86_RET(c, 0xeb961u);
    X86_TICK(c, 16);
    // 0eb961  push dword ptr [ebx + 0xcdfa7]
    X86_AT(c, 0xeb961u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0xCDFA7u))); push32(c, v); }
    // 0eb967  push 0x2be8
    X86_AT(c, 0xeb967u);
    { uint32_t v = 0x2BE8u; push32(c, v); }
    // 0eb96c  push esi
    X86_AT(c, 0xeb96cu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0eb96d  call 0x101748
    X86_AT(c, 0xeb96du);
    push32(c, 0xeb972u); f_00101748(c); X86_RET(c, 0xeb972u);
    X86_TICK(c, 11);
    // 0eb972  inc edi
    X86_AT(c, 0xeb972u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0eb973  add esp, 0x24
    X86_AT(c, 0xeb973u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x24u, 0, 4); }
    // 0eb976  jmp 0xeb224
    X86_AT(c, 0xeb976u);
    X86_POLL(c, 0xeb224u); goto L_eb224;
L_eb97b:
    X86_TICK(c, 9);
    // 0eb97b  push esi
    X86_AT(c, 0xeb97bu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0eb97c  call 0x101430
    X86_AT(c, 0xeb97cu);
    push32(c, 0xeb981u); f_00101430(c); X86_RET(c, 0xeb981u);
    X86_TICK(c, 9);
    // 0eb981  push 2
    X86_AT(c, 0xeb981u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0eb983  call 0xe6c68
    X86_AT(c, 0xeb983u);
    push32(c, 0xeb988u); f_000e6c68(c); X86_RET(c, 0xeb988u);
    X86_TICK(c, 2);
    // 0eb988  add esp, 8
    X86_AT(c, 0xeb988u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
L_eb98b:
    X86_TICK(c, 28);
    // 0eb98b  pop edi
    X86_AT(c, 0xeb98bu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0eb98c  pop esi
    X86_AT(c, 0xeb98cu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0eb98d  pop ebx
    X86_AT(c, 0xeb98du);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0eb98e  leave 
    X86_AT(c, 0xeb98eu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0eb98f  ret 
    X86_AT(c, 0xeb98fu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xeb174u, "ran off the end of a function");
}
void f_000eb990(X86Cpu& c) {
    X86_TICK(c, 17);
    // 0eb990  push ebx
    X86_AT(c, 0xeb990u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0eb991  push esi
    X86_AT(c, 0xeb991u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0eb992  push edi
    X86_AT(c, 0xeb992u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0eb993  mov edx, dword ptr [0xceca0]
    X86_AT(c, 0xeb993u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0eb999  cmp edx, 3
    X86_AT(c, 0xeb999u);
    (void)x86_sub(c, c.r[2], 0x3u, 0, 4);
    // 0eb99c  ja 0xeb9d0
    X86_AT(c, 0xeb99cu);
    if (x86_cc(c, 7)) { goto L_eb9d0; }
    X86_TICK(c, 7);
    // 0eb99e  jmp dword ptr cs:[edx*4 + 0xeb9a6]
    X86_AT(c, 0xeb99eu);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xEB9A6u)));
      switch (t) {
      case 0xeb9b6u: goto L_eb9b6;
      case 0xeb9bdu: goto L_eb9bd;
      case 0xeb9c4u: goto L_eb9c4;
      case 0xeb9cbu: goto L_eb9cb;
      default: x86_jump(c, t); return; } }
L_eb9b6:
    X86_TICK(c, 9);
    // 0eb9b6  mov ebx, 0x2bf8
    X86_AT(c, 0xeb9b6u);
    c.r[3] = 0x2BF8u;
    // 0eb9bb  jmp 0xeb9d0
    X86_AT(c, 0xeb9bbu);
    goto L_eb9d0;
L_eb9bd:
    X86_TICK(c, 9);
    // 0eb9bd  mov ebx, 0x2c08
    X86_AT(c, 0xeb9bdu);
    c.r[3] = 0x2C08u;
    // 0eb9c2  jmp 0xeb9d0
    X86_AT(c, 0xeb9c2u);
    goto L_eb9d0;
L_eb9c4:
    X86_TICK(c, 9);
    // 0eb9c4  mov ebx, 0x2c18
    X86_AT(c, 0xeb9c4u);
    c.r[3] = 0x2C18u;
    // 0eb9c9  jmp 0xeb9d0
    X86_AT(c, 0xeb9c9u);
    goto L_eb9d0;
L_eb9cb:
    X86_TICK(c, 2);
    // 0eb9cb  mov ebx, 0x2c28
    X86_AT(c, 0xeb9cbu);
    c.r[3] = 0x2C28u;
L_eb9d0:
    X86_TICK(c, 9);
    // 0eb9d0  push 0x2c38
    X86_AT(c, 0xeb9d0u);
    { uint32_t v = 0x2C38u; push32(c, v); }
    // 0eb9d5  call 0xe9c7c
    X86_AT(c, 0xeb9d5u);
    push32(c, 0xeb9dau); f_000e9c7c(c); X86_RET(c, 0xeb9dau);
    X86_TICK(c, 4);
    // 0eb9da  sub esi, esi
    X86_AT(c, 0xeb9dau);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[6], 0, 4); }
    // 0eb9dc  add esp, 4
    X86_AT(c, 0xeb9dcu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
L_eb9df:
    X86_TICK(c, 7);
    // 0eb9df  cmp esi, 6
    X86_AT(c, 0xeb9dfu);
    (void)x86_sub(c, c.r[6], 0x6u, 0, 4);
    // 0eb9e2  jge 0xeb9f5
    X86_AT(c, 0xeb9e2u);
    if (x86_cc(c, 13)) { goto L_eb9f5; }
    X86_TICK(c, 9);
    // 0eb9e4  push 0
    X86_AT(c, 0xeb9e4u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0eb9e6  call 0xe24d8
    X86_AT(c, 0xeb9e6u);
    push32(c, 0xeb9ebu); f_000e24d8(c); X86_RET(c, 0xeb9ebu);
    X86_TICK(c, 9);
    // 0eb9eb  add esp, 4
    X86_AT(c, 0xeb9ebu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0eb9ee  and eax, eax
    X86_AT(c, 0xeb9eeu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0eb9f0  je 0xeb9f5
    X86_AT(c, 0xeb9f0u);
    if (x86_cc(c, 4)) { goto L_eb9f5; }
    X86_TICK(c, 9);
    // 0eb9f2  inc esi
    X86_AT(c, 0xeb9f2u);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 0eb9f3  jmp 0xeb9df
    X86_AT(c, 0xeb9f3u);
    X86_POLL(c, 0xeb9dfu); goto L_eb9df;
L_eb9f5:
    X86_TICK(c, 7);
    // 0eb9f5  cmp esi, 6
    X86_AT(c, 0xeb9f5u);
    (void)x86_sub(c, c.r[6], 0x6u, 0, 4);
    // 0eb9f8  jl 0xeba04
    X86_AT(c, 0xeb9f8u);
    if (x86_cc(c, 12)) { goto L_eba04; }
    X86_TICK(c, 9);
    // 0eb9fa  mov eax, 0xffffffff
    X86_AT(c, 0xeb9fau);
    c.r[0] = 0xFFFFFFFFu;
    // 0eb9ff  jmp 0xebc4d
    X86_AT(c, 0xeb9ffu);
    goto L_ebc4d;
L_eba04:
    X86_TICK(c, 11);
    // 0eba04  push 0x2c58
    X86_AT(c, 0xeba04u);
    { uint32_t v = 0x2C58u; push32(c, v); }
    // 0eba09  push ebx
    X86_AT(c, 0xeba09u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0eba0a  call 0x100f34
    X86_AT(c, 0xeba0au);
    push32(c, 0xeba0fu); f_00100f34(c); X86_RET(c, 0xeba0fu);
    X86_TICK(c, 12);
    // 0eba0f  add esp, 8
    X86_AT(c, 0xeba0fu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0eba12  xchg edi, eax
    X86_AT(c, 0xeba12u);
    { uint32_t t = c.r[7]; c.r[7] = c.r[0]; c.r[0] = t; }
    // 0eba13  and edi, edi
    X86_AT(c, 0xeba13u);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & c.r[7], 4); }
    // 0eba15  jne 0xeba2e
    X86_AT(c, 0xeba15u);
    if (x86_cc(c, 5)) { goto L_eba2e; }
    X86_TICK(c, 9);
    // 0eba17  push 0x2c5c
    X86_AT(c, 0xeba17u);
    { uint32_t v = 0x2C5Cu; push32(c, v); }
    // 0eba1c  call 0xe9cf0
    X86_AT(c, 0xeba1cu);
    push32(c, 0xeba21u); f_000e9cf0(c); X86_RET(c, 0xeba21u);
    X86_TICK(c, 11);
    // 0eba21  mov eax, 0xffffffff
    X86_AT(c, 0xeba21u);
    c.r[0] = 0xFFFFFFFFu;
    // 0eba26  add esp, 4
    X86_AT(c, 0xeba26u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0eba29  jmp 0xebc4d
    X86_AT(c, 0xeba29u);
    goto L_ebc4d;
L_eba2e:
    X86_TICK(c, 15);
    // 0eba2e  push edi
    X86_AT(c, 0xeba2eu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0eba2f  push 0x300
    X86_AT(c, 0xeba2fu);
    { uint32_t v = 0x300u; push32(c, v); }
    // 0eba34  push 1
    X86_AT(c, 0xeba34u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0eba36  push 0xd902c
    X86_AT(c, 0xeba36u);
    { uint32_t v = 0xD902Cu; push32(c, v); }
    // 0eba3b  call 0x1012b0
    X86_AT(c, 0xeba3bu);
    push32(c, 0xeba40u); f_001012b0(c); X86_RET(c, 0xeba40u);
    X86_TICK(c, 15);
    // 0eba40  push edi
    X86_AT(c, 0xeba40u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0eba41  push 0x300
    X86_AT(c, 0xeba41u);
    { uint32_t v = 0x300u; push32(c, v); }
    // 0eba46  push 1
    X86_AT(c, 0xeba46u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0eba48  push 0xd932c
    X86_AT(c, 0xeba48u);
    { uint32_t v = 0xD932Cu; push32(c, v); }
    // 0eba4d  call 0x1012b0
    X86_AT(c, 0xeba4du);
    push32(c, 0xeba52u); f_001012b0(c); X86_RET(c, 0xeba52u);
    X86_TICK(c, 15);
    // 0eba52  push edi
    X86_AT(c, 0xeba52u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0eba53  push 0x300
    X86_AT(c, 0xeba53u);
    { uint32_t v = 0x300u; push32(c, v); }
    // 0eba58  push 1
    X86_AT(c, 0xeba58u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0eba5a  push 0xd962c
    X86_AT(c, 0xeba5au);
    { uint32_t v = 0xD962Cu; push32(c, v); }
    // 0eba5f  call 0x1012b0
    X86_AT(c, 0xeba5fu);
    push32(c, 0xeba64u); f_001012b0(c); X86_RET(c, 0xeba64u);
    X86_TICK(c, 15);
    // 0eba64  push edi
    X86_AT(c, 0xeba64u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0eba65  push 0x300
    X86_AT(c, 0xeba65u);
    { uint32_t v = 0x300u; push32(c, v); }
    // 0eba6a  push 1
    X86_AT(c, 0xeba6au);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0eba6c  push 0xd992c
    X86_AT(c, 0xeba6cu);
    { uint32_t v = 0xD992Cu; push32(c, v); }
    // 0eba71  call 0x1012b0
    X86_AT(c, 0xeba71u);
    push32(c, 0xeba76u); f_001012b0(c); X86_RET(c, 0xeba76u);
    X86_TICK(c, 17);
    // 0eba76  add esp, 0x40
    X86_AT(c, 0xeba76u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x40u, 0, 4); }
    // 0eba79  push edi
    X86_AT(c, 0xeba79u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0eba7a  push 0x300
    X86_AT(c, 0xeba7au);
    { uint32_t v = 0x300u; push32(c, v); }
    // 0eba7f  push 1
    X86_AT(c, 0xeba7fu);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0eba81  push 0xd9c2c
    X86_AT(c, 0xeba81u);
    { uint32_t v = 0xD9C2Cu; push32(c, v); }
    // 0eba86  call 0x1012b0
    X86_AT(c, 0xeba86u);
    push32(c, 0xeba8bu); f_001012b0(c); X86_RET(c, 0xeba8bu);
    X86_TICK(c, 15);
    // 0eba8b  push edi
    X86_AT(c, 0xeba8bu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0eba8c  push 0x300
    X86_AT(c, 0xeba8cu);
    { uint32_t v = 0x300u; push32(c, v); }
    // 0eba91  push 1
    X86_AT(c, 0xeba91u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0eba93  push 0xd9f2c
    X86_AT(c, 0xeba93u);
    { uint32_t v = 0xD9F2Cu; push32(c, v); }
    // 0eba98  call 0x1012b0
    X86_AT(c, 0xeba98u);
    push32(c, 0xeba9du); f_001012b0(c); X86_RET(c, 0xeba9du);
    X86_TICK(c, 15);
    // 0eba9d  push edi
    X86_AT(c, 0xeba9du);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0eba9e  push 0x300
    X86_AT(c, 0xeba9eu);
    { uint32_t v = 0x300u; push32(c, v); }
    // 0ebaa3  push 1
    X86_AT(c, 0xebaa3u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0ebaa5  push 0xda22c
    X86_AT(c, 0xebaa5u);
    { uint32_t v = 0xDA22Cu; push32(c, v); }
    // 0ebaaa  call 0x1012b0
    X86_AT(c, 0xebaaau);
    push32(c, 0xebaafu); f_001012b0(c); X86_RET(c, 0xebaafu);
    X86_TICK(c, 15);
    // 0ebaaf  push edi
    X86_AT(c, 0xebaafu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0ebab0  push 0x300
    X86_AT(c, 0xebab0u);
    { uint32_t v = 0x300u; push32(c, v); }
    // 0ebab5  push 1
    X86_AT(c, 0xebab5u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0ebab7  push 0xda52c
    X86_AT(c, 0xebab7u);
    { uint32_t v = 0xDA52Cu; push32(c, v); }
    // 0ebabc  call 0x1012b0
    X86_AT(c, 0xebabcu);
    push32(c, 0xebac1u); f_001012b0(c); X86_RET(c, 0xebac1u);
    X86_TICK(c, 17);
    // 0ebac1  add esp, 0x40
    X86_AT(c, 0xebac1u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x40u, 0, 4); }
    // 0ebac4  push edi
    X86_AT(c, 0xebac4u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0ebac5  push 0x300
    X86_AT(c, 0xebac5u);
    { uint32_t v = 0x300u; push32(c, v); }
    // 0ebaca  push 1
    X86_AT(c, 0xebacau);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0ebacc  push 0xda82c
    X86_AT(c, 0xebaccu);
    { uint32_t v = 0xDA82Cu; push32(c, v); }
    // 0ebad1  call 0x1012b0
    X86_AT(c, 0xebad1u);
    push32(c, 0xebad6u); f_001012b0(c); X86_RET(c, 0xebad6u);
    X86_TICK(c, 15);
    // 0ebad6  push edi
    X86_AT(c, 0xebad6u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0ebad7  push 0x300
    X86_AT(c, 0xebad7u);
    { uint32_t v = 0x300u; push32(c, v); }
    // 0ebadc  push 1
    X86_AT(c, 0xebadcu);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0ebade  push 0xdab2c
    X86_AT(c, 0xebadeu);
    { uint32_t v = 0xDAB2Cu; push32(c, v); }
    // 0ebae3  call 0x1012b0
    X86_AT(c, 0xebae3u);
    push32(c, 0xebae8u); f_001012b0(c); X86_RET(c, 0xebae8u);
    X86_TICK(c, 15);
    // 0ebae8  push edi
    X86_AT(c, 0xebae8u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0ebae9  push 0x300
    X86_AT(c, 0xebae9u);
    { uint32_t v = 0x300u; push32(c, v); }
    // 0ebaee  push 1
    X86_AT(c, 0xebaeeu);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0ebaf0  push 0xdae2c
    X86_AT(c, 0xebaf0u);
    { uint32_t v = 0xDAE2Cu; push32(c, v); }
    // 0ebaf5  call 0x1012b0
    X86_AT(c, 0xebaf5u);
    push32(c, 0xebafau); f_001012b0(c); X86_RET(c, 0xebafau);
    X86_TICK(c, 17);
    // 0ebafa  add esp, 0x30
    X86_AT(c, 0xebafau);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x30u, 0, 4); }
    // 0ebafd  push edi
    X86_AT(c, 0xebafdu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0ebafe  push 0x300
    X86_AT(c, 0xebafeu);
    { uint32_t v = 0x300u; push32(c, v); }
    // 0ebb03  push 1
    X86_AT(c, 0xebb03u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0ebb05  push 0xdb12c
    X86_AT(c, 0xebb05u);
    { uint32_t v = 0xDB12Cu; push32(c, v); }
    // 0ebb0a  call 0x1012b0
    X86_AT(c, 0xebb0au);
    push32(c, 0xebb0fu); f_001012b0(c); X86_RET(c, 0xebb0fu);
    X86_TICK(c, 15);
    // 0ebb0f  push edi
    X86_AT(c, 0xebb0fu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0ebb10  push 0x300
    X86_AT(c, 0xebb10u);
    { uint32_t v = 0x300u; push32(c, v); }
    // 0ebb15  push 1
    X86_AT(c, 0xebb15u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0ebb17  push 0xdb42c
    X86_AT(c, 0xebb17u);
    { uint32_t v = 0xDB42Cu; push32(c, v); }
    // 0ebb1c  call 0x1012b0
    X86_AT(c, 0xebb1cu);
    push32(c, 0xebb21u); f_001012b0(c); X86_RET(c, 0xebb21u);
    X86_TICK(c, 15);
    // 0ebb21  push edi
    X86_AT(c, 0xebb21u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0ebb22  push 0x300
    X86_AT(c, 0xebb22u);
    { uint32_t v = 0x300u; push32(c, v); }
    // 0ebb27  push 1
    X86_AT(c, 0xebb27u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0ebb29  push 0xdb72c
    X86_AT(c, 0xebb29u);
    { uint32_t v = 0xDB72Cu; push32(c, v); }
    // 0ebb2e  call 0x1012b0
    X86_AT(c, 0xebb2eu);
    push32(c, 0xebb33u); f_001012b0(c); X86_RET(c, 0xebb33u);
    X86_TICK(c, 15);
    // 0ebb33  push edi
    X86_AT(c, 0xebb33u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0ebb34  push 0x1000
    X86_AT(c, 0xebb34u);
    { uint32_t v = 0x1000u; push32(c, v); }
    // 0ebb39  push 1
    X86_AT(c, 0xebb39u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0ebb3b  push 0x40e90
    X86_AT(c, 0xebb3bu);
    { uint32_t v = 0x40E90u; push32(c, v); }
    // 0ebb40  call 0x1012b0
    X86_AT(c, 0xebb40u);
    push32(c, 0xebb45u); f_001012b0(c); X86_RET(c, 0xebb45u);
    X86_TICK(c, 17);
    // 0ebb45  add esp, 0x40
    X86_AT(c, 0xebb45u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x40u, 0, 4); }
    // 0ebb48  push edi
    X86_AT(c, 0xebb48u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0ebb49  push 0x1000
    X86_AT(c, 0xebb49u);
    { uint32_t v = 0x1000u; push32(c, v); }
    // 0ebb4e  push 1
    X86_AT(c, 0xebb4eu);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0ebb50  push 0x41e90
    X86_AT(c, 0xebb50u);
    { uint32_t v = 0x41E90u; push32(c, v); }
    // 0ebb55  call 0x1012b0
    X86_AT(c, 0xebb55u);
    push32(c, 0xebb5au); f_001012b0(c); X86_RET(c, 0xebb5au);
    X86_TICK(c, 15);
    // 0ebb5a  push edi
    X86_AT(c, 0xebb5au);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0ebb5b  push 0x1000
    X86_AT(c, 0xebb5bu);
    { uint32_t v = 0x1000u; push32(c, v); }
    // 0ebb60  push 1
    X86_AT(c, 0xebb60u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0ebb62  push 0x42e90
    X86_AT(c, 0xebb62u);
    { uint32_t v = 0x42E90u; push32(c, v); }
    // 0ebb67  call 0x1012b0
    X86_AT(c, 0xebb67u);
    push32(c, 0xebb6cu); f_001012b0(c); X86_RET(c, 0xebb6cu);
    X86_TICK(c, 15);
    // 0ebb6c  push edi
    X86_AT(c, 0xebb6cu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0ebb6d  push 0x1000
    X86_AT(c, 0xebb6du);
    { uint32_t v = 0x1000u; push32(c, v); }
    // 0ebb72  push 1
    X86_AT(c, 0xebb72u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0ebb74  push 0x43e90
    X86_AT(c, 0xebb74u);
    { uint32_t v = 0x43E90u; push32(c, v); }
    // 0ebb79  call 0x1012b0
    X86_AT(c, 0xebb79u);
    push32(c, 0xebb7eu); f_001012b0(c); X86_RET(c, 0xebb7eu);
    X86_TICK(c, 15);
    // 0ebb7e  push edi
    X86_AT(c, 0xebb7eu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0ebb7f  push 0x1000
    X86_AT(c, 0xebb7fu);
    { uint32_t v = 0x1000u; push32(c, v); }
    // 0ebb84  push 1
    X86_AT(c, 0xebb84u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0ebb86  push 0x44e90
    X86_AT(c, 0xebb86u);
    { uint32_t v = 0x44E90u; push32(c, v); }
    // 0ebb8b  call 0x1012b0
    X86_AT(c, 0xebb8bu);
    push32(c, 0xebb90u); f_001012b0(c); X86_RET(c, 0xebb90u);
    X86_TICK(c, 17);
    // 0ebb90  add esp, 0x40
    X86_AT(c, 0xebb90u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x40u, 0, 4); }
    // 0ebb93  push edi
    X86_AT(c, 0xebb93u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0ebb94  push 0x1000
    X86_AT(c, 0xebb94u);
    { uint32_t v = 0x1000u; push32(c, v); }
    // 0ebb99  push 1
    X86_AT(c, 0xebb99u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0ebb9b  push 0x45e90
    X86_AT(c, 0xebb9bu);
    { uint32_t v = 0x45E90u; push32(c, v); }
    // 0ebba0  call 0x1012b0
    X86_AT(c, 0xebba0u);
    push32(c, 0xebba5u); f_001012b0(c); X86_RET(c, 0xebba5u);
    X86_TICK(c, 15);
    // 0ebba5  push edi
    X86_AT(c, 0xebba5u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0ebba6  push 0x1000
    X86_AT(c, 0xebba6u);
    { uint32_t v = 0x1000u; push32(c, v); }
    // 0ebbab  push 1
    X86_AT(c, 0xebbabu);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0ebbad  push 0x46e90
    X86_AT(c, 0xebbadu);
    { uint32_t v = 0x46E90u; push32(c, v); }
    // 0ebbb2  call 0x1012b0
    X86_AT(c, 0xebbb2u);
    push32(c, 0xebbb7u); f_001012b0(c); X86_RET(c, 0xebbb7u);
    X86_TICK(c, 15);
    // 0ebbb7  push edi
    X86_AT(c, 0xebbb7u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0ebbb8  push 0x1000
    X86_AT(c, 0xebbb8u);
    { uint32_t v = 0x1000u; push32(c, v); }
    // 0ebbbd  push 1
    X86_AT(c, 0xebbbdu);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0ebbbf  push 0x47e90
    X86_AT(c, 0xebbbfu);
    { uint32_t v = 0x47E90u; push32(c, v); }
    // 0ebbc4  call 0x1012b0
    X86_AT(c, 0xebbc4u);
    push32(c, 0xebbc9u); f_001012b0(c); X86_RET(c, 0xebbc9u);
    X86_TICK(c, 15);
    // 0ebbc9  push edi
    X86_AT(c, 0xebbc9u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0ebbca  push 0x1000
    X86_AT(c, 0xebbcau);
    { uint32_t v = 0x1000u; push32(c, v); }
    // 0ebbcf  push 1
    X86_AT(c, 0xebbcfu);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0ebbd1  push 0x48e90
    X86_AT(c, 0xebbd1u);
    { uint32_t v = 0x48E90u; push32(c, v); }
    // 0ebbd6  call 0x1012b0
    X86_AT(c, 0xebbd6u);
    push32(c, 0xebbdbu); f_001012b0(c); X86_RET(c, 0xebbdbu);
    X86_TICK(c, 17);
    // 0ebbdb  add esp, 0x40
    X86_AT(c, 0xebbdbu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x40u, 0, 4); }
    // 0ebbde  push edi
    X86_AT(c, 0xebbdeu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0ebbdf  push 0x1000
    X86_AT(c, 0xebbdfu);
    { uint32_t v = 0x1000u; push32(c, v); }
    // 0ebbe4  push 1
    X86_AT(c, 0xebbe4u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0ebbe6  push 0x49e90
    X86_AT(c, 0xebbe6u);
    { uint32_t v = 0x49E90u; push32(c, v); }
    // 0ebbeb  call 0x1012b0
    X86_AT(c, 0xebbebu);
    push32(c, 0xebbf0u); f_001012b0(c); X86_RET(c, 0xebbf0u);
    X86_TICK(c, 15);
    // 0ebbf0  push edi
    X86_AT(c, 0xebbf0u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0ebbf1  push 0x1000
    X86_AT(c, 0xebbf1u);
    { uint32_t v = 0x1000u; push32(c, v); }
    // 0ebbf6  push 1
    X86_AT(c, 0xebbf6u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0ebbf8  push 0x4ae90
    X86_AT(c, 0xebbf8u);
    { uint32_t v = 0x4AE90u; push32(c, v); }
    // 0ebbfd  call 0x1012b0
    X86_AT(c, 0xebbfdu);
    push32(c, 0xebc02u); f_001012b0(c); X86_RET(c, 0xebc02u);
    X86_TICK(c, 15);
    // 0ebc02  push edi
    X86_AT(c, 0xebc02u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0ebc03  push 0x1000
    X86_AT(c, 0xebc03u);
    { uint32_t v = 0x1000u; push32(c, v); }
    // 0ebc08  push 1
    X86_AT(c, 0xebc08u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0ebc0a  push 0x4be90
    X86_AT(c, 0xebc0au);
    { uint32_t v = 0x4BE90u; push32(c, v); }
    // 0ebc0f  call 0x1012b0
    X86_AT(c, 0xebc0fu);
    push32(c, 0xebc14u); f_001012b0(c); X86_RET(c, 0xebc14u);
    X86_TICK(c, 15);
    // 0ebc14  push edi
    X86_AT(c, 0xebc14u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0ebc15  push 0x1000
    X86_AT(c, 0xebc15u);
    { uint32_t v = 0x1000u; push32(c, v); }
    // 0ebc1a  push 1
    X86_AT(c, 0xebc1au);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0ebc1c  push 0x4ce90
    X86_AT(c, 0xebc1cu);
    { uint32_t v = 0x4CE90u; push32(c, v); }
    // 0ebc21  call 0x1012b0
    X86_AT(c, 0xebc21u);
    push32(c, 0xebc26u); f_001012b0(c); X86_RET(c, 0xebc26u);
    X86_TICK(c, 17);
    // 0ebc26  add esp, 0x40
    X86_AT(c, 0xebc26u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x40u, 0, 4); }
    // 0ebc29  push edi
    X86_AT(c, 0xebc29u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0ebc2a  push 0x1000
    X86_AT(c, 0xebc2au);
    { uint32_t v = 0x1000u; push32(c, v); }
    // 0ebc2f  push 1
    X86_AT(c, 0xebc2fu);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0ebc31  push 0x4de90
    X86_AT(c, 0xebc31u);
    { uint32_t v = 0x4DE90u; push32(c, v); }
    // 0ebc36  call 0x1012b0
    X86_AT(c, 0xebc36u);
    push32(c, 0xebc3bu); f_001012b0(c); X86_RET(c, 0xebc3bu);
    X86_TICK(c, 9);
    // 0ebc3b  push edi
    X86_AT(c, 0xebc3bu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0ebc3c  call 0x101430
    X86_AT(c, 0xebc3cu);
    push32(c, 0xebc41u); f_00101430(c); X86_RET(c, 0xebc41u);
    X86_TICK(c, 9);
    // 0ebc41  push 2
    X86_AT(c, 0xebc41u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0ebc43  call 0xe6c68
    X86_AT(c, 0xebc43u);
    push32(c, 0xebc48u); f_000e6c68(c); X86_RET(c, 0xebc48u);
    X86_TICK(c, 4);
    // 0ebc48  sub eax, eax
    X86_AT(c, 0xebc48u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0ebc4a  add esp, 0x18
    X86_AT(c, 0xebc4au);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x18u, 0, 4); }
L_ebc4d:
    X86_TICK(c, 22);
    // 0ebc4d  pop edi
    X86_AT(c, 0xebc4du);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0ebc4e  pop esi
    X86_AT(c, 0xebc4eu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0ebc4f  pop ebx
    X86_AT(c, 0xebc4fu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0ebc50  ret 
    X86_AT(c, 0xebc50u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xeb990u, "ran off the end of a function");
}
void f_000ebc4d(X86Cpu& c) {
    X86_TICK(c, 22);
    // 0ebc4d  pop edi
    X86_AT(c, 0xebc4du);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0ebc4e  pop esi
    X86_AT(c, 0xebc4eu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0ebc4f  pop ebx
    X86_AT(c, 0xebc4fu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0ebc50  ret 
    X86_AT(c, 0xebc50u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xebc4du, "ran off the end of a function");
}
void f_000ebc54(X86Cpu& c) {
    X86_TICK(c, 19);
    // 0ebc54  push ebp
    X86_AT(c, 0xebc54u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0ebc55  mov ebp, esp
    X86_AT(c, 0xebc55u);
    c.r[5] = c.r[4];
    // 0ebc57  sub esp, 0x24
    X86_AT(c, 0xebc57u);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, 0x24u, 0, 4); }
    // 0ebc5a  push ebx
    X86_AT(c, 0xebc5au);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0ebc5b  push esi
    X86_AT(c, 0xebc5bu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0ebc5c  push 2
    X86_AT(c, 0xebc5cu);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0ebc5e  call 0xe58e0
    X86_AT(c, 0xebc5eu);
    push32(c, 0xebc63u); f_000e58e0(c); X86_RET(c, 0xebc63u);
    X86_TICK(c, 27);
    // 0ebc63  push 0xd
    X86_AT(c, 0xebc63u);
    { uint32_t v = 0xDu; push32(c, v); }
    // 0ebc65  push 0xf
    X86_AT(c, 0xebc65u);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0ebc67  push 0xb
    X86_AT(c, 0xebc67u);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0ebc69  push 3
    X86_AT(c, 0xebc69u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0ebc6b  push 0x27
    X86_AT(c, 0xebc6bu);
    { uint32_t v = 0x27u; push32(c, v); }
    // 0ebc6d  push 0x46
    X86_AT(c, 0xebc6du);
    { uint32_t v = 0x46u; push32(c, v); }
    // 0ebc6f  push 0x146
    X86_AT(c, 0xebc6fu);
    { uint32_t v = 0x146u; push32(c, v); }
    // 0ebc74  push 0x15a
    X86_AT(c, 0xebc74u);
    { uint32_t v = 0x15Au; push32(c, v); }
    // 0ebc79  push 0x9d
    X86_AT(c, 0xebc79u);
    { uint32_t v = 0x9Du; push32(c, v); }
    // 0ebc7e  push 1
    X86_AT(c, 0xebc7eu);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0ebc80  call 0xe6858
    X86_AT(c, 0xebc80u);
    push32(c, 0xebc85u); f_000e6858(c); X86_RET(c, 0xebc85u);
    X86_TICK(c, 9);
    // 0ebc85  push 1
    X86_AT(c, 0xebc85u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0ebc87  call 0xe699c
    X86_AT(c, 0xebc87u);
    push32(c, 0xebc8cu); f_000e699c(c); X86_RET(c, 0xebc8cu);
    X86_TICK(c, 9);
    // 0ebc8c  push 1
    X86_AT(c, 0xebc8cu);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0ebc8e  call 0xe693c
    X86_AT(c, 0xebc8eu);
    push32(c, 0xebc93u); f_000e693c(c); X86_RET(c, 0xebc93u);
    X86_TICK(c, 13);
    // 0ebc93  push 0
    X86_AT(c, 0xebc93u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0ebc95  push 4
    X86_AT(c, 0xebc95u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ebc97  push 1
    X86_AT(c, 0xebc97u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0ebc99  call 0xe7260
    X86_AT(c, 0xebc99u);
    push32(c, 0xebc9eu); f_000e7260(c); X86_RET(c, 0xebc9eu);
    X86_TICK(c, 13);
    // 0ebc9e  add esp, 0x40
    X86_AT(c, 0xebc9eu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x40u, 0, 4); }
    // 0ebca1  push 0x2c7c
    X86_AT(c, 0xebca1u);
    { uint32_t v = 0x2C7Cu; push32(c, v); }
    // 0ebca6  push 1
    X86_AT(c, 0xebca6u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0ebca8  call 0xe5654
    X86_AT(c, 0xebca8u);
    push32(c, 0xebcadu); f_000e5654(c); X86_RET(c, 0xebcadu);
    X86_TICK(c, 25);
    // 0ebcad  push 0xceca4
    X86_AT(c, 0xebcadu);
    { uint32_t v = 0xCECA4u; push32(c, v); }
    // 0ebcb2  push 1
    X86_AT(c, 0xebcb2u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0ebcb4  push 2
    X86_AT(c, 0xebcb4u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0ebcb6  push 1
    X86_AT(c, 0xebcb6u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0ebcb8  push 0x24
    X86_AT(c, 0xebcb8u);
    { uint32_t v = 0x24u; push32(c, v); }
    // 0ebcba  push 3
    X86_AT(c, 0xebcbau);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0ebcbc  push 1
    X86_AT(c, 0xebcbcu);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0ebcbe  lea esi, [ebp - 0x24]
    X86_AT(c, 0xebcbeu);
    c.r[6] = (uint32_t)(c.r[5] + 0xFFFFFFDCu);
    // 0ebcc1  push esi
    X86_AT(c, 0xebcc1u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0ebcc2  call 0xe50c8
    X86_AT(c, 0xebcc2u);
    push32(c, 0xebcc7u); f_000e50c8(c); X86_RET(c, 0xebcc7u);
    X86_TICK(c, 13);
    // 0ebcc7  push 0x52
    X86_AT(c, 0xebcc7u);
    { uint32_t v = 0x52u; push32(c, v); }
    // 0ebcc9  push esi
    X86_AT(c, 0xebcc9u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0ebcca  push 1
    X86_AT(c, 0xebccau);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0ebccc  call 0xe5448
    X86_AT(c, 0xebcccu);
    push32(c, 0xebcd1u); f_000e5448(c); X86_RET(c, 0xebcd1u);
    X86_TICK(c, 16);
    // 0ebcd1  xchg ebx, eax
    X86_AT(c, 0xebcd1u);
    { uint32_t t = c.r[3]; c.r[3] = c.r[0]; c.r[0] = t; }
    // 0ebcd2  push 0
    X86_AT(c, 0xebcd2u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0ebcd4  push 0x12
    X86_AT(c, 0xebcd4u);
    { uint32_t v = 0x12u; push32(c, v); }
    // 0ebcd6  push 1
    X86_AT(c, 0xebcd6u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0ebcd8  call 0xe7260
    X86_AT(c, 0xebcd8u);
    push32(c, 0xebcddu); f_000e7260(c); X86_RET(c, 0xebcddu);
    X86_TICK(c, 21);
    // 0ebcdd  add esp, 0x40
    X86_AT(c, 0xebcddu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x40u, 0, 4); }
    // 0ebce0  mov byte ptr [ebp - 1], 0
    X86_AT(c, 0xebce0u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFFu)), 0x0u);
    // 0ebce4  lea eax, [ebp - 1]
    X86_AT(c, 0xebce4u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFFFu);
    // 0ebce7  push eax
    X86_AT(c, 0xebce7u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ebce8  push ebx
    X86_AT(c, 0xebce8u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0ebce9  push 3
    X86_AT(c, 0xebce9u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0ebceb  push 0xcee30
    X86_AT(c, 0xebcebu);
    { uint32_t v = 0xCEE30u; push32(c, v); }
    // 0ebcf0  call 0xe53e0
    X86_AT(c, 0xebcf0u);
    push32(c, 0xebcf5u); f_000e53e0(c); X86_RET(c, 0xebcf5u);
    X86_TICK(c, 11);
    // 0ebcf5  push eax
    X86_AT(c, 0xebcf5u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ebcf6  push 1
    X86_AT(c, 0xebcf6u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0ebcf8  call 0xe6cb0
    X86_AT(c, 0xebcf8u);
    push32(c, 0xebcfdu); f_000e6cb0(c); X86_RET(c, 0xebcfdu);
    X86_TICK(c, 9);
    // 0ebcfd  push 0x14
    X86_AT(c, 0xebcfdu);
    { uint32_t v = 0x14u; push32(c, v); }
    // 0ebcff  call 0xe9740
    X86_AT(c, 0xebcffu);
    push32(c, 0xebd04u); f_000e9740(c); X86_RET(c, 0xebd04u);
    X86_TICK(c, 13);
    // 0ebd04  add esp, 0x1c
    X86_AT(c, 0xebd04u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x1Cu, 0, 4); }
    // 0ebd07  push 0
    X86_AT(c, 0xebd07u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0ebd09  push 1
    X86_AT(c, 0xebd09u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0ebd0b  call 0xe6b70
    X86_AT(c, 0xebd0bu);
    push32(c, 0xebd10u); f_000e6b70(c); X86_RET(c, 0xebd10u);
    X86_TICK(c, 30);
    // 0ebd10  mov al, byte ptr [ebp - 1]
    X86_AT(c, 0xebd10u);
    s8(c, 0, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFFu))));
    // 0ebd13  add esp, 8
    X86_AT(c, 0xebd13u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0ebd16  pop esi
    X86_AT(c, 0xebd16u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0ebd17  pop ebx
    X86_AT(c, 0xebd17u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0ebd18  leave 
    X86_AT(c, 0xebd18u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0ebd19  ret 
    X86_AT(c, 0xebd19u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xebc54u, "ran off the end of a function");
}
void f_000ebd1c(X86Cpu& c) {
    X86_TICK(c, 19);
    // 0ebd1c  push ebp
    X86_AT(c, 0xebd1cu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0ebd1d  mov ebp, esp
    X86_AT(c, 0xebd1du);
    c.r[5] = c.r[4];
    // 0ebd1f  sub esp, 8
    X86_AT(c, 0xebd1fu);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, 0x8u, 0, 4); }
    // 0ebd22  push edi
    X86_AT(c, 0xebd22u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0ebd23  mov dword ptr [0xcde38], 0
    X86_AT(c, 0xebd23u);
    wr32((c.sbase[3] + (uint32_t)(0xCDE38u)), 0x0u);
    // 0ebd2d  push 0
    X86_AT(c, 0xebd2du);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0ebd2f  call 0xe97e8
    X86_AT(c, 0xebd2fu);
    push32(c, 0xebd34u); f_000e97e8(c); X86_RET(c, 0xebd34u);
    X86_TICK(c, 7);
    // 0ebd34  call 0xebf4c
    X86_AT(c, 0xebd34u);
    push32(c, 0xebd39u); f_000ebf4c(c); X86_RET(c, 0xebd39u);
    X86_TICK(c, 9);
    // 0ebd39  push 0x2c9c
    X86_AT(c, 0xebd39u);
    { uint32_t v = 0x2C9Cu; push32(c, v); }
    // 0ebd3e  call 0xe75f8
    X86_AT(c, 0xebd3eu);
    push32(c, 0xebd43u); f_000e75f8(c); X86_RET(c, 0xebd43u);
    X86_TICK(c, 7);
    // 0ebd43  call 0xe0a78
    X86_AT(c, 0xebd43u);
    push32(c, 0xebd48u); f_000e0a78(c); X86_RET(c, 0xebd48u);
    X86_TICK(c, 7);
    // 0ebd48  call 0xe98b4
    X86_AT(c, 0xebd48u);
    push32(c, 0xebd4du); f_000e98b4(c); X86_RET(c, 0xebd4du);
    X86_TICK(c, 7);
    // 0ebd4d  call 0xe7e1c
    X86_AT(c, 0xebd4du);
    push32(c, 0xebd52u); f_000e7e1c(c); X86_RET(c, 0xebd52u);
    X86_TICK(c, 7);
    // 0ebd52  call 0xe1794
    X86_AT(c, 0xebd52u);
    push32(c, 0xebd57u); f_000e1794(c); X86_RET(c, 0xebd57u);
    X86_TICK(c, 7);
    // 0ebd57  call 0xe39d0
    X86_AT(c, 0xebd57u);
    push32(c, 0xebd5cu); f_000e39d0(c); X86_RET(c, 0xebd5cu);
    X86_TICK(c, 11);
    // 0ebd5c  push 0x2cd4
    X86_AT(c, 0xebd5cu);
    { uint32_t v = 0x2CD4u; push32(c, v); }
    // 0ebd61  push 0
    X86_AT(c, 0xebd61u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0ebd63  call 0xe2554
    X86_AT(c, 0xebd63u);
    push32(c, 0xebd68u); f_000e2554(c); X86_RET(c, 0xebd68u);
    X86_TICK(c, 9);
    // 0ebd68  add esp, 0x10
    X86_AT(c, 0xebd68u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0ebd6b  and eax, eax
    X86_AT(c, 0xebd6bu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0ebd6d  jne 0xebd74
    X86_AT(c, 0xebd6du);
    if (x86_cc(c, 5)) { goto L_ebd74; }
    X86_TICK(c, 7);
    // 0ebd6f  call 0xe9d2c
    X86_AT(c, 0xebd6fu);
    push32(c, 0xebd74u); f_000e9d2c(c); X86_RET(c, 0xebd74u);
L_ebd74:
    X86_TICK(c, 9);
    // 0ebd74  push 2
    X86_AT(c, 0xebd74u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0ebd76  call 0xe6c68
    X86_AT(c, 0xebd76u);
    push32(c, 0xebd7bu); f_000e6c68(c); X86_RET(c, 0xebd7bu);
    X86_TICK(c, 9);
    // 0ebd7b  push 0
    X86_AT(c, 0xebd7bu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0ebd7d  call 0xe58e0
    X86_AT(c, 0xebd7du);
    push32(c, 0xebd82u); f_000e58e0(c); X86_RET(c, 0xebd82u);
    X86_TICK(c, 7);
    // 0ebd82  call 0xe8c40
    X86_AT(c, 0xebd82u);
    push32(c, 0xebd87u); f_000e8c40(c); X86_RET(c, 0xebd87u);
    X86_TICK(c, 7);
    // 0ebd87  call 0xe9a0c
    X86_AT(c, 0xebd87u);
    push32(c, 0xebd8cu); f_000e9a0c(c); X86_RET(c, 0xebd8cu);
    X86_TICK(c, 2);
    // 0ebd8c  add esp, 8
    X86_AT(c, 0xebd8cu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
L_ebd8f:
    X86_TICK(c, 9);
    // 0ebd8f  push 2
    X86_AT(c, 0xebd8fu);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0ebd91  call 0xe6c68
    X86_AT(c, 0xebd91u);
    push32(c, 0xebd96u); f_000e6c68(c); X86_RET(c, 0xebd96u);
    X86_TICK(c, 9);
    // 0ebd96  push 0
    X86_AT(c, 0xebd96u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0ebd98  call 0x1017b0
    X86_AT(c, 0xebd98u);
    push32(c, 0xebd9du); f_001017b0(c); X86_RET(c, 0xebd9du);
    X86_TICK(c, 15);
    // 0ebd9d  push edx
    X86_AT(c, 0xebd9du);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0ebd9e  push eax
    X86_AT(c, 0xebd9eu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ebd9f  mov dword ptr [ebp - 8], eax
    X86_AT(c, 0xebd9fu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), c.r[0]);
    // 0ebda2  mov dword ptr [ebp - 4], edx
    X86_AT(c, 0xebda2u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[2]);
    // 0ebda5  call 0x10228c
    X86_AT(c, 0xebda5u);
    push32(c, 0xebdaau); f_0010228c(c); X86_RET(c, 0xebdaau);
    X86_TICK(c, 7);
    // 0ebdaa  call 0x102088
    X86_AT(c, 0xebdaau);
    push32(c, 0xebdafu); f_00102088(c); X86_RET(c, 0xebdafu);
    X86_TICK(c, 9);
    // 0ebdaf  push eax
    X86_AT(c, 0xebdafu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ebdb0  call 0x101888
    X86_AT(c, 0xebdb0u);
    push32(c, 0xebdb5u); f_00101888(c); X86_RET(c, 0xebdb5u);
    X86_TICK(c, 7);
    // 0ebdb5  call 0xebc54
    X86_AT(c, 0xebdb5u);
    push32(c, 0xebdbau); f_000ebc54(c); X86_RET(c, 0xebdbau);
    X86_TICK(c, 12);
    // 0ebdba  add esp, 0xc
    X86_AT(c, 0xebdbau);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0ebdbd  movzx edx, al
    X86_AT(c, 0xebdbdu);
    c.r[2] = g8(c, 0);
    // 0ebdc0  and edx, edx
    X86_AT(c, 0xebdc0u);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & c.r[2], 4); }
    // 0ebdc2  je 0xebdd0
    X86_AT(c, 0xebdc2u);
    if (x86_cc(c, 4)) { goto L_ebdd0; }
    X86_TICK(c, 7);
    // 0ebdc4  cmp edx, 1
    X86_AT(c, 0xebdc4u);
    (void)x86_sub(c, c.r[2], 0x1u, 0, 4);
    // 0ebdc7  je 0xebde1
    X86_AT(c, 0xebdc7u);
    if (x86_cc(c, 4)) { goto L_ebde1; }
    X86_TICK(c, 7);
    // 0ebdc9  cmp edx, 2
    X86_AT(c, 0xebdc9u);
    (void)x86_sub(c, c.r[2], 0x2u, 0, 4);
    // 0ebdcc  jne 0xebd8f
    X86_AT(c, 0xebdccu);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xebd8fu); goto L_ebd8f; }
    X86_TICK(c, 7);
    // 0ebdce  jmp 0xebdf2
    X86_AT(c, 0xebdceu);
    goto L_ebdf2;
L_ebdd0:
    X86_TICK(c, 7);
    // 0ebdd0  call 0xe9874
    X86_AT(c, 0xebdd0u);
    push32(c, 0xebdd5u); f_000e9874(c); X86_RET(c, 0xebdd5u);
    X86_TICK(c, 9);
    // 0ebdd5  push 0
    X86_AT(c, 0xebdd5u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0ebdd7  call 0x1019e4
    X86_AT(c, 0xebdd7u);
    push32(c, 0xebddcu); f_001019e4(c); X86_RET(c, 0xebddcu);
    X86_TICK(c, 7);
    // 0ebddc  jmp 0xebf26
    X86_AT(c, 0xebddcu);
    goto L_ebf26;
L_ebde1:
    X86_TICK(c, 7);
    // 0ebde1  call 0xee590
    X86_AT(c, 0xebde1u);
    push32(c, 0xebde6u); f_000ee590(c); X86_RET(c, 0xebde6u);
    X86_TICK(c, 9);
    // 0ebde6  push 4
    X86_AT(c, 0xebde6u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ebde8  call 0xe3530
    X86_AT(c, 0xebde8u);
    push32(c, 0xebdedu); f_000e3530(c); X86_RET(c, 0xebdedu);
    X86_TICK(c, 7);
    // 0ebded  jmp 0xebf26
    X86_AT(c, 0xebdedu);
    goto L_ebf26;
L_ebdf2:
    X86_TICK(c, 11);
    // 0ebdf2  push 0x2ce4
    X86_AT(c, 0xebdf2u);
    { uint32_t v = 0x2CE4u; push32(c, v); }
    // 0ebdf7  push 0
    X86_AT(c, 0xebdf7u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0ebdf9  call 0xe2554
    X86_AT(c, 0xebdf9u);
    push32(c, 0xebdfeu); f_000e2554(c); X86_RET(c, 0xebdfeu);
    X86_TICK(c, 12);
    // 0ebdfe  xchg edi, eax
    X86_AT(c, 0xebdfeu);
    { uint32_t t = c.r[7]; c.r[7] = c.r[0]; c.r[0] = t; }
    // 0ebdff  add esp, 8
    X86_AT(c, 0xebdffu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0ebe02  cmp edi, 0xffffffff
    X86_AT(c, 0xebe02u);
    (void)x86_sub(c, c.r[7], 0xFFFFFFFFu, 0, 4);
    // 0ebe05  je 0xebe10
    X86_AT(c, 0xebe05u);
    if (x86_cc(c, 4)) { goto L_ebe10; }
    X86_TICK(c, 7);
    // 0ebe07  and edi, edi
    X86_AT(c, 0xebe07u);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & c.r[7], 4); }
    // 0ebe09  je 0xebe10
    X86_AT(c, 0xebe09u);
    if (x86_cc(c, 4)) { goto L_ebe10; }
    X86_TICK(c, 7);
    // 0ebe0b  cmp edi, 1
    X86_AT(c, 0xebe0bu);
    (void)x86_sub(c, c.r[7], 0x1u, 0, 4);
    // 0ebe0e  jne 0xebdf2
    X86_AT(c, 0xebe0eu);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xebdf2u); goto L_ebdf2; }
L_ebe10:
    X86_TICK(c, 7);
    // 0ebe10  and edi, edi
    X86_AT(c, 0xebe10u);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & c.r[7], 4); }
    // 0ebe12  je 0xebe3b
    X86_AT(c, 0xebe12u);
    if (x86_cc(c, 4)) { goto L_ebe3b; }
    X86_TICK(c, 9);
    // 0ebe14  push 3
    X86_AT(c, 0xebe14u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0ebe16  call 0xe1944
    X86_AT(c, 0xebe16u);
    push32(c, 0xebe1bu); f_000e1944(c); X86_RET(c, 0xebe1bu);
    X86_TICK(c, 9);
    // 0ebe1b  push 0x2cf4
    X86_AT(c, 0xebe1bu);
    { uint32_t v = 0x2CF4u; push32(c, v); }
    // 0ebe20  call 0xe75f8
    X86_AT(c, 0xebe20u);
    push32(c, 0xebe25u); f_000e75f8(c); X86_RET(c, 0xebe25u);
    X86_TICK(c, 2);
    // 0ebe25  add esp, 8
    X86_AT(c, 0xebe25u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
L_ebe28:
    X86_TICK(c, 9);
    // 0ebe28  push 4
    X86_AT(c, 0xebe28u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ebe2a  call 0xe4b60
    X86_AT(c, 0xebe2au);
    push32(c, 0xebe2fu); f_000e4b60(c); X86_RET(c, 0xebe2fu);
    X86_TICK(c, 9);
    // 0ebe2f  add esp, 4
    X86_AT(c, 0xebe2fu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0ebe32  and al, al
    X86_AT(c, 0xebe32u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & g8(c, 0), 1)); }
    // 0ebe34  je 0xebe28
    X86_AT(c, 0xebe34u);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xebe28u); goto L_ebe28; }
    X86_TICK(c, 7);
    // 0ebe36  jmp 0xebf1f
    X86_AT(c, 0xebe36u);
    goto L_ebf1f;
L_ebe3b:
    X86_TICK(c, 7);
    // 0ebe3b  call 0xe9d2c
    X86_AT(c, 0xebe3bu);
    push32(c, 0xebe40u); f_000e9d2c(c); X86_RET(c, 0xebe40u);
    X86_TICK(c, 7);
    // 0ebe40  inc eax
    X86_AT(c, 0xebe40u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0ebe41  jne 0xebe63
    X86_AT(c, 0xebe41u);
    if (x86_cc(c, 5)) { goto L_ebe63; }
    X86_TICK(c, 9);
    // 0ebe43  push 0x2d60
    X86_AT(c, 0xebe43u);
    { uint32_t v = 0x2D60u; push32(c, v); }
    // 0ebe48  call 0xe75f8
    X86_AT(c, 0xebe48u);
    push32(c, 0xebe4du); f_000e75f8(c); X86_RET(c, 0xebe4du);
    X86_TICK(c, 2);
    // 0ebe4d  add esp, 4
    X86_AT(c, 0xebe4du);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
L_ebe50:
    X86_TICK(c, 9);
    // 0ebe50  push 4
    X86_AT(c, 0xebe50u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ebe52  call 0xe4b60
    X86_AT(c, 0xebe52u);
    push32(c, 0xebe57u); f_000e4b60(c); X86_RET(c, 0xebe57u);
    X86_TICK(c, 9);
    // 0ebe57  add esp, 4
    X86_AT(c, 0xebe57u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0ebe5a  and al, al
    X86_AT(c, 0xebe5au);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & g8(c, 0), 1)); }
    // 0ebe5c  je 0xebe50
    X86_AT(c, 0xebe5cu);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xebe50u); goto L_ebe50; }
    X86_TICK(c, 7);
    // 0ebe5e  jmp 0xebf1f
    X86_AT(c, 0xebe5eu);
    goto L_ebf1f;
L_ebe63:
    X86_TICK(c, 14);
    // 0ebe63  mov eax, 0xcde44
    X86_AT(c, 0xebe63u);
    c.r[0] = 0xCDE44u;
    // 0ebe68  cmp byte ptr [eax + 9], 0
    X86_AT(c, 0xebe68u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[0] + 0x9u))), 0x0u, 0, 1);
    // 0ebe6c  jne 0xebea9
    X86_AT(c, 0xebe6cu);
    if (x86_cc(c, 5)) { goto L_ebea9; }
    X86_TICK(c, 12);
    // 0ebe6e  cmp byte ptr [eax + 0x168], 0
    X86_AT(c, 0xebe6eu);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[0] + 0x168u))), 0x0u, 0, 1);
    // 0ebe75  jne 0xebea9
    X86_AT(c, 0xebe75u);
    if (x86_cc(c, 5)) { goto L_ebea9; }
    X86_TICK(c, 12);
    // 0ebe77  cmp byte ptr [eax + 0x2c7], 0
    X86_AT(c, 0xebe77u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[0] + 0x2C7u))), 0x0u, 0, 1);
    // 0ebe7e  jne 0xebea9
    X86_AT(c, 0xebe7eu);
    if (x86_cc(c, 5)) { goto L_ebea9; }
    X86_TICK(c, 12);
    // 0ebe80  cmp byte ptr [eax + 0x426], 0
    X86_AT(c, 0xebe80u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[0] + 0x426u))), 0x0u, 0, 1);
    // 0ebe87  jne 0xebea9
    X86_AT(c, 0xebe87u);
    if (x86_cc(c, 5)) { goto L_ebea9; }
    X86_TICK(c, 9);
    // 0ebe89  push 0x2dc8
    X86_AT(c, 0xebe89u);
    { uint32_t v = 0x2DC8u; push32(c, v); }
    // 0ebe8e  call 0xe75f8
    X86_AT(c, 0xebe8eu);
    push32(c, 0xebe93u); f_000e75f8(c); X86_RET(c, 0xebe93u);
    X86_TICK(c, 2);
    // 0ebe93  add esp, 4
    X86_AT(c, 0xebe93u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
L_ebe96:
    X86_TICK(c, 9);
    // 0ebe96  push 4
    X86_AT(c, 0xebe96u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ebe98  call 0xe4b60
    X86_AT(c, 0xebe98u);
    push32(c, 0xebe9du); f_000e4b60(c); X86_RET(c, 0xebe9du);
    X86_TICK(c, 9);
    // 0ebe9d  add esp, 4
    X86_AT(c, 0xebe9du);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0ebea0  and al, al
    X86_AT(c, 0xebea0u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & g8(c, 0), 1)); }
    // 0ebea2  je 0xebe96
    X86_AT(c, 0xebea2u);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xebe96u); goto L_ebe96; }
    X86_TICK(c, 7);
    // 0ebea4  jmp 0xebf1f
    X86_AT(c, 0xebea4u);
    goto L_ebf1f;
L_ebea9:
    X86_TICK(c, 7);
    // 0ebea9  call 0xee79c
    X86_AT(c, 0xebea9u);
    push32(c, 0xebeaeu); f_000ee79c(c); X86_RET(c, 0xebeaeu);
    X86_TICK(c, 10);
    // 0ebeae  xchg edi, eax
    X86_AT(c, 0xebeaeu);
    { uint32_t t = c.r[7]; c.r[7] = c.r[0]; c.r[0] = t; }
    // 0ebeaf  cmp edi, 0xffffffff
    X86_AT(c, 0xebeafu);
    (void)x86_sub(c, c.r[7], 0xFFFFFFFFu, 0, 4);
    // 0ebeb2  je 0xebd8f
    X86_AT(c, 0xebeb2u);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xebd8fu); goto L_ebd8f; }
    X86_TICK(c, 11);
    // 0ebeb8  mov dword ptr [0xceca0], edi
    X86_AT(c, 0xebeb8u);
    wr32((c.sbase[3] + (uint32_t)(0xCECA0u)), c.r[7]);
    // 0ebebe  mov edx, edi
    X86_AT(c, 0xebebeu);
    c.r[2] = c.r[7];
    // 0ebec0  cmp edx, 3
    X86_AT(c, 0xebec0u);
    (void)x86_sub(c, c.r[2], 0x3u, 0, 4);
    // 0ebec3  ja 0xebf00
    X86_AT(c, 0xebec3u);
    if (x86_cc(c, 7)) { goto L_ebf00; }
    X86_TICK(c, 7);
    // 0ebec5  jmp dword ptr cs:[edx*4 + 0xebecd]
    X86_AT(c, 0xebec5u);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xEBECDu)));
      switch (t) {
      case 0xebeddu: goto L_ebedd;
      case 0xebee4u: goto L_ebee4;
      case 0xebeebu: goto L_ebeeb;
      case 0xebef2u: goto L_ebef2;
      default: x86_jump(c, t); return; } }
L_ebedd:
    X86_TICK(c, 9);
    // 0ebedd  push 0x2e30
    X86_AT(c, 0xebeddu);
    { uint32_t v = 0x2E30u; push32(c, v); }
    // 0ebee2  jmp 0xebef7
    X86_AT(c, 0xebee2u);
    goto L_ebef7;
L_ebee4:
    X86_TICK(c, 9);
    // 0ebee4  push 0x2e40
    X86_AT(c, 0xebee4u);
    { uint32_t v = 0x2E40u; push32(c, v); }
    // 0ebee9  jmp 0xebef7
    X86_AT(c, 0xebee9u);
    goto L_ebef7;
L_ebeeb:
    X86_TICK(c, 9);
    // 0ebeeb  push 0x2e50
    X86_AT(c, 0xebeebu);
    { uint32_t v = 0x2E50u; push32(c, v); }
    // 0ebef0  jmp 0xebef7
    X86_AT(c, 0xebef0u);
    goto L_ebef7;
L_ebef2:
    X86_TICK(c, 2);
    // 0ebef2  push 0x2e60
    X86_AT(c, 0xebef2u);
    { uint32_t v = 0x2E60u; push32(c, v); }
L_ebef7:
    X86_TICK(c, 7);
    // 0ebef7  call 0xe23cc
    X86_AT(c, 0xebef7u);
    push32(c, 0xebefcu); f_000e23cc(c); X86_RET(c, 0xebefcu);
    X86_TICK(c, 5);
    // 0ebefc  xchg edi, eax
    X86_AT(c, 0xebefcu);
    { uint32_t t = c.r[7]; c.r[7] = c.r[0]; c.r[0] = t; }
    // 0ebefd  add esp, 4
    X86_AT(c, 0xebefdu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
L_ebf00:
    X86_TICK(c, 7);
    // 0ebf00  and edi, edi
    X86_AT(c, 0xebf00u);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & c.r[7], 4); }
    // 0ebf02  je 0xebf2e
    X86_AT(c, 0xebf02u);
    if (x86_cc(c, 4)) { goto L_ebf2e; }
    X86_TICK(c, 9);
    // 0ebf04  push 0x2e70
    X86_AT(c, 0xebf04u);
    { uint32_t v = 0x2E70u; push32(c, v); }
    // 0ebf09  call 0xe75f8
    X86_AT(c, 0xebf09u);
    push32(c, 0xebf0eu); f_000e75f8(c); X86_RET(c, 0xebf0eu);
    X86_TICK(c, 2);
    // 0ebf0e  add esp, 4
    X86_AT(c, 0xebf0eu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
L_ebf11:
    X86_TICK(c, 9);
    // 0ebf11  push 4
    X86_AT(c, 0xebf11u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ebf13  call 0xe4b60
    X86_AT(c, 0xebf13u);
    push32(c, 0xebf18u); f_000e4b60(c); X86_RET(c, 0xebf18u);
    X86_TICK(c, 9);
    // 0ebf18  add esp, 4
    X86_AT(c, 0xebf18u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0ebf1b  and al, al
    X86_AT(c, 0xebf1bu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & g8(c, 0), 1)); }
    // 0ebf1d  je 0xebf11
    X86_AT(c, 0xebf1du);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xebf11u); goto L_ebf11; }
L_ebf1f:
    X86_TICK(c, 9);
    // 0ebf1f  push 4
    X86_AT(c, 0xebf1fu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ebf21  call 0xe693c
    X86_AT(c, 0xebf21u);
    push32(c, 0xebf26u); f_000e693c(c); X86_RET(c, 0xebf26u);
L_ebf26:
    X86_TICK(c, 9);
    // 0ebf26  add esp, 4
    X86_AT(c, 0xebf26u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0ebf29  jmp 0xebd8f
    X86_AT(c, 0xebf29u);
    X86_POLL(c, 0xebd8fu); goto L_ebd8f;
L_ebf2e:
    X86_TICK(c, 7);
    // 0ebf2e  call 0xe0a78
    X86_AT(c, 0xebf2eu);
    push32(c, 0xebf33u); f_000e0a78(c); X86_RET(c, 0xebf33u);
    X86_TICK(c, 7);
    // 0ebf33  call 0xfbb44
    X86_AT(c, 0xebf33u);
    push32(c, 0xebf38u); f_000fbb44(c); X86_RET(c, 0xebf38u);
    X86_TICK(c, 7);
    // 0ebf38  call 0xeade4
    X86_AT(c, 0xebf38u);
    push32(c, 0xebf3du); f_000eade4(c); X86_RET(c, 0xebf3du);
    X86_TICK(c, 7);
    // 0ebf3d  call 0xe95e0
    X86_AT(c, 0xebf3du);
    push32(c, 0xebf42u); f_000e95e0(c); X86_RET(c, 0xebf42u);
    X86_TICK(c, 7);
    // 0ebf42  call 0xe9a0c
    X86_AT(c, 0xebf42u);
    push32(c, 0xebf47u); f_000e9a0c(c); X86_RET(c, 0xebf47u);
    X86_TICK(c, 7);
    // 0ebf47  jmp 0xebd8f
    X86_AT(c, 0xebf47u);
    X86_POLL(c, 0xebd8fu); goto L_ebd8f;
    x86_fault(c, 0xebd1cu, "ran off the end of a function");
}
void f_000ebd8f(X86Cpu& c) {
L_ebd8f:
    X86_TICK(c, 9);
    // 0ebd8f  push 2
    X86_AT(c, 0xebd8fu);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0ebd91  call 0xe6c68
    X86_AT(c, 0xebd91u);
    push32(c, 0xebd96u); f_000e6c68(c); X86_RET(c, 0xebd96u);
    X86_TICK(c, 9);
    // 0ebd96  push 0
    X86_AT(c, 0xebd96u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0ebd98  call 0x1017b0
    X86_AT(c, 0xebd98u);
    push32(c, 0xebd9du); f_001017b0(c); X86_RET(c, 0xebd9du);
    X86_TICK(c, 15);
    // 0ebd9d  push edx
    X86_AT(c, 0xebd9du);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0ebd9e  push eax
    X86_AT(c, 0xebd9eu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ebd9f  mov dword ptr [ebp - 8], eax
    X86_AT(c, 0xebd9fu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), c.r[0]);
    // 0ebda2  mov dword ptr [ebp - 4], edx
    X86_AT(c, 0xebda2u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[2]);
    // 0ebda5  call 0x10228c
    X86_AT(c, 0xebda5u);
    push32(c, 0xebdaau); f_0010228c(c); X86_RET(c, 0xebdaau);
    X86_TICK(c, 7);
    // 0ebdaa  call 0x102088
    X86_AT(c, 0xebdaau);
    push32(c, 0xebdafu); f_00102088(c); X86_RET(c, 0xebdafu);
    X86_TICK(c, 9);
    // 0ebdaf  push eax
    X86_AT(c, 0xebdafu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ebdb0  call 0x101888
    X86_AT(c, 0xebdb0u);
    push32(c, 0xebdb5u); f_00101888(c); X86_RET(c, 0xebdb5u);
    X86_TICK(c, 7);
    // 0ebdb5  call 0xebc54
    X86_AT(c, 0xebdb5u);
    push32(c, 0xebdbau); f_000ebc54(c); X86_RET(c, 0xebdbau);
    X86_TICK(c, 12);
    // 0ebdba  add esp, 0xc
    X86_AT(c, 0xebdbau);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0ebdbd  movzx edx, al
    X86_AT(c, 0xebdbdu);
    c.r[2] = g8(c, 0);
    // 0ebdc0  and edx, edx
    X86_AT(c, 0xebdc0u);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & c.r[2], 4); }
    // 0ebdc2  je 0xebdd0
    X86_AT(c, 0xebdc2u);
    if (x86_cc(c, 4)) { goto L_ebdd0; }
    X86_TICK(c, 7);
    // 0ebdc4  cmp edx, 1
    X86_AT(c, 0xebdc4u);
    (void)x86_sub(c, c.r[2], 0x1u, 0, 4);
    // 0ebdc7  je 0xebde1
    X86_AT(c, 0xebdc7u);
    if (x86_cc(c, 4)) { goto L_ebde1; }
    X86_TICK(c, 7);
    // 0ebdc9  cmp edx, 2
    X86_AT(c, 0xebdc9u);
    (void)x86_sub(c, c.r[2], 0x2u, 0, 4);
    // 0ebdcc  jne 0xebd8f
    X86_AT(c, 0xebdccu);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xebd8fu); goto L_ebd8f; }
    X86_TICK(c, 7);
    // 0ebdce  jmp 0xebdf2
    X86_AT(c, 0xebdceu);
    goto L_ebdf2;
L_ebdd0:
    X86_TICK(c, 7);
    // 0ebdd0  call 0xe9874
    X86_AT(c, 0xebdd0u);
    push32(c, 0xebdd5u); f_000e9874(c); X86_RET(c, 0xebdd5u);
    X86_TICK(c, 9);
    // 0ebdd5  push 0
    X86_AT(c, 0xebdd5u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0ebdd7  call 0x1019e4
    X86_AT(c, 0xebdd7u);
    push32(c, 0xebddcu); f_001019e4(c); X86_RET(c, 0xebddcu);
    X86_TICK(c, 7);
    // 0ebddc  jmp 0xebf26
    X86_AT(c, 0xebddcu);
    goto L_ebf26;
L_ebde1:
    X86_TICK(c, 7);
    // 0ebde1  call 0xee590
    X86_AT(c, 0xebde1u);
    push32(c, 0xebde6u); f_000ee590(c); X86_RET(c, 0xebde6u);
    X86_TICK(c, 9);
    // 0ebde6  push 4
    X86_AT(c, 0xebde6u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ebde8  call 0xe3530
    X86_AT(c, 0xebde8u);
    push32(c, 0xebdedu); f_000e3530(c); X86_RET(c, 0xebdedu);
    X86_TICK(c, 7);
    // 0ebded  jmp 0xebf26
    X86_AT(c, 0xebdedu);
    goto L_ebf26;
L_ebdf2:
    X86_TICK(c, 11);
    // 0ebdf2  push 0x2ce4
    X86_AT(c, 0xebdf2u);
    { uint32_t v = 0x2CE4u; push32(c, v); }
    // 0ebdf7  push 0
    X86_AT(c, 0xebdf7u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0ebdf9  call 0xe2554
    X86_AT(c, 0xebdf9u);
    push32(c, 0xebdfeu); f_000e2554(c); X86_RET(c, 0xebdfeu);
    X86_TICK(c, 12);
    // 0ebdfe  xchg edi, eax
    X86_AT(c, 0xebdfeu);
    { uint32_t t = c.r[7]; c.r[7] = c.r[0]; c.r[0] = t; }
    // 0ebdff  add esp, 8
    X86_AT(c, 0xebdffu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0ebe02  cmp edi, 0xffffffff
    X86_AT(c, 0xebe02u);
    (void)x86_sub(c, c.r[7], 0xFFFFFFFFu, 0, 4);
    // 0ebe05  je 0xebe10
    X86_AT(c, 0xebe05u);
    if (x86_cc(c, 4)) { goto L_ebe10; }
    X86_TICK(c, 7);
    // 0ebe07  and edi, edi
    X86_AT(c, 0xebe07u);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & c.r[7], 4); }
    // 0ebe09  je 0xebe10
    X86_AT(c, 0xebe09u);
    if (x86_cc(c, 4)) { goto L_ebe10; }
    X86_TICK(c, 7);
    // 0ebe0b  cmp edi, 1
    X86_AT(c, 0xebe0bu);
    (void)x86_sub(c, c.r[7], 0x1u, 0, 4);
    // 0ebe0e  jne 0xebdf2
    X86_AT(c, 0xebe0eu);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xebdf2u); goto L_ebdf2; }
L_ebe10:
    X86_TICK(c, 7);
    // 0ebe10  and edi, edi
    X86_AT(c, 0xebe10u);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & c.r[7], 4); }
    // 0ebe12  je 0xebe3b
    X86_AT(c, 0xebe12u);
    if (x86_cc(c, 4)) { goto L_ebe3b; }
    X86_TICK(c, 9);
    // 0ebe14  push 3
    X86_AT(c, 0xebe14u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0ebe16  call 0xe1944
    X86_AT(c, 0xebe16u);
    push32(c, 0xebe1bu); f_000e1944(c); X86_RET(c, 0xebe1bu);
    X86_TICK(c, 9);
    // 0ebe1b  push 0x2cf4
    X86_AT(c, 0xebe1bu);
    { uint32_t v = 0x2CF4u; push32(c, v); }
    // 0ebe20  call 0xe75f8
    X86_AT(c, 0xebe20u);
    push32(c, 0xebe25u); f_000e75f8(c); X86_RET(c, 0xebe25u);
    X86_TICK(c, 2);
    // 0ebe25  add esp, 8
    X86_AT(c, 0xebe25u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
L_ebe28:
    X86_TICK(c, 9);
    // 0ebe28  push 4
    X86_AT(c, 0xebe28u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ebe2a  call 0xe4b60
    X86_AT(c, 0xebe2au);
    push32(c, 0xebe2fu); f_000e4b60(c); X86_RET(c, 0xebe2fu);
    X86_TICK(c, 9);
    // 0ebe2f  add esp, 4
    X86_AT(c, 0xebe2fu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0ebe32  and al, al
    X86_AT(c, 0xebe32u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & g8(c, 0), 1)); }
    // 0ebe34  je 0xebe28
    X86_AT(c, 0xebe34u);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xebe28u); goto L_ebe28; }
    X86_TICK(c, 7);
    // 0ebe36  jmp 0xebf1f
    X86_AT(c, 0xebe36u);
    goto L_ebf1f;
L_ebe3b:
    X86_TICK(c, 7);
    // 0ebe3b  call 0xe9d2c
    X86_AT(c, 0xebe3bu);
    push32(c, 0xebe40u); f_000e9d2c(c); X86_RET(c, 0xebe40u);
    X86_TICK(c, 7);
    // 0ebe40  inc eax
    X86_AT(c, 0xebe40u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0ebe41  jne 0xebe63
    X86_AT(c, 0xebe41u);
    if (x86_cc(c, 5)) { goto L_ebe63; }
    X86_TICK(c, 9);
    // 0ebe43  push 0x2d60
    X86_AT(c, 0xebe43u);
    { uint32_t v = 0x2D60u; push32(c, v); }
    // 0ebe48  call 0xe75f8
    X86_AT(c, 0xebe48u);
    push32(c, 0xebe4du); f_000e75f8(c); X86_RET(c, 0xebe4du);
    X86_TICK(c, 2);
    // 0ebe4d  add esp, 4
    X86_AT(c, 0xebe4du);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
L_ebe50:
    X86_TICK(c, 9);
    // 0ebe50  push 4
    X86_AT(c, 0xebe50u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ebe52  call 0xe4b60
    X86_AT(c, 0xebe52u);
    push32(c, 0xebe57u); f_000e4b60(c); X86_RET(c, 0xebe57u);
    X86_TICK(c, 9);
    // 0ebe57  add esp, 4
    X86_AT(c, 0xebe57u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0ebe5a  and al, al
    X86_AT(c, 0xebe5au);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & g8(c, 0), 1)); }
    // 0ebe5c  je 0xebe50
    X86_AT(c, 0xebe5cu);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xebe50u); goto L_ebe50; }
    X86_TICK(c, 7);
    // 0ebe5e  jmp 0xebf1f
    X86_AT(c, 0xebe5eu);
    goto L_ebf1f;
L_ebe63:
    X86_TICK(c, 14);
    // 0ebe63  mov eax, 0xcde44
    X86_AT(c, 0xebe63u);
    c.r[0] = 0xCDE44u;
    // 0ebe68  cmp byte ptr [eax + 9], 0
    X86_AT(c, 0xebe68u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[0] + 0x9u))), 0x0u, 0, 1);
    // 0ebe6c  jne 0xebea9
    X86_AT(c, 0xebe6cu);
    if (x86_cc(c, 5)) { goto L_ebea9; }
    X86_TICK(c, 12);
    // 0ebe6e  cmp byte ptr [eax + 0x168], 0
    X86_AT(c, 0xebe6eu);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[0] + 0x168u))), 0x0u, 0, 1);
    // 0ebe75  jne 0xebea9
    X86_AT(c, 0xebe75u);
    if (x86_cc(c, 5)) { goto L_ebea9; }
    X86_TICK(c, 12);
    // 0ebe77  cmp byte ptr [eax + 0x2c7], 0
    X86_AT(c, 0xebe77u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[0] + 0x2C7u))), 0x0u, 0, 1);
    // 0ebe7e  jne 0xebea9
    X86_AT(c, 0xebe7eu);
    if (x86_cc(c, 5)) { goto L_ebea9; }
    X86_TICK(c, 12);
    // 0ebe80  cmp byte ptr [eax + 0x426], 0
    X86_AT(c, 0xebe80u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[0] + 0x426u))), 0x0u, 0, 1);
    // 0ebe87  jne 0xebea9
    X86_AT(c, 0xebe87u);
    if (x86_cc(c, 5)) { goto L_ebea9; }
    X86_TICK(c, 9);
    // 0ebe89  push 0x2dc8
    X86_AT(c, 0xebe89u);
    { uint32_t v = 0x2DC8u; push32(c, v); }
    // 0ebe8e  call 0xe75f8
    X86_AT(c, 0xebe8eu);
    push32(c, 0xebe93u); f_000e75f8(c); X86_RET(c, 0xebe93u);
    X86_TICK(c, 2);
    // 0ebe93  add esp, 4
    X86_AT(c, 0xebe93u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
L_ebe96:
    X86_TICK(c, 9);
    // 0ebe96  push 4
    X86_AT(c, 0xebe96u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ebe98  call 0xe4b60
    X86_AT(c, 0xebe98u);
    push32(c, 0xebe9du); f_000e4b60(c); X86_RET(c, 0xebe9du);
    X86_TICK(c, 9);
    // 0ebe9d  add esp, 4
    X86_AT(c, 0xebe9du);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0ebea0  and al, al
    X86_AT(c, 0xebea0u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & g8(c, 0), 1)); }
    // 0ebea2  je 0xebe96
    X86_AT(c, 0xebea2u);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xebe96u); goto L_ebe96; }
    X86_TICK(c, 7);
    // 0ebea4  jmp 0xebf1f
    X86_AT(c, 0xebea4u);
    goto L_ebf1f;
L_ebea9:
    X86_TICK(c, 7);
    // 0ebea9  call 0xee79c
    X86_AT(c, 0xebea9u);
    push32(c, 0xebeaeu); f_000ee79c(c); X86_RET(c, 0xebeaeu);
    X86_TICK(c, 10);
    // 0ebeae  xchg edi, eax
    X86_AT(c, 0xebeaeu);
    { uint32_t t = c.r[7]; c.r[7] = c.r[0]; c.r[0] = t; }
    // 0ebeaf  cmp edi, 0xffffffff
    X86_AT(c, 0xebeafu);
    (void)x86_sub(c, c.r[7], 0xFFFFFFFFu, 0, 4);
    // 0ebeb2  je 0xebd8f
    X86_AT(c, 0xebeb2u);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xebd8fu); goto L_ebd8f; }
    X86_TICK(c, 11);
    // 0ebeb8  mov dword ptr [0xceca0], edi
    X86_AT(c, 0xebeb8u);
    wr32((c.sbase[3] + (uint32_t)(0xCECA0u)), c.r[7]);
    // 0ebebe  mov edx, edi
    X86_AT(c, 0xebebeu);
    c.r[2] = c.r[7];
    // 0ebec0  cmp edx, 3
    X86_AT(c, 0xebec0u);
    (void)x86_sub(c, c.r[2], 0x3u, 0, 4);
    // 0ebec3  ja 0xebf00
    X86_AT(c, 0xebec3u);
    if (x86_cc(c, 7)) { goto L_ebf00; }
    X86_TICK(c, 7);
    // 0ebec5  jmp dword ptr cs:[edx*4 + 0xebecd]
    X86_AT(c, 0xebec5u);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xEBECDu)));
      switch (t) {
      case 0xebeddu: goto L_ebedd;
      case 0xebee4u: goto L_ebee4;
      case 0xebeebu: goto L_ebeeb;
      case 0xebef2u: goto L_ebef2;
      default: x86_jump(c, t); return; } }
L_ebedd:
    X86_TICK(c, 9);
    // 0ebedd  push 0x2e30
    X86_AT(c, 0xebeddu);
    { uint32_t v = 0x2E30u; push32(c, v); }
    // 0ebee2  jmp 0xebef7
    X86_AT(c, 0xebee2u);
    goto L_ebef7;
L_ebee4:
    X86_TICK(c, 9);
    // 0ebee4  push 0x2e40
    X86_AT(c, 0xebee4u);
    { uint32_t v = 0x2E40u; push32(c, v); }
    // 0ebee9  jmp 0xebef7
    X86_AT(c, 0xebee9u);
    goto L_ebef7;
L_ebeeb:
    X86_TICK(c, 9);
    // 0ebeeb  push 0x2e50
    X86_AT(c, 0xebeebu);
    { uint32_t v = 0x2E50u; push32(c, v); }
    // 0ebef0  jmp 0xebef7
    X86_AT(c, 0xebef0u);
    goto L_ebef7;
L_ebef2:
    X86_TICK(c, 2);
    // 0ebef2  push 0x2e60
    X86_AT(c, 0xebef2u);
    { uint32_t v = 0x2E60u; push32(c, v); }
L_ebef7:
    X86_TICK(c, 7);
    // 0ebef7  call 0xe23cc
    X86_AT(c, 0xebef7u);
    push32(c, 0xebefcu); f_000e23cc(c); X86_RET(c, 0xebefcu);
    X86_TICK(c, 5);
    // 0ebefc  xchg edi, eax
    X86_AT(c, 0xebefcu);
    { uint32_t t = c.r[7]; c.r[7] = c.r[0]; c.r[0] = t; }
    // 0ebefd  add esp, 4
    X86_AT(c, 0xebefdu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
L_ebf00:
    X86_TICK(c, 7);
    // 0ebf00  and edi, edi
    X86_AT(c, 0xebf00u);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & c.r[7], 4); }
    // 0ebf02  je 0xebf2e
    X86_AT(c, 0xebf02u);
    if (x86_cc(c, 4)) { goto L_ebf2e; }
    X86_TICK(c, 9);
    // 0ebf04  push 0x2e70
    X86_AT(c, 0xebf04u);
    { uint32_t v = 0x2E70u; push32(c, v); }
    // 0ebf09  call 0xe75f8
    X86_AT(c, 0xebf09u);
    push32(c, 0xebf0eu); f_000e75f8(c); X86_RET(c, 0xebf0eu);
    X86_TICK(c, 2);
    // 0ebf0e  add esp, 4
    X86_AT(c, 0xebf0eu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
L_ebf11:
    X86_TICK(c, 9);
    // 0ebf11  push 4
    X86_AT(c, 0xebf11u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ebf13  call 0xe4b60
    X86_AT(c, 0xebf13u);
    push32(c, 0xebf18u); f_000e4b60(c); X86_RET(c, 0xebf18u);
    X86_TICK(c, 9);
    // 0ebf18  add esp, 4
    X86_AT(c, 0xebf18u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0ebf1b  and al, al
    X86_AT(c, 0xebf1bu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & g8(c, 0), 1)); }
    // 0ebf1d  je 0xebf11
    X86_AT(c, 0xebf1du);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xebf11u); goto L_ebf11; }
L_ebf1f:
    X86_TICK(c, 9);
    // 0ebf1f  push 4
    X86_AT(c, 0xebf1fu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ebf21  call 0xe693c
    X86_AT(c, 0xebf21u);
    push32(c, 0xebf26u); f_000e693c(c); X86_RET(c, 0xebf26u);
L_ebf26:
    X86_TICK(c, 9);
    // 0ebf26  add esp, 4
    X86_AT(c, 0xebf26u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0ebf29  jmp 0xebd8f
    X86_AT(c, 0xebf29u);
    X86_POLL(c, 0xebd8fu); goto L_ebd8f;
L_ebf2e:
    X86_TICK(c, 7);
    // 0ebf2e  call 0xe0a78
    X86_AT(c, 0xebf2eu);
    push32(c, 0xebf33u); f_000e0a78(c); X86_RET(c, 0xebf33u);
    X86_TICK(c, 7);
    // 0ebf33  call 0xfbb44
    X86_AT(c, 0xebf33u);
    push32(c, 0xebf38u); f_000fbb44(c); X86_RET(c, 0xebf38u);
    X86_TICK(c, 7);
    // 0ebf38  call 0xeade4
    X86_AT(c, 0xebf38u);
    push32(c, 0xebf3du); f_000eade4(c); X86_RET(c, 0xebf3du);
    X86_TICK(c, 7);
    // 0ebf3d  call 0xe95e0
    X86_AT(c, 0xebf3du);
    push32(c, 0xebf42u); f_000e95e0(c); X86_RET(c, 0xebf42u);
    X86_TICK(c, 7);
    // 0ebf42  call 0xe9a0c
    X86_AT(c, 0xebf42u);
    push32(c, 0xebf47u); f_000e9a0c(c); X86_RET(c, 0xebf47u);
    X86_TICK(c, 7);
    // 0ebf47  jmp 0xebd8f
    X86_AT(c, 0xebf47u);
    X86_POLL(c, 0xebd8fu); goto L_ebd8f;
    x86_fault(c, 0xebd8fu, "ran off the end of a function");
}
void f_000ebf1f(X86Cpu& c) {
    goto L_ebf1f;
L_ebd8f:
    X86_TICK(c, 9);
    // 0ebd8f  push 2
    X86_AT(c, 0xebd8fu);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0ebd91  call 0xe6c68
    X86_AT(c, 0xebd91u);
    push32(c, 0xebd96u); f_000e6c68(c); X86_RET(c, 0xebd96u);
    X86_TICK(c, 9);
    // 0ebd96  push 0
    X86_AT(c, 0xebd96u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0ebd98  call 0x1017b0
    X86_AT(c, 0xebd98u);
    push32(c, 0xebd9du); f_001017b0(c); X86_RET(c, 0xebd9du);
    X86_TICK(c, 15);
    // 0ebd9d  push edx
    X86_AT(c, 0xebd9du);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0ebd9e  push eax
    X86_AT(c, 0xebd9eu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ebd9f  mov dword ptr [ebp - 8], eax
    X86_AT(c, 0xebd9fu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), c.r[0]);
    // 0ebda2  mov dword ptr [ebp - 4], edx
    X86_AT(c, 0xebda2u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[2]);
    // 0ebda5  call 0x10228c
    X86_AT(c, 0xebda5u);
    push32(c, 0xebdaau); f_0010228c(c); X86_RET(c, 0xebdaau);
    X86_TICK(c, 7);
    // 0ebdaa  call 0x102088
    X86_AT(c, 0xebdaau);
    push32(c, 0xebdafu); f_00102088(c); X86_RET(c, 0xebdafu);
    X86_TICK(c, 9);
    // 0ebdaf  push eax
    X86_AT(c, 0xebdafu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ebdb0  call 0x101888
    X86_AT(c, 0xebdb0u);
    push32(c, 0xebdb5u); f_00101888(c); X86_RET(c, 0xebdb5u);
    X86_TICK(c, 7);
    // 0ebdb5  call 0xebc54
    X86_AT(c, 0xebdb5u);
    push32(c, 0xebdbau); f_000ebc54(c); X86_RET(c, 0xebdbau);
    X86_TICK(c, 12);
    // 0ebdba  add esp, 0xc
    X86_AT(c, 0xebdbau);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0ebdbd  movzx edx, al
    X86_AT(c, 0xebdbdu);
    c.r[2] = g8(c, 0);
    // 0ebdc0  and edx, edx
    X86_AT(c, 0xebdc0u);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & c.r[2], 4); }
    // 0ebdc2  je 0xebdd0
    X86_AT(c, 0xebdc2u);
    if (x86_cc(c, 4)) { goto L_ebdd0; }
    X86_TICK(c, 7);
    // 0ebdc4  cmp edx, 1
    X86_AT(c, 0xebdc4u);
    (void)x86_sub(c, c.r[2], 0x1u, 0, 4);
    // 0ebdc7  je 0xebde1
    X86_AT(c, 0xebdc7u);
    if (x86_cc(c, 4)) { goto L_ebde1; }
    X86_TICK(c, 7);
    // 0ebdc9  cmp edx, 2
    X86_AT(c, 0xebdc9u);
    (void)x86_sub(c, c.r[2], 0x2u, 0, 4);
    // 0ebdcc  jne 0xebd8f
    X86_AT(c, 0xebdccu);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xebd8fu); goto L_ebd8f; }
    X86_TICK(c, 7);
    // 0ebdce  jmp 0xebdf2
    X86_AT(c, 0xebdceu);
    goto L_ebdf2;
L_ebdd0:
    X86_TICK(c, 7);
    // 0ebdd0  call 0xe9874
    X86_AT(c, 0xebdd0u);
    push32(c, 0xebdd5u); f_000e9874(c); X86_RET(c, 0xebdd5u);
    X86_TICK(c, 9);
    // 0ebdd5  push 0
    X86_AT(c, 0xebdd5u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0ebdd7  call 0x1019e4
    X86_AT(c, 0xebdd7u);
    push32(c, 0xebddcu); f_001019e4(c); X86_RET(c, 0xebddcu);
    X86_TICK(c, 7);
    // 0ebddc  jmp 0xebf26
    X86_AT(c, 0xebddcu);
    goto L_ebf26;
L_ebde1:
    X86_TICK(c, 7);
    // 0ebde1  call 0xee590
    X86_AT(c, 0xebde1u);
    push32(c, 0xebde6u); f_000ee590(c); X86_RET(c, 0xebde6u);
    X86_TICK(c, 9);
    // 0ebde6  push 4
    X86_AT(c, 0xebde6u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ebde8  call 0xe3530
    X86_AT(c, 0xebde8u);
    push32(c, 0xebdedu); f_000e3530(c); X86_RET(c, 0xebdedu);
    X86_TICK(c, 7);
    // 0ebded  jmp 0xebf26
    X86_AT(c, 0xebdedu);
    goto L_ebf26;
L_ebdf2:
    X86_TICK(c, 11);
    // 0ebdf2  push 0x2ce4
    X86_AT(c, 0xebdf2u);
    { uint32_t v = 0x2CE4u; push32(c, v); }
    // 0ebdf7  push 0
    X86_AT(c, 0xebdf7u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0ebdf9  call 0xe2554
    X86_AT(c, 0xebdf9u);
    push32(c, 0xebdfeu); f_000e2554(c); X86_RET(c, 0xebdfeu);
    X86_TICK(c, 12);
    // 0ebdfe  xchg edi, eax
    X86_AT(c, 0xebdfeu);
    { uint32_t t = c.r[7]; c.r[7] = c.r[0]; c.r[0] = t; }
    // 0ebdff  add esp, 8
    X86_AT(c, 0xebdffu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0ebe02  cmp edi, 0xffffffff
    X86_AT(c, 0xebe02u);
    (void)x86_sub(c, c.r[7], 0xFFFFFFFFu, 0, 4);
    // 0ebe05  je 0xebe10
    X86_AT(c, 0xebe05u);
    if (x86_cc(c, 4)) { goto L_ebe10; }
    X86_TICK(c, 7);
    // 0ebe07  and edi, edi
    X86_AT(c, 0xebe07u);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & c.r[7], 4); }
    // 0ebe09  je 0xebe10
    X86_AT(c, 0xebe09u);
    if (x86_cc(c, 4)) { goto L_ebe10; }
    X86_TICK(c, 7);
    // 0ebe0b  cmp edi, 1
    X86_AT(c, 0xebe0bu);
    (void)x86_sub(c, c.r[7], 0x1u, 0, 4);
    // 0ebe0e  jne 0xebdf2
    X86_AT(c, 0xebe0eu);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xebdf2u); goto L_ebdf2; }
L_ebe10:
    X86_TICK(c, 7);
    // 0ebe10  and edi, edi
    X86_AT(c, 0xebe10u);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & c.r[7], 4); }
    // 0ebe12  je 0xebe3b
    X86_AT(c, 0xebe12u);
    if (x86_cc(c, 4)) { goto L_ebe3b; }
    X86_TICK(c, 9);
    // 0ebe14  push 3
    X86_AT(c, 0xebe14u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0ebe16  call 0xe1944
    X86_AT(c, 0xebe16u);
    push32(c, 0xebe1bu); f_000e1944(c); X86_RET(c, 0xebe1bu);
    X86_TICK(c, 9);
    // 0ebe1b  push 0x2cf4
    X86_AT(c, 0xebe1bu);
    { uint32_t v = 0x2CF4u; push32(c, v); }
    // 0ebe20  call 0xe75f8
    X86_AT(c, 0xebe20u);
    push32(c, 0xebe25u); f_000e75f8(c); X86_RET(c, 0xebe25u);
    X86_TICK(c, 2);
    // 0ebe25  add esp, 8
    X86_AT(c, 0xebe25u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
L_ebe28:
    X86_TICK(c, 9);
    // 0ebe28  push 4
    X86_AT(c, 0xebe28u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ebe2a  call 0xe4b60
    X86_AT(c, 0xebe2au);
    push32(c, 0xebe2fu); f_000e4b60(c); X86_RET(c, 0xebe2fu);
    X86_TICK(c, 9);
    // 0ebe2f  add esp, 4
    X86_AT(c, 0xebe2fu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0ebe32  and al, al
    X86_AT(c, 0xebe32u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & g8(c, 0), 1)); }
    // 0ebe34  je 0xebe28
    X86_AT(c, 0xebe34u);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xebe28u); goto L_ebe28; }
    X86_TICK(c, 7);
    // 0ebe36  jmp 0xebf1f
    X86_AT(c, 0xebe36u);
    goto L_ebf1f;
L_ebe3b:
    X86_TICK(c, 7);
    // 0ebe3b  call 0xe9d2c
    X86_AT(c, 0xebe3bu);
    push32(c, 0xebe40u); f_000e9d2c(c); X86_RET(c, 0xebe40u);
    X86_TICK(c, 7);
    // 0ebe40  inc eax
    X86_AT(c, 0xebe40u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0ebe41  jne 0xebe63
    X86_AT(c, 0xebe41u);
    if (x86_cc(c, 5)) { goto L_ebe63; }
    X86_TICK(c, 9);
    // 0ebe43  push 0x2d60
    X86_AT(c, 0xebe43u);
    { uint32_t v = 0x2D60u; push32(c, v); }
    // 0ebe48  call 0xe75f8
    X86_AT(c, 0xebe48u);
    push32(c, 0xebe4du); f_000e75f8(c); X86_RET(c, 0xebe4du);
    X86_TICK(c, 2);
    // 0ebe4d  add esp, 4
    X86_AT(c, 0xebe4du);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
L_ebe50:
    X86_TICK(c, 9);
    // 0ebe50  push 4
    X86_AT(c, 0xebe50u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ebe52  call 0xe4b60
    X86_AT(c, 0xebe52u);
    push32(c, 0xebe57u); f_000e4b60(c); X86_RET(c, 0xebe57u);
    X86_TICK(c, 9);
    // 0ebe57  add esp, 4
    X86_AT(c, 0xebe57u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0ebe5a  and al, al
    X86_AT(c, 0xebe5au);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & g8(c, 0), 1)); }
    // 0ebe5c  je 0xebe50
    X86_AT(c, 0xebe5cu);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xebe50u); goto L_ebe50; }
    X86_TICK(c, 7);
    // 0ebe5e  jmp 0xebf1f
    X86_AT(c, 0xebe5eu);
    goto L_ebf1f;
L_ebe63:
    X86_TICK(c, 14);
    // 0ebe63  mov eax, 0xcde44
    X86_AT(c, 0xebe63u);
    c.r[0] = 0xCDE44u;
    // 0ebe68  cmp byte ptr [eax + 9], 0
    X86_AT(c, 0xebe68u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[0] + 0x9u))), 0x0u, 0, 1);
    // 0ebe6c  jne 0xebea9
    X86_AT(c, 0xebe6cu);
    if (x86_cc(c, 5)) { goto L_ebea9; }
    X86_TICK(c, 12);
    // 0ebe6e  cmp byte ptr [eax + 0x168], 0
    X86_AT(c, 0xebe6eu);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[0] + 0x168u))), 0x0u, 0, 1);
    // 0ebe75  jne 0xebea9
    X86_AT(c, 0xebe75u);
    if (x86_cc(c, 5)) { goto L_ebea9; }
    X86_TICK(c, 12);
    // 0ebe77  cmp byte ptr [eax + 0x2c7], 0
    X86_AT(c, 0xebe77u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[0] + 0x2C7u))), 0x0u, 0, 1);
    // 0ebe7e  jne 0xebea9
    X86_AT(c, 0xebe7eu);
    if (x86_cc(c, 5)) { goto L_ebea9; }
    X86_TICK(c, 12);
    // 0ebe80  cmp byte ptr [eax + 0x426], 0
    X86_AT(c, 0xebe80u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[0] + 0x426u))), 0x0u, 0, 1);
    // 0ebe87  jne 0xebea9
    X86_AT(c, 0xebe87u);
    if (x86_cc(c, 5)) { goto L_ebea9; }
    X86_TICK(c, 9);
    // 0ebe89  push 0x2dc8
    X86_AT(c, 0xebe89u);
    { uint32_t v = 0x2DC8u; push32(c, v); }
    // 0ebe8e  call 0xe75f8
    X86_AT(c, 0xebe8eu);
    push32(c, 0xebe93u); f_000e75f8(c); X86_RET(c, 0xebe93u);
    X86_TICK(c, 2);
    // 0ebe93  add esp, 4
    X86_AT(c, 0xebe93u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
L_ebe96:
    X86_TICK(c, 9);
    // 0ebe96  push 4
    X86_AT(c, 0xebe96u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ebe98  call 0xe4b60
    X86_AT(c, 0xebe98u);
    push32(c, 0xebe9du); f_000e4b60(c); X86_RET(c, 0xebe9du);
    X86_TICK(c, 9);
    // 0ebe9d  add esp, 4
    X86_AT(c, 0xebe9du);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0ebea0  and al, al
    X86_AT(c, 0xebea0u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & g8(c, 0), 1)); }
    // 0ebea2  je 0xebe96
    X86_AT(c, 0xebea2u);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xebe96u); goto L_ebe96; }
    X86_TICK(c, 7);
    // 0ebea4  jmp 0xebf1f
    X86_AT(c, 0xebea4u);
    goto L_ebf1f;
L_ebea9:
    X86_TICK(c, 7);
    // 0ebea9  call 0xee79c
    X86_AT(c, 0xebea9u);
    push32(c, 0xebeaeu); f_000ee79c(c); X86_RET(c, 0xebeaeu);
    X86_TICK(c, 10);
    // 0ebeae  xchg edi, eax
    X86_AT(c, 0xebeaeu);
    { uint32_t t = c.r[7]; c.r[7] = c.r[0]; c.r[0] = t; }
    // 0ebeaf  cmp edi, 0xffffffff
    X86_AT(c, 0xebeafu);
    (void)x86_sub(c, c.r[7], 0xFFFFFFFFu, 0, 4);
    // 0ebeb2  je 0xebd8f
    X86_AT(c, 0xebeb2u);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xebd8fu); goto L_ebd8f; }
    X86_TICK(c, 11);
    // 0ebeb8  mov dword ptr [0xceca0], edi
    X86_AT(c, 0xebeb8u);
    wr32((c.sbase[3] + (uint32_t)(0xCECA0u)), c.r[7]);
    // 0ebebe  mov edx, edi
    X86_AT(c, 0xebebeu);
    c.r[2] = c.r[7];
    // 0ebec0  cmp edx, 3
    X86_AT(c, 0xebec0u);
    (void)x86_sub(c, c.r[2], 0x3u, 0, 4);
    // 0ebec3  ja 0xebf00
    X86_AT(c, 0xebec3u);
    if (x86_cc(c, 7)) { goto L_ebf00; }
    X86_TICK(c, 7);
    // 0ebec5  jmp dword ptr cs:[edx*4 + 0xebecd]
    X86_AT(c, 0xebec5u);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xEBECDu)));
      switch (t) {
      case 0xebeddu: goto L_ebedd;
      case 0xebee4u: goto L_ebee4;
      case 0xebeebu: goto L_ebeeb;
      case 0xebef2u: goto L_ebef2;
      default: x86_jump(c, t); return; } }
L_ebedd:
    X86_TICK(c, 9);
    // 0ebedd  push 0x2e30
    X86_AT(c, 0xebeddu);
    { uint32_t v = 0x2E30u; push32(c, v); }
    // 0ebee2  jmp 0xebef7
    X86_AT(c, 0xebee2u);
    goto L_ebef7;
L_ebee4:
    X86_TICK(c, 9);
    // 0ebee4  push 0x2e40
    X86_AT(c, 0xebee4u);
    { uint32_t v = 0x2E40u; push32(c, v); }
    // 0ebee9  jmp 0xebef7
    X86_AT(c, 0xebee9u);
    goto L_ebef7;
L_ebeeb:
    X86_TICK(c, 9);
    // 0ebeeb  push 0x2e50
    X86_AT(c, 0xebeebu);
    { uint32_t v = 0x2E50u; push32(c, v); }
    // 0ebef0  jmp 0xebef7
    X86_AT(c, 0xebef0u);
    goto L_ebef7;
L_ebef2:
    X86_TICK(c, 2);
    // 0ebef2  push 0x2e60
    X86_AT(c, 0xebef2u);
    { uint32_t v = 0x2E60u; push32(c, v); }
L_ebef7:
    X86_TICK(c, 7);
    // 0ebef7  call 0xe23cc
    X86_AT(c, 0xebef7u);
    push32(c, 0xebefcu); f_000e23cc(c); X86_RET(c, 0xebefcu);
    X86_TICK(c, 5);
    // 0ebefc  xchg edi, eax
    X86_AT(c, 0xebefcu);
    { uint32_t t = c.r[7]; c.r[7] = c.r[0]; c.r[0] = t; }
    // 0ebefd  add esp, 4
    X86_AT(c, 0xebefdu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
L_ebf00:
    X86_TICK(c, 7);
    // 0ebf00  and edi, edi
    X86_AT(c, 0xebf00u);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & c.r[7], 4); }
    // 0ebf02  je 0xebf2e
    X86_AT(c, 0xebf02u);
    if (x86_cc(c, 4)) { goto L_ebf2e; }
    X86_TICK(c, 9);
    // 0ebf04  push 0x2e70
    X86_AT(c, 0xebf04u);
    { uint32_t v = 0x2E70u; push32(c, v); }
    // 0ebf09  call 0xe75f8
    X86_AT(c, 0xebf09u);
    push32(c, 0xebf0eu); f_000e75f8(c); X86_RET(c, 0xebf0eu);
    X86_TICK(c, 2);
    // 0ebf0e  add esp, 4
    X86_AT(c, 0xebf0eu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
L_ebf11:
    X86_TICK(c, 9);
    // 0ebf11  push 4
    X86_AT(c, 0xebf11u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ebf13  call 0xe4b60
    X86_AT(c, 0xebf13u);
    push32(c, 0xebf18u); f_000e4b60(c); X86_RET(c, 0xebf18u);
    X86_TICK(c, 9);
    // 0ebf18  add esp, 4
    X86_AT(c, 0xebf18u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0ebf1b  and al, al
    X86_AT(c, 0xebf1bu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & g8(c, 0), 1)); }
    // 0ebf1d  je 0xebf11
    X86_AT(c, 0xebf1du);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xebf11u); goto L_ebf11; }
L_ebf1f:
    X86_TICK(c, 9);
    // 0ebf1f  push 4
    X86_AT(c, 0xebf1fu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ebf21  call 0xe693c
    X86_AT(c, 0xebf21u);
    push32(c, 0xebf26u); f_000e693c(c); X86_RET(c, 0xebf26u);
L_ebf26:
    X86_TICK(c, 9);
    // 0ebf26  add esp, 4
    X86_AT(c, 0xebf26u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0ebf29  jmp 0xebd8f
    X86_AT(c, 0xebf29u);
    X86_POLL(c, 0xebd8fu); goto L_ebd8f;
L_ebf2e:
    X86_TICK(c, 7);
    // 0ebf2e  call 0xe0a78
    X86_AT(c, 0xebf2eu);
    push32(c, 0xebf33u); f_000e0a78(c); X86_RET(c, 0xebf33u);
    X86_TICK(c, 7);
    // 0ebf33  call 0xfbb44
    X86_AT(c, 0xebf33u);
    push32(c, 0xebf38u); f_000fbb44(c); X86_RET(c, 0xebf38u);
    X86_TICK(c, 7);
    // 0ebf38  call 0xeade4
    X86_AT(c, 0xebf38u);
    push32(c, 0xebf3du); f_000eade4(c); X86_RET(c, 0xebf3du);
    X86_TICK(c, 7);
    // 0ebf3d  call 0xe95e0
    X86_AT(c, 0xebf3du);
    push32(c, 0xebf42u); f_000e95e0(c); X86_RET(c, 0xebf42u);
    X86_TICK(c, 7);
    // 0ebf42  call 0xe9a0c
    X86_AT(c, 0xebf42u);
    push32(c, 0xebf47u); f_000e9a0c(c); X86_RET(c, 0xebf47u);
    X86_TICK(c, 7);
    // 0ebf47  jmp 0xebd8f
    X86_AT(c, 0xebf47u);
    X86_POLL(c, 0xebd8fu); goto L_ebd8f;
    x86_fault(c, 0xebf1fu, "ran off the end of a function");
}
void f_000ebf26(X86Cpu& c) {
    goto L_ebf26;
L_ebd8f:
    X86_TICK(c, 9);
    // 0ebd8f  push 2
    X86_AT(c, 0xebd8fu);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0ebd91  call 0xe6c68
    X86_AT(c, 0xebd91u);
    push32(c, 0xebd96u); f_000e6c68(c); X86_RET(c, 0xebd96u);
    X86_TICK(c, 9);
    // 0ebd96  push 0
    X86_AT(c, 0xebd96u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0ebd98  call 0x1017b0
    X86_AT(c, 0xebd98u);
    push32(c, 0xebd9du); f_001017b0(c); X86_RET(c, 0xebd9du);
    X86_TICK(c, 15);
    // 0ebd9d  push edx
    X86_AT(c, 0xebd9du);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0ebd9e  push eax
    X86_AT(c, 0xebd9eu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ebd9f  mov dword ptr [ebp - 8], eax
    X86_AT(c, 0xebd9fu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), c.r[0]);
    // 0ebda2  mov dword ptr [ebp - 4], edx
    X86_AT(c, 0xebda2u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[2]);
    // 0ebda5  call 0x10228c
    X86_AT(c, 0xebda5u);
    push32(c, 0xebdaau); f_0010228c(c); X86_RET(c, 0xebdaau);
    X86_TICK(c, 7);
    // 0ebdaa  call 0x102088
    X86_AT(c, 0xebdaau);
    push32(c, 0xebdafu); f_00102088(c); X86_RET(c, 0xebdafu);
    X86_TICK(c, 9);
    // 0ebdaf  push eax
    X86_AT(c, 0xebdafu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ebdb0  call 0x101888
    X86_AT(c, 0xebdb0u);
    push32(c, 0xebdb5u); f_00101888(c); X86_RET(c, 0xebdb5u);
    X86_TICK(c, 7);
    // 0ebdb5  call 0xebc54
    X86_AT(c, 0xebdb5u);
    push32(c, 0xebdbau); f_000ebc54(c); X86_RET(c, 0xebdbau);
    X86_TICK(c, 12);
    // 0ebdba  add esp, 0xc
    X86_AT(c, 0xebdbau);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0ebdbd  movzx edx, al
    X86_AT(c, 0xebdbdu);
    c.r[2] = g8(c, 0);
    // 0ebdc0  and edx, edx
    X86_AT(c, 0xebdc0u);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & c.r[2], 4); }
    // 0ebdc2  je 0xebdd0
    X86_AT(c, 0xebdc2u);
    if (x86_cc(c, 4)) { goto L_ebdd0; }
    X86_TICK(c, 7);
    // 0ebdc4  cmp edx, 1
    X86_AT(c, 0xebdc4u);
    (void)x86_sub(c, c.r[2], 0x1u, 0, 4);
    // 0ebdc7  je 0xebde1
    X86_AT(c, 0xebdc7u);
    if (x86_cc(c, 4)) { goto L_ebde1; }
    X86_TICK(c, 7);
    // 0ebdc9  cmp edx, 2
    X86_AT(c, 0xebdc9u);
    (void)x86_sub(c, c.r[2], 0x2u, 0, 4);
    // 0ebdcc  jne 0xebd8f
    X86_AT(c, 0xebdccu);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xebd8fu); goto L_ebd8f; }
    X86_TICK(c, 7);
    // 0ebdce  jmp 0xebdf2
    X86_AT(c, 0xebdceu);
    goto L_ebdf2;
L_ebdd0:
    X86_TICK(c, 7);
    // 0ebdd0  call 0xe9874
    X86_AT(c, 0xebdd0u);
    push32(c, 0xebdd5u); f_000e9874(c); X86_RET(c, 0xebdd5u);
    X86_TICK(c, 9);
    // 0ebdd5  push 0
    X86_AT(c, 0xebdd5u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0ebdd7  call 0x1019e4
    X86_AT(c, 0xebdd7u);
    push32(c, 0xebddcu); f_001019e4(c); X86_RET(c, 0xebddcu);
    X86_TICK(c, 7);
    // 0ebddc  jmp 0xebf26
    X86_AT(c, 0xebddcu);
    goto L_ebf26;
L_ebde1:
    X86_TICK(c, 7);
    // 0ebde1  call 0xee590
    X86_AT(c, 0xebde1u);
    push32(c, 0xebde6u); f_000ee590(c); X86_RET(c, 0xebde6u);
    X86_TICK(c, 9);
    // 0ebde6  push 4
    X86_AT(c, 0xebde6u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ebde8  call 0xe3530
    X86_AT(c, 0xebde8u);
    push32(c, 0xebdedu); f_000e3530(c); X86_RET(c, 0xebdedu);
    X86_TICK(c, 7);
    // 0ebded  jmp 0xebf26
    X86_AT(c, 0xebdedu);
    goto L_ebf26;
L_ebdf2:
    X86_TICK(c, 11);
    // 0ebdf2  push 0x2ce4
    X86_AT(c, 0xebdf2u);
    { uint32_t v = 0x2CE4u; push32(c, v); }
    // 0ebdf7  push 0
    X86_AT(c, 0xebdf7u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0ebdf9  call 0xe2554
    X86_AT(c, 0xebdf9u);
    push32(c, 0xebdfeu); f_000e2554(c); X86_RET(c, 0xebdfeu);
    X86_TICK(c, 12);
    // 0ebdfe  xchg edi, eax
    X86_AT(c, 0xebdfeu);
    { uint32_t t = c.r[7]; c.r[7] = c.r[0]; c.r[0] = t; }
    // 0ebdff  add esp, 8
    X86_AT(c, 0xebdffu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0ebe02  cmp edi, 0xffffffff
    X86_AT(c, 0xebe02u);
    (void)x86_sub(c, c.r[7], 0xFFFFFFFFu, 0, 4);
    // 0ebe05  je 0xebe10
    X86_AT(c, 0xebe05u);
    if (x86_cc(c, 4)) { goto L_ebe10; }
    X86_TICK(c, 7);
    // 0ebe07  and edi, edi
    X86_AT(c, 0xebe07u);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & c.r[7], 4); }
    // 0ebe09  je 0xebe10
    X86_AT(c, 0xebe09u);
    if (x86_cc(c, 4)) { goto L_ebe10; }
    X86_TICK(c, 7);
    // 0ebe0b  cmp edi, 1
    X86_AT(c, 0xebe0bu);
    (void)x86_sub(c, c.r[7], 0x1u, 0, 4);
    // 0ebe0e  jne 0xebdf2
    X86_AT(c, 0xebe0eu);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xebdf2u); goto L_ebdf2; }
L_ebe10:
    X86_TICK(c, 7);
    // 0ebe10  and edi, edi
    X86_AT(c, 0xebe10u);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & c.r[7], 4); }
    // 0ebe12  je 0xebe3b
    X86_AT(c, 0xebe12u);
    if (x86_cc(c, 4)) { goto L_ebe3b; }
    X86_TICK(c, 9);
    // 0ebe14  push 3
    X86_AT(c, 0xebe14u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0ebe16  call 0xe1944
    X86_AT(c, 0xebe16u);
    push32(c, 0xebe1bu); f_000e1944(c); X86_RET(c, 0xebe1bu);
    X86_TICK(c, 9);
    // 0ebe1b  push 0x2cf4
    X86_AT(c, 0xebe1bu);
    { uint32_t v = 0x2CF4u; push32(c, v); }
    // 0ebe20  call 0xe75f8
    X86_AT(c, 0xebe20u);
    push32(c, 0xebe25u); f_000e75f8(c); X86_RET(c, 0xebe25u);
    X86_TICK(c, 2);
    // 0ebe25  add esp, 8
    X86_AT(c, 0xebe25u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
L_ebe28:
    X86_TICK(c, 9);
    // 0ebe28  push 4
    X86_AT(c, 0xebe28u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ebe2a  call 0xe4b60
    X86_AT(c, 0xebe2au);
    push32(c, 0xebe2fu); f_000e4b60(c); X86_RET(c, 0xebe2fu);
    X86_TICK(c, 9);
    // 0ebe2f  add esp, 4
    X86_AT(c, 0xebe2fu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0ebe32  and al, al
    X86_AT(c, 0xebe32u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & g8(c, 0), 1)); }
    // 0ebe34  je 0xebe28
    X86_AT(c, 0xebe34u);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xebe28u); goto L_ebe28; }
    X86_TICK(c, 7);
    // 0ebe36  jmp 0xebf1f
    X86_AT(c, 0xebe36u);
    goto L_ebf1f;
L_ebe3b:
    X86_TICK(c, 7);
    // 0ebe3b  call 0xe9d2c
    X86_AT(c, 0xebe3bu);
    push32(c, 0xebe40u); f_000e9d2c(c); X86_RET(c, 0xebe40u);
    X86_TICK(c, 7);
    // 0ebe40  inc eax
    X86_AT(c, 0xebe40u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0ebe41  jne 0xebe63
    X86_AT(c, 0xebe41u);
    if (x86_cc(c, 5)) { goto L_ebe63; }
    X86_TICK(c, 9);
    // 0ebe43  push 0x2d60
    X86_AT(c, 0xebe43u);
    { uint32_t v = 0x2D60u; push32(c, v); }
    // 0ebe48  call 0xe75f8
    X86_AT(c, 0xebe48u);
    push32(c, 0xebe4du); f_000e75f8(c); X86_RET(c, 0xebe4du);
    X86_TICK(c, 2);
    // 0ebe4d  add esp, 4
    X86_AT(c, 0xebe4du);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
L_ebe50:
    X86_TICK(c, 9);
    // 0ebe50  push 4
    X86_AT(c, 0xebe50u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ebe52  call 0xe4b60
    X86_AT(c, 0xebe52u);
    push32(c, 0xebe57u); f_000e4b60(c); X86_RET(c, 0xebe57u);
    X86_TICK(c, 9);
    // 0ebe57  add esp, 4
    X86_AT(c, 0xebe57u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0ebe5a  and al, al
    X86_AT(c, 0xebe5au);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & g8(c, 0), 1)); }
    // 0ebe5c  je 0xebe50
    X86_AT(c, 0xebe5cu);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xebe50u); goto L_ebe50; }
    X86_TICK(c, 7);
    // 0ebe5e  jmp 0xebf1f
    X86_AT(c, 0xebe5eu);
    goto L_ebf1f;
L_ebe63:
    X86_TICK(c, 14);
    // 0ebe63  mov eax, 0xcde44
    X86_AT(c, 0xebe63u);
    c.r[0] = 0xCDE44u;
    // 0ebe68  cmp byte ptr [eax + 9], 0
    X86_AT(c, 0xebe68u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[0] + 0x9u))), 0x0u, 0, 1);
    // 0ebe6c  jne 0xebea9
    X86_AT(c, 0xebe6cu);
    if (x86_cc(c, 5)) { goto L_ebea9; }
    X86_TICK(c, 12);
    // 0ebe6e  cmp byte ptr [eax + 0x168], 0
    X86_AT(c, 0xebe6eu);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[0] + 0x168u))), 0x0u, 0, 1);
    // 0ebe75  jne 0xebea9
    X86_AT(c, 0xebe75u);
    if (x86_cc(c, 5)) { goto L_ebea9; }
    X86_TICK(c, 12);
    // 0ebe77  cmp byte ptr [eax + 0x2c7], 0
    X86_AT(c, 0xebe77u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[0] + 0x2C7u))), 0x0u, 0, 1);
    // 0ebe7e  jne 0xebea9
    X86_AT(c, 0xebe7eu);
    if (x86_cc(c, 5)) { goto L_ebea9; }
    X86_TICK(c, 12);
    // 0ebe80  cmp byte ptr [eax + 0x426], 0
    X86_AT(c, 0xebe80u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[0] + 0x426u))), 0x0u, 0, 1);
    // 0ebe87  jne 0xebea9
    X86_AT(c, 0xebe87u);
    if (x86_cc(c, 5)) { goto L_ebea9; }
    X86_TICK(c, 9);
    // 0ebe89  push 0x2dc8
    X86_AT(c, 0xebe89u);
    { uint32_t v = 0x2DC8u; push32(c, v); }
    // 0ebe8e  call 0xe75f8
    X86_AT(c, 0xebe8eu);
    push32(c, 0xebe93u); f_000e75f8(c); X86_RET(c, 0xebe93u);
    X86_TICK(c, 2);
    // 0ebe93  add esp, 4
    X86_AT(c, 0xebe93u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
L_ebe96:
    X86_TICK(c, 9);
    // 0ebe96  push 4
    X86_AT(c, 0xebe96u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ebe98  call 0xe4b60
    X86_AT(c, 0xebe98u);
    push32(c, 0xebe9du); f_000e4b60(c); X86_RET(c, 0xebe9du);
    X86_TICK(c, 9);
    // 0ebe9d  add esp, 4
    X86_AT(c, 0xebe9du);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0ebea0  and al, al
    X86_AT(c, 0xebea0u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & g8(c, 0), 1)); }
    // 0ebea2  je 0xebe96
    X86_AT(c, 0xebea2u);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xebe96u); goto L_ebe96; }
    X86_TICK(c, 7);
    // 0ebea4  jmp 0xebf1f
    X86_AT(c, 0xebea4u);
    goto L_ebf1f;
L_ebea9:
    X86_TICK(c, 7);
    // 0ebea9  call 0xee79c
    X86_AT(c, 0xebea9u);
    push32(c, 0xebeaeu); f_000ee79c(c); X86_RET(c, 0xebeaeu);
    X86_TICK(c, 10);
    // 0ebeae  xchg edi, eax
    X86_AT(c, 0xebeaeu);
    { uint32_t t = c.r[7]; c.r[7] = c.r[0]; c.r[0] = t; }
    // 0ebeaf  cmp edi, 0xffffffff
    X86_AT(c, 0xebeafu);
    (void)x86_sub(c, c.r[7], 0xFFFFFFFFu, 0, 4);
    // 0ebeb2  je 0xebd8f
    X86_AT(c, 0xebeb2u);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xebd8fu); goto L_ebd8f; }
    X86_TICK(c, 11);
    // 0ebeb8  mov dword ptr [0xceca0], edi
    X86_AT(c, 0xebeb8u);
    wr32((c.sbase[3] + (uint32_t)(0xCECA0u)), c.r[7]);
    // 0ebebe  mov edx, edi
    X86_AT(c, 0xebebeu);
    c.r[2] = c.r[7];
    // 0ebec0  cmp edx, 3
    X86_AT(c, 0xebec0u);
    (void)x86_sub(c, c.r[2], 0x3u, 0, 4);
    // 0ebec3  ja 0xebf00
    X86_AT(c, 0xebec3u);
    if (x86_cc(c, 7)) { goto L_ebf00; }
    X86_TICK(c, 7);
    // 0ebec5  jmp dword ptr cs:[edx*4 + 0xebecd]
    X86_AT(c, 0xebec5u);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xEBECDu)));
      switch (t) {
      case 0xebeddu: goto L_ebedd;
      case 0xebee4u: goto L_ebee4;
      case 0xebeebu: goto L_ebeeb;
      case 0xebef2u: goto L_ebef2;
      default: x86_jump(c, t); return; } }
L_ebedd:
    X86_TICK(c, 9);
    // 0ebedd  push 0x2e30
    X86_AT(c, 0xebeddu);
    { uint32_t v = 0x2E30u; push32(c, v); }
    // 0ebee2  jmp 0xebef7
    X86_AT(c, 0xebee2u);
    goto L_ebef7;
L_ebee4:
    X86_TICK(c, 9);
    // 0ebee4  push 0x2e40
    X86_AT(c, 0xebee4u);
    { uint32_t v = 0x2E40u; push32(c, v); }
    // 0ebee9  jmp 0xebef7
    X86_AT(c, 0xebee9u);
    goto L_ebef7;
L_ebeeb:
    X86_TICK(c, 9);
    // 0ebeeb  push 0x2e50
    X86_AT(c, 0xebeebu);
    { uint32_t v = 0x2E50u; push32(c, v); }
    // 0ebef0  jmp 0xebef7
    X86_AT(c, 0xebef0u);
    goto L_ebef7;
L_ebef2:
    X86_TICK(c, 2);
    // 0ebef2  push 0x2e60
    X86_AT(c, 0xebef2u);
    { uint32_t v = 0x2E60u; push32(c, v); }
L_ebef7:
    X86_TICK(c, 7);
    // 0ebef7  call 0xe23cc
    X86_AT(c, 0xebef7u);
    push32(c, 0xebefcu); f_000e23cc(c); X86_RET(c, 0xebefcu);
    X86_TICK(c, 5);
    // 0ebefc  xchg edi, eax
    X86_AT(c, 0xebefcu);
    { uint32_t t = c.r[7]; c.r[7] = c.r[0]; c.r[0] = t; }
    // 0ebefd  add esp, 4
    X86_AT(c, 0xebefdu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
L_ebf00:
    X86_TICK(c, 7);
    // 0ebf00  and edi, edi
    X86_AT(c, 0xebf00u);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & c.r[7], 4); }
    // 0ebf02  je 0xebf2e
    X86_AT(c, 0xebf02u);
    if (x86_cc(c, 4)) { goto L_ebf2e; }
    X86_TICK(c, 9);
    // 0ebf04  push 0x2e70
    X86_AT(c, 0xebf04u);
    { uint32_t v = 0x2E70u; push32(c, v); }
    // 0ebf09  call 0xe75f8
    X86_AT(c, 0xebf09u);
    push32(c, 0xebf0eu); f_000e75f8(c); X86_RET(c, 0xebf0eu);
    X86_TICK(c, 2);
    // 0ebf0e  add esp, 4
    X86_AT(c, 0xebf0eu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
L_ebf11:
    X86_TICK(c, 9);
    // 0ebf11  push 4
    X86_AT(c, 0xebf11u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ebf13  call 0xe4b60
    X86_AT(c, 0xebf13u);
    push32(c, 0xebf18u); f_000e4b60(c); X86_RET(c, 0xebf18u);
    X86_TICK(c, 9);
    // 0ebf18  add esp, 4
    X86_AT(c, 0xebf18u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0ebf1b  and al, al
    X86_AT(c, 0xebf1bu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & g8(c, 0), 1)); }
    // 0ebf1d  je 0xebf11
    X86_AT(c, 0xebf1du);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xebf11u); goto L_ebf11; }
L_ebf1f:
    X86_TICK(c, 9);
    // 0ebf1f  push 4
    X86_AT(c, 0xebf1fu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ebf21  call 0xe693c
    X86_AT(c, 0xebf21u);
    push32(c, 0xebf26u); f_000e693c(c); X86_RET(c, 0xebf26u);
L_ebf26:
    X86_TICK(c, 9);
    // 0ebf26  add esp, 4
    X86_AT(c, 0xebf26u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0ebf29  jmp 0xebd8f
    X86_AT(c, 0xebf29u);
    X86_POLL(c, 0xebd8fu); goto L_ebd8f;
L_ebf2e:
    X86_TICK(c, 7);
    // 0ebf2e  call 0xe0a78
    X86_AT(c, 0xebf2eu);
    push32(c, 0xebf33u); f_000e0a78(c); X86_RET(c, 0xebf33u);
    X86_TICK(c, 7);
    // 0ebf33  call 0xfbb44
    X86_AT(c, 0xebf33u);
    push32(c, 0xebf38u); f_000fbb44(c); X86_RET(c, 0xebf38u);
    X86_TICK(c, 7);
    // 0ebf38  call 0xeade4
    X86_AT(c, 0xebf38u);
    push32(c, 0xebf3du); f_000eade4(c); X86_RET(c, 0xebf3du);
    X86_TICK(c, 7);
    // 0ebf3d  call 0xe95e0
    X86_AT(c, 0xebf3du);
    push32(c, 0xebf42u); f_000e95e0(c); X86_RET(c, 0xebf42u);
    X86_TICK(c, 7);
    // 0ebf42  call 0xe9a0c
    X86_AT(c, 0xebf42u);
    push32(c, 0xebf47u); f_000e9a0c(c); X86_RET(c, 0xebf47u);
    X86_TICK(c, 7);
    // 0ebf47  jmp 0xebd8f
    X86_AT(c, 0xebf47u);
    X86_POLL(c, 0xebd8fu); goto L_ebd8f;
    x86_fault(c, 0xebf26u, "ran off the end of a function");
}
void f_000ebf4c(X86Cpu& c) {
    X86_TICK(c, 12);
    // 0ebf4c  mov dword ptr [0xcde44], 0
    X86_AT(c, 0xebf4cu);
    wr32((c.sbase[3] + (uint32_t)(0xCDE44u)), 0x0u);
    // 0ebf56  ret 
    X86_AT(c, 0xebf56u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xebf4cu, "ran off the end of a function");
}
void f_000ebf74(X86Cpu& c) {
    X86_TICK(c, 29);
    // 0ebf74  push ebp
    X86_AT(c, 0xebf74u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0ebf75  mov ebp, esp
    X86_AT(c, 0xebf75u);
    c.r[5] = c.r[4];
    // 0ebf77  sub esp, 8
    X86_AT(c, 0xebf77u);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, 0x8u, 0, 4); }
    // 0ebf7a  push ebx
    X86_AT(c, 0xebf7au);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0ebf7b  push esi
    X86_AT(c, 0xebf7bu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0ebf7c  push edi
    X86_AT(c, 0xebf7cu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0ebf7d  push 9
    X86_AT(c, 0xebf7du);
    { uint32_t v = 0x9u; push32(c, v); }
    // 0ebf7f  push 0x2d
    X86_AT(c, 0xebf7fu);
    { uint32_t v = 0x2Du; push32(c, v); }
    // 0ebf81  push 3
    X86_AT(c, 0xebf81u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0ebf83  push 2
    X86_AT(c, 0xebf83u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0ebf85  push 4
    X86_AT(c, 0xebf85u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ebf87  call 0xe739c
    X86_AT(c, 0xebf87u);
    push32(c, 0xebf8cu); f_000e739c(c); X86_RET(c, 0xebf8cu);
    X86_TICK(c, 13);
    // 0ebf8c  push 3
    X86_AT(c, 0xebf8cu);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0ebf8e  push 2
    X86_AT(c, 0xebf8eu);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0ebf90  push 4
    X86_AT(c, 0xebf90u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ebf92  call 0xe7260
    X86_AT(c, 0xebf92u);
    push32(c, 0xebf97u); f_000e7260(c); X86_RET(c, 0xebf97u);
    X86_TICK(c, 11);
    // 0ebf97  push 0xe
    X86_AT(c, 0xebf97u);
    { uint32_t v = 0xEu; push32(c, v); }
    // 0ebf99  push 4
    X86_AT(c, 0xebf99u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ebf9b  call 0xe74d8
    X86_AT(c, 0xebf9bu);
    push32(c, 0xebfa0u); f_000e74d8(c); X86_RET(c, 0xebfa0u);
    X86_TICK(c, 9);
    // 0ebfa0  push 4
    X86_AT(c, 0xebfa0u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ebfa2  call 0xe693c
    X86_AT(c, 0xebfa2u);
    push32(c, 0xebfa7u); f_000e693c(c); X86_RET(c, 0xebfa7u);
    X86_TICK(c, 11);
    // 0ebfa7  push 0x30d4
    X86_AT(c, 0xebfa7u);
    { uint32_t v = 0x30D4u; push32(c, v); }
    // 0ebfac  push 4
    X86_AT(c, 0xebfacu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ebfae  call 0xe5654
    X86_AT(c, 0xebfaeu);
    push32(c, 0xebfb3u); f_000e5654(c); X86_RET(c, 0xebfb3u);
    X86_TICK(c, 11);
    // 0ebfb3  push 0xb
    X86_AT(c, 0xebfb3u);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0ebfb5  push 4
    X86_AT(c, 0xebfb5u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ebfb7  call 0xe74d8
    X86_AT(c, 0xebfb7u);
    push32(c, 0xebfbcu); f_000e74d8(c); X86_RET(c, 0xebfbcu);
    X86_TICK(c, 11);
    // 0ebfbc  add esp, 0x3c
    X86_AT(c, 0xebfbcu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x3Cu, 0, 4); }
    // 0ebfbf  push 4
    X86_AT(c, 0xebfbfu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ebfc1  call 0xe693c
    X86_AT(c, 0xebfc1u);
    push32(c, 0xebfc6u); f_000e693c(c); X86_RET(c, 0xebfc6u);
    X86_TICK(c, 4);
    // 0ebfc6  sub edi, edi
    X86_AT(c, 0xebfc6u);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
    // 0ebfc8  add esp, 4
    X86_AT(c, 0xebfc8u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
L_ebfcb:
    X86_TICK(c, 7);
    // 0ebfcb  cmp edi, 4
    X86_AT(c, 0xebfcbu);
    (void)x86_sub(c, c.r[7], 0x4u, 0, 4);
    // 0ebfce  jge 0xec0fd
    X86_AT(c, 0xebfceu);
    if (x86_cc(c, 13)) { goto L_ec0fd; }
    X86_TICK(c, 19);
    // 0ebfd4  mov esi, 0xffffffff
    X86_AT(c, 0xebfd4u);
    c.r[6] = 0xFFFFFFFFu;
    // 0ebfd9  lea eax, [edi + 4]
    X86_AT(c, 0xebfd9u);
    c.r[0] = (uint32_t)(c.r[7] + 0x4u);
    // 0ebfdc  push eax
    X86_AT(c, 0xebfdcu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ebfdd  push 1
    X86_AT(c, 0xebfddu);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0ebfdf  push 4
    X86_AT(c, 0xebfdfu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ebfe1  mov ebx, eax
    X86_AT(c, 0xebfe1u);
    c.r[3] = c.r[0];
    // 0ebfe3  call 0xe7260
    X86_AT(c, 0xebfe3u);
    push32(c, 0xebfe8u); f_000e7260(c); X86_RET(c, 0xebfe8u);
    X86_TICK(c, 15);
    // 0ebfe8  push 2
    X86_AT(c, 0xebfe8u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0ebfea  lea eax, [edi + 1]
    X86_AT(c, 0xebfeau);
    c.r[0] = (uint32_t)(c.r[7] + 0x1u);
    // 0ebfed  push eax
    X86_AT(c, 0xebfedu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ebfee  push 4
    X86_AT(c, 0xebfeeu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ebff0  call 0xe5630
    X86_AT(c, 0xebff0u);
    push32(c, 0xebff5u); f_000e5630(c); X86_RET(c, 0xebff5u);
    X86_TICK(c, 11);
    // 0ebff5  push 0x30f6
    X86_AT(c, 0xebff5u);
    { uint32_t v = 0x30F6u; push32(c, v); }
    // 0ebffa  push 4
    X86_AT(c, 0xebffau);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ebffc  call 0xe6cb0
    X86_AT(c, 0xebffcu);
    push32(c, 0xec001u); f_000e6cb0(c); X86_RET(c, 0xec001u);
    X86_TICK(c, 13);
    // 0ec001  push ebx
    X86_AT(c, 0xec001u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0ec002  push 8
    X86_AT(c, 0xec002u);
    { uint32_t v = 0x8u; push32(c, v); }
    // 0ec004  push 4
    X86_AT(c, 0xec004u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ec006  call 0xe7260
    X86_AT(c, 0xec006u);
    push32(c, 0xec00bu); f_000e7260(c); X86_RET(c, 0xec00bu);
    X86_TICK(c, 25);
    // 0ec00b  mov eax, edi
    X86_AT(c, 0xec00bu);
    c.r[0] = c.r[7];
    // 0ec00d  lea edx, [eax + eax*4]
    X86_AT(c, 0xec00du);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0ec010  lea edx, [eax + edx*2]
    X86_AT(c, 0xec010u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0ec013  shl edx, 5
    X86_AT(c, 0xec013u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0ec016  sub edx, eax
    X86_AT(c, 0xec016u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0ec018  add esp, 0x2c
    X86_AT(c, 0xec018u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x2Cu, 0, 4); }
    // 0ec01b  cmp byte ptr [edx + 0xcde4d], 0
    X86_AT(c, 0xec01bu);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE4Du))), 0x0u, 0, 1);
    // 0ec022  je 0xec037
    X86_AT(c, 0xec022u);
    if (x86_cc(c, 4)) { goto L_ec037; }
    X86_TICK(c, 13);
    // 0ec024  add edx, 0xcde4d
    X86_AT(c, 0xec024u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, 0xCDE4Du, 0, 4); }
    // 0ec02a  push edx
    X86_AT(c, 0xec02au);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0ec02b  push 4
    X86_AT(c, 0xec02bu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ec02d  call 0xe70ec
    X86_AT(c, 0xec02du);
    push32(c, 0xec032u); f_000e70ec(c); X86_RET(c, 0xec032u);
    X86_TICK(c, 9);
    // 0ec032  add esp, 8
    X86_AT(c, 0xec032u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0ec035  jmp 0xec05b
    X86_AT(c, 0xec035u);
    goto L_ec05b;
L_ec037:
    X86_TICK(c, 11);
    // 0ec037  push 0x30fc
    X86_AT(c, 0xec037u);
    { uint32_t v = 0x30FCu; push32(c, v); }
    // 0ec03c  push 4
    X86_AT(c, 0xec03cu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ec03e  call 0xe5654
    X86_AT(c, 0xec03eu);
    push32(c, 0xec043u); f_000e5654(c); X86_RET(c, 0xec043u);
    X86_TICK(c, 11);
    // 0ec043  push 0xb
    X86_AT(c, 0xec043u);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0ec045  push 4
    X86_AT(c, 0xec045u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ec047  call 0xe74d8
    X86_AT(c, 0xec047u);
    push32(c, 0xec04cu); f_000e74d8(c); X86_RET(c, 0xec04cu);
    X86_TICK(c, 9);
    // 0ec04c  push 4
    X86_AT(c, 0xec04cu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ec04e  call 0xe693c
    X86_AT(c, 0xec04eu);
    push32(c, 0xec053u); f_000e693c(c); X86_RET(c, 0xec053u);
    X86_TICK(c, 9);
    // 0ec053  add esp, 0x14
    X86_AT(c, 0xec053u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x14u, 0, 4); }
    // 0ec056  jmp 0xec0f7
    X86_AT(c, 0xec056u);
    goto L_ec0f7;
L_ec05b:
    X86_TICK(c, 17);
    // 0ec05b  lea eax, [edi + 4]
    X86_AT(c, 0xec05bu);
    c.r[0] = (uint32_t)(c.r[7] + 0x4u);
    // 0ec05e  push eax
    X86_AT(c, 0xec05eu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ec05f  push 0x18
    X86_AT(c, 0xec05fu);
    { uint32_t v = 0x18u; push32(c, v); }
    // 0ec061  push 4
    X86_AT(c, 0xec061u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ec063  mov ebx, eax
    X86_AT(c, 0xec063u);
    c.r[3] = c.r[0];
    // 0ec065  call 0xe7260
    X86_AT(c, 0xec065u);
    push32(c, 0xec06au); f_000e7260(c); X86_RET(c, 0xec06au);
    X86_TICK(c, 34);
    // 0ec06a  lea eax, [ebp - 1]
    X86_AT(c, 0xec06au);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFFFu);
    // 0ec06d  push eax
    X86_AT(c, 0xec06du);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ec06e  mov edx, edi
    X86_AT(c, 0xec06eu);
    c.r[2] = c.r[7];
    // 0ec070  lea ecx, [edx + edx*4]
    X86_AT(c, 0xec070u);
    c.r[1] = (uint32_t)(c.r[2] + c.r[2] * 4);
    // 0ec073  lea ecx, [edx + ecx*2]
    X86_AT(c, 0xec073u);
    c.r[1] = (uint32_t)(c.r[2] + c.r[1] * 2);
    // 0ec076  shl ecx, 5
    X86_AT(c, 0xec076u);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[1] = r; }
    // 0ec079  sub ecx, edx
    X86_AT(c, 0xec079u);
    { uint32_t v = c.r[1]; c.r[1] = x86_sub(c, v, c.r[2], 0, 4); }
    // 0ec07b  mov dl, byte ptr [ecx + 0xcde7c]
    X86_AT(c, 0xec07bu);
    s8(c, 2, rd8((c.sbase[3] + (uint32_t)(c.r[1] + 0xCDE7Cu))));
    // 0ec081  push edx
    X86_AT(c, 0xec081u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0ec082  push 3
    X86_AT(c, 0xec082u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0ec084  push 0xcf6c0
    X86_AT(c, 0xec084u);
    { uint32_t v = 0xCF6C0u; push32(c, v); }
    // 0ec089  mov dword ptr [ebp - 8], ecx
    X86_AT(c, 0xec089u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), c.r[1]);
    // 0ec08c  call 0xe53e0
    X86_AT(c, 0xec08cu);
    push32(c, 0xec091u); f_000e53e0(c); X86_RET(c, 0xec091u);
    X86_TICK(c, 11);
    // 0ec091  push eax
    X86_AT(c, 0xec091u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ec092  push 4
    X86_AT(c, 0xec092u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ec094  call 0xe6cb0
    X86_AT(c, 0xec094u);
    push32(c, 0xec099u); f_000e6cb0(c); X86_RET(c, 0xec099u);
    X86_TICK(c, 13);
    // 0ec099  push ebx
    X86_AT(c, 0xec099u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0ec09a  push 0x24
    X86_AT(c, 0xec09au);
    { uint32_t v = 0x24u; push32(c, v); }
    // 0ec09c  push 4
    X86_AT(c, 0xec09cu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ec09e  call 0xe7260
    X86_AT(c, 0xec09eu);
    push32(c, 0xec0a3u); f_000e7260(c); X86_RET(c, 0xec0a3u);
    X86_TICK(c, 25);
    // 0ec0a3  lea eax, [ebp - 1]
    X86_AT(c, 0xec0a3u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFFFu);
    // 0ec0a6  push eax
    X86_AT(c, 0xec0a6u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ec0a7  mov edx, dword ptr [ebp - 8]
    X86_AT(c, 0xec0a7u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)));
    // 0ec0aa  mov cl, byte ptr [edx + 0xcde7a]
    X86_AT(c, 0xec0aau);
    s8(c, 1, rd8((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE7Au))));
    // 0ec0b0  push ecx
    X86_AT(c, 0xec0b0u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 0ec0b1  push 4
    X86_AT(c, 0xec0b1u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ec0b3  push 0xcf2a0
    X86_AT(c, 0xec0b3u);
    { uint32_t v = 0xCF2A0u; push32(c, v); }
    // 0ec0b8  call 0xe53e0
    X86_AT(c, 0xec0b8u);
    push32(c, 0xec0bdu); f_000e53e0(c); X86_RET(c, 0xec0bdu);
    X86_TICK(c, 13);
    // 0ec0bd  add esp, 0x40
    X86_AT(c, 0xec0bdu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x40u, 0, 4); }
    // 0ec0c0  push eax
    X86_AT(c, 0xec0c0u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ec0c1  push 4
    X86_AT(c, 0xec0c1u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ec0c3  call 0xe6cb0
    X86_AT(c, 0xec0c3u);
    push32(c, 0xec0c8u); f_000e6cb0(c); X86_RET(c, 0xec0c8u);
    X86_TICK(c, 13);
    // 0ec0c8  push ebx
    X86_AT(c, 0xec0c8u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0ec0c9  push 0x30
    X86_AT(c, 0xec0c9u);
    { uint32_t v = 0x30u; push32(c, v); }
    // 0ec0cb  push 4
    X86_AT(c, 0xec0cbu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ec0cd  call 0xe7260
    X86_AT(c, 0xec0cdu);
    push32(c, 0xec0d2u); f_000e7260(c); X86_RET(c, 0xec0d2u);
    X86_TICK(c, 25);
    // 0ec0d2  lea ebx, [ebp - 1]
    X86_AT(c, 0xec0d2u);
    c.r[3] = (uint32_t)(c.r[5] + 0xFFFFFFFFu);
    // 0ec0d5  push ebx
    X86_AT(c, 0xec0d5u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0ec0d6  mov eax, dword ptr [ebp - 8]
    X86_AT(c, 0xec0d6u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)));
    // 0ec0d9  mov al, byte ptr [eax + 0xcde7b]
    X86_AT(c, 0xec0d9u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[0] + 0xCDE7Bu))));
    // 0ec0df  push eax
    X86_AT(c, 0xec0dfu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ec0e0  push 4
    X86_AT(c, 0xec0e0u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ec0e2  push 0xcf4b0
    X86_AT(c, 0xec0e2u);
    { uint32_t v = 0xCF4B0u; push32(c, v); }
    // 0ec0e7  call 0xe53e0
    X86_AT(c, 0xec0e7u);
    push32(c, 0xec0ecu); f_000e53e0(c); X86_RET(c, 0xec0ecu);
    X86_TICK(c, 11);
    // 0ec0ec  push eax
    X86_AT(c, 0xec0ecu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ec0ed  push 4
    X86_AT(c, 0xec0edu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ec0ef  call 0xe6cb0
    X86_AT(c, 0xec0efu);
    push32(c, 0xec0f4u); f_000e6cb0(c); X86_RET(c, 0xec0f4u);
    X86_TICK(c, 2);
    // 0ec0f4  add esp, 0x2c
    X86_AT(c, 0xec0f4u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x2Cu, 0, 4); }
L_ec0f7:
    X86_TICK(c, 9);
    // 0ec0f7  inc edi
    X86_AT(c, 0xec0f7u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0ec0f8  jmp 0xebfcb
    X86_AT(c, 0xec0f8u);
    X86_POLL(c, 0xebfcbu); goto L_ebfcb;
L_ec0fd:
    X86_TICK(c, 9);
    // 0ec0fd  push 0x3118
    X86_AT(c, 0xec0fdu);
    { uint32_t v = 0x3118u; push32(c, v); }
    // 0ec102  call 0xe75f8
    X86_AT(c, 0xec102u);
    push32(c, 0xec107u); f_000e75f8(c); X86_RET(c, 0xec107u);
    X86_TICK(c, 2);
    // 0ec107  add esp, 4
    X86_AT(c, 0xec107u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
L_ec10a:
    X86_TICK(c, 9);
    // 0ec10a  push 4
    X86_AT(c, 0xec10au);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ec10c  call 0xe4b60
    X86_AT(c, 0xec10cu);
    push32(c, 0xec111u); f_000e4b60(c); X86_RET(c, 0xec111u);
    X86_TICK(c, 9);
    // 0ec111  add esp, 4
    X86_AT(c, 0xec111u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0ec114  and al, al
    X86_AT(c, 0xec114u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & g8(c, 0), 1)); }
    // 0ec116  je 0xec10a
    X86_AT(c, 0xec116u);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xec10au); goto L_ec10a; }
    X86_TICK(c, 9);
    // 0ec118  push 2
    X86_AT(c, 0xec118u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0ec11a  call 0xe6c68
    X86_AT(c, 0xec11au);
    push32(c, 0xec11fu); f_000e6c68(c); X86_RET(c, 0xec11fu);
    X86_TICK(c, 9);
    // 0ec11f  push 4
    X86_AT(c, 0xec11fu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ec121  call 0xe693c
    X86_AT(c, 0xec121u);
    push32(c, 0xec126u); f_000e693c(c); X86_RET(c, 0xec126u);
    X86_TICK(c, 17);
    // 0ec126  push 0x17
    X86_AT(c, 0xec126u);
    { uint32_t v = 0x17u; push32(c, v); }
    // 0ec128  push 0x4d
    X86_AT(c, 0xec128u);
    { uint32_t v = 0x4Du; push32(c, v); }
    // 0ec12a  push 3
    X86_AT(c, 0xec12au);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0ec12c  push 0
    X86_AT(c, 0xec12cu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0ec12e  push 4
    X86_AT(c, 0xec12eu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ec130  call 0xe739c
    X86_AT(c, 0xec130u);
    push32(c, 0xec135u); f_000e739c(c); X86_RET(c, 0xec135u);
    X86_TICK(c, 30);
    // 0ec135  add esp, 0x1c
    X86_AT(c, 0xec135u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x1Cu, 0, 4); }
    // 0ec138  pop edi
    X86_AT(c, 0xec138u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0ec139  pop esi
    X86_AT(c, 0xec139u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0ec13a  pop ebx
    X86_AT(c, 0xec13au);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0ec13b  leave 
    X86_AT(c, 0xec13bu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0ec13c  ret 
    X86_AT(c, 0xec13cu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xebf74u, "ran off the end of a function");
}
void f_000ec140(X86Cpu& c) {
    X86_TICK(c, 243);
    // 0ec140  push ebp
    X86_AT(c, 0xec140u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0ec141  mov ebp, esp
    X86_AT(c, 0xec141u);
    c.r[5] = c.r[4];
    // 0ec143  sub esp, 0x4c
    X86_AT(c, 0xec143u);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, 0x4Cu, 0, 4); }
    // 0ec146  push ebx
    X86_AT(c, 0xec146u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0ec147  push esi
    X86_AT(c, 0xec147u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0ec148  push edi
    X86_AT(c, 0xec148u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0ec149  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0xec149u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0ec14c  sub eax, eax
    X86_AT(c, 0xec14cu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0ec14e  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0xec14eu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
    // 0ec151  mov esi, 0x1e
    X86_AT(c, 0xec151u);
    c.r[6] = 0x1Eu;
    // 0ec156  mov edx, edi
    X86_AT(c, 0xec156u);
    c.r[2] = c.r[7];
    // 0ec158  lea ecx, [edx + edx*4]
    X86_AT(c, 0xec158u);
    c.r[1] = (uint32_t)(c.r[2] + c.r[2] * 4);
    // 0ec15b  lea ecx, [edx + ecx*2]
    X86_AT(c, 0xec15bu);
    c.r[1] = (uint32_t)(c.r[2] + c.r[1] * 2);
    // 0ec15e  shl ecx, 5
    X86_AT(c, 0xec15eu);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[1] = r; }
    // 0ec161  sub ecx, edx
    X86_AT(c, 0xec161u);
    { uint32_t v = c.r[1]; c.r[1] = x86_sub(c, v, c.r[2], 0, 4); }
    // 0ec163  mov byte ptr [ecx + 0xcde4c], al
    X86_AT(c, 0xec163u);
    wr8((c.sbase[3] + (uint32_t)(c.r[1] + 0xCDE4Cu)), g8(c, 0));
    // 0ec169  mov edx, dword ptr [0x7a6b4]
    X86_AT(c, 0xec169u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(0x7A6B4u)));
    // 0ec16f  mov dword ptr [ecx + 0xcdf83], edx
    X86_AT(c, 0xec16fu);
    wr32((c.sbase[3] + (uint32_t)(c.r[1] + 0xCDF83u)), c.r[2]);
    // 0ec175  mov dword ptr [ecx + 0xcde56], eax
    X86_AT(c, 0xec175u);
    wr32((c.sbase[3] + (uint32_t)(c.r[1] + 0xCDE56u)), c.r[0]);
    // 0ec17b  mov dword ptr [ecx + 0xcde5a], eax
    X86_AT(c, 0xec17bu);
    wr32((c.sbase[3] + (uint32_t)(c.r[1] + 0xCDE5Au)), c.r[0]);
    // 0ec181  mov dword ptr [ecx + 0xcde5e], eax
    X86_AT(c, 0xec181u);
    wr32((c.sbase[3] + (uint32_t)(c.r[1] + 0xCDE5Eu)), c.r[0]);
    // 0ec187  mov edx, 0xa
    X86_AT(c, 0xec187u);
    c.r[2] = 0xAu;
    // 0ec18c  mov dword ptr [ecx + 0xcde62], edx
    X86_AT(c, 0xec18cu);
    wr32((c.sbase[3] + (uint32_t)(c.r[1] + 0xCDE62u)), c.r[2]);
    // 0ec192  mov dword ptr [ecx + 0xcde66], edx
    X86_AT(c, 0xec192u);
    wr32((c.sbase[3] + (uint32_t)(c.r[1] + 0xCDE66u)), c.r[2]);
    // 0ec198  mov dword ptr [ecx + 0xcde6a], edx
    X86_AT(c, 0xec198u);
    wr32((c.sbase[3] + (uint32_t)(c.r[1] + 0xCDE6Au)), c.r[2]);
    // 0ec19e  mov dword ptr [ecx + 0xcde6e], edx
    X86_AT(c, 0xec19eu);
    wr32((c.sbase[3] + (uint32_t)(c.r[1] + 0xCDE6Eu)), c.r[2]);
    // 0ec1a4  mov dword ptr [ecx + 0xcde72], edx
    X86_AT(c, 0xec1a4u);
    wr32((c.sbase[3] + (uint32_t)(c.r[1] + 0xCDE72u)), c.r[2]);
    // 0ec1aa  mov dword ptr [ecx + 0xcde76], edx
    X86_AT(c, 0xec1aau);
    wr32((c.sbase[3] + (uint32_t)(c.r[1] + 0xCDE76u)), c.r[2]);
    // 0ec1b0  mov byte ptr [ecx + 0xcde7a], al
    X86_AT(c, 0xec1b0u);
    wr8((c.sbase[3] + (uint32_t)(c.r[1] + 0xCDE7Au)), g8(c, 0));
    // 0ec1b6  mov byte ptr [ecx + 0xcde7b], al
    X86_AT(c, 0xec1b6u);
    wr8((c.sbase[3] + (uint32_t)(c.r[1] + 0xCDE7Bu)), g8(c, 0));
    // 0ec1bc  mov byte ptr [ecx + 0xcde7c], al
    X86_AT(c, 0xec1bcu);
    wr8((c.sbase[3] + (uint32_t)(c.r[1] + 0xCDE7Cu)), g8(c, 0));
    // 0ec1c2  mov edx, 0x41
    X86_AT(c, 0xec1c2u);
    c.r[2] = 0x41u;
    // 0ec1c7  mov dword ptr [ecx + 0xcde7d], edx
    X86_AT(c, 0xec1c7u);
    wr32((c.sbase[3] + (uint32_t)(c.r[1] + 0xCDE7Du)), c.r[2]);
    // 0ec1cd  mov dword ptr [ecx + 0xcde81], eax
    X86_AT(c, 0xec1cdu);
    wr32((c.sbase[3] + (uint32_t)(c.r[1] + 0xCDE81u)), c.r[0]);
    // 0ec1d3  mov dword ptr [ecx + 0xcde85], 0x190
    X86_AT(c, 0xec1d3u);
    wr32((c.sbase[3] + (uint32_t)(c.r[1] + 0xCDE85u)), 0x190u);
    // 0ec1dd  mov dword ptr [ecx + 0xcde89], eax
    X86_AT(c, 0xec1ddu);
    wr32((c.sbase[3] + (uint32_t)(c.r[1] + 0xCDE89u)), c.r[0]);
    // 0ec1e3  mov dword ptr [ecx + 0xcde8d], eax
    X86_AT(c, 0xec1e3u);
    wr32((c.sbase[3] + (uint32_t)(c.r[1] + 0xCDE8Du)), c.r[0]);
    // 0ec1e9  mov dword ptr [ecx + 0xcde91], eax
    X86_AT(c, 0xec1e9u);
    wr32((c.sbase[3] + (uint32_t)(c.r[1] + 0xCDE91u)), c.r[0]);
    // 0ec1ef  mov dword ptr [ecx + 0xcde95], eax
    X86_AT(c, 0xec1efu);
    wr32((c.sbase[3] + (uint32_t)(c.r[1] + 0xCDE95u)), c.r[0]);
    // 0ec1f5  mov dword ptr [ecx + 0xcde99], 2
    X86_AT(c, 0xec1f5u);
    wr32((c.sbase[3] + (uint32_t)(c.r[1] + 0xCDE99u)), 0x2u);
    // 0ec1ff  mov dword ptr [ecx + 0xcde9d], eax
    X86_AT(c, 0xec1ffu);
    wr32((c.sbase[3] + (uint32_t)(c.r[1] + 0xCDE9Du)), c.r[0]);
    // 0ec205  mov byte ptr [ecx + 0xcdea1], dl
    X86_AT(c, 0xec205u);
    wr8((c.sbase[3] + (uint32_t)(c.r[1] + 0xCDEA1u)), g8(c, 2));
    // 0ec20b  mov byte ptr [ecx + 0xcdebe], dl
    X86_AT(c, 0xec20bu);
    wr8((c.sbase[3] + (uint32_t)(c.r[1] + 0xCDEBEu)), g8(c, 2));
    // 0ec211  mov eax, edi
    X86_AT(c, 0xec211u);
    c.r[0] = c.r[7];
    // 0ec213  lea edx, [eax + eax*4]
    X86_AT(c, 0xec213u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0ec216  lea edx, [eax + edx*2]
    X86_AT(c, 0xec216u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0ec219  shl edx, 5
    X86_AT(c, 0xec219u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0ec21c  sub edx, eax
    X86_AT(c, 0xec21cu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0ec21e  mov dword ptr [edx + 0xcdea2], 1
    X86_AT(c, 0xec21eu);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDEA2u)), 0x1u);
    // 0ec228  mov dword ptr [edx + 0xcdea6], 1
    X86_AT(c, 0xec228u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDEA6u)), 0x1u);
    // 0ec232  sub eax, eax
    X86_AT(c, 0xec232u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0ec234  mov dword ptr [edx + 0xcdeaa], eax
    X86_AT(c, 0xec234u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDEAAu)), c.r[0]);
    // 0ec23a  mov dword ptr [edx + 0xcdeae], eax
    X86_AT(c, 0xec23au);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDEAEu)), c.r[0]);
    // 0ec240  mov dword ptr [edx + 0xcdeb2], eax
    X86_AT(c, 0xec240u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDEB2u)), c.r[0]);
    // 0ec246  mov dword ptr [edx + 0xcdeb6], eax
    X86_AT(c, 0xec246u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDEB6u)), c.r[0]);
    // 0ec24c  mov dword ptr [edx + 0xcdeba], eax
    X86_AT(c, 0xec24cu);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDEBAu)), c.r[0]);
    // 0ec252  mov dword ptr [edx + 0xcdebf], 1
    X86_AT(c, 0xec252u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDEBFu)), 0x1u);
    // 0ec25c  mov dword ptr [edx + 0xcdec3], 1
    X86_AT(c, 0xec25cu);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDEC3u)), 0x1u);
    // 0ec266  mov dword ptr [edx + 0xcdec7], eax
    X86_AT(c, 0xec266u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDEC7u)), c.r[0]);
    // 0ec26c  mov dword ptr [edx + 0xcdecb], eax
    X86_AT(c, 0xec26cu);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDECBu)), c.r[0]);
    // 0ec272  mov dword ptr [edx + 0xcdecf], eax
    X86_AT(c, 0xec272u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDECFu)), c.r[0]);
    // 0ec278  mov dword ptr [edx + 0xcded3], eax
    X86_AT(c, 0xec278u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDED3u)), c.r[0]);
    // 0ec27e  mov dword ptr [edx + 0xcded7], eax
    X86_AT(c, 0xec27eu);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDED7u)), c.r[0]);
    // 0ec284  mov dword ptr [edx + 0xcdedb], eax
    X86_AT(c, 0xec284u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDEDBu)), c.r[0]);
    // 0ec28a  mov dword ptr [edx + 0xcdedf], eax
    X86_AT(c, 0xec28au);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDEDFu)), c.r[0]);
    // 0ec290  mov dword ptr [edx + 0xcdee3], eax
    X86_AT(c, 0xec290u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDEE3u)), c.r[0]);
    // 0ec296  mov dword ptr [edx + 0xcdee7], eax
    X86_AT(c, 0xec296u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDEE7u)), c.r[0]);
    // 0ec29c  mov dword ptr [edx + 0xcdeeb], eax
    X86_AT(c, 0xec29cu);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDEEBu)), c.r[0]);
    // 0ec2a2  mov dword ptr [edx + 0xcdeef], eax
    X86_AT(c, 0xec2a2u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDEEFu)), c.r[0]);
    // 0ec2a8  mov dword ptr [edx + 0xcdef3], eax
    X86_AT(c, 0xec2a8u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDEF3u)), c.r[0]);
    // 0ec2ae  mov dword ptr [edx + 0xcdef7], eax
    X86_AT(c, 0xec2aeu);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDEF7u)), c.r[0]);
    // 0ec2b4  mov dword ptr [edx + 0xcdefb], eax
    X86_AT(c, 0xec2b4u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDEFBu)), c.r[0]);
    // 0ec2ba  mov dword ptr [edx + 0xcdeff], eax
    X86_AT(c, 0xec2bau);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDEFFu)), c.r[0]);
    // 0ec2c0  mov dword ptr [edx + 0xcdf03], eax
    X86_AT(c, 0xec2c0u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF03u)), c.r[0]);
    // 0ec2c6  mov dword ptr [edx + 0xcdf07], eax
    X86_AT(c, 0xec2c6u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF07u)), c.r[0]);
    // 0ec2cc  mov dword ptr [edx + 0xcdf0b], eax
    X86_AT(c, 0xec2ccu);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF0Bu)), c.r[0]);
    // 0ec2d2  mov dword ptr [edx + 0xcdf0f], eax
    X86_AT(c, 0xec2d2u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF0Fu)), c.r[0]);
    // 0ec2d8  mov dword ptr [edx + 0xcdf13], eax
    X86_AT(c, 0xec2d8u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF13u)), c.r[0]);
    // 0ec2de  mov dword ptr [edx + 0xcdf17], eax
    X86_AT(c, 0xec2deu);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF17u)), c.r[0]);
    // 0ec2e4  mov dword ptr [edx + 0xcdf1b], eax
    X86_AT(c, 0xec2e4u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF1Bu)), c.r[0]);
    // 0ec2ea  mov dword ptr [edx + 0xcdf1f], eax
    X86_AT(c, 0xec2eau);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF1Fu)), c.r[0]);
    // 0ec2f0  mov eax, edi
    X86_AT(c, 0xec2f0u);
    c.r[0] = c.r[7];
    // 0ec2f2  lea edx, [eax + eax*4]
    X86_AT(c, 0xec2f2u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0ec2f5  lea edx, [eax + edx*2]
    X86_AT(c, 0xec2f5u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0ec2f8  shl edx, 5
    X86_AT(c, 0xec2f8u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0ec2fb  sub edx, eax
    X86_AT(c, 0xec2fbu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0ec2fd  sub eax, eax
    X86_AT(c, 0xec2fdu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0ec2ff  mov dword ptr [edx + 0xcdf23], eax
    X86_AT(c, 0xec2ffu);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF23u)), c.r[0]);
    // 0ec305  mov dword ptr [edx + 0xcdf27], eax
    X86_AT(c, 0xec305u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF27u)), c.r[0]);
    // 0ec30b  mov dword ptr [edx + 0xcdf2b], eax
    X86_AT(c, 0xec30bu);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF2Bu)), c.r[0]);
    // 0ec311  mov dword ptr [edx + 0xcdf2f], eax
    X86_AT(c, 0xec311u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF2Fu)), c.r[0]);
    // 0ec317  mov dword ptr [edx + 0xcdf33], eax
    X86_AT(c, 0xec317u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF33u)), c.r[0]);
    // 0ec31d  mov dword ptr [edx + 0xcdf37], eax
    X86_AT(c, 0xec31du);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF37u)), c.r[0]);
    // 0ec323  mov dword ptr [edx + 0xcdf3b], eax
    X86_AT(c, 0xec323u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF3Bu)), c.r[0]);
    // 0ec329  mov dword ptr [edx + 0xcdf3f], eax
    X86_AT(c, 0xec329u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF3Fu)), c.r[0]);
    // 0ec32f  mov dword ptr [edx + 0xcdf43], eax
    X86_AT(c, 0xec32fu);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF43u)), c.r[0]);
    // 0ec335  mov dword ptr [edx + 0xcdf47], eax
    X86_AT(c, 0xec335u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF47u)), c.r[0]);
    // 0ec33b  mov dword ptr [edx + 0xcdf4b], eax
    X86_AT(c, 0xec33bu);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF4Bu)), c.r[0]);
    // 0ec341  mov dword ptr [edx + 0xcdf53], eax
    X86_AT(c, 0xec341u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF53u)), c.r[0]);
    // 0ec347  mov dword ptr [edx + 0xcdf57], eax
    X86_AT(c, 0xec347u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF57u)), c.r[0]);
    // 0ec34d  mov dword ptr [edx + 0xcdf5b], eax
    X86_AT(c, 0xec34du);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF5Bu)), c.r[0]);
    // 0ec353  mov dword ptr [edx + 0xcdf5f], eax
    X86_AT(c, 0xec353u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF5Fu)), c.r[0]);
    // 0ec359  mov dword ptr [edx + 0xcdf63], eax
    X86_AT(c, 0xec359u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF63u)), c.r[0]);
    // 0ec35f  mov dword ptr [edx + 0xcdf67], eax
    X86_AT(c, 0xec35fu);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF67u)), c.r[0]);
    // 0ec365  mov ecx, 0x14
    X86_AT(c, 0xec365u);
    c.r[1] = 0x14u;
    // 0ec36a  mov dword ptr [edx + 0xcdf6b], ecx
    X86_AT(c, 0xec36au);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF6Bu)), c.r[1]);
    // 0ec370  mov dword ptr [edx + 0xcdf6f], ecx
    X86_AT(c, 0xec370u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF6Fu)), c.r[1]);
    // 0ec376  mov dword ptr [edx + 0xcdf73], eax
    X86_AT(c, 0xec376u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF73u)), c.r[0]);
    // 0ec37c  mov dword ptr [edx + 0xcdf77], eax
    X86_AT(c, 0xec37cu);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF77u)), c.r[0]);
    // 0ec382  mov dword ptr [edx + 0xcdf7b], eax
    X86_AT(c, 0xec382u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF7Bu)), c.r[0]);
    // 0ec388  mov dword ptr [edx + 0xcdf7f], eax
    X86_AT(c, 0xec388u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF7Fu)), c.r[0]);
    // 0ec38e  mov dword ptr [edx + 0xcdf87], eax
    X86_AT(c, 0xec38eu);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF87u)), c.r[0]);
    // 0ec394  mov dword ptr [edx + 0xcdf8b], eax
    X86_AT(c, 0xec394u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF8Bu)), c.r[0]);
    // 0ec39a  mov dword ptr [edx + 0xcdf8f], eax
    X86_AT(c, 0xec39au);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF8Fu)), c.r[0]);
    // 0ec3a0  mov dword ptr [edx + 0xcdf93], eax
    X86_AT(c, 0xec3a0u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF93u)), c.r[0]);
    // 0ec3a6  mov dword ptr [edx + 0xcdf97], eax
    X86_AT(c, 0xec3a6u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF97u)), c.r[0]);
    // 0ec3ac  mov dword ptr [edx + 0xcdf9b], eax
    X86_AT(c, 0xec3acu);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF9Bu)), c.r[0]);
    // 0ec3b2  mov dword ptr [ebp - 8], eax
    X86_AT(c, 0xec3b2u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), c.r[0]);
L_ec3b5:
    X86_TICK(c, 11);
    // 0ec3b5  mov eax, dword ptr [ebp - 8]
    X86_AT(c, 0xec3b5u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)));
    // 0ec3b8  cmp eax, 9
    X86_AT(c, 0xec3b8u);
    (void)x86_sub(c, c.r[0], 0x9u, 0, 4);
    // 0ec3bb  jge 0xec3c7
    X86_AT(c, 0xec3bbu);
    if (x86_cc(c, 13)) { goto L_ec3c7; }
    X86_TICK(c, 15);
    // 0ec3bd  mov byte ptr [ebp + eax*1 - 0x44], 0x20
    X86_AT(c, 0xec3bdu);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + c.r[0] + 0xFFFFFFBCu)), 0x20u);
    // 0ec3c2  inc dword ptr [ebp - 8]
    X86_AT(c, 0xec3c2u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0ec3c5  jmp 0xec3b5
    X86_AT(c, 0xec3c5u);
    X86_POLL(c, 0xec3b5u); goto L_ec3b5;
L_ec3c7:
    X86_TICK(c, 6);
    // 0ec3c7  mov eax, dword ptr [ebp - 8]
    X86_AT(c, 0xec3c7u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)));
    // 0ec3ca  mov byte ptr [ebp + eax*1 - 0x44], 0
    X86_AT(c, 0xec3cau);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + c.r[0] + 0xFFFFFFBCu)), 0x0u);
L_ec3cf:
    X86_TICK(c, 11);
    // 0ec3cf  mov edx, dword ptr [ebp - 4]
    X86_AT(c, 0xec3cfu);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0ec3d2  cmp edx, 0xa
    X86_AT(c, 0xec3d2u);
    (void)x86_sub(c, c.r[2], 0xAu, 0, 4);
    // 0ec3d5  ja 0xec3cf
    X86_AT(c, 0xec3d5u);
    if (x86_cc(c, 7)) { X86_POLL(c, 0xec3cfu); goto L_ec3cf; }
    X86_TICK(c, 7);
    // 0ec3d7  jmp dword ptr cs:[edx*4 + 0xec3df]
    X86_AT(c, 0xec3d7u);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xEC3DFu)));
      switch (t) {
      case 0xec40bu: goto L_ec40b;
      case 0xec539u: goto L_ec539;
      case 0xec678u: goto L_ec678;
      case 0xec7b7u: goto L_ec7b7;
      case 0xec8f6u: goto L_ec8f6;
      case 0xeca38u: goto L_eca38;
      case 0xecb77u: goto L_ecb77;
      case 0xece25u: goto L_ece25;
      case 0xed058u: goto L_ed058;
      case 0xed2d2u: goto L_ed2d2;
      case 0xed3a4u: goto L_ed3a4;
      default: x86_jump(c, t); return; } }
L_ec40b:
    X86_TICK(c, 11);
    // 0ec40b  push 0xe
    X86_AT(c, 0xec40bu);
    { uint32_t v = 0xEu; push32(c, v); }
    // 0ec40d  push 4
    X86_AT(c, 0xec40du);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ec40f  call 0xe74d8
    X86_AT(c, 0xec40fu);
    push32(c, 0xec414u); f_000e74d8(c); X86_RET(c, 0xec414u);
    X86_TICK(c, 2);
    // 0ec414  add esp, 8
    X86_AT(c, 0xec414u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
L_ec417:
    X86_TICK(c, 13);
    // 0ec417  push 5
    X86_AT(c, 0xec417u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0ec419  push 0x28
    X86_AT(c, 0xec419u);
    { uint32_t v = 0x28u; push32(c, v); }
    // 0ec41b  push 4
    X86_AT(c, 0xec41bu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ec41d  call 0xe7260
    X86_AT(c, 0xec41du);
    push32(c, 0xec422u); f_000e7260(c); X86_RET(c, 0xec422u);
    X86_TICK(c, 13);
    // 0ec422  push 2
    X86_AT(c, 0xec422u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0ec424  push esi
    X86_AT(c, 0xec424u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0ec425  push 4
    X86_AT(c, 0xec425u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ec427  call 0xe5630
    X86_AT(c, 0xec427u);
    push32(c, 0xec42cu); f_000e5630(c); X86_RET(c, 0xec42cu);
    X86_TICK(c, 13);
    // 0ec42c  push 6
    X86_AT(c, 0xec42cu);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0ec42e  push 0x34
    X86_AT(c, 0xec42eu);
    { uint32_t v = 0x34u; push32(c, v); }
    // 0ec430  push 4
    X86_AT(c, 0xec430u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ec432  call 0xe7260
    X86_AT(c, 0xec432u);
    push32(c, 0xec437u); f_000e7260(c); X86_RET(c, 0xec437u);
    X86_TICK(c, 29);
    // 0ec437  push 2
    X86_AT(c, 0xec437u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0ec439  mov eax, edi
    X86_AT(c, 0xec439u);
    c.r[0] = c.r[7];
    // 0ec43b  lea edx, [eax + eax*4]
    X86_AT(c, 0xec43bu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0ec43e  lea edx, [eax + edx*2]
    X86_AT(c, 0xec43eu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0ec441  shl edx, 5
    X86_AT(c, 0xec441u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0ec444  sub edx, eax
    X86_AT(c, 0xec444u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0ec446  push dword ptr [edx + 0xcde62]
    X86_AT(c, 0xec446u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE62u))); push32(c, v); }
    // 0ec44c  push 4
    X86_AT(c, 0xec44cu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ec44e  mov dword ptr [ebp - 0x4c], edx
    X86_AT(c, 0xec44eu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFB4u)), c.r[2]);
    // 0ec451  call 0xe5630
    X86_AT(c, 0xec451u);
    push32(c, 0xec456u); f_000e5630(c); X86_RET(c, 0xec456u);
    X86_TICK(c, 9);
    // 0ec456  push 4
    X86_AT(c, 0xec456u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ec458  call 0xe4b60
    X86_AT(c, 0xec458u);
    push32(c, 0xec45du); f_000e4b60(c); X86_RET(c, 0xec45du);
    X86_TICK(c, 12);
    // 0ec45d  xchg ebx, eax
    X86_AT(c, 0xec45du);
    { uint32_t t = c.r[3]; c.r[3] = c.r[0]; c.r[0] = t; }
    // 0ec45e  add esp, 0x34
    X86_AT(c, 0xec45eu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x34u, 0, 4); }
    // 0ec461  cmp bl, 5
    X86_AT(c, 0xec461u);
    (void)x86_sub(c, g8(c, 3), 0x5u, 0, 1);
    // 0ec464  je 0xec4d1
    X86_AT(c, 0xec464u);
    if (x86_cc(c, 4)) { goto L_ec4d1; }
    X86_TICK(c, 7);
    // 0ec46a  cmp bl, 6
    X86_AT(c, 0xec46au);
    (void)x86_sub(c, g8(c, 3), 0x6u, 0, 1);
    // 0ec46d  je 0xec4d1
    X86_AT(c, 0xec46du);
    if (x86_cc(c, 4)) { goto L_ec4d1; }
    X86_TICK(c, 7);
    // 0ec46f  cmp bl, 4
    X86_AT(c, 0xec46fu);
    (void)x86_sub(c, g8(c, 3), 0x4u, 0, 1);
    // 0ec472  je 0xec4d1
    X86_AT(c, 0xec472u);
    if (x86_cc(c, 4)) { goto L_ec4d1; }
    X86_TICK(c, 7);
    // 0ec474  cmp bl, 1
    X86_AT(c, 0xec474u);
    (void)x86_sub(c, g8(c, 3), 0x1u, 0, 1);
    // 0ec477  je 0xec4d1
    X86_AT(c, 0xec477u);
    if (x86_cc(c, 4)) { goto L_ec4d1; }
    X86_TICK(c, 7);
    // 0ec479  cmp bl, 7
    X86_AT(c, 0xec479u);
    (void)x86_sub(c, g8(c, 3), 0x7u, 0, 1);
    // 0ec47c  jne 0xec497
    X86_AT(c, 0xec47cu);
    if (x86_cc(c, 5)) { goto L_ec497; }
    X86_TICK(c, 15);
    // 0ec47e  mov eax, dword ptr [ebp - 0x4c]
    X86_AT(c, 0xec47eu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFB4u)));
    // 0ec481  mov edx, dword ptr [eax + 0xcde62]
    X86_AT(c, 0xec481u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0xCDE62u)));
    // 0ec487  cmp edx, 0x19
    X86_AT(c, 0xec487u);
    (void)x86_sub(c, c.r[2], 0x19u, 0, 4);
    // 0ec48a  je 0xec417
    X86_AT(c, 0xec48au);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xec417u); goto L_ec417; }
    X86_TICK(c, 7);
    // 0ec48c  and esi, esi
    X86_AT(c, 0xec48cu);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & c.r[6], 4); }
    // 0ec48e  je 0xec417
    X86_AT(c, 0xec48eu);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xec417u); goto L_ec417; }
    X86_TICK(c, 8);
    // 0ec490  inc dword ptr [eax + 0xcde62]
    X86_AT(c, 0xec490u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[0] + 0xCDE62u)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0ec496  dec esi
    X86_AT(c, 0xec496u);
    { uint32_t v = c.r[6]; c.r[6] = x86_dec(c, v, 4); }
L_ec497:
    X86_TICK(c, 7);
    // 0ec497  cmp bl, 3
    X86_AT(c, 0xec497u);
    (void)x86_sub(c, g8(c, 3), 0x3u, 0, 1);
    // 0ec49a  jne 0xec417
    X86_AT(c, 0xec49au);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xec417u); goto L_ec417; }
    X86_TICK(c, 22);
    // 0ec4a0  mov eax, edi
    X86_AT(c, 0xec4a0u);
    c.r[0] = c.r[7];
    // 0ec4a2  lea edx, [eax + eax*4]
    X86_AT(c, 0xec4a2u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0ec4a5  lea edx, [eax + edx*2]
    X86_AT(c, 0xec4a5u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0ec4a8  shl edx, 5
    X86_AT(c, 0xec4a8u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0ec4ab  sub edx, eax
    X86_AT(c, 0xec4abu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0ec4ad  mov eax, dword ptr [edx + 0xcde62]
    X86_AT(c, 0xec4adu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE62u)));
    // 0ec4b3  cmp eax, 0xa
    X86_AT(c, 0xec4b3u);
    (void)x86_sub(c, c.r[0], 0xAu, 0, 4);
    // 0ec4b6  je 0xec417
    X86_AT(c, 0xec4b6u);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xec417u); goto L_ec417; }
    X86_TICK(c, 7);
    // 0ec4bc  cmp esi, 0x1e
    X86_AT(c, 0xec4bcu);
    (void)x86_sub(c, c.r[6], 0x1Eu, 0, 4);
    // 0ec4bf  je 0xec417
    X86_AT(c, 0xec4bfu);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xec417u); goto L_ec417; }
    X86_TICK(c, 15);
    // 0ec4c5  dec dword ptr [edx + 0xcde62]
    X86_AT(c, 0xec4c5u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE62u)); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 0ec4cb  inc esi
    X86_AT(c, 0xec4cbu);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 0ec4cc  jmp 0xec417
    X86_AT(c, 0xec4ccu);
    X86_POLL(c, 0xec417u); goto L_ec417;
L_ec4d1:
    X86_TICK(c, 11);
    // 0ec4d1  push 0xb
    X86_AT(c, 0xec4d1u);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0ec4d3  push 4
    X86_AT(c, 0xec4d3u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ec4d5  call 0xe74d8
    X86_AT(c, 0xec4d5u);
    push32(c, 0xec4dau); f_000e74d8(c); X86_RET(c, 0xec4dau);
    X86_TICK(c, 13);
    // 0ec4da  push 5
    X86_AT(c, 0xec4dau);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0ec4dc  push 0x28
    X86_AT(c, 0xec4dcu);
    { uint32_t v = 0x28u; push32(c, v); }
    // 0ec4de  push 4
    X86_AT(c, 0xec4deu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ec4e0  call 0xe7260
    X86_AT(c, 0xec4e0u);
    push32(c, 0xec4e5u); f_000e7260(c); X86_RET(c, 0xec4e5u);
    X86_TICK(c, 13);
    // 0ec4e5  push 2
    X86_AT(c, 0xec4e5u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0ec4e7  push esi
    X86_AT(c, 0xec4e7u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0ec4e8  push 4
    X86_AT(c, 0xec4e8u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ec4ea  call 0xe5630
    X86_AT(c, 0xec4eau);
    push32(c, 0xec4efu); f_000e5630(c); X86_RET(c, 0xec4efu);
    X86_TICK(c, 13);
    // 0ec4ef  push 6
    X86_AT(c, 0xec4efu);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0ec4f1  push 0x34
    X86_AT(c, 0xec4f1u);
    { uint32_t v = 0x34u; push32(c, v); }
    // 0ec4f3  push 4
    X86_AT(c, 0xec4f3u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ec4f5  call 0xe7260
    X86_AT(c, 0xec4f5u);
    push32(c, 0xec4fau); f_000e7260(c); X86_RET(c, 0xec4fau);
    X86_TICK(c, 27);
    // 0ec4fa  push 2
    X86_AT(c, 0xec4fau);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0ec4fc  mov eax, edi
    X86_AT(c, 0xec4fcu);
    c.r[0] = c.r[7];
    // 0ec4fe  lea edx, [eax + eax*4]
    X86_AT(c, 0xec4feu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0ec501  lea edx, [eax + edx*2]
    X86_AT(c, 0xec501u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0ec504  shl edx, 5
    X86_AT(c, 0xec504u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0ec507  sub edx, eax
    X86_AT(c, 0xec507u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0ec509  push dword ptr [edx + 0xcde62]
    X86_AT(c, 0xec509u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE62u))); push32(c, v); }
    // 0ec50f  push 4
    X86_AT(c, 0xec50fu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ec511  call 0xe5630
    X86_AT(c, 0xec511u);
    push32(c, 0xec516u); f_000e5630(c); X86_RET(c, 0xec516u);
    X86_TICK(c, 9);
    // 0ec516  add esp, 0x38
    X86_AT(c, 0xec516u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x38u, 0, 4); }
    // 0ec519  cmp bl, 1
    X86_AT(c, 0xec519u);
    (void)x86_sub(c, g8(c, 3), 0x1u, 0, 1);
    // 0ec51c  je 0xed30f
    X86_AT(c, 0xec51cu);
    if (x86_cc(c, 4)) { goto L_ed30f; }
    X86_TICK(c, 7);
    // 0ec522  cmp bl, 6
    X86_AT(c, 0xec522u);
    (void)x86_sub(c, g8(c, 3), 0x6u, 0, 1);
    // 0ec525  je 0xec78b
    X86_AT(c, 0xec525u);
    if (x86_cc(c, 4)) { goto L_ec78b; }
    X86_TICK(c, 7);
    // 0ec52b  cmp bl, 4
    X86_AT(c, 0xec52bu);
    (void)x86_sub(c, g8(c, 3), 0x4u, 0, 1);
    // 0ec52e  jne 0xec3cf
    X86_AT(c, 0xec52eu);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xec3cfu); goto L_ec3cf; }
    X86_TICK(c, 7);
    // 0ec534  jmp 0xec78b
    X86_AT(c, 0xec534u);
    goto L_ec78b;
L_ec539:
    X86_TICK(c, 11);
    // 0ec539  push 0xe
    X86_AT(c, 0xec539u);
    { uint32_t v = 0xEu; push32(c, v); }
    // 0ec53b  push 4
    X86_AT(c, 0xec53bu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ec53d  call 0xe74d8
    X86_AT(c, 0xec53du);
    push32(c, 0xec542u); f_000e74d8(c); X86_RET(c, 0xec542u);
    X86_TICK(c, 2);
    // 0ec542  add esp, 8
    X86_AT(c, 0xec542u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
L_ec545:
    X86_TICK(c, 13);
    // 0ec545  push 5
    X86_AT(c, 0xec545u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0ec547  push 0x28
    X86_AT(c, 0xec547u);
    { uint32_t v = 0x28u; push32(c, v); }
    // 0ec549  push 4
    X86_AT(c, 0xec549u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ec54b  call 0xe7260
    X86_AT(c, 0xec54bu);
    push32(c, 0xec550u); f_000e7260(c); X86_RET(c, 0xec550u);
    X86_TICK(c, 13);
    // 0ec550  push 2
    X86_AT(c, 0xec550u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0ec552  push esi
    X86_AT(c, 0xec552u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0ec553  push 4
    X86_AT(c, 0xec553u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ec555  call 0xe5630
    X86_AT(c, 0xec555u);
    push32(c, 0xec55au); f_000e5630(c); X86_RET(c, 0xec55au);
    X86_TICK(c, 13);
    // 0ec55a  push 7
    X86_AT(c, 0xec55au);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0ec55c  push 0x34
    X86_AT(c, 0xec55cu);
    { uint32_t v = 0x34u; push32(c, v); }
    // 0ec55e  push 4
    X86_AT(c, 0xec55eu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ec560  call 0xe7260
    X86_AT(c, 0xec560u);
    push32(c, 0xec565u); f_000e7260(c); X86_RET(c, 0xec565u);
    X86_TICK(c, 29);
    // 0ec565  push 2
    X86_AT(c, 0xec565u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0ec567  mov eax, edi
    X86_AT(c, 0xec567u);
    c.r[0] = c.r[7];
    // 0ec569  lea edx, [eax + eax*4]
    X86_AT(c, 0xec569u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0ec56c  lea edx, [eax + edx*2]
    X86_AT(c, 0xec56cu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0ec56f  shl edx, 5
    X86_AT(c, 0xec56fu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0ec572  sub edx, eax
    X86_AT(c, 0xec572u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0ec574  push dword ptr [edx + 0xcde66]
    X86_AT(c, 0xec574u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE66u))); push32(c, v); }
    // 0ec57a  push 4
    X86_AT(c, 0xec57au);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ec57c  mov dword ptr [ebp - 0x4c], edx
    X86_AT(c, 0xec57cu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFB4u)), c.r[2]);
    // 0ec57f  call 0xe5630
    X86_AT(c, 0xec57fu);
    push32(c, 0xec584u); f_000e5630(c); X86_RET(c, 0xec584u);
    X86_TICK(c, 9);
    // 0ec584  push 4
    X86_AT(c, 0xec584u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ec586  call 0xe4b60
    X86_AT(c, 0xec586u);
    push32(c, 0xec58bu); f_000e4b60(c); X86_RET(c, 0xec58bu);
    X86_TICK(c, 12);
    // 0ec58b  xchg ebx, eax
    X86_AT(c, 0xec58bu);
    { uint32_t t = c.r[3]; c.r[3] = c.r[0]; c.r[0] = t; }
    // 0ec58c  add esp, 0x34
    X86_AT(c, 0xec58cu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x34u, 0, 4); }
    // 0ec58f  cmp bl, 5
    X86_AT(c, 0xec58fu);
    (void)x86_sub(c, g8(c, 3), 0x5u, 0, 1);
    // 0ec592  je 0xec5ff
    X86_AT(c, 0xec592u);
    if (x86_cc(c, 4)) { goto L_ec5ff; }
    X86_TICK(c, 7);
    // 0ec598  cmp bl, 6
    X86_AT(c, 0xec598u);
    (void)x86_sub(c, g8(c, 3), 0x6u, 0, 1);
    // 0ec59b  je 0xec5ff
    X86_AT(c, 0xec59bu);
    if (x86_cc(c, 4)) { goto L_ec5ff; }
    X86_TICK(c, 7);
    // 0ec59d  cmp bl, 4
    X86_AT(c, 0xec59du);
    (void)x86_sub(c, g8(c, 3), 0x4u, 0, 1);
    // 0ec5a0  je 0xec5ff
    X86_AT(c, 0xec5a0u);
    if (x86_cc(c, 4)) { goto L_ec5ff; }
    X86_TICK(c, 7);
    // 0ec5a2  cmp bl, 1
    X86_AT(c, 0xec5a2u);
    (void)x86_sub(c, g8(c, 3), 0x1u, 0, 1);
    // 0ec5a5  je 0xec5ff
    X86_AT(c, 0xec5a5u);
    if (x86_cc(c, 4)) { goto L_ec5ff; }
    X86_TICK(c, 7);
    // 0ec5a7  cmp bl, 7
    X86_AT(c, 0xec5a7u);
    (void)x86_sub(c, g8(c, 3), 0x7u, 0, 1);
    // 0ec5aa  jne 0xec5c5
    X86_AT(c, 0xec5aau);
    if (x86_cc(c, 5)) { goto L_ec5c5; }
    X86_TICK(c, 15);
    // 0ec5ac  mov eax, dword ptr [ebp - 0x4c]
    X86_AT(c, 0xec5acu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFB4u)));
    // 0ec5af  mov edx, dword ptr [eax + 0xcde66]
    X86_AT(c, 0xec5afu);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0xCDE66u)));
    // 0ec5b5  cmp edx, 0x19
    X86_AT(c, 0xec5b5u);
    (void)x86_sub(c, c.r[2], 0x19u, 0, 4);
    // 0ec5b8  je 0xec545
    X86_AT(c, 0xec5b8u);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xec545u); goto L_ec545; }
    X86_TICK(c, 7);
    // 0ec5ba  and esi, esi
    X86_AT(c, 0xec5bau);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & c.r[6], 4); }
    // 0ec5bc  je 0xec545
    X86_AT(c, 0xec5bcu);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xec545u); goto L_ec545; }
    X86_TICK(c, 8);
    // 0ec5be  inc dword ptr [eax + 0xcde66]
    X86_AT(c, 0xec5beu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[0] + 0xCDE66u)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0ec5c4  dec esi
    X86_AT(c, 0xec5c4u);
    { uint32_t v = c.r[6]; c.r[6] = x86_dec(c, v, 4); }
L_ec5c5:
    X86_TICK(c, 7);
    // 0ec5c5  cmp bl, 3
    X86_AT(c, 0xec5c5u);
    (void)x86_sub(c, g8(c, 3), 0x3u, 0, 1);
    // 0ec5c8  jne 0xec545
    X86_AT(c, 0xec5c8u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xec545u); goto L_ec545; }
    X86_TICK(c, 22);
    // 0ec5ce  mov eax, edi
    X86_AT(c, 0xec5ceu);
    c.r[0] = c.r[7];
    // 0ec5d0  lea edx, [eax + eax*4]
    X86_AT(c, 0xec5d0u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0ec5d3  lea edx, [eax + edx*2]
    X86_AT(c, 0xec5d3u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0ec5d6  shl edx, 5
    X86_AT(c, 0xec5d6u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0ec5d9  sub edx, eax
    X86_AT(c, 0xec5d9u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0ec5db  mov eax, dword ptr [edx + 0xcde66]
    X86_AT(c, 0xec5dbu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE66u)));
    // 0ec5e1  cmp eax, 0xa
    X86_AT(c, 0xec5e1u);
    (void)x86_sub(c, c.r[0], 0xAu, 0, 4);
    // 0ec5e4  je 0xec545
    X86_AT(c, 0xec5e4u);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xec545u); goto L_ec545; }
    X86_TICK(c, 7);
    // 0ec5ea  cmp esi, 0x1e
    X86_AT(c, 0xec5eau);
    (void)x86_sub(c, c.r[6], 0x1Eu, 0, 4);
    // 0ec5ed  je 0xec545
    X86_AT(c, 0xec5edu);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xec545u); goto L_ec545; }
    X86_TICK(c, 15);
    // 0ec5f3  dec dword ptr [edx + 0xcde66]
    X86_AT(c, 0xec5f3u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE66u)); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 0ec5f9  inc esi
    X86_AT(c, 0xec5f9u);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 0ec5fa  jmp 0xec545
    X86_AT(c, 0xec5fau);
    X86_POLL(c, 0xec545u); goto L_ec545;
L_ec5ff:
    X86_TICK(c, 11);
    // 0ec5ff  push 0xb
    X86_AT(c, 0xec5ffu);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0ec601  push 4
    X86_AT(c, 0xec601u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ec603  call 0xe74d8
    X86_AT(c, 0xec603u);
    push32(c, 0xec608u); f_000e74d8(c); X86_RET(c, 0xec608u);
    X86_TICK(c, 13);
    // 0ec608  push 5
    X86_AT(c, 0xec608u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0ec60a  push 0x28
    X86_AT(c, 0xec60au);
    { uint32_t v = 0x28u; push32(c, v); }
    // 0ec60c  push 4
    X86_AT(c, 0xec60cu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ec60e  call 0xe7260
    X86_AT(c, 0xec60eu);
    push32(c, 0xec613u); f_000e7260(c); X86_RET(c, 0xec613u);
    X86_TICK(c, 13);
    // 0ec613  push 2
    X86_AT(c, 0xec613u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0ec615  push esi
    X86_AT(c, 0xec615u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0ec616  push 4
    X86_AT(c, 0xec616u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ec618  call 0xe5630
    X86_AT(c, 0xec618u);
    push32(c, 0xec61du); f_000e5630(c); X86_RET(c, 0xec61du);
    X86_TICK(c, 13);
    // 0ec61d  push 7
    X86_AT(c, 0xec61du);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0ec61f  push 0x34
    X86_AT(c, 0xec61fu);
    { uint32_t v = 0x34u; push32(c, v); }
    // 0ec621  push 4
    X86_AT(c, 0xec621u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ec623  call 0xe7260
    X86_AT(c, 0xec623u);
    push32(c, 0xec628u); f_000e7260(c); X86_RET(c, 0xec628u);
    X86_TICK(c, 27);
    // 0ec628  push 2
    X86_AT(c, 0xec628u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0ec62a  mov eax, edi
    X86_AT(c, 0xec62au);
    c.r[0] = c.r[7];
    // 0ec62c  lea edx, [eax + eax*4]
    X86_AT(c, 0xec62cu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0ec62f  lea edx, [eax + edx*2]
    X86_AT(c, 0xec62fu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0ec632  shl edx, 5
    X86_AT(c, 0xec632u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0ec635  sub edx, eax
    X86_AT(c, 0xec635u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0ec637  push dword ptr [edx + 0xcde66]
    X86_AT(c, 0xec637u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE66u))); push32(c, v); }
    // 0ec63d  push 4
    X86_AT(c, 0xec63du);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ec63f  call 0xe5630
    X86_AT(c, 0xec63fu);
    push32(c, 0xec644u); f_000e5630(c); X86_RET(c, 0xec644u);
    X86_TICK(c, 9);
    // 0ec644  add esp, 0x38
    X86_AT(c, 0xec644u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x38u, 0, 4); }
    // 0ec647  cmp bl, 5
    X86_AT(c, 0xec647u);
    (void)x86_sub(c, g8(c, 3), 0x5u, 0, 1);
    // 0ec64a  jne 0xec658
    X86_AT(c, 0xec64au);
    if (x86_cc(c, 5)) { goto L_ec658; }
    X86_TICK(c, 9);
    // 0ec64c  mov dword ptr [ebp - 4], 0
    X86_AT(c, 0xec64cu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), 0x0u);
    // 0ec653  jmp 0xec3cf
    X86_AT(c, 0xec653u);
    X86_POLL(c, 0xec3cfu); goto L_ec3cf;
L_ec658:
    X86_TICK(c, 7);
    // 0ec658  cmp bl, 1
    X86_AT(c, 0xec658u);
    (void)x86_sub(c, g8(c, 3), 0x1u, 0, 1);
    // 0ec65b  je 0xed30f
    X86_AT(c, 0xec65bu);
    if (x86_cc(c, 4)) { goto L_ed30f; }
    X86_TICK(c, 7);
    // 0ec661  cmp bl, 6
    X86_AT(c, 0xec661u);
    (void)x86_sub(c, g8(c, 3), 0x6u, 0, 1);
    // 0ec664  je 0xec8ca
    X86_AT(c, 0xec664u);
    if (x86_cc(c, 4)) { goto L_ec8ca; }
    X86_TICK(c, 7);
    // 0ec66a  cmp bl, 4
    X86_AT(c, 0xec66au);
    (void)x86_sub(c, g8(c, 3), 0x4u, 0, 1);
    // 0ec66d  jne 0xec3cf
    X86_AT(c, 0xec66du);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xec3cfu); goto L_ec3cf; }
    X86_TICK(c, 7);
    // 0ec673  jmp 0xec8ca
    X86_AT(c, 0xec673u);
    goto L_ec8ca;
L_ec678:
    X86_TICK(c, 11);
    // 0ec678  push 0xe
    X86_AT(c, 0xec678u);
    { uint32_t v = 0xEu; push32(c, v); }
    // 0ec67a  push 4
    X86_AT(c, 0xec67au);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ec67c  call 0xe74d8
    X86_AT(c, 0xec67cu);
    push32(c, 0xec681u); f_000e74d8(c); X86_RET(c, 0xec681u);
    X86_TICK(c, 2);
    // 0ec681  add esp, 8
    X86_AT(c, 0xec681u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
L_ec684:
    X86_TICK(c, 13);
    // 0ec684  push 5
    X86_AT(c, 0xec684u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0ec686  push 0x28
    X86_AT(c, 0xec686u);
    { uint32_t v = 0x28u; push32(c, v); }
    // 0ec688  push 4
    X86_AT(c, 0xec688u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ec68a  call 0xe7260
    X86_AT(c, 0xec68au);
    push32(c, 0xec68fu); f_000e7260(c); X86_RET(c, 0xec68fu);
    X86_TICK(c, 13);
    // 0ec68f  push 2
    X86_AT(c, 0xec68fu);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0ec691  push esi
    X86_AT(c, 0xec691u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0ec692  push 4
    X86_AT(c, 0xec692u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ec694  call 0xe5630
    X86_AT(c, 0xec694u);
    push32(c, 0xec699u); f_000e5630(c); X86_RET(c, 0xec699u);
    X86_TICK(c, 13);
    // 0ec699  push 8
    X86_AT(c, 0xec699u);
    { uint32_t v = 0x8u; push32(c, v); }
    // 0ec69b  push 0x34
    X86_AT(c, 0xec69bu);
    { uint32_t v = 0x34u; push32(c, v); }
    // 0ec69d  push 4
    X86_AT(c, 0xec69du);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ec69f  call 0xe7260
    X86_AT(c, 0xec69fu);
    push32(c, 0xec6a4u); f_000e7260(c); X86_RET(c, 0xec6a4u);
    X86_TICK(c, 29);
    // 0ec6a4  push 2
    X86_AT(c, 0xec6a4u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0ec6a6  mov eax, edi
    X86_AT(c, 0xec6a6u);
    c.r[0] = c.r[7];
    // 0ec6a8  lea edx, [eax + eax*4]
    X86_AT(c, 0xec6a8u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0ec6ab  lea edx, [eax + edx*2]
    X86_AT(c, 0xec6abu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0ec6ae  shl edx, 5
    X86_AT(c, 0xec6aeu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0ec6b1  sub edx, eax
    X86_AT(c, 0xec6b1u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0ec6b3  push dword ptr [edx + 0xcde6a]
    X86_AT(c, 0xec6b3u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE6Au))); push32(c, v); }
    // 0ec6b9  push 4
    X86_AT(c, 0xec6b9u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ec6bb  mov dword ptr [ebp - 0x4c], edx
    X86_AT(c, 0xec6bbu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFB4u)), c.r[2]);
    // 0ec6be  call 0xe5630
    X86_AT(c, 0xec6beu);
    push32(c, 0xec6c3u); f_000e5630(c); X86_RET(c, 0xec6c3u);
    X86_TICK(c, 9);
    // 0ec6c3  push 4
    X86_AT(c, 0xec6c3u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ec6c5  call 0xe4b60
    X86_AT(c, 0xec6c5u);
    push32(c, 0xec6cau); f_000e4b60(c); X86_RET(c, 0xec6cau);
    X86_TICK(c, 12);
    // 0ec6ca  xchg ebx, eax
    X86_AT(c, 0xec6cau);
    { uint32_t t = c.r[3]; c.r[3] = c.r[0]; c.r[0] = t; }
    // 0ec6cb  add esp, 0x34
    X86_AT(c, 0xec6cbu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x34u, 0, 4); }
    // 0ec6ce  cmp bl, 5
    X86_AT(c, 0xec6ceu);
    (void)x86_sub(c, g8(c, 3), 0x5u, 0, 1);
    // 0ec6d1  je 0xec73e
    X86_AT(c, 0xec6d1u);
    if (x86_cc(c, 4)) { goto L_ec73e; }
    X86_TICK(c, 7);
    // 0ec6d7  cmp bl, 6
    X86_AT(c, 0xec6d7u);
    (void)x86_sub(c, g8(c, 3), 0x6u, 0, 1);
    // 0ec6da  je 0xec73e
    X86_AT(c, 0xec6dau);
    if (x86_cc(c, 4)) { goto L_ec73e; }
    X86_TICK(c, 7);
    // 0ec6dc  cmp bl, 4
    X86_AT(c, 0xec6dcu);
    (void)x86_sub(c, g8(c, 3), 0x4u, 0, 1);
    // 0ec6df  je 0xec73e
    X86_AT(c, 0xec6dfu);
    if (x86_cc(c, 4)) { goto L_ec73e; }
    X86_TICK(c, 7);
    // 0ec6e1  cmp bl, 1
    X86_AT(c, 0xec6e1u);
    (void)x86_sub(c, g8(c, 3), 0x1u, 0, 1);
    // 0ec6e4  je 0xec73e
    X86_AT(c, 0xec6e4u);
    if (x86_cc(c, 4)) { goto L_ec73e; }
    X86_TICK(c, 7);
    // 0ec6e6  cmp bl, 7
    X86_AT(c, 0xec6e6u);
    (void)x86_sub(c, g8(c, 3), 0x7u, 0, 1);
    // 0ec6e9  jne 0xec704
    X86_AT(c, 0xec6e9u);
    if (x86_cc(c, 5)) { goto L_ec704; }
    X86_TICK(c, 15);
    // 0ec6eb  mov eax, dword ptr [ebp - 0x4c]
    X86_AT(c, 0xec6ebu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFB4u)));
    // 0ec6ee  mov edx, dword ptr [eax + 0xcde6a]
    X86_AT(c, 0xec6eeu);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0xCDE6Au)));
    // 0ec6f4  cmp edx, 0x19
    X86_AT(c, 0xec6f4u);
    (void)x86_sub(c, c.r[2], 0x19u, 0, 4);
    // 0ec6f7  je 0xec684
    X86_AT(c, 0xec6f7u);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xec684u); goto L_ec684; }
    X86_TICK(c, 7);
    // 0ec6f9  and esi, esi
    X86_AT(c, 0xec6f9u);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & c.r[6], 4); }
    // 0ec6fb  je 0xec684
    X86_AT(c, 0xec6fbu);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xec684u); goto L_ec684; }
    X86_TICK(c, 8);
    // 0ec6fd  inc dword ptr [eax + 0xcde6a]
    X86_AT(c, 0xec6fdu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[0] + 0xCDE6Au)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0ec703  dec esi
    X86_AT(c, 0xec703u);
    { uint32_t v = c.r[6]; c.r[6] = x86_dec(c, v, 4); }
L_ec704:
    X86_TICK(c, 7);
    // 0ec704  cmp bl, 3
    X86_AT(c, 0xec704u);
    (void)x86_sub(c, g8(c, 3), 0x3u, 0, 1);
    // 0ec707  jne 0xec684
    X86_AT(c, 0xec707u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xec684u); goto L_ec684; }
    X86_TICK(c, 22);
    // 0ec70d  mov eax, edi
    X86_AT(c, 0xec70du);
    c.r[0] = c.r[7];
    // 0ec70f  lea edx, [eax + eax*4]
    X86_AT(c, 0xec70fu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0ec712  lea edx, [eax + edx*2]
    X86_AT(c, 0xec712u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0ec715  shl edx, 5
    X86_AT(c, 0xec715u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0ec718  sub edx, eax
    X86_AT(c, 0xec718u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0ec71a  mov eax, dword ptr [edx + 0xcde6a]
    X86_AT(c, 0xec71au);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE6Au)));
    // 0ec720  cmp eax, 0xa
    X86_AT(c, 0xec720u);
    (void)x86_sub(c, c.r[0], 0xAu, 0, 4);
    // 0ec723  je 0xec684
    X86_AT(c, 0xec723u);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xec684u); goto L_ec684; }
    X86_TICK(c, 7);
    // 0ec729  cmp esi, 0x1e
    X86_AT(c, 0xec729u);
    (void)x86_sub(c, c.r[6], 0x1Eu, 0, 4);
    // 0ec72c  je 0xec684
    X86_AT(c, 0xec72cu);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xec684u); goto L_ec684; }
    X86_TICK(c, 15);
    // 0ec732  dec dword ptr [edx + 0xcde6a]
    X86_AT(c, 0xec732u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE6Au)); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 0ec738  inc esi
    X86_AT(c, 0xec738u);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 0ec739  jmp 0xec684
    X86_AT(c, 0xec739u);
    X86_POLL(c, 0xec684u); goto L_ec684;
L_ec73e:
    X86_TICK(c, 11);
    // 0ec73e  push 0xb
    X86_AT(c, 0xec73eu);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0ec740  push 4
    X86_AT(c, 0xec740u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ec742  call 0xe74d8
    X86_AT(c, 0xec742u);
    push32(c, 0xec747u); f_000e74d8(c); X86_RET(c, 0xec747u);
    X86_TICK(c, 13);
    // 0ec747  push 5
    X86_AT(c, 0xec747u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0ec749  push 0x28
    X86_AT(c, 0xec749u);
    { uint32_t v = 0x28u; push32(c, v); }
    // 0ec74b  push 4
    X86_AT(c, 0xec74bu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ec74d  call 0xe7260
    X86_AT(c, 0xec74du);
    push32(c, 0xec752u); f_000e7260(c); X86_RET(c, 0xec752u);
    X86_TICK(c, 13);
    // 0ec752  push 2
    X86_AT(c, 0xec752u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0ec754  push esi
    X86_AT(c, 0xec754u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0ec755  push 4
    X86_AT(c, 0xec755u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ec757  call 0xe5630
    X86_AT(c, 0xec757u);
    push32(c, 0xec75cu); f_000e5630(c); X86_RET(c, 0xec75cu);
    X86_TICK(c, 13);
    // 0ec75c  push 8
    X86_AT(c, 0xec75cu);
    { uint32_t v = 0x8u; push32(c, v); }
    // 0ec75e  push 0x34
    X86_AT(c, 0xec75eu);
    { uint32_t v = 0x34u; push32(c, v); }
    // 0ec760  push 4
    X86_AT(c, 0xec760u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ec762  call 0xe7260
    X86_AT(c, 0xec762u);
    push32(c, 0xec767u); f_000e7260(c); X86_RET(c, 0xec767u);
    X86_TICK(c, 27);
    // 0ec767  push 2
    X86_AT(c, 0xec767u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0ec769  mov eax, edi
    X86_AT(c, 0xec769u);
    c.r[0] = c.r[7];
    // 0ec76b  lea edx, [eax + eax*4]
    X86_AT(c, 0xec76bu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0ec76e  lea edx, [eax + edx*2]
    X86_AT(c, 0xec76eu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0ec771  shl edx, 5
    X86_AT(c, 0xec771u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0ec774  sub edx, eax
    X86_AT(c, 0xec774u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0ec776  push dword ptr [edx + 0xcde6a]
    X86_AT(c, 0xec776u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE6Au))); push32(c, v); }
    // 0ec77c  push 4
    X86_AT(c, 0xec77cu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ec77e  call 0xe5630
    X86_AT(c, 0xec77eu);
    push32(c, 0xec783u); f_000e5630(c); X86_RET(c, 0xec783u);
    X86_TICK(c, 9);
    // 0ec783  add esp, 0x38
    X86_AT(c, 0xec783u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x38u, 0, 4); }
    // 0ec786  cmp bl, 5
    X86_AT(c, 0xec786u);
    (void)x86_sub(c, g8(c, 3), 0x5u, 0, 1);
    // 0ec789  jne 0xec797
    X86_AT(c, 0xec789u);
    if (x86_cc(c, 5)) { goto L_ec797; }
L_ec78b:
    X86_TICK(c, 9);
    // 0ec78b  mov dword ptr [ebp - 4], 1
    X86_AT(c, 0xec78bu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), 0x1u);
    // 0ec792  jmp 0xec3cf
    X86_AT(c, 0xec792u);
    X86_POLL(c, 0xec3cfu); goto L_ec3cf;
L_ec797:
    X86_TICK(c, 7);
    // 0ec797  cmp bl, 1
    X86_AT(c, 0xec797u);
    (void)x86_sub(c, g8(c, 3), 0x1u, 0, 1);
    // 0ec79a  je 0xed30f
    X86_AT(c, 0xec79au);
    if (x86_cc(c, 4)) { goto L_ed30f; }
    X86_TICK(c, 7);
    // 0ec7a0  cmp bl, 6
    X86_AT(c, 0xec7a0u);
    (void)x86_sub(c, g8(c, 3), 0x6u, 0, 1);
    // 0ec7a3  je 0xeca09
    X86_AT(c, 0xec7a3u);
    if (x86_cc(c, 4)) { goto L_eca09; }
    X86_TICK(c, 7);
    // 0ec7a9  cmp bl, 4
    X86_AT(c, 0xec7a9u);
    (void)x86_sub(c, g8(c, 3), 0x4u, 0, 1);
    // 0ec7ac  jne 0xec3cf
    X86_AT(c, 0xec7acu);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xec3cfu); goto L_ec3cf; }
    X86_TICK(c, 7);
    // 0ec7b2  jmp 0xeca09
    X86_AT(c, 0xec7b2u);
    goto L_eca09;
L_ec7b7:
    X86_TICK(c, 11);
    // 0ec7b7  push 0xe
    X86_AT(c, 0xec7b7u);
    { uint32_t v = 0xEu; push32(c, v); }
    // 0ec7b9  push 4
    X86_AT(c, 0xec7b9u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ec7bb  call 0xe74d8
    X86_AT(c, 0xec7bbu);
    push32(c, 0xec7c0u); f_000e74d8(c); X86_RET(c, 0xec7c0u);
    X86_TICK(c, 2);
    // 0ec7c0  add esp, 8
    X86_AT(c, 0xec7c0u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
L_ec7c3:
    X86_TICK(c, 13);
    // 0ec7c3  push 5
    X86_AT(c, 0xec7c3u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0ec7c5  push 0x28
    X86_AT(c, 0xec7c5u);
    { uint32_t v = 0x28u; push32(c, v); }
    // 0ec7c7  push 4
    X86_AT(c, 0xec7c7u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ec7c9  call 0xe7260
    X86_AT(c, 0xec7c9u);
    push32(c, 0xec7ceu); f_000e7260(c); X86_RET(c, 0xec7ceu);
    X86_TICK(c, 13);
    // 0ec7ce  push 2
    X86_AT(c, 0xec7ceu);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0ec7d0  push esi
    X86_AT(c, 0xec7d0u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0ec7d1  push 4
    X86_AT(c, 0xec7d1u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ec7d3  call 0xe5630
    X86_AT(c, 0xec7d3u);
    push32(c, 0xec7d8u); f_000e5630(c); X86_RET(c, 0xec7d8u);
    X86_TICK(c, 13);
    // 0ec7d8  push 9
    X86_AT(c, 0xec7d8u);
    { uint32_t v = 0x9u; push32(c, v); }
    // 0ec7da  push 0x34
    X86_AT(c, 0xec7dau);
    { uint32_t v = 0x34u; push32(c, v); }
    // 0ec7dc  push 4
    X86_AT(c, 0xec7dcu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ec7de  call 0xe7260
    X86_AT(c, 0xec7deu);
    push32(c, 0xec7e3u); f_000e7260(c); X86_RET(c, 0xec7e3u);
    X86_TICK(c, 29);
    // 0ec7e3  push 2
    X86_AT(c, 0xec7e3u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0ec7e5  mov eax, edi
    X86_AT(c, 0xec7e5u);
    c.r[0] = c.r[7];
    // 0ec7e7  lea edx, [eax + eax*4]
    X86_AT(c, 0xec7e7u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0ec7ea  lea edx, [eax + edx*2]
    X86_AT(c, 0xec7eau);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0ec7ed  shl edx, 5
    X86_AT(c, 0xec7edu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0ec7f0  sub edx, eax
    X86_AT(c, 0xec7f0u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0ec7f2  push dword ptr [edx + 0xcde6e]
    X86_AT(c, 0xec7f2u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE6Eu))); push32(c, v); }
    // 0ec7f8  push 4
    X86_AT(c, 0xec7f8u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ec7fa  mov dword ptr [ebp - 0x4c], edx
    X86_AT(c, 0xec7fau);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFB4u)), c.r[2]);
    // 0ec7fd  call 0xe5630
    X86_AT(c, 0xec7fdu);
    push32(c, 0xec802u); f_000e5630(c); X86_RET(c, 0xec802u);
    X86_TICK(c, 9);
    // 0ec802  push 4
    X86_AT(c, 0xec802u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ec804  call 0xe4b60
    X86_AT(c, 0xec804u);
    push32(c, 0xec809u); f_000e4b60(c); X86_RET(c, 0xec809u);
    X86_TICK(c, 12);
    // 0ec809  xchg ebx, eax
    X86_AT(c, 0xec809u);
    { uint32_t t = c.r[3]; c.r[3] = c.r[0]; c.r[0] = t; }
    // 0ec80a  add esp, 0x34
    X86_AT(c, 0xec80au);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x34u, 0, 4); }
    // 0ec80d  cmp bl, 5
    X86_AT(c, 0xec80du);
    (void)x86_sub(c, g8(c, 3), 0x5u, 0, 1);
    // 0ec810  je 0xec87d
    X86_AT(c, 0xec810u);
    if (x86_cc(c, 4)) { goto L_ec87d; }
    X86_TICK(c, 7);
    // 0ec816  cmp bl, 6
    X86_AT(c, 0xec816u);
    (void)x86_sub(c, g8(c, 3), 0x6u, 0, 1);
    // 0ec819  je 0xec87d
    X86_AT(c, 0xec819u);
    if (x86_cc(c, 4)) { goto L_ec87d; }
    X86_TICK(c, 7);
    // 0ec81b  cmp bl, 4
    X86_AT(c, 0xec81bu);
    (void)x86_sub(c, g8(c, 3), 0x4u, 0, 1);
    // 0ec81e  je 0xec87d
    X86_AT(c, 0xec81eu);
    if (x86_cc(c, 4)) { goto L_ec87d; }
    X86_TICK(c, 7);
    // 0ec820  cmp bl, 1
    X86_AT(c, 0xec820u);
    (void)x86_sub(c, g8(c, 3), 0x1u, 0, 1);
    // 0ec823  je 0xec87d
    X86_AT(c, 0xec823u);
    if (x86_cc(c, 4)) { goto L_ec87d; }
    X86_TICK(c, 7);
    // 0ec825  cmp bl, 7
    X86_AT(c, 0xec825u);
    (void)x86_sub(c, g8(c, 3), 0x7u, 0, 1);
    // 0ec828  jne 0xec843
    X86_AT(c, 0xec828u);
    if (x86_cc(c, 5)) { goto L_ec843; }
    X86_TICK(c, 15);
    // 0ec82a  mov eax, dword ptr [ebp - 0x4c]
    X86_AT(c, 0xec82au);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFB4u)));
    // 0ec82d  mov edx, dword ptr [eax + 0xcde6e]
    X86_AT(c, 0xec82du);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0xCDE6Eu)));
    // 0ec833  cmp edx, 0x19
    X86_AT(c, 0xec833u);
    (void)x86_sub(c, c.r[2], 0x19u, 0, 4);
    // 0ec836  je 0xec7c3
    X86_AT(c, 0xec836u);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xec7c3u); goto L_ec7c3; }
    X86_TICK(c, 7);
    // 0ec838  and esi, esi
    X86_AT(c, 0xec838u);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & c.r[6], 4); }
    // 0ec83a  je 0xec7c3
    X86_AT(c, 0xec83au);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xec7c3u); goto L_ec7c3; }
    X86_TICK(c, 8);
    // 0ec83c  inc dword ptr [eax + 0xcde6e]
    X86_AT(c, 0xec83cu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[0] + 0xCDE6Eu)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0ec842  dec esi
    X86_AT(c, 0xec842u);
    { uint32_t v = c.r[6]; c.r[6] = x86_dec(c, v, 4); }
L_ec843:
    X86_TICK(c, 7);
    // 0ec843  cmp bl, 3
    X86_AT(c, 0xec843u);
    (void)x86_sub(c, g8(c, 3), 0x3u, 0, 1);
    // 0ec846  jne 0xec7c3
    X86_AT(c, 0xec846u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xec7c3u); goto L_ec7c3; }
    X86_TICK(c, 22);
    // 0ec84c  mov eax, edi
    X86_AT(c, 0xec84cu);
    c.r[0] = c.r[7];
    // 0ec84e  lea edx, [eax + eax*4]
    X86_AT(c, 0xec84eu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0ec851  lea edx, [eax + edx*2]
    X86_AT(c, 0xec851u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0ec854  shl edx, 5
    X86_AT(c, 0xec854u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0ec857  sub edx, eax
    X86_AT(c, 0xec857u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0ec859  mov eax, dword ptr [edx + 0xcde6e]
    X86_AT(c, 0xec859u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE6Eu)));
    // 0ec85f  cmp eax, 0xa
    X86_AT(c, 0xec85fu);
    (void)x86_sub(c, c.r[0], 0xAu, 0, 4);
    // 0ec862  je 0xec7c3
    X86_AT(c, 0xec862u);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xec7c3u); goto L_ec7c3; }
    X86_TICK(c, 7);
    // 0ec868  cmp esi, 0x1e
    X86_AT(c, 0xec868u);
    (void)x86_sub(c, c.r[6], 0x1Eu, 0, 4);
    // 0ec86b  je 0xec7c3
    X86_AT(c, 0xec86bu);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xec7c3u); goto L_ec7c3; }
    X86_TICK(c, 15);
    // 0ec871  dec dword ptr [edx + 0xcde6e]
    X86_AT(c, 0xec871u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE6Eu)); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 0ec877  inc esi
    X86_AT(c, 0xec877u);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 0ec878  jmp 0xec7c3
    X86_AT(c, 0xec878u);
    X86_POLL(c, 0xec7c3u); goto L_ec7c3;
L_ec87d:
    X86_TICK(c, 11);
    // 0ec87d  push 0xb
    X86_AT(c, 0xec87du);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0ec87f  push 4
    X86_AT(c, 0xec87fu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ec881  call 0xe74d8
    X86_AT(c, 0xec881u);
    push32(c, 0xec886u); f_000e74d8(c); X86_RET(c, 0xec886u);
    X86_TICK(c, 13);
    // 0ec886  push 5
    X86_AT(c, 0xec886u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0ec888  push 0x28
    X86_AT(c, 0xec888u);
    { uint32_t v = 0x28u; push32(c, v); }
    // 0ec88a  push 4
    X86_AT(c, 0xec88au);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ec88c  call 0xe7260
    X86_AT(c, 0xec88cu);
    push32(c, 0xec891u); f_000e7260(c); X86_RET(c, 0xec891u);
    X86_TICK(c, 13);
    // 0ec891  push 2
    X86_AT(c, 0xec891u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0ec893  push esi
    X86_AT(c, 0xec893u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0ec894  push 4
    X86_AT(c, 0xec894u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ec896  call 0xe5630
    X86_AT(c, 0xec896u);
    push32(c, 0xec89bu); f_000e5630(c); X86_RET(c, 0xec89bu);
    X86_TICK(c, 13);
    // 0ec89b  push 9
    X86_AT(c, 0xec89bu);
    { uint32_t v = 0x9u; push32(c, v); }
    // 0ec89d  push 0x34
    X86_AT(c, 0xec89du);
    { uint32_t v = 0x34u; push32(c, v); }
    // 0ec89f  push 4
    X86_AT(c, 0xec89fu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ec8a1  call 0xe7260
    X86_AT(c, 0xec8a1u);
    push32(c, 0xec8a6u); f_000e7260(c); X86_RET(c, 0xec8a6u);
    X86_TICK(c, 27);
    // 0ec8a6  push 2
    X86_AT(c, 0xec8a6u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0ec8a8  mov eax, edi
    X86_AT(c, 0xec8a8u);
    c.r[0] = c.r[7];
    // 0ec8aa  lea edx, [eax + eax*4]
    X86_AT(c, 0xec8aau);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0ec8ad  lea edx, [eax + edx*2]
    X86_AT(c, 0xec8adu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0ec8b0  shl edx, 5
    X86_AT(c, 0xec8b0u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0ec8b3  sub edx, eax
    X86_AT(c, 0xec8b3u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0ec8b5  push dword ptr [edx + 0xcde6e]
    X86_AT(c, 0xec8b5u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE6Eu))); push32(c, v); }
    // 0ec8bb  push 4
    X86_AT(c, 0xec8bbu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ec8bd  call 0xe5630
    X86_AT(c, 0xec8bdu);
    push32(c, 0xec8c2u); f_000e5630(c); X86_RET(c, 0xec8c2u);
    X86_TICK(c, 9);
    // 0ec8c2  add esp, 0x38
    X86_AT(c, 0xec8c2u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x38u, 0, 4); }
    // 0ec8c5  cmp bl, 5
    X86_AT(c, 0xec8c5u);
    (void)x86_sub(c, g8(c, 3), 0x5u, 0, 1);
    // 0ec8c8  jne 0xec8d6
    X86_AT(c, 0xec8c8u);
    if (x86_cc(c, 5)) { goto L_ec8d6; }
L_ec8ca:
    X86_TICK(c, 9);
    // 0ec8ca  mov dword ptr [ebp - 4], 2
    X86_AT(c, 0xec8cau);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), 0x2u);
    // 0ec8d1  jmp 0xec3cf
    X86_AT(c, 0xec8d1u);
    X86_POLL(c, 0xec3cfu); goto L_ec3cf;
L_ec8d6:
    X86_TICK(c, 7);
    // 0ec8d6  cmp bl, 1
    X86_AT(c, 0xec8d6u);
    (void)x86_sub(c, g8(c, 3), 0x1u, 0, 1);
    // 0ec8d9  je 0xed30f
    X86_AT(c, 0xec8d9u);
    if (x86_cc(c, 4)) { goto L_ed30f; }
    X86_TICK(c, 7);
    // 0ec8df  cmp bl, 6
    X86_AT(c, 0xec8dfu);
    (void)x86_sub(c, g8(c, 3), 0x6u, 0, 1);
    // 0ec8e2  je 0xecb4b
    X86_AT(c, 0xec8e2u);
    if (x86_cc(c, 4)) { goto L_ecb4b; }
    X86_TICK(c, 7);
    // 0ec8e8  cmp bl, 4
    X86_AT(c, 0xec8e8u);
    (void)x86_sub(c, g8(c, 3), 0x4u, 0, 1);
    // 0ec8eb  jne 0xec3cf
    X86_AT(c, 0xec8ebu);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xec3cfu); goto L_ec3cf; }
    X86_TICK(c, 7);
    // 0ec8f1  jmp 0xecb4b
    X86_AT(c, 0xec8f1u);
    goto L_ecb4b;
L_ec8f6:
    X86_TICK(c, 11);
    // 0ec8f6  push 0xe
    X86_AT(c, 0xec8f6u);
    { uint32_t v = 0xEu; push32(c, v); }
    // 0ec8f8  push 4
    X86_AT(c, 0xec8f8u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ec8fa  call 0xe74d8
    X86_AT(c, 0xec8fau);
    push32(c, 0xec8ffu); f_000e74d8(c); X86_RET(c, 0xec8ffu);
    X86_TICK(c, 2);
    // 0ec8ff  add esp, 8
    X86_AT(c, 0xec8ffu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
L_ec902:
    X86_TICK(c, 13);
    // 0ec902  push 5
    X86_AT(c, 0xec902u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0ec904  push 0x28
    X86_AT(c, 0xec904u);
    { uint32_t v = 0x28u; push32(c, v); }
    // 0ec906  push 4
    X86_AT(c, 0xec906u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ec908  call 0xe7260
    X86_AT(c, 0xec908u);
    push32(c, 0xec90du); f_000e7260(c); X86_RET(c, 0xec90du);
    X86_TICK(c, 13);
    // 0ec90d  push 2
    X86_AT(c, 0xec90du);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0ec90f  push esi
    X86_AT(c, 0xec90fu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0ec910  push 4
    X86_AT(c, 0xec910u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ec912  call 0xe5630
    X86_AT(c, 0xec912u);
    push32(c, 0xec917u); f_000e5630(c); X86_RET(c, 0xec917u);
    X86_TICK(c, 13);
    // 0ec917  push 0xa
    X86_AT(c, 0xec917u);
    { uint32_t v = 0xAu; push32(c, v); }
    // 0ec919  push 0x34
    X86_AT(c, 0xec919u);
    { uint32_t v = 0x34u; push32(c, v); }
    // 0ec91b  push 4
    X86_AT(c, 0xec91bu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ec91d  call 0xe7260
    X86_AT(c, 0xec91du);
    push32(c, 0xec922u); f_000e7260(c); X86_RET(c, 0xec922u);
    X86_TICK(c, 29);
    // 0ec922  push 2
    X86_AT(c, 0xec922u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0ec924  mov eax, edi
    X86_AT(c, 0xec924u);
    c.r[0] = c.r[7];
    // 0ec926  lea edx, [eax + eax*4]
    X86_AT(c, 0xec926u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0ec929  lea edx, [eax + edx*2]
    X86_AT(c, 0xec929u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0ec92c  shl edx, 5
    X86_AT(c, 0xec92cu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0ec92f  sub edx, eax
    X86_AT(c, 0xec92fu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0ec931  push dword ptr [edx + 0xcde72]
    X86_AT(c, 0xec931u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE72u))); push32(c, v); }
    // 0ec937  push 4
    X86_AT(c, 0xec937u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ec939  mov dword ptr [ebp - 0x4c], edx
    X86_AT(c, 0xec939u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFB4u)), c.r[2]);
    // 0ec93c  call 0xe5630
    X86_AT(c, 0xec93cu);
    push32(c, 0xec941u); f_000e5630(c); X86_RET(c, 0xec941u);
    X86_TICK(c, 9);
    // 0ec941  push 4
    X86_AT(c, 0xec941u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ec943  call 0xe4b60
    X86_AT(c, 0xec943u);
    push32(c, 0xec948u); f_000e4b60(c); X86_RET(c, 0xec948u);
    X86_TICK(c, 12);
    // 0ec948  xchg ebx, eax
    X86_AT(c, 0xec948u);
    { uint32_t t = c.r[3]; c.r[3] = c.r[0]; c.r[0] = t; }
    // 0ec949  add esp, 0x34
    X86_AT(c, 0xec949u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x34u, 0, 4); }
    // 0ec94c  cmp bl, 5
    X86_AT(c, 0xec94cu);
    (void)x86_sub(c, g8(c, 3), 0x5u, 0, 1);
    // 0ec94f  je 0xec9bc
    X86_AT(c, 0xec94fu);
    if (x86_cc(c, 4)) { goto L_ec9bc; }
    X86_TICK(c, 7);
    // 0ec955  cmp bl, 6
    X86_AT(c, 0xec955u);
    (void)x86_sub(c, g8(c, 3), 0x6u, 0, 1);
    // 0ec958  je 0xec9bc
    X86_AT(c, 0xec958u);
    if (x86_cc(c, 4)) { goto L_ec9bc; }
    X86_TICK(c, 7);
    // 0ec95a  cmp bl, 4
    X86_AT(c, 0xec95au);
    (void)x86_sub(c, g8(c, 3), 0x4u, 0, 1);
    // 0ec95d  je 0xec9bc
    X86_AT(c, 0xec95du);
    if (x86_cc(c, 4)) { goto L_ec9bc; }
    X86_TICK(c, 7);
    // 0ec95f  cmp bl, 1
    X86_AT(c, 0xec95fu);
    (void)x86_sub(c, g8(c, 3), 0x1u, 0, 1);
    // 0ec962  je 0xec9bc
    X86_AT(c, 0xec962u);
    if (x86_cc(c, 4)) { goto L_ec9bc; }
    X86_TICK(c, 7);
    // 0ec964  cmp bl, 7
    X86_AT(c, 0xec964u);
    (void)x86_sub(c, g8(c, 3), 0x7u, 0, 1);
    // 0ec967  jne 0xec982
    X86_AT(c, 0xec967u);
    if (x86_cc(c, 5)) { goto L_ec982; }
    X86_TICK(c, 15);
    // 0ec969  mov eax, dword ptr [ebp - 0x4c]
    X86_AT(c, 0xec969u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFB4u)));
    // 0ec96c  mov edx, dword ptr [eax + 0xcde72]
    X86_AT(c, 0xec96cu);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0xCDE72u)));
    // 0ec972  cmp edx, 0x19
    X86_AT(c, 0xec972u);
    (void)x86_sub(c, c.r[2], 0x19u, 0, 4);
    // 0ec975  je 0xec902
    X86_AT(c, 0xec975u);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xec902u); goto L_ec902; }
    X86_TICK(c, 7);
    // 0ec977  and esi, esi
    X86_AT(c, 0xec977u);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & c.r[6], 4); }
    // 0ec979  je 0xec902
    X86_AT(c, 0xec979u);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xec902u); goto L_ec902; }
    X86_TICK(c, 8);
    // 0ec97b  inc dword ptr [eax + 0xcde72]
    X86_AT(c, 0xec97bu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[0] + 0xCDE72u)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0ec981  dec esi
    X86_AT(c, 0xec981u);
    { uint32_t v = c.r[6]; c.r[6] = x86_dec(c, v, 4); }
L_ec982:
    X86_TICK(c, 7);
    // 0ec982  cmp bl, 3
    X86_AT(c, 0xec982u);
    (void)x86_sub(c, g8(c, 3), 0x3u, 0, 1);
    // 0ec985  jne 0xec902
    X86_AT(c, 0xec985u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xec902u); goto L_ec902; }
    X86_TICK(c, 22);
    // 0ec98b  mov eax, edi
    X86_AT(c, 0xec98bu);
    c.r[0] = c.r[7];
    // 0ec98d  lea edx, [eax + eax*4]
    X86_AT(c, 0xec98du);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0ec990  lea edx, [eax + edx*2]
    X86_AT(c, 0xec990u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0ec993  shl edx, 5
    X86_AT(c, 0xec993u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0ec996  sub edx, eax
    X86_AT(c, 0xec996u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0ec998  mov eax, dword ptr [edx + 0xcde72]
    X86_AT(c, 0xec998u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE72u)));
    // 0ec99e  cmp eax, 0xa
    X86_AT(c, 0xec99eu);
    (void)x86_sub(c, c.r[0], 0xAu, 0, 4);
    // 0ec9a1  je 0xec902
    X86_AT(c, 0xec9a1u);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xec902u); goto L_ec902; }
    X86_TICK(c, 7);
    // 0ec9a7  cmp esi, 0x1e
    X86_AT(c, 0xec9a7u);
    (void)x86_sub(c, c.r[6], 0x1Eu, 0, 4);
    // 0ec9aa  je 0xec902
    X86_AT(c, 0xec9aau);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xec902u); goto L_ec902; }
    X86_TICK(c, 15);
    // 0ec9b0  dec dword ptr [edx + 0xcde72]
    X86_AT(c, 0xec9b0u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE72u)); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 0ec9b6  inc esi
    X86_AT(c, 0xec9b6u);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 0ec9b7  jmp 0xec902
    X86_AT(c, 0xec9b7u);
    X86_POLL(c, 0xec902u); goto L_ec902;
L_ec9bc:
    X86_TICK(c, 11);
    // 0ec9bc  push 0xb
    X86_AT(c, 0xec9bcu);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0ec9be  push 4
    X86_AT(c, 0xec9beu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ec9c0  call 0xe74d8
    X86_AT(c, 0xec9c0u);
    push32(c, 0xec9c5u); f_000e74d8(c); X86_RET(c, 0xec9c5u);
    X86_TICK(c, 13);
    // 0ec9c5  push 5
    X86_AT(c, 0xec9c5u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0ec9c7  push 0x28
    X86_AT(c, 0xec9c7u);
    { uint32_t v = 0x28u; push32(c, v); }
    // 0ec9c9  push 4
    X86_AT(c, 0xec9c9u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ec9cb  call 0xe7260
    X86_AT(c, 0xec9cbu);
    push32(c, 0xec9d0u); f_000e7260(c); X86_RET(c, 0xec9d0u);
    X86_TICK(c, 13);
    // 0ec9d0  push 2
    X86_AT(c, 0xec9d0u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0ec9d2  push esi
    X86_AT(c, 0xec9d2u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0ec9d3  push 4
    X86_AT(c, 0xec9d3u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ec9d5  call 0xe5630
    X86_AT(c, 0xec9d5u);
    push32(c, 0xec9dau); f_000e5630(c); X86_RET(c, 0xec9dau);
    X86_TICK(c, 13);
    // 0ec9da  push 0xa
    X86_AT(c, 0xec9dau);
    { uint32_t v = 0xAu; push32(c, v); }
    // 0ec9dc  push 0x34
    X86_AT(c, 0xec9dcu);
    { uint32_t v = 0x34u; push32(c, v); }
    // 0ec9de  push 4
    X86_AT(c, 0xec9deu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ec9e0  call 0xe7260
    X86_AT(c, 0xec9e0u);
    push32(c, 0xec9e5u); f_000e7260(c); X86_RET(c, 0xec9e5u);
    X86_TICK(c, 27);
    // 0ec9e5  push 2
    X86_AT(c, 0xec9e5u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0ec9e7  mov eax, edi
    X86_AT(c, 0xec9e7u);
    c.r[0] = c.r[7];
    // 0ec9e9  lea edx, [eax + eax*4]
    X86_AT(c, 0xec9e9u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0ec9ec  lea edx, [eax + edx*2]
    X86_AT(c, 0xec9ecu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0ec9ef  shl edx, 5
    X86_AT(c, 0xec9efu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0ec9f2  sub edx, eax
    X86_AT(c, 0xec9f2u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0ec9f4  push dword ptr [edx + 0xcde72]
    X86_AT(c, 0xec9f4u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE72u))); push32(c, v); }
    // 0ec9fa  push 4
    X86_AT(c, 0xec9fau);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ec9fc  call 0xe5630
    X86_AT(c, 0xec9fcu);
    push32(c, 0xeca01u); f_000e5630(c); X86_RET(c, 0xeca01u);
    X86_TICK(c, 9);
    // 0eca01  add esp, 0x38
    X86_AT(c, 0xeca01u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x38u, 0, 4); }
    // 0eca04  cmp bl, 5
    X86_AT(c, 0xeca04u);
    (void)x86_sub(c, g8(c, 3), 0x5u, 0, 1);
    // 0eca07  jne 0xeca15
    X86_AT(c, 0xeca07u);
    if (x86_cc(c, 5)) { goto L_eca15; }
L_eca09:
    X86_TICK(c, 9);
    // 0eca09  mov dword ptr [ebp - 4], 3
    X86_AT(c, 0xeca09u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), 0x3u);
    // 0eca10  jmp 0xec3cf
    X86_AT(c, 0xeca10u);
    X86_POLL(c, 0xec3cfu); goto L_ec3cf;
L_eca15:
    X86_TICK(c, 7);
    // 0eca15  cmp bl, 1
    X86_AT(c, 0xeca15u);
    (void)x86_sub(c, g8(c, 3), 0x1u, 0, 1);
    // 0eca18  je 0xed30f
    X86_AT(c, 0xeca18u);
    if (x86_cc(c, 4)) { goto L_ed30f; }
    X86_TICK(c, 7);
    // 0eca1e  cmp bl, 6
    X86_AT(c, 0xeca1eu);
    (void)x86_sub(c, g8(c, 3), 0x6u, 0, 1);
    // 0eca21  je 0xeca2c
    X86_AT(c, 0xeca21u);
    if (x86_cc(c, 4)) { goto L_eca2c; }
    X86_TICK(c, 7);
    // 0eca23  cmp bl, 4
    X86_AT(c, 0xeca23u);
    (void)x86_sub(c, g8(c, 3), 0x4u, 0, 1);
    // 0eca26  jne 0xec3cf
    X86_AT(c, 0xeca26u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xec3cfu); goto L_ec3cf; }
L_eca2c:
    X86_TICK(c, 9);
    // 0eca2c  mov dword ptr [ebp - 4], 5
    X86_AT(c, 0xeca2cu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), 0x5u);
    // 0eca33  jmp 0xec3cf
    X86_AT(c, 0xeca33u);
    X86_POLL(c, 0xec3cfu); goto L_ec3cf;
L_eca38:
    X86_TICK(c, 11);
    // 0eca38  push 0xe
    X86_AT(c, 0xeca38u);
    { uint32_t v = 0xEu; push32(c, v); }
    // 0eca3a  push 4
    X86_AT(c, 0xeca3au);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0eca3c  call 0xe74d8
    X86_AT(c, 0xeca3cu);
    push32(c, 0xeca41u); f_000e74d8(c); X86_RET(c, 0xeca41u);
    X86_TICK(c, 2);
    // 0eca41  add esp, 8
    X86_AT(c, 0xeca41u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
L_eca44:
    X86_TICK(c, 13);
    // 0eca44  push 5
    X86_AT(c, 0xeca44u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0eca46  push 0x28
    X86_AT(c, 0xeca46u);
    { uint32_t v = 0x28u; push32(c, v); }
    // 0eca48  push 4
    X86_AT(c, 0xeca48u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0eca4a  call 0xe7260
    X86_AT(c, 0xeca4au);
    push32(c, 0xeca4fu); f_000e7260(c); X86_RET(c, 0xeca4fu);
    X86_TICK(c, 13);
    // 0eca4f  push 2
    X86_AT(c, 0xeca4fu);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0eca51  push esi
    X86_AT(c, 0xeca51u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0eca52  push 4
    X86_AT(c, 0xeca52u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0eca54  call 0xe5630
    X86_AT(c, 0xeca54u);
    push32(c, 0xeca59u); f_000e5630(c); X86_RET(c, 0xeca59u);
    X86_TICK(c, 13);
    // 0eca59  push 0xb
    X86_AT(c, 0xeca59u);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0eca5b  push 0x34
    X86_AT(c, 0xeca5bu);
    { uint32_t v = 0x34u; push32(c, v); }
    // 0eca5d  push 4
    X86_AT(c, 0xeca5du);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0eca5f  call 0xe7260
    X86_AT(c, 0xeca5fu);
    push32(c, 0xeca64u); f_000e7260(c); X86_RET(c, 0xeca64u);
    X86_TICK(c, 29);
    // 0eca64  push 2
    X86_AT(c, 0xeca64u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0eca66  mov eax, edi
    X86_AT(c, 0xeca66u);
    c.r[0] = c.r[7];
    // 0eca68  lea edx, [eax + eax*4]
    X86_AT(c, 0xeca68u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0eca6b  lea edx, [eax + edx*2]
    X86_AT(c, 0xeca6bu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0eca6e  shl edx, 5
    X86_AT(c, 0xeca6eu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0eca71  sub edx, eax
    X86_AT(c, 0xeca71u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0eca73  push dword ptr [edx + 0xcde76]
    X86_AT(c, 0xeca73u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE76u))); push32(c, v); }
    // 0eca79  push 4
    X86_AT(c, 0xeca79u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0eca7b  mov dword ptr [ebp - 0x4c], edx
    X86_AT(c, 0xeca7bu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFB4u)), c.r[2]);
    // 0eca7e  call 0xe5630
    X86_AT(c, 0xeca7eu);
    push32(c, 0xeca83u); f_000e5630(c); X86_RET(c, 0xeca83u);
    X86_TICK(c, 9);
    // 0eca83  push 4
    X86_AT(c, 0xeca83u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0eca85  call 0xe4b60
    X86_AT(c, 0xeca85u);
    push32(c, 0xeca8au); f_000e4b60(c); X86_RET(c, 0xeca8au);
    X86_TICK(c, 12);
    // 0eca8a  xchg ebx, eax
    X86_AT(c, 0xeca8au);
    { uint32_t t = c.r[3]; c.r[3] = c.r[0]; c.r[0] = t; }
    // 0eca8b  add esp, 0x34
    X86_AT(c, 0xeca8bu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x34u, 0, 4); }
    // 0eca8e  cmp bl, 5
    X86_AT(c, 0xeca8eu);
    (void)x86_sub(c, g8(c, 3), 0x5u, 0, 1);
    // 0eca91  je 0xecafe
    X86_AT(c, 0xeca91u);
    if (x86_cc(c, 4)) { goto L_ecafe; }
    X86_TICK(c, 7);
    // 0eca97  cmp bl, 6
    X86_AT(c, 0xeca97u);
    (void)x86_sub(c, g8(c, 3), 0x6u, 0, 1);
    // 0eca9a  je 0xecafe
    X86_AT(c, 0xeca9au);
    if (x86_cc(c, 4)) { goto L_ecafe; }
    X86_TICK(c, 7);
    // 0eca9c  cmp bl, 4
    X86_AT(c, 0xeca9cu);
    (void)x86_sub(c, g8(c, 3), 0x4u, 0, 1);
    // 0eca9f  je 0xecafe
    X86_AT(c, 0xeca9fu);
    if (x86_cc(c, 4)) { goto L_ecafe; }
    X86_TICK(c, 7);
    // 0ecaa1  cmp bl, 1
    X86_AT(c, 0xecaa1u);
    (void)x86_sub(c, g8(c, 3), 0x1u, 0, 1);
    // 0ecaa4  je 0xecafe
    X86_AT(c, 0xecaa4u);
    if (x86_cc(c, 4)) { goto L_ecafe; }
    X86_TICK(c, 7);
    // 0ecaa6  cmp bl, 7
    X86_AT(c, 0xecaa6u);
    (void)x86_sub(c, g8(c, 3), 0x7u, 0, 1);
    // 0ecaa9  jne 0xecac4
    X86_AT(c, 0xecaa9u);
    if (x86_cc(c, 5)) { goto L_ecac4; }
    X86_TICK(c, 15);
    // 0ecaab  mov eax, dword ptr [ebp - 0x4c]
    X86_AT(c, 0xecaabu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFB4u)));
    // 0ecaae  mov edx, dword ptr [eax + 0xcde76]
    X86_AT(c, 0xecaaeu);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0xCDE76u)));
    // 0ecab4  cmp edx, 0x19
    X86_AT(c, 0xecab4u);
    (void)x86_sub(c, c.r[2], 0x19u, 0, 4);
    // 0ecab7  je 0xeca44
    X86_AT(c, 0xecab7u);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xeca44u); goto L_eca44; }
    X86_TICK(c, 7);
    // 0ecab9  and esi, esi
    X86_AT(c, 0xecab9u);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & c.r[6], 4); }
    // 0ecabb  je 0xeca44
    X86_AT(c, 0xecabbu);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xeca44u); goto L_eca44; }
    X86_TICK(c, 8);
    // 0ecabd  inc dword ptr [eax + 0xcde76]
    X86_AT(c, 0xecabdu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[0] + 0xCDE76u)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0ecac3  dec esi
    X86_AT(c, 0xecac3u);
    { uint32_t v = c.r[6]; c.r[6] = x86_dec(c, v, 4); }
L_ecac4:
    X86_TICK(c, 7);
    // 0ecac4  cmp bl, 3
    X86_AT(c, 0xecac4u);
    (void)x86_sub(c, g8(c, 3), 0x3u, 0, 1);
    // 0ecac7  jne 0xeca44
    X86_AT(c, 0xecac7u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xeca44u); goto L_eca44; }
    X86_TICK(c, 22);
    // 0ecacd  mov eax, edi
    X86_AT(c, 0xecacdu);
    c.r[0] = c.r[7];
    // 0ecacf  lea edx, [eax + eax*4]
    X86_AT(c, 0xecacfu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0ecad2  lea edx, [eax + edx*2]
    X86_AT(c, 0xecad2u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0ecad5  shl edx, 5
    X86_AT(c, 0xecad5u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0ecad8  sub edx, eax
    X86_AT(c, 0xecad8u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0ecada  mov eax, dword ptr [edx + 0xcde76]
    X86_AT(c, 0xecadau);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE76u)));
    // 0ecae0  cmp eax, 0xa
    X86_AT(c, 0xecae0u);
    (void)x86_sub(c, c.r[0], 0xAu, 0, 4);
    // 0ecae3  je 0xeca44
    X86_AT(c, 0xecae3u);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xeca44u); goto L_eca44; }
    X86_TICK(c, 7);
    // 0ecae9  cmp esi, 0x1e
    X86_AT(c, 0xecae9u);
    (void)x86_sub(c, c.r[6], 0x1Eu, 0, 4);
    // 0ecaec  je 0xeca44
    X86_AT(c, 0xecaecu);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xeca44u); goto L_eca44; }
    X86_TICK(c, 15);
    // 0ecaf2  dec dword ptr [edx + 0xcde76]
    X86_AT(c, 0xecaf2u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE76u)); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 0ecaf8  inc esi
    X86_AT(c, 0xecaf8u);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 0ecaf9  jmp 0xeca44
    X86_AT(c, 0xecaf9u);
    X86_POLL(c, 0xeca44u); goto L_eca44;
L_ecafe:
    X86_TICK(c, 11);
    // 0ecafe  push 0xb
    X86_AT(c, 0xecafeu);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0ecb00  push 4
    X86_AT(c, 0xecb00u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ecb02  call 0xe74d8
    X86_AT(c, 0xecb02u);
    push32(c, 0xecb07u); f_000e74d8(c); X86_RET(c, 0xecb07u);
    X86_TICK(c, 13);
    // 0ecb07  push 5
    X86_AT(c, 0xecb07u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0ecb09  push 0x28
    X86_AT(c, 0xecb09u);
    { uint32_t v = 0x28u; push32(c, v); }
    // 0ecb0b  push 4
    X86_AT(c, 0xecb0bu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ecb0d  call 0xe7260
    X86_AT(c, 0xecb0du);
    push32(c, 0xecb12u); f_000e7260(c); X86_RET(c, 0xecb12u);
    X86_TICK(c, 13);
    // 0ecb12  push 2
    X86_AT(c, 0xecb12u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0ecb14  push esi
    X86_AT(c, 0xecb14u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0ecb15  push 4
    X86_AT(c, 0xecb15u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ecb17  call 0xe5630
    X86_AT(c, 0xecb17u);
    push32(c, 0xecb1cu); f_000e5630(c); X86_RET(c, 0xecb1cu);
    X86_TICK(c, 13);
    // 0ecb1c  push 0xb
    X86_AT(c, 0xecb1cu);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0ecb1e  push 0x34
    X86_AT(c, 0xecb1eu);
    { uint32_t v = 0x34u; push32(c, v); }
    // 0ecb20  push 4
    X86_AT(c, 0xecb20u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ecb22  call 0xe7260
    X86_AT(c, 0xecb22u);
    push32(c, 0xecb27u); f_000e7260(c); X86_RET(c, 0xecb27u);
    X86_TICK(c, 27);
    // 0ecb27  push 2
    X86_AT(c, 0xecb27u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0ecb29  mov eax, edi
    X86_AT(c, 0xecb29u);
    c.r[0] = c.r[7];
    // 0ecb2b  lea edx, [eax + eax*4]
    X86_AT(c, 0xecb2bu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0ecb2e  lea edx, [eax + edx*2]
    X86_AT(c, 0xecb2eu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0ecb31  shl edx, 5
    X86_AT(c, 0xecb31u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0ecb34  sub edx, eax
    X86_AT(c, 0xecb34u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0ecb36  push dword ptr [edx + 0xcde76]
    X86_AT(c, 0xecb36u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE76u))); push32(c, v); }
    // 0ecb3c  push 4
    X86_AT(c, 0xecb3cu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ecb3e  call 0xe5630
    X86_AT(c, 0xecb3eu);
    push32(c, 0xecb43u); f_000e5630(c); X86_RET(c, 0xecb43u);
    X86_TICK(c, 9);
    // 0ecb43  add esp, 0x38
    X86_AT(c, 0xecb43u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x38u, 0, 4); }
    // 0ecb46  cmp bl, 5
    X86_AT(c, 0xecb46u);
    (void)x86_sub(c, g8(c, 3), 0x5u, 0, 1);
    // 0ecb49  jne 0xecb57
    X86_AT(c, 0xecb49u);
    if (x86_cc(c, 5)) { goto L_ecb57; }
L_ecb4b:
    X86_TICK(c, 9);
    // 0ecb4b  mov dword ptr [ebp - 4], 4
    X86_AT(c, 0xecb4bu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), 0x4u);
    // 0ecb52  jmp 0xec3cf
    X86_AT(c, 0xecb52u);
    X86_POLL(c, 0xec3cfu); goto L_ec3cf;
L_ecb57:
    X86_TICK(c, 7);
    // 0ecb57  cmp bl, 1
    X86_AT(c, 0xecb57u);
    (void)x86_sub(c, g8(c, 3), 0x1u, 0, 1);
    // 0ecb5a  je 0xed30f
    X86_AT(c, 0xecb5au);
    if (x86_cc(c, 4)) { goto L_ed30f; }
    X86_TICK(c, 7);
    // 0ecb60  cmp bl, 6
    X86_AT(c, 0xecb60u);
    (void)x86_sub(c, g8(c, 3), 0x6u, 0, 1);
    // 0ecb63  je 0xed4d4
    X86_AT(c, 0xecb63u);
    if (x86_cc(c, 4)) { goto L_ed4d4; }
    X86_TICK(c, 7);
    // 0ecb69  cmp bl, 4
    X86_AT(c, 0xecb69u);
    (void)x86_sub(c, g8(c, 3), 0x4u, 0, 1);
    // 0ecb6c  jne 0xec3cf
    X86_AT(c, 0xecb6cu);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xec3cfu); goto L_ec3cf; }
    X86_TICK(c, 7);
    // 0ecb72  jmp 0xed4d4
    X86_AT(c, 0xecb72u);
    goto L_ed4d4;
L_ecb77:
    X86_TICK(c, 27);
    // 0ecb77  push 0xa
    X86_AT(c, 0xecb77u);
    { uint32_t v = 0xAu; push32(c, v); }
    // 0ecb79  push 0xf
    X86_AT(c, 0xecb79u);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0ecb7b  push 0xb
    X86_AT(c, 0xecb7bu);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0ecb7d  push 5
    X86_AT(c, 0xecb7du);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0ecb7f  push 0x19
    X86_AT(c, 0xecb7fu);
    { uint32_t v = 0x19u; push32(c, v); }
    // 0ecb81  push 0x60
    X86_AT(c, 0xecb81u);
    { uint32_t v = 0x60u; push32(c, v); }
    // 0ecb83  push 0xd0
    X86_AT(c, 0xecb83u);
    { uint32_t v = 0xD0u; push32(c, v); }
    // 0ecb88  push 0x128
    X86_AT(c, 0xecb88u);
    { uint32_t v = 0x128u; push32(c, v); }
    // 0ecb8d  push 0xd0
    X86_AT(c, 0xecb8du);
    { uint32_t v = 0xD0u; push32(c, v); }
    // 0ecb92  push 5
    X86_AT(c, 0xecb92u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0ecb94  call 0xe6858
    X86_AT(c, 0xecb94u);
    push32(c, 0xecb99u); f_000e6858(c); X86_RET(c, 0xecb99u);
    X86_TICK(c, 9);
    // 0ecb99  push 5
    X86_AT(c, 0xecb99u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0ecb9b  call 0xe693c
    X86_AT(c, 0xecb9bu);
    push32(c, 0xecba0u); f_000e693c(c); X86_RET(c, 0xecba0u);
    X86_TICK(c, 9);
    // 0ecba0  push 5
    X86_AT(c, 0xecba0u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0ecba2  call 0xe699c
    X86_AT(c, 0xecba2u);
    push32(c, 0xecba7u); f_000e699c(c); X86_RET(c, 0xecba7u);
    X86_TICK(c, 9);
    // 0ecba7  push 5
    X86_AT(c, 0xecba7u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0ecba9  call 0xe693c
    X86_AT(c, 0xecba9u);
    push32(c, 0xecbaeu); f_000e693c(c); X86_RET(c, 0xecbaeu);
    X86_TICK(c, 13);
    // 0ecbae  push 0
    X86_AT(c, 0xecbaeu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0ecbb0  push 4
    X86_AT(c, 0xecbb0u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ecbb2  push 5
    X86_AT(c, 0xecbb2u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0ecbb4  call 0xe7260
    X86_AT(c, 0xecbb4u);
    push32(c, 0xecbb9u); f_000e7260(c); X86_RET(c, 0xecbb9u);
    X86_TICK(c, 13);
    // 0ecbb9  add esp, 0x40
    X86_AT(c, 0xecbb9u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x40u, 0, 4); }
    // 0ecbbc  push 0x314c
    X86_AT(c, 0xecbbcu);
    { uint32_t v = 0x314Cu; push32(c, v); }
    // 0ecbc1  push 5
    X86_AT(c, 0xecbc1u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0ecbc3  call 0xe5654
    X86_AT(c, 0xecbc3u);
    push32(c, 0xecbc8u); f_000e5654(c); X86_RET(c, 0xecbc8u);
    X86_TICK(c, 13);
    // 0ecbc8  push 1
    X86_AT(c, 0xecbc8u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0ecbca  push 6
    X86_AT(c, 0xecbcau);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0ecbcc  push 5
    X86_AT(c, 0xecbccu);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0ecbce  call 0xe7260
    X86_AT(c, 0xecbceu);
    push32(c, 0xecbd3u); f_000e7260(c); X86_RET(c, 0xecbd3u);
    X86_TICK(c, 11);
    // 0ecbd3  push 0x3168
    X86_AT(c, 0xecbd3u);
    { uint32_t v = 0x3168u; push32(c, v); }
    // 0ecbd8  push 5
    X86_AT(c, 0xecbd8u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0ecbda  call 0xe5654
    X86_AT(c, 0xecbdau);
    push32(c, 0xecbdfu); f_000e5654(c); X86_RET(c, 0xecbdfu);
    X86_TICK(c, 13);
    // 0ecbdf  push 2
    X86_AT(c, 0xecbdfu);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0ecbe1  push 6
    X86_AT(c, 0xecbe1u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0ecbe3  push 5
    X86_AT(c, 0xecbe3u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0ecbe5  call 0xe7260
    X86_AT(c, 0xecbe5u);
    push32(c, 0xecbeau); f_000e7260(c); X86_RET(c, 0xecbeau);
    X86_TICK(c, 11);
    // 0ecbea  push 0x3180
    X86_AT(c, 0xecbeau);
    { uint32_t v = 0x3180u; push32(c, v); }
    // 0ecbef  push 5
    X86_AT(c, 0xecbefu);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0ecbf1  call 0xe5654
    X86_AT(c, 0xecbf1u);
    push32(c, 0xecbf6u); f_000e5654(c); X86_RET(c, 0xecbf6u);
    X86_TICK(c, 13);
    // 0ecbf6  push 3
    X86_AT(c, 0xecbf6u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0ecbf8  push 6
    X86_AT(c, 0xecbf8u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0ecbfa  push 5
    X86_AT(c, 0xecbfau);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0ecbfc  call 0xe7260
    X86_AT(c, 0xecbfcu);
    push32(c, 0xecc01u); f_000e7260(c); X86_RET(c, 0xecc01u);
    X86_TICK(c, 13);
    // 0ecc01  add esp, 0x3c
    X86_AT(c, 0xecc01u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x3Cu, 0, 4); }
    // 0ecc04  push 0x3198
    X86_AT(c, 0xecc04u);
    { uint32_t v = 0x3198u; push32(c, v); }
    // 0ecc09  push 5
    X86_AT(c, 0xecc09u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0ecc0b  call 0xe5654
    X86_AT(c, 0xecc0bu);
    push32(c, 0xecc10u); f_000e5654(c); X86_RET(c, 0xecc10u);
    X86_TICK(c, 13);
    // 0ecc10  push 4
    X86_AT(c, 0xecc10u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ecc12  push 6
    X86_AT(c, 0xecc12u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0ecc14  push 5
    X86_AT(c, 0xecc14u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0ecc16  call 0xe7260
    X86_AT(c, 0xecc16u);
    push32(c, 0xecc1bu); f_000e7260(c); X86_RET(c, 0xecc1bu);
    X86_TICK(c, 11);
    // 0ecc1b  push 0x31b4
    X86_AT(c, 0xecc1bu);
    { uint32_t v = 0x31B4u; push32(c, v); }
    // 0ecc20  push 5
    X86_AT(c, 0xecc20u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0ecc22  call 0xe5654
    X86_AT(c, 0xecc22u);
    push32(c, 0xecc27u); f_000e5654(c); X86_RET(c, 0xecc27u);
    X86_TICK(c, 13);
    // 0ecc27  push 0xc
    X86_AT(c, 0xecc27u);
    { uint32_t v = 0xCu; push32(c, v); }
    // 0ecc29  push 0x28
    X86_AT(c, 0xecc29u);
    { uint32_t v = 0x28u; push32(c, v); }
    // 0ecc2b  push 4
    X86_AT(c, 0xecc2bu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ecc2d  call 0xe7260
    X86_AT(c, 0xecc2du);
    push32(c, 0xecc32u); f_000e7260(c); X86_RET(c, 0xecc32u);
    X86_TICK(c, 11);
    // 0ecc32  add esp, 0x28
    X86_AT(c, 0xecc32u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x28u, 0, 4); }
    // 0ecc35  push 4
    X86_AT(c, 0xecc35u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ecc37  call 0xe693c
    X86_AT(c, 0xecc37u);
    push32(c, 0xecc3cu); f_000e693c(c); X86_RET(c, 0xecc3cu);
    X86_TICK(c, 11);
    // 0ecc3c  push 0x31d0
    X86_AT(c, 0xecc3cu);
    { uint32_t v = 0x31D0u; push32(c, v); }
    // 0ecc41  push 4
    X86_AT(c, 0xecc41u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ecc43  call 0xe6cb0
    X86_AT(c, 0xecc43u);
    push32(c, 0xecc48u); f_000e6cb0(c); X86_RET(c, 0xecc48u);
    X86_TICK(c, 2);
    // 0ecc48  add esp, 0xc
    X86_AT(c, 0xecc48u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
L_ecc4b:
    X86_TICK(c, 13);
    // 0ecc4b  push 0xc
    X86_AT(c, 0xecc4bu);
    { uint32_t v = 0xCu; push32(c, v); }
    // 0ecc4d  push 0x28
    X86_AT(c, 0xecc4du);
    { uint32_t v = 0x28u; push32(c, v); }
    // 0ecc4f  push 4
    X86_AT(c, 0xecc4fu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ecc51  call 0xe7260
    X86_AT(c, 0xecc51u);
    push32(c, 0xecc56u); f_000e7260(c); X86_RET(c, 0xecc56u);
    X86_TICK(c, 9);
    // 0ecc56  push 4
    X86_AT(c, 0xecc56u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ecc58  call 0xe432c
    X86_AT(c, 0xecc58u);
    push32(c, 0xecc5du); f_000e432c(c); X86_RET(c, 0xecc5du);
    X86_TICK(c, 12);
    // 0ecc5d  xchg ebx, eax
    X86_AT(c, 0xecc5du);
    { uint32_t t = c.r[3]; c.r[3] = c.r[0]; c.r[0] = t; }
    // 0ecc5e  add esp, 0x10
    X86_AT(c, 0xecc5eu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0ecc61  cmp bl, 5
    X86_AT(c, 0xecc61u);
    (void)x86_sub(c, g8(c, 3), 0x5u, 0, 1);
    // 0ecc64  je 0xecd73
    X86_AT(c, 0xecc64u);
    if (x86_cc(c, 4)) { goto L_ecd73; }
    X86_TICK(c, 7);
    // 0ecc6a  cmp bl, 6
    X86_AT(c, 0xecc6au);
    (void)x86_sub(c, g8(c, 3), 0x6u, 0, 1);
    // 0ecc6d  je 0xecd73
    X86_AT(c, 0xecc6du);
    if (x86_cc(c, 4)) { goto L_ecd73; }
    X86_TICK(c, 7);
    // 0ecc73  cmp bl, 1
    X86_AT(c, 0xecc73u);
    (void)x86_sub(c, g8(c, 3), 0x1u, 0, 1);
    // 0ecc76  je 0xecd73
    X86_AT(c, 0xecc76u);
    if (x86_cc(c, 4)) { goto L_ecd73; }
    X86_TICK(c, 17);
    // 0ecc7c  lea eax, [ebp - 0x35]
    X86_AT(c, 0xecc7cu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFCBu);
    // 0ecc7f  push eax
    X86_AT(c, 0xecc7fu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ecc80  push ebx
    X86_AT(c, 0xecc80u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0ecc81  push 4
    X86_AT(c, 0xecc81u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ecc83  push 0xcf2a0
    X86_AT(c, 0xecc83u);
    { uint32_t v = 0xCF2A0u; push32(c, v); }
    // 0ecc88  call 0xe53e0
    X86_AT(c, 0xecc88u);
    push32(c, 0xecc8du); f_000e53e0(c); X86_RET(c, 0xecc8du);
    X86_TICK(c, 11);
    // 0ecc8d  mov dword ptr [ebp - 0x48], eax
    X86_AT(c, 0xecc8du);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFB8u)), c.r[0]);
    // 0ecc90  push 4
    X86_AT(c, 0xecc90u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ecc92  call 0xe693c
    X86_AT(c, 0xecc92u);
    push32(c, 0xecc97u); f_000e693c(c); X86_RET(c, 0xecc97u);
    X86_TICK(c, 14);
    // 0ecc97  add esp, 0x14
    X86_AT(c, 0xecc97u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x14u, 0, 4); }
    // 0ecc9a  cmp dword ptr [ebp - 0x48], 0
    X86_AT(c, 0xecc9au);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFB8u))), 0x0u, 0, 4);
    // 0ecc9e  je 0xecc4b
    X86_AT(c, 0xecc9eu);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xecc4bu); goto L_ecc4b; }
    X86_TICK(c, 13);
    // 0ecca0  push 0xc
    X86_AT(c, 0xecca0u);
    { uint32_t v = 0xCu; push32(c, v); }
    // 0ecca2  push 0x28
    X86_AT(c, 0xecca2u);
    { uint32_t v = 0x28u; push32(c, v); }
    // 0ecca4  push 4
    X86_AT(c, 0xecca4u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ecca6  call 0xe7260
    X86_AT(c, 0xecca6u);
    push32(c, 0xeccabu); f_000e7260(c); X86_RET(c, 0xeccabu);
    X86_TICK(c, 14);
    // 0eccab  push dword ptr [ebp - 0x48]
    X86_AT(c, 0xeccabu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFB8u))); push32(c, v); }
    // 0eccae  push 4
    X86_AT(c, 0xeccaeu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0eccb0  call 0xe6cb0
    X86_AT(c, 0xeccb0u);
    push32(c, 0xeccb5u); f_000e6cb0(c); X86_RET(c, 0xeccb5u);
    X86_TICK(c, 27);
    // 0eccb5  sub eax, eax
    X86_AT(c, 0xeccb5u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0eccb7  mov dword ptr [ebp - 0x28], eax
    X86_AT(c, 0xeccb7u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFD8u)), c.r[0]);
    // 0eccba  mov dword ptr [ebp - 0x20], eax
    X86_AT(c, 0xeccbau);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE0u)), c.r[0]);
    // 0eccbd  mov dword ptr [ebp - 0x18], eax
    X86_AT(c, 0xeccbdu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE8u)), c.r[0]);
    // 0eccc0  mov dword ptr [ebp - 0x10], eax
    X86_AT(c, 0xeccc0u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u)), c.r[0]);
    // 0eccc3  add esp, 0x14
    X86_AT(c, 0xeccc3u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x14u, 0, 4); }
    // 0eccc6  movzx edx, byte ptr [ebp - 0x35]
    X86_AT(c, 0xeccc6u);
    c.r[2] = rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFCBu)));
    // 0eccca  sub edx, 0x42
    X86_AT(c, 0xecccau);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, 0x42u, 0, 4); }
    // 0ecccd  cmp edx, 6
    X86_AT(c, 0xecccdu);
    (void)x86_sub(c, c.r[2], 0x6u, 0, 4);
    // 0eccd0  ja 0xecd73
    X86_AT(c, 0xeccd0u);
    if (x86_cc(c, 7)) { goto L_ecd73; }
    X86_TICK(c, 7);
    // 0eccd6  jmp dword ptr cs:[edx*4 + 0xeccde]
    X86_AT(c, 0xeccd6u);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xECCDEu)));
      switch (t) {
      case 0xeccfau: goto L_eccfa;
      case 0xecd17u: goto L_ecd17;
      case 0xecd34u: goto L_ecd34;
      case 0xecd51u: goto L_ecd51;
      case 0xecd73u: goto L_ecd73;
      default: x86_jump(c, t); return; } }
L_eccfa:
    X86_TICK(c, 22);
    // 0eccfa  mov eax, edi
    X86_AT(c, 0xeccfau);
    c.r[0] = c.r[7];
    // 0eccfc  lea edx, [eax + eax*4]
    X86_AT(c, 0xeccfcu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0eccff  lea edx, [eax + edx*2]
    X86_AT(c, 0xeccffu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0ecd02  shl edx, 5
    X86_AT(c, 0xecd02u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0ecd05  sub edx, eax
    X86_AT(c, 0xecd05u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0ecd07  mov byte ptr [edx + 0xcde7a], 0x48
    X86_AT(c, 0xecd07u);
    wr8((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE7Au)), 0x48u);
    // 0ecd0e  mov dword ptr [ebp - 0x28], 5
    X86_AT(c, 0xecd0eu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFD8u)), 0x5u);
    // 0ecd15  jmp 0xecd73
    X86_AT(c, 0xecd15u);
    goto L_ecd73;
L_ecd17:
    X86_TICK(c, 22);
    // 0ecd17  mov eax, edi
    X86_AT(c, 0xecd17u);
    c.r[0] = c.r[7];
    // 0ecd19  lea edx, [eax + eax*4]
    X86_AT(c, 0xecd19u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0ecd1c  lea edx, [eax + edx*2]
    X86_AT(c, 0xecd1cu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0ecd1f  shl edx, 5
    X86_AT(c, 0xecd1fu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0ecd22  sub edx, eax
    X86_AT(c, 0xecd22u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0ecd24  mov byte ptr [edx + 0xcde7a], 0x45
    X86_AT(c, 0xecd24u);
    wr8((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE7Au)), 0x45u);
    // 0ecd2b  mov dword ptr [ebp - 0x18], 5
    X86_AT(c, 0xecd2bu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE8u)), 0x5u);
    // 0ecd32  jmp 0xecd73
    X86_AT(c, 0xecd32u);
    goto L_ecd73;
L_ecd34:
    X86_TICK(c, 22);
    // 0ecd34  mov eax, edi
    X86_AT(c, 0xecd34u);
    c.r[0] = c.r[7];
    // 0ecd36  lea edx, [eax + eax*4]
    X86_AT(c, 0xecd36u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0ecd39  lea edx, [eax + edx*2]
    X86_AT(c, 0xecd39u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0ecd3c  shl edx, 5
    X86_AT(c, 0xecd3cu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0ecd3f  sub edx, eax
    X86_AT(c, 0xecd3fu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0ecd41  mov byte ptr [edx + 0xcde7a], 0x44
    X86_AT(c, 0xecd41u);
    wr8((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE7Au)), 0x44u);
    // 0ecd48  mov dword ptr [ebp - 0x10], 5
    X86_AT(c, 0xecd48u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u)), 0x5u);
    // 0ecd4f  jmp 0xecd73
    X86_AT(c, 0xecd4fu);
    goto L_ecd73;
L_ecd51:
    X86_TICK(c, 17);
    // 0ecd51  mov eax, edi
    X86_AT(c, 0xecd51u);
    c.r[0] = c.r[7];
    // 0ecd53  lea edx, [eax + eax*4]
    X86_AT(c, 0xecd53u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0ecd56  lea edx, [eax + edx*2]
    X86_AT(c, 0xecd56u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0ecd59  shl edx, 5
    X86_AT(c, 0xecd59u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0ecd5c  sub edx, eax
    X86_AT(c, 0xecd5cu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0ecd5e  mov byte ptr [edx + 0xcde7a], 0x42
    X86_AT(c, 0xecd5eu);
    wr8((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE7Au)), 0x42u);
    // 0ecd65  mov dword ptr [ebp - 0x10], 0xfffffffb
    X86_AT(c, 0xecd65u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u)), 0xFFFFFFFBu);
    // 0ecd6c  mov dword ptr [ebp - 0x20], 0xa
    X86_AT(c, 0xecd6cu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE0u)), 0xAu);
L_ecd73:
    X86_TICK(c, 7);
    // 0ecd73  cmp bl, 5
    X86_AT(c, 0xecd73u);
    (void)x86_sub(c, g8(c, 3), 0x5u, 0, 1);
    // 0ecd76  jne 0xecdbd
    X86_AT(c, 0xecd76u);
    if (x86_cc(c, 5)) { goto L_ecdbd; }
    X86_TICK(c, 15);
    // 0ecd78  mov eax, 5
    X86_AT(c, 0xecd78u);
    c.r[0] = 0x5u;
    // 0ecd7d  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0xecd7du);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
    // 0ecd80  push 0xd
    X86_AT(c, 0xecd80u);
    { uint32_t v = 0xDu; push32(c, v); }
    // 0ecd82  push eax
    X86_AT(c, 0xecd82u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ecd83  call 0xe6b70
    X86_AT(c, 0xecd83u);
    push32(c, 0xecd88u); f_000e6b70(c); X86_RET(c, 0xecd88u);
    X86_TICK(c, 9);
    // 0ecd88  push 4
    X86_AT(c, 0xecd88u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ecd8a  call 0xe693c
    X86_AT(c, 0xecd8au);
    push32(c, 0xecd8fu); f_000e693c(c); X86_RET(c, 0xecd8fu);
    X86_TICK(c, 32);
    // 0ecd8f  lea eax, [ebp - 0x35]
    X86_AT(c, 0xecd8fu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFCBu);
    // 0ecd92  push eax
    X86_AT(c, 0xecd92u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ecd93  mov eax, edi
    X86_AT(c, 0xecd93u);
    c.r[0] = c.r[7];
    // 0ecd95  lea edx, [eax + eax*4]
    X86_AT(c, 0xecd95u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0ecd98  lea edx, [eax + edx*2]
    X86_AT(c, 0xecd98u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0ecd9b  shl edx, 5
    X86_AT(c, 0xecd9bu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0ecd9e  sub edx, eax
    X86_AT(c, 0xecd9eu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0ecda0  mov al, byte ptr [edx + 0xcde7a]
    X86_AT(c, 0xecda0u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE7Au))));
    // 0ecda6  push eax
    X86_AT(c, 0xecda6u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ecda7  push 4
    X86_AT(c, 0xecda7u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ecda9  push 0xcf2a0
    X86_AT(c, 0xecda9u);
    { uint32_t v = 0xCF2A0u; push32(c, v); }
    // 0ecdae  call 0xe53e0
    X86_AT(c, 0xecdaeu);
    push32(c, 0xecdb3u); f_000e53e0(c); X86_RET(c, 0xecdb3u);
    X86_TICK(c, 11);
    // 0ecdb3  mov dword ptr [ebp - 0x48], eax
    X86_AT(c, 0xecdb3u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFB8u)), c.r[0]);
    // 0ecdb6  push 0xc
    X86_AT(c, 0xecdb6u);
    { uint32_t v = 0xCu; push32(c, v); }
    // 0ecdb8  jmp 0xed276
    X86_AT(c, 0xecdb8u);
    goto L_ed276;
L_ecdbd:
    X86_TICK(c, 7);
    // 0ecdbd  cmp bl, 6
    X86_AT(c, 0xecdbdu);
    (void)x86_sub(c, g8(c, 3), 0x6u, 0, 1);
    // 0ecdc0  jne 0xece07
    X86_AT(c, 0xecdc0u);
    if (x86_cc(c, 5)) { goto L_ece07; }
    X86_TICK(c, 13);
    // 0ecdc2  mov dword ptr [ebp - 4], 7
    X86_AT(c, 0xecdc2u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), 0x7u);
    // 0ecdc9  push 0xd
    X86_AT(c, 0xecdc9u);
    { uint32_t v = 0xDu; push32(c, v); }
    // 0ecdcb  push 5
    X86_AT(c, 0xecdcbu);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0ecdcd  call 0xe6b70
    X86_AT(c, 0xecdcdu);
    push32(c, 0xecdd2u); f_000e6b70(c); X86_RET(c, 0xecdd2u);
    X86_TICK(c, 9);
    // 0ecdd2  push 4
    X86_AT(c, 0xecdd2u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ecdd4  call 0xe693c
    X86_AT(c, 0xecdd4u);
    push32(c, 0xecdd9u); f_000e693c(c); X86_RET(c, 0xecdd9u);
    X86_TICK(c, 32);
    // 0ecdd9  lea eax, [ebp - 0x35]
    X86_AT(c, 0xecdd9u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFCBu);
    // 0ecddc  push eax
    X86_AT(c, 0xecddcu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ecddd  mov eax, edi
    X86_AT(c, 0xecdddu);
    c.r[0] = c.r[7];
    // 0ecddf  lea edx, [eax + eax*4]
    X86_AT(c, 0xecddfu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0ecde2  lea edx, [eax + edx*2]
    X86_AT(c, 0xecde2u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0ecde5  shl edx, 5
    X86_AT(c, 0xecde5u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0ecde8  sub edx, eax
    X86_AT(c, 0xecde8u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0ecdea  mov al, byte ptr [edx + 0xcde7a]
    X86_AT(c, 0xecdeau);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE7Au))));
    // 0ecdf0  push eax
    X86_AT(c, 0xecdf0u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ecdf1  push 4
    X86_AT(c, 0xecdf1u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ecdf3  push 0xcf2a0
    X86_AT(c, 0xecdf3u);
    { uint32_t v = 0xCF2A0u; push32(c, v); }
    // 0ecdf8  call 0xe53e0
    X86_AT(c, 0xecdf8u);
    push32(c, 0xecdfdu); f_000e53e0(c); X86_RET(c, 0xecdfdu);
    X86_TICK(c, 11);
    // 0ecdfd  mov dword ptr [ebp - 0x48], eax
    X86_AT(c, 0xecdfdu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFB8u)), c.r[0]);
    // 0ece00  push 0xc
    X86_AT(c, 0xece00u);
    { uint32_t v = 0xCu; push32(c, v); }
    // 0ece02  jmp 0xed012
    X86_AT(c, 0xece02u);
    goto L_ed012;
L_ece07:
    X86_TICK(c, 7);
    // 0ece07  cmp bl, 1
    X86_AT(c, 0xece07u);
    (void)x86_sub(c, g8(c, 3), 0x1u, 0, 1);
    // 0ece0a  je 0xed2a4
    X86_AT(c, 0xece0au);
    if (x86_cc(c, 4)) { goto L_ed2a4; }
    X86_TICK(c, 11);
    // 0ece10  push 0xd
    X86_AT(c, 0xece10u);
    { uint32_t v = 0xDu; push32(c, v); }
    // 0ece12  push 5
    X86_AT(c, 0xece12u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0ece14  call 0xe6b70
    X86_AT(c, 0xece14u);
    push32(c, 0xece19u); f_000e6b70(c); X86_RET(c, 0xece19u);
    X86_TICK(c, 9);
    // 0ece19  mov dword ptr [ebp - 4], 7
    X86_AT(c, 0xece19u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), 0x7u);
    // 0ece20  jmp 0xed2ca
    X86_AT(c, 0xece20u);
    goto L_ed2ca;
L_ece25:
    X86_TICK(c, 27);
    // 0ece25  push 0xa
    X86_AT(c, 0xece25u);
    { uint32_t v = 0xAu; push32(c, v); }
    // 0ece27  push 0xf
    X86_AT(c, 0xece27u);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0ece29  push 0xb
    X86_AT(c, 0xece29u);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0ece2b  push 2
    X86_AT(c, 0xece2bu);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0ece2d  push 0x19
    X86_AT(c, 0xece2du);
    { uint32_t v = 0x19u; push32(c, v); }
    // 0ece2f  push 0x40
    X86_AT(c, 0xece2fu);
    { uint32_t v = 0x40u; push32(c, v); }
    // 0ece31  push 0xd0
    X86_AT(c, 0xece31u);
    { uint32_t v = 0xD0u; push32(c, v); }
    // 0ece36  push 0x128
    X86_AT(c, 0xece36u);
    { uint32_t v = 0x128u; push32(c, v); }
    // 0ece3b  push 0xd0
    X86_AT(c, 0xece3bu);
    { uint32_t v = 0xD0u; push32(c, v); }
    // 0ece40  push 5
    X86_AT(c, 0xece40u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0ece42  call 0xe6858
    X86_AT(c, 0xece42u);
    push32(c, 0xece47u); f_000e6858(c); X86_RET(c, 0xece47u);
    X86_TICK(c, 9);
    // 0ece47  push 5
    X86_AT(c, 0xece47u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0ece49  call 0xe693c
    X86_AT(c, 0xece49u);
    push32(c, 0xece4eu); f_000e693c(c); X86_RET(c, 0xece4eu);
    X86_TICK(c, 9);
    // 0ece4e  push 5
    X86_AT(c, 0xece4eu);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0ece50  call 0xe699c
    X86_AT(c, 0xece50u);
    push32(c, 0xece55u); f_000e699c(c); X86_RET(c, 0xece55u);
    X86_TICK(c, 9);
    // 0ece55  push 5
    X86_AT(c, 0xece55u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0ece57  call 0xe693c
    X86_AT(c, 0xece57u);
    push32(c, 0xece5cu); f_000e693c(c); X86_RET(c, 0xece5cu);
    X86_TICK(c, 13);
    // 0ece5c  push 0
    X86_AT(c, 0xece5cu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0ece5e  push 4
    X86_AT(c, 0xece5eu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ece60  push 5
    X86_AT(c, 0xece60u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0ece62  call 0xe7260
    X86_AT(c, 0xece62u);
    push32(c, 0xece67u); f_000e7260(c); X86_RET(c, 0xece67u);
    X86_TICK(c, 13);
    // 0ece67  add esp, 0x40
    X86_AT(c, 0xece67u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x40u, 0, 4); }
    // 0ece6a  push 0x31e4
    X86_AT(c, 0xece6au);
    { uint32_t v = 0x31E4u; push32(c, v); }
    // 0ece6f  push 5
    X86_AT(c, 0xece6fu);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0ece71  call 0xe5654
    X86_AT(c, 0xece71u);
    push32(c, 0xece76u); f_000e5654(c); X86_RET(c, 0xece76u);
    X86_TICK(c, 13);
    // 0ece76  push 1
    X86_AT(c, 0xece76u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0ece78  push 6
    X86_AT(c, 0xece78u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0ece7a  push 5
    X86_AT(c, 0xece7au);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0ece7c  call 0xe7260
    X86_AT(c, 0xece7cu);
    push32(c, 0xece81u); f_000e7260(c); X86_RET(c, 0xece81u);
    X86_TICK(c, 11);
    // 0ece81  push 0x31fc
    X86_AT(c, 0xece81u);
    { uint32_t v = 0x31FCu; push32(c, v); }
    // 0ece86  push 5
    X86_AT(c, 0xece86u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0ece88  call 0xe5654
    X86_AT(c, 0xece88u);
    push32(c, 0xece8du); f_000e5654(c); X86_RET(c, 0xece8du);
    X86_TICK(c, 13);
    // 0ece8d  push 2
    X86_AT(c, 0xece8du);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0ece8f  push 6
    X86_AT(c, 0xece8fu);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0ece91  push 5
    X86_AT(c, 0xece91u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0ece93  call 0xe7260
    X86_AT(c, 0xece93u);
    push32(c, 0xece98u); f_000e7260(c); X86_RET(c, 0xece98u);
    X86_TICK(c, 11);
    // 0ece98  push 0x3214
    X86_AT(c, 0xece98u);
    { uint32_t v = 0x3214u; push32(c, v); }
    // 0ece9d  push 5
    X86_AT(c, 0xece9du);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0ece9f  call 0xe5654
    X86_AT(c, 0xece9fu);
    push32(c, 0xecea4u); f_000e5654(c); X86_RET(c, 0xecea4u);
    X86_TICK(c, 13);
    // 0ecea4  push 0xd
    X86_AT(c, 0xecea4u);
    { uint32_t v = 0xDu; push32(c, v); }
    // 0ecea6  push 0x28
    X86_AT(c, 0xecea6u);
    { uint32_t v = 0x28u; push32(c, v); }
    // 0ecea8  push 4
    X86_AT(c, 0xecea8u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0eceaa  call 0xe7260
    X86_AT(c, 0xeceaau);
    push32(c, 0xeceafu); f_000e7260(c); X86_RET(c, 0xeceafu);
    X86_TICK(c, 11);
    // 0eceaf  add esp, 0x3c
    X86_AT(c, 0xeceafu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x3Cu, 0, 4); }
    // 0eceb2  push 4
    X86_AT(c, 0xeceb2u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0eceb4  call 0xe693c
    X86_AT(c, 0xeceb4u);
    push32(c, 0xeceb9u); f_000e693c(c); X86_RET(c, 0xeceb9u);
    X86_TICK(c, 11);
    // 0eceb9  push 0x3230
    X86_AT(c, 0xeceb9u);
    { uint32_t v = 0x3230u; push32(c, v); }
    // 0ecebe  push 4
    X86_AT(c, 0xecebeu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ecec0  call 0xe6cb0
    X86_AT(c, 0xecec0u);
    push32(c, 0xecec5u); f_000e6cb0(c); X86_RET(c, 0xecec5u);
    X86_TICK(c, 2);
    // 0ecec5  add esp, 0xc
    X86_AT(c, 0xecec5u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
L_ecec8:
    X86_TICK(c, 13);
    // 0ecec8  push 0xd
    X86_AT(c, 0xecec8u);
    { uint32_t v = 0xDu; push32(c, v); }
    // 0ececa  push 0x28
    X86_AT(c, 0xececau);
    { uint32_t v = 0x28u; push32(c, v); }
    // 0ececc  push 4
    X86_AT(c, 0xececcu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ecece  call 0xe7260
    X86_AT(c, 0xececeu);
    push32(c, 0xeced3u); f_000e7260(c); X86_RET(c, 0xeced3u);
    X86_TICK(c, 9);
    // 0eced3  push 4
    X86_AT(c, 0xeced3u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0eced5  call 0xe432c
    X86_AT(c, 0xeced5u);
    push32(c, 0xecedau); f_000e432c(c); X86_RET(c, 0xecedau);
    X86_TICK(c, 12);
    // 0eceda  xchg ebx, eax
    X86_AT(c, 0xecedau);
    { uint32_t t = c.r[3]; c.r[3] = c.r[0]; c.r[0] = t; }
    // 0ecedb  add esp, 0x10
    X86_AT(c, 0xecedbu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0ecede  cmp bl, 5
    X86_AT(c, 0xecedeu);
    (void)x86_sub(c, g8(c, 3), 0x5u, 0, 1);
    // 0ecee1  je 0xecf83
    X86_AT(c, 0xecee1u);
    if (x86_cc(c, 4)) { goto L_ecf83; }
    X86_TICK(c, 7);
    // 0ecee7  cmp bl, 6
    X86_AT(c, 0xecee7u);
    (void)x86_sub(c, g8(c, 3), 0x6u, 0, 1);
    // 0eceea  je 0xecf83
    X86_AT(c, 0xeceeau);
    if (x86_cc(c, 4)) { goto L_ecf83; }
    X86_TICK(c, 7);
    // 0ecef0  cmp bl, 1
    X86_AT(c, 0xecef0u);
    (void)x86_sub(c, g8(c, 3), 0x1u, 0, 1);
    // 0ecef3  je 0xecf83
    X86_AT(c, 0xecef3u);
    if (x86_cc(c, 4)) { goto L_ecf83; }
    X86_TICK(c, 17);
    // 0ecef9  lea eax, [ebp - 0x35]
    X86_AT(c, 0xecef9u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFCBu);
    // 0ecefc  push eax
    X86_AT(c, 0xecefcu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ecefd  push ebx
    X86_AT(c, 0xecefdu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0ecefe  push 3
    X86_AT(c, 0xecefeu);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0ecf00  push 0xcf6c0
    X86_AT(c, 0xecf00u);
    { uint32_t v = 0xCF6C0u; push32(c, v); }
    // 0ecf05  call 0xe53e0
    X86_AT(c, 0xecf05u);
    push32(c, 0xecf0au); f_000e53e0(c); X86_RET(c, 0xecf0au);
    X86_TICK(c, 11);
    // 0ecf0a  mov dword ptr [ebp - 0x48], eax
    X86_AT(c, 0xecf0au);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFB8u)), c.r[0]);
    // 0ecf0d  push 4
    X86_AT(c, 0xecf0du);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ecf0f  call 0xe693c
    X86_AT(c, 0xecf0fu);
    push32(c, 0xecf14u); f_000e693c(c); X86_RET(c, 0xecf14u);
    X86_TICK(c, 14);
    // 0ecf14  add esp, 0x14
    X86_AT(c, 0xecf14u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x14u, 0, 4); }
    // 0ecf17  cmp dword ptr [ebp - 0x48], 0
    X86_AT(c, 0xecf17u);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFB8u))), 0x0u, 0, 4);
    // 0ecf1b  je 0xecec8
    X86_AT(c, 0xecf1bu);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xecec8u); goto L_ecec8; }
    X86_TICK(c, 13);
    // 0ecf1d  push 0xd
    X86_AT(c, 0xecf1du);
    { uint32_t v = 0xDu; push32(c, v); }
    // 0ecf1f  push 0x28
    X86_AT(c, 0xecf1fu);
    { uint32_t v = 0x28u; push32(c, v); }
    // 0ecf21  push 4
    X86_AT(c, 0xecf21u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ecf23  call 0xe7260
    X86_AT(c, 0xecf23u);
    push32(c, 0xecf28u); f_000e7260(c); X86_RET(c, 0xecf28u);
    X86_TICK(c, 14);
    // 0ecf28  push dword ptr [ebp - 0x48]
    X86_AT(c, 0xecf28u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFB8u))); push32(c, v); }
    // 0ecf2b  push 4
    X86_AT(c, 0xecf2bu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ecf2d  call 0xe6cb0
    X86_AT(c, 0xecf2du);
    push32(c, 0xecf32u); f_000e6cb0(c); X86_RET(c, 0xecf32u);
    X86_TICK(c, 21);
    // 0ecf32  sub eax, eax
    X86_AT(c, 0xecf32u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0ecf34  mov dword ptr [ebp - 0x34], eax
    X86_AT(c, 0xecf34u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFCCu)), c.r[0]);
    // 0ecf37  mov dword ptr [ebp - 0x30], eax
    X86_AT(c, 0xecf37u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFD0u)), c.r[0]);
    // 0ecf3a  add esp, 0x14
    X86_AT(c, 0xecf3au);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x14u, 0, 4); }
    // 0ecf3d  movzx edx, byte ptr [ebp - 0x35]
    X86_AT(c, 0xecf3du);
    c.r[2] = rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFCBu)));
    // 0ecf41  cmp edx, 0x46
    X86_AT(c, 0xecf41u);
    (void)x86_sub(c, c.r[2], 0x46u, 0, 4);
    // 0ecf44  je 0xecf68
    X86_AT(c, 0xecf44u);
    if (x86_cc(c, 4)) { goto L_ecf68; }
    X86_TICK(c, 7);
    // 0ecf46  cmp edx, 0x4d
    X86_AT(c, 0xecf46u);
    (void)x86_sub(c, c.r[2], 0x4Du, 0, 4);
    // 0ecf49  jne 0xecf83
    X86_AT(c, 0xecf49u);
    if (x86_cc(c, 5)) { goto L_ecf83; }
    X86_TICK(c, 22);
    // 0ecf4b  mov eax, edi
    X86_AT(c, 0xecf4bu);
    c.r[0] = c.r[7];
    // 0ecf4d  lea edx, [eax + eax*4]
    X86_AT(c, 0xecf4du);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0ecf50  lea edx, [eax + edx*2]
    X86_AT(c, 0xecf50u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0ecf53  shl edx, 5
    X86_AT(c, 0xecf53u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0ecf56  sub edx, eax
    X86_AT(c, 0xecf56u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0ecf58  mov byte ptr [edx + 0xcde7c], 0x4d
    X86_AT(c, 0xecf58u);
    wr8((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE7Cu)), 0x4Du);
    // 0ecf5f  mov dword ptr [ebp - 0x30], 0xa
    X86_AT(c, 0xecf5fu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFD0u)), 0xAu);
    // 0ecf66  jmp 0xecf83
    X86_AT(c, 0xecf66u);
    goto L_ecf83;
L_ecf68:
    X86_TICK(c, 15);
    // 0ecf68  mov eax, edi
    X86_AT(c, 0xecf68u);
    c.r[0] = c.r[7];
    // 0ecf6a  lea edx, [eax + eax*4]
    X86_AT(c, 0xecf6au);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0ecf6d  lea edx, [eax + edx*2]
    X86_AT(c, 0xecf6du);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0ecf70  shl edx, 5
    X86_AT(c, 0xecf70u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0ecf73  sub edx, eax
    X86_AT(c, 0xecf73u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0ecf75  mov byte ptr [edx + 0xcde7c], 0x46
    X86_AT(c, 0xecf75u);
    wr8((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE7Cu)), 0x46u);
    // 0ecf7c  mov dword ptr [ebp - 0x34], 0xa
    X86_AT(c, 0xecf7cu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFCCu)), 0xAu);
L_ecf83:
    X86_TICK(c, 7);
    // 0ecf83  cmp bl, 5
    X86_AT(c, 0xecf83u);
    (void)x86_sub(c, g8(c, 3), 0x5u, 0, 1);
    // 0ecf86  jne 0xecfcd
    X86_AT(c, 0xecf86u);
    if (x86_cc(c, 5)) { goto L_ecfcd; }
    X86_TICK(c, 13);
    // 0ecf88  mov dword ptr [ebp - 4], 6
    X86_AT(c, 0xecf88u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), 0x6u);
    // 0ecf8f  push 0xd
    X86_AT(c, 0xecf8fu);
    { uint32_t v = 0xDu; push32(c, v); }
    // 0ecf91  push 5
    X86_AT(c, 0xecf91u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0ecf93  call 0xe6b70
    X86_AT(c, 0xecf93u);
    push32(c, 0xecf98u); f_000e6b70(c); X86_RET(c, 0xecf98u);
    X86_TICK(c, 9);
    // 0ecf98  push 4
    X86_AT(c, 0xecf98u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ecf9a  call 0xe693c
    X86_AT(c, 0xecf9au);
    push32(c, 0xecf9fu); f_000e693c(c); X86_RET(c, 0xecf9fu);
    X86_TICK(c, 32);
    // 0ecf9f  lea eax, [ebp - 0x35]
    X86_AT(c, 0xecf9fu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFCBu);
    // 0ecfa2  push eax
    X86_AT(c, 0xecfa2u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ecfa3  mov eax, edi
    X86_AT(c, 0xecfa3u);
    c.r[0] = c.r[7];
    // 0ecfa5  lea edx, [eax + eax*4]
    X86_AT(c, 0xecfa5u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0ecfa8  lea edx, [eax + edx*2]
    X86_AT(c, 0xecfa8u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0ecfab  shl edx, 5
    X86_AT(c, 0xecfabu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0ecfae  sub edx, eax
    X86_AT(c, 0xecfaeu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0ecfb0  mov al, byte ptr [edx + 0xcde7c]
    X86_AT(c, 0xecfb0u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE7Cu))));
    // 0ecfb6  push eax
    X86_AT(c, 0xecfb6u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ecfb7  push 3
    X86_AT(c, 0xecfb7u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0ecfb9  push 0xcf6c0
    X86_AT(c, 0xecfb9u);
    { uint32_t v = 0xCF6C0u; push32(c, v); }
    // 0ecfbe  call 0xe53e0
    X86_AT(c, 0xecfbeu);
    push32(c, 0xecfc3u); f_000e53e0(c); X86_RET(c, 0xecfc3u);
    X86_TICK(c, 11);
    // 0ecfc3  mov dword ptr [ebp - 0x48], eax
    X86_AT(c, 0xecfc3u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFB8u)), c.r[0]);
    // 0ecfc6  push 0xd
    X86_AT(c, 0xecfc6u);
    { uint32_t v = 0xDu; push32(c, v); }
    // 0ecfc8  jmp 0xed276
    X86_AT(c, 0xecfc8u);
    goto L_ed276;
L_ecfcd:
    X86_TICK(c, 7);
    // 0ecfcd  cmp bl, 6
    X86_AT(c, 0xecfcdu);
    (void)x86_sub(c, g8(c, 3), 0x6u, 0, 1);
    // 0ecfd0  jne 0xed03a
    X86_AT(c, 0xecfd0u);
    if (x86_cc(c, 5)) { goto L_ed03a; }
    X86_TICK(c, 13);
    // 0ecfd2  mov dword ptr [ebp - 4], 8
    X86_AT(c, 0xecfd2u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), 0x8u);
    // 0ecfd9  push 0xd
    X86_AT(c, 0xecfd9u);
    { uint32_t v = 0xDu; push32(c, v); }
    // 0ecfdb  push 5
    X86_AT(c, 0xecfdbu);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0ecfdd  call 0xe6b70
    X86_AT(c, 0xecfddu);
    push32(c, 0xecfe2u); f_000e6b70(c); X86_RET(c, 0xecfe2u);
    X86_TICK(c, 9);
    // 0ecfe2  push 4
    X86_AT(c, 0xecfe2u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ecfe4  call 0xe693c
    X86_AT(c, 0xecfe4u);
    push32(c, 0xecfe9u); f_000e693c(c); X86_RET(c, 0xecfe9u);
    X86_TICK(c, 32);
    // 0ecfe9  lea eax, [ebp - 0x35]
    X86_AT(c, 0xecfe9u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFCBu);
    // 0ecfec  push eax
    X86_AT(c, 0xecfecu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ecfed  mov eax, edi
    X86_AT(c, 0xecfedu);
    c.r[0] = c.r[7];
    // 0ecfef  lea edx, [eax + eax*4]
    X86_AT(c, 0xecfefu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0ecff2  lea edx, [eax + edx*2]
    X86_AT(c, 0xecff2u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0ecff5  shl edx, 5
    X86_AT(c, 0xecff5u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0ecff8  sub edx, eax
    X86_AT(c, 0xecff8u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0ecffa  mov al, byte ptr [edx + 0xcde7c]
    X86_AT(c, 0xecffau);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE7Cu))));
    // 0ed000  push eax
    X86_AT(c, 0xed000u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ed001  push 3
    X86_AT(c, 0xed001u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0ed003  push 0xcf6c0
    X86_AT(c, 0xed003u);
    { uint32_t v = 0xCF6C0u; push32(c, v); }
    // 0ed008  call 0xe53e0
    X86_AT(c, 0xed008u);
    push32(c, 0xed00du); f_000e53e0(c); X86_RET(c, 0xed00du);
    X86_TICK(c, 4);
    // 0ed00d  mov dword ptr [ebp - 0x48], eax
    X86_AT(c, 0xed00du);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFB8u)), c.r[0]);
    // 0ed010  push 0xd
    X86_AT(c, 0xed010u);
    { uint32_t v = 0xDu; push32(c, v); }
L_ed012:
    X86_TICK(c, 11);
    // 0ed012  push 0x28
    X86_AT(c, 0xed012u);
    { uint32_t v = 0x28u; push32(c, v); }
    // 0ed014  push 4
    X86_AT(c, 0xed014u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ed016  call 0xe7260
    X86_AT(c, 0xed016u);
    push32(c, 0xed01bu); f_000e7260(c); X86_RET(c, 0xed01bu);
    X86_TICK(c, 14);
    // 0ed01b  add esp, 0x28
    X86_AT(c, 0xed01bu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x28u, 0, 4); }
    // 0ed01e  cmp dword ptr [ebp - 0x48], 0
    X86_AT(c, 0xed01eu);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFB8u))), 0x0u, 0, 4);
    // 0ed022  je 0xed294
    X86_AT(c, 0xed022u);
    if (x86_cc(c, 4)) { goto L_ed294; }
    X86_TICK(c, 14);
    // 0ed028  push dword ptr [ebp - 0x48]
    X86_AT(c, 0xed028u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFB8u))); push32(c, v); }
    // 0ed02b  push 4
    X86_AT(c, 0xed02bu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ed02d  call 0xe6cb0
    X86_AT(c, 0xed02du);
    push32(c, 0xed032u); f_000e6cb0(c); X86_RET(c, 0xed032u);
    X86_TICK(c, 9);
    // 0ed032  add esp, 8
    X86_AT(c, 0xed032u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0ed035  jmp 0xed294
    X86_AT(c, 0xed035u);
    goto L_ed294;
L_ed03a:
    X86_TICK(c, 7);
    // 0ed03a  cmp bl, 1
    X86_AT(c, 0xed03au);
    (void)x86_sub(c, g8(c, 3), 0x1u, 0, 1);
    // 0ed03d  je 0xed2a4
    X86_AT(c, 0xed03du);
    if (x86_cc(c, 4)) { goto L_ed2a4; }
    X86_TICK(c, 11);
    // 0ed043  push 0xd
    X86_AT(c, 0xed043u);
    { uint32_t v = 0xDu; push32(c, v); }
    // 0ed045  push 5
    X86_AT(c, 0xed045u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0ed047  call 0xe6b70
    X86_AT(c, 0xed047u);
    push32(c, 0xed04cu); f_000e6b70(c); X86_RET(c, 0xed04cu);
    X86_TICK(c, 9);
    // 0ed04c  mov dword ptr [ebp - 4], 8
    X86_AT(c, 0xed04cu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), 0x8u);
    // 0ed053  jmp 0xed2ca
    X86_AT(c, 0xed053u);
    goto L_ed2ca;
L_ed058:
    X86_TICK(c, 27);
    // 0ed058  push 0xa
    X86_AT(c, 0xed058u);
    { uint32_t v = 0xAu; push32(c, v); }
    // 0ed05a  push 0xf
    X86_AT(c, 0xed05au);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0ed05c  push 0xb
    X86_AT(c, 0xed05cu);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0ed05e  push 7
    X86_AT(c, 0xed05eu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0ed060  push 0x2f
    X86_AT(c, 0xed060u);
    { uint32_t v = 0x2Fu; push32(c, v); }
    // 0ed062  push 0x60
    X86_AT(c, 0xed062u);
    { uint32_t v = 0x60u; push32(c, v); }
    // 0ed064  push 0xd0
    X86_AT(c, 0xed064u);
    { uint32_t v = 0xD0u; push32(c, v); }
    // 0ed069  push 0x128
    X86_AT(c, 0xed069u);
    { uint32_t v = 0x128u; push32(c, v); }
    // 0ed06e  push 0xd0
    X86_AT(c, 0xed06eu);
    { uint32_t v = 0xD0u; push32(c, v); }
    // 0ed073  push 5
    X86_AT(c, 0xed073u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0ed075  call 0xe6858
    X86_AT(c, 0xed075u);
    push32(c, 0xed07au); f_000e6858(c); X86_RET(c, 0xed07au);
    X86_TICK(c, 9);
    // 0ed07a  push 5
    X86_AT(c, 0xed07au);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0ed07c  call 0xe693c
    X86_AT(c, 0xed07cu);
    push32(c, 0xed081u); f_000e693c(c); X86_RET(c, 0xed081u);
    X86_TICK(c, 9);
    // 0ed081  push 5
    X86_AT(c, 0xed081u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0ed083  call 0xe699c
    X86_AT(c, 0xed083u);
    push32(c, 0xed088u); f_000e699c(c); X86_RET(c, 0xed088u);
    X86_TICK(c, 9);
    // 0ed088  push 5
    X86_AT(c, 0xed088u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0ed08a  call 0xe693c
    X86_AT(c, 0xed08au);
    push32(c, 0xed08fu); f_000e693c(c); X86_RET(c, 0xed08fu);
    X86_TICK(c, 13);
    // 0ed08f  push 0
    X86_AT(c, 0xed08fu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0ed091  push 4
    X86_AT(c, 0xed091u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ed093  push 5
    X86_AT(c, 0xed093u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0ed095  call 0xe7260
    X86_AT(c, 0xed095u);
    push32(c, 0xed09au); f_000e7260(c); X86_RET(c, 0xed09au);
    X86_TICK(c, 13);
    // 0ed09a  add esp, 0x40
    X86_AT(c, 0xed09au);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x40u, 0, 4); }
    // 0ed09d  push 0x3240
    X86_AT(c, 0xed09du);
    { uint32_t v = 0x3240u; push32(c, v); }
    // 0ed0a2  push 5
    X86_AT(c, 0xed0a2u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0ed0a4  call 0xe5654
    X86_AT(c, 0xed0a4u);
    push32(c, 0xed0a9u); f_000e5654(c); X86_RET(c, 0xed0a9u);
    X86_TICK(c, 13);
    // 0ed0a9  push 1
    X86_AT(c, 0xed0a9u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0ed0ab  push 5
    X86_AT(c, 0xed0abu);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0ed0ad  push 5
    X86_AT(c, 0xed0adu);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0ed0af  call 0xe7260
    X86_AT(c, 0xed0afu);
    push32(c, 0xed0b4u); f_000e7260(c); X86_RET(c, 0xed0b4u);
    X86_TICK(c, 11);
    // 0ed0b4  push 0x325c
    X86_AT(c, 0xed0b4u);
    { uint32_t v = 0x325Cu; push32(c, v); }
    // 0ed0b9  push 5
    X86_AT(c, 0xed0b9u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0ed0bb  call 0xe5654
    X86_AT(c, 0xed0bbu);
    push32(c, 0xed0c0u); f_000e5654(c); X86_RET(c, 0xed0c0u);
    X86_TICK(c, 13);
    // 0ed0c0  push 2
    X86_AT(c, 0xed0c0u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0ed0c2  push 5
    X86_AT(c, 0xed0c2u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0ed0c4  push 5
    X86_AT(c, 0xed0c4u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0ed0c6  call 0xe7260
    X86_AT(c, 0xed0c6u);
    push32(c, 0xed0cbu); f_000e7260(c); X86_RET(c, 0xed0cbu);
    X86_TICK(c, 11);
    // 0ed0cb  push 0x3284
    X86_AT(c, 0xed0cbu);
    { uint32_t v = 0x3284u; push32(c, v); }
    // 0ed0d0  push 5
    X86_AT(c, 0xed0d0u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0ed0d2  call 0xe5654
    X86_AT(c, 0xed0d2u);
    push32(c, 0xed0d7u); f_000e5654(c); X86_RET(c, 0xed0d7u);
    X86_TICK(c, 13);
    // 0ed0d7  push 3
    X86_AT(c, 0xed0d7u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0ed0d9  push 5
    X86_AT(c, 0xed0d9u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0ed0db  push 5
    X86_AT(c, 0xed0dbu);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0ed0dd  call 0xe7260
    X86_AT(c, 0xed0ddu);
    push32(c, 0xed0e2u); f_000e7260(c); X86_RET(c, 0xed0e2u);
    X86_TICK(c, 13);
    // 0ed0e2  add esp, 0x3c
    X86_AT(c, 0xed0e2u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x3Cu, 0, 4); }
    // 0ed0e5  push 0x32ac
    X86_AT(c, 0xed0e5u);
    { uint32_t v = 0x32ACu; push32(c, v); }
    // 0ed0ea  push 5
    X86_AT(c, 0xed0eau);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0ed0ec  call 0xe5654
    X86_AT(c, 0xed0ecu);
    push32(c, 0xed0f1u); f_000e5654(c); X86_RET(c, 0xed0f1u);
    X86_TICK(c, 13);
    // 0ed0f1  push 4
    X86_AT(c, 0xed0f1u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ed0f3  push 5
    X86_AT(c, 0xed0f3u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0ed0f5  push 5
    X86_AT(c, 0xed0f5u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0ed0f7  call 0xe7260
    X86_AT(c, 0xed0f7u);
    push32(c, 0xed0fcu); f_000e7260(c); X86_RET(c, 0xed0fcu);
    X86_TICK(c, 11);
    // 0ed0fc  push 0x32d4
    X86_AT(c, 0xed0fcu);
    { uint32_t v = 0x32D4u; push32(c, v); }
    // 0ed101  push 5
    X86_AT(c, 0xed101u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0ed103  call 0xe5654
    X86_AT(c, 0xed103u);
    push32(c, 0xed108u); f_000e5654(c); X86_RET(c, 0xed108u);
    X86_TICK(c, 13);
    // 0ed108  push 0xe
    X86_AT(c, 0xed108u);
    { uint32_t v = 0xEu; push32(c, v); }
    // 0ed10a  push 0x28
    X86_AT(c, 0xed10au);
    { uint32_t v = 0x28u; push32(c, v); }
    // 0ed10c  push 4
    X86_AT(c, 0xed10cu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ed10e  call 0xe7260
    X86_AT(c, 0xed10eu);
    push32(c, 0xed113u); f_000e7260(c); X86_RET(c, 0xed113u);
    X86_TICK(c, 11);
    // 0ed113  add esp, 0x28
    X86_AT(c, 0xed113u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x28u, 0, 4); }
    // 0ed116  push 4
    X86_AT(c, 0xed116u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ed118  call 0xe693c
    X86_AT(c, 0xed118u);
    push32(c, 0xed11du); f_000e693c(c); X86_RET(c, 0xed11du);
    X86_TICK(c, 11);
    // 0ed11d  push 0x32fc
    X86_AT(c, 0xed11du);
    { uint32_t v = 0x32FCu; push32(c, v); }
    // 0ed122  push 4
    X86_AT(c, 0xed122u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ed124  call 0xe6cb0
    X86_AT(c, 0xed124u);
    push32(c, 0xed129u); f_000e6cb0(c); X86_RET(c, 0xed129u);
    X86_TICK(c, 2);
    // 0ed129  add esp, 0xc
    X86_AT(c, 0xed129u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
L_ed12c:
    X86_TICK(c, 13);
    // 0ed12c  push 0xe
    X86_AT(c, 0xed12cu);
    { uint32_t v = 0xEu; push32(c, v); }
    // 0ed12e  push 0x28
    X86_AT(c, 0xed12eu);
    { uint32_t v = 0x28u; push32(c, v); }
    // 0ed130  push 4
    X86_AT(c, 0xed130u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ed132  call 0xe7260
    X86_AT(c, 0xed132u);
    push32(c, 0xed137u); f_000e7260(c); X86_RET(c, 0xed137u);
    X86_TICK(c, 9);
    // 0ed137  push 4
    X86_AT(c, 0xed137u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ed139  call 0xe432c
    X86_AT(c, 0xed139u);
    push32(c, 0xed13eu); f_000e432c(c); X86_RET(c, 0xed13eu);
    X86_TICK(c, 12);
    // 0ed13e  xchg ebx, eax
    X86_AT(c, 0xed13eu);
    { uint32_t t = c.r[3]; c.r[3] = c.r[0]; c.r[0] = t; }
    // 0ed13f  add esp, 0x10
    X86_AT(c, 0xed13fu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0ed142  cmp bl, 5
    X86_AT(c, 0xed142u);
    (void)x86_sub(c, g8(c, 3), 0x5u, 0, 1);
    // 0ed145  je 0xed231
    X86_AT(c, 0xed145u);
    if (x86_cc(c, 4)) { goto L_ed231; }
    X86_TICK(c, 7);
    // 0ed14b  cmp bl, 1
    X86_AT(c, 0xed14bu);
    (void)x86_sub(c, g8(c, 3), 0x1u, 0, 1);
    // 0ed14e  je 0xed231
    X86_AT(c, 0xed14eu);
    if (x86_cc(c, 4)) { goto L_ed231; }
    X86_TICK(c, 17);
    // 0ed154  lea eax, [ebp - 0x35]
    X86_AT(c, 0xed154u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFCBu);
    // 0ed157  push eax
    X86_AT(c, 0xed157u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ed158  push ebx
    X86_AT(c, 0xed158u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0ed159  push 4
    X86_AT(c, 0xed159u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ed15b  push 0xcf4b0
    X86_AT(c, 0xed15bu);
    { uint32_t v = 0xCF4B0u; push32(c, v); }
    // 0ed160  call 0xe53e0
    X86_AT(c, 0xed160u);
    push32(c, 0xed165u); f_000e53e0(c); X86_RET(c, 0xed165u);
    X86_TICK(c, 11);
    // 0ed165  mov dword ptr [ebp - 0x48], eax
    X86_AT(c, 0xed165u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFB8u)), c.r[0]);
    // 0ed168  push 4
    X86_AT(c, 0xed168u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ed16a  call 0xe693c
    X86_AT(c, 0xed16au);
    push32(c, 0xed16fu); f_000e693c(c); X86_RET(c, 0xed16fu);
    X86_TICK(c, 14);
    // 0ed16f  add esp, 0x14
    X86_AT(c, 0xed16fu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x14u, 0, 4); }
    // 0ed172  cmp dword ptr [ebp - 0x48], 0
    X86_AT(c, 0xed172u);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFB8u))), 0x0u, 0, 4);
    // 0ed176  je 0xed12c
    X86_AT(c, 0xed176u);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xed12cu); goto L_ed12c; }
    X86_TICK(c, 13);
    // 0ed178  push 0xe
    X86_AT(c, 0xed178u);
    { uint32_t v = 0xEu; push32(c, v); }
    // 0ed17a  push 0x28
    X86_AT(c, 0xed17au);
    { uint32_t v = 0x28u; push32(c, v); }
    // 0ed17c  push 4
    X86_AT(c, 0xed17cu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ed17e  call 0xe7260
    X86_AT(c, 0xed17eu);
    push32(c, 0xed183u); f_000e7260(c); X86_RET(c, 0xed183u);
    X86_TICK(c, 14);
    // 0ed183  push dword ptr [ebp - 0x48]
    X86_AT(c, 0xed183u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFB8u))); push32(c, v); }
    // 0ed186  push 4
    X86_AT(c, 0xed186u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ed188  call 0xe6cb0
    X86_AT(c, 0xed188u);
    push32(c, 0xed18du); f_000e6cb0(c); X86_RET(c, 0xed18du);
    X86_TICK(c, 25);
    // 0ed18d  sub eax, eax
    X86_AT(c, 0xed18du);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0ed18f  mov dword ptr [ebp - 0x2c], eax
    X86_AT(c, 0xed18fu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFD4u)), c.r[0]);
    // 0ed192  mov dword ptr [ebp - 0x24], eax
    X86_AT(c, 0xed192u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFDCu)), c.r[0]);
    // 0ed195  mov dword ptr [ebp - 0x1c], eax
    X86_AT(c, 0xed195u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE4u)), c.r[0]);
    // 0ed198  mov dword ptr [ebp - 0x14], eax
    X86_AT(c, 0xed198u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu)), c.r[0]);
    // 0ed19b  add esp, 0x14
    X86_AT(c, 0xed19bu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x14u, 0, 4); }
    // 0ed19e  movzx edx, byte ptr [ebp - 0x35]
    X86_AT(c, 0xed19eu);
    c.r[2] = rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFCBu)));
    // 0ed1a2  cmp edx, 0x43
    X86_AT(c, 0xed1a2u);
    (void)x86_sub(c, c.r[2], 0x43u, 0, 4);
    // 0ed1a5  je 0xed1dc
    X86_AT(c, 0xed1a5u);
    if (x86_cc(c, 4)) { goto L_ed1dc; }
    X86_TICK(c, 7);
    // 0ed1a7  cmp edx, 0x46
    X86_AT(c, 0xed1a7u);
    (void)x86_sub(c, c.r[2], 0x46u, 0, 4);
    // 0ed1aa  je 0xed1bb
    X86_AT(c, 0xed1aau);
    if (x86_cc(c, 4)) { goto L_ed1bb; }
    X86_TICK(c, 7);
    // 0ed1ac  cmp edx, 0x54
    X86_AT(c, 0xed1acu);
    (void)x86_sub(c, c.r[2], 0x54u, 0, 4);
    // 0ed1af  je 0xed216
    X86_AT(c, 0xed1afu);
    if (x86_cc(c, 4)) { goto L_ed216; }
    X86_TICK(c, 7);
    // 0ed1b1  cmp edx, 0x57
    X86_AT(c, 0xed1b1u);
    (void)x86_sub(c, c.r[2], 0x57u, 0, 4);
    // 0ed1b4  je 0xed1f9
    X86_AT(c, 0xed1b4u);
    if (x86_cc(c, 4)) { goto L_ed1f9; }
    X86_TICK(c, 7);
    // 0ed1b6  jmp 0xed231
    X86_AT(c, 0xed1b6u);
    goto L_ed231;
L_ed1bb:
    X86_TICK(c, 26);
    // 0ed1bb  mov eax, edi
    X86_AT(c, 0xed1bbu);
    c.r[0] = c.r[7];
    // 0ed1bd  lea edx, [eax + eax*4]
    X86_AT(c, 0xed1bdu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0ed1c0  lea edx, [eax + edx*2]
    X86_AT(c, 0xed1c0u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0ed1c3  shl edx, 5
    X86_AT(c, 0xed1c3u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0ed1c6  sub edx, eax
    X86_AT(c, 0xed1c6u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0ed1c8  mov byte ptr [edx + 0xcde7b], 0x46
    X86_AT(c, 0xed1c8u);
    wr8((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE7Bu)), 0x46u);
    // 0ed1cf  mov eax, 0xa
    X86_AT(c, 0xed1cfu);
    c.r[0] = 0xAu;
    // 0ed1d4  mov dword ptr [ebp - 0x14], eax
    X86_AT(c, 0xed1d4u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu)), c.r[0]);
    // 0ed1d7  mov dword ptr [ebp - 0x1c], eax
    X86_AT(c, 0xed1d7u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE4u)), c.r[0]);
    // 0ed1da  jmp 0xed231
    X86_AT(c, 0xed1dau);
    goto L_ed231;
L_ed1dc:
    X86_TICK(c, 22);
    // 0ed1dc  mov eax, edi
    X86_AT(c, 0xed1dcu);
    c.r[0] = c.r[7];
    // 0ed1de  lea edx, [eax + eax*4]
    X86_AT(c, 0xed1deu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0ed1e1  lea edx, [eax + edx*2]
    X86_AT(c, 0xed1e1u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0ed1e4  shl edx, 5
    X86_AT(c, 0xed1e4u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0ed1e7  sub edx, eax
    X86_AT(c, 0xed1e7u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0ed1e9  mov byte ptr [edx + 0xcde7b], 0x43
    X86_AT(c, 0xed1e9u);
    wr8((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE7Bu)), 0x43u);
    // 0ed1f0  mov dword ptr [ebp - 0x24], 0xa
    X86_AT(c, 0xed1f0u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFDCu)), 0xAu);
    // 0ed1f7  jmp 0xed231
    X86_AT(c, 0xed1f7u);
    goto L_ed231;
L_ed1f9:
    X86_TICK(c, 22);
    // 0ed1f9  mov eax, edi
    X86_AT(c, 0xed1f9u);
    c.r[0] = c.r[7];
    // 0ed1fb  lea edx, [eax + eax*4]
    X86_AT(c, 0xed1fbu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0ed1fe  lea edx, [eax + edx*2]
    X86_AT(c, 0xed1feu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0ed201  shl edx, 5
    X86_AT(c, 0xed201u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0ed204  sub edx, eax
    X86_AT(c, 0xed204u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0ed206  mov byte ptr [edx + 0xcde7b], 0x57
    X86_AT(c, 0xed206u);
    wr8((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE7Bu)), 0x57u);
    // 0ed20d  mov dword ptr [ebp - 0x2c], 0xa
    X86_AT(c, 0xed20du);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFD4u)), 0xAu);
    // 0ed214  jmp 0xed231
    X86_AT(c, 0xed214u);
    goto L_ed231;
L_ed216:
    X86_TICK(c, 15);
    // 0ed216  mov eax, edi
    X86_AT(c, 0xed216u);
    c.r[0] = c.r[7];
    // 0ed218  lea edx, [eax + eax*4]
    X86_AT(c, 0xed218u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0ed21b  lea edx, [eax + edx*2]
    X86_AT(c, 0xed21bu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0ed21e  shl edx, 5
    X86_AT(c, 0xed21eu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0ed221  sub edx, eax
    X86_AT(c, 0xed221u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0ed223  mov byte ptr [edx + 0xcde7b], 0x54
    X86_AT(c, 0xed223u);
    wr8((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE7Bu)), 0x54u);
    // 0ed22a  mov dword ptr [ebp - 0x1c], 0xa
    X86_AT(c, 0xed22au);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE4u)), 0xAu);
L_ed231:
    X86_TICK(c, 7);
    // 0ed231  cmp bl, 5
    X86_AT(c, 0xed231u);
    (void)x86_sub(c, g8(c, 3), 0x5u, 0, 1);
    // 0ed234  jne 0xed29f
    X86_AT(c, 0xed234u);
    if (x86_cc(c, 5)) { goto L_ed29f; }
    X86_TICK(c, 13);
    // 0ed236  mov dword ptr [ebp - 4], 7
    X86_AT(c, 0xed236u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), 0x7u);
    // 0ed23d  push 0xd
    X86_AT(c, 0xed23du);
    { uint32_t v = 0xDu; push32(c, v); }
    // 0ed23f  push 5
    X86_AT(c, 0xed23fu);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0ed241  call 0xe6b70
    X86_AT(c, 0xed241u);
    push32(c, 0xed246u); f_000e6b70(c); X86_RET(c, 0xed246u);
    X86_TICK(c, 9);
    // 0ed246  push 4
    X86_AT(c, 0xed246u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ed248  call 0xe693c
    X86_AT(c, 0xed248u);
    push32(c, 0xed24du); f_000e693c(c); X86_RET(c, 0xed24du);
    X86_TICK(c, 32);
    // 0ed24d  lea eax, [ebp - 0x35]
    X86_AT(c, 0xed24du);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFCBu);
    // 0ed250  push eax
    X86_AT(c, 0xed250u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ed251  mov eax, edi
    X86_AT(c, 0xed251u);
    c.r[0] = c.r[7];
    // 0ed253  lea edx, [eax + eax*4]
    X86_AT(c, 0xed253u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0ed256  lea edx, [eax + edx*2]
    X86_AT(c, 0xed256u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0ed259  shl edx, 5
    X86_AT(c, 0xed259u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0ed25c  sub edx, eax
    X86_AT(c, 0xed25cu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0ed25e  mov al, byte ptr [edx + 0xcde7b]
    X86_AT(c, 0xed25eu);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE7Bu))));
    // 0ed264  push eax
    X86_AT(c, 0xed264u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ed265  push 4
    X86_AT(c, 0xed265u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ed267  push 0xcf4b0
    X86_AT(c, 0xed267u);
    { uint32_t v = 0xCF4B0u; push32(c, v); }
    // 0ed26c  call 0xe53e0
    X86_AT(c, 0xed26cu);
    push32(c, 0xed271u); f_000e53e0(c); X86_RET(c, 0xed271u);
    X86_TICK(c, 4);
    // 0ed271  mov dword ptr [ebp - 0x48], eax
    X86_AT(c, 0xed271u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFB8u)), c.r[0]);
    // 0ed274  push 0xe
    X86_AT(c, 0xed274u);
    { uint32_t v = 0xEu; push32(c, v); }
L_ed276:
    X86_TICK(c, 11);
    // 0ed276  push 0x28
    X86_AT(c, 0xed276u);
    { uint32_t v = 0x28u; push32(c, v); }
    // 0ed278  push 4
    X86_AT(c, 0xed278u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ed27a  call 0xe7260
    X86_AT(c, 0xed27au);
    push32(c, 0xed27fu); f_000e7260(c); X86_RET(c, 0xed27fu);
    X86_TICK(c, 14);
    // 0ed27f  add esp, 0x28
    X86_AT(c, 0xed27fu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x28u, 0, 4); }
    // 0ed282  cmp dword ptr [ebp - 0x48], 0
    X86_AT(c, 0xed282u);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFB8u))), 0x0u, 0, 4);
    // 0ed286  je 0xed294
    X86_AT(c, 0xed286u);
    if (x86_cc(c, 4)) { goto L_ed294; }
    X86_TICK(c, 14);
    // 0ed288  push dword ptr [ebp - 0x48]
    X86_AT(c, 0xed288u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFB8u))); push32(c, v); }
    // 0ed28b  push 4
    X86_AT(c, 0xed28bu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ed28d  call 0xe6cb0
    X86_AT(c, 0xed28du);
    push32(c, 0xed292u); f_000e6cb0(c); X86_RET(c, 0xed292u);
    X86_TICK(c, 7);
    // 0ed292  jmp 0xed2ca
    X86_AT(c, 0xed292u);
    goto L_ed2ca;
L_ed294:
    X86_TICK(c, 11);
    // 0ed294  push 0x20
    X86_AT(c, 0xed294u);
    { uint32_t v = 0x20u; push32(c, v); }
    // 0ed296  push 4
    X86_AT(c, 0xed296u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ed298  call 0xe6e28
    X86_AT(c, 0xed298u);
    push32(c, 0xed29du); f_000e6e28(c); X86_RET(c, 0xed29du);
    X86_TICK(c, 7);
    // 0ed29d  jmp 0xed2ca
    X86_AT(c, 0xed29du);
    goto L_ed2ca;
L_ed29f:
    X86_TICK(c, 7);
    // 0ed29f  cmp bl, 1
    X86_AT(c, 0xed29fu);
    (void)x86_sub(c, g8(c, 3), 0x1u, 0, 1);
    // 0ed2a2  jne 0xed2ba
    X86_AT(c, 0xed2a2u);
    if (x86_cc(c, 5)) { goto L_ed2ba; }
L_ed2a4:
    X86_TICK(c, 11);
    // 0ed2a4  push 0xd
    X86_AT(c, 0xed2a4u);
    { uint32_t v = 0xDu; push32(c, v); }
    // 0ed2a6  push 5
    X86_AT(c, 0xed2a6u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0ed2a8  call 0xe6b70
    X86_AT(c, 0xed2a8u);
    push32(c, 0xed2adu); f_000e6b70(c); X86_RET(c, 0xed2adu);
    X86_TICK(c, 11);
    // 0ed2ad  mov eax, 0xffffffff
    X86_AT(c, 0xed2adu);
    c.r[0] = 0xFFFFFFFFu;
    // 0ed2b2  add esp, 8
    X86_AT(c, 0xed2b2u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0ed2b5  jmp 0xed60a
    X86_AT(c, 0xed2b5u);
    goto L_ed60a;
L_ed2ba:
    X86_TICK(c, 11);
    // 0ed2ba  push 0xd
    X86_AT(c, 0xed2bau);
    { uint32_t v = 0xDu; push32(c, v); }
    // 0ed2bc  push 5
    X86_AT(c, 0xed2bcu);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0ed2be  call 0xe6b70
    X86_AT(c, 0xed2beu);
    push32(c, 0xed2c3u); f_000e6b70(c); X86_RET(c, 0xed2c3u);
    X86_TICK(c, 2);
    // 0ed2c3  mov dword ptr [ebp - 4], 9
    X86_AT(c, 0xed2c3u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), 0x9u);
L_ed2ca:
    X86_TICK(c, 9);
    // 0ed2ca  add esp, 8
    X86_AT(c, 0xed2cau);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0ed2cd  jmp 0xec3cf
    X86_AT(c, 0xed2cdu);
    X86_POLL(c, 0xec3cfu); goto L_ec3cf;
L_ed2d2:
    X86_TICK(c, 9);
    // 0ed2d2  push 4
    X86_AT(c, 0xed2d2u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ed2d4  call 0xe693c
    X86_AT(c, 0xed2d4u);
    push32(c, 0xed2d9u); f_000e693c(c); X86_RET(c, 0xed2d9u);
    X86_TICK(c, 13);
    // 0ed2d9  push 0xf
    X86_AT(c, 0xed2d9u);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0ed2db  push 0x28
    X86_AT(c, 0xed2dbu);
    { uint32_t v = 0x28u; push32(c, v); }
    // 0ed2dd  push 4
    X86_AT(c, 0xed2ddu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ed2df  call 0xe7260
    X86_AT(c, 0xed2dfu);
    push32(c, 0xed2e4u); f_000e7260(c); X86_RET(c, 0xed2e4u);
    X86_TICK(c, 11);
    // 0ed2e4  push 0x3314
    X86_AT(c, 0xed2e4u);
    { uint32_t v = 0x3314u; push32(c, v); }
    // 0ed2e9  push 4
    X86_AT(c, 0xed2e9u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ed2eb  call 0xe6cb0
    X86_AT(c, 0xed2ebu);
    push32(c, 0xed2f0u); f_000e6cb0(c); X86_RET(c, 0xed2f0u);
    X86_TICK(c, 13);
    // 0ed2f0  push 0xf
    X86_AT(c, 0xed2f0u);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0ed2f2  push 0x28
    X86_AT(c, 0xed2f2u);
    { uint32_t v = 0x28u; push32(c, v); }
    // 0ed2f4  push 4
    X86_AT(c, 0xed2f4u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ed2f6  call 0xe7260
    X86_AT(c, 0xed2f6u);
    push32(c, 0xed2fbu); f_000e7260(c); X86_RET(c, 0xed2fbu);
    X86_TICK(c, 15);
    // 0ed2fb  push 9
    X86_AT(c, 0xed2fbu);
    { uint32_t v = 0x9u; push32(c, v); }
    // 0ed2fd  lea eax, [ebp - 0x44]
    X86_AT(c, 0xed2fdu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFBCu);
    // 0ed300  push eax
    X86_AT(c, 0xed300u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ed301  push 4
    X86_AT(c, 0xed301u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ed303  call 0xe4f5c
    X86_AT(c, 0xed303u);
    push32(c, 0xed308u); f_000e4f5c(c); X86_RET(c, 0xed308u);
    X86_TICK(c, 9);
    // 0ed308  add esp, 0x30
    X86_AT(c, 0xed308u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x30u, 0, 4); }
    // 0ed30b  and eax, eax
    X86_AT(c, 0xed30bu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0ed30d  jne 0xed319
    X86_AT(c, 0xed30du);
    if (x86_cc(c, 5)) { goto L_ed319; }
L_ed30f:
    X86_TICK(c, 9);
    // 0ed30f  mov eax, 0xffffffff
    X86_AT(c, 0xed30fu);
    c.r[0] = 0xFFFFFFFFu;
    // 0ed314  jmp 0xed60a
    X86_AT(c, 0xed314u);
    goto L_ed60a;
L_ed319:
    X86_TICK(c, 2);
    // 0ed319  mov dword ptr [ebp - 8], 0
    X86_AT(c, 0xed319u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), 0x0u);
L_ed320:
    X86_TICK(c, 16);
    // 0ed320  mov eax, dword ptr [ebp - 8]
    X86_AT(c, 0xed320u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)));
    // 0ed323  cmp byte ptr [ebp + eax*1 - 0x44], 0x20
    X86_AT(c, 0xed323u);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + c.r[0] + 0xFFFFFFBCu))), 0x20u, 0, 1);
    // 0ed328  jne 0xed32f
    X86_AT(c, 0xed328u);
    if (x86_cc(c, 5)) { goto L_ed32f; }
    X86_TICK(c, 13);
    // 0ed32a  inc dword ptr [ebp - 8]
    X86_AT(c, 0xed32au);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0ed32d  jmp 0xed320
    X86_AT(c, 0xed32du);
    X86_POLL(c, 0xed320u); goto L_ed320;
L_ed32f:
    X86_TICK(c, 2);
    // 0ed32f  mov dword ptr [ebp - 0xc], 0
    X86_AT(c, 0xed32fu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)), 0x0u);
L_ed336:
    X86_TICK(c, 34);
    // 0ed336  mov eax, edi
    X86_AT(c, 0xed336u);
    c.r[0] = c.r[7];
    // 0ed338  lea edx, [eax + eax*4]
    X86_AT(c, 0xed338u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0ed33b  lea edx, [eax + edx*2]
    X86_AT(c, 0xed33bu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0ed33e  shl edx, 5
    X86_AT(c, 0xed33eu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0ed341  sub edx, eax
    X86_AT(c, 0xed341u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0ed343  add edx, dword ptr [ebp - 0xc]
    X86_AT(c, 0xed343u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u))), 0, 4); }
    // 0ed346  mov eax, dword ptr [ebp - 8]
    X86_AT(c, 0xed346u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)));
    // 0ed349  mov cl, byte ptr [ebp + eax*1 - 0x44]
    X86_AT(c, 0xed349u);
    s8(c, 1, rd8((c.sbase[2] + (uint32_t)(c.r[5] + c.r[0] + 0xFFFFFFBCu))));
    // 0ed34d  mov byte ptr [edx + 0xcde4d], cl
    X86_AT(c, 0xed34du);
    wr8((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE4Du)), g8(c, 1));
    // 0ed353  and cl, cl
    X86_AT(c, 0xed353u);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_logic(c, v & g8(c, 1), 1)); }
    // 0ed355  je 0xed35f
    X86_AT(c, 0xed355u);
    if (x86_cc(c, 4)) { goto L_ed35f; }
    X86_TICK(c, 19);
    // 0ed357  inc dword ptr [ebp - 8]
    X86_AT(c, 0xed357u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0ed35a  inc dword ptr [ebp - 0xc]
    X86_AT(c, 0xed35au);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0ed35d  jmp 0xed336
    X86_AT(c, 0xed35du);
    X86_POLL(c, 0xed336u); goto L_ed336;
L_ed35f:
    X86_TICK(c, 9);
    // 0ed35f  push 4
    X86_AT(c, 0xed35fu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ed361  call 0xe693c
    X86_AT(c, 0xed361u);
    push32(c, 0xed366u); f_000e693c(c); X86_RET(c, 0xed366u);
    X86_TICK(c, 13);
    // 0ed366  push 0xf
    X86_AT(c, 0xed366u);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0ed368  push 0x28
    X86_AT(c, 0xed368u);
    { uint32_t v = 0x28u; push32(c, v); }
    // 0ed36a  push 4
    X86_AT(c, 0xed36au);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ed36c  call 0xe7260
    X86_AT(c, 0xed36cu);
    push32(c, 0xed371u); f_000e7260(c); X86_RET(c, 0xed371u);
    X86_TICK(c, 24);
    // 0ed371  mov eax, edi
    X86_AT(c, 0xed371u);
    c.r[0] = c.r[7];
    // 0ed373  lea edx, [eax + eax*4]
    X86_AT(c, 0xed373u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0ed376  lea edx, [eax + edx*2]
    X86_AT(c, 0xed376u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0ed379  shl edx, 5
    X86_AT(c, 0xed379u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0ed37c  sub edx, eax
    X86_AT(c, 0xed37cu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0ed37e  add edx, 0xcde4d
    X86_AT(c, 0xed37eu);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, 0xCDE4Du, 0, 4); }
    // 0ed384  push edx
    X86_AT(c, 0xed384u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0ed385  push 4
    X86_AT(c, 0xed385u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ed387  call 0xe70ec
    X86_AT(c, 0xed387u);
    push32(c, 0xed38cu); f_000e70ec(c); X86_RET(c, 0xed38cu);
    X86_TICK(c, 9);
    // 0ed38c  add esp, 0x18
    X86_AT(c, 0xed38cu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x18u, 0, 4); }
    // 0ed38f  cmp bl, 5
    X86_AT(c, 0xed38fu);
    (void)x86_sub(c, g8(c, 3), 0x5u, 0, 1);
    // 0ed392  je 0xed4d4
    X86_AT(c, 0xed392u);
    if (x86_cc(c, 4)) { goto L_ed4d4; }
    X86_TICK(c, 9);
    // 0ed398  mov dword ptr [ebp - 4], 0xa
    X86_AT(c, 0xed398u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), 0xAu);
    // 0ed39f  jmp 0xec3cf
    X86_AT(c, 0xed39fu);
    X86_POLL(c, 0xec3cfu); goto L_ec3cf;
L_ed3a4:
    X86_TICK(c, 22);
    // 0ed3a4  mov eax, edi
    X86_AT(c, 0xed3a4u);
    c.r[0] = c.r[7];
    // 0ed3a6  lea edx, [eax + eax*4]
    X86_AT(c, 0xed3a6u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0ed3a9  lea edx, [eax + edx*2]
    X86_AT(c, 0xed3a9u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0ed3ac  shl edx, 5
    X86_AT(c, 0xed3acu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0ed3af  sub edx, eax
    X86_AT(c, 0xed3afu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0ed3b1  mov al, byte ptr [edx + 0xcde7c]
    X86_AT(c, 0xed3b1u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE7Cu))));
    // 0ed3b7  cmp al, 0x4d
    X86_AT(c, 0xed3b7u);
    (void)x86_sub(c, g8(c, 0), 0x4Du, 0, 1);
    // 0ed3b9  je 0xed3cf
    X86_AT(c, 0xed3b9u);
    if (x86_cc(c, 4)) { goto L_ed3cf; }
    X86_TICK(c, 7);
    // 0ed3bb  cmp al, 0x46
    X86_AT(c, 0xed3bbu);
    (void)x86_sub(c, g8(c, 0), 0x46u, 0, 1);
    // 0ed3bd  je 0xed3cf
    X86_AT(c, 0xed3bdu);
    if (x86_cc(c, 4)) { goto L_ed3cf; }
    X86_TICK(c, 7);
    // 0ed3bf  cmp al, 0x4f
    X86_AT(c, 0xed3bfu);
    (void)x86_sub(c, g8(c, 0), 0x4Fu, 0, 1);
    // 0ed3c1  je 0xed3cf
    X86_AT(c, 0xed3c1u);
    if (x86_cc(c, 4)) { goto L_ed3cf; }
    X86_TICK(c, 9);
    // 0ed3c3  mov dword ptr [ebp - 4], 7
    X86_AT(c, 0xed3c3u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), 0x7u);
    // 0ed3ca  jmp 0xec3cf
    X86_AT(c, 0xed3cau);
    X86_POLL(c, 0xec3cfu); goto L_ec3cf;
L_ed3cf:
    X86_TICK(c, 22);
    // 0ed3cf  mov eax, edi
    X86_AT(c, 0xed3cfu);
    c.r[0] = c.r[7];
    // 0ed3d1  lea edx, [eax + eax*4]
    X86_AT(c, 0xed3d1u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0ed3d4  lea edx, [eax + edx*2]
    X86_AT(c, 0xed3d4u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0ed3d7  shl edx, 5
    X86_AT(c, 0xed3d7u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0ed3da  sub edx, eax
    X86_AT(c, 0xed3dau);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0ed3dc  mov al, byte ptr [edx + 0xcde7a]
    X86_AT(c, 0xed3dcu);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE7Au))));
    // 0ed3e2  cmp al, 0x48
    X86_AT(c, 0xed3e2u);
    (void)x86_sub(c, g8(c, 0), 0x48u, 0, 1);
    // 0ed3e4  je 0xed3f6
    X86_AT(c, 0xed3e4u);
    if (x86_cc(c, 4)) { goto L_ed3f6; }
    X86_TICK(c, 7);
    // 0ed3e6  cmp al, 0x42
    X86_AT(c, 0xed3e6u);
    (void)x86_sub(c, g8(c, 0), 0x42u, 0, 1);
    // 0ed3e8  je 0xed3f6
    X86_AT(c, 0xed3e8u);
    if (x86_cc(c, 4)) { goto L_ed3f6; }
    X86_TICK(c, 7);
    // 0ed3ea  cmp al, 0x45
    X86_AT(c, 0xed3eau);
    (void)x86_sub(c, g8(c, 0), 0x45u, 0, 1);
    // 0ed3ec  je 0xed3f6
    X86_AT(c, 0xed3ecu);
    if (x86_cc(c, 4)) { goto L_ed3f6; }
    X86_TICK(c, 7);
    // 0ed3ee  cmp al, 0x44
    X86_AT(c, 0xed3eeu);
    (void)x86_sub(c, g8(c, 0), 0x44u, 0, 1);
    // 0ed3f0  jne 0xed4d4
    X86_AT(c, 0xed3f0u);
    if (x86_cc(c, 5)) { goto L_ed4d4; }
L_ed3f6:
    X86_TICK(c, 22);
    // 0ed3f6  mov eax, edi
    X86_AT(c, 0xed3f6u);
    c.r[0] = c.r[7];
    // 0ed3f8  lea edx, [eax + eax*4]
    X86_AT(c, 0xed3f8u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0ed3fb  lea edx, [eax + edx*2]
    X86_AT(c, 0xed3fbu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0ed3fe  shl edx, 5
    X86_AT(c, 0xed3feu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0ed401  sub edx, eax
    X86_AT(c, 0xed401u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0ed403  mov al, byte ptr [edx + 0xcde7b]
    X86_AT(c, 0xed403u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE7Bu))));
    // 0ed409  cmp al, 0x46
    X86_AT(c, 0xed409u);
    (void)x86_sub(c, g8(c, 0), 0x46u, 0, 1);
    // 0ed40b  je 0xed425
    X86_AT(c, 0xed40bu);
    if (x86_cc(c, 4)) { goto L_ed425; }
    X86_TICK(c, 7);
    // 0ed40d  cmp al, 0x43
    X86_AT(c, 0xed40du);
    (void)x86_sub(c, g8(c, 0), 0x43u, 0, 1);
    // 0ed40f  je 0xed425
    X86_AT(c, 0xed40fu);
    if (x86_cc(c, 4)) { goto L_ed425; }
    X86_TICK(c, 7);
    // 0ed411  cmp al, 0x57
    X86_AT(c, 0xed411u);
    (void)x86_sub(c, g8(c, 0), 0x57u, 0, 1);
    // 0ed413  je 0xed425
    X86_AT(c, 0xed413u);
    if (x86_cc(c, 4)) { goto L_ed425; }
    X86_TICK(c, 7);
    // 0ed415  cmp al, 0x54
    X86_AT(c, 0xed415u);
    (void)x86_sub(c, g8(c, 0), 0x54u, 0, 1);
    // 0ed417  je 0xed425
    X86_AT(c, 0xed417u);
    if (x86_cc(c, 4)) { goto L_ed425; }
    X86_TICK(c, 9);
    // 0ed419  mov dword ptr [ebp - 4], 8
    X86_AT(c, 0xed419u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), 0x8u);
    // 0ed420  jmp 0xec3cf
    X86_AT(c, 0xed420u);
    X86_POLL(c, 0xec3cfu); goto L_ec3cf;
L_ed425:
    X86_TICK(c, 23);
    // 0ed425  mov eax, edi
    X86_AT(c, 0xed425u);
    c.r[0] = c.r[7];
    // 0ed427  lea edx, [eax + eax*4]
    X86_AT(c, 0xed427u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0ed42a  lea edx, [eax + edx*2]
    X86_AT(c, 0xed42au);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0ed42d  shl edx, 5
    X86_AT(c, 0xed42du);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0ed430  sub edx, eax
    X86_AT(c, 0xed430u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0ed432  cmp byte ptr [edx + 0xcde4d], 0
    X86_AT(c, 0xed432u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE4Du))), 0x0u, 0, 1);
    // 0ed439  jne 0xed447
    X86_AT(c, 0xed439u);
    if (x86_cc(c, 5)) { goto L_ed447; }
    X86_TICK(c, 9);
    // 0ed43b  mov dword ptr [ebp - 4], 9
    X86_AT(c, 0xed43bu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), 0x9u);
    // 0ed442  jmp 0xec3cf
    X86_AT(c, 0xed442u);
    X86_POLL(c, 0xec3cfu); goto L_ec3cf;
L_ed447:
    X86_TICK(c, 9);
    // 0ed447  push 4
    X86_AT(c, 0xed447u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ed449  call 0xe693c
    X86_AT(c, 0xed449u);
    push32(c, 0xed44eu); f_000e693c(c); X86_RET(c, 0xed44eu);
    X86_TICK(c, 13);
    // 0ed44e  push 3
    X86_AT(c, 0xed44eu);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0ed450  push 0xf
    X86_AT(c, 0xed450u);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0ed452  push 4
    X86_AT(c, 0xed452u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ed454  call 0xe7260
    X86_AT(c, 0xed454u);
    push32(c, 0xed459u); f_000e7260(c); X86_RET(c, 0xed459u);
    X86_TICK(c, 11);
    // 0ed459  push 0x3334
    X86_AT(c, 0xed459u);
    { uint32_t v = 0x3334u; push32(c, v); }
    // 0ed45e  push 4
    X86_AT(c, 0xed45eu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ed460  call 0xe6cb0
    X86_AT(c, 0xed460u);
    push32(c, 0xed465u); f_000e6cb0(c); X86_RET(c, 0xed465u);
    X86_TICK(c, 13);
    // 0ed465  push 3
    X86_AT(c, 0xed465u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0ed467  push 0xf
    X86_AT(c, 0xed467u);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0ed469  push 4
    X86_AT(c, 0xed469u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ed46b  call 0xe7260
    X86_AT(c, 0xed46bu);
    push32(c, 0xed470u); f_000e7260(c); X86_RET(c, 0xed470u);
    X86_TICK(c, 24);
    // 0ed470  mov eax, edi
    X86_AT(c, 0xed470u);
    c.r[0] = c.r[7];
    // 0ed472  lea edx, [eax + eax*4]
    X86_AT(c, 0xed472u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0ed475  lea edx, [eax + edx*2]
    X86_AT(c, 0xed475u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0ed478  shl edx, 5
    X86_AT(c, 0xed478u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0ed47b  sub edx, eax
    X86_AT(c, 0xed47bu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0ed47d  add edx, 0xcde4d
    X86_AT(c, 0xed47du);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, 0xCDE4Du, 0, 4); }
    // 0ed483  push edx
    X86_AT(c, 0xed483u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0ed484  push 4
    X86_AT(c, 0xed484u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ed486  call 0xe70ec
    X86_AT(c, 0xed486u);
    push32(c, 0xed48bu); f_000e70ec(c); X86_RET(c, 0xed48bu);
    X86_TICK(c, 11);
    // 0ed48b  push 0x336c
    X86_AT(c, 0xed48bu);
    { uint32_t v = 0x336Cu; push32(c, v); }
    // 0ed490  push 4
    X86_AT(c, 0xed490u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ed492  call 0xe5654
    X86_AT(c, 0xed492u);
    push32(c, 0xed497u); f_000e5654(c); X86_RET(c, 0xed497u);
    X86_TICK(c, 9);
    // 0ed497  push 0x3394
    X86_AT(c, 0xed497u);
    { uint32_t v = 0x3394u; push32(c, v); }
    // 0ed49c  call 0xe75f8
    X86_AT(c, 0xed49cu);
    push32(c, 0xed4a1u); f_000e75f8(c); X86_RET(c, 0xed4a1u);
    X86_TICK(c, 2);
    // 0ed4a1  add esp, 0x38
    X86_AT(c, 0xed4a1u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x38u, 0, 4); }
L_ed4a4:
    X86_TICK(c, 9);
    // 0ed4a4  push 4
    X86_AT(c, 0xed4a4u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ed4a6  call 0xe4b60
    X86_AT(c, 0xed4a6u);
    push32(c, 0xed4abu); f_000e4b60(c); X86_RET(c, 0xed4abu);
    X86_TICK(c, 11);
    // 0ed4ab  mov byte ptr [ebp - 0x35], al
    X86_AT(c, 0xed4abu);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFCBu)), g8(c, 0));
    // 0ed4ae  add esp, 4
    X86_AT(c, 0xed4aeu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0ed4b1  cmp al, 0x59
    X86_AT(c, 0xed4b1u);
    (void)x86_sub(c, g8(c, 0), 0x59u, 0, 1);
    // 0ed4b3  je 0xed4bd
    X86_AT(c, 0xed4b3u);
    if (x86_cc(c, 4)) { goto L_ed4bd; }
    X86_TICK(c, 7);
    // 0ed4b5  cmp al, 0x4e
    X86_AT(c, 0xed4b5u);
    (void)x86_sub(c, g8(c, 0), 0x4Eu, 0, 1);
    // 0ed4b7  je 0xed4bd
    X86_AT(c, 0xed4b7u);
    if (x86_cc(c, 4)) { goto L_ed4bd; }
    X86_TICK(c, 7);
    // 0ed4b9  dec al
    X86_AT(c, 0xed4b9u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_dec(c, v, 1)); }
    // 0ed4bb  jne 0xed4a4
    X86_AT(c, 0xed4bbu);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xed4a4u); goto L_ed4a4; }
L_ed4bd:
    X86_TICK(c, 9);
    // 0ed4bd  push 2
    X86_AT(c, 0xed4bdu);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0ed4bf  call 0xe6c68
    X86_AT(c, 0xed4bfu);
    push32(c, 0xed4c4u); f_000e6c68(c); X86_RET(c, 0xed4c4u);
    X86_TICK(c, 9);
    // 0ed4c4  push 4
    X86_AT(c, 0xed4c4u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ed4c6  call 0xe693c
    X86_AT(c, 0xed4c6u);
    push32(c, 0xed4cbu); f_000e693c(c); X86_RET(c, 0xed4cbu);
    X86_TICK(c, 14);
    // 0ed4cb  add esp, 8
    X86_AT(c, 0xed4cbu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0ed4ce  cmp byte ptr [ebp - 0x35], 0x59
    X86_AT(c, 0xed4ceu);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFCBu))), 0x59u, 0, 1);
    // 0ed4d2  je 0xed4e0
    X86_AT(c, 0xed4d2u);
    if (x86_cc(c, 4)) { goto L_ed4e0; }
L_ed4d4:
    X86_TICK(c, 9);
    // 0ed4d4  mov dword ptr [ebp - 4], 6
    X86_AT(c, 0xed4d4u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), 0x6u);
    // 0ed4db  jmp 0xec3cf
    X86_AT(c, 0xed4dbu);
    X86_POLL(c, 0xec3cfu); goto L_ec3cf;
L_ed4e0:
    X86_TICK(c, 116);
    // 0ed4e0  mov eax, edi
    X86_AT(c, 0xed4e0u);
    c.r[0] = c.r[7];
    // 0ed4e2  lea edx, [eax + eax*4]
    X86_AT(c, 0xed4e2u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0ed4e5  lea edx, [eax + edx*2]
    X86_AT(c, 0xed4e5u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0ed4e8  shl edx, 5
    X86_AT(c, 0xed4e8u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0ed4eb  sub edx, eax
    X86_AT(c, 0xed4ebu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0ed4ed  mov eax, dword ptr [ebp - 0x10]
    X86_AT(c, 0xed4edu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u)));
    // 0ed4f0  add eax, dword ptr [ebp - 0x14]
    X86_AT(c, 0xed4f0u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu))), 0, 4); }
    // 0ed4f3  add dword ptr [edx + 0xcde62], eax
    X86_AT(c, 0xed4f3u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE62u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 0ed4f9  mov eax, dword ptr [ebp - 0x18]
    X86_AT(c, 0xed4f9u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE8u)));
    // 0ed4fc  add eax, dword ptr [ebp - 0x1c]
    X86_AT(c, 0xed4fcu);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE4u))), 0, 4); }
    // 0ed4ff  add dword ptr [edx + 0xcde66], eax
    X86_AT(c, 0xed4ffu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE66u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 0ed505  mov eax, dword ptr [ebp - 0x20]
    X86_AT(c, 0xed505u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE0u)));
    // 0ed508  add eax, dword ptr [ebp - 0x24]
    X86_AT(c, 0xed508u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFDCu))), 0, 4); }
    // 0ed50b  add dword ptr [edx + 0xcde72], eax
    X86_AT(c, 0xed50bu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE72u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 0ed511  mov eax, dword ptr [ebp - 0x28]
    X86_AT(c, 0xed511u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFD8u)));
    // 0ed514  add eax, dword ptr [ebp - 0x2c]
    X86_AT(c, 0xed514u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFD4u))), 0, 4); }
    // 0ed517  add dword ptr [edx + 0xcde76], eax
    X86_AT(c, 0xed517u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE76u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 0ed51d  mov eax, dword ptr [ebp - 0x34]
    X86_AT(c, 0xed51du);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFCCu)));
    // 0ed520  add dword ptr [edx + 0xcde6e], eax
    X86_AT(c, 0xed520u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE6Eu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 0ed526  mov eax, dword ptr [ebp - 0x30]
    X86_AT(c, 0xed526u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFD0u)));
    // 0ed529  add dword ptr [edx + 0xcde6a], eax
    X86_AT(c, 0xed529u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE6Au)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 0ed52f  push 6
    X86_AT(c, 0xed52fu);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0ed531  push 0x34
    X86_AT(c, 0xed531u);
    { uint32_t v = 0x34u; push32(c, v); }
    // 0ed533  push 4
    X86_AT(c, 0xed533u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ed535  mov dword ptr [ebp - 0x4c], edx
    X86_AT(c, 0xed535u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFB4u)), c.r[2]);
    // 0ed538  call 0xe7260
    X86_AT(c, 0xed538u);
    push32(c, 0xed53du); f_000e7260(c); X86_RET(c, 0xed53du);
    X86_TICK(c, 20);
    // 0ed53d  push 2
    X86_AT(c, 0xed53du);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0ed53f  mov eax, dword ptr [ebp - 0x4c]
    X86_AT(c, 0xed53fu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFB4u)));
    // 0ed542  push dword ptr [eax + 0xcde62]
    X86_AT(c, 0xed542u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0xCDE62u))); push32(c, v); }
    // 0ed548  push 4
    X86_AT(c, 0xed548u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ed54a  call 0xe5630
    X86_AT(c, 0xed54au);
    push32(c, 0xed54fu); f_000e5630(c); X86_RET(c, 0xed54fu);
    X86_TICK(c, 13);
    // 0ed54f  push 7
    X86_AT(c, 0xed54fu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0ed551  push 0x34
    X86_AT(c, 0xed551u);
    { uint32_t v = 0x34u; push32(c, v); }
    // 0ed553  push 4
    X86_AT(c, 0xed553u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ed555  call 0xe7260
    X86_AT(c, 0xed555u);
    push32(c, 0xed55au); f_000e7260(c); X86_RET(c, 0xed55au);
    X86_TICK(c, 20);
    // 0ed55a  push 2
    X86_AT(c, 0xed55au);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0ed55c  mov eax, dword ptr [ebp - 0x4c]
    X86_AT(c, 0xed55cu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFB4u)));
    // 0ed55f  push dword ptr [eax + 0xcde66]
    X86_AT(c, 0xed55fu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0xCDE66u))); push32(c, v); }
    // 0ed565  push 4
    X86_AT(c, 0xed565u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ed567  call 0xe5630
    X86_AT(c, 0xed567u);
    push32(c, 0xed56cu); f_000e5630(c); X86_RET(c, 0xed56cu);
    X86_TICK(c, 13);
    // 0ed56c  push 8
    X86_AT(c, 0xed56cu);
    { uint32_t v = 0x8u; push32(c, v); }
    // 0ed56e  push 0x34
    X86_AT(c, 0xed56eu);
    { uint32_t v = 0x34u; push32(c, v); }
    // 0ed570  push 4
    X86_AT(c, 0xed570u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ed572  call 0xe7260
    X86_AT(c, 0xed572u);
    push32(c, 0xed577u); f_000e7260(c); X86_RET(c, 0xed577u);
    X86_TICK(c, 22);
    // 0ed577  add esp, 0x3c
    X86_AT(c, 0xed577u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x3Cu, 0, 4); }
    // 0ed57a  push 2
    X86_AT(c, 0xed57au);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0ed57c  mov eax, dword ptr [ebp - 0x4c]
    X86_AT(c, 0xed57cu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFB4u)));
    // 0ed57f  push dword ptr [eax + 0xcde6a]
    X86_AT(c, 0xed57fu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0xCDE6Au))); push32(c, v); }
    // 0ed585  push 4
    X86_AT(c, 0xed585u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ed587  call 0xe5630
    X86_AT(c, 0xed587u);
    push32(c, 0xed58cu); f_000e5630(c); X86_RET(c, 0xed58cu);
    X86_TICK(c, 15);
    // 0ed58c  add esp, 0xc
    X86_AT(c, 0xed58cu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0ed58f  push 9
    X86_AT(c, 0xed58fu);
    { uint32_t v = 0x9u; push32(c, v); }
    // 0ed591  push 0x34
    X86_AT(c, 0xed591u);
    { uint32_t v = 0x34u; push32(c, v); }
    // 0ed593  push 4
    X86_AT(c, 0xed593u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ed595  call 0xe7260
    X86_AT(c, 0xed595u);
    push32(c, 0xed59au); f_000e7260(c); X86_RET(c, 0xed59au);
    X86_TICK(c, 29);
    // 0ed59a  push 2
    X86_AT(c, 0xed59au);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0ed59c  mov eax, edi
    X86_AT(c, 0xed59cu);
    c.r[0] = c.r[7];
    // 0ed59e  lea edx, [eax + eax*4]
    X86_AT(c, 0xed59eu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0ed5a1  lea edx, [eax + edx*2]
    X86_AT(c, 0xed5a1u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0ed5a4  shl edx, 5
    X86_AT(c, 0xed5a4u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0ed5a7  sub edx, eax
    X86_AT(c, 0xed5a7u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0ed5a9  push dword ptr [edx + 0xcde6e]
    X86_AT(c, 0xed5a9u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE6Eu))); push32(c, v); }
    // 0ed5af  push 4
    X86_AT(c, 0xed5afu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ed5b1  mov dword ptr [ebp - 0x4c], edx
    X86_AT(c, 0xed5b1u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFB4u)), c.r[2]);
    // 0ed5b4  call 0xe5630
    X86_AT(c, 0xed5b4u);
    push32(c, 0xed5b9u); f_000e5630(c); X86_RET(c, 0xed5b9u);
    X86_TICK(c, 13);
    // 0ed5b9  push 0xa
    X86_AT(c, 0xed5b9u);
    { uint32_t v = 0xAu; push32(c, v); }
    // 0ed5bb  push 0x34
    X86_AT(c, 0xed5bbu);
    { uint32_t v = 0x34u; push32(c, v); }
    // 0ed5bd  push 4
    X86_AT(c, 0xed5bdu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ed5bf  call 0xe7260
    X86_AT(c, 0xed5bfu);
    push32(c, 0xed5c4u); f_000e7260(c); X86_RET(c, 0xed5c4u);
    X86_TICK(c, 20);
    // 0ed5c4  push 2
    X86_AT(c, 0xed5c4u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0ed5c6  mov eax, dword ptr [ebp - 0x4c]
    X86_AT(c, 0xed5c6u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFB4u)));
    // 0ed5c9  push dword ptr [eax + 0xcde72]
    X86_AT(c, 0xed5c9u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0xCDE72u))); push32(c, v); }
    // 0ed5cf  push 4
    X86_AT(c, 0xed5cfu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ed5d1  call 0xe5630
    X86_AT(c, 0xed5d1u);
    push32(c, 0xed5d6u); f_000e5630(c); X86_RET(c, 0xed5d6u);
    X86_TICK(c, 13);
    // 0ed5d6  push 0xb
    X86_AT(c, 0xed5d6u);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0ed5d8  push 0x34
    X86_AT(c, 0xed5d8u);
    { uint32_t v = 0x34u; push32(c, v); }
    // 0ed5da  push 4
    X86_AT(c, 0xed5dau);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ed5dc  call 0xe7260
    X86_AT(c, 0xed5dcu);
    push32(c, 0xed5e1u); f_000e7260(c); X86_RET(c, 0xed5e1u);
    X86_TICK(c, 22);
    // 0ed5e1  add esp, 0x3c
    X86_AT(c, 0xed5e1u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x3Cu, 0, 4); }
    // 0ed5e4  push 2
    X86_AT(c, 0xed5e4u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0ed5e6  mov eax, dword ptr [ebp - 0x4c]
    X86_AT(c, 0xed5e6u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFB4u)));
    // 0ed5e9  push dword ptr [eax + 0xcde76]
    X86_AT(c, 0xed5e9u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0xCDE76u))); push32(c, v); }
    // 0ed5ef  push 4
    X86_AT(c, 0xed5efu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ed5f1  call 0xe5630
    X86_AT(c, 0xed5f1u);
    push32(c, 0xed5f6u); f_000e5630(c); X86_RET(c, 0xed5f6u);
    X86_TICK(c, 9);
    // 0ed5f6  push edi
    X86_AT(c, 0xed5f6u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0ed5f7  call 0xe2cfc
    X86_AT(c, 0xed5f7u);
    push32(c, 0xed5fcu); f_000e2cfc(c); X86_RET(c, 0xed5fcu);
    X86_TICK(c, 10);
    // 0ed5fc  mov edx, dword ptr [ebp - 0x4c]
    X86_AT(c, 0xed5fcu);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFB4u)));
    // 0ed5ff  mov dword ptr [edx + 0xcde5a], eax
    X86_AT(c, 0xed5ffu);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE5Au)), c.r[0]);
    // 0ed605  sub eax, eax
    X86_AT(c, 0xed605u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0ed607  add esp, 0x10
    X86_AT(c, 0xed607u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
L_ed60a:
    X86_TICK(c, 28);
    // 0ed60a  pop edi
    X86_AT(c, 0xed60au);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0ed60b  pop esi
    X86_AT(c, 0xed60bu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0ed60c  pop ebx
    X86_AT(c, 0xed60cu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0ed60d  leave 
    X86_AT(c, 0xed60du);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0ed60e  ret 
    X86_AT(c, 0xed60eu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xec140u, "ran off the end of a function");
}
}

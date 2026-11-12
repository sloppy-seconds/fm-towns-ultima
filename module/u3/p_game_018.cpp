#include "p_game_funcs.h"
namespace p_game {
void f_000cd602(X86Cpu& c) {
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
    X86_TICK(c, 30);
    // 0cd60e  add esp, 8
    X86_AT(c, 0xcd60eu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
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
    x86_fault(c, 0xcd602u, "ran off the end of a function");
}
void f_000cd611(X86Cpu& c) {
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
    x86_fault(c, 0xcd611u, "ran off the end of a function");
}
void f_000cd618(X86Cpu& c) {
    X86_TICK(c, 16);
    // 0cd618  push ebp
    X86_AT(c, 0xcd618u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0cd619  mov ebp, esp
    X86_AT(c, 0xcd619u);
    c.r[5] = c.r[4];
    // 0cd61b  push dword ptr [ebp + 8]
    X86_AT(c, 0xcd61bu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, v); }
    // 0cd61e  call 0xc71e4
    X86_AT(c, 0xcd61eu);
    push32(c, 0xcd623u); x86_call_known(c, 0xc71e4u, f_000c71e4); X86_RET(c, 0xcd623u);
    X86_TICK(c, 9);
    // 0cd623  add esp, 4
    X86_AT(c, 0xcd623u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0cd626  inc eax
    X86_AT(c, 0xcd626u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0cd627  jne 0xcd646
    X86_AT(c, 0xcd627u);
    if (x86_cc(c, 5)) { goto L_cd646; }
    X86_TICK(c, 11);
    // 0cd629  push 0x8d38
    X86_AT(c, 0xcd629u);
    { uint32_t v = 0x8D38u; push32(c, v); }
    // 0cd62e  push 7
    X86_AT(c, 0xcd62eu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cd630  call 0xba428
    X86_AT(c, 0xcd630u);
    push32(c, 0xcd635u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xcd635u);
    X86_TICK(c, 9);
    // 0cd635  push 7
    X86_AT(c, 0xcd635u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cd637  call 0xbbb5c
    X86_AT(c, 0xcd637u);
    push32(c, 0xcd63cu); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xcd63cu);
    X86_TICK(c, 11);
    // 0cd63c  mov eax, 0xffffffff
    X86_AT(c, 0xcd63cu);
    c.r[0] = 0xFFFFFFFFu;
    // 0cd641  add esp, 0xc
    X86_AT(c, 0xcd641u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0cd644  jmp 0xcd648
    X86_AT(c, 0xcd644u);
    goto L_cd648;
L_cd646:
    X86_TICK(c, 2);
    // 0cd646  sub eax, eax
    X86_AT(c, 0xcd646u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
L_cd648:
    X86_TICK(c, 16);
    // 0cd648  leave 
    X86_AT(c, 0xcd648u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0cd649  ret 
    X86_AT(c, 0xcd649u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xcd618u, "ran off the end of a function");
}
void f_000cd64c(X86Cpu& c) {
    X86_TICK(c, 4);
    // 0cd64c  push edi
    X86_AT(c, 0xcd64cu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0cd64d  sub edi, edi
    X86_AT(c, 0xcd64du);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
L_cd64f:
    X86_TICK(c, 7);
    // 0cd64f  cmp edi, 4
    X86_AT(c, 0xcd64fu);
    (void)x86_sub(c, c.r[7], 0x4u, 0, 4);
    // 0cd652  jge 0xcd6be
    X86_AT(c, 0xcd652u);
    if (x86_cc(c, 13)) { goto L_cd6be; }
    X86_TICK(c, 22);
    // 0cd654  mov eax, edi
    X86_AT(c, 0xcd654u);
    c.r[0] = c.r[7];
    // 0cd656  lea edx, [eax + eax*2]
    X86_AT(c, 0xcd656u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0cd659  shl edx, 5
    X86_AT(c, 0xcd659u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0cd65c  add edx, eax
    X86_AT(c, 0xcd65cu);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0cd65e  lea edx, [eax + edx*2]
    X86_AT(c, 0xcd65eu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0cd661  mov al, byte ptr [edx + 0xa4abd]
    X86_AT(c, 0xcd661u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4ABDu))));
    // 0cd667  cmp al, 0x44
    X86_AT(c, 0xcd667u);
    (void)x86_sub(c, g8(c, 0), 0x44u, 0, 1);
    // 0cd669  je 0xcd6bb
    X86_AT(c, 0xcd669u);
    if (x86_cc(c, 4)) { goto L_cd6bb; }
    X86_TICK(c, 7);
    // 0cd66b  cmp al, 0x41
    X86_AT(c, 0xcd66bu);
    (void)x86_sub(c, g8(c, 0), 0x41u, 0, 1);
    // 0cd66d  je 0xcd6bb
    X86_AT(c, 0xcd66du);
    if (x86_cc(c, 4)) { goto L_cd6bb; }
    X86_TICK(c, 9);
    // 0cd66f  push 8
    X86_AT(c, 0xcd66fu);
    { uint32_t v = 0x8u; push32(c, v); }
    // 0cd671  call 0xb607c
    X86_AT(c, 0xcd671u);
    push32(c, 0xcd676u); x86_call_known(c, 0xb607cu, f_000b607c); X86_RET(c, 0xcd676u);
    X86_TICK(c, 9);
    // 0cd676  push edi
    X86_AT(c, 0xcd676u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0cd677  call 0xc7f0c
    X86_AT(c, 0xcd677u);
    push32(c, 0xcd67cu); x86_call_known(c, 0xc7f0cu, f_000c7f0c); X86_RET(c, 0xcd67cu);
    X86_TICK(c, 9);
    // 0cd67c  push 5
    X86_AT(c, 0xcd67cu);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0cd67e  call 0xbebbc
    X86_AT(c, 0xcd67eu);
    push32(c, 0xcd683u); x86_call_known(c, 0xbebbcu, f_000bebbc); X86_RET(c, 0xcd683u);
    X86_TICK(c, 9);
    // 0cd683  push edi
    X86_AT(c, 0xcd683u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0cd684  call 0xc7f0c
    X86_AT(c, 0xcd684u);
    push32(c, 0xcd689u); x86_call_known(c, 0xc7f0cu, f_000c7f0c); X86_RET(c, 0xcd689u);
    X86_TICK(c, 9);
    // 0cd689  push 0xff
    X86_AT(c, 0xcd689u);
    { uint32_t v = 0xFFu; push32(c, v); }
    // 0cd68e  call 0xb61b4
    X86_AT(c, 0xcd68eu);
    push32(c, 0xcd693u); x86_call_known(c, 0xb61b4u, f_000b61b4); X86_RET(c, 0xcd693u);
    X86_TICK(c, 13);
    // 0cd693  and eax, 0x77
    X86_AT(c, 0xcd693u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x77u, 4); }
    // 0cd698  push eax
    X86_AT(c, 0xcd698u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0cd699  push edi
    X86_AT(c, 0xcd699u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0cd69a  call 0xc9b10
    X86_AT(c, 0xcd69au);
    push32(c, 0xcd69fu); x86_call_known(c, 0xc9b10u, f_000c9b10); X86_RET(c, 0xcd69fu);
    X86_TICK(c, 17);
    // 0cd69f  mov eax, dword ptr [0xa4a52]
    X86_AT(c, 0xcd69fu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xA4A52u)));
    // 0cd6a4  lea eax, [eax*8 + 8]
    X86_AT(c, 0xcd6a4u);
    c.r[0] = (uint32_t)(c.r[0] * 8 + 0x8u);
    // 0cd6ab  push eax
    X86_AT(c, 0xcd6abu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0cd6ac  push edi
    X86_AT(c, 0xcd6acu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0cd6ad  call 0xc9b10
    X86_AT(c, 0xcd6adu);
    push32(c, 0xcd6b2u); x86_call_known(c, 0xc9b10u, f_000c9b10); X86_RET(c, 0xcd6b2u);
    X86_TICK(c, 9);
    // 0cd6b2  push edi
    X86_AT(c, 0xcd6b2u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0cd6b3  call 0xbe720
    X86_AT(c, 0xcd6b3u);
    push32(c, 0xcd6b8u); x86_call_known(c, 0xbe720u, f_000be720); X86_RET(c, 0xcd6b8u);
    X86_TICK(c, 2);
    // 0cd6b8  add esp, 0x28
    X86_AT(c, 0xcd6b8u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x28u, 0, 4); }
L_cd6bb:
    X86_TICK(c, 9);
    // 0cd6bb  inc edi
    X86_AT(c, 0xcd6bbu);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0cd6bc  jmp 0xcd64f
    X86_AT(c, 0xcd6bcu);
    X86_POLL(c, 0xcd64fu); goto L_cd64f;
L_cd6be:
    X86_TICK(c, 7);
    // 0cd6be  call 0xb75c0
    X86_AT(c, 0xcd6beu);
    push32(c, 0xcd6c3u); x86_call_known(c, 0xb75c0u, f_000b75c0); X86_RET(c, 0xcd6c3u);
    X86_TICK(c, 14);
    // 0cd6c3  pop edi
    X86_AT(c, 0xcd6c3u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0cd6c4  ret 
    X86_AT(c, 0xcd6c4u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xcd64cu, "ran off the end of a function");
}
void f_000cd6c8(X86Cpu& c) {
    X86_TICK(c, 11);
    // 0cd6c8  push edi
    X86_AT(c, 0xcd6c8u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0cd6c9  push 7
    X86_AT(c, 0xcd6c9u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cd6cb  call 0xbb6b0
    X86_AT(c, 0xcd6cbu);
    push32(c, 0xcd6d0u); x86_call_known(c, 0xbb6b0u, f_000bb6b0); X86_RET(c, 0xcd6d0u);
    X86_TICK(c, 11);
    // 0cd6d0  push 0x8d60
    X86_AT(c, 0xcd6d0u);
    { uint32_t v = 0x8D60u; push32(c, v); }
    // 0cd6d5  push 7
    X86_AT(c, 0xcd6d5u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cd6d7  call 0xba428
    X86_AT(c, 0xcd6d7u);
    push32(c, 0xcd6dcu); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xcd6dcu);
    X86_TICK(c, 9);
    // 0cd6dc  push 7
    X86_AT(c, 0xcd6dcu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cd6de  call 0xbbb5c
    X86_AT(c, 0xcd6deu);
    push32(c, 0xcd6e3u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xcd6e3u);
    X86_TICK(c, 25);
    // 0cd6e3  push dword ptr [0xa4a72]
    X86_AT(c, 0xcd6e3u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xA4A72u))); push32(c, v); }
    // 0cd6e9  push dword ptr [0xa4a6e]
    X86_AT(c, 0xcd6e9u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xA4A6Eu))); push32(c, v); }
    // 0cd6ef  mov eax, dword ptr [0xa4a52]
    X86_AT(c, 0xcd6efu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xA4A52u)));
    // 0cd6f4  dec eax
    X86_AT(c, 0xcd6f4u);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 0cd6f5  push eax
    X86_AT(c, 0xcd6f5u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0cd6f6  call 0xc6038
    X86_AT(c, 0xcd6f6u);
    push32(c, 0xcd6fbu); x86_call_known(c, 0xc6038u, f_000c6038); X86_RET(c, 0xcd6fbu);
    X86_TICK(c, 12);
    // 0cd6fb  xchg edi, eax
    X86_AT(c, 0xcd6fbu);
    { uint32_t t = c.r[7]; c.r[7] = c.r[0]; c.r[0] = t; }
    // 0cd6fc  add esp, 0x1c
    X86_AT(c, 0xcd6fcu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x1Cu, 0, 4); }
    // 0cd6ff  cmp edi, 0xf
    X86_AT(c, 0xcd6ffu);
    (void)x86_sub(c, c.r[7], 0xFu, 0, 4);
    // 0cd702  je 0xcd709
    X86_AT(c, 0xcd702u);
    if (x86_cc(c, 4)) { goto L_cd709; }
    X86_TICK(c, 7);
    // 0cd704  cmp edi, 0x10
    X86_AT(c, 0xcd704u);
    (void)x86_sub(c, c.r[7], 0x10u, 0, 4);
    // 0cd707  jne 0xcd728
    X86_AT(c, 0xcd707u);
    if (x86_cc(c, 5)) { goto L_cd728; }
L_cd709:
    X86_TICK(c, 18);
    // 0cd709  dec dword ptr [0xa4a52]
    X86_AT(c, 0xcd709u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xA4A52u)); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 0cd70f  cmp dword ptr [0xa4a52], 0
    X86_AT(c, 0xcd70fu);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xA4A52u))), 0x0u, 0, 4);
    // 0cd716  jne 0xcd721
    X86_AT(c, 0xcd716u);
    if (x86_cc(c, 5)) { goto L_cd721; }
    X86_TICK(c, 2);
    // 0cd718  mov word ptr [0xa8a18], 0
    X86_AT(c, 0xcd718u);
    wr16((c.sbase[3] + (uint32_t)(0xA8A18u)), 0x0u);
L_cd721:
    X86_TICK(c, 7);
    // 0cd721  call 0xc59c4
    X86_AT(c, 0xcd721u);
    push32(c, 0xcd726u); x86_call_known(c, 0xc59c4u, f_000c59c4); X86_RET(c, 0xcd726u);
    X86_TICK(c, 7);
    // 0cd726  jmp 0xcd74c
    X86_AT(c, 0xcd726u);
    goto L_cd74c;
L_cd728:
    X86_TICK(c, 9);
    // 0cd728  push 3
    X86_AT(c, 0xcd728u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0cd72a  call 0xb607c
    X86_AT(c, 0xcd72au);
    push32(c, 0xcd72fu); x86_call_known(c, 0xb607cu, f_000b607c); X86_RET(c, 0xcd72fu);
    X86_TICK(c, 9);
    // 0cd72f  push 2
    X86_AT(c, 0xcd72fu);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0cd731  call 0xbebbc
    X86_AT(c, 0xcd731u);
    push32(c, 0xcd736u); x86_call_known(c, 0xbebbcu, f_000bebbc); X86_RET(c, 0xcd736u);
    X86_TICK(c, 11);
    // 0cd736  push 0x8d7c
    X86_AT(c, 0xcd736u);
    { uint32_t v = 0x8D7Cu; push32(c, v); }
    // 0cd73b  push 7
    X86_AT(c, 0xcd73bu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cd73d  call 0xba428
    X86_AT(c, 0xcd73du);
    push32(c, 0xcd742u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xcd742u);
    X86_TICK(c, 9);
    // 0cd742  push 7
    X86_AT(c, 0xcd742u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cd744  call 0xbbb5c
    X86_AT(c, 0xcd744u);
    push32(c, 0xcd749u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xcd749u);
    X86_TICK(c, 2);
    // 0cd749  add esp, 0x14
    X86_AT(c, 0xcd749u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x14u, 0, 4); }
L_cd74c:
    X86_TICK(c, 14);
    // 0cd74c  pop edi
    X86_AT(c, 0xcd74cu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0cd74d  ret 
    X86_AT(c, 0xcd74du);
    c.eip = pop32(c); return;
    x86_fault(c, 0xcd6c8u, "ran off the end of a function");
}
void f_000cd750(X86Cpu& c) {
    X86_TICK(c, 11);
    // 0cd750  push edi
    X86_AT(c, 0xcd750u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0cd751  push 7
    X86_AT(c, 0xcd751u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cd753  call 0xbb6b0
    X86_AT(c, 0xcd753u);
    push32(c, 0xcd758u); x86_call_known(c, 0xbb6b0u, f_000bb6b0); X86_RET(c, 0xcd758u);
    X86_TICK(c, 11);
    // 0cd758  push 0x8da4
    X86_AT(c, 0xcd758u);
    { uint32_t v = 0x8DA4u; push32(c, v); }
    // 0cd75d  push 7
    X86_AT(c, 0xcd75du);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cd75f  call 0xba428
    X86_AT(c, 0xcd75fu);
    push32(c, 0xcd764u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xcd764u);
    X86_TICK(c, 9);
    // 0cd764  push 7
    X86_AT(c, 0xcd764u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cd766  call 0xbbb5c
    X86_AT(c, 0xcd766u);
    push32(c, 0xcd76bu); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xcd76bu);
    X86_TICK(c, 25);
    // 0cd76b  push dword ptr [0xa4a72]
    X86_AT(c, 0xcd76bu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xA4A72u))); push32(c, v); }
    // 0cd771  push dword ptr [0xa4a6e]
    X86_AT(c, 0xcd771u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xA4A6Eu))); push32(c, v); }
    // 0cd777  mov eax, dword ptr [0xa4a52]
    X86_AT(c, 0xcd777u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xA4A52u)));
    // 0cd77c  dec eax
    X86_AT(c, 0xcd77cu);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 0cd77d  push eax
    X86_AT(c, 0xcd77du);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0cd77e  call 0xc6038
    X86_AT(c, 0xcd77eu);
    push32(c, 0xcd783u); x86_call_known(c, 0xc6038u, f_000c6038); X86_RET(c, 0xcd783u);
    X86_TICK(c, 12);
    // 0cd783  xchg edi, eax
    X86_AT(c, 0xcd783u);
    { uint32_t t = c.r[7]; c.r[7] = c.r[0]; c.r[0] = t; }
    // 0cd784  add esp, 0x1c
    X86_AT(c, 0xcd784u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x1Cu, 0, 4); }
    // 0cd787  cmp edi, 0xe
    X86_AT(c, 0xcd787u);
    (void)x86_sub(c, c.r[7], 0xEu, 0, 4);
    // 0cd78a  je 0xcd791
    X86_AT(c, 0xcd78au);
    if (x86_cc(c, 4)) { goto L_cd791; }
    X86_TICK(c, 7);
    // 0cd78c  cmp edi, 0x10
    X86_AT(c, 0xcd78cu);
    (void)x86_sub(c, c.r[7], 0x10u, 0, 4);
    // 0cd78f  jne 0xcd79e
    X86_AT(c, 0xcd78fu);
    if (x86_cc(c, 5)) { goto L_cd79e; }
L_cd791:
    X86_TICK(c, 13);
    // 0cd791  inc dword ptr [0xa4a52]
    X86_AT(c, 0xcd791u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xA4A52u)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0cd797  call 0xc59c4
    X86_AT(c, 0xcd797u);
    push32(c, 0xcd79cu); x86_call_known(c, 0xc59c4u, f_000c59c4); X86_RET(c, 0xcd79cu);
    X86_TICK(c, 7);
    // 0cd79c  jmp 0xcd7c2
    X86_AT(c, 0xcd79cu);
    goto L_cd7c2;
L_cd79e:
    X86_TICK(c, 9);
    // 0cd79e  push 3
    X86_AT(c, 0xcd79eu);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0cd7a0  call 0xb607c
    X86_AT(c, 0xcd7a0u);
    push32(c, 0xcd7a5u); x86_call_known(c, 0xb607cu, f_000b607c); X86_RET(c, 0xcd7a5u);
    X86_TICK(c, 9);
    // 0cd7a5  push 2
    X86_AT(c, 0xcd7a5u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0cd7a7  call 0xbebbc
    X86_AT(c, 0xcd7a7u);
    push32(c, 0xcd7acu); x86_call_known(c, 0xbebbcu, f_000bebbc); X86_RET(c, 0xcd7acu);
    X86_TICK(c, 11);
    // 0cd7ac  push 0x8dc4
    X86_AT(c, 0xcd7acu);
    { uint32_t v = 0x8DC4u; push32(c, v); }
    // 0cd7b1  push 7
    X86_AT(c, 0xcd7b1u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cd7b3  call 0xba428
    X86_AT(c, 0xcd7b3u);
    push32(c, 0xcd7b8u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xcd7b8u);
    X86_TICK(c, 9);
    // 0cd7b8  push 7
    X86_AT(c, 0xcd7b8u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cd7ba  call 0xbbb5c
    X86_AT(c, 0xcd7bau);
    push32(c, 0xcd7bfu); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xcd7bfu);
    X86_TICK(c, 2);
    // 0cd7bf  add esp, 0x14
    X86_AT(c, 0xcd7bfu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x14u, 0, 4); }
L_cd7c2:
    X86_TICK(c, 14);
    // 0cd7c2  pop edi
    X86_AT(c, 0xcd7c2u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0cd7c3  ret 
    X86_AT(c, 0xcd7c3u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xcd750u, "ran off the end of a function");
}
void f_000cd7c4(X86Cpu& c) {
    X86_TICK(c, 21);
    // 0cd7c4  push ebp
    X86_AT(c, 0xcd7c4u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0cd7c5  mov ebp, esp
    X86_AT(c, 0xcd7c5u);
    c.r[5] = c.r[4];
    // 0cd7c7  sub esp, 8
    X86_AT(c, 0xcd7c7u);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, 0x8u, 0, 4); }
    // 0cd7ca  push ebx
    X86_AT(c, 0xcd7cau);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0cd7cb  push esi
    X86_AT(c, 0xcd7cbu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0cd7cc  push edi
    X86_AT(c, 0xcd7ccu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0cd7cd  push 7
    X86_AT(c, 0xcd7cdu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cd7cf  call 0xbb6b0
    X86_AT(c, 0xcd7cfu);
    push32(c, 0xcd7d4u); x86_call_known(c, 0xbb6b0u, f_000bb6b0); X86_RET(c, 0xcd7d4u);
    X86_TICK(c, 11);
    // 0cd7d4  push 0x8dec
    X86_AT(c, 0xcd7d4u);
    { uint32_t v = 0x8DECu; push32(c, v); }
    // 0cd7d9  push 7
    X86_AT(c, 0xcd7d9u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cd7db  call 0xba428
    X86_AT(c, 0xcd7dbu);
    push32(c, 0xcd7e0u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xcd7e0u);
    X86_TICK(c, 9);
    // 0cd7e0  push 7
    X86_AT(c, 0xcd7e0u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cd7e2  call 0xb7068
    X86_AT(c, 0xcd7e2u);
    push32(c, 0xcd7e7u); x86_call_known(c, 0xb7068u, f_000b7068); X86_RET(c, 0xcd7e7u);
    X86_TICK(c, 12);
    // 0cd7e7  xchg edi, eax
    X86_AT(c, 0xcd7e7u);
    { uint32_t t = c.r[7]; c.r[7] = c.r[0]; c.r[0] = t; }
    // 0cd7e8  add esp, 0x10
    X86_AT(c, 0xcd7e8u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0cd7eb  cmp edi, 0xffffffff
    X86_AT(c, 0xcd7ebu);
    (void)x86_sub(c, c.r[7], 0xFFFFFFFFu, 0, 4);
    // 0cd7ee  jne 0xcd801
    X86_AT(c, 0xcd7eeu);
    if (x86_cc(c, 5)) { goto L_cd801; }
    X86_TICK(c, 7);
    // 0cd7f0  call 0xce2c8
    X86_AT(c, 0xcd7f0u);
    push32(c, 0xcd7f5u); x86_call_known(c, 0xce2c8u, f_000ce2c8); X86_RET(c, 0xcd7f5u);
    X86_TICK(c, 9);
    // 0cd7f5  push 7
    X86_AT(c, 0xcd7f5u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cd7f7  call 0xbbb5c
    X86_AT(c, 0xcd7f7u);
    push32(c, 0xcd7fcu); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xcd7fcu);
    X86_TICK(c, 7);
    // 0cd7fc  jmp 0xcd89b
    X86_AT(c, 0xcd7fcu);
    goto L_cd89b;
L_cd801:
    X86_TICK(c, 12);
    // 0cd801  cmp dword ptr [0xa4a56], 0x80
    X86_AT(c, 0xcd801u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xA4A56u))), 0x80u, 0, 4);
    // 0cd80b  jne 0xcd842
    X86_AT(c, 0xcd80bu);
    if (x86_cc(c, 5)) { goto L_cd842; }
    X86_TICK(c, 25);
    // 0cd80d  mov eax, 5
    X86_AT(c, 0xcd80du);
    c.r[0] = 0x5u;
    // 0cd812  mov dword ptr [ebp - 8], eax
    X86_AT(c, 0xcd812u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), c.r[0]);
    // 0cd815  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0xcd815u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
    // 0cd818  push 1
    X86_AT(c, 0xcd818u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0cd81a  push edi
    X86_AT(c, 0xcd81au);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0cd81b  lea ebx, [ebp - 8]
    X86_AT(c, 0xcd81bu);
    c.r[3] = (uint32_t)(c.r[5] + 0xFFFFFFF8u);
    // 0cd81e  push ebx
    X86_AT(c, 0xcd81eu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0cd81f  lea eax, [ebp - 4]
    X86_AT(c, 0xcd81fu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFFCu);
    // 0cd822  push eax
    X86_AT(c, 0xcd822u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0cd823  call 0xc72b0
    X86_AT(c, 0xcd823u);
    push32(c, 0xcd828u); x86_call_known(c, 0xc72b0u, f_000c72b0); X86_RET(c, 0xcd828u);
    X86_TICK(c, 17);
    // 0cd828  push dword ptr [ebx]
    X86_AT(c, 0xcd828u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3]))); push32(c, v); }
    // 0cd82a  push dword ptr [ebp - 4]
    X86_AT(c, 0xcd82au);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))); push32(c, v); }
    // 0cd82d  call 0xc80f0
    X86_AT(c, 0xcd82du);
    push32(c, 0xcd832u); x86_call_known(c, 0xc80f0u, f_000c80f0); X86_RET(c, 0xcd832u);
    X86_TICK(c, 12);
    // 0cd832  xchg esi, eax
    X86_AT(c, 0xcd832u);
    { uint32_t t = c.r[6]; c.r[6] = c.r[0]; c.r[0] = t; }
    // 0cd833  add esp, 0x18
    X86_AT(c, 0xcd833u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x18u, 0, 4); }
    // 0cd836  cmp esi, 0xffffffff
    X86_AT(c, 0xcd836u);
    (void)x86_sub(c, c.r[6], 0xFFFFFFFFu, 0, 4);
    // 0cd839  jne 0xcd89e
    X86_AT(c, 0xcd839u);
    if (x86_cc(c, 5)) { goto L_cd89e; }
    X86_TICK(c, 9);
    // 0cd83b  push 0x8e08
    X86_AT(c, 0xcd83bu);
    { uint32_t v = 0x8E08u; push32(c, v); }
    // 0cd840  jmp 0xcd882
    X86_AT(c, 0xcd840u);
    goto L_cd882;
L_cd842:
    X86_TICK(c, 31);
    // 0cd842  mov eax, dword ptr [0xa4a76]
    X86_AT(c, 0xcd842u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xA4A76u)));
    // 0cd847  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0xcd847u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
    // 0cd84a  mov eax, dword ptr [0xa4a7a]
    X86_AT(c, 0xcd84au);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xA4A7Au)));
    // 0cd84f  mov dword ptr [ebp - 8], eax
    X86_AT(c, 0xcd84fu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), c.r[0]);
    // 0cd852  push 1
    X86_AT(c, 0xcd852u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0cd854  push edi
    X86_AT(c, 0xcd854u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0cd855  lea ebx, [ebp - 8]
    X86_AT(c, 0xcd855u);
    c.r[3] = (uint32_t)(c.r[5] + 0xFFFFFFF8u);
    // 0cd858  push ebx
    X86_AT(c, 0xcd858u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0cd859  lea eax, [ebp - 4]
    X86_AT(c, 0xcd859u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFFCu);
    // 0cd85c  push eax
    X86_AT(c, 0xcd85cu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0cd85d  call 0xc7248
    X86_AT(c, 0xcd85du);
    push32(c, 0xcd862u); x86_call_known(c, 0xc7248u, f_000c7248); X86_RET(c, 0xcd862u);
    X86_TICK(c, 17);
    // 0cd862  push dword ptr [ebx]
    X86_AT(c, 0xcd862u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3]))); push32(c, v); }
    // 0cd864  push dword ptr [ebp - 4]
    X86_AT(c, 0xcd864u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))); push32(c, v); }
    // 0cd867  call 0xc735c
    X86_AT(c, 0xcd867u);
    push32(c, 0xcd86cu); x86_call_known(c, 0xc735cu, f_000c735c); X86_RET(c, 0xcd86cu);
    X86_TICK(c, 12);
    // 0cd86c  xchg esi, eax
    X86_AT(c, 0xcd86cu);
    { uint32_t t = c.r[6]; c.r[6] = c.r[0]; c.r[0] = t; }
    // 0cd86d  add esp, 0x18
    X86_AT(c, 0xcd86du);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x18u, 0, 4); }
    // 0cd870  cmp esi, 0xffffffff
    X86_AT(c, 0xcd870u);
    (void)x86_sub(c, c.r[6], 0xFFFFFFFFu, 0, 4);
    // 0cd873  je 0xcd87d
    X86_AT(c, 0xcd873u);
    if (x86_cc(c, 4)) { goto L_cd87d; }
    X86_TICK(c, 7);
    // 0cd875  cmp esi, 0xff
    X86_AT(c, 0xcd875u);
    (void)x86_sub(c, c.r[6], 0xFFu, 0, 4);
    // 0cd87b  jne 0xcd895
    X86_AT(c, 0xcd87bu);
    if (x86_cc(c, 5)) { goto L_cd895; }
L_cd87d:
    X86_TICK(c, 2);
    // 0cd87d  push 0x8e38
    X86_AT(c, 0xcd87du);
    { uint32_t v = 0x8E38u; push32(c, v); }
L_cd882:
    X86_TICK(c, 9);
    // 0cd882  push 7
    X86_AT(c, 0xcd882u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cd884  call 0xba428
    X86_AT(c, 0xcd884u);
    push32(c, 0xcd889u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xcd889u);
    X86_TICK(c, 9);
    // 0cd889  push 7
    X86_AT(c, 0xcd889u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cd88b  call 0xbbb5c
    X86_AT(c, 0xcd88bu);
    push32(c, 0xcd890u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xcd890u);
    X86_TICK(c, 9);
    // 0cd890  add esp, 0xc
    X86_AT(c, 0xcd890u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0cd893  jmp 0xcd89e
    X86_AT(c, 0xcd893u);
    goto L_cd89e;
L_cd895:
    X86_TICK(c, 9);
    // 0cd895  push esi
    X86_AT(c, 0xcd895u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0cd896  call 0xcd8a4
    X86_AT(c, 0xcd896u);
    push32(c, 0xcd89bu); x86_call_known(c, 0xcd8a4u, f_000cd8a4); X86_RET(c, 0xcd89bu);
L_cd89b:
    X86_TICK(c, 2);
    // 0cd89b  add esp, 4
    X86_AT(c, 0xcd89bu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
L_cd89e:
    X86_TICK(c, 28);
    // 0cd89e  pop edi
    X86_AT(c, 0xcd89eu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0cd89f  pop esi
    X86_AT(c, 0xcd89fu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0cd8a0  pop ebx
    X86_AT(c, 0xcd8a0u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0cd8a1  leave 
    X86_AT(c, 0xcd8a1u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0cd8a2  ret 
    X86_AT(c, 0xcd8a2u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xcd7c4u, "ran off the end of a function");
}
void f_000cd8a4(X86Cpu& c) {
    X86_TICK(c, 28);
    // 0cd8a4  push ebp
    X86_AT(c, 0xcd8a4u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0cd8a5  mov ebp, esp
    X86_AT(c, 0xcd8a5u);
    c.r[5] = c.r[4];
    // 0cd8a7  push ebx
    X86_AT(c, 0xcd8a7u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0cd8a8  push edi
    X86_AT(c, 0xcd8a8u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0cd8a9  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0xcd8a9u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0cd8ac  mov al, byte ptr [edi + 0xa5ce8]
    X86_AT(c, 0xcd8acu);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0xA5CE8u))));
    // 0cd8b2  mov byte ptr [0xa4934], al
    X86_AT(c, 0xcd8b2u);
    wr8((c.sbase[3] + (uint32_t)(0xA4934u)), g8(c, 0));
    // 0cd8b7  xchg ebx, eax
    X86_AT(c, 0xcd8b7u);
    { uint32_t t = c.r[3]; c.r[3] = c.r[0]; c.r[0] = t; }
    // 0cd8b8  cmp bl, 0x80
    X86_AT(c, 0xcd8b8u);
    (void)x86_sub(c, g8(c, 3), 0x80u, 0, 1);
    // 0cd8bb  je 0xcda7f
    X86_AT(c, 0xcd8bbu);
    if (x86_cc(c, 4)) { goto L_cda7f; }
    X86_TICK(c, 7);
    // 0cd8c1  cmp bl, 0x97
    X86_AT(c, 0xcd8c1u);
    (void)x86_sub(c, g8(c, 3), 0x97u, 0, 1);
    // 0cd8c4  je 0xcda7f
    X86_AT(c, 0xcd8c4u);
    if (x86_cc(c, 4)) { goto L_cda7f; }
    X86_TICK(c, 7);
    // 0cd8ca  cmp bl, 0x82
    X86_AT(c, 0xcd8cau);
    (void)x86_sub(c, g8(c, 3), 0x82u, 0, 1);
    // 0cd8cd  je 0xcda7f
    X86_AT(c, 0xcd8cdu);
    if (x86_cc(c, 4)) { goto L_cda7f; }
    X86_TICK(c, 7);
    // 0cd8d3  cmp bl, 0x99
    X86_AT(c, 0xcd8d3u);
    (void)x86_sub(c, g8(c, 3), 0x99u, 0, 1);
    // 0cd8d6  je 0xcda7f
    X86_AT(c, 0xcd8d6u);
    if (x86_cc(c, 4)) { goto L_cda7f; }
    X86_TICK(c, 7);
    // 0cd8dc  cmp bl, 0x9a
    X86_AT(c, 0xcd8dcu);
    (void)x86_sub(c, g8(c, 3), 0x9Au, 0, 1);
    // 0cd8df  je 0xcda7f
    X86_AT(c, 0xcd8dfu);
    if (x86_cc(c, 4)) { goto L_cda7f; }
    X86_TICK(c, 19);
    // 0cd8e5  mov byte ptr [edi + 0xa5ce8], 0
    X86_AT(c, 0xcd8e5u);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0xA5CE8u)), 0x0u);
    // 0cd8ec  push dword ptr [0xa4a7a]
    X86_AT(c, 0xcd8ecu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xA4A7Au))); push32(c, v); }
    // 0cd8f2  push dword ptr [0xa4a76]
    X86_AT(c, 0xcd8f2u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xA4A76u))); push32(c, v); }
    // 0cd8f8  call 0xb7aa0
    X86_AT(c, 0xcd8f8u);
    push32(c, 0xcd8fdu); x86_call_known(c, 0xb7aa0u, f_000b7aa0); X86_RET(c, 0xcd8fdu);
    X86_TICK(c, 13);
    // 0cd8fd  mov eax, dword ptr [0xa4a56]
    X86_AT(c, 0xcd8fdu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xA4A56u)));
    // 0cd902  mov dword ptr [0xa4a5a], eax
    X86_AT(c, 0xcd902u);
    wr32((c.sbase[3] + (uint32_t)(0xA4A5Au)), c.r[0]);
    // 0cd907  call 0xb7818
    X86_AT(c, 0xcd907u);
    push32(c, 0xcd90cu); x86_call_known(c, 0xb7818u, f_000b7818); X86_RET(c, 0xcd90cu);
    X86_TICK(c, 7);
    // 0cd90c  call 0xcdcb0
    X86_AT(c, 0xcd90cu);
    push32(c, 0xcd911u); x86_call_known(c, 0xcdcb0u, f_000cdcb0); X86_RET(c, 0xcd911u);
    X86_TICK(c, 9);
    // 0cd911  add esp, 8
    X86_AT(c, 0xcd911u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0cd914  and eax, eax
    X86_AT(c, 0xcd914u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0cd916  je 0xcd985
    X86_AT(c, 0xcd916u);
    if (x86_cc(c, 4)) { goto L_cd985; }
    X86_TICK(c, 7);
    // 0cd91c  cmp bl, 0x8a
    X86_AT(c, 0xcd91cu);
    (void)x86_sub(c, g8(c, 3), 0x8Au, 0, 1);
    // 0cd91f  jne 0xcd927
    X86_AT(c, 0xcd91fu);
    if (x86_cc(c, 5)) { goto L_cd927; }
    X86_TICK(c, 2);
    // 0cd921  mov byte ptr [edi + 0xa5ce8], bl
    X86_AT(c, 0xcd921u);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0xA5CE8u)), g8(c, 3));
L_cd927:
    X86_TICK(c, 7);
    // 0cd927  call 0xb75c0
    X86_AT(c, 0xcd927u);
    push32(c, 0xcd92cu); x86_call_known(c, 0xb75c0u, f_000b75c0); X86_RET(c, 0xcd92cu);
    X86_TICK(c, 12);
    // 0cd92c  cmp word ptr [0xa492c], 0xffff
    X86_AT(c, 0xcd92cu);
    (void)x86_sub(c, rd16((c.sbase[3] + (uint32_t)(0xA492Cu))), 0xFFFFu, 0, 2);
    // 0cd934  jne 0xcda7f
    X86_AT(c, 0xcd934u);
    if (x86_cc(c, 5)) { goto L_cda7f; }
    X86_TICK(c, 16);
    // 0cd93a  mov eax, dword ptr [0xa4a5a]
    X86_AT(c, 0xcd93au);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xA4A5Au)));
    // 0cd93f  mov dword ptr [0xa4a56], eax
    X86_AT(c, 0xcd93fu);
    wr32((c.sbase[3] + (uint32_t)(0xA4A56u)), c.r[0]);
    // 0cd944  xchg edx, eax
    X86_AT(c, 0xcd944u);
    { uint32_t t = c.r[2]; c.r[2] = c.r[0]; c.r[0] = t; }
    // 0cd945  and edx, edx
    X86_AT(c, 0xcd945u);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & c.r[2], 4); }
    // 0cd947  je 0xcd955
    X86_AT(c, 0xcd947u);
    if (x86_cc(c, 4)) { goto L_cd955; }
    X86_TICK(c, 7);
    // 0cd949  cmp edx, 2
    X86_AT(c, 0xcd949u);
    (void)x86_sub(c, c.r[2], 0x2u, 0, 4);
    // 0cd94c  je 0xcd959
    X86_AT(c, 0xcd94cu);
    if (x86_cc(c, 4)) { goto L_cd959; }
    X86_TICK(c, 7);
    // 0cd94e  cmp edx, 3
    X86_AT(c, 0xcd94eu);
    (void)x86_sub(c, c.r[2], 0x3u, 0, 4);
    // 0cd951  je 0xcd95d
    X86_AT(c, 0xcd951u);
    if (x86_cc(c, 4)) { goto L_cd95d; }
    X86_TICK(c, 7);
    // 0cd953  jmp 0xcd967
    X86_AT(c, 0xcd953u);
    goto L_cd967;
L_cd955:
    X86_TICK(c, 9);
    // 0cd955  push 0
    X86_AT(c, 0xcd955u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0cd957  jmp 0xcd95f
    X86_AT(c, 0xcd957u);
    goto L_cd95f;
L_cd959:
    X86_TICK(c, 9);
    // 0cd959  push 8
    X86_AT(c, 0xcd959u);
    { uint32_t v = 0x8u; push32(c, v); }
    // 0cd95b  jmp 0xcd95f
    X86_AT(c, 0xcd95bu);
    goto L_cd95f;
L_cd95d:
    X86_TICK(c, 2);
    // 0cd95d  push 3
    X86_AT(c, 0xcd95du);
    { uint32_t v = 0x3u; push32(c, v); }
L_cd95f:
    X86_TICK(c, 7);
    // 0cd95f  call 0xb84e0
    X86_AT(c, 0xcd95fu);
    push32(c, 0xcd964u); x86_call_known(c, 0xb84e0u, f_000b84e0); X86_RET(c, 0xcd964u);
    X86_TICK(c, 2);
    // 0cd964  add esp, 4
    X86_AT(c, 0xcd964u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
L_cd967:
    X86_TICK(c, 9);
    // 0cd967  push 0x45664
    X86_AT(c, 0xcd967u);
    { uint32_t v = 0x45664u; push32(c, v); }
    // 0cd96c  call 0xbd8a4
    X86_AT(c, 0xcd96cu);
    push32(c, 0xcd971u); x86_call_known(c, 0xbd8a4u, f_000bd8a4); X86_RET(c, 0xcd971u);
    X86_TICK(c, 7);
    // 0cd971  call 0xbd5d0
    X86_AT(c, 0xcd971u);
    push32(c, 0xcd976u); x86_call_known(c, 0xbd5d0u, f_000bd5d0); X86_RET(c, 0xcd976u);
    X86_TICK(c, 9);
    // 0cd976  push 1
    X86_AT(c, 0xcd976u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0cd978  call 0xb61d4
    X86_AT(c, 0xcd978u);
    push32(c, 0xcd97du); x86_call_known(c, 0xb61d4u, f_000b61d4); X86_RET(c, 0xcd97du);
    X86_TICK(c, 9);
    // 0cd97d  add esp, 8
    X86_AT(c, 0xcd97du);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0cd980  jmp 0xcda7f
    X86_AT(c, 0xcd980u);
    goto L_cda7f;
L_cd985:
    X86_TICK(c, 13);
    // 0cd985  mov eax, dword ptr [0xa4a5a]
    X86_AT(c, 0xcd985u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xA4A5Au)));
    // 0cd98a  mov dword ptr [0xa4a56], eax
    X86_AT(c, 0xcd98au);
    wr32((c.sbase[3] + (uint32_t)(0xA4A56u)), c.r[0]);
    // 0cd98f  call 0xce8a0
    X86_AT(c, 0xcd98fu);
    push32(c, 0xcd994u); x86_call_known(c, 0xce8a0u, f_000ce8a0); X86_RET(c, 0xcd994u);
    X86_TICK(c, 11);
    // 0cd994  mov edx, dword ptr [0xa4a56]
    X86_AT(c, 0xcd994u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(0xA4A56u)));
    // 0cd99a  and edx, edx
    X86_AT(c, 0xcd99au);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & c.r[2], 4); }
    // 0cd99c  je 0xcd9aa
    X86_AT(c, 0xcd99cu);
    if (x86_cc(c, 4)) { goto L_cd9aa; }
    X86_TICK(c, 7);
    // 0cd99e  cmp edx, 2
    X86_AT(c, 0xcd99eu);
    (void)x86_sub(c, c.r[2], 0x2u, 0, 4);
    // 0cd9a1  je 0xcd9ae
    X86_AT(c, 0xcd9a1u);
    if (x86_cc(c, 4)) { goto L_cd9ae; }
    X86_TICK(c, 7);
    // 0cd9a3  cmp edx, 3
    X86_AT(c, 0xcd9a3u);
    (void)x86_sub(c, c.r[2], 0x3u, 0, 4);
    // 0cd9a6  je 0xcd9b2
    X86_AT(c, 0xcd9a6u);
    if (x86_cc(c, 4)) { goto L_cd9b2; }
    X86_TICK(c, 7);
    // 0cd9a8  jmp 0xcd9bc
    X86_AT(c, 0xcd9a8u);
    goto L_cd9bc;
L_cd9aa:
    X86_TICK(c, 9);
    // 0cd9aa  push 0
    X86_AT(c, 0xcd9aau);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0cd9ac  jmp 0xcd9b4
    X86_AT(c, 0xcd9acu);
    goto L_cd9b4;
L_cd9ae:
    X86_TICK(c, 9);
    // 0cd9ae  push 8
    X86_AT(c, 0xcd9aeu);
    { uint32_t v = 0x8u; push32(c, v); }
    // 0cd9b0  jmp 0xcd9b4
    X86_AT(c, 0xcd9b0u);
    goto L_cd9b4;
L_cd9b2:
    X86_TICK(c, 2);
    // 0cd9b2  push 3
    X86_AT(c, 0xcd9b2u);
    { uint32_t v = 0x3u; push32(c, v); }
L_cd9b4:
    X86_TICK(c, 7);
    // 0cd9b4  call 0xb84e0
    X86_AT(c, 0xcd9b4u);
    push32(c, 0xcd9b9u); x86_call_known(c, 0xb84e0u, f_000b84e0); X86_RET(c, 0xcd9b9u);
    X86_TICK(c, 2);
    // 0cd9b9  add esp, 4
    X86_AT(c, 0xcd9b9u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
L_cd9bc:
    X86_TICK(c, 9);
    // 0cd9bc  push 0x45664
    X86_AT(c, 0xcd9bcu);
    { uint32_t v = 0x45664u; push32(c, v); }
    // 0cd9c1  call 0xbd8a4
    X86_AT(c, 0xcd9c1u);
    push32(c, 0xcd9c6u); x86_call_known(c, 0xbd8a4u, f_000bd8a4); X86_RET(c, 0xcd9c6u);
    X86_TICK(c, 9);
    // 0cd9c6  add esp, 4
    X86_AT(c, 0xcd9c6u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0cd9c9  cmp bl, 0x86
    X86_AT(c, 0xcd9c9u);
    (void)x86_sub(c, g8(c, 3), 0x86u, 0, 1);
    // 0cd9cc  jne 0xcda1b
    X86_AT(c, 0xcd9ccu);
    if (x86_cc(c, 5)) { goto L_cda1b; }
    X86_TICK(c, 12);
    // 0cd9ce  cmp byte ptr [0xa4a49], 0x82
    X86_AT(c, 0xcd9ceu);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0xA4A49u))), 0x82u, 0, 1);
    // 0cd9d5  jne 0xcd9e7
    X86_AT(c, 0xcd9d5u);
    if (x86_cc(c, 5)) { goto L_cd9e7; }
    X86_TICK(c, 11);
    // 0cd9d7  mov byte ptr [edi + 0xa5ce8], 0xa1
    X86_AT(c, 0xcd9d7u);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0xA5CE8u)), 0xA1u);
    // 0cd9de  mov byte ptr [edi + 0xa5d18], 0x7b
    X86_AT(c, 0xcd9deu);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0xA5D18u)), 0x7Bu);
    // 0cd9e5  jmp 0xcd9f5
    X86_AT(c, 0xcd9e5u);
    goto L_cd9f5;
L_cd9e7:
    X86_TICK(c, 4);
    // 0cd9e7  mov byte ptr [edi + 0xa5ce8], 0x82
    X86_AT(c, 0xcd9e7u);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0xA5CE8u)), 0x82u);
    // 0cd9ee  mov byte ptr [edi + 0xa5d18], 0x77
    X86_AT(c, 0xcd9eeu);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0xA5D18u)), 0x77u);
L_cd9f5:
    X86_TICK(c, 12);
    // 0cd9f5  cmp dword ptr [0xa4a56], 0xff
    X86_AT(c, 0xcd9f5u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xA4A56u))), 0xFFu, 0, 4);
    // 0cd9ff  jne 0xcda0e
    X86_AT(c, 0xcd9ffu);
    if (x86_cc(c, 5)) { goto L_cda0e; }
    X86_TICK(c, 9);
    // 0cda01  mov dword ptr [edi*4 + 0xa6074], 0xffffffff
    X86_AT(c, 0xcda01u);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] * 4 + 0xA6074u)), 0xFFFFFFFFu);
    // 0cda0c  jmp 0xcda60
    X86_AT(c, 0xcda0cu);
    goto L_cda60;
L_cda0e:
    X86_TICK(c, 9);
    // 0cda0e  mov dword ptr [edi*4 + 0xa6074], 0x80
    X86_AT(c, 0xcda0eu);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] * 4 + 0xA6074u)), 0x80u);
    // 0cda19  jmp 0xcda60
    X86_AT(c, 0xcda19u);
    goto L_cda60;
L_cda1b:
    X86_TICK(c, 17);
    // 0cda1b  push dword ptr [edi*4 + 0xa5e08]
    X86_AT(c, 0xcda1bu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[7] * 4 + 0xA5E08u))); push32(c, v); }
    // 0cda22  push dword ptr [edi*4 + 0xa5d48]
    X86_AT(c, 0xcda22u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[7] * 4 + 0xA5D48u))); push32(c, v); }
    // 0cda29  call 0xc8474
    X86_AT(c, 0xcda29u);
    push32(c, 0xcda2eu); x86_call_known(c, 0xc8474u, f_000c8474); X86_RET(c, 0xcda2eu);
    X86_TICK(c, 9);
    // 0cda2e  add esp, 8
    X86_AT(c, 0xcda2eu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0cda31  dec al
    X86_AT(c, 0xcda31u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_dec(c, v, 1)); }
    // 0cda33  jne 0xcda45
    X86_AT(c, 0xcda33u);
    if (x86_cc(c, 5)) { goto L_cda45; }
    X86_TICK(c, 13);
    // 0cda35  sub eax, eax
    X86_AT(c, 0xcda35u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0cda37  mov byte ptr [edi + 0xa5ce8], al
    X86_AT(c, 0xcda37u);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0xA5CE8u)), g8(c, 0));
    // 0cda3d  mov byte ptr [edi + 0xa5d18], al
    X86_AT(c, 0xcda3du);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0xA5D18u)), g8(c, 0));
    // 0cda43  jmp 0xcda6b
    X86_AT(c, 0xcda43u);
    goto L_cda6b;
L_cda45:
    X86_TICK(c, 10);
    // 0cda45  mov al, 0x80
    X86_AT(c, 0xcda45u);
    s8(c, 0, 0x80u);
    // 0cda47  mov byte ptr [edi + 0xa5ce8], al
    X86_AT(c, 0xcda47u);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0xA5CE8u)), g8(c, 0));
    // 0cda4d  mov byte ptr [edi + 0xa5d18], 0x70
    X86_AT(c, 0xcda4du);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0xA5D18u)), 0x70u);
    // 0cda54  mov eax, 0x80
    X86_AT(c, 0xcda54u);
    c.r[0] = 0x80u;
    // 0cda59  mov dword ptr [edi*4 + 0xa6074], eax
    X86_AT(c, 0xcda59u);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] * 4 + 0xA6074u)), c.r[0]);
L_cda60:
    X86_TICK(c, 2);
    // 0cda60  mov dword ptr [edi*4 + 0xa5ec8], 0
    X86_AT(c, 0xcda60u);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] * 4 + 0xA5EC8u)), 0x0u);
L_cda6b:
    X86_TICK(c, 7);
    // 0cda6b  call 0xb75c0
    X86_AT(c, 0xcda6bu);
    push32(c, 0xcda70u); x86_call_known(c, 0xb75c0u, f_000b75c0); X86_RET(c, 0xcda70u);
    X86_TICK(c, 7);
    // 0cda70  call 0xbd5d0
    X86_AT(c, 0xcda70u);
    push32(c, 0xcda75u); x86_call_known(c, 0xbd5d0u, f_000bd5d0); X86_RET(c, 0xcda75u);
    X86_TICK(c, 9);
    // 0cda75  push 1
    X86_AT(c, 0xcda75u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0cda77  call 0xb61d4
    X86_AT(c, 0xcda77u);
    push32(c, 0xcda7cu); x86_call_known(c, 0xb61d4u, f_000b61d4); X86_RET(c, 0xcda7cu);
    X86_TICK(c, 2);
    // 0cda7c  add esp, 4
    X86_AT(c, 0xcda7cu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
L_cda7f:
    X86_TICK(c, 24);
    // 0cda7f  pop edi
    X86_AT(c, 0xcda7fu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0cda80  pop ebx
    X86_AT(c, 0xcda80u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0cda81  leave 
    X86_AT(c, 0xcda81u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0cda82  ret 
    X86_AT(c, 0xcda82u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xcd8a4u, "ran off the end of a function");
}
void f_000cda84(X86Cpu& c) {
    X86_TICK(c, 23);
    // 0cda84  push ebp
    X86_AT(c, 0xcda84u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0cda85  mov ebp, esp
    X86_AT(c, 0xcda85u);
    c.r[5] = c.r[4];
    // 0cda87  mov al, byte ptr [ebp + 8]
    X86_AT(c, 0xcda87u);
    s8(c, 0, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))));
    // 0cda8a  mov byte ptr [0xa4934], al
    X86_AT(c, 0xcda8au);
    wr8((c.sbase[3] + (uint32_t)(0xA4934u)), g8(c, 0));
    // 0cda8f  mov eax, dword ptr [0xa4a56]
    X86_AT(c, 0xcda8fu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xA4A56u)));
    // 0cda94  mov dword ptr [0xa4a5a], eax
    X86_AT(c, 0xcda94u);
    wr32((c.sbase[3] + (uint32_t)(0xA4A5Au)), c.r[0]);
    // 0cda99  call 0xcdcb0
    X86_AT(c, 0xcda99u);
    push32(c, 0xcda9eu); x86_call_known(c, 0xcdcb0u, f_000cdcb0); X86_RET(c, 0xcda9eu);
    X86_TICK(c, 7);
    // 0cda9e  and eax, eax
    X86_AT(c, 0xcda9eu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0cdaa0  je 0xcdac2
    X86_AT(c, 0xcdaa0u);
    if (x86_cc(c, 4)) { goto L_cdac2; }
    X86_TICK(c, 14);
    // 0cdaa2  mov dword ptr [0xa4a56], 1
    X86_AT(c, 0xcdaa2u);
    wr32((c.sbase[3] + (uint32_t)(0xA4A56u)), 0x1u);
    // 0cdaac  cmp word ptr [0xa492c], 0xffff
    X86_AT(c, 0xcdaacu);
    (void)x86_sub(c, rd16((c.sbase[3] + (uint32_t)(0xA492Cu))), 0xFFFFu, 0, 2);
    // 0cdab4  jne 0xcdaf4
    X86_AT(c, 0xcdab4u);
    if (x86_cc(c, 5)) { goto L_cdaf4; }
    X86_TICK(c, 9);
    // 0cdab6  push 2
    X86_AT(c, 0xcdab6u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0cdab8  call 0xb84e0
    X86_AT(c, 0xcdab8u);
    push32(c, 0xcdabdu); x86_call_known(c, 0xb84e0u, f_000b84e0); X86_RET(c, 0xcdabdu);
    X86_TICK(c, 9);
    // 0cdabd  add esp, 4
    X86_AT(c, 0xcdabdu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0cdac0  jmp 0xcdaf4
    X86_AT(c, 0xcdac0u);
    goto L_cdaf4;
L_cdac2:
    X86_TICK(c, 9);
    // 0cdac2  mov dword ptr [0xa4a56], 1
    X86_AT(c, 0xcdac2u);
    wr32((c.sbase[3] + (uint32_t)(0xA4A56u)), 0x1u);
    // 0cdacc  call 0xce8a0
    X86_AT(c, 0xcdaccu);
    push32(c, 0xcdad1u); x86_call_known(c, 0xce8a0u, f_000ce8a0); X86_RET(c, 0xcdad1u);
    X86_TICK(c, 9);
    // 0cdad1  push 2
    X86_AT(c, 0xcdad1u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0cdad3  call 0xb84e0
    X86_AT(c, 0xcdad3u);
    push32(c, 0xcdad8u); x86_call_known(c, 0xb84e0u, f_000b84e0); X86_RET(c, 0xcdad8u);
    X86_TICK(c, 24);
    // 0cdad8  push dword ptr [0xa4a72]
    X86_AT(c, 0xcdad8u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xA4A72u))); push32(c, v); }
    // 0cdade  push dword ptr [0xa4a6e]
    X86_AT(c, 0xcdadeu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xA4A6Eu))); push32(c, v); }
    // 0cdae4  push dword ptr [0xa4a52]
    X86_AT(c, 0xcdae4u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xA4A52u))); push32(c, v); }
    // 0cdaea  push 4
    X86_AT(c, 0xcdaeau);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0cdaec  call 0xc604c
    X86_AT(c, 0xcdaecu);
    push32(c, 0xcdaf1u); x86_call_known(c, 0xc604cu, f_000c604c); X86_RET(c, 0xcdaf1u);
    X86_TICK(c, 2);
    // 0cdaf1  add esp, 0x14
    X86_AT(c, 0xcdaf1u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x14u, 0, 4); }
L_cdaf4:
    X86_TICK(c, 16);
    // 0cdaf4  leave 
    X86_AT(c, 0xcdaf4u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0cdaf5  ret 
    X86_AT(c, 0xcdaf5u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xcda84u, "ran off the end of a function");
}
void f_000cdaf8(X86Cpu& c) {
    X86_TICK(c, 21);
    // 0cdaf8  push ebp
    X86_AT(c, 0xcdaf8u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0cdaf9  mov ebp, esp
    X86_AT(c, 0xcdaf9u);
    c.r[5] = c.r[4];
    // 0cdafb  push eax
    X86_AT(c, 0xcdafbu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0cdafc  push ebx
    X86_AT(c, 0xcdafcu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0cdafd  push edi
    X86_AT(c, 0xcdafdu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0cdafe  mov word ptr [0xabf80], 0xffff
    X86_AT(c, 0xcdafeu);
    wr16((c.sbase[3] + (uint32_t)(0xABF80u)), 0xFFFFu);
    // 0cdb07  push 7
    X86_AT(c, 0xcdb07u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cdb09  call 0xb607c
    X86_AT(c, 0xcdb09u);
    push32(c, 0xcdb0eu); x86_call_known(c, 0xb607cu, f_000b607c); X86_RET(c, 0xcdb0eu);
    X86_TICK(c, 9);
    // 0cdb0e  push 3
    X86_AT(c, 0xcdb0eu);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0cdb10  call 0xb84e0
    X86_AT(c, 0xcdb10u);
    push32(c, 0xcdb15u); x86_call_known(c, 0xb84e0u, f_000b84e0); X86_RET(c, 0xcdb15u);
    X86_TICK(c, 4);
    // 0cdb15  mov dword ptr [ebp - 4], 0
    X86_AT(c, 0xcdb15u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), 0x0u);
    // 0cdb1c  add esp, 8
    X86_AT(c, 0xcdb1cu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
L_cdb1f:
    X86_TICK(c, 11);
    // 0cdb1f  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0xcdb1fu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0cdb22  cmp eax, 0x30
    X86_AT(c, 0xcdb22u);
    (void)x86_sub(c, c.r[0], 0x30u, 0, 4);
    // 0cdb25  jge 0xcdb48
    X86_AT(c, 0xcdb25u);
    if (x86_cc(c, 13)) { goto L_cdb48; }
    X86_TICK(c, 11);
    // 0cdb27  mov al, byte ptr [eax + 0xa5ce8]
    X86_AT(c, 0xcdb27u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[0] + 0xA5CE8u))));
    // 0cdb2d  cmp al, 0x8a
    X86_AT(c, 0xcdb2du);
    (void)x86_sub(c, g8(c, 0), 0x8Au, 0, 1);
    // 0cdb2f  je 0xcdb35
    X86_AT(c, 0xcdb2fu);
    if (x86_cc(c, 4)) { goto L_cdb35; }
    X86_TICK(c, 7);
    // 0cdb31  cmp al, 0x89
    X86_AT(c, 0xcdb31u);
    (void)x86_sub(c, g8(c, 0), 0x89u, 0, 1);
    // 0cdb33  jne 0xcdb43
    X86_AT(c, 0xcdb33u);
    if (x86_cc(c, 5)) { goto L_cdb43; }
L_cdb35:
    X86_TICK(c, 6);
    // 0cdb35  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0xcdb35u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0cdb38  mov dword ptr [eax*4 + 0xa5ec8], 3
    X86_AT(c, 0xcdb38u);
    wr32((c.sbase[3] + (uint32_t)(c.r[0] * 4 + 0xA5EC8u)), 0x3u);
L_cdb43:
    X86_TICK(c, 13);
    // 0cdb43  inc dword ptr [ebp - 4]
    X86_AT(c, 0xcdb43u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0cdb46  jmp 0xcdb1f
    X86_AT(c, 0xcdb46u);
    X86_POLL(c, 0xcdb1fu); goto L_cdb1f;
L_cdb48:
    X86_TICK(c, 9);
    // 0cdb48  push 7
    X86_AT(c, 0xcdb48u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cdb4a  call 0xbb6b0
    X86_AT(c, 0xcdb4au);
    push32(c, 0xcdb4fu); x86_call_known(c, 0xbb6b0u, f_000bb6b0); X86_RET(c, 0xcdb4fu);
    X86_TICK(c, 11);
    // 0cdb4f  push 0x8e68
    X86_AT(c, 0xcdb4fu);
    { uint32_t v = 0x8E68u; push32(c, v); }
    // 0cdb54  push 7
    X86_AT(c, 0xcdb54u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cdb56  call 0xba428
    X86_AT(c, 0xcdb56u);
    push32(c, 0xcdb5bu); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xcdb5bu);
    X86_TICK(c, 9);
    // 0cdb5b  push 7
    X86_AT(c, 0xcdb5bu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cdb5d  call 0xbbb5c
    X86_AT(c, 0xcdb5du);
    push32(c, 0xcdb62u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xcdb62u);
    X86_TICK(c, 11);
    // 0cdb62  push 0x8e88
    X86_AT(c, 0xcdb62u);
    { uint32_t v = 0x8E88u; push32(c, v); }
    // 0cdb67  push 7
    X86_AT(c, 0xcdb67u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cdb69  call 0xbbba4
    X86_AT(c, 0xcdb69u);
    push32(c, 0xcdb6eu); x86_call_known(c, 0xbbba4u, f_000bbba4); X86_RET(c, 0xcdb6eu);
    X86_TICK(c, 17);
    // 0cdb6e  lea ebx, [ebp - 4]
    X86_AT(c, 0xcdb6eu);
    c.r[3] = (uint32_t)(c.r[5] + 0xFFFFFFFCu);
    // 0cdb71  push ebx
    X86_AT(c, 0xcdb71u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0cdb72  mov al, byte ptr [0xa4934]
    X86_AT(c, 0xcdb72u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(0xA4934u))));
    // 0cdb77  push eax
    X86_AT(c, 0xcdb77u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0cdb78  call 0xc98d8
    X86_AT(c, 0xcdb78u);
    push32(c, 0xcdb7du); x86_call_known(c, 0xc98d8u, f_000c98d8); X86_RET(c, 0xcdb7du);
    X86_TICK(c, 11);
    // 0cdb7d  push eax
    X86_AT(c, 0xcdb7du);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0cdb7e  push 7
    X86_AT(c, 0xcdb7eu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cdb80  call 0xbbba4
    X86_AT(c, 0xcdb80u);
    push32(c, 0xcdb85u); x86_call_known(c, 0xbbba4u, f_000bbba4); X86_RET(c, 0xcdb85u);
    X86_TICK(c, 11);
    // 0cdb85  push 0x8e90
    X86_AT(c, 0xcdb85u);
    { uint32_t v = 0x8E90u; push32(c, v); }
    // 0cdb8a  push 7
    X86_AT(c, 0xcdb8au);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cdb8c  call 0xbbba4
    X86_AT(c, 0xcdb8cu);
    push32(c, 0xcdb91u); x86_call_known(c, 0xbbba4u, f_000bbba4); X86_RET(c, 0xcdb91u);
    X86_TICK(c, 9);
    // 0cdb91  push 7
    X86_AT(c, 0xcdb91u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cdb93  call 0xbbb5c
    X86_AT(c, 0xcdb93u);
    push32(c, 0xcdb98u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xcdb98u);
    X86_TICK(c, 37);
    // 0cdb98  sub edi, edi
    X86_AT(c, 0xcdb98u);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
    // 0cdb9a  mov eax, dword ptr [0xa4a7a]
    X86_AT(c, 0xcdb9au);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xA4A7Au)));
    // 0cdb9f  shl eax, 6
    X86_AT(c, 0xcdb9fu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x6u, 4, w); if (w) c.r[0] = r; }
    // 0cdba2  add eax, dword ptr [0xa4a76]
    X86_AT(c, 0xcdba2u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[3] + (uint32_t)(0xA4A76u))), 0, 4); }
    // 0cdba8  movzx eax, byte ptr [eax + 0x8afa8]
    X86_AT(c, 0xcdba8u);
    c.r[0] = rd8((c.sbase[3] + (uint32_t)(c.r[0] + 0x8AFA8u)));
    // 0cdbaf  mov dword ptr [ebx], eax
    X86_AT(c, 0xcdbafu);
    wr32((c.sbase[3] + (uint32_t)(c.r[3])), c.r[0]);
    // 0cdbb1  add esp, 0x34
    X86_AT(c, 0xcdbb1u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x34u, 0, 4); }
    // 0cdbb4  cmp byte ptr [0xa4934], 0x86
    X86_AT(c, 0xcdbb4u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0xA4934u))), 0x86u, 0, 1);
    // 0cdbbb  jne 0xcdbda
    X86_AT(c, 0xcdbbbu);
    if (x86_cc(c, 5)) { goto L_cdbda; }
    X86_TICK(c, 12);
    // 0cdbbd  cmp byte ptr [0xa4a49], 0x82
    X86_AT(c, 0xcdbbdu);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0xA4A49u))), 0x82u, 0, 1);
    // 0cdbc4  jne 0xcdbd0
    X86_AT(c, 0xcdbc4u);
    if (x86_cc(c, 5)) { goto L_cdbd0; }
    X86_TICK(c, 9);
    // 0cdbc6  mov edi, 6
    X86_AT(c, 0xcdbc6u);
    c.r[7] = 0x6u;
    // 0cdbcb  jmp 0xcdc73
    X86_AT(c, 0xcdbcbu);
    goto L_cdc73;
L_cdbd0:
    X86_TICK(c, 9);
    // 0cdbd0  mov edi, 4
    X86_AT(c, 0xcdbd0u);
    c.r[7] = 0x4u;
    // 0cdbd5  jmp 0xcdc73
    X86_AT(c, 0xcdbd5u);
    goto L_cdc73;
L_cdbda:
    X86_TICK(c, 12);
    // 0cdbda  cmp byte ptr [0xa4a49], 0x82
    X86_AT(c, 0xcdbdau);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0xA4A49u))), 0x82u, 0, 1);
    // 0cdbe1  jne 0xcdc00
    X86_AT(c, 0xcdbe1u);
    if (x86_cc(c, 5)) { goto L_cdc00; }
    X86_TICK(c, 12);
    // 0cdbe3  cmp byte ptr [0xa4934], 0x86
    X86_AT(c, 0xcdbe3u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0xA4934u))), 0x86u, 0, 1);
    // 0cdbea  jae 0xcdbf6
    X86_AT(c, 0xcdbeau);
    if (x86_cc(c, 3)) { goto L_cdbf6; }
    X86_TICK(c, 9);
    // 0cdbec  mov edi, 5
    X86_AT(c, 0xcdbecu);
    c.r[7] = 0x5u;
    // 0cdbf1  jmp 0xcdc73
    X86_AT(c, 0xcdbf1u);
    goto L_cdc73;
L_cdbf6:
    X86_TICK(c, 9);
    // 0cdbf6  mov edi, 9
    X86_AT(c, 0xcdbf6u);
    c.r[7] = 0x9u;
    // 0cdbfb  jmp 0xcdc73
    X86_AT(c, 0xcdbfbu);
    goto L_cdc73;
L_cdc00:
    X86_TICK(c, 12);
    // 0cdc00  cmp byte ptr [0xa4934], 0x86
    X86_AT(c, 0xcdc00u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0xA4934u))), 0x86u, 0, 1);
    // 0cdc07  jae 0xcdc13
    X86_AT(c, 0xcdc07u);
    if (x86_cc(c, 3)) { goto L_cdc13; }
    X86_TICK(c, 9);
    // 0cdc09  mov edi, 3
    X86_AT(c, 0xcdc09u);
    c.r[7] = 0x3u;
    // 0cdc0e  jmp 0xcdc73
    X86_AT(c, 0xcdc0eu);
    goto L_cdc73;
L_cdc13:
    X86_TICK(c, 12);
    // 0cdc13  cmp dword ptr [ebp - 4], 0xf
    X86_AT(c, 0xcdc13u);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))), 0xFu, 0, 4);
    // 0cdc17  je 0xcdc61
    X86_AT(c, 0xcdc17u);
    if (x86_cc(c, 4)) { goto L_cdc61; }
    X86_TICK(c, 12);
    // 0cdc19  cmp dword ptr [ebp - 4], 0xd
    X86_AT(c, 0xcdc19u);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))), 0xDu, 0, 4);
    // 0cdc1d  je 0xcdc61
    X86_AT(c, 0xcdc1du);
    if (x86_cc(c, 4)) { goto L_cdc61; }
    X86_TICK(c, 12);
    // 0cdc1f  cmp dword ptr [ebp - 4], 0xe
    X86_AT(c, 0xcdc1fu);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))), 0xEu, 0, 4);
    // 0cdc23  je 0xcdc61
    X86_AT(c, 0xcdc23u);
    if (x86_cc(c, 4)) { goto L_cdc61; }
    X86_TICK(c, 12);
    // 0cdc25  cmp dword ptr [ebp - 4], 0x10
    X86_AT(c, 0xcdc25u);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))), 0x10u, 0, 4);
    // 0cdc29  je 0xcdc61
    X86_AT(c, 0xcdc29u);
    if (x86_cc(c, 4)) { goto L_cdc61; }
    X86_TICK(c, 12);
    // 0cdc2b  cmp dword ptr [ebp - 4], 2
    X86_AT(c, 0xcdc2bu);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))), 0x2u, 0, 4);
    // 0cdc2f  je 0xcdc3d
    X86_AT(c, 0xcdc2fu);
    if (x86_cc(c, 4)) { goto L_cdc3d; }
    X86_TICK(c, 12);
    // 0cdc31  cmp dword ptr [ebp - 4], 9
    X86_AT(c, 0xcdc31u);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))), 0x9u, 0, 4);
    // 0cdc35  je 0xcdc61
    X86_AT(c, 0xcdc35u);
    if (x86_cc(c, 4)) { goto L_cdc61; }
    X86_TICK(c, 12);
    // 0cdc37  cmp dword ptr [ebp - 4], 2
    X86_AT(c, 0xcdc37u);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))), 0x2u, 0, 4);
    // 0cdc3b  jne 0xcdc41
    X86_AT(c, 0xcdc3bu);
    if (x86_cc(c, 5)) { goto L_cdc41; }
L_cdc3d:
    X86_TICK(c, 9);
    // 0cdc3d  sub edi, edi
    X86_AT(c, 0xcdc3du);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
    // 0cdc3f  jmp 0xcdc73
    X86_AT(c, 0xcdc3fu);
    goto L_cdc73;
L_cdc41:
    X86_TICK(c, 12);
    // 0cdc41  cmp dword ptr [ebp - 4], 4
    X86_AT(c, 0xcdc41u);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))), 0x4u, 0, 4);
    // 0cdc45  jne 0xcdc4e
    X86_AT(c, 0xcdc45u);
    if (x86_cc(c, 5)) { goto L_cdc4e; }
    X86_TICK(c, 9);
    // 0cdc47  mov edi, 2
    X86_AT(c, 0xcdc47u);
    c.r[7] = 0x2u;
    // 0cdc4c  jmp 0xcdc73
    X86_AT(c, 0xcdc4cu);
    goto L_cdc73;
L_cdc4e:
    X86_TICK(c, 12);
    // 0cdc4e  cmp dword ptr [ebp - 4], 3
    X86_AT(c, 0xcdc4eu);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))), 0x3u, 0, 4);
    // 0cdc52  jne 0xcdc5b
    X86_AT(c, 0xcdc52u);
    if (x86_cc(c, 5)) { goto L_cdc5b; }
    X86_TICK(c, 9);
    // 0cdc54  mov edi, 1
    X86_AT(c, 0xcdc54u);
    c.r[7] = 0x1u;
    // 0cdc59  jmp 0xcdc73
    X86_AT(c, 0xcdc59u);
    goto L_cdc73;
L_cdc5b:
    X86_TICK(c, 12);
    // 0cdc5b  cmp dword ptr [ebp - 4], 0x21
    X86_AT(c, 0xcdc5bu);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))), 0x21u, 0, 4);
    // 0cdc5f  jne 0xcdc68
    X86_AT(c, 0xcdc5fu);
    if (x86_cc(c, 5)) { goto L_cdc68; }
L_cdc61:
    X86_TICK(c, 9);
    // 0cdc61  mov edi, 7
    X86_AT(c, 0xcdc61u);
    c.r[7] = 0x7u;
    // 0cdc66  jmp 0xcdc73
    X86_AT(c, 0xcdc66u);
    goto L_cdc73;
L_cdc68:
    X86_TICK(c, 12);
    // 0cdc68  cmp dword ptr [ebp - 4], 0x22
    X86_AT(c, 0xcdc68u);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))), 0x22u, 0, 4);
    // 0cdc6c  jne 0xcdc73
    X86_AT(c, 0xcdc6cu);
    if (x86_cc(c, 5)) { goto L_cdc73; }
    X86_TICK(c, 2);
    // 0cdc6e  mov edi, 8
    X86_AT(c, 0xcdc6eu);
    c.r[7] = 0x8u;
L_cdc73:
    X86_TICK(c, 12);
    // 0cdc73  cmp dword ptr [0xa4a56], 1
    X86_AT(c, 0xcdc73u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xA4A56u))), 0x1u, 0, 4);
    // 0cdc7a  jne 0xcdc81
    X86_AT(c, 0xcdc7au);
    if (x86_cc(c, 5)) { goto L_cdc81; }
    X86_TICK(c, 2);
    // 0cdc7c  mov edi, 7
    X86_AT(c, 0xcdc7cu);
    c.r[7] = 0x7u;
L_cdc81:
    X86_TICK(c, 15);
    // 0cdc81  mov eax, dword ptr [0xa4a56]
    X86_AT(c, 0xcdc81u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xA4A56u)));
    // 0cdc86  mov dword ptr [0xa4a5a], eax
    X86_AT(c, 0xcdc86u);
    wr32((c.sbase[3] + (uint32_t)(0xA4A5Au)), c.r[0]);
    // 0cdc8b  mov dword ptr [0xa4a56], 0x80
    X86_AT(c, 0xcdc8bu);
    wr32((c.sbase[3] + (uint32_t)(0xA4A56u)), 0x80u);
    // 0cdc95  call 0xbd5d0
    X86_AT(c, 0xcdc95u);
    push32(c, 0xcdc9au); x86_call_known(c, 0xbd5d0u, f_000bd5d0); X86_RET(c, 0xcdc9au);
    X86_TICK(c, 9);
    // 0cdc9a  push edi
    X86_AT(c, 0xcdc9au);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0cdc9b  call 0xb811c
    X86_AT(c, 0xcdc9bu);
    push32(c, 0xcdca0u); x86_call_known(c, 0xb811cu, f_000b811c); X86_RET(c, 0xcdca0u);
    X86_TICK(c, 9);
    // 0cdca0  push edi
    X86_AT(c, 0xcdca0u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0cdca1  call 0xbe074
    X86_AT(c, 0xcdca1u);
    push32(c, 0xcdca6u); x86_call_known(c, 0xbe074u, f_000be074); X86_RET(c, 0xcdca6u);
    X86_TICK(c, 26);
    // 0cdca6  add esp, 8
    X86_AT(c, 0xcdca6u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0cdca9  pop edi
    X86_AT(c, 0xcdca9u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0cdcaa  pop ebx
    X86_AT(c, 0xcdcaau);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0cdcab  leave 
    X86_AT(c, 0xcdcabu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0cdcac  ret 
    X86_AT(c, 0xcdcacu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xcdaf8u, "ran off the end of a function");
}
void f_000cdc73(X86Cpu& c) {
    X86_TICK(c, 12);
    // 0cdc73  cmp dword ptr [0xa4a56], 1
    X86_AT(c, 0xcdc73u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xA4A56u))), 0x1u, 0, 4);
    // 0cdc7a  jne 0xcdc81
    X86_AT(c, 0xcdc7au);
    if (x86_cc(c, 5)) { goto L_cdc81; }
    X86_TICK(c, 2);
    // 0cdc7c  mov edi, 7
    X86_AT(c, 0xcdc7cu);
    c.r[7] = 0x7u;
L_cdc81:
    X86_TICK(c, 15);
    // 0cdc81  mov eax, dword ptr [0xa4a56]
    X86_AT(c, 0xcdc81u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xA4A56u)));
    // 0cdc86  mov dword ptr [0xa4a5a], eax
    X86_AT(c, 0xcdc86u);
    wr32((c.sbase[3] + (uint32_t)(0xA4A5Au)), c.r[0]);
    // 0cdc8b  mov dword ptr [0xa4a56], 0x80
    X86_AT(c, 0xcdc8bu);
    wr32((c.sbase[3] + (uint32_t)(0xA4A56u)), 0x80u);
    // 0cdc95  call 0xbd5d0
    X86_AT(c, 0xcdc95u);
    push32(c, 0xcdc9au); x86_call_known(c, 0xbd5d0u, f_000bd5d0); X86_RET(c, 0xcdc9au);
    X86_TICK(c, 9);
    // 0cdc9a  push edi
    X86_AT(c, 0xcdc9au);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0cdc9b  call 0xb811c
    X86_AT(c, 0xcdc9bu);
    push32(c, 0xcdca0u); x86_call_known(c, 0xb811cu, f_000b811c); X86_RET(c, 0xcdca0u);
    X86_TICK(c, 9);
    // 0cdca0  push edi
    X86_AT(c, 0xcdca0u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0cdca1  call 0xbe074
    X86_AT(c, 0xcdca1u);
    push32(c, 0xcdca6u); x86_call_known(c, 0xbe074u, f_000be074); X86_RET(c, 0xcdca6u);
    X86_TICK(c, 26);
    // 0cdca6  add esp, 8
    X86_AT(c, 0xcdca6u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0cdca9  pop edi
    X86_AT(c, 0xcdca9u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0cdcaa  pop ebx
    X86_AT(c, 0xcdcaau);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0cdcab  leave 
    X86_AT(c, 0xcdcabu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0cdcac  ret 
    X86_AT(c, 0xcdcacu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xcdc73u, "ran off the end of a function");
}
void f_000cdcb0(X86Cpu& c) {
    X86_TICK(c, 13);
    // 0cdcb0  push ebx
    X86_AT(c, 0xcdcb0u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0cdcb1  push esi
    X86_AT(c, 0xcdcb1u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0cdcb2  push edi
    X86_AT(c, 0xcdcb2u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0cdcb3  call 0xcdaf8
    X86_AT(c, 0xcdcb3u);
    push32(c, 0xcdcb8u); x86_call_known(c, 0xcdaf8u, f_000cdaf8); X86_RET(c, 0xcdcb8u);
    X86_TICK(c, 9);
    // 0cdcb8  push 0xffffffff
    X86_AT(c, 0xcdcb8u);
    { uint32_t v = 0xFFFFFFFFu; push32(c, v); }
    // 0cdcba  call 0xb7f6c
    X86_AT(c, 0xcdcbau);
    push32(c, 0xcdcbfu); x86_call_known(c, 0xb7f6cu, f_000b7f6c); X86_RET(c, 0xcdcbfu);
    X86_TICK(c, 9);
    // 0cdcbf  push 0
    X86_AT(c, 0xcdcbfu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0cdcc1  call 0xbdea8
    X86_AT(c, 0xcdcc1u);
    push32(c, 0xcdcc6u); x86_call_known(c, 0xbdea8u, f_000bdea8); X86_RET(c, 0xcdcc6u);
    X86_TICK(c, 2);
    // 0cdcc6  add esp, 8
    X86_AT(c, 0xcdcc6u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
L_cdcc9:
    X86_TICK(c, 7);
    // 0cdcc9  call 0xca6d0
    X86_AT(c, 0xcdcc9u);
    push32(c, 0xcdcceu); x86_call_known(c, 0xca6d0u, f_000ca6d0); X86_RET(c, 0xcdcceu);
    X86_TICK(c, 2);
    // 0cdcce  sub edi, edi
    X86_AT(c, 0xcdcceu);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
L_cdcd0:
    X86_TICK(c, 7);
    // 0cdcd0  cmp edi, 4
    X86_AT(c, 0xcdcd0u);
    (void)x86_sub(c, c.r[7], 0x4u, 0, 4);
    // 0cdcd3  jge 0xcddbd
    X86_AT(c, 0xcdcd3u);
    if (x86_cc(c, 13)) { goto L_cddbd; }
    X86_TICK(c, 17);
    // 0cdcd9  lea eax, [edi + edi*2]
    X86_AT(c, 0xcdcd9u);
    c.r[0] = (uint32_t)(c.r[7] + c.r[7] * 2);
    // 0cdcdc  lea edx, [eax*8]
    X86_AT(c, 0xcdcdcu);
    c.r[2] = (uint32_t)(c.r[0] * 8);
    // 0cdce3  lea edx, [eax + edx*8]
    X86_AT(c, 0xcdce3u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 8);
    // 0cdce6  mov al, byte ptr [edx + 0xa4abd]
    X86_AT(c, 0xcdce6u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4ABDu))));
    // 0cdcec  cmp al, 0x44
    X86_AT(c, 0xcdcecu);
    (void)x86_sub(c, g8(c, 0), 0x44u, 0, 1);
    // 0cdcee  je 0xcddb7
    X86_AT(c, 0xcdceeu);
    if (x86_cc(c, 4)) { goto L_cddb7; }
    X86_TICK(c, 7);
    // 0cdcf4  cmp al, 0x41
    X86_AT(c, 0xcdcf4u);
    (void)x86_sub(c, g8(c, 0), 0x41u, 0, 1);
    // 0cdcf6  je 0xcddb7
    X86_AT(c, 0xcdcf6u);
    if (x86_cc(c, 4)) { goto L_cddb7; }
    X86_TICK(c, 12);
    // 0cdcfc  cmp dword ptr [edi*4 + 0xa4a05], 0
    X86_AT(c, 0xcdcfcu);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[7] * 4 + 0xA4A05u))), 0x0u, 0, 4);
    // 0cdd04  jl 0xcddb7
    X86_AT(c, 0xcdd04u);
    if (x86_cc(c, 12)) { goto L_cddb7; }
    X86_TICK(c, 15);
    // 0cdd0a  mov dword ptr [0xa4930], edi
    X86_AT(c, 0xcdd0au);
    wr32((c.sbase[3] + (uint32_t)(0xA4930u)), c.r[7]);
    // 0cdd10  push 0xe
    X86_AT(c, 0xcdd10u);
    { uint32_t v = 0xEu; push32(c, v); }
    // 0cdd12  lea eax, [edi + 0xa]
    X86_AT(c, 0xcdd12u);
    c.r[0] = (uint32_t)(c.r[7] + 0xAu);
    // 0cdd15  push eax
    X86_AT(c, 0xcdd15u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0cdd16  call 0xbb7fc
    X86_AT(c, 0xcdd16u);
    push32(c, 0xcdd1bu); x86_call_known(c, 0xbb7fcu, f_000bb7fc); X86_RET(c, 0xcdd1bu);
    X86_TICK(c, 9);
    // 0cdd1b  push edi
    X86_AT(c, 0xcdd1bu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0cdd1c  call 0xb7f6c
    X86_AT(c, 0xcdd1cu);
    push32(c, 0xcdd21u); x86_call_known(c, 0xb7f6cu, f_000b7f6c); X86_RET(c, 0xcdd21u);
    X86_TICK(c, 9);
    // 0cdd21  push 0
    X86_AT(c, 0xcdd21u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0cdd23  call 0xbdea8
    X86_AT(c, 0xcdd23u);
    push32(c, 0xcdd28u); x86_call_known(c, 0xbdea8u, f_000bdea8); X86_RET(c, 0xcdd28u);
    X86_TICK(c, 2);
    // 0cdd28  add esp, 0x10
    X86_AT(c, 0xcdd28u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
L_cdd2b:
    X86_TICK(c, 7);
    // 0cdd2b  call 0xd3688
    X86_AT(c, 0xcdd2bu);
    push32(c, 0xcdd30u); x86_call_known(c, 0xd3688u, f_000d3688); X86_RET(c, 0xcdd30u);
    X86_TICK(c, 7);
    // 0cdd30  and eax, eax
    X86_AT(c, 0xcdd30u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0cdd32  jne 0xcdd2b
    X86_AT(c, 0xcdd32u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xcdd2bu); goto L_cdd2b; }
    X86_TICK(c, 9);
    // 0cdd34  push 0xffffffff
    X86_AT(c, 0xcdd34u);
    { uint32_t v = 0xFFFFFFFFu; push32(c, v); }
    // 0cdd36  call 0xb7f6c
    X86_AT(c, 0xcdd36u);
    push32(c, 0xcdd3bu); x86_call_known(c, 0xb7f6cu, f_000b7f6c); X86_RET(c, 0xcdd3bu);
    X86_TICK(c, 9);
    // 0cdd3b  push 0
    X86_AT(c, 0xcdd3bu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0cdd3d  call 0xbdea8
    X86_AT(c, 0xcdd3du);
    push32(c, 0xcdd42u); x86_call_known(c, 0xbdea8u, f_000bdea8); X86_RET(c, 0xcdd42u);
    X86_TICK(c, 11);
    // 0cdd42  lea eax, [edi + 0xa]
    X86_AT(c, 0xcdd42u);
    c.r[0] = (uint32_t)(c.r[7] + 0xAu);
    // 0cdd45  push eax
    X86_AT(c, 0xcdd45u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0cdd46  call 0xbb8bc
    X86_AT(c, 0xcdd46u);
    push32(c, 0xcdd4bu); x86_call_known(c, 0xbb8bcu, f_000bb8bc); X86_RET(c, 0xcdd4bu);
    X86_TICK(c, 9);
    // 0cdd4b  push 1
    X86_AT(c, 0xcdd4bu);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0cdd4d  call 0xcc934
    X86_AT(c, 0xcdd4du);
    push32(c, 0xcdd52u); x86_call_known(c, 0xcc934u, f_000cc934); X86_RET(c, 0xcdd52u);
    X86_TICK(c, 14);
    // 0cdd52  add esp, 0x10
    X86_AT(c, 0xcdd52u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0cdd55  cmp dword ptr [0xa4a5a], 3
    X86_AT(c, 0xcdd55u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xA4A5Au))), 0x3u, 0, 4);
    // 0cdd5c  jne 0xcdd68
    X86_AT(c, 0xcdd5cu);
    if (x86_cc(c, 5)) { goto L_cdd68; }
    X86_TICK(c, 2);
    // 0cdd5e  mov dword ptr [0xabf7c], 0
    X86_AT(c, 0xcdd5eu);
    wr32((c.sbase[3] + (uint32_t)(0xABF7Cu)), 0x0u);
L_cdd68:
    X86_TICK(c, 4);
    // 0cdd68  mov ebx, 0xffffffff
    X86_AT(c, 0xcdd68u);
    c.r[3] = 0xFFFFFFFFu;
    // 0cdd6d  sub esi, esi
    X86_AT(c, 0xcdd6du);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[6], 0, 4); }
L_cdd6f:
    X86_TICK(c, 7);
    // 0cdd6f  cmp esi, 8
    X86_AT(c, 0xcdd6fu);
    (void)x86_sub(c, c.r[6], 0x8u, 0, 4);
    // 0cdd72  jge 0xcdd83
    X86_AT(c, 0xcdd72u);
    if (x86_cc(c, 13)) { goto L_cdd83; }
    X86_TICK(c, 12);
    // 0cdd74  cmp dword ptr [esi*4 + 0xa49b5], 0
    X86_AT(c, 0xcdd74u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[6] * 4 + 0xA49B5u))), 0x0u, 0, 4);
    // 0cdd7c  jle 0xcdd80
    X86_AT(c, 0xcdd7cu);
    if (x86_cc(c, 14)) { goto L_cdd80; }
    X86_TICK(c, 2);
    // 0cdd7e  sub ebx, ebx
    X86_AT(c, 0xcdd7eu);
    { uint32_t v = c.r[3]; c.r[3] = x86_sub(c, v, c.r[3], 0, 4); }
L_cdd80:
    X86_TICK(c, 9);
    // 0cdd80  inc esi
    X86_AT(c, 0xcdd80u);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 0cdd81  jmp 0xcdd6f
    X86_AT(c, 0xcdd81u);
    X86_POLL(c, 0xcdd6fu); goto L_cdd6f;
L_cdd83:
    X86_TICK(c, 7);
    // 0cdd83  cmp ebx, 0xffffffff
    X86_AT(c, 0xcdd83u);
    (void)x86_sub(c, c.r[3], 0xFFFFFFFFu, 0, 4);
    // 0cdd86  jne 0xcdd8f
    X86_AT(c, 0xcdd86u);
    if (x86_cc(c, 5)) { goto L_cdd8f; }
    X86_TICK(c, 9);
    // 0cdd88  sub eax, eax
    X86_AT(c, 0xcdd88u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0cdd8a  jmp 0xcde04
    X86_AT(c, 0xcdd8au);
    goto L_cde04;
L_cdd8f:
    X86_TICK(c, 4);
    // 0cdd8f  mov ebx, 0xffffffff
    X86_AT(c, 0xcdd8fu);
    c.r[3] = 0xFFFFFFFFu;
    // 0cdd94  sub esi, esi
    X86_AT(c, 0xcdd94u);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[6], 0, 4); }
L_cdd96:
    X86_TICK(c, 7);
    // 0cdd96  cmp esi, 4
    X86_AT(c, 0xcdd96u);
    (void)x86_sub(c, c.r[6], 0x4u, 0, 4);
    // 0cdd99  jge 0xcddaa
    X86_AT(c, 0xcdd99u);
    if (x86_cc(c, 13)) { goto L_cddaa; }
    X86_TICK(c, 12);
    // 0cdd9b  cmp dword ptr [esi*4 + 0xa4a05], 0
    X86_AT(c, 0xcdd9bu);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[6] * 4 + 0xA4A05u))), 0x0u, 0, 4);
    // 0cdda3  jl 0xcdda7
    X86_AT(c, 0xcdda3u);
    if (x86_cc(c, 12)) { goto L_cdda7; }
    X86_TICK(c, 2);
    // 0cdda5  sub ebx, ebx
    X86_AT(c, 0xcdda5u);
    { uint32_t v = c.r[3]; c.r[3] = x86_sub(c, v, c.r[3], 0, 4); }
L_cdda7:
    X86_TICK(c, 9);
    // 0cdda7  inc esi
    X86_AT(c, 0xcdda7u);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 0cdda8  jmp 0xcdd96
    X86_AT(c, 0xcdda8u);
    X86_POLL(c, 0xcdd96u); goto L_cdd96;
L_cddaa:
    X86_TICK(c, 7);
    // 0cddaa  cmp ebx, 0xffffffff
    X86_AT(c, 0xcddaau);
    (void)x86_sub(c, c.r[3], 0xFFFFFFFFu, 0, 4);
    // 0cddad  jne 0xcddb7
    X86_AT(c, 0xcddadu);
    if (x86_cc(c, 5)) { goto L_cddb7; }
    X86_TICK(c, 7);
    // 0cddaf  call 0xc9bcc
    X86_AT(c, 0xcddafu);
    push32(c, 0xcddb4u); x86_call_known(c, 0xc9bccu, f_000c9bcc); X86_RET(c, 0xcddb4u);
    X86_TICK(c, 9);
    // 0cddb4  inc eax
    X86_AT(c, 0xcddb4u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0cddb5  jmp 0xcddff
    X86_AT(c, 0xcddb5u);
    goto L_cddff;
L_cddb7:
    X86_TICK(c, 9);
    // 0cddb7  inc edi
    X86_AT(c, 0xcddb7u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0cddb8  jmp 0xcdcd0
    X86_AT(c, 0xcddb8u);
    X86_POLL(c, 0xcdcd0u); goto L_cdcd0;
L_cddbd:
    X86_TICK(c, 7);
    // 0cddbd  call 0xceeb8
    X86_AT(c, 0xcddbdu);
    push32(c, 0xcddc2u); x86_call_known(c, 0xceeb8u, f_000ceeb8); X86_RET(c, 0xcddc2u);
    X86_TICK(c, 9);
    // 0cddc2  push 0xffffffff
    X86_AT(c, 0xcddc2u);
    { uint32_t v = 0xFFFFFFFFu; push32(c, v); }
    // 0cddc4  call 0xb7f6c
    X86_AT(c, 0xcddc4u);
    push32(c, 0xcddc9u); x86_call_known(c, 0xb7f6cu, f_000b7f6c); X86_RET(c, 0xcddc9u);
    X86_TICK(c, 9);
    // 0cddc9  push 0
    X86_AT(c, 0xcddc9u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0cddcb  call 0xbdea8
    X86_AT(c, 0xcddcbu);
    push32(c, 0xcddd0u); x86_call_known(c, 0xbdea8u, f_000bdea8); X86_RET(c, 0xcddd0u);
    X86_TICK(c, 6);
    // 0cddd0  mov ebx, 0xffffffff
    X86_AT(c, 0xcddd0u);
    c.r[3] = 0xFFFFFFFFu;
    // 0cddd5  sub esi, esi
    X86_AT(c, 0xcddd5u);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[6], 0, 4); }
    // 0cddd7  add esp, 8
    X86_AT(c, 0xcddd7u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
L_cddda:
    X86_TICK(c, 7);
    // 0cddda  cmp esi, 4
    X86_AT(c, 0xcdddau);
    (void)x86_sub(c, c.r[6], 0x4u, 0, 4);
    // 0cdddd  jge 0xcddee
    X86_AT(c, 0xcddddu);
    if (x86_cc(c, 13)) { goto L_cddee; }
    X86_TICK(c, 12);
    // 0cdddf  cmp dword ptr [esi*4 + 0xa4a05], 0
    X86_AT(c, 0xcdddfu);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[6] * 4 + 0xA4A05u))), 0x0u, 0, 4);
    // 0cdde7  jl 0xcddeb
    X86_AT(c, 0xcdde7u);
    if (x86_cc(c, 12)) { goto L_cddeb; }
    X86_TICK(c, 2);
    // 0cdde9  sub ebx, ebx
    X86_AT(c, 0xcdde9u);
    { uint32_t v = c.r[3]; c.r[3] = x86_sub(c, v, c.r[3], 0, 4); }
L_cddeb:
    X86_TICK(c, 9);
    // 0cddeb  inc esi
    X86_AT(c, 0xcddebu);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 0cddec  jmp 0xcddda
    X86_AT(c, 0xcddecu);
    X86_POLL(c, 0xcdddau); goto L_cddda;
L_cddee:
    X86_TICK(c, 7);
    // 0cddee  call 0xc9bcc
    X86_AT(c, 0xcddeeu);
    push32(c, 0xcddf3u); x86_call_known(c, 0xc9bccu, f_000c9bcc); X86_RET(c, 0xcddf3u);
    X86_TICK(c, 7);
    // 0cddf3  inc eax
    X86_AT(c, 0xcddf3u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0cddf4  je 0xcddff
    X86_AT(c, 0xcddf4u);
    if (x86_cc(c, 4)) { goto L_cddff; }
    X86_TICK(c, 7);
    // 0cddf6  cmp ebx, 0xffffffff
    X86_AT(c, 0xcddf6u);
    (void)x86_sub(c, c.r[3], 0xFFFFFFFFu, 0, 4);
    // 0cddf9  jne 0xcdcc9
    X86_AT(c, 0xcddf9u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xcdcc9u); goto L_cdcc9; }
L_cddff:
    X86_TICK(c, 2);
    // 0cddff  mov eax, 0xffffffff
    X86_AT(c, 0xcddffu);
    c.r[0] = 0xFFFFFFFFu;
L_cde04:
    X86_TICK(c, 22);
    // 0cde04  pop edi
    X86_AT(c, 0xcde04u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0cde05  pop esi
    X86_AT(c, 0xcde05u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0cde06  pop ebx
    X86_AT(c, 0xcde06u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0cde07  ret 
    X86_AT(c, 0xcde07u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xcdcb0u, "ran off the end of a function");
}
void f_000cde08(X86Cpu& c) {
    X86_TICK(c, 48);
    // 0cde08  push ebp
    X86_AT(c, 0xcde08u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0cde09  mov ebp, esp
    X86_AT(c, 0xcde09u);
    c.r[5] = c.r[4];
    // 0cde0b  sub esp, 8
    X86_AT(c, 0xcde0bu);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, 0x8u, 0, 4); }
    // 0cde0e  push ebx
    X86_AT(c, 0xcde0eu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0cde0f  push edi
    X86_AT(c, 0xcde0fu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0cde10  mov edi, dword ptr [0xa4930]
    X86_AT(c, 0xcde10u);
    c.r[7] = rd32((c.sbase[3] + (uint32_t)(0xA4930u)));
    // 0cde16  mov eax, dword ptr [edi*4 + 0xa49f5]
    X86_AT(c, 0xcde16u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[7] * 4 + 0xA49F5u)));
    // 0cde1d  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0xcde1du);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
    // 0cde20  mov eax, dword ptr [edi*4 + 0xa4a05]
    X86_AT(c, 0xcde20u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[7] * 4 + 0xA4A05u)));
    // 0cde27  mov dword ptr [ebp - 8], eax
    X86_AT(c, 0xcde27u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), c.r[0]);
    // 0cde2a  push 1
    X86_AT(c, 0xcde2au);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0cde2c  push dword ptr [ebp + 8]
    X86_AT(c, 0xcde2cu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, v); }
    // 0cde2f  lea ebx, [ebp - 8]
    X86_AT(c, 0xcde2fu);
    c.r[3] = (uint32_t)(c.r[5] + 0xFFFFFFF8u);
    // 0cde32  push ebx
    X86_AT(c, 0xcde32u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0cde33  lea eax, [ebp - 4]
    X86_AT(c, 0xcde33u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFFCu);
    // 0cde36  push eax
    X86_AT(c, 0xcde36u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0cde37  call 0xce834
    X86_AT(c, 0xcde37u);
    push32(c, 0xcde3cu); x86_call_known(c, 0xce834u, f_000ce834); X86_RET(c, 0xcde3cu);
    X86_TICK(c, 9);
    // 0cde3c  push 7
    X86_AT(c, 0xcde3cu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cde3e  call 0xbb6b0
    X86_AT(c, 0xcde3eu);
    push32(c, 0xcde43u); x86_call_known(c, 0xbb6b0u, f_000bb6b0); X86_RET(c, 0xcde43u);
    X86_TICK(c, 14);
    // 0cde43  add esp, 0x14
    X86_AT(c, 0xcde43u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x14u, 0, 4); }
    // 0cde46  cmp dword ptr [ebx], 0xa
    X86_AT(c, 0xcde46u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[3]))), 0xAu, 0, 4);
    // 0cde49  jle 0xcde8a
    X86_AT(c, 0xcde49u);
    if (x86_cc(c, 14)) { goto L_cde8a; }
    X86_TICK(c, 15);
    // 0cde4b  mov dword ptr [edi*4 + 0xa49f5], 0xffffffff
    X86_AT(c, 0xcde4bu);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] * 4 + 0xA49F5u)), 0xFFFFFFFFu);
    // 0cde56  mov dword ptr [edi*4 + 0xa4a05], 0xffffffff
    X86_AT(c, 0xcde56u);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] * 4 + 0xA4A05u)), 0xFFFFFFFFu);
    // 0cde61  push 0x8e98
    X86_AT(c, 0xcde61u);
    { uint32_t v = 0x8E98u; push32(c, v); }
    // 0cde66  push 7
    X86_AT(c, 0xcde66u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cde68  call 0xba428
    X86_AT(c, 0xcde68u);
    push32(c, 0xcde6du); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xcde6du);
    X86_TICK(c, 9);
    // 0cde6d  push 7
    X86_AT(c, 0xcde6du);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cde6f  call 0xbbb5c
    X86_AT(c, 0xcde6fu);
    push32(c, 0xcde74u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xcde74u);
    X86_TICK(c, 9);
    // 0cde74  push 0xffffffff
    X86_AT(c, 0xcde74u);
    { uint32_t v = 0xFFFFFFFFu; push32(c, v); }
    // 0cde76  call 0xb7f6c
    X86_AT(c, 0xcde76u);
    push32(c, 0xcde7bu); x86_call_known(c, 0xb7f6cu, f_000b7f6c); X86_RET(c, 0xcde7bu);
    X86_TICK(c, 9);
    // 0cde7b  push 0
    X86_AT(c, 0xcde7bu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0cde7d  call 0xbdea8
    X86_AT(c, 0xcde7du);
    push32(c, 0xcde82u); x86_call_known(c, 0xbdea8u, f_000bdea8); X86_RET(c, 0xcde82u);
    X86_TICK(c, 9);
    // 0cde82  add esp, 0x14
    X86_AT(c, 0xcde82u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x14u, 0, 4); }
    // 0cde85  jmp 0xcdefc
    X86_AT(c, 0xcde85u);
    goto L_cdefc;
L_cde8a:
    X86_TICK(c, 11);
    // 0cde8a  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0xcde8au);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0cde8d  and eax, eax
    X86_AT(c, 0xcde8du);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0cde8f  jl 0xcdeaa
    X86_AT(c, 0xcde8fu);
    if (x86_cc(c, 12)) { goto L_cdeaa; }
    X86_TICK(c, 11);
    // 0cde91  mov edx, dword ptr [ebp - 8]
    X86_AT(c, 0xcde91u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)));
    // 0cde94  and edx, edx
    X86_AT(c, 0xcde94u);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & c.r[2], 4); }
    // 0cde96  jl 0xcdeaa
    X86_AT(c, 0xcde96u);
    if (x86_cc(c, 12)) { goto L_cdeaa; }
    X86_TICK(c, 7);
    // 0cde98  cmp eax, 0xa
    X86_AT(c, 0xcde98u);
    (void)x86_sub(c, c.r[0], 0xAu, 0, 4);
    // 0cde9b  jg 0xcdeaa
    X86_AT(c, 0xcde9bu);
    if (x86_cc(c, 15)) { goto L_cdeaa; }
    X86_TICK(c, 11);
    // 0cde9d  push edx
    X86_AT(c, 0xcde9du);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0cde9e  push eax
    X86_AT(c, 0xcde9eu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0cde9f  call 0xcdf00
    X86_AT(c, 0xcde9fu);
    push32(c, 0xcdea4u); x86_call_known(c, 0xcdf00u, f_000cdf00); X86_RET(c, 0xcdea4u);
    X86_TICK(c, 9);
    // 0cdea4  add esp, 8
    X86_AT(c, 0xcdea4u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0cdea7  inc eax
    X86_AT(c, 0xcdea7u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0cdea8  jne 0xcdeb8
    X86_AT(c, 0xcdea8u);
    if (x86_cc(c, 5)) { goto L_cdeb8; }
L_cdeaa:
    X86_TICK(c, 9);
    // 0cdeaa  push 3
    X86_AT(c, 0xcdeaau);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0cdeac  call 0xb607c
    X86_AT(c, 0xcdeacu);
    push32(c, 0xcdeb1u); x86_call_known(c, 0xb607cu, f_000b607c); X86_RET(c, 0xcdeb1u);
    X86_TICK(c, 9);
    // 0cdeb1  push 0x8eb4
    X86_AT(c, 0xcdeb1u);
    { uint32_t v = 0x8EB4u; push32(c, v); }
    // 0cdeb6  jmp 0xcded5
    X86_AT(c, 0xcdeb6u);
    goto L_cded5;
L_cdeb8:
    X86_TICK(c, 17);
    // 0cdeb8  push dword ptr [ebp - 8]
    X86_AT(c, 0xcdeb8u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u))); push32(c, v); }
    // 0cdebb  push dword ptr [ebp - 4]
    X86_AT(c, 0xcdebbu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))); push32(c, v); }
    // 0cdebe  call 0xc80f0
    X86_AT(c, 0xcdebeu);
    push32(c, 0xcdec3u); x86_call_known(c, 0xc80f0u, f_000c80f0); X86_RET(c, 0xcdec3u);
    X86_TICK(c, 9);
    // 0cdec3  add esp, 8
    X86_AT(c, 0xcdec3u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0cdec6  inc eax
    X86_AT(c, 0xcdec6u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0cdec7  je 0xcdee8
    X86_AT(c, 0xcdec7u);
    if (x86_cc(c, 4)) { goto L_cdee8; }
    X86_TICK(c, 9);
    // 0cdec9  push 0
    X86_AT(c, 0xcdec9u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0cdecb  call 0xb607c
    X86_AT(c, 0xcdecbu);
    push32(c, 0xcded0u); x86_call_known(c, 0xb607cu, f_000b607c); X86_RET(c, 0xcded0u);
    X86_TICK(c, 2);
    // 0cded0  push 0x8ee4
    X86_AT(c, 0xcded0u);
    { uint32_t v = 0x8EE4u; push32(c, v); }
L_cded5:
    X86_TICK(c, 9);
    // 0cded5  push 7
    X86_AT(c, 0xcded5u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cded7  call 0xba428
    X86_AT(c, 0xcded7u);
    push32(c, 0xcdedcu); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xcdedcu);
    X86_TICK(c, 9);
    // 0cdedc  push 7
    X86_AT(c, 0xcdedcu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cdede  call 0xbbb5c
    X86_AT(c, 0xcdedeu);
    push32(c, 0xcdee3u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xcdee3u);
    X86_TICK(c, 9);
    // 0cdee3  add esp, 0x10
    X86_AT(c, 0xcdee3u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0cdee6  jmp 0xcdefc
    X86_AT(c, 0xcdee6u);
    goto L_cdefc;
L_cdee8:
    X86_TICK(c, 12);
    // 0cdee8  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0xcdee8u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0cdeeb  mov dword ptr [edi*4 + 0xa49f5], eax
    X86_AT(c, 0xcdeebu);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] * 4 + 0xA49F5u)), c.r[0]);
    // 0cdef2  mov eax, dword ptr [ebp - 8]
    X86_AT(c, 0xcdef2u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)));
    // 0cdef5  mov dword ptr [edi*4 + 0xa4a05], eax
    X86_AT(c, 0xcdef5u);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] * 4 + 0xA4A05u)), c.r[0]);
L_cdefc:
    X86_TICK(c, 24);
    // 0cdefc  pop edi
    X86_AT(c, 0xcdefcu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0cdefd  pop ebx
    X86_AT(c, 0xcdefdu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0cdefe  leave 
    X86_AT(c, 0xcdefeu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0cdeff  ret 
    X86_AT(c, 0xcdeffu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xcde08u, "ran off the end of a function");
}
void f_000cdf00(X86Cpu& c) {
    X86_TICK(c, 39);
    // 0cdf00  push ebp
    X86_AT(c, 0xcdf00u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0cdf01  mov ebp, esp
    X86_AT(c, 0xcdf01u);
    c.r[5] = c.r[4];
    // 0cdf03  push eax
    X86_AT(c, 0xcdf03u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0cdf04  push esi
    X86_AT(c, 0xcdf04u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0cdf05  push edi
    X86_AT(c, 0xcdf05u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0cdf06  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0xcdf06u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0cdf09  mov esi, dword ptr [ebp + 0xc]
    X86_AT(c, 0xcdf09u);
    c.r[6] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0cdf0c  mov eax, esi
    X86_AT(c, 0xcdf0cu);
    c.r[0] = c.r[6];
    // 0cdf0e  lea edx, [eax + eax*8]
    X86_AT(c, 0xcdf0eu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 8);
    // 0cdf11  lea eax, [edx + eax*2]
    X86_AT(c, 0xcdf11u);
    c.r[0] = (uint32_t)(c.r[2] + c.r[0] * 2);
    // 0cdf14  lea edx, [edi + eax*1]
    X86_AT(c, 0xcdf14u);
    c.r[2] = (uint32_t)(c.r[7] + c.r[0]);
    // 0cdf17  mov al, byte ptr [edx + 0x8cfa8]
    X86_AT(c, 0xcdf17u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[2] + 0x8CFA8u))));
    // 0cdf1d  mov byte ptr [ebp - 1], al
    X86_AT(c, 0xcdf1du);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFFu)), g8(c, 0));
    // 0cdf20  cmp al, 2
    X86_AT(c, 0xcdf20u);
    (void)x86_sub(c, g8(c, 0), 0x2u, 0, 1);
    // 0cdf22  je 0xcdf34
    X86_AT(c, 0xcdf22u);
    if (x86_cc(c, 4)) { goto L_cdf34; }
    X86_TICK(c, 7);
    // 0cdf24  cmp al, 3
    X86_AT(c, 0xcdf24u);
    (void)x86_sub(c, g8(c, 0), 0x3u, 0, 1);
    // 0cdf26  je 0xcdf34
    X86_AT(c, 0xcdf26u);
    if (x86_cc(c, 4)) { goto L_cdf34; }
    X86_TICK(c, 7);
    // 0cdf28  cmp al, 4
    X86_AT(c, 0xcdf28u);
    (void)x86_sub(c, g8(c, 0), 0x4u, 0, 1);
    // 0cdf2a  je 0xcdf34
    X86_AT(c, 0xcdf2au);
    if (x86_cc(c, 4)) { goto L_cdf34; }
    X86_TICK(c, 7);
    // 0cdf2c  cmp al, 9
    X86_AT(c, 0xcdf2cu);
    (void)x86_sub(c, g8(c, 0), 0x9u, 0, 1);
    // 0cdf2e  je 0xcdf34
    X86_AT(c, 0xcdf2eu);
    if (x86_cc(c, 4)) { goto L_cdf34; }
    X86_TICK(c, 7);
    // 0cdf30  cmp al, 0x22
    X86_AT(c, 0xcdf30u);
    (void)x86_sub(c, g8(c, 0), 0x22u, 0, 1);
    // 0cdf32  jne 0xcdf54
    X86_AT(c, 0xcdf32u);
    if (x86_cc(c, 5)) { goto L_cdf54; }
L_cdf34:
    X86_TICK(c, 2);
    // 0cdf34  sub ecx, ecx
    X86_AT(c, 0xcdf34u);
    { uint32_t v = c.r[1]; c.r[1] = x86_sub(c, v, c.r[1], 0, 4); }
L_cdf36:
    X86_TICK(c, 7);
    // 0cdf36  cmp ecx, 4
    X86_AT(c, 0xcdf36u);
    (void)x86_sub(c, c.r[1], 0x4u, 0, 4);
    // 0cdf39  jge 0xcdf50
    X86_AT(c, 0xcdf39u);
    if (x86_cc(c, 13)) { goto L_cdf50; }
    X86_TICK(c, 11);
    // 0cdf3b  cmp edi, dword ptr [ecx*4 + 0xa49f5]
    X86_AT(c, 0xcdf3bu);
    (void)x86_sub(c, c.r[7], rd32((c.sbase[3] + (uint32_t)(c.r[1] * 4 + 0xA49F5u))), 0, 4);
    // 0cdf42  jne 0xcdf4d
    X86_AT(c, 0xcdf42u);
    if (x86_cc(c, 5)) { goto L_cdf4d; }
    X86_TICK(c, 11);
    // 0cdf44  cmp esi, dword ptr [ecx*4 + 0xa4a05]
    X86_AT(c, 0xcdf44u);
    (void)x86_sub(c, c.r[6], rd32((c.sbase[3] + (uint32_t)(c.r[1] * 4 + 0xA4A05u))), 0, 4);
    // 0cdf4b  je 0xcdf54
    X86_AT(c, 0xcdf4bu);
    if (x86_cc(c, 4)) { goto L_cdf54; }
L_cdf4d:
    X86_TICK(c, 9);
    // 0cdf4d  inc ecx
    X86_AT(c, 0xcdf4du);
    { uint32_t v = c.r[1]; c.r[1] = x86_inc(c, v, 4); }
    // 0cdf4e  jmp 0xcdf36
    X86_AT(c, 0xcdf4eu);
    X86_POLL(c, 0xcdf36u); goto L_cdf36;
L_cdf50:
    X86_TICK(c, 9);
    // 0cdf50  sub eax, eax
    X86_AT(c, 0xcdf50u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0cdf52  jmp 0xcdf59
    X86_AT(c, 0xcdf52u);
    goto L_cdf59;
L_cdf54:
    X86_TICK(c, 2);
    // 0cdf54  mov eax, 0xffffffff
    X86_AT(c, 0xcdf54u);
    c.r[0] = 0xFFFFFFFFu;
L_cdf59:
    X86_TICK(c, 24);
    // 0cdf59  pop edi
    X86_AT(c, 0xcdf59u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0cdf5a  pop esi
    X86_AT(c, 0xcdf5au);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0cdf5b  leave 
    X86_AT(c, 0xcdf5bu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0cdf5c  ret 
    X86_AT(c, 0xcdf5cu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xcdf00u, "ran off the end of a function");
}
void f_000cdf60(X86Cpu& c) {
    X86_TICK(c, 9);
    // 0cdf60  push 7
    X86_AT(c, 0xcdf60u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cdf62  call 0xbb6b0
    X86_AT(c, 0xcdf62u);
    push32(c, 0xcdf67u); x86_call_known(c, 0xbb6b0u, f_000bb6b0); X86_RET(c, 0xcdf67u);
    X86_TICK(c, 11);
    // 0cdf67  push 0x8f10
    X86_AT(c, 0xcdf67u);
    { uint32_t v = 0x8F10u; push32(c, v); }
    // 0cdf6c  push 7
    X86_AT(c, 0xcdf6cu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cdf6e  call 0xba428
    X86_AT(c, 0xcdf6eu);
    push32(c, 0xcdf73u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xcdf73u);
    X86_TICK(c, 9);
    // 0cdf73  push 7
    X86_AT(c, 0xcdf73u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cdf75  call 0xbbb5c
    X86_AT(c, 0xcdf75u);
    push32(c, 0xcdf7au); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xcdf7au);
    X86_TICK(c, 9);
    // 0cdf7a  push 1
    X86_AT(c, 0xcdf7au);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0cdf7c  call 0xcde08
    X86_AT(c, 0xcdf7cu);
    push32(c, 0xcdf81u); x86_call_known(c, 0xcde08u, f_000cde08); X86_RET(c, 0xcdf81u);
    X86_TICK(c, 12);
    // 0cdf81  add esp, 0x14
    X86_AT(c, 0xcdf81u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x14u, 0, 4); }
    // 0cdf84  ret 
    X86_AT(c, 0xcdf84u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xcdf60u, "ran off the end of a function");
}
void f_000cdf88(X86Cpu& c) {
    X86_TICK(c, 9);
    // 0cdf88  push 7
    X86_AT(c, 0xcdf88u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cdf8a  call 0xbb6b0
    X86_AT(c, 0xcdf8au);
    push32(c, 0xcdf8fu); x86_call_known(c, 0xbb6b0u, f_000bb6b0); X86_RET(c, 0xcdf8fu);
    X86_TICK(c, 11);
    // 0cdf8f  push 0x8f2c
    X86_AT(c, 0xcdf8fu);
    { uint32_t v = 0x8F2Cu; push32(c, v); }
    // 0cdf94  push 7
    X86_AT(c, 0xcdf94u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cdf96  call 0xba428
    X86_AT(c, 0xcdf96u);
    push32(c, 0xcdf9bu); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xcdf9bu);
    X86_TICK(c, 9);
    // 0cdf9b  push 7
    X86_AT(c, 0xcdf9bu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cdf9d  call 0xbbb5c
    X86_AT(c, 0xcdf9du);
    push32(c, 0xcdfa2u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xcdfa2u);
    X86_TICK(c, 9);
    // 0cdfa2  push 3
    X86_AT(c, 0xcdfa2u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0cdfa4  call 0xcde08
    X86_AT(c, 0xcdfa4u);
    push32(c, 0xcdfa9u); x86_call_known(c, 0xcde08u, f_000cde08); X86_RET(c, 0xcdfa9u);
    X86_TICK(c, 12);
    // 0cdfa9  add esp, 0x14
    X86_AT(c, 0xcdfa9u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x14u, 0, 4); }
    // 0cdfac  ret 
    X86_AT(c, 0xcdfacu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xcdf88u, "ran off the end of a function");
}
void f_000cdfb0(X86Cpu& c) {
    X86_TICK(c, 9);
    // 0cdfb0  push 7
    X86_AT(c, 0xcdfb0u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cdfb2  call 0xbb6b0
    X86_AT(c, 0xcdfb2u);
    push32(c, 0xcdfb7u); x86_call_known(c, 0xbb6b0u, f_000bb6b0); X86_RET(c, 0xcdfb7u);
    X86_TICK(c, 11);
    // 0cdfb7  push 0x8f48
    X86_AT(c, 0xcdfb7u);
    { uint32_t v = 0x8F48u; push32(c, v); }
    // 0cdfbc  push 7
    X86_AT(c, 0xcdfbcu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cdfbe  call 0xba428
    X86_AT(c, 0xcdfbeu);
    push32(c, 0xcdfc3u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xcdfc3u);
    X86_TICK(c, 9);
    // 0cdfc3  push 7
    X86_AT(c, 0xcdfc3u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cdfc5  call 0xbbb5c
    X86_AT(c, 0xcdfc5u);
    push32(c, 0xcdfcau); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xcdfcau);
    X86_TICK(c, 9);
    // 0cdfca  push 4
    X86_AT(c, 0xcdfcau);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0cdfcc  call 0xcde08
    X86_AT(c, 0xcdfccu);
    push32(c, 0xcdfd1u); x86_call_known(c, 0xcde08u, f_000cde08); X86_RET(c, 0xcdfd1u);
    X86_TICK(c, 12);
    // 0cdfd1  add esp, 0x14
    X86_AT(c, 0xcdfd1u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x14u, 0, 4); }
    // 0cdfd4  ret 
    X86_AT(c, 0xcdfd4u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xcdfb0u, "ran off the end of a function");
}
void f_000cdfd8(X86Cpu& c) {
    X86_TICK(c, 9);
    // 0cdfd8  push 7
    X86_AT(c, 0xcdfd8u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cdfda  call 0xbb6b0
    X86_AT(c, 0xcdfdau);
    push32(c, 0xcdfdfu); x86_call_known(c, 0xbb6b0u, f_000bb6b0); X86_RET(c, 0xcdfdfu);
    X86_TICK(c, 11);
    // 0cdfdf  push 0x8f60
    X86_AT(c, 0xcdfdfu);
    { uint32_t v = 0x8F60u; push32(c, v); }
    // 0cdfe4  push 7
    X86_AT(c, 0xcdfe4u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cdfe6  call 0xba428
    X86_AT(c, 0xcdfe6u);
    push32(c, 0xcdfebu); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xcdfebu);
    X86_TICK(c, 9);
    // 0cdfeb  push 7
    X86_AT(c, 0xcdfebu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cdfed  call 0xbbb5c
    X86_AT(c, 0xcdfedu);
    push32(c, 0xcdff2u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xcdff2u);
    X86_TICK(c, 9);
    // 0cdff2  push 2
    X86_AT(c, 0xcdff2u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0cdff4  call 0xcde08
    X86_AT(c, 0xcdff4u);
    push32(c, 0xcdff9u); x86_call_known(c, 0xcde08u, f_000cde08); X86_RET(c, 0xcdff9u);
    X86_TICK(c, 12);
    // 0cdff9  add esp, 0x14
    X86_AT(c, 0xcdff9u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x14u, 0, 4); }
    // 0cdffc  ret 
    X86_AT(c, 0xcdffcu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xcdfd8u, "ran off the end of a function");
}
void f_000ce000(X86Cpu& c) {
    X86_TICK(c, 9);
    // 0ce000  push 7
    X86_AT(c, 0xce000u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0ce002  call 0xbb6b0
    X86_AT(c, 0xce002u);
    push32(c, 0xce007u); x86_call_known(c, 0xbb6b0u, f_000bb6b0); X86_RET(c, 0xce007u);
    X86_TICK(c, 7);
    // 0ce007  call 0xb60cc
    X86_AT(c, 0xce007u);
    push32(c, 0xce00cu); x86_call_known(c, 0xb60ccu, f_000b60cc); X86_RET(c, 0xce00cu);
    X86_TICK(c, 12);
    // 0ce00c  add esp, 4
    X86_AT(c, 0xce00cu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0ce00f  xchg edx, eax
    X86_AT(c, 0xce00fu);
    { uint32_t t = c.r[2]; c.r[2] = c.r[0]; c.r[0] = t; }
    // 0ce010  cmp edx, 3
    X86_AT(c, 0xce010u);
    (void)x86_sub(c, c.r[2], 0x3u, 0, 4);
    // 0ce013  ja 0xce0f0
    X86_AT(c, 0xce013u);
    if (x86_cc(c, 7)) { goto L_ce0f0; }
    X86_TICK(c, 7);
    // 0ce019  jmp dword ptr cs:[edx*4 + 0xce021]
    X86_AT(c, 0xce019u);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xCE021u)));
      switch (t) {
      case 0xce031u: goto L_ce031;
      case 0xce061u: goto L_ce061;
      case 0xce08eu: goto L_ce08e;
      case 0xce0bbu: goto L_ce0bb;
      default: x86_jump(c, t); return; } }
L_ce031:
    X86_TICK(c, 11);
    // 0ce031  push 0x8f78
    X86_AT(c, 0xce031u);
    { uint32_t v = 0x8F78u; push32(c, v); }
    // 0ce036  push 7
    X86_AT(c, 0xce036u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0ce038  call 0xba428
    X86_AT(c, 0xce038u);
    push32(c, 0xce03du); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xce03du);
    X86_TICK(c, 9);
    // 0ce03d  push 7
    X86_AT(c, 0xce03du);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0ce03f  call 0xbbb5c
    X86_AT(c, 0xce03fu);
    push32(c, 0xce044u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xce044u);
    X86_TICK(c, 11);
    // 0ce044  push 0x8fa4
    X86_AT(c, 0xce044u);
    { uint32_t v = 0x8FA4u; push32(c, v); }
    // 0ce049  push 7
    X86_AT(c, 0xce049u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0ce04b  call 0xbbba4
    X86_AT(c, 0xce04bu);
    push32(c, 0xce050u); x86_call_known(c, 0xbbba4u, f_000bbba4); X86_RET(c, 0xce050u);
    X86_TICK(c, 9);
    // 0ce050  push 7
    X86_AT(c, 0xce050u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0ce052  call 0xbbb5c
    X86_AT(c, 0xce052u);
    push32(c, 0xce057u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xce057u);
    X86_TICK(c, 9);
    // 0ce057  push 0x8fb4
    X86_AT(c, 0xce057u);
    { uint32_t v = 0x8FB4u; push32(c, v); }
    // 0ce05c  jmp 0xce0e6
    X86_AT(c, 0xce05cu);
    goto L_ce0e6;
L_ce061:
    X86_TICK(c, 11);
    // 0ce061  push 0x8fc4
    X86_AT(c, 0xce061u);
    { uint32_t v = 0x8FC4u; push32(c, v); }
    // 0ce066  push 7
    X86_AT(c, 0xce066u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0ce068  call 0xba428
    X86_AT(c, 0xce068u);
    push32(c, 0xce06du); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xce06du);
    X86_TICK(c, 9);
    // 0ce06d  push 7
    X86_AT(c, 0xce06du);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0ce06f  call 0xbbb5c
    X86_AT(c, 0xce06fu);
    push32(c, 0xce074u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xce074u);
    X86_TICK(c, 11);
    // 0ce074  push 0x8ff0
    X86_AT(c, 0xce074u);
    { uint32_t v = 0x8FF0u; push32(c, v); }
    // 0ce079  push 7
    X86_AT(c, 0xce079u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0ce07b  call 0xbbba4
    X86_AT(c, 0xce07bu);
    push32(c, 0xce080u); x86_call_known(c, 0xbbba4u, f_000bbba4); X86_RET(c, 0xce080u);
    X86_TICK(c, 9);
    // 0ce080  push 7
    X86_AT(c, 0xce080u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0ce082  call 0xbbb5c
    X86_AT(c, 0xce082u);
    push32(c, 0xce087u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xce087u);
    X86_TICK(c, 9);
    // 0ce087  push 0x9004
    X86_AT(c, 0xce087u);
    { uint32_t v = 0x9004u; push32(c, v); }
    // 0ce08c  jmp 0xce0e6
    X86_AT(c, 0xce08cu);
    goto L_ce0e6;
L_ce08e:
    X86_TICK(c, 11);
    // 0ce08e  push 0x9014
    X86_AT(c, 0xce08eu);
    { uint32_t v = 0x9014u; push32(c, v); }
    // 0ce093  push 7
    X86_AT(c, 0xce093u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0ce095  call 0xba428
    X86_AT(c, 0xce095u);
    push32(c, 0xce09au); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xce09au);
    X86_TICK(c, 9);
    // 0ce09a  push 7
    X86_AT(c, 0xce09au);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0ce09c  call 0xbbb5c
    X86_AT(c, 0xce09cu);
    push32(c, 0xce0a1u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xce0a1u);
    X86_TICK(c, 11);
    // 0ce0a1  push 0x9040
    X86_AT(c, 0xce0a1u);
    { uint32_t v = 0x9040u; push32(c, v); }
    // 0ce0a6  push 7
    X86_AT(c, 0xce0a6u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0ce0a8  call 0xbbba4
    X86_AT(c, 0xce0a8u);
    push32(c, 0xce0adu); x86_call_known(c, 0xbbba4u, f_000bbba4); X86_RET(c, 0xce0adu);
    X86_TICK(c, 9);
    // 0ce0ad  push 7
    X86_AT(c, 0xce0adu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0ce0af  call 0xbbb5c
    X86_AT(c, 0xce0afu);
    push32(c, 0xce0b4u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xce0b4u);
    X86_TICK(c, 9);
    // 0ce0b4  push 0x9050
    X86_AT(c, 0xce0b4u);
    { uint32_t v = 0x9050u; push32(c, v); }
    // 0ce0b9  jmp 0xce0e6
    X86_AT(c, 0xce0b9u);
    goto L_ce0e6;
L_ce0bb:
    X86_TICK(c, 11);
    // 0ce0bb  push 0x9064
    X86_AT(c, 0xce0bbu);
    { uint32_t v = 0x9064u; push32(c, v); }
    // 0ce0c0  push 7
    X86_AT(c, 0xce0c0u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0ce0c2  call 0xba428
    X86_AT(c, 0xce0c2u);
    push32(c, 0xce0c7u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xce0c7u);
    X86_TICK(c, 9);
    // 0ce0c7  push 7
    X86_AT(c, 0xce0c7u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0ce0c9  call 0xbbb5c
    X86_AT(c, 0xce0c9u);
    push32(c, 0xce0ceu); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xce0ceu);
    X86_TICK(c, 11);
    // 0ce0ce  push 0x9090
    X86_AT(c, 0xce0ceu);
    { uint32_t v = 0x9090u; push32(c, v); }
    // 0ce0d3  push 7
    X86_AT(c, 0xce0d3u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0ce0d5  call 0xbbba4
    X86_AT(c, 0xce0d5u);
    push32(c, 0xce0dau); x86_call_known(c, 0xbbba4u, f_000bbba4); X86_RET(c, 0xce0dau);
    X86_TICK(c, 9);
    // 0ce0da  push 7
    X86_AT(c, 0xce0dau);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0ce0dc  call 0xbbb5c
    X86_AT(c, 0xce0dcu);
    push32(c, 0xce0e1u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xce0e1u);
    X86_TICK(c, 2);
    // 0ce0e1  push 0x90a4
    X86_AT(c, 0xce0e1u);
    { uint32_t v = 0x90A4u; push32(c, v); }
L_ce0e6:
    X86_TICK(c, 9);
    // 0ce0e6  push 7
    X86_AT(c, 0xce0e6u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0ce0e8  call 0xbbba4
    X86_AT(c, 0xce0e8u);
    push32(c, 0xce0edu); x86_call_known(c, 0xbbba4u, f_000bbba4); X86_RET(c, 0xce0edu);
    X86_TICK(c, 2);
    // 0ce0ed  add esp, 0x20
    X86_AT(c, 0xce0edu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x20u, 0, 4); }
L_ce0f0:
    X86_TICK(c, 9);
    // 0ce0f0  push 7
    X86_AT(c, 0xce0f0u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0ce0f2  call 0xbbb5c
    X86_AT(c, 0xce0f2u);
    push32(c, 0xce0f7u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xce0f7u);
    X86_TICK(c, 12);
    // 0ce0f7  add esp, 4
    X86_AT(c, 0xce0f7u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0ce0fa  ret 
    X86_AT(c, 0xce0fau);
    c.eip = pop32(c); return;
    x86_fault(c, 0xce000u, "ran off the end of a function");
}
void f_000ce0fc(X86Cpu& c) {
    X86_TICK(c, 9);
    // 0ce0fc  push 7
    X86_AT(c, 0xce0fcu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0ce0fe  call 0xbb6b0
    X86_AT(c, 0xce0feu);
    push32(c, 0xce103u); x86_call_known(c, 0xbb6b0u, f_000bb6b0); X86_RET(c, 0xce103u);
    X86_TICK(c, 11);
    // 0ce103  push 0x90b8
    X86_AT(c, 0xce103u);
    { uint32_t v = 0x90B8u; push32(c, v); }
    // 0ce108  push 7
    X86_AT(c, 0xce108u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0ce10a  call 0xba428
    X86_AT(c, 0xce10au);
    push32(c, 0xce10fu); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xce10fu);
    X86_TICK(c, 9);
    // 0ce10f  push 7
    X86_AT(c, 0xce10fu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0ce111  call 0xbbb5c
    X86_AT(c, 0xce111u);
    push32(c, 0xce116u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xce116u);
    X86_TICK(c, 12);
    // 0ce116  push dword ptr [0xa4930]
    X86_AT(c, 0xce116u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xA4930u))); push32(c, v); }
    // 0ce11c  call 0xccad0
    X86_AT(c, 0xce11cu);
    push32(c, 0xce121u); x86_call_known(c, 0xccad0u, f_000ccad0); X86_RET(c, 0xce121u);
    X86_TICK(c, 12);
    // 0ce121  add esp, 0x14
    X86_AT(c, 0xce121u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x14u, 0, 4); }
    // 0ce124  ret 
    X86_AT(c, 0xce124u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xce0fcu, "ran off the end of a function");
}
void f_000ce128(X86Cpu& c) {
    X86_TICK(c, 9);
    // 0ce128  push 7
    X86_AT(c, 0xce128u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0ce12a  call 0xbb6b0
    X86_AT(c, 0xce12au);
    push32(c, 0xce12fu); x86_call_known(c, 0xbb6b0u, f_000bb6b0); X86_RET(c, 0xce12fu);
    X86_TICK(c, 11);
    // 0ce12f  push 0x90e8
    X86_AT(c, 0xce12fu);
    { uint32_t v = 0x90E8u; push32(c, v); }
    // 0ce134  push 7
    X86_AT(c, 0xce134u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0ce136  call 0xba428
    X86_AT(c, 0xce136u);
    push32(c, 0xce13bu); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xce13bu);
    X86_TICK(c, 9);
    // 0ce13b  push 7
    X86_AT(c, 0xce13bu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0ce13d  call 0xbbb5c
    X86_AT(c, 0xce13du);
    push32(c, 0xce142u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xce142u);
    X86_TICK(c, 12);
    // 0ce142  push dword ptr [0xa4930]
    X86_AT(c, 0xce142u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xA4930u))); push32(c, v); }
    // 0ce148  call 0xcccac
    X86_AT(c, 0xce148u);
    push32(c, 0xce14du); x86_call_known(c, 0xcccacu, f_000cccac); X86_RET(c, 0xce14du);
    X86_TICK(c, 12);
    // 0ce14d  add esp, 0x14
    X86_AT(c, 0xce14du);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x14u, 0, 4); }
    // 0ce150  ret 
    X86_AT(c, 0xce150u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xce128u, "ran off the end of a function");
}
void f_000ce154(X86Cpu& c) {
    X86_TICK(c, 9);
    // 0ce154  push 7
    X86_AT(c, 0xce154u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0ce156  call 0xbb6b0
    X86_AT(c, 0xce156u);
    push32(c, 0xce15bu); x86_call_known(c, 0xbb6b0u, f_000bb6b0); X86_RET(c, 0xce15bu);
    X86_TICK(c, 11);
    // 0ce15b  push 0x911c
    X86_AT(c, 0xce15bu);
    { uint32_t v = 0x911Cu; push32(c, v); }
    // 0ce160  push 7
    X86_AT(c, 0xce160u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0ce162  call 0xba428
    X86_AT(c, 0xce162u);
    push32(c, 0xce167u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xce167u);
    X86_TICK(c, 9);
    // 0ce167  push 7
    X86_AT(c, 0xce167u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0ce169  call 0xbbb5c
    X86_AT(c, 0xce169u);
    push32(c, 0xce16eu); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xce16eu);
    X86_TICK(c, 7);
    // 0ce16e  call 0xbd5d0
    X86_AT(c, 0xce16eu);
    push32(c, 0xce173u); x86_call_known(c, 0xbd5d0u, f_000bd5d0); X86_RET(c, 0xce173u);
    X86_TICK(c, 27);
    // 0ce173  push 0xa
    X86_AT(c, 0xce173u);
    { uint32_t v = 0xAu; push32(c, v); }
    // 0ce175  push 0xf
    X86_AT(c, 0xce175u);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0ce177  push 0xf
    X86_AT(c, 0xce177u);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0ce179  push 0x12
    X86_AT(c, 0xce179u);
    { uint32_t v = 0x12u; push32(c, v); }
    // 0ce17b  push 0x26
    X86_AT(c, 0xce17bu);
    { uint32_t v = 0x26u; push32(c, v); }
    // 0ce17d  push 0x140
    X86_AT(c, 0xce17du);
    { uint32_t v = 0x140u; push32(c, v); }
    // 0ce182  push 0x140
    X86_AT(c, 0xce182u);
    { uint32_t v = 0x140u; push32(c, v); }
    // 0ce187  push 0x3f
    X86_AT(c, 0xce187u);
    { uint32_t v = 0x3Fu; push32(c, v); }
    // 0ce189  push 0x1a
    X86_AT(c, 0xce189u);
    { uint32_t v = 0x1Au; push32(c, v); }
    // 0ce18b  push 6
    X86_AT(c, 0xce18bu);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0ce18d  call 0xbb5cc
    X86_AT(c, 0xce18du);
    push32(c, 0xce192u); x86_call_known(c, 0xbb5ccu, f_000bb5cc); X86_RET(c, 0xce192u);
    X86_TICK(c, 9);
    // 0ce192  push 6
    X86_AT(c, 0xce192u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0ce194  call 0xbb6b0
    X86_AT(c, 0xce194u);
    push32(c, 0xce199u); x86_call_known(c, 0xbb6b0u, f_000bb6b0); X86_RET(c, 0xce199u);
    X86_TICK(c, 11);
    // 0ce199  add esp, 0x3c
    X86_AT(c, 0xce199u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x3Cu, 0, 4); }
    // 0ce19c  push 6
    X86_AT(c, 0xce19cu);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0ce19e  call 0xbb710
    X86_AT(c, 0xce19eu);
    push32(c, 0xce1a3u); x86_call_known(c, 0xbb710u, f_000bb710); X86_RET(c, 0xce1a3u);
    X86_TICK(c, 13);
    // 0ce1a3  push 0
    X86_AT(c, 0xce1a3u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0ce1a5  push 4
    X86_AT(c, 0xce1a5u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ce1a7  push 6
    X86_AT(c, 0xce1a7u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0ce1a9  call 0xbc174
    X86_AT(c, 0xce1a9u);
    push32(c, 0xce1aeu); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xce1aeu);
    X86_TICK(c, 11);
    // 0ce1ae  push 0xd
    X86_AT(c, 0xce1aeu);
    { uint32_t v = 0xDu; push32(c, v); }
    // 0ce1b0  push 6
    X86_AT(c, 0xce1b0u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0ce1b2  call 0xbc3ec
    X86_AT(c, 0xce1b2u);
    push32(c, 0xce1b7u); x86_call_known(c, 0xbc3ecu, f_000bc3ec); X86_RET(c, 0xce1b7u);
    X86_TICK(c, 11);
    // 0ce1b7  push 0x9138
    X86_AT(c, 0xce1b7u);
    { uint32_t v = 0x9138u; push32(c, v); }
    // 0ce1bc  push 6
    X86_AT(c, 0xce1bcu);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0ce1be  call 0xbbba4
    X86_AT(c, 0xce1beu);
    push32(c, 0xce1c3u); x86_call_known(c, 0xbbba4u, f_000bbba4); X86_RET(c, 0xce1c3u);
    X86_TICK(c, 11);
    // 0ce1c3  push 0xb
    X86_AT(c, 0xce1c3u);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0ce1c5  push 6
    X86_AT(c, 0xce1c5u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0ce1c7  call 0xbc3ec
    X86_AT(c, 0xce1c7u);
    push32(c, 0xce1ccu); x86_call_known(c, 0xbc3ecu, f_000bc3ec); X86_RET(c, 0xce1ccu);
    X86_TICK(c, 11);
    // 0ce1cc  push 0x9140
    X86_AT(c, 0xce1ccu);
    { uint32_t v = 0x9140u; push32(c, v); }
    // 0ce1d1  push 6
    X86_AT(c, 0xce1d1u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0ce1d3  call 0xba428
    X86_AT(c, 0xce1d3u);
    push32(c, 0xce1d8u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xce1d8u);
    X86_TICK(c, 11);
    // 0ce1d8  push 0xd
    X86_AT(c, 0xce1d8u);
    { uint32_t v = 0xDu; push32(c, v); }
    // 0ce1da  push 6
    X86_AT(c, 0xce1dau);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0ce1dc  call 0xbc3ec
    X86_AT(c, 0xce1dcu);
    push32(c, 0xce1e1u); x86_call_known(c, 0xbc3ecu, f_000bc3ec); X86_RET(c, 0xce1e1u);
    X86_TICK(c, 11);
    // 0ce1e1  push 0x916c
    X86_AT(c, 0xce1e1u);
    { uint32_t v = 0x916Cu; push32(c, v); }
    // 0ce1e6  push 6
    X86_AT(c, 0xce1e6u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0ce1e8  call 0xbbba4
    X86_AT(c, 0xce1e8u);
    push32(c, 0xce1edu); x86_call_known(c, 0xbbba4u, f_000bbba4); X86_RET(c, 0xce1edu);
    X86_TICK(c, 13);
    // 0ce1ed  add esp, 0x40
    X86_AT(c, 0xce1edu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x40u, 0, 4); }
    // 0ce1f0  push 0xf
    X86_AT(c, 0xce1f0u);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0ce1f2  push 6
    X86_AT(c, 0xce1f2u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0ce1f4  call 0xbc3ec
    X86_AT(c, 0xce1f4u);
    push32(c, 0xce1f9u); x86_call_known(c, 0xbc3ecu, f_000bc3ec); X86_RET(c, 0xce1f9u);
    X86_TICK(c, 9);
    // 0ce1f9  push 6
    X86_AT(c, 0xce1f9u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0ce1fb  call 0xbb6b0
    X86_AT(c, 0xce1fbu);
    push32(c, 0xce200u); x86_call_known(c, 0xbb6b0u, f_000bb6b0); X86_RET(c, 0xce200u);
    X86_TICK(c, 14);
    // 0ce200  add esp, 0xc
    X86_AT(c, 0xce200u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0ce203  push dword ptr [0xa4930]
    X86_AT(c, 0xce203u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xA4930u))); push32(c, v); }
    // 0ce209  call 0xc9d1c
    X86_AT(c, 0xce209u);
    push32(c, 0xce20eu); x86_call_known(c, 0xc9d1cu, f_000c9d1c); X86_RET(c, 0xce20eu);
    X86_TICK(c, 11);
    // 0ce20e  push 0
    X86_AT(c, 0xce20eu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0ce210  push 6
    X86_AT(c, 0xce210u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0ce212  call 0xbba64
    X86_AT(c, 0xce212u);
    push32(c, 0xce217u); x86_call_known(c, 0xbba64u, f_000bba64); X86_RET(c, 0xce217u);
    X86_TICK(c, 7);
    // 0ce217  call 0xbd5d0
    X86_AT(c, 0xce217u);
    push32(c, 0xce21cu); x86_call_known(c, 0xbd5d0u, f_000bd5d0); X86_RET(c, 0xce21cu);
    X86_TICK(c, 12);
    // 0ce21c  add esp, 0xc
    X86_AT(c, 0xce21cu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0ce21f  ret 
    X86_AT(c, 0xce21fu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xce154u, "ran off the end of a function");
}
void f_000ce220(X86Cpu& c) {
    X86_TICK(c, 9);
    // 0ce220  push 7
    X86_AT(c, 0xce220u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0ce222  call 0xbb6b0
    X86_AT(c, 0xce222u);
    push32(c, 0xce227u); x86_call_known(c, 0xbb6b0u, f_000bb6b0); X86_RET(c, 0xce227u);
    X86_TICK(c, 11);
    // 0ce227  push 0x9174
    X86_AT(c, 0xce227u);
    { uint32_t v = 0x9174u; push32(c, v); }
    // 0ce22c  push 7
    X86_AT(c, 0xce22cu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0ce22e  call 0xba428
    X86_AT(c, 0xce22eu);
    push32(c, 0xce233u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xce233u);
    X86_TICK(c, 9);
    // 0ce233  push 7
    X86_AT(c, 0xce233u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0ce235  call 0xbbb5c
    X86_AT(c, 0xce235u);
    push32(c, 0xce23au); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xce23au);
    X86_TICK(c, 12);
    // 0ce23a  push dword ptr [0xa4930]
    X86_AT(c, 0xce23au);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xA4930u))); push32(c, v); }
    // 0ce240  call 0xc7a3c
    X86_AT(c, 0xce240u);
    push32(c, 0xce245u); x86_call_known(c, 0xc7a3cu, f_000c7a3c); X86_RET(c, 0xce245u);
    X86_TICK(c, 12);
    // 0ce245  add esp, 0x14
    X86_AT(c, 0xce245u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x14u, 0, 4); }
    // 0ce248  ret 
    X86_AT(c, 0xce248u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xce220u, "ran off the end of a function");
}
void f_000ce24c(X86Cpu& c) {
    X86_TICK(c, 9);
    // 0ce24c  push 7
    X86_AT(c, 0xce24cu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0ce24e  call 0xbb6b0
    X86_AT(c, 0xce24eu);
    push32(c, 0xce253u); x86_call_known(c, 0xbb6b0u, f_000bb6b0); X86_RET(c, 0xce253u);
    X86_TICK(c, 11);
    // 0ce253  push 0x919c
    X86_AT(c, 0xce253u);
    { uint32_t v = 0x919Cu; push32(c, v); }
    // 0ce258  push 7
    X86_AT(c, 0xce258u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0ce25a  call 0xba428
    X86_AT(c, 0xce25au);
    push32(c, 0xce25fu); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xce25fu);
    X86_TICK(c, 9);
    // 0ce25f  push 7
    X86_AT(c, 0xce25fu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0ce261  call 0xbbb5c
    X86_AT(c, 0xce261u);
    push32(c, 0xce266u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xce266u);
    X86_TICK(c, 24);
    // 0ce266  mov eax, dword ptr [0xa4930]
    X86_AT(c, 0xce266u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xA4930u)));
    // 0ce26b  lea eax, [eax + eax*2]
    X86_AT(c, 0xce26bu);
    c.r[0] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0ce26e  lea edx, [eax*8]
    X86_AT(c, 0xce26eu);
    c.r[2] = (uint32_t)(c.r[0] * 8);
    // 0ce275  lea edx, [eax + edx*8]
    X86_AT(c, 0xce275u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 8);
    // 0ce278  add esp, 0x10
    X86_AT(c, 0xce278u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0ce27b  cmp dword ptr [edx + 0xa4af5], 1
    X86_AT(c, 0xce27bu);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4AF5u))), 0x1u, 0, 4);
    // 0ce282  jge 0xce2a3
    X86_AT(c, 0xce282u);
    if (x86_cc(c, 13)) { goto L_ce2a3; }
    X86_TICK(c, 9);
    // 0ce284  push 0
    X86_AT(c, 0xce284u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0ce286  call 0xb607c
    X86_AT(c, 0xce286u);
    push32(c, 0xce28bu); x86_call_known(c, 0xb607cu, f_000b607c); X86_RET(c, 0xce28bu);
    X86_TICK(c, 11);
    // 0ce28b  push 0x91cc
    X86_AT(c, 0xce28bu);
    { uint32_t v = 0x91CCu; push32(c, v); }
    // 0ce290  push 7
    X86_AT(c, 0xce290u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0ce292  call 0xba428
    X86_AT(c, 0xce292u);
    push32(c, 0xce297u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xce297u);
    X86_TICK(c, 9);
    // 0ce297  push 7
    X86_AT(c, 0xce297u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0ce299  call 0xbbb5c
    X86_AT(c, 0xce299u);
    push32(c, 0xce29eu); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xce29eu);
    X86_TICK(c, 9);
    // 0ce29e  add esp, 0x10
    X86_AT(c, 0xce29eu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0ce2a1  jmp 0xce2c5
    X86_AT(c, 0xce2a1u);
    goto L_ce2c5;
L_ce2a3:
    X86_TICK(c, 18);
    // 0ce2a3  mov dword ptr [0xabf7c], 0xa
    X86_AT(c, 0xce2a3u);
    wr32((c.sbase[3] + (uint32_t)(0xABF7Cu)), 0xAu);
    // 0ce2ad  mov eax, dword ptr [0xa4930]
    X86_AT(c, 0xce2adu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xA4930u)));
    // 0ce2b2  lea eax, [eax + eax*2]
    X86_AT(c, 0xce2b2u);
    c.r[0] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0ce2b5  lea edx, [eax*8]
    X86_AT(c, 0xce2b5u);
    c.r[2] = (uint32_t)(c.r[0] * 8);
    // 0ce2bc  lea edx, [eax + edx*8]
    X86_AT(c, 0xce2bcu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 8);
    // 0ce2bf  dec dword ptr [edx + 0xa4af5]
    X86_AT(c, 0xce2bfu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[2] + 0xA4AF5u)); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
L_ce2c5:
    X86_TICK(c, 10);
    // 0ce2c5  ret 
    X86_AT(c, 0xce2c5u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xce24cu, "ran off the end of a function");
}
void f_000ce2c8(X86Cpu& c) {
    X86_TICK(c, 9);
    // 0ce2c8  push 7
    X86_AT(c, 0xce2c8u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0ce2ca  call 0xbb6b0
    X86_AT(c, 0xce2cau);
    push32(c, 0xce2cfu); x86_call_known(c, 0xbb6b0u, f_000bb6b0); X86_RET(c, 0xce2cfu);
    X86_TICK(c, 11);
    // 0ce2cf  push 0x9214
    X86_AT(c, 0xce2cfu);
    { uint32_t v = 0x9214u; push32(c, v); }
    // 0ce2d4  push 7
    X86_AT(c, 0xce2d4u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0ce2d6  call 0xba428
    X86_AT(c, 0xce2d6u);
    push32(c, 0xce2dbu); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xce2dbu);
    X86_TICK(c, 9);
    // 0ce2db  push 7
    X86_AT(c, 0xce2dbu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0ce2dd  call 0xbbb5c
    X86_AT(c, 0xce2ddu);
    push32(c, 0xce2e2u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xce2e2u);
    X86_TICK(c, 12);
    // 0ce2e2  add esp, 0x10
    X86_AT(c, 0xce2e2u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0ce2e5  ret 
    X86_AT(c, 0xce2e5u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xce2c8u, "ran off the end of a function");
}
void f_000ce2e8(X86Cpu& c) {
    X86_TICK(c, 9);
    // 0ce2e8  push 3
    X86_AT(c, 0xce2e8u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0ce2ea  call 0xb607c
    X86_AT(c, 0xce2eau);
    push32(c, 0xce2efu); x86_call_known(c, 0xb607cu, f_000b607c); X86_RET(c, 0xce2efu);
    X86_TICK(c, 9);
    // 0ce2ef  push 2
    X86_AT(c, 0xce2efu);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0ce2f1  call 0xbebbc
    X86_AT(c, 0xce2f1u);
    push32(c, 0xce2f6u); x86_call_known(c, 0xbebbcu, f_000bebbc); X86_RET(c, 0xce2f6u);
    X86_TICK(c, 9);
    // 0ce2f6  push 7
    X86_AT(c, 0xce2f6u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0ce2f8  call 0xbb6b0
    X86_AT(c, 0xce2f8u);
    push32(c, 0xce2fdu); x86_call_known(c, 0xbb6b0u, f_000bb6b0); X86_RET(c, 0xce2fdu);
    X86_TICK(c, 11);
    // 0ce2fd  push 0x922c
    X86_AT(c, 0xce2fdu);
    { uint32_t v = 0x922Cu; push32(c, v); }
    // 0ce302  push 7
    X86_AT(c, 0xce302u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0ce304  call 0xba428
    X86_AT(c, 0xce304u);
    push32(c, 0xce309u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xce309u);
    X86_TICK(c, 9);
    // 0ce309  push 7
    X86_AT(c, 0xce309u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0ce30b  call 0xbbb5c
    X86_AT(c, 0xce30bu);
    push32(c, 0xce310u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xce310u);
    X86_TICK(c, 12);
    // 0ce310  add esp, 0x18
    X86_AT(c, 0xce310u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x18u, 0, 4); }
    // 0ce313  ret 
    X86_AT(c, 0xce313u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xce2e8u, "ran off the end of a function");
}
void f_000ce314(X86Cpu& c) {
    X86_TICK(c, 40);
    // 0ce314  push ebp
    X86_AT(c, 0xce314u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0ce315  mov ebp, esp
    X86_AT(c, 0xce315u);
    c.r[5] = c.r[4];
    // 0ce317  sub esp, 0xc
    X86_AT(c, 0xce317u);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, 0xCu, 0, 4); }
    // 0ce31a  push ebx
    X86_AT(c, 0xce31au);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0ce31b  push esi
    X86_AT(c, 0xce31bu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0ce31c  push edi
    X86_AT(c, 0xce31cu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0ce31d  mov eax, dword ptr [0xa4930]
    X86_AT(c, 0xce31du);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xA4930u)));
    // 0ce322  lea eax, [eax + eax*2]
    X86_AT(c, 0xce322u);
    c.r[0] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0ce325  lea edx, [eax*8]
    X86_AT(c, 0xce325u);
    c.r[2] = (uint32_t)(c.r[0] * 8);
    // 0ce32c  lea edx, [eax + edx*8]
    X86_AT(c, 0xce32cu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 8);
    // 0ce32f  mov al, byte ptr [edx + 0xa4b1a]
    X86_AT(c, 0xce32fu);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4B1Au))));
    // 0ce335  mov byte ptr [ebp - 1], al
    X86_AT(c, 0xce335u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFFu)), g8(c, 0));
    // 0ce338  xchg ebx, eax
    X86_AT(c, 0xce338u);
    { uint32_t t = c.r[3]; c.r[3] = c.r[0]; c.r[0] = t; }
    // 0ce339  push 7
    X86_AT(c, 0xce339u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0ce33b  call 0xbb6b0
    X86_AT(c, 0xce33bu);
    push32(c, 0xce340u); x86_call_known(c, 0xbb6b0u, f_000bb6b0); X86_RET(c, 0xce340u);
    X86_TICK(c, 11);
    // 0ce340  push 0x9258
    X86_AT(c, 0xce340u);
    { uint32_t v = 0x9258u; push32(c, v); }
    // 0ce345  push 7
    X86_AT(c, 0xce345u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0ce347  call 0xba428
    X86_AT(c, 0xce347u);
    push32(c, 0xce34cu); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xce34cu);
    X86_TICK(c, 17);
    // 0ce34c  lea eax, [ebp - 1]
    X86_AT(c, 0xce34cu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFFFu);
    // 0ce34f  push eax
    X86_AT(c, 0xce34fu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ce350  push ebx
    X86_AT(c, 0xce350u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0ce351  push 0x12
    X86_AT(c, 0xce351u);
    { uint32_t v = 0x12u; push32(c, v); }
    // 0ce353  push 0xa6bac
    X86_AT(c, 0xce353u);
    { uint32_t v = 0xA6BACu; push32(c, v); }
    // 0ce358  call 0xba1b4
    X86_AT(c, 0xce358u);
    push32(c, 0xce35du); x86_call_known(c, 0xba1b4u, f_000ba1b4); X86_RET(c, 0xce35du);
    X86_TICK(c, 11);
    // 0ce35d  push eax
    X86_AT(c, 0xce35du);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ce35e  push 7
    X86_AT(c, 0xce35eu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0ce360  call 0xbbba4
    X86_AT(c, 0xce360u);
    push32(c, 0xce365u); x86_call_known(c, 0xbbba4u, f_000bbba4); X86_RET(c, 0xce365u);
    X86_TICK(c, 11);
    // 0ce365  push 0x9278
    X86_AT(c, 0xce365u);
    { uint32_t v = 0x9278u; push32(c, v); }
    // 0ce36a  push 7
    X86_AT(c, 0xce36au);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0ce36c  call 0xba428
    X86_AT(c, 0xce36cu);
    push32(c, 0xce371u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xce371u);
    X86_TICK(c, 9);
    // 0ce371  push 7
    X86_AT(c, 0xce371u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0ce373  call 0xbbb5c
    X86_AT(c, 0xce373u);
    push32(c, 0xce378u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xce378u);
    X86_TICK(c, 9);
    // 0ce378  add esp, 0x30
    X86_AT(c, 0xce378u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x30u, 0, 4); }
    // 0ce37b  cmp bl, 0x51
    X86_AT(c, 0xce37bu);
    (void)x86_sub(c, g8(c, 3), 0x51u, 0, 1);
    // 0ce37e  jne 0xce3fa
    X86_AT(c, 0xce37eu);
    if (x86_cc(c, 5)) { goto L_ce3fa; }
    X86_TICK(c, 22);
    // 0ce384  mov eax, dword ptr [0xa4930]
    X86_AT(c, 0xce384u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xA4930u)));
    // 0ce389  lea eax, [eax + eax*2]
    X86_AT(c, 0xce389u);
    c.r[0] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0ce38c  lea edx, [eax*8]
    X86_AT(c, 0xce38cu);
    c.r[2] = (uint32_t)(c.r[0] * 8);
    // 0ce393  lea edx, [eax + edx*8]
    X86_AT(c, 0xce393u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 8);
    // 0ce396  cmp byte ptr [edx + 0xa4acf], 0x46
    X86_AT(c, 0xce396u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4ACFu))), 0x46u, 0, 1);
    // 0ce39d  jne 0xce3f8
    X86_AT(c, 0xce39du);
    if (x86_cc(c, 5)) { goto L_ce3f8; }
    X86_TICK(c, 12);
    // 0ce39f  cmp dword ptr [edx + 0xa4add], 0x5dc
    X86_AT(c, 0xce39fu);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4ADDu))), 0x5DCu, 0, 4);
    // 0ce3a9  jle 0xce3f8
    X86_AT(c, 0xce3a9u);
    if (x86_cc(c, 14)) { goto L_ce3f8; }
    X86_TICK(c, 11);
    // 0ce3ab  push 0x9288
    X86_AT(c, 0xce3abu);
    { uint32_t v = 0x9288u; push32(c, v); }
    // 0ce3b0  push 7
    X86_AT(c, 0xce3b0u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0ce3b2  call 0xba428
    X86_AT(c, 0xce3b2u);
    push32(c, 0xce3b7u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xce3b7u);
    X86_TICK(c, 9);
    // 0ce3b7  push 7
    X86_AT(c, 0xce3b7u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0ce3b9  call 0xbbb5c
    X86_AT(c, 0xce3b9u);
    push32(c, 0xce3beu); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xce3beu);
    X86_TICK(c, 9);
    // 0ce3be  push 8
    X86_AT(c, 0xce3beu);
    { uint32_t v = 0x8u; push32(c, v); }
    // 0ce3c0  call 0xb607c
    X86_AT(c, 0xce3c0u);
    push32(c, 0xce3c5u); x86_call_known(c, 0xb607cu, f_000b607c); X86_RET(c, 0xce3c5u);
    X86_TICK(c, 16);
    // 0ce3c5  mov word ptr [0xabf80], 0
    X86_AT(c, 0xce3c5u);
    wr16((c.sbase[3] + (uint32_t)(0xABF80u)), 0x0u);
    // 0ce3ce  push 0x28
    X86_AT(c, 0xce3ceu);
    { uint32_t v = 0x28u; push32(c, v); }
    // 0ce3d0  push dword ptr [0xa4930]
    X86_AT(c, 0xce3d0u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xA4930u))); push32(c, v); }
    // 0ce3d6  call 0xc9b10
    X86_AT(c, 0xce3d6u);
    push32(c, 0xce3dbu); x86_call_known(c, 0xc9b10u, f_000c9b10); X86_RET(c, 0xce3dbu);
    X86_TICK(c, 9);
    // 0ce3db  push 8
    X86_AT(c, 0xce3dbu);
    { uint32_t v = 0x8u; push32(c, v); }
    // 0ce3dd  call 0xb607c
    X86_AT(c, 0xce3ddu);
    push32(c, 0xce3e2u); x86_call_known(c, 0xb607cu, f_000b607c); X86_RET(c, 0xce3e2u);
    X86_TICK(c, 11);
    // 0ce3e2  add esp, 0x1c
    X86_AT(c, 0xce3e2u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x1Cu, 0, 4); }
    // 0ce3e5  push 0xffffffff
    X86_AT(c, 0xce3e5u);
    { uint32_t v = 0xFFFFFFFFu; push32(c, v); }
    // 0ce3e7  call 0xc7cdc
    X86_AT(c, 0xce3e7u);
    push32(c, 0xce3ecu); x86_call_known(c, 0xc7cdcu, f_000c7cdc); X86_RET(c, 0xce3ecu);
    X86_TICK(c, 9);
    // 0ce3ec  push 8
    X86_AT(c, 0xce3ecu);
    { uint32_t v = 0x8u; push32(c, v); }
    // 0ce3ee  call 0xb607c
    X86_AT(c, 0xce3eeu);
    push32(c, 0xce3f3u); x86_call_known(c, 0xb607cu, f_000b607c); X86_RET(c, 0xce3f3u);
    X86_TICK(c, 7);
    // 0ce3f3  jmp 0xce5a4
    X86_AT(c, 0xce3f3u);
    goto L_ce5a4;
L_ce3f8:
    X86_TICK(c, 2);
    // 0ce3f8  mov bl, 0x4b
    X86_AT(c, 0xce3f8u);
    s8(c, 3, 0x4Bu);
L_ce3fa:
    X86_TICK(c, 25);
    // 0ce3fa  mov eax, dword ptr [0xa4930]
    X86_AT(c, 0xce3fau);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xA4930u)));
    // 0ce3ff  mov edx, dword ptr [eax*4 + 0xa49f5]
    X86_AT(c, 0xce3ffu);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[0] * 4 + 0xA49F5u)));
    // 0ce406  mov dword ptr [ebp - 8], edx
    X86_AT(c, 0xce406u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), c.r[2]);
    // 0ce409  mov eax, dword ptr [eax*4 + 0xa4a05]
    X86_AT(c, 0xce409u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[0] * 4 + 0xA4A05u)));
    // 0ce410  mov dword ptr [ebp - 0xc], eax
    X86_AT(c, 0xce410u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)), c.r[0]);
    // 0ce413  push 7
    X86_AT(c, 0xce413u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0ce415  call 0xb7068
    X86_AT(c, 0xce415u);
    push32(c, 0xce41au); x86_call_known(c, 0xb7068u, f_000b7068); X86_RET(c, 0xce41au);
    X86_TICK(c, 12);
    // 0ce41a  xchg edi, eax
    X86_AT(c, 0xce41au);
    { uint32_t t = c.r[7]; c.r[7] = c.r[0]; c.r[0] = t; }
    // 0ce41b  add esp, 4
    X86_AT(c, 0xce41bu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0ce41e  cmp edi, 0xffffffff
    X86_AT(c, 0xce41eu);
    (void)x86_sub(c, c.r[7], 0xFFFFFFFFu, 0, 4);
    // 0ce421  jne 0xce437
    X86_AT(c, 0xce421u);
    if (x86_cc(c, 5)) { goto L_ce437; }
    X86_TICK(c, 7);
    // 0ce423  call 0xce2c8
    X86_AT(c, 0xce423u);
    push32(c, 0xce428u); x86_call_known(c, 0xce2c8u, f_000ce2c8); X86_RET(c, 0xce428u);
    X86_TICK(c, 9);
    // 0ce428  push 7
    X86_AT(c, 0xce428u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0ce42a  call 0xbbb5c
    X86_AT(c, 0xce42au);
    push32(c, 0xce42fu); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xce42fu);
    X86_TICK(c, 9);
    // 0ce42f  add esp, 4
    X86_AT(c, 0xce42fu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0ce432  jmp 0xce5dd
    X86_AT(c, 0xce432u);
    goto L_ce5dd;
L_ce437:
    X86_TICK(c, 12);
    // 0ce437  movzx edx, bl
    X86_AT(c, 0xce437u);
    c.r[2] = g8(c, 3);
    // 0ce43a  sub edx, 0x41
    X86_AT(c, 0xce43au);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, 0x41u, 0, 4); }
    // 0ce43d  cmp edx, 0x11
    X86_AT(c, 0xce43du);
    (void)x86_sub(c, c.r[2], 0x11u, 0, 4);
    // 0ce440  ja 0xce4bb
    X86_AT(c, 0xce440u);
    if (x86_cc(c, 7)) { goto L_ce4bb; }
    X86_TICK(c, 7);
    // 0ce446  jmp dword ptr cs:[edx*4 + 0xce44e]
    X86_AT(c, 0xce446u);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xCE44Eu)));
      switch (t) {
      case 0xce496u: goto L_ce496;
      case 0xce49au: goto L_ce49a;
      case 0xce49eu: goto L_ce49e;
      case 0xce4b1u: goto L_ce4b1;
      default: x86_jump(c, t); return; } }
L_ce496:
    X86_TICK(c, 9);
    // 0ce496  push 0xd
    X86_AT(c, 0xce496u);
    { uint32_t v = 0xDu; push32(c, v); }
    // 0ce498  jmp 0xce4b3
    X86_AT(c, 0xce498u);
    goto L_ce4b3;
L_ce49a:
    X86_TICK(c, 9);
    // 0ce49a  push 2
    X86_AT(c, 0xce49au);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0ce49c  jmp 0xce4b3
    X86_AT(c, 0xce49cu);
    goto L_ce4b3;
L_ce49e:
    X86_TICK(c, 9);
    // 0ce49e  push 6
    X86_AT(c, 0xce49eu);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0ce4a0  call 0xb607c
    X86_AT(c, 0xce4a0u);
    push32(c, 0xce4a5u); x86_call_known(c, 0xb607cu, f_000b607c); X86_RET(c, 0xce4a5u);
    X86_TICK(c, 9);
    // 0ce4a5  push 3
    X86_AT(c, 0xce4a5u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0ce4a7  call 0xbebbc
    X86_AT(c, 0xce4a7u);
    push32(c, 0xce4acu); x86_call_known(c, 0xbebbcu, f_000bebbc); X86_RET(c, 0xce4acu);
    X86_TICK(c, 9);
    // 0ce4ac  add esp, 8
    X86_AT(c, 0xce4acu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0ce4af  jmp 0xce4bb
    X86_AT(c, 0xce4afu);
    goto L_ce4bb;
L_ce4b1:
    X86_TICK(c, 2);
    // 0ce4b1  push 0xa
    X86_AT(c, 0xce4b1u);
    { uint32_t v = 0xAu; push32(c, v); }
L_ce4b3:
    X86_TICK(c, 7);
    // 0ce4b3  call 0xb607c
    X86_AT(c, 0xce4b3u);
    push32(c, 0xce4b8u); x86_call_known(c, 0xb607cu, f_000b607c); X86_RET(c, 0xce4b8u);
    X86_TICK(c, 2);
    // 0ce4b8  add esp, 4
    X86_AT(c, 0xce4b8u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
L_ce4bb:
    X86_TICK(c, 9);
    // 0ce4bb  push 0xa
    X86_AT(c, 0xce4bbu);
    { uint32_t v = 0xAu; push32(c, v); }
    // 0ce4bd  call 0xbebbc
    X86_AT(c, 0xce4bdu);
    push32(c, 0xce4c2u); x86_call_known(c, 0xbebbcu, f_000bebbc); X86_RET(c, 0xce4c2u);
    X86_TICK(c, 9);
    // 0ce4c2  add esp, 4
    X86_AT(c, 0xce4c2u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0ce4c5  cmp bl, 0x52
    X86_AT(c, 0xce4c5u);
    (void)x86_sub(c, g8(c, 3), 0x52u, 0, 1);
    // 0ce4c8  jne 0xce533
    X86_AT(c, 0xce4c8u);
    if (x86_cc(c, 5)) { goto L_ce533; }
    X86_TICK(c, 22);
    // 0ce4ca  mov eax, dword ptr [0xa4930]
    X86_AT(c, 0xce4cau);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xA4930u)));
    // 0ce4cf  lea eax, [eax + eax*2]
    X86_AT(c, 0xce4cfu);
    c.r[0] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0ce4d2  lea edx, [eax*8]
    X86_AT(c, 0xce4d2u);
    c.r[2] = (uint32_t)(c.r[0] * 8);
    // 0ce4d9  lea edx, [eax + edx*8]
    X86_AT(c, 0xce4d9u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 8);
    // 0ce4dc  cmp dword ptr [edx + 0xa4ac2], 0x32
    X86_AT(c, 0xce4dcu);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4AC2u))), 0x32u, 0, 4);
    // 0ce4e3  jge 0xce531
    X86_AT(c, 0xce4e3u);
    if (x86_cc(c, 13)) { goto L_ce531; }
    X86_TICK(c, 9);
    // 0ce4e5  push 3
    X86_AT(c, 0xce4e5u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0ce4e7  call 0xb607c
    X86_AT(c, 0xce4e7u);
    push32(c, 0xce4ecu); x86_call_known(c, 0xb607cu, f_000b607c); X86_RET(c, 0xce4ecu);
    X86_TICK(c, 11);
    // 0ce4ec  push 0x92c0
    X86_AT(c, 0xce4ecu);
    { uint32_t v = 0x92C0u; push32(c, v); }
    // 0ce4f1  push 7
    X86_AT(c, 0xce4f1u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0ce4f3  call 0xba428
    X86_AT(c, 0xce4f3u);
    push32(c, 0xce4f8u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xce4f8u);
    X86_TICK(c, 9);
    // 0ce4f8  push 7
    X86_AT(c, 0xce4f8u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0ce4fa  call 0xbbb5c
    X86_AT(c, 0xce4fau);
    push32(c, 0xce4ffu); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xce4ffu);
    X86_TICK(c, 36);
    // 0ce4ff  mov eax, dword ptr [0xa4930]
    X86_AT(c, 0xce4ffu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xA4930u)));
    // 0ce504  lea eax, [eax + eax*2]
    X86_AT(c, 0xce504u);
    c.r[0] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0ce507  lea edx, [eax*8]
    X86_AT(c, 0xce507u);
    c.r[2] = (uint32_t)(c.r[0] * 8);
    // 0ce50e  lea edx, [eax + edx*8]
    X86_AT(c, 0xce50eu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 8);
    // 0ce511  mov al, 0x41
    X86_AT(c, 0xce511u);
    s8(c, 0, 0x41u);
    // 0ce513  mov byte ptr [edx + 0xa4b1a], al
    X86_AT(c, 0xce513u);
    wr8((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4B1Au)), g8(c, 0));
    // 0ce519  movzx ebx, bl
    X86_AT(c, 0xce519u);
    c.r[3] = g8(c, 3);
    // 0ce51c  mov ecx, ebx
    X86_AT(c, 0xce51cu);
    c.r[1] = c.r[3];
    // 0ce51e  mov eax, 0x41
    X86_AT(c, 0xce51eu);
    c.r[0] = 0x41u;
    // 0ce523  sub ecx, eax
    X86_AT(c, 0xce523u);
    { uint32_t v = c.r[1]; c.r[1] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0ce525  dec dword ptr [edx + ecx*4 + 0xa4b1b]
    X86_AT(c, 0xce525u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[2] + c.r[1] * 4 + 0xA4B1Bu)); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 0ce52c  jmp 0xce5da
    X86_AT(c, 0xce52cu);
    goto L_ce5da;
L_ce531:
    X86_TICK(c, 2);
    // 0ce531  mov bl, 0x4e
    X86_AT(c, 0xce531u);
    s8(c, 3, 0x4Eu);
L_ce533:
    X86_TICK(c, 7);
    // 0ce533  cmp bl, 0x44
    X86_AT(c, 0xce533u);
    (void)x86_sub(c, g8(c, 3), 0x44u, 0, 1);
    // 0ce536  je 0xce59d
    X86_AT(c, 0xce536u);
    if (x86_cc(c, 4)) { goto L_ce59d; }
    X86_TICK(c, 7);
    // 0ce538  cmp bl, 0x46
    X86_AT(c, 0xce538u);
    (void)x86_sub(c, g8(c, 3), 0x46u, 0, 1);
    // 0ce53b  je 0xce59d
    X86_AT(c, 0xce53bu);
    if (x86_cc(c, 4)) { goto L_ce59d; }
    X86_TICK(c, 7);
    // 0ce53d  cmp bl, 0x4a
    X86_AT(c, 0xce53du);
    (void)x86_sub(c, g8(c, 3), 0x4Au, 0, 1);
    // 0ce540  je 0xce59d
    X86_AT(c, 0xce540u);
    if (x86_cc(c, 4)) { goto L_ce59d; }
    X86_TICK(c, 7);
    // 0ce542  cmp bl, 0x4e
    X86_AT(c, 0xce542u);
    (void)x86_sub(c, g8(c, 3), 0x4Eu, 0, 1);
    // 0ce545  je 0xce59d
    X86_AT(c, 0xce545u);
    if (x86_cc(c, 4)) { goto L_ce59d; }
    X86_TICK(c, 19);
    // 0ce547  push 1
    X86_AT(c, 0xce547u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0ce549  push edi
    X86_AT(c, 0xce549u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0ce54a  lea eax, [ebp - 0xc]
    X86_AT(c, 0xce54au);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFF4u);
    // 0ce54d  push eax
    X86_AT(c, 0xce54du);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ce54e  lea ecx, [ebp - 8]
    X86_AT(c, 0xce54eu);
    c.r[1] = (uint32_t)(c.r[5] + 0xFFFFFFF8u);
    // 0ce551  push ecx
    X86_AT(c, 0xce551u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 0ce552  call 0xc72b0
    X86_AT(c, 0xce552u);
    push32(c, 0xce557u); x86_call_known(c, 0xc72b0u, f_000c72b0); X86_RET(c, 0xce557u);
    X86_TICK(c, 17);
    // 0ce557  push dword ptr [ebp - 0xc]
    X86_AT(c, 0xce557u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u))); push32(c, v); }
    // 0ce55a  push dword ptr [ebp - 8]
    X86_AT(c, 0xce55au);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u))); push32(c, v); }
    // 0ce55d  call 0xc80f0
    X86_AT(c, 0xce55du);
    push32(c, 0xce562u); x86_call_known(c, 0xc80f0u, f_000c80f0); X86_RET(c, 0xce562u);
    X86_TICK(c, 12);
    // 0ce562  xchg esi, eax
    X86_AT(c, 0xce562u);
    { uint32_t t = c.r[6]; c.r[6] = c.r[0]; c.r[0] = t; }
    // 0ce563  add esp, 0x18
    X86_AT(c, 0xce563u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x18u, 0, 4); }
    // 0ce566  cmp esi, 0xffffffff
    X86_AT(c, 0xce566u);
    (void)x86_sub(c, c.r[6], 0xFFFFFFFFu, 0, 4);
    // 0ce569  jne 0xce5c5
    X86_AT(c, 0xce569u);
    if (x86_cc(c, 5)) { goto L_ce5c5; }
    X86_TICK(c, 7);
    // 0ce56b  cmp bl, 0x42
    X86_AT(c, 0xce56bu);
    (void)x86_sub(c, g8(c, 3), 0x42u, 0, 1);
    // 0ce56e  jne 0xce5a9
    X86_AT(c, 0xce56eu);
    if (x86_cc(c, 5)) { goto L_ce5a9; }
    X86_TICK(c, 29);
    // 0ce570  mov eax, dword ptr [0xa4930]
    X86_AT(c, 0xce570u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xA4930u)));
    // 0ce575  lea eax, [eax + eax*2]
    X86_AT(c, 0xce575u);
    c.r[0] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0ce578  lea edx, [eax*8]
    X86_AT(c, 0xce578u);
    c.r[2] = (uint32_t)(c.r[0] * 8);
    // 0ce57f  lea edx, [eax + edx*8]
    X86_AT(c, 0xce57fu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 8);
    // 0ce582  mov al, 0x41
    X86_AT(c, 0xce582u);
    s8(c, 0, 0x41u);
    // 0ce584  mov byte ptr [edx + 0xa4b1a], al
    X86_AT(c, 0xce584u);
    wr8((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4B1Au)), g8(c, 0));
    // 0ce58a  movzx ebx, bl
    X86_AT(c, 0xce58au);
    c.r[3] = g8(c, 3);
    // 0ce58d  mov ecx, ebx
    X86_AT(c, 0xce58du);
    c.r[1] = c.r[3];
    // 0ce58f  mov eax, 0x41
    X86_AT(c, 0xce58fu);
    c.r[0] = 0x41u;
    // 0ce594  sub ecx, eax
    X86_AT(c, 0xce594u);
    { uint32_t v = c.r[1]; c.r[1] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0ce596  dec dword ptr [edx + ecx*4 + 0xa4b1b]
    X86_AT(c, 0xce596u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[2] + c.r[1] * 4 + 0xA4B1Bu)); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
L_ce59d:
    X86_TICK(c, 11);
    // 0ce59d  push ebx
    X86_AT(c, 0xce59du);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0ce59e  push edi
    X86_AT(c, 0xce59eu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0ce59f  call 0xce5e4
    X86_AT(c, 0xce59fu);
    push32(c, 0xce5a4u); x86_call_known(c, 0xce5e4u, f_000ce5e4); X86_RET(c, 0xce5a4u);
L_ce5a4:
    X86_TICK(c, 9);
    // 0ce5a4  add esp, 8
    X86_AT(c, 0xce5a4u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0ce5a7  jmp 0xce5dd
    X86_AT(c, 0xce5a7u);
    goto L_ce5dd;
L_ce5a9:
    X86_TICK(c, 9);
    // 0ce5a9  push 3
    X86_AT(c, 0xce5a9u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0ce5ab  call 0xb607c
    X86_AT(c, 0xce5abu);
    push32(c, 0xce5b0u); x86_call_known(c, 0xb607cu, f_000b607c); X86_RET(c, 0xce5b0u);
    X86_TICK(c, 11);
    // 0ce5b0  push 0x92e0
    X86_AT(c, 0xce5b0u);
    { uint32_t v = 0x92E0u; push32(c, v); }
    // 0ce5b5  push 7
    X86_AT(c, 0xce5b5u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0ce5b7  call 0xba428
    X86_AT(c, 0xce5b7u);
    push32(c, 0xce5bcu); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xce5bcu);
    X86_TICK(c, 9);
    // 0ce5bc  push 7
    X86_AT(c, 0xce5bcu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0ce5be  call 0xbbb5c
    X86_AT(c, 0xce5beu);
    push32(c, 0xce5c3u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xce5c3u);
    X86_TICK(c, 7);
    // 0ce5c3  jmp 0xce5da
    X86_AT(c, 0xce5c3u);
    goto L_ce5da;
L_ce5c5:
    X86_TICK(c, 11);
    // 0ce5c5  push ebx
    X86_AT(c, 0xce5c5u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0ce5c6  push esi
    X86_AT(c, 0xce5c6u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0ce5c7  call 0xce6d8
    X86_AT(c, 0xce5c7u);
    push32(c, 0xce5ccu); x86_call_known(c, 0xce6d8u, f_000ce6d8); X86_RET(c, 0xce5ccu);
    X86_TICK(c, 9);
    // 0ce5cc  push 0xffffffff
    X86_AT(c, 0xce5ccu);
    { uint32_t v = 0xFFFFFFFFu; push32(c, v); }
    // 0ce5ce  call 0xb7f6c
    X86_AT(c, 0xce5ceu);
    push32(c, 0xce5d3u); x86_call_known(c, 0xb7f6cu, f_000b7f6c); X86_RET(c, 0xce5d3u);
    X86_TICK(c, 9);
    // 0ce5d3  push 0
    X86_AT(c, 0xce5d3u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0ce5d5  call 0xbdea8
    X86_AT(c, 0xce5d5u);
    push32(c, 0xce5dau); x86_call_known(c, 0xbdea8u, f_000bdea8); X86_RET(c, 0xce5dau);
L_ce5da:
    X86_TICK(c, 2);
    // 0ce5da  add esp, 0x10
    X86_AT(c, 0xce5dau);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
L_ce5dd:
    X86_TICK(c, 28);
    // 0ce5dd  pop edi
    X86_AT(c, 0xce5ddu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0ce5de  pop esi
    X86_AT(c, 0xce5deu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0ce5df  pop ebx
    X86_AT(c, 0xce5dfu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0ce5e0  leave 
    X86_AT(c, 0xce5e0u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0ce5e1  ret 
    X86_AT(c, 0xce5e1u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xce314u, "ran off the end of a function");
}
void f_000ce5e4(X86Cpu& c) {
    X86_TICK(c, 46);
    // 0ce5e4  push ebp
    X86_AT(c, 0xce5e4u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0ce5e5  mov ebp, esp
    X86_AT(c, 0xce5e5u);
    c.r[5] = c.r[4];
    // 0ce5e7  sub esp, 8
    X86_AT(c, 0xce5e7u);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, 0x8u, 0, 4); }
    // 0ce5ea  push ebx
    X86_AT(c, 0xce5eau);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0ce5eb  push esi
    X86_AT(c, 0xce5ebu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0ce5ec  push edi
    X86_AT(c, 0xce5ecu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0ce5ed  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0xce5edu);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0ce5f0  mov eax, dword ptr [0xa4930]
    X86_AT(c, 0xce5f0u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xA4930u)));
    // 0ce5f5  mov edx, dword ptr [eax*4 + 0xa49f5]
    X86_AT(c, 0xce5f5u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[0] * 4 + 0xA49F5u)));
    // 0ce5fc  mov dword ptr [ebp - 4], edx
    X86_AT(c, 0xce5fcu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[2]);
    // 0ce5ff  mov eax, dword ptr [eax*4 + 0xa4a05]
    X86_AT(c, 0xce5ffu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[0] * 4 + 0xA4A05u)));
    // 0ce606  mov dword ptr [ebp - 8], eax
    X86_AT(c, 0xce606u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), c.r[0]);
    // 0ce609  mov ebx, dword ptr [0x458a8]
    X86_AT(c, 0xce609u);
    c.r[3] = rd32((c.sbase[3] + (uint32_t)(0x458A8u)));
    // 0ce60f  inc dword ptr [0x458a8]
    X86_AT(c, 0xce60fu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x458A8u)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0ce615  lea eax, [ebx + ebx*2]
    X86_AT(c, 0xce615u);
    c.r[0] = (uint32_t)(c.r[3] + c.r[3] * 2);
    // 0ce618  mov dword ptr [eax*4 + 0x458b4], 0x8b
    X86_AT(c, 0xce618u);
    wr32((c.sbase[3] + (uint32_t)(c.r[0] * 4 + 0x458B4u)), 0x8Bu);
L_ce623:
    X86_TICK(c, 19);
    // 0ce623  push 1
    X86_AT(c, 0xce623u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0ce625  push edi
    X86_AT(c, 0xce625u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0ce626  lea eax, [ebp - 8]
    X86_AT(c, 0xce626u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFF8u);
    // 0ce629  push eax
    X86_AT(c, 0xce629u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ce62a  lea ecx, [ebp - 4]
    X86_AT(c, 0xce62au);
    c.r[1] = (uint32_t)(c.r[5] + 0xFFFFFFFCu);
    // 0ce62d  push ecx
    X86_AT(c, 0xce62du);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 0ce62e  call 0xc72b0
    X86_AT(c, 0xce62eu);
    push32(c, 0xce633u); x86_call_known(c, 0xc72b0u, f_000c72b0); X86_RET(c, 0xce633u);
    X86_TICK(c, 17);
    // 0ce633  push dword ptr [ebp - 8]
    X86_AT(c, 0xce633u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u))); push32(c, v); }
    // 0ce636  push dword ptr [ebp - 4]
    X86_AT(c, 0xce636u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))); push32(c, v); }
    // 0ce639  call 0xc80f0
    X86_AT(c, 0xce639u);
    push32(c, 0xce63eu); x86_call_known(c, 0xc80f0u, f_000c80f0); X86_RET(c, 0xce63eu);
    X86_TICK(c, 26);
    // 0ce63e  xchg esi, eax
    X86_AT(c, 0xce63eu);
    { uint32_t t = c.r[6]; c.r[6] = c.r[0]; c.r[0] = t; }
    // 0ce63f  lea eax, [ebx + ebx*2]
    X86_AT(c, 0xce63fu);
    c.r[0] = (uint32_t)(c.r[3] + c.r[3] * 2);
    // 0ce642  mov edx, dword ptr [ebp - 4]
    X86_AT(c, 0xce642u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0ce645  mov dword ptr [eax*4 + 0x458ac], edx
    X86_AT(c, 0xce645u);
    wr32((c.sbase[3] + (uint32_t)(c.r[0] * 4 + 0x458ACu)), c.r[2]);
    // 0ce64c  mov edx, dword ptr [ebp - 8]
    X86_AT(c, 0xce64cu);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)));
    // 0ce64f  mov dword ptr [eax*4 + 0x458b0], edx
    X86_AT(c, 0xce64fu);
    wr32((c.sbase[3] + (uint32_t)(c.r[0] * 4 + 0x458B0u)), c.r[2]);
    // 0ce656  push 0
    X86_AT(c, 0xce656u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0ce658  call 0xbdea8
    X86_AT(c, 0xce658u);
    push32(c, 0xce65du); x86_call_known(c, 0xbdea8u, f_000bdea8); X86_RET(c, 0xce65du);
    X86_TICK(c, 9);
    // 0ce65d  add esp, 0x1c
    X86_AT(c, 0xce65du);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x1Cu, 0, 4); }
    // 0ce660  cmp esi, 0xffffffff
    X86_AT(c, 0xce660u);
    (void)x86_sub(c, c.r[6], 0xFFFFFFFFu, 0, 4);
    // 0ce663  je 0xce688
    X86_AT(c, 0xce663u);
    if (x86_cc(c, 4)) { goto L_ce688; }
    X86_TICK(c, 9);
    // 0ce665  push 0xffffffff
    X86_AT(c, 0xce665u);
    { uint32_t v = 0xFFFFFFFFu; push32(c, v); }
    // 0ce667  call 0xb7f6c
    X86_AT(c, 0xce667u);
    push32(c, 0xce66cu); x86_call_known(c, 0xb7f6cu, f_000b7f6c); X86_RET(c, 0xce66cu);
    X86_TICK(c, 14);
    // 0ce66c  push dword ptr [ebp + 0xc]
    X86_AT(c, 0xce66cu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))); push32(c, v); }
    // 0ce66f  push esi
    X86_AT(c, 0xce66fu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0ce670  call 0xce6d8
    X86_AT(c, 0xce670u);
    push32(c, 0xce675u); x86_call_known(c, 0xce6d8u, f_000ce6d8); X86_RET(c, 0xce675u);
    X86_TICK(c, 9);
    // 0ce675  push 0xffffffff
    X86_AT(c, 0xce675u);
    { uint32_t v = 0xFFFFFFFFu; push32(c, v); }
    // 0ce677  call 0xb7f6c
    X86_AT(c, 0xce677u);
    push32(c, 0xce67cu); x86_call_known(c, 0xb7f6cu, f_000b7f6c); X86_RET(c, 0xce67cu);
    X86_TICK(c, 9);
    // 0ce67c  push 0
    X86_AT(c, 0xce67cu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0ce67e  call 0xbdea8
    X86_AT(c, 0xce67eu);
    push32(c, 0xce683u); x86_call_known(c, 0xbdea8u, f_000bdea8); X86_RET(c, 0xce683u);
    X86_TICK(c, 9);
    // 0ce683  add esp, 0x14
    X86_AT(c, 0xce683u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x14u, 0, 4); }
    // 0ce686  jmp 0xce6d2
    X86_AT(c, 0xce686u);
    goto L_ce6d2;
L_ce688:
    X86_TICK(c, 11);
    // 0ce688  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0xce688u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0ce68b  and eax, eax
    X86_AT(c, 0xce68bu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0ce68d  je 0xce6a0
    X86_AT(c, 0xce68du);
    if (x86_cc(c, 4)) { goto L_ce6a0; }
    X86_TICK(c, 7);
    // 0ce68f  cmp eax, 0xa
    X86_AT(c, 0xce68fu);
    (void)x86_sub(c, c.r[0], 0xAu, 0, 4);
    // 0ce692  je 0xce6a0
    X86_AT(c, 0xce692u);
    if (x86_cc(c, 4)) { goto L_ce6a0; }
    X86_TICK(c, 11);
    // 0ce694  mov eax, dword ptr [ebp - 8]
    X86_AT(c, 0xce694u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)));
    // 0ce697  and eax, eax
    X86_AT(c, 0xce697u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0ce699  je 0xce6a0
    X86_AT(c, 0xce699u);
    if (x86_cc(c, 4)) { goto L_ce6a0; }
    X86_TICK(c, 7);
    // 0ce69b  cmp eax, 0xa
    X86_AT(c, 0xce69bu);
    (void)x86_sub(c, c.r[0], 0xAu, 0, 4);
    // 0ce69e  jne 0xce623
    X86_AT(c, 0xce69eu);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xce623u); goto L_ce623; }
L_ce6a0:
    X86_TICK(c, 9);
    // 0ce6a0  push 0xffffffff
    X86_AT(c, 0xce6a0u);
    { uint32_t v = 0xFFFFFFFFu; push32(c, v); }
    // 0ce6a2  call 0xb7f6c
    X86_AT(c, 0xce6a2u);
    push32(c, 0xce6a7u); x86_call_known(c, 0xb7f6cu, f_000b7f6c); X86_RET(c, 0xce6a7u);
    X86_TICK(c, 9);
    // 0ce6a7  push 0
    X86_AT(c, 0xce6a7u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0ce6a9  call 0xbdea8
    X86_AT(c, 0xce6a9u);
    push32(c, 0xce6aeu); x86_call_known(c, 0xbdea8u, f_000bdea8); X86_RET(c, 0xce6aeu);
    X86_TICK(c, 9);
    // 0ce6ae  push 3
    X86_AT(c, 0xce6aeu);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0ce6b0  call 0xb607c
    X86_AT(c, 0xce6b0u);
    push32(c, 0xce6b5u); x86_call_known(c, 0xb607cu, f_000b607c); X86_RET(c, 0xce6b5u);
    X86_TICK(c, 9);
    // 0ce6b5  push 7
    X86_AT(c, 0xce6b5u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0ce6b7  call 0xbb6b0
    X86_AT(c, 0xce6b7u);
    push32(c, 0xce6bcu); x86_call_known(c, 0xbb6b0u, f_000bb6b0); X86_RET(c, 0xce6bcu);
    X86_TICK(c, 11);
    // 0ce6bc  push 0x92f8
    X86_AT(c, 0xce6bcu);
    { uint32_t v = 0x92F8u; push32(c, v); }
    // 0ce6c1  push 7
    X86_AT(c, 0xce6c1u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0ce6c3  call 0xba428
    X86_AT(c, 0xce6c3u);
    push32(c, 0xce6c8u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xce6c8u);
    X86_TICK(c, 9);
    // 0ce6c8  push 7
    X86_AT(c, 0xce6c8u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0ce6ca  call 0xbbb5c
    X86_AT(c, 0xce6cau);
    push32(c, 0xce6cfu); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xce6cfu);
    X86_TICK(c, 2);
    // 0ce6cf  add esp, 0x1c
    X86_AT(c, 0xce6cfu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x1Cu, 0, 4); }
L_ce6d2:
    X86_TICK(c, 28);
    // 0ce6d2  pop edi
    X86_AT(c, 0xce6d2u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0ce6d3  pop esi
    X86_AT(c, 0xce6d3u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0ce6d4  pop ebx
    X86_AT(c, 0xce6d4u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0ce6d5  leave 
    X86_AT(c, 0xce6d5u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0ce6d6  ret 
    X86_AT(c, 0xce6d6u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xce5e4u, "ran off the end of a function");
}
void f_000ce6d8(X86Cpu& c) {
    X86_TICK(c, 23);
    // 0ce6d8  push ebp
    X86_AT(c, 0xce6d8u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0ce6d9  mov ebp, esp
    X86_AT(c, 0xce6d9u);
    c.r[5] = c.r[4];
    // 0ce6db  push eax
    X86_AT(c, 0xce6dbu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ce6dc  push esi
    X86_AT(c, 0xce6dcu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0ce6dd  push edi
    X86_AT(c, 0xce6ddu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0ce6de  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0xce6deu);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0ce6e1  push 7
    X86_AT(c, 0xce6e1u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0ce6e3  call 0xbb6b0
    X86_AT(c, 0xce6e3u);
    push32(c, 0xce6e8u); x86_call_known(c, 0xbb6b0u, f_000bb6b0); X86_RET(c, 0xce6e8u);
    X86_TICK(c, 14);
    // 0ce6e8  add esp, 4
    X86_AT(c, 0xce6e8u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0ce6eb  cmp dword ptr [0xa4a5a], 3
    X86_AT(c, 0xce6ebu);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xA4A5Au))), 0x3u, 0, 4);
    // 0ce6f2  jne 0xce731
    X86_AT(c, 0xce6f2u);
    if (x86_cc(c, 5)) { goto L_ce731; }
    X86_TICK(c, 22);
    // 0ce6f4  mov eax, dword ptr [0xa4930]
    X86_AT(c, 0xce6f4u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xA4930u)));
    // 0ce6f9  lea eax, [eax + eax*2]
    X86_AT(c, 0xce6f9u);
    c.r[0] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0ce6fc  lea edx, [eax*8]
    X86_AT(c, 0xce6fcu);
    c.r[2] = (uint32_t)(c.r[0] * 8);
    // 0ce703  lea edx, [eax + edx*8]
    X86_AT(c, 0xce703u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 8);
    // 0ce706  cmp byte ptr [edx + 0xa4b1a], 0x50
    X86_AT(c, 0xce706u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4B1Au))), 0x50u, 0, 1);
    // 0ce70d  je 0xce731
    X86_AT(c, 0xce70du);
    if (x86_cc(c, 4)) { goto L_ce731; }
    X86_TICK(c, 9);
    // 0ce70f  push 0
    X86_AT(c, 0xce70fu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0ce711  call 0xb607c
    X86_AT(c, 0xce711u);
    push32(c, 0xce716u); x86_call_known(c, 0xb607cu, f_000b607c); X86_RET(c, 0xce716u);
    X86_TICK(c, 11);
    // 0ce716  push 0x9310
    X86_AT(c, 0xce716u);
    { uint32_t v = 0x9310u; push32(c, v); }
    // 0ce71b  push 7
    X86_AT(c, 0xce71bu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0ce71d  call 0xba428
    X86_AT(c, 0xce71du);
    push32(c, 0xce722u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xce722u);
    X86_TICK(c, 9);
    // 0ce722  push 7
    X86_AT(c, 0xce722u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0ce724  call 0xbbb5c
    X86_AT(c, 0xce724u);
    push32(c, 0xce729u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xce729u);
    X86_TICK(c, 9);
    // 0ce729  add esp, 0x10
    X86_AT(c, 0xce729u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0ce72c  jmp 0xce82d
    X86_AT(c, 0xce72cu);
    goto L_ce82d;
L_ce731:
    X86_TICK(c, 9);
    // 0ce731  push 0xa
    X86_AT(c, 0xce731u);
    { uint32_t v = 0xAu; push32(c, v); }
    // 0ce733  call 0xb61b4
    X86_AT(c, 0xce733u);
    push32(c, 0xce738u); x86_call_known(c, 0xb61b4u, f_000b61b4); X86_RET(c, 0xce738u);
    X86_TICK(c, 9);
    // 0ce738  add esp, 4
    X86_AT(c, 0xce738u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0ce73b  cmp eax, 5
    X86_AT(c, 0xce73bu);
    (void)x86_sub(c, c.r[0], 0x5u, 0, 4);
    // 0ce73e  jge 0xce78e
    X86_AT(c, 0xce73eu);
    if (x86_cc(c, 13)) { goto L_ce78e; }
    X86_TICK(c, 9);
    // 0ce740  push 0x63
    X86_AT(c, 0xce740u);
    { uint32_t v = 0x63u; push32(c, v); }
    // 0ce742  call 0xb61b4
    X86_AT(c, 0xce742u);
    push32(c, 0xce747u); x86_call_known(c, 0xb61b4u, f_000b61b4); X86_RET(c, 0xce747u);
    X86_TICK(c, 23);
    // 0ce747  mov edx, dword ptr [0xa4930]
    X86_AT(c, 0xce747u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(0xA4930u)));
    // 0ce74d  lea edx, [edx + edx*2]
    X86_AT(c, 0xce74du);
    c.r[2] = (uint32_t)(c.r[2] + c.r[2] * 2);
    // 0ce750  lea ecx, [edx*8]
    X86_AT(c, 0xce750u);
    c.r[1] = (uint32_t)(c.r[2] * 8);
    // 0ce757  lea ecx, [edx + ecx*8]
    X86_AT(c, 0xce757u);
    c.r[1] = (uint32_t)(c.r[2] + c.r[1] * 8);
    // 0ce75a  add esp, 4
    X86_AT(c, 0xce75au);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0ce75d  cmp eax, dword ptr [ecx + 0xa4ac2]
    X86_AT(c, 0xce75du);
    (void)x86_sub(c, c.r[0], rd32((c.sbase[3] + (uint32_t)(c.r[1] + 0xA4AC2u))), 0, 4);
    // 0ce763  jle 0xce78e
    X86_AT(c, 0xce763u);
    if (x86_cc(c, 14)) { goto L_ce78e; }
    X86_TICK(c, 9);
    // 0ce765  push 3
    X86_AT(c, 0xce765u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0ce767  call 0xb607c
    X86_AT(c, 0xce767u);
    push32(c, 0xce76cu); x86_call_known(c, 0xb607cu, f_000b607c); X86_RET(c, 0xce76cu);
    X86_TICK(c, 9);
    // 0ce76c  push 7
    X86_AT(c, 0xce76cu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0ce76e  call 0xbb6b0
    X86_AT(c, 0xce76eu);
    push32(c, 0xce773u); x86_call_known(c, 0xbb6b0u, f_000bb6b0); X86_RET(c, 0xce773u);
    X86_TICK(c, 11);
    // 0ce773  push 0x933c
    X86_AT(c, 0xce773u);
    { uint32_t v = 0x933Cu; push32(c, v); }
    // 0ce778  push 7
    X86_AT(c, 0xce778u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0ce77a  call 0xba428
    X86_AT(c, 0xce77au);
    push32(c, 0xce77fu); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xce77fu);
    X86_TICK(c, 9);
    // 0ce77f  push 7
    X86_AT(c, 0xce77fu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0ce781  call 0xbbb5c
    X86_AT(c, 0xce781u);
    push32(c, 0xce786u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xce786u);
    X86_TICK(c, 9);
    // 0ce786  add esp, 0x14
    X86_AT(c, 0xce786u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x14u, 0, 4); }
    // 0ce789  jmp 0xce82d
    X86_AT(c, 0xce789u);
    goto L_ce82d;
L_ce78e:
    X86_TICK(c, 9);
    // 0ce78e  push 8
    X86_AT(c, 0xce78eu);
    { uint32_t v = 0x8u; push32(c, v); }
    // 0ce790  call 0xb607c
    X86_AT(c, 0xce790u);
    push32(c, 0xce795u); x86_call_known(c, 0xb607cu, f_000b607c); X86_RET(c, 0xce795u);
    X86_TICK(c, 11);
    // 0ce795  push 0x9354
    X86_AT(c, 0xce795u);
    { uint32_t v = 0x9354u; push32(c, v); }
    // 0ce79a  push 7
    X86_AT(c, 0xce79au);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0ce79c  call 0xba428
    X86_AT(c, 0xce79cu);
    push32(c, 0xce7a1u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xce7a1u);
    X86_TICK(c, 9);
    // 0ce7a1  push 7
    X86_AT(c, 0xce7a1u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0ce7a3  call 0xbbb5c
    X86_AT(c, 0xce7a3u);
    push32(c, 0xce7a8u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xce7a8u);
    X86_TICK(c, 9);
    // 0ce7a8  push 0xffffffff
    X86_AT(c, 0xce7a8u);
    { uint32_t v = 0xFFFFFFFFu; push32(c, v); }
    // 0ce7aa  call 0xb7f6c
    X86_AT(c, 0xce7aau);
    push32(c, 0xce7afu); x86_call_known(c, 0xb7f6cu, f_000b7f6c); X86_RET(c, 0xce7afu);
    X86_TICK(c, 9);
    // 0ce7af  push 0
    X86_AT(c, 0xce7afu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0ce7b1  call 0xbdea8
    X86_AT(c, 0xce7b1u);
    push32(c, 0xce7b6u); x86_call_known(c, 0xbdea8u, f_000bdea8); X86_RET(c, 0xce7b6u);
    X86_TICK(c, 20);
    // 0ce7b6  push dword ptr [edi*4 + 0xa4975]
    X86_AT(c, 0xce7b6u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[7] * 4 + 0xA4975u))); push32(c, v); }
    // 0ce7bd  mov al, byte ptr [0xa4934]
    X86_AT(c, 0xce7bdu);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(0xA4934u))));
    // 0ce7c2  push eax
    X86_AT(c, 0xce7c2u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ce7c3  push 7
    X86_AT(c, 0xce7c3u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0ce7c5  call 0xce8e8
    X86_AT(c, 0xce7c5u);
    push32(c, 0xce7cau); x86_call_known(c, 0xce8e8u, f_000ce8e8); X86_RET(c, 0xce7cau);
    X86_TICK(c, 9);
    // 0ce7ca  push 7
    X86_AT(c, 0xce7cau);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0ce7cc  call 0xbbb5c
    X86_AT(c, 0xce7ccu);
    push32(c, 0xce7d1u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xce7d1u);
    X86_TICK(c, 25);
    // 0ce7d1  mov eax, dword ptr [0xa4930]
    X86_AT(c, 0xce7d1u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xA4930u)));
    // 0ce7d6  lea eax, [eax + eax*2]
    X86_AT(c, 0xce7d6u);
    c.r[0] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0ce7d9  lea edx, [eax*8]
    X86_AT(c, 0xce7d9u);
    c.r[2] = (uint32_t)(c.r[0] * 8);
    // 0ce7e0  lea edx, [eax + edx*8]
    X86_AT(c, 0xce7e0u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 8);
    // 0ce7e3  mov esi, dword ptr [edx + 0xa4abe]
    X86_AT(c, 0xce7e3u);
    c.r[6] = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4ABEu)));
    // 0ce7e9  inc esi
    X86_AT(c, 0xce7e9u);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 0ce7ea  push esi
    X86_AT(c, 0xce7eau);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0ce7eb  call 0xb61b4
    X86_AT(c, 0xce7ebu);
    push32(c, 0xce7f0u); x86_call_known(c, 0xb61b4u, f_000b61b4); X86_RET(c, 0xce7f0u);
    X86_TICK(c, 51);
    // 0ce7f0  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0xce7f0u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
    // 0ce7f3  xchg esi, eax
    X86_AT(c, 0xce7f3u);
    { uint32_t t = c.r[6]; c.r[6] = c.r[0]; c.r[0] = t; }
    // 0ce7f4  cdq 
    X86_AT(c, 0xce7f4u);
    c.r[2] = (c.r[0] & 0x80000000u) ? 0xFFFFFFFFu : 0u;
    // 0ce7f5  sub eax, edx
    X86_AT(c, 0xce7f5u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[2], 0, 4); }
    // 0ce7f7  sar eax, 1
    X86_AT(c, 0xce7f7u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 7, v, 0x1u, 4, w); if (w) c.r[0] = r; }
    // 0ce7f9  add eax, dword ptr [ebp - 4]
    X86_AT(c, 0xce7f9u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))), 0, 4); }
    // 0ce7fc  xchg esi, eax
    X86_AT(c, 0xce7fcu);
    { uint32_t t = c.r[6]; c.r[6] = c.r[0]; c.r[0] = t; }
    // 0ce7fd  movzx eax, byte ptr [ebp + 0xc]
    X86_AT(c, 0xce7fdu);
    c.r[0] = rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0ce801  sub eax, 0x41
    X86_AT(c, 0xce801u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, 0x41u, 0, 4); }
    // 0ce804  lea eax, [eax + eax*2]
    X86_AT(c, 0xce804u);
    c.r[0] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0ce807  add eax, eax
    X86_AT(c, 0xce807u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, c.r[0], 0, 4); }
    // 0ce809  add eax, esi
    X86_AT(c, 0xce809u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, c.r[6], 0, 4); }
    // 0ce80b  add eax, 4
    X86_AT(c, 0xce80bu);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0x4u, 0, 4); }
    // 0ce80e  xchg esi, eax
    X86_AT(c, 0xce80eu);
    { uint32_t t = c.r[6]; c.r[6] = c.r[0]; c.r[0] = t; }
    // 0ce80f  push esi
    X86_AT(c, 0xce80fu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0ce810  push edi
    X86_AT(c, 0xce810u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0ce811  call 0xc7d2c
    X86_AT(c, 0xce811u);
    push32(c, 0xce816u); x86_call_known(c, 0xc7d2cu, f_000c7d2c); X86_RET(c, 0xce816u);
    X86_TICK(c, 14);
    // 0ce816  add esp, 0x34
    X86_AT(c, 0xce816u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x34u, 0, 4); }
    // 0ce819  cmp dword ptr [edi*4 + 0xa49b5], 0
    X86_AT(c, 0xce819u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[7] * 4 + 0xA49B5u))), 0x0u, 0, 4);
    // 0ce821  jne 0xce82d
    X86_AT(c, 0xce821u);
    if (x86_cc(c, 5)) { goto L_ce82d; }
    X86_TICK(c, 9);
    // 0ce823  push 1
    X86_AT(c, 0xce823u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0ce825  call 0xc797c
    X86_AT(c, 0xce825u);
    push32(c, 0xce82au); x86_call_known(c, 0xc797cu, f_000c797c); X86_RET(c, 0xce82au);
    X86_TICK(c, 2);
    // 0ce82a  add esp, 4
    X86_AT(c, 0xce82au);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
L_ce82d:
    X86_TICK(c, 24);
    // 0ce82d  pop edi
    X86_AT(c, 0xce82du);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0ce82e  pop esi
    X86_AT(c, 0xce82eu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0ce82f  leave 
    X86_AT(c, 0xce82fu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0ce830  ret 
    X86_AT(c, 0xce830u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xce6d8u, "ran off the end of a function");
}
void f_000ce82d(X86Cpu& c) {
    X86_TICK(c, 24);
    // 0ce82d  pop edi
    X86_AT(c, 0xce82du);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0ce82e  pop esi
    X86_AT(c, 0xce82eu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0ce82f  leave 
    X86_AT(c, 0xce82fu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0ce830  ret 
    X86_AT(c, 0xce830u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xce82du, "ran off the end of a function");
}
void f_000ce834(X86Cpu& c) {
    X86_TICK(c, 31);
    // 0ce834  push ebp
    X86_AT(c, 0xce834u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0ce835  mov ebp, esp
    X86_AT(c, 0xce835u);
    c.r[5] = c.r[4];
    // 0ce837  push edi
    X86_AT(c, 0xce837u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0ce838  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0xce838u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0ce83b  mov ecx, dword ptr [ebp + 0xc]
    X86_AT(c, 0xce83bu);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0ce83e  mov eax, dword ptr [ebp + 0x14]
    X86_AT(c, 0xce83eu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x14u)));
    // 0ce841  mov edx, dword ptr [ebp + 0x10]
    X86_AT(c, 0xce841u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u)));
    // 0ce844  dec edx
    X86_AT(c, 0xce844u);
    { uint32_t v = c.r[2]; c.r[2] = x86_dec(c, v, 4); }
    // 0ce845  cmp edx, 3
    X86_AT(c, 0xce845u);
    (void)x86_sub(c, c.r[2], 0x3u, 0, 4);
    // 0ce848  ja 0xce89c
    X86_AT(c, 0xce848u);
    if (x86_cc(c, 7)) { goto L_ce89c; }
    X86_TICK(c, 7);
    // 0ce84a  jmp dword ptr cs:[edx*4 + 0xce852]
    X86_AT(c, 0xce84au);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xCE852u)));
      switch (t) {
      case 0xce862u: goto L_ce862;
      case 0xce871u: goto L_ce871;
      case 0xce880u: goto L_ce880;
      case 0xce88fu: goto L_ce88f;
      default: x86_jump(c, t); return; } }
L_ce862:
    X86_TICK(c, 19);
    // 0ce862  sub dword ptr [ecx], eax
    X86_AT(c, 0xce862u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[1])); uint32_t v = rd32(ea); wr32(ea, x86_sub(c, v, c.r[0], 0, 4)); }
    // 0ce864  cmp dword ptr [ecx], 0
    X86_AT(c, 0xce864u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[1]))), 0x0u, 0, 4);
    // 0ce867  jge 0xce89c
    X86_AT(c, 0xce867u);
    if (x86_cc(c, 13)) { goto L_ce89c; }
    X86_TICK(c, 9);
    // 0ce869  mov dword ptr [ecx], 0xffffffff
    X86_AT(c, 0xce869u);
    wr32((c.sbase[3] + (uint32_t)(c.r[1])), 0xFFFFFFFFu);
    // 0ce86f  jmp 0xce89c
    X86_AT(c, 0xce86fu);
    goto L_ce89c;
L_ce871:
    X86_TICK(c, 19);
    // 0ce871  add dword ptr [ecx], eax
    X86_AT(c, 0xce871u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[1])); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 0ce873  cmp dword ptr [ecx], 0xa
    X86_AT(c, 0xce873u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[1]))), 0xAu, 0, 4);
    // 0ce876  jle 0xce89c
    X86_AT(c, 0xce876u);
    if (x86_cc(c, 14)) { goto L_ce89c; }
    X86_TICK(c, 9);
    // 0ce878  mov dword ptr [ecx], 0xb
    X86_AT(c, 0xce878u);
    wr32((c.sbase[3] + (uint32_t)(c.r[1])), 0xBu);
    // 0ce87e  jmp 0xce89c
    X86_AT(c, 0xce87eu);
    goto L_ce89c;
L_ce880:
    X86_TICK(c, 19);
    // 0ce880  sub dword ptr [edi], eax
    X86_AT(c, 0xce880u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7])); uint32_t v = rd32(ea); wr32(ea, x86_sub(c, v, c.r[0], 0, 4)); }
    // 0ce882  cmp dword ptr [edi], 0
    X86_AT(c, 0xce882u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[7]))), 0x0u, 0, 4);
    // 0ce885  jge 0xce89c
    X86_AT(c, 0xce885u);
    if (x86_cc(c, 13)) { goto L_ce89c; }
    X86_TICK(c, 9);
    // 0ce887  mov dword ptr [edi], 0xffffffff
    X86_AT(c, 0xce887u);
    wr32((c.sbase[3] + (uint32_t)(c.r[7])), 0xFFFFFFFFu);
    // 0ce88d  jmp 0xce89c
    X86_AT(c, 0xce88du);
    goto L_ce89c;
L_ce88f:
    X86_TICK(c, 19);
    // 0ce88f  add dword ptr [edi], eax
    X86_AT(c, 0xce88fu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7])); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 0ce891  cmp dword ptr [edi], 0xa
    X86_AT(c, 0xce891u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[7]))), 0xAu, 0, 4);
    // 0ce894  jle 0xce89c
    X86_AT(c, 0xce894u);
    if (x86_cc(c, 14)) { goto L_ce89c; }
    X86_TICK(c, 2);
    // 0ce896  mov dword ptr [edi], 0xb
    X86_AT(c, 0xce896u);
    wr32((c.sbase[3] + (uint32_t)(c.r[7])), 0xBu);
L_ce89c:
    X86_TICK(c, 20);
    // 0ce89c  pop edi
    X86_AT(c, 0xce89cu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0ce89d  leave 
    X86_AT(c, 0xce89du);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0ce89e  ret 
    X86_AT(c, 0xce89eu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xce834u, "ran off the end of a function");
}
void f_000ce8a0(X86Cpu& c) {
    X86_TICK(c, 9);
    // 0ce8a0  push 7
    X86_AT(c, 0xce8a0u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0ce8a2  call 0xbb6b0
    X86_AT(c, 0xce8a2u);
    push32(c, 0xce8a7u); x86_call_known(c, 0xbb6b0u, f_000bb6b0); X86_RET(c, 0xce8a7u);
    X86_TICK(c, 11);
    // 0ce8a7  push 0x936c
    X86_AT(c, 0xce8a7u);
    { uint32_t v = 0x936Cu; push32(c, v); }
    // 0ce8ac  push 7
    X86_AT(c, 0xce8acu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0ce8ae  call 0xba428
    X86_AT(c, 0xce8aeu);
    push32(c, 0xce8b3u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xce8b3u);
    X86_TICK(c, 9);
    // 0ce8b3  push 7
    X86_AT(c, 0xce8b3u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0ce8b5  call 0xbbb5c
    X86_AT(c, 0xce8b5u);
    push32(c, 0xce8bau); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xce8bau);
    X86_TICK(c, 9);
    // 0ce8ba  push 8
    X86_AT(c, 0xce8bau);
    { uint32_t v = 0x8u; push32(c, v); }
    // 0ce8bc  call 0xb607c
    X86_AT(c, 0xce8bcu);
    push32(c, 0xce8c1u); x86_call_known(c, 0xb607cu, f_000b607c); X86_RET(c, 0xce8c1u);
    X86_TICK(c, 9);
    // 0ce8c1  push 5
    X86_AT(c, 0xce8c1u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0ce8c3  call 0xbebbc
    X86_AT(c, 0xce8c3u);
    push32(c, 0xce8c8u); x86_call_known(c, 0xbebbcu, f_000bebbc); X86_RET(c, 0xce8c8u);
    X86_TICK(c, 9);
    // 0ce8c8  push 8
    X86_AT(c, 0xce8c8u);
    { uint32_t v = 0x8u; push32(c, v); }
    // 0ce8ca  call 0xb607c
    X86_AT(c, 0xce8cau);
    push32(c, 0xce8cfu); x86_call_known(c, 0xb607cu, f_000b607c); X86_RET(c, 0xce8cfu);
    X86_TICK(c, 9);
    // 0ce8cf  push 5
    X86_AT(c, 0xce8cfu);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0ce8d1  call 0xbebbc
    X86_AT(c, 0xce8d1u);
    push32(c, 0xce8d6u); x86_call_known(c, 0xbebbcu, f_000bebbc); X86_RET(c, 0xce8d6u);
    X86_TICK(c, 9);
    // 0ce8d6  push 8
    X86_AT(c, 0xce8d6u);
    { uint32_t v = 0x8u; push32(c, v); }
    // 0ce8d8  call 0xb607c
    X86_AT(c, 0xce8d8u);
    push32(c, 0xce8ddu); x86_call_known(c, 0xb607cu, f_000b607c); X86_RET(c, 0xce8ddu);
    X86_TICK(c, 9);
    // 0ce8dd  push 5
    X86_AT(c, 0xce8ddu);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0ce8df  call 0xbebbc
    X86_AT(c, 0xce8dfu);
    push32(c, 0xce8e4u); x86_call_known(c, 0xbebbcu, f_000bebbc); X86_RET(c, 0xce8e4u);
    X86_TICK(c, 12);
    // 0ce8e4  add esp, 0x28
    X86_AT(c, 0xce8e4u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x28u, 0, 4); }
    // 0ce8e7  ret 
    X86_AT(c, 0xce8e7u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xce8a0u, "ran off the end of a function");
}
void f_000ce8e8(X86Cpu& c) {
    X86_TICK(c, 27);
    // 0ce8e8  push ebp
    X86_AT(c, 0xce8e8u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0ce8e9  mov ebp, esp
    X86_AT(c, 0xce8e9u);
    c.r[5] = c.r[4];
    // 0ce8eb  push ebx
    X86_AT(c, 0xce8ebu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0ce8ec  push edi
    X86_AT(c, 0xce8ecu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0ce8ed  mov bl, byte ptr [ebp + 0xc]
    X86_AT(c, 0xce8edu);
    s8(c, 3, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))));
    // 0ce8f0  mov edi, 0x9394
    X86_AT(c, 0xce8f0u);
    c.r[7] = 0x9394u;
    // 0ce8f5  mov edx, dword ptr [ebp + 0x10]
    X86_AT(c, 0xce8f5u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u)));
    // 0ce8f8  sub edx, 0x2c
    X86_AT(c, 0xce8f8u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, 0x2Cu, 0, 4); }
    // 0ce8fb  cmp edx, 0x68
    X86_AT(c, 0xce8fbu);
    (void)x86_sub(c, c.r[2], 0x68u, 0, 4);
    // 0ce8fe  ja 0xcec4c
    X86_AT(c, 0xce8feu);
    if (x86_cc(c, 7)) { goto L_cec4c; }
    X86_TICK(c, 7);
    // 0ce904  jmp dword ptr cs:[edx*4 + 0xce90c]
    X86_AT(c, 0xce904u);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xCE90Cu)));
      switch (t) {
      case 0xceab0u: goto L_ceab0;
      case 0xceabau: goto L_ceaba;
      case 0xceb02u: goto L_ceb02;
      case 0xceb0cu: goto L_ceb0c;
      case 0xceb16u: goto L_ceb16;
      case 0xceb20u: goto L_ceb20;
      case 0xceb2au: goto L_ceb2a;
      case 0xceb34u: goto L_ceb34;
      case 0xceb3eu: goto L_ceb3e;
      case 0xceb48u: goto L_ceb48;
      case 0xceb52u: goto L_ceb52;
      case 0xceb5cu: goto L_ceb5c;
      case 0xceb66u: goto L_ceb66;
      case 0xceb70u: goto L_ceb70;
      case 0xceb7au: goto L_ceb7a;
      case 0xceb84u: goto L_ceb84;
      case 0xceb8eu: goto L_ceb8e;
      case 0xceb98u: goto L_ceb98;
      case 0xceba2u: goto L_ceba2;
      case 0xcebacu: goto L_cebac;
      case 0xcebb6u: goto L_cebb6;
      case 0xcebc0u: goto L_cebc0;
      case 0xcebcau: goto L_cebca;
      case 0xcebd4u: goto L_cebd4;
      case 0xcebdeu: goto L_cebde;
      case 0xcebe8u: goto L_cebe8;
      case 0xcebf2u: goto L_cebf2;
      case 0xcebf9u: goto L_cebf9;
      case 0xcec00u: goto L_cec00;
      case 0xcec07u: goto L_cec07;
      case 0xcec0eu: goto L_cec0e;
      case 0xcec15u: goto L_cec15;
      case 0xcec1cu: goto L_cec1c;
      case 0xcec4cu: goto L_cec4c;
      default: x86_jump(c, t); return; } }
L_ceab0:
    X86_TICK(c, 9);
    // 0ceab0  mov edi, 0x939c
    X86_AT(c, 0xceab0u);
    c.r[7] = 0x939Cu;
    // 0ceab5  jmp 0xcec4c
    X86_AT(c, 0xceab5u);
    goto L_cec4c;
L_ceaba:
    X86_TICK(c, 7);
    // 0ceaba  cmp bl, 0x86
    X86_AT(c, 0xceabau);
    (void)x86_sub(c, g8(c, 3), 0x86u, 0, 1);
    // 0ceabd  jne 0xceac9
    X86_AT(c, 0xceabdu);
    if (x86_cc(c, 5)) { goto L_ceac9; }
    X86_TICK(c, 9);
    // 0ceabf  mov edi, 0x93b0
    X86_AT(c, 0xceabfu);
    c.r[7] = 0x93B0u;
    // 0ceac4  jmp 0xcec4c
    X86_AT(c, 0xceac4u);
    goto L_cec4c;
L_ceac9:
    X86_TICK(c, 11);
    // 0ceac9  mov edi, 0x93c4
    X86_AT(c, 0xceac9u);
    c.r[7] = 0x93C4u;
    // 0ceace  push 8
    X86_AT(c, 0xceaceu);
    { uint32_t v = 0x8u; push32(c, v); }
    // 0cead0  call 0xb61b4
    X86_AT(c, 0xcead0u);
    push32(c, 0xcead5u); x86_call_known(c, 0xb61b4u, f_000b61b4); X86_RET(c, 0xcead5u);
    X86_TICK(c, 9);
    // 0cead5  add esp, 4
    X86_AT(c, 0xcead5u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0cead8  and eax, eax
    X86_AT(c, 0xcead8u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0ceada  jne 0xceae6
    X86_AT(c, 0xceadau);
    if (x86_cc(c, 5)) { goto L_ceae6; }
    X86_TICK(c, 9);
    // 0ceadc  mov edi, 0x93d4
    X86_AT(c, 0xceadcu);
    c.r[7] = 0x93D4u;
    // 0ceae1  jmp 0xcec4c
    X86_AT(c, 0xceae1u);
    goto L_cec4c;
L_ceae6:
    X86_TICK(c, 9);
    // 0ceae6  push 8
    X86_AT(c, 0xceae6u);
    { uint32_t v = 0x8u; push32(c, v); }
    // 0ceae8  call 0xb61b4
    X86_AT(c, 0xceae8u);
    push32(c, 0xceaedu); x86_call_known(c, 0xb61b4u, f_000b61b4); X86_RET(c, 0xceaedu);
    X86_TICK(c, 9);
    // 0ceaed  add esp, 4
    X86_AT(c, 0xceaedu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0ceaf0  and eax, eax
    X86_AT(c, 0xceaf0u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0ceaf2  jne 0xcec4c
    X86_AT(c, 0xceaf2u);
    if (x86_cc(c, 5)) { goto L_cec4c; }
    X86_TICK(c, 9);
    // 0ceaf8  mov edi, 0x93ec
    X86_AT(c, 0xceaf8u);
    c.r[7] = 0x93ECu;
    // 0ceafd  jmp 0xcec4c
    X86_AT(c, 0xceafdu);
    goto L_cec4c;
L_ceb02:
    X86_TICK(c, 9);
    // 0ceb02  mov edi, 0x9400
    X86_AT(c, 0xceb02u);
    c.r[7] = 0x9400u;
    // 0ceb07  jmp 0xcec4c
    X86_AT(c, 0xceb07u);
    goto L_cec4c;
L_ceb0c:
    X86_TICK(c, 9);
    // 0ceb0c  mov edi, 0x9414
    X86_AT(c, 0xceb0cu);
    c.r[7] = 0x9414u;
    // 0ceb11  jmp 0xcec4c
    X86_AT(c, 0xceb11u);
    goto L_cec4c;
L_ceb16:
    X86_TICK(c, 9);
    // 0ceb16  mov edi, 0x9428
    X86_AT(c, 0xceb16u);
    c.r[7] = 0x9428u;
    // 0ceb1b  jmp 0xcec4c
    X86_AT(c, 0xceb1bu);
    goto L_cec4c;
L_ceb20:
    X86_TICK(c, 9);
    // 0ceb20  mov edi, 0x943c
    X86_AT(c, 0xceb20u);
    c.r[7] = 0x943Cu;
    // 0ceb25  jmp 0xcec4c
    X86_AT(c, 0xceb25u);
    goto L_cec4c;
L_ceb2a:
    X86_TICK(c, 9);
    // 0ceb2a  mov edi, 0x944c
    X86_AT(c, 0xceb2au);
    c.r[7] = 0x944Cu;
    // 0ceb2f  jmp 0xcec4c
    X86_AT(c, 0xceb2fu);
    goto L_cec4c;
L_ceb34:
    X86_TICK(c, 9);
    // 0ceb34  mov edi, 0x9464
    X86_AT(c, 0xceb34u);
    c.r[7] = 0x9464u;
    // 0ceb39  jmp 0xcec4c
    X86_AT(c, 0xceb39u);
    goto L_cec4c;
L_ceb3e:
    X86_TICK(c, 9);
    // 0ceb3e  mov edi, 0x9478
    X86_AT(c, 0xceb3eu);
    c.r[7] = 0x9478u;
    // 0ceb43  jmp 0xcec4c
    X86_AT(c, 0xceb43u);
    goto L_cec4c;
L_ceb48:
    X86_TICK(c, 9);
    // 0ceb48  mov edi, 0x9488
    X86_AT(c, 0xceb48u);
    c.r[7] = 0x9488u;
    // 0ceb4d  jmp 0xcec4c
    X86_AT(c, 0xceb4du);
    goto L_cec4c;
L_ceb52:
    X86_TICK(c, 9);
    // 0ceb52  mov edi, 0x94a0
    X86_AT(c, 0xceb52u);
    c.r[7] = 0x94A0u;
    // 0ceb57  jmp 0xcec4c
    X86_AT(c, 0xceb57u);
    goto L_cec4c;
L_ceb5c:
    X86_TICK(c, 9);
    // 0ceb5c  mov edi, 0x94b4
    X86_AT(c, 0xceb5cu);
    c.r[7] = 0x94B4u;
    // 0ceb61  jmp 0xcec4c
    X86_AT(c, 0xceb61u);
    goto L_cec4c;
L_ceb66:
    X86_TICK(c, 9);
    // 0ceb66  mov edi, 0x94d0
    X86_AT(c, 0xceb66u);
    c.r[7] = 0x94D0u;
    // 0ceb6b  jmp 0xcec4c
    X86_AT(c, 0xceb6bu);
    goto L_cec4c;
L_ceb70:
    X86_TICK(c, 9);
    // 0ceb70  mov edi, 0x94e4
    X86_AT(c, 0xceb70u);
    c.r[7] = 0x94E4u;
    // 0ceb75  jmp 0xcec4c
    X86_AT(c, 0xceb75u);
    goto L_cec4c;
L_ceb7a:
    X86_TICK(c, 9);
    // 0ceb7a  mov edi, 0x94f8
    X86_AT(c, 0xceb7au);
    c.r[7] = 0x94F8u;
    // 0ceb7f  jmp 0xcec4c
    X86_AT(c, 0xceb7fu);
    goto L_cec4c;
L_ceb84:
    X86_TICK(c, 9);
    // 0ceb84  mov edi, 0x9510
    X86_AT(c, 0xceb84u);
    c.r[7] = 0x9510u;
    // 0ceb89  jmp 0xcec4c
    X86_AT(c, 0xceb89u);
    goto L_cec4c;
L_ceb8e:
    X86_TICK(c, 9);
    // 0ceb8e  mov edi, 0x9524
    X86_AT(c, 0xceb8eu);
    c.r[7] = 0x9524u;
    // 0ceb93  jmp 0xcec4c
    X86_AT(c, 0xceb93u);
    goto L_cec4c;
L_ceb98:
    X86_TICK(c, 9);
    // 0ceb98  mov edi, 0x9538
    X86_AT(c, 0xceb98u);
    c.r[7] = 0x9538u;
    // 0ceb9d  jmp 0xcec4c
    X86_AT(c, 0xceb9du);
    goto L_cec4c;
L_ceba2:
    X86_TICK(c, 9);
    // 0ceba2  mov edi, 0x9554
    X86_AT(c, 0xceba2u);
    c.r[7] = 0x9554u;
    // 0ceba7  jmp 0xcec4c
    X86_AT(c, 0xceba7u);
    goto L_cec4c;
L_cebac:
    X86_TICK(c, 9);
    // 0cebac  mov edi, 0x956c
    X86_AT(c, 0xcebacu);
    c.r[7] = 0x956Cu;
    // 0cebb1  jmp 0xcec4c
    X86_AT(c, 0xcebb1u);
    goto L_cec4c;
L_cebb6:
    X86_TICK(c, 9);
    // 0cebb6  mov edi, 0x9584
    X86_AT(c, 0xcebb6u);
    c.r[7] = 0x9584u;
    // 0cebbb  jmp 0xcec4c
    X86_AT(c, 0xcebbbu);
    goto L_cec4c;
L_cebc0:
    X86_TICK(c, 9);
    // 0cebc0  mov edi, 0x9594
    X86_AT(c, 0xcebc0u);
    c.r[7] = 0x9594u;
    // 0cebc5  jmp 0xcec4c
    X86_AT(c, 0xcebc5u);
    goto L_cec4c;
L_cebca:
    X86_TICK(c, 9);
    // 0cebca  mov edi, 0x95b0
    X86_AT(c, 0xcebcau);
    c.r[7] = 0x95B0u;
    // 0cebcf  jmp 0xcec4c
    X86_AT(c, 0xcebcfu);
    goto L_cec4c;
L_cebd4:
    X86_TICK(c, 9);
    // 0cebd4  mov edi, 0x95c8
    X86_AT(c, 0xcebd4u);
    c.r[7] = 0x95C8u;
    // 0cebd9  jmp 0xcec4c
    X86_AT(c, 0xcebd9u);
    goto L_cec4c;
L_cebde:
    X86_TICK(c, 9);
    // 0cebde  mov edi, 0x95e0
    X86_AT(c, 0xcebdeu);
    c.r[7] = 0x95E0u;
    // 0cebe3  jmp 0xcec4c
    X86_AT(c, 0xcebe3u);
    goto L_cec4c;
L_cebe8:
    X86_TICK(c, 9);
    // 0cebe8  mov edi, 0x95fc
    X86_AT(c, 0xcebe8u);
    c.r[7] = 0x95FCu;
    // 0cebed  jmp 0xcec4c
    X86_AT(c, 0xcebedu);
    goto L_cec4c;
L_cebf2:
    X86_TICK(c, 9);
    // 0cebf2  mov edi, 0x9614
    X86_AT(c, 0xcebf2u);
    c.r[7] = 0x9614u;
    // 0cebf7  jmp 0xcec4c
    X86_AT(c, 0xcebf7u);
    goto L_cec4c;
L_cebf9:
    X86_TICK(c, 9);
    // 0cebf9  mov edi, 0x962c
    X86_AT(c, 0xcebf9u);
    c.r[7] = 0x962Cu;
    // 0cebfe  jmp 0xcec4c
    X86_AT(c, 0xcebfeu);
    goto L_cec4c;
L_cec00:
    X86_TICK(c, 9);
    // 0cec00  mov edi, 0x9640
    X86_AT(c, 0xcec00u);
    c.r[7] = 0x9640u;
    // 0cec05  jmp 0xcec4c
    X86_AT(c, 0xcec05u);
    goto L_cec4c;
L_cec07:
    X86_TICK(c, 9);
    // 0cec07  mov edi, 0x9654
    X86_AT(c, 0xcec07u);
    c.r[7] = 0x9654u;
    // 0cec0c  jmp 0xcec4c
    X86_AT(c, 0xcec0cu);
    goto L_cec4c;
L_cec0e:
    X86_TICK(c, 9);
    // 0cec0e  mov edi, 0x9674
    X86_AT(c, 0xcec0eu);
    c.r[7] = 0x9674u;
    // 0cec13  jmp 0xcec4c
    X86_AT(c, 0xcec13u);
    goto L_cec4c;
L_cec15:
    X86_TICK(c, 9);
    // 0cec15  mov edi, 0x969c
    X86_AT(c, 0xcec15u);
    c.r[7] = 0x969Cu;
    // 0cec1a  jmp 0xcec4c
    X86_AT(c, 0xcec1au);
    goto L_cec4c;
L_cec1c:
    X86_TICK(c, 10);
    // 0cec1c  movzx edx, bl
    X86_AT(c, 0xcec1cu);
    c.r[2] = g8(c, 3);
    // 0cec1f  cmp edx, 0x9e
    X86_AT(c, 0xcec1fu);
    (void)x86_sub(c, c.r[2], 0x9Eu, 0, 4);
    // 0cec25  je 0xcec39
    X86_AT(c, 0xcec25u);
    if (x86_cc(c, 4)) { goto L_cec39; }
    X86_TICK(c, 7);
    // 0cec27  cmp edx, 0x9f
    X86_AT(c, 0xcec27u);
    (void)x86_sub(c, c.r[2], 0x9Fu, 0, 4);
    // 0cec2d  je 0xcec40
    X86_AT(c, 0xcec2du);
    if (x86_cc(c, 4)) { goto L_cec40; }
    X86_TICK(c, 7);
    // 0cec2f  cmp edx, 0xa0
    X86_AT(c, 0xcec2fu);
    (void)x86_sub(c, c.r[2], 0xA0u, 0, 4);
    // 0cec35  je 0xcec47
    X86_AT(c, 0xcec35u);
    if (x86_cc(c, 4)) { goto L_cec47; }
    X86_TICK(c, 7);
    // 0cec37  jmp 0xcec4c
    X86_AT(c, 0xcec37u);
    goto L_cec4c;
L_cec39:
    X86_TICK(c, 9);
    // 0cec39  mov edi, 0x96c0
    X86_AT(c, 0xcec39u);
    c.r[7] = 0x96C0u;
    // 0cec3e  jmp 0xcec4c
    X86_AT(c, 0xcec3eu);
    goto L_cec4c;
L_cec40:
    X86_TICK(c, 9);
    // 0cec40  mov edi, 0x96d4
    X86_AT(c, 0xcec40u);
    c.r[7] = 0x96D4u;
    // 0cec45  jmp 0xcec4c
    X86_AT(c, 0xcec45u);
    goto L_cec4c;
L_cec47:
    X86_TICK(c, 2);
    // 0cec47  mov edi, 0x96e8
    X86_AT(c, 0xcec47u);
    c.r[7] = 0x96E8u;
L_cec4c:
    X86_TICK(c, 14);
    // 0cec4c  push edi
    X86_AT(c, 0xcec4cu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0cec4d  push dword ptr [ebp + 8]
    X86_AT(c, 0xcec4du);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, v); }
    // 0cec50  call 0xba428
    X86_AT(c, 0xcec50u);
    push32(c, 0xcec55u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xcec55u);
    X86_TICK(c, 26);
    // 0cec55  add esp, 8
    X86_AT(c, 0xcec55u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0cec58  pop edi
    X86_AT(c, 0xcec58u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0cec59  pop ebx
    X86_AT(c, 0xcec59u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0cec5a  leave 
    X86_AT(c, 0xcec5au);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0cec5b  ret 
    X86_AT(c, 0xcec5bu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xce8e8u, "ran off the end of a function");
}
void f_000cec4c(X86Cpu& c) {
    X86_TICK(c, 14);
    // 0cec4c  push edi
    X86_AT(c, 0xcec4cu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0cec4d  push dword ptr [ebp + 8]
    X86_AT(c, 0xcec4du);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, v); }
    // 0cec50  call 0xba428
    X86_AT(c, 0xcec50u);
    push32(c, 0xcec55u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xcec55u);
    X86_TICK(c, 26);
    // 0cec55  add esp, 8
    X86_AT(c, 0xcec55u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0cec58  pop edi
    X86_AT(c, 0xcec58u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0cec59  pop ebx
    X86_AT(c, 0xcec59u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0cec5a  leave 
    X86_AT(c, 0xcec5au);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0cec5b  ret 
    X86_AT(c, 0xcec5bu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xcec4cu, "ran off the end of a function");
}
void f_000cec5c(X86Cpu& c) {
    X86_TICK(c, 45);
    // 0cec5c  push ebp
    X86_AT(c, 0xcec5cu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0cec5d  mov ebp, esp
    X86_AT(c, 0xcec5du);
    c.r[5] = c.r[4];
    // 0cec5f  sub esp, 0x10
    X86_AT(c, 0xcec5fu);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, 0x10u, 0, 4); }
    // 0cec62  push ebx
    X86_AT(c, 0xcec62u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0cec63  push esi
    X86_AT(c, 0xcec63u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0cec64  push edi
    X86_AT(c, 0xcec64u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0cec65  mov eax, dword ptr [ebp + 8]
    X86_AT(c, 0xcec65u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0cec68  mov edx, dword ptr [eax*4 + 0xa4935]
    X86_AT(c, 0xcec68u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[0] * 4 + 0xA4935u)));
    // 0cec6f  mov dword ptr [ebp - 4], edx
    X86_AT(c, 0xcec6fu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[2]);
    // 0cec72  mov eax, dword ptr [eax*4 + 0xa4955]
    X86_AT(c, 0xcec72u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[0] * 4 + 0xA4955u)));
    // 0cec79  mov dword ptr [ebp - 8], eax
    X86_AT(c, 0xcec79u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), c.r[0]);
    // 0cec7c  mov eax, 0xb
    X86_AT(c, 0xcec7cu);
    c.r[0] = 0xBu;
    // 0cec81  mov dword ptr [ebp - 0x10], eax
    X86_AT(c, 0xcec81u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u)), c.r[0]);
    // 0cec84  mov dword ptr [ebp - 0xc], eax
    X86_AT(c, 0xcec84u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)), c.r[0]);
    // 0cec87  sub eax, eax
    X86_AT(c, 0xcec87u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0cec89  mov edx, dword ptr [ebp + 0xc]
    X86_AT(c, 0xcec89u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0cec8c  mov dword ptr [edx], eax
    X86_AT(c, 0xcec8cu);
    wr32((c.sbase[3] + (uint32_t)(c.r[2])), c.r[0]);
    // 0cec8e  xchg edi, eax
    X86_AT(c, 0xcec8eu);
    { uint32_t t = c.r[7]; c.r[7] = c.r[0]; c.r[0] = t; }
L_cec8f:
    X86_TICK(c, 7);
    // 0cec8f  cmp edi, 4
    X86_AT(c, 0xcec8fu);
    (void)x86_sub(c, c.r[7], 0x4u, 0, 4);
    // 0cec92  jge 0xcecec
    X86_AT(c, 0xcec92u);
    if (x86_cc(c, 13)) { goto L_cecec; }
    X86_TICK(c, 12);
    // 0cec94  cmp dword ptr [edi*4 + 0xa4a05], 0
    X86_AT(c, 0xcec94u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[7] * 4 + 0xA4A05u))), 0x0u, 0, 4);
    // 0cec9c  jl 0xcece9
    X86_AT(c, 0xcec9cu);
    if (x86_cc(c, 12)) { goto L_cece9; }
    X86_TICK(c, 17);
    // 0cec9e  mov esi, dword ptr [ebp - 4]
    X86_AT(c, 0xcec9eu);
    c.r[6] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0ceca1  sub esi, dword ptr [edi*4 + 0xa49f5]
    X86_AT(c, 0xceca1u);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[7] * 4 + 0xA49F5u))), 0, 4); }
    // 0ceca8  and esi, esi
    X86_AT(c, 0xceca8u);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & c.r[6], 4); }
    // 0cecaa  jge 0xcecae
    X86_AT(c, 0xcecaau);
    if (x86_cc(c, 13)) { goto L_cecae; }
    X86_TICK(c, 2);
    // 0cecac  neg esi
    X86_AT(c, 0xcecacu);
    { uint32_t v = c.r[6]; c.r[6] = x86_neg(c, v, 4); }
L_cecae:
    X86_TICK(c, 17);
    // 0cecae  mov ebx, dword ptr [ebp - 8]
    X86_AT(c, 0xcecaeu);
    c.r[3] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)));
    // 0cecb1  sub ebx, dword ptr [edi*4 + 0xa4a05]
    X86_AT(c, 0xcecb1u);
    { uint32_t v = c.r[3]; c.r[3] = x86_sub(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[7] * 4 + 0xA4A05u))), 0, 4); }
    // 0cecb8  and ebx, ebx
    X86_AT(c, 0xcecb8u);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & c.r[3], 4); }
    // 0cecba  jge 0xcecbe
    X86_AT(c, 0xcecbau);
    if (x86_cc(c, 13)) { goto L_cecbe; }
    X86_TICK(c, 2);
    // 0cecbc  neg ebx
    X86_AT(c, 0xcecbcu);
    { uint32_t v = c.r[3]; c.r[3] = x86_neg(c, v, 4); }
L_cecbe:
    X86_TICK(c, 11);
    // 0cecbe  cmp esi, dword ptr [ebp - 0xc]
    X86_AT(c, 0xcecbeu);
    (void)x86_sub(c, c.r[6], rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u))), 0, 4);
    // 0cecc1  jge 0xceccd
    X86_AT(c, 0xcecc1u);
    if (x86_cc(c, 13)) { goto L_ceccd; }
    X86_TICK(c, 15);
    // 0cecc3  mov eax, dword ptr [ebp + 0xc]
    X86_AT(c, 0xcecc3u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0cecc6  mov dword ptr [eax], edi
    X86_AT(c, 0xcecc6u);
    wr32((c.sbase[3] + (uint32_t)(c.r[0])), c.r[7]);
    // 0cecc8  mov dword ptr [ebp - 0xc], esi
    X86_AT(c, 0xcecc8u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)), c.r[6]);
    // 0ceccb  jmp 0xcecdc
    X86_AT(c, 0xceccbu);
    goto L_cecdc;
L_ceccd:
    X86_TICK(c, 11);
    // 0ceccd  cmp esi, dword ptr [ebp - 0xc]
    X86_AT(c, 0xceccdu);
    (void)x86_sub(c, c.r[6], rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u))), 0, 4);
    // 0cecd0  jne 0xcecdf
    X86_AT(c, 0xcecd0u);
    if (x86_cc(c, 5)) { goto L_cecdf; }
    X86_TICK(c, 11);
    // 0cecd2  cmp ebx, dword ptr [ebp - 0x10]
    X86_AT(c, 0xcecd2u);
    (void)x86_sub(c, c.r[3], rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u))), 0, 4);
    // 0cecd5  jge 0xcecdf
    X86_AT(c, 0xcecd5u);
    if (x86_cc(c, 13)) { goto L_cecdf; }
    X86_TICK(c, 6);
    // 0cecd7  mov eax, dword ptr [ebp + 0xc]
    X86_AT(c, 0xcecd7u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0cecda  mov dword ptr [eax], edi
    X86_AT(c, 0xcecdau);
    wr32((c.sbase[3] + (uint32_t)(c.r[0])), c.r[7]);
L_cecdc:
    X86_TICK(c, 2);
    // 0cecdc  mov dword ptr [ebp - 0x10], ebx
    X86_AT(c, 0xcecdcu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u)), c.r[3]);
L_cecdf:
    X86_TICK(c, 9);
    // 0cecdf  push 0xa
    X86_AT(c, 0xcecdfu);
    { uint32_t v = 0xAu; push32(c, v); }
    // 0cece1  call 0xbebbc
    X86_AT(c, 0xcece1u);
    push32(c, 0xcece6u); x86_call_known(c, 0xbebbcu, f_000bebbc); X86_RET(c, 0xcece6u);
    X86_TICK(c, 2);
    // 0cece6  add esp, 4
    X86_AT(c, 0xcece6u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
L_cece9:
    X86_TICK(c, 9);
    // 0cece9  inc edi
    X86_AT(c, 0xcece9u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0cecea  jmp 0xcec8f
    X86_AT(c, 0xceceau);
    X86_POLL(c, 0xcec8fu); goto L_cec8f;
L_cecec:
    X86_TICK(c, 35);
    // 0cecec  mov eax, dword ptr [ebp + 0xc]
    X86_AT(c, 0xcececu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0cecef  mov eax, dword ptr [eax]
    X86_AT(c, 0xcecefu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[0])));
    // 0cecf1  mov esi, dword ptr [ebp - 4]
    X86_AT(c, 0xcecf1u);
    c.r[6] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0cecf4  sub esi, dword ptr [eax*4 + 0xa49f5]
    X86_AT(c, 0xcecf4u);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[0] * 4 + 0xA49F5u))), 0, 4); }
    // 0cecfb  mov ebx, dword ptr [ebp - 8]
    X86_AT(c, 0xcecfbu);
    c.r[3] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)));
    // 0cecfe  sub ebx, dword ptr [eax*4 + 0xa4a05]
    X86_AT(c, 0xcecfeu);
    { uint32_t v = c.r[3]; c.r[3] = x86_sub(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[0] * 4 + 0xA4A05u))), 0, 4); }
    // 0ced05  and esi, esi
    X86_AT(c, 0xced05u);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & c.r[6], 4); }
    // 0ced07  jle 0xced14
    X86_AT(c, 0xced07u);
    if (x86_cc(c, 14)) { goto L_ced14; }
    X86_TICK(c, 13);
    // 0ced09  mov eax, dword ptr [ebp + 0x10]
    X86_AT(c, 0xced09u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u)));
    // 0ced0c  mov dword ptr [eax], 0xffffffff
    X86_AT(c, 0xced0cu);
    wr32((c.sbase[3] + (uint32_t)(c.r[0])), 0xFFFFFFFFu);
    // 0ced12  jmp 0xced2c
    X86_AT(c, 0xced12u);
    goto L_ced2c;
L_ced14:
    X86_TICK(c, 7);
    // 0ced14  and esi, esi
    X86_AT(c, 0xced14u);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & c.r[6], 4); }
    // 0ced16  jne 0xced23
    X86_AT(c, 0xced16u);
    if (x86_cc(c, 5)) { goto L_ced23; }
    X86_TICK(c, 13);
    // 0ced18  mov eax, dword ptr [ebp + 0x10]
    X86_AT(c, 0xced18u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u)));
    // 0ced1b  mov dword ptr [eax], 0
    X86_AT(c, 0xced1bu);
    wr32((c.sbase[3] + (uint32_t)(c.r[0])), 0x0u);
    // 0ced21  jmp 0xced2c
    X86_AT(c, 0xced21u);
    goto L_ced2c;
L_ced23:
    X86_TICK(c, 6);
    // 0ced23  mov eax, dword ptr [ebp + 0x10]
    X86_AT(c, 0xced23u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u)));
    // 0ced26  mov dword ptr [eax], 1
    X86_AT(c, 0xced26u);
    wr32((c.sbase[3] + (uint32_t)(c.r[0])), 0x1u);
L_ced2c:
    X86_TICK(c, 7);
    // 0ced2c  and ebx, ebx
    X86_AT(c, 0xced2cu);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & c.r[3], 4); }
    // 0ced2e  jle 0xced3b
    X86_AT(c, 0xced2eu);
    if (x86_cc(c, 14)) { goto L_ced3b; }
    X86_TICK(c, 13);
    // 0ced30  mov eax, dword ptr [ebp + 0x14]
    X86_AT(c, 0xced30u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x14u)));
    // 0ced33  mov dword ptr [eax], 0xffffffff
    X86_AT(c, 0xced33u);
    wr32((c.sbase[3] + (uint32_t)(c.r[0])), 0xFFFFFFFFu);
    // 0ced39  jmp 0xced53
    X86_AT(c, 0xced39u);
    goto L_ced53;
L_ced3b:
    X86_TICK(c, 7);
    // 0ced3b  and ebx, ebx
    X86_AT(c, 0xced3bu);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & c.r[3], 4); }
    // 0ced3d  jne 0xced4a
    X86_AT(c, 0xced3du);
    if (x86_cc(c, 5)) { goto L_ced4a; }
    X86_TICK(c, 13);
    // 0ced3f  mov eax, dword ptr [ebp + 0x14]
    X86_AT(c, 0xced3fu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x14u)));
    // 0ced42  mov dword ptr [eax], 0
    X86_AT(c, 0xced42u);
    wr32((c.sbase[3] + (uint32_t)(c.r[0])), 0x0u);
    // 0ced48  jmp 0xced53
    X86_AT(c, 0xced48u);
    goto L_ced53;
L_ced4a:
    X86_TICK(c, 6);
    // 0ced4a  mov eax, dword ptr [ebp + 0x14]
    X86_AT(c, 0xced4au);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x14u)));
    // 0ced4d  mov dword ptr [eax], 1
    X86_AT(c, 0xced4du);
    wr32((c.sbase[3] + (uint32_t)(c.r[0])), 0x1u);
L_ced53:
    X86_TICK(c, 39);
    // 0ced53  mov eax, dword ptr [ebp - 8]
    X86_AT(c, 0xced53u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)));
    // 0ced56  mov ecx, dword ptr [ebp + 0x14]
    X86_AT(c, 0xced56u);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x14u)));
    // 0ced59  add eax, dword ptr [ecx]
    X86_AT(c, 0xced59u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[1]))), 0, 4); }
    // 0ced5b  push eax
    X86_AT(c, 0xced5bu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ced5c  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0xced5cu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0ced5f  mov edx, dword ptr [ebp + 0x10]
    X86_AT(c, 0xced5fu);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u)));
    // 0ced62  add eax, dword ptr [edx]
    X86_AT(c, 0xced62u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[2]))), 0, 4); }
    // 0ced64  push eax
    X86_AT(c, 0xced64u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ced65  call 0xc80f0
    X86_AT(c, 0xced65u);
    push32(c, 0xced6au); x86_call_known(c, 0xc80f0u, f_000c80f0); X86_RET(c, 0xced6au);
    X86_TICK(c, 9);
    // 0ced6a  add esp, 8
    X86_AT(c, 0xced6au);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0ced6d  inc eax
    X86_AT(c, 0xced6du);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0ced6e  jne 0xceda7
    X86_AT(c, 0xced6eu);
    if (x86_cc(c, 5)) { goto L_ceda7; }
    X86_TICK(c, 63);
    // 0ced70  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0xced70u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0ced73  mov ecx, dword ptr [ebp + 0x10]
    X86_AT(c, 0xced73u);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u)));
    // 0ced76  add eax, dword ptr [ecx]
    X86_AT(c, 0xced76u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[1]))), 0, 4); }
    // 0ced78  mov edx, dword ptr [ebp + 0x18]
    X86_AT(c, 0xced78u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x18u)));
    // 0ced7b  mov dword ptr [edx], eax
    X86_AT(c, 0xced7bu);
    wr32((c.sbase[3] + (uint32_t)(c.r[2])), c.r[0]);
    // 0ced7d  mov eax, dword ptr [ebp - 8]
    X86_AT(c, 0xced7du);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)));
    // 0ced80  mov ecx, dword ptr [ebp + 0x14]
    X86_AT(c, 0xced80u);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x14u)));
    // 0ced83  add eax, dword ptr [ecx]
    X86_AT(c, 0xced83u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[1]))), 0, 4); }
    // 0ced85  mov ecx, dword ptr [ebp + 0x1c]
    X86_AT(c, 0xced85u);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x1Cu)));
    // 0ced88  mov dword ptr [ecx], eax
    X86_AT(c, 0xced88u);
    wr32((c.sbase[3] + (uint32_t)(c.r[1])), c.r[0]);
    // 0ced8a  mov ecx, dword ptr [ebp + 0xc]
    X86_AT(c, 0xced8au);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0ced8d  mov ecx, dword ptr [ecx]
    X86_AT(c, 0xced8du);
    c.r[1] = rd32((c.sbase[3] + (uint32_t)(c.r[1])));
    // 0ced8f  mov edx, dword ptr [edx]
    X86_AT(c, 0xced8fu);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[2])));
    // 0ced91  cmp edx, dword ptr [ecx*4 + 0xa49f5]
    X86_AT(c, 0xced91u);
    (void)x86_sub(c, c.r[2], rd32((c.sbase[3] + (uint32_t)(c.r[1] * 4 + 0xA49F5u))), 0, 4);
    // 0ced98  jne 0xcedc3
    X86_AT(c, 0xced98u);
    if (x86_cc(c, 5)) { goto L_cedc3; }
    X86_TICK(c, 11);
    // 0ced9a  cmp eax, dword ptr [ecx*4 + 0xa4a05]
    X86_AT(c, 0xced9au);
    (void)x86_sub(c, c.r[0], rd32((c.sbase[3] + (uint32_t)(c.r[1] * 4 + 0xA4A05u))), 0, 4);
    // 0ceda1  jne 0xcedc3
    X86_AT(c, 0xceda1u);
    if (x86_cc(c, 5)) { goto L_cedc3; }
    X86_TICK(c, 9);
    // 0ceda3  sub eax, eax
    X86_AT(c, 0xceda3u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0ceda5  jmp 0xcedc8
    X86_AT(c, 0xceda5u);
    goto L_cedc8;
L_ceda7:
    X86_TICK(c, 34);
    // 0ceda7  sub eax, eax
    X86_AT(c, 0xceda7u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0ceda9  mov edx, dword ptr [ebp + 0x14]
    X86_AT(c, 0xceda9u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x14u)));
    // 0cedac  mov dword ptr [edx], eax
    X86_AT(c, 0xcedacu);
    wr32((c.sbase[3] + (uint32_t)(c.r[2])), c.r[0]);
    // 0cedae  mov edx, dword ptr [ebp + 0x10]
    X86_AT(c, 0xcedaeu);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u)));
    // 0cedb1  mov dword ptr [edx], eax
    X86_AT(c, 0xcedb1u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2])), c.r[0]);
    // 0cedb3  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0xcedb3u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0cedb6  mov edx, dword ptr [ebp + 0x18]
    X86_AT(c, 0xcedb6u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x18u)));
    // 0cedb9  mov dword ptr [edx], eax
    X86_AT(c, 0xcedb9u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2])), c.r[0]);
    // 0cedbb  mov eax, dword ptr [ebp - 8]
    X86_AT(c, 0xcedbbu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)));
    // 0cedbe  mov edx, dword ptr [ebp + 0x1c]
    X86_AT(c, 0xcedbeu);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x1Cu)));
    // 0cedc1  mov dword ptr [edx], eax
    X86_AT(c, 0xcedc1u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2])), c.r[0]);
L_cedc3:
    X86_TICK(c, 2);
    // 0cedc3  mov eax, 0xffffffff
    X86_AT(c, 0xcedc3u);
    c.r[0] = 0xFFFFFFFFu;
L_cedc8:
    X86_TICK(c, 28);
    // 0cedc8  pop edi
    X86_AT(c, 0xcedc8u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0cedc9  pop esi
    X86_AT(c, 0xcedc9u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0cedca  pop ebx
    X86_AT(c, 0xcedcau);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0cedcb  leave 
    X86_AT(c, 0xcedcbu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0cedcc  ret 
    X86_AT(c, 0xcedccu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xcec5cu, "ran off the end of a function");
}
void f_000cedd0(X86Cpu& c) {
    X86_TICK(c, 21);
    // 0cedd0  push ebp
    X86_AT(c, 0xcedd0u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0cedd1  mov ebp, esp
    X86_AT(c, 0xcedd1u);
    c.r[5] = c.r[4];
    // 0cedd3  sub esp, 8
    X86_AT(c, 0xcedd3u);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, 0x8u, 0, 4); }
    // 0cedd6  push ebx
    X86_AT(c, 0xcedd6u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0cedd7  push esi
    X86_AT(c, 0xcedd7u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0cedd8  push edi
    X86_AT(c, 0xcedd8u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0cedd9  push 4
    X86_AT(c, 0xcedd9u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ceddb  call 0xb607c
    X86_AT(c, 0xceddbu);
    push32(c, 0xcede0u); x86_call_known(c, 0xb607cu, f_000b607c); X86_RET(c, 0xcede0u);
    X86_TICK(c, 9);
    // 0cede0  push 2
    X86_AT(c, 0xcede0u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0cede2  call 0xbebbc
    X86_AT(c, 0xcede2u);
    push32(c, 0xcede7u); x86_call_known(c, 0xbebbcu, f_000bebbc); X86_RET(c, 0xcede7u);
    X86_TICK(c, 36);
    // 0cede7  mov eax, dword ptr [ebp + 8]
    X86_AT(c, 0xcede7u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0cedea  mov edi, dword ptr [eax*4 + 0xa4935]
    X86_AT(c, 0xcedeau);
    c.r[7] = rd32((c.sbase[3] + (uint32_t)(c.r[0] * 4 + 0xA4935u)));
    // 0cedf1  mov esi, dword ptr [eax*4 + 0xa4955]
    X86_AT(c, 0xcedf1u);
    c.r[6] = rd32((c.sbase[3] + (uint32_t)(c.r[0] * 4 + 0xA4955u)));
    // 0cedf8  mov eax, dword ptr [0x458a8]
    X86_AT(c, 0xcedf8u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x458A8u)));
    // 0cedfd  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0xcedfdu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
    // 0cee00  inc dword ptr [0x458a8]
    X86_AT(c, 0xcee00u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x458A8u)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0cee06  lea eax, [eax + eax*2]
    X86_AT(c, 0xcee06u);
    c.r[0] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0cee09  mov dword ptr [eax*4 + 0x458b4], 0x8b
    X86_AT(c, 0xcee09u);
    wr32((c.sbase[3] + (uint32_t)(c.r[0] * 4 + 0x458B4u)), 0x8Bu);
    // 0cee14  mov dword ptr [ebp - 8], 0xffffffff
    X86_AT(c, 0xcee14u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), 0xFFFFFFFFu);
    // 0cee1b  mov dword ptr [eax*4 + 0x458ac], edi
    X86_AT(c, 0xcee1bu);
    wr32((c.sbase[3] + (uint32_t)(c.r[0] * 4 + 0x458ACu)), c.r[7]);
    // 0cee22  mov dword ptr [eax*4 + 0x458b0], esi
    X86_AT(c, 0xcee22u);
    wr32((c.sbase[3] + (uint32_t)(c.r[0] * 4 + 0x458B0u)), c.r[6]);
    // 0cee29  add esp, 8
    X86_AT(c, 0xcee29u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
L_cee2c:
    X86_TICK(c, 31);
    // 0cee2c  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0xcee2cu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0cee2f  lea eax, [eax + eax*2]
    X86_AT(c, 0xcee2fu);
    c.r[0] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0cee32  add edi, dword ptr [ebp + 0xc]
    X86_AT(c, 0xcee32u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))), 0, 4); }
    // 0cee35  mov dword ptr [eax*4 + 0x458ac], edi
    X86_AT(c, 0xcee35u);
    wr32((c.sbase[3] + (uint32_t)(c.r[0] * 4 + 0x458ACu)), c.r[7]);
    // 0cee3c  add esi, dword ptr [ebp + 0x10]
    X86_AT(c, 0xcee3cu);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u))), 0, 4); }
    // 0cee3f  mov dword ptr [eax*4 + 0x458b0], esi
    X86_AT(c, 0xcee3fu);
    wr32((c.sbase[3] + (uint32_t)(c.r[0] * 4 + 0x458B0u)), c.r[6]);
    // 0cee46  push 0
    X86_AT(c, 0xcee46u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0cee48  call 0xbdea8
    X86_AT(c, 0xcee48u);
    push32(c, 0xcee4du); x86_call_known(c, 0xbdea8u, f_000bdea8); X86_RET(c, 0xcee4du);
    X86_TICK(c, 4);
    // 0cee4d  sub ebx, ebx
    X86_AT(c, 0xcee4du);
    { uint32_t v = c.r[3]; c.r[3] = x86_sub(c, v, c.r[3], 0, 4); }
    // 0cee4f  add esp, 4
    X86_AT(c, 0xcee4fu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
L_cee52:
    X86_TICK(c, 7);
    // 0cee52  cmp ebx, 4
    X86_AT(c, 0xcee52u);
    (void)x86_sub(c, c.r[3], 0x4u, 0, 4);
    // 0cee55  jge 0xcee7b
    X86_AT(c, 0xcee55u);
    if (x86_cc(c, 13)) { goto L_cee7b; }
    X86_TICK(c, 11);
    // 0cee57  mov eax, dword ptr [ebx*4 + 0xa4a05]
    X86_AT(c, 0xcee57u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3] * 4 + 0xA4A05u)));
    // 0cee5e  and eax, eax
    X86_AT(c, 0xcee5eu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0cee60  jl 0xcee78
    X86_AT(c, 0xcee60u);
    if (x86_cc(c, 12)) { goto L_cee78; }
    X86_TICK(c, 11);
    // 0cee62  cmp edi, dword ptr [ebx*4 + 0xa49f5]
    X86_AT(c, 0xcee62u);
    (void)x86_sub(c, c.r[7], rd32((c.sbase[3] + (uint32_t)(c.r[3] * 4 + 0xA49F5u))), 0, 4);
    // 0cee69  jne 0xcee78
    X86_AT(c, 0xcee69u);
    if (x86_cc(c, 5)) { goto L_cee78; }
    X86_TICK(c, 7);
    // 0cee6b  cmp esi, eax
    X86_AT(c, 0xcee6bu);
    (void)x86_sub(c, c.r[6], c.r[0], 0, 4);
    // 0cee6d  jne 0xcee78
    X86_AT(c, 0xcee6du);
    if (x86_cc(c, 5)) { goto L_cee78; }
    X86_TICK(c, 9);
    // 0cee6f  mov dword ptr [ebp - 8], 0
    X86_AT(c, 0xcee6fu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), 0x0u);
    // 0cee76  jmp 0xcee7b
    X86_AT(c, 0xcee76u);
    goto L_cee7b;
L_cee78:
    X86_TICK(c, 9);
    // 0cee78  inc ebx
    X86_AT(c, 0xcee78u);
    { uint32_t v = c.r[3]; c.r[3] = x86_inc(c, v, 4); }
    // 0cee79  jmp 0xcee52
    X86_AT(c, 0xcee79u);
    X86_POLL(c, 0xcee52u); goto L_cee52;
L_cee7b:
    X86_TICK(c, 12);
    // 0cee7b  cmp dword ptr [ebp - 8], 0
    X86_AT(c, 0xcee7bu);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u))), 0x0u, 0, 4);
    // 0cee7f  je 0xcee95
    X86_AT(c, 0xcee7fu);
    if (x86_cc(c, 4)) { goto L_cee95; }
    X86_TICK(c, 7);
    // 0cee81  and edi, edi
    X86_AT(c, 0xcee81u);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & c.r[7], 4); }
    // 0cee83  je 0xceeb3
    X86_AT(c, 0xcee83u);
    if (x86_cc(c, 4)) { goto L_ceeb3; }
    X86_TICK(c, 7);
    // 0cee85  cmp edi, 0xa
    X86_AT(c, 0xcee85u);
    (void)x86_sub(c, c.r[7], 0xAu, 0, 4);
    // 0cee88  je 0xceeb3
    X86_AT(c, 0xcee88u);
    if (x86_cc(c, 4)) { goto L_ceeb3; }
    X86_TICK(c, 7);
    // 0cee8a  and esi, esi
    X86_AT(c, 0xcee8au);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & c.r[6], 4); }
    // 0cee8c  je 0xceeb3
    X86_AT(c, 0xcee8cu);
    if (x86_cc(c, 4)) { goto L_ceeb3; }
    X86_TICK(c, 7);
    // 0cee8e  cmp esi, 0xa
    X86_AT(c, 0xcee8eu);
    (void)x86_sub(c, c.r[6], 0xAu, 0, 4);
    // 0cee91  je 0xceeb3
    X86_AT(c, 0xcee91u);
    if (x86_cc(c, 4)) { goto L_ceeb3; }
    X86_TICK(c, 7);
    // 0cee93  jmp 0xcee2c
    X86_AT(c, 0xcee93u);
    X86_POLL(c, 0xcee2cu); goto L_cee2c;
L_cee95:
    X86_TICK(c, 9);
    // 0cee95  push 8
    X86_AT(c, 0xcee95u);
    { uint32_t v = 0x8u; push32(c, v); }
    // 0cee97  call 0xb607c
    X86_AT(c, 0xcee97u);
    push32(c, 0xcee9cu); x86_call_known(c, 0xb607cu, f_000b607c); X86_RET(c, 0xcee9cu);
    X86_TICK(c, 9);
    // 0cee9c  push 0xffffffff
    X86_AT(c, 0xcee9cu);
    { uint32_t v = 0xFFFFFFFFu; push32(c, v); }
    // 0cee9e  call 0xb7f6c
    X86_AT(c, 0xcee9eu);
    push32(c, 0xceea3u); x86_call_known(c, 0xb7f6cu, f_000b7f6c); X86_RET(c, 0xceea3u);
    X86_TICK(c, 9);
    // 0ceea3  push ebx
    X86_AT(c, 0xceea3u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0ceea4  call 0xcf3fc
    X86_AT(c, 0xceea4u);
    push32(c, 0xceea9u); x86_call_known(c, 0xcf3fcu, f_000cf3fc); X86_RET(c, 0xceea9u);
    X86_TICK(c, 9);
    // 0ceea9  push 0
    X86_AT(c, 0xceea9u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0ceeab  call 0xbdea8
    X86_AT(c, 0xceeabu);
    push32(c, 0xceeb0u); x86_call_known(c, 0xbdea8u, f_000bdea8); X86_RET(c, 0xceeb0u);
    X86_TICK(c, 2);
    // 0ceeb0  add esp, 0x10
    X86_AT(c, 0xceeb0u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
L_ceeb3:
    X86_TICK(c, 28);
    // 0ceeb3  pop edi
    X86_AT(c, 0xceeb3u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0ceeb4  pop esi
    X86_AT(c, 0xceeb4u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0ceeb5  pop ebx
    X86_AT(c, 0xceeb5u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0ceeb6  leave 
    X86_AT(c, 0xceeb6u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0ceeb7  ret 
    X86_AT(c, 0xceeb7u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xcedd0u, "ran off the end of a function");
}
}

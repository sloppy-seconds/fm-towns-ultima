#include "p_tbios_funcs.h"
namespace p_tbios {
void f_000105da(X86Cpu& c) {
    X86_TICK(c, 18);
    // 0105da  mov dword ptr [edi + 0x3a], 0xf000f
    X86_AT(c, 0x105dau);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] + 0x3Au)), 0xF000Fu);
    // 0105e1  push ebx
    X86_AT(c, 0x105e1u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0105e2  push edx
    X86_AT(c, 0x105e2u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0105e3  cmp byte ptr [edi + 0x4d], 0
    X86_AT(c, 0x105e3u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x4Du))), 0x0u, 0, 1);
    // 0105e7  je 0x105ee
    X86_AT(c, 0x105e7u);
    if (x86_cc(c, 4)) { goto L_105ee; }
    X86_TICK(c, 7);
    // 0105e9  call 0x10bd0
    X86_AT(c, 0x105e9u);
    push32(c, 0x105eeu); f_00010bd0(c); X86_RET(c, 0x105eeu);
L_105ee:
    X86_TICK(c, 24);
    // 0105ee  pop edx
    X86_AT(c, 0x105eeu);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 0105ef  pop ebx
    X86_AT(c, 0x105efu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0105f0  popfd 
    X86_AT(c, 0x105f0u);
    x86_popfd(c, 4);
    // 0105f1  ret 
    X86_AT(c, 0x105f1u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x105dau, "ran off the end of a function");
}
void f_000105e1(X86Cpu& c) {
    X86_TICK(c, 16);
    // 0105e1  push ebx
    X86_AT(c, 0x105e1u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0105e2  push edx
    X86_AT(c, 0x105e2u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0105e3  cmp byte ptr [edi + 0x4d], 0
    X86_AT(c, 0x105e3u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x4Du))), 0x0u, 0, 1);
    // 0105e7  je 0x105ee
    X86_AT(c, 0x105e7u);
    if (x86_cc(c, 4)) { goto L_105ee; }
    X86_TICK(c, 7);
    // 0105e9  call 0x10bd0
    X86_AT(c, 0x105e9u);
    push32(c, 0x105eeu); f_00010bd0(c); X86_RET(c, 0x105eeu);
L_105ee:
    X86_TICK(c, 24);
    // 0105ee  pop edx
    X86_AT(c, 0x105eeu);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 0105ef  pop ebx
    X86_AT(c, 0x105efu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0105f0  popfd 
    X86_AT(c, 0x105f0u);
    x86_popfd(c, 4);
    // 0105f1  ret 
    X86_AT(c, 0x105f1u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x105e1u, "ran off the end of a function");
}
void f_000105e2(X86Cpu& c) {
    X86_TICK(c, 14);
    // 0105e2  push edx
    X86_AT(c, 0x105e2u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0105e3  cmp byte ptr [edi + 0x4d], 0
    X86_AT(c, 0x105e3u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x4Du))), 0x0u, 0, 1);
    // 0105e7  je 0x105ee
    X86_AT(c, 0x105e7u);
    if (x86_cc(c, 4)) { goto L_105ee; }
    X86_TICK(c, 7);
    // 0105e9  call 0x10bd0
    X86_AT(c, 0x105e9u);
    push32(c, 0x105eeu); f_00010bd0(c); X86_RET(c, 0x105eeu);
L_105ee:
    X86_TICK(c, 24);
    // 0105ee  pop edx
    X86_AT(c, 0x105eeu);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 0105ef  pop ebx
    X86_AT(c, 0x105efu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0105f0  popfd 
    X86_AT(c, 0x105f0u);
    x86_popfd(c, 4);
    // 0105f1  ret 
    X86_AT(c, 0x105f1u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x105e2u, "ran off the end of a function");
}
void f_000105e3(X86Cpu& c) {
    X86_TICK(c, 12);
    // 0105e3  cmp byte ptr [edi + 0x4d], 0
    X86_AT(c, 0x105e3u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x4Du))), 0x0u, 0, 1);
    // 0105e7  je 0x105ee
    X86_AT(c, 0x105e7u);
    if (x86_cc(c, 4)) { goto L_105ee; }
    X86_TICK(c, 7);
    // 0105e9  call 0x10bd0
    X86_AT(c, 0x105e9u);
    push32(c, 0x105eeu); f_00010bd0(c); X86_RET(c, 0x105eeu);
L_105ee:
    X86_TICK(c, 24);
    // 0105ee  pop edx
    X86_AT(c, 0x105eeu);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 0105ef  pop ebx
    X86_AT(c, 0x105efu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0105f0  popfd 
    X86_AT(c, 0x105f0u);
    x86_popfd(c, 4);
    // 0105f1  ret 
    X86_AT(c, 0x105f1u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x105e3u, "ran off the end of a function");
}
void f_000105e7(X86Cpu& c) {
    X86_TICK(c, 5);
    // 0105e7  je 0x105ee
    X86_AT(c, 0x105e7u);
    if (x86_cc(c, 4)) { goto L_105ee; }
    X86_TICK(c, 7);
    // 0105e9  call 0x10bd0
    X86_AT(c, 0x105e9u);
    push32(c, 0x105eeu); f_00010bd0(c); X86_RET(c, 0x105eeu);
L_105ee:
    X86_TICK(c, 24);
    // 0105ee  pop edx
    X86_AT(c, 0x105eeu);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 0105ef  pop ebx
    X86_AT(c, 0x105efu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0105f0  popfd 
    X86_AT(c, 0x105f0u);
    x86_popfd(c, 4);
    // 0105f1  ret 
    X86_AT(c, 0x105f1u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x105e7u, "ran off the end of a function");
}
void f_000105ee(X86Cpu& c) {
    X86_TICK(c, 24);
    // 0105ee  pop edx
    X86_AT(c, 0x105eeu);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 0105ef  pop ebx
    X86_AT(c, 0x105efu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0105f0  popfd 
    X86_AT(c, 0x105f0u);
    x86_popfd(c, 4);
    // 0105f1  ret 
    X86_AT(c, 0x105f1u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x105eeu, "ran off the end of a function");
}
void f_000105ef(X86Cpu& c) {
    X86_TICK(c, 20);
    // 0105ef  pop ebx
    X86_AT(c, 0x105efu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0105f0  popfd 
    X86_AT(c, 0x105f0u);
    x86_popfd(c, 4);
    // 0105f1  ret 
    X86_AT(c, 0x105f1u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x105efu, "ran off the end of a function");
}
void f_000105f0(X86Cpu& c) {
    X86_TICK(c, 16);
    // 0105f0  popfd 
    X86_AT(c, 0x105f0u);
    x86_popfd(c, 4);
    // 0105f1  ret 
    X86_AT(c, 0x105f1u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x105f0u, "ran off the end of a function");
}
void f_000105f1(X86Cpu& c) {
    X86_TICK(c, 10);
    // 0105f1  ret 
    X86_AT(c, 0x105f1u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x105f1u, "ran off the end of a function");
}
void f_000106f4(X86Cpu& c) {
    goto L_106f4;
L_10338:
    X86_TICK(c, 12);
    // 010338  mov byte ptr [ebp + 0x21], 0xff
    X86_AT(c, 0x10338u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0x21u)), 0xFFu);
    // 01033c  ret 
    X86_AT(c, 0x1033cu);
    c.eip = pop32(c); return;
L_106f4:
    X86_TICK(c, 7);
    // 0106f4  cmp al, 2
    X86_AT(c, 0x106f4u);
    (void)x86_sub(c, g8(c, 0), 0x2u, 0, 1);
    // 0106f6  jae 0x10783
    X86_AT(c, 0x106f6u);
    if (x86_cc(c, 3)) { goto L_10783; }
    X86_TICK(c, 22);
    // 0106fc  pushfd 
    X86_AT(c, 0x106fcu);
    push32(c, c.fl & 0x00FCFFFFu);
    // 0106fd  cli 
    X86_AT(c, 0x106fdu);
    c.fl &= ~X86_IF;
    // 0106fe  push eax
    X86_AT(c, 0x106feu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0106ff  cmp byte ptr [edi + 0x4d], 0
    X86_AT(c, 0x106ffu);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x4Du))), 0x0u, 0, 1);
    // 010703  je 0x1070a
    X86_AT(c, 0x10703u);
    if (x86_cc(c, 4)) { goto L_1070a; }
    X86_TICK(c, 7);
    // 010705  call 0x10b75
    X86_AT(c, 0x10705u);
    push32(c, 0x1070au); f_00010b75(c); X86_RET(c, 0x1070au);
L_1070a:
    X86_TICK(c, 20);
    // 01070a  pop eax
    X86_AT(c, 0x1070au);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 01070b  movzx ebx, al
    X86_AT(c, 0x1070bu);
    c.r[3] = g8(c, 0);
    // 01070e  xor ebx, 1
    X86_AT(c, 0x1070eu);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v ^ 0x1u, 4); }
    // 010711  cmp al, byte ptr [edi + ebx*1 + 0x4f]
    X86_AT(c, 0x10711u);
    (void)x86_sub(c, g8(c, 0), rd8((c.sbase[3] + (uint32_t)(c.r[7] + c.r[3] + 0x4Fu))), 0, 1);
    // 010715  je 0x10764
    X86_AT(c, 0x10715u);
    if (x86_cc(c, 4)) { goto L_10764; }
    X86_TICK(c, 47);
    // 01071b  movzx edx, al
    X86_AT(c, 0x1071bu);
    c.r[2] = g8(c, 0);
    // 01071e  movzx edx, byte ptr [edi + edx*1 + 0x4f]
    X86_AT(c, 0x1071eu);
    c.r[2] = rd8((c.sbase[3] + (uint32_t)(c.r[7] + c.r[2] + 0x4Fu)));
    // 010723  mov ebx, dword ptr cs:[edx*8 + 0x1065c]
    X86_AT(c, 0x10723u);
    c.r[3] = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 8 + 0x1065Cu)));
    // 01072b  mov word ptr [edi + 4], bx
    X86_AT(c, 0x1072bu);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x4u)), (c.r[3] & 0xFFFFu));
    // 01072f  dec bx
    X86_AT(c, 0x1072fu);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_dec(c, v, 2)); }
    // 010731  mov word ptr [edi + 0x5a], bx
    X86_AT(c, 0x10731u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x5Au)), (c.r[3] & 0xFFFFu));
    // 010735  shr ebx, 0x10
    X86_AT(c, 0x10735u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[3] = r; }
    // 010738  mov word ptr [edi + 6], bx
    X86_AT(c, 0x10738u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x6u)), (c.r[3] & 0xFFFFu));
    // 01073c  dec bx
    X86_AT(c, 0x1073cu);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_dec(c, v, 2)); }
    // 01073e  mov word ptr [edi + 0x5c], bx
    X86_AT(c, 0x1073eu);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x5Cu)), (c.r[3] & 0xFFFFu));
    // 010742  mov ebx, dword ptr cs:[edx*8 + 0x10660]
    X86_AT(c, 0x10742u);
    c.r[3] = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 8 + 0x10660u)));
    // 01074a  mov word ptr [edi], bx
    X86_AT(c, 0x1074au);
    wr16((c.sbase[3] + (uint32_t)(c.r[7])), (c.r[3] & 0xFFFFu));
    // 01074d  mov word ptr [edi + 0x52], bx
    X86_AT(c, 0x1074du);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x52u)), (c.r[3] & 0xFFFFu));
    // 010751  mov word ptr [edi + 0x56], bx
    X86_AT(c, 0x10751u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x56u)), (c.r[3] & 0xFFFFu));
    // 010755  shr ebx, 0x10
    X86_AT(c, 0x10755u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[3] = r; }
    // 010758  mov word ptr [edi + 2], bx
    X86_AT(c, 0x10758u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x2u)), (c.r[3] & 0xFFFFu));
    // 01075c  mov word ptr [edi + 0x54], bx
    X86_AT(c, 0x1075cu);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x54u)), (c.r[3] & 0xFFFFu));
    // 010760  mov word ptr [edi + 0x58], bx
    X86_AT(c, 0x10760u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x58u)), (c.r[3] & 0xFFFFu));
L_10764:
    X86_TICK(c, 23);
    // 010764  push edi
    X86_AT(c, 0x10764u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 010765  push ds
    X86_AT(c, 0x10765u);
    push32(c, c.sreg[3]);
    // 010766  pop gs
    X86_AT(c, 0x10766u);
    x86_load_seg(c, 5, pop32(c) & 0xFFFFu);
    // 010768  mov ah, 5
    X86_AT(c, 0x10768u);
    s8(c, 4, 0x5u);
    // 01076a  add al, 0x40
    X86_AT(c, 0x1076au);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, 0x40u, 0, 1)); }
    // 01076c  add edi, 0x62
    X86_AT(c, 0x1076cu);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x62u, 0, 4); }
    // 01076f  push cs
    X86_AT(c, 0x1076fu);
    push32(c, c.sreg[1]);
    // 010770  call 0x280
    X86_AT(c, 0x10770u);
    push32(c, 0x10775u); f_00000280(c); X86_RET(c, 0x10775u);
    X86_TICK(c, 16);
    // 010775  pop edi
    X86_AT(c, 0x10775u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 010776  cmp byte ptr [edi + 0x4d], 0
    X86_AT(c, 0x10776u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x4Du))), 0x0u, 0, 1);
    // 01077a  je 0x10781
    X86_AT(c, 0x1077au);
    if (x86_cc(c, 4)) { goto L_10781; }
    X86_TICK(c, 7);
    // 01077c  call 0x10bd0
    X86_AT(c, 0x1077cu);
    push32(c, 0x10781u); f_00010bd0(c); X86_RET(c, 0x10781u);
L_10781:
    X86_TICK(c, 16);
    // 010781  popfd 
    X86_AT(c, 0x10781u);
    x86_popfd(c, 4);
    // 010782  ret 
    X86_AT(c, 0x10782u);
    c.eip = pop32(c); return;
L_10783:
    X86_TICK(c, 9);
    // 010783  sub al, 0x80
    X86_AT(c, 0x10783u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_sub(c, v, 0x80u, 0, 1)); }
    // 010785  cmp al, 3
    X86_AT(c, 0x10785u);
    (void)x86_sub(c, g8(c, 0), 0x3u, 0, 1);
    // 010787  ja 0x10338
    X86_AT(c, 0x10787u);
    if (x86_cc(c, 7)) { X86_POLL(c, 0x10338u); goto L_10338; }
    X86_TICK(c, 31);
    // 01078d  pushfd 
    X86_AT(c, 0x1078du);
    push32(c, c.fl & 0x00FCFFFFu);
    // 01078e  cli 
    X86_AT(c, 0x1078eu);
    c.fl &= ~X86_IF;
    // 01078f  push edi
    X86_AT(c, 0x1078fu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 010790  push ds
    X86_AT(c, 0x10790u);
    push32(c, c.sreg[3]);
    // 010791  pop gs
    X86_AT(c, 0x10791u);
    x86_load_seg(c, 5, pop32(c) & 0xFFFFu);
    // 010793  mov ah, 5
    X86_AT(c, 0x10793u);
    s8(c, 4, 0x5u);
    // 010795  add al, 0x80
    X86_AT(c, 0x10795u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, 0x80u, 0, 1)); }
    // 010797  add edi, 0x62
    X86_AT(c, 0x10797u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x62u, 0, 4); }
    // 01079a  push cs
    X86_AT(c, 0x1079au);
    push32(c, c.sreg[1]);
    // 01079b  call 0x280
    X86_AT(c, 0x1079bu);
    push32(c, 0x107a0u); f_00000280(c); X86_RET(c, 0x107a0u);
    X86_TICK(c, 11);
    // 0107a0  pop edi
    X86_AT(c, 0x107a0u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0107a1  call 0x10890
    X86_AT(c, 0x107a1u);
    push32(c, 0x107a6u); f_00010890(c); X86_RET(c, 0x107a6u);
    X86_TICK(c, 16);
    // 0107a6  popfd 
    X86_AT(c, 0x107a6u);
    x86_popfd(c, 4);
    // 0107a7  ret 
    X86_AT(c, 0x107a7u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x106f4u, "ran off the end of a function");
}
void f_000106f6(X86Cpu& c) {
    goto L_106f6;
L_10338:
    X86_TICK(c, 12);
    // 010338  mov byte ptr [ebp + 0x21], 0xff
    X86_AT(c, 0x10338u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0x21u)), 0xFFu);
    // 01033c  ret 
    X86_AT(c, 0x1033cu);
    c.eip = pop32(c); return;
L_106f6:
    X86_TICK(c, 5);
    // 0106f6  jae 0x10783
    X86_AT(c, 0x106f6u);
    if (x86_cc(c, 3)) { goto L_10783; }
    X86_TICK(c, 22);
    // 0106fc  pushfd 
    X86_AT(c, 0x106fcu);
    push32(c, c.fl & 0x00FCFFFFu);
    // 0106fd  cli 
    X86_AT(c, 0x106fdu);
    c.fl &= ~X86_IF;
    // 0106fe  push eax
    X86_AT(c, 0x106feu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0106ff  cmp byte ptr [edi + 0x4d], 0
    X86_AT(c, 0x106ffu);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x4Du))), 0x0u, 0, 1);
    // 010703  je 0x1070a
    X86_AT(c, 0x10703u);
    if (x86_cc(c, 4)) { goto L_1070a; }
    X86_TICK(c, 7);
    // 010705  call 0x10b75
    X86_AT(c, 0x10705u);
    push32(c, 0x1070au); f_00010b75(c); X86_RET(c, 0x1070au);
L_1070a:
    X86_TICK(c, 20);
    // 01070a  pop eax
    X86_AT(c, 0x1070au);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 01070b  movzx ebx, al
    X86_AT(c, 0x1070bu);
    c.r[3] = g8(c, 0);
    // 01070e  xor ebx, 1
    X86_AT(c, 0x1070eu);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v ^ 0x1u, 4); }
    // 010711  cmp al, byte ptr [edi + ebx*1 + 0x4f]
    X86_AT(c, 0x10711u);
    (void)x86_sub(c, g8(c, 0), rd8((c.sbase[3] + (uint32_t)(c.r[7] + c.r[3] + 0x4Fu))), 0, 1);
    // 010715  je 0x10764
    X86_AT(c, 0x10715u);
    if (x86_cc(c, 4)) { goto L_10764; }
    X86_TICK(c, 47);
    // 01071b  movzx edx, al
    X86_AT(c, 0x1071bu);
    c.r[2] = g8(c, 0);
    // 01071e  movzx edx, byte ptr [edi + edx*1 + 0x4f]
    X86_AT(c, 0x1071eu);
    c.r[2] = rd8((c.sbase[3] + (uint32_t)(c.r[7] + c.r[2] + 0x4Fu)));
    // 010723  mov ebx, dword ptr cs:[edx*8 + 0x1065c]
    X86_AT(c, 0x10723u);
    c.r[3] = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 8 + 0x1065Cu)));
    // 01072b  mov word ptr [edi + 4], bx
    X86_AT(c, 0x1072bu);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x4u)), (c.r[3] & 0xFFFFu));
    // 01072f  dec bx
    X86_AT(c, 0x1072fu);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_dec(c, v, 2)); }
    // 010731  mov word ptr [edi + 0x5a], bx
    X86_AT(c, 0x10731u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x5Au)), (c.r[3] & 0xFFFFu));
    // 010735  shr ebx, 0x10
    X86_AT(c, 0x10735u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[3] = r; }
    // 010738  mov word ptr [edi + 6], bx
    X86_AT(c, 0x10738u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x6u)), (c.r[3] & 0xFFFFu));
    // 01073c  dec bx
    X86_AT(c, 0x1073cu);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_dec(c, v, 2)); }
    // 01073e  mov word ptr [edi + 0x5c], bx
    X86_AT(c, 0x1073eu);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x5Cu)), (c.r[3] & 0xFFFFu));
    // 010742  mov ebx, dword ptr cs:[edx*8 + 0x10660]
    X86_AT(c, 0x10742u);
    c.r[3] = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 8 + 0x10660u)));
    // 01074a  mov word ptr [edi], bx
    X86_AT(c, 0x1074au);
    wr16((c.sbase[3] + (uint32_t)(c.r[7])), (c.r[3] & 0xFFFFu));
    // 01074d  mov word ptr [edi + 0x52], bx
    X86_AT(c, 0x1074du);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x52u)), (c.r[3] & 0xFFFFu));
    // 010751  mov word ptr [edi + 0x56], bx
    X86_AT(c, 0x10751u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x56u)), (c.r[3] & 0xFFFFu));
    // 010755  shr ebx, 0x10
    X86_AT(c, 0x10755u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[3] = r; }
    // 010758  mov word ptr [edi + 2], bx
    X86_AT(c, 0x10758u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x2u)), (c.r[3] & 0xFFFFu));
    // 01075c  mov word ptr [edi + 0x54], bx
    X86_AT(c, 0x1075cu);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x54u)), (c.r[3] & 0xFFFFu));
    // 010760  mov word ptr [edi + 0x58], bx
    X86_AT(c, 0x10760u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x58u)), (c.r[3] & 0xFFFFu));
L_10764:
    X86_TICK(c, 23);
    // 010764  push edi
    X86_AT(c, 0x10764u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 010765  push ds
    X86_AT(c, 0x10765u);
    push32(c, c.sreg[3]);
    // 010766  pop gs
    X86_AT(c, 0x10766u);
    x86_load_seg(c, 5, pop32(c) & 0xFFFFu);
    // 010768  mov ah, 5
    X86_AT(c, 0x10768u);
    s8(c, 4, 0x5u);
    // 01076a  add al, 0x40
    X86_AT(c, 0x1076au);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, 0x40u, 0, 1)); }
    // 01076c  add edi, 0x62
    X86_AT(c, 0x1076cu);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x62u, 0, 4); }
    // 01076f  push cs
    X86_AT(c, 0x1076fu);
    push32(c, c.sreg[1]);
    // 010770  call 0x280
    X86_AT(c, 0x10770u);
    push32(c, 0x10775u); f_00000280(c); X86_RET(c, 0x10775u);
    X86_TICK(c, 16);
    // 010775  pop edi
    X86_AT(c, 0x10775u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 010776  cmp byte ptr [edi + 0x4d], 0
    X86_AT(c, 0x10776u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x4Du))), 0x0u, 0, 1);
    // 01077a  je 0x10781
    X86_AT(c, 0x1077au);
    if (x86_cc(c, 4)) { goto L_10781; }
    X86_TICK(c, 7);
    // 01077c  call 0x10bd0
    X86_AT(c, 0x1077cu);
    push32(c, 0x10781u); f_00010bd0(c); X86_RET(c, 0x10781u);
L_10781:
    X86_TICK(c, 16);
    // 010781  popfd 
    X86_AT(c, 0x10781u);
    x86_popfd(c, 4);
    // 010782  ret 
    X86_AT(c, 0x10782u);
    c.eip = pop32(c); return;
L_10783:
    X86_TICK(c, 9);
    // 010783  sub al, 0x80
    X86_AT(c, 0x10783u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_sub(c, v, 0x80u, 0, 1)); }
    // 010785  cmp al, 3
    X86_AT(c, 0x10785u);
    (void)x86_sub(c, g8(c, 0), 0x3u, 0, 1);
    // 010787  ja 0x10338
    X86_AT(c, 0x10787u);
    if (x86_cc(c, 7)) { X86_POLL(c, 0x10338u); goto L_10338; }
    X86_TICK(c, 31);
    // 01078d  pushfd 
    X86_AT(c, 0x1078du);
    push32(c, c.fl & 0x00FCFFFFu);
    // 01078e  cli 
    X86_AT(c, 0x1078eu);
    c.fl &= ~X86_IF;
    // 01078f  push edi
    X86_AT(c, 0x1078fu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 010790  push ds
    X86_AT(c, 0x10790u);
    push32(c, c.sreg[3]);
    // 010791  pop gs
    X86_AT(c, 0x10791u);
    x86_load_seg(c, 5, pop32(c) & 0xFFFFu);
    // 010793  mov ah, 5
    X86_AT(c, 0x10793u);
    s8(c, 4, 0x5u);
    // 010795  add al, 0x80
    X86_AT(c, 0x10795u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, 0x80u, 0, 1)); }
    // 010797  add edi, 0x62
    X86_AT(c, 0x10797u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x62u, 0, 4); }
    // 01079a  push cs
    X86_AT(c, 0x1079au);
    push32(c, c.sreg[1]);
    // 01079b  call 0x280
    X86_AT(c, 0x1079bu);
    push32(c, 0x107a0u); f_00000280(c); X86_RET(c, 0x107a0u);
    X86_TICK(c, 11);
    // 0107a0  pop edi
    X86_AT(c, 0x107a0u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0107a1  call 0x10890
    X86_AT(c, 0x107a1u);
    push32(c, 0x107a6u); f_00010890(c); X86_RET(c, 0x107a6u);
    X86_TICK(c, 16);
    // 0107a6  popfd 
    X86_AT(c, 0x107a6u);
    x86_popfd(c, 4);
    // 0107a7  ret 
    X86_AT(c, 0x107a7u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x106f6u, "ran off the end of a function");
}
void f_000106fc(X86Cpu& c) {
    X86_TICK(c, 22);
    // 0106fc  pushfd 
    X86_AT(c, 0x106fcu);
    push32(c, c.fl & 0x00FCFFFFu);
    // 0106fd  cli 
    X86_AT(c, 0x106fdu);
    c.fl &= ~X86_IF;
    // 0106fe  push eax
    X86_AT(c, 0x106feu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0106ff  cmp byte ptr [edi + 0x4d], 0
    X86_AT(c, 0x106ffu);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x4Du))), 0x0u, 0, 1);
    // 010703  je 0x1070a
    X86_AT(c, 0x10703u);
    if (x86_cc(c, 4)) { goto L_1070a; }
    X86_TICK(c, 7);
    // 010705  call 0x10b75
    X86_AT(c, 0x10705u);
    push32(c, 0x1070au); f_00010b75(c); X86_RET(c, 0x1070au);
L_1070a:
    X86_TICK(c, 20);
    // 01070a  pop eax
    X86_AT(c, 0x1070au);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 01070b  movzx ebx, al
    X86_AT(c, 0x1070bu);
    c.r[3] = g8(c, 0);
    // 01070e  xor ebx, 1
    X86_AT(c, 0x1070eu);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v ^ 0x1u, 4); }
    // 010711  cmp al, byte ptr [edi + ebx*1 + 0x4f]
    X86_AT(c, 0x10711u);
    (void)x86_sub(c, g8(c, 0), rd8((c.sbase[3] + (uint32_t)(c.r[7] + c.r[3] + 0x4Fu))), 0, 1);
    // 010715  je 0x10764
    X86_AT(c, 0x10715u);
    if (x86_cc(c, 4)) { goto L_10764; }
    X86_TICK(c, 47);
    // 01071b  movzx edx, al
    X86_AT(c, 0x1071bu);
    c.r[2] = g8(c, 0);
    // 01071e  movzx edx, byte ptr [edi + edx*1 + 0x4f]
    X86_AT(c, 0x1071eu);
    c.r[2] = rd8((c.sbase[3] + (uint32_t)(c.r[7] + c.r[2] + 0x4Fu)));
    // 010723  mov ebx, dword ptr cs:[edx*8 + 0x1065c]
    X86_AT(c, 0x10723u);
    c.r[3] = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 8 + 0x1065Cu)));
    // 01072b  mov word ptr [edi + 4], bx
    X86_AT(c, 0x1072bu);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x4u)), (c.r[3] & 0xFFFFu));
    // 01072f  dec bx
    X86_AT(c, 0x1072fu);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_dec(c, v, 2)); }
    // 010731  mov word ptr [edi + 0x5a], bx
    X86_AT(c, 0x10731u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x5Au)), (c.r[3] & 0xFFFFu));
    // 010735  shr ebx, 0x10
    X86_AT(c, 0x10735u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[3] = r; }
    // 010738  mov word ptr [edi + 6], bx
    X86_AT(c, 0x10738u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x6u)), (c.r[3] & 0xFFFFu));
    // 01073c  dec bx
    X86_AT(c, 0x1073cu);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_dec(c, v, 2)); }
    // 01073e  mov word ptr [edi + 0x5c], bx
    X86_AT(c, 0x1073eu);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x5Cu)), (c.r[3] & 0xFFFFu));
    // 010742  mov ebx, dword ptr cs:[edx*8 + 0x10660]
    X86_AT(c, 0x10742u);
    c.r[3] = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 8 + 0x10660u)));
    // 01074a  mov word ptr [edi], bx
    X86_AT(c, 0x1074au);
    wr16((c.sbase[3] + (uint32_t)(c.r[7])), (c.r[3] & 0xFFFFu));
    // 01074d  mov word ptr [edi + 0x52], bx
    X86_AT(c, 0x1074du);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x52u)), (c.r[3] & 0xFFFFu));
    // 010751  mov word ptr [edi + 0x56], bx
    X86_AT(c, 0x10751u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x56u)), (c.r[3] & 0xFFFFu));
    // 010755  shr ebx, 0x10
    X86_AT(c, 0x10755u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[3] = r; }
    // 010758  mov word ptr [edi + 2], bx
    X86_AT(c, 0x10758u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x2u)), (c.r[3] & 0xFFFFu));
    // 01075c  mov word ptr [edi + 0x54], bx
    X86_AT(c, 0x1075cu);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x54u)), (c.r[3] & 0xFFFFu));
    // 010760  mov word ptr [edi + 0x58], bx
    X86_AT(c, 0x10760u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x58u)), (c.r[3] & 0xFFFFu));
L_10764:
    X86_TICK(c, 23);
    // 010764  push edi
    X86_AT(c, 0x10764u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 010765  push ds
    X86_AT(c, 0x10765u);
    push32(c, c.sreg[3]);
    // 010766  pop gs
    X86_AT(c, 0x10766u);
    x86_load_seg(c, 5, pop32(c) & 0xFFFFu);
    // 010768  mov ah, 5
    X86_AT(c, 0x10768u);
    s8(c, 4, 0x5u);
    // 01076a  add al, 0x40
    X86_AT(c, 0x1076au);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, 0x40u, 0, 1)); }
    // 01076c  add edi, 0x62
    X86_AT(c, 0x1076cu);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x62u, 0, 4); }
    // 01076f  push cs
    X86_AT(c, 0x1076fu);
    push32(c, c.sreg[1]);
    // 010770  call 0x280
    X86_AT(c, 0x10770u);
    push32(c, 0x10775u); f_00000280(c); X86_RET(c, 0x10775u);
    X86_TICK(c, 16);
    // 010775  pop edi
    X86_AT(c, 0x10775u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 010776  cmp byte ptr [edi + 0x4d], 0
    X86_AT(c, 0x10776u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x4Du))), 0x0u, 0, 1);
    // 01077a  je 0x10781
    X86_AT(c, 0x1077au);
    if (x86_cc(c, 4)) { goto L_10781; }
    X86_TICK(c, 7);
    // 01077c  call 0x10bd0
    X86_AT(c, 0x1077cu);
    push32(c, 0x10781u); f_00010bd0(c); X86_RET(c, 0x10781u);
L_10781:
    X86_TICK(c, 16);
    // 010781  popfd 
    X86_AT(c, 0x10781u);
    x86_popfd(c, 4);
    // 010782  ret 
    X86_AT(c, 0x10782u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x106fcu, "ran off the end of a function");
}
void f_000106fd(X86Cpu& c) {
    X86_TICK(c, 16);
    // 0106fd  cli 
    X86_AT(c, 0x106fdu);
    c.fl &= ~X86_IF;
    // 0106fe  push eax
    X86_AT(c, 0x106feu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0106ff  cmp byte ptr [edi + 0x4d], 0
    X86_AT(c, 0x106ffu);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x4Du))), 0x0u, 0, 1);
    // 010703  je 0x1070a
    X86_AT(c, 0x10703u);
    if (x86_cc(c, 4)) { goto L_1070a; }
    X86_TICK(c, 7);
    // 010705  call 0x10b75
    X86_AT(c, 0x10705u);
    push32(c, 0x1070au); f_00010b75(c); X86_RET(c, 0x1070au);
L_1070a:
    X86_TICK(c, 20);
    // 01070a  pop eax
    X86_AT(c, 0x1070au);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 01070b  movzx ebx, al
    X86_AT(c, 0x1070bu);
    c.r[3] = g8(c, 0);
    // 01070e  xor ebx, 1
    X86_AT(c, 0x1070eu);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v ^ 0x1u, 4); }
    // 010711  cmp al, byte ptr [edi + ebx*1 + 0x4f]
    X86_AT(c, 0x10711u);
    (void)x86_sub(c, g8(c, 0), rd8((c.sbase[3] + (uint32_t)(c.r[7] + c.r[3] + 0x4Fu))), 0, 1);
    // 010715  je 0x10764
    X86_AT(c, 0x10715u);
    if (x86_cc(c, 4)) { goto L_10764; }
    X86_TICK(c, 47);
    // 01071b  movzx edx, al
    X86_AT(c, 0x1071bu);
    c.r[2] = g8(c, 0);
    // 01071e  movzx edx, byte ptr [edi + edx*1 + 0x4f]
    X86_AT(c, 0x1071eu);
    c.r[2] = rd8((c.sbase[3] + (uint32_t)(c.r[7] + c.r[2] + 0x4Fu)));
    // 010723  mov ebx, dword ptr cs:[edx*8 + 0x1065c]
    X86_AT(c, 0x10723u);
    c.r[3] = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 8 + 0x1065Cu)));
    // 01072b  mov word ptr [edi + 4], bx
    X86_AT(c, 0x1072bu);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x4u)), (c.r[3] & 0xFFFFu));
    // 01072f  dec bx
    X86_AT(c, 0x1072fu);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_dec(c, v, 2)); }
    // 010731  mov word ptr [edi + 0x5a], bx
    X86_AT(c, 0x10731u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x5Au)), (c.r[3] & 0xFFFFu));
    // 010735  shr ebx, 0x10
    X86_AT(c, 0x10735u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[3] = r; }
    // 010738  mov word ptr [edi + 6], bx
    X86_AT(c, 0x10738u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x6u)), (c.r[3] & 0xFFFFu));
    // 01073c  dec bx
    X86_AT(c, 0x1073cu);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_dec(c, v, 2)); }
    // 01073e  mov word ptr [edi + 0x5c], bx
    X86_AT(c, 0x1073eu);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x5Cu)), (c.r[3] & 0xFFFFu));
    // 010742  mov ebx, dword ptr cs:[edx*8 + 0x10660]
    X86_AT(c, 0x10742u);
    c.r[3] = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 8 + 0x10660u)));
    // 01074a  mov word ptr [edi], bx
    X86_AT(c, 0x1074au);
    wr16((c.sbase[3] + (uint32_t)(c.r[7])), (c.r[3] & 0xFFFFu));
    // 01074d  mov word ptr [edi + 0x52], bx
    X86_AT(c, 0x1074du);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x52u)), (c.r[3] & 0xFFFFu));
    // 010751  mov word ptr [edi + 0x56], bx
    X86_AT(c, 0x10751u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x56u)), (c.r[3] & 0xFFFFu));
    // 010755  shr ebx, 0x10
    X86_AT(c, 0x10755u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[3] = r; }
    // 010758  mov word ptr [edi + 2], bx
    X86_AT(c, 0x10758u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x2u)), (c.r[3] & 0xFFFFu));
    // 01075c  mov word ptr [edi + 0x54], bx
    X86_AT(c, 0x1075cu);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x54u)), (c.r[3] & 0xFFFFu));
    // 010760  mov word ptr [edi + 0x58], bx
    X86_AT(c, 0x10760u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x58u)), (c.r[3] & 0xFFFFu));
L_10764:
    X86_TICK(c, 23);
    // 010764  push edi
    X86_AT(c, 0x10764u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 010765  push ds
    X86_AT(c, 0x10765u);
    push32(c, c.sreg[3]);
    // 010766  pop gs
    X86_AT(c, 0x10766u);
    x86_load_seg(c, 5, pop32(c) & 0xFFFFu);
    // 010768  mov ah, 5
    X86_AT(c, 0x10768u);
    s8(c, 4, 0x5u);
    // 01076a  add al, 0x40
    X86_AT(c, 0x1076au);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, 0x40u, 0, 1)); }
    // 01076c  add edi, 0x62
    X86_AT(c, 0x1076cu);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x62u, 0, 4); }
    // 01076f  push cs
    X86_AT(c, 0x1076fu);
    push32(c, c.sreg[1]);
    // 010770  call 0x280
    X86_AT(c, 0x10770u);
    push32(c, 0x10775u); f_00000280(c); X86_RET(c, 0x10775u);
    X86_TICK(c, 16);
    // 010775  pop edi
    X86_AT(c, 0x10775u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 010776  cmp byte ptr [edi + 0x4d], 0
    X86_AT(c, 0x10776u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x4Du))), 0x0u, 0, 1);
    // 01077a  je 0x10781
    X86_AT(c, 0x1077au);
    if (x86_cc(c, 4)) { goto L_10781; }
    X86_TICK(c, 7);
    // 01077c  call 0x10bd0
    X86_AT(c, 0x1077cu);
    push32(c, 0x10781u); f_00010bd0(c); X86_RET(c, 0x10781u);
L_10781:
    X86_TICK(c, 16);
    // 010781  popfd 
    X86_AT(c, 0x10781u);
    x86_popfd(c, 4);
    // 010782  ret 
    X86_AT(c, 0x10782u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x106fdu, "ran off the end of a function");
}
void f_000106fe(X86Cpu& c) {
    X86_TICK(c, 14);
    // 0106fe  push eax
    X86_AT(c, 0x106feu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0106ff  cmp byte ptr [edi + 0x4d], 0
    X86_AT(c, 0x106ffu);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x4Du))), 0x0u, 0, 1);
    // 010703  je 0x1070a
    X86_AT(c, 0x10703u);
    if (x86_cc(c, 4)) { goto L_1070a; }
    X86_TICK(c, 7);
    // 010705  call 0x10b75
    X86_AT(c, 0x10705u);
    push32(c, 0x1070au); f_00010b75(c); X86_RET(c, 0x1070au);
L_1070a:
    X86_TICK(c, 20);
    // 01070a  pop eax
    X86_AT(c, 0x1070au);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 01070b  movzx ebx, al
    X86_AT(c, 0x1070bu);
    c.r[3] = g8(c, 0);
    // 01070e  xor ebx, 1
    X86_AT(c, 0x1070eu);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v ^ 0x1u, 4); }
    // 010711  cmp al, byte ptr [edi + ebx*1 + 0x4f]
    X86_AT(c, 0x10711u);
    (void)x86_sub(c, g8(c, 0), rd8((c.sbase[3] + (uint32_t)(c.r[7] + c.r[3] + 0x4Fu))), 0, 1);
    // 010715  je 0x10764
    X86_AT(c, 0x10715u);
    if (x86_cc(c, 4)) { goto L_10764; }
    X86_TICK(c, 47);
    // 01071b  movzx edx, al
    X86_AT(c, 0x1071bu);
    c.r[2] = g8(c, 0);
    // 01071e  movzx edx, byte ptr [edi + edx*1 + 0x4f]
    X86_AT(c, 0x1071eu);
    c.r[2] = rd8((c.sbase[3] + (uint32_t)(c.r[7] + c.r[2] + 0x4Fu)));
    // 010723  mov ebx, dword ptr cs:[edx*8 + 0x1065c]
    X86_AT(c, 0x10723u);
    c.r[3] = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 8 + 0x1065Cu)));
    // 01072b  mov word ptr [edi + 4], bx
    X86_AT(c, 0x1072bu);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x4u)), (c.r[3] & 0xFFFFu));
    // 01072f  dec bx
    X86_AT(c, 0x1072fu);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_dec(c, v, 2)); }
    // 010731  mov word ptr [edi + 0x5a], bx
    X86_AT(c, 0x10731u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x5Au)), (c.r[3] & 0xFFFFu));
    // 010735  shr ebx, 0x10
    X86_AT(c, 0x10735u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[3] = r; }
    // 010738  mov word ptr [edi + 6], bx
    X86_AT(c, 0x10738u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x6u)), (c.r[3] & 0xFFFFu));
    // 01073c  dec bx
    X86_AT(c, 0x1073cu);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_dec(c, v, 2)); }
    // 01073e  mov word ptr [edi + 0x5c], bx
    X86_AT(c, 0x1073eu);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x5Cu)), (c.r[3] & 0xFFFFu));
    // 010742  mov ebx, dword ptr cs:[edx*8 + 0x10660]
    X86_AT(c, 0x10742u);
    c.r[3] = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 8 + 0x10660u)));
    // 01074a  mov word ptr [edi], bx
    X86_AT(c, 0x1074au);
    wr16((c.sbase[3] + (uint32_t)(c.r[7])), (c.r[3] & 0xFFFFu));
    // 01074d  mov word ptr [edi + 0x52], bx
    X86_AT(c, 0x1074du);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x52u)), (c.r[3] & 0xFFFFu));
    // 010751  mov word ptr [edi + 0x56], bx
    X86_AT(c, 0x10751u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x56u)), (c.r[3] & 0xFFFFu));
    // 010755  shr ebx, 0x10
    X86_AT(c, 0x10755u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[3] = r; }
    // 010758  mov word ptr [edi + 2], bx
    X86_AT(c, 0x10758u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x2u)), (c.r[3] & 0xFFFFu));
    // 01075c  mov word ptr [edi + 0x54], bx
    X86_AT(c, 0x1075cu);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x54u)), (c.r[3] & 0xFFFFu));
    // 010760  mov word ptr [edi + 0x58], bx
    X86_AT(c, 0x10760u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x58u)), (c.r[3] & 0xFFFFu));
L_10764:
    X86_TICK(c, 23);
    // 010764  push edi
    X86_AT(c, 0x10764u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 010765  push ds
    X86_AT(c, 0x10765u);
    push32(c, c.sreg[3]);
    // 010766  pop gs
    X86_AT(c, 0x10766u);
    x86_load_seg(c, 5, pop32(c) & 0xFFFFu);
    // 010768  mov ah, 5
    X86_AT(c, 0x10768u);
    s8(c, 4, 0x5u);
    // 01076a  add al, 0x40
    X86_AT(c, 0x1076au);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, 0x40u, 0, 1)); }
    // 01076c  add edi, 0x62
    X86_AT(c, 0x1076cu);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x62u, 0, 4); }
    // 01076f  push cs
    X86_AT(c, 0x1076fu);
    push32(c, c.sreg[1]);
    // 010770  call 0x280
    X86_AT(c, 0x10770u);
    push32(c, 0x10775u); f_00000280(c); X86_RET(c, 0x10775u);
    X86_TICK(c, 16);
    // 010775  pop edi
    X86_AT(c, 0x10775u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 010776  cmp byte ptr [edi + 0x4d], 0
    X86_AT(c, 0x10776u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x4Du))), 0x0u, 0, 1);
    // 01077a  je 0x10781
    X86_AT(c, 0x1077au);
    if (x86_cc(c, 4)) { goto L_10781; }
    X86_TICK(c, 7);
    // 01077c  call 0x10bd0
    X86_AT(c, 0x1077cu);
    push32(c, 0x10781u); f_00010bd0(c); X86_RET(c, 0x10781u);
L_10781:
    X86_TICK(c, 16);
    // 010781  popfd 
    X86_AT(c, 0x10781u);
    x86_popfd(c, 4);
    // 010782  ret 
    X86_AT(c, 0x10782u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x106feu, "ran off the end of a function");
}
void f_000106ff(X86Cpu& c) {
    X86_TICK(c, 12);
    // 0106ff  cmp byte ptr [edi + 0x4d], 0
    X86_AT(c, 0x106ffu);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x4Du))), 0x0u, 0, 1);
    // 010703  je 0x1070a
    X86_AT(c, 0x10703u);
    if (x86_cc(c, 4)) { goto L_1070a; }
    X86_TICK(c, 7);
    // 010705  call 0x10b75
    X86_AT(c, 0x10705u);
    push32(c, 0x1070au); f_00010b75(c); X86_RET(c, 0x1070au);
L_1070a:
    X86_TICK(c, 20);
    // 01070a  pop eax
    X86_AT(c, 0x1070au);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 01070b  movzx ebx, al
    X86_AT(c, 0x1070bu);
    c.r[3] = g8(c, 0);
    // 01070e  xor ebx, 1
    X86_AT(c, 0x1070eu);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v ^ 0x1u, 4); }
    // 010711  cmp al, byte ptr [edi + ebx*1 + 0x4f]
    X86_AT(c, 0x10711u);
    (void)x86_sub(c, g8(c, 0), rd8((c.sbase[3] + (uint32_t)(c.r[7] + c.r[3] + 0x4Fu))), 0, 1);
    // 010715  je 0x10764
    X86_AT(c, 0x10715u);
    if (x86_cc(c, 4)) { goto L_10764; }
    X86_TICK(c, 47);
    // 01071b  movzx edx, al
    X86_AT(c, 0x1071bu);
    c.r[2] = g8(c, 0);
    // 01071e  movzx edx, byte ptr [edi + edx*1 + 0x4f]
    X86_AT(c, 0x1071eu);
    c.r[2] = rd8((c.sbase[3] + (uint32_t)(c.r[7] + c.r[2] + 0x4Fu)));
    // 010723  mov ebx, dword ptr cs:[edx*8 + 0x1065c]
    X86_AT(c, 0x10723u);
    c.r[3] = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 8 + 0x1065Cu)));
    // 01072b  mov word ptr [edi + 4], bx
    X86_AT(c, 0x1072bu);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x4u)), (c.r[3] & 0xFFFFu));
    // 01072f  dec bx
    X86_AT(c, 0x1072fu);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_dec(c, v, 2)); }
    // 010731  mov word ptr [edi + 0x5a], bx
    X86_AT(c, 0x10731u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x5Au)), (c.r[3] & 0xFFFFu));
    // 010735  shr ebx, 0x10
    X86_AT(c, 0x10735u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[3] = r; }
    // 010738  mov word ptr [edi + 6], bx
    X86_AT(c, 0x10738u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x6u)), (c.r[3] & 0xFFFFu));
    // 01073c  dec bx
    X86_AT(c, 0x1073cu);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_dec(c, v, 2)); }
    // 01073e  mov word ptr [edi + 0x5c], bx
    X86_AT(c, 0x1073eu);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x5Cu)), (c.r[3] & 0xFFFFu));
    // 010742  mov ebx, dword ptr cs:[edx*8 + 0x10660]
    X86_AT(c, 0x10742u);
    c.r[3] = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 8 + 0x10660u)));
    // 01074a  mov word ptr [edi], bx
    X86_AT(c, 0x1074au);
    wr16((c.sbase[3] + (uint32_t)(c.r[7])), (c.r[3] & 0xFFFFu));
    // 01074d  mov word ptr [edi + 0x52], bx
    X86_AT(c, 0x1074du);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x52u)), (c.r[3] & 0xFFFFu));
    // 010751  mov word ptr [edi + 0x56], bx
    X86_AT(c, 0x10751u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x56u)), (c.r[3] & 0xFFFFu));
    // 010755  shr ebx, 0x10
    X86_AT(c, 0x10755u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[3] = r; }
    // 010758  mov word ptr [edi + 2], bx
    X86_AT(c, 0x10758u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x2u)), (c.r[3] & 0xFFFFu));
    // 01075c  mov word ptr [edi + 0x54], bx
    X86_AT(c, 0x1075cu);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x54u)), (c.r[3] & 0xFFFFu));
    // 010760  mov word ptr [edi + 0x58], bx
    X86_AT(c, 0x10760u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x58u)), (c.r[3] & 0xFFFFu));
L_10764:
    X86_TICK(c, 23);
    // 010764  push edi
    X86_AT(c, 0x10764u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 010765  push ds
    X86_AT(c, 0x10765u);
    push32(c, c.sreg[3]);
    // 010766  pop gs
    X86_AT(c, 0x10766u);
    x86_load_seg(c, 5, pop32(c) & 0xFFFFu);
    // 010768  mov ah, 5
    X86_AT(c, 0x10768u);
    s8(c, 4, 0x5u);
    // 01076a  add al, 0x40
    X86_AT(c, 0x1076au);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, 0x40u, 0, 1)); }
    // 01076c  add edi, 0x62
    X86_AT(c, 0x1076cu);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x62u, 0, 4); }
    // 01076f  push cs
    X86_AT(c, 0x1076fu);
    push32(c, c.sreg[1]);
    // 010770  call 0x280
    X86_AT(c, 0x10770u);
    push32(c, 0x10775u); f_00000280(c); X86_RET(c, 0x10775u);
    X86_TICK(c, 16);
    // 010775  pop edi
    X86_AT(c, 0x10775u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 010776  cmp byte ptr [edi + 0x4d], 0
    X86_AT(c, 0x10776u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x4Du))), 0x0u, 0, 1);
    // 01077a  je 0x10781
    X86_AT(c, 0x1077au);
    if (x86_cc(c, 4)) { goto L_10781; }
    X86_TICK(c, 7);
    // 01077c  call 0x10bd0
    X86_AT(c, 0x1077cu);
    push32(c, 0x10781u); f_00010bd0(c); X86_RET(c, 0x10781u);
L_10781:
    X86_TICK(c, 16);
    // 010781  popfd 
    X86_AT(c, 0x10781u);
    x86_popfd(c, 4);
    // 010782  ret 
    X86_AT(c, 0x10782u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x106ffu, "ran off the end of a function");
}
void f_00010703(X86Cpu& c) {
    X86_TICK(c, 5);
    // 010703  je 0x1070a
    X86_AT(c, 0x10703u);
    if (x86_cc(c, 4)) { goto L_1070a; }
    X86_TICK(c, 7);
    // 010705  call 0x10b75
    X86_AT(c, 0x10705u);
    push32(c, 0x1070au); f_00010b75(c); X86_RET(c, 0x1070au);
L_1070a:
    X86_TICK(c, 20);
    // 01070a  pop eax
    X86_AT(c, 0x1070au);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 01070b  movzx ebx, al
    X86_AT(c, 0x1070bu);
    c.r[3] = g8(c, 0);
    // 01070e  xor ebx, 1
    X86_AT(c, 0x1070eu);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v ^ 0x1u, 4); }
    // 010711  cmp al, byte ptr [edi + ebx*1 + 0x4f]
    X86_AT(c, 0x10711u);
    (void)x86_sub(c, g8(c, 0), rd8((c.sbase[3] + (uint32_t)(c.r[7] + c.r[3] + 0x4Fu))), 0, 1);
    // 010715  je 0x10764
    X86_AT(c, 0x10715u);
    if (x86_cc(c, 4)) { goto L_10764; }
    X86_TICK(c, 47);
    // 01071b  movzx edx, al
    X86_AT(c, 0x1071bu);
    c.r[2] = g8(c, 0);
    // 01071e  movzx edx, byte ptr [edi + edx*1 + 0x4f]
    X86_AT(c, 0x1071eu);
    c.r[2] = rd8((c.sbase[3] + (uint32_t)(c.r[7] + c.r[2] + 0x4Fu)));
    // 010723  mov ebx, dword ptr cs:[edx*8 + 0x1065c]
    X86_AT(c, 0x10723u);
    c.r[3] = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 8 + 0x1065Cu)));
    // 01072b  mov word ptr [edi + 4], bx
    X86_AT(c, 0x1072bu);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x4u)), (c.r[3] & 0xFFFFu));
    // 01072f  dec bx
    X86_AT(c, 0x1072fu);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_dec(c, v, 2)); }
    // 010731  mov word ptr [edi + 0x5a], bx
    X86_AT(c, 0x10731u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x5Au)), (c.r[3] & 0xFFFFu));
    // 010735  shr ebx, 0x10
    X86_AT(c, 0x10735u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[3] = r; }
    // 010738  mov word ptr [edi + 6], bx
    X86_AT(c, 0x10738u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x6u)), (c.r[3] & 0xFFFFu));
    // 01073c  dec bx
    X86_AT(c, 0x1073cu);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_dec(c, v, 2)); }
    // 01073e  mov word ptr [edi + 0x5c], bx
    X86_AT(c, 0x1073eu);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x5Cu)), (c.r[3] & 0xFFFFu));
    // 010742  mov ebx, dword ptr cs:[edx*8 + 0x10660]
    X86_AT(c, 0x10742u);
    c.r[3] = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 8 + 0x10660u)));
    // 01074a  mov word ptr [edi], bx
    X86_AT(c, 0x1074au);
    wr16((c.sbase[3] + (uint32_t)(c.r[7])), (c.r[3] & 0xFFFFu));
    // 01074d  mov word ptr [edi + 0x52], bx
    X86_AT(c, 0x1074du);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x52u)), (c.r[3] & 0xFFFFu));
    // 010751  mov word ptr [edi + 0x56], bx
    X86_AT(c, 0x10751u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x56u)), (c.r[3] & 0xFFFFu));
    // 010755  shr ebx, 0x10
    X86_AT(c, 0x10755u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[3] = r; }
    // 010758  mov word ptr [edi + 2], bx
    X86_AT(c, 0x10758u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x2u)), (c.r[3] & 0xFFFFu));
    // 01075c  mov word ptr [edi + 0x54], bx
    X86_AT(c, 0x1075cu);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x54u)), (c.r[3] & 0xFFFFu));
    // 010760  mov word ptr [edi + 0x58], bx
    X86_AT(c, 0x10760u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x58u)), (c.r[3] & 0xFFFFu));
L_10764:
    X86_TICK(c, 23);
    // 010764  push edi
    X86_AT(c, 0x10764u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 010765  push ds
    X86_AT(c, 0x10765u);
    push32(c, c.sreg[3]);
    // 010766  pop gs
    X86_AT(c, 0x10766u);
    x86_load_seg(c, 5, pop32(c) & 0xFFFFu);
    // 010768  mov ah, 5
    X86_AT(c, 0x10768u);
    s8(c, 4, 0x5u);
    // 01076a  add al, 0x40
    X86_AT(c, 0x1076au);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, 0x40u, 0, 1)); }
    // 01076c  add edi, 0x62
    X86_AT(c, 0x1076cu);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x62u, 0, 4); }
    // 01076f  push cs
    X86_AT(c, 0x1076fu);
    push32(c, c.sreg[1]);
    // 010770  call 0x280
    X86_AT(c, 0x10770u);
    push32(c, 0x10775u); f_00000280(c); X86_RET(c, 0x10775u);
    X86_TICK(c, 16);
    // 010775  pop edi
    X86_AT(c, 0x10775u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 010776  cmp byte ptr [edi + 0x4d], 0
    X86_AT(c, 0x10776u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x4Du))), 0x0u, 0, 1);
    // 01077a  je 0x10781
    X86_AT(c, 0x1077au);
    if (x86_cc(c, 4)) { goto L_10781; }
    X86_TICK(c, 7);
    // 01077c  call 0x10bd0
    X86_AT(c, 0x1077cu);
    push32(c, 0x10781u); f_00010bd0(c); X86_RET(c, 0x10781u);
L_10781:
    X86_TICK(c, 16);
    // 010781  popfd 
    X86_AT(c, 0x10781u);
    x86_popfd(c, 4);
    // 010782  ret 
    X86_AT(c, 0x10782u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x10703u, "ran off the end of a function");
}
void f_0001070a(X86Cpu& c) {
    X86_TICK(c, 20);
    // 01070a  pop eax
    X86_AT(c, 0x1070au);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 01070b  movzx ebx, al
    X86_AT(c, 0x1070bu);
    c.r[3] = g8(c, 0);
    // 01070e  xor ebx, 1
    X86_AT(c, 0x1070eu);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v ^ 0x1u, 4); }
    // 010711  cmp al, byte ptr [edi + ebx*1 + 0x4f]
    X86_AT(c, 0x10711u);
    (void)x86_sub(c, g8(c, 0), rd8((c.sbase[3] + (uint32_t)(c.r[7] + c.r[3] + 0x4Fu))), 0, 1);
    // 010715  je 0x10764
    X86_AT(c, 0x10715u);
    if (x86_cc(c, 4)) { goto L_10764; }
    X86_TICK(c, 47);
    // 01071b  movzx edx, al
    X86_AT(c, 0x1071bu);
    c.r[2] = g8(c, 0);
    // 01071e  movzx edx, byte ptr [edi + edx*1 + 0x4f]
    X86_AT(c, 0x1071eu);
    c.r[2] = rd8((c.sbase[3] + (uint32_t)(c.r[7] + c.r[2] + 0x4Fu)));
    // 010723  mov ebx, dword ptr cs:[edx*8 + 0x1065c]
    X86_AT(c, 0x10723u);
    c.r[3] = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 8 + 0x1065Cu)));
    // 01072b  mov word ptr [edi + 4], bx
    X86_AT(c, 0x1072bu);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x4u)), (c.r[3] & 0xFFFFu));
    // 01072f  dec bx
    X86_AT(c, 0x1072fu);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_dec(c, v, 2)); }
    // 010731  mov word ptr [edi + 0x5a], bx
    X86_AT(c, 0x10731u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x5Au)), (c.r[3] & 0xFFFFu));
    // 010735  shr ebx, 0x10
    X86_AT(c, 0x10735u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[3] = r; }
    // 010738  mov word ptr [edi + 6], bx
    X86_AT(c, 0x10738u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x6u)), (c.r[3] & 0xFFFFu));
    // 01073c  dec bx
    X86_AT(c, 0x1073cu);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_dec(c, v, 2)); }
    // 01073e  mov word ptr [edi + 0x5c], bx
    X86_AT(c, 0x1073eu);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x5Cu)), (c.r[3] & 0xFFFFu));
    // 010742  mov ebx, dword ptr cs:[edx*8 + 0x10660]
    X86_AT(c, 0x10742u);
    c.r[3] = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 8 + 0x10660u)));
    // 01074a  mov word ptr [edi], bx
    X86_AT(c, 0x1074au);
    wr16((c.sbase[3] + (uint32_t)(c.r[7])), (c.r[3] & 0xFFFFu));
    // 01074d  mov word ptr [edi + 0x52], bx
    X86_AT(c, 0x1074du);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x52u)), (c.r[3] & 0xFFFFu));
    // 010751  mov word ptr [edi + 0x56], bx
    X86_AT(c, 0x10751u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x56u)), (c.r[3] & 0xFFFFu));
    // 010755  shr ebx, 0x10
    X86_AT(c, 0x10755u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[3] = r; }
    // 010758  mov word ptr [edi + 2], bx
    X86_AT(c, 0x10758u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x2u)), (c.r[3] & 0xFFFFu));
    // 01075c  mov word ptr [edi + 0x54], bx
    X86_AT(c, 0x1075cu);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x54u)), (c.r[3] & 0xFFFFu));
    // 010760  mov word ptr [edi + 0x58], bx
    X86_AT(c, 0x10760u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x58u)), (c.r[3] & 0xFFFFu));
L_10764:
    X86_TICK(c, 23);
    // 010764  push edi
    X86_AT(c, 0x10764u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 010765  push ds
    X86_AT(c, 0x10765u);
    push32(c, c.sreg[3]);
    // 010766  pop gs
    X86_AT(c, 0x10766u);
    x86_load_seg(c, 5, pop32(c) & 0xFFFFu);
    // 010768  mov ah, 5
    X86_AT(c, 0x10768u);
    s8(c, 4, 0x5u);
    // 01076a  add al, 0x40
    X86_AT(c, 0x1076au);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, 0x40u, 0, 1)); }
    // 01076c  add edi, 0x62
    X86_AT(c, 0x1076cu);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x62u, 0, 4); }
    // 01076f  push cs
    X86_AT(c, 0x1076fu);
    push32(c, c.sreg[1]);
    // 010770  call 0x280
    X86_AT(c, 0x10770u);
    push32(c, 0x10775u); f_00000280(c); X86_RET(c, 0x10775u);
    X86_TICK(c, 16);
    // 010775  pop edi
    X86_AT(c, 0x10775u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 010776  cmp byte ptr [edi + 0x4d], 0
    X86_AT(c, 0x10776u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x4Du))), 0x0u, 0, 1);
    // 01077a  je 0x10781
    X86_AT(c, 0x1077au);
    if (x86_cc(c, 4)) { goto L_10781; }
    X86_TICK(c, 7);
    // 01077c  call 0x10bd0
    X86_AT(c, 0x1077cu);
    push32(c, 0x10781u); f_00010bd0(c); X86_RET(c, 0x10781u);
L_10781:
    X86_TICK(c, 16);
    // 010781  popfd 
    X86_AT(c, 0x10781u);
    x86_popfd(c, 4);
    // 010782  ret 
    X86_AT(c, 0x10782u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x1070au, "ran off the end of a function");
}
void f_0001070b(X86Cpu& c) {
    X86_TICK(c, 16);
    // 01070b  movzx ebx, al
    X86_AT(c, 0x1070bu);
    c.r[3] = g8(c, 0);
    // 01070e  xor ebx, 1
    X86_AT(c, 0x1070eu);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v ^ 0x1u, 4); }
    // 010711  cmp al, byte ptr [edi + ebx*1 + 0x4f]
    X86_AT(c, 0x10711u);
    (void)x86_sub(c, g8(c, 0), rd8((c.sbase[3] + (uint32_t)(c.r[7] + c.r[3] + 0x4Fu))), 0, 1);
    // 010715  je 0x10764
    X86_AT(c, 0x10715u);
    if (x86_cc(c, 4)) { goto L_10764; }
    X86_TICK(c, 47);
    // 01071b  movzx edx, al
    X86_AT(c, 0x1071bu);
    c.r[2] = g8(c, 0);
    // 01071e  movzx edx, byte ptr [edi + edx*1 + 0x4f]
    X86_AT(c, 0x1071eu);
    c.r[2] = rd8((c.sbase[3] + (uint32_t)(c.r[7] + c.r[2] + 0x4Fu)));
    // 010723  mov ebx, dword ptr cs:[edx*8 + 0x1065c]
    X86_AT(c, 0x10723u);
    c.r[3] = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 8 + 0x1065Cu)));
    // 01072b  mov word ptr [edi + 4], bx
    X86_AT(c, 0x1072bu);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x4u)), (c.r[3] & 0xFFFFu));
    // 01072f  dec bx
    X86_AT(c, 0x1072fu);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_dec(c, v, 2)); }
    // 010731  mov word ptr [edi + 0x5a], bx
    X86_AT(c, 0x10731u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x5Au)), (c.r[3] & 0xFFFFu));
    // 010735  shr ebx, 0x10
    X86_AT(c, 0x10735u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[3] = r; }
    // 010738  mov word ptr [edi + 6], bx
    X86_AT(c, 0x10738u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x6u)), (c.r[3] & 0xFFFFu));
    // 01073c  dec bx
    X86_AT(c, 0x1073cu);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_dec(c, v, 2)); }
    // 01073e  mov word ptr [edi + 0x5c], bx
    X86_AT(c, 0x1073eu);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x5Cu)), (c.r[3] & 0xFFFFu));
    // 010742  mov ebx, dword ptr cs:[edx*8 + 0x10660]
    X86_AT(c, 0x10742u);
    c.r[3] = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 8 + 0x10660u)));
    // 01074a  mov word ptr [edi], bx
    X86_AT(c, 0x1074au);
    wr16((c.sbase[3] + (uint32_t)(c.r[7])), (c.r[3] & 0xFFFFu));
    // 01074d  mov word ptr [edi + 0x52], bx
    X86_AT(c, 0x1074du);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x52u)), (c.r[3] & 0xFFFFu));
    // 010751  mov word ptr [edi + 0x56], bx
    X86_AT(c, 0x10751u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x56u)), (c.r[3] & 0xFFFFu));
    // 010755  shr ebx, 0x10
    X86_AT(c, 0x10755u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[3] = r; }
    // 010758  mov word ptr [edi + 2], bx
    X86_AT(c, 0x10758u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x2u)), (c.r[3] & 0xFFFFu));
    // 01075c  mov word ptr [edi + 0x54], bx
    X86_AT(c, 0x1075cu);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x54u)), (c.r[3] & 0xFFFFu));
    // 010760  mov word ptr [edi + 0x58], bx
    X86_AT(c, 0x10760u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x58u)), (c.r[3] & 0xFFFFu));
L_10764:
    X86_TICK(c, 23);
    // 010764  push edi
    X86_AT(c, 0x10764u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 010765  push ds
    X86_AT(c, 0x10765u);
    push32(c, c.sreg[3]);
    // 010766  pop gs
    X86_AT(c, 0x10766u);
    x86_load_seg(c, 5, pop32(c) & 0xFFFFu);
    // 010768  mov ah, 5
    X86_AT(c, 0x10768u);
    s8(c, 4, 0x5u);
    // 01076a  add al, 0x40
    X86_AT(c, 0x1076au);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, 0x40u, 0, 1)); }
    // 01076c  add edi, 0x62
    X86_AT(c, 0x1076cu);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x62u, 0, 4); }
    // 01076f  push cs
    X86_AT(c, 0x1076fu);
    push32(c, c.sreg[1]);
    // 010770  call 0x280
    X86_AT(c, 0x10770u);
    push32(c, 0x10775u); f_00000280(c); X86_RET(c, 0x10775u);
    X86_TICK(c, 16);
    // 010775  pop edi
    X86_AT(c, 0x10775u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 010776  cmp byte ptr [edi + 0x4d], 0
    X86_AT(c, 0x10776u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x4Du))), 0x0u, 0, 1);
    // 01077a  je 0x10781
    X86_AT(c, 0x1077au);
    if (x86_cc(c, 4)) { goto L_10781; }
    X86_TICK(c, 7);
    // 01077c  call 0x10bd0
    X86_AT(c, 0x1077cu);
    push32(c, 0x10781u); f_00010bd0(c); X86_RET(c, 0x10781u);
L_10781:
    X86_TICK(c, 16);
    // 010781  popfd 
    X86_AT(c, 0x10781u);
    x86_popfd(c, 4);
    // 010782  ret 
    X86_AT(c, 0x10782u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x1070bu, "ran off the end of a function");
}
void f_0001070e(X86Cpu& c) {
    X86_TICK(c, 13);
    // 01070e  xor ebx, 1
    X86_AT(c, 0x1070eu);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v ^ 0x1u, 4); }
    // 010711  cmp al, byte ptr [edi + ebx*1 + 0x4f]
    X86_AT(c, 0x10711u);
    (void)x86_sub(c, g8(c, 0), rd8((c.sbase[3] + (uint32_t)(c.r[7] + c.r[3] + 0x4Fu))), 0, 1);
    // 010715  je 0x10764
    X86_AT(c, 0x10715u);
    if (x86_cc(c, 4)) { goto L_10764; }
    X86_TICK(c, 47);
    // 01071b  movzx edx, al
    X86_AT(c, 0x1071bu);
    c.r[2] = g8(c, 0);
    // 01071e  movzx edx, byte ptr [edi + edx*1 + 0x4f]
    X86_AT(c, 0x1071eu);
    c.r[2] = rd8((c.sbase[3] + (uint32_t)(c.r[7] + c.r[2] + 0x4Fu)));
    // 010723  mov ebx, dword ptr cs:[edx*8 + 0x1065c]
    X86_AT(c, 0x10723u);
    c.r[3] = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 8 + 0x1065Cu)));
    // 01072b  mov word ptr [edi + 4], bx
    X86_AT(c, 0x1072bu);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x4u)), (c.r[3] & 0xFFFFu));
    // 01072f  dec bx
    X86_AT(c, 0x1072fu);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_dec(c, v, 2)); }
    // 010731  mov word ptr [edi + 0x5a], bx
    X86_AT(c, 0x10731u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x5Au)), (c.r[3] & 0xFFFFu));
    // 010735  shr ebx, 0x10
    X86_AT(c, 0x10735u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[3] = r; }
    // 010738  mov word ptr [edi + 6], bx
    X86_AT(c, 0x10738u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x6u)), (c.r[3] & 0xFFFFu));
    // 01073c  dec bx
    X86_AT(c, 0x1073cu);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_dec(c, v, 2)); }
    // 01073e  mov word ptr [edi + 0x5c], bx
    X86_AT(c, 0x1073eu);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x5Cu)), (c.r[3] & 0xFFFFu));
    // 010742  mov ebx, dword ptr cs:[edx*8 + 0x10660]
    X86_AT(c, 0x10742u);
    c.r[3] = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 8 + 0x10660u)));
    // 01074a  mov word ptr [edi], bx
    X86_AT(c, 0x1074au);
    wr16((c.sbase[3] + (uint32_t)(c.r[7])), (c.r[3] & 0xFFFFu));
    // 01074d  mov word ptr [edi + 0x52], bx
    X86_AT(c, 0x1074du);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x52u)), (c.r[3] & 0xFFFFu));
    // 010751  mov word ptr [edi + 0x56], bx
    X86_AT(c, 0x10751u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x56u)), (c.r[3] & 0xFFFFu));
    // 010755  shr ebx, 0x10
    X86_AT(c, 0x10755u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[3] = r; }
    // 010758  mov word ptr [edi + 2], bx
    X86_AT(c, 0x10758u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x2u)), (c.r[3] & 0xFFFFu));
    // 01075c  mov word ptr [edi + 0x54], bx
    X86_AT(c, 0x1075cu);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x54u)), (c.r[3] & 0xFFFFu));
    // 010760  mov word ptr [edi + 0x58], bx
    X86_AT(c, 0x10760u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x58u)), (c.r[3] & 0xFFFFu));
L_10764:
    X86_TICK(c, 23);
    // 010764  push edi
    X86_AT(c, 0x10764u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 010765  push ds
    X86_AT(c, 0x10765u);
    push32(c, c.sreg[3]);
    // 010766  pop gs
    X86_AT(c, 0x10766u);
    x86_load_seg(c, 5, pop32(c) & 0xFFFFu);
    // 010768  mov ah, 5
    X86_AT(c, 0x10768u);
    s8(c, 4, 0x5u);
    // 01076a  add al, 0x40
    X86_AT(c, 0x1076au);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, 0x40u, 0, 1)); }
    // 01076c  add edi, 0x62
    X86_AT(c, 0x1076cu);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x62u, 0, 4); }
    // 01076f  push cs
    X86_AT(c, 0x1076fu);
    push32(c, c.sreg[1]);
    // 010770  call 0x280
    X86_AT(c, 0x10770u);
    push32(c, 0x10775u); f_00000280(c); X86_RET(c, 0x10775u);
    X86_TICK(c, 16);
    // 010775  pop edi
    X86_AT(c, 0x10775u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 010776  cmp byte ptr [edi + 0x4d], 0
    X86_AT(c, 0x10776u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x4Du))), 0x0u, 0, 1);
    // 01077a  je 0x10781
    X86_AT(c, 0x1077au);
    if (x86_cc(c, 4)) { goto L_10781; }
    X86_TICK(c, 7);
    // 01077c  call 0x10bd0
    X86_AT(c, 0x1077cu);
    push32(c, 0x10781u); f_00010bd0(c); X86_RET(c, 0x10781u);
L_10781:
    X86_TICK(c, 16);
    // 010781  popfd 
    X86_AT(c, 0x10781u);
    x86_popfd(c, 4);
    // 010782  ret 
    X86_AT(c, 0x10782u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x1070eu, "ran off the end of a function");
}
void f_00010711(X86Cpu& c) {
    X86_TICK(c, 11);
    // 010711  cmp al, byte ptr [edi + ebx*1 + 0x4f]
    X86_AT(c, 0x10711u);
    (void)x86_sub(c, g8(c, 0), rd8((c.sbase[3] + (uint32_t)(c.r[7] + c.r[3] + 0x4Fu))), 0, 1);
    // 010715  je 0x10764
    X86_AT(c, 0x10715u);
    if (x86_cc(c, 4)) { goto L_10764; }
    X86_TICK(c, 47);
    // 01071b  movzx edx, al
    X86_AT(c, 0x1071bu);
    c.r[2] = g8(c, 0);
    // 01071e  movzx edx, byte ptr [edi + edx*1 + 0x4f]
    X86_AT(c, 0x1071eu);
    c.r[2] = rd8((c.sbase[3] + (uint32_t)(c.r[7] + c.r[2] + 0x4Fu)));
    // 010723  mov ebx, dword ptr cs:[edx*8 + 0x1065c]
    X86_AT(c, 0x10723u);
    c.r[3] = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 8 + 0x1065Cu)));
    // 01072b  mov word ptr [edi + 4], bx
    X86_AT(c, 0x1072bu);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x4u)), (c.r[3] & 0xFFFFu));
    // 01072f  dec bx
    X86_AT(c, 0x1072fu);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_dec(c, v, 2)); }
    // 010731  mov word ptr [edi + 0x5a], bx
    X86_AT(c, 0x10731u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x5Au)), (c.r[3] & 0xFFFFu));
    // 010735  shr ebx, 0x10
    X86_AT(c, 0x10735u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[3] = r; }
    // 010738  mov word ptr [edi + 6], bx
    X86_AT(c, 0x10738u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x6u)), (c.r[3] & 0xFFFFu));
    // 01073c  dec bx
    X86_AT(c, 0x1073cu);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_dec(c, v, 2)); }
    // 01073e  mov word ptr [edi + 0x5c], bx
    X86_AT(c, 0x1073eu);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x5Cu)), (c.r[3] & 0xFFFFu));
    // 010742  mov ebx, dword ptr cs:[edx*8 + 0x10660]
    X86_AT(c, 0x10742u);
    c.r[3] = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 8 + 0x10660u)));
    // 01074a  mov word ptr [edi], bx
    X86_AT(c, 0x1074au);
    wr16((c.sbase[3] + (uint32_t)(c.r[7])), (c.r[3] & 0xFFFFu));
    // 01074d  mov word ptr [edi + 0x52], bx
    X86_AT(c, 0x1074du);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x52u)), (c.r[3] & 0xFFFFu));
    // 010751  mov word ptr [edi + 0x56], bx
    X86_AT(c, 0x10751u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x56u)), (c.r[3] & 0xFFFFu));
    // 010755  shr ebx, 0x10
    X86_AT(c, 0x10755u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[3] = r; }
    // 010758  mov word ptr [edi + 2], bx
    X86_AT(c, 0x10758u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x2u)), (c.r[3] & 0xFFFFu));
    // 01075c  mov word ptr [edi + 0x54], bx
    X86_AT(c, 0x1075cu);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x54u)), (c.r[3] & 0xFFFFu));
    // 010760  mov word ptr [edi + 0x58], bx
    X86_AT(c, 0x10760u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x58u)), (c.r[3] & 0xFFFFu));
L_10764:
    X86_TICK(c, 23);
    // 010764  push edi
    X86_AT(c, 0x10764u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 010765  push ds
    X86_AT(c, 0x10765u);
    push32(c, c.sreg[3]);
    // 010766  pop gs
    X86_AT(c, 0x10766u);
    x86_load_seg(c, 5, pop32(c) & 0xFFFFu);
    // 010768  mov ah, 5
    X86_AT(c, 0x10768u);
    s8(c, 4, 0x5u);
    // 01076a  add al, 0x40
    X86_AT(c, 0x1076au);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, 0x40u, 0, 1)); }
    // 01076c  add edi, 0x62
    X86_AT(c, 0x1076cu);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x62u, 0, 4); }
    // 01076f  push cs
    X86_AT(c, 0x1076fu);
    push32(c, c.sreg[1]);
    // 010770  call 0x280
    X86_AT(c, 0x10770u);
    push32(c, 0x10775u); f_00000280(c); X86_RET(c, 0x10775u);
    X86_TICK(c, 16);
    // 010775  pop edi
    X86_AT(c, 0x10775u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 010776  cmp byte ptr [edi + 0x4d], 0
    X86_AT(c, 0x10776u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x4Du))), 0x0u, 0, 1);
    // 01077a  je 0x10781
    X86_AT(c, 0x1077au);
    if (x86_cc(c, 4)) { goto L_10781; }
    X86_TICK(c, 7);
    // 01077c  call 0x10bd0
    X86_AT(c, 0x1077cu);
    push32(c, 0x10781u); f_00010bd0(c); X86_RET(c, 0x10781u);
L_10781:
    X86_TICK(c, 16);
    // 010781  popfd 
    X86_AT(c, 0x10781u);
    x86_popfd(c, 4);
    // 010782  ret 
    X86_AT(c, 0x10782u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x10711u, "ran off the end of a function");
}
void f_00010715(X86Cpu& c) {
    X86_TICK(c, 5);
    // 010715  je 0x10764
    X86_AT(c, 0x10715u);
    if (x86_cc(c, 4)) { goto L_10764; }
    X86_TICK(c, 47);
    // 01071b  movzx edx, al
    X86_AT(c, 0x1071bu);
    c.r[2] = g8(c, 0);
    // 01071e  movzx edx, byte ptr [edi + edx*1 + 0x4f]
    X86_AT(c, 0x1071eu);
    c.r[2] = rd8((c.sbase[3] + (uint32_t)(c.r[7] + c.r[2] + 0x4Fu)));
    // 010723  mov ebx, dword ptr cs:[edx*8 + 0x1065c]
    X86_AT(c, 0x10723u);
    c.r[3] = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 8 + 0x1065Cu)));
    // 01072b  mov word ptr [edi + 4], bx
    X86_AT(c, 0x1072bu);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x4u)), (c.r[3] & 0xFFFFu));
    // 01072f  dec bx
    X86_AT(c, 0x1072fu);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_dec(c, v, 2)); }
    // 010731  mov word ptr [edi + 0x5a], bx
    X86_AT(c, 0x10731u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x5Au)), (c.r[3] & 0xFFFFu));
    // 010735  shr ebx, 0x10
    X86_AT(c, 0x10735u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[3] = r; }
    // 010738  mov word ptr [edi + 6], bx
    X86_AT(c, 0x10738u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x6u)), (c.r[3] & 0xFFFFu));
    // 01073c  dec bx
    X86_AT(c, 0x1073cu);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_dec(c, v, 2)); }
    // 01073e  mov word ptr [edi + 0x5c], bx
    X86_AT(c, 0x1073eu);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x5Cu)), (c.r[3] & 0xFFFFu));
    // 010742  mov ebx, dword ptr cs:[edx*8 + 0x10660]
    X86_AT(c, 0x10742u);
    c.r[3] = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 8 + 0x10660u)));
    // 01074a  mov word ptr [edi], bx
    X86_AT(c, 0x1074au);
    wr16((c.sbase[3] + (uint32_t)(c.r[7])), (c.r[3] & 0xFFFFu));
    // 01074d  mov word ptr [edi + 0x52], bx
    X86_AT(c, 0x1074du);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x52u)), (c.r[3] & 0xFFFFu));
    // 010751  mov word ptr [edi + 0x56], bx
    X86_AT(c, 0x10751u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x56u)), (c.r[3] & 0xFFFFu));
    // 010755  shr ebx, 0x10
    X86_AT(c, 0x10755u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[3] = r; }
    // 010758  mov word ptr [edi + 2], bx
    X86_AT(c, 0x10758u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x2u)), (c.r[3] & 0xFFFFu));
    // 01075c  mov word ptr [edi + 0x54], bx
    X86_AT(c, 0x1075cu);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x54u)), (c.r[3] & 0xFFFFu));
    // 010760  mov word ptr [edi + 0x58], bx
    X86_AT(c, 0x10760u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x58u)), (c.r[3] & 0xFFFFu));
L_10764:
    X86_TICK(c, 23);
    // 010764  push edi
    X86_AT(c, 0x10764u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 010765  push ds
    X86_AT(c, 0x10765u);
    push32(c, c.sreg[3]);
    // 010766  pop gs
    X86_AT(c, 0x10766u);
    x86_load_seg(c, 5, pop32(c) & 0xFFFFu);
    // 010768  mov ah, 5
    X86_AT(c, 0x10768u);
    s8(c, 4, 0x5u);
    // 01076a  add al, 0x40
    X86_AT(c, 0x1076au);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, 0x40u, 0, 1)); }
    // 01076c  add edi, 0x62
    X86_AT(c, 0x1076cu);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x62u, 0, 4); }
    // 01076f  push cs
    X86_AT(c, 0x1076fu);
    push32(c, c.sreg[1]);
    // 010770  call 0x280
    X86_AT(c, 0x10770u);
    push32(c, 0x10775u); f_00000280(c); X86_RET(c, 0x10775u);
    X86_TICK(c, 16);
    // 010775  pop edi
    X86_AT(c, 0x10775u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 010776  cmp byte ptr [edi + 0x4d], 0
    X86_AT(c, 0x10776u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x4Du))), 0x0u, 0, 1);
    // 01077a  je 0x10781
    X86_AT(c, 0x1077au);
    if (x86_cc(c, 4)) { goto L_10781; }
    X86_TICK(c, 7);
    // 01077c  call 0x10bd0
    X86_AT(c, 0x1077cu);
    push32(c, 0x10781u); f_00010bd0(c); X86_RET(c, 0x10781u);
L_10781:
    X86_TICK(c, 16);
    // 010781  popfd 
    X86_AT(c, 0x10781u);
    x86_popfd(c, 4);
    // 010782  ret 
    X86_AT(c, 0x10782u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x10715u, "ran off the end of a function");
}
void f_0001071b(X86Cpu& c) {
    X86_TICK(c, 70);
    // 01071b  movzx edx, al
    X86_AT(c, 0x1071bu);
    c.r[2] = g8(c, 0);
    // 01071e  movzx edx, byte ptr [edi + edx*1 + 0x4f]
    X86_AT(c, 0x1071eu);
    c.r[2] = rd8((c.sbase[3] + (uint32_t)(c.r[7] + c.r[2] + 0x4Fu)));
    // 010723  mov ebx, dword ptr cs:[edx*8 + 0x1065c]
    X86_AT(c, 0x10723u);
    c.r[3] = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 8 + 0x1065Cu)));
    // 01072b  mov word ptr [edi + 4], bx
    X86_AT(c, 0x1072bu);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x4u)), (c.r[3] & 0xFFFFu));
    // 01072f  dec bx
    X86_AT(c, 0x1072fu);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_dec(c, v, 2)); }
    // 010731  mov word ptr [edi + 0x5a], bx
    X86_AT(c, 0x10731u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x5Au)), (c.r[3] & 0xFFFFu));
    // 010735  shr ebx, 0x10
    X86_AT(c, 0x10735u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[3] = r; }
    // 010738  mov word ptr [edi + 6], bx
    X86_AT(c, 0x10738u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x6u)), (c.r[3] & 0xFFFFu));
    // 01073c  dec bx
    X86_AT(c, 0x1073cu);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_dec(c, v, 2)); }
    // 01073e  mov word ptr [edi + 0x5c], bx
    X86_AT(c, 0x1073eu);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x5Cu)), (c.r[3] & 0xFFFFu));
    // 010742  mov ebx, dword ptr cs:[edx*8 + 0x10660]
    X86_AT(c, 0x10742u);
    c.r[3] = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 8 + 0x10660u)));
    // 01074a  mov word ptr [edi], bx
    X86_AT(c, 0x1074au);
    wr16((c.sbase[3] + (uint32_t)(c.r[7])), (c.r[3] & 0xFFFFu));
    // 01074d  mov word ptr [edi + 0x52], bx
    X86_AT(c, 0x1074du);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x52u)), (c.r[3] & 0xFFFFu));
    // 010751  mov word ptr [edi + 0x56], bx
    X86_AT(c, 0x10751u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x56u)), (c.r[3] & 0xFFFFu));
    // 010755  shr ebx, 0x10
    X86_AT(c, 0x10755u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[3] = r; }
    // 010758  mov word ptr [edi + 2], bx
    X86_AT(c, 0x10758u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x2u)), (c.r[3] & 0xFFFFu));
    // 01075c  mov word ptr [edi + 0x54], bx
    X86_AT(c, 0x1075cu);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x54u)), (c.r[3] & 0xFFFFu));
    // 010760  mov word ptr [edi + 0x58], bx
    X86_AT(c, 0x10760u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x58u)), (c.r[3] & 0xFFFFu));
    // 010764  push edi
    X86_AT(c, 0x10764u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 010765  push ds
    X86_AT(c, 0x10765u);
    push32(c, c.sreg[3]);
    // 010766  pop gs
    X86_AT(c, 0x10766u);
    x86_load_seg(c, 5, pop32(c) & 0xFFFFu);
    // 010768  mov ah, 5
    X86_AT(c, 0x10768u);
    s8(c, 4, 0x5u);
    // 01076a  add al, 0x40
    X86_AT(c, 0x1076au);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, 0x40u, 0, 1)); }
    // 01076c  add edi, 0x62
    X86_AT(c, 0x1076cu);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x62u, 0, 4); }
    // 01076f  push cs
    X86_AT(c, 0x1076fu);
    push32(c, c.sreg[1]);
    // 010770  call 0x280
    X86_AT(c, 0x10770u);
    push32(c, 0x10775u); f_00000280(c); X86_RET(c, 0x10775u);
    X86_TICK(c, 16);
    // 010775  pop edi
    X86_AT(c, 0x10775u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 010776  cmp byte ptr [edi + 0x4d], 0
    X86_AT(c, 0x10776u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x4Du))), 0x0u, 0, 1);
    // 01077a  je 0x10781
    X86_AT(c, 0x1077au);
    if (x86_cc(c, 4)) { goto L_10781; }
    X86_TICK(c, 7);
    // 01077c  call 0x10bd0
    X86_AT(c, 0x1077cu);
    push32(c, 0x10781u); f_00010bd0(c); X86_RET(c, 0x10781u);
L_10781:
    X86_TICK(c, 16);
    // 010781  popfd 
    X86_AT(c, 0x10781u);
    x86_popfd(c, 4);
    // 010782  ret 
    X86_AT(c, 0x10782u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x1071bu, "ran off the end of a function");
}
void f_0001071e(X86Cpu& c) {
    X86_TICK(c, 67);
    // 01071e  movzx edx, byte ptr [edi + edx*1 + 0x4f]
    X86_AT(c, 0x1071eu);
    c.r[2] = rd8((c.sbase[3] + (uint32_t)(c.r[7] + c.r[2] + 0x4Fu)));
    // 010723  mov ebx, dword ptr cs:[edx*8 + 0x1065c]
    X86_AT(c, 0x10723u);
    c.r[3] = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 8 + 0x1065Cu)));
    // 01072b  mov word ptr [edi + 4], bx
    X86_AT(c, 0x1072bu);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x4u)), (c.r[3] & 0xFFFFu));
    // 01072f  dec bx
    X86_AT(c, 0x1072fu);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_dec(c, v, 2)); }
    // 010731  mov word ptr [edi + 0x5a], bx
    X86_AT(c, 0x10731u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x5Au)), (c.r[3] & 0xFFFFu));
    // 010735  shr ebx, 0x10
    X86_AT(c, 0x10735u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[3] = r; }
    // 010738  mov word ptr [edi + 6], bx
    X86_AT(c, 0x10738u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x6u)), (c.r[3] & 0xFFFFu));
    // 01073c  dec bx
    X86_AT(c, 0x1073cu);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_dec(c, v, 2)); }
    // 01073e  mov word ptr [edi + 0x5c], bx
    X86_AT(c, 0x1073eu);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x5Cu)), (c.r[3] & 0xFFFFu));
    // 010742  mov ebx, dword ptr cs:[edx*8 + 0x10660]
    X86_AT(c, 0x10742u);
    c.r[3] = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 8 + 0x10660u)));
    // 01074a  mov word ptr [edi], bx
    X86_AT(c, 0x1074au);
    wr16((c.sbase[3] + (uint32_t)(c.r[7])), (c.r[3] & 0xFFFFu));
    // 01074d  mov word ptr [edi + 0x52], bx
    X86_AT(c, 0x1074du);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x52u)), (c.r[3] & 0xFFFFu));
    // 010751  mov word ptr [edi + 0x56], bx
    X86_AT(c, 0x10751u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x56u)), (c.r[3] & 0xFFFFu));
    // 010755  shr ebx, 0x10
    X86_AT(c, 0x10755u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[3] = r; }
    // 010758  mov word ptr [edi + 2], bx
    X86_AT(c, 0x10758u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x2u)), (c.r[3] & 0xFFFFu));
    // 01075c  mov word ptr [edi + 0x54], bx
    X86_AT(c, 0x1075cu);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x54u)), (c.r[3] & 0xFFFFu));
    // 010760  mov word ptr [edi + 0x58], bx
    X86_AT(c, 0x10760u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x58u)), (c.r[3] & 0xFFFFu));
    // 010764  push edi
    X86_AT(c, 0x10764u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 010765  push ds
    X86_AT(c, 0x10765u);
    push32(c, c.sreg[3]);
    // 010766  pop gs
    X86_AT(c, 0x10766u);
    x86_load_seg(c, 5, pop32(c) & 0xFFFFu);
    // 010768  mov ah, 5
    X86_AT(c, 0x10768u);
    s8(c, 4, 0x5u);
    // 01076a  add al, 0x40
    X86_AT(c, 0x1076au);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, 0x40u, 0, 1)); }
    // 01076c  add edi, 0x62
    X86_AT(c, 0x1076cu);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x62u, 0, 4); }
    // 01076f  push cs
    X86_AT(c, 0x1076fu);
    push32(c, c.sreg[1]);
    // 010770  call 0x280
    X86_AT(c, 0x10770u);
    push32(c, 0x10775u); f_00000280(c); X86_RET(c, 0x10775u);
    X86_TICK(c, 16);
    // 010775  pop edi
    X86_AT(c, 0x10775u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 010776  cmp byte ptr [edi + 0x4d], 0
    X86_AT(c, 0x10776u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x4Du))), 0x0u, 0, 1);
    // 01077a  je 0x10781
    X86_AT(c, 0x1077au);
    if (x86_cc(c, 4)) { goto L_10781; }
    X86_TICK(c, 7);
    // 01077c  call 0x10bd0
    X86_AT(c, 0x1077cu);
    push32(c, 0x10781u); f_00010bd0(c); X86_RET(c, 0x10781u);
L_10781:
    X86_TICK(c, 16);
    // 010781  popfd 
    X86_AT(c, 0x10781u);
    x86_popfd(c, 4);
    // 010782  ret 
    X86_AT(c, 0x10782u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x1071eu, "ran off the end of a function");
}
void f_00010723(X86Cpu& c) {
    X86_TICK(c, 61);
    // 010723  mov ebx, dword ptr cs:[edx*8 + 0x1065c]
    X86_AT(c, 0x10723u);
    c.r[3] = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 8 + 0x1065Cu)));
    // 01072b  mov word ptr [edi + 4], bx
    X86_AT(c, 0x1072bu);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x4u)), (c.r[3] & 0xFFFFu));
    // 01072f  dec bx
    X86_AT(c, 0x1072fu);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_dec(c, v, 2)); }
    // 010731  mov word ptr [edi + 0x5a], bx
    X86_AT(c, 0x10731u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x5Au)), (c.r[3] & 0xFFFFu));
    // 010735  shr ebx, 0x10
    X86_AT(c, 0x10735u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[3] = r; }
    // 010738  mov word ptr [edi + 6], bx
    X86_AT(c, 0x10738u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x6u)), (c.r[3] & 0xFFFFu));
    // 01073c  dec bx
    X86_AT(c, 0x1073cu);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_dec(c, v, 2)); }
    // 01073e  mov word ptr [edi + 0x5c], bx
    X86_AT(c, 0x1073eu);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x5Cu)), (c.r[3] & 0xFFFFu));
    // 010742  mov ebx, dword ptr cs:[edx*8 + 0x10660]
    X86_AT(c, 0x10742u);
    c.r[3] = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 8 + 0x10660u)));
    // 01074a  mov word ptr [edi], bx
    X86_AT(c, 0x1074au);
    wr16((c.sbase[3] + (uint32_t)(c.r[7])), (c.r[3] & 0xFFFFu));
    // 01074d  mov word ptr [edi + 0x52], bx
    X86_AT(c, 0x1074du);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x52u)), (c.r[3] & 0xFFFFu));
    // 010751  mov word ptr [edi + 0x56], bx
    X86_AT(c, 0x10751u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x56u)), (c.r[3] & 0xFFFFu));
    // 010755  shr ebx, 0x10
    X86_AT(c, 0x10755u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[3] = r; }
    // 010758  mov word ptr [edi + 2], bx
    X86_AT(c, 0x10758u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x2u)), (c.r[3] & 0xFFFFu));
    // 01075c  mov word ptr [edi + 0x54], bx
    X86_AT(c, 0x1075cu);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x54u)), (c.r[3] & 0xFFFFu));
    // 010760  mov word ptr [edi + 0x58], bx
    X86_AT(c, 0x10760u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x58u)), (c.r[3] & 0xFFFFu));
    // 010764  push edi
    X86_AT(c, 0x10764u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 010765  push ds
    X86_AT(c, 0x10765u);
    push32(c, c.sreg[3]);
    // 010766  pop gs
    X86_AT(c, 0x10766u);
    x86_load_seg(c, 5, pop32(c) & 0xFFFFu);
    // 010768  mov ah, 5
    X86_AT(c, 0x10768u);
    s8(c, 4, 0x5u);
    // 01076a  add al, 0x40
    X86_AT(c, 0x1076au);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, 0x40u, 0, 1)); }
    // 01076c  add edi, 0x62
    X86_AT(c, 0x1076cu);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x62u, 0, 4); }
    // 01076f  push cs
    X86_AT(c, 0x1076fu);
    push32(c, c.sreg[1]);
    // 010770  call 0x280
    X86_AT(c, 0x10770u);
    push32(c, 0x10775u); f_00000280(c); X86_RET(c, 0x10775u);
    X86_TICK(c, 16);
    // 010775  pop edi
    X86_AT(c, 0x10775u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 010776  cmp byte ptr [edi + 0x4d], 0
    X86_AT(c, 0x10776u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x4Du))), 0x0u, 0, 1);
    // 01077a  je 0x10781
    X86_AT(c, 0x1077au);
    if (x86_cc(c, 4)) { goto L_10781; }
    X86_TICK(c, 7);
    // 01077c  call 0x10bd0
    X86_AT(c, 0x1077cu);
    push32(c, 0x10781u); f_00010bd0(c); X86_RET(c, 0x10781u);
L_10781:
    X86_TICK(c, 16);
    // 010781  popfd 
    X86_AT(c, 0x10781u);
    x86_popfd(c, 4);
    // 010782  ret 
    X86_AT(c, 0x10782u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x10723u, "ran off the end of a function");
}
void f_0001072b(X86Cpu& c) {
    X86_TICK(c, 57);
    // 01072b  mov word ptr [edi + 4], bx
    X86_AT(c, 0x1072bu);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x4u)), (c.r[3] & 0xFFFFu));
    // 01072f  dec bx
    X86_AT(c, 0x1072fu);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_dec(c, v, 2)); }
    // 010731  mov word ptr [edi + 0x5a], bx
    X86_AT(c, 0x10731u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x5Au)), (c.r[3] & 0xFFFFu));
    // 010735  shr ebx, 0x10
    X86_AT(c, 0x10735u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[3] = r; }
    // 010738  mov word ptr [edi + 6], bx
    X86_AT(c, 0x10738u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x6u)), (c.r[3] & 0xFFFFu));
    // 01073c  dec bx
    X86_AT(c, 0x1073cu);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_dec(c, v, 2)); }
    // 01073e  mov word ptr [edi + 0x5c], bx
    X86_AT(c, 0x1073eu);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x5Cu)), (c.r[3] & 0xFFFFu));
    // 010742  mov ebx, dword ptr cs:[edx*8 + 0x10660]
    X86_AT(c, 0x10742u);
    c.r[3] = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 8 + 0x10660u)));
    // 01074a  mov word ptr [edi], bx
    X86_AT(c, 0x1074au);
    wr16((c.sbase[3] + (uint32_t)(c.r[7])), (c.r[3] & 0xFFFFu));
    // 01074d  mov word ptr [edi + 0x52], bx
    X86_AT(c, 0x1074du);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x52u)), (c.r[3] & 0xFFFFu));
    // 010751  mov word ptr [edi + 0x56], bx
    X86_AT(c, 0x10751u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x56u)), (c.r[3] & 0xFFFFu));
    // 010755  shr ebx, 0x10
    X86_AT(c, 0x10755u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[3] = r; }
    // 010758  mov word ptr [edi + 2], bx
    X86_AT(c, 0x10758u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x2u)), (c.r[3] & 0xFFFFu));
    // 01075c  mov word ptr [edi + 0x54], bx
    X86_AT(c, 0x1075cu);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x54u)), (c.r[3] & 0xFFFFu));
    // 010760  mov word ptr [edi + 0x58], bx
    X86_AT(c, 0x10760u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x58u)), (c.r[3] & 0xFFFFu));
    // 010764  push edi
    X86_AT(c, 0x10764u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 010765  push ds
    X86_AT(c, 0x10765u);
    push32(c, c.sreg[3]);
    // 010766  pop gs
    X86_AT(c, 0x10766u);
    x86_load_seg(c, 5, pop32(c) & 0xFFFFu);
    // 010768  mov ah, 5
    X86_AT(c, 0x10768u);
    s8(c, 4, 0x5u);
    // 01076a  add al, 0x40
    X86_AT(c, 0x1076au);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, 0x40u, 0, 1)); }
    // 01076c  add edi, 0x62
    X86_AT(c, 0x1076cu);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x62u, 0, 4); }
    // 01076f  push cs
    X86_AT(c, 0x1076fu);
    push32(c, c.sreg[1]);
    // 010770  call 0x280
    X86_AT(c, 0x10770u);
    push32(c, 0x10775u); f_00000280(c); X86_RET(c, 0x10775u);
    X86_TICK(c, 16);
    // 010775  pop edi
    X86_AT(c, 0x10775u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 010776  cmp byte ptr [edi + 0x4d], 0
    X86_AT(c, 0x10776u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x4Du))), 0x0u, 0, 1);
    // 01077a  je 0x10781
    X86_AT(c, 0x1077au);
    if (x86_cc(c, 4)) { goto L_10781; }
    X86_TICK(c, 7);
    // 01077c  call 0x10bd0
    X86_AT(c, 0x1077cu);
    push32(c, 0x10781u); f_00010bd0(c); X86_RET(c, 0x10781u);
L_10781:
    X86_TICK(c, 16);
    // 010781  popfd 
    X86_AT(c, 0x10781u);
    x86_popfd(c, 4);
    // 010782  ret 
    X86_AT(c, 0x10782u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x1072bu, "ran off the end of a function");
}
void f_0001072f(X86Cpu& c) {
    X86_TICK(c, 55);
    // 01072f  dec bx
    X86_AT(c, 0x1072fu);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_dec(c, v, 2)); }
    // 010731  mov word ptr [edi + 0x5a], bx
    X86_AT(c, 0x10731u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x5Au)), (c.r[3] & 0xFFFFu));
    // 010735  shr ebx, 0x10
    X86_AT(c, 0x10735u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[3] = r; }
    // 010738  mov word ptr [edi + 6], bx
    X86_AT(c, 0x10738u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x6u)), (c.r[3] & 0xFFFFu));
    // 01073c  dec bx
    X86_AT(c, 0x1073cu);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_dec(c, v, 2)); }
    // 01073e  mov word ptr [edi + 0x5c], bx
    X86_AT(c, 0x1073eu);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x5Cu)), (c.r[3] & 0xFFFFu));
    // 010742  mov ebx, dword ptr cs:[edx*8 + 0x10660]
    X86_AT(c, 0x10742u);
    c.r[3] = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 8 + 0x10660u)));
    // 01074a  mov word ptr [edi], bx
    X86_AT(c, 0x1074au);
    wr16((c.sbase[3] + (uint32_t)(c.r[7])), (c.r[3] & 0xFFFFu));
    // 01074d  mov word ptr [edi + 0x52], bx
    X86_AT(c, 0x1074du);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x52u)), (c.r[3] & 0xFFFFu));
    // 010751  mov word ptr [edi + 0x56], bx
    X86_AT(c, 0x10751u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x56u)), (c.r[3] & 0xFFFFu));
    // 010755  shr ebx, 0x10
    X86_AT(c, 0x10755u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[3] = r; }
    // 010758  mov word ptr [edi + 2], bx
    X86_AT(c, 0x10758u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x2u)), (c.r[3] & 0xFFFFu));
    // 01075c  mov word ptr [edi + 0x54], bx
    X86_AT(c, 0x1075cu);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x54u)), (c.r[3] & 0xFFFFu));
    // 010760  mov word ptr [edi + 0x58], bx
    X86_AT(c, 0x10760u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x58u)), (c.r[3] & 0xFFFFu));
    // 010764  push edi
    X86_AT(c, 0x10764u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 010765  push ds
    X86_AT(c, 0x10765u);
    push32(c, c.sreg[3]);
    // 010766  pop gs
    X86_AT(c, 0x10766u);
    x86_load_seg(c, 5, pop32(c) & 0xFFFFu);
    // 010768  mov ah, 5
    X86_AT(c, 0x10768u);
    s8(c, 4, 0x5u);
    // 01076a  add al, 0x40
    X86_AT(c, 0x1076au);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, 0x40u, 0, 1)); }
    // 01076c  add edi, 0x62
    X86_AT(c, 0x1076cu);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x62u, 0, 4); }
    // 01076f  push cs
    X86_AT(c, 0x1076fu);
    push32(c, c.sreg[1]);
    // 010770  call 0x280
    X86_AT(c, 0x10770u);
    push32(c, 0x10775u); f_00000280(c); X86_RET(c, 0x10775u);
    X86_TICK(c, 16);
    // 010775  pop edi
    X86_AT(c, 0x10775u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 010776  cmp byte ptr [edi + 0x4d], 0
    X86_AT(c, 0x10776u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x4Du))), 0x0u, 0, 1);
    // 01077a  je 0x10781
    X86_AT(c, 0x1077au);
    if (x86_cc(c, 4)) { goto L_10781; }
    X86_TICK(c, 7);
    // 01077c  call 0x10bd0
    X86_AT(c, 0x1077cu);
    push32(c, 0x10781u); f_00010bd0(c); X86_RET(c, 0x10781u);
L_10781:
    X86_TICK(c, 16);
    // 010781  popfd 
    X86_AT(c, 0x10781u);
    x86_popfd(c, 4);
    // 010782  ret 
    X86_AT(c, 0x10782u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x1072fu, "ran off the end of a function");
}
void f_00010731(X86Cpu& c) {
    X86_TICK(c, 53);
    // 010731  mov word ptr [edi + 0x5a], bx
    X86_AT(c, 0x10731u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x5Au)), (c.r[3] & 0xFFFFu));
    // 010735  shr ebx, 0x10
    X86_AT(c, 0x10735u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[3] = r; }
    // 010738  mov word ptr [edi + 6], bx
    X86_AT(c, 0x10738u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x6u)), (c.r[3] & 0xFFFFu));
    // 01073c  dec bx
    X86_AT(c, 0x1073cu);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_dec(c, v, 2)); }
    // 01073e  mov word ptr [edi + 0x5c], bx
    X86_AT(c, 0x1073eu);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x5Cu)), (c.r[3] & 0xFFFFu));
    // 010742  mov ebx, dword ptr cs:[edx*8 + 0x10660]
    X86_AT(c, 0x10742u);
    c.r[3] = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 8 + 0x10660u)));
    // 01074a  mov word ptr [edi], bx
    X86_AT(c, 0x1074au);
    wr16((c.sbase[3] + (uint32_t)(c.r[7])), (c.r[3] & 0xFFFFu));
    // 01074d  mov word ptr [edi + 0x52], bx
    X86_AT(c, 0x1074du);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x52u)), (c.r[3] & 0xFFFFu));
    // 010751  mov word ptr [edi + 0x56], bx
    X86_AT(c, 0x10751u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x56u)), (c.r[3] & 0xFFFFu));
    // 010755  shr ebx, 0x10
    X86_AT(c, 0x10755u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[3] = r; }
    // 010758  mov word ptr [edi + 2], bx
    X86_AT(c, 0x10758u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x2u)), (c.r[3] & 0xFFFFu));
    // 01075c  mov word ptr [edi + 0x54], bx
    X86_AT(c, 0x1075cu);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x54u)), (c.r[3] & 0xFFFFu));
    // 010760  mov word ptr [edi + 0x58], bx
    X86_AT(c, 0x10760u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x58u)), (c.r[3] & 0xFFFFu));
    // 010764  push edi
    X86_AT(c, 0x10764u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 010765  push ds
    X86_AT(c, 0x10765u);
    push32(c, c.sreg[3]);
    // 010766  pop gs
    X86_AT(c, 0x10766u);
    x86_load_seg(c, 5, pop32(c) & 0xFFFFu);
    // 010768  mov ah, 5
    X86_AT(c, 0x10768u);
    s8(c, 4, 0x5u);
    // 01076a  add al, 0x40
    X86_AT(c, 0x1076au);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, 0x40u, 0, 1)); }
    // 01076c  add edi, 0x62
    X86_AT(c, 0x1076cu);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x62u, 0, 4); }
    // 01076f  push cs
    X86_AT(c, 0x1076fu);
    push32(c, c.sreg[1]);
    // 010770  call 0x280
    X86_AT(c, 0x10770u);
    push32(c, 0x10775u); f_00000280(c); X86_RET(c, 0x10775u);
    X86_TICK(c, 16);
    // 010775  pop edi
    X86_AT(c, 0x10775u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 010776  cmp byte ptr [edi + 0x4d], 0
    X86_AT(c, 0x10776u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x4Du))), 0x0u, 0, 1);
    // 01077a  je 0x10781
    X86_AT(c, 0x1077au);
    if (x86_cc(c, 4)) { goto L_10781; }
    X86_TICK(c, 7);
    // 01077c  call 0x10bd0
    X86_AT(c, 0x1077cu);
    push32(c, 0x10781u); f_00010bd0(c); X86_RET(c, 0x10781u);
L_10781:
    X86_TICK(c, 16);
    // 010781  popfd 
    X86_AT(c, 0x10781u);
    x86_popfd(c, 4);
    // 010782  ret 
    X86_AT(c, 0x10782u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x10731u, "ran off the end of a function");
}
void f_00010735(X86Cpu& c) {
    X86_TICK(c, 51);
    // 010735  shr ebx, 0x10
    X86_AT(c, 0x10735u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[3] = r; }
    // 010738  mov word ptr [edi + 6], bx
    X86_AT(c, 0x10738u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x6u)), (c.r[3] & 0xFFFFu));
    // 01073c  dec bx
    X86_AT(c, 0x1073cu);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_dec(c, v, 2)); }
    // 01073e  mov word ptr [edi + 0x5c], bx
    X86_AT(c, 0x1073eu);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x5Cu)), (c.r[3] & 0xFFFFu));
    // 010742  mov ebx, dword ptr cs:[edx*8 + 0x10660]
    X86_AT(c, 0x10742u);
    c.r[3] = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 8 + 0x10660u)));
    // 01074a  mov word ptr [edi], bx
    X86_AT(c, 0x1074au);
    wr16((c.sbase[3] + (uint32_t)(c.r[7])), (c.r[3] & 0xFFFFu));
    // 01074d  mov word ptr [edi + 0x52], bx
    X86_AT(c, 0x1074du);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x52u)), (c.r[3] & 0xFFFFu));
    // 010751  mov word ptr [edi + 0x56], bx
    X86_AT(c, 0x10751u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x56u)), (c.r[3] & 0xFFFFu));
    // 010755  shr ebx, 0x10
    X86_AT(c, 0x10755u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[3] = r; }
    // 010758  mov word ptr [edi + 2], bx
    X86_AT(c, 0x10758u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x2u)), (c.r[3] & 0xFFFFu));
    // 01075c  mov word ptr [edi + 0x54], bx
    X86_AT(c, 0x1075cu);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x54u)), (c.r[3] & 0xFFFFu));
    // 010760  mov word ptr [edi + 0x58], bx
    X86_AT(c, 0x10760u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x58u)), (c.r[3] & 0xFFFFu));
    // 010764  push edi
    X86_AT(c, 0x10764u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 010765  push ds
    X86_AT(c, 0x10765u);
    push32(c, c.sreg[3]);
    // 010766  pop gs
    X86_AT(c, 0x10766u);
    x86_load_seg(c, 5, pop32(c) & 0xFFFFu);
    // 010768  mov ah, 5
    X86_AT(c, 0x10768u);
    s8(c, 4, 0x5u);
    // 01076a  add al, 0x40
    X86_AT(c, 0x1076au);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, 0x40u, 0, 1)); }
    // 01076c  add edi, 0x62
    X86_AT(c, 0x1076cu);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x62u, 0, 4); }
    // 01076f  push cs
    X86_AT(c, 0x1076fu);
    push32(c, c.sreg[1]);
    // 010770  call 0x280
    X86_AT(c, 0x10770u);
    push32(c, 0x10775u); f_00000280(c); X86_RET(c, 0x10775u);
    X86_TICK(c, 16);
    // 010775  pop edi
    X86_AT(c, 0x10775u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 010776  cmp byte ptr [edi + 0x4d], 0
    X86_AT(c, 0x10776u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x4Du))), 0x0u, 0, 1);
    // 01077a  je 0x10781
    X86_AT(c, 0x1077au);
    if (x86_cc(c, 4)) { goto L_10781; }
    X86_TICK(c, 7);
    // 01077c  call 0x10bd0
    X86_AT(c, 0x1077cu);
    push32(c, 0x10781u); f_00010bd0(c); X86_RET(c, 0x10781u);
L_10781:
    X86_TICK(c, 16);
    // 010781  popfd 
    X86_AT(c, 0x10781u);
    x86_popfd(c, 4);
    // 010782  ret 
    X86_AT(c, 0x10782u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x10735u, "ran off the end of a function");
}
void f_00010738(X86Cpu& c) {
    X86_TICK(c, 48);
    // 010738  mov word ptr [edi + 6], bx
    X86_AT(c, 0x10738u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x6u)), (c.r[3] & 0xFFFFu));
    // 01073c  dec bx
    X86_AT(c, 0x1073cu);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_dec(c, v, 2)); }
    // 01073e  mov word ptr [edi + 0x5c], bx
    X86_AT(c, 0x1073eu);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x5Cu)), (c.r[3] & 0xFFFFu));
    // 010742  mov ebx, dword ptr cs:[edx*8 + 0x10660]
    X86_AT(c, 0x10742u);
    c.r[3] = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 8 + 0x10660u)));
    // 01074a  mov word ptr [edi], bx
    X86_AT(c, 0x1074au);
    wr16((c.sbase[3] + (uint32_t)(c.r[7])), (c.r[3] & 0xFFFFu));
    // 01074d  mov word ptr [edi + 0x52], bx
    X86_AT(c, 0x1074du);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x52u)), (c.r[3] & 0xFFFFu));
    // 010751  mov word ptr [edi + 0x56], bx
    X86_AT(c, 0x10751u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x56u)), (c.r[3] & 0xFFFFu));
    // 010755  shr ebx, 0x10
    X86_AT(c, 0x10755u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[3] = r; }
    // 010758  mov word ptr [edi + 2], bx
    X86_AT(c, 0x10758u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x2u)), (c.r[3] & 0xFFFFu));
    // 01075c  mov word ptr [edi + 0x54], bx
    X86_AT(c, 0x1075cu);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x54u)), (c.r[3] & 0xFFFFu));
    // 010760  mov word ptr [edi + 0x58], bx
    X86_AT(c, 0x10760u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x58u)), (c.r[3] & 0xFFFFu));
    // 010764  push edi
    X86_AT(c, 0x10764u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 010765  push ds
    X86_AT(c, 0x10765u);
    push32(c, c.sreg[3]);
    // 010766  pop gs
    X86_AT(c, 0x10766u);
    x86_load_seg(c, 5, pop32(c) & 0xFFFFu);
    // 010768  mov ah, 5
    X86_AT(c, 0x10768u);
    s8(c, 4, 0x5u);
    // 01076a  add al, 0x40
    X86_AT(c, 0x1076au);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, 0x40u, 0, 1)); }
    // 01076c  add edi, 0x62
    X86_AT(c, 0x1076cu);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x62u, 0, 4); }
    // 01076f  push cs
    X86_AT(c, 0x1076fu);
    push32(c, c.sreg[1]);
    // 010770  call 0x280
    X86_AT(c, 0x10770u);
    push32(c, 0x10775u); f_00000280(c); X86_RET(c, 0x10775u);
    X86_TICK(c, 16);
    // 010775  pop edi
    X86_AT(c, 0x10775u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 010776  cmp byte ptr [edi + 0x4d], 0
    X86_AT(c, 0x10776u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x4Du))), 0x0u, 0, 1);
    // 01077a  je 0x10781
    X86_AT(c, 0x1077au);
    if (x86_cc(c, 4)) { goto L_10781; }
    X86_TICK(c, 7);
    // 01077c  call 0x10bd0
    X86_AT(c, 0x1077cu);
    push32(c, 0x10781u); f_00010bd0(c); X86_RET(c, 0x10781u);
L_10781:
    X86_TICK(c, 16);
    // 010781  popfd 
    X86_AT(c, 0x10781u);
    x86_popfd(c, 4);
    // 010782  ret 
    X86_AT(c, 0x10782u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x10738u, "ran off the end of a function");
}
void f_0001073c(X86Cpu& c) {
    X86_TICK(c, 46);
    // 01073c  dec bx
    X86_AT(c, 0x1073cu);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_dec(c, v, 2)); }
    // 01073e  mov word ptr [edi + 0x5c], bx
    X86_AT(c, 0x1073eu);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x5Cu)), (c.r[3] & 0xFFFFu));
    // 010742  mov ebx, dword ptr cs:[edx*8 + 0x10660]
    X86_AT(c, 0x10742u);
    c.r[3] = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 8 + 0x10660u)));
    // 01074a  mov word ptr [edi], bx
    X86_AT(c, 0x1074au);
    wr16((c.sbase[3] + (uint32_t)(c.r[7])), (c.r[3] & 0xFFFFu));
    // 01074d  mov word ptr [edi + 0x52], bx
    X86_AT(c, 0x1074du);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x52u)), (c.r[3] & 0xFFFFu));
    // 010751  mov word ptr [edi + 0x56], bx
    X86_AT(c, 0x10751u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x56u)), (c.r[3] & 0xFFFFu));
    // 010755  shr ebx, 0x10
    X86_AT(c, 0x10755u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[3] = r; }
    // 010758  mov word ptr [edi + 2], bx
    X86_AT(c, 0x10758u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x2u)), (c.r[3] & 0xFFFFu));
    // 01075c  mov word ptr [edi + 0x54], bx
    X86_AT(c, 0x1075cu);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x54u)), (c.r[3] & 0xFFFFu));
    // 010760  mov word ptr [edi + 0x58], bx
    X86_AT(c, 0x10760u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x58u)), (c.r[3] & 0xFFFFu));
    // 010764  push edi
    X86_AT(c, 0x10764u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 010765  push ds
    X86_AT(c, 0x10765u);
    push32(c, c.sreg[3]);
    // 010766  pop gs
    X86_AT(c, 0x10766u);
    x86_load_seg(c, 5, pop32(c) & 0xFFFFu);
    // 010768  mov ah, 5
    X86_AT(c, 0x10768u);
    s8(c, 4, 0x5u);
    // 01076a  add al, 0x40
    X86_AT(c, 0x1076au);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, 0x40u, 0, 1)); }
    // 01076c  add edi, 0x62
    X86_AT(c, 0x1076cu);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x62u, 0, 4); }
    // 01076f  push cs
    X86_AT(c, 0x1076fu);
    push32(c, c.sreg[1]);
    // 010770  call 0x280
    X86_AT(c, 0x10770u);
    push32(c, 0x10775u); f_00000280(c); X86_RET(c, 0x10775u);
    X86_TICK(c, 16);
    // 010775  pop edi
    X86_AT(c, 0x10775u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 010776  cmp byte ptr [edi + 0x4d], 0
    X86_AT(c, 0x10776u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x4Du))), 0x0u, 0, 1);
    // 01077a  je 0x10781
    X86_AT(c, 0x1077au);
    if (x86_cc(c, 4)) { goto L_10781; }
    X86_TICK(c, 7);
    // 01077c  call 0x10bd0
    X86_AT(c, 0x1077cu);
    push32(c, 0x10781u); f_00010bd0(c); X86_RET(c, 0x10781u);
L_10781:
    X86_TICK(c, 16);
    // 010781  popfd 
    X86_AT(c, 0x10781u);
    x86_popfd(c, 4);
    // 010782  ret 
    X86_AT(c, 0x10782u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x1073cu, "ran off the end of a function");
}
void f_0001073e(X86Cpu& c) {
    X86_TICK(c, 44);
    // 01073e  mov word ptr [edi + 0x5c], bx
    X86_AT(c, 0x1073eu);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x5Cu)), (c.r[3] & 0xFFFFu));
    // 010742  mov ebx, dword ptr cs:[edx*8 + 0x10660]
    X86_AT(c, 0x10742u);
    c.r[3] = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 8 + 0x10660u)));
    // 01074a  mov word ptr [edi], bx
    X86_AT(c, 0x1074au);
    wr16((c.sbase[3] + (uint32_t)(c.r[7])), (c.r[3] & 0xFFFFu));
    // 01074d  mov word ptr [edi + 0x52], bx
    X86_AT(c, 0x1074du);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x52u)), (c.r[3] & 0xFFFFu));
    // 010751  mov word ptr [edi + 0x56], bx
    X86_AT(c, 0x10751u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x56u)), (c.r[3] & 0xFFFFu));
    // 010755  shr ebx, 0x10
    X86_AT(c, 0x10755u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[3] = r; }
    // 010758  mov word ptr [edi + 2], bx
    X86_AT(c, 0x10758u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x2u)), (c.r[3] & 0xFFFFu));
    // 01075c  mov word ptr [edi + 0x54], bx
    X86_AT(c, 0x1075cu);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x54u)), (c.r[3] & 0xFFFFu));
    // 010760  mov word ptr [edi + 0x58], bx
    X86_AT(c, 0x10760u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x58u)), (c.r[3] & 0xFFFFu));
    // 010764  push edi
    X86_AT(c, 0x10764u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 010765  push ds
    X86_AT(c, 0x10765u);
    push32(c, c.sreg[3]);
    // 010766  pop gs
    X86_AT(c, 0x10766u);
    x86_load_seg(c, 5, pop32(c) & 0xFFFFu);
    // 010768  mov ah, 5
    X86_AT(c, 0x10768u);
    s8(c, 4, 0x5u);
    // 01076a  add al, 0x40
    X86_AT(c, 0x1076au);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, 0x40u, 0, 1)); }
    // 01076c  add edi, 0x62
    X86_AT(c, 0x1076cu);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x62u, 0, 4); }
    // 01076f  push cs
    X86_AT(c, 0x1076fu);
    push32(c, c.sreg[1]);
    // 010770  call 0x280
    X86_AT(c, 0x10770u);
    push32(c, 0x10775u); f_00000280(c); X86_RET(c, 0x10775u);
    X86_TICK(c, 16);
    // 010775  pop edi
    X86_AT(c, 0x10775u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 010776  cmp byte ptr [edi + 0x4d], 0
    X86_AT(c, 0x10776u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x4Du))), 0x0u, 0, 1);
    // 01077a  je 0x10781
    X86_AT(c, 0x1077au);
    if (x86_cc(c, 4)) { goto L_10781; }
    X86_TICK(c, 7);
    // 01077c  call 0x10bd0
    X86_AT(c, 0x1077cu);
    push32(c, 0x10781u); f_00010bd0(c); X86_RET(c, 0x10781u);
L_10781:
    X86_TICK(c, 16);
    // 010781  popfd 
    X86_AT(c, 0x10781u);
    x86_popfd(c, 4);
    // 010782  ret 
    X86_AT(c, 0x10782u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x1073eu, "ran off the end of a function");
}
void f_00010742(X86Cpu& c) {
    X86_TICK(c, 42);
    // 010742  mov ebx, dword ptr cs:[edx*8 + 0x10660]
    X86_AT(c, 0x10742u);
    c.r[3] = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 8 + 0x10660u)));
    // 01074a  mov word ptr [edi], bx
    X86_AT(c, 0x1074au);
    wr16((c.sbase[3] + (uint32_t)(c.r[7])), (c.r[3] & 0xFFFFu));
    // 01074d  mov word ptr [edi + 0x52], bx
    X86_AT(c, 0x1074du);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x52u)), (c.r[3] & 0xFFFFu));
    // 010751  mov word ptr [edi + 0x56], bx
    X86_AT(c, 0x10751u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x56u)), (c.r[3] & 0xFFFFu));
    // 010755  shr ebx, 0x10
    X86_AT(c, 0x10755u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[3] = r; }
    // 010758  mov word ptr [edi + 2], bx
    X86_AT(c, 0x10758u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x2u)), (c.r[3] & 0xFFFFu));
    // 01075c  mov word ptr [edi + 0x54], bx
    X86_AT(c, 0x1075cu);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x54u)), (c.r[3] & 0xFFFFu));
    // 010760  mov word ptr [edi + 0x58], bx
    X86_AT(c, 0x10760u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x58u)), (c.r[3] & 0xFFFFu));
    // 010764  push edi
    X86_AT(c, 0x10764u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 010765  push ds
    X86_AT(c, 0x10765u);
    push32(c, c.sreg[3]);
    // 010766  pop gs
    X86_AT(c, 0x10766u);
    x86_load_seg(c, 5, pop32(c) & 0xFFFFu);
    // 010768  mov ah, 5
    X86_AT(c, 0x10768u);
    s8(c, 4, 0x5u);
    // 01076a  add al, 0x40
    X86_AT(c, 0x1076au);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, 0x40u, 0, 1)); }
    // 01076c  add edi, 0x62
    X86_AT(c, 0x1076cu);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x62u, 0, 4); }
    // 01076f  push cs
    X86_AT(c, 0x1076fu);
    push32(c, c.sreg[1]);
    // 010770  call 0x280
    X86_AT(c, 0x10770u);
    push32(c, 0x10775u); f_00000280(c); X86_RET(c, 0x10775u);
    X86_TICK(c, 16);
    // 010775  pop edi
    X86_AT(c, 0x10775u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 010776  cmp byte ptr [edi + 0x4d], 0
    X86_AT(c, 0x10776u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x4Du))), 0x0u, 0, 1);
    // 01077a  je 0x10781
    X86_AT(c, 0x1077au);
    if (x86_cc(c, 4)) { goto L_10781; }
    X86_TICK(c, 7);
    // 01077c  call 0x10bd0
    X86_AT(c, 0x1077cu);
    push32(c, 0x10781u); f_00010bd0(c); X86_RET(c, 0x10781u);
L_10781:
    X86_TICK(c, 16);
    // 010781  popfd 
    X86_AT(c, 0x10781u);
    x86_popfd(c, 4);
    // 010782  ret 
    X86_AT(c, 0x10782u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x10742u, "ran off the end of a function");
}
void f_0001074a(X86Cpu& c) {
    X86_TICK(c, 38);
    // 01074a  mov word ptr [edi], bx
    X86_AT(c, 0x1074au);
    wr16((c.sbase[3] + (uint32_t)(c.r[7])), (c.r[3] & 0xFFFFu));
    // 01074d  mov word ptr [edi + 0x52], bx
    X86_AT(c, 0x1074du);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x52u)), (c.r[3] & 0xFFFFu));
    // 010751  mov word ptr [edi + 0x56], bx
    X86_AT(c, 0x10751u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x56u)), (c.r[3] & 0xFFFFu));
    // 010755  shr ebx, 0x10
    X86_AT(c, 0x10755u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[3] = r; }
    // 010758  mov word ptr [edi + 2], bx
    X86_AT(c, 0x10758u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x2u)), (c.r[3] & 0xFFFFu));
    // 01075c  mov word ptr [edi + 0x54], bx
    X86_AT(c, 0x1075cu);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x54u)), (c.r[3] & 0xFFFFu));
    // 010760  mov word ptr [edi + 0x58], bx
    X86_AT(c, 0x10760u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x58u)), (c.r[3] & 0xFFFFu));
    // 010764  push edi
    X86_AT(c, 0x10764u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 010765  push ds
    X86_AT(c, 0x10765u);
    push32(c, c.sreg[3]);
    // 010766  pop gs
    X86_AT(c, 0x10766u);
    x86_load_seg(c, 5, pop32(c) & 0xFFFFu);
    // 010768  mov ah, 5
    X86_AT(c, 0x10768u);
    s8(c, 4, 0x5u);
    // 01076a  add al, 0x40
    X86_AT(c, 0x1076au);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, 0x40u, 0, 1)); }
    // 01076c  add edi, 0x62
    X86_AT(c, 0x1076cu);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x62u, 0, 4); }
    // 01076f  push cs
    X86_AT(c, 0x1076fu);
    push32(c, c.sreg[1]);
    // 010770  call 0x280
    X86_AT(c, 0x10770u);
    push32(c, 0x10775u); f_00000280(c); X86_RET(c, 0x10775u);
    X86_TICK(c, 16);
    // 010775  pop edi
    X86_AT(c, 0x10775u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 010776  cmp byte ptr [edi + 0x4d], 0
    X86_AT(c, 0x10776u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x4Du))), 0x0u, 0, 1);
    // 01077a  je 0x10781
    X86_AT(c, 0x1077au);
    if (x86_cc(c, 4)) { goto L_10781; }
    X86_TICK(c, 7);
    // 01077c  call 0x10bd0
    X86_AT(c, 0x1077cu);
    push32(c, 0x10781u); f_00010bd0(c); X86_RET(c, 0x10781u);
L_10781:
    X86_TICK(c, 16);
    // 010781  popfd 
    X86_AT(c, 0x10781u);
    x86_popfd(c, 4);
    // 010782  ret 
    X86_AT(c, 0x10782u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x1074au, "ran off the end of a function");
}
void f_0001074d(X86Cpu& c) {
    X86_TICK(c, 36);
    // 01074d  mov word ptr [edi + 0x52], bx
    X86_AT(c, 0x1074du);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x52u)), (c.r[3] & 0xFFFFu));
    // 010751  mov word ptr [edi + 0x56], bx
    X86_AT(c, 0x10751u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x56u)), (c.r[3] & 0xFFFFu));
    // 010755  shr ebx, 0x10
    X86_AT(c, 0x10755u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[3] = r; }
    // 010758  mov word ptr [edi + 2], bx
    X86_AT(c, 0x10758u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x2u)), (c.r[3] & 0xFFFFu));
    // 01075c  mov word ptr [edi + 0x54], bx
    X86_AT(c, 0x1075cu);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x54u)), (c.r[3] & 0xFFFFu));
    // 010760  mov word ptr [edi + 0x58], bx
    X86_AT(c, 0x10760u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x58u)), (c.r[3] & 0xFFFFu));
    // 010764  push edi
    X86_AT(c, 0x10764u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 010765  push ds
    X86_AT(c, 0x10765u);
    push32(c, c.sreg[3]);
    // 010766  pop gs
    X86_AT(c, 0x10766u);
    x86_load_seg(c, 5, pop32(c) & 0xFFFFu);
    // 010768  mov ah, 5
    X86_AT(c, 0x10768u);
    s8(c, 4, 0x5u);
    // 01076a  add al, 0x40
    X86_AT(c, 0x1076au);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, 0x40u, 0, 1)); }
    // 01076c  add edi, 0x62
    X86_AT(c, 0x1076cu);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x62u, 0, 4); }
    // 01076f  push cs
    X86_AT(c, 0x1076fu);
    push32(c, c.sreg[1]);
    // 010770  call 0x280
    X86_AT(c, 0x10770u);
    push32(c, 0x10775u); f_00000280(c); X86_RET(c, 0x10775u);
    X86_TICK(c, 16);
    // 010775  pop edi
    X86_AT(c, 0x10775u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 010776  cmp byte ptr [edi + 0x4d], 0
    X86_AT(c, 0x10776u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x4Du))), 0x0u, 0, 1);
    // 01077a  je 0x10781
    X86_AT(c, 0x1077au);
    if (x86_cc(c, 4)) { goto L_10781; }
    X86_TICK(c, 7);
    // 01077c  call 0x10bd0
    X86_AT(c, 0x1077cu);
    push32(c, 0x10781u); f_00010bd0(c); X86_RET(c, 0x10781u);
L_10781:
    X86_TICK(c, 16);
    // 010781  popfd 
    X86_AT(c, 0x10781u);
    x86_popfd(c, 4);
    // 010782  ret 
    X86_AT(c, 0x10782u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x1074du, "ran off the end of a function");
}
void f_00010751(X86Cpu& c) {
    X86_TICK(c, 34);
    // 010751  mov word ptr [edi + 0x56], bx
    X86_AT(c, 0x10751u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x56u)), (c.r[3] & 0xFFFFu));
    // 010755  shr ebx, 0x10
    X86_AT(c, 0x10755u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[3] = r; }
    // 010758  mov word ptr [edi + 2], bx
    X86_AT(c, 0x10758u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x2u)), (c.r[3] & 0xFFFFu));
    // 01075c  mov word ptr [edi + 0x54], bx
    X86_AT(c, 0x1075cu);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x54u)), (c.r[3] & 0xFFFFu));
    // 010760  mov word ptr [edi + 0x58], bx
    X86_AT(c, 0x10760u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x58u)), (c.r[3] & 0xFFFFu));
    // 010764  push edi
    X86_AT(c, 0x10764u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 010765  push ds
    X86_AT(c, 0x10765u);
    push32(c, c.sreg[3]);
    // 010766  pop gs
    X86_AT(c, 0x10766u);
    x86_load_seg(c, 5, pop32(c) & 0xFFFFu);
    // 010768  mov ah, 5
    X86_AT(c, 0x10768u);
    s8(c, 4, 0x5u);
    // 01076a  add al, 0x40
    X86_AT(c, 0x1076au);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, 0x40u, 0, 1)); }
    // 01076c  add edi, 0x62
    X86_AT(c, 0x1076cu);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x62u, 0, 4); }
    // 01076f  push cs
    X86_AT(c, 0x1076fu);
    push32(c, c.sreg[1]);
    // 010770  call 0x280
    X86_AT(c, 0x10770u);
    push32(c, 0x10775u); f_00000280(c); X86_RET(c, 0x10775u);
    X86_TICK(c, 16);
    // 010775  pop edi
    X86_AT(c, 0x10775u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 010776  cmp byte ptr [edi + 0x4d], 0
    X86_AT(c, 0x10776u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x4Du))), 0x0u, 0, 1);
    // 01077a  je 0x10781
    X86_AT(c, 0x1077au);
    if (x86_cc(c, 4)) { goto L_10781; }
    X86_TICK(c, 7);
    // 01077c  call 0x10bd0
    X86_AT(c, 0x1077cu);
    push32(c, 0x10781u); f_00010bd0(c); X86_RET(c, 0x10781u);
L_10781:
    X86_TICK(c, 16);
    // 010781  popfd 
    X86_AT(c, 0x10781u);
    x86_popfd(c, 4);
    // 010782  ret 
    X86_AT(c, 0x10782u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x10751u, "ran off the end of a function");
}
void f_00010755(X86Cpu& c) {
    X86_TICK(c, 32);
    // 010755  shr ebx, 0x10
    X86_AT(c, 0x10755u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[3] = r; }
    // 010758  mov word ptr [edi + 2], bx
    X86_AT(c, 0x10758u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x2u)), (c.r[3] & 0xFFFFu));
    // 01075c  mov word ptr [edi + 0x54], bx
    X86_AT(c, 0x1075cu);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x54u)), (c.r[3] & 0xFFFFu));
    // 010760  mov word ptr [edi + 0x58], bx
    X86_AT(c, 0x10760u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x58u)), (c.r[3] & 0xFFFFu));
    // 010764  push edi
    X86_AT(c, 0x10764u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 010765  push ds
    X86_AT(c, 0x10765u);
    push32(c, c.sreg[3]);
    // 010766  pop gs
    X86_AT(c, 0x10766u);
    x86_load_seg(c, 5, pop32(c) & 0xFFFFu);
    // 010768  mov ah, 5
    X86_AT(c, 0x10768u);
    s8(c, 4, 0x5u);
    // 01076a  add al, 0x40
    X86_AT(c, 0x1076au);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, 0x40u, 0, 1)); }
    // 01076c  add edi, 0x62
    X86_AT(c, 0x1076cu);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x62u, 0, 4); }
    // 01076f  push cs
    X86_AT(c, 0x1076fu);
    push32(c, c.sreg[1]);
    // 010770  call 0x280
    X86_AT(c, 0x10770u);
    push32(c, 0x10775u); f_00000280(c); X86_RET(c, 0x10775u);
    X86_TICK(c, 16);
    // 010775  pop edi
    X86_AT(c, 0x10775u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 010776  cmp byte ptr [edi + 0x4d], 0
    X86_AT(c, 0x10776u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x4Du))), 0x0u, 0, 1);
    // 01077a  je 0x10781
    X86_AT(c, 0x1077au);
    if (x86_cc(c, 4)) { goto L_10781; }
    X86_TICK(c, 7);
    // 01077c  call 0x10bd0
    X86_AT(c, 0x1077cu);
    push32(c, 0x10781u); f_00010bd0(c); X86_RET(c, 0x10781u);
L_10781:
    X86_TICK(c, 16);
    // 010781  popfd 
    X86_AT(c, 0x10781u);
    x86_popfd(c, 4);
    // 010782  ret 
    X86_AT(c, 0x10782u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x10755u, "ran off the end of a function");
}
void f_00010758(X86Cpu& c) {
    X86_TICK(c, 29);
    // 010758  mov word ptr [edi + 2], bx
    X86_AT(c, 0x10758u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x2u)), (c.r[3] & 0xFFFFu));
    // 01075c  mov word ptr [edi + 0x54], bx
    X86_AT(c, 0x1075cu);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x54u)), (c.r[3] & 0xFFFFu));
    // 010760  mov word ptr [edi + 0x58], bx
    X86_AT(c, 0x10760u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x58u)), (c.r[3] & 0xFFFFu));
    // 010764  push edi
    X86_AT(c, 0x10764u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 010765  push ds
    X86_AT(c, 0x10765u);
    push32(c, c.sreg[3]);
    // 010766  pop gs
    X86_AT(c, 0x10766u);
    x86_load_seg(c, 5, pop32(c) & 0xFFFFu);
    // 010768  mov ah, 5
    X86_AT(c, 0x10768u);
    s8(c, 4, 0x5u);
    // 01076a  add al, 0x40
    X86_AT(c, 0x1076au);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, 0x40u, 0, 1)); }
    // 01076c  add edi, 0x62
    X86_AT(c, 0x1076cu);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x62u, 0, 4); }
    // 01076f  push cs
    X86_AT(c, 0x1076fu);
    push32(c, c.sreg[1]);
    // 010770  call 0x280
    X86_AT(c, 0x10770u);
    push32(c, 0x10775u); f_00000280(c); X86_RET(c, 0x10775u);
    X86_TICK(c, 16);
    // 010775  pop edi
    X86_AT(c, 0x10775u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 010776  cmp byte ptr [edi + 0x4d], 0
    X86_AT(c, 0x10776u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x4Du))), 0x0u, 0, 1);
    // 01077a  je 0x10781
    X86_AT(c, 0x1077au);
    if (x86_cc(c, 4)) { goto L_10781; }
    X86_TICK(c, 7);
    // 01077c  call 0x10bd0
    X86_AT(c, 0x1077cu);
    push32(c, 0x10781u); f_00010bd0(c); X86_RET(c, 0x10781u);
L_10781:
    X86_TICK(c, 16);
    // 010781  popfd 
    X86_AT(c, 0x10781u);
    x86_popfd(c, 4);
    // 010782  ret 
    X86_AT(c, 0x10782u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x10758u, "ran off the end of a function");
}
void f_0001075c(X86Cpu& c) {
    X86_TICK(c, 27);
    // 01075c  mov word ptr [edi + 0x54], bx
    X86_AT(c, 0x1075cu);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x54u)), (c.r[3] & 0xFFFFu));
    // 010760  mov word ptr [edi + 0x58], bx
    X86_AT(c, 0x10760u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x58u)), (c.r[3] & 0xFFFFu));
    // 010764  push edi
    X86_AT(c, 0x10764u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 010765  push ds
    X86_AT(c, 0x10765u);
    push32(c, c.sreg[3]);
    // 010766  pop gs
    X86_AT(c, 0x10766u);
    x86_load_seg(c, 5, pop32(c) & 0xFFFFu);
    // 010768  mov ah, 5
    X86_AT(c, 0x10768u);
    s8(c, 4, 0x5u);
    // 01076a  add al, 0x40
    X86_AT(c, 0x1076au);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, 0x40u, 0, 1)); }
    // 01076c  add edi, 0x62
    X86_AT(c, 0x1076cu);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x62u, 0, 4); }
    // 01076f  push cs
    X86_AT(c, 0x1076fu);
    push32(c, c.sreg[1]);
    // 010770  call 0x280
    X86_AT(c, 0x10770u);
    push32(c, 0x10775u); f_00000280(c); X86_RET(c, 0x10775u);
    X86_TICK(c, 16);
    // 010775  pop edi
    X86_AT(c, 0x10775u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 010776  cmp byte ptr [edi + 0x4d], 0
    X86_AT(c, 0x10776u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x4Du))), 0x0u, 0, 1);
    // 01077a  je 0x10781
    X86_AT(c, 0x1077au);
    if (x86_cc(c, 4)) { goto L_10781; }
    X86_TICK(c, 7);
    // 01077c  call 0x10bd0
    X86_AT(c, 0x1077cu);
    push32(c, 0x10781u); f_00010bd0(c); X86_RET(c, 0x10781u);
L_10781:
    X86_TICK(c, 16);
    // 010781  popfd 
    X86_AT(c, 0x10781u);
    x86_popfd(c, 4);
    // 010782  ret 
    X86_AT(c, 0x10782u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x1075cu, "ran off the end of a function");
}
void f_00010760(X86Cpu& c) {
    X86_TICK(c, 25);
    // 010760  mov word ptr [edi + 0x58], bx
    X86_AT(c, 0x10760u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x58u)), (c.r[3] & 0xFFFFu));
    // 010764  push edi
    X86_AT(c, 0x10764u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 010765  push ds
    X86_AT(c, 0x10765u);
    push32(c, c.sreg[3]);
    // 010766  pop gs
    X86_AT(c, 0x10766u);
    x86_load_seg(c, 5, pop32(c) & 0xFFFFu);
    // 010768  mov ah, 5
    X86_AT(c, 0x10768u);
    s8(c, 4, 0x5u);
    // 01076a  add al, 0x40
    X86_AT(c, 0x1076au);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, 0x40u, 0, 1)); }
    // 01076c  add edi, 0x62
    X86_AT(c, 0x1076cu);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x62u, 0, 4); }
    // 01076f  push cs
    X86_AT(c, 0x1076fu);
    push32(c, c.sreg[1]);
    // 010770  call 0x280
    X86_AT(c, 0x10770u);
    push32(c, 0x10775u); f_00000280(c); X86_RET(c, 0x10775u);
    X86_TICK(c, 16);
    // 010775  pop edi
    X86_AT(c, 0x10775u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 010776  cmp byte ptr [edi + 0x4d], 0
    X86_AT(c, 0x10776u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x4Du))), 0x0u, 0, 1);
    // 01077a  je 0x10781
    X86_AT(c, 0x1077au);
    if (x86_cc(c, 4)) { goto L_10781; }
    X86_TICK(c, 7);
    // 01077c  call 0x10bd0
    X86_AT(c, 0x1077cu);
    push32(c, 0x10781u); f_00010bd0(c); X86_RET(c, 0x10781u);
L_10781:
    X86_TICK(c, 16);
    // 010781  popfd 
    X86_AT(c, 0x10781u);
    x86_popfd(c, 4);
    // 010782  ret 
    X86_AT(c, 0x10782u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x10760u, "ran off the end of a function");
}
void f_00010764(X86Cpu& c) {
    X86_TICK(c, 23);
    // 010764  push edi
    X86_AT(c, 0x10764u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 010765  push ds
    X86_AT(c, 0x10765u);
    push32(c, c.sreg[3]);
    // 010766  pop gs
    X86_AT(c, 0x10766u);
    x86_load_seg(c, 5, pop32(c) & 0xFFFFu);
    // 010768  mov ah, 5
    X86_AT(c, 0x10768u);
    s8(c, 4, 0x5u);
    // 01076a  add al, 0x40
    X86_AT(c, 0x1076au);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, 0x40u, 0, 1)); }
    // 01076c  add edi, 0x62
    X86_AT(c, 0x1076cu);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x62u, 0, 4); }
    // 01076f  push cs
    X86_AT(c, 0x1076fu);
    push32(c, c.sreg[1]);
    // 010770  call 0x280
    X86_AT(c, 0x10770u);
    push32(c, 0x10775u); f_00000280(c); X86_RET(c, 0x10775u);
    X86_TICK(c, 16);
    // 010775  pop edi
    X86_AT(c, 0x10775u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 010776  cmp byte ptr [edi + 0x4d], 0
    X86_AT(c, 0x10776u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x4Du))), 0x0u, 0, 1);
    // 01077a  je 0x10781
    X86_AT(c, 0x1077au);
    if (x86_cc(c, 4)) { goto L_10781; }
    X86_TICK(c, 7);
    // 01077c  call 0x10bd0
    X86_AT(c, 0x1077cu);
    push32(c, 0x10781u); f_00010bd0(c); X86_RET(c, 0x10781u);
L_10781:
    X86_TICK(c, 16);
    // 010781  popfd 
    X86_AT(c, 0x10781u);
    x86_popfd(c, 4);
    // 010782  ret 
    X86_AT(c, 0x10782u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x10764u, "ran off the end of a function");
}
void f_00010765(X86Cpu& c) {
    X86_TICK(c, 21);
    // 010765  push ds
    X86_AT(c, 0x10765u);
    push32(c, c.sreg[3]);
    // 010766  pop gs
    X86_AT(c, 0x10766u);
    x86_load_seg(c, 5, pop32(c) & 0xFFFFu);
    // 010768  mov ah, 5
    X86_AT(c, 0x10768u);
    s8(c, 4, 0x5u);
    // 01076a  add al, 0x40
    X86_AT(c, 0x1076au);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, 0x40u, 0, 1)); }
    // 01076c  add edi, 0x62
    X86_AT(c, 0x1076cu);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x62u, 0, 4); }
    // 01076f  push cs
    X86_AT(c, 0x1076fu);
    push32(c, c.sreg[1]);
    // 010770  call 0x280
    X86_AT(c, 0x10770u);
    push32(c, 0x10775u); f_00000280(c); X86_RET(c, 0x10775u);
    X86_TICK(c, 16);
    // 010775  pop edi
    X86_AT(c, 0x10775u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 010776  cmp byte ptr [edi + 0x4d], 0
    X86_AT(c, 0x10776u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x4Du))), 0x0u, 0, 1);
    // 01077a  je 0x10781
    X86_AT(c, 0x1077au);
    if (x86_cc(c, 4)) { goto L_10781; }
    X86_TICK(c, 7);
    // 01077c  call 0x10bd0
    X86_AT(c, 0x1077cu);
    push32(c, 0x10781u); f_00010bd0(c); X86_RET(c, 0x10781u);
L_10781:
    X86_TICK(c, 16);
    // 010781  popfd 
    X86_AT(c, 0x10781u);
    x86_popfd(c, 4);
    // 010782  ret 
    X86_AT(c, 0x10782u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x10765u, "ran off the end of a function");
}
void f_00010766(X86Cpu& c) {
    X86_TICK(c, 19);
    // 010766  pop gs
    X86_AT(c, 0x10766u);
    x86_load_seg(c, 5, pop32(c) & 0xFFFFu);
    // 010768  mov ah, 5
    X86_AT(c, 0x10768u);
    s8(c, 4, 0x5u);
    // 01076a  add al, 0x40
    X86_AT(c, 0x1076au);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, 0x40u, 0, 1)); }
    // 01076c  add edi, 0x62
    X86_AT(c, 0x1076cu);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x62u, 0, 4); }
    // 01076f  push cs
    X86_AT(c, 0x1076fu);
    push32(c, c.sreg[1]);
    // 010770  call 0x280
    X86_AT(c, 0x10770u);
    push32(c, 0x10775u); f_00000280(c); X86_RET(c, 0x10775u);
    X86_TICK(c, 16);
    // 010775  pop edi
    X86_AT(c, 0x10775u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 010776  cmp byte ptr [edi + 0x4d], 0
    X86_AT(c, 0x10776u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x4Du))), 0x0u, 0, 1);
    // 01077a  je 0x10781
    X86_AT(c, 0x1077au);
    if (x86_cc(c, 4)) { goto L_10781; }
    X86_TICK(c, 7);
    // 01077c  call 0x10bd0
    X86_AT(c, 0x1077cu);
    push32(c, 0x10781u); f_00010bd0(c); X86_RET(c, 0x10781u);
L_10781:
    X86_TICK(c, 16);
    // 010781  popfd 
    X86_AT(c, 0x10781u);
    x86_popfd(c, 4);
    // 010782  ret 
    X86_AT(c, 0x10782u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x10766u, "ran off the end of a function");
}
void f_00010768(X86Cpu& c) {
    X86_TICK(c, 15);
    // 010768  mov ah, 5
    X86_AT(c, 0x10768u);
    s8(c, 4, 0x5u);
    // 01076a  add al, 0x40
    X86_AT(c, 0x1076au);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, 0x40u, 0, 1)); }
    // 01076c  add edi, 0x62
    X86_AT(c, 0x1076cu);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x62u, 0, 4); }
    // 01076f  push cs
    X86_AT(c, 0x1076fu);
    push32(c, c.sreg[1]);
    // 010770  call 0x280
    X86_AT(c, 0x10770u);
    push32(c, 0x10775u); f_00000280(c); X86_RET(c, 0x10775u);
    X86_TICK(c, 16);
    // 010775  pop edi
    X86_AT(c, 0x10775u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 010776  cmp byte ptr [edi + 0x4d], 0
    X86_AT(c, 0x10776u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x4Du))), 0x0u, 0, 1);
    // 01077a  je 0x10781
    X86_AT(c, 0x1077au);
    if (x86_cc(c, 4)) { goto L_10781; }
    X86_TICK(c, 7);
    // 01077c  call 0x10bd0
    X86_AT(c, 0x1077cu);
    push32(c, 0x10781u); f_00010bd0(c); X86_RET(c, 0x10781u);
L_10781:
    X86_TICK(c, 16);
    // 010781  popfd 
    X86_AT(c, 0x10781u);
    x86_popfd(c, 4);
    // 010782  ret 
    X86_AT(c, 0x10782u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x10768u, "ran off the end of a function");
}
void f_0001076a(X86Cpu& c) {
    X86_TICK(c, 13);
    // 01076a  add al, 0x40
    X86_AT(c, 0x1076au);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, 0x40u, 0, 1)); }
    // 01076c  add edi, 0x62
    X86_AT(c, 0x1076cu);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x62u, 0, 4); }
    // 01076f  push cs
    X86_AT(c, 0x1076fu);
    push32(c, c.sreg[1]);
    // 010770  call 0x280
    X86_AT(c, 0x10770u);
    push32(c, 0x10775u); f_00000280(c); X86_RET(c, 0x10775u);
    X86_TICK(c, 16);
    // 010775  pop edi
    X86_AT(c, 0x10775u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 010776  cmp byte ptr [edi + 0x4d], 0
    X86_AT(c, 0x10776u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x4Du))), 0x0u, 0, 1);
    // 01077a  je 0x10781
    X86_AT(c, 0x1077au);
    if (x86_cc(c, 4)) { goto L_10781; }
    X86_TICK(c, 7);
    // 01077c  call 0x10bd0
    X86_AT(c, 0x1077cu);
    push32(c, 0x10781u); f_00010bd0(c); X86_RET(c, 0x10781u);
L_10781:
    X86_TICK(c, 16);
    // 010781  popfd 
    X86_AT(c, 0x10781u);
    x86_popfd(c, 4);
    // 010782  ret 
    X86_AT(c, 0x10782u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x1076au, "ran off the end of a function");
}
void f_0001076c(X86Cpu& c) {
    X86_TICK(c, 11);
    // 01076c  add edi, 0x62
    X86_AT(c, 0x1076cu);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x62u, 0, 4); }
    // 01076f  push cs
    X86_AT(c, 0x1076fu);
    push32(c, c.sreg[1]);
    // 010770  call 0x280
    X86_AT(c, 0x10770u);
    push32(c, 0x10775u); f_00000280(c); X86_RET(c, 0x10775u);
    X86_TICK(c, 16);
    // 010775  pop edi
    X86_AT(c, 0x10775u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 010776  cmp byte ptr [edi + 0x4d], 0
    X86_AT(c, 0x10776u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x4Du))), 0x0u, 0, 1);
    // 01077a  je 0x10781
    X86_AT(c, 0x1077au);
    if (x86_cc(c, 4)) { goto L_10781; }
    X86_TICK(c, 7);
    // 01077c  call 0x10bd0
    X86_AT(c, 0x1077cu);
    push32(c, 0x10781u); f_00010bd0(c); X86_RET(c, 0x10781u);
L_10781:
    X86_TICK(c, 16);
    // 010781  popfd 
    X86_AT(c, 0x10781u);
    x86_popfd(c, 4);
    // 010782  ret 
    X86_AT(c, 0x10782u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x1076cu, "ran off the end of a function");
}
void f_0001076f(X86Cpu& c) {
    X86_TICK(c, 9);
    // 01076f  push cs
    X86_AT(c, 0x1076fu);
    push32(c, c.sreg[1]);
    // 010770  call 0x280
    X86_AT(c, 0x10770u);
    push32(c, 0x10775u); f_00000280(c); X86_RET(c, 0x10775u);
    X86_TICK(c, 16);
    // 010775  pop edi
    X86_AT(c, 0x10775u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 010776  cmp byte ptr [edi + 0x4d], 0
    X86_AT(c, 0x10776u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x4Du))), 0x0u, 0, 1);
    // 01077a  je 0x10781
    X86_AT(c, 0x1077au);
    if (x86_cc(c, 4)) { goto L_10781; }
    X86_TICK(c, 7);
    // 01077c  call 0x10bd0
    X86_AT(c, 0x1077cu);
    push32(c, 0x10781u); f_00010bd0(c); X86_RET(c, 0x10781u);
L_10781:
    X86_TICK(c, 16);
    // 010781  popfd 
    X86_AT(c, 0x10781u);
    x86_popfd(c, 4);
    // 010782  ret 
    X86_AT(c, 0x10782u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x1076fu, "ran off the end of a function");
}
void f_00010770(X86Cpu& c) {
    X86_TICK(c, 7);
    // 010770  call 0x280
    X86_AT(c, 0x10770u);
    push32(c, 0x10775u); f_00000280(c); X86_RET(c, 0x10775u);
    X86_TICK(c, 16);
    // 010775  pop edi
    X86_AT(c, 0x10775u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 010776  cmp byte ptr [edi + 0x4d], 0
    X86_AT(c, 0x10776u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x4Du))), 0x0u, 0, 1);
    // 01077a  je 0x10781
    X86_AT(c, 0x1077au);
    if (x86_cc(c, 4)) { goto L_10781; }
    X86_TICK(c, 7);
    // 01077c  call 0x10bd0
    X86_AT(c, 0x1077cu);
    push32(c, 0x10781u); f_00010bd0(c); X86_RET(c, 0x10781u);
L_10781:
    X86_TICK(c, 16);
    // 010781  popfd 
    X86_AT(c, 0x10781u);
    x86_popfd(c, 4);
    // 010782  ret 
    X86_AT(c, 0x10782u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x10770u, "ran off the end of a function");
}
void f_00010775(X86Cpu& c) {
    X86_TICK(c, 16);
    // 010775  pop edi
    X86_AT(c, 0x10775u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 010776  cmp byte ptr [edi + 0x4d], 0
    X86_AT(c, 0x10776u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x4Du))), 0x0u, 0, 1);
    // 01077a  je 0x10781
    X86_AT(c, 0x1077au);
    if (x86_cc(c, 4)) { goto L_10781; }
    X86_TICK(c, 7);
    // 01077c  call 0x10bd0
    X86_AT(c, 0x1077cu);
    push32(c, 0x10781u); f_00010bd0(c); X86_RET(c, 0x10781u);
L_10781:
    X86_TICK(c, 16);
    // 010781  popfd 
    X86_AT(c, 0x10781u);
    x86_popfd(c, 4);
    // 010782  ret 
    X86_AT(c, 0x10782u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x10775u, "ran off the end of a function");
}
void f_00010776(X86Cpu& c) {
    X86_TICK(c, 12);
    // 010776  cmp byte ptr [edi + 0x4d], 0
    X86_AT(c, 0x10776u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x4Du))), 0x0u, 0, 1);
    // 01077a  je 0x10781
    X86_AT(c, 0x1077au);
    if (x86_cc(c, 4)) { goto L_10781; }
    X86_TICK(c, 7);
    // 01077c  call 0x10bd0
    X86_AT(c, 0x1077cu);
    push32(c, 0x10781u); f_00010bd0(c); X86_RET(c, 0x10781u);
L_10781:
    X86_TICK(c, 16);
    // 010781  popfd 
    X86_AT(c, 0x10781u);
    x86_popfd(c, 4);
    // 010782  ret 
    X86_AT(c, 0x10782u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x10776u, "ran off the end of a function");
}
void f_0001077a(X86Cpu& c) {
    X86_TICK(c, 5);
    // 01077a  je 0x10781
    X86_AT(c, 0x1077au);
    if (x86_cc(c, 4)) { goto L_10781; }
    X86_TICK(c, 7);
    // 01077c  call 0x10bd0
    X86_AT(c, 0x1077cu);
    push32(c, 0x10781u); f_00010bd0(c); X86_RET(c, 0x10781u);
L_10781:
    X86_TICK(c, 16);
    // 010781  popfd 
    X86_AT(c, 0x10781u);
    x86_popfd(c, 4);
    // 010782  ret 
    X86_AT(c, 0x10782u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x1077au, "ran off the end of a function");
}
void f_00010781(X86Cpu& c) {
    X86_TICK(c, 16);
    // 010781  popfd 
    X86_AT(c, 0x10781u);
    x86_popfd(c, 4);
    // 010782  ret 
    X86_AT(c, 0x10782u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x10781u, "ran off the end of a function");
}
void f_00010782(X86Cpu& c) {
    X86_TICK(c, 10);
    // 010782  ret 
    X86_AT(c, 0x10782u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x10782u, "ran off the end of a function");
}
void f_000107a8(X86Cpu& c) {
    goto L_107a8;
L_10338:
    X86_TICK(c, 12);
    // 010338  mov byte ptr [ebp + 0x21], 0xff
    X86_AT(c, 0x10338u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0x21u)), 0xFFu);
    // 01033c  ret 
    X86_AT(c, 0x1033cu);
    c.eip = pop32(c); return;
L_107a8:
    X86_TICK(c, 7);
    // 0107a8  cmp al, 1
    X86_AT(c, 0x107a8u);
    (void)x86_sub(c, g8(c, 0), 0x1u, 0, 1);
    // 0107aa  ja 0x10338
    X86_AT(c, 0x107aau);
    if (x86_cc(c, 7)) { X86_POLL(c, 0x10338u); goto L_10338; }
    X86_TICK(c, 27);
    // 0107b0  mov byte ptr [edi + 0x17], 0
    X86_AT(c, 0x107b0u);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0x17u)), 0x0u);
    // 0107b4  mov ah, al
    X86_AT(c, 0x107b4u);
    s8(c, 4, g8(c, 0));
    // 0107b6  add ah, 7
    X86_AT(c, 0x107b6u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x7u, 0, 1)); }
    // 0107b9  mov al, 0
    X86_AT(c, 0x107b9u);
    s8(c, 0, 0x0u);
    // 0107bb  push edi
    X86_AT(c, 0x107bbu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0107bc  push ds
    X86_AT(c, 0x107bcu);
    push32(c, c.sreg[3]);
    // 0107bd  pop gs
    X86_AT(c, 0x107bdu);
    x86_load_seg(c, 5, pop32(c) & 0xFFFFu);
    // 0107bf  add edi, 0x62
    X86_AT(c, 0x107bfu);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x62u, 0, 4); }
    // 0107c2  push cs
    X86_AT(c, 0x107c2u);
    push32(c, c.sreg[1]);
    // 0107c3  call 0x280
    X86_AT(c, 0x107c3u);
    push32(c, 0x107c8u); f_00000280(c); X86_RET(c, 0x107c8u);
    X86_TICK(c, 13);
    // 0107c8  mov ah, 0xc
    X86_AT(c, 0x107c8u);
    s8(c, 4, 0xCu);
    // 0107ca  mov dx, 2
    X86_AT(c, 0x107cau);
    s16(c, 2, 0x2u);
    // 0107ce  push cs
    X86_AT(c, 0x107ceu);
    push32(c, c.sreg[1]);
    // 0107cf  call 0x280
    X86_AT(c, 0x107cfu);
    push32(c, 0x107d4u); f_00000280(c); X86_RET(c, 0x107d4u);
    X86_TICK(c, 11);
    // 0107d4  pop edi
    X86_AT(c, 0x107d4u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0107d5  call 0x10890
    X86_AT(c, 0x107d5u);
    push32(c, 0x107dau); f_00010890(c); X86_RET(c, 0x107dau);
    X86_TICK(c, 12);
    // 0107da  mov byte ptr [edi + 0x17], 1
    X86_AT(c, 0x107dau);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0x17u)), 0x1u);
    // 0107de  ret 
    X86_AT(c, 0x107deu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x107a8u, "ran off the end of a function");
}
void f_000107aa(X86Cpu& c) {
    goto L_107aa;
L_10338:
    X86_TICK(c, 12);
    // 010338  mov byte ptr [ebp + 0x21], 0xff
    X86_AT(c, 0x10338u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0x21u)), 0xFFu);
    // 01033c  ret 
    X86_AT(c, 0x1033cu);
    c.eip = pop32(c); return;
L_107aa:
    X86_TICK(c, 5);
    // 0107aa  ja 0x10338
    X86_AT(c, 0x107aau);
    if (x86_cc(c, 7)) { X86_POLL(c, 0x10338u); goto L_10338; }
    X86_TICK(c, 27);
    // 0107b0  mov byte ptr [edi + 0x17], 0
    X86_AT(c, 0x107b0u);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0x17u)), 0x0u);
    // 0107b4  mov ah, al
    X86_AT(c, 0x107b4u);
    s8(c, 4, g8(c, 0));
    // 0107b6  add ah, 7
    X86_AT(c, 0x107b6u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x7u, 0, 1)); }
    // 0107b9  mov al, 0
    X86_AT(c, 0x107b9u);
    s8(c, 0, 0x0u);
    // 0107bb  push edi
    X86_AT(c, 0x107bbu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0107bc  push ds
    X86_AT(c, 0x107bcu);
    push32(c, c.sreg[3]);
    // 0107bd  pop gs
    X86_AT(c, 0x107bdu);
    x86_load_seg(c, 5, pop32(c) & 0xFFFFu);
    // 0107bf  add edi, 0x62
    X86_AT(c, 0x107bfu);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x62u, 0, 4); }
    // 0107c2  push cs
    X86_AT(c, 0x107c2u);
    push32(c, c.sreg[1]);
    // 0107c3  call 0x280
    X86_AT(c, 0x107c3u);
    push32(c, 0x107c8u); f_00000280(c); X86_RET(c, 0x107c8u);
    X86_TICK(c, 13);
    // 0107c8  mov ah, 0xc
    X86_AT(c, 0x107c8u);
    s8(c, 4, 0xCu);
    // 0107ca  mov dx, 2
    X86_AT(c, 0x107cau);
    s16(c, 2, 0x2u);
    // 0107ce  push cs
    X86_AT(c, 0x107ceu);
    push32(c, c.sreg[1]);
    // 0107cf  call 0x280
    X86_AT(c, 0x107cfu);
    push32(c, 0x107d4u); f_00000280(c); X86_RET(c, 0x107d4u);
    X86_TICK(c, 11);
    // 0107d4  pop edi
    X86_AT(c, 0x107d4u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0107d5  call 0x10890
    X86_AT(c, 0x107d5u);
    push32(c, 0x107dau); f_00010890(c); X86_RET(c, 0x107dau);
    X86_TICK(c, 12);
    // 0107da  mov byte ptr [edi + 0x17], 1
    X86_AT(c, 0x107dau);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0x17u)), 0x1u);
    // 0107de  ret 
    X86_AT(c, 0x107deu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x107aau, "ran off the end of a function");
}
void f_000107b0(X86Cpu& c) {
    X86_TICK(c, 27);
    // 0107b0  mov byte ptr [edi + 0x17], 0
    X86_AT(c, 0x107b0u);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0x17u)), 0x0u);
    // 0107b4  mov ah, al
    X86_AT(c, 0x107b4u);
    s8(c, 4, g8(c, 0));
    // 0107b6  add ah, 7
    X86_AT(c, 0x107b6u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x7u, 0, 1)); }
    // 0107b9  mov al, 0
    X86_AT(c, 0x107b9u);
    s8(c, 0, 0x0u);
    // 0107bb  push edi
    X86_AT(c, 0x107bbu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0107bc  push ds
    X86_AT(c, 0x107bcu);
    push32(c, c.sreg[3]);
    // 0107bd  pop gs
    X86_AT(c, 0x107bdu);
    x86_load_seg(c, 5, pop32(c) & 0xFFFFu);
    // 0107bf  add edi, 0x62
    X86_AT(c, 0x107bfu);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x62u, 0, 4); }
    // 0107c2  push cs
    X86_AT(c, 0x107c2u);
    push32(c, c.sreg[1]);
    // 0107c3  call 0x280
    X86_AT(c, 0x107c3u);
    push32(c, 0x107c8u); f_00000280(c); X86_RET(c, 0x107c8u);
    X86_TICK(c, 13);
    // 0107c8  mov ah, 0xc
    X86_AT(c, 0x107c8u);
    s8(c, 4, 0xCu);
    // 0107ca  mov dx, 2
    X86_AT(c, 0x107cau);
    s16(c, 2, 0x2u);
    // 0107ce  push cs
    X86_AT(c, 0x107ceu);
    push32(c, c.sreg[1]);
    // 0107cf  call 0x280
    X86_AT(c, 0x107cfu);
    push32(c, 0x107d4u); f_00000280(c); X86_RET(c, 0x107d4u);
    X86_TICK(c, 11);
    // 0107d4  pop edi
    X86_AT(c, 0x107d4u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0107d5  call 0x10890
    X86_AT(c, 0x107d5u);
    push32(c, 0x107dau); f_00010890(c); X86_RET(c, 0x107dau);
    X86_TICK(c, 12);
    // 0107da  mov byte ptr [edi + 0x17], 1
    X86_AT(c, 0x107dau);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0x17u)), 0x1u);
    // 0107de  ret 
    X86_AT(c, 0x107deu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x107b0u, "ran off the end of a function");
}
void f_000107b4(X86Cpu& c) {
    X86_TICK(c, 25);
    // 0107b4  mov ah, al
    X86_AT(c, 0x107b4u);
    s8(c, 4, g8(c, 0));
    // 0107b6  add ah, 7
    X86_AT(c, 0x107b6u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x7u, 0, 1)); }
    // 0107b9  mov al, 0
    X86_AT(c, 0x107b9u);
    s8(c, 0, 0x0u);
    // 0107bb  push edi
    X86_AT(c, 0x107bbu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0107bc  push ds
    X86_AT(c, 0x107bcu);
    push32(c, c.sreg[3]);
    // 0107bd  pop gs
    X86_AT(c, 0x107bdu);
    x86_load_seg(c, 5, pop32(c) & 0xFFFFu);
    // 0107bf  add edi, 0x62
    X86_AT(c, 0x107bfu);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x62u, 0, 4); }
    // 0107c2  push cs
    X86_AT(c, 0x107c2u);
    push32(c, c.sreg[1]);
    // 0107c3  call 0x280
    X86_AT(c, 0x107c3u);
    push32(c, 0x107c8u); f_00000280(c); X86_RET(c, 0x107c8u);
    X86_TICK(c, 13);
    // 0107c8  mov ah, 0xc
    X86_AT(c, 0x107c8u);
    s8(c, 4, 0xCu);
    // 0107ca  mov dx, 2
    X86_AT(c, 0x107cau);
    s16(c, 2, 0x2u);
    // 0107ce  push cs
    X86_AT(c, 0x107ceu);
    push32(c, c.sreg[1]);
    // 0107cf  call 0x280
    X86_AT(c, 0x107cfu);
    push32(c, 0x107d4u); f_00000280(c); X86_RET(c, 0x107d4u);
    X86_TICK(c, 11);
    // 0107d4  pop edi
    X86_AT(c, 0x107d4u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0107d5  call 0x10890
    X86_AT(c, 0x107d5u);
    push32(c, 0x107dau); f_00010890(c); X86_RET(c, 0x107dau);
    X86_TICK(c, 12);
    // 0107da  mov byte ptr [edi + 0x17], 1
    X86_AT(c, 0x107dau);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0x17u)), 0x1u);
    // 0107de  ret 
    X86_AT(c, 0x107deu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x107b4u, "ran off the end of a function");
}
void f_000107b6(X86Cpu& c) {
    X86_TICK(c, 23);
    // 0107b6  add ah, 7
    X86_AT(c, 0x107b6u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x7u, 0, 1)); }
    // 0107b9  mov al, 0
    X86_AT(c, 0x107b9u);
    s8(c, 0, 0x0u);
    // 0107bb  push edi
    X86_AT(c, 0x107bbu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0107bc  push ds
    X86_AT(c, 0x107bcu);
    push32(c, c.sreg[3]);
    // 0107bd  pop gs
    X86_AT(c, 0x107bdu);
    x86_load_seg(c, 5, pop32(c) & 0xFFFFu);
    // 0107bf  add edi, 0x62
    X86_AT(c, 0x107bfu);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x62u, 0, 4); }
    // 0107c2  push cs
    X86_AT(c, 0x107c2u);
    push32(c, c.sreg[1]);
    // 0107c3  call 0x280
    X86_AT(c, 0x107c3u);
    push32(c, 0x107c8u); f_00000280(c); X86_RET(c, 0x107c8u);
    X86_TICK(c, 13);
    // 0107c8  mov ah, 0xc
    X86_AT(c, 0x107c8u);
    s8(c, 4, 0xCu);
    // 0107ca  mov dx, 2
    X86_AT(c, 0x107cau);
    s16(c, 2, 0x2u);
    // 0107ce  push cs
    X86_AT(c, 0x107ceu);
    push32(c, c.sreg[1]);
    // 0107cf  call 0x280
    X86_AT(c, 0x107cfu);
    push32(c, 0x107d4u); f_00000280(c); X86_RET(c, 0x107d4u);
    X86_TICK(c, 11);
    // 0107d4  pop edi
    X86_AT(c, 0x107d4u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0107d5  call 0x10890
    X86_AT(c, 0x107d5u);
    push32(c, 0x107dau); f_00010890(c); X86_RET(c, 0x107dau);
    X86_TICK(c, 12);
    // 0107da  mov byte ptr [edi + 0x17], 1
    X86_AT(c, 0x107dau);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0x17u)), 0x1u);
    // 0107de  ret 
    X86_AT(c, 0x107deu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x107b6u, "ran off the end of a function");
}
void f_000107b9(X86Cpu& c) {
    X86_TICK(c, 21);
    // 0107b9  mov al, 0
    X86_AT(c, 0x107b9u);
    s8(c, 0, 0x0u);
    // 0107bb  push edi
    X86_AT(c, 0x107bbu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0107bc  push ds
    X86_AT(c, 0x107bcu);
    push32(c, c.sreg[3]);
    // 0107bd  pop gs
    X86_AT(c, 0x107bdu);
    x86_load_seg(c, 5, pop32(c) & 0xFFFFu);
    // 0107bf  add edi, 0x62
    X86_AT(c, 0x107bfu);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x62u, 0, 4); }
    // 0107c2  push cs
    X86_AT(c, 0x107c2u);
    push32(c, c.sreg[1]);
    // 0107c3  call 0x280
    X86_AT(c, 0x107c3u);
    push32(c, 0x107c8u); f_00000280(c); X86_RET(c, 0x107c8u);
    X86_TICK(c, 13);
    // 0107c8  mov ah, 0xc
    X86_AT(c, 0x107c8u);
    s8(c, 4, 0xCu);
    // 0107ca  mov dx, 2
    X86_AT(c, 0x107cau);
    s16(c, 2, 0x2u);
    // 0107ce  push cs
    X86_AT(c, 0x107ceu);
    push32(c, c.sreg[1]);
    // 0107cf  call 0x280
    X86_AT(c, 0x107cfu);
    push32(c, 0x107d4u); f_00000280(c); X86_RET(c, 0x107d4u);
    X86_TICK(c, 11);
    // 0107d4  pop edi
    X86_AT(c, 0x107d4u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0107d5  call 0x10890
    X86_AT(c, 0x107d5u);
    push32(c, 0x107dau); f_00010890(c); X86_RET(c, 0x107dau);
    X86_TICK(c, 12);
    // 0107da  mov byte ptr [edi + 0x17], 1
    X86_AT(c, 0x107dau);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0x17u)), 0x1u);
    // 0107de  ret 
    X86_AT(c, 0x107deu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x107b9u, "ran off the end of a function");
}
void f_000107bb(X86Cpu& c) {
    X86_TICK(c, 19);
    // 0107bb  push edi
    X86_AT(c, 0x107bbu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0107bc  push ds
    X86_AT(c, 0x107bcu);
    push32(c, c.sreg[3]);
    // 0107bd  pop gs
    X86_AT(c, 0x107bdu);
    x86_load_seg(c, 5, pop32(c) & 0xFFFFu);
    // 0107bf  add edi, 0x62
    X86_AT(c, 0x107bfu);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x62u, 0, 4); }
    // 0107c2  push cs
    X86_AT(c, 0x107c2u);
    push32(c, c.sreg[1]);
    // 0107c3  call 0x280
    X86_AT(c, 0x107c3u);
    push32(c, 0x107c8u); f_00000280(c); X86_RET(c, 0x107c8u);
    X86_TICK(c, 13);
    // 0107c8  mov ah, 0xc
    X86_AT(c, 0x107c8u);
    s8(c, 4, 0xCu);
    // 0107ca  mov dx, 2
    X86_AT(c, 0x107cau);
    s16(c, 2, 0x2u);
    // 0107ce  push cs
    X86_AT(c, 0x107ceu);
    push32(c, c.sreg[1]);
    // 0107cf  call 0x280
    X86_AT(c, 0x107cfu);
    push32(c, 0x107d4u); f_00000280(c); X86_RET(c, 0x107d4u);
    X86_TICK(c, 11);
    // 0107d4  pop edi
    X86_AT(c, 0x107d4u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0107d5  call 0x10890
    X86_AT(c, 0x107d5u);
    push32(c, 0x107dau); f_00010890(c); X86_RET(c, 0x107dau);
    X86_TICK(c, 12);
    // 0107da  mov byte ptr [edi + 0x17], 1
    X86_AT(c, 0x107dau);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0x17u)), 0x1u);
    // 0107de  ret 
    X86_AT(c, 0x107deu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x107bbu, "ran off the end of a function");
}
void f_000107bc(X86Cpu& c) {
    X86_TICK(c, 17);
    // 0107bc  push ds
    X86_AT(c, 0x107bcu);
    push32(c, c.sreg[3]);
    // 0107bd  pop gs
    X86_AT(c, 0x107bdu);
    x86_load_seg(c, 5, pop32(c) & 0xFFFFu);
    // 0107bf  add edi, 0x62
    X86_AT(c, 0x107bfu);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x62u, 0, 4); }
    // 0107c2  push cs
    X86_AT(c, 0x107c2u);
    push32(c, c.sreg[1]);
    // 0107c3  call 0x280
    X86_AT(c, 0x107c3u);
    push32(c, 0x107c8u); f_00000280(c); X86_RET(c, 0x107c8u);
    X86_TICK(c, 13);
    // 0107c8  mov ah, 0xc
    X86_AT(c, 0x107c8u);
    s8(c, 4, 0xCu);
    // 0107ca  mov dx, 2
    X86_AT(c, 0x107cau);
    s16(c, 2, 0x2u);
    // 0107ce  push cs
    X86_AT(c, 0x107ceu);
    push32(c, c.sreg[1]);
    // 0107cf  call 0x280
    X86_AT(c, 0x107cfu);
    push32(c, 0x107d4u); f_00000280(c); X86_RET(c, 0x107d4u);
    X86_TICK(c, 11);
    // 0107d4  pop edi
    X86_AT(c, 0x107d4u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0107d5  call 0x10890
    X86_AT(c, 0x107d5u);
    push32(c, 0x107dau); f_00010890(c); X86_RET(c, 0x107dau);
    X86_TICK(c, 12);
    // 0107da  mov byte ptr [edi + 0x17], 1
    X86_AT(c, 0x107dau);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0x17u)), 0x1u);
    // 0107de  ret 
    X86_AT(c, 0x107deu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x107bcu, "ran off the end of a function");
}
void f_000107bd(X86Cpu& c) {
    X86_TICK(c, 15);
    // 0107bd  pop gs
    X86_AT(c, 0x107bdu);
    x86_load_seg(c, 5, pop32(c) & 0xFFFFu);
    // 0107bf  add edi, 0x62
    X86_AT(c, 0x107bfu);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x62u, 0, 4); }
    // 0107c2  push cs
    X86_AT(c, 0x107c2u);
    push32(c, c.sreg[1]);
    // 0107c3  call 0x280
    X86_AT(c, 0x107c3u);
    push32(c, 0x107c8u); f_00000280(c); X86_RET(c, 0x107c8u);
    X86_TICK(c, 13);
    // 0107c8  mov ah, 0xc
    X86_AT(c, 0x107c8u);
    s8(c, 4, 0xCu);
    // 0107ca  mov dx, 2
    X86_AT(c, 0x107cau);
    s16(c, 2, 0x2u);
    // 0107ce  push cs
    X86_AT(c, 0x107ceu);
    push32(c, c.sreg[1]);
    // 0107cf  call 0x280
    X86_AT(c, 0x107cfu);
    push32(c, 0x107d4u); f_00000280(c); X86_RET(c, 0x107d4u);
    X86_TICK(c, 11);
    // 0107d4  pop edi
    X86_AT(c, 0x107d4u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0107d5  call 0x10890
    X86_AT(c, 0x107d5u);
    push32(c, 0x107dau); f_00010890(c); X86_RET(c, 0x107dau);
    X86_TICK(c, 12);
    // 0107da  mov byte ptr [edi + 0x17], 1
    X86_AT(c, 0x107dau);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0x17u)), 0x1u);
    // 0107de  ret 
    X86_AT(c, 0x107deu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x107bdu, "ran off the end of a function");
}
void f_000107bf(X86Cpu& c) {
    X86_TICK(c, 11);
    // 0107bf  add edi, 0x62
    X86_AT(c, 0x107bfu);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x62u, 0, 4); }
    // 0107c2  push cs
    X86_AT(c, 0x107c2u);
    push32(c, c.sreg[1]);
    // 0107c3  call 0x280
    X86_AT(c, 0x107c3u);
    push32(c, 0x107c8u); f_00000280(c); X86_RET(c, 0x107c8u);
    X86_TICK(c, 13);
    // 0107c8  mov ah, 0xc
    X86_AT(c, 0x107c8u);
    s8(c, 4, 0xCu);
    // 0107ca  mov dx, 2
    X86_AT(c, 0x107cau);
    s16(c, 2, 0x2u);
    // 0107ce  push cs
    X86_AT(c, 0x107ceu);
    push32(c, c.sreg[1]);
    // 0107cf  call 0x280
    X86_AT(c, 0x107cfu);
    push32(c, 0x107d4u); f_00000280(c); X86_RET(c, 0x107d4u);
    X86_TICK(c, 11);
    // 0107d4  pop edi
    X86_AT(c, 0x107d4u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0107d5  call 0x10890
    X86_AT(c, 0x107d5u);
    push32(c, 0x107dau); f_00010890(c); X86_RET(c, 0x107dau);
    X86_TICK(c, 12);
    // 0107da  mov byte ptr [edi + 0x17], 1
    X86_AT(c, 0x107dau);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0x17u)), 0x1u);
    // 0107de  ret 
    X86_AT(c, 0x107deu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x107bfu, "ran off the end of a function");
}
void f_000107c2(X86Cpu& c) {
    X86_TICK(c, 9);
    // 0107c2  push cs
    X86_AT(c, 0x107c2u);
    push32(c, c.sreg[1]);
    // 0107c3  call 0x280
    X86_AT(c, 0x107c3u);
    push32(c, 0x107c8u); f_00000280(c); X86_RET(c, 0x107c8u);
    X86_TICK(c, 13);
    // 0107c8  mov ah, 0xc
    X86_AT(c, 0x107c8u);
    s8(c, 4, 0xCu);
    // 0107ca  mov dx, 2
    X86_AT(c, 0x107cau);
    s16(c, 2, 0x2u);
    // 0107ce  push cs
    X86_AT(c, 0x107ceu);
    push32(c, c.sreg[1]);
    // 0107cf  call 0x280
    X86_AT(c, 0x107cfu);
    push32(c, 0x107d4u); f_00000280(c); X86_RET(c, 0x107d4u);
    X86_TICK(c, 11);
    // 0107d4  pop edi
    X86_AT(c, 0x107d4u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0107d5  call 0x10890
    X86_AT(c, 0x107d5u);
    push32(c, 0x107dau); f_00010890(c); X86_RET(c, 0x107dau);
    X86_TICK(c, 12);
    // 0107da  mov byte ptr [edi + 0x17], 1
    X86_AT(c, 0x107dau);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0x17u)), 0x1u);
    // 0107de  ret 
    X86_AT(c, 0x107deu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x107c2u, "ran off the end of a function");
}
void f_000107c3(X86Cpu& c) {
    X86_TICK(c, 7);
    // 0107c3  call 0x280
    X86_AT(c, 0x107c3u);
    push32(c, 0x107c8u); f_00000280(c); X86_RET(c, 0x107c8u);
    X86_TICK(c, 13);
    // 0107c8  mov ah, 0xc
    X86_AT(c, 0x107c8u);
    s8(c, 4, 0xCu);
    // 0107ca  mov dx, 2
    X86_AT(c, 0x107cau);
    s16(c, 2, 0x2u);
    // 0107ce  push cs
    X86_AT(c, 0x107ceu);
    push32(c, c.sreg[1]);
    // 0107cf  call 0x280
    X86_AT(c, 0x107cfu);
    push32(c, 0x107d4u); f_00000280(c); X86_RET(c, 0x107d4u);
    X86_TICK(c, 11);
    // 0107d4  pop edi
    X86_AT(c, 0x107d4u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0107d5  call 0x10890
    X86_AT(c, 0x107d5u);
    push32(c, 0x107dau); f_00010890(c); X86_RET(c, 0x107dau);
    X86_TICK(c, 12);
    // 0107da  mov byte ptr [edi + 0x17], 1
    X86_AT(c, 0x107dau);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0x17u)), 0x1u);
    // 0107de  ret 
    X86_AT(c, 0x107deu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x107c3u, "ran off the end of a function");
}
void f_000107c8(X86Cpu& c) {
    X86_TICK(c, 13);
    // 0107c8  mov ah, 0xc
    X86_AT(c, 0x107c8u);
    s8(c, 4, 0xCu);
    // 0107ca  mov dx, 2
    X86_AT(c, 0x107cau);
    s16(c, 2, 0x2u);
    // 0107ce  push cs
    X86_AT(c, 0x107ceu);
    push32(c, c.sreg[1]);
    // 0107cf  call 0x280
    X86_AT(c, 0x107cfu);
    push32(c, 0x107d4u); f_00000280(c); X86_RET(c, 0x107d4u);
    X86_TICK(c, 11);
    // 0107d4  pop edi
    X86_AT(c, 0x107d4u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0107d5  call 0x10890
    X86_AT(c, 0x107d5u);
    push32(c, 0x107dau); f_00010890(c); X86_RET(c, 0x107dau);
    X86_TICK(c, 12);
    // 0107da  mov byte ptr [edi + 0x17], 1
    X86_AT(c, 0x107dau);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0x17u)), 0x1u);
    // 0107de  ret 
    X86_AT(c, 0x107deu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x107c8u, "ran off the end of a function");
}
void f_000107ca(X86Cpu& c) {
    X86_TICK(c, 11);
    // 0107ca  mov dx, 2
    X86_AT(c, 0x107cau);
    s16(c, 2, 0x2u);
    // 0107ce  push cs
    X86_AT(c, 0x107ceu);
    push32(c, c.sreg[1]);
    // 0107cf  call 0x280
    X86_AT(c, 0x107cfu);
    push32(c, 0x107d4u); f_00000280(c); X86_RET(c, 0x107d4u);
    X86_TICK(c, 11);
    // 0107d4  pop edi
    X86_AT(c, 0x107d4u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0107d5  call 0x10890
    X86_AT(c, 0x107d5u);
    push32(c, 0x107dau); f_00010890(c); X86_RET(c, 0x107dau);
    X86_TICK(c, 12);
    // 0107da  mov byte ptr [edi + 0x17], 1
    X86_AT(c, 0x107dau);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0x17u)), 0x1u);
    // 0107de  ret 
    X86_AT(c, 0x107deu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x107cau, "ran off the end of a function");
}
void f_000107ce(X86Cpu& c) {
    X86_TICK(c, 9);
    // 0107ce  push cs
    X86_AT(c, 0x107ceu);
    push32(c, c.sreg[1]);
    // 0107cf  call 0x280
    X86_AT(c, 0x107cfu);
    push32(c, 0x107d4u); f_00000280(c); X86_RET(c, 0x107d4u);
    X86_TICK(c, 11);
    // 0107d4  pop edi
    X86_AT(c, 0x107d4u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0107d5  call 0x10890
    X86_AT(c, 0x107d5u);
    push32(c, 0x107dau); f_00010890(c); X86_RET(c, 0x107dau);
    X86_TICK(c, 12);
    // 0107da  mov byte ptr [edi + 0x17], 1
    X86_AT(c, 0x107dau);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0x17u)), 0x1u);
    // 0107de  ret 
    X86_AT(c, 0x107deu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x107ceu, "ran off the end of a function");
}
void f_000107cf(X86Cpu& c) {
    X86_TICK(c, 7);
    // 0107cf  call 0x280
    X86_AT(c, 0x107cfu);
    push32(c, 0x107d4u); f_00000280(c); X86_RET(c, 0x107d4u);
    X86_TICK(c, 11);
    // 0107d4  pop edi
    X86_AT(c, 0x107d4u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0107d5  call 0x10890
    X86_AT(c, 0x107d5u);
    push32(c, 0x107dau); f_00010890(c); X86_RET(c, 0x107dau);
    X86_TICK(c, 12);
    // 0107da  mov byte ptr [edi + 0x17], 1
    X86_AT(c, 0x107dau);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0x17u)), 0x1u);
    // 0107de  ret 
    X86_AT(c, 0x107deu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x107cfu, "ran off the end of a function");
}
void f_000107d4(X86Cpu& c) {
    X86_TICK(c, 11);
    // 0107d4  pop edi
    X86_AT(c, 0x107d4u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0107d5  call 0x10890
    X86_AT(c, 0x107d5u);
    push32(c, 0x107dau); f_00010890(c); X86_RET(c, 0x107dau);
    X86_TICK(c, 12);
    // 0107da  mov byte ptr [edi + 0x17], 1
    X86_AT(c, 0x107dau);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0x17u)), 0x1u);
    // 0107de  ret 
    X86_AT(c, 0x107deu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x107d4u, "ran off the end of a function");
}
void f_000107d5(X86Cpu& c) {
    X86_TICK(c, 7);
    // 0107d5  call 0x10890
    X86_AT(c, 0x107d5u);
    push32(c, 0x107dau); f_00010890(c); X86_RET(c, 0x107dau);
    X86_TICK(c, 12);
    // 0107da  mov byte ptr [edi + 0x17], 1
    X86_AT(c, 0x107dau);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0x17u)), 0x1u);
    // 0107de  ret 
    X86_AT(c, 0x107deu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x107d5u, "ran off the end of a function");
}
void f_000107da(X86Cpu& c) {
    X86_TICK(c, 12);
    // 0107da  mov byte ptr [edi + 0x17], 1
    X86_AT(c, 0x107dau);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0x17u)), 0x1u);
    // 0107de  ret 
    X86_AT(c, 0x107deu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x107dau, "ran off the end of a function");
}
void f_000107de(X86Cpu& c) {
    X86_TICK(c, 10);
    // 0107de  ret 
    X86_AT(c, 0x107deu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x107deu, "ran off the end of a function");
}
void f_000107df(X86Cpu& c) {
    goto L_107df;
L_10338:
    X86_TICK(c, 12);
    // 010338  mov byte ptr [ebp + 0x21], 0xff
    X86_AT(c, 0x10338u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0x21u)), 0xFFu);
    // 01033c  ret 
    X86_AT(c, 0x1033cu);
    c.eip = pop32(c); return;
L_107df:
    X86_TICK(c, 11);
    // 0107df  dec bh
    X86_AT(c, 0x107dfu);
    { uint32_t v = g8(c, 7); s8(c, 7, x86_dec(c, v, 1)); }
    // 0107e1  dec bl
    X86_AT(c, 0x107e1u);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_dec(c, v, 1)); }
    // 0107e3  cmp bh, 3
    X86_AT(c, 0x107e3u);
    (void)x86_sub(c, g8(c, 7), 0x3u, 0, 1);
    // 0107e6  ja 0x10338
    X86_AT(c, 0x107e6u);
    if (x86_cc(c, 7)) { X86_POLL(c, 0x10338u); goto L_10338; }
    X86_TICK(c, 7);
    // 0107ec  cmp bl, 0x1f
    X86_AT(c, 0x107ecu);
    (void)x86_sub(c, g8(c, 3), 0x1Fu, 0, 1);
    // 0107ef  ja 0x10338
    X86_AT(c, 0x107efu);
    if (x86_cc(c, 7)) { X86_POLL(c, 0x10338u); goto L_10338; }
    X86_TICK(c, 33);
    // 0107f5  add bx, 0x101
    X86_AT(c, 0x107f5u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, 0x101u, 0, 2)); }
    // 0107fa  mov byte ptr [edi + 0x17], 0
    X86_AT(c, 0x107fau);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0x17u)), 0x0u);
    // 0107fe  mov ah, 0xe
    X86_AT(c, 0x107feu);
    s8(c, 4, 0xEu);
    // 010800  mov al, 0
    X86_AT(c, 0x10800u);
    s8(c, 0, 0x0u);
    // 010802  push edi
    X86_AT(c, 0x10802u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 010803  push ds
    X86_AT(c, 0x10803u);
    push32(c, c.sreg[3]);
    // 010804  pop gs
    X86_AT(c, 0x10804u);
    x86_load_seg(c, 5, pop32(c) & 0xFFFFu);
    // 010806  add edi, 0x62
    X86_AT(c, 0x10806u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x62u, 0, 4); }
    // 010809  push ds
    X86_AT(c, 0x10809u);
    push32(c, c.sreg[3]);
    // 01080a  mov ds, word ptr [ebp + 0x24]
    X86_AT(c, 0x1080au);
    x86_load_seg(c, 3, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0x24u))) & 0xFFFFu);
    // 01080d  push cs
    X86_AT(c, 0x1080du);
    push32(c, c.sreg[1]);
    // 01080e  call 0x280
    X86_AT(c, 0x1080eu);
    push32(c, 0x10813u); f_00000280(c); X86_RET(c, 0x10813u);
    X86_TICK(c, 13);
    // 010813  mov ah, 0xc
    X86_AT(c, 0x10813u);
    s8(c, 4, 0xCu);
    // 010815  mov dx, 4
    X86_AT(c, 0x10815u);
    s16(c, 2, 0x4u);
    // 010819  push cs
    X86_AT(c, 0x10819u);
    push32(c, c.sreg[1]);
    // 01081a  call 0x280
    X86_AT(c, 0x1081au);
    push32(c, 0x1081fu); f_00000280(c); X86_RET(c, 0x1081fu);
    X86_TICK(c, 15);
    // 01081f  pop ds
    X86_AT(c, 0x1081fu);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 010820  pop edi
    X86_AT(c, 0x10820u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 010821  call 0x10890
    X86_AT(c, 0x10821u);
    push32(c, 0x10826u); f_00010890(c); X86_RET(c, 0x10826u);
    X86_TICK(c, 12);
    // 010826  mov byte ptr [edi + 0x17], 1
    X86_AT(c, 0x10826u);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0x17u)), 0x1u);
    // 01082a  ret 
    X86_AT(c, 0x1082au);
    c.eip = pop32(c); return;
    x86_fault(c, 0x107dfu, "ran off the end of a function");
}
void f_0001082b(X86Cpu& c) {
    X86_TICK(c, 9);
    // 01082b  sub esi, esi
    X86_AT(c, 0x1082bu);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[6], 0, 4); }
    // 01082d  call 0x10841
    X86_AT(c, 0x1082du);
    push32(c, 0x10832u); f_00010841(c); X86_RET(c, 0x10832u);
    X86_TICK(c, 12);
    // 010832  mov esi, 2
    X86_AT(c, 0x10832u);
    c.r[6] = 0x2u;
    // 010837  xchg ebx, edx
    X86_AT(c, 0x10837u);
    { uint32_t t = c.r[3]; c.r[3] = c.r[2]; c.r[2] = t; }
    // 010839  call 0x10841
    X86_AT(c, 0x10839u);
    push32(c, 0x1083eu); f_00010841(c); X86_RET(c, 0x1083eu);
    X86_TICK(c, 13);
    // 01083e  xchg ebx, edx
    X86_AT(c, 0x1083eu);
    { uint32_t t = c.r[3]; c.r[3] = c.r[2]; c.r[2] = t; }
    // 010840  ret 
    X86_AT(c, 0x10840u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x1082bu, "ran off the end of a function");
}
void f_0001082d(X86Cpu& c) {
    X86_TICK(c, 7);
    // 01082d  call 0x10841
    X86_AT(c, 0x1082du);
    push32(c, 0x10832u); f_00010841(c); X86_RET(c, 0x10832u);
    X86_TICK(c, 12);
    // 010832  mov esi, 2
    X86_AT(c, 0x10832u);
    c.r[6] = 0x2u;
    // 010837  xchg ebx, edx
    X86_AT(c, 0x10837u);
    { uint32_t t = c.r[3]; c.r[3] = c.r[2]; c.r[2] = t; }
    // 010839  call 0x10841
    X86_AT(c, 0x10839u);
    push32(c, 0x1083eu); f_00010841(c); X86_RET(c, 0x1083eu);
    X86_TICK(c, 13);
    // 01083e  xchg ebx, edx
    X86_AT(c, 0x1083eu);
    { uint32_t t = c.r[3]; c.r[3] = c.r[2]; c.r[2] = t; }
    // 010840  ret 
    X86_AT(c, 0x10840u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x1082du, "ran off the end of a function");
}
void f_00010832(X86Cpu& c) {
    X86_TICK(c, 12);
    // 010832  mov esi, 2
    X86_AT(c, 0x10832u);
    c.r[6] = 0x2u;
    // 010837  xchg ebx, edx
    X86_AT(c, 0x10837u);
    { uint32_t t = c.r[3]; c.r[3] = c.r[2]; c.r[2] = t; }
    // 010839  call 0x10841
    X86_AT(c, 0x10839u);
    push32(c, 0x1083eu); f_00010841(c); X86_RET(c, 0x1083eu);
    X86_TICK(c, 13);
    // 01083e  xchg ebx, edx
    X86_AT(c, 0x1083eu);
    { uint32_t t = c.r[3]; c.r[3] = c.r[2]; c.r[2] = t; }
    // 010840  ret 
    X86_AT(c, 0x10840u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x10832u, "ran off the end of a function");
}
void f_00010837(X86Cpu& c) {
    X86_TICK(c, 10);
    // 010837  xchg ebx, edx
    X86_AT(c, 0x10837u);
    { uint32_t t = c.r[3]; c.r[3] = c.r[2]; c.r[2] = t; }
    // 010839  call 0x10841
    X86_AT(c, 0x10839u);
    push32(c, 0x1083eu); f_00010841(c); X86_RET(c, 0x1083eu);
    X86_TICK(c, 13);
    // 01083e  xchg ebx, edx
    X86_AT(c, 0x1083eu);
    { uint32_t t = c.r[3]; c.r[3] = c.r[2]; c.r[2] = t; }
    // 010840  ret 
    X86_AT(c, 0x10840u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x10837u, "ran off the end of a function");
}
void f_00010839(X86Cpu& c) {
    X86_TICK(c, 7);
    // 010839  call 0x10841
    X86_AT(c, 0x10839u);
    push32(c, 0x1083eu); f_00010841(c); X86_RET(c, 0x1083eu);
    X86_TICK(c, 13);
    // 01083e  xchg ebx, edx
    X86_AT(c, 0x1083eu);
    { uint32_t t = c.r[3]; c.r[3] = c.r[2]; c.r[2] = t; }
    // 010840  ret 
    X86_AT(c, 0x10840u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x10839u, "ran off the end of a function");
}
void f_0001083e(X86Cpu& c) {
    X86_TICK(c, 13);
    // 01083e  xchg ebx, edx
    X86_AT(c, 0x1083eu);
    { uint32_t t = c.r[3]; c.r[3] = c.r[2]; c.r[2] = t; }
    // 010840  ret 
    X86_AT(c, 0x10840u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x1083eu, "ran off the end of a function");
}
void f_00010840(X86Cpu& c) {
    X86_TICK(c, 10);
    // 010840  ret 
    X86_AT(c, 0x10840u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x10840u, "ran off the end of a function");
}
void f_00010841(X86Cpu& c) {
    X86_TICK(c, 11);
    // 010841  cmp dx, word ptr [edi + esi*1 + 0xf]
    X86_AT(c, 0x10841u);
    (void)x86_sub(c, (c.r[2] & 0xFFFFu), rd16((c.sbase[3] + (uint32_t)(c.r[7] + c.r[6] + 0xFu))), 0, 2);
    // 010846  jg 0x1084f
    X86_AT(c, 0x10846u);
    if (x86_cc(c, 15)) { goto L_1084f; }
    X86_TICK(c, 11);
    // 010848  mov dx, word ptr [edi + esi*1 + 0xf]
    X86_AT(c, 0x10848u);
    s16(c, 2, rd16((c.sbase[3] + (uint32_t)(c.r[7] + c.r[6] + 0xFu))));
    // 01084d  jmp 0x1085b
    X86_AT(c, 0x1084du);
    goto L_1085b;
L_1084f:
    X86_TICK(c, 11);
    // 01084f  cmp dx, word ptr [edi + esi*1 + 0x5a]
    X86_AT(c, 0x1084fu);
    (void)x86_sub(c, (c.r[2] & 0xFFFFu), rd16((c.sbase[3] + (uint32_t)(c.r[7] + c.r[6] + 0x5Au))), 0, 2);
    // 010854  jle 0x1085b
    X86_AT(c, 0x10854u);
    if (x86_cc(c, 14)) { goto L_1085b; }
    X86_TICK(c, 4);
    // 010856  mov dx, word ptr [edi + esi*1 + 0x5a]
    X86_AT(c, 0x10856u);
    s16(c, 2, rd16((c.sbase[3] + (uint32_t)(c.r[7] + c.r[6] + 0x5Au))));
L_1085b:
    X86_TICK(c, 12);
    // 01085b  mov word ptr [edi + esi*1 + 0x52], dx
    X86_AT(c, 0x1085bu);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + c.r[6] + 0x52u)), (c.r[2] & 0xFFFFu));
    // 010860  ret 
    X86_AT(c, 0x10860u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x10841u, "ran off the end of a function");
}
void f_00010846(X86Cpu& c) {
    X86_TICK(c, 5);
    // 010846  jg 0x1084f
    X86_AT(c, 0x10846u);
    if (x86_cc(c, 15)) { goto L_1084f; }
    X86_TICK(c, 11);
    // 010848  mov dx, word ptr [edi + esi*1 + 0xf]
    X86_AT(c, 0x10848u);
    s16(c, 2, rd16((c.sbase[3] + (uint32_t)(c.r[7] + c.r[6] + 0xFu))));
    // 01084d  jmp 0x1085b
    X86_AT(c, 0x1084du);
    goto L_1085b;
L_1084f:
    X86_TICK(c, 11);
    // 01084f  cmp dx, word ptr [edi + esi*1 + 0x5a]
    X86_AT(c, 0x1084fu);
    (void)x86_sub(c, (c.r[2] & 0xFFFFu), rd16((c.sbase[3] + (uint32_t)(c.r[7] + c.r[6] + 0x5Au))), 0, 2);
    // 010854  jle 0x1085b
    X86_AT(c, 0x10854u);
    if (x86_cc(c, 14)) { goto L_1085b; }
    X86_TICK(c, 4);
    // 010856  mov dx, word ptr [edi + esi*1 + 0x5a]
    X86_AT(c, 0x10856u);
    s16(c, 2, rd16((c.sbase[3] + (uint32_t)(c.r[7] + c.r[6] + 0x5Au))));
L_1085b:
    X86_TICK(c, 12);
    // 01085b  mov word ptr [edi + esi*1 + 0x52], dx
    X86_AT(c, 0x1085bu);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + c.r[6] + 0x52u)), (c.r[2] & 0xFFFFu));
    // 010860  ret 
    X86_AT(c, 0x10860u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x10846u, "ran off the end of a function");
}
void f_0001084f(X86Cpu& c) {
    X86_TICK(c, 11);
    // 01084f  cmp dx, word ptr [edi + esi*1 + 0x5a]
    X86_AT(c, 0x1084fu);
    (void)x86_sub(c, (c.r[2] & 0xFFFFu), rd16((c.sbase[3] + (uint32_t)(c.r[7] + c.r[6] + 0x5Au))), 0, 2);
    // 010854  jle 0x1085b
    X86_AT(c, 0x10854u);
    if (x86_cc(c, 14)) { goto L_1085b; }
    X86_TICK(c, 4);
    // 010856  mov dx, word ptr [edi + esi*1 + 0x5a]
    X86_AT(c, 0x10856u);
    s16(c, 2, rd16((c.sbase[3] + (uint32_t)(c.r[7] + c.r[6] + 0x5Au))));
L_1085b:
    X86_TICK(c, 12);
    // 01085b  mov word ptr [edi + esi*1 + 0x52], dx
    X86_AT(c, 0x1085bu);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + c.r[6] + 0x52u)), (c.r[2] & 0xFFFFu));
    // 010860  ret 
    X86_AT(c, 0x10860u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x1084fu, "ran off the end of a function");
}
void f_00010854(X86Cpu& c) {
    X86_TICK(c, 5);
    // 010854  jle 0x1085b
    X86_AT(c, 0x10854u);
    if (x86_cc(c, 14)) { goto L_1085b; }
    X86_TICK(c, 4);
    // 010856  mov dx, word ptr [edi + esi*1 + 0x5a]
    X86_AT(c, 0x10856u);
    s16(c, 2, rd16((c.sbase[3] + (uint32_t)(c.r[7] + c.r[6] + 0x5Au))));
L_1085b:
    X86_TICK(c, 12);
    // 01085b  mov word ptr [edi + esi*1 + 0x52], dx
    X86_AT(c, 0x1085bu);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + c.r[6] + 0x52u)), (c.r[2] & 0xFFFFu));
    // 010860  ret 
    X86_AT(c, 0x10860u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x10854u, "ran off the end of a function");
}
void f_0001085b(X86Cpu& c) {
    X86_TICK(c, 12);
    // 01085b  mov word ptr [edi + esi*1 + 0x52], dx
    X86_AT(c, 0x1085bu);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + c.r[6] + 0x52u)), (c.r[2] & 0xFFFFu));
    // 010860  ret 
    X86_AT(c, 0x10860u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x1085bu, "ran off the end of a function");
}
void f_00010860(X86Cpu& c) {
    X86_TICK(c, 10);
    // 010860  ret 
    X86_AT(c, 0x10860u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x10860u, "ran off the end of a function");
}
void f_00010861(X86Cpu& c) {
    X86_TICK(c, 19);
    // 010861  mov esi, 0x18
    X86_AT(c, 0x10861u);
    c.r[6] = 0x18u;
    // 010866  movzx eax, al
    X86_AT(c, 0x10866u);
    c.r[0] = g8(c, 0);
    // 010869  lea eax, [eax + eax*2]
    X86_AT(c, 0x10869u);
    c.r[0] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 01086c  lea esi, [esi + eax*4]
    X86_AT(c, 0x1086cu);
    c.r[6] = (uint32_t)(c.r[6] + c.r[0] * 4);
    // 01086f  ret 
    X86_AT(c, 0x1086fu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x10861u, "ran off the end of a function");
}
void f_00010870(X86Cpu& c) {
    X86_TICK(c, 12);
    // 010870  test word ptr [edi + 0x30], 1
    X86_AT(c, 0x10870u);
    (void)x86_logic(c, rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x30u))) & 0x1u, 2);
    // 010876  jne 0x10890
    X86_AT(c, 0x10876u);
    if (x86_cc(c, 5)) { goto L_10890; }
    X86_TICK(c, 36);
    // 010878  pushfd 
    X86_AT(c, 0x10878u);
    push32(c, c.fl & 0x00FCFFFFu);
    // 010879  cli 
    X86_AT(c, 0x10879u);
    c.fl &= ~X86_IF;
    // 01087a  mov dx, word ptr gs:[edi + 0x52]
    X86_AT(c, 0x1087au);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[7] + 0x52u))));
    // 01087f  mov word ptr gs:[edi + 0x56], dx
    X86_AT(c, 0x1087fu);
    wr16((c.sbase[5] + (uint32_t)(c.r[7] + 0x56u)), (c.r[2] & 0xFFFFu));
    // 010884  mov bx, word ptr gs:[edi + 0x54]
    X86_AT(c, 0x10884u);
    s16(c, 3, rd16((c.sbase[5] + (uint32_t)(c.r[7] + 0x54u))));
    // 010889  mov word ptr gs:[edi + 0x58], bx
    X86_AT(c, 0x10889u);
    wr16((c.sbase[5] + (uint32_t)(c.r[7] + 0x58u)), (c.r[3] & 0xFFFFu));
    // 01088e  popfd 
    X86_AT(c, 0x1088eu);
    x86_popfd(c, 4);
    // 01088f  ret 
    X86_AT(c, 0x1088fu);
    c.eip = pop32(c); return;
L_10890:
    X86_TICK(c, 12);
    // 010890  cmp byte ptr [edi + 0x4d], 0
    X86_AT(c, 0x10890u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x4Du))), 0x0u, 0, 1);
    // 010894  je 0x108a8
    X86_AT(c, 0x10894u);
    if (x86_cc(c, 4)) { goto L_108a8; }
    X86_TICK(c, 9);
    // 010896  mov byte ptr [edi + 0x17], 0
    X86_AT(c, 0x10896u);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0x17u)), 0x0u);
    // 01089a  call 0x10b75
    X86_AT(c, 0x1089au);
    push32(c, 0x1089fu); f_00010b75(c); X86_RET(c, 0x1089fu);
    X86_TICK(c, 7);
    // 01089f  call 0x10bd0
    X86_AT(c, 0x1089fu);
    push32(c, 0x108a4u); f_00010bd0(c); X86_RET(c, 0x108a4u);
    X86_TICK(c, 2);
    // 0108a4  mov byte ptr [edi + 0x17], 1
    X86_AT(c, 0x108a4u);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0x17u)), 0x1u);
L_108a8:
    X86_TICK(c, 10);
    // 0108a8  ret 
    X86_AT(c, 0x108a8u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x10870u, "ran off the end of a function");
}
void f_00010876(X86Cpu& c) {
    X86_TICK(c, 5);
    // 010876  jne 0x10890
    X86_AT(c, 0x10876u);
    if (x86_cc(c, 5)) { goto L_10890; }
    X86_TICK(c, 36);
    // 010878  pushfd 
    X86_AT(c, 0x10878u);
    push32(c, c.fl & 0x00FCFFFFu);
    // 010879  cli 
    X86_AT(c, 0x10879u);
    c.fl &= ~X86_IF;
    // 01087a  mov dx, word ptr gs:[edi + 0x52]
    X86_AT(c, 0x1087au);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[7] + 0x52u))));
    // 01087f  mov word ptr gs:[edi + 0x56], dx
    X86_AT(c, 0x1087fu);
    wr16((c.sbase[5] + (uint32_t)(c.r[7] + 0x56u)), (c.r[2] & 0xFFFFu));
    // 010884  mov bx, word ptr gs:[edi + 0x54]
    X86_AT(c, 0x10884u);
    s16(c, 3, rd16((c.sbase[5] + (uint32_t)(c.r[7] + 0x54u))));
    // 010889  mov word ptr gs:[edi + 0x58], bx
    X86_AT(c, 0x10889u);
    wr16((c.sbase[5] + (uint32_t)(c.r[7] + 0x58u)), (c.r[3] & 0xFFFFu));
    // 01088e  popfd 
    X86_AT(c, 0x1088eu);
    x86_popfd(c, 4);
    // 01088f  ret 
    X86_AT(c, 0x1088fu);
    c.eip = pop32(c); return;
L_10890:
    X86_TICK(c, 12);
    // 010890  cmp byte ptr [edi + 0x4d], 0
    X86_AT(c, 0x10890u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x4Du))), 0x0u, 0, 1);
    // 010894  je 0x108a8
    X86_AT(c, 0x10894u);
    if (x86_cc(c, 4)) { goto L_108a8; }
    X86_TICK(c, 9);
    // 010896  mov byte ptr [edi + 0x17], 0
    X86_AT(c, 0x10896u);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0x17u)), 0x0u);
    // 01089a  call 0x10b75
    X86_AT(c, 0x1089au);
    push32(c, 0x1089fu); f_00010b75(c); X86_RET(c, 0x1089fu);
    X86_TICK(c, 7);
    // 01089f  call 0x10bd0
    X86_AT(c, 0x1089fu);
    push32(c, 0x108a4u); f_00010bd0(c); X86_RET(c, 0x108a4u);
    X86_TICK(c, 2);
    // 0108a4  mov byte ptr [edi + 0x17], 1
    X86_AT(c, 0x108a4u);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0x17u)), 0x1u);
L_108a8:
    X86_TICK(c, 10);
    // 0108a8  ret 
    X86_AT(c, 0x108a8u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x10876u, "ran off the end of a function");
}
void f_00010890(X86Cpu& c) {
    X86_TICK(c, 12);
    // 010890  cmp byte ptr [edi + 0x4d], 0
    X86_AT(c, 0x10890u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x4Du))), 0x0u, 0, 1);
    // 010894  je 0x108a8
    X86_AT(c, 0x10894u);
    if (x86_cc(c, 4)) { goto L_108a8; }
    X86_TICK(c, 9);
    // 010896  mov byte ptr [edi + 0x17], 0
    X86_AT(c, 0x10896u);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0x17u)), 0x0u);
    // 01089a  call 0x10b75
    X86_AT(c, 0x1089au);
    push32(c, 0x1089fu); f_00010b75(c); X86_RET(c, 0x1089fu);
    X86_TICK(c, 7);
    // 01089f  call 0x10bd0
    X86_AT(c, 0x1089fu);
    push32(c, 0x108a4u); f_00010bd0(c); X86_RET(c, 0x108a4u);
    X86_TICK(c, 2);
    // 0108a4  mov byte ptr [edi + 0x17], 1
    X86_AT(c, 0x108a4u);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0x17u)), 0x1u);
L_108a8:
    X86_TICK(c, 10);
    // 0108a8  ret 
    X86_AT(c, 0x108a8u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x10890u, "ran off the end of a function");
}
void f_00010894(X86Cpu& c) {
    X86_TICK(c, 5);
    // 010894  je 0x108a8
    X86_AT(c, 0x10894u);
    if (x86_cc(c, 4)) { goto L_108a8; }
    X86_TICK(c, 9);
    // 010896  mov byte ptr [edi + 0x17], 0
    X86_AT(c, 0x10896u);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0x17u)), 0x0u);
    // 01089a  call 0x10b75
    X86_AT(c, 0x1089au);
    push32(c, 0x1089fu); f_00010b75(c); X86_RET(c, 0x1089fu);
    X86_TICK(c, 7);
    // 01089f  call 0x10bd0
    X86_AT(c, 0x1089fu);
    push32(c, 0x108a4u); f_00010bd0(c); X86_RET(c, 0x108a4u);
    X86_TICK(c, 2);
    // 0108a4  mov byte ptr [edi + 0x17], 1
    X86_AT(c, 0x108a4u);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0x17u)), 0x1u);
L_108a8:
    X86_TICK(c, 10);
    // 0108a8  ret 
    X86_AT(c, 0x108a8u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x10894u, "ran off the end of a function");
}
void f_00010896(X86Cpu& c) {
    X86_TICK(c, 9);
    // 010896  mov byte ptr [edi + 0x17], 0
    X86_AT(c, 0x10896u);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0x17u)), 0x0u);
    // 01089a  call 0x10b75
    X86_AT(c, 0x1089au);
    push32(c, 0x1089fu); f_00010b75(c); X86_RET(c, 0x1089fu);
    X86_TICK(c, 7);
    // 01089f  call 0x10bd0
    X86_AT(c, 0x1089fu);
    push32(c, 0x108a4u); f_00010bd0(c); X86_RET(c, 0x108a4u);
    X86_TICK(c, 12);
    // 0108a4  mov byte ptr [edi + 0x17], 1
    X86_AT(c, 0x108a4u);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0x17u)), 0x1u);
    // 0108a8  ret 
    X86_AT(c, 0x108a8u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x10896u, "ran off the end of a function");
}
void f_0001089a(X86Cpu& c) {
    X86_TICK(c, 7);
    // 01089a  call 0x10b75
    X86_AT(c, 0x1089au);
    push32(c, 0x1089fu); f_00010b75(c); X86_RET(c, 0x1089fu);
    X86_TICK(c, 7);
    // 01089f  call 0x10bd0
    X86_AT(c, 0x1089fu);
    push32(c, 0x108a4u); f_00010bd0(c); X86_RET(c, 0x108a4u);
    X86_TICK(c, 12);
    // 0108a4  mov byte ptr [edi + 0x17], 1
    X86_AT(c, 0x108a4u);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0x17u)), 0x1u);
    // 0108a8  ret 
    X86_AT(c, 0x108a8u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x1089au, "ran off the end of a function");
}
void f_0001089f(X86Cpu& c) {
    X86_TICK(c, 7);
    // 01089f  call 0x10bd0
    X86_AT(c, 0x1089fu);
    push32(c, 0x108a4u); f_00010bd0(c); X86_RET(c, 0x108a4u);
    X86_TICK(c, 12);
    // 0108a4  mov byte ptr [edi + 0x17], 1
    X86_AT(c, 0x108a4u);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0x17u)), 0x1u);
    // 0108a8  ret 
    X86_AT(c, 0x108a8u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x1089fu, "ran off the end of a function");
}
void f_000108a4(X86Cpu& c) {
    X86_TICK(c, 12);
    // 0108a4  mov byte ptr [edi + 0x17], 1
    X86_AT(c, 0x108a4u);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0x17u)), 0x1u);
    // 0108a8  ret 
    X86_AT(c, 0x108a8u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x108a4u, "ran off the end of a function");
}
void f_000108a8(X86Cpu& c) {
    X86_TICK(c, 10);
    // 0108a8  ret 
    X86_AT(c, 0x108a8u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x108a8u, "ran off the end of a function");
}
void f_000108a9(X86Cpu& c) {
    X86_TICK(c, 156);
    // 0108a9  push ds
    X86_AT(c, 0x108a9u);
    push32(c, c.sreg[3]);
    // 0108aa  push es
    X86_AT(c, 0x108aau);
    push32(c, c.sreg[0]);
    // 0108ab  push fs
    X86_AT(c, 0x108abu);
    push32(c, c.sreg[4]);
    // 0108ad  push gs
    X86_AT(c, 0x108adu);
    push32(c, c.sreg[5]);
    // 0108af  pushal 
    X86_AT(c, 0x108afu);
    { uint32_t sp = c.r[4]; for (int k = 0; k < 8; ++k) push32(c, k == 4 ? sp : c.r[k]); }
    // 0108b0  pushfd 
    X86_AT(c, 0x108b0u);
    push32(c, c.fl & 0x00FCFFFFu);
    // 0108b1  push eax
    X86_AT(c, 0x108b1u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0108b2  push edx
    X86_AT(c, 0x108b2u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0108b3  mov dx, 0x3ad6
    X86_AT(c, 0x108b3u);
    s16(c, 2, 0x3AD6u);
    // 0108b7  in al, dx
    X86_AT(c, 0x108b7u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 0108b8  shl eax, 8
    X86_AT(c, 0x108b8u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 0108bb  sub dx, 2
    X86_AT(c, 0x108bbu);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_sub(c, v, 0x2u, 0, 2)); }
    // 0108bf  in al, dx
    X86_AT(c, 0x108bfu);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 0108c0  shl eax, 8
    X86_AT(c, 0x108c0u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 0108c3  sub dx, 2
    X86_AT(c, 0x108c3u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_sub(c, v, 0x2u, 0, 2)); }
    // 0108c7  in al, dx
    X86_AT(c, 0x108c7u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 0108c8  shl eax, 8
    X86_AT(c, 0x108c8u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 0108cb  sub dx, 2
    X86_AT(c, 0x108cbu);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_sub(c, v, 0x2u, 0, 2)); }
    // 0108cf  in al, dx
    X86_AT(c, 0x108cfu);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 0108d0  mov edi, eax
    X86_AT(c, 0x108d0u);
    c.r[7] = c.r[0];
    // 0108d2  mov dx, 0x3ada
    X86_AT(c, 0x108d2u);
    s16(c, 2, 0x3ADAu);
    // 0108d6  in al, dx
    X86_AT(c, 0x108d6u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 0108d7  shl eax, 8
    X86_AT(c, 0x108d7u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 0108da  sub dx, 2
    X86_AT(c, 0x108dau);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_sub(c, v, 0x2u, 0, 2)); }
    // 0108de  in al, dx
    X86_AT(c, 0x108deu);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 0108df  mov ds, eax
    X86_AT(c, 0x108dfu);
    x86_load_seg(c, 3, (c.r[0] & 0xFFFFu) & 0xFFFFu);
    // 0108e1  pop edx
    X86_AT(c, 0x108e1u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 0108e2  pop eax
    X86_AT(c, 0x108e2u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 0108e3  cmp word ptr [edi + 9], 0
    X86_AT(c, 0x108e3u);
    (void)x86_sub(c, rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x9u))), 0x0u, 0, 2);
    // 0108e8  je 0x108f1
    X86_AT(c, 0x108e8u);
    if (x86_cc(c, 4)) { goto L_108f1; }
    X86_TICK(c, 7);
    // 0108ea  call 0x108ff
    X86_AT(c, 0x108eau);
    push32(c, 0x108efu); f_000108ff(c); X86_RET(c, 0x108efu);
    X86_TICK(c, 7);
    // 0108ef  jmp 0x108f6
    X86_AT(c, 0x108efu);
    goto L_108f6;
L_108f1:
    X86_TICK(c, 7);
    // 0108f1  call 0x10b22
    X86_AT(c, 0x108f1u);
    push32(c, 0x108f6u); f_00010b22(c); X86_RET(c, 0x108f6u);
L_108f6:
    X86_TICK(c, 52);
    // 0108f6  popfd 
    X86_AT(c, 0x108f6u);
    x86_popfd(c, 4);
    // 0108f7  popal 
    X86_AT(c, 0x108f7u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 0108f8  pop gs
    X86_AT(c, 0x108f8u);
    x86_load_seg(c, 5, pop32(c) & 0xFFFFu);
    // 0108fa  pop fs
    X86_AT(c, 0x108fau);
    x86_load_seg(c, 4, pop32(c) & 0xFFFFu);
    // 0108fc  pop es
    X86_AT(c, 0x108fcu);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 0108fd  pop ds
    X86_AT(c, 0x108fdu);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 0108fe  retf 
    X86_AT(c, 0x108feu);
    x86_retf(c, 4, 0u); return;
    x86_fault(c, 0x108a9u, "ran off the end of a function");
}
void f_000108aa(X86Cpu& c) {
    X86_TICK(c, 154);
    // 0108aa  push es
    X86_AT(c, 0x108aau);
    push32(c, c.sreg[0]);
    // 0108ab  push fs
    X86_AT(c, 0x108abu);
    push32(c, c.sreg[4]);
    // 0108ad  push gs
    X86_AT(c, 0x108adu);
    push32(c, c.sreg[5]);
    // 0108af  pushal 
    X86_AT(c, 0x108afu);
    { uint32_t sp = c.r[4]; for (int k = 0; k < 8; ++k) push32(c, k == 4 ? sp : c.r[k]); }
    // 0108b0  pushfd 
    X86_AT(c, 0x108b0u);
    push32(c, c.fl & 0x00FCFFFFu);
    // 0108b1  push eax
    X86_AT(c, 0x108b1u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0108b2  push edx
    X86_AT(c, 0x108b2u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0108b3  mov dx, 0x3ad6
    X86_AT(c, 0x108b3u);
    s16(c, 2, 0x3AD6u);
    // 0108b7  in al, dx
    X86_AT(c, 0x108b7u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 0108b8  shl eax, 8
    X86_AT(c, 0x108b8u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 0108bb  sub dx, 2
    X86_AT(c, 0x108bbu);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_sub(c, v, 0x2u, 0, 2)); }
    // 0108bf  in al, dx
    X86_AT(c, 0x108bfu);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 0108c0  shl eax, 8
    X86_AT(c, 0x108c0u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 0108c3  sub dx, 2
    X86_AT(c, 0x108c3u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_sub(c, v, 0x2u, 0, 2)); }
    // 0108c7  in al, dx
    X86_AT(c, 0x108c7u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 0108c8  shl eax, 8
    X86_AT(c, 0x108c8u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 0108cb  sub dx, 2
    X86_AT(c, 0x108cbu);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_sub(c, v, 0x2u, 0, 2)); }
    // 0108cf  in al, dx
    X86_AT(c, 0x108cfu);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 0108d0  mov edi, eax
    X86_AT(c, 0x108d0u);
    c.r[7] = c.r[0];
    // 0108d2  mov dx, 0x3ada
    X86_AT(c, 0x108d2u);
    s16(c, 2, 0x3ADAu);
    // 0108d6  in al, dx
    X86_AT(c, 0x108d6u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 0108d7  shl eax, 8
    X86_AT(c, 0x108d7u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 0108da  sub dx, 2
    X86_AT(c, 0x108dau);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_sub(c, v, 0x2u, 0, 2)); }
    // 0108de  in al, dx
    X86_AT(c, 0x108deu);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 0108df  mov ds, eax
    X86_AT(c, 0x108dfu);
    x86_load_seg(c, 3, (c.r[0] & 0xFFFFu) & 0xFFFFu);
    // 0108e1  pop edx
    X86_AT(c, 0x108e1u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 0108e2  pop eax
    X86_AT(c, 0x108e2u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 0108e3  cmp word ptr [edi + 9], 0
    X86_AT(c, 0x108e3u);
    (void)x86_sub(c, rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x9u))), 0x0u, 0, 2);
    // 0108e8  je 0x108f1
    X86_AT(c, 0x108e8u);
    if (x86_cc(c, 4)) { goto L_108f1; }
    X86_TICK(c, 7);
    // 0108ea  call 0x108ff
    X86_AT(c, 0x108eau);
    push32(c, 0x108efu); f_000108ff(c); X86_RET(c, 0x108efu);
    X86_TICK(c, 7);
    // 0108ef  jmp 0x108f6
    X86_AT(c, 0x108efu);
    goto L_108f6;
L_108f1:
    X86_TICK(c, 7);
    // 0108f1  call 0x10b22
    X86_AT(c, 0x108f1u);
    push32(c, 0x108f6u); f_00010b22(c); X86_RET(c, 0x108f6u);
L_108f6:
    X86_TICK(c, 52);
    // 0108f6  popfd 
    X86_AT(c, 0x108f6u);
    x86_popfd(c, 4);
    // 0108f7  popal 
    X86_AT(c, 0x108f7u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 0108f8  pop gs
    X86_AT(c, 0x108f8u);
    x86_load_seg(c, 5, pop32(c) & 0xFFFFu);
    // 0108fa  pop fs
    X86_AT(c, 0x108fau);
    x86_load_seg(c, 4, pop32(c) & 0xFFFFu);
    // 0108fc  pop es
    X86_AT(c, 0x108fcu);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 0108fd  pop ds
    X86_AT(c, 0x108fdu);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 0108fe  retf 
    X86_AT(c, 0x108feu);
    x86_retf(c, 4, 0u); return;
    x86_fault(c, 0x108aau, "ran off the end of a function");
}
void f_000108ab(X86Cpu& c) {
    X86_TICK(c, 152);
    // 0108ab  push fs
    X86_AT(c, 0x108abu);
    push32(c, c.sreg[4]);
    // 0108ad  push gs
    X86_AT(c, 0x108adu);
    push32(c, c.sreg[5]);
    // 0108af  pushal 
    X86_AT(c, 0x108afu);
    { uint32_t sp = c.r[4]; for (int k = 0; k < 8; ++k) push32(c, k == 4 ? sp : c.r[k]); }
    // 0108b0  pushfd 
    X86_AT(c, 0x108b0u);
    push32(c, c.fl & 0x00FCFFFFu);
    // 0108b1  push eax
    X86_AT(c, 0x108b1u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0108b2  push edx
    X86_AT(c, 0x108b2u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0108b3  mov dx, 0x3ad6
    X86_AT(c, 0x108b3u);
    s16(c, 2, 0x3AD6u);
    // 0108b7  in al, dx
    X86_AT(c, 0x108b7u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 0108b8  shl eax, 8
    X86_AT(c, 0x108b8u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 0108bb  sub dx, 2
    X86_AT(c, 0x108bbu);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_sub(c, v, 0x2u, 0, 2)); }
    // 0108bf  in al, dx
    X86_AT(c, 0x108bfu);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 0108c0  shl eax, 8
    X86_AT(c, 0x108c0u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 0108c3  sub dx, 2
    X86_AT(c, 0x108c3u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_sub(c, v, 0x2u, 0, 2)); }
    // 0108c7  in al, dx
    X86_AT(c, 0x108c7u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 0108c8  shl eax, 8
    X86_AT(c, 0x108c8u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 0108cb  sub dx, 2
    X86_AT(c, 0x108cbu);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_sub(c, v, 0x2u, 0, 2)); }
    // 0108cf  in al, dx
    X86_AT(c, 0x108cfu);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 0108d0  mov edi, eax
    X86_AT(c, 0x108d0u);
    c.r[7] = c.r[0];
    // 0108d2  mov dx, 0x3ada
    X86_AT(c, 0x108d2u);
    s16(c, 2, 0x3ADAu);
    // 0108d6  in al, dx
    X86_AT(c, 0x108d6u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 0108d7  shl eax, 8
    X86_AT(c, 0x108d7u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 0108da  sub dx, 2
    X86_AT(c, 0x108dau);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_sub(c, v, 0x2u, 0, 2)); }
    // 0108de  in al, dx
    X86_AT(c, 0x108deu);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 0108df  mov ds, eax
    X86_AT(c, 0x108dfu);
    x86_load_seg(c, 3, (c.r[0] & 0xFFFFu) & 0xFFFFu);
    // 0108e1  pop edx
    X86_AT(c, 0x108e1u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 0108e2  pop eax
    X86_AT(c, 0x108e2u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 0108e3  cmp word ptr [edi + 9], 0
    X86_AT(c, 0x108e3u);
    (void)x86_sub(c, rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x9u))), 0x0u, 0, 2);
    // 0108e8  je 0x108f1
    X86_AT(c, 0x108e8u);
    if (x86_cc(c, 4)) { goto L_108f1; }
    X86_TICK(c, 7);
    // 0108ea  call 0x108ff
    X86_AT(c, 0x108eau);
    push32(c, 0x108efu); f_000108ff(c); X86_RET(c, 0x108efu);
    X86_TICK(c, 7);
    // 0108ef  jmp 0x108f6
    X86_AT(c, 0x108efu);
    goto L_108f6;
L_108f1:
    X86_TICK(c, 7);
    // 0108f1  call 0x10b22
    X86_AT(c, 0x108f1u);
    push32(c, 0x108f6u); f_00010b22(c); X86_RET(c, 0x108f6u);
L_108f6:
    X86_TICK(c, 52);
    // 0108f6  popfd 
    X86_AT(c, 0x108f6u);
    x86_popfd(c, 4);
    // 0108f7  popal 
    X86_AT(c, 0x108f7u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 0108f8  pop gs
    X86_AT(c, 0x108f8u);
    x86_load_seg(c, 5, pop32(c) & 0xFFFFu);
    // 0108fa  pop fs
    X86_AT(c, 0x108fau);
    x86_load_seg(c, 4, pop32(c) & 0xFFFFu);
    // 0108fc  pop es
    X86_AT(c, 0x108fcu);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 0108fd  pop ds
    X86_AT(c, 0x108fdu);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 0108fe  retf 
    X86_AT(c, 0x108feu);
    x86_retf(c, 4, 0u); return;
    x86_fault(c, 0x108abu, "ran off the end of a function");
}
void f_000108ad(X86Cpu& c) {
    X86_TICK(c, 150);
    // 0108ad  push gs
    X86_AT(c, 0x108adu);
    push32(c, c.sreg[5]);
    // 0108af  pushal 
    X86_AT(c, 0x108afu);
    { uint32_t sp = c.r[4]; for (int k = 0; k < 8; ++k) push32(c, k == 4 ? sp : c.r[k]); }
    // 0108b0  pushfd 
    X86_AT(c, 0x108b0u);
    push32(c, c.fl & 0x00FCFFFFu);
    // 0108b1  push eax
    X86_AT(c, 0x108b1u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0108b2  push edx
    X86_AT(c, 0x108b2u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0108b3  mov dx, 0x3ad6
    X86_AT(c, 0x108b3u);
    s16(c, 2, 0x3AD6u);
    // 0108b7  in al, dx
    X86_AT(c, 0x108b7u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 0108b8  shl eax, 8
    X86_AT(c, 0x108b8u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 0108bb  sub dx, 2
    X86_AT(c, 0x108bbu);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_sub(c, v, 0x2u, 0, 2)); }
    // 0108bf  in al, dx
    X86_AT(c, 0x108bfu);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 0108c0  shl eax, 8
    X86_AT(c, 0x108c0u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 0108c3  sub dx, 2
    X86_AT(c, 0x108c3u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_sub(c, v, 0x2u, 0, 2)); }
    // 0108c7  in al, dx
    X86_AT(c, 0x108c7u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 0108c8  shl eax, 8
    X86_AT(c, 0x108c8u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 0108cb  sub dx, 2
    X86_AT(c, 0x108cbu);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_sub(c, v, 0x2u, 0, 2)); }
    // 0108cf  in al, dx
    X86_AT(c, 0x108cfu);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 0108d0  mov edi, eax
    X86_AT(c, 0x108d0u);
    c.r[7] = c.r[0];
    // 0108d2  mov dx, 0x3ada
    X86_AT(c, 0x108d2u);
    s16(c, 2, 0x3ADAu);
    // 0108d6  in al, dx
    X86_AT(c, 0x108d6u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 0108d7  shl eax, 8
    X86_AT(c, 0x108d7u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 0108da  sub dx, 2
    X86_AT(c, 0x108dau);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_sub(c, v, 0x2u, 0, 2)); }
    // 0108de  in al, dx
    X86_AT(c, 0x108deu);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 0108df  mov ds, eax
    X86_AT(c, 0x108dfu);
    x86_load_seg(c, 3, (c.r[0] & 0xFFFFu) & 0xFFFFu);
    // 0108e1  pop edx
    X86_AT(c, 0x108e1u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 0108e2  pop eax
    X86_AT(c, 0x108e2u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 0108e3  cmp word ptr [edi + 9], 0
    X86_AT(c, 0x108e3u);
    (void)x86_sub(c, rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x9u))), 0x0u, 0, 2);
    // 0108e8  je 0x108f1
    X86_AT(c, 0x108e8u);
    if (x86_cc(c, 4)) { goto L_108f1; }
    X86_TICK(c, 7);
    // 0108ea  call 0x108ff
    X86_AT(c, 0x108eau);
    push32(c, 0x108efu); f_000108ff(c); X86_RET(c, 0x108efu);
    X86_TICK(c, 7);
    // 0108ef  jmp 0x108f6
    X86_AT(c, 0x108efu);
    goto L_108f6;
L_108f1:
    X86_TICK(c, 7);
    // 0108f1  call 0x10b22
    X86_AT(c, 0x108f1u);
    push32(c, 0x108f6u); f_00010b22(c); X86_RET(c, 0x108f6u);
L_108f6:
    X86_TICK(c, 52);
    // 0108f6  popfd 
    X86_AT(c, 0x108f6u);
    x86_popfd(c, 4);
    // 0108f7  popal 
    X86_AT(c, 0x108f7u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 0108f8  pop gs
    X86_AT(c, 0x108f8u);
    x86_load_seg(c, 5, pop32(c) & 0xFFFFu);
    // 0108fa  pop fs
    X86_AT(c, 0x108fau);
    x86_load_seg(c, 4, pop32(c) & 0xFFFFu);
    // 0108fc  pop es
    X86_AT(c, 0x108fcu);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 0108fd  pop ds
    X86_AT(c, 0x108fdu);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 0108fe  retf 
    X86_AT(c, 0x108feu);
    x86_retf(c, 4, 0u); return;
    x86_fault(c, 0x108adu, "ran off the end of a function");
}
void f_000108af(X86Cpu& c) {
    X86_TICK(c, 148);
    // 0108af  pushal 
    X86_AT(c, 0x108afu);
    { uint32_t sp = c.r[4]; for (int k = 0; k < 8; ++k) push32(c, k == 4 ? sp : c.r[k]); }
    // 0108b0  pushfd 
    X86_AT(c, 0x108b0u);
    push32(c, c.fl & 0x00FCFFFFu);
    // 0108b1  push eax
    X86_AT(c, 0x108b1u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0108b2  push edx
    X86_AT(c, 0x108b2u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0108b3  mov dx, 0x3ad6
    X86_AT(c, 0x108b3u);
    s16(c, 2, 0x3AD6u);
    // 0108b7  in al, dx
    X86_AT(c, 0x108b7u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 0108b8  shl eax, 8
    X86_AT(c, 0x108b8u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 0108bb  sub dx, 2
    X86_AT(c, 0x108bbu);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_sub(c, v, 0x2u, 0, 2)); }
    // 0108bf  in al, dx
    X86_AT(c, 0x108bfu);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 0108c0  shl eax, 8
    X86_AT(c, 0x108c0u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 0108c3  sub dx, 2
    X86_AT(c, 0x108c3u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_sub(c, v, 0x2u, 0, 2)); }
    // 0108c7  in al, dx
    X86_AT(c, 0x108c7u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 0108c8  shl eax, 8
    X86_AT(c, 0x108c8u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 0108cb  sub dx, 2
    X86_AT(c, 0x108cbu);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_sub(c, v, 0x2u, 0, 2)); }
    // 0108cf  in al, dx
    X86_AT(c, 0x108cfu);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 0108d0  mov edi, eax
    X86_AT(c, 0x108d0u);
    c.r[7] = c.r[0];
    // 0108d2  mov dx, 0x3ada
    X86_AT(c, 0x108d2u);
    s16(c, 2, 0x3ADAu);
    // 0108d6  in al, dx
    X86_AT(c, 0x108d6u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 0108d7  shl eax, 8
    X86_AT(c, 0x108d7u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 0108da  sub dx, 2
    X86_AT(c, 0x108dau);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_sub(c, v, 0x2u, 0, 2)); }
    // 0108de  in al, dx
    X86_AT(c, 0x108deu);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 0108df  mov ds, eax
    X86_AT(c, 0x108dfu);
    x86_load_seg(c, 3, (c.r[0] & 0xFFFFu) & 0xFFFFu);
    // 0108e1  pop edx
    X86_AT(c, 0x108e1u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 0108e2  pop eax
    X86_AT(c, 0x108e2u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 0108e3  cmp word ptr [edi + 9], 0
    X86_AT(c, 0x108e3u);
    (void)x86_sub(c, rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x9u))), 0x0u, 0, 2);
    // 0108e8  je 0x108f1
    X86_AT(c, 0x108e8u);
    if (x86_cc(c, 4)) { goto L_108f1; }
    X86_TICK(c, 7);
    // 0108ea  call 0x108ff
    X86_AT(c, 0x108eau);
    push32(c, 0x108efu); f_000108ff(c); X86_RET(c, 0x108efu);
    X86_TICK(c, 7);
    // 0108ef  jmp 0x108f6
    X86_AT(c, 0x108efu);
    goto L_108f6;
L_108f1:
    X86_TICK(c, 7);
    // 0108f1  call 0x10b22
    X86_AT(c, 0x108f1u);
    push32(c, 0x108f6u); f_00010b22(c); X86_RET(c, 0x108f6u);
L_108f6:
    X86_TICK(c, 52);
    // 0108f6  popfd 
    X86_AT(c, 0x108f6u);
    x86_popfd(c, 4);
    // 0108f7  popal 
    X86_AT(c, 0x108f7u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 0108f8  pop gs
    X86_AT(c, 0x108f8u);
    x86_load_seg(c, 5, pop32(c) & 0xFFFFu);
    // 0108fa  pop fs
    X86_AT(c, 0x108fau);
    x86_load_seg(c, 4, pop32(c) & 0xFFFFu);
    // 0108fc  pop es
    X86_AT(c, 0x108fcu);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 0108fd  pop ds
    X86_AT(c, 0x108fdu);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 0108fe  retf 
    X86_AT(c, 0x108feu);
    x86_retf(c, 4, 0u); return;
    x86_fault(c, 0x108afu, "ran off the end of a function");
}
void f_000108b0(X86Cpu& c) {
    X86_TICK(c, 130);
    // 0108b0  pushfd 
    X86_AT(c, 0x108b0u);
    push32(c, c.fl & 0x00FCFFFFu);
    // 0108b1  push eax
    X86_AT(c, 0x108b1u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0108b2  push edx
    X86_AT(c, 0x108b2u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0108b3  mov dx, 0x3ad6
    X86_AT(c, 0x108b3u);
    s16(c, 2, 0x3AD6u);
    // 0108b7  in al, dx
    X86_AT(c, 0x108b7u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 0108b8  shl eax, 8
    X86_AT(c, 0x108b8u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 0108bb  sub dx, 2
    X86_AT(c, 0x108bbu);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_sub(c, v, 0x2u, 0, 2)); }
    // 0108bf  in al, dx
    X86_AT(c, 0x108bfu);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 0108c0  shl eax, 8
    X86_AT(c, 0x108c0u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 0108c3  sub dx, 2
    X86_AT(c, 0x108c3u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_sub(c, v, 0x2u, 0, 2)); }
    // 0108c7  in al, dx
    X86_AT(c, 0x108c7u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 0108c8  shl eax, 8
    X86_AT(c, 0x108c8u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 0108cb  sub dx, 2
    X86_AT(c, 0x108cbu);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_sub(c, v, 0x2u, 0, 2)); }
    // 0108cf  in al, dx
    X86_AT(c, 0x108cfu);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 0108d0  mov edi, eax
    X86_AT(c, 0x108d0u);
    c.r[7] = c.r[0];
    // 0108d2  mov dx, 0x3ada
    X86_AT(c, 0x108d2u);
    s16(c, 2, 0x3ADAu);
    // 0108d6  in al, dx
    X86_AT(c, 0x108d6u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 0108d7  shl eax, 8
    X86_AT(c, 0x108d7u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 0108da  sub dx, 2
    X86_AT(c, 0x108dau);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_sub(c, v, 0x2u, 0, 2)); }
    // 0108de  in al, dx
    X86_AT(c, 0x108deu);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 0108df  mov ds, eax
    X86_AT(c, 0x108dfu);
    x86_load_seg(c, 3, (c.r[0] & 0xFFFFu) & 0xFFFFu);
    // 0108e1  pop edx
    X86_AT(c, 0x108e1u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 0108e2  pop eax
    X86_AT(c, 0x108e2u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 0108e3  cmp word ptr [edi + 9], 0
    X86_AT(c, 0x108e3u);
    (void)x86_sub(c, rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x9u))), 0x0u, 0, 2);
    // 0108e8  je 0x108f1
    X86_AT(c, 0x108e8u);
    if (x86_cc(c, 4)) { goto L_108f1; }
    X86_TICK(c, 7);
    // 0108ea  call 0x108ff
    X86_AT(c, 0x108eau);
    push32(c, 0x108efu); f_000108ff(c); X86_RET(c, 0x108efu);
    X86_TICK(c, 7);
    // 0108ef  jmp 0x108f6
    X86_AT(c, 0x108efu);
    goto L_108f6;
L_108f1:
    X86_TICK(c, 7);
    // 0108f1  call 0x10b22
    X86_AT(c, 0x108f1u);
    push32(c, 0x108f6u); f_00010b22(c); X86_RET(c, 0x108f6u);
L_108f6:
    X86_TICK(c, 52);
    // 0108f6  popfd 
    X86_AT(c, 0x108f6u);
    x86_popfd(c, 4);
    // 0108f7  popal 
    X86_AT(c, 0x108f7u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 0108f8  pop gs
    X86_AT(c, 0x108f8u);
    x86_load_seg(c, 5, pop32(c) & 0xFFFFu);
    // 0108fa  pop fs
    X86_AT(c, 0x108fau);
    x86_load_seg(c, 4, pop32(c) & 0xFFFFu);
    // 0108fc  pop es
    X86_AT(c, 0x108fcu);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 0108fd  pop ds
    X86_AT(c, 0x108fdu);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 0108fe  retf 
    X86_AT(c, 0x108feu);
    x86_retf(c, 4, 0u); return;
    x86_fault(c, 0x108b0u, "ran off the end of a function");
}
void f_000108b1(X86Cpu& c) {
    X86_TICK(c, 124);
    // 0108b1  push eax
    X86_AT(c, 0x108b1u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0108b2  push edx
    X86_AT(c, 0x108b2u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0108b3  mov dx, 0x3ad6
    X86_AT(c, 0x108b3u);
    s16(c, 2, 0x3AD6u);
    // 0108b7  in al, dx
    X86_AT(c, 0x108b7u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 0108b8  shl eax, 8
    X86_AT(c, 0x108b8u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 0108bb  sub dx, 2
    X86_AT(c, 0x108bbu);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_sub(c, v, 0x2u, 0, 2)); }
    // 0108bf  in al, dx
    X86_AT(c, 0x108bfu);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 0108c0  shl eax, 8
    X86_AT(c, 0x108c0u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 0108c3  sub dx, 2
    X86_AT(c, 0x108c3u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_sub(c, v, 0x2u, 0, 2)); }
    // 0108c7  in al, dx
    X86_AT(c, 0x108c7u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 0108c8  shl eax, 8
    X86_AT(c, 0x108c8u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 0108cb  sub dx, 2
    X86_AT(c, 0x108cbu);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_sub(c, v, 0x2u, 0, 2)); }
    // 0108cf  in al, dx
    X86_AT(c, 0x108cfu);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 0108d0  mov edi, eax
    X86_AT(c, 0x108d0u);
    c.r[7] = c.r[0];
    // 0108d2  mov dx, 0x3ada
    X86_AT(c, 0x108d2u);
    s16(c, 2, 0x3ADAu);
    // 0108d6  in al, dx
    X86_AT(c, 0x108d6u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 0108d7  shl eax, 8
    X86_AT(c, 0x108d7u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 0108da  sub dx, 2
    X86_AT(c, 0x108dau);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_sub(c, v, 0x2u, 0, 2)); }
    // 0108de  in al, dx
    X86_AT(c, 0x108deu);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 0108df  mov ds, eax
    X86_AT(c, 0x108dfu);
    x86_load_seg(c, 3, (c.r[0] & 0xFFFFu) & 0xFFFFu);
    // 0108e1  pop edx
    X86_AT(c, 0x108e1u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 0108e2  pop eax
    X86_AT(c, 0x108e2u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 0108e3  cmp word ptr [edi + 9], 0
    X86_AT(c, 0x108e3u);
    (void)x86_sub(c, rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x9u))), 0x0u, 0, 2);
    // 0108e8  je 0x108f1
    X86_AT(c, 0x108e8u);
    if (x86_cc(c, 4)) { goto L_108f1; }
    X86_TICK(c, 7);
    // 0108ea  call 0x108ff
    X86_AT(c, 0x108eau);
    push32(c, 0x108efu); f_000108ff(c); X86_RET(c, 0x108efu);
    X86_TICK(c, 7);
    // 0108ef  jmp 0x108f6
    X86_AT(c, 0x108efu);
    goto L_108f6;
L_108f1:
    X86_TICK(c, 7);
    // 0108f1  call 0x10b22
    X86_AT(c, 0x108f1u);
    push32(c, 0x108f6u); f_00010b22(c); X86_RET(c, 0x108f6u);
L_108f6:
    X86_TICK(c, 52);
    // 0108f6  popfd 
    X86_AT(c, 0x108f6u);
    x86_popfd(c, 4);
    // 0108f7  popal 
    X86_AT(c, 0x108f7u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 0108f8  pop gs
    X86_AT(c, 0x108f8u);
    x86_load_seg(c, 5, pop32(c) & 0xFFFFu);
    // 0108fa  pop fs
    X86_AT(c, 0x108fau);
    x86_load_seg(c, 4, pop32(c) & 0xFFFFu);
    // 0108fc  pop es
    X86_AT(c, 0x108fcu);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 0108fd  pop ds
    X86_AT(c, 0x108fdu);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 0108fe  retf 
    X86_AT(c, 0x108feu);
    x86_retf(c, 4, 0u); return;
    x86_fault(c, 0x108b1u, "ran off the end of a function");
}
void f_000108b2(X86Cpu& c) {
    X86_TICK(c, 122);
    // 0108b2  push edx
    X86_AT(c, 0x108b2u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0108b3  mov dx, 0x3ad6
    X86_AT(c, 0x108b3u);
    s16(c, 2, 0x3AD6u);
    // 0108b7  in al, dx
    X86_AT(c, 0x108b7u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 0108b8  shl eax, 8
    X86_AT(c, 0x108b8u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 0108bb  sub dx, 2
    X86_AT(c, 0x108bbu);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_sub(c, v, 0x2u, 0, 2)); }
    // 0108bf  in al, dx
    X86_AT(c, 0x108bfu);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 0108c0  shl eax, 8
    X86_AT(c, 0x108c0u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 0108c3  sub dx, 2
    X86_AT(c, 0x108c3u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_sub(c, v, 0x2u, 0, 2)); }
    // 0108c7  in al, dx
    X86_AT(c, 0x108c7u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 0108c8  shl eax, 8
    X86_AT(c, 0x108c8u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 0108cb  sub dx, 2
    X86_AT(c, 0x108cbu);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_sub(c, v, 0x2u, 0, 2)); }
    // 0108cf  in al, dx
    X86_AT(c, 0x108cfu);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 0108d0  mov edi, eax
    X86_AT(c, 0x108d0u);
    c.r[7] = c.r[0];
    // 0108d2  mov dx, 0x3ada
    X86_AT(c, 0x108d2u);
    s16(c, 2, 0x3ADAu);
    // 0108d6  in al, dx
    X86_AT(c, 0x108d6u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 0108d7  shl eax, 8
    X86_AT(c, 0x108d7u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 0108da  sub dx, 2
    X86_AT(c, 0x108dau);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_sub(c, v, 0x2u, 0, 2)); }
    // 0108de  in al, dx
    X86_AT(c, 0x108deu);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 0108df  mov ds, eax
    X86_AT(c, 0x108dfu);
    x86_load_seg(c, 3, (c.r[0] & 0xFFFFu) & 0xFFFFu);
    // 0108e1  pop edx
    X86_AT(c, 0x108e1u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 0108e2  pop eax
    X86_AT(c, 0x108e2u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 0108e3  cmp word ptr [edi + 9], 0
    X86_AT(c, 0x108e3u);
    (void)x86_sub(c, rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x9u))), 0x0u, 0, 2);
    // 0108e8  je 0x108f1
    X86_AT(c, 0x108e8u);
    if (x86_cc(c, 4)) { goto L_108f1; }
    X86_TICK(c, 7);
    // 0108ea  call 0x108ff
    X86_AT(c, 0x108eau);
    push32(c, 0x108efu); f_000108ff(c); X86_RET(c, 0x108efu);
    X86_TICK(c, 7);
    // 0108ef  jmp 0x108f6
    X86_AT(c, 0x108efu);
    goto L_108f6;
L_108f1:
    X86_TICK(c, 7);
    // 0108f1  call 0x10b22
    X86_AT(c, 0x108f1u);
    push32(c, 0x108f6u); f_00010b22(c); X86_RET(c, 0x108f6u);
L_108f6:
    X86_TICK(c, 52);
    // 0108f6  popfd 
    X86_AT(c, 0x108f6u);
    x86_popfd(c, 4);
    // 0108f7  popal 
    X86_AT(c, 0x108f7u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 0108f8  pop gs
    X86_AT(c, 0x108f8u);
    x86_load_seg(c, 5, pop32(c) & 0xFFFFu);
    // 0108fa  pop fs
    X86_AT(c, 0x108fau);
    x86_load_seg(c, 4, pop32(c) & 0xFFFFu);
    // 0108fc  pop es
    X86_AT(c, 0x108fcu);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 0108fd  pop ds
    X86_AT(c, 0x108fdu);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 0108fe  retf 
    X86_AT(c, 0x108feu);
    x86_retf(c, 4, 0u); return;
    x86_fault(c, 0x108b2u, "ran off the end of a function");
}
}

#include "p_tbios_funcs.h"
namespace p_tbios {
void f_000102f8(X86Cpu& c) {
    X86_TICK(c, 34);
    // 0102f8  mov ecx, 0x51
    X86_AT(c, 0x102f8u);
    c.r[1] = 0x51u;
    // 0102fd  sub ecx, 0xf
    X86_AT(c, 0x102fdu);
    { uint32_t v = c.r[1]; c.r[1] = x86_sub(c, v, 0xFu, 0, 4); }
    // 010300  sub al, al
    X86_AT(c, 0x10300u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_sub(c, v, g8(c, 0), 0, 1)); }
    // 010302  cld 
    X86_AT(c, 0x10302u);
    c.fl &= ~X86_DF;
    // 010303  push edi
    X86_AT(c, 0x10303u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 010304  add edi, 0xf
    X86_AT(c, 0x10304u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0xFu, 0, 4); }
    // 010307  stosb byte ptr es:[edi], al
    X86_AT(c, 0x10307u);
    x86_string(c, 2, 1, 243, 4, 3);
    // 010309  pop edi
    X86_AT(c, 0x10309u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 01030a  mov al, 1
    X86_AT(c, 0x1030au);
    s8(c, 0, 0x1u);
    // 01030c  mov dx, 3
    X86_AT(c, 0x1030cu);
    s16(c, 2, 0x3u);
    // 010310  call 0x1054c
    X86_AT(c, 0x10310u);
    push32(c, 0x10315u); f_0001054c(c); X86_RET(c, 0x10315u);
    X86_TICK(c, 11);
    // 010315  mov al, 0
    X86_AT(c, 0x10315u);
    s8(c, 0, 0x0u);
    // 010317  mov dx, 3
    X86_AT(c, 0x10317u);
    s16(c, 2, 0x3u);
    // 01031b  call 0x1054c
    X86_AT(c, 0x1031bu);
    push32(c, 0x10320u); f_0001054c(c); X86_RET(c, 0x10320u);
    X86_TICK(c, 9);
    // 010320  mov al, 0
    X86_AT(c, 0x10320u);
    s8(c, 0, 0x0u);
    // 010322  call 0x106f4
    X86_AT(c, 0x10322u);
    push32(c, 0x10327u); f_000106f4(c); X86_RET(c, 0x10327u);
    X86_TICK(c, 9);
    // 010327  mov dword ptr [edi + 0x5e], 0x80008
    X86_AT(c, 0x10327u);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] + 0x5Eu)), 0x80008u);
    // 01032e  call 0x10b22
    X86_AT(c, 0x1032eu);
    push32(c, 0x10333u); f_00010b22(c); X86_RET(c, 0x10333u);
    X86_TICK(c, 12);
    // 010333  mov byte ptr [edi + 0x17], 1
    X86_AT(c, 0x10333u);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0x17u)), 0x1u);
    // 010337  ret 
    X86_AT(c, 0x10337u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x102f8u, "ran off the end of a function");
}
void f_000102fd(X86Cpu& c) {
    X86_TICK(c, 32);
    // 0102fd  sub ecx, 0xf
    X86_AT(c, 0x102fdu);
    { uint32_t v = c.r[1]; c.r[1] = x86_sub(c, v, 0xFu, 0, 4); }
    // 010300  sub al, al
    X86_AT(c, 0x10300u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_sub(c, v, g8(c, 0), 0, 1)); }
    // 010302  cld 
    X86_AT(c, 0x10302u);
    c.fl &= ~X86_DF;
    // 010303  push edi
    X86_AT(c, 0x10303u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 010304  add edi, 0xf
    X86_AT(c, 0x10304u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0xFu, 0, 4); }
    // 010307  stosb byte ptr es:[edi], al
    X86_AT(c, 0x10307u);
    x86_string(c, 2, 1, 243, 4, 3);
    // 010309  pop edi
    X86_AT(c, 0x10309u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 01030a  mov al, 1
    X86_AT(c, 0x1030au);
    s8(c, 0, 0x1u);
    // 01030c  mov dx, 3
    X86_AT(c, 0x1030cu);
    s16(c, 2, 0x3u);
    // 010310  call 0x1054c
    X86_AT(c, 0x10310u);
    push32(c, 0x10315u); f_0001054c(c); X86_RET(c, 0x10315u);
    X86_TICK(c, 11);
    // 010315  mov al, 0
    X86_AT(c, 0x10315u);
    s8(c, 0, 0x0u);
    // 010317  mov dx, 3
    X86_AT(c, 0x10317u);
    s16(c, 2, 0x3u);
    // 01031b  call 0x1054c
    X86_AT(c, 0x1031bu);
    push32(c, 0x10320u); f_0001054c(c); X86_RET(c, 0x10320u);
    X86_TICK(c, 9);
    // 010320  mov al, 0
    X86_AT(c, 0x10320u);
    s8(c, 0, 0x0u);
    // 010322  call 0x106f4
    X86_AT(c, 0x10322u);
    push32(c, 0x10327u); f_000106f4(c); X86_RET(c, 0x10327u);
    X86_TICK(c, 9);
    // 010327  mov dword ptr [edi + 0x5e], 0x80008
    X86_AT(c, 0x10327u);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] + 0x5Eu)), 0x80008u);
    // 01032e  call 0x10b22
    X86_AT(c, 0x1032eu);
    push32(c, 0x10333u); f_00010b22(c); X86_RET(c, 0x10333u);
    X86_TICK(c, 12);
    // 010333  mov byte ptr [edi + 0x17], 1
    X86_AT(c, 0x10333u);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0x17u)), 0x1u);
    // 010337  ret 
    X86_AT(c, 0x10337u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x102fdu, "ran off the end of a function");
}
void f_00010300(X86Cpu& c) {
    X86_TICK(c, 30);
    // 010300  sub al, al
    X86_AT(c, 0x10300u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_sub(c, v, g8(c, 0), 0, 1)); }
    // 010302  cld 
    X86_AT(c, 0x10302u);
    c.fl &= ~X86_DF;
    // 010303  push edi
    X86_AT(c, 0x10303u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 010304  add edi, 0xf
    X86_AT(c, 0x10304u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0xFu, 0, 4); }
    // 010307  stosb byte ptr es:[edi], al
    X86_AT(c, 0x10307u);
    x86_string(c, 2, 1, 243, 4, 3);
    // 010309  pop edi
    X86_AT(c, 0x10309u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 01030a  mov al, 1
    X86_AT(c, 0x1030au);
    s8(c, 0, 0x1u);
    // 01030c  mov dx, 3
    X86_AT(c, 0x1030cu);
    s16(c, 2, 0x3u);
    // 010310  call 0x1054c
    X86_AT(c, 0x10310u);
    push32(c, 0x10315u); f_0001054c(c); X86_RET(c, 0x10315u);
    X86_TICK(c, 11);
    // 010315  mov al, 0
    X86_AT(c, 0x10315u);
    s8(c, 0, 0x0u);
    // 010317  mov dx, 3
    X86_AT(c, 0x10317u);
    s16(c, 2, 0x3u);
    // 01031b  call 0x1054c
    X86_AT(c, 0x1031bu);
    push32(c, 0x10320u); f_0001054c(c); X86_RET(c, 0x10320u);
    X86_TICK(c, 9);
    // 010320  mov al, 0
    X86_AT(c, 0x10320u);
    s8(c, 0, 0x0u);
    // 010322  call 0x106f4
    X86_AT(c, 0x10322u);
    push32(c, 0x10327u); f_000106f4(c); X86_RET(c, 0x10327u);
    X86_TICK(c, 9);
    // 010327  mov dword ptr [edi + 0x5e], 0x80008
    X86_AT(c, 0x10327u);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] + 0x5Eu)), 0x80008u);
    // 01032e  call 0x10b22
    X86_AT(c, 0x1032eu);
    push32(c, 0x10333u); f_00010b22(c); X86_RET(c, 0x10333u);
    X86_TICK(c, 12);
    // 010333  mov byte ptr [edi + 0x17], 1
    X86_AT(c, 0x10333u);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0x17u)), 0x1u);
    // 010337  ret 
    X86_AT(c, 0x10337u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x10300u, "ran off the end of a function");
}
void f_00010302(X86Cpu& c) {
    X86_TICK(c, 28);
    // 010302  cld 
    X86_AT(c, 0x10302u);
    c.fl &= ~X86_DF;
    // 010303  push edi
    X86_AT(c, 0x10303u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 010304  add edi, 0xf
    X86_AT(c, 0x10304u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0xFu, 0, 4); }
    // 010307  stosb byte ptr es:[edi], al
    X86_AT(c, 0x10307u);
    x86_string(c, 2, 1, 243, 4, 3);
    // 010309  pop edi
    X86_AT(c, 0x10309u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 01030a  mov al, 1
    X86_AT(c, 0x1030au);
    s8(c, 0, 0x1u);
    // 01030c  mov dx, 3
    X86_AT(c, 0x1030cu);
    s16(c, 2, 0x3u);
    // 010310  call 0x1054c
    X86_AT(c, 0x10310u);
    push32(c, 0x10315u); f_0001054c(c); X86_RET(c, 0x10315u);
    X86_TICK(c, 11);
    // 010315  mov al, 0
    X86_AT(c, 0x10315u);
    s8(c, 0, 0x0u);
    // 010317  mov dx, 3
    X86_AT(c, 0x10317u);
    s16(c, 2, 0x3u);
    // 01031b  call 0x1054c
    X86_AT(c, 0x1031bu);
    push32(c, 0x10320u); f_0001054c(c); X86_RET(c, 0x10320u);
    X86_TICK(c, 9);
    // 010320  mov al, 0
    X86_AT(c, 0x10320u);
    s8(c, 0, 0x0u);
    // 010322  call 0x106f4
    X86_AT(c, 0x10322u);
    push32(c, 0x10327u); f_000106f4(c); X86_RET(c, 0x10327u);
    X86_TICK(c, 9);
    // 010327  mov dword ptr [edi + 0x5e], 0x80008
    X86_AT(c, 0x10327u);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] + 0x5Eu)), 0x80008u);
    // 01032e  call 0x10b22
    X86_AT(c, 0x1032eu);
    push32(c, 0x10333u); f_00010b22(c); X86_RET(c, 0x10333u);
    X86_TICK(c, 12);
    // 010333  mov byte ptr [edi + 0x17], 1
    X86_AT(c, 0x10333u);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0x17u)), 0x1u);
    // 010337  ret 
    X86_AT(c, 0x10337u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x10302u, "ran off the end of a function");
}
void f_00010303(X86Cpu& c) {
    X86_TICK(c, 26);
    // 010303  push edi
    X86_AT(c, 0x10303u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 010304  add edi, 0xf
    X86_AT(c, 0x10304u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0xFu, 0, 4); }
    // 010307  stosb byte ptr es:[edi], al
    X86_AT(c, 0x10307u);
    x86_string(c, 2, 1, 243, 4, 3);
    // 010309  pop edi
    X86_AT(c, 0x10309u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 01030a  mov al, 1
    X86_AT(c, 0x1030au);
    s8(c, 0, 0x1u);
    // 01030c  mov dx, 3
    X86_AT(c, 0x1030cu);
    s16(c, 2, 0x3u);
    // 010310  call 0x1054c
    X86_AT(c, 0x10310u);
    push32(c, 0x10315u); f_0001054c(c); X86_RET(c, 0x10315u);
    X86_TICK(c, 11);
    // 010315  mov al, 0
    X86_AT(c, 0x10315u);
    s8(c, 0, 0x0u);
    // 010317  mov dx, 3
    X86_AT(c, 0x10317u);
    s16(c, 2, 0x3u);
    // 01031b  call 0x1054c
    X86_AT(c, 0x1031bu);
    push32(c, 0x10320u); f_0001054c(c); X86_RET(c, 0x10320u);
    X86_TICK(c, 9);
    // 010320  mov al, 0
    X86_AT(c, 0x10320u);
    s8(c, 0, 0x0u);
    // 010322  call 0x106f4
    X86_AT(c, 0x10322u);
    push32(c, 0x10327u); f_000106f4(c); X86_RET(c, 0x10327u);
    X86_TICK(c, 9);
    // 010327  mov dword ptr [edi + 0x5e], 0x80008
    X86_AT(c, 0x10327u);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] + 0x5Eu)), 0x80008u);
    // 01032e  call 0x10b22
    X86_AT(c, 0x1032eu);
    push32(c, 0x10333u); f_00010b22(c); X86_RET(c, 0x10333u);
    X86_TICK(c, 12);
    // 010333  mov byte ptr [edi + 0x17], 1
    X86_AT(c, 0x10333u);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0x17u)), 0x1u);
    // 010337  ret 
    X86_AT(c, 0x10337u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x10303u, "ran off the end of a function");
}
void f_00010304(X86Cpu& c) {
    X86_TICK(c, 24);
    // 010304  add edi, 0xf
    X86_AT(c, 0x10304u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0xFu, 0, 4); }
    // 010307  stosb byte ptr es:[edi], al
    X86_AT(c, 0x10307u);
    x86_string(c, 2, 1, 243, 4, 3);
    // 010309  pop edi
    X86_AT(c, 0x10309u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 01030a  mov al, 1
    X86_AT(c, 0x1030au);
    s8(c, 0, 0x1u);
    // 01030c  mov dx, 3
    X86_AT(c, 0x1030cu);
    s16(c, 2, 0x3u);
    // 010310  call 0x1054c
    X86_AT(c, 0x10310u);
    push32(c, 0x10315u); f_0001054c(c); X86_RET(c, 0x10315u);
    X86_TICK(c, 11);
    // 010315  mov al, 0
    X86_AT(c, 0x10315u);
    s8(c, 0, 0x0u);
    // 010317  mov dx, 3
    X86_AT(c, 0x10317u);
    s16(c, 2, 0x3u);
    // 01031b  call 0x1054c
    X86_AT(c, 0x1031bu);
    push32(c, 0x10320u); f_0001054c(c); X86_RET(c, 0x10320u);
    X86_TICK(c, 9);
    // 010320  mov al, 0
    X86_AT(c, 0x10320u);
    s8(c, 0, 0x0u);
    // 010322  call 0x106f4
    X86_AT(c, 0x10322u);
    push32(c, 0x10327u); f_000106f4(c); X86_RET(c, 0x10327u);
    X86_TICK(c, 9);
    // 010327  mov dword ptr [edi + 0x5e], 0x80008
    X86_AT(c, 0x10327u);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] + 0x5Eu)), 0x80008u);
    // 01032e  call 0x10b22
    X86_AT(c, 0x1032eu);
    push32(c, 0x10333u); f_00010b22(c); X86_RET(c, 0x10333u);
    X86_TICK(c, 12);
    // 010333  mov byte ptr [edi + 0x17], 1
    X86_AT(c, 0x10333u);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0x17u)), 0x1u);
    // 010337  ret 
    X86_AT(c, 0x10337u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x10304u, "ran off the end of a function");
}
void f_00010307(X86Cpu& c) {
    X86_TICK(c, 22);
    // 010307  stosb byte ptr es:[edi], al
    X86_AT(c, 0x10307u);
    x86_string(c, 2, 1, 243, 4, 3);
    // 010309  pop edi
    X86_AT(c, 0x10309u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 01030a  mov al, 1
    X86_AT(c, 0x1030au);
    s8(c, 0, 0x1u);
    // 01030c  mov dx, 3
    X86_AT(c, 0x1030cu);
    s16(c, 2, 0x3u);
    // 010310  call 0x1054c
    X86_AT(c, 0x10310u);
    push32(c, 0x10315u); f_0001054c(c); X86_RET(c, 0x10315u);
    X86_TICK(c, 11);
    // 010315  mov al, 0
    X86_AT(c, 0x10315u);
    s8(c, 0, 0x0u);
    // 010317  mov dx, 3
    X86_AT(c, 0x10317u);
    s16(c, 2, 0x3u);
    // 01031b  call 0x1054c
    X86_AT(c, 0x1031bu);
    push32(c, 0x10320u); f_0001054c(c); X86_RET(c, 0x10320u);
    X86_TICK(c, 9);
    // 010320  mov al, 0
    X86_AT(c, 0x10320u);
    s8(c, 0, 0x0u);
    // 010322  call 0x106f4
    X86_AT(c, 0x10322u);
    push32(c, 0x10327u); f_000106f4(c); X86_RET(c, 0x10327u);
    X86_TICK(c, 9);
    // 010327  mov dword ptr [edi + 0x5e], 0x80008
    X86_AT(c, 0x10327u);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] + 0x5Eu)), 0x80008u);
    // 01032e  call 0x10b22
    X86_AT(c, 0x1032eu);
    push32(c, 0x10333u); f_00010b22(c); X86_RET(c, 0x10333u);
    X86_TICK(c, 12);
    // 010333  mov byte ptr [edi + 0x17], 1
    X86_AT(c, 0x10333u);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0x17u)), 0x1u);
    // 010337  ret 
    X86_AT(c, 0x10337u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x10307u, "ran off the end of a function");
}
void f_00010309(X86Cpu& c) {
    X86_TICK(c, 15);
    // 010309  pop edi
    X86_AT(c, 0x10309u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 01030a  mov al, 1
    X86_AT(c, 0x1030au);
    s8(c, 0, 0x1u);
    // 01030c  mov dx, 3
    X86_AT(c, 0x1030cu);
    s16(c, 2, 0x3u);
    // 010310  call 0x1054c
    X86_AT(c, 0x10310u);
    push32(c, 0x10315u); f_0001054c(c); X86_RET(c, 0x10315u);
    X86_TICK(c, 11);
    // 010315  mov al, 0
    X86_AT(c, 0x10315u);
    s8(c, 0, 0x0u);
    // 010317  mov dx, 3
    X86_AT(c, 0x10317u);
    s16(c, 2, 0x3u);
    // 01031b  call 0x1054c
    X86_AT(c, 0x1031bu);
    push32(c, 0x10320u); f_0001054c(c); X86_RET(c, 0x10320u);
    X86_TICK(c, 9);
    // 010320  mov al, 0
    X86_AT(c, 0x10320u);
    s8(c, 0, 0x0u);
    // 010322  call 0x106f4
    X86_AT(c, 0x10322u);
    push32(c, 0x10327u); f_000106f4(c); X86_RET(c, 0x10327u);
    X86_TICK(c, 9);
    // 010327  mov dword ptr [edi + 0x5e], 0x80008
    X86_AT(c, 0x10327u);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] + 0x5Eu)), 0x80008u);
    // 01032e  call 0x10b22
    X86_AT(c, 0x1032eu);
    push32(c, 0x10333u); f_00010b22(c); X86_RET(c, 0x10333u);
    X86_TICK(c, 12);
    // 010333  mov byte ptr [edi + 0x17], 1
    X86_AT(c, 0x10333u);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0x17u)), 0x1u);
    // 010337  ret 
    X86_AT(c, 0x10337u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x10309u, "ran off the end of a function");
}
void f_0001030a(X86Cpu& c) {
    X86_TICK(c, 11);
    // 01030a  mov al, 1
    X86_AT(c, 0x1030au);
    s8(c, 0, 0x1u);
    // 01030c  mov dx, 3
    X86_AT(c, 0x1030cu);
    s16(c, 2, 0x3u);
    // 010310  call 0x1054c
    X86_AT(c, 0x10310u);
    push32(c, 0x10315u); f_0001054c(c); X86_RET(c, 0x10315u);
    X86_TICK(c, 11);
    // 010315  mov al, 0
    X86_AT(c, 0x10315u);
    s8(c, 0, 0x0u);
    // 010317  mov dx, 3
    X86_AT(c, 0x10317u);
    s16(c, 2, 0x3u);
    // 01031b  call 0x1054c
    X86_AT(c, 0x1031bu);
    push32(c, 0x10320u); f_0001054c(c); X86_RET(c, 0x10320u);
    X86_TICK(c, 9);
    // 010320  mov al, 0
    X86_AT(c, 0x10320u);
    s8(c, 0, 0x0u);
    // 010322  call 0x106f4
    X86_AT(c, 0x10322u);
    push32(c, 0x10327u); f_000106f4(c); X86_RET(c, 0x10327u);
    X86_TICK(c, 9);
    // 010327  mov dword ptr [edi + 0x5e], 0x80008
    X86_AT(c, 0x10327u);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] + 0x5Eu)), 0x80008u);
    // 01032e  call 0x10b22
    X86_AT(c, 0x1032eu);
    push32(c, 0x10333u); f_00010b22(c); X86_RET(c, 0x10333u);
    X86_TICK(c, 12);
    // 010333  mov byte ptr [edi + 0x17], 1
    X86_AT(c, 0x10333u);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0x17u)), 0x1u);
    // 010337  ret 
    X86_AT(c, 0x10337u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x1030au, "ran off the end of a function");
}
void f_0001030c(X86Cpu& c) {
    X86_TICK(c, 9);
    // 01030c  mov dx, 3
    X86_AT(c, 0x1030cu);
    s16(c, 2, 0x3u);
    // 010310  call 0x1054c
    X86_AT(c, 0x10310u);
    push32(c, 0x10315u); f_0001054c(c); X86_RET(c, 0x10315u);
    X86_TICK(c, 11);
    // 010315  mov al, 0
    X86_AT(c, 0x10315u);
    s8(c, 0, 0x0u);
    // 010317  mov dx, 3
    X86_AT(c, 0x10317u);
    s16(c, 2, 0x3u);
    // 01031b  call 0x1054c
    X86_AT(c, 0x1031bu);
    push32(c, 0x10320u); f_0001054c(c); X86_RET(c, 0x10320u);
    X86_TICK(c, 9);
    // 010320  mov al, 0
    X86_AT(c, 0x10320u);
    s8(c, 0, 0x0u);
    // 010322  call 0x106f4
    X86_AT(c, 0x10322u);
    push32(c, 0x10327u); f_000106f4(c); X86_RET(c, 0x10327u);
    X86_TICK(c, 9);
    // 010327  mov dword ptr [edi + 0x5e], 0x80008
    X86_AT(c, 0x10327u);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] + 0x5Eu)), 0x80008u);
    // 01032e  call 0x10b22
    X86_AT(c, 0x1032eu);
    push32(c, 0x10333u); f_00010b22(c); X86_RET(c, 0x10333u);
    X86_TICK(c, 12);
    // 010333  mov byte ptr [edi + 0x17], 1
    X86_AT(c, 0x10333u);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0x17u)), 0x1u);
    // 010337  ret 
    X86_AT(c, 0x10337u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x1030cu, "ran off the end of a function");
}
void f_00010310(X86Cpu& c) {
    X86_TICK(c, 7);
    // 010310  call 0x1054c
    X86_AT(c, 0x10310u);
    push32(c, 0x10315u); f_0001054c(c); X86_RET(c, 0x10315u);
    X86_TICK(c, 11);
    // 010315  mov al, 0
    X86_AT(c, 0x10315u);
    s8(c, 0, 0x0u);
    // 010317  mov dx, 3
    X86_AT(c, 0x10317u);
    s16(c, 2, 0x3u);
    // 01031b  call 0x1054c
    X86_AT(c, 0x1031bu);
    push32(c, 0x10320u); f_0001054c(c); X86_RET(c, 0x10320u);
    X86_TICK(c, 9);
    // 010320  mov al, 0
    X86_AT(c, 0x10320u);
    s8(c, 0, 0x0u);
    // 010322  call 0x106f4
    X86_AT(c, 0x10322u);
    push32(c, 0x10327u); f_000106f4(c); X86_RET(c, 0x10327u);
    X86_TICK(c, 9);
    // 010327  mov dword ptr [edi + 0x5e], 0x80008
    X86_AT(c, 0x10327u);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] + 0x5Eu)), 0x80008u);
    // 01032e  call 0x10b22
    X86_AT(c, 0x1032eu);
    push32(c, 0x10333u); f_00010b22(c); X86_RET(c, 0x10333u);
    X86_TICK(c, 12);
    // 010333  mov byte ptr [edi + 0x17], 1
    X86_AT(c, 0x10333u);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0x17u)), 0x1u);
    // 010337  ret 
    X86_AT(c, 0x10337u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x10310u, "ran off the end of a function");
}
void f_00010315(X86Cpu& c) {
    X86_TICK(c, 11);
    // 010315  mov al, 0
    X86_AT(c, 0x10315u);
    s8(c, 0, 0x0u);
    // 010317  mov dx, 3
    X86_AT(c, 0x10317u);
    s16(c, 2, 0x3u);
    // 01031b  call 0x1054c
    X86_AT(c, 0x1031bu);
    push32(c, 0x10320u); f_0001054c(c); X86_RET(c, 0x10320u);
    X86_TICK(c, 9);
    // 010320  mov al, 0
    X86_AT(c, 0x10320u);
    s8(c, 0, 0x0u);
    // 010322  call 0x106f4
    X86_AT(c, 0x10322u);
    push32(c, 0x10327u); f_000106f4(c); X86_RET(c, 0x10327u);
    X86_TICK(c, 9);
    // 010327  mov dword ptr [edi + 0x5e], 0x80008
    X86_AT(c, 0x10327u);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] + 0x5Eu)), 0x80008u);
    // 01032e  call 0x10b22
    X86_AT(c, 0x1032eu);
    push32(c, 0x10333u); f_00010b22(c); X86_RET(c, 0x10333u);
    X86_TICK(c, 12);
    // 010333  mov byte ptr [edi + 0x17], 1
    X86_AT(c, 0x10333u);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0x17u)), 0x1u);
    // 010337  ret 
    X86_AT(c, 0x10337u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x10315u, "ran off the end of a function");
}
void f_00010317(X86Cpu& c) {
    X86_TICK(c, 9);
    // 010317  mov dx, 3
    X86_AT(c, 0x10317u);
    s16(c, 2, 0x3u);
    // 01031b  call 0x1054c
    X86_AT(c, 0x1031bu);
    push32(c, 0x10320u); f_0001054c(c); X86_RET(c, 0x10320u);
    X86_TICK(c, 9);
    // 010320  mov al, 0
    X86_AT(c, 0x10320u);
    s8(c, 0, 0x0u);
    // 010322  call 0x106f4
    X86_AT(c, 0x10322u);
    push32(c, 0x10327u); f_000106f4(c); X86_RET(c, 0x10327u);
    X86_TICK(c, 9);
    // 010327  mov dword ptr [edi + 0x5e], 0x80008
    X86_AT(c, 0x10327u);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] + 0x5Eu)), 0x80008u);
    // 01032e  call 0x10b22
    X86_AT(c, 0x1032eu);
    push32(c, 0x10333u); f_00010b22(c); X86_RET(c, 0x10333u);
    X86_TICK(c, 12);
    // 010333  mov byte ptr [edi + 0x17], 1
    X86_AT(c, 0x10333u);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0x17u)), 0x1u);
    // 010337  ret 
    X86_AT(c, 0x10337u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x10317u, "ran off the end of a function");
}
void f_0001031b(X86Cpu& c) {
    X86_TICK(c, 7);
    // 01031b  call 0x1054c
    X86_AT(c, 0x1031bu);
    push32(c, 0x10320u); f_0001054c(c); X86_RET(c, 0x10320u);
    X86_TICK(c, 9);
    // 010320  mov al, 0
    X86_AT(c, 0x10320u);
    s8(c, 0, 0x0u);
    // 010322  call 0x106f4
    X86_AT(c, 0x10322u);
    push32(c, 0x10327u); f_000106f4(c); X86_RET(c, 0x10327u);
    X86_TICK(c, 9);
    // 010327  mov dword ptr [edi + 0x5e], 0x80008
    X86_AT(c, 0x10327u);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] + 0x5Eu)), 0x80008u);
    // 01032e  call 0x10b22
    X86_AT(c, 0x1032eu);
    push32(c, 0x10333u); f_00010b22(c); X86_RET(c, 0x10333u);
    X86_TICK(c, 12);
    // 010333  mov byte ptr [edi + 0x17], 1
    X86_AT(c, 0x10333u);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0x17u)), 0x1u);
    // 010337  ret 
    X86_AT(c, 0x10337u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x1031bu, "ran off the end of a function");
}
void f_00010320(X86Cpu& c) {
    X86_TICK(c, 9);
    // 010320  mov al, 0
    X86_AT(c, 0x10320u);
    s8(c, 0, 0x0u);
    // 010322  call 0x106f4
    X86_AT(c, 0x10322u);
    push32(c, 0x10327u); f_000106f4(c); X86_RET(c, 0x10327u);
    X86_TICK(c, 9);
    // 010327  mov dword ptr [edi + 0x5e], 0x80008
    X86_AT(c, 0x10327u);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] + 0x5Eu)), 0x80008u);
    // 01032e  call 0x10b22
    X86_AT(c, 0x1032eu);
    push32(c, 0x10333u); f_00010b22(c); X86_RET(c, 0x10333u);
    X86_TICK(c, 12);
    // 010333  mov byte ptr [edi + 0x17], 1
    X86_AT(c, 0x10333u);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0x17u)), 0x1u);
    // 010337  ret 
    X86_AT(c, 0x10337u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x10320u, "ran off the end of a function");
}
void f_00010322(X86Cpu& c) {
    X86_TICK(c, 7);
    // 010322  call 0x106f4
    X86_AT(c, 0x10322u);
    push32(c, 0x10327u); f_000106f4(c); X86_RET(c, 0x10327u);
    X86_TICK(c, 9);
    // 010327  mov dword ptr [edi + 0x5e], 0x80008
    X86_AT(c, 0x10327u);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] + 0x5Eu)), 0x80008u);
    // 01032e  call 0x10b22
    X86_AT(c, 0x1032eu);
    push32(c, 0x10333u); f_00010b22(c); X86_RET(c, 0x10333u);
    X86_TICK(c, 12);
    // 010333  mov byte ptr [edi + 0x17], 1
    X86_AT(c, 0x10333u);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0x17u)), 0x1u);
    // 010337  ret 
    X86_AT(c, 0x10337u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x10322u, "ran off the end of a function");
}
void f_00010327(X86Cpu& c) {
    X86_TICK(c, 9);
    // 010327  mov dword ptr [edi + 0x5e], 0x80008
    X86_AT(c, 0x10327u);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] + 0x5Eu)), 0x80008u);
    // 01032e  call 0x10b22
    X86_AT(c, 0x1032eu);
    push32(c, 0x10333u); f_00010b22(c); X86_RET(c, 0x10333u);
    X86_TICK(c, 12);
    // 010333  mov byte ptr [edi + 0x17], 1
    X86_AT(c, 0x10333u);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0x17u)), 0x1u);
    // 010337  ret 
    X86_AT(c, 0x10337u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x10327u, "ran off the end of a function");
}
void f_0001032e(X86Cpu& c) {
    X86_TICK(c, 7);
    // 01032e  call 0x10b22
    X86_AT(c, 0x1032eu);
    push32(c, 0x10333u); f_00010b22(c); X86_RET(c, 0x10333u);
    X86_TICK(c, 12);
    // 010333  mov byte ptr [edi + 0x17], 1
    X86_AT(c, 0x10333u);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0x17u)), 0x1u);
    // 010337  ret 
    X86_AT(c, 0x10337u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x1032eu, "ran off the end of a function");
}
void f_00010333(X86Cpu& c) {
    X86_TICK(c, 12);
    // 010333  mov byte ptr [edi + 0x17], 1
    X86_AT(c, 0x10333u);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0x17u)), 0x1u);
    // 010337  ret 
    X86_AT(c, 0x10337u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x10333u, "ran off the end of a function");
}
void f_00010337(X86Cpu& c) {
    X86_TICK(c, 10);
    // 010337  ret 
    X86_AT(c, 0x10337u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x10337u, "ran off the end of a function");
}
void f_0001033d(X86Cpu& c) {
    goto L_1033d;
L_10338:
    X86_TICK(c, 12);
    // 010338  mov byte ptr [ebp + 0x21], 0xff
    X86_AT(c, 0x10338u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0x21u)), 0xFFu);
    // 01033c  ret 
    X86_AT(c, 0x1033cu);
    c.eip = pop32(c); return;
L_1033d:
    X86_TICK(c, 12);
    // 01033d  cmp byte ptr [edi + 0x51], 0
    X86_AT(c, 0x1033du);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x51u))), 0x0u, 0, 1);
    // 010341  je 0x10338
    X86_AT(c, 0x10341u);
    if (x86_cc(c, 4)) { X86_POLL(c, 0x10338u); goto L_10338; }
    X86_TICK(c, 9);
    // 010343  mov al, 0
    X86_AT(c, 0x10343u);
    s8(c, 0, 0x0u);
    // 010345  call 0x10353
    X86_AT(c, 0x10345u);
    push32(c, 0x1034au); f_00010353(c); X86_RET(c, 0x1034au);
    X86_TICK(c, 14);
    // 01034a  mov byte ptr [edi + 0x17], 0
    X86_AT(c, 0x1034au);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0x17u)), 0x0u);
    // 01034e  mov byte ptr [edi + 0x51], 0
    X86_AT(c, 0x1034eu);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0x51u)), 0x0u);
    // 010352  ret 
    X86_AT(c, 0x10352u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x1033du, "ran off the end of a function");
}
void f_00010341(X86Cpu& c) {
    goto L_10341;
L_10338:
    X86_TICK(c, 12);
    // 010338  mov byte ptr [ebp + 0x21], 0xff
    X86_AT(c, 0x10338u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0x21u)), 0xFFu);
    // 01033c  ret 
    X86_AT(c, 0x1033cu);
    c.eip = pop32(c); return;
L_10341:
    X86_TICK(c, 5);
    // 010341  je 0x10338
    X86_AT(c, 0x10341u);
    if (x86_cc(c, 4)) { X86_POLL(c, 0x10338u); goto L_10338; }
    X86_TICK(c, 9);
    // 010343  mov al, 0
    X86_AT(c, 0x10343u);
    s8(c, 0, 0x0u);
    // 010345  call 0x10353
    X86_AT(c, 0x10345u);
    push32(c, 0x1034au); f_00010353(c); X86_RET(c, 0x1034au);
    X86_TICK(c, 14);
    // 01034a  mov byte ptr [edi + 0x17], 0
    X86_AT(c, 0x1034au);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0x17u)), 0x0u);
    // 01034e  mov byte ptr [edi + 0x51], 0
    X86_AT(c, 0x1034eu);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0x51u)), 0x0u);
    // 010352  ret 
    X86_AT(c, 0x10352u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x10341u, "ran off the end of a function");
}
void f_00010343(X86Cpu& c) {
    X86_TICK(c, 9);
    // 010343  mov al, 0
    X86_AT(c, 0x10343u);
    s8(c, 0, 0x0u);
    // 010345  call 0x10353
    X86_AT(c, 0x10345u);
    push32(c, 0x1034au); f_00010353(c); X86_RET(c, 0x1034au);
    X86_TICK(c, 14);
    // 01034a  mov byte ptr [edi + 0x17], 0
    X86_AT(c, 0x1034au);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0x17u)), 0x0u);
    // 01034e  mov byte ptr [edi + 0x51], 0
    X86_AT(c, 0x1034eu);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0x51u)), 0x0u);
    // 010352  ret 
    X86_AT(c, 0x10352u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x10343u, "ran off the end of a function");
}
void f_00010345(X86Cpu& c) {
    X86_TICK(c, 7);
    // 010345  call 0x10353
    X86_AT(c, 0x10345u);
    push32(c, 0x1034au); f_00010353(c); X86_RET(c, 0x1034au);
    X86_TICK(c, 14);
    // 01034a  mov byte ptr [edi + 0x17], 0
    X86_AT(c, 0x1034au);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0x17u)), 0x0u);
    // 01034e  mov byte ptr [edi + 0x51], 0
    X86_AT(c, 0x1034eu);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0x51u)), 0x0u);
    // 010352  ret 
    X86_AT(c, 0x10352u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x10345u, "ran off the end of a function");
}
void f_0001034a(X86Cpu& c) {
    X86_TICK(c, 14);
    // 01034a  mov byte ptr [edi + 0x17], 0
    X86_AT(c, 0x1034au);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0x17u)), 0x0u);
    // 01034e  mov byte ptr [edi + 0x51], 0
    X86_AT(c, 0x1034eu);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0x51u)), 0x0u);
    // 010352  ret 
    X86_AT(c, 0x10352u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x1034au, "ran off the end of a function");
}
void f_0001034e(X86Cpu& c) {
    X86_TICK(c, 12);
    // 01034e  mov byte ptr [edi + 0x51], 0
    X86_AT(c, 0x1034eu);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0x51u)), 0x0u);
    // 010352  ret 
    X86_AT(c, 0x10352u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x1034eu, "ran off the end of a function");
}
void f_00010352(X86Cpu& c) {
    X86_TICK(c, 10);
    // 010352  ret 
    X86_AT(c, 0x10352u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x10352u, "ran off the end of a function");
}
void f_00010353(X86Cpu& c) {
    goto L_10353;
L_10338:
    X86_TICK(c, 12);
    // 010338  mov byte ptr [ebp + 0x21], 0xff
    X86_AT(c, 0x10338u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0x21u)), 0xFFu);
    // 01033c  ret 
    X86_AT(c, 0x1033cu);
    c.eip = pop32(c); return;
L_10353:
    X86_TICK(c, 12);
    // 010353  cmp byte ptr [edi + 0x51], 0
    X86_AT(c, 0x10353u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x51u))), 0x0u, 0, 1);
    // 010357  je 0x10378
    X86_AT(c, 0x10357u);
    if (x86_cc(c, 4)) { goto L_10378; }
    X86_TICK(c, 7);
    // 010359  cmp al, 2
    X86_AT(c, 0x10359u);
    (void)x86_sub(c, g8(c, 0), 0x2u, 0, 1);
    // 01035b  jae 0x10338
    X86_AT(c, 0x1035bu);
    if (x86_cc(c, 3)) { X86_POLL(c, 0x10338u); goto L_10338; }
    X86_TICK(c, 12);
    // 01035d  cmp byte ptr [edi + 0x4d], al
    X86_AT(c, 0x1035du);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x4Du))), g8(c, 0), 0, 1);
    // 010360  je 0x10378
    X86_AT(c, 0x10360u);
    if (x86_cc(c, 4)) { goto L_10378; }
    X86_TICK(c, 14);
    // 010362  mov byte ptr [edi + 0x17], 0
    X86_AT(c, 0x10362u);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0x17u)), 0x0u);
    // 010366  mov byte ptr [edi + 0x4d], al
    X86_AT(c, 0x10366u);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0x4Du)), g8(c, 0));
    // 010369  movzx eax, al
    X86_AT(c, 0x10369u);
    c.r[0] = g8(c, 0);
    // 01036c  call dword ptr cs:[eax*4 + 0x1037c]
    X86_AT(c, 0x1036cu);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0x1037Cu))); push32(c, 0x10374u);
      switch (t) {
      case 0x10b75u: f_00010b75(c); break;
      case 0x10bd0u: f_00010bd0(c); break;
      default: x86_call(c, t); }
      X86_RET(c, 0x10374u); }
    X86_TICK(c, 2);
    // 010374  mov byte ptr [edi + 0x17], 1
    X86_AT(c, 0x10374u);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0x17u)), 0x1u);
L_10378:
    X86_TICK(c, 10);
    // 010378  ret 
    X86_AT(c, 0x10378u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x10353u, "ran off the end of a function");
}
void f_00010357(X86Cpu& c) {
    goto L_10357;
L_10338:
    X86_TICK(c, 12);
    // 010338  mov byte ptr [ebp + 0x21], 0xff
    X86_AT(c, 0x10338u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0x21u)), 0xFFu);
    // 01033c  ret 
    X86_AT(c, 0x1033cu);
    c.eip = pop32(c); return;
L_10357:
    X86_TICK(c, 5);
    // 010357  je 0x10378
    X86_AT(c, 0x10357u);
    if (x86_cc(c, 4)) { goto L_10378; }
    X86_TICK(c, 7);
    // 010359  cmp al, 2
    X86_AT(c, 0x10359u);
    (void)x86_sub(c, g8(c, 0), 0x2u, 0, 1);
    // 01035b  jae 0x10338
    X86_AT(c, 0x1035bu);
    if (x86_cc(c, 3)) { X86_POLL(c, 0x10338u); goto L_10338; }
    X86_TICK(c, 12);
    // 01035d  cmp byte ptr [edi + 0x4d], al
    X86_AT(c, 0x1035du);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x4Du))), g8(c, 0), 0, 1);
    // 010360  je 0x10378
    X86_AT(c, 0x10360u);
    if (x86_cc(c, 4)) { goto L_10378; }
    X86_TICK(c, 14);
    // 010362  mov byte ptr [edi + 0x17], 0
    X86_AT(c, 0x10362u);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0x17u)), 0x0u);
    // 010366  mov byte ptr [edi + 0x4d], al
    X86_AT(c, 0x10366u);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0x4Du)), g8(c, 0));
    // 010369  movzx eax, al
    X86_AT(c, 0x10369u);
    c.r[0] = g8(c, 0);
    // 01036c  call dword ptr cs:[eax*4 + 0x1037c]
    X86_AT(c, 0x1036cu);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0x1037Cu))); push32(c, 0x10374u);
      switch (t) {
      case 0x10b75u: f_00010b75(c); break;
      case 0x10bd0u: f_00010bd0(c); break;
      default: x86_call(c, t); }
      X86_RET(c, 0x10374u); }
    X86_TICK(c, 2);
    // 010374  mov byte ptr [edi + 0x17], 1
    X86_AT(c, 0x10374u);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0x17u)), 0x1u);
L_10378:
    X86_TICK(c, 10);
    // 010378  ret 
    X86_AT(c, 0x10378u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x10357u, "ran off the end of a function");
}
void f_00010359(X86Cpu& c) {
    goto L_10359;
L_10338:
    X86_TICK(c, 12);
    // 010338  mov byte ptr [ebp + 0x21], 0xff
    X86_AT(c, 0x10338u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0x21u)), 0xFFu);
    // 01033c  ret 
    X86_AT(c, 0x1033cu);
    c.eip = pop32(c); return;
L_10359:
    X86_TICK(c, 7);
    // 010359  cmp al, 2
    X86_AT(c, 0x10359u);
    (void)x86_sub(c, g8(c, 0), 0x2u, 0, 1);
    // 01035b  jae 0x10338
    X86_AT(c, 0x1035bu);
    if (x86_cc(c, 3)) { X86_POLL(c, 0x10338u); goto L_10338; }
    X86_TICK(c, 12);
    // 01035d  cmp byte ptr [edi + 0x4d], al
    X86_AT(c, 0x1035du);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x4Du))), g8(c, 0), 0, 1);
    // 010360  je 0x10378
    X86_AT(c, 0x10360u);
    if (x86_cc(c, 4)) { goto L_10378; }
    X86_TICK(c, 14);
    // 010362  mov byte ptr [edi + 0x17], 0
    X86_AT(c, 0x10362u);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0x17u)), 0x0u);
    // 010366  mov byte ptr [edi + 0x4d], al
    X86_AT(c, 0x10366u);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0x4Du)), g8(c, 0));
    // 010369  movzx eax, al
    X86_AT(c, 0x10369u);
    c.r[0] = g8(c, 0);
    // 01036c  call dword ptr cs:[eax*4 + 0x1037c]
    X86_AT(c, 0x1036cu);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0x1037Cu))); push32(c, 0x10374u);
      switch (t) {
      case 0x10b75u: f_00010b75(c); break;
      case 0x10bd0u: f_00010bd0(c); break;
      default: x86_call(c, t); }
      X86_RET(c, 0x10374u); }
    X86_TICK(c, 2);
    // 010374  mov byte ptr [edi + 0x17], 1
    X86_AT(c, 0x10374u);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0x17u)), 0x1u);
L_10378:
    X86_TICK(c, 10);
    // 010378  ret 
    X86_AT(c, 0x10378u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x10359u, "ran off the end of a function");
}
void f_0001035b(X86Cpu& c) {
    goto L_1035b;
L_10338:
    X86_TICK(c, 12);
    // 010338  mov byte ptr [ebp + 0x21], 0xff
    X86_AT(c, 0x10338u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0x21u)), 0xFFu);
    // 01033c  ret 
    X86_AT(c, 0x1033cu);
    c.eip = pop32(c); return;
L_1035b:
    X86_TICK(c, 5);
    // 01035b  jae 0x10338
    X86_AT(c, 0x1035bu);
    if (x86_cc(c, 3)) { X86_POLL(c, 0x10338u); goto L_10338; }
    X86_TICK(c, 12);
    // 01035d  cmp byte ptr [edi + 0x4d], al
    X86_AT(c, 0x1035du);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x4Du))), g8(c, 0), 0, 1);
    // 010360  je 0x10378
    X86_AT(c, 0x10360u);
    if (x86_cc(c, 4)) { goto L_10378; }
    X86_TICK(c, 14);
    // 010362  mov byte ptr [edi + 0x17], 0
    X86_AT(c, 0x10362u);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0x17u)), 0x0u);
    // 010366  mov byte ptr [edi + 0x4d], al
    X86_AT(c, 0x10366u);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0x4Du)), g8(c, 0));
    // 010369  movzx eax, al
    X86_AT(c, 0x10369u);
    c.r[0] = g8(c, 0);
    // 01036c  call dword ptr cs:[eax*4 + 0x1037c]
    X86_AT(c, 0x1036cu);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0x1037Cu))); push32(c, 0x10374u);
      switch (t) {
      case 0x10b75u: f_00010b75(c); break;
      case 0x10bd0u: f_00010bd0(c); break;
      default: x86_call(c, t); }
      X86_RET(c, 0x10374u); }
    X86_TICK(c, 2);
    // 010374  mov byte ptr [edi + 0x17], 1
    X86_AT(c, 0x10374u);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0x17u)), 0x1u);
L_10378:
    X86_TICK(c, 10);
    // 010378  ret 
    X86_AT(c, 0x10378u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x1035bu, "ran off the end of a function");
}
void f_0001035d(X86Cpu& c) {
    X86_TICK(c, 12);
    // 01035d  cmp byte ptr [edi + 0x4d], al
    X86_AT(c, 0x1035du);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x4Du))), g8(c, 0), 0, 1);
    // 010360  je 0x10378
    X86_AT(c, 0x10360u);
    if (x86_cc(c, 4)) { goto L_10378; }
    X86_TICK(c, 14);
    // 010362  mov byte ptr [edi + 0x17], 0
    X86_AT(c, 0x10362u);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0x17u)), 0x0u);
    // 010366  mov byte ptr [edi + 0x4d], al
    X86_AT(c, 0x10366u);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0x4Du)), g8(c, 0));
    // 010369  movzx eax, al
    X86_AT(c, 0x10369u);
    c.r[0] = g8(c, 0);
    // 01036c  call dword ptr cs:[eax*4 + 0x1037c]
    X86_AT(c, 0x1036cu);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0x1037Cu))); push32(c, 0x10374u);
      switch (t) {
      case 0x10b75u: f_00010b75(c); break;
      case 0x10bd0u: f_00010bd0(c); break;
      default: x86_call(c, t); }
      X86_RET(c, 0x10374u); }
    X86_TICK(c, 2);
    // 010374  mov byte ptr [edi + 0x17], 1
    X86_AT(c, 0x10374u);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0x17u)), 0x1u);
L_10378:
    X86_TICK(c, 10);
    // 010378  ret 
    X86_AT(c, 0x10378u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x1035du, "ran off the end of a function");
}
void f_00010360(X86Cpu& c) {
    X86_TICK(c, 5);
    // 010360  je 0x10378
    X86_AT(c, 0x10360u);
    if (x86_cc(c, 4)) { goto L_10378; }
    X86_TICK(c, 14);
    // 010362  mov byte ptr [edi + 0x17], 0
    X86_AT(c, 0x10362u);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0x17u)), 0x0u);
    // 010366  mov byte ptr [edi + 0x4d], al
    X86_AT(c, 0x10366u);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0x4Du)), g8(c, 0));
    // 010369  movzx eax, al
    X86_AT(c, 0x10369u);
    c.r[0] = g8(c, 0);
    // 01036c  call dword ptr cs:[eax*4 + 0x1037c]
    X86_AT(c, 0x1036cu);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0x1037Cu))); push32(c, 0x10374u);
      switch (t) {
      case 0x10b75u: f_00010b75(c); break;
      case 0x10bd0u: f_00010bd0(c); break;
      default: x86_call(c, t); }
      X86_RET(c, 0x10374u); }
    X86_TICK(c, 2);
    // 010374  mov byte ptr [edi + 0x17], 1
    X86_AT(c, 0x10374u);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0x17u)), 0x1u);
L_10378:
    X86_TICK(c, 10);
    // 010378  ret 
    X86_AT(c, 0x10378u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x10360u, "ran off the end of a function");
}
void f_00010362(X86Cpu& c) {
    X86_TICK(c, 14);
    // 010362  mov byte ptr [edi + 0x17], 0
    X86_AT(c, 0x10362u);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0x17u)), 0x0u);
    // 010366  mov byte ptr [edi + 0x4d], al
    X86_AT(c, 0x10366u);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0x4Du)), g8(c, 0));
    // 010369  movzx eax, al
    X86_AT(c, 0x10369u);
    c.r[0] = g8(c, 0);
    // 01036c  call dword ptr cs:[eax*4 + 0x1037c]
    X86_AT(c, 0x1036cu);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0x1037Cu))); push32(c, 0x10374u);
      switch (t) {
      case 0x10b75u: f_00010b75(c); break;
      case 0x10bd0u: f_00010bd0(c); break;
      default: x86_call(c, t); }
      X86_RET(c, 0x10374u); }
    X86_TICK(c, 12);
    // 010374  mov byte ptr [edi + 0x17], 1
    X86_AT(c, 0x10374u);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0x17u)), 0x1u);
    // 010378  ret 
    X86_AT(c, 0x10378u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x10362u, "ran off the end of a function");
}
void f_00010366(X86Cpu& c) {
    X86_TICK(c, 12);
    // 010366  mov byte ptr [edi + 0x4d], al
    X86_AT(c, 0x10366u);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0x4Du)), g8(c, 0));
    // 010369  movzx eax, al
    X86_AT(c, 0x10369u);
    c.r[0] = g8(c, 0);
    // 01036c  call dword ptr cs:[eax*4 + 0x1037c]
    X86_AT(c, 0x1036cu);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0x1037Cu))); push32(c, 0x10374u);
      switch (t) {
      case 0x10b75u: f_00010b75(c); break;
      case 0x10bd0u: f_00010bd0(c); break;
      default: x86_call(c, t); }
      X86_RET(c, 0x10374u); }
    X86_TICK(c, 12);
    // 010374  mov byte ptr [edi + 0x17], 1
    X86_AT(c, 0x10374u);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0x17u)), 0x1u);
    // 010378  ret 
    X86_AT(c, 0x10378u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x10366u, "ran off the end of a function");
}
void f_00010369(X86Cpu& c) {
    X86_TICK(c, 10);
    // 010369  movzx eax, al
    X86_AT(c, 0x10369u);
    c.r[0] = g8(c, 0);
    // 01036c  call dword ptr cs:[eax*4 + 0x1037c]
    X86_AT(c, 0x1036cu);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0x1037Cu))); push32(c, 0x10374u);
      switch (t) {
      case 0x10b75u: f_00010b75(c); break;
      case 0x10bd0u: f_00010bd0(c); break;
      default: x86_call(c, t); }
      X86_RET(c, 0x10374u); }
    X86_TICK(c, 12);
    // 010374  mov byte ptr [edi + 0x17], 1
    X86_AT(c, 0x10374u);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0x17u)), 0x1u);
    // 010378  ret 
    X86_AT(c, 0x10378u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x10369u, "ran off the end of a function");
}
void f_0001036c(X86Cpu& c) {
    X86_TICK(c, 7);
    // 01036c  call dword ptr cs:[eax*4 + 0x1037c]
    X86_AT(c, 0x1036cu);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0x1037Cu))); push32(c, 0x10374u);
      switch (t) {
      case 0x10b75u: f_00010b75(c); break;
      case 0x10bd0u: f_00010bd0(c); break;
      default: x86_call(c, t); }
      X86_RET(c, 0x10374u); }
    X86_TICK(c, 12);
    // 010374  mov byte ptr [edi + 0x17], 1
    X86_AT(c, 0x10374u);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0x17u)), 0x1u);
    // 010378  ret 
    X86_AT(c, 0x10378u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x1036cu, "ran off the end of a function");
}
void f_00010374(X86Cpu& c) {
    X86_TICK(c, 12);
    // 010374  mov byte ptr [edi + 0x17], 1
    X86_AT(c, 0x10374u);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0x17u)), 0x1u);
    // 010378  ret 
    X86_AT(c, 0x10378u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x10374u, "ran off the end of a function");
}
void f_00010378(X86Cpu& c) {
    X86_TICK(c, 10);
    // 010378  ret 
    X86_AT(c, 0x10378u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x10378u, "ran off the end of a function");
}
void f_00010384(X86Cpu& c) {
    X86_TICK(c, 27);
    // 010384  mov ch, byte ptr [edi + 0x44]
    X86_AT(c, 0x10384u);
    s8(c, 5, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x44u))));
    // 010387  mov edx, dword ptr [edi + 0x52]
    X86_AT(c, 0x10387u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x52u)));
    // 01038a  shld ebx, edx, 0x10
    X86_AT(c, 0x1038au);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_double(c, true, v, c.r[2], 0x10u, 4, w); if (w) c.r[3] = r; }
    // 01038e  mov byte ptr [ebp + 0x1d], ch
    X86_AT(c, 0x1038eu);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0x1Du)), g8(c, 5));
    // 010391  mov word ptr [ebp + 0x18], dx
    X86_AT(c, 0x10391u);
    wr16((c.sbase[2] + (uint32_t)(c.r[5] + 0x18u)), (c.r[2] & 0xFFFFu));
    // 010395  mov word ptr [ebp + 0x14], bx
    X86_AT(c, 0x10395u);
    wr16((c.sbase[2] + (uint32_t)(c.r[5] + 0x14u)), (c.r[3] & 0xFFFFu));
    // 010399  ret 
    X86_AT(c, 0x10399u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x10384u, "ran off the end of a function");
}
void f_00010387(X86Cpu& c) {
    X86_TICK(c, 23);
    // 010387  mov edx, dword ptr [edi + 0x52]
    X86_AT(c, 0x10387u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x52u)));
    // 01038a  shld ebx, edx, 0x10
    X86_AT(c, 0x1038au);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_double(c, true, v, c.r[2], 0x10u, 4, w); if (w) c.r[3] = r; }
    // 01038e  mov byte ptr [ebp + 0x1d], ch
    X86_AT(c, 0x1038eu);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0x1Du)), g8(c, 5));
    // 010391  mov word ptr [ebp + 0x18], dx
    X86_AT(c, 0x10391u);
    wr16((c.sbase[2] + (uint32_t)(c.r[5] + 0x18u)), (c.r[2] & 0xFFFFu));
    // 010395  mov word ptr [ebp + 0x14], bx
    X86_AT(c, 0x10395u);
    wr16((c.sbase[2] + (uint32_t)(c.r[5] + 0x14u)), (c.r[3] & 0xFFFFu));
    // 010399  ret 
    X86_AT(c, 0x10399u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x10387u, "ran off the end of a function");
}
void f_0001038a(X86Cpu& c) {
    X86_TICK(c, 19);
    // 01038a  shld ebx, edx, 0x10
    X86_AT(c, 0x1038au);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_double(c, true, v, c.r[2], 0x10u, 4, w); if (w) c.r[3] = r; }
    // 01038e  mov byte ptr [ebp + 0x1d], ch
    X86_AT(c, 0x1038eu);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0x1Du)), g8(c, 5));
    // 010391  mov word ptr [ebp + 0x18], dx
    X86_AT(c, 0x10391u);
    wr16((c.sbase[2] + (uint32_t)(c.r[5] + 0x18u)), (c.r[2] & 0xFFFFu));
    // 010395  mov word ptr [ebp + 0x14], bx
    X86_AT(c, 0x10395u);
    wr16((c.sbase[2] + (uint32_t)(c.r[5] + 0x14u)), (c.r[3] & 0xFFFFu));
    // 010399  ret 
    X86_AT(c, 0x10399u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x1038au, "ran off the end of a function");
}
void f_0001038e(X86Cpu& c) {
    X86_TICK(c, 16);
    // 01038e  mov byte ptr [ebp + 0x1d], ch
    X86_AT(c, 0x1038eu);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0x1Du)), g8(c, 5));
    // 010391  mov word ptr [ebp + 0x18], dx
    X86_AT(c, 0x10391u);
    wr16((c.sbase[2] + (uint32_t)(c.r[5] + 0x18u)), (c.r[2] & 0xFFFFu));
    // 010395  mov word ptr [ebp + 0x14], bx
    X86_AT(c, 0x10395u);
    wr16((c.sbase[2] + (uint32_t)(c.r[5] + 0x14u)), (c.r[3] & 0xFFFFu));
    // 010399  ret 
    X86_AT(c, 0x10399u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x1038eu, "ran off the end of a function");
}
void f_00010391(X86Cpu& c) {
    X86_TICK(c, 14);
    // 010391  mov word ptr [ebp + 0x18], dx
    X86_AT(c, 0x10391u);
    wr16((c.sbase[2] + (uint32_t)(c.r[5] + 0x18u)), (c.r[2] & 0xFFFFu));
    // 010395  mov word ptr [ebp + 0x14], bx
    X86_AT(c, 0x10395u);
    wr16((c.sbase[2] + (uint32_t)(c.r[5] + 0x14u)), (c.r[3] & 0xFFFFu));
    // 010399  ret 
    X86_AT(c, 0x10399u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x10391u, "ran off the end of a function");
}
void f_00010395(X86Cpu& c) {
    X86_TICK(c, 12);
    // 010395  mov word ptr [ebp + 0x14], bx
    X86_AT(c, 0x10395u);
    wr16((c.sbase[2] + (uint32_t)(c.r[5] + 0x14u)), (c.r[3] & 0xFFFFu));
    // 010399  ret 
    X86_AT(c, 0x10399u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x10395u, "ran off the end of a function");
}
void f_00010399(X86Cpu& c) {
    X86_TICK(c, 10);
    // 010399  ret 
    X86_AT(c, 0x10399u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x10399u, "ran off the end of a function");
}
void f_0001039a(X86Cpu& c) {
    X86_TICK(c, 22);
    // 01039a  pushfd 
    X86_AT(c, 0x1039au);
    push32(c, c.fl & 0x00FCFFFFu);
    // 01039b  cli 
    X86_AT(c, 0x1039bu);
    c.fl &= ~X86_IF;
    // 01039c  or word ptr [edi + 0x30], 1
    X86_AT(c, 0x1039cu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x30u)); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v | 0x1u, 2)); }
    // 0103a1  call 0x1082b
    X86_AT(c, 0x103a1u);
    push32(c, 0x103a6u); f_0001082b(c); X86_RET(c, 0x103a6u);
    X86_TICK(c, 13);
    // 0103a6  sub eax, eax
    X86_AT(c, 0x103a6u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0103a8  mov dword ptr [edi + 0x13], eax
    X86_AT(c, 0x103a8u);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] + 0x13u)), c.r[0]);
    // 0103ab  mov dword ptr [edi + 0x45], eax
    X86_AT(c, 0x103abu);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] + 0x45u)), c.r[0]);
    // 0103ae  call 0x10870
    X86_AT(c, 0x103aeu);
    push32(c, 0x103b3u); f_00010870(c); X86_RET(c, 0x103b3u);
    X86_TICK(c, 23);
    // 0103b3  and word ptr [edi + 0x30], 0xfffe
    X86_AT(c, 0x103b3u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x30u)); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v & 0xFFFEu, 2)); }
    // 0103b9  popfd 
    X86_AT(c, 0x103b9u);
    x86_popfd(c, 4);
    // 0103ba  ret 
    X86_AT(c, 0x103bau);
    c.eip = pop32(c); return;
    x86_fault(c, 0x1039au, "ran off the end of a function");
}
void f_0001039b(X86Cpu& c) {
    X86_TICK(c, 16);
    // 01039b  cli 
    X86_AT(c, 0x1039bu);
    c.fl &= ~X86_IF;
    // 01039c  or word ptr [edi + 0x30], 1
    X86_AT(c, 0x1039cu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x30u)); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v | 0x1u, 2)); }
    // 0103a1  call 0x1082b
    X86_AT(c, 0x103a1u);
    push32(c, 0x103a6u); f_0001082b(c); X86_RET(c, 0x103a6u);
    X86_TICK(c, 13);
    // 0103a6  sub eax, eax
    X86_AT(c, 0x103a6u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0103a8  mov dword ptr [edi + 0x13], eax
    X86_AT(c, 0x103a8u);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] + 0x13u)), c.r[0]);
    // 0103ab  mov dword ptr [edi + 0x45], eax
    X86_AT(c, 0x103abu);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] + 0x45u)), c.r[0]);
    // 0103ae  call 0x10870
    X86_AT(c, 0x103aeu);
    push32(c, 0x103b3u); f_00010870(c); X86_RET(c, 0x103b3u);
    X86_TICK(c, 23);
    // 0103b3  and word ptr [edi + 0x30], 0xfffe
    X86_AT(c, 0x103b3u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x30u)); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v & 0xFFFEu, 2)); }
    // 0103b9  popfd 
    X86_AT(c, 0x103b9u);
    x86_popfd(c, 4);
    // 0103ba  ret 
    X86_AT(c, 0x103bau);
    c.eip = pop32(c); return;
    x86_fault(c, 0x1039bu, "ran off the end of a function");
}
void f_0001039c(X86Cpu& c) {
    X86_TICK(c, 14);
    // 01039c  or word ptr [edi + 0x30], 1
    X86_AT(c, 0x1039cu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x30u)); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v | 0x1u, 2)); }
    // 0103a1  call 0x1082b
    X86_AT(c, 0x103a1u);
    push32(c, 0x103a6u); f_0001082b(c); X86_RET(c, 0x103a6u);
    X86_TICK(c, 13);
    // 0103a6  sub eax, eax
    X86_AT(c, 0x103a6u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0103a8  mov dword ptr [edi + 0x13], eax
    X86_AT(c, 0x103a8u);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] + 0x13u)), c.r[0]);
    // 0103ab  mov dword ptr [edi + 0x45], eax
    X86_AT(c, 0x103abu);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] + 0x45u)), c.r[0]);
    // 0103ae  call 0x10870
    X86_AT(c, 0x103aeu);
    push32(c, 0x103b3u); f_00010870(c); X86_RET(c, 0x103b3u);
    X86_TICK(c, 23);
    // 0103b3  and word ptr [edi + 0x30], 0xfffe
    X86_AT(c, 0x103b3u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x30u)); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v & 0xFFFEu, 2)); }
    // 0103b9  popfd 
    X86_AT(c, 0x103b9u);
    x86_popfd(c, 4);
    // 0103ba  ret 
    X86_AT(c, 0x103bau);
    c.eip = pop32(c); return;
    x86_fault(c, 0x1039cu, "ran off the end of a function");
}
void f_000103a1(X86Cpu& c) {
    X86_TICK(c, 7);
    // 0103a1  call 0x1082b
    X86_AT(c, 0x103a1u);
    push32(c, 0x103a6u); f_0001082b(c); X86_RET(c, 0x103a6u);
    X86_TICK(c, 13);
    // 0103a6  sub eax, eax
    X86_AT(c, 0x103a6u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0103a8  mov dword ptr [edi + 0x13], eax
    X86_AT(c, 0x103a8u);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] + 0x13u)), c.r[0]);
    // 0103ab  mov dword ptr [edi + 0x45], eax
    X86_AT(c, 0x103abu);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] + 0x45u)), c.r[0]);
    // 0103ae  call 0x10870
    X86_AT(c, 0x103aeu);
    push32(c, 0x103b3u); f_00010870(c); X86_RET(c, 0x103b3u);
    X86_TICK(c, 23);
    // 0103b3  and word ptr [edi + 0x30], 0xfffe
    X86_AT(c, 0x103b3u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x30u)); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v & 0xFFFEu, 2)); }
    // 0103b9  popfd 
    X86_AT(c, 0x103b9u);
    x86_popfd(c, 4);
    // 0103ba  ret 
    X86_AT(c, 0x103bau);
    c.eip = pop32(c); return;
    x86_fault(c, 0x103a1u, "ran off the end of a function");
}
void f_000103a6(X86Cpu& c) {
    X86_TICK(c, 13);
    // 0103a6  sub eax, eax
    X86_AT(c, 0x103a6u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0103a8  mov dword ptr [edi + 0x13], eax
    X86_AT(c, 0x103a8u);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] + 0x13u)), c.r[0]);
    // 0103ab  mov dword ptr [edi + 0x45], eax
    X86_AT(c, 0x103abu);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] + 0x45u)), c.r[0]);
    // 0103ae  call 0x10870
    X86_AT(c, 0x103aeu);
    push32(c, 0x103b3u); f_00010870(c); X86_RET(c, 0x103b3u);
    X86_TICK(c, 23);
    // 0103b3  and word ptr [edi + 0x30], 0xfffe
    X86_AT(c, 0x103b3u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x30u)); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v & 0xFFFEu, 2)); }
    // 0103b9  popfd 
    X86_AT(c, 0x103b9u);
    x86_popfd(c, 4);
    // 0103ba  ret 
    X86_AT(c, 0x103bau);
    c.eip = pop32(c); return;
    x86_fault(c, 0x103a6u, "ran off the end of a function");
}
void f_000103a8(X86Cpu& c) {
    X86_TICK(c, 11);
    // 0103a8  mov dword ptr [edi + 0x13], eax
    X86_AT(c, 0x103a8u);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] + 0x13u)), c.r[0]);
    // 0103ab  mov dword ptr [edi + 0x45], eax
    X86_AT(c, 0x103abu);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] + 0x45u)), c.r[0]);
    // 0103ae  call 0x10870
    X86_AT(c, 0x103aeu);
    push32(c, 0x103b3u); f_00010870(c); X86_RET(c, 0x103b3u);
    X86_TICK(c, 23);
    // 0103b3  and word ptr [edi + 0x30], 0xfffe
    X86_AT(c, 0x103b3u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x30u)); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v & 0xFFFEu, 2)); }
    // 0103b9  popfd 
    X86_AT(c, 0x103b9u);
    x86_popfd(c, 4);
    // 0103ba  ret 
    X86_AT(c, 0x103bau);
    c.eip = pop32(c); return;
    x86_fault(c, 0x103a8u, "ran off the end of a function");
}
void f_000103ab(X86Cpu& c) {
    X86_TICK(c, 9);
    // 0103ab  mov dword ptr [edi + 0x45], eax
    X86_AT(c, 0x103abu);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] + 0x45u)), c.r[0]);
    // 0103ae  call 0x10870
    X86_AT(c, 0x103aeu);
    push32(c, 0x103b3u); f_00010870(c); X86_RET(c, 0x103b3u);
    X86_TICK(c, 23);
    // 0103b3  and word ptr [edi + 0x30], 0xfffe
    X86_AT(c, 0x103b3u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x30u)); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v & 0xFFFEu, 2)); }
    // 0103b9  popfd 
    X86_AT(c, 0x103b9u);
    x86_popfd(c, 4);
    // 0103ba  ret 
    X86_AT(c, 0x103bau);
    c.eip = pop32(c); return;
    x86_fault(c, 0x103abu, "ran off the end of a function");
}
void f_000103ae(X86Cpu& c) {
    X86_TICK(c, 7);
    // 0103ae  call 0x10870
    X86_AT(c, 0x103aeu);
    push32(c, 0x103b3u); f_00010870(c); X86_RET(c, 0x103b3u);
    X86_TICK(c, 23);
    // 0103b3  and word ptr [edi + 0x30], 0xfffe
    X86_AT(c, 0x103b3u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x30u)); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v & 0xFFFEu, 2)); }
    // 0103b9  popfd 
    X86_AT(c, 0x103b9u);
    x86_popfd(c, 4);
    // 0103ba  ret 
    X86_AT(c, 0x103bau);
    c.eip = pop32(c); return;
    x86_fault(c, 0x103aeu, "ran off the end of a function");
}
void f_000103b3(X86Cpu& c) {
    X86_TICK(c, 23);
    // 0103b3  and word ptr [edi + 0x30], 0xfffe
    X86_AT(c, 0x103b3u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x30u)); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v & 0xFFFEu, 2)); }
    // 0103b9  popfd 
    X86_AT(c, 0x103b9u);
    x86_popfd(c, 4);
    // 0103ba  ret 
    X86_AT(c, 0x103bau);
    c.eip = pop32(c); return;
    x86_fault(c, 0x103b3u, "ran off the end of a function");
}
void f_000103b9(X86Cpu& c) {
    X86_TICK(c, 16);
    // 0103b9  popfd 
    X86_AT(c, 0x103b9u);
    x86_popfd(c, 4);
    // 0103ba  ret 
    X86_AT(c, 0x103bau);
    c.eip = pop32(c); return;
    x86_fault(c, 0x103b9u, "ran off the end of a function");
}
void f_000103ba(X86Cpu& c) {
    X86_TICK(c, 10);
    // 0103ba  ret 
    X86_AT(c, 0x103bau);
    c.eip = pop32(c); return;
    x86_fault(c, 0x103bau, "ran off the end of a function");
}
void f_000103bb(X86Cpu& c) {
    X86_TICK(c, 9);
    // 0103bb  sub ecx, ecx
    X86_AT(c, 0x103bbu);
    { uint32_t v = c.r[1]; c.r[1] = x86_sub(c, v, c.r[1], 0, 4); }
    // 0103bd  call 0x103ce
    X86_AT(c, 0x103bdu);
    push32(c, 0x103c2u); f_000103ce(c); X86_RET(c, 0x103c2u);
    X86_TICK(c, 10);
    // 0103c2  ret 
    X86_AT(c, 0x103c2u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x103bbu, "ran off the end of a function");
}
void f_000103c3(X86Cpu& c) {
    X86_TICK(c, 9);
    // 0103c3  mov ecx, 6
    X86_AT(c, 0x103c3u);
    c.r[1] = 0x6u;
    // 0103c8  call 0x103ce
    X86_AT(c, 0x103c8u);
    push32(c, 0x103cdu); f_000103ce(c); X86_RET(c, 0x103cdu);
    X86_TICK(c, 10);
    // 0103cd  ret 
    X86_AT(c, 0x103cdu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x103c3u, "ran off the end of a function");
}
void f_000103ce(X86Cpu& c) {
    goto L_103ce;
L_10338:
    X86_TICK(c, 12);
    // 010338  mov byte ptr [ebp + 0x21], 0xff
    X86_AT(c, 0x10338u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0x21u)), 0xFFu);
    // 01033c  ret 
    X86_AT(c, 0x1033cu);
    c.eip = pop32(c); return;
L_103ce:
    X86_TICK(c, 7);
    // 0103ce  cmp al, 1
    X86_AT(c, 0x103ceu);
    (void)x86_sub(c, g8(c, 0), 0x1u, 0, 1);
    // 0103d0  ja 0x10338
    X86_AT(c, 0x103d0u);
    if (x86_cc(c, 7)) { X86_POLL(c, 0x10338u); goto L_10338; }
    X86_TICK(c, 7);
    // 0103d6  call 0x10861
    X86_AT(c, 0x103d6u);
    push32(c, 0x103dbu); f_00010861(c); X86_RET(c, 0x103dbu);
    X86_TICK(c, 37);
    // 0103db  add esi, ecx
    X86_AT(c, 0x103dbu);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, c.r[1], 0, 4); }
    // 0103dd  mov ch, byte ptr [edi + 0x44]
    X86_AT(c, 0x103ddu);
    s8(c, 5, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x44u))));
    // 0103e0  mov cl, byte ptr [edi + esi*1]
    X86_AT(c, 0x103e0u);
    s8(c, 1, rd8((c.sbase[3] + (uint32_t)(c.r[7] + c.r[6]))));
    // 0103e3  mov edx, dword ptr [edi + esi*1 + 2]
    X86_AT(c, 0x103e3u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + c.r[6] + 0x2u)));
    // 0103e7  shld ebx, edx, 0x10
    X86_AT(c, 0x103e7u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_double(c, true, v, c.r[2], 0x10u, 4, w); if (w) c.r[3] = r; }
    // 0103eb  mov word ptr [edi + esi*1], 0
    X86_AT(c, 0x103ebu);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + c.r[6])), 0x0u);
    // 0103f1  mov byte ptr [ebp + 0x1d], ch
    X86_AT(c, 0x103f1u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0x1Du)), g8(c, 5));
    // 0103f4  mov byte ptr [ebp + 0x1c], cl
    X86_AT(c, 0x103f4u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0x1Cu)), g8(c, 1));
    // 0103f7  mov word ptr [ebp + 0x18], dx
    X86_AT(c, 0x103f7u);
    wr16((c.sbase[2] + (uint32_t)(c.r[5] + 0x18u)), (c.r[2] & 0xFFFFu));
    // 0103fb  mov word ptr [ebp + 0x14], bx
    X86_AT(c, 0x103fbu);
    wr16((c.sbase[2] + (uint32_t)(c.r[5] + 0x14u)), (c.r[3] & 0xFFFFu));
    // 0103ff  ret 
    X86_AT(c, 0x103ffu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x103ceu, "ran off the end of a function");
}
void f_00010400(X86Cpu& c) {
    X86_TICK(c, 9);
    // 010400  sub esi, esi
    X86_AT(c, 0x10400u);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[6], 0, 4); }
    // 010402  call 0x10413
    X86_AT(c, 0x10402u);
    push32(c, 0x10407u); f_00010413(c); X86_RET(c, 0x10407u);
    X86_TICK(c, 10);
    // 010407  ret 
    X86_AT(c, 0x10407u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x10400u, "ran off the end of a function");
}
void f_00010402(X86Cpu& c) {
    X86_TICK(c, 7);
    // 010402  call 0x10413
    X86_AT(c, 0x10402u);
    push32(c, 0x10407u); f_00010413(c); X86_RET(c, 0x10407u);
    X86_TICK(c, 10);
    // 010407  ret 
    X86_AT(c, 0x10407u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x10402u, "ran off the end of a function");
}
void f_00010407(X86Cpu& c) {
    X86_TICK(c, 10);
    // 010407  ret 
    X86_AT(c, 0x10407u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x10407u, "ran off the end of a function");
}
void f_00010408(X86Cpu& c) {
    X86_TICK(c, 9);
    // 010408  mov esi, 2
    X86_AT(c, 0x10408u);
    c.r[6] = 0x2u;
    // 01040d  call 0x10413
    X86_AT(c, 0x1040du);
    push32(c, 0x10412u); f_00010413(c); X86_RET(c, 0x10412u);
    X86_TICK(c, 10);
    // 010412  ret 
    X86_AT(c, 0x10412u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x10408u, "ran off the end of a function");
}
void f_0001040d(X86Cpu& c) {
    X86_TICK(c, 7);
    // 01040d  call 0x10413
    X86_AT(c, 0x1040du);
    push32(c, 0x10412u); f_00010413(c); X86_RET(c, 0x10412u);
    X86_TICK(c, 10);
    // 010412  ret 
    X86_AT(c, 0x10412u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x1040du, "ran off the end of a function");
}
void f_00010412(X86Cpu& c) {
    X86_TICK(c, 10);
    // 010412  ret 
    X86_AT(c, 0x10412u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x10412u, "ran off the end of a function");
}
void f_00010413(X86Cpu& c) {
    goto L_10413;
L_10338:
    X86_TICK(c, 12);
    // 010338  mov byte ptr [ebp + 0x21], 0xff
    X86_AT(c, 0x10338u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0x21u)), 0xFFu);
    // 01033c  ret 
    X86_AT(c, 0x1033cu);
    c.eip = pop32(c); return;
L_10413:
    X86_TICK(c, 15);
    // 010413  pushfd 
    X86_AT(c, 0x10413u);
    push32(c, c.fl & 0x00FCFFFFu);
    // 010414  cli 
    X86_AT(c, 0x10414u);
    c.fl &= ~X86_IF;
    // 010415  cmp dx, bx
    X86_AT(c, 0x10415u);
    (void)x86_sub(c, (c.r[2] & 0xFFFFu), (c.r[3] & 0xFFFFu), 0, 2);
    // 010418  ja 0x10453
    X86_AT(c, 0x10418u);
    if (x86_cc(c, 7)) { goto L_10453; }
    X86_TICK(c, 11);
    // 01041a  cmp bx, word ptr [edi + esi*1 + 4]
    X86_AT(c, 0x1041au);
    (void)x86_sub(c, (c.r[3] & 0xFFFFu), rd16((c.sbase[3] + (uint32_t)(c.r[7] + c.r[6] + 0x4u))), 0, 2);
    // 01041f  jae 0x10453
    X86_AT(c, 0x1041fu);
    if (x86_cc(c, 3)) { goto L_10453; }
    X86_TICK(c, 16);
    // 010421  mov word ptr [edi + esi*1 + 0xf], dx
    X86_AT(c, 0x10421u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + c.r[6] + 0xFu)), (c.r[2] & 0xFFFFu));
    // 010426  mov word ptr [edi + esi*1 + 0x5a], bx
    X86_AT(c, 0x10426u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + c.r[6] + 0x5Au)), (c.r[3] & 0xFFFFu));
    // 01042b  cmp word ptr [edi + esi*1 + 0x52], dx
    X86_AT(c, 0x1042bu);
    (void)x86_sub(c, rd16((c.sbase[3] + (uint32_t)(c.r[7] + c.r[6] + 0x52u))), (c.r[2] & 0xFFFFu), 0, 2);
    // 010430  jb 0x1043c
    X86_AT(c, 0x10430u);
    if (x86_cc(c, 2)) { goto L_1043c; }
    X86_TICK(c, 12);
    // 010432  cmp word ptr [edi + esi*1 + 0x52], bx
    X86_AT(c, 0x10432u);
    (void)x86_sub(c, rd16((c.sbase[3] + (uint32_t)(c.r[7] + c.r[6] + 0x52u))), (c.r[3] & 0xFFFFu), 0, 2);
    // 010437  jbe 0x10451
    X86_AT(c, 0x10437u);
    if (x86_cc(c, 6)) { goto L_10451; }
    X86_TICK(c, 2);
    // 010439  mov dx, bx
    X86_AT(c, 0x10439u);
    s16(c, 2, (c.r[3] & 0xFFFFu));
L_1043c:
    X86_TICK(c, 16);
    // 01043c  mov word ptr [edi + esi*1 + 0x52], dx
    X86_AT(c, 0x1043cu);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + c.r[6] + 0x52u)), (c.r[2] & 0xFFFFu));
    // 010441  or word ptr [edi + 0x30], 1
    X86_AT(c, 0x10441u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x30u)); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v | 0x1u, 2)); }
    // 010446  call 0x10870
    X86_AT(c, 0x10446u);
    push32(c, 0x1044bu); f_00010870(c); X86_RET(c, 0x1044bu);
    X86_TICK(c, 7);
    // 01044b  and word ptr [edi + 0x30], 0xfffe
    X86_AT(c, 0x1044bu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x30u)); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v & 0xFFFEu, 2)); }
L_10451:
    X86_TICK(c, 16);
    // 010451  popfd 
    X86_AT(c, 0x10451u);
    x86_popfd(c, 4);
    // 010452  ret 
    X86_AT(c, 0x10452u);
    c.eip = pop32(c); return;
L_10453:
    X86_TICK(c, 13);
    // 010453  popfd 
    X86_AT(c, 0x10453u);
    x86_popfd(c, 4);
    // 010454  jmp 0x10338
    X86_AT(c, 0x10454u);
    X86_POLL(c, 0x10338u); goto L_10338;
    x86_fault(c, 0x10413u, "ran off the end of a function");
}
void f_00010414(X86Cpu& c) {
    goto L_10414;
L_10338:
    X86_TICK(c, 12);
    // 010338  mov byte ptr [ebp + 0x21], 0xff
    X86_AT(c, 0x10338u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0x21u)), 0xFFu);
    // 01033c  ret 
    X86_AT(c, 0x1033cu);
    c.eip = pop32(c); return;
L_10414:
    X86_TICK(c, 9);
    // 010414  cli 
    X86_AT(c, 0x10414u);
    c.fl &= ~X86_IF;
    // 010415  cmp dx, bx
    X86_AT(c, 0x10415u);
    (void)x86_sub(c, (c.r[2] & 0xFFFFu), (c.r[3] & 0xFFFFu), 0, 2);
    // 010418  ja 0x10453
    X86_AT(c, 0x10418u);
    if (x86_cc(c, 7)) { goto L_10453; }
    X86_TICK(c, 11);
    // 01041a  cmp bx, word ptr [edi + esi*1 + 4]
    X86_AT(c, 0x1041au);
    (void)x86_sub(c, (c.r[3] & 0xFFFFu), rd16((c.sbase[3] + (uint32_t)(c.r[7] + c.r[6] + 0x4u))), 0, 2);
    // 01041f  jae 0x10453
    X86_AT(c, 0x1041fu);
    if (x86_cc(c, 3)) { goto L_10453; }
    X86_TICK(c, 16);
    // 010421  mov word ptr [edi + esi*1 + 0xf], dx
    X86_AT(c, 0x10421u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + c.r[6] + 0xFu)), (c.r[2] & 0xFFFFu));
    // 010426  mov word ptr [edi + esi*1 + 0x5a], bx
    X86_AT(c, 0x10426u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + c.r[6] + 0x5Au)), (c.r[3] & 0xFFFFu));
    // 01042b  cmp word ptr [edi + esi*1 + 0x52], dx
    X86_AT(c, 0x1042bu);
    (void)x86_sub(c, rd16((c.sbase[3] + (uint32_t)(c.r[7] + c.r[6] + 0x52u))), (c.r[2] & 0xFFFFu), 0, 2);
    // 010430  jb 0x1043c
    X86_AT(c, 0x10430u);
    if (x86_cc(c, 2)) { goto L_1043c; }
    X86_TICK(c, 12);
    // 010432  cmp word ptr [edi + esi*1 + 0x52], bx
    X86_AT(c, 0x10432u);
    (void)x86_sub(c, rd16((c.sbase[3] + (uint32_t)(c.r[7] + c.r[6] + 0x52u))), (c.r[3] & 0xFFFFu), 0, 2);
    // 010437  jbe 0x10451
    X86_AT(c, 0x10437u);
    if (x86_cc(c, 6)) { goto L_10451; }
    X86_TICK(c, 2);
    // 010439  mov dx, bx
    X86_AT(c, 0x10439u);
    s16(c, 2, (c.r[3] & 0xFFFFu));
L_1043c:
    X86_TICK(c, 16);
    // 01043c  mov word ptr [edi + esi*1 + 0x52], dx
    X86_AT(c, 0x1043cu);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + c.r[6] + 0x52u)), (c.r[2] & 0xFFFFu));
    // 010441  or word ptr [edi + 0x30], 1
    X86_AT(c, 0x10441u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x30u)); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v | 0x1u, 2)); }
    // 010446  call 0x10870
    X86_AT(c, 0x10446u);
    push32(c, 0x1044bu); f_00010870(c); X86_RET(c, 0x1044bu);
    X86_TICK(c, 7);
    // 01044b  and word ptr [edi + 0x30], 0xfffe
    X86_AT(c, 0x1044bu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x30u)); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v & 0xFFFEu, 2)); }
L_10451:
    X86_TICK(c, 16);
    // 010451  popfd 
    X86_AT(c, 0x10451u);
    x86_popfd(c, 4);
    // 010452  ret 
    X86_AT(c, 0x10452u);
    c.eip = pop32(c); return;
L_10453:
    X86_TICK(c, 13);
    // 010453  popfd 
    X86_AT(c, 0x10453u);
    x86_popfd(c, 4);
    // 010454  jmp 0x10338
    X86_AT(c, 0x10454u);
    X86_POLL(c, 0x10338u); goto L_10338;
    x86_fault(c, 0x10414u, "ran off the end of a function");
}
void f_00010415(X86Cpu& c) {
    goto L_10415;
L_10338:
    X86_TICK(c, 12);
    // 010338  mov byte ptr [ebp + 0x21], 0xff
    X86_AT(c, 0x10338u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0x21u)), 0xFFu);
    // 01033c  ret 
    X86_AT(c, 0x1033cu);
    c.eip = pop32(c); return;
L_10415:
    X86_TICK(c, 7);
    // 010415  cmp dx, bx
    X86_AT(c, 0x10415u);
    (void)x86_sub(c, (c.r[2] & 0xFFFFu), (c.r[3] & 0xFFFFu), 0, 2);
    // 010418  ja 0x10453
    X86_AT(c, 0x10418u);
    if (x86_cc(c, 7)) { goto L_10453; }
    X86_TICK(c, 11);
    // 01041a  cmp bx, word ptr [edi + esi*1 + 4]
    X86_AT(c, 0x1041au);
    (void)x86_sub(c, (c.r[3] & 0xFFFFu), rd16((c.sbase[3] + (uint32_t)(c.r[7] + c.r[6] + 0x4u))), 0, 2);
    // 01041f  jae 0x10453
    X86_AT(c, 0x1041fu);
    if (x86_cc(c, 3)) { goto L_10453; }
    X86_TICK(c, 16);
    // 010421  mov word ptr [edi + esi*1 + 0xf], dx
    X86_AT(c, 0x10421u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + c.r[6] + 0xFu)), (c.r[2] & 0xFFFFu));
    // 010426  mov word ptr [edi + esi*1 + 0x5a], bx
    X86_AT(c, 0x10426u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + c.r[6] + 0x5Au)), (c.r[3] & 0xFFFFu));
    // 01042b  cmp word ptr [edi + esi*1 + 0x52], dx
    X86_AT(c, 0x1042bu);
    (void)x86_sub(c, rd16((c.sbase[3] + (uint32_t)(c.r[7] + c.r[6] + 0x52u))), (c.r[2] & 0xFFFFu), 0, 2);
    // 010430  jb 0x1043c
    X86_AT(c, 0x10430u);
    if (x86_cc(c, 2)) { goto L_1043c; }
    X86_TICK(c, 12);
    // 010432  cmp word ptr [edi + esi*1 + 0x52], bx
    X86_AT(c, 0x10432u);
    (void)x86_sub(c, rd16((c.sbase[3] + (uint32_t)(c.r[7] + c.r[6] + 0x52u))), (c.r[3] & 0xFFFFu), 0, 2);
    // 010437  jbe 0x10451
    X86_AT(c, 0x10437u);
    if (x86_cc(c, 6)) { goto L_10451; }
    X86_TICK(c, 2);
    // 010439  mov dx, bx
    X86_AT(c, 0x10439u);
    s16(c, 2, (c.r[3] & 0xFFFFu));
L_1043c:
    X86_TICK(c, 16);
    // 01043c  mov word ptr [edi + esi*1 + 0x52], dx
    X86_AT(c, 0x1043cu);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + c.r[6] + 0x52u)), (c.r[2] & 0xFFFFu));
    // 010441  or word ptr [edi + 0x30], 1
    X86_AT(c, 0x10441u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x30u)); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v | 0x1u, 2)); }
    // 010446  call 0x10870
    X86_AT(c, 0x10446u);
    push32(c, 0x1044bu); f_00010870(c); X86_RET(c, 0x1044bu);
    X86_TICK(c, 7);
    // 01044b  and word ptr [edi + 0x30], 0xfffe
    X86_AT(c, 0x1044bu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x30u)); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v & 0xFFFEu, 2)); }
L_10451:
    X86_TICK(c, 16);
    // 010451  popfd 
    X86_AT(c, 0x10451u);
    x86_popfd(c, 4);
    // 010452  ret 
    X86_AT(c, 0x10452u);
    c.eip = pop32(c); return;
L_10453:
    X86_TICK(c, 13);
    // 010453  popfd 
    X86_AT(c, 0x10453u);
    x86_popfd(c, 4);
    // 010454  jmp 0x10338
    X86_AT(c, 0x10454u);
    X86_POLL(c, 0x10338u); goto L_10338;
    x86_fault(c, 0x10415u, "ran off the end of a function");
}
void f_00010418(X86Cpu& c) {
    goto L_10418;
L_10338:
    X86_TICK(c, 12);
    // 010338  mov byte ptr [ebp + 0x21], 0xff
    X86_AT(c, 0x10338u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0x21u)), 0xFFu);
    // 01033c  ret 
    X86_AT(c, 0x1033cu);
    c.eip = pop32(c); return;
L_10418:
    X86_TICK(c, 5);
    // 010418  ja 0x10453
    X86_AT(c, 0x10418u);
    if (x86_cc(c, 7)) { goto L_10453; }
    X86_TICK(c, 11);
    // 01041a  cmp bx, word ptr [edi + esi*1 + 4]
    X86_AT(c, 0x1041au);
    (void)x86_sub(c, (c.r[3] & 0xFFFFu), rd16((c.sbase[3] + (uint32_t)(c.r[7] + c.r[6] + 0x4u))), 0, 2);
    // 01041f  jae 0x10453
    X86_AT(c, 0x1041fu);
    if (x86_cc(c, 3)) { goto L_10453; }
    X86_TICK(c, 16);
    // 010421  mov word ptr [edi + esi*1 + 0xf], dx
    X86_AT(c, 0x10421u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + c.r[6] + 0xFu)), (c.r[2] & 0xFFFFu));
    // 010426  mov word ptr [edi + esi*1 + 0x5a], bx
    X86_AT(c, 0x10426u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + c.r[6] + 0x5Au)), (c.r[3] & 0xFFFFu));
    // 01042b  cmp word ptr [edi + esi*1 + 0x52], dx
    X86_AT(c, 0x1042bu);
    (void)x86_sub(c, rd16((c.sbase[3] + (uint32_t)(c.r[7] + c.r[6] + 0x52u))), (c.r[2] & 0xFFFFu), 0, 2);
    // 010430  jb 0x1043c
    X86_AT(c, 0x10430u);
    if (x86_cc(c, 2)) { goto L_1043c; }
    X86_TICK(c, 12);
    // 010432  cmp word ptr [edi + esi*1 + 0x52], bx
    X86_AT(c, 0x10432u);
    (void)x86_sub(c, rd16((c.sbase[3] + (uint32_t)(c.r[7] + c.r[6] + 0x52u))), (c.r[3] & 0xFFFFu), 0, 2);
    // 010437  jbe 0x10451
    X86_AT(c, 0x10437u);
    if (x86_cc(c, 6)) { goto L_10451; }
    X86_TICK(c, 2);
    // 010439  mov dx, bx
    X86_AT(c, 0x10439u);
    s16(c, 2, (c.r[3] & 0xFFFFu));
L_1043c:
    X86_TICK(c, 16);
    // 01043c  mov word ptr [edi + esi*1 + 0x52], dx
    X86_AT(c, 0x1043cu);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + c.r[6] + 0x52u)), (c.r[2] & 0xFFFFu));
    // 010441  or word ptr [edi + 0x30], 1
    X86_AT(c, 0x10441u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x30u)); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v | 0x1u, 2)); }
    // 010446  call 0x10870
    X86_AT(c, 0x10446u);
    push32(c, 0x1044bu); f_00010870(c); X86_RET(c, 0x1044bu);
    X86_TICK(c, 7);
    // 01044b  and word ptr [edi + 0x30], 0xfffe
    X86_AT(c, 0x1044bu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x30u)); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v & 0xFFFEu, 2)); }
L_10451:
    X86_TICK(c, 16);
    // 010451  popfd 
    X86_AT(c, 0x10451u);
    x86_popfd(c, 4);
    // 010452  ret 
    X86_AT(c, 0x10452u);
    c.eip = pop32(c); return;
L_10453:
    X86_TICK(c, 13);
    // 010453  popfd 
    X86_AT(c, 0x10453u);
    x86_popfd(c, 4);
    // 010454  jmp 0x10338
    X86_AT(c, 0x10454u);
    X86_POLL(c, 0x10338u); goto L_10338;
    x86_fault(c, 0x10418u, "ran off the end of a function");
}
void f_0001041a(X86Cpu& c) {
    goto L_1041a;
L_10338:
    X86_TICK(c, 12);
    // 010338  mov byte ptr [ebp + 0x21], 0xff
    X86_AT(c, 0x10338u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0x21u)), 0xFFu);
    // 01033c  ret 
    X86_AT(c, 0x1033cu);
    c.eip = pop32(c); return;
L_1041a:
    X86_TICK(c, 11);
    // 01041a  cmp bx, word ptr [edi + esi*1 + 4]
    X86_AT(c, 0x1041au);
    (void)x86_sub(c, (c.r[3] & 0xFFFFu), rd16((c.sbase[3] + (uint32_t)(c.r[7] + c.r[6] + 0x4u))), 0, 2);
    // 01041f  jae 0x10453
    X86_AT(c, 0x1041fu);
    if (x86_cc(c, 3)) { goto L_10453; }
    X86_TICK(c, 16);
    // 010421  mov word ptr [edi + esi*1 + 0xf], dx
    X86_AT(c, 0x10421u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + c.r[6] + 0xFu)), (c.r[2] & 0xFFFFu));
    // 010426  mov word ptr [edi + esi*1 + 0x5a], bx
    X86_AT(c, 0x10426u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + c.r[6] + 0x5Au)), (c.r[3] & 0xFFFFu));
    // 01042b  cmp word ptr [edi + esi*1 + 0x52], dx
    X86_AT(c, 0x1042bu);
    (void)x86_sub(c, rd16((c.sbase[3] + (uint32_t)(c.r[7] + c.r[6] + 0x52u))), (c.r[2] & 0xFFFFu), 0, 2);
    // 010430  jb 0x1043c
    X86_AT(c, 0x10430u);
    if (x86_cc(c, 2)) { goto L_1043c; }
    X86_TICK(c, 12);
    // 010432  cmp word ptr [edi + esi*1 + 0x52], bx
    X86_AT(c, 0x10432u);
    (void)x86_sub(c, rd16((c.sbase[3] + (uint32_t)(c.r[7] + c.r[6] + 0x52u))), (c.r[3] & 0xFFFFu), 0, 2);
    // 010437  jbe 0x10451
    X86_AT(c, 0x10437u);
    if (x86_cc(c, 6)) { goto L_10451; }
    X86_TICK(c, 2);
    // 010439  mov dx, bx
    X86_AT(c, 0x10439u);
    s16(c, 2, (c.r[3] & 0xFFFFu));
L_1043c:
    X86_TICK(c, 16);
    // 01043c  mov word ptr [edi + esi*1 + 0x52], dx
    X86_AT(c, 0x1043cu);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + c.r[6] + 0x52u)), (c.r[2] & 0xFFFFu));
    // 010441  or word ptr [edi + 0x30], 1
    X86_AT(c, 0x10441u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x30u)); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v | 0x1u, 2)); }
    // 010446  call 0x10870
    X86_AT(c, 0x10446u);
    push32(c, 0x1044bu); f_00010870(c); X86_RET(c, 0x1044bu);
    X86_TICK(c, 7);
    // 01044b  and word ptr [edi + 0x30], 0xfffe
    X86_AT(c, 0x1044bu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x30u)); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v & 0xFFFEu, 2)); }
L_10451:
    X86_TICK(c, 16);
    // 010451  popfd 
    X86_AT(c, 0x10451u);
    x86_popfd(c, 4);
    // 010452  ret 
    X86_AT(c, 0x10452u);
    c.eip = pop32(c); return;
L_10453:
    X86_TICK(c, 13);
    // 010453  popfd 
    X86_AT(c, 0x10453u);
    x86_popfd(c, 4);
    // 010454  jmp 0x10338
    X86_AT(c, 0x10454u);
    X86_POLL(c, 0x10338u); goto L_10338;
    x86_fault(c, 0x1041au, "ran off the end of a function");
}
void f_0001041f(X86Cpu& c) {
    goto L_1041f;
L_10338:
    X86_TICK(c, 12);
    // 010338  mov byte ptr [ebp + 0x21], 0xff
    X86_AT(c, 0x10338u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0x21u)), 0xFFu);
    // 01033c  ret 
    X86_AT(c, 0x1033cu);
    c.eip = pop32(c); return;
L_1041f:
    X86_TICK(c, 5);
    // 01041f  jae 0x10453
    X86_AT(c, 0x1041fu);
    if (x86_cc(c, 3)) { goto L_10453; }
    X86_TICK(c, 16);
    // 010421  mov word ptr [edi + esi*1 + 0xf], dx
    X86_AT(c, 0x10421u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + c.r[6] + 0xFu)), (c.r[2] & 0xFFFFu));
    // 010426  mov word ptr [edi + esi*1 + 0x5a], bx
    X86_AT(c, 0x10426u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + c.r[6] + 0x5Au)), (c.r[3] & 0xFFFFu));
    // 01042b  cmp word ptr [edi + esi*1 + 0x52], dx
    X86_AT(c, 0x1042bu);
    (void)x86_sub(c, rd16((c.sbase[3] + (uint32_t)(c.r[7] + c.r[6] + 0x52u))), (c.r[2] & 0xFFFFu), 0, 2);
    // 010430  jb 0x1043c
    X86_AT(c, 0x10430u);
    if (x86_cc(c, 2)) { goto L_1043c; }
    X86_TICK(c, 12);
    // 010432  cmp word ptr [edi + esi*1 + 0x52], bx
    X86_AT(c, 0x10432u);
    (void)x86_sub(c, rd16((c.sbase[3] + (uint32_t)(c.r[7] + c.r[6] + 0x52u))), (c.r[3] & 0xFFFFu), 0, 2);
    // 010437  jbe 0x10451
    X86_AT(c, 0x10437u);
    if (x86_cc(c, 6)) { goto L_10451; }
    X86_TICK(c, 2);
    // 010439  mov dx, bx
    X86_AT(c, 0x10439u);
    s16(c, 2, (c.r[3] & 0xFFFFu));
L_1043c:
    X86_TICK(c, 16);
    // 01043c  mov word ptr [edi + esi*1 + 0x52], dx
    X86_AT(c, 0x1043cu);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + c.r[6] + 0x52u)), (c.r[2] & 0xFFFFu));
    // 010441  or word ptr [edi + 0x30], 1
    X86_AT(c, 0x10441u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x30u)); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v | 0x1u, 2)); }
    // 010446  call 0x10870
    X86_AT(c, 0x10446u);
    push32(c, 0x1044bu); f_00010870(c); X86_RET(c, 0x1044bu);
    X86_TICK(c, 7);
    // 01044b  and word ptr [edi + 0x30], 0xfffe
    X86_AT(c, 0x1044bu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x30u)); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v & 0xFFFEu, 2)); }
L_10451:
    X86_TICK(c, 16);
    // 010451  popfd 
    X86_AT(c, 0x10451u);
    x86_popfd(c, 4);
    // 010452  ret 
    X86_AT(c, 0x10452u);
    c.eip = pop32(c); return;
L_10453:
    X86_TICK(c, 13);
    // 010453  popfd 
    X86_AT(c, 0x10453u);
    x86_popfd(c, 4);
    // 010454  jmp 0x10338
    X86_AT(c, 0x10454u);
    X86_POLL(c, 0x10338u); goto L_10338;
    x86_fault(c, 0x1041fu, "ran off the end of a function");
}
void f_00010421(X86Cpu& c) {
    X86_TICK(c, 16);
    // 010421  mov word ptr [edi + esi*1 + 0xf], dx
    X86_AT(c, 0x10421u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + c.r[6] + 0xFu)), (c.r[2] & 0xFFFFu));
    // 010426  mov word ptr [edi + esi*1 + 0x5a], bx
    X86_AT(c, 0x10426u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + c.r[6] + 0x5Au)), (c.r[3] & 0xFFFFu));
    // 01042b  cmp word ptr [edi + esi*1 + 0x52], dx
    X86_AT(c, 0x1042bu);
    (void)x86_sub(c, rd16((c.sbase[3] + (uint32_t)(c.r[7] + c.r[6] + 0x52u))), (c.r[2] & 0xFFFFu), 0, 2);
    // 010430  jb 0x1043c
    X86_AT(c, 0x10430u);
    if (x86_cc(c, 2)) { goto L_1043c; }
    X86_TICK(c, 12);
    // 010432  cmp word ptr [edi + esi*1 + 0x52], bx
    X86_AT(c, 0x10432u);
    (void)x86_sub(c, rd16((c.sbase[3] + (uint32_t)(c.r[7] + c.r[6] + 0x52u))), (c.r[3] & 0xFFFFu), 0, 2);
    // 010437  jbe 0x10451
    X86_AT(c, 0x10437u);
    if (x86_cc(c, 6)) { goto L_10451; }
    X86_TICK(c, 2);
    // 010439  mov dx, bx
    X86_AT(c, 0x10439u);
    s16(c, 2, (c.r[3] & 0xFFFFu));
L_1043c:
    X86_TICK(c, 16);
    // 01043c  mov word ptr [edi + esi*1 + 0x52], dx
    X86_AT(c, 0x1043cu);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + c.r[6] + 0x52u)), (c.r[2] & 0xFFFFu));
    // 010441  or word ptr [edi + 0x30], 1
    X86_AT(c, 0x10441u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x30u)); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v | 0x1u, 2)); }
    // 010446  call 0x10870
    X86_AT(c, 0x10446u);
    push32(c, 0x1044bu); f_00010870(c); X86_RET(c, 0x1044bu);
    X86_TICK(c, 7);
    // 01044b  and word ptr [edi + 0x30], 0xfffe
    X86_AT(c, 0x1044bu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x30u)); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v & 0xFFFEu, 2)); }
L_10451:
    X86_TICK(c, 16);
    // 010451  popfd 
    X86_AT(c, 0x10451u);
    x86_popfd(c, 4);
    // 010452  ret 
    X86_AT(c, 0x10452u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x10421u, "ran off the end of a function");
}
void f_00010426(X86Cpu& c) {
    X86_TICK(c, 14);
    // 010426  mov word ptr [edi + esi*1 + 0x5a], bx
    X86_AT(c, 0x10426u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + c.r[6] + 0x5Au)), (c.r[3] & 0xFFFFu));
    // 01042b  cmp word ptr [edi + esi*1 + 0x52], dx
    X86_AT(c, 0x1042bu);
    (void)x86_sub(c, rd16((c.sbase[3] + (uint32_t)(c.r[7] + c.r[6] + 0x52u))), (c.r[2] & 0xFFFFu), 0, 2);
    // 010430  jb 0x1043c
    X86_AT(c, 0x10430u);
    if (x86_cc(c, 2)) { goto L_1043c; }
    X86_TICK(c, 12);
    // 010432  cmp word ptr [edi + esi*1 + 0x52], bx
    X86_AT(c, 0x10432u);
    (void)x86_sub(c, rd16((c.sbase[3] + (uint32_t)(c.r[7] + c.r[6] + 0x52u))), (c.r[3] & 0xFFFFu), 0, 2);
    // 010437  jbe 0x10451
    X86_AT(c, 0x10437u);
    if (x86_cc(c, 6)) { goto L_10451; }
    X86_TICK(c, 2);
    // 010439  mov dx, bx
    X86_AT(c, 0x10439u);
    s16(c, 2, (c.r[3] & 0xFFFFu));
L_1043c:
    X86_TICK(c, 16);
    // 01043c  mov word ptr [edi + esi*1 + 0x52], dx
    X86_AT(c, 0x1043cu);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + c.r[6] + 0x52u)), (c.r[2] & 0xFFFFu));
    // 010441  or word ptr [edi + 0x30], 1
    X86_AT(c, 0x10441u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x30u)); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v | 0x1u, 2)); }
    // 010446  call 0x10870
    X86_AT(c, 0x10446u);
    push32(c, 0x1044bu); f_00010870(c); X86_RET(c, 0x1044bu);
    X86_TICK(c, 7);
    // 01044b  and word ptr [edi + 0x30], 0xfffe
    X86_AT(c, 0x1044bu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x30u)); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v & 0xFFFEu, 2)); }
L_10451:
    X86_TICK(c, 16);
    // 010451  popfd 
    X86_AT(c, 0x10451u);
    x86_popfd(c, 4);
    // 010452  ret 
    X86_AT(c, 0x10452u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x10426u, "ran off the end of a function");
}
void f_0001042b(X86Cpu& c) {
    X86_TICK(c, 12);
    // 01042b  cmp word ptr [edi + esi*1 + 0x52], dx
    X86_AT(c, 0x1042bu);
    (void)x86_sub(c, rd16((c.sbase[3] + (uint32_t)(c.r[7] + c.r[6] + 0x52u))), (c.r[2] & 0xFFFFu), 0, 2);
    // 010430  jb 0x1043c
    X86_AT(c, 0x10430u);
    if (x86_cc(c, 2)) { goto L_1043c; }
    X86_TICK(c, 12);
    // 010432  cmp word ptr [edi + esi*1 + 0x52], bx
    X86_AT(c, 0x10432u);
    (void)x86_sub(c, rd16((c.sbase[3] + (uint32_t)(c.r[7] + c.r[6] + 0x52u))), (c.r[3] & 0xFFFFu), 0, 2);
    // 010437  jbe 0x10451
    X86_AT(c, 0x10437u);
    if (x86_cc(c, 6)) { goto L_10451; }
    X86_TICK(c, 2);
    // 010439  mov dx, bx
    X86_AT(c, 0x10439u);
    s16(c, 2, (c.r[3] & 0xFFFFu));
L_1043c:
    X86_TICK(c, 16);
    // 01043c  mov word ptr [edi + esi*1 + 0x52], dx
    X86_AT(c, 0x1043cu);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + c.r[6] + 0x52u)), (c.r[2] & 0xFFFFu));
    // 010441  or word ptr [edi + 0x30], 1
    X86_AT(c, 0x10441u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x30u)); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v | 0x1u, 2)); }
    // 010446  call 0x10870
    X86_AT(c, 0x10446u);
    push32(c, 0x1044bu); f_00010870(c); X86_RET(c, 0x1044bu);
    X86_TICK(c, 7);
    // 01044b  and word ptr [edi + 0x30], 0xfffe
    X86_AT(c, 0x1044bu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x30u)); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v & 0xFFFEu, 2)); }
L_10451:
    X86_TICK(c, 16);
    // 010451  popfd 
    X86_AT(c, 0x10451u);
    x86_popfd(c, 4);
    // 010452  ret 
    X86_AT(c, 0x10452u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x1042bu, "ran off the end of a function");
}
void f_00010430(X86Cpu& c) {
    X86_TICK(c, 5);
    // 010430  jb 0x1043c
    X86_AT(c, 0x10430u);
    if (x86_cc(c, 2)) { goto L_1043c; }
    X86_TICK(c, 12);
    // 010432  cmp word ptr [edi + esi*1 + 0x52], bx
    X86_AT(c, 0x10432u);
    (void)x86_sub(c, rd16((c.sbase[3] + (uint32_t)(c.r[7] + c.r[6] + 0x52u))), (c.r[3] & 0xFFFFu), 0, 2);
    // 010437  jbe 0x10451
    X86_AT(c, 0x10437u);
    if (x86_cc(c, 6)) { goto L_10451; }
    X86_TICK(c, 2);
    // 010439  mov dx, bx
    X86_AT(c, 0x10439u);
    s16(c, 2, (c.r[3] & 0xFFFFu));
L_1043c:
    X86_TICK(c, 16);
    // 01043c  mov word ptr [edi + esi*1 + 0x52], dx
    X86_AT(c, 0x1043cu);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + c.r[6] + 0x52u)), (c.r[2] & 0xFFFFu));
    // 010441  or word ptr [edi + 0x30], 1
    X86_AT(c, 0x10441u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x30u)); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v | 0x1u, 2)); }
    // 010446  call 0x10870
    X86_AT(c, 0x10446u);
    push32(c, 0x1044bu); f_00010870(c); X86_RET(c, 0x1044bu);
    X86_TICK(c, 7);
    // 01044b  and word ptr [edi + 0x30], 0xfffe
    X86_AT(c, 0x1044bu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x30u)); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v & 0xFFFEu, 2)); }
L_10451:
    X86_TICK(c, 16);
    // 010451  popfd 
    X86_AT(c, 0x10451u);
    x86_popfd(c, 4);
    // 010452  ret 
    X86_AT(c, 0x10452u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x10430u, "ran off the end of a function");
}
void f_00010432(X86Cpu& c) {
    X86_TICK(c, 12);
    // 010432  cmp word ptr [edi + esi*1 + 0x52], bx
    X86_AT(c, 0x10432u);
    (void)x86_sub(c, rd16((c.sbase[3] + (uint32_t)(c.r[7] + c.r[6] + 0x52u))), (c.r[3] & 0xFFFFu), 0, 2);
    // 010437  jbe 0x10451
    X86_AT(c, 0x10437u);
    if (x86_cc(c, 6)) { goto L_10451; }
    X86_TICK(c, 18);
    // 010439  mov dx, bx
    X86_AT(c, 0x10439u);
    s16(c, 2, (c.r[3] & 0xFFFFu));
    // 01043c  mov word ptr [edi + esi*1 + 0x52], dx
    X86_AT(c, 0x1043cu);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + c.r[6] + 0x52u)), (c.r[2] & 0xFFFFu));
    // 010441  or word ptr [edi + 0x30], 1
    X86_AT(c, 0x10441u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x30u)); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v | 0x1u, 2)); }
    // 010446  call 0x10870
    X86_AT(c, 0x10446u);
    push32(c, 0x1044bu); f_00010870(c); X86_RET(c, 0x1044bu);
    X86_TICK(c, 7);
    // 01044b  and word ptr [edi + 0x30], 0xfffe
    X86_AT(c, 0x1044bu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x30u)); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v & 0xFFFEu, 2)); }
L_10451:
    X86_TICK(c, 16);
    // 010451  popfd 
    X86_AT(c, 0x10451u);
    x86_popfd(c, 4);
    // 010452  ret 
    X86_AT(c, 0x10452u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x10432u, "ran off the end of a function");
}
void f_00010437(X86Cpu& c) {
    X86_TICK(c, 5);
    // 010437  jbe 0x10451
    X86_AT(c, 0x10437u);
    if (x86_cc(c, 6)) { goto L_10451; }
    X86_TICK(c, 18);
    // 010439  mov dx, bx
    X86_AT(c, 0x10439u);
    s16(c, 2, (c.r[3] & 0xFFFFu));
    // 01043c  mov word ptr [edi + esi*1 + 0x52], dx
    X86_AT(c, 0x1043cu);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + c.r[6] + 0x52u)), (c.r[2] & 0xFFFFu));
    // 010441  or word ptr [edi + 0x30], 1
    X86_AT(c, 0x10441u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x30u)); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v | 0x1u, 2)); }
    // 010446  call 0x10870
    X86_AT(c, 0x10446u);
    push32(c, 0x1044bu); f_00010870(c); X86_RET(c, 0x1044bu);
    X86_TICK(c, 7);
    // 01044b  and word ptr [edi + 0x30], 0xfffe
    X86_AT(c, 0x1044bu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x30u)); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v & 0xFFFEu, 2)); }
L_10451:
    X86_TICK(c, 16);
    // 010451  popfd 
    X86_AT(c, 0x10451u);
    x86_popfd(c, 4);
    // 010452  ret 
    X86_AT(c, 0x10452u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x10437u, "ran off the end of a function");
}
void f_00010451(X86Cpu& c) {
    X86_TICK(c, 16);
    // 010451  popfd 
    X86_AT(c, 0x10451u);
    x86_popfd(c, 4);
    // 010452  ret 
    X86_AT(c, 0x10452u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x10451u, "ran off the end of a function");
}
void f_00010452(X86Cpu& c) {
    X86_TICK(c, 10);
    // 010452  ret 
    X86_AT(c, 0x10452u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x10452u, "ran off the end of a function");
}
void f_00010459(X86Cpu& c) {
    goto L_10459;
L_10338:
    X86_TICK(c, 12);
    // 010338  mov byte ptr [ebp + 0x21], 0xff
    X86_AT(c, 0x10338u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0x21u)), 0xFFu);
    // 01033c  ret 
    X86_AT(c, 0x1033cu);
    c.eip = pop32(c); return;
L_10459:
    X86_TICK(c, 7);
    // 010459  cmp al, 2
    X86_AT(c, 0x10459u);
    (void)x86_sub(c, g8(c, 0), 0x2u, 0, 1);
    // 01045b  ja 0x10338
    X86_AT(c, 0x1045bu);
    if (x86_cc(c, 7)) { X86_POLL(c, 0x10338u); goto L_10338; }
    X86_TICK(c, 7);
    // 010461  test al, al
    X86_AT(c, 0x10461u);
    (void)x86_logic(c, g8(c, 0) & g8(c, 0), 1);
    // 010463  je 0x1048a
    X86_AT(c, 0x10463u);
    if (x86_cc(c, 4)) { goto L_1048a; }
    X86_TICK(c, 23);
    // 010465  mov ecx, dword ptr [ebp + 8]
    X86_AT(c, 0x10465u);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 010468  mov gs, word ptr [ebp + 0x24]
    X86_AT(c, 0x10468u);
    x86_load_seg(c, 5, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0x24u))) & 0xFFFFu);
    // 01046b  mov dx, word ptr gs:[ecx]
    X86_AT(c, 0x1046bu);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[1]))));
    // 01046f  dec dh
    X86_AT(c, 0x1046fu);
    { uint32_t v = g8(c, 6); s8(c, 6, x86_dec(c, v, 1)); }
    // 010471  dec dl
    X86_AT(c, 0x10471u);
    { uint32_t v = g8(c, 2); s8(c, 2, x86_dec(c, v, 1)); }
    // 010473  cmp dl, 3
    X86_AT(c, 0x10473u);
    (void)x86_sub(c, g8(c, 2), 0x3u, 0, 1);
    // 010476  ja 0x10338
    X86_AT(c, 0x10476u);
    if (x86_cc(c, 7)) { X86_POLL(c, 0x10338u); goto L_10338; }
    X86_TICK(c, 7);
    // 01047c  cmp dh, 0x1f
    X86_AT(c, 0x1047cu);
    (void)x86_sub(c, g8(c, 6), 0x1Fu, 0, 1);
    // 01047f  ja 0x10338
    X86_AT(c, 0x1047fu);
    if (x86_cc(c, 7)) { X86_POLL(c, 0x10338u); goto L_10338; }
    X86_TICK(c, 2);
    // 010485  add dx, 0x101
    X86_AT(c, 0x10485u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, 0x101u, 0, 2)); }
L_1048a:
    X86_TICK(c, 20);
    // 01048a  pushfd 
    X86_AT(c, 0x1048au);
    push32(c, c.fl & 0x00FCFFFFu);
    // 01048b  cli 
    X86_AT(c, 0x1048bu);
    c.fl &= ~X86_IF;
    // 01048c  cmp byte ptr [edi + 0x4d], 0
    X86_AT(c, 0x1048cu);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x4Du))), 0x0u, 0, 1);
    // 010490  je 0x10497
    X86_AT(c, 0x10490u);
    if (x86_cc(c, 4)) { goto L_10497; }
    X86_TICK(c, 7);
    // 010492  call 0x10b75
    X86_AT(c, 0x10492u);
    push32(c, 0x10497u); f_00010b75(c); X86_RET(c, 0x10497u);
L_10497:
    X86_TICK(c, 27);
    // 010497  mov dx, word ptr [ebp + 0x18]
    X86_AT(c, 0x10497u);
    s16(c, 2, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0x18u))));
    // 01049b  movsx ax, dh
    X86_AT(c, 0x1049bu);
    s16(c, 0, (uint32_t)(int32_t)(int8_t)g8(c, 6));
    // 01049f  mov word ptr [edi + 0x49], ax
    X86_AT(c, 0x1049fu);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x49u)), (c.r[0] & 0xFFFFu));
    // 0104a3  movsx ax, dl
    X86_AT(c, 0x104a3u);
    s16(c, 0, (uint32_t)(int32_t)(int8_t)g8(c, 2));
    // 0104a7  mov word ptr [edi + 0x4b], ax
    X86_AT(c, 0x104a7u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x4Bu)), (c.r[0] & 0xFFFFu));
    // 0104ab  mov al, byte ptr [ebp + 0x20]
    X86_AT(c, 0x104abu);
    s8(c, 0, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x20u))));
    // 0104ae  mov byte ptr [edi + 0x4e], al
    X86_AT(c, 0x104aeu);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0x4Eu)), g8(c, 0));
    // 0104b1  cmp al, 0
    X86_AT(c, 0x104b1u);
    (void)x86_sub(c, g8(c, 0), 0x0u, 0, 1);
    // 0104b3  jne 0x104cb
    X86_AT(c, 0x104b3u);
    if (x86_cc(c, 5)) { goto L_104cb; }
    X86_TICK(c, 13);
    // 0104b5  mov dword ptr [edi + 0x34], 0x109eb
    X86_AT(c, 0x104b5u);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] + 0x34u)), 0x109EBu);
    // 0104bc  mov word ptr [edi + 0x38], 0x110
    X86_AT(c, 0x104bcu);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x38u)), 0x110u);
    // 0104c2  mov dword ptr [edi + 0x3a], 0xf000f
    X86_AT(c, 0x104c2u);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] + 0x3Au)), 0xF000Fu);
    // 0104c9  jmp 0x104fd
    X86_AT(c, 0x104c9u);
    goto L_104fd;
L_104cb:
    X86_TICK(c, 40);
    // 0104cb  mov ecx, dword ptr [ebp + 8]
    X86_AT(c, 0x104cbu);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0104ce  mov bx, word ptr [ebp + 0x24]
    X86_AT(c, 0x104ceu);
    s16(c, 3, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0x24u))));
    // 0104d2  mov gs, ebx
    X86_AT(c, 0x104d2u);
    x86_load_seg(c, 5, (c.r[3] & 0xFFFFu) & 0xFFFFu);
    // 0104d4  movzx dx, byte ptr gs:[ecx]
    X86_AT(c, 0x104d4u);
    s16(c, 2, rd8((c.sbase[5] + (uint32_t)(c.r[1]))));
    // 0104d9  shl dx, 3
    X86_AT(c, 0x104d9u);
    { uint32_t v = (c.r[2] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 4, v, 0x3u, 2, w); if (w) s16(c, 2, r); }
    // 0104dd  dec dx
    X86_AT(c, 0x104ddu);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_dec(c, v, 2)); }
    // 0104df  mov word ptr [edi + 0x3a], dx
    X86_AT(c, 0x104dfu);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x3Au)), (c.r[2] & 0xFFFFu));
    // 0104e3  movzx dx, byte ptr gs:[ecx + 1]
    X86_AT(c, 0x104e3u);
    s16(c, 2, rd8((c.sbase[5] + (uint32_t)(c.r[1] + 0x1u))));
    // 0104e9  dec dx
    X86_AT(c, 0x104e9u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_dec(c, v, 2)); }
    // 0104eb  mov word ptr [edi + 0x3c], dx
    X86_AT(c, 0x104ebu);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x3Cu)), (c.r[2] & 0xFFFFu));
    // 0104ef  cmp al, 2
    X86_AT(c, 0x104efu);
    (void)x86_sub(c, g8(c, 0), 0x2u, 0, 1);
    // 0104f1  jb 0x104f6
    X86_AT(c, 0x104f1u);
    if (x86_cc(c, 2)) { goto L_104f6; }
    X86_TICK(c, 2);
    // 0104f3  add ecx, 2
    X86_AT(c, 0x104f3u);
    { uint32_t v = c.r[1]; c.r[1] = x86_add(c, v, 0x2u, 0, 4); }
L_104f6:
    X86_TICK(c, 4);
    // 0104f6  mov dword ptr [edi + 0x34], ecx
    X86_AT(c, 0x104f6u);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] + 0x34u)), c.r[1]);
    // 0104f9  mov word ptr [edi + 0x38], bx
    X86_AT(c, 0x104f9u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x38u)), (c.r[3] & 0xFFFFu));
L_104fd:
    X86_TICK(c, 12);
    // 0104fd  cmp byte ptr [edi + 0x4d], 0
    X86_AT(c, 0x104fdu);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x4Du))), 0x0u, 0, 1);
    // 010501  je 0x10508
    X86_AT(c, 0x10501u);
    if (x86_cc(c, 4)) { goto L_10508; }
    X86_TICK(c, 7);
    // 010503  call 0x10bd0
    X86_AT(c, 0x10503u);
    push32(c, 0x10508u); f_00010bd0(c); X86_RET(c, 0x10508u);
L_10508:
    X86_TICK(c, 16);
    // 010508  popfd 
    X86_AT(c, 0x10508u);
    x86_popfd(c, 4);
    // 010509  ret 
    X86_AT(c, 0x10509u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x10459u, "ran off the end of a function");
}
void f_0001045b(X86Cpu& c) {
    goto L_1045b;
L_10338:
    X86_TICK(c, 12);
    // 010338  mov byte ptr [ebp + 0x21], 0xff
    X86_AT(c, 0x10338u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0x21u)), 0xFFu);
    // 01033c  ret 
    X86_AT(c, 0x1033cu);
    c.eip = pop32(c); return;
L_1045b:
    X86_TICK(c, 5);
    // 01045b  ja 0x10338
    X86_AT(c, 0x1045bu);
    if (x86_cc(c, 7)) { X86_POLL(c, 0x10338u); goto L_10338; }
    X86_TICK(c, 7);
    // 010461  test al, al
    X86_AT(c, 0x10461u);
    (void)x86_logic(c, g8(c, 0) & g8(c, 0), 1);
    // 010463  je 0x1048a
    X86_AT(c, 0x10463u);
    if (x86_cc(c, 4)) { goto L_1048a; }
    X86_TICK(c, 23);
    // 010465  mov ecx, dword ptr [ebp + 8]
    X86_AT(c, 0x10465u);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 010468  mov gs, word ptr [ebp + 0x24]
    X86_AT(c, 0x10468u);
    x86_load_seg(c, 5, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0x24u))) & 0xFFFFu);
    // 01046b  mov dx, word ptr gs:[ecx]
    X86_AT(c, 0x1046bu);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[1]))));
    // 01046f  dec dh
    X86_AT(c, 0x1046fu);
    { uint32_t v = g8(c, 6); s8(c, 6, x86_dec(c, v, 1)); }
    // 010471  dec dl
    X86_AT(c, 0x10471u);
    { uint32_t v = g8(c, 2); s8(c, 2, x86_dec(c, v, 1)); }
    // 010473  cmp dl, 3
    X86_AT(c, 0x10473u);
    (void)x86_sub(c, g8(c, 2), 0x3u, 0, 1);
    // 010476  ja 0x10338
    X86_AT(c, 0x10476u);
    if (x86_cc(c, 7)) { X86_POLL(c, 0x10338u); goto L_10338; }
    X86_TICK(c, 7);
    // 01047c  cmp dh, 0x1f
    X86_AT(c, 0x1047cu);
    (void)x86_sub(c, g8(c, 6), 0x1Fu, 0, 1);
    // 01047f  ja 0x10338
    X86_AT(c, 0x1047fu);
    if (x86_cc(c, 7)) { X86_POLL(c, 0x10338u); goto L_10338; }
    X86_TICK(c, 2);
    // 010485  add dx, 0x101
    X86_AT(c, 0x10485u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, 0x101u, 0, 2)); }
L_1048a:
    X86_TICK(c, 20);
    // 01048a  pushfd 
    X86_AT(c, 0x1048au);
    push32(c, c.fl & 0x00FCFFFFu);
    // 01048b  cli 
    X86_AT(c, 0x1048bu);
    c.fl &= ~X86_IF;
    // 01048c  cmp byte ptr [edi + 0x4d], 0
    X86_AT(c, 0x1048cu);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x4Du))), 0x0u, 0, 1);
    // 010490  je 0x10497
    X86_AT(c, 0x10490u);
    if (x86_cc(c, 4)) { goto L_10497; }
    X86_TICK(c, 7);
    // 010492  call 0x10b75
    X86_AT(c, 0x10492u);
    push32(c, 0x10497u); f_00010b75(c); X86_RET(c, 0x10497u);
L_10497:
    X86_TICK(c, 27);
    // 010497  mov dx, word ptr [ebp + 0x18]
    X86_AT(c, 0x10497u);
    s16(c, 2, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0x18u))));
    // 01049b  movsx ax, dh
    X86_AT(c, 0x1049bu);
    s16(c, 0, (uint32_t)(int32_t)(int8_t)g8(c, 6));
    // 01049f  mov word ptr [edi + 0x49], ax
    X86_AT(c, 0x1049fu);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x49u)), (c.r[0] & 0xFFFFu));
    // 0104a3  movsx ax, dl
    X86_AT(c, 0x104a3u);
    s16(c, 0, (uint32_t)(int32_t)(int8_t)g8(c, 2));
    // 0104a7  mov word ptr [edi + 0x4b], ax
    X86_AT(c, 0x104a7u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x4Bu)), (c.r[0] & 0xFFFFu));
    // 0104ab  mov al, byte ptr [ebp + 0x20]
    X86_AT(c, 0x104abu);
    s8(c, 0, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x20u))));
    // 0104ae  mov byte ptr [edi + 0x4e], al
    X86_AT(c, 0x104aeu);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0x4Eu)), g8(c, 0));
    // 0104b1  cmp al, 0
    X86_AT(c, 0x104b1u);
    (void)x86_sub(c, g8(c, 0), 0x0u, 0, 1);
    // 0104b3  jne 0x104cb
    X86_AT(c, 0x104b3u);
    if (x86_cc(c, 5)) { goto L_104cb; }
    X86_TICK(c, 13);
    // 0104b5  mov dword ptr [edi + 0x34], 0x109eb
    X86_AT(c, 0x104b5u);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] + 0x34u)), 0x109EBu);
    // 0104bc  mov word ptr [edi + 0x38], 0x110
    X86_AT(c, 0x104bcu);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x38u)), 0x110u);
    // 0104c2  mov dword ptr [edi + 0x3a], 0xf000f
    X86_AT(c, 0x104c2u);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] + 0x3Au)), 0xF000Fu);
    // 0104c9  jmp 0x104fd
    X86_AT(c, 0x104c9u);
    goto L_104fd;
L_104cb:
    X86_TICK(c, 40);
    // 0104cb  mov ecx, dword ptr [ebp + 8]
    X86_AT(c, 0x104cbu);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0104ce  mov bx, word ptr [ebp + 0x24]
    X86_AT(c, 0x104ceu);
    s16(c, 3, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0x24u))));
    // 0104d2  mov gs, ebx
    X86_AT(c, 0x104d2u);
    x86_load_seg(c, 5, (c.r[3] & 0xFFFFu) & 0xFFFFu);
    // 0104d4  movzx dx, byte ptr gs:[ecx]
    X86_AT(c, 0x104d4u);
    s16(c, 2, rd8((c.sbase[5] + (uint32_t)(c.r[1]))));
    // 0104d9  shl dx, 3
    X86_AT(c, 0x104d9u);
    { uint32_t v = (c.r[2] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 4, v, 0x3u, 2, w); if (w) s16(c, 2, r); }
    // 0104dd  dec dx
    X86_AT(c, 0x104ddu);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_dec(c, v, 2)); }
    // 0104df  mov word ptr [edi + 0x3a], dx
    X86_AT(c, 0x104dfu);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x3Au)), (c.r[2] & 0xFFFFu));
    // 0104e3  movzx dx, byte ptr gs:[ecx + 1]
    X86_AT(c, 0x104e3u);
    s16(c, 2, rd8((c.sbase[5] + (uint32_t)(c.r[1] + 0x1u))));
    // 0104e9  dec dx
    X86_AT(c, 0x104e9u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_dec(c, v, 2)); }
    // 0104eb  mov word ptr [edi + 0x3c], dx
    X86_AT(c, 0x104ebu);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x3Cu)), (c.r[2] & 0xFFFFu));
    // 0104ef  cmp al, 2
    X86_AT(c, 0x104efu);
    (void)x86_sub(c, g8(c, 0), 0x2u, 0, 1);
    // 0104f1  jb 0x104f6
    X86_AT(c, 0x104f1u);
    if (x86_cc(c, 2)) { goto L_104f6; }
    X86_TICK(c, 2);
    // 0104f3  add ecx, 2
    X86_AT(c, 0x104f3u);
    { uint32_t v = c.r[1]; c.r[1] = x86_add(c, v, 0x2u, 0, 4); }
L_104f6:
    X86_TICK(c, 4);
    // 0104f6  mov dword ptr [edi + 0x34], ecx
    X86_AT(c, 0x104f6u);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] + 0x34u)), c.r[1]);
    // 0104f9  mov word ptr [edi + 0x38], bx
    X86_AT(c, 0x104f9u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x38u)), (c.r[3] & 0xFFFFu));
L_104fd:
    X86_TICK(c, 12);
    // 0104fd  cmp byte ptr [edi + 0x4d], 0
    X86_AT(c, 0x104fdu);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x4Du))), 0x0u, 0, 1);
    // 010501  je 0x10508
    X86_AT(c, 0x10501u);
    if (x86_cc(c, 4)) { goto L_10508; }
    X86_TICK(c, 7);
    // 010503  call 0x10bd0
    X86_AT(c, 0x10503u);
    push32(c, 0x10508u); f_00010bd0(c); X86_RET(c, 0x10508u);
L_10508:
    X86_TICK(c, 16);
    // 010508  popfd 
    X86_AT(c, 0x10508u);
    x86_popfd(c, 4);
    // 010509  ret 
    X86_AT(c, 0x10509u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x1045bu, "ran off the end of a function");
}
void f_00010461(X86Cpu& c) {
    goto L_10461;
L_10338:
    X86_TICK(c, 12);
    // 010338  mov byte ptr [ebp + 0x21], 0xff
    X86_AT(c, 0x10338u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0x21u)), 0xFFu);
    // 01033c  ret 
    X86_AT(c, 0x1033cu);
    c.eip = pop32(c); return;
L_10461:
    X86_TICK(c, 7);
    // 010461  test al, al
    X86_AT(c, 0x10461u);
    (void)x86_logic(c, g8(c, 0) & g8(c, 0), 1);
    // 010463  je 0x1048a
    X86_AT(c, 0x10463u);
    if (x86_cc(c, 4)) { goto L_1048a; }
    X86_TICK(c, 23);
    // 010465  mov ecx, dword ptr [ebp + 8]
    X86_AT(c, 0x10465u);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 010468  mov gs, word ptr [ebp + 0x24]
    X86_AT(c, 0x10468u);
    x86_load_seg(c, 5, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0x24u))) & 0xFFFFu);
    // 01046b  mov dx, word ptr gs:[ecx]
    X86_AT(c, 0x1046bu);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[1]))));
    // 01046f  dec dh
    X86_AT(c, 0x1046fu);
    { uint32_t v = g8(c, 6); s8(c, 6, x86_dec(c, v, 1)); }
    // 010471  dec dl
    X86_AT(c, 0x10471u);
    { uint32_t v = g8(c, 2); s8(c, 2, x86_dec(c, v, 1)); }
    // 010473  cmp dl, 3
    X86_AT(c, 0x10473u);
    (void)x86_sub(c, g8(c, 2), 0x3u, 0, 1);
    // 010476  ja 0x10338
    X86_AT(c, 0x10476u);
    if (x86_cc(c, 7)) { X86_POLL(c, 0x10338u); goto L_10338; }
    X86_TICK(c, 7);
    // 01047c  cmp dh, 0x1f
    X86_AT(c, 0x1047cu);
    (void)x86_sub(c, g8(c, 6), 0x1Fu, 0, 1);
    // 01047f  ja 0x10338
    X86_AT(c, 0x1047fu);
    if (x86_cc(c, 7)) { X86_POLL(c, 0x10338u); goto L_10338; }
    X86_TICK(c, 2);
    // 010485  add dx, 0x101
    X86_AT(c, 0x10485u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, 0x101u, 0, 2)); }
L_1048a:
    X86_TICK(c, 20);
    // 01048a  pushfd 
    X86_AT(c, 0x1048au);
    push32(c, c.fl & 0x00FCFFFFu);
    // 01048b  cli 
    X86_AT(c, 0x1048bu);
    c.fl &= ~X86_IF;
    // 01048c  cmp byte ptr [edi + 0x4d], 0
    X86_AT(c, 0x1048cu);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x4Du))), 0x0u, 0, 1);
    // 010490  je 0x10497
    X86_AT(c, 0x10490u);
    if (x86_cc(c, 4)) { goto L_10497; }
    X86_TICK(c, 7);
    // 010492  call 0x10b75
    X86_AT(c, 0x10492u);
    push32(c, 0x10497u); f_00010b75(c); X86_RET(c, 0x10497u);
L_10497:
    X86_TICK(c, 27);
    // 010497  mov dx, word ptr [ebp + 0x18]
    X86_AT(c, 0x10497u);
    s16(c, 2, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0x18u))));
    // 01049b  movsx ax, dh
    X86_AT(c, 0x1049bu);
    s16(c, 0, (uint32_t)(int32_t)(int8_t)g8(c, 6));
    // 01049f  mov word ptr [edi + 0x49], ax
    X86_AT(c, 0x1049fu);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x49u)), (c.r[0] & 0xFFFFu));
    // 0104a3  movsx ax, dl
    X86_AT(c, 0x104a3u);
    s16(c, 0, (uint32_t)(int32_t)(int8_t)g8(c, 2));
    // 0104a7  mov word ptr [edi + 0x4b], ax
    X86_AT(c, 0x104a7u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x4Bu)), (c.r[0] & 0xFFFFu));
    // 0104ab  mov al, byte ptr [ebp + 0x20]
    X86_AT(c, 0x104abu);
    s8(c, 0, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x20u))));
    // 0104ae  mov byte ptr [edi + 0x4e], al
    X86_AT(c, 0x104aeu);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0x4Eu)), g8(c, 0));
    // 0104b1  cmp al, 0
    X86_AT(c, 0x104b1u);
    (void)x86_sub(c, g8(c, 0), 0x0u, 0, 1);
    // 0104b3  jne 0x104cb
    X86_AT(c, 0x104b3u);
    if (x86_cc(c, 5)) { goto L_104cb; }
    X86_TICK(c, 13);
    // 0104b5  mov dword ptr [edi + 0x34], 0x109eb
    X86_AT(c, 0x104b5u);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] + 0x34u)), 0x109EBu);
    // 0104bc  mov word ptr [edi + 0x38], 0x110
    X86_AT(c, 0x104bcu);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x38u)), 0x110u);
    // 0104c2  mov dword ptr [edi + 0x3a], 0xf000f
    X86_AT(c, 0x104c2u);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] + 0x3Au)), 0xF000Fu);
    // 0104c9  jmp 0x104fd
    X86_AT(c, 0x104c9u);
    goto L_104fd;
L_104cb:
    X86_TICK(c, 40);
    // 0104cb  mov ecx, dword ptr [ebp + 8]
    X86_AT(c, 0x104cbu);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0104ce  mov bx, word ptr [ebp + 0x24]
    X86_AT(c, 0x104ceu);
    s16(c, 3, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0x24u))));
    // 0104d2  mov gs, ebx
    X86_AT(c, 0x104d2u);
    x86_load_seg(c, 5, (c.r[3] & 0xFFFFu) & 0xFFFFu);
    // 0104d4  movzx dx, byte ptr gs:[ecx]
    X86_AT(c, 0x104d4u);
    s16(c, 2, rd8((c.sbase[5] + (uint32_t)(c.r[1]))));
    // 0104d9  shl dx, 3
    X86_AT(c, 0x104d9u);
    { uint32_t v = (c.r[2] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 4, v, 0x3u, 2, w); if (w) s16(c, 2, r); }
    // 0104dd  dec dx
    X86_AT(c, 0x104ddu);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_dec(c, v, 2)); }
    // 0104df  mov word ptr [edi + 0x3a], dx
    X86_AT(c, 0x104dfu);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x3Au)), (c.r[2] & 0xFFFFu));
    // 0104e3  movzx dx, byte ptr gs:[ecx + 1]
    X86_AT(c, 0x104e3u);
    s16(c, 2, rd8((c.sbase[5] + (uint32_t)(c.r[1] + 0x1u))));
    // 0104e9  dec dx
    X86_AT(c, 0x104e9u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_dec(c, v, 2)); }
    // 0104eb  mov word ptr [edi + 0x3c], dx
    X86_AT(c, 0x104ebu);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x3Cu)), (c.r[2] & 0xFFFFu));
    // 0104ef  cmp al, 2
    X86_AT(c, 0x104efu);
    (void)x86_sub(c, g8(c, 0), 0x2u, 0, 1);
    // 0104f1  jb 0x104f6
    X86_AT(c, 0x104f1u);
    if (x86_cc(c, 2)) { goto L_104f6; }
    X86_TICK(c, 2);
    // 0104f3  add ecx, 2
    X86_AT(c, 0x104f3u);
    { uint32_t v = c.r[1]; c.r[1] = x86_add(c, v, 0x2u, 0, 4); }
L_104f6:
    X86_TICK(c, 4);
    // 0104f6  mov dword ptr [edi + 0x34], ecx
    X86_AT(c, 0x104f6u);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] + 0x34u)), c.r[1]);
    // 0104f9  mov word ptr [edi + 0x38], bx
    X86_AT(c, 0x104f9u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x38u)), (c.r[3] & 0xFFFFu));
L_104fd:
    X86_TICK(c, 12);
    // 0104fd  cmp byte ptr [edi + 0x4d], 0
    X86_AT(c, 0x104fdu);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x4Du))), 0x0u, 0, 1);
    // 010501  je 0x10508
    X86_AT(c, 0x10501u);
    if (x86_cc(c, 4)) { goto L_10508; }
    X86_TICK(c, 7);
    // 010503  call 0x10bd0
    X86_AT(c, 0x10503u);
    push32(c, 0x10508u); f_00010bd0(c); X86_RET(c, 0x10508u);
L_10508:
    X86_TICK(c, 16);
    // 010508  popfd 
    X86_AT(c, 0x10508u);
    x86_popfd(c, 4);
    // 010509  ret 
    X86_AT(c, 0x10509u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x10461u, "ran off the end of a function");
}
void f_00010463(X86Cpu& c) {
    goto L_10463;
L_10338:
    X86_TICK(c, 12);
    // 010338  mov byte ptr [ebp + 0x21], 0xff
    X86_AT(c, 0x10338u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0x21u)), 0xFFu);
    // 01033c  ret 
    X86_AT(c, 0x1033cu);
    c.eip = pop32(c); return;
L_10463:
    X86_TICK(c, 5);
    // 010463  je 0x1048a
    X86_AT(c, 0x10463u);
    if (x86_cc(c, 4)) { goto L_1048a; }
    X86_TICK(c, 23);
    // 010465  mov ecx, dword ptr [ebp + 8]
    X86_AT(c, 0x10465u);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 010468  mov gs, word ptr [ebp + 0x24]
    X86_AT(c, 0x10468u);
    x86_load_seg(c, 5, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0x24u))) & 0xFFFFu);
    // 01046b  mov dx, word ptr gs:[ecx]
    X86_AT(c, 0x1046bu);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[1]))));
    // 01046f  dec dh
    X86_AT(c, 0x1046fu);
    { uint32_t v = g8(c, 6); s8(c, 6, x86_dec(c, v, 1)); }
    // 010471  dec dl
    X86_AT(c, 0x10471u);
    { uint32_t v = g8(c, 2); s8(c, 2, x86_dec(c, v, 1)); }
    // 010473  cmp dl, 3
    X86_AT(c, 0x10473u);
    (void)x86_sub(c, g8(c, 2), 0x3u, 0, 1);
    // 010476  ja 0x10338
    X86_AT(c, 0x10476u);
    if (x86_cc(c, 7)) { X86_POLL(c, 0x10338u); goto L_10338; }
    X86_TICK(c, 7);
    // 01047c  cmp dh, 0x1f
    X86_AT(c, 0x1047cu);
    (void)x86_sub(c, g8(c, 6), 0x1Fu, 0, 1);
    // 01047f  ja 0x10338
    X86_AT(c, 0x1047fu);
    if (x86_cc(c, 7)) { X86_POLL(c, 0x10338u); goto L_10338; }
    X86_TICK(c, 2);
    // 010485  add dx, 0x101
    X86_AT(c, 0x10485u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, 0x101u, 0, 2)); }
L_1048a:
    X86_TICK(c, 20);
    // 01048a  pushfd 
    X86_AT(c, 0x1048au);
    push32(c, c.fl & 0x00FCFFFFu);
    // 01048b  cli 
    X86_AT(c, 0x1048bu);
    c.fl &= ~X86_IF;
    // 01048c  cmp byte ptr [edi + 0x4d], 0
    X86_AT(c, 0x1048cu);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x4Du))), 0x0u, 0, 1);
    // 010490  je 0x10497
    X86_AT(c, 0x10490u);
    if (x86_cc(c, 4)) { goto L_10497; }
    X86_TICK(c, 7);
    // 010492  call 0x10b75
    X86_AT(c, 0x10492u);
    push32(c, 0x10497u); f_00010b75(c); X86_RET(c, 0x10497u);
L_10497:
    X86_TICK(c, 27);
    // 010497  mov dx, word ptr [ebp + 0x18]
    X86_AT(c, 0x10497u);
    s16(c, 2, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0x18u))));
    // 01049b  movsx ax, dh
    X86_AT(c, 0x1049bu);
    s16(c, 0, (uint32_t)(int32_t)(int8_t)g8(c, 6));
    // 01049f  mov word ptr [edi + 0x49], ax
    X86_AT(c, 0x1049fu);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x49u)), (c.r[0] & 0xFFFFu));
    // 0104a3  movsx ax, dl
    X86_AT(c, 0x104a3u);
    s16(c, 0, (uint32_t)(int32_t)(int8_t)g8(c, 2));
    // 0104a7  mov word ptr [edi + 0x4b], ax
    X86_AT(c, 0x104a7u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x4Bu)), (c.r[0] & 0xFFFFu));
    // 0104ab  mov al, byte ptr [ebp + 0x20]
    X86_AT(c, 0x104abu);
    s8(c, 0, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x20u))));
    // 0104ae  mov byte ptr [edi + 0x4e], al
    X86_AT(c, 0x104aeu);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0x4Eu)), g8(c, 0));
    // 0104b1  cmp al, 0
    X86_AT(c, 0x104b1u);
    (void)x86_sub(c, g8(c, 0), 0x0u, 0, 1);
    // 0104b3  jne 0x104cb
    X86_AT(c, 0x104b3u);
    if (x86_cc(c, 5)) { goto L_104cb; }
    X86_TICK(c, 13);
    // 0104b5  mov dword ptr [edi + 0x34], 0x109eb
    X86_AT(c, 0x104b5u);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] + 0x34u)), 0x109EBu);
    // 0104bc  mov word ptr [edi + 0x38], 0x110
    X86_AT(c, 0x104bcu);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x38u)), 0x110u);
    // 0104c2  mov dword ptr [edi + 0x3a], 0xf000f
    X86_AT(c, 0x104c2u);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] + 0x3Au)), 0xF000Fu);
    // 0104c9  jmp 0x104fd
    X86_AT(c, 0x104c9u);
    goto L_104fd;
L_104cb:
    X86_TICK(c, 40);
    // 0104cb  mov ecx, dword ptr [ebp + 8]
    X86_AT(c, 0x104cbu);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0104ce  mov bx, word ptr [ebp + 0x24]
    X86_AT(c, 0x104ceu);
    s16(c, 3, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0x24u))));
    // 0104d2  mov gs, ebx
    X86_AT(c, 0x104d2u);
    x86_load_seg(c, 5, (c.r[3] & 0xFFFFu) & 0xFFFFu);
    // 0104d4  movzx dx, byte ptr gs:[ecx]
    X86_AT(c, 0x104d4u);
    s16(c, 2, rd8((c.sbase[5] + (uint32_t)(c.r[1]))));
    // 0104d9  shl dx, 3
    X86_AT(c, 0x104d9u);
    { uint32_t v = (c.r[2] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 4, v, 0x3u, 2, w); if (w) s16(c, 2, r); }
    // 0104dd  dec dx
    X86_AT(c, 0x104ddu);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_dec(c, v, 2)); }
    // 0104df  mov word ptr [edi + 0x3a], dx
    X86_AT(c, 0x104dfu);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x3Au)), (c.r[2] & 0xFFFFu));
    // 0104e3  movzx dx, byte ptr gs:[ecx + 1]
    X86_AT(c, 0x104e3u);
    s16(c, 2, rd8((c.sbase[5] + (uint32_t)(c.r[1] + 0x1u))));
    // 0104e9  dec dx
    X86_AT(c, 0x104e9u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_dec(c, v, 2)); }
    // 0104eb  mov word ptr [edi + 0x3c], dx
    X86_AT(c, 0x104ebu);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x3Cu)), (c.r[2] & 0xFFFFu));
    // 0104ef  cmp al, 2
    X86_AT(c, 0x104efu);
    (void)x86_sub(c, g8(c, 0), 0x2u, 0, 1);
    // 0104f1  jb 0x104f6
    X86_AT(c, 0x104f1u);
    if (x86_cc(c, 2)) { goto L_104f6; }
    X86_TICK(c, 2);
    // 0104f3  add ecx, 2
    X86_AT(c, 0x104f3u);
    { uint32_t v = c.r[1]; c.r[1] = x86_add(c, v, 0x2u, 0, 4); }
L_104f6:
    X86_TICK(c, 4);
    // 0104f6  mov dword ptr [edi + 0x34], ecx
    X86_AT(c, 0x104f6u);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] + 0x34u)), c.r[1]);
    // 0104f9  mov word ptr [edi + 0x38], bx
    X86_AT(c, 0x104f9u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x38u)), (c.r[3] & 0xFFFFu));
L_104fd:
    X86_TICK(c, 12);
    // 0104fd  cmp byte ptr [edi + 0x4d], 0
    X86_AT(c, 0x104fdu);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x4Du))), 0x0u, 0, 1);
    // 010501  je 0x10508
    X86_AT(c, 0x10501u);
    if (x86_cc(c, 4)) { goto L_10508; }
    X86_TICK(c, 7);
    // 010503  call 0x10bd0
    X86_AT(c, 0x10503u);
    push32(c, 0x10508u); f_00010bd0(c); X86_RET(c, 0x10508u);
L_10508:
    X86_TICK(c, 16);
    // 010508  popfd 
    X86_AT(c, 0x10508u);
    x86_popfd(c, 4);
    // 010509  ret 
    X86_AT(c, 0x10509u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x10463u, "ran off the end of a function");
}
void f_00010465(X86Cpu& c) {
    goto L_10465;
L_10338:
    X86_TICK(c, 12);
    // 010338  mov byte ptr [ebp + 0x21], 0xff
    X86_AT(c, 0x10338u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0x21u)), 0xFFu);
    // 01033c  ret 
    X86_AT(c, 0x1033cu);
    c.eip = pop32(c); return;
L_10465:
    X86_TICK(c, 23);
    // 010465  mov ecx, dword ptr [ebp + 8]
    X86_AT(c, 0x10465u);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 010468  mov gs, word ptr [ebp + 0x24]
    X86_AT(c, 0x10468u);
    x86_load_seg(c, 5, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0x24u))) & 0xFFFFu);
    // 01046b  mov dx, word ptr gs:[ecx]
    X86_AT(c, 0x1046bu);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[1]))));
    // 01046f  dec dh
    X86_AT(c, 0x1046fu);
    { uint32_t v = g8(c, 6); s8(c, 6, x86_dec(c, v, 1)); }
    // 010471  dec dl
    X86_AT(c, 0x10471u);
    { uint32_t v = g8(c, 2); s8(c, 2, x86_dec(c, v, 1)); }
    // 010473  cmp dl, 3
    X86_AT(c, 0x10473u);
    (void)x86_sub(c, g8(c, 2), 0x3u, 0, 1);
    // 010476  ja 0x10338
    X86_AT(c, 0x10476u);
    if (x86_cc(c, 7)) { X86_POLL(c, 0x10338u); goto L_10338; }
    X86_TICK(c, 7);
    // 01047c  cmp dh, 0x1f
    X86_AT(c, 0x1047cu);
    (void)x86_sub(c, g8(c, 6), 0x1Fu, 0, 1);
    // 01047f  ja 0x10338
    X86_AT(c, 0x1047fu);
    if (x86_cc(c, 7)) { X86_POLL(c, 0x10338u); goto L_10338; }
    X86_TICK(c, 22);
    // 010485  add dx, 0x101
    X86_AT(c, 0x10485u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, 0x101u, 0, 2)); }
    // 01048a  pushfd 
    X86_AT(c, 0x1048au);
    push32(c, c.fl & 0x00FCFFFFu);
    // 01048b  cli 
    X86_AT(c, 0x1048bu);
    c.fl &= ~X86_IF;
    // 01048c  cmp byte ptr [edi + 0x4d], 0
    X86_AT(c, 0x1048cu);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x4Du))), 0x0u, 0, 1);
    // 010490  je 0x10497
    X86_AT(c, 0x10490u);
    if (x86_cc(c, 4)) { goto L_10497; }
    X86_TICK(c, 7);
    // 010492  call 0x10b75
    X86_AT(c, 0x10492u);
    push32(c, 0x10497u); f_00010b75(c); X86_RET(c, 0x10497u);
L_10497:
    X86_TICK(c, 27);
    // 010497  mov dx, word ptr [ebp + 0x18]
    X86_AT(c, 0x10497u);
    s16(c, 2, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0x18u))));
    // 01049b  movsx ax, dh
    X86_AT(c, 0x1049bu);
    s16(c, 0, (uint32_t)(int32_t)(int8_t)g8(c, 6));
    // 01049f  mov word ptr [edi + 0x49], ax
    X86_AT(c, 0x1049fu);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x49u)), (c.r[0] & 0xFFFFu));
    // 0104a3  movsx ax, dl
    X86_AT(c, 0x104a3u);
    s16(c, 0, (uint32_t)(int32_t)(int8_t)g8(c, 2));
    // 0104a7  mov word ptr [edi + 0x4b], ax
    X86_AT(c, 0x104a7u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x4Bu)), (c.r[0] & 0xFFFFu));
    // 0104ab  mov al, byte ptr [ebp + 0x20]
    X86_AT(c, 0x104abu);
    s8(c, 0, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x20u))));
    // 0104ae  mov byte ptr [edi + 0x4e], al
    X86_AT(c, 0x104aeu);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0x4Eu)), g8(c, 0));
    // 0104b1  cmp al, 0
    X86_AT(c, 0x104b1u);
    (void)x86_sub(c, g8(c, 0), 0x0u, 0, 1);
    // 0104b3  jne 0x104cb
    X86_AT(c, 0x104b3u);
    if (x86_cc(c, 5)) { goto L_104cb; }
    X86_TICK(c, 13);
    // 0104b5  mov dword ptr [edi + 0x34], 0x109eb
    X86_AT(c, 0x104b5u);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] + 0x34u)), 0x109EBu);
    // 0104bc  mov word ptr [edi + 0x38], 0x110
    X86_AT(c, 0x104bcu);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x38u)), 0x110u);
    // 0104c2  mov dword ptr [edi + 0x3a], 0xf000f
    X86_AT(c, 0x104c2u);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] + 0x3Au)), 0xF000Fu);
    // 0104c9  jmp 0x104fd
    X86_AT(c, 0x104c9u);
    goto L_104fd;
L_104cb:
    X86_TICK(c, 40);
    // 0104cb  mov ecx, dword ptr [ebp + 8]
    X86_AT(c, 0x104cbu);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0104ce  mov bx, word ptr [ebp + 0x24]
    X86_AT(c, 0x104ceu);
    s16(c, 3, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0x24u))));
    // 0104d2  mov gs, ebx
    X86_AT(c, 0x104d2u);
    x86_load_seg(c, 5, (c.r[3] & 0xFFFFu) & 0xFFFFu);
    // 0104d4  movzx dx, byte ptr gs:[ecx]
    X86_AT(c, 0x104d4u);
    s16(c, 2, rd8((c.sbase[5] + (uint32_t)(c.r[1]))));
    // 0104d9  shl dx, 3
    X86_AT(c, 0x104d9u);
    { uint32_t v = (c.r[2] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 4, v, 0x3u, 2, w); if (w) s16(c, 2, r); }
    // 0104dd  dec dx
    X86_AT(c, 0x104ddu);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_dec(c, v, 2)); }
    // 0104df  mov word ptr [edi + 0x3a], dx
    X86_AT(c, 0x104dfu);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x3Au)), (c.r[2] & 0xFFFFu));
    // 0104e3  movzx dx, byte ptr gs:[ecx + 1]
    X86_AT(c, 0x104e3u);
    s16(c, 2, rd8((c.sbase[5] + (uint32_t)(c.r[1] + 0x1u))));
    // 0104e9  dec dx
    X86_AT(c, 0x104e9u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_dec(c, v, 2)); }
    // 0104eb  mov word ptr [edi + 0x3c], dx
    X86_AT(c, 0x104ebu);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x3Cu)), (c.r[2] & 0xFFFFu));
    // 0104ef  cmp al, 2
    X86_AT(c, 0x104efu);
    (void)x86_sub(c, g8(c, 0), 0x2u, 0, 1);
    // 0104f1  jb 0x104f6
    X86_AT(c, 0x104f1u);
    if (x86_cc(c, 2)) { goto L_104f6; }
    X86_TICK(c, 2);
    // 0104f3  add ecx, 2
    X86_AT(c, 0x104f3u);
    { uint32_t v = c.r[1]; c.r[1] = x86_add(c, v, 0x2u, 0, 4); }
L_104f6:
    X86_TICK(c, 4);
    // 0104f6  mov dword ptr [edi + 0x34], ecx
    X86_AT(c, 0x104f6u);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] + 0x34u)), c.r[1]);
    // 0104f9  mov word ptr [edi + 0x38], bx
    X86_AT(c, 0x104f9u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x38u)), (c.r[3] & 0xFFFFu));
L_104fd:
    X86_TICK(c, 12);
    // 0104fd  cmp byte ptr [edi + 0x4d], 0
    X86_AT(c, 0x104fdu);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x4Du))), 0x0u, 0, 1);
    // 010501  je 0x10508
    X86_AT(c, 0x10501u);
    if (x86_cc(c, 4)) { goto L_10508; }
    X86_TICK(c, 7);
    // 010503  call 0x10bd0
    X86_AT(c, 0x10503u);
    push32(c, 0x10508u); f_00010bd0(c); X86_RET(c, 0x10508u);
L_10508:
    X86_TICK(c, 16);
    // 010508  popfd 
    X86_AT(c, 0x10508u);
    x86_popfd(c, 4);
    // 010509  ret 
    X86_AT(c, 0x10509u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x10465u, "ran off the end of a function");
}
void f_00010468(X86Cpu& c) {
    goto L_10468;
L_10338:
    X86_TICK(c, 12);
    // 010338  mov byte ptr [ebp + 0x21], 0xff
    X86_AT(c, 0x10338u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0x21u)), 0xFFu);
    // 01033c  ret 
    X86_AT(c, 0x1033cu);
    c.eip = pop32(c); return;
L_10468:
    X86_TICK(c, 19);
    // 010468  mov gs, word ptr [ebp + 0x24]
    X86_AT(c, 0x10468u);
    x86_load_seg(c, 5, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0x24u))) & 0xFFFFu);
    // 01046b  mov dx, word ptr gs:[ecx]
    X86_AT(c, 0x1046bu);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[1]))));
    // 01046f  dec dh
    X86_AT(c, 0x1046fu);
    { uint32_t v = g8(c, 6); s8(c, 6, x86_dec(c, v, 1)); }
    // 010471  dec dl
    X86_AT(c, 0x10471u);
    { uint32_t v = g8(c, 2); s8(c, 2, x86_dec(c, v, 1)); }
    // 010473  cmp dl, 3
    X86_AT(c, 0x10473u);
    (void)x86_sub(c, g8(c, 2), 0x3u, 0, 1);
    // 010476  ja 0x10338
    X86_AT(c, 0x10476u);
    if (x86_cc(c, 7)) { X86_POLL(c, 0x10338u); goto L_10338; }
    X86_TICK(c, 7);
    // 01047c  cmp dh, 0x1f
    X86_AT(c, 0x1047cu);
    (void)x86_sub(c, g8(c, 6), 0x1Fu, 0, 1);
    // 01047f  ja 0x10338
    X86_AT(c, 0x1047fu);
    if (x86_cc(c, 7)) { X86_POLL(c, 0x10338u); goto L_10338; }
    X86_TICK(c, 22);
    // 010485  add dx, 0x101
    X86_AT(c, 0x10485u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, 0x101u, 0, 2)); }
    // 01048a  pushfd 
    X86_AT(c, 0x1048au);
    push32(c, c.fl & 0x00FCFFFFu);
    // 01048b  cli 
    X86_AT(c, 0x1048bu);
    c.fl &= ~X86_IF;
    // 01048c  cmp byte ptr [edi + 0x4d], 0
    X86_AT(c, 0x1048cu);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x4Du))), 0x0u, 0, 1);
    // 010490  je 0x10497
    X86_AT(c, 0x10490u);
    if (x86_cc(c, 4)) { goto L_10497; }
    X86_TICK(c, 7);
    // 010492  call 0x10b75
    X86_AT(c, 0x10492u);
    push32(c, 0x10497u); f_00010b75(c); X86_RET(c, 0x10497u);
L_10497:
    X86_TICK(c, 27);
    // 010497  mov dx, word ptr [ebp + 0x18]
    X86_AT(c, 0x10497u);
    s16(c, 2, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0x18u))));
    // 01049b  movsx ax, dh
    X86_AT(c, 0x1049bu);
    s16(c, 0, (uint32_t)(int32_t)(int8_t)g8(c, 6));
    // 01049f  mov word ptr [edi + 0x49], ax
    X86_AT(c, 0x1049fu);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x49u)), (c.r[0] & 0xFFFFu));
    // 0104a3  movsx ax, dl
    X86_AT(c, 0x104a3u);
    s16(c, 0, (uint32_t)(int32_t)(int8_t)g8(c, 2));
    // 0104a7  mov word ptr [edi + 0x4b], ax
    X86_AT(c, 0x104a7u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x4Bu)), (c.r[0] & 0xFFFFu));
    // 0104ab  mov al, byte ptr [ebp + 0x20]
    X86_AT(c, 0x104abu);
    s8(c, 0, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x20u))));
    // 0104ae  mov byte ptr [edi + 0x4e], al
    X86_AT(c, 0x104aeu);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0x4Eu)), g8(c, 0));
    // 0104b1  cmp al, 0
    X86_AT(c, 0x104b1u);
    (void)x86_sub(c, g8(c, 0), 0x0u, 0, 1);
    // 0104b3  jne 0x104cb
    X86_AT(c, 0x104b3u);
    if (x86_cc(c, 5)) { goto L_104cb; }
    X86_TICK(c, 13);
    // 0104b5  mov dword ptr [edi + 0x34], 0x109eb
    X86_AT(c, 0x104b5u);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] + 0x34u)), 0x109EBu);
    // 0104bc  mov word ptr [edi + 0x38], 0x110
    X86_AT(c, 0x104bcu);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x38u)), 0x110u);
    // 0104c2  mov dword ptr [edi + 0x3a], 0xf000f
    X86_AT(c, 0x104c2u);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] + 0x3Au)), 0xF000Fu);
    // 0104c9  jmp 0x104fd
    X86_AT(c, 0x104c9u);
    goto L_104fd;
L_104cb:
    X86_TICK(c, 40);
    // 0104cb  mov ecx, dword ptr [ebp + 8]
    X86_AT(c, 0x104cbu);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0104ce  mov bx, word ptr [ebp + 0x24]
    X86_AT(c, 0x104ceu);
    s16(c, 3, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0x24u))));
    // 0104d2  mov gs, ebx
    X86_AT(c, 0x104d2u);
    x86_load_seg(c, 5, (c.r[3] & 0xFFFFu) & 0xFFFFu);
    // 0104d4  movzx dx, byte ptr gs:[ecx]
    X86_AT(c, 0x104d4u);
    s16(c, 2, rd8((c.sbase[5] + (uint32_t)(c.r[1]))));
    // 0104d9  shl dx, 3
    X86_AT(c, 0x104d9u);
    { uint32_t v = (c.r[2] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 4, v, 0x3u, 2, w); if (w) s16(c, 2, r); }
    // 0104dd  dec dx
    X86_AT(c, 0x104ddu);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_dec(c, v, 2)); }
    // 0104df  mov word ptr [edi + 0x3a], dx
    X86_AT(c, 0x104dfu);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x3Au)), (c.r[2] & 0xFFFFu));
    // 0104e3  movzx dx, byte ptr gs:[ecx + 1]
    X86_AT(c, 0x104e3u);
    s16(c, 2, rd8((c.sbase[5] + (uint32_t)(c.r[1] + 0x1u))));
    // 0104e9  dec dx
    X86_AT(c, 0x104e9u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_dec(c, v, 2)); }
    // 0104eb  mov word ptr [edi + 0x3c], dx
    X86_AT(c, 0x104ebu);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x3Cu)), (c.r[2] & 0xFFFFu));
    // 0104ef  cmp al, 2
    X86_AT(c, 0x104efu);
    (void)x86_sub(c, g8(c, 0), 0x2u, 0, 1);
    // 0104f1  jb 0x104f6
    X86_AT(c, 0x104f1u);
    if (x86_cc(c, 2)) { goto L_104f6; }
    X86_TICK(c, 2);
    // 0104f3  add ecx, 2
    X86_AT(c, 0x104f3u);
    { uint32_t v = c.r[1]; c.r[1] = x86_add(c, v, 0x2u, 0, 4); }
L_104f6:
    X86_TICK(c, 4);
    // 0104f6  mov dword ptr [edi + 0x34], ecx
    X86_AT(c, 0x104f6u);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] + 0x34u)), c.r[1]);
    // 0104f9  mov word ptr [edi + 0x38], bx
    X86_AT(c, 0x104f9u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x38u)), (c.r[3] & 0xFFFFu));
L_104fd:
    X86_TICK(c, 12);
    // 0104fd  cmp byte ptr [edi + 0x4d], 0
    X86_AT(c, 0x104fdu);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x4Du))), 0x0u, 0, 1);
    // 010501  je 0x10508
    X86_AT(c, 0x10501u);
    if (x86_cc(c, 4)) { goto L_10508; }
    X86_TICK(c, 7);
    // 010503  call 0x10bd0
    X86_AT(c, 0x10503u);
    push32(c, 0x10508u); f_00010bd0(c); X86_RET(c, 0x10508u);
L_10508:
    X86_TICK(c, 16);
    // 010508  popfd 
    X86_AT(c, 0x10508u);
    x86_popfd(c, 4);
    // 010509  ret 
    X86_AT(c, 0x10509u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x10468u, "ran off the end of a function");
}
void f_0001046b(X86Cpu& c) {
    goto L_1046b;
L_10338:
    X86_TICK(c, 12);
    // 010338  mov byte ptr [ebp + 0x21], 0xff
    X86_AT(c, 0x10338u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0x21u)), 0xFFu);
    // 01033c  ret 
    X86_AT(c, 0x1033cu);
    c.eip = pop32(c); return;
L_1046b:
    X86_TICK(c, 15);
    // 01046b  mov dx, word ptr gs:[ecx]
    X86_AT(c, 0x1046bu);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[1]))));
    // 01046f  dec dh
    X86_AT(c, 0x1046fu);
    { uint32_t v = g8(c, 6); s8(c, 6, x86_dec(c, v, 1)); }
    // 010471  dec dl
    X86_AT(c, 0x10471u);
    { uint32_t v = g8(c, 2); s8(c, 2, x86_dec(c, v, 1)); }
    // 010473  cmp dl, 3
    X86_AT(c, 0x10473u);
    (void)x86_sub(c, g8(c, 2), 0x3u, 0, 1);
    // 010476  ja 0x10338
    X86_AT(c, 0x10476u);
    if (x86_cc(c, 7)) { X86_POLL(c, 0x10338u); goto L_10338; }
    X86_TICK(c, 7);
    // 01047c  cmp dh, 0x1f
    X86_AT(c, 0x1047cu);
    (void)x86_sub(c, g8(c, 6), 0x1Fu, 0, 1);
    // 01047f  ja 0x10338
    X86_AT(c, 0x1047fu);
    if (x86_cc(c, 7)) { X86_POLL(c, 0x10338u); goto L_10338; }
    X86_TICK(c, 22);
    // 010485  add dx, 0x101
    X86_AT(c, 0x10485u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, 0x101u, 0, 2)); }
    // 01048a  pushfd 
    X86_AT(c, 0x1048au);
    push32(c, c.fl & 0x00FCFFFFu);
    // 01048b  cli 
    X86_AT(c, 0x1048bu);
    c.fl &= ~X86_IF;
    // 01048c  cmp byte ptr [edi + 0x4d], 0
    X86_AT(c, 0x1048cu);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x4Du))), 0x0u, 0, 1);
    // 010490  je 0x10497
    X86_AT(c, 0x10490u);
    if (x86_cc(c, 4)) { goto L_10497; }
    X86_TICK(c, 7);
    // 010492  call 0x10b75
    X86_AT(c, 0x10492u);
    push32(c, 0x10497u); f_00010b75(c); X86_RET(c, 0x10497u);
L_10497:
    X86_TICK(c, 27);
    // 010497  mov dx, word ptr [ebp + 0x18]
    X86_AT(c, 0x10497u);
    s16(c, 2, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0x18u))));
    // 01049b  movsx ax, dh
    X86_AT(c, 0x1049bu);
    s16(c, 0, (uint32_t)(int32_t)(int8_t)g8(c, 6));
    // 01049f  mov word ptr [edi + 0x49], ax
    X86_AT(c, 0x1049fu);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x49u)), (c.r[0] & 0xFFFFu));
    // 0104a3  movsx ax, dl
    X86_AT(c, 0x104a3u);
    s16(c, 0, (uint32_t)(int32_t)(int8_t)g8(c, 2));
    // 0104a7  mov word ptr [edi + 0x4b], ax
    X86_AT(c, 0x104a7u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x4Bu)), (c.r[0] & 0xFFFFu));
    // 0104ab  mov al, byte ptr [ebp + 0x20]
    X86_AT(c, 0x104abu);
    s8(c, 0, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x20u))));
    // 0104ae  mov byte ptr [edi + 0x4e], al
    X86_AT(c, 0x104aeu);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0x4Eu)), g8(c, 0));
    // 0104b1  cmp al, 0
    X86_AT(c, 0x104b1u);
    (void)x86_sub(c, g8(c, 0), 0x0u, 0, 1);
    // 0104b3  jne 0x104cb
    X86_AT(c, 0x104b3u);
    if (x86_cc(c, 5)) { goto L_104cb; }
    X86_TICK(c, 13);
    // 0104b5  mov dword ptr [edi + 0x34], 0x109eb
    X86_AT(c, 0x104b5u);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] + 0x34u)), 0x109EBu);
    // 0104bc  mov word ptr [edi + 0x38], 0x110
    X86_AT(c, 0x104bcu);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x38u)), 0x110u);
    // 0104c2  mov dword ptr [edi + 0x3a], 0xf000f
    X86_AT(c, 0x104c2u);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] + 0x3Au)), 0xF000Fu);
    // 0104c9  jmp 0x104fd
    X86_AT(c, 0x104c9u);
    goto L_104fd;
L_104cb:
    X86_TICK(c, 40);
    // 0104cb  mov ecx, dword ptr [ebp + 8]
    X86_AT(c, 0x104cbu);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0104ce  mov bx, word ptr [ebp + 0x24]
    X86_AT(c, 0x104ceu);
    s16(c, 3, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0x24u))));
    // 0104d2  mov gs, ebx
    X86_AT(c, 0x104d2u);
    x86_load_seg(c, 5, (c.r[3] & 0xFFFFu) & 0xFFFFu);
    // 0104d4  movzx dx, byte ptr gs:[ecx]
    X86_AT(c, 0x104d4u);
    s16(c, 2, rd8((c.sbase[5] + (uint32_t)(c.r[1]))));
    // 0104d9  shl dx, 3
    X86_AT(c, 0x104d9u);
    { uint32_t v = (c.r[2] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 4, v, 0x3u, 2, w); if (w) s16(c, 2, r); }
    // 0104dd  dec dx
    X86_AT(c, 0x104ddu);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_dec(c, v, 2)); }
    // 0104df  mov word ptr [edi + 0x3a], dx
    X86_AT(c, 0x104dfu);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x3Au)), (c.r[2] & 0xFFFFu));
    // 0104e3  movzx dx, byte ptr gs:[ecx + 1]
    X86_AT(c, 0x104e3u);
    s16(c, 2, rd8((c.sbase[5] + (uint32_t)(c.r[1] + 0x1u))));
    // 0104e9  dec dx
    X86_AT(c, 0x104e9u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_dec(c, v, 2)); }
    // 0104eb  mov word ptr [edi + 0x3c], dx
    X86_AT(c, 0x104ebu);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x3Cu)), (c.r[2] & 0xFFFFu));
    // 0104ef  cmp al, 2
    X86_AT(c, 0x104efu);
    (void)x86_sub(c, g8(c, 0), 0x2u, 0, 1);
    // 0104f1  jb 0x104f6
    X86_AT(c, 0x104f1u);
    if (x86_cc(c, 2)) { goto L_104f6; }
    X86_TICK(c, 2);
    // 0104f3  add ecx, 2
    X86_AT(c, 0x104f3u);
    { uint32_t v = c.r[1]; c.r[1] = x86_add(c, v, 0x2u, 0, 4); }
L_104f6:
    X86_TICK(c, 4);
    // 0104f6  mov dword ptr [edi + 0x34], ecx
    X86_AT(c, 0x104f6u);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] + 0x34u)), c.r[1]);
    // 0104f9  mov word ptr [edi + 0x38], bx
    X86_AT(c, 0x104f9u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x38u)), (c.r[3] & 0xFFFFu));
L_104fd:
    X86_TICK(c, 12);
    // 0104fd  cmp byte ptr [edi + 0x4d], 0
    X86_AT(c, 0x104fdu);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x4Du))), 0x0u, 0, 1);
    // 010501  je 0x10508
    X86_AT(c, 0x10501u);
    if (x86_cc(c, 4)) { goto L_10508; }
    X86_TICK(c, 7);
    // 010503  call 0x10bd0
    X86_AT(c, 0x10503u);
    push32(c, 0x10508u); f_00010bd0(c); X86_RET(c, 0x10508u);
L_10508:
    X86_TICK(c, 16);
    // 010508  popfd 
    X86_AT(c, 0x10508u);
    x86_popfd(c, 4);
    // 010509  ret 
    X86_AT(c, 0x10509u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x1046bu, "ran off the end of a function");
}
void f_0001046f(X86Cpu& c) {
    goto L_1046f;
L_10338:
    X86_TICK(c, 12);
    // 010338  mov byte ptr [ebp + 0x21], 0xff
    X86_AT(c, 0x10338u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0x21u)), 0xFFu);
    // 01033c  ret 
    X86_AT(c, 0x1033cu);
    c.eip = pop32(c); return;
L_1046f:
    X86_TICK(c, 11);
    // 01046f  dec dh
    X86_AT(c, 0x1046fu);
    { uint32_t v = g8(c, 6); s8(c, 6, x86_dec(c, v, 1)); }
    // 010471  dec dl
    X86_AT(c, 0x10471u);
    { uint32_t v = g8(c, 2); s8(c, 2, x86_dec(c, v, 1)); }
    // 010473  cmp dl, 3
    X86_AT(c, 0x10473u);
    (void)x86_sub(c, g8(c, 2), 0x3u, 0, 1);
    // 010476  ja 0x10338
    X86_AT(c, 0x10476u);
    if (x86_cc(c, 7)) { X86_POLL(c, 0x10338u); goto L_10338; }
    X86_TICK(c, 7);
    // 01047c  cmp dh, 0x1f
    X86_AT(c, 0x1047cu);
    (void)x86_sub(c, g8(c, 6), 0x1Fu, 0, 1);
    // 01047f  ja 0x10338
    X86_AT(c, 0x1047fu);
    if (x86_cc(c, 7)) { X86_POLL(c, 0x10338u); goto L_10338; }
    X86_TICK(c, 22);
    // 010485  add dx, 0x101
    X86_AT(c, 0x10485u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, 0x101u, 0, 2)); }
    // 01048a  pushfd 
    X86_AT(c, 0x1048au);
    push32(c, c.fl & 0x00FCFFFFu);
    // 01048b  cli 
    X86_AT(c, 0x1048bu);
    c.fl &= ~X86_IF;
    // 01048c  cmp byte ptr [edi + 0x4d], 0
    X86_AT(c, 0x1048cu);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x4Du))), 0x0u, 0, 1);
    // 010490  je 0x10497
    X86_AT(c, 0x10490u);
    if (x86_cc(c, 4)) { goto L_10497; }
    X86_TICK(c, 7);
    // 010492  call 0x10b75
    X86_AT(c, 0x10492u);
    push32(c, 0x10497u); f_00010b75(c); X86_RET(c, 0x10497u);
L_10497:
    X86_TICK(c, 27);
    // 010497  mov dx, word ptr [ebp + 0x18]
    X86_AT(c, 0x10497u);
    s16(c, 2, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0x18u))));
    // 01049b  movsx ax, dh
    X86_AT(c, 0x1049bu);
    s16(c, 0, (uint32_t)(int32_t)(int8_t)g8(c, 6));
    // 01049f  mov word ptr [edi + 0x49], ax
    X86_AT(c, 0x1049fu);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x49u)), (c.r[0] & 0xFFFFu));
    // 0104a3  movsx ax, dl
    X86_AT(c, 0x104a3u);
    s16(c, 0, (uint32_t)(int32_t)(int8_t)g8(c, 2));
    // 0104a7  mov word ptr [edi + 0x4b], ax
    X86_AT(c, 0x104a7u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x4Bu)), (c.r[0] & 0xFFFFu));
    // 0104ab  mov al, byte ptr [ebp + 0x20]
    X86_AT(c, 0x104abu);
    s8(c, 0, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x20u))));
    // 0104ae  mov byte ptr [edi + 0x4e], al
    X86_AT(c, 0x104aeu);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0x4Eu)), g8(c, 0));
    // 0104b1  cmp al, 0
    X86_AT(c, 0x104b1u);
    (void)x86_sub(c, g8(c, 0), 0x0u, 0, 1);
    // 0104b3  jne 0x104cb
    X86_AT(c, 0x104b3u);
    if (x86_cc(c, 5)) { goto L_104cb; }
    X86_TICK(c, 13);
    // 0104b5  mov dword ptr [edi + 0x34], 0x109eb
    X86_AT(c, 0x104b5u);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] + 0x34u)), 0x109EBu);
    // 0104bc  mov word ptr [edi + 0x38], 0x110
    X86_AT(c, 0x104bcu);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x38u)), 0x110u);
    // 0104c2  mov dword ptr [edi + 0x3a], 0xf000f
    X86_AT(c, 0x104c2u);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] + 0x3Au)), 0xF000Fu);
    // 0104c9  jmp 0x104fd
    X86_AT(c, 0x104c9u);
    goto L_104fd;
L_104cb:
    X86_TICK(c, 40);
    // 0104cb  mov ecx, dword ptr [ebp + 8]
    X86_AT(c, 0x104cbu);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0104ce  mov bx, word ptr [ebp + 0x24]
    X86_AT(c, 0x104ceu);
    s16(c, 3, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0x24u))));
    // 0104d2  mov gs, ebx
    X86_AT(c, 0x104d2u);
    x86_load_seg(c, 5, (c.r[3] & 0xFFFFu) & 0xFFFFu);
    // 0104d4  movzx dx, byte ptr gs:[ecx]
    X86_AT(c, 0x104d4u);
    s16(c, 2, rd8((c.sbase[5] + (uint32_t)(c.r[1]))));
    // 0104d9  shl dx, 3
    X86_AT(c, 0x104d9u);
    { uint32_t v = (c.r[2] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 4, v, 0x3u, 2, w); if (w) s16(c, 2, r); }
    // 0104dd  dec dx
    X86_AT(c, 0x104ddu);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_dec(c, v, 2)); }
    // 0104df  mov word ptr [edi + 0x3a], dx
    X86_AT(c, 0x104dfu);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x3Au)), (c.r[2] & 0xFFFFu));
    // 0104e3  movzx dx, byte ptr gs:[ecx + 1]
    X86_AT(c, 0x104e3u);
    s16(c, 2, rd8((c.sbase[5] + (uint32_t)(c.r[1] + 0x1u))));
    // 0104e9  dec dx
    X86_AT(c, 0x104e9u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_dec(c, v, 2)); }
    // 0104eb  mov word ptr [edi + 0x3c], dx
    X86_AT(c, 0x104ebu);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x3Cu)), (c.r[2] & 0xFFFFu));
    // 0104ef  cmp al, 2
    X86_AT(c, 0x104efu);
    (void)x86_sub(c, g8(c, 0), 0x2u, 0, 1);
    // 0104f1  jb 0x104f6
    X86_AT(c, 0x104f1u);
    if (x86_cc(c, 2)) { goto L_104f6; }
    X86_TICK(c, 2);
    // 0104f3  add ecx, 2
    X86_AT(c, 0x104f3u);
    { uint32_t v = c.r[1]; c.r[1] = x86_add(c, v, 0x2u, 0, 4); }
L_104f6:
    X86_TICK(c, 4);
    // 0104f6  mov dword ptr [edi + 0x34], ecx
    X86_AT(c, 0x104f6u);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] + 0x34u)), c.r[1]);
    // 0104f9  mov word ptr [edi + 0x38], bx
    X86_AT(c, 0x104f9u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x38u)), (c.r[3] & 0xFFFFu));
L_104fd:
    X86_TICK(c, 12);
    // 0104fd  cmp byte ptr [edi + 0x4d], 0
    X86_AT(c, 0x104fdu);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x4Du))), 0x0u, 0, 1);
    // 010501  je 0x10508
    X86_AT(c, 0x10501u);
    if (x86_cc(c, 4)) { goto L_10508; }
    X86_TICK(c, 7);
    // 010503  call 0x10bd0
    X86_AT(c, 0x10503u);
    push32(c, 0x10508u); f_00010bd0(c); X86_RET(c, 0x10508u);
L_10508:
    X86_TICK(c, 16);
    // 010508  popfd 
    X86_AT(c, 0x10508u);
    x86_popfd(c, 4);
    // 010509  ret 
    X86_AT(c, 0x10509u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x1046fu, "ran off the end of a function");
}
void f_00010471(X86Cpu& c) {
    goto L_10471;
L_10338:
    X86_TICK(c, 12);
    // 010338  mov byte ptr [ebp + 0x21], 0xff
    X86_AT(c, 0x10338u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0x21u)), 0xFFu);
    // 01033c  ret 
    X86_AT(c, 0x1033cu);
    c.eip = pop32(c); return;
L_10471:
    X86_TICK(c, 9);
    // 010471  dec dl
    X86_AT(c, 0x10471u);
    { uint32_t v = g8(c, 2); s8(c, 2, x86_dec(c, v, 1)); }
    // 010473  cmp dl, 3
    X86_AT(c, 0x10473u);
    (void)x86_sub(c, g8(c, 2), 0x3u, 0, 1);
    // 010476  ja 0x10338
    X86_AT(c, 0x10476u);
    if (x86_cc(c, 7)) { X86_POLL(c, 0x10338u); goto L_10338; }
    X86_TICK(c, 7);
    // 01047c  cmp dh, 0x1f
    X86_AT(c, 0x1047cu);
    (void)x86_sub(c, g8(c, 6), 0x1Fu, 0, 1);
    // 01047f  ja 0x10338
    X86_AT(c, 0x1047fu);
    if (x86_cc(c, 7)) { X86_POLL(c, 0x10338u); goto L_10338; }
    X86_TICK(c, 22);
    // 010485  add dx, 0x101
    X86_AT(c, 0x10485u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, 0x101u, 0, 2)); }
    // 01048a  pushfd 
    X86_AT(c, 0x1048au);
    push32(c, c.fl & 0x00FCFFFFu);
    // 01048b  cli 
    X86_AT(c, 0x1048bu);
    c.fl &= ~X86_IF;
    // 01048c  cmp byte ptr [edi + 0x4d], 0
    X86_AT(c, 0x1048cu);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x4Du))), 0x0u, 0, 1);
    // 010490  je 0x10497
    X86_AT(c, 0x10490u);
    if (x86_cc(c, 4)) { goto L_10497; }
    X86_TICK(c, 7);
    // 010492  call 0x10b75
    X86_AT(c, 0x10492u);
    push32(c, 0x10497u); f_00010b75(c); X86_RET(c, 0x10497u);
L_10497:
    X86_TICK(c, 27);
    // 010497  mov dx, word ptr [ebp + 0x18]
    X86_AT(c, 0x10497u);
    s16(c, 2, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0x18u))));
    // 01049b  movsx ax, dh
    X86_AT(c, 0x1049bu);
    s16(c, 0, (uint32_t)(int32_t)(int8_t)g8(c, 6));
    // 01049f  mov word ptr [edi + 0x49], ax
    X86_AT(c, 0x1049fu);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x49u)), (c.r[0] & 0xFFFFu));
    // 0104a3  movsx ax, dl
    X86_AT(c, 0x104a3u);
    s16(c, 0, (uint32_t)(int32_t)(int8_t)g8(c, 2));
    // 0104a7  mov word ptr [edi + 0x4b], ax
    X86_AT(c, 0x104a7u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x4Bu)), (c.r[0] & 0xFFFFu));
    // 0104ab  mov al, byte ptr [ebp + 0x20]
    X86_AT(c, 0x104abu);
    s8(c, 0, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x20u))));
    // 0104ae  mov byte ptr [edi + 0x4e], al
    X86_AT(c, 0x104aeu);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0x4Eu)), g8(c, 0));
    // 0104b1  cmp al, 0
    X86_AT(c, 0x104b1u);
    (void)x86_sub(c, g8(c, 0), 0x0u, 0, 1);
    // 0104b3  jne 0x104cb
    X86_AT(c, 0x104b3u);
    if (x86_cc(c, 5)) { goto L_104cb; }
    X86_TICK(c, 13);
    // 0104b5  mov dword ptr [edi + 0x34], 0x109eb
    X86_AT(c, 0x104b5u);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] + 0x34u)), 0x109EBu);
    // 0104bc  mov word ptr [edi + 0x38], 0x110
    X86_AT(c, 0x104bcu);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x38u)), 0x110u);
    // 0104c2  mov dword ptr [edi + 0x3a], 0xf000f
    X86_AT(c, 0x104c2u);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] + 0x3Au)), 0xF000Fu);
    // 0104c9  jmp 0x104fd
    X86_AT(c, 0x104c9u);
    goto L_104fd;
L_104cb:
    X86_TICK(c, 40);
    // 0104cb  mov ecx, dword ptr [ebp + 8]
    X86_AT(c, 0x104cbu);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0104ce  mov bx, word ptr [ebp + 0x24]
    X86_AT(c, 0x104ceu);
    s16(c, 3, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0x24u))));
    // 0104d2  mov gs, ebx
    X86_AT(c, 0x104d2u);
    x86_load_seg(c, 5, (c.r[3] & 0xFFFFu) & 0xFFFFu);
    // 0104d4  movzx dx, byte ptr gs:[ecx]
    X86_AT(c, 0x104d4u);
    s16(c, 2, rd8((c.sbase[5] + (uint32_t)(c.r[1]))));
    // 0104d9  shl dx, 3
    X86_AT(c, 0x104d9u);
    { uint32_t v = (c.r[2] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 4, v, 0x3u, 2, w); if (w) s16(c, 2, r); }
    // 0104dd  dec dx
    X86_AT(c, 0x104ddu);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_dec(c, v, 2)); }
    // 0104df  mov word ptr [edi + 0x3a], dx
    X86_AT(c, 0x104dfu);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x3Au)), (c.r[2] & 0xFFFFu));
    // 0104e3  movzx dx, byte ptr gs:[ecx + 1]
    X86_AT(c, 0x104e3u);
    s16(c, 2, rd8((c.sbase[5] + (uint32_t)(c.r[1] + 0x1u))));
    // 0104e9  dec dx
    X86_AT(c, 0x104e9u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_dec(c, v, 2)); }
    // 0104eb  mov word ptr [edi + 0x3c], dx
    X86_AT(c, 0x104ebu);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x3Cu)), (c.r[2] & 0xFFFFu));
    // 0104ef  cmp al, 2
    X86_AT(c, 0x104efu);
    (void)x86_sub(c, g8(c, 0), 0x2u, 0, 1);
    // 0104f1  jb 0x104f6
    X86_AT(c, 0x104f1u);
    if (x86_cc(c, 2)) { goto L_104f6; }
    X86_TICK(c, 2);
    // 0104f3  add ecx, 2
    X86_AT(c, 0x104f3u);
    { uint32_t v = c.r[1]; c.r[1] = x86_add(c, v, 0x2u, 0, 4); }
L_104f6:
    X86_TICK(c, 4);
    // 0104f6  mov dword ptr [edi + 0x34], ecx
    X86_AT(c, 0x104f6u);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] + 0x34u)), c.r[1]);
    // 0104f9  mov word ptr [edi + 0x38], bx
    X86_AT(c, 0x104f9u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x38u)), (c.r[3] & 0xFFFFu));
L_104fd:
    X86_TICK(c, 12);
    // 0104fd  cmp byte ptr [edi + 0x4d], 0
    X86_AT(c, 0x104fdu);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x4Du))), 0x0u, 0, 1);
    // 010501  je 0x10508
    X86_AT(c, 0x10501u);
    if (x86_cc(c, 4)) { goto L_10508; }
    X86_TICK(c, 7);
    // 010503  call 0x10bd0
    X86_AT(c, 0x10503u);
    push32(c, 0x10508u); f_00010bd0(c); X86_RET(c, 0x10508u);
L_10508:
    X86_TICK(c, 16);
    // 010508  popfd 
    X86_AT(c, 0x10508u);
    x86_popfd(c, 4);
    // 010509  ret 
    X86_AT(c, 0x10509u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x10471u, "ran off the end of a function");
}
void f_00010473(X86Cpu& c) {
    goto L_10473;
L_10338:
    X86_TICK(c, 12);
    // 010338  mov byte ptr [ebp + 0x21], 0xff
    X86_AT(c, 0x10338u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0x21u)), 0xFFu);
    // 01033c  ret 
    X86_AT(c, 0x1033cu);
    c.eip = pop32(c); return;
L_10473:
    X86_TICK(c, 7);
    // 010473  cmp dl, 3
    X86_AT(c, 0x10473u);
    (void)x86_sub(c, g8(c, 2), 0x3u, 0, 1);
    // 010476  ja 0x10338
    X86_AT(c, 0x10476u);
    if (x86_cc(c, 7)) { X86_POLL(c, 0x10338u); goto L_10338; }
    X86_TICK(c, 7);
    // 01047c  cmp dh, 0x1f
    X86_AT(c, 0x1047cu);
    (void)x86_sub(c, g8(c, 6), 0x1Fu, 0, 1);
    // 01047f  ja 0x10338
    X86_AT(c, 0x1047fu);
    if (x86_cc(c, 7)) { X86_POLL(c, 0x10338u); goto L_10338; }
    X86_TICK(c, 22);
    // 010485  add dx, 0x101
    X86_AT(c, 0x10485u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, 0x101u, 0, 2)); }
    // 01048a  pushfd 
    X86_AT(c, 0x1048au);
    push32(c, c.fl & 0x00FCFFFFu);
    // 01048b  cli 
    X86_AT(c, 0x1048bu);
    c.fl &= ~X86_IF;
    // 01048c  cmp byte ptr [edi + 0x4d], 0
    X86_AT(c, 0x1048cu);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x4Du))), 0x0u, 0, 1);
    // 010490  je 0x10497
    X86_AT(c, 0x10490u);
    if (x86_cc(c, 4)) { goto L_10497; }
    X86_TICK(c, 7);
    // 010492  call 0x10b75
    X86_AT(c, 0x10492u);
    push32(c, 0x10497u); f_00010b75(c); X86_RET(c, 0x10497u);
L_10497:
    X86_TICK(c, 27);
    // 010497  mov dx, word ptr [ebp + 0x18]
    X86_AT(c, 0x10497u);
    s16(c, 2, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0x18u))));
    // 01049b  movsx ax, dh
    X86_AT(c, 0x1049bu);
    s16(c, 0, (uint32_t)(int32_t)(int8_t)g8(c, 6));
    // 01049f  mov word ptr [edi + 0x49], ax
    X86_AT(c, 0x1049fu);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x49u)), (c.r[0] & 0xFFFFu));
    // 0104a3  movsx ax, dl
    X86_AT(c, 0x104a3u);
    s16(c, 0, (uint32_t)(int32_t)(int8_t)g8(c, 2));
    // 0104a7  mov word ptr [edi + 0x4b], ax
    X86_AT(c, 0x104a7u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x4Bu)), (c.r[0] & 0xFFFFu));
    // 0104ab  mov al, byte ptr [ebp + 0x20]
    X86_AT(c, 0x104abu);
    s8(c, 0, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x20u))));
    // 0104ae  mov byte ptr [edi + 0x4e], al
    X86_AT(c, 0x104aeu);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0x4Eu)), g8(c, 0));
    // 0104b1  cmp al, 0
    X86_AT(c, 0x104b1u);
    (void)x86_sub(c, g8(c, 0), 0x0u, 0, 1);
    // 0104b3  jne 0x104cb
    X86_AT(c, 0x104b3u);
    if (x86_cc(c, 5)) { goto L_104cb; }
    X86_TICK(c, 13);
    // 0104b5  mov dword ptr [edi + 0x34], 0x109eb
    X86_AT(c, 0x104b5u);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] + 0x34u)), 0x109EBu);
    // 0104bc  mov word ptr [edi + 0x38], 0x110
    X86_AT(c, 0x104bcu);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x38u)), 0x110u);
    // 0104c2  mov dword ptr [edi + 0x3a], 0xf000f
    X86_AT(c, 0x104c2u);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] + 0x3Au)), 0xF000Fu);
    // 0104c9  jmp 0x104fd
    X86_AT(c, 0x104c9u);
    goto L_104fd;
L_104cb:
    X86_TICK(c, 40);
    // 0104cb  mov ecx, dword ptr [ebp + 8]
    X86_AT(c, 0x104cbu);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0104ce  mov bx, word ptr [ebp + 0x24]
    X86_AT(c, 0x104ceu);
    s16(c, 3, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0x24u))));
    // 0104d2  mov gs, ebx
    X86_AT(c, 0x104d2u);
    x86_load_seg(c, 5, (c.r[3] & 0xFFFFu) & 0xFFFFu);
    // 0104d4  movzx dx, byte ptr gs:[ecx]
    X86_AT(c, 0x104d4u);
    s16(c, 2, rd8((c.sbase[5] + (uint32_t)(c.r[1]))));
    // 0104d9  shl dx, 3
    X86_AT(c, 0x104d9u);
    { uint32_t v = (c.r[2] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 4, v, 0x3u, 2, w); if (w) s16(c, 2, r); }
    // 0104dd  dec dx
    X86_AT(c, 0x104ddu);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_dec(c, v, 2)); }
    // 0104df  mov word ptr [edi + 0x3a], dx
    X86_AT(c, 0x104dfu);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x3Au)), (c.r[2] & 0xFFFFu));
    // 0104e3  movzx dx, byte ptr gs:[ecx + 1]
    X86_AT(c, 0x104e3u);
    s16(c, 2, rd8((c.sbase[5] + (uint32_t)(c.r[1] + 0x1u))));
    // 0104e9  dec dx
    X86_AT(c, 0x104e9u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_dec(c, v, 2)); }
    // 0104eb  mov word ptr [edi + 0x3c], dx
    X86_AT(c, 0x104ebu);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x3Cu)), (c.r[2] & 0xFFFFu));
    // 0104ef  cmp al, 2
    X86_AT(c, 0x104efu);
    (void)x86_sub(c, g8(c, 0), 0x2u, 0, 1);
    // 0104f1  jb 0x104f6
    X86_AT(c, 0x104f1u);
    if (x86_cc(c, 2)) { goto L_104f6; }
    X86_TICK(c, 2);
    // 0104f3  add ecx, 2
    X86_AT(c, 0x104f3u);
    { uint32_t v = c.r[1]; c.r[1] = x86_add(c, v, 0x2u, 0, 4); }
L_104f6:
    X86_TICK(c, 4);
    // 0104f6  mov dword ptr [edi + 0x34], ecx
    X86_AT(c, 0x104f6u);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] + 0x34u)), c.r[1]);
    // 0104f9  mov word ptr [edi + 0x38], bx
    X86_AT(c, 0x104f9u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x38u)), (c.r[3] & 0xFFFFu));
L_104fd:
    X86_TICK(c, 12);
    // 0104fd  cmp byte ptr [edi + 0x4d], 0
    X86_AT(c, 0x104fdu);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x4Du))), 0x0u, 0, 1);
    // 010501  je 0x10508
    X86_AT(c, 0x10501u);
    if (x86_cc(c, 4)) { goto L_10508; }
    X86_TICK(c, 7);
    // 010503  call 0x10bd0
    X86_AT(c, 0x10503u);
    push32(c, 0x10508u); f_00010bd0(c); X86_RET(c, 0x10508u);
L_10508:
    X86_TICK(c, 16);
    // 010508  popfd 
    X86_AT(c, 0x10508u);
    x86_popfd(c, 4);
    // 010509  ret 
    X86_AT(c, 0x10509u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x10473u, "ran off the end of a function");
}
void f_00010476(X86Cpu& c) {
    goto L_10476;
L_10338:
    X86_TICK(c, 12);
    // 010338  mov byte ptr [ebp + 0x21], 0xff
    X86_AT(c, 0x10338u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0x21u)), 0xFFu);
    // 01033c  ret 
    X86_AT(c, 0x1033cu);
    c.eip = pop32(c); return;
L_10476:
    X86_TICK(c, 5);
    // 010476  ja 0x10338
    X86_AT(c, 0x10476u);
    if (x86_cc(c, 7)) { X86_POLL(c, 0x10338u); goto L_10338; }
    X86_TICK(c, 7);
    // 01047c  cmp dh, 0x1f
    X86_AT(c, 0x1047cu);
    (void)x86_sub(c, g8(c, 6), 0x1Fu, 0, 1);
    // 01047f  ja 0x10338
    X86_AT(c, 0x1047fu);
    if (x86_cc(c, 7)) { X86_POLL(c, 0x10338u); goto L_10338; }
    X86_TICK(c, 22);
    // 010485  add dx, 0x101
    X86_AT(c, 0x10485u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, 0x101u, 0, 2)); }
    // 01048a  pushfd 
    X86_AT(c, 0x1048au);
    push32(c, c.fl & 0x00FCFFFFu);
    // 01048b  cli 
    X86_AT(c, 0x1048bu);
    c.fl &= ~X86_IF;
    // 01048c  cmp byte ptr [edi + 0x4d], 0
    X86_AT(c, 0x1048cu);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x4Du))), 0x0u, 0, 1);
    // 010490  je 0x10497
    X86_AT(c, 0x10490u);
    if (x86_cc(c, 4)) { goto L_10497; }
    X86_TICK(c, 7);
    // 010492  call 0x10b75
    X86_AT(c, 0x10492u);
    push32(c, 0x10497u); f_00010b75(c); X86_RET(c, 0x10497u);
L_10497:
    X86_TICK(c, 27);
    // 010497  mov dx, word ptr [ebp + 0x18]
    X86_AT(c, 0x10497u);
    s16(c, 2, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0x18u))));
    // 01049b  movsx ax, dh
    X86_AT(c, 0x1049bu);
    s16(c, 0, (uint32_t)(int32_t)(int8_t)g8(c, 6));
    // 01049f  mov word ptr [edi + 0x49], ax
    X86_AT(c, 0x1049fu);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x49u)), (c.r[0] & 0xFFFFu));
    // 0104a3  movsx ax, dl
    X86_AT(c, 0x104a3u);
    s16(c, 0, (uint32_t)(int32_t)(int8_t)g8(c, 2));
    // 0104a7  mov word ptr [edi + 0x4b], ax
    X86_AT(c, 0x104a7u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x4Bu)), (c.r[0] & 0xFFFFu));
    // 0104ab  mov al, byte ptr [ebp + 0x20]
    X86_AT(c, 0x104abu);
    s8(c, 0, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x20u))));
    // 0104ae  mov byte ptr [edi + 0x4e], al
    X86_AT(c, 0x104aeu);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0x4Eu)), g8(c, 0));
    // 0104b1  cmp al, 0
    X86_AT(c, 0x104b1u);
    (void)x86_sub(c, g8(c, 0), 0x0u, 0, 1);
    // 0104b3  jne 0x104cb
    X86_AT(c, 0x104b3u);
    if (x86_cc(c, 5)) { goto L_104cb; }
    X86_TICK(c, 13);
    // 0104b5  mov dword ptr [edi + 0x34], 0x109eb
    X86_AT(c, 0x104b5u);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] + 0x34u)), 0x109EBu);
    // 0104bc  mov word ptr [edi + 0x38], 0x110
    X86_AT(c, 0x104bcu);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x38u)), 0x110u);
    // 0104c2  mov dword ptr [edi + 0x3a], 0xf000f
    X86_AT(c, 0x104c2u);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] + 0x3Au)), 0xF000Fu);
    // 0104c9  jmp 0x104fd
    X86_AT(c, 0x104c9u);
    goto L_104fd;
L_104cb:
    X86_TICK(c, 40);
    // 0104cb  mov ecx, dword ptr [ebp + 8]
    X86_AT(c, 0x104cbu);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0104ce  mov bx, word ptr [ebp + 0x24]
    X86_AT(c, 0x104ceu);
    s16(c, 3, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0x24u))));
    // 0104d2  mov gs, ebx
    X86_AT(c, 0x104d2u);
    x86_load_seg(c, 5, (c.r[3] & 0xFFFFu) & 0xFFFFu);
    // 0104d4  movzx dx, byte ptr gs:[ecx]
    X86_AT(c, 0x104d4u);
    s16(c, 2, rd8((c.sbase[5] + (uint32_t)(c.r[1]))));
    // 0104d9  shl dx, 3
    X86_AT(c, 0x104d9u);
    { uint32_t v = (c.r[2] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 4, v, 0x3u, 2, w); if (w) s16(c, 2, r); }
    // 0104dd  dec dx
    X86_AT(c, 0x104ddu);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_dec(c, v, 2)); }
    // 0104df  mov word ptr [edi + 0x3a], dx
    X86_AT(c, 0x104dfu);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x3Au)), (c.r[2] & 0xFFFFu));
    // 0104e3  movzx dx, byte ptr gs:[ecx + 1]
    X86_AT(c, 0x104e3u);
    s16(c, 2, rd8((c.sbase[5] + (uint32_t)(c.r[1] + 0x1u))));
    // 0104e9  dec dx
    X86_AT(c, 0x104e9u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_dec(c, v, 2)); }
    // 0104eb  mov word ptr [edi + 0x3c], dx
    X86_AT(c, 0x104ebu);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x3Cu)), (c.r[2] & 0xFFFFu));
    // 0104ef  cmp al, 2
    X86_AT(c, 0x104efu);
    (void)x86_sub(c, g8(c, 0), 0x2u, 0, 1);
    // 0104f1  jb 0x104f6
    X86_AT(c, 0x104f1u);
    if (x86_cc(c, 2)) { goto L_104f6; }
    X86_TICK(c, 2);
    // 0104f3  add ecx, 2
    X86_AT(c, 0x104f3u);
    { uint32_t v = c.r[1]; c.r[1] = x86_add(c, v, 0x2u, 0, 4); }
L_104f6:
    X86_TICK(c, 4);
    // 0104f6  mov dword ptr [edi + 0x34], ecx
    X86_AT(c, 0x104f6u);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] + 0x34u)), c.r[1]);
    // 0104f9  mov word ptr [edi + 0x38], bx
    X86_AT(c, 0x104f9u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x38u)), (c.r[3] & 0xFFFFu));
L_104fd:
    X86_TICK(c, 12);
    // 0104fd  cmp byte ptr [edi + 0x4d], 0
    X86_AT(c, 0x104fdu);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x4Du))), 0x0u, 0, 1);
    // 010501  je 0x10508
    X86_AT(c, 0x10501u);
    if (x86_cc(c, 4)) { goto L_10508; }
    X86_TICK(c, 7);
    // 010503  call 0x10bd0
    X86_AT(c, 0x10503u);
    push32(c, 0x10508u); f_00010bd0(c); X86_RET(c, 0x10508u);
L_10508:
    X86_TICK(c, 16);
    // 010508  popfd 
    X86_AT(c, 0x10508u);
    x86_popfd(c, 4);
    // 010509  ret 
    X86_AT(c, 0x10509u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x10476u, "ran off the end of a function");
}
void f_0001047c(X86Cpu& c) {
    goto L_1047c;
L_10338:
    X86_TICK(c, 12);
    // 010338  mov byte ptr [ebp + 0x21], 0xff
    X86_AT(c, 0x10338u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0x21u)), 0xFFu);
    // 01033c  ret 
    X86_AT(c, 0x1033cu);
    c.eip = pop32(c); return;
L_1047c:
    X86_TICK(c, 7);
    // 01047c  cmp dh, 0x1f
    X86_AT(c, 0x1047cu);
    (void)x86_sub(c, g8(c, 6), 0x1Fu, 0, 1);
    // 01047f  ja 0x10338
    X86_AT(c, 0x1047fu);
    if (x86_cc(c, 7)) { X86_POLL(c, 0x10338u); goto L_10338; }
    X86_TICK(c, 22);
    // 010485  add dx, 0x101
    X86_AT(c, 0x10485u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, 0x101u, 0, 2)); }
    // 01048a  pushfd 
    X86_AT(c, 0x1048au);
    push32(c, c.fl & 0x00FCFFFFu);
    // 01048b  cli 
    X86_AT(c, 0x1048bu);
    c.fl &= ~X86_IF;
    // 01048c  cmp byte ptr [edi + 0x4d], 0
    X86_AT(c, 0x1048cu);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x4Du))), 0x0u, 0, 1);
    // 010490  je 0x10497
    X86_AT(c, 0x10490u);
    if (x86_cc(c, 4)) { goto L_10497; }
    X86_TICK(c, 7);
    // 010492  call 0x10b75
    X86_AT(c, 0x10492u);
    push32(c, 0x10497u); f_00010b75(c); X86_RET(c, 0x10497u);
L_10497:
    X86_TICK(c, 27);
    // 010497  mov dx, word ptr [ebp + 0x18]
    X86_AT(c, 0x10497u);
    s16(c, 2, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0x18u))));
    // 01049b  movsx ax, dh
    X86_AT(c, 0x1049bu);
    s16(c, 0, (uint32_t)(int32_t)(int8_t)g8(c, 6));
    // 01049f  mov word ptr [edi + 0x49], ax
    X86_AT(c, 0x1049fu);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x49u)), (c.r[0] & 0xFFFFu));
    // 0104a3  movsx ax, dl
    X86_AT(c, 0x104a3u);
    s16(c, 0, (uint32_t)(int32_t)(int8_t)g8(c, 2));
    // 0104a7  mov word ptr [edi + 0x4b], ax
    X86_AT(c, 0x104a7u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x4Bu)), (c.r[0] & 0xFFFFu));
    // 0104ab  mov al, byte ptr [ebp + 0x20]
    X86_AT(c, 0x104abu);
    s8(c, 0, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x20u))));
    // 0104ae  mov byte ptr [edi + 0x4e], al
    X86_AT(c, 0x104aeu);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0x4Eu)), g8(c, 0));
    // 0104b1  cmp al, 0
    X86_AT(c, 0x104b1u);
    (void)x86_sub(c, g8(c, 0), 0x0u, 0, 1);
    // 0104b3  jne 0x104cb
    X86_AT(c, 0x104b3u);
    if (x86_cc(c, 5)) { goto L_104cb; }
    X86_TICK(c, 13);
    // 0104b5  mov dword ptr [edi + 0x34], 0x109eb
    X86_AT(c, 0x104b5u);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] + 0x34u)), 0x109EBu);
    // 0104bc  mov word ptr [edi + 0x38], 0x110
    X86_AT(c, 0x104bcu);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x38u)), 0x110u);
    // 0104c2  mov dword ptr [edi + 0x3a], 0xf000f
    X86_AT(c, 0x104c2u);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] + 0x3Au)), 0xF000Fu);
    // 0104c9  jmp 0x104fd
    X86_AT(c, 0x104c9u);
    goto L_104fd;
L_104cb:
    X86_TICK(c, 40);
    // 0104cb  mov ecx, dword ptr [ebp + 8]
    X86_AT(c, 0x104cbu);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0104ce  mov bx, word ptr [ebp + 0x24]
    X86_AT(c, 0x104ceu);
    s16(c, 3, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0x24u))));
    // 0104d2  mov gs, ebx
    X86_AT(c, 0x104d2u);
    x86_load_seg(c, 5, (c.r[3] & 0xFFFFu) & 0xFFFFu);
    // 0104d4  movzx dx, byte ptr gs:[ecx]
    X86_AT(c, 0x104d4u);
    s16(c, 2, rd8((c.sbase[5] + (uint32_t)(c.r[1]))));
    // 0104d9  shl dx, 3
    X86_AT(c, 0x104d9u);
    { uint32_t v = (c.r[2] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 4, v, 0x3u, 2, w); if (w) s16(c, 2, r); }
    // 0104dd  dec dx
    X86_AT(c, 0x104ddu);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_dec(c, v, 2)); }
    // 0104df  mov word ptr [edi + 0x3a], dx
    X86_AT(c, 0x104dfu);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x3Au)), (c.r[2] & 0xFFFFu));
    // 0104e3  movzx dx, byte ptr gs:[ecx + 1]
    X86_AT(c, 0x104e3u);
    s16(c, 2, rd8((c.sbase[5] + (uint32_t)(c.r[1] + 0x1u))));
    // 0104e9  dec dx
    X86_AT(c, 0x104e9u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_dec(c, v, 2)); }
    // 0104eb  mov word ptr [edi + 0x3c], dx
    X86_AT(c, 0x104ebu);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x3Cu)), (c.r[2] & 0xFFFFu));
    // 0104ef  cmp al, 2
    X86_AT(c, 0x104efu);
    (void)x86_sub(c, g8(c, 0), 0x2u, 0, 1);
    // 0104f1  jb 0x104f6
    X86_AT(c, 0x104f1u);
    if (x86_cc(c, 2)) { goto L_104f6; }
    X86_TICK(c, 2);
    // 0104f3  add ecx, 2
    X86_AT(c, 0x104f3u);
    { uint32_t v = c.r[1]; c.r[1] = x86_add(c, v, 0x2u, 0, 4); }
L_104f6:
    X86_TICK(c, 4);
    // 0104f6  mov dword ptr [edi + 0x34], ecx
    X86_AT(c, 0x104f6u);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] + 0x34u)), c.r[1]);
    // 0104f9  mov word ptr [edi + 0x38], bx
    X86_AT(c, 0x104f9u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x38u)), (c.r[3] & 0xFFFFu));
L_104fd:
    X86_TICK(c, 12);
    // 0104fd  cmp byte ptr [edi + 0x4d], 0
    X86_AT(c, 0x104fdu);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x4Du))), 0x0u, 0, 1);
    // 010501  je 0x10508
    X86_AT(c, 0x10501u);
    if (x86_cc(c, 4)) { goto L_10508; }
    X86_TICK(c, 7);
    // 010503  call 0x10bd0
    X86_AT(c, 0x10503u);
    push32(c, 0x10508u); f_00010bd0(c); X86_RET(c, 0x10508u);
L_10508:
    X86_TICK(c, 16);
    // 010508  popfd 
    X86_AT(c, 0x10508u);
    x86_popfd(c, 4);
    // 010509  ret 
    X86_AT(c, 0x10509u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x1047cu, "ran off the end of a function");
}
void f_0001047f(X86Cpu& c) {
    goto L_1047f;
L_10338:
    X86_TICK(c, 12);
    // 010338  mov byte ptr [ebp + 0x21], 0xff
    X86_AT(c, 0x10338u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0x21u)), 0xFFu);
    // 01033c  ret 
    X86_AT(c, 0x1033cu);
    c.eip = pop32(c); return;
L_1047f:
    X86_TICK(c, 5);
    // 01047f  ja 0x10338
    X86_AT(c, 0x1047fu);
    if (x86_cc(c, 7)) { X86_POLL(c, 0x10338u); goto L_10338; }
    X86_TICK(c, 22);
    // 010485  add dx, 0x101
    X86_AT(c, 0x10485u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, 0x101u, 0, 2)); }
    // 01048a  pushfd 
    X86_AT(c, 0x1048au);
    push32(c, c.fl & 0x00FCFFFFu);
    // 01048b  cli 
    X86_AT(c, 0x1048bu);
    c.fl &= ~X86_IF;
    // 01048c  cmp byte ptr [edi + 0x4d], 0
    X86_AT(c, 0x1048cu);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x4Du))), 0x0u, 0, 1);
    // 010490  je 0x10497
    X86_AT(c, 0x10490u);
    if (x86_cc(c, 4)) { goto L_10497; }
    X86_TICK(c, 7);
    // 010492  call 0x10b75
    X86_AT(c, 0x10492u);
    push32(c, 0x10497u); f_00010b75(c); X86_RET(c, 0x10497u);
L_10497:
    X86_TICK(c, 27);
    // 010497  mov dx, word ptr [ebp + 0x18]
    X86_AT(c, 0x10497u);
    s16(c, 2, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0x18u))));
    // 01049b  movsx ax, dh
    X86_AT(c, 0x1049bu);
    s16(c, 0, (uint32_t)(int32_t)(int8_t)g8(c, 6));
    // 01049f  mov word ptr [edi + 0x49], ax
    X86_AT(c, 0x1049fu);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x49u)), (c.r[0] & 0xFFFFu));
    // 0104a3  movsx ax, dl
    X86_AT(c, 0x104a3u);
    s16(c, 0, (uint32_t)(int32_t)(int8_t)g8(c, 2));
    // 0104a7  mov word ptr [edi + 0x4b], ax
    X86_AT(c, 0x104a7u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x4Bu)), (c.r[0] & 0xFFFFu));
    // 0104ab  mov al, byte ptr [ebp + 0x20]
    X86_AT(c, 0x104abu);
    s8(c, 0, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x20u))));
    // 0104ae  mov byte ptr [edi + 0x4e], al
    X86_AT(c, 0x104aeu);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0x4Eu)), g8(c, 0));
    // 0104b1  cmp al, 0
    X86_AT(c, 0x104b1u);
    (void)x86_sub(c, g8(c, 0), 0x0u, 0, 1);
    // 0104b3  jne 0x104cb
    X86_AT(c, 0x104b3u);
    if (x86_cc(c, 5)) { goto L_104cb; }
    X86_TICK(c, 13);
    // 0104b5  mov dword ptr [edi + 0x34], 0x109eb
    X86_AT(c, 0x104b5u);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] + 0x34u)), 0x109EBu);
    // 0104bc  mov word ptr [edi + 0x38], 0x110
    X86_AT(c, 0x104bcu);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x38u)), 0x110u);
    // 0104c2  mov dword ptr [edi + 0x3a], 0xf000f
    X86_AT(c, 0x104c2u);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] + 0x3Au)), 0xF000Fu);
    // 0104c9  jmp 0x104fd
    X86_AT(c, 0x104c9u);
    goto L_104fd;
L_104cb:
    X86_TICK(c, 40);
    // 0104cb  mov ecx, dword ptr [ebp + 8]
    X86_AT(c, 0x104cbu);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0104ce  mov bx, word ptr [ebp + 0x24]
    X86_AT(c, 0x104ceu);
    s16(c, 3, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0x24u))));
    // 0104d2  mov gs, ebx
    X86_AT(c, 0x104d2u);
    x86_load_seg(c, 5, (c.r[3] & 0xFFFFu) & 0xFFFFu);
    // 0104d4  movzx dx, byte ptr gs:[ecx]
    X86_AT(c, 0x104d4u);
    s16(c, 2, rd8((c.sbase[5] + (uint32_t)(c.r[1]))));
    // 0104d9  shl dx, 3
    X86_AT(c, 0x104d9u);
    { uint32_t v = (c.r[2] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 4, v, 0x3u, 2, w); if (w) s16(c, 2, r); }
    // 0104dd  dec dx
    X86_AT(c, 0x104ddu);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_dec(c, v, 2)); }
    // 0104df  mov word ptr [edi + 0x3a], dx
    X86_AT(c, 0x104dfu);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x3Au)), (c.r[2] & 0xFFFFu));
    // 0104e3  movzx dx, byte ptr gs:[ecx + 1]
    X86_AT(c, 0x104e3u);
    s16(c, 2, rd8((c.sbase[5] + (uint32_t)(c.r[1] + 0x1u))));
    // 0104e9  dec dx
    X86_AT(c, 0x104e9u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_dec(c, v, 2)); }
    // 0104eb  mov word ptr [edi + 0x3c], dx
    X86_AT(c, 0x104ebu);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x3Cu)), (c.r[2] & 0xFFFFu));
    // 0104ef  cmp al, 2
    X86_AT(c, 0x104efu);
    (void)x86_sub(c, g8(c, 0), 0x2u, 0, 1);
    // 0104f1  jb 0x104f6
    X86_AT(c, 0x104f1u);
    if (x86_cc(c, 2)) { goto L_104f6; }
    X86_TICK(c, 2);
    // 0104f3  add ecx, 2
    X86_AT(c, 0x104f3u);
    { uint32_t v = c.r[1]; c.r[1] = x86_add(c, v, 0x2u, 0, 4); }
L_104f6:
    X86_TICK(c, 4);
    // 0104f6  mov dword ptr [edi + 0x34], ecx
    X86_AT(c, 0x104f6u);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] + 0x34u)), c.r[1]);
    // 0104f9  mov word ptr [edi + 0x38], bx
    X86_AT(c, 0x104f9u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x38u)), (c.r[3] & 0xFFFFu));
L_104fd:
    X86_TICK(c, 12);
    // 0104fd  cmp byte ptr [edi + 0x4d], 0
    X86_AT(c, 0x104fdu);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x4Du))), 0x0u, 0, 1);
    // 010501  je 0x10508
    X86_AT(c, 0x10501u);
    if (x86_cc(c, 4)) { goto L_10508; }
    X86_TICK(c, 7);
    // 010503  call 0x10bd0
    X86_AT(c, 0x10503u);
    push32(c, 0x10508u); f_00010bd0(c); X86_RET(c, 0x10508u);
L_10508:
    X86_TICK(c, 16);
    // 010508  popfd 
    X86_AT(c, 0x10508u);
    x86_popfd(c, 4);
    // 010509  ret 
    X86_AT(c, 0x10509u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x1047fu, "ran off the end of a function");
}
void f_00010485(X86Cpu& c) {
    X86_TICK(c, 22);
    // 010485  add dx, 0x101
    X86_AT(c, 0x10485u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, 0x101u, 0, 2)); }
    // 01048a  pushfd 
    X86_AT(c, 0x1048au);
    push32(c, c.fl & 0x00FCFFFFu);
    // 01048b  cli 
    X86_AT(c, 0x1048bu);
    c.fl &= ~X86_IF;
    // 01048c  cmp byte ptr [edi + 0x4d], 0
    X86_AT(c, 0x1048cu);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x4Du))), 0x0u, 0, 1);
    // 010490  je 0x10497
    X86_AT(c, 0x10490u);
    if (x86_cc(c, 4)) { goto L_10497; }
    X86_TICK(c, 7);
    // 010492  call 0x10b75
    X86_AT(c, 0x10492u);
    push32(c, 0x10497u); f_00010b75(c); X86_RET(c, 0x10497u);
L_10497:
    X86_TICK(c, 27);
    // 010497  mov dx, word ptr [ebp + 0x18]
    X86_AT(c, 0x10497u);
    s16(c, 2, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0x18u))));
    // 01049b  movsx ax, dh
    X86_AT(c, 0x1049bu);
    s16(c, 0, (uint32_t)(int32_t)(int8_t)g8(c, 6));
    // 01049f  mov word ptr [edi + 0x49], ax
    X86_AT(c, 0x1049fu);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x49u)), (c.r[0] & 0xFFFFu));
    // 0104a3  movsx ax, dl
    X86_AT(c, 0x104a3u);
    s16(c, 0, (uint32_t)(int32_t)(int8_t)g8(c, 2));
    // 0104a7  mov word ptr [edi + 0x4b], ax
    X86_AT(c, 0x104a7u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x4Bu)), (c.r[0] & 0xFFFFu));
    // 0104ab  mov al, byte ptr [ebp + 0x20]
    X86_AT(c, 0x104abu);
    s8(c, 0, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x20u))));
    // 0104ae  mov byte ptr [edi + 0x4e], al
    X86_AT(c, 0x104aeu);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0x4Eu)), g8(c, 0));
    // 0104b1  cmp al, 0
    X86_AT(c, 0x104b1u);
    (void)x86_sub(c, g8(c, 0), 0x0u, 0, 1);
    // 0104b3  jne 0x104cb
    X86_AT(c, 0x104b3u);
    if (x86_cc(c, 5)) { goto L_104cb; }
    X86_TICK(c, 13);
    // 0104b5  mov dword ptr [edi + 0x34], 0x109eb
    X86_AT(c, 0x104b5u);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] + 0x34u)), 0x109EBu);
    // 0104bc  mov word ptr [edi + 0x38], 0x110
    X86_AT(c, 0x104bcu);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x38u)), 0x110u);
    // 0104c2  mov dword ptr [edi + 0x3a], 0xf000f
    X86_AT(c, 0x104c2u);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] + 0x3Au)), 0xF000Fu);
    // 0104c9  jmp 0x104fd
    X86_AT(c, 0x104c9u);
    goto L_104fd;
L_104cb:
    X86_TICK(c, 40);
    // 0104cb  mov ecx, dword ptr [ebp + 8]
    X86_AT(c, 0x104cbu);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0104ce  mov bx, word ptr [ebp + 0x24]
    X86_AT(c, 0x104ceu);
    s16(c, 3, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0x24u))));
    // 0104d2  mov gs, ebx
    X86_AT(c, 0x104d2u);
    x86_load_seg(c, 5, (c.r[3] & 0xFFFFu) & 0xFFFFu);
    // 0104d4  movzx dx, byte ptr gs:[ecx]
    X86_AT(c, 0x104d4u);
    s16(c, 2, rd8((c.sbase[5] + (uint32_t)(c.r[1]))));
    // 0104d9  shl dx, 3
    X86_AT(c, 0x104d9u);
    { uint32_t v = (c.r[2] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 4, v, 0x3u, 2, w); if (w) s16(c, 2, r); }
    // 0104dd  dec dx
    X86_AT(c, 0x104ddu);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_dec(c, v, 2)); }
    // 0104df  mov word ptr [edi + 0x3a], dx
    X86_AT(c, 0x104dfu);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x3Au)), (c.r[2] & 0xFFFFu));
    // 0104e3  movzx dx, byte ptr gs:[ecx + 1]
    X86_AT(c, 0x104e3u);
    s16(c, 2, rd8((c.sbase[5] + (uint32_t)(c.r[1] + 0x1u))));
    // 0104e9  dec dx
    X86_AT(c, 0x104e9u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_dec(c, v, 2)); }
    // 0104eb  mov word ptr [edi + 0x3c], dx
    X86_AT(c, 0x104ebu);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x3Cu)), (c.r[2] & 0xFFFFu));
    // 0104ef  cmp al, 2
    X86_AT(c, 0x104efu);
    (void)x86_sub(c, g8(c, 0), 0x2u, 0, 1);
    // 0104f1  jb 0x104f6
    X86_AT(c, 0x104f1u);
    if (x86_cc(c, 2)) { goto L_104f6; }
    X86_TICK(c, 2);
    // 0104f3  add ecx, 2
    X86_AT(c, 0x104f3u);
    { uint32_t v = c.r[1]; c.r[1] = x86_add(c, v, 0x2u, 0, 4); }
L_104f6:
    X86_TICK(c, 4);
    // 0104f6  mov dword ptr [edi + 0x34], ecx
    X86_AT(c, 0x104f6u);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] + 0x34u)), c.r[1]);
    // 0104f9  mov word ptr [edi + 0x38], bx
    X86_AT(c, 0x104f9u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x38u)), (c.r[3] & 0xFFFFu));
L_104fd:
    X86_TICK(c, 12);
    // 0104fd  cmp byte ptr [edi + 0x4d], 0
    X86_AT(c, 0x104fdu);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x4Du))), 0x0u, 0, 1);
    // 010501  je 0x10508
    X86_AT(c, 0x10501u);
    if (x86_cc(c, 4)) { goto L_10508; }
    X86_TICK(c, 7);
    // 010503  call 0x10bd0
    X86_AT(c, 0x10503u);
    push32(c, 0x10508u); f_00010bd0(c); X86_RET(c, 0x10508u);
L_10508:
    X86_TICK(c, 16);
    // 010508  popfd 
    X86_AT(c, 0x10508u);
    x86_popfd(c, 4);
    // 010509  ret 
    X86_AT(c, 0x10509u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x10485u, "ran off the end of a function");
}
void f_0001048a(X86Cpu& c) {
    X86_TICK(c, 20);
    // 01048a  pushfd 
    X86_AT(c, 0x1048au);
    push32(c, c.fl & 0x00FCFFFFu);
    // 01048b  cli 
    X86_AT(c, 0x1048bu);
    c.fl &= ~X86_IF;
    // 01048c  cmp byte ptr [edi + 0x4d], 0
    X86_AT(c, 0x1048cu);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x4Du))), 0x0u, 0, 1);
    // 010490  je 0x10497
    X86_AT(c, 0x10490u);
    if (x86_cc(c, 4)) { goto L_10497; }
    X86_TICK(c, 7);
    // 010492  call 0x10b75
    X86_AT(c, 0x10492u);
    push32(c, 0x10497u); f_00010b75(c); X86_RET(c, 0x10497u);
L_10497:
    X86_TICK(c, 27);
    // 010497  mov dx, word ptr [ebp + 0x18]
    X86_AT(c, 0x10497u);
    s16(c, 2, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0x18u))));
    // 01049b  movsx ax, dh
    X86_AT(c, 0x1049bu);
    s16(c, 0, (uint32_t)(int32_t)(int8_t)g8(c, 6));
    // 01049f  mov word ptr [edi + 0x49], ax
    X86_AT(c, 0x1049fu);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x49u)), (c.r[0] & 0xFFFFu));
    // 0104a3  movsx ax, dl
    X86_AT(c, 0x104a3u);
    s16(c, 0, (uint32_t)(int32_t)(int8_t)g8(c, 2));
    // 0104a7  mov word ptr [edi + 0x4b], ax
    X86_AT(c, 0x104a7u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x4Bu)), (c.r[0] & 0xFFFFu));
    // 0104ab  mov al, byte ptr [ebp + 0x20]
    X86_AT(c, 0x104abu);
    s8(c, 0, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x20u))));
    // 0104ae  mov byte ptr [edi + 0x4e], al
    X86_AT(c, 0x104aeu);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0x4Eu)), g8(c, 0));
    // 0104b1  cmp al, 0
    X86_AT(c, 0x104b1u);
    (void)x86_sub(c, g8(c, 0), 0x0u, 0, 1);
    // 0104b3  jne 0x104cb
    X86_AT(c, 0x104b3u);
    if (x86_cc(c, 5)) { goto L_104cb; }
    X86_TICK(c, 13);
    // 0104b5  mov dword ptr [edi + 0x34], 0x109eb
    X86_AT(c, 0x104b5u);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] + 0x34u)), 0x109EBu);
    // 0104bc  mov word ptr [edi + 0x38], 0x110
    X86_AT(c, 0x104bcu);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x38u)), 0x110u);
    // 0104c2  mov dword ptr [edi + 0x3a], 0xf000f
    X86_AT(c, 0x104c2u);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] + 0x3Au)), 0xF000Fu);
    // 0104c9  jmp 0x104fd
    X86_AT(c, 0x104c9u);
    goto L_104fd;
L_104cb:
    X86_TICK(c, 40);
    // 0104cb  mov ecx, dword ptr [ebp + 8]
    X86_AT(c, 0x104cbu);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0104ce  mov bx, word ptr [ebp + 0x24]
    X86_AT(c, 0x104ceu);
    s16(c, 3, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0x24u))));
    // 0104d2  mov gs, ebx
    X86_AT(c, 0x104d2u);
    x86_load_seg(c, 5, (c.r[3] & 0xFFFFu) & 0xFFFFu);
    // 0104d4  movzx dx, byte ptr gs:[ecx]
    X86_AT(c, 0x104d4u);
    s16(c, 2, rd8((c.sbase[5] + (uint32_t)(c.r[1]))));
    // 0104d9  shl dx, 3
    X86_AT(c, 0x104d9u);
    { uint32_t v = (c.r[2] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 4, v, 0x3u, 2, w); if (w) s16(c, 2, r); }
    // 0104dd  dec dx
    X86_AT(c, 0x104ddu);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_dec(c, v, 2)); }
    // 0104df  mov word ptr [edi + 0x3a], dx
    X86_AT(c, 0x104dfu);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x3Au)), (c.r[2] & 0xFFFFu));
    // 0104e3  movzx dx, byte ptr gs:[ecx + 1]
    X86_AT(c, 0x104e3u);
    s16(c, 2, rd8((c.sbase[5] + (uint32_t)(c.r[1] + 0x1u))));
    // 0104e9  dec dx
    X86_AT(c, 0x104e9u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_dec(c, v, 2)); }
    // 0104eb  mov word ptr [edi + 0x3c], dx
    X86_AT(c, 0x104ebu);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x3Cu)), (c.r[2] & 0xFFFFu));
    // 0104ef  cmp al, 2
    X86_AT(c, 0x104efu);
    (void)x86_sub(c, g8(c, 0), 0x2u, 0, 1);
    // 0104f1  jb 0x104f6
    X86_AT(c, 0x104f1u);
    if (x86_cc(c, 2)) { goto L_104f6; }
    X86_TICK(c, 2);
    // 0104f3  add ecx, 2
    X86_AT(c, 0x104f3u);
    { uint32_t v = c.r[1]; c.r[1] = x86_add(c, v, 0x2u, 0, 4); }
L_104f6:
    X86_TICK(c, 4);
    // 0104f6  mov dword ptr [edi + 0x34], ecx
    X86_AT(c, 0x104f6u);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] + 0x34u)), c.r[1]);
    // 0104f9  mov word ptr [edi + 0x38], bx
    X86_AT(c, 0x104f9u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x38u)), (c.r[3] & 0xFFFFu));
L_104fd:
    X86_TICK(c, 12);
    // 0104fd  cmp byte ptr [edi + 0x4d], 0
    X86_AT(c, 0x104fdu);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x4Du))), 0x0u, 0, 1);
    // 010501  je 0x10508
    X86_AT(c, 0x10501u);
    if (x86_cc(c, 4)) { goto L_10508; }
    X86_TICK(c, 7);
    // 010503  call 0x10bd0
    X86_AT(c, 0x10503u);
    push32(c, 0x10508u); f_00010bd0(c); X86_RET(c, 0x10508u);
L_10508:
    X86_TICK(c, 16);
    // 010508  popfd 
    X86_AT(c, 0x10508u);
    x86_popfd(c, 4);
    // 010509  ret 
    X86_AT(c, 0x10509u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x1048au, "ran off the end of a function");
}
void f_0001048b(X86Cpu& c) {
    X86_TICK(c, 14);
    // 01048b  cli 
    X86_AT(c, 0x1048bu);
    c.fl &= ~X86_IF;
    // 01048c  cmp byte ptr [edi + 0x4d], 0
    X86_AT(c, 0x1048cu);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x4Du))), 0x0u, 0, 1);
    // 010490  je 0x10497
    X86_AT(c, 0x10490u);
    if (x86_cc(c, 4)) { goto L_10497; }
    X86_TICK(c, 7);
    // 010492  call 0x10b75
    X86_AT(c, 0x10492u);
    push32(c, 0x10497u); f_00010b75(c); X86_RET(c, 0x10497u);
L_10497:
    X86_TICK(c, 27);
    // 010497  mov dx, word ptr [ebp + 0x18]
    X86_AT(c, 0x10497u);
    s16(c, 2, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0x18u))));
    // 01049b  movsx ax, dh
    X86_AT(c, 0x1049bu);
    s16(c, 0, (uint32_t)(int32_t)(int8_t)g8(c, 6));
    // 01049f  mov word ptr [edi + 0x49], ax
    X86_AT(c, 0x1049fu);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x49u)), (c.r[0] & 0xFFFFu));
    // 0104a3  movsx ax, dl
    X86_AT(c, 0x104a3u);
    s16(c, 0, (uint32_t)(int32_t)(int8_t)g8(c, 2));
    // 0104a7  mov word ptr [edi + 0x4b], ax
    X86_AT(c, 0x104a7u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x4Bu)), (c.r[0] & 0xFFFFu));
    // 0104ab  mov al, byte ptr [ebp + 0x20]
    X86_AT(c, 0x104abu);
    s8(c, 0, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x20u))));
    // 0104ae  mov byte ptr [edi + 0x4e], al
    X86_AT(c, 0x104aeu);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0x4Eu)), g8(c, 0));
    // 0104b1  cmp al, 0
    X86_AT(c, 0x104b1u);
    (void)x86_sub(c, g8(c, 0), 0x0u, 0, 1);
    // 0104b3  jne 0x104cb
    X86_AT(c, 0x104b3u);
    if (x86_cc(c, 5)) { goto L_104cb; }
    X86_TICK(c, 13);
    // 0104b5  mov dword ptr [edi + 0x34], 0x109eb
    X86_AT(c, 0x104b5u);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] + 0x34u)), 0x109EBu);
    // 0104bc  mov word ptr [edi + 0x38], 0x110
    X86_AT(c, 0x104bcu);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x38u)), 0x110u);
    // 0104c2  mov dword ptr [edi + 0x3a], 0xf000f
    X86_AT(c, 0x104c2u);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] + 0x3Au)), 0xF000Fu);
    // 0104c9  jmp 0x104fd
    X86_AT(c, 0x104c9u);
    goto L_104fd;
L_104cb:
    X86_TICK(c, 40);
    // 0104cb  mov ecx, dword ptr [ebp + 8]
    X86_AT(c, 0x104cbu);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0104ce  mov bx, word ptr [ebp + 0x24]
    X86_AT(c, 0x104ceu);
    s16(c, 3, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0x24u))));
    // 0104d2  mov gs, ebx
    X86_AT(c, 0x104d2u);
    x86_load_seg(c, 5, (c.r[3] & 0xFFFFu) & 0xFFFFu);
    // 0104d4  movzx dx, byte ptr gs:[ecx]
    X86_AT(c, 0x104d4u);
    s16(c, 2, rd8((c.sbase[5] + (uint32_t)(c.r[1]))));
    // 0104d9  shl dx, 3
    X86_AT(c, 0x104d9u);
    { uint32_t v = (c.r[2] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 4, v, 0x3u, 2, w); if (w) s16(c, 2, r); }
    // 0104dd  dec dx
    X86_AT(c, 0x104ddu);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_dec(c, v, 2)); }
    // 0104df  mov word ptr [edi + 0x3a], dx
    X86_AT(c, 0x104dfu);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x3Au)), (c.r[2] & 0xFFFFu));
    // 0104e3  movzx dx, byte ptr gs:[ecx + 1]
    X86_AT(c, 0x104e3u);
    s16(c, 2, rd8((c.sbase[5] + (uint32_t)(c.r[1] + 0x1u))));
    // 0104e9  dec dx
    X86_AT(c, 0x104e9u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_dec(c, v, 2)); }
    // 0104eb  mov word ptr [edi + 0x3c], dx
    X86_AT(c, 0x104ebu);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x3Cu)), (c.r[2] & 0xFFFFu));
    // 0104ef  cmp al, 2
    X86_AT(c, 0x104efu);
    (void)x86_sub(c, g8(c, 0), 0x2u, 0, 1);
    // 0104f1  jb 0x104f6
    X86_AT(c, 0x104f1u);
    if (x86_cc(c, 2)) { goto L_104f6; }
    X86_TICK(c, 2);
    // 0104f3  add ecx, 2
    X86_AT(c, 0x104f3u);
    { uint32_t v = c.r[1]; c.r[1] = x86_add(c, v, 0x2u, 0, 4); }
L_104f6:
    X86_TICK(c, 4);
    // 0104f6  mov dword ptr [edi + 0x34], ecx
    X86_AT(c, 0x104f6u);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] + 0x34u)), c.r[1]);
    // 0104f9  mov word ptr [edi + 0x38], bx
    X86_AT(c, 0x104f9u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x38u)), (c.r[3] & 0xFFFFu));
L_104fd:
    X86_TICK(c, 12);
    // 0104fd  cmp byte ptr [edi + 0x4d], 0
    X86_AT(c, 0x104fdu);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x4Du))), 0x0u, 0, 1);
    // 010501  je 0x10508
    X86_AT(c, 0x10501u);
    if (x86_cc(c, 4)) { goto L_10508; }
    X86_TICK(c, 7);
    // 010503  call 0x10bd0
    X86_AT(c, 0x10503u);
    push32(c, 0x10508u); f_00010bd0(c); X86_RET(c, 0x10508u);
L_10508:
    X86_TICK(c, 16);
    // 010508  popfd 
    X86_AT(c, 0x10508u);
    x86_popfd(c, 4);
    // 010509  ret 
    X86_AT(c, 0x10509u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x1048bu, "ran off the end of a function");
}
void f_0001048c(X86Cpu& c) {
    X86_TICK(c, 12);
    // 01048c  cmp byte ptr [edi + 0x4d], 0
    X86_AT(c, 0x1048cu);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x4Du))), 0x0u, 0, 1);
    // 010490  je 0x10497
    X86_AT(c, 0x10490u);
    if (x86_cc(c, 4)) { goto L_10497; }
    X86_TICK(c, 7);
    // 010492  call 0x10b75
    X86_AT(c, 0x10492u);
    push32(c, 0x10497u); f_00010b75(c); X86_RET(c, 0x10497u);
L_10497:
    X86_TICK(c, 27);
    // 010497  mov dx, word ptr [ebp + 0x18]
    X86_AT(c, 0x10497u);
    s16(c, 2, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0x18u))));
    // 01049b  movsx ax, dh
    X86_AT(c, 0x1049bu);
    s16(c, 0, (uint32_t)(int32_t)(int8_t)g8(c, 6));
    // 01049f  mov word ptr [edi + 0x49], ax
    X86_AT(c, 0x1049fu);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x49u)), (c.r[0] & 0xFFFFu));
    // 0104a3  movsx ax, dl
    X86_AT(c, 0x104a3u);
    s16(c, 0, (uint32_t)(int32_t)(int8_t)g8(c, 2));
    // 0104a7  mov word ptr [edi + 0x4b], ax
    X86_AT(c, 0x104a7u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x4Bu)), (c.r[0] & 0xFFFFu));
    // 0104ab  mov al, byte ptr [ebp + 0x20]
    X86_AT(c, 0x104abu);
    s8(c, 0, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x20u))));
    // 0104ae  mov byte ptr [edi + 0x4e], al
    X86_AT(c, 0x104aeu);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0x4Eu)), g8(c, 0));
    // 0104b1  cmp al, 0
    X86_AT(c, 0x104b1u);
    (void)x86_sub(c, g8(c, 0), 0x0u, 0, 1);
    // 0104b3  jne 0x104cb
    X86_AT(c, 0x104b3u);
    if (x86_cc(c, 5)) { goto L_104cb; }
    X86_TICK(c, 13);
    // 0104b5  mov dword ptr [edi + 0x34], 0x109eb
    X86_AT(c, 0x104b5u);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] + 0x34u)), 0x109EBu);
    // 0104bc  mov word ptr [edi + 0x38], 0x110
    X86_AT(c, 0x104bcu);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x38u)), 0x110u);
    // 0104c2  mov dword ptr [edi + 0x3a], 0xf000f
    X86_AT(c, 0x104c2u);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] + 0x3Au)), 0xF000Fu);
    // 0104c9  jmp 0x104fd
    X86_AT(c, 0x104c9u);
    goto L_104fd;
L_104cb:
    X86_TICK(c, 40);
    // 0104cb  mov ecx, dword ptr [ebp + 8]
    X86_AT(c, 0x104cbu);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0104ce  mov bx, word ptr [ebp + 0x24]
    X86_AT(c, 0x104ceu);
    s16(c, 3, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0x24u))));
    // 0104d2  mov gs, ebx
    X86_AT(c, 0x104d2u);
    x86_load_seg(c, 5, (c.r[3] & 0xFFFFu) & 0xFFFFu);
    // 0104d4  movzx dx, byte ptr gs:[ecx]
    X86_AT(c, 0x104d4u);
    s16(c, 2, rd8((c.sbase[5] + (uint32_t)(c.r[1]))));
    // 0104d9  shl dx, 3
    X86_AT(c, 0x104d9u);
    { uint32_t v = (c.r[2] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 4, v, 0x3u, 2, w); if (w) s16(c, 2, r); }
    // 0104dd  dec dx
    X86_AT(c, 0x104ddu);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_dec(c, v, 2)); }
    // 0104df  mov word ptr [edi + 0x3a], dx
    X86_AT(c, 0x104dfu);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x3Au)), (c.r[2] & 0xFFFFu));
    // 0104e3  movzx dx, byte ptr gs:[ecx + 1]
    X86_AT(c, 0x104e3u);
    s16(c, 2, rd8((c.sbase[5] + (uint32_t)(c.r[1] + 0x1u))));
    // 0104e9  dec dx
    X86_AT(c, 0x104e9u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_dec(c, v, 2)); }
    // 0104eb  mov word ptr [edi + 0x3c], dx
    X86_AT(c, 0x104ebu);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x3Cu)), (c.r[2] & 0xFFFFu));
    // 0104ef  cmp al, 2
    X86_AT(c, 0x104efu);
    (void)x86_sub(c, g8(c, 0), 0x2u, 0, 1);
    // 0104f1  jb 0x104f6
    X86_AT(c, 0x104f1u);
    if (x86_cc(c, 2)) { goto L_104f6; }
    X86_TICK(c, 2);
    // 0104f3  add ecx, 2
    X86_AT(c, 0x104f3u);
    { uint32_t v = c.r[1]; c.r[1] = x86_add(c, v, 0x2u, 0, 4); }
L_104f6:
    X86_TICK(c, 4);
    // 0104f6  mov dword ptr [edi + 0x34], ecx
    X86_AT(c, 0x104f6u);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] + 0x34u)), c.r[1]);
    // 0104f9  mov word ptr [edi + 0x38], bx
    X86_AT(c, 0x104f9u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x38u)), (c.r[3] & 0xFFFFu));
L_104fd:
    X86_TICK(c, 12);
    // 0104fd  cmp byte ptr [edi + 0x4d], 0
    X86_AT(c, 0x104fdu);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x4Du))), 0x0u, 0, 1);
    // 010501  je 0x10508
    X86_AT(c, 0x10501u);
    if (x86_cc(c, 4)) { goto L_10508; }
    X86_TICK(c, 7);
    // 010503  call 0x10bd0
    X86_AT(c, 0x10503u);
    push32(c, 0x10508u); f_00010bd0(c); X86_RET(c, 0x10508u);
L_10508:
    X86_TICK(c, 16);
    // 010508  popfd 
    X86_AT(c, 0x10508u);
    x86_popfd(c, 4);
    // 010509  ret 
    X86_AT(c, 0x10509u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x1048cu, "ran off the end of a function");
}
void f_00010490(X86Cpu& c) {
    X86_TICK(c, 5);
    // 010490  je 0x10497
    X86_AT(c, 0x10490u);
    if (x86_cc(c, 4)) { goto L_10497; }
    X86_TICK(c, 7);
    // 010492  call 0x10b75
    X86_AT(c, 0x10492u);
    push32(c, 0x10497u); f_00010b75(c); X86_RET(c, 0x10497u);
L_10497:
    X86_TICK(c, 27);
    // 010497  mov dx, word ptr [ebp + 0x18]
    X86_AT(c, 0x10497u);
    s16(c, 2, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0x18u))));
    // 01049b  movsx ax, dh
    X86_AT(c, 0x1049bu);
    s16(c, 0, (uint32_t)(int32_t)(int8_t)g8(c, 6));
    // 01049f  mov word ptr [edi + 0x49], ax
    X86_AT(c, 0x1049fu);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x49u)), (c.r[0] & 0xFFFFu));
    // 0104a3  movsx ax, dl
    X86_AT(c, 0x104a3u);
    s16(c, 0, (uint32_t)(int32_t)(int8_t)g8(c, 2));
    // 0104a7  mov word ptr [edi + 0x4b], ax
    X86_AT(c, 0x104a7u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x4Bu)), (c.r[0] & 0xFFFFu));
    // 0104ab  mov al, byte ptr [ebp + 0x20]
    X86_AT(c, 0x104abu);
    s8(c, 0, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x20u))));
    // 0104ae  mov byte ptr [edi + 0x4e], al
    X86_AT(c, 0x104aeu);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0x4Eu)), g8(c, 0));
    // 0104b1  cmp al, 0
    X86_AT(c, 0x104b1u);
    (void)x86_sub(c, g8(c, 0), 0x0u, 0, 1);
    // 0104b3  jne 0x104cb
    X86_AT(c, 0x104b3u);
    if (x86_cc(c, 5)) { goto L_104cb; }
    X86_TICK(c, 13);
    // 0104b5  mov dword ptr [edi + 0x34], 0x109eb
    X86_AT(c, 0x104b5u);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] + 0x34u)), 0x109EBu);
    // 0104bc  mov word ptr [edi + 0x38], 0x110
    X86_AT(c, 0x104bcu);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x38u)), 0x110u);
    // 0104c2  mov dword ptr [edi + 0x3a], 0xf000f
    X86_AT(c, 0x104c2u);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] + 0x3Au)), 0xF000Fu);
    // 0104c9  jmp 0x104fd
    X86_AT(c, 0x104c9u);
    goto L_104fd;
L_104cb:
    X86_TICK(c, 40);
    // 0104cb  mov ecx, dword ptr [ebp + 8]
    X86_AT(c, 0x104cbu);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0104ce  mov bx, word ptr [ebp + 0x24]
    X86_AT(c, 0x104ceu);
    s16(c, 3, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0x24u))));
    // 0104d2  mov gs, ebx
    X86_AT(c, 0x104d2u);
    x86_load_seg(c, 5, (c.r[3] & 0xFFFFu) & 0xFFFFu);
    // 0104d4  movzx dx, byte ptr gs:[ecx]
    X86_AT(c, 0x104d4u);
    s16(c, 2, rd8((c.sbase[5] + (uint32_t)(c.r[1]))));
    // 0104d9  shl dx, 3
    X86_AT(c, 0x104d9u);
    { uint32_t v = (c.r[2] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 4, v, 0x3u, 2, w); if (w) s16(c, 2, r); }
    // 0104dd  dec dx
    X86_AT(c, 0x104ddu);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_dec(c, v, 2)); }
    // 0104df  mov word ptr [edi + 0x3a], dx
    X86_AT(c, 0x104dfu);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x3Au)), (c.r[2] & 0xFFFFu));
    // 0104e3  movzx dx, byte ptr gs:[ecx + 1]
    X86_AT(c, 0x104e3u);
    s16(c, 2, rd8((c.sbase[5] + (uint32_t)(c.r[1] + 0x1u))));
    // 0104e9  dec dx
    X86_AT(c, 0x104e9u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_dec(c, v, 2)); }
    // 0104eb  mov word ptr [edi + 0x3c], dx
    X86_AT(c, 0x104ebu);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x3Cu)), (c.r[2] & 0xFFFFu));
    // 0104ef  cmp al, 2
    X86_AT(c, 0x104efu);
    (void)x86_sub(c, g8(c, 0), 0x2u, 0, 1);
    // 0104f1  jb 0x104f6
    X86_AT(c, 0x104f1u);
    if (x86_cc(c, 2)) { goto L_104f6; }
    X86_TICK(c, 2);
    // 0104f3  add ecx, 2
    X86_AT(c, 0x104f3u);
    { uint32_t v = c.r[1]; c.r[1] = x86_add(c, v, 0x2u, 0, 4); }
L_104f6:
    X86_TICK(c, 4);
    // 0104f6  mov dword ptr [edi + 0x34], ecx
    X86_AT(c, 0x104f6u);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] + 0x34u)), c.r[1]);
    // 0104f9  mov word ptr [edi + 0x38], bx
    X86_AT(c, 0x104f9u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x38u)), (c.r[3] & 0xFFFFu));
L_104fd:
    X86_TICK(c, 12);
    // 0104fd  cmp byte ptr [edi + 0x4d], 0
    X86_AT(c, 0x104fdu);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x4Du))), 0x0u, 0, 1);
    // 010501  je 0x10508
    X86_AT(c, 0x10501u);
    if (x86_cc(c, 4)) { goto L_10508; }
    X86_TICK(c, 7);
    // 010503  call 0x10bd0
    X86_AT(c, 0x10503u);
    push32(c, 0x10508u); f_00010bd0(c); X86_RET(c, 0x10508u);
L_10508:
    X86_TICK(c, 16);
    // 010508  popfd 
    X86_AT(c, 0x10508u);
    x86_popfd(c, 4);
    // 010509  ret 
    X86_AT(c, 0x10509u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x10490u, "ran off the end of a function");
}
void f_00010497(X86Cpu& c) {
    X86_TICK(c, 27);
    // 010497  mov dx, word ptr [ebp + 0x18]
    X86_AT(c, 0x10497u);
    s16(c, 2, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0x18u))));
    // 01049b  movsx ax, dh
    X86_AT(c, 0x1049bu);
    s16(c, 0, (uint32_t)(int32_t)(int8_t)g8(c, 6));
    // 01049f  mov word ptr [edi + 0x49], ax
    X86_AT(c, 0x1049fu);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x49u)), (c.r[0] & 0xFFFFu));
    // 0104a3  movsx ax, dl
    X86_AT(c, 0x104a3u);
    s16(c, 0, (uint32_t)(int32_t)(int8_t)g8(c, 2));
    // 0104a7  mov word ptr [edi + 0x4b], ax
    X86_AT(c, 0x104a7u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x4Bu)), (c.r[0] & 0xFFFFu));
    // 0104ab  mov al, byte ptr [ebp + 0x20]
    X86_AT(c, 0x104abu);
    s8(c, 0, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x20u))));
    // 0104ae  mov byte ptr [edi + 0x4e], al
    X86_AT(c, 0x104aeu);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0x4Eu)), g8(c, 0));
    // 0104b1  cmp al, 0
    X86_AT(c, 0x104b1u);
    (void)x86_sub(c, g8(c, 0), 0x0u, 0, 1);
    // 0104b3  jne 0x104cb
    X86_AT(c, 0x104b3u);
    if (x86_cc(c, 5)) { goto L_104cb; }
    X86_TICK(c, 13);
    // 0104b5  mov dword ptr [edi + 0x34], 0x109eb
    X86_AT(c, 0x104b5u);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] + 0x34u)), 0x109EBu);
    // 0104bc  mov word ptr [edi + 0x38], 0x110
    X86_AT(c, 0x104bcu);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x38u)), 0x110u);
    // 0104c2  mov dword ptr [edi + 0x3a], 0xf000f
    X86_AT(c, 0x104c2u);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] + 0x3Au)), 0xF000Fu);
    // 0104c9  jmp 0x104fd
    X86_AT(c, 0x104c9u);
    goto L_104fd;
L_104cb:
    X86_TICK(c, 40);
    // 0104cb  mov ecx, dword ptr [ebp + 8]
    X86_AT(c, 0x104cbu);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0104ce  mov bx, word ptr [ebp + 0x24]
    X86_AT(c, 0x104ceu);
    s16(c, 3, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0x24u))));
    // 0104d2  mov gs, ebx
    X86_AT(c, 0x104d2u);
    x86_load_seg(c, 5, (c.r[3] & 0xFFFFu) & 0xFFFFu);
    // 0104d4  movzx dx, byte ptr gs:[ecx]
    X86_AT(c, 0x104d4u);
    s16(c, 2, rd8((c.sbase[5] + (uint32_t)(c.r[1]))));
    // 0104d9  shl dx, 3
    X86_AT(c, 0x104d9u);
    { uint32_t v = (c.r[2] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 4, v, 0x3u, 2, w); if (w) s16(c, 2, r); }
    // 0104dd  dec dx
    X86_AT(c, 0x104ddu);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_dec(c, v, 2)); }
    // 0104df  mov word ptr [edi + 0x3a], dx
    X86_AT(c, 0x104dfu);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x3Au)), (c.r[2] & 0xFFFFu));
    // 0104e3  movzx dx, byte ptr gs:[ecx + 1]
    X86_AT(c, 0x104e3u);
    s16(c, 2, rd8((c.sbase[5] + (uint32_t)(c.r[1] + 0x1u))));
    // 0104e9  dec dx
    X86_AT(c, 0x104e9u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_dec(c, v, 2)); }
    // 0104eb  mov word ptr [edi + 0x3c], dx
    X86_AT(c, 0x104ebu);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x3Cu)), (c.r[2] & 0xFFFFu));
    // 0104ef  cmp al, 2
    X86_AT(c, 0x104efu);
    (void)x86_sub(c, g8(c, 0), 0x2u, 0, 1);
    // 0104f1  jb 0x104f6
    X86_AT(c, 0x104f1u);
    if (x86_cc(c, 2)) { goto L_104f6; }
    X86_TICK(c, 2);
    // 0104f3  add ecx, 2
    X86_AT(c, 0x104f3u);
    { uint32_t v = c.r[1]; c.r[1] = x86_add(c, v, 0x2u, 0, 4); }
L_104f6:
    X86_TICK(c, 4);
    // 0104f6  mov dword ptr [edi + 0x34], ecx
    X86_AT(c, 0x104f6u);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] + 0x34u)), c.r[1]);
    // 0104f9  mov word ptr [edi + 0x38], bx
    X86_AT(c, 0x104f9u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x38u)), (c.r[3] & 0xFFFFu));
L_104fd:
    X86_TICK(c, 12);
    // 0104fd  cmp byte ptr [edi + 0x4d], 0
    X86_AT(c, 0x104fdu);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x4Du))), 0x0u, 0, 1);
    // 010501  je 0x10508
    X86_AT(c, 0x10501u);
    if (x86_cc(c, 4)) { goto L_10508; }
    X86_TICK(c, 7);
    // 010503  call 0x10bd0
    X86_AT(c, 0x10503u);
    push32(c, 0x10508u); f_00010bd0(c); X86_RET(c, 0x10508u);
L_10508:
    X86_TICK(c, 16);
    // 010508  popfd 
    X86_AT(c, 0x10508u);
    x86_popfd(c, 4);
    // 010509  ret 
    X86_AT(c, 0x10509u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x10497u, "ran off the end of a function");
}
void f_0001049b(X86Cpu& c) {
    X86_TICK(c, 23);
    // 01049b  movsx ax, dh
    X86_AT(c, 0x1049bu);
    s16(c, 0, (uint32_t)(int32_t)(int8_t)g8(c, 6));
    // 01049f  mov word ptr [edi + 0x49], ax
    X86_AT(c, 0x1049fu);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x49u)), (c.r[0] & 0xFFFFu));
    // 0104a3  movsx ax, dl
    X86_AT(c, 0x104a3u);
    s16(c, 0, (uint32_t)(int32_t)(int8_t)g8(c, 2));
    // 0104a7  mov word ptr [edi + 0x4b], ax
    X86_AT(c, 0x104a7u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x4Bu)), (c.r[0] & 0xFFFFu));
    // 0104ab  mov al, byte ptr [ebp + 0x20]
    X86_AT(c, 0x104abu);
    s8(c, 0, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x20u))));
    // 0104ae  mov byte ptr [edi + 0x4e], al
    X86_AT(c, 0x104aeu);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0x4Eu)), g8(c, 0));
    // 0104b1  cmp al, 0
    X86_AT(c, 0x104b1u);
    (void)x86_sub(c, g8(c, 0), 0x0u, 0, 1);
    // 0104b3  jne 0x104cb
    X86_AT(c, 0x104b3u);
    if (x86_cc(c, 5)) { goto L_104cb; }
    X86_TICK(c, 13);
    // 0104b5  mov dword ptr [edi + 0x34], 0x109eb
    X86_AT(c, 0x104b5u);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] + 0x34u)), 0x109EBu);
    // 0104bc  mov word ptr [edi + 0x38], 0x110
    X86_AT(c, 0x104bcu);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x38u)), 0x110u);
    // 0104c2  mov dword ptr [edi + 0x3a], 0xf000f
    X86_AT(c, 0x104c2u);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] + 0x3Au)), 0xF000Fu);
    // 0104c9  jmp 0x104fd
    X86_AT(c, 0x104c9u);
    goto L_104fd;
L_104cb:
    X86_TICK(c, 40);
    // 0104cb  mov ecx, dword ptr [ebp + 8]
    X86_AT(c, 0x104cbu);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0104ce  mov bx, word ptr [ebp + 0x24]
    X86_AT(c, 0x104ceu);
    s16(c, 3, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0x24u))));
    // 0104d2  mov gs, ebx
    X86_AT(c, 0x104d2u);
    x86_load_seg(c, 5, (c.r[3] & 0xFFFFu) & 0xFFFFu);
    // 0104d4  movzx dx, byte ptr gs:[ecx]
    X86_AT(c, 0x104d4u);
    s16(c, 2, rd8((c.sbase[5] + (uint32_t)(c.r[1]))));
    // 0104d9  shl dx, 3
    X86_AT(c, 0x104d9u);
    { uint32_t v = (c.r[2] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 4, v, 0x3u, 2, w); if (w) s16(c, 2, r); }
    // 0104dd  dec dx
    X86_AT(c, 0x104ddu);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_dec(c, v, 2)); }
    // 0104df  mov word ptr [edi + 0x3a], dx
    X86_AT(c, 0x104dfu);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x3Au)), (c.r[2] & 0xFFFFu));
    // 0104e3  movzx dx, byte ptr gs:[ecx + 1]
    X86_AT(c, 0x104e3u);
    s16(c, 2, rd8((c.sbase[5] + (uint32_t)(c.r[1] + 0x1u))));
    // 0104e9  dec dx
    X86_AT(c, 0x104e9u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_dec(c, v, 2)); }
    // 0104eb  mov word ptr [edi + 0x3c], dx
    X86_AT(c, 0x104ebu);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x3Cu)), (c.r[2] & 0xFFFFu));
    // 0104ef  cmp al, 2
    X86_AT(c, 0x104efu);
    (void)x86_sub(c, g8(c, 0), 0x2u, 0, 1);
    // 0104f1  jb 0x104f6
    X86_AT(c, 0x104f1u);
    if (x86_cc(c, 2)) { goto L_104f6; }
    X86_TICK(c, 2);
    // 0104f3  add ecx, 2
    X86_AT(c, 0x104f3u);
    { uint32_t v = c.r[1]; c.r[1] = x86_add(c, v, 0x2u, 0, 4); }
L_104f6:
    X86_TICK(c, 4);
    // 0104f6  mov dword ptr [edi + 0x34], ecx
    X86_AT(c, 0x104f6u);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] + 0x34u)), c.r[1]);
    // 0104f9  mov word ptr [edi + 0x38], bx
    X86_AT(c, 0x104f9u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x38u)), (c.r[3] & 0xFFFFu));
L_104fd:
    X86_TICK(c, 12);
    // 0104fd  cmp byte ptr [edi + 0x4d], 0
    X86_AT(c, 0x104fdu);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x4Du))), 0x0u, 0, 1);
    // 010501  je 0x10508
    X86_AT(c, 0x10501u);
    if (x86_cc(c, 4)) { goto L_10508; }
    X86_TICK(c, 7);
    // 010503  call 0x10bd0
    X86_AT(c, 0x10503u);
    push32(c, 0x10508u); f_00010bd0(c); X86_RET(c, 0x10508u);
L_10508:
    X86_TICK(c, 16);
    // 010508  popfd 
    X86_AT(c, 0x10508u);
    x86_popfd(c, 4);
    // 010509  ret 
    X86_AT(c, 0x10509u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x1049bu, "ran off the end of a function");
}
void f_0001049f(X86Cpu& c) {
    X86_TICK(c, 20);
    // 01049f  mov word ptr [edi + 0x49], ax
    X86_AT(c, 0x1049fu);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x49u)), (c.r[0] & 0xFFFFu));
    // 0104a3  movsx ax, dl
    X86_AT(c, 0x104a3u);
    s16(c, 0, (uint32_t)(int32_t)(int8_t)g8(c, 2));
    // 0104a7  mov word ptr [edi + 0x4b], ax
    X86_AT(c, 0x104a7u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x4Bu)), (c.r[0] & 0xFFFFu));
    // 0104ab  mov al, byte ptr [ebp + 0x20]
    X86_AT(c, 0x104abu);
    s8(c, 0, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x20u))));
    // 0104ae  mov byte ptr [edi + 0x4e], al
    X86_AT(c, 0x104aeu);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0x4Eu)), g8(c, 0));
    // 0104b1  cmp al, 0
    X86_AT(c, 0x104b1u);
    (void)x86_sub(c, g8(c, 0), 0x0u, 0, 1);
    // 0104b3  jne 0x104cb
    X86_AT(c, 0x104b3u);
    if (x86_cc(c, 5)) { goto L_104cb; }
    X86_TICK(c, 13);
    // 0104b5  mov dword ptr [edi + 0x34], 0x109eb
    X86_AT(c, 0x104b5u);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] + 0x34u)), 0x109EBu);
    // 0104bc  mov word ptr [edi + 0x38], 0x110
    X86_AT(c, 0x104bcu);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x38u)), 0x110u);
    // 0104c2  mov dword ptr [edi + 0x3a], 0xf000f
    X86_AT(c, 0x104c2u);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] + 0x3Au)), 0xF000Fu);
    // 0104c9  jmp 0x104fd
    X86_AT(c, 0x104c9u);
    goto L_104fd;
L_104cb:
    X86_TICK(c, 40);
    // 0104cb  mov ecx, dword ptr [ebp + 8]
    X86_AT(c, 0x104cbu);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0104ce  mov bx, word ptr [ebp + 0x24]
    X86_AT(c, 0x104ceu);
    s16(c, 3, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0x24u))));
    // 0104d2  mov gs, ebx
    X86_AT(c, 0x104d2u);
    x86_load_seg(c, 5, (c.r[3] & 0xFFFFu) & 0xFFFFu);
    // 0104d4  movzx dx, byte ptr gs:[ecx]
    X86_AT(c, 0x104d4u);
    s16(c, 2, rd8((c.sbase[5] + (uint32_t)(c.r[1]))));
    // 0104d9  shl dx, 3
    X86_AT(c, 0x104d9u);
    { uint32_t v = (c.r[2] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 4, v, 0x3u, 2, w); if (w) s16(c, 2, r); }
    // 0104dd  dec dx
    X86_AT(c, 0x104ddu);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_dec(c, v, 2)); }
    // 0104df  mov word ptr [edi + 0x3a], dx
    X86_AT(c, 0x104dfu);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x3Au)), (c.r[2] & 0xFFFFu));
    // 0104e3  movzx dx, byte ptr gs:[ecx + 1]
    X86_AT(c, 0x104e3u);
    s16(c, 2, rd8((c.sbase[5] + (uint32_t)(c.r[1] + 0x1u))));
    // 0104e9  dec dx
    X86_AT(c, 0x104e9u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_dec(c, v, 2)); }
    // 0104eb  mov word ptr [edi + 0x3c], dx
    X86_AT(c, 0x104ebu);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x3Cu)), (c.r[2] & 0xFFFFu));
    // 0104ef  cmp al, 2
    X86_AT(c, 0x104efu);
    (void)x86_sub(c, g8(c, 0), 0x2u, 0, 1);
    // 0104f1  jb 0x104f6
    X86_AT(c, 0x104f1u);
    if (x86_cc(c, 2)) { goto L_104f6; }
    X86_TICK(c, 2);
    // 0104f3  add ecx, 2
    X86_AT(c, 0x104f3u);
    { uint32_t v = c.r[1]; c.r[1] = x86_add(c, v, 0x2u, 0, 4); }
L_104f6:
    X86_TICK(c, 4);
    // 0104f6  mov dword ptr [edi + 0x34], ecx
    X86_AT(c, 0x104f6u);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] + 0x34u)), c.r[1]);
    // 0104f9  mov word ptr [edi + 0x38], bx
    X86_AT(c, 0x104f9u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x38u)), (c.r[3] & 0xFFFFu));
L_104fd:
    X86_TICK(c, 12);
    // 0104fd  cmp byte ptr [edi + 0x4d], 0
    X86_AT(c, 0x104fdu);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x4Du))), 0x0u, 0, 1);
    // 010501  je 0x10508
    X86_AT(c, 0x10501u);
    if (x86_cc(c, 4)) { goto L_10508; }
    X86_TICK(c, 7);
    // 010503  call 0x10bd0
    X86_AT(c, 0x10503u);
    push32(c, 0x10508u); f_00010bd0(c); X86_RET(c, 0x10508u);
L_10508:
    X86_TICK(c, 16);
    // 010508  popfd 
    X86_AT(c, 0x10508u);
    x86_popfd(c, 4);
    // 010509  ret 
    X86_AT(c, 0x10509u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x1049fu, "ran off the end of a function");
}
void f_000104a3(X86Cpu& c) {
    X86_TICK(c, 18);
    // 0104a3  movsx ax, dl
    X86_AT(c, 0x104a3u);
    s16(c, 0, (uint32_t)(int32_t)(int8_t)g8(c, 2));
    // 0104a7  mov word ptr [edi + 0x4b], ax
    X86_AT(c, 0x104a7u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x4Bu)), (c.r[0] & 0xFFFFu));
    // 0104ab  mov al, byte ptr [ebp + 0x20]
    X86_AT(c, 0x104abu);
    s8(c, 0, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x20u))));
    // 0104ae  mov byte ptr [edi + 0x4e], al
    X86_AT(c, 0x104aeu);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0x4Eu)), g8(c, 0));
    // 0104b1  cmp al, 0
    X86_AT(c, 0x104b1u);
    (void)x86_sub(c, g8(c, 0), 0x0u, 0, 1);
    // 0104b3  jne 0x104cb
    X86_AT(c, 0x104b3u);
    if (x86_cc(c, 5)) { goto L_104cb; }
    X86_TICK(c, 13);
    // 0104b5  mov dword ptr [edi + 0x34], 0x109eb
    X86_AT(c, 0x104b5u);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] + 0x34u)), 0x109EBu);
    // 0104bc  mov word ptr [edi + 0x38], 0x110
    X86_AT(c, 0x104bcu);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x38u)), 0x110u);
    // 0104c2  mov dword ptr [edi + 0x3a], 0xf000f
    X86_AT(c, 0x104c2u);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] + 0x3Au)), 0xF000Fu);
    // 0104c9  jmp 0x104fd
    X86_AT(c, 0x104c9u);
    goto L_104fd;
L_104cb:
    X86_TICK(c, 40);
    // 0104cb  mov ecx, dword ptr [ebp + 8]
    X86_AT(c, 0x104cbu);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0104ce  mov bx, word ptr [ebp + 0x24]
    X86_AT(c, 0x104ceu);
    s16(c, 3, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0x24u))));
    // 0104d2  mov gs, ebx
    X86_AT(c, 0x104d2u);
    x86_load_seg(c, 5, (c.r[3] & 0xFFFFu) & 0xFFFFu);
    // 0104d4  movzx dx, byte ptr gs:[ecx]
    X86_AT(c, 0x104d4u);
    s16(c, 2, rd8((c.sbase[5] + (uint32_t)(c.r[1]))));
    // 0104d9  shl dx, 3
    X86_AT(c, 0x104d9u);
    { uint32_t v = (c.r[2] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 4, v, 0x3u, 2, w); if (w) s16(c, 2, r); }
    // 0104dd  dec dx
    X86_AT(c, 0x104ddu);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_dec(c, v, 2)); }
    // 0104df  mov word ptr [edi + 0x3a], dx
    X86_AT(c, 0x104dfu);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x3Au)), (c.r[2] & 0xFFFFu));
    // 0104e3  movzx dx, byte ptr gs:[ecx + 1]
    X86_AT(c, 0x104e3u);
    s16(c, 2, rd8((c.sbase[5] + (uint32_t)(c.r[1] + 0x1u))));
    // 0104e9  dec dx
    X86_AT(c, 0x104e9u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_dec(c, v, 2)); }
    // 0104eb  mov word ptr [edi + 0x3c], dx
    X86_AT(c, 0x104ebu);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x3Cu)), (c.r[2] & 0xFFFFu));
    // 0104ef  cmp al, 2
    X86_AT(c, 0x104efu);
    (void)x86_sub(c, g8(c, 0), 0x2u, 0, 1);
    // 0104f1  jb 0x104f6
    X86_AT(c, 0x104f1u);
    if (x86_cc(c, 2)) { goto L_104f6; }
    X86_TICK(c, 2);
    // 0104f3  add ecx, 2
    X86_AT(c, 0x104f3u);
    { uint32_t v = c.r[1]; c.r[1] = x86_add(c, v, 0x2u, 0, 4); }
L_104f6:
    X86_TICK(c, 4);
    // 0104f6  mov dword ptr [edi + 0x34], ecx
    X86_AT(c, 0x104f6u);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] + 0x34u)), c.r[1]);
    // 0104f9  mov word ptr [edi + 0x38], bx
    X86_AT(c, 0x104f9u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x38u)), (c.r[3] & 0xFFFFu));
L_104fd:
    X86_TICK(c, 12);
    // 0104fd  cmp byte ptr [edi + 0x4d], 0
    X86_AT(c, 0x104fdu);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x4Du))), 0x0u, 0, 1);
    // 010501  je 0x10508
    X86_AT(c, 0x10501u);
    if (x86_cc(c, 4)) { goto L_10508; }
    X86_TICK(c, 7);
    // 010503  call 0x10bd0
    X86_AT(c, 0x10503u);
    push32(c, 0x10508u); f_00010bd0(c); X86_RET(c, 0x10508u);
L_10508:
    X86_TICK(c, 16);
    // 010508  popfd 
    X86_AT(c, 0x10508u);
    x86_popfd(c, 4);
    // 010509  ret 
    X86_AT(c, 0x10509u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x104a3u, "ran off the end of a function");
}
void f_000104a7(X86Cpu& c) {
    X86_TICK(c, 15);
    // 0104a7  mov word ptr [edi + 0x4b], ax
    X86_AT(c, 0x104a7u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x4Bu)), (c.r[0] & 0xFFFFu));
    // 0104ab  mov al, byte ptr [ebp + 0x20]
    X86_AT(c, 0x104abu);
    s8(c, 0, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x20u))));
    // 0104ae  mov byte ptr [edi + 0x4e], al
    X86_AT(c, 0x104aeu);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0x4Eu)), g8(c, 0));
    // 0104b1  cmp al, 0
    X86_AT(c, 0x104b1u);
    (void)x86_sub(c, g8(c, 0), 0x0u, 0, 1);
    // 0104b3  jne 0x104cb
    X86_AT(c, 0x104b3u);
    if (x86_cc(c, 5)) { goto L_104cb; }
    X86_TICK(c, 13);
    // 0104b5  mov dword ptr [edi + 0x34], 0x109eb
    X86_AT(c, 0x104b5u);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] + 0x34u)), 0x109EBu);
    // 0104bc  mov word ptr [edi + 0x38], 0x110
    X86_AT(c, 0x104bcu);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x38u)), 0x110u);
    // 0104c2  mov dword ptr [edi + 0x3a], 0xf000f
    X86_AT(c, 0x104c2u);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] + 0x3Au)), 0xF000Fu);
    // 0104c9  jmp 0x104fd
    X86_AT(c, 0x104c9u);
    goto L_104fd;
L_104cb:
    X86_TICK(c, 40);
    // 0104cb  mov ecx, dword ptr [ebp + 8]
    X86_AT(c, 0x104cbu);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0104ce  mov bx, word ptr [ebp + 0x24]
    X86_AT(c, 0x104ceu);
    s16(c, 3, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0x24u))));
    // 0104d2  mov gs, ebx
    X86_AT(c, 0x104d2u);
    x86_load_seg(c, 5, (c.r[3] & 0xFFFFu) & 0xFFFFu);
    // 0104d4  movzx dx, byte ptr gs:[ecx]
    X86_AT(c, 0x104d4u);
    s16(c, 2, rd8((c.sbase[5] + (uint32_t)(c.r[1]))));
    // 0104d9  shl dx, 3
    X86_AT(c, 0x104d9u);
    { uint32_t v = (c.r[2] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 4, v, 0x3u, 2, w); if (w) s16(c, 2, r); }
    // 0104dd  dec dx
    X86_AT(c, 0x104ddu);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_dec(c, v, 2)); }
    // 0104df  mov word ptr [edi + 0x3a], dx
    X86_AT(c, 0x104dfu);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x3Au)), (c.r[2] & 0xFFFFu));
    // 0104e3  movzx dx, byte ptr gs:[ecx + 1]
    X86_AT(c, 0x104e3u);
    s16(c, 2, rd8((c.sbase[5] + (uint32_t)(c.r[1] + 0x1u))));
    // 0104e9  dec dx
    X86_AT(c, 0x104e9u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_dec(c, v, 2)); }
    // 0104eb  mov word ptr [edi + 0x3c], dx
    X86_AT(c, 0x104ebu);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x3Cu)), (c.r[2] & 0xFFFFu));
    // 0104ef  cmp al, 2
    X86_AT(c, 0x104efu);
    (void)x86_sub(c, g8(c, 0), 0x2u, 0, 1);
    // 0104f1  jb 0x104f6
    X86_AT(c, 0x104f1u);
    if (x86_cc(c, 2)) { goto L_104f6; }
    X86_TICK(c, 2);
    // 0104f3  add ecx, 2
    X86_AT(c, 0x104f3u);
    { uint32_t v = c.r[1]; c.r[1] = x86_add(c, v, 0x2u, 0, 4); }
L_104f6:
    X86_TICK(c, 4);
    // 0104f6  mov dword ptr [edi + 0x34], ecx
    X86_AT(c, 0x104f6u);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] + 0x34u)), c.r[1]);
    // 0104f9  mov word ptr [edi + 0x38], bx
    X86_AT(c, 0x104f9u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x38u)), (c.r[3] & 0xFFFFu));
L_104fd:
    X86_TICK(c, 12);
    // 0104fd  cmp byte ptr [edi + 0x4d], 0
    X86_AT(c, 0x104fdu);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x4Du))), 0x0u, 0, 1);
    // 010501  je 0x10508
    X86_AT(c, 0x10501u);
    if (x86_cc(c, 4)) { goto L_10508; }
    X86_TICK(c, 7);
    // 010503  call 0x10bd0
    X86_AT(c, 0x10503u);
    push32(c, 0x10508u); f_00010bd0(c); X86_RET(c, 0x10508u);
L_10508:
    X86_TICK(c, 16);
    // 010508  popfd 
    X86_AT(c, 0x10508u);
    x86_popfd(c, 4);
    // 010509  ret 
    X86_AT(c, 0x10509u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x104a7u, "ran off the end of a function");
}
void f_000104ab(X86Cpu& c) {
    X86_TICK(c, 13);
    // 0104ab  mov al, byte ptr [ebp + 0x20]
    X86_AT(c, 0x104abu);
    s8(c, 0, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x20u))));
    // 0104ae  mov byte ptr [edi + 0x4e], al
    X86_AT(c, 0x104aeu);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0x4Eu)), g8(c, 0));
    // 0104b1  cmp al, 0
    X86_AT(c, 0x104b1u);
    (void)x86_sub(c, g8(c, 0), 0x0u, 0, 1);
    // 0104b3  jne 0x104cb
    X86_AT(c, 0x104b3u);
    if (x86_cc(c, 5)) { goto L_104cb; }
    X86_TICK(c, 13);
    // 0104b5  mov dword ptr [edi + 0x34], 0x109eb
    X86_AT(c, 0x104b5u);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] + 0x34u)), 0x109EBu);
    // 0104bc  mov word ptr [edi + 0x38], 0x110
    X86_AT(c, 0x104bcu);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x38u)), 0x110u);
    // 0104c2  mov dword ptr [edi + 0x3a], 0xf000f
    X86_AT(c, 0x104c2u);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] + 0x3Au)), 0xF000Fu);
    // 0104c9  jmp 0x104fd
    X86_AT(c, 0x104c9u);
    goto L_104fd;
L_104cb:
    X86_TICK(c, 40);
    // 0104cb  mov ecx, dword ptr [ebp + 8]
    X86_AT(c, 0x104cbu);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0104ce  mov bx, word ptr [ebp + 0x24]
    X86_AT(c, 0x104ceu);
    s16(c, 3, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0x24u))));
    // 0104d2  mov gs, ebx
    X86_AT(c, 0x104d2u);
    x86_load_seg(c, 5, (c.r[3] & 0xFFFFu) & 0xFFFFu);
    // 0104d4  movzx dx, byte ptr gs:[ecx]
    X86_AT(c, 0x104d4u);
    s16(c, 2, rd8((c.sbase[5] + (uint32_t)(c.r[1]))));
    // 0104d9  shl dx, 3
    X86_AT(c, 0x104d9u);
    { uint32_t v = (c.r[2] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 4, v, 0x3u, 2, w); if (w) s16(c, 2, r); }
    // 0104dd  dec dx
    X86_AT(c, 0x104ddu);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_dec(c, v, 2)); }
    // 0104df  mov word ptr [edi + 0x3a], dx
    X86_AT(c, 0x104dfu);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x3Au)), (c.r[2] & 0xFFFFu));
    // 0104e3  movzx dx, byte ptr gs:[ecx + 1]
    X86_AT(c, 0x104e3u);
    s16(c, 2, rd8((c.sbase[5] + (uint32_t)(c.r[1] + 0x1u))));
    // 0104e9  dec dx
    X86_AT(c, 0x104e9u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_dec(c, v, 2)); }
    // 0104eb  mov word ptr [edi + 0x3c], dx
    X86_AT(c, 0x104ebu);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x3Cu)), (c.r[2] & 0xFFFFu));
    // 0104ef  cmp al, 2
    X86_AT(c, 0x104efu);
    (void)x86_sub(c, g8(c, 0), 0x2u, 0, 1);
    // 0104f1  jb 0x104f6
    X86_AT(c, 0x104f1u);
    if (x86_cc(c, 2)) { goto L_104f6; }
    X86_TICK(c, 2);
    // 0104f3  add ecx, 2
    X86_AT(c, 0x104f3u);
    { uint32_t v = c.r[1]; c.r[1] = x86_add(c, v, 0x2u, 0, 4); }
L_104f6:
    X86_TICK(c, 4);
    // 0104f6  mov dword ptr [edi + 0x34], ecx
    X86_AT(c, 0x104f6u);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] + 0x34u)), c.r[1]);
    // 0104f9  mov word ptr [edi + 0x38], bx
    X86_AT(c, 0x104f9u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x38u)), (c.r[3] & 0xFFFFu));
L_104fd:
    X86_TICK(c, 12);
    // 0104fd  cmp byte ptr [edi + 0x4d], 0
    X86_AT(c, 0x104fdu);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x4Du))), 0x0u, 0, 1);
    // 010501  je 0x10508
    X86_AT(c, 0x10501u);
    if (x86_cc(c, 4)) { goto L_10508; }
    X86_TICK(c, 7);
    // 010503  call 0x10bd0
    X86_AT(c, 0x10503u);
    push32(c, 0x10508u); f_00010bd0(c); X86_RET(c, 0x10508u);
L_10508:
    X86_TICK(c, 16);
    // 010508  popfd 
    X86_AT(c, 0x10508u);
    x86_popfd(c, 4);
    // 010509  ret 
    X86_AT(c, 0x10509u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x104abu, "ran off the end of a function");
}
}

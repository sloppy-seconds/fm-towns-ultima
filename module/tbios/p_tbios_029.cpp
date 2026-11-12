#include "p_tbios_funcs.h"
namespace p_tbios {
void f_00002b8c(X86Cpu& c) {
    X86_TICK(c, 14);
    // 002b8c  lodsw ax, word ptr [esi]
    X86_AT(c, 0x2b8cu);
    x86_string(c, 3, 2, 0, 4, 3);
    // 002b8e  cmp ax, 3
    X86_AT(c, 0x2b8eu);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), 0x3u, 0, 2);
    // 002b92  jb 0x2bb2
    X86_AT(c, 0x2b92u);
    if (x86_cc(c, 2)) { goto L_2bb2; }
    X86_TICK(c, 7);
    // 002b94  cmp ax, 0x100
    X86_AT(c, 0x2b94u);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), 0x100u, 0, 2);
    // 002b98  ja 0x2bb2
    X86_AT(c, 0x2b98u);
    if (x86_cc(c, 7)) { goto L_2bb2; }
    X86_TICK(c, 13);
    // 002b9a  mov dword ptr gs:[ebp + 0x1ec], esi
    X86_AT(c, 0x2b9au);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1ECu)), c.r[6]);
    // 002ba1  mov word ptr gs:[ebp + 0x1f0], ds
    X86_AT(c, 0x2ba1u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1F0u)), (uint32_t)c.sreg[3]);
    // 002ba8  mov word ptr gs:[ebp + 0x1f2], ax
    X86_AT(c, 0x2ba8u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1F2u)), (c.r[0] & 0xFFFFu));
    // 002bb0  jmp 0x2bb8
    X86_AT(c, 0x2bb0u);
    goto L_2bb8;
L_2bb2:
    X86_TICK(c, 12);
    // 002bb2  mov byte ptr [esp + 0x21], 0xff
    X86_AT(c, 0x2bb2u);
    wr8((c.sbase[2] + (uint32_t)(c.r[4] + 0x21u)), 0xFFu);
    // 002bb7  ret 
    X86_AT(c, 0x2bb7u);
    c.eip = pop32(c); return;
L_2bb8:
    X86_TICK(c, 12);
    // 002bb8  test word ptr gs:[ebp + 0x108], 0xe
    X86_AT(c, 0x2bb8u);
    (void)x86_logic(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x108u))) & 0xEu, 2);
    // 002bc2  je 0x2c4a
    X86_AT(c, 0x2bc2u);
    if (x86_cc(c, 4)) { goto L_2c4a; }
    X86_TICK(c, 9);
    // 002bc8  mov byte ptr gs:[ebp + 0x1e3], 0xff
    X86_AT(c, 0x2bc8u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E3u)), 0xFFu);
    // 002bd0  call 0x28d8
    X86_AT(c, 0x2bd0u);
    push32(c, 0x2bd5u); f_000028d8(c); X86_RET(c, 0x2bd5u);
    X86_TICK(c, 7);
    // 002bd5  test al, al
    X86_AT(c, 0x2bd5u);
    (void)x86_logic(c, g8(c, 0) & g8(c, 0), 1);
    // 002bd7  je 0x2bf7
    X86_AT(c, 0x2bd7u);
    if (x86_cc(c, 4)) { goto L_2bf7; }
    X86_TICK(c, 28);
    // 002bd9  mov ecx, dword ptr gs:[ebp + 0xc]
    X86_AT(c, 0x2bd9u);
    c.r[1] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0xCu)));
    // 002bdd  mov dword ptr gs:[ebp + 0x200], ecx
    X86_AT(c, 0x2bddu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x200u)), c.r[1]);
    // 002be4  mov eax, ss
    X86_AT(c, 0x2be4u);
    c.r[0] = (uint32_t)c.sreg[2];
    // 002be6  mov es, eax
    X86_AT(c, 0x2be6u);
    x86_load_seg(c, 0, (c.r[0] & 0xFFFFu) & 0xFFFFu);
    // 002be8  sub esp, ecx
    X86_AT(c, 0x2be8u);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, c.r[1], 0, 4); }
    // 002bea  mov edi, esp
    X86_AT(c, 0x2beau);
    c.r[7] = c.r[4];
    // 002bec  mov dword ptr gs:[ebp + 8], edi
    X86_AT(c, 0x2becu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x8u)), c.r[7]);
    // 002bf0  shr ecx, 2
    X86_AT(c, 0x2bf0u);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 5, v, 0x2u, 4, w); if (w) c.r[1] = r; }
    // 002bf3  sub eax, eax
    X86_AT(c, 0x2bf3u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 002bf5  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x2bf5u);
    x86_string(c, 2, 4, 243, 4, 3);
L_2bf7:
    X86_TICK(c, 17);
    // 002bf7  push dword ptr gs:[ebp + 0x1ec]
    X86_AT(c, 0x2bf7u);
    { uint32_t v = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1ECu))); push32(c, v); }
    // 002bfe  push dword ptr gs:[ebp + 0x1f0]
    X86_AT(c, 0x2bfeu);
    { uint32_t v = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1F0u))); push32(c, v); }
    // 002c05  call 0x36dc
    X86_AT(c, 0x2c05u);
    push32(c, 0x2c0au); f_000036dc(c); X86_RET(c, 0x2c0au);
    X86_TICK(c, 7);
    // 002c0a  call 0x6120
    X86_AT(c, 0x2c0au);
    push32(c, 0x2c0fu); f_00006120(c); X86_RET(c, 0x2c0fu);
    X86_TICK(c, 7);
    // 002c0f  call 0x2c72
    X86_AT(c, 0x2c0fu);
    push32(c, 0x2c14u); f_00002c72(c); X86_RET(c, 0x2c14u);
    X86_TICK(c, 7);
    // 002c14  call 0x4454
    X86_AT(c, 0x2c14u);
    push32(c, 0x2c19u); f_00004454(c); X86_RET(c, 0x2c19u);
    X86_TICK(c, 22);
    // 002c19  pop dword ptr gs:[ebp + 0x1f0]
    X86_AT(c, 0x2c19u);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1F0u)), v); }
    // 002c20  pop dword ptr gs:[ebp + 0x1ec]
    X86_AT(c, 0x2c20u);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1ECu)), v); }
    // 002c27  test word ptr gs:[ebp + 0x108], 0xe0
    X86_AT(c, 0x2c27u);
    (void)x86_logic(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x108u))) & 0xE0u, 2);
    // 002c31  je 0x2c42
    X86_AT(c, 0x2c31u);
    if (x86_cc(c, 4)) { goto L_2c42; }
    X86_TICK(c, 7);
    // 002c33  call 0x36bc
    X86_AT(c, 0x2c33u);
    push32(c, 0x2c38u); f_000036bc(c); X86_RET(c, 0x2c38u);
    X86_TICK(c, 7);
    // 002c38  call 0x6120
    X86_AT(c, 0x2c38u);
    push32(c, 0x2c3du); f_00006120(c); X86_RET(c, 0x2c3du);
    X86_TICK(c, 7);
    // 002c3d  call 0x44a0
    X86_AT(c, 0x2c3du);
    push32(c, 0x2c42u); f_000044a0(c); X86_RET(c, 0x2c42u);
L_2c42:
    X86_TICK(c, 16);
    // 002c42  add esp, dword ptr gs:[ebp + 0x200]
    X86_AT(c, 0x2c42u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x200u))), 0, 4); }
    // 002c49  ret 
    X86_AT(c, 0x2c49u);
    c.eip = pop32(c); return;
L_2c4a:
    X86_TICK(c, 12);
    // 002c4a  test word ptr gs:[ebp + 0x108], 0xe0
    X86_AT(c, 0x2c4au);
    (void)x86_logic(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x108u))) & 0xE0u, 2);
    // 002c54  je 0x2c42
    X86_AT(c, 0x2c54u);
    if (x86_cc(c, 4)) { X86_POLL(c, 0x2c42u); goto L_2c42; }
    X86_TICK(c, 7);
    // 002c56  call 0x36bc
    X86_AT(c, 0x2c56u);
    push32(c, 0x2c5bu); f_000036bc(c); X86_RET(c, 0x2c5bu);
    X86_TICK(c, 9);
    // 002c5b  mov byte ptr gs:[ebp + 0x220], 1
    X86_AT(c, 0x2c5bu);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x220u)), 0x1u);
    // 002c63  call 0x6120
    X86_AT(c, 0x2c63u);
    push32(c, 0x2c68u); f_00006120(c); X86_RET(c, 0x2c68u);
    X86_TICK(c, 7);
    // 002c68  call 0x2c72
    X86_AT(c, 0x2c68u);
    push32(c, 0x2c6du); f_00002c72(c); X86_RET(c, 0x2c6du);
    X86_TICK(c, 7);
    // 002c6d  jmp 0x44a0
    X86_AT(c, 0x2c6du);
    goto L_44a0;
L_44a0:
    X86_TICK(c, 12);
    // 0044a0  cmp word ptr gs:[ebp + 0x1f2], 3
    X86_AT(c, 0x44a0u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1F2u))), 0x3u, 0, 2);
    // 0044a9  jb 0x44e1
    X86_AT(c, 0x44a9u);
    if (x86_cc(c, 2)) { goto L_44e1; }
    X86_TICK(c, 17);
    // 0044ab  mov dword ptr gs:[ebp + 0x1fc], esp
    X86_AT(c, 0x44abu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1FCu)), c.r[4]);
    // 0044b2  sub esp, 0x730
    X86_AT(c, 0x44b2u);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, 0x730u, 0, 4); }
    // 0044b8  mov dword ptr gs:[ebp + 0x1f8], esp
    X86_AT(c, 0x44b8u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1F8u)), c.r[4]);
    // 0044bf  sub esp, 0xa28
    X86_AT(c, 0x44bfu);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, 0xA28u, 0, 4); }
    // 0044c5  mov dword ptr gs:[ebp + 0x1f4], esp
    X86_AT(c, 0x44c5u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1F4u)), c.r[4]);
    // 0044cc  call 0x44e4
    X86_AT(c, 0x44ccu);
    push32(c, 0x44d1u); f_000044e4(c); X86_RET(c, 0x44d1u);
    X86_TICK(c, 7);
    // 0044d1  call 0x4644
    X86_AT(c, 0x44d1u);
    push32(c, 0x44d6u); f_00004644(c); X86_RET(c, 0x44d6u);
    X86_TICK(c, 7);
    // 0044d6  call 0x4700
    X86_AT(c, 0x44d6u);
    push32(c, 0x44dbu); f_00004700(c); X86_RET(c, 0x44dbu);
    X86_TICK(c, 2);
    // 0044db  add esp, 0x1158
    X86_AT(c, 0x44dbu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x1158u, 0, 4); }
L_44e1:
    X86_TICK(c, 10);
    // 0044e1  ret 
    X86_AT(c, 0x44e1u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x2b8cu, "ran off the end of a function");
}
void f_00002bb8(X86Cpu& c) {
    X86_TICK(c, 12);
    // 002bb8  test word ptr gs:[ebp + 0x108], 0xe
    X86_AT(c, 0x2bb8u);
    (void)x86_logic(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x108u))) & 0xEu, 2);
    // 002bc2  je 0x2c4a
    X86_AT(c, 0x2bc2u);
    if (x86_cc(c, 4)) { goto L_2c4a; }
    X86_TICK(c, 9);
    // 002bc8  mov byte ptr gs:[ebp + 0x1e3], 0xff
    X86_AT(c, 0x2bc8u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E3u)), 0xFFu);
    // 002bd0  call 0x28d8
    X86_AT(c, 0x2bd0u);
    push32(c, 0x2bd5u); f_000028d8(c); X86_RET(c, 0x2bd5u);
    X86_TICK(c, 7);
    // 002bd5  test al, al
    X86_AT(c, 0x2bd5u);
    (void)x86_logic(c, g8(c, 0) & g8(c, 0), 1);
    // 002bd7  je 0x2bf7
    X86_AT(c, 0x2bd7u);
    if (x86_cc(c, 4)) { goto L_2bf7; }
    X86_TICK(c, 28);
    // 002bd9  mov ecx, dword ptr gs:[ebp + 0xc]
    X86_AT(c, 0x2bd9u);
    c.r[1] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0xCu)));
    // 002bdd  mov dword ptr gs:[ebp + 0x200], ecx
    X86_AT(c, 0x2bddu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x200u)), c.r[1]);
    // 002be4  mov eax, ss
    X86_AT(c, 0x2be4u);
    c.r[0] = (uint32_t)c.sreg[2];
    // 002be6  mov es, eax
    X86_AT(c, 0x2be6u);
    x86_load_seg(c, 0, (c.r[0] & 0xFFFFu) & 0xFFFFu);
    // 002be8  sub esp, ecx
    X86_AT(c, 0x2be8u);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, c.r[1], 0, 4); }
    // 002bea  mov edi, esp
    X86_AT(c, 0x2beau);
    c.r[7] = c.r[4];
    // 002bec  mov dword ptr gs:[ebp + 8], edi
    X86_AT(c, 0x2becu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x8u)), c.r[7]);
    // 002bf0  shr ecx, 2
    X86_AT(c, 0x2bf0u);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 5, v, 0x2u, 4, w); if (w) c.r[1] = r; }
    // 002bf3  sub eax, eax
    X86_AT(c, 0x2bf3u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 002bf5  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x2bf5u);
    x86_string(c, 2, 4, 243, 4, 3);
L_2bf7:
    X86_TICK(c, 17);
    // 002bf7  push dword ptr gs:[ebp + 0x1ec]
    X86_AT(c, 0x2bf7u);
    { uint32_t v = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1ECu))); push32(c, v); }
    // 002bfe  push dword ptr gs:[ebp + 0x1f0]
    X86_AT(c, 0x2bfeu);
    { uint32_t v = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1F0u))); push32(c, v); }
    // 002c05  call 0x36dc
    X86_AT(c, 0x2c05u);
    push32(c, 0x2c0au); f_000036dc(c); X86_RET(c, 0x2c0au);
    X86_TICK(c, 7);
    // 002c0a  call 0x6120
    X86_AT(c, 0x2c0au);
    push32(c, 0x2c0fu); f_00006120(c); X86_RET(c, 0x2c0fu);
    X86_TICK(c, 7);
    // 002c0f  call 0x2c72
    X86_AT(c, 0x2c0fu);
    push32(c, 0x2c14u); f_00002c72(c); X86_RET(c, 0x2c14u);
    X86_TICK(c, 7);
    // 002c14  call 0x4454
    X86_AT(c, 0x2c14u);
    push32(c, 0x2c19u); f_00004454(c); X86_RET(c, 0x2c19u);
    X86_TICK(c, 22);
    // 002c19  pop dword ptr gs:[ebp + 0x1f0]
    X86_AT(c, 0x2c19u);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1F0u)), v); }
    // 002c20  pop dword ptr gs:[ebp + 0x1ec]
    X86_AT(c, 0x2c20u);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1ECu)), v); }
    // 002c27  test word ptr gs:[ebp + 0x108], 0xe0
    X86_AT(c, 0x2c27u);
    (void)x86_logic(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x108u))) & 0xE0u, 2);
    // 002c31  je 0x2c42
    X86_AT(c, 0x2c31u);
    if (x86_cc(c, 4)) { goto L_2c42; }
    X86_TICK(c, 7);
    // 002c33  call 0x36bc
    X86_AT(c, 0x2c33u);
    push32(c, 0x2c38u); f_000036bc(c); X86_RET(c, 0x2c38u);
    X86_TICK(c, 7);
    // 002c38  call 0x6120
    X86_AT(c, 0x2c38u);
    push32(c, 0x2c3du); f_00006120(c); X86_RET(c, 0x2c3du);
    X86_TICK(c, 7);
    // 002c3d  call 0x44a0
    X86_AT(c, 0x2c3du);
    push32(c, 0x2c42u); f_000044a0(c); X86_RET(c, 0x2c42u);
L_2c42:
    X86_TICK(c, 16);
    // 002c42  add esp, dword ptr gs:[ebp + 0x200]
    X86_AT(c, 0x2c42u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x200u))), 0, 4); }
    // 002c49  ret 
    X86_AT(c, 0x2c49u);
    c.eip = pop32(c); return;
L_2c4a:
    X86_TICK(c, 12);
    // 002c4a  test word ptr gs:[ebp + 0x108], 0xe0
    X86_AT(c, 0x2c4au);
    (void)x86_logic(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x108u))) & 0xE0u, 2);
    // 002c54  je 0x2c42
    X86_AT(c, 0x2c54u);
    if (x86_cc(c, 4)) { X86_POLL(c, 0x2c42u); goto L_2c42; }
    X86_TICK(c, 7);
    // 002c56  call 0x36bc
    X86_AT(c, 0x2c56u);
    push32(c, 0x2c5bu); f_000036bc(c); X86_RET(c, 0x2c5bu);
    X86_TICK(c, 9);
    // 002c5b  mov byte ptr gs:[ebp + 0x220], 1
    X86_AT(c, 0x2c5bu);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x220u)), 0x1u);
    // 002c63  call 0x6120
    X86_AT(c, 0x2c63u);
    push32(c, 0x2c68u); f_00006120(c); X86_RET(c, 0x2c68u);
    X86_TICK(c, 7);
    // 002c68  call 0x2c72
    X86_AT(c, 0x2c68u);
    push32(c, 0x2c6du); f_00002c72(c); X86_RET(c, 0x2c6du);
    X86_TICK(c, 7);
    // 002c6d  jmp 0x44a0
    X86_AT(c, 0x2c6du);
    goto L_44a0;
L_44a0:
    X86_TICK(c, 12);
    // 0044a0  cmp word ptr gs:[ebp + 0x1f2], 3
    X86_AT(c, 0x44a0u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1F2u))), 0x3u, 0, 2);
    // 0044a9  jb 0x44e1
    X86_AT(c, 0x44a9u);
    if (x86_cc(c, 2)) { goto L_44e1; }
    X86_TICK(c, 17);
    // 0044ab  mov dword ptr gs:[ebp + 0x1fc], esp
    X86_AT(c, 0x44abu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1FCu)), c.r[4]);
    // 0044b2  sub esp, 0x730
    X86_AT(c, 0x44b2u);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, 0x730u, 0, 4); }
    // 0044b8  mov dword ptr gs:[ebp + 0x1f8], esp
    X86_AT(c, 0x44b8u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1F8u)), c.r[4]);
    // 0044bf  sub esp, 0xa28
    X86_AT(c, 0x44bfu);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, 0xA28u, 0, 4); }
    // 0044c5  mov dword ptr gs:[ebp + 0x1f4], esp
    X86_AT(c, 0x44c5u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1F4u)), c.r[4]);
    // 0044cc  call 0x44e4
    X86_AT(c, 0x44ccu);
    push32(c, 0x44d1u); f_000044e4(c); X86_RET(c, 0x44d1u);
    X86_TICK(c, 7);
    // 0044d1  call 0x4644
    X86_AT(c, 0x44d1u);
    push32(c, 0x44d6u); f_00004644(c); X86_RET(c, 0x44d6u);
    X86_TICK(c, 7);
    // 0044d6  call 0x4700
    X86_AT(c, 0x44d6u);
    push32(c, 0x44dbu); f_00004700(c); X86_RET(c, 0x44dbu);
    X86_TICK(c, 2);
    // 0044db  add esp, 0x1158
    X86_AT(c, 0x44dbu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x1158u, 0, 4); }
L_44e1:
    X86_TICK(c, 10);
    // 0044e1  ret 
    X86_AT(c, 0x44e1u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x2bb8u, "ran off the end of a function");
}
void f_00002c72(X86Cpu& c) {
    X86_TICK(c, 19);
    // 002c72  lds esi, fword ptr gs:[ebp + 0x1ec]
    X86_AT(c, 0x2c72u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1ECu)); uint32_t o = rd32(ea); uint32_t s = rd16(ea + 4); x86_load_seg(c, 3, s); c.r[6] = o; }
    // 002c79  movzx ax, byte ptr gs:[ebp + 0x228]
    X86_AT(c, 0x2c79u);
    s16(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x228u))));
    // 002c82  test ax, ax
    X86_AT(c, 0x2c82u);
    (void)x86_logic(c, (c.r[0] & 0xFFFFu) & (c.r[0] & 0xFFFFu), 2);
    // 002c85  je 0x2c89
    X86_AT(c, 0x2c85u);
    if (x86_cc(c, 4)) { goto L_2c89; }
    X86_TICK(c, 2);
    // 002c87  dec ax
    X86_AT(c, 0x2c87u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_dec(c, v, 2)); }
L_2c89:
    X86_TICK(c, 37);
    // 002c89  shr ax, 1
    X86_AT(c, 0x2c89u);
    { uint32_t v = (c.r[0] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 2, w); if (w) s16(c, 0, r); }
    // 002c8c  mov bx, ax
    X86_AT(c, 0x2c8cu);
    s16(c, 3, (c.r[0] & 0xFFFFu));
    // 002c8f  adc bx, 0
    X86_AT(c, 0x2c8fu);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, 0x0u, c.fl & 1, 2)); }
    // 002c93  mov ecx, dword ptr gs:[ebp + 0x2c]
    X86_AT(c, 0x2c93u);
    c.r[1] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu)));
    // 002c97  shld edx, ecx, 0x10
    X86_AT(c, 0x2c97u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_double(c, true, v, c.r[1], 0x10u, 4, w); if (w) c.r[2] = r; }
    // 002c9b  sub cx, bx
    X86_AT(c, 0x2c9bu);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_sub(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
    // 002c9e  sub dx, bx
    X86_AT(c, 0x2c9eu);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_sub(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
    // 002ca1  mov bx, ax
    X86_AT(c, 0x2ca1u);
    s16(c, 3, (c.r[0] & 0xFFFFu));
    // 002ca4  add ax, word ptr gs:[ebp + 0x28]
    X86_AT(c, 0x2ca4u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x28u))), 0, 2)); }
    // 002ca9  add bx, word ptr gs:[ebp + 0x2a]
    X86_AT(c, 0x2ca9u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Au))), 0, 2)); }
    // 002cae  push word ptr gs:[ebp + 0x1f2]
    X86_AT(c, 0x2caeu);
    { uint32_t v = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1F2u))); push16(c, v); }
L_2cb6:
    X86_TICK(c, 11);
    // 002cb6  mov edi, dword ptr [esi]
    X86_AT(c, 0x2cb6u);
    c.r[7] = rd32((c.sbase[3] + (uint32_t)(c.r[6])));
    // 002cb8  cmp di, ax
    X86_AT(c, 0x2cb8u);
    (void)x86_sub(c, (c.r[7] & 0xFFFFu), (c.r[0] & 0xFFFFu), 0, 2);
    // 002cbb  jl 0x2ce0
    X86_AT(c, 0x2cbbu);
    if (x86_cc(c, 12)) { goto L_2ce0; }
    X86_TICK(c, 7);
    // 002cbd  cmp di, cx
    X86_AT(c, 0x2cbdu);
    (void)x86_sub(c, (c.r[7] & 0xFFFFu), (c.r[1] & 0xFFFFu), 0, 2);
    // 002cc0  jg 0x2ce0
    X86_AT(c, 0x2cc0u);
    if (x86_cc(c, 15)) { goto L_2ce0; }
    X86_TICK(c, 10);
    // 002cc2  shr edi, 0x10
    X86_AT(c, 0x2cc2u);
    { uint32_t v = c.r[7]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[7] = r; }
    // 002cc5  cmp di, bx
    X86_AT(c, 0x2cc5u);
    (void)x86_sub(c, (c.r[7] & 0xFFFFu), (c.r[3] & 0xFFFFu), 0, 2);
    // 002cc8  jl 0x2ce0
    X86_AT(c, 0x2cc8u);
    if (x86_cc(c, 12)) { goto L_2ce0; }
    X86_TICK(c, 7);
    // 002cca  cmp di, dx
    X86_AT(c, 0x2ccau);
    (void)x86_sub(c, (c.r[7] & 0xFFFFu), (c.r[2] & 0xFFFFu), 0, 2);
    // 002ccd  jg 0x2ce0
    X86_AT(c, 0x2ccdu);
    if (x86_cc(c, 15)) { goto L_2ce0; }
    X86_TICK(c, 13);
    // 002ccf  add esi, 4
    X86_AT(c, 0x2ccfu);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x4u, 0, 4); }
    // 002cd2  dec word ptr [esp]
    X86_AT(c, 0x2cd2u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd16(ea); wr16(ea, x86_dec(c, v, 2)); }
    // 002cd6  jne 0x2cb6
    X86_AT(c, 0x2cd6u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x2cb6u); goto L_2cb6; }
    X86_TICK(c, 9);
    // 002cd8  add esp, 2
    X86_AT(c, 0x2cd8u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x2u, 0, 4); }
    // 002cdb  jmp 0x398a
    X86_AT(c, 0x2cdbu);
    goto L_398a;
L_2ce0:
    X86_TICK(c, 9);
    // 002ce0  add esp, 2
    X86_AT(c, 0x2ce0u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x2u, 0, 4); }
    // 002ce3  jmp 0x39b4
    X86_AT(c, 0x2ce3u);
    goto L_39b4;
L_398a:
    X86_TICK(c, 32);
    // 00398a  movzx eax, byte ptr gs:[ebp + 0x1ae]
    X86_AT(c, 0x398au);
    c.r[0] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x1AEu)));
    // 003992  mov eax, dword ptr cs:[eax*4 + 0x62f0]
    X86_AT(c, 0x3992u);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0x62F0u)));
    // 00399a  mov dword ptr gs:[ebp + 0x310], eax
    X86_AT(c, 0x399au);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x310u)), c.r[0]);
    // 0039a1  mov al, byte ptr gs:[ebp + 0x220]
    X86_AT(c, 0x39a1u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x220u))));
    // 0039a8  and al, 0xf
    X86_AT(c, 0x39a8u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & 0xFu, 1)); }
    // 0039aa  add al, 0x10
    X86_AT(c, 0x39aau);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, 0x10u, 0, 1)); }
    // 0039ac  mov byte ptr gs:[ebp + 0x220], al
    X86_AT(c, 0x39acu);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x220u)), g8(c, 0));
    // 0039b3  ret 
    X86_AT(c, 0x39b3u);
    c.eip = pop32(c); return;
L_39b4:
    X86_TICK(c, 29);
    // 0039b4  movzx eax, byte ptr gs:[ebp + 0x1ae]
    X86_AT(c, 0x39b4u);
    c.r[0] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x1AEu)));
    // 0039bc  mov eax, dword ptr cs:[eax*4 + 0x62ec]
    X86_AT(c, 0x39bcu);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0x62ECu)));
    // 0039c4  mov dword ptr gs:[ebp + 0x310], eax
    X86_AT(c, 0x39c4u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x310u)), c.r[0]);
    // 0039cb  and byte ptr gs:[ebp + 0x220], 0xf
    X86_AT(c, 0x39cbu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x220u)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v & 0xFu, 1)); }
    // 0039d3  ret 
    X86_AT(c, 0x39d3u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x2c72u, "ran off the end of a function");
}
void f_00002ce8(X86Cpu& c) {
    X86_TICK(c, 11);
    // 002ce8  mov cx, word ptr [esi + 6]
    X86_AT(c, 0x2ce8u);
    s16(c, 1, rd16((c.sbase[3] + (uint32_t)(c.r[6] + 0x6u))));
    // 002cec  cmp cx, 3
    X86_AT(c, 0x2cecu);
    (void)x86_sub(c, (c.r[1] & 0xFFFFu), 0x3u, 0, 2);
    // 002cf0  jb 0x2d51
    X86_AT(c, 0x2cf0u);
    if (x86_cc(c, 2)) { goto L_2d51; }
    X86_TICK(c, 7);
    // 002cf2  cmp cx, 0x100
    X86_AT(c, 0x2cf2u);
    (void)x86_sub(c, (c.r[1] & 0xFFFFu), 0x100u, 0, 2);
    // 002cf7  ja 0x2d51
    X86_AT(c, 0x2cf7u);
    if (x86_cc(c, 7)) { goto L_2d51; }
    X86_TICK(c, 81);
    // 002cf9  mov word ptr gs:[ebp + 0x1f2], cx
    X86_AT(c, 0x2cf9u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1F2u)), (c.r[1] & 0xFFFFu));
    // 002d01  mov eax, dword ptr [esi]
    X86_AT(c, 0x2d01u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[6])));
    // 002d03  mov dword ptr gs:[ebp + 0x464], eax
    X86_AT(c, 0x2d03u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x464u)), c.r[0]);
    // 002d0a  mov ax, word ptr [esi + 4]
    X86_AT(c, 0x2d0au);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(c.r[6] + 0x4u))));
    // 002d0e  sub edx, edx
    X86_AT(c, 0x2d0eu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[2], 0, 4); }
    // 002d10  add ax, 0x7ff8
    X86_AT(c, 0x2d10u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, 0x7FF8u, 0, 2)); }
    // 002d14  mov cx, 0x168
    X86_AT(c, 0x2d14u);
    s16(c, 1, 0x168u);
    // 002d18  div cx
    X86_AT(c, 0x2d18u);
    x86_div(c, (c.r[1] & 0xFFFFu), 2, 0x2d18u);
    // 002d1b  mov word ptr gs:[ebp + 0x30c], dx
    X86_AT(c, 0x2d1bu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x30Cu)), (c.r[2] & 0xFFFFu));
    // 002d23  add esi, 8
    X86_AT(c, 0x2d23u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x8u, 0, 4); }
    // 002d26  sub esp, 0x410
    X86_AT(c, 0x2d26u);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, 0x410u, 0, 4); }
    // 002d2c  mov edi, esp
    X86_AT(c, 0x2d2cu);
    c.r[7] = c.r[4];
    // 002d2e  mov eax, ss
    X86_AT(c, 0x2d2eu);
    c.r[0] = (uint32_t)c.sreg[2];
    // 002d30  mov es, eax
    X86_AT(c, 0x2d30u);
    x86_load_seg(c, 0, (c.r[0] & 0xFFFFu) & 0xFFFFu);
    // 002d32  mov dword ptr gs:[ebp + 0x1ec], edi
    X86_AT(c, 0x2d32u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1ECu)), c.r[7]);
    // 002d39  mov word ptr gs:[ebp + 0x1f0], es
    X86_AT(c, 0x2d39u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1F0u)), (uint32_t)c.sreg[0]);
    // 002d40  call 0x5fa8
    X86_AT(c, 0x2d40u);
    push32(c, 0x2d45u); f_00005fa8(c); X86_RET(c, 0x2d45u);
    X86_TICK(c, 7);
    // 002d45  call 0x2bb8
    X86_AT(c, 0x2d45u);
    push32(c, 0x2d4au); f_00002bb8(c); X86_RET(c, 0x2d4au);
    X86_TICK(c, 12);
    // 002d4a  add esp, 0x410
    X86_AT(c, 0x2d4au);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x410u, 0, 4); }
    // 002d50  ret 
    X86_AT(c, 0x2d50u);
    c.eip = pop32(c); return;
L_2d51:
    X86_TICK(c, 12);
    // 002d51  mov byte ptr [esp + 0x21], 0xff
    X86_AT(c, 0x2d51u);
    wr8((c.sbase[2] + (uint32_t)(c.r[4] + 0x21u)), 0xFFu);
    // 002d56  ret 
    X86_AT(c, 0x2d56u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x2ce8u, "ran off the end of a function");
}
void f_00002d58(X86Cpu& c) {
    goto L_2d58;
L_2bb8:
    X86_TICK(c, 12);
    // 002bb8  test word ptr gs:[ebp + 0x108], 0xe
    X86_AT(c, 0x2bb8u);
    (void)x86_logic(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x108u))) & 0xEu, 2);
    // 002bc2  je 0x2c4a
    X86_AT(c, 0x2bc2u);
    if (x86_cc(c, 4)) { goto L_2c4a; }
    X86_TICK(c, 9);
    // 002bc8  mov byte ptr gs:[ebp + 0x1e3], 0xff
    X86_AT(c, 0x2bc8u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E3u)), 0xFFu);
    // 002bd0  call 0x28d8
    X86_AT(c, 0x2bd0u);
    push32(c, 0x2bd5u); f_000028d8(c); X86_RET(c, 0x2bd5u);
    X86_TICK(c, 7);
    // 002bd5  test al, al
    X86_AT(c, 0x2bd5u);
    (void)x86_logic(c, g8(c, 0) & g8(c, 0), 1);
    // 002bd7  je 0x2bf7
    X86_AT(c, 0x2bd7u);
    if (x86_cc(c, 4)) { goto L_2bf7; }
    X86_TICK(c, 28);
    // 002bd9  mov ecx, dword ptr gs:[ebp + 0xc]
    X86_AT(c, 0x2bd9u);
    c.r[1] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0xCu)));
    // 002bdd  mov dword ptr gs:[ebp + 0x200], ecx
    X86_AT(c, 0x2bddu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x200u)), c.r[1]);
    // 002be4  mov eax, ss
    X86_AT(c, 0x2be4u);
    c.r[0] = (uint32_t)c.sreg[2];
    // 002be6  mov es, eax
    X86_AT(c, 0x2be6u);
    x86_load_seg(c, 0, (c.r[0] & 0xFFFFu) & 0xFFFFu);
    // 002be8  sub esp, ecx
    X86_AT(c, 0x2be8u);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, c.r[1], 0, 4); }
    // 002bea  mov edi, esp
    X86_AT(c, 0x2beau);
    c.r[7] = c.r[4];
    // 002bec  mov dword ptr gs:[ebp + 8], edi
    X86_AT(c, 0x2becu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x8u)), c.r[7]);
    // 002bf0  shr ecx, 2
    X86_AT(c, 0x2bf0u);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 5, v, 0x2u, 4, w); if (w) c.r[1] = r; }
    // 002bf3  sub eax, eax
    X86_AT(c, 0x2bf3u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 002bf5  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x2bf5u);
    x86_string(c, 2, 4, 243, 4, 3);
L_2bf7:
    X86_TICK(c, 17);
    // 002bf7  push dword ptr gs:[ebp + 0x1ec]
    X86_AT(c, 0x2bf7u);
    { uint32_t v = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1ECu))); push32(c, v); }
    // 002bfe  push dword ptr gs:[ebp + 0x1f0]
    X86_AT(c, 0x2bfeu);
    { uint32_t v = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1F0u))); push32(c, v); }
    // 002c05  call 0x36dc
    X86_AT(c, 0x2c05u);
    push32(c, 0x2c0au); f_000036dc(c); X86_RET(c, 0x2c0au);
    X86_TICK(c, 7);
    // 002c0a  call 0x6120
    X86_AT(c, 0x2c0au);
    push32(c, 0x2c0fu); f_00006120(c); X86_RET(c, 0x2c0fu);
    X86_TICK(c, 7);
    // 002c0f  call 0x2c72
    X86_AT(c, 0x2c0fu);
    push32(c, 0x2c14u); f_00002c72(c); X86_RET(c, 0x2c14u);
    X86_TICK(c, 7);
    // 002c14  call 0x4454
    X86_AT(c, 0x2c14u);
    push32(c, 0x2c19u); f_00004454(c); X86_RET(c, 0x2c19u);
    X86_TICK(c, 22);
    // 002c19  pop dword ptr gs:[ebp + 0x1f0]
    X86_AT(c, 0x2c19u);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1F0u)), v); }
    // 002c20  pop dword ptr gs:[ebp + 0x1ec]
    X86_AT(c, 0x2c20u);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1ECu)), v); }
    // 002c27  test word ptr gs:[ebp + 0x108], 0xe0
    X86_AT(c, 0x2c27u);
    (void)x86_logic(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x108u))) & 0xE0u, 2);
    // 002c31  je 0x2c42
    X86_AT(c, 0x2c31u);
    if (x86_cc(c, 4)) { goto L_2c42; }
    X86_TICK(c, 7);
    // 002c33  call 0x36bc
    X86_AT(c, 0x2c33u);
    push32(c, 0x2c38u); f_000036bc(c); X86_RET(c, 0x2c38u);
    X86_TICK(c, 7);
    // 002c38  call 0x6120
    X86_AT(c, 0x2c38u);
    push32(c, 0x2c3du); f_00006120(c); X86_RET(c, 0x2c3du);
    X86_TICK(c, 7);
    // 002c3d  call 0x44a0
    X86_AT(c, 0x2c3du);
    push32(c, 0x2c42u); f_000044a0(c); X86_RET(c, 0x2c42u);
L_2c42:
    X86_TICK(c, 16);
    // 002c42  add esp, dword ptr gs:[ebp + 0x200]
    X86_AT(c, 0x2c42u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x200u))), 0, 4); }
    // 002c49  ret 
    X86_AT(c, 0x2c49u);
    c.eip = pop32(c); return;
L_2c4a:
    X86_TICK(c, 12);
    // 002c4a  test word ptr gs:[ebp + 0x108], 0xe0
    X86_AT(c, 0x2c4au);
    (void)x86_logic(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x108u))) & 0xE0u, 2);
    // 002c54  je 0x2c42
    X86_AT(c, 0x2c54u);
    if (x86_cc(c, 4)) { X86_POLL(c, 0x2c42u); goto L_2c42; }
    X86_TICK(c, 7);
    // 002c56  call 0x36bc
    X86_AT(c, 0x2c56u);
    push32(c, 0x2c5bu); f_000036bc(c); X86_RET(c, 0x2c5bu);
    X86_TICK(c, 9);
    // 002c5b  mov byte ptr gs:[ebp + 0x220], 1
    X86_AT(c, 0x2c5bu);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x220u)), 0x1u);
    // 002c63  call 0x6120
    X86_AT(c, 0x2c63u);
    push32(c, 0x2c68u); f_00006120(c); X86_RET(c, 0x2c68u);
    X86_TICK(c, 7);
    // 002c68  call 0x2c72
    X86_AT(c, 0x2c68u);
    push32(c, 0x2c6du); f_00002c72(c); X86_RET(c, 0x2c6du);
    X86_TICK(c, 7);
    // 002c6d  jmp 0x44a0
    X86_AT(c, 0x2c6du);
    goto L_44a0;
L_2d58:
    X86_TICK(c, 13);
    // 002d58  mov word ptr gs:[ebp + 0x1f2], 3
    X86_AT(c, 0x2d58u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1F2u)), 0x3u);
    // 002d62  mov dword ptr gs:[ebp + 0x1ec], esi
    X86_AT(c, 0x2d62u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1ECu)), c.r[6]);
    // 002d69  mov word ptr gs:[ebp + 0x1f0], ds
    X86_AT(c, 0x2d69u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1F0u)), (uint32_t)c.sreg[3]);
    // 002d70  jmp 0x2bb8
    X86_AT(c, 0x2d70u);
    X86_POLL(c, 0x2bb8u); goto L_2bb8;
L_44a0:
    X86_TICK(c, 12);
    // 0044a0  cmp word ptr gs:[ebp + 0x1f2], 3
    X86_AT(c, 0x44a0u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1F2u))), 0x3u, 0, 2);
    // 0044a9  jb 0x44e1
    X86_AT(c, 0x44a9u);
    if (x86_cc(c, 2)) { goto L_44e1; }
    X86_TICK(c, 17);
    // 0044ab  mov dword ptr gs:[ebp + 0x1fc], esp
    X86_AT(c, 0x44abu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1FCu)), c.r[4]);
    // 0044b2  sub esp, 0x730
    X86_AT(c, 0x44b2u);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, 0x730u, 0, 4); }
    // 0044b8  mov dword ptr gs:[ebp + 0x1f8], esp
    X86_AT(c, 0x44b8u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1F8u)), c.r[4]);
    // 0044bf  sub esp, 0xa28
    X86_AT(c, 0x44bfu);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, 0xA28u, 0, 4); }
    // 0044c5  mov dword ptr gs:[ebp + 0x1f4], esp
    X86_AT(c, 0x44c5u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1F4u)), c.r[4]);
    // 0044cc  call 0x44e4
    X86_AT(c, 0x44ccu);
    push32(c, 0x44d1u); f_000044e4(c); X86_RET(c, 0x44d1u);
    X86_TICK(c, 7);
    // 0044d1  call 0x4644
    X86_AT(c, 0x44d1u);
    push32(c, 0x44d6u); f_00004644(c); X86_RET(c, 0x44d6u);
    X86_TICK(c, 7);
    // 0044d6  call 0x4700
    X86_AT(c, 0x44d6u);
    push32(c, 0x44dbu); f_00004700(c); X86_RET(c, 0x44dbu);
    X86_TICK(c, 2);
    // 0044db  add esp, 0x1158
    X86_AT(c, 0x44dbu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x1158u, 0, 4); }
L_44e1:
    X86_TICK(c, 10);
    // 0044e1  ret 
    X86_AT(c, 0x44e1u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x2d58u, "ran off the end of a function");
}
void f_00002d78(X86Cpu& c) {
    X86_TICK(c, 23);
    // 002d78  mov eax, dword ptr [esi]
    X86_AT(c, 0x2d78u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[6])));
    // 002d7a  mov dword ptr gs:[ebp + 0x1c4], eax
    X86_AT(c, 0x2d7au);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C4u)), c.r[0]);
    // 002d81  mov eax, dword ptr [esi + 4]
    X86_AT(c, 0x2d81u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0x4u)));
    // 002d84  mov dword ptr gs:[ebp + 0x1c8], eax
    X86_AT(c, 0x2d84u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C8u)), c.r[0]);
    // 002d8b  mov al, byte ptr gs:[ebp + 0x108]
    X86_AT(c, 0x2d8bu);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x108u))));
    // 002d92  test al, 0xe
    X86_AT(c, 0x2d92u);
    (void)x86_logic(c, g8(c, 0) & 0xEu, 1);
    // 002d94  je 0x2e4c
    X86_AT(c, 0x2d94u);
    if (x86_cc(c, 4)) { goto L_2e4c; }
    X86_TICK(c, 12);
    // 002d9a  cmp byte ptr gs:[ebp + 0x228], 1
    X86_AT(c, 0x2d9au);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x228u))), 0x1u, 0, 1);
    // 002da2  jne 0x2db9
    X86_AT(c, 0x2da2u);
    if (x86_cc(c, 5)) { goto L_2db9; }
    X86_TICK(c, 7);
    // 002da4  test al, 0xe0
    X86_AT(c, 0x2da4u);
    (void)x86_logic(c, g8(c, 0) & 0xE0u, 1);
    // 002da6  je 0x2db2
    X86_AT(c, 0x2da6u);
    if (x86_cc(c, 4)) { goto L_2db2; }
    X86_TICK(c, 12);
    // 002da8  cmp dword ptr gs:[ebp + 0x1dc], 0xffffffff
    X86_AT(c, 0x2da8u);
    (void)x86_sub(c, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1DCu))), 0xFFFFFFFFu, 0, 4);
    // 002db0  jne 0x2db9
    X86_AT(c, 0x2db0u);
    if (x86_cc(c, 5)) { goto L_2db9; }
L_2db2:
    X86_TICK(c, 7);
    // 002db2  call 0x2975
    X86_AT(c, 0x2db2u);
    push32(c, 0x2db7u); f_00002975(c); X86_RET(c, 0x2db7u);
    X86_TICK(c, 7);
    // 002db7  jmp 0x2de0
    X86_AT(c, 0x2db7u);
    goto L_2de0;
L_2db9:
    X86_TICK(c, 7);
    // 002db9  call 0x28d8
    X86_AT(c, 0x2db9u);
    push32(c, 0x2dbeu); f_000028d8(c); X86_RET(c, 0x2dbeu);
    X86_TICK(c, 7);
    // 002dbe  test al, al
    X86_AT(c, 0x2dbeu);
    (void)x86_logic(c, g8(c, 0) & g8(c, 0), 1);
    // 002dc0  je 0x2de0
    X86_AT(c, 0x2dc0u);
    if (x86_cc(c, 4)) { goto L_2de0; }
    X86_TICK(c, 28);
    // 002dc2  mov ecx, dword ptr gs:[ebp + 0xc]
    X86_AT(c, 0x2dc2u);
    c.r[1] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0xCu)));
    // 002dc6  mov dword ptr gs:[ebp + 0x200], ecx
    X86_AT(c, 0x2dc6u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x200u)), c.r[1]);
    // 002dcd  mov eax, ss
    X86_AT(c, 0x2dcdu);
    c.r[0] = (uint32_t)c.sreg[2];
    // 002dcf  mov es, eax
    X86_AT(c, 0x2dcfu);
    x86_load_seg(c, 0, (c.r[0] & 0xFFFFu) & 0xFFFFu);
    // 002dd1  sub esp, ecx
    X86_AT(c, 0x2dd1u);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, c.r[1], 0, 4); }
    // 002dd3  mov edi, esp
    X86_AT(c, 0x2dd3u);
    c.r[7] = c.r[4];
    // 002dd5  mov dword ptr gs:[ebp + 8], edi
    X86_AT(c, 0x2dd5u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x8u)), c.r[7]);
    // 002dd9  shr ecx, 2
    X86_AT(c, 0x2dd9u);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 5, v, 0x2u, 4, w); if (w) c.r[1] = r; }
    // 002ddc  sub eax, eax
    X86_AT(c, 0x2ddcu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 002dde  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x2ddeu);
    x86_string(c, 2, 4, 243, 4, 3);
L_2de0:
    X86_TICK(c, 9);
    // 002de0  mov byte ptr gs:[ebp + 0x1e3], 0xff
    X86_AT(c, 0x2de0u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E3u)), 0xFFu);
    // 002de8  call 0x36dc
    X86_AT(c, 0x2de8u);
    push32(c, 0x2dedu); f_000036dc(c); X86_RET(c, 0x2dedu);
    X86_TICK(c, 7);
    // 002ded  call 0x6120
    X86_AT(c, 0x2dedu);
    push32(c, 0x2df2u); f_00006120(c); X86_RET(c, 0x2df2u);
    X86_TICK(c, 7);
    // 002df2  call 0x3d70
    X86_AT(c, 0x2df2u);
    push32(c, 0x2df7u); f_00003d70(c); X86_RET(c, 0x2df7u);
    X86_TICK(c, 12);
    // 002df7  test word ptr gs:[ebp + 0x108], 0xe0
    X86_AT(c, 0x2df7u);
    (void)x86_logic(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x108u))) & 0xE0u, 2);
    // 002e01  je 0x2e3a
    X86_AT(c, 0x2e01u);
    if (x86_cc(c, 4)) { goto L_2e3a; }
    X86_TICK(c, 7);
    // 002e03  call 0x36bc
    X86_AT(c, 0x2e03u);
    push32(c, 0x2e08u); f_000036bc(c); X86_RET(c, 0x2e08u);
    X86_TICK(c, 11);
    // 002e08  mov al, byte ptr gs:[ebp + 0x220]
    X86_AT(c, 0x2e08u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x220u))));
    // 002e0f  cmp al, 0x10
    X86_AT(c, 0x2e0fu);
    (void)x86_sub(c, g8(c, 0), 0x10u, 0, 1);
    // 002e11  jae 0x2e15
    X86_AT(c, 0x2e11u);
    if (x86_cc(c, 3)) { goto L_2e15; }
    X86_TICK(c, 2);
    // 002e13  add al, 0xe
    X86_AT(c, 0x2e13u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, 0xEu, 0, 1)); }
L_2e15:
    X86_TICK(c, 11);
    // 002e15  add al, 4
    X86_AT(c, 0x2e15u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, 0x4u, 0, 1)); }
    // 002e17  mov byte ptr gs:[ebp + 0x220], al
    X86_AT(c, 0x2e17u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x220u)), g8(c, 0));
    // 002e1e  call 0x6120
    X86_AT(c, 0x2e1eu);
    push32(c, 0x2e23u); f_00006120(c); X86_RET(c, 0x2e23u);
    X86_TICK(c, 21);
    // 002e23  sub eax, eax
    X86_AT(c, 0x2e23u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 002e25  btr word ptr gs:[ebp + 0x221], 7
    X86_AT(c, 0x2e25u);
    x86_bitop(c, 2, (c.sbase[5] + (uint32_t)(c.r[5] + 0x221u)), false, 0x7u, 2, nullptr, 0);
    // 002e2f  setb al
    X86_AT(c, 0x2e2fu);
    s8(c, 0, x86_cc(c, 2) ? 1u : 0u);
    // 002e32  call dword ptr cs:[eax*4 + 0x2e44]
    X86_AT(c, 0x2e32u);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0x2E44u))); push32(c, 0x2e3au);
      switch (t) {
      case 0x3fccu: f_00003fcc(c); break;
      case 0x4026u: f_00004026(c); break;
      default: x86_call(c, t); }
      X86_RET(c, 0x2e3au); }
L_2e3a:
    X86_TICK(c, 16);
    // 002e3a  add esp, dword ptr gs:[ebp + 0x200]
    X86_AT(c, 0x2e3au);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x200u))), 0, 4); }
    // 002e41  ret 
    X86_AT(c, 0x2e41u);
    c.eip = pop32(c); return;
L_2e4c:
    X86_TICK(c, 12);
    // 002e4c  test word ptr gs:[ebp + 0x108], 0xe0
    X86_AT(c, 0x2e4cu);
    (void)x86_logic(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x108u))) & 0xE0u, 2);
    // 002e56  je 0x2e3a
    X86_AT(c, 0x2e56u);
    if (x86_cc(c, 4)) { X86_POLL(c, 0x2e3au); goto L_2e3a; }
    X86_TICK(c, 7);
    // 002e58  call 0x36bc
    X86_AT(c, 0x2e58u);
    push32(c, 0x2e5du); f_000036bc(c); X86_RET(c, 0x2e5du);
    X86_TICK(c, 9);
    // 002e5d  mov byte ptr gs:[ebp + 0x220], 0x13
    X86_AT(c, 0x2e5du);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x220u)), 0x13u);
    // 002e65  call 0x6120
    X86_AT(c, 0x2e65u);
    push32(c, 0x2e6au); f_00006120(c); X86_RET(c, 0x2e6au);
    X86_TICK(c, 7);
    // 002e6a  call 0x38e9
    X86_AT(c, 0x2e6au);
    push32(c, 0x2e6fu); f_000038e9(c); X86_RET(c, 0x2e6fu);
    X86_TICK(c, 5);
    // 002e6f  jae 0x2e79
    X86_AT(c, 0x2e6fu);
    if (x86_cc(c, 3)) { goto L_2e79; }
    X86_TICK(c, 7);
    // 002e71  add byte ptr gs:[ebp + 0x220], 2
    X86_AT(c, 0x2e71u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x220u)); uint32_t v = rd8(ea); wr8(ea, x86_add(c, v, 0x2u, 0, 1)); }
L_2e79:
    X86_TICK(c, 7);
    // 002e79  jmp 0x4026
    X86_AT(c, 0x2e79u);
    goto L_4026;
L_4026:
    X86_TICK(c, 15);
    // 004026  mov eax, dword ptr gs:[ebp + 0x1c4]
    X86_AT(c, 0x4026u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C4u)));
    // 00402d  mov ecx, dword ptr gs:[ebp + 0x1c8]
    X86_AT(c, 0x402du);
    c.r[1] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C8u)));
    // 004034  cmp ax, cx
    X86_AT(c, 0x4034u);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), (c.r[1] & 0xFFFFu), 0, 2);
    // 004037  jle 0x403b
    X86_AT(c, 0x4037u);
    if (x86_cc(c, 14)) { goto L_403b; }
    X86_TICK(c, 3);
    // 004039  xchg cx, ax
    X86_AT(c, 0x4039u);
    { uint32_t t = (c.r[1] & 0xFFFFu); s16(c, 1, (c.r[0] & 0xFFFFu)); s16(c, 0, t); }
L_403b:
    X86_TICK(c, 17);
    // 00403b  mov word ptr gs:[ebp + 0x222], ax
    X86_AT(c, 0x403bu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u)), (c.r[0] & 0xFFFFu));
    // 004043  mov word ptr gs:[ebp + 0x224], cx
    X86_AT(c, 0x4043u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u)), (c.r[1] & 0xFFFFu));
    // 00404b  shr eax, 0x10
    X86_AT(c, 0x404bu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00404e  shr ecx, 0x10
    X86_AT(c, 0x404eu);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[1] = r; }
    // 004051  cmp ax, cx
    X86_AT(c, 0x4051u);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), (c.r[1] & 0xFFFFu), 0, 2);
    // 004054  jle 0x4057
    X86_AT(c, 0x4054u);
    if (x86_cc(c, 14)) { goto L_4057; }
    X86_TICK(c, 3);
    // 004056  xchg ecx, eax
    X86_AT(c, 0x4056u);
    { uint32_t t = c.r[1]; c.r[1] = c.r[0]; c.r[0] = t; }
L_4057:
    X86_TICK(c, 60);
    // 004057  mov word ptr gs:[ebp + 0x226], ax
    X86_AT(c, 0x4057u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u)), (c.r[0] & 0xFFFFu));
    // 00405f  sub cx, ax
    X86_AT(c, 0x405fu);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_sub(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 004062  inc ecx
    X86_AT(c, 0x4062u);
    { uint32_t v = c.r[1]; c.r[1] = x86_inc(c, v, 4); }
    // 004063  push ecx
    X86_AT(c, 0x4063u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 004064  mov es, word ptr gs:[ebp + 4]
    X86_AT(c, 0x4064u);
    x86_load_seg(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x4u))) & 0xFFFFu);
    // 004068  movsx eax, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x4068u);
    c.r[0] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u)));
    // 004070  imul eax, dword ptr gs:[ebp + 0x20]
    X86_AT(c, 0x4070u);
    c.r[0] = x86_imul2(c, c.r[0], rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x20u))), 4);
    // 004075  add eax, dword ptr gs:[ebp]
    X86_AT(c, 0x4075u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5]))), 0, 4); }
    // 004079  mov dword ptr gs:[ebp + 0x1cc], eax
    X86_AT(c, 0x4079u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu)), c.r[0]);
    // 004080  movzx eax, byte ptr gs:[ebp + 0x220]
    X86_AT(c, 0x4080u);
    c.r[0] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x220u)));
    // 004088  mov eax, dword ptr cs:[eax*4 + 0x7fec]
    X86_AT(c, 0x4088u);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0x7FECu)));
    // 004090  mov dword ptr gs:[ebp + 0x324], eax
    X86_AT(c, 0x4090u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x324u)), c.r[0]);
L_4097:
    X86_TICK(c, 7);
    // 004097  call dword ptr gs:[ebp + 0x324]
    X86_AT(c, 0x4097u);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x324u))); push32(c, 0x409eu); x86_call(c, t); X86_RET(c, 0x409eu); }
    X86_TICK(c, 28);
    // 00409e  inc word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x409eu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x226u)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
    // 0040a6  mov eax, dword ptr gs:[ebp + 0x20]
    X86_AT(c, 0x40a6u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x20u)));
    // 0040aa  add dword ptr gs:[ebp + 0x1cc], eax
    X86_AT(c, 0x40aau);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 0040b1  dec dword ptr [esp]
    X86_AT(c, 0x40b1u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 0040b4  jne 0x4097
    X86_AT(c, 0x40b4u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x4097u); goto L_4097; }
    X86_TICK(c, 12);
    // 0040b6  add esp, 4
    X86_AT(c, 0x40b6u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0040b9  ret 
    X86_AT(c, 0x40b9u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x2d78u, "ran off the end of a function");
}
void f_00002d7a(X86Cpu& c) {
    X86_TICK(c, 19);
    // 002d7a  mov dword ptr gs:[ebp + 0x1c4], eax
    X86_AT(c, 0x2d7au);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C4u)), c.r[0]);
    // 002d81  mov eax, dword ptr [esi + 4]
    X86_AT(c, 0x2d81u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0x4u)));
    // 002d84  mov dword ptr gs:[ebp + 0x1c8], eax
    X86_AT(c, 0x2d84u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C8u)), c.r[0]);
    // 002d8b  mov al, byte ptr gs:[ebp + 0x108]
    X86_AT(c, 0x2d8bu);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x108u))));
    // 002d92  test al, 0xe
    X86_AT(c, 0x2d92u);
    (void)x86_logic(c, g8(c, 0) & 0xEu, 1);
    // 002d94  je 0x2e4c
    X86_AT(c, 0x2d94u);
    if (x86_cc(c, 4)) { goto L_2e4c; }
    X86_TICK(c, 12);
    // 002d9a  cmp byte ptr gs:[ebp + 0x228], 1
    X86_AT(c, 0x2d9au);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x228u))), 0x1u, 0, 1);
    // 002da2  jne 0x2db9
    X86_AT(c, 0x2da2u);
    if (x86_cc(c, 5)) { goto L_2db9; }
    X86_TICK(c, 7);
    // 002da4  test al, 0xe0
    X86_AT(c, 0x2da4u);
    (void)x86_logic(c, g8(c, 0) & 0xE0u, 1);
    // 002da6  je 0x2db2
    X86_AT(c, 0x2da6u);
    if (x86_cc(c, 4)) { goto L_2db2; }
    X86_TICK(c, 12);
    // 002da8  cmp dword ptr gs:[ebp + 0x1dc], 0xffffffff
    X86_AT(c, 0x2da8u);
    (void)x86_sub(c, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1DCu))), 0xFFFFFFFFu, 0, 4);
    // 002db0  jne 0x2db9
    X86_AT(c, 0x2db0u);
    if (x86_cc(c, 5)) { goto L_2db9; }
L_2db2:
    X86_TICK(c, 7);
    // 002db2  call 0x2975
    X86_AT(c, 0x2db2u);
    push32(c, 0x2db7u); f_00002975(c); X86_RET(c, 0x2db7u);
    X86_TICK(c, 7);
    // 002db7  jmp 0x2de0
    X86_AT(c, 0x2db7u);
    goto L_2de0;
L_2db9:
    X86_TICK(c, 7);
    // 002db9  call 0x28d8
    X86_AT(c, 0x2db9u);
    push32(c, 0x2dbeu); f_000028d8(c); X86_RET(c, 0x2dbeu);
    X86_TICK(c, 7);
    // 002dbe  test al, al
    X86_AT(c, 0x2dbeu);
    (void)x86_logic(c, g8(c, 0) & g8(c, 0), 1);
    // 002dc0  je 0x2de0
    X86_AT(c, 0x2dc0u);
    if (x86_cc(c, 4)) { goto L_2de0; }
    X86_TICK(c, 28);
    // 002dc2  mov ecx, dword ptr gs:[ebp + 0xc]
    X86_AT(c, 0x2dc2u);
    c.r[1] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0xCu)));
    // 002dc6  mov dword ptr gs:[ebp + 0x200], ecx
    X86_AT(c, 0x2dc6u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x200u)), c.r[1]);
    // 002dcd  mov eax, ss
    X86_AT(c, 0x2dcdu);
    c.r[0] = (uint32_t)c.sreg[2];
    // 002dcf  mov es, eax
    X86_AT(c, 0x2dcfu);
    x86_load_seg(c, 0, (c.r[0] & 0xFFFFu) & 0xFFFFu);
    // 002dd1  sub esp, ecx
    X86_AT(c, 0x2dd1u);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, c.r[1], 0, 4); }
    // 002dd3  mov edi, esp
    X86_AT(c, 0x2dd3u);
    c.r[7] = c.r[4];
    // 002dd5  mov dword ptr gs:[ebp + 8], edi
    X86_AT(c, 0x2dd5u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x8u)), c.r[7]);
    // 002dd9  shr ecx, 2
    X86_AT(c, 0x2dd9u);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 5, v, 0x2u, 4, w); if (w) c.r[1] = r; }
    // 002ddc  sub eax, eax
    X86_AT(c, 0x2ddcu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 002dde  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x2ddeu);
    x86_string(c, 2, 4, 243, 4, 3);
L_2de0:
    X86_TICK(c, 9);
    // 002de0  mov byte ptr gs:[ebp + 0x1e3], 0xff
    X86_AT(c, 0x2de0u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E3u)), 0xFFu);
    // 002de8  call 0x36dc
    X86_AT(c, 0x2de8u);
    push32(c, 0x2dedu); f_000036dc(c); X86_RET(c, 0x2dedu);
    X86_TICK(c, 7);
    // 002ded  call 0x6120
    X86_AT(c, 0x2dedu);
    push32(c, 0x2df2u); f_00006120(c); X86_RET(c, 0x2df2u);
    X86_TICK(c, 7);
    // 002df2  call 0x3d70
    X86_AT(c, 0x2df2u);
    push32(c, 0x2df7u); f_00003d70(c); X86_RET(c, 0x2df7u);
    X86_TICK(c, 12);
    // 002df7  test word ptr gs:[ebp + 0x108], 0xe0
    X86_AT(c, 0x2df7u);
    (void)x86_logic(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x108u))) & 0xE0u, 2);
    // 002e01  je 0x2e3a
    X86_AT(c, 0x2e01u);
    if (x86_cc(c, 4)) { goto L_2e3a; }
    X86_TICK(c, 7);
    // 002e03  call 0x36bc
    X86_AT(c, 0x2e03u);
    push32(c, 0x2e08u); f_000036bc(c); X86_RET(c, 0x2e08u);
    X86_TICK(c, 11);
    // 002e08  mov al, byte ptr gs:[ebp + 0x220]
    X86_AT(c, 0x2e08u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x220u))));
    // 002e0f  cmp al, 0x10
    X86_AT(c, 0x2e0fu);
    (void)x86_sub(c, g8(c, 0), 0x10u, 0, 1);
    // 002e11  jae 0x2e15
    X86_AT(c, 0x2e11u);
    if (x86_cc(c, 3)) { goto L_2e15; }
    X86_TICK(c, 2);
    // 002e13  add al, 0xe
    X86_AT(c, 0x2e13u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, 0xEu, 0, 1)); }
L_2e15:
    X86_TICK(c, 11);
    // 002e15  add al, 4
    X86_AT(c, 0x2e15u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, 0x4u, 0, 1)); }
    // 002e17  mov byte ptr gs:[ebp + 0x220], al
    X86_AT(c, 0x2e17u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x220u)), g8(c, 0));
    // 002e1e  call 0x6120
    X86_AT(c, 0x2e1eu);
    push32(c, 0x2e23u); f_00006120(c); X86_RET(c, 0x2e23u);
    X86_TICK(c, 21);
    // 002e23  sub eax, eax
    X86_AT(c, 0x2e23u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 002e25  btr word ptr gs:[ebp + 0x221], 7
    X86_AT(c, 0x2e25u);
    x86_bitop(c, 2, (c.sbase[5] + (uint32_t)(c.r[5] + 0x221u)), false, 0x7u, 2, nullptr, 0);
    // 002e2f  setb al
    X86_AT(c, 0x2e2fu);
    s8(c, 0, x86_cc(c, 2) ? 1u : 0u);
    // 002e32  call dword ptr cs:[eax*4 + 0x2e44]
    X86_AT(c, 0x2e32u);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0x2E44u))); push32(c, 0x2e3au);
      switch (t) {
      case 0x3fccu: f_00003fcc(c); break;
      case 0x4026u: f_00004026(c); break;
      default: x86_call(c, t); }
      X86_RET(c, 0x2e3au); }
L_2e3a:
    X86_TICK(c, 16);
    // 002e3a  add esp, dword ptr gs:[ebp + 0x200]
    X86_AT(c, 0x2e3au);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x200u))), 0, 4); }
    // 002e41  ret 
    X86_AT(c, 0x2e41u);
    c.eip = pop32(c); return;
L_2e4c:
    X86_TICK(c, 12);
    // 002e4c  test word ptr gs:[ebp + 0x108], 0xe0
    X86_AT(c, 0x2e4cu);
    (void)x86_logic(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x108u))) & 0xE0u, 2);
    // 002e56  je 0x2e3a
    X86_AT(c, 0x2e56u);
    if (x86_cc(c, 4)) { X86_POLL(c, 0x2e3au); goto L_2e3a; }
    X86_TICK(c, 7);
    // 002e58  call 0x36bc
    X86_AT(c, 0x2e58u);
    push32(c, 0x2e5du); f_000036bc(c); X86_RET(c, 0x2e5du);
    X86_TICK(c, 9);
    // 002e5d  mov byte ptr gs:[ebp + 0x220], 0x13
    X86_AT(c, 0x2e5du);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x220u)), 0x13u);
    // 002e65  call 0x6120
    X86_AT(c, 0x2e65u);
    push32(c, 0x2e6au); f_00006120(c); X86_RET(c, 0x2e6au);
    X86_TICK(c, 7);
    // 002e6a  call 0x38e9
    X86_AT(c, 0x2e6au);
    push32(c, 0x2e6fu); f_000038e9(c); X86_RET(c, 0x2e6fu);
    X86_TICK(c, 5);
    // 002e6f  jae 0x2e79
    X86_AT(c, 0x2e6fu);
    if (x86_cc(c, 3)) { goto L_2e79; }
    X86_TICK(c, 7);
    // 002e71  add byte ptr gs:[ebp + 0x220], 2
    X86_AT(c, 0x2e71u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x220u)); uint32_t v = rd8(ea); wr8(ea, x86_add(c, v, 0x2u, 0, 1)); }
L_2e79:
    X86_TICK(c, 7);
    // 002e79  jmp 0x4026
    X86_AT(c, 0x2e79u);
    goto L_4026;
L_4026:
    X86_TICK(c, 15);
    // 004026  mov eax, dword ptr gs:[ebp + 0x1c4]
    X86_AT(c, 0x4026u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C4u)));
    // 00402d  mov ecx, dword ptr gs:[ebp + 0x1c8]
    X86_AT(c, 0x402du);
    c.r[1] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C8u)));
    // 004034  cmp ax, cx
    X86_AT(c, 0x4034u);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), (c.r[1] & 0xFFFFu), 0, 2);
    // 004037  jle 0x403b
    X86_AT(c, 0x4037u);
    if (x86_cc(c, 14)) { goto L_403b; }
    X86_TICK(c, 3);
    // 004039  xchg cx, ax
    X86_AT(c, 0x4039u);
    { uint32_t t = (c.r[1] & 0xFFFFu); s16(c, 1, (c.r[0] & 0xFFFFu)); s16(c, 0, t); }
L_403b:
    X86_TICK(c, 17);
    // 00403b  mov word ptr gs:[ebp + 0x222], ax
    X86_AT(c, 0x403bu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u)), (c.r[0] & 0xFFFFu));
    // 004043  mov word ptr gs:[ebp + 0x224], cx
    X86_AT(c, 0x4043u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u)), (c.r[1] & 0xFFFFu));
    // 00404b  shr eax, 0x10
    X86_AT(c, 0x404bu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00404e  shr ecx, 0x10
    X86_AT(c, 0x404eu);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[1] = r; }
    // 004051  cmp ax, cx
    X86_AT(c, 0x4051u);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), (c.r[1] & 0xFFFFu), 0, 2);
    // 004054  jle 0x4057
    X86_AT(c, 0x4054u);
    if (x86_cc(c, 14)) { goto L_4057; }
    X86_TICK(c, 3);
    // 004056  xchg ecx, eax
    X86_AT(c, 0x4056u);
    { uint32_t t = c.r[1]; c.r[1] = c.r[0]; c.r[0] = t; }
L_4057:
    X86_TICK(c, 60);
    // 004057  mov word ptr gs:[ebp + 0x226], ax
    X86_AT(c, 0x4057u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u)), (c.r[0] & 0xFFFFu));
    // 00405f  sub cx, ax
    X86_AT(c, 0x405fu);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_sub(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 004062  inc ecx
    X86_AT(c, 0x4062u);
    { uint32_t v = c.r[1]; c.r[1] = x86_inc(c, v, 4); }
    // 004063  push ecx
    X86_AT(c, 0x4063u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 004064  mov es, word ptr gs:[ebp + 4]
    X86_AT(c, 0x4064u);
    x86_load_seg(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x4u))) & 0xFFFFu);
    // 004068  movsx eax, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x4068u);
    c.r[0] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u)));
    // 004070  imul eax, dword ptr gs:[ebp + 0x20]
    X86_AT(c, 0x4070u);
    c.r[0] = x86_imul2(c, c.r[0], rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x20u))), 4);
    // 004075  add eax, dword ptr gs:[ebp]
    X86_AT(c, 0x4075u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5]))), 0, 4); }
    // 004079  mov dword ptr gs:[ebp + 0x1cc], eax
    X86_AT(c, 0x4079u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu)), c.r[0]);
    // 004080  movzx eax, byte ptr gs:[ebp + 0x220]
    X86_AT(c, 0x4080u);
    c.r[0] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x220u)));
    // 004088  mov eax, dword ptr cs:[eax*4 + 0x7fec]
    X86_AT(c, 0x4088u);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0x7FECu)));
    // 004090  mov dword ptr gs:[ebp + 0x324], eax
    X86_AT(c, 0x4090u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x324u)), c.r[0]);
L_4097:
    X86_TICK(c, 7);
    // 004097  call dword ptr gs:[ebp + 0x324]
    X86_AT(c, 0x4097u);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x324u))); push32(c, 0x409eu); x86_call(c, t); X86_RET(c, 0x409eu); }
    X86_TICK(c, 28);
    // 00409e  inc word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x409eu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x226u)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
    // 0040a6  mov eax, dword ptr gs:[ebp + 0x20]
    X86_AT(c, 0x40a6u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x20u)));
    // 0040aa  add dword ptr gs:[ebp + 0x1cc], eax
    X86_AT(c, 0x40aau);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 0040b1  dec dword ptr [esp]
    X86_AT(c, 0x40b1u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 0040b4  jne 0x4097
    X86_AT(c, 0x40b4u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x4097u); goto L_4097; }
    X86_TICK(c, 12);
    // 0040b6  add esp, 4
    X86_AT(c, 0x40b6u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0040b9  ret 
    X86_AT(c, 0x40b9u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x2d7au, "ran off the end of a function");
}
void f_00002d81(X86Cpu& c) {
    X86_TICK(c, 17);
    // 002d81  mov eax, dword ptr [esi + 4]
    X86_AT(c, 0x2d81u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0x4u)));
    // 002d84  mov dword ptr gs:[ebp + 0x1c8], eax
    X86_AT(c, 0x2d84u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C8u)), c.r[0]);
    // 002d8b  mov al, byte ptr gs:[ebp + 0x108]
    X86_AT(c, 0x2d8bu);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x108u))));
    // 002d92  test al, 0xe
    X86_AT(c, 0x2d92u);
    (void)x86_logic(c, g8(c, 0) & 0xEu, 1);
    // 002d94  je 0x2e4c
    X86_AT(c, 0x2d94u);
    if (x86_cc(c, 4)) { goto L_2e4c; }
    X86_TICK(c, 12);
    // 002d9a  cmp byte ptr gs:[ebp + 0x228], 1
    X86_AT(c, 0x2d9au);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x228u))), 0x1u, 0, 1);
    // 002da2  jne 0x2db9
    X86_AT(c, 0x2da2u);
    if (x86_cc(c, 5)) { goto L_2db9; }
    X86_TICK(c, 7);
    // 002da4  test al, 0xe0
    X86_AT(c, 0x2da4u);
    (void)x86_logic(c, g8(c, 0) & 0xE0u, 1);
    // 002da6  je 0x2db2
    X86_AT(c, 0x2da6u);
    if (x86_cc(c, 4)) { goto L_2db2; }
    X86_TICK(c, 12);
    // 002da8  cmp dword ptr gs:[ebp + 0x1dc], 0xffffffff
    X86_AT(c, 0x2da8u);
    (void)x86_sub(c, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1DCu))), 0xFFFFFFFFu, 0, 4);
    // 002db0  jne 0x2db9
    X86_AT(c, 0x2db0u);
    if (x86_cc(c, 5)) { goto L_2db9; }
L_2db2:
    X86_TICK(c, 7);
    // 002db2  call 0x2975
    X86_AT(c, 0x2db2u);
    push32(c, 0x2db7u); f_00002975(c); X86_RET(c, 0x2db7u);
    X86_TICK(c, 7);
    // 002db7  jmp 0x2de0
    X86_AT(c, 0x2db7u);
    goto L_2de0;
L_2db9:
    X86_TICK(c, 7);
    // 002db9  call 0x28d8
    X86_AT(c, 0x2db9u);
    push32(c, 0x2dbeu); f_000028d8(c); X86_RET(c, 0x2dbeu);
    X86_TICK(c, 7);
    // 002dbe  test al, al
    X86_AT(c, 0x2dbeu);
    (void)x86_logic(c, g8(c, 0) & g8(c, 0), 1);
    // 002dc0  je 0x2de0
    X86_AT(c, 0x2dc0u);
    if (x86_cc(c, 4)) { goto L_2de0; }
    X86_TICK(c, 28);
    // 002dc2  mov ecx, dword ptr gs:[ebp + 0xc]
    X86_AT(c, 0x2dc2u);
    c.r[1] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0xCu)));
    // 002dc6  mov dword ptr gs:[ebp + 0x200], ecx
    X86_AT(c, 0x2dc6u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x200u)), c.r[1]);
    // 002dcd  mov eax, ss
    X86_AT(c, 0x2dcdu);
    c.r[0] = (uint32_t)c.sreg[2];
    // 002dcf  mov es, eax
    X86_AT(c, 0x2dcfu);
    x86_load_seg(c, 0, (c.r[0] & 0xFFFFu) & 0xFFFFu);
    // 002dd1  sub esp, ecx
    X86_AT(c, 0x2dd1u);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, c.r[1], 0, 4); }
    // 002dd3  mov edi, esp
    X86_AT(c, 0x2dd3u);
    c.r[7] = c.r[4];
    // 002dd5  mov dword ptr gs:[ebp + 8], edi
    X86_AT(c, 0x2dd5u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x8u)), c.r[7]);
    // 002dd9  shr ecx, 2
    X86_AT(c, 0x2dd9u);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 5, v, 0x2u, 4, w); if (w) c.r[1] = r; }
    // 002ddc  sub eax, eax
    X86_AT(c, 0x2ddcu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 002dde  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x2ddeu);
    x86_string(c, 2, 4, 243, 4, 3);
L_2de0:
    X86_TICK(c, 9);
    // 002de0  mov byte ptr gs:[ebp + 0x1e3], 0xff
    X86_AT(c, 0x2de0u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E3u)), 0xFFu);
    // 002de8  call 0x36dc
    X86_AT(c, 0x2de8u);
    push32(c, 0x2dedu); f_000036dc(c); X86_RET(c, 0x2dedu);
    X86_TICK(c, 7);
    // 002ded  call 0x6120
    X86_AT(c, 0x2dedu);
    push32(c, 0x2df2u); f_00006120(c); X86_RET(c, 0x2df2u);
    X86_TICK(c, 7);
    // 002df2  call 0x3d70
    X86_AT(c, 0x2df2u);
    push32(c, 0x2df7u); f_00003d70(c); X86_RET(c, 0x2df7u);
    X86_TICK(c, 12);
    // 002df7  test word ptr gs:[ebp + 0x108], 0xe0
    X86_AT(c, 0x2df7u);
    (void)x86_logic(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x108u))) & 0xE0u, 2);
    // 002e01  je 0x2e3a
    X86_AT(c, 0x2e01u);
    if (x86_cc(c, 4)) { goto L_2e3a; }
    X86_TICK(c, 7);
    // 002e03  call 0x36bc
    X86_AT(c, 0x2e03u);
    push32(c, 0x2e08u); f_000036bc(c); X86_RET(c, 0x2e08u);
    X86_TICK(c, 11);
    // 002e08  mov al, byte ptr gs:[ebp + 0x220]
    X86_AT(c, 0x2e08u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x220u))));
    // 002e0f  cmp al, 0x10
    X86_AT(c, 0x2e0fu);
    (void)x86_sub(c, g8(c, 0), 0x10u, 0, 1);
    // 002e11  jae 0x2e15
    X86_AT(c, 0x2e11u);
    if (x86_cc(c, 3)) { goto L_2e15; }
    X86_TICK(c, 2);
    // 002e13  add al, 0xe
    X86_AT(c, 0x2e13u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, 0xEu, 0, 1)); }
L_2e15:
    X86_TICK(c, 11);
    // 002e15  add al, 4
    X86_AT(c, 0x2e15u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, 0x4u, 0, 1)); }
    // 002e17  mov byte ptr gs:[ebp + 0x220], al
    X86_AT(c, 0x2e17u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x220u)), g8(c, 0));
    // 002e1e  call 0x6120
    X86_AT(c, 0x2e1eu);
    push32(c, 0x2e23u); f_00006120(c); X86_RET(c, 0x2e23u);
    X86_TICK(c, 21);
    // 002e23  sub eax, eax
    X86_AT(c, 0x2e23u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 002e25  btr word ptr gs:[ebp + 0x221], 7
    X86_AT(c, 0x2e25u);
    x86_bitop(c, 2, (c.sbase[5] + (uint32_t)(c.r[5] + 0x221u)), false, 0x7u, 2, nullptr, 0);
    // 002e2f  setb al
    X86_AT(c, 0x2e2fu);
    s8(c, 0, x86_cc(c, 2) ? 1u : 0u);
    // 002e32  call dword ptr cs:[eax*4 + 0x2e44]
    X86_AT(c, 0x2e32u);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0x2E44u))); push32(c, 0x2e3au);
      switch (t) {
      case 0x3fccu: f_00003fcc(c); break;
      case 0x4026u: f_00004026(c); break;
      default: x86_call(c, t); }
      X86_RET(c, 0x2e3au); }
L_2e3a:
    X86_TICK(c, 16);
    // 002e3a  add esp, dword ptr gs:[ebp + 0x200]
    X86_AT(c, 0x2e3au);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x200u))), 0, 4); }
    // 002e41  ret 
    X86_AT(c, 0x2e41u);
    c.eip = pop32(c); return;
L_2e4c:
    X86_TICK(c, 12);
    // 002e4c  test word ptr gs:[ebp + 0x108], 0xe0
    X86_AT(c, 0x2e4cu);
    (void)x86_logic(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x108u))) & 0xE0u, 2);
    // 002e56  je 0x2e3a
    X86_AT(c, 0x2e56u);
    if (x86_cc(c, 4)) { X86_POLL(c, 0x2e3au); goto L_2e3a; }
    X86_TICK(c, 7);
    // 002e58  call 0x36bc
    X86_AT(c, 0x2e58u);
    push32(c, 0x2e5du); f_000036bc(c); X86_RET(c, 0x2e5du);
    X86_TICK(c, 9);
    // 002e5d  mov byte ptr gs:[ebp + 0x220], 0x13
    X86_AT(c, 0x2e5du);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x220u)), 0x13u);
    // 002e65  call 0x6120
    X86_AT(c, 0x2e65u);
    push32(c, 0x2e6au); f_00006120(c); X86_RET(c, 0x2e6au);
    X86_TICK(c, 7);
    // 002e6a  call 0x38e9
    X86_AT(c, 0x2e6au);
    push32(c, 0x2e6fu); f_000038e9(c); X86_RET(c, 0x2e6fu);
    X86_TICK(c, 5);
    // 002e6f  jae 0x2e79
    X86_AT(c, 0x2e6fu);
    if (x86_cc(c, 3)) { goto L_2e79; }
    X86_TICK(c, 7);
    // 002e71  add byte ptr gs:[ebp + 0x220], 2
    X86_AT(c, 0x2e71u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x220u)); uint32_t v = rd8(ea); wr8(ea, x86_add(c, v, 0x2u, 0, 1)); }
L_2e79:
    X86_TICK(c, 7);
    // 002e79  jmp 0x4026
    X86_AT(c, 0x2e79u);
    goto L_4026;
L_4026:
    X86_TICK(c, 15);
    // 004026  mov eax, dword ptr gs:[ebp + 0x1c4]
    X86_AT(c, 0x4026u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C4u)));
    // 00402d  mov ecx, dword ptr gs:[ebp + 0x1c8]
    X86_AT(c, 0x402du);
    c.r[1] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C8u)));
    // 004034  cmp ax, cx
    X86_AT(c, 0x4034u);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), (c.r[1] & 0xFFFFu), 0, 2);
    // 004037  jle 0x403b
    X86_AT(c, 0x4037u);
    if (x86_cc(c, 14)) { goto L_403b; }
    X86_TICK(c, 3);
    // 004039  xchg cx, ax
    X86_AT(c, 0x4039u);
    { uint32_t t = (c.r[1] & 0xFFFFu); s16(c, 1, (c.r[0] & 0xFFFFu)); s16(c, 0, t); }
L_403b:
    X86_TICK(c, 17);
    // 00403b  mov word ptr gs:[ebp + 0x222], ax
    X86_AT(c, 0x403bu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u)), (c.r[0] & 0xFFFFu));
    // 004043  mov word ptr gs:[ebp + 0x224], cx
    X86_AT(c, 0x4043u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u)), (c.r[1] & 0xFFFFu));
    // 00404b  shr eax, 0x10
    X86_AT(c, 0x404bu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00404e  shr ecx, 0x10
    X86_AT(c, 0x404eu);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[1] = r; }
    // 004051  cmp ax, cx
    X86_AT(c, 0x4051u);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), (c.r[1] & 0xFFFFu), 0, 2);
    // 004054  jle 0x4057
    X86_AT(c, 0x4054u);
    if (x86_cc(c, 14)) { goto L_4057; }
    X86_TICK(c, 3);
    // 004056  xchg ecx, eax
    X86_AT(c, 0x4056u);
    { uint32_t t = c.r[1]; c.r[1] = c.r[0]; c.r[0] = t; }
L_4057:
    X86_TICK(c, 60);
    // 004057  mov word ptr gs:[ebp + 0x226], ax
    X86_AT(c, 0x4057u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u)), (c.r[0] & 0xFFFFu));
    // 00405f  sub cx, ax
    X86_AT(c, 0x405fu);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_sub(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 004062  inc ecx
    X86_AT(c, 0x4062u);
    { uint32_t v = c.r[1]; c.r[1] = x86_inc(c, v, 4); }
    // 004063  push ecx
    X86_AT(c, 0x4063u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 004064  mov es, word ptr gs:[ebp + 4]
    X86_AT(c, 0x4064u);
    x86_load_seg(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x4u))) & 0xFFFFu);
    // 004068  movsx eax, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x4068u);
    c.r[0] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u)));
    // 004070  imul eax, dword ptr gs:[ebp + 0x20]
    X86_AT(c, 0x4070u);
    c.r[0] = x86_imul2(c, c.r[0], rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x20u))), 4);
    // 004075  add eax, dword ptr gs:[ebp]
    X86_AT(c, 0x4075u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5]))), 0, 4); }
    // 004079  mov dword ptr gs:[ebp + 0x1cc], eax
    X86_AT(c, 0x4079u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu)), c.r[0]);
    // 004080  movzx eax, byte ptr gs:[ebp + 0x220]
    X86_AT(c, 0x4080u);
    c.r[0] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x220u)));
    // 004088  mov eax, dword ptr cs:[eax*4 + 0x7fec]
    X86_AT(c, 0x4088u);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0x7FECu)));
    // 004090  mov dword ptr gs:[ebp + 0x324], eax
    X86_AT(c, 0x4090u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x324u)), c.r[0]);
L_4097:
    X86_TICK(c, 7);
    // 004097  call dword ptr gs:[ebp + 0x324]
    X86_AT(c, 0x4097u);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x324u))); push32(c, 0x409eu); x86_call(c, t); X86_RET(c, 0x409eu); }
    X86_TICK(c, 28);
    // 00409e  inc word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x409eu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x226u)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
    // 0040a6  mov eax, dword ptr gs:[ebp + 0x20]
    X86_AT(c, 0x40a6u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x20u)));
    // 0040aa  add dword ptr gs:[ebp + 0x1cc], eax
    X86_AT(c, 0x40aau);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 0040b1  dec dword ptr [esp]
    X86_AT(c, 0x40b1u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 0040b4  jne 0x4097
    X86_AT(c, 0x40b4u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x4097u); goto L_4097; }
    X86_TICK(c, 12);
    // 0040b6  add esp, 4
    X86_AT(c, 0x40b6u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0040b9  ret 
    X86_AT(c, 0x40b9u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x2d81u, "ran off the end of a function");
}
void f_00002d84(X86Cpu& c) {
    X86_TICK(c, 13);
    // 002d84  mov dword ptr gs:[ebp + 0x1c8], eax
    X86_AT(c, 0x2d84u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C8u)), c.r[0]);
    // 002d8b  mov al, byte ptr gs:[ebp + 0x108]
    X86_AT(c, 0x2d8bu);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x108u))));
    // 002d92  test al, 0xe
    X86_AT(c, 0x2d92u);
    (void)x86_logic(c, g8(c, 0) & 0xEu, 1);
    // 002d94  je 0x2e4c
    X86_AT(c, 0x2d94u);
    if (x86_cc(c, 4)) { goto L_2e4c; }
    X86_TICK(c, 12);
    // 002d9a  cmp byte ptr gs:[ebp + 0x228], 1
    X86_AT(c, 0x2d9au);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x228u))), 0x1u, 0, 1);
    // 002da2  jne 0x2db9
    X86_AT(c, 0x2da2u);
    if (x86_cc(c, 5)) { goto L_2db9; }
    X86_TICK(c, 7);
    // 002da4  test al, 0xe0
    X86_AT(c, 0x2da4u);
    (void)x86_logic(c, g8(c, 0) & 0xE0u, 1);
    // 002da6  je 0x2db2
    X86_AT(c, 0x2da6u);
    if (x86_cc(c, 4)) { goto L_2db2; }
    X86_TICK(c, 12);
    // 002da8  cmp dword ptr gs:[ebp + 0x1dc], 0xffffffff
    X86_AT(c, 0x2da8u);
    (void)x86_sub(c, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1DCu))), 0xFFFFFFFFu, 0, 4);
    // 002db0  jne 0x2db9
    X86_AT(c, 0x2db0u);
    if (x86_cc(c, 5)) { goto L_2db9; }
L_2db2:
    X86_TICK(c, 7);
    // 002db2  call 0x2975
    X86_AT(c, 0x2db2u);
    push32(c, 0x2db7u); f_00002975(c); X86_RET(c, 0x2db7u);
    X86_TICK(c, 7);
    // 002db7  jmp 0x2de0
    X86_AT(c, 0x2db7u);
    goto L_2de0;
L_2db9:
    X86_TICK(c, 7);
    // 002db9  call 0x28d8
    X86_AT(c, 0x2db9u);
    push32(c, 0x2dbeu); f_000028d8(c); X86_RET(c, 0x2dbeu);
    X86_TICK(c, 7);
    // 002dbe  test al, al
    X86_AT(c, 0x2dbeu);
    (void)x86_logic(c, g8(c, 0) & g8(c, 0), 1);
    // 002dc0  je 0x2de0
    X86_AT(c, 0x2dc0u);
    if (x86_cc(c, 4)) { goto L_2de0; }
    X86_TICK(c, 28);
    // 002dc2  mov ecx, dword ptr gs:[ebp + 0xc]
    X86_AT(c, 0x2dc2u);
    c.r[1] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0xCu)));
    // 002dc6  mov dword ptr gs:[ebp + 0x200], ecx
    X86_AT(c, 0x2dc6u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x200u)), c.r[1]);
    // 002dcd  mov eax, ss
    X86_AT(c, 0x2dcdu);
    c.r[0] = (uint32_t)c.sreg[2];
    // 002dcf  mov es, eax
    X86_AT(c, 0x2dcfu);
    x86_load_seg(c, 0, (c.r[0] & 0xFFFFu) & 0xFFFFu);
    // 002dd1  sub esp, ecx
    X86_AT(c, 0x2dd1u);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, c.r[1], 0, 4); }
    // 002dd3  mov edi, esp
    X86_AT(c, 0x2dd3u);
    c.r[7] = c.r[4];
    // 002dd5  mov dword ptr gs:[ebp + 8], edi
    X86_AT(c, 0x2dd5u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x8u)), c.r[7]);
    // 002dd9  shr ecx, 2
    X86_AT(c, 0x2dd9u);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 5, v, 0x2u, 4, w); if (w) c.r[1] = r; }
    // 002ddc  sub eax, eax
    X86_AT(c, 0x2ddcu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 002dde  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x2ddeu);
    x86_string(c, 2, 4, 243, 4, 3);
L_2de0:
    X86_TICK(c, 9);
    // 002de0  mov byte ptr gs:[ebp + 0x1e3], 0xff
    X86_AT(c, 0x2de0u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E3u)), 0xFFu);
    // 002de8  call 0x36dc
    X86_AT(c, 0x2de8u);
    push32(c, 0x2dedu); f_000036dc(c); X86_RET(c, 0x2dedu);
    X86_TICK(c, 7);
    // 002ded  call 0x6120
    X86_AT(c, 0x2dedu);
    push32(c, 0x2df2u); f_00006120(c); X86_RET(c, 0x2df2u);
    X86_TICK(c, 7);
    // 002df2  call 0x3d70
    X86_AT(c, 0x2df2u);
    push32(c, 0x2df7u); f_00003d70(c); X86_RET(c, 0x2df7u);
    X86_TICK(c, 12);
    // 002df7  test word ptr gs:[ebp + 0x108], 0xe0
    X86_AT(c, 0x2df7u);
    (void)x86_logic(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x108u))) & 0xE0u, 2);
    // 002e01  je 0x2e3a
    X86_AT(c, 0x2e01u);
    if (x86_cc(c, 4)) { goto L_2e3a; }
    X86_TICK(c, 7);
    // 002e03  call 0x36bc
    X86_AT(c, 0x2e03u);
    push32(c, 0x2e08u); f_000036bc(c); X86_RET(c, 0x2e08u);
    X86_TICK(c, 11);
    // 002e08  mov al, byte ptr gs:[ebp + 0x220]
    X86_AT(c, 0x2e08u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x220u))));
    // 002e0f  cmp al, 0x10
    X86_AT(c, 0x2e0fu);
    (void)x86_sub(c, g8(c, 0), 0x10u, 0, 1);
    // 002e11  jae 0x2e15
    X86_AT(c, 0x2e11u);
    if (x86_cc(c, 3)) { goto L_2e15; }
    X86_TICK(c, 2);
    // 002e13  add al, 0xe
    X86_AT(c, 0x2e13u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, 0xEu, 0, 1)); }
L_2e15:
    X86_TICK(c, 11);
    // 002e15  add al, 4
    X86_AT(c, 0x2e15u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, 0x4u, 0, 1)); }
    // 002e17  mov byte ptr gs:[ebp + 0x220], al
    X86_AT(c, 0x2e17u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x220u)), g8(c, 0));
    // 002e1e  call 0x6120
    X86_AT(c, 0x2e1eu);
    push32(c, 0x2e23u); f_00006120(c); X86_RET(c, 0x2e23u);
    X86_TICK(c, 21);
    // 002e23  sub eax, eax
    X86_AT(c, 0x2e23u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 002e25  btr word ptr gs:[ebp + 0x221], 7
    X86_AT(c, 0x2e25u);
    x86_bitop(c, 2, (c.sbase[5] + (uint32_t)(c.r[5] + 0x221u)), false, 0x7u, 2, nullptr, 0);
    // 002e2f  setb al
    X86_AT(c, 0x2e2fu);
    s8(c, 0, x86_cc(c, 2) ? 1u : 0u);
    // 002e32  call dword ptr cs:[eax*4 + 0x2e44]
    X86_AT(c, 0x2e32u);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0x2E44u))); push32(c, 0x2e3au);
      switch (t) {
      case 0x3fccu: f_00003fcc(c); break;
      case 0x4026u: f_00004026(c); break;
      default: x86_call(c, t); }
      X86_RET(c, 0x2e3au); }
L_2e3a:
    X86_TICK(c, 16);
    // 002e3a  add esp, dword ptr gs:[ebp + 0x200]
    X86_AT(c, 0x2e3au);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x200u))), 0, 4); }
    // 002e41  ret 
    X86_AT(c, 0x2e41u);
    c.eip = pop32(c); return;
L_2e4c:
    X86_TICK(c, 12);
    // 002e4c  test word ptr gs:[ebp + 0x108], 0xe0
    X86_AT(c, 0x2e4cu);
    (void)x86_logic(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x108u))) & 0xE0u, 2);
    // 002e56  je 0x2e3a
    X86_AT(c, 0x2e56u);
    if (x86_cc(c, 4)) { X86_POLL(c, 0x2e3au); goto L_2e3a; }
    X86_TICK(c, 7);
    // 002e58  call 0x36bc
    X86_AT(c, 0x2e58u);
    push32(c, 0x2e5du); f_000036bc(c); X86_RET(c, 0x2e5du);
    X86_TICK(c, 9);
    // 002e5d  mov byte ptr gs:[ebp + 0x220], 0x13
    X86_AT(c, 0x2e5du);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x220u)), 0x13u);
    // 002e65  call 0x6120
    X86_AT(c, 0x2e65u);
    push32(c, 0x2e6au); f_00006120(c); X86_RET(c, 0x2e6au);
    X86_TICK(c, 7);
    // 002e6a  call 0x38e9
    X86_AT(c, 0x2e6au);
    push32(c, 0x2e6fu); f_000038e9(c); X86_RET(c, 0x2e6fu);
    X86_TICK(c, 5);
    // 002e6f  jae 0x2e79
    X86_AT(c, 0x2e6fu);
    if (x86_cc(c, 3)) { goto L_2e79; }
    X86_TICK(c, 7);
    // 002e71  add byte ptr gs:[ebp + 0x220], 2
    X86_AT(c, 0x2e71u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x220u)); uint32_t v = rd8(ea); wr8(ea, x86_add(c, v, 0x2u, 0, 1)); }
L_2e79:
    X86_TICK(c, 7);
    // 002e79  jmp 0x4026
    X86_AT(c, 0x2e79u);
    goto L_4026;
L_4026:
    X86_TICK(c, 15);
    // 004026  mov eax, dword ptr gs:[ebp + 0x1c4]
    X86_AT(c, 0x4026u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C4u)));
    // 00402d  mov ecx, dword ptr gs:[ebp + 0x1c8]
    X86_AT(c, 0x402du);
    c.r[1] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C8u)));
    // 004034  cmp ax, cx
    X86_AT(c, 0x4034u);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), (c.r[1] & 0xFFFFu), 0, 2);
    // 004037  jle 0x403b
    X86_AT(c, 0x4037u);
    if (x86_cc(c, 14)) { goto L_403b; }
    X86_TICK(c, 3);
    // 004039  xchg cx, ax
    X86_AT(c, 0x4039u);
    { uint32_t t = (c.r[1] & 0xFFFFu); s16(c, 1, (c.r[0] & 0xFFFFu)); s16(c, 0, t); }
L_403b:
    X86_TICK(c, 17);
    // 00403b  mov word ptr gs:[ebp + 0x222], ax
    X86_AT(c, 0x403bu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u)), (c.r[0] & 0xFFFFu));
    // 004043  mov word ptr gs:[ebp + 0x224], cx
    X86_AT(c, 0x4043u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u)), (c.r[1] & 0xFFFFu));
    // 00404b  shr eax, 0x10
    X86_AT(c, 0x404bu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00404e  shr ecx, 0x10
    X86_AT(c, 0x404eu);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[1] = r; }
    // 004051  cmp ax, cx
    X86_AT(c, 0x4051u);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), (c.r[1] & 0xFFFFu), 0, 2);
    // 004054  jle 0x4057
    X86_AT(c, 0x4054u);
    if (x86_cc(c, 14)) { goto L_4057; }
    X86_TICK(c, 3);
    // 004056  xchg ecx, eax
    X86_AT(c, 0x4056u);
    { uint32_t t = c.r[1]; c.r[1] = c.r[0]; c.r[0] = t; }
L_4057:
    X86_TICK(c, 60);
    // 004057  mov word ptr gs:[ebp + 0x226], ax
    X86_AT(c, 0x4057u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u)), (c.r[0] & 0xFFFFu));
    // 00405f  sub cx, ax
    X86_AT(c, 0x405fu);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_sub(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 004062  inc ecx
    X86_AT(c, 0x4062u);
    { uint32_t v = c.r[1]; c.r[1] = x86_inc(c, v, 4); }
    // 004063  push ecx
    X86_AT(c, 0x4063u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 004064  mov es, word ptr gs:[ebp + 4]
    X86_AT(c, 0x4064u);
    x86_load_seg(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x4u))) & 0xFFFFu);
    // 004068  movsx eax, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x4068u);
    c.r[0] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u)));
    // 004070  imul eax, dword ptr gs:[ebp + 0x20]
    X86_AT(c, 0x4070u);
    c.r[0] = x86_imul2(c, c.r[0], rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x20u))), 4);
    // 004075  add eax, dword ptr gs:[ebp]
    X86_AT(c, 0x4075u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5]))), 0, 4); }
    // 004079  mov dword ptr gs:[ebp + 0x1cc], eax
    X86_AT(c, 0x4079u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu)), c.r[0]);
    // 004080  movzx eax, byte ptr gs:[ebp + 0x220]
    X86_AT(c, 0x4080u);
    c.r[0] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x220u)));
    // 004088  mov eax, dword ptr cs:[eax*4 + 0x7fec]
    X86_AT(c, 0x4088u);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0x7FECu)));
    // 004090  mov dword ptr gs:[ebp + 0x324], eax
    X86_AT(c, 0x4090u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x324u)), c.r[0]);
L_4097:
    X86_TICK(c, 7);
    // 004097  call dword ptr gs:[ebp + 0x324]
    X86_AT(c, 0x4097u);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x324u))); push32(c, 0x409eu); x86_call(c, t); X86_RET(c, 0x409eu); }
    X86_TICK(c, 28);
    // 00409e  inc word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x409eu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x226u)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
    // 0040a6  mov eax, dword ptr gs:[ebp + 0x20]
    X86_AT(c, 0x40a6u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x20u)));
    // 0040aa  add dword ptr gs:[ebp + 0x1cc], eax
    X86_AT(c, 0x40aau);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 0040b1  dec dword ptr [esp]
    X86_AT(c, 0x40b1u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 0040b4  jne 0x4097
    X86_AT(c, 0x40b4u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x4097u); goto L_4097; }
    X86_TICK(c, 12);
    // 0040b6  add esp, 4
    X86_AT(c, 0x40b6u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0040b9  ret 
    X86_AT(c, 0x40b9u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x2d84u, "ran off the end of a function");
}
void f_00002d8b(X86Cpu& c) {
    X86_TICK(c, 11);
    // 002d8b  mov al, byte ptr gs:[ebp + 0x108]
    X86_AT(c, 0x2d8bu);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x108u))));
    // 002d92  test al, 0xe
    X86_AT(c, 0x2d92u);
    (void)x86_logic(c, g8(c, 0) & 0xEu, 1);
    // 002d94  je 0x2e4c
    X86_AT(c, 0x2d94u);
    if (x86_cc(c, 4)) { goto L_2e4c; }
    X86_TICK(c, 12);
    // 002d9a  cmp byte ptr gs:[ebp + 0x228], 1
    X86_AT(c, 0x2d9au);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x228u))), 0x1u, 0, 1);
    // 002da2  jne 0x2db9
    X86_AT(c, 0x2da2u);
    if (x86_cc(c, 5)) { goto L_2db9; }
    X86_TICK(c, 7);
    // 002da4  test al, 0xe0
    X86_AT(c, 0x2da4u);
    (void)x86_logic(c, g8(c, 0) & 0xE0u, 1);
    // 002da6  je 0x2db2
    X86_AT(c, 0x2da6u);
    if (x86_cc(c, 4)) { goto L_2db2; }
    X86_TICK(c, 12);
    // 002da8  cmp dword ptr gs:[ebp + 0x1dc], 0xffffffff
    X86_AT(c, 0x2da8u);
    (void)x86_sub(c, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1DCu))), 0xFFFFFFFFu, 0, 4);
    // 002db0  jne 0x2db9
    X86_AT(c, 0x2db0u);
    if (x86_cc(c, 5)) { goto L_2db9; }
L_2db2:
    X86_TICK(c, 7);
    // 002db2  call 0x2975
    X86_AT(c, 0x2db2u);
    push32(c, 0x2db7u); f_00002975(c); X86_RET(c, 0x2db7u);
    X86_TICK(c, 7);
    // 002db7  jmp 0x2de0
    X86_AT(c, 0x2db7u);
    goto L_2de0;
L_2db9:
    X86_TICK(c, 7);
    // 002db9  call 0x28d8
    X86_AT(c, 0x2db9u);
    push32(c, 0x2dbeu); f_000028d8(c); X86_RET(c, 0x2dbeu);
    X86_TICK(c, 7);
    // 002dbe  test al, al
    X86_AT(c, 0x2dbeu);
    (void)x86_logic(c, g8(c, 0) & g8(c, 0), 1);
    // 002dc0  je 0x2de0
    X86_AT(c, 0x2dc0u);
    if (x86_cc(c, 4)) { goto L_2de0; }
    X86_TICK(c, 28);
    // 002dc2  mov ecx, dword ptr gs:[ebp + 0xc]
    X86_AT(c, 0x2dc2u);
    c.r[1] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0xCu)));
    // 002dc6  mov dword ptr gs:[ebp + 0x200], ecx
    X86_AT(c, 0x2dc6u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x200u)), c.r[1]);
    // 002dcd  mov eax, ss
    X86_AT(c, 0x2dcdu);
    c.r[0] = (uint32_t)c.sreg[2];
    // 002dcf  mov es, eax
    X86_AT(c, 0x2dcfu);
    x86_load_seg(c, 0, (c.r[0] & 0xFFFFu) & 0xFFFFu);
    // 002dd1  sub esp, ecx
    X86_AT(c, 0x2dd1u);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, c.r[1], 0, 4); }
    // 002dd3  mov edi, esp
    X86_AT(c, 0x2dd3u);
    c.r[7] = c.r[4];
    // 002dd5  mov dword ptr gs:[ebp + 8], edi
    X86_AT(c, 0x2dd5u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x8u)), c.r[7]);
    // 002dd9  shr ecx, 2
    X86_AT(c, 0x2dd9u);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 5, v, 0x2u, 4, w); if (w) c.r[1] = r; }
    // 002ddc  sub eax, eax
    X86_AT(c, 0x2ddcu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 002dde  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x2ddeu);
    x86_string(c, 2, 4, 243, 4, 3);
L_2de0:
    X86_TICK(c, 9);
    // 002de0  mov byte ptr gs:[ebp + 0x1e3], 0xff
    X86_AT(c, 0x2de0u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E3u)), 0xFFu);
    // 002de8  call 0x36dc
    X86_AT(c, 0x2de8u);
    push32(c, 0x2dedu); f_000036dc(c); X86_RET(c, 0x2dedu);
    X86_TICK(c, 7);
    // 002ded  call 0x6120
    X86_AT(c, 0x2dedu);
    push32(c, 0x2df2u); f_00006120(c); X86_RET(c, 0x2df2u);
    X86_TICK(c, 7);
    // 002df2  call 0x3d70
    X86_AT(c, 0x2df2u);
    push32(c, 0x2df7u); f_00003d70(c); X86_RET(c, 0x2df7u);
    X86_TICK(c, 12);
    // 002df7  test word ptr gs:[ebp + 0x108], 0xe0
    X86_AT(c, 0x2df7u);
    (void)x86_logic(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x108u))) & 0xE0u, 2);
    // 002e01  je 0x2e3a
    X86_AT(c, 0x2e01u);
    if (x86_cc(c, 4)) { goto L_2e3a; }
    X86_TICK(c, 7);
    // 002e03  call 0x36bc
    X86_AT(c, 0x2e03u);
    push32(c, 0x2e08u); f_000036bc(c); X86_RET(c, 0x2e08u);
    X86_TICK(c, 11);
    // 002e08  mov al, byte ptr gs:[ebp + 0x220]
    X86_AT(c, 0x2e08u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x220u))));
    // 002e0f  cmp al, 0x10
    X86_AT(c, 0x2e0fu);
    (void)x86_sub(c, g8(c, 0), 0x10u, 0, 1);
    // 002e11  jae 0x2e15
    X86_AT(c, 0x2e11u);
    if (x86_cc(c, 3)) { goto L_2e15; }
    X86_TICK(c, 2);
    // 002e13  add al, 0xe
    X86_AT(c, 0x2e13u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, 0xEu, 0, 1)); }
L_2e15:
    X86_TICK(c, 11);
    // 002e15  add al, 4
    X86_AT(c, 0x2e15u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, 0x4u, 0, 1)); }
    // 002e17  mov byte ptr gs:[ebp + 0x220], al
    X86_AT(c, 0x2e17u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x220u)), g8(c, 0));
    // 002e1e  call 0x6120
    X86_AT(c, 0x2e1eu);
    push32(c, 0x2e23u); f_00006120(c); X86_RET(c, 0x2e23u);
    X86_TICK(c, 21);
    // 002e23  sub eax, eax
    X86_AT(c, 0x2e23u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 002e25  btr word ptr gs:[ebp + 0x221], 7
    X86_AT(c, 0x2e25u);
    x86_bitop(c, 2, (c.sbase[5] + (uint32_t)(c.r[5] + 0x221u)), false, 0x7u, 2, nullptr, 0);
    // 002e2f  setb al
    X86_AT(c, 0x2e2fu);
    s8(c, 0, x86_cc(c, 2) ? 1u : 0u);
    // 002e32  call dword ptr cs:[eax*4 + 0x2e44]
    X86_AT(c, 0x2e32u);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0x2E44u))); push32(c, 0x2e3au);
      switch (t) {
      case 0x3fccu: f_00003fcc(c); break;
      case 0x4026u: f_00004026(c); break;
      default: x86_call(c, t); }
      X86_RET(c, 0x2e3au); }
L_2e3a:
    X86_TICK(c, 16);
    // 002e3a  add esp, dword ptr gs:[ebp + 0x200]
    X86_AT(c, 0x2e3au);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x200u))), 0, 4); }
    // 002e41  ret 
    X86_AT(c, 0x2e41u);
    c.eip = pop32(c); return;
L_2e4c:
    X86_TICK(c, 12);
    // 002e4c  test word ptr gs:[ebp + 0x108], 0xe0
    X86_AT(c, 0x2e4cu);
    (void)x86_logic(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x108u))) & 0xE0u, 2);
    // 002e56  je 0x2e3a
    X86_AT(c, 0x2e56u);
    if (x86_cc(c, 4)) { X86_POLL(c, 0x2e3au); goto L_2e3a; }
    X86_TICK(c, 7);
    // 002e58  call 0x36bc
    X86_AT(c, 0x2e58u);
    push32(c, 0x2e5du); f_000036bc(c); X86_RET(c, 0x2e5du);
    X86_TICK(c, 9);
    // 002e5d  mov byte ptr gs:[ebp + 0x220], 0x13
    X86_AT(c, 0x2e5du);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x220u)), 0x13u);
    // 002e65  call 0x6120
    X86_AT(c, 0x2e65u);
    push32(c, 0x2e6au); f_00006120(c); X86_RET(c, 0x2e6au);
    X86_TICK(c, 7);
    // 002e6a  call 0x38e9
    X86_AT(c, 0x2e6au);
    push32(c, 0x2e6fu); f_000038e9(c); X86_RET(c, 0x2e6fu);
    X86_TICK(c, 5);
    // 002e6f  jae 0x2e79
    X86_AT(c, 0x2e6fu);
    if (x86_cc(c, 3)) { goto L_2e79; }
    X86_TICK(c, 7);
    // 002e71  add byte ptr gs:[ebp + 0x220], 2
    X86_AT(c, 0x2e71u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x220u)); uint32_t v = rd8(ea); wr8(ea, x86_add(c, v, 0x2u, 0, 1)); }
L_2e79:
    X86_TICK(c, 7);
    // 002e79  jmp 0x4026
    X86_AT(c, 0x2e79u);
    goto L_4026;
L_4026:
    X86_TICK(c, 15);
    // 004026  mov eax, dword ptr gs:[ebp + 0x1c4]
    X86_AT(c, 0x4026u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C4u)));
    // 00402d  mov ecx, dword ptr gs:[ebp + 0x1c8]
    X86_AT(c, 0x402du);
    c.r[1] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C8u)));
    // 004034  cmp ax, cx
    X86_AT(c, 0x4034u);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), (c.r[1] & 0xFFFFu), 0, 2);
    // 004037  jle 0x403b
    X86_AT(c, 0x4037u);
    if (x86_cc(c, 14)) { goto L_403b; }
    X86_TICK(c, 3);
    // 004039  xchg cx, ax
    X86_AT(c, 0x4039u);
    { uint32_t t = (c.r[1] & 0xFFFFu); s16(c, 1, (c.r[0] & 0xFFFFu)); s16(c, 0, t); }
L_403b:
    X86_TICK(c, 17);
    // 00403b  mov word ptr gs:[ebp + 0x222], ax
    X86_AT(c, 0x403bu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u)), (c.r[0] & 0xFFFFu));
    // 004043  mov word ptr gs:[ebp + 0x224], cx
    X86_AT(c, 0x4043u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u)), (c.r[1] & 0xFFFFu));
    // 00404b  shr eax, 0x10
    X86_AT(c, 0x404bu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00404e  shr ecx, 0x10
    X86_AT(c, 0x404eu);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[1] = r; }
    // 004051  cmp ax, cx
    X86_AT(c, 0x4051u);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), (c.r[1] & 0xFFFFu), 0, 2);
    // 004054  jle 0x4057
    X86_AT(c, 0x4054u);
    if (x86_cc(c, 14)) { goto L_4057; }
    X86_TICK(c, 3);
    // 004056  xchg ecx, eax
    X86_AT(c, 0x4056u);
    { uint32_t t = c.r[1]; c.r[1] = c.r[0]; c.r[0] = t; }
L_4057:
    X86_TICK(c, 60);
    // 004057  mov word ptr gs:[ebp + 0x226], ax
    X86_AT(c, 0x4057u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u)), (c.r[0] & 0xFFFFu));
    // 00405f  sub cx, ax
    X86_AT(c, 0x405fu);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_sub(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 004062  inc ecx
    X86_AT(c, 0x4062u);
    { uint32_t v = c.r[1]; c.r[1] = x86_inc(c, v, 4); }
    // 004063  push ecx
    X86_AT(c, 0x4063u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 004064  mov es, word ptr gs:[ebp + 4]
    X86_AT(c, 0x4064u);
    x86_load_seg(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x4u))) & 0xFFFFu);
    // 004068  movsx eax, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x4068u);
    c.r[0] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u)));
    // 004070  imul eax, dword ptr gs:[ebp + 0x20]
    X86_AT(c, 0x4070u);
    c.r[0] = x86_imul2(c, c.r[0], rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x20u))), 4);
    // 004075  add eax, dword ptr gs:[ebp]
    X86_AT(c, 0x4075u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5]))), 0, 4); }
    // 004079  mov dword ptr gs:[ebp + 0x1cc], eax
    X86_AT(c, 0x4079u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu)), c.r[0]);
    // 004080  movzx eax, byte ptr gs:[ebp + 0x220]
    X86_AT(c, 0x4080u);
    c.r[0] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x220u)));
    // 004088  mov eax, dword ptr cs:[eax*4 + 0x7fec]
    X86_AT(c, 0x4088u);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0x7FECu)));
    // 004090  mov dword ptr gs:[ebp + 0x324], eax
    X86_AT(c, 0x4090u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x324u)), c.r[0]);
L_4097:
    X86_TICK(c, 7);
    // 004097  call dword ptr gs:[ebp + 0x324]
    X86_AT(c, 0x4097u);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x324u))); push32(c, 0x409eu); x86_call(c, t); X86_RET(c, 0x409eu); }
    X86_TICK(c, 28);
    // 00409e  inc word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x409eu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x226u)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
    // 0040a6  mov eax, dword ptr gs:[ebp + 0x20]
    X86_AT(c, 0x40a6u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x20u)));
    // 0040aa  add dword ptr gs:[ebp + 0x1cc], eax
    X86_AT(c, 0x40aau);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 0040b1  dec dword ptr [esp]
    X86_AT(c, 0x40b1u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 0040b4  jne 0x4097
    X86_AT(c, 0x40b4u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x4097u); goto L_4097; }
    X86_TICK(c, 12);
    // 0040b6  add esp, 4
    X86_AT(c, 0x40b6u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0040b9  ret 
    X86_AT(c, 0x40b9u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x2d8bu, "ran off the end of a function");
}
void f_00002d92(X86Cpu& c) {
    X86_TICK(c, 7);
    // 002d92  test al, 0xe
    X86_AT(c, 0x2d92u);
    (void)x86_logic(c, g8(c, 0) & 0xEu, 1);
    // 002d94  je 0x2e4c
    X86_AT(c, 0x2d94u);
    if (x86_cc(c, 4)) { goto L_2e4c; }
    X86_TICK(c, 12);
    // 002d9a  cmp byte ptr gs:[ebp + 0x228], 1
    X86_AT(c, 0x2d9au);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x228u))), 0x1u, 0, 1);
    // 002da2  jne 0x2db9
    X86_AT(c, 0x2da2u);
    if (x86_cc(c, 5)) { goto L_2db9; }
    X86_TICK(c, 7);
    // 002da4  test al, 0xe0
    X86_AT(c, 0x2da4u);
    (void)x86_logic(c, g8(c, 0) & 0xE0u, 1);
    // 002da6  je 0x2db2
    X86_AT(c, 0x2da6u);
    if (x86_cc(c, 4)) { goto L_2db2; }
    X86_TICK(c, 12);
    // 002da8  cmp dword ptr gs:[ebp + 0x1dc], 0xffffffff
    X86_AT(c, 0x2da8u);
    (void)x86_sub(c, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1DCu))), 0xFFFFFFFFu, 0, 4);
    // 002db0  jne 0x2db9
    X86_AT(c, 0x2db0u);
    if (x86_cc(c, 5)) { goto L_2db9; }
L_2db2:
    X86_TICK(c, 7);
    // 002db2  call 0x2975
    X86_AT(c, 0x2db2u);
    push32(c, 0x2db7u); f_00002975(c); X86_RET(c, 0x2db7u);
    X86_TICK(c, 7);
    // 002db7  jmp 0x2de0
    X86_AT(c, 0x2db7u);
    goto L_2de0;
L_2db9:
    X86_TICK(c, 7);
    // 002db9  call 0x28d8
    X86_AT(c, 0x2db9u);
    push32(c, 0x2dbeu); f_000028d8(c); X86_RET(c, 0x2dbeu);
    X86_TICK(c, 7);
    // 002dbe  test al, al
    X86_AT(c, 0x2dbeu);
    (void)x86_logic(c, g8(c, 0) & g8(c, 0), 1);
    // 002dc0  je 0x2de0
    X86_AT(c, 0x2dc0u);
    if (x86_cc(c, 4)) { goto L_2de0; }
    X86_TICK(c, 28);
    // 002dc2  mov ecx, dword ptr gs:[ebp + 0xc]
    X86_AT(c, 0x2dc2u);
    c.r[1] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0xCu)));
    // 002dc6  mov dword ptr gs:[ebp + 0x200], ecx
    X86_AT(c, 0x2dc6u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x200u)), c.r[1]);
    // 002dcd  mov eax, ss
    X86_AT(c, 0x2dcdu);
    c.r[0] = (uint32_t)c.sreg[2];
    // 002dcf  mov es, eax
    X86_AT(c, 0x2dcfu);
    x86_load_seg(c, 0, (c.r[0] & 0xFFFFu) & 0xFFFFu);
    // 002dd1  sub esp, ecx
    X86_AT(c, 0x2dd1u);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, c.r[1], 0, 4); }
    // 002dd3  mov edi, esp
    X86_AT(c, 0x2dd3u);
    c.r[7] = c.r[4];
    // 002dd5  mov dword ptr gs:[ebp + 8], edi
    X86_AT(c, 0x2dd5u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x8u)), c.r[7]);
    // 002dd9  shr ecx, 2
    X86_AT(c, 0x2dd9u);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 5, v, 0x2u, 4, w); if (w) c.r[1] = r; }
    // 002ddc  sub eax, eax
    X86_AT(c, 0x2ddcu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 002dde  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x2ddeu);
    x86_string(c, 2, 4, 243, 4, 3);
L_2de0:
    X86_TICK(c, 9);
    // 002de0  mov byte ptr gs:[ebp + 0x1e3], 0xff
    X86_AT(c, 0x2de0u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E3u)), 0xFFu);
    // 002de8  call 0x36dc
    X86_AT(c, 0x2de8u);
    push32(c, 0x2dedu); f_000036dc(c); X86_RET(c, 0x2dedu);
    X86_TICK(c, 7);
    // 002ded  call 0x6120
    X86_AT(c, 0x2dedu);
    push32(c, 0x2df2u); f_00006120(c); X86_RET(c, 0x2df2u);
    X86_TICK(c, 7);
    // 002df2  call 0x3d70
    X86_AT(c, 0x2df2u);
    push32(c, 0x2df7u); f_00003d70(c); X86_RET(c, 0x2df7u);
    X86_TICK(c, 12);
    // 002df7  test word ptr gs:[ebp + 0x108], 0xe0
    X86_AT(c, 0x2df7u);
    (void)x86_logic(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x108u))) & 0xE0u, 2);
    // 002e01  je 0x2e3a
    X86_AT(c, 0x2e01u);
    if (x86_cc(c, 4)) { goto L_2e3a; }
    X86_TICK(c, 7);
    // 002e03  call 0x36bc
    X86_AT(c, 0x2e03u);
    push32(c, 0x2e08u); f_000036bc(c); X86_RET(c, 0x2e08u);
    X86_TICK(c, 11);
    // 002e08  mov al, byte ptr gs:[ebp + 0x220]
    X86_AT(c, 0x2e08u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x220u))));
    // 002e0f  cmp al, 0x10
    X86_AT(c, 0x2e0fu);
    (void)x86_sub(c, g8(c, 0), 0x10u, 0, 1);
    // 002e11  jae 0x2e15
    X86_AT(c, 0x2e11u);
    if (x86_cc(c, 3)) { goto L_2e15; }
    X86_TICK(c, 2);
    // 002e13  add al, 0xe
    X86_AT(c, 0x2e13u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, 0xEu, 0, 1)); }
L_2e15:
    X86_TICK(c, 11);
    // 002e15  add al, 4
    X86_AT(c, 0x2e15u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, 0x4u, 0, 1)); }
    // 002e17  mov byte ptr gs:[ebp + 0x220], al
    X86_AT(c, 0x2e17u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x220u)), g8(c, 0));
    // 002e1e  call 0x6120
    X86_AT(c, 0x2e1eu);
    push32(c, 0x2e23u); f_00006120(c); X86_RET(c, 0x2e23u);
    X86_TICK(c, 21);
    // 002e23  sub eax, eax
    X86_AT(c, 0x2e23u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 002e25  btr word ptr gs:[ebp + 0x221], 7
    X86_AT(c, 0x2e25u);
    x86_bitop(c, 2, (c.sbase[5] + (uint32_t)(c.r[5] + 0x221u)), false, 0x7u, 2, nullptr, 0);
    // 002e2f  setb al
    X86_AT(c, 0x2e2fu);
    s8(c, 0, x86_cc(c, 2) ? 1u : 0u);
    // 002e32  call dword ptr cs:[eax*4 + 0x2e44]
    X86_AT(c, 0x2e32u);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0x2E44u))); push32(c, 0x2e3au);
      switch (t) {
      case 0x3fccu: f_00003fcc(c); break;
      case 0x4026u: f_00004026(c); break;
      default: x86_call(c, t); }
      X86_RET(c, 0x2e3au); }
L_2e3a:
    X86_TICK(c, 16);
    // 002e3a  add esp, dword ptr gs:[ebp + 0x200]
    X86_AT(c, 0x2e3au);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x200u))), 0, 4); }
    // 002e41  ret 
    X86_AT(c, 0x2e41u);
    c.eip = pop32(c); return;
L_2e4c:
    X86_TICK(c, 12);
    // 002e4c  test word ptr gs:[ebp + 0x108], 0xe0
    X86_AT(c, 0x2e4cu);
    (void)x86_logic(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x108u))) & 0xE0u, 2);
    // 002e56  je 0x2e3a
    X86_AT(c, 0x2e56u);
    if (x86_cc(c, 4)) { X86_POLL(c, 0x2e3au); goto L_2e3a; }
    X86_TICK(c, 7);
    // 002e58  call 0x36bc
    X86_AT(c, 0x2e58u);
    push32(c, 0x2e5du); f_000036bc(c); X86_RET(c, 0x2e5du);
    X86_TICK(c, 9);
    // 002e5d  mov byte ptr gs:[ebp + 0x220], 0x13
    X86_AT(c, 0x2e5du);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x220u)), 0x13u);
    // 002e65  call 0x6120
    X86_AT(c, 0x2e65u);
    push32(c, 0x2e6au); f_00006120(c); X86_RET(c, 0x2e6au);
    X86_TICK(c, 7);
    // 002e6a  call 0x38e9
    X86_AT(c, 0x2e6au);
    push32(c, 0x2e6fu); f_000038e9(c); X86_RET(c, 0x2e6fu);
    X86_TICK(c, 5);
    // 002e6f  jae 0x2e79
    X86_AT(c, 0x2e6fu);
    if (x86_cc(c, 3)) { goto L_2e79; }
    X86_TICK(c, 7);
    // 002e71  add byte ptr gs:[ebp + 0x220], 2
    X86_AT(c, 0x2e71u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x220u)); uint32_t v = rd8(ea); wr8(ea, x86_add(c, v, 0x2u, 0, 1)); }
L_2e79:
    X86_TICK(c, 7);
    // 002e79  jmp 0x4026
    X86_AT(c, 0x2e79u);
    goto L_4026;
L_4026:
    X86_TICK(c, 15);
    // 004026  mov eax, dword ptr gs:[ebp + 0x1c4]
    X86_AT(c, 0x4026u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C4u)));
    // 00402d  mov ecx, dword ptr gs:[ebp + 0x1c8]
    X86_AT(c, 0x402du);
    c.r[1] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C8u)));
    // 004034  cmp ax, cx
    X86_AT(c, 0x4034u);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), (c.r[1] & 0xFFFFu), 0, 2);
    // 004037  jle 0x403b
    X86_AT(c, 0x4037u);
    if (x86_cc(c, 14)) { goto L_403b; }
    X86_TICK(c, 3);
    // 004039  xchg cx, ax
    X86_AT(c, 0x4039u);
    { uint32_t t = (c.r[1] & 0xFFFFu); s16(c, 1, (c.r[0] & 0xFFFFu)); s16(c, 0, t); }
L_403b:
    X86_TICK(c, 17);
    // 00403b  mov word ptr gs:[ebp + 0x222], ax
    X86_AT(c, 0x403bu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u)), (c.r[0] & 0xFFFFu));
    // 004043  mov word ptr gs:[ebp + 0x224], cx
    X86_AT(c, 0x4043u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u)), (c.r[1] & 0xFFFFu));
    // 00404b  shr eax, 0x10
    X86_AT(c, 0x404bu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00404e  shr ecx, 0x10
    X86_AT(c, 0x404eu);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[1] = r; }
    // 004051  cmp ax, cx
    X86_AT(c, 0x4051u);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), (c.r[1] & 0xFFFFu), 0, 2);
    // 004054  jle 0x4057
    X86_AT(c, 0x4054u);
    if (x86_cc(c, 14)) { goto L_4057; }
    X86_TICK(c, 3);
    // 004056  xchg ecx, eax
    X86_AT(c, 0x4056u);
    { uint32_t t = c.r[1]; c.r[1] = c.r[0]; c.r[0] = t; }
L_4057:
    X86_TICK(c, 60);
    // 004057  mov word ptr gs:[ebp + 0x226], ax
    X86_AT(c, 0x4057u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u)), (c.r[0] & 0xFFFFu));
    // 00405f  sub cx, ax
    X86_AT(c, 0x405fu);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_sub(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 004062  inc ecx
    X86_AT(c, 0x4062u);
    { uint32_t v = c.r[1]; c.r[1] = x86_inc(c, v, 4); }
    // 004063  push ecx
    X86_AT(c, 0x4063u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 004064  mov es, word ptr gs:[ebp + 4]
    X86_AT(c, 0x4064u);
    x86_load_seg(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x4u))) & 0xFFFFu);
    // 004068  movsx eax, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x4068u);
    c.r[0] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u)));
    // 004070  imul eax, dword ptr gs:[ebp + 0x20]
    X86_AT(c, 0x4070u);
    c.r[0] = x86_imul2(c, c.r[0], rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x20u))), 4);
    // 004075  add eax, dword ptr gs:[ebp]
    X86_AT(c, 0x4075u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5]))), 0, 4); }
    // 004079  mov dword ptr gs:[ebp + 0x1cc], eax
    X86_AT(c, 0x4079u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu)), c.r[0]);
    // 004080  movzx eax, byte ptr gs:[ebp + 0x220]
    X86_AT(c, 0x4080u);
    c.r[0] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x220u)));
    // 004088  mov eax, dword ptr cs:[eax*4 + 0x7fec]
    X86_AT(c, 0x4088u);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0x7FECu)));
    // 004090  mov dword ptr gs:[ebp + 0x324], eax
    X86_AT(c, 0x4090u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x324u)), c.r[0]);
L_4097:
    X86_TICK(c, 7);
    // 004097  call dword ptr gs:[ebp + 0x324]
    X86_AT(c, 0x4097u);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x324u))); push32(c, 0x409eu); x86_call(c, t); X86_RET(c, 0x409eu); }
    X86_TICK(c, 28);
    // 00409e  inc word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x409eu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x226u)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
    // 0040a6  mov eax, dword ptr gs:[ebp + 0x20]
    X86_AT(c, 0x40a6u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x20u)));
    // 0040aa  add dword ptr gs:[ebp + 0x1cc], eax
    X86_AT(c, 0x40aau);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 0040b1  dec dword ptr [esp]
    X86_AT(c, 0x40b1u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 0040b4  jne 0x4097
    X86_AT(c, 0x40b4u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x4097u); goto L_4097; }
    X86_TICK(c, 12);
    // 0040b6  add esp, 4
    X86_AT(c, 0x40b6u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0040b9  ret 
    X86_AT(c, 0x40b9u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x2d92u, "ran off the end of a function");
}
void f_00002d94(X86Cpu& c) {
    X86_TICK(c, 5);
    // 002d94  je 0x2e4c
    X86_AT(c, 0x2d94u);
    if (x86_cc(c, 4)) { goto L_2e4c; }
    X86_TICK(c, 12);
    // 002d9a  cmp byte ptr gs:[ebp + 0x228], 1
    X86_AT(c, 0x2d9au);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x228u))), 0x1u, 0, 1);
    // 002da2  jne 0x2db9
    X86_AT(c, 0x2da2u);
    if (x86_cc(c, 5)) { goto L_2db9; }
    X86_TICK(c, 7);
    // 002da4  test al, 0xe0
    X86_AT(c, 0x2da4u);
    (void)x86_logic(c, g8(c, 0) & 0xE0u, 1);
    // 002da6  je 0x2db2
    X86_AT(c, 0x2da6u);
    if (x86_cc(c, 4)) { goto L_2db2; }
    X86_TICK(c, 12);
    // 002da8  cmp dword ptr gs:[ebp + 0x1dc], 0xffffffff
    X86_AT(c, 0x2da8u);
    (void)x86_sub(c, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1DCu))), 0xFFFFFFFFu, 0, 4);
    // 002db0  jne 0x2db9
    X86_AT(c, 0x2db0u);
    if (x86_cc(c, 5)) { goto L_2db9; }
L_2db2:
    X86_TICK(c, 7);
    // 002db2  call 0x2975
    X86_AT(c, 0x2db2u);
    push32(c, 0x2db7u); f_00002975(c); X86_RET(c, 0x2db7u);
    X86_TICK(c, 7);
    // 002db7  jmp 0x2de0
    X86_AT(c, 0x2db7u);
    goto L_2de0;
L_2db9:
    X86_TICK(c, 7);
    // 002db9  call 0x28d8
    X86_AT(c, 0x2db9u);
    push32(c, 0x2dbeu); f_000028d8(c); X86_RET(c, 0x2dbeu);
    X86_TICK(c, 7);
    // 002dbe  test al, al
    X86_AT(c, 0x2dbeu);
    (void)x86_logic(c, g8(c, 0) & g8(c, 0), 1);
    // 002dc0  je 0x2de0
    X86_AT(c, 0x2dc0u);
    if (x86_cc(c, 4)) { goto L_2de0; }
    X86_TICK(c, 28);
    // 002dc2  mov ecx, dword ptr gs:[ebp + 0xc]
    X86_AT(c, 0x2dc2u);
    c.r[1] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0xCu)));
    // 002dc6  mov dword ptr gs:[ebp + 0x200], ecx
    X86_AT(c, 0x2dc6u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x200u)), c.r[1]);
    // 002dcd  mov eax, ss
    X86_AT(c, 0x2dcdu);
    c.r[0] = (uint32_t)c.sreg[2];
    // 002dcf  mov es, eax
    X86_AT(c, 0x2dcfu);
    x86_load_seg(c, 0, (c.r[0] & 0xFFFFu) & 0xFFFFu);
    // 002dd1  sub esp, ecx
    X86_AT(c, 0x2dd1u);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, c.r[1], 0, 4); }
    // 002dd3  mov edi, esp
    X86_AT(c, 0x2dd3u);
    c.r[7] = c.r[4];
    // 002dd5  mov dword ptr gs:[ebp + 8], edi
    X86_AT(c, 0x2dd5u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x8u)), c.r[7]);
    // 002dd9  shr ecx, 2
    X86_AT(c, 0x2dd9u);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 5, v, 0x2u, 4, w); if (w) c.r[1] = r; }
    // 002ddc  sub eax, eax
    X86_AT(c, 0x2ddcu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 002dde  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x2ddeu);
    x86_string(c, 2, 4, 243, 4, 3);
L_2de0:
    X86_TICK(c, 9);
    // 002de0  mov byte ptr gs:[ebp + 0x1e3], 0xff
    X86_AT(c, 0x2de0u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E3u)), 0xFFu);
    // 002de8  call 0x36dc
    X86_AT(c, 0x2de8u);
    push32(c, 0x2dedu); f_000036dc(c); X86_RET(c, 0x2dedu);
    X86_TICK(c, 7);
    // 002ded  call 0x6120
    X86_AT(c, 0x2dedu);
    push32(c, 0x2df2u); f_00006120(c); X86_RET(c, 0x2df2u);
    X86_TICK(c, 7);
    // 002df2  call 0x3d70
    X86_AT(c, 0x2df2u);
    push32(c, 0x2df7u); f_00003d70(c); X86_RET(c, 0x2df7u);
    X86_TICK(c, 12);
    // 002df7  test word ptr gs:[ebp + 0x108], 0xe0
    X86_AT(c, 0x2df7u);
    (void)x86_logic(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x108u))) & 0xE0u, 2);
    // 002e01  je 0x2e3a
    X86_AT(c, 0x2e01u);
    if (x86_cc(c, 4)) { goto L_2e3a; }
    X86_TICK(c, 7);
    // 002e03  call 0x36bc
    X86_AT(c, 0x2e03u);
    push32(c, 0x2e08u); f_000036bc(c); X86_RET(c, 0x2e08u);
    X86_TICK(c, 11);
    // 002e08  mov al, byte ptr gs:[ebp + 0x220]
    X86_AT(c, 0x2e08u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x220u))));
    // 002e0f  cmp al, 0x10
    X86_AT(c, 0x2e0fu);
    (void)x86_sub(c, g8(c, 0), 0x10u, 0, 1);
    // 002e11  jae 0x2e15
    X86_AT(c, 0x2e11u);
    if (x86_cc(c, 3)) { goto L_2e15; }
    X86_TICK(c, 2);
    // 002e13  add al, 0xe
    X86_AT(c, 0x2e13u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, 0xEu, 0, 1)); }
L_2e15:
    X86_TICK(c, 11);
    // 002e15  add al, 4
    X86_AT(c, 0x2e15u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, 0x4u, 0, 1)); }
    // 002e17  mov byte ptr gs:[ebp + 0x220], al
    X86_AT(c, 0x2e17u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x220u)), g8(c, 0));
    // 002e1e  call 0x6120
    X86_AT(c, 0x2e1eu);
    push32(c, 0x2e23u); f_00006120(c); X86_RET(c, 0x2e23u);
    X86_TICK(c, 21);
    // 002e23  sub eax, eax
    X86_AT(c, 0x2e23u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 002e25  btr word ptr gs:[ebp + 0x221], 7
    X86_AT(c, 0x2e25u);
    x86_bitop(c, 2, (c.sbase[5] + (uint32_t)(c.r[5] + 0x221u)), false, 0x7u, 2, nullptr, 0);
    // 002e2f  setb al
    X86_AT(c, 0x2e2fu);
    s8(c, 0, x86_cc(c, 2) ? 1u : 0u);
    // 002e32  call dword ptr cs:[eax*4 + 0x2e44]
    X86_AT(c, 0x2e32u);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0x2E44u))); push32(c, 0x2e3au);
      switch (t) {
      case 0x3fccu: f_00003fcc(c); break;
      case 0x4026u: f_00004026(c); break;
      default: x86_call(c, t); }
      X86_RET(c, 0x2e3au); }
L_2e3a:
    X86_TICK(c, 16);
    // 002e3a  add esp, dword ptr gs:[ebp + 0x200]
    X86_AT(c, 0x2e3au);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x200u))), 0, 4); }
    // 002e41  ret 
    X86_AT(c, 0x2e41u);
    c.eip = pop32(c); return;
L_2e4c:
    X86_TICK(c, 12);
    // 002e4c  test word ptr gs:[ebp + 0x108], 0xe0
    X86_AT(c, 0x2e4cu);
    (void)x86_logic(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x108u))) & 0xE0u, 2);
    // 002e56  je 0x2e3a
    X86_AT(c, 0x2e56u);
    if (x86_cc(c, 4)) { X86_POLL(c, 0x2e3au); goto L_2e3a; }
    X86_TICK(c, 7);
    // 002e58  call 0x36bc
    X86_AT(c, 0x2e58u);
    push32(c, 0x2e5du); f_000036bc(c); X86_RET(c, 0x2e5du);
    X86_TICK(c, 9);
    // 002e5d  mov byte ptr gs:[ebp + 0x220], 0x13
    X86_AT(c, 0x2e5du);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x220u)), 0x13u);
    // 002e65  call 0x6120
    X86_AT(c, 0x2e65u);
    push32(c, 0x2e6au); f_00006120(c); X86_RET(c, 0x2e6au);
    X86_TICK(c, 7);
    // 002e6a  call 0x38e9
    X86_AT(c, 0x2e6au);
    push32(c, 0x2e6fu); f_000038e9(c); X86_RET(c, 0x2e6fu);
    X86_TICK(c, 5);
    // 002e6f  jae 0x2e79
    X86_AT(c, 0x2e6fu);
    if (x86_cc(c, 3)) { goto L_2e79; }
    X86_TICK(c, 7);
    // 002e71  add byte ptr gs:[ebp + 0x220], 2
    X86_AT(c, 0x2e71u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x220u)); uint32_t v = rd8(ea); wr8(ea, x86_add(c, v, 0x2u, 0, 1)); }
L_2e79:
    X86_TICK(c, 7);
    // 002e79  jmp 0x4026
    X86_AT(c, 0x2e79u);
    goto L_4026;
L_4026:
    X86_TICK(c, 15);
    // 004026  mov eax, dword ptr gs:[ebp + 0x1c4]
    X86_AT(c, 0x4026u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C4u)));
    // 00402d  mov ecx, dword ptr gs:[ebp + 0x1c8]
    X86_AT(c, 0x402du);
    c.r[1] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C8u)));
    // 004034  cmp ax, cx
    X86_AT(c, 0x4034u);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), (c.r[1] & 0xFFFFu), 0, 2);
    // 004037  jle 0x403b
    X86_AT(c, 0x4037u);
    if (x86_cc(c, 14)) { goto L_403b; }
    X86_TICK(c, 3);
    // 004039  xchg cx, ax
    X86_AT(c, 0x4039u);
    { uint32_t t = (c.r[1] & 0xFFFFu); s16(c, 1, (c.r[0] & 0xFFFFu)); s16(c, 0, t); }
L_403b:
    X86_TICK(c, 17);
    // 00403b  mov word ptr gs:[ebp + 0x222], ax
    X86_AT(c, 0x403bu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u)), (c.r[0] & 0xFFFFu));
    // 004043  mov word ptr gs:[ebp + 0x224], cx
    X86_AT(c, 0x4043u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u)), (c.r[1] & 0xFFFFu));
    // 00404b  shr eax, 0x10
    X86_AT(c, 0x404bu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00404e  shr ecx, 0x10
    X86_AT(c, 0x404eu);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[1] = r; }
    // 004051  cmp ax, cx
    X86_AT(c, 0x4051u);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), (c.r[1] & 0xFFFFu), 0, 2);
    // 004054  jle 0x4057
    X86_AT(c, 0x4054u);
    if (x86_cc(c, 14)) { goto L_4057; }
    X86_TICK(c, 3);
    // 004056  xchg ecx, eax
    X86_AT(c, 0x4056u);
    { uint32_t t = c.r[1]; c.r[1] = c.r[0]; c.r[0] = t; }
L_4057:
    X86_TICK(c, 60);
    // 004057  mov word ptr gs:[ebp + 0x226], ax
    X86_AT(c, 0x4057u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u)), (c.r[0] & 0xFFFFu));
    // 00405f  sub cx, ax
    X86_AT(c, 0x405fu);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_sub(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 004062  inc ecx
    X86_AT(c, 0x4062u);
    { uint32_t v = c.r[1]; c.r[1] = x86_inc(c, v, 4); }
    // 004063  push ecx
    X86_AT(c, 0x4063u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 004064  mov es, word ptr gs:[ebp + 4]
    X86_AT(c, 0x4064u);
    x86_load_seg(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x4u))) & 0xFFFFu);
    // 004068  movsx eax, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x4068u);
    c.r[0] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u)));
    // 004070  imul eax, dword ptr gs:[ebp + 0x20]
    X86_AT(c, 0x4070u);
    c.r[0] = x86_imul2(c, c.r[0], rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x20u))), 4);
    // 004075  add eax, dword ptr gs:[ebp]
    X86_AT(c, 0x4075u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5]))), 0, 4); }
    // 004079  mov dword ptr gs:[ebp + 0x1cc], eax
    X86_AT(c, 0x4079u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu)), c.r[0]);
    // 004080  movzx eax, byte ptr gs:[ebp + 0x220]
    X86_AT(c, 0x4080u);
    c.r[0] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x220u)));
    // 004088  mov eax, dword ptr cs:[eax*4 + 0x7fec]
    X86_AT(c, 0x4088u);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0x7FECu)));
    // 004090  mov dword ptr gs:[ebp + 0x324], eax
    X86_AT(c, 0x4090u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x324u)), c.r[0]);
L_4097:
    X86_TICK(c, 7);
    // 004097  call dword ptr gs:[ebp + 0x324]
    X86_AT(c, 0x4097u);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x324u))); push32(c, 0x409eu); x86_call(c, t); X86_RET(c, 0x409eu); }
    X86_TICK(c, 28);
    // 00409e  inc word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x409eu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x226u)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
    // 0040a6  mov eax, dword ptr gs:[ebp + 0x20]
    X86_AT(c, 0x40a6u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x20u)));
    // 0040aa  add dword ptr gs:[ebp + 0x1cc], eax
    X86_AT(c, 0x40aau);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 0040b1  dec dword ptr [esp]
    X86_AT(c, 0x40b1u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 0040b4  jne 0x4097
    X86_AT(c, 0x40b4u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x4097u); goto L_4097; }
    X86_TICK(c, 12);
    // 0040b6  add esp, 4
    X86_AT(c, 0x40b6u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0040b9  ret 
    X86_AT(c, 0x40b9u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x2d94u, "ran off the end of a function");
}
void f_00002d9a(X86Cpu& c) {
    X86_TICK(c, 12);
    // 002d9a  cmp byte ptr gs:[ebp + 0x228], 1
    X86_AT(c, 0x2d9au);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x228u))), 0x1u, 0, 1);
    // 002da2  jne 0x2db9
    X86_AT(c, 0x2da2u);
    if (x86_cc(c, 5)) { goto L_2db9; }
    X86_TICK(c, 7);
    // 002da4  test al, 0xe0
    X86_AT(c, 0x2da4u);
    (void)x86_logic(c, g8(c, 0) & 0xE0u, 1);
    // 002da6  je 0x2db2
    X86_AT(c, 0x2da6u);
    if (x86_cc(c, 4)) { goto L_2db2; }
    X86_TICK(c, 12);
    // 002da8  cmp dword ptr gs:[ebp + 0x1dc], 0xffffffff
    X86_AT(c, 0x2da8u);
    (void)x86_sub(c, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1DCu))), 0xFFFFFFFFu, 0, 4);
    // 002db0  jne 0x2db9
    X86_AT(c, 0x2db0u);
    if (x86_cc(c, 5)) { goto L_2db9; }
L_2db2:
    X86_TICK(c, 7);
    // 002db2  call 0x2975
    X86_AT(c, 0x2db2u);
    push32(c, 0x2db7u); f_00002975(c); X86_RET(c, 0x2db7u);
    X86_TICK(c, 7);
    // 002db7  jmp 0x2de0
    X86_AT(c, 0x2db7u);
    goto L_2de0;
L_2db9:
    X86_TICK(c, 7);
    // 002db9  call 0x28d8
    X86_AT(c, 0x2db9u);
    push32(c, 0x2dbeu); f_000028d8(c); X86_RET(c, 0x2dbeu);
    X86_TICK(c, 7);
    // 002dbe  test al, al
    X86_AT(c, 0x2dbeu);
    (void)x86_logic(c, g8(c, 0) & g8(c, 0), 1);
    // 002dc0  je 0x2de0
    X86_AT(c, 0x2dc0u);
    if (x86_cc(c, 4)) { goto L_2de0; }
    X86_TICK(c, 28);
    // 002dc2  mov ecx, dword ptr gs:[ebp + 0xc]
    X86_AT(c, 0x2dc2u);
    c.r[1] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0xCu)));
    // 002dc6  mov dword ptr gs:[ebp + 0x200], ecx
    X86_AT(c, 0x2dc6u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x200u)), c.r[1]);
    // 002dcd  mov eax, ss
    X86_AT(c, 0x2dcdu);
    c.r[0] = (uint32_t)c.sreg[2];
    // 002dcf  mov es, eax
    X86_AT(c, 0x2dcfu);
    x86_load_seg(c, 0, (c.r[0] & 0xFFFFu) & 0xFFFFu);
    // 002dd1  sub esp, ecx
    X86_AT(c, 0x2dd1u);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, c.r[1], 0, 4); }
    // 002dd3  mov edi, esp
    X86_AT(c, 0x2dd3u);
    c.r[7] = c.r[4];
    // 002dd5  mov dword ptr gs:[ebp + 8], edi
    X86_AT(c, 0x2dd5u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x8u)), c.r[7]);
    // 002dd9  shr ecx, 2
    X86_AT(c, 0x2dd9u);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 5, v, 0x2u, 4, w); if (w) c.r[1] = r; }
    // 002ddc  sub eax, eax
    X86_AT(c, 0x2ddcu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 002dde  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x2ddeu);
    x86_string(c, 2, 4, 243, 4, 3);
L_2de0:
    X86_TICK(c, 9);
    // 002de0  mov byte ptr gs:[ebp + 0x1e3], 0xff
    X86_AT(c, 0x2de0u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E3u)), 0xFFu);
    // 002de8  call 0x36dc
    X86_AT(c, 0x2de8u);
    push32(c, 0x2dedu); f_000036dc(c); X86_RET(c, 0x2dedu);
    X86_TICK(c, 7);
    // 002ded  call 0x6120
    X86_AT(c, 0x2dedu);
    push32(c, 0x2df2u); f_00006120(c); X86_RET(c, 0x2df2u);
    X86_TICK(c, 7);
    // 002df2  call 0x3d70
    X86_AT(c, 0x2df2u);
    push32(c, 0x2df7u); f_00003d70(c); X86_RET(c, 0x2df7u);
    X86_TICK(c, 12);
    // 002df7  test word ptr gs:[ebp + 0x108], 0xe0
    X86_AT(c, 0x2df7u);
    (void)x86_logic(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x108u))) & 0xE0u, 2);
    // 002e01  je 0x2e3a
    X86_AT(c, 0x2e01u);
    if (x86_cc(c, 4)) { goto L_2e3a; }
    X86_TICK(c, 7);
    // 002e03  call 0x36bc
    X86_AT(c, 0x2e03u);
    push32(c, 0x2e08u); f_000036bc(c); X86_RET(c, 0x2e08u);
    X86_TICK(c, 11);
    // 002e08  mov al, byte ptr gs:[ebp + 0x220]
    X86_AT(c, 0x2e08u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x220u))));
    // 002e0f  cmp al, 0x10
    X86_AT(c, 0x2e0fu);
    (void)x86_sub(c, g8(c, 0), 0x10u, 0, 1);
    // 002e11  jae 0x2e15
    X86_AT(c, 0x2e11u);
    if (x86_cc(c, 3)) { goto L_2e15; }
    X86_TICK(c, 2);
    // 002e13  add al, 0xe
    X86_AT(c, 0x2e13u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, 0xEu, 0, 1)); }
L_2e15:
    X86_TICK(c, 11);
    // 002e15  add al, 4
    X86_AT(c, 0x2e15u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, 0x4u, 0, 1)); }
    // 002e17  mov byte ptr gs:[ebp + 0x220], al
    X86_AT(c, 0x2e17u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x220u)), g8(c, 0));
    // 002e1e  call 0x6120
    X86_AT(c, 0x2e1eu);
    push32(c, 0x2e23u); f_00006120(c); X86_RET(c, 0x2e23u);
    X86_TICK(c, 21);
    // 002e23  sub eax, eax
    X86_AT(c, 0x2e23u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 002e25  btr word ptr gs:[ebp + 0x221], 7
    X86_AT(c, 0x2e25u);
    x86_bitop(c, 2, (c.sbase[5] + (uint32_t)(c.r[5] + 0x221u)), false, 0x7u, 2, nullptr, 0);
    // 002e2f  setb al
    X86_AT(c, 0x2e2fu);
    s8(c, 0, x86_cc(c, 2) ? 1u : 0u);
    // 002e32  call dword ptr cs:[eax*4 + 0x2e44]
    X86_AT(c, 0x2e32u);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0x2E44u))); push32(c, 0x2e3au);
      switch (t) {
      case 0x3fccu: f_00003fcc(c); break;
      case 0x4026u: f_00004026(c); break;
      default: x86_call(c, t); }
      X86_RET(c, 0x2e3au); }
L_2e3a:
    X86_TICK(c, 16);
    // 002e3a  add esp, dword ptr gs:[ebp + 0x200]
    X86_AT(c, 0x2e3au);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x200u))), 0, 4); }
    // 002e41  ret 
    X86_AT(c, 0x2e41u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x2d9au, "ran off the end of a function");
}
void f_00002da2(X86Cpu& c) {
    X86_TICK(c, 5);
    // 002da2  jne 0x2db9
    X86_AT(c, 0x2da2u);
    if (x86_cc(c, 5)) { goto L_2db9; }
    X86_TICK(c, 7);
    // 002da4  test al, 0xe0
    X86_AT(c, 0x2da4u);
    (void)x86_logic(c, g8(c, 0) & 0xE0u, 1);
    // 002da6  je 0x2db2
    X86_AT(c, 0x2da6u);
    if (x86_cc(c, 4)) { goto L_2db2; }
    X86_TICK(c, 12);
    // 002da8  cmp dword ptr gs:[ebp + 0x1dc], 0xffffffff
    X86_AT(c, 0x2da8u);
    (void)x86_sub(c, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1DCu))), 0xFFFFFFFFu, 0, 4);
    // 002db0  jne 0x2db9
    X86_AT(c, 0x2db0u);
    if (x86_cc(c, 5)) { goto L_2db9; }
L_2db2:
    X86_TICK(c, 7);
    // 002db2  call 0x2975
    X86_AT(c, 0x2db2u);
    push32(c, 0x2db7u); f_00002975(c); X86_RET(c, 0x2db7u);
    X86_TICK(c, 7);
    // 002db7  jmp 0x2de0
    X86_AT(c, 0x2db7u);
    goto L_2de0;
L_2db9:
    X86_TICK(c, 7);
    // 002db9  call 0x28d8
    X86_AT(c, 0x2db9u);
    push32(c, 0x2dbeu); f_000028d8(c); X86_RET(c, 0x2dbeu);
    X86_TICK(c, 7);
    // 002dbe  test al, al
    X86_AT(c, 0x2dbeu);
    (void)x86_logic(c, g8(c, 0) & g8(c, 0), 1);
    // 002dc0  je 0x2de0
    X86_AT(c, 0x2dc0u);
    if (x86_cc(c, 4)) { goto L_2de0; }
    X86_TICK(c, 28);
    // 002dc2  mov ecx, dword ptr gs:[ebp + 0xc]
    X86_AT(c, 0x2dc2u);
    c.r[1] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0xCu)));
    // 002dc6  mov dword ptr gs:[ebp + 0x200], ecx
    X86_AT(c, 0x2dc6u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x200u)), c.r[1]);
    // 002dcd  mov eax, ss
    X86_AT(c, 0x2dcdu);
    c.r[0] = (uint32_t)c.sreg[2];
    // 002dcf  mov es, eax
    X86_AT(c, 0x2dcfu);
    x86_load_seg(c, 0, (c.r[0] & 0xFFFFu) & 0xFFFFu);
    // 002dd1  sub esp, ecx
    X86_AT(c, 0x2dd1u);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, c.r[1], 0, 4); }
    // 002dd3  mov edi, esp
    X86_AT(c, 0x2dd3u);
    c.r[7] = c.r[4];
    // 002dd5  mov dword ptr gs:[ebp + 8], edi
    X86_AT(c, 0x2dd5u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x8u)), c.r[7]);
    // 002dd9  shr ecx, 2
    X86_AT(c, 0x2dd9u);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 5, v, 0x2u, 4, w); if (w) c.r[1] = r; }
    // 002ddc  sub eax, eax
    X86_AT(c, 0x2ddcu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 002dde  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x2ddeu);
    x86_string(c, 2, 4, 243, 4, 3);
L_2de0:
    X86_TICK(c, 9);
    // 002de0  mov byte ptr gs:[ebp + 0x1e3], 0xff
    X86_AT(c, 0x2de0u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E3u)), 0xFFu);
    // 002de8  call 0x36dc
    X86_AT(c, 0x2de8u);
    push32(c, 0x2dedu); f_000036dc(c); X86_RET(c, 0x2dedu);
    X86_TICK(c, 7);
    // 002ded  call 0x6120
    X86_AT(c, 0x2dedu);
    push32(c, 0x2df2u); f_00006120(c); X86_RET(c, 0x2df2u);
    X86_TICK(c, 7);
    // 002df2  call 0x3d70
    X86_AT(c, 0x2df2u);
    push32(c, 0x2df7u); f_00003d70(c); X86_RET(c, 0x2df7u);
    X86_TICK(c, 12);
    // 002df7  test word ptr gs:[ebp + 0x108], 0xe0
    X86_AT(c, 0x2df7u);
    (void)x86_logic(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x108u))) & 0xE0u, 2);
    // 002e01  je 0x2e3a
    X86_AT(c, 0x2e01u);
    if (x86_cc(c, 4)) { goto L_2e3a; }
    X86_TICK(c, 7);
    // 002e03  call 0x36bc
    X86_AT(c, 0x2e03u);
    push32(c, 0x2e08u); f_000036bc(c); X86_RET(c, 0x2e08u);
    X86_TICK(c, 11);
    // 002e08  mov al, byte ptr gs:[ebp + 0x220]
    X86_AT(c, 0x2e08u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x220u))));
    // 002e0f  cmp al, 0x10
    X86_AT(c, 0x2e0fu);
    (void)x86_sub(c, g8(c, 0), 0x10u, 0, 1);
    // 002e11  jae 0x2e15
    X86_AT(c, 0x2e11u);
    if (x86_cc(c, 3)) { goto L_2e15; }
    X86_TICK(c, 2);
    // 002e13  add al, 0xe
    X86_AT(c, 0x2e13u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, 0xEu, 0, 1)); }
L_2e15:
    X86_TICK(c, 11);
    // 002e15  add al, 4
    X86_AT(c, 0x2e15u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, 0x4u, 0, 1)); }
    // 002e17  mov byte ptr gs:[ebp + 0x220], al
    X86_AT(c, 0x2e17u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x220u)), g8(c, 0));
    // 002e1e  call 0x6120
    X86_AT(c, 0x2e1eu);
    push32(c, 0x2e23u); f_00006120(c); X86_RET(c, 0x2e23u);
    X86_TICK(c, 21);
    // 002e23  sub eax, eax
    X86_AT(c, 0x2e23u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 002e25  btr word ptr gs:[ebp + 0x221], 7
    X86_AT(c, 0x2e25u);
    x86_bitop(c, 2, (c.sbase[5] + (uint32_t)(c.r[5] + 0x221u)), false, 0x7u, 2, nullptr, 0);
    // 002e2f  setb al
    X86_AT(c, 0x2e2fu);
    s8(c, 0, x86_cc(c, 2) ? 1u : 0u);
    // 002e32  call dword ptr cs:[eax*4 + 0x2e44]
    X86_AT(c, 0x2e32u);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0x2E44u))); push32(c, 0x2e3au);
      switch (t) {
      case 0x3fccu: f_00003fcc(c); break;
      case 0x4026u: f_00004026(c); break;
      default: x86_call(c, t); }
      X86_RET(c, 0x2e3au); }
L_2e3a:
    X86_TICK(c, 16);
    // 002e3a  add esp, dword ptr gs:[ebp + 0x200]
    X86_AT(c, 0x2e3au);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x200u))), 0, 4); }
    // 002e41  ret 
    X86_AT(c, 0x2e41u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x2da2u, "ran off the end of a function");
}
void f_00002da4(X86Cpu& c) {
    X86_TICK(c, 7);
    // 002da4  test al, 0xe0
    X86_AT(c, 0x2da4u);
    (void)x86_logic(c, g8(c, 0) & 0xE0u, 1);
    // 002da6  je 0x2db2
    X86_AT(c, 0x2da6u);
    if (x86_cc(c, 4)) { goto L_2db2; }
    X86_TICK(c, 12);
    // 002da8  cmp dword ptr gs:[ebp + 0x1dc], 0xffffffff
    X86_AT(c, 0x2da8u);
    (void)x86_sub(c, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1DCu))), 0xFFFFFFFFu, 0, 4);
    // 002db0  jne 0x2db9
    X86_AT(c, 0x2db0u);
    if (x86_cc(c, 5)) { goto L_2db9; }
L_2db2:
    X86_TICK(c, 7);
    // 002db2  call 0x2975
    X86_AT(c, 0x2db2u);
    push32(c, 0x2db7u); f_00002975(c); X86_RET(c, 0x2db7u);
    X86_TICK(c, 7);
    // 002db7  jmp 0x2de0
    X86_AT(c, 0x2db7u);
    goto L_2de0;
L_2db9:
    X86_TICK(c, 7);
    // 002db9  call 0x28d8
    X86_AT(c, 0x2db9u);
    push32(c, 0x2dbeu); f_000028d8(c); X86_RET(c, 0x2dbeu);
    X86_TICK(c, 7);
    // 002dbe  test al, al
    X86_AT(c, 0x2dbeu);
    (void)x86_logic(c, g8(c, 0) & g8(c, 0), 1);
    // 002dc0  je 0x2de0
    X86_AT(c, 0x2dc0u);
    if (x86_cc(c, 4)) { goto L_2de0; }
    X86_TICK(c, 28);
    // 002dc2  mov ecx, dword ptr gs:[ebp + 0xc]
    X86_AT(c, 0x2dc2u);
    c.r[1] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0xCu)));
    // 002dc6  mov dword ptr gs:[ebp + 0x200], ecx
    X86_AT(c, 0x2dc6u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x200u)), c.r[1]);
    // 002dcd  mov eax, ss
    X86_AT(c, 0x2dcdu);
    c.r[0] = (uint32_t)c.sreg[2];
    // 002dcf  mov es, eax
    X86_AT(c, 0x2dcfu);
    x86_load_seg(c, 0, (c.r[0] & 0xFFFFu) & 0xFFFFu);
    // 002dd1  sub esp, ecx
    X86_AT(c, 0x2dd1u);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, c.r[1], 0, 4); }
    // 002dd3  mov edi, esp
    X86_AT(c, 0x2dd3u);
    c.r[7] = c.r[4];
    // 002dd5  mov dword ptr gs:[ebp + 8], edi
    X86_AT(c, 0x2dd5u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x8u)), c.r[7]);
    // 002dd9  shr ecx, 2
    X86_AT(c, 0x2dd9u);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 5, v, 0x2u, 4, w); if (w) c.r[1] = r; }
    // 002ddc  sub eax, eax
    X86_AT(c, 0x2ddcu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 002dde  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x2ddeu);
    x86_string(c, 2, 4, 243, 4, 3);
L_2de0:
    X86_TICK(c, 9);
    // 002de0  mov byte ptr gs:[ebp + 0x1e3], 0xff
    X86_AT(c, 0x2de0u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E3u)), 0xFFu);
    // 002de8  call 0x36dc
    X86_AT(c, 0x2de8u);
    push32(c, 0x2dedu); f_000036dc(c); X86_RET(c, 0x2dedu);
    X86_TICK(c, 7);
    // 002ded  call 0x6120
    X86_AT(c, 0x2dedu);
    push32(c, 0x2df2u); f_00006120(c); X86_RET(c, 0x2df2u);
    X86_TICK(c, 7);
    // 002df2  call 0x3d70
    X86_AT(c, 0x2df2u);
    push32(c, 0x2df7u); f_00003d70(c); X86_RET(c, 0x2df7u);
    X86_TICK(c, 12);
    // 002df7  test word ptr gs:[ebp + 0x108], 0xe0
    X86_AT(c, 0x2df7u);
    (void)x86_logic(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x108u))) & 0xE0u, 2);
    // 002e01  je 0x2e3a
    X86_AT(c, 0x2e01u);
    if (x86_cc(c, 4)) { goto L_2e3a; }
    X86_TICK(c, 7);
    // 002e03  call 0x36bc
    X86_AT(c, 0x2e03u);
    push32(c, 0x2e08u); f_000036bc(c); X86_RET(c, 0x2e08u);
    X86_TICK(c, 11);
    // 002e08  mov al, byte ptr gs:[ebp + 0x220]
    X86_AT(c, 0x2e08u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x220u))));
    // 002e0f  cmp al, 0x10
    X86_AT(c, 0x2e0fu);
    (void)x86_sub(c, g8(c, 0), 0x10u, 0, 1);
    // 002e11  jae 0x2e15
    X86_AT(c, 0x2e11u);
    if (x86_cc(c, 3)) { goto L_2e15; }
    X86_TICK(c, 2);
    // 002e13  add al, 0xe
    X86_AT(c, 0x2e13u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, 0xEu, 0, 1)); }
L_2e15:
    X86_TICK(c, 11);
    // 002e15  add al, 4
    X86_AT(c, 0x2e15u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, 0x4u, 0, 1)); }
    // 002e17  mov byte ptr gs:[ebp + 0x220], al
    X86_AT(c, 0x2e17u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x220u)), g8(c, 0));
    // 002e1e  call 0x6120
    X86_AT(c, 0x2e1eu);
    push32(c, 0x2e23u); f_00006120(c); X86_RET(c, 0x2e23u);
    X86_TICK(c, 21);
    // 002e23  sub eax, eax
    X86_AT(c, 0x2e23u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 002e25  btr word ptr gs:[ebp + 0x221], 7
    X86_AT(c, 0x2e25u);
    x86_bitop(c, 2, (c.sbase[5] + (uint32_t)(c.r[5] + 0x221u)), false, 0x7u, 2, nullptr, 0);
    // 002e2f  setb al
    X86_AT(c, 0x2e2fu);
    s8(c, 0, x86_cc(c, 2) ? 1u : 0u);
    // 002e32  call dword ptr cs:[eax*4 + 0x2e44]
    X86_AT(c, 0x2e32u);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0x2E44u))); push32(c, 0x2e3au);
      switch (t) {
      case 0x3fccu: f_00003fcc(c); break;
      case 0x4026u: f_00004026(c); break;
      default: x86_call(c, t); }
      X86_RET(c, 0x2e3au); }
L_2e3a:
    X86_TICK(c, 16);
    // 002e3a  add esp, dword ptr gs:[ebp + 0x200]
    X86_AT(c, 0x2e3au);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x200u))), 0, 4); }
    // 002e41  ret 
    X86_AT(c, 0x2e41u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x2da4u, "ran off the end of a function");
}
void f_00002da6(X86Cpu& c) {
    X86_TICK(c, 5);
    // 002da6  je 0x2db2
    X86_AT(c, 0x2da6u);
    if (x86_cc(c, 4)) { goto L_2db2; }
    X86_TICK(c, 12);
    // 002da8  cmp dword ptr gs:[ebp + 0x1dc], 0xffffffff
    X86_AT(c, 0x2da8u);
    (void)x86_sub(c, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1DCu))), 0xFFFFFFFFu, 0, 4);
    // 002db0  jne 0x2db9
    X86_AT(c, 0x2db0u);
    if (x86_cc(c, 5)) { goto L_2db9; }
L_2db2:
    X86_TICK(c, 7);
    // 002db2  call 0x2975
    X86_AT(c, 0x2db2u);
    push32(c, 0x2db7u); f_00002975(c); X86_RET(c, 0x2db7u);
    X86_TICK(c, 7);
    // 002db7  jmp 0x2de0
    X86_AT(c, 0x2db7u);
    goto L_2de0;
L_2db9:
    X86_TICK(c, 7);
    // 002db9  call 0x28d8
    X86_AT(c, 0x2db9u);
    push32(c, 0x2dbeu); f_000028d8(c); X86_RET(c, 0x2dbeu);
    X86_TICK(c, 7);
    // 002dbe  test al, al
    X86_AT(c, 0x2dbeu);
    (void)x86_logic(c, g8(c, 0) & g8(c, 0), 1);
    // 002dc0  je 0x2de0
    X86_AT(c, 0x2dc0u);
    if (x86_cc(c, 4)) { goto L_2de0; }
    X86_TICK(c, 28);
    // 002dc2  mov ecx, dword ptr gs:[ebp + 0xc]
    X86_AT(c, 0x2dc2u);
    c.r[1] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0xCu)));
    // 002dc6  mov dword ptr gs:[ebp + 0x200], ecx
    X86_AT(c, 0x2dc6u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x200u)), c.r[1]);
    // 002dcd  mov eax, ss
    X86_AT(c, 0x2dcdu);
    c.r[0] = (uint32_t)c.sreg[2];
    // 002dcf  mov es, eax
    X86_AT(c, 0x2dcfu);
    x86_load_seg(c, 0, (c.r[0] & 0xFFFFu) & 0xFFFFu);
    // 002dd1  sub esp, ecx
    X86_AT(c, 0x2dd1u);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, c.r[1], 0, 4); }
    // 002dd3  mov edi, esp
    X86_AT(c, 0x2dd3u);
    c.r[7] = c.r[4];
    // 002dd5  mov dword ptr gs:[ebp + 8], edi
    X86_AT(c, 0x2dd5u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x8u)), c.r[7]);
    // 002dd9  shr ecx, 2
    X86_AT(c, 0x2dd9u);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 5, v, 0x2u, 4, w); if (w) c.r[1] = r; }
    // 002ddc  sub eax, eax
    X86_AT(c, 0x2ddcu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 002dde  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x2ddeu);
    x86_string(c, 2, 4, 243, 4, 3);
L_2de0:
    X86_TICK(c, 9);
    // 002de0  mov byte ptr gs:[ebp + 0x1e3], 0xff
    X86_AT(c, 0x2de0u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E3u)), 0xFFu);
    // 002de8  call 0x36dc
    X86_AT(c, 0x2de8u);
    push32(c, 0x2dedu); f_000036dc(c); X86_RET(c, 0x2dedu);
    X86_TICK(c, 7);
    // 002ded  call 0x6120
    X86_AT(c, 0x2dedu);
    push32(c, 0x2df2u); f_00006120(c); X86_RET(c, 0x2df2u);
    X86_TICK(c, 7);
    // 002df2  call 0x3d70
    X86_AT(c, 0x2df2u);
    push32(c, 0x2df7u); f_00003d70(c); X86_RET(c, 0x2df7u);
    X86_TICK(c, 12);
    // 002df7  test word ptr gs:[ebp + 0x108], 0xe0
    X86_AT(c, 0x2df7u);
    (void)x86_logic(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x108u))) & 0xE0u, 2);
    // 002e01  je 0x2e3a
    X86_AT(c, 0x2e01u);
    if (x86_cc(c, 4)) { goto L_2e3a; }
    X86_TICK(c, 7);
    // 002e03  call 0x36bc
    X86_AT(c, 0x2e03u);
    push32(c, 0x2e08u); f_000036bc(c); X86_RET(c, 0x2e08u);
    X86_TICK(c, 11);
    // 002e08  mov al, byte ptr gs:[ebp + 0x220]
    X86_AT(c, 0x2e08u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x220u))));
    // 002e0f  cmp al, 0x10
    X86_AT(c, 0x2e0fu);
    (void)x86_sub(c, g8(c, 0), 0x10u, 0, 1);
    // 002e11  jae 0x2e15
    X86_AT(c, 0x2e11u);
    if (x86_cc(c, 3)) { goto L_2e15; }
    X86_TICK(c, 2);
    // 002e13  add al, 0xe
    X86_AT(c, 0x2e13u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, 0xEu, 0, 1)); }
L_2e15:
    X86_TICK(c, 11);
    // 002e15  add al, 4
    X86_AT(c, 0x2e15u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, 0x4u, 0, 1)); }
    // 002e17  mov byte ptr gs:[ebp + 0x220], al
    X86_AT(c, 0x2e17u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x220u)), g8(c, 0));
    // 002e1e  call 0x6120
    X86_AT(c, 0x2e1eu);
    push32(c, 0x2e23u); f_00006120(c); X86_RET(c, 0x2e23u);
    X86_TICK(c, 21);
    // 002e23  sub eax, eax
    X86_AT(c, 0x2e23u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 002e25  btr word ptr gs:[ebp + 0x221], 7
    X86_AT(c, 0x2e25u);
    x86_bitop(c, 2, (c.sbase[5] + (uint32_t)(c.r[5] + 0x221u)), false, 0x7u, 2, nullptr, 0);
    // 002e2f  setb al
    X86_AT(c, 0x2e2fu);
    s8(c, 0, x86_cc(c, 2) ? 1u : 0u);
    // 002e32  call dword ptr cs:[eax*4 + 0x2e44]
    X86_AT(c, 0x2e32u);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0x2E44u))); push32(c, 0x2e3au);
      switch (t) {
      case 0x3fccu: f_00003fcc(c); break;
      case 0x4026u: f_00004026(c); break;
      default: x86_call(c, t); }
      X86_RET(c, 0x2e3au); }
L_2e3a:
    X86_TICK(c, 16);
    // 002e3a  add esp, dword ptr gs:[ebp + 0x200]
    X86_AT(c, 0x2e3au);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x200u))), 0, 4); }
    // 002e41  ret 
    X86_AT(c, 0x2e41u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x2da6u, "ran off the end of a function");
}
void f_00002da8(X86Cpu& c) {
    X86_TICK(c, 12);
    // 002da8  cmp dword ptr gs:[ebp + 0x1dc], 0xffffffff
    X86_AT(c, 0x2da8u);
    (void)x86_sub(c, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1DCu))), 0xFFFFFFFFu, 0, 4);
    // 002db0  jne 0x2db9
    X86_AT(c, 0x2db0u);
    if (x86_cc(c, 5)) { goto L_2db9; }
    X86_TICK(c, 7);
    // 002db2  call 0x2975
    X86_AT(c, 0x2db2u);
    push32(c, 0x2db7u); f_00002975(c); X86_RET(c, 0x2db7u);
    X86_TICK(c, 7);
    // 002db7  jmp 0x2de0
    X86_AT(c, 0x2db7u);
    goto L_2de0;
L_2db9:
    X86_TICK(c, 7);
    // 002db9  call 0x28d8
    X86_AT(c, 0x2db9u);
    push32(c, 0x2dbeu); f_000028d8(c); X86_RET(c, 0x2dbeu);
    X86_TICK(c, 7);
    // 002dbe  test al, al
    X86_AT(c, 0x2dbeu);
    (void)x86_logic(c, g8(c, 0) & g8(c, 0), 1);
    // 002dc0  je 0x2de0
    X86_AT(c, 0x2dc0u);
    if (x86_cc(c, 4)) { goto L_2de0; }
    X86_TICK(c, 28);
    // 002dc2  mov ecx, dword ptr gs:[ebp + 0xc]
    X86_AT(c, 0x2dc2u);
    c.r[1] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0xCu)));
    // 002dc6  mov dword ptr gs:[ebp + 0x200], ecx
    X86_AT(c, 0x2dc6u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x200u)), c.r[1]);
    // 002dcd  mov eax, ss
    X86_AT(c, 0x2dcdu);
    c.r[0] = (uint32_t)c.sreg[2];
    // 002dcf  mov es, eax
    X86_AT(c, 0x2dcfu);
    x86_load_seg(c, 0, (c.r[0] & 0xFFFFu) & 0xFFFFu);
    // 002dd1  sub esp, ecx
    X86_AT(c, 0x2dd1u);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, c.r[1], 0, 4); }
    // 002dd3  mov edi, esp
    X86_AT(c, 0x2dd3u);
    c.r[7] = c.r[4];
    // 002dd5  mov dword ptr gs:[ebp + 8], edi
    X86_AT(c, 0x2dd5u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x8u)), c.r[7]);
    // 002dd9  shr ecx, 2
    X86_AT(c, 0x2dd9u);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 5, v, 0x2u, 4, w); if (w) c.r[1] = r; }
    // 002ddc  sub eax, eax
    X86_AT(c, 0x2ddcu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 002dde  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x2ddeu);
    x86_string(c, 2, 4, 243, 4, 3);
L_2de0:
    X86_TICK(c, 9);
    // 002de0  mov byte ptr gs:[ebp + 0x1e3], 0xff
    X86_AT(c, 0x2de0u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E3u)), 0xFFu);
    // 002de8  call 0x36dc
    X86_AT(c, 0x2de8u);
    push32(c, 0x2dedu); f_000036dc(c); X86_RET(c, 0x2dedu);
    X86_TICK(c, 7);
    // 002ded  call 0x6120
    X86_AT(c, 0x2dedu);
    push32(c, 0x2df2u); f_00006120(c); X86_RET(c, 0x2df2u);
    X86_TICK(c, 7);
    // 002df2  call 0x3d70
    X86_AT(c, 0x2df2u);
    push32(c, 0x2df7u); f_00003d70(c); X86_RET(c, 0x2df7u);
    X86_TICK(c, 12);
    // 002df7  test word ptr gs:[ebp + 0x108], 0xe0
    X86_AT(c, 0x2df7u);
    (void)x86_logic(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x108u))) & 0xE0u, 2);
    // 002e01  je 0x2e3a
    X86_AT(c, 0x2e01u);
    if (x86_cc(c, 4)) { goto L_2e3a; }
    X86_TICK(c, 7);
    // 002e03  call 0x36bc
    X86_AT(c, 0x2e03u);
    push32(c, 0x2e08u); f_000036bc(c); X86_RET(c, 0x2e08u);
    X86_TICK(c, 11);
    // 002e08  mov al, byte ptr gs:[ebp + 0x220]
    X86_AT(c, 0x2e08u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x220u))));
    // 002e0f  cmp al, 0x10
    X86_AT(c, 0x2e0fu);
    (void)x86_sub(c, g8(c, 0), 0x10u, 0, 1);
    // 002e11  jae 0x2e15
    X86_AT(c, 0x2e11u);
    if (x86_cc(c, 3)) { goto L_2e15; }
    X86_TICK(c, 2);
    // 002e13  add al, 0xe
    X86_AT(c, 0x2e13u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, 0xEu, 0, 1)); }
L_2e15:
    X86_TICK(c, 11);
    // 002e15  add al, 4
    X86_AT(c, 0x2e15u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, 0x4u, 0, 1)); }
    // 002e17  mov byte ptr gs:[ebp + 0x220], al
    X86_AT(c, 0x2e17u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x220u)), g8(c, 0));
    // 002e1e  call 0x6120
    X86_AT(c, 0x2e1eu);
    push32(c, 0x2e23u); f_00006120(c); X86_RET(c, 0x2e23u);
    X86_TICK(c, 21);
    // 002e23  sub eax, eax
    X86_AT(c, 0x2e23u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 002e25  btr word ptr gs:[ebp + 0x221], 7
    X86_AT(c, 0x2e25u);
    x86_bitop(c, 2, (c.sbase[5] + (uint32_t)(c.r[5] + 0x221u)), false, 0x7u, 2, nullptr, 0);
    // 002e2f  setb al
    X86_AT(c, 0x2e2fu);
    s8(c, 0, x86_cc(c, 2) ? 1u : 0u);
    // 002e32  call dword ptr cs:[eax*4 + 0x2e44]
    X86_AT(c, 0x2e32u);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0x2E44u))); push32(c, 0x2e3au);
      switch (t) {
      case 0x3fccu: f_00003fcc(c); break;
      case 0x4026u: f_00004026(c); break;
      default: x86_call(c, t); }
      X86_RET(c, 0x2e3au); }
L_2e3a:
    X86_TICK(c, 16);
    // 002e3a  add esp, dword ptr gs:[ebp + 0x200]
    X86_AT(c, 0x2e3au);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x200u))), 0, 4); }
    // 002e41  ret 
    X86_AT(c, 0x2e41u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x2da8u, "ran off the end of a function");
}
void f_00002db0(X86Cpu& c) {
    X86_TICK(c, 5);
    // 002db0  jne 0x2db9
    X86_AT(c, 0x2db0u);
    if (x86_cc(c, 5)) { goto L_2db9; }
    X86_TICK(c, 7);
    // 002db2  call 0x2975
    X86_AT(c, 0x2db2u);
    push32(c, 0x2db7u); f_00002975(c); X86_RET(c, 0x2db7u);
    X86_TICK(c, 7);
    // 002db7  jmp 0x2de0
    X86_AT(c, 0x2db7u);
    goto L_2de0;
L_2db9:
    X86_TICK(c, 7);
    // 002db9  call 0x28d8
    X86_AT(c, 0x2db9u);
    push32(c, 0x2dbeu); f_000028d8(c); X86_RET(c, 0x2dbeu);
    X86_TICK(c, 7);
    // 002dbe  test al, al
    X86_AT(c, 0x2dbeu);
    (void)x86_logic(c, g8(c, 0) & g8(c, 0), 1);
    // 002dc0  je 0x2de0
    X86_AT(c, 0x2dc0u);
    if (x86_cc(c, 4)) { goto L_2de0; }
    X86_TICK(c, 28);
    // 002dc2  mov ecx, dword ptr gs:[ebp + 0xc]
    X86_AT(c, 0x2dc2u);
    c.r[1] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0xCu)));
    // 002dc6  mov dword ptr gs:[ebp + 0x200], ecx
    X86_AT(c, 0x2dc6u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x200u)), c.r[1]);
    // 002dcd  mov eax, ss
    X86_AT(c, 0x2dcdu);
    c.r[0] = (uint32_t)c.sreg[2];
    // 002dcf  mov es, eax
    X86_AT(c, 0x2dcfu);
    x86_load_seg(c, 0, (c.r[0] & 0xFFFFu) & 0xFFFFu);
    // 002dd1  sub esp, ecx
    X86_AT(c, 0x2dd1u);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, c.r[1], 0, 4); }
    // 002dd3  mov edi, esp
    X86_AT(c, 0x2dd3u);
    c.r[7] = c.r[4];
    // 002dd5  mov dword ptr gs:[ebp + 8], edi
    X86_AT(c, 0x2dd5u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x8u)), c.r[7]);
    // 002dd9  shr ecx, 2
    X86_AT(c, 0x2dd9u);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 5, v, 0x2u, 4, w); if (w) c.r[1] = r; }
    // 002ddc  sub eax, eax
    X86_AT(c, 0x2ddcu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 002dde  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x2ddeu);
    x86_string(c, 2, 4, 243, 4, 3);
L_2de0:
    X86_TICK(c, 9);
    // 002de0  mov byte ptr gs:[ebp + 0x1e3], 0xff
    X86_AT(c, 0x2de0u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E3u)), 0xFFu);
    // 002de8  call 0x36dc
    X86_AT(c, 0x2de8u);
    push32(c, 0x2dedu); f_000036dc(c); X86_RET(c, 0x2dedu);
    X86_TICK(c, 7);
    // 002ded  call 0x6120
    X86_AT(c, 0x2dedu);
    push32(c, 0x2df2u); f_00006120(c); X86_RET(c, 0x2df2u);
    X86_TICK(c, 7);
    // 002df2  call 0x3d70
    X86_AT(c, 0x2df2u);
    push32(c, 0x2df7u); f_00003d70(c); X86_RET(c, 0x2df7u);
    X86_TICK(c, 12);
    // 002df7  test word ptr gs:[ebp + 0x108], 0xe0
    X86_AT(c, 0x2df7u);
    (void)x86_logic(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x108u))) & 0xE0u, 2);
    // 002e01  je 0x2e3a
    X86_AT(c, 0x2e01u);
    if (x86_cc(c, 4)) { goto L_2e3a; }
    X86_TICK(c, 7);
    // 002e03  call 0x36bc
    X86_AT(c, 0x2e03u);
    push32(c, 0x2e08u); f_000036bc(c); X86_RET(c, 0x2e08u);
    X86_TICK(c, 11);
    // 002e08  mov al, byte ptr gs:[ebp + 0x220]
    X86_AT(c, 0x2e08u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x220u))));
    // 002e0f  cmp al, 0x10
    X86_AT(c, 0x2e0fu);
    (void)x86_sub(c, g8(c, 0), 0x10u, 0, 1);
    // 002e11  jae 0x2e15
    X86_AT(c, 0x2e11u);
    if (x86_cc(c, 3)) { goto L_2e15; }
    X86_TICK(c, 2);
    // 002e13  add al, 0xe
    X86_AT(c, 0x2e13u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, 0xEu, 0, 1)); }
L_2e15:
    X86_TICK(c, 11);
    // 002e15  add al, 4
    X86_AT(c, 0x2e15u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, 0x4u, 0, 1)); }
    // 002e17  mov byte ptr gs:[ebp + 0x220], al
    X86_AT(c, 0x2e17u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x220u)), g8(c, 0));
    // 002e1e  call 0x6120
    X86_AT(c, 0x2e1eu);
    push32(c, 0x2e23u); f_00006120(c); X86_RET(c, 0x2e23u);
    X86_TICK(c, 21);
    // 002e23  sub eax, eax
    X86_AT(c, 0x2e23u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 002e25  btr word ptr gs:[ebp + 0x221], 7
    X86_AT(c, 0x2e25u);
    x86_bitop(c, 2, (c.sbase[5] + (uint32_t)(c.r[5] + 0x221u)), false, 0x7u, 2, nullptr, 0);
    // 002e2f  setb al
    X86_AT(c, 0x2e2fu);
    s8(c, 0, x86_cc(c, 2) ? 1u : 0u);
    // 002e32  call dword ptr cs:[eax*4 + 0x2e44]
    X86_AT(c, 0x2e32u);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0x2E44u))); push32(c, 0x2e3au);
      switch (t) {
      case 0x3fccu: f_00003fcc(c); break;
      case 0x4026u: f_00004026(c); break;
      default: x86_call(c, t); }
      X86_RET(c, 0x2e3au); }
L_2e3a:
    X86_TICK(c, 16);
    // 002e3a  add esp, dword ptr gs:[ebp + 0x200]
    X86_AT(c, 0x2e3au);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x200u))), 0, 4); }
    // 002e41  ret 
    X86_AT(c, 0x2e41u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x2db0u, "ran off the end of a function");
}
void f_00002db2(X86Cpu& c) {
    X86_TICK(c, 7);
    // 002db2  call 0x2975
    X86_AT(c, 0x2db2u);
    push32(c, 0x2db7u); f_00002975(c); X86_RET(c, 0x2db7u);
    X86_TICK(c, 7);
    // 002db7  jmp 0x2de0
    X86_AT(c, 0x2db7u);
    goto L_2de0;
L_2de0:
    X86_TICK(c, 9);
    // 002de0  mov byte ptr gs:[ebp + 0x1e3], 0xff
    X86_AT(c, 0x2de0u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E3u)), 0xFFu);
    // 002de8  call 0x36dc
    X86_AT(c, 0x2de8u);
    push32(c, 0x2dedu); f_000036dc(c); X86_RET(c, 0x2dedu);
    X86_TICK(c, 7);
    // 002ded  call 0x6120
    X86_AT(c, 0x2dedu);
    push32(c, 0x2df2u); f_00006120(c); X86_RET(c, 0x2df2u);
    X86_TICK(c, 7);
    // 002df2  call 0x3d70
    X86_AT(c, 0x2df2u);
    push32(c, 0x2df7u); f_00003d70(c); X86_RET(c, 0x2df7u);
    X86_TICK(c, 12);
    // 002df7  test word ptr gs:[ebp + 0x108], 0xe0
    X86_AT(c, 0x2df7u);
    (void)x86_logic(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x108u))) & 0xE0u, 2);
    // 002e01  je 0x2e3a
    X86_AT(c, 0x2e01u);
    if (x86_cc(c, 4)) { goto L_2e3a; }
    X86_TICK(c, 7);
    // 002e03  call 0x36bc
    X86_AT(c, 0x2e03u);
    push32(c, 0x2e08u); f_000036bc(c); X86_RET(c, 0x2e08u);
    X86_TICK(c, 11);
    // 002e08  mov al, byte ptr gs:[ebp + 0x220]
    X86_AT(c, 0x2e08u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x220u))));
    // 002e0f  cmp al, 0x10
    X86_AT(c, 0x2e0fu);
    (void)x86_sub(c, g8(c, 0), 0x10u, 0, 1);
    // 002e11  jae 0x2e15
    X86_AT(c, 0x2e11u);
    if (x86_cc(c, 3)) { goto L_2e15; }
    X86_TICK(c, 2);
    // 002e13  add al, 0xe
    X86_AT(c, 0x2e13u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, 0xEu, 0, 1)); }
L_2e15:
    X86_TICK(c, 11);
    // 002e15  add al, 4
    X86_AT(c, 0x2e15u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, 0x4u, 0, 1)); }
    // 002e17  mov byte ptr gs:[ebp + 0x220], al
    X86_AT(c, 0x2e17u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x220u)), g8(c, 0));
    // 002e1e  call 0x6120
    X86_AT(c, 0x2e1eu);
    push32(c, 0x2e23u); f_00006120(c); X86_RET(c, 0x2e23u);
    X86_TICK(c, 21);
    // 002e23  sub eax, eax
    X86_AT(c, 0x2e23u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 002e25  btr word ptr gs:[ebp + 0x221], 7
    X86_AT(c, 0x2e25u);
    x86_bitop(c, 2, (c.sbase[5] + (uint32_t)(c.r[5] + 0x221u)), false, 0x7u, 2, nullptr, 0);
    // 002e2f  setb al
    X86_AT(c, 0x2e2fu);
    s8(c, 0, x86_cc(c, 2) ? 1u : 0u);
    // 002e32  call dword ptr cs:[eax*4 + 0x2e44]
    X86_AT(c, 0x2e32u);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0x2E44u))); push32(c, 0x2e3au);
      switch (t) {
      case 0x3fccu: f_00003fcc(c); break;
      case 0x4026u: f_00004026(c); break;
      default: x86_call(c, t); }
      X86_RET(c, 0x2e3au); }
L_2e3a:
    X86_TICK(c, 16);
    // 002e3a  add esp, dword ptr gs:[ebp + 0x200]
    X86_AT(c, 0x2e3au);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x200u))), 0, 4); }
    // 002e41  ret 
    X86_AT(c, 0x2e41u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x2db2u, "ran off the end of a function");
}
void f_00002db7(X86Cpu& c) {
    X86_TICK(c, 7);
    // 002db7  jmp 0x2de0
    X86_AT(c, 0x2db7u);
    goto L_2de0;
L_2de0:
    X86_TICK(c, 9);
    // 002de0  mov byte ptr gs:[ebp + 0x1e3], 0xff
    X86_AT(c, 0x2de0u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E3u)), 0xFFu);
    // 002de8  call 0x36dc
    X86_AT(c, 0x2de8u);
    push32(c, 0x2dedu); f_000036dc(c); X86_RET(c, 0x2dedu);
    X86_TICK(c, 7);
    // 002ded  call 0x6120
    X86_AT(c, 0x2dedu);
    push32(c, 0x2df2u); f_00006120(c); X86_RET(c, 0x2df2u);
    X86_TICK(c, 7);
    // 002df2  call 0x3d70
    X86_AT(c, 0x2df2u);
    push32(c, 0x2df7u); f_00003d70(c); X86_RET(c, 0x2df7u);
    X86_TICK(c, 12);
    // 002df7  test word ptr gs:[ebp + 0x108], 0xe0
    X86_AT(c, 0x2df7u);
    (void)x86_logic(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x108u))) & 0xE0u, 2);
    // 002e01  je 0x2e3a
    X86_AT(c, 0x2e01u);
    if (x86_cc(c, 4)) { goto L_2e3a; }
    X86_TICK(c, 7);
    // 002e03  call 0x36bc
    X86_AT(c, 0x2e03u);
    push32(c, 0x2e08u); f_000036bc(c); X86_RET(c, 0x2e08u);
    X86_TICK(c, 11);
    // 002e08  mov al, byte ptr gs:[ebp + 0x220]
    X86_AT(c, 0x2e08u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x220u))));
    // 002e0f  cmp al, 0x10
    X86_AT(c, 0x2e0fu);
    (void)x86_sub(c, g8(c, 0), 0x10u, 0, 1);
    // 002e11  jae 0x2e15
    X86_AT(c, 0x2e11u);
    if (x86_cc(c, 3)) { goto L_2e15; }
    X86_TICK(c, 2);
    // 002e13  add al, 0xe
    X86_AT(c, 0x2e13u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, 0xEu, 0, 1)); }
L_2e15:
    X86_TICK(c, 11);
    // 002e15  add al, 4
    X86_AT(c, 0x2e15u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, 0x4u, 0, 1)); }
    // 002e17  mov byte ptr gs:[ebp + 0x220], al
    X86_AT(c, 0x2e17u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x220u)), g8(c, 0));
    // 002e1e  call 0x6120
    X86_AT(c, 0x2e1eu);
    push32(c, 0x2e23u); f_00006120(c); X86_RET(c, 0x2e23u);
    X86_TICK(c, 21);
    // 002e23  sub eax, eax
    X86_AT(c, 0x2e23u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 002e25  btr word ptr gs:[ebp + 0x221], 7
    X86_AT(c, 0x2e25u);
    x86_bitop(c, 2, (c.sbase[5] + (uint32_t)(c.r[5] + 0x221u)), false, 0x7u, 2, nullptr, 0);
    // 002e2f  setb al
    X86_AT(c, 0x2e2fu);
    s8(c, 0, x86_cc(c, 2) ? 1u : 0u);
    // 002e32  call dword ptr cs:[eax*4 + 0x2e44]
    X86_AT(c, 0x2e32u);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0x2E44u))); push32(c, 0x2e3au);
      switch (t) {
      case 0x3fccu: f_00003fcc(c); break;
      case 0x4026u: f_00004026(c); break;
      default: x86_call(c, t); }
      X86_RET(c, 0x2e3au); }
L_2e3a:
    X86_TICK(c, 16);
    // 002e3a  add esp, dword ptr gs:[ebp + 0x200]
    X86_AT(c, 0x2e3au);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x200u))), 0, 4); }
    // 002e41  ret 
    X86_AT(c, 0x2e41u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x2db7u, "ran off the end of a function");
}
void f_00002de0(X86Cpu& c) {
    X86_TICK(c, 9);
    // 002de0  mov byte ptr gs:[ebp + 0x1e3], 0xff
    X86_AT(c, 0x2de0u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E3u)), 0xFFu);
    // 002de8  call 0x36dc
    X86_AT(c, 0x2de8u);
    push32(c, 0x2dedu); f_000036dc(c); X86_RET(c, 0x2dedu);
    X86_TICK(c, 7);
    // 002ded  call 0x6120
    X86_AT(c, 0x2dedu);
    push32(c, 0x2df2u); f_00006120(c); X86_RET(c, 0x2df2u);
    X86_TICK(c, 7);
    // 002df2  call 0x3d70
    X86_AT(c, 0x2df2u);
    push32(c, 0x2df7u); f_00003d70(c); X86_RET(c, 0x2df7u);
    X86_TICK(c, 12);
    // 002df7  test word ptr gs:[ebp + 0x108], 0xe0
    X86_AT(c, 0x2df7u);
    (void)x86_logic(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x108u))) & 0xE0u, 2);
    // 002e01  je 0x2e3a
    X86_AT(c, 0x2e01u);
    if (x86_cc(c, 4)) { goto L_2e3a; }
    X86_TICK(c, 7);
    // 002e03  call 0x36bc
    X86_AT(c, 0x2e03u);
    push32(c, 0x2e08u); f_000036bc(c); X86_RET(c, 0x2e08u);
    X86_TICK(c, 11);
    // 002e08  mov al, byte ptr gs:[ebp + 0x220]
    X86_AT(c, 0x2e08u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x220u))));
    // 002e0f  cmp al, 0x10
    X86_AT(c, 0x2e0fu);
    (void)x86_sub(c, g8(c, 0), 0x10u, 0, 1);
    // 002e11  jae 0x2e15
    X86_AT(c, 0x2e11u);
    if (x86_cc(c, 3)) { goto L_2e15; }
    X86_TICK(c, 2);
    // 002e13  add al, 0xe
    X86_AT(c, 0x2e13u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, 0xEu, 0, 1)); }
L_2e15:
    X86_TICK(c, 11);
    // 002e15  add al, 4
    X86_AT(c, 0x2e15u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, 0x4u, 0, 1)); }
    // 002e17  mov byte ptr gs:[ebp + 0x220], al
    X86_AT(c, 0x2e17u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x220u)), g8(c, 0));
    // 002e1e  call 0x6120
    X86_AT(c, 0x2e1eu);
    push32(c, 0x2e23u); f_00006120(c); X86_RET(c, 0x2e23u);
    X86_TICK(c, 21);
    // 002e23  sub eax, eax
    X86_AT(c, 0x2e23u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 002e25  btr word ptr gs:[ebp + 0x221], 7
    X86_AT(c, 0x2e25u);
    x86_bitop(c, 2, (c.sbase[5] + (uint32_t)(c.r[5] + 0x221u)), false, 0x7u, 2, nullptr, 0);
    // 002e2f  setb al
    X86_AT(c, 0x2e2fu);
    s8(c, 0, x86_cc(c, 2) ? 1u : 0u);
    // 002e32  call dword ptr cs:[eax*4 + 0x2e44]
    X86_AT(c, 0x2e32u);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0x2E44u))); push32(c, 0x2e3au);
      switch (t) {
      case 0x3fccu: f_00003fcc(c); break;
      case 0x4026u: f_00004026(c); break;
      default: x86_call(c, t); }
      X86_RET(c, 0x2e3au); }
L_2e3a:
    X86_TICK(c, 16);
    // 002e3a  add esp, dword ptr gs:[ebp + 0x200]
    X86_AT(c, 0x2e3au);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x200u))), 0, 4); }
    // 002e41  ret 
    X86_AT(c, 0x2e41u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x2de0u, "ran off the end of a function");
}
void f_00002de8(X86Cpu& c) {
    X86_TICK(c, 7);
    // 002de8  call 0x36dc
    X86_AT(c, 0x2de8u);
    push32(c, 0x2dedu); f_000036dc(c); X86_RET(c, 0x2dedu);
    X86_TICK(c, 7);
    // 002ded  call 0x6120
    X86_AT(c, 0x2dedu);
    push32(c, 0x2df2u); f_00006120(c); X86_RET(c, 0x2df2u);
    X86_TICK(c, 7);
    // 002df2  call 0x3d70
    X86_AT(c, 0x2df2u);
    push32(c, 0x2df7u); f_00003d70(c); X86_RET(c, 0x2df7u);
    X86_TICK(c, 12);
    // 002df7  test word ptr gs:[ebp + 0x108], 0xe0
    X86_AT(c, 0x2df7u);
    (void)x86_logic(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x108u))) & 0xE0u, 2);
    // 002e01  je 0x2e3a
    X86_AT(c, 0x2e01u);
    if (x86_cc(c, 4)) { goto L_2e3a; }
    X86_TICK(c, 7);
    // 002e03  call 0x36bc
    X86_AT(c, 0x2e03u);
    push32(c, 0x2e08u); f_000036bc(c); X86_RET(c, 0x2e08u);
    X86_TICK(c, 11);
    // 002e08  mov al, byte ptr gs:[ebp + 0x220]
    X86_AT(c, 0x2e08u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x220u))));
    // 002e0f  cmp al, 0x10
    X86_AT(c, 0x2e0fu);
    (void)x86_sub(c, g8(c, 0), 0x10u, 0, 1);
    // 002e11  jae 0x2e15
    X86_AT(c, 0x2e11u);
    if (x86_cc(c, 3)) { goto L_2e15; }
    X86_TICK(c, 2);
    // 002e13  add al, 0xe
    X86_AT(c, 0x2e13u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, 0xEu, 0, 1)); }
L_2e15:
    X86_TICK(c, 11);
    // 002e15  add al, 4
    X86_AT(c, 0x2e15u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, 0x4u, 0, 1)); }
    // 002e17  mov byte ptr gs:[ebp + 0x220], al
    X86_AT(c, 0x2e17u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x220u)), g8(c, 0));
    // 002e1e  call 0x6120
    X86_AT(c, 0x2e1eu);
    push32(c, 0x2e23u); f_00006120(c); X86_RET(c, 0x2e23u);
    X86_TICK(c, 21);
    // 002e23  sub eax, eax
    X86_AT(c, 0x2e23u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 002e25  btr word ptr gs:[ebp + 0x221], 7
    X86_AT(c, 0x2e25u);
    x86_bitop(c, 2, (c.sbase[5] + (uint32_t)(c.r[5] + 0x221u)), false, 0x7u, 2, nullptr, 0);
    // 002e2f  setb al
    X86_AT(c, 0x2e2fu);
    s8(c, 0, x86_cc(c, 2) ? 1u : 0u);
    // 002e32  call dword ptr cs:[eax*4 + 0x2e44]
    X86_AT(c, 0x2e32u);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0x2E44u))); push32(c, 0x2e3au);
      switch (t) {
      case 0x3fccu: f_00003fcc(c); break;
      case 0x4026u: f_00004026(c); break;
      default: x86_call(c, t); }
      X86_RET(c, 0x2e3au); }
L_2e3a:
    X86_TICK(c, 16);
    // 002e3a  add esp, dword ptr gs:[ebp + 0x200]
    X86_AT(c, 0x2e3au);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x200u))), 0, 4); }
    // 002e41  ret 
    X86_AT(c, 0x2e41u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x2de8u, "ran off the end of a function");
}
void f_00002ded(X86Cpu& c) {
    X86_TICK(c, 7);
    // 002ded  call 0x6120
    X86_AT(c, 0x2dedu);
    push32(c, 0x2df2u); f_00006120(c); X86_RET(c, 0x2df2u);
    X86_TICK(c, 7);
    // 002df2  call 0x3d70
    X86_AT(c, 0x2df2u);
    push32(c, 0x2df7u); f_00003d70(c); X86_RET(c, 0x2df7u);
    X86_TICK(c, 12);
    // 002df7  test word ptr gs:[ebp + 0x108], 0xe0
    X86_AT(c, 0x2df7u);
    (void)x86_logic(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x108u))) & 0xE0u, 2);
    // 002e01  je 0x2e3a
    X86_AT(c, 0x2e01u);
    if (x86_cc(c, 4)) { goto L_2e3a; }
    X86_TICK(c, 7);
    // 002e03  call 0x36bc
    X86_AT(c, 0x2e03u);
    push32(c, 0x2e08u); f_000036bc(c); X86_RET(c, 0x2e08u);
    X86_TICK(c, 11);
    // 002e08  mov al, byte ptr gs:[ebp + 0x220]
    X86_AT(c, 0x2e08u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x220u))));
    // 002e0f  cmp al, 0x10
    X86_AT(c, 0x2e0fu);
    (void)x86_sub(c, g8(c, 0), 0x10u, 0, 1);
    // 002e11  jae 0x2e15
    X86_AT(c, 0x2e11u);
    if (x86_cc(c, 3)) { goto L_2e15; }
    X86_TICK(c, 2);
    // 002e13  add al, 0xe
    X86_AT(c, 0x2e13u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, 0xEu, 0, 1)); }
L_2e15:
    X86_TICK(c, 11);
    // 002e15  add al, 4
    X86_AT(c, 0x2e15u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, 0x4u, 0, 1)); }
    // 002e17  mov byte ptr gs:[ebp + 0x220], al
    X86_AT(c, 0x2e17u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x220u)), g8(c, 0));
    // 002e1e  call 0x6120
    X86_AT(c, 0x2e1eu);
    push32(c, 0x2e23u); f_00006120(c); X86_RET(c, 0x2e23u);
    X86_TICK(c, 21);
    // 002e23  sub eax, eax
    X86_AT(c, 0x2e23u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 002e25  btr word ptr gs:[ebp + 0x221], 7
    X86_AT(c, 0x2e25u);
    x86_bitop(c, 2, (c.sbase[5] + (uint32_t)(c.r[5] + 0x221u)), false, 0x7u, 2, nullptr, 0);
    // 002e2f  setb al
    X86_AT(c, 0x2e2fu);
    s8(c, 0, x86_cc(c, 2) ? 1u : 0u);
    // 002e32  call dword ptr cs:[eax*4 + 0x2e44]
    X86_AT(c, 0x2e32u);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0x2E44u))); push32(c, 0x2e3au);
      switch (t) {
      case 0x3fccu: f_00003fcc(c); break;
      case 0x4026u: f_00004026(c); break;
      default: x86_call(c, t); }
      X86_RET(c, 0x2e3au); }
L_2e3a:
    X86_TICK(c, 16);
    // 002e3a  add esp, dword ptr gs:[ebp + 0x200]
    X86_AT(c, 0x2e3au);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x200u))), 0, 4); }
    // 002e41  ret 
    X86_AT(c, 0x2e41u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x2dedu, "ran off the end of a function");
}
void f_00002df2(X86Cpu& c) {
    X86_TICK(c, 7);
    // 002df2  call 0x3d70
    X86_AT(c, 0x2df2u);
    push32(c, 0x2df7u); f_00003d70(c); X86_RET(c, 0x2df7u);
    X86_TICK(c, 12);
    // 002df7  test word ptr gs:[ebp + 0x108], 0xe0
    X86_AT(c, 0x2df7u);
    (void)x86_logic(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x108u))) & 0xE0u, 2);
    // 002e01  je 0x2e3a
    X86_AT(c, 0x2e01u);
    if (x86_cc(c, 4)) { goto L_2e3a; }
    X86_TICK(c, 7);
    // 002e03  call 0x36bc
    X86_AT(c, 0x2e03u);
    push32(c, 0x2e08u); f_000036bc(c); X86_RET(c, 0x2e08u);
    X86_TICK(c, 11);
    // 002e08  mov al, byte ptr gs:[ebp + 0x220]
    X86_AT(c, 0x2e08u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x220u))));
    // 002e0f  cmp al, 0x10
    X86_AT(c, 0x2e0fu);
    (void)x86_sub(c, g8(c, 0), 0x10u, 0, 1);
    // 002e11  jae 0x2e15
    X86_AT(c, 0x2e11u);
    if (x86_cc(c, 3)) { goto L_2e15; }
    X86_TICK(c, 2);
    // 002e13  add al, 0xe
    X86_AT(c, 0x2e13u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, 0xEu, 0, 1)); }
L_2e15:
    X86_TICK(c, 11);
    // 002e15  add al, 4
    X86_AT(c, 0x2e15u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, 0x4u, 0, 1)); }
    // 002e17  mov byte ptr gs:[ebp + 0x220], al
    X86_AT(c, 0x2e17u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x220u)), g8(c, 0));
    // 002e1e  call 0x6120
    X86_AT(c, 0x2e1eu);
    push32(c, 0x2e23u); f_00006120(c); X86_RET(c, 0x2e23u);
    X86_TICK(c, 21);
    // 002e23  sub eax, eax
    X86_AT(c, 0x2e23u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 002e25  btr word ptr gs:[ebp + 0x221], 7
    X86_AT(c, 0x2e25u);
    x86_bitop(c, 2, (c.sbase[5] + (uint32_t)(c.r[5] + 0x221u)), false, 0x7u, 2, nullptr, 0);
    // 002e2f  setb al
    X86_AT(c, 0x2e2fu);
    s8(c, 0, x86_cc(c, 2) ? 1u : 0u);
    // 002e32  call dword ptr cs:[eax*4 + 0x2e44]
    X86_AT(c, 0x2e32u);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0x2E44u))); push32(c, 0x2e3au);
      switch (t) {
      case 0x3fccu: f_00003fcc(c); break;
      case 0x4026u: f_00004026(c); break;
      default: x86_call(c, t); }
      X86_RET(c, 0x2e3au); }
L_2e3a:
    X86_TICK(c, 16);
    // 002e3a  add esp, dword ptr gs:[ebp + 0x200]
    X86_AT(c, 0x2e3au);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x200u))), 0, 4); }
    // 002e41  ret 
    X86_AT(c, 0x2e41u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x2df2u, "ran off the end of a function");
}
void f_00002df7(X86Cpu& c) {
    X86_TICK(c, 12);
    // 002df7  test word ptr gs:[ebp + 0x108], 0xe0
    X86_AT(c, 0x2df7u);
    (void)x86_logic(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x108u))) & 0xE0u, 2);
    // 002e01  je 0x2e3a
    X86_AT(c, 0x2e01u);
    if (x86_cc(c, 4)) { goto L_2e3a; }
    X86_TICK(c, 7);
    // 002e03  call 0x36bc
    X86_AT(c, 0x2e03u);
    push32(c, 0x2e08u); f_000036bc(c); X86_RET(c, 0x2e08u);
    X86_TICK(c, 11);
    // 002e08  mov al, byte ptr gs:[ebp + 0x220]
    X86_AT(c, 0x2e08u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x220u))));
    // 002e0f  cmp al, 0x10
    X86_AT(c, 0x2e0fu);
    (void)x86_sub(c, g8(c, 0), 0x10u, 0, 1);
    // 002e11  jae 0x2e15
    X86_AT(c, 0x2e11u);
    if (x86_cc(c, 3)) { goto L_2e15; }
    X86_TICK(c, 2);
    // 002e13  add al, 0xe
    X86_AT(c, 0x2e13u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, 0xEu, 0, 1)); }
L_2e15:
    X86_TICK(c, 11);
    // 002e15  add al, 4
    X86_AT(c, 0x2e15u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, 0x4u, 0, 1)); }
    // 002e17  mov byte ptr gs:[ebp + 0x220], al
    X86_AT(c, 0x2e17u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x220u)), g8(c, 0));
    // 002e1e  call 0x6120
    X86_AT(c, 0x2e1eu);
    push32(c, 0x2e23u); f_00006120(c); X86_RET(c, 0x2e23u);
    X86_TICK(c, 21);
    // 002e23  sub eax, eax
    X86_AT(c, 0x2e23u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 002e25  btr word ptr gs:[ebp + 0x221], 7
    X86_AT(c, 0x2e25u);
    x86_bitop(c, 2, (c.sbase[5] + (uint32_t)(c.r[5] + 0x221u)), false, 0x7u, 2, nullptr, 0);
    // 002e2f  setb al
    X86_AT(c, 0x2e2fu);
    s8(c, 0, x86_cc(c, 2) ? 1u : 0u);
    // 002e32  call dword ptr cs:[eax*4 + 0x2e44]
    X86_AT(c, 0x2e32u);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0x2E44u))); push32(c, 0x2e3au);
      switch (t) {
      case 0x3fccu: f_00003fcc(c); break;
      case 0x4026u: f_00004026(c); break;
      default: x86_call(c, t); }
      X86_RET(c, 0x2e3au); }
L_2e3a:
    X86_TICK(c, 16);
    // 002e3a  add esp, dword ptr gs:[ebp + 0x200]
    X86_AT(c, 0x2e3au);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x200u))), 0, 4); }
    // 002e41  ret 
    X86_AT(c, 0x2e41u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x2df7u, "ran off the end of a function");
}
void f_00002e01(X86Cpu& c) {
    X86_TICK(c, 5);
    // 002e01  je 0x2e3a
    X86_AT(c, 0x2e01u);
    if (x86_cc(c, 4)) { goto L_2e3a; }
    X86_TICK(c, 7);
    // 002e03  call 0x36bc
    X86_AT(c, 0x2e03u);
    push32(c, 0x2e08u); f_000036bc(c); X86_RET(c, 0x2e08u);
    X86_TICK(c, 11);
    // 002e08  mov al, byte ptr gs:[ebp + 0x220]
    X86_AT(c, 0x2e08u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x220u))));
    // 002e0f  cmp al, 0x10
    X86_AT(c, 0x2e0fu);
    (void)x86_sub(c, g8(c, 0), 0x10u, 0, 1);
    // 002e11  jae 0x2e15
    X86_AT(c, 0x2e11u);
    if (x86_cc(c, 3)) { goto L_2e15; }
    X86_TICK(c, 2);
    // 002e13  add al, 0xe
    X86_AT(c, 0x2e13u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, 0xEu, 0, 1)); }
L_2e15:
    X86_TICK(c, 11);
    // 002e15  add al, 4
    X86_AT(c, 0x2e15u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, 0x4u, 0, 1)); }
    // 002e17  mov byte ptr gs:[ebp + 0x220], al
    X86_AT(c, 0x2e17u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x220u)), g8(c, 0));
    // 002e1e  call 0x6120
    X86_AT(c, 0x2e1eu);
    push32(c, 0x2e23u); f_00006120(c); X86_RET(c, 0x2e23u);
    X86_TICK(c, 21);
    // 002e23  sub eax, eax
    X86_AT(c, 0x2e23u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 002e25  btr word ptr gs:[ebp + 0x221], 7
    X86_AT(c, 0x2e25u);
    x86_bitop(c, 2, (c.sbase[5] + (uint32_t)(c.r[5] + 0x221u)), false, 0x7u, 2, nullptr, 0);
    // 002e2f  setb al
    X86_AT(c, 0x2e2fu);
    s8(c, 0, x86_cc(c, 2) ? 1u : 0u);
    // 002e32  call dword ptr cs:[eax*4 + 0x2e44]
    X86_AT(c, 0x2e32u);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0x2E44u))); push32(c, 0x2e3au);
      switch (t) {
      case 0x3fccu: f_00003fcc(c); break;
      case 0x4026u: f_00004026(c); break;
      default: x86_call(c, t); }
      X86_RET(c, 0x2e3au); }
L_2e3a:
    X86_TICK(c, 16);
    // 002e3a  add esp, dword ptr gs:[ebp + 0x200]
    X86_AT(c, 0x2e3au);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x200u))), 0, 4); }
    // 002e41  ret 
    X86_AT(c, 0x2e41u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x2e01u, "ran off the end of a function");
}
void f_00002e03(X86Cpu& c) {
    X86_TICK(c, 7);
    // 002e03  call 0x36bc
    X86_AT(c, 0x2e03u);
    push32(c, 0x2e08u); f_000036bc(c); X86_RET(c, 0x2e08u);
    X86_TICK(c, 11);
    // 002e08  mov al, byte ptr gs:[ebp + 0x220]
    X86_AT(c, 0x2e08u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x220u))));
    // 002e0f  cmp al, 0x10
    X86_AT(c, 0x2e0fu);
    (void)x86_sub(c, g8(c, 0), 0x10u, 0, 1);
    // 002e11  jae 0x2e15
    X86_AT(c, 0x2e11u);
    if (x86_cc(c, 3)) { goto L_2e15; }
    X86_TICK(c, 2);
    // 002e13  add al, 0xe
    X86_AT(c, 0x2e13u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, 0xEu, 0, 1)); }
L_2e15:
    X86_TICK(c, 11);
    // 002e15  add al, 4
    X86_AT(c, 0x2e15u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, 0x4u, 0, 1)); }
    // 002e17  mov byte ptr gs:[ebp + 0x220], al
    X86_AT(c, 0x2e17u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x220u)), g8(c, 0));
    // 002e1e  call 0x6120
    X86_AT(c, 0x2e1eu);
    push32(c, 0x2e23u); f_00006120(c); X86_RET(c, 0x2e23u);
    X86_TICK(c, 21);
    // 002e23  sub eax, eax
    X86_AT(c, 0x2e23u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 002e25  btr word ptr gs:[ebp + 0x221], 7
    X86_AT(c, 0x2e25u);
    x86_bitop(c, 2, (c.sbase[5] + (uint32_t)(c.r[5] + 0x221u)), false, 0x7u, 2, nullptr, 0);
    // 002e2f  setb al
    X86_AT(c, 0x2e2fu);
    s8(c, 0, x86_cc(c, 2) ? 1u : 0u);
    // 002e32  call dword ptr cs:[eax*4 + 0x2e44]
    X86_AT(c, 0x2e32u);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0x2E44u))); push32(c, 0x2e3au);
      switch (t) {
      case 0x3fccu: f_00003fcc(c); break;
      case 0x4026u: f_00004026(c); break;
      default: x86_call(c, t); }
      X86_RET(c, 0x2e3au); }
    X86_TICK(c, 16);
    // 002e3a  add esp, dword ptr gs:[ebp + 0x200]
    X86_AT(c, 0x2e3au);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x200u))), 0, 4); }
    // 002e41  ret 
    X86_AT(c, 0x2e41u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x2e03u, "ran off the end of a function");
}
void f_00002e08(X86Cpu& c) {
    X86_TICK(c, 11);
    // 002e08  mov al, byte ptr gs:[ebp + 0x220]
    X86_AT(c, 0x2e08u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x220u))));
    // 002e0f  cmp al, 0x10
    X86_AT(c, 0x2e0fu);
    (void)x86_sub(c, g8(c, 0), 0x10u, 0, 1);
    // 002e11  jae 0x2e15
    X86_AT(c, 0x2e11u);
    if (x86_cc(c, 3)) { goto L_2e15; }
    X86_TICK(c, 2);
    // 002e13  add al, 0xe
    X86_AT(c, 0x2e13u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, 0xEu, 0, 1)); }
L_2e15:
    X86_TICK(c, 11);
    // 002e15  add al, 4
    X86_AT(c, 0x2e15u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, 0x4u, 0, 1)); }
    // 002e17  mov byte ptr gs:[ebp + 0x220], al
    X86_AT(c, 0x2e17u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x220u)), g8(c, 0));
    // 002e1e  call 0x6120
    X86_AT(c, 0x2e1eu);
    push32(c, 0x2e23u); f_00006120(c); X86_RET(c, 0x2e23u);
    X86_TICK(c, 21);
    // 002e23  sub eax, eax
    X86_AT(c, 0x2e23u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 002e25  btr word ptr gs:[ebp + 0x221], 7
    X86_AT(c, 0x2e25u);
    x86_bitop(c, 2, (c.sbase[5] + (uint32_t)(c.r[5] + 0x221u)), false, 0x7u, 2, nullptr, 0);
    // 002e2f  setb al
    X86_AT(c, 0x2e2fu);
    s8(c, 0, x86_cc(c, 2) ? 1u : 0u);
    // 002e32  call dword ptr cs:[eax*4 + 0x2e44]
    X86_AT(c, 0x2e32u);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0x2E44u))); push32(c, 0x2e3au);
      switch (t) {
      case 0x3fccu: f_00003fcc(c); break;
      case 0x4026u: f_00004026(c); break;
      default: x86_call(c, t); }
      X86_RET(c, 0x2e3au); }
    X86_TICK(c, 16);
    // 002e3a  add esp, dword ptr gs:[ebp + 0x200]
    X86_AT(c, 0x2e3au);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x200u))), 0, 4); }
    // 002e41  ret 
    X86_AT(c, 0x2e41u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x2e08u, "ran off the end of a function");
}
void f_00002e0f(X86Cpu& c) {
    X86_TICK(c, 7);
    // 002e0f  cmp al, 0x10
    X86_AT(c, 0x2e0fu);
    (void)x86_sub(c, g8(c, 0), 0x10u, 0, 1);
    // 002e11  jae 0x2e15
    X86_AT(c, 0x2e11u);
    if (x86_cc(c, 3)) { goto L_2e15; }
    X86_TICK(c, 2);
    // 002e13  add al, 0xe
    X86_AT(c, 0x2e13u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, 0xEu, 0, 1)); }
L_2e15:
    X86_TICK(c, 11);
    // 002e15  add al, 4
    X86_AT(c, 0x2e15u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, 0x4u, 0, 1)); }
    // 002e17  mov byte ptr gs:[ebp + 0x220], al
    X86_AT(c, 0x2e17u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x220u)), g8(c, 0));
    // 002e1e  call 0x6120
    X86_AT(c, 0x2e1eu);
    push32(c, 0x2e23u); f_00006120(c); X86_RET(c, 0x2e23u);
    X86_TICK(c, 21);
    // 002e23  sub eax, eax
    X86_AT(c, 0x2e23u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 002e25  btr word ptr gs:[ebp + 0x221], 7
    X86_AT(c, 0x2e25u);
    x86_bitop(c, 2, (c.sbase[5] + (uint32_t)(c.r[5] + 0x221u)), false, 0x7u, 2, nullptr, 0);
    // 002e2f  setb al
    X86_AT(c, 0x2e2fu);
    s8(c, 0, x86_cc(c, 2) ? 1u : 0u);
    // 002e32  call dword ptr cs:[eax*4 + 0x2e44]
    X86_AT(c, 0x2e32u);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0x2E44u))); push32(c, 0x2e3au);
      switch (t) {
      case 0x3fccu: f_00003fcc(c); break;
      case 0x4026u: f_00004026(c); break;
      default: x86_call(c, t); }
      X86_RET(c, 0x2e3au); }
    X86_TICK(c, 16);
    // 002e3a  add esp, dword ptr gs:[ebp + 0x200]
    X86_AT(c, 0x2e3au);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x200u))), 0, 4); }
    // 002e41  ret 
    X86_AT(c, 0x2e41u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x2e0fu, "ran off the end of a function");
}
void f_00002e11(X86Cpu& c) {
    X86_TICK(c, 5);
    // 002e11  jae 0x2e15
    X86_AT(c, 0x2e11u);
    if (x86_cc(c, 3)) { goto L_2e15; }
    X86_TICK(c, 2);
    // 002e13  add al, 0xe
    X86_AT(c, 0x2e13u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, 0xEu, 0, 1)); }
L_2e15:
    X86_TICK(c, 11);
    // 002e15  add al, 4
    X86_AT(c, 0x2e15u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, 0x4u, 0, 1)); }
    // 002e17  mov byte ptr gs:[ebp + 0x220], al
    X86_AT(c, 0x2e17u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x220u)), g8(c, 0));
    // 002e1e  call 0x6120
    X86_AT(c, 0x2e1eu);
    push32(c, 0x2e23u); f_00006120(c); X86_RET(c, 0x2e23u);
    X86_TICK(c, 21);
    // 002e23  sub eax, eax
    X86_AT(c, 0x2e23u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 002e25  btr word ptr gs:[ebp + 0x221], 7
    X86_AT(c, 0x2e25u);
    x86_bitop(c, 2, (c.sbase[5] + (uint32_t)(c.r[5] + 0x221u)), false, 0x7u, 2, nullptr, 0);
    // 002e2f  setb al
    X86_AT(c, 0x2e2fu);
    s8(c, 0, x86_cc(c, 2) ? 1u : 0u);
    // 002e32  call dword ptr cs:[eax*4 + 0x2e44]
    X86_AT(c, 0x2e32u);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0x2E44u))); push32(c, 0x2e3au);
      switch (t) {
      case 0x3fccu: f_00003fcc(c); break;
      case 0x4026u: f_00004026(c); break;
      default: x86_call(c, t); }
      X86_RET(c, 0x2e3au); }
    X86_TICK(c, 16);
    // 002e3a  add esp, dword ptr gs:[ebp + 0x200]
    X86_AT(c, 0x2e3au);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x200u))), 0, 4); }
    // 002e41  ret 
    X86_AT(c, 0x2e41u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x2e11u, "ran off the end of a function");
}
void f_00002e13(X86Cpu& c) {
    X86_TICK(c, 13);
    // 002e13  add al, 0xe
    X86_AT(c, 0x2e13u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, 0xEu, 0, 1)); }
    // 002e15  add al, 4
    X86_AT(c, 0x2e15u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, 0x4u, 0, 1)); }
    // 002e17  mov byte ptr gs:[ebp + 0x220], al
    X86_AT(c, 0x2e17u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x220u)), g8(c, 0));
    // 002e1e  call 0x6120
    X86_AT(c, 0x2e1eu);
    push32(c, 0x2e23u); f_00006120(c); X86_RET(c, 0x2e23u);
    X86_TICK(c, 21);
    // 002e23  sub eax, eax
    X86_AT(c, 0x2e23u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 002e25  btr word ptr gs:[ebp + 0x221], 7
    X86_AT(c, 0x2e25u);
    x86_bitop(c, 2, (c.sbase[5] + (uint32_t)(c.r[5] + 0x221u)), false, 0x7u, 2, nullptr, 0);
    // 002e2f  setb al
    X86_AT(c, 0x2e2fu);
    s8(c, 0, x86_cc(c, 2) ? 1u : 0u);
    // 002e32  call dword ptr cs:[eax*4 + 0x2e44]
    X86_AT(c, 0x2e32u);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0x2E44u))); push32(c, 0x2e3au);
      switch (t) {
      case 0x3fccu: f_00003fcc(c); break;
      case 0x4026u: f_00004026(c); break;
      default: x86_call(c, t); }
      X86_RET(c, 0x2e3au); }
    X86_TICK(c, 16);
    // 002e3a  add esp, dword ptr gs:[ebp + 0x200]
    X86_AT(c, 0x2e3au);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x200u))), 0, 4); }
    // 002e41  ret 
    X86_AT(c, 0x2e41u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x2e13u, "ran off the end of a function");
}
void f_00002e15(X86Cpu& c) {
    X86_TICK(c, 11);
    // 002e15  add al, 4
    X86_AT(c, 0x2e15u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, 0x4u, 0, 1)); }
    // 002e17  mov byte ptr gs:[ebp + 0x220], al
    X86_AT(c, 0x2e17u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x220u)), g8(c, 0));
    // 002e1e  call 0x6120
    X86_AT(c, 0x2e1eu);
    push32(c, 0x2e23u); f_00006120(c); X86_RET(c, 0x2e23u);
    X86_TICK(c, 21);
    // 002e23  sub eax, eax
    X86_AT(c, 0x2e23u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 002e25  btr word ptr gs:[ebp + 0x221], 7
    X86_AT(c, 0x2e25u);
    x86_bitop(c, 2, (c.sbase[5] + (uint32_t)(c.r[5] + 0x221u)), false, 0x7u, 2, nullptr, 0);
    // 002e2f  setb al
    X86_AT(c, 0x2e2fu);
    s8(c, 0, x86_cc(c, 2) ? 1u : 0u);
    // 002e32  call dword ptr cs:[eax*4 + 0x2e44]
    X86_AT(c, 0x2e32u);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0x2E44u))); push32(c, 0x2e3au);
      switch (t) {
      case 0x3fccu: f_00003fcc(c); break;
      case 0x4026u: f_00004026(c); break;
      default: x86_call(c, t); }
      X86_RET(c, 0x2e3au); }
    X86_TICK(c, 16);
    // 002e3a  add esp, dword ptr gs:[ebp + 0x200]
    X86_AT(c, 0x2e3au);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x200u))), 0, 4); }
    // 002e41  ret 
    X86_AT(c, 0x2e41u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x2e15u, "ran off the end of a function");
}
void f_00002e17(X86Cpu& c) {
    X86_TICK(c, 9);
    // 002e17  mov byte ptr gs:[ebp + 0x220], al
    X86_AT(c, 0x2e17u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x220u)), g8(c, 0));
    // 002e1e  call 0x6120
    X86_AT(c, 0x2e1eu);
    push32(c, 0x2e23u); f_00006120(c); X86_RET(c, 0x2e23u);
    X86_TICK(c, 21);
    // 002e23  sub eax, eax
    X86_AT(c, 0x2e23u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 002e25  btr word ptr gs:[ebp + 0x221], 7
    X86_AT(c, 0x2e25u);
    x86_bitop(c, 2, (c.sbase[5] + (uint32_t)(c.r[5] + 0x221u)), false, 0x7u, 2, nullptr, 0);
    // 002e2f  setb al
    X86_AT(c, 0x2e2fu);
    s8(c, 0, x86_cc(c, 2) ? 1u : 0u);
    // 002e32  call dword ptr cs:[eax*4 + 0x2e44]
    X86_AT(c, 0x2e32u);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0x2E44u))); push32(c, 0x2e3au);
      switch (t) {
      case 0x3fccu: f_00003fcc(c); break;
      case 0x4026u: f_00004026(c); break;
      default: x86_call(c, t); }
      X86_RET(c, 0x2e3au); }
    X86_TICK(c, 16);
    // 002e3a  add esp, dword ptr gs:[ebp + 0x200]
    X86_AT(c, 0x2e3au);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x200u))), 0, 4); }
    // 002e41  ret 
    X86_AT(c, 0x2e41u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x2e17u, "ran off the end of a function");
}
void f_00002e1e(X86Cpu& c) {
    X86_TICK(c, 7);
    // 002e1e  call 0x6120
    X86_AT(c, 0x2e1eu);
    push32(c, 0x2e23u); f_00006120(c); X86_RET(c, 0x2e23u);
    X86_TICK(c, 21);
    // 002e23  sub eax, eax
    X86_AT(c, 0x2e23u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 002e25  btr word ptr gs:[ebp + 0x221], 7
    X86_AT(c, 0x2e25u);
    x86_bitop(c, 2, (c.sbase[5] + (uint32_t)(c.r[5] + 0x221u)), false, 0x7u, 2, nullptr, 0);
    // 002e2f  setb al
    X86_AT(c, 0x2e2fu);
    s8(c, 0, x86_cc(c, 2) ? 1u : 0u);
    // 002e32  call dword ptr cs:[eax*4 + 0x2e44]
    X86_AT(c, 0x2e32u);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0x2E44u))); push32(c, 0x2e3au);
      switch (t) {
      case 0x3fccu: f_00003fcc(c); break;
      case 0x4026u: f_00004026(c); break;
      default: x86_call(c, t); }
      X86_RET(c, 0x2e3au); }
    X86_TICK(c, 16);
    // 002e3a  add esp, dword ptr gs:[ebp + 0x200]
    X86_AT(c, 0x2e3au);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x200u))), 0, 4); }
    // 002e41  ret 
    X86_AT(c, 0x2e41u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x2e1eu, "ran off the end of a function");
}
void f_00002e23(X86Cpu& c) {
    X86_TICK(c, 21);
    // 002e23  sub eax, eax
    X86_AT(c, 0x2e23u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 002e25  btr word ptr gs:[ebp + 0x221], 7
    X86_AT(c, 0x2e25u);
    x86_bitop(c, 2, (c.sbase[5] + (uint32_t)(c.r[5] + 0x221u)), false, 0x7u, 2, nullptr, 0);
    // 002e2f  setb al
    X86_AT(c, 0x2e2fu);
    s8(c, 0, x86_cc(c, 2) ? 1u : 0u);
    // 002e32  call dword ptr cs:[eax*4 + 0x2e44]
    X86_AT(c, 0x2e32u);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0x2E44u))); push32(c, 0x2e3au);
      switch (t) {
      case 0x3fccu: f_00003fcc(c); break;
      case 0x4026u: f_00004026(c); break;
      default: x86_call(c, t); }
      X86_RET(c, 0x2e3au); }
    X86_TICK(c, 16);
    // 002e3a  add esp, dword ptr gs:[ebp + 0x200]
    X86_AT(c, 0x2e3au);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x200u))), 0, 4); }
    // 002e41  ret 
    X86_AT(c, 0x2e41u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x2e23u, "ran off the end of a function");
}
void f_00002e25(X86Cpu& c) {
    X86_TICK(c, 19);
    // 002e25  btr word ptr gs:[ebp + 0x221], 7
    X86_AT(c, 0x2e25u);
    x86_bitop(c, 2, (c.sbase[5] + (uint32_t)(c.r[5] + 0x221u)), false, 0x7u, 2, nullptr, 0);
    // 002e2f  setb al
    X86_AT(c, 0x2e2fu);
    s8(c, 0, x86_cc(c, 2) ? 1u : 0u);
    // 002e32  call dword ptr cs:[eax*4 + 0x2e44]
    X86_AT(c, 0x2e32u);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0x2E44u))); push32(c, 0x2e3au);
      switch (t) {
      case 0x3fccu: f_00003fcc(c); break;
      case 0x4026u: f_00004026(c); break;
      default: x86_call(c, t); }
      X86_RET(c, 0x2e3au); }
    X86_TICK(c, 16);
    // 002e3a  add esp, dword ptr gs:[ebp + 0x200]
    X86_AT(c, 0x2e3au);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x200u))), 0, 4); }
    // 002e41  ret 
    X86_AT(c, 0x2e41u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x2e25u, "ran off the end of a function");
}
void f_00002e2f(X86Cpu& c) {
    X86_TICK(c, 11);
    // 002e2f  setb al
    X86_AT(c, 0x2e2fu);
    s8(c, 0, x86_cc(c, 2) ? 1u : 0u);
    // 002e32  call dword ptr cs:[eax*4 + 0x2e44]
    X86_AT(c, 0x2e32u);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0x2E44u))); push32(c, 0x2e3au);
      switch (t) {
      case 0x3fccu: f_00003fcc(c); break;
      case 0x4026u: f_00004026(c); break;
      default: x86_call(c, t); }
      X86_RET(c, 0x2e3au); }
    X86_TICK(c, 16);
    // 002e3a  add esp, dword ptr gs:[ebp + 0x200]
    X86_AT(c, 0x2e3au);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x200u))), 0, 4); }
    // 002e41  ret 
    X86_AT(c, 0x2e41u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x2e2fu, "ran off the end of a function");
}
void f_00002e32(X86Cpu& c) {
    X86_TICK(c, 7);
    // 002e32  call dword ptr cs:[eax*4 + 0x2e44]
    X86_AT(c, 0x2e32u);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0x2E44u))); push32(c, 0x2e3au);
      switch (t) {
      case 0x3fccu: f_00003fcc(c); break;
      case 0x4026u: f_00004026(c); break;
      default: x86_call(c, t); }
      X86_RET(c, 0x2e3au); }
    X86_TICK(c, 16);
    // 002e3a  add esp, dword ptr gs:[ebp + 0x200]
    X86_AT(c, 0x2e3au);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x200u))), 0, 4); }
    // 002e41  ret 
    X86_AT(c, 0x2e41u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x2e32u, "ran off the end of a function");
}
void f_00002e3a(X86Cpu& c) {
    X86_TICK(c, 16);
    // 002e3a  add esp, dword ptr gs:[ebp + 0x200]
    X86_AT(c, 0x2e3au);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x200u))), 0, 4); }
    // 002e41  ret 
    X86_AT(c, 0x2e41u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x2e3au, "ran off the end of a function");
}
void f_00002e41(X86Cpu& c) {
    X86_TICK(c, 10);
    // 002e41  ret 
    X86_AT(c, 0x2e41u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x2e41u, "ran off the end of a function");
}
void f_00002e4c(X86Cpu& c) {
    goto L_2e4c;
L_2e3a:
    X86_TICK(c, 16);
    // 002e3a  add esp, dword ptr gs:[ebp + 0x200]
    X86_AT(c, 0x2e3au);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x200u))), 0, 4); }
    // 002e41  ret 
    X86_AT(c, 0x2e41u);
    c.eip = pop32(c); return;
L_2e4c:
    X86_TICK(c, 12);
    // 002e4c  test word ptr gs:[ebp + 0x108], 0xe0
    X86_AT(c, 0x2e4cu);
    (void)x86_logic(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x108u))) & 0xE0u, 2);
    // 002e56  je 0x2e3a
    X86_AT(c, 0x2e56u);
    if (x86_cc(c, 4)) { X86_POLL(c, 0x2e3au); goto L_2e3a; }
    X86_TICK(c, 7);
    // 002e58  call 0x36bc
    X86_AT(c, 0x2e58u);
    push32(c, 0x2e5du); f_000036bc(c); X86_RET(c, 0x2e5du);
    X86_TICK(c, 9);
    // 002e5d  mov byte ptr gs:[ebp + 0x220], 0x13
    X86_AT(c, 0x2e5du);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x220u)), 0x13u);
    // 002e65  call 0x6120
    X86_AT(c, 0x2e65u);
    push32(c, 0x2e6au); f_00006120(c); X86_RET(c, 0x2e6au);
    X86_TICK(c, 7);
    // 002e6a  call 0x38e9
    X86_AT(c, 0x2e6au);
    push32(c, 0x2e6fu); f_000038e9(c); X86_RET(c, 0x2e6fu);
    X86_TICK(c, 5);
    // 002e6f  jae 0x2e79
    X86_AT(c, 0x2e6fu);
    if (x86_cc(c, 3)) { goto L_2e79; }
    X86_TICK(c, 7);
    // 002e71  add byte ptr gs:[ebp + 0x220], 2
    X86_AT(c, 0x2e71u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x220u)); uint32_t v = rd8(ea); wr8(ea, x86_add(c, v, 0x2u, 0, 1)); }
L_2e79:
    X86_TICK(c, 7);
    // 002e79  jmp 0x4026
    X86_AT(c, 0x2e79u);
    goto L_4026;
L_4026:
    X86_TICK(c, 15);
    // 004026  mov eax, dword ptr gs:[ebp + 0x1c4]
    X86_AT(c, 0x4026u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C4u)));
    // 00402d  mov ecx, dword ptr gs:[ebp + 0x1c8]
    X86_AT(c, 0x402du);
    c.r[1] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C8u)));
    // 004034  cmp ax, cx
    X86_AT(c, 0x4034u);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), (c.r[1] & 0xFFFFu), 0, 2);
    // 004037  jle 0x403b
    X86_AT(c, 0x4037u);
    if (x86_cc(c, 14)) { goto L_403b; }
    X86_TICK(c, 3);
    // 004039  xchg cx, ax
    X86_AT(c, 0x4039u);
    { uint32_t t = (c.r[1] & 0xFFFFu); s16(c, 1, (c.r[0] & 0xFFFFu)); s16(c, 0, t); }
L_403b:
    X86_TICK(c, 17);
    // 00403b  mov word ptr gs:[ebp + 0x222], ax
    X86_AT(c, 0x403bu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u)), (c.r[0] & 0xFFFFu));
    // 004043  mov word ptr gs:[ebp + 0x224], cx
    X86_AT(c, 0x4043u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u)), (c.r[1] & 0xFFFFu));
    // 00404b  shr eax, 0x10
    X86_AT(c, 0x404bu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00404e  shr ecx, 0x10
    X86_AT(c, 0x404eu);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[1] = r; }
    // 004051  cmp ax, cx
    X86_AT(c, 0x4051u);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), (c.r[1] & 0xFFFFu), 0, 2);
    // 004054  jle 0x4057
    X86_AT(c, 0x4054u);
    if (x86_cc(c, 14)) { goto L_4057; }
    X86_TICK(c, 3);
    // 004056  xchg ecx, eax
    X86_AT(c, 0x4056u);
    { uint32_t t = c.r[1]; c.r[1] = c.r[0]; c.r[0] = t; }
L_4057:
    X86_TICK(c, 60);
    // 004057  mov word ptr gs:[ebp + 0x226], ax
    X86_AT(c, 0x4057u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u)), (c.r[0] & 0xFFFFu));
    // 00405f  sub cx, ax
    X86_AT(c, 0x405fu);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_sub(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 004062  inc ecx
    X86_AT(c, 0x4062u);
    { uint32_t v = c.r[1]; c.r[1] = x86_inc(c, v, 4); }
    // 004063  push ecx
    X86_AT(c, 0x4063u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 004064  mov es, word ptr gs:[ebp + 4]
    X86_AT(c, 0x4064u);
    x86_load_seg(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x4u))) & 0xFFFFu);
    // 004068  movsx eax, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x4068u);
    c.r[0] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u)));
    // 004070  imul eax, dword ptr gs:[ebp + 0x20]
    X86_AT(c, 0x4070u);
    c.r[0] = x86_imul2(c, c.r[0], rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x20u))), 4);
    // 004075  add eax, dword ptr gs:[ebp]
    X86_AT(c, 0x4075u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5]))), 0, 4); }
    // 004079  mov dword ptr gs:[ebp + 0x1cc], eax
    X86_AT(c, 0x4079u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu)), c.r[0]);
    // 004080  movzx eax, byte ptr gs:[ebp + 0x220]
    X86_AT(c, 0x4080u);
    c.r[0] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x220u)));
    // 004088  mov eax, dword ptr cs:[eax*4 + 0x7fec]
    X86_AT(c, 0x4088u);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0x7FECu)));
    // 004090  mov dword ptr gs:[ebp + 0x324], eax
    X86_AT(c, 0x4090u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x324u)), c.r[0]);
L_4097:
    X86_TICK(c, 7);
    // 004097  call dword ptr gs:[ebp + 0x324]
    X86_AT(c, 0x4097u);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x324u))); push32(c, 0x409eu); x86_call(c, t); X86_RET(c, 0x409eu); }
    X86_TICK(c, 28);
    // 00409e  inc word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x409eu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x226u)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
    // 0040a6  mov eax, dword ptr gs:[ebp + 0x20]
    X86_AT(c, 0x40a6u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x20u)));
    // 0040aa  add dword ptr gs:[ebp + 0x1cc], eax
    X86_AT(c, 0x40aau);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 0040b1  dec dword ptr [esp]
    X86_AT(c, 0x40b1u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 0040b4  jne 0x4097
    X86_AT(c, 0x40b4u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x4097u); goto L_4097; }
    X86_TICK(c, 12);
    // 0040b6  add esp, 4
    X86_AT(c, 0x40b6u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0040b9  ret 
    X86_AT(c, 0x40b9u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x2e4cu, "ran off the end of a function");
}
void f_00002e56(X86Cpu& c) {
    goto L_2e56;
L_2e3a:
    X86_TICK(c, 16);
    // 002e3a  add esp, dword ptr gs:[ebp + 0x200]
    X86_AT(c, 0x2e3au);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x200u))), 0, 4); }
    // 002e41  ret 
    X86_AT(c, 0x2e41u);
    c.eip = pop32(c); return;
L_2e56:
    X86_TICK(c, 5);
    // 002e56  je 0x2e3a
    X86_AT(c, 0x2e56u);
    if (x86_cc(c, 4)) { X86_POLL(c, 0x2e3au); goto L_2e3a; }
    X86_TICK(c, 7);
    // 002e58  call 0x36bc
    X86_AT(c, 0x2e58u);
    push32(c, 0x2e5du); f_000036bc(c); X86_RET(c, 0x2e5du);
    X86_TICK(c, 9);
    // 002e5d  mov byte ptr gs:[ebp + 0x220], 0x13
    X86_AT(c, 0x2e5du);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x220u)), 0x13u);
    // 002e65  call 0x6120
    X86_AT(c, 0x2e65u);
    push32(c, 0x2e6au); f_00006120(c); X86_RET(c, 0x2e6au);
    X86_TICK(c, 7);
    // 002e6a  call 0x38e9
    X86_AT(c, 0x2e6au);
    push32(c, 0x2e6fu); f_000038e9(c); X86_RET(c, 0x2e6fu);
    X86_TICK(c, 5);
    // 002e6f  jae 0x2e79
    X86_AT(c, 0x2e6fu);
    if (x86_cc(c, 3)) { goto L_2e79; }
    X86_TICK(c, 7);
    // 002e71  add byte ptr gs:[ebp + 0x220], 2
    X86_AT(c, 0x2e71u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x220u)); uint32_t v = rd8(ea); wr8(ea, x86_add(c, v, 0x2u, 0, 1)); }
L_2e79:
    X86_TICK(c, 7);
    // 002e79  jmp 0x4026
    X86_AT(c, 0x2e79u);
    goto L_4026;
L_4026:
    X86_TICK(c, 15);
    // 004026  mov eax, dword ptr gs:[ebp + 0x1c4]
    X86_AT(c, 0x4026u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C4u)));
    // 00402d  mov ecx, dword ptr gs:[ebp + 0x1c8]
    X86_AT(c, 0x402du);
    c.r[1] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C8u)));
    // 004034  cmp ax, cx
    X86_AT(c, 0x4034u);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), (c.r[1] & 0xFFFFu), 0, 2);
    // 004037  jle 0x403b
    X86_AT(c, 0x4037u);
    if (x86_cc(c, 14)) { goto L_403b; }
    X86_TICK(c, 3);
    // 004039  xchg cx, ax
    X86_AT(c, 0x4039u);
    { uint32_t t = (c.r[1] & 0xFFFFu); s16(c, 1, (c.r[0] & 0xFFFFu)); s16(c, 0, t); }
L_403b:
    X86_TICK(c, 17);
    // 00403b  mov word ptr gs:[ebp + 0x222], ax
    X86_AT(c, 0x403bu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u)), (c.r[0] & 0xFFFFu));
    // 004043  mov word ptr gs:[ebp + 0x224], cx
    X86_AT(c, 0x4043u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u)), (c.r[1] & 0xFFFFu));
    // 00404b  shr eax, 0x10
    X86_AT(c, 0x404bu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00404e  shr ecx, 0x10
    X86_AT(c, 0x404eu);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[1] = r; }
    // 004051  cmp ax, cx
    X86_AT(c, 0x4051u);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), (c.r[1] & 0xFFFFu), 0, 2);
    // 004054  jle 0x4057
    X86_AT(c, 0x4054u);
    if (x86_cc(c, 14)) { goto L_4057; }
    X86_TICK(c, 3);
    // 004056  xchg ecx, eax
    X86_AT(c, 0x4056u);
    { uint32_t t = c.r[1]; c.r[1] = c.r[0]; c.r[0] = t; }
L_4057:
    X86_TICK(c, 60);
    // 004057  mov word ptr gs:[ebp + 0x226], ax
    X86_AT(c, 0x4057u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u)), (c.r[0] & 0xFFFFu));
    // 00405f  sub cx, ax
    X86_AT(c, 0x405fu);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_sub(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 004062  inc ecx
    X86_AT(c, 0x4062u);
    { uint32_t v = c.r[1]; c.r[1] = x86_inc(c, v, 4); }
    // 004063  push ecx
    X86_AT(c, 0x4063u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 004064  mov es, word ptr gs:[ebp + 4]
    X86_AT(c, 0x4064u);
    x86_load_seg(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x4u))) & 0xFFFFu);
    // 004068  movsx eax, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x4068u);
    c.r[0] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u)));
    // 004070  imul eax, dword ptr gs:[ebp + 0x20]
    X86_AT(c, 0x4070u);
    c.r[0] = x86_imul2(c, c.r[0], rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x20u))), 4);
    // 004075  add eax, dword ptr gs:[ebp]
    X86_AT(c, 0x4075u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5]))), 0, 4); }
    // 004079  mov dword ptr gs:[ebp + 0x1cc], eax
    X86_AT(c, 0x4079u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu)), c.r[0]);
    // 004080  movzx eax, byte ptr gs:[ebp + 0x220]
    X86_AT(c, 0x4080u);
    c.r[0] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x220u)));
    // 004088  mov eax, dword ptr cs:[eax*4 + 0x7fec]
    X86_AT(c, 0x4088u);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0x7FECu)));
    // 004090  mov dword ptr gs:[ebp + 0x324], eax
    X86_AT(c, 0x4090u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x324u)), c.r[0]);
L_4097:
    X86_TICK(c, 7);
    // 004097  call dword ptr gs:[ebp + 0x324]
    X86_AT(c, 0x4097u);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x324u))); push32(c, 0x409eu); x86_call(c, t); X86_RET(c, 0x409eu); }
    X86_TICK(c, 28);
    // 00409e  inc word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x409eu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x226u)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
    // 0040a6  mov eax, dword ptr gs:[ebp + 0x20]
    X86_AT(c, 0x40a6u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x20u)));
    // 0040aa  add dword ptr gs:[ebp + 0x1cc], eax
    X86_AT(c, 0x40aau);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 0040b1  dec dword ptr [esp]
    X86_AT(c, 0x40b1u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 0040b4  jne 0x4097
    X86_AT(c, 0x40b4u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x4097u); goto L_4097; }
    X86_TICK(c, 12);
    // 0040b6  add esp, 4
    X86_AT(c, 0x40b6u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0040b9  ret 
    X86_AT(c, 0x40b9u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x2e56u, "ran off the end of a function");
}
void f_00002e58(X86Cpu& c) {
    X86_TICK(c, 7);
    // 002e58  call 0x36bc
    X86_AT(c, 0x2e58u);
    push32(c, 0x2e5du); f_000036bc(c); X86_RET(c, 0x2e5du);
    X86_TICK(c, 9);
    // 002e5d  mov byte ptr gs:[ebp + 0x220], 0x13
    X86_AT(c, 0x2e5du);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x220u)), 0x13u);
    // 002e65  call 0x6120
    X86_AT(c, 0x2e65u);
    push32(c, 0x2e6au); f_00006120(c); X86_RET(c, 0x2e6au);
    X86_TICK(c, 7);
    // 002e6a  call 0x38e9
    X86_AT(c, 0x2e6au);
    push32(c, 0x2e6fu); f_000038e9(c); X86_RET(c, 0x2e6fu);
    X86_TICK(c, 5);
    // 002e6f  jae 0x2e79
    X86_AT(c, 0x2e6fu);
    if (x86_cc(c, 3)) { goto L_2e79; }
    X86_TICK(c, 7);
    // 002e71  add byte ptr gs:[ebp + 0x220], 2
    X86_AT(c, 0x2e71u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x220u)); uint32_t v = rd8(ea); wr8(ea, x86_add(c, v, 0x2u, 0, 1)); }
L_2e79:
    X86_TICK(c, 7);
    // 002e79  jmp 0x4026
    X86_AT(c, 0x2e79u);
    goto L_4026;
L_4026:
    X86_TICK(c, 15);
    // 004026  mov eax, dword ptr gs:[ebp + 0x1c4]
    X86_AT(c, 0x4026u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C4u)));
    // 00402d  mov ecx, dword ptr gs:[ebp + 0x1c8]
    X86_AT(c, 0x402du);
    c.r[1] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C8u)));
    // 004034  cmp ax, cx
    X86_AT(c, 0x4034u);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), (c.r[1] & 0xFFFFu), 0, 2);
    // 004037  jle 0x403b
    X86_AT(c, 0x4037u);
    if (x86_cc(c, 14)) { goto L_403b; }
    X86_TICK(c, 3);
    // 004039  xchg cx, ax
    X86_AT(c, 0x4039u);
    { uint32_t t = (c.r[1] & 0xFFFFu); s16(c, 1, (c.r[0] & 0xFFFFu)); s16(c, 0, t); }
L_403b:
    X86_TICK(c, 17);
    // 00403b  mov word ptr gs:[ebp + 0x222], ax
    X86_AT(c, 0x403bu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u)), (c.r[0] & 0xFFFFu));
    // 004043  mov word ptr gs:[ebp + 0x224], cx
    X86_AT(c, 0x4043u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u)), (c.r[1] & 0xFFFFu));
    // 00404b  shr eax, 0x10
    X86_AT(c, 0x404bu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00404e  shr ecx, 0x10
    X86_AT(c, 0x404eu);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[1] = r; }
    // 004051  cmp ax, cx
    X86_AT(c, 0x4051u);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), (c.r[1] & 0xFFFFu), 0, 2);
    // 004054  jle 0x4057
    X86_AT(c, 0x4054u);
    if (x86_cc(c, 14)) { goto L_4057; }
    X86_TICK(c, 3);
    // 004056  xchg ecx, eax
    X86_AT(c, 0x4056u);
    { uint32_t t = c.r[1]; c.r[1] = c.r[0]; c.r[0] = t; }
L_4057:
    X86_TICK(c, 60);
    // 004057  mov word ptr gs:[ebp + 0x226], ax
    X86_AT(c, 0x4057u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u)), (c.r[0] & 0xFFFFu));
    // 00405f  sub cx, ax
    X86_AT(c, 0x405fu);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_sub(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 004062  inc ecx
    X86_AT(c, 0x4062u);
    { uint32_t v = c.r[1]; c.r[1] = x86_inc(c, v, 4); }
    // 004063  push ecx
    X86_AT(c, 0x4063u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 004064  mov es, word ptr gs:[ebp + 4]
    X86_AT(c, 0x4064u);
    x86_load_seg(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x4u))) & 0xFFFFu);
    // 004068  movsx eax, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x4068u);
    c.r[0] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u)));
    // 004070  imul eax, dword ptr gs:[ebp + 0x20]
    X86_AT(c, 0x4070u);
    c.r[0] = x86_imul2(c, c.r[0], rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x20u))), 4);
    // 004075  add eax, dword ptr gs:[ebp]
    X86_AT(c, 0x4075u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5]))), 0, 4); }
    // 004079  mov dword ptr gs:[ebp + 0x1cc], eax
    X86_AT(c, 0x4079u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu)), c.r[0]);
    // 004080  movzx eax, byte ptr gs:[ebp + 0x220]
    X86_AT(c, 0x4080u);
    c.r[0] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x220u)));
    // 004088  mov eax, dword ptr cs:[eax*4 + 0x7fec]
    X86_AT(c, 0x4088u);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0x7FECu)));
    // 004090  mov dword ptr gs:[ebp + 0x324], eax
    X86_AT(c, 0x4090u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x324u)), c.r[0]);
L_4097:
    X86_TICK(c, 7);
    // 004097  call dword ptr gs:[ebp + 0x324]
    X86_AT(c, 0x4097u);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x324u))); push32(c, 0x409eu); x86_call(c, t); X86_RET(c, 0x409eu); }
    X86_TICK(c, 28);
    // 00409e  inc word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x409eu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x226u)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
    // 0040a6  mov eax, dword ptr gs:[ebp + 0x20]
    X86_AT(c, 0x40a6u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x20u)));
    // 0040aa  add dword ptr gs:[ebp + 0x1cc], eax
    X86_AT(c, 0x40aau);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 0040b1  dec dword ptr [esp]
    X86_AT(c, 0x40b1u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 0040b4  jne 0x4097
    X86_AT(c, 0x40b4u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x4097u); goto L_4097; }
    X86_TICK(c, 12);
    // 0040b6  add esp, 4
    X86_AT(c, 0x40b6u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0040b9  ret 
    X86_AT(c, 0x40b9u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x2e58u, "ran off the end of a function");
}
void f_00002e5d(X86Cpu& c) {
    X86_TICK(c, 9);
    // 002e5d  mov byte ptr gs:[ebp + 0x220], 0x13
    X86_AT(c, 0x2e5du);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x220u)), 0x13u);
    // 002e65  call 0x6120
    X86_AT(c, 0x2e65u);
    push32(c, 0x2e6au); f_00006120(c); X86_RET(c, 0x2e6au);
    X86_TICK(c, 7);
    // 002e6a  call 0x38e9
    X86_AT(c, 0x2e6au);
    push32(c, 0x2e6fu); f_000038e9(c); X86_RET(c, 0x2e6fu);
    X86_TICK(c, 5);
    // 002e6f  jae 0x2e79
    X86_AT(c, 0x2e6fu);
    if (x86_cc(c, 3)) { goto L_2e79; }
    X86_TICK(c, 7);
    // 002e71  add byte ptr gs:[ebp + 0x220], 2
    X86_AT(c, 0x2e71u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x220u)); uint32_t v = rd8(ea); wr8(ea, x86_add(c, v, 0x2u, 0, 1)); }
L_2e79:
    X86_TICK(c, 7);
    // 002e79  jmp 0x4026
    X86_AT(c, 0x2e79u);
    goto L_4026;
L_4026:
    X86_TICK(c, 15);
    // 004026  mov eax, dword ptr gs:[ebp + 0x1c4]
    X86_AT(c, 0x4026u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C4u)));
    // 00402d  mov ecx, dword ptr gs:[ebp + 0x1c8]
    X86_AT(c, 0x402du);
    c.r[1] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C8u)));
    // 004034  cmp ax, cx
    X86_AT(c, 0x4034u);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), (c.r[1] & 0xFFFFu), 0, 2);
    // 004037  jle 0x403b
    X86_AT(c, 0x4037u);
    if (x86_cc(c, 14)) { goto L_403b; }
    X86_TICK(c, 3);
    // 004039  xchg cx, ax
    X86_AT(c, 0x4039u);
    { uint32_t t = (c.r[1] & 0xFFFFu); s16(c, 1, (c.r[0] & 0xFFFFu)); s16(c, 0, t); }
L_403b:
    X86_TICK(c, 17);
    // 00403b  mov word ptr gs:[ebp + 0x222], ax
    X86_AT(c, 0x403bu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u)), (c.r[0] & 0xFFFFu));
    // 004043  mov word ptr gs:[ebp + 0x224], cx
    X86_AT(c, 0x4043u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u)), (c.r[1] & 0xFFFFu));
    // 00404b  shr eax, 0x10
    X86_AT(c, 0x404bu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00404e  shr ecx, 0x10
    X86_AT(c, 0x404eu);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[1] = r; }
    // 004051  cmp ax, cx
    X86_AT(c, 0x4051u);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), (c.r[1] & 0xFFFFu), 0, 2);
    // 004054  jle 0x4057
    X86_AT(c, 0x4054u);
    if (x86_cc(c, 14)) { goto L_4057; }
    X86_TICK(c, 3);
    // 004056  xchg ecx, eax
    X86_AT(c, 0x4056u);
    { uint32_t t = c.r[1]; c.r[1] = c.r[0]; c.r[0] = t; }
L_4057:
    X86_TICK(c, 60);
    // 004057  mov word ptr gs:[ebp + 0x226], ax
    X86_AT(c, 0x4057u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u)), (c.r[0] & 0xFFFFu));
    // 00405f  sub cx, ax
    X86_AT(c, 0x405fu);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_sub(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 004062  inc ecx
    X86_AT(c, 0x4062u);
    { uint32_t v = c.r[1]; c.r[1] = x86_inc(c, v, 4); }
    // 004063  push ecx
    X86_AT(c, 0x4063u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 004064  mov es, word ptr gs:[ebp + 4]
    X86_AT(c, 0x4064u);
    x86_load_seg(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x4u))) & 0xFFFFu);
    // 004068  movsx eax, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x4068u);
    c.r[0] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u)));
    // 004070  imul eax, dword ptr gs:[ebp + 0x20]
    X86_AT(c, 0x4070u);
    c.r[0] = x86_imul2(c, c.r[0], rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x20u))), 4);
    // 004075  add eax, dword ptr gs:[ebp]
    X86_AT(c, 0x4075u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5]))), 0, 4); }
    // 004079  mov dword ptr gs:[ebp + 0x1cc], eax
    X86_AT(c, 0x4079u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu)), c.r[0]);
    // 004080  movzx eax, byte ptr gs:[ebp + 0x220]
    X86_AT(c, 0x4080u);
    c.r[0] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x220u)));
    // 004088  mov eax, dword ptr cs:[eax*4 + 0x7fec]
    X86_AT(c, 0x4088u);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0x7FECu)));
    // 004090  mov dword ptr gs:[ebp + 0x324], eax
    X86_AT(c, 0x4090u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x324u)), c.r[0]);
L_4097:
    X86_TICK(c, 7);
    // 004097  call dword ptr gs:[ebp + 0x324]
    X86_AT(c, 0x4097u);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x324u))); push32(c, 0x409eu); x86_call(c, t); X86_RET(c, 0x409eu); }
    X86_TICK(c, 28);
    // 00409e  inc word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x409eu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x226u)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
    // 0040a6  mov eax, dword ptr gs:[ebp + 0x20]
    X86_AT(c, 0x40a6u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x20u)));
    // 0040aa  add dword ptr gs:[ebp + 0x1cc], eax
    X86_AT(c, 0x40aau);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 0040b1  dec dword ptr [esp]
    X86_AT(c, 0x40b1u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 0040b4  jne 0x4097
    X86_AT(c, 0x40b4u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x4097u); goto L_4097; }
    X86_TICK(c, 12);
    // 0040b6  add esp, 4
    X86_AT(c, 0x40b6u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0040b9  ret 
    X86_AT(c, 0x40b9u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x2e5du, "ran off the end of a function");
}
void f_00002e65(X86Cpu& c) {
    X86_TICK(c, 7);
    // 002e65  call 0x6120
    X86_AT(c, 0x2e65u);
    push32(c, 0x2e6au); f_00006120(c); X86_RET(c, 0x2e6au);
    X86_TICK(c, 7);
    // 002e6a  call 0x38e9
    X86_AT(c, 0x2e6au);
    push32(c, 0x2e6fu); f_000038e9(c); X86_RET(c, 0x2e6fu);
    X86_TICK(c, 5);
    // 002e6f  jae 0x2e79
    X86_AT(c, 0x2e6fu);
    if (x86_cc(c, 3)) { goto L_2e79; }
    X86_TICK(c, 7);
    // 002e71  add byte ptr gs:[ebp + 0x220], 2
    X86_AT(c, 0x2e71u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x220u)); uint32_t v = rd8(ea); wr8(ea, x86_add(c, v, 0x2u, 0, 1)); }
L_2e79:
    X86_TICK(c, 7);
    // 002e79  jmp 0x4026
    X86_AT(c, 0x2e79u);
    goto L_4026;
L_4026:
    X86_TICK(c, 15);
    // 004026  mov eax, dword ptr gs:[ebp + 0x1c4]
    X86_AT(c, 0x4026u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C4u)));
    // 00402d  mov ecx, dword ptr gs:[ebp + 0x1c8]
    X86_AT(c, 0x402du);
    c.r[1] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C8u)));
    // 004034  cmp ax, cx
    X86_AT(c, 0x4034u);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), (c.r[1] & 0xFFFFu), 0, 2);
    // 004037  jle 0x403b
    X86_AT(c, 0x4037u);
    if (x86_cc(c, 14)) { goto L_403b; }
    X86_TICK(c, 3);
    // 004039  xchg cx, ax
    X86_AT(c, 0x4039u);
    { uint32_t t = (c.r[1] & 0xFFFFu); s16(c, 1, (c.r[0] & 0xFFFFu)); s16(c, 0, t); }
L_403b:
    X86_TICK(c, 17);
    // 00403b  mov word ptr gs:[ebp + 0x222], ax
    X86_AT(c, 0x403bu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u)), (c.r[0] & 0xFFFFu));
    // 004043  mov word ptr gs:[ebp + 0x224], cx
    X86_AT(c, 0x4043u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u)), (c.r[1] & 0xFFFFu));
    // 00404b  shr eax, 0x10
    X86_AT(c, 0x404bu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00404e  shr ecx, 0x10
    X86_AT(c, 0x404eu);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[1] = r; }
    // 004051  cmp ax, cx
    X86_AT(c, 0x4051u);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), (c.r[1] & 0xFFFFu), 0, 2);
    // 004054  jle 0x4057
    X86_AT(c, 0x4054u);
    if (x86_cc(c, 14)) { goto L_4057; }
    X86_TICK(c, 3);
    // 004056  xchg ecx, eax
    X86_AT(c, 0x4056u);
    { uint32_t t = c.r[1]; c.r[1] = c.r[0]; c.r[0] = t; }
L_4057:
    X86_TICK(c, 60);
    // 004057  mov word ptr gs:[ebp + 0x226], ax
    X86_AT(c, 0x4057u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u)), (c.r[0] & 0xFFFFu));
    // 00405f  sub cx, ax
    X86_AT(c, 0x405fu);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_sub(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 004062  inc ecx
    X86_AT(c, 0x4062u);
    { uint32_t v = c.r[1]; c.r[1] = x86_inc(c, v, 4); }
    // 004063  push ecx
    X86_AT(c, 0x4063u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 004064  mov es, word ptr gs:[ebp + 4]
    X86_AT(c, 0x4064u);
    x86_load_seg(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x4u))) & 0xFFFFu);
    // 004068  movsx eax, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x4068u);
    c.r[0] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u)));
    // 004070  imul eax, dword ptr gs:[ebp + 0x20]
    X86_AT(c, 0x4070u);
    c.r[0] = x86_imul2(c, c.r[0], rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x20u))), 4);
    // 004075  add eax, dword ptr gs:[ebp]
    X86_AT(c, 0x4075u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5]))), 0, 4); }
    // 004079  mov dword ptr gs:[ebp + 0x1cc], eax
    X86_AT(c, 0x4079u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu)), c.r[0]);
    // 004080  movzx eax, byte ptr gs:[ebp + 0x220]
    X86_AT(c, 0x4080u);
    c.r[0] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x220u)));
    // 004088  mov eax, dword ptr cs:[eax*4 + 0x7fec]
    X86_AT(c, 0x4088u);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0x7FECu)));
    // 004090  mov dword ptr gs:[ebp + 0x324], eax
    X86_AT(c, 0x4090u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x324u)), c.r[0]);
L_4097:
    X86_TICK(c, 7);
    // 004097  call dword ptr gs:[ebp + 0x324]
    X86_AT(c, 0x4097u);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x324u))); push32(c, 0x409eu); x86_call(c, t); X86_RET(c, 0x409eu); }
    X86_TICK(c, 28);
    // 00409e  inc word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x409eu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x226u)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
    // 0040a6  mov eax, dword ptr gs:[ebp + 0x20]
    X86_AT(c, 0x40a6u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x20u)));
    // 0040aa  add dword ptr gs:[ebp + 0x1cc], eax
    X86_AT(c, 0x40aau);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 0040b1  dec dword ptr [esp]
    X86_AT(c, 0x40b1u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 0040b4  jne 0x4097
    X86_AT(c, 0x40b4u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x4097u); goto L_4097; }
    X86_TICK(c, 12);
    // 0040b6  add esp, 4
    X86_AT(c, 0x40b6u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0040b9  ret 
    X86_AT(c, 0x40b9u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x2e65u, "ran off the end of a function");
}
void f_00002e6a(X86Cpu& c) {
    X86_TICK(c, 7);
    // 002e6a  call 0x38e9
    X86_AT(c, 0x2e6au);
    push32(c, 0x2e6fu); f_000038e9(c); X86_RET(c, 0x2e6fu);
    X86_TICK(c, 5);
    // 002e6f  jae 0x2e79
    X86_AT(c, 0x2e6fu);
    if (x86_cc(c, 3)) { goto L_2e79; }
    X86_TICK(c, 7);
    // 002e71  add byte ptr gs:[ebp + 0x220], 2
    X86_AT(c, 0x2e71u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x220u)); uint32_t v = rd8(ea); wr8(ea, x86_add(c, v, 0x2u, 0, 1)); }
L_2e79:
    X86_TICK(c, 7);
    // 002e79  jmp 0x4026
    X86_AT(c, 0x2e79u);
    goto L_4026;
L_4026:
    X86_TICK(c, 15);
    // 004026  mov eax, dword ptr gs:[ebp + 0x1c4]
    X86_AT(c, 0x4026u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C4u)));
    // 00402d  mov ecx, dword ptr gs:[ebp + 0x1c8]
    X86_AT(c, 0x402du);
    c.r[1] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C8u)));
    // 004034  cmp ax, cx
    X86_AT(c, 0x4034u);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), (c.r[1] & 0xFFFFu), 0, 2);
    // 004037  jle 0x403b
    X86_AT(c, 0x4037u);
    if (x86_cc(c, 14)) { goto L_403b; }
    X86_TICK(c, 3);
    // 004039  xchg cx, ax
    X86_AT(c, 0x4039u);
    { uint32_t t = (c.r[1] & 0xFFFFu); s16(c, 1, (c.r[0] & 0xFFFFu)); s16(c, 0, t); }
L_403b:
    X86_TICK(c, 17);
    // 00403b  mov word ptr gs:[ebp + 0x222], ax
    X86_AT(c, 0x403bu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u)), (c.r[0] & 0xFFFFu));
    // 004043  mov word ptr gs:[ebp + 0x224], cx
    X86_AT(c, 0x4043u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u)), (c.r[1] & 0xFFFFu));
    // 00404b  shr eax, 0x10
    X86_AT(c, 0x404bu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00404e  shr ecx, 0x10
    X86_AT(c, 0x404eu);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[1] = r; }
    // 004051  cmp ax, cx
    X86_AT(c, 0x4051u);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), (c.r[1] & 0xFFFFu), 0, 2);
    // 004054  jle 0x4057
    X86_AT(c, 0x4054u);
    if (x86_cc(c, 14)) { goto L_4057; }
    X86_TICK(c, 3);
    // 004056  xchg ecx, eax
    X86_AT(c, 0x4056u);
    { uint32_t t = c.r[1]; c.r[1] = c.r[0]; c.r[0] = t; }
L_4057:
    X86_TICK(c, 60);
    // 004057  mov word ptr gs:[ebp + 0x226], ax
    X86_AT(c, 0x4057u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u)), (c.r[0] & 0xFFFFu));
    // 00405f  sub cx, ax
    X86_AT(c, 0x405fu);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_sub(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 004062  inc ecx
    X86_AT(c, 0x4062u);
    { uint32_t v = c.r[1]; c.r[1] = x86_inc(c, v, 4); }
    // 004063  push ecx
    X86_AT(c, 0x4063u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 004064  mov es, word ptr gs:[ebp + 4]
    X86_AT(c, 0x4064u);
    x86_load_seg(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x4u))) & 0xFFFFu);
    // 004068  movsx eax, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x4068u);
    c.r[0] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u)));
    // 004070  imul eax, dword ptr gs:[ebp + 0x20]
    X86_AT(c, 0x4070u);
    c.r[0] = x86_imul2(c, c.r[0], rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x20u))), 4);
    // 004075  add eax, dword ptr gs:[ebp]
    X86_AT(c, 0x4075u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5]))), 0, 4); }
    // 004079  mov dword ptr gs:[ebp + 0x1cc], eax
    X86_AT(c, 0x4079u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu)), c.r[0]);
    // 004080  movzx eax, byte ptr gs:[ebp + 0x220]
    X86_AT(c, 0x4080u);
    c.r[0] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x220u)));
    // 004088  mov eax, dword ptr cs:[eax*4 + 0x7fec]
    X86_AT(c, 0x4088u);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0x7FECu)));
    // 004090  mov dword ptr gs:[ebp + 0x324], eax
    X86_AT(c, 0x4090u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x324u)), c.r[0]);
L_4097:
    X86_TICK(c, 7);
    // 004097  call dword ptr gs:[ebp + 0x324]
    X86_AT(c, 0x4097u);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x324u))); push32(c, 0x409eu); x86_call(c, t); X86_RET(c, 0x409eu); }
    X86_TICK(c, 28);
    // 00409e  inc word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x409eu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x226u)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
    // 0040a6  mov eax, dword ptr gs:[ebp + 0x20]
    X86_AT(c, 0x40a6u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x20u)));
    // 0040aa  add dword ptr gs:[ebp + 0x1cc], eax
    X86_AT(c, 0x40aau);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 0040b1  dec dword ptr [esp]
    X86_AT(c, 0x40b1u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 0040b4  jne 0x4097
    X86_AT(c, 0x40b4u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x4097u); goto L_4097; }
    X86_TICK(c, 12);
    // 0040b6  add esp, 4
    X86_AT(c, 0x40b6u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0040b9  ret 
    X86_AT(c, 0x40b9u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x2e6au, "ran off the end of a function");
}
void f_00002e6f(X86Cpu& c) {
    X86_TICK(c, 5);
    // 002e6f  jae 0x2e79
    X86_AT(c, 0x2e6fu);
    if (x86_cc(c, 3)) { goto L_2e79; }
    X86_TICK(c, 7);
    // 002e71  add byte ptr gs:[ebp + 0x220], 2
    X86_AT(c, 0x2e71u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x220u)); uint32_t v = rd8(ea); wr8(ea, x86_add(c, v, 0x2u, 0, 1)); }
L_2e79:
    X86_TICK(c, 7);
    // 002e79  jmp 0x4026
    X86_AT(c, 0x2e79u);
    goto L_4026;
L_4026:
    X86_TICK(c, 15);
    // 004026  mov eax, dword ptr gs:[ebp + 0x1c4]
    X86_AT(c, 0x4026u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C4u)));
    // 00402d  mov ecx, dword ptr gs:[ebp + 0x1c8]
    X86_AT(c, 0x402du);
    c.r[1] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C8u)));
    // 004034  cmp ax, cx
    X86_AT(c, 0x4034u);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), (c.r[1] & 0xFFFFu), 0, 2);
    // 004037  jle 0x403b
    X86_AT(c, 0x4037u);
    if (x86_cc(c, 14)) { goto L_403b; }
    X86_TICK(c, 3);
    // 004039  xchg cx, ax
    X86_AT(c, 0x4039u);
    { uint32_t t = (c.r[1] & 0xFFFFu); s16(c, 1, (c.r[0] & 0xFFFFu)); s16(c, 0, t); }
L_403b:
    X86_TICK(c, 17);
    // 00403b  mov word ptr gs:[ebp + 0x222], ax
    X86_AT(c, 0x403bu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u)), (c.r[0] & 0xFFFFu));
    // 004043  mov word ptr gs:[ebp + 0x224], cx
    X86_AT(c, 0x4043u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u)), (c.r[1] & 0xFFFFu));
    // 00404b  shr eax, 0x10
    X86_AT(c, 0x404bu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00404e  shr ecx, 0x10
    X86_AT(c, 0x404eu);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[1] = r; }
    // 004051  cmp ax, cx
    X86_AT(c, 0x4051u);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), (c.r[1] & 0xFFFFu), 0, 2);
    // 004054  jle 0x4057
    X86_AT(c, 0x4054u);
    if (x86_cc(c, 14)) { goto L_4057; }
    X86_TICK(c, 3);
    // 004056  xchg ecx, eax
    X86_AT(c, 0x4056u);
    { uint32_t t = c.r[1]; c.r[1] = c.r[0]; c.r[0] = t; }
L_4057:
    X86_TICK(c, 60);
    // 004057  mov word ptr gs:[ebp + 0x226], ax
    X86_AT(c, 0x4057u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u)), (c.r[0] & 0xFFFFu));
    // 00405f  sub cx, ax
    X86_AT(c, 0x405fu);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_sub(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 004062  inc ecx
    X86_AT(c, 0x4062u);
    { uint32_t v = c.r[1]; c.r[1] = x86_inc(c, v, 4); }
    // 004063  push ecx
    X86_AT(c, 0x4063u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 004064  mov es, word ptr gs:[ebp + 4]
    X86_AT(c, 0x4064u);
    x86_load_seg(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x4u))) & 0xFFFFu);
    // 004068  movsx eax, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x4068u);
    c.r[0] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u)));
    // 004070  imul eax, dword ptr gs:[ebp + 0x20]
    X86_AT(c, 0x4070u);
    c.r[0] = x86_imul2(c, c.r[0], rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x20u))), 4);
    // 004075  add eax, dword ptr gs:[ebp]
    X86_AT(c, 0x4075u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5]))), 0, 4); }
    // 004079  mov dword ptr gs:[ebp + 0x1cc], eax
    X86_AT(c, 0x4079u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu)), c.r[0]);
    // 004080  movzx eax, byte ptr gs:[ebp + 0x220]
    X86_AT(c, 0x4080u);
    c.r[0] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x220u)));
    // 004088  mov eax, dword ptr cs:[eax*4 + 0x7fec]
    X86_AT(c, 0x4088u);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0x7FECu)));
    // 004090  mov dword ptr gs:[ebp + 0x324], eax
    X86_AT(c, 0x4090u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x324u)), c.r[0]);
L_4097:
    X86_TICK(c, 7);
    // 004097  call dword ptr gs:[ebp + 0x324]
    X86_AT(c, 0x4097u);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x324u))); push32(c, 0x409eu); x86_call(c, t); X86_RET(c, 0x409eu); }
    X86_TICK(c, 28);
    // 00409e  inc word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x409eu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x226u)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
    // 0040a6  mov eax, dword ptr gs:[ebp + 0x20]
    X86_AT(c, 0x40a6u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x20u)));
    // 0040aa  add dword ptr gs:[ebp + 0x1cc], eax
    X86_AT(c, 0x40aau);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 0040b1  dec dword ptr [esp]
    X86_AT(c, 0x40b1u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 0040b4  jne 0x4097
    X86_AT(c, 0x40b4u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x4097u); goto L_4097; }
    X86_TICK(c, 12);
    // 0040b6  add esp, 4
    X86_AT(c, 0x40b6u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0040b9  ret 
    X86_AT(c, 0x40b9u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x2e6fu, "ran off the end of a function");
}
void f_00002e71(X86Cpu& c) {
    X86_TICK(c, 14);
    // 002e71  add byte ptr gs:[ebp + 0x220], 2
    X86_AT(c, 0x2e71u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x220u)); uint32_t v = rd8(ea); wr8(ea, x86_add(c, v, 0x2u, 0, 1)); }
    // 002e79  jmp 0x4026
    X86_AT(c, 0x2e79u);
    goto L_4026;
L_4026:
    X86_TICK(c, 15);
    // 004026  mov eax, dword ptr gs:[ebp + 0x1c4]
    X86_AT(c, 0x4026u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C4u)));
    // 00402d  mov ecx, dword ptr gs:[ebp + 0x1c8]
    X86_AT(c, 0x402du);
    c.r[1] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C8u)));
    // 004034  cmp ax, cx
    X86_AT(c, 0x4034u);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), (c.r[1] & 0xFFFFu), 0, 2);
    // 004037  jle 0x403b
    X86_AT(c, 0x4037u);
    if (x86_cc(c, 14)) { goto L_403b; }
    X86_TICK(c, 3);
    // 004039  xchg cx, ax
    X86_AT(c, 0x4039u);
    { uint32_t t = (c.r[1] & 0xFFFFu); s16(c, 1, (c.r[0] & 0xFFFFu)); s16(c, 0, t); }
L_403b:
    X86_TICK(c, 17);
    // 00403b  mov word ptr gs:[ebp + 0x222], ax
    X86_AT(c, 0x403bu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u)), (c.r[0] & 0xFFFFu));
    // 004043  mov word ptr gs:[ebp + 0x224], cx
    X86_AT(c, 0x4043u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u)), (c.r[1] & 0xFFFFu));
    // 00404b  shr eax, 0x10
    X86_AT(c, 0x404bu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00404e  shr ecx, 0x10
    X86_AT(c, 0x404eu);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[1] = r; }
    // 004051  cmp ax, cx
    X86_AT(c, 0x4051u);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), (c.r[1] & 0xFFFFu), 0, 2);
    // 004054  jle 0x4057
    X86_AT(c, 0x4054u);
    if (x86_cc(c, 14)) { goto L_4057; }
    X86_TICK(c, 3);
    // 004056  xchg ecx, eax
    X86_AT(c, 0x4056u);
    { uint32_t t = c.r[1]; c.r[1] = c.r[0]; c.r[0] = t; }
L_4057:
    X86_TICK(c, 60);
    // 004057  mov word ptr gs:[ebp + 0x226], ax
    X86_AT(c, 0x4057u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u)), (c.r[0] & 0xFFFFu));
    // 00405f  sub cx, ax
    X86_AT(c, 0x405fu);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_sub(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 004062  inc ecx
    X86_AT(c, 0x4062u);
    { uint32_t v = c.r[1]; c.r[1] = x86_inc(c, v, 4); }
    // 004063  push ecx
    X86_AT(c, 0x4063u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 004064  mov es, word ptr gs:[ebp + 4]
    X86_AT(c, 0x4064u);
    x86_load_seg(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x4u))) & 0xFFFFu);
    // 004068  movsx eax, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x4068u);
    c.r[0] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u)));
    // 004070  imul eax, dword ptr gs:[ebp + 0x20]
    X86_AT(c, 0x4070u);
    c.r[0] = x86_imul2(c, c.r[0], rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x20u))), 4);
    // 004075  add eax, dword ptr gs:[ebp]
    X86_AT(c, 0x4075u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5]))), 0, 4); }
    // 004079  mov dword ptr gs:[ebp + 0x1cc], eax
    X86_AT(c, 0x4079u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu)), c.r[0]);
    // 004080  movzx eax, byte ptr gs:[ebp + 0x220]
    X86_AT(c, 0x4080u);
    c.r[0] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x220u)));
    // 004088  mov eax, dword ptr cs:[eax*4 + 0x7fec]
    X86_AT(c, 0x4088u);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0x7FECu)));
    // 004090  mov dword ptr gs:[ebp + 0x324], eax
    X86_AT(c, 0x4090u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x324u)), c.r[0]);
L_4097:
    X86_TICK(c, 7);
    // 004097  call dword ptr gs:[ebp + 0x324]
    X86_AT(c, 0x4097u);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x324u))); push32(c, 0x409eu); x86_call(c, t); X86_RET(c, 0x409eu); }
    X86_TICK(c, 28);
    // 00409e  inc word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x409eu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x226u)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
    // 0040a6  mov eax, dword ptr gs:[ebp + 0x20]
    X86_AT(c, 0x40a6u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x20u)));
    // 0040aa  add dword ptr gs:[ebp + 0x1cc], eax
    X86_AT(c, 0x40aau);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 0040b1  dec dword ptr [esp]
    X86_AT(c, 0x40b1u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 0040b4  jne 0x4097
    X86_AT(c, 0x40b4u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x4097u); goto L_4097; }
    X86_TICK(c, 12);
    // 0040b6  add esp, 4
    X86_AT(c, 0x40b6u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0040b9  ret 
    X86_AT(c, 0x40b9u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x2e71u, "ran off the end of a function");
}
}

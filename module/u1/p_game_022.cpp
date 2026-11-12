#include "p_game_funcs.h"
namespace p_game {
void f_000e4752(X86Cpu& c) {
    X86_TICK(c, 26);
    // 0e4752  pushal 
    X86_AT(c, 0xe4752u);
    { uint32_t sp = c.r[4]; for (int k = 0; k < 8; ++k) push32(c, k == 4 ? sp : c.r[k]); }
    // 0e4753  xor eax, eax
    X86_AT(c, 0xe4753u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v ^ c.r[0], 4); }
    // 0e4755  mov word ptr [0xc3310], ax
    X86_AT(c, 0xe4755u);
    wr16((c.sbase[3] + (uint32_t)(0xC3310u)), (c.r[0] & 0xFFFFu));
    // 0e475b  mov ecx, 0x40
    X86_AT(c, 0xe475bu);
    c.r[1] = 0x40u;
    // 0e4760  lea edi, [0xc33c5]
    X86_AT(c, 0xe4760u);
    c.r[7] = (uint32_t)(0xC33C5u);
L_e4766:
    X86_TICK(c, 17);
    // 0e4766  mov dword ptr [edi], eax
    X86_AT(c, 0xe4766u);
    wr32((c.sbase[3] + (uint32_t)(c.r[7])), c.r[0]);
    // 0e4768  mov word ptr [edi + 4], ax
    X86_AT(c, 0xe4768u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x4u)), (c.r[0] & 0xFFFFu));
    // 0e476c  add edi, 6
    X86_AT(c, 0xe476cu);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x6u, 0, 4); }
    // 0e476f  loop 0xe4766
    X86_AT(c, 0xe476fu);
    c.r[1] -= 1; if (c.r[1] != 0) { X86_POLL(c, 0xe4766u); goto L_e4766; }
    X86_TICK(c, 34);
    // 0e4771  popal 
    X86_AT(c, 0xe4771u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 0e4772  ret 
    X86_AT(c, 0xe4772u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe4752u, "ran off the end of a function");
}
void f_000e4773(X86Cpu& c) {
    X86_TICK(c, 50);
    // 0e4773  xor eax, eax
    X86_AT(c, 0xe4773u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v ^ c.r[0], 4); }
    // 0e4775  mov byte ptr [0xc3566], al
    X86_AT(c, 0xe4775u);
    wr8((c.sbase[3] + (uint32_t)(0xC3566u)), g8(c, 0));
    // 0e477a  mov byte ptr [0xc3568], al
    X86_AT(c, 0xe477au);
    wr8((c.sbase[3] + (uint32_t)(0xC3568u)), g8(c, 0));
    // 0e477f  mov byte ptr [0xc3567], al
    X86_AT(c, 0xe477fu);
    wr8((c.sbase[3] + (uint32_t)(0xC3567u)), g8(c, 0));
    // 0e4784  mov byte ptr [0xc3320], 0
    X86_AT(c, 0xe4784u);
    wr8((c.sbase[3] + (uint32_t)(0xC3320u)), 0x0u);
    // 0e478b  mov byte ptr [0xc3306], al
    X86_AT(c, 0xe478bu);
    wr8((c.sbase[3] + (uint32_t)(0xC3306u)), g8(c, 0));
    // 0e4790  mov byte ptr [0xc3307], al
    X86_AT(c, 0xe4790u);
    wr8((c.sbase[3] + (uint32_t)(0xC3307u)), g8(c, 0));
    // 0e4795  mov byte ptr [0xc3308], al
    X86_AT(c, 0xe4795u);
    wr8((c.sbase[3] + (uint32_t)(0xC3308u)), g8(c, 0));
    // 0e479a  mov byte ptr [0xc3309], al
    X86_AT(c, 0xe479au);
    wr8((c.sbase[3] + (uint32_t)(0xC3309u)), g8(c, 0));
    // 0e479f  mov byte ptr [0xc330a], al
    X86_AT(c, 0xe479fu);
    wr8((c.sbase[3] + (uint32_t)(0xC330Au)), g8(c, 0));
    // 0e47a4  mov byte ptr [0xc330b], al
    X86_AT(c, 0xe47a4u);
    wr8((c.sbase[3] + (uint32_t)(0xC330Bu)), g8(c, 0));
    // 0e47a9  mov byte ptr [0xc330c], al
    X86_AT(c, 0xe47a9u);
    wr8((c.sbase[3] + (uint32_t)(0xC330Cu)), g8(c, 0));
    // 0e47ae  mov byte ptr [0xc330d], al
    X86_AT(c, 0xe47aeu);
    wr8((c.sbase[3] + (uint32_t)(0xC330Du)), g8(c, 0));
    // 0e47b3  mov byte ptr [0xc330e], al
    X86_AT(c, 0xe47b3u);
    wr8((c.sbase[3] + (uint32_t)(0xC330Eu)), g8(c, 0));
    // 0e47b8  mov byte ptr [0xc330f], al
    X86_AT(c, 0xe47b8u);
    wr8((c.sbase[3] + (uint32_t)(0xC330Fu)), g8(c, 0));
    // 0e47bd  lea edi, [0xc3321]
    X86_AT(c, 0xe47bdu);
    c.r[7] = (uint32_t)(0xC3321u);
    // 0e47c3  mov byte ptr [edi], 0
    X86_AT(c, 0xe47c3u);
    wr8((c.sbase[3] + (uint32_t)(c.r[7])), 0x0u);
    // 0e47c6  mov byte ptr [edi + 1], 1
    X86_AT(c, 0xe47c6u);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0x1u)), 0x1u);
    // 0e47ca  mov byte ptr [edi + 2], 2
    X86_AT(c, 0xe47cau);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0x2u)), 0x2u);
    // 0e47ce  mov byte ptr [edi + 3], 3
    X86_AT(c, 0xe47ceu);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0x3u)), 0x3u);
    // 0e47d2  ret 
    X86_AT(c, 0xe47d2u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe4773u, "ran off the end of a function");
}
void f_000e47d3(X86Cpu& c) {
    X86_TICK(c, 34);
    // 0e47d3  mov word ptr [0xc3319], 0
    X86_AT(c, 0xe47d3u);
    wr16((c.sbase[3] + (uint32_t)(0xC3319u)), 0x0u);
    // 0e47dc  mov word ptr [0xc3315], 0
    X86_AT(c, 0xe47dcu);
    wr16((c.sbase[3] + (uint32_t)(0xC3315u)), 0x0u);
    // 0e47e5  mov word ptr [0xc3317], 0x10
    X86_AT(c, 0xe47e5u);
    wr16((c.sbase[3] + (uint32_t)(0xC3317u)), 0x10u);
    // 0e47ee  mov al, 0x33
    X86_AT(c, 0xe47eeu);
    s8(c, 0, 0x33u);
    // 0e47f0  mov byte ptr [0xc3304], al
    X86_AT(c, 0xe47f0u);
    wr8((c.sbase[3] + (uint32_t)(0xC3304u)), g8(c, 0));
    // 0e47f5  mov byte ptr [0xc32f8], al
    X86_AT(c, 0xe47f5u);
    wr8((c.sbase[3] + (uint32_t)(0xC32F8u)), g8(c, 0));
    // 0e47fa  mov word ptr [0xc32f3], ax
    X86_AT(c, 0xe47fau);
    wr16((c.sbase[3] + (uint32_t)(0xC32F3u)), (c.r[0] & 0xFFFFu));
    // 0e4800  mov byte ptr [0xc32f7], al
    X86_AT(c, 0xe4800u);
    wr8((c.sbase[3] + (uint32_t)(0xC32F7u)), g8(c, 0));
    // 0e4805  mov word ptr [0xc32f5], ax
    X86_AT(c, 0xe4805u);
    wr16((c.sbase[3] + (uint32_t)(0xC32F5u)), (c.r[0] & 0xFFFFu));
    // 0e480b  mov al, 0x5a
    X86_AT(c, 0xe480bu);
    s8(c, 0, 0x5Au);
    // 0e480d  mov byte ptr [0xc3305], al
    X86_AT(c, 0xe480du);
    wr8((c.sbase[3] + (uint32_t)(0xC3305u)), g8(c, 0));
    // 0e4812  mov byte ptr [0xc32f9], al
    X86_AT(c, 0xe4812u);
    wr8((c.sbase[3] + (uint32_t)(0xC32F9u)), g8(c, 0));
    // 0e4817  ret 
    X86_AT(c, 0xe4817u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe47d3u, "ran off the end of a function");
}
void f_000e4818(X86Cpu& c) {
    X86_TICK(c, 16);
    // 0e4818  mov byte ptr [0xc3313], 0
    X86_AT(c, 0xe4818u);
    wr8((c.sbase[3] + (uint32_t)(0xC3313u)), 0x0u);
    // 0e481f  mov byte ptr [0xc3312], 0xff
    X86_AT(c, 0xe481fu);
    wr8((c.sbase[3] + (uint32_t)(0xC3312u)), 0xFFu);
    // 0e4826  mov byte ptr [0xc3314], 0
    X86_AT(c, 0xe4826u);
    wr8((c.sbase[3] + (uint32_t)(0xC3314u)), 0x0u);
    // 0e482d  ret 
    X86_AT(c, 0xe482du);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe4818u, "ran off the end of a function");
}
void f_000e482e(X86Cpu& c) {
    X86_TICK(c, 9);
    // 0e482e  cld 
    X86_AT(c, 0xe482eu);
    c.fl &= ~X86_DF;
    // 0e482f  call 0xe4940
    X86_AT(c, 0xe482fu);
    push32(c, 0xe4834u); x86_call_known(c, 0xe4940u, f_000e4940); X86_RET(c, 0xe4834u);
    X86_TICK(c, 7);
    // 0e4834  call 0xe4880
    X86_AT(c, 0xe4834u);
    push32(c, 0xe4839u); x86_call_known(c, 0xe4880u, f_000e4880); X86_RET(c, 0xe4839u);
    X86_TICK(c, 7);
    // 0e4839  call 0xe48e0
    X86_AT(c, 0xe4839u);
    push32(c, 0xe483eu); x86_call_known(c, 0xe48e0u, f_000e48e0); X86_RET(c, 0xe483eu);
L_e483e:
    X86_TICK(c, 12);
    // 0e483e  cmp word ptr [0xc3319], 0
    X86_AT(c, 0xe483eu);
    (void)x86_sub(c, rd16((c.sbase[3] + (uint32_t)(0xC3319u))), 0x0u, 0, 2);
    // 0e4846  je 0xe487f
    X86_AT(c, 0xe4846u);
    if (x86_cc(c, 4)) { goto L_e487f; }
    X86_TICK(c, 13);
    // 0e4848  dec word ptr [0xc3319]
    X86_AT(c, 0xe4848u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xC3319u)); uint32_t v = rd16(ea); wr16(ea, x86_dec(c, v, 2)); }
    // 0e484f  call 0xe498b
    X86_AT(c, 0xe484fu);
    push32(c, 0xe4854u); x86_call_known(c, 0xe498bu, f_000e498b); X86_RET(c, 0xe4854u);
    X86_TICK(c, 5);
    // 0e4854  jb 0xe483e
    X86_AT(c, 0xe4854u);
    if (x86_cc(c, 2)) { X86_POLL(c, 0xe483eu); goto L_e483e; }
    X86_TICK(c, 12);
    // 0e4856  cmp byte ptr [0xc3306], 0
    X86_AT(c, 0xe4856u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0xC3306u))), 0x0u, 0, 1);
    // 0e485d  je 0xe483e
    X86_AT(c, 0xe485du);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xe483eu); goto L_e483e; }
    X86_TICK(c, 7);
    // 0e485f  call 0xe4dc1
    X86_AT(c, 0xe485fu);
    push32(c, 0xe4864u); x86_call_known(c, 0xe4dc1u, f_000e4dc1); X86_RET(c, 0xe4864u);
    X86_TICK(c, 7);
    // 0e4864  call 0xe49ed
    X86_AT(c, 0xe4864u);
    push32(c, 0xe4869u); x86_call_known(c, 0xe49edu, f_000e49ed); X86_RET(c, 0xe4869u);
    X86_TICK(c, 7);
    // 0e4869  call 0xe4972
    X86_AT(c, 0xe4869u);
    push32(c, 0xe486eu); x86_call_known(c, 0xe4972u, f_000e4972); X86_RET(c, 0xe486eu);
    X86_TICK(c, 7);
    // 0e486e  call 0xe4940
    X86_AT(c, 0xe486eu);
    push32(c, 0xe4873u); x86_call_known(c, 0xe4940u, f_000e4940); X86_RET(c, 0xe4873u);
    X86_TICK(c, 7);
    // 0e4873  call 0xe4880
    X86_AT(c, 0xe4873u);
    push32(c, 0xe4878u); x86_call_known(c, 0xe4880u, f_000e4880); X86_RET(c, 0xe4878u);
    X86_TICK(c, 7);
    // 0e4878  call 0xe48e0
    X86_AT(c, 0xe4878u);
    push32(c, 0xe487du); x86_call_known(c, 0xe48e0u, f_000e48e0); X86_RET(c, 0xe487du);
    X86_TICK(c, 7);
    // 0e487d  jmp 0xe483e
    X86_AT(c, 0xe487du);
    X86_POLL(c, 0xe483eu); goto L_e483e;
L_e487f:
    X86_TICK(c, 10);
    // 0e487f  ret 
    X86_AT(c, 0xe487fu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe482eu, "ran off the end of a function");
}
void f_000e4880(X86Cpu& c) {
    X86_TICK(c, 12);
    // 0e4880  cmp byte ptr [0xc330a], 0
    X86_AT(c, 0xe4880u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0xC330Au))), 0x0u, 0, 1);
    // 0e4887  je 0xe489e
    X86_AT(c, 0xe4887u);
    if (x86_cc(c, 4)) { goto L_e489e; }
    X86_TICK(c, 6);
    // 0e4889  mov byte ptr [0xc330a], 0
    X86_AT(c, 0xe4889u);
    wr8((c.sbase[3] + (uint32_t)(0xC330Au)), 0x0u);
    // 0e4890  mov byte ptr [0xc3308], 0
    X86_AT(c, 0xe4890u);
    wr8((c.sbase[3] + (uint32_t)(0xC3308u)), 0x0u);
    // 0e4897  mov byte ptr [0xc330d], 0xff
    X86_AT(c, 0xe4897u);
    wr8((c.sbase[3] + (uint32_t)(0xC330Du)), 0xFFu);
L_e489e:
    X86_TICK(c, 12);
    // 0e489e  cmp byte ptr [0xc330b], 0
    X86_AT(c, 0xe489eu);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0xC330Bu))), 0x0u, 0, 1);
    // 0e48a5  je 0xe48bc
    X86_AT(c, 0xe48a5u);
    if (x86_cc(c, 4)) { goto L_e48bc; }
    X86_TICK(c, 6);
    // 0e48a7  mov byte ptr [0xc330b], 0
    X86_AT(c, 0xe48a7u);
    wr8((c.sbase[3] + (uint32_t)(0xC330Bu)), 0x0u);
    // 0e48ae  mov byte ptr [0xc3308], 0
    X86_AT(c, 0xe48aeu);
    wr8((c.sbase[3] + (uint32_t)(0xC3308u)), 0x0u);
    // 0e48b5  mov byte ptr [0xc330e], 0xff
    X86_AT(c, 0xe48b5u);
    wr8((c.sbase[3] + (uint32_t)(0xC330Eu)), 0xFFu);
L_e48bc:
    X86_TICK(c, 12);
    // 0e48bc  cmp byte ptr [0xc330c], 0
    X86_AT(c, 0xe48bcu);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0xC330Cu))), 0x0u, 0, 1);
    // 0e48c3  je 0xe48df
    X86_AT(c, 0xe48c3u);
    if (x86_cc(c, 4)) { goto L_e48df; }
    X86_TICK(c, 13);
    // 0e48c5  mov byte ptr [0xc330c], 0
    X86_AT(c, 0xe48c5u);
    wr8((c.sbase[3] + (uint32_t)(0xC330Cu)), 0x0u);
    // 0e48cc  mov byte ptr [0xc3308], 0xff
    X86_AT(c, 0xe48ccu);
    wr8((c.sbase[3] + (uint32_t)(0xC3308u)), 0xFFu);
    // 0e48d3  mov byte ptr [0xc330f], 0xff
    X86_AT(c, 0xe48d3u);
    wr8((c.sbase[3] + (uint32_t)(0xC330Fu)), 0xFFu);
    // 0e48da  call 0xe4688
    X86_AT(c, 0xe48dau);
    push32(c, 0xe48dfu); x86_call_known(c, 0xe4688u, f_000e4688); X86_RET(c, 0xe48dfu);
L_e48df:
    X86_TICK(c, 10);
    // 0e48df  ret 
    X86_AT(c, 0xe48dfu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe4880u, "ran off the end of a function");
}
void f_000e48e0(X86Cpu& c) {
    X86_TICK(c, 14);
    // 0e48e0  push ax
    X86_AT(c, 0xe48e0u);
    { uint32_t v = (c.r[0] & 0xFFFFu); push16(c, v); }
    // 0e48e2  cmp byte ptr [0xc330d], 0
    X86_AT(c, 0xe48e2u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0xC330Du))), 0x0u, 0, 1);
    // 0e48e9  je 0xe48f9
    X86_AT(c, 0xe48e9u);
    if (x86_cc(c, 4)) { goto L_e48f9; }
    X86_TICK(c, 11);
    // 0e48eb  mov byte ptr [0xc330d], 0
    X86_AT(c, 0xe48ebu);
    wr8((c.sbase[3] + (uint32_t)(0xC330Du)), 0x0u);
    // 0e48f2  mov al, 0xfa
    X86_AT(c, 0xe48f2u);
    s8(c, 0, 0xFAu);
    // 0e48f4  call 0xe530f
    X86_AT(c, 0xe48f4u);
    push32(c, 0xe48f9u); x86_call_known(c, 0xe530fu, f_000e530f); X86_RET(c, 0xe48f9u);
L_e48f9:
    X86_TICK(c, 12);
    // 0e48f9  cmp byte ptr [0xc330e], 0
    X86_AT(c, 0xe48f9u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0xC330Eu))), 0x0u, 0, 1);
    // 0e4900  je 0xe4910
    X86_AT(c, 0xe4900u);
    if (x86_cc(c, 4)) { goto L_e4910; }
    X86_TICK(c, 11);
    // 0e4902  mov byte ptr [0xc330e], 0
    X86_AT(c, 0xe4902u);
    wr8((c.sbase[3] + (uint32_t)(0xC330Eu)), 0x0u);
    // 0e4909  mov al, 0xfb
    X86_AT(c, 0xe4909u);
    s8(c, 0, 0xFBu);
    // 0e490b  call 0xe530f
    X86_AT(c, 0xe490bu);
    push32(c, 0xe4910u); x86_call_known(c, 0xe530fu, f_000e530f); X86_RET(c, 0xe4910u);
L_e4910:
    X86_TICK(c, 12);
    // 0e4910  cmp byte ptr [0xc330f], 0
    X86_AT(c, 0xe4910u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0xC330Fu))), 0x0u, 0, 1);
    // 0e4917  je 0xe4927
    X86_AT(c, 0xe4917u);
    if (x86_cc(c, 4)) { goto L_e4927; }
    X86_TICK(c, 11);
    // 0e4919  mov byte ptr [0xc330f], 0
    X86_AT(c, 0xe4919u);
    wr8((c.sbase[3] + (uint32_t)(0xC330Fu)), 0x0u);
    // 0e4920  mov al, 0xfc
    X86_AT(c, 0xe4920u);
    s8(c, 0, 0xFCu);
    // 0e4922  call 0xe530f
    X86_AT(c, 0xe4922u);
    push32(c, 0xe4927u); x86_call_known(c, 0xe530fu, f_000e530f); X86_RET(c, 0xe4927u);
L_e4927:
    X86_TICK(c, 12);
    // 0e4927  cmp byte ptr [0xc3313], 0
    X86_AT(c, 0xe4927u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0xC3313u))), 0x0u, 0, 1);
    // 0e492e  je 0xe493d
    X86_AT(c, 0xe492eu);
    if (x86_cc(c, 4)) { goto L_e493d; }
    X86_TICK(c, 15);
    // 0e4930  dec byte ptr [0xc3313]
    X86_AT(c, 0xe4930u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xC3313u)); uint32_t v = rd8(ea); wr8(ea, x86_dec(c, v, 1)); }
    // 0e4936  mov al, 0xf8
    X86_AT(c, 0xe4936u);
    s8(c, 0, 0xF8u);
    // 0e4938  call 0xe530f
    X86_AT(c, 0xe4938u);
    push32(c, 0xe493du); x86_call_known(c, 0xe530fu, f_000e530f); X86_RET(c, 0xe493du);
L_e493d:
    X86_TICK(c, 14);
    // 0e493d  pop ax
    X86_AT(c, 0xe493du);
    { uint32_t v = pop16(c); s16(c, 0, v); }
    // 0e493f  ret 
    X86_AT(c, 0xe493fu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe48e0u, "ran off the end of a function");
}
void f_000e4940(X86Cpu& c) {
    X86_TICK(c, 81);
    // 0e4940  mov dx, 0xe71
    X86_AT(c, 0xe4940u);
    s16(c, 2, 0xE71u);
    // 0e4944  nop 
    X86_AT(c, 0xe4944u);
    // 0e4945  nop 
    X86_AT(c, 0xe4945u);
    // 0e4946  nop 
    X86_AT(c, 0xe4946u);
    // 0e4947  pushf 
    X86_AT(c, 0xe4947u);
    push16(c, c.fl & 0xFFFFu);
    // 0e4949  cli 
    X86_AT(c, 0xe4949u);
    c.fl &= ~X86_IF;
    // 0e494a  in al, dx
    X86_AT(c, 0xe494au);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 0e494b  mov ah, byte ptr [0xc3547]
    X86_AT(c, 0xe494bu);
    s8(c, 4, rd8((c.sbase[3] + (uint32_t)(0xC3547u))));
    // 0e4951  and al, 0xf0
    X86_AT(c, 0xe4951u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & 0xF0u, 1)); }
    // 0e4953  or al, ah
    X86_AT(c, 0xe4953u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v | g8(c, 4), 1)); }
    // 0e4955  out dx, al
    X86_AT(c, 0xe4955u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 0e4956  mov byte ptr [0xc3547], al
    X86_AT(c, 0xe4956u);
    wr8((c.sbase[3] + (uint32_t)(0xC3547u)), g8(c, 0));
    // 0e495b  mov al, byte ptr [0xc3548]
    X86_AT(c, 0xe495bu);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(0xC3548u))));
    // 0e4960  mov byte ptr [0xc3548], 0
    X86_AT(c, 0xe4960u);
    wr8((c.sbase[3] + (uint32_t)(0xC3548u)), 0x0u);
    // 0e4967  popf 
    X86_AT(c, 0xe4967u);
    x86_popfd(c, 2);
    // 0e4969  and al, 0xf0
    X86_AT(c, 0xe4969u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & 0xF0u, 1)); }
    // 0e496b  or byte ptr [0xc3320], al
    X86_AT(c, 0xe496bu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xC3320u)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | g8(c, 0), 1)); }
    // 0e4971  ret 
    X86_AT(c, 0xe4971u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe4940u, "ran off the end of a function");
}
void f_000e4972(X86Cpu& c) {
    X86_TICK(c, 12);
    // 0e4972  cmp byte ptr [0xc3307], 0
    X86_AT(c, 0xe4972u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0xC3307u))), 0x0u, 0, 1);
    // 0e4979  je 0xe498a
    X86_AT(c, 0xe4979u);
    if (x86_cc(c, 4)) { goto L_e498a; }
    X86_TICK(c, 12);
    // 0e497b  cmp word ptr [0xc3310], 0
    X86_AT(c, 0xe497bu);
    (void)x86_sub(c, rd16((c.sbase[3] + (uint32_t)(0xC3310u))), 0x0u, 0, 2);
    // 0e4983  jne 0xe498a
    X86_AT(c, 0xe4983u);
    if (x86_cc(c, 5)) { goto L_e498a; }
    X86_TICK(c, 7);
    // 0e4985  call 0xe45fd
    X86_AT(c, 0xe4985u);
    push32(c, 0xe498au); x86_call_known(c, 0xe45fdu, f_000e45fd); X86_RET(c, 0xe498au);
L_e498a:
    X86_TICK(c, 10);
    // 0e498a  ret 
    X86_AT(c, 0xe498au);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe4972u, "ran off the end of a function");
}
void f_000e498b(X86Cpu& c) {
    X86_TICK(c, 88);
    // 0e498b  inc word ptr [0xc32f5]
    X86_AT(c, 0xe498bu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xC32F5u)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
    // 0e4992  movzx ebx, byte ptr [0xc32f9]
    X86_AT(c, 0xe4992u);
    c.r[3] = rd8((c.sbase[3] + (uint32_t)(0xC32F9u)));
    // 0e4999  movzx eax, word ptr cs:[ebx*2 + 0xe4e22]
    X86_AT(c, 0xe4999u);
    c.r[0] = rd16((c.sbase[1] + (uint32_t)(c.r[3] * 2 + 0xE4E22u)));
    // 0e49a2  add eax, dword ptr [0xc32fa]
    X86_AT(c, 0xe49a2u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[3] + (uint32_t)(0xC32FAu))), 0, 4); }
    // 0e49a8  xor edx, edx
    X86_AT(c, 0xe49a8u);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v ^ c.r[2], 4); }
    // 0e49aa  mov ebx, 0x1f4
    X86_AT(c, 0xe49aau);
    c.r[3] = 0x1F4u;
    // 0e49af  div ebx
    X86_AT(c, 0xe49afu);
    x86_div(c, c.r[3], 4, 0xe49afu);
    // 0e49b1  mov dword ptr [0xc32fa], edx
    X86_AT(c, 0xe49b1u);
    wr32((c.sbase[3] + (uint32_t)(0xC32FAu)), c.r[2]);
    // 0e49b7  add dword ptr [0xc32fe], eax
    X86_AT(c, 0xe49b7u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xC32FEu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 0e49bd  mov al, byte ptr [0xc32f8]
    X86_AT(c, 0xe49bdu);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(0xC32F8u))));
    // 0e49c2  call 0xe462d
    X86_AT(c, 0xe49c2u);
    push32(c, 0xe49c7u); x86_call_known(c, 0xe462du, f_000e462d); X86_RET(c, 0xe49c7u);
    X86_TICK(c, 11);
    // 0e49c7  cmp dx, word ptr [0xc32f5]
    X86_AT(c, 0xe49c7u);
    (void)x86_sub(c, (c.r[2] & 0xFFFFu), rd16((c.sbase[3] + (uint32_t)(0xC32F5u))), 0, 2);
    // 0e49ce  ja 0xe49e4
    X86_AT(c, 0xe49ceu);
    if (x86_cc(c, 7)) { goto L_e49e4; }
    X86_TICK(c, 12);
    // 0e49d0  inc word ptr [0xc32f3]
    X86_AT(c, 0xe49d0u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xC32F3u)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
    // 0e49d7  xor eax, eax
    X86_AT(c, 0xe49d7u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v ^ c.r[0], 4); }
    // 0e49d9  mov word ptr [0xc32f5], ax
    X86_AT(c, 0xe49d9u);
    wr16((c.sbase[3] + (uint32_t)(0xC32F5u)), (c.r[0] & 0xFFFFu));
    // 0e49df  mov byte ptr [0xc32f7], al
    X86_AT(c, 0xe49dfu);
    wr8((c.sbase[3] + (uint32_t)(0xC32F7u)), g8(c, 0));
L_e49e4:
    X86_TICK(c, 12);
    // 0e49e4  clc 
    X86_AT(c, 0xe49e4u);
    c.fl &= ~X86_CF;
    // 0e49e5  ret 
    X86_AT(c, 0xe49e5u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe498bu, "ran off the end of a function");
}
void f_000e49ed(X86Cpu& c) {
L_e49ed:
    X86_TICK(c, 17);
    // 0e49ed  les esi, fword ptr [0xc32e1]
    X86_AT(c, 0xe49edu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xC32E1u)); uint32_t o = rd32(ea); uint32_t s = rd16(ea + 4); x86_load_seg(c, 0, s); c.r[6] = o; }
    // 0e49f3  mov al, byte ptr es:[esi]
    X86_AT(c, 0xe49f3u);
    s8(c, 0, rd8((c.sbase[0] + (uint32_t)(c.r[6]))));
    // 0e49f6  cmp al, 0xff
    X86_AT(c, 0xe49f6u);
    (void)x86_sub(c, g8(c, 0), 0xFFu, 0, 1);
    // 0e49f8  je 0xe4a02
    X86_AT(c, 0xe49f8u);
    if (x86_cc(c, 4)) { goto L_e4a02; }
    X86_TICK(c, 7);
    // 0e49fa  cmp al, 0xf7
    X86_AT(c, 0xe49fau);
    (void)x86_sub(c, g8(c, 0), 0xF7u, 0, 1);
    // 0e49fc  je 0xe4a02
    X86_AT(c, 0xe49fcu);
    if (x86_cc(c, 4)) { goto L_e4a02; }
    X86_TICK(c, 7);
    // 0e49fe  cmp al, 0x90
    X86_AT(c, 0xe49feu);
    (void)x86_sub(c, g8(c, 0), 0x90u, 0, 1);
    // 0e4a00  jae 0xe4a09
    X86_AT(c, 0xe4a00u);
    if (x86_cc(c, 3)) { goto L_e4a09; }
L_e4a02:
    X86_TICK(c, 7);
    // 0e4a02  call 0xe4cf5
    X86_AT(c, 0xe4a02u);
    push32(c, 0xe4a07u); x86_call_known(c, 0xe4cf5u, f_000e4cf5); X86_RET(c, 0xe4a07u);
    X86_TICK(c, 7);
    // 0e4a07  jmp 0xe49ed
    X86_AT(c, 0xe4a07u);
    X86_POLL(c, 0xe49edu); goto L_e49ed;
L_e4a09:
    X86_TICK(c, 15);
    // 0e4a09  mov dx, word ptr [0xc3302]
    X86_AT(c, 0xe4a09u);
    s16(c, 2, rd16((c.sbase[3] + (uint32_t)(0xC3302u))));
    // 0e4a10  cmp dx, word ptr [0xc32f3]
    X86_AT(c, 0xe4a10u);
    (void)x86_sub(c, (c.r[2] & 0xFFFFu), rd16((c.sbase[3] + (uint32_t)(0xC32F3u))), 0, 2);
    // 0e4a17  ja 0xe4a3e
    X86_AT(c, 0xe4a17u);
    if (x86_cc(c, 7)) { goto L_e4a3e; }
    X86_TICK(c, 5);
    // 0e4a19  je 0xe4a24
    X86_AT(c, 0xe4a19u);
    if (x86_cc(c, 4)) { goto L_e4a24; }
    X86_TICK(c, 7);
    // 0e4a1b  call 0xe4a3f
    X86_AT(c, 0xe4a1bu);
    push32(c, 0xe4a20u); x86_call_known(c, 0xe4a3fu, f_000e4a3f); X86_RET(c, 0xe4a20u);
    X86_TICK(c, 5);
    // 0e4a20  jae 0xe49ed
    X86_AT(c, 0xe4a20u);
    if (x86_cc(c, 3)) { X86_POLL(c, 0xe49edu); goto L_e49ed; }
    X86_TICK(c, 7);
    // 0e4a22  jmp 0xe4a3e
    X86_AT(c, 0xe4a22u);
    goto L_e4a3e;
L_e4a24:
    X86_TICK(c, 21);
    // 0e4a24  mov dx, word ptr es:[esi + 2]
    X86_AT(c, 0xe4a24u);
    s16(c, 2, rd16((c.sbase[0] + (uint32_t)(c.r[6] + 0x2u))));
    // 0e4a29  shl dl, 1
    X86_AT(c, 0xe4a29u);
    { uint32_t v = g8(c, 2); bool w; uint32_t r = x86_shift(c, 4, v, 0x1u, 1, w); if (w) s8(c, 2, r); }
    // 0e4a2b  shr dx, 1
    X86_AT(c, 0xe4a2bu);
    { uint32_t v = (c.r[2] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 2, w); if (w) s16(c, 2, r); }
    // 0e4a2e  cmp dx, word ptr [0xc32f5]
    X86_AT(c, 0xe4a2eu);
    (void)x86_sub(c, (c.r[2] & 0xFFFFu), rd16((c.sbase[3] + (uint32_t)(0xC32F5u))), 0, 2);
    // 0e4a35  ja 0xe4a3e
    X86_AT(c, 0xe4a35u);
    if (x86_cc(c, 7)) { goto L_e4a3e; }
    X86_TICK(c, 7);
    // 0e4a37  call 0xe4a3f
    X86_AT(c, 0xe4a37u);
    push32(c, 0xe4a3cu); x86_call_known(c, 0xe4a3fu, f_000e4a3f); X86_RET(c, 0xe4a3cu);
    X86_TICK(c, 5);
    // 0e4a3c  jae 0xe49ed
    X86_AT(c, 0xe4a3cu);
    if (x86_cc(c, 3)) { X86_POLL(c, 0xe49edu); goto L_e49ed; }
L_e4a3e:
    X86_TICK(c, 10);
    // 0e4a3e  ret 
    X86_AT(c, 0xe4a3eu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe49edu, "ran off the end of a function");
}
void f_000e4a3f(X86Cpu& c) {
    X86_TICK(c, 7);
    // 0e4a3f  cmp al, 0xfe
    X86_AT(c, 0xe4a3fu);
    (void)x86_sub(c, g8(c, 0), 0xFEu, 0, 1);
    // 0e4a41  je 0xe4a7d
    X86_AT(c, 0xe4a41u);
    if (x86_cc(c, 4)) { goto L_e4a7d; }
    X86_TICK(c, 7);
    // 0e4a43  cmp al, 0xfd
    X86_AT(c, 0xe4a43u);
    (void)x86_sub(c, g8(c, 0), 0xFDu, 0, 1);
    // 0e4a45  je 0xe4a7d
    X86_AT(c, 0xe4a45u);
    if (x86_cc(c, 4)) { goto L_e4a7d; }
    X86_TICK(c, 10);
    // 0e4a47  movzx ebx, al
    X86_AT(c, 0xe4a47u);
    c.r[3] = g8(c, 0);
    // 0e4a4a  cmp al, 0xf0
    X86_AT(c, 0xe4a4au);
    (void)x86_sub(c, g8(c, 0), 0xF0u, 0, 1);
    // 0e4a4c  jae 0xe4a68
    X86_AT(c, 0xe4a4cu);
    if (x86_cc(c, 3)) { goto L_e4a68; }
    X86_TICK(c, 12);
    // 0e4a4e  sub ebx, 0x80
    X86_AT(c, 0xe4a4eu);
    { uint32_t v = c.r[3]; c.r[3] = x86_sub(c, v, 0x80u, 0, 4); }
    // 0e4a54  shr ebx, 4
    X86_AT(c, 0xe4a54u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 5, v, 0x4u, 4, w); if (w) c.r[3] = r; }
    // 0e4a57  call dword ptr cs:[ebx*4 + 0xe4ad6]
    X86_AT(c, 0xe4a57u);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[3] * 4 + 0xE4AD6u))); push32(c, 0xe4a5fu);
      switch (t) {
      case 0xe4b36u: x86_call_known(c, 0xe4b36u, f_000e4b36); break;
      case 0xe4b38u: x86_call_known(c, 0xe4b38u, f_000e4b38); break;
      case 0xe4b6bu: x86_call_known(c, 0xe4b6bu, f_000e4b6b); break;
      case 0xe4b72u: x86_call_known(c, 0xe4b72u, f_000e4b72); break;
      case 0xe4b79u: x86_call_known(c, 0xe4b79u, f_000e4b79); break;
      case 0xe4b80u: x86_call_known(c, 0xe4b80u, f_000e4b80); break;
      case 0xe4bd8u: x86_call_known(c, 0xe4bd8u, f_000e4bd8); break;
      case 0xe4d4cu: x86_call_known(c, 0xe4d4cu, f_000e4d4c); break;
      case 0xe4d95u: x86_call_known(c, 0xe4d95u, f_000e4d95); break;
      case 0xe4d97u: x86_call_known(c, 0xe4d97u, f_000e4d97); break;
      case 0xe4d99u: x86_call_known(c, 0xe4d99u, f_000e4d99); break;
      case 0xe4dabu: x86_call_known(c, 0xe4dabu, f_000e4dab); break;
      default: x86_call(c, t); }
      X86_RET(c, 0xe4a5fu); }
    X86_TICK(c, 5);
    // 0e4a5f  jb 0xe4a7d
    X86_AT(c, 0xe4a5fu);
    if (x86_cc(c, 2)) { goto L_e4a7d; }
    X86_TICK(c, 7);
    // 0e4a61  call 0xe4cf5
    X86_AT(c, 0xe4a61u);
    push32(c, 0xe4a66u); x86_call_known(c, 0xe4cf5u, f_000e4cf5); X86_RET(c, 0xe4a66u);
    X86_TICK(c, 12);
    // 0e4a66  clc 
    X86_AT(c, 0xe4a66u);
    c.fl &= ~X86_CF;
    // 0e4a67  ret 
    X86_AT(c, 0xe4a67u);
    c.eip = pop32(c); return;
L_e4a68:
    X86_TICK(c, 9);
    // 0e4a68  sub ebx, 0xf0
    X86_AT(c, 0xe4a68u);
    { uint32_t v = c.r[3]; c.r[3] = x86_sub(c, v, 0xF0u, 0, 4); }
    // 0e4a6e  call dword ptr cs:[ebx*4 + 0xe4af6]
    X86_AT(c, 0xe4a6eu);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[3] * 4 + 0xE4AF6u))); push32(c, 0xe4a76u);
      switch (t) {
      case 0xe4b36u: x86_call_known(c, 0xe4b36u, f_000e4b36); break;
      case 0xe4d4cu: x86_call_known(c, 0xe4d4cu, f_000e4d4c); break;
      case 0xe4d95u: x86_call_known(c, 0xe4d95u, f_000e4d95); break;
      case 0xe4d97u: x86_call_known(c, 0xe4d97u, f_000e4d97); break;
      case 0xe4d99u: x86_call_known(c, 0xe4d99u, f_000e4d99); break;
      case 0xe4dabu: x86_call_known(c, 0xe4dabu, f_000e4dab); break;
      default: x86_call(c, t); }
      X86_RET(c, 0xe4a76u); }
    X86_TICK(c, 7);
    // 0e4a76  call 0xe4cf5
    X86_AT(c, 0xe4a76u);
    push32(c, 0xe4a7bu); x86_call_known(c, 0xe4cf5u, f_000e4cf5); X86_RET(c, 0xe4a7bu);
    X86_TICK(c, 12);
    // 0e4a7b  clc 
    X86_AT(c, 0xe4a7bu);
    c.fl &= ~X86_CF;
    // 0e4a7c  ret 
    X86_AT(c, 0xe4a7cu);
    c.eip = pop32(c); return;
L_e4a7d:
    X86_TICK(c, 7);
    // 0e4a7d  cmp al, 0xfd
    X86_AT(c, 0xe4a7du);
    (void)x86_sub(c, g8(c, 0), 0xFDu, 0, 1);
    // 0e4a7f  je 0xe4a93
    X86_AT(c, 0xe4a7fu);
    if (x86_cc(c, 4)) { goto L_e4a93; }
    X86_TICK(c, 12);
    // 0e4a81  cmp byte ptr [0xc3309], 0
    X86_AT(c, 0xe4a81u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0xC3309u))), 0x0u, 0, 1);
    // 0e4a88  jne 0xe4a9c
    X86_AT(c, 0xe4a88u);
    if (x86_cc(c, 5)) { goto L_e4a9c; }
    X86_TICK(c, 14);
    // 0e4a8a  mov byte ptr [0xc3307], 0xff
    X86_AT(c, 0xe4a8au);
    wr8((c.sbase[3] + (uint32_t)(0xC3307u)), 0xFFu);
    // 0e4a91  stc 
    X86_AT(c, 0xe4a91u);
    c.fl |= X86_CF;
    // 0e4a92  ret 
    X86_AT(c, 0xe4a92u);
    c.eip = pop32(c); return;
L_e4a93:
    X86_TICK(c, 14);
    // 0e4a93  mov byte ptr [0xc3308], 0xff
    X86_AT(c, 0xe4a93u);
    wr8((c.sbase[3] + (uint32_t)(0xC3308u)), 0xFFu);
    // 0e4a9a  stc 
    X86_AT(c, 0xe4a9au);
    c.fl |= X86_CF;
    // 0e4a9b  ret 
    X86_AT(c, 0xe4a9bu);
    c.eip = pop32(c); return;
L_e4a9c:
    X86_TICK(c, 32);
    // 0e4a9c  mov byte ptr [0xc3307], 0
    X86_AT(c, 0xe4a9cu);
    wr8((c.sbase[3] + (uint32_t)(0xC3307u)), 0x0u);
    // 0e4aa3  mov eax, dword ptr [0xc32e7]
    X86_AT(c, 0xe4aa3u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xC32E7u)));
    // 0e4aa8  mov dword ptr [0xc32e1], eax
    X86_AT(c, 0xe4aa8u);
    wr32((c.sbase[3] + (uint32_t)(0xC32E1u)), c.r[0]);
    // 0e4aad  mov word ptr [0xc3302], 0
    X86_AT(c, 0xe4aadu);
    wr16((c.sbase[3] + (uint32_t)(0xC3302u)), 0x0u);
    // 0e4ab6  mov word ptr [0xc32f3], 0
    X86_AT(c, 0xe4ab6u);
    wr16((c.sbase[3] + (uint32_t)(0xC32F3u)), 0x0u);
    // 0e4abf  mov word ptr [0xc32f5], 0
    X86_AT(c, 0xe4abfu);
    wr16((c.sbase[3] + (uint32_t)(0xC32F5u)), 0x0u);
    // 0e4ac8  mov dl, byte ptr [0xc3304]
    X86_AT(c, 0xe4ac8u);
    s8(c, 2, rd8((c.sbase[3] + (uint32_t)(0xC3304u))));
    // 0e4ace  mov byte ptr [0xc32f8], dl
    X86_AT(c, 0xe4aceu);
    wr8((c.sbase[3] + (uint32_t)(0xC32F8u)), g8(c, 2));
    // 0e4ad4  clc 
    X86_AT(c, 0xe4ad4u);
    c.fl &= ~X86_CF;
    // 0e4ad5  ret 
    X86_AT(c, 0xe4ad5u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe4a3fu, "ran off the end of a function");
}
void f_000e4b36(X86Cpu& c) {
    X86_TICK(c, 12);
    // 0e4b36  clc 
    X86_AT(c, 0xe4b36u);
    c.fl &= ~X86_CF;
    // 0e4b37  ret 
    X86_AT(c, 0xe4b37u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe4b36u, "ran off the end of a function");
}
void f_000e4b38(X86Cpu& c) {
    X86_TICK(c, 11);
    // 0e4b38  mov dl, byte ptr es:[esi + 1]
    X86_AT(c, 0xe4b38u);
    s8(c, 2, rd8((c.sbase[0] + (uint32_t)(c.r[6] + 0x1u))));
    // 0e4b3c  call 0xe4c67
    X86_AT(c, 0xe4b3cu);
    push32(c, 0xe4b41u); x86_call_known(c, 0xe4c67u, f_000e4c67); X86_RET(c, 0xe4b41u);
    X86_TICK(c, 5);
    // 0e4b41  jb 0xe4b69
    X86_AT(c, 0xe4b41u);
    if (x86_cc(c, 2)) { goto L_e4b69; }
    X86_TICK(c, 7);
    // 0e4b43  call 0xe467e
    X86_AT(c, 0xe4b43u);
    push32(c, 0xe4b48u); x86_call_known(c, 0xe467eu, f_000e467e); X86_RET(c, 0xe4b48u);
    X86_TICK(c, 7);
    // 0e4b48  call 0xe4c7a
    X86_AT(c, 0xe4b48u);
    push32(c, 0xe4b4du); x86_call_known(c, 0xe4c7au, f_000e4c7a); X86_RET(c, 0xe4b4du);
    X86_TICK(c, 7);
    // 0e4b4d  call 0xe5279
    X86_AT(c, 0xe4b4du);
    push32(c, 0xe4b52u); x86_call_known(c, 0xe5279u, f_000e5279); X86_RET(c, 0xe4b52u);
    X86_TICK(c, 11);
    // 0e4b52  mov al, byte ptr es:[esi + 4]
    X86_AT(c, 0xe4b52u);
    s8(c, 0, rd8((c.sbase[0] + (uint32_t)(c.r[6] + 0x4u))));
    // 0e4b56  call 0xe4c97
    X86_AT(c, 0xe4b56u);
    push32(c, 0xe4b5bu); x86_call_known(c, 0xe4c97u, f_000e4c97); X86_RET(c, 0xe4b5bu);
    X86_TICK(c, 7);
    // 0e4b5b  call 0xe5279
    X86_AT(c, 0xe4b5bu);
    push32(c, 0xe4b60u); x86_call_known(c, 0xe5279u, f_000e5279); X86_RET(c, 0xe4b60u);
    X86_TICK(c, 11);
    // 0e4b60  mov al, byte ptr es:[esi + 5]
    X86_AT(c, 0xe4b60u);
    s8(c, 0, rd8((c.sbase[0] + (uint32_t)(c.r[6] + 0x5u))));
    // 0e4b64  call 0xe5279
    X86_AT(c, 0xe4b64u);
    push32(c, 0xe4b69u); x86_call_known(c, 0xe5279u, f_000e5279); X86_RET(c, 0xe4b69u);
L_e4b69:
    X86_TICK(c, 12);
    // 0e4b69  clc 
    X86_AT(c, 0xe4b69u);
    c.fl &= ~X86_CF;
    // 0e4b6a  ret 
    X86_AT(c, 0xe4b6au);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe4b38u, "ran off the end of a function");
}
void f_000e4b6b(X86Cpu& c) {
    X86_TICK(c, 7);
    // 0e4b6b  call 0xe4bab
    X86_AT(c, 0xe4b6bu);
    push32(c, 0xe4b70u); x86_call_known(c, 0xe4babu, f_000e4bab); X86_RET(c, 0xe4b70u);
    X86_TICK(c, 12);
    // 0e4b70  clc 
    X86_AT(c, 0xe4b70u);
    c.fl &= ~X86_CF;
    // 0e4b71  ret 
    X86_AT(c, 0xe4b71u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe4b6bu, "ran off the end of a function");
}
void f_000e4b72(X86Cpu& c) {
    X86_TICK(c, 7);
    // 0e4b72  call 0xe4b87
    X86_AT(c, 0xe4b72u);
    push32(c, 0xe4b77u); x86_call_known(c, 0xe4b87u, f_000e4b87); X86_RET(c, 0xe4b77u);
    X86_TICK(c, 12);
    // 0e4b77  clc 
    X86_AT(c, 0xe4b77u);
    c.fl &= ~X86_CF;
    // 0e4b78  ret 
    X86_AT(c, 0xe4b78u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe4b72u, "ran off the end of a function");
}
void f_000e4b79(X86Cpu& c) {
    X86_TICK(c, 7);
    // 0e4b79  call 0xe4b87
    X86_AT(c, 0xe4b79u);
    push32(c, 0xe4b7eu); x86_call_known(c, 0xe4b87u, f_000e4b87); X86_RET(c, 0xe4b7eu);
    X86_TICK(c, 12);
    // 0e4b7e  clc 
    X86_AT(c, 0xe4b7eu);
    c.fl &= ~X86_CF;
    // 0e4b7f  ret 
    X86_AT(c, 0xe4b7fu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe4b79u, "ran off the end of a function");
}
void f_000e4b80(X86Cpu& c) {
    X86_TICK(c, 7);
    // 0e4b80  call 0xe4bab
    X86_AT(c, 0xe4b80u);
    push32(c, 0xe4b85u); x86_call_known(c, 0xe4babu, f_000e4bab); X86_RET(c, 0xe4b85u);
    X86_TICK(c, 12);
    // 0e4b85  clc 
    X86_AT(c, 0xe4b85u);
    c.fl &= ~X86_CF;
    // 0e4b86  ret 
    X86_AT(c, 0xe4b86u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe4b80u, "ran off the end of a function");
}
void f_000e4b87(X86Cpu& c) {
    X86_TICK(c, 11);
    // 0e4b87  mov dl, byte ptr es:[esi + 1]
    X86_AT(c, 0xe4b87u);
    s8(c, 2, rd8((c.sbase[0] + (uint32_t)(c.r[6] + 0x1u))));
    // 0e4b8b  call 0xe4c67
    X86_AT(c, 0xe4b8bu);
    push32(c, 0xe4b90u); x86_call_known(c, 0xe4c67u, f_000e4c67); X86_RET(c, 0xe4b90u);
    X86_TICK(c, 5);
    // 0e4b90  jb 0xe4baa
    X86_AT(c, 0xe4b90u);
    if (x86_cc(c, 2)) { goto L_e4baa; }
    X86_TICK(c, 7);
    // 0e4b92  call 0xe467e
    X86_AT(c, 0xe4b92u);
    push32(c, 0xe4b97u); x86_call_known(c, 0xe467eu, f_000e467e); X86_RET(c, 0xe4b97u);
    X86_TICK(c, 7);
    // 0e4b97  call 0xe4c7a
    X86_AT(c, 0xe4b97u);
    push32(c, 0xe4b9cu); x86_call_known(c, 0xe4c7au, f_000e4c7a); X86_RET(c, 0xe4b9cu);
    X86_TICK(c, 7);
    // 0e4b9c  call 0xe5279
    X86_AT(c, 0xe4b9cu);
    push32(c, 0xe4ba1u); x86_call_known(c, 0xe5279u, f_000e5279); X86_RET(c, 0xe4ba1u);
    X86_TICK(c, 11);
    // 0e4ba1  mov al, byte ptr es:[esi + 4]
    X86_AT(c, 0xe4ba1u);
    s8(c, 0, rd8((c.sbase[0] + (uint32_t)(c.r[6] + 0x4u))));
    // 0e4ba5  call 0xe5279
    X86_AT(c, 0xe4ba5u);
    push32(c, 0xe4baau); x86_call_known(c, 0xe5279u, f_000e5279); X86_RET(c, 0xe4baau);
L_e4baa:
    X86_TICK(c, 10);
    // 0e4baa  ret 
    X86_AT(c, 0xe4baau);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe4b87u, "ran off the end of a function");
}
void f_000e4bab(X86Cpu& c) {
    X86_TICK(c, 11);
    // 0e4bab  mov dl, byte ptr es:[esi + 1]
    X86_AT(c, 0xe4babu);
    s8(c, 2, rd8((c.sbase[0] + (uint32_t)(c.r[6] + 0x1u))));
    // 0e4baf  call 0xe4c67
    X86_AT(c, 0xe4bafu);
    push32(c, 0xe4bb4u); x86_call_known(c, 0xe4c67u, f_000e4c67); X86_RET(c, 0xe4bb4u);
    X86_TICK(c, 5);
    // 0e4bb4  jb 0xe4bd7
    X86_AT(c, 0xe4bb4u);
    if (x86_cc(c, 2)) { goto L_e4bd7; }
    X86_TICK(c, 7);
    // 0e4bb6  call 0xe467e
    X86_AT(c, 0xe4bb6u);
    push32(c, 0xe4bbbu); x86_call_known(c, 0xe467eu, f_000e467e); X86_RET(c, 0xe4bbbu);
    X86_TICK(c, 7);
    // 0e4bbb  call 0xe4c7a
    X86_AT(c, 0xe4bbbu);
    push32(c, 0xe4bc0u); x86_call_known(c, 0xe4c7au, f_000e4c7a); X86_RET(c, 0xe4bc0u);
    X86_TICK(c, 7);
    // 0e4bc0  call 0xe5279
    X86_AT(c, 0xe4bc0u);
    push32(c, 0xe4bc5u); x86_call_known(c, 0xe5279u, f_000e5279); X86_RET(c, 0xe4bc5u);
    X86_TICK(c, 11);
    // 0e4bc5  mov al, byte ptr es:[esi + 4]
    X86_AT(c, 0xe4bc5u);
    s8(c, 0, rd8((c.sbase[0] + (uint32_t)(c.r[6] + 0x4u))));
    // 0e4bc9  call 0xe5279
    X86_AT(c, 0xe4bc9u);
    push32(c, 0xe4bceu); x86_call_known(c, 0xe5279u, f_000e5279); X86_RET(c, 0xe4bceu);
    X86_TICK(c, 11);
    // 0e4bce  mov al, byte ptr es:[esi + 5]
    X86_AT(c, 0xe4bceu);
    s8(c, 0, rd8((c.sbase[0] + (uint32_t)(c.r[6] + 0x5u))));
    // 0e4bd2  call 0xe5279
    X86_AT(c, 0xe4bd2u);
    push32(c, 0xe4bd7u); x86_call_known(c, 0xe5279u, f_000e5279); X86_RET(c, 0xe4bd7u);
L_e4bd7:
    X86_TICK(c, 10);
    // 0e4bd7  ret 
    X86_AT(c, 0xe4bd7u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe4babu, "ran off the end of a function");
}
void f_000e4bd8(X86Cpu& c) {
    X86_TICK(c, 11);
    // 0e4bd8  mov dl, byte ptr es:[esi + 1]
    X86_AT(c, 0xe4bd8u);
    s8(c, 2, rd8((c.sbase[0] + (uint32_t)(c.r[6] + 0x1u))));
    // 0e4bdc  call 0xe4c67
    X86_AT(c, 0xe4bdcu);
    push32(c, 0xe4be1u); x86_call_known(c, 0xe4c67u, f_000e4c67); X86_RET(c, 0xe4be1u);
    X86_TICK(c, 5);
    // 0e4be1  jae 0xe4bfd
    X86_AT(c, 0xe4be1u);
    if (x86_cc(c, 3)) { goto L_e4bfd; }
    X86_TICK(c, 7);
    // 0e4be3  call 0xe4cf5
    X86_AT(c, 0xe4be3u);
    push32(c, 0xe4be8u); x86_call_known(c, 0xe4cf5u, f_000e4cf5); X86_RET(c, 0xe4be8u);
    X86_TICK(c, 11);
    // 0e4be8  mov al, byte ptr es:[esi]
    X86_AT(c, 0xe4be8u);
    s8(c, 0, rd8((c.sbase[0] + (uint32_t)(c.r[6]))));
    // 0e4beb  cmp al, 0xfe
    X86_AT(c, 0xe4bebu);
    (void)x86_sub(c, g8(c, 0), 0xFEu, 0, 1);
    // 0e4bed  je 0xe4c65
    X86_AT(c, 0xe4bedu);
    if (x86_cc(c, 4)) { goto L_e4c65; }
    X86_TICK(c, 7);
    // 0e4bf3  cmp al, 0xfd
    X86_AT(c, 0xe4bf3u);
    (void)x86_sub(c, g8(c, 0), 0xFDu, 0, 1);
    // 0e4bf5  je 0xe4c65
    X86_AT(c, 0xe4bf5u);
    if (x86_cc(c, 4)) { goto L_e4c65; }
    X86_TICK(c, 12);
    // 0e4bfb  clc 
    X86_AT(c, 0xe4bfbu);
    c.fl &= ~X86_CF;
    // 0e4bfc  ret 
    X86_AT(c, 0xe4bfcu);
    c.eip = pop32(c); return;
L_e4bfd:
    X86_TICK(c, 7);
    // 0e4bfd  call 0xe467e
    X86_AT(c, 0xe4bfdu);
    push32(c, 0xe4c02u); x86_call_known(c, 0xe467eu, f_000e467e); X86_RET(c, 0xe4c02u);
    X86_TICK(c, 7);
    // 0e4c02  call 0xe4c7a
    X86_AT(c, 0xe4c02u);
    push32(c, 0xe4c07u); x86_call_known(c, 0xe4c7au, f_000e4c7a); X86_RET(c, 0xe4c07u);
    X86_TICK(c, 9);
    // 0e4c07  mov ch, al
    X86_AT(c, 0xe4c07u);
    s8(c, 5, g8(c, 0));
    // 0e4c09  call 0xe5279
    X86_AT(c, 0xe4c09u);
    push32(c, 0xe4c0eu); x86_call_known(c, 0xe5279u, f_000e5279); X86_RET(c, 0xe4c0eu);
    X86_TICK(c, 11);
    // 0e4c0e  mov al, byte ptr es:[esi + 4]
    X86_AT(c, 0xe4c0eu);
    s8(c, 0, rd8((c.sbase[0] + (uint32_t)(c.r[6] + 0x4u))));
    // 0e4c12  call 0xe4c97
    X86_AT(c, 0xe4c12u);
    push32(c, 0xe4c17u); x86_call_known(c, 0xe4c97u, f_000e4c97); X86_RET(c, 0xe4c17u);
    X86_TICK(c, 9);
    // 0e4c17  mov cl, al
    X86_AT(c, 0xe4c17u);
    s8(c, 1, g8(c, 0));
    // 0e4c19  call 0xe5279
    X86_AT(c, 0xe4c19u);
    push32(c, 0xe4c1eu); x86_call_known(c, 0xe5279u, f_000e5279); X86_RET(c, 0xe4c1eu);
    X86_TICK(c, 11);
    // 0e4c1e  mov al, byte ptr es:[esi + 5]
    X86_AT(c, 0xe4c1eu);
    s8(c, 0, rd8((c.sbase[0] + (uint32_t)(c.r[6] + 0x5u))));
    // 0e4c22  call 0xe4cca
    X86_AT(c, 0xe4c22u);
    push32(c, 0xe4c27u); x86_call_known(c, 0xe4ccau, f_000e4cca); X86_RET(c, 0xe4c27u);
    X86_TICK(c, 7);
    // 0e4c27  call 0xe5279
    X86_AT(c, 0xe4c27u);
    push32(c, 0xe4c2cu); x86_call_known(c, 0xe5279u, f_000e5279); X86_RET(c, 0xe4c2cu);
    X86_TICK(c, 7);
    // 0e4c2c  call 0xe4cf5
    X86_AT(c, 0xe4c2cu);
    push32(c, 0xe4c31u); x86_call_known(c, 0xe4cf5u, f_000e4cf5); X86_RET(c, 0xe4c31u);
    X86_TICK(c, 11);
    // 0e4c31  mov al, byte ptr es:[esi]
    X86_AT(c, 0xe4c31u);
    s8(c, 0, rd8((c.sbase[0] + (uint32_t)(c.r[6]))));
    // 0e4c34  cmp al, 0xfe
    X86_AT(c, 0xe4c34u);
    (void)x86_sub(c, g8(c, 0), 0xFEu, 0, 1);
    // 0e4c36  je 0xe4c65
    X86_AT(c, 0xe4c36u);
    if (x86_cc(c, 4)) { goto L_e4c65; }
    X86_TICK(c, 7);
    // 0e4c38  cmp al, 0xfd
    X86_AT(c, 0xe4c38u);
    (void)x86_sub(c, g8(c, 0), 0xFDu, 0, 1);
    // 0e4c3a  je 0xe4c65
    X86_AT(c, 0xe4c3au);
    if (x86_cc(c, 4)) { goto L_e4c65; }
    X86_TICK(c, 39);
    // 0e4c3c  push bx
    X86_AT(c, 0xe4c3cu);
    { uint32_t v = (c.r[3] & 0xFFFFu); push16(c, v); }
    // 0e4c3e  mov ax, word ptr es:[esi + 1]
    X86_AT(c, 0xe4c3eu);
    s16(c, 0, rd16((c.sbase[0] + (uint32_t)(c.r[6] + 0x1u))));
    // 0e4c43  shl al, 4
    X86_AT(c, 0xe4c43u);
    { uint32_t v = g8(c, 0); bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 1, w); if (w) s8(c, 0, r); }
    // 0e4c46  shr ax, 4
    X86_AT(c, 0xe4c46u);
    { uint32_t v = (c.r[0] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 5, v, 0x4u, 2, w); if (w) s16(c, 0, r); }
    // 0e4c4a  mov bx, word ptr es:[esi + 3]
    X86_AT(c, 0xe4c4au);
    s16(c, 3, rd16((c.sbase[0] + (uint32_t)(c.r[6] + 0x3u))));
    // 0e4c4f  shl bl, 4
    X86_AT(c, 0xe4c4fu);
    { uint32_t v = g8(c, 3); bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 1, w); if (w) s8(c, 3, r); }
    // 0e4c52  shr bx, 4
    X86_AT(c, 0xe4c52u);
    { uint32_t v = (c.r[3] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 5, v, 0x4u, 2, w); if (w) s16(c, 3, r); }
    // 0e4c56  mov ah, bl
    X86_AT(c, 0xe4c56u);
    s8(c, 4, g8(c, 3));
    // 0e4c58  pop bx
    X86_AT(c, 0xe4c58u);
    { uint32_t v = pop16(c); s16(c, 3, v); }
    // 0e4c5a  mov bh, byte ptr es:[esi + 5]
    X86_AT(c, 0xe4c5au);
    s8(c, 7, rd8((c.sbase[0] + (uint32_t)(c.r[6] + 0x5u))));
    // 0e4c5e  call 0xe4d0d
    X86_AT(c, 0xe4c5eu);
    push32(c, 0xe4c63u); x86_call_known(c, 0xe4d0du, f_000e4d0d); X86_RET(c, 0xe4c63u);
    X86_TICK(c, 12);
    // 0e4c63  clc 
    X86_AT(c, 0xe4c63u);
    c.fl &= ~X86_CF;
    // 0e4c64  ret 
    X86_AT(c, 0xe4c64u);
    c.eip = pop32(c); return;
L_e4c65:
    X86_TICK(c, 12);
    // 0e4c65  stc 
    X86_AT(c, 0xe4c65u);
    c.fl |= X86_CF;
    // 0e4c66  ret 
    X86_AT(c, 0xe4c66u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe4bd8u, "ran off the end of a function");
}
void f_000e4c67(X86Cpu& c) {
    X86_TICK(c, 17);
    // 0e4c67  push ebx
    X86_AT(c, 0xe4c67u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0e4c68  movzx ebx, dl
    X86_AT(c, 0xe4c68u);
    c.r[3] = g8(c, 2);
    // 0e4c6b  cmp byte ptr [ebx + 0xc3325], 0
    X86_AT(c, 0xe4c6bu);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xC3325u))), 0x0u, 0, 1);
    // 0e4c72  je 0xe4c77
    X86_AT(c, 0xe4c72u);
    if (x86_cc(c, 4)) { goto L_e4c77; }
    X86_TICK(c, 16);
    // 0e4c74  pop ebx
    X86_AT(c, 0xe4c74u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0e4c75  clc 
    X86_AT(c, 0xe4c75u);
    c.fl &= ~X86_CF;
    // 0e4c76  ret 
    X86_AT(c, 0xe4c76u);
    c.eip = pop32(c); return;
L_e4c77:
    X86_TICK(c, 16);
    // 0e4c77  pop ebx
    X86_AT(c, 0xe4c77u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0e4c78  stc 
    X86_AT(c, 0xe4c78u);
    c.fl |= X86_CF;
    // 0e4c79  ret 
    X86_AT(c, 0xe4c79u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe4c67u, "ran off the end of a function");
}
void f_000e4c7a(X86Cpu& c) {
    X86_TICK(c, 9);
    // 0e4c7a  push ebx
    X86_AT(c, 0xe4c7au);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0e4c7b  cmp al, 0xf0
    X86_AT(c, 0xe4c7bu);
    (void)x86_sub(c, g8(c, 0), 0xF0u, 0, 1);
    // 0e4c7d  jae 0xe4c95
    X86_AT(c, 0xe4c7du);
    if (x86_cc(c, 3)) { goto L_e4c95; }
    X86_TICK(c, 7);
    // 0e4c7f  cmp al, 0x80
    X86_AT(c, 0xe4c7fu);
    (void)x86_sub(c, g8(c, 0), 0x80u, 0, 1);
    // 0e4c81  jb 0xe4c95
    X86_AT(c, 0xe4c81u);
    if (x86_cc(c, 2)) { goto L_e4c95; }
    X86_TICK(c, 17);
    // 0e4c83  movzx ebx, dl
    X86_AT(c, 0xe4c83u);
    c.r[3] = g8(c, 2);
    // 0e4c86  lea ebx, [ebx + 0xc3365]
    X86_AT(c, 0xe4c86u);
    c.r[3] = (uint32_t)(c.r[3] + 0xC3365u);
    // 0e4c8c  cmp byte ptr [ebx], 0xf
    X86_AT(c, 0xe4c8cu);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[3]))), 0xFu, 0, 1);
    // 0e4c8f  ja 0xe4c95
    X86_AT(c, 0xe4c8fu);
    if (x86_cc(c, 7)) { goto L_e4c95; }
    X86_TICK(c, 8);
    // 0e4c91  and al, 0xf0
    X86_AT(c, 0xe4c91u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & 0xF0u, 1)); }
    // 0e4c93  or al, byte ptr [ebx]
    X86_AT(c, 0xe4c93u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v | rd8((c.sbase[3] + (uint32_t)(c.r[3]))), 1)); }
L_e4c95:
    X86_TICK(c, 14);
    // 0e4c95  pop ebx
    X86_AT(c, 0xe4c95u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0e4c96  ret 
    X86_AT(c, 0xe4c96u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe4c7au, "ran off the end of a function");
}
void f_000e4c97(X86Cpu& c) {
    X86_TICK(c, 16);
    // 0e4c97  push ebx
    X86_AT(c, 0xe4c97u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0e4c98  movzx ebx, dl
    X86_AT(c, 0xe4c98u);
    c.r[3] = g8(c, 2);
    // 0e4c9b  mov bl, byte ptr [ebx + 0xc33a5]
    X86_AT(c, 0xe4c9bu);
    s8(c, 3, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xC33A5u))));
    // 0e4ca1  or bl, bl
    X86_AT(c, 0xe4ca1u);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v | g8(c, 3), 1)); }
    // 0e4ca3  je 0xe4cc8
    X86_AT(c, 0xe4ca3u);
    if (x86_cc(c, 4)) { goto L_e4cc8; }
    X86_TICK(c, 7);
    // 0e4ca5  and ax, 0x7f
    X86_AT(c, 0xe4ca5u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_logic(c, v & 0x7Fu, 2)); }
    // 0e4ca9  movsx bx, bl
    X86_AT(c, 0xe4ca9u);
    s16(c, 3, (uint32_t)(int32_t)(int8_t)g8(c, 3));
    // 0e4cad  add ax, bx
    X86_AT(c, 0xe4cadu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
L_e4cb0:
    X86_TICK(c, 7);
    // 0e4cb0  cmp ax, 0x7f
    X86_AT(c, 0xe4cb0u);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), 0x7Fu, 0, 2);
    // 0e4cb4  jle 0xe4cbc
    X86_AT(c, 0xe4cb4u);
    if (x86_cc(c, 14)) { goto L_e4cbc; }
    X86_TICK(c, 9);
    // 0e4cb6  sub ax, 0xc
    X86_AT(c, 0xe4cb6u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_sub(c, v, 0xCu, 0, 2)); }
    // 0e4cba  jmp 0xe4cb0
    X86_AT(c, 0xe4cbau);
    X86_POLL(c, 0xe4cb0u); goto L_e4cb0;
L_e4cbc:
    X86_TICK(c, 7);
    // 0e4cbc  cmp ax, 0
    X86_AT(c, 0xe4cbcu);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), 0x0u, 0, 2);
    // 0e4cc0  jge 0xe4cc8
    X86_AT(c, 0xe4cc0u);
    if (x86_cc(c, 13)) { goto L_e4cc8; }
    X86_TICK(c, 9);
    // 0e4cc2  add ax, 0xc
    X86_AT(c, 0xe4cc2u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, 0xCu, 0, 2)); }
    // 0e4cc6  jmp 0xe4cbc
    X86_AT(c, 0xe4cc6u);
    X86_POLL(c, 0xe4cbcu); goto L_e4cbc;
L_e4cc8:
    X86_TICK(c, 14);
    // 0e4cc8  pop ebx
    X86_AT(c, 0xe4cc8u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0e4cc9  ret 
    X86_AT(c, 0xe4cc9u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe4c97u, "ran off the end of a function");
}
void f_000e4cca(X86Cpu& c) {
    X86_TICK(c, 23);
    // 0e4cca  push ebx
    X86_AT(c, 0xe4ccau);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0e4ccb  movzx ebx, dl
    X86_AT(c, 0xe4ccbu);
    c.r[3] = g8(c, 2);
    // 0e4cce  mov bl, byte ptr [ebx + 0xc3385]
    X86_AT(c, 0xe4cceu);
    s8(c, 3, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xC3385u))));
    // 0e4cd4  and ax, 0x7f
    X86_AT(c, 0xe4cd4u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_logic(c, v & 0x7Fu, 2)); }
    // 0e4cd8  movsx bx, bl
    X86_AT(c, 0xe4cd8u);
    s16(c, 3, (uint32_t)(int32_t)(int8_t)g8(c, 3));
    // 0e4cdc  add ax, bx
    X86_AT(c, 0xe4cdcu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
    // 0e4cdf  cmp ax, 0x7f
    X86_AT(c, 0xe4cdfu);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), 0x7Fu, 0, 2);
    // 0e4ce3  jg 0xe4ced
    X86_AT(c, 0xe4ce3u);
    if (x86_cc(c, 15)) { goto L_e4ced; }
    X86_TICK(c, 7);
    // 0e4ce5  cmp ax, 1
    X86_AT(c, 0xe4ce5u);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), 0x1u, 0, 2);
    // 0e4ce9  jl 0xe4cf1
    X86_AT(c, 0xe4ce9u);
    if (x86_cc(c, 12)) { goto L_e4cf1; }
    X86_TICK(c, 7);
    // 0e4ceb  jmp 0xe4cf3
    X86_AT(c, 0xe4cebu);
    goto L_e4cf3;
L_e4ced:
    X86_TICK(c, 9);
    // 0e4ced  mov al, 0x7f
    X86_AT(c, 0xe4cedu);
    s8(c, 0, 0x7Fu);
    // 0e4cef  jmp 0xe4cf3
    X86_AT(c, 0xe4cefu);
    goto L_e4cf3;
L_e4cf1:
    X86_TICK(c, 2);
    // 0e4cf1  mov al, 1
    X86_AT(c, 0xe4cf1u);
    s8(c, 0, 0x1u);
L_e4cf3:
    X86_TICK(c, 14);
    // 0e4cf3  pop ebx
    X86_AT(c, 0xe4cf3u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0e4cf4  ret 
    X86_AT(c, 0xe4cf4u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe4ccau, "ran off the end of a function");
}
void f_000e4cf5(X86Cpu& c) {
    X86_TICK(c, 13);
    // 0e4cf5  add esi, 6
    X86_AT(c, 0xe4cf5u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x6u, 0, 4); }
    // 0e4cf8  cmp esi, dword ptr [0xc32ed]
    X86_AT(c, 0xe4cf8u);
    (void)x86_sub(c, c.r[6], rd32((c.sbase[3] + (uint32_t)(0xC32EDu))), 0, 4);
    // 0e4cfe  jb 0xe4d06
    X86_AT(c, 0xe4cfeu);
    if (x86_cc(c, 2)) { goto L_e4d06; }
    X86_TICK(c, 4);
    // 0e4d00  mov esi, dword ptr [0xc32e7]
    X86_AT(c, 0xe4d00u);
    c.r[6] = rd32((c.sbase[3] + (uint32_t)(0xC32E7u)));
L_e4d06:
    X86_TICK(c, 12);
    // 0e4d06  mov dword ptr [0xc32e1], esi
    X86_AT(c, 0xe4d06u);
    wr32((c.sbase[3] + (uint32_t)(0xC32E1u)), c.r[6]);
    // 0e4d0c  ret 
    X86_AT(c, 0xe4d0cu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe4cf5u, "ran off the end of a function");
}
void f_000e4d0d(X86Cpu& c) {
    X86_TICK(c, 8);
    // 0e4d0d  push edi
    X86_AT(c, 0xe4d0du);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e4d0e  push ecx
    X86_AT(c, 0xe4d0eu);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 0e4d0f  mov ecx, 0x40
    X86_AT(c, 0xe4d0fu);
    c.r[1] = 0x40u;
    // 0e4d14  lea edi, [0xc33c5]
    X86_AT(c, 0xe4d14u);
    c.r[7] = (uint32_t)(0xC33C5u);
L_e4d1a:
    X86_TICK(c, 12);
    // 0e4d1a  cmp byte ptr [edi], 0
    X86_AT(c, 0xe4d1au);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[7]))), 0x0u, 0, 1);
    // 0e4d1d  je 0xe4d2c
    X86_AT(c, 0xe4d1du);
    if (x86_cc(c, 4)) { goto L_e4d2c; }
    X86_TICK(c, 13);
    // 0e4d1f  add edi, 6
    X86_AT(c, 0xe4d1fu);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x6u, 0, 4); }
    // 0e4d22  loop 0xe4d1a
    X86_AT(c, 0xe4d22u);
    c.r[1] -= 1; if (c.r[1] != 0) { X86_POLL(c, 0xe4d1au); goto L_e4d1a; }
    X86_TICK(c, 11);
    // 0e4d24  pop ecx
    X86_AT(c, 0xe4d24u);
    { uint32_t v = pop32(c); c.r[1] = v; }
    // 0e4d25  call 0xe4e03
    X86_AT(c, 0xe4d25u);
    push32(c, 0xe4d2au); x86_call_known(c, 0xe4e03u, f_000e4e03); X86_RET(c, 0xe4d2au);
    X86_TICK(c, 14);
    // 0e4d2a  pop edi
    X86_AT(c, 0xe4d2au);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0e4d2b  ret 
    X86_AT(c, 0xe4d2bu);
    c.eip = pop32(c); return;
L_e4d2c:
    X86_TICK(c, 19);
    // 0e4d2c  pop ecx
    X86_AT(c, 0xe4d2cu);
    { uint32_t v = pop32(c); c.r[1] = v; }
    // 0e4d2d  mov byte ptr [edi], ch
    X86_AT(c, 0xe4d2du);
    wr8((c.sbase[3] + (uint32_t)(c.r[7])), g8(c, 5));
    // 0e4d2f  mov byte ptr [edi + 1], bl
    X86_AT(c, 0xe4d2fu);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0x1u)), g8(c, 3));
    // 0e4d32  mov byte ptr [edi + 2], cl
    X86_AT(c, 0xe4d32u);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0x2u)), g8(c, 1));
    // 0e4d35  mov byte ptr [edi + 3], bh
    X86_AT(c, 0xe4d35u);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0x3u)), g8(c, 7));
    // 0e4d38  or ax, ax
    X86_AT(c, 0xe4d38u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_logic(c, v | (c.r[0] & 0xFFFFu), 2)); }
    // 0e4d3b  jne 0xe4d3f
    X86_AT(c, 0xe4d3bu);
    if (x86_cc(c, 5)) { goto L_e4d3f; }
    X86_TICK(c, 2);
    // 0e4d3d  inc ax
    X86_AT(c, 0xe4d3du);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_inc(c, v, 2)); }
L_e4d3f:
    X86_TICK(c, 22);
    // 0e4d3f  mov word ptr [edi + 4], ax
    X86_AT(c, 0xe4d3fu);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x4u)), (c.r[0] & 0xFFFFu));
    // 0e4d43  inc word ptr [0xc3310]
    X86_AT(c, 0xe4d43u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xC3310u)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
    // 0e4d4a  pop edi
    X86_AT(c, 0xe4d4au);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0e4d4b  ret 
    X86_AT(c, 0xe4d4bu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe4d0du, "ran off the end of a function");
}
void f_000e4d4c(X86Cpu& c) {
    X86_TICK(c, 11);
    // 0e4d4c  mov dl, byte ptr es:[esi + 1]
    X86_AT(c, 0xe4d4cu);
    s8(c, 2, rd8((c.sbase[0] + (uint32_t)(c.r[6] + 0x1u))));
    // 0e4d50  call 0xe467e
    X86_AT(c, 0xe4d50u);
    push32(c, 0xe4d55u); x86_call_known(c, 0xe467eu, f_000e467e); X86_RET(c, 0xe4d55u);
    X86_TICK(c, 9);
    // 0e4d55  mov al, 0xf0
    X86_AT(c, 0xe4d55u);
    s8(c, 0, 0xF0u);
    // 0e4d57  call 0xe5279
    X86_AT(c, 0xe4d57u);
    push32(c, 0xe4d5cu); x86_call_known(c, 0xe5279u, f_000e5279); X86_RET(c, 0xe4d5cu);
    X86_TICK(c, 7);
    // 0e4d5c  call 0xe4cf5
    X86_AT(c, 0xe4d5cu);
    push32(c, 0xe4d61u); x86_call_known(c, 0xe4cf5u, f_000e4cf5); X86_RET(c, 0xe4d61u);
L_e4d61:
    X86_TICK(c, 4);
    // 0e4d61  push esi
    X86_AT(c, 0xe4d61u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0e4d62  mov ecx, 6
    X86_AT(c, 0xe4d62u);
    c.r[1] = 0x6u;
L_e4d67:
    X86_TICK(c, 11);
    // 0e4d67  mov al, byte ptr es:[esi]
    X86_AT(c, 0xe4d67u);
    s8(c, 0, rd8((c.sbase[0] + (uint32_t)(c.r[6]))));
    // 0e4d6a  cmp al, 0xff
    X86_AT(c, 0xe4d6au);
    (void)x86_sub(c, g8(c, 0), 0xFFu, 0, 1);
    // 0e4d6c  je 0xe4d77
    X86_AT(c, 0xe4d6cu);
    if (x86_cc(c, 4)) { goto L_e4d77; }
    X86_TICK(c, 7);
    // 0e4d6e  call 0xe5279
    X86_AT(c, 0xe4d6eu);
    push32(c, 0xe4d73u); x86_call_known(c, 0xe5279u, f_000e5279); X86_RET(c, 0xe4d73u);
    X86_TICK(c, 7);
    // 0e4d73  cmp al, 0x80
    X86_AT(c, 0xe4d73u);
    (void)x86_sub(c, g8(c, 0), 0x80u, 0, 1);
    // 0e4d75  jae 0xe4d87
    X86_AT(c, 0xe4d75u);
    if (x86_cc(c, 3)) { goto L_e4d87; }
L_e4d77:
    X86_TICK(c, 13);
    // 0e4d77  inc esi
    X86_AT(c, 0xe4d77u);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 0e4d78  loop 0xe4d67
    X86_AT(c, 0xe4d78u);
    c.r[1] -= 1; if (c.r[1] != 0) { X86_POLL(c, 0xe4d67u); goto L_e4d67; }
    X86_TICK(c, 11);
    // 0e4d7a  pop esi
    X86_AT(c, 0xe4d7au);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0e4d7b  call 0xe4cf5
    X86_AT(c, 0xe4d7bu);
    push32(c, 0xe4d80u); x86_call_known(c, 0xe4cf5u, f_000e4cf5); X86_RET(c, 0xe4d80u);
    X86_TICK(c, 7);
    // 0e4d80  call 0xe4d8a
    X86_AT(c, 0xe4d80u);
    push32(c, 0xe4d85u); x86_call_known(c, 0xe4d8au, f_000e4d8a); X86_RET(c, 0xe4d85u);
    X86_TICK(c, 7);
    // 0e4d85  jmp 0xe4d61
    X86_AT(c, 0xe4d85u);
    X86_POLL(c, 0xe4d61u); goto L_e4d61;
L_e4d87:
    X86_TICK(c, 16);
    // 0e4d87  pop esi
    X86_AT(c, 0xe4d87u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0e4d88  clc 
    X86_AT(c, 0xe4d88u);
    c.fl &= ~X86_CF;
    // 0e4d89  ret 
    X86_AT(c, 0xe4d89u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe4d4cu, "ran off the end of a function");
}
void f_000e4d8a(X86Cpu& c) {
    X86_TICK(c, 20);
    // 0e4d8a  pushal 
    X86_AT(c, 0xe4d8au);
    { uint32_t sp = c.r[4]; for (int k = 0; k < 8; ++k) push32(c, k == 4 ? sp : c.r[k]); }
    // 0e4d8b  mov ecx, 0x19
    X86_AT(c, 0xe4d8bu);
    c.r[1] = 0x19u;
L_e4d90:
    X86_TICK(c, 13);
    // 0e4d90  nop 
    X86_AT(c, 0xe4d90u);
    // 0e4d91  loop 0xe4d90
    X86_AT(c, 0xe4d91u);
    c.r[1] -= 1; if (c.r[1] != 0) { X86_POLL(c, 0xe4d90u); goto L_e4d90; }
    X86_TICK(c, 34);
    // 0e4d93  popal 
    X86_AT(c, 0xe4d93u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 0e4d94  ret 
    X86_AT(c, 0xe4d94u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe4d8au, "ran off the end of a function");
}
void f_000e4d95(X86Cpu& c) {
    X86_TICK(c, 12);
    // 0e4d95  clc 
    X86_AT(c, 0xe4d95u);
    c.fl &= ~X86_CF;
    // 0e4d96  ret 
    X86_AT(c, 0xe4d96u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe4d95u, "ran off the end of a function");
}
void f_000e4d97(X86Cpu& c) {
    X86_TICK(c, 12);
    // 0e4d97  clc 
    X86_AT(c, 0xe4d97u);
    c.fl &= ~X86_CF;
    // 0e4d98  ret 
    X86_AT(c, 0xe4d98u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe4d97u, "ran off the end of a function");
}
void f_000e4d99(X86Cpu& c) {
    X86_TICK(c, 24);
    // 0e4d99  inc word ptr [0xc3302]
    X86_AT(c, 0xe4d99u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xC3302u)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
    // 0e4da0  mov al, byte ptr es:[esi + 1]
    X86_AT(c, 0xe4da0u);
    s8(c, 0, rd8((c.sbase[0] + (uint32_t)(c.r[6] + 0x1u))));
    // 0e4da4  mov byte ptr [0xc32f8], al
    X86_AT(c, 0xe4da4u);
    wr8((c.sbase[3] + (uint32_t)(0xC32F8u)), g8(c, 0));
    // 0e4da9  clc 
    X86_AT(c, 0xe4da9u);
    c.fl &= ~X86_CF;
    // 0e4daa  ret 
    X86_AT(c, 0xe4daau);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe4d99u, "ran off the end of a function");
}
void f_000e4dab(X86Cpu& c) {
    X86_TICK(c, 19);
    // 0e4dab  mov ax, word ptr es:[esi + 4]
    X86_AT(c, 0xe4dabu);
    s16(c, 0, rd16((c.sbase[0] + (uint32_t)(c.r[6] + 0x4u))));
    // 0e4db0  shl al, 1
    X86_AT(c, 0xe4db0u);
    { uint32_t v = g8(c, 0); bool w; uint32_t r = x86_shift(c, 4, v, 0x1u, 1, w); if (w) s8(c, 0, r); }
    // 0e4db2  shr ax, 1
    X86_AT(c, 0xe4db2u);
    { uint32_t v = (c.r[0] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 2, w); if (w) s16(c, 0, r); }
    // 0e4db5  mov byte ptr [0xc32f9], al
    X86_AT(c, 0xe4db5u);
    wr8((c.sbase[3] + (uint32_t)(0xC32F9u)), g8(c, 0));
    // 0e4dba  call 0xe57af
    X86_AT(c, 0xe4dbau);
    push32(c, 0xe4dbfu); x86_call_known(c, 0xe57afu, f_000e57af); X86_RET(c, 0xe4dbfu);
    X86_TICK(c, 12);
    // 0e4dbf  clc 
    X86_AT(c, 0xe4dbfu);
    c.fl &= ~X86_CF;
    // 0e4dc0  ret 
    X86_AT(c, 0xe4dc0u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe4dabu, "ran off the end of a function");
}
void f_000e4dc1(X86Cpu& c) {
    X86_TICK(c, 13);
    // 0e4dc1  movzx ecx, word ptr [0xc3310]
    X86_AT(c, 0xe4dc1u);
    c.r[1] = rd16((c.sbase[3] + (uint32_t)(0xC3310u)));
    // 0e4dc8  or ecx, ecx
    X86_AT(c, 0xe4dc8u);
    { uint32_t v = c.r[1]; c.r[1] = x86_logic(c, v | c.r[1], 4); }
    // 0e4dca  je 0xe4e02
    X86_AT(c, 0xe4dcau);
    if (x86_cc(c, 4)) { goto L_e4e02; }
    X86_TICK(c, 2);
    // 0e4dcc  lea edi, [0xc33c5]
    X86_AT(c, 0xe4dccu);
    c.r[7] = (uint32_t)(0xC33C5u);
L_e4dd2:
    X86_TICK(c, 12);
    // 0e4dd2  cmp byte ptr [edi], 0
    X86_AT(c, 0xe4dd2u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[7]))), 0x0u, 0, 1);
    // 0e4dd5  jne 0xe4ddc
    X86_AT(c, 0xe4dd5u);
    if (x86_cc(c, 5)) { goto L_e4ddc; }
    X86_TICK(c, 9);
    // 0e4dd7  add edi, 6
    X86_AT(c, 0xe4dd7u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x6u, 0, 4); }
    // 0e4dda  jmp 0xe4dd2
    X86_AT(c, 0xe4ddau);
    X86_POLL(c, 0xe4dd2u); goto L_e4dd2;
L_e4ddc:
    X86_TICK(c, 11);
    // 0e4ddc  dec word ptr [edi + 4]
    X86_AT(c, 0xe4ddcu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x4u)); uint32_t v = rd16(ea); wr16(ea, x86_dec(c, v, 2)); }
    // 0e4de0  jne 0xe4dfd
    X86_AT(c, 0xe4de0u);
    if (x86_cc(c, 5)) { goto L_e4dfd; }
    X86_TICK(c, 28);
    // 0e4de2  push ecx
    X86_AT(c, 0xe4de2u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 0e4de3  xor ch, ch
    X86_AT(c, 0xe4de3u);
    { uint32_t v = g8(c, 5); s8(c, 5, x86_logic(c, v ^ g8(c, 5), 1)); }
    // 0e4de5  xchg byte ptr [edi], ch
    X86_AT(c, 0xe4de5u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7])); uint32_t t = rd8(ea); wr8(ea, g8(c, 5)); s8(c, 5, t); }
    // 0e4de7  mov bl, byte ptr [edi + 1]
    X86_AT(c, 0xe4de7u);
    s8(c, 3, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x1u))));
    // 0e4dea  mov cl, byte ptr [edi + 2]
    X86_AT(c, 0xe4deau);
    s8(c, 1, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x2u))));
    // 0e4ded  mov bh, byte ptr [edi + 3]
    X86_AT(c, 0xe4dedu);
    s8(c, 7, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x3u))));
    // 0e4df0  call 0xe4e03
    X86_AT(c, 0xe4df0u);
    push32(c, 0xe4df5u); x86_call_known(c, 0xe4e03u, f_000e4e03); X86_RET(c, 0xe4df5u);
    X86_TICK(c, 10);
    // 0e4df5  dec word ptr [0xc3310]
    X86_AT(c, 0xe4df5u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xC3310u)); uint32_t v = rd16(ea); wr16(ea, x86_dec(c, v, 2)); }
    // 0e4dfc  pop ecx
    X86_AT(c, 0xe4dfcu);
    { uint32_t v = pop32(c); c.r[1] = v; }
L_e4dfd:
    X86_TICK(c, 13);
    // 0e4dfd  add edi, 6
    X86_AT(c, 0xe4dfdu);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x6u, 0, 4); }
    // 0e4e00  loop 0xe4dd2
    X86_AT(c, 0xe4e00u);
    c.r[1] -= 1; if (c.r[1] != 0) { X86_POLL(c, 0xe4dd2u); goto L_e4dd2; }
L_e4e02:
    X86_TICK(c, 10);
    // 0e4e02  ret 
    X86_AT(c, 0xe4e02u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe4dc1u, "ran off the end of a function");
}
void f_000e4e03(X86Cpu& c) {
    X86_TICK(c, 9);
    // 0e4e03  push eax
    X86_AT(c, 0xe4e03u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e4e04  or bh, bh
    X86_AT(c, 0xe4e04u);
    { uint32_t v = g8(c, 7); s8(c, 7, x86_logic(c, v | g8(c, 7), 1)); }
    // 0e4e06  je 0xe4e0b
    X86_AT(c, 0xe4e06u);
    if (x86_cc(c, 4)) { goto L_e4e0b; }
    X86_TICK(c, 2);
    // 0e4e08  and ch, 0x8f
    X86_AT(c, 0xe4e08u);
    { uint32_t v = g8(c, 5); s8(c, 5, x86_logic(c, v & 0x8Fu, 1)); }
L_e4e0b:
    X86_TICK(c, 9);
    // 0e4e0b  mov al, ch
    X86_AT(c, 0xe4e0bu);
    s8(c, 0, g8(c, 5));
    // 0e4e0d  call 0xe5279
    X86_AT(c, 0xe4e0du);
    push32(c, 0xe4e12u); x86_call_known(c, 0xe5279u, f_000e5279); X86_RET(c, 0xe4e12u);
    X86_TICK(c, 9);
    // 0e4e12  mov al, cl
    X86_AT(c, 0xe4e12u);
    s8(c, 0, g8(c, 1));
    // 0e4e14  call 0xe5279
    X86_AT(c, 0xe4e14u);
    push32(c, 0xe4e19u); x86_call_known(c, 0xe5279u, f_000e5279); X86_RET(c, 0xe4e19u);
    X86_TICK(c, 9);
    // 0e4e19  mov al, bh
    X86_AT(c, 0xe4e19u);
    s8(c, 0, g8(c, 7));
    // 0e4e1b  call 0xe5279
    X86_AT(c, 0xe4e1bu);
    push32(c, 0xe4e20u); x86_call_known(c, 0xe5279u, f_000e5279); X86_RET(c, 0xe4e20u);
    X86_TICK(c, 14);
    // 0e4e20  pop eax
    X86_AT(c, 0xe4e20u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 0e4e21  ret 
    X86_AT(c, 0xe4e21u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe4e03u, "ran off the end of a function");
}
void f_000e5226(X86Cpu& c) {
    X86_TICK(c, 25);
    // 0e5226  cld 
    X86_AT(c, 0xe5226u);
    c.fl &= ~X86_DF;
    // 0e5227  push esi
    X86_AT(c, 0xe5227u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0e5228  push ebx
    X86_AT(c, 0xe5228u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0e5229  and ebx, 7
    X86_AT(c, 0xe5229u);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & 0x7u, 4); }
    // 0e522c  shl ebx, 5
    X86_AT(c, 0xe522cu);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[3] = r; }
    // 0e522f  lea ebx, [ebx + 0xc3675]
    X86_AT(c, 0xe522fu);
    c.r[3] = (uint32_t)(c.r[3] + 0xC3675u);
    // 0e5235  cmp word ptr [ebx + 0x10], 0
    X86_AT(c, 0xe5235u);
    (void)x86_sub(c, rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u))), 0x0u, 0, 2);
    // 0e523a  je 0xe5255
    X86_AT(c, 0xe523au);
    if (x86_cc(c, 4)) { goto L_e5255; }
    X86_TICK(c, 28);
    // 0e523c  mov esi, dword ptr [ebx + 0xc]
    X86_AT(c, 0xe523cu);
    c.r[6] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0xCu)));
    // 0e523f  lodsb al, byte ptr [esi]
    X86_AT(c, 0xe523fu);
    x86_string(c, 3, 1, 0, 4, 3);
    // 0e5240  dec word ptr [ebx + 0x10]
    X86_AT(c, 0xe5240u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3] + 0x10u)); uint32_t v = rd16(ea); wr16(ea, x86_dec(c, v, 2)); }
    // 0e5244  cmp esi, dword ptr [ebx + 4]
    X86_AT(c, 0xe5244u);
    (void)x86_sub(c, c.r[6], rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u))), 0, 4);
    // 0e5247  jne 0xe524b
    X86_AT(c, 0xe5247u);
    if (x86_cc(c, 5)) { goto L_e524b; }
    X86_TICK(c, 4);
    // 0e5249  mov esi, dword ptr [ebx]
    X86_AT(c, 0xe5249u);
    c.r[6] = rd32((c.sbase[3] + (uint32_t)(c.r[3])));
L_e524b:
    X86_TICK(c, 16);
    // 0e524b  mov dword ptr [ebx + 0xc], esi
    X86_AT(c, 0xe524bu);
    wr32((c.sbase[3] + (uint32_t)(c.r[3] + 0xCu)), c.r[6]);
    // 0e524e  xor ah, ah
    X86_AT(c, 0xe524eu);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_logic(c, v ^ g8(c, 4), 1)); }
    // 0e5250  xchg byte ptr [ebx + 0x19], ah
    X86_AT(c, 0xe5250u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3] + 0x19u)); uint32_t t = rd8(ea); wr8(ea, g8(c, 4)); s8(c, 4, t); }
    // 0e5253  jmp 0xe5257
    X86_AT(c, 0xe5253u);
    goto L_e5257;
L_e5255:
    X86_TICK(c, 2);
    // 0e5255  mov ah, 1
    X86_AT(c, 0xe5255u);
    s8(c, 4, 0x1u);
L_e5257:
    X86_TICK(c, 7);
    // 0e5257  cmp ah, 1
    X86_AT(c, 0xe5257u);
    (void)x86_sub(c, g8(c, 4), 0x1u, 0, 1);
    // 0e525a  jbe 0xe5262
    X86_AT(c, 0xe525au);
    if (x86_cc(c, 6)) { goto L_e5262; }
    X86_TICK(c, 2);
    // 0e525c  mov byte ptr [0xc32e0], ah
    X86_AT(c, 0xe525cu);
    wr8((c.sbase[3] + (uint32_t)(0xC32E0u)), g8(c, 4));
L_e5262:
    X86_TICK(c, 18);
    // 0e5262  pop ebx
    X86_AT(c, 0xe5262u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0e5263  pop esi
    X86_AT(c, 0xe5263u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0e5264  ret 
    X86_AT(c, 0xe5264u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe5226u, "ran off the end of a function");
}
void f_000e5279(X86Cpu& c) {
    X86_TICK(c, 13);
    // 0e5279  push eax
    X86_AT(c, 0xe5279u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e527a  push ebx
    X86_AT(c, 0xe527au);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0e527b  push edi
    X86_AT(c, 0xe527bu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e527c  cmp bl, 0xff
    X86_AT(c, 0xe527cu);
    (void)x86_sub(c, g8(c, 3), 0xFFu, 0, 1);
    // 0e527f  je 0xe52fe
    X86_AT(c, 0xe527fu);
    if (x86_cc(c, 4)) { goto L_e52fe; }
    X86_TICK(c, 19);
    // 0e5285  and ebx, 7
    X86_AT(c, 0xe5285u);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & 0x7u, 4); }
    // 0e5288  shl ebx, 5
    X86_AT(c, 0xe5288u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[3] = r; }
    // 0e528b  lea ebx, [ebx + 0xc3575]
    X86_AT(c, 0xe528bu);
    c.r[3] = (uint32_t)(c.r[3] + 0xC3575u);
    // 0e5291  cmp byte ptr [ebx + 0x18], 0
    X86_AT(c, 0xe5291u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0x18u))), 0x0u, 0, 1);
    // 0e5295  je 0xe5309
    X86_AT(c, 0xe5295u);
    if (x86_cc(c, 4)) { goto L_e5309; }
    X86_TICK(c, 7);
    // 0e529b  cmp al, 0x80
    X86_AT(c, 0xe529bu);
    (void)x86_sub(c, g8(c, 0), 0x80u, 0, 1);
    // 0e529d  jb 0xe52b3
    X86_AT(c, 0xe529du);
    if (x86_cc(c, 2)) { goto L_e52b3; }
    X86_TICK(c, 7);
    // 0e529f  cmp al, 0xf8
    X86_AT(c, 0xe529fu);
    (void)x86_sub(c, g8(c, 0), 0xF8u, 0, 1);
    // 0e52a1  jae 0xe52b3
    X86_AT(c, 0xe52a1u);
    if (x86_cc(c, 3)) { goto L_e52b3; }
    X86_TICK(c, 7);
    // 0e52a3  cmp al, 0xf0
    X86_AT(c, 0xe52a3u);
    (void)x86_sub(c, g8(c, 0), 0xF0u, 0, 1);
    // 0e52a5  jae 0xe52b0
    X86_AT(c, 0xe52a5u);
    if (x86_cc(c, 3)) { goto L_e52b0; }
    X86_TICK(c, 11);
    // 0e52a7  cmp al, byte ptr [ebx + 0x1b]
    X86_AT(c, 0xe52a7u);
    (void)x86_sub(c, g8(c, 0), rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0x1Bu))), 0, 1);
    // 0e52aa  je 0xe5303
    X86_AT(c, 0xe52aau);
    if (x86_cc(c, 4)) { goto L_e5303; }
L_e52b0:
    X86_TICK(c, 2);
    // 0e52b0  mov byte ptr [ebx + 0x1b], al
    X86_AT(c, 0xe52b0u);
    wr8((c.sbase[3] + (uint32_t)(c.r[3] + 0x1Bu)), g8(c, 0));
L_e52b3:
    X86_TICK(c, 16);
    // 0e52b3  mov edi, dword ptr [ebx + 8]
    X86_AT(c, 0xe52b3u);
    c.r[7] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x8u)));
    // 0e52b6  cmp word ptr [ebx + 0x10], 0x10
    X86_AT(c, 0xe52b6u);
    (void)x86_sub(c, rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u))), 0x10u, 0, 2);
    // 0e52bb  je 0xe52b3
    X86_AT(c, 0xe52bbu);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xe52b3u); goto L_e52b3; }
    X86_TICK(c, 24);
    // 0e52bd  mov byte ptr [edi], al
    X86_AT(c, 0xe52bdu);
    wr8((c.sbase[3] + (uint32_t)(c.r[7])), g8(c, 0));
    // 0e52bf  inc edi
    X86_AT(c, 0xe52bfu);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0e52c0  pushf 
    X86_AT(c, 0xe52c0u);
    push16(c, c.fl & 0xFFFFu);
    // 0e52c2  cli 
    X86_AT(c, 0xe52c2u);
    c.fl &= ~X86_IF;
    // 0e52c3  cmp word ptr [ebx + 0x10], 0
    X86_AT(c, 0xe52c3u);
    (void)x86_sub(c, rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u))), 0x0u, 0, 2);
    // 0e52c8  jne 0xe52e5
    X86_AT(c, 0xe52c8u);
    if (x86_cc(c, 5)) { goto L_e52e5; }
    X86_TICK(c, 32);
    // 0e52ce  mov al, byte ptr [ebx + 0x1a]
    X86_AT(c, 0xe52ceu);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0x1Au))));
    // 0e52d1  or al, byte ptr [0xc3545]
    X86_AT(c, 0xe52d1u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v | rd8((c.sbase[3] + (uint32_t)(0xC3545u))), 1)); }
    // 0e52d7  mov byte ptr [0xc3545], al
    X86_AT(c, 0xe52d7u);
    wr8((c.sbase[3] + (uint32_t)(0xC3545u)), g8(c, 0));
    // 0e52dc  push dx
    X86_AT(c, 0xe52dcu);
    { uint32_t v = (c.r[2] & 0xFFFFu); push16(c, v); }
    // 0e52de  mov dx, 0xe70
    X86_AT(c, 0xe52deu);
    s16(c, 2, 0xE70u);
    // 0e52e2  out dx, al
    X86_AT(c, 0xe52e2u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 0e52e3  pop dx
    X86_AT(c, 0xe52e3u);
    { uint32_t v = pop16(c); s16(c, 2, v); }
L_e52e5:
    X86_TICK(c, 23);
    // 0e52e5  inc word ptr [ebx + 0x10]
    X86_AT(c, 0xe52e5u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3] + 0x10u)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
    // 0e52e9  popf 
    X86_AT(c, 0xe52e9u);
    x86_popfd(c, 2);
    // 0e52eb  cmp edi, dword ptr [ebx + 4]
    X86_AT(c, 0xe52ebu);
    (void)x86_sub(c, c.r[7], rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u))), 0, 4);
    // 0e52ee  jne 0xe52f6
    X86_AT(c, 0xe52eeu);
    if (x86_cc(c, 5)) { goto L_e52f6; }
    X86_TICK(c, 4);
    // 0e52f4  mov edi, dword ptr [ebx]
    X86_AT(c, 0xe52f4u);
    c.r[7] = rd32((c.sbase[3] + (uint32_t)(c.r[3])));
L_e52f6:
    X86_TICK(c, 9);
    // 0e52f6  mov dword ptr [ebx + 8], edi
    X86_AT(c, 0xe52f6u);
    wr32((c.sbase[3] + (uint32_t)(c.r[3] + 0x8u)), c.r[7]);
    // 0e52f9  jmp 0xe5303
    X86_AT(c, 0xe52f9u);
    goto L_e5303;
L_e52fe:
    X86_TICK(c, 7);
    // 0e52fe  call 0xe5cf4
    X86_AT(c, 0xe52feu);
    push32(c, 0xe5303u); x86_call_known(c, 0xe5cf4u, f_000e5cf4); X86_RET(c, 0xe5303u);
L_e5303:
    X86_TICK(c, 24);
    // 0e5303  pop edi
    X86_AT(c, 0xe5303u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0e5304  pop ebx
    X86_AT(c, 0xe5304u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0e5305  pop eax
    X86_AT(c, 0xe5305u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 0e5306  xor ah, ah
    X86_AT(c, 0xe5306u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_logic(c, v ^ g8(c, 4), 1)); }
    // 0e5308  ret 
    X86_AT(c, 0xe5308u);
    c.eip = pop32(c); return;
L_e5309:
    X86_TICK(c, 24);
    // 0e5309  pop edi
    X86_AT(c, 0xe5309u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0e530a  pop ebx
    X86_AT(c, 0xe530au);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0e530b  pop eax
    X86_AT(c, 0xe530bu);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 0e530c  mov ah, 0xf0
    X86_AT(c, 0xe530cu);
    s8(c, 4, 0xF0u);
    // 0e530e  ret 
    X86_AT(c, 0xe530eu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe5279u, "ran off the end of a function");
}
void f_000e530f(X86Cpu& c) {
    X86_TICK(c, 13);
    // 0e530f  push ebx
    X86_AT(c, 0xe530fu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0e5310  mov bl, byte ptr [0xc3312]
    X86_AT(c, 0xe5310u);
    s8(c, 3, rd8((c.sbase[3] + (uint32_t)(0xC3312u))));
    // 0e5316  cmp bl, 8
    X86_AT(c, 0xe5316u);
    (void)x86_sub(c, g8(c, 3), 0x8u, 0, 1);
    // 0e5319  jae 0xe5320
    X86_AT(c, 0xe5319u);
    if (x86_cc(c, 3)) { goto L_e5320; }
    X86_TICK(c, 7);
    // 0e531b  call 0xe5279
    X86_AT(c, 0xe531bu);
    push32(c, 0xe5320u); x86_call_known(c, 0xe5279u, f_000e5279); X86_RET(c, 0xe5320u);
L_e5320:
    X86_TICK(c, 14);
    // 0e5320  pop ebx
    X86_AT(c, 0xe5320u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0e5321  ret 
    X86_AT(c, 0xe5321u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe530fu, "ran off the end of a function");
}
void f_000e5322(X86Cpu& c) {
    X86_TICK(c, 49);
    // 0e5322  pushfd 
    X86_AT(c, 0xe5322u);
    push32(c, c.fl & 0x00FCFFFFu);
    // 0e5323  cli 
    X86_AT(c, 0xe5323u);
    c.fl &= ~X86_IF;
    // 0e5324  mov cl, 0x44
    X86_AT(c, 0xe5324u);
    s8(c, 1, 0x44u);
    // 0e5326  mov ax, 0x2502
    X86_AT(c, 0xe5326u);
    s16(c, 0, 0x2502u);
    // 0e532a  int 0x21
    X86_AT(c, 0xe532au);
    x86_int(c, 0x21, 0xe532cu);
    X86_TICK(c, 5);
    // 0e532c  jb 0xe53ae
    X86_AT(c, 0xe532cu);
    if (x86_cc(c, 2)) { goto L_e53ae; }
    X86_TICK(c, 9);
    // 0e5332  lea edx, [0xe584f]
    X86_AT(c, 0xe5332u);
    c.r[2] = (uint32_t)(0xE584Fu);
    // 0e5338  cmp ebx, edx
    X86_AT(c, 0xe5338u);
    (void)x86_sub(c, c.r[3], c.r[2], 0, 4);
    // 0e533a  je 0xe53ae
    X86_AT(c, 0xe533au);
    if (x86_cc(c, 4)) { goto L_e53ae; }
    X86_TICK(c, 47);
    // 0e5340  mov eax, es
    X86_AT(c, 0xe5340u);
    c.r[0] = (uint32_t)c.sreg[0];
    // 0e5342  mov dword ptr [0xc354a], ebx
    X86_AT(c, 0xe5342u);
    wr32((c.sbase[3] + (uint32_t)(0xC354Au)), c.r[3]);
    // 0e5348  mov word ptr [0xc354e], ax
    X86_AT(c, 0xe5348u);
    wr16((c.sbase[3] + (uint32_t)(0xC354Eu)), (c.r[0] & 0xFFFFu));
    // 0e534e  mov cl, 0x44
    X86_AT(c, 0xe534eu);
    s8(c, 1, 0x44u);
    // 0e5350  mov ax, 0x2503
    X86_AT(c, 0xe5350u);
    s16(c, 0, 0x2503u);
    // 0e5354  int 0x21
    X86_AT(c, 0xe5354u);
    x86_int(c, 0x21, 0xe5356u);
    X86_TICK(c, 5);
    // 0e5356  jb 0xe53ae
    X86_AT(c, 0xe5356u);
    if (x86_cc(c, 2)) { goto L_e53ae; }
    X86_TICK(c, 51);
    // 0e535c  mov dword ptr [0xc3550], ebx
    X86_AT(c, 0xe535cu);
    wr32((c.sbase[3] + (uint32_t)(0xC3550u)), c.r[3]);
    // 0e5362  push ds
    X86_AT(c, 0xe5362u);
    push32(c, c.sreg[3]);
    // 0e5363  mov eax, cs
    X86_AT(c, 0xe5363u);
    c.r[0] = (uint32_t)c.sreg[1];
    // 0e5365  mov ds, eax
    X86_AT(c, 0xe5365u);
    x86_load_seg(c, 3, (c.r[0] & 0xFFFFu) & 0xFFFFu);
    // 0e5367  mov cl, 0x44
    X86_AT(c, 0xe5367u);
    s8(c, 1, 0x44u);
    // 0e5369  lea edx, [0xe584f]
    X86_AT(c, 0xe5369u);
    c.r[2] = (uint32_t)(0xE584Fu);
    // 0e536f  mov ax, 0x2506
    X86_AT(c, 0xe536fu);
    s16(c, 0, 0x2506u);
    // 0e5373  int 0x21
    X86_AT(c, 0xe5373u);
    x86_int(c, 0x21, 0xe5375u);
    X86_TICK(c, 9);
    // 0e5375  pop ds
    X86_AT(c, 0xe5375u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 0e5376  jb 0xe53ae
    X86_AT(c, 0xe5376u);
    if (x86_cc(c, 2)) { goto L_e53ae; }
    X86_TICK(c, 57);
    // 0e537c  xor al, al
    X86_AT(c, 0xe537cu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 0e537e  mov byte ptr [0xc3545], al
    X86_AT(c, 0xe537eu);
    wr8((c.sbase[3] + (uint32_t)(0xC3545u)), g8(c, 0));
    // 0e5383  mov dx, 0xe70
    X86_AT(c, 0xe5383u);
    s16(c, 2, 0xE70u);
    // 0e5387  out dx, al
    X86_AT(c, 0xe5387u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 0e5388  mov al, 0xff
    X86_AT(c, 0xe5388u);
    s8(c, 0, 0xFFu);
    // 0e538a  mov byte ptr [0xc3547], al
    X86_AT(c, 0xe538au);
    wr8((c.sbase[3] + (uint32_t)(0xC3547u)), g8(c, 0));
    // 0e538f  mov dx, 0xe71
    X86_AT(c, 0xe538fu);
    s16(c, 2, 0xE71u);
    // 0e5393  out dx, al
    X86_AT(c, 0xe5393u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 0e5394  mov byte ptr [0xc3548], 0
    X86_AT(c, 0xe5394u);
    wr8((c.sbase[3] + (uint32_t)(0xC3548u)), 0x0u);
    // 0e539b  in al, 2
    X86_AT(c, 0xe539bu);
    s8(c, 0, x86_in(c, 0x2u, 1));
    // 0e539d  jmp 0xe539f
    X86_AT(c, 0xe539du);
    goto L_e539f;
L_e539f:
    X86_TICK(c, 7);
    // 0e539f  jmp 0xe53a1
    X86_AT(c, 0xe539fu);
    goto L_e53a1;
L_e53a1:
    X86_TICK(c, 7);
    // 0e53a1  jmp 0xe53a3
    X86_AT(c, 0xe53a1u);
    goto L_e53a3;
L_e53a3:
    X86_TICK(c, 36);
    // 0e53a3  mov dl, 0x10
    X86_AT(c, 0xe53a3u);
    s8(c, 2, 0x10u);
    // 0e53a5  not dl
    X86_AT(c, 0xe53a5u);
    { uint32_t v = g8(c, 2); s8(c, 2, ~v & 0xFFu); }
    // 0e53a7  and al, dl
    X86_AT(c, 0xe53a7u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & g8(c, 2), 1)); }
    // 0e53a9  out 2, al
    X86_AT(c, 0xe53a9u);
    x86_out(c, 0x2u, 1, g8(c, 0));
    // 0e53ab  popfd 
    X86_AT(c, 0xe53abu);
    x86_popfd(c, 4);
    // 0e53ac  clc 
    X86_AT(c, 0xe53acu);
    c.fl &= ~X86_CF;
    // 0e53ad  ret 
    X86_AT(c, 0xe53adu);
    c.eip = pop32(c); return;
L_e53ae:
    X86_TICK(c, 18);
    // 0e53ae  popf 
    X86_AT(c, 0xe53aeu);
    x86_popfd(c, 2);
    // 0e53b0  stc 
    X86_AT(c, 0xe53b0u);
    c.fl |= X86_CF;
    // 0e53b1  ret 
    X86_AT(c, 0xe53b1u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe5322u, "ran off the end of a function");
}
void f_000e53b2(X86Cpu& c) {
    X86_TICK(c, 49);
    // 0e53b2  pushfd 
    X86_AT(c, 0xe53b2u);
    push32(c, c.fl & 0x00FCFFFFu);
    // 0e53b3  cli 
    X86_AT(c, 0xe53b3u);
    c.fl &= ~X86_IF;
    // 0e53b4  mov cl, 0x45
    X86_AT(c, 0xe53b4u);
    s8(c, 1, 0x45u);
    // 0e53b6  mov ax, 0x2502
    X86_AT(c, 0xe53b6u);
    s16(c, 0, 0x2502u);
    // 0e53ba  int 0x21
    X86_AT(c, 0xe53bau);
    x86_int(c, 0x21, 0xe53bcu);
    X86_TICK(c, 5);
    // 0e53bc  jb 0xe542b
    X86_AT(c, 0xe53bcu);
    if (x86_cc(c, 2)) { goto L_e542b; }
    X86_TICK(c, 9);
    // 0e53c2  lea edx, [0xe58ca]
    X86_AT(c, 0xe53c2u);
    c.r[2] = (uint32_t)(0xE58CAu);
    // 0e53c8  cmp ebx, edx
    X86_AT(c, 0xe53c8u);
    (void)x86_sub(c, c.r[3], c.r[2], 0, 4);
    // 0e53ca  je 0xe542b
    X86_AT(c, 0xe53cau);
    if (x86_cc(c, 4)) { goto L_e542b; }
    X86_TICK(c, 47);
    // 0e53d0  mov eax, es
    X86_AT(c, 0xe53d0u);
    c.r[0] = (uint32_t)c.sreg[0];
    // 0e53d2  mov dword ptr [0xc3554], ebx
    X86_AT(c, 0xe53d2u);
    wr32((c.sbase[3] + (uint32_t)(0xC3554u)), c.r[3]);
    // 0e53d8  mov word ptr [0xc3558], ax
    X86_AT(c, 0xe53d8u);
    wr16((c.sbase[3] + (uint32_t)(0xC3558u)), (c.r[0] & 0xFFFFu));
    // 0e53de  mov cl, 0x45
    X86_AT(c, 0xe53deu);
    s8(c, 1, 0x45u);
    // 0e53e0  mov ax, 0x2503
    X86_AT(c, 0xe53e0u);
    s16(c, 0, 0x2503u);
    // 0e53e4  int 0x21
    X86_AT(c, 0xe53e4u);
    x86_int(c, 0x21, 0xe53e6u);
    X86_TICK(c, 5);
    // 0e53e6  jb 0xe542b
    X86_AT(c, 0xe53e6u);
    if (x86_cc(c, 2)) { goto L_e542b; }
    X86_TICK(c, 51);
    // 0e53ec  mov dword ptr [0xc3550], ebx
    X86_AT(c, 0xe53ecu);
    wr32((c.sbase[3] + (uint32_t)(0xC3550u)), c.r[3]);
    // 0e53f2  push ds
    X86_AT(c, 0xe53f2u);
    push32(c, c.sreg[3]);
    // 0e53f3  mov eax, cs
    X86_AT(c, 0xe53f3u);
    c.r[0] = (uint32_t)c.sreg[1];
    // 0e53f5  mov ds, eax
    X86_AT(c, 0xe53f5u);
    x86_load_seg(c, 3, (c.r[0] & 0xFFFFu) & 0xFFFFu);
    // 0e53f7  lea edx, [0xe58ca]
    X86_AT(c, 0xe53f7u);
    c.r[2] = (uint32_t)(0xE58CAu);
    // 0e53fd  mov cl, 0x45
    X86_AT(c, 0xe53fdu);
    s8(c, 1, 0x45u);
    // 0e53ff  mov ax, 0x2506
    X86_AT(c, 0xe53ffu);
    s16(c, 0, 0x2506u);
    // 0e5403  int 0x21
    X86_AT(c, 0xe5403u);
    x86_int(c, 0x21, 0xe5405u);
    X86_TICK(c, 9);
    // 0e5405  pop ds
    X86_AT(c, 0xe5405u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 0e5406  jb 0xe542b
    X86_AT(c, 0xe5406u);
    if (x86_cc(c, 2)) { goto L_e542b; }
    X86_TICK(c, 37);
    // 0e540c  xor al, al
    X86_AT(c, 0xe540cu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 0e540e  mov byte ptr [0xc3546], al
    X86_AT(c, 0xe540eu);
    wr8((c.sbase[3] + (uint32_t)(0xC3546u)), g8(c, 0));
    // 0e5413  mov dx, 0xe73
    X86_AT(c, 0xe5413u);
    s16(c, 2, 0xE73u);
    // 0e5417  out dx, al
    X86_AT(c, 0xe5417u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 0e5418  in al, 2
    X86_AT(c, 0xe5418u);
    s8(c, 0, x86_in(c, 0x2u, 1));
    // 0e541a  jmp 0xe541c
    X86_AT(c, 0xe541au);
    goto L_e541c;
L_e541c:
    X86_TICK(c, 7);
    // 0e541c  jmp 0xe541e
    X86_AT(c, 0xe541cu);
    goto L_e541e;
L_e541e:
    X86_TICK(c, 7);
    // 0e541e  jmp 0xe5420
    X86_AT(c, 0xe541eu);
    goto L_e5420;
L_e5420:
    X86_TICK(c, 36);
    // 0e5420  mov dl, 0x20
    X86_AT(c, 0xe5420u);
    s8(c, 2, 0x20u);
    // 0e5422  not dl
    X86_AT(c, 0xe5422u);
    { uint32_t v = g8(c, 2); s8(c, 2, ~v & 0xFFu); }
    // 0e5424  and al, dl
    X86_AT(c, 0xe5424u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & g8(c, 2), 1)); }
    // 0e5426  out 2, al
    X86_AT(c, 0xe5426u);
    x86_out(c, 0x2u, 1, g8(c, 0));
    // 0e5428  popfd 
    X86_AT(c, 0xe5428u);
    x86_popfd(c, 4);
    // 0e5429  clc 
    X86_AT(c, 0xe5429u);
    c.fl &= ~X86_CF;
    // 0e542a  ret 
    X86_AT(c, 0xe542au);
    c.eip = pop32(c); return;
L_e542b:
    X86_TICK(c, 18);
    // 0e542b  popfd 
    X86_AT(c, 0xe542bu);
    x86_popfd(c, 4);
    // 0e542c  stc 
    X86_AT(c, 0xe542cu);
    c.fl |= X86_CF;
    // 0e542d  ret 
    X86_AT(c, 0xe542du);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe53b2u, "ran off the end of a function");
}
void f_000e542e(X86Cpu& c) {
    X86_TICK(c, 15);
    // 0e542e  pushfd 
    X86_AT(c, 0xe542eu);
    push32(c, c.fl & 0x00FCFFFFu);
    // 0e542f  cli 
    X86_AT(c, 0xe542fu);
    c.fl &= ~X86_IF;
    // 0e5430  call 0xe3b84
    X86_AT(c, 0xe5430u);
    push32(c, 0xe5435u); x86_call_known(c, 0xe3b84u, f_000e3b84); X86_RET(c, 0xe5435u);
    X86_TICK(c, 9);
    // 0e5435  mov dword ptr [0xc355e], eax
    X86_AT(c, 0xe5435u);
    wr32((c.sbase[3] + (uint32_t)(0xC355Eu)), c.r[0]);
    // 0e543a  call 0xe3ba0
    X86_AT(c, 0xe543au);
    push32(c, 0xe543fu); x86_call_known(c, 0xe3ba0u, f_000e3ba0); X86_RET(c, 0xe543fu);
    X86_TICK(c, 13);
    // 0e543f  mov dword ptr [0xc3562], eax
    X86_AT(c, 0xe543fu);
    wr32((c.sbase[3] + (uint32_t)(0xC3562u)), c.r[0]);
    // 0e5444  lea eax, [0xe5a42]
    X86_AT(c, 0xe5444u);
    c.r[0] = (uint32_t)(0xE5A42u);
    // 0e544a  push eax
    X86_AT(c, 0xe544au);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e544b  call 0xe3b64
    X86_AT(c, 0xe544bu);
    push32(c, 0xe5450u); x86_call_known(c, 0xe3b64u, f_000e3b64); X86_RET(c, 0xe5450u);
    X86_TICK(c, 13);
    // 0e5450  add esp, 4
    X86_AT(c, 0xe5450u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0e5453  lea eax, [0xe5b60]
    X86_AT(c, 0xe5453u);
    c.r[0] = (uint32_t)(0xE5B60u);
    // 0e5459  push eax
    X86_AT(c, 0xe5459u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e545a  call 0xe3b90
    X86_AT(c, 0xe545au);
    push32(c, 0xe545fu); x86_call_known(c, 0xe3b90u, f_000e3b90); X86_RET(c, 0xe545fu);
    X86_TICK(c, 20);
    // 0e545f  add esp, 4
    X86_AT(c, 0xe545fu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0e5462  popfd 
    X86_AT(c, 0xe5462u);
    x86_popfd(c, 4);
    // 0e5463  clc 
    X86_AT(c, 0xe5463u);
    c.fl &= ~X86_CF;
    // 0e5464  ret 
    X86_AT(c, 0xe5464u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe542eu, "ran off the end of a function");
}
void f_000e5468(X86Cpu& c) {
    X86_TICK(c, 59);
    // 0e5468  pushfd 
    X86_AT(c, 0xe5468u);
    push32(c, c.fl & 0x00FCFFFFu);
    // 0e5469  cli 
    X86_AT(c, 0xe5469u);
    c.fl &= ~X86_IF;
    // 0e546a  mov dx, 0xe70
    X86_AT(c, 0xe546au);
    s16(c, 2, 0xE70u);
    // 0e546e  mov al, 0
    X86_AT(c, 0xe546eu);
    s8(c, 0, 0x0u);
    // 0e5470  out dx, al
    X86_AT(c, 0xe5470u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 0e5471  mov dx, 0xe71
    X86_AT(c, 0xe5471u);
    s16(c, 2, 0xE71u);
    // 0e5475  mov al, 0
    X86_AT(c, 0xe5475u);
    s8(c, 0, 0x0u);
    // 0e5477  out dx, al
    X86_AT(c, 0xe5477u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 0e5478  in al, 2
    X86_AT(c, 0xe5478u);
    s8(c, 0, x86_in(c, 0x2u, 1));
    // 0e547a  jmp 0xe547c
    X86_AT(c, 0xe547au);
    goto L_e547c;
L_e547c:
    X86_TICK(c, 7);
    // 0e547c  jmp 0xe547e
    X86_AT(c, 0xe547cu);
    goto L_e547e;
L_e547e:
    X86_TICK(c, 7);
    // 0e547e  jmp 0xe5480
    X86_AT(c, 0xe547eu);
    goto L_e5480;
L_e5480:
    X86_TICK(c, 71);
    // 0e5480  or al, 0x10
    X86_AT(c, 0xe5480u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v | 0x10u, 1)); }
    // 0e5482  out 2, al
    X86_AT(c, 0xe5482u);
    x86_out(c, 0x2u, 1, g8(c, 0));
    // 0e5484  push ds
    X86_AT(c, 0xe5484u);
    push32(c, c.sreg[3]);
    // 0e5485  mov cl, 0x44
    X86_AT(c, 0xe5485u);
    s8(c, 1, 0x44u);
    // 0e5487  mov edx, dword ptr [0xc354a]
    X86_AT(c, 0xe5487u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(0xC354Au)));
    // 0e548d  mov ax, word ptr [0xc354e]
    X86_AT(c, 0xe548du);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(0xC354Eu))));
    // 0e5493  mov ebx, dword ptr [0xc3550]
    X86_AT(c, 0xe5493u);
    c.r[3] = rd32((c.sbase[3] + (uint32_t)(0xC3550u)));
    // 0e5499  mov ds, eax
    X86_AT(c, 0xe5499u);
    x86_load_seg(c, 3, (c.r[0] & 0xFFFFu) & 0xFFFFu);
    // 0e549b  mov ax, 0x2507
    X86_AT(c, 0xe549bu);
    s16(c, 0, 0x2507u);
    // 0e549f  int 0x21
    X86_AT(c, 0xe549fu);
    x86_int(c, 0x21, 0xe54a1u);
    X86_TICK(c, 20);
    // 0e54a1  pop ds
    X86_AT(c, 0xe54a1u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 0e54a2  popfd 
    X86_AT(c, 0xe54a2u);
    x86_popfd(c, 4);
    // 0e54a3  ret 
    X86_AT(c, 0xe54a3u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe5468u, "ran off the end of a function");
}
void f_000e54a4(X86Cpu& c) {
    X86_TICK(c, 49);
    // 0e54a4  pushfd 
    X86_AT(c, 0xe54a4u);
    push32(c, c.fl & 0x00FCFFFFu);
    // 0e54a5  cli 
    X86_AT(c, 0xe54a5u);
    c.fl &= ~X86_IF;
    // 0e54a6  mov al, byte ptr [0xc3546]
    X86_AT(c, 0xe54a6u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(0xC3546u))));
    // 0e54ab  and al, 0xfc
    X86_AT(c, 0xe54abu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & 0xFCu, 1)); }
    // 0e54ad  mov dx, 0xe73
    X86_AT(c, 0xe54adu);
    s16(c, 2, 0xE73u);
    // 0e54b1  out dx, al
    X86_AT(c, 0xe54b1u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 0e54b2  mov byte ptr [0xc3546], al
    X86_AT(c, 0xe54b2u);
    wr8((c.sbase[3] + (uint32_t)(0xC3546u)), g8(c, 0));
    // 0e54b7  in al, 2
    X86_AT(c, 0xe54b7u);
    s8(c, 0, x86_in(c, 0x2u, 1));
    // 0e54b9  jmp 0xe54bb
    X86_AT(c, 0xe54b9u);
    goto L_e54bb;
L_e54bb:
    X86_TICK(c, 7);
    // 0e54bb  jmp 0xe54bd
    X86_AT(c, 0xe54bbu);
    goto L_e54bd;
L_e54bd:
    X86_TICK(c, 7);
    // 0e54bd  jmp 0xe54bf
    X86_AT(c, 0xe54bdu);
    goto L_e54bf;
L_e54bf:
    X86_TICK(c, 71);
    // 0e54bf  or al, 0x20
    X86_AT(c, 0xe54bfu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v | 0x20u, 1)); }
    // 0e54c1  out 2, al
    X86_AT(c, 0xe54c1u);
    x86_out(c, 0x2u, 1, g8(c, 0));
    // 0e54c3  push ds
    X86_AT(c, 0xe54c3u);
    push32(c, c.sreg[3]);
    // 0e54c4  mov cl, 0x45
    X86_AT(c, 0xe54c4u);
    s8(c, 1, 0x45u);
    // 0e54c6  mov edx, dword ptr [0xc3554]
    X86_AT(c, 0xe54c6u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(0xC3554u)));
    // 0e54cc  mov ax, word ptr [0xc3558]
    X86_AT(c, 0xe54ccu);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(0xC3558u))));
    // 0e54d2  mov ebx, dword ptr [0xc355a]
    X86_AT(c, 0xe54d2u);
    c.r[3] = rd32((c.sbase[3] + (uint32_t)(0xC355Au)));
    // 0e54d8  mov ds, eax
    X86_AT(c, 0xe54d8u);
    x86_load_seg(c, 3, (c.r[0] & 0xFFFFu) & 0xFFFFu);
    // 0e54da  mov ax, 0x2507
    X86_AT(c, 0xe54dau);
    s16(c, 0, 0x2507u);
    // 0e54de  int 0x21
    X86_AT(c, 0xe54deu);
    x86_int(c, 0x21, 0xe54e0u);
    X86_TICK(c, 20);
    // 0e54e0  pop ds
    X86_AT(c, 0xe54e0u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 0e54e1  popfd 
    X86_AT(c, 0xe54e1u);
    x86_popfd(c, 4);
    // 0e54e2  ret 
    X86_AT(c, 0xe54e2u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe54a4u, "ran off the end of a function");
}
void f_000e54e3(X86Cpu& c) {
    X86_TICK(c, 19);
    // 0e54e3  pushfd 
    X86_AT(c, 0xe54e3u);
    push32(c, c.fl & 0x00FCFFFFu);
    // 0e54e4  cli 
    X86_AT(c, 0xe54e4u);
    c.fl &= ~X86_IF;
    // 0e54e5  mov bl, 0
    X86_AT(c, 0xe54e5u);
    s8(c, 3, 0x0u);
    // 0e54e7  mov ah, 0x15
    X86_AT(c, 0xe54e7u);
    s8(c, 4, 0x15u);
    // 0e54e9  call 0xe3e10
    X86_AT(c, 0xe54e9u);
    push32(c, 0xe54eeu); x86_call_known(c, 0xe3e10u, f_000e3e10); X86_RET(c, 0xe54eeu);
    X86_TICK(c, 13);
    // 0e54ee  mov eax, dword ptr [0xc355e]
    X86_AT(c, 0xe54eeu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xC355Eu)));
    // 0e54f3  push eax
    X86_AT(c, 0xe54f3u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e54f4  call 0xe3b64
    X86_AT(c, 0xe54f4u);
    push32(c, 0xe54f9u); x86_call_known(c, 0xe3b64u, f_000e3b64); X86_RET(c, 0xe54f9u);
    X86_TICK(c, 15);
    // 0e54f9  add esp, 4
    X86_AT(c, 0xe54f9u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0e54fc  mov eax, dword ptr [0xc3562]
    X86_AT(c, 0xe54fcu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xC3562u)));
    // 0e5501  push eax
    X86_AT(c, 0xe5501u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e5502  call 0xe3b90
    X86_AT(c, 0xe5502u);
    push32(c, 0xe5507u); x86_call_known(c, 0xe3b90u, f_000e3b90); X86_RET(c, 0xe5507u);
    X86_TICK(c, 18);
    // 0e5507  add esp, 4
    X86_AT(c, 0xe5507u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0e550a  popfd 
    X86_AT(c, 0xe550au);
    x86_popfd(c, 4);
    // 0e550b  ret 
    X86_AT(c, 0xe550bu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe54e3u, "ran off the end of a function");
}
void f_000e550c(X86Cpu& c) {
    X86_TICK(c, 28);
    // 0e550c  pushal 
    X86_AT(c, 0xe550cu);
    { uint32_t sp = c.r[4]; for (int k = 0; k < 8; ++k) push32(c, k == 4 ? sp : c.r[k]); }
    // 0e550d  lea esi, [0xc3575]
    X86_AT(c, 0xe550du);
    c.r[6] = (uint32_t)(0xC3575u);
    // 0e5513  lea eax, [0xc36f5]
    X86_AT(c, 0xe5513u);
    c.r[0] = (uint32_t)(0xC36F5u);
    // 0e5519  mov bx, 0xe50
    X86_AT(c, 0xe5519u);
    s16(c, 3, 0xE50u);
    // 0e551d  mov ecx, 4
    X86_AT(c, 0xe551du);
    c.r[1] = 0x4u;
    // 0e5522  mov dx, 1
    X86_AT(c, 0xe5522u);
    s16(c, 2, 0x1u);
L_e5526:
    X86_TICK(c, 82);
    // 0e5526  mov word ptr [esi + 0x10], 0
    X86_AT(c, 0xe5526u);
    wr16((c.sbase[3] + (uint32_t)(c.r[6] + 0x10u)), 0x0u);
    // 0e552c  mov dword ptr [esi], eax
    X86_AT(c, 0xe552cu);
    wr32((c.sbase[3] + (uint32_t)(c.r[6])), c.r[0]);
    // 0e552e  mov dword ptr [esi + 8], eax
    X86_AT(c, 0xe552eu);
    wr32((c.sbase[3] + (uint32_t)(c.r[6] + 0x8u)), c.r[0]);
    // 0e5531  mov dword ptr [esi + 0xc], eax
    X86_AT(c, 0xe5531u);
    wr32((c.sbase[3] + (uint32_t)(c.r[6] + 0xCu)), c.r[0]);
    // 0e5534  add eax, 0x10
    X86_AT(c, 0xe5534u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0x10u, 0, 4); }
    // 0e5539  mov dword ptr [esi + 4], eax
    X86_AT(c, 0xe5539u);
    wr32((c.sbase[3] + (uint32_t)(c.r[6] + 0x4u)), c.r[0]);
    // 0e553c  mov byte ptr [esi + 0x19], 0
    X86_AT(c, 0xe553cu);
    wr8((c.sbase[3] + (uint32_t)(c.r[6] + 0x19u)), 0x0u);
    // 0e5540  mov byte ptr [esi + 0x1a], dl
    X86_AT(c, 0xe5540u);
    wr8((c.sbase[3] + (uint32_t)(c.r[6] + 0x1Au)), g8(c, 2));
    // 0e5543  inc bx
    X86_AT(c, 0xe5543u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_inc(c, v, 2)); }
    // 0e5545  mov word ptr [esi + 0x12], bx
    X86_AT(c, 0xe5545u);
    wr16((c.sbase[3] + (uint32_t)(c.r[6] + 0x12u)), (c.r[3] & 0xFFFFu));
    // 0e5549  add bx, 2
    X86_AT(c, 0xe5549u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, 0x2u, 0, 2)); }
    // 0e554d  mov word ptr [esi + 0x14], bx
    X86_AT(c, 0xe554du);
    wr16((c.sbase[3] + (uint32_t)(c.r[6] + 0x14u)), (c.r[3] & 0xFFFFu));
    // 0e5551  inc bx
    X86_AT(c, 0xe5551u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_inc(c, v, 2)); }
    // 0e5553  shl dl, 1
    X86_AT(c, 0xe5553u);
    { uint32_t v = g8(c, 2); bool w; uint32_t r = x86_shift(c, 4, v, 0x1u, 1, w); if (w) s8(c, 2, r); }
    // 0e5555  add esi, 0x20
    X86_AT(c, 0xe5555u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x20u, 0, 4); }
    // 0e5558  mov word ptr [esi + 0x10], 0
    X86_AT(c, 0xe5558u);
    wr16((c.sbase[3] + (uint32_t)(c.r[6] + 0x10u)), 0x0u);
    // 0e555e  mov dword ptr [esi], eax
    X86_AT(c, 0xe555eu);
    wr32((c.sbase[3] + (uint32_t)(c.r[6])), c.r[0]);
    // 0e5560  mov dword ptr [esi + 8], eax
    X86_AT(c, 0xe5560u);
    wr32((c.sbase[3] + (uint32_t)(c.r[6] + 0x8u)), c.r[0]);
    // 0e5563  mov dword ptr [esi + 0xc], eax
    X86_AT(c, 0xe5563u);
    wr32((c.sbase[3] + (uint32_t)(c.r[6] + 0xCu)), c.r[0]);
    // 0e5566  add eax, 0x10
    X86_AT(c, 0xe5566u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0x10u, 0, 4); }
    // 0e556b  mov dword ptr [esi + 4], eax
    X86_AT(c, 0xe556bu);
    wr32((c.sbase[3] + (uint32_t)(c.r[6] + 0x4u)), c.r[0]);
    // 0e556e  mov byte ptr [esi + 0x19], 0
    X86_AT(c, 0xe556eu);
    wr8((c.sbase[3] + (uint32_t)(c.r[6] + 0x19u)), 0x0u);
    // 0e5572  mov byte ptr [esi + 0x1a], dl
    X86_AT(c, 0xe5572u);
    wr8((c.sbase[3] + (uint32_t)(c.r[6] + 0x1Au)), g8(c, 2));
    // 0e5575  inc bx
    X86_AT(c, 0xe5575u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_inc(c, v, 2)); }
    // 0e5577  mov word ptr [esi + 0x12], bx
    X86_AT(c, 0xe5577u);
    wr16((c.sbase[3] + (uint32_t)(c.r[6] + 0x12u)), (c.r[3] & 0xFFFFu));
    // 0e557b  inc bx
    X86_AT(c, 0xe557bu);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_inc(c, v, 2)); }
    // 0e557d  inc bx
    X86_AT(c, 0xe557du);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_inc(c, v, 2)); }
    // 0e557f  mov word ptr [esi + 0x14], bx
    X86_AT(c, 0xe557fu);
    wr16((c.sbase[3] + (uint32_t)(c.r[6] + 0x14u)), (c.r[3] & 0xFFFFu));
    // 0e5583  sub word ptr [esi + 0x14], 4
    X86_AT(c, 0xe5583u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[6] + 0x14u)); uint32_t v = rd16(ea); wr16(ea, x86_sub(c, v, 0x4u, 0, 2)); }
    // 0e5588  inc bx
    X86_AT(c, 0xe5588u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_inc(c, v, 2)); }
    // 0e558a  shl dl, 1
    X86_AT(c, 0xe558au);
    { uint32_t v = g8(c, 2); bool w; uint32_t r = x86_shift(c, 4, v, 0x1u, 1, w); if (w) s8(c, 2, r); }
    // 0e558c  add esi, 0x20
    X86_AT(c, 0xe558cu);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x20u, 0, 4); }
    // 0e558f  loop 0xe5526
    X86_AT(c, 0xe558fu);
    c.r[1] -= 1; if (c.r[1] != 0) { X86_POLL(c, 0xe5526u); goto L_e5526; }
    X86_TICK(c, 34);
    // 0e5591  popal 
    X86_AT(c, 0xe5591u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 0e5592  ret 
    X86_AT(c, 0xe5592u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe550cu, "ran off the end of a function");
}
void f_000e5593(X86Cpu& c) {
    X86_TICK(c, 28);
    // 0e5593  pushal 
    X86_AT(c, 0xe5593u);
    { uint32_t sp = c.r[4]; for (int k = 0; k < 8; ++k) push32(c, k == 4 ? sp : c.r[k]); }
    // 0e5594  lea esi, [0xc3675]
    X86_AT(c, 0xe5594u);
    c.r[6] = (uint32_t)(0xC3675u);
    // 0e559a  lea eax, [0xc3775]
    X86_AT(c, 0xe559au);
    c.r[0] = (uint32_t)(0xC3775u);
    // 0e55a0  mov bx, 0xe50
    X86_AT(c, 0xe55a0u);
    s16(c, 3, 0xE50u);
    // 0e55a4  mov ecx, 4
    X86_AT(c, 0xe55a4u);
    c.r[1] = 0x4u;
    // 0e55a9  mov dx, 1
    X86_AT(c, 0xe55a9u);
    s16(c, 2, 0x1u);
L_e55ad:
    X86_TICK(c, 44);
    // 0e55ad  mov word ptr [esi + 0x10], 0
    X86_AT(c, 0xe55adu);
    wr16((c.sbase[3] + (uint32_t)(c.r[6] + 0x10u)), 0x0u);
    // 0e55b3  mov dword ptr [esi], eax
    X86_AT(c, 0xe55b3u);
    wr32((c.sbase[3] + (uint32_t)(c.r[6])), c.r[0]);
    // 0e55b5  mov dword ptr [esi + 8], eax
    X86_AT(c, 0xe55b5u);
    wr32((c.sbase[3] + (uint32_t)(c.r[6] + 0x8u)), c.r[0]);
    // 0e55b8  mov dword ptr [esi + 0xc], eax
    X86_AT(c, 0xe55b8u);
    wr32((c.sbase[3] + (uint32_t)(c.r[6] + 0xCu)), c.r[0]);
    // 0e55bb  add eax, 0x40
    X86_AT(c, 0xe55bbu);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0x40u, 0, 4); }
    // 0e55c0  mov dword ptr [esi + 4], eax
    X86_AT(c, 0xe55c0u);
    wr32((c.sbase[3] + (uint32_t)(c.r[6] + 0x4u)), c.r[0]);
    // 0e55c3  mov byte ptr [esi + 0x19], 0
    X86_AT(c, 0xe55c3u);
    wr8((c.sbase[3] + (uint32_t)(c.r[6] + 0x19u)), 0x0u);
    // 0e55c7  mov byte ptr [esi + 0x1a], dl
    X86_AT(c, 0xe55c7u);
    wr8((c.sbase[3] + (uint32_t)(c.r[6] + 0x1Au)), g8(c, 2));
    // 0e55ca  inc bx
    X86_AT(c, 0xe55cau);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_inc(c, v, 2)); }
    // 0e55cc  mov word ptr [esi + 0x12], bx
    X86_AT(c, 0xe55ccu);
    wr16((c.sbase[3] + (uint32_t)(c.r[6] + 0x12u)), (c.r[3] & 0xFFFFu));
    // 0e55d0  add bx, 2
    X86_AT(c, 0xe55d0u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, 0x2u, 0, 2)); }
    // 0e55d4  mov word ptr [esi + 0x14], bx
    X86_AT(c, 0xe55d4u);
    wr16((c.sbase[3] + (uint32_t)(c.r[6] + 0x14u)), (c.r[3] & 0xFFFFu));
    // 0e55d8  inc bx
    X86_AT(c, 0xe55d8u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_inc(c, v, 2)); }
    // 0e55da  shl dl, 1
    X86_AT(c, 0xe55dau);
    { uint32_t v = g8(c, 2); bool w; uint32_t r = x86_shift(c, 4, v, 0x1u, 1, w); if (w) s8(c, 2, r); }
    // 0e55dc  add bx, 4
    X86_AT(c, 0xe55dcu);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, 0x4u, 0, 2)); }
    // 0e55e0  add esi, 0x20
    X86_AT(c, 0xe55e0u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x20u, 0, 4); }
    // 0e55e3  loop 0xe55ad
    X86_AT(c, 0xe55e3u);
    c.r[1] -= 1; if (c.r[1] != 0) { X86_POLL(c, 0xe55adu); goto L_e55ad; }
    X86_TICK(c, 34);
    // 0e55e5  popal 
    X86_AT(c, 0xe55e5u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 0e55e6  ret 
    X86_AT(c, 0xe55e6u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe5593u, "ran off the end of a function");
}
void f_000e55e7(X86Cpu& c) {
    X86_TICK(c, 24);
    // 0e55e7  pushal 
    X86_AT(c, 0xe55e7u);
    { uint32_t sp = c.r[4]; for (int k = 0; k < 8; ++k) push32(c, k == 4 ? sp : c.r[k]); }
    // 0e55e8  xor cx, cx
    X86_AT(c, 0xe55e8u);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_logic(c, v ^ (c.r[1] & 0xFFFFu), 2)); }
    // 0e55eb  lea esi, [0xc3675]
    X86_AT(c, 0xe55ebu);
    c.r[6] = (uint32_t)(0xC3675u);
    // 0e55f1  lea edi, [0xc3575]
    X86_AT(c, 0xe55f1u);
    c.r[7] = (uint32_t)(0xC3575u);
L_e55f7:
    X86_TICK(c, 16);
    // 0e55f7  mov dx, cx
    X86_AT(c, 0xe55f7u);
    s16(c, 2, (c.r[1] & 0xFFFFu));
    // 0e55fa  shl dx, 3
    X86_AT(c, 0xe55fau);
    { uint32_t v = (c.r[2] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 4, v, 0x3u, 2, w); if (w) s16(c, 2, r); }
    // 0e55fe  add dx, 0xe51
    X86_AT(c, 0xe55feu);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, 0xE51u, 0, 2)); }
    // 0e5603  mov al, 0
    X86_AT(c, 0xe5603u);
    s8(c, 0, 0x0u);
    // 0e5605  call 0xe56ad
    X86_AT(c, 0xe5605u);
    push32(c, 0xe560au); x86_call_known(c, 0xe56adu, f_000e56ad); X86_RET(c, 0xe560au);
    X86_TICK(c, 7);
    // 0e560a  call 0xe56ad
    X86_AT(c, 0xe560au);
    push32(c, 0xe560fu); x86_call_known(c, 0xe56adu, f_000e56ad); X86_RET(c, 0xe560fu);
    X86_TICK(c, 7);
    // 0e560f  call 0xe56ad
    X86_AT(c, 0xe560fu);
    push32(c, 0xe5614u); x86_call_known(c, 0xe56adu, f_000e56ad); X86_RET(c, 0xe5614u);
    X86_TICK(c, 9);
    // 0e5614  mov al, 0x40
    X86_AT(c, 0xe5614u);
    s8(c, 0, 0x40u);
    // 0e5616  call 0xe56ad
    X86_AT(c, 0xe5616u);
    push32(c, 0xe561bu); x86_call_known(c, 0xe56adu, f_000e56ad); X86_RET(c, 0xe561bu);
    X86_TICK(c, 9);
    // 0e561b  mov al, 0x4e
    X86_AT(c, 0xe561bu);
    s8(c, 0, 0x4Eu);
    // 0e561d  call 0xe56ad
    X86_AT(c, 0xe561du);
    push32(c, 0xe5622u); x86_call_known(c, 0xe56adu, f_000e56ad); X86_RET(c, 0xe5622u);
    X86_TICK(c, 9);
    // 0e5622  mov al, 0x37
    X86_AT(c, 0xe5622u);
    s8(c, 0, 0x37u);
    // 0e5624  call 0xe56ad
    X86_AT(c, 0xe5624u);
    push32(c, 0xe5629u); x86_call_known(c, 0xe56adu, f_000e56ad); X86_RET(c, 0xe5629u);
    X86_TICK(c, 25);
    // 0e5629  mov byte ptr [esi + 0x18], 0
    X86_AT(c, 0xe5629u);
    wr8((c.sbase[3] + (uint32_t)(c.r[6] + 0x18u)), 0x0u);
    // 0e562d  mov byte ptr [edi + 0x18], 0
    X86_AT(c, 0xe562du);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0x18u)), 0x0u);
    // 0e5631  mov byte ptr [edi + 0x38], 0
    X86_AT(c, 0xe5631u);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0x38u)), 0x0u);
    // 0e5635  in al, dx
    X86_AT(c, 0xe5635u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 0e5636  cmp al, 0xff
    X86_AT(c, 0xe5636u);
    (void)x86_sub(c, g8(c, 0), 0xFFu, 0, 1);
    // 0e5638  je 0xe564a
    X86_AT(c, 0xe5638u);
    if (x86_cc(c, 4)) { goto L_e564a; }
    X86_TICK(c, 6);
    // 0e563e  mov byte ptr [esi + 0x18], 0xff
    X86_AT(c, 0xe563eu);
    wr8((c.sbase[3] + (uint32_t)(c.r[6] + 0x18u)), 0xFFu);
    // 0e5642  mov byte ptr [edi + 0x18], 0xff
    X86_AT(c, 0xe5642u);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0x18u)), 0xFFu);
    // 0e5646  mov byte ptr [edi + 0x38], 0xff
    X86_AT(c, 0xe5646u);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0x38u)), 0xFFu);
L_e564a:
    X86_TICK(c, 31);
    // 0e564a  add esi, 0x20
    X86_AT(c, 0xe564au);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x20u, 0, 4); }
    // 0e564d  add edi, 0x40
    X86_AT(c, 0xe564du);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x40u, 0, 4); }
    // 0e5650  add dx, 2
    X86_AT(c, 0xe5650u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, 0x2u, 0, 2)); }
    // 0e5654  mov al, 1
    X86_AT(c, 0xe5654u);
    s8(c, 0, 0x1u);
    // 0e5656  out dx, al
    X86_AT(c, 0xe5656u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 0e5657  add dx, 2
    X86_AT(c, 0xe5657u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, 0x2u, 0, 2)); }
    // 0e565b  mov al, 0
    X86_AT(c, 0xe565bu);
    s8(c, 0, 0x0u);
    // 0e565d  call 0xe56ad
    X86_AT(c, 0xe565du);
    push32(c, 0xe5662u); x86_call_known(c, 0xe56adu, f_000e56ad); X86_RET(c, 0xe5662u);
    X86_TICK(c, 7);
    // 0e5662  call 0xe56ad
    X86_AT(c, 0xe5662u);
    push32(c, 0xe5667u); x86_call_known(c, 0xe56adu, f_000e56ad); X86_RET(c, 0xe5667u);
    X86_TICK(c, 7);
    // 0e5667  call 0xe56ad
    X86_AT(c, 0xe5667u);
    push32(c, 0xe566cu); x86_call_known(c, 0xe56adu, f_000e56ad); X86_RET(c, 0xe566cu);
    X86_TICK(c, 9);
    // 0e566c  mov al, 0x40
    X86_AT(c, 0xe566cu);
    s8(c, 0, 0x40u);
    // 0e566e  call 0xe56ad
    X86_AT(c, 0xe566eu);
    push32(c, 0xe5673u); x86_call_known(c, 0xe56adu, f_000e56ad); X86_RET(c, 0xe5673u);
    X86_TICK(c, 9);
    // 0e5673  mov al, 0x4e
    X86_AT(c, 0xe5673u);
    s8(c, 0, 0x4Eu);
    // 0e5675  call 0xe56ad
    X86_AT(c, 0xe5675u);
    push32(c, 0xe567au); x86_call_known(c, 0xe56adu, f_000e56ad); X86_RET(c, 0xe567au);
    X86_TICK(c, 9);
    // 0e567a  mov al, 0x33
    X86_AT(c, 0xe567au);
    s8(c, 0, 0x33u);
    // 0e567c  call 0xe56ad
    X86_AT(c, 0xe567cu);
    push32(c, 0xe5681u); x86_call_known(c, 0xe56adu, f_000e56ad); X86_RET(c, 0xe5681u);
    X86_TICK(c, 9);
    // 0e5681  inc cx
    X86_AT(c, 0xe5681u);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_inc(c, v, 2)); }
    // 0e5683  cmp cx, 4
    X86_AT(c, 0xe5683u);
    (void)x86_sub(c, (c.r[1] & 0xFFFFu), 0x4u, 0, 2);
    // 0e5687  jb 0xe55f7
    X86_AT(c, 0xe5687u);
    if (x86_cc(c, 2)) { X86_POLL(c, 0xe55f7u); goto L_e55f7; }
    X86_TICK(c, 16);
    // 0e568d  mov byte ptr [0xc3549], 0
    X86_AT(c, 0xe568du);
    wr8((c.sbase[3] + (uint32_t)(0xC3549u)), 0x0u);
    // 0e5694  lea esi, [0xc3675]
    X86_AT(c, 0xe5694u);
    c.r[6] = (uint32_t)(0xC3675u);
    // 0e569a  cmp byte ptr [esi + 0x18], 0
    X86_AT(c, 0xe569au);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[6] + 0x18u))), 0x0u, 0, 1);
    // 0e569e  je 0xe56ab
    X86_AT(c, 0xe569eu);
    if (x86_cc(c, 4)) { goto L_e56ab; }
    X86_TICK(c, 2);
    // 0e56a4  mov byte ptr [0xc3549], 1
    X86_AT(c, 0xe56a4u);
    wr8((c.sbase[3] + (uint32_t)(0xC3549u)), 0x1u);
L_e56ab:
    X86_TICK(c, 34);
    // 0e56ab  popal 
    X86_AT(c, 0xe56abu);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 0e56ac  ret 
    X86_AT(c, 0xe56acu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe55e7u, "ran off the end of a function");
}
void f_000e56ad(X86Cpu& c) {
    X86_TICK(c, 7);
    // 0e56ad  jmp 0xe56af
    X86_AT(c, 0xe56adu);
    goto L_e56af;
L_e56af:
    X86_TICK(c, 19);
    // 0e56af  out dx, al
    X86_AT(c, 0xe56afu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 0e56b0  jmp 0xe56b2
    X86_AT(c, 0xe56b0u);
    goto L_e56b2;
L_e56b2:
    X86_TICK(c, 10);
    // 0e56b2  ret 
    X86_AT(c, 0xe56b2u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe56adu, "ran off the end of a function");
}
void f_000e56b3(X86Cpu& c) {
    X86_TICK(c, 28);
    // 0e56b3  pushal 
    X86_AT(c, 0xe56b3u);
    { uint32_t sp = c.r[4]; for (int k = 0; k < 8; ++k) push32(c, k == 4 ? sp : c.r[k]); }
    // 0e56b4  pushf 
    X86_AT(c, 0xe56b4u);
    push16(c, c.fl & 0xFFFFu);
    // 0e56b6  cli 
    X86_AT(c, 0xe56b6u);
    c.fl &= ~X86_IF;
    // 0e56b7  mov ecx, 4
    X86_AT(c, 0xe56b7u);
    c.r[1] = 0x4u;
L_e56bc:
    X86_TICK(c, 34);
    // 0e56bc  mov dx, cx
    X86_AT(c, 0xe56bcu);
    s16(c, 2, (c.r[1] & 0xFFFFu));
    // 0e56bf  dec dx
    X86_AT(c, 0xe56bfu);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_dec(c, v, 2)); }
    // 0e56c1  shl dx, 3
    X86_AT(c, 0xe56c1u);
    { uint32_t v = (c.r[2] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 4, v, 0x3u, 2, w); if (w) s16(c, 2, r); }
    // 0e56c5  add dx, 0xe53
    X86_AT(c, 0xe56c5u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, 0xE53u, 0, 2)); }
    // 0e56ca  mov al, 0
    X86_AT(c, 0xe56cau);
    s8(c, 0, 0x0u);
    // 0e56cc  out dx, al
    X86_AT(c, 0xe56ccu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 0e56cd  loop 0xe56bc
    X86_AT(c, 0xe56cdu);
    c.r[1] -= 1; if (c.r[1] != 0) { X86_POLL(c, 0xe56bcu); goto L_e56bc; }
    X86_TICK(c, 40);
    // 0e56cf  popf 
    X86_AT(c, 0xe56cfu);
    x86_popfd(c, 2);
    // 0e56d1  popal 
    X86_AT(c, 0xe56d1u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 0e56d2  ret 
    X86_AT(c, 0xe56d2u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe56b3u, "ran off the end of a function");
}
void f_000e56d3(X86Cpu& c) {
    X86_TICK(c, 23);
    // 0e56d3  push ax
    X86_AT(c, 0xe56d3u);
    { uint32_t v = (c.r[0] & 0xFFFFu); push16(c, v); }
    // 0e56d5  push dx
    X86_AT(c, 0xe56d5u);
    { uint32_t v = (c.r[2] & 0xFFFFu); push16(c, v); }
    // 0e56d7  pushf 
    X86_AT(c, 0xe56d7u);
    push16(c, c.fl & 0xFFFFu);
    // 0e56d9  cli 
    X86_AT(c, 0xe56d9u);
    c.fl &= ~X86_IF;
    // 0e56da  mov ax, word ptr [0xc331e]
    X86_AT(c, 0xe56dau);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(0xC331Eu))));
    // 0e56e0  call 0xe5742
    X86_AT(c, 0xe56e0u);
    push32(c, 0xe56e5u); x86_call_known(c, 0xe5742u, f_000e5742); X86_RET(c, 0xe56e5u);
    X86_TICK(c, 46);
    // 0e56e5  mov al, byte ptr [0xc3546]
    X86_AT(c, 0xe56e5u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(0xC3546u))));
    // 0e56ea  or al, 1
    X86_AT(c, 0xe56eau);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v | 0x1u, 1)); }
    // 0e56ec  mov dx, 0xe73
    X86_AT(c, 0xe56ecu);
    s16(c, 2, 0xE73u);
    // 0e56f0  out dx, al
    X86_AT(c, 0xe56f0u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 0e56f1  mov byte ptr [0xc3546], al
    X86_AT(c, 0xe56f1u);
    wr8((c.sbase[3] + (uint32_t)(0xC3546u)), g8(c, 0));
    // 0e56f6  popf 
    X86_AT(c, 0xe56f6u);
    x86_popfd(c, 2);
    // 0e56f8  pop dx
    X86_AT(c, 0xe56f8u);
    { uint32_t v = pop16(c); s16(c, 2, v); }
    // 0e56fa  pop ax
    X86_AT(c, 0xe56fau);
    { uint32_t v = pop16(c); s16(c, 0, v); }
    // 0e56fc  ret 
    X86_AT(c, 0xe56fcu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe56d3u, "ran off the end of a function");
}
void f_000e5714(X86Cpu& c) {
    X86_TICK(c, 46);
    // 0e5714  pushf 
    X86_AT(c, 0xe5714u);
    push16(c, c.fl & 0xFFFFu);
    // 0e5716  cli 
    X86_AT(c, 0xe5716u);
    c.fl &= ~X86_IF;
    // 0e5717  mov al, byte ptr [0xc3546]
    X86_AT(c, 0xe5717u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(0xC3546u))));
    // 0e571c  and al, 0xfe
    X86_AT(c, 0xe571cu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & 0xFEu, 1)); }
    // 0e571e  mov dx, 0xe73
    X86_AT(c, 0xe571eu);
    s16(c, 2, 0xE73u);
    // 0e5722  out dx, al
    X86_AT(c, 0xe5722u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 0e5723  mov byte ptr [0xc3546], al
    X86_AT(c, 0xe5723u);
    wr8((c.sbase[3] + (uint32_t)(0xC3546u)), g8(c, 0));
    // 0e5728  popf 
    X86_AT(c, 0xe5728u);
    x86_popfd(c, 2);
    // 0e572a  ret 
    X86_AT(c, 0xe572au);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe5714u, "ran off the end of a function");
}
void f_000e5742(X86Cpu& c) {
    X86_TICK(c, 80);
    // 0e5742  push dx
    X86_AT(c, 0xe5742u);
    { uint32_t v = (c.r[2] & 0xFFFFu); push16(c, v); }
    // 0e5744  pushf 
    X86_AT(c, 0xe5744u);
    push16(c, c.fl & 0xFFFFu);
    // 0e5746  cli 
    X86_AT(c, 0xe5746u);
    c.fl &= ~X86_IF;
    // 0e5747  mov dx, 0xe77
    X86_AT(c, 0xe5747u);
    s16(c, 2, 0xE77u);
    // 0e574b  push ax
    X86_AT(c, 0xe574bu);
    { uint32_t v = (c.r[0] & 0xFFFFu); push16(c, v); }
    // 0e574d  mov al, 0x30
    X86_AT(c, 0xe574du);
    s8(c, 0, 0x30u);
    // 0e574f  out dx, al
    X86_AT(c, 0xe574fu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 0e5750  pop ax
    X86_AT(c, 0xe5750u);
    { uint32_t v = pop16(c); s16(c, 0, v); }
    // 0e5752  mov dx, 0xe74
    X86_AT(c, 0xe5752u);
    s16(c, 2, 0xE74u);
    // 0e5756  out dx, al
    X86_AT(c, 0xe5756u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 0e5757  mov al, ah
    X86_AT(c, 0xe5757u);
    s8(c, 0, g8(c, 4));
    // 0e5759  out dx, al
    X86_AT(c, 0xe5759u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 0e575a  popf 
    X86_AT(c, 0xe575au);
    x86_popfd(c, 2);
    // 0e575c  pop dx
    X86_AT(c, 0xe575cu);
    { uint32_t v = pop16(c); s16(c, 2, v); }
    // 0e575e  ret 
    X86_AT(c, 0xe575eu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe5742u, "ran off the end of a function");
}
void f_000e575f(X86Cpu& c) {
    X86_TICK(c, 57);
    // 0e575f  mov dx, 0xe77
    X86_AT(c, 0xe575fu);
    s16(c, 2, 0xE77u);
    // 0e5763  mov al, 0
    X86_AT(c, 0xe5763u);
    s8(c, 0, 0x0u);
    // 0e5765  out dx, al
    X86_AT(c, 0xe5765u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 0e5766  mov dx, 0xe74
    X86_AT(c, 0xe5766u);
    s16(c, 2, 0xE74u);
    // 0e576a  in al, dx
    X86_AT(c, 0xe576au);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 0e576b  mov ah, al
    X86_AT(c, 0xe576bu);
    s8(c, 4, g8(c, 0));
    // 0e576d  in al, dx
    X86_AT(c, 0xe576du);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 0e576e  xchg ah, al
    X86_AT(c, 0xe576eu);
    { uint32_t t = g8(c, 4); s8(c, 4, g8(c, 0)); s8(c, 0, t); }
    // 0e5770  ret 
    X86_AT(c, 0xe5770u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe575fu, "ran off the end of a function");
}
void f_000e5771(X86Cpu& c) {
    X86_TICK(c, 82);
    // 0e5771  push dx
    X86_AT(c, 0xe5771u);
    { uint32_t v = (c.r[2] & 0xFFFFu); push16(c, v); }
    // 0e5773  mov dx, 0xe77
    X86_AT(c, 0xe5773u);
    s16(c, 2, 0xE77u);
    // 0e5777  pushf 
    X86_AT(c, 0xe5777u);
    push16(c, c.fl & 0xFFFFu);
    // 0e5779  cli 
    X86_AT(c, 0xe5779u);
    c.fl &= ~X86_IF;
    // 0e577a  push ax
    X86_AT(c, 0xe577au);
    { uint32_t v = (c.r[0] & 0xFFFFu); push16(c, v); }
    // 0e577c  mov al, 0x70
    X86_AT(c, 0xe577cu);
    s8(c, 0, 0x70u);
    // 0e577e  out dx, al
    X86_AT(c, 0xe577eu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 0e577f  nop 
    X86_AT(c, 0xe577fu);
    // 0e5780  mov dx, 0xe75
    X86_AT(c, 0xe5780u);
    s16(c, 2, 0xE75u);
    // 0e5784  pop ax
    X86_AT(c, 0xe5784u);
    { uint32_t v = pop16(c); s16(c, 0, v); }
    // 0e5786  out dx, al
    X86_AT(c, 0xe5786u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 0e5787  mov al, ah
    X86_AT(c, 0xe5787u);
    s8(c, 0, g8(c, 4));
    // 0e5789  out dx, al
    X86_AT(c, 0xe5789u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 0e578a  popf 
    X86_AT(c, 0xe578au);
    x86_popfd(c, 2);
    // 0e578c  pop dx
    X86_AT(c, 0xe578cu);
    { uint32_t v = pop16(c); s16(c, 2, v); }
    // 0e578e  ret 
    X86_AT(c, 0xe578eu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe5771u, "ran off the end of a function");
}
void f_000e57af(X86Cpu& c) {
    X86_TICK(c, 12);
    // 0e57af  cmp byte ptr [0xc3549], 0
    X86_AT(c, 0xe57afu);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0xC3549u))), 0x0u, 0, 1);
    // 0e57b6  jne 0xe5818
    X86_AT(c, 0xe57b6u);
    if (x86_cc(c, 5)) { goto L_e5818; }
    X86_TICK(c, 13);
    // 0e57bc  push eax
    X86_AT(c, 0xe57bcu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e57bd  push ebx
    X86_AT(c, 0xe57bdu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0e57be  movzx ebx, al
    X86_AT(c, 0xe57beu);
    c.r[3] = g8(c, 0);
    // 0e57c1  mov ax, word ptr cs:[ebx*2 + 0xe5024]
    X86_AT(c, 0xe57c1u);
    s16(c, 0, rd16((c.sbase[1] + (uint32_t)(c.r[3] * 2 + 0xE5024u))));
    // 0e57ca  mov bx, 0x10
    X86_AT(c, 0xe57cau);
    s16(c, 3, 0x10u);
L_e57ce:
    X86_TICK(c, 7);
    // 0e57ce  cmp ax, 0x7d
    X86_AT(c, 0xe57ceu);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), 0x7Du, 0, 2);
    // 0e57d2  ja 0xe57dc
    X86_AT(c, 0xe57d2u);
    if (x86_cc(c, 7)) { goto L_e57dc; }
    X86_TICK(c, 13);
    // 0e57d4  shl ax, 1
    X86_AT(c, 0xe57d4u);
    { uint32_t v = (c.r[0] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 4, v, 0x1u, 2, w); if (w) s16(c, 0, r); }
    // 0e57d7  shl bx, 1
    X86_AT(c, 0xe57d7u);
    { uint32_t v = (c.r[3] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 4, v, 0x1u, 2, w); if (w) s16(c, 3, r); }
    // 0e57da  jmp 0xe57ce
    X86_AT(c, 0xe57dau);
    X86_POLL(c, 0xe57ceu); goto L_e57ce;
L_e57dc:
    X86_TICK(c, 7);
    // 0e57dc  cmp ax, 0x3ff
    X86_AT(c, 0xe57dcu);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), 0x3FFu, 0, 2);
    // 0e57e0  jb 0xe57ee
    X86_AT(c, 0xe57e0u);
    if (x86_cc(c, 2)) { goto L_e57ee; }
    X86_TICK(c, 13);
    // 0e57e6  shr ax, 1
    X86_AT(c, 0xe57e6u);
    { uint32_t v = (c.r[0] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 2, w); if (w) s16(c, 0, r); }
    // 0e57e9  shr bx, 1
    X86_AT(c, 0xe57e9u);
    { uint32_t v = (c.r[3] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 2, w); if (w) s16(c, 3, r); }
    // 0e57ec  jmp 0xe57dc
    X86_AT(c, 0xe57ecu);
    X86_POLL(c, 0xe57dcu); goto L_e57dc;
L_e57ee:
    X86_TICK(c, 31);
    // 0e57ee  pushf 
    X86_AT(c, 0xe57eeu);
    push16(c, c.fl & 0xFFFFu);
    // 0e57f0  cli 
    X86_AT(c, 0xe57f0u);
    c.fl &= ~X86_IF;
    // 0e57f1  mov word ptr [0xc331e], ax
    X86_AT(c, 0xe57f1u);
    wr16((c.sbase[3] + (uint32_t)(0xC331Eu)), (c.r[0] & 0xFFFFu));
    // 0e57f7  mov word ptr [0xc3317], bx
    X86_AT(c, 0xe57f7u);
    wr16((c.sbase[3] + (uint32_t)(0xC3317u)), (c.r[3] & 0xFFFFu));
    // 0e57fe  mov ecx, eax
    X86_AT(c, 0xe57feu);
    c.r[1] = c.r[0];
    // 0e5800  sub ecx, 2
    X86_AT(c, 0xe5800u);
    { uint32_t v = c.r[1]; c.r[1] = x86_sub(c, v, 0x2u, 0, 4); }
    // 0e5803  neg ecx
    X86_AT(c, 0xe5803u);
    { uint32_t v = c.r[1]; c.r[1] = x86_neg(c, v, 4); }
    // 0e5805  mov bl, 0xff
    X86_AT(c, 0xe5805u);
    s8(c, 3, 0xFFu);
    // 0e5807  push ecx
    X86_AT(c, 0xe5807u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 0e5808  push ebx
    X86_AT(c, 0xe5808u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0e5809  call 0xe39e9
    X86_AT(c, 0xe5809u);
    push32(c, 0xe580eu); x86_call_known(c, 0xe39e9u, f_000e39e9); X86_RET(c, 0xe580eu);
    X86_TICK(c, 15);
    // 0e580e  add esp, 8
    X86_AT(c, 0xe580eu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0e5811  popf 
    X86_AT(c, 0xe5811u);
    x86_popfd(c, 2);
    // 0e5813  jmp 0xe584c
    X86_AT(c, 0xe5813u);
    goto L_e584c;
L_e5818:
    X86_TICK(c, 13);
    // 0e5818  push eax
    X86_AT(c, 0xe5818u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e5819  push ebx
    X86_AT(c, 0xe5819u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0e581a  movzx ebx, al
    X86_AT(c, 0xe581au);
    c.r[3] = g8(c, 0);
    // 0e581d  mov ax, word ptr cs:[ebx*2 + 0xe4e22]
    X86_AT(c, 0xe581du);
    s16(c, 0, rd16((c.sbase[1] + (uint32_t)(c.r[3] * 2 + 0xE4E22u))));
    // 0e5826  mov bx, 0x10
    X86_AT(c, 0xe5826u);
    s16(c, 3, 0x10u);
L_e582a:
    X86_TICK(c, 7);
    // 0e582a  cmp ax, 0x450
    X86_AT(c, 0xe582au);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), 0x450u, 0, 2);
    // 0e582e  ja 0xe583c
    X86_AT(c, 0xe582eu);
    if (x86_cc(c, 7)) { goto L_e583c; }
    X86_TICK(c, 13);
    // 0e5834  shl ax, 1
    X86_AT(c, 0xe5834u);
    { uint32_t v = (c.r[0] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 4, v, 0x1u, 2, w); if (w) s16(c, 0, r); }
    // 0e5837  shl bx, 1
    X86_AT(c, 0xe5837u);
    { uint32_t v = (c.r[3] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 4, v, 0x1u, 2, w); if (w) s16(c, 3, r); }
    // 0e583a  jmp 0xe582a
    X86_AT(c, 0xe583au);
    X86_POLL(c, 0xe582au); goto L_e582a;
L_e583c:
    X86_TICK(c, 18);
    // 0e583c  pushfd 
    X86_AT(c, 0xe583cu);
    push32(c, c.fl & 0x00FCFFFFu);
    // 0e583d  cli 
    X86_AT(c, 0xe583du);
    c.fl &= ~X86_IF;
    // 0e583e  mov word ptr [0xc331e], ax
    X86_AT(c, 0xe583eu);
    wr16((c.sbase[3] + (uint32_t)(0xC331Eu)), (c.r[0] & 0xFFFFu));
    // 0e5844  mov word ptr [0xc3317], bx
    X86_AT(c, 0xe5844u);
    wr16((c.sbase[3] + (uint32_t)(0xC3317u)), (c.r[3] & 0xFFFFu));
    // 0e584b  popfd 
    X86_AT(c, 0xe584bu);
    x86_popfd(c, 4);
L_e584c:
    X86_TICK(c, 18);
    // 0e584c  pop ebx
    X86_AT(c, 0xe584cu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0e584d  pop eax
    X86_AT(c, 0xe584du);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 0e584e  ret 
    X86_AT(c, 0xe584eu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe57afu, "ran off the end of a function");
}
void f_000e584f(X86Cpu& c) {
    X86_TICK(c, 26);
    // 0e584f  push eax
    X86_AT(c, 0xe584fu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e5850  push ds
    X86_AT(c, 0xe5850u);
    push32(c, c.sreg[3]);
    // 0e5851  push es
    X86_AT(c, 0xe5851u);
    push32(c, c.sreg[0]);
    // 0e5852  mov ax, 0x14
    X86_AT(c, 0xe5852u);
    s16(c, 0, 0x14u);
    // 0e5856  mov ds, eax
    X86_AT(c, 0xe5856u);
    x86_load_seg(c, 3, (c.r[0] & 0xFFFFu) & 0xFFFFu);
    // 0e5858  mov es, eax
    X86_AT(c, 0xe5858u);
    x86_load_seg(c, 0, (c.r[0] & 0xFFFFu) & 0xFFFFu);
    // 0e585a  cld 
    X86_AT(c, 0xe585au);
    c.fl &= ~X86_DF;
    // 0e585b  cmp byte ptr [0xc3568], 0
    X86_AT(c, 0xe585bu);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0xC3568u))), 0x0u, 0, 1);
    // 0e5862  jne 0xe587e
    X86_AT(c, 0xe5862u);
    if (x86_cc(c, 5)) { goto L_e587e; }
    X86_TICK(c, 10);
    // 0e5868  mov dword ptr [0xc356f], esp
    X86_AT(c, 0xe5868u);
    wr32((c.sbase[3] + (uint32_t)(0xC356Fu)), c.r[4]);
    // 0e586e  mov word ptr [0xc3573], ss
    X86_AT(c, 0xe586eu);
    wr16((c.sbase[3] + (uint32_t)(0xC3573u)), (uint32_t)c.sreg[2]);
    // 0e5874  mov eax, ds
    X86_AT(c, 0xe5874u);
    c.r[0] = (uint32_t)c.sreg[3];
    // 0e5876  mov ss, eax
    X86_AT(c, 0xe5876u);
    x86_load_seg(c, 2, (c.r[0] & 0xFFFFu) & 0xFFFFu);
    // 0e5878  lea esp, [0xc3e75]
    X86_AT(c, 0xe5878u);
    c.r[4] = (uint32_t)(0xC3E75u);
L_e587e:
    X86_TICK(c, 53);
    // 0e587e  inc byte ptr [0xc3568]
    X86_AT(c, 0xe587eu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xC3568u)); uint32_t v = rd8(ea); wr8(ea, x86_inc(c, v, 1)); }
    // 0e5884  sti 
    X86_AT(c, 0xe5884u);
    c.fl |= X86_IF;
    // 0e5885  push fs
    X86_AT(c, 0xe5885u);
    push32(c, c.sreg[4]);
    // 0e5887  push gs
    X86_AT(c, 0xe5887u);
    push32(c, c.sreg[5]);
    // 0e5889  pushal 
    X86_AT(c, 0xe5889u);
    { uint32_t sp = c.r[4]; for (int k = 0; k < 8; ++k) push32(c, k == 4 ? sp : c.r[k]); }
    // 0e588a  mov dx, 0xe70
    X86_AT(c, 0xe588au);
    s16(c, 2, 0xE70u);
    // 0e588e  in ax, dx
    X86_AT(c, 0xe588eu);
    s16(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 2));
    // 0e5890  xor ax, 0xffff
    X86_AT(c, 0xe5890u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_logic(c, v ^ 0xFFFFu, 2)); }
    // 0e5894  call 0xe595a
    X86_AT(c, 0xe5894u);
    push32(c, 0xe5899u); x86_call_known(c, 0xe595au, f_000e595a); X86_RET(c, 0xe5899u);
    X86_TICK(c, 7);
    // 0e5899  call 0xe5976
    X86_AT(c, 0xe5899u);
    push32(c, 0xe589eu); x86_call_known(c, 0xe5976u, f_000e5976); X86_RET(c, 0xe589eu);
    X86_TICK(c, 7);
    // 0e589e  call 0xe5996
    X86_AT(c, 0xe589eu);
    push32(c, 0xe58a3u); x86_call_known(c, 0xe5996u, f_000e5996); X86_RET(c, 0xe58a3u);
    X86_TICK(c, 7);
    // 0e58a3  call 0xe3dc5
    X86_AT(c, 0xe58a3u);
    push32(c, 0xe58a8u); x86_call_known(c, 0xe3dc5u, f_000e3dc5); X86_RET(c, 0xe58a8u);
    X86_TICK(c, 45);
    // 0e58a8  popal 
    X86_AT(c, 0xe58a8u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 0e58a9  pop gs
    X86_AT(c, 0xe58a9u);
    x86_load_seg(c, 5, pop32(c) & 0xFFFFu);
    // 0e58ab  pop fs
    X86_AT(c, 0xe58abu);
    x86_load_seg(c, 4, pop32(c) & 0xFFFFu);
    // 0e58ad  cli 
    X86_AT(c, 0xe58adu);
    c.fl &= ~X86_IF;
    // 0e58ae  dec byte ptr [0xc3568]
    X86_AT(c, 0xe58aeu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xC3568u)); uint32_t v = rd8(ea); wr8(ea, x86_dec(c, v, 1)); }
    // 0e58b4  jne 0xe58c6
    X86_AT(c, 0xe58b4u);
    if (x86_cc(c, 5)) { goto L_e58c6; }
    X86_TICK(c, 8);
    // 0e58ba  mov esp, dword ptr [0xc356f]
    X86_AT(c, 0xe58bau);
    c.r[4] = rd32((c.sbase[3] + (uint32_t)(0xC356Fu)));
    // 0e58c0  mov ss, word ptr [0xc3573]
    X86_AT(c, 0xe58c0u);
    x86_load_seg(c, 2, rd16((c.sbase[3] + (uint32_t)(0xC3573u))) & 0xFFFFu);
L_e58c6:
    X86_TICK(c, 18);
    // 0e58c6  pop es
    X86_AT(c, 0xe58c6u);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 0e58c7  pop ds
    X86_AT(c, 0xe58c7u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 0e58c8  pop eax
    X86_AT(c, 0xe58c8u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 0e58c9  iretd 
    X86_AT(c, 0xe58c9u);
    x86_iret(c, 4); return;
    x86_fault(c, 0xe584fu, "ran off the end of a function");
}
void f_000e58ca(X86Cpu& c) {
    X86_TICK(c, 26);
    // 0e58ca  push eax
    X86_AT(c, 0xe58cau);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e58cb  push ds
    X86_AT(c, 0xe58cbu);
    push32(c, c.sreg[3]);
    // 0e58cc  push es
    X86_AT(c, 0xe58ccu);
    push32(c, c.sreg[0]);
    // 0e58cd  mov ax, 0x14
    X86_AT(c, 0xe58cdu);
    s16(c, 0, 0x14u);
    // 0e58d1  mov ds, eax
    X86_AT(c, 0xe58d1u);
    x86_load_seg(c, 3, (c.r[0] & 0xFFFFu) & 0xFFFFu);
    // 0e58d3  mov es, eax
    X86_AT(c, 0xe58d3u);
    x86_load_seg(c, 0, (c.r[0] & 0xFFFFu) & 0xFFFFu);
    // 0e58d5  cld 
    X86_AT(c, 0xe58d5u);
    c.fl &= ~X86_DF;
    // 0e58d6  cmp byte ptr [0xc3567], 0
    X86_AT(c, 0xe58d6u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0xC3567u))), 0x0u, 0, 1);
    // 0e58dd  jne 0xe58f9
    X86_AT(c, 0xe58ddu);
    if (x86_cc(c, 5)) { goto L_e58f9; }
    X86_TICK(c, 10);
    // 0e58e3  mov dword ptr [0xc3569], esp
    X86_AT(c, 0xe58e3u);
    wr32((c.sbase[3] + (uint32_t)(0xC3569u)), c.r[4]);
    // 0e58e9  mov word ptr [0xc356d], ss
    X86_AT(c, 0xe58e9u);
    wr16((c.sbase[3] + (uint32_t)(0xC356Du)), (uint32_t)c.sreg[2]);
    // 0e58ef  mov eax, ds
    X86_AT(c, 0xe58efu);
    c.r[0] = (uint32_t)c.sreg[3];
    // 0e58f1  mov ss, eax
    X86_AT(c, 0xe58f1u);
    x86_load_seg(c, 2, (c.r[0] & 0xFFFFu) & 0xFFFFu);
    // 0e58f3  lea esp, [0xc3c75]
    X86_AT(c, 0xe58f3u);
    c.r[4] = (uint32_t)(0xC3C75u);
L_e58f9:
    X86_TICK(c, 51);
    // 0e58f9  inc byte ptr [0xc3567]
    X86_AT(c, 0xe58f9u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xC3567u)); uint32_t v = rd8(ea); wr8(ea, x86_inc(c, v, 1)); }
    // 0e58ff  sti 
    X86_AT(c, 0xe58ffu);
    c.fl |= X86_IF;
    // 0e5900  push fs
    X86_AT(c, 0xe5900u);
    push32(c, c.sreg[4]);
    // 0e5902  push gs
    X86_AT(c, 0xe5902u);
    push32(c, c.sreg[5]);
    // 0e5904  pushal 
    X86_AT(c, 0xe5904u);
    { uint32_t sp = c.r[4]; for (int k = 0; k < 8; ++k) push32(c, k == 4 ? sp : c.r[k]); }
    // 0e5905  mov dx, 0xe73
    X86_AT(c, 0xe5905u);
    s16(c, 2, 0xE73u);
    // 0e5909  in al, dx
    X86_AT(c, 0xe5909u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 0e590a  test al, 1
    X86_AT(c, 0xe590au);
    (void)x86_logic(c, g8(c, 0) & 0x1u, 1);
    // 0e590c  je 0xe5913
    X86_AT(c, 0xe590cu);
    if (x86_cc(c, 4)) { goto L_e5913; }
    X86_TICK(c, 7);
    // 0e590e  call 0xe59bf
    X86_AT(c, 0xe590eu);
    push32(c, 0xe5913u); x86_call_known(c, 0xe59bfu, f_000e59bf); X86_RET(c, 0xe5913u);
L_e5913:
    X86_TICK(c, 7);
    // 0e5913  test al, 2
    X86_AT(c, 0xe5913u);
    (void)x86_logic(c, g8(c, 0) & 0x2u, 1);
    // 0e5915  je 0xe591c
    X86_AT(c, 0xe5915u);
    if (x86_cc(c, 4)) { goto L_e591c; }
    X86_TICK(c, 7);
    // 0e5917  call 0xe5a34
    X86_AT(c, 0xe5917u);
    push32(c, 0xe591cu); x86_call_known(c, 0xe5a34u, f_000e5a34); X86_RET(c, 0xe591cu);
L_e591c:
    X86_TICK(c, 9);
    // 0e591c  cli 
    X86_AT(c, 0xe591cu);
    c.fl &= ~X86_IF;
    // 0e591d  call 0xe3dc5
    X86_AT(c, 0xe591du);
    push32(c, 0xe5922u); x86_call_known(c, 0xe3dc5u, f_000e3dc5); X86_RET(c, 0xe5922u);
    X86_TICK(c, 7);
    // 0e5922  test al, 1
    X86_AT(c, 0xe5922u);
    (void)x86_logic(c, g8(c, 0) & 0x1u, 1);
    // 0e5924  je 0xe5938
    X86_AT(c, 0xe5924u);
    if (x86_cc(c, 4)) { goto L_e5938; }
    X86_TICK(c, 7);
    // 0e5926  call 0xe3dbf
    X86_AT(c, 0xe5926u);
    push32(c, 0xe592bu); x86_call_known(c, 0xe3dbfu, f_000e3dbf); X86_RET(c, 0xe592bu);
    X86_TICK(c, 7);
    // 0e592b  or al, al
    X86_AT(c, 0xe592bu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v | g8(c, 0), 1)); }
    // 0e592d  jne 0xe5938
    X86_AT(c, 0xe592du);
    if (x86_cc(c, 5)) { goto L_e5938; }
    X86_TICK(c, 7);
    // 0e5933  call 0xe5b60
    X86_AT(c, 0xe5933u);
    push32(c, 0xe5938u); x86_call_known(c, 0xe5b60u, f_000e5b60); X86_RET(c, 0xe5938u);
L_e5938:
    X86_TICK(c, 45);
    // 0e5938  popal 
    X86_AT(c, 0xe5938u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 0e5939  pop gs
    X86_AT(c, 0xe5939u);
    x86_load_seg(c, 5, pop32(c) & 0xFFFFu);
    // 0e593b  pop fs
    X86_AT(c, 0xe593bu);
    x86_load_seg(c, 4, pop32(c) & 0xFFFFu);
    // 0e593d  cli 
    X86_AT(c, 0xe593du);
    c.fl &= ~X86_IF;
    // 0e593e  dec byte ptr [0xc3567]
    X86_AT(c, 0xe593eu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xC3567u)); uint32_t v = rd8(ea); wr8(ea, x86_dec(c, v, 1)); }
    // 0e5944  jne 0xe5956
    X86_AT(c, 0xe5944u);
    if (x86_cc(c, 5)) { goto L_e5956; }
    X86_TICK(c, 8);
    // 0e594a  mov esp, dword ptr [0xc3569]
    X86_AT(c, 0xe594au);
    c.r[4] = rd32((c.sbase[3] + (uint32_t)(0xC3569u)));
    // 0e5950  mov ss, word ptr [0xc356d]
    X86_AT(c, 0xe5950u);
    x86_load_seg(c, 2, rd16((c.sbase[3] + (uint32_t)(0xC356Du))) & 0xFFFFu);
L_e5956:
    X86_TICK(c, 18);
    // 0e5956  pop es
    X86_AT(c, 0xe5956u);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 0e5957  pop ds
    X86_AT(c, 0xe5957u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 0e5958  pop eax
    X86_AT(c, 0xe5958u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 0e5959  iretd 
    X86_AT(c, 0xe5959u);
    x86_iret(c, 4); return;
    x86_fault(c, 0xe58cau, "ran off the end of a function");
}
void f_000e595a(X86Cpu& c) {
    X86_TICK(c, 11);
    // 0e595a  push ax
    X86_AT(c, 0xe595au);
    { uint32_t v = (c.r[0] & 0xFFFFu); push16(c, v); }
    // 0e595c  mov al, ah
    X86_AT(c, 0xe595cu);
    s8(c, 0, g8(c, 4));
    // 0e595e  and al, 0xf
    X86_AT(c, 0xe595eu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & 0xFu, 1)); }
    // 0e5960  je 0xe5973
    X86_AT(c, 0xe5960u);
    if (x86_cc(c, 4)) { goto L_e5973; }
    X86_TICK(c, 2);
    // 0e5962  xor ecx, ecx
    X86_AT(c, 0xe5962u);
    { uint32_t v = c.r[1]; c.r[1] = x86_logic(c, v ^ c.r[1], 4); }
L_e5964:
    X86_TICK(c, 8);
    // 0e5964  shr al, 1
    X86_AT(c, 0xe5964u);
    { uint32_t v = g8(c, 0); bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 1, w); if (w) s8(c, 0, r); }
    // 0e5966  jae 0xe596d
    X86_AT(c, 0xe5966u);
    if (x86_cc(c, 3)) { goto L_e596d; }
    X86_TICK(c, 7);
    // 0e5968  call 0xe5a92
    X86_AT(c, 0xe5968u);
    push32(c, 0xe596du); x86_call_known(c, 0xe5a92u, f_000e5a92); X86_RET(c, 0xe596du);
L_e596d:
    X86_TICK(c, 9);
    // 0e596d  inc ecx
    X86_AT(c, 0xe596du);
    { uint32_t v = c.r[1]; c.r[1] = x86_inc(c, v, 4); }
    // 0e596e  cmp ecx, 4
    X86_AT(c, 0xe596eu);
    (void)x86_sub(c, c.r[1], 0x4u, 0, 4);
    // 0e5971  jb 0xe5964
    X86_AT(c, 0xe5971u);
    if (x86_cc(c, 2)) { X86_POLL(c, 0xe5964u); goto L_e5964; }
L_e5973:
    X86_TICK(c, 14);
    // 0e5973  pop ax
    X86_AT(c, 0xe5973u);
    { uint32_t v = pop16(c); s16(c, 0, v); }
    // 0e5975  ret 
    X86_AT(c, 0xe5975u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe595au, "ran off the end of a function");
}
void f_000e5976(X86Cpu& c) {
    X86_TICK(c, 9);
    // 0e5976  push ax
    X86_AT(c, 0xe5976u);
    { uint32_t v = (c.r[0] & 0xFFFFu); push16(c, v); }
    // 0e5978  or al, al
    X86_AT(c, 0xe5978u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v | g8(c, 0), 1)); }
    // 0e597a  je 0xe5993
    X86_AT(c, 0xe597au);
    if (x86_cc(c, 4)) { goto L_e5993; }
    X86_TICK(c, 2);
    // 0e597c  xor ecx, ecx
    X86_AT(c, 0xe597cu);
    { uint32_t v = c.r[1]; c.r[1] = x86_logic(c, v ^ c.r[1], 4); }
L_e597e:
    X86_TICK(c, 8);
    // 0e597e  shr al, 1
    X86_AT(c, 0xe597eu);
    { uint32_t v = g8(c, 0); bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 1, w); if (w) s8(c, 0, r); }
    // 0e5980  jae 0xe598b
    X86_AT(c, 0xe5980u);
    if (x86_cc(c, 3)) { goto L_e598b; }
    X86_TICK(c, 7);
    // 0e5986  call 0xe5af2
    X86_AT(c, 0xe5986u);
    push32(c, 0xe598bu); x86_call_known(c, 0xe5af2u, f_000e5af2); X86_RET(c, 0xe598bu);
L_e598b:
    X86_TICK(c, 9);
    // 0e598b  inc cx
    X86_AT(c, 0xe598bu);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_inc(c, v, 2)); }
    // 0e598d  cmp cx, 8
    X86_AT(c, 0xe598du);
    (void)x86_sub(c, (c.r[1] & 0xFFFFu), 0x8u, 0, 2);
    // 0e5991  jb 0xe597e
    X86_AT(c, 0xe5991u);
    if (x86_cc(c, 2)) { X86_POLL(c, 0xe597eu); goto L_e597e; }
L_e5993:
    X86_TICK(c, 14);
    // 0e5993  pop ax
    X86_AT(c, 0xe5993u);
    { uint32_t v = pop16(c); s16(c, 0, v); }
    // 0e5995  ret 
    X86_AT(c, 0xe5995u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe5976u, "ran off the end of a function");
}
void f_000e5996(X86Cpu& c) {
    X86_TICK(c, 17);
    // 0e5996  push ax
    X86_AT(c, 0xe5996u);
    { uint32_t v = (c.r[0] & 0xFFFFu); push16(c, v); }
    // 0e5998  mov al, ah
    X86_AT(c, 0xe5998u);
    s8(c, 0, g8(c, 4));
    // 0e599a  and al, 0xf0
    X86_AT(c, 0xe599au);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & 0xF0u, 1)); }
    // 0e599c  and al, byte ptr [0xc3547]
    X86_AT(c, 0xe599cu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & rd8((c.sbase[3] + (uint32_t)(0xC3547u))), 1)); }
    // 0e59a2  je 0xe59bc
    X86_AT(c, 0xe59a2u);
    if (x86_cc(c, 4)) { goto L_e59bc; }
    X86_TICK(c, 31);
    // 0e59a4  or byte ptr [0xc3548], al
    X86_AT(c, 0xe59a4u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xC3548u)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | g8(c, 0), 1)); }
    // 0e59aa  xor al, 0xff
    X86_AT(c, 0xe59aau);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ 0xFFu, 1)); }
    // 0e59ac  and al, byte ptr [0xc3547]
    X86_AT(c, 0xe59acu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & rd8((c.sbase[3] + (uint32_t)(0xC3547u))), 1)); }
    // 0e59b2  mov dx, 0xe71
    X86_AT(c, 0xe59b2u);
    s16(c, 2, 0xE71u);
    // 0e59b6  out dx, al
    X86_AT(c, 0xe59b6u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 0e59b7  mov byte ptr [0xc3547], al
    X86_AT(c, 0xe59b7u);
    wr8((c.sbase[3] + (uint32_t)(0xC3547u)), g8(c, 0));
L_e59bc:
    X86_TICK(c, 14);
    // 0e59bc  pop ax
    X86_AT(c, 0xe59bcu);
    { uint32_t v = pop16(c); s16(c, 0, v); }
    // 0e59be  ret 
    X86_AT(c, 0xe59beu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe5996u, "ran off the end of a function");
}
void f_000e59bf(X86Cpu& c) {
    X86_TICK(c, 9);
    // 0e59bf  push ax
    X86_AT(c, 0xe59bfu);
    { uint32_t v = (c.r[0] & 0xFFFFu); push16(c, v); }
    // 0e59c1  call 0xe575f
    X86_AT(c, 0xe59c1u);
    push32(c, 0xe59c6u); x86_call_known(c, 0xe575fu, f_000e575f); X86_RET(c, 0xe59c6u);
    X86_TICK(c, 8);
    // 0e59c6  sub ax, 8
    X86_AT(c, 0xe59c6u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_sub(c, v, 0x8u, 0, 2)); }
    // 0e59ca  mov dx, word ptr [0xc331e]
    X86_AT(c, 0xe59cau);
    s16(c, 2, rd16((c.sbase[3] + (uint32_t)(0xC331Eu))));
    // 0e59d1  xor cx, cx
    X86_AT(c, 0xe59d1u);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_logic(c, v ^ (c.r[1] & 0xFFFFu), 2)); }
L_e59d4:
    X86_TICK(c, 9);
    // 0e59d4  inc cx
    X86_AT(c, 0xe59d4u);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_inc(c, v, 2)); }
    // 0e59d6  add ax, dx
    X86_AT(c, 0xe59d6u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, (c.r[2] & 0xFFFFu), 0, 2)); }
    // 0e59d9  jae 0xe59d4
    X86_AT(c, 0xe59d9u);
    if (x86_cc(c, 3)) { X86_POLL(c, 0xe59d4u); goto L_e59d4; }
    X86_TICK(c, 7);
    // 0e59db  call 0xe5742
    X86_AT(c, 0xe59dbu);
    push32(c, 0xe59e0u); x86_call_known(c, 0xe5742u, f_000e5742); X86_RET(c, 0xe59e0u);
    X86_TICK(c, 53);
    // 0e59e0  mov ax, word ptr [0xc3317]
    X86_AT(c, 0xe59e0u);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(0xC3317u))));
    // 0e59e6  mul cl
    X86_AT(c, 0xe59e6u);
    x86_mul(c, g8(c, 1), 1);
    // 0e59e8  add ax, word ptr [0xc3315]
    X86_AT(c, 0xe59e8u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[3] + (uint32_t)(0xC3315u))), 0, 2)); }
    // 0e59ef  mov cx, ax
    X86_AT(c, 0xe59efu);
    s16(c, 1, (c.r[0] & 0xFFFFu));
    // 0e59f2  and cx, 0xf
    X86_AT(c, 0xe59f2u);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_logic(c, v & 0xFu, 2)); }
    // 0e59f6  mov word ptr [0xc3315], cx
    X86_AT(c, 0xe59f6u);
    wr16((c.sbase[3] + (uint32_t)(0xC3315u)), (c.r[1] & 0xFFFFu));
    // 0e59fd  shr ax, 4
    X86_AT(c, 0xe59fdu);
    { uint32_t v = (c.r[0] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 5, v, 0x4u, 2, w); if (w) s16(c, 0, r); }
    // 0e5a01  sub byte ptr [0xc3314], al
    X86_AT(c, 0xe5a01u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xC3314u)); uint32_t v = rd8(ea); wr8(ea, x86_sub(c, v, g8(c, 0), 0, 1)); }
    // 0e5a07  jns 0xe5a18
    X86_AT(c, 0xe5a07u);
    if (x86_cc(c, 9)) { goto L_e5a18; }
L_e5a09:
    X86_TICK(c, 18);
    // 0e5a09  inc byte ptr [0xc3313]
    X86_AT(c, 0xe5a09u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xC3313u)); uint32_t v = rd8(ea); wr8(ea, x86_inc(c, v, 1)); }
    // 0e5a0f  add byte ptr [0xc3314], 4
    X86_AT(c, 0xe5a0fu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xC3314u)); uint32_t v = rd8(ea); wr8(ea, x86_add(c, v, 0x4u, 0, 1)); }
    // 0e5a16  jae 0xe5a09
    X86_AT(c, 0xe5a16u);
    if (x86_cc(c, 3)) { X86_POLL(c, 0xe5a09u); goto L_e5a09; }
L_e5a18:
    X86_TICK(c, 12);
    // 0e5a18  cmp byte ptr [0xc3306], 0
    X86_AT(c, 0xe5a18u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0xC3306u))), 0x0u, 0, 1);
    // 0e5a1f  je 0xe5a31
    X86_AT(c, 0xe5a1fu);
    if (x86_cc(c, 4)) { goto L_e5a31; }
    X86_TICK(c, 12);
    // 0e5a21  cmp byte ptr [0xc3308], 0
    X86_AT(c, 0xe5a21u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0xC3308u))), 0x0u, 0, 1);
    // 0e5a28  jne 0xe5a31
    X86_AT(c, 0xe5a28u);
    if (x86_cc(c, 5)) { goto L_e5a31; }
    X86_TICK(c, 7);
    // 0e5a2a  add word ptr [0xc3319], ax
    X86_AT(c, 0xe5a2au);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xC3319u)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
L_e5a31:
    X86_TICK(c, 14);
    // 0e5a31  pop ax
    X86_AT(c, 0xe5a31u);
    { uint32_t v = pop16(c); s16(c, 0, v); }
    // 0e5a33  ret 
    X86_AT(c, 0xe5a33u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe59bfu, "ran off the end of a function");
}
void f_000e5a34(X86Cpu& c) {
    X86_TICK(c, 11);
    // 0e5a34  push ax
    X86_AT(c, 0xe5a34u);
    { uint32_t v = (c.r[0] & 0xFFFFu); push16(c, v); }
    // 0e5a36  mov ax, 0xffff
    X86_AT(c, 0xe5a36u);
    s16(c, 0, 0xFFFFu);
    // 0e5a3a  call 0xe5771
    X86_AT(c, 0xe5a3au);
    push32(c, 0xe5a3fu); x86_call_known(c, 0xe5771u, f_000e5771); X86_RET(c, 0xe5a3fu);
    X86_TICK(c, 14);
    // 0e5a3f  pop ax
    X86_AT(c, 0xe5a3fu);
    { uint32_t v = pop16(c); s16(c, 0, v); }
    // 0e5a41  ret 
    X86_AT(c, 0xe5a41u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe5a34u, "ran off the end of a function");
}
void f_000e5a42(X86Cpu& c) {
    X86_TICK(c, 31);
    // 0e5a42  mov ax, word ptr [0xc3317]
    X86_AT(c, 0xe5a42u);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(0xC3317u))));
    // 0e5a48  add ax, word ptr [0xc3315]
    X86_AT(c, 0xe5a48u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[3] + (uint32_t)(0xC3315u))), 0, 2)); }
    // 0e5a4f  mov cx, ax
    X86_AT(c, 0xe5a4fu);
    s16(c, 1, (c.r[0] & 0xFFFFu));
    // 0e5a52  and cx, 0xf
    X86_AT(c, 0xe5a52u);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_logic(c, v & 0xFu, 2)); }
    // 0e5a56  mov word ptr [0xc3315], cx
    X86_AT(c, 0xe5a56u);
    wr16((c.sbase[3] + (uint32_t)(0xC3315u)), (c.r[1] & 0xFFFFu));
    // 0e5a5d  shr ax, 4
    X86_AT(c, 0xe5a5du);
    { uint32_t v = (c.r[0] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 5, v, 0x4u, 2, w); if (w) s16(c, 0, r); }
    // 0e5a61  sub byte ptr [0xc3314], al
    X86_AT(c, 0xe5a61u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xC3314u)); uint32_t v = rd8(ea); wr8(ea, x86_sub(c, v, g8(c, 0), 0, 1)); }
    // 0e5a67  jns 0xe5a78
    X86_AT(c, 0xe5a67u);
    if (x86_cc(c, 9)) { goto L_e5a78; }
L_e5a69:
    X86_TICK(c, 18);
    // 0e5a69  inc byte ptr [0xc3313]
    X86_AT(c, 0xe5a69u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xC3313u)); uint32_t v = rd8(ea); wr8(ea, x86_inc(c, v, 1)); }
    // 0e5a6f  add byte ptr [0xc3314], 4
    X86_AT(c, 0xe5a6fu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xC3314u)); uint32_t v = rd8(ea); wr8(ea, x86_add(c, v, 0x4u, 0, 1)); }
    // 0e5a76  jae 0xe5a69
    X86_AT(c, 0xe5a76u);
    if (x86_cc(c, 3)) { X86_POLL(c, 0xe5a69u); goto L_e5a69; }
L_e5a78:
    X86_TICK(c, 12);
    // 0e5a78  cmp byte ptr [0xc3306], 0
    X86_AT(c, 0xe5a78u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0xC3306u))), 0x0u, 0, 1);
    // 0e5a7f  je 0xe5a91
    X86_AT(c, 0xe5a7fu);
    if (x86_cc(c, 4)) { goto L_e5a91; }
    X86_TICK(c, 12);
    // 0e5a81  cmp byte ptr [0xc3308], 0
    X86_AT(c, 0xe5a81u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0xC3308u))), 0x0u, 0, 1);
    // 0e5a88  jne 0xe5a91
    X86_AT(c, 0xe5a88u);
    if (x86_cc(c, 5)) { goto L_e5a91; }
    X86_TICK(c, 7);
    // 0e5a8a  add word ptr [0xc3319], ax
    X86_AT(c, 0xe5a8au);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xC3319u)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
L_e5a91:
    X86_TICK(c, 10);
    // 0e5a91  ret 
    X86_AT(c, 0xe5a91u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe5a42u, "ran off the end of a function");
}
void f_000e5a92(X86Cpu& c) {
    X86_TICK(c, 32);
    // 0e5a92  push ax
    X86_AT(c, 0xe5a92u);
    { uint32_t v = (c.r[0] & 0xFFFFu); push16(c, v); }
    // 0e5a94  mov ebx, ecx
    X86_AT(c, 0xe5a94u);
    c.r[3] = c.r[1];
    // 0e5a96  shl ebx, 5
    X86_AT(c, 0xe5a96u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[3] = r; }
    // 0e5a99  lea ebx, [ebx + 0xc3675]
    X86_AT(c, 0xe5a99u);
    c.r[3] = (uint32_t)(c.r[3] + 0xC3675u);
    // 0e5a9f  mov dx, word ptr [ebx + 0x14]
    X86_AT(c, 0xe5a9fu);
    s16(c, 2, rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x14u))));
    // 0e5aa3  in al, dx
    X86_AT(c, 0xe5aa3u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 0e5aa4  test al, 4
    X86_AT(c, 0xe5aa4u);
    (void)x86_logic(c, g8(c, 0) & 0x4u, 1);
    // 0e5aa6  je 0xe5ac0
    X86_AT(c, 0xe5aa6u);
    if (x86_cc(c, 4)) { goto L_e5ac0; }
    X86_TICK(c, 6);
    // 0e5aa8  mov byte ptr [ebx + 0x19], 0x10
    X86_AT(c, 0xe5aa8u);
    wr8((c.sbase[3] + (uint32_t)(c.r[3] + 0x19u)), 0x10u);
    // 0e5aac  mov dx, word ptr [ebx + 0x14]
    X86_AT(c, 0xe5aacu);
    s16(c, 2, rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x14u))));
L_e5ab0:
    X86_TICK(c, 19);
    // 0e5ab0  in al, dx
    X86_AT(c, 0xe5ab0u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 0e5ab1  test al, 1
    X86_AT(c, 0xe5ab1u);
    (void)x86_logic(c, g8(c, 0) & 0x1u, 1);
    // 0e5ab3  jne 0xe5ab0
    X86_AT(c, 0xe5ab3u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xe5ab0u); goto L_e5ab0; }
    X86_TICK(c, 24);
    // 0e5ab5  push dx
    X86_AT(c, 0xe5ab5u);
    { uint32_t v = (c.r[2] & 0xFFFFu); push16(c, v); }
    // 0e5ab7  mov dx, word ptr [ebx + 0x12]
    X86_AT(c, 0xe5ab7u);
    s16(c, 2, rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x12u))));
    // 0e5abb  mov al, 0x37
    X86_AT(c, 0xe5abbu);
    s8(c, 0, 0x37u);
    // 0e5abd  out dx, al
    X86_AT(c, 0xe5abdu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 0e5abe  pop dx
    X86_AT(c, 0xe5abeu);
    { uint32_t v = pop16(c); s16(c, 2, v); }
L_e5ac0:
    X86_TICK(c, 19);
    // 0e5ac0  in al, dx
    X86_AT(c, 0xe5ac0u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 0e5ac1  test al, 2
    X86_AT(c, 0xe5ac1u);
    (void)x86_logic(c, g8(c, 0) & 0x2u, 1);
    // 0e5ac3  jne 0xe5ac0
    X86_AT(c, 0xe5ac3u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xe5ac0u); goto L_e5ac0; }
    X86_TICK(c, 21);
    // 0e5ac5  dec dx
    X86_AT(c, 0xe5ac5u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_dec(c, v, 2)); }
    // 0e5ac7  in al, dx
    X86_AT(c, 0xe5ac7u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 0e5ac8  cmp al, 0xf8
    X86_AT(c, 0xe5ac8u);
    (void)x86_sub(c, g8(c, 0), 0xF8u, 0, 1);
    // 0e5aca  jb 0xe5ad0
    X86_AT(c, 0xe5acau);
    if (x86_cc(c, 2)) { goto L_e5ad0; }
    X86_TICK(c, 9);
    // 0e5acc  mov bl, cl
    X86_AT(c, 0xe5accu);
    s8(c, 3, g8(c, 1));
    // 0e5ace  jmp 0xe5aef
    X86_AT(c, 0xe5aceu);
    goto L_e5aef;
L_e5ad0:
    X86_TICK(c, 12);
    // 0e5ad0  cmp word ptr [ebx + 0x10], 0x40
    X86_AT(c, 0xe5ad0u);
    (void)x86_sub(c, rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u))), 0x40u, 0, 2);
    // 0e5ad5  jb 0xe5add
    X86_AT(c, 0xe5ad5u);
    if (x86_cc(c, 2)) { goto L_e5add; }
    X86_TICK(c, 9);
    // 0e5ad7  mov byte ptr [ebx + 0x19], 0x10
    X86_AT(c, 0xe5ad7u);
    wr8((c.sbase[3] + (uint32_t)(c.r[3] + 0x19u)), 0x10u);
    // 0e5adb  jmp 0xe5aef
    X86_AT(c, 0xe5adbu);
    goto L_e5aef;
L_e5add:
    X86_TICK(c, 28);
    // 0e5add  mov edi, dword ptr [ebx + 8]
    X86_AT(c, 0xe5addu);
    c.r[7] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x8u)));
    // 0e5ae0  stosb byte ptr es:[edi], al
    X86_AT(c, 0xe5ae0u);
    x86_string(c, 2, 1, 0, 4, 3);
    // 0e5ae1  inc word ptr [ebx + 0x10]
    X86_AT(c, 0xe5ae1u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3] + 0x10u)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
    // 0e5ae5  cmp edi, dword ptr [ebx + 4]
    X86_AT(c, 0xe5ae5u);
    (void)x86_sub(c, c.r[7], rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u))), 0, 4);
    // 0e5ae8  jne 0xe5aec
    X86_AT(c, 0xe5ae8u);
    if (x86_cc(c, 5)) { goto L_e5aec; }
    X86_TICK(c, 4);
    // 0e5aea  mov edi, dword ptr [ebx]
    X86_AT(c, 0xe5aeau);
    c.r[7] = rd32((c.sbase[3] + (uint32_t)(c.r[3])));
L_e5aec:
    X86_TICK(c, 2);
    // 0e5aec  mov dword ptr [ebx + 8], edi
    X86_AT(c, 0xe5aecu);
    wr32((c.sbase[3] + (uint32_t)(c.r[3] + 0x8u)), c.r[7]);
L_e5aef:
    X86_TICK(c, 14);
    // 0e5aef  pop ax
    X86_AT(c, 0xe5aefu);
    { uint32_t v = pop16(c); s16(c, 0, v); }
    // 0e5af1  ret 
    X86_AT(c, 0xe5af1u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe5a92u, "ran off the end of a function");
}
void f_000e5af2(X86Cpu& c) {
    X86_TICK(c, 20);
    // 0e5af2  push ax
    X86_AT(c, 0xe5af2u);
    { uint32_t v = (c.r[0] & 0xFFFFu); push16(c, v); }
    // 0e5af4  mov ebx, ecx
    X86_AT(c, 0xe5af4u);
    c.r[3] = c.r[1];
    // 0e5af6  shl ebx, 5
    X86_AT(c, 0xe5af6u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[3] = r; }
    // 0e5af9  lea ebx, [ebx + 0xc3575]
    X86_AT(c, 0xe5af9u);
    c.r[3] = (uint32_t)(c.r[3] + 0xC3575u);
    // 0e5aff  dec word ptr [ebx + 0x10]
    X86_AT(c, 0xe5affu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3] + 0x10u)); uint32_t v = rd16(ea); wr16(ea, x86_dec(c, v, 2)); }
    // 0e5b03  js 0xe5b44
    X86_AT(c, 0xe5b03u);
    if (x86_cc(c, 8)) { goto L_e5b44; }
    X86_TICK(c, 4);
    // 0e5b09  mov dx, word ptr [ebx + 0x14]
    X86_AT(c, 0xe5b09u);
    s16(c, 2, rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x14u))));
L_e5b0d:
    X86_TICK(c, 37);
    // 0e5b0d  mov al, 1
    X86_AT(c, 0xe5b0du);
    s8(c, 0, 0x1u);
    // 0e5b0f  out dx, al
    X86_AT(c, 0xe5b0fu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 0e5b10  nop 
    X86_AT(c, 0xe5b10u);
    // 0e5b11  nop 
    X86_AT(c, 0xe5b11u);
    // 0e5b12  in al, dx
    X86_AT(c, 0xe5b12u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 0e5b13  test al, 1
    X86_AT(c, 0xe5b13u);
    (void)x86_logic(c, g8(c, 0) & 0x1u, 1);
    // 0e5b15  jne 0xe5b0d
    X86_AT(c, 0xe5b15u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xe5b0du); goto L_e5b0d; }
    X86_TICK(c, 35);
    // 0e5b17  out dx, al
    X86_AT(c, 0xe5b17u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 0e5b18  nop 
    X86_AT(c, 0xe5b18u);
    // 0e5b19  nop 
    X86_AT(c, 0xe5b19u);
    // 0e5b1a  in al, dx
    X86_AT(c, 0xe5b1au);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 0e5b1b  test al, 1
    X86_AT(c, 0xe5b1bu);
    (void)x86_logic(c, g8(c, 0) & 0x1u, 1);
    // 0e5b1d  jne 0xe5b0d
    X86_AT(c, 0xe5b1du);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xe5b0du); goto L_e5b0d; }
    X86_TICK(c, 60);
    // 0e5b1f  push dx
    X86_AT(c, 0xe5b1fu);
    { uint32_t v = (c.r[2] & 0xFFFFu); push16(c, v); }
    // 0e5b21  mov esi, dword ptr [ebx + 0xc]
    X86_AT(c, 0xe5b21u);
    c.r[6] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0xCu)));
    // 0e5b24  lodsb al, byte ptr [esi]
    X86_AT(c, 0xe5b24u);
    x86_string(c, 3, 1, 0, 4, 3);
    // 0e5b25  mov dx, word ptr [ebx + 0x12]
    X86_AT(c, 0xe5b25u);
    s16(c, 2, rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x12u))));
    // 0e5b29  dec dx
    X86_AT(c, 0xe5b29u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_dec(c, v, 2)); }
    // 0e5b2b  out dx, al
    X86_AT(c, 0xe5b2bu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 0e5b2c  pop dx
    X86_AT(c, 0xe5b2cu);
    { uint32_t v = pop16(c); s16(c, 2, v); }
    // 0e5b2e  mov al, 1
    X86_AT(c, 0xe5b2eu);
    s8(c, 0, 0x1u);
    // 0e5b30  out dx, al
    X86_AT(c, 0xe5b30u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 0e5b31  cmp esi, dword ptr [ebx + 4]
    X86_AT(c, 0xe5b31u);
    (void)x86_sub(c, c.r[6], rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u))), 0, 4);
    // 0e5b34  jne 0xe5b3c
    X86_AT(c, 0xe5b34u);
    if (x86_cc(c, 5)) { goto L_e5b3c; }
    X86_TICK(c, 4);
    // 0e5b3a  mov esi, dword ptr [ebx]
    X86_AT(c, 0xe5b3au);
    c.r[6] = rd32((c.sbase[3] + (uint32_t)(c.r[3])));
L_e5b3c:
    X86_TICK(c, 9);
    // 0e5b3c  mov dword ptr [ebx + 0xc], esi
    X86_AT(c, 0xe5b3cu);
    wr32((c.sbase[3] + (uint32_t)(c.r[3] + 0xCu)), c.r[6]);
    // 0e5b3f  jmp 0xe5b5d
    X86_AT(c, 0xe5b3fu);
    goto L_e5b5d;
L_e5b44:
    X86_TICK(c, 34);
    // 0e5b44  inc word ptr [ebx + 0x10]
    X86_AT(c, 0xe5b44u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3] + 0x10u)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
    // 0e5b48  mov al, byte ptr [ebx + 0x1a]
    X86_AT(c, 0xe5b48u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0x1Au))));
    // 0e5b4b  xor al, 0xff
    X86_AT(c, 0xe5b4bu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ 0xFFu, 1)); }
    // 0e5b4d  and al, byte ptr [0xc3545]
    X86_AT(c, 0xe5b4du);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & rd8((c.sbase[3] + (uint32_t)(0xC3545u))), 1)); }
    // 0e5b53  mov byte ptr [0xc3545], al
    X86_AT(c, 0xe5b53u);
    wr8((c.sbase[3] + (uint32_t)(0xC3545u)), g8(c, 0));
    // 0e5b58  mov dx, 0xe70
    X86_AT(c, 0xe5b58u);
    s16(c, 2, 0xE70u);
    // 0e5b5c  out dx, al
    X86_AT(c, 0xe5b5cu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
L_e5b5d:
    X86_TICK(c, 14);
    // 0e5b5d  pop ax
    X86_AT(c, 0xe5b5du);
    { uint32_t v = pop16(c); s16(c, 0, v); }
    // 0e5b5f  ret 
    X86_AT(c, 0xe5b5fu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe5af2u, "ran off the end of a function");
}
void f_000e5b60(X86Cpu& c) {
    X86_TICK(c, 14);
    // 0e5b60  cli 
    X86_AT(c, 0xe5b60u);
    c.fl &= ~X86_IF;
    // 0e5b61  cmp byte ptr [0xc3566], 0
    X86_AT(c, 0xe5b61u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0xC3566u))), 0x0u, 0, 1);
    // 0e5b68  jne 0xe5bc0
    X86_AT(c, 0xe5b68u);
    if (x86_cc(c, 5)) { goto L_e5bc0; }
    X86_TICK(c, 14);
    // 0e5b6a  mov byte ptr [0xc3566], 0xff
    X86_AT(c, 0xe5b6au);
    wr8((c.sbase[3] + (uint32_t)(0xC3566u)), 0xFFu);
    // 0e5b71  cmp byte ptr [0xc3567], 0
    X86_AT(c, 0xe5b71u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0xC3567u))), 0x0u, 0, 1);
    // 0e5b78  jne 0xe5b94
    X86_AT(c, 0xe5b78u);
    if (x86_cc(c, 5)) { goto L_e5b94; }
    X86_TICK(c, 10);
    // 0e5b7e  mov dword ptr [0xc3569], esp
    X86_AT(c, 0xe5b7eu);
    wr32((c.sbase[3] + (uint32_t)(0xC3569u)), c.r[4]);
    // 0e5b84  mov word ptr [0xc356d], ss
    X86_AT(c, 0xe5b84u);
    wr16((c.sbase[3] + (uint32_t)(0xC356Du)), (uint32_t)c.sreg[2]);
    // 0e5b8a  mov eax, ds
    X86_AT(c, 0xe5b8au);
    c.r[0] = (uint32_t)c.sreg[3];
    // 0e5b8c  mov ss, eax
    X86_AT(c, 0xe5b8cu);
    x86_load_seg(c, 2, (c.r[0] & 0xFFFFu) & 0xFFFFu);
    // 0e5b8e  lea esp, [0xc3c75]
    X86_AT(c, 0xe5b8eu);
    c.r[4] = (uint32_t)(0xC3C75u);
L_e5b94:
    X86_TICK(c, 15);
    // 0e5b94  inc byte ptr [0xc3567]
    X86_AT(c, 0xe5b94u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xC3567u)); uint32_t v = rd8(ea); wr8(ea, x86_inc(c, v, 1)); }
    // 0e5b9a  sti 
    X86_AT(c, 0xe5b9au);
    c.fl |= X86_IF;
    // 0e5b9b  call 0xe482e
    X86_AT(c, 0xe5b9bu);
    push32(c, 0xe5ba0u); x86_call_known(c, 0xe482eu, f_000e482e); X86_RET(c, 0xe5ba0u);
    X86_TICK(c, 13);
    // 0e5ba0  cli 
    X86_AT(c, 0xe5ba0u);
    c.fl &= ~X86_IF;
    // 0e5ba1  dec byte ptr [0xc3567]
    X86_AT(c, 0xe5ba1u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xC3567u)); uint32_t v = rd8(ea); wr8(ea, x86_dec(c, v, 1)); }
    // 0e5ba7  jne 0xe5bb9
    X86_AT(c, 0xe5ba7u);
    if (x86_cc(c, 5)) { goto L_e5bb9; }
    X86_TICK(c, 8);
    // 0e5bad  mov esp, dword ptr [0xc3569]
    X86_AT(c, 0xe5badu);
    c.r[4] = rd32((c.sbase[3] + (uint32_t)(0xC3569u)));
    // 0e5bb3  mov ss, word ptr [0xc356d]
    X86_AT(c, 0xe5bb3u);
    x86_load_seg(c, 2, rd16((c.sbase[3] + (uint32_t)(0xC356Du))) & 0xFFFFu);
L_e5bb9:
    X86_TICK(c, 2);
    // 0e5bb9  mov byte ptr [0xc3566], 0
    X86_AT(c, 0xe5bb9u);
    wr8((c.sbase[3] + (uint32_t)(0xC3566u)), 0x0u);
L_e5bc0:
    X86_TICK(c, 10);
    // 0e5bc0  ret 
    X86_AT(c, 0xe5bc0u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe5b60u, "ran off the end of a function");
}
void f_000e5bd0(X86Cpu& c) {
    X86_TICK(c, 70);
    // 0e5bd0  push es
    X86_AT(c, 0xe5bd0u);
    push32(c, c.sreg[0]);
    // 0e5bd1  pushal 
    X86_AT(c, 0xe5bd1u);
    { uint32_t sp = c.r[4]; for (int k = 0; k < 8; ++k) push32(c, k == 4 ? sp : c.r[k]); }
    // 0e5bd2  push ds
    X86_AT(c, 0xe5bd2u);
    push32(c, c.sreg[3]);
    // 0e5bd3  pop es
    X86_AT(c, 0xe5bd3u);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 0e5bd4  cld 
    X86_AT(c, 0xe5bd4u);
    c.fl &= ~X86_DF;
    // 0e5bd5  xor eax, eax
    X86_AT(c, 0xe5bd5u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v ^ c.r[0], 4); }
    // 0e5bd7  mov byte ptr [0xc3e80], al
    X86_AT(c, 0xe5bd7u);
    wr8((c.sbase[3] + (uint32_t)(0xC3E80u)), g8(c, 0));
    // 0e5bdc  mov byte ptr [0xc3e81], al
    X86_AT(c, 0xe5bdcu);
    wr8((c.sbase[3] + (uint32_t)(0xC3E81u)), g8(c, 0));
    // 0e5be1  mov byte ptr [0xc3e82], al
    X86_AT(c, 0xe5be1u);
    wr8((c.sbase[3] + (uint32_t)(0xC3E82u)), g8(c, 0));
    // 0e5be6  mov byte ptr [0xc3e83], al
    X86_AT(c, 0xe5be6u);
    wr8((c.sbase[3] + (uint32_t)(0xC3E83u)), g8(c, 0));
    // 0e5beb  mov byte ptr [0xc3e84], al
    X86_AT(c, 0xe5bebu);
    wr8((c.sbase[3] + (uint32_t)(0xC3E84u)), g8(c, 0));
    // 0e5bf0  lea edi, [0xc3e85]
    X86_AT(c, 0xe5bf0u);
    c.r[7] = (uint32_t)(0xC3E85u);
    // 0e5bf6  mov ecx, 4
    X86_AT(c, 0xe5bf6u);
    c.r[1] = 0x4u;
    // 0e5bfb  stosd dword ptr es:[edi], eax
    X86_AT(c, 0xe5bfbu);
    x86_string(c, 2, 4, 243, 4, 3);
    // 0e5bfd  not eax
    X86_AT(c, 0xe5bfdu);
    { uint32_t v = c.r[0]; c.r[0] = ~v & 0xFFFFFFFFu; }
    // 0e5bff  lea edi, [0xc3e95]
    X86_AT(c, 0xe5bffu);
    c.r[7] = (uint32_t)(0xC3E95u);
    // 0e5c05  mov ecx, 4
    X86_AT(c, 0xe5c05u);
    c.r[1] = 0x4u;
    // 0e5c0a  stosd dword ptr es:[edi], eax
    X86_AT(c, 0xe5c0au);
    x86_string(c, 2, 4, 243, 4, 3);
    // 0e5c0c  xor al, al
    X86_AT(c, 0xe5c0cu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 0e5c0e  mov ecx, 0x80
    X86_AT(c, 0xe5c0eu);
    c.r[1] = 0x80u;
    // 0e5c13  lea edi, [0xc3ea5]
    X86_AT(c, 0xe5c13u);
    c.r[7] = (uint32_t)(0xC3EA5u);
L_e5c19:
    X86_TICK(c, 21);
    // 0e5c19  mov byte ptr [edi], ah
    X86_AT(c, 0xe5c19u);
    wr8((c.sbase[3] + (uint32_t)(c.r[7])), g8(c, 4));
    // 0e5c1b  mov byte ptr [edi + 1], ah
    X86_AT(c, 0xe5c1bu);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0x1u)), g8(c, 4));
    // 0e5c1e  mov byte ptr [edi + 2], al
    X86_AT(c, 0xe5c1eu);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0x2u)), g8(c, 0));
    // 0e5c21  mov byte ptr [edi + 3], al
    X86_AT(c, 0xe5c21u);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0x3u)), g8(c, 0));
    // 0e5c24  add edi, 4
    X86_AT(c, 0xe5c24u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x4u, 0, 4); }
    // 0e5c27  loop 0xe5c19
    X86_AT(c, 0xe5c27u);
    c.r[1] -= 1; if (c.r[1] != 0) { X86_POLL(c, 0xe5c19u); goto L_e5c19; }
    X86_TICK(c, 6);
    // 0e5c29  mov ecx, 6
    X86_AT(c, 0xe5c29u);
    c.r[1] = 0x6u;
    // 0e5c2e  xor dl, dl
    X86_AT(c, 0xe5c2eu);
    { uint32_t v = g8(c, 2); s8(c, 2, x86_logic(c, v ^ g8(c, 2), 1)); }
    // 0e5c30  mov bl, 0
    X86_AT(c, 0xe5c30u);
    s8(c, 3, 0x0u);
L_e5c32:
    X86_TICK(c, 7);
    // 0e5c32  call 0xe5c52
    X86_AT(c, 0xe5c32u);
    push32(c, 0xe5c37u); x86_call_known(c, 0xe5c52u, f_000e5c52); X86_RET(c, 0xe5c37u);
    X86_TICK(c, 15);
    // 0e5c37  inc dl
    X86_AT(c, 0xe5c37u);
    { uint32_t v = g8(c, 2); s8(c, 2, x86_inc(c, v, 1)); }
    // 0e5c39  inc bl
    X86_AT(c, 0xe5c39u);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_inc(c, v, 1)); }
    // 0e5c3b  loop 0xe5c32
    X86_AT(c, 0xe5c3bu);
    c.r[1] -= 1; if (c.r[1] != 0) { X86_POLL(c, 0xe5c32u); goto L_e5c32; }
    X86_TICK(c, 4);
    // 0e5c3d  mov ecx, 8
    X86_AT(c, 0xe5c3du);
    c.r[1] = 0x8u;
    // 0e5c42  mov bl, 0x40
    X86_AT(c, 0xe5c42u);
    s8(c, 3, 0x40u);
L_e5c44:
    X86_TICK(c, 7);
    // 0e5c44  call 0xe5c52
    X86_AT(c, 0xe5c44u);
    push32(c, 0xe5c49u); x86_call_known(c, 0xe5c52u, f_000e5c52); X86_RET(c, 0xe5c49u);
    X86_TICK(c, 15);
    // 0e5c49  inc dl
    X86_AT(c, 0xe5c49u);
    { uint32_t v = g8(c, 2); s8(c, 2, x86_inc(c, v, 1)); }
    // 0e5c4b  inc bl
    X86_AT(c, 0xe5c4bu);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_inc(c, v, 1)); }
    // 0e5c4d  loop 0xe5c44
    X86_AT(c, 0xe5c4du);
    c.r[1] -= 1; if (c.r[1] != 0) { X86_POLL(c, 0xe5c44u); goto L_e5c44; }
    X86_TICK(c, 38);
    // 0e5c4f  popal 
    X86_AT(c, 0xe5c4fu);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 0e5c50  pop es
    X86_AT(c, 0xe5c50u);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 0e5c51  ret 
    X86_AT(c, 0xe5c51u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe5bd0u, "ran off the end of a function");
}
void f_000e5c52(X86Cpu& c) {
    X86_TICK(c, 25);
    // 0e5c52  pushal 
    X86_AT(c, 0xe5c52u);
    { uint32_t sp = c.r[4]; for (int k = 0; k < 8; ++k) push32(c, k == 4 ? sp : c.r[k]); }
    // 0e5c53  cmp dl, 0x10
    X86_AT(c, 0xe5c53u);
    (void)x86_sub(c, g8(c, 2), 0x10u, 0, 1);
    // 0e5c56  jae 0xe5cf0
    X86_AT(c, 0xe5c56u);
    if (x86_cc(c, 3)) { goto L_e5cf0; }
    X86_TICK(c, 7);
    // 0e5c5c  cmp bl, 0x80
    X86_AT(c, 0xe5c5cu);
    (void)x86_sub(c, g8(c, 3), 0x80u, 0, 1);
    // 0e5c5f  jae 0xe5cf0
    X86_AT(c, 0xe5c5fu);
    if (x86_cc(c, 3)) { goto L_e5cf0; }
    X86_TICK(c, 16);
    // 0e5c65  movzx ebx, bl
    X86_AT(c, 0xe5c65u);
    c.r[3] = g8(c, 3);
    // 0e5c68  lea edi, [ebx*4 + 0xc3ea5]
    X86_AT(c, 0xe5c68u);
    c.r[7] = (uint32_t)(c.r[3] * 4 + 0xC3EA5u);
    // 0e5c6f  mov al, byte ptr [edi]
    X86_AT(c, 0xe5c6fu);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[7]))));
    // 0e5c71  cmp al, dl
    X86_AT(c, 0xe5c71u);
    (void)x86_sub(c, g8(c, 0), g8(c, 2), 0, 1);
    // 0e5c73  je 0xe5cec
    X86_AT(c, 0xe5c73u);
    if (x86_cc(c, 4)) { goto L_e5cec; }
    X86_TICK(c, 7);
    // 0e5c79  cmp al, 0xff
    X86_AT(c, 0xe5c79u);
    (void)x86_sub(c, g8(c, 0), 0xFFu, 0, 1);
    // 0e5c7b  je 0xe5ccd
    X86_AT(c, 0xe5c7bu);
    if (x86_cc(c, 4)) { goto L_e5ccd; }
    X86_TICK(c, 16);
    // 0e5c81  movzx eax, al
    X86_AT(c, 0xe5c81u);
    c.r[0] = g8(c, 0);
    // 0e5c84  lea esi, [eax + 0xc3e95]
    X86_AT(c, 0xe5c84u);
    c.r[6] = (uint32_t)(c.r[0] + 0xC3E95u);
    // 0e5c8a  mov al, byte ptr [esi]
    X86_AT(c, 0xe5c8au);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[6]))));
    // 0e5c8c  cmp al, bl
    X86_AT(c, 0xe5c8cu);
    (void)x86_sub(c, g8(c, 0), g8(c, 3), 0, 1);
    // 0e5c8e  je 0xe5ca9
    X86_AT(c, 0xe5c8eu);
    if (x86_cc(c, 4)) { goto L_e5ca9; }
L_e5c90:
    X86_TICK(c, 18);
    // 0e5c90  movzx eax, al
    X86_AT(c, 0xe5c90u);
    c.r[0] = g8(c, 0);
    // 0e5c93  lea esi, [eax*4 + 0xc3ea5]
    X86_AT(c, 0xe5c93u);
    c.r[6] = (uint32_t)(c.r[0] * 4 + 0xC3EA5u);
    // 0e5c9a  lea esi, [esi + 1]
    X86_AT(c, 0xe5c9au);
    c.r[6] = (uint32_t)(c.r[6] + 0x1u);
    // 0e5c9d  mov al, byte ptr [esi]
    X86_AT(c, 0xe5c9du);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[6]))));
    // 0e5c9f  cmp al, bl
    X86_AT(c, 0xe5c9fu);
    (void)x86_sub(c, g8(c, 0), g8(c, 3), 0, 1);
    // 0e5ca1  je 0xe5ca9
    X86_AT(c, 0xe5ca1u);
    if (x86_cc(c, 4)) { goto L_e5ca9; }
    X86_TICK(c, 7);
    // 0e5ca3  cmp al, 0xff
    X86_AT(c, 0xe5ca3u);
    (void)x86_sub(c, g8(c, 0), 0xFFu, 0, 1);
    // 0e5ca5  je 0xe5cf0
    X86_AT(c, 0xe5ca5u);
    if (x86_cc(c, 4)) { goto L_e5cf0; }
    X86_TICK(c, 7);
    // 0e5ca7  jmp 0xe5c90
    X86_AT(c, 0xe5ca7u);
    X86_POLL(c, 0xe5c90u); goto L_e5c90;
L_e5ca9:
    X86_TICK(c, 28);
    // 0e5ca9  push edx
    X86_AT(c, 0xe5ca9u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0e5caa  pushf 
    X86_AT(c, 0xe5caau);
    push16(c, c.fl & 0xFFFFu);
    // 0e5cac  cli 
    X86_AT(c, 0xe5cacu);
    c.fl &= ~X86_IF;
    // 0e5cad  mov dl, byte ptr [edi + 1]
    X86_AT(c, 0xe5cadu);
    s8(c, 2, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x1u))));
    // 0e5cb0  mov byte ptr [esi], dl
    X86_AT(c, 0xe5cb0u);
    wr8((c.sbase[3] + (uint32_t)(c.r[6])), g8(c, 2));
    // 0e5cb2  cmp byte ptr [edi + 2], 0
    X86_AT(c, 0xe5cb2u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x2u))), 0x0u, 0, 1);
    // 0e5cb6  je 0xe5cbf
    X86_AT(c, 0xe5cb6u);
    if (x86_cc(c, 4)) { goto L_e5cbf; }
    X86_TICK(c, 9);
    // 0e5cb8  mov ah, 2
    X86_AT(c, 0xe5cb8u);
    s8(c, 4, 0x2u);
    // 0e5cba  call 0xe3e10
    X86_AT(c, 0xe5cbau);
    push32(c, 0xe5cbfu); x86_call_known(c, 0xe3e10u, f_000e3e10); X86_RET(c, 0xe5cbfu);
L_e5cbf:
    X86_TICK(c, 16);
    // 0e5cbf  mov byte ptr [edi], 0xff
    X86_AT(c, 0xe5cbfu);
    wr8((c.sbase[3] + (uint32_t)(c.r[7])), 0xFFu);
    // 0e5cc2  mov byte ptr [edi + 1], 0xff
    X86_AT(c, 0xe5cc2u);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0x1u)), 0xFFu);
    // 0e5cc6  mov byte ptr [edi + 2], 0
    X86_AT(c, 0xe5cc6u);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0x2u)), 0x0u);
    // 0e5cca  popf 
    X86_AT(c, 0xe5ccau);
    x86_popfd(c, 2);
    // 0e5ccc  pop edx
    X86_AT(c, 0xe5cccu);
    { uint32_t v = pop32(c); c.r[2] = v; }
L_e5ccd:
    X86_TICK(c, 33);
    // 0e5ccd  movzx edx, dl
    X86_AT(c, 0xe5ccdu);
    c.r[2] = g8(c, 2);
    // 0e5cd0  lea esi, [edx + 0xc3e95]
    X86_AT(c, 0xe5cd0u);
    c.r[6] = (uint32_t)(c.r[2] + 0xC3E95u);
    // 0e5cd6  pushf 
    X86_AT(c, 0xe5cd6u);
    push16(c, c.fl & 0xFFFFu);
    // 0e5cd8  cli 
    X86_AT(c, 0xe5cd8u);
    c.fl &= ~X86_IF;
    // 0e5cd9  mov al, byte ptr [esi]
    X86_AT(c, 0xe5cd9u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[6]))));
    // 0e5cdb  mov byte ptr [esi], bl
    X86_AT(c, 0xe5cdbu);
    wr8((c.sbase[3] + (uint32_t)(c.r[6])), g8(c, 3));
    // 0e5cdd  mov byte ptr [edi], dl
    X86_AT(c, 0xe5cddu);
    wr8((c.sbase[3] + (uint32_t)(c.r[7])), g8(c, 2));
    // 0e5cdf  mov byte ptr [edi + 1], al
    X86_AT(c, 0xe5cdfu);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0x1u)), g8(c, 0));
    // 0e5ce2  mov byte ptr [edi + 2], 0
    X86_AT(c, 0xe5ce2u);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0x2u)), 0x0u);
    // 0e5ce6  mov byte ptr [edi + 3], 0
    X86_AT(c, 0xe5ce6u);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0x3u)), 0x0u);
    // 0e5cea  popf 
    X86_AT(c, 0xe5ceau);
    x86_popfd(c, 2);
L_e5cec:
    X86_TICK(c, 36);
    // 0e5cec  popal 
    X86_AT(c, 0xe5cecu);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 0e5ced  xor al, al
    X86_AT(c, 0xe5cedu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 0e5cef  ret 
    X86_AT(c, 0xe5cefu);
    c.eip = pop32(c); return;
L_e5cf0:
    X86_TICK(c, 36);
    // 0e5cf0  popal 
    X86_AT(c, 0xe5cf0u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 0e5cf1  mov al, 3
    X86_AT(c, 0xe5cf1u);
    s8(c, 0, 0x3u);
    // 0e5cf3  ret 
    X86_AT(c, 0xe5cf3u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe5c52u, "ran off the end of a function");
}
void f_000e5cf4(X86Cpu& c) {
    X86_TICK(c, 25);
    // 0e5cf4  pushal 
    X86_AT(c, 0xe5cf4u);
    { uint32_t sp = c.r[4]; for (int k = 0; k < 8; ++k) push32(c, k == 4 ? sp : c.r[k]); }
    // 0e5cf5  cmp al, 0x80
    X86_AT(c, 0xe5cf5u);
    (void)x86_sub(c, g8(c, 0), 0x80u, 0, 1);
    // 0e5cf7  jb 0xe5d0b
    X86_AT(c, 0xe5cf7u);
    if (x86_cc(c, 2)) { goto L_e5d0b; }
    X86_TICK(c, 7);
    // 0e5cf9  cmp al, 0xf0
    X86_AT(c, 0xe5cf9u);
    (void)x86_sub(c, g8(c, 0), 0xF0u, 0, 1);
    // 0e5cfb  jae 0xe5d33
    X86_AT(c, 0xe5cfbu);
    if (x86_cc(c, 3)) { goto L_e5d33; }
    X86_TICK(c, 11);
    // 0e5cfd  mov byte ptr [0xc3e80], al
    X86_AT(c, 0xe5cfdu);
    wr8((c.sbase[3] + (uint32_t)(0xC3E80u)), g8(c, 0));
    // 0e5d02  mov byte ptr [0xc3e81], 1
    X86_AT(c, 0xe5d02u);
    wr8((c.sbase[3] + (uint32_t)(0xC3E81u)), 0x1u);
    // 0e5d09  jmp 0xe5d31
    X86_AT(c, 0xe5d09u);
    goto L_e5d31;
L_e5d0b:
    X86_TICK(c, 13);
    // 0e5d0b  movzx ebx, byte ptr [0xc3e80]
    X86_AT(c, 0xe5d0bu);
    c.r[3] = rd8((c.sbase[3] + (uint32_t)(0xC3E80u)));
    // 0e5d12  cmp ebx, 0x80
    X86_AT(c, 0xe5d12u);
    (void)x86_sub(c, c.r[3], 0x80u, 0, 4);
    // 0e5d18  jb 0xe5d31
    X86_AT(c, 0xe5d18u);
    if (x86_cc(c, 2)) { goto L_e5d31; }
    X86_TICK(c, 14);
    // 0e5d1e  sub ebx, 0x80
    X86_AT(c, 0xe5d1eu);
    { uint32_t v = c.r[3]; c.r[3] = x86_sub(c, v, 0x80u, 0, 4); }
    // 0e5d24  shr ebx, 4
    X86_AT(c, 0xe5d24u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 5, v, 0x4u, 4, w); if (w) c.r[3] = r; }
    // 0e5d27  lea ebx, [ebx*4 + 0xe5d43]
    X86_AT(c, 0xe5d27u);
    c.r[3] = (uint32_t)(c.r[3] * 4 + 0xE5D43u);
    // 0e5d2e  call dword ptr cs:[ebx]
    X86_AT(c, 0xe5d2eu);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[3]))); push32(c, 0xe5d31u); x86_call(c, t); X86_RET(c, 0xe5d31u); }
L_e5d31:
    X86_TICK(c, 34);
    // 0e5d31  popal 
    X86_AT(c, 0xe5d31u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 0e5d32  ret 
    X86_AT(c, 0xe5d32u);
    c.eip = pop32(c); return;
L_e5d33:
    X86_TICK(c, 38);
    // 0e5d33  mov byte ptr [0xc3e81], 1
    X86_AT(c, 0xe5d33u);
    wr8((c.sbase[3] + (uint32_t)(0xC3E81u)), 0x1u);
    // 0e5d3a  mov byte ptr [0xc3e80], 0
    X86_AT(c, 0xe5d3au);
    wr8((c.sbase[3] + (uint32_t)(0xC3E80u)), 0x0u);
    // 0e5d41  popal 
    X86_AT(c, 0xe5d41u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 0e5d42  ret 
    X86_AT(c, 0xe5d42u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe5cf4u, "ran off the end of a function");
}
void f_000e5d8a(X86Cpu& c) {
    X86_TICK(c, 12);
    // 0e5d8a  cmp byte ptr [0xc3e81], 2
    X86_AT(c, 0xe5d8au);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0xC3E81u))), 0x2u, 0, 1);
    // 0e5d91  jb 0xe5daf
    X86_AT(c, 0xe5d91u);
    if (x86_cc(c, 2)) { goto L_e5daf; }
    X86_TICK(c, 11);
    // 0e5d93  mov byte ptr [0xc3e83], al
    X86_AT(c, 0xe5d93u);
    wr8((c.sbase[3] + (uint32_t)(0xC3E83u)), g8(c, 0));
    // 0e5d98  mov byte ptr [0xc3e81], 1
    X86_AT(c, 0xe5d98u);
    wr8((c.sbase[3] + (uint32_t)(0xC3E81u)), 0x1u);
    // 0e5d9f  and al, al
    X86_AT(c, 0xe5d9fu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & g8(c, 0), 1)); }
    // 0e5da1  je 0xe5da9
    X86_AT(c, 0xe5da1u);
    if (x86_cc(c, 4)) { goto L_e5da9; }
    X86_TICK(c, 7);
    // 0e5da3  call 0xe5ece
    X86_AT(c, 0xe5da3u);
    push32(c, 0xe5da8u); x86_call_known(c, 0xe5eceu, f_000e5ece); X86_RET(c, 0xe5da8u);
    X86_TICK(c, 10);
    // 0e5da8  ret 
    X86_AT(c, 0xe5da8u);
    c.eip = pop32(c); return;
L_e5da9:
    X86_TICK(c, 7);
    // 0e5da9  call 0xe5e6b
    X86_AT(c, 0xe5da9u);
    push32(c, 0xe5daeu); x86_call_known(c, 0xe5e6bu, f_000e5e6b); X86_RET(c, 0xe5daeu);
    X86_TICK(c, 10);
    // 0e5dae  ret 
    X86_AT(c, 0xe5daeu);
    c.eip = pop32(c); return;
L_e5daf:
    X86_TICK(c, 18);
    // 0e5daf  mov byte ptr [0xc3e82], al
    X86_AT(c, 0xe5dafu);
    wr8((c.sbase[3] + (uint32_t)(0xC3E82u)), g8(c, 0));
    // 0e5db4  inc byte ptr [0xc3e81]
    X86_AT(c, 0xe5db4u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xC3E81u)); uint32_t v = rd8(ea); wr8(ea, x86_inc(c, v, 1)); }
    // 0e5dba  ret 
    X86_AT(c, 0xe5dbau);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe5d8au, "ran off the end of a function");
}
void f_000e5e6b(X86Cpu& c) {
    X86_TICK(c, 17);
    // 0e5e6b  mov al, byte ptr [0xc3e80]
    X86_AT(c, 0xe5e6bu);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(0xC3E80u))));
    // 0e5e70  and eax, 0xf
    X86_AT(c, 0xe5e70u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0xFu, 4); }
    // 0e5e75  mov bl, byte ptr [eax + 0xc3e95]
    X86_AT(c, 0xe5e75u);
    s8(c, 3, rd8((c.sbase[3] + (uint32_t)(c.r[0] + 0xC3E95u))));
    // 0e5e7b  cmp bl, 0xff
    X86_AT(c, 0xe5e7bu);
    (void)x86_sub(c, g8(c, 3), 0xFFu, 0, 1);
    // 0e5e7e  je 0xe5ecc
    X86_AT(c, 0xe5e7eu);
    if (x86_cc(c, 4)) { goto L_e5ecc; }
    X86_TICK(c, 4);
    // 0e5e84  mov dl, byte ptr [0xc3e82]
    X86_AT(c, 0xe5e84u);
    s8(c, 2, rd8((c.sbase[3] + (uint32_t)(0xC3E82u))));
L_e5e8a:
    X86_TICK(c, 16);
    // 0e5e8a  movzx eax, bl
    X86_AT(c, 0xe5e8au);
    c.r[0] = g8(c, 3);
    // 0e5e8d  lea esi, [eax*4 + 0xc3ea5]
    X86_AT(c, 0xe5e8du);
    c.r[6] = (uint32_t)(c.r[0] * 4 + 0xC3EA5u);
    // 0e5e94  cmp dl, byte ptr [esi + 2]
    X86_AT(c, 0xe5e94u);
    (void)x86_sub(c, g8(c, 2), rd8((c.sbase[3] + (uint32_t)(c.r[6] + 0x2u))), 0, 1);
    // 0e5e97  je 0xe5ea6
    X86_AT(c, 0xe5e97u);
    if (x86_cc(c, 4)) { goto L_e5ea6; }
    X86_TICK(c, 11);
    // 0e5e99  mov bl, byte ptr [esi + 1]
    X86_AT(c, 0xe5e99u);
    s8(c, 3, rd8((c.sbase[3] + (uint32_t)(c.r[6] + 0x1u))));
    // 0e5e9c  cmp bl, 0xff
    X86_AT(c, 0xe5e9cu);
    (void)x86_sub(c, g8(c, 3), 0xFFu, 0, 1);
    // 0e5e9f  jne 0xe5e8a
    X86_AT(c, 0xe5e9fu);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xe5e8au); goto L_e5e8a; }
    X86_TICK(c, 7);
    // 0e5ea1  jmp 0xe5ecc
    X86_AT(c, 0xe5ea1u);
    goto L_e5ecc;
L_e5ea6:
    X86_TICK(c, 18);
    // 0e5ea6  mov al, byte ptr [0xc3e80]
    X86_AT(c, 0xe5ea6u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(0xC3E80u))));
    // 0e5eab  and eax, 0xf
    X86_AT(c, 0xe5eabu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0xFu, 4); }
    // 0e5eb0  cmp byte ptr [eax + 0xc3e85], 0
    X86_AT(c, 0xe5eb0u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[0] + 0xC3E85u))), 0x0u, 0, 1);
    // 0e5eb7  jne 0xe5ec6
    X86_AT(c, 0xe5eb7u);
    if (x86_cc(c, 5)) { goto L_e5ec6; }
    X86_TICK(c, 11);
    // 0e5eb9  mov byte ptr [esi + 2], 0
    X86_AT(c, 0xe5eb9u);
    wr8((c.sbase[3] + (uint32_t)(c.r[6] + 0x2u)), 0x0u);
    // 0e5ebd  mov ah, 2
    X86_AT(c, 0xe5ebdu);
    s8(c, 4, 0x2u);
    // 0e5ebf  call 0xe3e10
    X86_AT(c, 0xe5ebfu);
    push32(c, 0xe5ec4u); x86_call_known(c, 0xe3e10u, f_000e3e10); X86_RET(c, 0xe5ec4u);
    X86_TICK(c, 12);
    // 0e5ec4  clc 
    X86_AT(c, 0xe5ec4u);
    c.fl &= ~X86_CF;
    // 0e5ec5  ret 
    X86_AT(c, 0xe5ec5u);
    c.eip = pop32(c); return;
L_e5ec6:
    X86_TICK(c, 19);
    // 0e5ec6  or byte ptr [esi + 2], 0x80
    X86_AT(c, 0xe5ec6u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[6] + 0x2u)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | 0x80u, 1)); }
    // 0e5eca  clc 
    X86_AT(c, 0xe5ecau);
    c.fl &= ~X86_CF;
    // 0e5ecb  ret 
    X86_AT(c, 0xe5ecbu);
    c.eip = pop32(c); return;
L_e5ecc:
    X86_TICK(c, 12);
    // 0e5ecc  stc 
    X86_AT(c, 0xe5eccu);
    c.fl |= X86_CF;
    // 0e5ecd  ret 
    X86_AT(c, 0xe5ecdu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe5e6bu, "ran off the end of a function");
}
void f_000e5ece(X86Cpu& c) {
    X86_TICK(c, 12);
    // 0e5ece  cmp byte ptr [0xc3e82], 0
    X86_AT(c, 0xe5eceu);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0xC3E82u))), 0x0u, 0, 1);
    // 0e5ed5  je 0xe5f5e
    X86_AT(c, 0xe5ed5u);
    if (x86_cc(c, 4)) { goto L_e5f5e; }
    X86_TICK(c, 17);
    // 0e5edb  mov al, byte ptr [0xc3e80]
    X86_AT(c, 0xe5edbu);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(0xC3E80u))));
    // 0e5ee0  and eax, 0xf
    X86_AT(c, 0xe5ee0u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0xFu, 4); }
    // 0e5ee5  mov bl, byte ptr [eax + 0xc3e95]
    X86_AT(c, 0xe5ee5u);
    s8(c, 3, rd8((c.sbase[3] + (uint32_t)(c.r[0] + 0xC3E95u))));
    // 0e5eeb  cmp bl, 0xff
    X86_AT(c, 0xe5eebu);
    (void)x86_sub(c, g8(c, 3), 0xFFu, 0, 1);
    // 0e5eee  je 0xe5f5e
    X86_AT(c, 0xe5eeeu);
    if (x86_cc(c, 4)) { goto L_e5f5e; }
    X86_TICK(c, 2);
    // 0e5ef4  push bx
    X86_AT(c, 0xe5ef4u);
    { uint32_t v = (c.r[3] & 0xFFFFu); push16(c, v); }
L_e5ef6:
    X86_TICK(c, 22);
    // 0e5ef6  movzx eax, bl
    X86_AT(c, 0xe5ef6u);
    c.r[0] = g8(c, 3);
    // 0e5ef9  lea esi, [eax*4 + 0xc3ea5]
    X86_AT(c, 0xe5ef9u);
    c.r[6] = (uint32_t)(c.r[0] * 4 + 0xC3EA5u);
    // 0e5f00  inc byte ptr [esi + 3]
    X86_AT(c, 0xe5f00u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[6] + 0x3u)); uint32_t v = rd8(ea); wr8(ea, x86_inc(c, v, 1)); }
    // 0e5f03  mov bl, byte ptr [esi + 1]
    X86_AT(c, 0xe5f03u);
    s8(c, 3, rd8((c.sbase[3] + (uint32_t)(c.r[6] + 0x1u))));
    // 0e5f06  cmp bl, 0xff
    X86_AT(c, 0xe5f06u);
    (void)x86_sub(c, g8(c, 3), 0xFFu, 0, 1);
    // 0e5f09  jne 0xe5ef6
    X86_AT(c, 0xe5f09u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xe5ef6u); goto L_e5ef6; }
    X86_TICK(c, 6);
    // 0e5f0b  pop bx
    X86_AT(c, 0xe5f0bu);
    { uint32_t v = pop16(c); s16(c, 3, v); }
    // 0e5f0d  xor dl, dl
    X86_AT(c, 0xe5f0du);
    { uint32_t v = g8(c, 2); s8(c, 2, x86_logic(c, v ^ g8(c, 2), 1)); }
L_e5f0f:
    X86_TICK(c, 17);
    // 0e5f0f  movzx eax, bl
    X86_AT(c, 0xe5f0fu);
    c.r[0] = g8(c, 3);
    // 0e5f12  lea esi, [eax*4 + 0xc3ea5]
    X86_AT(c, 0xe5f12u);
    c.r[6] = (uint32_t)(c.r[0] * 4 + 0xC3EA5u);
    // 0e5f19  cmp byte ptr [esi + 2], 0
    X86_AT(c, 0xe5f19u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[6] + 0x2u))), 0x0u, 0, 1);
    // 0e5f1d  je 0xe5f3a
    X86_AT(c, 0xe5f1du);
    if (x86_cc(c, 4)) { goto L_e5f3a; }
    X86_TICK(c, 11);
    // 0e5f1f  cmp dl, byte ptr [esi + 3]
    X86_AT(c, 0xe5f1fu);
    (void)x86_sub(c, g8(c, 2), rd8((c.sbase[3] + (uint32_t)(c.r[6] + 0x3u))), 0, 1);
    // 0e5f22  ja 0xe5f29
    X86_AT(c, 0xe5f22u);
    if (x86_cc(c, 7)) { goto L_e5f29; }
    X86_TICK(c, 6);
    // 0e5f24  mov cl, bl
    X86_AT(c, 0xe5f24u);
    s8(c, 1, g8(c, 3));
    // 0e5f26  mov dl, byte ptr [esi + 3]
    X86_AT(c, 0xe5f26u);
    s8(c, 2, rd8((c.sbase[3] + (uint32_t)(c.r[6] + 0x3u))));
L_e5f29:
    X86_TICK(c, 11);
    // 0e5f29  mov bl, byte ptr [esi + 1]
    X86_AT(c, 0xe5f29u);
    s8(c, 3, rd8((c.sbase[3] + (uint32_t)(c.r[6] + 0x1u))));
    // 0e5f2c  cmp bl, 0xff
    X86_AT(c, 0xe5f2cu);
    (void)x86_sub(c, g8(c, 3), 0xFFu, 0, 1);
    // 0e5f2f  jne 0xe5f0f
    X86_AT(c, 0xe5f2fu);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xe5f0fu); goto L_e5f0f; }
    X86_TICK(c, 11);
    // 0e5f31  mov bl, cl
    X86_AT(c, 0xe5f31u);
    s8(c, 3, g8(c, 1));
    // 0e5f33  mov ah, 2
    X86_AT(c, 0xe5f33u);
    s8(c, 4, 0x2u);
    // 0e5f35  call 0xe3e10
    X86_AT(c, 0xe5f35u);
    push32(c, 0xe5f3au); x86_call_known(c, 0xe3e10u, f_000e3e10); X86_RET(c, 0xe5f3au);
L_e5f3a:
    X86_TICK(c, 26);
    // 0e5f3a  movzx eax, bl
    X86_AT(c, 0xe5f3au);
    c.r[0] = g8(c, 3);
    // 0e5f3d  lea esi, [eax*4 + 0xc3ea5]
    X86_AT(c, 0xe5f3du);
    c.r[6] = (uint32_t)(c.r[0] * 4 + 0xC3EA5u);
    // 0e5f44  mov dh, byte ptr [0xc3e82]
    X86_AT(c, 0xe5f44u);
    s8(c, 6, rd8((c.sbase[3] + (uint32_t)(0xC3E82u))));
    // 0e5f4a  mov byte ptr [esi + 2], dh
    X86_AT(c, 0xe5f4au);
    wr8((c.sbase[3] + (uint32_t)(c.r[6] + 0x2u)), g8(c, 6));
    // 0e5f4d  mov byte ptr [esi + 3], 0
    X86_AT(c, 0xe5f4du);
    wr8((c.sbase[3] + (uint32_t)(c.r[6] + 0x3u)), 0x0u);
    // 0e5f51  mov dl, byte ptr [0xc3e83]
    X86_AT(c, 0xe5f51u);
    s8(c, 2, rd8((c.sbase[3] + (uint32_t)(0xC3E83u))));
    // 0e5f57  mov ah, 1
    X86_AT(c, 0xe5f57u);
    s8(c, 4, 0x1u);
    // 0e5f59  call 0xe3e10
    X86_AT(c, 0xe5f59u);
    push32(c, 0xe5f5eu); x86_call_known(c, 0xe3e10u, f_000e3e10); X86_RET(c, 0xe5f5eu);
L_e5f5e:
    X86_TICK(c, 10);
    // 0e5f5e  ret 
    X86_AT(c, 0xe5f5eu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe5eceu, "ran off the end of a function");
}
void f_000e60c8(X86Cpu& c) {
    X86_TICK(c, 28);
    // 0e60c8  push ebp
    X86_AT(c, 0xe60c8u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0e60c9  mov ebp, esp
    X86_AT(c, 0xe60c9u);
    c.r[5] = c.r[4];
    // 0e60cb  sub esp, 0xb4
    X86_AT(c, 0xe60cbu);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, 0xB4u, 0, 4); }
    // 0e60d1  push ebx
    X86_AT(c, 0xe60d1u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0e60d2  push esi
    X86_AT(c, 0xe60d2u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0e60d3  push edi
    X86_AT(c, 0xe60d3u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e60d4  mov eax, dword ptr [ebp + 8]
    X86_AT(c, 0xe60d4u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0e60d7  cmp byte ptr [eax], 0
    X86_AT(c, 0xe60d7u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[0]))), 0x0u, 0, 1);
    // 0e60da  je 0xe6179
    X86_AT(c, 0xe60dau);
    if (x86_cc(c, 4)) { goto L_e6179; }
    X86_TICK(c, 14);
    // 0e60e0  push 0xff94
    X86_AT(c, 0xe60e0u);
    { uint32_t v = 0xFF94u; push32(c, v); }
    // 0e60e5  push dword ptr [ebp + 8]
    X86_AT(c, 0xe60e5u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, v); }
    // 0e60e8  call 0xe6e04
    X86_AT(c, 0xe60e8u);
    push32(c, 0xe60edu); x86_call_known(c, 0xe6e04u, f_000e6e04); X86_RET(c, 0xe60edu);
    X86_TICK(c, 12);
    // 0e60ed  add esp, 8
    X86_AT(c, 0xe60edu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0e60f0  xchg edi, eax
    X86_AT(c, 0xe60f0u);
    { uint32_t t = c.r[7]; c.r[7] = c.r[0]; c.r[0] = t; }
    // 0e60f1  and edi, edi
    X86_AT(c, 0xe60f1u);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & c.r[7], 4); }
    // 0e60f3  jne 0xe6180
    X86_AT(c, 0xe60f3u);
    if (x86_cc(c, 5)) { goto L_e6180; }
    X86_TICK(c, 9);
    // 0e60f9  push 0xff98
    X86_AT(c, 0xe60f9u);
    { uint32_t v = 0xFF98u; push32(c, v); }
    // 0e60fe  call 0xe78fc
    X86_AT(c, 0xe60feu);
    push32(c, 0xe6103u); x86_call_known(c, 0xe78fcu, f_000e78fc); X86_RET(c, 0xe6103u);
    X86_TICK(c, 11);
    // 0e6103  add esp, 4
    X86_AT(c, 0xe6103u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0e6106  mov dword ptr [ebp - 0x34], eax
    X86_AT(c, 0xe6106u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFCCu)), c.r[0]);
    // 0e6109  and eax, eax
    X86_AT(c, 0xe6109u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0e610b  je 0xe6179
    X86_AT(c, 0xe610bu);
    if (x86_cc(c, 4)) { goto L_e6179; }
    X86_TICK(c, 16);
    // 0e610d  push dword ptr [ebp - 0x34]
    X86_AT(c, 0xe610du);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFCCu))); push32(c, v); }
    // 0e6110  lea eax, [ebp - 0xb4]
    X86_AT(c, 0xe6110u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFF4Cu);
    // 0e6116  push eax
    X86_AT(c, 0xe6116u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e6117  call 0xe79f4
    X86_AT(c, 0xe6117u);
    push32(c, 0xe611cu); x86_call_known(c, 0xe79f4u, f_000e79f4); X86_RET(c, 0xe611cu);
    X86_TICK(c, 4);
    // 0e611c  sub esi, esi
    X86_AT(c, 0xe611cu);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[6], 0, 4); }
    // 0e611e  add esp, 8
    X86_AT(c, 0xe611eu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
L_e6121:
    X86_TICK(c, 12);
    // 0e6121  cmp byte ptr [ebp + esi*1 - 0xb4], 0
    X86_AT(c, 0xe6121u);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + c.r[6] + 0xFFFFFF4Cu))), 0x0u, 0, 1);
    // 0e6129  je 0xe612e
    X86_AT(c, 0xe6129u);
    if (x86_cc(c, 4)) { goto L_e612e; }
    X86_TICK(c, 9);
    // 0e612b  inc esi
    X86_AT(c, 0xe612bu);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 0e612c  jmp 0xe6121
    X86_AT(c, 0xe612cu);
    X86_POLL(c, 0xe6121u); goto L_e6121;
L_e612e:
    X86_TICK(c, 12);
    // 0e612e  cmp byte ptr [ebp + esi*1 - 0xb5], 0x5c
    X86_AT(c, 0xe612eu);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + c.r[6] + 0xFFFFFF4Bu))), 0x5Cu, 0, 1);
    // 0e6136  je 0xe6141
    X86_AT(c, 0xe6136u);
    if (x86_cc(c, 4)) { goto L_e6141; }
    X86_TICK(c, 4);
    // 0e6138  inc esi
    X86_AT(c, 0xe6138u);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 0e6139  mov byte ptr [ebp + esi*1 - 0xb5], 0x5c
    X86_AT(c, 0xe6139u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + c.r[6] + 0xFFFFFF4Bu)), 0x5Cu);
L_e6141:
    X86_TICK(c, 2);
    // 0e6141  sub ebx, ebx
    X86_AT(c, 0xe6141u);
    { uint32_t v = c.r[3]; c.r[3] = x86_sub(c, v, c.r[3], 0, 4); }
L_e6143:
    X86_TICK(c, 15);
    // 0e6143  mov eax, dword ptr [ebp + 8]
    X86_AT(c, 0xe6143u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0e6146  mov al, byte ptr [eax + ebx*1]
    X86_AT(c, 0xe6146u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[0] + c.r[3]))));
    // 0e6149  and al, al
    X86_AT(c, 0xe6149u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & g8(c, 0), 1)); }
    // 0e614b  je 0xe6158
    X86_AT(c, 0xe614bu);
    if (x86_cc(c, 4)) { goto L_e6158; }
    X86_TICK(c, 13);
    // 0e614d  inc esi
    X86_AT(c, 0xe614du);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 0e614e  mov byte ptr [ebp + esi*1 - 0xb5], al
    X86_AT(c, 0xe614eu);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + c.r[6] + 0xFFFFFF4Bu)), g8(c, 0));
    // 0e6155  inc ebx
    X86_AT(c, 0xe6155u);
    { uint32_t v = c.r[3]; c.r[3] = x86_inc(c, v, 4); }
    // 0e6156  jmp 0xe6143
    X86_AT(c, 0xe6156u);
    X86_POLL(c, 0xe6143u); goto L_e6143;
L_e6158:
    X86_TICK(c, 15);
    // 0e6158  mov byte ptr [ebp + esi*1 - 0xb4], 0
    X86_AT(c, 0xe6158u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + c.r[6] + 0xFFFFFF4Cu)), 0x0u);
    // 0e6160  push 0xffa0
    X86_AT(c, 0xe6160u);
    { uint32_t v = 0xFFA0u; push32(c, v); }
    // 0e6165  lea eax, [ebp - 0xb4]
    X86_AT(c, 0xe6165u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFF4Cu);
    // 0e616b  push eax
    X86_AT(c, 0xe616bu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e616c  call 0xe6e04
    X86_AT(c, 0xe616cu);
    push32(c, 0xe6171u); x86_call_known(c, 0xe6e04u, f_000e6e04); X86_RET(c, 0xe6171u);
    X86_TICK(c, 12);
    // 0e6171  add esp, 8
    X86_AT(c, 0xe6171u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0e6174  xchg edi, eax
    X86_AT(c, 0xe6174u);
    { uint32_t t = c.r[7]; c.r[7] = c.r[0]; c.r[0] = t; }
    // 0e6175  and edi, edi
    X86_AT(c, 0xe6175u);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & c.r[7], 4); }
    // 0e6177  jne 0xe6180
    X86_AT(c, 0xe6177u);
    if (x86_cc(c, 5)) { goto L_e6180; }
L_e6179:
    X86_TICK(c, 9);
    // 0e6179  mov eax, 1
    X86_AT(c, 0xe6179u);
    c.r[0] = 0x1u;
    // 0e617e  jmp 0xe61df
    X86_AT(c, 0xe617eu);
    goto L_e61df;
L_e6180:
    X86_TICK(c, 18);
    // 0e6180  push edi
    X86_AT(c, 0xe6180u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e6181  push 8
    X86_AT(c, 0xe6181u);
    { uint32_t v = 0x8u; push32(c, v); }
    // 0e6183  push 1
    X86_AT(c, 0xe6183u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0e6185  push dword ptr [ebp + 0xc]
    X86_AT(c, 0xe6185u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))); push32(c, v); }
    // 0e6188  call 0xe6b28
    X86_AT(c, 0xe6188u);
    push32(c, 0xe618du); x86_call_known(c, 0xe6b28u, f_000e6b28); X86_RET(c, 0xe618du);
    X86_TICK(c, 9);
    // 0e618d  add esp, 0x10
    X86_AT(c, 0xe618du);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0e6190  cmp eax, 8
    X86_AT(c, 0xe6190u);
    (void)x86_sub(c, c.r[0], 0x8u, 0, 4);
    // 0e6193  jl 0xe61b5
    X86_AT(c, 0xe6193u);
    if (x86_cc(c, 12)) { goto L_e61b5; }
    X86_TICK(c, 2);
    // 0e6195  sub esi, esi
    X86_AT(c, 0xe6195u);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[6], 0, 4); }
L_e6197:
    X86_TICK(c, 7);
    // 0e6197  cmp esi, 0x80
    X86_AT(c, 0xe6197u);
    (void)x86_sub(c, c.r[6], 0x80u, 0, 4);
    // 0e619d  jge 0xe61d4
    X86_AT(c, 0xe619du);
    if (x86_cc(c, 13)) { goto L_e61d4; }
    X86_TICK(c, 17);
    // 0e619f  push edi
    X86_AT(c, 0xe619fu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e61a0  push 0x30
    X86_AT(c, 0xe61a0u);
    { uint32_t v = 0x30u; push32(c, v); }
    // 0e61a2  push 1
    X86_AT(c, 0xe61a2u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0e61a4  lea eax, [ebp - 0x30]
    X86_AT(c, 0xe61a4u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFD0u);
    // 0e61a7  push eax
    X86_AT(c, 0xe61a7u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e61a8  call 0xe6b28
    X86_AT(c, 0xe61a8u);
    push32(c, 0xe61adu); x86_call_known(c, 0xe6b28u, f_000e6b28); X86_RET(c, 0xe61adu);
    X86_TICK(c, 9);
    // 0e61ad  add esp, 0x10
    X86_AT(c, 0xe61adu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0e61b0  cmp eax, 0x30
    X86_AT(c, 0xe61b0u);
    (void)x86_sub(c, c.r[0], 0x30u, 0, 4);
    // 0e61b3  jge 0xe61c2
    X86_AT(c, 0xe61b3u);
    if (x86_cc(c, 13)) { goto L_e61c2; }
L_e61b5:
    X86_TICK(c, 9);
    // 0e61b5  push edi
    X86_AT(c, 0xe61b5u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e61b6  call 0xe7300
    X86_AT(c, 0xe61b6u);
    push32(c, 0xe61bbu); x86_call_known(c, 0xe7300u, f_000e7300); X86_RET(c, 0xe61bbu);
    X86_TICK(c, 9);
    // 0e61bb  mov eax, 2
    X86_AT(c, 0xe61bbu);
    c.r[0] = 0x2u;
    // 0e61c0  jmp 0xe61dc
    X86_AT(c, 0xe61c0u);
    goto L_e61dc;
L_e61c2:
    X86_TICK(c, 15);
    // 0e61c2  lea eax, [ebp - 0x30]
    X86_AT(c, 0xe61c2u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFD0u);
    // 0e61c5  push eax
    X86_AT(c, 0xe61c5u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e61c6  push esi
    X86_AT(c, 0xe61c6u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0e61c7  push 0
    X86_AT(c, 0xe61c7u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0e61c9  call 0xe38f9
    X86_AT(c, 0xe61c9u);
    push32(c, 0xe61ceu); x86_call_known(c, 0xe38f9u, f_000e38f9); X86_RET(c, 0xe61ceu);
    X86_TICK(c, 11);
    // 0e61ce  inc esi
    X86_AT(c, 0xe61ceu);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 0e61cf  add esp, 0xc
    X86_AT(c, 0xe61cfu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0e61d2  jmp 0xe6197
    X86_AT(c, 0xe61d2u);
    X86_POLL(c, 0xe6197u); goto L_e6197;
L_e61d4:
    X86_TICK(c, 9);
    // 0e61d4  push edi
    X86_AT(c, 0xe61d4u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e61d5  call 0xe7300
    X86_AT(c, 0xe61d5u);
    push32(c, 0xe61dau); x86_call_known(c, 0xe7300u, f_000e7300); X86_RET(c, 0xe61dau);
    X86_TICK(c, 2);
    // 0e61da  sub eax, eax
    X86_AT(c, 0xe61dau);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
L_e61dc:
    X86_TICK(c, 2);
    // 0e61dc  add esp, 4
    X86_AT(c, 0xe61dcu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
L_e61df:
    X86_TICK(c, 28);
    // 0e61df  pop edi
    X86_AT(c, 0xe61dfu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0e61e0  pop esi
    X86_AT(c, 0xe61e0u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0e61e1  pop ebx
    X86_AT(c, 0xe61e1u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0e61e2  leave 
    X86_AT(c, 0xe61e2u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0e61e3  ret 
    X86_AT(c, 0xe61e3u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe60c8u, "ran off the end of a function");
}
void f_000e63d8(X86Cpu& c) {
    X86_TICK(c, 46);
    // 0e63d8  enter 0x14, 0
    X86_AT(c, 0xe63d8u);
    x86_enter(c, 0x14u, 0x0u, 4);
    // 0e63dc  push ebx
    X86_AT(c, 0xe63dcu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0e63dd  push esi
    X86_AT(c, 0xe63ddu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0e63de  push edi
    X86_AT(c, 0xe63deu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e63df  mov edi, dword ptr [ebp + 0xc]
    X86_AT(c, 0xe63dfu);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0e63e2  mov esi, dword ptr [ebp + 0x10]
    X86_AT(c, 0xe63e2u);
    c.r[6] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u)));
    // 0e63e5  mov ebx, dword ptr [ebp + 8]
    X86_AT(c, 0xe63e5u);
    c.r[3] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0e63e8  mov ax, word ptr [0xc453a]
    X86_AT(c, 0xe63e8u);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(0xC453Au))));
    // 0e63ee  mov word ptr [ebp - 0xa], ax
    X86_AT(c, 0xe63eeu);
    wr16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF6u)), (c.r[0] & 0xFFFFu));
    // 0e63f2  mov word ptr [0xc453a], 0
    X86_AT(c, 0xe63f2u);
    wr16((c.sbase[3] + (uint32_t)(0xC453Au)), 0x0u);
    // 0e63fb  mov dword ptr [ebp - 0x10], edi
    X86_AT(c, 0xe63fbu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u)), c.r[7]);
    // 0e63fe  test byte ptr [ebx + 0xc], 0x80
    X86_AT(c, 0xe63feu);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xCu))) & 0x80u, 1);
    // 0e6402  je 0xe640a
    X86_AT(c, 0xe6402u);
    if (x86_cc(c, 4)) { goto L_e640a; }
    X86_TICK(c, 9);
    // 0e6404  push ebx
    X86_AT(c, 0xe6404u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0e6405  call 0xe85ac
    X86_AT(c, 0xe6405u);
    push32(c, 0xe640au); x86_call_known(c, 0xe85acu, f_000e85ac); X86_RET(c, 0xe640au);
L_e640a:
    X86_TICK(c, 12);
    // 0e640a  test byte ptr [ebx + 0xc], 0x10
    X86_AT(c, 0xe640au);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xCu))) & 0x10u, 1);
    // 0e640e  jne 0xe65ed
    X86_AT(c, 0xe640eu);
    if (x86_cc(c, 5)) { goto L_e65ed; }
    X86_TICK(c, 12);
    // 0e6414  cmp dword ptr [ebx + 4], 0xffffffff
    X86_AT(c, 0xe6414u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u))), 0xFFFFFFFFu, 0, 4);
    // 0e6418  jne 0xe6421
    X86_AT(c, 0xe6418u);
    if (x86_cc(c, 5)) { goto L_e6421; }
    X86_TICK(c, 2);
    // 0e641a  mov dword ptr [ebx + 4], 0
    X86_AT(c, 0xe641au);
    wr32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)), 0x0u);
L_e6421:
    X86_TICK(c, 12);
    // 0e6421  test byte ptr [ebx + 0xc], 1
    X86_AT(c, 0xe6421u);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xCu))) & 0x1u, 1);
    // 0e6425  je 0xe65d6
    X86_AT(c, 0xe6425u);
    if (x86_cc(c, 4)) { goto L_e65d6; }
    X86_TICK(c, 12);
    // 0e642b  cmp dword ptr [ebx + 4], 0
    X86_AT(c, 0xe642bu);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u))), 0x0u, 0, 4);
    // 0e642f  jne 0xe647c
    X86_AT(c, 0xe642fu);
    if (x86_cc(c, 5)) { goto L_e647c; }
    X86_TICK(c, 12);
    // 0e6431  test byte ptr [ebx + 0xc], 0x40
    X86_AT(c, 0xe6431u);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xCu))) & 0x40u, 1);
    // 0e6435  je 0xe6453
    X86_AT(c, 0xe6435u);
    if (x86_cc(c, 4)) { goto L_e6453; }
    X86_TICK(c, 18);
    // 0e6437  push dword ptr [ebp + 8]
    X86_AT(c, 0xe6437u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, v); }
    // 0e643a  push 1
    X86_AT(c, 0xe643au);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0e643c  push 1
    X86_AT(c, 0xe643cu);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0e643e  push edi
    X86_AT(c, 0xe643eu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e643f  call 0xe6b28
    X86_AT(c, 0xe643fu);
    push32(c, 0xe6444u); x86_call_known(c, 0xe6b28u, f_000e6b28); X86_RET(c, 0xe6444u);
    X86_TICK(c, 11);
    // 0e6444  mov dword ptr [ebp - 8], eax
    X86_AT(c, 0xe6444u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), c.r[0]);
    // 0e6447  add esp, 0x10
    X86_AT(c, 0xe6447u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0e644a  and eax, eax
    X86_AT(c, 0xe644au);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0e644c  jne 0xe64bb
    X86_AT(c, 0xe644cu);
    if (x86_cc(c, 5)) { goto L_e64bb; }
    X86_TICK(c, 7);
    // 0e644e  jmp 0xe65ed
    X86_AT(c, 0xe644eu);
    goto L_e65ed;
L_e6453:
    X86_TICK(c, 20);
    // 0e6453  push 0x200
    X86_AT(c, 0xe6453u);
    { uint32_t v = 0x200u; push32(c, v); }
    // 0e6458  push dword ptr [ebx + 8]
    X86_AT(c, 0xe6458u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x8u))); push32(c, v); }
    // 0e645b  mov al, byte ptr [ebx + 0xe]
    X86_AT(c, 0xe645bu);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xEu))));
    // 0e645e  push eax
    X86_AT(c, 0xe645eu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e645f  call 0xe9aac
    X86_AT(c, 0xe645fu);
    push32(c, 0xe6464u); x86_call_known(c, 0xe9aacu, f_000e9aac); X86_RET(c, 0xe6464u);
    X86_TICK(c, 22);
    // 0e6464  mov dword ptr [ebx + 4], eax
    X86_AT(c, 0xe6464u);
    wr32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)), c.r[0]);
    // 0e6467  mov eax, dword ptr [ebx + 8]
    X86_AT(c, 0xe6467u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x8u)));
    // 0e646a  mov dword ptr [ebx], eax
    X86_AT(c, 0xe646au);
    wr32((c.sbase[3] + (uint32_t)(c.r[3])), c.r[0]);
    // 0e646c  mov word ptr [ebx + 0x10], 0xffff
    X86_AT(c, 0xe646cu);
    wr16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u)), 0xFFFFu);
    // 0e6472  cmp dword ptr [ebx + 4], 0
    X86_AT(c, 0xe6472u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u))), 0x0u, 0, 4);
    // 0e6476  je 0xe65ed
    X86_AT(c, 0xe6476u);
    if (x86_cc(c, 4)) { goto L_e65ed; }
L_e647c:
    X86_TICK(c, 12);
    // 0e647c  test byte ptr [ebx + 0xc], 0x40
    X86_AT(c, 0xe647cu);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xCu))) & 0x40u, 1);
    // 0e6480  je 0xe6506
    X86_AT(c, 0xe6480u);
    if (x86_cc(c, 4)) { goto L_e6506; }
    X86_TICK(c, 11);
    // 0e6486  mov ax, word ptr [ebx + 0x10]
    X86_AT(c, 0xe6486u);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u))));
    // 0e648a  cmp ax, 0xffff
    X86_AT(c, 0xe648au);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), 0xFFFFu, 0, 2);
    // 0e648e  je 0xe64a0
    X86_AT(c, 0xe648eu);
    if (x86_cc(c, 4)) { goto L_e64a0; }
    X86_TICK(c, 20);
    // 0e6490  movsx eax, ax
    X86_AT(c, 0xe6490u);
    c.r[0] = (uint32_t)(int32_t)(int16_t)(c.r[0] & 0xFFFFu);
    // 0e6493  add eax, dword ptr [ebx + 8]
    X86_AT(c, 0xe6493u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x8u))), 0, 4); }
    // 0e6496  cmp eax, dword ptr [ebx]
    X86_AT(c, 0xe6496u);
    (void)x86_sub(c, c.r[0], rd32((c.sbase[3] + (uint32_t)(c.r[3]))), 0, 4);
    // 0e6498  jl 0xe64a0
    X86_AT(c, 0xe6498u);
    if (x86_cc(c, 12)) { goto L_e64a0; }
    X86_TICK(c, 12);
    // 0e649a  cmp dword ptr [ebx + 4], 0
    X86_AT(c, 0xe649au);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u))), 0x0u, 0, 4);
    // 0e649e  jne 0xe64cc
    X86_AT(c, 0xe649eu);
    if (x86_cc(c, 5)) { goto L_e64cc; }
L_e64a0:
    X86_TICK(c, 18);
    // 0e64a0  push dword ptr [ebp + 8]
    X86_AT(c, 0xe64a0u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, v); }
    // 0e64a3  push 1
    X86_AT(c, 0xe64a3u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0e64a5  push 1
    X86_AT(c, 0xe64a5u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0e64a7  push edi
    X86_AT(c, 0xe64a7u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e64a8  call 0xe6b28
    X86_AT(c, 0xe64a8u);
    push32(c, 0xe64adu); x86_call_known(c, 0xe6b28u, f_000e6b28); X86_RET(c, 0xe64adu);
    X86_TICK(c, 11);
    // 0e64ad  mov dword ptr [ebp - 8], eax
    X86_AT(c, 0xe64adu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), c.r[0]);
    // 0e64b0  add esp, 0x10
    X86_AT(c, 0xe64b0u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0e64b3  and eax, eax
    X86_AT(c, 0xe64b3u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0e64b5  je 0xe65fb
    X86_AT(c, 0xe64b5u);
    if (x86_cc(c, 4)) { goto L_e65fb; }
L_e64bb:
    X86_TICK(c, 12);
    // 0e64bb  cmp byte ptr [edi], 0xa
    X86_AT(c, 0xe64bbu);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[7]))), 0xAu, 0, 1);
    // 0e64be  je 0xe6619
    X86_AT(c, 0xe64beu);
    if (x86_cc(c, 4)) { goto L_e6619; }
    X86_TICK(c, 12);
    // 0e64c4  cmp byte ptr [ebp + 0x14], 0
    X86_AT(c, 0xe64c4u);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x14u))), 0x0u, 0, 1);
    // 0e64c8  je 0xe64cb
    X86_AT(c, 0xe64c8u);
    if (x86_cc(c, 4)) { goto L_e64cb; }
    X86_TICK(c, 2);
    // 0e64ca  dec esi
    X86_AT(c, 0xe64cau);
    { uint32_t v = c.r[6]; c.r[6] = x86_dec(c, v, 4); }
L_e64cb:
    X86_TICK(c, 2);
    // 0e64cb  inc edi
    X86_AT(c, 0xe64cbu);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
L_e64cc:
    X86_TICK(c, 12);
    // 0e64cc  cmp word ptr [ebx + 0x10], 0x200
    X86_AT(c, 0xe64ccu);
    (void)x86_sub(c, rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u))), 0x200u, 0, 2);
    // 0e64d2  jne 0xe64d9
    X86_AT(c, 0xe64d2u);
    if (x86_cc(c, 5)) { goto L_e64d9; }
    X86_TICK(c, 11);
    // 0e64d4  mov eax, dword ptr [ebx + 4]
    X86_AT(c, 0xe64d4u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)));
    // 0e64d7  jmp 0xe64ea
    X86_AT(c, 0xe64d7u);
    goto L_e64ea;
L_e64d9:
    X86_TICK(c, 12);
    // 0e64d9  cmp word ptr [ebx + 0x10], 0xfffe
    X86_AT(c, 0xe64d9u);
    (void)x86_sub(c, rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u))), 0xFFFEu, 0, 2);
    // 0e64de  jne 0xe64f5
    X86_AT(c, 0xe64deu);
    if (x86_cc(c, 5)) { goto L_e64f5; }
    X86_TICK(c, 12);
    // 0e64e0  cmp dword ptr [ebx + 4], 1
    X86_AT(c, 0xe64e0u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u))), 0x1u, 0, 4);
    // 0e64e4  je 0xe64a0
    X86_AT(c, 0xe64e4u);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xe64a0u); goto L_e64a0; }
    X86_TICK(c, 6);
    // 0e64e6  mov eax, dword ptr [ebx + 4]
    X86_AT(c, 0xe64e6u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)));
    // 0e64e9  dec eax
    X86_AT(c, 0xe64e9u);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
L_e64ea:
    X86_TICK(c, 7);
    // 0e64ea  cmp eax, esi
    X86_AT(c, 0xe64eau);
    (void)x86_sub(c, c.r[0], c.r[6], 0, 4);
    // 0e64ec  jl 0xe64f0
    X86_AT(c, 0xe64ecu);
    if (x86_cc(c, 12)) { goto L_e64f0; }
    X86_TICK(c, 2);
    // 0e64ee  mov eax, esi
    X86_AT(c, 0xe64eeu);
    c.r[0] = c.r[6];
L_e64f0:
    X86_TICK(c, 9);
    // 0e64f0  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0xe64f0u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
    // 0e64f3  jmp 0xe6552
    X86_AT(c, 0xe64f3u);
    goto L_e6552;
L_e64f5:
    X86_TICK(c, 25);
    // 0e64f5  mov eax, dword ptr [ebx]
    X86_AT(c, 0xe64f5u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3])));
    // 0e64f7  sub eax, dword ptr [ebx + 8]
    X86_AT(c, 0xe64f7u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x8u))), 0, 4); }
    // 0e64fa  movsx edx, word ptr [ebx + 0x10]
    X86_AT(c, 0xe64fau);
    c.r[2] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u)));
    // 0e64fe  sub edx, eax
    X86_AT(c, 0xe64feu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0e6500  cmp edx, esi
    X86_AT(c, 0xe6500u);
    (void)x86_sub(c, c.r[2], c.r[6], 0, 4);
    // 0e6502  jl 0xe654f
    X86_AT(c, 0xe6502u);
    if (x86_cc(c, 12)) { goto L_e654f; }
    X86_TICK(c, 7);
    // 0e6504  jmp 0xe654d
    X86_AT(c, 0xe6504u);
    goto L_e654d;
L_e6506:
    X86_TICK(c, 12);
    // 0e6506  cmp dword ptr [ebx + 4], 0
    X86_AT(c, 0xe6506u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u))), 0x0u, 0, 4);
    // 0e650a  jne 0xe6535
    X86_AT(c, 0xe650au);
    if (x86_cc(c, 5)) { goto L_e6535; }
    X86_TICK(c, 20);
    // 0e650c  push 0x200
    X86_AT(c, 0xe650cu);
    { uint32_t v = 0x200u; push32(c, v); }
    // 0e6511  push dword ptr [ebx + 8]
    X86_AT(c, 0xe6511u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x8u))); push32(c, v); }
    // 0e6514  mov al, byte ptr [ebx + 0xe]
    X86_AT(c, 0xe6514u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xEu))));
    // 0e6517  push eax
    X86_AT(c, 0xe6517u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e6518  call 0xe9aac
    X86_AT(c, 0xe6518u);
    push32(c, 0xe651du); x86_call_known(c, 0xe9aacu, f_000e9aac); X86_RET(c, 0xe651du);
    X86_TICK(c, 22);
    // 0e651d  mov dword ptr [ebx + 4], eax
    X86_AT(c, 0xe651du);
    wr32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)), c.r[0]);
    // 0e6520  mov eax, dword ptr [ebx + 8]
    X86_AT(c, 0xe6520u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x8u)));
    // 0e6523  mov dword ptr [ebx], eax
    X86_AT(c, 0xe6523u);
    wr32((c.sbase[3] + (uint32_t)(c.r[3])), c.r[0]);
    // 0e6525  mov word ptr [ebx + 0x10], 0xffff
    X86_AT(c, 0xe6525u);
    wr16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u)), 0xFFFFu);
    // 0e652b  cmp dword ptr [ebx + 4], 0
    X86_AT(c, 0xe652bu);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u))), 0x0u, 0, 4);
    // 0e652f  je 0xe65fb
    X86_AT(c, 0xe652fu);
    if (x86_cc(c, 4)) { goto L_e65fb; }
L_e6535:
    X86_TICK(c, 28);
    // 0e6535  mov edx, dword ptr [ebx + 4]
    X86_AT(c, 0xe6535u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)));
    // 0e6538  mov al, 0xa
    X86_AT(c, 0xe6538u);
    s8(c, 0, 0xAu);
    // 0e653a  mov ecx, dword ptr [ebx]
    X86_AT(c, 0xe653au);
    c.r[1] = rd32((c.sbase[3] + (uint32_t)(c.r[3])));
    // 0e653c  push edi
    X86_AT(c, 0xe653cu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e653d  mov edi, ecx
    X86_AT(c, 0xe653du);
    c.r[7] = c.r[1];
    // 0e653f  mov ecx, edx
    X86_AT(c, 0xe653fu);
    c.r[1] = c.r[2];
    // 0e6541  scasb al, byte ptr es:[edi]
    X86_AT(c, 0xe6541u);
    x86_string(c, 4, 1, 242, 4, 3);
    // 0e6543  jne 0xe6548
    X86_AT(c, 0xe6543u);
    if (x86_cc(c, 5)) { goto L_e6548; }
    X86_TICK(c, 4);
    // 0e6545  inc ecx
    X86_AT(c, 0xe6545u);
    { uint32_t v = c.r[1]; c.r[1] = x86_inc(c, v, 4); }
    // 0e6546  sub edx, ecx
    X86_AT(c, 0xe6546u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[1], 0, 4); }
L_e6548:
    X86_TICK(c, 11);
    // 0e6548  pop edi
    X86_AT(c, 0xe6548u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0e6549  cmp edx, esi
    X86_AT(c, 0xe6549u);
    (void)x86_sub(c, c.r[2], c.r[6], 0, 4);
    // 0e654b  jb 0xe654f
    X86_AT(c, 0xe654bu);
    if (x86_cc(c, 2)) { goto L_e654f; }
L_e654d:
    X86_TICK(c, 2);
    // 0e654d  mov edx, esi
    X86_AT(c, 0xe654du);
    c.r[2] = c.r[6];
L_e654f:
    X86_TICK(c, 2);
    // 0e654f  mov dword ptr [ebp - 4], edx
    X86_AT(c, 0xe654fu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[2]);
L_e6552:
    X86_TICK(c, 47);
    // 0e6552  mov ecx, dword ptr [ebp - 4]
    X86_AT(c, 0xe6552u);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0e6555  mov eax, dword ptr [ebx]
    X86_AT(c, 0xe6555u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3])));
    // 0e6557  push esi
    X86_AT(c, 0xe6557u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0e6558  push edi
    X86_AT(c, 0xe6558u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e6559  mov esi, eax
    X86_AT(c, 0xe6559u);
    c.r[6] = c.r[0];
    // 0e655b  movsb byte ptr es:[edi], byte ptr [esi]
    X86_AT(c, 0xe655bu);
    x86_string(c, 0, 1, 243, 4, 3);
    // 0e655d  pop edi
    X86_AT(c, 0xe655du);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0e655e  pop esi
    X86_AT(c, 0xe655eu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0e655f  add edi, dword ptr [ebp - 4]
    X86_AT(c, 0xe655fu);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))), 0, 4); }
    // 0e6562  cmp byte ptr [ebp + 0x14], 0
    X86_AT(c, 0xe6562u);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x14u))), 0x0u, 0, 1);
    // 0e6566  je 0xe656b
    X86_AT(c, 0xe6566u);
    if (x86_cc(c, 4)) { goto L_e656b; }
    X86_TICK(c, 6);
    // 0e6568  sub esi, dword ptr [ebp - 4]
    X86_AT(c, 0xe6568u);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))), 0, 4); }
L_e656b:
    X86_TICK(c, 30);
    // 0e656b  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0xe656bu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0e656e  sub dword ptr [ebx + 4], eax
    X86_AT(c, 0xe656eu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)); uint32_t v = rd32(ea); wr32(ea, x86_sub(c, v, c.r[0], 0, 4)); }
    // 0e6571  add dword ptr [ebx], eax
    X86_AT(c, 0xe6571u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3])); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 0e6573  test byte ptr [ebx + 0xc], 0x40
    X86_AT(c, 0xe6573u);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xCu))) & 0x40u, 1);
    // 0e6577  je 0xe65af
    X86_AT(c, 0xe6577u);
    if (x86_cc(c, 4)) { goto L_e65af; }
    X86_TICK(c, 17);
    // 0e6579  movzx eax, word ptr [0xc40a8]
    X86_AT(c, 0xe6579u);
    c.r[0] = rd16((c.sbase[3] + (uint32_t)(0xC40A8u)));
    // 0e6580  cmp eax, dword ptr [ebx + 4]
    X86_AT(c, 0xe6580u);
    (void)x86_sub(c, c.r[0], rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u))), 0, 4);
    // 0e6583  jg 0xe65cc
    X86_AT(c, 0xe6583u);
    if (x86_cc(c, 15)) { goto L_e65cc; }
    X86_TICK(c, 7);
    // 0e6585  and esi, esi
    X86_AT(c, 0xe6585u);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & c.r[6], 4); }
    // 0e6587  jbe 0xe65cc
    X86_AT(c, 0xe6587u);
    if (x86_cc(c, 6)) { goto L_e65cc; }
    X86_TICK(c, 18);
    // 0e6589  push eax
    X86_AT(c, 0xe6589u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e658a  push 0xc40aa
    X86_AT(c, 0xe658au);
    { uint32_t v = 0xC40AAu; push32(c, v); }
    // 0e658f  push dword ptr [ebx]
    X86_AT(c, 0xe658fu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3]))); push32(c, v); }
    // 0e6591  mov dword ptr [ebp - 0x14], eax
    X86_AT(c, 0xe6591u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu)), c.r[0]);
    // 0e6594  call 0xe9dd8
    X86_AT(c, 0xe6594u);
    push32(c, 0xe6599u); x86_call_known(c, 0xe9dd8u, f_000e9dd8); X86_RET(c, 0xe6599u);
    X86_TICK(c, 7);
    // 0e6599  and ax, ax
    X86_AT(c, 0xe6599u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_logic(c, v & (c.r[0] & 0xFFFFu), 2)); }
    // 0e659c  jne 0xe65cc
    X86_AT(c, 0xe659cu);
    if (x86_cc(c, 5)) { goto L_e65cc; }
    X86_TICK(c, 31);
    // 0e659e  mov eax, dword ptr [ebp - 0x14]
    X86_AT(c, 0xe659eu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu)));
    // 0e65a1  add dword ptr [ebx], eax
    X86_AT(c, 0xe65a1u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3])); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 0e65a3  movzx eax, word ptr [0xc40a8]
    X86_AT(c, 0xe65a3u);
    c.r[0] = rd16((c.sbase[3] + (uint32_t)(0xC40A8u)));
    // 0e65aa  sub dword ptr [ebx + 4], eax
    X86_AT(c, 0xe65aau);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)); uint32_t v = rd32(ea); wr32(ea, x86_sub(c, v, c.r[0], 0, 4)); }
    // 0e65ad  jmp 0xe65c1
    X86_AT(c, 0xe65adu);
    goto L_e65c1;
L_e65af:
    X86_TICK(c, 12);
    // 0e65af  cmp dword ptr [ebx + 4], 0
    X86_AT(c, 0xe65afu);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u))), 0x0u, 0, 4);
    // 0e65b3  jle 0xe65cc
    X86_AT(c, 0xe65b3u);
    if (x86_cc(c, 14)) { goto L_e65cc; }
    X86_TICK(c, 16);
    // 0e65b5  mov eax, dword ptr [ebx]
    X86_AT(c, 0xe65b5u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3])));
    // 0e65b7  cmp byte ptr [eax], 0xa
    X86_AT(c, 0xe65b7u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[0]))), 0xAu, 0, 1);
    // 0e65ba  jne 0xe65cc
    X86_AT(c, 0xe65bau);
    if (x86_cc(c, 5)) { goto L_e65cc; }
    X86_TICK(c, 12);
    // 0e65bc  inc dword ptr [ebx]
    X86_AT(c, 0xe65bcu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3])); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0e65be  dec dword ptr [ebx + 4]
    X86_AT(c, 0xe65beu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
L_e65c1:
    X86_TICK(c, 12);
    // 0e65c1  cmp byte ptr [ebp + 0x14], 0
    X86_AT(c, 0xe65c1u);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x14u))), 0x0u, 0, 1);
    // 0e65c5  je 0xe661f
    X86_AT(c, 0xe65c5u);
    if (x86_cc(c, 4)) { goto L_e661f; }
    X86_TICK(c, 9);
    // 0e65c7  mov byte ptr [edi], 0xa
    X86_AT(c, 0xe65c7u);
    wr8((c.sbase[3] + (uint32_t)(c.r[7])), 0xAu);
    // 0e65ca  jmp 0xe6624
    X86_AT(c, 0xe65cau);
    goto L_e6624;
L_e65cc:
    X86_TICK(c, 7);
    // 0e65cc  and esi, esi
    X86_AT(c, 0xe65ccu);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & c.r[6], 4); }
    // 0e65ce  jne 0xe647c
    X86_AT(c, 0xe65ceu);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xe647cu); goto L_e647c; }
    X86_TICK(c, 7);
    // 0e65d4  jmp 0xe65fb
    X86_AT(c, 0xe65d4u);
    goto L_e65fb;
L_e65d6:
    X86_TICK(c, 18);
    // 0e65d6  push dword ptr [ebp + 8]
    X86_AT(c, 0xe65d6u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, v); }
    // 0e65d9  push 1
    X86_AT(c, 0xe65d9u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0e65db  push 1
    X86_AT(c, 0xe65dbu);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0e65dd  push edi
    X86_AT(c, 0xe65ddu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e65de  call 0xe6b28
    X86_AT(c, 0xe65deu);
    push32(c, 0xe65e3u); x86_call_known(c, 0xe6b28u, f_000e6b28); X86_RET(c, 0xe65e3u);
    X86_TICK(c, 11);
    // 0e65e3  mov dword ptr [ebp - 8], eax
    X86_AT(c, 0xe65e3u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), c.r[0]);
    // 0e65e6  add esp, 0x10
    X86_AT(c, 0xe65e6u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0e65e9  and eax, eax
    X86_AT(c, 0xe65e9u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0e65eb  jne 0xe65f1
    X86_AT(c, 0xe65ebu);
    if (x86_cc(c, 5)) { goto L_e65f1; }
L_e65ed:
    X86_TICK(c, 9);
    // 0e65ed  sub eax, eax
    X86_AT(c, 0xe65edu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0e65ef  jmp 0xe664e
    X86_AT(c, 0xe65efu);
    goto L_e664e;
L_e65f1:
    X86_TICK(c, 12);
    // 0e65f1  cmp dword ptr [ebp - 8], 0
    X86_AT(c, 0xe65f1u);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u))), 0x0u, 0, 4);
    // 0e65f5  je 0xe65fb
    X86_AT(c, 0xe65f5u);
    if (x86_cc(c, 4)) { goto L_e65fb; }
    X86_TICK(c, 7);
    // 0e65f7  and esi, esi
    X86_AT(c, 0xe65f7u);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & c.r[6], 4); }
    // 0e65f9  jne 0xe6614
    X86_AT(c, 0xe65f9u);
    if (x86_cc(c, 5)) { goto L_e6614; }
L_e65fb:
    X86_TICK(c, 15);
    // 0e65fb  sub eax, eax
    X86_AT(c, 0xe65fbu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0e65fd  mov byte ptr [edi], al
    X86_AT(c, 0xe65fdu);
    wr8((c.sbase[3] + (uint32_t)(c.r[7])), g8(c, 0));
    // 0e65ff  cmp ax, word ptr [0xc453a]
    X86_AT(c, 0xe65ffu);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), rd16((c.sbase[3] + (uint32_t)(0xC453Au))), 0, 2);
    // 0e6606  jne 0xe664e
    X86_AT(c, 0xe6606u);
    if (x86_cc(c, 5)) { goto L_e664e; }
    X86_TICK(c, 13);
    // 0e6608  mov ax, word ptr [ebp - 0xa]
    X86_AT(c, 0xe6608u);
    s16(c, 0, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF6u))));
    // 0e660c  mov word ptr [0xc453a], ax
    X86_AT(c, 0xe660cu);
    wr16((c.sbase[3] + (uint32_t)(0xC453Au)), (c.r[0] & 0xFFFFu));
    // 0e6612  jmp 0xe6628
    X86_AT(c, 0xe6612u);
    goto L_e6628;
L_e6614:
    X86_TICK(c, 12);
    // 0e6614  cmp byte ptr [edi], 0xa
    X86_AT(c, 0xe6614u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[7]))), 0xAu, 0, 1);
    // 0e6617  jne 0xe662d
    X86_AT(c, 0xe6617u);
    if (x86_cc(c, 5)) { goto L_e662d; }
L_e6619:
    X86_TICK(c, 12);
    // 0e6619  cmp byte ptr [ebp + 0x14], 0
    X86_AT(c, 0xe6619u);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x14u))), 0x0u, 0, 1);
    // 0e661d  jne 0xe6624
    X86_AT(c, 0xe661du);
    if (x86_cc(c, 5)) { goto L_e6624; }
L_e661f:
    X86_TICK(c, 9);
    // 0e661f  mov byte ptr [edi], 0
    X86_AT(c, 0xe661fu);
    wr8((c.sbase[3] + (uint32_t)(c.r[7])), 0x0u);
    // 0e6622  jmp 0xe6628
    X86_AT(c, 0xe6622u);
    goto L_e6628;
L_e6624:
    X86_TICK(c, 2);
    // 0e6624  mov byte ptr [edi + 1], 0
    X86_AT(c, 0xe6624u);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0x1u)), 0x0u);
L_e6628:
    X86_TICK(c, 11);
    // 0e6628  mov eax, dword ptr [ebp - 0x10]
    X86_AT(c, 0xe6628u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u)));
    // 0e662b  jmp 0xe664e
    X86_AT(c, 0xe662bu);
    goto L_e664e;
L_e662d:
    X86_TICK(c, 14);
    // 0e662d  inc edi
    X86_AT(c, 0xe662du);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0e662e  cmp byte ptr [ebp + 0x14], 0
    X86_AT(c, 0xe662eu);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x14u))), 0x0u, 0, 1);
    // 0e6632  je 0xe6635
    X86_AT(c, 0xe6632u);
    if (x86_cc(c, 4)) { goto L_e6635; }
    X86_TICK(c, 2);
    // 0e6634  dec esi
    X86_AT(c, 0xe6634u);
    { uint32_t v = c.r[6]; c.r[6] = x86_dec(c, v, 4); }
L_e6635:
    X86_TICK(c, 7);
    // 0e6635  and esi, esi
    X86_AT(c, 0xe6635u);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & c.r[6], 4); }
    // 0e6637  jbe 0xe65f1
    X86_AT(c, 0xe6637u);
    if (x86_cc(c, 6)) { X86_POLL(c, 0xe65f1u); goto L_e65f1; }
    X86_TICK(c, 18);
    // 0e6639  push dword ptr [ebp + 8]
    X86_AT(c, 0xe6639u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, v); }
    // 0e663c  push 1
    X86_AT(c, 0xe663cu);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0e663e  push 1
    X86_AT(c, 0xe663eu);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0e6640  push edi
    X86_AT(c, 0xe6640u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e6641  call 0xe6b28
    X86_AT(c, 0xe6641u);
    push32(c, 0xe6646u); x86_call_known(c, 0xe6b28u, f_000e6b28); X86_RET(c, 0xe6646u);
    X86_TICK(c, 11);
    // 0e6646  mov dword ptr [ebp - 8], eax
    X86_AT(c, 0xe6646u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), c.r[0]);
    // 0e6649  add esp, 0x10
    X86_AT(c, 0xe6649u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0e664c  jmp 0xe65f1
    X86_AT(c, 0xe664cu);
    X86_POLL(c, 0xe65f1u); goto L_e65f1;
L_e664e:
    X86_TICK(c, 28);
    // 0e664e  pop edi
    X86_AT(c, 0xe664eu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0e664f  pop esi
    X86_AT(c, 0xe664fu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0e6650  pop ebx
    X86_AT(c, 0xe6650u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0e6651  leave 
    X86_AT(c, 0xe6651u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0e6652  ret 0x10
    X86_AT(c, 0xe6652u);
    c.eip = pop32(c); c.r[4] += 0x10u; return;
    x86_fault(c, 0xe63d8u, "ran off the end of a function");
}
}

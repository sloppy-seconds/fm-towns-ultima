#include "p_game_funcs.h"
namespace p_game {
void f_000e76e0(X86Cpu& c) {
    X86_TICK(c, 39);
    // 0e76e0  push ebp
    X86_AT(c, 0xe76e0u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0e76e1  mov ebp, esp
    X86_AT(c, 0xe76e1u);
    c.r[5] = c.r[4];
    // 0e76e3  push ecx
    X86_AT(c, 0xe76e3u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 0e76e4  push ebx
    X86_AT(c, 0xe76e4u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0e76e5  push edi
    X86_AT(c, 0xe76e5u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e76e6  mov edi, dword ptr [ebp + 0xc]
    X86_AT(c, 0xe76e6u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0e76e9  mov ebx, dword ptr [ebp - 4]
    X86_AT(c, 0xe76e9u);
    c.r[3] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0e76ec  push dword ptr [ebx + 8]
    X86_AT(c, 0xe76ecu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x8u))); push32(c, v); }
    // 0e76ef  push edi
    X86_AT(c, 0xe76efu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e76f0  push 1
    X86_AT(c, 0xe76f0u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0e76f2  push dword ptr [ebp + 8]
    X86_AT(c, 0xe76f2u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, v); }
    // 0e76f5  call 0xe7180
    X86_AT(c, 0xe76f5u);
    push32(c, 0xe76fau); x86_call_known(c, 0xe7180u, f_000e7180); X86_RET(c, 0xe76fau);
    X86_TICK(c, 9);
    // 0e76fa  add esp, 0x10
    X86_AT(c, 0xe76fau);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0e76fd  cmp edi, eax
    X86_AT(c, 0xe76fdu);
    (void)x86_sub(c, c.r[7], c.r[0], 0, 4);
    // 0e76ff  je 0xe770c
    X86_AT(c, 0xe76ffu);
    if (x86_cc(c, 4)) { goto L_e770c; }
    X86_TICK(c, 11);
    // 0e7701  mov dword ptr [ebx - 4], 0xffffffff
    X86_AT(c, 0xe7701u);
    wr32((c.sbase[3] + (uint32_t)(c.r[3] + 0xFFFFFFFCu)), 0xFFFFFFFFu);
    // 0e7708  mov ebp, ebx
    X86_AT(c, 0xe7708u);
    c.r[5] = c.r[3];
    // 0e770a  jmp 0xe7745
    X86_AT(c, 0xe770au);
    goto L_e7745;
L_e770c:
    X86_TICK(c, 24);
    // 0e770c  pop edi
    X86_AT(c, 0xe770cu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0e770d  pop ebx
    X86_AT(c, 0xe770du);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0e770e  leave 
    X86_AT(c, 0xe770eu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0e770f  ret 8
    X86_AT(c, 0xe770fu);
    c.eip = pop32(c); c.r[4] += 0x8u; return;
L_e7745:
    X86_TICK(c, 34);
    // 0e7745  lea esp, [ebp - 0x10]
    X86_AT(c, 0xe7745u);
    c.r[4] = (uint32_t)(c.r[5] + 0xFFFFFFF0u);
    // 0e7748  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0xe7748u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0e774b  pop edi
    X86_AT(c, 0xe774bu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0e774c  pop esi
    X86_AT(c, 0xe774cu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0e774d  pop ebx
    X86_AT(c, 0xe774du);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0e774e  leave 
    X86_AT(c, 0xe774eu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0e774f  ret 
    X86_AT(c, 0xe774fu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe76e0u, "ran off the end of a function");
}
void f_000e771c(X86Cpu& c) {
    X86_TICK(c, 33);
    // 0e771c  enter 4, 0
    X86_AT(c, 0xe771cu);
    x86_enter(c, 0x4u, 0x0u, 4);
    // 0e7720  push ebx
    X86_AT(c, 0xe7720u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0e7721  push esi
    X86_AT(c, 0xe7721u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0e7722  push edi
    X86_AT(c, 0xe7722u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e7723  mov dword ptr [0xc40e0], 0xe76e0
    X86_AT(c, 0xe7723u);
    wr32((c.sbase[3] + (uint32_t)(0xC40E0u)), 0xE76E0u);
    // 0e772d  mov dword ptr [0xc40e4], ebp
    X86_AT(c, 0xe772du);
    wr32((c.sbase[3] + (uint32_t)(0xC40E4u)), c.r[5]);
    // 0e7733  push dword ptr [ebp + 0x10]
    X86_AT(c, 0xe7733u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u))); push32(c, v); }
    // 0e7736  push dword ptr [ebp + 0xc]
    X86_AT(c, 0xe7736u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))); push32(c, v); }
    // 0e7739  call 0xe8e2c
    X86_AT(c, 0xe7739u);
    push32(c, 0xe773eu); x86_call_known(c, 0xe8e2cu, f_000e8e2c); X86_RET(c, 0xe773eu);
    X86_TICK(c, 11);
    // 0e773e  mov eax, dword ptr [0xc40dc]
    X86_AT(c, 0xe773eu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xC40DCu)));
    // 0e7743  jmp 0xe774b
    X86_AT(c, 0xe7743u);
    goto L_e774b;
L_e774b:
    X86_TICK(c, 28);
    // 0e774b  pop edi
    X86_AT(c, 0xe774bu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0e774c  pop esi
    X86_AT(c, 0xe774cu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0e774d  pop ebx
    X86_AT(c, 0xe774du);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0e774e  leave 
    X86_AT(c, 0xe774eu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0e774f  ret 
    X86_AT(c, 0xe774fu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe771cu, "ran off the end of a function");
}
void f_000e7778(X86Cpu& c) {
    X86_TICK(c, 25);
    // 0e7778  push ebp
    X86_AT(c, 0xe7778u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0e7779  mov ebp, esp
    X86_AT(c, 0xe7779u);
    c.r[5] = c.r[4];
    // 0e777b  lea eax, [ebp + 0xc]
    X86_AT(c, 0xe777bu);
    c.r[0] = (uint32_t)(c.r[5] + 0xCu);
    // 0e777e  push eax
    X86_AT(c, 0xe777eu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e777f  push dword ptr [ebp + 8]
    X86_AT(c, 0xe777fu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, v); }
    // 0e7782  push dword ptr [0xc40b4]
    X86_AT(c, 0xe7782u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xC40B4u))); push32(c, v); }
    // 0e7788  call 0xe771c
    X86_AT(c, 0xe7788u);
    push32(c, 0xe778du); x86_call_known(c, 0xe771cu, f_000e771c); X86_RET(c, 0xe778du);
    X86_TICK(c, 18);
    // 0e778d  add esp, 0xc
    X86_AT(c, 0xe778du);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0e7790  leave 
    X86_AT(c, 0xe7790u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0e7791  ret 
    X86_AT(c, 0xe7791u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe7778u, "ran off the end of a function");
}
void f_000e779c(X86Cpu& c) {
    X86_TICK(c, 25);
    // 0e779c  push ebp
    X86_AT(c, 0xe779cu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0e779d  mov ebp, esp
    X86_AT(c, 0xe779du);
    c.r[5] = c.r[4];
    // 0e779f  lea eax, [ebp + 0x10]
    X86_AT(c, 0xe779fu);
    c.r[0] = (uint32_t)(c.r[5] + 0x10u);
    // 0e77a2  push eax
    X86_AT(c, 0xe77a2u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e77a3  push dword ptr [ebp + 0xc]
    X86_AT(c, 0xe77a3u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))); push32(c, v); }
    // 0e77a6  push dword ptr [ebp + 8]
    X86_AT(c, 0xe77a6u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, v); }
    // 0e77a9  call 0xe771c
    X86_AT(c, 0xe77a9u);
    push32(c, 0xe77aeu); x86_call_known(c, 0xe771cu, f_000e771c); X86_RET(c, 0xe77aeu);
    X86_TICK(c, 18);
    // 0e77ae  add esp, 0xc
    X86_AT(c, 0xe77aeu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0e77b1  leave 
    X86_AT(c, 0xe77b1u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0e77b2  ret 
    X86_AT(c, 0xe77b2u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe779cu, "ran off the end of a function");
}
void f_000e77c4(X86Cpu& c) {
    X86_TICK(c, 16);
    // 0e77c4  push ebp
    X86_AT(c, 0xe77c4u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0e77c5  mov ebp, esp
    X86_AT(c, 0xe77c5u);
    c.r[5] = c.r[4];
    // 0e77c7  push dword ptr [ebp + 8]
    X86_AT(c, 0xe77c7u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, v); }
    // 0e77ca  call 0xe9976
    X86_AT(c, 0xe77cau);
    push32(c, 0xe77cfu); x86_call_known(c, 0xe9976u, f_000e9976); X86_RET(c, 0xe77cfu);
    X86_TICK(c, 16);
    // 0e77cf  leave 
    X86_AT(c, 0xe77cfu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0e77d0  ret 
    X86_AT(c, 0xe77d0u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe77c4u, "ran off the end of a function");
}
void f_000e77d8(X86Cpu& c) {
    X86_TICK(c, 16);
    // 0e77d8  push ebp
    X86_AT(c, 0xe77d8u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0e77d9  mov ebp, esp
    X86_AT(c, 0xe77d9u);
    c.r[5] = c.r[4];
    // 0e77db  push dword ptr [ebp + 8]
    X86_AT(c, 0xe77dbu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, v); }
    // 0e77de  call 0xe993c
    X86_AT(c, 0xe77deu);
    push32(c, 0xe77e3u); x86_call_known(c, 0xe993cu, f_000e993c); X86_RET(c, 0xe77e3u);
    X86_TICK(c, 16);
    // 0e77e3  leave 
    X86_AT(c, 0xe77e3u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0e77e4  ret 
    X86_AT(c, 0xe77e4u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe77d8u, "ran off the end of a function");
}
void f_000e7804(X86Cpu& c) {
    X86_TICK(c, 35);
    // 0e7804  enter 0x20, 0
    X86_AT(c, 0xe7804u);
    x86_enter(c, 0x20u, 0x0u, 4);
    // 0e7808  push ebx
    X86_AT(c, 0xe7808u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0e7809  push esi
    X86_AT(c, 0xe7809u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0e780a  push edi
    X86_AT(c, 0xe780au);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e780b  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0xe780bu);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0e780e  lea ebx, [ebp - 0x1c]
    X86_AT(c, 0xe780eu);
    c.r[3] = (uint32_t)(c.r[5] + 0xFFFFFFE4u);
    // 0e7811  push ebx
    X86_AT(c, 0xe7811u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0e7812  lea esi, [ebp - 0x14]
    X86_AT(c, 0xe7812u);
    c.r[6] = (uint32_t)(c.r[5] + 0xFFFFFFECu);
    // 0e7815  push esi
    X86_AT(c, 0xe7815u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0e7816  lea eax, [ebp - 0x12]
    X86_AT(c, 0xe7816u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFEEu);
    // 0e7819  push eax
    X86_AT(c, 0xe7819u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e781a  call 0xe9bd0
    X86_AT(c, 0xe781au);
    push32(c, 0xe781fu); x86_call_known(c, 0xe9bd0u, f_000e9bd0); X86_RET(c, 0xe781fu);
    X86_TICK(c, 44);
    // 0e781f  mov ax, word ptr [ebx]
    X86_AT(c, 0xe781fu);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(c.r[3]))));
    // 0e7822  mov word ptr [ebp - 0x10], ax
    X86_AT(c, 0xe7822u);
    wr16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u)), (c.r[0] & 0xFFFFu));
    // 0e7826  mov ax, word ptr [esi]
    X86_AT(c, 0xe7826u);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(c.r[6]))));
    // 0e7829  dec eax
    X86_AT(c, 0xe7829u);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 0e782a  mov word ptr [ebp - 0xe], ax
    X86_AT(c, 0xe782au);
    wr16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF2u)), (c.r[0] & 0xFFFFu));
    // 0e782e  shl eax, 8
    X86_AT(c, 0xe782eu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 0e7831  add ax, word ptr [ebp - 0x12]
    X86_AT(c, 0xe7831u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFEEu))), 0, 2)); }
    // 0e7835  mov word ptr [ebp - 0xe], ax
    X86_AT(c, 0xe7835u);
    wr16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF2u)), (c.r[0] & 0xFFFFu));
    // 0e7839  lea ebx, [ebp - 0x1a]
    X86_AT(c, 0xe7839u);
    c.r[3] = (uint32_t)(c.r[5] + 0xFFFFFFE6u);
    // 0e783c  push ebx
    X86_AT(c, 0xe783cu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0e783d  lea esi, [ebp - 0x18]
    X86_AT(c, 0xe783du);
    c.r[6] = (uint32_t)(c.r[5] + 0xFFFFFFE8u);
    // 0e7840  push esi
    X86_AT(c, 0xe7840u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0e7841  lea eax, [ebp - 0x16]
    X86_AT(c, 0xe7841u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFEAu);
    // 0e7844  push eax
    X86_AT(c, 0xe7844u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e7845  call 0xe9c04
    X86_AT(c, 0xe7845u);
    push32(c, 0xe784au); x86_call_known(c, 0xe9c04u, f_000e9c04); X86_RET(c, 0xe784au);
    X86_TICK(c, 22);
    // 0e784a  mov ax, word ptr [ebp - 0x16]
    X86_AT(c, 0xe784au);
    s16(c, 0, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFEAu))));
    // 0e784e  shl eax, 8
    X86_AT(c, 0xe784eu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 0e7851  add ax, word ptr [esi]
    X86_AT(c, 0xe7851u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[3] + (uint32_t)(c.r[6]))), 0, 2)); }
    // 0e7854  mov word ptr [ebp - 0xc], ax
    X86_AT(c, 0xe7854u);
    wr16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)), (c.r[0] & 0xFFFFu));
    // 0e7858  call 0xe9c3c
    X86_AT(c, 0xe7858u);
    push32(c, 0xe785du); x86_call_known(c, 0xe9c3cu, f_000e9c3c); X86_RET(c, 0xe785du);
    X86_TICK(c, 63);
    // 0e785d  mov dx, word ptr [ebx]
    X86_AT(c, 0xe785du);
    s16(c, 2, rd16((c.sbase[3] + (uint32_t)(c.r[3]))));
    // 0e7860  shl edx, 8
    X86_AT(c, 0xe7860u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[2] = r; }
    // 0e7863  movzx edx, dx
    X86_AT(c, 0xe7863u);
    c.r[2] = (c.r[2] & 0xFFFFu);
    // 0e7866  mov dword ptr [ebp - 0x20], edx
    X86_AT(c, 0xe7866u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE0u)), c.r[2]);
    // 0e7869  cdq 
    X86_AT(c, 0xe7869u);
    c.r[2] = (c.r[0] & 0x80000000u) ? 0xFFFFFFFFu : 0u;
    // 0e786a  mov ecx, 0x64
    X86_AT(c, 0xe786au);
    c.r[1] = 0x64u;
    // 0e786f  idiv ecx
    X86_AT(c, 0xe786fu);
    x86_idiv(c, c.r[1], 4, 0xe786fu);
    // 0e7871  and edx, edx
    X86_AT(c, 0xe7871u);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & c.r[2], 4); }
    // 0e7873  jge 0xe7877
    X86_AT(c, 0xe7873u);
    if (x86_cc(c, 13)) { goto L_e7877; }
    X86_TICK(c, 2);
    // 0e7875  add edx, ecx
    X86_AT(c, 0xe7875u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[1], 0, 4); }
L_e7877:
    X86_TICK(c, 27);
    // 0e7877  add edx, dword ptr [ebp - 0x20]
    X86_AT(c, 0xe7877u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE0u))), 0, 4); }
    // 0e787a  mov word ptr [ebp - 0xa], dx
    X86_AT(c, 0xe787au);
    wr16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF6u)), (c.r[2] & 0xFFFFu));
    // 0e787e  mov eax, dword ptr [ebp - 0x10]
    X86_AT(c, 0xe787eu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u)));
    // 0e7881  mov edx, dword ptr [ebp - 0xc]
    X86_AT(c, 0xe7881u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)));
    // 0e7884  mov dword ptr [ebp - 8], eax
    X86_AT(c, 0xe7884u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), c.r[0]);
    // 0e7887  mov dword ptr [ebp - 4], edx
    X86_AT(c, 0xe7887u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[2]);
    // 0e788a  and edi, edi
    X86_AT(c, 0xe788au);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & c.r[7], 4); }
    // 0e788c  je 0xe7893
    X86_AT(c, 0xe788cu);
    if (x86_cc(c, 4)) { goto L_e7893; }
    X86_TICK(c, 4);
    // 0e788e  mov dword ptr [edi], eax
    X86_AT(c, 0xe788eu);
    wr32((c.sbase[3] + (uint32_t)(c.r[7])), c.r[0]);
    // 0e7890  mov dword ptr [edi + 4], edx
    X86_AT(c, 0xe7890u);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] + 0x4u)), c.r[2]);
L_e7893:
    X86_TICK(c, 36);
    // 0e7893  mov eax, dword ptr [ebp - 8]
    X86_AT(c, 0xe7893u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)));
    // 0e7896  mov edx, dword ptr [ebp - 4]
    X86_AT(c, 0xe7896u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0e7899  pop edi
    X86_AT(c, 0xe7899u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0e789a  pop esi
    X86_AT(c, 0xe789au);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0e789b  pop ebx
    X86_AT(c, 0xe789bu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0e789c  leave 
    X86_AT(c, 0xe789cu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0e789d  ret 
    X86_AT(c, 0xe789du);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe7804u, "ran off the end of a function");
}
void f_000e78b4(X86Cpu& c) {
    X86_TICK(c, 45);
    // 0e78b4  imul eax, dword ptr [0xc40fc], 0x41c64e6d
    X86_AT(c, 0xe78b4u);
    c.r[0] = x86_imul2(c, rd32((c.sbase[3] + (uint32_t)(0xC40FCu))), 0x41C64E6Du, 4);
    // 0e78be  add eax, 0x3039
    X86_AT(c, 0xe78beu);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0x3039u, 0, 4); }
    // 0e78c3  mov dword ptr [0xc40fc], eax
    X86_AT(c, 0xe78c3u);
    wr32((c.sbase[3] + (uint32_t)(0xC40FCu)), c.r[0]);
    // 0e78c8  mov ax, word ptr [0xc40fe]
    X86_AT(c, 0xe78c8u);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(0xC40FEu))));
    // 0e78ce  and ah, 0x7f
    X86_AT(c, 0xe78ceu);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_logic(c, v & 0x7Fu, 1)); }
    // 0e78d1  movzx eax, ax
    X86_AT(c, 0xe78d1u);
    c.r[0] = (c.r[0] & 0xFFFFu);
    // 0e78d4  ret 
    X86_AT(c, 0xe78d4u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe78b4u, "ran off the end of a function");
}
void f_000e78dc(X86Cpu& c) {
    X86_TICK(c, 16);
    // 0e78dc  mov eax, dword ptr [esp + 4]
    X86_AT(c, 0xe78dcu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[4] + 0x4u)));
    // 0e78e0  mov dword ptr [0xc40fc], eax
    X86_AT(c, 0xe78e0u);
    wr32((c.sbase[3] + (uint32_t)(0xC40FCu)), c.r[0]);
    // 0e78e5  ret 
    X86_AT(c, 0xe78e5u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe78dcu, "ran off the end of a function");
}
void f_000e78fc(X86Cpu& c) {
    X86_TICK(c, 46);
    // 0e78fc  enter 0x70, 0
    X86_AT(c, 0xe78fcu);
    x86_enter(c, 0x70u, 0x0u, 4);
    // 0e7900  push esi
    X86_AT(c, 0xe7900u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0e7901  push edi
    X86_AT(c, 0xe7901u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e7902  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0xe7902u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0e7905  mov eax, dword ptr [0xc41ac]
    X86_AT(c, 0xe7905u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xC41ACu)));
    // 0e790a  mov dx, word ptr [0xc41b0]
    X86_AT(c, 0xe790au);
    s16(c, 2, rd16((c.sbase[3] + (uint32_t)(0xC41B0u))));
    // 0e7911  mov dword ptr [ebp - 0xc], eax
    X86_AT(c, 0xe7911u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)), c.r[0]);
    // 0e7914  mov word ptr [ebp - 8], dx
    X86_AT(c, 0xe7914u);
    wr16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), (c.r[2] & 0xFFFFu));
    // 0e7918  mov edx, 0x7fffffff
    X86_AT(c, 0xe7918u);
    c.r[2] = 0x7FFFFFFFu;
    // 0e791d  sub eax, eax
    X86_AT(c, 0xe791du);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0e791f  push edi
    X86_AT(c, 0xe791fu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e7920  mov ecx, edx
    X86_AT(c, 0xe7920u);
    c.r[1] = c.r[2];
    // 0e7922  scasb al, byte ptr es:[edi]
    X86_AT(c, 0xe7922u);
    x86_string(c, 4, 1, 242, 4, 3);
    // 0e7924  jne 0xe7929
    X86_AT(c, 0xe7924u);
    if (x86_cc(c, 5)) { goto L_e7929; }
    X86_TICK(c, 4);
    // 0e7926  inc ecx
    X86_AT(c, 0xe7926u);
    { uint32_t v = c.r[1]; c.r[1] = x86_inc(c, v, 4); }
    // 0e7927  sub edx, ecx
    X86_AT(c, 0xe7927u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[1], 0, 4); }
L_e7929:
    X86_TICK(c, 13);
    // 0e7929  pop edi
    X86_AT(c, 0xe7929u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0e792a  mov ax, 0x64
    X86_AT(c, 0xe792au);
    s16(c, 0, 0x64u);
    // 0e792e  cmp ax, dx
    X86_AT(c, 0xe792eu);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), (c.r[2] & 0xFFFFu), 0, 2);
    // 0e7931  jb 0xe7934
    X86_AT(c, 0xe7931u);
    if (x86_cc(c, 2)) { goto L_e7934; }
    X86_TICK(c, 3);
    // 0e7933  xchg edx, eax
    X86_AT(c, 0xe7933u);
    { uint32_t t = c.r[2]; c.r[2] = c.r[0]; c.r[0] = t; }
L_e7934:
    X86_TICK(c, 10);
    // 0e7934  movzx esi, ax
    X86_AT(c, 0xe7934u);
    c.r[6] = (c.r[0] & 0xFFFFu);
    // 0e7937  jmp 0xe79db
    X86_AT(c, 0xe7937u);
    goto L_e79db;
L_e793c:
    X86_TICK(c, 64);
    // 0e793c  mov ecx, esi
    X86_AT(c, 0xe793cu);
    c.r[1] = c.r[6];
    // 0e793e  les eax, fword ptr [ebp - 0xc]
    X86_AT(c, 0xe793eu);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)); uint32_t o = rd32(ea); uint32_t s = rd16(ea + 4); x86_load_seg(c, 0, s); c.r[0] = o; }
    // 0e7941  push ds
    X86_AT(c, 0xe7941u);
    push32(c, c.sreg[3]);
    // 0e7942  push es
    X86_AT(c, 0xe7942u);
    push32(c, c.sreg[0]);
    // 0e7943  lea edx, [ebp - 0x70]
    X86_AT(c, 0xe7943u);
    c.r[2] = (uint32_t)(c.r[5] + 0xFFFFFF90u);
    // 0e7946  push ds
    X86_AT(c, 0xe7946u);
    push32(c, c.sreg[3]);
    // 0e7947  pop es
    X86_AT(c, 0xe7947u);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 0e7948  pop ds
    X86_AT(c, 0xe7948u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 0e7949  push esi
    X86_AT(c, 0xe7949u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0e794a  push edi
    X86_AT(c, 0xe794au);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e794b  mov esi, eax
    X86_AT(c, 0xe794bu);
    c.r[6] = c.r[0];
    // 0e794d  mov edi, edx
    X86_AT(c, 0xe794du);
    c.r[7] = c.r[2];
    // 0e794f  movsb byte ptr es:[edi], byte ptr [esi]
    X86_AT(c, 0xe794fu);
    x86_string(c, 0, 1, 243, 4, 3);
    // 0e7951  pop edi
    X86_AT(c, 0xe7951u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0e7952  pop esi
    X86_AT(c, 0xe7952u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0e7953  pop ds
    X86_AT(c, 0xe7953u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 0e7954  push esi
    X86_AT(c, 0xe7954u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0e7955  push edi
    X86_AT(c, 0xe7955u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e7956  push edx
    X86_AT(c, 0xe7956u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0e7957  call 0xe9dd8
    X86_AT(c, 0xe7957u);
    push32(c, 0xe795cu); x86_call_known(c, 0xe9dd8u, f_000e9dd8); X86_RET(c, 0xe795cu);
    X86_TICK(c, 7);
    // 0e795c  and ax, ax
    X86_AT(c, 0xe795cu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_logic(c, v & (c.r[0] & 0xFFFFu), 2)); }
    // 0e795f  jne 0xe79b1
    X86_AT(c, 0xe795fu);
    if (x86_cc(c, 5)) { goto L_e79b1; }
    X86_TICK(c, 24);
    // 0e7961  les eax, fword ptr [ebp - 0xc]
    X86_AT(c, 0xe7961u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)); uint32_t o = rd32(ea); uint32_t s = rd16(ea + 4); x86_load_seg(c, 0, s); c.r[0] = o; }
    // 0e7964  cmp byte ptr es:[eax + esi*1], 0x3d
    X86_AT(c, 0xe7964u);
    (void)x86_sub(c, rd8((c.sbase[0] + (uint32_t)(c.r[0] + c.r[6]))), 0x3Du, 0, 1);
    // 0e7969  push ds
    X86_AT(c, 0xe7969u);
    push32(c, c.sreg[3]);
    // 0e796a  pop es
    X86_AT(c, 0xe796au);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 0e796b  jne 0xe79b1
    X86_AT(c, 0xe796bu);
    if (x86_cc(c, 5)) { goto L_e79b1; }
    X86_TICK(c, 37);
    // 0e796d  lea eax, [esi + 1]
    X86_AT(c, 0xe796du);
    c.r[0] = (uint32_t)(c.r[6] + 0x1u);
    // 0e7970  add dword ptr [ebp - 0xc], eax
    X86_AT(c, 0xe7970u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 0e7973  mov edx, 0x7fffffff
    X86_AT(c, 0xe7973u);
    c.r[2] = 0x7FFFFFFFu;
    // 0e7978  sub eax, eax
    X86_AT(c, 0xe7978u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0e797a  les ecx, fword ptr [ebp - 0xc]
    X86_AT(c, 0xe797au);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)); uint32_t o = rd32(ea); uint32_t s = rd16(ea + 4); x86_load_seg(c, 0, s); c.r[1] = o; }
    // 0e797d  push edi
    X86_AT(c, 0xe797du);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e797e  mov edi, ecx
    X86_AT(c, 0xe797eu);
    c.r[7] = c.r[1];
    // 0e7980  mov ecx, edx
    X86_AT(c, 0xe7980u);
    c.r[1] = c.r[2];
    // 0e7982  scasb al, byte ptr es:[edi]
    X86_AT(c, 0xe7982u);
    x86_string(c, 4, 1, 242, 4, 3);
    // 0e7984  jne 0xe7989
    X86_AT(c, 0xe7984u);
    if (x86_cc(c, 5)) { goto L_e7989; }
    X86_TICK(c, 4);
    // 0e7986  inc ecx
    X86_AT(c, 0xe7986u);
    { uint32_t v = c.r[1]; c.r[1] = x86_inc(c, v, 4); }
    // 0e7987  sub edx, ecx
    X86_AT(c, 0xe7987u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[1], 0, 4); }
L_e7989:
    X86_TICK(c, 15);
    // 0e7989  pop edi
    X86_AT(c, 0xe7989u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0e798a  inc edx
    X86_AT(c, 0xe798au);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
    // 0e798b  mov eax, 0x80
    X86_AT(c, 0xe798bu);
    c.r[0] = 0x80u;
    // 0e7990  cmp eax, edx
    X86_AT(c, 0xe7990u);
    (void)x86_sub(c, c.r[0], c.r[2], 0, 4);
    // 0e7992  jb 0xe7995
    X86_AT(c, 0xe7992u);
    if (x86_cc(c, 2)) { goto L_e7995; }
    X86_TICK(c, 3);
    // 0e7994  xchg edx, eax
    X86_AT(c, 0xe7994u);
    { uint32_t t = c.r[2]; c.r[2] = c.r[0]; c.r[0] = t; }
L_e7995:
    X86_TICK(c, 62);
    // 0e7995  xchg ecx, eax
    X86_AT(c, 0xe7995u);
    { uint32_t t = c.r[1]; c.r[1] = c.r[0]; c.r[0] = t; }
    // 0e7996  les eax, fword ptr [ebp - 0xc]
    X86_AT(c, 0xe7996u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)); uint32_t o = rd32(ea); uint32_t s = rd16(ea + 4); x86_load_seg(c, 0, s); c.r[0] = o; }
    // 0e7999  push ds
    X86_AT(c, 0xe7999u);
    push32(c, c.sreg[3]);
    // 0e799a  push es
    X86_AT(c, 0xe799au);
    push32(c, c.sreg[0]);
    // 0e799b  mov edx, 0xc4100
    X86_AT(c, 0xe799bu);
    c.r[2] = 0xC4100u;
    // 0e79a0  push ds
    X86_AT(c, 0xe79a0u);
    push32(c, c.sreg[3]);
    // 0e79a1  pop es
    X86_AT(c, 0xe79a1u);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 0e79a2  pop ds
    X86_AT(c, 0xe79a2u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 0e79a3  push esi
    X86_AT(c, 0xe79a3u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0e79a4  push edi
    X86_AT(c, 0xe79a4u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e79a5  mov esi, eax
    X86_AT(c, 0xe79a5u);
    c.r[6] = c.r[0];
    // 0e79a7  mov edi, edx
    X86_AT(c, 0xe79a7u);
    c.r[7] = c.r[2];
    // 0e79a9  movsb byte ptr es:[edi], byte ptr [esi]
    X86_AT(c, 0xe79a9u);
    x86_string(c, 0, 1, 243, 4, 3);
    // 0e79ab  pop edi
    X86_AT(c, 0xe79abu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0e79ac  pop esi
    X86_AT(c, 0xe79acu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0e79ad  pop ds
    X86_AT(c, 0xe79adu);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 0e79ae  xchg edx, eax
    X86_AT(c, 0xe79aeu);
    { uint32_t t = c.r[2]; c.r[2] = c.r[0]; c.r[0] = t; }
    // 0e79af  jmp 0xe79ef
    X86_AT(c, 0xe79afu);
    goto L_e79ef;
L_e79b1:
    X86_TICK(c, 28);
    // 0e79b1  mov edx, 0x7fffffff
    X86_AT(c, 0xe79b1u);
    c.r[2] = 0x7FFFFFFFu;
    // 0e79b6  sub eax, eax
    X86_AT(c, 0xe79b6u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0e79b8  les ecx, fword ptr [ebp - 0xc]
    X86_AT(c, 0xe79b8u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)); uint32_t o = rd32(ea); uint32_t s = rd16(ea + 4); x86_load_seg(c, 0, s); c.r[1] = o; }
    // 0e79bb  push edi
    X86_AT(c, 0xe79bbu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e79bc  mov edi, ecx
    X86_AT(c, 0xe79bcu);
    c.r[7] = c.r[1];
    // 0e79be  mov ecx, edx
    X86_AT(c, 0xe79beu);
    c.r[1] = c.r[2];
    // 0e79c0  scasb al, byte ptr es:[edi]
    X86_AT(c, 0xe79c0u);
    x86_string(c, 4, 1, 242, 4, 3);
    // 0e79c2  jne 0xe79c7
    X86_AT(c, 0xe79c2u);
    if (x86_cc(c, 5)) { goto L_e79c7; }
    X86_TICK(c, 4);
    // 0e79c4  inc ecx
    X86_AT(c, 0xe79c4u);
    { uint32_t v = c.r[1]; c.r[1] = x86_inc(c, v, 4); }
    // 0e79c5  sub edx, ecx
    X86_AT(c, 0xe79c5u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[1], 0, 4); }
L_e79c7:
    X86_TICK(c, 24);
    // 0e79c7  pop edi
    X86_AT(c, 0xe79c7u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0e79c8  les eax, fword ptr [ebp - 0xc]
    X86_AT(c, 0xe79c8u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)); uint32_t o = rd32(ea); uint32_t s = rd16(ea + 4); x86_load_seg(c, 0, s); c.r[0] = o; }
    // 0e79cb  lea eax, es:[eax + edx*1 + 1]
    X86_AT(c, 0xe79cbu);
    c.r[0] = (uint32_t)(c.r[0] + c.r[2] + 0x1u);
    // 0e79d0  mov edx, es
    X86_AT(c, 0xe79d0u);
    c.r[2] = (uint32_t)c.sreg[0];
    // 0e79d2  mov dword ptr [ebp - 0xc], eax
    X86_AT(c, 0xe79d2u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)), c.r[0]);
    // 0e79d5  mov word ptr [ebp - 8], dx
    X86_AT(c, 0xe79d5u);
    wr16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), (c.r[2] & 0xFFFFu));
    // 0e79d9  push ds
    X86_AT(c, 0xe79d9u);
    push32(c, c.sreg[3]);
    // 0e79da  pop es
    X86_AT(c, 0xe79dau);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
L_e79db:
    X86_TICK(c, 24);
    // 0e79db  les eax, fword ptr [ebp - 0xc]
    X86_AT(c, 0xe79dbu);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)); uint32_t o = rd32(ea); uint32_t s = rd16(ea + 4); x86_load_seg(c, 0, s); c.r[0] = o; }
    // 0e79de  cmp byte ptr es:[eax], 0
    X86_AT(c, 0xe79deu);
    (void)x86_sub(c, rd8((c.sbase[0] + (uint32_t)(c.r[0]))), 0x0u, 0, 1);
    // 0e79e2  push ds
    X86_AT(c, 0xe79e2u);
    push32(c, c.sreg[3]);
    // 0e79e3  pop es
    X86_AT(c, 0xe79e3u);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 0e79e4  jne 0xe793c
    X86_AT(c, 0xe79e4u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xe793cu); goto L_e793c; }
    X86_TICK(c, 4);
    // 0e79ea  sub eax, eax
    X86_AT(c, 0xe79eau);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0e79ec  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0xe79ecu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
L_e79ef:
    X86_TICK(c, 24);
    // 0e79ef  pop edi
    X86_AT(c, 0xe79efu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0e79f0  pop esi
    X86_AT(c, 0xe79f0u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0e79f1  leave 
    X86_AT(c, 0xe79f1u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0e79f2  ret 
    X86_AT(c, 0xe79f2u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe78fcu, "ran off the end of a function");
}
void f_000e79f4(X86Cpu& c) {
    X86_TICK(c, 72);
    // 0e79f4  mov edx, esi
    X86_AT(c, 0xe79f4u);
    c.r[2] = c.r[6];
    // 0e79f6  push edi
    X86_AT(c, 0xe79f6u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e79f7  sub eax, eax
    X86_AT(c, 0xe79f7u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0e79f9  mov ecx, 0xffffffff
    X86_AT(c, 0xe79f9u);
    c.r[1] = 0xFFFFFFFFu;
    // 0e79fe  mov edi, dword ptr [esp + 0xc]
    X86_AT(c, 0xe79feu);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[4] + 0xCu)));
    // 0e7a02  scasb al, byte ptr es:[edi]
    X86_AT(c, 0xe7a02u);
    x86_string(c, 4, 1, 242, 4, 3);
    // 0e7a04  not ecx
    X86_AT(c, 0xe7a04u);
    { uint32_t v = c.r[1]; c.r[1] = ~v & 0xFFFFFFFFu; }
    // 0e7a06  mov esi, dword ptr [esp + 0xc]
    X86_AT(c, 0xe7a06u);
    c.r[6] = rd32((c.sbase[2] + (uint32_t)(c.r[4] + 0xCu)));
    // 0e7a0a  mov edi, dword ptr [esp + 8]
    X86_AT(c, 0xe7a0au);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[4] + 0x8u)));
    // 0e7a0e  mov eax, ecx
    X86_AT(c, 0xe7a0eu);
    c.r[0] = c.r[1];
    // 0e7a10  shr ecx, 2
    X86_AT(c, 0xe7a10u);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 5, v, 0x2u, 4, w); if (w) c.r[1] = r; }
    // 0e7a13  movsd dword ptr es:[edi], dword ptr [esi]
    X86_AT(c, 0xe7a13u);
    x86_string(c, 0, 4, 243, 4, 3);
    // 0e7a15  mov ecx, eax
    X86_AT(c, 0xe7a15u);
    c.r[1] = c.r[0];
    // 0e7a17  and ecx, 3
    X86_AT(c, 0xe7a17u);
    { uint32_t v = c.r[1]; c.r[1] = x86_logic(c, v & 0x3u, 4); }
    // 0e7a1d  movsb byte ptr es:[edi], byte ptr [esi]
    X86_AT(c, 0xe7a1du);
    x86_string(c, 0, 1, 243, 4, 3);
    // 0e7a1f  mov eax, dword ptr [esp + 8]
    X86_AT(c, 0xe7a1fu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[4] + 0x8u)));
    // 0e7a23  mov esi, edx
    X86_AT(c, 0xe7a23u);
    c.r[6] = c.r[2];
    // 0e7a25  pop edi
    X86_AT(c, 0xe7a25u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0e7a26  ret 
    X86_AT(c, 0xe7a26u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe79f4u, "ran off the end of a function");
}
void f_000e7a38(X86Cpu& c) {
    X86_TICK(c, 16);
    // 0e7a38  push ebp
    X86_AT(c, 0xe7a38u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0e7a39  mov ebp, esp
    X86_AT(c, 0xe7a39u);
    c.r[5] = c.r[4];
    // 0e7a3b  push dword ptr [ebp + 8]
    X86_AT(c, 0xe7a3bu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, v); }
    // 0e7a3e  call 0xe9a78
    X86_AT(c, 0xe7a3eu);
    push32(c, 0xe7a43u); x86_call_known(c, 0xe9a78u, f_000e9a78); X86_RET(c, 0xe7a43u);
    X86_TICK(c, 16);
    // 0e7a43  leave 
    X86_AT(c, 0xe7a43u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0e7a44  ret 4
    X86_AT(c, 0xe7a44u);
    c.eip = pop32(c); c.r[4] += 0x4u; return;
    x86_fault(c, 0xe7a38u, "ran off the end of a function");
}
void f_000e7a50(X86Cpu& c) {
    X86_TICK(c, 11);
    // 0e7a50  push ebp
    X86_AT(c, 0xe7a50u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0e7a51  mov ebp, esp
    X86_AT(c, 0xe7a51u);
    c.r[5] = c.r[4];
    // 0e7a53  call 0xe7a85
    X86_AT(c, 0xe7a53u);
    push32(c, 0xe7a58u); x86_call_known(c, 0xe7a85u, f_000e7a85); X86_RET(c, 0xe7a58u);
    X86_TICK(c, 12);
    // 0e7a58  push dword ptr [ebp + 8]
    X86_AT(c, 0xe7a58u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, v); }
    // 0e7a5b  call 0xe939c
    X86_AT(c, 0xe7a5bu);
    push32(c, 0xe7a60u); x86_call_known(c, 0xe939cu, f_000e939c); X86_RET(c, 0xe7a60u);
    X86_TICK(c, 16);
    // 0e7a60  leave 
    X86_AT(c, 0xe7a60u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0e7a61  ret 4
    X86_AT(c, 0xe7a61u);
    c.eip = pop32(c); c.r[4] += 0x4u; return;
    x86_fault(c, 0xe7a50u, "ran off the end of a function");
}
void f_000e7a6c(X86Cpu& c) {
    X86_TICK(c, 9);
    // 0e7a6c  push 0xffffffff
    X86_AT(c, 0xe7a6cu);
    { uint32_t v = 0xFFFFFFFFu; push32(c, v); }
    // 0e7a6e  call 0xe7a50
    X86_AT(c, 0xe7a6eu);
    push32(c, 0xe7a73u); x86_call_known(c, 0xe7a50u, f_000e7a50); X86_RET(c, 0xe7a73u);
    X86_TICK(c, 10);
    // 0e7a73  ret 
    X86_AT(c, 0xe7a73u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe7a6cu, "ran off the end of a function");
}
void f_000e7a74(X86Cpu& c) {
    X86_TICK(c, 7);
    // 0e7a74  jmp 0xe7acc
    X86_AT(c, 0xe7a74u);
    goto L_e7acc;
L_e7a76:
    X86_TICK(c, 7);
    // 0e7a76  call 0xd8564
    X86_AT(c, 0xe7a76u);
    push32(c, 0xe7a7bu); x86_call_known(c, 0xd8564u, f_000d8564); X86_RET(c, 0xe7a7bu);
L_e7a7b:
    X86_TICK(c, 9);
    // 0e7a7b  push eax
    X86_AT(c, 0xe7a7bu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e7a7c  call 0xe9a78
    X86_AT(c, 0xe7a7cu);
    push32(c, 0xe7a81u); x86_call_known(c, 0xe9a78u, f_000e9a78); X86_RET(c, 0xe7a81u);
    X86_TICK(c, 39);
    // 0e7a81  xor eax, eax
    X86_AT(c, 0xe7a81u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v ^ c.r[0], 4); }
    // 0e7a83  int 0x21
    X86_AT(c, 0xe7a83u);
    x86_int(c, 0x21, 0xe7a85u);
    X86_TICK(c, 10);
    // 0e7a85  ret 
    X86_AT(c, 0xe7a85u);
    c.eip = pop32(c); return;
L_e7acc:
    X86_TICK(c, 7);
    // 0e7acc  cmp al, 0xcd
    X86_AT(c, 0xe7accu);
    (void)x86_sub(c, g8(c, 0), 0xCDu, 0, 1);
    // 0e7ace  jne 0xe7aeb
    X86_AT(c, 0xe7aceu);
    if (x86_cc(c, 5)) { goto L_e7aeb; }
    X86_TICK(c, 7);
    // 0e7ad0  cmp ah, 0xab
    X86_AT(c, 0xe7ad0u);
    (void)x86_sub(c, g8(c, 4), 0xABu, 0, 1);
    // 0e7ad3  jne 0xe7aeb
    X86_AT(c, 0xe7ad3u);
    if (x86_cc(c, 5)) { goto L_e7aeb; }
    X86_TICK(c, 7);
    // 0e7ad5  cmp eax, 0xabcdabcd
    X86_AT(c, 0xe7ad5u);
    (void)x86_sub(c, c.r[0], 0xABCDABCDu, 0, 4);
    // 0e7ada  jne 0xe7aeb
    X86_AT(c, 0xe7adau);
    if (x86_cc(c, 5)) { goto L_e7aeb; }
    X86_TICK(c, 11);
    // 0e7adc  mov byte ptr [0xc41c2], 1
    X86_AT(c, 0xe7adcu);
    wr8((c.sbase[3] + (uint32_t)(0xC41C2u)), 0x1u);
    // 0e7ae3  mov dword ptr [0xc4198], edx
    X86_AT(c, 0xe7ae3u);
    wr32((c.sbase[3] + (uint32_t)(0xC4198u)), c.r[2]);
    // 0e7ae9  jmp 0xe7af2
    X86_AT(c, 0xe7ae9u);
    goto L_e7af2;
L_e7aeb:
    X86_TICK(c, 2);
    // 0e7aeb  mov byte ptr [0xc41c2], 2
    X86_AT(c, 0xe7aebu);
    wr8((c.sbase[3] + (uint32_t)(0xC41C2u)), 0x2u);
L_e7af2:
    X86_TICK(c, 34);
    // 0e7af2  sub ebp, ebp
    X86_AT(c, 0xe7af2u);
    { uint32_t v = c.r[5]; c.r[5] = x86_sub(c, v, c.r[5], 0, 4); }
    // 0e7af4  and esp, 0xfffffffc
    X86_AT(c, 0xe7af4u);
    { uint32_t v = c.r[4]; c.r[4] = x86_logic(c, v & 0xFFFFFFFCu, 4); }
    // 0e7af7  mov dword ptr [0xb01a0], 0x200
    X86_AT(c, 0xe7af7u);
    wr32((c.sbase[3] + (uint32_t)(0xB01A0u)), 0x200u);
    // 0e7b01  mov dword ptr [0xb01a4], 0x100
    X86_AT(c, 0xe7b01u);
    wr32((c.sbase[3] + (uint32_t)(0xB01A4u)), 0x100u);
    // 0e7b0b  add dword ptr [0xb01a0], 0xebb64
    X86_AT(c, 0xe7b0bu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xB01A0u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0xEBB64u, 0, 4)); }
    // 0e7b15  add dword ptr [0xb01a4], 0xebb64
    X86_AT(c, 0xe7b15u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xB01A4u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0xEBB64u, 0, 4)); }
    // 0e7b1f  cmp byte ptr [0xc41c2], 1
    X86_AT(c, 0xe7b1fu);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0xC41C2u))), 0x1u, 0, 1);
    // 0e7b26  je 0xe7b48
    X86_AT(c, 0xe7b26u);
    if (x86_cc(c, 4)) { goto L_e7b48; }
    X86_TICK(c, 23);
    // 0e7b28  mov dword ptr [0xc4190], 0
    X86_AT(c, 0xe7b28u);
    wr32((c.sbase[3] + (uint32_t)(0xC4190u)), 0x0u);
    // 0e7b32  lea eax, [esp + 0x20]
    X86_AT(c, 0xe7b32u);
    c.r[0] = (uint32_t)(c.r[4] + 0x20u);
    // 0e7b36  mov dword ptr [0xc418c], esp
    X86_AT(c, 0xe7b36u);
    wr32((c.sbase[3] + (uint32_t)(0xC418Cu)), c.r[4]);
    // 0e7b3c  mov eax, ds
    X86_AT(c, 0xe7b3cu);
    c.r[0] = (uint32_t)c.sreg[3];
    // 0e7b3e  lsl eax, eax
    X86_AT(c, 0xe7b3eu);
    { uint32_t v; if (x86_lsl(c, (c.r[0] & 0xFFFFu), v)) { c.r[0] = v; c.fl |= X86_ZF; } else c.fl &= ~X86_ZF; }
    // 0e7b41  mov dword ptr [0xc4194], eax
    X86_AT(c, 0xe7b41u);
    wr32((c.sbase[3] + (uint32_t)(0xC4194u)), c.r[0]);
    // 0e7b46  jmp 0xe7b88
    X86_AT(c, 0xe7b46u);
    goto L_e7b88;
L_e7b48:
    X86_TICK(c, 84);
    // 0e7b48  mov eax, esp
    X86_AT(c, 0xe7b48u);
    c.r[0] = c.r[4];
    // 0e7b4a  mov ecx, dword ptr [edx + 0x74]
    X86_AT(c, 0xe7b4au);
    c.r[1] = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0x74u)));
    // 0e7b4d  shl ecx, 0xa
    X86_AT(c, 0xe7b4du);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 4, v, 0xAu, 4, w); if (w) c.r[1] = r; }
    // 0e7b50  sub eax, ecx
    X86_AT(c, 0xe7b50u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[1], 0, 4); }
    // 0e7b52  mov dword ptr [0xc4190], eax
    X86_AT(c, 0xe7b52u);
    wr32((c.sbase[3] + (uint32_t)(0xC4190u)), c.r[0]);
    // 0e7b57  mov eax, dword ptr [edx + 0x50]
    X86_AT(c, 0xe7b57u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0x50u)));
    // 0e7b5a  mov dword ptr [0xc418c], eax
    X86_AT(c, 0xe7b5au);
    wr32((c.sbase[3] + (uint32_t)(0xC418Cu)), c.r[0]);
    // 0e7b5f  mov ecx, dword ptr [edx + 0x3c]
    X86_AT(c, 0xe7b5fu);
    c.r[1] = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0x3Cu)));
    // 0e7b62  shl ecx, 0xa
    X86_AT(c, 0xe7b62u);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 4, v, 0xAu, 4, w); if (w) c.r[1] = r; }
    // 0e7b65  add eax, ecx
    X86_AT(c, 0xe7b65u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, c.r[1], 0, 4); }
    // 0e7b67  mov dword ptr [0xc4194], eax
    X86_AT(c, 0xe7b67u);
    wr32((c.sbase[3] + (uint32_t)(0xC4194u)), c.r[0]);
    // 0e7b6c  mov ebx, dword ptr [edx + 0x54]
    X86_AT(c, 0xe7b6cu);
    c.r[3] = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0x54u)));
    // 0e7b6f  sub ebx, dword ptr [edx + 0x10]
    X86_AT(c, 0xe7b6fu);
    { uint32_t v = c.r[3]; c.r[3] = x86_sub(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0x10u))), 0, 4); }
    // 0e7b72  shr ebx, 4
    X86_AT(c, 0xe7b72u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 5, v, 0x4u, 4, w); if (w) c.r[3] = r; }
    // 0e7b75  inc ebx
    X86_AT(c, 0xe7b75u);
    { uint32_t v = c.r[3]; c.r[3] = x86_inc(c, v, 4); }
    // 0e7b76  mov ah, 0x4a
    X86_AT(c, 0xe7b76u);
    s8(c, 4, 0x4Au);
    // 0e7b78  int 0x21
    X86_AT(c, 0xe7b78u);
    x86_int(c, 0x21, 0xe7b7au);
    X86_TICK(c, 12);
    // 0e7b7a  test byte ptr [edx + 0xb7], 1
    X86_AT(c, 0xe7b7au);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(c.r[2] + 0xB7u))) & 0x1u, 1);
    // 0e7b81  setne byte ptr [0xc41b9]
    X86_AT(c, 0xe7b81u);
    wr8((c.sbase[3] + (uint32_t)(0xC41B9u)), x86_cc(c, 5) ? 1u : 0u);
L_e7b88:
    X86_TICK(c, 11);
    // 0e7b88  esc 0x1c, bl
    X86_AT(c, 0xe7b88u);
    // 0e7b8a  xor eax, eax
    X86_AT(c, 0xe7b8au);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v ^ c.r[0], 4); }
    // 0e7b8c  mov word ptr [0xc41b5], ax
    X86_AT(c, 0xe7b8cu);
    wr16((c.sbase[3] + (uint32_t)(0xC41B5u)), (c.r[0] & 0xFFFFu));
    // 0e7b92  sub ecx, ecx
    X86_AT(c, 0xe7b92u);
    { uint32_t v = c.r[1]; c.r[1] = x86_sub(c, v, c.r[1], 0, 4); }
    // 0e7b94  mov cl, 0xf
    X86_AT(c, 0xe7b94u);
    s8(c, 1, 0xFu);
L_e7b96:
    X86_TICK(c, 11);
    // 0e7b96  loop 0xe7b96
    X86_AT(c, 0xe7b96u);
    c.r[1] -= 1; if (c.r[1] != 0) { X86_POLL(c, 0xe7b96u); goto L_e7b96; }
    X86_TICK(c, 5);
    // 0e7b98  esc 0xf, byte ptr [0xc41b5]
    X86_AT(c, 0xe7b98u);
    // 0e7b9e  mov cl, 0xf
    X86_AT(c, 0xe7b9eu);
    s8(c, 1, 0xFu);
L_e7ba0:
    X86_TICK(c, 11);
    // 0e7ba0  loop 0xe7ba0
    X86_AT(c, 0xe7ba0u);
    c.r[1] -= 1; if (c.r[1] != 0) { X86_POLL(c, 0xe7ba0u); goto L_e7ba0; }
    X86_TICK(c, 19);
    // 0e7ba2  and word ptr [0xc41b5], 0xf3f
    X86_AT(c, 0xe7ba2u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xC41B5u)); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v & 0xF3Fu, 2)); }
    // 0e7bab  cmp word ptr [0xc41b5], 0x33f
    X86_AT(c, 0xe7babu);
    (void)x86_sub(c, rd16((c.sbase[3] + (uint32_t)(0xC41B5u))), 0x33Fu, 0, 2);
    // 0e7bb4  jne 0xe7bf4
    X86_AT(c, 0xe7bb4u);
    if (x86_cc(c, 5)) { goto L_e7bf4; }
    X86_TICK(c, 5);
    // 0e7bb6  esc 0x2f, byte ptr [0xc41b5]
    X86_AT(c, 0xe7bb6u);
    // 0e7bbc  mov cl, 0xf
    X86_AT(c, 0xe7bbcu);
    s8(c, 1, 0xFu);
L_e7bbe:
    X86_TICK(c, 11);
    // 0e7bbe  loop 0xe7bbe
    X86_AT(c, 0xe7bbeu);
    c.r[1] -= 1; if (c.r[1] != 0) { X86_POLL(c, 0xe7bbeu); goto L_e7bbe; }
    X86_TICK(c, 12);
    // 0e7bc0  test word ptr [0xc41b5], 0xb8bf
    X86_AT(c, 0xe7bc0u);
    (void)x86_logic(c, rd16((c.sbase[3] + (uint32_t)(0xC41B5u))) & 0xB8BFu, 2);
    // 0e7bc9  jne 0xe7bf4
    X86_AT(c, 0xe7bc9u);
    if (x86_cc(c, 5)) { goto L_e7bf4; }
    X86_TICK(c, 51);
    // 0e7bcb  wait 
    X86_AT(c, 0xe7bcbu);
    // 0e7bcc  esc 0xd, byte ptr cs:[0xe7e68]
    X86_AT(c, 0xe7bccu);
    // 0e7bd3  mov byte ptr [0xc41b3], 1
    X86_AT(c, 0xe7bd3u);
    wr8((c.sbase[3] + (uint32_t)(0xC41B3u)), 0x1u);
    // 0e7bda  esc 0xd, al
    X86_AT(c, 0xe7bdau);
    // 0e7bdc  esc 0xd, dh
    X86_AT(c, 0xe7bdcu);
    // 0e7bde  esc 0x37, cl
    X86_AT(c, 0xe7bdeu);
    // 0e7be0  esc 8, al
    X86_AT(c, 0xe7be0u);
    // 0e7be2  esc 0xc, al
    X86_AT(c, 0xe7be2u);
    // 0e7be4  esc 0x33, cl
    X86_AT(c, 0xe7be4u);
    // 0e7be6  wait 
    X86_AT(c, 0xe7be6u);
    // 0e7be7  esc 0x3c, al
    X86_AT(c, 0xe7be7u);
    // 0e7be9  wait 
    X86_AT(c, 0xe7be9u);
    // 0e7bea  sahf 
    X86_AT(c, 0xe7beau);
    c.fl = (c.fl & ~0xD5u) | (g8(c, 4) & 0xD5u);
    // 0e7beb  je 0xe7bf4
    X86_AT(c, 0xe7bebu);
    if (x86_cc(c, 4)) { goto L_e7bf4; }
    X86_TICK(c, 2);
    // 0e7bed  mov byte ptr [0xc41b7], 1
    X86_AT(c, 0xe7bedu);
    wr8((c.sbase[3] + (uint32_t)(0xC41B7u)), 0x1u);
L_e7bf4:
    X86_TICK(c, 28);
    // 0e7bf4  push 0x3ff0000
    X86_AT(c, 0xe7bf4u);
    { uint32_t v = 0x3FF0000u; push32(c, v); }
    // 0e7bf9  push 0x30000000
    X86_AT(c, 0xe7bf9u);
    { uint32_t v = 0x30000000u; push32(c, v); }
    // 0e7bfe  push 0xa0000000
    X86_AT(c, 0xe7bfeu);
    { uint32_t v = 0xA0000000u; push32(c, v); }
    // 0e7c03  push 0x64000000
    X86_AT(c, 0xe7c03u);
    { uint32_t v = 0x64000000u; push32(c, v); }
    // 0e7c08  push 0x16000000
    X86_AT(c, 0xe7c08u);
    { uint32_t v = 0x16000000u; push32(c, v); }
    // 0e7c0d  push 0x98000000
    X86_AT(c, 0xe7c0du);
    { uint32_t v = 0x98000000u; push32(c, v); }
    // 0e7c12  push 0x56000000
    X86_AT(c, 0xe7c12u);
    { uint32_t v = 0x56000000u; push32(c, v); }
    // 0e7c17  push 0xb8000000
    X86_AT(c, 0xe7c17u);
    { uint32_t v = 0xB8000000u; push32(c, v); }
    // 0e7c1c  cmp byte ptr [0xc41c2], 1
    X86_AT(c, 0xe7c1cu);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0xC41C2u))), 0x1u, 0, 1);
    // 0e7c23  je 0xe7c7c
    X86_AT(c, 0xe7c23u);
    if (x86_cc(c, 4)) { goto L_e7c7c; }
    X86_TICK(c, 11);
    // 0e7c25  mov eax, fs
    X86_AT(c, 0xe7c25u);
    c.r[0] = (uint32_t)c.sreg[4];
    // 0e7c27  mov ebx, ds
    X86_AT(c, 0xe7c27u);
    c.r[3] = (uint32_t)c.sreg[3];
    // 0e7c29  cmp ax, bx
    X86_AT(c, 0xe7c29u);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), (c.r[3] & 0xFFFFu), 0, 2);
    // 0e7c2c  je 0xe7ccd
    X86_AT(c, 0xe7c2cu);
    if (x86_cc(c, 4)) { goto L_e7ccd; }
    X86_TICK(c, 18);
    // 0e7c32  mov word ptr [0xc41b9], 1
    X86_AT(c, 0xe7c32u);
    wr16((c.sbase[3] + (uint32_t)(0xC41B9u)), 0x1u);
    // 0e7c3b  pop dword ptr fs:[0xc000]
    X86_AT(c, 0xe7c3bu);
    { uint32_t v = pop32(c); wr32((c.sbase[4] + ((0xC000u) & 0xFFFFu)), v); }
    // 0e7c41  mov eax, dword ptr fs:[0xc400]
    X86_AT(c, 0xe7c41u);
    c.r[0] = rd32((c.sbase[4] + ((0xC400u) & 0xFFFFu)));
    // 0e7c46  and ah, 0x80
    X86_AT(c, 0xe7c46u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_logic(c, v & 0x80u, 1)); }
    // 0e7c49  jne 0xe7c55
    X86_AT(c, 0xe7c49u);
    if (x86_cc(c, 5)) { goto L_e7c55; }
    X86_TICK(c, 20);
    // 0e7c4b  pop eax
    X86_AT(c, 0xe7c4bu);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 0e7c4c  pop eax
    X86_AT(c, 0xe7c4cu);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 0e7c4d  pop dword ptr fs:[0xc000]
    X86_AT(c, 0xe7c4du);
    { uint32_t v = pop32(c); wr32((c.sbase[4] + ((0xC000u) & 0xFFFFu)), v); }
    // 0e7c53  jmp 0xe7c62
    X86_AT(c, 0xe7c53u);
    goto L_e7c62;
L_e7c55:
    X86_TICK(c, 14);
    // 0e7c55  pop dword ptr fs:[0xc000]
    X86_AT(c, 0xe7c55u);
    { uint32_t v = pop32(c); wr32((c.sbase[4] + ((0xC000u) & 0xFFFFu)), v); }
    // 0e7c5b  pop dword ptr fs:[0xc000]
    X86_AT(c, 0xe7c5bu);
    { uint32_t v = pop32(c); wr32((c.sbase[4] + ((0xC000u) & 0xFFFFu)), v); }
    // 0e7c61  pop eax
    X86_AT(c, 0xe7c61u);
    { uint32_t v = pop32(c); c.r[0] = v; }
L_e7c62:
    X86_TICK(c, 27);
    // 0e7c62  pop dword ptr fs:[0xc000]
    X86_AT(c, 0xe7c62u);
    { uint32_t v = pop32(c); wr32((c.sbase[4] + ((0xC000u) & 0xFFFFu)), v); }
    // 0e7c68  pop dword ptr fs:[0xc000]
    X86_AT(c, 0xe7c68u);
    { uint32_t v = pop32(c); wr32((c.sbase[4] + ((0xC000u) & 0xFFFFu)), v); }
    // 0e7c6e  pop dword ptr fs:[0xc000]
    X86_AT(c, 0xe7c6eu);
    { uint32_t v = pop32(c); wr32((c.sbase[4] + ((0xC000u) & 0xFFFFu)), v); }
    // 0e7c74  pop dword ptr fs:[0xc000]
    X86_AT(c, 0xe7c74u);
    { uint32_t v = pop32(c); wr32((c.sbase[4] + ((0xC000u) & 0xFFFFu)), v); }
    // 0e7c7a  jmp 0xe7cd0
    X86_AT(c, 0xe7c7au);
    goto L_e7cd0;
L_e7c7c:
    X86_TICK(c, 12);
    // 0e7c7c  cmp byte ptr [0xc41b9], 1
    X86_AT(c, 0xe7c7cu);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0xC41B9u))), 0x1u, 0, 1);
    // 0e7c83  jne 0xe7ccd
    X86_AT(c, 0xe7c83u);
    if (x86_cc(c, 5)) { goto L_e7ccd; }
    X86_TICK(c, 17);
    // 0e7c85  pop dword ptr [0xffc0c000]
    X86_AT(c, 0xe7c85u);
    { uint32_t v = pop32(c); wr32((c.sbase[3] + (uint32_t)(0xFFC0C000u)), v); }
    // 0e7c8b  pop dword ptr [0xffc0c400]
    X86_AT(c, 0xe7c8bu);
    { uint32_t v = pop32(c); wr32((c.sbase[3] + (uint32_t)(0xFFC0C400u)), v); }
    // 0e7c91  and ah, 0x80
    X86_AT(c, 0xe7c91u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_logic(c, v & 0x80u, 1)); }
    // 0e7c94  jne 0xe7ca0
    X86_AT(c, 0xe7c94u);
    if (x86_cc(c, 5)) { goto L_e7ca0; }
    X86_TICK(c, 20);
    // 0e7c96  pop eax
    X86_AT(c, 0xe7c96u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 0e7c97  pop eax
    X86_AT(c, 0xe7c97u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 0e7c98  pop dword ptr [0xffc0c000]
    X86_AT(c, 0xe7c98u);
    { uint32_t v = pop32(c); wr32((c.sbase[3] + (uint32_t)(0xFFC0C000u)), v); }
    // 0e7c9e  jmp 0xe7cad
    X86_AT(c, 0xe7c9eu);
    goto L_e7cad;
L_e7ca0:
    X86_TICK(c, 14);
    // 0e7ca0  pop dword ptr [0xffc0c000]
    X86_AT(c, 0xe7ca0u);
    { uint32_t v = pop32(c); wr32((c.sbase[3] + (uint32_t)(0xFFC0C000u)), v); }
    // 0e7ca6  pop dword ptr [0xffc0c000]
    X86_AT(c, 0xe7ca6u);
    { uint32_t v = pop32(c); wr32((c.sbase[3] + (uint32_t)(0xFFC0C000u)), v); }
    // 0e7cac  pop eax
    X86_AT(c, 0xe7cacu);
    { uint32_t v = pop32(c); c.r[0] = v; }
L_e7cad:
    X86_TICK(c, 32);
    // 0e7cad  pop dword ptr [0xffc0c000]
    X86_AT(c, 0xe7cadu);
    { uint32_t v = pop32(c); wr32((c.sbase[3] + (uint32_t)(0xFFC0C000u)), v); }
    // 0e7cb3  pop dword ptr [0xffc0c000]
    X86_AT(c, 0xe7cb3u);
    { uint32_t v = pop32(c); wr32((c.sbase[3] + (uint32_t)(0xFFC0C000u)), v); }
    // 0e7cb9  pop dword ptr [0xffc0c000]
    X86_AT(c, 0xe7cb9u);
    { uint32_t v = pop32(c); wr32((c.sbase[3] + (uint32_t)(0xFFC0C000u)), v); }
    // 0e7cbf  pop dword ptr [0xffc0c000]
    X86_AT(c, 0xe7cbfu);
    { uint32_t v = pop32(c); wr32((c.sbase[3] + (uint32_t)(0xFFC0C000u)), v); }
    // 0e7cc5  pop dword ptr [0xffc0c000]
    X86_AT(c, 0xe7cc5u);
    { uint32_t v = pop32(c); wr32((c.sbase[3] + (uint32_t)(0xFFC0C000u)), v); }
    // 0e7ccb  jmp 0xe7cd0
    X86_AT(c, 0xe7ccbu);
    goto L_e7cd0;
L_e7ccd:
    X86_TICK(c, 2);
    // 0e7ccd  add esp, 0x20
    X86_AT(c, 0xe7ccdu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x20u, 0, 4); }
L_e7cd0:
    X86_TICK(c, 14);
    // 0e7cd0  cld 
    X86_AT(c, 0xe7cd0u);
    c.fl &= ~X86_DF;
    // 0e7cd1  cmp byte ptr [0xc41c2], 2
    X86_AT(c, 0xe7cd1u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0xC41C2u))), 0x2u, 0, 1);
    // 0e7cd8  je 0xe7d1a
    X86_AT(c, 0xe7cd8u);
    if (x86_cc(c, 4)) { goto L_e7d1a; }
    X86_TICK(c, 42);
    // 0e7cda  mov edi, dword ptr [edx + 0x10]
    X86_AT(c, 0xe7cdau);
    c.r[7] = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0x10u)));
    // 0e7cdd  mov word ptr [0xc41a0], ds
    X86_AT(c, 0xe7cddu);
    wr16((c.sbase[3] + (uint32_t)(0xC41A0u)), (uint32_t)c.sreg[3]);
    // 0e7ce3  mov dword ptr [0xc4186], edi
    X86_AT(c, 0xe7ce3u);
    wr32((c.sbase[3] + (uint32_t)(0xC4186u)), c.r[7]);
    // 0e7ce9  mov word ptr [0xc418a], ds
    X86_AT(c, 0xe7ce9u);
    wr16((c.sbase[3] + (uint32_t)(0xC418Au)), (uint32_t)c.sreg[3]);
    // 0e7cef  lea eax, [edi + 0x80]
    X86_AT(c, 0xe7cefu);
    c.r[0] = (uint32_t)(c.r[7] + 0x80u);
    // 0e7cf5  xor ebx, ebx
    X86_AT(c, 0xe7cf5u);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v ^ c.r[3], 4); }
    // 0e7cf7  mov bl, byte ptr [eax]
    X86_AT(c, 0xe7cf7u);
    s8(c, 3, rd8((c.sbase[3] + (uint32_t)(c.r[0]))));
    // 0e7cf9  mov dword ptr [0xc41a8], ebx
    X86_AT(c, 0xe7cf9u);
    wr32((c.sbase[3] + (uint32_t)(0xC41A8u)), c.r[3]);
    // 0e7cff  inc eax
    X86_AT(c, 0xe7cffu);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0e7d00  mov dword ptr [0xc419c], eax
    X86_AT(c, 0xe7d00u);
    wr32((c.sbase[3] + (uint32_t)(0xC419Cu)), c.r[0]);
    // 0e7d05  mov bx, word ptr [edi + 0x2c]
    X86_AT(c, 0xe7d05u);
    s16(c, 3, rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x2Cu))));
    // 0e7d09  shl ebx, 4
    X86_AT(c, 0xe7d09u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[3] = r; }
    // 0e7d0c  mov dword ptr [0xc41ac], ebx
    X86_AT(c, 0xe7d0cu);
    wr32((c.sbase[3] + (uint32_t)(0xC41ACu)), c.r[3]);
    // 0e7d12  mov word ptr [0xc41b0], ds
    X86_AT(c, 0xe7d12u);
    wr16((c.sbase[3] + (uint32_t)(0xC41B0u)), (uint32_t)c.sreg[3]);
    // 0e7d18  jmp 0xe7d6c
    X86_AT(c, 0xe7d18u);
    goto L_e7d6c;
L_e7d1a:
    X86_TICK(c, 81);
    // 0e7d1a  mov ax, 0x24
    X86_AT(c, 0xe7d1au);
    s16(c, 0, 0x24u);
    // 0e7d1e  mov ebx, cs
    X86_AT(c, 0xe7d1eu);
    c.r[3] = (uint32_t)c.sreg[1];
    // 0e7d20  arpl ax, bx
    X86_AT(c, 0xe7d20u);
    { uint32_t d = (c.r[0] & 0xFFFFu), s = (c.r[3] & 0xFFFFu); if ((d & 3) < (s & 3)) { s16(c, 0, (d & ~3u) | (s & 3)); c.fl |= X86_ZF; } else c.fl &= ~X86_ZF; }
    // 0e7d22  mov es, eax
    X86_AT(c, 0xe7d22u);
    x86_load_seg(c, 0, (c.r[0] & 0xFFFFu) & 0xFFFFu);
    // 0e7d24  mov word ptr [0xc418a], ax
    X86_AT(c, 0xe7d24u);
    wr16((c.sbase[3] + (uint32_t)(0xC418Au)), (c.r[0] & 0xFFFFu));
    // 0e7d2a  mov word ptr [0xc418a], ax
    X86_AT(c, 0xe7d2au);
    wr16((c.sbase[3] + (uint32_t)(0xC418Au)), (c.r[0] & 0xFFFFu));
    // 0e7d30  mov ax, 0x2c
    X86_AT(c, 0xe7d30u);
    s16(c, 0, 0x2Cu);
    // 0e7d34  arpl ax, bx
    X86_AT(c, 0xe7d34u);
    { uint32_t d = (c.r[0] & 0xFFFFu), s = (c.r[3] & 0xFFFFu); if ((d & 3) < (s & 3)) { s16(c, 0, (d & ~3u) | (s & 3)); c.fl |= X86_ZF; } else c.fl &= ~X86_ZF; }
    // 0e7d36  mov word ptr [0xc41b0], ax
    X86_AT(c, 0xe7d36u);
    wr16((c.sbase[3] + (uint32_t)(0xC41B0u)), (c.r[0] & 0xFFFFu));
    // 0e7d3c  xor eax, eax
    X86_AT(c, 0xe7d3cu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v ^ c.r[0], 4); }
    // 0e7d3e  mov al, byte ptr es:[0x80]
    X86_AT(c, 0xe7d3eu);
    s8(c, 0, rd8((c.sbase[0] + (uint32_t)(0x80u))));
    // 0e7d44  mov dword ptr [0xc41a8], eax
    X86_AT(c, 0xe7d44u);
    wr32((c.sbase[3] + (uint32_t)(0xC41A8u)), c.r[0]);
    // 0e7d49  add eax, 3
    X86_AT(c, 0xe7d49u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0x3u, 0, 4); }
    // 0e7d4e  and al, 0xfc
    X86_AT(c, 0xe7d4eu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & 0xFCu, 1)); }
    // 0e7d50  sub esp, eax
    X86_AT(c, 0xe7d50u);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0e7d52  mov edi, esp
    X86_AT(c, 0xe7d52u);
    c.r[7] = c.r[4];
    // 0e7d54  mov dword ptr [0xc419c], edi
    X86_AT(c, 0xe7d54u);
    wr32((c.sbase[3] + (uint32_t)(0xC419Cu)), c.r[7]);
    // 0e7d5a  push edx
    X86_AT(c, 0xe7d5au);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0e7d5b  mov ecx, eax
    X86_AT(c, 0xe7d5bu);
    c.r[1] = c.r[0];
    // 0e7d5d  push ds
    X86_AT(c, 0xe7d5du);
    push32(c, c.sreg[3]);
    // 0e7d5e  push es
    X86_AT(c, 0xe7d5eu);
    push32(c, c.sreg[0]);
    // 0e7d5f  pop ds
    X86_AT(c, 0xe7d5fu);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 0e7d60  push es
    X86_AT(c, 0xe7d60u);
    push32(c, c.sreg[0]);
    // 0e7d61  push ss
    X86_AT(c, 0xe7d61u);
    push32(c, c.sreg[2]);
    // 0e7d62  pop es
    X86_AT(c, 0xe7d62u);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 0e7d63  mov esi, 0x81
    X86_AT(c, 0xe7d63u);
    c.r[6] = 0x81u;
    // 0e7d68  movsb byte ptr es:[edi], byte ptr [esi]
    X86_AT(c, 0xe7d68u);
    x86_string(c, 0, 1, 243, 4, 3);
    // 0e7d6a  pop es
    X86_AT(c, 0xe7d6au);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 0e7d6b  pop ds
    X86_AT(c, 0xe7d6bu);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
L_e7d6c:
    X86_TICK(c, 41);
    // 0e7d6c  sub eax, eax
    X86_AT(c, 0xe7d6cu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0e7d6e  mov ah, 0x30
    X86_AT(c, 0xe7d6eu);
    s8(c, 4, 0x30u);
    // 0e7d70  int 0x21
    X86_AT(c, 0xe7d70u);
    x86_int(c, 0x21, 0xe7d72u);
    X86_TICK(c, 14);
    // 0e7d72  mov word ptr [0xc41c0], ax
    X86_AT(c, 0xe7d72u);
    wr16((c.sbase[3] + (uint32_t)(0xC41C0u)), (c.r[0] & 0xFFFFu));
    // 0e7d78  cmp byte ptr [0xc41c2], 1
    X86_AT(c, 0xe7d78u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0xC41C2u))), 0x1u, 0, 1);
    // 0e7d7f  je 0xe7dc9
    X86_AT(c, 0xe7d7fu);
    if (x86_cc(c, 4)) { goto L_e7dc9; }
    X86_TICK(c, 10);
    // 0e7d81  shr eax, 0x10
    X86_AT(c, 0xe7d81u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 0e7d84  cmp ax, 0x4458
    X86_AT(c, 0xe7d84u);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), 0x4458u, 0, 2);
    // 0e7d88  jne 0xe7d8c
    X86_AT(c, 0xe7d88u);
    if (x86_cc(c, 5)) { goto L_e7d8c; }
    X86_TICK(c, 7);
    // 0e7d8a  jmp 0xe7dc9
    X86_AT(c, 0xe7d8au);
    goto L_e7dc9;
L_e7d8c:
    X86_TICK(c, 13);
    // 0e7d8c  mov byte ptr [0xc41c2], 3
    X86_AT(c, 0xe7d8cu);
    wr8((c.sbase[3] + (uint32_t)(0xC41C2u)), 0x3u);
    // 0e7d93  mov ebx, dword ptr [0xc418c]
    X86_AT(c, 0xe7d93u);
    c.r[3] = rd32((c.sbase[3] + (uint32_t)(0xC418Cu)));
    // 0e7d99  jmp 0xe7dc9
    X86_AT(c, 0xe7d99u);
    goto L_e7dc9;
L_e7dc9:
    X86_TICK(c, 8);
    // 0e7dc9  les edi, fword ptr [0xc41ac]
    X86_AT(c, 0xe7dc9u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xC41ACu)); uint32_t o = rd32(ea); uint32_t s = rd16(ea + 4); x86_load_seg(c, 0, s); c.r[7] = o; }
    // 0e7dcf  xor eax, eax
    X86_AT(c, 0xe7dcfu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v ^ c.r[0], 4); }
L_e7dd1:
    X86_TICK(c, 12);
    // 0e7dd1  cmp dword ptr es:[edi], 0x37384f4e
    X86_AT(c, 0xe7dd1u);
    (void)x86_sub(c, rd32((c.sbase[0] + (uint32_t)(c.r[7]))), 0x37384F4Eu, 0, 4);
    // 0e7dd8  jne 0xe7e24
    X86_AT(c, 0xe7dd8u);
    if (x86_cc(c, 5)) { goto L_e7e24; }
    X86_TICK(c, 12);
    // 0e7dda  cmp byte ptr es:[edi + 4], 0x3d
    X86_AT(c, 0xe7ddau);
    (void)x86_sub(c, rd8((c.sbase[0] + (uint32_t)(c.r[7] + 0x4u))), 0x3Du, 0, 1);
    // 0e7ddf  jne 0xe7e24
    X86_AT(c, 0xe7ddfu);
    if (x86_cc(c, 5)) { goto L_e7e24; }
    X86_TICK(c, 16);
    // 0e7de1  push eax
    X86_AT(c, 0xe7de1u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e7de2  push edi
    X86_AT(c, 0xe7de2u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e7de3  cmp word ptr [0xc41b3], 0
    X86_AT(c, 0xe7de3u);
    (void)x86_sub(c, rd16((c.sbase[3] + (uint32_t)(0xC41B3u))), 0x0u, 0, 2);
    // 0e7deb  je 0xe7e22
    X86_AT(c, 0xe7debu);
    if (x86_cc(c, 4)) { goto L_e7e22; }
    X86_TICK(c, 29);
    // 0e7ded  mov word ptr [0xc41b3], 0
    X86_AT(c, 0xe7dedu);
    wr16((c.sbase[3] + (uint32_t)(0xC41B3u)), 0x0u);
    // 0e7df6  add edi, 5
    X86_AT(c, 0xe7df6u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x5u, 0, 4); }
    // 0e7df9  mov esi, edi
    X86_AT(c, 0xe7df9u);
    c.r[6] = c.r[7];
    // 0e7dfb  mov al, 0x20
    X86_AT(c, 0xe7dfbu);
    s8(c, 0, 0x20u);
    // 0e7dfd  scasb al, byte ptr es:[edi]
    X86_AT(c, 0xe7dfdu);
    x86_string(c, 4, 1, 243, 4, 3);
    // 0e7dff  dec edi
    X86_AT(c, 0xe7dffu);
    { uint32_t v = c.r[7]; c.r[7] = x86_dec(c, v, 4); }
    // 0e7e00  cmp byte ptr es:[edi], 0
    X86_AT(c, 0xe7e00u);
    (void)x86_sub(c, rd8((c.sbase[0] + (uint32_t)(c.r[7]))), 0x0u, 0, 1);
    // 0e7e04  je 0xe7e22
    X86_AT(c, 0xe7e04u);
    if (x86_cc(c, 4)) { goto L_e7e22; }
    X86_TICK(c, 2);
    // 0e7e06  mov edi, esi
    X86_AT(c, 0xe7e06u);
    c.r[7] = c.r[6];
L_e7e08:
    X86_TICK(c, 11);
    // 0e7e08  mov dl, byte ptr es:[edi]
    X86_AT(c, 0xe7e08u);
    s8(c, 2, rd8((c.sbase[0] + (uint32_t)(c.r[7]))));
    // 0e7e0b  and dl, dl
    X86_AT(c, 0xe7e0bu);
    { uint32_t v = g8(c, 2); s8(c, 2, x86_logic(c, v & g8(c, 2), 1)); }
    // 0e7e0d  je 0xe7e16
    X86_AT(c, 0xe7e0du);
    if (x86_cc(c, 4)) { goto L_e7e16; }
    X86_TICK(c, 39);
    // 0e7e0f  mov ah, 6
    X86_AT(c, 0xe7e0fu);
    s8(c, 4, 0x6u);
    // 0e7e11  int 0x21
    X86_AT(c, 0xe7e11u);
    x86_int(c, 0x21, 0xe7e13u);
    X86_TICK(c, 9);
    // 0e7e13  inc edi
    X86_AT(c, 0xe7e13u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0e7e14  jmp 0xe7e08
    X86_AT(c, 0xe7e14u);
    X86_POLL(c, 0xe7e08u); goto L_e7e08;
L_e7e16:
    X86_TICK(c, 41);
    // 0e7e16  mov dl, 0xd
    X86_AT(c, 0xe7e16u);
    s8(c, 2, 0xDu);
    // 0e7e18  mov ah, 6
    X86_AT(c, 0xe7e18u);
    s8(c, 4, 0x6u);
    // 0e7e1a  int 0x21
    X86_AT(c, 0xe7e1au);
    x86_int(c, 0x21, 0xe7e1cu);
    X86_TICK(c, 41);
    // 0e7e1c  mov dl, 0xa
    X86_AT(c, 0xe7e1cu);
    s8(c, 2, 0xAu);
    // 0e7e1e  mov ah, 6
    X86_AT(c, 0xe7e1eu);
    s8(c, 4, 0x6u);
    // 0e7e20  int 0x21
    X86_AT(c, 0xe7e20u);
    x86_int(c, 0x21, 0xe7e22u);
L_e7e22:
    X86_TICK(c, 8);
    // 0e7e22  pop edi
    X86_AT(c, 0xe7e22u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0e7e23  pop eax
    X86_AT(c, 0xe7e23u);
    { uint32_t v = pop32(c); c.r[0] = v; }
L_e7e24:
    X86_TICK(c, 21);
    // 0e7e24  mov ecx, 0xffffffff
    X86_AT(c, 0xe7e24u);
    c.r[1] = 0xFFFFFFFFu;
    // 0e7e29  scasb al, byte ptr es:[edi]
    X86_AT(c, 0xe7e29u);
    x86_string(c, 4, 1, 242, 4, 3);
    // 0e7e2b  cmp byte ptr es:[edi], 0
    X86_AT(c, 0xe7e2bu);
    (void)x86_sub(c, rd8((c.sbase[0] + (uint32_t)(c.r[7]))), 0x0u, 0, 1);
    // 0e7e2f  jne 0xe7dd1
    X86_AT(c, 0xe7e2fu);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xe7dd1u); goto L_e7dd1; }
    X86_TICK(c, 14);
    // 0e7e31  add edi, 3
    X86_AT(c, 0xe7e31u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x3u, 0, 4); }
    // 0e7e34  cmp byte ptr [0xc41c0], 3
    X86_AT(c, 0xe7e34u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0xC41C0u))), 0x3u, 0, 1);
    // 0e7e3b  jb 0xe7e5d
    X86_AT(c, 0xe7e3bu);
    if (x86_cc(c, 2)) { goto L_e7e5d; }
    X86_TICK(c, 12);
    // 0e7e3d  cmp byte ptr [0xc41c2], 1
    X86_AT(c, 0xe7e3du);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0xC41C2u))), 0x1u, 0, 1);
    // 0e7e44  jne 0xe7e6a
    X86_AT(c, 0xe7e44u);
    if (x86_cc(c, 5)) { goto L_e7e6a; }
    X86_TICK(c, 12);
    // 0e7e46  cmp byte ptr [0xc41c2], 3
    X86_AT(c, 0xe7e46u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0xC41C2u))), 0x3u, 0, 1);
    // 0e7e4d  je 0xe7e6a
    X86_AT(c, 0xe7e4du);
    if (x86_cc(c, 4)) { goto L_e7e6a; }
    X86_TICK(c, 11);
    // 0e7e4f  mov dword ptr [0xc41bc], edi
    X86_AT(c, 0xe7e4fu);
    wr32((c.sbase[3] + (uint32_t)(0xC41BCu)), c.r[7]);
    // 0e7e55  mov word ptr [0xc41c0], ds
    X86_AT(c, 0xe7e55u);
    wr16((c.sbase[3] + (uint32_t)(0xC41C0u)), (uint32_t)c.sreg[3]);
    // 0e7e5b  jmp 0xe7e9c
    X86_AT(c, 0xe7e5bu);
    goto L_e7e9c;
L_e7e5d:
    X86_TICK(c, 13);
    // 0e7e5d  xor edx, edx
    X86_AT(c, 0xe7e5du);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v ^ c.r[2], 4); }
    // 0e7e5f  push edx
    X86_AT(c, 0xe7e5fu);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0e7e60  mov dword ptr [0xc41bc], esp
    X86_AT(c, 0xe7e60u);
    wr32((c.sbase[3] + (uint32_t)(0xC41BCu)), c.r[4]);
    // 0e7e66  jmp 0xe7e9c
    X86_AT(c, 0xe7e66u);
    goto L_e7e9c;
L_e7e6a:
    X86_TICK(c, 62);
    // 0e7e6a  mov eax, es
    X86_AT(c, 0xe7e6au);
    c.r[0] = (uint32_t)c.sreg[0];
    // 0e7e6c  lsl eax, eax
    X86_AT(c, 0xe7e6cu);
    { uint32_t v; if (x86_lsl(c, (c.r[0] & 0xFFFFu), v)) { c.r[0] = v; c.fl |= X86_ZF; } else c.fl &= ~X86_ZF; }
    // 0e7e6f  xor eax, eax
    X86_AT(c, 0xe7e6fu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v ^ c.r[0], 4); }
    // 0e7e71  sub ecx, ecx
    X86_AT(c, 0xe7e71u);
    { uint32_t v = c.r[1]; c.r[1] = x86_sub(c, v, c.r[1], 0, 4); }
    // 0e7e73  dec ecx
    X86_AT(c, 0xe7e73u);
    { uint32_t v = c.r[1]; c.r[1] = x86_dec(c, v, 4); }
    // 0e7e74  mov ebx, edi
    X86_AT(c, 0xe7e74u);
    c.r[3] = c.r[7];
    // 0e7e76  scasb al, byte ptr es:[edi]
    X86_AT(c, 0xe7e76u);
    x86_string(c, 4, 1, 242, 4, 3);
    // 0e7e78  sub edi, ebx
    X86_AT(c, 0xe7e78u);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[3], 0, 4); }
    // 0e7e7a  lea eax, [edi + 3]
    X86_AT(c, 0xe7e7au);
    c.r[0] = (uint32_t)(c.r[7] + 0x3u);
    // 0e7e7d  and eax, 0xfffc
    X86_AT(c, 0xe7e7du);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0xFFFCu, 4); }
    // 0e7e82  sub esp, eax
    X86_AT(c, 0xe7e82u);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0e7e84  mov dword ptr [0xc41bc], esp
    X86_AT(c, 0xe7e84u);
    wr32((c.sbase[3] + (uint32_t)(0xC41BCu)), c.r[4]);
    // 0e7e8a  mov ecx, edi
    X86_AT(c, 0xe7e8au);
    c.r[1] = c.r[7];
    // 0e7e8c  mov esi, ebx
    X86_AT(c, 0xe7e8cu);
    c.r[6] = c.r[3];
    // 0e7e8e  mov edi, esp
    X86_AT(c, 0xe7e8eu);
    c.r[7] = c.r[4];
    // 0e7e90  push ds
    X86_AT(c, 0xe7e90u);
    push32(c, c.sreg[3]);
    // 0e7e91  mov ds, word ptr [0xc41b0]
    X86_AT(c, 0xe7e91u);
    x86_load_seg(c, 3, rd16((c.sbase[3] + (uint32_t)(0xC41B0u))) & 0xFFFFu);
    // 0e7e97  push ss
    X86_AT(c, 0xe7e97u);
    push32(c, c.sreg[2]);
    // 0e7e98  pop es
    X86_AT(c, 0xe7e98u);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 0e7e99  movsb byte ptr es:[edi], byte ptr [esi]
    X86_AT(c, 0xe7e99u);
    x86_string(c, 0, 1, 243, 4, 3);
    // 0e7e9b  pop ds
    X86_AT(c, 0xe7e9bu);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
L_e7e9c:
    X86_TICK(c, 33);
    // 0e7e9c  mov eax, dword ptr [0xc41a8]
    X86_AT(c, 0xe7e9cu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xC41A8u)));
    // 0e7ea1  inc eax
    X86_AT(c, 0xe7ea1u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0e7ea2  shr eax, 1
    X86_AT(c, 0xe7ea2u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 4, w); if (w) c.r[0] = r; }
    // 0e7ea4  inc eax
    X86_AT(c, 0xe7ea4u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0e7ea5  inc eax
    X86_AT(c, 0xe7ea5u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0e7ea6  shl eax, 2
    X86_AT(c, 0xe7ea6u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x2u, 4, w); if (w) c.r[0] = r; }
    // 0e7ea9  sub esp, eax
    X86_AT(c, 0xe7ea9u);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0e7eab  mov dword ptr [0xc41a2], esp
    X86_AT(c, 0xe7eabu);
    wr32((c.sbase[3] + (uint32_t)(0xC41A2u)), c.r[4]);
    // 0e7eb1  push ds
    X86_AT(c, 0xe7eb1u);
    push32(c, c.sreg[3]);
    // 0e7eb2  pop es
    X86_AT(c, 0xe7eb2u);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 0e7eb3  call 0xe92c8
    X86_AT(c, 0xe7eb3u);
    push32(c, 0xe7eb8u); x86_call_known(c, 0xe92c8u, f_000e92c8); X86_RET(c, 0xe7eb8u);
    X86_TICK(c, 7);
    // 0e7eb8  call 0xe9130
    X86_AT(c, 0xe7eb8u);
    push32(c, 0xe7ebdu); x86_call_known(c, 0xe9130u, f_000e9130); X86_RET(c, 0xe7ebdu);
    X86_TICK(c, 14);
    // 0e7ebd  push dword ptr [0xc41a2]
    X86_AT(c, 0xe7ebdu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xC41A2u))); push32(c, v); }
    // 0e7ec3  sub eax, eax
    X86_AT(c, 0xe7ec3u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0e7ec5  call 0xe91cc
    X86_AT(c, 0xe7ec5u);
    push32(c, 0xe7ecau); x86_call_known(c, 0xe91ccu, f_000e91cc); X86_RET(c, 0xe7ecau);
    X86_TICK(c, 14);
    // 0e7eca  push eax
    X86_AT(c, 0xe7ecau);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e7ecb  cmp byte ptr [0xc41b9], 1
    X86_AT(c, 0xe7ecbu);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0xC41B9u))), 0x1u, 0, 1);
    // 0e7ed2  je 0xe7ef4
    X86_AT(c, 0xe7ed2u);
    if (x86_cc(c, 4)) { goto L_e7ef4; }
    X86_TICK(c, 12);
    // 0e7ed4  cmp word ptr [0xc41c7], 0xabcd
    X86_AT(c, 0xe7ed4u);
    (void)x86_sub(c, rd16((c.sbase[3] + (uint32_t)(0xC41C7u))), 0xABCDu, 0, 2);
    // 0e7edd  jne 0xe7ef4
    X86_AT(c, 0xe7eddu);
    if (x86_cc(c, 5)) { goto L_e7ef4; }
    X86_TICK(c, 15);
    // 0e7edf  mov eax, dword ptr [0xc41cd]
    X86_AT(c, 0xe7edfu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xC41CDu)));
    // 0e7ee4  cmp eax, dword ptr [0xc41c9]
    X86_AT(c, 0xe7ee4u);
    (void)x86_sub(c, c.r[0], rd32((c.sbase[3] + (uint32_t)(0xC41C9u))), 0, 4);
    // 0e7eea  jne 0xe7ef4
    X86_AT(c, 0xe7eeau);
    if (x86_cc(c, 5)) { goto L_e7ef4; }
    X86_TICK(c, 11);
    // 0e7eec  mov edx, dword ptr [0xc41cd]
    X86_AT(c, 0xe7eecu);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(0xC41CDu)));
    // 0e7ef2  jmp 0xe7f1b
    X86_AT(c, 0xe7ef2u);
    goto L_e7f1b;
L_e7ef4:
    X86_TICK(c, 12);
    // 0e7ef4  cmp byte ptr [0xc41b3], 1
    X86_AT(c, 0xe7ef4u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0xC41B3u))), 0x1u, 0, 1);
    // 0e7efb  je 0xe7f24
    X86_AT(c, 0xe7efbu);
    if (x86_cc(c, 4)) { goto L_e7f24; }
    X86_TICK(c, 12);
    // 0e7efd  cmp word ptr [0xc41d1], 0xabcd
    X86_AT(c, 0xe7efdu);
    (void)x86_sub(c, rd16((c.sbase[3] + (uint32_t)(0xC41D1u))), 0xABCDu, 0, 2);
    // 0e7f06  jne 0xe7f24
    X86_AT(c, 0xe7f06u);
    if (x86_cc(c, 5)) { goto L_e7f24; }
    X86_TICK(c, 15);
    // 0e7f08  mov eax, dword ptr [0xc41d7]
    X86_AT(c, 0xe7f08u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xC41D7u)));
    // 0e7f0d  cmp eax, dword ptr [0xc41d3]
    X86_AT(c, 0xe7f0du);
    (void)x86_sub(c, c.r[0], rd32((c.sbase[3] + (uint32_t)(0xC41D3u))), 0, 4);
    // 0e7f13  jne 0xe7f24
    X86_AT(c, 0xe7f13u);
    if (x86_cc(c, 5)) { goto L_e7f24; }
    X86_TICK(c, 4);
    // 0e7f15  mov edx, dword ptr [0xc41d7]
    X86_AT(c, 0xe7f15u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(0xC41D7u)));
L_e7f1b:
    X86_TICK(c, 39);
    // 0e7f1b  mov ah, 9
    X86_AT(c, 0xe7f1bu);
    s8(c, 4, 0x9u);
    // 0e7f1d  int 0x21
    X86_AT(c, 0xe7f1du);
    x86_int(c, 0x21, 0xe7f1fu);
    X86_TICK(c, 7);
    // 0e7f1f  jmp 0xe7a7b
    X86_AT(c, 0xe7f1fu);
    X86_POLL(c, 0xe7a7bu); goto L_e7a7b;
L_e7f24:
    X86_TICK(c, 12);
    // 0e7f24  cmp byte ptr [0xc41b7], 1
    X86_AT(c, 0xe7f24u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0xC41B7u))), 0x1u, 0, 1);
    // 0e7f2b  je 0xe7f58
    X86_AT(c, 0xe7f2bu);
    if (x86_cc(c, 4)) { goto L_e7f58; }
    X86_TICK(c, 12);
    // 0e7f2d  cmp word ptr [0xc41db], 0xabcd
    X86_AT(c, 0xe7f2du);
    (void)x86_sub(c, rd16((c.sbase[3] + (uint32_t)(0xC41DBu))), 0xABCDu, 0, 2);
    // 0e7f36  jne 0xe7f58
    X86_AT(c, 0xe7f36u);
    if (x86_cc(c, 5)) { goto L_e7f58; }
    X86_TICK(c, 43);
    // 0e7f38  mov edx, dword ptr cs:[0xe7f54]
    X86_AT(c, 0xe7f38u);
    c.r[2] = rd32((c.sbase[1] + (uint32_t)(0xE7F54u)));
    // 0e7f3f  mov ah, 9
    X86_AT(c, 0xe7f3fu);
    s8(c, 4, 0x9u);
    // 0e7f41  int 0x21
    X86_AT(c, 0xe7f41u);
    x86_int(c, 0x21, 0xe7f43u);
    X86_TICK(c, 13);
    // 0e7f43  mov edx, dword ptr [0xc41d7]
    X86_AT(c, 0xe7f43u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(0xC41D7u)));
    // 0e7f49  add edx, 0xa
    X86_AT(c, 0xe7f49u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, 0xAu, 0, 4); }
    // 0e7f4c  jmp 0xe7f1b
    X86_AT(c, 0xe7f4cu);
    X86_POLL(c, 0xe7f1bu); goto L_e7f1b;
L_e7f58:
    X86_TICK(c, 7);
    // 0e7f58  jmp 0xe7a76
    X86_AT(c, 0xe7f58u);
    X86_POLL(c, 0xe7a76u); goto L_e7a76;
    x86_fault(c, 0xe7a74u, "ran off the end of a function");
}
void f_000e7a85(X86Cpu& c) {
    X86_TICK(c, 10);
    // 0e7a85  ret 
    X86_AT(c, 0xe7a85u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe7a85u, "ran off the end of a function");
}
void f_000e7f5e(X86Cpu& c) {
    X86_TICK(c, 16);
    // 0e7f5e  mov eax, dword ptr [0xc418c]
    X86_AT(c, 0xe7f5eu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xC418Cu)));
    // 0e7f63  add eax, 0x10
    X86_AT(c, 0xe7f63u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0x10u, 0, 4); }
    // 0e7f68  ret 
    X86_AT(c, 0xe7f68u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe7f5eu, "ran off the end of a function");
}
void f_000e7f6a(X86Cpu& c) {
    X86_TICK(c, 14);
    // 0e7f6a  mov eax, dword ptr [0xc4194]
    X86_AT(c, 0xe7f6au);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xC4194u)));
    // 0e7f6f  ret 
    X86_AT(c, 0xe7f6fu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe7f6au, "ran off the end of a function");
}
void f_000e7f70(X86Cpu& c) {
    X86_TICK(c, 14);
    // 0e7f70  push ebx
    X86_AT(c, 0xe7f70u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0e7f71  cmp byte ptr [0xc41c2], 2
    X86_AT(c, 0xe7f71u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0xC41C2u))), 0x2u, 0, 1);
    // 0e7f78  je 0xe7fb5
    X86_AT(c, 0xe7f78u);
    if (x86_cc(c, 4)) { goto L_e7fb5; }
    X86_TICK(c, 7);
    // 0e7f7a  jmp 0xe7fb5
    X86_AT(c, 0xe7f7au);
    goto L_e7fb5;
L_e7fb5:
    X86_TICK(c, 14);
    // 0e7fb5  pop ebx
    X86_AT(c, 0xe7fb5u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0e7fb6  ret 4
    X86_AT(c, 0xe7fb6u);
    c.eip = pop32(c); c.r[4] += 0x4u; return;
    x86_fault(c, 0xe7f70u, "ran off the end of a function");
}
void f_000e7fb9(X86Cpu& c) {
    X86_TICK(c, 10);
    // 0e7fb9  ret 8
    X86_AT(c, 0xe7fb9u);
    c.eip = pop32(c); c.r[4] += 0x8u; return;
    x86_fault(c, 0xe7fb9u, "ran off the end of a function");
}
void f_000e7fc4(X86Cpu& c) {
    X86_TICK(c, 24);
    // 0e7fc4  enter 8, 0
    X86_AT(c, 0xe7fc4u);
    x86_enter(c, 0x8u, 0x0u, 4);
    // 0e7fc8  push ebx
    X86_AT(c, 0xe7fc8u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0e7fc9  push esi
    X86_AT(c, 0xe7fc9u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0e7fca  push edi
    X86_AT(c, 0xe7fcau);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e7fcb  cmp byte ptr [0xc41b3], 0
    X86_AT(c, 0xe7fcbu);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0xC41B3u))), 0x0u, 0, 1);
    // 0e7fd2  je 0xe7fea
    X86_AT(c, 0xe7fd2u);
    if (x86_cc(c, 4)) { goto L_e7fea; }
    X86_TICK(c, 20);
    // 0e7fd4  push dword ptr [0xc427c]
    X86_AT(c, 0xe7fd4u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xC427Cu))); push32(c, v); }
    // 0e7fda  mov eax, dword ptr [0xc427c]
    X86_AT(c, 0xe7fdau);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xC427Cu)));
    // 0e7fdf  sub eax, 0xc
    X86_AT(c, 0xe7fdfu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, 0xCu, 0, 4); }
    // 0e7fe2  push eax
    X86_AT(c, 0xe7fe2u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e7fe3  call 0xe9ce1
    X86_AT(c, 0xe7fe3u);
    push32(c, 0xe7fe8u); x86_call_known(c, 0xe9ce1u, f_000e9ce1); X86_RET(c, 0xe7fe8u);
    X86_TICK(c, 7);
    // 0e7fe8  jmp 0xe803e
    X86_AT(c, 0xe7fe8u);
    goto L_e803e;
L_e7fea:
    X86_TICK(c, 33);
    // 0e7fea  mov eax, dword ptr [0xc427c]
    X86_AT(c, 0xe7feau);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xC427Cu)));
    // 0e7fef  lea esi, [eax - 0xc]
    X86_AT(c, 0xe7fefu);
    c.r[6] = (uint32_t)(c.r[0] + 0xFFFFFFF4u);
    // 0e7ff2  xchg edi, eax
    X86_AT(c, 0xe7ff2u);
    { uint32_t t = c.r[7]; c.r[7] = c.r[0]; c.r[0] = t; }
    // 0e7ff3  mov ax, word ptr [edi + 8]
    X86_AT(c, 0xe7ff3u);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x8u))));
    // 0e7ff7  cmp ax, word ptr [esi + 8]
    X86_AT(c, 0xe7ff7u);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), rd16((c.sbase[3] + (uint32_t)(c.r[6] + 0x8u))), 0, 2);
    // 0e7ffb  setb al
    X86_AT(c, 0xe7ffbu);
    s8(c, 0, x86_cc(c, 2) ? 1u : 0u);
    // 0e7ffe  xchg ebx, eax
    X86_AT(c, 0xe7ffeu);
    { uint32_t t = c.r[3]; c.r[3] = c.r[0]; c.r[0] = t; }
    // 0e7fff  and bl, bl
    X86_AT(c, 0xe7fffu);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v & g8(c, 3), 1)); }
    // 0e8001  je 0xe800b
    X86_AT(c, 0xe8001u);
    if (x86_cc(c, 4)) { goto L_e800b; }
    X86_TICK(c, 8);
    // 0e8003  mov dword ptr [ebp - 8], esi
    X86_AT(c, 0xe8003u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), c.r[6]);
    // 0e8006  mov esi, edi
    X86_AT(c, 0xe8006u);
    c.r[6] = c.r[7];
    // 0e8008  mov edi, dword ptr [ebp - 8]
    X86_AT(c, 0xe8008u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)));
L_e800b:
    X86_TICK(c, 19);
    // 0e800b  mov ax, word ptr [edi + 8]
    X86_AT(c, 0xe800bu);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x8u))));
    // 0e800f  sub ax, word ptr [esi + 8]
    X86_AT(c, 0xe800fu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_sub(c, v, rd16((c.sbase[3] + (uint32_t)(c.r[6] + 0x8u))), 0, 2)); }
    // 0e8013  mov word ptr [ebp - 2], ax
    X86_AT(c, 0xe8013u);
    wr16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFEu)), (c.r[0] & 0xFFFFu));
    // 0e8017  cmp ax, 0x40
    X86_AT(c, 0xe8017u);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), 0x40u, 0, 2);
    // 0e801b  jg 0xe8023
    X86_AT(c, 0xe801bu);
    if (x86_cc(c, 15)) { goto L_e8023; }
    X86_TICK(c, 12);
    // 0e801d  cmp byte ptr [esi + 0xb], 0
    X86_AT(c, 0xe801du);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[6] + 0xBu))), 0x0u, 0, 1);
    // 0e8021  je 0xe804a
    X86_AT(c, 0xe8021u);
    if (x86_cc(c, 4)) { goto L_e804a; }
L_e8023:
    X86_TICK(c, 7);
    // 0e8023  and bl, bl
    X86_AT(c, 0xe8023u);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v & g8(c, 3), 1)); }
    // 0e8025  jne 0xe803e
    X86_AT(c, 0xe8025u);
    if (x86_cc(c, 5)) { goto L_e803e; }
    X86_TICK(c, 31);
    // 0e8027  mov eax, dword ptr [0xc427c]
    X86_AT(c, 0xe8027u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xC427Cu)));
    // 0e802c  lea edx, [eax - 0xc]
    X86_AT(c, 0xe802cu);
    c.r[2] = (uint32_t)(c.r[0] + 0xFFFFFFF4u);
    // 0e802f  push esi
    X86_AT(c, 0xe802fu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0e8030  push edi
    X86_AT(c, 0xe8030u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e8031  mov esi, eax
    X86_AT(c, 0xe8031u);
    c.r[6] = c.r[0];
    // 0e8033  mov edi, edx
    X86_AT(c, 0xe8033u);
    c.r[7] = c.r[2];
    // 0e8035  mov ecx, 3
    X86_AT(c, 0xe8035u);
    c.r[1] = 0x3u;
    // 0e803a  movsd dword ptr es:[edi], dword ptr [esi]
    X86_AT(c, 0xe803au);
    x86_string(c, 0, 4, 243, 4, 3);
    // 0e803c  pop edi
    X86_AT(c, 0xe803cu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0e803d  pop esi
    X86_AT(c, 0xe803du);
    { uint32_t v = pop32(c); c.r[6] = v; }
L_e803e:
    X86_TICK(c, 14);
    // 0e803e  add dword ptr [0xc427c], 0xfffffff4
    X86_AT(c, 0xe803eu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xC427Cu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0xFFFFFFF4u, 0, 4)); }
    // 0e8045  jmp 0xe80d6
    X86_AT(c, 0xe8045u);
    goto L_e80d6;
L_e804a:
    X86_TICK(c, 11);
    // 0e804a  mov ax, word ptr [ebp - 2]
    X86_AT(c, 0xe804au);
    s16(c, 0, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFEu))));
    // 0e804e  and ax, ax
    X86_AT(c, 0xe804eu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_logic(c, v & (c.r[0] & 0xFFFFu), 2)); }
    // 0e8051  je 0xe805a
    X86_AT(c, 0xe8051u);
    if (x86_cc(c, 4)) { goto L_e805a; }
    X86_TICK(c, 11);
    // 0e8053  push eax
    X86_AT(c, 0xe8053u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e8054  push esi
    X86_AT(c, 0xe8054u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0e8055  call 0xe9fe8
    X86_AT(c, 0xe8055u);
    push32(c, 0xe805au); x86_call_known(c, 0xe9fe8u, f_000e9fe8); X86_RET(c, 0xe805au);
L_e805a:
    X86_TICK(c, 15);
    // 0e805a  mov al, byte ptr [edi + 0xa]
    X86_AT(c, 0xe805au);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0xAu))));
    // 0e805d  cmp al, byte ptr [esi + 0xa]
    X86_AT(c, 0xe805du);
    (void)x86_sub(c, g8(c, 0), rd8((c.sbase[3] + (uint32_t)(c.r[6] + 0xAu))), 0, 1);
    // 0e8060  jne 0xe8081
    X86_AT(c, 0xe8060u);
    if (x86_cc(c, 5)) { goto L_e8081; }
    X86_TICK(c, 13);
    // 0e8062  push 4
    X86_AT(c, 0xe8062u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0e8064  push esi
    X86_AT(c, 0xe8064u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0e8065  push edi
    X86_AT(c, 0xe8065u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e8066  call 0xe9ef4
    X86_AT(c, 0xe8066u);
    push32(c, 0xe806bu); x86_call_known(c, 0xe9ef4u, f_000e9ef4); X86_RET(c, 0xe806bu);
    X86_TICK(c, 7);
    // 0e806b  and al, al
    X86_AT(c, 0xe806bu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & g8(c, 0), 1)); }
    // 0e806d  je 0xe80ac
    X86_AT(c, 0xe806du);
    if (x86_cc(c, 4)) { goto L_e80ac; }
    X86_TICK(c, 11);
    // 0e806f  push 1
    X86_AT(c, 0xe806fu);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0e8071  push edi
    X86_AT(c, 0xe8071u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e8072  call 0xe9fe8
    X86_AT(c, 0xe8072u);
    push32(c, 0xe8077u); x86_call_known(c, 0xe9fe8u, f_000e9fe8); X86_RET(c, 0xe8077u);
    X86_TICK(c, 20);
    // 0e8077  or byte ptr [edi + 7], 0x80
    X86_AT(c, 0xe8077u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x7u)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | 0x80u, 1)); }
    // 0e807b  inc word ptr [edi + 8]
    X86_AT(c, 0xe807bu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x8u)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
    // 0e807f  jmp 0xe80ac
    X86_AT(c, 0xe807fu);
    goto L_e80ac;
L_e8081:
    X86_TICK(c, 12);
    // 0e8081  cmp byte ptr [edi + 0xa], 0
    X86_AT(c, 0xe8081u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0xAu))), 0x0u, 0, 1);
    // 0e8085  je 0xe8092
    X86_AT(c, 0xe8085u);
    if (x86_cc(c, 4)) { goto L_e8092; }
    X86_TICK(c, 13);
    // 0e8087  push 4
    X86_AT(c, 0xe8087u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0e8089  push esi
    X86_AT(c, 0xe8089u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0e808a  push edi
    X86_AT(c, 0xe808au);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e808b  call 0xe9f46
    X86_AT(c, 0xe808bu);
    push32(c, 0xe8090u); x86_call_known(c, 0xe9f46u, f_000e9f46); X86_RET(c, 0xe8090u);
    X86_TICK(c, 7);
    // 0e8090  jmp 0xe809b
    X86_AT(c, 0xe8090u);
    goto L_e809b;
L_e8092:
    X86_TICK(c, 13);
    // 0e8092  push 4
    X86_AT(c, 0xe8092u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0e8094  push esi
    X86_AT(c, 0xe8094u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0e8095  push edi
    X86_AT(c, 0xe8095u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e8096  call 0xe9f1d
    X86_AT(c, 0xe8096u);
    push32(c, 0xe809bu); x86_call_known(c, 0xe9f1du, f_000e9f1d); X86_RET(c, 0xe809bu);
L_e809b:
    X86_TICK(c, 14);
    // 0e809b  mov byte ptr [edi + 0xa], al
    X86_AT(c, 0xe809bu);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0xAu)), g8(c, 0));
    // 0e809e  cmp byte ptr [edi + 0xa], 0
    X86_AT(c, 0xe809eu);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0xAu))), 0x0u, 0, 1);
    // 0e80a2  je 0xe80ac
    X86_AT(c, 0xe80a2u);
    if (x86_cc(c, 4)) { goto L_e80ac; }
    X86_TICK(c, 11);
    // 0e80a4  push 4
    X86_AT(c, 0xe80a4u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0e80a6  push edi
    X86_AT(c, 0xe80a6u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e80a7  call 0xe9f72
    X86_AT(c, 0xe80a7u);
    push32(c, 0xe80acu); x86_call_known(c, 0xe9f72u, f_000e9f72); X86_RET(c, 0xe80acu);
L_e80ac:
    X86_TICK(c, 14);
    // 0e80ac  add dword ptr [0xc427c], 0xfffffff4
    X86_AT(c, 0xe80acu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xC427Cu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0xFFFFFFF4u, 0, 4)); }
    // 0e80b3  and bl, bl
    X86_AT(c, 0xe80b3u);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v & g8(c, 3), 1)); }
    // 0e80b5  jne 0xe80cb
    X86_AT(c, 0xe80b5u);
    if (x86_cc(c, 5)) { goto L_e80cb; }
    X86_TICK(c, 29);
    // 0e80b7  mov eax, dword ptr [0xc427c]
    X86_AT(c, 0xe80b7u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xC427Cu)));
    // 0e80bc  push esi
    X86_AT(c, 0xe80bcu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0e80bd  push edi
    X86_AT(c, 0xe80bdu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e80be  mov esi, edi
    X86_AT(c, 0xe80beu);
    c.r[6] = c.r[7];
    // 0e80c0  mov edi, eax
    X86_AT(c, 0xe80c0u);
    c.r[7] = c.r[0];
    // 0e80c2  mov ecx, 3
    X86_AT(c, 0xe80c2u);
    c.r[1] = 0x3u;
    // 0e80c7  movsd dword ptr es:[edi], dword ptr [esi]
    X86_AT(c, 0xe80c7u);
    x86_string(c, 0, 4, 243, 4, 3);
    // 0e80c9  pop edi
    X86_AT(c, 0xe80c9u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0e80ca  pop esi
    X86_AT(c, 0xe80cau);
    { uint32_t v = pop32(c); c.r[6] = v; }
L_e80cb:
    X86_TICK(c, 12);
    // 0e80cb  push dword ptr [0xc427c]
    X86_AT(c, 0xe80cbu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xC427Cu))); push32(c, v); }
    // 0e80d1  call 0xea084
    X86_AT(c, 0xe80d1u);
    push32(c, 0xe80d6u); x86_call_known(c, 0xea084u, f_000ea084); X86_RET(c, 0xe80d6u);
L_e80d6:
    X86_TICK(c, 28);
    // 0e80d6  pop edi
    X86_AT(c, 0xe80d6u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0e80d7  pop esi
    X86_AT(c, 0xe80d7u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0e80d8  pop ebx
    X86_AT(c, 0xe80d8u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0e80d9  leave 
    X86_AT(c, 0xe80d9u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0e80da  ret 
    X86_AT(c, 0xe80dau);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe7fc4u, "ran off the end of a function");
}
void f_000e80dc(X86Cpu& c) {
    X86_TICK(c, 22);
    // 0e80dc  enter 0x10, 0
    X86_AT(c, 0xe80dcu);
    x86_enter(c, 0x10u, 0x0u, 4);
    // 0e80e0  push esi
    X86_AT(c, 0xe80e0u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0e80e1  push edi
    X86_AT(c, 0xe80e1u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e80e2  cmp byte ptr [0xc41b3], 0
    X86_AT(c, 0xe80e2u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0xC41B3u))), 0x0u, 0, 1);
    // 0e80e9  je 0xe8107
    X86_AT(c, 0xe80e9u);
    if (x86_cc(c, 4)) { goto L_e8107; }
    X86_TICK(c, 12);
    // 0e80eb  push dword ptr [0xc427c]
    X86_AT(c, 0xe80ebu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xC427Cu))); push32(c, v); }
    // 0e80f1  call 0xe9d72
    X86_AT(c, 0xe80f1u);
    push32(c, 0xe80f6u); x86_call_known(c, 0xe9d72u, f_000e9d72); X86_RET(c, 0xe80f6u);
    X86_TICK(c, 14);
    // 0e80f6  add dword ptr [0xc427c], 0xfffffff4
    X86_AT(c, 0xe80f6u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xC427Cu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0xFFFFFFF4u, 0, 4)); }
    // 0e80fd  call 0xe9d95
    X86_AT(c, 0xe80fdu);
    push32(c, 0xe8102u); x86_call_known(c, 0xe9d95u, f_000e9d95); X86_RET(c, 0xe8102u);
    X86_TICK(c, 7);
    // 0e8102  jmp 0xe817d
    X86_AT(c, 0xe8102u);
    goto L_e817d;
L_e8107:
    X86_TICK(c, 51);
    // 0e8107  mov eax, dword ptr [0xc427c]
    X86_AT(c, 0xe8107u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xC427Cu)));
    // 0e810c  lea edx, [ebp - 0x10]
    X86_AT(c, 0xe810cu);
    c.r[2] = (uint32_t)(c.r[5] + 0xFFFFFFF0u);
    // 0e810f  push esi
    X86_AT(c, 0xe810fu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0e8110  push edi
    X86_AT(c, 0xe8110u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e8111  mov esi, eax
    X86_AT(c, 0xe8111u);
    c.r[6] = c.r[0];
    // 0e8113  mov edi, edx
    X86_AT(c, 0xe8113u);
    c.r[7] = c.r[2];
    // 0e8115  mov ecx, 3
    X86_AT(c, 0xe8115u);
    c.r[1] = 0x3u;
    // 0e811a  movsd dword ptr es:[edi], dword ptr [esi]
    X86_AT(c, 0xe811au);
    x86_string(c, 0, 4, 243, 4, 3);
    // 0e811c  pop edi
    X86_AT(c, 0xe811cu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0e811d  pop esi
    X86_AT(c, 0xe811du);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0e811e  add dword ptr [0xc427c], 0xfffffff4
    X86_AT(c, 0xe811eu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xC427Cu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0xFFFFFFF4u, 0, 4)); }
    // 0e8125  mov di, word ptr [ebp - 8]
    X86_AT(c, 0xe8125u);
    s16(c, 7, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u))));
    // 0e8129  sub di, 0x3fff
    X86_AT(c, 0xe8129u);
    { uint32_t v = (c.r[7] & 0xFFFFu); s16(c, 7, x86_sub(c, v, 0x3FFFu, 0, 2)); }
    // 0e812e  cmp di, 0x20
    X86_AT(c, 0xe812eu);
    (void)x86_sub(c, (c.r[7] & 0xFFFFu), 0x20u, 0, 2);
    // 0e8132  jl 0xe813b
    X86_AT(c, 0xe8132u);
    if (x86_cc(c, 12)) { goto L_e813b; }
    X86_TICK(c, 9);
    // 0e8134  mov eax, 0xffffffff
    X86_AT(c, 0xe8134u);
    c.r[0] = 0xFFFFFFFFu;
    // 0e8139  jmp 0xe817d
    X86_AT(c, 0xe8139u);
    goto L_e817d;
L_e813b:
    X86_TICK(c, 7);
    // 0e813b  and di, di
    X86_AT(c, 0xe813bu);
    { uint32_t v = (c.r[7] & 0xFFFFu); s16(c, 7, x86_logic(c, v & (c.r[7] & 0xFFFFu), 2)); }
    // 0e813e  jge 0xe8144
    X86_AT(c, 0xe813eu);
    if (x86_cc(c, 13)) { goto L_e8144; }
    X86_TICK(c, 9);
    // 0e8140  sub eax, eax
    X86_AT(c, 0xe8140u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0e8142  jmp 0xe817d
    X86_AT(c, 0xe8142u);
    goto L_e817d;
L_e8144:
    X86_TICK(c, 13);
    // 0e8144  mov si, 0x20
    X86_AT(c, 0xe8144u);
    s16(c, 6, 0x20u);
    // 0e8148  sub esi, edi
    X86_AT(c, 0xe8148u);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[7], 0, 4); }
    // 0e814a  dec esi
    X86_AT(c, 0xe814au);
    { uint32_t v = c.r[6]; c.r[6] = x86_dec(c, v, 4); }
    // 0e814b  cmp si, 0x10
    X86_AT(c, 0xe814bu);
    (void)x86_sub(c, (c.r[6] & 0xFFFFu), 0x10u, 0, 2);
    // 0e814f  jb 0xe8159
    X86_AT(c, 0xe814fu);
    if (x86_cc(c, 2)) { goto L_e8159; }
    X86_TICK(c, 9);
    // 0e8151  shr dword ptr [ebp - 0xc], 0x10
    X86_AT(c, 0xe8151u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)); uint32_t v = rd32(ea); bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) wr32(ea, r); }
    // 0e8155  sub si, 0x10
    X86_AT(c, 0xe8155u);
    { uint32_t v = (c.r[6] & 0xFFFFu); s16(c, 6, x86_sub(c, v, 0x10u, 0, 2)); }
L_e8159:
    X86_TICK(c, 7);
    // 0e8159  cmp si, 8
    X86_AT(c, 0xe8159u);
    (void)x86_sub(c, (c.r[6] & 0xFFFFu), 0x8u, 0, 2);
    // 0e815d  jb 0xe8167
    X86_AT(c, 0xe815du);
    if (x86_cc(c, 2)) { goto L_e8167; }
    X86_TICK(c, 9);
    // 0e815f  shr dword ptr [ebp - 0xc], 8
    X86_AT(c, 0xe815fu);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)); uint32_t v = rd32(ea); bool w; uint32_t r = x86_shift(c, 5, v, 0x8u, 4, w); if (w) wr32(ea, r); }
    // 0e8163  sub si, 8
    X86_AT(c, 0xe8163u);
    { uint32_t v = (c.r[6] & 0xFFFFu); s16(c, 6, x86_sub(c, v, 0x8u, 0, 2)); }
L_e8167:
    X86_TICK(c, 23);
    // 0e8167  mov eax, dword ptr [ebp - 0xc]
    X86_AT(c, 0xe8167u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)));
    // 0e816a  mov ecx, esi
    X86_AT(c, 0xe816au);
    c.r[1] = c.r[6];
    // 0e816c  shr eax, cl
    X86_AT(c, 0xe816cu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 0e816e  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0xe816eu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
    // 0e8171  cmp byte ptr [ebp - 6], 0
    X86_AT(c, 0xe8171u);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFAu))), 0x0u, 0, 1);
    // 0e8175  je 0xe817a
    X86_AT(c, 0xe8175u);
    if (x86_cc(c, 4)) { goto L_e817a; }
    X86_TICK(c, 6);
    // 0e8177  neg dword ptr [ebp - 4]
    X86_AT(c, 0xe8177u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)); uint32_t v = rd32(ea); wr32(ea, x86_neg(c, v, 4)); }
L_e817a:
    X86_TICK(c, 4);
    // 0e817a  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0xe817au);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
L_e817d:
    X86_TICK(c, 24);
    // 0e817d  pop edi
    X86_AT(c, 0xe817du);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0e817e  pop esi
    X86_AT(c, 0xe817eu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0e817f  leave 
    X86_AT(c, 0xe817fu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0e8180  ret 
    X86_AT(c, 0xe8180u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe80dcu, "ran off the end of a function");
}
void f_000e8200(X86Cpu& c) {
    X86_TICK(c, 33);
    // 0e8200  push ebp
    X86_AT(c, 0xe8200u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0e8201  mov ebp, esp
    X86_AT(c, 0xe8201u);
    c.r[5] = c.r[4];
    // 0e8203  push edi
    X86_AT(c, 0xe8203u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e8204  mov edi, dword ptr [0xc427c]
    X86_AT(c, 0xe8204u);
    c.r[7] = rd32((c.sbase[3] + (uint32_t)(0xC427Cu)));
    // 0e820a  mov eax, dword ptr [ebp + 8]
    X86_AT(c, 0xe820au);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0e820d  mov dword ptr [edi + 4], eax
    X86_AT(c, 0xe820du);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] + 0x4u)), c.r[0]);
    // 0e8210  sub eax, eax
    X86_AT(c, 0xe8210u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0e8212  mov dword ptr [edi], eax
    X86_AT(c, 0xe8212u);
    wr32((c.sbase[3] + (uint32_t)(c.r[7])), c.r[0]);
    // 0e8214  mov word ptr [edi + 8], 0x401e
    X86_AT(c, 0xe8214u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x8u)), 0x401Eu);
    // 0e821a  cmp eax, dword ptr [edi + 4]
    X86_AT(c, 0xe821au);
    (void)x86_sub(c, c.r[0], rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x4u))), 0, 4);
    // 0e821d  je 0xe8245
    X86_AT(c, 0xe821du);
    if (x86_cc(c, 4)) { goto L_e8245; }
    X86_TICK(c, 11);
    // 0e821f  cmp ax, word ptr [edi + 6]
    X86_AT(c, 0xe821fu);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x6u))), 0, 2);
    // 0e8223  jne 0xe8236
    X86_AT(c, 0xe8223u);
    if (x86_cc(c, 5)) { goto L_e8236; }
    X86_TICK(c, 15);
    // 0e8225  mov dx, word ptr [edi + 4]
    X86_AT(c, 0xe8225u);
    s16(c, 2, rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x4u))));
    // 0e8229  mov word ptr [edi + 6], dx
    X86_AT(c, 0xe8229u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x6u)), (c.r[2] & 0xFFFFu));
    // 0e822d  mov word ptr [edi + 4], ax
    X86_AT(c, 0xe822du);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x4u)), (c.r[0] & 0xFFFFu));
    // 0e8231  sub word ptr [edi + 8], 0x10
    X86_AT(c, 0xe8231u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x8u)); uint32_t v = rd16(ea); wr16(ea, x86_sub(c, v, 0x10u, 0, 2)); }
L_e8236:
    X86_TICK(c, 12);
    // 0e8236  cmp byte ptr [edi + 7], 0
    X86_AT(c, 0xe8236u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x7u))), 0x0u, 0, 1);
    // 0e823a  jne 0xe8245
    X86_AT(c, 0xe823au);
    if (x86_cc(c, 5)) { goto L_e8245; }
    X86_TICK(c, 14);
    // 0e823c  shl dword ptr [edi + 4], 8
    X86_AT(c, 0xe823cu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x4u)); uint32_t v = rd32(ea); bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) wr32(ea, r); }
    // 0e8240  sub word ptr [edi + 8], 8
    X86_AT(c, 0xe8240u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x8u)); uint32_t v = rd16(ea); wr16(ea, x86_sub(c, v, 0x8u, 0, 2)); }
L_e8245:
    X86_TICK(c, 14);
    // 0e8245  mov byte ptr [edi + 0xb], 0
    X86_AT(c, 0xe8245u);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0xBu)), 0x0u);
    // 0e8249  push dword ptr [0xc427c]
    X86_AT(c, 0xe8249u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xC427Cu))); push32(c, v); }
    // 0e824f  call 0xea084
    X86_AT(c, 0xe824fu);
    push32(c, 0xe8254u); x86_call_known(c, 0xea084u, f_000ea084); X86_RET(c, 0xe8254u);
    X86_TICK(c, 20);
    // 0e8254  pop edi
    X86_AT(c, 0xe8254u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0e8255  leave 
    X86_AT(c, 0xe8255u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0e8256  ret 4
    X86_AT(c, 0xe8256u);
    c.eip = pop32(c); c.r[4] += 0x4u; return;
    x86_fault(c, 0xe8200u, "ran off the end of a function");
}
void f_000e825c(X86Cpu& c) {
    X86_TICK(c, 17);
    // 0e825c  push ebp
    X86_AT(c, 0xe825cu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0e825d  mov ebp, esp
    X86_AT(c, 0xe825du);
    c.r[5] = c.r[4];
    // 0e825f  push edi
    X86_AT(c, 0xe825fu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e8260  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0xe8260u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0e8263  call 0xea060
    X86_AT(c, 0xe8263u);
    push32(c, 0xe8268u); x86_call_known(c, 0xea060u, f_000ea060); X86_RET(c, 0xe8268u);
    X86_TICK(c, 12);
    // 0e8268  cmp byte ptr [0xc41b3], 0
    X86_AT(c, 0xe8268u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0xC41B3u))), 0x0u, 0, 1);
    // 0e826f  je 0xe8284
    X86_AT(c, 0xe826fu);
    if (x86_cc(c, 4)) { goto L_e8284; }
    X86_TICK(c, 9);
    // 0e8271  push edi
    X86_AT(c, 0xe8271u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e8272  call 0xe9d21
    X86_AT(c, 0xe8272u);
    push32(c, 0xe8277u); x86_call_known(c, 0xe9d21u, f_000e9d21); X86_RET(c, 0xe8277u);
    X86_TICK(c, 12);
    // 0e8277  push dword ptr [0xc427c]
    X86_AT(c, 0xe8277u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xC427Cu))); push32(c, v); }
    // 0e827d  call 0xe9d68
    X86_AT(c, 0xe827du);
    push32(c, 0xe8282u); x86_call_known(c, 0xe9d68u, f_000e9d68); X86_RET(c, 0xe8282u);
    X86_TICK(c, 7);
    // 0e8282  jmp 0xe829e
    X86_AT(c, 0xe8282u);
    goto L_e829e;
L_e8284:
    X86_TICK(c, 19);
    // 0e8284  and edi, edi
    X86_AT(c, 0xe8284u);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & c.r[7], 4); }
    // 0e8286  setl al
    X86_AT(c, 0xe8286u);
    s8(c, 0, x86_cc(c, 12) ? 1u : 0u);
    // 0e8289  mov edx, dword ptr [0xc427c]
    X86_AT(c, 0xe8289u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(0xC427Cu)));
    // 0e828f  mov byte ptr [edx + 0xa], al
    X86_AT(c, 0xe828fu);
    wr8((c.sbase[3] + (uint32_t)(c.r[2] + 0xAu)), g8(c, 0));
    // 0e8292  and al, al
    X86_AT(c, 0xe8292u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & g8(c, 0), 1)); }
    // 0e8294  je 0xe8298
    X86_AT(c, 0xe8294u);
    if (x86_cc(c, 4)) { goto L_e8298; }
    X86_TICK(c, 2);
    // 0e8296  neg edi
    X86_AT(c, 0xe8296u);
    { uint32_t v = c.r[7]; c.r[7] = x86_neg(c, v, 4); }
L_e8298:
    X86_TICK(c, 9);
    // 0e8298  push edi
    X86_AT(c, 0xe8298u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e8299  call 0xe8200
    X86_AT(c, 0xe8299u);
    push32(c, 0xe829eu); x86_call_known(c, 0xe8200u, f_000e8200); X86_RET(c, 0xe829eu);
L_e829e:
    X86_TICK(c, 20);
    // 0e829e  pop edi
    X86_AT(c, 0xe829eu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0e829f  leave 
    X86_AT(c, 0xe829fu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0e82a0  ret 4
    X86_AT(c, 0xe82a0u);
    c.eip = pop32(c); c.r[4] += 0x4u; return;
    x86_fault(c, 0xe825cu, "ran off the end of a function");
}
void f_000e82e0(X86Cpu& c) {
    X86_TICK(c, 11);
    // 0e82e0  push ebp
    X86_AT(c, 0xe82e0u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0e82e1  mov ebp, esp
    X86_AT(c, 0xe82e1u);
    c.r[5] = c.r[4];
    // 0e82e3  call 0xea060
    X86_AT(c, 0xe82e3u);
    push32(c, 0xe82e8u); x86_call_known(c, 0xea060u, f_000ea060); X86_RET(c, 0xe82e8u);
    X86_TICK(c, 12);
    // 0e82e8  cmp byte ptr [0xc41b3], 0
    X86_AT(c, 0xe82e8u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0xC41B3u))), 0x0u, 0, 1);
    // 0e82ef  je 0xe8309
    X86_AT(c, 0xe82efu);
    if (x86_cc(c, 4)) { goto L_e8309; }
    X86_TICK(c, 17);
    // 0e82f1  push dword ptr [ebp + 0xc]
    X86_AT(c, 0xe82f1u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))); push32(c, v); }
    // 0e82f4  push dword ptr [ebp + 8]
    X86_AT(c, 0xe82f4u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, v); }
    // 0e82f7  call 0xe9d61
    X86_AT(c, 0xe82f7u);
    push32(c, 0xe82fcu); x86_call_known(c, 0xe9d61u, f_000e9d61); X86_RET(c, 0xe82fcu);
    X86_TICK(c, 12);
    // 0e82fc  push dword ptr [0xc427c]
    X86_AT(c, 0xe82fcu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xC427Cu))); push32(c, v); }
    // 0e8302  call 0xe9d68
    X86_AT(c, 0xe8302u);
    push32(c, 0xe8307u); x86_call_known(c, 0xe9d68u, f_000e9d68); X86_RET(c, 0xe8307u);
    X86_TICK(c, 7);
    // 0e8307  jmp 0xe8318
    X86_AT(c, 0xe8307u);
    goto L_e8318;
L_e8309:
    X86_TICK(c, 16);
    // 0e8309  lea eax, [ebp + 8]
    X86_AT(c, 0xe8309u);
    c.r[0] = (uint32_t)(c.r[5] + 0x8u);
    // 0e830c  push eax
    X86_AT(c, 0xe830cu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e830d  push dword ptr [0xc427c]
    X86_AT(c, 0xe830du);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xC427Cu))); push32(c, v); }
    // 0e8313  call 0xe9dfc
    X86_AT(c, 0xe8313u);
    push32(c, 0xe8318u); x86_call_known(c, 0xe9dfcu, f_000e9dfc); X86_RET(c, 0xe8318u);
L_e8318:
    X86_TICK(c, 16);
    // 0e8318  leave 
    X86_AT(c, 0xe8318u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0e8319  ret 8
    X86_AT(c, 0xe8319u);
    c.eip = pop32(c); c.r[4] += 0x8u; return;
    x86_fault(c, 0xe82e0u, "ran off the end of a function");
}
void f_000e831c(X86Cpu& c) {
    X86_TICK(c, 20);
    // 0e831c  enter 8, 0
    X86_AT(c, 0xe831cu);
    x86_enter(c, 0x8u, 0x0u, 4);
    // 0e8320  push ebx
    X86_AT(c, 0xe8320u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0e8321  cmp byte ptr [0xc41b3], 0
    X86_AT(c, 0xe8321u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0xC41B3u))), 0x0u, 0, 1);
    // 0e8328  je 0xe8343
    X86_AT(c, 0xe8328u);
    if (x86_cc(c, 4)) { goto L_e8343; }
    X86_TICK(c, 12);
    // 0e832a  push dword ptr [0xc427c]
    X86_AT(c, 0xe832au);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xC427Cu))); push32(c, v); }
    // 0e8330  call 0xe9d72
    X86_AT(c, 0xe8330u);
    push32(c, 0xe8335u); x86_call_known(c, 0xe9d72u, f_000e9d72); X86_RET(c, 0xe8335u);
    X86_TICK(c, 14);
    // 0e8335  add dword ptr [0xc427c], 0xfffffff4
    X86_AT(c, 0xe8335u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xC427Cu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0xFFFFFFF4u, 0, 4)); }
    // 0e833c  call 0xe9d4e
    X86_AT(c, 0xe833cu);
    push32(c, 0xe8341u); x86_call_known(c, 0xe9d4eu, f_000e9d4e); X86_RET(c, 0xe8341u);
    X86_TICK(c, 7);
    // 0e8341  jmp 0xe835e
    X86_AT(c, 0xe8341u);
    goto L_e835e;
L_e8343:
    X86_TICK(c, 16);
    // 0e8343  push dword ptr [0xc427c]
    X86_AT(c, 0xe8343u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xC427Cu))); push32(c, v); }
    // 0e8349  lea ebx, [ebp - 8]
    X86_AT(c, 0xe8349u);
    c.r[3] = (uint32_t)(c.r[5] + 0xFFFFFFF8u);
    // 0e834c  push ebx
    X86_AT(c, 0xe834cu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0e834d  call 0xe9e71
    X86_AT(c, 0xe834du);
    push32(c, 0xe8352u); x86_call_known(c, 0xe9e71u, f_000e9e71); X86_RET(c, 0xe8352u);
    X86_TICK(c, 15);
    // 0e8352  add dword ptr [0xc427c], 0xfffffff4
    X86_AT(c, 0xe8352u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xC427Cu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0xFFFFFFF4u, 0, 4)); }
    // 0e8359  mov eax, dword ptr [ebx]
    X86_AT(c, 0xe8359u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3])));
    // 0e835b  mov edx, dword ptr [ebx + 4]
    X86_AT(c, 0xe835bu);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)));
L_e835e:
    X86_TICK(c, 20);
    // 0e835e  pop ebx
    X86_AT(c, 0xe835eu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0e835f  leave 
    X86_AT(c, 0xe835fu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0e8360  ret 
    X86_AT(c, 0xe8360u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe831cu, "ran off the end of a function");
}
void f_000e836b(X86Cpu& c) {
    X86_TICK(c, 57);
    // 0e836b  push ebp
    X86_AT(c, 0xe836bu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0e836c  mov ebp, esp
    X86_AT(c, 0xe836cu);
    c.r[5] = c.r[4];
    // 0e836e  push esi
    X86_AT(c, 0xe836eu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0e836f  push edi
    X86_AT(c, 0xe836fu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e8370  push ebx
    X86_AT(c, 0xe8370u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0e8371  mov edx, dword ptr [ebp + 8]
    X86_AT(c, 0xe8371u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0e8374  mov al, 0
    X86_AT(c, 0xe8374u);
    s8(c, 0, 0x0u);
    // 0e8376  mov ah, 0x43
    X86_AT(c, 0xe8376u);
    s8(c, 4, 0x43u);
    // 0e8378  clc 
    X86_AT(c, 0xe8378u);
    c.fl &= ~X86_CF;
    // 0e8379  int 0x21
    X86_AT(c, 0xe8379u);
    x86_int(c, 0x21, 0xe837bu);
    X86_TICK(c, 5);
    // 0e837b  jb 0xe8399
    X86_AT(c, 0xe837bu);
    if (x86_cc(c, 2)) { goto L_e8399; }
    X86_TICK(c, 11);
    // 0e837d  mov bl, byte ptr [ebp + 0xc]
    X86_AT(c, 0xe837du);
    s8(c, 3, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))));
    // 0e8380  cmp bl, 0
    X86_AT(c, 0xe8380u);
    (void)x86_sub(c, g8(c, 3), 0x0u, 0, 1);
    // 0e8383  je 0xe8391
    X86_AT(c, 0xe8383u);
    if (x86_cc(c, 4)) { goto L_e8391; }
    X86_TICK(c, 7);
    // 0e8385  test cl, 1
    X86_AT(c, 0xe8385u);
    (void)x86_logic(c, g8(c, 1) & 0x1u, 1);
    // 0e8388  je 0xe8391
    X86_AT(c, 0xe8388u);
    if (x86_cc(c, 4)) { goto L_e8391; }
    X86_TICK(c, 7);
    // 0e838a  test bl, 2
    X86_AT(c, 0xe838au);
    (void)x86_logic(c, g8(c, 3) & 0x2u, 1);
    // 0e838d  je 0xe8391
    X86_AT(c, 0xe838du);
    if (x86_cc(c, 4)) { goto L_e8391; }
    X86_TICK(c, 7);
    // 0e838f  jmp 0xe8395
    X86_AT(c, 0xe838fu);
    goto L_e8395;
L_e8391:
    X86_TICK(c, 9);
    // 0e8391  xor eax, eax
    X86_AT(c, 0xe8391u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v ^ c.r[0], 4); }
    // 0e8393  jmp 0xe83a8
    X86_AT(c, 0xe8393u);
    goto L_e83a8;
L_e8395:
    X86_TICK(c, 2);
    // 0e8395  mov ax, 0xc
    X86_AT(c, 0xe8395u);
    s16(c, 0, 0xCu);
L_e8399:
    X86_TICK(c, 6);
    // 0e8399  and eax, 0xffff
    X86_AT(c, 0xe8399u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0xFFFFu, 4); }
    // 0e839e  mov dword ptr [0xc453a], eax
    X86_AT(c, 0xe839eu);
    wr32((c.sbase[3] + (uint32_t)(0xC453Au)), c.r[0]);
    // 0e83a3  mov eax, 0xffffffff
    X86_AT(c, 0xe83a3u);
    c.r[0] = 0xFFFFFFFFu;
L_e83a8:
    X86_TICK(c, 28);
    // 0e83a8  pop ebx
    X86_AT(c, 0xe83a8u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0e83a9  pop edi
    X86_AT(c, 0xe83a9u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0e83aa  pop esi
    X86_AT(c, 0xe83aau);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0e83ab  mov esp, ebp
    X86_AT(c, 0xe83abu);
    c.r[4] = c.r[5];
    // 0e83ad  pop ebp
    X86_AT(c, 0xe83adu);
    { uint32_t v = pop32(c); c.r[5] = v; }
    // 0e83ae  ret 
    X86_AT(c, 0xe83aeu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe836bu, "ran off the end of a function");
}
void f_000e83bb(X86Cpu& c) {
    X86_TICK(c, 61);
    // 0e83bb  push ebp
    X86_AT(c, 0xe83bbu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0e83bc  mov ebp, esp
    X86_AT(c, 0xe83bcu);
    c.r[5] = c.r[4];
    // 0e83be  push esi
    X86_AT(c, 0xe83beu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0e83bf  push edi
    X86_AT(c, 0xe83bfu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e83c0  push ebx
    X86_AT(c, 0xe83c0u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0e83c1  mov bx, word ptr [ebp + 8]
    X86_AT(c, 0xe83c1u);
    s16(c, 3, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))));
    // 0e83c5  mov cx, 0
    X86_AT(c, 0xe83c5u);
    s16(c, 1, 0x0u);
    // 0e83c9  mov dx, 0
    X86_AT(c, 0xe83c9u);
    s16(c, 2, 0x0u);
    // 0e83cd  mov al, 1
    X86_AT(c, 0xe83cdu);
    s8(c, 0, 0x1u);
    // 0e83cf  mov ah, 0x42
    X86_AT(c, 0xe83cfu);
    s8(c, 4, 0x42u);
    // 0e83d1  clc 
    X86_AT(c, 0xe83d1u);
    c.fl &= ~X86_CF;
    // 0e83d2  int 0x21
    X86_AT(c, 0xe83d2u);
    x86_int(c, 0x21, 0xe83d4u);
    X86_TICK(c, 5);
    // 0e83d4  jb 0xe8423
    X86_AT(c, 0xe83d4u);
    if (x86_cc(c, 2)) { goto L_e8423; }
    X86_TICK(c, 57);
    // 0e83d6  mov ecx, 0xe8439
    X86_AT(c, 0xe83d6u);
    c.r[1] = 0xE8439u;
    // 0e83db  mov word ptr [ecx + 2], dx
    X86_AT(c, 0xe83dbu);
    wr16((c.sbase[3] + (uint32_t)(c.r[1] + 0x2u)), (c.r[2] & 0xFFFFu));
    // 0e83df  mov word ptr [ecx], ax
    X86_AT(c, 0xe83dfu);
    wr16((c.sbase[3] + (uint32_t)(c.r[1])), (c.r[0] & 0xFFFFu));
    // 0e83e2  mov bx, word ptr [ebp + 8]
    X86_AT(c, 0xe83e2u);
    s16(c, 3, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))));
    // 0e83e6  mov cx, 0
    X86_AT(c, 0xe83e6u);
    s16(c, 1, 0x0u);
    // 0e83ea  mov dx, 0
    X86_AT(c, 0xe83eau);
    s16(c, 2, 0x0u);
    // 0e83ee  mov al, 2
    X86_AT(c, 0xe83eeu);
    s8(c, 0, 0x2u);
    // 0e83f0  mov ah, 0x42
    X86_AT(c, 0xe83f0u);
    s8(c, 4, 0x42u);
    // 0e83f2  clc 
    X86_AT(c, 0xe83f2u);
    c.fl &= ~X86_CF;
    // 0e83f3  int 0x21
    X86_AT(c, 0xe83f3u);
    x86_int(c, 0x21, 0xe83f5u);
    X86_TICK(c, 5);
    // 0e83f5  jb 0xe8423
    X86_AT(c, 0xe83f5u);
    if (x86_cc(c, 2)) { goto L_e8423; }
    X86_TICK(c, 63);
    // 0e83f7  mov ecx, 0xe843d
    X86_AT(c, 0xe83f7u);
    c.r[1] = 0xE843Du;
    // 0e83fc  mov word ptr [ecx + 2], dx
    X86_AT(c, 0xe83fcu);
    wr16((c.sbase[3] + (uint32_t)(c.r[1] + 0x2u)), (c.r[2] & 0xFFFFu));
    // 0e8400  mov word ptr [ecx], ax
    X86_AT(c, 0xe8400u);
    wr16((c.sbase[3] + (uint32_t)(c.r[1])), (c.r[0] & 0xFFFFu));
    // 0e8403  mov bx, word ptr [ebp + 8]
    X86_AT(c, 0xe8403u);
    s16(c, 3, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))));
    // 0e8407  mov eax, 0xe8439
    X86_AT(c, 0xe8407u);
    c.r[0] = 0xE8439u;
    // 0e840c  mov cx, word ptr [eax + 2]
    X86_AT(c, 0xe840cu);
    s16(c, 1, rd16((c.sbase[3] + (uint32_t)(c.r[0] + 0x2u))));
    // 0e8410  mov dx, word ptr [eax]
    X86_AT(c, 0xe8410u);
    s16(c, 2, rd16((c.sbase[3] + (uint32_t)(c.r[0]))));
    // 0e8413  mov al, 0
    X86_AT(c, 0xe8413u);
    s8(c, 0, 0x0u);
    // 0e8415  mov ah, 0x42
    X86_AT(c, 0xe8415u);
    s8(c, 4, 0x42u);
    // 0e8417  clc 
    X86_AT(c, 0xe8417u);
    c.fl &= ~X86_CF;
    // 0e8418  int 0x21
    X86_AT(c, 0xe8418u);
    x86_int(c, 0x21, 0xe841au);
    X86_TICK(c, 5);
    // 0e841a  jb 0xe8423
    X86_AT(c, 0xe841au);
    if (x86_cc(c, 2)) { goto L_e8423; }
    X86_TICK(c, 11);
    // 0e841c  mov eax, dword ptr [0xe843d]
    X86_AT(c, 0xe841cu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xE843Du)));
    // 0e8421  jmp 0xe8432
    X86_AT(c, 0xe8421u);
    goto L_e8432;
L_e8423:
    X86_TICK(c, 6);
    // 0e8423  and eax, 0xffff
    X86_AT(c, 0xe8423u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0xFFFFu, 4); }
    // 0e8428  mov dword ptr [0xc453a], eax
    X86_AT(c, 0xe8428u);
    wr32((c.sbase[3] + (uint32_t)(0xC453Au)), c.r[0]);
    // 0e842d  mov eax, 0xffffffff
    X86_AT(c, 0xe842du);
    c.r[0] = 0xFFFFFFFFu;
L_e8432:
    X86_TICK(c, 28);
    // 0e8432  pop ebx
    X86_AT(c, 0xe8432u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0e8433  pop edi
    X86_AT(c, 0xe8433u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0e8434  pop esi
    X86_AT(c, 0xe8434u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0e8435  mov esp, ebp
    X86_AT(c, 0xe8435u);
    c.r[4] = c.r[5];
    // 0e8437  pop ebp
    X86_AT(c, 0xe8437u);
    { uint32_t v = pop32(c); c.r[5] = v; }
    // 0e8438  ret 
    X86_AT(c, 0xe8438u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe83bbu, "ran off the end of a function");
}
void f_000e844a(X86Cpu& c) {
    X86_TICK(c, 51);
    // 0e844a  push ebp
    X86_AT(c, 0xe844au);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0e844b  mov ebp, esp
    X86_AT(c, 0xe844bu);
    c.r[5] = c.r[4];
    // 0e844d  push esi
    X86_AT(c, 0xe844du);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0e844e  push edi
    X86_AT(c, 0xe844eu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e844f  push ebx
    X86_AT(c, 0xe844fu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0e8450  mov al, byte ptr [ebp + 8]
    X86_AT(c, 0xe8450u);
    s8(c, 0, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))));
    // 0e8453  mov byte ptr [0xe846f], al
    X86_AT(c, 0xe8453u);
    wr8((c.sbase[3] + (uint32_t)(0xE846Fu)), g8(c, 0));
    // 0e8458  mov esi, dword ptr [ebp + 0xc]
    X86_AT(c, 0xe8458u);
    c.r[6] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0e845b  mov eax, dword ptr [esi]
    X86_AT(c, 0xe845bu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[6])));
    // 0e845d  mov ebx, dword ptr [esi + 4]
    X86_AT(c, 0xe845du);
    c.r[3] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0x4u)));
    // 0e8460  mov ecx, dword ptr [esi + 8]
    X86_AT(c, 0xe8460u);
    c.r[1] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0x8u)));
    // 0e8463  mov edx, dword ptr [esi + 0xc]
    X86_AT(c, 0xe8463u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0xCu)));
    // 0e8466  mov edi, dword ptr [esi + 0x14]
    X86_AT(c, 0xe8466u);
    c.r[7] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0x14u)));
    // 0e8469  mov esi, dword ptr [esi + 0x10]
    X86_AT(c, 0xe8469u);
    c.r[6] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0x10u)));
    // 0e846c  jmp 0xe846e
    X86_AT(c, 0xe846cu);
    goto L_e846e;
L_e846e:
    X86_TICK(c, 37);
    // 0e846e  int 0
    X86_AT(c, 0xe846eu);
    x86_int(c, 0x0, 0xe8470u);
    X86_TICK(c, 67);
    // 0e8470  push edi
    X86_AT(c, 0xe8470u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e8471  mov edi, dword ptr [ebp + 0x10]
    X86_AT(c, 0xe8471u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u)));
    // 0e8474  mov dword ptr [edi], eax
    X86_AT(c, 0xe8474u);
    wr32((c.sbase[3] + (uint32_t)(c.r[7])), c.r[0]);
    // 0e8476  mov dword ptr [edi + 4], ebx
    X86_AT(c, 0xe8476u);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] + 0x4u)), c.r[3]);
    // 0e8479  mov dword ptr [edi + 8], ecx
    X86_AT(c, 0xe8479u);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] + 0x8u)), c.r[1]);
    // 0e847c  mov dword ptr [edi + 0xc], edx
    X86_AT(c, 0xe847cu);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] + 0xCu)), c.r[2]);
    // 0e847f  mov dword ptr [edi + 0x10], esi
    X86_AT(c, 0xe847fu);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] + 0x10u)), c.r[6]);
    // 0e8482  pushfd 
    X86_AT(c, 0xe8482u);
    push32(c, c.fl & 0x00FCFFFFu);
    // 0e8483  pop dword ptr [edi + 0x18]
    X86_AT(c, 0xe8483u);
    { uint32_t v = pop32(c); wr32((c.sbase[3] + (uint32_t)(c.r[7] + 0x18u)), v); }
    // 0e8486  and dword ptr [edi + 0x18], 1
    X86_AT(c, 0xe8486u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x18u)); uint32_t v = rd32(ea); wr32(ea, x86_logic(c, v & 0x1u, 4)); }
    // 0e848a  pop dword ptr [edi + 0x14]
    X86_AT(c, 0xe848au);
    { uint32_t v = pop32(c); wr32((c.sbase[3] + (uint32_t)(c.r[7] + 0x14u)), v); }
    // 0e848d  pop ebx
    X86_AT(c, 0xe848du);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0e848e  pop edi
    X86_AT(c, 0xe848eu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0e848f  pop esi
    X86_AT(c, 0xe848fu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0e8490  mov esp, ebp
    X86_AT(c, 0xe8490u);
    c.r[4] = c.r[5];
    // 0e8492  pop ebp
    X86_AT(c, 0xe8492u);
    { uint32_t v = pop32(c); c.r[5] = v; }
    // 0e8493  ret 
    X86_AT(c, 0xe8493u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe844au, "ran off the end of a function");
}
void f_000e84e6(X86Cpu& c) {
    X86_TICK(c, 75);
    // 0e84e6  push ebp
    X86_AT(c, 0xe84e6u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0e84e7  mov ebp, esp
    X86_AT(c, 0xe84e7u);
    c.r[5] = c.r[4];
    // 0e84e9  push esi
    X86_AT(c, 0xe84e9u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0e84ea  push edi
    X86_AT(c, 0xe84eau);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e84eb  push ebx
    X86_AT(c, 0xe84ebu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0e84ec  mov esi, dword ptr [ebp + 8]
    X86_AT(c, 0xe84ecu);
    c.r[6] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0e84ef  mov eax, dword ptr [esi]
    X86_AT(c, 0xe84efu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[6])));
    // 0e84f1  mov ebx, dword ptr [esi + 4]
    X86_AT(c, 0xe84f1u);
    c.r[3] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0x4u)));
    // 0e84f4  mov ecx, dword ptr [esi + 8]
    X86_AT(c, 0xe84f4u);
    c.r[1] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0x8u)));
    // 0e84f7  mov edx, dword ptr [esi + 0xc]
    X86_AT(c, 0xe84f7u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0xCu)));
    // 0e84fa  mov edi, dword ptr [esi + 0x14]
    X86_AT(c, 0xe84fau);
    c.r[7] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0x14u)));
    // 0e84fd  mov esi, dword ptr [esi + 0x10]
    X86_AT(c, 0xe84fdu);
    c.r[6] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0x10u)));
    // 0e8500  int 0x21
    X86_AT(c, 0xe8500u);
    x86_int(c, 0x21, 0xe8502u);
    X86_TICK(c, 67);
    // 0e8502  push edi
    X86_AT(c, 0xe8502u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e8503  mov edi, dword ptr [ebp + 0xc]
    X86_AT(c, 0xe8503u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0e8506  mov dword ptr [edi], eax
    X86_AT(c, 0xe8506u);
    wr32((c.sbase[3] + (uint32_t)(c.r[7])), c.r[0]);
    // 0e8508  mov dword ptr [edi + 4], ebx
    X86_AT(c, 0xe8508u);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] + 0x4u)), c.r[3]);
    // 0e850b  mov dword ptr [edi + 8], ecx
    X86_AT(c, 0xe850bu);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] + 0x8u)), c.r[1]);
    // 0e850e  mov dword ptr [edi + 0xc], edx
    X86_AT(c, 0xe850eu);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] + 0xCu)), c.r[2]);
    // 0e8511  mov dword ptr [edi + 0x10], esi
    X86_AT(c, 0xe8511u);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] + 0x10u)), c.r[6]);
    // 0e8514  pushfd 
    X86_AT(c, 0xe8514u);
    push32(c, c.fl & 0x00FCFFFFu);
    // 0e8515  pop dword ptr [edi + 0x18]
    X86_AT(c, 0xe8515u);
    { uint32_t v = pop32(c); wr32((c.sbase[3] + (uint32_t)(c.r[7] + 0x18u)), v); }
    // 0e8518  and dword ptr [edi + 0x18], 1
    X86_AT(c, 0xe8518u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x18u)); uint32_t v = rd32(ea); wr32(ea, x86_logic(c, v & 0x1u, 4)); }
    // 0e851c  pop dword ptr [edi + 0x14]
    X86_AT(c, 0xe851cu);
    { uint32_t v = pop32(c); wr32((c.sbase[3] + (uint32_t)(c.r[7] + 0x14u)), v); }
    // 0e851f  pop ebx
    X86_AT(c, 0xe851fu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0e8520  pop edi
    X86_AT(c, 0xe8520u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0e8521  pop esi
    X86_AT(c, 0xe8521u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0e8522  mov esp, ebp
    X86_AT(c, 0xe8522u);
    c.r[4] = c.r[5];
    // 0e8524  pop ebp
    X86_AT(c, 0xe8524u);
    { uint32_t v = pop32(c); c.r[5] = v; }
    // 0e8525  ret 
    X86_AT(c, 0xe8525u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe84e6u, "ran off the end of a function");
}
void f_000e85ac(X86Cpu& c) {
    X86_TICK(c, 32);
    // 0e85ac  push ebp
    X86_AT(c, 0xe85acu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0e85ad  mov ebp, esp
    X86_AT(c, 0xe85adu);
    c.r[5] = c.r[4];
    // 0e85af  push ebx
    X86_AT(c, 0xe85afu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0e85b0  push esi
    X86_AT(c, 0xe85b0u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0e85b1  push edi
    X86_AT(c, 0xe85b1u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e85b2  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0xe85b2u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0e85b5  mov esi, edi
    X86_AT(c, 0xe85b5u);
    c.r[6] = c.r[7];
    // 0e85b7  and byte ptr [esi + 0xc], 0x7f
    X86_AT(c, 0xe85b7u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[6] + 0xCu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v & 0x7Fu, 1)); }
    // 0e85bb  mov eax, 0xc42dc
    X86_AT(c, 0xe85bbu);
    c.r[0] = 0xC42DCu;
    // 0e85c0  cmp eax, edi
    X86_AT(c, 0xe85c0u);
    (void)x86_sub(c, c.r[0], c.r[7], 0, 4);
    // 0e85c2  jne 0xe85dc
    X86_AT(c, 0xe85c2u);
    if (x86_cc(c, 5)) { goto L_e85dc; }
    X86_TICK(c, 13);
    // 0e85c4  mov al, byte ptr [esi + 0xe]
    X86_AT(c, 0xe85c4u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[6] + 0xEu))));
    // 0e85c7  push eax
    X86_AT(c, 0xe85c7u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e85c8  call 0xe9b3c
    X86_AT(c, 0xe85c8u);
    push32(c, 0xe85cdu); x86_call_known(c, 0xe9b3cu, f_000e9b3c); X86_RET(c, 0xe85cdu);
    X86_TICK(c, 10);
    // 0e85cd  xchg ebx, eax
    X86_AT(c, 0xe85cdu);
    { uint32_t t = c.r[3]; c.r[3] = c.r[0]; c.r[0] = t; }
    // 0e85ce  cmp bl, 1
    X86_AT(c, 0xe85ceu);
    (void)x86_sub(c, g8(c, 3), 0x1u, 0, 1);
    // 0e85d1  je 0xe85dc
    X86_AT(c, 0xe85d1u);
    if (x86_cc(c, 4)) { goto L_e85dc; }
    X86_TICK(c, 7);
    // 0e85d3  cmp bl, 2
    X86_AT(c, 0xe85d3u);
    (void)x86_sub(c, g8(c, 3), 0x2u, 0, 1);
    // 0e85d6  je 0xe85dc
    X86_AT(c, 0xe85d6u);
    if (x86_cc(c, 4)) { goto L_e85dc; }
    X86_TICK(c, 7);
    // 0e85d8  or byte ptr [esi + 0xc], 1
    X86_AT(c, 0xe85d8u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[6] + 0xCu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | 0x1u, 1)); }
L_e85dc:
    X86_TICK(c, 9);
    // 0e85dc  mov eax, 0xc42f0
    X86_AT(c, 0xe85dcu);
    c.r[0] = 0xC42F0u;
    // 0e85e1  cmp eax, edi
    X86_AT(c, 0xe85e1u);
    (void)x86_sub(c, c.r[0], c.r[7], 0, 4);
    // 0e85e3  jne 0xe85fc
    X86_AT(c, 0xe85e3u);
    if (x86_cc(c, 5)) { goto L_e85fc; }
    X86_TICK(c, 13);
    // 0e85e5  mov al, byte ptr [esi + 0xe]
    X86_AT(c, 0xe85e5u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[6] + 0xEu))));
    // 0e85e8  push eax
    X86_AT(c, 0xe85e8u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e85e9  call 0xe9b3c
    X86_AT(c, 0xe85e9u);
    push32(c, 0xe85eeu); x86_call_known(c, 0xe9b3cu, f_000e9b3c); X86_RET(c, 0xe85eeu);
    X86_TICK(c, 7);
    // 0e85ee  cmp al, 2
    X86_AT(c, 0xe85eeu);
    (void)x86_sub(c, g8(c, 0), 0x2u, 0, 1);
    // 0e85f0  jne 0xe85f8
    X86_AT(c, 0xe85f0u);
    if (x86_cc(c, 5)) { goto L_e85f8; }
    X86_TICK(c, 14);
    // 0e85f2  and byte ptr [esi + 0xc], 0xfe
    X86_AT(c, 0xe85f2u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[6] + 0xCu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v & 0xFEu, 1)); }
    // 0e85f6  jmp 0xe85fc
    X86_AT(c, 0xe85f6u);
    goto L_e85fc;
L_e85f8:
    X86_TICK(c, 7);
    // 0e85f8  or byte ptr [esi + 0xc], 1
    X86_AT(c, 0xe85f8u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[6] + 0xCu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | 0x1u, 1)); }
L_e85fc:
    X86_TICK(c, 9);
    // 0e85fc  mov eax, 0xc4304
    X86_AT(c, 0xe85fcu);
    c.r[0] = 0xC4304u;
    // 0e8601  cmp eax, edi
    X86_AT(c, 0xe8601u);
    (void)x86_sub(c, c.r[0], c.r[7], 0, 4);
    // 0e8603  jne 0xe8609
    X86_AT(c, 0xe8603u);
    if (x86_cc(c, 5)) { goto L_e8609; }
    X86_TICK(c, 7);
    // 0e8605  and byte ptr [esi + 0xc], 0xfe
    X86_AT(c, 0xe8605u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[6] + 0xCu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v & 0xFEu, 1)); }
L_e8609:
    X86_TICK(c, 12);
    // 0e8609  test byte ptr [esi + 0xc], 1
    X86_AT(c, 0xe8609u);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(c.r[6] + 0xCu))) & 0x1u, 1);
    // 0e860d  je 0xe8631
    X86_AT(c, 0xe860du);
    if (x86_cc(c, 4)) { goto L_e8631; }
    X86_TICK(c, 9);
    // 0e860f  push 0x201
    X86_AT(c, 0xe860fu);
    { uint32_t v = 0x201u; push32(c, v); }
    // 0e8614  call 0xe77d8
    X86_AT(c, 0xe8614u);
    push32(c, 0xe8619u); x86_call_known(c, 0xe77d8u, f_000e77d8); X86_RET(c, 0xe8619u);
    X86_TICK(c, 13);
    // 0e8619  mov dword ptr [esi + 8], eax
    X86_AT(c, 0xe8619u);
    wr32((c.sbase[3] + (uint32_t)(c.r[6] + 0x8u)), c.r[0]);
    // 0e861c  pop ecx
    X86_AT(c, 0xe861cu);
    { uint32_t v = pop32(c); c.r[1] = v; }
    // 0e861d  and eax, eax
    X86_AT(c, 0xe861du);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0e861f  jne 0xe8625
    X86_AT(c, 0xe861fu);
    if (x86_cc(c, 5)) { goto L_e8625; }
    X86_TICK(c, 7);
    // 0e8621  and byte ptr [esi + 0xc], 0xfe
    X86_AT(c, 0xe8621u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[6] + 0xCu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v & 0xFEu, 1)); }
L_e8625:
    X86_TICK(c, 8);
    // 0e8625  mov eax, dword ptr [esi + 8]
    X86_AT(c, 0xe8625u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0x8u)));
    // 0e8628  mov dword ptr [esi], eax
    X86_AT(c, 0xe8628u);
    wr32((c.sbase[3] + (uint32_t)(c.r[6])), c.r[0]);
    // 0e862a  mov dword ptr [esi + 4], 0xffffffff
    X86_AT(c, 0xe862au);
    wr32((c.sbase[3] + (uint32_t)(c.r[6] + 0x4u)), 0xFFFFFFFFu);
L_e8631:
    X86_TICK(c, 30);
    // 0e8631  mov word ptr [esi + 0x10], 0xffff
    X86_AT(c, 0xe8631u);
    wr16((c.sbase[3] + (uint32_t)(c.r[6] + 0x10u)), 0xFFFFu);
    // 0e8637  pop edi
    X86_AT(c, 0xe8637u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0e8638  pop esi
    X86_AT(c, 0xe8638u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0e8639  pop ebx
    X86_AT(c, 0xe8639u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0e863a  leave 
    X86_AT(c, 0xe863au);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0e863b  ret 4
    X86_AT(c, 0xe863bu);
    c.eip = pop32(c); c.r[4] += 0x4u; return;
    x86_fault(c, 0xe85acu, "ran off the end of a function");
}
void f_000e8658(X86Cpu& c) {
    X86_TICK(c, 25);
    // 0e8658  push ebp
    X86_AT(c, 0xe8658u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0e8659  mov ebp, esp
    X86_AT(c, 0xe8659u);
    c.r[5] = c.r[4];
    // 0e865b  push ebx
    X86_AT(c, 0xe865bu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0e865c  push esi
    X86_AT(c, 0xe865cu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0e865d  push edi
    X86_AT(c, 0xe865du);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e865e  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0xe865eu);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0e8661  mov esi, dword ptr [ebp + 0xc]
    X86_AT(c, 0xe8661u);
    c.r[6] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0e8664  jmp 0xe8682
    X86_AT(c, 0xe8664u);
    goto L_e8682;
L_e8666:
    X86_TICK(c, 9);
    // 0e8666  mov eax, 0xa
    X86_AT(c, 0xe8666u);
    c.r[0] = 0xAu;
    // 0e866b  cmp eax, esi
    X86_AT(c, 0xe866bu);
    (void)x86_sub(c, c.r[0], c.r[6], 0, 4);
    // 0e866d  jb 0xe8671
    X86_AT(c, 0xe866du);
    if (x86_cc(c, 2)) { goto L_e8671; }
    X86_TICK(c, 2);
    // 0e866f  mov eax, esi
    X86_AT(c, 0xe866fu);
    c.r[0] = c.r[6];
L_e8671:
    X86_TICK(c, 18);
    // 0e8671  xchg ebx, eax
    X86_AT(c, 0xe8671u);
    { uint32_t t = c.r[3]; c.r[3] = c.r[0]; c.r[0] = t; }
    // 0e8672  push ebx
    X86_AT(c, 0xe8672u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0e8673  push edi
    X86_AT(c, 0xe8673u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e8674  mov ecx, dword ptr [0xc40e4]
    X86_AT(c, 0xe8674u);
    c.r[1] = rd32((c.sbase[3] + (uint32_t)(0xC40E4u)));
    // 0e867a  call dword ptr [0xc40e0]
    X86_AT(c, 0xe867au);
    { uint32_t t = rd32((c.sbase[3] + (uint32_t)(0xC40E0u))); push32(c, 0xe8680u); x86_call(c, t); X86_RET(c, 0xe8680u); }
    X86_TICK(c, 2);
    // 0e8680  sub esi, ebx
    X86_AT(c, 0xe8680u);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[3], 0, 4); }
L_e8682:
    X86_TICK(c, 7);
    // 0e8682  and esi, esi
    X86_AT(c, 0xe8682u);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & c.r[6], 4); }
    // 0e8684  ja 0xe8666
    X86_AT(c, 0xe8684u);
    if (x86_cc(c, 7)) { X86_POLL(c, 0xe8666u); goto L_e8666; }
    X86_TICK(c, 28);
    // 0e8686  pop edi
    X86_AT(c, 0xe8686u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0e8687  pop esi
    X86_AT(c, 0xe8687u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0e8688  pop ebx
    X86_AT(c, 0xe8688u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0e8689  leave 
    X86_AT(c, 0xe8689u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0e868a  ret 8
    X86_AT(c, 0xe868au);
    c.eip = pop32(c); c.r[4] += 0x8u; return;
    x86_fault(c, 0xe8658u, "ran off the end of a function");
}
void f_000e86a0(X86Cpu& c) {
    X86_TICK(c, 23);
    // 0e86a0  push ebp
    X86_AT(c, 0xe86a0u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0e86a1  mov ebp, esp
    X86_AT(c, 0xe86a1u);
    c.r[5] = c.r[4];
    // 0e86a3  push esi
    X86_AT(c, 0xe86a3u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0e86a4  push edi
    X86_AT(c, 0xe86a4u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e86a5  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0xe86a5u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0e86a8  mov eax, dword ptr [0xc40d0]
    X86_AT(c, 0xe86a8u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xC40D0u)));
    // 0e86ad  cmp eax, 0xffff
    X86_AT(c, 0xe86adu);
    (void)x86_sub(c, c.r[0], 0xFFFFu, 0, 4);
    // 0e86b2  je 0xe86e6
    X86_AT(c, 0xe86b2u);
    if (x86_cc(c, 4)) { goto L_e86e6; }
    X86_TICK(c, 7);
    // 0e86b4  cmp edi, eax
    X86_AT(c, 0xe86b4u);
    (void)x86_sub(c, c.r[7], c.r[0], 0, 4);
    // 0e86b6  jae 0xe86e6
    X86_AT(c, 0xe86b6u);
    if (x86_cc(c, 3)) { goto L_e86e6; }
    X86_TICK(c, 24);
    // 0e86b8  xchg esi, eax
    X86_AT(c, 0xe86b8u);
    { uint32_t t = c.r[6]; c.r[6] = c.r[0]; c.r[0] = t; }
    // 0e86b9  sub esi, edi
    X86_AT(c, 0xe86b9u);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[7], 0, 4); }
    // 0e86bb  add dword ptr [0xc40dc], esi
    X86_AT(c, 0xe86bbu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xC40DCu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[6], 0, 4)); }
    // 0e86c1  test byte ptr [0xc40cc], 0x10
    X86_AT(c, 0xe86c1u);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(0xC40CCu))) & 0x10u, 1);
    // 0e86c8  je 0xe86db
    X86_AT(c, 0xe86c8u);
    if (x86_cc(c, 4)) { goto L_e86db; }
    X86_TICK(c, 12);
    // 0e86ca  test byte ptr [0xc40cc], 1
    X86_AT(c, 0xe86cau);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(0xC40CCu))) & 0x1u, 1);
    // 0e86d1  jne 0xe86db
    X86_AT(c, 0xe86d1u);
    if (x86_cc(c, 5)) { goto L_e86db; }
    X86_TICK(c, 11);
    // 0e86d3  push esi
    X86_AT(c, 0xe86d3u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0e86d4  push 0xc40e8
    X86_AT(c, 0xe86d4u);
    { uint32_t v = 0xC40E8u; push32(c, v); }
    // 0e86d9  jmp 0xe86e1
    X86_AT(c, 0xe86d9u);
    goto L_e86e1;
L_e86db:
    X86_TICK(c, 4);
    // 0e86db  push esi
    X86_AT(c, 0xe86dbu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0e86dc  push 0xc40f2
    X86_AT(c, 0xe86dcu);
    { uint32_t v = 0xC40F2u; push32(c, v); }
L_e86e1:
    X86_TICK(c, 7);
    // 0e86e1  call 0xe8658
    X86_AT(c, 0xe86e1u);
    push32(c, 0xe86e6u); x86_call_known(c, 0xe8658u, f_000e8658); X86_RET(c, 0xe86e6u);
L_e86e6:
    X86_TICK(c, 24);
    // 0e86e6  pop edi
    X86_AT(c, 0xe86e6u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0e86e7  pop esi
    X86_AT(c, 0xe86e7u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0e86e8  leave 
    X86_AT(c, 0xe86e8u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0e86e9  ret 4
    X86_AT(c, 0xe86e9u);
    c.eip = pop32(c); c.r[4] += 0x4u; return;
    x86_fault(c, 0xe86a0u, "ran off the end of a function");
}
void f_000e870c(X86Cpu& c) {
    X86_TICK(c, 25);
    // 0e870c  push ebp
    X86_AT(c, 0xe870cu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0e870d  mov ebp, esp
    X86_AT(c, 0xe870du);
    c.r[5] = c.r[4];
    // 0e870f  push ecx
    X86_AT(c, 0xe870fu);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 0e8710  sub esp, 8
    X86_AT(c, 0xe8710u);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, 0x8u, 0, 4); }
    // 0e8713  push ebx
    X86_AT(c, 0xe8713u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0e8714  mov eax, dword ptr [0xc44f8]
    X86_AT(c, 0xe8714u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xC44F8u)));
    // 0e8719  mov bl, byte ptr [eax]
    X86_AT(c, 0xe8719u);
    s8(c, 3, rd8((c.sbase[3] + (uint32_t)(c.r[0]))));
    // 0e871b  cmp bl, 0x2a
    X86_AT(c, 0xe871bu);
    (void)x86_sub(c, g8(c, 3), 0x2Au, 0, 1);
    // 0e871e  je 0xe8742
    X86_AT(c, 0xe871eu);
    if (x86_cc(c, 4)) { goto L_e8742; }
    X86_TICK(c, 7);
    // 0e8720  cmp bl, 0x31
    X86_AT(c, 0xe8720u);
    (void)x86_sub(c, g8(c, 3), 0x31u, 0, 1);
    // 0e8723  jb 0xe872a
    X86_AT(c, 0xe8723u);
    if (x86_cc(c, 2)) { goto L_e872a; }
    X86_TICK(c, 7);
    // 0e8725  cmp bl, 0x39
    X86_AT(c, 0xe8725u);
    (void)x86_sub(c, g8(c, 3), 0x39u, 0, 1);
    // 0e8728  jbe 0xe8742
    X86_AT(c, 0xe8728u);
    if (x86_cc(c, 6)) { goto L_e8742; }
L_e872a:
    X86_TICK(c, 12);
    // 0e872a  cmp byte ptr [ebp + 0xc], 0
    X86_AT(c, 0xe872au);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))), 0x0u, 0, 1);
    // 0e872e  je 0xe87e8
    X86_AT(c, 0xe872eu);
    if (x86_cc(c, 4)) { goto L_e87e8; }
    X86_TICK(c, 16);
    // 0e8734  mov eax, dword ptr [0xc44f8]
    X86_AT(c, 0xe8734u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xC44F8u)));
    // 0e8739  cmp byte ptr [eax], 0x30
    X86_AT(c, 0xe8739u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[0]))), 0x30u, 0, 1);
    // 0e873c  jne 0xe87e8
    X86_AT(c, 0xe873cu);
    if (x86_cc(c, 5)) { goto L_e87e8; }
L_e8742:
    X86_TICK(c, 17);
    // 0e8742  mov eax, dword ptr [0xc44f8]
    X86_AT(c, 0xe8742u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xC44F8u)));
    // 0e8747  mov al, byte ptr [eax]
    X86_AT(c, 0xe8747u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[0]))));
    // 0e8749  mov byte ptr [ebp - 9], al
    X86_AT(c, 0xe8749u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF7u)), g8(c, 0));
    // 0e874c  cmp al, 0x30
    X86_AT(c, 0xe874cu);
    (void)x86_sub(c, g8(c, 0), 0x30u, 0, 1);
    // 0e874e  jb 0xe8797
    X86_AT(c, 0xe874eu);
    if (x86_cc(c, 2)) { goto L_e8797; }
    X86_TICK(c, 7);
    // 0e8750  cmp al, 0x39
    X86_AT(c, 0xe8750u);
    (void)x86_sub(c, g8(c, 0), 0x39u, 0, 1);
    // 0e8752  ja 0xe8797
    X86_AT(c, 0xe8752u);
    if (x86_cc(c, 7)) { goto L_e8797; }
    X86_TICK(c, 9);
    // 0e8754  mov dword ptr [ebp - 8], 0
    X86_AT(c, 0xe8754u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), 0x0u);
    // 0e875b  jmp 0xe877c
    X86_AT(c, 0xe875bu);
    goto L_e877c;
L_e875d:
    X86_TICK(c, 30);
    // 0e875d  mov eax, dword ptr [ebp - 8]
    X86_AT(c, 0xe875du);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)));
    // 0e8760  lea eax, [eax + eax*4]
    X86_AT(c, 0xe8760u);
    c.r[0] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0e8763  add eax, eax
    X86_AT(c, 0xe8763u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, c.r[0], 0, 4); }
    // 0e8765  mov edx, dword ptr [0xc44f8]
    X86_AT(c, 0xe8765u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(0xC44F8u)));
    // 0e876b  movzx ecx, byte ptr [edx]
    X86_AT(c, 0xe876bu);
    c.r[1] = rd8((c.sbase[3] + (uint32_t)(c.r[2])));
    // 0e876e  add ecx, eax
    X86_AT(c, 0xe876eu);
    { uint32_t v = c.r[1]; c.r[1] = x86_add(c, v, c.r[0], 0, 4); }
    // 0e8770  sub ecx, 0x30
    X86_AT(c, 0xe8770u);
    { uint32_t v = c.r[1]; c.r[1] = x86_sub(c, v, 0x30u, 0, 4); }
    // 0e8773  mov dword ptr [ebp - 8], ecx
    X86_AT(c, 0xe8773u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), c.r[1]);
    // 0e8776  inc dword ptr [0xc44f8]
    X86_AT(c, 0xe8776u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xC44F8u)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
L_e877c:
    X86_TICK(c, 17);
    // 0e877c  mov eax, dword ptr [0xc44f8]
    X86_AT(c, 0xe877cu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xC44F8u)));
    // 0e8781  mov al, byte ptr [eax]
    X86_AT(c, 0xe8781u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[0]))));
    // 0e8783  mov byte ptr [ebp - 0xa], al
    X86_AT(c, 0xe8783u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF6u)), g8(c, 0));
    // 0e8786  cmp al, 0x30
    X86_AT(c, 0xe8786u);
    (void)x86_sub(c, g8(c, 0), 0x30u, 0, 1);
    // 0e8788  jb 0xe87fe
    X86_AT(c, 0xe8788u);
    if (x86_cc(c, 2)) { goto L_e87fe; }
    X86_TICK(c, 7);
    // 0e878e  cmp al, 0x39
    X86_AT(c, 0xe878eu);
    (void)x86_sub(c, g8(c, 0), 0x39u, 0, 1);
    // 0e8790  jbe 0xe875d
    X86_AT(c, 0xe8790u);
    if (x86_cc(c, 6)) { X86_POLL(c, 0xe875du); goto L_e875d; }
    X86_TICK(c, 7);
    // 0e8792  jmp 0xe87fe
    X86_AT(c, 0xe8792u);
    goto L_e87fe;
L_e8797:
    X86_TICK(c, 16);
    // 0e8797  mov eax, dword ptr [0xc44f8]
    X86_AT(c, 0xe8797u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xC44F8u)));
    // 0e879c  cmp byte ptr [eax], 0x2a
    X86_AT(c, 0xe879cu);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[0]))), 0x2Au, 0, 1);
    // 0e879f  jne 0xe87fe
    X86_AT(c, 0xe879fu);
    if (x86_cc(c, 5)) { goto L_e87fe; }
    X86_TICK(c, 16);
    // 0e87a1  mov eax, dword ptr [0xc44e4]
    X86_AT(c, 0xe87a1u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xC44E4u)));
    // 0e87a6  cmp dword ptr [eax], 0
    X86_AT(c, 0xe87a6u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[0]))), 0x0u, 0, 4);
    // 0e87a9  jge 0xe87cf
    X86_AT(c, 0xe87a9u);
    if (x86_cc(c, 13)) { goto L_e87cf; }
    X86_TICK(c, 12);
    // 0e87ab  cmp byte ptr [ebp + 8], 0x50
    X86_AT(c, 0xe87abu);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))), 0x50u, 0, 1);
    // 0e87af  jne 0xe87ba
    X86_AT(c, 0xe87afu);
    if (x86_cc(c, 5)) { goto L_e87ba; }
    X86_TICK(c, 9);
    // 0e87b1  mov dword ptr [ebp - 8], 0xffff
    X86_AT(c, 0xe87b1u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), 0xFFFFu);
    // 0e87b8  jmp 0xe87d9
    X86_AT(c, 0xe87b8u);
    goto L_e87d9;
L_e87ba:
    X86_TICK(c, 26);
    // 0e87ba  mov eax, dword ptr [0xc44e4]
    X86_AT(c, 0xe87bau);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xC44E4u)));
    // 0e87bf  mov eax, dword ptr [eax]
    X86_AT(c, 0xe87bfu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[0])));
    // 0e87c1  neg eax
    X86_AT(c, 0xe87c1u);
    { uint32_t v = c.r[0]; c.r[0] = x86_neg(c, v, 4); }
    // 0e87c3  mov dword ptr [ebp - 8], eax
    X86_AT(c, 0xe87c3u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), c.r[0]);
    // 0e87c6  or byte ptr [0xc40cc], 1
    X86_AT(c, 0xe87c6u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xC40CCu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | 0x1u, 1)); }
    // 0e87cd  jmp 0xe87d9
    X86_AT(c, 0xe87cdu);
    goto L_e87d9;
L_e87cf:
    X86_TICK(c, 10);
    // 0e87cf  mov eax, dword ptr [0xc44e4]
    X86_AT(c, 0xe87cfu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xC44E4u)));
    // 0e87d4  mov eax, dword ptr [eax]
    X86_AT(c, 0xe87d4u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[0])));
    // 0e87d6  mov dword ptr [ebp - 8], eax
    X86_AT(c, 0xe87d6u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), c.r[0]);
L_e87d9:
    X86_TICK(c, 20);
    // 0e87d9  add dword ptr [0xc44e4], 4
    X86_AT(c, 0xe87d9u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xC44E4u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0x4u, 0, 4)); }
    // 0e87e0  inc dword ptr [0xc44f8]
    X86_AT(c, 0xe87e0u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xC44F8u)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0e87e6  jmp 0xe87fe
    X86_AT(c, 0xe87e6u);
    goto L_e87fe;
L_e87e8:
    X86_TICK(c, 12);
    // 0e87e8  cmp byte ptr [ebp + 8], 0x50
    X86_AT(c, 0xe87e8u);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))), 0x50u, 0, 1);
    // 0e87ec  jne 0xe87f7
    X86_AT(c, 0xe87ecu);
    if (x86_cc(c, 5)) { goto L_e87f7; }
    X86_TICK(c, 9);
    // 0e87ee  mov dword ptr [ebp - 8], 0
    X86_AT(c, 0xe87eeu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), 0x0u);
    // 0e87f5  jmp 0xe87fe
    X86_AT(c, 0xe87f5u);
    goto L_e87fe;
L_e87f7:
    X86_TICK(c, 2);
    // 0e87f7  mov dword ptr [ebp - 8], 0xffff
    X86_AT(c, 0xe87f7u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), 0xFFFFu);
L_e87fe:
    X86_TICK(c, 24);
    // 0e87fe  mov eax, dword ptr [ebp - 8]
    X86_AT(c, 0xe87feu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)));
    // 0e8801  pop ebx
    X86_AT(c, 0xe8801u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0e8802  leave 
    X86_AT(c, 0xe8802u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0e8803  ret 8
    X86_AT(c, 0xe8803u);
    c.eip = pop32(c); c.r[4] += 0x8u; return;
    x86_fault(c, 0xe870cu, "ran off the end of a function");
}
void f_000e881c(X86Cpu& c) {
    X86_TICK(c, 20);
    // 0e881c  push ebp
    X86_AT(c, 0xe881cu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0e881d  mov ebp, esp
    X86_AT(c, 0xe881du);
    c.r[5] = c.r[4];
    // 0e881f  push ecx
    X86_AT(c, 0xe881fu);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 0e8820  push eax
    X86_AT(c, 0xe8820u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e8821  push ebx
    X86_AT(c, 0xe8821u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0e8822  push esi
    X86_AT(c, 0xe8822u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0e8823  push edi
    X86_AT(c, 0xe8823u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e8824  mov eax, dword ptr [ebp + 8]
    X86_AT(c, 0xe8824u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0e8827  mov dword ptr [0xc44f8], eax
    X86_AT(c, 0xe8827u);
    wr32((c.sbase[3] + (uint32_t)(0xC44F8u)), c.r[0]);
L_e882c:
    X86_TICK(c, 29);
    // 0e882c  sub eax, eax
    X86_AT(c, 0xe882cu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0e882e  mov byte ptr [0xc40cc], al
    X86_AT(c, 0xe882eu);
    wr8((c.sbase[3] + (uint32_t)(0xC40CCu)), g8(c, 0));
    // 0e8833  mov edx, 0xffff
    X86_AT(c, 0xe8833u);
    c.r[2] = 0xFFFFu;
    // 0e8838  mov dword ptr [0xc40d0], edx
    X86_AT(c, 0xe8838u);
    wr32((c.sbase[3] + (uint32_t)(0xC40D0u)), c.r[2]);
    // 0e883e  mov dword ptr [0xc40d4], edx
    X86_AT(c, 0xe883eu);
    wr32((c.sbase[3] + (uint32_t)(0xC40D4u)), c.r[2]);
    // 0e8844  mov byte ptr [0xc40d8], 1
    X86_AT(c, 0xe8844u);
    wr8((c.sbase[3] + (uint32_t)(0xC40D8u)), 0x1u);
    // 0e884b  mov edi, eax
    X86_AT(c, 0xe884bu);
    c.r[7] = c.r[0];
    // 0e884d  mov edx, dword ptr [0xc44f8]
    X86_AT(c, 0xe884du);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(0xC44F8u)));
    // 0e8853  cmp al, byte ptr [edx]
    X86_AT(c, 0xe8853u);
    (void)x86_sub(c, g8(c, 0), rd8((c.sbase[3] + (uint32_t)(c.r[2]))), 0, 1);
    // 0e8855  je 0xe8a04
    X86_AT(c, 0xe8855u);
    if (x86_cc(c, 4)) { goto L_e8a04; }
    X86_TICK(c, 16);
    // 0e885b  mov eax, dword ptr [0xc44f8]
    X86_AT(c, 0xe885bu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xC44F8u)));
    // 0e8860  cmp byte ptr [eax], 0x25
    X86_AT(c, 0xe8860u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[0]))), 0x25u, 0, 1);
    // 0e8863  je 0xe88a8
    X86_AT(c, 0xe8863u);
    if (x86_cc(c, 4)) { goto L_e88a8; }
    X86_TICK(c, 28);
    // 0e8865  mov edx, dword ptr [0xc44f0]
    X86_AT(c, 0xe8865u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(0xC44F0u)));
    // 0e886b  mov al, 0x25
    X86_AT(c, 0xe886bu);
    s8(c, 0, 0x25u);
    // 0e886d  mov ecx, dword ptr [0xc44f8]
    X86_AT(c, 0xe886du);
    c.r[1] = rd32((c.sbase[3] + (uint32_t)(0xC44F8u)));
    // 0e8873  push edi
    X86_AT(c, 0xe8873u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e8874  mov edi, ecx
    X86_AT(c, 0xe8874u);
    c.r[7] = c.r[1];
    // 0e8876  mov ecx, edx
    X86_AT(c, 0xe8876u);
    c.r[1] = c.r[2];
    // 0e8878  scasb al, byte ptr es:[edi]
    X86_AT(c, 0xe8878u);
    x86_string(c, 4, 1, 242, 4, 3);
    // 0e887a  jne 0xe887f
    X86_AT(c, 0xe887au);
    if (x86_cc(c, 5)) { goto L_e887f; }
    X86_TICK(c, 4);
    // 0e887c  inc ecx
    X86_AT(c, 0xe887cu);
    { uint32_t v = c.r[1]; c.r[1] = x86_inc(c, v, 4); }
    // 0e887d  sub edx, ecx
    X86_AT(c, 0xe887du);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[1], 0, 4); }
L_e887f:
    X86_TICK(c, 41);
    // 0e887f  pop edi
    X86_AT(c, 0xe887fu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0e8880  mov edi, edx
    X86_AT(c, 0xe8880u);
    c.r[7] = c.r[2];
    // 0e8882  mov eax, dword ptr [0xc44f8]
    X86_AT(c, 0xe8882u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xC44F8u)));
    // 0e8887  mov dword ptr [0xc44e8], eax
    X86_AT(c, 0xe8887u);
    wr32((c.sbase[3] + (uint32_t)(0xC44E8u)), c.r[0]);
    // 0e888c  mov dword ptr [0xc44ec], edi
    X86_AT(c, 0xe888cu);
    wr32((c.sbase[3] + (uint32_t)(0xC44ECu)), c.r[7]);
    // 0e8892  add dword ptr [0xc44f8], edi
    X86_AT(c, 0xe8892u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xC44F8u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[7], 0, 4)); }
    // 0e8898  sub dword ptr [0xc44f0], edi
    X86_AT(c, 0xe8898u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xC44F0u)); uint32_t v = rd32(ea); wr32(ea, x86_sub(c, v, c.r[7], 0, 4)); }
    // 0e889e  push 0x30
    X86_AT(c, 0xe889eu);
    { uint32_t v = 0x30u; push32(c, v); }
    // 0e88a0  mov ecx, dword ptr [ebp + 0x10]
    X86_AT(c, 0xe88a0u);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u)));
    // 0e88a3  call dword ptr [ebp + 0xc]
    X86_AT(c, 0xe88a3u);
    { uint32_t t = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))); push32(c, 0xe88a6u); x86_call(c, t); X86_RET(c, 0xe88a6u); }
    X86_TICK(c, 7);
    // 0e88a6  jmp 0xe882c
    X86_AT(c, 0xe88a6u);
    X86_POLL(c, 0xe882cu); goto L_e882c;
L_e88a8:
    X86_TICK(c, 6);
    // 0e88a8  mov esi, dword ptr [0xc44f8]
    X86_AT(c, 0xe88a8u);
    c.r[6] = rd32((c.sbase[3] + (uint32_t)(0xC44F8u)));
    // 0e88ae  sub ebx, ebx
    X86_AT(c, 0xe88aeu);
    { uint32_t v = c.r[3]; c.r[3] = x86_sub(c, v, c.r[3], 0, 4); }
L_e88b0:
    X86_TICK(c, 25);
    // 0e88b0  inc dword ptr [0xc44f8]
    X86_AT(c, 0xe88b0u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xC44F8u)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0e88b6  mov eax, dword ptr [0xc44f8]
    X86_AT(c, 0xe88b6u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xC44F8u)));
    // 0e88bb  movzx eax, byte ptr [eax]
    X86_AT(c, 0xe88bbu);
    c.r[0] = rd8((c.sbase[3] + (uint32_t)(c.r[0])));
    // 0e88be  sub eax, 0x20
    X86_AT(c, 0xe88beu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, 0x20u, 0, 4); }
    // 0e88c1  cmp eax, 0x10
    X86_AT(c, 0xe88c1u);
    (void)x86_sub(c, c.r[0], 0x10u, 0, 4);
    // 0e88c4  ja 0xe8943
    X86_AT(c, 0xe88c4u);
    if (x86_cc(c, 7)) { goto L_e8943; }
    X86_TICK(c, 7);
    // 0e88ca  jmp dword ptr cs:[eax*4 + 0xe88d2]
    X86_AT(c, 0xe88cau);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xE88D2u)));
      switch (t) {
      case 0xe8916u: goto L_e8916;
      case 0xe891fu: goto L_e891f;
      case 0xe8928u: goto L_e8928;
      case 0xe8931u: goto L_e8931;
      case 0xe893au: goto L_e893a;
      case 0xe8943u: goto L_e8943;
      default: x86_jump(c, t); return; } }
L_e8916:
    X86_TICK(c, 14);
    // 0e8916  or byte ptr [0xc40cc], 1
    X86_AT(c, 0xe8916u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xC40CCu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | 0x1u, 1)); }
    // 0e891d  jmp 0xe8945
    X86_AT(c, 0xe891du);
    goto L_e8945;
L_e891f:
    X86_TICK(c, 14);
    // 0e891f  or byte ptr [0xc40cc], 2
    X86_AT(c, 0xe891fu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xC40CCu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | 0x2u, 1)); }
    // 0e8926  jmp 0xe8945
    X86_AT(c, 0xe8926u);
    goto L_e8945;
L_e8928:
    X86_TICK(c, 14);
    // 0e8928  or byte ptr [0xc40cc], 4
    X86_AT(c, 0xe8928u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xC40CCu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | 0x4u, 1)); }
    // 0e892f  jmp 0xe8945
    X86_AT(c, 0xe892fu);
    goto L_e8945;
L_e8931:
    X86_TICK(c, 14);
    // 0e8931  or byte ptr [0xc40cc], 8
    X86_AT(c, 0xe8931u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xC40CCu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | 0x8u, 1)); }
    // 0e8938  jmp 0xe8945
    X86_AT(c, 0xe8938u);
    goto L_e8945;
L_e893a:
    X86_TICK(c, 14);
    // 0e893a  or byte ptr [0xc40cc], 0x10
    X86_AT(c, 0xe893au);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xC40CCu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | 0x10u, 1)); }
    // 0e8941  jmp 0xe8945
    X86_AT(c, 0xe8941u);
    goto L_e8945;
L_e8943:
    X86_TICK(c, 2);
    // 0e8943  mov bl, 1
    X86_AT(c, 0xe8943u);
    s8(c, 3, 0x1u);
L_e8945:
    X86_TICK(c, 7);
    // 0e8945  and bl, bl
    X86_AT(c, 0xe8945u);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v & g8(c, 3), 1)); }
    // 0e8947  je 0xe88b0
    X86_AT(c, 0xe8947u);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xe88b0u); goto L_e88b0; }
    X86_TICK(c, 13);
    // 0e894d  push 0
    X86_AT(c, 0xe894du);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0e894f  push 0x46
    X86_AT(c, 0xe894fu);
    { uint32_t v = 0x46u; push32(c, v); }
    // 0e8951  mov ecx, ebp
    X86_AT(c, 0xe8951u);
    c.r[1] = c.r[5];
    // 0e8953  call 0xe870c
    X86_AT(c, 0xe8953u);
    push32(c, 0xe8958u); x86_call_known(c, 0xe870cu, f_000e870c); X86_RET(c, 0xe8958u);
    X86_TICK(c, 18);
    // 0e8958  mov dword ptr [0xc40d0], eax
    X86_AT(c, 0xe8958u);
    wr32((c.sbase[3] + (uint32_t)(0xC40D0u)), c.r[0]);
    // 0e895d  mov eax, dword ptr [0xc44f8]
    X86_AT(c, 0xe895du);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xC44F8u)));
    // 0e8962  cmp byte ptr [eax], 0x2e
    X86_AT(c, 0xe8962u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[0]))), 0x2Eu, 0, 1);
    // 0e8965  jne 0xe89a1
    X86_AT(c, 0xe8965u);
    if (x86_cc(c, 5)) { goto L_e89a1; }
    X86_TICK(c, 22);
    // 0e8967  inc dword ptr [0xc44f8]
    X86_AT(c, 0xe8967u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xC44F8u)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0e896d  mov eax, dword ptr [0xc44f8]
    X86_AT(c, 0xe896du);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xC44F8u)));
    // 0e8972  cmp byte ptr [eax], 0x2d
    X86_AT(c, 0xe8972u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[0]))), 0x2Du, 0, 1);
    // 0e8975  jne 0xe8991
    X86_AT(c, 0xe8975u);
    if (x86_cc(c, 5)) { goto L_e8991; }
L_e8977:
    X86_TICK(c, 23);
    // 0e8977  inc dword ptr [0xc44f8]
    X86_AT(c, 0xe8977u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xC44F8u)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0e897d  mov eax, dword ptr [0xc44f8]
    X86_AT(c, 0xe897du);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xC44F8u)));
    // 0e8982  mov al, byte ptr [eax]
    X86_AT(c, 0xe8982u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[0]))));
    // 0e8984  mov byte ptr [ebp - 5], al
    X86_AT(c, 0xe8984u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFBu)), g8(c, 0));
    // 0e8987  cmp al, 0x30
    X86_AT(c, 0xe8987u);
    (void)x86_sub(c, g8(c, 0), 0x30u, 0, 1);
    // 0e8989  jb 0xe89a1
    X86_AT(c, 0xe8989u);
    if (x86_cc(c, 2)) { goto L_e89a1; }
    X86_TICK(c, 7);
    // 0e898b  cmp al, 0x39
    X86_AT(c, 0xe898bu);
    (void)x86_sub(c, g8(c, 0), 0x39u, 0, 1);
    // 0e898d  jbe 0xe8977
    X86_AT(c, 0xe898du);
    if (x86_cc(c, 6)) { X86_POLL(c, 0xe8977u); goto L_e8977; }
    X86_TICK(c, 7);
    // 0e898f  jmp 0xe89a1
    X86_AT(c, 0xe898fu);
    goto L_e89a1;
L_e8991:
    X86_TICK(c, 13);
    // 0e8991  push 1
    X86_AT(c, 0xe8991u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0e8993  push 0x50
    X86_AT(c, 0xe8993u);
    { uint32_t v = 0x50u; push32(c, v); }
    // 0e8995  mov ecx, ebp
    X86_AT(c, 0xe8995u);
    c.r[1] = c.r[5];
    // 0e8997  call 0xe870c
    X86_AT(c, 0xe8997u);
    push32(c, 0xe899cu); x86_call_known(c, 0xe870cu, f_000e870c); X86_RET(c, 0xe899cu);
    X86_TICK(c, 2);
    // 0e899c  mov dword ptr [0xc40d4], eax
    X86_AT(c, 0xe899cu);
    wr32((c.sbase[3] + (uint32_t)(0xC40D4u)), c.r[0]);
L_e89a1:
    X86_TICK(c, 16);
    // 0e89a1  mov eax, dword ptr [0xc44f8]
    X86_AT(c, 0xe89a1u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xC44F8u)));
    // 0e89a6  cmp byte ptr [eax], 0x68
    X86_AT(c, 0xe89a6u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[0]))), 0x68u, 0, 1);
    // 0e89a9  jne 0xe89b4
    X86_AT(c, 0xe89a9u);
    if (x86_cc(c, 5)) { goto L_e89b4; }
    X86_TICK(c, 9);
    // 0e89ab  mov byte ptr [0xc40d8], 0
    X86_AT(c, 0xe89abu);
    wr8((c.sbase[3] + (uint32_t)(0xC40D8u)), 0x0u);
    // 0e89b2  jmp 0xe89d8
    X86_AT(c, 0xe89b2u);
    goto L_e89d8;
L_e89b4:
    X86_TICK(c, 16);
    // 0e89b4  mov eax, dword ptr [0xc44f8]
    X86_AT(c, 0xe89b4u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xC44F8u)));
    // 0e89b9  cmp byte ptr [eax], 0x6c
    X86_AT(c, 0xe89b9u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[0]))), 0x6Cu, 0, 1);
    // 0e89bc  jne 0xe89c7
    X86_AT(c, 0xe89bcu);
    if (x86_cc(c, 5)) { goto L_e89c7; }
    X86_TICK(c, 9);
    // 0e89be  mov byte ptr [0xc40d8], 2
    X86_AT(c, 0xe89beu);
    wr8((c.sbase[3] + (uint32_t)(0xC40D8u)), 0x2u);
    // 0e89c5  jmp 0xe89d8
    X86_AT(c, 0xe89c5u);
    goto L_e89d8;
L_e89c7:
    X86_TICK(c, 16);
    // 0e89c7  mov eax, dword ptr [0xc44f8]
    X86_AT(c, 0xe89c7u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xC44F8u)));
    // 0e89cc  cmp byte ptr [eax], 0x4c
    X86_AT(c, 0xe89ccu);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[0]))), 0x4Cu, 0, 1);
    // 0e89cf  jne 0xe89de
    X86_AT(c, 0xe89cfu);
    if (x86_cc(c, 5)) { goto L_e89de; }
    X86_TICK(c, 2);
    // 0e89d1  mov byte ptr [0xc40d8], 3
    X86_AT(c, 0xe89d1u);
    wr8((c.sbase[3] + (uint32_t)(0xC40D8u)), 0x3u);
L_e89d8:
    X86_TICK(c, 6);
    // 0e89d8  inc dword ptr [0xc44f8]
    X86_AT(c, 0xe89d8u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xC44F8u)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
L_e89de:
    X86_TICK(c, 21);
    // 0e89de  mov eax, dword ptr [0xc44f8]
    X86_AT(c, 0xe89deu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xC44F8u)));
    // 0e89e3  mov al, byte ptr [eax]
    X86_AT(c, 0xe89e3u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[0]))));
    // 0e89e5  push eax
    X86_AT(c, 0xe89e5u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e89e6  mov ecx, dword ptr [ebp + 0x10]
    X86_AT(c, 0xe89e6u);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u)));
    // 0e89e9  call dword ptr [ebp + 0xc]
    X86_AT(c, 0xe89e9u);
    { uint32_t t = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))); push32(c, 0xe89ecu); x86_call(c, t); X86_RET(c, 0xe89ecu); }
    X86_TICK(c, 26);
    // 0e89ec  inc dword ptr [0xc44f8]
    X86_AT(c, 0xe89ecu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xC44F8u)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0e89f2  mov eax, dword ptr [0xc44f8]
    X86_AT(c, 0xe89f2u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xC44F8u)));
    // 0e89f7  sub eax, esi
    X86_AT(c, 0xe89f7u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[6], 0, 4); }
    // 0e89f9  sub dword ptr [0xc44f0], eax
    X86_AT(c, 0xe89f9u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xC44F0u)); uint32_t v = rd32(ea); wr32(ea, x86_sub(c, v, c.r[0], 0, 4)); }
    // 0e89ff  jmp 0xe882c
    X86_AT(c, 0xe89ffu);
    X86_POLL(c, 0xe882cu); goto L_e882c;
L_e8a04:
    X86_TICK(c, 28);
    // 0e8a04  pop edi
    X86_AT(c, 0xe8a04u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0e8a05  pop esi
    X86_AT(c, 0xe8a05u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0e8a06  pop ebx
    X86_AT(c, 0xe8a06u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0e8a07  leave 
    X86_AT(c, 0xe8a07u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0e8a08  ret 0xc
    X86_AT(c, 0xe8a08u);
    c.eip = pop32(c); c.r[4] += 0xCu; return;
    x86_fault(c, 0xe881cu, "ran off the end of a function");
}
void f_000e8a18(X86Cpu& c) {
    X86_TICK(c, 28);
    // 0e8a18  push ebp
    X86_AT(c, 0xe8a18u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0e8a19  mov ebp, esp
    X86_AT(c, 0xe8a19u);
    c.r[5] = c.r[4];
    // 0e8a1b  push ecx
    X86_AT(c, 0xe8a1bu);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 0e8a1c  mov ecx, dword ptr [ebp + 8]
    X86_AT(c, 0xe8a1cu);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0e8a1f  add dword ptr [0xc40dc], ecx
    X86_AT(c, 0xe8a1fu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xC40DCu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[1], 0, 4)); }
    // 0e8a25  mov eax, dword ptr [0xc40d0]
    X86_AT(c, 0xe8a25u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xC40D0u)));
    // 0e8a2a  cmp eax, 0xffff
    X86_AT(c, 0xe8a2au);
    (void)x86_sub(c, c.r[0], 0xFFFFu, 0, 4);
    // 0e8a2f  je 0xe8a3b
    X86_AT(c, 0xe8a2fu);
    if (x86_cc(c, 4)) { goto L_e8a3b; }
    X86_TICK(c, 7);
    // 0e8a31  cmp ecx, eax
    X86_AT(c, 0xe8a31u);
    (void)x86_sub(c, c.r[1], c.r[0], 0, 4);
    // 0e8a33  ja 0xe8a3b
    X86_AT(c, 0xe8a33u);
    if (x86_cc(c, 7)) { goto L_e8a3b; }
    X86_TICK(c, 7);
    // 0e8a35  sub dword ptr [0xc40d0], ecx
    X86_AT(c, 0xe8a35u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xC40D0u)); uint32_t v = rd32(ea); wr32(ea, x86_sub(c, v, c.r[1], 0, 4)); }
L_e8a3b:
    X86_TICK(c, 16);
    // 0e8a3b  leave 
    X86_AT(c, 0xe8a3bu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0e8a3c  ret 4
    X86_AT(c, 0xe8a3cu);
    c.eip = pop32(c); c.r[4] += 0x4u; return;
    x86_fault(c, 0xe8a18u, "ran off the end of a function");
}
void f_000e8a54(X86Cpu& c) {
    X86_TICK(c, 25);
    // 0e8a54  push ebp
    X86_AT(c, 0xe8a54u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0e8a55  mov ebp, esp
    X86_AT(c, 0xe8a55u);
    c.r[5] = c.r[4];
    // 0e8a57  push ecx
    X86_AT(c, 0xe8a57u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 0e8a58  mov dword ptr [0xc4530], 0
    X86_AT(c, 0xe8a58u);
    wr32((c.sbase[3] + (uint32_t)(0xC4530u)), 0x0u);
    // 0e8a62  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0xe8a62u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0e8a65  movzx eax, byte ptr [eax + 0xc]
    X86_AT(c, 0xe8a65u);
    c.r[0] = rd8((c.sbase[3] + (uint32_t)(c.r[0] + 0xCu)));
    // 0e8a69  cmp eax, 0x69
    X86_AT(c, 0xe8a69u);
    (void)x86_sub(c, c.r[0], 0x69u, 0, 4);
    // 0e8a6c  ja 0xe8a86
    X86_AT(c, 0xe8a6cu);
    if (x86_cc(c, 7)) { goto L_e8a86; }
    X86_TICK(c, 7);
    // 0e8a6e  cmp eax, 0x69
    X86_AT(c, 0xe8a6eu);
    (void)x86_sub(c, c.r[0], 0x69u, 0, 4);
    // 0e8a71  je 0xe8a9e
    X86_AT(c, 0xe8a71u);
    if (x86_cc(c, 4)) { goto L_e8a9e; }
    X86_TICK(c, 7);
    // 0e8a73  cmp eax, 0x58
    X86_AT(c, 0xe8a73u);
    (void)x86_sub(c, c.r[0], 0x58u, 0, 4);
    // 0e8a76  je 0xe8b0d
    X86_AT(c, 0xe8a76u);
    if (x86_cc(c, 4)) { goto L_e8b0d; }
    X86_TICK(c, 7);
    // 0e8a7c  cmp eax, 0x64
    X86_AT(c, 0xe8a7cu);
    (void)x86_sub(c, c.r[0], 0x64u, 0, 4);
    // 0e8a7f  je 0xe8a9e
    X86_AT(c, 0xe8a7fu);
    if (x86_cc(c, 4)) { goto L_e8a9e; }
    X86_TICK(c, 7);
    // 0e8a81  jmp 0xe8b41
    X86_AT(c, 0xe8a81u);
    goto L_e8b41;
L_e8a86:
    X86_TICK(c, 7);
    // 0e8a86  cmp eax, 0x6f
    X86_AT(c, 0xe8a86u);
    (void)x86_sub(c, c.r[0], 0x6Fu, 0, 4);
    // 0e8a89  je 0xe8ae8
    X86_AT(c, 0xe8a89u);
    if (x86_cc(c, 4)) { goto L_e8ae8; }
    X86_TICK(c, 7);
    // 0e8a8b  cmp eax, 0x75
    X86_AT(c, 0xe8a8bu);
    (void)x86_sub(c, c.r[0], 0x75u, 0, 4);
    // 0e8a8e  je 0xe8adf
    X86_AT(c, 0xe8a8eu);
    if (x86_cc(c, 4)) { goto L_e8adf; }
    X86_TICK(c, 7);
    // 0e8a90  cmp eax, 0x78
    X86_AT(c, 0xe8a90u);
    (void)x86_sub(c, c.r[0], 0x78u, 0, 4);
    // 0e8a93  je 0xe8b0d
    X86_AT(c, 0xe8a93u);
    if (x86_cc(c, 4)) { goto L_e8b0d; }
    X86_TICK(c, 7);
    // 0e8a99  jmp 0xe8b41
    X86_AT(c, 0xe8a99u);
    goto L_e8b41;
L_e8a9e:
    X86_TICK(c, 17);
    // 0e8a9e  mov byte ptr [0xc4524], 0xa
    X86_AT(c, 0xe8a9eu);
    wr8((c.sbase[3] + (uint32_t)(0xC4524u)), 0xAu);
    // 0e8aa5  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0xe8aa5u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0e8aa8  mov edx, dword ptr [eax + 8]
    X86_AT(c, 0xe8aa8u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0x8u)));
    // 0e8aab  and edx, edx
    X86_AT(c, 0xe8aabu);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & c.r[2], 4); }
    // 0e8aad  jge 0xe8abb
    X86_AT(c, 0xe8aadu);
    if (x86_cc(c, 13)) { goto L_e8abb; }
    X86_TICK(c, 15);
    // 0e8aaf  neg dword ptr [eax + 8]
    X86_AT(c, 0xe8aafu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[0] + 0x8u)); uint32_t v = rd32(ea); wr32(ea, x86_neg(c, v, 4)); }
    // 0e8ab2  mov byte ptr [0xc4526], 0x2d
    X86_AT(c, 0xe8ab2u);
    wr8((c.sbase[3] + (uint32_t)(0xC4526u)), 0x2Du);
    // 0e8ab9  jmp 0xe8aff
    X86_AT(c, 0xe8ab9u);
    goto L_e8aff;
L_e8abb:
    X86_TICK(c, 12);
    // 0e8abb  test byte ptr [0xc40cc], 2
    X86_AT(c, 0xe8abbu);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(0xC40CCu))) & 0x2u, 1);
    // 0e8ac2  je 0xe8acd
    X86_AT(c, 0xe8ac2u);
    if (x86_cc(c, 4)) { goto L_e8acd; }
    X86_TICK(c, 9);
    // 0e8ac4  mov byte ptr [0xc4526], 0x2b
    X86_AT(c, 0xe8ac4u);
    wr8((c.sbase[3] + (uint32_t)(0xC4526u)), 0x2Bu);
    // 0e8acb  jmp 0xe8aff
    X86_AT(c, 0xe8acbu);
    goto L_e8aff;
L_e8acd:
    X86_TICK(c, 12);
    // 0e8acd  test byte ptr [0xc40cc], 4
    X86_AT(c, 0xe8acdu);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(0xC40CCu))) & 0x4u, 1);
    // 0e8ad4  je 0xe8b41
    X86_AT(c, 0xe8ad4u);
    if (x86_cc(c, 4)) { goto L_e8b41; }
    X86_TICK(c, 9);
    // 0e8ad6  mov byte ptr [0xc4526], 0x20
    X86_AT(c, 0xe8ad6u);
    wr8((c.sbase[3] + (uint32_t)(0xC4526u)), 0x20u);
    // 0e8add  jmp 0xe8aff
    X86_AT(c, 0xe8addu);
    goto L_e8aff;
L_e8adf:
    X86_TICK(c, 9);
    // 0e8adf  mov byte ptr [0xc4524], 0xa
    X86_AT(c, 0xe8adfu);
    wr8((c.sbase[3] + (uint32_t)(0xC4524u)), 0xAu);
    // 0e8ae6  jmp 0xe8b41
    X86_AT(c, 0xe8ae6u);
    goto L_e8b41;
L_e8ae8:
    X86_TICK(c, 14);
    // 0e8ae8  mov byte ptr [0xc4524], 8
    X86_AT(c, 0xe8ae8u);
    wr8((c.sbase[3] + (uint32_t)(0xC4524u)), 0x8u);
    // 0e8aef  test byte ptr [0xc40cc], 8
    X86_AT(c, 0xe8aefu);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(0xC40CCu))) & 0x8u, 1);
    // 0e8af6  je 0xe8b41
    X86_AT(c, 0xe8af6u);
    if (x86_cc(c, 4)) { goto L_e8b41; }
    X86_TICK(c, 2);
    // 0e8af8  mov byte ptr [0xc4526], 0x30
    X86_AT(c, 0xe8af8u);
    wr8((c.sbase[3] + (uint32_t)(0xC4526u)), 0x30u);
L_e8aff:
    X86_TICK(c, 11);
    // 0e8aff  mov dword ptr [0xc4530], 1
    X86_AT(c, 0xe8affu);
    wr32((c.sbase[3] + (uint32_t)(0xC4530u)), 0x1u);
    // 0e8b09  push 1
    X86_AT(c, 0xe8b09u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0e8b0b  jmp 0xe8b3a
    X86_AT(c, 0xe8b0bu);
    goto L_e8b3a;
L_e8b0d:
    X86_TICK(c, 14);
    // 0e8b0d  mov byte ptr [0xc4524], 0x10
    X86_AT(c, 0xe8b0du);
    wr8((c.sbase[3] + (uint32_t)(0xC4524u)), 0x10u);
    // 0e8b14  test byte ptr [0xc40cc], 8
    X86_AT(c, 0xe8b14u);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(0xC40CCu))) & 0x8u, 1);
    // 0e8b1b  je 0xe8b41
    X86_AT(c, 0xe8b1bu);
    if (x86_cc(c, 4)) { goto L_e8b41; }
    X86_TICK(c, 18);
    // 0e8b1d  mov byte ptr [0xc4526], 0x30
    X86_AT(c, 0xe8b1du);
    wr8((c.sbase[3] + (uint32_t)(0xC4526u)), 0x30u);
    // 0e8b24  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0xe8b24u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0e8b27  mov al, byte ptr [eax + 0xc]
    X86_AT(c, 0xe8b27u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[0] + 0xCu))));
    // 0e8b2a  mov byte ptr [0xc4527], al
    X86_AT(c, 0xe8b2au);
    wr8((c.sbase[3] + (uint32_t)(0xC4527u)), g8(c, 0));
    // 0e8b2f  mov eax, 2
    X86_AT(c, 0xe8b2fu);
    c.r[0] = 0x2u;
    // 0e8b34  mov dword ptr [0xc4530], eax
    X86_AT(c, 0xe8b34u);
    wr32((c.sbase[3] + (uint32_t)(0xC4530u)), c.r[0]);
    // 0e8b39  push eax
    X86_AT(c, 0xe8b39u);
    { uint32_t v = c.r[0]; push32(c, v); }
L_e8b3a:
    X86_TICK(c, 9);
    // 0e8b3a  mov ecx, ebp
    X86_AT(c, 0xe8b3au);
    c.r[1] = c.r[5];
    // 0e8b3c  call 0xe8a18
    X86_AT(c, 0xe8b3cu);
    push32(c, 0xe8b41u); x86_call_known(c, 0xe8a18u, f_000e8a18); X86_RET(c, 0xe8b41u);
L_e8b41:
    X86_TICK(c, 16);
    // 0e8b41  leave 
    X86_AT(c, 0xe8b41u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0e8b42  ret 
    X86_AT(c, 0xe8b42u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe8a54u, "ran off the end of a function");
}
void f_000e8b41(X86Cpu& c) {
    X86_TICK(c, 16);
    // 0e8b41  leave 
    X86_AT(c, 0xe8b41u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0e8b42  ret 
    X86_AT(c, 0xe8b42u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe8b41u, "ran off the end of a function");
}
void f_000e8b4c(X86Cpu& c) {
    X86_TICK(c, 17);
    // 0e8b4c  push ebp
    X86_AT(c, 0xe8b4cu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0e8b4d  mov ebp, esp
    X86_AT(c, 0xe8b4du);
    c.r[5] = c.r[4];
    // 0e8b4f  push ecx
    X86_AT(c, 0xe8b4fu);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 0e8b50  mov ecx, dword ptr [ebp + 8]
    X86_AT(c, 0xe8b50u);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0e8b53  cmp ecx, 0xa
    X86_AT(c, 0xe8b53u);
    (void)x86_sub(c, c.r[1], 0xAu, 0, 4);
    // 0e8b56  jge 0xe8b5d
    X86_AT(c, 0xe8b56u);
    if (x86_cc(c, 13)) { goto L_e8b5d; }
    X86_TICK(c, 9);
    // 0e8b58  add ecx, 0x30
    X86_AT(c, 0xe8b58u);
    { uint32_t v = c.r[1]; c.r[1] = x86_add(c, v, 0x30u, 0, 4); }
    // 0e8b5b  jmp 0xe8b71
    X86_AT(c, 0xe8b5bu);
    goto L_e8b71;
L_e8b5d:
    X86_TICK(c, 20);
    // 0e8b5d  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0xe8b5du);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0e8b60  mov eax, dword ptr [eax - 4]
    X86_AT(c, 0xe8b60u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0xFFFFFFFCu)));
    // 0e8b63  cmp byte ptr [eax + 0xc], 0x78
    X86_AT(c, 0xe8b63u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[0] + 0xCu))), 0x78u, 0, 1);
    // 0e8b67  jne 0xe8b6e
    X86_AT(c, 0xe8b67u);
    if (x86_cc(c, 5)) { goto L_e8b6e; }
    X86_TICK(c, 9);
    // 0e8b69  add ecx, 0x57
    X86_AT(c, 0xe8b69u);
    { uint32_t v = c.r[1]; c.r[1] = x86_add(c, v, 0x57u, 0, 4); }
    // 0e8b6c  jmp 0xe8b71
    X86_AT(c, 0xe8b6cu);
    goto L_e8b71;
L_e8b6e:
    X86_TICK(c, 2);
    // 0e8b6e  add ecx, 0x37
    X86_AT(c, 0xe8b6eu);
    { uint32_t v = c.r[1]; c.r[1] = x86_add(c, v, 0x37u, 0, 4); }
L_e8b71:
    X86_TICK(c, 30);
    // 0e8b71  mov eax, ecx
    X86_AT(c, 0xe8b71u);
    c.r[0] = c.r[1];
    // 0e8b73  mov edx, dword ptr [0xc451c]
    X86_AT(c, 0xe8b73u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(0xC451Cu)));
    // 0e8b79  mov byte ptr [edx + 0xc44fb], al
    X86_AT(c, 0xe8b79u);
    wr8((c.sbase[3] + (uint32_t)(c.r[2] + 0xC44FBu)), g8(c, 0));
    // 0e8b7f  dec dword ptr [0xc451c]
    X86_AT(c, 0xe8b7fu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xC451Cu)); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 0e8b85  leave 
    X86_AT(c, 0xe8b85u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0e8b86  ret 4
    X86_AT(c, 0xe8b86u);
    c.eip = pop32(c); c.r[4] += 0x4u; return;
    x86_fault(c, 0xe8b4cu, "ran off the end of a function");
}
void f_000e8b98(X86Cpu& c) {
    X86_TICK(c, 27);
    // 0e8b98  push ebp
    X86_AT(c, 0xe8b98u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0e8b99  mov ebp, esp
    X86_AT(c, 0xe8b99u);
    c.r[5] = c.r[4];
    // 0e8b9b  push ecx
    X86_AT(c, 0xe8b9bu);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 0e8b9c  push ebx
    X86_AT(c, 0xe8b9cu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0e8b9d  push edi
    X86_AT(c, 0xe8b9du);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e8b9e  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0xe8b9eu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0e8ba1  mov edi, dword ptr [eax + 8]
    X86_AT(c, 0xe8ba1u);
    c.r[7] = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0x8u)));
    // 0e8ba4  mov dword ptr [0xc451c], 0x1e
    X86_AT(c, 0xe8ba4u);
    wr32((c.sbase[3] + (uint32_t)(0xC451Cu)), 0x1Eu);
    // 0e8bae  and edi, edi
    X86_AT(c, 0xe8baeu);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & c.r[7], 4); }
    // 0e8bb0  jbe 0xe8bd5
    X86_AT(c, 0xe8bb0u);
    if (x86_cc(c, 6)) { goto L_e8bd5; }
    X86_TICK(c, 7);
    // 0e8bb2  jmp 0xe8bcf
    X86_AT(c, 0xe8bb2u);
    goto L_e8bcf;
L_e8bb4:
    X86_TICK(c, 69);
    // 0e8bb4  movzx ecx, byte ptr [0xc4524]
    X86_AT(c, 0xe8bb4u);
    c.r[1] = rd8((c.sbase[3] + (uint32_t)(0xC4524u)));
    // 0e8bbb  mov eax, edi
    X86_AT(c, 0xe8bbbu);
    c.r[0] = c.r[7];
    // 0e8bbd  sub edx, edx
    X86_AT(c, 0xe8bbdu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[2], 0, 4); }
    // 0e8bbf  div ecx
    X86_AT(c, 0xe8bbfu);
    x86_div(c, c.r[1], 4, 0xe8bbfu);
    // 0e8bc1  mov ebx, edx
    X86_AT(c, 0xe8bc1u);
    c.r[3] = c.r[2];
    // 0e8bc3  xchg edi, eax
    X86_AT(c, 0xe8bc3u);
    { uint32_t t = c.r[7]; c.r[7] = c.r[0]; c.r[0] = t; }
    // 0e8bc4  movzx ebx, bl
    X86_AT(c, 0xe8bc4u);
    c.r[3] = g8(c, 3);
    // 0e8bc7  push ebx
    X86_AT(c, 0xe8bc7u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0e8bc8  mov ecx, ebp
    X86_AT(c, 0xe8bc8u);
    c.r[1] = c.r[5];
    // 0e8bca  call 0xe8b4c
    X86_AT(c, 0xe8bcau);
    push32(c, 0xe8bcfu); x86_call_known(c, 0xe8b4cu, f_000e8b4c); X86_RET(c, 0xe8bcfu);
L_e8bcf:
    X86_TICK(c, 7);
    // 0e8bcf  and edi, edi
    X86_AT(c, 0xe8bcfu);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & c.r[7], 4); }
    // 0e8bd1  ja 0xe8bb4
    X86_AT(c, 0xe8bd1u);
    if (x86_cc(c, 7)) { X86_POLL(c, 0xe8bb4u); goto L_e8bb4; }
    X86_TICK(c, 7);
    // 0e8bd3  jmp 0xe8be7
    X86_AT(c, 0xe8bd3u);
    goto L_e8be7;
L_e8bd5:
    X86_TICK(c, 12);
    // 0e8bd5  mov eax, dword ptr [0xc451c]
    X86_AT(c, 0xe8bd5u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xC451Cu)));
    // 0e8bda  mov byte ptr [eax + 0xc44fb], 0x30
    X86_AT(c, 0xe8bdau);
    wr8((c.sbase[3] + (uint32_t)(c.r[0] + 0xC44FBu)), 0x30u);
    // 0e8be1  dec dword ptr [0xc451c]
    X86_AT(c, 0xe8be1u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xC451Cu)); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
L_e8be7:
    X86_TICK(c, 40);
    // 0e8be7  inc dword ptr [0xc451c]
    X86_AT(c, 0xe8be7u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xC451Cu)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0e8bed  mov eax, 0x1f
    X86_AT(c, 0xe8bedu);
    c.r[0] = 0x1Fu;
    // 0e8bf2  sub eax, dword ptr [0xc451c]
    X86_AT(c, 0xe8bf2u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, rd32((c.sbase[3] + (uint32_t)(0xC451Cu))), 0, 4); }
    // 0e8bf8  mov dword ptr [0xc4520], eax
    X86_AT(c, 0xe8bf8u);
    wr32((c.sbase[3] + (uint32_t)(0xC4520u)), c.r[0]);
    // 0e8bfd  pop edi
    X86_AT(c, 0xe8bfdu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0e8bfe  pop ebx
    X86_AT(c, 0xe8bfeu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0e8bff  leave 
    X86_AT(c, 0xe8bffu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0e8c00  ret 
    X86_AT(c, 0xe8c00u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe8b98u, "ran off the end of a function");
}
void f_000e8c08(X86Cpu& c) {
    X86_TICK(c, 18);
    // 0e8c08  push ebp
    X86_AT(c, 0xe8c08u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0e8c09  mov ebp, esp
    X86_AT(c, 0xe8c09u);
    c.r[5] = c.r[4];
    // 0e8c0b  push ecx
    X86_AT(c, 0xe8c0bu);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 0e8c0c  push dword ptr [0xc452c]
    X86_AT(c, 0xe8c0cu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xC452Cu))); push32(c, v); }
    // 0e8c12  call 0xe86a0
    X86_AT(c, 0xe8c12u);
    push32(c, 0xe8c17u); x86_call_known(c, 0xe86a0u, f_000e86a0); X86_RET(c, 0xe8c17u);
    X86_TICK(c, 22);
    // 0e8c17  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0xe8c17u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0e8c1a  mov byte ptr [eax - 5], 0
    X86_AT(c, 0xe8c1au);
    wr8((c.sbase[3] + (uint32_t)(c.r[0] + 0xFFFFFFFBu)), 0x0u);
    // 0e8c1e  leave 
    X86_AT(c, 0xe8c1eu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0e8c1f  ret 
    X86_AT(c, 0xe8c1fu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe8c08u, "ran off the end of a function");
}
void f_000e8c34(X86Cpu& c) {
    X86_TICK(c, 24);
    // 0e8c34  push ebp
    X86_AT(c, 0xe8c34u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0e8c35  mov ebp, esp
    X86_AT(c, 0xe8c35u);
    c.r[5] = c.r[4];
    // 0e8c37  push ecx
    X86_AT(c, 0xe8c37u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 0e8c38  push eax
    X86_AT(c, 0xe8c38u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e8c39  push ebx
    X86_AT(c, 0xe8c39u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0e8c3a  push edi
    X86_AT(c, 0xe8c3au);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e8c3b  cmp dword ptr [0xc40d4], 0
    X86_AT(c, 0xe8c3bu);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xC40D4u))), 0x0u, 0, 4);
    // 0e8c42  jne 0xe8c56
    X86_AT(c, 0xe8c42u);
    if (x86_cc(c, 5)) { goto L_e8c56; }
    X86_TICK(c, 12);
    // 0e8c44  cmp dword ptr [ebp + 8], 0
    X86_AT(c, 0xe8c44u);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))), 0x0u, 0, 4);
    // 0e8c48  jne 0xe8c56
    X86_AT(c, 0xe8c48u);
    if (x86_cc(c, 5)) { goto L_e8c56; }
    X86_TICK(c, 9);
    // 0e8c4a  push 0
    X86_AT(c, 0xe8c4au);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0e8c4c  call 0xe86a0
    X86_AT(c, 0xe8c4cu);
    push32(c, 0xe8c51u); x86_call_known(c, 0xe86a0u, f_000e86a0); X86_RET(c, 0xe8c51u);
    X86_TICK(c, 7);
    // 0e8c51  jmp 0xe8d7c
    X86_AT(c, 0xe8c51u);
    goto L_e8d7c;
L_e8c56:
    X86_TICK(c, 9);
    // 0e8c56  mov ecx, ebp
    X86_AT(c, 0xe8c56u);
    c.r[1] = c.r[5];
    // 0e8c58  call 0xe8a54
    X86_AT(c, 0xe8c58u);
    push32(c, 0xe8c5du); x86_call_known(c, 0xe8a54u, f_000e8a54); X86_RET(c, 0xe8c5du);
    X86_TICK(c, 9);
    // 0e8c5d  mov ecx, ebp
    X86_AT(c, 0xe8c5du);
    c.r[1] = c.r[5];
    // 0e8c5f  call 0xe8b98
    X86_AT(c, 0xe8c5fu);
    push32(c, 0xe8c64u); x86_call_known(c, 0xe8b98u, f_000e8b98); X86_RET(c, 0xe8c64u);
    X86_TICK(c, 12);
    // 0e8c64  cmp dword ptr [0xc40d4], 0xffff
    X86_AT(c, 0xe8c64u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xC40D4u))), 0xFFFFu, 0, 4);
    // 0e8c6e  jne 0xe8c7c
    X86_AT(c, 0xe8c6eu);
    if (x86_cc(c, 5)) { goto L_e8c7c; }
    X86_TICK(c, 13);
    // 0e8c70  mov eax, dword ptr [0xc4520]
    X86_AT(c, 0xe8c70u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xC4520u)));
    // 0e8c75  mov dword ptr [0xc452c], eax
    X86_AT(c, 0xe8c75u);
    wr32((c.sbase[3] + (uint32_t)(0xC452Cu)), c.r[0]);
    // 0e8c7a  jmp 0xe8c92
    X86_AT(c, 0xe8c7au);
    goto L_e8c92;
L_e8c7c:
    X86_TICK(c, 15);
    // 0e8c7c  mov eax, dword ptr [0xc40d4]
    X86_AT(c, 0xe8c7cu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xC40D4u)));
    // 0e8c81  mov edx, dword ptr [0xc4520]
    X86_AT(c, 0xe8c81u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(0xC4520u)));
    // 0e8c87  cmp eax, edx
    X86_AT(c, 0xe8c87u);
    (void)x86_sub(c, c.r[0], c.r[2], 0, 4);
    // 0e8c89  jb 0xe8c8c
    X86_AT(c, 0xe8c89u);
    if (x86_cc(c, 2)) { goto L_e8c8c; }
    X86_TICK(c, 3);
    // 0e8c8b  xchg edx, eax
    X86_AT(c, 0xe8c8bu);
    { uint32_t t = c.r[2]; c.r[2] = c.r[0]; c.r[0] = t; }
L_e8c8c:
    X86_TICK(c, 2);
    // 0e8c8c  mov dword ptr [0xc452c], edx
    X86_AT(c, 0xe8c8cu);
    wr32((c.sbase[3] + (uint32_t)(0xC452Cu)), c.r[2]);
L_e8c92:
    X86_TICK(c, 11);
    // 0e8c92  mov eax, dword ptr [0xc40d0]
    X86_AT(c, 0xe8c92u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xC40D0u)));
    // 0e8c97  cmp eax, 0xffff
    X86_AT(c, 0xe8c97u);
    (void)x86_sub(c, c.r[0], 0xFFFFu, 0, 4);
    // 0e8c9c  je 0xe8caa
    X86_AT(c, 0xe8c9cu);
    if (x86_cc(c, 4)) { goto L_e8caa; }
    X86_TICK(c, 11);
    // 0e8c9e  cmp eax, dword ptr [0xc452c]
    X86_AT(c, 0xe8c9eu);
    (void)x86_sub(c, c.r[0], rd32((c.sbase[3] + (uint32_t)(0xC452Cu))), 0, 4);
    // 0e8ca4  jbe 0xe8caa
    X86_AT(c, 0xe8ca4u);
    if (x86_cc(c, 6)) { goto L_e8caa; }
    X86_TICK(c, 9);
    // 0e8ca6  mov bl, 1
    X86_AT(c, 0xe8ca6u);
    s8(c, 3, 0x1u);
    // 0e8ca8  jmp 0xe8cac
    X86_AT(c, 0xe8ca8u);
    goto L_e8cac;
L_e8caa:
    X86_TICK(c, 2);
    // 0e8caa  sub ebx, ebx
    X86_AT(c, 0xe8caau);
    { uint32_t v = c.r[3]; c.r[3] = x86_sub(c, v, c.r[3], 0, 4); }
L_e8cac:
    X86_TICK(c, 9);
    // 0e8cac  mov byte ptr [ebp - 5], bl
    X86_AT(c, 0xe8cacu);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFBu)), g8(c, 3));
    // 0e8caf  and bl, bl
    X86_AT(c, 0xe8cafu);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v & g8(c, 3), 1)); }
    // 0e8cb1  je 0xe8ccc
    X86_AT(c, 0xe8cb1u);
    if (x86_cc(c, 4)) { goto L_e8ccc; }
    X86_TICK(c, 12);
    // 0e8cb3  test byte ptr [0xc40cc], 1
    X86_AT(c, 0xe8cb3u);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(0xC40CCu))) & 0x1u, 1);
    // 0e8cba  jne 0xe8ccc
    X86_AT(c, 0xe8cbau);
    if (x86_cc(c, 5)) { goto L_e8ccc; }
    X86_TICK(c, 12);
    // 0e8cbc  test byte ptr [0xc40cc], 0x10
    X86_AT(c, 0xe8cbcu);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(0xC40CCu))) & 0x10u, 1);
    // 0e8cc3  jne 0xe8ccc
    X86_AT(c, 0xe8cc3u);
    if (x86_cc(c, 5)) { goto L_e8ccc; }
    X86_TICK(c, 9);
    // 0e8cc5  mov ecx, ebp
    X86_AT(c, 0xe8cc5u);
    c.r[1] = c.r[5];
    // 0e8cc7  call 0xe8c08
    X86_AT(c, 0xe8cc7u);
    push32(c, 0xe8cccu); x86_call_known(c, 0xe8c08u, f_000e8c08); X86_RET(c, 0xe8cccu);
L_e8ccc:
    X86_TICK(c, 11);
    // 0e8ccc  mov eax, dword ptr [0xc4530]
    X86_AT(c, 0xe8cccu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xC4530u)));
    // 0e8cd1  and eax, eax
    X86_AT(c, 0xe8cd1u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0e8cd3  je 0xe8ce7
    X86_AT(c, 0xe8cd3u);
    if (x86_cc(c, 4)) { goto L_e8ce7; }
    X86_TICK(c, 15);
    // 0e8cd5  push eax
    X86_AT(c, 0xe8cd5u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e8cd6  push 0xc4526
    X86_AT(c, 0xe8cd6u);
    { uint32_t v = 0xC4526u; push32(c, v); }
    // 0e8cdb  mov ecx, dword ptr [0xc40e4]
    X86_AT(c, 0xe8cdbu);
    c.r[1] = rd32((c.sbase[3] + (uint32_t)(0xC40E4u)));
    // 0e8ce1  call dword ptr [0xc40e0]
    X86_AT(c, 0xe8ce1u);
    { uint32_t t = rd32((c.sbase[3] + (uint32_t)(0xC40E0u))); push32(c, 0xe8ce7u); x86_call(c, t); X86_RET(c, 0xe8ce7u); }
L_e8ce7:
    X86_TICK(c, 12);
    // 0e8ce7  cmp byte ptr [ebp - 5], 0
    X86_AT(c, 0xe8ce7u);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFBu))), 0x0u, 0, 1);
    // 0e8ceb  je 0xe8cfd
    X86_AT(c, 0xe8cebu);
    if (x86_cc(c, 4)) { goto L_e8cfd; }
    X86_TICK(c, 12);
    // 0e8ced  test byte ptr [0xc40cc], 1
    X86_AT(c, 0xe8cedu);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(0xC40CCu))) & 0x1u, 1);
    // 0e8cf4  jne 0xe8cfd
    X86_AT(c, 0xe8cf4u);
    if (x86_cc(c, 5)) { goto L_e8cfd; }
    X86_TICK(c, 9);
    // 0e8cf6  mov ecx, ebp
    X86_AT(c, 0xe8cf6u);
    c.r[1] = c.r[5];
    // 0e8cf8  call 0xe8c08
    X86_AT(c, 0xe8cf8u);
    push32(c, 0xe8cfdu); x86_call_known(c, 0xe8c08u, f_000e8c08); X86_RET(c, 0xe8cfdu);
L_e8cfd:
    X86_TICK(c, 11);
    // 0e8cfd  mov eax, dword ptr [0xc40d4]
    X86_AT(c, 0xe8cfdu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xC40D4u)));
    // 0e8d02  cmp eax, 0xffff
    X86_AT(c, 0xe8d02u);
    (void)x86_sub(c, c.r[0], 0xFFFFu, 0, 4);
    // 0e8d07  je 0xe8d29
    X86_AT(c, 0xe8d07u);
    if (x86_cc(c, 4)) { goto L_e8d29; }
    X86_TICK(c, 11);
    // 0e8d09  mov edx, dword ptr [0xc4520]
    X86_AT(c, 0xe8d09u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(0xC4520u)));
    // 0e8d0f  cmp eax, edx
    X86_AT(c, 0xe8d0fu);
    (void)x86_sub(c, c.r[0], c.r[2], 0, 4);
    // 0e8d11  jbe 0xe8d29
    X86_AT(c, 0xe8d11u);
    if (x86_cc(c, 6)) { goto L_e8d29; }
    X86_TICK(c, 23);
    // 0e8d13  xchg edi, eax
    X86_AT(c, 0xe8d13u);
    { uint32_t t = c.r[7]; c.r[7] = c.r[0]; c.r[0] = t; }
    // 0e8d14  sub edi, edx
    X86_AT(c, 0xe8d14u);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[2], 0, 4); }
    // 0e8d16  add dword ptr [0xc40dc], edi
    X86_AT(c, 0xe8d16u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xC40DCu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[7], 0, 4)); }
    // 0e8d1c  push edi
    X86_AT(c, 0xe8d1cu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e8d1d  push 0xc40e8
    X86_AT(c, 0xe8d1du);
    { uint32_t v = 0xC40E8u; push32(c, v); }
    // 0e8d22  call 0xe8658
    X86_AT(c, 0xe8d22u);
    push32(c, 0xe8d27u); x86_call_known(c, 0xe8658u, f_000e8658); X86_RET(c, 0xe8d27u);
    X86_TICK(c, 7);
    // 0e8d27  jmp 0xe8d4c
    X86_AT(c, 0xe8d27u);
    goto L_e8d4c;
L_e8d29:
    X86_TICK(c, 12);
    // 0e8d29  cmp dword ptr [0xc40d4], 0
    X86_AT(c, 0xe8d29u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xC40D4u))), 0x0u, 0, 4);
    // 0e8d30  jne 0xe8d4c
    X86_AT(c, 0xe8d30u);
    if (x86_cc(c, 5)) { goto L_e8d4c; }
    X86_TICK(c, 12);
    // 0e8d32  cmp dword ptr [ebp + 8], 0
    X86_AT(c, 0xe8d32u);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))), 0x0u, 0, 4);
    // 0e8d36  jne 0xe8d4c
    X86_AT(c, 0xe8d36u);
    if (x86_cc(c, 5)) { goto L_e8d4c; }
    X86_TICK(c, 4);
    // 0e8d38  mov dword ptr [0xc451c], 0x1f
    X86_AT(c, 0xe8d38u);
    wr32((c.sbase[3] + (uint32_t)(0xC451Cu)), 0x1Fu);
    // 0e8d42  mov dword ptr [0xc4520], 0
    X86_AT(c, 0xe8d42u);
    wr32((c.sbase[3] + (uint32_t)(0xC4520u)), 0x0u);
L_e8d4c:
    X86_TICK(c, 32);
    // 0e8d4c  mov eax, dword ptr [0xc4520]
    X86_AT(c, 0xe8d4cu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xC4520u)));
    // 0e8d51  add dword ptr [0xc40dc], eax
    X86_AT(c, 0xe8d51u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xC40DCu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 0e8d57  push eax
    X86_AT(c, 0xe8d57u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e8d58  mov eax, dword ptr [0xc451c]
    X86_AT(c, 0xe8d58u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xC451Cu)));
    // 0e8d5d  add eax, 0xc44fb
    X86_AT(c, 0xe8d5du);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0xC44FBu, 0, 4); }
    // 0e8d62  push eax
    X86_AT(c, 0xe8d62u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e8d63  mov ecx, dword ptr [0xc40e4]
    X86_AT(c, 0xe8d63u);
    c.r[1] = rd32((c.sbase[3] + (uint32_t)(0xC40E4u)));
    // 0e8d69  call dword ptr [0xc40e0]
    X86_AT(c, 0xe8d69u);
    { uint32_t t = rd32((c.sbase[3] + (uint32_t)(0xC40E0u))); push32(c, 0xe8d6fu); x86_call(c, t); X86_RET(c, 0xe8d6fu); }
    X86_TICK(c, 12);
    // 0e8d6f  cmp byte ptr [ebp - 5], 0
    X86_AT(c, 0xe8d6fu);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFBu))), 0x0u, 0, 1);
    // 0e8d73  je 0xe8d7c
    X86_AT(c, 0xe8d73u);
    if (x86_cc(c, 4)) { goto L_e8d7c; }
    X86_TICK(c, 9);
    // 0e8d75  mov ecx, ebp
    X86_AT(c, 0xe8d75u);
    c.r[1] = c.r[5];
    // 0e8d77  call 0xe8c08
    X86_AT(c, 0xe8d77u);
    push32(c, 0xe8d7cu); x86_call_known(c, 0xe8c08u, f_000e8c08); X86_RET(c, 0xe8d7cu);
L_e8d7c:
    X86_TICK(c, 24);
    // 0e8d7c  pop edi
    X86_AT(c, 0xe8d7cu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0e8d7d  pop ebx
    X86_AT(c, 0xe8d7du);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0e8d7e  leave 
    X86_AT(c, 0xe8d7eu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0e8d7f  ret 8
    X86_AT(c, 0xe8d7fu);
    c.eip = pop32(c); c.r[4] += 0x8u; return;
    x86_fault(c, 0xe8c34u, "ran off the end of a function");
}
void f_000e8d90(X86Cpu& c) {
    X86_TICK(c, 25);
    // 0e8d90  push ebp
    X86_AT(c, 0xe8d90u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0e8d91  mov ebp, esp
    X86_AT(c, 0xe8d91u);
    c.r[5] = c.r[4];
    // 0e8d93  push ecx
    X86_AT(c, 0xe8d93u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 0e8d94  push esi
    X86_AT(c, 0xe8d94u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0e8d95  push edi
    X86_AT(c, 0xe8d95u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e8d96  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0xe8d96u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0e8d99  mov esi, dword ptr [ebp + 0xc]
    X86_AT(c, 0xe8d99u);
    c.r[6] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0e8d9c  jmp 0xe8dbe
    X86_AT(c, 0xe8d9cu);
    goto L_e8dbe;
L_e8d9e:
    X86_TICK(c, 14);
    // 0e8d9e  mov ecx, edi
    X86_AT(c, 0xe8d9eu);
    c.r[1] = c.r[7];
    // 0e8da0  and ecx, 0xf
    X86_AT(c, 0xe8da0u);
    { uint32_t v = c.r[1]; c.r[1] = x86_logic(c, v & 0xFu, 4); }
    // 0e8da6  shr edi, 4
    X86_AT(c, 0xe8da6u);
    { uint32_t v = c.r[7]; bool w; uint32_t r = x86_shift(c, 5, v, 0x4u, 4, w); if (w) c.r[7] = r; }
    // 0e8da9  cmp ecx, 0xa
    X86_AT(c, 0xe8da9u);
    (void)x86_sub(c, c.r[1], 0xAu, 0, 4);
    // 0e8dac  jae 0xe8db3
    X86_AT(c, 0xe8dacu);
    if (x86_cc(c, 3)) { goto L_e8db3; }
    X86_TICK(c, 9);
    // 0e8dae  lea eax, [ecx + 0x30]
    X86_AT(c, 0xe8daeu);
    c.r[0] = (uint32_t)(c.r[1] + 0x30u);
    // 0e8db1  jmp 0xe8db6
    X86_AT(c, 0xe8db1u);
    goto L_e8db6;
L_e8db3:
    X86_TICK(c, 2);
    // 0e8db3  lea eax, [ecx + 0x57]
    X86_AT(c, 0xe8db3u);
    c.r[0] = (uint32_t)(c.r[1] + 0x57u);
L_e8db6:
    X86_TICK(c, 8);
    // 0e8db6  mov edx, dword ptr [ebp - 4]
    X86_AT(c, 0xe8db6u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0e8db9  mov byte ptr [edx + esi*1 - 0xf], al
    X86_AT(c, 0xe8db9u);
    wr8((c.sbase[3] + (uint32_t)(c.r[2] + c.r[6] + 0xFFFFFFF1u)), g8(c, 0));
    // 0e8dbd  dec esi
    X86_AT(c, 0xe8dbdu);
    { uint32_t v = c.r[6]; c.r[6] = x86_dec(c, v, 4); }
L_e8dbe:
    X86_TICK(c, 7);
    // 0e8dbe  and edi, edi
    X86_AT(c, 0xe8dbeu);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & c.r[7], 4); }
    // 0e8dc0  ja 0xe8d9e
    X86_AT(c, 0xe8dc0u);
    if (x86_cc(c, 7)) { X86_POLL(c, 0xe8d9eu); goto L_e8d9e; }
    X86_TICK(c, 24);
    // 0e8dc2  pop edi
    X86_AT(c, 0xe8dc2u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0e8dc3  pop esi
    X86_AT(c, 0xe8dc3u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0e8dc4  leave 
    X86_AT(c, 0xe8dc4u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0e8dc5  ret 8
    X86_AT(c, 0xe8dc5u);
    c.eip = pop32(c); c.r[4] += 0x8u; return;
    x86_fault(c, 0xe8d90u, "ran off the end of a function");
}
void f_000e8dd8(X86Cpu& c) {
    X86_TICK(c, 66);
    // 0e8dd8  push ebp
    X86_AT(c, 0xe8dd8u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0e8dd9  mov ebp, esp
    X86_AT(c, 0xe8dd9u);
    c.r[5] = c.r[4];
    // 0e8ddb  push ecx
    X86_AT(c, 0xe8ddbu);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 0e8ddc  sub esp, 0xc
    X86_AT(c, 0xe8ddcu);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, 0xCu, 0, 4); }
    // 0e8ddf  push ebx
    X86_AT(c, 0xe8ddfu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0e8de0  push esi
    X86_AT(c, 0xe8de0u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0e8de1  push edi
    X86_AT(c, 0xe8de1u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e8de2  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0xe8de2u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0e8de5  mov eax, 0x30303030
    X86_AT(c, 0xe8de5u);
    c.r[0] = 0x30303030u;
    // 0e8dea  lea ecx, [ebp - 0xe]
    X86_AT(c, 0xe8deau);
    c.r[1] = (uint32_t)(c.r[5] + 0xFFFFFFF2u);
    // 0e8ded  push edi
    X86_AT(c, 0xe8dedu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e8dee  mov edi, ecx
    X86_AT(c, 0xe8deeu);
    c.r[7] = c.r[1];
    // 0e8df0  stosd dword ptr es:[edi], eax
    X86_AT(c, 0xe8df0u);
    x86_string(c, 2, 4, 0, 4, 3);
    // 0e8df1  stosd dword ptr es:[edi], eax
    X86_AT(c, 0xe8df1u);
    x86_string(c, 2, 4, 0, 4, 3);
    // 0e8df2  stosw word ptr es:[edi], ax
    X86_AT(c, 0xe8df2u);
    x86_string(c, 2, 2, 0, 4, 3);
    // 0e8df4  pop edi
    X86_AT(c, 0xe8df4u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0e8df5  mov ebx, 8
    X86_AT(c, 0xe8df5u);
    c.r[3] = 0x8u;
    // 0e8dfa  push ebx
    X86_AT(c, 0xe8dfau);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0e8dfb  push edi
    X86_AT(c, 0xe8dfbu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e8dfc  mov ecx, ebp
    X86_AT(c, 0xe8dfcu);
    c.r[1] = c.r[5];
    // 0e8dfe  call 0xe8d90
    X86_AT(c, 0xe8dfeu);
    push32(c, 0xe8e03u); x86_call_known(c, 0xe8d90u, f_000e8d90); X86_RET(c, 0xe8e03u);
    X86_TICK(c, 24);
    // 0e8e03  add dword ptr [0xc40dc], ebx
    X86_AT(c, 0xe8e03u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xC40DCu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[3], 0, 4)); }
    // 0e8e09  push ebx
    X86_AT(c, 0xe8e09u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0e8e0a  lea eax, [ebp - 0xe]
    X86_AT(c, 0xe8e0au);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFF2u);
    // 0e8e0d  push eax
    X86_AT(c, 0xe8e0du);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e8e0e  mov ecx, dword ptr [0xc40e4]
    X86_AT(c, 0xe8e0eu);
    c.r[1] = rd32((c.sbase[3] + (uint32_t)(0xC40E4u)));
    // 0e8e14  call dword ptr [0xc40e0]
    X86_AT(c, 0xe8e14u);
    { uint32_t t = rd32((c.sbase[3] + (uint32_t)(0xC40E0u))); push32(c, 0xe8e1au); x86_call(c, t); X86_RET(c, 0xe8e1au); }
    X86_TICK(c, 28);
    // 0e8e1a  pop edi
    X86_AT(c, 0xe8e1au);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0e8e1b  pop esi
    X86_AT(c, 0xe8e1bu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0e8e1c  pop ebx
    X86_AT(c, 0xe8e1cu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0e8e1d  leave 
    X86_AT(c, 0xe8e1du);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0e8e1e  ret 4
    X86_AT(c, 0xe8e1eu);
    c.eip = pop32(c); c.r[4] += 0x4u; return;
    x86_fault(c, 0xe8dd8u, "ran off the end of a function");
}
void f_000e8e2c(X86Cpu& c) {
    X86_TICK(c, 32);
    // 0e8e2c  push ebp
    X86_AT(c, 0xe8e2cu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0e8e2d  mov ebp, esp
    X86_AT(c, 0xe8e2du);
    c.r[5] = c.r[4];
    // 0e8e2f  push edi
    X86_AT(c, 0xe8e2fu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e8e30  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0xe8e30u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0e8e33  sub eax, eax
    X86_AT(c, 0xe8e33u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0e8e35  mov dword ptr [0xc40dc], eax
    X86_AT(c, 0xe8e35u);
    wr32((c.sbase[3] + (uint32_t)(0xC40DCu)), c.r[0]);
    // 0e8e3a  mov edx, 0x7fffffff
    X86_AT(c, 0xe8e3au);
    c.r[2] = 0x7FFFFFFFu;
    // 0e8e3f  push edi
    X86_AT(c, 0xe8e3fu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e8e40  mov ecx, edx
    X86_AT(c, 0xe8e40u);
    c.r[1] = c.r[2];
    // 0e8e42  scasb al, byte ptr es:[edi]
    X86_AT(c, 0xe8e42u);
    x86_string(c, 4, 1, 242, 4, 3);
    // 0e8e44  jne 0xe8e49
    X86_AT(c, 0xe8e44u);
    if (x86_cc(c, 5)) { goto L_e8e49; }
    X86_TICK(c, 4);
    // 0e8e46  inc ecx
    X86_AT(c, 0xe8e46u);
    { uint32_t v = c.r[1]; c.r[1] = x86_inc(c, v, 4); }
    // 0e8e47  sub edx, ecx
    X86_AT(c, 0xe8e47u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[1], 0, 4); }
L_e8e49:
    X86_TICK(c, 27);
    // 0e8e49  pop edi
    X86_AT(c, 0xe8e49u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0e8e4a  mov dword ptr [0xc44f0], edx
    X86_AT(c, 0xe8e4au);
    wr32((c.sbase[3] + (uint32_t)(0xC44F0u)), c.r[2]);
    // 0e8e50  mov eax, dword ptr [ebp + 0xc]
    X86_AT(c, 0xe8e50u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0e8e53  mov dword ptr [0xc44e4], eax
    X86_AT(c, 0xe8e53u);
    wr32((c.sbase[3] + (uint32_t)(0xC44E4u)), c.r[0]);
    // 0e8e58  push ebp
    X86_AT(c, 0xe8e58u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0e8e59  push 0xe8e74
    X86_AT(c, 0xe8e59u);
    { uint32_t v = 0xE8E74u; push32(c, v); }
    // 0e8e5e  push edi
    X86_AT(c, 0xe8e5eu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e8e5f  mov ecx, ebp
    X86_AT(c, 0xe8e5fu);
    c.r[1] = c.r[5];
    // 0e8e61  call 0xe881c
    X86_AT(c, 0xe8e61u);
    push32(c, 0xe8e66u); x86_call_known(c, 0xe881cu, f_000e881c); X86_RET(c, 0xe8e66u);
    X86_TICK(c, 20);
    // 0e8e66  pop edi
    X86_AT(c, 0xe8e66u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0e8e67  leave 
    X86_AT(c, 0xe8e67u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0e8e68  ret 8
    X86_AT(c, 0xe8e68u);
    c.eip = pop32(c); c.r[4] += 0x8u; return;
    x86_fault(c, 0xe8e2cu, "ran off the end of a function");
}
void f_000e8e74(X86Cpu& c) {
    X86_TICK(c, 28);
    // 0e8e74  push ebp
    X86_AT(c, 0xe8e74u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0e8e75  mov ebp, esp
    X86_AT(c, 0xe8e75u);
    c.r[5] = c.r[4];
    // 0e8e77  push ecx
    X86_AT(c, 0xe8e77u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 0e8e78  sub esp, 8
    X86_AT(c, 0xe8e78u);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, 0x8u, 0, 4); }
    // 0e8e7b  push ebx
    X86_AT(c, 0xe8e7bu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0e8e7c  push esi
    X86_AT(c, 0xe8e7cu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0e8e7d  push edi
    X86_AT(c, 0xe8e7du);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e8e7e  mov bl, byte ptr [ebp + 8]
    X86_AT(c, 0xe8e7eu);
    s8(c, 3, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))));
    // 0e8e81  movzx eax, bl
    X86_AT(c, 0xe8e81u);
    c.r[0] = g8(c, 3);
    // 0e8e84  cmp eax, 0x25
    X86_AT(c, 0xe8e84u);
    (void)x86_sub(c, c.r[0], 0x25u, 0, 4);
    // 0e8e87  je 0xe904d
    X86_AT(c, 0xe8e87u);
    if (x86_cc(c, 4)) { goto L_e904d; }
    X86_TICK(c, 7);
    // 0e8e8d  cmp eax, 0x30
    X86_AT(c, 0xe8e8du);
    (void)x86_sub(c, c.r[0], 0x30u, 0, 4);
    // 0e8e90  je 0xe8f7a
    X86_AT(c, 0xe8e90u);
    if (x86_cc(c, 4)) { goto L_e8f7a; }
    X86_TICK(c, 9);
    // 0e8e96  sub eax, 0x45
    X86_AT(c, 0xe8e96u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, 0x45u, 0, 4); }
    // 0e8e99  cmp eax, 0x33
    X86_AT(c, 0xe8e99u);
    (void)x86_sub(c, c.r[0], 0x33u, 0, 4);
    // 0e8e9c  ja 0xe910a
    X86_AT(c, 0xe8e9cu);
    if (x86_cc(c, 7)) { goto L_e910a; }
    X86_TICK(c, 7);
    // 0e8ea2  jmp dword ptr cs:[eax*4 + 0xe8eaa]
    X86_AT(c, 0xe8ea2u);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xE8EAAu)));
      switch (t) {
      case 0xe8f9du: goto L_e8f9d;
      case 0xe8fccu: goto L_e8fcc;
      case 0xe9010u: goto L_e9010;
      case 0xe9032u: goto L_e9032;
      case 0xe908du: goto L_e908d;
      case 0xe90a0u: goto L_e90a0;
      case 0xe910au: goto L_e910a;
      default: x86_jump(c, t); return; } }
L_e8f7a:
    X86_TICK(c, 29);
    // 0e8f7a  mov eax, dword ptr [0xc44ec]
    X86_AT(c, 0xe8f7au);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xC44ECu)));
    // 0e8f7f  add dword ptr [0xc40dc], eax
    X86_AT(c, 0xe8f7fu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xC40DCu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 0e8f85  push eax
    X86_AT(c, 0xe8f85u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e8f86  push dword ptr [0xc44e8]
    X86_AT(c, 0xe8f86u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xC44E8u))); push32(c, v); }
    // 0e8f8c  mov ecx, dword ptr [0xc40e4]
    X86_AT(c, 0xe8f8cu);
    c.r[1] = rd32((c.sbase[3] + (uint32_t)(0xC40E4u)));
    // 0e8f92  call dword ptr [0xc40e0]
    X86_AT(c, 0xe8f92u);
    { uint32_t t = rd32((c.sbase[3] + (uint32_t)(0xC40E0u))); push32(c, 0xe8f98u); x86_call(c, t); X86_RET(c, 0xe8f98u); }
    X86_TICK(c, 7);
    // 0e8f98  jmp 0xe9113
    X86_AT(c, 0xe8f98u);
    goto L_e9113;
L_e8f9d:
    X86_TICK(c, 42);
    // 0e8f9d  cmp byte ptr [0xc40d8], 2
    X86_AT(c, 0xe8f9du);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0xC40D8u))), 0x2u, 0, 1);
    // 0e8fa4  mov eax, dword ptr [0xc44e4]
    X86_AT(c, 0xe8fa4u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xC44E4u)));
    // 0e8fa9  mov edx, dword ptr [eax]
    X86_AT(c, 0xe8fa9u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[0])));
    // 0e8fab  mov dword ptr [0xc44f4], edx
    X86_AT(c, 0xe8fabu);
    wr32((c.sbase[3] + (uint32_t)(0xC44F4u)), c.r[2]);
    // 0e8fb1  add dword ptr [0xc44e4], 4
    X86_AT(c, 0xe8fb1u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xC44E4u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0x4u, 0, 4)); }
    // 0e8fb8  push ebx
    X86_AT(c, 0xe8fb8u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0e8fb9  push dword ptr [0xc44f4]
    X86_AT(c, 0xe8fb9u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xC44F4u))); push32(c, v); }
    // 0e8fbf  mov ecx, dword ptr [ebp - 4]
    X86_AT(c, 0xe8fbfu);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0e8fc2  call 0xe8c34
    X86_AT(c, 0xe8fc2u);
    push32(c, 0xe8fc7u); x86_call_known(c, 0xe8c34u, f_000e8c34); X86_RET(c, 0xe8fc7u);
    X86_TICK(c, 7);
    // 0e8fc7  jmp 0xe9113
    X86_AT(c, 0xe8fc7u);
    goto L_e9113;
L_e8fcc:
    X86_TICK(c, 12);
    // 0e8fcc  cmp byte ptr [0xc40d8], 3
    X86_AT(c, 0xe8fccu);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0xC40D8u))), 0x3u, 0, 1);
    // 0e8fd3  jne 0xe8ff4
    X86_AT(c, 0xe8fd3u);
    if (x86_cc(c, 5)) { goto L_e8ff4; }
    X86_TICK(c, 28);
    // 0e8fd5  push ebx
    X86_AT(c, 0xe8fd5u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0e8fd6  mov eax, dword ptr [0xc44e4]
    X86_AT(c, 0xe8fd6u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xC44E4u)));
    // 0e8fdb  push dword ptr [eax + 8]
    X86_AT(c, 0xe8fdbu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0x8u))); push32(c, v); }
    // 0e8fde  push dword ptr [eax + 4]
    X86_AT(c, 0xe8fdeu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0x4u))); push32(c, v); }
    // 0e8fe1  push dword ptr [eax]
    X86_AT(c, 0xe8fe1u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[0]))); push32(c, v); }
    // 0e8fe3  call 0xeae50
    X86_AT(c, 0xe8fe3u);
    push32(c, 0xe8fe8u); x86_call_known(c, 0xeae50u, f_000eae50); X86_RET(c, 0xe8fe8u);
    X86_TICK(c, 14);
    // 0e8fe8  add dword ptr [0xc44e4], 0xa
    X86_AT(c, 0xe8fe8u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xC44E4u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0xAu, 0, 4)); }
    // 0e8fef  jmp 0xe9113
    X86_AT(c, 0xe8fefu);
    goto L_e9113;
L_e8ff4:
    X86_TICK(c, 23);
    // 0e8ff4  push ebx
    X86_AT(c, 0xe8ff4u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0e8ff5  mov eax, dword ptr [0xc44e4]
    X86_AT(c, 0xe8ff5u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xC44E4u)));
    // 0e8ffa  push dword ptr [eax + 4]
    X86_AT(c, 0xe8ffau);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0x4u))); push32(c, v); }
    // 0e8ffd  push dword ptr [eax]
    X86_AT(c, 0xe8ffdu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[0]))); push32(c, v); }
    // 0e8fff  call 0xea724
    X86_AT(c, 0xe8fffu);
    push32(c, 0xe9004u); x86_call_known(c, 0xea724u, f_000ea724); X86_RET(c, 0xe9004u);
    X86_TICK(c, 14);
    // 0e9004  add dword ptr [0xc44e4], 8
    X86_AT(c, 0xe9004u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xC44E4u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0x8u, 0, 4)); }
    // 0e900b  jmp 0xe9113
    X86_AT(c, 0xe900bu);
    goto L_e9113;
L_e9010:
    X86_TICK(c, 30);
    // 0e9010  mov eax, dword ptr [0xc44e4]
    X86_AT(c, 0xe9010u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xC44E4u)));
    // 0e9015  mov edx, dword ptr [eax]
    X86_AT(c, 0xe9015u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[0])));
    // 0e9017  mov dword ptr [0xc44f4], edx
    X86_AT(c, 0xe9017u);
    wr32((c.sbase[3] + (uint32_t)(0xC44F4u)), c.r[2]);
    // 0e901d  add dword ptr [0xc44e4], 4
    X86_AT(c, 0xe901du);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xC44E4u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0x4u, 0, 4)); }
    // 0e9024  push edx
    X86_AT(c, 0xe9024u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0e9025  mov ecx, dword ptr [ebp - 4]
    X86_AT(c, 0xe9025u);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0e9028  call 0xe8dd8
    X86_AT(c, 0xe9028u);
    push32(c, 0xe902du); x86_call_known(c, 0xe8dd8u, f_000e8dd8); X86_RET(c, 0xe902du);
    X86_TICK(c, 7);
    // 0e902d  jmp 0xe9113
    X86_AT(c, 0xe902du);
    goto L_e9113;
L_e9032:
    X86_TICK(c, 28);
    // 0e9032  mov eax, dword ptr [0xc40dc]
    X86_AT(c, 0xe9032u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xC40DCu)));
    // 0e9037  mov edx, dword ptr [0xc44e4]
    X86_AT(c, 0xe9037u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(0xC44E4u)));
    // 0e903d  mov ecx, dword ptr [edx]
    X86_AT(c, 0xe903du);
    c.r[1] = rd32((c.sbase[3] + (uint32_t)(c.r[2])));
    // 0e903f  mov dword ptr [ecx], eax
    X86_AT(c, 0xe903fu);
    wr32((c.sbase[3] + (uint32_t)(c.r[1])), c.r[0]);
    // 0e9041  add dword ptr [0xc44e4], 4
    X86_AT(c, 0xe9041u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xC44E4u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0x4u, 0, 4)); }
    // 0e9048  jmp 0xe9113
    X86_AT(c, 0xe9048u);
    goto L_e9113;
L_e904d:
    X86_TICK(c, 2);
    // 0e904d  mov byte ptr [ebp - 6], 0x25
    X86_AT(c, 0xe904du);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFAu)), 0x25u);
L_e9051:
    X86_TICK(c, 18);
    // 0e9051  inc dword ptr [0xc40dc]
    X86_AT(c, 0xe9051u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xC40DCu)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0e9057  test byte ptr [0xc40cc], 1
    X86_AT(c, 0xe9057u);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(0xC40CCu))) & 0x1u, 1);
    // 0e905e  jne 0xe9067
    X86_AT(c, 0xe905eu);
    if (x86_cc(c, 5)) { goto L_e9067; }
    X86_TICK(c, 9);
    // 0e9060  push 1
    X86_AT(c, 0xe9060u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0e9062  call 0xe86a0
    X86_AT(c, 0xe9062u);
    push32(c, 0xe9067u); x86_call_known(c, 0xe86a0u, f_000e86a0); X86_RET(c, 0xe9067u);
L_e9067:
    X86_TICK(c, 17);
    // 0e9067  push 1
    X86_AT(c, 0xe9067u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0e9069  lea eax, [ebp - 6]
    X86_AT(c, 0xe9069u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFFAu);
    // 0e906c  push eax
    X86_AT(c, 0xe906cu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e906d  mov ecx, dword ptr [0xc40e4]
    X86_AT(c, 0xe906du);
    c.r[1] = rd32((c.sbase[3] + (uint32_t)(0xC40E4u)));
    // 0e9073  call dword ptr [0xc40e0]
    X86_AT(c, 0xe9073u);
    { uint32_t t = rd32((c.sbase[3] + (uint32_t)(0xC40E0u))); push32(c, 0xe9079u); x86_call(c, t); X86_RET(c, 0xe9079u); }
    X86_TICK(c, 12);
    // 0e9079  test byte ptr [0xc40cc], 1
    X86_AT(c, 0xe9079u);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(0xC40CCu))) & 0x1u, 1);
    // 0e9080  je 0xe9113
    X86_AT(c, 0xe9080u);
    if (x86_cc(c, 4)) { goto L_e9113; }
    X86_TICK(c, 9);
    // 0e9086  push 1
    X86_AT(c, 0xe9086u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0e9088  jmp 0xe9103
    X86_AT(c, 0xe9088u);
    goto L_e9103;
L_e908d:
    X86_TICK(c, 24);
    // 0e908d  mov eax, dword ptr [0xc44e4]
    X86_AT(c, 0xe908du);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xC44E4u)));
    // 0e9092  mov dl, byte ptr [eax]
    X86_AT(c, 0xe9092u);
    s8(c, 2, rd8((c.sbase[3] + (uint32_t)(c.r[0]))));
    // 0e9094  mov byte ptr [ebp - 6], dl
    X86_AT(c, 0xe9094u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFAu)), g8(c, 2));
    // 0e9097  add dword ptr [0xc44e4], 4
    X86_AT(c, 0xe9097u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xC44E4u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0x4u, 0, 4)); }
    // 0e909e  jmp 0xe9051
    X86_AT(c, 0xe909eu);
    X86_POLL(c, 0xe9051u); goto L_e9051;
L_e90a0:
    X86_TICK(c, 22);
    // 0e90a0  mov eax, dword ptr [0xc44e4]
    X86_AT(c, 0xe90a0u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xC44E4u)));
    // 0e90a5  mov edi, dword ptr [eax]
    X86_AT(c, 0xe90a5u);
    c.r[7] = rd32((c.sbase[3] + (uint32_t)(c.r[0])));
    // 0e90a7  add dword ptr [0xc44e4], 4
    X86_AT(c, 0xe90a7u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xC44E4u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0x4u, 0, 4)); }
    // 0e90ae  and edi, edi
    X86_AT(c, 0xe90aeu);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & c.r[7], 4); }
    // 0e90b0  je 0xe9113
    X86_AT(c, 0xe90b0u);
    if (x86_cc(c, 4)) { goto L_e9113; }
    X86_TICK(c, 22);
    // 0e90b2  mov edx, dword ptr [0xc40d4]
    X86_AT(c, 0xe90b2u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(0xC40D4u)));
    // 0e90b8  sub eax, eax
    X86_AT(c, 0xe90b8u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0e90ba  push edi
    X86_AT(c, 0xe90bau);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e90bb  mov ecx, edx
    X86_AT(c, 0xe90bbu);
    c.r[1] = c.r[2];
    // 0e90bd  scasb al, byte ptr es:[edi]
    X86_AT(c, 0xe90bdu);
    x86_string(c, 4, 1, 242, 4, 3);
    // 0e90bf  jne 0xe90c4
    X86_AT(c, 0xe90bfu);
    if (x86_cc(c, 5)) { goto L_e90c4; }
    X86_TICK(c, 4);
    // 0e90c1  inc ecx
    X86_AT(c, 0xe90c1u);
    { uint32_t v = c.r[1]; c.r[1] = x86_inc(c, v, 4); }
    // 0e90c2  sub edx, ecx
    X86_AT(c, 0xe90c2u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[1], 0, 4); }
L_e90c4:
    X86_TICK(c, 17);
    // 0e90c4  pop edi
    X86_AT(c, 0xe90c4u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0e90c5  mov dword ptr [ebp - 0xc], edx
    X86_AT(c, 0xe90c5u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)), c.r[2]);
    // 0e90c8  mov ecx, dword ptr [0xc40d4]
    X86_AT(c, 0xe90c8u);
    c.r[1] = rd32((c.sbase[3] + (uint32_t)(0xC40D4u)));
    // 0e90ce  cmp edx, ecx
    X86_AT(c, 0xe90ceu);
    (void)x86_sub(c, c.r[2], c.r[1], 0, 4);
    // 0e90d0  jb 0xe90d4
    X86_AT(c, 0xe90d0u);
    if (x86_cc(c, 2)) { goto L_e90d4; }
    X86_TICK(c, 2);
    // 0e90d2  mov edx, ecx
    X86_AT(c, 0xe90d2u);
    c.r[2] = c.r[1];
L_e90d4:
    X86_TICK(c, 21);
    // 0e90d4  mov esi, edx
    X86_AT(c, 0xe90d4u);
    c.r[6] = c.r[2];
    // 0e90d6  add dword ptr [0xc40dc], esi
    X86_AT(c, 0xe90d6u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xC40DCu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[6], 0, 4)); }
    // 0e90dc  test byte ptr [0xc40cc], 1
    X86_AT(c, 0xe90dcu);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(0xC40CCu))) & 0x1u, 1);
    // 0e90e3  jne 0xe90eb
    X86_AT(c, 0xe90e3u);
    if (x86_cc(c, 5)) { goto L_e90eb; }
    X86_TICK(c, 9);
    // 0e90e5  push esi
    X86_AT(c, 0xe90e5u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0e90e6  call 0xe86a0
    X86_AT(c, 0xe90e6u);
    push32(c, 0xe90ebu); x86_call_known(c, 0xe86a0u, f_000e86a0); X86_RET(c, 0xe90ebu);
L_e90eb:
    X86_TICK(c, 15);
    // 0e90eb  push esi
    X86_AT(c, 0xe90ebu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0e90ec  push edi
    X86_AT(c, 0xe90ecu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e90ed  mov ecx, dword ptr [0xc40e4]
    X86_AT(c, 0xe90edu);
    c.r[1] = rd32((c.sbase[3] + (uint32_t)(0xC40E4u)));
    // 0e90f3  call dword ptr [0xc40e0]
    X86_AT(c, 0xe90f3u);
    { uint32_t t = rd32((c.sbase[3] + (uint32_t)(0xC40E0u))); push32(c, 0xe90f9u); x86_call(c, t); X86_RET(c, 0xe90f9u); }
    X86_TICK(c, 12);
    // 0e90f9  test byte ptr [0xc40cc], 1
    X86_AT(c, 0xe90f9u);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(0xC40CCu))) & 0x1u, 1);
    // 0e9100  je 0xe9113
    X86_AT(c, 0xe9100u);
    if (x86_cc(c, 4)) { goto L_e9113; }
    X86_TICK(c, 2);
    // 0e9102  push esi
    X86_AT(c, 0xe9102u);
    { uint32_t v = c.r[6]; push32(c, v); }
L_e9103:
    X86_TICK(c, 7);
    // 0e9103  call 0xe86a0
    X86_AT(c, 0xe9103u);
    push32(c, 0xe9108u); x86_call_known(c, 0xe86a0u, f_000e86a0); X86_RET(c, 0xe9108u);
    X86_TICK(c, 7);
    // 0e9108  jmp 0xe9113
    X86_AT(c, 0xe9108u);
    goto L_e9113;
L_e910a:
    X86_TICK(c, 2);
    // 0e910a  mov word ptr [0xc453a], 1
    X86_AT(c, 0xe910au);
    wr16((c.sbase[3] + (uint32_t)(0xC453Au)), 0x1u);
L_e9113:
    X86_TICK(c, 28);
    // 0e9113  pop edi
    X86_AT(c, 0xe9113u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0e9114  pop esi
    X86_AT(c, 0xe9114u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0e9115  pop ebx
    X86_AT(c, 0xe9115u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0e9116  leave 
    X86_AT(c, 0xe9116u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0e9117  ret 4
    X86_AT(c, 0xe9117u);
    c.eip = pop32(c); c.r[4] += 0x4u; return;
    x86_fault(c, 0xe8e74u, "ran off the end of a function");
}
}

#include "p_game_funcs.h"
namespace p_game {
void f_0009594a(X86Cpu& c) {
    X86_TICK(c, 11);
    // 09594a  mov ecx, dword ptr [0x8a764]
    X86_AT(c, 0x9594au);
    c.r[1] = rd32((c.sbase[3] + (uint32_t)(0x8A764u)));
    // 095950  call dword ptr [0x8a760]
    X86_AT(c, 0x95950u);
    { uint32_t t = rd32((c.sbase[3] + (uint32_t)(0x8A760u))); push32(c, 0x95956u); x86_call(c, t); X86_RET(c, 0x95956u); }
    X86_TICK(c, 16);
    // 095956  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0x95956u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 095959  cmp byte ptr [eax - 9], 0
    X86_AT(c, 0x95959u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[0] + 0xFFFFFFF7u))), 0x0u, 0, 1);
    // 09595d  jne 0x95973
    X86_AT(c, 0x9595du);
    if (x86_cc(c, 5)) { goto L_95973; }
    X86_TICK(c, 11);
    // 09595f  mov eax, dword ptr [0x8a754]
    X86_AT(c, 0x9595fu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x8A754u)));
    // 095964  and eax, eax
    X86_AT(c, 0x95964u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 095966  je 0x95973
    X86_AT(c, 0x95966u);
    if (x86_cc(c, 4)) { goto L_95973; }
    X86_TICK(c, 11);
    // 095968  push eax
    X86_AT(c, 0x95968u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 095969  push 0x8a768
    X86_AT(c, 0x95969u);
    { uint32_t v = 0x8A768u; push32(c, v); }
    // 09596e  call 0x93b8c
    X86_AT(c, 0x9596eu);
    push32(c, 0x95973u); x86_call_known(c, 0x93b8cu, f_00093b8c); X86_RET(c, 0x95973u);
L_95973:
    X86_TICK(c, 28);
    // 095973  pop edi
    X86_AT(c, 0x95973u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 095974  pop esi
    X86_AT(c, 0x95974u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 095975  pop ebx
    X86_AT(c, 0x95975u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 095976  leave 
    X86_AT(c, 0x95976u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 095977  ret 
    X86_AT(c, 0x95977u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x9594au, "ran off the end of a function");
}
void f_00095980(X86Cpu& c) {
    X86_TICK(c, 34);
    // 095980  push ebp
    X86_AT(c, 0x95980u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 095981  mov ebp, esp
    X86_AT(c, 0x95981u);
    c.r[5] = c.r[4];
    // 095983  push ecx
    X86_AT(c, 0x95983u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 095984  sub esp, 0xc
    X86_AT(c, 0x95984u);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, 0xCu, 0, 4); }
    // 095987  push ebx
    X86_AT(c, 0x95987u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 095988  push esi
    X86_AT(c, 0x95988u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 095989  push edi
    X86_AT(c, 0x95989u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 09598a  mov edi, 1
    X86_AT(c, 0x9598au);
    c.r[7] = 0x1u;
    // 09598f  mov al, byte ptr [0x8ab60]
    X86_AT(c, 0x9598fu);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(0x8AB60u))));
    // 095994  mov byte ptr [edi + 0x8ab2b], al
    X86_AT(c, 0x95994u);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0x8AB2Bu)), g8(c, 0));
    // 09599a  cmp byte ptr [0x8ab73], 0
    X86_AT(c, 0x9599au);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0x8AB73u))), 0x0u, 0, 1);
    // 0959a1  je 0x959b0
    X86_AT(c, 0x959a1u);
    if (x86_cc(c, 4)) { goto L_959b0; }
    X86_TICK(c, 10);
    // 0959a3  mov dword ptr [ebp - 0x10], edi
    X86_AT(c, 0x959a3u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u)), c.r[7]);
    // 0959a6  add edi, dword ptr [ebp - 0x10]
    X86_AT(c, 0x959a6u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u))), 0, 4); }
    // 0959a9  mov byte ptr [edi + 0x8ab2b], 0x2e
    X86_AT(c, 0x959a9u);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0x8AB2Bu)), 0x2Eu);
L_959b0:
    X86_TICK(c, 13);
    // 0959b0  inc edi
    X86_AT(c, 0x959b0u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0959b1  mov eax, dword ptr [0x8a754]
    X86_AT(c, 0x959b1u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x8A754u)));
    // 0959b6  and eax, eax
    X86_AT(c, 0x959b6u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0959b8  je 0x95a3a
    X86_AT(c, 0x959b8u);
    if (x86_cc(c, 4)) { goto L_95a3a; }
    X86_TICK(c, 15);
    // 0959be  mov edx, dword ptr [ebp - 4]
    X86_AT(c, 0x959beu);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0959c1  mov ecx, dword ptr [edx - 8]
    X86_AT(c, 0x959c1u);
    c.r[1] = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xFFFFFFF8u)));
    // 0959c4  cmp ecx, eax
    X86_AT(c, 0x959c4u);
    (void)x86_sub(c, c.r[1], c.r[0], 0, 4);
    // 0959c6  jb 0x959ca
    X86_AT(c, 0x959c6u);
    if (x86_cc(c, 2)) { goto L_959ca; }
    X86_TICK(c, 2);
    // 0959c8  mov ecx, eax
    X86_AT(c, 0x959c8u);
    c.r[1] = c.r[0];
L_959ca:
    X86_TICK(c, 54);
    // 0959ca  mov dword ptr [ebp - 8], ecx
    X86_AT(c, 0x959cau);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), c.r[1]);
    // 0959cd  mov esi, 0x8ab61
    X86_AT(c, 0x959cdu);
    c.r[6] = 0x8AB61u;
    // 0959d2  lea ebx, [edi + 0x8ab2b]
    X86_AT(c, 0x959d2u);
    c.r[3] = (uint32_t)(c.r[7] + 0x8AB2Bu);
    // 0959d8  push edi
    X86_AT(c, 0x959d8u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0959d9  mov edi, ebx
    X86_AT(c, 0x959d9u);
    c.r[7] = c.r[3];
    // 0959db  movsb byte ptr es:[edi], byte ptr [esi]
    X86_AT(c, 0x959dbu);
    x86_string(c, 0, 1, 243, 4, 3);
    // 0959dd  pop edi
    X86_AT(c, 0x959ddu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0959de  add edi, dword ptr [ebp - 8]
    X86_AT(c, 0x959deu);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u))), 0, 4); }
    // 0959e1  mov eax, dword ptr [ebp - 8]
    X86_AT(c, 0x959e1u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)));
    // 0959e4  sub dword ptr [0x8a754], eax
    X86_AT(c, 0x959e4u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x8A754u)); uint32_t v = rd32(ea); wr32(ea, x86_sub(c, v, c.r[0], 0, 4)); }
    // 0959ea  lea eax, [edi - 1]
    X86_AT(c, 0x959eau);
    c.r[0] = (uint32_t)(c.r[7] + 0xFFFFFFFFu);
    // 0959ed  mov dword ptr [edx - 0x10], eax
    X86_AT(c, 0x959edu);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xFFFFFFF0u)), c.r[0]);
    // 0959f0  cmp byte ptr [edx - 9], 0
    X86_AT(c, 0x959f0u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[2] + 0xFFFFFFF7u))), 0x0u, 0, 1);
    // 0959f4  je 0x95a00
    X86_AT(c, 0x959f4u);
    if (x86_cc(c, 4)) { goto L_95a00; }
    X86_TICK(c, 13);
    // 0959f6  push 2
    X86_AT(c, 0x959f6u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0959f8  push edi
    X86_AT(c, 0x959f8u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0959f9  mov ecx, edx
    X86_AT(c, 0x959f9u);
    c.r[1] = c.r[2];
    // 0959fb  call 0x95620
    X86_AT(c, 0x959fbu);
    push32(c, 0x95a00u); x86_call_known(c, 0x95620u, f_00095620); X86_RET(c, 0x95a00u);
L_95a00:
    X86_TICK(c, 13);
    // 095a00  mov ecx, dword ptr [ebp - 4]
    X86_AT(c, 0x95a00u);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 095a03  mov ebx, ecx
    X86_AT(c, 0x95a03u);
    c.r[3] = c.r[1];
    // 095a05  call 0x9568c
    X86_AT(c, 0x95a05u);
    push32(c, 0x95a0au); x86_call_known(c, 0x9568cu, f_0009568c); X86_RET(c, 0x95a0au);
    X86_TICK(c, 18);
    // 095a0a  push dword ptr [ebx - 0x10]
    X86_AT(c, 0x95a0au);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0xFFFFFFF0u))); push32(c, v); }
    // 095a0d  push 0x8ab2c
    X86_AT(c, 0x95a0du);
    { uint32_t v = 0x8AB2Cu; push32(c, v); }
    // 095a12  mov ecx, dword ptr [0x8a764]
    X86_AT(c, 0x95a12u);
    c.r[1] = rd32((c.sbase[3] + (uint32_t)(0x8A764u)));
    // 095a18  call dword ptr [0x8a760]
    X86_AT(c, 0x95a18u);
    { uint32_t t = rd32((c.sbase[3] + (uint32_t)(0x8A760u))); push32(c, 0x95a1eu); x86_call(c, t); X86_RET(c, 0x95a1eu); }
    X86_TICK(c, 12);
    // 095a1e  cmp byte ptr [ebx - 9], 0
    X86_AT(c, 0x95a1eu);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xFFFFFFF7u))), 0x0u, 0, 1);
    // 095a22  jne 0x95a57
    X86_AT(c, 0x95a22u);
    if (x86_cc(c, 5)) { goto L_95a57; }
    X86_TICK(c, 11);
    // 095a24  mov eax, dword ptr [0x8a754]
    X86_AT(c, 0x95a24u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x8A754u)));
    // 095a29  and eax, eax
    X86_AT(c, 0x95a29u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 095a2b  je 0x95a57
    X86_AT(c, 0x95a2bu);
    if (x86_cc(c, 4)) { goto L_95a57; }
    X86_TICK(c, 11);
    // 095a2d  push eax
    X86_AT(c, 0x95a2du);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 095a2e  push 0x8a768
    X86_AT(c, 0x95a2eu);
    { uint32_t v = 0x8A768u; push32(c, v); }
    // 095a33  call 0x93b8c
    X86_AT(c, 0x95a33u);
    push32(c, 0x95a38u); x86_call_known(c, 0x93b8cu, f_00093b8c); X86_RET(c, 0x95a38u);
    X86_TICK(c, 7);
    // 095a38  jmp 0x95a57
    X86_AT(c, 0x95a38u);
    goto L_95a57;
L_95a3a:
    X86_TICK(c, 11);
    // 095a3a  mov ecx, dword ptr [ebp - 4]
    X86_AT(c, 0x95a3au);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 095a3d  call 0x9568c
    X86_AT(c, 0x95a3du);
    push32(c, 0x95a42u); x86_call_known(c, 0x9568cu, f_0009568c); X86_RET(c, 0x95a42u);
    X86_TICK(c, 17);
    // 095a42  lea eax, [edi - 1]
    X86_AT(c, 0x95a42u);
    c.r[0] = (uint32_t)(c.r[7] + 0xFFFFFFFFu);
    // 095a45  push eax
    X86_AT(c, 0x95a45u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 095a46  push 0x8ab2c
    X86_AT(c, 0x95a46u);
    { uint32_t v = 0x8AB2Cu; push32(c, v); }
    // 095a4b  mov ecx, dword ptr [0x8a764]
    X86_AT(c, 0x95a4bu);
    c.r[1] = rd32((c.sbase[3] + (uint32_t)(0x8A764u)));
    // 095a51  call dword ptr [0x8a760]
    X86_AT(c, 0x95a51u);
    { uint32_t t = rd32((c.sbase[3] + (uint32_t)(0x8A760u))); push32(c, 0x95a57u); x86_call(c, t); X86_RET(c, 0x95a57u); }
L_95a57:
    X86_TICK(c, 11);
    // 095a57  mov eax, dword ptr [0x8ab5c]
    X86_AT(c, 0x95a57u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x8AB5Cu)));
    // 095a5c  and eax, eax
    X86_AT(c, 0x95a5cu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 095a5e  jg 0x95a72
    X86_AT(c, 0x95a5eu);
    if (x86_cc(c, 15)) { goto L_95a72; }
    X86_TICK(c, 9);
    // 095a60  mov byte ptr [ebp - 9], 0x2d
    X86_AT(c, 0x95a60u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF7u)), 0x2Du);
    // 095a64  and eax, eax
    X86_AT(c, 0x95a64u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 095a66  jge 0x95a6a
    X86_AT(c, 0x95a66u);
    if (x86_cc(c, 13)) { goto L_95a6a; }
    X86_TICK(c, 2);
    // 095a68  neg eax
    X86_AT(c, 0x95a68u);
    { uint32_t v = c.r[0]; c.r[0] = x86_neg(c, v, 4); }
L_95a6a:
    X86_TICK(c, 11);
    // 095a6a  inc eax
    X86_AT(c, 0x95a6au);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 095a6b  mov dword ptr [0x8ab5c], eax
    X86_AT(c, 0x95a6bu);
    wr32((c.sbase[3] + (uint32_t)(0x8AB5Cu)), c.r[0]);
    // 095a70  jmp 0x95a7c
    X86_AT(c, 0x95a70u);
    goto L_95a7c;
L_95a72:
    X86_TICK(c, 8);
    // 095a72  mov byte ptr [ebp - 9], 0x2b
    X86_AT(c, 0x95a72u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF7u)), 0x2Bu);
    // 095a76  dec dword ptr [0x8ab5c]
    X86_AT(c, 0x95a76u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x8AB5Cu)); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
L_95a7c:
    X86_TICK(c, 11);
    // 095a7c  mov ebx, 0x1f
    X86_AT(c, 0x95a7cu);
    c.r[3] = 0x1Fu;
    // 095a81  sub esi, esi
    X86_AT(c, 0x95a81u);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[6], 0, 4); }
    // 095a83  jmp 0x95aa9
    X86_AT(c, 0x95a83u);
    goto L_95aa9;
L_95a85:
    X86_TICK(c, 55);
    // 095a85  mov eax, dword ptr [0x8ab5c]
    X86_AT(c, 0x95a85u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x8AB5Cu)));
    // 095a8a  cdq 
    X86_AT(c, 0x95a8au);
    c.r[2] = (c.r[0] & 0x80000000u) ? 0xFFFFFFFFu : 0u;
    // 095a8b  mov ecx, 0xa
    X86_AT(c, 0x95a8bu);
    c.r[1] = 0xAu;
    // 095a90  idiv ecx
    X86_AT(c, 0x95a90u);
    x86_idiv(c, c.r[1], 4, 0x95a90u);
    // 095a92  and edx, edx
    X86_AT(c, 0x95a92u);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & c.r[2], 4); }
    // 095a94  jge 0x95a98
    X86_AT(c, 0x95a94u);
    if (x86_cc(c, 13)) { goto L_95a98; }
    X86_TICK(c, 2);
    // 095a96  add edx, ecx
    X86_AT(c, 0x95a96u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[1], 0, 4); }
L_95a98:
    X86_TICK(c, 10);
    // 095a98  add dx, 0x30
    X86_AT(c, 0x95a98u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, 0x30u, 0, 2)); }
    // 095a9c  mov byte ptr [ebx + 0x8ab2b], dl
    X86_AT(c, 0x95a9cu);
    wr8((c.sbase[3] + (uint32_t)(c.r[3] + 0x8AB2Bu)), g8(c, 2));
    // 095aa2  mov dword ptr [0x8ab5c], eax
    X86_AT(c, 0x95aa2u);
    wr32((c.sbase[3] + (uint32_t)(0x8AB5Cu)), c.r[0]);
    // 095aa7  dec ebx
    X86_AT(c, 0x95aa7u);
    { uint32_t v = c.r[3]; c.r[3] = x86_dec(c, v, 4); }
    // 095aa8  inc esi
    X86_AT(c, 0x95aa8u);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
L_95aa9:
    X86_TICK(c, 12);
    // 095aa9  cmp dword ptr [0x8ab5c], 0
    X86_AT(c, 0x95aa9u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0x8AB5Cu))), 0x0u, 0, 4);
    // 095ab0  jg 0x95a85
    X86_AT(c, 0x95ab0u);
    if (x86_cc(c, 15)) { X86_POLL(c, 0x95a85u); goto L_95a85; }
    X86_TICK(c, 7);
    // 095ab2  cmp esi, 2
    X86_AT(c, 0x95ab2u);
    (void)x86_sub(c, c.r[6], 0x2u, 0, 4);
    // 095ab5  jl 0x95a85
    X86_AT(c, 0x95ab5u);
    if (x86_cc(c, 12)) { X86_POLL(c, 0x95a85u); goto L_95a85; }
    X86_TICK(c, 35);
    // 095ab7  mov al, byte ptr [ebp - 9]
    X86_AT(c, 0x95ab7u);
    s8(c, 0, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF7u))));
    // 095aba  mov byte ptr [ebx + 0x8ab2b], al
    X86_AT(c, 0x95abau);
    wr8((c.sbase[3] + (uint32_t)(c.r[3] + 0x8AB2Bu)), g8(c, 0));
    // 095ac0  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0x95ac0u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 095ac3  mov al, byte ptr [eax + 8]
    X86_AT(c, 0x95ac3u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[0] + 0x8u))));
    // 095ac6  mov byte ptr [ebx + 0x8ab2a], al
    X86_AT(c, 0x95ac6u);
    wr8((c.sbase[3] + (uint32_t)(c.r[3] + 0x8AB2Au)), g8(c, 0));
    // 095acc  lea eax, [esi + 2]
    X86_AT(c, 0x95accu);
    c.r[0] = (uint32_t)(c.r[6] + 0x2u);
    // 095acf  push eax
    X86_AT(c, 0x95acfu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 095ad0  lea eax, [ebx + 0x8ab2a]
    X86_AT(c, 0x95ad0u);
    c.r[0] = (uint32_t)(c.r[3] + 0x8AB2Au);
    // 095ad6  push eax
    X86_AT(c, 0x95ad6u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 095ad7  mov ecx, dword ptr [0x8a764]
    X86_AT(c, 0x95ad7u);
    c.r[1] = rd32((c.sbase[3] + (uint32_t)(0x8A764u)));
    // 095add  call dword ptr [0x8a760]
    X86_AT(c, 0x95addu);
    { uint32_t t = rd32((c.sbase[3] + (uint32_t)(0x8A760u))); push32(c, 0x95ae3u); x86_call(c, t); X86_RET(c, 0x95ae3u); }
    X86_TICK(c, 28);
    // 095ae3  pop edi
    X86_AT(c, 0x95ae3u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 095ae4  pop esi
    X86_AT(c, 0x95ae4u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 095ae5  pop ebx
    X86_AT(c, 0x95ae5u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 095ae6  leave 
    X86_AT(c, 0x95ae6u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 095ae7  ret 
    X86_AT(c, 0x95ae7u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x95980u, "ran off the end of a function");
}
void f_00095b00(X86Cpu& c) {
    X86_TICK(c, 22);
    // 095b00  push ebp
    X86_AT(c, 0x95b00u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 095b01  mov ebp, esp
    X86_AT(c, 0x95b01u);
    c.r[5] = c.r[4];
    // 095b03  push ecx
    X86_AT(c, 0x95b03u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 095b04  sub esp, 0xc
    X86_AT(c, 0x95b04u);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, 0xCu, 0, 4); }
    // 095b07  mov byte ptr [ebp - 9], 0
    X86_AT(c, 0x95b07u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF7u)), 0x0u);
    // 095b0b  cmp byte ptr [0x8a758], 3
    X86_AT(c, 0x95b0bu);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0x8A758u))), 0x3u, 0, 1);
    // 095b12  jne 0x95b1d
    X86_AT(c, 0x95b12u);
    if (x86_cc(c, 5)) { goto L_95b1d; }
    X86_TICK(c, 9);
    // 095b14  mov dword ptr [ebp - 8], 0x12
    X86_AT(c, 0x95b14u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), 0x12u);
    // 095b1b  jmp 0x95b24
    X86_AT(c, 0x95b1bu);
    goto L_95b24;
L_95b1d:
    X86_TICK(c, 2);
    // 095b1d  mov dword ptr [ebp - 8], 0x10
    X86_AT(c, 0x95b1du);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), 0x10u);
L_95b24:
    X86_TICK(c, 13);
    // 095b24  movzx eax, byte ptr [ebp + 8]
    X86_AT(c, 0x95b24u);
    c.r[0] = rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 095b28  cmp eax, 0x45
    X86_AT(c, 0x95b28u);
    (void)x86_sub(c, c.r[0], 0x45u, 0, 4);
    // 095b2b  je 0x95b7c
    X86_AT(c, 0x95b2bu);
    if (x86_cc(c, 4)) { goto L_95b7c; }
    X86_TICK(c, 7);
    // 095b2d  cmp eax, 0x47
    X86_AT(c, 0x95b2du);
    (void)x86_sub(c, c.r[0], 0x47u, 0, 4);
    // 095b30  je 0x95b49
    X86_AT(c, 0x95b30u);
    if (x86_cc(c, 4)) { goto L_95b49; }
    X86_TICK(c, 7);
    // 095b32  cmp eax, 0x65
    X86_AT(c, 0x95b32u);
    (void)x86_sub(c, c.r[0], 0x65u, 0, 4);
    // 095b35  je 0x95b7c
    X86_AT(c, 0x95b35u);
    if (x86_cc(c, 4)) { goto L_95b7c; }
    X86_TICK(c, 7);
    // 095b37  cmp eax, 0x66
    X86_AT(c, 0x95b37u);
    (void)x86_sub(c, c.r[0], 0x66u, 0, 4);
    // 095b3a  je 0x95bab
    X86_AT(c, 0x95b3au);
    if (x86_cc(c, 4)) { goto L_95bab; }
    X86_TICK(c, 7);
    // 095b40  cmp eax, 0x67
    X86_AT(c, 0x95b40u);
    (void)x86_sub(c, c.r[0], 0x67u, 0, 4);
    // 095b43  jne 0x95bb2
    X86_AT(c, 0x95b43u);
    if (x86_cc(c, 5)) { goto L_95bb2; }
L_95b49:
    X86_TICK(c, 12);
    // 095b49  cmp dword ptr [0x8a754], 0
    X86_AT(c, 0x95b49u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0x8A754u))), 0x0u, 0, 4);
    // 095b50  je 0x95bb2
    X86_AT(c, 0x95b50u);
    if (x86_cc(c, 4)) { goto L_95bb2; }
    X86_TICK(c, 12);
    // 095b52  test byte ptr [0x8a74c], 8
    X86_AT(c, 0x95b52u);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(0x8A74Cu))) & 0x8u, 1);
    // 095b59  jne 0x95b5f
    X86_AT(c, 0x95b59u);
    if (x86_cc(c, 5)) { goto L_95b5f; }
    X86_TICK(c, 2);
    // 095b5b  mov byte ptr [ebp - 9], 1
    X86_AT(c, 0x95b5bu);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF7u)), 0x1u);
L_95b5f:
    X86_TICK(c, 13);
    // 095b5f  mov eax, dword ptr [0x8ab5c]
    X86_AT(c, 0x95b5fu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x8AB5Cu)));
    // 095b64  dec eax
    X86_AT(c, 0x95b64u);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 095b65  cmp eax, 0xfffffffc
    X86_AT(c, 0x95b65u);
    (void)x86_sub(c, c.r[0], 0xFFFFFFFCu, 0, 4);
    // 095b68  jl 0x95b72
    X86_AT(c, 0x95b68u);
    if (x86_cc(c, 12)) { goto L_95b72; }
    X86_TICK(c, 11);
    // 095b6a  cmp eax, dword ptr [0x8a754]
    X86_AT(c, 0x95b6au);
    (void)x86_sub(c, c.r[0], rd32((c.sbase[3] + (uint32_t)(0x8A754u))), 0, 4);
    // 095b70  jle 0x95b85
    X86_AT(c, 0x95b70u);
    if (x86_cc(c, 14)) { goto L_95b85; }
L_95b72:
    X86_TICK(c, 13);
    // 095b72  sub byte ptr [ebp + 8], 2
    X86_AT(c, 0x95b72u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)); uint32_t v = rd8(ea); wr8(ea, x86_sub(c, v, 0x2u, 0, 1)); }
    // 095b76  dec dword ptr [0x8a754]
    X86_AT(c, 0x95b76u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x8A754u)); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
L_95b7c:
    X86_TICK(c, 9);
    // 095b7c  mov ecx, ebp
    X86_AT(c, 0x95b7cu);
    c.r[1] = c.r[5];
    // 095b7e  call 0x95980
    X86_AT(c, 0x95b7eu);
    push32(c, 0x95b83u); x86_call_known(c, 0x95980u, f_00095980); X86_RET(c, 0x95b83u);
    X86_TICK(c, 7);
    // 095b83  jmp 0x95bb2
    X86_AT(c, 0x95b83u);
    goto L_95bb2;
L_95b85:
    X86_TICK(c, 13);
    // 095b85  mov byte ptr [ebp + 8], 0x66
    X86_AT(c, 0x95b85u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)), 0x66u);
    // 095b89  mov eax, dword ptr [0x8ab5c]
    X86_AT(c, 0x95b89u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x8AB5Cu)));
    // 095b8e  and eax, eax
    X86_AT(c, 0x95b8eu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 095b90  jle 0x95ba5
    X86_AT(c, 0x95b90u);
    if (x86_cc(c, 14)) { goto L_95ba5; }
    X86_TICK(c, 11);
    // 095b92  mov edx, dword ptr [0x8a754]
    X86_AT(c, 0x95b92u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(0x8A754u)));
    // 095b98  cmp edx, eax
    X86_AT(c, 0x95b98u);
    (void)x86_sub(c, c.r[2], c.r[0], 0, 4);
    // 095b9a  jb 0x95b9d
    X86_AT(c, 0x95b9au);
    if (x86_cc(c, 2)) { goto L_95b9d; }
    X86_TICK(c, 3);
    // 095b9c  xchg edx, eax
    X86_AT(c, 0x95b9cu);
    { uint32_t t = c.r[2]; c.r[2] = c.r[0]; c.r[0] = t; }
L_95b9d:
    X86_TICK(c, 14);
    // 095b9d  sub dword ptr [0x8a754], edx
    X86_AT(c, 0x95b9du);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x8A754u)); uint32_t v = rd32(ea); wr32(ea, x86_sub(c, v, c.r[2], 0, 4)); }
    // 095ba3  jmp 0x95bab
    X86_AT(c, 0x95ba3u);
    goto L_95bab;
L_95ba5:
    X86_TICK(c, 6);
    // 095ba5  dec dword ptr [0x8a754]
    X86_AT(c, 0x95ba5u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x8A754u)); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
L_95bab:
    X86_TICK(c, 9);
    // 095bab  mov ecx, ebp
    X86_AT(c, 0x95babu);
    c.r[1] = c.r[5];
    // 095bad  call 0x956f0
    X86_AT(c, 0x95badu);
    push32(c, 0x95bb2u); x86_call_known(c, 0x956f0u, f_000956f0); X86_RET(c, 0x95bb2u);
L_95bb2:
    X86_TICK(c, 16);
    // 095bb2  leave 
    X86_AT(c, 0x95bb2u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 095bb3  ret 4
    X86_AT(c, 0x95bb3u);
    c.eip = pop32(c); c.r[4] += 0x4u; return;
    x86_fault(c, 0x95b00u, "ran off the end of a function");
}
void f_00095bd4(X86Cpu& c) {
    X86_TICK(c, 21);
    // 095bd4  push ebp
    X86_AT(c, 0x95bd4u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 095bd5  mov ebp, esp
    X86_AT(c, 0x95bd5u);
    c.r[5] = c.r[4];
    // 095bd7  push ecx
    X86_AT(c, 0x95bd7u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 095bd8  push esi
    X86_AT(c, 0x95bd8u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 095bd9  push edi
    X86_AT(c, 0x95bd9u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 095bda  mov esi, dword ptr [0x8ab5c]
    X86_AT(c, 0x95bdau);
    c.r[6] = rd32((c.sbase[3] + (uint32_t)(0x8AB5Cu)));
    // 095be0  and esi, esi
    X86_AT(c, 0x95be0u);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & c.r[6], 4); }
    // 095be2  jge 0x95be6
    X86_AT(c, 0x95be2u);
    if (x86_cc(c, 13)) { goto L_95be6; }
    X86_TICK(c, 2);
    // 095be4  neg esi
    X86_AT(c, 0x95be4u);
    { uint32_t v = c.r[6]; c.r[6] = x86_neg(c, v, 4); }
L_95be6:
    X86_TICK(c, 9);
    // 095be6  mov edi, 2
    X86_AT(c, 0x95be6u);
    c.r[7] = 0x2u;
    // 095beb  jmp 0x95bf8
    X86_AT(c, 0x95bebu);
    goto L_95bf8;
L_95bed:
    X86_TICK(c, 52);
    // 095bed  xchg esi, eax
    X86_AT(c, 0x95bedu);
    { uint32_t t = c.r[6]; c.r[6] = c.r[0]; c.r[0] = t; }
    // 095bee  cdq 
    X86_AT(c, 0x95beeu);
    c.r[2] = (c.r[0] & 0x80000000u) ? 0xFFFFFFFFu : 0u;
    // 095bef  mov ecx, 0xa
    X86_AT(c, 0x95befu);
    c.r[1] = 0xAu;
    // 095bf4  idiv ecx
    X86_AT(c, 0x95bf4u);
    x86_idiv(c, c.r[1], 4, 0x95bf4u);
    // 095bf6  xchg esi, eax
    X86_AT(c, 0x95bf6u);
    { uint32_t t = c.r[6]; c.r[6] = c.r[0]; c.r[0] = t; }
    // 095bf7  inc edi
    X86_AT(c, 0x95bf7u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
L_95bf8:
    X86_TICK(c, 7);
    // 095bf8  cmp esi, 0x63
    X86_AT(c, 0x95bf8u);
    (void)x86_sub(c, c.r[6], 0x63u, 0, 4);
    // 095bfb  jg 0x95bed
    X86_AT(c, 0x95bfbu);
    if (x86_cc(c, 15)) { X86_POLL(c, 0x95bedu); goto L_95bed; }
    X86_TICK(c, 46);
    // 095bfd  mov al, byte ptr [0x8ab73]
    X86_AT(c, 0x95bfdu);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(0x8AB73u))));
    // 095c02  inc eax
    X86_AT(c, 0x95c02u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 095c03  movzx eax, al
    X86_AT(c, 0x95c03u);
    c.r[0] = g8(c, 0);
    // 095c06  add eax, dword ptr [0x8a754]
    X86_AT(c, 0x95c06u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[3] + (uint32_t)(0x8A754u))), 0, 4); }
    // 095c0c  add eax, 2
    X86_AT(c, 0x95c0cu);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0x2u, 0, 4); }
    // 095c0f  lea edx, [edi + eax*1]
    X86_AT(c, 0x95c0fu);
    c.r[2] = (uint32_t)(c.r[7] + c.r[0]);
    // 095c12  xchg edx, eax
    X86_AT(c, 0x95c12u);
    { uint32_t t = c.r[2]; c.r[2] = c.r[0]; c.r[0] = t; }
    // 095c13  pop edi
    X86_AT(c, 0x95c13u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 095c14  pop esi
    X86_AT(c, 0x95c14u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 095c15  leave 
    X86_AT(c, 0x95c15u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 095c16  ret 
    X86_AT(c, 0x95c16u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x95bd4u, "ran off the end of a function");
}
void f_00095c28(X86Cpu& c) {
    X86_TICK(c, 25);
    // 095c28  enter 0x30, 0
    X86_AT(c, 0x95c28u);
    x86_enter(c, 0x30u, 0x0u, 4);
    // 095c2c  push ebx
    X86_AT(c, 0x95c2cu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 095c2d  push esi
    X86_AT(c, 0x95c2du);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 095c2e  push edi
    X86_AT(c, 0x95c2eu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 095c2f  mov bl, byte ptr [ebp + 0x14]
    X86_AT(c, 0x95c2fu);
    s8(c, 3, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x14u))));
    // 095c32  mov ecx, ebp
    X86_AT(c, 0x95c32u);
    c.r[1] = c.r[5];
    // 095c34  call 0x95588
    X86_AT(c, 0x95c34u);
    push32(c, 0x95c39u); x86_call_known(c, 0x95588u, f_00095588); X86_RET(c, 0x95c39u);
    X86_TICK(c, 12);
    // 095c39  cmp dword ptr [0x8a754], 0xffff
    X86_AT(c, 0x95c39u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0x8A754u))), 0xFFFFu, 0, 4);
    // 095c43  jne 0x95c4f
    X86_AT(c, 0x95c43u);
    if (x86_cc(c, 5)) { goto L_95c4f; }
    X86_TICK(c, 2);
    // 095c45  mov dword ptr [0x8a754], 6
    X86_AT(c, 0x95c45u);
    wr32((c.sbase[3] + (uint32_t)(0x8A754u)), 0x6u);
L_95c4f:
    X86_TICK(c, 12);
    // 095c4f  cmp byte ptr [0x8a758], 3
    X86_AT(c, 0x95c4fu);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0x8A758u))), 0x3u, 0, 1);
    // 095c56  jne 0x95c5f
    X86_AT(c, 0x95c56u);
    if (x86_cc(c, 5)) { goto L_95c5f; }
    X86_TICK(c, 9);
    // 095c58  mov edi, 0x12
    X86_AT(c, 0x95c58u);
    c.r[7] = 0x12u;
    // 095c5d  jmp 0x95c64
    X86_AT(c, 0x95c5du);
    goto L_95c64;
L_95c5f:
    X86_TICK(c, 2);
    // 095c5f  mov edi, 0x10
    X86_AT(c, 0x95c5fu);
    c.r[7] = 0x10u;
L_95c64:
    X86_TICK(c, 39);
    // 095c64  lea esi, [ebp - 0x18]
    X86_AT(c, 0x95c64u);
    c.r[6] = (uint32_t)(c.r[5] + 0xFFFFFFE8u);
    // 095c67  push esi
    X86_AT(c, 0x95c67u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 095c68  push edi
    X86_AT(c, 0x95c68u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 095c69  push dword ptr [0x8a754]
    X86_AT(c, 0x95c69u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0x8A754u))); push32(c, v); }
    // 095c6f  push ebx
    X86_AT(c, 0x95c6fu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 095c70  push dword ptr [ebp + 0x10]
    X86_AT(c, 0x95c70u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u))); push32(c, v); }
    // 095c73  push dword ptr [ebp + 0xc]
    X86_AT(c, 0x95c73u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))); push32(c, v); }
    // 095c76  push dword ptr [ebp + 8]
    X86_AT(c, 0x95c76u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, v); }
    // 095c79  lea eax, [ebp - 0x30]
    X86_AT(c, 0x95c79u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFD0u);
    // 095c7c  push eax
    X86_AT(c, 0x95c7cu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 095c7d  call 0x952f4
    X86_AT(c, 0x95c7du);
    push32(c, 0x95c82u); x86_call_known(c, 0x952f4u, f_000952f4); X86_RET(c, 0x95c82u);
    X86_TICK(c, 30);
    // 095c82  lea esi, [ebp - 0x30]
    X86_AT(c, 0x95c82u);
    c.r[6] = (uint32_t)(c.r[5] + 0xFFFFFFD0u);
    // 095c85  push edi
    X86_AT(c, 0x95c85u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 095c86  mov edi, 0x8ab5c
    X86_AT(c, 0x95c86u);
    c.r[7] = 0x8AB5Cu;
    // 095c8b  mov ecx, 0x17
    X86_AT(c, 0x95c8bu);
    c.r[1] = 0x17u;
    // 095c90  movsb byte ptr es:[edi], byte ptr [esi]
    X86_AT(c, 0x95c90u);
    x86_string(c, 0, 1, 243, 4, 3);
    // 095c92  pop edi
    X86_AT(c, 0x95c92u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 095c93  mov ax, word ptr [ebp - 0x18]
    X86_AT(c, 0x95c93u);
    s16(c, 0, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE8u))));
    // 095c97  and ax, ax
    X86_AT(c, 0x95c97u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_logic(c, v & (c.r[0] & 0xFFFFu), 2)); }
    // 095c9a  je 0x95cbf
    X86_AT(c, 0x95c9au);
    if (x86_cc(c, 4)) { goto L_95cbf; }
    X86_TICK(c, 12);
    // 095c9c  movzx eax, ax
    X86_AT(c, 0x95c9cu);
    c.r[0] = (c.r[0] & 0xFFFFu);
    // 095c9f  push eax
    X86_AT(c, 0x95c9fu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 095ca0  call 0x93bd4
    X86_AT(c, 0x95ca0u);
    push32(c, 0x95ca5u); x86_call_known(c, 0x93bd4u, f_00093bd4); X86_RET(c, 0x95ca5u);
    X86_TICK(c, 23);
    // 095ca5  movzx eax, word ptr [ebp - 0x18]
    X86_AT(c, 0x95ca5u);
    c.r[0] = rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE8u)));
    // 095ca9  push eax
    X86_AT(c, 0x95ca9u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 095caa  lea eax, [ebp - 0x16]
    X86_AT(c, 0x95caau);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFEAu);
    // 095cad  push eax
    X86_AT(c, 0x95cadu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 095cae  mov ecx, dword ptr [0x8a764]
    X86_AT(c, 0x95caeu);
    c.r[1] = rd32((c.sbase[3] + (uint32_t)(0x8A764u)));
    // 095cb4  call dword ptr [0x8a760]
    X86_AT(c, 0x95cb4u);
    { uint32_t t = rd32((c.sbase[3] + (uint32_t)(0x8A760u))); push32(c, 0x95cbau); x86_call(c, t); X86_RET(c, 0x95cbau); }
    X86_TICK(c, 7);
    // 095cba  jmp 0x95dc3
    X86_AT(c, 0x95cbau);
    goto L_95dc3;
L_95cbf:
    X86_TICK(c, 12);
    // 095cbf  cmp dword ptr [0x8a754], 0
    X86_AT(c, 0x95cbfu);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0x8A754u))), 0x0u, 0, 4);
    // 095cc6  jne 0x95cd7
    X86_AT(c, 0x95cc6u);
    if (x86_cc(c, 5)) { goto L_95cd7; }
    X86_TICK(c, 12);
    // 095cc8  test byte ptr [0x8a74c], 8
    X86_AT(c, 0x95cc8u);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(0x8A74Cu))) & 0x8u, 1);
    // 095ccf  jne 0x95cd7
    X86_AT(c, 0x95ccfu);
    if (x86_cc(c, 5)) { goto L_95cd7; }
    X86_TICK(c, 9);
    // 095cd1  mov byte ptr [ebp - 0x19], 0
    X86_AT(c, 0x95cd1u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE7u)), 0x0u);
    // 095cd5  jmp 0x95cdb
    X86_AT(c, 0x95cd5u);
    goto L_95cdb;
L_95cd7:
    X86_TICK(c, 2);
    // 095cd7  mov byte ptr [ebp - 0x19], 1
    X86_AT(c, 0x95cd7u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE7u)), 0x1u);
L_95cdb:
    X86_TICK(c, 16);
    // 095cdb  mov al, byte ptr [ebp - 0x19]
    X86_AT(c, 0x95cdbu);
    s8(c, 0, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE7u))));
    // 095cde  mov byte ptr [0x8ab73], al
    X86_AT(c, 0x95cdeu);
    wr8((c.sbase[3] + (uint32_t)(0x8AB73u)), g8(c, 0));
    // 095ce3  movzx eax, bl
    X86_AT(c, 0x95ce3u);
    c.r[0] = g8(c, 3);
    // 095ce6  cmp eax, 0x45
    X86_AT(c, 0x95ce6u);
    (void)x86_sub(c, c.r[0], 0x45u, 0, 4);
    // 095ce9  je 0x95d25
    X86_AT(c, 0x95ce9u);
    if (x86_cc(c, 4)) { goto L_95d25; }
    X86_TICK(c, 7);
    // 095ceb  cmp eax, 0x47
    X86_AT(c, 0x95cebu);
    (void)x86_sub(c, c.r[0], 0x47u, 0, 4);
    // 095cee  je 0x95d2e
    X86_AT(c, 0x95ceeu);
    if (x86_cc(c, 4)) { goto L_95d2e; }
    X86_TICK(c, 7);
    // 095cf0  cmp eax, 0x65
    X86_AT(c, 0x95cf0u);
    (void)x86_sub(c, c.r[0], 0x65u, 0, 4);
    // 095cf3  je 0x95d25
    X86_AT(c, 0x95cf3u);
    if (x86_cc(c, 4)) { goto L_95d25; }
    X86_TICK(c, 7);
    // 095cf5  cmp eax, 0x66
    X86_AT(c, 0x95cf5u);
    (void)x86_sub(c, c.r[0], 0x66u, 0, 4);
    // 095cf8  je 0x95d04
    X86_AT(c, 0x95cf8u);
    if (x86_cc(c, 4)) { goto L_95d04; }
    X86_TICK(c, 7);
    // 095cfa  cmp eax, 0x67
    X86_AT(c, 0x95cfau);
    (void)x86_sub(c, c.r[0], 0x67u, 0, 4);
    // 095cfd  je 0x95d2e
    X86_AT(c, 0x95cfdu);
    if (x86_cc(c, 4)) { goto L_95d2e; }
    X86_TICK(c, 7);
    // 095cff  jmp 0x95da4
    X86_AT(c, 0x95cffu);
    goto L_95da4;
L_95d04:
    X86_TICK(c, 13);
    // 095d04  mov eax, 1
    X86_AT(c, 0x95d04u);
    c.r[0] = 0x1u;
    // 095d09  mov edx, dword ptr [0x8ab5c]
    X86_AT(c, 0x95d09u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(0x8AB5Cu)));
    // 095d0f  cmp eax, edx
    X86_AT(c, 0x95d0fu);
    (void)x86_sub(c, c.r[0], c.r[2], 0, 4);
    // 095d11  jl 0x95d14
    X86_AT(c, 0x95d11u);
    if (x86_cc(c, 12)) { goto L_95d14; }
    X86_TICK(c, 3);
    // 095d13  xchg edx, eax
    X86_AT(c, 0x95d13u);
    { uint32_t t = c.r[2]; c.r[2] = c.r[0]; c.r[0] = t; }
L_95d14:
    X86_TICK(c, 21);
    // 095d14  add edx, dword ptr [0x8a754]
    X86_AT(c, 0x95d14u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, rd32((c.sbase[3] + (uint32_t)(0x8A754u))), 0, 4); }
    // 095d1a  movzx eax, byte ptr [0x8ab73]
    X86_AT(c, 0x95d1au);
    c.r[0] = rd8((c.sbase[3] + (uint32_t)(0x8AB73u)));
    // 095d21  add eax, edx
    X86_AT(c, 0x95d21u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, c.r[2], 0, 4); }
    // 095d23  jmp 0x95d5e
    X86_AT(c, 0x95d23u);
    goto L_95d5e;
L_95d25:
    X86_TICK(c, 9);
    // 095d25  mov ecx, ebp
    X86_AT(c, 0x95d25u);
    c.r[1] = c.r[5];
    // 095d27  call 0x95bd4
    X86_AT(c, 0x95d27u);
    push32(c, 0x95d2cu); x86_call_known(c, 0x95bd4u, f_00095bd4); X86_RET(c, 0x95d2cu);
    X86_TICK(c, 7);
    // 095d2c  jmp 0x95d5e
    X86_AT(c, 0x95d2cu);
    goto L_95d5e;
L_95d2e:
    X86_TICK(c, 12);
    // 095d2e  cmp dword ptr [0x8a754], 0
    X86_AT(c, 0x95d2eu);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0x8A754u))), 0x0u, 0, 4);
    // 095d35  jne 0x95d43
    X86_AT(c, 0x95d35u);
    if (x86_cc(c, 5)) { goto L_95d43; }
    X86_TICK(c, 9);
    // 095d37  mov dword ptr [0x8ab58], 0
    X86_AT(c, 0x95d37u);
    wr32((c.sbase[3] + (uint32_t)(0x8AB58u)), 0x0u);
    // 095d41  jmp 0x95da4
    X86_AT(c, 0x95d41u);
    goto L_95da4;
L_95d43:
    X86_TICK(c, 13);
    // 095d43  mov eax, dword ptr [0x8ab5c]
    X86_AT(c, 0x95d43u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x8AB5Cu)));
    // 095d48  dec eax
    X86_AT(c, 0x95d48u);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 095d49  cmp eax, 0xfffffffc
    X86_AT(c, 0x95d49u);
    (void)x86_sub(c, c.r[0], 0xFFFFFFFCu, 0, 4);
    // 095d4c  jl 0x95d56
    X86_AT(c, 0x95d4cu);
    if (x86_cc(c, 12)) { goto L_95d56; }
    X86_TICK(c, 11);
    // 095d4e  cmp eax, dword ptr [0x8a754]
    X86_AT(c, 0x95d4eu);
    (void)x86_sub(c, c.r[0], rd32((c.sbase[3] + (uint32_t)(0x8A754u))), 0, 4);
    // 095d54  jle 0x95d65
    X86_AT(c, 0x95d54u);
    if (x86_cc(c, 14)) { goto L_95d65; }
L_95d56:
    X86_TICK(c, 9);
    // 095d56  mov ecx, ebp
    X86_AT(c, 0x95d56u);
    c.r[1] = c.r[5];
    // 095d58  call 0x95bd4
    X86_AT(c, 0x95d58u);
    push32(c, 0x95d5du); x86_call_known(c, 0x95bd4u, f_00095bd4); X86_RET(c, 0x95d5du);
    X86_TICK(c, 2);
    // 095d5d  dec eax
    X86_AT(c, 0x95d5du);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
L_95d5e:
    X86_TICK(c, 9);
    // 095d5e  mov dword ptr [0x8ab58], eax
    X86_AT(c, 0x95d5eu);
    wr32((c.sbase[3] + (uint32_t)(0x8AB58u)), c.r[0]);
    // 095d63  jmp 0x95d9e
    X86_AT(c, 0x95d63u);
    goto L_95d9e;
L_95d65:
    X86_TICK(c, 42);
    // 095d65  movzx eax, byte ptr [0x8ab73]
    X86_AT(c, 0x95d65u);
    c.r[0] = rd8((c.sbase[3] + (uint32_t)(0x8AB73u)));
    // 095d6c  add eax, dword ptr [0x8a754]
    X86_AT(c, 0x95d6cu);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[3] + (uint32_t)(0x8A754u))), 0, 4); }
    // 095d72  mov edx, dword ptr [0x8ab5c]
    X86_AT(c, 0x95d72u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(0x8AB5Cu)));
    // 095d78  dec edx
    X86_AT(c, 0x95d78u);
    { uint32_t v = c.r[2]; c.r[2] = x86_dec(c, v, 4); }
    // 095d79  mov ecx, dword ptr [0x8a754]
    X86_AT(c, 0x95d79u);
    c.r[1] = rd32((c.sbase[3] + (uint32_t)(0x8A754u)));
    // 095d7f  cmp edx, ecx
    X86_AT(c, 0x95d7fu);
    (void)x86_sub(c, c.r[2], c.r[1], 0, 4);
    // 095d81  sete dl
    X86_AT(c, 0x95d81u);
    s8(c, 2, x86_cc(c, 4) ? 1u : 0u);
    // 095d84  movzx edx, dl
    X86_AT(c, 0x95d84u);
    c.r[2] = g8(c, 2);
    // 095d87  add edx, eax
    X86_AT(c, 0x95d87u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 095d89  mov dword ptr [0x8ab58], edx
    X86_AT(c, 0x95d89u);
    wr32((c.sbase[3] + (uint32_t)(0x8AB58u)), c.r[2]);
    // 095d8f  and ecx, ecx
    X86_AT(c, 0x95d8fu);
    { uint32_t v = c.r[1]; c.r[1] = x86_logic(c, v & c.r[1], 4); }
    // 095d91  jne 0x95d99
    X86_AT(c, 0x95d91u);
    if (x86_cc(c, 5)) { goto L_95d99; }
    X86_TICK(c, 6);
    // 095d93  inc dword ptr [0x8ab58]
    X86_AT(c, 0x95d93u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x8AB58u)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
L_95d99:
    X86_TICK(c, 4);
    // 095d99  mov eax, dword ptr [0x8ab58]
    X86_AT(c, 0x95d99u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x8AB58u)));
L_95d9e:
    X86_TICK(c, 7);
    // 095d9e  add dword ptr [0x8a75c], eax
    X86_AT(c, 0x95d9eu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x8A75Cu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
L_95da4:
    X86_TICK(c, 13);
    // 095da4  mov byte ptr [0x8ab50], 0
    X86_AT(c, 0x95da4u);
    wr8((c.sbase[3] + (uint32_t)(0x8AB50u)), 0x0u);
    // 095dab  push ebx
    X86_AT(c, 0x95dabu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 095dac  mov ecx, ebp
    X86_AT(c, 0x95dacu);
    c.r[1] = c.r[5];
    // 095dae  call 0x95b00
    X86_AT(c, 0x95daeu);
    push32(c, 0x95db3u); x86_call_known(c, 0x95b00u, f_00095b00); X86_RET(c, 0x95db3u);
    X86_TICK(c, 12);
    // 095db3  cmp byte ptr [0x8ab50], 0
    X86_AT(c, 0x95db3u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0x8AB50u))), 0x0u, 0, 1);
    // 095dba  jne 0x95dc3
    X86_AT(c, 0x95dbau);
    if (x86_cc(c, 5)) { goto L_95dc3; }
    X86_TICK(c, 9);
    // 095dbc  mov ecx, ebp
    X86_AT(c, 0x95dbcu);
    c.r[1] = c.r[5];
    // 095dbe  call 0x95524
    X86_AT(c, 0x95dbeu);
    push32(c, 0x95dc3u); x86_call_known(c, 0x95524u, f_00095524); X86_RET(c, 0x95dc3u);
L_95dc3:
    X86_TICK(c, 28);
    // 095dc3  pop edi
    X86_AT(c, 0x95dc3u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 095dc4  pop esi
    X86_AT(c, 0x95dc4u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 095dc5  pop ebx
    X86_AT(c, 0x95dc5u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 095dc6  leave 
    X86_AT(c, 0x95dc6u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 095dc7  ret 0x10
    X86_AT(c, 0x95dc7u);
    c.eip = pop32(c); c.r[4] += 0x10u; return;
    x86_fault(c, 0x95c28u, "ran off the end of a function");
}
void f_00095de8(X86Cpu& c) {
L_95de8:
    X86_TICK(c, 13);
    // 095de8  mov eax, dword ptr [0x8ab74]
    X86_AT(c, 0x95de8u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x8AB74u)));
    // 095ded  mov edx, 0x95dcc
    X86_AT(c, 0x95dedu);
    c.r[2] = 0x95DCCu;
    // 095df2  cmp edx, eax
    X86_AT(c, 0x95df2u);
    (void)x86_sub(c, c.r[2], c.r[0], 0, 4);
    // 095df4  je 0x95dff
    X86_AT(c, 0x95df4u);
    if (x86_cc(c, 4)) { goto L_95dff; }
    X86_TICK(c, 7);
    // 095df6  call eax
    X86_AT(c, 0x95df6u);
    { uint32_t t = c.r[0]; push32(c, 0x95df8u); x86_call(c, t); X86_RET(c, 0x95df8u); }
    X86_TICK(c, 9);
    // 095df8  mov dword ptr [0x8ab74], eax
    X86_AT(c, 0x95df8u);
    wr32((c.sbase[3] + (uint32_t)(0x8AB74u)), c.r[0]);
    // 095dfd  jmp 0x95de8
    X86_AT(c, 0x95dfdu);
    X86_POLL(c, 0x95de8u); goto L_95de8;
L_95dff:
    X86_TICK(c, 10);
    // 095dff  ret 
    X86_AT(c, 0x95dffu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x95de8u, "ran off the end of a function");
}
void f_00095e10(X86Cpu& c) {
    X86_TICK(c, 23);
    // 095e10  enter 4, 0
    X86_AT(c, 0x95e10u);
    x86_enter(c, 0x4u, 0x0u, 4);
    // 095e14  mov al, byte ptr [ebp + 8]
    X86_AT(c, 0x95e14u);
    s8(c, 0, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))));
    // 095e17  add al, 0x30
    X86_AT(c, 0x95e17u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, 0x30u, 0, 1)); }
    // 095e19  mov byte ptr [ebp - 2], al
    X86_AT(c, 0x95e19u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFEu)), g8(c, 0));
    // 095e1c  push 0x1bdc
    X86_AT(c, 0x95e1cu);
    { uint32_t v = 0x1BDCu; push32(c, v); }
    // 095e21  call 0x95f28
    X86_AT(c, 0x95e21u);
    push32(c, 0x95e26u); x86_call_known(c, 0x95f28u, f_00095f28); X86_RET(c, 0x95e26u);
    X86_TICK(c, 11);
    // 095e26  lea eax, [ebp - 4]
    X86_AT(c, 0x95e26u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFFCu);
    // 095e29  push eax
    X86_AT(c, 0x95e29u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 095e2a  call 0x95f28
    X86_AT(c, 0x95e2au);
    push32(c, 0x95e2fu); x86_call_known(c, 0x95f28u, f_00095f28); X86_RET(c, 0x95e2fu);
    X86_TICK(c, 7);
    // 095e2f  call 0x95f44
    X86_AT(c, 0x95e2fu);
    push32(c, 0x95e34u); x86_call_known(c, 0x95f44u, f_00095f44); X86_RET(c, 0x95e34u);
    X86_TICK(c, 13);
    // 095e34  mov ax, word ptr [0x8ab7c]
    X86_AT(c, 0x95e34u);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(0x8AB7Cu))));
    // 095e3a  push eax
    X86_AT(c, 0x95e3au);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 095e3b  call 0x95f14
    X86_AT(c, 0x95e3bu);
    push32(c, 0x95e40u); x86_call_known(c, 0x95f14u, f_00095f14); X86_RET(c, 0x95e40u);
    X86_TICK(c, 9);
    // 095e40  push 0x1bf8
    X86_AT(c, 0x95e40u);
    { uint32_t v = 0x1BF8u; push32(c, v); }
    // 095e45  call 0x95f28
    X86_AT(c, 0x95e45u);
    push32(c, 0x95e4au); x86_call_known(c, 0x95f28u, f_00095f28); X86_RET(c, 0x95e4au);
    X86_TICK(c, 7);
    // 095e4a  call 0x95f44
    X86_AT(c, 0x95e4au);
    push32(c, 0x95e4fu); x86_call_known(c, 0x95f44u, f_00095f44); X86_RET(c, 0x95e4fu);
    X86_TICK(c, 9);
    // 095e4f  push 0xffffffff
    X86_AT(c, 0x95e4fu);
    { uint32_t v = 0xFFFFFFFFu; push32(c, v); }
    // 095e51  call 0x94fac
    X86_AT(c, 0x95e51u);
    push32(c, 0x95e56u); x86_call_known(c, 0x94facu, f_00094fac); X86_RET(c, 0x95e56u);
    X86_TICK(c, 16);
    // 095e56  leave 
    X86_AT(c, 0x95e56u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 095e57  ret 8
    X86_AT(c, 0x95e57u);
    c.eip = pop32(c); c.r[4] += 0x8u; return;
    x86_fault(c, 0x95e10u, "ran off the end of a function");
}
void f_00095e78(X86Cpu& c) {
    X86_TICK(c, 95);
    // 095e78  push esi
    X86_AT(c, 0x95e78u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 095e79  push edi
    X86_AT(c, 0x95e79u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 095e7a  push ebx
    X86_AT(c, 0x95e7au);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 095e7b  push ebp
    X86_AT(c, 0x95e7bu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 095e7c  push ds
    X86_AT(c, 0x95e7cu);
    push32(c, c.sreg[3]);
    // 095e7d  push es
    X86_AT(c, 0x95e7du);
    push32(c, c.sreg[0]);
    // 095e7e  mov eax, dword ptr [0x8aac4]
    X86_AT(c, 0x95e7eu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x8AAC4u)));
    // 095e83  mov ebx, dword ptr [0x8aac8]
    X86_AT(c, 0x95e83u);
    c.r[3] = rd32((c.sbase[3] + (uint32_t)(0x8AAC8u)));
    // 095e89  mov ecx, dword ptr [0x8aacc]
    X86_AT(c, 0x95e89u);
    c.r[1] = rd32((c.sbase[3] + (uint32_t)(0x8AACCu)));
    // 095e8f  mov edx, dword ptr [0x8aad0]
    X86_AT(c, 0x95e8fu);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(0x8AAD0u)));
    // 095e95  mov esi, dword ptr [0x8aad4]
    X86_AT(c, 0x95e95u);
    c.r[6] = rd32((c.sbase[3] + (uint32_t)(0x8AAD4u)));
    // 095e9b  mov edi, dword ptr [0x8aad8]
    X86_AT(c, 0x95e9bu);
    c.r[7] = rd32((c.sbase[3] + (uint32_t)(0x8AAD8u)));
    // 095ea1  push dword ptr [0x8aae0]
    X86_AT(c, 0x95ea1u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0x8AAE0u))); push32(c, v); }
    // 095ea7  pop es
    X86_AT(c, 0x95ea7u);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 095ea8  push ds
    X86_AT(c, 0x95ea8u);
    push32(c, c.sreg[3]);
    // 095ea9  push dword ptr [0x8aadc]
    X86_AT(c, 0x95ea9u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0x8AADCu))); push32(c, v); }
    // 095eaf  pop ds
    X86_AT(c, 0x95eafu);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 095eb0  clc 
    X86_AT(c, 0x95eb0u);
    c.fl &= ~X86_CF;
    // 095eb1  int 0x21
    X86_AT(c, 0x95eb1u);
    x86_int(c, 0x21, 0x95eb3u);
    X86_TICK(c, 77);
    // 095eb3  pop ebp
    X86_AT(c, 0x95eb3u);
    { uint32_t v = pop32(c); c.r[5] = v; }
    // 095eb4  push ds
    X86_AT(c, 0x95eb4u);
    push32(c, c.sreg[3]);
    // 095eb5  mov ds, ebp
    X86_AT(c, 0x95eb5u);
    x86_load_seg(c, 3, (c.r[5] & 0xFFFFu) & 0xFFFFu);
    // 095eb7  pop dword ptr [0x8aadc]
    X86_AT(c, 0x95eb7u);
    { uint32_t v = pop32(c); wr32((c.sbase[3] + (uint32_t)(0x8AADCu)), v); }
    // 095ebd  push es
    X86_AT(c, 0x95ebdu);
    push32(c, c.sreg[0]);
    // 095ebe  pop dword ptr [0x8aae0]
    X86_AT(c, 0x95ebeu);
    { uint32_t v = pop32(c); wr32((c.sbase[3] + (uint32_t)(0x8AAE0u)), v); }
    // 095ec4  mov dword ptr [0x8aac4], eax
    X86_AT(c, 0x95ec4u);
    wr32((c.sbase[3] + (uint32_t)(0x8AAC4u)), c.r[0]);
    // 095ec9  mov dword ptr [0x8aac8], ebx
    X86_AT(c, 0x95ec9u);
    wr32((c.sbase[3] + (uint32_t)(0x8AAC8u)), c.r[3]);
    // 095ecf  mov dword ptr [0x8aacc], ecx
    X86_AT(c, 0x95ecfu);
    wr32((c.sbase[3] + (uint32_t)(0x8AACCu)), c.r[1]);
    // 095ed5  mov dword ptr [0x8aad0], edx
    X86_AT(c, 0x95ed5u);
    wr32((c.sbase[3] + (uint32_t)(0x8AAD0u)), c.r[2]);
    // 095edb  mov dword ptr [0x8aad4], esi
    X86_AT(c, 0x95edbu);
    wr32((c.sbase[3] + (uint32_t)(0x8AAD4u)), c.r[6]);
    // 095ee1  mov dword ptr [0x8aad8], edi
    X86_AT(c, 0x95ee1u);
    wr32((c.sbase[3] + (uint32_t)(0x8AAD8u)), c.r[7]);
    // 095ee7  pushf 
    X86_AT(c, 0x95ee7u);
    push16(c, c.fl & 0xFFFFu);
    // 095ee9  pop word ptr [0x8aae4]
    X86_AT(c, 0x95ee9u);
    { uint32_t v = pop16(c); wr16((c.sbase[3] + (uint32_t)(0x8AAE4u)), v); }
    // 095ef0  pop es
    X86_AT(c, 0x95ef0u);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 095ef1  pop ds
    X86_AT(c, 0x95ef1u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 095ef2  pop ebp
    X86_AT(c, 0x95ef2u);
    { uint32_t v = pop32(c); c.r[5] = v; }
    // 095ef3  pop ebx
    X86_AT(c, 0x95ef3u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 095ef4  pop edi
    X86_AT(c, 0x95ef4u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 095ef5  pop esi
    X86_AT(c, 0x95ef5u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 095ef6  ret 
    X86_AT(c, 0x95ef6u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x95e78u, "ran off the end of a function");
}
void f_00095f14(X86Cpu& c) {
    X86_TICK(c, 9);
    // 095f14  push 0x1c34
    X86_AT(c, 0x95f14u);
    { uint32_t v = 0x1C34u; push32(c, v); }
    // 095f19  call 0x95f28
    X86_AT(c, 0x95f19u);
    push32(c, 0x95f1eu); x86_call_known(c, 0x95f28u, f_00095f28); X86_RET(c, 0x95f1eu);
    X86_TICK(c, 7);
    // 095f1e  call 0x95f44
    X86_AT(c, 0x95f1eu);
    push32(c, 0x95f23u); x86_call_known(c, 0x95f44u, f_00095f44); X86_RET(c, 0x95f23u);
    X86_TICK(c, 10);
    // 095f23  ret 4
    X86_AT(c, 0x95f23u);
    c.eip = pop32(c); c.r[4] += 0x4u; return;
    x86_fault(c, 0x95f14u, "ran off the end of a function");
}
void f_00095f28(X86Cpu& c) {
    X86_TICK(c, 31);
    // 095f28  push ebp
    X86_AT(c, 0x95f28u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 095f29  mov ebp, esp
    X86_AT(c, 0x95f29u);
    c.r[5] = c.r[4];
    // 095f2b  push edi
    X86_AT(c, 0x95f2bu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 095f2c  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0x95f2cu);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 095f2f  movzx eax, word ptr [edi]
    X86_AT(c, 0x95f2fu);
    c.r[0] = rd16((c.sbase[3] + (uint32_t)(c.r[7])));
    // 095f32  push eax
    X86_AT(c, 0x95f32u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 095f33  lea eax, [edi + 2]
    X86_AT(c, 0x95f33u);
    c.r[0] = (uint32_t)(c.r[7] + 0x2u);
    // 095f36  push eax
    X86_AT(c, 0x95f36u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 095f37  push 2
    X86_AT(c, 0x95f37u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 095f39  call 0x9500c
    X86_AT(c, 0x95f39u);
    push32(c, 0x95f3eu); x86_call_known(c, 0x9500cu, f_0009500c); X86_RET(c, 0x95f3eu);
    X86_TICK(c, 20);
    // 095f3e  pop edi
    X86_AT(c, 0x95f3eu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 095f3f  leave 
    X86_AT(c, 0x95f3fu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 095f40  ret 4
    X86_AT(c, 0x95f40u);
    c.eip = pop32(c); c.r[4] += 0x4u; return;
    x86_fault(c, 0x95f28u, "ran off the end of a function");
}
void f_00095f44(X86Cpu& c) {
    X86_TICK(c, 19);
    // 095f44  movzx eax, word ptr [0x8a72c]
    X86_AT(c, 0x95f44u);
    c.r[0] = rd16((c.sbase[3] + (uint32_t)(0x8A72Cu)));
    // 095f4b  push eax
    X86_AT(c, 0x95f4bu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 095f4c  push 0x8a72e
    X86_AT(c, 0x95f4cu);
    { uint32_t v = 0x8A72Eu; push32(c, v); }
    // 095f51  push 2
    X86_AT(c, 0x95f51u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 095f53  call 0x9500c
    X86_AT(c, 0x95f53u);
    push32(c, 0x95f58u); x86_call_known(c, 0x9500cu, f_0009500c); X86_RET(c, 0x95f58u);
    X86_TICK(c, 10);
    // 095f58  ret 
    X86_AT(c, 0x95f58u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x95f44u, "ran off the end of a function");
}
void f_00095f5c(X86Cpu& c) {
    X86_TICK(c, 55);
    // 095f5c  enter 0xc, 0
    X86_AT(c, 0x95f5cu);
    x86_enter(c, 0xCu, 0x0u, 4);
    // 095f60  push ebx
    X86_AT(c, 0x95f60u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 095f61  push esi
    X86_AT(c, 0x95f61u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 095f62  push edi
    X86_AT(c, 0x95f62u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 095f63  mov di, word ptr [ebp + 0xc]
    X86_AT(c, 0x95f63u);
    s16(c, 7, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))));
    // 095f67  sub esi, esi
    X86_AT(c, 0x95f67u);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[6], 0, 4); }
    // 095f69  push esi
    X86_AT(c, 0x95f69u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 095f6a  mov esi, 0x1c5c
    X86_AT(c, 0x95f6au);
    c.r[6] = 0x1C5Cu;
    // 095f6f  push edi
    X86_AT(c, 0x95f6fu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 095f70  lea edi, [ebp - 0xc]
    X86_AT(c, 0x95f70u);
    c.r[7] = (uint32_t)(c.r[5] + 0xFFFFFFF4u);
    // 095f73  movsd dword ptr es:[edi], dword ptr [esi]
    X86_AT(c, 0x95f73u);
    x86_string(c, 0, 4, 0, 4, 3);
    // 095f74  movsd dword ptr es:[edi], dword ptr [esi]
    X86_AT(c, 0x95f74u);
    x86_string(c, 0, 4, 0, 4, 3);
    // 095f75  movsw word ptr es:[edi], word ptr [esi]
    X86_AT(c, 0x95f75u);
    x86_string(c, 0, 2, 0, 4, 3);
    // 095f77  pop edi
    X86_AT(c, 0x95f77u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 095f78  pop esi
    X86_AT(c, 0x95f78u);
    { uint32_t v = pop32(c); c.r[6] = v; }
L_95f79:
    X86_TICK(c, 10);
    // 095f79  mov eax, edi
    X86_AT(c, 0x95f79u);
    c.r[0] = c.r[7];
    // 095f7b  rcr ax, 1
    X86_AT(c, 0x95f7bu);
    { uint32_t v = (c.r[0] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 3, v, 0x1u, 2, w); if (w) s16(c, 0, r); }
    // 095f7e  jae 0x95fba
    X86_AT(c, 0x95f7eu);
    if (x86_cc(c, 3)) { goto L_95fba; }
    X86_TICK(c, 23);
    // 095f80  movzx eax, si
    X86_AT(c, 0x95f80u);
    c.r[0] = (c.r[6] & 0xFFFFu);
    // 095f83  lea eax, [eax*4]
    X86_AT(c, 0x95f83u);
    c.r[0] = (uint32_t)(c.r[0] * 4);
    // 095f8a  lea eax, [eax + eax*2]
    X86_AT(c, 0x95f8au);
    c.r[0] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 095f8d  movsx eax, ax
    X86_AT(c, 0x95f8du);
    c.r[0] = (uint32_t)(int32_t)(int16_t)(c.r[0] & 0xFFFFu);
    // 095f90  lea edx, [ebp - 0xc]
    X86_AT(c, 0x95f90u);
    c.r[2] = (uint32_t)(c.r[5] + 0xFFFFFFF4u);
    // 095f93  push edx
    X86_AT(c, 0x95f93u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 095f94  mov ebx, eax
    X86_AT(c, 0x95f94u);
    c.r[3] = c.r[0];
    // 095f96  call 0x96280
    X86_AT(c, 0x95f96u);
    push32(c, 0x95f9bu); x86_call_known(c, 0x96280u, f_00096280); X86_RET(c, 0x95f9bu);
    X86_TICK(c, 13);
    // 095f9b  lea eax, [ebx*1 + 0x8ab8c]
    X86_AT(c, 0x95f9bu);
    c.r[0] = (uint32_t)(c.r[3] + 0x8AB8Cu);
    // 095fa2  push eax
    X86_AT(c, 0x95fa2u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 095fa3  mov ebx, eax
    X86_AT(c, 0x95fa3u);
    c.r[3] = c.r[0];
    // 095fa5  call 0x96280
    X86_AT(c, 0x95fa5u);
    push32(c, 0x95faau); x86_call_known(c, 0x96280u, f_00096280); X86_RET(c, 0x95faau);
    X86_TICK(c, 7);
    // 095faa  call 0x963f0
    X86_AT(c, 0x95faau);
    push32(c, 0x95fafu); x86_call_known(c, 0x963f0u, f_000963f0); X86_RET(c, 0x95fafu);
    X86_TICK(c, 13);
    // 095faf  lea eax, [ebp - 0xc]
    X86_AT(c, 0x95fafu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFF4u);
    // 095fb2  push eax
    X86_AT(c, 0x95fb2u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 095fb3  mov ebx, eax
    X86_AT(c, 0x95fb3u);
    c.r[3] = c.r[0];
    // 095fb5  call 0x962e0
    X86_AT(c, 0x95fb5u);
    push32(c, 0x95fbau); x86_call_known(c, 0x962e0u, f_000962e0); X86_RET(c, 0x95fbau);
L_95fba:
    X86_TICK(c, 12);
    // 095fba  shr di, 1
    X86_AT(c, 0x95fbau);
    { uint32_t v = (c.r[7] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 2, w); if (w) s16(c, 7, r); }
    // 095fbd  inc esi
    X86_AT(c, 0x95fbdu);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 095fbe  and di, di
    X86_AT(c, 0x95fbeu);
    { uint32_t v = (c.r[7] & 0xFFFFu); s16(c, 7, x86_logic(c, v & (c.r[7] & 0xFFFFu), 2)); }
    // 095fc1  jne 0x95f79
    X86_AT(c, 0x95fc1u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x95f79u); goto L_95f79; }
    X86_TICK(c, 71);
    // 095fc3  lea eax, [ebp - 0xc]
    X86_AT(c, 0x95fc3u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFF4u);
    // 095fc6  mov edx, dword ptr [ebp + 8]
    X86_AT(c, 0x95fc6u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 095fc9  push esi
    X86_AT(c, 0x95fc9u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 095fca  push edi
    X86_AT(c, 0x95fcau);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 095fcb  mov esi, eax
    X86_AT(c, 0x95fcbu);
    c.r[6] = c.r[0];
    // 095fcd  mov edi, edx
    X86_AT(c, 0x95fcdu);
    c.r[7] = c.r[2];
    // 095fcf  movsd dword ptr es:[edi], dword ptr [esi]
    X86_AT(c, 0x95fcfu);
    x86_string(c, 0, 4, 0, 4, 3);
    // 095fd0  movsd dword ptr es:[edi], dword ptr [esi]
    X86_AT(c, 0x95fd0u);
    x86_string(c, 0, 4, 0, 4, 3);
    // 095fd1  movsw word ptr es:[edi], word ptr [esi]
    X86_AT(c, 0x95fd1u);
    x86_string(c, 0, 2, 0, 4, 3);
    // 095fd3  pop edi
    X86_AT(c, 0x95fd3u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 095fd4  pop esi
    X86_AT(c, 0x95fd4u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 095fd5  pop edi
    X86_AT(c, 0x95fd5u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 095fd6  pop esi
    X86_AT(c, 0x95fd6u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 095fd7  pop ebx
    X86_AT(c, 0x95fd7u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 095fd8  leave 
    X86_AT(c, 0x95fd8u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 095fd9  ret 8
    X86_AT(c, 0x95fd9u);
    c.eip = pop32(c); c.r[4] += 0x8u; return;
    x86_fault(c, 0x95f5cu, "ran off the end of a function");
}
void f_00095fdc(X86Cpu& c) {
    X86_TICK(c, 20);
    // 095fdc  push ebp
    X86_AT(c, 0x95fdcu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 095fdd  mov ebp, esp
    X86_AT(c, 0x95fddu);
    c.r[5] = c.r[4];
    // 095fdf  push esi
    X86_AT(c, 0x95fdfu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 095fe0  push edi
    X86_AT(c, 0x95fe0u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 095fe1  push dword ptr [ebp + 0xc]
    X86_AT(c, 0x95fe1u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))); push32(c, v); }
    // 095fe4  call 0x96280
    X86_AT(c, 0x95fe4u);
    push32(c, 0x95fe9u); x86_call_known(c, 0x96280u, f_00096280); X86_RET(c, 0x95fe9u);
    X86_TICK(c, 7);
    // 095fe9  call 0x96c5c
    X86_AT(c, 0x95fe9u);
    push32(c, 0x95feeu); x86_call_known(c, 0x96c5cu, f_00096c5c); X86_RET(c, 0x95feeu);
    X86_TICK(c, 15);
    // 095fee  xchg edi, eax
    X86_AT(c, 0x95feeu);
    { uint32_t t = c.r[7]; c.r[7] = c.r[0]; c.r[0] = t; }
    // 095fef  and di, 0x4700
    X86_AT(c, 0x95fefu);
    { uint32_t v = (c.r[7] & 0xFFFFu); s16(c, 7, x86_logic(c, v & 0x4700u, 2)); }
    // 095ff4  shr di, 8
    X86_AT(c, 0x95ff4u);
    { uint32_t v = (c.r[7] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 5, v, 0x8u, 2, w); if (w) s16(c, 7, r); }
    // 095ff8  call 0x96bcc
    X86_AT(c, 0x95ff8u);
    push32(c, 0x95ffdu); x86_call_known(c, 0x96bccu, f_00096bcc); X86_RET(c, 0x95ffdu);
    X86_TICK(c, 7);
    // 095ffd  cmp di, 0x10
    X86_AT(c, 0x95ffdu);
    (void)x86_sub(c, (c.r[7] & 0xFFFFu), 0x10u, 0, 2);
    // 096001  jbe 0x9600d
    X86_AT(c, 0x96001u);
    if (x86_cc(c, 6)) { goto L_9600d; }
    X86_TICK(c, 4);
    // 096003  and di, 7
    X86_AT(c, 0x96003u);
    { uint32_t v = (c.r[7] & 0xFFFFu); s16(c, 7, x86_logic(c, v & 0x7u, 2)); }
    // 096008  or di, 8
    X86_AT(c, 0x96008u);
    { uint32_t v = (c.r[7] & 0xFFFFu); s16(c, 7, x86_logic(c, v | 0x8u, 2)); }
L_9600d:
    X86_TICK(c, 10);
    // 09600d  movzx eax, di
    X86_AT(c, 0x9600du);
    c.r[0] = (c.r[7] & 0xFFFFu);
    // 096010  cmp eax, 0xe
    X86_AT(c, 0x96010u);
    (void)x86_sub(c, c.r[0], 0xEu, 0, 4);
    // 096013  ja 0x9608c
    X86_AT(c, 0x96013u);
    if (x86_cc(c, 7)) { goto L_9608c; }
    X86_TICK(c, 7);
    // 096019  jmp dword ptr cs:[eax*4 + 0x96021]
    X86_AT(c, 0x96019u);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0x96021u)));
      switch (t) {
      case 0x9605du: goto L_9605d;
      case 0x96064u: goto L_96064;
      case 0x96073u: goto L_96073;
      case 0x9607au: goto L_9607a;
      case 0x9608cu: goto L_9608c;
      default: x86_jump(c, t); return; } }
L_9605d:
    X86_TICK(c, 9);
    // 09605d  mov esi, 0x1c68
    X86_AT(c, 0x9605du);
    c.r[6] = 0x1C68u;
    // 096062  jmp 0x9607f
    X86_AT(c, 0x96062u);
    goto L_9607f;
L_96064:
    X86_TICK(c, 15);
    // 096064  mov eax, dword ptr [ebp + 8]
    X86_AT(c, 0x96064u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 096067  mov dword ptr [eax], 0x414e0003
    X86_AT(c, 0x96067u);
    wr32((c.sbase[3] + (uint32_t)(c.r[0])), 0x414E0003u);
    // 09606d  mov byte ptr [eax + 4], 0x4e
    X86_AT(c, 0x9606du);
    wr8((c.sbase[3] + (uint32_t)(c.r[0] + 0x4u)), 0x4Eu);
    // 096071  jmp 0x96094
    X86_AT(c, 0x96071u);
    goto L_96094;
L_96073:
    X86_TICK(c, 9);
    // 096073  mov esi, 0x1c74
    X86_AT(c, 0x96073u);
    c.r[6] = 0x1C74u;
    // 096078  jmp 0x9607f
    X86_AT(c, 0x96078u);
    goto L_9607f;
L_9607a:
    X86_TICK(c, 2);
    // 09607a  mov esi, 0x1c80
    X86_AT(c, 0x9607au);
    c.r[6] = 0x1C80u;
L_9607f:
    X86_TICK(c, 40);
    // 09607f  mov eax, dword ptr [ebp + 8]
    X86_AT(c, 0x9607fu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 096082  push edi
    X86_AT(c, 0x96082u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 096083  mov edi, eax
    X86_AT(c, 0x96083u);
    c.r[7] = c.r[0];
    // 096085  movsd dword ptr es:[edi], dword ptr [esi]
    X86_AT(c, 0x96085u);
    x86_string(c, 0, 4, 0, 4, 3);
    // 096086  movsd dword ptr es:[edi], dword ptr [esi]
    X86_AT(c, 0x96086u);
    x86_string(c, 0, 4, 0, 4, 3);
    // 096087  movsw word ptr es:[edi], word ptr [esi]
    X86_AT(c, 0x96087u);
    x86_string(c, 0, 2, 0, 4, 3);
    // 096089  pop edi
    X86_AT(c, 0x96089u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 09608a  jmp 0x96094
    X86_AT(c, 0x9608au);
    goto L_96094;
L_9608c:
    X86_TICK(c, 6);
    // 09608c  mov eax, dword ptr [ebp + 8]
    X86_AT(c, 0x9608cu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 09608f  mov word ptr [eax], 0
    X86_AT(c, 0x9608fu);
    wr16((c.sbase[3] + (uint32_t)(c.r[0])), 0x0u);
L_96094:
    X86_TICK(c, 24);
    // 096094  pop edi
    X86_AT(c, 0x96094u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 096095  pop esi
    X86_AT(c, 0x96095u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 096096  leave 
    X86_AT(c, 0x96096u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 096097  ret 8
    X86_AT(c, 0x96097u);
    c.eip = pop32(c); c.r[4] += 0x8u; return;
    x86_fault(c, 0x95fdcu, "ran off the end of a function");
}
void f_0009609c(X86Cpu& c) {
    X86_TICK(c, 21);
    // 09609c  mov eax, dword ptr [esp + 4]
    X86_AT(c, 0x9609cu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[4] + 0x4u)));
    // 0960a0  mov edx, dword ptr [eax]
    X86_AT(c, 0x960a0u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[0])));
    // 0960a2  or edx, dword ptr [eax + 4]
    X86_AT(c, 0x960a2u);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v | rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0x4u))), 4); }
    // 0960a5  and edx, edx
    X86_AT(c, 0x960a5u);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & c.r[2], 4); }
    // 0960a7  jne 0x960ad
    X86_AT(c, 0x960a7u);
    if (x86_cc(c, 5)) { goto L_960ad; }
    X86_TICK(c, 9);
    // 0960a9  sub eax, eax
    X86_AT(c, 0x960a9u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0960ab  jmp 0x960bc
    X86_AT(c, 0x960abu);
    goto L_960bc;
L_960ad:
    X86_TICK(c, 12);
    // 0960ad  mov eax, dword ptr [esp + 4]
    X86_AT(c, 0x960adu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[4] + 0x4u)));
    // 0960b1  mov ax, word ptr [eax + 8]
    X86_AT(c, 0x960b1u);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(c.r[0] + 0x8u))));
    // 0960b5  and ah, 0x7f
    X86_AT(c, 0x960b5u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_logic(c, v & 0x7Fu, 1)); }
    // 0960b8  sub ax, 0x3fff
    X86_AT(c, 0x960b8u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_sub(c, v, 0x3FFFu, 0, 2)); }
L_960bc:
    X86_TICK(c, 10);
    // 0960bc  ret 4
    X86_AT(c, 0x960bcu);
    c.eip = pop32(c); c.r[4] += 0x4u; return;
    x86_fault(c, 0x9609cu, "ran off the end of a function");
}
void f_000960c0(X86Cpu& c) {
    X86_TICK(c, 16);
    // 0960c0  push ebp
    X86_AT(c, 0x960c0u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0960c1  mov ebp, esp
    X86_AT(c, 0x960c1u);
    c.r[5] = c.r[4];
    // 0960c3  push dword ptr [ebp + 0xc]
    X86_AT(c, 0x960c3u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))); push32(c, v); }
    // 0960c6  call 0x96280
    X86_AT(c, 0x960c6u);
    push32(c, 0x960cbu); x86_call_known(c, 0x96280u, f_00096280); X86_RET(c, 0x960cbu);
    X86_TICK(c, 12);
    // 0960cb  push dword ptr [ebp + 8]
    X86_AT(c, 0x960cbu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, v); }
    // 0960ce  call 0x96e14
    X86_AT(c, 0x960ceu);
    push32(c, 0x960d3u); x86_call_known(c, 0x96e14u, f_00096e14); X86_RET(c, 0x960d3u);
    X86_TICK(c, 16);
    // 0960d3  leave 
    X86_AT(c, 0x960d3u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0960d4  ret 8
    X86_AT(c, 0x960d4u);
    c.eip = pop32(c); c.r[4] += 0x8u; return;
    x86_fault(c, 0x960c0u, "ran off the end of a function");
}
void f_000960f0(X86Cpu& c) {
    X86_TICK(c, 24);
    // 0960f0  enter 8, 0
    X86_AT(c, 0x960f0u);
    x86_enter(c, 0x8u, 0x0u, 4);
    // 0960f4  push ebx
    X86_AT(c, 0x960f4u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0960f5  push esi
    X86_AT(c, 0x960f5u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0960f6  push edi
    X86_AT(c, 0x960f6u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0960f7  cmp byte ptr [0x8a833], 0
    X86_AT(c, 0x960f7u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0x8A833u))), 0x0u, 0, 1);
    // 0960fe  je 0x96116
    X86_AT(c, 0x960feu);
    if (x86_cc(c, 4)) { goto L_96116; }
    X86_TICK(c, 20);
    // 096100  push dword ptr [0x8acc4]
    X86_AT(c, 0x96100u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0x8ACC4u))); push32(c, v); }
    // 096106  mov eax, dword ptr [0x8acc4]
    X86_AT(c, 0x96106u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x8ACC4u)));
    // 09610b  sub eax, 0xc
    X86_AT(c, 0x9610bu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, 0xCu, 0, 4); }
    // 09610e  push eax
    X86_AT(c, 0x9610eu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 09610f  call 0x9678d
    X86_AT(c, 0x9610fu);
    push32(c, 0x96114u); x86_call_known(c, 0x9678du, f_0009678d); X86_RET(c, 0x96114u);
    X86_TICK(c, 7);
    // 096114  jmp 0x9616a
    X86_AT(c, 0x96114u);
    goto L_9616a;
L_96116:
    X86_TICK(c, 33);
    // 096116  mov eax, dword ptr [0x8acc4]
    X86_AT(c, 0x96116u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x8ACC4u)));
    // 09611b  lea esi, [eax - 0xc]
    X86_AT(c, 0x9611bu);
    c.r[6] = (uint32_t)(c.r[0] + 0xFFFFFFF4u);
    // 09611e  xchg edi, eax
    X86_AT(c, 0x9611eu);
    { uint32_t t = c.r[7]; c.r[7] = c.r[0]; c.r[0] = t; }
    // 09611f  mov ax, word ptr [edi + 8]
    X86_AT(c, 0x9611fu);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x8u))));
    // 096123  cmp ax, word ptr [esi + 8]
    X86_AT(c, 0x96123u);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), rd16((c.sbase[3] + (uint32_t)(c.r[6] + 0x8u))), 0, 2);
    // 096127  setb al
    X86_AT(c, 0x96127u);
    s8(c, 0, x86_cc(c, 2) ? 1u : 0u);
    // 09612a  xchg ebx, eax
    X86_AT(c, 0x9612au);
    { uint32_t t = c.r[3]; c.r[3] = c.r[0]; c.r[0] = t; }
    // 09612b  and bl, bl
    X86_AT(c, 0x9612bu);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v & g8(c, 3), 1)); }
    // 09612d  je 0x96137
    X86_AT(c, 0x9612du);
    if (x86_cc(c, 4)) { goto L_96137; }
    X86_TICK(c, 8);
    // 09612f  mov dword ptr [ebp - 8], esi
    X86_AT(c, 0x9612fu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), c.r[6]);
    // 096132  mov esi, edi
    X86_AT(c, 0x96132u);
    c.r[6] = c.r[7];
    // 096134  mov edi, dword ptr [ebp - 8]
    X86_AT(c, 0x96134u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)));
L_96137:
    X86_TICK(c, 19);
    // 096137  mov ax, word ptr [edi + 8]
    X86_AT(c, 0x96137u);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x8u))));
    // 09613b  sub ax, word ptr [esi + 8]
    X86_AT(c, 0x9613bu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_sub(c, v, rd16((c.sbase[3] + (uint32_t)(c.r[6] + 0x8u))), 0, 2)); }
    // 09613f  mov word ptr [ebp - 2], ax
    X86_AT(c, 0x9613fu);
    wr16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFEu)), (c.r[0] & 0xFFFFu));
    // 096143  cmp ax, 0x40
    X86_AT(c, 0x96143u);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), 0x40u, 0, 2);
    // 096147  jg 0x9614f
    X86_AT(c, 0x96147u);
    if (x86_cc(c, 15)) { goto L_9614f; }
    X86_TICK(c, 12);
    // 096149  cmp byte ptr [esi + 0xb], 0
    X86_AT(c, 0x96149u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[6] + 0xBu))), 0x0u, 0, 1);
    // 09614d  je 0x96176
    X86_AT(c, 0x9614du);
    if (x86_cc(c, 4)) { goto L_96176; }
L_9614f:
    X86_TICK(c, 7);
    // 09614f  and bl, bl
    X86_AT(c, 0x9614fu);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v & g8(c, 3), 1)); }
    // 096151  jne 0x9616a
    X86_AT(c, 0x96151u);
    if (x86_cc(c, 5)) { goto L_9616a; }
    X86_TICK(c, 31);
    // 096153  mov eax, dword ptr [0x8acc4]
    X86_AT(c, 0x96153u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x8ACC4u)));
    // 096158  lea edx, [eax - 0xc]
    X86_AT(c, 0x96158u);
    c.r[2] = (uint32_t)(c.r[0] + 0xFFFFFFF4u);
    // 09615b  push esi
    X86_AT(c, 0x9615bu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 09615c  push edi
    X86_AT(c, 0x9615cu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 09615d  mov esi, eax
    X86_AT(c, 0x9615du);
    c.r[6] = c.r[0];
    // 09615f  mov edi, edx
    X86_AT(c, 0x9615fu);
    c.r[7] = c.r[2];
    // 096161  mov ecx, 3
    X86_AT(c, 0x96161u);
    c.r[1] = 0x3u;
    // 096166  movsd dword ptr es:[edi], dword ptr [esi]
    X86_AT(c, 0x96166u);
    x86_string(c, 0, 4, 243, 4, 3);
    // 096168  pop edi
    X86_AT(c, 0x96168u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 096169  pop esi
    X86_AT(c, 0x96169u);
    { uint32_t v = pop32(c); c.r[6] = v; }
L_9616a:
    X86_TICK(c, 14);
    // 09616a  add dword ptr [0x8acc4], 0xfffffff4
    X86_AT(c, 0x9616au);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x8ACC4u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0xFFFFFFF4u, 0, 4)); }
    // 096171  jmp 0x96202
    X86_AT(c, 0x96171u);
    goto L_96202;
L_96176:
    X86_TICK(c, 11);
    // 096176  mov ax, word ptr [ebp - 2]
    X86_AT(c, 0x96176u);
    s16(c, 0, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFEu))));
    // 09617a  and ax, ax
    X86_AT(c, 0x9617au);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_logic(c, v & (c.r[0] & 0xFFFFu), 2)); }
    // 09617d  je 0x96186
    X86_AT(c, 0x9617du);
    if (x86_cc(c, 4)) { goto L_96186; }
    X86_TICK(c, 11);
    // 09617f  push eax
    X86_AT(c, 0x9617fu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 096180  push esi
    X86_AT(c, 0x96180u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 096181  call 0x96b38
    X86_AT(c, 0x96181u);
    push32(c, 0x96186u); x86_call_known(c, 0x96b38u, f_00096b38); X86_RET(c, 0x96186u);
L_96186:
    X86_TICK(c, 15);
    // 096186  mov al, byte ptr [edi + 0xa]
    X86_AT(c, 0x96186u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0xAu))));
    // 096189  cmp al, byte ptr [esi + 0xa]
    X86_AT(c, 0x96189u);
    (void)x86_sub(c, g8(c, 0), rd8((c.sbase[3] + (uint32_t)(c.r[6] + 0xAu))), 0, 1);
    // 09618c  jne 0x961ad
    X86_AT(c, 0x9618cu);
    if (x86_cc(c, 5)) { goto L_961ad; }
    X86_TICK(c, 13);
    // 09618e  push 4
    X86_AT(c, 0x9618eu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 096190  push esi
    X86_AT(c, 0x96190u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 096191  push edi
    X86_AT(c, 0x96191u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 096192  call 0x96a44
    X86_AT(c, 0x96192u);
    push32(c, 0x96197u); x86_call_known(c, 0x96a44u, f_00096a44); X86_RET(c, 0x96197u);
    X86_TICK(c, 7);
    // 096197  and al, al
    X86_AT(c, 0x96197u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & g8(c, 0), 1)); }
    // 096199  je 0x961d8
    X86_AT(c, 0x96199u);
    if (x86_cc(c, 4)) { goto L_961d8; }
    X86_TICK(c, 11);
    // 09619b  push 1
    X86_AT(c, 0x9619bu);
    { uint32_t v = 0x1u; push32(c, v); }
    // 09619d  push edi
    X86_AT(c, 0x9619du);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 09619e  call 0x96b38
    X86_AT(c, 0x9619eu);
    push32(c, 0x961a3u); x86_call_known(c, 0x96b38u, f_00096b38); X86_RET(c, 0x961a3u);
    X86_TICK(c, 20);
    // 0961a3  or byte ptr [edi + 7], 0x80
    X86_AT(c, 0x961a3u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x7u)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | 0x80u, 1)); }
    // 0961a7  inc word ptr [edi + 8]
    X86_AT(c, 0x961a7u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x8u)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
    // 0961ab  jmp 0x961d8
    X86_AT(c, 0x961abu);
    goto L_961d8;
L_961ad:
    X86_TICK(c, 12);
    // 0961ad  cmp byte ptr [edi + 0xa], 0
    X86_AT(c, 0x961adu);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0xAu))), 0x0u, 0, 1);
    // 0961b1  je 0x961be
    X86_AT(c, 0x961b1u);
    if (x86_cc(c, 4)) { goto L_961be; }
    X86_TICK(c, 13);
    // 0961b3  push 4
    X86_AT(c, 0x961b3u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0961b5  push esi
    X86_AT(c, 0x961b5u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0961b6  push edi
    X86_AT(c, 0x961b6u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0961b7  call 0x96a96
    X86_AT(c, 0x961b7u);
    push32(c, 0x961bcu); x86_call_known(c, 0x96a96u, f_00096a96); X86_RET(c, 0x961bcu);
    X86_TICK(c, 7);
    // 0961bc  jmp 0x961c7
    X86_AT(c, 0x961bcu);
    goto L_961c7;
L_961be:
    X86_TICK(c, 13);
    // 0961be  push 4
    X86_AT(c, 0x961beu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0961c0  push esi
    X86_AT(c, 0x961c0u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0961c1  push edi
    X86_AT(c, 0x961c1u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0961c2  call 0x96a6d
    X86_AT(c, 0x961c2u);
    push32(c, 0x961c7u); x86_call_known(c, 0x96a6du, f_00096a6d); X86_RET(c, 0x961c7u);
L_961c7:
    X86_TICK(c, 14);
    // 0961c7  mov byte ptr [edi + 0xa], al
    X86_AT(c, 0x961c7u);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0xAu)), g8(c, 0));
    // 0961ca  cmp byte ptr [edi + 0xa], 0
    X86_AT(c, 0x961cau);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0xAu))), 0x0u, 0, 1);
    // 0961ce  je 0x961d8
    X86_AT(c, 0x961ceu);
    if (x86_cc(c, 4)) { goto L_961d8; }
    X86_TICK(c, 11);
    // 0961d0  push 4
    X86_AT(c, 0x961d0u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0961d2  push edi
    X86_AT(c, 0x961d2u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0961d3  call 0x96ac2
    X86_AT(c, 0x961d3u);
    push32(c, 0x961d8u); x86_call_known(c, 0x96ac2u, f_00096ac2); X86_RET(c, 0x961d8u);
L_961d8:
    X86_TICK(c, 14);
    // 0961d8  add dword ptr [0x8acc4], 0xfffffff4
    X86_AT(c, 0x961d8u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x8ACC4u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0xFFFFFFF4u, 0, 4)); }
    // 0961df  and bl, bl
    X86_AT(c, 0x961dfu);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v & g8(c, 3), 1)); }
    // 0961e1  jne 0x961f7
    X86_AT(c, 0x961e1u);
    if (x86_cc(c, 5)) { goto L_961f7; }
    X86_TICK(c, 29);
    // 0961e3  mov eax, dword ptr [0x8acc4]
    X86_AT(c, 0x961e3u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x8ACC4u)));
    // 0961e8  push esi
    X86_AT(c, 0x961e8u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0961e9  push edi
    X86_AT(c, 0x961e9u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0961ea  mov esi, edi
    X86_AT(c, 0x961eau);
    c.r[6] = c.r[7];
    // 0961ec  mov edi, eax
    X86_AT(c, 0x961ecu);
    c.r[7] = c.r[0];
    // 0961ee  mov ecx, 3
    X86_AT(c, 0x961eeu);
    c.r[1] = 0x3u;
    // 0961f3  movsd dword ptr es:[edi], dword ptr [esi]
    X86_AT(c, 0x961f3u);
    x86_string(c, 0, 4, 243, 4, 3);
    // 0961f5  pop edi
    X86_AT(c, 0x961f5u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0961f6  pop esi
    X86_AT(c, 0x961f6u);
    { uint32_t v = pop32(c); c.r[6] = v; }
L_961f7:
    X86_TICK(c, 12);
    // 0961f7  push dword ptr [0x8acc4]
    X86_AT(c, 0x961f7u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0x8ACC4u))); push32(c, v); }
    // 0961fd  call 0x96bd4
    X86_AT(c, 0x961fdu);
    push32(c, 0x96202u); x86_call_known(c, 0x96bd4u, f_00096bd4); X86_RET(c, 0x96202u);
L_96202:
    X86_TICK(c, 28);
    // 096202  pop edi
    X86_AT(c, 0x96202u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 096203  pop esi
    X86_AT(c, 0x96203u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 096204  pop ebx
    X86_AT(c, 0x96204u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 096205  leave 
    X86_AT(c, 0x96205u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 096206  ret 
    X86_AT(c, 0x96206u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x960f0u, "ran off the end of a function");
}
void f_00096208(X86Cpu& c) {
    X86_TICK(c, 13);
    // 096208  enter 0x14, 0
    X86_AT(c, 0x96208u);
    x86_enter(c, 0x14u, 0x0u, 4);
    // 09620c  call 0x96bb0
    X86_AT(c, 0x9620cu);
    push32(c, 0x96211u); x86_call_known(c, 0x96bb0u, f_00096bb0); X86_RET(c, 0x96211u);
    X86_TICK(c, 12);
    // 096211  cmp byte ptr [0x8a833], 0
    X86_AT(c, 0x96211u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0x8A833u))), 0x0u, 0, 1);
    // 096218  je 0x9622f
    X86_AT(c, 0x96218u);
    if (x86_cc(c, 4)) { goto L_9622f; }
    X86_TICK(c, 12);
    // 09621a  push dword ptr [ebp + 8]
    X86_AT(c, 0x9621au);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, v); }
    // 09621d  call 0x967f3
    X86_AT(c, 0x9621du);
    push32(c, 0x96222u); x86_call_known(c, 0x967f3u, f_000967f3); X86_RET(c, 0x96222u);
    X86_TICK(c, 12);
    // 096222  push dword ptr [0x8acc4]
    X86_AT(c, 0x96222u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0x8ACC4u))); push32(c, v); }
    // 096228  call 0x96814
    X86_AT(c, 0x96228u);
    push32(c, 0x9622du); x86_call_known(c, 0x96814u, f_00096814); X86_RET(c, 0x9622du);
    X86_TICK(c, 7);
    // 09622d  jmp 0x9623d
    X86_AT(c, 0x9622du);
    goto L_9623d;
L_9622f:
    X86_TICK(c, 17);
    // 09622f  push dword ptr [ebp + 8]
    X86_AT(c, 0x9622fu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, v); }
    // 096232  push dword ptr [0x8acc4]
    X86_AT(c, 0x96232u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0x8ACC4u))); push32(c, v); }
    // 096238  call 0x9697c
    X86_AT(c, 0x96238u);
    push32(c, 0x9623du); x86_call_known(c, 0x9697cu, f_0009697c); X86_RET(c, 0x9623du);
L_9623d:
    X86_TICK(c, 16);
    // 09623d  leave 
    X86_AT(c, 0x9623du);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 09623e  ret 4
    X86_AT(c, 0x9623eu);
    c.eip = pop32(c); c.r[4] += 0x4u; return;
    x86_fault(c, 0x96208u, "ran off the end of a function");
}
void f_00096244(X86Cpu& c) {
    X86_TICK(c, 11);
    // 096244  push ebp
    X86_AT(c, 0x96244u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 096245  mov ebp, esp
    X86_AT(c, 0x96245u);
    c.r[5] = c.r[4];
    // 096247  call 0x96bb0
    X86_AT(c, 0x96247u);
    push32(c, 0x9624cu); x86_call_known(c, 0x96bb0u, f_00096bb0); X86_RET(c, 0x9624cu);
    X86_TICK(c, 12);
    // 09624c  cmp byte ptr [0x8a833], 0
    X86_AT(c, 0x9624cu);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0x8A833u))), 0x0u, 0, 1);
    // 096253  je 0x9626d
    X86_AT(c, 0x96253u);
    if (x86_cc(c, 4)) { goto L_9626d; }
    X86_TICK(c, 17);
    // 096255  push dword ptr [ebp + 0xc]
    X86_AT(c, 0x96255u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))); push32(c, v); }
    // 096258  push dword ptr [ebp + 8]
    X86_AT(c, 0x96258u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, v); }
    // 09625b  call 0x9680d
    X86_AT(c, 0x9625bu);
    push32(c, 0x96260u); x86_call_known(c, 0x9680du, f_0009680d); X86_RET(c, 0x96260u);
    X86_TICK(c, 12);
    // 096260  push dword ptr [0x8acc4]
    X86_AT(c, 0x96260u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0x8ACC4u))); push32(c, v); }
    // 096266  call 0x96814
    X86_AT(c, 0x96266u);
    push32(c, 0x9626bu); x86_call_known(c, 0x96814u, f_00096814); X86_RET(c, 0x9626bu);
    X86_TICK(c, 7);
    // 09626b  jmp 0x9627c
    X86_AT(c, 0x9626bu);
    goto L_9627c;
L_9626d:
    X86_TICK(c, 16);
    // 09626d  lea eax, [ebp + 8]
    X86_AT(c, 0x9626du);
    c.r[0] = (uint32_t)(c.r[5] + 0x8u);
    // 096270  push eax
    X86_AT(c, 0x96270u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 096271  push dword ptr [0x8acc4]
    X86_AT(c, 0x96271u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0x8ACC4u))); push32(c, v); }
    // 096277  call 0x96884
    X86_AT(c, 0x96277u);
    push32(c, 0x9627cu); x86_call_known(c, 0x96884u, f_00096884); X86_RET(c, 0x9627cu);
L_9627c:
    X86_TICK(c, 16);
    // 09627c  leave 
    X86_AT(c, 0x9627cu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 09627d  ret 8
    X86_AT(c, 0x9627du);
    c.eip = pop32(c); c.r[4] += 0x8u; return;
    x86_fault(c, 0x96244u, "ran off the end of a function");
}
void f_00096280(X86Cpu& c) {
    X86_TICK(c, 15);
    // 096280  push ebp
    X86_AT(c, 0x96280u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 096281  mov ebp, esp
    X86_AT(c, 0x96281u);
    c.r[5] = c.r[4];
    // 096283  push esi
    X86_AT(c, 0x96283u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 096284  push edi
    X86_AT(c, 0x96284u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 096285  call 0x96bb0
    X86_AT(c, 0x96285u);
    push32(c, 0x9628au); x86_call_known(c, 0x96bb0u, f_00096bb0); X86_RET(c, 0x9628au);
    X86_TICK(c, 41);
    // 09628a  mov esi, dword ptr [ebp + 8]
    X86_AT(c, 0x9628au);
    c.r[6] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 09628d  mov edi, dword ptr [0x8acc4]
    X86_AT(c, 0x9628du);
    c.r[7] = rd32((c.sbase[3] + (uint32_t)(0x8ACC4u)));
    // 096293  movsd dword ptr es:[edi], dword ptr [esi]
    X86_AT(c, 0x96293u);
    x86_string(c, 0, 4, 0, 4, 3);
    // 096294  movsd dword ptr es:[edi], dword ptr [esi]
    X86_AT(c, 0x96294u);
    x86_string(c, 0, 4, 0, 4, 3);
    // 096295  movsw word ptr es:[edi], word ptr [esi]
    X86_AT(c, 0x96295u);
    x86_string(c, 0, 2, 0, 4, 3);
    // 096297  cmp byte ptr [0x8a833], 0
    X86_AT(c, 0x96297u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0x8A833u))), 0x0u, 0, 1);
    // 09629e  jne 0x962d8
    X86_AT(c, 0x9629eu);
    if (x86_cc(c, 5)) { goto L_962d8; }
    X86_TICK(c, 24);
    // 0962a0  mov edi, dword ptr [0x8acc4]
    X86_AT(c, 0x962a0u);
    c.r[7] = rd32((c.sbase[3] + (uint32_t)(0x8ACC4u)));
    // 0962a6  test byte ptr [edi + 9], 0x80
    X86_AT(c, 0x962a6u);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x9u))) & 0x80u, 1);
    // 0962aa  setne al
    X86_AT(c, 0x962aau);
    s8(c, 0, x86_cc(c, 5) ? 1u : 0u);
    // 0962ad  mov byte ptr [edi + 0xa], al
    X86_AT(c, 0x962adu);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0xAu)), g8(c, 0));
    // 0962b0  and al, al
    X86_AT(c, 0x962b0u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & g8(c, 0), 1)); }
    // 0962b2  je 0x962b8
    X86_AT(c, 0x962b2u);
    if (x86_cc(c, 4)) { goto L_962b8; }
    X86_TICK(c, 7);
    // 0962b4  and byte ptr [edi + 9], 0x7f
    X86_AT(c, 0x962b4u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x9u)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v & 0x7Fu, 1)); }
L_962b8:
    X86_TICK(c, 37);
    // 0962b8  mov ax, word ptr [edi]
    X86_AT(c, 0x962b8u);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(c.r[7]))));
    // 0962bb  or ax, word ptr [edi + 2]
    X86_AT(c, 0x962bbu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_logic(c, v | rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x2u))), 2)); }
    // 0962bf  or ax, word ptr [edi + 4]
    X86_AT(c, 0x962bfu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_logic(c, v | rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x4u))), 2)); }
    // 0962c3  or ax, word ptr [edi + 6]
    X86_AT(c, 0x962c3u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_logic(c, v | rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x6u))), 2)); }
    // 0962c7  and ax, ax
    X86_AT(c, 0x962c7u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_logic(c, v & (c.r[0] & 0xFFFFu), 2)); }
    // 0962ca  sete al
    X86_AT(c, 0x962cau);
    s8(c, 0, x86_cc(c, 4) ? 1u : 0u);
    // 0962cd  mov byte ptr [edi + 0xb], al
    X86_AT(c, 0x962cdu);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0xBu)), g8(c, 0));
    // 0962d0  and al, al
    X86_AT(c, 0x962d0u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & g8(c, 0), 1)); }
    // 0962d2  je 0x962d8
    X86_AT(c, 0x962d2u);
    if (x86_cc(c, 4)) { goto L_962d8; }
    X86_TICK(c, 2);
    // 0962d4  mov byte ptr [edi + 0xa], 0
    X86_AT(c, 0x962d4u);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0xAu)), 0x0u);
L_962d8:
    X86_TICK(c, 24);
    // 0962d8  pop edi
    X86_AT(c, 0x962d8u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0962d9  pop esi
    X86_AT(c, 0x962d9u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0962da  leave 
    X86_AT(c, 0x962dau);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0962db  ret 4
    X86_AT(c, 0x962dbu);
    c.eip = pop32(c); c.r[4] += 0x4u; return;
    x86_fault(c, 0x96280u, "ran off the end of a function");
}
void f_000962e0(X86Cpu& c) {
    X86_TICK(c, 49);
    // 0962e0  push ebp
    X86_AT(c, 0x962e0u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0962e1  mov ebp, esp
    X86_AT(c, 0x962e1u);
    c.r[5] = c.r[4];
    // 0962e3  push esi
    X86_AT(c, 0x962e3u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0962e4  push edi
    X86_AT(c, 0x962e4u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0962e5  mov esi, dword ptr [0x8acc4]
    X86_AT(c, 0x962e5u);
    c.r[6] = rd32((c.sbase[3] + (uint32_t)(0x8ACC4u)));
    // 0962eb  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0x962ebu);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0962ee  movsd dword ptr es:[edi], dword ptr [esi]
    X86_AT(c, 0x962eeu);
    x86_string(c, 0, 4, 0, 4, 3);
    // 0962ef  movsd dword ptr es:[edi], dword ptr [esi]
    X86_AT(c, 0x962efu);
    x86_string(c, 0, 4, 0, 4, 3);
    // 0962f0  movsw word ptr es:[edi], word ptr [esi]
    X86_AT(c, 0x962f0u);
    x86_string(c, 0, 2, 0, 4, 3);
    // 0962f2  cmp byte ptr [0x8a833], 0
    X86_AT(c, 0x962f2u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0x8A833u))), 0x0u, 0, 1);
    // 0962f9  jne 0x96313
    X86_AT(c, 0x962f9u);
    if (x86_cc(c, 5)) { goto L_96313; }
    X86_TICK(c, 16);
    // 0962fb  mov eax, dword ptr [0x8acc4]
    X86_AT(c, 0x962fbu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x8ACC4u)));
    // 096300  cmp byte ptr [eax + 0xa], 0
    X86_AT(c, 0x96300u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[0] + 0xAu))), 0x0u, 0, 1);
    // 096304  je 0x96313
    X86_AT(c, 0x96304u);
    if (x86_cc(c, 4)) { goto L_96313; }
    X86_TICK(c, 12);
    // 096306  cmp byte ptr [eax + 0xb], 0
    X86_AT(c, 0x96306u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[0] + 0xBu))), 0x0u, 0, 1);
    // 09630a  jne 0x96313
    X86_AT(c, 0x9630au);
    if (x86_cc(c, 5)) { goto L_96313; }
    X86_TICK(c, 11);
    // 09630c  mov eax, dword ptr [ebp + 8]
    X86_AT(c, 0x9630cu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 09630f  or byte ptr [eax + 9], 0x80
    X86_AT(c, 0x9630fu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[0] + 0x9u)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | 0x80u, 1)); }
L_96313:
    X86_TICK(c, 31);
    // 096313  add dword ptr [0x8acc4], 0xfffffff4
    X86_AT(c, 0x96313u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x8ACC4u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0xFFFFFFF4u, 0, 4)); }
    // 09631a  pop edi
    X86_AT(c, 0x9631au);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 09631b  pop esi
    X86_AT(c, 0x9631bu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 09631c  leave 
    X86_AT(c, 0x9631cu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 09631d  ret 4
    X86_AT(c, 0x9631du);
    c.eip = pop32(c); c.r[4] += 0x4u; return;
    x86_fault(c, 0x962e0u, "ran off the end of a function");
}
void f_00096320(X86Cpu& c) {
    X86_TICK(c, 83);
    // 096320  enter 0xc, 0
    X86_AT(c, 0x96320u);
    x86_enter(c, 0xCu, 0x0u, 4);
    // 096324  push esi
    X86_AT(c, 0x96324u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 096325  push edi
    X86_AT(c, 0x96325u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 096326  mov eax, dword ptr [0x8acc4]
    X86_AT(c, 0x96326u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x8ACC4u)));
    // 09632b  lea esi, [eax - 0xc]
    X86_AT(c, 0x9632bu);
    c.r[6] = (uint32_t)(c.r[0] + 0xFFFFFFF4u);
    // 09632e  lea edi, [ebp - 0xc]
    X86_AT(c, 0x9632eu);
    c.r[7] = (uint32_t)(c.r[5] + 0xFFFFFFF4u);
    // 096331  mov ecx, 3
    X86_AT(c, 0x96331u);
    c.r[1] = 0x3u;
    // 096336  movsd dword ptr es:[edi], dword ptr [esi]
    X86_AT(c, 0x96336u);
    x86_string(c, 0, 4, 243, 4, 3);
    // 096338  xchg esi, eax
    X86_AT(c, 0x96338u);
    { uint32_t t = c.r[6]; c.r[6] = c.r[0]; c.r[0] = t; }
    // 096339  mov eax, dword ptr [0x8acc4]
    X86_AT(c, 0x96339u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x8ACC4u)));
    // 09633e  lea edi, [eax - 0xc]
    X86_AT(c, 0x9633eu);
    c.r[7] = (uint32_t)(c.r[0] + 0xFFFFFFF4u);
    // 096341  mov ecx, 3
    X86_AT(c, 0x96341u);
    c.r[1] = 0x3u;
    // 096346  movsd dword ptr es:[edi], dword ptr [esi]
    X86_AT(c, 0x96346u);
    x86_string(c, 0, 4, 243, 4, 3);
    // 096348  lea esi, [ebp - 0xc]
    X86_AT(c, 0x96348u);
    c.r[6] = (uint32_t)(c.r[5] + 0xFFFFFFF4u);
    // 09634b  xchg edi, eax
    X86_AT(c, 0x9634bu);
    { uint32_t t = c.r[7]; c.r[7] = c.r[0]; c.r[0] = t; }
    // 09634c  mov ecx, 3
    X86_AT(c, 0x9634cu);
    c.r[1] = 0x3u;
    // 096351  movsd dword ptr es:[edi], dword ptr [esi]
    X86_AT(c, 0x96351u);
    x86_string(c, 0, 4, 243, 4, 3);
    // 096353  pop edi
    X86_AT(c, 0x96353u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 096354  pop esi
    X86_AT(c, 0x96354u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 096355  leave 
    X86_AT(c, 0x96355u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 096356  ret 
    X86_AT(c, 0x96356u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x96320u, "ran off the end of a function");
}
void f_00096358(X86Cpu& c) {
    X86_TICK(c, 12);
    // 096358  cmp byte ptr [0x8a833], 0
    X86_AT(c, 0x96358u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0x8A833u))), 0x0u, 0, 1);
    // 09635f  je 0x9636c
    X86_AT(c, 0x9635fu);
    if (x86_cc(c, 4)) { goto L_9636c; }
    X86_TICK(c, 18);
    // 096361  mov eax, dword ptr [0x8acc4]
    X86_AT(c, 0x96361u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x8ACC4u)));
    // 096366  xor byte ptr [eax + 9], 0x80
    X86_AT(c, 0x96366u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[0] + 0x9u)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v ^ 0x80u, 1)); }
    // 09636a  jmp 0x9637b
    X86_AT(c, 0x9636au);
    goto L_9637b;
L_9636c:
    X86_TICK(c, 16);
    // 09636c  mov eax, dword ptr [0x8acc4]
    X86_AT(c, 0x9636cu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x8ACC4u)));
    // 096371  cmp byte ptr [eax + 0xb], 0
    X86_AT(c, 0x96371u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[0] + 0xBu))), 0x0u, 0, 1);
    // 096375  jne 0x9637b
    X86_AT(c, 0x96375u);
    if (x86_cc(c, 5)) { goto L_9637b; }
    X86_TICK(c, 7);
    // 096377  xor byte ptr [eax + 0xa], 1
    X86_AT(c, 0x96377u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[0] + 0xAu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v ^ 0x1u, 1)); }
L_9637b:
    X86_TICK(c, 10);
    // 09637b  ret 
    X86_AT(c, 0x9637bu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x96358u, "ran off the end of a function");
}
void f_000963f0(X86Cpu& c) {
    X86_TICK(c, 22);
    // 0963f0  enter 0x24, 0
    X86_AT(c, 0x963f0u);
    x86_enter(c, 0x24u, 0x0u, 4);
    // 0963f4  push esi
    X86_AT(c, 0x963f4u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0963f5  push edi
    X86_AT(c, 0x963f5u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0963f6  cmp byte ptr [0x8a833], 0
    X86_AT(c, 0x963f6u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0x8A833u))), 0x0u, 0, 1);
    // 0963fd  je 0x9641f
    X86_AT(c, 0x963fdu);
    if (x86_cc(c, 4)) { goto L_9641f; }
    X86_TICK(c, 20);
    // 0963ff  push dword ptr [0x8acc4]
    X86_AT(c, 0x963ffu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0x8ACC4u))); push32(c, v); }
    // 096405  mov eax, dword ptr [0x8acc4]
    X86_AT(c, 0x96405u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x8ACC4u)));
    // 09640a  sub eax, 0xc
    X86_AT(c, 0x9640au);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, 0xCu, 0, 4); }
    // 09640d  push eax
    X86_AT(c, 0x9640du);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 09640e  call 0x967a9
    X86_AT(c, 0x9640eu);
    push32(c, 0x96413u); x86_call_known(c, 0x967a9u, f_000967a9); X86_RET(c, 0x96413u);
    X86_TICK(c, 14);
    // 096413  add dword ptr [0x8acc4], 0xfffffff4
    X86_AT(c, 0x96413u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x8ACC4u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0xFFFFFFF4u, 0, 4)); }
    // 09641a  jmp 0x9650e
    X86_AT(c, 0x9641au);
    goto L_9650e;
L_9641f:
    X86_TICK(c, 48);
    // 09641f  mov eax, dword ptr [0x8acc4]
    X86_AT(c, 0x9641fu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x8ACC4u)));
    // 096424  lea edx, [ebp - 0x14]
    X86_AT(c, 0x96424u);
    c.r[2] = (uint32_t)(c.r[5] + 0xFFFFFFECu);
    // 096427  push esi
    X86_AT(c, 0x96427u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 096428  push edi
    X86_AT(c, 0x96428u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 096429  mov esi, eax
    X86_AT(c, 0x96429u);
    c.r[6] = c.r[0];
    // 09642b  mov edi, edx
    X86_AT(c, 0x9642bu);
    c.r[7] = c.r[2];
    // 09642d  mov ecx, 3
    X86_AT(c, 0x9642du);
    c.r[1] = 0x3u;
    // 096432  movsd dword ptr es:[edi], dword ptr [esi]
    X86_AT(c, 0x96432u);
    x86_string(c, 0, 4, 243, 4, 3);
    // 096434  pop edi
    X86_AT(c, 0x96434u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 096435  pop esi
    X86_AT(c, 0x96435u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 096436  xchg esi, eax
    X86_AT(c, 0x96436u);
    { uint32_t t = c.r[6]; c.r[6] = c.r[0]; c.r[0] = t; }
    // 096437  sub esi, 0xc
    X86_AT(c, 0x96437u);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, 0xCu, 0, 4); }
    // 09643a  cmp byte ptr [ebp - 9], 0
    X86_AT(c, 0x9643au);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF7u))), 0x0u, 0, 1);
    // 09643e  jne 0x96446
    X86_AT(c, 0x9643eu);
    if (x86_cc(c, 5)) { goto L_96446; }
    X86_TICK(c, 12);
    // 096440  cmp byte ptr [esi + 0xb], 0
    X86_AT(c, 0x96440u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[6] + 0xBu))), 0x0u, 0, 1);
    // 096444  je 0x9646c
    X86_AT(c, 0x96444u);
    if (x86_cc(c, 4)) { goto L_9646c; }
L_96446:
    X86_TICK(c, 45);
    // 096446  add dword ptr [0x8acc4], 0xfffffff4
    X86_AT(c, 0x96446u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x8ACC4u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0xFFFFFFF4u, 0, 4)); }
    // 09644d  mov eax, 0x8acd4
    X86_AT(c, 0x9644du);
    c.r[0] = 0x8ACD4u;
    // 096452  mov edx, dword ptr [0x8acc4]
    X86_AT(c, 0x96452u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(0x8ACC4u)));
    // 096458  push esi
    X86_AT(c, 0x96458u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 096459  push edi
    X86_AT(c, 0x96459u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 09645a  mov esi, eax
    X86_AT(c, 0x9645au);
    c.r[6] = c.r[0];
    // 09645c  mov edi, edx
    X86_AT(c, 0x9645cu);
    c.r[7] = c.r[2];
    // 09645e  mov ecx, 3
    X86_AT(c, 0x9645eu);
    c.r[1] = 0x3u;
    // 096463  movsd dword ptr es:[edi], dword ptr [esi]
    X86_AT(c, 0x96463u);
    x86_string(c, 0, 4, 243, 4, 3);
    // 096465  pop edi
    X86_AT(c, 0x96465u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 096466  pop esi
    X86_AT(c, 0x96466u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 096467  jmp 0x9650e
    X86_AT(c, 0x96467u);
    goto L_9650e;
L_9646c:
    X86_TICK(c, 69);
    // 09646c  add dword ptr [0x8acc4], 0xfffffff4
    X86_AT(c, 0x9646cu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x8ACC4u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0xFFFFFFF4u, 0, 4)); }
    // 096473  mov al, byte ptr [ebp - 0xa]
    X86_AT(c, 0x96473u);
    s8(c, 0, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF6u))));
    // 096476  cmp al, byte ptr [esi + 0xa]
    X86_AT(c, 0x96476u);
    (void)x86_sub(c, g8(c, 0), rd8((c.sbase[3] + (uint32_t)(c.r[6] + 0xAu))), 0, 1);
    // 096479  setne byte ptr [ebp - 0xa]
    X86_AT(c, 0x96479u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF6u)), x86_cc(c, 5) ? 1u : 0u);
    // 09647d  mov ax, word ptr [ebp - 0xc]
    X86_AT(c, 0x9647du);
    s16(c, 0, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u))));
    // 096481  sub ax, 0x3fff
    X86_AT(c, 0x96481u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_sub(c, v, 0x3FFFu, 0, 2)); }
    // 096485  add ax, word ptr [esi + 8]
    X86_AT(c, 0x96485u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[3] + (uint32_t)(c.r[6] + 0x8u))), 0, 2)); }
    // 096489  inc eax
    X86_AT(c, 0x96489u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 09648a  mov word ptr [ebp - 0xc], ax
    X86_AT(c, 0x9648au);
    wr16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)), (c.r[0] & 0xFFFFu));
    // 09648e  push dword ptr [esi + 4]
    X86_AT(c, 0x9648eu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0x4u))); push32(c, v); }
    // 096491  push dword ptr [esi]
    X86_AT(c, 0x96491u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[6]))); push32(c, v); }
    // 096493  push dword ptr [ebp - 0x10]
    X86_AT(c, 0x96493u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u))); push32(c, v); }
    // 096496  push dword ptr [ebp - 0x14]
    X86_AT(c, 0x96496u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu))); push32(c, v); }
    // 096499  lea eax, [ebp - 0x24]
    X86_AT(c, 0x96499u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFDCu);
    // 09649c  push eax
    X86_AT(c, 0x9649cu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 09649d  call 0x96fac
    X86_AT(c, 0x9649du);
    push32(c, 0x964a2u); x86_call_known(c, 0x96facu, f_00096fac); X86_RET(c, 0x964a2u);
    X86_TICK(c, 9);
    // 0964a2  mov di, 0x80
    X86_AT(c, 0x964a2u);
    s16(c, 7, 0x80u);
    // 0964a6  jmp 0x964b6
    X86_AT(c, 0x964a6u);
    goto L_964b6;
L_964a8:
    X86_TICK(c, 19);
    // 0964a8  dec word ptr [ebp - 0xc]
    X86_AT(c, 0x964a8u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)); uint32_t v = rd16(ea); wr16(ea, x86_dec(c, v, 2)); }
    // 0964ac  dec edi
    X86_AT(c, 0x964acu);
    { uint32_t v = c.r[7]; c.r[7] = x86_dec(c, v, 4); }
    // 0964ad  lea eax, [ebp - 0x24]
    X86_AT(c, 0x964adu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFDCu);
    // 0964b0  push eax
    X86_AT(c, 0x964b0u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0964b1  call 0x96b7b
    X86_AT(c, 0x964b1u);
    push32(c, 0x964b6u); x86_call_known(c, 0x96b7bu, f_00096b7b); X86_RET(c, 0x964b6u);
L_964b6:
    X86_TICK(c, 12);
    // 0964b6  cmp byte ptr [ebp - 0x15], 0x80
    X86_AT(c, 0x964b6u);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFEBu))), 0x80u, 0, 1);
    // 0964ba  jae 0x964c1
    X86_AT(c, 0x964bau);
    if (x86_cc(c, 3)) { goto L_964c1; }
    X86_TICK(c, 7);
    // 0964bc  and di, di
    X86_AT(c, 0x964bcu);
    { uint32_t v = (c.r[7] & 0xFFFFu); s16(c, 7, x86_logic(c, v & (c.r[7] & 0xFFFFu), 2)); }
    // 0964bf  ja 0x964a8
    X86_AT(c, 0x964bfu);
    if (x86_cc(c, 7)) { X86_POLL(c, 0x964a8u); goto L_964a8; }
L_964c1:
    X86_TICK(c, 24);
    // 0964c1  mov eax, dword ptr [ebp - 0x1c]
    X86_AT(c, 0x964c1u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE4u)));
    // 0964c4  mov edx, dword ptr [ebp - 0x18]
    X86_AT(c, 0x964c4u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE8u)));
    // 0964c7  mov dword ptr [ebp - 0x14], eax
    X86_AT(c, 0x964c7u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu)), c.r[0]);
    // 0964ca  mov dword ptr [ebp - 0x10], edx
    X86_AT(c, 0x964cau);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u)), c.r[2]);
    // 0964cd  cmp byte ptr [ebp - 0x1d], 0x80
    X86_AT(c, 0x964cdu);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE3u))), 0x80u, 0, 1);
    // 0964d1  jb 0x964f0
    X86_AT(c, 0x964d1u);
    if (x86_cc(c, 2)) { goto L_964f0; }
    X86_TICK(c, 21);
    // 0964d3  mov dword ptr [ebp - 4], 0
    X86_AT(c, 0x964d3u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), 0x0u);
    // 0964da  mov dword ptr [ebp - 8], 1
    X86_AT(c, 0x964dau);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), 0x1u);
    // 0964e1  push 4
    X86_AT(c, 0x964e1u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0964e3  lea eax, [ebp - 8]
    X86_AT(c, 0x964e3u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFF8u);
    // 0964e6  push eax
    X86_AT(c, 0x964e6u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0964e7  lea eax, [ebp - 0x14]
    X86_AT(c, 0x964e7u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFECu);
    // 0964ea  push eax
    X86_AT(c, 0x964eau);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0964eb  call 0x96a44
    X86_AT(c, 0x964ebu);
    push32(c, 0x964f0u); x86_call_known(c, 0x96a44u, f_00096a44); X86_RET(c, 0x964f0u);
L_964f0:
    X86_TICK(c, 40);
    // 0964f0  lea eax, [ebp - 0x14]
    X86_AT(c, 0x964f0u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFECu);
    // 0964f3  mov edx, dword ptr [0x8acc4]
    X86_AT(c, 0x964f3u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(0x8ACC4u)));
    // 0964f9  push esi
    X86_AT(c, 0x964f9u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0964fa  push edi
    X86_AT(c, 0x964fau);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0964fb  mov esi, eax
    X86_AT(c, 0x964fbu);
    c.r[6] = c.r[0];
    // 0964fd  mov edi, edx
    X86_AT(c, 0x964fdu);
    c.r[7] = c.r[2];
    // 0964ff  mov ecx, 3
    X86_AT(c, 0x964ffu);
    c.r[1] = 0x3u;
    // 096504  movsd dword ptr es:[edi], dword ptr [esi]
    X86_AT(c, 0x96504u);
    x86_string(c, 0, 4, 243, 4, 3);
    // 096506  pop edi
    X86_AT(c, 0x96506u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 096507  pop esi
    X86_AT(c, 0x96507u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 096508  push edx
    X86_AT(c, 0x96508u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 096509  call 0x96bd4
    X86_AT(c, 0x96509u);
    push32(c, 0x9650eu); x86_call_known(c, 0x96bd4u, f_00096bd4); X86_RET(c, 0x9650eu);
L_9650e:
    X86_TICK(c, 24);
    // 09650e  pop edi
    X86_AT(c, 0x9650eu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 09650f  pop esi
    X86_AT(c, 0x9650fu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 096510  leave 
    X86_AT(c, 0x96510u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 096511  ret 
    X86_AT(c, 0x96511u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x963f0u, "ran off the end of a function");
}
void f_0009650e(X86Cpu& c) {
    X86_TICK(c, 24);
    // 09650e  pop edi
    X86_AT(c, 0x9650eu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 09650f  pop esi
    X86_AT(c, 0x9650fu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 096510  leave 
    X86_AT(c, 0x96510u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 096511  ret 
    X86_AT(c, 0x96511u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x9650eu, "ran off the end of a function");
}
void f_00096514(X86Cpu& c) {
    X86_TICK(c, 7);
    // 096514  call 0x96320
    X86_AT(c, 0x96514u);
    push32(c, 0x96519u); x86_call_known(c, 0x96320u, f_00096320); X86_RET(c, 0x96519u);
    X86_TICK(c, 7);
    // 096519  call 0x96520
    X86_AT(c, 0x96519u);
    push32(c, 0x9651eu); x86_call_known(c, 0x96520u, f_00096520); X86_RET(c, 0x9651eu);
    X86_TICK(c, 10);
    // 09651e  ret 
    X86_AT(c, 0x9651eu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x96514u, "ran off the end of a function");
}
void f_00096520(X86Cpu& c) {
    X86_TICK(c, 18);
    // 096520  push ebx
    X86_AT(c, 0x96520u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 096521  push esi
    X86_AT(c, 0x96521u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 096522  push edi
    X86_AT(c, 0x96522u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 096523  cmp byte ptr [0x8a833], 0
    X86_AT(c, 0x96523u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0x8A833u))), 0x0u, 0, 1);
    // 09652a  je 0x96542
    X86_AT(c, 0x9652au);
    if (x86_cc(c, 4)) { goto L_96542; }
    X86_TICK(c, 20);
    // 09652c  push dword ptr [0x8acc4]
    X86_AT(c, 0x9652cu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0x8ACC4u))); push32(c, v); }
    // 096532  mov eax, dword ptr [0x8acc4]
    X86_AT(c, 0x96532u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x8ACC4u)));
    // 096537  sub eax, 0xc
    X86_AT(c, 0x96537u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, 0xCu, 0, 4); }
    // 09653a  push eax
    X86_AT(c, 0x9653au);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 09653b  call 0x967b0
    X86_AT(c, 0x9653bu);
    push32(c, 0x96540u); x86_call_known(c, 0x967b0u, f_000967b0); X86_RET(c, 0x96540u);
    X86_TICK(c, 7);
    // 096540  jmp 0x96593
    X86_AT(c, 0x96540u);
    goto L_96593;
L_96542:
    X86_TICK(c, 35);
    // 096542  mov eax, dword ptr [0x8acc4]
    X86_AT(c, 0x96542u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x8ACC4u)));
    // 096547  mov dl, byte ptr [eax + 0xa]
    X86_AT(c, 0x96547u);
    s8(c, 2, rd8((c.sbase[3] + (uint32_t)(c.r[0] + 0xAu))));
    // 09654a  cmp dl, byte ptr [eax - 2]
    X86_AT(c, 0x9654au);
    (void)x86_sub(c, g8(c, 2), rd8((c.sbase[3] + (uint32_t)(c.r[0] + 0xFFFFFFFEu))), 0, 1);
    // 09654d  setne byte ptr [eax - 2]
    X86_AT(c, 0x9654du);
    wr8((c.sbase[3] + (uint32_t)(c.r[0] + 0xFFFFFFFEu)), x86_cc(c, 5) ? 1u : 0u);
    // 096551  mov eax, dword ptr [0x8acc4]
    X86_AT(c, 0x96551u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x8ACC4u)));
    // 096556  cmp byte ptr [eax + 0xb], 0
    X86_AT(c, 0x96556u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[0] + 0xBu))), 0x0u, 0, 1);
    // 09655a  je 0x96588
    X86_AT(c, 0x9655au);
    if (x86_cc(c, 4)) { goto L_96588; }
    X86_TICK(c, 36);
    // 09655c  add dword ptr [0x8acc4], 0xfffffff4
    X86_AT(c, 0x9655cu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x8ACC4u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0xFFFFFFF4u, 0, 4)); }
    // 096563  mov ax, word ptr [0x8acf4]
    X86_AT(c, 0x96563u);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(0x8ACF4u))));
    // 096569  mov edx, dword ptr [0x8acc4]
    X86_AT(c, 0x96569u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(0x8ACC4u)));
    // 09656f  mov word ptr [edx + 8], ax
    X86_AT(c, 0x9656fu);
    wr16((c.sbase[3] + (uint32_t)(c.r[2] + 0x8u)), (c.r[0] & 0xFFFFu));
    // 096573  mov eax, dword ptr [0x8acec]
    X86_AT(c, 0x96573u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x8ACECu)));
    // 096578  mov ecx, dword ptr [0x8acf0]
    X86_AT(c, 0x96578u);
    c.r[1] = rd32((c.sbase[3] + (uint32_t)(0x8ACF0u)));
    // 09657e  mov dword ptr [edx], eax
    X86_AT(c, 0x9657eu);
    wr32((c.sbase[3] + (uint32_t)(c.r[2])), c.r[0]);
    // 096580  mov dword ptr [edx + 4], ecx
    X86_AT(c, 0x96580u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0x4u)), c.r[1]);
    // 096583  jmp 0x9666a
    X86_AT(c, 0x96583u);
    goto L_9666a;
L_96588:
    X86_TICK(c, 16);
    // 096588  mov eax, dword ptr [0x8acc4]
    X86_AT(c, 0x96588u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x8ACC4u)));
    // 09658d  cmp byte ptr [eax - 1], 0
    X86_AT(c, 0x9658du);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[0] + 0xFFFFFFFFu))), 0x0u, 0, 1);
    // 096591  je 0x965b6
    X86_AT(c, 0x96591u);
    if (x86_cc(c, 4)) { goto L_965b6; }
L_96593:
    X86_TICK(c, 14);
    // 096593  add dword ptr [0x8acc4], 0xfffffff4
    X86_AT(c, 0x96593u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x8ACC4u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0xFFFFFFF4u, 0, 4)); }
    // 09659a  jmp 0x9666a
    X86_AT(c, 0x9659au);
    goto L_9666a;
L_9659f:
    X86_TICK(c, 15);
    // 09659f  mov eax, dword ptr [0x8acc4]
    X86_AT(c, 0x9659fu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x8ACC4u)));
    // 0965a4  sub eax, 0xc
    X86_AT(c, 0x965a4u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, 0xCu, 0, 4); }
    // 0965a7  push eax
    X86_AT(c, 0x965a7u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0965a8  call 0x96b1c
    X86_AT(c, 0x965a8u);
    push32(c, 0x965adu); x86_call_known(c, 0x96b1cu, f_00096b1c); X86_RET(c, 0x965adu);
    X86_TICK(c, 10);
    // 0965ad  mov eax, dword ptr [0x8acc4]
    X86_AT(c, 0x965adu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x8ACC4u)));
    // 0965b2  dec word ptr [eax - 4]
    X86_AT(c, 0x965b2u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[0] + 0xFFFFFFFCu)); uint32_t v = rd16(ea); wr16(ea, x86_dec(c, v, 2)); }
L_965b6:
    X86_TICK(c, 16);
    // 0965b6  mov eax, dword ptr [0x8acc4]
    X86_AT(c, 0x965b6u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x8ACC4u)));
    // 0965bb  cmp byte ptr [eax - 5], 0x80
    X86_AT(c, 0x965bbu);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[0] + 0xFFFFFFFBu))), 0x80u, 0, 1);
    // 0965bf  jb 0x9659f
    X86_AT(c, 0x965bfu);
    if (x86_cc(c, 2)) { X86_POLL(c, 0x9659fu); goto L_9659f; }
    X86_TICK(c, 7);
    // 0965c1  jmp 0x965d7
    X86_AT(c, 0x965c1u);
    goto L_965d7;
L_965c3:
    X86_TICK(c, 12);
    // 0965c3  push dword ptr [0x8acc4]
    X86_AT(c, 0x965c3u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0x8ACC4u))); push32(c, v); }
    // 0965c9  call 0x96b1c
    X86_AT(c, 0x965c9u);
    push32(c, 0x965ceu); x86_call_known(c, 0x96b1cu, f_00096b1c); X86_RET(c, 0x965ceu);
    X86_TICK(c, 10);
    // 0965ce  mov eax, dword ptr [0x8acc4]
    X86_AT(c, 0x965ceu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x8ACC4u)));
    // 0965d3  dec word ptr [eax + 8]
    X86_AT(c, 0x965d3u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[0] + 0x8u)); uint32_t v = rd16(ea); wr16(ea, x86_dec(c, v, 2)); }
L_965d7:
    X86_TICK(c, 16);
    // 0965d7  mov eax, dword ptr [0x8acc4]
    X86_AT(c, 0x965d7u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x8ACC4u)));
    // 0965dc  cmp byte ptr [eax + 7], 0x80
    X86_AT(c, 0x965dcu);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[0] + 0x7u))), 0x80u, 0, 1);
    // 0965e0  jb 0x965c3
    X86_AT(c, 0x965e0u);
    if (x86_cc(c, 2)) { X86_POLL(c, 0x965c3u); goto L_965c3; }
    X86_TICK(c, 35);
    // 0965e2  push dword ptr [eax + 4]
    X86_AT(c, 0x965e2u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0x4u))); push32(c, v); }
    // 0965e5  push dword ptr [eax]
    X86_AT(c, 0x965e5u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[0]))); push32(c, v); }
    // 0965e7  push dword ptr [eax - 8]
    X86_AT(c, 0x965e7u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0xFFFFFFF8u))); push32(c, v); }
    // 0965ea  push dword ptr [eax - 0xc]
    X86_AT(c, 0x965eau);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0xFFFFFFF4u))); push32(c, v); }
    // 0965ed  lea edx, [eax - 0xc]
    X86_AT(c, 0x965edu);
    c.r[2] = (uint32_t)(c.r[0] + 0xFFFFFFF4u);
    // 0965f0  push edx
    X86_AT(c, 0x965f0u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0965f1  mov ebx, eax
    X86_AT(c, 0x965f1u);
    c.r[3] = c.r[0];
    // 0965f3  mov esi, edx
    X86_AT(c, 0x965f3u);
    c.r[6] = c.r[2];
    // 0965f5  call 0x96ff8
    X86_AT(c, 0x965f5u);
    push32(c, 0x965fau); x86_call_known(c, 0x96ff8u, f_00096ff8); X86_RET(c, 0x965fau);
    X86_TICK(c, 35);
    // 0965fa  movzx eax, ax
    X86_AT(c, 0x965fau);
    c.r[0] = (c.r[0] & 0xFFFFu);
    // 0965fd  movzx edx, word ptr [ebx + 8]
    X86_AT(c, 0x965fdu);
    c.r[2] = rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x8u)));
    // 096601  movzx edi, word ptr [esi + 8]
    X86_AT(c, 0x96601u);
    c.r[7] = rd16((c.sbase[3] + (uint32_t)(c.r[6] + 0x8u)));
    // 096605  sub edi, edx
    X86_AT(c, 0x96605u);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[2], 0, 4); }
    // 096607  add edi, 0x403e
    X86_AT(c, 0x96607u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x403Eu, 0, 4); }
    // 09660d  sub edi, eax
    X86_AT(c, 0x9660du);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[0], 0, 4); }
    // 09660f  add dword ptr [0x8acc4], 0xfffffff4
    X86_AT(c, 0x9660fu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x8ACC4u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0xFFFFFFF4u, 0, 4)); }
    // 096616  and edi, edi
    X86_AT(c, 0x96616u);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & c.r[7], 4); }
    // 096618  jge 0x96653
    X86_AT(c, 0x96618u);
    if (x86_cc(c, 13)) { goto L_96653; }
    X86_TICK(c, 7);
    // 09661a  cmp edi, 0xffffffc1
    X86_AT(c, 0x9661au);
    (void)x86_sub(c, c.r[7], 0xFFFFFFC1u, 0, 4);
    // 09661d  jl 0x9663c
    X86_AT(c, 0x9661du);
    if (x86_cc(c, 12)) { goto L_9663c; }
    X86_TICK(c, 18);
    // 09661f  mov eax, edi
    X86_AT(c, 0x9661fu);
    c.r[0] = c.r[7];
    // 096621  neg eax
    X86_AT(c, 0x96621u);
    { uint32_t v = c.r[0]; c.r[0] = x86_neg(c, v, 4); }
    // 096623  push eax
    X86_AT(c, 0x96623u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 096624  push dword ptr [0x8acc4]
    X86_AT(c, 0x96624u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0x8ACC4u))); push32(c, v); }
    // 09662a  call 0x96b38
    X86_AT(c, 0x9662au);
    push32(c, 0x9662fu); x86_call_known(c, 0x96b38u, f_00096b38); X86_RET(c, 0x9662fu);
    X86_TICK(c, 13);
    // 09662f  mov eax, dword ptr [0x8acc4]
    X86_AT(c, 0x9662fu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x8ACC4u)));
    // 096634  mov word ptr [eax + 8], 0
    X86_AT(c, 0x96634u);
    wr16((c.sbase[3] + (uint32_t)(c.r[0] + 0x8u)), 0x0u);
    // 09663a  jmp 0x9665f
    X86_AT(c, 0x9663au);
    goto L_9665f;
L_9663c:
    X86_TICK(c, 30);
    // 09663c  mov esi, 0x8acd4
    X86_AT(c, 0x9663cu);
    c.r[6] = 0x8ACD4u;
    // 096641  mov eax, dword ptr [0x8acc4]
    X86_AT(c, 0x96641u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x8ACC4u)));
    // 096646  push edi
    X86_AT(c, 0x96646u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 096647  mov edi, eax
    X86_AT(c, 0x96647u);
    c.r[7] = c.r[0];
    // 096649  mov ecx, 3
    X86_AT(c, 0x96649u);
    c.r[1] = 0x3u;
    // 09664e  movsd dword ptr es:[edi], dword ptr [esi]
    X86_AT(c, 0x9664eu);
    x86_string(c, 0, 4, 243, 4, 3);
    // 096650  pop edi
    X86_AT(c, 0x96650u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 096651  jmp 0x9665f
    X86_AT(c, 0x96651u);
    goto L_9665f;
L_96653:
    X86_TICK(c, 8);
    // 096653  mov eax, edi
    X86_AT(c, 0x96653u);
    c.r[0] = c.r[7];
    // 096655  mov edx, dword ptr [0x8acc4]
    X86_AT(c, 0x96655u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(0x8ACC4u)));
    // 09665b  mov word ptr [edx + 8], ax
    X86_AT(c, 0x9665bu);
    wr16((c.sbase[3] + (uint32_t)(c.r[2] + 0x8u)), (c.r[0] & 0xFFFFu));
L_9665f:
    X86_TICK(c, 12);
    // 09665f  push dword ptr [0x8acc4]
    X86_AT(c, 0x9665fu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0x8ACC4u))); push32(c, v); }
    // 096665  call 0x96bd4
    X86_AT(c, 0x96665u);
    push32(c, 0x9666au); x86_call_known(c, 0x96bd4u, f_00096bd4); X86_RET(c, 0x9666au);
L_9666a:
    X86_TICK(c, 22);
    // 09666a  pop edi
    X86_AT(c, 0x9666au);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 09666b  pop esi
    X86_AT(c, 0x9666bu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 09666c  pop ebx
    X86_AT(c, 0x9666cu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 09666d  ret 
    X86_AT(c, 0x9666du);
    c.eip = pop32(c); return;
    x86_fault(c, 0x96520u, "ran off the end of a function");
}
void f_0009666a(X86Cpu& c) {
    X86_TICK(c, 22);
    // 09666a  pop edi
    X86_AT(c, 0x9666au);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 09666b  pop esi
    X86_AT(c, 0x9666bu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 09666c  pop ebx
    X86_AT(c, 0x9666cu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 09666d  ret 
    X86_AT(c, 0x9666du);
    c.eip = pop32(c); return;
    x86_fault(c, 0x9666au, "ran off the end of a function");
}
void f_00096670(X86Cpu& c) {
    X86_TICK(c, 24);
    // 096670  enter 0x10, 0
    X86_AT(c, 0x96670u);
    x86_enter(c, 0x10u, 0x0u, 4);
    // 096674  push ebx
    X86_AT(c, 0x96674u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 096675  push esi
    X86_AT(c, 0x96675u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 096676  push edi
    X86_AT(c, 0x96676u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 096677  cmp byte ptr [0x8a833], 0
    X86_AT(c, 0x96677u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0x8A833u))), 0x0u, 0, 1);
    // 09667e  je 0x96699
    X86_AT(c, 0x9667eu);
    if (x86_cc(c, 4)) { goto L_96699; }
    X86_TICK(c, 20);
    // 096680  push dword ptr [0x8acc4]
    X86_AT(c, 0x96680u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0x8ACC4u))); push32(c, v); }
    // 096686  mov eax, dword ptr [0x8acc4]
    X86_AT(c, 0x96686u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x8ACC4u)));
    // 09668b  sub eax, 0xc
    X86_AT(c, 0x9668bu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, 0xCu, 0, 4); }
    // 09668e  push eax
    X86_AT(c, 0x9668eu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 09668f  call 0x967b7
    X86_AT(c, 0x9668fu);
    push32(c, 0x96694u); x86_call_known(c, 0x967b7u, f_000967b7); X86_RET(c, 0x96694u);
    X86_TICK(c, 7);
    // 096694  jmp 0x96706
    X86_AT(c, 0x96694u);
    goto L_96706;
L_96699:
    X86_TICK(c, 16);
    // 096699  mov eax, dword ptr [0x8acc4]
    X86_AT(c, 0x96699u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x8ACC4u)));
    // 09669e  cmp byte ptr [eax + 0xb], 0
    X86_AT(c, 0x9669eu);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[0] + 0xBu))), 0x0u, 0, 1);
    // 0966a2  je 0x966aa
    X86_AT(c, 0x966a2u);
    if (x86_cc(c, 4)) { goto L_966aa; }
    X86_TICK(c, 12);
    // 0966a4  cmp byte ptr [eax - 1], 0
    X86_AT(c, 0x966a4u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[0] + 0xFFFFFFFFu))), 0x0u, 0, 1);
    // 0966a8  jne 0x966c2
    X86_AT(c, 0x966a8u);
    if (x86_cc(c, 5)) { goto L_966c2; }
L_966aa:
    X86_TICK(c, 24);
    // 0966aa  mov esi, dword ptr [0x8acc4]
    X86_AT(c, 0x966aau);
    c.r[6] = rd32((c.sbase[3] + (uint32_t)(0x8ACC4u)));
    // 0966b0  mov edi, dword ptr [0x8acc4]
    X86_AT(c, 0x966b0u);
    c.r[7] = rd32((c.sbase[3] + (uint32_t)(0x8ACC4u)));
    // 0966b6  sub edi, 0xc
    X86_AT(c, 0x966b6u);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, 0xCu, 0, 4); }
    // 0966b9  mov ecx, 0xc
    X86_AT(c, 0x966b9u);
    c.r[1] = 0xCu;
    // 0966be  cmpsb byte ptr [esi], byte ptr es:[edi]
    X86_AT(c, 0x966beu);
    x86_string(c, 1, 1, 243, 4, 3);
    // 0966c0  jne 0x966c6
    X86_AT(c, 0x966c0u);
    if (x86_cc(c, 5)) { goto L_966c6; }
L_966c2:
    X86_TICK(c, 9);
    // 0966c2  sub eax, eax
    X86_AT(c, 0x966c2u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0966c4  jmp 0x96706
    X86_AT(c, 0x966c4u);
    goto L_96706;
L_966c6:
    X86_TICK(c, 21);
    // 0966c6  mov eax, dword ptr [0x8acc4]
    X86_AT(c, 0x966c6u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x8ACC4u)));
    // 0966cb  mov dl, byte ptr [eax + 0xa]
    X86_AT(c, 0x966cbu);
    s8(c, 2, rd8((c.sbase[3] + (uint32_t)(c.r[0] + 0xAu))));
    // 0966ce  mov byte ptr [ebp - 0xd], dl
    X86_AT(c, 0x966ceu);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF3u)), g8(c, 2));
    // 0966d1  mov bl, byte ptr [eax - 2]
    X86_AT(c, 0x966d1u);
    s8(c, 3, rd8((c.sbase[3] + (uint32_t)(c.r[0] + 0xFFFFFFFEu))));
    // 0966d4  cmp dl, bl
    X86_AT(c, 0x966d4u);
    (void)x86_sub(c, g8(c, 2), g8(c, 3), 0, 1);
    // 0966d6  jne 0x966f9
    X86_AT(c, 0x966d6u);
    if (x86_cc(c, 5)) { goto L_966f9; }
    X86_TICK(c, 28);
    // 0966d8  lea esi, [eax - 0xc]
    X86_AT(c, 0x966d8u);
    c.r[6] = (uint32_t)(c.r[0] + 0xFFFFFFF4u);
    // 0966db  lea edi, [ebp - 0xc]
    X86_AT(c, 0x966dbu);
    c.r[7] = (uint32_t)(c.r[5] + 0xFFFFFFF4u);
    // 0966de  mov ecx, 3
    X86_AT(c, 0x966deu);
    c.r[1] = 0x3u;
    // 0966e3  movsd dword ptr es:[edi], dword ptr [esi]
    X86_AT(c, 0x966e3u);
    x86_string(c, 0, 4, 243, 4, 3);
    // 0966e5  push 5
    X86_AT(c, 0x966e5u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0966e7  push eax
    X86_AT(c, 0x966e7u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0966e8  lea eax, [ebp - 0xc]
    X86_AT(c, 0x966e8u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFF4u);
    // 0966eb  push eax
    X86_AT(c, 0x966ebu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0966ec  call 0x96a6d
    X86_AT(c, 0x966ecu);
    push32(c, 0x966f1u); x86_call_known(c, 0x96a6du, f_00096a6d); X86_RET(c, 0x966f1u);
    X86_TICK(c, 14);
    // 0966f1  cmp al, bl
    X86_AT(c, 0x966f1u);
    (void)x86_sub(c, g8(c, 0), g8(c, 3), 0, 1);
    // 0966f3  setne byte ptr [ebp - 0xe]
    X86_AT(c, 0x966f3u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF2u)), x86_cc(c, 5) ? 1u : 0u);
    // 0966f7  jmp 0x966fc
    X86_AT(c, 0x966f7u);
    goto L_966fc;
L_966f9:
    X86_TICK(c, 2);
    // 0966f9  mov byte ptr [ebp - 0xe], bl
    X86_AT(c, 0x966f9u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF2u)), g8(c, 3));
L_966fc:
    X86_TICK(c, 12);
    // 0966fc  mov al, byte ptr [ebp - 0xe]
    X86_AT(c, 0x966fcu);
    s8(c, 0, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF2u))));
    // 0966ff  add eax, eax
    X86_AT(c, 0x966ffu);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, c.r[0], 0, 4); }
    // 096701  sub ah, ah
    X86_AT(c, 0x96701u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_sub(c, v, g8(c, 4), 0, 1)); }
    // 096703  neg eax
    X86_AT(c, 0x96703u);
    { uint32_t v = c.r[0]; c.r[0] = x86_neg(c, v, 4); }
    // 096705  inc eax
    X86_AT(c, 0x96705u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
L_96706:
    X86_TICK(c, 28);
    // 096706  pop edi
    X86_AT(c, 0x96706u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 096707  pop esi
    X86_AT(c, 0x96707u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 096708  pop ebx
    X86_AT(c, 0x96708u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 096709  leave 
    X86_AT(c, 0x96709u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 09670a  ret 
    X86_AT(c, 0x9670au);
    c.eip = pop32(c); return;
    x86_fault(c, 0x96670u, "ran off the end of a function");
}
void f_0009670c(X86Cpu& c) {
    X86_TICK(c, 13);
    // 09670c  enter 4, 0
    X86_AT(c, 0x9670cu);
    x86_enter(c, 0x4u, 0x0u, 4);
    // 096710  call 0x96670
    X86_AT(c, 0x96710u);
    push32(c, 0x96715u); x86_call_known(c, 0x96670u, f_00096670); X86_RET(c, 0x96715u);
    X86_TICK(c, 25);
    // 096715  mov word ptr [ebp - 2], ax
    X86_AT(c, 0x96715u);
    wr16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFEu)), (c.r[0] & 0xFFFFu));
    // 096719  add dword ptr [0x8acc4], 0xffffffe8
    X86_AT(c, 0x96719u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x8ACC4u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0xFFFFFFE8u, 0, 4)); }
    // 096720  leave 
    X86_AT(c, 0x96720u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 096721  ret 
    X86_AT(c, 0x96721u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x9670cu, "ran off the end of a function");
}
void f_00096724(X86Cpu& c) {
    X86_TICK(c, 19);
    // 096724  enter 4, 0
    X86_AT(c, 0x96724u);
    x86_enter(c, 0x4u, 0x0u, 4);
    // 096728  push esi
    X86_AT(c, 0x96728u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 096729  push edi
    X86_AT(c, 0x96729u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 09672a  mov si, 1
    X86_AT(c, 0x9672au);
    s16(c, 6, 0x1u);
    // 09672e  call 0x9670c
    X86_AT(c, 0x9672eu);
    push32(c, 0x96733u); x86_call_known(c, 0x9670cu, f_0009670c); X86_RET(c, 0x96733u);
    X86_TICK(c, 9);
    // 096733  lea edi, [esi + eax*1]
    X86_AT(c, 0x96733u);
    c.r[7] = (uint32_t)(c.r[6] + c.r[0]);
    // 096736  cmp di, si
    X86_AT(c, 0x96736u);
    (void)x86_sub(c, (c.r[7] & 0xFFFFu), (c.r[6] & 0xFFFFu), 0, 2);
    // 096739  jle 0x9673f
    X86_AT(c, 0x96739u);
    if (x86_cc(c, 14)) { goto L_9673f; }
    X86_TICK(c, 2);
    // 09673b  mov byte ptr [ebp - 1], 0
    X86_AT(c, 0x9673bu);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFFu)), 0x0u);
L_9673f:
    X86_TICK(c, 24);
    // 09673f  pop edi
    X86_AT(c, 0x9673fu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 096740  pop esi
    X86_AT(c, 0x96740u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 096741  leave 
    X86_AT(c, 0x96741u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 096742  ret 
    X86_AT(c, 0x96742u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x96724u, "ran off the end of a function");
}
void f_00096744(X86Cpu& c) {
    X86_TICK(c, 32);
    // 096744  esc 0xf, byte ptr [0x8ad28]
    X86_AT(c, 0x96744u);
    // 09674a  wait 
    X86_AT(c, 0x9674au);
    // 09674b  mov ax, word ptr [0x8ad28]
    X86_AT(c, 0x9674bu);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(0x8AD28u))));
    // 096751  and ax, 0xf3ff
    X86_AT(c, 0x96751u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_logic(c, v & 0xF3FFu, 2)); }
    // 096755  or eax, ecx
    X86_AT(c, 0x96755u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v | c.r[1], 4); }
    // 096757  mov word ptr [0x8ad26], ax
    X86_AT(c, 0x96757u);
    wr16((c.sbase[3] + (uint32_t)(0x8AD26u)), (c.r[0] & 0xFFFFu));
    // 09675d  esc 0xd, byte ptr [0x8ad26]
    X86_AT(c, 0x9675du);
    // 096763  ret 
    X86_AT(c, 0x96763u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x96744u, "ran off the end of a function");
}
void f_00096764(X86Cpu& c) {
    X86_TICK(c, 20);
    // 096764  push eax
    X86_AT(c, 0x96764u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 096765  esc 0x3c, al
    X86_AT(c, 0x96765u);
    // 096767  wait 
    X86_AT(c, 0x96767u);
    // 096768  and ax, 0x4100
    X86_AT(c, 0x96768u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_logic(c, v & 0x4100u, 2)); }
    // 09676c  cmp ax, 0x4000
    X86_AT(c, 0x9676cu);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), 0x4000u, 0, 2);
    // 096770  je 0x96776
    X86_AT(c, 0x96770u);
    if (x86_cc(c, 4)) { goto L_96776; }
    X86_TICK(c, 2);
    // 096772  cmp ax, 1
    X86_AT(c, 0x96772u);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), 0x1u, 0, 2);
L_96776:
    X86_TICK(c, 14);
    // 096776  pop eax
    X86_AT(c, 0x96776u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 096777  ret 
    X86_AT(c, 0x96777u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x96764u, "ran off the end of a function");
}
void f_0009678d(X86Cpu& c) {
    X86_TICK(c, 27);
    // 09678d  xor edx, edx
    X86_AT(c, 0x9678du);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v ^ c.r[2], 4); }
    // 09678f  mov ecx, dword ptr [esp + 8]
    X86_AT(c, 0x9678fu);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[4] + 0x8u)));
    // 096793  esc 0x1d, byte ptr [ecx]
    X86_AT(c, 0x96793u);
    // 096795  mov ecx, dword ptr [esp + 4]
    X86_AT(c, 0x96795u);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[4] + 0x4u)));
    // 096799  esc 0x1d, byte ptr [ecx]
    X86_AT(c, 0x96799u);
    // 09679b  mov eax, dword ptr cs:[edx + 0x96781]
    X86_AT(c, 0x9679bu);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[2] + 0x96781u)));
    // 0967a2  call eax
    X86_AT(c, 0x967a2u);
    { uint32_t t = c.r[0]; push32(c, 0x967a4u); x86_call(c, t); X86_RET(c, 0x967a4u); }
    X86_TICK(c, 13);
    // 0967a4  esc 0x1f, byte ptr [ecx]
    X86_AT(c, 0x967a4u);
    // 0967a6  ret 8
    X86_AT(c, 0x967a6u);
    c.eip = pop32(c); c.r[4] += 0x8u; return;
    x86_fault(c, 0x9678du, "ran off the end of a function");
}
void f_000967a9(X86Cpu& c) {
    goto L_967a9;
L_9678f:
    X86_TICK(c, 25);
    // 09678f  mov ecx, dword ptr [esp + 8]
    X86_AT(c, 0x9678fu);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[4] + 0x8u)));
    // 096793  esc 0x1d, byte ptr [ecx]
    X86_AT(c, 0x96793u);
    // 096795  mov ecx, dword ptr [esp + 4]
    X86_AT(c, 0x96795u);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[4] + 0x4u)));
    // 096799  esc 0x1d, byte ptr [ecx]
    X86_AT(c, 0x96799u);
    // 09679b  mov eax, dword ptr cs:[edx + 0x96781]
    X86_AT(c, 0x9679bu);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[2] + 0x96781u)));
    // 0967a2  call eax
    X86_AT(c, 0x967a2u);
    { uint32_t t = c.r[0]; push32(c, 0x967a4u); x86_call(c, t); X86_RET(c, 0x967a4u); }
    X86_TICK(c, 13);
    // 0967a4  esc 0x1f, byte ptr [ecx]
    X86_AT(c, 0x967a4u);
    // 0967a6  ret 8
    X86_AT(c, 0x967a6u);
    c.eip = pop32(c); c.r[4] += 0x8u; return;
L_967a9:
    X86_TICK(c, 9);
    // 0967a9  mov edx, 4
    X86_AT(c, 0x967a9u);
    c.r[2] = 0x4u;
    // 0967ae  jmp 0x9678f
    X86_AT(c, 0x967aeu);
    X86_POLL(c, 0x9678fu); goto L_9678f;
    x86_fault(c, 0x967a9u, "ran off the end of a function");
}
void f_000967b0(X86Cpu& c) {
    goto L_967b0;
L_9678f:
    X86_TICK(c, 25);
    // 09678f  mov ecx, dword ptr [esp + 8]
    X86_AT(c, 0x9678fu);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[4] + 0x8u)));
    // 096793  esc 0x1d, byte ptr [ecx]
    X86_AT(c, 0x96793u);
    // 096795  mov ecx, dword ptr [esp + 4]
    X86_AT(c, 0x96795u);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[4] + 0x4u)));
    // 096799  esc 0x1d, byte ptr [ecx]
    X86_AT(c, 0x96799u);
    // 09679b  mov eax, dword ptr cs:[edx + 0x96781]
    X86_AT(c, 0x9679bu);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[2] + 0x96781u)));
    // 0967a2  call eax
    X86_AT(c, 0x967a2u);
    { uint32_t t = c.r[0]; push32(c, 0x967a4u); x86_call(c, t); X86_RET(c, 0x967a4u); }
    X86_TICK(c, 13);
    // 0967a4  esc 0x1f, byte ptr [ecx]
    X86_AT(c, 0x967a4u);
    // 0967a6  ret 8
    X86_AT(c, 0x967a6u);
    c.eip = pop32(c); c.r[4] += 0x8u; return;
L_967b0:
    X86_TICK(c, 9);
    // 0967b0  mov edx, 8
    X86_AT(c, 0x967b0u);
    c.r[2] = 0x8u;
    // 0967b5  jmp 0x9678f
    X86_AT(c, 0x967b5u);
    X86_POLL(c, 0x9678fu); goto L_9678f;
    x86_fault(c, 0x967b0u, "ran off the end of a function");
}
void f_000967b7(X86Cpu& c) {
    X86_TICK(c, 24);
    // 0967b7  mov eax, dword ptr [esp + 4]
    X86_AT(c, 0x967b7u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[4] + 0x4u)));
    // 0967bb  esc 0x1d, byte ptr [eax]
    X86_AT(c, 0x967bbu);
    // 0967bd  mov eax, dword ptr [esp + 8]
    X86_AT(c, 0x967bdu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[4] + 0x8u)));
    // 0967c1  esc 0x1d, byte ptr [eax]
    X86_AT(c, 0x967c1u);
    // 0967c3  esc 0x33, cl
    X86_AT(c, 0x967c3u);
    // 0967c5  call 0x9682a
    X86_AT(c, 0x967c5u);
    push32(c, 0x967cau); x86_call_known(c, 0x9682au, f_0009682a); X86_RET(c, 0x967cau);
    X86_TICK(c, 10);
    // 0967ca  ret 8
    X86_AT(c, 0x967cau);
    c.eip = pop32(c); c.r[4] += 0x8u; return;
    x86_fault(c, 0x967b7u, "ran off the end of a function");
}
void f_000967f3(X86Cpu& c) {
    X86_TICK(c, 13);
    // 0967f3  esc 8, byte ptr [esp + 4]
    X86_AT(c, 0x967f3u);
    // 0967f7  ret 4
    X86_AT(c, 0x967f7u);
    c.eip = pop32(c); c.r[4] += 0x4u; return;
    x86_fault(c, 0x967f3u, "ran off the end of a function");
}
void f_0009680d(X86Cpu& c) {
    X86_TICK(c, 13);
    // 09680d  esc 0x28, byte ptr [esp + 4]
    X86_AT(c, 0x9680du);
    // 096811  ret 8
    X86_AT(c, 0x96811u);
    c.eip = pop32(c); c.r[4] += 0x8u; return;
    x86_fault(c, 0x9680du, "ran off the end of a function");
}
void f_00096814(X86Cpu& c) {
    X86_TICK(c, 23);
    // 096814  mov eax, dword ptr [esp + 4]
    X86_AT(c, 0x96814u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[4] + 0x4u)));
    // 096818  esc 0x1f, byte ptr [eax]
    X86_AT(c, 0x96818u);
    // 09681a  wait 
    X86_AT(c, 0x9681au);
    // 09681b  ret 4
    X86_AT(c, 0x9681bu);
    c.eip = pop32(c); c.r[4] += 0x4u; return;
    x86_fault(c, 0x96814u, "ran off the end of a function");
}
void f_0009681e(X86Cpu& c) {
    X86_TICK(c, 17);
    // 09681e  mov eax, dword ptr [esp + 4]
    X86_AT(c, 0x9681eu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[4] + 0x4u)));
    // 096822  esc 0x1d, byte ptr [eax]
    X86_AT(c, 0x96822u);
    // 096824  ret 4
    X86_AT(c, 0x96824u);
    c.eip = pop32(c); c.r[4] += 0x4u; return;
    x86_fault(c, 0x9681eu, "ran off the end of a function");
}
void f_00096827(X86Cpu& c) {
    X86_TICK(c, 13);
    // 096827  esc 0x2b, al
    X86_AT(c, 0x96827u);
    // 096829  ret 
    X86_AT(c, 0x96829u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x96827u, "ran off the end of a function");
}
void f_0009682a(X86Cpu& c) {
    X86_TICK(c, 9);
    // 09682a  xor eax, eax
    X86_AT(c, 0x9682au);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v ^ c.r[0], 4); }
    // 09682c  call 0x96764
    X86_AT(c, 0x9682cu);
    push32(c, 0x96831u); x86_call_known(c, 0x96764u, f_00096764); X86_RET(c, 0x96831u);
    X86_TICK(c, 5);
    // 096831  je 0x96838
    X86_AT(c, 0x96831u);
    if (x86_cc(c, 4)) { goto L_96838; }
    X86_TICK(c, 5);
    // 096833  jb 0x96837
    X86_AT(c, 0x96833u);
    if (x86_cc(c, 2)) { goto L_96837; }
    X86_TICK(c, 12);
    // 096835  inc eax
    X86_AT(c, 0x96835u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 096836  ret 
    X86_AT(c, 0x96836u);
    c.eip = pop32(c); return;
L_96837:
    X86_TICK(c, 2);
    // 096837  dec eax
    X86_AT(c, 0x96837u);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
L_96838:
    X86_TICK(c, 10);
    // 096838  ret 
    X86_AT(c, 0x96838u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x9682au, "ran off the end of a function");
}
void f_00096867(X86Cpu& c) {
    X86_TICK(c, 24);
    // 096867  esc 0xc, ch
    X86_AT(c, 0x96867u);
    // 096869  xor eax, eax
    X86_AT(c, 0x96869u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v ^ c.r[0], 4); }
    // 09686b  esc 0x3c, al
    X86_AT(c, 0x9686bu);
    // 09686d  wait 
    X86_AT(c, 0x9686du);
    // 09686e  ret 
    X86_AT(c, 0x9686eu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x96867u, "ran off the end of a function");
}
void f_0009686f(X86Cpu& c) {
    X86_TICK(c, 23);
    // 09686f  mov eax, dword ptr [esp + 4]
    X86_AT(c, 0x9686fu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[4] + 0x4u)));
    // 096873  esc 0x3e, byte ptr [eax]
    X86_AT(c, 0x96873u);
    // 096875  wait 
    X86_AT(c, 0x96875u);
    // 096876  ret 4
    X86_AT(c, 0x96876u);
    c.eip = pop32(c); c.r[4] += 0x4u; return;
    x86_fault(c, 0x9686fu, "ran off the end of a function");
}
void f_00096884(X86Cpu& c) {
    X86_TICK(c, 36);
    // 096884  push ebp
    X86_AT(c, 0x96884u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 096885  mov ebp, esp
    X86_AT(c, 0x96885u);
    c.r[5] = c.r[4];
    // 096887  push esi
    X86_AT(c, 0x96887u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 096888  mov eax, dword ptr [ebp + 0xc]
    X86_AT(c, 0x96888u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 09688b  mov edx, dword ptr [eax + 4]
    X86_AT(c, 0x9688bu);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0x4u)));
    // 09688e  mov esi, edx
    X86_AT(c, 0x9688eu);
    c.r[6] = c.r[2];
    // 096890  shr esi, 0x14
    X86_AT(c, 0x96890u);
    { uint32_t v = c.r[6]; bool w; uint32_t r = x86_shift(c, 5, v, 0x14u, 4, w); if (w) c.r[6] = r; }
    // 096893  mov ecx, dword ptr [eax]
    X86_AT(c, 0x96893u);
    c.r[1] = rd32((c.sbase[3] + (uint32_t)(c.r[0])));
    // 096895  mov eax, dword ptr [ebp + 8]
    X86_AT(c, 0x96895u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 096898  and si, 0x7ff
    X86_AT(c, 0x96898u);
    { uint32_t v = (c.r[6] & 0xFFFFu); s16(c, 6, x86_logic(c, v & 0x7FFu, 2)); }
    // 09689d  cmp si, 0x7ff
    X86_AT(c, 0x9689du);
    (void)x86_sub(c, (c.r[6] & 0xFFFFu), 0x7FFu, 0, 2);
    // 0968a2  je 0x968e9
    X86_AT(c, 0x968a2u);
    if (x86_cc(c, 4)) { goto L_968e9; }
    X86_TICK(c, 7);
    // 0968a4  and si, si
    X86_AT(c, 0x968a4u);
    { uint32_t v = (c.r[6] & 0xFFFFu); s16(c, 6, x86_logic(c, v & (c.r[6] & 0xFFFFu), 2)); }
    // 0968a7  je 0x968f3
    X86_AT(c, 0x968a7u);
    if (x86_cc(c, 4)) { goto L_968f3; }
    X86_TICK(c, 6);
    // 0968a9  mov byte ptr [eax + 0xb], 0
    X86_AT(c, 0x968a9u);
    wr8((c.sbase[3] + (uint32_t)(c.r[0] + 0xBu)), 0x0u);
    // 0968ad  sub si, 0x3ff
    X86_AT(c, 0x968adu);
    { uint32_t v = (c.r[6] & 0xFFFFu); s16(c, 6, x86_sub(c, v, 0x3FFu, 0, 2)); }
    // 0968b2  add si, 0x3fff
    X86_AT(c, 0x968b2u);
    { uint32_t v = (c.r[6] & 0xFFFFu); s16(c, 6, x86_add(c, v, 0x3FFFu, 0, 2)); }
L_968b7:
    X86_TICK(c, 9);
    // 0968b7  mov word ptr [eax + 8], si
    X86_AT(c, 0x968b7u);
    wr16((c.sbase[3] + (uint32_t)(c.r[0] + 0x8u)), (c.r[6] & 0xFFFFu));
    // 0968bb  test edx, 0x80000000
    X86_AT(c, 0x968bbu);
    (void)x86_logic(c, c.r[2] & 0x80000000u, 4);
    // 0968c1  je 0x968c9
    X86_AT(c, 0x968c1u);
    if (x86_cc(c, 4)) { goto L_968c9; }
    X86_TICK(c, 9);
    // 0968c3  mov byte ptr [eax + 0xa], 1
    X86_AT(c, 0x968c3u);
    wr8((c.sbase[3] + (uint32_t)(c.r[0] + 0xAu)), 0x1u);
    // 0968c7  jmp 0x968cd
    X86_AT(c, 0x968c7u);
    goto L_968cd;
L_968c9:
    X86_TICK(c, 2);
    // 0968c9  mov byte ptr [eax + 0xa], 0
    X86_AT(c, 0x968c9u);
    wr8((c.sbase[3] + (uint32_t)(c.r[0] + 0xAu)), 0x0u);
L_968cd:
    X86_TICK(c, 13);
    // 0968cd  shld edx, ecx, 0xb
    X86_AT(c, 0x968cdu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_double(c, true, v, c.r[1], 0xBu, 4, w); if (w) c.r[2] = r; }
    // 0968d1  shl ecx, 0xb
    X86_AT(c, 0x968d1u);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 4, v, 0xBu, 4, w); if (w) c.r[1] = r; }
    // 0968d4  and si, si
    X86_AT(c, 0x968d4u);
    { uint32_t v = (c.r[6] & 0xFFFFu); s16(c, 6, x86_logic(c, v & (c.r[6] & 0xFFFFu), 2)); }
    // 0968d7  je 0x968df
    X86_AT(c, 0x968d7u);
    if (x86_cc(c, 4)) { goto L_968df; }
    X86_TICK(c, 2);
    // 0968d9  or edx, 0x80000000
    X86_AT(c, 0x968d9u);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v | 0x80000000u, 4); }
L_968df:
    X86_TICK(c, 22);
    // 0968df  mov dword ptr [eax + 4], edx
    X86_AT(c, 0x968dfu);
    wr32((c.sbase[3] + (uint32_t)(c.r[0] + 0x4u)), c.r[2]);
    // 0968e2  mov dword ptr [eax], ecx
    X86_AT(c, 0x968e2u);
    wr32((c.sbase[3] + (uint32_t)(c.r[0])), c.r[1]);
    // 0968e4  pop esi
    X86_AT(c, 0x968e4u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0968e5  pop ebp
    X86_AT(c, 0x968e5u);
    { uint32_t v = pop32(c); c.r[5] = v; }
    // 0968e6  ret 8
    X86_AT(c, 0x968e6u);
    c.eip = pop32(c); c.r[4] += 0x8u; return;
L_968e9:
    X86_TICK(c, 11);
    // 0968e9  mov si, 0x7fff
    X86_AT(c, 0x968e9u);
    s16(c, 6, 0x7FFFu);
    // 0968ed  mov byte ptr [eax + 0xb], 0
    X86_AT(c, 0x968edu);
    wr8((c.sbase[3] + (uint32_t)(c.r[0] + 0xBu)), 0x0u);
    // 0968f1  jmp 0x968b7
    X86_AT(c, 0x968f1u);
    X86_POLL(c, 0x968b7u); goto L_968b7;
L_968f3:
    X86_TICK(c, 9);
    // 0968f3  mov byte ptr [eax + 0xb], 1
    X86_AT(c, 0x968f3u);
    wr8((c.sbase[3] + (uint32_t)(c.r[0] + 0xBu)), 0x1u);
    // 0968f7  jmp 0x968b7
    X86_AT(c, 0x968f7u);
    X86_POLL(c, 0x968b7u); goto L_968b7;
    x86_fault(c, 0x96884u, "ran off the end of a function");
}
void f_0009697c(X86Cpu& c) {
    X86_TICK(c, 27);
    // 09697c  push ebp
    X86_AT(c, 0x9697cu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 09697d  mov ebp, esp
    X86_AT(c, 0x9697du);
    c.r[5] = c.r[4];
    // 09697f  mov eax, dword ptr [ebp + 0xc]
    X86_AT(c, 0x9697fu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 096982  mov ecx, eax
    X86_AT(c, 0x96982u);
    c.r[1] = c.r[0];
    // 096984  shl ecx, 1
    X86_AT(c, 0x96984u);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 4, v, 0x1u, 4, w); if (w) c.r[1] = r; }
    // 096986  shr ecx, 0x18
    X86_AT(c, 0x96986u);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 5, v, 0x18u, 4, w); if (w) c.r[1] = r; }
    // 096989  mov edx, dword ptr [ebp + 8]
    X86_AT(c, 0x96989u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 09698c  cmp cl, 0xff
    X86_AT(c, 0x9698cu);
    (void)x86_sub(c, g8(c, 1), 0xFFu, 0, 1);
    // 09698f  je 0x969d1
    X86_AT(c, 0x9698fu);
    if (x86_cc(c, 4)) { goto L_969d1; }
    X86_TICK(c, 7);
    // 096991  and cl, cl
    X86_AT(c, 0x96991u);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_logic(c, v & g8(c, 1), 1)); }
    // 096993  je 0x969db
    X86_AT(c, 0x96993u);
    if (x86_cc(c, 4)) { goto L_969db; }
    X86_TICK(c, 6);
    // 096995  mov byte ptr [edx + 0xb], 0
    X86_AT(c, 0x96995u);
    wr8((c.sbase[3] + (uint32_t)(c.r[2] + 0xBu)), 0x0u);
    // 096999  sub cx, 0x7f
    X86_AT(c, 0x96999u);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_sub(c, v, 0x7Fu, 0, 2)); }
    // 09699d  add cx, 0x3fff
    X86_AT(c, 0x9699du);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_add(c, v, 0x3FFFu, 0, 2)); }
L_969a2:
    X86_TICK(c, 9);
    // 0969a2  mov word ptr [edx + 8], cx
    X86_AT(c, 0x969a2u);
    wr16((c.sbase[3] + (uint32_t)(c.r[2] + 0x8u)), (c.r[1] & 0xFFFFu));
    // 0969a6  test eax, 0x80000000
    X86_AT(c, 0x969a6u);
    (void)x86_logic(c, c.r[0] & 0x80000000u, 4);
    // 0969ab  je 0x969b3
    X86_AT(c, 0x969abu);
    if (x86_cc(c, 4)) { goto L_969b3; }
    X86_TICK(c, 9);
    // 0969ad  mov byte ptr [edx + 0xa], 1
    X86_AT(c, 0x969adu);
    wr8((c.sbase[3] + (uint32_t)(c.r[2] + 0xAu)), 0x1u);
    // 0969b1  jmp 0x969b7
    X86_AT(c, 0x969b1u);
    goto L_969b7;
L_969b3:
    X86_TICK(c, 2);
    // 0969b3  mov byte ptr [edx + 0xa], 0
    X86_AT(c, 0x969b3u);
    wr8((c.sbase[3] + (uint32_t)(c.r[2] + 0xAu)), 0x0u);
L_969b7:
    X86_TICK(c, 10);
    // 0969b7  shl eax, 8
    X86_AT(c, 0x969b7u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 0969ba  and cx, cx
    X86_AT(c, 0x969bau);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_logic(c, v & (c.r[1] & 0xFFFFu), 2)); }
    // 0969bd  je 0x969c4
    X86_AT(c, 0x969bdu);
    if (x86_cc(c, 4)) { goto L_969c4; }
    X86_TICK(c, 2);
    // 0969bf  or eax, 0x80000000
    X86_AT(c, 0x969bfu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v | 0x80000000u, 4); }
L_969c4:
    X86_TICK(c, 18);
    // 0969c4  mov dword ptr [edx + 4], eax
    X86_AT(c, 0x969c4u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0x4u)), c.r[0]);
    // 0969c7  mov dword ptr [edx], 0
    X86_AT(c, 0x969c7u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2])), 0x0u);
    // 0969cd  pop ebp
    X86_AT(c, 0x969cdu);
    { uint32_t v = pop32(c); c.r[5] = v; }
    // 0969ce  ret 8
    X86_AT(c, 0x969ceu);
    c.eip = pop32(c); c.r[4] += 0x8u; return;
L_969d1:
    X86_TICK(c, 11);
    // 0969d1  mov cx, 0x7fff
    X86_AT(c, 0x969d1u);
    s16(c, 1, 0x7FFFu);
    // 0969d5  mov byte ptr [edx + 0xb], 0
    X86_AT(c, 0x969d5u);
    wr8((c.sbase[3] + (uint32_t)(c.r[2] + 0xBu)), 0x0u);
    // 0969d9  jmp 0x969a2
    X86_AT(c, 0x969d9u);
    X86_POLL(c, 0x969a2u); goto L_969a2;
L_969db:
    X86_TICK(c, 9);
    // 0969db  mov byte ptr [edx + 0xb], 1
    X86_AT(c, 0x969dbu);
    wr8((c.sbase[3] + (uint32_t)(c.r[2] + 0xBu)), 0x1u);
    // 0969df  jmp 0x969a2
    X86_AT(c, 0x969dfu);
    X86_POLL(c, 0x969a2u); goto L_969a2;
    x86_fault(c, 0x9697cu, "ran off the end of a function");
}
void f_00096a44(X86Cpu& c) {
    X86_TICK(c, 31);
    // 096a44  push ebp
    X86_AT(c, 0x96a44u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 096a45  mov ebp, esp
    X86_AT(c, 0x96a45u);
    c.r[5] = c.r[4];
    // 096a47  push esi
    X86_AT(c, 0x96a47u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 096a48  push edi
    X86_AT(c, 0x96a48u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 096a49  push ebx
    X86_AT(c, 0x96a49u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 096a4a  mov esi, dword ptr [ebp + 8]
    X86_AT(c, 0x96a4au);
    c.r[6] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 096a4d  mov edi, dword ptr [ebp + 0xc]
    X86_AT(c, 0x96a4du);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 096a50  xor edx, edx
    X86_AT(c, 0x96a50u);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v ^ c.r[2], 4); }
    // 096a52  movzx ecx, word ptr [ebp + 0x10]
    X86_AT(c, 0x96a52u);
    c.r[1] = rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u)));
    // 096a56  shr ecx, 1
    X86_AT(c, 0x96a56u);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 4, w); if (w) c.r[1] = r; }
    // 096a58  clc 
    X86_AT(c, 0x96a58u);
    c.fl &= ~X86_CF;
L_96a59:
    X86_TICK(c, 24);
    // 096a59  mov eax, dword ptr [edi + edx*4]
    X86_AT(c, 0x96a59u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + c.r[2] * 4)));
    // 096a5c  adc dword ptr [esi + edx*4], eax
    X86_AT(c, 0x96a5cu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[6] + c.r[2] * 4)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], c.fl & 1, 4)); }
    // 096a5f  inc edx
    X86_AT(c, 0x96a5fu);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
    // 096a60  loop 0x96a59
    X86_AT(c, 0x96a60u);
    c.r[1] -= 1; if (c.r[1] != 0) { X86_POLL(c, 0x96a59u); goto L_96a59; }
    X86_TICK(c, 31);
    // 096a62  mov al, 0
    X86_AT(c, 0x96a62u);
    s8(c, 0, 0x0u);
    // 096a64  rcl al, 1
    X86_AT(c, 0x96a64u);
    { uint32_t v = g8(c, 0); bool w; uint32_t r = x86_shift(c, 2, v, 0x1u, 1, w); if (w) s8(c, 0, r); }
    // 096a66  pop ebx
    X86_AT(c, 0x96a66u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 096a67  pop edi
    X86_AT(c, 0x96a67u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 096a68  pop esi
    X86_AT(c, 0x96a68u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 096a69  pop ebp
    X86_AT(c, 0x96a69u);
    { uint32_t v = pop32(c); c.r[5] = v; }
    // 096a6a  ret 0xc
    X86_AT(c, 0x96a6au);
    c.eip = pop32(c); c.r[4] += 0xCu; return;
    x86_fault(c, 0x96a44u, "ran off the end of a function");
}
void f_00096a6d(X86Cpu& c) {
    X86_TICK(c, 28);
    // 096a6d  push ebp
    X86_AT(c, 0x96a6du);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 096a6e  mov ebp, esp
    X86_AT(c, 0x96a6eu);
    c.r[5] = c.r[4];
    // 096a70  push esi
    X86_AT(c, 0x96a70u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 096a71  push edi
    X86_AT(c, 0x96a71u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 096a72  push ebx
    X86_AT(c, 0x96a72u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 096a73  mov esi, dword ptr [ebp + 8]
    X86_AT(c, 0x96a73u);
    c.r[6] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 096a76  mov edi, dword ptr [ebp + 0xc]
    X86_AT(c, 0x96a76u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 096a79  xor edx, edx
    X86_AT(c, 0x96a79u);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v ^ c.r[2], 4); }
    // 096a7b  movzx ecx, word ptr [ebp + 0x10]
    X86_AT(c, 0x96a7bu);
    c.r[1] = rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u)));
    // 096a7f  clc 
    X86_AT(c, 0x96a7fu);
    c.fl &= ~X86_CF;
L_96a80:
    X86_TICK(c, 24);
    // 096a80  mov ax, word ptr [edi + edx*2]
    X86_AT(c, 0x96a80u);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(c.r[7] + c.r[2] * 2))));
    // 096a84  sbb word ptr [esi + edx*2], ax
    X86_AT(c, 0x96a84u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[6] + c.r[2] * 2)); uint32_t v = rd16(ea); wr16(ea, x86_sub(c, v, (c.r[0] & 0xFFFFu), c.fl & 1, 2)); }
    // 096a88  inc edx
    X86_AT(c, 0x96a88u);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
    // 096a89  loop 0x96a80
    X86_AT(c, 0x96a89u);
    c.r[1] -= 1; if (c.r[1] != 0) { X86_POLL(c, 0x96a80u); goto L_96a80; }
    X86_TICK(c, 31);
    // 096a8b  mov al, 0
    X86_AT(c, 0x96a8bu);
    s8(c, 0, 0x0u);
    // 096a8d  rcl al, 1
    X86_AT(c, 0x96a8du);
    { uint32_t v = g8(c, 0); bool w; uint32_t r = x86_shift(c, 2, v, 0x1u, 1, w); if (w) s8(c, 0, r); }
    // 096a8f  pop ebx
    X86_AT(c, 0x96a8fu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 096a90  pop edi
    X86_AT(c, 0x96a90u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 096a91  pop esi
    X86_AT(c, 0x96a91u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 096a92  pop ebp
    X86_AT(c, 0x96a92u);
    { uint32_t v = pop32(c); c.r[5] = v; }
    // 096a93  ret 0xc
    X86_AT(c, 0x96a93u);
    c.eip = pop32(c); c.r[4] += 0xCu; return;
    x86_fault(c, 0x96a6du, "ran off the end of a function");
}
void f_00096a96(X86Cpu& c) {
    X86_TICK(c, 31);
    // 096a96  push ebp
    X86_AT(c, 0x96a96u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 096a97  mov ebp, esp
    X86_AT(c, 0x96a97u);
    c.r[5] = c.r[4];
    // 096a99  push esi
    X86_AT(c, 0x96a99u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 096a9a  push edi
    X86_AT(c, 0x96a9au);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 096a9b  push ebx
    X86_AT(c, 0x96a9bu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 096a9c  mov esi, dword ptr [ebp + 8]
    X86_AT(c, 0x96a9cu);
    c.r[6] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 096a9f  mov edi, dword ptr [ebp + 0xc]
    X86_AT(c, 0x96a9fu);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 096aa2  xor edx, edx
    X86_AT(c, 0x96aa2u);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v ^ c.r[2], 4); }
    // 096aa4  movzx ecx, word ptr [ebp + 0x10]
    X86_AT(c, 0x96aa4u);
    c.r[1] = rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u)));
    // 096aa8  shr ecx, 1
    X86_AT(c, 0x96aa8u);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 4, w); if (w) c.r[1] = r; }
    // 096aaa  clc 
    X86_AT(c, 0x96aaau);
    c.fl &= ~X86_CF;
L_96aab:
    X86_TICK(c, 25);
    // 096aab  mov eax, dword ptr [edi + edx*4]
    X86_AT(c, 0x96aabu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + c.r[2] * 4)));
    // 096aae  sbb eax, dword ptr [esi + edx*4]
    X86_AT(c, 0x96aaeu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[6] + c.r[2] * 4))), c.fl & 1, 4); }
    // 096ab1  mov dword ptr [esi + edx*4], eax
    X86_AT(c, 0x96ab1u);
    wr32((c.sbase[3] + (uint32_t)(c.r[6] + c.r[2] * 4)), c.r[0]);
    // 096ab4  inc edx
    X86_AT(c, 0x96ab4u);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
    // 096ab5  loop 0x96aab
    X86_AT(c, 0x96ab5u);
    c.r[1] -= 1; if (c.r[1] != 0) { X86_POLL(c, 0x96aabu); goto L_96aab; }
    X86_TICK(c, 31);
    // 096ab7  mov al, 0
    X86_AT(c, 0x96ab7u);
    s8(c, 0, 0x0u);
    // 096ab9  rcl al, 1
    X86_AT(c, 0x96ab9u);
    { uint32_t v = g8(c, 0); bool w; uint32_t r = x86_shift(c, 2, v, 0x1u, 1, w); if (w) s8(c, 0, r); }
    // 096abb  pop ebx
    X86_AT(c, 0x96abbu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 096abc  pop edi
    X86_AT(c, 0x96abcu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 096abd  pop esi
    X86_AT(c, 0x96abdu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 096abe  pop ebp
    X86_AT(c, 0x96abeu);
    { uint32_t v = pop32(c); c.r[5] = v; }
    // 096abf  ret 0xc
    X86_AT(c, 0x96abfu);
    c.eip = pop32(c); c.r[4] += 0xCu; return;
    x86_fault(c, 0x96a96u, "ran off the end of a function");
}
void f_00096ac2(X86Cpu& c) {
    X86_TICK(c, 19);
    // 096ac2  push esi
    X86_AT(c, 0x96ac2u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 096ac3  mov esi, dword ptr [esp + 8]
    X86_AT(c, 0x96ac3u);
    c.r[6] = rd32((c.sbase[2] + (uint32_t)(c.r[4] + 0x8u)));
    // 096ac7  movzx ecx, word ptr [esp + 0xc]
    X86_AT(c, 0x96ac7u);
    c.r[1] = rd16((c.sbase[2] + (uint32_t)(c.r[4] + 0xCu)));
    // 096acc  shr ecx, 1
    X86_AT(c, 0x96accu);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 4, w); if (w) c.r[1] = r; }
    // 096ace  xor edx, edx
    X86_AT(c, 0x96aceu);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v ^ c.r[2], 4); }
    // 096ad0  clc 
    X86_AT(c, 0x96ad0u);
    c.fl &= ~X86_CF;
L_96ad1:
    X86_TICK(c, 23);
    // 096ad1  mov eax, 0
    X86_AT(c, 0x96ad1u);
    c.r[0] = 0x0u;
    // 096ad6  sbb eax, dword ptr [esi + edx*4]
    X86_AT(c, 0x96ad6u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[6] + c.r[2] * 4))), c.fl & 1, 4); }
    // 096ad9  mov dword ptr [esi + edx*4], eax
    X86_AT(c, 0x96ad9u);
    wr32((c.sbase[3] + (uint32_t)(c.r[6] + c.r[2] * 4)), c.r[0]);
    // 096adc  inc edx
    X86_AT(c, 0x96adcu);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
    // 096add  loop 0x96ad1
    X86_AT(c, 0x96addu);
    c.r[1] -= 1; if (c.r[1] != 0) { X86_POLL(c, 0x96ad1u); goto L_96ad1; }
    X86_TICK(c, 19);
    // 096adf  mov al, 0
    X86_AT(c, 0x96adfu);
    s8(c, 0, 0x0u);
    // 096ae1  rcl al, 1
    X86_AT(c, 0x96ae1u);
    { uint32_t v = g8(c, 0); bool w; uint32_t r = x86_shift(c, 2, v, 0x1u, 1, w); if (w) s8(c, 0, r); }
    // 096ae3  pop esi
    X86_AT(c, 0x96ae3u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 096ae4  ret 8
    X86_AT(c, 0x96ae4u);
    c.eip = pop32(c); c.r[4] += 0x8u; return;
    x86_fault(c, 0x96ac2u, "ran off the end of a function");
}
void f_00096ae7(X86Cpu& c) {
    X86_TICK(c, 18);
    // 096ae7  push edi
    X86_AT(c, 0x96ae7u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 096ae8  push ebx
    X86_AT(c, 0x96ae8u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 096ae9  mov edi, dword ptr [esp + 0xc]
    X86_AT(c, 0x96ae9u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[4] + 0xCu)));
    // 096aed  xor eax, eax
    X86_AT(c, 0x96aedu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v ^ c.r[0], 4); }
    // 096aef  mov ebx, dword ptr [edi + 4]
    X86_AT(c, 0x96aefu);
    c.r[3] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x4u)));
    // 096af2  mov edx, dword ptr [edi]
    X86_AT(c, 0x96af2u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[7])));
L_96af4:
    X86_TICK(c, 7);
    // 096af4  and ebx, ebx
    X86_AT(c, 0x96af4u);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & c.r[3], 4); }
    // 096af6  jne 0x96b03
    X86_AT(c, 0x96af6u);
    if (x86_cc(c, 5)) { goto L_96b03; }
    X86_TICK(c, 13);
    // 096af8  mov ebx, edx
    X86_AT(c, 0x96af8u);
    c.r[3] = c.r[2];
    // 096afa  xor edx, edx
    X86_AT(c, 0x96afau);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v ^ c.r[2], 4); }
    // 096afc  add eax, 0x20
    X86_AT(c, 0x96afcu);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0x20u, 0, 4); }
    // 096b01  jmp 0x96af4
    X86_AT(c, 0x96b01u);
    X86_POLL(c, 0x96af4u); goto L_96af4;
L_96b03:
    X86_TICK(c, 44);
    // 096b03  bsr ecx, ebx
    X86_AT(c, 0x96b03u);
    c.r[1] = x86_bsr(c, c.r[3], c.r[1]);
    // 096b06  sub ecx, 0x1f
    X86_AT(c, 0x96b06u);
    { uint32_t v = c.r[1]; c.r[1] = x86_sub(c, v, 0x1Fu, 0, 4); }
    // 096b09  neg ecx
    X86_AT(c, 0x96b09u);
    { uint32_t v = c.r[1]; c.r[1] = x86_neg(c, v, 4); }
    // 096b0b  shld ebx, edx, cl
    X86_AT(c, 0x96b0bu);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_double(c, true, v, c.r[2], g8(c, 1), 4, w); if (w) c.r[3] = r; }
    // 096b0e  shl edx, cl
    X86_AT(c, 0x96b0eu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, g8(c, 1), 4, w); if (w) c.r[2] = r; }
    // 096b10  add eax, ecx
    X86_AT(c, 0x96b10u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, c.r[1], 0, 4); }
    // 096b12  mov dword ptr [edi + 4], ebx
    X86_AT(c, 0x96b12u);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] + 0x4u)), c.r[3]);
    // 096b15  mov dword ptr [edi], edx
    X86_AT(c, 0x96b15u);
    wr32((c.sbase[3] + (uint32_t)(c.r[7])), c.r[2]);
    // 096b17  pop ebx
    X86_AT(c, 0x96b17u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 096b18  pop edi
    X86_AT(c, 0x96b18u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 096b19  ret 4
    X86_AT(c, 0x96b19u);
    c.eip = pop32(c); c.r[4] += 0x4u; return;
    x86_fault(c, 0x96ae7u, "ran off the end of a function");
}
void f_00096b1c(X86Cpu& c) {
    X86_TICK(c, 33);
    // 096b1c  mov edx, dword ptr [esp + 4]
    X86_AT(c, 0x96b1cu);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[4] + 0x4u)));
    // 096b20  shl dword ptr [edx], 1
    X86_AT(c, 0x96b20u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[2])); uint32_t v = rd32(ea); bool w; uint32_t r = x86_shift(c, 4, v, 0x1u, 4, w); if (w) wr32(ea, r); }
    // 096b22  rcl dword ptr [edx + 4], 1
    X86_AT(c, 0x96b22u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[2] + 0x4u)); uint32_t v = rd32(ea); bool w; uint32_t r = x86_shift(c, 2, v, 0x1u, 4, w); if (w) wr32(ea, r); }
    // 096b25  mov al, 0
    X86_AT(c, 0x96b25u);
    s8(c, 0, 0x0u);
    // 096b27  rcl al, 1
    X86_AT(c, 0x96b27u);
    { uint32_t v = g8(c, 0); bool w; uint32_t r = x86_shift(c, 2, v, 0x1u, 1, w); if (w) s8(c, 0, r); }
    // 096b29  ret 4
    X86_AT(c, 0x96b29u);
    c.eip = pop32(c); c.r[4] += 0x4u; return;
    x86_fault(c, 0x96b1cu, "ran off the end of a function");
}
void f_00096b38(X86Cpu& c) {
    X86_TICK(c, 15);
    // 096b38  mov edx, dword ptr [esp + 4]
    X86_AT(c, 0x96b38u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[4] + 0x4u)));
    // 096b3c  movzx ecx, word ptr [esp + 8]
    X86_AT(c, 0x96b3cu);
    c.r[1] = rd16((c.sbase[2] + (uint32_t)(c.r[4] + 0x8u)));
    // 096b41  jecxz 0x96b78
    X86_AT(c, 0x96b41u);
    if (c.r[1] == 0) { goto L_96b78; }
    X86_TICK(c, 7);
    // 096b43  cmp ecx, 0x20
    X86_AT(c, 0x96b43u);
    (void)x86_sub(c, c.r[1], 0x20u, 0, 4);
    // 096b46  jl 0x96b5f
    X86_AT(c, 0x96b46u);
    if (x86_cc(c, 12)) { goto L_96b5f; }
    X86_TICK(c, 14);
    // 096b48  mov eax, dword ptr [edx + 4]
    X86_AT(c, 0x96b48u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0x4u)));
    // 096b4b  clc 
    X86_AT(c, 0x96b4bu);
    c.fl &= ~X86_CF;
    // 096b4c  shr eax, cl
    X86_AT(c, 0x96b4cu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 096b4e  jae 0x96b51
    X86_AT(c, 0x96b4eu);
    if (x86_cc(c, 3)) { goto L_96b51; }
    X86_TICK(c, 2);
    // 096b50  inc eax
    X86_AT(c, 0x96b50u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
L_96b51:
    X86_TICK(c, 11);
    // 096b51  mov dword ptr [edx], eax
    X86_AT(c, 0x96b51u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2])), c.r[0]);
    // 096b53  mov dword ptr [edx + 4], 0
    X86_AT(c, 0x96b53u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0x4u)), 0x0u);
    // 096b5a  jmp 0x96b78
    X86_AT(c, 0x96b5au);
    goto L_96b78;
L_96b5f:
    X86_TICK(c, 31);
    // 096b5f  mov eax, dword ptr [edx + 4]
    X86_AT(c, 0x96b5fu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0x4u)));
    // 096b62  shrd dword ptr [edx], eax, cl
    X86_AT(c, 0x96b62u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[2])); uint32_t v = rd32(ea); bool w; uint32_t r = x86_double(c, false, v, c.r[0], g8(c, 1), 4, w); if (w) wr32(ea, r); }
    // 096b65  pushf 
    X86_AT(c, 0x96b65u);
    push16(c, c.fl & 0xFFFFu);
    // 096b67  shr eax, cl
    X86_AT(c, 0x96b67u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 096b69  popf 
    X86_AT(c, 0x96b69u);
    x86_popfd(c, 2);
    // 096b6b  jae 0x96b75
    X86_AT(c, 0x96b6bu);
    if (x86_cc(c, 3)) { goto L_96b75; }
    X86_TICK(c, 9);
    // 096b6d  add dword ptr [edx], 1
    X86_AT(c, 0x96b6du);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[2])); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0x1u, 0, 4)); }
    // 096b70  adc eax, 0
    X86_AT(c, 0x96b70u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0x0u, c.fl & 1, 4); }
L_96b75:
    X86_TICK(c, 2);
    // 096b75  mov dword ptr [edx + 4], eax
    X86_AT(c, 0x96b75u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0x4u)), c.r[0]);
L_96b78:
    X86_TICK(c, 10);
    // 096b78  ret 8
    X86_AT(c, 0x96b78u);
    c.eip = pop32(c); c.r[4] += 0x8u; return;
    x86_fault(c, 0x96b38u, "ran off the end of a function");
}
void f_00096b7b(X86Cpu& c) {
    X86_TICK(c, 42);
    // 096b7b  mov edx, dword ptr [esp + 4]
    X86_AT(c, 0x96b7bu);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[4] + 0x4u)));
    // 096b7f  shl dword ptr [edx], 1
    X86_AT(c, 0x96b7fu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[2])); uint32_t v = rd32(ea); bool w; uint32_t r = x86_shift(c, 4, v, 0x1u, 4, w); if (w) wr32(ea, r); }
    // 096b81  rcl dword ptr [edx + 4], 1
    X86_AT(c, 0x96b81u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[2] + 0x4u)); uint32_t v = rd32(ea); bool w; uint32_t r = x86_shift(c, 2, v, 0x1u, 4, w); if (w) wr32(ea, r); }
    // 096b84  rcl dword ptr [edx + 8], 1
    X86_AT(c, 0x96b84u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[2] + 0x8u)); uint32_t v = rd32(ea); bool w; uint32_t r = x86_shift(c, 2, v, 0x1u, 4, w); if (w) wr32(ea, r); }
    // 096b87  rcl dword ptr [edx + 0xc], 1
    X86_AT(c, 0x96b87u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[2] + 0xCu)); uint32_t v = rd32(ea); bool w; uint32_t r = x86_shift(c, 2, v, 0x1u, 4, w); if (w) wr32(ea, r); }
    // 096b8a  ret 4
    X86_AT(c, 0x96b8au);
    c.eip = pop32(c); c.r[4] += 0x4u; return;
    x86_fault(c, 0x96b7bu, "ran off the end of a function");
}
void f_00096b90(X86Cpu& c) {
    X86_TICK(c, 9);
    // 096b90  push 0x1c8c
    X86_AT(c, 0x96b90u);
    { uint32_t v = 0x1C8Cu; push32(c, v); }
    // 096b95  call 0x97090
    X86_AT(c, 0x96b95u);
    push32(c, 0x96b9au); x86_call_known(c, 0x97090u, f_00097090); X86_RET(c, 0x96b9au);
    X86_TICK(c, 13);
    // 096b9a  mov ax, word ptr [0x8ab7c]
    X86_AT(c, 0x96b9au);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(0x8AB7Cu))));
    // 096ba0  push eax
    X86_AT(c, 0x96ba0u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 096ba1  call 0x95f14
    X86_AT(c, 0x96ba1u);
    push32(c, 0x96ba6u); x86_call_known(c, 0x95f14u, f_00095f14); X86_RET(c, 0x96ba6u);
    X86_TICK(c, 9);
    // 096ba6  push 1
    X86_AT(c, 0x96ba6u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 096ba8  call 0x94fac
    X86_AT(c, 0x96ba8u);
    push32(c, 0x96badu); x86_call_known(c, 0x94facu, f_00094fac); X86_RET(c, 0x96badu);
    X86_TICK(c, 10);
    // 096bad  ret 
    X86_AT(c, 0x96badu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x96b90u, "ran off the end of a function");
}
void f_00096bb0(X86Cpu& c) {
    X86_TICK(c, 13);
    // 096bb0  mov eax, 0x8acb8
    X86_AT(c, 0x96bb0u);
    c.r[0] = 0x8ACB8u;
    // 096bb5  cmp eax, dword ptr [0x8acc4]
    X86_AT(c, 0x96bb5u);
    (void)x86_sub(c, c.r[0], rd32((c.sbase[3] + (uint32_t)(0x8ACC4u))), 0, 4);
    // 096bbb  ja 0x96bc2
    X86_AT(c, 0x96bbbu);
    if (x86_cc(c, 7)) { goto L_96bc2; }
    X86_TICK(c, 7);
    // 096bbd  call 0x96b90
    X86_AT(c, 0x96bbdu);
    push32(c, 0x96bc2u); x86_call_known(c, 0x96b90u, f_00096b90); X86_RET(c, 0x96bc2u);
L_96bc2:
    X86_TICK(c, 17);
    // 096bc2  add dword ptr [0x8acc4], 0xc
    X86_AT(c, 0x96bc2u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x8ACC4u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0xCu, 0, 4)); }
    // 096bc9  ret 
    X86_AT(c, 0x96bc9u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x96bb0u, "ran off the end of a function");
}
void f_00096bcc(X86Cpu& c) {
    X86_TICK(c, 17);
    // 096bcc  add dword ptr [0x8acc4], 0xfffffff4
    X86_AT(c, 0x96bccu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x8ACC4u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0xFFFFFFF4u, 0, 4)); }
    // 096bd3  ret 
    X86_AT(c, 0x96bd3u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x96bccu, "ran off the end of a function");
}
void f_00096bd4(X86Cpu& c) {
    X86_TICK(c, 41);
    // 096bd4  push ebp
    X86_AT(c, 0x96bd4u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 096bd5  mov ebp, esp
    X86_AT(c, 0x96bd5u);
    c.r[5] = c.r[4];
    // 096bd7  push esi
    X86_AT(c, 0x96bd7u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 096bd8  push edi
    X86_AT(c, 0x96bd8u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 096bd9  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0x96bd9u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 096bdc  mov ax, word ptr [edi]
    X86_AT(c, 0x96bdcu);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(c.r[7]))));
    // 096bdf  or ax, word ptr [edi + 2]
    X86_AT(c, 0x96bdfu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_logic(c, v | rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x2u))), 2)); }
    // 096be3  or ax, word ptr [edi + 4]
    X86_AT(c, 0x96be3u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_logic(c, v | rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x4u))), 2)); }
    // 096be7  or ax, word ptr [edi + 6]
    X86_AT(c, 0x96be7u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_logic(c, v | rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x6u))), 2)); }
    // 096beb  and ax, ax
    X86_AT(c, 0x96bebu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_logic(c, v & (c.r[0] & 0xFFFFu), 2)); }
    // 096bee  jne 0x96bff
    X86_AT(c, 0x96beeu);
    if (x86_cc(c, 5)) { goto L_96bff; }
    X86_TICK(c, 15);
    // 096bf0  sub eax, eax
    X86_AT(c, 0x96bf0u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 096bf2  mov word ptr [edi + 8], ax
    X86_AT(c, 0x96bf2u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x8u)), (c.r[0] & 0xFFFFu));
    // 096bf6  mov byte ptr [edi + 0xb], 1
    X86_AT(c, 0x96bf6u);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0xBu)), 0x1u);
    // 096bfa  mov byte ptr [edi + 0xa], al
    X86_AT(c, 0x96bfau);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0xAu)), g8(c, 0));
    // 096bfd  jmp 0x96c54
    X86_AT(c, 0x96bfdu);
    goto L_96c54;
L_96bff:
    X86_TICK(c, 12);
    // 096bff  cmp word ptr [edi + 8], 0x7fff
    X86_AT(c, 0x96bffu);
    (void)x86_sub(c, rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x8u))), 0x7FFFu, 0, 2);
    // 096c05  jb 0x96c23
    X86_AT(c, 0x96c05u);
    if (x86_cc(c, 2)) { goto L_96c23; }
    X86_TICK(c, 25);
    // 096c07  mov ax, word ptr [0x8acf4]
    X86_AT(c, 0x96c07u);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(0x8ACF4u))));
    // 096c0d  mov word ptr [edi + 8], ax
    X86_AT(c, 0x96c0du);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x8u)), (c.r[0] & 0xFFFFu));
    // 096c11  mov eax, dword ptr [0x8acec]
    X86_AT(c, 0x96c11u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x8ACECu)));
    // 096c16  mov edx, dword ptr [0x8acf0]
    X86_AT(c, 0x96c16u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(0x8ACF0u)));
    // 096c1c  mov dword ptr [edi], eax
    X86_AT(c, 0x96c1cu);
    wr32((c.sbase[3] + (uint32_t)(c.r[7])), c.r[0]);
    // 096c1e  mov dword ptr [edi + 4], edx
    X86_AT(c, 0x96c1eu);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] + 0x4u)), c.r[2]);
    // 096c21  jmp 0x96c54
    X86_AT(c, 0x96c21u);
    goto L_96c54;
L_96c23:
    X86_TICK(c, 12);
    // 096c23  cmp byte ptr [edi + 7], 0x80
    X86_AT(c, 0x96c23u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x7u))), 0x80u, 0, 1);
    // 096c27  jae 0x96c54
    X86_AT(c, 0x96c27u);
    if (x86_cc(c, 3)) { goto L_96c54; }
    X86_TICK(c, 9);
    // 096c29  push edi
    X86_AT(c, 0x96c29u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 096c2a  call 0x96ae7
    X86_AT(c, 0x96c2au);
    push32(c, 0x96c2fu); x86_call_known(c, 0x96ae7u, f_00096ae7); X86_RET(c, 0x96c2fu);
    X86_TICK(c, 19);
    // 096c2f  xchg esi, eax
    X86_AT(c, 0x96c2fu);
    { uint32_t t = c.r[6]; c.r[6] = c.r[0]; c.r[0] = t; }
    // 096c30  movsx eax, si
    X86_AT(c, 0x96c30u);
    c.r[0] = (uint32_t)(int32_t)(int16_t)(c.r[6] & 0xFFFFu);
    // 096c33  movzx edx, word ptr [edi + 8]
    X86_AT(c, 0x96c33u);
    c.r[2] = rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x8u)));
    // 096c37  cmp edx, eax
    X86_AT(c, 0x96c37u);
    (void)x86_sub(c, c.r[2], c.r[0], 0, 4);
    // 096c39  jl 0x96c41
    X86_AT(c, 0x96c39u);
    if (x86_cc(c, 12)) { goto L_96c41; }
    X86_TICK(c, 14);
    // 096c3b  sub word ptr [edi + 8], si
    X86_AT(c, 0x96c3bu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x8u)); uint32_t v = rd16(ea); wr16(ea, x86_sub(c, v, (c.r[6] & 0xFFFFu), 0, 2)); }
    // 096c3f  jmp 0x96c54
    X86_AT(c, 0x96c3fu);
    goto L_96c54;
L_96c41:
    X86_TICK(c, 19);
    // 096c41  mov eax, esi
    X86_AT(c, 0x96c41u);
    c.r[0] = c.r[6];
    // 096c43  sub ax, word ptr [edi + 8]
    X86_AT(c, 0x96c43u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_sub(c, v, rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x8u))), 0, 2)); }
    // 096c47  push eax
    X86_AT(c, 0x96c47u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 096c48  push edi
    X86_AT(c, 0x96c48u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 096c49  call 0x96b38
    X86_AT(c, 0x96c49u);
    push32(c, 0x96c4eu); x86_call_known(c, 0x96b38u, f_00096b38); X86_RET(c, 0x96c4eu);
    X86_TICK(c, 2);
    // 096c4e  mov word ptr [edi + 8], 0
    X86_AT(c, 0x96c4eu);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x8u)), 0x0u);
L_96c54:
    X86_TICK(c, 24);
    // 096c54  pop edi
    X86_AT(c, 0x96c54u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 096c55  pop esi
    X86_AT(c, 0x96c55u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 096c56  leave 
    X86_AT(c, 0x96c56u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 096c57  ret 4
    X86_AT(c, 0x96c57u);
    c.eip = pop32(c); c.r[4] += 0x4u; return;
    x86_fault(c, 0x96bd4u, "ran off the end of a function");
}
void f_00096c5c(X86Cpu& c) {
    X86_TICK(c, 24);
    // 096c5c  enter 0x10, 0
    X86_AT(c, 0x96c5cu);
    x86_enter(c, 0x10u, 0x0u, 4);
    // 096c60  push ebx
    X86_AT(c, 0x96c60u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 096c61  push esi
    X86_AT(c, 0x96c61u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 096c62  push edi
    X86_AT(c, 0x96c62u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 096c63  cmp byte ptr [0x8a833], 0
    X86_AT(c, 0x96c63u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0x8A833u))), 0x0u, 0, 1);
    // 096c6a  je 0x96c8a
    X86_AT(c, 0x96c6au);
    if (x86_cc(c, 4)) { goto L_96c8a; }
    X86_TICK(c, 12);
    // 096c6c  push dword ptr [0x8acc4]
    X86_AT(c, 0x96c6cu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0x8ACC4u))); push32(c, v); }
    // 096c72  call 0x9681e
    X86_AT(c, 0x96c72u);
    push32(c, 0x96c77u); x86_call_known(c, 0x9681eu, f_0009681e); X86_RET(c, 0x96c77u);
    X86_TICK(c, 7);
    // 096c77  call 0x96867
    X86_AT(c, 0x96c77u);
    push32(c, 0x96c7cu); x86_call_known(c, 0x96867u, f_00096867); X86_RET(c, 0x96c7cu);
    X86_TICK(c, 9);
    // 096c7c  mov word ptr [ebp - 2], ax
    X86_AT(c, 0x96c7cu);
    wr16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFEu)), (c.r[0] & 0xFFFFu));
    // 096c80  call 0x96827
    X86_AT(c, 0x96c80u);
    push32(c, 0x96c85u); x86_call_known(c, 0x96827u, f_00096827); X86_RET(c, 0x96c85u);
    X86_TICK(c, 7);
    // 096c85  jmp 0x96d11
    X86_AT(c, 0x96c85u);
    goto L_96d11;
L_96c8a:
    X86_TICK(c, 13);
    // 096c8a  mov eax, 0x8ac28
    X86_AT(c, 0x96c8au);
    c.r[0] = 0x8AC28u;
    // 096c8f  cmp eax, dword ptr [0x8acc4]
    X86_AT(c, 0x96c8fu);
    (void)x86_sub(c, c.r[0], rd32((c.sbase[3] + (uint32_t)(0x8ACC4u))), 0, 4);
    // 096c95  jne 0x96c9b
    X86_AT(c, 0x96c95u);
    if (x86_cc(c, 5)) { goto L_96c9b; }
    X86_TICK(c, 9);
    // 096c97  mov bl, 0x41
    X86_AT(c, 0x96c97u);
    s8(c, 3, 0x41u);
    // 096c99  jmp 0x96cf3
    X86_AT(c, 0x96c99u);
    goto L_96cf3;
L_96c9b:
    X86_TICK(c, 33);
    // 096c9b  mov esi, dword ptr [0x8acc4]
    X86_AT(c, 0x96c9bu);
    c.r[6] = rd32((c.sbase[3] + (uint32_t)(0x8ACC4u)));
    // 096ca1  lea edi, [ebp - 0x10]
    X86_AT(c, 0x96ca1u);
    c.r[7] = (uint32_t)(c.r[5] + 0xFFFFFFF0u);
    // 096ca4  mov ecx, 3
    X86_AT(c, 0x96ca4u);
    c.r[1] = 0x3u;
    // 096ca9  movsd dword ptr es:[edi], dword ptr [esi]
    X86_AT(c, 0x96ca9u);
    x86_string(c, 0, 4, 243, 4, 3);
    // 096cab  mov bl, byte ptr [ebp - 6]
    X86_AT(c, 0x96cabu);
    s8(c, 3, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFAu))));
    // 096cae  add ebx, ebx
    X86_AT(c, 0x96caeu);
    { uint32_t v = c.r[3]; c.r[3] = x86_add(c, v, c.r[3], 0, 4); }
    // 096cb0  cmp byte ptr [ebp - 5], 0
    X86_AT(c, 0x96cb0u);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFBu))), 0x0u, 0, 1);
    // 096cb4  je 0x96cbb
    X86_AT(c, 0x96cb4u);
    if (x86_cc(c, 4)) { goto L_96cbb; }
    X86_TICK(c, 9);
    // 096cb6  or bl, 0x40
    X86_AT(c, 0x96cb6u);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v | 0x40u, 1)); }
    // 096cb9  jmp 0x96cf3
    X86_AT(c, 0x96cb9u);
    goto L_96cf3;
L_96cbb:
    X86_TICK(c, 12);
    // 096cbb  cmp word ptr [ebp - 8], 0x7fff
    X86_AT(c, 0x96cbbu);
    (void)x86_sub(c, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u))), 0x7FFFu, 0, 2);
    // 096cc1  jne 0x96cde
    X86_AT(c, 0x96cc1u);
    if (x86_cc(c, 5)) { goto L_96cde; }
    X86_TICK(c, 18);
    // 096cc3  lea esi, [ebp - 0x10]
    X86_AT(c, 0x96cc3u);
    c.r[6] = (uint32_t)(c.r[5] + 0xFFFFFFF0u);
    // 096cc6  mov edi, 0x8acec
    X86_AT(c, 0x96cc6u);
    c.r[7] = 0x8ACECu;
    // 096ccb  mov ecx, 8
    X86_AT(c, 0x96ccbu);
    c.r[1] = 0x8u;
    // 096cd0  cmpsb byte ptr [esi], byte ptr es:[edi]
    X86_AT(c, 0x96cd0u);
    x86_string(c, 1, 1, 243, 4, 3);
    // 096cd2  jne 0x96cd9
    X86_AT(c, 0x96cd2u);
    if (x86_cc(c, 5)) { goto L_96cd9; }
    X86_TICK(c, 9);
    // 096cd4  or bl, 5
    X86_AT(c, 0x96cd4u);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v | 0x5u, 1)); }
    // 096cd7  jmp 0x96cf3
    X86_AT(c, 0x96cd7u);
    goto L_96cf3;
L_96cd9:
    X86_TICK(c, 9);
    // 096cd9  or bl, 1
    X86_AT(c, 0x96cd9u);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v | 0x1u, 1)); }
    // 096cdc  jmp 0x96cf3
    X86_AT(c, 0x96cdcu);
    goto L_96cf3;
L_96cde:
    X86_TICK(c, 12);
    // 096cde  cmp word ptr [ebp - 8], 0
    X86_AT(c, 0x96cdeu);
    (void)x86_sub(c, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u))), 0x0u, 0, 2);
    // 096ce3  jne 0x96cea
    X86_AT(c, 0x96ce3u);
    if (x86_cc(c, 5)) { goto L_96cea; }
    X86_TICK(c, 9);
    // 096ce5  or bl, 0x44
    X86_AT(c, 0x96ce5u);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v | 0x44u, 1)); }
    // 096ce8  jmp 0x96cf3
    X86_AT(c, 0x96ce8u);
    goto L_96cf3;
L_96cea:
    X86_TICK(c, 12);
    // 096cea  cmp byte ptr [ebp - 9], 0x80
    X86_AT(c, 0x96ceau);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF7u))), 0x80u, 0, 1);
    // 096cee  jb 0x96cf3
    X86_AT(c, 0x96ceeu);
    if (x86_cc(c, 2)) { goto L_96cf3; }
    X86_TICK(c, 2);
    // 096cf0  or bl, 4
    X86_AT(c, 0x96cf0u);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v | 0x4u, 1)); }
L_96cf3:
    X86_TICK(c, 27);
    // 096cf3  mov ax, word ptr [0x8acc8]
    X86_AT(c, 0x96cf3u);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(0x8ACC8u))));
    // 096cf9  and ax, 0xb800
    X86_AT(c, 0x96cf9u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_logic(c, v & 0xB800u, 2)); }
    // 096cfd  sub bh, bh
    X86_AT(c, 0x96cfdu);
    { uint32_t v = g8(c, 7); s8(c, 7, x86_sub(c, v, g8(c, 7), 0, 1)); }
    // 096cff  mov edx, ebx
    X86_AT(c, 0x96cffu);
    c.r[2] = c.r[3];
    // 096d01  shl edx, 8
    X86_AT(c, 0x96d01u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[2] = r; }
    // 096d04  or dx, ax
    X86_AT(c, 0x96d04u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_logic(c, v | (c.r[0] & 0xFFFFu), 2)); }
    // 096d07  mov word ptr [0x8acc8], dx
    X86_AT(c, 0x96d07u);
    wr16((c.sbase[3] + (uint32_t)(0x8ACC8u)), (c.r[2] & 0xFFFFu));
    // 096d0e  xchg edx, eax
    X86_AT(c, 0x96d0eu);
    { uint32_t t = c.r[2]; c.r[2] = c.r[0]; c.r[0] = t; }
    // 096d0f  jmp 0x96d15
    X86_AT(c, 0x96d0fu);
    goto L_96d15;
L_96d11:
    X86_TICK(c, 4);
    // 096d11  mov ax, word ptr [ebp - 2]
    X86_AT(c, 0x96d11u);
    s16(c, 0, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFEu))));
L_96d15:
    X86_TICK(c, 28);
    // 096d15  pop edi
    X86_AT(c, 0x96d15u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 096d16  pop esi
    X86_AT(c, 0x96d16u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 096d17  pop ebx
    X86_AT(c, 0x96d17u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 096d18  leave 
    X86_AT(c, 0x96d18u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 096d19  ret 
    X86_AT(c, 0x96d19u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x96c5cu, "ran off the end of a function");
}
void f_00096e14(X86Cpu& c) {
    X86_TICK(c, 24);
    // 096e14  enter 0x2c, 0
    X86_AT(c, 0x96e14u);
    x86_enter(c, 0x2Cu, 0x0u, 4);
    // 096e18  push ebx
    X86_AT(c, 0x96e18u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 096e19  push esi
    X86_AT(c, 0x96e19u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 096e1a  push edi
    X86_AT(c, 0x96e1au);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 096e1b  cmp byte ptr [0x8a833], 0
    X86_AT(c, 0x96e1bu);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0x8A833u))), 0x0u, 0, 1);
    // 096e22  je 0x96e3c
    X86_AT(c, 0x96e22u);
    if (x86_cc(c, 4)) { goto L_96e3c; }
    X86_TICK(c, 12);
    // 096e24  push dword ptr [0x8acc4]
    X86_AT(c, 0x96e24u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0x8ACC4u))); push32(c, v); }
    // 096e2a  call 0x9681e
    X86_AT(c, 0x96e2au);
    push32(c, 0x96e2fu); x86_call_known(c, 0x9681eu, f_0009681e); X86_RET(c, 0x96e2fu);
    X86_TICK(c, 12);
    // 096e2f  push dword ptr [ebp + 8]
    X86_AT(c, 0x96e2fu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, v); }
    // 096e32  call 0x9686f
    X86_AT(c, 0x96e32u);
    push32(c, 0x96e37u); x86_call_known(c, 0x9686fu, f_0009686f); X86_RET(c, 0x96e37u);
    X86_TICK(c, 7);
    // 096e37  jmp 0x96f9d
    X86_AT(c, 0x96e37u);
    goto L_96f9d;
L_96e3c:
    X86_TICK(c, 35);
    // 096e3c  mov esi, dword ptr [0x8acc4]
    X86_AT(c, 0x96e3cu);
    c.r[6] = rd32((c.sbase[3] + (uint32_t)(0x8ACC4u)));
    // 096e42  lea edi, [ebp - 0xc]
    X86_AT(c, 0x96e42u);
    c.r[7] = (uint32_t)(c.r[5] + 0xFFFFFFF4u);
    // 096e45  mov ecx, 3
    X86_AT(c, 0x96e45u);
    c.r[1] = 0x3u;
    // 096e4a  movsd dword ptr es:[edi], dword ptr [esi]
    X86_AT(c, 0x96e4au);
    x86_string(c, 0, 4, 243, 4, 3);
    // 096e4c  mov ax, word ptr [ebp - 4]
    X86_AT(c, 0x96e4cu);
    s16(c, 0, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))));
    // 096e50  sub ax, 0x3fff
    X86_AT(c, 0x96e50u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_sub(c, v, 0x3FFFu, 0, 2)); }
    // 096e54  mov word ptr [ebp - 0x10], ax
    X86_AT(c, 0x96e54u);
    wr16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u)), (c.r[0] & 0xFFFFu));
    // 096e58  cmp byte ptr [ebp - 2], 0
    X86_AT(c, 0x96e58u);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFEu))), 0x0u, 0, 1);
    // 096e5c  je 0x96e67
    X86_AT(c, 0x96e5cu);
    if (x86_cc(c, 4)) { goto L_96e67; }
    X86_TICK(c, 13);
    // 096e5e  mov eax, dword ptr [ebp + 8]
    X86_AT(c, 0x96e5eu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 096e61  mov byte ptr [eax + 9], 0x80
    X86_AT(c, 0x96e61u);
    wr8((c.sbase[3] + (uint32_t)(c.r[0] + 0x9u)), 0x80u);
    // 096e65  jmp 0x96e6e
    X86_AT(c, 0x96e65u);
    goto L_96e6e;
L_96e67:
    X86_TICK(c, 6);
    // 096e67  mov eax, dword ptr [ebp + 8]
    X86_AT(c, 0x96e67u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 096e6a  mov byte ptr [eax + 9], 0
    X86_AT(c, 0x96e6au);
    wr8((c.sbase[3] + (uint32_t)(c.r[0] + 0x9u)), 0x0u);
L_96e6e:
    X86_TICK(c, 12);
    // 096e6e  cmp word ptr [ebp - 0x10], 0x3f
    X86_AT(c, 0x96e6eu);
    (void)x86_sub(c, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u))), 0x3Fu, 0, 2);
    // 096e73  jle 0x96e7b
    X86_AT(c, 0x96e73u);
    if (x86_cc(c, 14)) { goto L_96e7b; }
    X86_TICK(c, 9);
    // 096e75  mov byte ptr [ebp - 0xd], 0x99
    X86_AT(c, 0x96e75u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF3u)), 0x99u);
    // 096e79  jmp 0x96e7f
    X86_AT(c, 0x96e79u);
    goto L_96e7f;
L_96e7b:
    X86_TICK(c, 2);
    // 096e7b  mov byte ptr [ebp - 0xd], 0
    X86_AT(c, 0x96e7bu);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF3u)), 0x0u);
L_96e7f:
    X86_TICK(c, 2);
    // 096e7f  mov word ptr [ebp - 0x12], 1
    X86_AT(c, 0x96e7fu);
    wr16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFEEu)), 0x1u);
L_96e85:
    X86_TICK(c, 23);
    // 096e85  movzx eax, word ptr [ebp - 0x12]
    X86_AT(c, 0x96e85u);
    c.r[0] = rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFEEu)));
    // 096e89  mov dl, byte ptr [ebp - 0xd]
    X86_AT(c, 0x96e89u);
    s8(c, 2, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF3u))));
    // 096e8c  mov ecx, dword ptr [ebp + 8]
    X86_AT(c, 0x96e8cu);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 096e8f  mov byte ptr [ecx + eax*1 - 1], dl
    X86_AT(c, 0x96e8fu);
    wr8((c.sbase[3] + (uint32_t)(c.r[1] + c.r[0] + 0xFFFFFFFFu)), g8(c, 2));
    // 096e93  cmp ax, 9
    X86_AT(c, 0x96e93u);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), 0x9u, 0, 2);
    // 096e97  jae 0x96e9f
    X86_AT(c, 0x96e97u);
    if (x86_cc(c, 3)) { goto L_96e9f; }
    X86_TICK(c, 13);
    // 096e99  inc word ptr [ebp - 0x12]
    X86_AT(c, 0x96e99u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFEEu)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
    // 096e9d  jmp 0x96e85
    X86_AT(c, 0x96e9du);
    X86_POLL(c, 0x96e85u); goto L_96e85;
L_96e9f:
    X86_TICK(c, 11);
    // 096e9f  mov ax, word ptr [ebp - 0x10]
    X86_AT(c, 0x96e9fu);
    s16(c, 0, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u))));
    // 096ea3  and ax, ax
    X86_AT(c, 0x96ea3u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_logic(c, v & (c.r[0] & 0xFFFFu), 2)); }
    // 096ea6  jl 0x96f9d
    X86_AT(c, 0x96ea6u);
    if (x86_cc(c, 12)) { goto L_96f9d; }
    X86_TICK(c, 7);
    // 096eac  cmp ax, 0x3f
    X86_AT(c, 0x96eacu);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), 0x3Fu, 0, 2);
    // 096eb0  jg 0x96f9d
    X86_AT(c, 0x96eb0u);
    if (x86_cc(c, 15)) { goto L_96f9d; }
    X86_TICK(c, 17);
    // 096eb6  mov dx, 0x3f
    X86_AT(c, 0x96eb6u);
    s16(c, 2, 0x3Fu);
    // 096eba  sub edx, eax
    X86_AT(c, 0x96ebau);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 096ebc  push edx
    X86_AT(c, 0x96ebcu);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 096ebd  lea eax, [ebp - 0xc]
    X86_AT(c, 0x96ebdu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFF4u);
    // 096ec0  push eax
    X86_AT(c, 0x96ec0u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 096ec1  call 0x96b38
    X86_AT(c, 0x96ec1u);
    push32(c, 0x96ec6u); x86_call_known(c, 0x96b38u, f_00096b38); X86_RET(c, 0x96ec6u);
    X86_TICK(c, 26);
    // 096ec6  mov eax, dword ptr [ebp - 0xc]
    X86_AT(c, 0x96ec6u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)));
    // 096ec9  mov edx, dword ptr [ebp - 8]
    X86_AT(c, 0x96ec9u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)));
    // 096ecc  mov dword ptr [ebp - 0x1c], eax
    X86_AT(c, 0x96eccu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE4u)), c.r[0]);
    // 096ecf  mov dword ptr [ebp - 0x18], edx
    X86_AT(c, 0x96ecfu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE8u)), c.r[2]);
    // 096ed2  cmp dword ptr [ebp - 0x18], 0
    X86_AT(c, 0x96ed2u);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE8u))), 0x0u, 0, 4);
    // 096ed6  sete byte ptr [ebp - 0x26]
    X86_AT(c, 0x96ed6u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFDAu)), x86_cc(c, 4) ? 1u : 0u);
    // 096eda  mov byte ptr [ebp - 0x25], 0
    X86_AT(c, 0x96edau);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFDBu)), 0x0u);
L_96ede:
    X86_TICK(c, 12);
    // 096ede  cmp byte ptr [ebp - 0x26], 0
    X86_AT(c, 0x96edeu);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFDAu))), 0x0u, 0, 1);
    // 096ee2  je 0x96f04
    X86_AT(c, 0x96ee2u);
    if (x86_cc(c, 4)) { goto L_96f04; }
    X86_TICK(c, 12);
    // 096ee4  cmp dword ptr [ebp - 0x1c], 0
    X86_AT(c, 0x96ee4u);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE4u))), 0x0u, 0, 4);
    // 096ee8  je 0x96f9d
    X86_AT(c, 0x96ee8u);
    if (x86_cc(c, 4)) { goto L_96f9d; }
    X86_TICK(c, 61);
    // 096eee  mov eax, dword ptr [ebp - 0x1c]
    X86_AT(c, 0x96eeeu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE4u)));
    // 096ef1  sub edx, edx
    X86_AT(c, 0x96ef1u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[2], 0, 4); }
    // 096ef3  mov ecx, 0xa
    X86_AT(c, 0x96ef3u);
    c.r[1] = 0xAu;
    // 096ef8  div ecx
    X86_AT(c, 0x96ef8u);
    x86_div(c, c.r[1], 4, 0x96ef8u);
    // 096efa  mov dword ptr [ebp - 0x2c], eax
    X86_AT(c, 0x96efau);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFD4u)), c.r[0]);
    // 096efd  mov ebx, edx
    X86_AT(c, 0x96efdu);
    c.r[3] = c.r[2];
    // 096eff  mov dword ptr [ebp - 0x1c], eax
    X86_AT(c, 0x96effu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE4u)), c.r[0]);
    // 096f02  jmp 0x96f64
    X86_AT(c, 0x96f02u);
    goto L_96f64;
L_96f04:
    X86_TICK(c, 17);
    // 096f04  mov eax, dword ptr [ebp - 0x1c]
    X86_AT(c, 0x96f04u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE4u)));
    // 096f07  or eax, dword ptr [ebp - 0x18]
    X86_AT(c, 0x96f07u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v | rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE8u))), 4); }
    // 096f0a  and eax, eax
    X86_AT(c, 0x96f0au);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 096f0c  je 0x96f9d
    X86_AT(c, 0x96f0cu);
    if (x86_cc(c, 4)) { goto L_96f9d; }
    X86_TICK(c, 4);
    // 096f12  sub edi, edi
    X86_AT(c, 0x96f12u);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
    // 096f14  mov si, 3
    X86_AT(c, 0x96f14u);
    s16(c, 6, 0x3u);
L_96f18:
    X86_TICK(c, 24);
    // 096f18  movzx esi, si
    X86_AT(c, 0x96f18u);
    c.r[6] = (c.r[6] & 0xFFFFu);
    // 096f1b  shl edi, 0x10
    X86_AT(c, 0x96f1bu);
    { uint32_t v = c.r[7]; bool w; uint32_t r = x86_shift(c, 4, v, 0x10u, 4, w); if (w) c.r[7] = r; }
    // 096f1e  movzx eax, word ptr [ebp + esi*2 - 0x1c]
    X86_AT(c, 0x96f1eu);
    c.r[0] = rd16((c.sbase[2] + (uint32_t)(c.r[5] + c.r[6] * 2 + 0xFFFFFFE4u)));
    // 096f23  or eax, edi
    X86_AT(c, 0x96f23u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v | c.r[7], 4); }
    // 096f25  xchg edi, eax
    X86_AT(c, 0x96f25u);
    { uint32_t t = c.r[7]; c.r[7] = c.r[0]; c.r[0] = t; }
    // 096f26  and edi, edi
    X86_AT(c, 0x96f26u);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & c.r[7], 4); }
    // 096f28  jne 0x96f36
    X86_AT(c, 0x96f28u);
    if (x86_cc(c, 5)) { goto L_96f36; }
    X86_TICK(c, 13);
    // 096f2a  sub ebx, ebx
    X86_AT(c, 0x96f2au);
    { uint32_t v = c.r[3]; c.r[3] = x86_sub(c, v, c.r[3], 0, 4); }
    // 096f2c  sub bx, bx
    X86_AT(c, 0x96f2cu);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_sub(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
    // 096f2f  mov word ptr [ebp + esi*2 - 0x24], bx
    X86_AT(c, 0x96f2fu);
    wr16((c.sbase[2] + (uint32_t)(c.r[5] + c.r[6] * 2 + 0xFFFFFFDCu)), (c.r[3] & 0xFFFFu));
    // 096f34  jmp 0x96f50
    X86_AT(c, 0x96f34u);
    goto L_96f50;
L_96f36:
    X86_TICK(c, 57);
    // 096f36  movzx esi, si
    X86_AT(c, 0x96f36u);
    c.r[6] = (c.r[6] & 0xFFFFu);
    // 096f39  mov eax, edi
    X86_AT(c, 0x96f39u);
    c.r[0] = c.r[7];
    // 096f3b  sub edx, edx
    X86_AT(c, 0x96f3bu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[2], 0, 4); }
    // 096f3d  mov ecx, 0xa
    X86_AT(c, 0x96f3du);
    c.r[1] = 0xAu;
    // 096f42  div ecx
    X86_AT(c, 0x96f42u);
    x86_div(c, c.r[1], 4, 0x96f42u);
    // 096f44  mov dword ptr [ebp - 0x2c], eax
    X86_AT(c, 0x96f44u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFD4u)), c.r[0]);
    // 096f47  mov word ptr [ebp + esi*2 - 0x24], ax
    X86_AT(c, 0x96f47u);
    wr16((c.sbase[2] + (uint32_t)(c.r[5] + c.r[6] * 2 + 0xFFFFFFDCu)), (c.r[0] & 0xFFFFu));
    // 096f4c  mov edi, edx
    X86_AT(c, 0x96f4cu);
    c.r[7] = c.r[2];
    // 096f4e  mov ebx, edi
    X86_AT(c, 0x96f4eu);
    c.r[3] = c.r[7];
L_96f50:
    X86_TICK(c, 7);
    // 096f50  and si, si
    X86_AT(c, 0x96f50u);
    { uint32_t v = (c.r[6] & 0xFFFFu); s16(c, 6, x86_logic(c, v & (c.r[6] & 0xFFFFu), 2)); }
    // 096f53  jbe 0x96f58
    X86_AT(c, 0x96f53u);
    if (x86_cc(c, 6)) { goto L_96f58; }
    X86_TICK(c, 9);
    // 096f55  dec esi
    X86_AT(c, 0x96f55u);
    { uint32_t v = c.r[6]; c.r[6] = x86_dec(c, v, 4); }
    // 096f56  jmp 0x96f18
    X86_AT(c, 0x96f56u);
    X86_POLL(c, 0x96f18u); goto L_96f18;
L_96f58:
    X86_TICK(c, 12);
    // 096f58  mov eax, dword ptr [ebp - 0x24]
    X86_AT(c, 0x96f58u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFDCu)));
    // 096f5b  mov edx, dword ptr [ebp - 0x20]
    X86_AT(c, 0x96f5bu);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE0u)));
    // 096f5e  mov dword ptr [ebp - 0x1c], eax
    X86_AT(c, 0x96f5eu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE4u)), c.r[0]);
    // 096f61  mov dword ptr [ebp - 0x18], edx
    X86_AT(c, 0x96f61u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE8u)), c.r[2]);
L_96f64:
    X86_TICK(c, 12);
    // 096f64  mov al, byte ptr [ebp - 0x25]
    X86_AT(c, 0x96f64u);
    s8(c, 0, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFDBu))));
    // 096f67  rcr al, 1
    X86_AT(c, 0x96f67u);
    { uint32_t v = g8(c, 0); bool w; uint32_t r = x86_shift(c, 3, v, 0x1u, 1, w); if (w) s8(c, 0, r); }
    // 096f69  jb 0x96f7b
    X86_AT(c, 0x96f69u);
    if (x86_cc(c, 2)) { goto L_96f7b; }
    X86_TICK(c, 23);
    // 096f6b  mov al, byte ptr [ebp - 0x25]
    X86_AT(c, 0x96f6bu);
    s8(c, 0, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFDBu))));
    // 096f6e  shr al, 1
    X86_AT(c, 0x96f6eu);
    { uint32_t v = g8(c, 0); bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 1, w); if (w) s8(c, 0, r); }
    // 096f70  movzx eax, al
    X86_AT(c, 0x96f70u);
    c.r[0] = g8(c, 0);
    // 096f73  mov edx, dword ptr [ebp + 8]
    X86_AT(c, 0x96f73u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 096f76  mov byte ptr [edx + eax*1], bl
    X86_AT(c, 0x96f76u);
    wr8((c.sbase[3] + (uint32_t)(c.r[2] + c.r[0])), g8(c, 3));
    // 096f79  jmp 0x96f8e
    X86_AT(c, 0x96f79u);
    goto L_96f8e;
L_96f7b:
    X86_TICK(c, 26);
    // 096f7b  mov al, byte ptr [ebp - 0x25]
    X86_AT(c, 0x96f7bu);
    s8(c, 0, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFDBu))));
    // 096f7e  shr al, 1
    X86_AT(c, 0x96f7eu);
    { uint32_t v = g8(c, 0); bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 1, w); if (w) s8(c, 0, r); }
    // 096f80  movzx eax, al
    X86_AT(c, 0x96f80u);
    c.r[0] = g8(c, 0);
    // 096f83  mov edx, ebx
    X86_AT(c, 0x96f83u);
    c.r[2] = c.r[3];
    // 096f85  shl dl, 4
    X86_AT(c, 0x96f85u);
    { uint32_t v = g8(c, 2); bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 1, w); if (w) s8(c, 2, r); }
    // 096f88  mov ecx, dword ptr [ebp + 8]
    X86_AT(c, 0x96f88u);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 096f8b  add byte ptr [ecx + eax*1], dl
    X86_AT(c, 0x96f8bu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[1] + c.r[0])); uint32_t v = rd8(ea); wr8(ea, x86_add(c, v, g8(c, 2), 0, 1)); }
L_96f8e:
    X86_TICK(c, 11);
    // 096f8e  mov al, byte ptr [ebp - 0x25]
    X86_AT(c, 0x96f8eu);
    s8(c, 0, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFDBu))));
    // 096f91  cmp al, 0x11
    X86_AT(c, 0x96f91u);
    (void)x86_sub(c, g8(c, 0), 0x11u, 0, 1);
    // 096f93  jae 0x96f9d
    X86_AT(c, 0x96f93u);
    if (x86_cc(c, 3)) { goto L_96f9d; }
    X86_TICK(c, 13);
    // 096f95  inc byte ptr [ebp - 0x25]
    X86_AT(c, 0x96f95u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFDBu)); uint32_t v = rd8(ea); wr8(ea, x86_inc(c, v, 1)); }
    // 096f98  jmp 0x96ede
    X86_AT(c, 0x96f98u);
    X86_POLL(c, 0x96edeu); goto L_96ede;
L_96f9d:
    X86_TICK(c, 35);
    // 096f9d  add dword ptr [0x8acc4], 0xfffffff4
    X86_AT(c, 0x96f9du);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x8ACC4u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0xFFFFFFF4u, 0, 4)); }
    // 096fa4  pop edi
    X86_AT(c, 0x96fa4u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 096fa5  pop esi
    X86_AT(c, 0x96fa5u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 096fa6  pop ebx
    X86_AT(c, 0x96fa6u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 096fa7  leave 
    X86_AT(c, 0x96fa7u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 096fa8  ret 4
    X86_AT(c, 0x96fa8u);
    c.eip = pop32(c); c.r[4] += 0x4u; return;
    x86_fault(c, 0x96e14u, "ran off the end of a function");
}
void f_00096fac(X86Cpu& c) {
    X86_TICK(c, 173);
    // 096fac  push ebp
    X86_AT(c, 0x96facu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 096fad  mov ebp, esp
    X86_AT(c, 0x96fadu);
    c.r[5] = c.r[4];
    // 096faf  push edi
    X86_AT(c, 0x96fafu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 096fb0  push ebx
    X86_AT(c, 0x96fb0u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 096fb1  xor ecx, ecx
    X86_AT(c, 0x96fb1u);
    { uint32_t v = c.r[1]; c.r[1] = x86_logic(c, v ^ c.r[1], 4); }
    // 096fb3  mov ebx, ecx
    X86_AT(c, 0x96fb3u);
    c.r[3] = c.r[1];
    // 096fb5  mov eax, dword ptr [ebp + 0xc]
    X86_AT(c, 0x96fb5u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 096fb8  mul dword ptr [ebp + 0x14]
    X86_AT(c, 0x96fb8u);
    x86_mul(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x14u))), 4);
    // 096fbb  push eax
    X86_AT(c, 0x96fbbu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 096fbc  mov edi, edx
    X86_AT(c, 0x96fbcu);
    c.r[7] = c.r[2];
    // 096fbe  mov eax, dword ptr [ebp + 0xc]
    X86_AT(c, 0x96fbeu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 096fc1  mul dword ptr [ebp + 0x18]
    X86_AT(c, 0x96fc1u);
    x86_mul(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x18u))), 4);
    // 096fc4  add edi, eax
    X86_AT(c, 0x96fc4u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, c.r[0], 0, 4); }
    // 096fc6  adc ecx, edx
    X86_AT(c, 0x96fc6u);
    { uint32_t v = c.r[1]; c.r[1] = x86_add(c, v, c.r[2], c.fl & 1, 4); }
    // 096fc8  adc ebx, 0
    X86_AT(c, 0x96fc8u);
    { uint32_t v = c.r[3]; c.r[3] = x86_add(c, v, 0x0u, c.fl & 1, 4); }
    // 096fcb  mov eax, dword ptr [ebp + 0x14]
    X86_AT(c, 0x96fcbu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x14u)));
    // 096fce  mul dword ptr [ebp + 0x10]
    X86_AT(c, 0x96fceu);
    x86_mul(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u))), 4);
    // 096fd1  add edi, eax
    X86_AT(c, 0x96fd1u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, c.r[0], 0, 4); }
    // 096fd3  adc ecx, edx
    X86_AT(c, 0x96fd3u);
    { uint32_t v = c.r[1]; c.r[1] = x86_add(c, v, c.r[2], c.fl & 1, 4); }
    // 096fd5  adc ebx, 0
    X86_AT(c, 0x96fd5u);
    { uint32_t v = c.r[3]; c.r[3] = x86_add(c, v, 0x0u, c.fl & 1, 4); }
    // 096fd8  mov eax, dword ptr [ebp + 0x18]
    X86_AT(c, 0x96fd8u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x18u)));
    // 096fdb  mul dword ptr [ebp + 0x10]
    X86_AT(c, 0x96fdbu);
    x86_mul(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u))), 4);
    // 096fde  add ecx, eax
    X86_AT(c, 0x96fdeu);
    { uint32_t v = c.r[1]; c.r[1] = x86_add(c, v, c.r[0], 0, 4); }
    // 096fe0  adc ebx, edx
    X86_AT(c, 0x96fe0u);
    { uint32_t v = c.r[3]; c.r[3] = x86_add(c, v, c.r[2], c.fl & 1, 4); }
    // 096fe2  mov edx, dword ptr [ebp + 8]
    X86_AT(c, 0x96fe2u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 096fe5  mov dword ptr [edx + 0xc], ebx
    X86_AT(c, 0x96fe5u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCu)), c.r[3]);
    // 096fe8  mov dword ptr [edx + 8], ecx
    X86_AT(c, 0x96fe8u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0x8u)), c.r[1]);
    // 096feb  mov dword ptr [edx + 4], edi
    X86_AT(c, 0x96febu);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0x4u)), c.r[7]);
    // 096fee  pop dword ptr [edx]
    X86_AT(c, 0x96feeu);
    { uint32_t v = pop32(c); wr32((c.sbase[3] + (uint32_t)(c.r[2])), v); }
    // 096ff0  pop ebx
    X86_AT(c, 0x96ff0u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 096ff1  pop edi
    X86_AT(c, 0x96ff1u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 096ff2  pop ebp
    X86_AT(c, 0x96ff2u);
    { uint32_t v = pop32(c); c.r[5] = v; }
    // 096ff3  ret 0x14
    X86_AT(c, 0x96ff3u);
    c.eip = pop32(c); c.r[4] += 0x14u; return;
    x86_fault(c, 0x96facu, "ran off the end of a function");
}
void f_00096ff8(X86Cpu& c) {
    X86_TICK(c, 34);
    // 096ff8  push ebp
    X86_AT(c, 0x96ff8u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 096ff9  mov ebp, esp
    X86_AT(c, 0x96ff9u);
    c.r[5] = c.r[4];
    // 096ffb  push esi
    X86_AT(c, 0x96ffbu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 096ffc  push edi
    X86_AT(c, 0x96ffcu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 096ffd  push ebx
    X86_AT(c, 0x96ffdu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 096ffe  sub ebx, ebx
    X86_AT(c, 0x96ffeu);
    { uint32_t v = c.r[3]; c.r[3] = x86_sub(c, v, c.r[3], 0, 4); }
    // 097000  mov eax, ebx
    X86_AT(c, 0x97000u);
    c.r[0] = c.r[3];
    // 097002  mov edx, dword ptr [ebp + 0x10]
    X86_AT(c, 0x97002u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u)));
    // 097005  mov esi, dword ptr [ebp + 0xc]
    X86_AT(c, 0x97005u);
    c.r[6] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 097008  mov ecx, dword ptr [ebp + 0x18]
    X86_AT(c, 0x97008u);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x18u)));
    // 09700b  mov edi, dword ptr [ebp + 0x14]
    X86_AT(c, 0x9700bu);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x14u)));
    // 09700e  push ebp
    X86_AT(c, 0x9700eu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 09700f  xor ebp, ebp
    X86_AT(c, 0x9700fu);
    { uint32_t v = c.r[5]; c.r[5] = x86_logic(c, v ^ c.r[5], 4); }
L_97011:
    X86_TICK(c, 7);
    // 097011  cmp edx, ecx
    X86_AT(c, 0x97011u);
    (void)x86_sub(c, c.r[2], c.r[1], 0, 4);
    // 097013  ja 0x9701b
    X86_AT(c, 0x97013u);
    if (x86_cc(c, 7)) { goto L_9701b; }
    X86_TICK(c, 5);
    // 097015  jb 0x97026
    X86_AT(c, 0x97015u);
    if (x86_cc(c, 2)) { goto L_97026; }
    X86_TICK(c, 7);
    // 097017  cmp esi, edi
    X86_AT(c, 0x97017u);
    (void)x86_sub(c, c.r[6], c.r[7], 0, 4);
    // 097019  jb 0x97026
    X86_AT(c, 0x97019u);
    if (x86_cc(c, 2)) { goto L_97026; }
L_9701b:
    X86_TICK(c, 19);
    // 09701b  sub esi, edi
    X86_AT(c, 0x9701bu);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[7], 0, 4); }
    // 09701d  sbb edx, ecx
    X86_AT(c, 0x9701du);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[1], c.fl & 1, 4); }
    // 09701f  stc 
    X86_AT(c, 0x9701fu);
    c.fl |= X86_CF;
    // 097020  rcl eax, 1
    X86_AT(c, 0x97020u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 2, v, 0x1u, 4, w); if (w) c.r[0] = r; }
    // 097022  rcl ebx, 1
    X86_AT(c, 0x97022u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 2, v, 0x1u, 4, w); if (w) c.r[3] = r; }
    // 097024  jmp 0x9702a
    X86_AT(c, 0x97024u);
    goto L_9702a;
L_97026:
    X86_TICK(c, 6);
    // 097026  shl eax, 1
    X86_AT(c, 0x97026u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x1u, 4, w); if (w) c.r[0] = r; }
    // 097028  rcl ebx, 1
    X86_AT(c, 0x97028u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 2, v, 0x1u, 4, w); if (w) c.r[3] = r; }
L_9702a:
    X86_TICK(c, 7);
    // 09702a  test ebx, 0x80000000
    X86_AT(c, 0x9702au);
    (void)x86_logic(c, c.r[3] & 0x80000000u, 4);
    // 097030  jne 0x9703c
    X86_AT(c, 0x97030u);
    if (x86_cc(c, 5)) { goto L_9703c; }
    X86_TICK(c, 7);
    // 097032  and edx, edx
    X86_AT(c, 0x97032u);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & c.r[2], 4); }
    // 097034  jne 0x97056
    X86_AT(c, 0x97034u);
    if (x86_cc(c, 5)) { goto L_97056; }
    X86_TICK(c, 7);
    // 097036  and esi, esi
    X86_AT(c, 0x97036u);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & c.r[6], 4); }
    // 097038  jne 0x97056
    X86_AT(c, 0x97038u);
    if (x86_cc(c, 5)) { goto L_97056; }
    X86_TICK(c, 7);
    // 09703a  jmp 0x9705f
    X86_AT(c, 0x9703au);
    goto L_9705f;
L_9703c:
    X86_TICK(c, 11);
    // 09703c  shl esi, 1
    X86_AT(c, 0x9703cu);
    { uint32_t v = c.r[6]; bool w; uint32_t r = x86_shift(c, 4, v, 0x1u, 4, w); if (w) c.r[6] = r; }
    // 09703e  rcl edx, 1
    X86_AT(c, 0x9703eu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 2, v, 0x1u, 4, w); if (w) c.r[2] = r; }
    // 097040  jb 0x9704c
    X86_AT(c, 0x97040u);
    if (x86_cc(c, 2)) { goto L_9704c; }
    X86_TICK(c, 7);
    // 097042  cmp edx, ecx
    X86_AT(c, 0x97042u);
    (void)x86_sub(c, c.r[2], c.r[1], 0, 4);
    // 097044  ja 0x9704c
    X86_AT(c, 0x97044u);
    if (x86_cc(c, 7)) { goto L_9704c; }
    X86_TICK(c, 5);
    // 097046  jb 0x9707b
    X86_AT(c, 0x97046u);
    if (x86_cc(c, 2)) { goto L_9707b; }
    X86_TICK(c, 7);
    // 097048  cmp esi, edi
    X86_AT(c, 0x97048u);
    (void)x86_sub(c, c.r[6], c.r[7], 0, 4);
    // 09704a  jb 0x9707b
    X86_AT(c, 0x9704au);
    if (x86_cc(c, 2)) { goto L_9707b; }
L_9704c:
    X86_TICK(c, 11);
    // 09704c  add eax, 1
    X86_AT(c, 0x9704cu);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0x1u, 0, 4); }
    // 097051  adc ebx, 0
    X86_AT(c, 0x97051u);
    { uint32_t v = c.r[3]; c.r[3] = x86_add(c, v, 0x0u, c.fl & 1, 4); }
    // 097054  jmp 0x9707b
    X86_AT(c, 0x97054u);
    goto L_9707b;
L_97056:
    X86_TICK(c, 13);
    // 097056  inc ebp
    X86_AT(c, 0x97056u);
    { uint32_t v = c.r[5]; c.r[5] = x86_inc(c, v, 4); }
    // 097057  shl esi, 1
    X86_AT(c, 0x97057u);
    { uint32_t v = c.r[6]; bool w; uint32_t r = x86_shift(c, 4, v, 0x1u, 4, w); if (w) c.r[6] = r; }
    // 097059  rcl edx, 1
    X86_AT(c, 0x97059u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 2, v, 0x1u, 4, w); if (w) c.r[2] = r; }
    // 09705b  jb 0x9701b
    X86_AT(c, 0x9705bu);
    if (x86_cc(c, 2)) { X86_POLL(c, 0x9701bu); goto L_9701b; }
    X86_TICK(c, 7);
    // 09705d  jmp 0x97011
    X86_AT(c, 0x9705du);
    X86_POLL(c, 0x97011u); goto L_97011;
L_9705f:
    X86_TICK(c, 7);
    // 09705f  and ebx, ebx
    X86_AT(c, 0x9705fu);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & c.r[3], 4); }
    // 097061  jne 0x9706c
    X86_AT(c, 0x97061u);
    if (x86_cc(c, 5)) { goto L_9706c; }
    X86_TICK(c, 13);
    // 097063  add ebp, 0x20
    X86_AT(c, 0x97063u);
    { uint32_t v = c.r[5]; c.r[5] = x86_add(c, v, 0x20u, 0, 4); }
    // 097066  mov ebx, eax
    X86_AT(c, 0x97066u);
    c.r[3] = c.r[0];
    // 097068  xor eax, eax
    X86_AT(c, 0x97068u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v ^ c.r[0], 4); }
    // 09706a  jmp 0x9705f
    X86_AT(c, 0x9706au);
    X86_POLL(c, 0x9705fu); goto L_9705f;
L_9706c:
    X86_TICK(c, 22);
    // 09706c  bsr ecx, ebx
    X86_AT(c, 0x9706cu);
    c.r[1] = x86_bsr(c, c.r[3], c.r[1]);
    // 09706f  sub ecx, 0x1f
    X86_AT(c, 0x9706fu);
    { uint32_t v = c.r[1]; c.r[1] = x86_sub(c, v, 0x1Fu, 0, 4); }
    // 097072  neg ecx
    X86_AT(c, 0x97072u);
    { uint32_t v = c.r[1]; c.r[1] = x86_neg(c, v, 4); }
    // 097074  shld ebx, eax, cl
    X86_AT(c, 0x97074u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_double(c, true, v, c.r[0], g8(c, 1), 4, w); if (w) c.r[3] = r; }
    // 097077  shl eax, cl
    X86_AT(c, 0x97077u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 097079  add ebp, ecx
    X86_AT(c, 0x97079u);
    { uint32_t v = c.r[5]; c.r[5] = x86_add(c, v, c.r[1], 0, 4); }
L_9707b:
    X86_TICK(c, 44);
    // 09707b  pop ecx
    X86_AT(c, 0x9707bu);
    { uint32_t v = pop32(c); c.r[1] = v; }
    // 09707c  xchg ebp, ecx
    X86_AT(c, 0x9707cu);
    { uint32_t t = c.r[5]; c.r[5] = c.r[1]; c.r[1] = t; }
    // 09707e  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0x9707eu);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 097081  mov dword ptr [edi], eax
    X86_AT(c, 0x97081u);
    wr32((c.sbase[3] + (uint32_t)(c.r[7])), c.r[0]);
    // 097083  mov dword ptr [edi + 4], ebx
    X86_AT(c, 0x97083u);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] + 0x4u)), c.r[3]);
    // 097086  xchg ecx, eax
    X86_AT(c, 0x97086u);
    { uint32_t t = c.r[1]; c.r[1] = c.r[0]; c.r[0] = t; }
    // 097087  pop ebx
    X86_AT(c, 0x97087u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 097088  pop edi
    X86_AT(c, 0x97088u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 097089  pop esi
    X86_AT(c, 0x97089u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 09708a  pop ebp
    X86_AT(c, 0x9708au);
    { uint32_t v = pop32(c); c.r[5] = v; }
    // 09708b  ret 0x14
    X86_AT(c, 0x9708bu);
    c.eip = pop32(c); c.r[4] += 0x14u; return;
    x86_fault(c, 0x96ff8u, "ran off the end of a function");
}
void f_00097090(X86Cpu& c) {
    X86_TICK(c, 31);
    // 097090  push ebp
    X86_AT(c, 0x97090u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 097091  mov ebp, esp
    X86_AT(c, 0x97091u);
    c.r[5] = c.r[4];
    // 097093  push edi
    X86_AT(c, 0x97093u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 097094  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0x97094u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 097097  movzx eax, word ptr [edi]
    X86_AT(c, 0x97097u);
    c.r[0] = rd16((c.sbase[3] + (uint32_t)(c.r[7])));
    // 09709a  push eax
    X86_AT(c, 0x9709au);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 09709b  lea eax, [edi + 2]
    X86_AT(c, 0x9709bu);
    c.r[0] = (uint32_t)(c.r[7] + 0x2u);
    // 09709e  push eax
    X86_AT(c, 0x9709eu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 09709f  push 2
    X86_AT(c, 0x9709fu);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0970a1  call 0x9500c
    X86_AT(c, 0x970a1u);
    push32(c, 0x970a6u); x86_call_known(c, 0x9500cu, f_0009500c); X86_RET(c, 0x970a6u);
    X86_TICK(c, 19);
    // 0970a6  movzx eax, word ptr [0x8a72c]
    X86_AT(c, 0x970a6u);
    c.r[0] = rd16((c.sbase[3] + (uint32_t)(0x8A72Cu)));
    // 0970ad  push eax
    X86_AT(c, 0x970adu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0970ae  push 0x8a72e
    X86_AT(c, 0x970aeu);
    { uint32_t v = 0x8A72Eu; push32(c, v); }
    // 0970b3  push 2
    X86_AT(c, 0x970b3u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0970b5  call 0x9500c
    X86_AT(c, 0x970b5u);
    push32(c, 0x970bau); x86_call_known(c, 0x9500cu, f_0009500c); X86_RET(c, 0x970bau);
    X86_TICK(c, 20);
    // 0970ba  pop edi
    X86_AT(c, 0x970bau);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0970bb  leave 
    X86_AT(c, 0x970bbu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0970bc  ret 4
    X86_AT(c, 0x970bcu);
    c.eip = pop32(c); c.r[4] += 0x4u; return;
    x86_fault(c, 0x97090u, "ran off the end of a function");
}
}

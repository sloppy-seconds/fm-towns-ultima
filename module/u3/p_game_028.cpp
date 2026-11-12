#include "p_game_funcs.h"
namespace p_game {
void f_000db0e0(X86Cpu& c) {
    X86_TICK(c, 13);
    // 0db0e0  enter 4, 0
    X86_AT(c, 0xdb0e0u);
    x86_enter(c, 0x4u, 0x0u, 4);
    // 0db0e4  call 0xdb044
    X86_AT(c, 0xdb0e4u);
    push32(c, 0xdb0e9u); x86_call_known(c, 0xdb044u, f_000db044); X86_RET(c, 0xdb0e9u);
    X86_TICK(c, 25);
    // 0db0e9  mov word ptr [ebp - 2], ax
    X86_AT(c, 0xdb0e9u);
    wr16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFEu)), (c.r[0] & 0xFFFFu));
    // 0db0ed  add dword ptr [0xb4528], 0xffffffe8
    X86_AT(c, 0xdb0edu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xB4528u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0xFFFFFFE8u, 0, 4)); }
    // 0db0f4  leave 
    X86_AT(c, 0xdb0f4u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0db0f5  ret 
    X86_AT(c, 0xdb0f5u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xdb0e0u, "ran off the end of a function");
}
void f_000db0f8(X86Cpu& c) {
    X86_TICK(c, 19);
    // 0db0f8  enter 4, 0
    X86_AT(c, 0xdb0f8u);
    x86_enter(c, 0x4u, 0x0u, 4);
    // 0db0fc  push esi
    X86_AT(c, 0xdb0fcu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0db0fd  push edi
    X86_AT(c, 0xdb0fdu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0db0fe  mov si, 1
    X86_AT(c, 0xdb0feu);
    s16(c, 6, 0x1u);
    // 0db102  call 0xdb0e0
    X86_AT(c, 0xdb102u);
    push32(c, 0xdb107u); x86_call_known(c, 0xdb0e0u, f_000db0e0); X86_RET(c, 0xdb107u);
    X86_TICK(c, 9);
    // 0db107  lea edi, [esi + eax*1]
    X86_AT(c, 0xdb107u);
    c.r[7] = (uint32_t)(c.r[6] + c.r[0]);
    // 0db10a  cmp di, si
    X86_AT(c, 0xdb10au);
    (void)x86_sub(c, (c.r[7] & 0xFFFFu), (c.r[6] & 0xFFFFu), 0, 2);
    // 0db10d  jle 0xdb113
    X86_AT(c, 0xdb10du);
    if (x86_cc(c, 14)) { goto L_db113; }
    X86_TICK(c, 2);
    // 0db10f  mov byte ptr [ebp - 1], 0
    X86_AT(c, 0xdb10fu);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFFu)), 0x0u);
L_db113:
    X86_TICK(c, 24);
    // 0db113  pop edi
    X86_AT(c, 0xdb113u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0db114  pop esi
    X86_AT(c, 0xdb114u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0db115  leave 
    X86_AT(c, 0xdb115u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0db116  ret 
    X86_AT(c, 0xdb116u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xdb0f8u, "ran off the end of a function");
}
void f_000db134(X86Cpu& c) {
    X86_TICK(c, 48);
    // 0db134  push ebp
    X86_AT(c, 0xdb134u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0db135  mov ebp, esp
    X86_AT(c, 0xdb135u);
    c.r[5] = c.r[4];
    // 0db137  push ecx
    X86_AT(c, 0xdb137u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 0db138  sub esp, 0x28
    X86_AT(c, 0xdb138u);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, 0x28u, 0, 4); }
    // 0db13b  push ebx
    X86_AT(c, 0xdb13bu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0db13c  push esi
    X86_AT(c, 0xdb13cu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0db13d  push edi
    X86_AT(c, 0xdb13du);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0db13e  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0xdb13eu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0db141  movzx edx, byte ptr [eax - 0x21]
    X86_AT(c, 0xdb141u);
    c.r[2] = rd8((c.sbase[3] + (uint32_t)(c.r[0] + 0xFFFFFFDFu)));
    // 0db145  mov ecx, dword ptr [eax + 0x20]
    X86_AT(c, 0xdb145u);
    c.r[1] = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0x20u)));
    // 0db148  sub ecx, edx
    X86_AT(c, 0xdb148u);
    { uint32_t v = c.r[1]; c.r[1] = x86_sub(c, v, c.r[2], 0, 4); }
    // 0db14a  mov dword ptr [ebp - 0x20], ecx
    X86_AT(c, 0xdb14au);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE0u)), c.r[1]);
    // 0db14d  push dword ptr [ebp - 0x20]
    X86_AT(c, 0xdb14du);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE0u))); push32(c, v); }
    // 0db150  lea ecx, [ebp - 0x10]
    X86_AT(c, 0xdb150u);
    c.r[1] = (uint32_t)(c.r[5] + 0xFFFFFFF0u);
    // 0db153  push ecx
    X86_AT(c, 0xdb153u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 0db154  call 0xdc12c
    X86_AT(c, 0xdb154u);
    push32(c, 0xdb159u); x86_call_known(c, 0xdc12cu, f_000dc12c); X86_RET(c, 0xdb159u);
    X86_TICK(c, 15);
    // 0db159  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0xdb159u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0db15c  lea edx, [eax + 0xc]
    X86_AT(c, 0xdb15cu);
    c.r[2] = (uint32_t)(c.r[0] + 0xCu);
    // 0db15f  push edx
    X86_AT(c, 0xdb15fu);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0db160  call 0xdaed4
    X86_AT(c, 0xdb160u);
    push32(c, 0xdb165u); x86_call_known(c, 0xdaed4u, f_000daed4); X86_RET(c, 0xdb165u);
    X86_TICK(c, 11);
    // 0db165  lea eax, [ebp - 0x10]
    X86_AT(c, 0xdb165u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFF0u);
    // 0db168  push eax
    X86_AT(c, 0xdb168u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0db169  call 0xdaed4
    X86_AT(c, 0xdb169u);
    push32(c, 0xdb16eu); x86_call_known(c, 0xdaed4u, f_000daed4); X86_RET(c, 0xdb16eu);
    X86_TICK(c, 7);
    // 0db16e  call 0xdc2fc
    X86_AT(c, 0xdb16eu);
    push32(c, 0xdb173u); x86_call_known(c, 0xdc2fcu, f_000dc2fc); X86_RET(c, 0xdb173u);
    X86_TICK(c, 11);
    // 0db173  lea eax, [ebp - 0x10]
    X86_AT(c, 0xdb173u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFF0u);
    // 0db176  push eax
    X86_AT(c, 0xdb176u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0db177  call 0xdaf34
    X86_AT(c, 0xdb177u);
    push32(c, 0xdb17cu); x86_call_known(c, 0xdaf34u, f_000daf34); X86_RET(c, 0xdb17cu);
    X86_TICK(c, 15);
    // 0db17c  lea eax, [ebp - 0x10]
    X86_AT(c, 0xdb17cu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFF0u);
    // 0db17f  push eax
    X86_AT(c, 0xdb17fu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0db180  lea eax, [ebp - 0x2c]
    X86_AT(c, 0xdb180u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFD4u);
    // 0db183  push eax
    X86_AT(c, 0xdb183u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0db184  call 0xdc290
    X86_AT(c, 0xdb184u);
    push32(c, 0xdb189u); x86_call_known(c, 0xdc290u, f_000dc290); X86_RET(c, 0xdb189u);
    X86_TICK(c, 47);
    // 0db189  push esi
    X86_AT(c, 0xdb189u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0db18a  lea esi, [ebp - 0x2c]
    X86_AT(c, 0xdb18au);
    c.r[6] = (uint32_t)(c.r[5] + 0xFFFFFFD4u);
    // 0db18d  push edi
    X86_AT(c, 0xdb18du);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0db18e  lea edi, [ebp - 0x1a]
    X86_AT(c, 0xdb18eu);
    c.r[7] = (uint32_t)(c.r[5] + 0xFFFFFFE6u);
    // 0db191  movsd dword ptr es:[edi], dword ptr [esi]
    X86_AT(c, 0xdb191u);
    x86_string(c, 0, 4, 0, 4, 3);
    // 0db192  movsd dword ptr es:[edi], dword ptr [esi]
    X86_AT(c, 0xdb192u);
    x86_string(c, 0, 4, 0, 4, 3);
    // 0db193  movsw word ptr es:[edi], word ptr [esi]
    X86_AT(c, 0xdb193u);
    x86_string(c, 0, 2, 0, 4, 3);
    // 0db195  pop edi
    X86_AT(c, 0xdb195u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0db196  pop esi
    X86_AT(c, 0xdb196u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0db197  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0xdb197u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0db19a  mov dword ptr [eax - 0x20], 0x13
    X86_AT(c, 0xdb19au);
    wr32((c.sbase[3] + (uint32_t)(c.r[0] + 0xFFFFFFE0u)), 0x13u);
    // 0db1a1  mov edi, 1
    X86_AT(c, 0xdb1a1u);
    c.r[7] = 0x1u;
    // 0db1a6  mov esi, edi
    X86_AT(c, 0xdb1a6u);
    c.r[6] = c.r[7];
L_db1a8:
    X86_TICK(c, 14);
    // 0db1a8  mov bl, byte ptr [ebp + edi*1 - 0x1b]
    X86_AT(c, 0xdb1a8u);
    s8(c, 3, rd8((c.sbase[2] + (uint32_t)(c.r[5] + c.r[7] + 0xFFFFFFE5u))));
    // 0db1ac  mov eax, esi
    X86_AT(c, 0xdb1acu);
    c.r[0] = c.r[6];
    // 0db1ae  rcr eax, 1
    X86_AT(c, 0xdb1aeu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 3, v, 0x1u, 4, w); if (w) c.r[0] = r; }
    // 0db1b0  jae 0xdb1ba
    X86_AT(c, 0xdb1b0u);
    if (x86_cc(c, 3)) { goto L_db1ba; }
    X86_TICK(c, 13);
    // 0db1b2  sub bh, bh
    X86_AT(c, 0xdb1b2u);
    { uint32_t v = g8(c, 7); s8(c, 7, x86_sub(c, v, g8(c, 7), 0, 1)); }
    // 0db1b4  mov eax, ebx
    X86_AT(c, 0xdb1b4u);
    c.r[0] = c.r[3];
    // 0db1b6  and al, 0xf
    X86_AT(c, 0xdb1b6u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & 0xFu, 1)); }
    // 0db1b8  jmp 0xdb1bf
    X86_AT(c, 0xdb1b8u);
    goto L_db1bf;
L_db1ba:
    X86_TICK(c, 5);
    // 0db1ba  mov eax, ebx
    X86_AT(c, 0xdb1bau);
    c.r[0] = c.r[3];
    // 0db1bc  shr al, 4
    X86_AT(c, 0xdb1bcu);
    { uint32_t v = g8(c, 0); bool w; uint32_t r = x86_shift(c, 5, v, 0x4u, 1, w); if (w) s8(c, 0, r); }
L_db1bf:
    X86_TICK(c, 34);
    // 0db1bf  mov byte ptr [ebp - 0x21], al
    X86_AT(c, 0xdb1bfu);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFDFu)), g8(c, 0));
    // 0db1c2  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0xdb1c2u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0db1c5  dec dword ptr [eax - 0x20]
    X86_AT(c, 0xdb1c5u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[0] + 0xFFFFFFE0u)); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 0db1c8  mov dl, byte ptr [ebp - 0x21]
    X86_AT(c, 0xdb1c8u);
    s8(c, 2, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFDFu))));
    // 0db1cb  add dl, 0x30
    X86_AT(c, 0xdb1cbu);
    { uint32_t v = g8(c, 2); s8(c, 2, x86_add(c, v, 0x30u, 0, 1)); }
    // 0db1ce  mov ecx, dword ptr [eax - 0x20]
    X86_AT(c, 0xdb1ceu);
    c.r[1] = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0xFFFFFFE0u)));
    // 0db1d1  mov byte ptr [eax + ecx*1 - 0x1c], dl
    X86_AT(c, 0xdb1d1u);
    wr8((c.sbase[3] + (uint32_t)(c.r[0] + c.r[1] + 0xFFFFFFE4u)), g8(c, 2));
    // 0db1d5  mov eax, esi
    X86_AT(c, 0xdb1d5u);
    c.r[0] = c.r[6];
    // 0db1d7  rcr eax, 1
    X86_AT(c, 0xdb1d7u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 3, v, 0x1u, 4, w); if (w) c.r[0] = r; }
    // 0db1d9  jb 0xdb1dc
    X86_AT(c, 0xdb1d9u);
    if (x86_cc(c, 2)) { goto L_db1dc; }
    X86_TICK(c, 2);
    // 0db1db  inc edi
    X86_AT(c, 0xdb1dbu);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
L_db1dc:
    X86_TICK(c, 7);
    // 0db1dc  cmp esi, 0x12
    X86_AT(c, 0xdb1dcu);
    (void)x86_sub(c, c.r[6], 0x12u, 0, 4);
    // 0db1df  jge 0xdb1ea
    X86_AT(c, 0xdb1dfu);
    if (x86_cc(c, 13)) { goto L_db1ea; }
    X86_TICK(c, 9);
    // 0db1e1  inc esi
    X86_AT(c, 0xdb1e1u);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 0db1e2  jmp 0xdb1a8
    X86_AT(c, 0xdb1e2u);
    X86_POLL(c, 0xdb1a8u); goto L_db1a8;
L_db1e4:
    X86_TICK(c, 10);
    // 0db1e4  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0xdb1e4u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0db1e7  inc dword ptr [eax - 0x20]
    X86_AT(c, 0xdb1e7u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[0] + 0xFFFFFFE0u)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
L_db1ea:
    X86_TICK(c, 20);
    // 0db1ea  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0xdb1eau);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0db1ed  mov edx, dword ptr [eax - 0x20]
    X86_AT(c, 0xdb1edu);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0xFFFFFFE0u)));
    // 0db1f0  cmp byte ptr [eax + edx*1 - 0x1c], 0x30
    X86_AT(c, 0xdb1f0u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[0] + c.r[2] + 0xFFFFFFE4u))), 0x30u, 0, 1);
    // 0db1f5  je 0xdb1e4
    X86_AT(c, 0xdb1f5u);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xdb1e4u); goto L_db1e4; }
    X86_TICK(c, 17);
    // 0db1f7  mov ecx, 0x12
    X86_AT(c, 0xdb1f7u);
    c.r[1] = 0x12u;
    // 0db1fc  sub ecx, dword ptr [ebp - 0x20]
    X86_AT(c, 0xdb1fcu);
    { uint32_t v = c.r[1]; c.r[1] = x86_sub(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE0u))), 0, 4); }
    // 0db1ff  inc ecx
    X86_AT(c, 0xdb1ffu);
    { uint32_t v = c.r[1]; c.r[1] = x86_inc(c, v, 4); }
    // 0db200  cmp edx, ecx
    X86_AT(c, 0xdb200u);
    (void)x86_sub(c, c.r[2], c.r[1], 0, 4);
    // 0db202  jge 0xdb207
    X86_AT(c, 0xdb202u);
    if (x86_cc(c, 13)) { goto L_db207; }
    X86_TICK(c, 6);
    // 0db204  inc dword ptr [eax - 4]
    X86_AT(c, 0xdb204u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[0] + 0xFFFFFFFCu)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
L_db207:
    X86_TICK(c, 28);
    // 0db207  pop edi
    X86_AT(c, 0xdb207u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0db208  pop esi
    X86_AT(c, 0xdb208u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0db209  pop ebx
    X86_AT(c, 0xdb209u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0db20a  leave 
    X86_AT(c, 0xdb20au);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0db20b  ret 
    X86_AT(c, 0xdb20bu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xdb134u, "ran off the end of a function");
}
void f_000db214(X86Cpu& c) {
    X86_TICK(c, 33);
    // 0db214  push ebp
    X86_AT(c, 0xdb214u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0db215  mov ebp, esp
    X86_AT(c, 0xdb215u);
    c.r[5] = c.r[4];
    // 0db217  push ecx
    X86_AT(c, 0xdb217u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 0db218  sub esp, 0xc
    X86_AT(c, 0xdb218u);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, 0xCu, 0, 4); }
    // 0db21b  push ebx
    X86_AT(c, 0xdb21bu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0db21c  push esi
    X86_AT(c, 0xdb21cu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0db21d  push edi
    X86_AT(c, 0xdb21du);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0db21e  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0xdb21eu);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0db221  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0xdb221u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0db224  cmp edi, dword ptr [eax + 0x20]
    X86_AT(c, 0xdb224u);
    (void)x86_sub(c, c.r[7], rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0x20u))), 0, 4);
    // 0db227  jge 0xdb2cd
    X86_AT(c, 0xdb227u);
    if (x86_cc(c, 13)) { goto L_db2cd; }
    X86_TICK(c, 17);
    // 0db22d  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0xdb22du);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0db230  add eax, 0xc
    X86_AT(c, 0xdb230u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0xCu, 0, 4); }
    // 0db233  push eax
    X86_AT(c, 0xdb233u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0db234  mov ebx, eax
    X86_AT(c, 0xdb234u);
    c.r[3] = c.r[0];
    // 0db236  call 0xdaed4
    X86_AT(c, 0xdb236u);
    push32(c, 0xdb23bu); x86_call_known(c, 0xdaed4u, f_000daed4); X86_RET(c, 0xdb23bu);
    X86_TICK(c, 12);
    // 0db23b  push dword ptr [0x12ac0]
    X86_AT(c, 0xdb23bu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0x12AC0u))); push32(c, v); }
    // 0db241  call 0xdc2c0
    X86_AT(c, 0xdb241u);
    push32(c, 0xdb246u); x86_call_known(c, 0xdc2c0u, f_000dc2c0); X86_RET(c, 0xdb246u);
    X86_TICK(c, 7);
    // 0db246  call 0xdb0f8
    X86_AT(c, 0xdb246u);
    push32(c, 0xdb24bu); x86_call_known(c, 0xdb0f8u, f_000db0f8); X86_RET(c, 0xdb24bu);
    X86_TICK(c, 5);
    // 0db24b  je 0xdb2cd
    X86_AT(c, 0xdb24bu);
    if (x86_cc(c, 4)) { goto L_db2cd; }
    X86_TICK(c, 15);
    // 0db251  mov eax, edi
    X86_AT(c, 0xdb251u);
    c.r[0] = c.r[7];
    // 0db253  push eax
    X86_AT(c, 0xdb253u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0db254  lea ebx, [ebp - 0x10]
    X86_AT(c, 0xdb254u);
    c.r[3] = (uint32_t)(c.r[5] + 0xFFFFFFF0u);
    // 0db257  push ebx
    X86_AT(c, 0xdb257u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0db258  call 0xdc12c
    X86_AT(c, 0xdb258u);
    push32(c, 0xdb25du); x86_call_known(c, 0xdc12cu, f_000dc12c); X86_RET(c, 0xdb25du);
    X86_TICK(c, 9);
    // 0db25d  push ebx
    X86_AT(c, 0xdb25du);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0db25e  call 0xdaed4
    X86_AT(c, 0xdb25eu);
    push32(c, 0xdb263u); x86_call_known(c, 0xdaed4u, f_000daed4); X86_RET(c, 0xdb263u);
    X86_TICK(c, 12);
    // 0db263  push dword ptr [0x12ac4]
    X86_AT(c, 0xdb263u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0x12AC4u))); push32(c, v); }
    // 0db269  call 0xdc2c0
    X86_AT(c, 0xdb269u);
    push32(c, 0xdb26eu); x86_call_known(c, 0xdc2c0u, f_000dc2c0); X86_RET(c, 0xdb26eu);
    X86_TICK(c, 7);
    // 0db26e  call 0xdc420
    X86_AT(c, 0xdb26eu);
    push32(c, 0xdb273u); x86_call_known(c, 0xdc420u, f_000dc420); X86_RET(c, 0xdb273u);
    X86_TICK(c, 19);
    // 0db273  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0xdb273u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0db276  lea edx, [eax + 0xc]
    X86_AT(c, 0xdb276u);
    c.r[2] = (uint32_t)(c.r[0] + 0xCu);
    // 0db279  push edx
    X86_AT(c, 0xdb279u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0db27a  mov ebx, eax
    X86_AT(c, 0xdb27au);
    c.r[3] = c.r[0];
    // 0db27c  mov esi, edx
    X86_AT(c, 0xdb27cu);
    c.r[6] = c.r[2];
    // 0db27e  call 0xdaed4
    X86_AT(c, 0xdb27eu);
    push32(c, 0xdb283u); x86_call_known(c, 0xdaed4u, f_000daed4); X86_RET(c, 0xdb283u);
    X86_TICK(c, 7);
    // 0db283  call 0xdadbc
    X86_AT(c, 0xdb283u);
    push32(c, 0xdb288u); x86_call_known(c, 0xdadbcu, f_000dadbc); X86_RET(c, 0xdb288u);
    X86_TICK(c, 9);
    // 0db288  push esi
    X86_AT(c, 0xdb288u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0db289  call 0xdaf34
    X86_AT(c, 0xdb289u);
    push32(c, 0xdb28eu); x86_call_known(c, 0xdaf34u, f_000daf34); X86_RET(c, 0xdb28eu);
    X86_TICK(c, 9);
    // 0db28e  push esi
    X86_AT(c, 0xdb28eu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0db28f  call 0xdaed4
    X86_AT(c, 0xdb28fu);
    push32(c, 0xdb294u); x86_call_known(c, 0xdaed4u, f_000daed4); X86_RET(c, 0xdb294u);
    X86_TICK(c, 12);
    // 0db294  push dword ptr [0x12ac8]
    X86_AT(c, 0xdb294u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0x12AC8u))); push32(c, v); }
    // 0db29a  call 0xdc2c0
    X86_AT(c, 0xdb29au);
    push32(c, 0xdb29fu); x86_call_known(c, 0xdc2c0u, f_000dc2c0); X86_RET(c, 0xdb29fu);
    X86_TICK(c, 7);
    // 0db29f  call 0xdb0f8
    X86_AT(c, 0xdb29fu);
    push32(c, 0xdb2a4u); x86_call_known(c, 0xdb0f8u, f_000db0f8); X86_RET(c, 0xdb2a4u);
    X86_TICK(c, 13);
    // 0db2a4  setae al
    X86_AT(c, 0xdb2a4u);
    s8(c, 0, x86_cc(c, 3) ? 1u : 0u);
    // 0db2a7  mov byte ptr [ebx - 0x21], al
    X86_AT(c, 0xdb2a7u);
    wr8((c.sbase[3] + (uint32_t)(c.r[3] + 0xFFFFFFDFu)), g8(c, 0));
    // 0db2aa  and al, al
    X86_AT(c, 0xdb2aau);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & g8(c, 0), 1)); }
    // 0db2ac  je 0xdb2cd
    X86_AT(c, 0xdb2acu);
    if (x86_cc(c, 4)) { goto L_db2cd; }
    X86_TICK(c, 9);
    // 0db2ae  push esi
    X86_AT(c, 0xdb2aeu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0db2af  call 0xdaed4
    X86_AT(c, 0xdb2afu);
    push32(c, 0xdb2b4u); x86_call_known(c, 0xdaed4u, f_000daed4); X86_RET(c, 0xdb2b4u);
    X86_TICK(c, 11);
    // 0db2b4  mov eax, 0x12acc
    X86_AT(c, 0xdb2b4u);
    c.r[0] = 0x12ACCu;
    // 0db2b9  push eax
    X86_AT(c, 0xdb2b9u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0db2ba  call 0xdaed4
    X86_AT(c, 0xdb2bau);
    push32(c, 0xdb2bfu); x86_call_known(c, 0xdaed4u, f_000daed4); X86_RET(c, 0xdb2bfu);
    X86_TICK(c, 7);
    // 0db2bf  call 0xdc2fc
    X86_AT(c, 0xdb2bfu);
    push32(c, 0xdb2c4u); x86_call_known(c, 0xdc2fcu, f_000dc2fc); X86_RET(c, 0xdb2c4u);
    X86_TICK(c, 9);
    // 0db2c4  push esi
    X86_AT(c, 0xdb2c4u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0db2c5  call 0xdaf34
    X86_AT(c, 0xdb2c5u);
    push32(c, 0xdb2cau); x86_call_known(c, 0xdaf34u, f_000daf34); X86_RET(c, 0xdb2cau);
    X86_TICK(c, 6);
    // 0db2ca  inc dword ptr [ebx - 4]
    X86_AT(c, 0xdb2cau);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3] + 0xFFFFFFFCu)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
L_db2cd:
    X86_TICK(c, 28);
    // 0db2cd  pop edi
    X86_AT(c, 0xdb2cdu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0db2ce  pop esi
    X86_AT(c, 0xdb2ceu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0db2cf  pop ebx
    X86_AT(c, 0xdb2cfu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0db2d0  leave 
    X86_AT(c, 0xdb2d0u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0db2d1  ret 4
    X86_AT(c, 0xdb2d1u);
    c.eip = pop32(c); c.r[4] += 0x4u; return;
    x86_fault(c, 0xdb214u, "ran off the end of a function");
}
void f_000db2e4(X86Cpu& c) {
    X86_TICK(c, 35);
    // 0db2e4  enter 0x38, 0
    X86_AT(c, 0xdb2e4u);
    x86_enter(c, 0x38u, 0x0u, 4);
    // 0db2e8  push ebx
    X86_AT(c, 0xdb2e8u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0db2e9  push esi
    X86_AT(c, 0xdb2e9u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0db2ea  push edi
    X86_AT(c, 0xdb2eau);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0db2eb  mov edi, dword ptr [ebp + 0x1c]
    X86_AT(c, 0xdb2ebu);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x1Cu)));
    // 0db2ee  mov esi, dword ptr [ebp + 0x24]
    X86_AT(c, 0xdb2eeu);
    c.r[6] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x24u)));
    // 0db2f1  lea eax, [ebp + 0xc]
    X86_AT(c, 0xdb2f1u);
    c.r[0] = (uint32_t)(c.r[5] + 0xCu);
    // 0db2f4  push eax
    X86_AT(c, 0xdb2f4u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0db2f5  lea eax, [ebp - 0x38]
    X86_AT(c, 0xdb2f5u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFC8u);
    // 0db2f8  push eax
    X86_AT(c, 0xdb2f8u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0db2f9  call 0xdc1ac
    X86_AT(c, 0xdb2f9u);
    push32(c, 0xdb2feu); x86_call_known(c, 0xdc1acu, f_000dc1ac); X86_RET(c, 0xdb2feu);
    X86_TICK(c, 39);
    // 0db2fe  lea eax, [ebp - 0x38]
    X86_AT(c, 0xdb2feu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFC8u);
    // 0db301  push esi
    X86_AT(c, 0xdb301u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0db302  push edi
    X86_AT(c, 0xdb302u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0db303  mov edi, esi
    X86_AT(c, 0xdb303u);
    c.r[7] = c.r[6];
    // 0db305  mov esi, eax
    X86_AT(c, 0xdb305u);
    c.r[6] = c.r[0];
    // 0db307  mov ecx, 3
    X86_AT(c, 0xdb307u);
    c.r[1] = 0x3u;
    // 0db30c  movsd dword ptr es:[edi], dword ptr [esi]
    X86_AT(c, 0xdb30cu);
    x86_string(c, 0, 4, 243, 4, 3);
    // 0db30e  pop edi
    X86_AT(c, 0xdb30eu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0db30f  pop esi
    X86_AT(c, 0xdb30fu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0db310  cmp word ptr [esi], 0
    X86_AT(c, 0xdb310u);
    (void)x86_sub(c, rd16((c.sbase[3] + (uint32_t)(c.r[6]))), 0x0u, 0, 2);
    // 0db314  jne 0xdb4d0
    X86_AT(c, 0xdb314u);
    if (x86_cc(c, 5)) { goto L_db4d0; }
    X86_TICK(c, 11);
    // 0db31a  lea eax, [ebp + 0xc]
    X86_AT(c, 0xdb31au);
    c.r[0] = (uint32_t)(c.r[5] + 0xCu);
    // 0db31d  push eax
    X86_AT(c, 0xdb31du);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0db31e  call 0xdc26c
    X86_AT(c, 0xdb31eu);
    push32(c, 0xdb323u); x86_call_known(c, 0xdc26cu, f_000dc26c); X86_RET(c, 0xdb323u);
    X86_TICK(c, 12);
    // 0db323  movsx eax, ax
    X86_AT(c, 0xdb323u);
    c.r[0] = (uint32_t)(int32_t)(int16_t)(c.r[0] & 0xFFFFu);
    // 0db326  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0xdb326u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
    // 0db329  and eax, eax
    X86_AT(c, 0xdb329u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0db32b  jl 0xdb3bc
    X86_AT(c, 0xdb32bu);
    if (x86_cc(c, 12)) { goto L_db3bc; }
    X86_TICK(c, 77);
    // 0db331  imul eax, eax, 0x12a
    X86_AT(c, 0xdb331u);
    c.r[0] = x86_imul2(c, c.r[0], 0x12Au, 4);
    // 0db337  cdq 
    X86_AT(c, 0xdb337u);
    c.r[2] = (c.r[0] & 0x80000000u) ? 0xFFFFFFFFu : 0u;
    // 0db338  mov ecx, 0x3de
    X86_AT(c, 0xdb338u);
    c.r[1] = 0x3DEu;
    // 0db33d  idiv ecx
    X86_AT(c, 0xdb33du);
    x86_idiv(c, c.r[1], 4, 0xdb33du);
    // 0db33f  inc eax
    X86_AT(c, 0xdb33fu);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0db340  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0xdb340u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
    // 0db343  and eax, eax
    X86_AT(c, 0xdb343u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0db345  je 0xdb373
    X86_AT(c, 0xdb345u);
    if (x86_cc(c, 4)) { goto L_db373; }
    X86_TICK(c, 16);
    // 0db347  push dword ptr [ebp - 4]
    X86_AT(c, 0xdb347u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))); push32(c, v); }
    // 0db34a  lea eax, [ebp - 0x2c]
    X86_AT(c, 0xdb34au);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFD4u);
    // 0db34d  push eax
    X86_AT(c, 0xdb34du);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0db34e  call 0xdc12c
    X86_AT(c, 0xdb34eu);
    push32(c, 0xdb353u); x86_call_known(c, 0xdc12cu, f_000dc12c); X86_RET(c, 0xdb353u);
    X86_TICK(c, 11);
    // 0db353  lea eax, [ebp + 0xc]
    X86_AT(c, 0xdb353u);
    c.r[0] = (uint32_t)(c.r[5] + 0xCu);
    // 0db356  push eax
    X86_AT(c, 0xdb356u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0db357  call 0xdaed4
    X86_AT(c, 0xdb357u);
    push32(c, 0xdb35cu); x86_call_known(c, 0xdaed4u, f_000daed4); X86_RET(c, 0xdb35cu);
    X86_TICK(c, 11);
    // 0db35c  lea eax, [ebp - 0x2c]
    X86_AT(c, 0xdb35cu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFD4u);
    // 0db35f  push eax
    X86_AT(c, 0xdb35fu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0db360  call 0xdaed4
    X86_AT(c, 0xdb360u);
    push32(c, 0xdb365u); x86_call_known(c, 0xdaed4u, f_000daed4); X86_RET(c, 0xdb365u);
    X86_TICK(c, 7);
    // 0db365  call 0xdc42c
    X86_AT(c, 0xdb365u);
    push32(c, 0xdb36au); x86_call_known(c, 0xdc42cu, f_000dc42c); X86_RET(c, 0xdb36au);
    X86_TICK(c, 11);
    // 0db36a  lea eax, [ebp + 0xc]
    X86_AT(c, 0xdb36au);
    c.r[0] = (uint32_t)(c.r[5] + 0xCu);
    // 0db36d  push eax
    X86_AT(c, 0xdb36du);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0db36e  call 0xdaf34
    X86_AT(c, 0xdb36eu);
    push32(c, 0xdb373u); x86_call_known(c, 0xdaf34u, f_000daf34); X86_RET(c, 0xdb373u);
L_db373:
    X86_TICK(c, 11);
    // 0db373  lea eax, [ebp + 0xc]
    X86_AT(c, 0xdb373u);
    c.r[0] = (uint32_t)(c.r[5] + 0xCu);
    // 0db376  push eax
    X86_AT(c, 0xdb376u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0db377  call 0xdaed4
    X86_AT(c, 0xdb377u);
    push32(c, 0xdb37cu); x86_call_known(c, 0xdaed4u, f_000daed4); X86_RET(c, 0xdb37cu);
    X86_TICK(c, 12);
    // 0db37c  push dword ptr [0x12ac8]
    X86_AT(c, 0xdb37cu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0x12AC8u))); push32(c, v); }
    // 0db382  call 0xdc2c0
    X86_AT(c, 0xdb382u);
    push32(c, 0xdb387u); x86_call_known(c, 0xdc2c0u, f_000dc2c0); X86_RET(c, 0xdb387u);
    X86_TICK(c, 7);
    // 0db387  call 0xdb0f8
    X86_AT(c, 0xdb387u);
    push32(c, 0xdb38cu); x86_call_known(c, 0xdb0f8u, f_000db0f8); X86_RET(c, 0xdb38cu);
    X86_TICK(c, 5);
    // 0db38c  jb 0xdb447
    X86_AT(c, 0xdb38cu);
    if (x86_cc(c, 2)) { goto L_db447; }
    X86_TICK(c, 11);
    // 0db392  lea eax, [ebp + 0xc]
    X86_AT(c, 0xdb392u);
    c.r[0] = (uint32_t)(c.r[5] + 0xCu);
    // 0db395  push eax
    X86_AT(c, 0xdb395u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0db396  call 0xdaed4
    X86_AT(c, 0xdb396u);
    push32(c, 0xdb39bu); x86_call_known(c, 0xdaed4u, f_000daed4); X86_RET(c, 0xdb39bu);
    X86_TICK(c, 11);
    // 0db39b  mov eax, 0x12acc
    X86_AT(c, 0xdb39bu);
    c.r[0] = 0x12ACCu;
    // 0db3a0  push eax
    X86_AT(c, 0xdb3a0u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0db3a1  call 0xdaed4
    X86_AT(c, 0xdb3a1u);
    push32(c, 0xdb3a6u); x86_call_known(c, 0xdaed4u, f_000daed4); X86_RET(c, 0xdb3a6u);
    X86_TICK(c, 7);
    // 0db3a6  call 0xdc2fc
    X86_AT(c, 0xdb3a6u);
    push32(c, 0xdb3abu); x86_call_known(c, 0xdc2fcu, f_000dc2fc); X86_RET(c, 0xdb3abu);
    X86_TICK(c, 11);
    // 0db3ab  lea eax, [ebp + 0xc]
    X86_AT(c, 0xdb3abu);
    c.r[0] = (uint32_t)(c.r[5] + 0xCu);
    // 0db3ae  push eax
    X86_AT(c, 0xdb3aeu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0db3af  call 0xdaf34
    X86_AT(c, 0xdb3afu);
    push32(c, 0xdb3b4u); x86_call_known(c, 0xdaf34u, f_000daf34); X86_RET(c, 0xdb3b4u);
    X86_TICK(c, 13);
    // 0db3b4  inc dword ptr [ebp - 4]
    X86_AT(c, 0xdb3b4u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0db3b7  jmp 0xdb447
    X86_AT(c, 0xdb3b7u);
    goto L_db447;
L_db3bc:
    X86_TICK(c, 77);
    // 0db3bc  imul eax, dword ptr [ebp - 4], 0x12a
    X86_AT(c, 0xdb3bcu);
    c.r[0] = x86_imul2(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))), 0x12Au, 4);
    // 0db3c3  add eax, 0x12a
    X86_AT(c, 0xdb3c3u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0x12Au, 0, 4); }
    // 0db3c8  cdq 
    X86_AT(c, 0xdb3c8u);
    c.r[2] = (c.r[0] & 0x80000000u) ? 0xFFFFFFFFu : 0u;
    // 0db3c9  mov ecx, 0x3de
    X86_AT(c, 0xdb3c9u);
    c.r[1] = 0x3DEu;
    // 0db3ce  idiv ecx
    X86_AT(c, 0xdb3ceu);
    x86_idiv(c, c.r[1], 4, 0xdb3ceu);
    // 0db3d0  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0xdb3d0u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
    // 0db3d3  and eax, eax
    X86_AT(c, 0xdb3d3u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0db3d5  je 0xdb407
    X86_AT(c, 0xdb3d5u);
    if (x86_cc(c, 4)) { goto L_db407; }
    X86_TICK(c, 19);
    // 0db3d7  mov ax, word ptr [ebp - 4]
    X86_AT(c, 0xdb3d7u);
    s16(c, 0, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))));
    // 0db3db  neg eax
    X86_AT(c, 0xdb3dbu);
    { uint32_t v = c.r[0]; c.r[0] = x86_neg(c, v, 4); }
    // 0db3dd  push eax
    X86_AT(c, 0xdb3ddu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0db3de  lea eax, [ebp - 0x2c]
    X86_AT(c, 0xdb3deu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFD4u);
    // 0db3e1  push eax
    X86_AT(c, 0xdb3e1u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0db3e2  call 0xdc12c
    X86_AT(c, 0xdb3e2u);
    push32(c, 0xdb3e7u); x86_call_known(c, 0xdc12cu, f_000dc12c); X86_RET(c, 0xdb3e7u);
    X86_TICK(c, 11);
    // 0db3e7  lea eax, [ebp - 0x2c]
    X86_AT(c, 0xdb3e7u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFD4u);
    // 0db3ea  push eax
    X86_AT(c, 0xdb3eau);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0db3eb  call 0xdaed4
    X86_AT(c, 0xdb3ebu);
    push32(c, 0xdb3f0u); x86_call_known(c, 0xdaed4u, f_000daed4); X86_RET(c, 0xdb3f0u);
    X86_TICK(c, 11);
    // 0db3f0  lea eax, [ebp + 0xc]
    X86_AT(c, 0xdb3f0u);
    c.r[0] = (uint32_t)(c.r[5] + 0xCu);
    // 0db3f3  push eax
    X86_AT(c, 0xdb3f3u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0db3f4  call 0xdaed4
    X86_AT(c, 0xdb3f4u);
    push32(c, 0xdb3f9u); x86_call_known(c, 0xdaed4u, f_000daed4); X86_RET(c, 0xdb3f9u);
    X86_TICK(c, 7);
    // 0db3f9  call 0xdc2fc
    X86_AT(c, 0xdb3f9u);
    push32(c, 0xdb3feu); x86_call_known(c, 0xdc2fcu, f_000dc2fc); X86_RET(c, 0xdb3feu);
    X86_TICK(c, 11);
    // 0db3fe  lea eax, [ebp + 0xc]
    X86_AT(c, 0xdb3feu);
    c.r[0] = (uint32_t)(c.r[5] + 0xCu);
    // 0db401  push eax
    X86_AT(c, 0xdb401u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0db402  call 0xdaf34
    X86_AT(c, 0xdb402u);
    push32(c, 0xdb407u); x86_call_known(c, 0xdaf34u, f_000daf34); X86_RET(c, 0xdb407u);
L_db407:
    X86_TICK(c, 11);
    // 0db407  lea eax, [ebp + 0xc]
    X86_AT(c, 0xdb407u);
    c.r[0] = (uint32_t)(c.r[5] + 0xCu);
    // 0db40a  push eax
    X86_AT(c, 0xdb40au);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0db40b  call 0xdaed4
    X86_AT(c, 0xdb40bu);
    push32(c, 0xdb410u); x86_call_known(c, 0xdaed4u, f_000daed4); X86_RET(c, 0xdb410u);
    X86_TICK(c, 11);
    // 0db410  mov eax, 0x12acc
    X86_AT(c, 0xdb410u);
    c.r[0] = 0x12ACCu;
    // 0db415  push eax
    X86_AT(c, 0xdb415u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0db416  call 0xdaed4
    X86_AT(c, 0xdb416u);
    push32(c, 0xdb41bu); x86_call_known(c, 0xdaed4u, f_000daed4); X86_RET(c, 0xdb41bu);
    X86_TICK(c, 7);
    // 0db41b  call 0xdb0f8
    X86_AT(c, 0xdb41bu);
    push32(c, 0xdb420u); x86_call_known(c, 0xdb0f8u, f_000db0f8); X86_RET(c, 0xdb420u);
    X86_TICK(c, 5);
    // 0db420  jae 0xdb447
    X86_AT(c, 0xdb420u);
    if (x86_cc(c, 3)) { goto L_db447; }
    X86_TICK(c, 11);
    // 0db422  lea eax, [ebp + 0xc]
    X86_AT(c, 0xdb422u);
    c.r[0] = (uint32_t)(c.r[5] + 0xCu);
    // 0db425  push eax
    X86_AT(c, 0xdb425u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0db426  call 0xdaed4
    X86_AT(c, 0xdb426u);
    push32(c, 0xdb42bu); x86_call_known(c, 0xdaed4u, f_000daed4); X86_RET(c, 0xdb42bu);
    X86_TICK(c, 12);
    // 0db42b  push dword ptr [0x12ad8]
    X86_AT(c, 0xdb42bu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0x12AD8u))); push32(c, v); }
    // 0db431  call 0xdc2c0
    X86_AT(c, 0xdb431u);
    push32(c, 0xdb436u); x86_call_known(c, 0xdc2c0u, f_000dc2c0); X86_RET(c, 0xdb436u);
    X86_TICK(c, 7);
    // 0db436  call 0xdc2fc
    X86_AT(c, 0xdb436u);
    push32(c, 0xdb43bu); x86_call_known(c, 0xdc2fcu, f_000dc2fc); X86_RET(c, 0xdb43bu);
    X86_TICK(c, 11);
    // 0db43b  lea eax, [ebp + 0xc]
    X86_AT(c, 0xdb43bu);
    c.r[0] = (uint32_t)(c.r[5] + 0xCu);
    // 0db43e  push eax
    X86_AT(c, 0xdb43eu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0db43f  call 0xdaf34
    X86_AT(c, 0xdb43fu);
    push32(c, 0xdb444u); x86_call_known(c, 0xdaf34u, f_000daf34); X86_RET(c, 0xdb444u);
    X86_TICK(c, 6);
    // 0db444  dec dword ptr [ebp - 4]
    X86_AT(c, 0xdb444u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
L_db447:
    X86_TICK(c, 15);
    // 0db447  mov byte ptr [ebp - 0x21], 0
    X86_AT(c, 0xdb447u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFDFu)), 0x0u);
    // 0db44b  movzx eax, byte ptr [ebp + 0x18]
    X86_AT(c, 0xdb44bu);
    c.r[0] = rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x18u)));
    // 0db44f  cmp eax, 0x45
    X86_AT(c, 0xdb44fu);
    (void)x86_sub(c, c.r[0], 0x45u, 0, 4);
    // 0db452  je 0xdb479
    X86_AT(c, 0xdb452u);
    if (x86_cc(c, 4)) { goto L_db479; }
    X86_TICK(c, 7);
    // 0db454  cmp eax, 0x47
    X86_AT(c, 0xdb454u);
    (void)x86_sub(c, c.r[0], 0x47u, 0, 4);
    // 0db457  je 0xdb47e
    X86_AT(c, 0xdb457u);
    if (x86_cc(c, 4)) { goto L_db47e; }
    X86_TICK(c, 7);
    // 0db459  cmp eax, 0x65
    X86_AT(c, 0xdb459u);
    (void)x86_sub(c, c.r[0], 0x65u, 0, 4);
    // 0db45c  je 0xdb479
    X86_AT(c, 0xdb45cu);
    if (x86_cc(c, 4)) { goto L_db479; }
    X86_TICK(c, 7);
    // 0db45e  cmp eax, 0x66
    X86_AT(c, 0xdb45eu);
    (void)x86_sub(c, c.r[0], 0x66u, 0, 4);
    // 0db461  je 0xdb46a
    X86_AT(c, 0xdb461u);
    if (x86_cc(c, 4)) { goto L_db46a; }
    X86_TICK(c, 7);
    // 0db463  cmp eax, 0x67
    X86_AT(c, 0xdb463u);
    (void)x86_sub(c, c.r[0], 0x67u, 0, 4);
    // 0db466  je 0xdb47e
    X86_AT(c, 0xdb466u);
    if (x86_cc(c, 4)) { goto L_db47e; }
    X86_TICK(c, 7);
    // 0db468  jmp 0xdb48f
    X86_AT(c, 0xdb468u);
    goto L_db48f;
L_db46a:
    X86_TICK(c, 17);
    // 0db46a  mov eax, edi
    X86_AT(c, 0xdb46au);
    c.r[0] = c.r[7];
    // 0db46c  add eax, dword ptr [ebp - 4]
    X86_AT(c, 0xdb46cu);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))), 0, 4); }
    // 0db46f  sub edx, edx
    X86_AT(c, 0xdb46fu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[2], 0, 4); }
    // 0db471  cmp eax, edx
    X86_AT(c, 0xdb471u);
    (void)x86_sub(c, c.r[0], c.r[2], 0, 4);
    // 0db473  jl 0xdb476
    X86_AT(c, 0xdb473u);
    if (x86_cc(c, 12)) { goto L_db476; }
    X86_TICK(c, 3);
    // 0db475  xchg edx, eax
    X86_AT(c, 0xdb475u);
    { uint32_t t = c.r[2]; c.r[2] = c.r[0]; c.r[0] = t; }
L_db476:
    X86_TICK(c, 9);
    // 0db476  push edx
    X86_AT(c, 0xdb476u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0db477  jmp 0xdb488
    X86_AT(c, 0xdb477u);
    goto L_db488;
L_db479:
    X86_TICK(c, 9);
    // 0db479  lea eax, [edi + 1]
    X86_AT(c, 0xdb479u);
    c.r[0] = (uint32_t)(c.r[7] + 0x1u);
    // 0db47c  jmp 0xdb487
    X86_AT(c, 0xdb47cu);
    goto L_db487;
L_db47e:
    X86_TICK(c, 11);
    // 0db47e  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0xdb47eu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0db481  cmp edi, eax
    X86_AT(c, 0xdb481u);
    (void)x86_sub(c, c.r[7], c.r[0], 0, 4);
    // 0db483  jl 0xdb487
    X86_AT(c, 0xdb483u);
    if (x86_cc(c, 12)) { goto L_db487; }
    X86_TICK(c, 2);
    // 0db485  mov eax, edi
    X86_AT(c, 0xdb485u);
    c.r[0] = c.r[7];
L_db487:
    X86_TICK(c, 2);
    // 0db487  push eax
    X86_AT(c, 0xdb487u);
    { uint32_t v = c.r[0]; push32(c, v); }
L_db488:
    X86_TICK(c, 9);
    // 0db488  mov ecx, ebp
    X86_AT(c, 0xdb488u);
    c.r[1] = c.r[5];
    // 0db48a  call 0xdb214
    X86_AT(c, 0xdb48au);
    push32(c, 0xdb48fu); x86_call_known(c, 0xdb214u, f_000db214); X86_RET(c, 0xdb48fu);
L_db48f:
    X86_TICK(c, 9);
    // 0db48f  mov ecx, ebp
    X86_AT(c, 0xdb48fu);
    c.r[1] = c.r[5];
    // 0db491  call 0xdb134
    X86_AT(c, 0xdb491u);
    push32(c, 0xdb496u); x86_call_known(c, 0xdb134u, f_000db134); X86_RET(c, 0xdb496u);
    X86_TICK(c, 34);
    // 0db496  mov eax, 0x30303030
    X86_AT(c, 0xdb496u);
    c.r[0] = 0x30303030u;
    // 0db49b  mov edx, dword ptr [ebp + 8]
    X86_AT(c, 0xdb49bu);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0db49e  add edx, 4
    X86_AT(c, 0xdb49eu);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, 0x4u, 0, 4); }
    // 0db4a1  push edi
    X86_AT(c, 0xdb4a1u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0db4a2  mov edi, edx
    X86_AT(c, 0xdb4a2u);
    c.r[7] = c.r[2];
    // 0db4a4  mov ecx, 0x12
    X86_AT(c, 0xdb4a4u);
    c.r[1] = 0x12u;
    // 0db4a9  stosb byte ptr es:[edi], al
    X86_AT(c, 0xdb4a9u);
    x86_string(c, 2, 1, 243, 4, 3);
    // 0db4ab  pop edi
    X86_AT(c, 0xdb4abu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0db4ac  sub ebx, ebx
    X86_AT(c, 0xdb4acu);
    { uint32_t v = c.r[3]; c.r[3] = x86_sub(c, v, c.r[3], 0, 4); }
    // 0db4ae  jmp 0xdb4c2
    X86_AT(c, 0xdb4aeu);
    goto L_db4c2;
L_db4b0:
    X86_TICK(c, 22);
    // 0db4b0  mov eax, dword ptr [ebp - 0x20]
    X86_AT(c, 0xdb4b0u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE0u)));
    // 0db4b3  mov dl, byte ptr [ebp + eax*1 - 0x1c]
    X86_AT(c, 0xdb4b3u);
    s8(c, 2, rd8((c.sbase[2] + (uint32_t)(c.r[5] + c.r[0] + 0xFFFFFFE4u))));
    // 0db4b7  mov ecx, dword ptr [ebp + 8]
    X86_AT(c, 0xdb4b7u);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0db4ba  mov byte ptr [ecx + ebx*1 + 4], dl
    X86_AT(c, 0xdb4bau);
    wr8((c.sbase[3] + (uint32_t)(c.r[1] + c.r[3] + 0x4u)), g8(c, 2));
    // 0db4be  inc dword ptr [ebp - 0x20]
    X86_AT(c, 0xdb4beu);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE0u)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0db4c1  inc ebx
    X86_AT(c, 0xdb4c1u);
    { uint32_t v = c.r[3]; c.r[3] = x86_inc(c, v, 4); }
L_db4c2:
    X86_TICK(c, 12);
    // 0db4c2  cmp dword ptr [ebp - 0x20], 0x12
    X86_AT(c, 0xdb4c2u);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE0u))), 0x12u, 0, 4);
    // 0db4c6  jle 0xdb4b0
    X86_AT(c, 0xdb4c6u);
    if (x86_cc(c, 14)) { X86_POLL(c, 0xdb4b0u); goto L_db4b0; }
    X86_TICK(c, 10);
    // 0db4c8  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0xdb4c8u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0db4cb  mov edx, dword ptr [ebp + 8]
    X86_AT(c, 0xdb4cbu);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0db4ce  mov dword ptr [edx], eax
    X86_AT(c, 0xdb4ceu);
    wr32((c.sbase[3] + (uint32_t)(c.r[2])), c.r[0]);
L_db4d0:
    X86_TICK(c, 28);
    // 0db4d0  pop edi
    X86_AT(c, 0xdb4d0u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0db4d1  pop esi
    X86_AT(c, 0xdb4d1u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0db4d2  pop ebx
    X86_AT(c, 0xdb4d2u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0db4d3  leave 
    X86_AT(c, 0xdb4d3u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0db4d4  ret 0x20
    X86_AT(c, 0xdb4d4u);
    c.eip = pop32(c); c.r[4] += 0x20u; return;
    x86_fault(c, 0xdb2e4u, "ran off the end of a function");
}
void f_000db4ec(X86Cpu& c) {
    X86_TICK(c, 26);
    // 0db4ec  push ebp
    X86_AT(c, 0xdb4ecu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0db4ed  mov ebp, esp
    X86_AT(c, 0xdb4edu);
    c.r[5] = c.r[4];
    // 0db4ef  push dword ptr [ebp + 0x10]
    X86_AT(c, 0xdb4efu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u))); push32(c, v); }
    // 0db4f2  push dword ptr [ebp + 0xc]
    X86_AT(c, 0xdb4f2u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))); push32(c, v); }
    // 0db4f5  push dword ptr [ebp + 8]
    X86_AT(c, 0xdb4f5u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, v); }
    // 0db4f8  call 0xd9124
    X86_AT(c, 0xdb4f8u);
    push32(c, 0xdb4fdu); x86_call_known(c, 0xd9124u, f_000d9124); X86_RET(c, 0xdb4fdu);
    X86_TICK(c, 11);
    // 0db4fd  sub esp, 0xc
    X86_AT(c, 0xdb4fdu);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, 0xCu, 0, 4); }
    // 0db500  push esp
    X86_AT(c, 0xdb500u);
    { uint32_t v = c.r[4]; push32(c, v); }
    // 0db501  call 0xdaf34
    X86_AT(c, 0xdb501u);
    push32(c, 0xdb506u); x86_call_known(c, 0xdaf34u, f_000daf34); X86_RET(c, 0xdb506u);
    X86_TICK(c, 7);
    // 0db506  call 0xdbc18
    X86_AT(c, 0xdb506u);
    push32(c, 0xdb50bu); x86_call_known(c, 0xdbc18u, f_000dbc18); X86_RET(c, 0xdb50bu);
    X86_TICK(c, 16);
    // 0db50b  leave 
    X86_AT(c, 0xdb50bu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0db50c  ret 0xc
    X86_AT(c, 0xdb50cu);
    c.eip = pop32(c); c.r[4] += 0xCu; return;
    x86_fault(c, 0xdb4ecu, "ran off the end of a function");
}
void f_000db514(X86Cpu& c) {
    X86_TICK(c, 17);
    // 0db514  push ebp
    X86_AT(c, 0xdb514u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0db515  mov ebp, esp
    X86_AT(c, 0xdb515u);
    c.r[5] = c.r[4];
    // 0db517  push ecx
    X86_AT(c, 0xdb517u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 0db518  mov eax, dword ptr [0xb437c]
    X86_AT(c, 0xdb518u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xB437Cu)));
    // 0db51d  cmp eax, 0xffff
    X86_AT(c, 0xdb51du);
    (void)x86_sub(c, c.r[0], 0xFFFFu, 0, 4);
    // 0db522  je 0xdb534
    X86_AT(c, 0xdb522u);
    if (x86_cc(c, 4)) { goto L_db534; }
    X86_TICK(c, 11);
    // 0db524  mov edx, dword ptr [0xb48b0]
    X86_AT(c, 0xdb524u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(0xB48B0u)));
    // 0db52a  cmp eax, edx
    X86_AT(c, 0xdb52au);
    (void)x86_sub(c, c.r[0], c.r[2], 0, 4);
    // 0db52c  jbe 0xdb534
    X86_AT(c, 0xdb52cu);
    if (x86_cc(c, 6)) { goto L_db534; }
    X86_TICK(c, 9);
    // 0db52e  push edx
    X86_AT(c, 0xdb52eu);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0db52f  call 0xd949c
    X86_AT(c, 0xdb52fu);
    push32(c, 0xdb534u); x86_call_known(c, 0xd949cu, f_000d949c); X86_RET(c, 0xdb534u);
L_db534:
    X86_TICK(c, 18);
    // 0db534  mov byte ptr [0xb48a8], 1
    X86_AT(c, 0xdb534u);
    wr8((c.sbase[3] + (uint32_t)(0xB48A8u)), 0x1u);
    // 0db53b  leave 
    X86_AT(c, 0xdb53bu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0db53c  ret 
    X86_AT(c, 0xdb53cu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xdb514u, "ran off the end of a function");
}
void f_000db548(X86Cpu& c) {
    X86_TICK(c, 23);
    // 0db548  push ebp
    X86_AT(c, 0xdb548u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0db549  mov ebp, esp
    X86_AT(c, 0xdb549u);
    c.r[5] = c.r[4];
    // 0db54b  push ecx
    X86_AT(c, 0xdb54bu);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 0db54c  inc dword ptr [0xb4388]
    X86_AT(c, 0xdb54cu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xB4388u)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0db552  mov eax, dword ptr [0xb437c]
    X86_AT(c, 0xdb552u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xB437Cu)));
    // 0db557  cmp eax, 0xffff
    X86_AT(c, 0xdb557u);
    (void)x86_sub(c, c.r[0], 0xFFFFu, 0, 4);
    // 0db55c  je 0xdb569
    X86_AT(c, 0xdb55cu);
    if (x86_cc(c, 4)) { goto L_db569; }
    X86_TICK(c, 7);
    // 0db55e  cmp eax, 1
    X86_AT(c, 0xdb55eu);
    (void)x86_sub(c, c.r[0], 0x1u, 0, 4);
    // 0db561  jb 0xdb569
    X86_AT(c, 0xdb561u);
    if (x86_cc(c, 2)) { goto L_db569; }
    X86_TICK(c, 6);
    // 0db563  dec dword ptr [0xb437c]
    X86_AT(c, 0xdb563u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xB437Cu)); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
L_db569:
    X86_TICK(c, 16);
    // 0db569  leave 
    X86_AT(c, 0xdb569u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0db56a  ret 
    X86_AT(c, 0xdb56au);
    c.eip = pop32(c); return;
    x86_fault(c, 0xdb548u, "ran off the end of a function");
}
void f_000db578(X86Cpu& c) {
    X86_TICK(c, 27);
    // 0db578  push ebp
    X86_AT(c, 0xdb578u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0db579  mov ebp, esp
    X86_AT(c, 0xdb579u);
    c.r[5] = c.r[4];
    // 0db57b  push ecx
    X86_AT(c, 0xdb57bu);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 0db57c  push ebx
    X86_AT(c, 0xdb57cu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0db57d  mov dword ptr [0xb48ac], 0
    X86_AT(c, 0xdb57du);
    wr32((c.sbase[3] + (uint32_t)(0xB48ACu)), 0x0u);
    // 0db587  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0xdb587u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0db58a  add eax, 8
    X86_AT(c, 0xdb58au);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0x8u, 0, 4); }
    // 0db58d  push eax
    X86_AT(c, 0xdb58du);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0db58e  mov ebx, eax
    X86_AT(c, 0xdb58eu);
    c.r[3] = c.r[0];
    // 0db590  call 0xdaed4
    X86_AT(c, 0xdb590u);
    push32(c, 0xdb595u); x86_call_known(c, 0xdaed4u, f_000daed4); X86_RET(c, 0xdb595u);
    X86_TICK(c, 12);
    // 0db595  push dword ptr [0x12ac0]
    X86_AT(c, 0xdb595u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0x12AC0u))); push32(c, v); }
    // 0db59b  call 0xdc2c0
    X86_AT(c, 0xdb59bu);
    push32(c, 0xdb5a0u); x86_call_known(c, 0xdc2c0u, f_000dc2c0); X86_RET(c, 0xdb5a0u);
    X86_TICK(c, 7);
    // 0db5a0  call 0xdb0f8
    X86_AT(c, 0xdb5a0u);
    push32(c, 0xdb5a5u); x86_call_known(c, 0xdb0f8u, f_000db0f8); X86_RET(c, 0xdb5a5u);
    X86_TICK(c, 5);
    // 0db5a5  jae 0xdb5c1
    X86_AT(c, 0xdb5a5u);
    if (x86_cc(c, 3)) { goto L_db5c1; }
    X86_TICK(c, 9);
    // 0db5a7  push ebx
    X86_AT(c, 0xdb5a7u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0db5a8  call 0xdaed4
    X86_AT(c, 0xdb5a8u);
    push32(c, 0xdb5adu); x86_call_known(c, 0xdaed4u, f_000daed4); X86_RET(c, 0xdb5adu);
    X86_TICK(c, 7);
    // 0db5ad  call 0xdafac
    X86_AT(c, 0xdb5adu);
    push32(c, 0xdb5b2u); x86_call_known(c, 0xdafacu, f_000dafac); X86_RET(c, 0xdb5b2u);
    X86_TICK(c, 9);
    // 0db5b2  push ebx
    X86_AT(c, 0xdb5b2u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0db5b3  call 0xdaf34
    X86_AT(c, 0xdb5b3u);
    push32(c, 0xdb5b8u); x86_call_known(c, 0xdaf34u, f_000daf34); X86_RET(c, 0xdb5b8u);
    X86_TICK(c, 9);
    // 0db5b8  mov byte ptr [0xb48a4], 0x2d
    X86_AT(c, 0xdb5b8u);
    wr8((c.sbase[3] + (uint32_t)(0xB48A4u)), 0x2Du);
    // 0db5bf  jmp 0xdb5e3
    X86_AT(c, 0xdb5bfu);
    goto L_db5e3;
L_db5c1:
    X86_TICK(c, 12);
    // 0db5c1  test byte ptr [0xb4378], 2
    X86_AT(c, 0xdb5c1u);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(0xB4378u))) & 0x2u, 1);
    // 0db5c8  je 0xdb5d3
    X86_AT(c, 0xdb5c8u);
    if (x86_cc(c, 4)) { goto L_db5d3; }
    X86_TICK(c, 9);
    // 0db5ca  mov byte ptr [0xb48a4], 0x2b
    X86_AT(c, 0xdb5cau);
    wr8((c.sbase[3] + (uint32_t)(0xB48A4u)), 0x2Bu);
    // 0db5d1  jmp 0xdb5e3
    X86_AT(c, 0xdb5d1u);
    goto L_db5e3;
L_db5d3:
    X86_TICK(c, 12);
    // 0db5d3  test byte ptr [0xb4378], 4
    X86_AT(c, 0xdb5d3u);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(0xB4378u))) & 0x4u, 1);
    // 0db5da  je 0xdb5f4
    X86_AT(c, 0xdb5dau);
    if (x86_cc(c, 4)) { goto L_db5f4; }
    X86_TICK(c, 2);
    // 0db5dc  mov byte ptr [0xb48a4], 0x20
    X86_AT(c, 0xdb5dcu);
    wr8((c.sbase[3] + (uint32_t)(0xB48A4u)), 0x20u);
L_db5e3:
    X86_TICK(c, 11);
    // 0db5e3  mov dword ptr [0xb48ac], 1
    X86_AT(c, 0xdb5e3u);
    wr32((c.sbase[3] + (uint32_t)(0xB48ACu)), 0x1u);
    // 0db5ed  mov ecx, ebp
    X86_AT(c, 0xdb5edu);
    c.r[1] = c.r[5];
    // 0db5ef  call 0xdb548
    X86_AT(c, 0xdb5efu);
    push32(c, 0xdb5f4u); x86_call_known(c, 0xdb548u, f_000db548); X86_RET(c, 0xdb5f4u);
L_db5f4:
    X86_TICK(c, 20);
    // 0db5f4  pop ebx
    X86_AT(c, 0xdb5f4u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0db5f5  leave 
    X86_AT(c, 0xdb5f5u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0db5f6  ret 
    X86_AT(c, 0xdb5f6u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xdb578u, "ran off the end of a function");
}
void f_000db610(X86Cpu& c) {
    X86_TICK(c, 27);
    // 0db610  push ebp
    X86_AT(c, 0xdb610u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0db611  mov ebp, esp
    X86_AT(c, 0xdb611u);
    c.r[5] = c.r[4];
    // 0db613  push ecx
    X86_AT(c, 0xdb613u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 0db614  push esi
    X86_AT(c, 0xdb614u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0db615  push edi
    X86_AT(c, 0xdb615u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0db616  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0xdb616u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0db619  mov esi, dword ptr [ebp + 0xc]
    X86_AT(c, 0xdb619u);
    c.r[6] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0db61c  mov ecx, edi
    X86_AT(c, 0xdb61cu);
    c.r[1] = c.r[7];
    // 0db61e  jmp 0xdb621
    X86_AT(c, 0xdb61eu);
    goto L_db621;
L_db620:
    X86_TICK(c, 2);
    // 0db620  dec ecx
    X86_AT(c, 0xdb620u);
    { uint32_t v = c.r[1]; c.r[1] = x86_dec(c, v, 4); }
L_db621:
    X86_TICK(c, 7);
    // 0db621  cmp esi, ecx
    X86_AT(c, 0xdb621u);
    (void)x86_sub(c, c.r[6], c.r[1], 0, 4);
    // 0db623  jae 0xdb62e
    X86_AT(c, 0xdb623u);
    if (x86_cc(c, 3)) { goto L_db62e; }
    X86_TICK(c, 12);
    // 0db625  cmp byte ptr [ecx + 0xb4882], 0x30
    X86_AT(c, 0xdb625u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[1] + 0xB4882u))), 0x30u, 0, 1);
    // 0db62c  je 0xdb620
    X86_AT(c, 0xdb62cu);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xdb620u); goto L_db620; }
L_db62e:
    X86_TICK(c, 9);
    // 0db62e  lea eax, [esi + 1]
    X86_AT(c, 0xdb62eu);
    c.r[0] = (uint32_t)(c.r[6] + 0x1u);
    // 0db631  cmp eax, ecx
    X86_AT(c, 0xdb631u);
    (void)x86_sub(c, c.r[0], c.r[1], 0, 4);
    // 0db633  jne 0xdb648
    X86_AT(c, 0xdb633u);
    if (x86_cc(c, 5)) { goto L_db648; }
    X86_TICK(c, 12);
    // 0db635  test byte ptr [0xb4378], 8
    X86_AT(c, 0xdb635u);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(0xB4378u))) & 0x8u, 1);
    // 0db63c  jne 0xdb648
    X86_AT(c, 0xdb63cu);
    if (x86_cc(c, 5)) { goto L_db648; }
    X86_TICK(c, 12);
    // 0db63e  cmp byte ptr [esi + 0xb4883], 0x2e
    X86_AT(c, 0xdb63eu);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[6] + 0xB4883u))), 0x2Eu, 0, 1);
    // 0db645  jne 0xdb648
    X86_AT(c, 0xdb645u);
    if (x86_cc(c, 5)) { goto L_db648; }
    X86_TICK(c, 2);
    // 0db647  dec ecx
    X86_AT(c, 0xdb647u);
    { uint32_t v = c.r[1]; c.r[1] = x86_dec(c, v, 4); }
L_db648:
    X86_TICK(c, 43);
    // 0db648  lea eax, [ecx - 1]
    X86_AT(c, 0xdb648u);
    c.r[0] = (uint32_t)(c.r[1] + 0xFFFFFFFFu);
    // 0db64b  mov edx, dword ptr [ebp - 4]
    X86_AT(c, 0xdb64bu);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0db64e  mov dword ptr [edx - 0x10], eax
    X86_AT(c, 0xdb64eu);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xFFFFFFF0u)), c.r[0]);
    // 0db651  mov eax, edi
    X86_AT(c, 0xdb651u);
    c.r[0] = c.r[7];
    // 0db653  sub eax, ecx
    X86_AT(c, 0xdb653u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[1], 0, 4); }
    // 0db655  sub dword ptr [0xb48b0], eax
    X86_AT(c, 0xdb655u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xB48B0u)); uint32_t v = rd32(ea); wr32(ea, x86_sub(c, v, c.r[0], 0, 4)); }
    // 0db65b  pop edi
    X86_AT(c, 0xdb65bu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0db65c  pop esi
    X86_AT(c, 0xdb65cu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0db65d  leave 
    X86_AT(c, 0xdb65du);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0db65e  ret 8
    X86_AT(c, 0xdb65eu);
    c.eip = pop32(c); c.r[4] += 0x8u; return;
    x86_fault(c, 0xdb610u, "ran off the end of a function");
}
void f_000db67c(X86Cpu& c) {
    X86_TICK(c, 18);
    // 0db67c  push ebp
    X86_AT(c, 0xdb67cu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0db67d  mov ebp, esp
    X86_AT(c, 0xdb67du);
    c.r[5] = c.r[4];
    // 0db67f  push ecx
    X86_AT(c, 0xdb67fu);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 0db680  test byte ptr [0xb4378], 1
    X86_AT(c, 0xdb680u);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(0xB4378u))) & 0x1u, 1);
    // 0db687  jne 0xdb69d
    X86_AT(c, 0xdb687u);
    if (x86_cc(c, 5)) { goto L_db69d; }
    X86_TICK(c, 12);
    // 0db689  test byte ptr [0xb4378], 0x10
    X86_AT(c, 0xdb689u);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(0xB4378u))) & 0x10u, 1);
    // 0db690  jne 0xdb69d
    X86_AT(c, 0xdb690u);
    if (x86_cc(c, 5)) { goto L_db69d; }
    X86_TICK(c, 15);
    // 0db692  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0xdb692u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0db695  mov ecx, dword ptr [eax - 4]
    X86_AT(c, 0xdb695u);
    c.r[1] = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0xFFFFFFFCu)));
    // 0db698  call 0xdb514
    X86_AT(c, 0xdb698u);
    push32(c, 0xdb69du); x86_call_known(c, 0xdb514u, f_000db514); X86_RET(c, 0xdb69du);
L_db69d:
    X86_TICK(c, 11);
    // 0db69d  mov eax, dword ptr [0xb48ac]
    X86_AT(c, 0xdb69du);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xB48ACu)));
    // 0db6a2  and eax, eax
    X86_AT(c, 0xdb6a2u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0db6a4  je 0xdb6b8
    X86_AT(c, 0xdb6a4u);
    if (x86_cc(c, 4)) { goto L_db6b8; }
    X86_TICK(c, 15);
    // 0db6a6  push eax
    X86_AT(c, 0xdb6a6u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0db6a7  push 0xb48a4
    X86_AT(c, 0xdb6a7u);
    { uint32_t v = 0xB48A4u; push32(c, v); }
    // 0db6ac  mov ecx, dword ptr [0xb4390]
    X86_AT(c, 0xdb6acu);
    c.r[1] = rd32((c.sbase[3] + (uint32_t)(0xB4390u)));
    // 0db6b2  call dword ptr [0xb438c]
    X86_AT(c, 0xdb6b2u);
    { uint32_t t = rd32((c.sbase[3] + (uint32_t)(0xB438Cu))); push32(c, 0xdb6b8u); x86_call(c, t); X86_RET(c, 0xdb6b8u); }
L_db6b8:
    X86_TICK(c, 12);
    // 0db6b8  test byte ptr [0xb4378], 1
    X86_AT(c, 0xdb6b8u);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(0xB4378u))) & 0x1u, 1);
    // 0db6bf  jne 0xdb6d5
    X86_AT(c, 0xdb6bfu);
    if (x86_cc(c, 5)) { goto L_db6d5; }
    X86_TICK(c, 12);
    // 0db6c1  cmp byte ptr [0xb48a8], 0
    X86_AT(c, 0xdb6c1u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0xB48A8u))), 0x0u, 0, 1);
    // 0db6c8  jne 0xdb6d5
    X86_AT(c, 0xdb6c8u);
    if (x86_cc(c, 5)) { goto L_db6d5; }
    X86_TICK(c, 15);
    // 0db6ca  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0xdb6cau);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0db6cd  mov ecx, dword ptr [eax - 4]
    X86_AT(c, 0xdb6cdu);
    c.r[1] = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0xFFFFFFFCu)));
    // 0db6d0  call 0xdb514
    X86_AT(c, 0xdb6d0u);
    push32(c, 0xdb6d5u); x86_call_known(c, 0xdb514u, f_000db514); X86_RET(c, 0xdb6d5u);
L_db6d5:
    X86_TICK(c, 16);
    // 0db6d5  leave 
    X86_AT(c, 0xdb6d5u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0db6d6  ret 
    X86_AT(c, 0xdb6d6u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xdb67cu, "ran off the end of a function");
}
void f_000db6e0(X86Cpu& c) {
    X86_TICK(c, 24);
    // 0db6e0  push ebp
    X86_AT(c, 0xdb6e0u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0db6e1  mov ebp, esp
    X86_AT(c, 0xdb6e1u);
    c.r[5] = c.r[4];
    // 0db6e3  push ecx
    X86_AT(c, 0xdb6e3u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 0db6e4  push ebx
    X86_AT(c, 0xdb6e4u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0db6e5  push esi
    X86_AT(c, 0xdb6e5u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0db6e6  push edi
    X86_AT(c, 0xdb6e6u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0db6e7  cmp dword ptr [0xb48b4], 0
    X86_AT(c, 0xdb6e7u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xB48B4u))), 0x0u, 0, 4);
    // 0db6ee  jle 0xdb81f
    X86_AT(c, 0xdb6eeu);
    if (x86_cc(c, 14)) { goto L_db81f; }
    X86_TICK(c, 12);
    // 0db6f4  cmp byte ptr [0xb48cb], 0
    X86_AT(c, 0xdb6f4u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0xB48CBu))), 0x0u, 0, 1);
    // 0db6fb  je 0xdb70e
    X86_AT(c, 0xdb6fbu);
    if (x86_cc(c, 4)) { goto L_db70e; }
    X86_TICK(c, 8);
    // 0db6fd  mov byte ptr [0xb4884], 0x2e
    X86_AT(c, 0xdb6fdu);
    wr8((c.sbase[3] + (uint32_t)(0xB4884u)), 0x2Eu);
    // 0db704  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0xdb704u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0db707  mov dword ptr [eax - 0x10], 1
    X86_AT(c, 0xdb707u);
    wr32((c.sbase[3] + (uint32_t)(c.r[0] + 0xFFFFFFF0u)), 0x1u);
L_db70e:
    X86_TICK(c, 11);
    // 0db70e  mov eax, dword ptr [0xb4380]
    X86_AT(c, 0xdb70eu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xB4380u)));
    // 0db713  and eax, eax
    X86_AT(c, 0xdb713u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0db715  je 0xdb78d
    X86_AT(c, 0xdb715u);
    if (x86_cc(c, 4)) { goto L_db78d; }
    X86_TICK(c, 19);
    // 0db71b  mov edx, dword ptr [ebp - 4]
    X86_AT(c, 0xdb71bu);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0db71e  mov ecx, dword ptr [edx - 8]
    X86_AT(c, 0xdb71eu);
    c.r[1] = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xFFFFFFF8u)));
    // 0db721  mov esi, dword ptr [0xb48b4]
    X86_AT(c, 0xdb721u);
    c.r[6] = rd32((c.sbase[3] + (uint32_t)(0xB48B4u)));
    // 0db727  cmp esi, ecx
    X86_AT(c, 0xdb727u);
    (void)x86_sub(c, c.r[6], c.r[1], 0, 4);
    // 0db729  jge 0xdb767
    X86_AT(c, 0xdb729u);
    if (x86_cc(c, 13)) { goto L_db767; }
    X86_TICK(c, 9);
    // 0db72b  sub ecx, esi
    X86_AT(c, 0xdb72bu);
    { uint32_t v = c.r[1]; c.r[1] = x86_sub(c, v, c.r[6], 0, 4); }
    // 0db72d  cmp ecx, eax
    X86_AT(c, 0xdb72du);
    (void)x86_sub(c, c.r[1], c.r[0], 0, 4);
    // 0db72f  jb 0xdb733
    X86_AT(c, 0xdb72fu);
    if (x86_cc(c, 2)) { goto L_db733; }
    X86_TICK(c, 2);
    // 0db731  mov ecx, eax
    X86_AT(c, 0xdb731u);
    c.r[1] = c.r[0];
L_db733:
    X86_TICK(c, 44);
    // 0db733  mov edi, ecx
    X86_AT(c, 0xdb733u);
    c.r[7] = c.r[1];
    // 0db735  add esi, 0xb48b8
    X86_AT(c, 0xdb735u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0xB48B8u, 0, 4); }
    // 0db73b  mov ebx, 0xb4885
    X86_AT(c, 0xdb73bu);
    c.r[3] = 0xB4885u;
    // 0db740  push edi
    X86_AT(c, 0xdb740u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0db741  mov edi, ebx
    X86_AT(c, 0xdb741u);
    c.r[7] = c.r[3];
    // 0db743  movsb byte ptr es:[edi], byte ptr [esi]
    X86_AT(c, 0xdb743u);
    x86_string(c, 0, 1, 243, 4, 3);
    // 0db745  pop edi
    X86_AT(c, 0xdb745u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0db746  lea ecx, [edi + 1]
    X86_AT(c, 0xdb746u);
    c.r[1] = (uint32_t)(c.r[7] + 0x1u);
    // 0db749  mov dword ptr [edx - 0x10], ecx
    X86_AT(c, 0xdb749u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xFFFFFFF0u)), c.r[1]);
    // 0db74c  sub dword ptr [0xb4380], edi
    X86_AT(c, 0xdb74cu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xB4380u)); uint32_t v = rd32(ea); wr32(ea, x86_sub(c, v, c.r[7], 0, 4)); }
    // 0db752  cmp byte ptr [edx - 9], 0
    X86_AT(c, 0xdb752u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[2] + 0xFFFFFFF7u))), 0x0u, 0, 1);
    // 0db756  je 0xdb7a0
    X86_AT(c, 0xdb756u);
    if (x86_cc(c, 4)) { goto L_db7a0; }
    X86_TICK(c, 15);
    // 0db758  push 1
    X86_AT(c, 0xdb758u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0db75a  lea eax, [edi + 2]
    X86_AT(c, 0xdb75au);
    c.r[0] = (uint32_t)(c.r[7] + 0x2u);
    // 0db75d  push eax
    X86_AT(c, 0xdb75du);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0db75e  mov ecx, edx
    X86_AT(c, 0xdb75eu);
    c.r[1] = c.r[2];
    // 0db760  call 0xdb610
    X86_AT(c, 0xdb760u);
    push32(c, 0xdb765u); x86_call_known(c, 0xdb610u, f_000db610); X86_RET(c, 0xdb765u);
    X86_TICK(c, 7);
    // 0db765  jmp 0xdb7a0
    X86_AT(c, 0xdb765u);
    goto L_db7a0;
L_db767:
    X86_TICK(c, 16);
    // 0db767  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0xdb767u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0db76a  cmp byte ptr [eax - 9], 0
    X86_AT(c, 0xdb76au);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[0] + 0xFFFFFFF7u))), 0x0u, 0, 1);
    // 0db76e  je 0xdb7a0
    X86_AT(c, 0xdb76eu);
    if (x86_cc(c, 4)) { goto L_db7a0; }
    X86_TICK(c, 12);
    // 0db770  test byte ptr [0xb4378], 8
    X86_AT(c, 0xdb770u);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(0xB4378u))) & 0x8u, 1);
    // 0db777  jne 0xdb7a0
    X86_AT(c, 0xdb777u);
    if (x86_cc(c, 5)) { goto L_db7a0; }
    X86_TICK(c, 12);
    // 0db779  cmp dword ptr [0xb437c], 0xffff
    X86_AT(c, 0xdb779u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xB437Cu))), 0xFFFFu, 0, 4);
    // 0db783  je 0xdb796
    X86_AT(c, 0xdb783u);
    if (x86_cc(c, 4)) { goto L_db796; }
    X86_TICK(c, 13);
    // 0db785  dec dword ptr [0xb48b0]
    X86_AT(c, 0xdb785u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xB48B0u)); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 0db78b  jmp 0xdb796
    X86_AT(c, 0xdb78bu);
    goto L_db796;
L_db78d:
    X86_TICK(c, 12);
    // 0db78d  test byte ptr [0xb4378], 8
    X86_AT(c, 0xdb78du);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(0xB4378u))) & 0x8u, 1);
    // 0db794  jne 0xdb7a0
    X86_AT(c, 0xdb794u);
    if (x86_cc(c, 5)) { goto L_db7a0; }
L_db796:
    X86_TICK(c, 6);
    // 0db796  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0xdb796u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0db799  mov dword ptr [eax - 0x10], 0
    X86_AT(c, 0xdb799u);
    wr32((c.sbase[3] + (uint32_t)(c.r[0] + 0xFFFFFFF0u)), 0x0u);
L_db7a0:
    X86_TICK(c, 13);
    // 0db7a0  mov ecx, dword ptr [ebp - 4]
    X86_AT(c, 0xdb7a0u);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0db7a3  mov ebx, ecx
    X86_AT(c, 0xdb7a3u);
    c.r[3] = c.r[1];
    // 0db7a5  call 0xdb67c
    X86_AT(c, 0xdb7a5u);
    push32(c, 0xdb7aau); x86_call_known(c, 0xdb67cu, f_000db67c); X86_RET(c, 0xdb7aau);
    X86_TICK(c, 15);
    // 0db7aa  mov eax, dword ptr [ebx - 8]
    X86_AT(c, 0xdb7aau);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0xFFFFFFF8u)));
    // 0db7ad  mov edx, dword ptr [0xb48b4]
    X86_AT(c, 0xdb7adu);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(0xB48B4u)));
    // 0db7b3  cmp edx, eax
    X86_AT(c, 0xdb7b3u);
    (void)x86_sub(c, c.r[2], c.r[0], 0, 4);
    // 0db7b5  jl 0xdb7b8
    X86_AT(c, 0xdb7b5u);
    if (x86_cc(c, 12)) { goto L_db7b8; }
    X86_TICK(c, 3);
    // 0db7b7  xchg edx, eax
    X86_AT(c, 0xdb7b7u);
    { uint32_t t = c.r[2]; c.r[2] = c.r[0]; c.r[0] = t; }
L_db7b8:
    X86_TICK(c, 15);
    // 0db7b8  push edx
    X86_AT(c, 0xdb7b8u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0db7b9  push 0xb48b8
    X86_AT(c, 0xdb7b9u);
    { uint32_t v = 0xB48B8u; push32(c, v); }
    // 0db7be  mov ecx, dword ptr [0xb4390]
    X86_AT(c, 0xdb7beu);
    c.r[1] = rd32((c.sbase[3] + (uint32_t)(0xB4390u)));
    // 0db7c4  call dword ptr [0xb438c]
    X86_AT(c, 0xdb7c4u);
    { uint32_t t = rd32((c.sbase[3] + (uint32_t)(0xB438Cu))); push32(c, 0xdb7cau); x86_call(c, t); X86_RET(c, 0xdb7cau); }
    X86_TICK(c, 15);
    // 0db7ca  mov eax, dword ptr [ebx - 8]
    X86_AT(c, 0xdb7cau);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0xFFFFFFF8u)));
    // 0db7cd  mov edx, dword ptr [0xb48b4]
    X86_AT(c, 0xdb7cdu);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(0xB48B4u)));
    // 0db7d3  cmp edx, eax
    X86_AT(c, 0xdb7d3u);
    (void)x86_sub(c, c.r[2], c.r[0], 0, 4);
    // 0db7d5  jle 0xdb7e4
    X86_AT(c, 0xdb7d5u);
    if (x86_cc(c, 14)) { goto L_db7e4; }
    X86_TICK(c, 13);
    // 0db7d7  sub edx, eax
    X86_AT(c, 0xdb7d7u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0db7d9  push edx
    X86_AT(c, 0xdb7d9u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0db7da  push 0xb4394
    X86_AT(c, 0xdb7dau);
    { uint32_t v = 0xB4394u; push32(c, v); }
    // 0db7df  call 0xd9454
    X86_AT(c, 0xdb7dfu);
    push32(c, 0xdb7e4u); x86_call_known(c, 0xd9454u, f_000d9454); X86_RET(c, 0xdb7e4u);
L_db7e4:
    X86_TICK(c, 15);
    // 0db7e4  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0xdb7e4u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0db7e7  mov eax, dword ptr [eax - 0x10]
    X86_AT(c, 0xdb7e7u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0xFFFFFFF0u)));
    // 0db7ea  and eax, eax
    X86_AT(c, 0xdb7eau);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0db7ec  je 0xdb800
    X86_AT(c, 0xdb7ecu);
    if (x86_cc(c, 4)) { goto L_db800; }
    X86_TICK(c, 15);
    // 0db7ee  push eax
    X86_AT(c, 0xdb7eeu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0db7ef  push 0xb4884
    X86_AT(c, 0xdb7efu);
    { uint32_t v = 0xB4884u; push32(c, v); }
    // 0db7f4  mov ecx, dword ptr [0xb4390]
    X86_AT(c, 0xdb7f4u);
    c.r[1] = rd32((c.sbase[3] + (uint32_t)(0xB4390u)));
    // 0db7fa  call dword ptr [0xb438c]
    X86_AT(c, 0xdb7fau);
    { uint32_t t = rd32((c.sbase[3] + (uint32_t)(0xB438Cu))); push32(c, 0xdb800u); x86_call(c, t); X86_RET(c, 0xdb800u); }
L_db800:
    X86_TICK(c, 11);
    // 0db800  mov eax, dword ptr [0xb4380]
    X86_AT(c, 0xdb800u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xB4380u)));
    // 0db805  and eax, eax
    X86_AT(c, 0xdb805u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0db807  je 0xdb963
    X86_AT(c, 0xdb807u);
    if (x86_cc(c, 4)) { goto L_db963; }
    X86_TICK(c, 16);
    // 0db80d  mov edx, dword ptr [ebp - 4]
    X86_AT(c, 0xdb80du);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0db810  cmp byte ptr [edx - 9], 0
    X86_AT(c, 0xdb810u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[2] + 0xFFFFFFF7u))), 0x0u, 0, 1);
    // 0db814  jne 0xdb963
    X86_AT(c, 0xdb814u);
    if (x86_cc(c, 5)) { goto L_db963; }
    X86_TICK(c, 7);
    // 0db81a  jmp 0xdb958
    X86_AT(c, 0xdb81au);
    goto L_db958;
L_db81f:
    X86_TICK(c, 11);
    // 0db81f  mov eax, dword ptr [0xb48b4]
    X86_AT(c, 0xdb81fu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xB48B4u)));
    // 0db824  and eax, eax
    X86_AT(c, 0xdb824u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0db826  jge 0xdb82a
    X86_AT(c, 0xdb826u);
    if (x86_cc(c, 13)) { goto L_db82a; }
    X86_TICK(c, 2);
    // 0db828  neg eax
    X86_AT(c, 0xdb828u);
    { uint32_t v = c.r[0]; c.r[0] = x86_neg(c, v, 4); }
L_db82a:
    X86_TICK(c, 13);
    // 0db82a  mov dword ptr [0xb48b4], eax
    X86_AT(c, 0xdb82au);
    wr32((c.sbase[3] + (uint32_t)(0xB48B4u)), c.r[0]);
    // 0db82f  mov edx, dword ptr [0xb4380]
    X86_AT(c, 0xdb82fu);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(0xB4380u)));
    // 0db835  and edx, edx
    X86_AT(c, 0xdb835u);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & c.r[2], 4); }
    // 0db837  je 0xdb869
    X86_AT(c, 0xdb837u);
    if (x86_cc(c, 4)) { goto L_db869; }
    X86_TICK(c, 7);
    // 0db839  cmp edx, eax
    X86_AT(c, 0xdb839u);
    (void)x86_sub(c, c.r[2], c.r[0], 0, 4);
    // 0db83b  jle 0xdb860
    X86_AT(c, 0xdb83bu);
    if (x86_cc(c, 14)) { goto L_db860; }
    X86_TICK(c, 21);
    // 0db83d  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0xdb83du);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0db840  mov eax, dword ptr [eax - 4]
    X86_AT(c, 0xdb840u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0xFFFFFFFCu)));
    // 0db843  add eax, 8
    X86_AT(c, 0xdb843u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0x8u, 0, 4); }
    // 0db846  push eax
    X86_AT(c, 0xdb846u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0db847  mov ebx, eax
    X86_AT(c, 0xdb847u);
    c.r[3] = c.r[0];
    // 0db849  call 0xdaed4
    X86_AT(c, 0xdb849u);
    push32(c, 0xdb84eu); x86_call_known(c, 0xdaed4u, f_000daed4); X86_RET(c, 0xdb84eu);
    X86_TICK(c, 12);
    // 0db84e  push dword ptr [0x12ac0]
    X86_AT(c, 0xdb84eu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0x12AC0u))); push32(c, v); }
    // 0db854  call 0xdc2c0
    X86_AT(c, 0xdb854u);
    push32(c, 0xdb859u); x86_call_known(c, 0xdc2c0u, f_000dc2c0); X86_RET(c, 0xdb859u);
    X86_TICK(c, 7);
    // 0db859  call 0xdb0f8
    X86_AT(c, 0xdb859u);
    push32(c, 0xdb85eu); x86_call_known(c, 0xdb0f8u, f_000db0f8); X86_RET(c, 0xdb85eu);
    X86_TICK(c, 5);
    // 0db85e  jne 0xdb8bd
    X86_AT(c, 0xdb85eu);
    if (x86_cc(c, 5)) { goto L_db8bd; }
L_db860:
    X86_TICK(c, 16);
    // 0db860  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0xdb860u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0db863  cmp byte ptr [eax - 9], 0
    X86_AT(c, 0xdb863u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[0] + 0xFFFFFFF7u))), 0x0u, 0, 1);
    // 0db867  je 0xdb89c
    X86_AT(c, 0xdb867u);
    if (x86_cc(c, 4)) { goto L_db89c; }
L_db869:
    X86_TICK(c, 12);
    // 0db869  test byte ptr [0xb4378], 8
    X86_AT(c, 0xdb869u);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(0xB4378u))) & 0x8u, 1);
    // 0db870  jne 0xdb890
    X86_AT(c, 0xdb870u);
    if (x86_cc(c, 5)) { goto L_db890; }
    X86_TICK(c, 13);
    // 0db872  mov dword ptr [0xb48b0], 1
    X86_AT(c, 0xdb872u);
    wr32((c.sbase[3] + (uint32_t)(0xB48B0u)), 0x1u);
    // 0db87c  mov ecx, dword ptr [ebp - 4]
    X86_AT(c, 0xdb87cu);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0db87f  call 0xdb67c
    X86_AT(c, 0xdb87fu);
    push32(c, 0xdb884u); x86_call_known(c, 0xdb67cu, f_000db67c); X86_RET(c, 0xdb884u);
    X86_TICK(c, 11);
    // 0db884  push 1
    X86_AT(c, 0xdb884u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0db886  push 0x12adc
    X86_AT(c, 0xdb886u);
    { uint32_t v = 0x12ADCu; push32(c, v); }
    // 0db88b  jmp 0xdb93a
    X86_AT(c, 0xdb88bu);
    goto L_db93a;
L_db890:
    X86_TICK(c, 9);
    // 0db890  mov dword ptr [0xb48b0], 2
    X86_AT(c, 0xdb890u);
    wr32((c.sbase[3] + (uint32_t)(0xB48B0u)), 0x2u);
    // 0db89a  jmp 0xdb8a9
    X86_AT(c, 0xdb89au);
    goto L_db8a9;
L_db89c:
    X86_TICK(c, 8);
    // 0db89c  mov eax, dword ptr [0xb4380]
    X86_AT(c, 0xdb89cu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xB4380u)));
    // 0db8a1  add eax, 2
    X86_AT(c, 0xdb8a1u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0x2u, 0, 4); }
    // 0db8a4  mov dword ptr [0xb48b0], eax
    X86_AT(c, 0xdb8a4u);
    wr32((c.sbase[3] + (uint32_t)(0xB48B0u)), c.r[0]);
L_db8a9:
    X86_TICK(c, 11);
    // 0db8a9  mov ecx, dword ptr [ebp - 4]
    X86_AT(c, 0xdb8a9u);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0db8ac  call 0xdb67c
    X86_AT(c, 0xdb8acu);
    push32(c, 0xdb8b1u); x86_call_known(c, 0xdb67cu, f_000db67c); X86_RET(c, 0xdb8b1u);
    X86_TICK(c, 11);
    // 0db8b1  push 2
    X86_AT(c, 0xdb8b1u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0db8b3  push 0x12ade
    X86_AT(c, 0xdb8b3u);
    { uint32_t v = 0x12ADEu; push32(c, v); }
    // 0db8b8  jmp 0xdb93a
    X86_AT(c, 0xdb8b8u);
    goto L_db93a;
L_db8bd:
    X86_TICK(c, 30);
    // 0db8bd  mov eax, dword ptr [0xb48b4]
    X86_AT(c, 0xdb8bdu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xB48B4u)));
    // 0db8c2  sub dword ptr [0xb4380], eax
    X86_AT(c, 0xdb8c2u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xB4380u)); uint32_t v = rd32(ea); wr32(ea, x86_sub(c, v, c.r[0], 0, 4)); }
    // 0db8c8  mov eax, dword ptr [0xb4380]
    X86_AT(c, 0xdb8c8u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xB4380u)));
    // 0db8cd  mov edx, dword ptr [ebp - 4]
    X86_AT(c, 0xdb8cdu);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0db8d0  mov ecx, dword ptr [edx - 8]
    X86_AT(c, 0xdb8d0u);
    c.r[1] = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xFFFFFFF8u)));
    // 0db8d3  cmp ecx, eax
    X86_AT(c, 0xdb8d3u);
    (void)x86_sub(c, c.r[1], c.r[0], 0, 4);
    // 0db8d5  jb 0xdb8d9
    X86_AT(c, 0xdb8d5u);
    if (x86_cc(c, 2)) { goto L_db8d9; }
    X86_TICK(c, 2);
    // 0db8d7  mov ecx, eax
    X86_AT(c, 0xdb8d7u);
    c.r[1] = c.r[0];
L_db8d9:
    X86_TICK(c, 40);
    // 0db8d9  mov edi, ecx
    X86_AT(c, 0xdb8d9u);
    c.r[7] = c.r[1];
    // 0db8db  mov esi, 0xb48b8
    X86_AT(c, 0xdb8dbu);
    c.r[6] = 0xB48B8u;
    // 0db8e0  push edi
    X86_AT(c, 0xdb8e0u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0db8e1  mov edi, 0xb4884
    X86_AT(c, 0xdb8e1u);
    c.r[7] = 0xB4884u;
    // 0db8e6  movsb byte ptr es:[edi], byte ptr [esi]
    X86_AT(c, 0xdb8e6u);
    x86_string(c, 0, 1, 243, 4, 3);
    // 0db8e8  pop edi
    X86_AT(c, 0xdb8e8u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0db8e9  sub dword ptr [0xb4380], edi
    X86_AT(c, 0xdb8e9u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xB4380u)); uint32_t v = rd32(ea); wr32(ea, x86_sub(c, v, c.r[7], 0, 4)); }
    // 0db8ef  mov dword ptr [edx - 0x10], edi
    X86_AT(c, 0xdb8efu);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xFFFFFFF0u)), c.r[7]);
    // 0db8f2  cmp byte ptr [edx - 9], 0
    X86_AT(c, 0xdb8f2u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[2] + 0xFFFFFFF7u))), 0x0u, 0, 1);
    // 0db8f6  je 0xdb905
    X86_AT(c, 0xdb8f6u);
    if (x86_cc(c, 4)) { goto L_db905; }
    X86_TICK(c, 15);
    // 0db8f8  push 1
    X86_AT(c, 0xdb8f8u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0db8fa  lea eax, [edi + 1]
    X86_AT(c, 0xdb8fau);
    c.r[0] = (uint32_t)(c.r[7] + 0x1u);
    // 0db8fd  push eax
    X86_AT(c, 0xdb8fdu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0db8fe  mov ecx, edx
    X86_AT(c, 0xdb8feu);
    c.r[1] = c.r[2];
    // 0db900  call 0xdb610
    X86_AT(c, 0xdb900u);
    push32(c, 0xdb905u); x86_call_known(c, 0xdb610u, f_000db610); X86_RET(c, 0xdb905u);
L_db905:
    X86_TICK(c, 13);
    // 0db905  mov ecx, dword ptr [ebp - 4]
    X86_AT(c, 0xdb905u);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0db908  mov ebx, ecx
    X86_AT(c, 0xdb908u);
    c.r[3] = c.r[1];
    // 0db90a  call 0xdb67c
    X86_AT(c, 0xdb90au);
    push32(c, 0xdb90fu); x86_call_known(c, 0xdb67cu, f_000db67c); X86_RET(c, 0xdb90fu);
    X86_TICK(c, 15);
    // 0db90f  push 2
    X86_AT(c, 0xdb90fu);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0db911  push 0x12ade
    X86_AT(c, 0xdb911u);
    { uint32_t v = 0x12ADEu; push32(c, v); }
    // 0db916  mov ecx, dword ptr [0xb4390]
    X86_AT(c, 0xdb916u);
    c.r[1] = rd32((c.sbase[3] + (uint32_t)(0xB4390u)));
    // 0db91c  call dword ptr [0xb438c]
    X86_AT(c, 0xdb91cu);
    { uint32_t t = rd32((c.sbase[3] + (uint32_t)(0xB438Cu))); push32(c, 0xdb922u); x86_call(c, t); X86_RET(c, 0xdb922u); }
    X86_TICK(c, 14);
    // 0db922  push dword ptr [0xb48b4]
    X86_AT(c, 0xdb922u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xB48B4u))); push32(c, v); }
    // 0db928  push 0xb4394
    X86_AT(c, 0xdb928u);
    { uint32_t v = 0xB4394u; push32(c, v); }
    // 0db92d  call 0xd9454
    X86_AT(c, 0xdb92du);
    push32(c, 0xdb932u); x86_call_known(c, 0xd9454u, f_000d9454); X86_RET(c, 0xdb932u);
    X86_TICK(c, 7);
    // 0db932  push dword ptr [ebx - 0x10]
    X86_AT(c, 0xdb932u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0xFFFFFFF0u))); push32(c, v); }
    // 0db935  push 0xb4884
    X86_AT(c, 0xdb935u);
    { uint32_t v = 0xB4884u; push32(c, v); }
L_db93a:
    X86_TICK(c, 11);
    // 0db93a  mov ecx, dword ptr [0xb4390]
    X86_AT(c, 0xdb93au);
    c.r[1] = rd32((c.sbase[3] + (uint32_t)(0xB4390u)));
    // 0db940  call dword ptr [0xb438c]
    X86_AT(c, 0xdb940u);
    { uint32_t t = rd32((c.sbase[3] + (uint32_t)(0xB438Cu))); push32(c, 0xdb946u); x86_call(c, t); X86_RET(c, 0xdb946u); }
    X86_TICK(c, 16);
    // 0db946  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0xdb946u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0db949  cmp byte ptr [eax - 9], 0
    X86_AT(c, 0xdb949u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[0] + 0xFFFFFFF7u))), 0x0u, 0, 1);
    // 0db94d  jne 0xdb963
    X86_AT(c, 0xdb94du);
    if (x86_cc(c, 5)) { goto L_db963; }
    X86_TICK(c, 11);
    // 0db94f  mov eax, dword ptr [0xb4380]
    X86_AT(c, 0xdb94fu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xB4380u)));
    // 0db954  and eax, eax
    X86_AT(c, 0xdb954u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0db956  je 0xdb963
    X86_AT(c, 0xdb956u);
    if (x86_cc(c, 4)) { goto L_db963; }
L_db958:
    X86_TICK(c, 11);
    // 0db958  push eax
    X86_AT(c, 0xdb958u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0db959  push 0xb4394
    X86_AT(c, 0xdb959u);
    { uint32_t v = 0xB4394u; push32(c, v); }
    // 0db95e  call 0xd9454
    X86_AT(c, 0xdb95eu);
    push32(c, 0xdb963u); x86_call_known(c, 0xd9454u, f_000d9454); X86_RET(c, 0xdb963u);
L_db963:
    X86_TICK(c, 28);
    // 0db963  pop edi
    X86_AT(c, 0xdb963u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0db964  pop esi
    X86_AT(c, 0xdb964u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0db965  pop ebx
    X86_AT(c, 0xdb965u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0db966  leave 
    X86_AT(c, 0xdb966u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0db967  ret 
    X86_AT(c, 0xdb967u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xdb6e0u, "ran off the end of a function");
}
void f_000db93a(X86Cpu& c) {
    X86_TICK(c, 11);
    // 0db93a  mov ecx, dword ptr [0xb4390]
    X86_AT(c, 0xdb93au);
    c.r[1] = rd32((c.sbase[3] + (uint32_t)(0xB4390u)));
    // 0db940  call dword ptr [0xb438c]
    X86_AT(c, 0xdb940u);
    { uint32_t t = rd32((c.sbase[3] + (uint32_t)(0xB438Cu))); push32(c, 0xdb946u); x86_call(c, t); X86_RET(c, 0xdb946u); }
    X86_TICK(c, 16);
    // 0db946  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0xdb946u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0db949  cmp byte ptr [eax - 9], 0
    X86_AT(c, 0xdb949u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[0] + 0xFFFFFFF7u))), 0x0u, 0, 1);
    // 0db94d  jne 0xdb963
    X86_AT(c, 0xdb94du);
    if (x86_cc(c, 5)) { goto L_db963; }
    X86_TICK(c, 11);
    // 0db94f  mov eax, dword ptr [0xb4380]
    X86_AT(c, 0xdb94fu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xB4380u)));
    // 0db954  and eax, eax
    X86_AT(c, 0xdb954u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0db956  je 0xdb963
    X86_AT(c, 0xdb956u);
    if (x86_cc(c, 4)) { goto L_db963; }
    X86_TICK(c, 11);
    // 0db958  push eax
    X86_AT(c, 0xdb958u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0db959  push 0xb4394
    X86_AT(c, 0xdb959u);
    { uint32_t v = 0xB4394u; push32(c, v); }
    // 0db95e  call 0xd9454
    X86_AT(c, 0xdb95eu);
    push32(c, 0xdb963u); x86_call_known(c, 0xd9454u, f_000d9454); X86_RET(c, 0xdb963u);
L_db963:
    X86_TICK(c, 28);
    // 0db963  pop edi
    X86_AT(c, 0xdb963u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0db964  pop esi
    X86_AT(c, 0xdb964u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0db965  pop ebx
    X86_AT(c, 0xdb965u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0db966  leave 
    X86_AT(c, 0xdb966u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0db967  ret 
    X86_AT(c, 0xdb967u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xdb93au, "ran off the end of a function");
}
void f_000db970(X86Cpu& c) {
    X86_TICK(c, 34);
    // 0db970  push ebp
    X86_AT(c, 0xdb970u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0db971  mov ebp, esp
    X86_AT(c, 0xdb971u);
    c.r[5] = c.r[4];
    // 0db973  push ecx
    X86_AT(c, 0xdb973u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 0db974  sub esp, 0xc
    X86_AT(c, 0xdb974u);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, 0xCu, 0, 4); }
    // 0db977  push ebx
    X86_AT(c, 0xdb977u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0db978  push esi
    X86_AT(c, 0xdb978u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0db979  push edi
    X86_AT(c, 0xdb979u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0db97a  mov edi, 1
    X86_AT(c, 0xdb97au);
    c.r[7] = 0x1u;
    // 0db97f  mov al, byte ptr [0xb48b8]
    X86_AT(c, 0xdb97fu);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(0xB48B8u))));
    // 0db984  mov byte ptr [edi + 0xb4883], al
    X86_AT(c, 0xdb984u);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0xB4883u)), g8(c, 0));
    // 0db98a  cmp byte ptr [0xb48cb], 0
    X86_AT(c, 0xdb98au);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0xB48CBu))), 0x0u, 0, 1);
    // 0db991  je 0xdb9a0
    X86_AT(c, 0xdb991u);
    if (x86_cc(c, 4)) { goto L_db9a0; }
    X86_TICK(c, 10);
    // 0db993  mov dword ptr [ebp - 0x10], edi
    X86_AT(c, 0xdb993u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u)), c.r[7]);
    // 0db996  add edi, dword ptr [ebp - 0x10]
    X86_AT(c, 0xdb996u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u))), 0, 4); }
    // 0db999  mov byte ptr [edi + 0xb4883], 0x2e
    X86_AT(c, 0xdb999u);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0xB4883u)), 0x2Eu);
L_db9a0:
    X86_TICK(c, 13);
    // 0db9a0  inc edi
    X86_AT(c, 0xdb9a0u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0db9a1  mov eax, dword ptr [0xb4380]
    X86_AT(c, 0xdb9a1u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xB4380u)));
    // 0db9a6  and eax, eax
    X86_AT(c, 0xdb9a6u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0db9a8  je 0xdba2a
    X86_AT(c, 0xdb9a8u);
    if (x86_cc(c, 4)) { goto L_dba2a; }
    X86_TICK(c, 15);
    // 0db9ae  mov edx, dword ptr [ebp - 4]
    X86_AT(c, 0xdb9aeu);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0db9b1  mov ecx, dword ptr [edx - 8]
    X86_AT(c, 0xdb9b1u);
    c.r[1] = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xFFFFFFF8u)));
    // 0db9b4  cmp ecx, eax
    X86_AT(c, 0xdb9b4u);
    (void)x86_sub(c, c.r[1], c.r[0], 0, 4);
    // 0db9b6  jb 0xdb9ba
    X86_AT(c, 0xdb9b6u);
    if (x86_cc(c, 2)) { goto L_db9ba; }
    X86_TICK(c, 2);
    // 0db9b8  mov ecx, eax
    X86_AT(c, 0xdb9b8u);
    c.r[1] = c.r[0];
L_db9ba:
    X86_TICK(c, 54);
    // 0db9ba  mov dword ptr [ebp - 8], ecx
    X86_AT(c, 0xdb9bau);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), c.r[1]);
    // 0db9bd  mov esi, 0xb48b9
    X86_AT(c, 0xdb9bdu);
    c.r[6] = 0xB48B9u;
    // 0db9c2  lea ebx, [edi + 0xb4883]
    X86_AT(c, 0xdb9c2u);
    c.r[3] = (uint32_t)(c.r[7] + 0xB4883u);
    // 0db9c8  push edi
    X86_AT(c, 0xdb9c8u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0db9c9  mov edi, ebx
    X86_AT(c, 0xdb9c9u);
    c.r[7] = c.r[3];
    // 0db9cb  movsb byte ptr es:[edi], byte ptr [esi]
    X86_AT(c, 0xdb9cbu);
    x86_string(c, 0, 1, 243, 4, 3);
    // 0db9cd  pop edi
    X86_AT(c, 0xdb9cdu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0db9ce  add edi, dword ptr [ebp - 8]
    X86_AT(c, 0xdb9ceu);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u))), 0, 4); }
    // 0db9d1  mov eax, dword ptr [ebp - 8]
    X86_AT(c, 0xdb9d1u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)));
    // 0db9d4  sub dword ptr [0xb4380], eax
    X86_AT(c, 0xdb9d4u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xB4380u)); uint32_t v = rd32(ea); wr32(ea, x86_sub(c, v, c.r[0], 0, 4)); }
    // 0db9da  lea eax, [edi - 1]
    X86_AT(c, 0xdb9dau);
    c.r[0] = (uint32_t)(c.r[7] + 0xFFFFFFFFu);
    // 0db9dd  mov dword ptr [edx - 0x10], eax
    X86_AT(c, 0xdb9ddu);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xFFFFFFF0u)), c.r[0]);
    // 0db9e0  cmp byte ptr [edx - 9], 0
    X86_AT(c, 0xdb9e0u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[2] + 0xFFFFFFF7u))), 0x0u, 0, 1);
    // 0db9e4  je 0xdb9f0
    X86_AT(c, 0xdb9e4u);
    if (x86_cc(c, 4)) { goto L_db9f0; }
    X86_TICK(c, 13);
    // 0db9e6  push 2
    X86_AT(c, 0xdb9e6u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0db9e8  push edi
    X86_AT(c, 0xdb9e8u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0db9e9  mov ecx, edx
    X86_AT(c, 0xdb9e9u);
    c.r[1] = c.r[2];
    // 0db9eb  call 0xdb610
    X86_AT(c, 0xdb9ebu);
    push32(c, 0xdb9f0u); x86_call_known(c, 0xdb610u, f_000db610); X86_RET(c, 0xdb9f0u);
L_db9f0:
    X86_TICK(c, 13);
    // 0db9f0  mov ecx, dword ptr [ebp - 4]
    X86_AT(c, 0xdb9f0u);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0db9f3  mov ebx, ecx
    X86_AT(c, 0xdb9f3u);
    c.r[3] = c.r[1];
    // 0db9f5  call 0xdb67c
    X86_AT(c, 0xdb9f5u);
    push32(c, 0xdb9fau); x86_call_known(c, 0xdb67cu, f_000db67c); X86_RET(c, 0xdb9fau);
    X86_TICK(c, 18);
    // 0db9fa  push dword ptr [ebx - 0x10]
    X86_AT(c, 0xdb9fau);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0xFFFFFFF0u))); push32(c, v); }
    // 0db9fd  push 0xb4884
    X86_AT(c, 0xdb9fdu);
    { uint32_t v = 0xB4884u; push32(c, v); }
    // 0dba02  mov ecx, dword ptr [0xb4390]
    X86_AT(c, 0xdba02u);
    c.r[1] = rd32((c.sbase[3] + (uint32_t)(0xB4390u)));
    // 0dba08  call dword ptr [0xb438c]
    X86_AT(c, 0xdba08u);
    { uint32_t t = rd32((c.sbase[3] + (uint32_t)(0xB438Cu))); push32(c, 0xdba0eu); x86_call(c, t); X86_RET(c, 0xdba0eu); }
    X86_TICK(c, 12);
    // 0dba0e  cmp byte ptr [ebx - 9], 0
    X86_AT(c, 0xdba0eu);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xFFFFFFF7u))), 0x0u, 0, 1);
    // 0dba12  jne 0xdba47
    X86_AT(c, 0xdba12u);
    if (x86_cc(c, 5)) { goto L_dba47; }
    X86_TICK(c, 11);
    // 0dba14  mov eax, dword ptr [0xb4380]
    X86_AT(c, 0xdba14u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xB4380u)));
    // 0dba19  and eax, eax
    X86_AT(c, 0xdba19u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0dba1b  je 0xdba47
    X86_AT(c, 0xdba1bu);
    if (x86_cc(c, 4)) { goto L_dba47; }
    X86_TICK(c, 11);
    // 0dba1d  push eax
    X86_AT(c, 0xdba1du);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0dba1e  push 0xb4394
    X86_AT(c, 0xdba1eu);
    { uint32_t v = 0xB4394u; push32(c, v); }
    // 0dba23  call 0xd9454
    X86_AT(c, 0xdba23u);
    push32(c, 0xdba28u); x86_call_known(c, 0xd9454u, f_000d9454); X86_RET(c, 0xdba28u);
    X86_TICK(c, 7);
    // 0dba28  jmp 0xdba47
    X86_AT(c, 0xdba28u);
    goto L_dba47;
L_dba2a:
    X86_TICK(c, 11);
    // 0dba2a  mov ecx, dword ptr [ebp - 4]
    X86_AT(c, 0xdba2au);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0dba2d  call 0xdb67c
    X86_AT(c, 0xdba2du);
    push32(c, 0xdba32u); x86_call_known(c, 0xdb67cu, f_000db67c); X86_RET(c, 0xdba32u);
    X86_TICK(c, 17);
    // 0dba32  lea eax, [edi - 1]
    X86_AT(c, 0xdba32u);
    c.r[0] = (uint32_t)(c.r[7] + 0xFFFFFFFFu);
    // 0dba35  push eax
    X86_AT(c, 0xdba35u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0dba36  push 0xb4884
    X86_AT(c, 0xdba36u);
    { uint32_t v = 0xB4884u; push32(c, v); }
    // 0dba3b  mov ecx, dword ptr [0xb4390]
    X86_AT(c, 0xdba3bu);
    c.r[1] = rd32((c.sbase[3] + (uint32_t)(0xB4390u)));
    // 0dba41  call dword ptr [0xb438c]
    X86_AT(c, 0xdba41u);
    { uint32_t t = rd32((c.sbase[3] + (uint32_t)(0xB438Cu))); push32(c, 0xdba47u); x86_call(c, t); X86_RET(c, 0xdba47u); }
L_dba47:
    X86_TICK(c, 11);
    // 0dba47  mov eax, dword ptr [0xb48b4]
    X86_AT(c, 0xdba47u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xB48B4u)));
    // 0dba4c  and eax, eax
    X86_AT(c, 0xdba4cu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0dba4e  jg 0xdba62
    X86_AT(c, 0xdba4eu);
    if (x86_cc(c, 15)) { goto L_dba62; }
    X86_TICK(c, 9);
    // 0dba50  mov byte ptr [ebp - 9], 0x2d
    X86_AT(c, 0xdba50u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF7u)), 0x2Du);
    // 0dba54  and eax, eax
    X86_AT(c, 0xdba54u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0dba56  jge 0xdba5a
    X86_AT(c, 0xdba56u);
    if (x86_cc(c, 13)) { goto L_dba5a; }
    X86_TICK(c, 2);
    // 0dba58  neg eax
    X86_AT(c, 0xdba58u);
    { uint32_t v = c.r[0]; c.r[0] = x86_neg(c, v, 4); }
L_dba5a:
    X86_TICK(c, 11);
    // 0dba5a  inc eax
    X86_AT(c, 0xdba5au);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0dba5b  mov dword ptr [0xb48b4], eax
    X86_AT(c, 0xdba5bu);
    wr32((c.sbase[3] + (uint32_t)(0xB48B4u)), c.r[0]);
    // 0dba60  jmp 0xdba6c
    X86_AT(c, 0xdba60u);
    goto L_dba6c;
L_dba62:
    X86_TICK(c, 8);
    // 0dba62  mov byte ptr [ebp - 9], 0x2b
    X86_AT(c, 0xdba62u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF7u)), 0x2Bu);
    // 0dba66  dec dword ptr [0xb48b4]
    X86_AT(c, 0xdba66u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xB48B4u)); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
L_dba6c:
    X86_TICK(c, 11);
    // 0dba6c  mov ebx, 0x1f
    X86_AT(c, 0xdba6cu);
    c.r[3] = 0x1Fu;
    // 0dba71  sub esi, esi
    X86_AT(c, 0xdba71u);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[6], 0, 4); }
    // 0dba73  jmp 0xdba99
    X86_AT(c, 0xdba73u);
    goto L_dba99;
L_dba75:
    X86_TICK(c, 55);
    // 0dba75  mov eax, dword ptr [0xb48b4]
    X86_AT(c, 0xdba75u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xB48B4u)));
    // 0dba7a  cdq 
    X86_AT(c, 0xdba7au);
    c.r[2] = (c.r[0] & 0x80000000u) ? 0xFFFFFFFFu : 0u;
    // 0dba7b  mov ecx, 0xa
    X86_AT(c, 0xdba7bu);
    c.r[1] = 0xAu;
    // 0dba80  idiv ecx
    X86_AT(c, 0xdba80u);
    x86_idiv(c, c.r[1], 4, 0xdba80u);
    // 0dba82  and edx, edx
    X86_AT(c, 0xdba82u);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & c.r[2], 4); }
    // 0dba84  jge 0xdba88
    X86_AT(c, 0xdba84u);
    if (x86_cc(c, 13)) { goto L_dba88; }
    X86_TICK(c, 2);
    // 0dba86  add edx, ecx
    X86_AT(c, 0xdba86u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[1], 0, 4); }
L_dba88:
    X86_TICK(c, 10);
    // 0dba88  add dx, 0x30
    X86_AT(c, 0xdba88u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, 0x30u, 0, 2)); }
    // 0dba8c  mov byte ptr [ebx + 0xb4883], dl
    X86_AT(c, 0xdba8cu);
    wr8((c.sbase[3] + (uint32_t)(c.r[3] + 0xB4883u)), g8(c, 2));
    // 0dba92  mov dword ptr [0xb48b4], eax
    X86_AT(c, 0xdba92u);
    wr32((c.sbase[3] + (uint32_t)(0xB48B4u)), c.r[0]);
    // 0dba97  dec ebx
    X86_AT(c, 0xdba97u);
    { uint32_t v = c.r[3]; c.r[3] = x86_dec(c, v, 4); }
    // 0dba98  inc esi
    X86_AT(c, 0xdba98u);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
L_dba99:
    X86_TICK(c, 12);
    // 0dba99  cmp dword ptr [0xb48b4], 0
    X86_AT(c, 0xdba99u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xB48B4u))), 0x0u, 0, 4);
    // 0dbaa0  jg 0xdba75
    X86_AT(c, 0xdbaa0u);
    if (x86_cc(c, 15)) { X86_POLL(c, 0xdba75u); goto L_dba75; }
    X86_TICK(c, 7);
    // 0dbaa2  cmp esi, 2
    X86_AT(c, 0xdbaa2u);
    (void)x86_sub(c, c.r[6], 0x2u, 0, 4);
    // 0dbaa5  jl 0xdba75
    X86_AT(c, 0xdbaa5u);
    if (x86_cc(c, 12)) { X86_POLL(c, 0xdba75u); goto L_dba75; }
    X86_TICK(c, 35);
    // 0dbaa7  mov al, byte ptr [ebp - 9]
    X86_AT(c, 0xdbaa7u);
    s8(c, 0, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF7u))));
    // 0dbaaa  mov byte ptr [ebx + 0xb4883], al
    X86_AT(c, 0xdbaaau);
    wr8((c.sbase[3] + (uint32_t)(c.r[3] + 0xB4883u)), g8(c, 0));
    // 0dbab0  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0xdbab0u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0dbab3  mov al, byte ptr [eax + 8]
    X86_AT(c, 0xdbab3u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[0] + 0x8u))));
    // 0dbab6  mov byte ptr [ebx + 0xb4882], al
    X86_AT(c, 0xdbab6u);
    wr8((c.sbase[3] + (uint32_t)(c.r[3] + 0xB4882u)), g8(c, 0));
    // 0dbabc  lea eax, [esi + 2]
    X86_AT(c, 0xdbabcu);
    c.r[0] = (uint32_t)(c.r[6] + 0x2u);
    // 0dbabf  push eax
    X86_AT(c, 0xdbabfu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0dbac0  lea eax, [ebx + 0xb4882]
    X86_AT(c, 0xdbac0u);
    c.r[0] = (uint32_t)(c.r[3] + 0xB4882u);
    // 0dbac6  push eax
    X86_AT(c, 0xdbac6u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0dbac7  mov ecx, dword ptr [0xb4390]
    X86_AT(c, 0xdbac7u);
    c.r[1] = rd32((c.sbase[3] + (uint32_t)(0xB4390u)));
    // 0dbacd  call dword ptr [0xb438c]
    X86_AT(c, 0xdbacdu);
    { uint32_t t = rd32((c.sbase[3] + (uint32_t)(0xB438Cu))); push32(c, 0xdbad3u); x86_call(c, t); X86_RET(c, 0xdbad3u); }
    X86_TICK(c, 28);
    // 0dbad3  pop edi
    X86_AT(c, 0xdbad3u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0dbad4  pop esi
    X86_AT(c, 0xdbad4u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0dbad5  pop ebx
    X86_AT(c, 0xdbad5u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0dbad6  leave 
    X86_AT(c, 0xdbad6u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0dbad7  ret 
    X86_AT(c, 0xdbad7u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xdb970u, "ran off the end of a function");
}
void f_000dbaf0(X86Cpu& c) {
    X86_TICK(c, 22);
    // 0dbaf0  push ebp
    X86_AT(c, 0xdbaf0u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0dbaf1  mov ebp, esp
    X86_AT(c, 0xdbaf1u);
    c.r[5] = c.r[4];
    // 0dbaf3  push ecx
    X86_AT(c, 0xdbaf3u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 0dbaf4  sub esp, 0xc
    X86_AT(c, 0xdbaf4u);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, 0xCu, 0, 4); }
    // 0dbaf7  mov byte ptr [ebp - 9], 0
    X86_AT(c, 0xdbaf7u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF7u)), 0x0u);
    // 0dbafb  cmp byte ptr [0xb4384], 3
    X86_AT(c, 0xdbafbu);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0xB4384u))), 0x3u, 0, 1);
    // 0dbb02  jne 0xdbb0d
    X86_AT(c, 0xdbb02u);
    if (x86_cc(c, 5)) { goto L_dbb0d; }
    X86_TICK(c, 9);
    // 0dbb04  mov dword ptr [ebp - 8], 0x12
    X86_AT(c, 0xdbb04u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), 0x12u);
    // 0dbb0b  jmp 0xdbb14
    X86_AT(c, 0xdbb0bu);
    goto L_dbb14;
L_dbb0d:
    X86_TICK(c, 2);
    // 0dbb0d  mov dword ptr [ebp - 8], 0x10
    X86_AT(c, 0xdbb0du);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), 0x10u);
L_dbb14:
    X86_TICK(c, 13);
    // 0dbb14  movzx eax, byte ptr [ebp + 8]
    X86_AT(c, 0xdbb14u);
    c.r[0] = rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0dbb18  cmp eax, 0x45
    X86_AT(c, 0xdbb18u);
    (void)x86_sub(c, c.r[0], 0x45u, 0, 4);
    // 0dbb1b  je 0xdbb6c
    X86_AT(c, 0xdbb1bu);
    if (x86_cc(c, 4)) { goto L_dbb6c; }
    X86_TICK(c, 7);
    // 0dbb1d  cmp eax, 0x47
    X86_AT(c, 0xdbb1du);
    (void)x86_sub(c, c.r[0], 0x47u, 0, 4);
    // 0dbb20  je 0xdbb39
    X86_AT(c, 0xdbb20u);
    if (x86_cc(c, 4)) { goto L_dbb39; }
    X86_TICK(c, 7);
    // 0dbb22  cmp eax, 0x65
    X86_AT(c, 0xdbb22u);
    (void)x86_sub(c, c.r[0], 0x65u, 0, 4);
    // 0dbb25  je 0xdbb6c
    X86_AT(c, 0xdbb25u);
    if (x86_cc(c, 4)) { goto L_dbb6c; }
    X86_TICK(c, 7);
    // 0dbb27  cmp eax, 0x66
    X86_AT(c, 0xdbb27u);
    (void)x86_sub(c, c.r[0], 0x66u, 0, 4);
    // 0dbb2a  je 0xdbb9b
    X86_AT(c, 0xdbb2au);
    if (x86_cc(c, 4)) { goto L_dbb9b; }
    X86_TICK(c, 7);
    // 0dbb30  cmp eax, 0x67
    X86_AT(c, 0xdbb30u);
    (void)x86_sub(c, c.r[0], 0x67u, 0, 4);
    // 0dbb33  jne 0xdbba2
    X86_AT(c, 0xdbb33u);
    if (x86_cc(c, 5)) { goto L_dbba2; }
L_dbb39:
    X86_TICK(c, 12);
    // 0dbb39  cmp dword ptr [0xb4380], 0
    X86_AT(c, 0xdbb39u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xB4380u))), 0x0u, 0, 4);
    // 0dbb40  je 0xdbba2
    X86_AT(c, 0xdbb40u);
    if (x86_cc(c, 4)) { goto L_dbba2; }
    X86_TICK(c, 12);
    // 0dbb42  test byte ptr [0xb4378], 8
    X86_AT(c, 0xdbb42u);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(0xB4378u))) & 0x8u, 1);
    // 0dbb49  jne 0xdbb4f
    X86_AT(c, 0xdbb49u);
    if (x86_cc(c, 5)) { goto L_dbb4f; }
    X86_TICK(c, 2);
    // 0dbb4b  mov byte ptr [ebp - 9], 1
    X86_AT(c, 0xdbb4bu);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF7u)), 0x1u);
L_dbb4f:
    X86_TICK(c, 13);
    // 0dbb4f  mov eax, dword ptr [0xb48b4]
    X86_AT(c, 0xdbb4fu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xB48B4u)));
    // 0dbb54  dec eax
    X86_AT(c, 0xdbb54u);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 0dbb55  cmp eax, 0xfffffffc
    X86_AT(c, 0xdbb55u);
    (void)x86_sub(c, c.r[0], 0xFFFFFFFCu, 0, 4);
    // 0dbb58  jl 0xdbb62
    X86_AT(c, 0xdbb58u);
    if (x86_cc(c, 12)) { goto L_dbb62; }
    X86_TICK(c, 11);
    // 0dbb5a  cmp eax, dword ptr [0xb4380]
    X86_AT(c, 0xdbb5au);
    (void)x86_sub(c, c.r[0], rd32((c.sbase[3] + (uint32_t)(0xB4380u))), 0, 4);
    // 0dbb60  jle 0xdbb75
    X86_AT(c, 0xdbb60u);
    if (x86_cc(c, 14)) { goto L_dbb75; }
L_dbb62:
    X86_TICK(c, 13);
    // 0dbb62  sub byte ptr [ebp + 8], 2
    X86_AT(c, 0xdbb62u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)); uint32_t v = rd8(ea); wr8(ea, x86_sub(c, v, 0x2u, 0, 1)); }
    // 0dbb66  dec dword ptr [0xb4380]
    X86_AT(c, 0xdbb66u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xB4380u)); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
L_dbb6c:
    X86_TICK(c, 9);
    // 0dbb6c  mov ecx, ebp
    X86_AT(c, 0xdbb6cu);
    c.r[1] = c.r[5];
    // 0dbb6e  call 0xdb970
    X86_AT(c, 0xdbb6eu);
    push32(c, 0xdbb73u); x86_call_known(c, 0xdb970u, f_000db970); X86_RET(c, 0xdbb73u);
    X86_TICK(c, 7);
    // 0dbb73  jmp 0xdbba2
    X86_AT(c, 0xdbb73u);
    goto L_dbba2;
L_dbb75:
    X86_TICK(c, 13);
    // 0dbb75  mov byte ptr [ebp + 8], 0x66
    X86_AT(c, 0xdbb75u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)), 0x66u);
    // 0dbb79  mov eax, dword ptr [0xb48b4]
    X86_AT(c, 0xdbb79u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xB48B4u)));
    // 0dbb7e  and eax, eax
    X86_AT(c, 0xdbb7eu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0dbb80  jle 0xdbb95
    X86_AT(c, 0xdbb80u);
    if (x86_cc(c, 14)) { goto L_dbb95; }
    X86_TICK(c, 11);
    // 0dbb82  mov edx, dword ptr [0xb4380]
    X86_AT(c, 0xdbb82u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(0xB4380u)));
    // 0dbb88  cmp edx, eax
    X86_AT(c, 0xdbb88u);
    (void)x86_sub(c, c.r[2], c.r[0], 0, 4);
    // 0dbb8a  jb 0xdbb8d
    X86_AT(c, 0xdbb8au);
    if (x86_cc(c, 2)) { goto L_dbb8d; }
    X86_TICK(c, 3);
    // 0dbb8c  xchg edx, eax
    X86_AT(c, 0xdbb8cu);
    { uint32_t t = c.r[2]; c.r[2] = c.r[0]; c.r[0] = t; }
L_dbb8d:
    X86_TICK(c, 14);
    // 0dbb8d  sub dword ptr [0xb4380], edx
    X86_AT(c, 0xdbb8du);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xB4380u)); uint32_t v = rd32(ea); wr32(ea, x86_sub(c, v, c.r[2], 0, 4)); }
    // 0dbb93  jmp 0xdbb9b
    X86_AT(c, 0xdbb93u);
    goto L_dbb9b;
L_dbb95:
    X86_TICK(c, 6);
    // 0dbb95  dec dword ptr [0xb4380]
    X86_AT(c, 0xdbb95u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xB4380u)); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
L_dbb9b:
    X86_TICK(c, 9);
    // 0dbb9b  mov ecx, ebp
    X86_AT(c, 0xdbb9bu);
    c.r[1] = c.r[5];
    // 0dbb9d  call 0xdb6e0
    X86_AT(c, 0xdbb9du);
    push32(c, 0xdbba2u); x86_call_known(c, 0xdb6e0u, f_000db6e0); X86_RET(c, 0xdbba2u);
L_dbba2:
    X86_TICK(c, 16);
    // 0dbba2  leave 
    X86_AT(c, 0xdbba2u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0dbba3  ret 4
    X86_AT(c, 0xdbba3u);
    c.eip = pop32(c); c.r[4] += 0x4u; return;
    x86_fault(c, 0xdbaf0u, "ran off the end of a function");
}
void f_000dbbc4(X86Cpu& c) {
    X86_TICK(c, 21);
    // 0dbbc4  push ebp
    X86_AT(c, 0xdbbc4u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0dbbc5  mov ebp, esp
    X86_AT(c, 0xdbbc5u);
    c.r[5] = c.r[4];
    // 0dbbc7  push ecx
    X86_AT(c, 0xdbbc7u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 0dbbc8  push esi
    X86_AT(c, 0xdbbc8u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0dbbc9  push edi
    X86_AT(c, 0xdbbc9u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0dbbca  mov esi, dword ptr [0xb48b4]
    X86_AT(c, 0xdbbcau);
    c.r[6] = rd32((c.sbase[3] + (uint32_t)(0xB48B4u)));
    // 0dbbd0  and esi, esi
    X86_AT(c, 0xdbbd0u);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & c.r[6], 4); }
    // 0dbbd2  jge 0xdbbd6
    X86_AT(c, 0xdbbd2u);
    if (x86_cc(c, 13)) { goto L_dbbd6; }
    X86_TICK(c, 2);
    // 0dbbd4  neg esi
    X86_AT(c, 0xdbbd4u);
    { uint32_t v = c.r[6]; c.r[6] = x86_neg(c, v, 4); }
L_dbbd6:
    X86_TICK(c, 9);
    // 0dbbd6  mov edi, 2
    X86_AT(c, 0xdbbd6u);
    c.r[7] = 0x2u;
    // 0dbbdb  jmp 0xdbbe8
    X86_AT(c, 0xdbbdbu);
    goto L_dbbe8;
L_dbbdd:
    X86_TICK(c, 52);
    // 0dbbdd  xchg esi, eax
    X86_AT(c, 0xdbbddu);
    { uint32_t t = c.r[6]; c.r[6] = c.r[0]; c.r[0] = t; }
    // 0dbbde  cdq 
    X86_AT(c, 0xdbbdeu);
    c.r[2] = (c.r[0] & 0x80000000u) ? 0xFFFFFFFFu : 0u;
    // 0dbbdf  mov ecx, 0xa
    X86_AT(c, 0xdbbdfu);
    c.r[1] = 0xAu;
    // 0dbbe4  idiv ecx
    X86_AT(c, 0xdbbe4u);
    x86_idiv(c, c.r[1], 4, 0xdbbe4u);
    // 0dbbe6  xchg esi, eax
    X86_AT(c, 0xdbbe6u);
    { uint32_t t = c.r[6]; c.r[6] = c.r[0]; c.r[0] = t; }
    // 0dbbe7  inc edi
    X86_AT(c, 0xdbbe7u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
L_dbbe8:
    X86_TICK(c, 7);
    // 0dbbe8  cmp esi, 0x63
    X86_AT(c, 0xdbbe8u);
    (void)x86_sub(c, c.r[6], 0x63u, 0, 4);
    // 0dbbeb  jg 0xdbbdd
    X86_AT(c, 0xdbbebu);
    if (x86_cc(c, 15)) { X86_POLL(c, 0xdbbddu); goto L_dbbdd; }
    X86_TICK(c, 46);
    // 0dbbed  mov al, byte ptr [0xb48cb]
    X86_AT(c, 0xdbbedu);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(0xB48CBu))));
    // 0dbbf2  inc eax
    X86_AT(c, 0xdbbf2u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0dbbf3  movzx eax, al
    X86_AT(c, 0xdbbf3u);
    c.r[0] = g8(c, 0);
    // 0dbbf6  add eax, dword ptr [0xb4380]
    X86_AT(c, 0xdbbf6u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[3] + (uint32_t)(0xB4380u))), 0, 4); }
    // 0dbbfc  add eax, 2
    X86_AT(c, 0xdbbfcu);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0x2u, 0, 4); }
    // 0dbbff  lea edx, [edi + eax*1]
    X86_AT(c, 0xdbbffu);
    c.r[2] = (uint32_t)(c.r[7] + c.r[0]);
    // 0dbc02  xchg edx, eax
    X86_AT(c, 0xdbc02u);
    { uint32_t t = c.r[2]; c.r[2] = c.r[0]; c.r[0] = t; }
    // 0dbc03  pop edi
    X86_AT(c, 0xdbc03u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0dbc04  pop esi
    X86_AT(c, 0xdbc04u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0dbc05  leave 
    X86_AT(c, 0xdbc05u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0dbc06  ret 
    X86_AT(c, 0xdbc06u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xdbbc4u, "ran off the end of a function");
}
void f_000dbc18(X86Cpu& c) {
    X86_TICK(c, 25);
    // 0dbc18  enter 0x30, 0
    X86_AT(c, 0xdbc18u);
    x86_enter(c, 0x30u, 0x0u, 4);
    // 0dbc1c  push ebx
    X86_AT(c, 0xdbc1cu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0dbc1d  push esi
    X86_AT(c, 0xdbc1du);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0dbc1e  push edi
    X86_AT(c, 0xdbc1eu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0dbc1f  mov bl, byte ptr [ebp + 0x14]
    X86_AT(c, 0xdbc1fu);
    s8(c, 3, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x14u))));
    // 0dbc22  mov ecx, ebp
    X86_AT(c, 0xdbc22u);
    c.r[1] = c.r[5];
    // 0dbc24  call 0xdb578
    X86_AT(c, 0xdbc24u);
    push32(c, 0xdbc29u); x86_call_known(c, 0xdb578u, f_000db578); X86_RET(c, 0xdbc29u);
    X86_TICK(c, 12);
    // 0dbc29  cmp dword ptr [0xb4380], 0xffff
    X86_AT(c, 0xdbc29u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xB4380u))), 0xFFFFu, 0, 4);
    // 0dbc33  jne 0xdbc3f
    X86_AT(c, 0xdbc33u);
    if (x86_cc(c, 5)) { goto L_dbc3f; }
    X86_TICK(c, 2);
    // 0dbc35  mov dword ptr [0xb4380], 6
    X86_AT(c, 0xdbc35u);
    wr32((c.sbase[3] + (uint32_t)(0xB4380u)), 0x6u);
L_dbc3f:
    X86_TICK(c, 12);
    // 0dbc3f  cmp byte ptr [0xb4384], 3
    X86_AT(c, 0xdbc3fu);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0xB4384u))), 0x3u, 0, 1);
    // 0dbc46  jne 0xdbc4f
    X86_AT(c, 0xdbc46u);
    if (x86_cc(c, 5)) { goto L_dbc4f; }
    X86_TICK(c, 9);
    // 0dbc48  mov edi, 0x12
    X86_AT(c, 0xdbc48u);
    c.r[7] = 0x12u;
    // 0dbc4d  jmp 0xdbc54
    X86_AT(c, 0xdbc4du);
    goto L_dbc54;
L_dbc4f:
    X86_TICK(c, 2);
    // 0dbc4f  mov edi, 0x10
    X86_AT(c, 0xdbc4fu);
    c.r[7] = 0x10u;
L_dbc54:
    X86_TICK(c, 39);
    // 0dbc54  lea esi, [ebp - 0x18]
    X86_AT(c, 0xdbc54u);
    c.r[6] = (uint32_t)(c.r[5] + 0xFFFFFFE8u);
    // 0dbc57  push esi
    X86_AT(c, 0xdbc57u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0dbc58  push edi
    X86_AT(c, 0xdbc58u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0dbc59  push dword ptr [0xb4380]
    X86_AT(c, 0xdbc59u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xB4380u))); push32(c, v); }
    // 0dbc5f  push ebx
    X86_AT(c, 0xdbc5fu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0dbc60  push dword ptr [ebp + 0x10]
    X86_AT(c, 0xdbc60u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u))); push32(c, v); }
    // 0dbc63  push dword ptr [ebp + 0xc]
    X86_AT(c, 0xdbc63u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))); push32(c, v); }
    // 0dbc66  push dword ptr [ebp + 8]
    X86_AT(c, 0xdbc66u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, v); }
    // 0dbc69  lea eax, [ebp - 0x30]
    X86_AT(c, 0xdbc69u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFD0u);
    // 0dbc6c  push eax
    X86_AT(c, 0xdbc6cu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0dbc6d  call 0xdb2e4
    X86_AT(c, 0xdbc6du);
    push32(c, 0xdbc72u); x86_call_known(c, 0xdb2e4u, f_000db2e4); X86_RET(c, 0xdbc72u);
    X86_TICK(c, 30);
    // 0dbc72  lea esi, [ebp - 0x30]
    X86_AT(c, 0xdbc72u);
    c.r[6] = (uint32_t)(c.r[5] + 0xFFFFFFD0u);
    // 0dbc75  push edi
    X86_AT(c, 0xdbc75u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0dbc76  mov edi, 0xb48b4
    X86_AT(c, 0xdbc76u);
    c.r[7] = 0xB48B4u;
    // 0dbc7b  mov ecx, 0x17
    X86_AT(c, 0xdbc7bu);
    c.r[1] = 0x17u;
    // 0dbc80  movsb byte ptr es:[edi], byte ptr [esi]
    X86_AT(c, 0xdbc80u);
    x86_string(c, 0, 1, 243, 4, 3);
    // 0dbc82  pop edi
    X86_AT(c, 0xdbc82u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0dbc83  mov ax, word ptr [ebp - 0x18]
    X86_AT(c, 0xdbc83u);
    s16(c, 0, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE8u))));
    // 0dbc87  and ax, ax
    X86_AT(c, 0xdbc87u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_logic(c, v & (c.r[0] & 0xFFFFu), 2)); }
    // 0dbc8a  je 0xdbcaf
    X86_AT(c, 0xdbc8au);
    if (x86_cc(c, 4)) { goto L_dbcaf; }
    X86_TICK(c, 12);
    // 0dbc8c  movzx eax, ax
    X86_AT(c, 0xdbc8cu);
    c.r[0] = (c.r[0] & 0xFFFFu);
    // 0dbc8f  push eax
    X86_AT(c, 0xdbc8fu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0dbc90  call 0xd949c
    X86_AT(c, 0xdbc90u);
    push32(c, 0xdbc95u); x86_call_known(c, 0xd949cu, f_000d949c); X86_RET(c, 0xdbc95u);
    X86_TICK(c, 23);
    // 0dbc95  movzx eax, word ptr [ebp - 0x18]
    X86_AT(c, 0xdbc95u);
    c.r[0] = rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE8u)));
    // 0dbc99  push eax
    X86_AT(c, 0xdbc99u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0dbc9a  lea eax, [ebp - 0x16]
    X86_AT(c, 0xdbc9au);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFEAu);
    // 0dbc9d  push eax
    X86_AT(c, 0xdbc9du);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0dbc9e  mov ecx, dword ptr [0xb4390]
    X86_AT(c, 0xdbc9eu);
    c.r[1] = rd32((c.sbase[3] + (uint32_t)(0xB4390u)));
    // 0dbca4  call dword ptr [0xb438c]
    X86_AT(c, 0xdbca4u);
    { uint32_t t = rd32((c.sbase[3] + (uint32_t)(0xB438Cu))); push32(c, 0xdbcaau); x86_call(c, t); X86_RET(c, 0xdbcaau); }
    X86_TICK(c, 7);
    // 0dbcaa  jmp 0xdbdb3
    X86_AT(c, 0xdbcaau);
    goto L_dbdb3;
L_dbcaf:
    X86_TICK(c, 12);
    // 0dbcaf  cmp dword ptr [0xb4380], 0
    X86_AT(c, 0xdbcafu);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xB4380u))), 0x0u, 0, 4);
    // 0dbcb6  jne 0xdbcc7
    X86_AT(c, 0xdbcb6u);
    if (x86_cc(c, 5)) { goto L_dbcc7; }
    X86_TICK(c, 12);
    // 0dbcb8  test byte ptr [0xb4378], 8
    X86_AT(c, 0xdbcb8u);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(0xB4378u))) & 0x8u, 1);
    // 0dbcbf  jne 0xdbcc7
    X86_AT(c, 0xdbcbfu);
    if (x86_cc(c, 5)) { goto L_dbcc7; }
    X86_TICK(c, 9);
    // 0dbcc1  mov byte ptr [ebp - 0x19], 0
    X86_AT(c, 0xdbcc1u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE7u)), 0x0u);
    // 0dbcc5  jmp 0xdbccb
    X86_AT(c, 0xdbcc5u);
    goto L_dbccb;
L_dbcc7:
    X86_TICK(c, 2);
    // 0dbcc7  mov byte ptr [ebp - 0x19], 1
    X86_AT(c, 0xdbcc7u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE7u)), 0x1u);
L_dbccb:
    X86_TICK(c, 16);
    // 0dbccb  mov al, byte ptr [ebp - 0x19]
    X86_AT(c, 0xdbccbu);
    s8(c, 0, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE7u))));
    // 0dbcce  mov byte ptr [0xb48cb], al
    X86_AT(c, 0xdbcceu);
    wr8((c.sbase[3] + (uint32_t)(0xB48CBu)), g8(c, 0));
    // 0dbcd3  movzx eax, bl
    X86_AT(c, 0xdbcd3u);
    c.r[0] = g8(c, 3);
    // 0dbcd6  cmp eax, 0x45
    X86_AT(c, 0xdbcd6u);
    (void)x86_sub(c, c.r[0], 0x45u, 0, 4);
    // 0dbcd9  je 0xdbd15
    X86_AT(c, 0xdbcd9u);
    if (x86_cc(c, 4)) { goto L_dbd15; }
    X86_TICK(c, 7);
    // 0dbcdb  cmp eax, 0x47
    X86_AT(c, 0xdbcdbu);
    (void)x86_sub(c, c.r[0], 0x47u, 0, 4);
    // 0dbcde  je 0xdbd1e
    X86_AT(c, 0xdbcdeu);
    if (x86_cc(c, 4)) { goto L_dbd1e; }
    X86_TICK(c, 7);
    // 0dbce0  cmp eax, 0x65
    X86_AT(c, 0xdbce0u);
    (void)x86_sub(c, c.r[0], 0x65u, 0, 4);
    // 0dbce3  je 0xdbd15
    X86_AT(c, 0xdbce3u);
    if (x86_cc(c, 4)) { goto L_dbd15; }
    X86_TICK(c, 7);
    // 0dbce5  cmp eax, 0x66
    X86_AT(c, 0xdbce5u);
    (void)x86_sub(c, c.r[0], 0x66u, 0, 4);
    // 0dbce8  je 0xdbcf4
    X86_AT(c, 0xdbce8u);
    if (x86_cc(c, 4)) { goto L_dbcf4; }
    X86_TICK(c, 7);
    // 0dbcea  cmp eax, 0x67
    X86_AT(c, 0xdbceau);
    (void)x86_sub(c, c.r[0], 0x67u, 0, 4);
    // 0dbced  je 0xdbd1e
    X86_AT(c, 0xdbcedu);
    if (x86_cc(c, 4)) { goto L_dbd1e; }
    X86_TICK(c, 7);
    // 0dbcef  jmp 0xdbd94
    X86_AT(c, 0xdbcefu);
    goto L_dbd94;
L_dbcf4:
    X86_TICK(c, 13);
    // 0dbcf4  mov eax, 1
    X86_AT(c, 0xdbcf4u);
    c.r[0] = 0x1u;
    // 0dbcf9  mov edx, dword ptr [0xb48b4]
    X86_AT(c, 0xdbcf9u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(0xB48B4u)));
    // 0dbcff  cmp eax, edx
    X86_AT(c, 0xdbcffu);
    (void)x86_sub(c, c.r[0], c.r[2], 0, 4);
    // 0dbd01  jl 0xdbd04
    X86_AT(c, 0xdbd01u);
    if (x86_cc(c, 12)) { goto L_dbd04; }
    X86_TICK(c, 3);
    // 0dbd03  xchg edx, eax
    X86_AT(c, 0xdbd03u);
    { uint32_t t = c.r[2]; c.r[2] = c.r[0]; c.r[0] = t; }
L_dbd04:
    X86_TICK(c, 21);
    // 0dbd04  add edx, dword ptr [0xb4380]
    X86_AT(c, 0xdbd04u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, rd32((c.sbase[3] + (uint32_t)(0xB4380u))), 0, 4); }
    // 0dbd0a  movzx eax, byte ptr [0xb48cb]
    X86_AT(c, 0xdbd0au);
    c.r[0] = rd8((c.sbase[3] + (uint32_t)(0xB48CBu)));
    // 0dbd11  add eax, edx
    X86_AT(c, 0xdbd11u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, c.r[2], 0, 4); }
    // 0dbd13  jmp 0xdbd4e
    X86_AT(c, 0xdbd13u);
    goto L_dbd4e;
L_dbd15:
    X86_TICK(c, 9);
    // 0dbd15  mov ecx, ebp
    X86_AT(c, 0xdbd15u);
    c.r[1] = c.r[5];
    // 0dbd17  call 0xdbbc4
    X86_AT(c, 0xdbd17u);
    push32(c, 0xdbd1cu); x86_call_known(c, 0xdbbc4u, f_000dbbc4); X86_RET(c, 0xdbd1cu);
    X86_TICK(c, 7);
    // 0dbd1c  jmp 0xdbd4e
    X86_AT(c, 0xdbd1cu);
    goto L_dbd4e;
L_dbd1e:
    X86_TICK(c, 12);
    // 0dbd1e  cmp dword ptr [0xb4380], 0
    X86_AT(c, 0xdbd1eu);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xB4380u))), 0x0u, 0, 4);
    // 0dbd25  jne 0xdbd33
    X86_AT(c, 0xdbd25u);
    if (x86_cc(c, 5)) { goto L_dbd33; }
    X86_TICK(c, 9);
    // 0dbd27  mov dword ptr [0xb48b0], 0
    X86_AT(c, 0xdbd27u);
    wr32((c.sbase[3] + (uint32_t)(0xB48B0u)), 0x0u);
    // 0dbd31  jmp 0xdbd94
    X86_AT(c, 0xdbd31u);
    goto L_dbd94;
L_dbd33:
    X86_TICK(c, 13);
    // 0dbd33  mov eax, dword ptr [0xb48b4]
    X86_AT(c, 0xdbd33u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xB48B4u)));
    // 0dbd38  dec eax
    X86_AT(c, 0xdbd38u);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 0dbd39  cmp eax, 0xfffffffc
    X86_AT(c, 0xdbd39u);
    (void)x86_sub(c, c.r[0], 0xFFFFFFFCu, 0, 4);
    // 0dbd3c  jl 0xdbd46
    X86_AT(c, 0xdbd3cu);
    if (x86_cc(c, 12)) { goto L_dbd46; }
    X86_TICK(c, 11);
    // 0dbd3e  cmp eax, dword ptr [0xb4380]
    X86_AT(c, 0xdbd3eu);
    (void)x86_sub(c, c.r[0], rd32((c.sbase[3] + (uint32_t)(0xB4380u))), 0, 4);
    // 0dbd44  jle 0xdbd55
    X86_AT(c, 0xdbd44u);
    if (x86_cc(c, 14)) { goto L_dbd55; }
L_dbd46:
    X86_TICK(c, 9);
    // 0dbd46  mov ecx, ebp
    X86_AT(c, 0xdbd46u);
    c.r[1] = c.r[5];
    // 0dbd48  call 0xdbbc4
    X86_AT(c, 0xdbd48u);
    push32(c, 0xdbd4du); x86_call_known(c, 0xdbbc4u, f_000dbbc4); X86_RET(c, 0xdbd4du);
    X86_TICK(c, 2);
    // 0dbd4d  dec eax
    X86_AT(c, 0xdbd4du);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
L_dbd4e:
    X86_TICK(c, 9);
    // 0dbd4e  mov dword ptr [0xb48b0], eax
    X86_AT(c, 0xdbd4eu);
    wr32((c.sbase[3] + (uint32_t)(0xB48B0u)), c.r[0]);
    // 0dbd53  jmp 0xdbd8e
    X86_AT(c, 0xdbd53u);
    goto L_dbd8e;
L_dbd55:
    X86_TICK(c, 42);
    // 0dbd55  movzx eax, byte ptr [0xb48cb]
    X86_AT(c, 0xdbd55u);
    c.r[0] = rd8((c.sbase[3] + (uint32_t)(0xB48CBu)));
    // 0dbd5c  add eax, dword ptr [0xb4380]
    X86_AT(c, 0xdbd5cu);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[3] + (uint32_t)(0xB4380u))), 0, 4); }
    // 0dbd62  mov edx, dword ptr [0xb48b4]
    X86_AT(c, 0xdbd62u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(0xB48B4u)));
    // 0dbd68  dec edx
    X86_AT(c, 0xdbd68u);
    { uint32_t v = c.r[2]; c.r[2] = x86_dec(c, v, 4); }
    // 0dbd69  mov ecx, dword ptr [0xb4380]
    X86_AT(c, 0xdbd69u);
    c.r[1] = rd32((c.sbase[3] + (uint32_t)(0xB4380u)));
    // 0dbd6f  cmp edx, ecx
    X86_AT(c, 0xdbd6fu);
    (void)x86_sub(c, c.r[2], c.r[1], 0, 4);
    // 0dbd71  sete dl
    X86_AT(c, 0xdbd71u);
    s8(c, 2, x86_cc(c, 4) ? 1u : 0u);
    // 0dbd74  movzx edx, dl
    X86_AT(c, 0xdbd74u);
    c.r[2] = g8(c, 2);
    // 0dbd77  add edx, eax
    X86_AT(c, 0xdbd77u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0dbd79  mov dword ptr [0xb48b0], edx
    X86_AT(c, 0xdbd79u);
    wr32((c.sbase[3] + (uint32_t)(0xB48B0u)), c.r[2]);
    // 0dbd7f  and ecx, ecx
    X86_AT(c, 0xdbd7fu);
    { uint32_t v = c.r[1]; c.r[1] = x86_logic(c, v & c.r[1], 4); }
    // 0dbd81  jne 0xdbd89
    X86_AT(c, 0xdbd81u);
    if (x86_cc(c, 5)) { goto L_dbd89; }
    X86_TICK(c, 6);
    // 0dbd83  inc dword ptr [0xb48b0]
    X86_AT(c, 0xdbd83u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xB48B0u)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
L_dbd89:
    X86_TICK(c, 4);
    // 0dbd89  mov eax, dword ptr [0xb48b0]
    X86_AT(c, 0xdbd89u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xB48B0u)));
L_dbd8e:
    X86_TICK(c, 7);
    // 0dbd8e  add dword ptr [0xb4388], eax
    X86_AT(c, 0xdbd8eu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xB4388u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
L_dbd94:
    X86_TICK(c, 13);
    // 0dbd94  mov byte ptr [0xb48a8], 0
    X86_AT(c, 0xdbd94u);
    wr8((c.sbase[3] + (uint32_t)(0xB48A8u)), 0x0u);
    // 0dbd9b  push ebx
    X86_AT(c, 0xdbd9bu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0dbd9c  mov ecx, ebp
    X86_AT(c, 0xdbd9cu);
    c.r[1] = c.r[5];
    // 0dbd9e  call 0xdbaf0
    X86_AT(c, 0xdbd9eu);
    push32(c, 0xdbda3u); x86_call_known(c, 0xdbaf0u, f_000dbaf0); X86_RET(c, 0xdbda3u);
    X86_TICK(c, 12);
    // 0dbda3  cmp byte ptr [0xb48a8], 0
    X86_AT(c, 0xdbda3u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0xB48A8u))), 0x0u, 0, 1);
    // 0dbdaa  jne 0xdbdb3
    X86_AT(c, 0xdbdaau);
    if (x86_cc(c, 5)) { goto L_dbdb3; }
    X86_TICK(c, 9);
    // 0dbdac  mov ecx, ebp
    X86_AT(c, 0xdbdacu);
    c.r[1] = c.r[5];
    // 0dbdae  call 0xdb514
    X86_AT(c, 0xdbdaeu);
    push32(c, 0xdbdb3u); x86_call_known(c, 0xdb514u, f_000db514); X86_RET(c, 0xdbdb3u);
L_dbdb3:
    X86_TICK(c, 28);
    // 0dbdb3  pop edi
    X86_AT(c, 0xdbdb3u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0dbdb4  pop esi
    X86_AT(c, 0xdbdb4u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0dbdb5  pop ebx
    X86_AT(c, 0xdbdb5u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0dbdb6  leave 
    X86_AT(c, 0xdbdb6u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0dbdb7  ret 0x10
    X86_AT(c, 0xdbdb7u);
    c.eip = pop32(c); c.r[4] += 0x10u; return;
    x86_fault(c, 0xdbc18u, "ran off the end of a function");
}
void f_000dbdd8(X86Cpu& c) {
L_dbdd8:
    X86_TICK(c, 13);
    // 0dbdd8  mov eax, dword ptr [0xb48cc]
    X86_AT(c, 0xdbdd8u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xB48CCu)));
    // 0dbddd  mov edx, 0xdbdbc
    X86_AT(c, 0xdbdddu);
    c.r[2] = 0xDBDBCu;
    // 0dbde2  cmp edx, eax
    X86_AT(c, 0xdbde2u);
    (void)x86_sub(c, c.r[2], c.r[0], 0, 4);
    // 0dbde4  je 0xdbdef
    X86_AT(c, 0xdbde4u);
    if (x86_cc(c, 4)) { goto L_dbdef; }
    X86_TICK(c, 7);
    // 0dbde6  call eax
    X86_AT(c, 0xdbde6u);
    { uint32_t t = c.r[0]; push32(c, 0xdbde8u); x86_call(c, t); X86_RET(c, 0xdbde8u); }
    X86_TICK(c, 9);
    // 0dbde8  mov dword ptr [0xb48cc], eax
    X86_AT(c, 0xdbde8u);
    wr32((c.sbase[3] + (uint32_t)(0xB48CCu)), c.r[0]);
    // 0dbded  jmp 0xdbdd8
    X86_AT(c, 0xdbdedu);
    X86_POLL(c, 0xdbdd8u); goto L_dbdd8;
L_dbdef:
    X86_TICK(c, 10);
    // 0dbdef  ret 
    X86_AT(c, 0xdbdefu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xdbdd8u, "ran off the end of a function");
}
void f_000dbe00(X86Cpu& c) {
    X86_TICK(c, 23);
    // 0dbe00  enter 4, 0
    X86_AT(c, 0xdbe00u);
    x86_enter(c, 0x4u, 0x0u, 4);
    // 0dbe04  mov al, byte ptr [ebp + 8]
    X86_AT(c, 0xdbe04u);
    s8(c, 0, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))));
    // 0dbe07  add al, 0x30
    X86_AT(c, 0xdbe07u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, 0x30u, 0, 1)); }
    // 0dbe09  mov byte ptr [ebp - 2], al
    X86_AT(c, 0xdbe09u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFEu)), g8(c, 0));
    // 0dbe0c  push 0x12ae0
    X86_AT(c, 0xdbe0cu);
    { uint32_t v = 0x12AE0u; push32(c, v); }
    // 0dbe11  call 0xdc0f8
    X86_AT(c, 0xdbe11u);
    push32(c, 0xdbe16u); x86_call_known(c, 0xdc0f8u, f_000dc0f8); X86_RET(c, 0xdbe16u);
    X86_TICK(c, 11);
    // 0dbe16  lea eax, [ebp - 4]
    X86_AT(c, 0xdbe16u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFFCu);
    // 0dbe19  push eax
    X86_AT(c, 0xdbe19u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0dbe1a  call 0xdc0f8
    X86_AT(c, 0xdbe1au);
    push32(c, 0xdbe1fu); x86_call_known(c, 0xdc0f8u, f_000dc0f8); X86_RET(c, 0xdbe1fu);
    X86_TICK(c, 7);
    // 0dbe1f  call 0xdc114
    X86_AT(c, 0xdbe1fu);
    push32(c, 0xdbe24u); x86_call_known(c, 0xdc114u, f_000dc114); X86_RET(c, 0xdbe24u);
    X86_TICK(c, 13);
    // 0dbe24  mov ax, word ptr [0xb4874]
    X86_AT(c, 0xdbe24u);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(0xB4874u))));
    // 0dbe2a  push eax
    X86_AT(c, 0xdbe2au);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0dbe2b  call 0xdbe84
    X86_AT(c, 0xdbe2bu);
    push32(c, 0xdbe30u); x86_call_known(c, 0xdbe84u, f_000dbe84); X86_RET(c, 0xdbe30u);
    X86_TICK(c, 9);
    // 0dbe30  push 0x12afc
    X86_AT(c, 0xdbe30u);
    { uint32_t v = 0x12AFCu; push32(c, v); }
    // 0dbe35  call 0xdc0f8
    X86_AT(c, 0xdbe35u);
    push32(c, 0xdbe3au); x86_call_known(c, 0xdc0f8u, f_000dc0f8); X86_RET(c, 0xdbe3au);
    X86_TICK(c, 7);
    // 0dbe3a  call 0xdc114
    X86_AT(c, 0xdbe3au);
    push32(c, 0xdbe3fu); x86_call_known(c, 0xdc114u, f_000dc114); X86_RET(c, 0xdbe3fu);
    X86_TICK(c, 9);
    // 0dbe3f  push 0xffffffff
    X86_AT(c, 0xdbe3fu);
    { uint32_t v = 0xFFFFFFFFu; push32(c, v); }
    // 0dbe41  call 0xda874
    X86_AT(c, 0xdbe41u);
    push32(c, 0xdbe46u); x86_call_known(c, 0xda874u, f_000da874); X86_RET(c, 0xdbe46u);
    X86_TICK(c, 16);
    // 0dbe46  leave 
    X86_AT(c, 0xdbe46u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0dbe47  ret 8
    X86_AT(c, 0xdbe47u);
    c.eip = pop32(c); c.r[4] += 0x8u; return;
    x86_fault(c, 0xdbe00u, "ran off the end of a function");
}
void f_000dbe84(X86Cpu& c) {
    X86_TICK(c, 9);
    // 0dbe84  push 0x12b38
    X86_AT(c, 0xdbe84u);
    { uint32_t v = 0x12B38u; push32(c, v); }
    // 0dbe89  call 0xdc0f8
    X86_AT(c, 0xdbe89u);
    push32(c, 0xdbe8eu); x86_call_known(c, 0xdc0f8u, f_000dc0f8); X86_RET(c, 0xdbe8eu);
    X86_TICK(c, 7);
    // 0dbe8e  call 0xdc114
    X86_AT(c, 0xdbe8eu);
    push32(c, 0xdbe93u); x86_call_known(c, 0xdc114u, f_000dc114); X86_RET(c, 0xdbe93u);
    X86_TICK(c, 10);
    // 0dbe93  ret 4
    X86_AT(c, 0xdbe93u);
    c.eip = pop32(c); c.r[4] += 0x4u; return;
    x86_fault(c, 0xdbe84u, "ran off the end of a function");
}
void f_000dbe98(X86Cpu& c) {
    X86_TICK(c, 31);
    // 0dbe98  push ebp
    X86_AT(c, 0xdbe98u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0dbe99  mov ebp, esp
    X86_AT(c, 0xdbe99u);
    c.r[5] = c.r[4];
    // 0dbe9b  push edi
    X86_AT(c, 0xdbe9bu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0dbe9c  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0xdbe9cu);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0dbe9f  movzx eax, word ptr [edi]
    X86_AT(c, 0xdbe9fu);
    c.r[0] = rd16((c.sbase[3] + (uint32_t)(c.r[7])));
    // 0dbea2  push eax
    X86_AT(c, 0xdbea2u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0dbea3  lea eax, [edi + 2]
    X86_AT(c, 0xdbea3u);
    c.r[0] = (uint32_t)(c.r[7] + 0x2u);
    // 0dbea6  push eax
    X86_AT(c, 0xdbea6u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0dbea7  push 2
    X86_AT(c, 0xdbea7u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0dbea9  call 0xda8d4
    X86_AT(c, 0xdbea9u);
    push32(c, 0xdbeaeu); x86_call_known(c, 0xda8d4u, f_000da8d4); X86_RET(c, 0xdbeaeu);
    X86_TICK(c, 19);
    // 0dbeae  movzx eax, word ptr [0xb435c]
    X86_AT(c, 0xdbeaeu);
    c.r[0] = rd16((c.sbase[3] + (uint32_t)(0xB435Cu)));
    // 0dbeb5  push eax
    X86_AT(c, 0xdbeb5u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0dbeb6  push 0xb435e
    X86_AT(c, 0xdbeb6u);
    { uint32_t v = 0xB435Eu; push32(c, v); }
    // 0dbebb  push 2
    X86_AT(c, 0xdbebbu);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0dbebd  call 0xda8d4
    X86_AT(c, 0xdbebdu);
    push32(c, 0xdbec2u); x86_call_known(c, 0xda8d4u, f_000da8d4); X86_RET(c, 0xdbec2u);
    X86_TICK(c, 20);
    // 0dbec2  pop edi
    X86_AT(c, 0xdbec2u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0dbec3  leave 
    X86_AT(c, 0xdbec3u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0dbec4  ret 4
    X86_AT(c, 0xdbec4u);
    c.eip = pop32(c); c.r[4] += 0x4u; return;
    x86_fault(c, 0xdbe98u, "ran off the end of a function");
}
void f_000dbf2c(X86Cpu& c) {
    X86_TICK(c, 95);
    // 0dbf2c  push esi
    X86_AT(c, 0xdbf2cu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0dbf2d  push edi
    X86_AT(c, 0xdbf2du);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0dbf2e  push ebx
    X86_AT(c, 0xdbf2eu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0dbf2f  push ebp
    X86_AT(c, 0xdbf2fu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0dbf30  push ds
    X86_AT(c, 0xdbf30u);
    push32(c, c.sreg[3]);
    // 0dbf31  push es
    X86_AT(c, 0xdbf31u);
    push32(c, c.sreg[0]);
    // 0dbf32  mov eax, dword ptr [0xb47ec]
    X86_AT(c, 0xdbf32u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xB47ECu)));
    // 0dbf37  mov ebx, dword ptr [0xb47f0]
    X86_AT(c, 0xdbf37u);
    c.r[3] = rd32((c.sbase[3] + (uint32_t)(0xB47F0u)));
    // 0dbf3d  mov ecx, dword ptr [0xb47f4]
    X86_AT(c, 0xdbf3du);
    c.r[1] = rd32((c.sbase[3] + (uint32_t)(0xB47F4u)));
    // 0dbf43  mov edx, dword ptr [0xb47f8]
    X86_AT(c, 0xdbf43u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(0xB47F8u)));
    // 0dbf49  mov esi, dword ptr [0xb47fc]
    X86_AT(c, 0xdbf49u);
    c.r[6] = rd32((c.sbase[3] + (uint32_t)(0xB47FCu)));
    // 0dbf4f  mov edi, dword ptr [0xb4800]
    X86_AT(c, 0xdbf4fu);
    c.r[7] = rd32((c.sbase[3] + (uint32_t)(0xB4800u)));
    // 0dbf55  push dword ptr [0xb4808]
    X86_AT(c, 0xdbf55u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xB4808u))); push32(c, v); }
    // 0dbf5b  pop es
    X86_AT(c, 0xdbf5bu);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 0dbf5c  push ds
    X86_AT(c, 0xdbf5cu);
    push32(c, c.sreg[3]);
    // 0dbf5d  push dword ptr [0xb4804]
    X86_AT(c, 0xdbf5du);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xB4804u))); push32(c, v); }
    // 0dbf63  pop ds
    X86_AT(c, 0xdbf63u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 0dbf64  clc 
    X86_AT(c, 0xdbf64u);
    c.fl &= ~X86_CF;
    // 0dbf65  int 0x21
    X86_AT(c, 0xdbf65u);
    x86_int(c, 0x21, 0xdbf67u);
    X86_TICK(c, 77);
    // 0dbf67  pop ebp
    X86_AT(c, 0xdbf67u);
    { uint32_t v = pop32(c); c.r[5] = v; }
    // 0dbf68  push ds
    X86_AT(c, 0xdbf68u);
    push32(c, c.sreg[3]);
    // 0dbf69  mov ds, ebp
    X86_AT(c, 0xdbf69u);
    x86_load_seg(c, 3, (c.r[5] & 0xFFFFu) & 0xFFFFu);
    // 0dbf6b  pop dword ptr [0xb4804]
    X86_AT(c, 0xdbf6bu);
    { uint32_t v = pop32(c); wr32((c.sbase[3] + (uint32_t)(0xB4804u)), v); }
    // 0dbf71  push es
    X86_AT(c, 0xdbf71u);
    push32(c, c.sreg[0]);
    // 0dbf72  pop dword ptr [0xb4808]
    X86_AT(c, 0xdbf72u);
    { uint32_t v = pop32(c); wr32((c.sbase[3] + (uint32_t)(0xB4808u)), v); }
    // 0dbf78  mov dword ptr [0xb47ec], eax
    X86_AT(c, 0xdbf78u);
    wr32((c.sbase[3] + (uint32_t)(0xB47ECu)), c.r[0]);
    // 0dbf7d  mov dword ptr [0xb47f0], ebx
    X86_AT(c, 0xdbf7du);
    wr32((c.sbase[3] + (uint32_t)(0xB47F0u)), c.r[3]);
    // 0dbf83  mov dword ptr [0xb47f4], ecx
    X86_AT(c, 0xdbf83u);
    wr32((c.sbase[3] + (uint32_t)(0xB47F4u)), c.r[1]);
    // 0dbf89  mov dword ptr [0xb47f8], edx
    X86_AT(c, 0xdbf89u);
    wr32((c.sbase[3] + (uint32_t)(0xB47F8u)), c.r[2]);
    // 0dbf8f  mov dword ptr [0xb47fc], esi
    X86_AT(c, 0xdbf8fu);
    wr32((c.sbase[3] + (uint32_t)(0xB47FCu)), c.r[6]);
    // 0dbf95  mov dword ptr [0xb4800], edi
    X86_AT(c, 0xdbf95u);
    wr32((c.sbase[3] + (uint32_t)(0xB4800u)), c.r[7]);
    // 0dbf9b  pushf 
    X86_AT(c, 0xdbf9bu);
    push16(c, c.fl & 0xFFFFu);
    // 0dbf9d  pop word ptr [0xb480c]
    X86_AT(c, 0xdbf9du);
    { uint32_t v = pop16(c); wr16((c.sbase[3] + (uint32_t)(0xB480Cu)), v); }
    // 0dbfa4  pop es
    X86_AT(c, 0xdbfa4u);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 0dbfa5  pop ds
    X86_AT(c, 0xdbfa5u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 0dbfa6  pop ebp
    X86_AT(c, 0xdbfa6u);
    { uint32_t v = pop32(c); c.r[5] = v; }
    // 0dbfa7  pop ebx
    X86_AT(c, 0xdbfa7u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0dbfa8  pop edi
    X86_AT(c, 0xdbfa8u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0dbfa9  pop esi
    X86_AT(c, 0xdbfa9u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0dbfaa  ret 
    X86_AT(c, 0xdbfaau);
    c.eip = pop32(c); return;
    x86_fault(c, 0xdbf2cu, "ran off the end of a function");
}
void f_000dbfac(X86Cpu& c) {
    X86_TICK(c, 31);
    // 0dbfac  push ebp
    X86_AT(c, 0xdbfacu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0dbfad  mov ebp, esp
    X86_AT(c, 0xdbfadu);
    c.r[5] = c.r[4];
    // 0dbfaf  push esi
    X86_AT(c, 0xdbfafu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0dbfb0  push edi
    X86_AT(c, 0xdbfb0u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0dbfb1  push ebx
    X86_AT(c, 0xdbfb1u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0dbfb2  mov esi, dword ptr [ebp + 8]
    X86_AT(c, 0xdbfb2u);
    c.r[6] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0dbfb5  mov edi, dword ptr [ebp + 0xc]
    X86_AT(c, 0xdbfb5u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0dbfb8  xor edx, edx
    X86_AT(c, 0xdbfb8u);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v ^ c.r[2], 4); }
    // 0dbfba  movzx ecx, word ptr [ebp + 0x10]
    X86_AT(c, 0xdbfbau);
    c.r[1] = rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u)));
    // 0dbfbe  shr ecx, 1
    X86_AT(c, 0xdbfbeu);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 4, w); if (w) c.r[1] = r; }
    // 0dbfc0  clc 
    X86_AT(c, 0xdbfc0u);
    c.fl &= ~X86_CF;
L_dbfc1:
    X86_TICK(c, 24);
    // 0dbfc1  mov eax, dword ptr [edi + edx*4]
    X86_AT(c, 0xdbfc1u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + c.r[2] * 4)));
    // 0dbfc4  adc dword ptr [esi + edx*4], eax
    X86_AT(c, 0xdbfc4u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[6] + c.r[2] * 4)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], c.fl & 1, 4)); }
    // 0dbfc7  inc edx
    X86_AT(c, 0xdbfc7u);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
    // 0dbfc8  loop 0xdbfc1
    X86_AT(c, 0xdbfc8u);
    c.r[1] -= 1; if (c.r[1] != 0) { X86_POLL(c, 0xdbfc1u); goto L_dbfc1; }
    X86_TICK(c, 31);
    // 0dbfca  mov al, 0
    X86_AT(c, 0xdbfcau);
    s8(c, 0, 0x0u);
    // 0dbfcc  rcl al, 1
    X86_AT(c, 0xdbfccu);
    { uint32_t v = g8(c, 0); bool w; uint32_t r = x86_shift(c, 2, v, 0x1u, 1, w); if (w) s8(c, 0, r); }
    // 0dbfce  pop ebx
    X86_AT(c, 0xdbfceu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0dbfcf  pop edi
    X86_AT(c, 0xdbfcfu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0dbfd0  pop esi
    X86_AT(c, 0xdbfd0u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0dbfd1  pop ebp
    X86_AT(c, 0xdbfd1u);
    { uint32_t v = pop32(c); c.r[5] = v; }
    // 0dbfd2  ret 0xc
    X86_AT(c, 0xdbfd2u);
    c.eip = pop32(c); c.r[4] += 0xCu; return;
    x86_fault(c, 0xdbfacu, "ran off the end of a function");
}
void f_000dbfd5(X86Cpu& c) {
    X86_TICK(c, 28);
    // 0dbfd5  push ebp
    X86_AT(c, 0xdbfd5u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0dbfd6  mov ebp, esp
    X86_AT(c, 0xdbfd6u);
    c.r[5] = c.r[4];
    // 0dbfd8  push esi
    X86_AT(c, 0xdbfd8u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0dbfd9  push edi
    X86_AT(c, 0xdbfd9u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0dbfda  push ebx
    X86_AT(c, 0xdbfdau);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0dbfdb  mov esi, dword ptr [ebp + 8]
    X86_AT(c, 0xdbfdbu);
    c.r[6] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0dbfde  mov edi, dword ptr [ebp + 0xc]
    X86_AT(c, 0xdbfdeu);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0dbfe1  xor edx, edx
    X86_AT(c, 0xdbfe1u);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v ^ c.r[2], 4); }
    // 0dbfe3  movzx ecx, word ptr [ebp + 0x10]
    X86_AT(c, 0xdbfe3u);
    c.r[1] = rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u)));
    // 0dbfe7  clc 
    X86_AT(c, 0xdbfe7u);
    c.fl &= ~X86_CF;
L_dbfe8:
    X86_TICK(c, 24);
    // 0dbfe8  mov ax, word ptr [edi + edx*2]
    X86_AT(c, 0xdbfe8u);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(c.r[7] + c.r[2] * 2))));
    // 0dbfec  sbb word ptr [esi + edx*2], ax
    X86_AT(c, 0xdbfecu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[6] + c.r[2] * 2)); uint32_t v = rd16(ea); wr16(ea, x86_sub(c, v, (c.r[0] & 0xFFFFu), c.fl & 1, 2)); }
    // 0dbff0  inc edx
    X86_AT(c, 0xdbff0u);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
    // 0dbff1  loop 0xdbfe8
    X86_AT(c, 0xdbff1u);
    c.r[1] -= 1; if (c.r[1] != 0) { X86_POLL(c, 0xdbfe8u); goto L_dbfe8; }
    X86_TICK(c, 31);
    // 0dbff3  mov al, 0
    X86_AT(c, 0xdbff3u);
    s8(c, 0, 0x0u);
    // 0dbff5  rcl al, 1
    X86_AT(c, 0xdbff5u);
    { uint32_t v = g8(c, 0); bool w; uint32_t r = x86_shift(c, 2, v, 0x1u, 1, w); if (w) s8(c, 0, r); }
    // 0dbff7  pop ebx
    X86_AT(c, 0xdbff7u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0dbff8  pop edi
    X86_AT(c, 0xdbff8u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0dbff9  pop esi
    X86_AT(c, 0xdbff9u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0dbffa  pop ebp
    X86_AT(c, 0xdbffau);
    { uint32_t v = pop32(c); c.r[5] = v; }
    // 0dbffb  ret 0xc
    X86_AT(c, 0xdbffbu);
    c.eip = pop32(c); c.r[4] += 0xCu; return;
    x86_fault(c, 0xdbfd5u, "ran off the end of a function");
}
void f_000dbffe(X86Cpu& c) {
    X86_TICK(c, 31);
    // 0dbffe  push ebp
    X86_AT(c, 0xdbffeu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0dbfff  mov ebp, esp
    X86_AT(c, 0xdbfffu);
    c.r[5] = c.r[4];
    // 0dc001  push esi
    X86_AT(c, 0xdc001u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0dc002  push edi
    X86_AT(c, 0xdc002u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0dc003  push ebx
    X86_AT(c, 0xdc003u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0dc004  mov esi, dword ptr [ebp + 8]
    X86_AT(c, 0xdc004u);
    c.r[6] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0dc007  mov edi, dword ptr [ebp + 0xc]
    X86_AT(c, 0xdc007u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0dc00a  xor edx, edx
    X86_AT(c, 0xdc00au);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v ^ c.r[2], 4); }
    // 0dc00c  movzx ecx, word ptr [ebp + 0x10]
    X86_AT(c, 0xdc00cu);
    c.r[1] = rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u)));
    // 0dc010  shr ecx, 1
    X86_AT(c, 0xdc010u);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 4, w); if (w) c.r[1] = r; }
    // 0dc012  clc 
    X86_AT(c, 0xdc012u);
    c.fl &= ~X86_CF;
L_dc013:
    X86_TICK(c, 25);
    // 0dc013  mov eax, dword ptr [edi + edx*4]
    X86_AT(c, 0xdc013u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + c.r[2] * 4)));
    // 0dc016  sbb eax, dword ptr [esi + edx*4]
    X86_AT(c, 0xdc016u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[6] + c.r[2] * 4))), c.fl & 1, 4); }
    // 0dc019  mov dword ptr [esi + edx*4], eax
    X86_AT(c, 0xdc019u);
    wr32((c.sbase[3] + (uint32_t)(c.r[6] + c.r[2] * 4)), c.r[0]);
    // 0dc01c  inc edx
    X86_AT(c, 0xdc01cu);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
    // 0dc01d  loop 0xdc013
    X86_AT(c, 0xdc01du);
    c.r[1] -= 1; if (c.r[1] != 0) { X86_POLL(c, 0xdc013u); goto L_dc013; }
    X86_TICK(c, 31);
    // 0dc01f  mov al, 0
    X86_AT(c, 0xdc01fu);
    s8(c, 0, 0x0u);
    // 0dc021  rcl al, 1
    X86_AT(c, 0xdc021u);
    { uint32_t v = g8(c, 0); bool w; uint32_t r = x86_shift(c, 2, v, 0x1u, 1, w); if (w) s8(c, 0, r); }
    // 0dc023  pop ebx
    X86_AT(c, 0xdc023u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0dc024  pop edi
    X86_AT(c, 0xdc024u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0dc025  pop esi
    X86_AT(c, 0xdc025u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0dc026  pop ebp
    X86_AT(c, 0xdc026u);
    { uint32_t v = pop32(c); c.r[5] = v; }
    // 0dc027  ret 0xc
    X86_AT(c, 0xdc027u);
    c.eip = pop32(c); c.r[4] += 0xCu; return;
    x86_fault(c, 0xdbffeu, "ran off the end of a function");
}
void f_000dc02a(X86Cpu& c) {
    X86_TICK(c, 19);
    // 0dc02a  push esi
    X86_AT(c, 0xdc02au);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0dc02b  mov esi, dword ptr [esp + 8]
    X86_AT(c, 0xdc02bu);
    c.r[6] = rd32((c.sbase[2] + (uint32_t)(c.r[4] + 0x8u)));
    // 0dc02f  movzx ecx, word ptr [esp + 0xc]
    X86_AT(c, 0xdc02fu);
    c.r[1] = rd16((c.sbase[2] + (uint32_t)(c.r[4] + 0xCu)));
    // 0dc034  shr ecx, 1
    X86_AT(c, 0xdc034u);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 4, w); if (w) c.r[1] = r; }
    // 0dc036  xor edx, edx
    X86_AT(c, 0xdc036u);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v ^ c.r[2], 4); }
    // 0dc038  clc 
    X86_AT(c, 0xdc038u);
    c.fl &= ~X86_CF;
L_dc039:
    X86_TICK(c, 23);
    // 0dc039  mov eax, 0
    X86_AT(c, 0xdc039u);
    c.r[0] = 0x0u;
    // 0dc03e  sbb eax, dword ptr [esi + edx*4]
    X86_AT(c, 0xdc03eu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[6] + c.r[2] * 4))), c.fl & 1, 4); }
    // 0dc041  mov dword ptr [esi + edx*4], eax
    X86_AT(c, 0xdc041u);
    wr32((c.sbase[3] + (uint32_t)(c.r[6] + c.r[2] * 4)), c.r[0]);
    // 0dc044  inc edx
    X86_AT(c, 0xdc044u);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
    // 0dc045  loop 0xdc039
    X86_AT(c, 0xdc045u);
    c.r[1] -= 1; if (c.r[1] != 0) { X86_POLL(c, 0xdc039u); goto L_dc039; }
    X86_TICK(c, 19);
    // 0dc047  mov al, 0
    X86_AT(c, 0xdc047u);
    s8(c, 0, 0x0u);
    // 0dc049  rcl al, 1
    X86_AT(c, 0xdc049u);
    { uint32_t v = g8(c, 0); bool w; uint32_t r = x86_shift(c, 2, v, 0x1u, 1, w); if (w) s8(c, 0, r); }
    // 0dc04b  pop esi
    X86_AT(c, 0xdc04bu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0dc04c  ret 8
    X86_AT(c, 0xdc04cu);
    c.eip = pop32(c); c.r[4] += 0x8u; return;
    x86_fault(c, 0xdc02au, "ran off the end of a function");
}
void f_000dc04f(X86Cpu& c) {
    X86_TICK(c, 18);
    // 0dc04f  push edi
    X86_AT(c, 0xdc04fu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0dc050  push ebx
    X86_AT(c, 0xdc050u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0dc051  mov edi, dword ptr [esp + 0xc]
    X86_AT(c, 0xdc051u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[4] + 0xCu)));
    // 0dc055  xor eax, eax
    X86_AT(c, 0xdc055u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v ^ c.r[0], 4); }
    // 0dc057  mov ebx, dword ptr [edi + 4]
    X86_AT(c, 0xdc057u);
    c.r[3] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x4u)));
    // 0dc05a  mov edx, dword ptr [edi]
    X86_AT(c, 0xdc05au);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[7])));
L_dc05c:
    X86_TICK(c, 7);
    // 0dc05c  and ebx, ebx
    X86_AT(c, 0xdc05cu);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & c.r[3], 4); }
    // 0dc05e  jne 0xdc06b
    X86_AT(c, 0xdc05eu);
    if (x86_cc(c, 5)) { goto L_dc06b; }
    X86_TICK(c, 13);
    // 0dc060  mov ebx, edx
    X86_AT(c, 0xdc060u);
    c.r[3] = c.r[2];
    // 0dc062  xor edx, edx
    X86_AT(c, 0xdc062u);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v ^ c.r[2], 4); }
    // 0dc064  add eax, 0x20
    X86_AT(c, 0xdc064u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0x20u, 0, 4); }
    // 0dc069  jmp 0xdc05c
    X86_AT(c, 0xdc069u);
    X86_POLL(c, 0xdc05cu); goto L_dc05c;
L_dc06b:
    X86_TICK(c, 44);
    // 0dc06b  bsr ecx, ebx
    X86_AT(c, 0xdc06bu);
    c.r[1] = x86_bsr(c, c.r[3], c.r[1]);
    // 0dc06e  sub ecx, 0x1f
    X86_AT(c, 0xdc06eu);
    { uint32_t v = c.r[1]; c.r[1] = x86_sub(c, v, 0x1Fu, 0, 4); }
    // 0dc071  neg ecx
    X86_AT(c, 0xdc071u);
    { uint32_t v = c.r[1]; c.r[1] = x86_neg(c, v, 4); }
    // 0dc073  shld ebx, edx, cl
    X86_AT(c, 0xdc073u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_double(c, true, v, c.r[2], g8(c, 1), 4, w); if (w) c.r[3] = r; }
    // 0dc076  shl edx, cl
    X86_AT(c, 0xdc076u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, g8(c, 1), 4, w); if (w) c.r[2] = r; }
    // 0dc078  add eax, ecx
    X86_AT(c, 0xdc078u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, c.r[1], 0, 4); }
    // 0dc07a  mov dword ptr [edi + 4], ebx
    X86_AT(c, 0xdc07au);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] + 0x4u)), c.r[3]);
    // 0dc07d  mov dword ptr [edi], edx
    X86_AT(c, 0xdc07du);
    wr32((c.sbase[3] + (uint32_t)(c.r[7])), c.r[2]);
    // 0dc07f  pop ebx
    X86_AT(c, 0xdc07fu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0dc080  pop edi
    X86_AT(c, 0xdc080u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0dc081  ret 4
    X86_AT(c, 0xdc081u);
    c.eip = pop32(c); c.r[4] += 0x4u; return;
    x86_fault(c, 0xdc04fu, "ran off the end of a function");
}
void f_000dc084(X86Cpu& c) {
    X86_TICK(c, 33);
    // 0dc084  mov edx, dword ptr [esp + 4]
    X86_AT(c, 0xdc084u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[4] + 0x4u)));
    // 0dc088  shl dword ptr [edx], 1
    X86_AT(c, 0xdc088u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[2])); uint32_t v = rd32(ea); bool w; uint32_t r = x86_shift(c, 4, v, 0x1u, 4, w); if (w) wr32(ea, r); }
    // 0dc08a  rcl dword ptr [edx + 4], 1
    X86_AT(c, 0xdc08au);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[2] + 0x4u)); uint32_t v = rd32(ea); bool w; uint32_t r = x86_shift(c, 2, v, 0x1u, 4, w); if (w) wr32(ea, r); }
    // 0dc08d  mov al, 0
    X86_AT(c, 0xdc08du);
    s8(c, 0, 0x0u);
    // 0dc08f  rcl al, 1
    X86_AT(c, 0xdc08fu);
    { uint32_t v = g8(c, 0); bool w; uint32_t r = x86_shift(c, 2, v, 0x1u, 1, w); if (w) s8(c, 0, r); }
    // 0dc091  ret 4
    X86_AT(c, 0xdc091u);
    c.eip = pop32(c); c.r[4] += 0x4u; return;
    x86_fault(c, 0xdc084u, "ran off the end of a function");
}
void f_000dc0a0(X86Cpu& c) {
    X86_TICK(c, 15);
    // 0dc0a0  mov edx, dword ptr [esp + 4]
    X86_AT(c, 0xdc0a0u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[4] + 0x4u)));
    // 0dc0a4  movzx ecx, word ptr [esp + 8]
    X86_AT(c, 0xdc0a4u);
    c.r[1] = rd16((c.sbase[2] + (uint32_t)(c.r[4] + 0x8u)));
    // 0dc0a9  jecxz 0xdc0e0
    X86_AT(c, 0xdc0a9u);
    if (c.r[1] == 0) { goto L_dc0e0; }
    X86_TICK(c, 7);
    // 0dc0ab  cmp ecx, 0x20
    X86_AT(c, 0xdc0abu);
    (void)x86_sub(c, c.r[1], 0x20u, 0, 4);
    // 0dc0ae  jl 0xdc0c7
    X86_AT(c, 0xdc0aeu);
    if (x86_cc(c, 12)) { goto L_dc0c7; }
    X86_TICK(c, 14);
    // 0dc0b0  mov eax, dword ptr [edx + 4]
    X86_AT(c, 0xdc0b0u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0x4u)));
    // 0dc0b3  clc 
    X86_AT(c, 0xdc0b3u);
    c.fl &= ~X86_CF;
    // 0dc0b4  shr eax, cl
    X86_AT(c, 0xdc0b4u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 0dc0b6  jae 0xdc0b9
    X86_AT(c, 0xdc0b6u);
    if (x86_cc(c, 3)) { goto L_dc0b9; }
    X86_TICK(c, 2);
    // 0dc0b8  inc eax
    X86_AT(c, 0xdc0b8u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
L_dc0b9:
    X86_TICK(c, 11);
    // 0dc0b9  mov dword ptr [edx], eax
    X86_AT(c, 0xdc0b9u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2])), c.r[0]);
    // 0dc0bb  mov dword ptr [edx + 4], 0
    X86_AT(c, 0xdc0bbu);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0x4u)), 0x0u);
    // 0dc0c2  jmp 0xdc0e0
    X86_AT(c, 0xdc0c2u);
    goto L_dc0e0;
L_dc0c7:
    X86_TICK(c, 31);
    // 0dc0c7  mov eax, dword ptr [edx + 4]
    X86_AT(c, 0xdc0c7u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0x4u)));
    // 0dc0ca  shrd dword ptr [edx], eax, cl
    X86_AT(c, 0xdc0cau);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[2])); uint32_t v = rd32(ea); bool w; uint32_t r = x86_double(c, false, v, c.r[0], g8(c, 1), 4, w); if (w) wr32(ea, r); }
    // 0dc0cd  pushf 
    X86_AT(c, 0xdc0cdu);
    push16(c, c.fl & 0xFFFFu);
    // 0dc0cf  shr eax, cl
    X86_AT(c, 0xdc0cfu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 0dc0d1  popf 
    X86_AT(c, 0xdc0d1u);
    x86_popfd(c, 2);
    // 0dc0d3  jae 0xdc0dd
    X86_AT(c, 0xdc0d3u);
    if (x86_cc(c, 3)) { goto L_dc0dd; }
    X86_TICK(c, 9);
    // 0dc0d5  add dword ptr [edx], 1
    X86_AT(c, 0xdc0d5u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[2])); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0x1u, 0, 4)); }
    // 0dc0d8  adc eax, 0
    X86_AT(c, 0xdc0d8u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0x0u, c.fl & 1, 4); }
L_dc0dd:
    X86_TICK(c, 2);
    // 0dc0dd  mov dword ptr [edx + 4], eax
    X86_AT(c, 0xdc0ddu);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0x4u)), c.r[0]);
L_dc0e0:
    X86_TICK(c, 10);
    // 0dc0e0  ret 8
    X86_AT(c, 0xdc0e0u);
    c.eip = pop32(c); c.r[4] += 0x8u; return;
    x86_fault(c, 0xdc0a0u, "ran off the end of a function");
}
void f_000dc0e3(X86Cpu& c) {
    X86_TICK(c, 42);
    // 0dc0e3  mov edx, dword ptr [esp + 4]
    X86_AT(c, 0xdc0e3u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[4] + 0x4u)));
    // 0dc0e7  shl dword ptr [edx], 1
    X86_AT(c, 0xdc0e7u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[2])); uint32_t v = rd32(ea); bool w; uint32_t r = x86_shift(c, 4, v, 0x1u, 4, w); if (w) wr32(ea, r); }
    // 0dc0e9  rcl dword ptr [edx + 4], 1
    X86_AT(c, 0xdc0e9u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[2] + 0x4u)); uint32_t v = rd32(ea); bool w; uint32_t r = x86_shift(c, 2, v, 0x1u, 4, w); if (w) wr32(ea, r); }
    // 0dc0ec  rcl dword ptr [edx + 8], 1
    X86_AT(c, 0xdc0ecu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[2] + 0x8u)); uint32_t v = rd32(ea); bool w; uint32_t r = x86_shift(c, 2, v, 0x1u, 4, w); if (w) wr32(ea, r); }
    // 0dc0ef  rcl dword ptr [edx + 0xc], 1
    X86_AT(c, 0xdc0efu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[2] + 0xCu)); uint32_t v = rd32(ea); bool w; uint32_t r = x86_shift(c, 2, v, 0x1u, 4, w); if (w) wr32(ea, r); }
    // 0dc0f2  ret 4
    X86_AT(c, 0xdc0f2u);
    c.eip = pop32(c); c.r[4] += 0x4u; return;
    x86_fault(c, 0xdc0e3u, "ran off the end of a function");
}
void f_000dc0f8(X86Cpu& c) {
    X86_TICK(c, 31);
    // 0dc0f8  push ebp
    X86_AT(c, 0xdc0f8u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0dc0f9  mov ebp, esp
    X86_AT(c, 0xdc0f9u);
    c.r[5] = c.r[4];
    // 0dc0fb  push edi
    X86_AT(c, 0xdc0fbu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0dc0fc  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0xdc0fcu);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0dc0ff  movzx eax, word ptr [edi]
    X86_AT(c, 0xdc0ffu);
    c.r[0] = rd16((c.sbase[3] + (uint32_t)(c.r[7])));
    // 0dc102  push eax
    X86_AT(c, 0xdc102u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0dc103  lea eax, [edi + 2]
    X86_AT(c, 0xdc103u);
    c.r[0] = (uint32_t)(c.r[7] + 0x2u);
    // 0dc106  push eax
    X86_AT(c, 0xdc106u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0dc107  push 2
    X86_AT(c, 0xdc107u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0dc109  call 0xda8d4
    X86_AT(c, 0xdc109u);
    push32(c, 0xdc10eu); x86_call_known(c, 0xda8d4u, f_000da8d4); X86_RET(c, 0xdc10eu);
    X86_TICK(c, 20);
    // 0dc10e  pop edi
    X86_AT(c, 0xdc10eu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0dc10f  leave 
    X86_AT(c, 0xdc10fu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0dc110  ret 4
    X86_AT(c, 0xdc110u);
    c.eip = pop32(c); c.r[4] += 0x4u; return;
    x86_fault(c, 0xdc0f8u, "ran off the end of a function");
}
void f_000dc114(X86Cpu& c) {
    X86_TICK(c, 19);
    // 0dc114  movzx eax, word ptr [0xb435c]
    X86_AT(c, 0xdc114u);
    c.r[0] = rd16((c.sbase[3] + (uint32_t)(0xB435Cu)));
    // 0dc11b  push eax
    X86_AT(c, 0xdc11bu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0dc11c  push 0xb435e
    X86_AT(c, 0xdc11cu);
    { uint32_t v = 0xB435Eu; push32(c, v); }
    // 0dc121  push 2
    X86_AT(c, 0xdc121u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0dc123  call 0xda8d4
    X86_AT(c, 0xdc123u);
    push32(c, 0xdc128u); x86_call_known(c, 0xda8d4u, f_000da8d4); X86_RET(c, 0xdc128u);
    X86_TICK(c, 10);
    // 0dc128  ret 
    X86_AT(c, 0xdc128u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xdc114u, "ran off the end of a function");
}
void f_000dc12c(X86Cpu& c) {
    X86_TICK(c, 55);
    // 0dc12c  enter 0xc, 0
    X86_AT(c, 0xdc12cu);
    x86_enter(c, 0xCu, 0x0u, 4);
    // 0dc130  push ebx
    X86_AT(c, 0xdc130u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0dc131  push esi
    X86_AT(c, 0xdc131u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0dc132  push edi
    X86_AT(c, 0xdc132u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0dc133  mov di, word ptr [ebp + 0xc]
    X86_AT(c, 0xdc133u);
    s16(c, 7, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))));
    // 0dc137  sub esi, esi
    X86_AT(c, 0xdc137u);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[6], 0, 4); }
    // 0dc139  push esi
    X86_AT(c, 0xdc139u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0dc13a  mov esi, 0x12b94
    X86_AT(c, 0xdc13au);
    c.r[6] = 0x12B94u;
    // 0dc13f  push edi
    X86_AT(c, 0xdc13fu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0dc140  lea edi, [ebp - 0xc]
    X86_AT(c, 0xdc140u);
    c.r[7] = (uint32_t)(c.r[5] + 0xFFFFFFF4u);
    // 0dc143  movsd dword ptr es:[edi], dword ptr [esi]
    X86_AT(c, 0xdc143u);
    x86_string(c, 0, 4, 0, 4, 3);
    // 0dc144  movsd dword ptr es:[edi], dword ptr [esi]
    X86_AT(c, 0xdc144u);
    x86_string(c, 0, 4, 0, 4, 3);
    // 0dc145  movsw word ptr es:[edi], word ptr [esi]
    X86_AT(c, 0xdc145u);
    x86_string(c, 0, 2, 0, 4, 3);
    // 0dc147  pop edi
    X86_AT(c, 0xdc147u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0dc148  pop esi
    X86_AT(c, 0xdc148u);
    { uint32_t v = pop32(c); c.r[6] = v; }
L_dc149:
    X86_TICK(c, 10);
    // 0dc149  mov eax, edi
    X86_AT(c, 0xdc149u);
    c.r[0] = c.r[7];
    // 0dc14b  rcr ax, 1
    X86_AT(c, 0xdc14bu);
    { uint32_t v = (c.r[0] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 3, v, 0x1u, 2, w); if (w) s16(c, 0, r); }
    // 0dc14e  jae 0xdc18a
    X86_AT(c, 0xdc14eu);
    if (x86_cc(c, 3)) { goto L_dc18a; }
    X86_TICK(c, 23);
    // 0dc150  movzx eax, si
    X86_AT(c, 0xdc150u);
    c.r[0] = (c.r[6] & 0xFFFFu);
    // 0dc153  lea eax, [eax*4]
    X86_AT(c, 0xdc153u);
    c.r[0] = (uint32_t)(c.r[0] * 4);
    // 0dc15a  lea eax, [eax + eax*2]
    X86_AT(c, 0xdc15au);
    c.r[0] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0dc15d  movsx eax, ax
    X86_AT(c, 0xdc15du);
    c.r[0] = (uint32_t)(int32_t)(int16_t)(c.r[0] & 0xFFFFu);
    // 0dc160  lea edx, [ebp - 0xc]
    X86_AT(c, 0xdc160u);
    c.r[2] = (uint32_t)(c.r[5] + 0xFFFFFFF4u);
    // 0dc163  push edx
    X86_AT(c, 0xdc163u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0dc164  mov ebx, eax
    X86_AT(c, 0xdc164u);
    c.r[3] = c.r[0];
    // 0dc166  call 0xdaed4
    X86_AT(c, 0xdc166u);
    push32(c, 0xdc16bu); x86_call_known(c, 0xdaed4u, f_000daed4); X86_RET(c, 0xdc16bu);
    X86_TICK(c, 13);
    // 0dc16b  lea eax, [ebx*1 + 0xb48d4]
    X86_AT(c, 0xdc16bu);
    c.r[0] = (uint32_t)(c.r[3] + 0xB48D4u);
    // 0dc172  push eax
    X86_AT(c, 0xdc172u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0dc173  mov ebx, eax
    X86_AT(c, 0xdc173u);
    c.r[3] = c.r[0];
    // 0dc175  call 0xdaed4
    X86_AT(c, 0xdc175u);
    push32(c, 0xdc17au); x86_call_known(c, 0xdaed4u, f_000daed4); X86_RET(c, 0xdc17au);
    X86_TICK(c, 7);
    // 0dc17a  call 0xdc2fc
    X86_AT(c, 0xdc17au);
    push32(c, 0xdc17fu); x86_call_known(c, 0xdc2fcu, f_000dc2fc); X86_RET(c, 0xdc17fu);
    X86_TICK(c, 13);
    // 0dc17f  lea eax, [ebp - 0xc]
    X86_AT(c, 0xdc17fu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFF4u);
    // 0dc182  push eax
    X86_AT(c, 0xdc182u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0dc183  mov ebx, eax
    X86_AT(c, 0xdc183u);
    c.r[3] = c.r[0];
    // 0dc185  call 0xdaf34
    X86_AT(c, 0xdc185u);
    push32(c, 0xdc18au); x86_call_known(c, 0xdaf34u, f_000daf34); X86_RET(c, 0xdc18au);
L_dc18a:
    X86_TICK(c, 12);
    // 0dc18a  shr di, 1
    X86_AT(c, 0xdc18au);
    { uint32_t v = (c.r[7] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 2, w); if (w) s16(c, 7, r); }
    // 0dc18d  inc esi
    X86_AT(c, 0xdc18du);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 0dc18e  and di, di
    X86_AT(c, 0xdc18eu);
    { uint32_t v = (c.r[7] & 0xFFFFu); s16(c, 7, x86_logic(c, v & (c.r[7] & 0xFFFFu), 2)); }
    // 0dc191  jne 0xdc149
    X86_AT(c, 0xdc191u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xdc149u); goto L_dc149; }
    X86_TICK(c, 71);
    // 0dc193  lea eax, [ebp - 0xc]
    X86_AT(c, 0xdc193u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFF4u);
    // 0dc196  mov edx, dword ptr [ebp + 8]
    X86_AT(c, 0xdc196u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0dc199  push esi
    X86_AT(c, 0xdc199u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0dc19a  push edi
    X86_AT(c, 0xdc19au);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0dc19b  mov esi, eax
    X86_AT(c, 0xdc19bu);
    c.r[6] = c.r[0];
    // 0dc19d  mov edi, edx
    X86_AT(c, 0xdc19du);
    c.r[7] = c.r[2];
    // 0dc19f  movsd dword ptr es:[edi], dword ptr [esi]
    X86_AT(c, 0xdc19fu);
    x86_string(c, 0, 4, 0, 4, 3);
    // 0dc1a0  movsd dword ptr es:[edi], dword ptr [esi]
    X86_AT(c, 0xdc1a0u);
    x86_string(c, 0, 4, 0, 4, 3);
    // 0dc1a1  movsw word ptr es:[edi], word ptr [esi]
    X86_AT(c, 0xdc1a1u);
    x86_string(c, 0, 2, 0, 4, 3);
    // 0dc1a3  pop edi
    X86_AT(c, 0xdc1a3u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0dc1a4  pop esi
    X86_AT(c, 0xdc1a4u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0dc1a5  pop edi
    X86_AT(c, 0xdc1a5u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0dc1a6  pop esi
    X86_AT(c, 0xdc1a6u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0dc1a7  pop ebx
    X86_AT(c, 0xdc1a7u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0dc1a8  leave 
    X86_AT(c, 0xdc1a8u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0dc1a9  ret 8
    X86_AT(c, 0xdc1a9u);
    c.eip = pop32(c); c.r[4] += 0x8u; return;
    x86_fault(c, 0xdc12cu, "ran off the end of a function");
}
void f_000dc1ac(X86Cpu& c) {
    X86_TICK(c, 20);
    // 0dc1ac  push ebp
    X86_AT(c, 0xdc1acu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0dc1ad  mov ebp, esp
    X86_AT(c, 0xdc1adu);
    c.r[5] = c.r[4];
    // 0dc1af  push esi
    X86_AT(c, 0xdc1afu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0dc1b0  push edi
    X86_AT(c, 0xdc1b0u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0dc1b1  push dword ptr [ebp + 0xc]
    X86_AT(c, 0xdc1b1u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))); push32(c, v); }
    // 0dc1b4  call 0xdaed4
    X86_AT(c, 0xdc1b4u);
    push32(c, 0xdc1b9u); x86_call_known(c, 0xdaed4u, f_000daed4); X86_RET(c, 0xdc1b9u);
    X86_TICK(c, 7);
    // 0dc1b9  call 0xdc644
    X86_AT(c, 0xdc1b9u);
    push32(c, 0xdc1beu); x86_call_known(c, 0xdc644u, f_000dc644); X86_RET(c, 0xdc1beu);
    X86_TICK(c, 15);
    // 0dc1be  xchg edi, eax
    X86_AT(c, 0xdc1beu);
    { uint32_t t = c.r[7]; c.r[7] = c.r[0]; c.r[0] = t; }
    // 0dc1bf  and di, 0x4700
    X86_AT(c, 0xdc1bfu);
    { uint32_t v = (c.r[7] & 0xFFFFu); s16(c, 7, x86_logic(c, v & 0x4700u, 2)); }
    // 0dc1c4  shr di, 8
    X86_AT(c, 0xdc1c4u);
    { uint32_t v = (c.r[7] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 5, v, 0x8u, 2, w); if (w) s16(c, 7, r); }
    // 0dc1c8  call 0xdad2c
    X86_AT(c, 0xdc1c8u);
    push32(c, 0xdc1cdu); x86_call_known(c, 0xdad2cu, f_000dad2c); X86_RET(c, 0xdc1cdu);
    X86_TICK(c, 7);
    // 0dc1cd  cmp di, 0x10
    X86_AT(c, 0xdc1cdu);
    (void)x86_sub(c, (c.r[7] & 0xFFFFu), 0x10u, 0, 2);
    // 0dc1d1  jbe 0xdc1dd
    X86_AT(c, 0xdc1d1u);
    if (x86_cc(c, 6)) { goto L_dc1dd; }
    X86_TICK(c, 4);
    // 0dc1d3  and di, 7
    X86_AT(c, 0xdc1d3u);
    { uint32_t v = (c.r[7] & 0xFFFFu); s16(c, 7, x86_logic(c, v & 0x7u, 2)); }
    // 0dc1d8  or di, 8
    X86_AT(c, 0xdc1d8u);
    { uint32_t v = (c.r[7] & 0xFFFFu); s16(c, 7, x86_logic(c, v | 0x8u, 2)); }
L_dc1dd:
    X86_TICK(c, 10);
    // 0dc1dd  movzx eax, di
    X86_AT(c, 0xdc1ddu);
    c.r[0] = (c.r[7] & 0xFFFFu);
    // 0dc1e0  cmp eax, 0xe
    X86_AT(c, 0xdc1e0u);
    (void)x86_sub(c, c.r[0], 0xEu, 0, 4);
    // 0dc1e3  ja 0xdc25c
    X86_AT(c, 0xdc1e3u);
    if (x86_cc(c, 7)) { goto L_dc25c; }
    X86_TICK(c, 7);
    // 0dc1e9  jmp dword ptr cs:[eax*4 + 0xdc1f1]
    X86_AT(c, 0xdc1e9u);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xDC1F1u)));
      switch (t) {
      case 0xdc22du: goto L_dc22d;
      case 0xdc234u: goto L_dc234;
      case 0xdc243u: goto L_dc243;
      case 0xdc24au: goto L_dc24a;
      case 0xdc25cu: goto L_dc25c;
      default: x86_jump(c, t); return; } }
L_dc22d:
    X86_TICK(c, 9);
    // 0dc22d  mov esi, 0x12ba0
    X86_AT(c, 0xdc22du);
    c.r[6] = 0x12BA0u;
    // 0dc232  jmp 0xdc24f
    X86_AT(c, 0xdc232u);
    goto L_dc24f;
L_dc234:
    X86_TICK(c, 15);
    // 0dc234  mov eax, dword ptr [ebp + 8]
    X86_AT(c, 0xdc234u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0dc237  mov dword ptr [eax], 0x414e0003
    X86_AT(c, 0xdc237u);
    wr32((c.sbase[3] + (uint32_t)(c.r[0])), 0x414E0003u);
    // 0dc23d  mov byte ptr [eax + 4], 0x4e
    X86_AT(c, 0xdc23du);
    wr8((c.sbase[3] + (uint32_t)(c.r[0] + 0x4u)), 0x4Eu);
    // 0dc241  jmp 0xdc264
    X86_AT(c, 0xdc241u);
    goto L_dc264;
L_dc243:
    X86_TICK(c, 9);
    // 0dc243  mov esi, 0x12bac
    X86_AT(c, 0xdc243u);
    c.r[6] = 0x12BACu;
    // 0dc248  jmp 0xdc24f
    X86_AT(c, 0xdc248u);
    goto L_dc24f;
L_dc24a:
    X86_TICK(c, 2);
    // 0dc24a  mov esi, 0x12bb8
    X86_AT(c, 0xdc24au);
    c.r[6] = 0x12BB8u;
L_dc24f:
    X86_TICK(c, 40);
    // 0dc24f  mov eax, dword ptr [ebp + 8]
    X86_AT(c, 0xdc24fu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0dc252  push edi
    X86_AT(c, 0xdc252u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0dc253  mov edi, eax
    X86_AT(c, 0xdc253u);
    c.r[7] = c.r[0];
    // 0dc255  movsd dword ptr es:[edi], dword ptr [esi]
    X86_AT(c, 0xdc255u);
    x86_string(c, 0, 4, 0, 4, 3);
    // 0dc256  movsd dword ptr es:[edi], dword ptr [esi]
    X86_AT(c, 0xdc256u);
    x86_string(c, 0, 4, 0, 4, 3);
    // 0dc257  movsw word ptr es:[edi], word ptr [esi]
    X86_AT(c, 0xdc257u);
    x86_string(c, 0, 2, 0, 4, 3);
    // 0dc259  pop edi
    X86_AT(c, 0xdc259u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0dc25a  jmp 0xdc264
    X86_AT(c, 0xdc25au);
    goto L_dc264;
L_dc25c:
    X86_TICK(c, 6);
    // 0dc25c  mov eax, dword ptr [ebp + 8]
    X86_AT(c, 0xdc25cu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0dc25f  mov word ptr [eax], 0
    X86_AT(c, 0xdc25fu);
    wr16((c.sbase[3] + (uint32_t)(c.r[0])), 0x0u);
L_dc264:
    X86_TICK(c, 24);
    // 0dc264  pop edi
    X86_AT(c, 0xdc264u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0dc265  pop esi
    X86_AT(c, 0xdc265u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0dc266  leave 
    X86_AT(c, 0xdc266u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0dc267  ret 8
    X86_AT(c, 0xdc267u);
    c.eip = pop32(c); c.r[4] += 0x8u; return;
    x86_fault(c, 0xdc1acu, "ran off the end of a function");
}
void f_000dc26c(X86Cpu& c) {
    X86_TICK(c, 21);
    // 0dc26c  mov eax, dword ptr [esp + 4]
    X86_AT(c, 0xdc26cu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[4] + 0x4u)));
    // 0dc270  mov edx, dword ptr [eax]
    X86_AT(c, 0xdc270u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[0])));
    // 0dc272  or edx, dword ptr [eax + 4]
    X86_AT(c, 0xdc272u);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v | rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0x4u))), 4); }
    // 0dc275  and edx, edx
    X86_AT(c, 0xdc275u);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & c.r[2], 4); }
    // 0dc277  jne 0xdc27d
    X86_AT(c, 0xdc277u);
    if (x86_cc(c, 5)) { goto L_dc27d; }
    X86_TICK(c, 9);
    // 0dc279  sub eax, eax
    X86_AT(c, 0xdc279u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0dc27b  jmp 0xdc28c
    X86_AT(c, 0xdc27bu);
    goto L_dc28c;
L_dc27d:
    X86_TICK(c, 12);
    // 0dc27d  mov eax, dword ptr [esp + 4]
    X86_AT(c, 0xdc27du);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[4] + 0x4u)));
    // 0dc281  mov ax, word ptr [eax + 8]
    X86_AT(c, 0xdc281u);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(c.r[0] + 0x8u))));
    // 0dc285  and ah, 0x7f
    X86_AT(c, 0xdc285u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_logic(c, v & 0x7Fu, 1)); }
    // 0dc288  sub ax, 0x3fff
    X86_AT(c, 0xdc288u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_sub(c, v, 0x3FFFu, 0, 2)); }
L_dc28c:
    X86_TICK(c, 10);
    // 0dc28c  ret 4
    X86_AT(c, 0xdc28cu);
    c.eip = pop32(c); c.r[4] += 0x4u; return;
    x86_fault(c, 0xdc26cu, "ran off the end of a function");
}
void f_000dc290(X86Cpu& c) {
    X86_TICK(c, 16);
    // 0dc290  push ebp
    X86_AT(c, 0xdc290u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0dc291  mov ebp, esp
    X86_AT(c, 0xdc291u);
    c.r[5] = c.r[4];
    // 0dc293  push dword ptr [ebp + 0xc]
    X86_AT(c, 0xdc293u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))); push32(c, v); }
    // 0dc296  call 0xdaed4
    X86_AT(c, 0xdc296u);
    push32(c, 0xdc29bu); x86_call_known(c, 0xdaed4u, f_000daed4); X86_RET(c, 0xdc29bu);
    X86_TICK(c, 12);
    // 0dc29b  push dword ptr [ebp + 8]
    X86_AT(c, 0xdc29bu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, v); }
    // 0dc29e  call 0xdc7fc
    X86_AT(c, 0xdc29eu);
    push32(c, 0xdc2a3u); x86_call_known(c, 0xdc7fcu, f_000dc7fc); X86_RET(c, 0xdc2a3u);
    X86_TICK(c, 16);
    // 0dc2a3  leave 
    X86_AT(c, 0xdc2a3u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0dc2a4  ret 8
    X86_AT(c, 0xdc2a4u);
    c.eip = pop32(c); c.r[4] += 0x8u; return;
    x86_fault(c, 0xdc290u, "ran off the end of a function");
}
void f_000dc2c0(X86Cpu& c) {
    X86_TICK(c, 13);
    // 0dc2c0  enter 0x14, 0
    X86_AT(c, 0xdc2c0u);
    x86_enter(c, 0x14u, 0x0u, 4);
    // 0dc2c4  call 0xdad10
    X86_AT(c, 0xdc2c4u);
    push32(c, 0xdc2c9u); x86_call_known(c, 0xdad10u, f_000dad10); X86_RET(c, 0xdc2c9u);
    X86_TICK(c, 12);
    // 0dc2c9  cmp byte ptr [0xb445f], 0
    X86_AT(c, 0xdc2c9u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0xB445Fu))), 0x0u, 0, 1);
    // 0dc2d0  je 0xdc2e7
    X86_AT(c, 0xdc2d0u);
    if (x86_cc(c, 4)) { goto L_dc2e7; }
    X86_TICK(c, 12);
    // 0dc2d2  push dword ptr [ebp + 8]
    X86_AT(c, 0xdc2d2u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, v); }
    // 0dc2d5  call 0xdab43
    X86_AT(c, 0xdc2d5u);
    push32(c, 0xdc2dau); x86_call_known(c, 0xdab43u, f_000dab43); X86_RET(c, 0xdc2dau);
    X86_TICK(c, 12);
    // 0dc2da  push dword ptr [0xb4528]
    X86_AT(c, 0xdc2dau);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xB4528u))); push32(c, v); }
    // 0dc2e0  call 0xdab64
    X86_AT(c, 0xdc2e0u);
    push32(c, 0xdc2e5u); x86_call_known(c, 0xdab64u, f_000dab64); X86_RET(c, 0xdc2e5u);
    X86_TICK(c, 7);
    // 0dc2e5  jmp 0xdc2f5
    X86_AT(c, 0xdc2e5u);
    goto L_dc2f5;
L_dc2e7:
    X86_TICK(c, 17);
    // 0dc2e7  push dword ptr [ebp + 8]
    X86_AT(c, 0xdc2e7u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, v); }
    // 0dc2ea  push dword ptr [0xb4528]
    X86_AT(c, 0xdc2eau);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xB4528u))); push32(c, v); }
    // 0dc2f0  call 0xdc57c
    X86_AT(c, 0xdc2f0u);
    push32(c, 0xdc2f5u); x86_call_known(c, 0xdc57cu, f_000dc57c); X86_RET(c, 0xdc2f5u);
L_dc2f5:
    X86_TICK(c, 16);
    // 0dc2f5  leave 
    X86_AT(c, 0xdc2f5u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0dc2f6  ret 4
    X86_AT(c, 0xdc2f6u);
    c.eip = pop32(c); c.r[4] += 0x4u; return;
    x86_fault(c, 0xdc2c0u, "ran off the end of a function");
}
void f_000dc2fc(X86Cpu& c) {
    X86_TICK(c, 22);
    // 0dc2fc  enter 0x24, 0
    X86_AT(c, 0xdc2fcu);
    x86_enter(c, 0x24u, 0x0u, 4);
    // 0dc300  push esi
    X86_AT(c, 0xdc300u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0dc301  push edi
    X86_AT(c, 0xdc301u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0dc302  cmp byte ptr [0xb445f], 0
    X86_AT(c, 0xdc302u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0xB445Fu))), 0x0u, 0, 1);
    // 0dc309  je 0xdc32b
    X86_AT(c, 0xdc309u);
    if (x86_cc(c, 4)) { goto L_dc32b; }
    X86_TICK(c, 20);
    // 0dc30b  push dword ptr [0xb4528]
    X86_AT(c, 0xdc30bu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xB4528u))); push32(c, v); }
    // 0dc311  mov eax, dword ptr [0xb4528]
    X86_AT(c, 0xdc311u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xB4528u)));
    // 0dc316  sub eax, 0xc
    X86_AT(c, 0xdc316u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, 0xCu, 0, 4); }
    // 0dc319  push eax
    X86_AT(c, 0xdc319u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0dc31a  call 0xdaaf9
    X86_AT(c, 0xdc31au);
    push32(c, 0xdc31fu); x86_call_known(c, 0xdaaf9u, f_000daaf9); X86_RET(c, 0xdc31fu);
    X86_TICK(c, 14);
    // 0dc31f  add dword ptr [0xb4528], 0xfffffff4
    X86_AT(c, 0xdc31fu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xB4528u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0xFFFFFFF4u, 0, 4)); }
    // 0dc326  jmp 0xdc41a
    X86_AT(c, 0xdc326u);
    goto L_dc41a;
L_dc32b:
    X86_TICK(c, 48);
    // 0dc32b  mov eax, dword ptr [0xb4528]
    X86_AT(c, 0xdc32bu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xB4528u)));
    // 0dc330  lea edx, [ebp - 0x14]
    X86_AT(c, 0xdc330u);
    c.r[2] = (uint32_t)(c.r[5] + 0xFFFFFFECu);
    // 0dc333  push esi
    X86_AT(c, 0xdc333u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0dc334  push edi
    X86_AT(c, 0xdc334u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0dc335  mov esi, eax
    X86_AT(c, 0xdc335u);
    c.r[6] = c.r[0];
    // 0dc337  mov edi, edx
    X86_AT(c, 0xdc337u);
    c.r[7] = c.r[2];
    // 0dc339  mov ecx, 3
    X86_AT(c, 0xdc339u);
    c.r[1] = 0x3u;
    // 0dc33e  movsd dword ptr es:[edi], dword ptr [esi]
    X86_AT(c, 0xdc33eu);
    x86_string(c, 0, 4, 243, 4, 3);
    // 0dc340  pop edi
    X86_AT(c, 0xdc340u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0dc341  pop esi
    X86_AT(c, 0xdc341u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0dc342  xchg esi, eax
    X86_AT(c, 0xdc342u);
    { uint32_t t = c.r[6]; c.r[6] = c.r[0]; c.r[0] = t; }
    // 0dc343  sub esi, 0xc
    X86_AT(c, 0xdc343u);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, 0xCu, 0, 4); }
    // 0dc346  cmp byte ptr [ebp - 9], 0
    X86_AT(c, 0xdc346u);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF7u))), 0x0u, 0, 1);
    // 0dc34a  jne 0xdc352
    X86_AT(c, 0xdc34au);
    if (x86_cc(c, 5)) { goto L_dc352; }
    X86_TICK(c, 12);
    // 0dc34c  cmp byte ptr [esi + 0xb], 0
    X86_AT(c, 0xdc34cu);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[6] + 0xBu))), 0x0u, 0, 1);
    // 0dc350  je 0xdc378
    X86_AT(c, 0xdc350u);
    if (x86_cc(c, 4)) { goto L_dc378; }
L_dc352:
    X86_TICK(c, 45);
    // 0dc352  add dword ptr [0xb4528], 0xfffffff4
    X86_AT(c, 0xdc352u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xB4528u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0xFFFFFFF4u, 0, 4)); }
    // 0dc359  mov eax, 0xb4538
    X86_AT(c, 0xdc359u);
    c.r[0] = 0xB4538u;
    // 0dc35e  mov edx, dword ptr [0xb4528]
    X86_AT(c, 0xdc35eu);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(0xB4528u)));
    // 0dc364  push esi
    X86_AT(c, 0xdc364u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0dc365  push edi
    X86_AT(c, 0xdc365u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0dc366  mov esi, eax
    X86_AT(c, 0xdc366u);
    c.r[6] = c.r[0];
    // 0dc368  mov edi, edx
    X86_AT(c, 0xdc368u);
    c.r[7] = c.r[2];
    // 0dc36a  mov ecx, 3
    X86_AT(c, 0xdc36au);
    c.r[1] = 0x3u;
    // 0dc36f  movsd dword ptr es:[edi], dword ptr [esi]
    X86_AT(c, 0xdc36fu);
    x86_string(c, 0, 4, 243, 4, 3);
    // 0dc371  pop edi
    X86_AT(c, 0xdc371u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0dc372  pop esi
    X86_AT(c, 0xdc372u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0dc373  jmp 0xdc41a
    X86_AT(c, 0xdc373u);
    goto L_dc41a;
L_dc378:
    X86_TICK(c, 69);
    // 0dc378  add dword ptr [0xb4528], 0xfffffff4
    X86_AT(c, 0xdc378u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xB4528u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0xFFFFFFF4u, 0, 4)); }
    // 0dc37f  mov al, byte ptr [ebp - 0xa]
    X86_AT(c, 0xdc37fu);
    s8(c, 0, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF6u))));
    // 0dc382  cmp al, byte ptr [esi + 0xa]
    X86_AT(c, 0xdc382u);
    (void)x86_sub(c, g8(c, 0), rd8((c.sbase[3] + (uint32_t)(c.r[6] + 0xAu))), 0, 1);
    // 0dc385  setne byte ptr [ebp - 0xa]
    X86_AT(c, 0xdc385u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF6u)), x86_cc(c, 5) ? 1u : 0u);
    // 0dc389  mov ax, word ptr [ebp - 0xc]
    X86_AT(c, 0xdc389u);
    s16(c, 0, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u))));
    // 0dc38d  sub ax, 0x3fff
    X86_AT(c, 0xdc38du);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_sub(c, v, 0x3FFFu, 0, 2)); }
    // 0dc391  add ax, word ptr [esi + 8]
    X86_AT(c, 0xdc391u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[3] + (uint32_t)(c.r[6] + 0x8u))), 0, 2)); }
    // 0dc395  inc eax
    X86_AT(c, 0xdc395u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0dc396  mov word ptr [ebp - 0xc], ax
    X86_AT(c, 0xdc396u);
    wr16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)), (c.r[0] & 0xFFFFu));
    // 0dc39a  push dword ptr [esi + 4]
    X86_AT(c, 0xdc39au);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0x4u))); push32(c, v); }
    // 0dc39d  push dword ptr [esi]
    X86_AT(c, 0xdc39du);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[6]))); push32(c, v); }
    // 0dc39f  push dword ptr [ebp - 0x10]
    X86_AT(c, 0xdc39fu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u))); push32(c, v); }
    // 0dc3a2  push dword ptr [ebp - 0x14]
    X86_AT(c, 0xdc3a2u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu))); push32(c, v); }
    // 0dc3a5  lea eax, [ebp - 0x24]
    X86_AT(c, 0xdc3a5u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFDCu);
    // 0dc3a8  push eax
    X86_AT(c, 0xdc3a8u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0dc3a9  call 0xdc994
    X86_AT(c, 0xdc3a9u);
    push32(c, 0xdc3aeu); x86_call_known(c, 0xdc994u, f_000dc994); X86_RET(c, 0xdc3aeu);
    X86_TICK(c, 9);
    // 0dc3ae  mov di, 0x80
    X86_AT(c, 0xdc3aeu);
    s16(c, 7, 0x80u);
    // 0dc3b2  jmp 0xdc3c2
    X86_AT(c, 0xdc3b2u);
    goto L_dc3c2;
L_dc3b4:
    X86_TICK(c, 19);
    // 0dc3b4  dec word ptr [ebp - 0xc]
    X86_AT(c, 0xdc3b4u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)); uint32_t v = rd16(ea); wr16(ea, x86_dec(c, v, 2)); }
    // 0dc3b8  dec edi
    X86_AT(c, 0xdc3b8u);
    { uint32_t v = c.r[7]; c.r[7] = x86_dec(c, v, 4); }
    // 0dc3b9  lea eax, [ebp - 0x24]
    X86_AT(c, 0xdc3b9u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFDCu);
    // 0dc3bc  push eax
    X86_AT(c, 0xdc3bcu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0dc3bd  call 0xdc0e3
    X86_AT(c, 0xdc3bdu);
    push32(c, 0xdc3c2u); x86_call_known(c, 0xdc0e3u, f_000dc0e3); X86_RET(c, 0xdc3c2u);
L_dc3c2:
    X86_TICK(c, 12);
    // 0dc3c2  cmp byte ptr [ebp - 0x15], 0x80
    X86_AT(c, 0xdc3c2u);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFEBu))), 0x80u, 0, 1);
    // 0dc3c6  jae 0xdc3cd
    X86_AT(c, 0xdc3c6u);
    if (x86_cc(c, 3)) { goto L_dc3cd; }
    X86_TICK(c, 7);
    // 0dc3c8  and di, di
    X86_AT(c, 0xdc3c8u);
    { uint32_t v = (c.r[7] & 0xFFFFu); s16(c, 7, x86_logic(c, v & (c.r[7] & 0xFFFFu), 2)); }
    // 0dc3cb  ja 0xdc3b4
    X86_AT(c, 0xdc3cbu);
    if (x86_cc(c, 7)) { X86_POLL(c, 0xdc3b4u); goto L_dc3b4; }
L_dc3cd:
    X86_TICK(c, 24);
    // 0dc3cd  mov eax, dword ptr [ebp - 0x1c]
    X86_AT(c, 0xdc3cdu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE4u)));
    // 0dc3d0  mov edx, dword ptr [ebp - 0x18]
    X86_AT(c, 0xdc3d0u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE8u)));
    // 0dc3d3  mov dword ptr [ebp - 0x14], eax
    X86_AT(c, 0xdc3d3u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu)), c.r[0]);
    // 0dc3d6  mov dword ptr [ebp - 0x10], edx
    X86_AT(c, 0xdc3d6u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u)), c.r[2]);
    // 0dc3d9  cmp byte ptr [ebp - 0x1d], 0x80
    X86_AT(c, 0xdc3d9u);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE3u))), 0x80u, 0, 1);
    // 0dc3dd  jb 0xdc3fc
    X86_AT(c, 0xdc3ddu);
    if (x86_cc(c, 2)) { goto L_dc3fc; }
    X86_TICK(c, 21);
    // 0dc3df  mov dword ptr [ebp - 4], 0
    X86_AT(c, 0xdc3dfu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), 0x0u);
    // 0dc3e6  mov dword ptr [ebp - 8], 1
    X86_AT(c, 0xdc3e6u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), 0x1u);
    // 0dc3ed  push 4
    X86_AT(c, 0xdc3edu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0dc3ef  lea eax, [ebp - 8]
    X86_AT(c, 0xdc3efu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFF8u);
    // 0dc3f2  push eax
    X86_AT(c, 0xdc3f2u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0dc3f3  lea eax, [ebp - 0x14]
    X86_AT(c, 0xdc3f3u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFECu);
    // 0dc3f6  push eax
    X86_AT(c, 0xdc3f6u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0dc3f7  call 0xdbfac
    X86_AT(c, 0xdc3f7u);
    push32(c, 0xdc3fcu); x86_call_known(c, 0xdbfacu, f_000dbfac); X86_RET(c, 0xdc3fcu);
L_dc3fc:
    X86_TICK(c, 40);
    // 0dc3fc  lea eax, [ebp - 0x14]
    X86_AT(c, 0xdc3fcu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFECu);
    // 0dc3ff  mov edx, dword ptr [0xb4528]
    X86_AT(c, 0xdc3ffu);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(0xB4528u)));
    // 0dc405  push esi
    X86_AT(c, 0xdc405u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0dc406  push edi
    X86_AT(c, 0xdc406u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0dc407  mov esi, eax
    X86_AT(c, 0xdc407u);
    c.r[6] = c.r[0];
    // 0dc409  mov edi, edx
    X86_AT(c, 0xdc409u);
    c.r[7] = c.r[2];
    // 0dc40b  mov ecx, 3
    X86_AT(c, 0xdc40bu);
    c.r[1] = 0x3u;
    // 0dc410  movsd dword ptr es:[edi], dword ptr [esi]
    X86_AT(c, 0xdc410u);
    x86_string(c, 0, 4, 243, 4, 3);
    // 0dc412  pop edi
    X86_AT(c, 0xdc412u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0dc413  pop esi
    X86_AT(c, 0xdc413u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0dc414  push edx
    X86_AT(c, 0xdc414u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0dc415  call 0xdad34
    X86_AT(c, 0xdc415u);
    push32(c, 0xdc41au); x86_call_known(c, 0xdad34u, f_000dad34); X86_RET(c, 0xdc41au);
L_dc41a:
    X86_TICK(c, 24);
    // 0dc41a  pop edi
    X86_AT(c, 0xdc41au);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0dc41b  pop esi
    X86_AT(c, 0xdc41bu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0dc41c  leave 
    X86_AT(c, 0xdc41cu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0dc41d  ret 
    X86_AT(c, 0xdc41du);
    c.eip = pop32(c); return;
    x86_fault(c, 0xdc2fcu, "ran off the end of a function");
}
void f_000dc41a(X86Cpu& c) {
    X86_TICK(c, 24);
    // 0dc41a  pop edi
    X86_AT(c, 0xdc41au);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0dc41b  pop esi
    X86_AT(c, 0xdc41bu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0dc41c  leave 
    X86_AT(c, 0xdc41cu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0dc41d  ret 
    X86_AT(c, 0xdc41du);
    c.eip = pop32(c); return;
    x86_fault(c, 0xdc41au, "ran off the end of a function");
}
void f_000dc420(X86Cpu& c) {
    X86_TICK(c, 7);
    // 0dc420  call 0xdaf74
    X86_AT(c, 0xdc420u);
    push32(c, 0xdc425u); x86_call_known(c, 0xdaf74u, f_000daf74); X86_RET(c, 0xdc425u);
    X86_TICK(c, 7);
    // 0dc425  call 0xdc42c
    X86_AT(c, 0xdc425u);
    push32(c, 0xdc42au); x86_call_known(c, 0xdc42cu, f_000dc42c); X86_RET(c, 0xdc42au);
    X86_TICK(c, 10);
    // 0dc42a  ret 
    X86_AT(c, 0xdc42au);
    c.eip = pop32(c); return;
    x86_fault(c, 0xdc420u, "ran off the end of a function");
}
void f_000dc42c(X86Cpu& c) {
    X86_TICK(c, 18);
    // 0dc42c  push ebx
    X86_AT(c, 0xdc42cu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0dc42d  push esi
    X86_AT(c, 0xdc42du);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0dc42e  push edi
    X86_AT(c, 0xdc42eu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0dc42f  cmp byte ptr [0xb445f], 0
    X86_AT(c, 0xdc42fu);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0xB445Fu))), 0x0u, 0, 1);
    // 0dc436  je 0xdc44e
    X86_AT(c, 0xdc436u);
    if (x86_cc(c, 4)) { goto L_dc44e; }
    X86_TICK(c, 20);
    // 0dc438  push dword ptr [0xb4528]
    X86_AT(c, 0xdc438u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xB4528u))); push32(c, v); }
    // 0dc43e  mov eax, dword ptr [0xb4528]
    X86_AT(c, 0xdc43eu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xB4528u)));
    // 0dc443  sub eax, 0xc
    X86_AT(c, 0xdc443u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, 0xCu, 0, 4); }
    // 0dc446  push eax
    X86_AT(c, 0xdc446u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0dc447  call 0xdab00
    X86_AT(c, 0xdc447u);
    push32(c, 0xdc44cu); x86_call_known(c, 0xdab00u, f_000dab00); X86_RET(c, 0xdc44cu);
    X86_TICK(c, 7);
    // 0dc44c  jmp 0xdc49f
    X86_AT(c, 0xdc44cu);
    goto L_dc49f;
L_dc44e:
    X86_TICK(c, 35);
    // 0dc44e  mov eax, dword ptr [0xb4528]
    X86_AT(c, 0xdc44eu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xB4528u)));
    // 0dc453  mov dl, byte ptr [eax + 0xa]
    X86_AT(c, 0xdc453u);
    s8(c, 2, rd8((c.sbase[3] + (uint32_t)(c.r[0] + 0xAu))));
    // 0dc456  cmp dl, byte ptr [eax - 2]
    X86_AT(c, 0xdc456u);
    (void)x86_sub(c, g8(c, 2), rd8((c.sbase[3] + (uint32_t)(c.r[0] + 0xFFFFFFFEu))), 0, 1);
    // 0dc459  setne byte ptr [eax - 2]
    X86_AT(c, 0xdc459u);
    wr8((c.sbase[3] + (uint32_t)(c.r[0] + 0xFFFFFFFEu)), x86_cc(c, 5) ? 1u : 0u);
    // 0dc45d  mov eax, dword ptr [0xb4528]
    X86_AT(c, 0xdc45du);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xB4528u)));
    // 0dc462  cmp byte ptr [eax + 0xb], 0
    X86_AT(c, 0xdc462u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[0] + 0xBu))), 0x0u, 0, 1);
    // 0dc466  je 0xdc494
    X86_AT(c, 0xdc466u);
    if (x86_cc(c, 4)) { goto L_dc494; }
    X86_TICK(c, 36);
    // 0dc468  add dword ptr [0xb4528], 0xfffffff4
    X86_AT(c, 0xdc468u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xB4528u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0xFFFFFFF4u, 0, 4)); }
    // 0dc46f  mov ax, word ptr [0xb4558]
    X86_AT(c, 0xdc46fu);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(0xB4558u))));
    // 0dc475  mov edx, dword ptr [0xb4528]
    X86_AT(c, 0xdc475u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(0xB4528u)));
    // 0dc47b  mov word ptr [edx + 8], ax
    X86_AT(c, 0xdc47bu);
    wr16((c.sbase[3] + (uint32_t)(c.r[2] + 0x8u)), (c.r[0] & 0xFFFFu));
    // 0dc47f  mov eax, dword ptr [0xb4550]
    X86_AT(c, 0xdc47fu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xB4550u)));
    // 0dc484  mov ecx, dword ptr [0xb4554]
    X86_AT(c, 0xdc484u);
    c.r[1] = rd32((c.sbase[3] + (uint32_t)(0xB4554u)));
    // 0dc48a  mov dword ptr [edx], eax
    X86_AT(c, 0xdc48au);
    wr32((c.sbase[3] + (uint32_t)(c.r[2])), c.r[0]);
    // 0dc48c  mov dword ptr [edx + 4], ecx
    X86_AT(c, 0xdc48cu);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0x4u)), c.r[1]);
    // 0dc48f  jmp 0xdc576
    X86_AT(c, 0xdc48fu);
    goto L_dc576;
L_dc494:
    X86_TICK(c, 16);
    // 0dc494  mov eax, dword ptr [0xb4528]
    X86_AT(c, 0xdc494u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xB4528u)));
    // 0dc499  cmp byte ptr [eax - 1], 0
    X86_AT(c, 0xdc499u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[0] + 0xFFFFFFFFu))), 0x0u, 0, 1);
    // 0dc49d  je 0xdc4c2
    X86_AT(c, 0xdc49du);
    if (x86_cc(c, 4)) { goto L_dc4c2; }
L_dc49f:
    X86_TICK(c, 14);
    // 0dc49f  add dword ptr [0xb4528], 0xfffffff4
    X86_AT(c, 0xdc49fu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xB4528u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0xFFFFFFF4u, 0, 4)); }
    // 0dc4a6  jmp 0xdc576
    X86_AT(c, 0xdc4a6u);
    goto L_dc576;
L_dc4ab:
    X86_TICK(c, 15);
    // 0dc4ab  mov eax, dword ptr [0xb4528]
    X86_AT(c, 0xdc4abu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xB4528u)));
    // 0dc4b0  sub eax, 0xc
    X86_AT(c, 0xdc4b0u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, 0xCu, 0, 4); }
    // 0dc4b3  push eax
    X86_AT(c, 0xdc4b3u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0dc4b4  call 0xdc084
    X86_AT(c, 0xdc4b4u);
    push32(c, 0xdc4b9u); x86_call_known(c, 0xdc084u, f_000dc084); X86_RET(c, 0xdc4b9u);
    X86_TICK(c, 10);
    // 0dc4b9  mov eax, dword ptr [0xb4528]
    X86_AT(c, 0xdc4b9u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xB4528u)));
    // 0dc4be  dec word ptr [eax - 4]
    X86_AT(c, 0xdc4beu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[0] + 0xFFFFFFFCu)); uint32_t v = rd16(ea); wr16(ea, x86_dec(c, v, 2)); }
L_dc4c2:
    X86_TICK(c, 16);
    // 0dc4c2  mov eax, dword ptr [0xb4528]
    X86_AT(c, 0xdc4c2u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xB4528u)));
    // 0dc4c7  cmp byte ptr [eax - 5], 0x80
    X86_AT(c, 0xdc4c7u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[0] + 0xFFFFFFFBu))), 0x80u, 0, 1);
    // 0dc4cb  jb 0xdc4ab
    X86_AT(c, 0xdc4cbu);
    if (x86_cc(c, 2)) { X86_POLL(c, 0xdc4abu); goto L_dc4ab; }
    X86_TICK(c, 7);
    // 0dc4cd  jmp 0xdc4e3
    X86_AT(c, 0xdc4cdu);
    goto L_dc4e3;
L_dc4cf:
    X86_TICK(c, 12);
    // 0dc4cf  push dword ptr [0xb4528]
    X86_AT(c, 0xdc4cfu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xB4528u))); push32(c, v); }
    // 0dc4d5  call 0xdc084
    X86_AT(c, 0xdc4d5u);
    push32(c, 0xdc4dau); x86_call_known(c, 0xdc084u, f_000dc084); X86_RET(c, 0xdc4dau);
    X86_TICK(c, 10);
    // 0dc4da  mov eax, dword ptr [0xb4528]
    X86_AT(c, 0xdc4dau);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xB4528u)));
    // 0dc4df  dec word ptr [eax + 8]
    X86_AT(c, 0xdc4dfu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[0] + 0x8u)); uint32_t v = rd16(ea); wr16(ea, x86_dec(c, v, 2)); }
L_dc4e3:
    X86_TICK(c, 16);
    // 0dc4e3  mov eax, dword ptr [0xb4528]
    X86_AT(c, 0xdc4e3u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xB4528u)));
    // 0dc4e8  cmp byte ptr [eax + 7], 0x80
    X86_AT(c, 0xdc4e8u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[0] + 0x7u))), 0x80u, 0, 1);
    // 0dc4ec  jb 0xdc4cf
    X86_AT(c, 0xdc4ecu);
    if (x86_cc(c, 2)) { X86_POLL(c, 0xdc4cfu); goto L_dc4cf; }
    X86_TICK(c, 35);
    // 0dc4ee  push dword ptr [eax + 4]
    X86_AT(c, 0xdc4eeu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0x4u))); push32(c, v); }
    // 0dc4f1  push dword ptr [eax]
    X86_AT(c, 0xdc4f1u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[0]))); push32(c, v); }
    // 0dc4f3  push dword ptr [eax - 8]
    X86_AT(c, 0xdc4f3u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0xFFFFFFF8u))); push32(c, v); }
    // 0dc4f6  push dword ptr [eax - 0xc]
    X86_AT(c, 0xdc4f6u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0xFFFFFFF4u))); push32(c, v); }
    // 0dc4f9  lea edx, [eax - 0xc]
    X86_AT(c, 0xdc4f9u);
    c.r[2] = (uint32_t)(c.r[0] + 0xFFFFFFF4u);
    // 0dc4fc  push edx
    X86_AT(c, 0xdc4fcu);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0dc4fd  mov ebx, eax
    X86_AT(c, 0xdc4fdu);
    c.r[3] = c.r[0];
    // 0dc4ff  mov esi, edx
    X86_AT(c, 0xdc4ffu);
    c.r[6] = c.r[2];
    // 0dc501  call 0xdc9e0
    X86_AT(c, 0xdc501u);
    push32(c, 0xdc506u); x86_call_known(c, 0xdc9e0u, f_000dc9e0); X86_RET(c, 0xdc506u);
    X86_TICK(c, 35);
    // 0dc506  movzx eax, ax
    X86_AT(c, 0xdc506u);
    c.r[0] = (c.r[0] & 0xFFFFu);
    // 0dc509  movzx edx, word ptr [ebx + 8]
    X86_AT(c, 0xdc509u);
    c.r[2] = rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x8u)));
    // 0dc50d  movzx edi, word ptr [esi + 8]
    X86_AT(c, 0xdc50du);
    c.r[7] = rd16((c.sbase[3] + (uint32_t)(c.r[6] + 0x8u)));
    // 0dc511  sub edi, edx
    X86_AT(c, 0xdc511u);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[2], 0, 4); }
    // 0dc513  add edi, 0x403e
    X86_AT(c, 0xdc513u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x403Eu, 0, 4); }
    // 0dc519  sub edi, eax
    X86_AT(c, 0xdc519u);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0dc51b  add dword ptr [0xb4528], 0xfffffff4
    X86_AT(c, 0xdc51bu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xB4528u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0xFFFFFFF4u, 0, 4)); }
    // 0dc522  and edi, edi
    X86_AT(c, 0xdc522u);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & c.r[7], 4); }
    // 0dc524  jge 0xdc55f
    X86_AT(c, 0xdc524u);
    if (x86_cc(c, 13)) { goto L_dc55f; }
    X86_TICK(c, 7);
    // 0dc526  cmp edi, 0xffffffc1
    X86_AT(c, 0xdc526u);
    (void)x86_sub(c, c.r[7], 0xFFFFFFC1u, 0, 4);
    // 0dc529  jl 0xdc548
    X86_AT(c, 0xdc529u);
    if (x86_cc(c, 12)) { goto L_dc548; }
    X86_TICK(c, 18);
    // 0dc52b  mov eax, edi
    X86_AT(c, 0xdc52bu);
    c.r[0] = c.r[7];
    // 0dc52d  neg eax
    X86_AT(c, 0xdc52du);
    { uint32_t v = c.r[0]; c.r[0] = x86_neg(c, v, 4); }
    // 0dc52f  push eax
    X86_AT(c, 0xdc52fu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0dc530  push dword ptr [0xb4528]
    X86_AT(c, 0xdc530u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xB4528u))); push32(c, v); }
    // 0dc536  call 0xdc0a0
    X86_AT(c, 0xdc536u);
    push32(c, 0xdc53bu); x86_call_known(c, 0xdc0a0u, f_000dc0a0); X86_RET(c, 0xdc53bu);
    X86_TICK(c, 13);
    // 0dc53b  mov eax, dword ptr [0xb4528]
    X86_AT(c, 0xdc53bu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xB4528u)));
    // 0dc540  mov word ptr [eax + 8], 0
    X86_AT(c, 0xdc540u);
    wr16((c.sbase[3] + (uint32_t)(c.r[0] + 0x8u)), 0x0u);
    // 0dc546  jmp 0xdc56b
    X86_AT(c, 0xdc546u);
    goto L_dc56b;
L_dc548:
    X86_TICK(c, 30);
    // 0dc548  mov esi, 0xb4538
    X86_AT(c, 0xdc548u);
    c.r[6] = 0xB4538u;
    // 0dc54d  mov eax, dword ptr [0xb4528]
    X86_AT(c, 0xdc54du);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xB4528u)));
    // 0dc552  push edi
    X86_AT(c, 0xdc552u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0dc553  mov edi, eax
    X86_AT(c, 0xdc553u);
    c.r[7] = c.r[0];
    // 0dc555  mov ecx, 3
    X86_AT(c, 0xdc555u);
    c.r[1] = 0x3u;
    // 0dc55a  movsd dword ptr es:[edi], dword ptr [esi]
    X86_AT(c, 0xdc55au);
    x86_string(c, 0, 4, 243, 4, 3);
    // 0dc55c  pop edi
    X86_AT(c, 0xdc55cu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0dc55d  jmp 0xdc56b
    X86_AT(c, 0xdc55du);
    goto L_dc56b;
L_dc55f:
    X86_TICK(c, 8);
    // 0dc55f  mov eax, edi
    X86_AT(c, 0xdc55fu);
    c.r[0] = c.r[7];
    // 0dc561  mov edx, dword ptr [0xb4528]
    X86_AT(c, 0xdc561u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(0xB4528u)));
    // 0dc567  mov word ptr [edx + 8], ax
    X86_AT(c, 0xdc567u);
    wr16((c.sbase[3] + (uint32_t)(c.r[2] + 0x8u)), (c.r[0] & 0xFFFFu));
L_dc56b:
    X86_TICK(c, 12);
    // 0dc56b  push dword ptr [0xb4528]
    X86_AT(c, 0xdc56bu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xB4528u))); push32(c, v); }
    // 0dc571  call 0xdad34
    X86_AT(c, 0xdc571u);
    push32(c, 0xdc576u); x86_call_known(c, 0xdad34u, f_000dad34); X86_RET(c, 0xdc576u);
L_dc576:
    X86_TICK(c, 22);
    // 0dc576  pop edi
    X86_AT(c, 0xdc576u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0dc577  pop esi
    X86_AT(c, 0xdc577u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0dc578  pop ebx
    X86_AT(c, 0xdc578u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0dc579  ret 
    X86_AT(c, 0xdc579u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xdc42cu, "ran off the end of a function");
}
void f_000dc576(X86Cpu& c) {
    X86_TICK(c, 22);
    // 0dc576  pop edi
    X86_AT(c, 0xdc576u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0dc577  pop esi
    X86_AT(c, 0xdc577u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0dc578  pop ebx
    X86_AT(c, 0xdc578u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0dc579  ret 
    X86_AT(c, 0xdc579u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xdc576u, "ran off the end of a function");
}
void f_000dc57c(X86Cpu& c) {
    X86_TICK(c, 27);
    // 0dc57c  push ebp
    X86_AT(c, 0xdc57cu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0dc57d  mov ebp, esp
    X86_AT(c, 0xdc57du);
    c.r[5] = c.r[4];
    // 0dc57f  mov eax, dword ptr [ebp + 0xc]
    X86_AT(c, 0xdc57fu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0dc582  mov ecx, eax
    X86_AT(c, 0xdc582u);
    c.r[1] = c.r[0];
    // 0dc584  shl ecx, 1
    X86_AT(c, 0xdc584u);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 4, v, 0x1u, 4, w); if (w) c.r[1] = r; }
    // 0dc586  shr ecx, 0x18
    X86_AT(c, 0xdc586u);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 5, v, 0x18u, 4, w); if (w) c.r[1] = r; }
    // 0dc589  mov edx, dword ptr [ebp + 8]
    X86_AT(c, 0xdc589u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0dc58c  cmp cl, 0xff
    X86_AT(c, 0xdc58cu);
    (void)x86_sub(c, g8(c, 1), 0xFFu, 0, 1);
    // 0dc58f  je 0xdc5d1
    X86_AT(c, 0xdc58fu);
    if (x86_cc(c, 4)) { goto L_dc5d1; }
    X86_TICK(c, 7);
    // 0dc591  and cl, cl
    X86_AT(c, 0xdc591u);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_logic(c, v & g8(c, 1), 1)); }
    // 0dc593  je 0xdc5db
    X86_AT(c, 0xdc593u);
    if (x86_cc(c, 4)) { goto L_dc5db; }
    X86_TICK(c, 6);
    // 0dc595  mov byte ptr [edx + 0xb], 0
    X86_AT(c, 0xdc595u);
    wr8((c.sbase[3] + (uint32_t)(c.r[2] + 0xBu)), 0x0u);
    // 0dc599  sub cx, 0x7f
    X86_AT(c, 0xdc599u);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_sub(c, v, 0x7Fu, 0, 2)); }
    // 0dc59d  add cx, 0x3fff
    X86_AT(c, 0xdc59du);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_add(c, v, 0x3FFFu, 0, 2)); }
L_dc5a2:
    X86_TICK(c, 9);
    // 0dc5a2  mov word ptr [edx + 8], cx
    X86_AT(c, 0xdc5a2u);
    wr16((c.sbase[3] + (uint32_t)(c.r[2] + 0x8u)), (c.r[1] & 0xFFFFu));
    // 0dc5a6  test eax, 0x80000000
    X86_AT(c, 0xdc5a6u);
    (void)x86_logic(c, c.r[0] & 0x80000000u, 4);
    // 0dc5ab  je 0xdc5b3
    X86_AT(c, 0xdc5abu);
    if (x86_cc(c, 4)) { goto L_dc5b3; }
    X86_TICK(c, 9);
    // 0dc5ad  mov byte ptr [edx + 0xa], 1
    X86_AT(c, 0xdc5adu);
    wr8((c.sbase[3] + (uint32_t)(c.r[2] + 0xAu)), 0x1u);
    // 0dc5b1  jmp 0xdc5b7
    X86_AT(c, 0xdc5b1u);
    goto L_dc5b7;
L_dc5b3:
    X86_TICK(c, 2);
    // 0dc5b3  mov byte ptr [edx + 0xa], 0
    X86_AT(c, 0xdc5b3u);
    wr8((c.sbase[3] + (uint32_t)(c.r[2] + 0xAu)), 0x0u);
L_dc5b7:
    X86_TICK(c, 10);
    // 0dc5b7  shl eax, 8
    X86_AT(c, 0xdc5b7u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 0dc5ba  and cx, cx
    X86_AT(c, 0xdc5bau);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_logic(c, v & (c.r[1] & 0xFFFFu), 2)); }
    // 0dc5bd  je 0xdc5c4
    X86_AT(c, 0xdc5bdu);
    if (x86_cc(c, 4)) { goto L_dc5c4; }
    X86_TICK(c, 2);
    // 0dc5bf  or eax, 0x80000000
    X86_AT(c, 0xdc5bfu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v | 0x80000000u, 4); }
L_dc5c4:
    X86_TICK(c, 18);
    // 0dc5c4  mov dword ptr [edx + 4], eax
    X86_AT(c, 0xdc5c4u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0x4u)), c.r[0]);
    // 0dc5c7  mov dword ptr [edx], 0
    X86_AT(c, 0xdc5c7u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2])), 0x0u);
    // 0dc5cd  pop ebp
    X86_AT(c, 0xdc5cdu);
    { uint32_t v = pop32(c); c.r[5] = v; }
    // 0dc5ce  ret 8
    X86_AT(c, 0xdc5ceu);
    c.eip = pop32(c); c.r[4] += 0x8u; return;
L_dc5d1:
    X86_TICK(c, 11);
    // 0dc5d1  mov cx, 0x7fff
    X86_AT(c, 0xdc5d1u);
    s16(c, 1, 0x7FFFu);
    // 0dc5d5  mov byte ptr [edx + 0xb], 0
    X86_AT(c, 0xdc5d5u);
    wr8((c.sbase[3] + (uint32_t)(c.r[2] + 0xBu)), 0x0u);
    // 0dc5d9  jmp 0xdc5a2
    X86_AT(c, 0xdc5d9u);
    X86_POLL(c, 0xdc5a2u); goto L_dc5a2;
L_dc5db:
    X86_TICK(c, 9);
    // 0dc5db  mov byte ptr [edx + 0xb], 1
    X86_AT(c, 0xdc5dbu);
    wr8((c.sbase[3] + (uint32_t)(c.r[2] + 0xBu)), 0x1u);
    // 0dc5df  jmp 0xdc5a2
    X86_AT(c, 0xdc5dfu);
    X86_POLL(c, 0xdc5a2u); goto L_dc5a2;
    x86_fault(c, 0xdc57cu, "ran off the end of a function");
}
void f_000dc644(X86Cpu& c) {
    X86_TICK(c, 24);
    // 0dc644  enter 0x10, 0
    X86_AT(c, 0xdc644u);
    x86_enter(c, 0x10u, 0x0u, 4);
    // 0dc648  push ebx
    X86_AT(c, 0xdc648u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0dc649  push esi
    X86_AT(c, 0xdc649u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0dc64a  push edi
    X86_AT(c, 0xdc64au);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0dc64b  cmp byte ptr [0xb445f], 0
    X86_AT(c, 0xdc64bu);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0xB445Fu))), 0x0u, 0, 1);
    // 0dc652  je 0xdc672
    X86_AT(c, 0xdc652u);
    if (x86_cc(c, 4)) { goto L_dc672; }
    X86_TICK(c, 12);
    // 0dc654  push dword ptr [0xb4528]
    X86_AT(c, 0xdc654u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xB4528u))); push32(c, v); }
    // 0dc65a  call 0xdab6e
    X86_AT(c, 0xdc65au);
    push32(c, 0xdc65fu); x86_call_known(c, 0xdab6eu, f_000dab6e); X86_RET(c, 0xdc65fu);
    X86_TICK(c, 7);
    // 0dc65f  call 0xdabb7
    X86_AT(c, 0xdc65fu);
    push32(c, 0xdc664u); x86_call_known(c, 0xdabb7u, f_000dabb7); X86_RET(c, 0xdc664u);
    X86_TICK(c, 9);
    // 0dc664  mov word ptr [ebp - 2], ax
    X86_AT(c, 0xdc664u);
    wr16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFEu)), (c.r[0] & 0xFFFFu));
    // 0dc668  call 0xdab77
    X86_AT(c, 0xdc668u);
    push32(c, 0xdc66du); x86_call_known(c, 0xdab77u, f_000dab77); X86_RET(c, 0xdc66du);
    X86_TICK(c, 7);
    // 0dc66d  jmp 0xdc6f9
    X86_AT(c, 0xdc66du);
    goto L_dc6f9;
L_dc672:
    X86_TICK(c, 13);
    // 0dc672  mov eax, 0xb448c
    X86_AT(c, 0xdc672u);
    c.r[0] = 0xB448Cu;
    // 0dc677  cmp eax, dword ptr [0xb4528]
    X86_AT(c, 0xdc677u);
    (void)x86_sub(c, c.r[0], rd32((c.sbase[3] + (uint32_t)(0xB4528u))), 0, 4);
    // 0dc67d  jne 0xdc683
    X86_AT(c, 0xdc67du);
    if (x86_cc(c, 5)) { goto L_dc683; }
    X86_TICK(c, 9);
    // 0dc67f  mov bl, 0x41
    X86_AT(c, 0xdc67fu);
    s8(c, 3, 0x41u);
    // 0dc681  jmp 0xdc6db
    X86_AT(c, 0xdc681u);
    goto L_dc6db;
L_dc683:
    X86_TICK(c, 33);
    // 0dc683  mov esi, dword ptr [0xb4528]
    X86_AT(c, 0xdc683u);
    c.r[6] = rd32((c.sbase[3] + (uint32_t)(0xB4528u)));
    // 0dc689  lea edi, [ebp - 0x10]
    X86_AT(c, 0xdc689u);
    c.r[7] = (uint32_t)(c.r[5] + 0xFFFFFFF0u);
    // 0dc68c  mov ecx, 3
    X86_AT(c, 0xdc68cu);
    c.r[1] = 0x3u;
    // 0dc691  movsd dword ptr es:[edi], dword ptr [esi]
    X86_AT(c, 0xdc691u);
    x86_string(c, 0, 4, 243, 4, 3);
    // 0dc693  mov bl, byte ptr [ebp - 6]
    X86_AT(c, 0xdc693u);
    s8(c, 3, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFAu))));
    // 0dc696  add ebx, ebx
    X86_AT(c, 0xdc696u);
    { uint32_t v = c.r[3]; c.r[3] = x86_add(c, v, c.r[3], 0, 4); }
    // 0dc698  cmp byte ptr [ebp - 5], 0
    X86_AT(c, 0xdc698u);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFBu))), 0x0u, 0, 1);
    // 0dc69c  je 0xdc6a3
    X86_AT(c, 0xdc69cu);
    if (x86_cc(c, 4)) { goto L_dc6a3; }
    X86_TICK(c, 9);
    // 0dc69e  or bl, 0x40
    X86_AT(c, 0xdc69eu);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v | 0x40u, 1)); }
    // 0dc6a1  jmp 0xdc6db
    X86_AT(c, 0xdc6a1u);
    goto L_dc6db;
L_dc6a3:
    X86_TICK(c, 12);
    // 0dc6a3  cmp word ptr [ebp - 8], 0x7fff
    X86_AT(c, 0xdc6a3u);
    (void)x86_sub(c, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u))), 0x7FFFu, 0, 2);
    // 0dc6a9  jne 0xdc6c6
    X86_AT(c, 0xdc6a9u);
    if (x86_cc(c, 5)) { goto L_dc6c6; }
    X86_TICK(c, 18);
    // 0dc6ab  lea esi, [ebp - 0x10]
    X86_AT(c, 0xdc6abu);
    c.r[6] = (uint32_t)(c.r[5] + 0xFFFFFFF0u);
    // 0dc6ae  mov edi, 0xb4550
    X86_AT(c, 0xdc6aeu);
    c.r[7] = 0xB4550u;
    // 0dc6b3  mov ecx, 8
    X86_AT(c, 0xdc6b3u);
    c.r[1] = 0x8u;
    // 0dc6b8  cmpsb byte ptr [esi], byte ptr es:[edi]
    X86_AT(c, 0xdc6b8u);
    x86_string(c, 1, 1, 243, 4, 3);
    // 0dc6ba  jne 0xdc6c1
    X86_AT(c, 0xdc6bau);
    if (x86_cc(c, 5)) { goto L_dc6c1; }
    X86_TICK(c, 9);
    // 0dc6bc  or bl, 5
    X86_AT(c, 0xdc6bcu);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v | 0x5u, 1)); }
    // 0dc6bf  jmp 0xdc6db
    X86_AT(c, 0xdc6bfu);
    goto L_dc6db;
L_dc6c1:
    X86_TICK(c, 9);
    // 0dc6c1  or bl, 1
    X86_AT(c, 0xdc6c1u);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v | 0x1u, 1)); }
    // 0dc6c4  jmp 0xdc6db
    X86_AT(c, 0xdc6c4u);
    goto L_dc6db;
L_dc6c6:
    X86_TICK(c, 12);
    // 0dc6c6  cmp word ptr [ebp - 8], 0
    X86_AT(c, 0xdc6c6u);
    (void)x86_sub(c, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u))), 0x0u, 0, 2);
    // 0dc6cb  jne 0xdc6d2
    X86_AT(c, 0xdc6cbu);
    if (x86_cc(c, 5)) { goto L_dc6d2; }
    X86_TICK(c, 9);
    // 0dc6cd  or bl, 0x44
    X86_AT(c, 0xdc6cdu);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v | 0x44u, 1)); }
    // 0dc6d0  jmp 0xdc6db
    X86_AT(c, 0xdc6d0u);
    goto L_dc6db;
L_dc6d2:
    X86_TICK(c, 12);
    // 0dc6d2  cmp byte ptr [ebp - 9], 0x80
    X86_AT(c, 0xdc6d2u);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF7u))), 0x80u, 0, 1);
    // 0dc6d6  jb 0xdc6db
    X86_AT(c, 0xdc6d6u);
    if (x86_cc(c, 2)) { goto L_dc6db; }
    X86_TICK(c, 2);
    // 0dc6d8  or bl, 4
    X86_AT(c, 0xdc6d8u);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v | 0x4u, 1)); }
L_dc6db:
    X86_TICK(c, 27);
    // 0dc6db  mov ax, word ptr [0xb452c]
    X86_AT(c, 0xdc6dbu);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(0xB452Cu))));
    // 0dc6e1  and ax, 0xb800
    X86_AT(c, 0xdc6e1u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_logic(c, v & 0xB800u, 2)); }
    // 0dc6e5  sub bh, bh
    X86_AT(c, 0xdc6e5u);
    { uint32_t v = g8(c, 7); s8(c, 7, x86_sub(c, v, g8(c, 7), 0, 1)); }
    // 0dc6e7  mov edx, ebx
    X86_AT(c, 0xdc6e7u);
    c.r[2] = c.r[3];
    // 0dc6e9  shl edx, 8
    X86_AT(c, 0xdc6e9u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[2] = r; }
    // 0dc6ec  or dx, ax
    X86_AT(c, 0xdc6ecu);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_logic(c, v | (c.r[0] & 0xFFFFu), 2)); }
    // 0dc6ef  mov word ptr [0xb452c], dx
    X86_AT(c, 0xdc6efu);
    wr16((c.sbase[3] + (uint32_t)(0xB452Cu)), (c.r[2] & 0xFFFFu));
    // 0dc6f6  xchg edx, eax
    X86_AT(c, 0xdc6f6u);
    { uint32_t t = c.r[2]; c.r[2] = c.r[0]; c.r[0] = t; }
    // 0dc6f7  jmp 0xdc6fd
    X86_AT(c, 0xdc6f7u);
    goto L_dc6fd;
L_dc6f9:
    X86_TICK(c, 4);
    // 0dc6f9  mov ax, word ptr [ebp - 2]
    X86_AT(c, 0xdc6f9u);
    s16(c, 0, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFEu))));
L_dc6fd:
    X86_TICK(c, 28);
    // 0dc6fd  pop edi
    X86_AT(c, 0xdc6fdu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0dc6fe  pop esi
    X86_AT(c, 0xdc6feu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0dc6ff  pop ebx
    X86_AT(c, 0xdc6ffu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0dc700  leave 
    X86_AT(c, 0xdc700u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0dc701  ret 
    X86_AT(c, 0xdc701u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xdc644u, "ran off the end of a function");
}
void f_000dc7fc(X86Cpu& c) {
    X86_TICK(c, 24);
    // 0dc7fc  enter 0x2c, 0
    X86_AT(c, 0xdc7fcu);
    x86_enter(c, 0x2Cu, 0x0u, 4);
    // 0dc800  push ebx
    X86_AT(c, 0xdc800u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0dc801  push esi
    X86_AT(c, 0xdc801u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0dc802  push edi
    X86_AT(c, 0xdc802u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0dc803  cmp byte ptr [0xb445f], 0
    X86_AT(c, 0xdc803u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0xB445Fu))), 0x0u, 0, 1);
    // 0dc80a  je 0xdc824
    X86_AT(c, 0xdc80au);
    if (x86_cc(c, 4)) { goto L_dc824; }
    X86_TICK(c, 12);
    // 0dc80c  push dword ptr [0xb4528]
    X86_AT(c, 0xdc80cu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xB4528u))); push32(c, v); }
    // 0dc812  call 0xdab6e
    X86_AT(c, 0xdc812u);
    push32(c, 0xdc817u); x86_call_known(c, 0xdab6eu, f_000dab6e); X86_RET(c, 0xdc817u);
    X86_TICK(c, 12);
    // 0dc817  push dword ptr [ebp + 8]
    X86_AT(c, 0xdc817u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, v); }
    // 0dc81a  call 0xdabbf
    X86_AT(c, 0xdc81au);
    push32(c, 0xdc81fu); x86_call_known(c, 0xdabbfu, f_000dabbf); X86_RET(c, 0xdc81fu);
    X86_TICK(c, 7);
    // 0dc81f  jmp 0xdc985
    X86_AT(c, 0xdc81fu);
    goto L_dc985;
L_dc824:
    X86_TICK(c, 35);
    // 0dc824  mov esi, dword ptr [0xb4528]
    X86_AT(c, 0xdc824u);
    c.r[6] = rd32((c.sbase[3] + (uint32_t)(0xB4528u)));
    // 0dc82a  lea edi, [ebp - 0xc]
    X86_AT(c, 0xdc82au);
    c.r[7] = (uint32_t)(c.r[5] + 0xFFFFFFF4u);
    // 0dc82d  mov ecx, 3
    X86_AT(c, 0xdc82du);
    c.r[1] = 0x3u;
    // 0dc832  movsd dword ptr es:[edi], dword ptr [esi]
    X86_AT(c, 0xdc832u);
    x86_string(c, 0, 4, 243, 4, 3);
    // 0dc834  mov ax, word ptr [ebp - 4]
    X86_AT(c, 0xdc834u);
    s16(c, 0, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))));
    // 0dc838  sub ax, 0x3fff
    X86_AT(c, 0xdc838u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_sub(c, v, 0x3FFFu, 0, 2)); }
    // 0dc83c  mov word ptr [ebp - 0x10], ax
    X86_AT(c, 0xdc83cu);
    wr16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u)), (c.r[0] & 0xFFFFu));
    // 0dc840  cmp byte ptr [ebp - 2], 0
    X86_AT(c, 0xdc840u);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFEu))), 0x0u, 0, 1);
    // 0dc844  je 0xdc84f
    X86_AT(c, 0xdc844u);
    if (x86_cc(c, 4)) { goto L_dc84f; }
    X86_TICK(c, 13);
    // 0dc846  mov eax, dword ptr [ebp + 8]
    X86_AT(c, 0xdc846u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0dc849  mov byte ptr [eax + 9], 0x80
    X86_AT(c, 0xdc849u);
    wr8((c.sbase[3] + (uint32_t)(c.r[0] + 0x9u)), 0x80u);
    // 0dc84d  jmp 0xdc856
    X86_AT(c, 0xdc84du);
    goto L_dc856;
L_dc84f:
    X86_TICK(c, 6);
    // 0dc84f  mov eax, dword ptr [ebp + 8]
    X86_AT(c, 0xdc84fu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0dc852  mov byte ptr [eax + 9], 0
    X86_AT(c, 0xdc852u);
    wr8((c.sbase[3] + (uint32_t)(c.r[0] + 0x9u)), 0x0u);
L_dc856:
    X86_TICK(c, 12);
    // 0dc856  cmp word ptr [ebp - 0x10], 0x3f
    X86_AT(c, 0xdc856u);
    (void)x86_sub(c, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u))), 0x3Fu, 0, 2);
    // 0dc85b  jle 0xdc863
    X86_AT(c, 0xdc85bu);
    if (x86_cc(c, 14)) { goto L_dc863; }
    X86_TICK(c, 9);
    // 0dc85d  mov byte ptr [ebp - 0xd], 0x99
    X86_AT(c, 0xdc85du);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF3u)), 0x99u);
    // 0dc861  jmp 0xdc867
    X86_AT(c, 0xdc861u);
    goto L_dc867;
L_dc863:
    X86_TICK(c, 2);
    // 0dc863  mov byte ptr [ebp - 0xd], 0
    X86_AT(c, 0xdc863u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF3u)), 0x0u);
L_dc867:
    X86_TICK(c, 2);
    // 0dc867  mov word ptr [ebp - 0x12], 1
    X86_AT(c, 0xdc867u);
    wr16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFEEu)), 0x1u);
L_dc86d:
    X86_TICK(c, 23);
    // 0dc86d  movzx eax, word ptr [ebp - 0x12]
    X86_AT(c, 0xdc86du);
    c.r[0] = rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFEEu)));
    // 0dc871  mov dl, byte ptr [ebp - 0xd]
    X86_AT(c, 0xdc871u);
    s8(c, 2, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF3u))));
    // 0dc874  mov ecx, dword ptr [ebp + 8]
    X86_AT(c, 0xdc874u);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0dc877  mov byte ptr [ecx + eax*1 - 1], dl
    X86_AT(c, 0xdc877u);
    wr8((c.sbase[3] + (uint32_t)(c.r[1] + c.r[0] + 0xFFFFFFFFu)), g8(c, 2));
    // 0dc87b  cmp ax, 9
    X86_AT(c, 0xdc87bu);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), 0x9u, 0, 2);
    // 0dc87f  jae 0xdc887
    X86_AT(c, 0xdc87fu);
    if (x86_cc(c, 3)) { goto L_dc887; }
    X86_TICK(c, 13);
    // 0dc881  inc word ptr [ebp - 0x12]
    X86_AT(c, 0xdc881u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFEEu)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
    // 0dc885  jmp 0xdc86d
    X86_AT(c, 0xdc885u);
    X86_POLL(c, 0xdc86du); goto L_dc86d;
L_dc887:
    X86_TICK(c, 11);
    // 0dc887  mov ax, word ptr [ebp - 0x10]
    X86_AT(c, 0xdc887u);
    s16(c, 0, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u))));
    // 0dc88b  and ax, ax
    X86_AT(c, 0xdc88bu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_logic(c, v & (c.r[0] & 0xFFFFu), 2)); }
    // 0dc88e  jl 0xdc985
    X86_AT(c, 0xdc88eu);
    if (x86_cc(c, 12)) { goto L_dc985; }
    X86_TICK(c, 7);
    // 0dc894  cmp ax, 0x3f
    X86_AT(c, 0xdc894u);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), 0x3Fu, 0, 2);
    // 0dc898  jg 0xdc985
    X86_AT(c, 0xdc898u);
    if (x86_cc(c, 15)) { goto L_dc985; }
    X86_TICK(c, 17);
    // 0dc89e  mov dx, 0x3f
    X86_AT(c, 0xdc89eu);
    s16(c, 2, 0x3Fu);
    // 0dc8a2  sub edx, eax
    X86_AT(c, 0xdc8a2u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0dc8a4  push edx
    X86_AT(c, 0xdc8a4u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0dc8a5  lea eax, [ebp - 0xc]
    X86_AT(c, 0xdc8a5u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFF4u);
    // 0dc8a8  push eax
    X86_AT(c, 0xdc8a8u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0dc8a9  call 0xdc0a0
    X86_AT(c, 0xdc8a9u);
    push32(c, 0xdc8aeu); x86_call_known(c, 0xdc0a0u, f_000dc0a0); X86_RET(c, 0xdc8aeu);
    X86_TICK(c, 26);
    // 0dc8ae  mov eax, dword ptr [ebp - 0xc]
    X86_AT(c, 0xdc8aeu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)));
    // 0dc8b1  mov edx, dword ptr [ebp - 8]
    X86_AT(c, 0xdc8b1u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)));
    // 0dc8b4  mov dword ptr [ebp - 0x1c], eax
    X86_AT(c, 0xdc8b4u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE4u)), c.r[0]);
    // 0dc8b7  mov dword ptr [ebp - 0x18], edx
    X86_AT(c, 0xdc8b7u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE8u)), c.r[2]);
    // 0dc8ba  cmp dword ptr [ebp - 0x18], 0
    X86_AT(c, 0xdc8bau);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE8u))), 0x0u, 0, 4);
    // 0dc8be  sete byte ptr [ebp - 0x26]
    X86_AT(c, 0xdc8beu);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFDAu)), x86_cc(c, 4) ? 1u : 0u);
    // 0dc8c2  mov byte ptr [ebp - 0x25], 0
    X86_AT(c, 0xdc8c2u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFDBu)), 0x0u);
L_dc8c6:
    X86_TICK(c, 12);
    // 0dc8c6  cmp byte ptr [ebp - 0x26], 0
    X86_AT(c, 0xdc8c6u);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFDAu))), 0x0u, 0, 1);
    // 0dc8ca  je 0xdc8ec
    X86_AT(c, 0xdc8cau);
    if (x86_cc(c, 4)) { goto L_dc8ec; }
    X86_TICK(c, 12);
    // 0dc8cc  cmp dword ptr [ebp - 0x1c], 0
    X86_AT(c, 0xdc8ccu);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE4u))), 0x0u, 0, 4);
    // 0dc8d0  je 0xdc985
    X86_AT(c, 0xdc8d0u);
    if (x86_cc(c, 4)) { goto L_dc985; }
    X86_TICK(c, 61);
    // 0dc8d6  mov eax, dword ptr [ebp - 0x1c]
    X86_AT(c, 0xdc8d6u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE4u)));
    // 0dc8d9  sub edx, edx
    X86_AT(c, 0xdc8d9u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[2], 0, 4); }
    // 0dc8db  mov ecx, 0xa
    X86_AT(c, 0xdc8dbu);
    c.r[1] = 0xAu;
    // 0dc8e0  div ecx
    X86_AT(c, 0xdc8e0u);
    x86_div(c, c.r[1], 4, 0xdc8e0u);
    // 0dc8e2  mov dword ptr [ebp - 0x2c], eax
    X86_AT(c, 0xdc8e2u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFD4u)), c.r[0]);
    // 0dc8e5  mov ebx, edx
    X86_AT(c, 0xdc8e5u);
    c.r[3] = c.r[2];
    // 0dc8e7  mov dword ptr [ebp - 0x1c], eax
    X86_AT(c, 0xdc8e7u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE4u)), c.r[0]);
    // 0dc8ea  jmp 0xdc94c
    X86_AT(c, 0xdc8eau);
    goto L_dc94c;
L_dc8ec:
    X86_TICK(c, 17);
    // 0dc8ec  mov eax, dword ptr [ebp - 0x1c]
    X86_AT(c, 0xdc8ecu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE4u)));
    // 0dc8ef  or eax, dword ptr [ebp - 0x18]
    X86_AT(c, 0xdc8efu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v | rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE8u))), 4); }
    // 0dc8f2  and eax, eax
    X86_AT(c, 0xdc8f2u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0dc8f4  je 0xdc985
    X86_AT(c, 0xdc8f4u);
    if (x86_cc(c, 4)) { goto L_dc985; }
    X86_TICK(c, 4);
    // 0dc8fa  sub edi, edi
    X86_AT(c, 0xdc8fau);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
    // 0dc8fc  mov si, 3
    X86_AT(c, 0xdc8fcu);
    s16(c, 6, 0x3u);
L_dc900:
    X86_TICK(c, 24);
    // 0dc900  movzx esi, si
    X86_AT(c, 0xdc900u);
    c.r[6] = (c.r[6] & 0xFFFFu);
    // 0dc903  shl edi, 0x10
    X86_AT(c, 0xdc903u);
    { uint32_t v = c.r[7]; bool w; uint32_t r = x86_shift(c, 4, v, 0x10u, 4, w); if (w) c.r[7] = r; }
    // 0dc906  movzx eax, word ptr [ebp + esi*2 - 0x1c]
    X86_AT(c, 0xdc906u);
    c.r[0] = rd16((c.sbase[2] + (uint32_t)(c.r[5] + c.r[6] * 2 + 0xFFFFFFE4u)));
    // 0dc90b  or eax, edi
    X86_AT(c, 0xdc90bu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v | c.r[7], 4); }
    // 0dc90d  xchg edi, eax
    X86_AT(c, 0xdc90du);
    { uint32_t t = c.r[7]; c.r[7] = c.r[0]; c.r[0] = t; }
    // 0dc90e  and edi, edi
    X86_AT(c, 0xdc90eu);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & c.r[7], 4); }
    // 0dc910  jne 0xdc91e
    X86_AT(c, 0xdc910u);
    if (x86_cc(c, 5)) { goto L_dc91e; }
    X86_TICK(c, 13);
    // 0dc912  sub ebx, ebx
    X86_AT(c, 0xdc912u);
    { uint32_t v = c.r[3]; c.r[3] = x86_sub(c, v, c.r[3], 0, 4); }
    // 0dc914  sub bx, bx
    X86_AT(c, 0xdc914u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_sub(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
    // 0dc917  mov word ptr [ebp + esi*2 - 0x24], bx
    X86_AT(c, 0xdc917u);
    wr16((c.sbase[2] + (uint32_t)(c.r[5] + c.r[6] * 2 + 0xFFFFFFDCu)), (c.r[3] & 0xFFFFu));
    // 0dc91c  jmp 0xdc938
    X86_AT(c, 0xdc91cu);
    goto L_dc938;
L_dc91e:
    X86_TICK(c, 57);
    // 0dc91e  movzx esi, si
    X86_AT(c, 0xdc91eu);
    c.r[6] = (c.r[6] & 0xFFFFu);
    // 0dc921  mov eax, edi
    X86_AT(c, 0xdc921u);
    c.r[0] = c.r[7];
    // 0dc923  sub edx, edx
    X86_AT(c, 0xdc923u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[2], 0, 4); }
    // 0dc925  mov ecx, 0xa
    X86_AT(c, 0xdc925u);
    c.r[1] = 0xAu;
    // 0dc92a  div ecx
    X86_AT(c, 0xdc92au);
    x86_div(c, c.r[1], 4, 0xdc92au);
    // 0dc92c  mov dword ptr [ebp - 0x2c], eax
    X86_AT(c, 0xdc92cu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFD4u)), c.r[0]);
    // 0dc92f  mov word ptr [ebp + esi*2 - 0x24], ax
    X86_AT(c, 0xdc92fu);
    wr16((c.sbase[2] + (uint32_t)(c.r[5] + c.r[6] * 2 + 0xFFFFFFDCu)), (c.r[0] & 0xFFFFu));
    // 0dc934  mov edi, edx
    X86_AT(c, 0xdc934u);
    c.r[7] = c.r[2];
    // 0dc936  mov ebx, edi
    X86_AT(c, 0xdc936u);
    c.r[3] = c.r[7];
L_dc938:
    X86_TICK(c, 7);
    // 0dc938  and si, si
    X86_AT(c, 0xdc938u);
    { uint32_t v = (c.r[6] & 0xFFFFu); s16(c, 6, x86_logic(c, v & (c.r[6] & 0xFFFFu), 2)); }
    // 0dc93b  jbe 0xdc940
    X86_AT(c, 0xdc93bu);
    if (x86_cc(c, 6)) { goto L_dc940; }
    X86_TICK(c, 9);
    // 0dc93d  dec esi
    X86_AT(c, 0xdc93du);
    { uint32_t v = c.r[6]; c.r[6] = x86_dec(c, v, 4); }
    // 0dc93e  jmp 0xdc900
    X86_AT(c, 0xdc93eu);
    X86_POLL(c, 0xdc900u); goto L_dc900;
L_dc940:
    X86_TICK(c, 12);
    // 0dc940  mov eax, dword ptr [ebp - 0x24]
    X86_AT(c, 0xdc940u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFDCu)));
    // 0dc943  mov edx, dword ptr [ebp - 0x20]
    X86_AT(c, 0xdc943u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE0u)));
    // 0dc946  mov dword ptr [ebp - 0x1c], eax
    X86_AT(c, 0xdc946u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE4u)), c.r[0]);
    // 0dc949  mov dword ptr [ebp - 0x18], edx
    X86_AT(c, 0xdc949u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE8u)), c.r[2]);
L_dc94c:
    X86_TICK(c, 12);
    // 0dc94c  mov al, byte ptr [ebp - 0x25]
    X86_AT(c, 0xdc94cu);
    s8(c, 0, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFDBu))));
    // 0dc94f  rcr al, 1
    X86_AT(c, 0xdc94fu);
    { uint32_t v = g8(c, 0); bool w; uint32_t r = x86_shift(c, 3, v, 0x1u, 1, w); if (w) s8(c, 0, r); }
    // 0dc951  jb 0xdc963
    X86_AT(c, 0xdc951u);
    if (x86_cc(c, 2)) { goto L_dc963; }
    X86_TICK(c, 23);
    // 0dc953  mov al, byte ptr [ebp - 0x25]
    X86_AT(c, 0xdc953u);
    s8(c, 0, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFDBu))));
    // 0dc956  shr al, 1
    X86_AT(c, 0xdc956u);
    { uint32_t v = g8(c, 0); bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 1, w); if (w) s8(c, 0, r); }
    // 0dc958  movzx eax, al
    X86_AT(c, 0xdc958u);
    c.r[0] = g8(c, 0);
    // 0dc95b  mov edx, dword ptr [ebp + 8]
    X86_AT(c, 0xdc95bu);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0dc95e  mov byte ptr [edx + eax*1], bl
    X86_AT(c, 0xdc95eu);
    wr8((c.sbase[3] + (uint32_t)(c.r[2] + c.r[0])), g8(c, 3));
    // 0dc961  jmp 0xdc976
    X86_AT(c, 0xdc961u);
    goto L_dc976;
L_dc963:
    X86_TICK(c, 26);
    // 0dc963  mov al, byte ptr [ebp - 0x25]
    X86_AT(c, 0xdc963u);
    s8(c, 0, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFDBu))));
    // 0dc966  shr al, 1
    X86_AT(c, 0xdc966u);
    { uint32_t v = g8(c, 0); bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 1, w); if (w) s8(c, 0, r); }
    // 0dc968  movzx eax, al
    X86_AT(c, 0xdc968u);
    c.r[0] = g8(c, 0);
    // 0dc96b  mov edx, ebx
    X86_AT(c, 0xdc96bu);
    c.r[2] = c.r[3];
    // 0dc96d  shl dl, 4
    X86_AT(c, 0xdc96du);
    { uint32_t v = g8(c, 2); bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 1, w); if (w) s8(c, 2, r); }
    // 0dc970  mov ecx, dword ptr [ebp + 8]
    X86_AT(c, 0xdc970u);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0dc973  add byte ptr [ecx + eax*1], dl
    X86_AT(c, 0xdc973u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[1] + c.r[0])); uint32_t v = rd8(ea); wr8(ea, x86_add(c, v, g8(c, 2), 0, 1)); }
L_dc976:
    X86_TICK(c, 11);
    // 0dc976  mov al, byte ptr [ebp - 0x25]
    X86_AT(c, 0xdc976u);
    s8(c, 0, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFDBu))));
    // 0dc979  cmp al, 0x11
    X86_AT(c, 0xdc979u);
    (void)x86_sub(c, g8(c, 0), 0x11u, 0, 1);
    // 0dc97b  jae 0xdc985
    X86_AT(c, 0xdc97bu);
    if (x86_cc(c, 3)) { goto L_dc985; }
    X86_TICK(c, 13);
    // 0dc97d  inc byte ptr [ebp - 0x25]
    X86_AT(c, 0xdc97du);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFDBu)); uint32_t v = rd8(ea); wr8(ea, x86_inc(c, v, 1)); }
    // 0dc980  jmp 0xdc8c6
    X86_AT(c, 0xdc980u);
    X86_POLL(c, 0xdc8c6u); goto L_dc8c6;
L_dc985:
    X86_TICK(c, 35);
    // 0dc985  add dword ptr [0xb4528], 0xfffffff4
    X86_AT(c, 0xdc985u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xB4528u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0xFFFFFFF4u, 0, 4)); }
    // 0dc98c  pop edi
    X86_AT(c, 0xdc98cu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0dc98d  pop esi
    X86_AT(c, 0xdc98du);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0dc98e  pop ebx
    X86_AT(c, 0xdc98eu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0dc98f  leave 
    X86_AT(c, 0xdc98fu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0dc990  ret 4
    X86_AT(c, 0xdc990u);
    c.eip = pop32(c); c.r[4] += 0x4u; return;
    x86_fault(c, 0xdc7fcu, "ran off the end of a function");
}
}

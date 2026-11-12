#include "p_game_funcs.h"
namespace p_game {
void f_000bf0a7(X86Cpu& c) {
    goto L_bf0a7;
L_bf074:
    X86_TICK(c, 12);
    // 0bf074  cmp dword ptr [ebp - 0xc], 3
    X86_AT(c, 0xbf074u);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u))), 0x3u, 0, 4);
    // 0bf078  jge 0xbf1bc
    X86_AT(c, 0xbf078u);
    if (x86_cc(c, 13)) { goto L_bf1bc; }
    X86_TICK(c, 2);
    // 0bf07e  mov dword ptr [ebp - 0x1c], 0
    X86_AT(c, 0xbf07eu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE4u)), 0x0u);
L_bf085:
    X86_TICK(c, 12);
    // 0bf085  cmp dword ptr [ebp - 0x1c], 8
    X86_AT(c, 0xbf085u);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE4u))), 0x8u, 0, 4);
    // 0bf089  jge 0xbf1b4
    X86_AT(c, 0xbf089u);
    if (x86_cc(c, 13)) { goto L_bf1b4; }
    X86_TICK(c, 2);
    // 0bf08f  mov dword ptr [ebp - 0x20], 0
    X86_AT(c, 0xbf08fu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE0u)), 0x0u);
L_bf096:
    X86_TICK(c, 12);
    // 0bf096  cmp dword ptr [ebp - 0x20], 8
    X86_AT(c, 0xbf096u);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE0u))), 0x8u, 0, 4);
    // 0bf09a  jge 0xbf1ac
    X86_AT(c, 0xbf09au);
    if (x86_cc(c, 13)) { goto L_bf1ac; }
    X86_TICK(c, 2);
    // 0bf0a0  mov dword ptr [ebp - 0x18], 0
    X86_AT(c, 0xbf0a0u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE8u)), 0x0u);
L_bf0a7:
    X86_TICK(c, 11);
    // 0bf0a7  mov eax, dword ptr [ebp - 0x18]
    X86_AT(c, 0xbf0a7u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE8u)));
    // 0bf0aa  cmp eax, 4
    X86_AT(c, 0xbf0aau);
    (void)x86_sub(c, c.r[0], 0x4u, 0, 4);
    // 0bf0ad  jge 0xbf1a4
    X86_AT(c, 0xbf0adu);
    if (x86_cc(c, 13)) { goto L_bf1a4; }
    X86_TICK(c, 46);
    // 0bf0b3  shl eax, 5
    X86_AT(c, 0xbf0b3u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[0] = r; }
    // 0bf0b6  mov edx, dword ptr [ebp - 0x20]
    X86_AT(c, 0xbf0b6u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE0u)));
    // 0bf0b9  mov dword ptr [ebp - 0x44], edx
    X86_AT(c, 0xbf0b9u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFBCu)), c.r[2]);
    // 0bf0bc  shl edx, 5
    X86_AT(c, 0xbf0bcu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0bf0bf  mov ecx, dword ptr [ebp - 0x1c]
    X86_AT(c, 0xbf0bfu);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE4u)));
    // 0bf0c2  mov dword ptr [ebp - 0x48], edx
    X86_AT(c, 0xbf0c2u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFB8u)), c.r[2]);
    // 0bf0c5  mov edx, dword ptr [ebp - 0x44]
    X86_AT(c, 0xbf0c5u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFBCu)));
    // 0bf0c8  mov eax, dword ptr [eax + edx*4 + 0xa678c]
    X86_AT(c, 0xbf0c8u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[0] + c.r[2] * 4 + 0xA678Cu)));
    // 0bf0cf  shl eax, 3
    X86_AT(c, 0xbf0cfu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x3u, 4, w); if (w) c.r[0] = r; }
    // 0bf0d2  mov edx, dword ptr [ebp - 0x48]
    X86_AT(c, 0xbf0d2u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFB8u)));
    // 0bf0d5  add eax, dword ptr [edx + ecx*4 + 0xa678c]
    X86_AT(c, 0xbf0d5u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[2] + c.r[1] * 4 + 0xA678Cu))), 0, 4); }
    // 0bf0dc  mov dword ptr [ebp - 0x24], eax
    X86_AT(c, 0xbf0dcu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFDCu)), c.r[0]);
    // 0bf0df  mov dword ptr [ebp - 0x14], 0
    X86_AT(c, 0xbf0dfu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu)), 0x0u);
    // 0bf0e6  xchg ebx, eax
    X86_AT(c, 0xbf0e6u);
    { uint32_t t = c.r[3]; c.r[3] = c.r[0]; c.r[0] = t; }
L_bf0e7:
    X86_TICK(c, 12);
    // 0bf0e7  cmp dword ptr [ebp - 0x14], 4
    X86_AT(c, 0xbf0e7u);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu))), 0x4u, 0, 4);
    // 0bf0eb  jge 0xbf165
    X86_AT(c, 0xbf0ebu);
    if (x86_cc(c, 13)) { goto L_bf165; }
    X86_TICK(c, 17);
    // 0bf0f1  mov eax, dword ptr [ebp - 0xc]
    X86_AT(c, 0xbf0f1u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)));
    // 0bf0f4  lea eax, [eax*8]
    X86_AT(c, 0xbf0f4u);
    c.r[0] = (uint32_t)(c.r[0] * 8);
    // 0bf0fb  lea edx, [eax + eax*8]
    X86_AT(c, 0xbf0fbu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 8);
    // 0bf0fe  lea eax, [edx + eax*4]
    X86_AT(c, 0xbf0feu);
    c.r[0] = (uint32_t)(c.r[2] + c.r[0] * 4);
    // 0bf101  cmp eax, ebx
    X86_AT(c, 0xbf101u);
    (void)x86_sub(c, c.r[0], c.r[3], 0, 4);
    // 0bf103  jle 0xbf15d
    X86_AT(c, 0xbf103u);
    if (x86_cc(c, 14)) { goto L_bf15d; }
    X86_TICK(c, 9);
    // 0bf105  sub eax, 0x68
    X86_AT(c, 0xbf105u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, 0x68u, 0, 4); }
    // 0bf108  cmp eax, ebx
    X86_AT(c, 0xbf108u);
    (void)x86_sub(c, c.r[0], c.r[3], 0, 4);
    // 0bf10a  jge 0xbf15d
    X86_AT(c, 0xbf10au);
    if (x86_cc(c, 13)) { goto L_bf15d; }
    X86_TICK(c, 10);
    // 0bf10c  mov dword ptr [ebp - 0x10], 0
    X86_AT(c, 0xbf10cu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u)), 0x0u);
    // 0bf113  mov eax, dword ptr [ebp - 0x18]
    X86_AT(c, 0xbf113u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE8u)));
    // 0bf116  mov esi, dword ptr [eax*4 + 0xa677c]
    X86_AT(c, 0xbf116u);
    c.r[6] = rd32((c.sbase[3] + (uint32_t)(c.r[0] * 4 + 0xA677Cu)));
L_bf11d:
    X86_TICK(c, 12);
    // 0bf11d  cmp dword ptr [ebp - 0x10], 0xa
    X86_AT(c, 0xbf11du);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u))), 0xAu, 0, 4);
    // 0bf121  jge 0xbf15d
    X86_AT(c, 0xbf121u);
    if (x86_cc(c, 13)) { goto L_bf15d; }
    X86_TICK(c, 2);
    // 0bf123  sub edi, edi
    X86_AT(c, 0xbf123u);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
L_bf125:
    X86_TICK(c, 7);
    // 0bf125  cmp edi, 8
    X86_AT(c, 0xbf125u);
    (void)x86_sub(c, c.r[7], 0x8u, 0, 4);
    // 0bf128  jge 0xbf155
    X86_AT(c, 0xbf128u);
    if (x86_cc(c, 13)) { goto L_bf155; }
    X86_TICK(c, 56);
    // 0bf12a  lea eax, [ebx + ebx*4]
    X86_AT(c, 0xbf12au);
    c.r[0] = (uint32_t)(c.r[3] + c.r[3] * 4);
    // 0bf12d  shl eax, 7
    X86_AT(c, 0xbf12du);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x7u, 4, w); if (w) c.r[0] = r; }
    // 0bf130  cdq 
    X86_AT(c, 0xbf130u);
    c.r[2] = (c.r[0] & 0x80000000u) ? 0xFFFFFFFFu : 0u;
    // 0bf131  sub eax, edx
    X86_AT(c, 0xbf131u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[2], 0, 4); }
    // 0bf133  sar eax, 1
    X86_AT(c, 0xbf133u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 7, v, 0x1u, 4, w); if (w) c.r[0] = r; }
    // 0bf135  mov dword ptr [ebp - 0x44], eax
    X86_AT(c, 0xbf135u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFBCu)), c.r[0]);
    // 0bf138  mov eax, esi
    X86_AT(c, 0xbf138u);
    c.r[0] = c.r[6];
    // 0bf13a  cdq 
    X86_AT(c, 0xbf13au);
    c.r[2] = (c.r[0] & 0x80000000u) ? 0xFFFFFFFFu : 0u;
    // 0bf13b  sub eax, edx
    X86_AT(c, 0xbf13bu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[2], 0, 4); }
    // 0bf13d  sar eax, 1
    X86_AT(c, 0xbf13du);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 7, v, 0x1u, 4, w); if (w) c.r[0] = r; }
    // 0bf13f  add eax, dword ptr [ebp - 0x44]
    X86_AT(c, 0xbf13fu);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFBCu))), 0, 4); }
    // 0bf142  mov edx, dword ptr [ebp - 0x28]
    X86_AT(c, 0xbf142u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFD8u)));
    // 0bf145  add edx, eax
    X86_AT(c, 0xbf145u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0bf147  mov dl, byte ptr [edx + edi*1]
    X86_AT(c, 0xbf147u);
    s8(c, 2, rd8((c.sbase[3] + (uint32_t)(c.r[2] + c.r[7]))));
    // 0bf14a  mov ecx, dword ptr [ebp - 0x2c]
    X86_AT(c, 0xbf14au);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFD4u)));
    // 0bf14d  add eax, ecx
    X86_AT(c, 0xbf14du);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, c.r[1], 0, 4); }
    // 0bf14f  mov byte ptr [eax + edi*1], dl
    X86_AT(c, 0xbf14fu);
    wr8((c.sbase[3] + (uint32_t)(c.r[0] + c.r[7])), g8(c, 2));
    // 0bf152  inc edi
    X86_AT(c, 0xbf152u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0bf153  jmp 0xbf125
    X86_AT(c, 0xbf153u);
    X86_POLL(c, 0xbf125u); goto L_bf125;
L_bf155:
    X86_TICK(c, 15);
    // 0bf155  inc dword ptr [ebp - 0x10]
    X86_AT(c, 0xbf155u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0bf158  add esi, 0x40
    X86_AT(c, 0xbf158u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x40u, 0, 4); }
    // 0bf15b  jmp 0xbf11d
    X86_AT(c, 0xbf15bu);
    X86_POLL(c, 0xbf11du); goto L_bf11d;
L_bf15d:
    X86_TICK(c, 15);
    // 0bf15d  inc dword ptr [ebp - 0x14]
    X86_AT(c, 0xbf15du);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0bf160  add ebx, 0x40
    X86_AT(c, 0xbf160u);
    { uint32_t v = c.r[3]; c.r[3] = x86_add(c, v, 0x40u, 0, 4); }
    // 0bf163  jmp 0xbf0e7
    X86_AT(c, 0xbf163u);
    X86_POLL(c, 0xbf0e7u); goto L_bf0e7;
L_bf165:
    X86_TICK(c, 20);
    // 0bf165  push 0xd1
    X86_AT(c, 0xbf165u);
    { uint32_t v = 0xD1u; push32(c, v); }
    // 0bf16a  push 0x280
    X86_AT(c, 0xbf16au);
    { uint32_t v = 0x280u; push32(c, v); }
    // 0bf16f  push 0x4b
    X86_AT(c, 0xbf16fu);
    { uint32_t v = 0x4Bu; push32(c, v); }
    // 0bf171  push 0x36
    X86_AT(c, 0xbf171u);
    { uint32_t v = 0x36u; push32(c, v); }
    // 0bf173  push dword ptr [ebp - 0x2c]
    X86_AT(c, 0xbf173u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFD4u))); push32(c, v); }
    // 0bf176  call 0xbb018
    X86_AT(c, 0xbf176u);
    push32(c, 0xbf17bu); x86_call_known(c, 0xbb018u, f_000bb018); X86_RET(c, 0xbf17bu);
    X86_TICK(c, 13);
    // 0bf17b  lea eax, [ebp - 0x40]
    X86_AT(c, 0xbf17bu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFC0u);
    // 0bf17e  push eax
    X86_AT(c, 0xbf17eu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0bf17f  push 1
    X86_AT(c, 0xbf17fu);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0bf181  call 0xa9
    X86_AT(c, 0xbf181u);
    push32(c, 0xbf186u); x86_call_known(c, 0xa9u, f_000000a9); X86_RET(c, 0xbf186u);
    X86_TICK(c, 15);
    // 0bf186  add esp, 0x1c
    X86_AT(c, 0xbf186u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x1Cu, 0, 4); }
    // 0bf189  mov eax, dword ptr [ebp - 0x40]
    X86_AT(c, 0xbf189u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFC0u)));
    // 0bf18c  and eax, 0xff00
    X86_AT(c, 0xbf18cu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0xFF00u, 4); }
    // 0bf191  cmp eax, 0xff00
    X86_AT(c, 0xbf191u);
    (void)x86_sub(c, c.r[0], 0xFF00u, 0, 4);
    // 0bf196  jne 0xbf28c
    X86_AT(c, 0xbf196u);
    if (x86_cc(c, 5)) { goto L_bf28c; }
    X86_TICK(c, 13);
    // 0bf19c  inc dword ptr [ebp - 0x18]
    X86_AT(c, 0xbf19cu);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE8u)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0bf19f  jmp 0xbf0a7
    X86_AT(c, 0xbf19fu);
    X86_POLL(c, 0xbf0a7u); goto L_bf0a7;
L_bf1a4:
    X86_TICK(c, 13);
    // 0bf1a4  inc dword ptr [ebp - 0x20]
    X86_AT(c, 0xbf1a4u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE0u)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0bf1a7  jmp 0xbf096
    X86_AT(c, 0xbf1a7u);
    X86_POLL(c, 0xbf096u); goto L_bf096;
L_bf1ac:
    X86_TICK(c, 13);
    // 0bf1ac  inc dword ptr [ebp - 0x1c]
    X86_AT(c, 0xbf1acu);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE4u)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0bf1af  jmp 0xbf085
    X86_AT(c, 0xbf1afu);
    X86_POLL(c, 0xbf085u); goto L_bf085;
L_bf1b4:
    X86_TICK(c, 13);
    // 0bf1b4  inc dword ptr [ebp - 0xc]
    X86_AT(c, 0xbf1b4u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0bf1b7  jmp 0xbf074
    X86_AT(c, 0xbf1b7u);
    X86_POLL(c, 0xbf074u); goto L_bf074;
L_bf1bc:
    X86_TICK(c, 4);
    // 0bf1bc  sub edi, edi
    X86_AT(c, 0xbf1bcu);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
    // 0bf1be  mov dword ptr [ebp - 0x10], edi
    X86_AT(c, 0xbf1beu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u)), c.r[7]);
L_bf1c1:
    X86_TICK(c, 7);
    // 0bf1c1  cmp edi, 0x40
    X86_AT(c, 0xbf1c1u);
    (void)x86_sub(c, c.r[7], 0x40u, 0, 4);
    // 0bf1c4  jge 0xbf2ab
    X86_AT(c, 0xbf1c4u);
    if (x86_cc(c, 13)) { goto L_bf2ab; }
    X86_TICK(c, 17);
    // 0bf1ca  push 0
    X86_AT(c, 0xbf1cau);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0bf1cc  push 0x17b
    X86_AT(c, 0xbf1ccu);
    { uint32_t v = 0x17Bu; push32(c, v); }
    // 0bf1d1  push 0x196
    X86_AT(c, 0xbf1d1u);
    { uint32_t v = 0x196u; push32(c, v); }
    // 0bf1d6  push 0x12c
    X86_AT(c, 0xbf1d6u);
    { uint32_t v = 0x12Cu; push32(c, v); }
    // 0bf1db  push 0x176
    X86_AT(c, 0xbf1dbu);
    { uint32_t v = 0x176u; push32(c, v); }
    // 0bf1e0  call 0xbac18
    X86_AT(c, 0xbf1e0u);
    push32(c, 0xbf1e5u); x86_call_known(c, 0xbac18u, f_000bac18); X86_RET(c, 0xbf1e5u);
    X86_TICK(c, 60);
    // 0bf1e5  push 0x50
    X86_AT(c, 0xbf1e5u);
    { uint32_t v = 0x50u; push32(c, v); }
    // 0bf1e7  push 0x78
    X86_AT(c, 0xbf1e7u);
    { uint32_t v = 0x78u; push32(c, v); }
    // 0bf1e9  push 0x12c
    X86_AT(c, 0xbf1e9u);
    { uint32_t v = 0x12Cu; push32(c, v); }
    // 0bf1ee  movsx eax, word ptr [edi*4 + 0xa665e]
    X86_AT(c, 0xbf1eeu);
    c.r[0] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[3] + (uint32_t)(c.r[7] * 4 + 0xA665Eu)));
    // 0bf1f6  add eax, 0x36
    X86_AT(c, 0xbf1f6u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0x36u, 0, 4); }
    // 0bf1f9  push eax
    X86_AT(c, 0xbf1f9u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0bf1fa  mov eax, dword ptr [ebp - 0xc]
    X86_AT(c, 0xbf1fau);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)));
    // 0bf1fd  movsx eax, word ptr [eax*2 + 0xa675c]
    X86_AT(c, 0xbf1fdu);
    c.r[0] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[3] + (uint32_t)(c.r[0] * 2 + 0xA675Cu)));
    // 0bf205  lea edx, [eax + eax*8]
    X86_AT(c, 0xbf205u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 8);
    // 0bf208  lea edx, [eax + edx*4]
    X86_AT(c, 0xbf208u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 4);
    // 0bf20b  lea edx, [eax + edx*2]
    X86_AT(c, 0xbf20bu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0bf20e  shl edx, 7
    X86_AT(c, 0xbf20eu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x7u, 4, w); if (w) c.r[2] = r; }
    // 0bf211  xchg edx, eax
    X86_AT(c, 0xbf211u);
    { uint32_t t = c.r[2]; c.r[2] = c.r[0]; c.r[0] = t; }
    // 0bf212  cdq 
    X86_AT(c, 0xbf212u);
    c.r[2] = (c.r[0] & 0x80000000u) ? 0xFFFFFFFFu : 0u;
    // 0bf213  sub eax, edx
    X86_AT(c, 0xbf213u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[2], 0, 4); }
    // 0bf215  sar eax, 1
    X86_AT(c, 0xbf215u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 7, v, 0x1u, 4, w); if (w) c.r[0] = r; }
    // 0bf217  add eax, dword ptr [ebp - 0x30]
    X86_AT(c, 0xbf217u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFD0u))), 0, 4); }
    // 0bf21a  push eax
    X86_AT(c, 0xbf21au);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0bf21b  call 0xbb018
    X86_AT(c, 0xbf21bu);
    push32(c, 0xbf220u); x86_call_known(c, 0xbb018u, f_000bb018); X86_RET(c, 0xbf220u);
    X86_TICK(c, 47);
    // 0bf220  push 0x20
    X86_AT(c, 0xbf220u);
    { uint32_t v = 0x20u; push32(c, v); }
    // 0bf222  push 0x50
    X86_AT(c, 0xbf222u);
    { uint32_t v = 0x50u; push32(c, v); }
    // 0bf224  push 0x15c
    X86_AT(c, 0xbf224u);
    { uint32_t v = 0x15Cu; push32(c, v); }
    // 0bf229  movsx eax, word ptr [edi*4 + 0xa665c]
    X86_AT(c, 0xbf229u);
    c.r[0] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[3] + (uint32_t)(c.r[7] * 4 + 0xA665Cu)));
    // 0bf231  add eax, 0x36
    X86_AT(c, 0xbf231u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0x36u, 0, 4); }
    // 0bf234  push eax
    X86_AT(c, 0xbf234u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0bf235  mov eax, dword ptr [ebp - 0x10]
    X86_AT(c, 0xbf235u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u)));
    // 0bf238  lea eax, [eax + eax*4]
    X86_AT(c, 0xbf238u);
    c.r[0] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0bf23b  shl eax, 9
    X86_AT(c, 0xbf23bu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x9u, 4, w); if (w) c.r[0] = r; }
    // 0bf23e  cdq 
    X86_AT(c, 0xbf23eu);
    c.r[2] = (c.r[0] & 0x80000000u) ? 0xFFFFFFFFu : 0u;
    // 0bf23f  sub eax, edx
    X86_AT(c, 0xbf23fu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[2], 0, 4); }
    // 0bf241  sar eax, 1
    X86_AT(c, 0xbf241u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 7, v, 0x1u, 4, w); if (w) c.r[0] = r; }
    // 0bf243  add eax, dword ptr [ebp - 0x38]
    X86_AT(c, 0xbf243u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFC8u))), 0, 4); }
    // 0bf246  push eax
    X86_AT(c, 0xbf246u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0bf247  call 0xbb018
    X86_AT(c, 0xbf247u);
    push32(c, 0xbf24cu); x86_call_known(c, 0xbb018u, f_000bb018); X86_RET(c, 0xbf24cu);
    X86_TICK(c, 20);
    // 0bf24c  add esp, 0x3c
    X86_AT(c, 0xbf24cu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x3Cu, 0, 4); }
    // 0bf24f  inc dword ptr [ebp - 0x10]
    X86_AT(c, 0xbf24fu);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0bf252  cmp dword ptr [ebp - 0x10], 3
    X86_AT(c, 0xbf252u);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u))), 0x3u, 0, 4);
    // 0bf256  jle 0xbf25f
    X86_AT(c, 0xbf256u);
    if (x86_cc(c, 14)) { goto L_bf25f; }
    X86_TICK(c, 2);
    // 0bf258  mov dword ptr [ebp - 0x10], 0
    X86_AT(c, 0xbf258u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u)), 0x0u);
L_bf25f:
    X86_TICK(c, 18);
    // 0bf25f  inc dword ptr [ebp - 0xc]
    X86_AT(c, 0xbf25fu);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0bf262  cmp dword ptr [ebp - 0xc], 0xb
    X86_AT(c, 0xbf262u);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u))), 0xBu, 0, 4);
    // 0bf266  jle 0xbf26f
    X86_AT(c, 0xbf266u);
    if (x86_cc(c, 14)) { goto L_bf26f; }
    X86_TICK(c, 2);
    // 0bf268  mov dword ptr [ebp - 0xc], 0
    X86_AT(c, 0xbf268u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)), 0x0u);
L_bf26f:
    X86_TICK(c, 13);
    // 0bf26f  lea eax, [ebp - 0x40]
    X86_AT(c, 0xbf26fu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFC0u);
    // 0bf272  push eax
    X86_AT(c, 0xbf272u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0bf273  push 1
    X86_AT(c, 0xbf273u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0bf275  call 0xa9
    X86_AT(c, 0xbf275u);
    push32(c, 0xbf27au); x86_call_known(c, 0xa9u, f_000000a9); X86_RET(c, 0xbf27au);
    X86_TICK(c, 15);
    // 0bf27a  add esp, 8
    X86_AT(c, 0xbf27au);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0bf27d  mov eax, dword ptr [ebp - 0x40]
    X86_AT(c, 0xbf27du);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFC0u)));
    // 0bf280  and eax, 0xff00
    X86_AT(c, 0xbf280u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0xFF00u, 4); }
    // 0bf285  cmp eax, 0xff00
    X86_AT(c, 0xbf285u);
    (void)x86_sub(c, c.r[0], 0xFF00u, 0, 4);
    // 0bf28a  je 0xbf29b
    X86_AT(c, 0xbf28au);
    if (x86_cc(c, 4)) { goto L_bf29b; }
L_bf28c:
    X86_TICK(c, 9);
    // 0bf28c  push 0
    X86_AT(c, 0xbf28cu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0bf28e  call 0xba6a0
    X86_AT(c, 0xbf28eu);
    push32(c, 0xbf293u); x86_call_known(c, 0xba6a0u, f_000ba6a0); X86_RET(c, 0xbf293u);
    X86_TICK(c, 9);
    // 0bf293  add esp, 4
    X86_AT(c, 0xbf293u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0bf296  jmp 0xbf395
    X86_AT(c, 0xbf296u);
    goto L_bf395;
L_bf29b:
    X86_TICK(c, 9);
    // 0bf29b  push 0xa
    X86_AT(c, 0xbf29bu);
    { uint32_t v = 0xAu; push32(c, v); }
    // 0bf29d  call 0xbebbc
    X86_AT(c, 0xbf29du);
    push32(c, 0xbf2a2u); x86_call_known(c, 0xbebbcu, f_000bebbc); X86_RET(c, 0xbf2a2u);
    X86_TICK(c, 11);
    // 0bf2a2  inc edi
    X86_AT(c, 0xbf2a2u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0bf2a3  add esp, 4
    X86_AT(c, 0xbf2a3u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0bf2a6  jmp 0xbf1c1
    X86_AT(c, 0xbf2a6u);
    X86_POLL(c, 0xbf1c1u); goto L_bf1c1;
L_bf2ab:
    X86_TICK(c, 9);
    // 0bf2ab  push 7
    X86_AT(c, 0xbf2abu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0bf2ad  call 0xbebbc
    X86_AT(c, 0xbf2adu);
    push32(c, 0xbf2b2u); x86_call_known(c, 0xbebbcu, f_000bebbc); X86_RET(c, 0xbf2b2u);
    X86_TICK(c, 15);
    // 0bf2b2  push 0xff
    X86_AT(c, 0xbf2b2u);
    { uint32_t v = 0xFFu; push32(c, v); }
    // 0bf2b7  push 0xff
    X86_AT(c, 0xbf2b7u);
    { uint32_t v = 0xFFu; push32(c, v); }
    // 0bf2bc  push 0
    X86_AT(c, 0xbf2bcu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0bf2be  push 6
    X86_AT(c, 0xbf2beu);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0bf2c0  call 0xba4d4
    X86_AT(c, 0xbf2c0u);
    push32(c, 0xbf2c5u); x86_call_known(c, 0xba4d4u, f_000ba4d4); X86_RET(c, 0xbf2c5u);
    X86_TICK(c, 20);
    // 0bf2c5  push 0x90
    X86_AT(c, 0xbf2c5u);
    { uint32_t v = 0x90u; push32(c, v); }
    // 0bf2ca  push 0x1e0
    X86_AT(c, 0xbf2cau);
    { uint32_t v = 0x1E0u; push32(c, v); }
    // 0bf2cf  push 0xeb
    X86_AT(c, 0xbf2cfu);
    { uint32_t v = 0xEBu; push32(c, v); }
    // 0bf2d4  push 0x95
    X86_AT(c, 0xbf2d4u);
    { uint32_t v = 0x95u; push32(c, v); }
    // 0bf2d9  push dword ptr [ebp - 0x3c]
    X86_AT(c, 0xbf2d9u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFC4u))); push32(c, v); }
    // 0bf2dc  call 0xbb018
    X86_AT(c, 0xbf2dcu);
    push32(c, 0xbf2e1u); x86_call_known(c, 0xbb018u, f_000bb018); X86_RET(c, 0xbf2e1u);
    X86_TICK(c, 4);
    // 0bf2e1  sub edi, edi
    X86_AT(c, 0xbf2e1u);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
    // 0bf2e3  add esp, 0x28
    X86_AT(c, 0xbf2e3u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x28u, 0, 4); }
L_bf2e6:
    X86_TICK(c, 7);
    // 0bf2e6  cmp edi, 3
    X86_AT(c, 0xbf2e6u);
    (void)x86_sub(c, c.r[7], 0x3u, 0, 4);
    // 0bf2e9  jge 0xbf350
    X86_AT(c, 0xbf2e9u);
    if (x86_cc(c, 13)) { goto L_bf350; }
    X86_TICK(c, 15);
    // 0bf2eb  push 0x64
    X86_AT(c, 0xbf2ebu);
    { uint32_t v = 0x64u; push32(c, v); }
    // 0bf2ed  push 0x19
    X86_AT(c, 0xbf2edu);
    { uint32_t v = 0x19u; push32(c, v); }
    // 0bf2ef  push 0
    X86_AT(c, 0xbf2efu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0bf2f1  push 6
    X86_AT(c, 0xbf2f1u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0bf2f3  call 0xba4d4
    X86_AT(c, 0xbf2f3u);
    push32(c, 0xbf2f8u); x86_call_known(c, 0xba4d4u, f_000ba4d4); X86_RET(c, 0xbf2f8u);
    X86_TICK(c, 9);
    // 0bf2f8  push 5
    X86_AT(c, 0xbf2f8u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0bf2fa  call 0xbebbc
    X86_AT(c, 0xbf2fau);
    push32(c, 0xbf2ffu); x86_call_known(c, 0xbebbcu, f_000bebbc); X86_RET(c, 0xbf2ffu);
    X86_TICK(c, 15);
    // 0bf2ff  push 0xff
    X86_AT(c, 0xbf2ffu);
    { uint32_t v = 0xFFu; push32(c, v); }
    // 0bf304  push 0xff
    X86_AT(c, 0xbf304u);
    { uint32_t v = 0xFFu; push32(c, v); }
    // 0bf309  push 0
    X86_AT(c, 0xbf309u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0bf30b  push 6
    X86_AT(c, 0xbf30bu);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0bf30d  call 0xba4d4
    X86_AT(c, 0xbf30du);
    push32(c, 0xbf312u); x86_call_known(c, 0xba4d4u, f_000ba4d4); X86_RET(c, 0xbf312u);
    X86_TICK(c, 9);
    // 0bf312  push 0xa
    X86_AT(c, 0xbf312u);
    { uint32_t v = 0xAu; push32(c, v); }
    // 0bf314  call 0xbebbc
    X86_AT(c, 0xbf314u);
    push32(c, 0xbf319u); x86_call_known(c, 0xbebbcu, f_000bebbc); X86_RET(c, 0xbf319u);
    X86_TICK(c, 15);
    // 0bf319  push 0x64
    X86_AT(c, 0xbf319u);
    { uint32_t v = 0x64u; push32(c, v); }
    // 0bf31b  push 0x19
    X86_AT(c, 0xbf31bu);
    { uint32_t v = 0x19u; push32(c, v); }
    // 0bf31d  push 0
    X86_AT(c, 0xbf31du);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0bf31f  push 6
    X86_AT(c, 0xbf31fu);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0bf321  call 0xba4d4
    X86_AT(c, 0xbf321u);
    push32(c, 0xbf326u); x86_call_known(c, 0xba4d4u, f_000ba4d4); X86_RET(c, 0xbf326u);
    X86_TICK(c, 9);
    // 0bf326  push 0xa
    X86_AT(c, 0xbf326u);
    { uint32_t v = 0xAu; push32(c, v); }
    // 0bf328  call 0xbebbc
    X86_AT(c, 0xbf328u);
    push32(c, 0xbf32du); x86_call_known(c, 0xbebbcu, f_000bebbc); X86_RET(c, 0xbf32du);
    X86_TICK(c, 17);
    // 0bf32d  add esp, 0x3c
    X86_AT(c, 0xbf32du);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x3Cu, 0, 4); }
    // 0bf330  push 0xff
    X86_AT(c, 0xbf330u);
    { uint32_t v = 0xFFu; push32(c, v); }
    // 0bf335  push 0xff
    X86_AT(c, 0xbf335u);
    { uint32_t v = 0xFFu; push32(c, v); }
    // 0bf33a  push 0
    X86_AT(c, 0xbf33au);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0bf33c  push 6
    X86_AT(c, 0xbf33cu);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0bf33e  call 0xba4d4
    X86_AT(c, 0xbf33eu);
    push32(c, 0xbf343u); x86_call_known(c, 0xba4d4u, f_000ba4d4); X86_RET(c, 0xbf343u);
    X86_TICK(c, 9);
    // 0bf343  push 3
    X86_AT(c, 0xbf343u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0bf345  call 0xbebbc
    X86_AT(c, 0xbf345u);
    push32(c, 0xbf34au); x86_call_known(c, 0xbebbcu, f_000bebbc); X86_RET(c, 0xbf34au);
    X86_TICK(c, 11);
    // 0bf34a  inc edi
    X86_AT(c, 0xbf34au);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0bf34b  add esp, 0x14
    X86_AT(c, 0xbf34bu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x14u, 0, 4); }
    // 0bf34e  jmp 0xbf2e6
    X86_AT(c, 0xbf34eu);
    X86_POLL(c, 0xbf2e6u); goto L_bf2e6;
L_bf350:
    X86_TICK(c, 17);
    // 0bf350  push 0
    X86_AT(c, 0xbf350u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0bf352  push 0x17b
    X86_AT(c, 0xbf352u);
    { uint32_t v = 0x17Bu; push32(c, v); }
    // 0bf357  push 0x1eb
    X86_AT(c, 0xbf357u);
    { uint32_t v = 0x1EBu; push32(c, v); }
    // 0bf35c  push 0x12c
    X86_AT(c, 0xbf35cu);
    { uint32_t v = 0x12Cu; push32(c, v); }
    // 0bf361  push 0x123
    X86_AT(c, 0xbf361u);
    { uint32_t v = 0x123u; push32(c, v); }
    // 0bf366  call 0xbac18
    X86_AT(c, 0xbf366u);
    push32(c, 0xbf36bu); x86_call_known(c, 0xbac18u, f_000bac18); X86_RET(c, 0xbf36bu);
    X86_TICK(c, 20);
    // 0bf36b  push 0x50
    X86_AT(c, 0xbf36bu);
    { uint32_t v = 0x50u; push32(c, v); }
    // 0bf36d  push 0xa0
    X86_AT(c, 0xbf36du);
    { uint32_t v = 0xA0u; push32(c, v); }
    // 0bf372  push 0x12c
    X86_AT(c, 0xbf372u);
    { uint32_t v = 0x12Cu; push32(c, v); }
    // 0bf377  push 0x133
    X86_AT(c, 0xbf377u);
    { uint32_t v = 0x133u; push32(c, v); }
    // 0bf37c  push dword ptr [ebp - 0x34]
    X86_AT(c, 0xbf37cu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFCCu))); push32(c, v); }
    // 0bf37f  call 0xbb018
    X86_AT(c, 0xbf37fu);
    push32(c, 0xbf384u); x86_call_known(c, 0xbb018u, f_000bb018); X86_RET(c, 0xbf384u);
    X86_TICK(c, 9);
    // 0bf384  push 0
    X86_AT(c, 0xbf384u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0bf386  call 0xba6a0
    X86_AT(c, 0xbf386u);
    push32(c, 0xbf38bu); x86_call_known(c, 0xba6a0u, f_000ba6a0); X86_RET(c, 0xbf38bu);
    X86_TICK(c, 9);
    // 0bf38b  push 0x32
    X86_AT(c, 0xbf38bu);
    { uint32_t v = 0x32u; push32(c, v); }
    // 0bf38d  call 0xbebbc
    X86_AT(c, 0xbf38du);
    push32(c, 0xbf392u); x86_call_known(c, 0xbebbcu, f_000bebbc); X86_RET(c, 0xbf392u);
    X86_TICK(c, 2);
    // 0bf392  add esp, 0x30
    X86_AT(c, 0xbf392u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x30u, 0, 4); }
L_bf395:
    X86_TICK(c, 28);
    // 0bf395  pop edi
    X86_AT(c, 0xbf395u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0bf396  pop esi
    X86_AT(c, 0xbf396u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0bf397  pop ebx
    X86_AT(c, 0xbf397u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0bf398  leave 
    X86_AT(c, 0xbf398u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0bf399  ret 
    X86_AT(c, 0xbf399u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xbf0a7u, "ran off the end of a function");
}
void f_000bf39c(X86Cpu& c) {
    X86_TICK(c, 4);
    // 0bf39c  mov ecx, dword ptr [esp + 4]
    X86_AT(c, 0xbf39cu);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[4] + 0x4u)));
L_bf3a0:
    X86_TICK(c, 11);
    // 0bf3a0  mov al, byte ptr [ecx]
    X86_AT(c, 0xbf3a0u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[1]))));
    // 0bf3a2  cmp al, 0x3d
    X86_AT(c, 0xbf3a2u);
    (void)x86_sub(c, g8(c, 0), 0x3Du, 0, 1);
    // 0bf3a4  je 0xbf3ad
    X86_AT(c, 0xbf3a4u);
    if (x86_cc(c, 4)) { goto L_bf3ad; }
    X86_TICK(c, 7);
    // 0bf3a6  and al, al
    X86_AT(c, 0xbf3a6u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & g8(c, 0), 1)); }
    // 0bf3a8  je 0xbf3ad
    X86_AT(c, 0xbf3a8u);
    if (x86_cc(c, 4)) { goto L_bf3ad; }
    X86_TICK(c, 9);
    // 0bf3aa  inc ecx
    X86_AT(c, 0xbf3aau);
    { uint32_t v = c.r[1]; c.r[1] = x86_inc(c, v, 4); }
    // 0bf3ab  jmp 0xbf3a0
    X86_AT(c, 0xbf3abu);
    X86_POLL(c, 0xbf3a0u); goto L_bf3a0;
L_bf3ad:
    X86_TICK(c, 14);
    // 0bf3ad  inc ecx
    X86_AT(c, 0xbf3adu);
    { uint32_t v = c.r[1]; c.r[1] = x86_inc(c, v, 4); }
    // 0bf3ae  mov eax, ecx
    X86_AT(c, 0xbf3aeu);
    c.r[0] = c.r[1];
    // 0bf3b0  ret 
    X86_AT(c, 0xbf3b0u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xbf39cu, "ran off the end of a function");
}
void f_000bf3b4(X86Cpu& c) {
    X86_TICK(c, 14);
    // 0bf3b4  push ebp
    X86_AT(c, 0xbf3b4u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0bf3b5  mov ebp, esp
    X86_AT(c, 0xbf3b5u);
    c.r[5] = c.r[4];
    // 0bf3b7  sub esp, 0x58
    X86_AT(c, 0xbf3b7u);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, 0x58u, 0, 4); }
    // 0bf3ba  push ebx
    X86_AT(c, 0xbf3bau);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0bf3bb  push esi
    X86_AT(c, 0xbf3bbu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0bf3bc  push edi
    X86_AT(c, 0xbf3bcu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0bf3bd  sub esi, esi
    X86_AT(c, 0xbf3bdu);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[6], 0, 4); }
L_bf3bf:
    X86_TICK(c, 7);
    // 0bf3bf  cmp esi, 0x14
    X86_AT(c, 0xbf3bfu);
    (void)x86_sub(c, c.r[6], 0x14u, 0, 4);
    // 0bf3c2  jge 0xbf3e5
    X86_AT(c, 0xbf3c2u);
    if (x86_cc(c, 13)) { goto L_bf3e5; }
    X86_TICK(c, 19);
    // 0bf3c4  lea eax, [esi + esi*2]
    X86_AT(c, 0xbf3c4u);
    c.r[0] = (uint32_t)(c.r[6] + c.r[6] * 2);
    // 0bf3c7  lea edx, [eax*8]
    X86_AT(c, 0xbf3c7u);
    c.r[2] = (uint32_t)(c.r[0] * 8);
    // 0bf3ce  lea edx, [eax + edx*8]
    X86_AT(c, 0xbf3ceu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 8);
    // 0bf3d1  mov dword ptr [edx + 0xa4dc5], 0xffffffff
    X86_AT(c, 0xbf3d1u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4DC5u)), 0xFFFFFFFFu);
    // 0bf3db  mov byte ptr [edx + 0xa4dac], 0
    X86_AT(c, 0xbf3dbu);
    wr8((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4DACu)), 0x0u);
    // 0bf3e2  inc esi
    X86_AT(c, 0xbf3e2u);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 0bf3e3  jmp 0xbf3bf
    X86_AT(c, 0xbf3e3u);
    X86_POLL(c, 0xbf3bfu); goto L_bf3bf;
L_bf3e5:
    X86_TICK(c, 11);
    // 0bf3e5  push 0x2544
    X86_AT(c, 0xbf3e5u);
    { uint32_t v = 0x2544u; push32(c, v); }
    // 0bf3ea  push 0x2548
    X86_AT(c, 0xbf3eau);
    { uint32_t v = 0x2548u; push32(c, v); }
    // 0bf3ef  call 0xd7fc4
    X86_AT(c, 0xbf3efu);
    push32(c, 0xbf3f4u); x86_call_known(c, 0xd7fc4u, f_000d7fc4); X86_RET(c, 0xbf3f4u);
    X86_TICK(c, 12);
    // 0bf3f4  add esp, 8
    X86_AT(c, 0xbf3f4u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0bf3f7  xchg edi, eax
    X86_AT(c, 0xbf3f7u);
    { uint32_t t = c.r[7]; c.r[7] = c.r[0]; c.r[0] = t; }
    // 0bf3f8  and edi, edi
    X86_AT(c, 0xbf3f8u);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & c.r[7], 4); }
    // 0bf3fa  jne 0xbf40b
    X86_AT(c, 0xbf3fau);
    if (x86_cc(c, 5)) { goto L_bf40b; }
    X86_TICK(c, 11);
    // 0bf3fc  mov eax, 0xffffffff
    X86_AT(c, 0xbf3fcu);
    c.r[0] = 0xFFFFFFFFu;
    // 0bf401  mov dword ptr [0xa6650], eax
    X86_AT(c, 0xbf401u);
    wr32((c.sbase[3] + (uint32_t)(0xA6650u)), c.r[0]);
    // 0bf406  jmp 0xbfead
    X86_AT(c, 0xbf406u);
    goto L_bfead;
L_bf40b:
    X86_TICK(c, 15);
    // 0bf40b  push edi
    X86_AT(c, 0xbf40bu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0bf40c  push 0x4f
    X86_AT(c, 0xbf40cu);
    { uint32_t v = 0x4Fu; push32(c, v); }
    // 0bf40e  lea eax, [ebp - 0x50]
    X86_AT(c, 0xbf40eu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0bf411  push eax
    X86_AT(c, 0xbf411u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0bf412  call 0xd781c
    X86_AT(c, 0xbf412u);
    push32(c, 0xbf417u); x86_call_known(c, 0xd781cu, f_000d781c); X86_RET(c, 0xbf417u);
    X86_TICK(c, 14);
    // 0bf417  add esp, 0xc
    X86_AT(c, 0xbf417u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0bf41a  cmp byte ptr [ebp - 0x50], 0x52
    X86_AT(c, 0xbf41au);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFB0u))), 0x52u, 0, 1);
    // 0bf41e  jne 0xbf426
    X86_AT(c, 0xbf41eu);
    if (x86_cc(c, 5)) { goto L_bf426; }
    X86_TICK(c, 12);
    // 0bf420  cmp byte ptr [ebp - 0x4f], 0x6f
    X86_AT(c, 0xbf420u);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFB1u))), 0x6Fu, 0, 1);
    // 0bf424  je 0xbf440
    X86_AT(c, 0xbf424u);
    if (x86_cc(c, 4)) { goto L_bf440; }
L_bf426:
    X86_TICK(c, 11);
    // 0bf426  mov dword ptr [0xa6650], 0xffffffff
    X86_AT(c, 0xbf426u);
    wr32((c.sbase[3] + (uint32_t)(0xA6650u)), 0xFFFFFFFFu);
    // 0bf430  push edi
    X86_AT(c, 0xbf430u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0bf431  call 0xd84c0
    X86_AT(c, 0xbf431u);
    push32(c, 0xbf436u); x86_call_known(c, 0xd84c0u, f_000d84c0); X86_RET(c, 0xbf436u);
    X86_TICK(c, 9);
    // 0bf436  mov eax, 0xffffffff
    X86_AT(c, 0xbf436u);
    c.r[0] = 0xFFFFFFFFu;
    // 0bf43b  jmp 0xbfeaa
    X86_AT(c, 0xbf43bu);
    goto L_bfeaa;
L_bf440:
    X86_TICK(c, 2);
    // 0bf440  sub esi, esi
    X86_AT(c, 0xbf440u);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[6], 0, 4); }
L_bf442:
    X86_TICK(c, 7);
    // 0bf442  cmp esi, 0x14
    X86_AT(c, 0xbf442u);
    (void)x86_sub(c, c.r[6], 0x14u, 0, 4);
    // 0bf445  jge 0xbfe9d
    X86_AT(c, 0xbf445u);
    if (x86_cc(c, 13)) { goto L_bfe9d; }
    X86_TICK(c, 15);
    // 0bf44b  push edi
    X86_AT(c, 0xbf44bu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0bf44c  push 0x4f
    X86_AT(c, 0xbf44cu);
    { uint32_t v = 0x4Fu; push32(c, v); }
    // 0bf44e  lea eax, [ebp - 0x50]
    X86_AT(c, 0xbf44eu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0bf451  push eax
    X86_AT(c, 0xbf451u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0bf452  call 0xd781c
    X86_AT(c, 0xbf452u);
    push32(c, 0xbf457u); x86_call_known(c, 0xd781cu, f_000d781c); X86_RET(c, 0xbf457u);
    X86_TICK(c, 11);
    // 0bf457  lea eax, [ebp - 0x50]
    X86_AT(c, 0xbf457u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0bf45a  push eax
    X86_AT(c, 0xbf45au);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0bf45b  call 0xbf39c
    X86_AT(c, 0xbf45bu);
    push32(c, 0xbf460u); x86_call_known(c, 0xbf39cu, f_000bf39c); X86_RET(c, 0xbf460u);
    X86_TICK(c, 7);
    // 0bf460  xchg ebx, eax
    X86_AT(c, 0xbf460u);
    { uint32_t t = c.r[3]; c.r[3] = c.r[0]; c.r[0] = t; }
    // 0bf461  mov dword ptr [ebp - 0x54], 0
    X86_AT(c, 0xbf461u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFACu)), 0x0u);
    // 0bf468  add esp, 0x10
    X86_AT(c, 0xbf468u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
L_bf46b:
    X86_TICK(c, 11);
    // 0bf46b  mov al, byte ptr [ebx]
    X86_AT(c, 0xbf46bu);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[3]))));
    // 0bf46d  cmp al, 0xa
    X86_AT(c, 0xbf46du);
    (void)x86_sub(c, g8(c, 0), 0xAu, 0, 1);
    // 0bf46f  je 0xbf491
    X86_AT(c, 0xbf46fu);
    if (x86_cc(c, 4)) { goto L_bf491; }
    X86_TICK(c, 7);
    // 0bf471  and al, al
    X86_AT(c, 0xbf471u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & g8(c, 0), 1)); }
    // 0bf473  je 0xbf491
    X86_AT(c, 0xbf473u);
    if (x86_cc(c, 4)) { goto L_bf491; }
    X86_TICK(c, 29);
    // 0bf475  lea edx, [esi + esi*2]
    X86_AT(c, 0xbf475u);
    c.r[2] = (uint32_t)(c.r[6] + c.r[6] * 2);
    // 0bf478  lea ecx, [edx*8]
    X86_AT(c, 0xbf478u);
    c.r[1] = (uint32_t)(c.r[2] * 8);
    // 0bf47f  lea ecx, [edx + ecx*8]
    X86_AT(c, 0xbf47fu);
    c.r[1] = (uint32_t)(c.r[2] + c.r[1] * 8);
    // 0bf482  add ecx, dword ptr [ebp - 0x54]
    X86_AT(c, 0xbf482u);
    { uint32_t v = c.r[1]; c.r[1] = x86_add(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFACu))), 0, 4); }
    // 0bf485  mov byte ptr [ecx + 0xa4dac], al
    X86_AT(c, 0xbf485u);
    wr8((c.sbase[3] + (uint32_t)(c.r[1] + 0xA4DACu)), g8(c, 0));
    // 0bf48b  inc dword ptr [ebp - 0x54]
    X86_AT(c, 0xbf48bu);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFACu)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0bf48e  inc ebx
    X86_AT(c, 0xbf48eu);
    { uint32_t v = c.r[3]; c.r[3] = x86_inc(c, v, 4); }
    // 0bf48f  jmp 0xbf46b
    X86_AT(c, 0xbf48fu);
    X86_POLL(c, 0xbf46bu); goto L_bf46b;
L_bf491:
    X86_TICK(c, 31);
    // 0bf491  lea eax, [esi + esi*2]
    X86_AT(c, 0xbf491u);
    c.r[0] = (uint32_t)(c.r[6] + c.r[6] * 2);
    // 0bf494  lea edx, [eax*8]
    X86_AT(c, 0xbf494u);
    c.r[2] = (uint32_t)(c.r[0] * 8);
    // 0bf49b  lea edx, [eax + edx*8]
    X86_AT(c, 0xbf49bu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 8);
    // 0bf49e  mov dword ptr [ebp - 0x58], edx
    X86_AT(c, 0xbf49eu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFA8u)), c.r[2]);
    // 0bf4a1  add edx, dword ptr [ebp - 0x54]
    X86_AT(c, 0xbf4a1u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFACu))), 0, 4); }
    // 0bf4a4  mov byte ptr [edx + 0xa4dac], 0
    X86_AT(c, 0xbf4a4u);
    wr8((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4DACu)), 0x0u);
    // 0bf4ab  push edi
    X86_AT(c, 0xbf4abu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0bf4ac  push 0x4f
    X86_AT(c, 0xbf4acu);
    { uint32_t v = 0x4Fu; push32(c, v); }
    // 0bf4ae  lea eax, [ebp - 0x50]
    X86_AT(c, 0xbf4aeu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0bf4b1  push eax
    X86_AT(c, 0xbf4b1u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0bf4b2  call 0xd781c
    X86_AT(c, 0xbf4b2u);
    push32(c, 0xbf4b7u); x86_call_known(c, 0xd781cu, f_000d781c); X86_RET(c, 0xbf4b7u);
    X86_TICK(c, 11);
    // 0bf4b7  lea eax, [ebp - 0x50]
    X86_AT(c, 0xbf4b7u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0bf4ba  push eax
    X86_AT(c, 0xbf4bau);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0bf4bb  call 0xbf39c
    X86_AT(c, 0xbf4bbu);
    push32(c, 0xbf4c0u); x86_call_known(c, 0xbf39cu, f_000bf39c); X86_RET(c, 0xbf4c0u);
    X86_TICK(c, 14);
    // 0bf4c0  add esp, 0x10
    X86_AT(c, 0xbf4c0u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0bf4c3  cmp byte ptr [eax], 0x59
    X86_AT(c, 0xbf4c3u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[0]))), 0x59u, 0, 1);
    // 0bf4c6  jne 0xbf4d4
    X86_AT(c, 0xbf4c6u);
    if (x86_cc(c, 5)) { goto L_bf4d4; }
    X86_TICK(c, 13);
    // 0bf4c8  mov eax, dword ptr [ebp - 0x58]
    X86_AT(c, 0xbf4c8u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFA8u)));
    // 0bf4cb  mov byte ptr [eax + 0xa4db9], 1
    X86_AT(c, 0xbf4cbu);
    wr8((c.sbase[3] + (uint32_t)(c.r[0] + 0xA4DB9u)), 0x1u);
    // 0bf4d2  jmp 0xbf4e8
    X86_AT(c, 0xbf4d2u);
    goto L_bf4e8;
L_bf4d4:
    X86_TICK(c, 8);
    // 0bf4d4  lea eax, [esi + esi*2]
    X86_AT(c, 0xbf4d4u);
    c.r[0] = (uint32_t)(c.r[6] + c.r[6] * 2);
    // 0bf4d7  lea edx, [eax*8]
    X86_AT(c, 0xbf4d7u);
    c.r[2] = (uint32_t)(c.r[0] * 8);
    // 0bf4de  lea edx, [eax + edx*8]
    X86_AT(c, 0xbf4deu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 8);
    // 0bf4e1  mov byte ptr [edx + 0xa4db9], 0
    X86_AT(c, 0xbf4e1u);
    wr8((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4DB9u)), 0x0u);
L_bf4e8:
    X86_TICK(c, 15);
    // 0bf4e8  push edi
    X86_AT(c, 0xbf4e8u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0bf4e9  push 0x4f
    X86_AT(c, 0xbf4e9u);
    { uint32_t v = 0x4Fu; push32(c, v); }
    // 0bf4eb  lea eax, [ebp - 0x50]
    X86_AT(c, 0xbf4ebu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0bf4ee  push eax
    X86_AT(c, 0xbf4eeu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0bf4ef  call 0xd781c
    X86_AT(c, 0xbf4efu);
    push32(c, 0xbf4f4u); x86_call_known(c, 0xd781cu, f_000d781c); X86_RET(c, 0xbf4f4u);
    X86_TICK(c, 11);
    // 0bf4f4  lea eax, [ebp - 0x50]
    X86_AT(c, 0xbf4f4u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0bf4f7  push eax
    X86_AT(c, 0xbf4f7u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0bf4f8  call 0xbf39c
    X86_AT(c, 0xbf4f8u);
    push32(c, 0xbf4fdu); x86_call_known(c, 0xbf39cu, f_000bf39c); X86_RET(c, 0xbf4fdu);
    X86_TICK(c, 14);
    // 0bf4fd  add esp, 0x10
    X86_AT(c, 0xbf4fdu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0bf500  cmp byte ptr [eax], 0x59
    X86_AT(c, 0xbf500u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[0]))), 0x59u, 0, 1);
    // 0bf503  jne 0xbf51b
    X86_AT(c, 0xbf503u);
    if (x86_cc(c, 5)) { goto L_bf51b; }
    X86_TICK(c, 15);
    // 0bf505  lea eax, [esi + esi*2]
    X86_AT(c, 0xbf505u);
    c.r[0] = (uint32_t)(c.r[6] + c.r[6] * 2);
    // 0bf508  lea edx, [eax*8]
    X86_AT(c, 0xbf508u);
    c.r[2] = (uint32_t)(c.r[0] * 8);
    // 0bf50f  lea edx, [eax + edx*8]
    X86_AT(c, 0xbf50fu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 8);
    // 0bf512  mov byte ptr [edx + 0xa4dba], 1
    X86_AT(c, 0xbf512u);
    wr8((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4DBAu)), 0x1u);
    // 0bf519  jmp 0xbf52f
    X86_AT(c, 0xbf519u);
    goto L_bf52f;
L_bf51b:
    X86_TICK(c, 8);
    // 0bf51b  lea eax, [esi + esi*2]
    X86_AT(c, 0xbf51bu);
    c.r[0] = (uint32_t)(c.r[6] + c.r[6] * 2);
    // 0bf51e  lea edx, [eax*8]
    X86_AT(c, 0xbf51eu);
    c.r[2] = (uint32_t)(c.r[0] * 8);
    // 0bf525  lea edx, [eax + edx*8]
    X86_AT(c, 0xbf525u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 8);
    // 0bf528  mov byte ptr [edx + 0xa4dba], 0
    X86_AT(c, 0xbf528u);
    wr8((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4DBAu)), 0x0u);
L_bf52f:
    X86_TICK(c, 15);
    // 0bf52f  push edi
    X86_AT(c, 0xbf52fu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0bf530  push 0x4f
    X86_AT(c, 0xbf530u);
    { uint32_t v = 0x4Fu; push32(c, v); }
    // 0bf532  lea eax, [ebp - 0x50]
    X86_AT(c, 0xbf532u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0bf535  push eax
    X86_AT(c, 0xbf535u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0bf536  call 0xd781c
    X86_AT(c, 0xbf536u);
    push32(c, 0xbf53bu); x86_call_known(c, 0xd781cu, f_000d781c); X86_RET(c, 0xbf53bu);
    X86_TICK(c, 11);
    // 0bf53b  lea eax, [ebp - 0x50]
    X86_AT(c, 0xbf53bu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0bf53e  push eax
    X86_AT(c, 0xbf53eu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0bf53f  call 0xbf39c
    X86_AT(c, 0xbf53fu);
    push32(c, 0xbf544u); x86_call_known(c, 0xbf39cu, f_000bf39c); X86_RET(c, 0xbf544u);
    X86_TICK(c, 14);
    // 0bf544  add esp, 0x10
    X86_AT(c, 0xbf544u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0bf547  cmp byte ptr [eax], 0x59
    X86_AT(c, 0xbf547u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[0]))), 0x59u, 0, 1);
    // 0bf54a  jne 0xbf562
    X86_AT(c, 0xbf54au);
    if (x86_cc(c, 5)) { goto L_bf562; }
    X86_TICK(c, 15);
    // 0bf54c  lea eax, [esi + esi*2]
    X86_AT(c, 0xbf54cu);
    c.r[0] = (uint32_t)(c.r[6] + c.r[6] * 2);
    // 0bf54f  lea edx, [eax*8]
    X86_AT(c, 0xbf54fu);
    c.r[2] = (uint32_t)(c.r[0] * 8);
    // 0bf556  lea edx, [eax + edx*8]
    X86_AT(c, 0xbf556u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 8);
    // 0bf559  mov byte ptr [edx + 0xa4dbb], 1
    X86_AT(c, 0xbf559u);
    wr8((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4DBBu)), 0x1u);
    // 0bf560  jmp 0xbf576
    X86_AT(c, 0xbf560u);
    goto L_bf576;
L_bf562:
    X86_TICK(c, 8);
    // 0bf562  lea eax, [esi + esi*2]
    X86_AT(c, 0xbf562u);
    c.r[0] = (uint32_t)(c.r[6] + c.r[6] * 2);
    // 0bf565  lea edx, [eax*8]
    X86_AT(c, 0xbf565u);
    c.r[2] = (uint32_t)(c.r[0] * 8);
    // 0bf56c  lea edx, [eax + edx*8]
    X86_AT(c, 0xbf56cu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 8);
    // 0bf56f  mov byte ptr [edx + 0xa4dbb], 0
    X86_AT(c, 0xbf56fu);
    wr8((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4DBBu)), 0x0u);
L_bf576:
    X86_TICK(c, 15);
    // 0bf576  push edi
    X86_AT(c, 0xbf576u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0bf577  push 0x4f
    X86_AT(c, 0xbf577u);
    { uint32_t v = 0x4Fu; push32(c, v); }
    // 0bf579  lea eax, [ebp - 0x50]
    X86_AT(c, 0xbf579u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0bf57c  push eax
    X86_AT(c, 0xbf57cu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0bf57d  call 0xd781c
    X86_AT(c, 0xbf57du);
    push32(c, 0xbf582u); x86_call_known(c, 0xd781cu, f_000d781c); X86_RET(c, 0xbf582u);
    X86_TICK(c, 11);
    // 0bf582  lea eax, [ebp - 0x50]
    X86_AT(c, 0xbf582u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0bf585  push eax
    X86_AT(c, 0xbf585u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0bf586  call 0xbf39c
    X86_AT(c, 0xbf586u);
    push32(c, 0xbf58bu); x86_call_known(c, 0xbf39cu, f_000bf39c); X86_RET(c, 0xbf58bu);
    X86_TICK(c, 14);
    // 0bf58b  add esp, 0x10
    X86_AT(c, 0xbf58bu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0bf58e  cmp byte ptr [eax], 0x59
    X86_AT(c, 0xbf58eu);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[0]))), 0x59u, 0, 1);
    // 0bf591  jne 0xbf5a9
    X86_AT(c, 0xbf591u);
    if (x86_cc(c, 5)) { goto L_bf5a9; }
    X86_TICK(c, 15);
    // 0bf593  lea eax, [esi + esi*2]
    X86_AT(c, 0xbf593u);
    c.r[0] = (uint32_t)(c.r[6] + c.r[6] * 2);
    // 0bf596  lea edx, [eax*8]
    X86_AT(c, 0xbf596u);
    c.r[2] = (uint32_t)(c.r[0] * 8);
    // 0bf59d  lea edx, [eax + edx*8]
    X86_AT(c, 0xbf59du);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 8);
    // 0bf5a0  mov byte ptr [edx + 0xa4dbc], 1
    X86_AT(c, 0xbf5a0u);
    wr8((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4DBCu)), 0x1u);
    // 0bf5a7  jmp 0xbf5bd
    X86_AT(c, 0xbf5a7u);
    goto L_bf5bd;
L_bf5a9:
    X86_TICK(c, 8);
    // 0bf5a9  lea eax, [esi + esi*2]
    X86_AT(c, 0xbf5a9u);
    c.r[0] = (uint32_t)(c.r[6] + c.r[6] * 2);
    // 0bf5ac  lea edx, [eax*8]
    X86_AT(c, 0xbf5acu);
    c.r[2] = (uint32_t)(c.r[0] * 8);
    // 0bf5b3  lea edx, [eax + edx*8]
    X86_AT(c, 0xbf5b3u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 8);
    // 0bf5b6  mov byte ptr [edx + 0xa4dbc], 0
    X86_AT(c, 0xbf5b6u);
    wr8((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4DBCu)), 0x0u);
L_bf5bd:
    X86_TICK(c, 15);
    // 0bf5bd  push edi
    X86_AT(c, 0xbf5bdu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0bf5be  push 0x4f
    X86_AT(c, 0xbf5beu);
    { uint32_t v = 0x4Fu; push32(c, v); }
    // 0bf5c0  lea eax, [ebp - 0x50]
    X86_AT(c, 0xbf5c0u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0bf5c3  push eax
    X86_AT(c, 0xbf5c3u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0bf5c4  call 0xd781c
    X86_AT(c, 0xbf5c4u);
    push32(c, 0xbf5c9u); x86_call_known(c, 0xd781cu, f_000d781c); X86_RET(c, 0xbf5c9u);
    X86_TICK(c, 11);
    // 0bf5c9  lea eax, [ebp - 0x50]
    X86_AT(c, 0xbf5c9u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0bf5cc  push eax
    X86_AT(c, 0xbf5ccu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0bf5cd  call 0xbf39c
    X86_AT(c, 0xbf5cdu);
    push32(c, 0xbf5d2u); x86_call_known(c, 0xbf39cu, f_000bf39c); X86_RET(c, 0xbf5d2u);
    X86_TICK(c, 14);
    // 0bf5d2  add esp, 0x10
    X86_AT(c, 0xbf5d2u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0bf5d5  cmp byte ptr [eax], 0x59
    X86_AT(c, 0xbf5d5u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[0]))), 0x59u, 0, 1);
    // 0bf5d8  jne 0xbf5f0
    X86_AT(c, 0xbf5d8u);
    if (x86_cc(c, 5)) { goto L_bf5f0; }
    X86_TICK(c, 15);
    // 0bf5da  lea eax, [esi + esi*2]
    X86_AT(c, 0xbf5dau);
    c.r[0] = (uint32_t)(c.r[6] + c.r[6] * 2);
    // 0bf5dd  lea edx, [eax*8]
    X86_AT(c, 0xbf5ddu);
    c.r[2] = (uint32_t)(c.r[0] * 8);
    // 0bf5e4  lea edx, [eax + edx*8]
    X86_AT(c, 0xbf5e4u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 8);
    // 0bf5e7  mov byte ptr [edx + 0xa4dbd], 1
    X86_AT(c, 0xbf5e7u);
    wr8((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4DBDu)), 0x1u);
    // 0bf5ee  jmp 0xbf604
    X86_AT(c, 0xbf5eeu);
    goto L_bf604;
L_bf5f0:
    X86_TICK(c, 8);
    // 0bf5f0  lea eax, [esi + esi*2]
    X86_AT(c, 0xbf5f0u);
    c.r[0] = (uint32_t)(c.r[6] + c.r[6] * 2);
    // 0bf5f3  lea edx, [eax*8]
    X86_AT(c, 0xbf5f3u);
    c.r[2] = (uint32_t)(c.r[0] * 8);
    // 0bf5fa  lea edx, [eax + edx*8]
    X86_AT(c, 0xbf5fau);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 8);
    // 0bf5fd  mov byte ptr [edx + 0xa4dbd], 0
    X86_AT(c, 0xbf5fdu);
    wr8((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4DBDu)), 0x0u);
L_bf604:
    X86_TICK(c, 15);
    // 0bf604  push edi
    X86_AT(c, 0xbf604u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0bf605  push 0x4f
    X86_AT(c, 0xbf605u);
    { uint32_t v = 0x4Fu; push32(c, v); }
    // 0bf607  lea eax, [ebp - 0x50]
    X86_AT(c, 0xbf607u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0bf60a  push eax
    X86_AT(c, 0xbf60au);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0bf60b  call 0xd781c
    X86_AT(c, 0xbf60bu);
    push32(c, 0xbf610u); x86_call_known(c, 0xd781cu, f_000d781c); X86_RET(c, 0xbf610u);
    X86_TICK(c, 11);
    // 0bf610  lea eax, [ebp - 0x50]
    X86_AT(c, 0xbf610u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0bf613  push eax
    X86_AT(c, 0xbf613u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0bf614  call 0xbf39c
    X86_AT(c, 0xbf614u);
    push32(c, 0xbf619u); x86_call_known(c, 0xbf39cu, f_000bf39c); X86_RET(c, 0xbf619u);
    X86_TICK(c, 14);
    // 0bf619  add esp, 0x10
    X86_AT(c, 0xbf619u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0bf61c  cmp byte ptr [eax], 0x59
    X86_AT(c, 0xbf61cu);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[0]))), 0x59u, 0, 1);
    // 0bf61f  jne 0xbf637
    X86_AT(c, 0xbf61fu);
    if (x86_cc(c, 5)) { goto L_bf637; }
    X86_TICK(c, 15);
    // 0bf621  lea eax, [esi + esi*2]
    X86_AT(c, 0xbf621u);
    c.r[0] = (uint32_t)(c.r[6] + c.r[6] * 2);
    // 0bf624  lea edx, [eax*8]
    X86_AT(c, 0xbf624u);
    c.r[2] = (uint32_t)(c.r[0] * 8);
    // 0bf62b  lea edx, [eax + edx*8]
    X86_AT(c, 0xbf62bu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 8);
    // 0bf62e  mov byte ptr [edx + 0xa4dbe], 1
    X86_AT(c, 0xbf62eu);
    wr8((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4DBEu)), 0x1u);
    // 0bf635  jmp 0xbf64b
    X86_AT(c, 0xbf635u);
    goto L_bf64b;
L_bf637:
    X86_TICK(c, 8);
    // 0bf637  lea eax, [esi + esi*2]
    X86_AT(c, 0xbf637u);
    c.r[0] = (uint32_t)(c.r[6] + c.r[6] * 2);
    // 0bf63a  lea edx, [eax*8]
    X86_AT(c, 0xbf63au);
    c.r[2] = (uint32_t)(c.r[0] * 8);
    // 0bf641  lea edx, [eax + edx*8]
    X86_AT(c, 0xbf641u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 8);
    // 0bf644  mov byte ptr [edx + 0xa4dbe], 0
    X86_AT(c, 0xbf644u);
    wr8((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4DBEu)), 0x0u);
L_bf64b:
    X86_TICK(c, 15);
    // 0bf64b  push edi
    X86_AT(c, 0xbf64bu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0bf64c  push 0x4f
    X86_AT(c, 0xbf64cu);
    { uint32_t v = 0x4Fu; push32(c, v); }
    // 0bf64e  lea eax, [ebp - 0x50]
    X86_AT(c, 0xbf64eu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0bf651  push eax
    X86_AT(c, 0xbf651u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0bf652  call 0xd781c
    X86_AT(c, 0xbf652u);
    push32(c, 0xbf657u); x86_call_known(c, 0xd781cu, f_000d781c); X86_RET(c, 0xbf657u);
    X86_TICK(c, 11);
    // 0bf657  lea eax, [ebp - 0x50]
    X86_AT(c, 0xbf657u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0bf65a  push eax
    X86_AT(c, 0xbf65au);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0bf65b  call 0xbf39c
    X86_AT(c, 0xbf65bu);
    push32(c, 0xbf660u); x86_call_known(c, 0xbf39cu, f_000bf39c); X86_RET(c, 0xbf660u);
    X86_TICK(c, 14);
    // 0bf660  add esp, 0x10
    X86_AT(c, 0xbf660u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0bf663  cmp byte ptr [eax], 0x59
    X86_AT(c, 0xbf663u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[0]))), 0x59u, 0, 1);
    // 0bf666  jne 0xbf67e
    X86_AT(c, 0xbf666u);
    if (x86_cc(c, 5)) { goto L_bf67e; }
    X86_TICK(c, 15);
    // 0bf668  lea eax, [esi + esi*2]
    X86_AT(c, 0xbf668u);
    c.r[0] = (uint32_t)(c.r[6] + c.r[6] * 2);
    // 0bf66b  lea edx, [eax*8]
    X86_AT(c, 0xbf66bu);
    c.r[2] = (uint32_t)(c.r[0] * 8);
    // 0bf672  lea edx, [eax + edx*8]
    X86_AT(c, 0xbf672u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 8);
    // 0bf675  mov byte ptr [edx + 0xa4dbf], 1
    X86_AT(c, 0xbf675u);
    wr8((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4DBFu)), 0x1u);
    // 0bf67c  jmp 0xbf692
    X86_AT(c, 0xbf67cu);
    goto L_bf692;
L_bf67e:
    X86_TICK(c, 8);
    // 0bf67e  lea eax, [esi + esi*2]
    X86_AT(c, 0xbf67eu);
    c.r[0] = (uint32_t)(c.r[6] + c.r[6] * 2);
    // 0bf681  lea edx, [eax*8]
    X86_AT(c, 0xbf681u);
    c.r[2] = (uint32_t)(c.r[0] * 8);
    // 0bf688  lea edx, [eax + edx*8]
    X86_AT(c, 0xbf688u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 8);
    // 0bf68b  mov byte ptr [edx + 0xa4dbf], 0
    X86_AT(c, 0xbf68bu);
    wr8((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4DBFu)), 0x0u);
L_bf692:
    X86_TICK(c, 15);
    // 0bf692  push edi
    X86_AT(c, 0xbf692u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0bf693  push 0x4f
    X86_AT(c, 0xbf693u);
    { uint32_t v = 0x4Fu; push32(c, v); }
    // 0bf695  lea eax, [ebp - 0x50]
    X86_AT(c, 0xbf695u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0bf698  push eax
    X86_AT(c, 0xbf698u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0bf699  call 0xd781c
    X86_AT(c, 0xbf699u);
    push32(c, 0xbf69eu); x86_call_known(c, 0xd781cu, f_000d781c); X86_RET(c, 0xbf69eu);
    X86_TICK(c, 11);
    // 0bf69e  lea eax, [ebp - 0x50]
    X86_AT(c, 0xbf69eu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0bf6a1  push eax
    X86_AT(c, 0xbf6a1u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0bf6a2  call 0xbf39c
    X86_AT(c, 0xbf6a2u);
    push32(c, 0xbf6a7u); x86_call_known(c, 0xbf39cu, f_000bf39c); X86_RET(c, 0xbf6a7u);
    X86_TICK(c, 14);
    // 0bf6a7  add esp, 0x10
    X86_AT(c, 0xbf6a7u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0bf6aa  cmp byte ptr [eax], 0x59
    X86_AT(c, 0xbf6aau);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[0]))), 0x59u, 0, 1);
    // 0bf6ad  jne 0xbf6c5
    X86_AT(c, 0xbf6adu);
    if (x86_cc(c, 5)) { goto L_bf6c5; }
    X86_TICK(c, 15);
    // 0bf6af  lea eax, [esi + esi*2]
    X86_AT(c, 0xbf6afu);
    c.r[0] = (uint32_t)(c.r[6] + c.r[6] * 2);
    // 0bf6b2  lea edx, [eax*8]
    X86_AT(c, 0xbf6b2u);
    c.r[2] = (uint32_t)(c.r[0] * 8);
    // 0bf6b9  lea edx, [eax + edx*8]
    X86_AT(c, 0xbf6b9u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 8);
    // 0bf6bc  mov byte ptr [edx + 0xa4dc0], 1
    X86_AT(c, 0xbf6bcu);
    wr8((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4DC0u)), 0x1u);
    // 0bf6c3  jmp 0xbf6d9
    X86_AT(c, 0xbf6c3u);
    goto L_bf6d9;
L_bf6c5:
    X86_TICK(c, 8);
    // 0bf6c5  lea eax, [esi + esi*2]
    X86_AT(c, 0xbf6c5u);
    c.r[0] = (uint32_t)(c.r[6] + c.r[6] * 2);
    // 0bf6c8  lea edx, [eax*8]
    X86_AT(c, 0xbf6c8u);
    c.r[2] = (uint32_t)(c.r[0] * 8);
    // 0bf6cf  lea edx, [eax + edx*8]
    X86_AT(c, 0xbf6cfu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 8);
    // 0bf6d2  mov byte ptr [edx + 0xa4dc0], 0
    X86_AT(c, 0xbf6d2u);
    wr8((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4DC0u)), 0x0u);
L_bf6d9:
    X86_TICK(c, 15);
    // 0bf6d9  push edi
    X86_AT(c, 0xbf6d9u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0bf6da  push 0x4f
    X86_AT(c, 0xbf6dau);
    { uint32_t v = 0x4Fu; push32(c, v); }
    // 0bf6dc  lea eax, [ebp - 0x50]
    X86_AT(c, 0xbf6dcu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0bf6df  push eax
    X86_AT(c, 0xbf6dfu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0bf6e0  call 0xd781c
    X86_AT(c, 0xbf6e0u);
    push32(c, 0xbf6e5u); x86_call_known(c, 0xd781cu, f_000d781c); X86_RET(c, 0xbf6e5u);
    X86_TICK(c, 13);
    // 0bf6e5  lea eax, [ebp - 0x50]
    X86_AT(c, 0xbf6e5u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0bf6e8  push eax
    X86_AT(c, 0xbf6e8u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0bf6e9  mov edx, eax
    X86_AT(c, 0xbf6e9u);
    c.r[2] = c.r[0];
    // 0bf6eb  call 0xbf39c
    X86_AT(c, 0xbf6ebu);
    push32(c, 0xbf6f0u); x86_call_known(c, 0xbf39cu, f_000bf39c); X86_RET(c, 0xbf6f0u);
    X86_TICK(c, 9);
    // 0bf6f0  push eax
    X86_AT(c, 0xbf6f0u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0bf6f1  call 0xb9080
    X86_AT(c, 0xbf6f1u);
    push32(c, 0xbf6f6u); x86_call_known(c, 0xb9080u, f_000b9080); X86_RET(c, 0xbf6f6u);
    X86_TICK(c, 25);
    // 0bf6f6  lea edx, [esi + esi*2]
    X86_AT(c, 0xbf6f6u);
    c.r[2] = (uint32_t)(c.r[6] + c.r[6] * 2);
    // 0bf6f9  lea ecx, [edx*8]
    X86_AT(c, 0xbf6f9u);
    c.r[1] = (uint32_t)(c.r[2] * 8);
    // 0bf700  lea ecx, [edx + ecx*8]
    X86_AT(c, 0xbf700u);
    c.r[1] = (uint32_t)(c.r[2] + c.r[1] * 8);
    // 0bf703  mov dword ptr [ecx + 0xa4dc1], eax
    X86_AT(c, 0xbf703u);
    wr32((c.sbase[3] + (uint32_t)(c.r[1] + 0xA4DC1u)), c.r[0]);
    // 0bf709  push edi
    X86_AT(c, 0xbf709u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0bf70a  push 0x4f
    X86_AT(c, 0xbf70au);
    { uint32_t v = 0x4Fu; push32(c, v); }
    // 0bf70c  lea eax, [ebp - 0x50]
    X86_AT(c, 0xbf70cu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0bf70f  push eax
    X86_AT(c, 0xbf70fu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0bf710  mov dword ptr [ebp - 0x58], ecx
    X86_AT(c, 0xbf710u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFA8u)), c.r[1]);
    // 0bf713  call 0xd781c
    X86_AT(c, 0xbf713u);
    push32(c, 0xbf718u); x86_call_known(c, 0xd781cu, f_000d781c); X86_RET(c, 0xbf718u);
    X86_TICK(c, 11);
    // 0bf718  lea eax, [ebp - 0x50]
    X86_AT(c, 0xbf718u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0bf71b  push eax
    X86_AT(c, 0xbf71bu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0bf71c  call 0xbf39c
    X86_AT(c, 0xbf71cu);
    push32(c, 0xbf721u); x86_call_known(c, 0xbf39cu, f_000bf39c); X86_RET(c, 0xbf721u);
    X86_TICK(c, 14);
    // 0bf721  add esp, 0x24
    X86_AT(c, 0xbf721u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x24u, 0, 4); }
    // 0bf724  cmp byte ptr [eax], 0x59
    X86_AT(c, 0xbf724u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[0]))), 0x59u, 0, 1);
    // 0bf727  jne 0xbf738
    X86_AT(c, 0xbf727u);
    if (x86_cc(c, 5)) { goto L_bf738; }
    X86_TICK(c, 13);
    // 0bf729  mov eax, dword ptr [ebp - 0x58]
    X86_AT(c, 0xbf729u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFA8u)));
    // 0bf72c  mov dword ptr [eax + 0xa4dc5], 0
    X86_AT(c, 0xbf72cu);
    wr32((c.sbase[3] + (uint32_t)(c.r[0] + 0xA4DC5u)), 0x0u);
    // 0bf736  jmp 0xbf74f
    X86_AT(c, 0xbf736u);
    goto L_bf74f;
L_bf738:
    X86_TICK(c, 8);
    // 0bf738  lea eax, [esi + esi*2]
    X86_AT(c, 0xbf738u);
    c.r[0] = (uint32_t)(c.r[6] + c.r[6] * 2);
    // 0bf73b  lea edx, [eax*8]
    X86_AT(c, 0xbf73bu);
    c.r[2] = (uint32_t)(c.r[0] * 8);
    // 0bf742  lea edx, [eax + edx*8]
    X86_AT(c, 0xbf742u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 8);
    // 0bf745  mov dword ptr [edx + 0xa4dc5], 0xffffffff
    X86_AT(c, 0xbf745u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4DC5u)), 0xFFFFFFFFu);
L_bf74f:
    X86_TICK(c, 15);
    // 0bf74f  push edi
    X86_AT(c, 0xbf74fu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0bf750  push 0x4f
    X86_AT(c, 0xbf750u);
    { uint32_t v = 0x4Fu; push32(c, v); }
    // 0bf752  lea eax, [ebp - 0x50]
    X86_AT(c, 0xbf752u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0bf755  push eax
    X86_AT(c, 0xbf755u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0bf756  call 0xd781c
    X86_AT(c, 0xbf756u);
    push32(c, 0xbf75bu); x86_call_known(c, 0xd781cu, f_000d781c); X86_RET(c, 0xbf75bu);
    X86_TICK(c, 13);
    // 0bf75b  lea eax, [ebp - 0x50]
    X86_AT(c, 0xbf75bu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0bf75e  push eax
    X86_AT(c, 0xbf75eu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0bf75f  mov edx, eax
    X86_AT(c, 0xbf75fu);
    c.r[2] = c.r[0];
    // 0bf761  call 0xbf39c
    X86_AT(c, 0xbf761u);
    push32(c, 0xbf766u); x86_call_known(c, 0xbf39cu, f_000bf39c); X86_RET(c, 0xbf766u);
    X86_TICK(c, 34);
    // 0bf766  mov ecx, esi
    X86_AT(c, 0xbf766u);
    c.r[1] = c.r[6];
    // 0bf768  lea edx, [ecx + ecx*2]
    X86_AT(c, 0xbf768u);
    c.r[2] = (uint32_t)(c.r[1] + c.r[1] * 2);
    // 0bf76b  shl edx, 5
    X86_AT(c, 0xbf76bu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0bf76e  add edx, ecx
    X86_AT(c, 0xbf76eu);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[1], 0, 4); }
    // 0bf770  lea edx, [ecx + edx*2]
    X86_AT(c, 0xbf770u);
    c.r[2] = (uint32_t)(c.r[1] + c.r[2] * 2);
    // 0bf773  mov al, byte ptr [eax]
    X86_AT(c, 0xbf773u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[0]))));
    // 0bf775  mov byte ptr [edx + 0xa4dc9], al
    X86_AT(c, 0xbf775u);
    wr8((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4DC9u)), g8(c, 0));
    // 0bf77b  push edi
    X86_AT(c, 0xbf77bu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0bf77c  push 0x4f
    X86_AT(c, 0xbf77cu);
    { uint32_t v = 0x4Fu; push32(c, v); }
    // 0bf77e  lea eax, [ebp - 0x50]
    X86_AT(c, 0xbf77eu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0bf781  push eax
    X86_AT(c, 0xbf781u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0bf782  mov dword ptr [ebp - 0x58], edx
    X86_AT(c, 0xbf782u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFA8u)), c.r[2]);
    // 0bf785  call 0xd781c
    X86_AT(c, 0xbf785u);
    push32(c, 0xbf78au); x86_call_known(c, 0xd781cu, f_000d781c); X86_RET(c, 0xbf78au);
    X86_TICK(c, 13);
    // 0bf78a  lea eax, [ebp - 0x50]
    X86_AT(c, 0xbf78au);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0bf78d  push eax
    X86_AT(c, 0xbf78du);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0bf78e  mov edx, eax
    X86_AT(c, 0xbf78eu);
    c.r[2] = c.r[0];
    // 0bf790  call 0xbf39c
    X86_AT(c, 0xbf790u);
    push32(c, 0xbf795u); x86_call_known(c, 0xbf39cu, f_000bf39c); X86_RET(c, 0xbf795u);
    X86_TICK(c, 9);
    // 0bf795  push eax
    X86_AT(c, 0xbf795u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0bf796  call 0xb9080
    X86_AT(c, 0xbf796u);
    push32(c, 0xbf79bu); x86_call_known(c, 0xb9080u, f_000b9080); X86_RET(c, 0xbf79bu);
    X86_TICK(c, 21);
    // 0bf79b  mov edx, dword ptr [ebp - 0x58]
    X86_AT(c, 0xbf79bu);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFA8u)));
    // 0bf79e  mov dword ptr [edx + 0xa4dca], eax
    X86_AT(c, 0xbf79eu);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4DCAu)), c.r[0]);
    // 0bf7a4  push edi
    X86_AT(c, 0xbf7a4u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0bf7a5  push 0x4f
    X86_AT(c, 0xbf7a5u);
    { uint32_t v = 0x4Fu; push32(c, v); }
    // 0bf7a7  lea eax, [ebp - 0x50]
    X86_AT(c, 0xbf7a7u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0bf7aa  push eax
    X86_AT(c, 0xbf7aau);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0bf7ab  call 0xd781c
    X86_AT(c, 0xbf7abu);
    push32(c, 0xbf7b0u); x86_call_known(c, 0xd781cu, f_000d781c); X86_RET(c, 0xbf7b0u);
    X86_TICK(c, 13);
    // 0bf7b0  lea eax, [ebp - 0x50]
    X86_AT(c, 0xbf7b0u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0bf7b3  push eax
    X86_AT(c, 0xbf7b3u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0bf7b4  mov edx, eax
    X86_AT(c, 0xbf7b4u);
    c.r[2] = c.r[0];
    // 0bf7b6  call 0xbf39c
    X86_AT(c, 0xbf7b6u);
    push32(c, 0xbf7bbu); x86_call_known(c, 0xbf39cu, f_000bf39c); X86_RET(c, 0xbf7bbu);
    X86_TICK(c, 9);
    // 0bf7bb  push eax
    X86_AT(c, 0xbf7bbu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0bf7bc  call 0xb9080
    X86_AT(c, 0xbf7bcu);
    push32(c, 0xbf7c1u); x86_call_known(c, 0xb9080u, f_000b9080); X86_RET(c, 0xbf7c1u);
    X86_TICK(c, 21);
    // 0bf7c1  mov edx, dword ptr [ebp - 0x58]
    X86_AT(c, 0xbf7c1u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFA8u)));
    // 0bf7c4  mov dword ptr [edx + 0xa4dce], eax
    X86_AT(c, 0xbf7c4u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4DCEu)), c.r[0]);
    // 0bf7ca  push edi
    X86_AT(c, 0xbf7cau);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0bf7cb  push 0x4f
    X86_AT(c, 0xbf7cbu);
    { uint32_t v = 0x4Fu; push32(c, v); }
    // 0bf7cd  lea eax, [ebp - 0x50]
    X86_AT(c, 0xbf7cdu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0bf7d0  push eax
    X86_AT(c, 0xbf7d0u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0bf7d1  call 0xd781c
    X86_AT(c, 0xbf7d1u);
    push32(c, 0xbf7d6u); x86_call_known(c, 0xd781cu, f_000d781c); X86_RET(c, 0xbf7d6u);
    X86_TICK(c, 15);
    // 0bf7d6  add esp, 0x44
    X86_AT(c, 0xbf7d6u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x44u, 0, 4); }
    // 0bf7d9  lea eax, [ebp - 0x50]
    X86_AT(c, 0xbf7d9u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0bf7dc  push eax
    X86_AT(c, 0xbf7dcu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0bf7dd  mov edx, eax
    X86_AT(c, 0xbf7ddu);
    c.r[2] = c.r[0];
    // 0bf7df  call 0xbf39c
    X86_AT(c, 0xbf7dfu);
    push32(c, 0xbf7e4u); x86_call_known(c, 0xbf39cu, f_000bf39c); X86_RET(c, 0xbf7e4u);
    X86_TICK(c, 9);
    // 0bf7e4  push eax
    X86_AT(c, 0xbf7e4u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0bf7e5  call 0xb9080
    X86_AT(c, 0xbf7e5u);
    push32(c, 0xbf7eau); x86_call_known(c, 0xb9080u, f_000b9080); X86_RET(c, 0xbf7eau);
    X86_TICK(c, 21);
    // 0bf7ea  mov edx, dword ptr [ebp - 0x58]
    X86_AT(c, 0xbf7eau);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFA8u)));
    // 0bf7ed  mov dword ptr [edx + 0xa4dd2], eax
    X86_AT(c, 0xbf7edu);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4DD2u)), c.r[0]);
    // 0bf7f3  push edi
    X86_AT(c, 0xbf7f3u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0bf7f4  push 0x4f
    X86_AT(c, 0xbf7f4u);
    { uint32_t v = 0x4Fu; push32(c, v); }
    // 0bf7f6  lea eax, [ebp - 0x50]
    X86_AT(c, 0xbf7f6u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0bf7f9  push eax
    X86_AT(c, 0xbf7f9u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0bf7fa  call 0xd781c
    X86_AT(c, 0xbf7fau);
    push32(c, 0xbf7ffu); x86_call_known(c, 0xd781cu, f_000d781c); X86_RET(c, 0xbf7ffu);
    X86_TICK(c, 13);
    // 0bf7ff  lea eax, [ebp - 0x50]
    X86_AT(c, 0xbf7ffu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0bf802  push eax
    X86_AT(c, 0xbf802u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0bf803  mov edx, eax
    X86_AT(c, 0xbf803u);
    c.r[2] = c.r[0];
    // 0bf805  call 0xbf39c
    X86_AT(c, 0xbf805u);
    push32(c, 0xbf80au); x86_call_known(c, 0xbf39cu, f_000bf39c); X86_RET(c, 0xbf80au);
    X86_TICK(c, 9);
    // 0bf80a  push eax
    X86_AT(c, 0xbf80au);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0bf80b  call 0xb9080
    X86_AT(c, 0xbf80bu);
    push32(c, 0xbf810u); x86_call_known(c, 0xb9080u, f_000b9080); X86_RET(c, 0xbf810u);
    X86_TICK(c, 21);
    // 0bf810  mov edx, dword ptr [ebp - 0x58]
    X86_AT(c, 0xbf810u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFA8u)));
    // 0bf813  mov dword ptr [edx + 0xa4dd6], eax
    X86_AT(c, 0xbf813u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4DD6u)), c.r[0]);
    // 0bf819  push edi
    X86_AT(c, 0xbf819u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0bf81a  push 0x4f
    X86_AT(c, 0xbf81au);
    { uint32_t v = 0x4Fu; push32(c, v); }
    // 0bf81c  lea eax, [ebp - 0x50]
    X86_AT(c, 0xbf81cu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0bf81f  push eax
    X86_AT(c, 0xbf81fu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0bf820  call 0xd781c
    X86_AT(c, 0xbf820u);
    push32(c, 0xbf825u); x86_call_known(c, 0xd781cu, f_000d781c); X86_RET(c, 0xbf825u);
    X86_TICK(c, 13);
    // 0bf825  lea eax, [ebp - 0x50]
    X86_AT(c, 0xbf825u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0bf828  push eax
    X86_AT(c, 0xbf828u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0bf829  mov edx, eax
    X86_AT(c, 0xbf829u);
    c.r[2] = c.r[0];
    // 0bf82b  call 0xbf39c
    X86_AT(c, 0xbf82bu);
    push32(c, 0xbf830u); x86_call_known(c, 0xbf39cu, f_000bf39c); X86_RET(c, 0xbf830u);
    X86_TICK(c, 23);
    // 0bf830  mov al, byte ptr [eax]
    X86_AT(c, 0xbf830u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[0]))));
    // 0bf832  mov ecx, dword ptr [ebp - 0x58]
    X86_AT(c, 0xbf832u);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFA8u)));
    // 0bf835  mov byte ptr [ecx + 0xa4dda], al
    X86_AT(c, 0xbf835u);
    wr8((c.sbase[3] + (uint32_t)(c.r[1] + 0xA4DDAu)), g8(c, 0));
    // 0bf83b  push edi
    X86_AT(c, 0xbf83bu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0bf83c  push 0x4f
    X86_AT(c, 0xbf83cu);
    { uint32_t v = 0x4Fu; push32(c, v); }
    // 0bf83e  push edx
    X86_AT(c, 0xbf83eu);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0bf83f  call 0xd781c
    X86_AT(c, 0xbf83fu);
    push32(c, 0xbf844u); x86_call_known(c, 0xd781cu, f_000d781c); X86_RET(c, 0xbf844u);
    X86_TICK(c, 13);
    // 0bf844  lea eax, [ebp - 0x50]
    X86_AT(c, 0xbf844u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0bf847  push eax
    X86_AT(c, 0xbf847u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0bf848  mov edx, eax
    X86_AT(c, 0xbf848u);
    c.r[2] = c.r[0];
    // 0bf84a  call 0xbf39c
    X86_AT(c, 0xbf84au);
    push32(c, 0xbf84fu); x86_call_known(c, 0xbf39cu, f_000bf39c); X86_RET(c, 0xbf84fu);
    X86_TICK(c, 25);
    // 0bf84f  add esp, 0x3c
    X86_AT(c, 0xbf84fu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x3Cu, 0, 4); }
    // 0bf852  mov al, byte ptr [eax]
    X86_AT(c, 0xbf852u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[0]))));
    // 0bf854  mov ecx, dword ptr [ebp - 0x58]
    X86_AT(c, 0xbf854u);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFA8u)));
    // 0bf857  mov byte ptr [ecx + 0xa4ddb], al
    X86_AT(c, 0xbf857u);
    wr8((c.sbase[3] + (uint32_t)(c.r[1] + 0xA4DDBu)), g8(c, 0));
    // 0bf85d  push edi
    X86_AT(c, 0xbf85du);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0bf85e  push 0x4f
    X86_AT(c, 0xbf85eu);
    { uint32_t v = 0x4Fu; push32(c, v); }
    // 0bf860  push edx
    X86_AT(c, 0xbf860u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0bf861  call 0xd781c
    X86_AT(c, 0xbf861u);
    push32(c, 0xbf866u); x86_call_known(c, 0xd781cu, f_000d781c); X86_RET(c, 0xbf866u);
    X86_TICK(c, 15);
    // 0bf866  add esp, 0xc
    X86_AT(c, 0xbf866u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0bf869  lea eax, [ebp - 0x50]
    X86_AT(c, 0xbf869u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0bf86c  push eax
    X86_AT(c, 0xbf86cu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0bf86d  mov edx, eax
    X86_AT(c, 0xbf86du);
    c.r[2] = c.r[0];
    // 0bf86f  call 0xbf39c
    X86_AT(c, 0xbf86fu);
    push32(c, 0xbf874u); x86_call_known(c, 0xbf39cu, f_000bf39c); X86_RET(c, 0xbf874u);
    X86_TICK(c, 36);
    // 0bf874  mov ecx, 0xa492c
    X86_AT(c, 0xbf874u);
    c.r[1] = 0xA492Cu;
    // 0bf879  mov ecx, esi
    X86_AT(c, 0xbf879u);
    c.r[1] = c.r[6];
    // 0bf87b  lea edx, [ecx + ecx*2]
    X86_AT(c, 0xbf87bu);
    c.r[2] = (uint32_t)(c.r[1] + c.r[1] * 2);
    // 0bf87e  shl edx, 5
    X86_AT(c, 0xbf87eu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0bf881  add edx, ecx
    X86_AT(c, 0xbf881u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[1], 0, 4); }
    // 0bf883  lea edx, [ecx + edx*2]
    X86_AT(c, 0xbf883u);
    c.r[2] = (uint32_t)(c.r[1] + c.r[2] * 2);
    // 0bf886  mov al, byte ptr [eax]
    X86_AT(c, 0xbf886u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[0]))));
    // 0bf888  mov byte ptr [edx + 0xa4ddc], al
    X86_AT(c, 0xbf888u);
    wr8((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4DDCu)), g8(c, 0));
    // 0bf88e  push edi
    X86_AT(c, 0xbf88eu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0bf88f  push 0x4f
    X86_AT(c, 0xbf88fu);
    { uint32_t v = 0x4Fu; push32(c, v); }
    // 0bf891  lea eax, [ebp - 0x50]
    X86_AT(c, 0xbf891u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0bf894  push eax
    X86_AT(c, 0xbf894u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0bf895  mov dword ptr [ebp - 0x58], edx
    X86_AT(c, 0xbf895u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFA8u)), c.r[2]);
    // 0bf898  call 0xd781c
    X86_AT(c, 0xbf898u);
    push32(c, 0xbf89du); x86_call_known(c, 0xd781cu, f_000d781c); X86_RET(c, 0xbf89du);
    X86_TICK(c, 13);
    // 0bf89d  lea eax, [ebp - 0x50]
    X86_AT(c, 0xbf89du);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0bf8a0  push eax
    X86_AT(c, 0xbf8a0u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0bf8a1  mov edx, eax
    X86_AT(c, 0xbf8a1u);
    c.r[2] = c.r[0];
    // 0bf8a3  call 0xbf39c
    X86_AT(c, 0xbf8a3u);
    push32(c, 0xbf8a8u); x86_call_known(c, 0xbf39cu, f_000bf39c); X86_RET(c, 0xbf8a8u);
    X86_TICK(c, 9);
    // 0bf8a8  push eax
    X86_AT(c, 0xbf8a8u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0bf8a9  call 0xb9080
    X86_AT(c, 0xbf8a9u);
    push32(c, 0xbf8aeu); x86_call_known(c, 0xb9080u, f_000b9080); X86_RET(c, 0xbf8aeu);
    X86_TICK(c, 21);
    // 0bf8ae  mov edx, dword ptr [ebp - 0x58]
    X86_AT(c, 0xbf8aeu);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFA8u)));
    // 0bf8b1  mov dword ptr [edx + 0xa4ddd], eax
    X86_AT(c, 0xbf8b1u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4DDDu)), c.r[0]);
    // 0bf8b7  push edi
    X86_AT(c, 0xbf8b7u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0bf8b8  push 0x4f
    X86_AT(c, 0xbf8b8u);
    { uint32_t v = 0x4Fu; push32(c, v); }
    // 0bf8ba  lea eax, [ebp - 0x50]
    X86_AT(c, 0xbf8bau);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0bf8bd  push eax
    X86_AT(c, 0xbf8bdu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0bf8be  call 0xd781c
    X86_AT(c, 0xbf8beu);
    push32(c, 0xbf8c3u); x86_call_known(c, 0xd781cu, f_000d781c); X86_RET(c, 0xbf8c3u);
    X86_TICK(c, 13);
    // 0bf8c3  lea eax, [ebp - 0x50]
    X86_AT(c, 0xbf8c3u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0bf8c6  push eax
    X86_AT(c, 0xbf8c6u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0bf8c7  mov edx, eax
    X86_AT(c, 0xbf8c7u);
    c.r[2] = c.r[0];
    // 0bf8c9  call 0xbf39c
    X86_AT(c, 0xbf8c9u);
    push32(c, 0xbf8ceu); x86_call_known(c, 0xbf39cu, f_000bf39c); X86_RET(c, 0xbf8ceu);
    X86_TICK(c, 9);
    // 0bf8ce  push eax
    X86_AT(c, 0xbf8ceu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0bf8cf  call 0xb9080
    X86_AT(c, 0xbf8cfu);
    push32(c, 0xbf8d4u); x86_call_known(c, 0xb9080u, f_000b9080); X86_RET(c, 0xbf8d4u);
    X86_TICK(c, 21);
    // 0bf8d4  mov edx, dword ptr [ebp - 0x58]
    X86_AT(c, 0xbf8d4u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFA8u)));
    // 0bf8d7  mov dword ptr [edx + 0xa4de1], eax
    X86_AT(c, 0xbf8d7u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4DE1u)), c.r[0]);
    // 0bf8dd  push edi
    X86_AT(c, 0xbf8ddu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0bf8de  push 0x4f
    X86_AT(c, 0xbf8deu);
    { uint32_t v = 0x4Fu; push32(c, v); }
    // 0bf8e0  lea eax, [ebp - 0x50]
    X86_AT(c, 0xbf8e0u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0bf8e3  push eax
    X86_AT(c, 0xbf8e3u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0bf8e4  call 0xd781c
    X86_AT(c, 0xbf8e4u);
    push32(c, 0xbf8e9u); x86_call_known(c, 0xd781cu, f_000d781c); X86_RET(c, 0xbf8e9u);
    X86_TICK(c, 13);
    // 0bf8e9  lea eax, [ebp - 0x50]
    X86_AT(c, 0xbf8e9u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0bf8ec  push eax
    X86_AT(c, 0xbf8ecu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0bf8ed  mov edx, eax
    X86_AT(c, 0xbf8edu);
    c.r[2] = c.r[0];
    // 0bf8ef  call 0xbf39c
    X86_AT(c, 0xbf8efu);
    push32(c, 0xbf8f4u); x86_call_known(c, 0xbf39cu, f_000bf39c); X86_RET(c, 0xbf8f4u);
    X86_TICK(c, 11);
    // 0bf8f4  add esp, 0x3c
    X86_AT(c, 0xbf8f4u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x3Cu, 0, 4); }
    // 0bf8f7  push eax
    X86_AT(c, 0xbf8f7u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0bf8f8  call 0xb9080
    X86_AT(c, 0xbf8f8u);
    push32(c, 0xbf8fdu); x86_call_known(c, 0xb9080u, f_000b9080); X86_RET(c, 0xbf8fdu);
    X86_TICK(c, 21);
    // 0bf8fd  mov edx, dword ptr [ebp - 0x58]
    X86_AT(c, 0xbf8fdu);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFA8u)));
    // 0bf900  mov dword ptr [edx + 0xa4de5], eax
    X86_AT(c, 0xbf900u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4DE5u)), c.r[0]);
    // 0bf906  push edi
    X86_AT(c, 0xbf906u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0bf907  push 0x4f
    X86_AT(c, 0xbf907u);
    { uint32_t v = 0x4Fu; push32(c, v); }
    // 0bf909  lea eax, [ebp - 0x50]
    X86_AT(c, 0xbf909u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0bf90c  push eax
    X86_AT(c, 0xbf90cu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0bf90d  call 0xd781c
    X86_AT(c, 0xbf90du);
    push32(c, 0xbf912u); x86_call_known(c, 0xd781cu, f_000d781c); X86_RET(c, 0xbf912u);
    X86_TICK(c, 13);
    // 0bf912  lea eax, [ebp - 0x50]
    X86_AT(c, 0xbf912u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0bf915  push eax
    X86_AT(c, 0xbf915u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0bf916  mov edx, eax
    X86_AT(c, 0xbf916u);
    c.r[2] = c.r[0];
    // 0bf918  call 0xbf39c
    X86_AT(c, 0xbf918u);
    push32(c, 0xbf91du); x86_call_known(c, 0xbf39cu, f_000bf39c); X86_RET(c, 0xbf91du);
    X86_TICK(c, 9);
    // 0bf91d  push eax
    X86_AT(c, 0xbf91du);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0bf91e  call 0xb9080
    X86_AT(c, 0xbf91eu);
    push32(c, 0xbf923u); x86_call_known(c, 0xb9080u, f_000b9080); X86_RET(c, 0xbf923u);
    X86_TICK(c, 21);
    // 0bf923  mov edx, dword ptr [ebp - 0x58]
    X86_AT(c, 0xbf923u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFA8u)));
    // 0bf926  mov dword ptr [edx + 0xa4de9], eax
    X86_AT(c, 0xbf926u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4DE9u)), c.r[0]);
    // 0bf92c  push edi
    X86_AT(c, 0xbf92cu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0bf92d  push 0x4f
    X86_AT(c, 0xbf92du);
    { uint32_t v = 0x4Fu; push32(c, v); }
    // 0bf92f  lea eax, [ebp - 0x50]
    X86_AT(c, 0xbf92fu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0bf932  push eax
    X86_AT(c, 0xbf932u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0bf933  call 0xd781c
    X86_AT(c, 0xbf933u);
    push32(c, 0xbf938u); x86_call_known(c, 0xd781cu, f_000d781c); X86_RET(c, 0xbf938u);
    X86_TICK(c, 13);
    // 0bf938  lea eax, [ebp - 0x50]
    X86_AT(c, 0xbf938u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0bf93b  push eax
    X86_AT(c, 0xbf93bu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0bf93c  mov edx, eax
    X86_AT(c, 0xbf93cu);
    c.r[2] = c.r[0];
    // 0bf93e  call 0xbf39c
    X86_AT(c, 0xbf93eu);
    push32(c, 0xbf943u); x86_call_known(c, 0xbf39cu, f_000bf39c); X86_RET(c, 0xbf943u);
    X86_TICK(c, 9);
    // 0bf943  push eax
    X86_AT(c, 0xbf943u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0bf944  call 0xb9080
    X86_AT(c, 0xbf944u);
    push32(c, 0xbf949u); x86_call_known(c, 0xb9080u, f_000b9080); X86_RET(c, 0xbf949u);
    X86_TICK(c, 21);
    // 0bf949  mov edx, dword ptr [ebp - 0x58]
    X86_AT(c, 0xbf949u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFA8u)));
    // 0bf94c  mov dword ptr [edx + 0xa4df1], eax
    X86_AT(c, 0xbf94cu);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4DF1u)), c.r[0]);
    // 0bf952  push edi
    X86_AT(c, 0xbf952u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0bf953  push 0x4f
    X86_AT(c, 0xbf953u);
    { uint32_t v = 0x4Fu; push32(c, v); }
    // 0bf955  lea eax, [ebp - 0x50]
    X86_AT(c, 0xbf955u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0bf958  push eax
    X86_AT(c, 0xbf958u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0bf959  call 0xd781c
    X86_AT(c, 0xbf959u);
    push32(c, 0xbf95eu); x86_call_known(c, 0xd781cu, f_000d781c); X86_RET(c, 0xbf95eu);
    X86_TICK(c, 13);
    // 0bf95e  lea eax, [ebp - 0x50]
    X86_AT(c, 0xbf95eu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0bf961  push eax
    X86_AT(c, 0xbf961u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0bf962  mov edx, eax
    X86_AT(c, 0xbf962u);
    c.r[2] = c.r[0];
    // 0bf964  call 0xbf39c
    X86_AT(c, 0xbf964u);
    push32(c, 0xbf969u); x86_call_known(c, 0xbf39cu, f_000bf39c); X86_RET(c, 0xbf969u);
    X86_TICK(c, 11);
    // 0bf969  add esp, 0x3c
    X86_AT(c, 0xbf969u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x3Cu, 0, 4); }
    // 0bf96c  push eax
    X86_AT(c, 0xbf96cu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0bf96d  call 0xb9080
    X86_AT(c, 0xbf96du);
    push32(c, 0xbf972u); x86_call_known(c, 0xb9080u, f_000b9080); X86_RET(c, 0xbf972u);
    X86_TICK(c, 21);
    // 0bf972  mov edx, dword ptr [ebp - 0x58]
    X86_AT(c, 0xbf972u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFA8u)));
    // 0bf975  mov dword ptr [edx + 0xa4ded], eax
    X86_AT(c, 0xbf975u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4DEDu)), c.r[0]);
    // 0bf97b  push edi
    X86_AT(c, 0xbf97bu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0bf97c  push 0x4f
    X86_AT(c, 0xbf97cu);
    { uint32_t v = 0x4Fu; push32(c, v); }
    // 0bf97e  lea eax, [ebp - 0x50]
    X86_AT(c, 0xbf97eu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0bf981  push eax
    X86_AT(c, 0xbf981u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0bf982  call 0xd781c
    X86_AT(c, 0xbf982u);
    push32(c, 0xbf987u); x86_call_known(c, 0xd781cu, f_000d781c); X86_RET(c, 0xbf987u);
    X86_TICK(c, 11);
    // 0bf987  lea eax, [ebp - 0x50]
    X86_AT(c, 0xbf987u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0bf98a  push eax
    X86_AT(c, 0xbf98au);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0bf98b  call 0xbf39c
    X86_AT(c, 0xbf98bu);
    push32(c, 0xbf990u); x86_call_known(c, 0xbf39cu, f_000bf39c); X86_RET(c, 0xbf990u);
    X86_TICK(c, 9);
    // 0bf990  push eax
    X86_AT(c, 0xbf990u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0bf991  call 0xb9080
    X86_AT(c, 0xbf991u);
    push32(c, 0xbf996u); x86_call_known(c, 0xb9080u, f_000b9080); X86_RET(c, 0xbf996u);
    X86_TICK(c, 23);
    // 0bf996  mov edx, dword ptr [ebp - 0x58]
    X86_AT(c, 0xbf996u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFA8u)));
    // 0bf999  mov dword ptr [edx + 0xa4df5], eax
    X86_AT(c, 0xbf999u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4DF5u)), c.r[0]);
    // 0bf99f  add esp, 0x18
    X86_AT(c, 0xbf99fu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x18u, 0, 4); }
    // 0bf9a2  push edi
    X86_AT(c, 0xbf9a2u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0bf9a3  push 0x4f
    X86_AT(c, 0xbf9a3u);
    { uint32_t v = 0x4Fu; push32(c, v); }
    // 0bf9a5  lea eax, [ebp - 0x50]
    X86_AT(c, 0xbf9a5u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0bf9a8  push eax
    X86_AT(c, 0xbf9a8u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0bf9a9  call 0xd781c
    X86_AT(c, 0xbf9a9u);
    push32(c, 0xbf9aeu); x86_call_known(c, 0xd781cu, f_000d781c); X86_RET(c, 0xbf9aeu);
    X86_TICK(c, 13);
    // 0bf9ae  lea eax, [ebp - 0x50]
    X86_AT(c, 0xbf9aeu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0bf9b1  push eax
    X86_AT(c, 0xbf9b1u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0bf9b2  mov edx, eax
    X86_AT(c, 0xbf9b2u);
    c.r[2] = c.r[0];
    // 0bf9b4  call 0xbf39c
    X86_AT(c, 0xbf9b4u);
    push32(c, 0xbf9b9u); x86_call_known(c, 0xbf39cu, f_000bf39c); X86_RET(c, 0xbf9b9u);
    X86_TICK(c, 9);
    // 0bf9b9  push eax
    X86_AT(c, 0xbf9b9u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0bf9ba  call 0xb9080
    X86_AT(c, 0xbf9bau);
    push32(c, 0xbf9bfu); x86_call_known(c, 0xb9080u, f_000b9080); X86_RET(c, 0xbf9bfu);
    X86_TICK(c, 30);
    // 0bf9bf  mov edx, esi
    X86_AT(c, 0xbf9bfu);
    c.r[2] = c.r[6];
    // 0bf9c1  lea ecx, [edx + edx*2]
    X86_AT(c, 0xbf9c1u);
    c.r[1] = (uint32_t)(c.r[2] + c.r[2] * 2);
    // 0bf9c4  shl ecx, 5
    X86_AT(c, 0xbf9c4u);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[1] = r; }
    // 0bf9c7  add ecx, edx
    X86_AT(c, 0xbf9c7u);
    { uint32_t v = c.r[1]; c.r[1] = x86_add(c, v, c.r[2], 0, 4); }
    // 0bf9c9  lea ecx, [edx + ecx*2]
    X86_AT(c, 0xbf9c9u);
    c.r[1] = (uint32_t)(c.r[2] + c.r[1] * 2);
    // 0bf9cc  mov dword ptr [ecx + 0xa4df9], eax
    X86_AT(c, 0xbf9ccu);
    wr32((c.sbase[3] + (uint32_t)(c.r[1] + 0xA4DF9u)), c.r[0]);
    // 0bf9d2  push edi
    X86_AT(c, 0xbf9d2u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0bf9d3  push 0x4f
    X86_AT(c, 0xbf9d3u);
    { uint32_t v = 0x4Fu; push32(c, v); }
    // 0bf9d5  lea eax, [ebp - 0x50]
    X86_AT(c, 0xbf9d5u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0bf9d8  push eax
    X86_AT(c, 0xbf9d8u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0bf9d9  mov dword ptr [ebp - 0x58], ecx
    X86_AT(c, 0xbf9d9u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFA8u)), c.r[1]);
    // 0bf9dc  call 0xd781c
    X86_AT(c, 0xbf9dcu);
    push32(c, 0xbf9e1u); x86_call_known(c, 0xd781cu, f_000d781c); X86_RET(c, 0xbf9e1u);
    X86_TICK(c, 13);
    // 0bf9e1  lea eax, [ebp - 0x50]
    X86_AT(c, 0xbf9e1u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0bf9e4  push eax
    X86_AT(c, 0xbf9e4u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0bf9e5  mov edx, eax
    X86_AT(c, 0xbf9e5u);
    c.r[2] = c.r[0];
    // 0bf9e7  call 0xbf39c
    X86_AT(c, 0xbf9e7u);
    push32(c, 0xbf9ecu); x86_call_known(c, 0xbf39cu, f_000bf39c); X86_RET(c, 0xbf9ecu);
    X86_TICK(c, 9);
    // 0bf9ec  push eax
    X86_AT(c, 0xbf9ecu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0bf9ed  call 0xb9080
    X86_AT(c, 0xbf9edu);
    push32(c, 0xbf9f2u); x86_call_known(c, 0xb9080u, f_000b9080); X86_RET(c, 0xbf9f2u);
    X86_TICK(c, 21);
    // 0bf9f2  mov edx, dword ptr [ebp - 0x58]
    X86_AT(c, 0xbf9f2u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFA8u)));
    // 0bf9f5  mov dword ptr [edx + 0xa4dfd], eax
    X86_AT(c, 0xbf9f5u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4DFDu)), c.r[0]);
    // 0bf9fb  push edi
    X86_AT(c, 0xbf9fbu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0bf9fc  push 0x4f
    X86_AT(c, 0xbf9fcu);
    { uint32_t v = 0x4Fu; push32(c, v); }
    // 0bf9fe  lea eax, [ebp - 0x50]
    X86_AT(c, 0xbf9feu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0bfa01  push eax
    X86_AT(c, 0xbfa01u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0bfa02  call 0xd781c
    X86_AT(c, 0xbfa02u);
    push32(c, 0xbfa07u); x86_call_known(c, 0xd781cu, f_000d781c); X86_RET(c, 0xbfa07u);
    X86_TICK(c, 13);
    // 0bfa07  lea eax, [ebp - 0x50]
    X86_AT(c, 0xbfa07u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0bfa0a  push eax
    X86_AT(c, 0xbfa0au);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0bfa0b  mov edx, eax
    X86_AT(c, 0xbfa0bu);
    c.r[2] = c.r[0];
    // 0bfa0d  call 0xbf39c
    X86_AT(c, 0xbfa0du);
    push32(c, 0xbfa12u); x86_call_known(c, 0xbf39cu, f_000bf39c); X86_RET(c, 0xbfa12u);
    X86_TICK(c, 9);
    // 0bfa12  push eax
    X86_AT(c, 0xbfa12u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0bfa13  call 0xb9080
    X86_AT(c, 0xbfa13u);
    push32(c, 0xbfa18u); x86_call_known(c, 0xb9080u, f_000b9080); X86_RET(c, 0xbfa18u);
    X86_TICK(c, 23);
    // 0bfa18  add esp, 0x3c
    X86_AT(c, 0xbfa18u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x3Cu, 0, 4); }
    // 0bfa1b  mov edx, dword ptr [ebp - 0x58]
    X86_AT(c, 0xbfa1bu);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFA8u)));
    // 0bfa1e  mov dword ptr [edx + 0xa4e01], eax
    X86_AT(c, 0xbfa1eu);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4E01u)), c.r[0]);
    // 0bfa24  push edi
    X86_AT(c, 0xbfa24u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0bfa25  push 0x4f
    X86_AT(c, 0xbfa25u);
    { uint32_t v = 0x4Fu; push32(c, v); }
    // 0bfa27  lea eax, [ebp - 0x50]
    X86_AT(c, 0xbfa27u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0bfa2a  push eax
    X86_AT(c, 0xbfa2au);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0bfa2b  call 0xd781c
    X86_AT(c, 0xbfa2bu);
    push32(c, 0xbfa30u); x86_call_known(c, 0xd781cu, f_000d781c); X86_RET(c, 0xbfa30u);
    X86_TICK(c, 13);
    // 0bfa30  lea eax, [ebp - 0x50]
    X86_AT(c, 0xbfa30u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0bfa33  push eax
    X86_AT(c, 0xbfa33u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0bfa34  mov edx, eax
    X86_AT(c, 0xbfa34u);
    c.r[2] = c.r[0];
    // 0bfa36  call 0xbf39c
    X86_AT(c, 0xbfa36u);
    push32(c, 0xbfa3bu); x86_call_known(c, 0xbf39cu, f_000bf39c); X86_RET(c, 0xbfa3bu);
    X86_TICK(c, 23);
    // 0bfa3b  mov al, byte ptr [eax]
    X86_AT(c, 0xbfa3bu);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[0]))));
    // 0bfa3d  mov ecx, dword ptr [ebp - 0x58]
    X86_AT(c, 0xbfa3du);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFA8u)));
    // 0bfa40  mov byte ptr [ecx + 0xa4e05], al
    X86_AT(c, 0xbfa40u);
    wr8((c.sbase[3] + (uint32_t)(c.r[1] + 0xA4E05u)), g8(c, 0));
    // 0bfa46  push edi
    X86_AT(c, 0xbfa46u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0bfa47  push 0x4f
    X86_AT(c, 0xbfa47u);
    { uint32_t v = 0x4Fu; push32(c, v); }
    // 0bfa49  push edx
    X86_AT(c, 0xbfa49u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0bfa4a  call 0xd781c
    X86_AT(c, 0xbfa4au);
    push32(c, 0xbfa4fu); x86_call_known(c, 0xd781cu, f_000d781c); X86_RET(c, 0xbfa4fu);
    X86_TICK(c, 13);
    // 0bfa4f  lea eax, [ebp - 0x50]
    X86_AT(c, 0xbfa4fu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0bfa52  push eax
    X86_AT(c, 0xbfa52u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0bfa53  mov edx, eax
    X86_AT(c, 0xbfa53u);
    c.r[2] = c.r[0];
    // 0bfa55  call 0xbf39c
    X86_AT(c, 0xbfa55u);
    push32(c, 0xbfa5au); x86_call_known(c, 0xbf39cu, f_000bf39c); X86_RET(c, 0xbfa5au);
    X86_TICK(c, 9);
    // 0bfa5a  push eax
    X86_AT(c, 0xbfa5au);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0bfa5b  call 0xb9080
    X86_AT(c, 0xbfa5bu);
    push32(c, 0xbfa60u); x86_call_known(c, 0xb9080u, f_000b9080); X86_RET(c, 0xbfa60u);
    X86_TICK(c, 21);
    // 0bfa60  mov edx, dword ptr [ebp - 0x58]
    X86_AT(c, 0xbfa60u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFA8u)));
    // 0bfa63  mov dword ptr [edx + 0xa4e06], eax
    X86_AT(c, 0xbfa63u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4E06u)), c.r[0]);
    // 0bfa69  push edi
    X86_AT(c, 0xbfa69u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0bfa6a  push 0x4f
    X86_AT(c, 0xbfa6au);
    { uint32_t v = 0x4Fu; push32(c, v); }
    // 0bfa6c  lea eax, [ebp - 0x50]
    X86_AT(c, 0xbfa6cu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0bfa6f  push eax
    X86_AT(c, 0xbfa6fu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0bfa70  call 0xd781c
    X86_AT(c, 0xbfa70u);
    push32(c, 0xbfa75u); x86_call_known(c, 0xd781cu, f_000d781c); X86_RET(c, 0xbfa75u);
    X86_TICK(c, 13);
    // 0bfa75  lea eax, [ebp - 0x50]
    X86_AT(c, 0xbfa75u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0bfa78  push eax
    X86_AT(c, 0xbfa78u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0bfa79  mov edx, eax
    X86_AT(c, 0xbfa79u);
    c.r[2] = c.r[0];
    // 0bfa7b  call 0xbf39c
    X86_AT(c, 0xbfa7bu);
    push32(c, 0xbfa80u); x86_call_known(c, 0xbf39cu, f_000bf39c); X86_RET(c, 0xbfa80u);
    X86_TICK(c, 9);
    // 0bfa80  push eax
    X86_AT(c, 0xbfa80u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0bfa81  call 0xb9080
    X86_AT(c, 0xbfa81u);
    push32(c, 0xbfa86u); x86_call_known(c, 0xb9080u, f_000b9080); X86_RET(c, 0xbfa86u);
    X86_TICK(c, 21);
    // 0bfa86  mov edx, dword ptr [ebp - 0x58]
    X86_AT(c, 0xbfa86u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFA8u)));
    // 0bfa89  mov dword ptr [edx + 0xa4e0a], eax
    X86_AT(c, 0xbfa89u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4E0Au)), c.r[0]);
    // 0bfa8f  push edi
    X86_AT(c, 0xbfa8fu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0bfa90  push 0x4f
    X86_AT(c, 0xbfa90u);
    { uint32_t v = 0x4Fu; push32(c, v); }
    // 0bfa92  lea eax, [ebp - 0x50]
    X86_AT(c, 0xbfa92u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0bfa95  push eax
    X86_AT(c, 0xbfa95u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0bfa96  call 0xd781c
    X86_AT(c, 0xbfa96u);
    push32(c, 0xbfa9bu); x86_call_known(c, 0xd781cu, f_000d781c); X86_RET(c, 0xbfa9bu);
    X86_TICK(c, 15);
    // 0bfa9b  add esp, 0x44
    X86_AT(c, 0xbfa9bu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x44u, 0, 4); }
    // 0bfa9e  lea eax, [ebp - 0x50]
    X86_AT(c, 0xbfa9eu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0bfaa1  push eax
    X86_AT(c, 0xbfaa1u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0bfaa2  mov edx, eax
    X86_AT(c, 0xbfaa2u);
    c.r[2] = c.r[0];
    // 0bfaa4  call 0xbf39c
    X86_AT(c, 0xbfaa4u);
    push32(c, 0xbfaa9u); x86_call_known(c, 0xbf39cu, f_000bf39c); X86_RET(c, 0xbfaa9u);
    X86_TICK(c, 9);
    // 0bfaa9  push eax
    X86_AT(c, 0xbfaa9u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0bfaaa  call 0xb9080
    X86_AT(c, 0xbfaaau);
    push32(c, 0xbfaafu); x86_call_known(c, 0xb9080u, f_000b9080); X86_RET(c, 0xbfaafu);
    X86_TICK(c, 21);
    // 0bfaaf  mov edx, dword ptr [ebp - 0x58]
    X86_AT(c, 0xbfaafu);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFA8u)));
    // 0bfab2  mov dword ptr [edx + 0xa4e0e], eax
    X86_AT(c, 0xbfab2u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4E0Eu)), c.r[0]);
    // 0bfab8  push edi
    X86_AT(c, 0xbfab8u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0bfab9  push 0x4f
    X86_AT(c, 0xbfab9u);
    { uint32_t v = 0x4Fu; push32(c, v); }
    // 0bfabb  lea eax, [ebp - 0x50]
    X86_AT(c, 0xbfabbu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0bfabe  push eax
    X86_AT(c, 0xbfabeu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0bfabf  call 0xd781c
    X86_AT(c, 0xbfabfu);
    push32(c, 0xbfac4u); x86_call_known(c, 0xd781cu, f_000d781c); X86_RET(c, 0xbfac4u);
    X86_TICK(c, 15);
    // 0bfac4  add esp, 0x14
    X86_AT(c, 0xbfac4u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x14u, 0, 4); }
    // 0bfac7  lea eax, [ebp - 0x50]
    X86_AT(c, 0xbfac7u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0bfaca  push eax
    X86_AT(c, 0xbfacau);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0bfacb  mov edx, eax
    X86_AT(c, 0xbfacbu);
    c.r[2] = c.r[0];
    // 0bfacd  call 0xbf39c
    X86_AT(c, 0xbfacdu);
    push32(c, 0xbfad2u); x86_call_known(c, 0xbf39cu, f_000bf39c); X86_RET(c, 0xbfad2u);
    X86_TICK(c, 9);
    // 0bfad2  push eax
    X86_AT(c, 0xbfad2u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0bfad3  call 0xb9080
    X86_AT(c, 0xbfad3u);
    push32(c, 0xbfad8u); x86_call_known(c, 0xb9080u, f_000b9080); X86_RET(c, 0xbfad8u);
    X86_TICK(c, 32);
    // 0bfad8  mov edx, 0xa492c
    X86_AT(c, 0xbfad8u);
    c.r[2] = 0xA492Cu;
    // 0bfadd  mov ecx, esi
    X86_AT(c, 0xbfaddu);
    c.r[1] = c.r[6];
    // 0bfadf  lea edx, [ecx + ecx*2]
    X86_AT(c, 0xbfadfu);
    c.r[2] = (uint32_t)(c.r[1] + c.r[1] * 2);
    // 0bfae2  shl edx, 5
    X86_AT(c, 0xbfae2u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0bfae5  add edx, ecx
    X86_AT(c, 0xbfae5u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[1], 0, 4); }
    // 0bfae7  lea edx, [ecx + edx*2]
    X86_AT(c, 0xbfae7u);
    c.r[2] = (uint32_t)(c.r[1] + c.r[2] * 2);
    // 0bfaea  mov dword ptr [edx + 0xa4e12], eax
    X86_AT(c, 0xbfaeau);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4E12u)), c.r[0]);
    // 0bfaf0  push edi
    X86_AT(c, 0xbfaf0u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0bfaf1  push 0x4f
    X86_AT(c, 0xbfaf1u);
    { uint32_t v = 0x4Fu; push32(c, v); }
    // 0bfaf3  lea eax, [ebp - 0x50]
    X86_AT(c, 0xbfaf3u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0bfaf6  push eax
    X86_AT(c, 0xbfaf6u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0bfaf7  mov dword ptr [ebp - 0x58], edx
    X86_AT(c, 0xbfaf7u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFA8u)), c.r[2]);
    // 0bfafa  call 0xd781c
    X86_AT(c, 0xbfafau);
    push32(c, 0xbfaffu); x86_call_known(c, 0xd781cu, f_000d781c); X86_RET(c, 0xbfaffu);
    X86_TICK(c, 13);
    // 0bfaff  lea eax, [ebp - 0x50]
    X86_AT(c, 0xbfaffu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0bfb02  push eax
    X86_AT(c, 0xbfb02u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0bfb03  mov edx, eax
    X86_AT(c, 0xbfb03u);
    c.r[2] = c.r[0];
    // 0bfb05  call 0xbf39c
    X86_AT(c, 0xbfb05u);
    push32(c, 0xbfb0au); x86_call_known(c, 0xbf39cu, f_000bf39c); X86_RET(c, 0xbfb0au);
    X86_TICK(c, 9);
    // 0bfb0a  push eax
    X86_AT(c, 0xbfb0au);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0bfb0b  call 0xb9080
    X86_AT(c, 0xbfb0bu);
    push32(c, 0xbfb10u); x86_call_known(c, 0xb9080u, f_000b9080); X86_RET(c, 0xbfb10u);
    X86_TICK(c, 21);
    // 0bfb10  mov edx, dword ptr [ebp - 0x58]
    X86_AT(c, 0xbfb10u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFA8u)));
    // 0bfb13  mov dword ptr [edx + 0xa4e16], eax
    X86_AT(c, 0xbfb13u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4E16u)), c.r[0]);
    // 0bfb19  push edi
    X86_AT(c, 0xbfb19u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0bfb1a  push 0x4f
    X86_AT(c, 0xbfb1au);
    { uint32_t v = 0x4Fu; push32(c, v); }
    // 0bfb1c  lea eax, [ebp - 0x50]
    X86_AT(c, 0xbfb1cu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0bfb1f  push eax
    X86_AT(c, 0xbfb1fu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0bfb20  call 0xd781c
    X86_AT(c, 0xbfb20u);
    push32(c, 0xbfb25u); x86_call_known(c, 0xd781cu, f_000d781c); X86_RET(c, 0xbfb25u);
    X86_TICK(c, 13);
    // 0bfb25  lea eax, [ebp - 0x50]
    X86_AT(c, 0xbfb25u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0bfb28  push eax
    X86_AT(c, 0xbfb28u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0bfb29  mov edx, eax
    X86_AT(c, 0xbfb29u);
    c.r[2] = c.r[0];
    // 0bfb2b  call 0xbf39c
    X86_AT(c, 0xbfb2bu);
    push32(c, 0xbfb30u); x86_call_known(c, 0xbf39cu, f_000bf39c); X86_RET(c, 0xbfb30u);
    X86_TICK(c, 9);
    // 0bfb30  push eax
    X86_AT(c, 0xbfb30u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0bfb31  call 0xb9080
    X86_AT(c, 0xbfb31u);
    push32(c, 0xbfb36u); x86_call_known(c, 0xb9080u, f_000b9080); X86_RET(c, 0xbfb36u);
    X86_TICK(c, 21);
    // 0bfb36  mov edx, dword ptr [ebp - 0x58]
    X86_AT(c, 0xbfb36u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFA8u)));
    // 0bfb39  mov dword ptr [edx + 0xa4e1a], eax
    X86_AT(c, 0xbfb39u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4E1Au)), c.r[0]);
    // 0bfb3f  push edi
    X86_AT(c, 0xbfb3fu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0bfb40  push 0x4f
    X86_AT(c, 0xbfb40u);
    { uint32_t v = 0x4Fu; push32(c, v); }
    // 0bfb42  lea eax, [ebp - 0x50]
    X86_AT(c, 0xbfb42u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0bfb45  push eax
    X86_AT(c, 0xbfb45u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0bfb46  call 0xd781c
    X86_AT(c, 0xbfb46u);
    push32(c, 0xbfb4bu); x86_call_known(c, 0xd781cu, f_000d781c); X86_RET(c, 0xbfb4bu);
    X86_TICK(c, 15);
    // 0bfb4b  add esp, 0x3c
    X86_AT(c, 0xbfb4bu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x3Cu, 0, 4); }
    // 0bfb4e  lea eax, [ebp - 0x50]
    X86_AT(c, 0xbfb4eu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0bfb51  push eax
    X86_AT(c, 0xbfb51u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0bfb52  mov edx, eax
    X86_AT(c, 0xbfb52u);
    c.r[2] = c.r[0];
    // 0bfb54  call 0xbf39c
    X86_AT(c, 0xbfb54u);
    push32(c, 0xbfb59u); x86_call_known(c, 0xbf39cu, f_000bf39c); X86_RET(c, 0xbfb59u);
    X86_TICK(c, 9);
    // 0bfb59  push eax
    X86_AT(c, 0xbfb59u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0bfb5a  call 0xb9080
    X86_AT(c, 0xbfb5au);
    push32(c, 0xbfb5fu); x86_call_known(c, 0xb9080u, f_000b9080); X86_RET(c, 0xbfb5fu);
    X86_TICK(c, 21);
    // 0bfb5f  mov edx, dword ptr [ebp - 0x58]
    X86_AT(c, 0xbfb5fu);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFA8u)));
    // 0bfb62  mov dword ptr [edx + 0xa4e1e], eax
    X86_AT(c, 0xbfb62u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4E1Eu)), c.r[0]);
    // 0bfb68  push edi
    X86_AT(c, 0xbfb68u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0bfb69  push 0x4f
    X86_AT(c, 0xbfb69u);
    { uint32_t v = 0x4Fu; push32(c, v); }
    // 0bfb6b  lea eax, [ebp - 0x50]
    X86_AT(c, 0xbfb6bu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0bfb6e  push eax
    X86_AT(c, 0xbfb6eu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0bfb6f  call 0xd781c
    X86_AT(c, 0xbfb6fu);
    push32(c, 0xbfb74u); x86_call_known(c, 0xd781cu, f_000d781c); X86_RET(c, 0xbfb74u);
    X86_TICK(c, 13);
    // 0bfb74  lea eax, [ebp - 0x50]
    X86_AT(c, 0xbfb74u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0bfb77  push eax
    X86_AT(c, 0xbfb77u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0bfb78  mov edx, eax
    X86_AT(c, 0xbfb78u);
    c.r[2] = c.r[0];
    // 0bfb7a  call 0xbf39c
    X86_AT(c, 0xbfb7au);
    push32(c, 0xbfb7fu); x86_call_known(c, 0xbf39cu, f_000bf39c); X86_RET(c, 0xbfb7fu);
    X86_TICK(c, 9);
    // 0bfb7f  push eax
    X86_AT(c, 0xbfb7fu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0bfb80  call 0xb9080
    X86_AT(c, 0xbfb80u);
    push32(c, 0xbfb85u); x86_call_known(c, 0xb9080u, f_000b9080); X86_RET(c, 0xbfb85u);
    X86_TICK(c, 21);
    // 0bfb85  mov edx, dword ptr [ebp - 0x58]
    X86_AT(c, 0xbfb85u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFA8u)));
    // 0bfb88  mov dword ptr [edx + 0xa4e22], eax
    X86_AT(c, 0xbfb88u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4E22u)), c.r[0]);
    // 0bfb8e  push edi
    X86_AT(c, 0xbfb8eu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0bfb8f  push 0x4f
    X86_AT(c, 0xbfb8fu);
    { uint32_t v = 0x4Fu; push32(c, v); }
    // 0bfb91  lea eax, [ebp - 0x50]
    X86_AT(c, 0xbfb91u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0bfb94  push eax
    X86_AT(c, 0xbfb94u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0bfb95  call 0xd781c
    X86_AT(c, 0xbfb95u);
    push32(c, 0xbfb9au); x86_call_known(c, 0xd781cu, f_000d781c); X86_RET(c, 0xbfb9au);
    X86_TICK(c, 13);
    // 0bfb9a  lea eax, [ebp - 0x50]
    X86_AT(c, 0xbfb9au);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0bfb9d  push eax
    X86_AT(c, 0xbfb9du);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0bfb9e  mov edx, eax
    X86_AT(c, 0xbfb9eu);
    c.r[2] = c.r[0];
    // 0bfba0  call 0xbf39c
    X86_AT(c, 0xbfba0u);
    push32(c, 0xbfba5u); x86_call_known(c, 0xbf39cu, f_000bf39c); X86_RET(c, 0xbfba5u);
    X86_TICK(c, 23);
    // 0bfba5  mov al, byte ptr [eax]
    X86_AT(c, 0xbfba5u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[0]))));
    // 0bfba7  mov ecx, dword ptr [ebp - 0x58]
    X86_AT(c, 0xbfba7u);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFA8u)));
    // 0bfbaa  mov byte ptr [ecx + 0xa4e26], al
    X86_AT(c, 0xbfbaau);
    wr8((c.sbase[3] + (uint32_t)(c.r[1] + 0xA4E26u)), g8(c, 0));
    // 0bfbb0  push edi
    X86_AT(c, 0xbfbb0u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0bfbb1  push 0x4f
    X86_AT(c, 0xbfbb1u);
    { uint32_t v = 0x4Fu; push32(c, v); }
    // 0bfbb3  push edx
    X86_AT(c, 0xbfbb3u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0bfbb4  call 0xd781c
    X86_AT(c, 0xbfbb4u);
    push32(c, 0xbfbb9u); x86_call_known(c, 0xd781cu, f_000d781c); X86_RET(c, 0xbfbb9u);
    X86_TICK(c, 13);
    // 0bfbb9  lea eax, [ebp - 0x50]
    X86_AT(c, 0xbfbb9u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0bfbbc  push eax
    X86_AT(c, 0xbfbbcu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0bfbbd  mov edx, eax
    X86_AT(c, 0xbfbbdu);
    c.r[2] = c.r[0];
    // 0bfbbf  call 0xbf39c
    X86_AT(c, 0xbfbbfu);
    push32(c, 0xbfbc4u); x86_call_known(c, 0xbf39cu, f_000bf39c); X86_RET(c, 0xbfbc4u);
    X86_TICK(c, 11);
    // 0bfbc4  add esp, 0x3c
    X86_AT(c, 0xbfbc4u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x3Cu, 0, 4); }
    // 0bfbc7  push eax
    X86_AT(c, 0xbfbc7u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0bfbc8  call 0xb9080
    X86_AT(c, 0xbfbc8u);
    push32(c, 0xbfbcdu); x86_call_known(c, 0xb9080u, f_000b9080); X86_RET(c, 0xbfbcdu);
    X86_TICK(c, 21);
    // 0bfbcd  mov edx, dword ptr [ebp - 0x58]
    X86_AT(c, 0xbfbcdu);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFA8u)));
    // 0bfbd0  mov dword ptr [edx + 0xa4e27], eax
    X86_AT(c, 0xbfbd0u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4E27u)), c.r[0]);
    // 0bfbd6  push edi
    X86_AT(c, 0xbfbd6u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0bfbd7  push 0x4f
    X86_AT(c, 0xbfbd7u);
    { uint32_t v = 0x4Fu; push32(c, v); }
    // 0bfbd9  lea eax, [ebp - 0x50]
    X86_AT(c, 0xbfbd9u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0bfbdc  push eax
    X86_AT(c, 0xbfbdcu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0bfbdd  call 0xd781c
    X86_AT(c, 0xbfbddu);
    push32(c, 0xbfbe2u); x86_call_known(c, 0xd781cu, f_000d781c); X86_RET(c, 0xbfbe2u);
    X86_TICK(c, 11);
    // 0bfbe2  lea eax, [ebp - 0x50]
    X86_AT(c, 0xbfbe2u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0bfbe5  push eax
    X86_AT(c, 0xbfbe5u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0bfbe6  call 0xbf39c
    X86_AT(c, 0xbfbe6u);
    push32(c, 0xbfbebu); x86_call_known(c, 0xbf39cu, f_000bf39c); X86_RET(c, 0xbfbebu);
    X86_TICK(c, 9);
    // 0bfbeb  push eax
    X86_AT(c, 0xbfbebu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0bfbec  call 0xb9080
    X86_AT(c, 0xbfbecu);
    push32(c, 0xbfbf1u); x86_call_known(c, 0xb9080u, f_000b9080); X86_RET(c, 0xbfbf1u);
    X86_TICK(c, 23);
    // 0bfbf1  mov edx, dword ptr [ebp - 0x58]
    X86_AT(c, 0xbfbf1u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFA8u)));
    // 0bfbf4  mov dword ptr [edx + 0xa4e2b], eax
    X86_AT(c, 0xbfbf4u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4E2Bu)), c.r[0]);
    // 0bfbfa  add esp, 0x18
    X86_AT(c, 0xbfbfau);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x18u, 0, 4); }
    // 0bfbfd  push edi
    X86_AT(c, 0xbfbfdu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0bfbfe  push 0x4f
    X86_AT(c, 0xbfbfeu);
    { uint32_t v = 0x4Fu; push32(c, v); }
    // 0bfc00  lea eax, [ebp - 0x50]
    X86_AT(c, 0xbfc00u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0bfc03  push eax
    X86_AT(c, 0xbfc03u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0bfc04  call 0xd781c
    X86_AT(c, 0xbfc04u);
    push32(c, 0xbfc09u); x86_call_known(c, 0xd781cu, f_000d781c); X86_RET(c, 0xbfc09u);
    X86_TICK(c, 13);
    // 0bfc09  lea eax, [ebp - 0x50]
    X86_AT(c, 0xbfc09u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0bfc0c  push eax
    X86_AT(c, 0xbfc0cu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0bfc0d  mov edx, eax
    X86_AT(c, 0xbfc0du);
    c.r[2] = c.r[0];
    // 0bfc0f  call 0xbf39c
    X86_AT(c, 0xbfc0fu);
    push32(c, 0xbfc14u); x86_call_known(c, 0xbf39cu, f_000bf39c); X86_RET(c, 0xbfc14u);
    X86_TICK(c, 9);
    // 0bfc14  push eax
    X86_AT(c, 0xbfc14u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0bfc15  call 0xb9080
    X86_AT(c, 0xbfc15u);
    push32(c, 0xbfc1au); x86_call_known(c, 0xb9080u, f_000b9080); X86_RET(c, 0xbfc1au);
    X86_TICK(c, 30);
    // 0bfc1a  mov edx, esi
    X86_AT(c, 0xbfc1au);
    c.r[2] = c.r[6];
    // 0bfc1c  lea ecx, [edx + edx*2]
    X86_AT(c, 0xbfc1cu);
    c.r[1] = (uint32_t)(c.r[2] + c.r[2] * 2);
    // 0bfc1f  shl ecx, 5
    X86_AT(c, 0xbfc1fu);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[1] = r; }
    // 0bfc22  add ecx, edx
    X86_AT(c, 0xbfc22u);
    { uint32_t v = c.r[1]; c.r[1] = x86_add(c, v, c.r[2], 0, 4); }
    // 0bfc24  lea ecx, [edx + ecx*2]
    X86_AT(c, 0xbfc24u);
    c.r[1] = (uint32_t)(c.r[2] + c.r[1] * 2);
    // 0bfc27  mov dword ptr [ecx + 0xa4e2f], eax
    X86_AT(c, 0xbfc27u);
    wr32((c.sbase[3] + (uint32_t)(c.r[1] + 0xA4E2Fu)), c.r[0]);
    // 0bfc2d  push edi
    X86_AT(c, 0xbfc2du);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0bfc2e  push 0x4f
    X86_AT(c, 0xbfc2eu);
    { uint32_t v = 0x4Fu; push32(c, v); }
    // 0bfc30  lea eax, [ebp - 0x50]
    X86_AT(c, 0xbfc30u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0bfc33  push eax
    X86_AT(c, 0xbfc33u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0bfc34  mov dword ptr [ebp - 0x58], ecx
    X86_AT(c, 0xbfc34u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFA8u)), c.r[1]);
    // 0bfc37  call 0xd781c
    X86_AT(c, 0xbfc37u);
    push32(c, 0xbfc3cu); x86_call_known(c, 0xd781cu, f_000d781c); X86_RET(c, 0xbfc3cu);
    X86_TICK(c, 13);
    // 0bfc3c  lea eax, [ebp - 0x50]
    X86_AT(c, 0xbfc3cu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0bfc3f  push eax
    X86_AT(c, 0xbfc3fu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0bfc40  mov edx, eax
    X86_AT(c, 0xbfc40u);
    c.r[2] = c.r[0];
    // 0bfc42  call 0xbf39c
    X86_AT(c, 0xbfc42u);
    push32(c, 0xbfc47u); x86_call_known(c, 0xbf39cu, f_000bf39c); X86_RET(c, 0xbfc47u);
    X86_TICK(c, 9);
    // 0bfc47  push eax
    X86_AT(c, 0xbfc47u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0bfc48  call 0xb9080
    X86_AT(c, 0xbfc48u);
    push32(c, 0xbfc4du); x86_call_known(c, 0xb9080u, f_000b9080); X86_RET(c, 0xbfc4du);
    X86_TICK(c, 21);
    // 0bfc4d  mov edx, dword ptr [ebp - 0x58]
    X86_AT(c, 0xbfc4du);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFA8u)));
    // 0bfc50  mov dword ptr [edx + 0xa4e33], eax
    X86_AT(c, 0xbfc50u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4E33u)), c.r[0]);
    // 0bfc56  push edi
    X86_AT(c, 0xbfc56u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0bfc57  push 0x4f
    X86_AT(c, 0xbfc57u);
    { uint32_t v = 0x4Fu; push32(c, v); }
    // 0bfc59  lea eax, [ebp - 0x50]
    X86_AT(c, 0xbfc59u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0bfc5c  push eax
    X86_AT(c, 0xbfc5cu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0bfc5d  call 0xd781c
    X86_AT(c, 0xbfc5du);
    push32(c, 0xbfc62u); x86_call_known(c, 0xd781cu, f_000d781c); X86_RET(c, 0xbfc62u);
    X86_TICK(c, 13);
    // 0bfc62  lea eax, [ebp - 0x50]
    X86_AT(c, 0xbfc62u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0bfc65  push eax
    X86_AT(c, 0xbfc65u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0bfc66  mov edx, eax
    X86_AT(c, 0xbfc66u);
    c.r[2] = c.r[0];
    // 0bfc68  call 0xbf39c
    X86_AT(c, 0xbfc68u);
    push32(c, 0xbfc6du); x86_call_known(c, 0xbf39cu, f_000bf39c); X86_RET(c, 0xbfc6du);
    X86_TICK(c, 9);
    // 0bfc6d  push eax
    X86_AT(c, 0xbfc6du);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0bfc6e  call 0xb9080
    X86_AT(c, 0xbfc6eu);
    push32(c, 0xbfc73u); x86_call_known(c, 0xb9080u, f_000b9080); X86_RET(c, 0xbfc73u);
    X86_TICK(c, 23);
    // 0bfc73  add esp, 0x3c
    X86_AT(c, 0xbfc73u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x3Cu, 0, 4); }
    // 0bfc76  mov edx, dword ptr [ebp - 0x58]
    X86_AT(c, 0xbfc76u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFA8u)));
    // 0bfc79  mov dword ptr [edx + 0xa4e37], eax
    X86_AT(c, 0xbfc79u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4E37u)), c.r[0]);
    // 0bfc7f  push edi
    X86_AT(c, 0xbfc7fu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0bfc80  push 0x4f
    X86_AT(c, 0xbfc80u);
    { uint32_t v = 0x4Fu; push32(c, v); }
    // 0bfc82  lea eax, [ebp - 0x50]
    X86_AT(c, 0xbfc82u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0bfc85  push eax
    X86_AT(c, 0xbfc85u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0bfc86  call 0xd781c
    X86_AT(c, 0xbfc86u);
    push32(c, 0xbfc8bu); x86_call_known(c, 0xd781cu, f_000d781c); X86_RET(c, 0xbfc8bu);
    X86_TICK(c, 13);
    // 0bfc8b  lea eax, [ebp - 0x50]
    X86_AT(c, 0xbfc8bu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0bfc8e  push eax
    X86_AT(c, 0xbfc8eu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0bfc8f  mov edx, eax
    X86_AT(c, 0xbfc8fu);
    c.r[2] = c.r[0];
    // 0bfc91  call 0xbf39c
    X86_AT(c, 0xbfc91u);
    push32(c, 0xbfc96u); x86_call_known(c, 0xbf39cu, f_000bf39c); X86_RET(c, 0xbfc96u);
    X86_TICK(c, 9);
    // 0bfc96  push eax
    X86_AT(c, 0xbfc96u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0bfc97  call 0xb9080
    X86_AT(c, 0xbfc97u);
    push32(c, 0xbfc9cu); x86_call_known(c, 0xb9080u, f_000b9080); X86_RET(c, 0xbfc9cu);
    X86_TICK(c, 21);
    // 0bfc9c  mov edx, dword ptr [ebp - 0x58]
    X86_AT(c, 0xbfc9cu);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFA8u)));
    // 0bfc9f  mov dword ptr [edx + 0xa4e3b], eax
    X86_AT(c, 0xbfc9fu);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4E3Bu)), c.r[0]);
    // 0bfca5  push edi
    X86_AT(c, 0xbfca5u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0bfca6  push 0x4f
    X86_AT(c, 0xbfca6u);
    { uint32_t v = 0x4Fu; push32(c, v); }
    // 0bfca8  lea eax, [ebp - 0x50]
    X86_AT(c, 0xbfca8u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0bfcab  push eax
    X86_AT(c, 0xbfcabu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0bfcac  call 0xd781c
    X86_AT(c, 0xbfcacu);
    push32(c, 0xbfcb1u); x86_call_known(c, 0xd781cu, f_000d781c); X86_RET(c, 0xbfcb1u);
    X86_TICK(c, 13);
    // 0bfcb1  lea eax, [ebp - 0x50]
    X86_AT(c, 0xbfcb1u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0bfcb4  push eax
    X86_AT(c, 0xbfcb4u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0bfcb5  mov edx, eax
    X86_AT(c, 0xbfcb5u);
    c.r[2] = c.r[0];
    // 0bfcb7  call 0xbf39c
    X86_AT(c, 0xbfcb7u);
    push32(c, 0xbfcbcu); x86_call_known(c, 0xbf39cu, f_000bf39c); X86_RET(c, 0xbfcbcu);
    X86_TICK(c, 9);
    // 0bfcbc  push eax
    X86_AT(c, 0xbfcbcu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0bfcbd  call 0xb9080
    X86_AT(c, 0xbfcbdu);
    push32(c, 0xbfcc2u); x86_call_known(c, 0xb9080u, f_000b9080); X86_RET(c, 0xbfcc2u);
    X86_TICK(c, 21);
    // 0bfcc2  mov edx, dword ptr [ebp - 0x58]
    X86_AT(c, 0xbfcc2u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFA8u)));
    // 0bfcc5  mov dword ptr [edx + 0xa4e3f], eax
    X86_AT(c, 0xbfcc5u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4E3Fu)), c.r[0]);
    // 0bfccb  push edi
    X86_AT(c, 0xbfccbu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0bfccc  push 0x4f
    X86_AT(c, 0xbfcccu);
    { uint32_t v = 0x4Fu; push32(c, v); }
    // 0bfcce  lea eax, [ebp - 0x50]
    X86_AT(c, 0xbfcceu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0bfcd1  push eax
    X86_AT(c, 0xbfcd1u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0bfcd2  call 0xd781c
    X86_AT(c, 0xbfcd2u);
    push32(c, 0xbfcd7u); x86_call_known(c, 0xd781cu, f_000d781c); X86_RET(c, 0xbfcd7u);
    X86_TICK(c, 13);
    // 0bfcd7  lea eax, [ebp - 0x50]
    X86_AT(c, 0xbfcd7u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0bfcda  push eax
    X86_AT(c, 0xbfcdau);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0bfcdb  mov edx, eax
    X86_AT(c, 0xbfcdbu);
    c.r[2] = c.r[0];
    // 0bfcdd  call 0xbf39c
    X86_AT(c, 0xbfcddu);
    push32(c, 0xbfce2u); x86_call_known(c, 0xbf39cu, f_000bf39c); X86_RET(c, 0xbfce2u);
    X86_TICK(c, 9);
    // 0bfce2  push eax
    X86_AT(c, 0xbfce2u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0bfce3  call 0xb9080
    X86_AT(c, 0xbfce3u);
    push32(c, 0xbfce8u); x86_call_known(c, 0xb9080u, f_000b9080); X86_RET(c, 0xbfce8u);
    X86_TICK(c, 23);
    // 0bfce8  add esp, 0x3c
    X86_AT(c, 0xbfce8u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x3Cu, 0, 4); }
    // 0bfceb  mov edx, dword ptr [ebp - 0x58]
    X86_AT(c, 0xbfcebu);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFA8u)));
    // 0bfcee  mov dword ptr [edx + 0xa4e43], eax
    X86_AT(c, 0xbfceeu);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4E43u)), c.r[0]);
    // 0bfcf4  push edi
    X86_AT(c, 0xbfcf4u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0bfcf5  push 0x4f
    X86_AT(c, 0xbfcf5u);
    { uint32_t v = 0x4Fu; push32(c, v); }
    // 0bfcf7  lea eax, [ebp - 0x50]
    X86_AT(c, 0xbfcf7u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0bfcfa  push eax
    X86_AT(c, 0xbfcfau);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0bfcfb  call 0xd781c
    X86_AT(c, 0xbfcfbu);
    push32(c, 0xbfd00u); x86_call_known(c, 0xd781cu, f_000d781c); X86_RET(c, 0xbfd00u);
    X86_TICK(c, 13);
    // 0bfd00  lea eax, [ebp - 0x50]
    X86_AT(c, 0xbfd00u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0bfd03  push eax
    X86_AT(c, 0xbfd03u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0bfd04  mov edx, eax
    X86_AT(c, 0xbfd04u);
    c.r[2] = c.r[0];
    // 0bfd06  call 0xbf39c
    X86_AT(c, 0xbfd06u);
    push32(c, 0xbfd0bu); x86_call_known(c, 0xbf39cu, f_000bf39c); X86_RET(c, 0xbfd0bu);
    X86_TICK(c, 9);
    // 0bfd0b  push eax
    X86_AT(c, 0xbfd0bu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0bfd0c  call 0xb9080
    X86_AT(c, 0xbfd0cu);
    push32(c, 0xbfd11u); x86_call_known(c, 0xb9080u, f_000b9080); X86_RET(c, 0xbfd11u);
    X86_TICK(c, 21);
    // 0bfd11  mov edx, dword ptr [ebp - 0x58]
    X86_AT(c, 0xbfd11u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFA8u)));
    // 0bfd14  mov dword ptr [edx + 0xa4e47], eax
    X86_AT(c, 0xbfd14u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4E47u)), c.r[0]);
    // 0bfd1a  push edi
    X86_AT(c, 0xbfd1au);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0bfd1b  push 0x4f
    X86_AT(c, 0xbfd1bu);
    { uint32_t v = 0x4Fu; push32(c, v); }
    // 0bfd1d  lea eax, [ebp - 0x50]
    X86_AT(c, 0xbfd1du);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0bfd20  push eax
    X86_AT(c, 0xbfd20u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0bfd21  call 0xd781c
    X86_AT(c, 0xbfd21u);
    push32(c, 0xbfd26u); x86_call_known(c, 0xd781cu, f_000d781c); X86_RET(c, 0xbfd26u);
    X86_TICK(c, 15);
    // 0bfd26  add esp, 0x20
    X86_AT(c, 0xbfd26u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x20u, 0, 4); }
    // 0bfd29  lea eax, [ebp - 0x50]
    X86_AT(c, 0xbfd29u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0bfd2c  push eax
    X86_AT(c, 0xbfd2cu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0bfd2d  mov edx, eax
    X86_AT(c, 0xbfd2du);
    c.r[2] = c.r[0];
    // 0bfd2f  call 0xbf39c
    X86_AT(c, 0xbfd2fu);
    push32(c, 0xbfd34u); x86_call_known(c, 0xbf39cu, f_000bf39c); X86_RET(c, 0xbfd34u);
    X86_TICK(c, 9);
    // 0bfd34  push eax
    X86_AT(c, 0xbfd34u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0bfd35  call 0xb9080
    X86_AT(c, 0xbfd35u);
    push32(c, 0xbfd3au); x86_call_known(c, 0xb9080u, f_000b9080); X86_RET(c, 0xbfd3au);
    X86_TICK(c, 32);
    // 0bfd3a  mov edx, 0xa492c
    X86_AT(c, 0xbfd3au);
    c.r[2] = 0xA492Cu;
    // 0bfd3f  mov ecx, esi
    X86_AT(c, 0xbfd3fu);
    c.r[1] = c.r[6];
    // 0bfd41  lea edx, [ecx + ecx*2]
    X86_AT(c, 0xbfd41u);
    c.r[2] = (uint32_t)(c.r[1] + c.r[1] * 2);
    // 0bfd44  shl edx, 5
    X86_AT(c, 0xbfd44u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0bfd47  add edx, ecx
    X86_AT(c, 0xbfd47u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[1], 0, 4); }
    // 0bfd49  lea edx, [ecx + edx*2]
    X86_AT(c, 0xbfd49u);
    c.r[2] = (uint32_t)(c.r[1] + c.r[2] * 2);
    // 0bfd4c  mov dword ptr [edx + 0xa4e4b], eax
    X86_AT(c, 0xbfd4cu);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4E4Bu)), c.r[0]);
    // 0bfd52  push edi
    X86_AT(c, 0xbfd52u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0bfd53  push 0x4f
    X86_AT(c, 0xbfd53u);
    { uint32_t v = 0x4Fu; push32(c, v); }
    // 0bfd55  lea eax, [ebp - 0x50]
    X86_AT(c, 0xbfd55u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0bfd58  push eax
    X86_AT(c, 0xbfd58u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0bfd59  mov dword ptr [ebp - 0x58], edx
    X86_AT(c, 0xbfd59u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFA8u)), c.r[2]);
    // 0bfd5c  call 0xd781c
    X86_AT(c, 0xbfd5cu);
    push32(c, 0xbfd61u); x86_call_known(c, 0xd781cu, f_000d781c); X86_RET(c, 0xbfd61u);
    X86_TICK(c, 13);
    // 0bfd61  lea eax, [ebp - 0x50]
    X86_AT(c, 0xbfd61u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0bfd64  push eax
    X86_AT(c, 0xbfd64u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0bfd65  mov edx, eax
    X86_AT(c, 0xbfd65u);
    c.r[2] = c.r[0];
    // 0bfd67  call 0xbf39c
    X86_AT(c, 0xbfd67u);
    push32(c, 0xbfd6cu); x86_call_known(c, 0xbf39cu, f_000bf39c); X86_RET(c, 0xbfd6cu);
    X86_TICK(c, 9);
    // 0bfd6c  push eax
    X86_AT(c, 0xbfd6cu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0bfd6d  call 0xb9080
    X86_AT(c, 0xbfd6du);
    push32(c, 0xbfd72u); x86_call_known(c, 0xb9080u, f_000b9080); X86_RET(c, 0xbfd72u);
    X86_TICK(c, 21);
    // 0bfd72  mov edx, dword ptr [ebp - 0x58]
    X86_AT(c, 0xbfd72u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFA8u)));
    // 0bfd75  mov dword ptr [edx + 0xa4e4f], eax
    X86_AT(c, 0xbfd75u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4E4Fu)), c.r[0]);
    // 0bfd7b  push edi
    X86_AT(c, 0xbfd7bu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0bfd7c  push 0x4f
    X86_AT(c, 0xbfd7cu);
    { uint32_t v = 0x4Fu; push32(c, v); }
    // 0bfd7e  lea eax, [ebp - 0x50]
    X86_AT(c, 0xbfd7eu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0bfd81  push eax
    X86_AT(c, 0xbfd81u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0bfd82  call 0xd781c
    X86_AT(c, 0xbfd82u);
    push32(c, 0xbfd87u); x86_call_known(c, 0xd781cu, f_000d781c); X86_RET(c, 0xbfd87u);
    X86_TICK(c, 13);
    // 0bfd87  lea eax, [ebp - 0x50]
    X86_AT(c, 0xbfd87u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0bfd8a  push eax
    X86_AT(c, 0xbfd8au);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0bfd8b  mov edx, eax
    X86_AT(c, 0xbfd8bu);
    c.r[2] = c.r[0];
    // 0bfd8d  call 0xbf39c
    X86_AT(c, 0xbfd8du);
    push32(c, 0xbfd92u); x86_call_known(c, 0xbf39cu, f_000bf39c); X86_RET(c, 0xbfd92u);
    X86_TICK(c, 9);
    // 0bfd92  push eax
    X86_AT(c, 0xbfd92u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0bfd93  call 0xb9080
    X86_AT(c, 0xbfd93u);
    push32(c, 0xbfd98u); x86_call_known(c, 0xb9080u, f_000b9080); X86_RET(c, 0xbfd98u);
    X86_TICK(c, 21);
    // 0bfd98  mov edx, dword ptr [ebp - 0x58]
    X86_AT(c, 0xbfd98u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFA8u)));
    // 0bfd9b  mov dword ptr [edx + 0xa4e53], eax
    X86_AT(c, 0xbfd9bu);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4E53u)), c.r[0]);
    // 0bfda1  push edi
    X86_AT(c, 0xbfda1u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0bfda2  push 0x4f
    X86_AT(c, 0xbfda2u);
    { uint32_t v = 0x4Fu; push32(c, v); }
    // 0bfda4  lea eax, [ebp - 0x50]
    X86_AT(c, 0xbfda4u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0bfda7  push eax
    X86_AT(c, 0xbfda7u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0bfda8  call 0xd781c
    X86_AT(c, 0xbfda8u);
    push32(c, 0xbfdadu); x86_call_known(c, 0xd781cu, f_000d781c); X86_RET(c, 0xbfdadu);
    X86_TICK(c, 15);
    // 0bfdad  add esp, 0x3c
    X86_AT(c, 0xbfdadu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x3Cu, 0, 4); }
    // 0bfdb0  lea eax, [ebp - 0x50]
    X86_AT(c, 0xbfdb0u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0bfdb3  push eax
    X86_AT(c, 0xbfdb3u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0bfdb4  mov edx, eax
    X86_AT(c, 0xbfdb4u);
    c.r[2] = c.r[0];
    // 0bfdb6  call 0xbf39c
    X86_AT(c, 0xbfdb6u);
    push32(c, 0xbfdbbu); x86_call_known(c, 0xbf39cu, f_000bf39c); X86_RET(c, 0xbfdbbu);
    X86_TICK(c, 9);
    // 0bfdbb  push eax
    X86_AT(c, 0xbfdbbu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0bfdbc  call 0xb9080
    X86_AT(c, 0xbfdbcu);
    push32(c, 0xbfdc1u); x86_call_known(c, 0xb9080u, f_000b9080); X86_RET(c, 0xbfdc1u);
    X86_TICK(c, 21);
    // 0bfdc1  mov edx, dword ptr [ebp - 0x58]
    X86_AT(c, 0xbfdc1u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFA8u)));
    // 0bfdc4  mov dword ptr [edx + 0xa4e57], eax
    X86_AT(c, 0xbfdc4u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4E57u)), c.r[0]);
    // 0bfdca  push edi
    X86_AT(c, 0xbfdcau);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0bfdcb  push 0x4f
    X86_AT(c, 0xbfdcbu);
    { uint32_t v = 0x4Fu; push32(c, v); }
    // 0bfdcd  lea eax, [ebp - 0x50]
    X86_AT(c, 0xbfdcdu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0bfdd0  push eax
    X86_AT(c, 0xbfdd0u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0bfdd1  call 0xd781c
    X86_AT(c, 0xbfdd1u);
    push32(c, 0xbfdd6u); x86_call_known(c, 0xd781cu, f_000d781c); X86_RET(c, 0xbfdd6u);
    X86_TICK(c, 13);
    // 0bfdd6  lea eax, [ebp - 0x50]
    X86_AT(c, 0xbfdd6u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0bfdd9  push eax
    X86_AT(c, 0xbfdd9u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0bfdda  mov edx, eax
    X86_AT(c, 0xbfddau);
    c.r[2] = c.r[0];
    // 0bfddc  call 0xbf39c
    X86_AT(c, 0xbfddcu);
    push32(c, 0xbfde1u); x86_call_known(c, 0xbf39cu, f_000bf39c); X86_RET(c, 0xbfde1u);
    X86_TICK(c, 9);
    // 0bfde1  push eax
    X86_AT(c, 0xbfde1u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0bfde2  call 0xb9080
    X86_AT(c, 0xbfde2u);
    push32(c, 0xbfde7u); x86_call_known(c, 0xb9080u, f_000b9080); X86_RET(c, 0xbfde7u);
    X86_TICK(c, 21);
    // 0bfde7  mov edx, dword ptr [ebp - 0x58]
    X86_AT(c, 0xbfde7u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFA8u)));
    // 0bfdea  mov dword ptr [edx + 0xa4e5b], eax
    X86_AT(c, 0xbfdeau);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4E5Bu)), c.r[0]);
    // 0bfdf0  push edi
    X86_AT(c, 0xbfdf0u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0bfdf1  push 0x4f
    X86_AT(c, 0xbfdf1u);
    { uint32_t v = 0x4Fu; push32(c, v); }
    // 0bfdf3  lea eax, [ebp - 0x50]
    X86_AT(c, 0xbfdf3u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0bfdf6  push eax
    X86_AT(c, 0xbfdf6u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0bfdf7  call 0xd781c
    X86_AT(c, 0xbfdf7u);
    push32(c, 0xbfdfcu); x86_call_known(c, 0xd781cu, f_000d781c); X86_RET(c, 0xbfdfcu);
    X86_TICK(c, 13);
    // 0bfdfc  lea eax, [ebp - 0x50]
    X86_AT(c, 0xbfdfcu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0bfdff  push eax
    X86_AT(c, 0xbfdffu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0bfe00  mov edx, eax
    X86_AT(c, 0xbfe00u);
    c.r[2] = c.r[0];
    // 0bfe02  call 0xbf39c
    X86_AT(c, 0xbfe02u);
    push32(c, 0xbfe07u); x86_call_known(c, 0xbf39cu, f_000bf39c); X86_RET(c, 0xbfe07u);
    X86_TICK(c, 9);
    // 0bfe07  push eax
    X86_AT(c, 0xbfe07u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0bfe08  call 0xb9080
    X86_AT(c, 0xbfe08u);
    push32(c, 0xbfe0du); x86_call_known(c, 0xb9080u, f_000b9080); X86_RET(c, 0xbfe0du);
    X86_TICK(c, 21);
    // 0bfe0d  mov edx, dword ptr [ebp - 0x58]
    X86_AT(c, 0xbfe0du);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFA8u)));
    // 0bfe10  mov dword ptr [edx + 0xa4e5f], eax
    X86_AT(c, 0xbfe10u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4E5Fu)), c.r[0]);
    // 0bfe16  push edi
    X86_AT(c, 0xbfe16u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0bfe17  push 0x4f
    X86_AT(c, 0xbfe17u);
    { uint32_t v = 0x4Fu; push32(c, v); }
    // 0bfe19  lea eax, [ebp - 0x50]
    X86_AT(c, 0xbfe19u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0bfe1c  push eax
    X86_AT(c, 0xbfe1cu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0bfe1d  call 0xd781c
    X86_AT(c, 0xbfe1du);
    push32(c, 0xbfe22u); x86_call_known(c, 0xd781cu, f_000d781c); X86_RET(c, 0xbfe22u);
    X86_TICK(c, 15);
    // 0bfe22  add esp, 0x3c
    X86_AT(c, 0xbfe22u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x3Cu, 0, 4); }
    // 0bfe25  lea eax, [ebp - 0x50]
    X86_AT(c, 0xbfe25u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0bfe28  push eax
    X86_AT(c, 0xbfe28u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0bfe29  mov edx, eax
    X86_AT(c, 0xbfe29u);
    c.r[2] = c.r[0];
    // 0bfe2b  call 0xbf39c
    X86_AT(c, 0xbfe2bu);
    push32(c, 0xbfe30u); x86_call_known(c, 0xbf39cu, f_000bf39c); X86_RET(c, 0xbfe30u);
    X86_TICK(c, 9);
    // 0bfe30  push eax
    X86_AT(c, 0xbfe30u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0bfe31  call 0xb9080
    X86_AT(c, 0xbfe31u);
    push32(c, 0xbfe36u); x86_call_known(c, 0xb9080u, f_000b9080); X86_RET(c, 0xbfe36u);
    X86_TICK(c, 21);
    // 0bfe36  mov edx, dword ptr [ebp - 0x58]
    X86_AT(c, 0xbfe36u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFA8u)));
    // 0bfe39  mov dword ptr [edx + 0xa4e63], eax
    X86_AT(c, 0xbfe39u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4E63u)), c.r[0]);
    // 0bfe3f  push edi
    X86_AT(c, 0xbfe3fu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0bfe40  push 0x4f
    X86_AT(c, 0xbfe40u);
    { uint32_t v = 0x4Fu; push32(c, v); }
    // 0bfe42  lea eax, [ebp - 0x50]
    X86_AT(c, 0xbfe42u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0bfe45  push eax
    X86_AT(c, 0xbfe45u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0bfe46  call 0xd781c
    X86_AT(c, 0xbfe46u);
    push32(c, 0xbfe4bu); x86_call_known(c, 0xd781cu, f_000d781c); X86_RET(c, 0xbfe4bu);
    X86_TICK(c, 11);
    // 0bfe4b  lea eax, [ebp - 0x50]
    X86_AT(c, 0xbfe4bu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0bfe4e  push eax
    X86_AT(c, 0xbfe4eu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0bfe4f  call 0xbf39c
    X86_AT(c, 0xbfe4fu);
    push32(c, 0xbfe54u); x86_call_known(c, 0xbf39cu, f_000bf39c); X86_RET(c, 0xbfe54u);
    X86_TICK(c, 9);
    // 0bfe54  push eax
    X86_AT(c, 0xbfe54u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0bfe55  call 0xb9080
    X86_AT(c, 0xbfe55u);
    push32(c, 0xbfe5au); x86_call_known(c, 0xb9080u, f_000b9080); X86_RET(c, 0xbfe5au);
    X86_TICK(c, 23);
    // 0bfe5a  mov edx, dword ptr [ebp - 0x58]
    X86_AT(c, 0xbfe5au);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFA8u)));
    // 0bfe5d  mov dword ptr [edx + 0xa4e67], eax
    X86_AT(c, 0xbfe5du);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4E67u)), c.r[0]);
    // 0bfe63  add esp, 0x1c
    X86_AT(c, 0xbfe63u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x1Cu, 0, 4); }
    // 0bfe66  push edi
    X86_AT(c, 0xbfe66u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0bfe67  push 0x4f
    X86_AT(c, 0xbfe67u);
    { uint32_t v = 0x4Fu; push32(c, v); }
    // 0bfe69  lea eax, [ebp - 0x50]
    X86_AT(c, 0xbfe69u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0bfe6c  push eax
    X86_AT(c, 0xbfe6cu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0bfe6d  call 0xd781c
    X86_AT(c, 0xbfe6du);
    push32(c, 0xbfe72u); x86_call_known(c, 0xd781cu, f_000d781c); X86_RET(c, 0xbfe72u);
    X86_TICK(c, 11);
    // 0bfe72  lea eax, [ebp - 0x50]
    X86_AT(c, 0xbfe72u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0bfe75  push eax
    X86_AT(c, 0xbfe75u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0bfe76  call 0xbf39c
    X86_AT(c, 0xbfe76u);
    push32(c, 0xbfe7bu); x86_call_known(c, 0xbf39cu, f_000bf39c); X86_RET(c, 0xbfe7bu);
    X86_TICK(c, 9);
    // 0bfe7b  push eax
    X86_AT(c, 0xbfe7bu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0bfe7c  call 0xb9080
    X86_AT(c, 0xbfe7cu);
    push32(c, 0xbfe81u); x86_call_known(c, 0xb9080u, f_000b9080); X86_RET(c, 0xbfe81u);
    X86_TICK(c, 24);
    // 0bfe81  mov edx, esi
    X86_AT(c, 0xbfe81u);
    c.r[2] = c.r[6];
    // 0bfe83  lea ecx, [edx + edx*2]
    X86_AT(c, 0xbfe83u);
    c.r[1] = (uint32_t)(c.r[2] + c.r[2] * 2);
    // 0bfe86  shl ecx, 5
    X86_AT(c, 0xbfe86u);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[1] = r; }
    // 0bfe89  add ecx, edx
    X86_AT(c, 0xbfe89u);
    { uint32_t v = c.r[1]; c.r[1] = x86_add(c, v, c.r[2], 0, 4); }
    // 0bfe8b  lea ecx, [edx + ecx*2]
    X86_AT(c, 0xbfe8bu);
    c.r[1] = (uint32_t)(c.r[2] + c.r[1] * 2);
    // 0bfe8e  mov dword ptr [ecx + 0xa4e6b], eax
    X86_AT(c, 0xbfe8eu);
    wr32((c.sbase[3] + (uint32_t)(c.r[1] + 0xA4E6Bu)), c.r[0]);
    // 0bfe94  inc esi
    X86_AT(c, 0xbfe94u);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 0bfe95  add esp, 0x14
    X86_AT(c, 0xbfe95u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x14u, 0, 4); }
    // 0bfe98  jmp 0xbf442
    X86_AT(c, 0xbfe98u);
    X86_POLL(c, 0xbf442u); goto L_bf442;
L_bfe9d:
    X86_TICK(c, 9);
    // 0bfe9d  push edi
    X86_AT(c, 0xbfe9du);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0bfe9e  call 0xd84c0
    X86_AT(c, 0xbfe9eu);
    push32(c, 0xbfea3u); x86_call_known(c, 0xd84c0u, f_000d84c0); X86_RET(c, 0xbfea3u);
    X86_TICK(c, 4);
    // 0bfea3  sub eax, eax
    X86_AT(c, 0xbfea3u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0bfea5  mov dword ptr [0xa6650], eax
    X86_AT(c, 0xbfea5u);
    wr32((c.sbase[3] + (uint32_t)(0xA6650u)), c.r[0]);
L_bfeaa:
    X86_TICK(c, 2);
    // 0bfeaa  add esp, 4
    X86_AT(c, 0xbfeaau);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
L_bfead:
    X86_TICK(c, 28);
    // 0bfead  pop edi
    X86_AT(c, 0xbfeadu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0bfeae  pop esi
    X86_AT(c, 0xbfeaeu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0bfeaf  pop ebx
    X86_AT(c, 0xbfeafu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0bfeb0  leave 
    X86_AT(c, 0xbfeb0u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0bfeb1  ret 
    X86_AT(c, 0xbfeb1u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xbf3b4u, "ran off the end of a function");
}
void f_000bfeb4(X86Cpu& c) {
    X86_TICK(c, 23);
    // 0bfeb4  push ebp
    X86_AT(c, 0xbfeb4u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0bfeb5  mov ebp, esp
    X86_AT(c, 0xbfeb5u);
    c.r[5] = c.r[4];
    // 0bfeb7  sub esp, 0x50
    X86_AT(c, 0xbfeb7u);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, 0x50u, 0, 4); }
    // 0bfeba  push ebx
    X86_AT(c, 0xbfebau);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0bfebb  push esi
    X86_AT(c, 0xbfebbu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0bfebc  push edi
    X86_AT(c, 0xbfebcu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0bfebd  push 0x2556
    X86_AT(c, 0xbfebdu);
    { uint32_t v = 0x2556u; push32(c, v); }
    // 0bfec2  push 0x255c
    X86_AT(c, 0xbfec2u);
    { uint32_t v = 0x255Cu; push32(c, v); }
    // 0bfec7  call 0xd7fc4
    X86_AT(c, 0xbfec7u);
    push32(c, 0xbfeccu); x86_call_known(c, 0xd7fc4u, f_000d7fc4); X86_RET(c, 0xbfeccu);
    X86_TICK(c, 12);
    // 0bfecc  add esp, 8
    X86_AT(c, 0xbfeccu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0bfecf  xchg edi, eax
    X86_AT(c, 0xbfecfu);
    { uint32_t t = c.r[7]; c.r[7] = c.r[0]; c.r[0] = t; }
    // 0bfed0  and edi, edi
    X86_AT(c, 0xbfed0u);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & c.r[7], 4); }
    // 0bfed2  jne 0xbfee3
    X86_AT(c, 0xbfed2u);
    if (x86_cc(c, 5)) { goto L_bfee3; }
    X86_TICK(c, 11);
    // 0bfed4  mov eax, 0xffffffff
    X86_AT(c, 0xbfed4u);
    c.r[0] = 0xFFFFFFFFu;
    // 0bfed9  mov dword ptr [0xa6650], eax
    X86_AT(c, 0xbfed9u);
    wr32((c.sbase[3] + (uint32_t)(0xA6650u)), c.r[0]);
    // 0bfede  jmp 0xc01e2
    X86_AT(c, 0xbfedeu);
    goto L_c01e2;
L_bfee3:
    X86_TICK(c, 15);
    // 0bfee3  push edi
    X86_AT(c, 0xbfee3u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0bfee4  push 0x4f
    X86_AT(c, 0xbfee4u);
    { uint32_t v = 0x4Fu; push32(c, v); }
    // 0bfee6  lea esi, [ebp - 0x50]
    X86_AT(c, 0xbfee6u);
    c.r[6] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0bfee9  push esi
    X86_AT(c, 0xbfee9u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0bfeea  call 0xd781c
    X86_AT(c, 0xbfeeau);
    push32(c, 0xbfeefu); x86_call_known(c, 0xd781cu, f_000d781c); X86_RET(c, 0xbfeefu);
    X86_TICK(c, 14);
    // 0bfeef  add esp, 0xc
    X86_AT(c, 0xbfeefu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0bfef2  cmp byte ptr [esi], 0x50
    X86_AT(c, 0xbfef2u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[6]))), 0x50u, 0, 1);
    // 0bfef5  jne 0xbfefd
    X86_AT(c, 0xbfef5u);
    if (x86_cc(c, 5)) { goto L_bfefd; }
    X86_TICK(c, 12);
    // 0bfef7  cmp byte ptr [ebp - 0x4f], 0x61
    X86_AT(c, 0xbfef7u);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFB1u))), 0x61u, 0, 1);
    // 0bfefb  je 0xbff17
    X86_AT(c, 0xbfefbu);
    if (x86_cc(c, 4)) { goto L_bff17; }
L_bfefd:
    X86_TICK(c, 11);
    // 0bfefd  mov dword ptr [0xa6650], 0xffffffff
    X86_AT(c, 0xbfefdu);
    wr32((c.sbase[3] + (uint32_t)(0xA6650u)), 0xFFFFFFFFu);
    // 0bff07  push edi
    X86_AT(c, 0xbff07u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0bff08  call 0xd84c0
    X86_AT(c, 0xbff08u);
    push32(c, 0xbff0du); x86_call_known(c, 0xd84c0u, f_000d84c0); X86_RET(c, 0xbff0du);
    X86_TICK(c, 9);
    // 0bff0d  mov eax, 0xffffffff
    X86_AT(c, 0xbff0du);
    c.r[0] = 0xFFFFFFFFu;
    // 0bff12  jmp 0xc01df
    X86_AT(c, 0xbff12u);
    goto L_c01df;
L_bff17:
    X86_TICK(c, 15);
    // 0bff17  push edi
    X86_AT(c, 0xbff17u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0bff18  push 0x4f
    X86_AT(c, 0xbff18u);
    { uint32_t v = 0x4Fu; push32(c, v); }
    // 0bff1a  lea esi, [ebp - 0x50]
    X86_AT(c, 0xbff1au);
    c.r[6] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0bff1d  push esi
    X86_AT(c, 0xbff1du);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0bff1e  call 0xd781c
    X86_AT(c, 0xbff1eu);
    push32(c, 0xbff23u); x86_call_known(c, 0xd781cu, f_000d781c); X86_RET(c, 0xbff23u);
    X86_TICK(c, 9);
    // 0bff23  push esi
    X86_AT(c, 0xbff23u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0bff24  call 0xbf39c
    X86_AT(c, 0xbff24u);
    push32(c, 0xbff29u); x86_call_known(c, 0xbf39cu, f_000bf39c); X86_RET(c, 0xbff29u);
    X86_TICK(c, 16);
    // 0bff29  mov bl, byte ptr [eax]
    X86_AT(c, 0xbff29u);
    s8(c, 3, rd8((c.sbase[3] + (uint32_t)(c.r[0]))));
    // 0bff2b  add esp, 0x10
    X86_AT(c, 0xbff2bu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0bff2e  movzx edx, bl
    X86_AT(c, 0xbff2eu);
    c.r[2] = g8(c, 3);
    // 0bff31  cmp edx, 0x44
    X86_AT(c, 0xbff31u);
    (void)x86_sub(c, c.r[2], 0x44u, 0, 4);
    // 0bff34  je 0xbff5f
    X86_AT(c, 0xbff34u);
    if (x86_cc(c, 4)) { goto L_bff5f; }
    X86_TICK(c, 7);
    // 0bff36  cmp edx, 0x46
    X86_AT(c, 0xbff36u);
    (void)x86_sub(c, c.r[2], 0x46u, 0, 4);
    // 0bff39  je 0xbff53
    X86_AT(c, 0xbff39u);
    if (x86_cc(c, 4)) { goto L_bff53; }
    X86_TICK(c, 7);
    // 0bff3b  cmp edx, 0x55
    X86_AT(c, 0xbff3bu);
    (void)x86_sub(c, c.r[2], 0x55u, 0, 4);
    // 0bff3e  je 0xbff47
    X86_AT(c, 0xbff3eu);
    if (x86_cc(c, 4)) { goto L_bff47; }
    X86_TICK(c, 7);
    // 0bff40  cmp edx, 0x5a
    X86_AT(c, 0xbff40u);
    (void)x86_sub(c, c.r[2], 0x5Au, 0, 4);
    // 0bff43  je 0xbff72
    X86_AT(c, 0xbff43u);
    if (x86_cc(c, 4)) { goto L_bff72; }
    X86_TICK(c, 7);
    // 0bff45  jmp 0xbff7e
    X86_AT(c, 0xbff45u);
    goto L_bff7e;
L_bff47:
    X86_TICK(c, 9);
    // 0bff47  mov dword ptr [0xa6134], 3
    X86_AT(c, 0xbff47u);
    wr32((c.sbase[3] + (uint32_t)(0xA6134u)), 0x3u);
    // 0bff51  jmp 0xbff88
    X86_AT(c, 0xbff51u);
    goto L_bff88;
L_bff53:
    X86_TICK(c, 9);
    // 0bff53  mov dword ptr [0xa6134], 4
    X86_AT(c, 0xbff53u);
    wr32((c.sbase[3] + (uint32_t)(0xA6134u)), 0x4u);
    // 0bff5d  jmp 0xbff88
    X86_AT(c, 0xbff5du);
    goto L_bff88;
L_bff5f:
    X86_TICK(c, 11);
    // 0bff5f  mov dword ptr [0xa6134], 2
    X86_AT(c, 0xbff5fu);
    wr32((c.sbase[3] + (uint32_t)(0xA6134u)), 0x2u);
    // 0bff69  mov byte ptr [0x9c2a0], 0
    X86_AT(c, 0xbff69u);
    wr8((c.sbase[3] + (uint32_t)(0x9C2A0u)), 0x0u);
    // 0bff70  jmp 0xbff88
    X86_AT(c, 0xbff70u);
    goto L_bff88;
L_bff72:
    X86_TICK(c, 9);
    // 0bff72  mov dword ptr [0xa6134], 1
    X86_AT(c, 0xbff72u);
    wr32((c.sbase[3] + (uint32_t)(0xA6134u)), 0x1u);
    // 0bff7c  jmp 0xbff88
    X86_AT(c, 0xbff7cu);
    goto L_bff88;
L_bff7e:
    X86_TICK(c, 2);
    // 0bff7e  mov dword ptr [0xa6134], 0
    X86_AT(c, 0xbff7eu);
    wr32((c.sbase[3] + (uint32_t)(0xA6134u)), 0x0u);
L_bff88:
    X86_TICK(c, 15);
    // 0bff88  push edi
    X86_AT(c, 0xbff88u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0bff89  push 0x4f
    X86_AT(c, 0xbff89u);
    { uint32_t v = 0x4Fu; push32(c, v); }
    // 0bff8b  lea esi, [ebp - 0x50]
    X86_AT(c, 0xbff8bu);
    c.r[6] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0bff8e  push esi
    X86_AT(c, 0xbff8eu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0bff8f  call 0xd781c
    X86_AT(c, 0xbff8fu);
    push32(c, 0xbff94u); x86_call_known(c, 0xd781cu, f_000d781c); X86_RET(c, 0xbff94u);
    X86_TICK(c, 9);
    // 0bff94  push esi
    X86_AT(c, 0xbff94u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0bff95  call 0xbf39c
    X86_AT(c, 0xbff95u);
    push32(c, 0xbff9au); x86_call_known(c, 0xbf39cu, f_000bf39c); X86_RET(c, 0xbff9au);
    X86_TICK(c, 13);
    // 0bff9a  add esp, 0x10
    X86_AT(c, 0xbff9au);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0bff9d  mov bl, byte ptr [eax]
    X86_AT(c, 0xbff9du);
    s8(c, 3, rd8((c.sbase[3] + (uint32_t)(c.r[0]))));
    // 0bff9f  cmp bl, 0x45
    X86_AT(c, 0xbff9fu);
    (void)x86_sub(c, g8(c, 3), 0x45u, 0, 1);
    // 0bffa2  jne 0xbffb0
    X86_AT(c, 0xbffa2u);
    if (x86_cc(c, 5)) { goto L_bffb0; }
    X86_TICK(c, 9);
    // 0bffa4  mov dword ptr [0x460e4], 0
    X86_AT(c, 0xbffa4u);
    wr32((c.sbase[3] + (uint32_t)(0x460E4u)), 0x0u);
    // 0bffae  jmp 0xbffba
    X86_AT(c, 0xbffaeu);
    goto L_bffba;
L_bffb0:
    X86_TICK(c, 2);
    // 0bffb0  mov dword ptr [0x460e4], 0xffffffff
    X86_AT(c, 0xbffb0u);
    wr32((c.sbase[3] + (uint32_t)(0x460E4u)), 0xFFFFFFFFu);
L_bffba:
    X86_TICK(c, 9);
    // 0bffba  mov dword ptr [0xa6134], 0
    X86_AT(c, 0xbffbau);
    wr32((c.sbase[3] + (uint32_t)(0xA6134u)), 0x0u);
    // 0bffc4  cmp bl, 0x5a
    X86_AT(c, 0xbffc4u);
    (void)x86_sub(c, g8(c, 3), 0x5Au, 0, 1);
    // 0bffc7  jne 0xbffd3
    X86_AT(c, 0xbffc7u);
    if (x86_cc(c, 5)) { goto L_bffd3; }
    X86_TICK(c, 2);
    // 0bffc9  mov dword ptr [0xa6134], 1
    X86_AT(c, 0xbffc9u);
    wr32((c.sbase[3] + (uint32_t)(0xA6134u)), 0x1u);
L_bffd3:
    X86_TICK(c, 7);
    // 0bffd3  cmp bl, 0x44
    X86_AT(c, 0xbffd3u);
    (void)x86_sub(c, g8(c, 3), 0x44u, 0, 1);
    // 0bffd6  jne 0xbffe2
    X86_AT(c, 0xbffd6u);
    if (x86_cc(c, 5)) { goto L_bffe2; }
    X86_TICK(c, 2);
    // 0bffd8  mov dword ptr [0xa6134], 2
    X86_AT(c, 0xbffd8u);
    wr32((c.sbase[3] + (uint32_t)(0xA6134u)), 0x2u);
L_bffe2:
    X86_TICK(c, 7);
    // 0bffe2  cmp bl, 0x55
    X86_AT(c, 0xbffe2u);
    (void)x86_sub(c, g8(c, 3), 0x55u, 0, 1);
    // 0bffe5  jne 0xbfff1
    X86_AT(c, 0xbffe5u);
    if (x86_cc(c, 5)) { goto L_bfff1; }
    X86_TICK(c, 2);
    // 0bffe7  mov dword ptr [0xa6134], 3
    X86_AT(c, 0xbffe7u);
    wr32((c.sbase[3] + (uint32_t)(0xA6134u)), 0x3u);
L_bfff1:
    X86_TICK(c, 7);
    // 0bfff1  cmp bl, 0x46
    X86_AT(c, 0xbfff1u);
    (void)x86_sub(c, g8(c, 3), 0x46u, 0, 1);
    // 0bfff4  jne 0xc0000
    X86_AT(c, 0xbfff4u);
    if (x86_cc(c, 5)) { goto L_c0000; }
    X86_TICK(c, 2);
    // 0bfff6  mov dword ptr [0xa6134], 4
    X86_AT(c, 0xbfff6u);
    wr32((c.sbase[3] + (uint32_t)(0xA6134u)), 0x4u);
L_c0000:
    X86_TICK(c, 15);
    // 0c0000  push edi
    X86_AT(c, 0xc0000u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c0001  push 0x4f
    X86_AT(c, 0xc0001u);
    { uint32_t v = 0x4Fu; push32(c, v); }
    // 0c0003  lea esi, [ebp - 0x50]
    X86_AT(c, 0xc0003u);
    c.r[6] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0c0006  push esi
    X86_AT(c, 0xc0006u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0c0007  call 0xd781c
    X86_AT(c, 0xc0007u);
    push32(c, 0xc000cu); x86_call_known(c, 0xd781cu, f_000d781c); X86_RET(c, 0xc000cu);
    X86_TICK(c, 9);
    // 0c000c  push esi
    X86_AT(c, 0xc000cu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0c000d  call 0xbf39c
    X86_AT(c, 0xc000du);
    push32(c, 0xc0012u); x86_call_known(c, 0xbf39cu, f_000bf39c); X86_RET(c, 0xc0012u);
    X86_TICK(c, 9);
    // 0c0012  push eax
    X86_AT(c, 0xc0012u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c0013  call 0xb9080
    X86_AT(c, 0xc0013u);
    push32(c, 0xc0018u); x86_call_known(c, 0xb9080u, f_000b9080); X86_RET(c, 0xc0018u);
    X86_TICK(c, 15);
    // 0c0018  mov byte ptr [0xa4a49], al
    X86_AT(c, 0xc0018u);
    wr8((c.sbase[3] + (uint32_t)(0xA4A49u)), g8(c, 0));
    // 0c001d  push edi
    X86_AT(c, 0xc001du);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c001e  push 0x4f
    X86_AT(c, 0xc001eu);
    { uint32_t v = 0x4Fu; push32(c, v); }
    // 0c0020  push esi
    X86_AT(c, 0xc0020u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0c0021  call 0xd781c
    X86_AT(c, 0xc0021u);
    push32(c, 0xc0026u); x86_call_known(c, 0xd781cu, f_000d781c); X86_RET(c, 0xc0026u);
    X86_TICK(c, 9);
    // 0c0026  push esi
    X86_AT(c, 0xc0026u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0c0027  call 0xbf39c
    X86_AT(c, 0xc0027u);
    push32(c, 0xc002cu); x86_call_known(c, 0xbf39cu, f_000bf39c); X86_RET(c, 0xc002cu);
    X86_TICK(c, 14);
    // 0c002c  add esp, 0x24
    X86_AT(c, 0xc002cu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x24u, 0, 4); }
    // 0c002f  cmp byte ptr [eax], 0x59
    X86_AT(c, 0xc002fu);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[0]))), 0x59u, 0, 1);
    // 0c0032  jne 0xc0040
    X86_AT(c, 0xc0032u);
    if (x86_cc(c, 5)) { goto L_c0040; }
    X86_TICK(c, 9);
    // 0c0034  mov dword ptr [0xa4a52], 0
    X86_AT(c, 0xc0034u);
    wr32((c.sbase[3] + (uint32_t)(0xA4A52u)), 0x0u);
    // 0c003e  jmp 0xc004a
    X86_AT(c, 0xc003eu);
    goto L_c004a;
L_c0040:
    X86_TICK(c, 2);
    // 0c0040  mov dword ptr [0xa4a52], 0xffffffff
    X86_AT(c, 0xc0040u);
    wr32((c.sbase[3] + (uint32_t)(0xA4A52u)), 0xFFFFFFFFu);
L_c004a:
    X86_TICK(c, 15);
    // 0c004a  push edi
    X86_AT(c, 0xc004au);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c004b  push 0x4f
    X86_AT(c, 0xc004bu);
    { uint32_t v = 0x4Fu; push32(c, v); }
    // 0c004d  lea esi, [ebp - 0x50]
    X86_AT(c, 0xc004du);
    c.r[6] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0c0050  push esi
    X86_AT(c, 0xc0050u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0c0051  call 0xd781c
    X86_AT(c, 0xc0051u);
    push32(c, 0xc0056u); x86_call_known(c, 0xd781cu, f_000d781c); X86_RET(c, 0xc0056u);
    X86_TICK(c, 9);
    // 0c0056  push esi
    X86_AT(c, 0xc0056u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0c0057  call 0xbf39c
    X86_AT(c, 0xc0057u);
    push32(c, 0xc005cu); x86_call_known(c, 0xbf39cu, f_000bf39c); X86_RET(c, 0xc005cu);
    X86_TICK(c, 9);
    // 0c005c  push eax
    X86_AT(c, 0xc005cu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c005d  call 0xb9080
    X86_AT(c, 0xc005du);
    push32(c, 0xc0062u); x86_call_known(c, 0xb9080u, f_000b9080); X86_RET(c, 0xc0062u);
    X86_TICK(c, 15);
    // 0c0062  mov dword ptr [0xa4a56], eax
    X86_AT(c, 0xc0062u);
    wr32((c.sbase[3] + (uint32_t)(0xA4A56u)), c.r[0]);
    // 0c0067  push edi
    X86_AT(c, 0xc0067u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c0068  push 0x4f
    X86_AT(c, 0xc0068u);
    { uint32_t v = 0x4Fu; push32(c, v); }
    // 0c006a  push esi
    X86_AT(c, 0xc006au);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0c006b  call 0xd781c
    X86_AT(c, 0xc006bu);
    push32(c, 0xc0070u); x86_call_known(c, 0xd781cu, f_000d781c); X86_RET(c, 0xc0070u);
    X86_TICK(c, 9);
    // 0c0070  push esi
    X86_AT(c, 0xc0070u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0c0071  call 0xbf39c
    X86_AT(c, 0xc0071u);
    push32(c, 0xc0076u); x86_call_known(c, 0xbf39cu, f_000bf39c); X86_RET(c, 0xc0076u);
    X86_TICK(c, 9);
    // 0c0076  push eax
    X86_AT(c, 0xc0076u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c0077  call 0xb9080
    X86_AT(c, 0xc0077u);
    push32(c, 0xc007cu); x86_call_known(c, 0xb9080u, f_000b9080); X86_RET(c, 0xc007cu);
    X86_TICK(c, 15);
    // 0c007c  mov dword ptr [0xa4a5e], eax
    X86_AT(c, 0xc007cu);
    wr32((c.sbase[3] + (uint32_t)(0xA4A5Eu)), c.r[0]);
    // 0c0081  push edi
    X86_AT(c, 0xc0081u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c0082  push 0x4f
    X86_AT(c, 0xc0082u);
    { uint32_t v = 0x4Fu; push32(c, v); }
    // 0c0084  push esi
    X86_AT(c, 0xc0084u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0c0085  call 0xd781c
    X86_AT(c, 0xc0085u);
    push32(c, 0xc008au); x86_call_known(c, 0xd781cu, f_000d781c); X86_RET(c, 0xc008au);
    X86_TICK(c, 9);
    // 0c008a  push esi
    X86_AT(c, 0xc008au);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0c008b  call 0xbf39c
    X86_AT(c, 0xc008bu);
    push32(c, 0xc0090u); x86_call_known(c, 0xbf39cu, f_000bf39c); X86_RET(c, 0xc0090u);
    X86_TICK(c, 9);
    // 0c0090  push eax
    X86_AT(c, 0xc0090u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c0091  call 0xb9080
    X86_AT(c, 0xc0091u);
    push32(c, 0xc0096u); x86_call_known(c, 0xb9080u, f_000b9080); X86_RET(c, 0xc0096u);
    X86_TICK(c, 17);
    // 0c0096  add esp, 0x3c
    X86_AT(c, 0xc0096u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x3Cu, 0, 4); }
    // 0c0099  mov dword ptr [0xa4a62], eax
    X86_AT(c, 0xc0099u);
    wr32((c.sbase[3] + (uint32_t)(0xA4A62u)), c.r[0]);
    // 0c009e  push edi
    X86_AT(c, 0xc009eu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c009f  push 0x4f
    X86_AT(c, 0xc009fu);
    { uint32_t v = 0x4Fu; push32(c, v); }
    // 0c00a1  push esi
    X86_AT(c, 0xc00a1u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0c00a2  call 0xd781c
    X86_AT(c, 0xc00a2u);
    push32(c, 0xc00a7u); x86_call_known(c, 0xd781cu, f_000d781c); X86_RET(c, 0xc00a7u);
    X86_TICK(c, 9);
    // 0c00a7  push esi
    X86_AT(c, 0xc00a7u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0c00a8  call 0xbf39c
    X86_AT(c, 0xc00a8u);
    push32(c, 0xc00adu); x86_call_known(c, 0xbf39cu, f_000bf39c); X86_RET(c, 0xc00adu);
    X86_TICK(c, 9);
    // 0c00ad  push eax
    X86_AT(c, 0xc00adu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c00ae  call 0xb9080
    X86_AT(c, 0xc00aeu);
    push32(c, 0xc00b3u); x86_call_known(c, 0xb9080u, f_000b9080); X86_RET(c, 0xc00b3u);
    X86_TICK(c, 15);
    // 0c00b3  mov dword ptr [0xa4a66], eax
    X86_AT(c, 0xc00b3u);
    wr32((c.sbase[3] + (uint32_t)(0xA4A66u)), c.r[0]);
    // 0c00b8  push edi
    X86_AT(c, 0xc00b8u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c00b9  push 0x4f
    X86_AT(c, 0xc00b9u);
    { uint32_t v = 0x4Fu; push32(c, v); }
    // 0c00bb  push esi
    X86_AT(c, 0xc00bbu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0c00bc  call 0xd781c
    X86_AT(c, 0xc00bcu);
    push32(c, 0xc00c1u); x86_call_known(c, 0xd781cu, f_000d781c); X86_RET(c, 0xc00c1u);
    X86_TICK(c, 9);
    // 0c00c1  push esi
    X86_AT(c, 0xc00c1u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0c00c2  call 0xbf39c
    X86_AT(c, 0xc00c2u);
    push32(c, 0xc00c7u); x86_call_known(c, 0xbf39cu, f_000bf39c); X86_RET(c, 0xc00c7u);
    X86_TICK(c, 9);
    // 0c00c7  push eax
    X86_AT(c, 0xc00c7u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c00c8  call 0xb9080
    X86_AT(c, 0xc00c8u);
    push32(c, 0xc00cdu); x86_call_known(c, 0xb9080u, f_000b9080); X86_RET(c, 0xc00cdu);
    X86_TICK(c, 15);
    // 0c00cd  mov dword ptr [0xa4a6a], eax
    X86_AT(c, 0xc00cdu);
    wr32((c.sbase[3] + (uint32_t)(0xA4A6Au)), c.r[0]);
    // 0c00d2  push edi
    X86_AT(c, 0xc00d2u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c00d3  push 0x4f
    X86_AT(c, 0xc00d3u);
    { uint32_t v = 0x4Fu; push32(c, v); }
    // 0c00d5  push esi
    X86_AT(c, 0xc00d5u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0c00d6  call 0xd781c
    X86_AT(c, 0xc00d6u);
    push32(c, 0xc00dbu); x86_call_known(c, 0xd781cu, f_000d781c); X86_RET(c, 0xc00dbu);
    X86_TICK(c, 9);
    // 0c00db  push esi
    X86_AT(c, 0xc00dbu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0c00dc  call 0xbf39c
    X86_AT(c, 0xc00dcu);
    push32(c, 0xc00e1u); x86_call_known(c, 0xbf39cu, f_000bf39c); X86_RET(c, 0xc00e1u);
    X86_TICK(c, 9);
    // 0c00e1  push eax
    X86_AT(c, 0xc00e1u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c00e2  call 0xb9080
    X86_AT(c, 0xc00e2u);
    push32(c, 0xc00e7u); x86_call_known(c, 0xb9080u, f_000b9080); X86_RET(c, 0xc00e7u);
    X86_TICK(c, 17);
    // 0c00e7  add esp, 0x3c
    X86_AT(c, 0xc00e7u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x3Cu, 0, 4); }
    // 0c00ea  mov dword ptr [0xa4a7e], eax
    X86_AT(c, 0xc00eau);
    wr32((c.sbase[3] + (uint32_t)(0xA4A7Eu)), c.r[0]);
    // 0c00ef  push edi
    X86_AT(c, 0xc00efu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c00f0  push 0x4f
    X86_AT(c, 0xc00f0u);
    { uint32_t v = 0x4Fu; push32(c, v); }
    // 0c00f2  push esi
    X86_AT(c, 0xc00f2u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0c00f3  call 0xd781c
    X86_AT(c, 0xc00f3u);
    push32(c, 0xc00f8u); x86_call_known(c, 0xd781cu, f_000d781c); X86_RET(c, 0xc00f8u);
    X86_TICK(c, 9);
    // 0c00f8  push esi
    X86_AT(c, 0xc00f8u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0c00f9  call 0xbf39c
    X86_AT(c, 0xc00f9u);
    push32(c, 0xc00feu); x86_call_known(c, 0xbf39cu, f_000bf39c); X86_RET(c, 0xc00feu);
    X86_TICK(c, 9);
    // 0c00fe  push eax
    X86_AT(c, 0xc00feu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c00ff  call 0xb9080
    X86_AT(c, 0xc00ffu);
    push32(c, 0xc0104u); x86_call_known(c, 0xb9080u, f_000b9080); X86_RET(c, 0xc0104u);
    X86_TICK(c, 15);
    // 0c0104  mov dword ptr [0xa4a82], eax
    X86_AT(c, 0xc0104u);
    wr32((c.sbase[3] + (uint32_t)(0xA4A82u)), c.r[0]);
    // 0c0109  push edi
    X86_AT(c, 0xc0109u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c010a  push 0x4f
    X86_AT(c, 0xc010au);
    { uint32_t v = 0x4Fu; push32(c, v); }
    // 0c010c  push esi
    X86_AT(c, 0xc010cu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0c010d  call 0xd781c
    X86_AT(c, 0xc010du);
    push32(c, 0xc0112u); x86_call_known(c, 0xd781cu, f_000d781c); X86_RET(c, 0xc0112u);
    X86_TICK(c, 13);
    // 0c0112  add esp, 0x20
    X86_AT(c, 0xc0112u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x20u, 0, 4); }
    // 0c0115  lea esi, [ebp - 0x50]
    X86_AT(c, 0xc0115u);
    c.r[6] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0c0118  push esi
    X86_AT(c, 0xc0118u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0c0119  call 0xbf39c
    X86_AT(c, 0xc0119u);
    push32(c, 0xc011eu); x86_call_known(c, 0xbf39cu, f_000bf39c); X86_RET(c, 0xc011eu);
    X86_TICK(c, 9);
    // 0c011e  push eax
    X86_AT(c, 0xc011eu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c011f  call 0xb9080
    X86_AT(c, 0xc011fu);
    push32(c, 0xc0124u); x86_call_known(c, 0xb9080u, f_000b9080); X86_RET(c, 0xc0124u);
    X86_TICK(c, 15);
    // 0c0124  mov dword ptr [0xa4a86], eax
    X86_AT(c, 0xc0124u);
    wr32((c.sbase[3] + (uint32_t)(0xA4A86u)), c.r[0]);
    // 0c0129  push edi
    X86_AT(c, 0xc0129u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c012a  push 0x4f
    X86_AT(c, 0xc012au);
    { uint32_t v = 0x4Fu; push32(c, v); }
    // 0c012c  push esi
    X86_AT(c, 0xc012cu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0c012d  call 0xd781c
    X86_AT(c, 0xc012du);
    push32(c, 0xc0132u); x86_call_known(c, 0xd781cu, f_000d781c); X86_RET(c, 0xc0132u);
    X86_TICK(c, 9);
    // 0c0132  push esi
    X86_AT(c, 0xc0132u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0c0133  call 0xbf39c
    X86_AT(c, 0xc0133u);
    push32(c, 0xc0138u); x86_call_known(c, 0xbf39cu, f_000bf39c); X86_RET(c, 0xc0138u);
    X86_TICK(c, 9);
    // 0c0138  push eax
    X86_AT(c, 0xc0138u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c0139  call 0xb9080
    X86_AT(c, 0xc0139u);
    push32(c, 0xc013eu); x86_call_known(c, 0xb9080u, f_000b9080); X86_RET(c, 0xc013eu);
    X86_TICK(c, 15);
    // 0c013e  mov dword ptr [0xa4a8a], eax
    X86_AT(c, 0xc013eu);
    wr32((c.sbase[3] + (uint32_t)(0xA4A8Au)), c.r[0]);
    // 0c0143  push edi
    X86_AT(c, 0xc0143u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c0144  push 0x4f
    X86_AT(c, 0xc0144u);
    { uint32_t v = 0x4Fu; push32(c, v); }
    // 0c0146  push esi
    X86_AT(c, 0xc0146u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0c0147  call 0xd781c
    X86_AT(c, 0xc0147u);
    push32(c, 0xc014cu); x86_call_known(c, 0xd781cu, f_000d781c); X86_RET(c, 0xc014cu);
    X86_TICK(c, 11);
    // 0c014c  lea eax, [ebp - 0x50]
    X86_AT(c, 0xc014cu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0c014f  push eax
    X86_AT(c, 0xc014fu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c0150  call 0xbf39c
    X86_AT(c, 0xc0150u);
    push32(c, 0xc0155u); x86_call_known(c, 0xbf39cu, f_000bf39c); X86_RET(c, 0xc0155u);
    X86_TICK(c, 12);
    // 0c0155  cmp byte ptr [eax], 0x59
    X86_AT(c, 0xc0155u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[0]))), 0x59u, 0, 1);
    // 0c0158  je 0xc0161
    X86_AT(c, 0xc0158u);
    if (x86_cc(c, 4)) { goto L_c0161; }
    X86_TICK(c, 9);
    // 0c015a  mov eax, 0xffffffff
    X86_AT(c, 0xc015au);
    c.r[0] = 0xFFFFFFFFu;
    // 0c015f  jmp 0xc0163
    X86_AT(c, 0xc015fu);
    goto L_c0163;
L_c0161:
    X86_TICK(c, 2);
    // 0c0161  sub eax, eax
    X86_AT(c, 0xc0161u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
L_c0163:
    X86_TICK(c, 17);
    // 0c0163  mov dword ptr [0xa4a8e], eax
    X86_AT(c, 0xc0163u);
    wr32((c.sbase[3] + (uint32_t)(0xA4A8Eu)), c.r[0]);
    // 0c0168  push edi
    X86_AT(c, 0xc0168u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c0169  push 0x4f
    X86_AT(c, 0xc0169u);
    { uint32_t v = 0x4Fu; push32(c, v); }
    // 0c016b  lea eax, [ebp - 0x50]
    X86_AT(c, 0xc016bu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0c016e  push eax
    X86_AT(c, 0xc016eu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c016f  call 0xd781c
    X86_AT(c, 0xc016fu);
    push32(c, 0xc0174u); x86_call_known(c, 0xd781cu, f_000d781c); X86_RET(c, 0xc0174u);
    X86_TICK(c, 11);
    // 0c0174  lea eax, [ebp - 0x50]
    X86_AT(c, 0xc0174u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0c0177  push eax
    X86_AT(c, 0xc0177u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c0178  call 0xbf39c
    X86_AT(c, 0xc0178u);
    push32(c, 0xc017du); x86_call_known(c, 0xbf39cu, f_000bf39c); X86_RET(c, 0xc017du);
    X86_TICK(c, 14);
    // 0c017d  add esp, 0x3c
    X86_AT(c, 0xc017du);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x3Cu, 0, 4); }
    // 0c0180  cmp byte ptr [eax], 0x59
    X86_AT(c, 0xc0180u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[0]))), 0x59u, 0, 1);
    // 0c0183  je 0xc018c
    X86_AT(c, 0xc0183u);
    if (x86_cc(c, 4)) { goto L_c018c; }
    X86_TICK(c, 9);
    // 0c0185  mov eax, 0xffffffff
    X86_AT(c, 0xc0185u);
    c.r[0] = 0xFFFFFFFFu;
    // 0c018a  jmp 0xc018e
    X86_AT(c, 0xc018au);
    goto L_c018e;
L_c018c:
    X86_TICK(c, 2);
    // 0c018c  sub eax, eax
    X86_AT(c, 0xc018cu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
L_c018e:
    X86_TICK(c, 17);
    // 0c018e  mov dword ptr [0xa4a92], eax
    X86_AT(c, 0xc018eu);
    wr32((c.sbase[3] + (uint32_t)(0xA4A92u)), c.r[0]);
    // 0c0193  push edi
    X86_AT(c, 0xc0193u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c0194  push 0x4f
    X86_AT(c, 0xc0194u);
    { uint32_t v = 0x4Fu; push32(c, v); }
    // 0c0196  lea eax, [ebp - 0x50]
    X86_AT(c, 0xc0196u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0c0199  push eax
    X86_AT(c, 0xc0199u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c019a  call 0xd781c
    X86_AT(c, 0xc019au);
    push32(c, 0xc019fu); x86_call_known(c, 0xd781cu, f_000d781c); X86_RET(c, 0xc019fu);
    X86_TICK(c, 11);
    // 0c019f  lea eax, [ebp - 0x50]
    X86_AT(c, 0xc019fu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0c01a2  push eax
    X86_AT(c, 0xc01a2u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c01a3  call 0xbf39c
    X86_AT(c, 0xc01a3u);
    push32(c, 0xc01a8u); x86_call_known(c, 0xbf39cu, f_000bf39c); X86_RET(c, 0xc01a8u);
    X86_TICK(c, 12);
    // 0c01a8  cmp byte ptr [eax], 0x59
    X86_AT(c, 0xc01a8u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[0]))), 0x59u, 0, 1);
    // 0c01ab  je 0xc01b4
    X86_AT(c, 0xc01abu);
    if (x86_cc(c, 4)) { goto L_c01b4; }
    X86_TICK(c, 9);
    // 0c01ad  mov eax, 0xffffffff
    X86_AT(c, 0xc01adu);
    c.r[0] = 0xFFFFFFFFu;
    // 0c01b2  jmp 0xc01b6
    X86_AT(c, 0xc01b2u);
    goto L_c01b6;
L_c01b4:
    X86_TICK(c, 2);
    // 0c01b4  sub eax, eax
    X86_AT(c, 0xc01b4u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
L_c01b6:
    X86_TICK(c, 25);
    // 0c01b6  mov dword ptr [0xa4a96], eax
    X86_AT(c, 0xc01b6u);
    wr32((c.sbase[3] + (uint32_t)(0xA4A96u)), c.r[0]);
    // 0c01bb  add esp, 0x10
    X86_AT(c, 0xc01bbu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0c01be  mov eax, dword ptr [0xa4a66]
    X86_AT(c, 0xc01beu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xA4A66u)));
    // 0c01c3  mov dword ptr [0xa4a76], eax
    X86_AT(c, 0xc01c3u);
    wr32((c.sbase[3] + (uint32_t)(0xA4A76u)), c.r[0]);
    // 0c01c8  mov eax, dword ptr [0xa4a6a]
    X86_AT(c, 0xc01c8u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xA4A6Au)));
    // 0c01cd  mov dword ptr [0xa4a7a], eax
    X86_AT(c, 0xc01cdu);
    wr32((c.sbase[3] + (uint32_t)(0xA4A7Au)), c.r[0]);
    // 0c01d2  push edi
    X86_AT(c, 0xc01d2u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c01d3  call 0xd84c0
    X86_AT(c, 0xc01d3u);
    push32(c, 0xc01d8u); x86_call_known(c, 0xd84c0u, f_000d84c0); X86_RET(c, 0xc01d8u);
    X86_TICK(c, 4);
    // 0c01d8  sub eax, eax
    X86_AT(c, 0xc01d8u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0c01da  mov dword ptr [0xa6650], eax
    X86_AT(c, 0xc01dau);
    wr32((c.sbase[3] + (uint32_t)(0xA6650u)), c.r[0]);
L_c01df:
    X86_TICK(c, 2);
    // 0c01df  add esp, 4
    X86_AT(c, 0xc01dfu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
L_c01e2:
    X86_TICK(c, 28);
    // 0c01e2  pop edi
    X86_AT(c, 0xc01e2u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0c01e3  pop esi
    X86_AT(c, 0xc01e3u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0c01e4  pop ebx
    X86_AT(c, 0xc01e4u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0c01e5  leave 
    X86_AT(c, 0xc01e5u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0c01e6  ret 
    X86_AT(c, 0xc01e6u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xbfeb4u, "ran off the end of a function");
}
void f_000c01e8(X86Cpu& c) {
    X86_TICK(c, 23);
    // 0c01e8  push ebp
    X86_AT(c, 0xc01e8u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0c01e9  mov ebp, esp
    X86_AT(c, 0xc01e9u);
    c.r[5] = c.r[4];
    // 0c01eb  sub esp, 0x58
    X86_AT(c, 0xc01ebu);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, 0x58u, 0, 4); }
    // 0c01ee  push ebx
    X86_AT(c, 0xc01eeu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0c01ef  push esi
    X86_AT(c, 0xc01efu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0c01f0  push edi
    X86_AT(c, 0xc01f0u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c01f1  push 0x256a
    X86_AT(c, 0xc01f1u);
    { uint32_t v = 0x256Au; push32(c, v); }
    // 0c01f6  push 0x2570
    X86_AT(c, 0xc01f6u);
    { uint32_t v = 0x2570u; push32(c, v); }
    // 0c01fb  call 0xd7fc4
    X86_AT(c, 0xc01fbu);
    push32(c, 0xc0200u); x86_call_known(c, 0xd7fc4u, f_000d7fc4); X86_RET(c, 0xc0200u);
    X86_TICK(c, 12);
    // 0c0200  add esp, 8
    X86_AT(c, 0xc0200u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0c0203  xchg edi, eax
    X86_AT(c, 0xc0203u);
    { uint32_t t = c.r[7]; c.r[7] = c.r[0]; c.r[0] = t; }
    // 0c0204  and edi, edi
    X86_AT(c, 0xc0204u);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & c.r[7], 4); }
    // 0c0206  jne 0xc0217
    X86_AT(c, 0xc0206u);
    if (x86_cc(c, 5)) { goto L_c0217; }
    X86_TICK(c, 11);
    // 0c0208  mov eax, 0xffffffff
    X86_AT(c, 0xc0208u);
    c.r[0] = 0xFFFFFFFFu;
    // 0c020d  mov dword ptr [0xa6650], eax
    X86_AT(c, 0xc020du);
    wr32((c.sbase[3] + (uint32_t)(0xA6650u)), c.r[0]);
    // 0c0212  jmp 0xc0cee
    X86_AT(c, 0xc0212u);
    goto L_c0cee;
L_c0217:
    X86_TICK(c, 15);
    // 0c0217  push edi
    X86_AT(c, 0xc0217u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c0218  push 0x4f
    X86_AT(c, 0xc0218u);
    { uint32_t v = 0x4Fu; push32(c, v); }
    // 0c021a  lea eax, [ebp - 0x50]
    X86_AT(c, 0xc021au);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0c021d  push eax
    X86_AT(c, 0xc021du);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c021e  call 0xd781c
    X86_AT(c, 0xc021eu);
    push32(c, 0xc0223u); x86_call_known(c, 0xd781cu, f_000d781c); X86_RET(c, 0xc0223u);
    X86_TICK(c, 14);
    // 0c0223  add esp, 0xc
    X86_AT(c, 0xc0223u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0c0226  cmp byte ptr [ebp - 0x50], 0x50
    X86_AT(c, 0xc0226u);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFB0u))), 0x50u, 0, 1);
    // 0c022a  jne 0xc0232
    X86_AT(c, 0xc022au);
    if (x86_cc(c, 5)) { goto L_c0232; }
    X86_TICK(c, 12);
    // 0c022c  cmp byte ptr [ebp - 0x4f], 0x6c
    X86_AT(c, 0xc022cu);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFB1u))), 0x6Cu, 0, 1);
    // 0c0230  je 0xc024c
    X86_AT(c, 0xc0230u);
    if (x86_cc(c, 4)) { goto L_c024c; }
L_c0232:
    X86_TICK(c, 11);
    // 0c0232  mov dword ptr [0xa6650], 0xffffffff
    X86_AT(c, 0xc0232u);
    wr32((c.sbase[3] + (uint32_t)(0xA6650u)), 0xFFFFFFFFu);
    // 0c023c  push edi
    X86_AT(c, 0xc023cu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c023d  call 0xd84c0
    X86_AT(c, 0xc023du);
    push32(c, 0xc0242u); x86_call_known(c, 0xd84c0u, f_000d84c0); X86_RET(c, 0xc0242u);
    X86_TICK(c, 9);
    // 0c0242  mov eax, 0xffffffff
    X86_AT(c, 0xc0242u);
    c.r[0] = 0xFFFFFFFFu;
    // 0c0247  jmp 0xc0ceb
    X86_AT(c, 0xc0247u);
    goto L_c0ceb;
L_c024c:
    X86_TICK(c, 7);
    // 0c024c  sub eax, eax
    X86_AT(c, 0xc024cu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0c024e  mov dword ptr [0xa4a62], eax
    X86_AT(c, 0xc024eu);
    wr32((c.sbase[3] + (uint32_t)(0xA4A62u)), c.r[0]);
    // 0c0253  xchg esi, eax
    X86_AT(c, 0xc0253u);
    { uint32_t t = c.r[6]; c.r[6] = c.r[0]; c.r[0] = t; }
L_c0254:
    X86_TICK(c, 7);
    // 0c0254  cmp esi, 4
    X86_AT(c, 0xc0254u);
    (void)x86_sub(c, c.r[6], 0x4u, 0, 4);
    // 0c0257  jge 0xc0cde
    X86_AT(c, 0xc0257u);
    if (x86_cc(c, 13)) { goto L_c0cde; }
    X86_TICK(c, 15);
    // 0c025d  push edi
    X86_AT(c, 0xc025du);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c025e  push 0x4f
    X86_AT(c, 0xc025eu);
    { uint32_t v = 0x4Fu; push32(c, v); }
    // 0c0260  lea eax, [ebp - 0x50]
    X86_AT(c, 0xc0260u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0c0263  push eax
    X86_AT(c, 0xc0263u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c0264  call 0xd781c
    X86_AT(c, 0xc0264u);
    push32(c, 0xc0269u); x86_call_known(c, 0xd781cu, f_000d781c); X86_RET(c, 0xc0269u);
    X86_TICK(c, 15);
    // 0c0269  push edi
    X86_AT(c, 0xc0269u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c026a  push 0x4f
    X86_AT(c, 0xc026au);
    { uint32_t v = 0x4Fu; push32(c, v); }
    // 0c026c  lea eax, [ebp - 0x50]
    X86_AT(c, 0xc026cu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0c026f  push eax
    X86_AT(c, 0xc026fu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c0270  call 0xd781c
    X86_AT(c, 0xc0270u);
    push32(c, 0xc0275u); x86_call_known(c, 0xd781cu, f_000d781c); X86_RET(c, 0xc0275u);
    X86_TICK(c, 11);
    // 0c0275  lea eax, [ebp - 0x50]
    X86_AT(c, 0xc0275u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0c0278  push eax
    X86_AT(c, 0xc0278u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c0279  call 0xbf39c
    X86_AT(c, 0xc0279u);
    push32(c, 0xc027eu); x86_call_known(c, 0xbf39cu, f_000bf39c); X86_RET(c, 0xc027eu);
    X86_TICK(c, 7);
    // 0c027e  xchg ebx, eax
    X86_AT(c, 0xc027eu);
    { uint32_t t = c.r[3]; c.r[3] = c.r[0]; c.r[0] = t; }
    // 0c027f  mov dword ptr [ebp - 0x54], 0
    X86_AT(c, 0xc027fu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFACu)), 0x0u);
    // 0c0286  add esp, 0x1c
    X86_AT(c, 0xc0286u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x1Cu, 0, 4); }
L_c0289:
    X86_TICK(c, 11);
    // 0c0289  mov al, byte ptr [ebx]
    X86_AT(c, 0xc0289u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[3]))));
    // 0c028b  cmp al, 0xa
    X86_AT(c, 0xc028bu);
    (void)x86_sub(c, g8(c, 0), 0xAu, 0, 1);
    // 0c028d  je 0xc02af
    X86_AT(c, 0xc028du);
    if (x86_cc(c, 4)) { goto L_c02af; }
    X86_TICK(c, 7);
    // 0c028f  and al, al
    X86_AT(c, 0xc028fu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & g8(c, 0), 1)); }
    // 0c0291  je 0xc02af
    X86_AT(c, 0xc0291u);
    if (x86_cc(c, 4)) { goto L_c02af; }
    X86_TICK(c, 34);
    // 0c0293  mov edx, esi
    X86_AT(c, 0xc0293u);
    c.r[2] = c.r[6];
    // 0c0295  lea ecx, [edx + edx*2]
    X86_AT(c, 0xc0295u);
    c.r[1] = (uint32_t)(c.r[2] + c.r[2] * 2);
    // 0c0298  shl ecx, 5
    X86_AT(c, 0xc0298u);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[1] = r; }
    // 0c029b  add ecx, edx
    X86_AT(c, 0xc029bu);
    { uint32_t v = c.r[1]; c.r[1] = x86_add(c, v, c.r[2], 0, 4); }
    // 0c029d  lea ecx, [edx + ecx*2]
    X86_AT(c, 0xc029du);
    c.r[1] = (uint32_t)(c.r[2] + c.r[1] * 2);
    // 0c02a0  add ecx, dword ptr [ebp - 0x54]
    X86_AT(c, 0xc02a0u);
    { uint32_t v = c.r[1]; c.r[1] = x86_add(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFACu))), 0, 4); }
    // 0c02a3  mov byte ptr [ecx + 0xa4aa0], al
    X86_AT(c, 0xc02a3u);
    wr8((c.sbase[3] + (uint32_t)(c.r[1] + 0xA4AA0u)), g8(c, 0));
    // 0c02a9  inc dword ptr [ebp - 0x54]
    X86_AT(c, 0xc02a9u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFACu)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0c02ac  inc ebx
    X86_AT(c, 0xc02acu);
    { uint32_t v = c.r[3]; c.r[3] = x86_inc(c, v, 4); }
    // 0c02ad  jmp 0xc0289
    X86_AT(c, 0xc02adu);
    X86_POLL(c, 0xc0289u); goto L_c0289;
L_c02af:
    X86_TICK(c, 40);
    // 0c02af  mov eax, 0xa492c
    X86_AT(c, 0xc02afu);
    c.r[0] = 0xA492Cu;
    // 0c02b4  mov edx, esi
    X86_AT(c, 0xc02b4u);
    c.r[2] = c.r[6];
    // 0c02b6  lea ecx, [edx + edx*2]
    X86_AT(c, 0xc02b6u);
    c.r[1] = (uint32_t)(c.r[2] + c.r[2] * 2);
    // 0c02b9  shl ecx, 5
    X86_AT(c, 0xc02b9u);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[1] = r; }
    // 0c02bc  add ecx, edx
    X86_AT(c, 0xc02bcu);
    { uint32_t v = c.r[1]; c.r[1] = x86_add(c, v, c.r[2], 0, 4); }
    // 0c02be  lea ecx, [edx + ecx*2]
    X86_AT(c, 0xc02beu);
    c.r[1] = (uint32_t)(c.r[2] + c.r[1] * 2);
    // 0c02c1  mov dword ptr [ebp - 0x58], ecx
    X86_AT(c, 0xc02c1u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFA8u)), c.r[1]);
    // 0c02c4  add ecx, dword ptr [ebp - 0x54]
    X86_AT(c, 0xc02c4u);
    { uint32_t v = c.r[1]; c.r[1] = x86_add(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFACu))), 0, 4); }
    // 0c02c7  sub edx, edx
    X86_AT(c, 0xc02c7u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[2], 0, 4); }
    // 0c02c9  mov byte ptr [eax + ecx*1 + 0x174], dl
    X86_AT(c, 0xc02c9u);
    wr8((c.sbase[3] + (uint32_t)(c.r[0] + c.r[1] + 0x174u)), g8(c, 2));
    // 0c02d0  mov ecx, dword ptr [ebp - 0x58]
    X86_AT(c, 0xc02d0u);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFA8u)));
    // 0c02d3  cmp dl, byte ptr [eax + ecx*1 + 0x174]
    X86_AT(c, 0xc02d3u);
    (void)x86_sub(c, g8(c, 2), rd8((c.sbase[3] + (uint32_t)(c.r[0] + c.r[1] + 0x174u))), 0, 1);
    // 0c02da  je 0xc02e2
    X86_AT(c, 0xc02dau);
    if (x86_cc(c, 4)) { goto L_c02e2; }
    X86_TICK(c, 6);
    // 0c02dc  inc dword ptr [eax + 0x136]
    X86_AT(c, 0xc02dcu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[0] + 0x136u)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
L_c02e2:
    X86_TICK(c, 15);
    // 0c02e2  push edi
    X86_AT(c, 0xc02e2u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c02e3  push 0x4f
    X86_AT(c, 0xc02e3u);
    { uint32_t v = 0x4Fu; push32(c, v); }
    // 0c02e5  lea eax, [ebp - 0x50]
    X86_AT(c, 0xc02e5u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0c02e8  push eax
    X86_AT(c, 0xc02e8u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c02e9  call 0xd781c
    X86_AT(c, 0xc02e9u);
    push32(c, 0xc02eeu); x86_call_known(c, 0xd781cu, f_000d781c); X86_RET(c, 0xc02eeu);
    X86_TICK(c, 11);
    // 0c02ee  lea eax, [ebp - 0x50]
    X86_AT(c, 0xc02eeu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0c02f1  push eax
    X86_AT(c, 0xc02f1u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c02f2  call 0xbf39c
    X86_AT(c, 0xc02f2u);
    push32(c, 0xc02f7u); x86_call_known(c, 0xbf39cu, f_000bf39c); X86_RET(c, 0xc02f7u);
    X86_TICK(c, 14);
    // 0c02f7  add esp, 0x10
    X86_AT(c, 0xc02f7u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0c02fa  cmp byte ptr [eax], 0x59
    X86_AT(c, 0xc02fau);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[0]))), 0x59u, 0, 1);
    // 0c02fd  jne 0xc0315
    X86_AT(c, 0xc02fdu);
    if (x86_cc(c, 5)) { goto L_c0315; }
    X86_TICK(c, 20);
    // 0c02ff  mov eax, esi
    X86_AT(c, 0xc02ffu);
    c.r[0] = c.r[6];
    // 0c0301  lea edx, [eax + eax*2]
    X86_AT(c, 0xc0301u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0c0304  shl edx, 5
    X86_AT(c, 0xc0304u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0c0307  add edx, eax
    X86_AT(c, 0xc0307u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0c0309  lea edx, [eax + edx*2]
    X86_AT(c, 0xc0309u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0c030c  mov byte ptr [edx + 0xa4aad], 1
    X86_AT(c, 0xc030cu);
    wr8((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4AADu)), 0x1u);
    // 0c0313  jmp 0xc0329
    X86_AT(c, 0xc0313u);
    goto L_c0329;
L_c0315:
    X86_TICK(c, 13);
    // 0c0315  mov eax, esi
    X86_AT(c, 0xc0315u);
    c.r[0] = c.r[6];
    // 0c0317  lea edx, [eax + eax*2]
    X86_AT(c, 0xc0317u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0c031a  shl edx, 5
    X86_AT(c, 0xc031au);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0c031d  add edx, eax
    X86_AT(c, 0xc031du);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0c031f  lea edx, [eax + edx*2]
    X86_AT(c, 0xc031fu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0c0322  mov byte ptr [edx + 0xa4aad], 0
    X86_AT(c, 0xc0322u);
    wr8((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4AADu)), 0x0u);
L_c0329:
    X86_TICK(c, 15);
    // 0c0329  push edi
    X86_AT(c, 0xc0329u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c032a  push 0x4f
    X86_AT(c, 0xc032au);
    { uint32_t v = 0x4Fu; push32(c, v); }
    // 0c032c  lea eax, [ebp - 0x50]
    X86_AT(c, 0xc032cu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0c032f  push eax
    X86_AT(c, 0xc032fu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c0330  call 0xd781c
    X86_AT(c, 0xc0330u);
    push32(c, 0xc0335u); x86_call_known(c, 0xd781cu, f_000d781c); X86_RET(c, 0xc0335u);
    X86_TICK(c, 11);
    // 0c0335  lea eax, [ebp - 0x50]
    X86_AT(c, 0xc0335u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0c0338  push eax
    X86_AT(c, 0xc0338u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c0339  call 0xbf39c
    X86_AT(c, 0xc0339u);
    push32(c, 0xc033eu); x86_call_known(c, 0xbf39cu, f_000bf39c); X86_RET(c, 0xc033eu);
    X86_TICK(c, 14);
    // 0c033e  add esp, 0x10
    X86_AT(c, 0xc033eu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0c0341  cmp byte ptr [eax], 0x59
    X86_AT(c, 0xc0341u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[0]))), 0x59u, 0, 1);
    // 0c0344  jne 0xc035c
    X86_AT(c, 0xc0344u);
    if (x86_cc(c, 5)) { goto L_c035c; }
    X86_TICK(c, 20);
    // 0c0346  mov eax, esi
    X86_AT(c, 0xc0346u);
    c.r[0] = c.r[6];
    // 0c0348  lea edx, [eax + eax*2]
    X86_AT(c, 0xc0348u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0c034b  shl edx, 5
    X86_AT(c, 0xc034bu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0c034e  add edx, eax
    X86_AT(c, 0xc034eu);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0c0350  lea edx, [eax + edx*2]
    X86_AT(c, 0xc0350u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0c0353  mov byte ptr [edx + 0xa4aae], 1
    X86_AT(c, 0xc0353u);
    wr8((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4AAEu)), 0x1u);
    // 0c035a  jmp 0xc0370
    X86_AT(c, 0xc035au);
    goto L_c0370;
L_c035c:
    X86_TICK(c, 13);
    // 0c035c  mov eax, esi
    X86_AT(c, 0xc035cu);
    c.r[0] = c.r[6];
    // 0c035e  lea edx, [eax + eax*2]
    X86_AT(c, 0xc035eu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0c0361  shl edx, 5
    X86_AT(c, 0xc0361u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0c0364  add edx, eax
    X86_AT(c, 0xc0364u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0c0366  lea edx, [eax + edx*2]
    X86_AT(c, 0xc0366u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0c0369  mov byte ptr [edx + 0xa4aae], 0
    X86_AT(c, 0xc0369u);
    wr8((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4AAEu)), 0x0u);
L_c0370:
    X86_TICK(c, 15);
    // 0c0370  push edi
    X86_AT(c, 0xc0370u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c0371  push 0x4f
    X86_AT(c, 0xc0371u);
    { uint32_t v = 0x4Fu; push32(c, v); }
    // 0c0373  lea eax, [ebp - 0x50]
    X86_AT(c, 0xc0373u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0c0376  push eax
    X86_AT(c, 0xc0376u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c0377  call 0xd781c
    X86_AT(c, 0xc0377u);
    push32(c, 0xc037cu); x86_call_known(c, 0xd781cu, f_000d781c); X86_RET(c, 0xc037cu);
    X86_TICK(c, 11);
    // 0c037c  lea eax, [ebp - 0x50]
    X86_AT(c, 0xc037cu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0c037f  push eax
    X86_AT(c, 0xc037fu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c0380  call 0xbf39c
    X86_AT(c, 0xc0380u);
    push32(c, 0xc0385u); x86_call_known(c, 0xbf39cu, f_000bf39c); X86_RET(c, 0xc0385u);
    X86_TICK(c, 14);
    // 0c0385  add esp, 0x10
    X86_AT(c, 0xc0385u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0c0388  cmp byte ptr [eax], 0x59
    X86_AT(c, 0xc0388u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[0]))), 0x59u, 0, 1);
    // 0c038b  jne 0xc03a3
    X86_AT(c, 0xc038bu);
    if (x86_cc(c, 5)) { goto L_c03a3; }
    X86_TICK(c, 20);
    // 0c038d  mov eax, esi
    X86_AT(c, 0xc038du);
    c.r[0] = c.r[6];
    // 0c038f  lea edx, [eax + eax*2]
    X86_AT(c, 0xc038fu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0c0392  shl edx, 5
    X86_AT(c, 0xc0392u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0c0395  add edx, eax
    X86_AT(c, 0xc0395u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0c0397  lea edx, [eax + edx*2]
    X86_AT(c, 0xc0397u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0c039a  mov byte ptr [edx + 0xa4aaf], 1
    X86_AT(c, 0xc039au);
    wr8((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4AAFu)), 0x1u);
    // 0c03a1  jmp 0xc03b7
    X86_AT(c, 0xc03a1u);
    goto L_c03b7;
L_c03a3:
    X86_TICK(c, 13);
    // 0c03a3  mov eax, esi
    X86_AT(c, 0xc03a3u);
    c.r[0] = c.r[6];
    // 0c03a5  lea edx, [eax + eax*2]
    X86_AT(c, 0xc03a5u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0c03a8  shl edx, 5
    X86_AT(c, 0xc03a8u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0c03ab  add edx, eax
    X86_AT(c, 0xc03abu);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0c03ad  lea edx, [eax + edx*2]
    X86_AT(c, 0xc03adu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0c03b0  mov byte ptr [edx + 0xa4aaf], 0
    X86_AT(c, 0xc03b0u);
    wr8((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4AAFu)), 0x0u);
L_c03b7:
    X86_TICK(c, 15);
    // 0c03b7  push edi
    X86_AT(c, 0xc03b7u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c03b8  push 0x4f
    X86_AT(c, 0xc03b8u);
    { uint32_t v = 0x4Fu; push32(c, v); }
    // 0c03ba  lea eax, [ebp - 0x50]
    X86_AT(c, 0xc03bau);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0c03bd  push eax
    X86_AT(c, 0xc03bdu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c03be  call 0xd781c
    X86_AT(c, 0xc03beu);
    push32(c, 0xc03c3u); x86_call_known(c, 0xd781cu, f_000d781c); X86_RET(c, 0xc03c3u);
    X86_TICK(c, 11);
    // 0c03c3  lea eax, [ebp - 0x50]
    X86_AT(c, 0xc03c3u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0c03c6  push eax
    X86_AT(c, 0xc03c6u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c03c7  call 0xbf39c
    X86_AT(c, 0xc03c7u);
    push32(c, 0xc03ccu); x86_call_known(c, 0xbf39cu, f_000bf39c); X86_RET(c, 0xc03ccu);
    X86_TICK(c, 14);
    // 0c03cc  add esp, 0x10
    X86_AT(c, 0xc03ccu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0c03cf  cmp byte ptr [eax], 0x59
    X86_AT(c, 0xc03cfu);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[0]))), 0x59u, 0, 1);
    // 0c03d2  jne 0xc03ea
    X86_AT(c, 0xc03d2u);
    if (x86_cc(c, 5)) { goto L_c03ea; }
    X86_TICK(c, 20);
    // 0c03d4  mov eax, esi
    X86_AT(c, 0xc03d4u);
    c.r[0] = c.r[6];
    // 0c03d6  lea edx, [eax + eax*2]
    X86_AT(c, 0xc03d6u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0c03d9  shl edx, 5
    X86_AT(c, 0xc03d9u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0c03dc  add edx, eax
    X86_AT(c, 0xc03dcu);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0c03de  lea edx, [eax + edx*2]
    X86_AT(c, 0xc03deu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0c03e1  mov byte ptr [edx + 0xa4ab0], 1
    X86_AT(c, 0xc03e1u);
    wr8((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4AB0u)), 0x1u);
    // 0c03e8  jmp 0xc03fe
    X86_AT(c, 0xc03e8u);
    goto L_c03fe;
L_c03ea:
    X86_TICK(c, 13);
    // 0c03ea  mov eax, esi
    X86_AT(c, 0xc03eau);
    c.r[0] = c.r[6];
    // 0c03ec  lea edx, [eax + eax*2]
    X86_AT(c, 0xc03ecu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0c03ef  shl edx, 5
    X86_AT(c, 0xc03efu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0c03f2  add edx, eax
    X86_AT(c, 0xc03f2u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0c03f4  lea edx, [eax + edx*2]
    X86_AT(c, 0xc03f4u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0c03f7  mov byte ptr [edx + 0xa4ab0], 0
    X86_AT(c, 0xc03f7u);
    wr8((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4AB0u)), 0x0u);
L_c03fe:
    X86_TICK(c, 15);
    // 0c03fe  push edi
    X86_AT(c, 0xc03feu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c03ff  push 0x4f
    X86_AT(c, 0xc03ffu);
    { uint32_t v = 0x4Fu; push32(c, v); }
    // 0c0401  lea eax, [ebp - 0x50]
    X86_AT(c, 0xc0401u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0c0404  push eax
    X86_AT(c, 0xc0404u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c0405  call 0xd781c
    X86_AT(c, 0xc0405u);
    push32(c, 0xc040au); x86_call_known(c, 0xd781cu, f_000d781c); X86_RET(c, 0xc040au);
    X86_TICK(c, 11);
    // 0c040a  lea eax, [ebp - 0x50]
    X86_AT(c, 0xc040au);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0c040d  push eax
    X86_AT(c, 0xc040du);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c040e  call 0xbf39c
    X86_AT(c, 0xc040eu);
    push32(c, 0xc0413u); x86_call_known(c, 0xbf39cu, f_000bf39c); X86_RET(c, 0xc0413u);
    X86_TICK(c, 14);
    // 0c0413  add esp, 0x10
    X86_AT(c, 0xc0413u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0c0416  cmp byte ptr [eax], 0x59
    X86_AT(c, 0xc0416u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[0]))), 0x59u, 0, 1);
    // 0c0419  jne 0xc0431
    X86_AT(c, 0xc0419u);
    if (x86_cc(c, 5)) { goto L_c0431; }
    X86_TICK(c, 20);
    // 0c041b  mov eax, esi
    X86_AT(c, 0xc041bu);
    c.r[0] = c.r[6];
    // 0c041d  lea edx, [eax + eax*2]
    X86_AT(c, 0xc041du);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0c0420  shl edx, 5
    X86_AT(c, 0xc0420u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0c0423  add edx, eax
    X86_AT(c, 0xc0423u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0c0425  lea edx, [eax + edx*2]
    X86_AT(c, 0xc0425u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0c0428  mov byte ptr [edx + 0xa4ab1], 1
    X86_AT(c, 0xc0428u);
    wr8((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4AB1u)), 0x1u);
    // 0c042f  jmp 0xc0445
    X86_AT(c, 0xc042fu);
    goto L_c0445;
L_c0431:
    X86_TICK(c, 13);
    // 0c0431  mov eax, esi
    X86_AT(c, 0xc0431u);
    c.r[0] = c.r[6];
    // 0c0433  lea edx, [eax + eax*2]
    X86_AT(c, 0xc0433u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0c0436  shl edx, 5
    X86_AT(c, 0xc0436u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0c0439  add edx, eax
    X86_AT(c, 0xc0439u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0c043b  lea edx, [eax + edx*2]
    X86_AT(c, 0xc043bu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0c043e  mov byte ptr [edx + 0xa4ab1], 0
    X86_AT(c, 0xc043eu);
    wr8((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4AB1u)), 0x0u);
L_c0445:
    X86_TICK(c, 15);
    // 0c0445  push edi
    X86_AT(c, 0xc0445u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c0446  push 0x4f
    X86_AT(c, 0xc0446u);
    { uint32_t v = 0x4Fu; push32(c, v); }
    // 0c0448  lea eax, [ebp - 0x50]
    X86_AT(c, 0xc0448u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0c044b  push eax
    X86_AT(c, 0xc044bu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c044c  call 0xd781c
    X86_AT(c, 0xc044cu);
    push32(c, 0xc0451u); x86_call_known(c, 0xd781cu, f_000d781c); X86_RET(c, 0xc0451u);
    X86_TICK(c, 11);
    // 0c0451  lea eax, [ebp - 0x50]
    X86_AT(c, 0xc0451u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0c0454  push eax
    X86_AT(c, 0xc0454u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c0455  call 0xbf39c
    X86_AT(c, 0xc0455u);
    push32(c, 0xc045au); x86_call_known(c, 0xbf39cu, f_000bf39c); X86_RET(c, 0xc045au);
    X86_TICK(c, 14);
    // 0c045a  add esp, 0x10
    X86_AT(c, 0xc045au);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0c045d  cmp byte ptr [eax], 0x59
    X86_AT(c, 0xc045du);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[0]))), 0x59u, 0, 1);
    // 0c0460  jne 0xc0478
    X86_AT(c, 0xc0460u);
    if (x86_cc(c, 5)) { goto L_c0478; }
    X86_TICK(c, 20);
    // 0c0462  mov eax, esi
    X86_AT(c, 0xc0462u);
    c.r[0] = c.r[6];
    // 0c0464  lea edx, [eax + eax*2]
    X86_AT(c, 0xc0464u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0c0467  shl edx, 5
    X86_AT(c, 0xc0467u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0c046a  add edx, eax
    X86_AT(c, 0xc046au);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0c046c  lea edx, [eax + edx*2]
    X86_AT(c, 0xc046cu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0c046f  mov byte ptr [edx + 0xa4ab2], 1
    X86_AT(c, 0xc046fu);
    wr8((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4AB2u)), 0x1u);
    // 0c0476  jmp 0xc048c
    X86_AT(c, 0xc0476u);
    goto L_c048c;
L_c0478:
    X86_TICK(c, 13);
    // 0c0478  mov eax, esi
    X86_AT(c, 0xc0478u);
    c.r[0] = c.r[6];
    // 0c047a  lea edx, [eax + eax*2]
    X86_AT(c, 0xc047au);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0c047d  shl edx, 5
    X86_AT(c, 0xc047du);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0c0480  add edx, eax
    X86_AT(c, 0xc0480u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0c0482  lea edx, [eax + edx*2]
    X86_AT(c, 0xc0482u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0c0485  mov byte ptr [edx + 0xa4ab2], 0
    X86_AT(c, 0xc0485u);
    wr8((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4AB2u)), 0x0u);
L_c048c:
    X86_TICK(c, 15);
    // 0c048c  push edi
    X86_AT(c, 0xc048cu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c048d  push 0x4f
    X86_AT(c, 0xc048du);
    { uint32_t v = 0x4Fu; push32(c, v); }
    // 0c048f  lea eax, [ebp - 0x50]
    X86_AT(c, 0xc048fu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0c0492  push eax
    X86_AT(c, 0xc0492u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c0493  call 0xd781c
    X86_AT(c, 0xc0493u);
    push32(c, 0xc0498u); x86_call_known(c, 0xd781cu, f_000d781c); X86_RET(c, 0xc0498u);
    X86_TICK(c, 11);
    // 0c0498  lea eax, [ebp - 0x50]
    X86_AT(c, 0xc0498u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0c049b  push eax
    X86_AT(c, 0xc049bu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c049c  call 0xbf39c
    X86_AT(c, 0xc049cu);
    push32(c, 0xc04a1u); x86_call_known(c, 0xbf39cu, f_000bf39c); X86_RET(c, 0xc04a1u);
    X86_TICK(c, 14);
    // 0c04a1  add esp, 0x10
    X86_AT(c, 0xc04a1u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0c04a4  cmp byte ptr [eax], 0x59
    X86_AT(c, 0xc04a4u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[0]))), 0x59u, 0, 1);
    // 0c04a7  jne 0xc04bf
    X86_AT(c, 0xc04a7u);
    if (x86_cc(c, 5)) { goto L_c04bf; }
    X86_TICK(c, 20);
    // 0c04a9  mov eax, esi
    X86_AT(c, 0xc04a9u);
    c.r[0] = c.r[6];
    // 0c04ab  lea edx, [eax + eax*2]
    X86_AT(c, 0xc04abu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0c04ae  shl edx, 5
    X86_AT(c, 0xc04aeu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0c04b1  add edx, eax
    X86_AT(c, 0xc04b1u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0c04b3  lea edx, [eax + edx*2]
    X86_AT(c, 0xc04b3u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0c04b6  mov byte ptr [edx + 0xa4ab3], 1
    X86_AT(c, 0xc04b6u);
    wr8((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4AB3u)), 0x1u);
    // 0c04bd  jmp 0xc04d3
    X86_AT(c, 0xc04bdu);
    goto L_c04d3;
L_c04bf:
    X86_TICK(c, 13);
    // 0c04bf  mov eax, esi
    X86_AT(c, 0xc04bfu);
    c.r[0] = c.r[6];
    // 0c04c1  lea edx, [eax + eax*2]
    X86_AT(c, 0xc04c1u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0c04c4  shl edx, 5
    X86_AT(c, 0xc04c4u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0c04c7  add edx, eax
    X86_AT(c, 0xc04c7u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0c04c9  lea edx, [eax + edx*2]
    X86_AT(c, 0xc04c9u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0c04cc  mov byte ptr [edx + 0xa4ab3], 0
    X86_AT(c, 0xc04ccu);
    wr8((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4AB3u)), 0x0u);
L_c04d3:
    X86_TICK(c, 15);
    // 0c04d3  push edi
    X86_AT(c, 0xc04d3u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c04d4  push 0x4f
    X86_AT(c, 0xc04d4u);
    { uint32_t v = 0x4Fu; push32(c, v); }
    // 0c04d6  lea eax, [ebp - 0x50]
    X86_AT(c, 0xc04d6u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0c04d9  push eax
    X86_AT(c, 0xc04d9u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c04da  call 0xd781c
    X86_AT(c, 0xc04dau);
    push32(c, 0xc04dfu); x86_call_known(c, 0xd781cu, f_000d781c); X86_RET(c, 0xc04dfu);
    X86_TICK(c, 11);
    // 0c04df  lea eax, [ebp - 0x50]
    X86_AT(c, 0xc04dfu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0c04e2  push eax
    X86_AT(c, 0xc04e2u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c04e3  call 0xbf39c
    X86_AT(c, 0xc04e3u);
    push32(c, 0xc04e8u); x86_call_known(c, 0xbf39cu, f_000bf39c); X86_RET(c, 0xc04e8u);
    X86_TICK(c, 14);
    // 0c04e8  add esp, 0x10
    X86_AT(c, 0xc04e8u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0c04eb  cmp byte ptr [eax], 0x59
    X86_AT(c, 0xc04ebu);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[0]))), 0x59u, 0, 1);
    // 0c04ee  jne 0xc0506
    X86_AT(c, 0xc04eeu);
    if (x86_cc(c, 5)) { goto L_c0506; }
    X86_TICK(c, 20);
    // 0c04f0  mov eax, esi
    X86_AT(c, 0xc04f0u);
    c.r[0] = c.r[6];
    // 0c04f2  lea edx, [eax + eax*2]
    X86_AT(c, 0xc04f2u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0c04f5  shl edx, 5
    X86_AT(c, 0xc04f5u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0c04f8  add edx, eax
    X86_AT(c, 0xc04f8u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0c04fa  lea edx, [eax + edx*2]
    X86_AT(c, 0xc04fau);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0c04fd  mov byte ptr [edx + 0xa4ab4], 1
    X86_AT(c, 0xc04fdu);
    wr8((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4AB4u)), 0x1u);
    // 0c0504  jmp 0xc051a
    X86_AT(c, 0xc0504u);
    goto L_c051a;
L_c0506:
    X86_TICK(c, 13);
    // 0c0506  mov eax, esi
    X86_AT(c, 0xc0506u);
    c.r[0] = c.r[6];
    // 0c0508  lea edx, [eax + eax*2]
    X86_AT(c, 0xc0508u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0c050b  shl edx, 5
    X86_AT(c, 0xc050bu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0c050e  add edx, eax
    X86_AT(c, 0xc050eu);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0c0510  lea edx, [eax + edx*2]
    X86_AT(c, 0xc0510u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0c0513  mov byte ptr [edx + 0xa4ab4], 0
    X86_AT(c, 0xc0513u);
    wr8((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4AB4u)), 0x0u);
L_c051a:
    X86_TICK(c, 15);
    // 0c051a  push edi
    X86_AT(c, 0xc051au);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c051b  push 0x4f
    X86_AT(c, 0xc051bu);
    { uint32_t v = 0x4Fu; push32(c, v); }
    // 0c051d  lea eax, [ebp - 0x50]
    X86_AT(c, 0xc051du);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0c0520  push eax
    X86_AT(c, 0xc0520u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c0521  call 0xd781c
    X86_AT(c, 0xc0521u);
    push32(c, 0xc0526u); x86_call_known(c, 0xd781cu, f_000d781c); X86_RET(c, 0xc0526u);
    X86_TICK(c, 13);
    // 0c0526  lea eax, [ebp - 0x50]
    X86_AT(c, 0xc0526u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0c0529  push eax
    X86_AT(c, 0xc0529u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c052a  mov edx, eax
    X86_AT(c, 0xc052au);
    c.r[2] = c.r[0];
    // 0c052c  call 0xbf39c
    X86_AT(c, 0xc052cu);
    push32(c, 0xc0531u); x86_call_known(c, 0xbf39cu, f_000bf39c); X86_RET(c, 0xc0531u);
    X86_TICK(c, 9);
    // 0c0531  push eax
    X86_AT(c, 0xc0531u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c0532  call 0xb9080
    X86_AT(c, 0xc0532u);
    push32(c, 0xc0537u); x86_call_known(c, 0xb9080u, f_000b9080); X86_RET(c, 0xc0537u);
    X86_TICK(c, 30);
    // 0c0537  mov edx, esi
    X86_AT(c, 0xc0537u);
    c.r[2] = c.r[6];
    // 0c0539  lea ecx, [edx + edx*2]
    X86_AT(c, 0xc0539u);
    c.r[1] = (uint32_t)(c.r[2] + c.r[2] * 2);
    // 0c053c  shl ecx, 5
    X86_AT(c, 0xc053cu);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[1] = r; }
    // 0c053f  add ecx, edx
    X86_AT(c, 0xc053fu);
    { uint32_t v = c.r[1]; c.r[1] = x86_add(c, v, c.r[2], 0, 4); }
    // 0c0541  lea ecx, [edx + ecx*2]
    X86_AT(c, 0xc0541u);
    c.r[1] = (uint32_t)(c.r[2] + c.r[1] * 2);
    // 0c0544  mov dword ptr [ecx + 0xa4ab5], eax
    X86_AT(c, 0xc0544u);
    wr32((c.sbase[3] + (uint32_t)(c.r[1] + 0xA4AB5u)), c.r[0]);
    // 0c054a  push edi
    X86_AT(c, 0xc054au);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c054b  push 0x4f
    X86_AT(c, 0xc054bu);
    { uint32_t v = 0x4Fu; push32(c, v); }
    // 0c054d  lea eax, [ebp - 0x50]
    X86_AT(c, 0xc054du);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0c0550  push eax
    X86_AT(c, 0xc0550u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c0551  mov dword ptr [ebp - 0x58], ecx
    X86_AT(c, 0xc0551u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFA8u)), c.r[1]);
    // 0c0554  call 0xd781c
    X86_AT(c, 0xc0554u);
    push32(c, 0xc0559u); x86_call_known(c, 0xd781cu, f_000d781c); X86_RET(c, 0xc0559u);
    X86_TICK(c, 11);
    // 0c0559  lea eax, [ebp - 0x50]
    X86_AT(c, 0xc0559u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0c055c  push eax
    X86_AT(c, 0xc055cu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c055d  call 0xbf39c
    X86_AT(c, 0xc055du);
    push32(c, 0xc0562u); x86_call_known(c, 0xbf39cu, f_000bf39c); X86_RET(c, 0xc0562u);
    X86_TICK(c, 14);
    // 0c0562  add esp, 0x24
    X86_AT(c, 0xc0562u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x24u, 0, 4); }
    // 0c0565  cmp byte ptr [eax], 0x59
    X86_AT(c, 0xc0565u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[0]))), 0x59u, 0, 1);
    // 0c0568  jne 0xc0579
    X86_AT(c, 0xc0568u);
    if (x86_cc(c, 5)) { goto L_c0579; }
    X86_TICK(c, 13);
    // 0c056a  mov eax, dword ptr [ebp - 0x58]
    X86_AT(c, 0xc056au);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFA8u)));
    // 0c056d  mov dword ptr [eax + 0xa4ab9], 0
    X86_AT(c, 0xc056du);
    wr32((c.sbase[3] + (uint32_t)(c.r[0] + 0xA4AB9u)), 0x0u);
    // 0c0577  jmp 0xc0590
    X86_AT(c, 0xc0577u);
    goto L_c0590;
L_c0579:
    X86_TICK(c, 13);
    // 0c0579  mov eax, esi
    X86_AT(c, 0xc0579u);
    c.r[0] = c.r[6];
    // 0c057b  lea edx, [eax + eax*2]
    X86_AT(c, 0xc057bu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0c057e  shl edx, 5
    X86_AT(c, 0xc057eu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0c0581  add edx, eax
    X86_AT(c, 0xc0581u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0c0583  lea edx, [eax + edx*2]
    X86_AT(c, 0xc0583u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0c0586  mov dword ptr [edx + 0xa4ab9], 0xffffffff
    X86_AT(c, 0xc0586u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4AB9u)), 0xFFFFFFFFu);
L_c0590:
    X86_TICK(c, 15);
    // 0c0590  push edi
    X86_AT(c, 0xc0590u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c0591  push 0x4f
    X86_AT(c, 0xc0591u);
    { uint32_t v = 0x4Fu; push32(c, v); }
    // 0c0593  lea eax, [ebp - 0x50]
    X86_AT(c, 0xc0593u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0c0596  push eax
    X86_AT(c, 0xc0596u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c0597  call 0xd781c
    X86_AT(c, 0xc0597u);
    push32(c, 0xc059cu); x86_call_known(c, 0xd781cu, f_000d781c); X86_RET(c, 0xc059cu);
    X86_TICK(c, 13);
    // 0c059c  lea eax, [ebp - 0x50]
    X86_AT(c, 0xc059cu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0c059f  push eax
    X86_AT(c, 0xc059fu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c05a0  mov edx, eax
    X86_AT(c, 0xc05a0u);
    c.r[2] = c.r[0];
    // 0c05a2  call 0xbf39c
    X86_AT(c, 0xc05a2u);
    push32(c, 0xc05a7u); x86_call_known(c, 0xbf39cu, f_000bf39c); X86_RET(c, 0xc05a7u);
    X86_TICK(c, 34);
    // 0c05a7  mov ecx, esi
    X86_AT(c, 0xc05a7u);
    c.r[1] = c.r[6];
    // 0c05a9  lea edx, [ecx + ecx*2]
    X86_AT(c, 0xc05a9u);
    c.r[2] = (uint32_t)(c.r[1] + c.r[1] * 2);
    // 0c05ac  shl edx, 5
    X86_AT(c, 0xc05acu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0c05af  add edx, ecx
    X86_AT(c, 0xc05afu);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[1], 0, 4); }
    // 0c05b1  lea edx, [ecx + edx*2]
    X86_AT(c, 0xc05b1u);
    c.r[2] = (uint32_t)(c.r[1] + c.r[2] * 2);
    // 0c05b4  mov al, byte ptr [eax]
    X86_AT(c, 0xc05b4u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[0]))));
    // 0c05b6  mov byte ptr [edx + 0xa4abd], al
    X86_AT(c, 0xc05b6u);
    wr8((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4ABDu)), g8(c, 0));
    // 0c05bc  push edi
    X86_AT(c, 0xc05bcu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c05bd  push 0x4f
    X86_AT(c, 0xc05bdu);
    { uint32_t v = 0x4Fu; push32(c, v); }
    // 0c05bf  lea eax, [ebp - 0x50]
    X86_AT(c, 0xc05bfu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0c05c2  push eax
    X86_AT(c, 0xc05c2u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c05c3  mov dword ptr [ebp - 0x58], edx
    X86_AT(c, 0xc05c3u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFA8u)), c.r[2]);
    // 0c05c6  call 0xd781c
    X86_AT(c, 0xc05c6u);
    push32(c, 0xc05cbu); x86_call_known(c, 0xd781cu, f_000d781c); X86_RET(c, 0xc05cbu);
    X86_TICK(c, 13);
    // 0c05cb  lea eax, [ebp - 0x50]
    X86_AT(c, 0xc05cbu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0c05ce  push eax
    X86_AT(c, 0xc05ceu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c05cf  mov edx, eax
    X86_AT(c, 0xc05cfu);
    c.r[2] = c.r[0];
    // 0c05d1  call 0xbf39c
    X86_AT(c, 0xc05d1u);
    push32(c, 0xc05d6u); x86_call_known(c, 0xbf39cu, f_000bf39c); X86_RET(c, 0xc05d6u);
    X86_TICK(c, 9);
    // 0c05d6  push eax
    X86_AT(c, 0xc05d6u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c05d7  call 0xb9080
    X86_AT(c, 0xc05d7u);
    push32(c, 0xc05dcu); x86_call_known(c, 0xb9080u, f_000b9080); X86_RET(c, 0xc05dcu);
    X86_TICK(c, 21);
    // 0c05dc  mov edx, dword ptr [ebp - 0x58]
    X86_AT(c, 0xc05dcu);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFA8u)));
    // 0c05df  mov dword ptr [edx + 0xa4abe], eax
    X86_AT(c, 0xc05dfu);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4ABEu)), c.r[0]);
    // 0c05e5  push edi
    X86_AT(c, 0xc05e5u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c05e6  push 0x4f
    X86_AT(c, 0xc05e6u);
    { uint32_t v = 0x4Fu; push32(c, v); }
    // 0c05e8  lea eax, [ebp - 0x50]
    X86_AT(c, 0xc05e8u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0c05eb  push eax
    X86_AT(c, 0xc05ebu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c05ec  call 0xd781c
    X86_AT(c, 0xc05ecu);
    push32(c, 0xc05f1u); x86_call_known(c, 0xd781cu, f_000d781c); X86_RET(c, 0xc05f1u);
    X86_TICK(c, 13);
    // 0c05f1  lea eax, [ebp - 0x50]
    X86_AT(c, 0xc05f1u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0c05f4  push eax
    X86_AT(c, 0xc05f4u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c05f5  mov edx, eax
    X86_AT(c, 0xc05f5u);
    c.r[2] = c.r[0];
    // 0c05f7  call 0xbf39c
    X86_AT(c, 0xc05f7u);
    push32(c, 0xc05fcu); x86_call_known(c, 0xbf39cu, f_000bf39c); X86_RET(c, 0xc05fcu);
    X86_TICK(c, 9);
    // 0c05fc  push eax
    X86_AT(c, 0xc05fcu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c05fd  call 0xb9080
    X86_AT(c, 0xc05fdu);
    push32(c, 0xc0602u); x86_call_known(c, 0xb9080u, f_000b9080); X86_RET(c, 0xc0602u);
    X86_TICK(c, 21);
    // 0c0602  mov edx, dword ptr [ebp - 0x58]
    X86_AT(c, 0xc0602u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFA8u)));
    // 0c0605  mov dword ptr [edx + 0xa4ac2], eax
    X86_AT(c, 0xc0605u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4AC2u)), c.r[0]);
    // 0c060b  push edi
    X86_AT(c, 0xc060bu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c060c  push 0x4f
    X86_AT(c, 0xc060cu);
    { uint32_t v = 0x4Fu; push32(c, v); }
    // 0c060e  lea eax, [ebp - 0x50]
    X86_AT(c, 0xc060eu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0c0611  push eax
    X86_AT(c, 0xc0611u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c0612  call 0xd781c
    X86_AT(c, 0xc0612u);
    push32(c, 0xc0617u); x86_call_known(c, 0xd781cu, f_000d781c); X86_RET(c, 0xc0617u);
    X86_TICK(c, 15);
    // 0c0617  add esp, 0x44
    X86_AT(c, 0xc0617u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x44u, 0, 4); }
    // 0c061a  lea eax, [ebp - 0x50]
    X86_AT(c, 0xc061au);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0c061d  push eax
    X86_AT(c, 0xc061du);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c061e  mov edx, eax
    X86_AT(c, 0xc061eu);
    c.r[2] = c.r[0];
    // 0c0620  call 0xbf39c
    X86_AT(c, 0xc0620u);
    push32(c, 0xc0625u); x86_call_known(c, 0xbf39cu, f_000bf39c); X86_RET(c, 0xc0625u);
    X86_TICK(c, 9);
    // 0c0625  push eax
    X86_AT(c, 0xc0625u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c0626  call 0xb9080
    X86_AT(c, 0xc0626u);
    push32(c, 0xc062bu); x86_call_known(c, 0xb9080u, f_000b9080); X86_RET(c, 0xc062bu);
    X86_TICK(c, 21);
    // 0c062b  mov edx, dword ptr [ebp - 0x58]
    X86_AT(c, 0xc062bu);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFA8u)));
    // 0c062e  mov dword ptr [edx + 0xa4ac6], eax
    X86_AT(c, 0xc062eu);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4AC6u)), c.r[0]);
    // 0c0634  push edi
    X86_AT(c, 0xc0634u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c0635  push 0x4f
    X86_AT(c, 0xc0635u);
    { uint32_t v = 0x4Fu; push32(c, v); }
    // 0c0637  lea eax, [ebp - 0x50]
    X86_AT(c, 0xc0637u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0c063a  push eax
    X86_AT(c, 0xc063au);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c063b  call 0xd781c
    X86_AT(c, 0xc063bu);
    push32(c, 0xc0640u); x86_call_known(c, 0xd781cu, f_000d781c); X86_RET(c, 0xc0640u);
    X86_TICK(c, 13);
    // 0c0640  lea eax, [ebp - 0x50]
    X86_AT(c, 0xc0640u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0c0643  push eax
    X86_AT(c, 0xc0643u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c0644  mov edx, eax
    X86_AT(c, 0xc0644u);
    c.r[2] = c.r[0];
    // 0c0646  call 0xbf39c
    X86_AT(c, 0xc0646u);
    push32(c, 0xc064bu); x86_call_known(c, 0xbf39cu, f_000bf39c); X86_RET(c, 0xc064bu);
    X86_TICK(c, 9);
    // 0c064b  push eax
    X86_AT(c, 0xc064bu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c064c  call 0xb9080
    X86_AT(c, 0xc064cu);
    push32(c, 0xc0651u); x86_call_known(c, 0xb9080u, f_000b9080); X86_RET(c, 0xc0651u);
    X86_TICK(c, 21);
    // 0c0651  mov edx, dword ptr [ebp - 0x58]
    X86_AT(c, 0xc0651u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFA8u)));
    // 0c0654  mov dword ptr [edx + 0xa4aca], eax
    X86_AT(c, 0xc0654u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4ACAu)), c.r[0]);
    // 0c065a  push edi
    X86_AT(c, 0xc065au);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c065b  push 0x4f
    X86_AT(c, 0xc065bu);
    { uint32_t v = 0x4Fu; push32(c, v); }
    // 0c065d  lea eax, [ebp - 0x50]
    X86_AT(c, 0xc065du);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0c0660  push eax
    X86_AT(c, 0xc0660u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c0661  call 0xd781c
    X86_AT(c, 0xc0661u);
    push32(c, 0xc0666u); x86_call_known(c, 0xd781cu, f_000d781c); X86_RET(c, 0xc0666u);
    X86_TICK(c, 13);
    // 0c0666  lea eax, [ebp - 0x50]
    X86_AT(c, 0xc0666u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0c0669  push eax
    X86_AT(c, 0xc0669u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c066a  mov edx, eax
    X86_AT(c, 0xc066au);
    c.r[2] = c.r[0];
    // 0c066c  call 0xbf39c
    X86_AT(c, 0xc066cu);
    push32(c, 0xc0671u); x86_call_known(c, 0xbf39cu, f_000bf39c); X86_RET(c, 0xc0671u);
    X86_TICK(c, 23);
    // 0c0671  mov al, byte ptr [eax]
    X86_AT(c, 0xc0671u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[0]))));
    // 0c0673  mov ecx, dword ptr [ebp - 0x58]
    X86_AT(c, 0xc0673u);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFA8u)));
    // 0c0676  mov byte ptr [ecx + 0xa4ace], al
    X86_AT(c, 0xc0676u);
    wr8((c.sbase[3] + (uint32_t)(c.r[1] + 0xA4ACEu)), g8(c, 0));
    // 0c067c  push edi
    X86_AT(c, 0xc067cu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c067d  push 0x4f
    X86_AT(c, 0xc067du);
    { uint32_t v = 0x4Fu; push32(c, v); }
    // 0c067f  push edx
    X86_AT(c, 0xc067fu);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0c0680  call 0xd781c
    X86_AT(c, 0xc0680u);
    push32(c, 0xc0685u); x86_call_known(c, 0xd781cu, f_000d781c); X86_RET(c, 0xc0685u);
    X86_TICK(c, 13);
    // 0c0685  lea eax, [ebp - 0x50]
    X86_AT(c, 0xc0685u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0c0688  push eax
    X86_AT(c, 0xc0688u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c0689  mov edx, eax
    X86_AT(c, 0xc0689u);
    c.r[2] = c.r[0];
    // 0c068b  call 0xbf39c
    X86_AT(c, 0xc068bu);
    push32(c, 0xc0690u); x86_call_known(c, 0xbf39cu, f_000bf39c); X86_RET(c, 0xc0690u);
    X86_TICK(c, 25);
    // 0c0690  add esp, 0x3c
    X86_AT(c, 0xc0690u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x3Cu, 0, 4); }
    // 0c0693  mov al, byte ptr [eax]
    X86_AT(c, 0xc0693u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[0]))));
    // 0c0695  mov ecx, dword ptr [ebp - 0x58]
    X86_AT(c, 0xc0695u);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFA8u)));
    // 0c0698  mov byte ptr [ecx + 0xa4acf], al
    X86_AT(c, 0xc0698u);
    wr8((c.sbase[3] + (uint32_t)(c.r[1] + 0xA4ACFu)), g8(c, 0));
    // 0c069e  push edi
    X86_AT(c, 0xc069eu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c069f  push 0x4f
    X86_AT(c, 0xc069fu);
    { uint32_t v = 0x4Fu; push32(c, v); }
    // 0c06a1  push edx
    X86_AT(c, 0xc06a1u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0c06a2  call 0xd781c
    X86_AT(c, 0xc06a2u);
    push32(c, 0xc06a7u); x86_call_known(c, 0xd781cu, f_000d781c); X86_RET(c, 0xc06a7u);
    X86_TICK(c, 15);
    // 0c06a7  add esp, 0xc
    X86_AT(c, 0xc06a7u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0c06aa  lea eax, [ebp - 0x50]
    X86_AT(c, 0xc06aau);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0c06ad  push eax
    X86_AT(c, 0xc06adu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c06ae  mov edx, eax
    X86_AT(c, 0xc06aeu);
    c.r[2] = c.r[0];
    // 0c06b0  call 0xbf39c
    X86_AT(c, 0xc06b0u);
    push32(c, 0xc06b5u); x86_call_known(c, 0xbf39cu, f_000bf39c); X86_RET(c, 0xc06b5u);
    X86_TICK(c, 36);
    // 0c06b5  mov ecx, 0xa492c
    X86_AT(c, 0xc06b5u);
    c.r[1] = 0xA492Cu;
    // 0c06ba  mov ecx, esi
    X86_AT(c, 0xc06bau);
    c.r[1] = c.r[6];
    // 0c06bc  lea edx, [ecx + ecx*2]
    X86_AT(c, 0xc06bcu);
    c.r[2] = (uint32_t)(c.r[1] + c.r[1] * 2);
    // 0c06bf  shl edx, 5
    X86_AT(c, 0xc06bfu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0c06c2  add edx, ecx
    X86_AT(c, 0xc06c2u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[1], 0, 4); }
    // 0c06c4  lea edx, [ecx + edx*2]
    X86_AT(c, 0xc06c4u);
    c.r[2] = (uint32_t)(c.r[1] + c.r[2] * 2);
    // 0c06c7  mov al, byte ptr [eax]
    X86_AT(c, 0xc06c7u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[0]))));
    // 0c06c9  mov byte ptr [edx + 0xa4ad0], al
    X86_AT(c, 0xc06c9u);
    wr8((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4AD0u)), g8(c, 0));
    // 0c06cf  push edi
    X86_AT(c, 0xc06cfu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c06d0  push 0x4f
    X86_AT(c, 0xc06d0u);
    { uint32_t v = 0x4Fu; push32(c, v); }
    // 0c06d2  lea eax, [ebp - 0x50]
    X86_AT(c, 0xc06d2u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0c06d5  push eax
    X86_AT(c, 0xc06d5u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c06d6  mov dword ptr [ebp - 0x58], edx
    X86_AT(c, 0xc06d6u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFA8u)), c.r[2]);
    // 0c06d9  call 0xd781c
    X86_AT(c, 0xc06d9u);
    push32(c, 0xc06deu); x86_call_known(c, 0xd781cu, f_000d781c); X86_RET(c, 0xc06deu);
    X86_TICK(c, 13);
    // 0c06de  lea eax, [ebp - 0x50]
    X86_AT(c, 0xc06deu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0c06e1  push eax
    X86_AT(c, 0xc06e1u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c06e2  mov edx, eax
    X86_AT(c, 0xc06e2u);
    c.r[2] = c.r[0];
    // 0c06e4  call 0xbf39c
    X86_AT(c, 0xc06e4u);
    push32(c, 0xc06e9u); x86_call_known(c, 0xbf39cu, f_000bf39c); X86_RET(c, 0xc06e9u);
    X86_TICK(c, 9);
    // 0c06e9  push eax
    X86_AT(c, 0xc06e9u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c06ea  call 0xb9080
    X86_AT(c, 0xc06eau);
    push32(c, 0xc06efu); x86_call_known(c, 0xb9080u, f_000b9080); X86_RET(c, 0xc06efu);
    X86_TICK(c, 21);
    // 0c06ef  mov edx, dword ptr [ebp - 0x58]
    X86_AT(c, 0xc06efu);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFA8u)));
    // 0c06f2  mov dword ptr [edx + 0xa4ad1], eax
    X86_AT(c, 0xc06f2u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4AD1u)), c.r[0]);
    // 0c06f8  push edi
    X86_AT(c, 0xc06f8u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c06f9  push 0x4f
    X86_AT(c, 0xc06f9u);
    { uint32_t v = 0x4Fu; push32(c, v); }
    // 0c06fb  lea eax, [ebp - 0x50]
    X86_AT(c, 0xc06fbu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0c06fe  push eax
    X86_AT(c, 0xc06feu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c06ff  call 0xd781c
    X86_AT(c, 0xc06ffu);
    push32(c, 0xc0704u); x86_call_known(c, 0xd781cu, f_000d781c); X86_RET(c, 0xc0704u);
    X86_TICK(c, 13);
    // 0c0704  lea eax, [ebp - 0x50]
    X86_AT(c, 0xc0704u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0c0707  push eax
    X86_AT(c, 0xc0707u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c0708  mov edx, eax
    X86_AT(c, 0xc0708u);
    c.r[2] = c.r[0];
    // 0c070a  call 0xbf39c
    X86_AT(c, 0xc070au);
    push32(c, 0xc070fu); x86_call_known(c, 0xbf39cu, f_000bf39c); X86_RET(c, 0xc070fu);
    X86_TICK(c, 9);
    // 0c070f  push eax
    X86_AT(c, 0xc070fu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c0710  call 0xb9080
    X86_AT(c, 0xc0710u);
    push32(c, 0xc0715u); x86_call_known(c, 0xb9080u, f_000b9080); X86_RET(c, 0xc0715u);
    X86_TICK(c, 21);
    // 0c0715  mov edx, dword ptr [ebp - 0x58]
    X86_AT(c, 0xc0715u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFA8u)));
    // 0c0718  mov dword ptr [edx + 0xa4ad5], eax
    X86_AT(c, 0xc0718u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4AD5u)), c.r[0]);
    // 0c071e  push edi
    X86_AT(c, 0xc071eu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c071f  push 0x4f
    X86_AT(c, 0xc071fu);
    { uint32_t v = 0x4Fu; push32(c, v); }
    // 0c0721  lea eax, [ebp - 0x50]
    X86_AT(c, 0xc0721u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0c0724  push eax
    X86_AT(c, 0xc0724u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c0725  call 0xd781c
    X86_AT(c, 0xc0725u);
    push32(c, 0xc072au); x86_call_known(c, 0xd781cu, f_000d781c); X86_RET(c, 0xc072au);
    X86_TICK(c, 13);
    // 0c072a  lea eax, [ebp - 0x50]
    X86_AT(c, 0xc072au);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0c072d  push eax
    X86_AT(c, 0xc072du);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c072e  mov edx, eax
    X86_AT(c, 0xc072eu);
    c.r[2] = c.r[0];
    // 0c0730  call 0xbf39c
    X86_AT(c, 0xc0730u);
    push32(c, 0xc0735u); x86_call_known(c, 0xbf39cu, f_000bf39c); X86_RET(c, 0xc0735u);
    X86_TICK(c, 11);
    // 0c0735  add esp, 0x3c
    X86_AT(c, 0xc0735u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x3Cu, 0, 4); }
    // 0c0738  push eax
    X86_AT(c, 0xc0738u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c0739  call 0xb9080
    X86_AT(c, 0xc0739u);
    push32(c, 0xc073eu); x86_call_known(c, 0xb9080u, f_000b9080); X86_RET(c, 0xc073eu);
    X86_TICK(c, 21);
    // 0c073e  mov edx, dword ptr [ebp - 0x58]
    X86_AT(c, 0xc073eu);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFA8u)));
    // 0c0741  mov dword ptr [edx + 0xa4ad9], eax
    X86_AT(c, 0xc0741u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4AD9u)), c.r[0]);
    // 0c0747  push edi
    X86_AT(c, 0xc0747u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c0748  push 0x4f
    X86_AT(c, 0xc0748u);
    { uint32_t v = 0x4Fu; push32(c, v); }
    // 0c074a  lea eax, [ebp - 0x50]
    X86_AT(c, 0xc074au);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0c074d  push eax
    X86_AT(c, 0xc074du);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c074e  call 0xd781c
    X86_AT(c, 0xc074eu);
    push32(c, 0xc0753u); x86_call_known(c, 0xd781cu, f_000d781c); X86_RET(c, 0xc0753u);
    X86_TICK(c, 13);
    // 0c0753  lea eax, [ebp - 0x50]
    X86_AT(c, 0xc0753u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0c0756  push eax
    X86_AT(c, 0xc0756u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c0757  mov edx, eax
    X86_AT(c, 0xc0757u);
    c.r[2] = c.r[0];
    // 0c0759  call 0xbf39c
    X86_AT(c, 0xc0759u);
    push32(c, 0xc075eu); x86_call_known(c, 0xbf39cu, f_000bf39c); X86_RET(c, 0xc075eu);
    X86_TICK(c, 9);
    // 0c075e  push eax
    X86_AT(c, 0xc075eu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c075f  call 0xb9080
    X86_AT(c, 0xc075fu);
    push32(c, 0xc0764u); x86_call_known(c, 0xb9080u, f_000b9080); X86_RET(c, 0xc0764u);
    X86_TICK(c, 21);
    // 0c0764  mov edx, dword ptr [ebp - 0x58]
    X86_AT(c, 0xc0764u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFA8u)));
    // 0c0767  mov dword ptr [edx + 0xa4add], eax
    X86_AT(c, 0xc0767u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4ADDu)), c.r[0]);
    // 0c076d  push edi
    X86_AT(c, 0xc076du);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c076e  push 0x4f
    X86_AT(c, 0xc076eu);
    { uint32_t v = 0x4Fu; push32(c, v); }
    // 0c0770  lea eax, [ebp - 0x50]
    X86_AT(c, 0xc0770u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0c0773  push eax
    X86_AT(c, 0xc0773u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c0774  call 0xd781c
    X86_AT(c, 0xc0774u);
    push32(c, 0xc0779u); x86_call_known(c, 0xd781cu, f_000d781c); X86_RET(c, 0xc0779u);
    X86_TICK(c, 13);
    // 0c0779  lea eax, [ebp - 0x50]
    X86_AT(c, 0xc0779u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0c077c  push eax
    X86_AT(c, 0xc077cu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c077d  mov edx, eax
    X86_AT(c, 0xc077du);
    c.r[2] = c.r[0];
    // 0c077f  call 0xbf39c
    X86_AT(c, 0xc077fu);
    push32(c, 0xc0784u); x86_call_known(c, 0xbf39cu, f_000bf39c); X86_RET(c, 0xc0784u);
    X86_TICK(c, 9);
    // 0c0784  push eax
    X86_AT(c, 0xc0784u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c0785  call 0xb9080
    X86_AT(c, 0xc0785u);
    push32(c, 0xc078au); x86_call_known(c, 0xb9080u, f_000b9080); X86_RET(c, 0xc078au);
    X86_TICK(c, 21);
    // 0c078a  mov edx, dword ptr [ebp - 0x58]
    X86_AT(c, 0xc078au);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFA8u)));
    // 0c078d  mov dword ptr [edx + 0xa4ae5], eax
    X86_AT(c, 0xc078du);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4AE5u)), c.r[0]);
    // 0c0793  push edi
    X86_AT(c, 0xc0793u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c0794  push 0x4f
    X86_AT(c, 0xc0794u);
    { uint32_t v = 0x4Fu; push32(c, v); }
    // 0c0796  lea eax, [ebp - 0x50]
    X86_AT(c, 0xc0796u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0c0799  push eax
    X86_AT(c, 0xc0799u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c079a  call 0xd781c
    X86_AT(c, 0xc079au);
    push32(c, 0xc079fu); x86_call_known(c, 0xd781cu, f_000d781c); X86_RET(c, 0xc079fu);
    X86_TICK(c, 13);
    // 0c079f  lea eax, [ebp - 0x50]
    X86_AT(c, 0xc079fu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0c07a2  push eax
    X86_AT(c, 0xc07a2u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c07a3  mov edx, eax
    X86_AT(c, 0xc07a3u);
    c.r[2] = c.r[0];
    // 0c07a5  call 0xbf39c
    X86_AT(c, 0xc07a5u);
    push32(c, 0xc07aau); x86_call_known(c, 0xbf39cu, f_000bf39c); X86_RET(c, 0xc07aau);
    X86_TICK(c, 11);
    // 0c07aa  add esp, 0x3c
    X86_AT(c, 0xc07aau);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x3Cu, 0, 4); }
    // 0c07ad  push eax
    X86_AT(c, 0xc07adu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c07ae  call 0xb9080
    X86_AT(c, 0xc07aeu);
    push32(c, 0xc07b3u); x86_call_known(c, 0xb9080u, f_000b9080); X86_RET(c, 0xc07b3u);
    X86_TICK(c, 21);
    // 0c07b3  mov edx, dword ptr [ebp - 0x58]
    X86_AT(c, 0xc07b3u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFA8u)));
    // 0c07b6  mov dword ptr [edx + 0xa4ae1], eax
    X86_AT(c, 0xc07b6u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4AE1u)), c.r[0]);
    // 0c07bc  push edi
    X86_AT(c, 0xc07bcu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c07bd  push 0x4f
    X86_AT(c, 0xc07bdu);
    { uint32_t v = 0x4Fu; push32(c, v); }
    // 0c07bf  lea eax, [ebp - 0x50]
    X86_AT(c, 0xc07bfu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0c07c2  push eax
    X86_AT(c, 0xc07c2u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c07c3  call 0xd781c
    X86_AT(c, 0xc07c3u);
    push32(c, 0xc07c8u); x86_call_known(c, 0xd781cu, f_000d781c); X86_RET(c, 0xc07c8u);
    X86_TICK(c, 11);
    // 0c07c8  lea eax, [ebp - 0x50]
    X86_AT(c, 0xc07c8u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0c07cb  push eax
    X86_AT(c, 0xc07cbu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c07cc  call 0xbf39c
    X86_AT(c, 0xc07ccu);
    push32(c, 0xc07d1u); x86_call_known(c, 0xbf39cu, f_000bf39c); X86_RET(c, 0xc07d1u);
    X86_TICK(c, 9);
    // 0c07d1  push eax
    X86_AT(c, 0xc07d1u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c07d2  call 0xb9080
    X86_AT(c, 0xc07d2u);
    push32(c, 0xc07d7u); x86_call_known(c, 0xb9080u, f_000b9080); X86_RET(c, 0xc07d7u);
    X86_TICK(c, 23);
    // 0c07d7  mov edx, dword ptr [ebp - 0x58]
    X86_AT(c, 0xc07d7u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFA8u)));
    // 0c07da  mov dword ptr [edx + 0xa4ae9], eax
    X86_AT(c, 0xc07dau);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4AE9u)), c.r[0]);
    // 0c07e0  add esp, 0x18
    X86_AT(c, 0xc07e0u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x18u, 0, 4); }
    // 0c07e3  push edi
    X86_AT(c, 0xc07e3u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c07e4  push 0x4f
    X86_AT(c, 0xc07e4u);
    { uint32_t v = 0x4Fu; push32(c, v); }
    // 0c07e6  lea eax, [ebp - 0x50]
    X86_AT(c, 0xc07e6u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0c07e9  push eax
    X86_AT(c, 0xc07e9u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c07ea  call 0xd781c
    X86_AT(c, 0xc07eau);
    push32(c, 0xc07efu); x86_call_known(c, 0xd781cu, f_000d781c); X86_RET(c, 0xc07efu);
    X86_TICK(c, 13);
    // 0c07ef  lea eax, [ebp - 0x50]
    X86_AT(c, 0xc07efu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0c07f2  push eax
    X86_AT(c, 0xc07f2u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c07f3  mov edx, eax
    X86_AT(c, 0xc07f3u);
    c.r[2] = c.r[0];
    // 0c07f5  call 0xbf39c
    X86_AT(c, 0xc07f5u);
    push32(c, 0xc07fau); x86_call_known(c, 0xbf39cu, f_000bf39c); X86_RET(c, 0xc07fau);
    X86_TICK(c, 9);
    // 0c07fa  push eax
    X86_AT(c, 0xc07fau);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c07fb  call 0xb9080
    X86_AT(c, 0xc07fbu);
    push32(c, 0xc0800u); x86_call_known(c, 0xb9080u, f_000b9080); X86_RET(c, 0xc0800u);
    X86_TICK(c, 30);
    // 0c0800  mov edx, esi
    X86_AT(c, 0xc0800u);
    c.r[2] = c.r[6];
    // 0c0802  lea ecx, [edx + edx*2]
    X86_AT(c, 0xc0802u);
    c.r[1] = (uint32_t)(c.r[2] + c.r[2] * 2);
    // 0c0805  shl ecx, 5
    X86_AT(c, 0xc0805u);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[1] = r; }
    // 0c0808  add ecx, edx
    X86_AT(c, 0xc0808u);
    { uint32_t v = c.r[1]; c.r[1] = x86_add(c, v, c.r[2], 0, 4); }
    // 0c080a  lea ecx, [edx + ecx*2]
    X86_AT(c, 0xc080au);
    c.r[1] = (uint32_t)(c.r[2] + c.r[1] * 2);
    // 0c080d  mov dword ptr [ecx + 0xa4aed], eax
    X86_AT(c, 0xc080du);
    wr32((c.sbase[3] + (uint32_t)(c.r[1] + 0xA4AEDu)), c.r[0]);
    // 0c0813  push edi
    X86_AT(c, 0xc0813u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c0814  push 0x4f
    X86_AT(c, 0xc0814u);
    { uint32_t v = 0x4Fu; push32(c, v); }
    // 0c0816  lea eax, [ebp - 0x50]
    X86_AT(c, 0xc0816u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0c0819  push eax
    X86_AT(c, 0xc0819u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c081a  mov dword ptr [ebp - 0x58], ecx
    X86_AT(c, 0xc081au);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFA8u)), c.r[1]);
    // 0c081d  call 0xd781c
    X86_AT(c, 0xc081du);
    push32(c, 0xc0822u); x86_call_known(c, 0xd781cu, f_000d781c); X86_RET(c, 0xc0822u);
    X86_TICK(c, 13);
    // 0c0822  lea eax, [ebp - 0x50]
    X86_AT(c, 0xc0822u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0c0825  push eax
    X86_AT(c, 0xc0825u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c0826  mov edx, eax
    X86_AT(c, 0xc0826u);
    c.r[2] = c.r[0];
    // 0c0828  call 0xbf39c
    X86_AT(c, 0xc0828u);
    push32(c, 0xc082du); x86_call_known(c, 0xbf39cu, f_000bf39c); X86_RET(c, 0xc082du);
    X86_TICK(c, 9);
    // 0c082d  push eax
    X86_AT(c, 0xc082du);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c082e  call 0xb9080
    X86_AT(c, 0xc082eu);
    push32(c, 0xc0833u); x86_call_known(c, 0xb9080u, f_000b9080); X86_RET(c, 0xc0833u);
    X86_TICK(c, 21);
    // 0c0833  mov edx, dword ptr [ebp - 0x58]
    X86_AT(c, 0xc0833u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFA8u)));
    // 0c0836  mov dword ptr [edx + 0xa4af1], eax
    X86_AT(c, 0xc0836u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4AF1u)), c.r[0]);
    // 0c083c  push edi
    X86_AT(c, 0xc083cu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c083d  push 0x4f
    X86_AT(c, 0xc083du);
    { uint32_t v = 0x4Fu; push32(c, v); }
    // 0c083f  lea eax, [ebp - 0x50]
    X86_AT(c, 0xc083fu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0c0842  push eax
    X86_AT(c, 0xc0842u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c0843  call 0xd781c
    X86_AT(c, 0xc0843u);
    push32(c, 0xc0848u); x86_call_known(c, 0xd781cu, f_000d781c); X86_RET(c, 0xc0848u);
    X86_TICK(c, 13);
    // 0c0848  lea eax, [ebp - 0x50]
    X86_AT(c, 0xc0848u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0c084b  push eax
    X86_AT(c, 0xc084bu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c084c  mov edx, eax
    X86_AT(c, 0xc084cu);
    c.r[2] = c.r[0];
    // 0c084e  call 0xbf39c
    X86_AT(c, 0xc084eu);
    push32(c, 0xc0853u); x86_call_known(c, 0xbf39cu, f_000bf39c); X86_RET(c, 0xc0853u);
    X86_TICK(c, 9);
    // 0c0853  push eax
    X86_AT(c, 0xc0853u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c0854  call 0xb9080
    X86_AT(c, 0xc0854u);
    push32(c, 0xc0859u); x86_call_known(c, 0xb9080u, f_000b9080); X86_RET(c, 0xc0859u);
    X86_TICK(c, 23);
    // 0c0859  add esp, 0x3c
    X86_AT(c, 0xc0859u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x3Cu, 0, 4); }
    // 0c085c  mov edx, dword ptr [ebp - 0x58]
    X86_AT(c, 0xc085cu);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFA8u)));
    // 0c085f  mov dword ptr [edx + 0xa4af5], eax
    X86_AT(c, 0xc085fu);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4AF5u)), c.r[0]);
    // 0c0865  push edi
    X86_AT(c, 0xc0865u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c0866  push 0x4f
    X86_AT(c, 0xc0866u);
    { uint32_t v = 0x4Fu; push32(c, v); }
    // 0c0868  lea eax, [ebp - 0x50]
    X86_AT(c, 0xc0868u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0c086b  push eax
    X86_AT(c, 0xc086bu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c086c  call 0xd781c
    X86_AT(c, 0xc086cu);
    push32(c, 0xc0871u); x86_call_known(c, 0xd781cu, f_000d781c); X86_RET(c, 0xc0871u);
    X86_TICK(c, 13);
    // 0c0871  lea eax, [ebp - 0x50]
    X86_AT(c, 0xc0871u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0c0874  push eax
    X86_AT(c, 0xc0874u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c0875  mov edx, eax
    X86_AT(c, 0xc0875u);
    c.r[2] = c.r[0];
    // 0c0877  call 0xbf39c
    X86_AT(c, 0xc0877u);
    push32(c, 0xc087cu); x86_call_known(c, 0xbf39cu, f_000bf39c); X86_RET(c, 0xc087cu);
    X86_TICK(c, 23);
    // 0c087c  mov al, byte ptr [eax]
    X86_AT(c, 0xc087cu);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[0]))));
    // 0c087e  mov ecx, dword ptr [ebp - 0x58]
    X86_AT(c, 0xc087eu);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFA8u)));
    // 0c0881  mov byte ptr [ecx + 0xa4af9], al
    X86_AT(c, 0xc0881u);
    wr8((c.sbase[3] + (uint32_t)(c.r[1] + 0xA4AF9u)), g8(c, 0));
    // 0c0887  push edi
    X86_AT(c, 0xc0887u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c0888  push 0x4f
    X86_AT(c, 0xc0888u);
    { uint32_t v = 0x4Fu; push32(c, v); }
    // 0c088a  push edx
    X86_AT(c, 0xc088au);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0c088b  call 0xd781c
    X86_AT(c, 0xc088bu);
    push32(c, 0xc0890u); x86_call_known(c, 0xd781cu, f_000d781c); X86_RET(c, 0xc0890u);
    X86_TICK(c, 13);
    // 0c0890  lea eax, [ebp - 0x50]
    X86_AT(c, 0xc0890u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0c0893  push eax
    X86_AT(c, 0xc0893u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c0894  mov edx, eax
    X86_AT(c, 0xc0894u);
    c.r[2] = c.r[0];
    // 0c0896  call 0xbf39c
    X86_AT(c, 0xc0896u);
    push32(c, 0xc089bu); x86_call_known(c, 0xbf39cu, f_000bf39c); X86_RET(c, 0xc089bu);
    X86_TICK(c, 9);
    // 0c089b  push eax
    X86_AT(c, 0xc089bu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c089c  call 0xb9080
    X86_AT(c, 0xc089cu);
    push32(c, 0xc08a1u); x86_call_known(c, 0xb9080u, f_000b9080); X86_RET(c, 0xc08a1u);
    X86_TICK(c, 21);
    // 0c08a1  mov edx, dword ptr [ebp - 0x58]
    X86_AT(c, 0xc08a1u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFA8u)));
    // 0c08a4  mov dword ptr [edx + 0xa4afa], eax
    X86_AT(c, 0xc08a4u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4AFAu)), c.r[0]);
    // 0c08aa  push edi
    X86_AT(c, 0xc08aau);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c08ab  push 0x4f
    X86_AT(c, 0xc08abu);
    { uint32_t v = 0x4Fu; push32(c, v); }
    // 0c08ad  lea eax, [ebp - 0x50]
    X86_AT(c, 0xc08adu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0c08b0  push eax
    X86_AT(c, 0xc08b0u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c08b1  call 0xd781c
    X86_AT(c, 0xc08b1u);
    push32(c, 0xc08b6u); x86_call_known(c, 0xd781cu, f_000d781c); X86_RET(c, 0xc08b6u);
    X86_TICK(c, 13);
    // 0c08b6  lea eax, [ebp - 0x50]
    X86_AT(c, 0xc08b6u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0c08b9  push eax
    X86_AT(c, 0xc08b9u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c08ba  mov edx, eax
    X86_AT(c, 0xc08bau);
    c.r[2] = c.r[0];
    // 0c08bc  call 0xbf39c
    X86_AT(c, 0xc08bcu);
    push32(c, 0xc08c1u); x86_call_known(c, 0xbf39cu, f_000bf39c); X86_RET(c, 0xc08c1u);
    X86_TICK(c, 9);
    // 0c08c1  push eax
    X86_AT(c, 0xc08c1u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c08c2  call 0xb9080
    X86_AT(c, 0xc08c2u);
    push32(c, 0xc08c7u); x86_call_known(c, 0xb9080u, f_000b9080); X86_RET(c, 0xc08c7u);
    X86_TICK(c, 21);
    // 0c08c7  mov edx, dword ptr [ebp - 0x58]
    X86_AT(c, 0xc08c7u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFA8u)));
    // 0c08ca  mov dword ptr [edx + 0xa4afe], eax
    X86_AT(c, 0xc08cau);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4AFEu)), c.r[0]);
    // 0c08d0  push edi
    X86_AT(c, 0xc08d0u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c08d1  push 0x4f
    X86_AT(c, 0xc08d1u);
    { uint32_t v = 0x4Fu; push32(c, v); }
    // 0c08d3  lea eax, [ebp - 0x50]
    X86_AT(c, 0xc08d3u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0c08d6  push eax
    X86_AT(c, 0xc08d6u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c08d7  call 0xd781c
    X86_AT(c, 0xc08d7u);
    push32(c, 0xc08dcu); x86_call_known(c, 0xd781cu, f_000d781c); X86_RET(c, 0xc08dcu);
    X86_TICK(c, 15);
    // 0c08dc  add esp, 0x44
    X86_AT(c, 0xc08dcu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x44u, 0, 4); }
    // 0c08df  lea eax, [ebp - 0x50]
    X86_AT(c, 0xc08dfu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0c08e2  push eax
    X86_AT(c, 0xc08e2u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c08e3  mov edx, eax
    X86_AT(c, 0xc08e3u);
    c.r[2] = c.r[0];
    // 0c08e5  call 0xbf39c
    X86_AT(c, 0xc08e5u);
    push32(c, 0xc08eau); x86_call_known(c, 0xbf39cu, f_000bf39c); X86_RET(c, 0xc08eau);
    X86_TICK(c, 9);
    // 0c08ea  push eax
    X86_AT(c, 0xc08eau);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c08eb  call 0xb9080
    X86_AT(c, 0xc08ebu);
    push32(c, 0xc08f0u); x86_call_known(c, 0xb9080u, f_000b9080); X86_RET(c, 0xc08f0u);
    X86_TICK(c, 21);
    // 0c08f0  mov edx, dword ptr [ebp - 0x58]
    X86_AT(c, 0xc08f0u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFA8u)));
    // 0c08f3  mov dword ptr [edx + 0xa4b02], eax
    X86_AT(c, 0xc08f3u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4B02u)), c.r[0]);
    // 0c08f9  push edi
    X86_AT(c, 0xc08f9u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c08fa  push 0x4f
    X86_AT(c, 0xc08fau);
    { uint32_t v = 0x4Fu; push32(c, v); }
    // 0c08fc  lea eax, [ebp - 0x50]
    X86_AT(c, 0xc08fcu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0c08ff  push eax
    X86_AT(c, 0xc08ffu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c0900  call 0xd781c
    X86_AT(c, 0xc0900u);
    push32(c, 0xc0905u); x86_call_known(c, 0xd781cu, f_000d781c); X86_RET(c, 0xc0905u);
    X86_TICK(c, 15);
    // 0c0905  add esp, 0x14
    X86_AT(c, 0xc0905u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x14u, 0, 4); }
    // 0c0908  lea eax, [ebp - 0x50]
    X86_AT(c, 0xc0908u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0c090b  push eax
    X86_AT(c, 0xc090bu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c090c  mov edx, eax
    X86_AT(c, 0xc090cu);
    c.r[2] = c.r[0];
    // 0c090e  call 0xbf39c
    X86_AT(c, 0xc090eu);
    push32(c, 0xc0913u); x86_call_known(c, 0xbf39cu, f_000bf39c); X86_RET(c, 0xc0913u);
    X86_TICK(c, 9);
    // 0c0913  push eax
    X86_AT(c, 0xc0913u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c0914  call 0xb9080
    X86_AT(c, 0xc0914u);
    push32(c, 0xc0919u); x86_call_known(c, 0xb9080u, f_000b9080); X86_RET(c, 0xc0919u);
    X86_TICK(c, 32);
    // 0c0919  mov edx, 0xa492c
    X86_AT(c, 0xc0919u);
    c.r[2] = 0xA492Cu;
    // 0c091e  mov ecx, esi
    X86_AT(c, 0xc091eu);
    c.r[1] = c.r[6];
    // 0c0920  lea edx, [ecx + ecx*2]
    X86_AT(c, 0xc0920u);
    c.r[2] = (uint32_t)(c.r[1] + c.r[1] * 2);
    // 0c0923  shl edx, 5
    X86_AT(c, 0xc0923u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0c0926  add edx, ecx
    X86_AT(c, 0xc0926u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[1], 0, 4); }
    // 0c0928  lea edx, [ecx + edx*2]
    X86_AT(c, 0xc0928u);
    c.r[2] = (uint32_t)(c.r[1] + c.r[2] * 2);
    // 0c092b  mov dword ptr [edx + 0xa4b06], eax
    X86_AT(c, 0xc092bu);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4B06u)), c.r[0]);
    // 0c0931  push edi
    X86_AT(c, 0xc0931u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c0932  push 0x4f
    X86_AT(c, 0xc0932u);
    { uint32_t v = 0x4Fu; push32(c, v); }
    // 0c0934  lea eax, [ebp - 0x50]
    X86_AT(c, 0xc0934u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0c0937  push eax
    X86_AT(c, 0xc0937u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c0938  mov dword ptr [ebp - 0x58], edx
    X86_AT(c, 0xc0938u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFA8u)), c.r[2]);
    // 0c093b  call 0xd781c
    X86_AT(c, 0xc093bu);
    push32(c, 0xc0940u); x86_call_known(c, 0xd781cu, f_000d781c); X86_RET(c, 0xc0940u);
    X86_TICK(c, 13);
    // 0c0940  lea eax, [ebp - 0x50]
    X86_AT(c, 0xc0940u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0c0943  push eax
    X86_AT(c, 0xc0943u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c0944  mov edx, eax
    X86_AT(c, 0xc0944u);
    c.r[2] = c.r[0];
    // 0c0946  call 0xbf39c
    X86_AT(c, 0xc0946u);
    push32(c, 0xc094bu); x86_call_known(c, 0xbf39cu, f_000bf39c); X86_RET(c, 0xc094bu);
    X86_TICK(c, 9);
    // 0c094b  push eax
    X86_AT(c, 0xc094bu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c094c  call 0xb9080
    X86_AT(c, 0xc094cu);
    push32(c, 0xc0951u); x86_call_known(c, 0xb9080u, f_000b9080); X86_RET(c, 0xc0951u);
    X86_TICK(c, 21);
    // 0c0951  mov edx, dword ptr [ebp - 0x58]
    X86_AT(c, 0xc0951u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFA8u)));
    // 0c0954  mov dword ptr [edx + 0xa4b0a], eax
    X86_AT(c, 0xc0954u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4B0Au)), c.r[0]);
    // 0c095a  push edi
    X86_AT(c, 0xc095au);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c095b  push 0x4f
    X86_AT(c, 0xc095bu);
    { uint32_t v = 0x4Fu; push32(c, v); }
    // 0c095d  lea eax, [ebp - 0x50]
    X86_AT(c, 0xc095du);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0c0960  push eax
    X86_AT(c, 0xc0960u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c0961  call 0xd781c
    X86_AT(c, 0xc0961u);
    push32(c, 0xc0966u); x86_call_known(c, 0xd781cu, f_000d781c); X86_RET(c, 0xc0966u);
    X86_TICK(c, 13);
    // 0c0966  lea eax, [ebp - 0x50]
    X86_AT(c, 0xc0966u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0c0969  push eax
    X86_AT(c, 0xc0969u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c096a  mov edx, eax
    X86_AT(c, 0xc096au);
    c.r[2] = c.r[0];
    // 0c096c  call 0xbf39c
    X86_AT(c, 0xc096cu);
    push32(c, 0xc0971u); x86_call_known(c, 0xbf39cu, f_000bf39c); X86_RET(c, 0xc0971u);
    X86_TICK(c, 9);
    // 0c0971  push eax
    X86_AT(c, 0xc0971u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c0972  call 0xb9080
    X86_AT(c, 0xc0972u);
    push32(c, 0xc0977u); x86_call_known(c, 0xb9080u, f_000b9080); X86_RET(c, 0xc0977u);
    X86_TICK(c, 21);
    // 0c0977  mov edx, dword ptr [ebp - 0x58]
    X86_AT(c, 0xc0977u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFA8u)));
    // 0c097a  mov dword ptr [edx + 0xa4b0e], eax
    X86_AT(c, 0xc097au);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4B0Eu)), c.r[0]);
    // 0c0980  push edi
    X86_AT(c, 0xc0980u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c0981  push 0x4f
    X86_AT(c, 0xc0981u);
    { uint32_t v = 0x4Fu; push32(c, v); }
    // 0c0983  lea eax, [ebp - 0x50]
    X86_AT(c, 0xc0983u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0c0986  push eax
    X86_AT(c, 0xc0986u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c0987  call 0xd781c
    X86_AT(c, 0xc0987u);
    push32(c, 0xc098cu); x86_call_known(c, 0xd781cu, f_000d781c); X86_RET(c, 0xc098cu);
    X86_TICK(c, 15);
    // 0c098c  add esp, 0x3c
    X86_AT(c, 0xc098cu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x3Cu, 0, 4); }
    // 0c098f  lea eax, [ebp - 0x50]
    X86_AT(c, 0xc098fu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0c0992  push eax
    X86_AT(c, 0xc0992u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c0993  mov edx, eax
    X86_AT(c, 0xc0993u);
    c.r[2] = c.r[0];
    // 0c0995  call 0xbf39c
    X86_AT(c, 0xc0995u);
    push32(c, 0xc099au); x86_call_known(c, 0xbf39cu, f_000bf39c); X86_RET(c, 0xc099au);
    X86_TICK(c, 9);
    // 0c099a  push eax
    X86_AT(c, 0xc099au);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c099b  call 0xb9080
    X86_AT(c, 0xc099bu);
    push32(c, 0xc09a0u); x86_call_known(c, 0xb9080u, f_000b9080); X86_RET(c, 0xc09a0u);
    X86_TICK(c, 21);
    // 0c09a0  mov edx, dword ptr [ebp - 0x58]
    X86_AT(c, 0xc09a0u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFA8u)));
    // 0c09a3  mov dword ptr [edx + 0xa4b12], eax
    X86_AT(c, 0xc09a3u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4B12u)), c.r[0]);
    // 0c09a9  push edi
    X86_AT(c, 0xc09a9u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c09aa  push 0x4f
    X86_AT(c, 0xc09aau);
    { uint32_t v = 0x4Fu; push32(c, v); }
    // 0c09ac  lea eax, [ebp - 0x50]
    X86_AT(c, 0xc09acu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0c09af  push eax
    X86_AT(c, 0xc09afu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c09b0  call 0xd781c
    X86_AT(c, 0xc09b0u);
    push32(c, 0xc09b5u); x86_call_known(c, 0xd781cu, f_000d781c); X86_RET(c, 0xc09b5u);
    X86_TICK(c, 13);
    // 0c09b5  lea eax, [ebp - 0x50]
    X86_AT(c, 0xc09b5u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0c09b8  push eax
    X86_AT(c, 0xc09b8u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c09b9  mov edx, eax
    X86_AT(c, 0xc09b9u);
    c.r[2] = c.r[0];
    // 0c09bb  call 0xbf39c
    X86_AT(c, 0xc09bbu);
    push32(c, 0xc09c0u); x86_call_known(c, 0xbf39cu, f_000bf39c); X86_RET(c, 0xc09c0u);
    X86_TICK(c, 9);
    // 0c09c0  push eax
    X86_AT(c, 0xc09c0u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c09c1  call 0xb9080
    X86_AT(c, 0xc09c1u);
    push32(c, 0xc09c6u); x86_call_known(c, 0xb9080u, f_000b9080); X86_RET(c, 0xc09c6u);
    X86_TICK(c, 21);
    // 0c09c6  mov edx, dword ptr [ebp - 0x58]
    X86_AT(c, 0xc09c6u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFA8u)));
    // 0c09c9  mov dword ptr [edx + 0xa4b16], eax
    X86_AT(c, 0xc09c9u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4B16u)), c.r[0]);
    // 0c09cf  push edi
    X86_AT(c, 0xc09cfu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c09d0  push 0x4f
    X86_AT(c, 0xc09d0u);
    { uint32_t v = 0x4Fu; push32(c, v); }
    // 0c09d2  lea eax, [ebp - 0x50]
    X86_AT(c, 0xc09d2u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0c09d5  push eax
    X86_AT(c, 0xc09d5u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c09d6  call 0xd781c
    X86_AT(c, 0xc09d6u);
    push32(c, 0xc09dbu); x86_call_known(c, 0xd781cu, f_000d781c); X86_RET(c, 0xc09dbu);
    X86_TICK(c, 13);
    // 0c09db  lea eax, [ebp - 0x50]
    X86_AT(c, 0xc09dbu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0c09de  push eax
    X86_AT(c, 0xc09deu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c09df  mov edx, eax
    X86_AT(c, 0xc09dfu);
    c.r[2] = c.r[0];
    // 0c09e1  call 0xbf39c
    X86_AT(c, 0xc09e1u);
    push32(c, 0xc09e6u); x86_call_known(c, 0xbf39cu, f_000bf39c); X86_RET(c, 0xc09e6u);
    X86_TICK(c, 23);
    // 0c09e6  mov al, byte ptr [eax]
    X86_AT(c, 0xc09e6u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[0]))));
    // 0c09e8  mov ecx, dword ptr [ebp - 0x58]
    X86_AT(c, 0xc09e8u);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFA8u)));
    // 0c09eb  mov byte ptr [ecx + 0xa4b1a], al
    X86_AT(c, 0xc09ebu);
    wr8((c.sbase[3] + (uint32_t)(c.r[1] + 0xA4B1Au)), g8(c, 0));
    // 0c09f1  push edi
    X86_AT(c, 0xc09f1u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c09f2  push 0x4f
    X86_AT(c, 0xc09f2u);
    { uint32_t v = 0x4Fu; push32(c, v); }
    // 0c09f4  push edx
    X86_AT(c, 0xc09f4u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0c09f5  call 0xd781c
    X86_AT(c, 0xc09f5u);
    push32(c, 0xc09fau); x86_call_known(c, 0xd781cu, f_000d781c); X86_RET(c, 0xc09fau);
    X86_TICK(c, 13);
    // 0c09fa  lea eax, [ebp - 0x50]
    X86_AT(c, 0xc09fau);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0c09fd  push eax
    X86_AT(c, 0xc09fdu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c09fe  mov edx, eax
    X86_AT(c, 0xc09feu);
    c.r[2] = c.r[0];
    // 0c0a00  call 0xbf39c
    X86_AT(c, 0xc0a00u);
    push32(c, 0xc0a05u); x86_call_known(c, 0xbf39cu, f_000bf39c); X86_RET(c, 0xc0a05u);
    X86_TICK(c, 11);
    // 0c0a05  add esp, 0x3c
    X86_AT(c, 0xc0a05u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x3Cu, 0, 4); }
    // 0c0a08  push eax
    X86_AT(c, 0xc0a08u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c0a09  call 0xb9080
    X86_AT(c, 0xc0a09u);
    push32(c, 0xc0a0eu); x86_call_known(c, 0xb9080u, f_000b9080); X86_RET(c, 0xc0a0eu);
    X86_TICK(c, 21);
    // 0c0a0e  mov edx, dword ptr [ebp - 0x58]
    X86_AT(c, 0xc0a0eu);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFA8u)));
    // 0c0a11  mov dword ptr [edx + 0xa4b1b], eax
    X86_AT(c, 0xc0a11u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4B1Bu)), c.r[0]);
    // 0c0a17  push edi
    X86_AT(c, 0xc0a17u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c0a18  push 0x4f
    X86_AT(c, 0xc0a18u);
    { uint32_t v = 0x4Fu; push32(c, v); }
    // 0c0a1a  lea eax, [ebp - 0x50]
    X86_AT(c, 0xc0a1au);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0c0a1d  push eax
    X86_AT(c, 0xc0a1du);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c0a1e  call 0xd781c
    X86_AT(c, 0xc0a1eu);
    push32(c, 0xc0a23u); x86_call_known(c, 0xd781cu, f_000d781c); X86_RET(c, 0xc0a23u);
    X86_TICK(c, 11);
    // 0c0a23  lea eax, [ebp - 0x50]
    X86_AT(c, 0xc0a23u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0c0a26  push eax
    X86_AT(c, 0xc0a26u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c0a27  call 0xbf39c
    X86_AT(c, 0xc0a27u);
    push32(c, 0xc0a2cu); x86_call_known(c, 0xbf39cu, f_000bf39c); X86_RET(c, 0xc0a2cu);
    X86_TICK(c, 9);
    // 0c0a2c  push eax
    X86_AT(c, 0xc0a2cu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c0a2d  call 0xb9080
    X86_AT(c, 0xc0a2du);
    push32(c, 0xc0a32u); x86_call_known(c, 0xb9080u, f_000b9080); X86_RET(c, 0xc0a32u);
    X86_TICK(c, 23);
    // 0c0a32  mov edx, dword ptr [ebp - 0x58]
    X86_AT(c, 0xc0a32u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFA8u)));
    // 0c0a35  mov dword ptr [edx + 0xa4b1f], eax
    X86_AT(c, 0xc0a35u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4B1Fu)), c.r[0]);
    // 0c0a3b  add esp, 0x18
    X86_AT(c, 0xc0a3bu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x18u, 0, 4); }
    // 0c0a3e  push edi
    X86_AT(c, 0xc0a3eu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c0a3f  push 0x4f
    X86_AT(c, 0xc0a3fu);
    { uint32_t v = 0x4Fu; push32(c, v); }
    // 0c0a41  lea eax, [ebp - 0x50]
    X86_AT(c, 0xc0a41u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0c0a44  push eax
    X86_AT(c, 0xc0a44u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c0a45  call 0xd781c
    X86_AT(c, 0xc0a45u);
    push32(c, 0xc0a4au); x86_call_known(c, 0xd781cu, f_000d781c); X86_RET(c, 0xc0a4au);
    X86_TICK(c, 13);
    // 0c0a4a  lea eax, [ebp - 0x50]
    X86_AT(c, 0xc0a4au);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0c0a4d  push eax
    X86_AT(c, 0xc0a4du);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c0a4e  mov edx, eax
    X86_AT(c, 0xc0a4eu);
    c.r[2] = c.r[0];
    // 0c0a50  call 0xbf39c
    X86_AT(c, 0xc0a50u);
    push32(c, 0xc0a55u); x86_call_known(c, 0xbf39cu, f_000bf39c); X86_RET(c, 0xc0a55u);
    X86_TICK(c, 9);
    // 0c0a55  push eax
    X86_AT(c, 0xc0a55u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c0a56  call 0xb9080
    X86_AT(c, 0xc0a56u);
    push32(c, 0xc0a5bu); x86_call_known(c, 0xb9080u, f_000b9080); X86_RET(c, 0xc0a5bu);
    X86_TICK(c, 30);
    // 0c0a5b  mov edx, esi
    X86_AT(c, 0xc0a5bu);
    c.r[2] = c.r[6];
    // 0c0a5d  lea ecx, [edx + edx*2]
    X86_AT(c, 0xc0a5du);
    c.r[1] = (uint32_t)(c.r[2] + c.r[2] * 2);
    // 0c0a60  shl ecx, 5
    X86_AT(c, 0xc0a60u);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[1] = r; }
    // 0c0a63  add ecx, edx
    X86_AT(c, 0xc0a63u);
    { uint32_t v = c.r[1]; c.r[1] = x86_add(c, v, c.r[2], 0, 4); }
    // 0c0a65  lea ecx, [edx + ecx*2]
    X86_AT(c, 0xc0a65u);
    c.r[1] = (uint32_t)(c.r[2] + c.r[1] * 2);
    // 0c0a68  mov dword ptr [ecx + 0xa4b23], eax
    X86_AT(c, 0xc0a68u);
    wr32((c.sbase[3] + (uint32_t)(c.r[1] + 0xA4B23u)), c.r[0]);
    // 0c0a6e  push edi
    X86_AT(c, 0xc0a6eu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c0a6f  push 0x4f
    X86_AT(c, 0xc0a6fu);
    { uint32_t v = 0x4Fu; push32(c, v); }
    // 0c0a71  lea eax, [ebp - 0x50]
    X86_AT(c, 0xc0a71u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0c0a74  push eax
    X86_AT(c, 0xc0a74u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c0a75  mov dword ptr [ebp - 0x58], ecx
    X86_AT(c, 0xc0a75u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFA8u)), c.r[1]);
    // 0c0a78  call 0xd781c
    X86_AT(c, 0xc0a78u);
    push32(c, 0xc0a7du); x86_call_known(c, 0xd781cu, f_000d781c); X86_RET(c, 0xc0a7du);
    X86_TICK(c, 13);
    // 0c0a7d  lea eax, [ebp - 0x50]
    X86_AT(c, 0xc0a7du);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0c0a80  push eax
    X86_AT(c, 0xc0a80u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c0a81  mov edx, eax
    X86_AT(c, 0xc0a81u);
    c.r[2] = c.r[0];
    // 0c0a83  call 0xbf39c
    X86_AT(c, 0xc0a83u);
    push32(c, 0xc0a88u); x86_call_known(c, 0xbf39cu, f_000bf39c); X86_RET(c, 0xc0a88u);
    X86_TICK(c, 9);
    // 0c0a88  push eax
    X86_AT(c, 0xc0a88u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c0a89  call 0xb9080
    X86_AT(c, 0xc0a89u);
    push32(c, 0xc0a8eu); x86_call_known(c, 0xb9080u, f_000b9080); X86_RET(c, 0xc0a8eu);
    X86_TICK(c, 21);
    // 0c0a8e  mov edx, dword ptr [ebp - 0x58]
    X86_AT(c, 0xc0a8eu);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFA8u)));
    // 0c0a91  mov dword ptr [edx + 0xa4b27], eax
    X86_AT(c, 0xc0a91u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4B27u)), c.r[0]);
    // 0c0a97  push edi
    X86_AT(c, 0xc0a97u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c0a98  push 0x4f
    X86_AT(c, 0xc0a98u);
    { uint32_t v = 0x4Fu; push32(c, v); }
    // 0c0a9a  lea eax, [ebp - 0x50]
    X86_AT(c, 0xc0a9au);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0c0a9d  push eax
    X86_AT(c, 0xc0a9du);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c0a9e  call 0xd781c
    X86_AT(c, 0xc0a9eu);
    push32(c, 0xc0aa3u); x86_call_known(c, 0xd781cu, f_000d781c); X86_RET(c, 0xc0aa3u);
    X86_TICK(c, 13);
    // 0c0aa3  lea eax, [ebp - 0x50]
    X86_AT(c, 0xc0aa3u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0c0aa6  push eax
    X86_AT(c, 0xc0aa6u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c0aa7  mov edx, eax
    X86_AT(c, 0xc0aa7u);
    c.r[2] = c.r[0];
    // 0c0aa9  call 0xbf39c
    X86_AT(c, 0xc0aa9u);
    push32(c, 0xc0aaeu); x86_call_known(c, 0xbf39cu, f_000bf39c); X86_RET(c, 0xc0aaeu);
    X86_TICK(c, 9);
    // 0c0aae  push eax
    X86_AT(c, 0xc0aaeu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c0aaf  call 0xb9080
    X86_AT(c, 0xc0aafu);
    push32(c, 0xc0ab4u); x86_call_known(c, 0xb9080u, f_000b9080); X86_RET(c, 0xc0ab4u);
    X86_TICK(c, 23);
    // 0c0ab4  add esp, 0x3c
    X86_AT(c, 0xc0ab4u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x3Cu, 0, 4); }
    // 0c0ab7  mov edx, dword ptr [ebp - 0x58]
    X86_AT(c, 0xc0ab7u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFA8u)));
    // 0c0aba  mov dword ptr [edx + 0xa4b2b], eax
    X86_AT(c, 0xc0abau);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4B2Bu)), c.r[0]);
    // 0c0ac0  push edi
    X86_AT(c, 0xc0ac0u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c0ac1  push 0x4f
    X86_AT(c, 0xc0ac1u);
    { uint32_t v = 0x4Fu; push32(c, v); }
    // 0c0ac3  lea eax, [ebp - 0x50]
    X86_AT(c, 0xc0ac3u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0c0ac6  push eax
    X86_AT(c, 0xc0ac6u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c0ac7  call 0xd781c
    X86_AT(c, 0xc0ac7u);
    push32(c, 0xc0accu); x86_call_known(c, 0xd781cu, f_000d781c); X86_RET(c, 0xc0accu);
    X86_TICK(c, 13);
    // 0c0acc  lea eax, [ebp - 0x50]
    X86_AT(c, 0xc0accu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0c0acf  push eax
    X86_AT(c, 0xc0acfu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c0ad0  mov edx, eax
    X86_AT(c, 0xc0ad0u);
    c.r[2] = c.r[0];
    // 0c0ad2  call 0xbf39c
    X86_AT(c, 0xc0ad2u);
    push32(c, 0xc0ad7u); x86_call_known(c, 0xbf39cu, f_000bf39c); X86_RET(c, 0xc0ad7u);
    X86_TICK(c, 9);
    // 0c0ad7  push eax
    X86_AT(c, 0xc0ad7u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c0ad8  call 0xb9080
    X86_AT(c, 0xc0ad8u);
    push32(c, 0xc0addu); x86_call_known(c, 0xb9080u, f_000b9080); X86_RET(c, 0xc0addu);
    X86_TICK(c, 21);
    // 0c0add  mov edx, dword ptr [ebp - 0x58]
    X86_AT(c, 0xc0addu);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFA8u)));
    // 0c0ae0  mov dword ptr [edx + 0xa4b2f], eax
    X86_AT(c, 0xc0ae0u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4B2Fu)), c.r[0]);
    // 0c0ae6  push edi
    X86_AT(c, 0xc0ae6u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c0ae7  push 0x4f
    X86_AT(c, 0xc0ae7u);
    { uint32_t v = 0x4Fu; push32(c, v); }
    // 0c0ae9  lea eax, [ebp - 0x50]
    X86_AT(c, 0xc0ae9u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0c0aec  push eax
    X86_AT(c, 0xc0aecu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c0aed  call 0xd781c
    X86_AT(c, 0xc0aedu);
    push32(c, 0xc0af2u); x86_call_known(c, 0xd781cu, f_000d781c); X86_RET(c, 0xc0af2u);
    X86_TICK(c, 13);
    // 0c0af2  lea eax, [ebp - 0x50]
    X86_AT(c, 0xc0af2u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0c0af5  push eax
    X86_AT(c, 0xc0af5u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c0af6  mov edx, eax
    X86_AT(c, 0xc0af6u);
    c.r[2] = c.r[0];
    // 0c0af8  call 0xbf39c
    X86_AT(c, 0xc0af8u);
    push32(c, 0xc0afdu); x86_call_known(c, 0xbf39cu, f_000bf39c); X86_RET(c, 0xc0afdu);
    X86_TICK(c, 9);
    // 0c0afd  push eax
    X86_AT(c, 0xc0afdu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c0afe  call 0xb9080
    X86_AT(c, 0xc0afeu);
    push32(c, 0xc0b03u); x86_call_known(c, 0xb9080u, f_000b9080); X86_RET(c, 0xc0b03u);
    X86_TICK(c, 21);
    // 0c0b03  mov edx, dword ptr [ebp - 0x58]
    X86_AT(c, 0xc0b03u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFA8u)));
    // 0c0b06  mov dword ptr [edx + 0xa4b33], eax
    X86_AT(c, 0xc0b06u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4B33u)), c.r[0]);
    // 0c0b0c  push edi
    X86_AT(c, 0xc0b0cu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c0b0d  push 0x4f
    X86_AT(c, 0xc0b0du);
    { uint32_t v = 0x4Fu; push32(c, v); }
    // 0c0b0f  lea eax, [ebp - 0x50]
    X86_AT(c, 0xc0b0fu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0c0b12  push eax
    X86_AT(c, 0xc0b12u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c0b13  call 0xd781c
    X86_AT(c, 0xc0b13u);
    push32(c, 0xc0b18u); x86_call_known(c, 0xd781cu, f_000d781c); X86_RET(c, 0xc0b18u);
    X86_TICK(c, 13);
    // 0c0b18  lea eax, [ebp - 0x50]
    X86_AT(c, 0xc0b18u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0c0b1b  push eax
    X86_AT(c, 0xc0b1bu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c0b1c  mov edx, eax
    X86_AT(c, 0xc0b1cu);
    c.r[2] = c.r[0];
    // 0c0b1e  call 0xbf39c
    X86_AT(c, 0xc0b1eu);
    push32(c, 0xc0b23u); x86_call_known(c, 0xbf39cu, f_000bf39c); X86_RET(c, 0xc0b23u);
    X86_TICK(c, 9);
    // 0c0b23  push eax
    X86_AT(c, 0xc0b23u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c0b24  call 0xb9080
    X86_AT(c, 0xc0b24u);
    push32(c, 0xc0b29u); x86_call_known(c, 0xb9080u, f_000b9080); X86_RET(c, 0xc0b29u);
    X86_TICK(c, 23);
    // 0c0b29  add esp, 0x3c
    X86_AT(c, 0xc0b29u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x3Cu, 0, 4); }
    // 0c0b2c  mov edx, dword ptr [ebp - 0x58]
    X86_AT(c, 0xc0b2cu);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFA8u)));
    // 0c0b2f  mov dword ptr [edx + 0xa4b37], eax
    X86_AT(c, 0xc0b2fu);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4B37u)), c.r[0]);
    // 0c0b35  push edi
    X86_AT(c, 0xc0b35u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c0b36  push 0x4f
    X86_AT(c, 0xc0b36u);
    { uint32_t v = 0x4Fu; push32(c, v); }
    // 0c0b38  lea eax, [ebp - 0x50]
    X86_AT(c, 0xc0b38u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0c0b3b  push eax
    X86_AT(c, 0xc0b3bu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c0b3c  call 0xd781c
    X86_AT(c, 0xc0b3cu);
    push32(c, 0xc0b41u); x86_call_known(c, 0xd781cu, f_000d781c); X86_RET(c, 0xc0b41u);
    X86_TICK(c, 13);
    // 0c0b41  lea eax, [ebp - 0x50]
    X86_AT(c, 0xc0b41u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0c0b44  push eax
    X86_AT(c, 0xc0b44u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c0b45  mov edx, eax
    X86_AT(c, 0xc0b45u);
    c.r[2] = c.r[0];
    // 0c0b47  call 0xbf39c
    X86_AT(c, 0xc0b47u);
    push32(c, 0xc0b4cu); x86_call_known(c, 0xbf39cu, f_000bf39c); X86_RET(c, 0xc0b4cu);
    X86_TICK(c, 9);
    // 0c0b4c  push eax
    X86_AT(c, 0xc0b4cu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c0b4d  call 0xb9080
    X86_AT(c, 0xc0b4du);
    push32(c, 0xc0b52u); x86_call_known(c, 0xb9080u, f_000b9080); X86_RET(c, 0xc0b52u);
    X86_TICK(c, 21);
    // 0c0b52  mov edx, dword ptr [ebp - 0x58]
    X86_AT(c, 0xc0b52u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFA8u)));
    // 0c0b55  mov dword ptr [edx + 0xa4b3b], eax
    X86_AT(c, 0xc0b55u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4B3Bu)), c.r[0]);
    // 0c0b5b  push edi
    X86_AT(c, 0xc0b5bu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c0b5c  push 0x4f
    X86_AT(c, 0xc0b5cu);
    { uint32_t v = 0x4Fu; push32(c, v); }
    // 0c0b5e  lea eax, [ebp - 0x50]
    X86_AT(c, 0xc0b5eu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0c0b61  push eax
    X86_AT(c, 0xc0b61u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c0b62  call 0xd781c
    X86_AT(c, 0xc0b62u);
    push32(c, 0xc0b67u); x86_call_known(c, 0xd781cu, f_000d781c); X86_RET(c, 0xc0b67u);
    X86_TICK(c, 15);
    // 0c0b67  add esp, 0x20
    X86_AT(c, 0xc0b67u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x20u, 0, 4); }
    // 0c0b6a  lea eax, [ebp - 0x50]
    X86_AT(c, 0xc0b6au);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0c0b6d  push eax
    X86_AT(c, 0xc0b6du);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c0b6e  mov edx, eax
    X86_AT(c, 0xc0b6eu);
    c.r[2] = c.r[0];
    // 0c0b70  call 0xbf39c
    X86_AT(c, 0xc0b70u);
    push32(c, 0xc0b75u); x86_call_known(c, 0xbf39cu, f_000bf39c); X86_RET(c, 0xc0b75u);
    X86_TICK(c, 9);
    // 0c0b75  push eax
    X86_AT(c, 0xc0b75u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c0b76  call 0xb9080
    X86_AT(c, 0xc0b76u);
    push32(c, 0xc0b7bu); x86_call_known(c, 0xb9080u, f_000b9080); X86_RET(c, 0xc0b7bu);
    X86_TICK(c, 32);
    // 0c0b7b  mov edx, 0xa492c
    X86_AT(c, 0xc0b7bu);
    c.r[2] = 0xA492Cu;
    // 0c0b80  mov ecx, esi
    X86_AT(c, 0xc0b80u);
    c.r[1] = c.r[6];
    // 0c0b82  lea edx, [ecx + ecx*2]
    X86_AT(c, 0xc0b82u);
    c.r[2] = (uint32_t)(c.r[1] + c.r[1] * 2);
    // 0c0b85  shl edx, 5
    X86_AT(c, 0xc0b85u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0c0b88  add edx, ecx
    X86_AT(c, 0xc0b88u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[1], 0, 4); }
    // 0c0b8a  lea edx, [ecx + edx*2]
    X86_AT(c, 0xc0b8au);
    c.r[2] = (uint32_t)(c.r[1] + c.r[2] * 2);
    // 0c0b8d  mov dword ptr [edx + 0xa4b3f], eax
    X86_AT(c, 0xc0b8du);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4B3Fu)), c.r[0]);
    // 0c0b93  push edi
    X86_AT(c, 0xc0b93u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c0b94  push 0x4f
    X86_AT(c, 0xc0b94u);
    { uint32_t v = 0x4Fu; push32(c, v); }
    // 0c0b96  lea eax, [ebp - 0x50]
    X86_AT(c, 0xc0b96u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0c0b99  push eax
    X86_AT(c, 0xc0b99u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c0b9a  mov dword ptr [ebp - 0x58], edx
    X86_AT(c, 0xc0b9au);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFA8u)), c.r[2]);
    // 0c0b9d  call 0xd781c
    X86_AT(c, 0xc0b9du);
    push32(c, 0xc0ba2u); x86_call_known(c, 0xd781cu, f_000d781c); X86_RET(c, 0xc0ba2u);
    X86_TICK(c, 13);
    // 0c0ba2  lea eax, [ebp - 0x50]
    X86_AT(c, 0xc0ba2u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0c0ba5  push eax
    X86_AT(c, 0xc0ba5u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c0ba6  mov edx, eax
    X86_AT(c, 0xc0ba6u);
    c.r[2] = c.r[0];
    // 0c0ba8  call 0xbf39c
    X86_AT(c, 0xc0ba8u);
    push32(c, 0xc0badu); x86_call_known(c, 0xbf39cu, f_000bf39c); X86_RET(c, 0xc0badu);
    X86_TICK(c, 9);
    // 0c0bad  push eax
    X86_AT(c, 0xc0badu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c0bae  call 0xb9080
    X86_AT(c, 0xc0baeu);
    push32(c, 0xc0bb3u); x86_call_known(c, 0xb9080u, f_000b9080); X86_RET(c, 0xc0bb3u);
    X86_TICK(c, 21);
    // 0c0bb3  mov edx, dword ptr [ebp - 0x58]
    X86_AT(c, 0xc0bb3u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFA8u)));
    // 0c0bb6  mov dword ptr [edx + 0xa4b43], eax
    X86_AT(c, 0xc0bb6u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4B43u)), c.r[0]);
    // 0c0bbc  push edi
    X86_AT(c, 0xc0bbcu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c0bbd  push 0x4f
    X86_AT(c, 0xc0bbdu);
    { uint32_t v = 0x4Fu; push32(c, v); }
    // 0c0bbf  lea eax, [ebp - 0x50]
    X86_AT(c, 0xc0bbfu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0c0bc2  push eax
    X86_AT(c, 0xc0bc2u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c0bc3  call 0xd781c
    X86_AT(c, 0xc0bc3u);
    push32(c, 0xc0bc8u); x86_call_known(c, 0xd781cu, f_000d781c); X86_RET(c, 0xc0bc8u);
    X86_TICK(c, 13);
    // 0c0bc8  lea eax, [ebp - 0x50]
    X86_AT(c, 0xc0bc8u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0c0bcb  push eax
    X86_AT(c, 0xc0bcbu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c0bcc  mov edx, eax
    X86_AT(c, 0xc0bccu);
    c.r[2] = c.r[0];
    // 0c0bce  call 0xbf39c
    X86_AT(c, 0xc0bceu);
    push32(c, 0xc0bd3u); x86_call_known(c, 0xbf39cu, f_000bf39c); X86_RET(c, 0xc0bd3u);
    X86_TICK(c, 9);
    // 0c0bd3  push eax
    X86_AT(c, 0xc0bd3u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c0bd4  call 0xb9080
    X86_AT(c, 0xc0bd4u);
    push32(c, 0xc0bd9u); x86_call_known(c, 0xb9080u, f_000b9080); X86_RET(c, 0xc0bd9u);
    X86_TICK(c, 21);
    // 0c0bd9  mov edx, dword ptr [ebp - 0x58]
    X86_AT(c, 0xc0bd9u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFA8u)));
    // 0c0bdc  mov dword ptr [edx + 0xa4b47], eax
    X86_AT(c, 0xc0bdcu);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4B47u)), c.r[0]);
    // 0c0be2  push edi
    X86_AT(c, 0xc0be2u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c0be3  push 0x4f
    X86_AT(c, 0xc0be3u);
    { uint32_t v = 0x4Fu; push32(c, v); }
    // 0c0be5  lea eax, [ebp - 0x50]
    X86_AT(c, 0xc0be5u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0c0be8  push eax
    X86_AT(c, 0xc0be8u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c0be9  call 0xd781c
    X86_AT(c, 0xc0be9u);
    push32(c, 0xc0beeu); x86_call_known(c, 0xd781cu, f_000d781c); X86_RET(c, 0xc0beeu);
    X86_TICK(c, 15);
    // 0c0bee  add esp, 0x3c
    X86_AT(c, 0xc0beeu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x3Cu, 0, 4); }
    // 0c0bf1  lea eax, [ebp - 0x50]
    X86_AT(c, 0xc0bf1u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0c0bf4  push eax
    X86_AT(c, 0xc0bf4u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c0bf5  mov edx, eax
    X86_AT(c, 0xc0bf5u);
    c.r[2] = c.r[0];
    // 0c0bf7  call 0xbf39c
    X86_AT(c, 0xc0bf7u);
    push32(c, 0xc0bfcu); x86_call_known(c, 0xbf39cu, f_000bf39c); X86_RET(c, 0xc0bfcu);
    X86_TICK(c, 9);
    // 0c0bfc  push eax
    X86_AT(c, 0xc0bfcu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c0bfd  call 0xb9080
    X86_AT(c, 0xc0bfdu);
    push32(c, 0xc0c02u); x86_call_known(c, 0xb9080u, f_000b9080); X86_RET(c, 0xc0c02u);
    X86_TICK(c, 21);
    // 0c0c02  mov edx, dword ptr [ebp - 0x58]
    X86_AT(c, 0xc0c02u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFA8u)));
    // 0c0c05  mov dword ptr [edx + 0xa4b4b], eax
    X86_AT(c, 0xc0c05u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4B4Bu)), c.r[0]);
    // 0c0c0b  push edi
    X86_AT(c, 0xc0c0bu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c0c0c  push 0x4f
    X86_AT(c, 0xc0c0cu);
    { uint32_t v = 0x4Fu; push32(c, v); }
    // 0c0c0e  lea eax, [ebp - 0x50]
    X86_AT(c, 0xc0c0eu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0c0c11  push eax
    X86_AT(c, 0xc0c11u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c0c12  call 0xd781c
    X86_AT(c, 0xc0c12u);
    push32(c, 0xc0c17u); x86_call_known(c, 0xd781cu, f_000d781c); X86_RET(c, 0xc0c17u);
    X86_TICK(c, 13);
    // 0c0c17  lea eax, [ebp - 0x50]
    X86_AT(c, 0xc0c17u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0c0c1a  push eax
    X86_AT(c, 0xc0c1au);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c0c1b  mov edx, eax
    X86_AT(c, 0xc0c1bu);
    c.r[2] = c.r[0];
    // 0c0c1d  call 0xbf39c
    X86_AT(c, 0xc0c1du);
    push32(c, 0xc0c22u); x86_call_known(c, 0xbf39cu, f_000bf39c); X86_RET(c, 0xc0c22u);
    X86_TICK(c, 9);
    // 0c0c22  push eax
    X86_AT(c, 0xc0c22u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c0c23  call 0xb9080
    X86_AT(c, 0xc0c23u);
    push32(c, 0xc0c28u); x86_call_known(c, 0xb9080u, f_000b9080); X86_RET(c, 0xc0c28u);
    X86_TICK(c, 21);
    // 0c0c28  mov edx, dword ptr [ebp - 0x58]
    X86_AT(c, 0xc0c28u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFA8u)));
    // 0c0c2b  mov dword ptr [edx + 0xa4b4f], eax
    X86_AT(c, 0xc0c2bu);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4B4Fu)), c.r[0]);
    // 0c0c31  push edi
    X86_AT(c, 0xc0c31u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c0c32  push 0x4f
    X86_AT(c, 0xc0c32u);
    { uint32_t v = 0x4Fu; push32(c, v); }
    // 0c0c34  lea eax, [ebp - 0x50]
    X86_AT(c, 0xc0c34u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0c0c37  push eax
    X86_AT(c, 0xc0c37u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c0c38  call 0xd781c
    X86_AT(c, 0xc0c38u);
    push32(c, 0xc0c3du); x86_call_known(c, 0xd781cu, f_000d781c); X86_RET(c, 0xc0c3du);
    X86_TICK(c, 13);
    // 0c0c3d  lea eax, [ebp - 0x50]
    X86_AT(c, 0xc0c3du);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0c0c40  push eax
    X86_AT(c, 0xc0c40u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c0c41  mov edx, eax
    X86_AT(c, 0xc0c41u);
    c.r[2] = c.r[0];
    // 0c0c43  call 0xbf39c
    X86_AT(c, 0xc0c43u);
    push32(c, 0xc0c48u); x86_call_known(c, 0xbf39cu, f_000bf39c); X86_RET(c, 0xc0c48u);
    X86_TICK(c, 9);
    // 0c0c48  push eax
    X86_AT(c, 0xc0c48u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c0c49  call 0xb9080
    X86_AT(c, 0xc0c49u);
    push32(c, 0xc0c4eu); x86_call_known(c, 0xb9080u, f_000b9080); X86_RET(c, 0xc0c4eu);
    X86_TICK(c, 21);
    // 0c0c4e  mov edx, dword ptr [ebp - 0x58]
    X86_AT(c, 0xc0c4eu);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFA8u)));
    // 0c0c51  mov dword ptr [edx + 0xa4b53], eax
    X86_AT(c, 0xc0c51u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4B53u)), c.r[0]);
    // 0c0c57  push edi
    X86_AT(c, 0xc0c57u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c0c58  push 0x4f
    X86_AT(c, 0xc0c58u);
    { uint32_t v = 0x4Fu; push32(c, v); }
    // 0c0c5a  lea eax, [ebp - 0x50]
    X86_AT(c, 0xc0c5au);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0c0c5d  push eax
    X86_AT(c, 0xc0c5du);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c0c5e  call 0xd781c
    X86_AT(c, 0xc0c5eu);
    push32(c, 0xc0c63u); x86_call_known(c, 0xd781cu, f_000d781c); X86_RET(c, 0xc0c63u);
    X86_TICK(c, 15);
    // 0c0c63  add esp, 0x3c
    X86_AT(c, 0xc0c63u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x3Cu, 0, 4); }
    // 0c0c66  lea eax, [ebp - 0x50]
    X86_AT(c, 0xc0c66u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0c0c69  push eax
    X86_AT(c, 0xc0c69u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c0c6a  mov edx, eax
    X86_AT(c, 0xc0c6au);
    c.r[2] = c.r[0];
    // 0c0c6c  call 0xbf39c
    X86_AT(c, 0xc0c6cu);
    push32(c, 0xc0c71u); x86_call_known(c, 0xbf39cu, f_000bf39c); X86_RET(c, 0xc0c71u);
    X86_TICK(c, 9);
    // 0c0c71  push eax
    X86_AT(c, 0xc0c71u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c0c72  call 0xb9080
    X86_AT(c, 0xc0c72u);
    push32(c, 0xc0c77u); x86_call_known(c, 0xb9080u, f_000b9080); X86_RET(c, 0xc0c77u);
    X86_TICK(c, 21);
    // 0c0c77  mov edx, dword ptr [ebp - 0x58]
    X86_AT(c, 0xc0c77u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFA8u)));
    // 0c0c7a  mov dword ptr [edx + 0xa4b57], eax
    X86_AT(c, 0xc0c7au);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4B57u)), c.r[0]);
    // 0c0c80  push edi
    X86_AT(c, 0xc0c80u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c0c81  push 0x4f
    X86_AT(c, 0xc0c81u);
    { uint32_t v = 0x4Fu; push32(c, v); }
    // 0c0c83  lea eax, [ebp - 0x50]
    X86_AT(c, 0xc0c83u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0c0c86  push eax
    X86_AT(c, 0xc0c86u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c0c87  call 0xd781c
    X86_AT(c, 0xc0c87u);
    push32(c, 0xc0c8cu); x86_call_known(c, 0xd781cu, f_000d781c); X86_RET(c, 0xc0c8cu);
    X86_TICK(c, 11);
    // 0c0c8c  lea eax, [ebp - 0x50]
    X86_AT(c, 0xc0c8cu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0c0c8f  push eax
    X86_AT(c, 0xc0c8fu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c0c90  call 0xbf39c
    X86_AT(c, 0xc0c90u);
    push32(c, 0xc0c95u); x86_call_known(c, 0xbf39cu, f_000bf39c); X86_RET(c, 0xc0c95u);
    X86_TICK(c, 9);
    // 0c0c95  push eax
    X86_AT(c, 0xc0c95u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c0c96  call 0xb9080
    X86_AT(c, 0xc0c96u);
    push32(c, 0xc0c9bu); x86_call_known(c, 0xb9080u, f_000b9080); X86_RET(c, 0xc0c9bu);
    X86_TICK(c, 23);
    // 0c0c9b  mov edx, dword ptr [ebp - 0x58]
    X86_AT(c, 0xc0c9bu);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFA8u)));
    // 0c0c9e  mov dword ptr [edx + 0xa4b5b], eax
    X86_AT(c, 0xc0c9eu);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4B5Bu)), c.r[0]);
    // 0c0ca4  add esp, 0x1c
    X86_AT(c, 0xc0ca4u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x1Cu, 0, 4); }
    // 0c0ca7  push edi
    X86_AT(c, 0xc0ca7u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c0ca8  push 0x4f
    X86_AT(c, 0xc0ca8u);
    { uint32_t v = 0x4Fu; push32(c, v); }
    // 0c0caa  lea eax, [ebp - 0x50]
    X86_AT(c, 0xc0caau);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0c0cad  push eax
    X86_AT(c, 0xc0cadu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c0cae  call 0xd781c
    X86_AT(c, 0xc0caeu);
    push32(c, 0xc0cb3u); x86_call_known(c, 0xd781cu, f_000d781c); X86_RET(c, 0xc0cb3u);
    X86_TICK(c, 11);
    // 0c0cb3  lea eax, [ebp - 0x50]
    X86_AT(c, 0xc0cb3u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0c0cb6  push eax
    X86_AT(c, 0xc0cb6u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c0cb7  call 0xbf39c
    X86_AT(c, 0xc0cb7u);
    push32(c, 0xc0cbcu); x86_call_known(c, 0xbf39cu, f_000bf39c); X86_RET(c, 0xc0cbcu);
    X86_TICK(c, 9);
    // 0c0cbc  push eax
    X86_AT(c, 0xc0cbcu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c0cbd  call 0xb9080
    X86_AT(c, 0xc0cbdu);
    push32(c, 0xc0cc2u); x86_call_known(c, 0xb9080u, f_000b9080); X86_RET(c, 0xc0cc2u);
    X86_TICK(c, 24);
    // 0c0cc2  mov edx, esi
    X86_AT(c, 0xc0cc2u);
    c.r[2] = c.r[6];
    // 0c0cc4  lea ecx, [edx + edx*2]
    X86_AT(c, 0xc0cc4u);
    c.r[1] = (uint32_t)(c.r[2] + c.r[2] * 2);
    // 0c0cc7  shl ecx, 5
    X86_AT(c, 0xc0cc7u);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[1] = r; }
    // 0c0cca  add ecx, edx
    X86_AT(c, 0xc0ccau);
    { uint32_t v = c.r[1]; c.r[1] = x86_add(c, v, c.r[2], 0, 4); }
    // 0c0ccc  lea ecx, [edx + ecx*2]
    X86_AT(c, 0xc0cccu);
    c.r[1] = (uint32_t)(c.r[2] + c.r[1] * 2);
    // 0c0ccf  mov dword ptr [ecx + 0xa4b5f], eax
    X86_AT(c, 0xc0ccfu);
    wr32((c.sbase[3] + (uint32_t)(c.r[1] + 0xA4B5Fu)), c.r[0]);
    // 0c0cd5  inc esi
    X86_AT(c, 0xc0cd5u);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 0c0cd6  add esp, 0x14
    X86_AT(c, 0xc0cd6u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x14u, 0, 4); }
    // 0c0cd9  jmp 0xc0254
    X86_AT(c, 0xc0cd9u);
    X86_POLL(c, 0xc0254u); goto L_c0254;
L_c0cde:
    X86_TICK(c, 9);
    // 0c0cde  push edi
    X86_AT(c, 0xc0cdeu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c0cdf  call 0xd84c0
    X86_AT(c, 0xc0cdfu);
    push32(c, 0xc0ce4u); x86_call_known(c, 0xd84c0u, f_000d84c0); X86_RET(c, 0xc0ce4u);
    X86_TICK(c, 4);
    // 0c0ce4  sub eax, eax
    X86_AT(c, 0xc0ce4u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0c0ce6  mov dword ptr [0xa6650], eax
    X86_AT(c, 0xc0ce6u);
    wr32((c.sbase[3] + (uint32_t)(0xA6650u)), c.r[0]);
L_c0ceb:
    X86_TICK(c, 2);
    // 0c0ceb  add esp, 4
    X86_AT(c, 0xc0cebu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
L_c0cee:
    X86_TICK(c, 28);
    // 0c0cee  pop edi
    X86_AT(c, 0xc0ceeu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0c0cef  pop esi
    X86_AT(c, 0xc0cefu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0c0cf0  pop ebx
    X86_AT(c, 0xc0cf0u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0c0cf1  leave 
    X86_AT(c, 0xc0cf1u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0c0cf2  ret 
    X86_AT(c, 0xc0cf2u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xc01e8u, "ran off the end of a function");
}
}

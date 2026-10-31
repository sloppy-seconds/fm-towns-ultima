#include "p_tbios_funcs.h"
namespace p_tbios {
void f_00004a66(X86Cpu& c) {
    X86_TICK(c, 48);
    // 004a66  mov eax, dword ptr cs:[eax*8 + 0x4ba8]
    X86_AT(c, 0x4a66u);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 8 + 0x4BA8u)));
    // 004a6e  mov dword ptr gs:[ebp + 0x2f4], eax
    X86_AT(c, 0x4a6eu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2F4u)), c.r[0]);
    // 004a75  movsx eax, dx
    X86_AT(c, 0x4a75u);
    c.r[0] = (uint32_t)(int32_t)(int16_t)(c.r[2] & 0xFFFFu);
    // 004a78  imul eax, dword ptr gs:[ebp + 0x20]
    X86_AT(c, 0x4a78u);
    c.r[0] = x86_imul2(c, c.r[0], rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x20u))), 4);
    // 004a7d  add eax, dword ptr gs:[ebp]
    X86_AT(c, 0x4a7du);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5]))), 0, 4); }
    // 004a81  mov dword ptr gs:[ebp + 0x1cc], eax
    X86_AT(c, 0x4a81u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu)), c.r[0]);
    // 004a88  push eax
    X86_AT(c, 0x4a88u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 004a89  call dword ptr gs:[ebp + 0x32c]
    X86_AT(c, 0x4a89u);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x32Cu))); push32(c, 0x4a90u); x86_call(c, t); X86_RET(c, 0x4a90u); }
    X86_TICK(c, 22);
    // 004a90  pop dword ptr gs:[ebp + 0x1cc]
    X86_AT(c, 0x4a90u);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu)), v); }
    // 004a97  pop dword ptr gs:[ebp + 0x10c]
    X86_AT(c, 0x4a97u);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x10Cu)), v); }
    // 004a9e  pop dword ptr gs:[ebp + 0x104]
    X86_AT(c, 0x4a9eu);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u)), v); }
    // 004aa5  call 0x36e4
    X86_AT(c, 0x4aa5u);
    push32(c, 0x4aaau); f_000036e4(c); X86_RET(c, 0x4aaau);
    X86_TICK(c, 7);
    // 004aaa  call 0x6120
    X86_AT(c, 0x4aaau);
    push32(c, 0x4aafu); f_00006120(c); X86_RET(c, 0x4aafu);
    X86_TICK(c, 32);
    // 004aaf  mov ebx, dword ptr gs:[ebp + 0x2f0]
    X86_AT(c, 0x4aafu);
    c.r[3] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2F0u)));
    // 004ab6  shld edx, ebx, 0x10
    X86_AT(c, 0x4ab6u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_double(c, true, v, c.r[3], 0x10u, 4, w); if (w) c.r[2] = r; }
    // 004aba  and bl, 0xe0
    X86_AT(c, 0x4abau);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v & 0xE0u, 1)); }
    // 004abd  mov esi, dword ptr gs:[ebp + 0x2e8]
    X86_AT(c, 0x4abdu);
    c.r[6] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2E8u)));
    // 004ac4  movzx eax, byte ptr gs:[ebp + 0x2ee]
    X86_AT(c, 0x4ac4u);
    c.r[0] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x2EEu)));
    // 004acc  mov eax, dword ptr cs:[eax*8 + 0x4bac]
    X86_AT(c, 0x4accu);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 8 + 0x4BACu)));
    // 004ad4  mov dword ptr gs:[ebp + 0x2f4], eax
    X86_AT(c, 0x4ad4u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2F4u)), c.r[0]);
    // 004adb  call dword ptr gs:[ebp + 0x32c]
    X86_AT(c, 0x4adbu);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x32Cu))); push32(c, 0x4ae2u); x86_call(c, t); X86_RET(c, 0x4ae2u); }
    X86_TICK(c, 15);
    // 004ae2  pop dword ptr gs:[ebp + 0x10]
    X86_AT(c, 0x4ae2u);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x10u)), v); }
    // 004ae6  ret 
    X86_AT(c, 0x4ae6u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x4a66u, "ran off the end of a function");
}
void f_00004a6e(X86Cpu& c) {
    X86_TICK(c, 44);
    // 004a6e  mov dword ptr gs:[ebp + 0x2f4], eax
    X86_AT(c, 0x4a6eu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2F4u)), c.r[0]);
    // 004a75  movsx eax, dx
    X86_AT(c, 0x4a75u);
    c.r[0] = (uint32_t)(int32_t)(int16_t)(c.r[2] & 0xFFFFu);
    // 004a78  imul eax, dword ptr gs:[ebp + 0x20]
    X86_AT(c, 0x4a78u);
    c.r[0] = x86_imul2(c, c.r[0], rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x20u))), 4);
    // 004a7d  add eax, dword ptr gs:[ebp]
    X86_AT(c, 0x4a7du);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5]))), 0, 4); }
    // 004a81  mov dword ptr gs:[ebp + 0x1cc], eax
    X86_AT(c, 0x4a81u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu)), c.r[0]);
    // 004a88  push eax
    X86_AT(c, 0x4a88u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 004a89  call dword ptr gs:[ebp + 0x32c]
    X86_AT(c, 0x4a89u);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x32Cu))); push32(c, 0x4a90u); x86_call(c, t); X86_RET(c, 0x4a90u); }
    X86_TICK(c, 22);
    // 004a90  pop dword ptr gs:[ebp + 0x1cc]
    X86_AT(c, 0x4a90u);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu)), v); }
    // 004a97  pop dword ptr gs:[ebp + 0x10c]
    X86_AT(c, 0x4a97u);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x10Cu)), v); }
    // 004a9e  pop dword ptr gs:[ebp + 0x104]
    X86_AT(c, 0x4a9eu);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u)), v); }
    // 004aa5  call 0x36e4
    X86_AT(c, 0x4aa5u);
    push32(c, 0x4aaau); f_000036e4(c); X86_RET(c, 0x4aaau);
    X86_TICK(c, 7);
    // 004aaa  call 0x6120
    X86_AT(c, 0x4aaau);
    push32(c, 0x4aafu); f_00006120(c); X86_RET(c, 0x4aafu);
    X86_TICK(c, 32);
    // 004aaf  mov ebx, dword ptr gs:[ebp + 0x2f0]
    X86_AT(c, 0x4aafu);
    c.r[3] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2F0u)));
    // 004ab6  shld edx, ebx, 0x10
    X86_AT(c, 0x4ab6u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_double(c, true, v, c.r[3], 0x10u, 4, w); if (w) c.r[2] = r; }
    // 004aba  and bl, 0xe0
    X86_AT(c, 0x4abau);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v & 0xE0u, 1)); }
    // 004abd  mov esi, dword ptr gs:[ebp + 0x2e8]
    X86_AT(c, 0x4abdu);
    c.r[6] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2E8u)));
    // 004ac4  movzx eax, byte ptr gs:[ebp + 0x2ee]
    X86_AT(c, 0x4ac4u);
    c.r[0] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x2EEu)));
    // 004acc  mov eax, dword ptr cs:[eax*8 + 0x4bac]
    X86_AT(c, 0x4accu);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 8 + 0x4BACu)));
    // 004ad4  mov dword ptr gs:[ebp + 0x2f4], eax
    X86_AT(c, 0x4ad4u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2F4u)), c.r[0]);
    // 004adb  call dword ptr gs:[ebp + 0x32c]
    X86_AT(c, 0x4adbu);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x32Cu))); push32(c, 0x4ae2u); x86_call(c, t); X86_RET(c, 0x4ae2u); }
    X86_TICK(c, 15);
    // 004ae2  pop dword ptr gs:[ebp + 0x10]
    X86_AT(c, 0x4ae2u);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x10u)), v); }
    // 004ae6  ret 
    X86_AT(c, 0x4ae6u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x4a6eu, "ran off the end of a function");
}
void f_00004a75(X86Cpu& c) {
    X86_TICK(c, 42);
    // 004a75  movsx eax, dx
    X86_AT(c, 0x4a75u);
    c.r[0] = (uint32_t)(int32_t)(int16_t)(c.r[2] & 0xFFFFu);
    // 004a78  imul eax, dword ptr gs:[ebp + 0x20]
    X86_AT(c, 0x4a78u);
    c.r[0] = x86_imul2(c, c.r[0], rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x20u))), 4);
    // 004a7d  add eax, dword ptr gs:[ebp]
    X86_AT(c, 0x4a7du);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5]))), 0, 4); }
    // 004a81  mov dword ptr gs:[ebp + 0x1cc], eax
    X86_AT(c, 0x4a81u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu)), c.r[0]);
    // 004a88  push eax
    X86_AT(c, 0x4a88u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 004a89  call dword ptr gs:[ebp + 0x32c]
    X86_AT(c, 0x4a89u);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x32Cu))); push32(c, 0x4a90u); x86_call(c, t); X86_RET(c, 0x4a90u); }
    X86_TICK(c, 22);
    // 004a90  pop dword ptr gs:[ebp + 0x1cc]
    X86_AT(c, 0x4a90u);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu)), v); }
    // 004a97  pop dword ptr gs:[ebp + 0x10c]
    X86_AT(c, 0x4a97u);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x10Cu)), v); }
    // 004a9e  pop dword ptr gs:[ebp + 0x104]
    X86_AT(c, 0x4a9eu);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u)), v); }
    // 004aa5  call 0x36e4
    X86_AT(c, 0x4aa5u);
    push32(c, 0x4aaau); f_000036e4(c); X86_RET(c, 0x4aaau);
    X86_TICK(c, 7);
    // 004aaa  call 0x6120
    X86_AT(c, 0x4aaau);
    push32(c, 0x4aafu); f_00006120(c); X86_RET(c, 0x4aafu);
    X86_TICK(c, 32);
    // 004aaf  mov ebx, dword ptr gs:[ebp + 0x2f0]
    X86_AT(c, 0x4aafu);
    c.r[3] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2F0u)));
    // 004ab6  shld edx, ebx, 0x10
    X86_AT(c, 0x4ab6u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_double(c, true, v, c.r[3], 0x10u, 4, w); if (w) c.r[2] = r; }
    // 004aba  and bl, 0xe0
    X86_AT(c, 0x4abau);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v & 0xE0u, 1)); }
    // 004abd  mov esi, dword ptr gs:[ebp + 0x2e8]
    X86_AT(c, 0x4abdu);
    c.r[6] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2E8u)));
    // 004ac4  movzx eax, byte ptr gs:[ebp + 0x2ee]
    X86_AT(c, 0x4ac4u);
    c.r[0] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x2EEu)));
    // 004acc  mov eax, dword ptr cs:[eax*8 + 0x4bac]
    X86_AT(c, 0x4accu);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 8 + 0x4BACu)));
    // 004ad4  mov dword ptr gs:[ebp + 0x2f4], eax
    X86_AT(c, 0x4ad4u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2F4u)), c.r[0]);
    // 004adb  call dword ptr gs:[ebp + 0x32c]
    X86_AT(c, 0x4adbu);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x32Cu))); push32(c, 0x4ae2u); x86_call(c, t); X86_RET(c, 0x4ae2u); }
    X86_TICK(c, 15);
    // 004ae2  pop dword ptr gs:[ebp + 0x10]
    X86_AT(c, 0x4ae2u);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x10u)), v); }
    // 004ae6  ret 
    X86_AT(c, 0x4ae6u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x4a75u, "ran off the end of a function");
}
void f_00004a78(X86Cpu& c) {
    X86_TICK(c, 39);
    // 004a78  imul eax, dword ptr gs:[ebp + 0x20]
    X86_AT(c, 0x4a78u);
    c.r[0] = x86_imul2(c, c.r[0], rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x20u))), 4);
    // 004a7d  add eax, dword ptr gs:[ebp]
    X86_AT(c, 0x4a7du);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5]))), 0, 4); }
    // 004a81  mov dword ptr gs:[ebp + 0x1cc], eax
    X86_AT(c, 0x4a81u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu)), c.r[0]);
    // 004a88  push eax
    X86_AT(c, 0x4a88u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 004a89  call dword ptr gs:[ebp + 0x32c]
    X86_AT(c, 0x4a89u);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x32Cu))); push32(c, 0x4a90u); x86_call(c, t); X86_RET(c, 0x4a90u); }
    X86_TICK(c, 22);
    // 004a90  pop dword ptr gs:[ebp + 0x1cc]
    X86_AT(c, 0x4a90u);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu)), v); }
    // 004a97  pop dword ptr gs:[ebp + 0x10c]
    X86_AT(c, 0x4a97u);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x10Cu)), v); }
    // 004a9e  pop dword ptr gs:[ebp + 0x104]
    X86_AT(c, 0x4a9eu);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u)), v); }
    // 004aa5  call 0x36e4
    X86_AT(c, 0x4aa5u);
    push32(c, 0x4aaau); f_000036e4(c); X86_RET(c, 0x4aaau);
    X86_TICK(c, 7);
    // 004aaa  call 0x6120
    X86_AT(c, 0x4aaau);
    push32(c, 0x4aafu); f_00006120(c); X86_RET(c, 0x4aafu);
    X86_TICK(c, 32);
    // 004aaf  mov ebx, dword ptr gs:[ebp + 0x2f0]
    X86_AT(c, 0x4aafu);
    c.r[3] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2F0u)));
    // 004ab6  shld edx, ebx, 0x10
    X86_AT(c, 0x4ab6u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_double(c, true, v, c.r[3], 0x10u, 4, w); if (w) c.r[2] = r; }
    // 004aba  and bl, 0xe0
    X86_AT(c, 0x4abau);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v & 0xE0u, 1)); }
    // 004abd  mov esi, dword ptr gs:[ebp + 0x2e8]
    X86_AT(c, 0x4abdu);
    c.r[6] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2E8u)));
    // 004ac4  movzx eax, byte ptr gs:[ebp + 0x2ee]
    X86_AT(c, 0x4ac4u);
    c.r[0] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x2EEu)));
    // 004acc  mov eax, dword ptr cs:[eax*8 + 0x4bac]
    X86_AT(c, 0x4accu);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 8 + 0x4BACu)));
    // 004ad4  mov dword ptr gs:[ebp + 0x2f4], eax
    X86_AT(c, 0x4ad4u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2F4u)), c.r[0]);
    // 004adb  call dword ptr gs:[ebp + 0x32c]
    X86_AT(c, 0x4adbu);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x32Cu))); push32(c, 0x4ae2u); x86_call(c, t); X86_RET(c, 0x4ae2u); }
    X86_TICK(c, 15);
    // 004ae2  pop dword ptr gs:[ebp + 0x10]
    X86_AT(c, 0x4ae2u);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x10u)), v); }
    // 004ae6  ret 
    X86_AT(c, 0x4ae6u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x4a78u, "ran off the end of a function");
}
void f_00004a7d(X86Cpu& c) {
    X86_TICK(c, 17);
    // 004a7d  add eax, dword ptr gs:[ebp]
    X86_AT(c, 0x4a7du);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5]))), 0, 4); }
    // 004a81  mov dword ptr gs:[ebp + 0x1cc], eax
    X86_AT(c, 0x4a81u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu)), c.r[0]);
    // 004a88  push eax
    X86_AT(c, 0x4a88u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 004a89  call dword ptr gs:[ebp + 0x32c]
    X86_AT(c, 0x4a89u);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x32Cu))); push32(c, 0x4a90u); x86_call(c, t); X86_RET(c, 0x4a90u); }
    X86_TICK(c, 22);
    // 004a90  pop dword ptr gs:[ebp + 0x1cc]
    X86_AT(c, 0x4a90u);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu)), v); }
    // 004a97  pop dword ptr gs:[ebp + 0x10c]
    X86_AT(c, 0x4a97u);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x10Cu)), v); }
    // 004a9e  pop dword ptr gs:[ebp + 0x104]
    X86_AT(c, 0x4a9eu);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u)), v); }
    // 004aa5  call 0x36e4
    X86_AT(c, 0x4aa5u);
    push32(c, 0x4aaau); f_000036e4(c); X86_RET(c, 0x4aaau);
    X86_TICK(c, 7);
    // 004aaa  call 0x6120
    X86_AT(c, 0x4aaau);
    push32(c, 0x4aafu); f_00006120(c); X86_RET(c, 0x4aafu);
    X86_TICK(c, 32);
    // 004aaf  mov ebx, dword ptr gs:[ebp + 0x2f0]
    X86_AT(c, 0x4aafu);
    c.r[3] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2F0u)));
    // 004ab6  shld edx, ebx, 0x10
    X86_AT(c, 0x4ab6u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_double(c, true, v, c.r[3], 0x10u, 4, w); if (w) c.r[2] = r; }
    // 004aba  and bl, 0xe0
    X86_AT(c, 0x4abau);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v & 0xE0u, 1)); }
    // 004abd  mov esi, dword ptr gs:[ebp + 0x2e8]
    X86_AT(c, 0x4abdu);
    c.r[6] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2E8u)));
    // 004ac4  movzx eax, byte ptr gs:[ebp + 0x2ee]
    X86_AT(c, 0x4ac4u);
    c.r[0] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x2EEu)));
    // 004acc  mov eax, dword ptr cs:[eax*8 + 0x4bac]
    X86_AT(c, 0x4accu);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 8 + 0x4BACu)));
    // 004ad4  mov dword ptr gs:[ebp + 0x2f4], eax
    X86_AT(c, 0x4ad4u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2F4u)), c.r[0]);
    // 004adb  call dword ptr gs:[ebp + 0x32c]
    X86_AT(c, 0x4adbu);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x32Cu))); push32(c, 0x4ae2u); x86_call(c, t); X86_RET(c, 0x4ae2u); }
    X86_TICK(c, 15);
    // 004ae2  pop dword ptr gs:[ebp + 0x10]
    X86_AT(c, 0x4ae2u);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x10u)), v); }
    // 004ae6  ret 
    X86_AT(c, 0x4ae6u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x4a7du, "ran off the end of a function");
}
void f_00004a81(X86Cpu& c) {
    X86_TICK(c, 11);
    // 004a81  mov dword ptr gs:[ebp + 0x1cc], eax
    X86_AT(c, 0x4a81u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu)), c.r[0]);
    // 004a88  push eax
    X86_AT(c, 0x4a88u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 004a89  call dword ptr gs:[ebp + 0x32c]
    X86_AT(c, 0x4a89u);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x32Cu))); push32(c, 0x4a90u); x86_call(c, t); X86_RET(c, 0x4a90u); }
    X86_TICK(c, 22);
    // 004a90  pop dword ptr gs:[ebp + 0x1cc]
    X86_AT(c, 0x4a90u);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu)), v); }
    // 004a97  pop dword ptr gs:[ebp + 0x10c]
    X86_AT(c, 0x4a97u);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x10Cu)), v); }
    // 004a9e  pop dword ptr gs:[ebp + 0x104]
    X86_AT(c, 0x4a9eu);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u)), v); }
    // 004aa5  call 0x36e4
    X86_AT(c, 0x4aa5u);
    push32(c, 0x4aaau); f_000036e4(c); X86_RET(c, 0x4aaau);
    X86_TICK(c, 7);
    // 004aaa  call 0x6120
    X86_AT(c, 0x4aaau);
    push32(c, 0x4aafu); f_00006120(c); X86_RET(c, 0x4aafu);
    X86_TICK(c, 32);
    // 004aaf  mov ebx, dword ptr gs:[ebp + 0x2f0]
    X86_AT(c, 0x4aafu);
    c.r[3] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2F0u)));
    // 004ab6  shld edx, ebx, 0x10
    X86_AT(c, 0x4ab6u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_double(c, true, v, c.r[3], 0x10u, 4, w); if (w) c.r[2] = r; }
    // 004aba  and bl, 0xe0
    X86_AT(c, 0x4abau);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v & 0xE0u, 1)); }
    // 004abd  mov esi, dword ptr gs:[ebp + 0x2e8]
    X86_AT(c, 0x4abdu);
    c.r[6] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2E8u)));
    // 004ac4  movzx eax, byte ptr gs:[ebp + 0x2ee]
    X86_AT(c, 0x4ac4u);
    c.r[0] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x2EEu)));
    // 004acc  mov eax, dword ptr cs:[eax*8 + 0x4bac]
    X86_AT(c, 0x4accu);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 8 + 0x4BACu)));
    // 004ad4  mov dword ptr gs:[ebp + 0x2f4], eax
    X86_AT(c, 0x4ad4u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2F4u)), c.r[0]);
    // 004adb  call dword ptr gs:[ebp + 0x32c]
    X86_AT(c, 0x4adbu);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x32Cu))); push32(c, 0x4ae2u); x86_call(c, t); X86_RET(c, 0x4ae2u); }
    X86_TICK(c, 15);
    // 004ae2  pop dword ptr gs:[ebp + 0x10]
    X86_AT(c, 0x4ae2u);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x10u)), v); }
    // 004ae6  ret 
    X86_AT(c, 0x4ae6u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x4a81u, "ran off the end of a function");
}
void f_00004a88(X86Cpu& c) {
    X86_TICK(c, 9);
    // 004a88  push eax
    X86_AT(c, 0x4a88u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 004a89  call dword ptr gs:[ebp + 0x32c]
    X86_AT(c, 0x4a89u);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x32Cu))); push32(c, 0x4a90u); x86_call(c, t); X86_RET(c, 0x4a90u); }
    X86_TICK(c, 22);
    // 004a90  pop dword ptr gs:[ebp + 0x1cc]
    X86_AT(c, 0x4a90u);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu)), v); }
    // 004a97  pop dword ptr gs:[ebp + 0x10c]
    X86_AT(c, 0x4a97u);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x10Cu)), v); }
    // 004a9e  pop dword ptr gs:[ebp + 0x104]
    X86_AT(c, 0x4a9eu);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u)), v); }
    // 004aa5  call 0x36e4
    X86_AT(c, 0x4aa5u);
    push32(c, 0x4aaau); f_000036e4(c); X86_RET(c, 0x4aaau);
    X86_TICK(c, 7);
    // 004aaa  call 0x6120
    X86_AT(c, 0x4aaau);
    push32(c, 0x4aafu); f_00006120(c); X86_RET(c, 0x4aafu);
    X86_TICK(c, 32);
    // 004aaf  mov ebx, dword ptr gs:[ebp + 0x2f0]
    X86_AT(c, 0x4aafu);
    c.r[3] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2F0u)));
    // 004ab6  shld edx, ebx, 0x10
    X86_AT(c, 0x4ab6u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_double(c, true, v, c.r[3], 0x10u, 4, w); if (w) c.r[2] = r; }
    // 004aba  and bl, 0xe0
    X86_AT(c, 0x4abau);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v & 0xE0u, 1)); }
    // 004abd  mov esi, dword ptr gs:[ebp + 0x2e8]
    X86_AT(c, 0x4abdu);
    c.r[6] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2E8u)));
    // 004ac4  movzx eax, byte ptr gs:[ebp + 0x2ee]
    X86_AT(c, 0x4ac4u);
    c.r[0] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x2EEu)));
    // 004acc  mov eax, dword ptr cs:[eax*8 + 0x4bac]
    X86_AT(c, 0x4accu);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 8 + 0x4BACu)));
    // 004ad4  mov dword ptr gs:[ebp + 0x2f4], eax
    X86_AT(c, 0x4ad4u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2F4u)), c.r[0]);
    // 004adb  call dword ptr gs:[ebp + 0x32c]
    X86_AT(c, 0x4adbu);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x32Cu))); push32(c, 0x4ae2u); x86_call(c, t); X86_RET(c, 0x4ae2u); }
    X86_TICK(c, 15);
    // 004ae2  pop dword ptr gs:[ebp + 0x10]
    X86_AT(c, 0x4ae2u);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x10u)), v); }
    // 004ae6  ret 
    X86_AT(c, 0x4ae6u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x4a88u, "ran off the end of a function");
}
void f_00004a89(X86Cpu& c) {
    X86_TICK(c, 7);
    // 004a89  call dword ptr gs:[ebp + 0x32c]
    X86_AT(c, 0x4a89u);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x32Cu))); push32(c, 0x4a90u); x86_call(c, t); X86_RET(c, 0x4a90u); }
    X86_TICK(c, 22);
    // 004a90  pop dword ptr gs:[ebp + 0x1cc]
    X86_AT(c, 0x4a90u);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu)), v); }
    // 004a97  pop dword ptr gs:[ebp + 0x10c]
    X86_AT(c, 0x4a97u);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x10Cu)), v); }
    // 004a9e  pop dword ptr gs:[ebp + 0x104]
    X86_AT(c, 0x4a9eu);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u)), v); }
    // 004aa5  call 0x36e4
    X86_AT(c, 0x4aa5u);
    push32(c, 0x4aaau); f_000036e4(c); X86_RET(c, 0x4aaau);
    X86_TICK(c, 7);
    // 004aaa  call 0x6120
    X86_AT(c, 0x4aaau);
    push32(c, 0x4aafu); f_00006120(c); X86_RET(c, 0x4aafu);
    X86_TICK(c, 32);
    // 004aaf  mov ebx, dword ptr gs:[ebp + 0x2f0]
    X86_AT(c, 0x4aafu);
    c.r[3] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2F0u)));
    // 004ab6  shld edx, ebx, 0x10
    X86_AT(c, 0x4ab6u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_double(c, true, v, c.r[3], 0x10u, 4, w); if (w) c.r[2] = r; }
    // 004aba  and bl, 0xe0
    X86_AT(c, 0x4abau);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v & 0xE0u, 1)); }
    // 004abd  mov esi, dword ptr gs:[ebp + 0x2e8]
    X86_AT(c, 0x4abdu);
    c.r[6] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2E8u)));
    // 004ac4  movzx eax, byte ptr gs:[ebp + 0x2ee]
    X86_AT(c, 0x4ac4u);
    c.r[0] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x2EEu)));
    // 004acc  mov eax, dword ptr cs:[eax*8 + 0x4bac]
    X86_AT(c, 0x4accu);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 8 + 0x4BACu)));
    // 004ad4  mov dword ptr gs:[ebp + 0x2f4], eax
    X86_AT(c, 0x4ad4u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2F4u)), c.r[0]);
    // 004adb  call dword ptr gs:[ebp + 0x32c]
    X86_AT(c, 0x4adbu);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x32Cu))); push32(c, 0x4ae2u); x86_call(c, t); X86_RET(c, 0x4ae2u); }
    X86_TICK(c, 15);
    // 004ae2  pop dword ptr gs:[ebp + 0x10]
    X86_AT(c, 0x4ae2u);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x10u)), v); }
    // 004ae6  ret 
    X86_AT(c, 0x4ae6u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x4a89u, "ran off the end of a function");
}
void f_00004a90(X86Cpu& c) {
    X86_TICK(c, 22);
    // 004a90  pop dword ptr gs:[ebp + 0x1cc]
    X86_AT(c, 0x4a90u);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu)), v); }
    // 004a97  pop dword ptr gs:[ebp + 0x10c]
    X86_AT(c, 0x4a97u);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x10Cu)), v); }
    // 004a9e  pop dword ptr gs:[ebp + 0x104]
    X86_AT(c, 0x4a9eu);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u)), v); }
    // 004aa5  call 0x36e4
    X86_AT(c, 0x4aa5u);
    push32(c, 0x4aaau); f_000036e4(c); X86_RET(c, 0x4aaau);
    X86_TICK(c, 7);
    // 004aaa  call 0x6120
    X86_AT(c, 0x4aaau);
    push32(c, 0x4aafu); f_00006120(c); X86_RET(c, 0x4aafu);
    X86_TICK(c, 32);
    // 004aaf  mov ebx, dword ptr gs:[ebp + 0x2f0]
    X86_AT(c, 0x4aafu);
    c.r[3] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2F0u)));
    // 004ab6  shld edx, ebx, 0x10
    X86_AT(c, 0x4ab6u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_double(c, true, v, c.r[3], 0x10u, 4, w); if (w) c.r[2] = r; }
    // 004aba  and bl, 0xe0
    X86_AT(c, 0x4abau);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v & 0xE0u, 1)); }
    // 004abd  mov esi, dword ptr gs:[ebp + 0x2e8]
    X86_AT(c, 0x4abdu);
    c.r[6] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2E8u)));
    // 004ac4  movzx eax, byte ptr gs:[ebp + 0x2ee]
    X86_AT(c, 0x4ac4u);
    c.r[0] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x2EEu)));
    // 004acc  mov eax, dword ptr cs:[eax*8 + 0x4bac]
    X86_AT(c, 0x4accu);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 8 + 0x4BACu)));
    // 004ad4  mov dword ptr gs:[ebp + 0x2f4], eax
    X86_AT(c, 0x4ad4u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2F4u)), c.r[0]);
    // 004adb  call dword ptr gs:[ebp + 0x32c]
    X86_AT(c, 0x4adbu);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x32Cu))); push32(c, 0x4ae2u); x86_call(c, t); X86_RET(c, 0x4ae2u); }
    X86_TICK(c, 15);
    // 004ae2  pop dword ptr gs:[ebp + 0x10]
    X86_AT(c, 0x4ae2u);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x10u)), v); }
    // 004ae6  ret 
    X86_AT(c, 0x4ae6u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x4a90u, "ran off the end of a function");
}
void f_00004a97(X86Cpu& c) {
    X86_TICK(c, 17);
    // 004a97  pop dword ptr gs:[ebp + 0x10c]
    X86_AT(c, 0x4a97u);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x10Cu)), v); }
    // 004a9e  pop dword ptr gs:[ebp + 0x104]
    X86_AT(c, 0x4a9eu);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u)), v); }
    // 004aa5  call 0x36e4
    X86_AT(c, 0x4aa5u);
    push32(c, 0x4aaau); f_000036e4(c); X86_RET(c, 0x4aaau);
    X86_TICK(c, 7);
    // 004aaa  call 0x6120
    X86_AT(c, 0x4aaau);
    push32(c, 0x4aafu); f_00006120(c); X86_RET(c, 0x4aafu);
    X86_TICK(c, 32);
    // 004aaf  mov ebx, dword ptr gs:[ebp + 0x2f0]
    X86_AT(c, 0x4aafu);
    c.r[3] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2F0u)));
    // 004ab6  shld edx, ebx, 0x10
    X86_AT(c, 0x4ab6u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_double(c, true, v, c.r[3], 0x10u, 4, w); if (w) c.r[2] = r; }
    // 004aba  and bl, 0xe0
    X86_AT(c, 0x4abau);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v & 0xE0u, 1)); }
    // 004abd  mov esi, dword ptr gs:[ebp + 0x2e8]
    X86_AT(c, 0x4abdu);
    c.r[6] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2E8u)));
    // 004ac4  movzx eax, byte ptr gs:[ebp + 0x2ee]
    X86_AT(c, 0x4ac4u);
    c.r[0] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x2EEu)));
    // 004acc  mov eax, dword ptr cs:[eax*8 + 0x4bac]
    X86_AT(c, 0x4accu);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 8 + 0x4BACu)));
    // 004ad4  mov dword ptr gs:[ebp + 0x2f4], eax
    X86_AT(c, 0x4ad4u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2F4u)), c.r[0]);
    // 004adb  call dword ptr gs:[ebp + 0x32c]
    X86_AT(c, 0x4adbu);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x32Cu))); push32(c, 0x4ae2u); x86_call(c, t); X86_RET(c, 0x4ae2u); }
    X86_TICK(c, 15);
    // 004ae2  pop dword ptr gs:[ebp + 0x10]
    X86_AT(c, 0x4ae2u);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x10u)), v); }
    // 004ae6  ret 
    X86_AT(c, 0x4ae6u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x4a97u, "ran off the end of a function");
}
void f_00004a9e(X86Cpu& c) {
    X86_TICK(c, 12);
    // 004a9e  pop dword ptr gs:[ebp + 0x104]
    X86_AT(c, 0x4a9eu);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u)), v); }
    // 004aa5  call 0x36e4
    X86_AT(c, 0x4aa5u);
    push32(c, 0x4aaau); f_000036e4(c); X86_RET(c, 0x4aaau);
    X86_TICK(c, 7);
    // 004aaa  call 0x6120
    X86_AT(c, 0x4aaau);
    push32(c, 0x4aafu); f_00006120(c); X86_RET(c, 0x4aafu);
    X86_TICK(c, 32);
    // 004aaf  mov ebx, dword ptr gs:[ebp + 0x2f0]
    X86_AT(c, 0x4aafu);
    c.r[3] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2F0u)));
    // 004ab6  shld edx, ebx, 0x10
    X86_AT(c, 0x4ab6u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_double(c, true, v, c.r[3], 0x10u, 4, w); if (w) c.r[2] = r; }
    // 004aba  and bl, 0xe0
    X86_AT(c, 0x4abau);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v & 0xE0u, 1)); }
    // 004abd  mov esi, dword ptr gs:[ebp + 0x2e8]
    X86_AT(c, 0x4abdu);
    c.r[6] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2E8u)));
    // 004ac4  movzx eax, byte ptr gs:[ebp + 0x2ee]
    X86_AT(c, 0x4ac4u);
    c.r[0] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x2EEu)));
    // 004acc  mov eax, dword ptr cs:[eax*8 + 0x4bac]
    X86_AT(c, 0x4accu);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 8 + 0x4BACu)));
    // 004ad4  mov dword ptr gs:[ebp + 0x2f4], eax
    X86_AT(c, 0x4ad4u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2F4u)), c.r[0]);
    // 004adb  call dword ptr gs:[ebp + 0x32c]
    X86_AT(c, 0x4adbu);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x32Cu))); push32(c, 0x4ae2u); x86_call(c, t); X86_RET(c, 0x4ae2u); }
    X86_TICK(c, 15);
    // 004ae2  pop dword ptr gs:[ebp + 0x10]
    X86_AT(c, 0x4ae2u);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x10u)), v); }
    // 004ae6  ret 
    X86_AT(c, 0x4ae6u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x4a9eu, "ran off the end of a function");
}
void f_00004aa5(X86Cpu& c) {
    X86_TICK(c, 7);
    // 004aa5  call 0x36e4
    X86_AT(c, 0x4aa5u);
    push32(c, 0x4aaau); f_000036e4(c); X86_RET(c, 0x4aaau);
    X86_TICK(c, 7);
    // 004aaa  call 0x6120
    X86_AT(c, 0x4aaau);
    push32(c, 0x4aafu); f_00006120(c); X86_RET(c, 0x4aafu);
    X86_TICK(c, 32);
    // 004aaf  mov ebx, dword ptr gs:[ebp + 0x2f0]
    X86_AT(c, 0x4aafu);
    c.r[3] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2F0u)));
    // 004ab6  shld edx, ebx, 0x10
    X86_AT(c, 0x4ab6u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_double(c, true, v, c.r[3], 0x10u, 4, w); if (w) c.r[2] = r; }
    // 004aba  and bl, 0xe0
    X86_AT(c, 0x4abau);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v & 0xE0u, 1)); }
    // 004abd  mov esi, dword ptr gs:[ebp + 0x2e8]
    X86_AT(c, 0x4abdu);
    c.r[6] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2E8u)));
    // 004ac4  movzx eax, byte ptr gs:[ebp + 0x2ee]
    X86_AT(c, 0x4ac4u);
    c.r[0] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x2EEu)));
    // 004acc  mov eax, dword ptr cs:[eax*8 + 0x4bac]
    X86_AT(c, 0x4accu);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 8 + 0x4BACu)));
    // 004ad4  mov dword ptr gs:[ebp + 0x2f4], eax
    X86_AT(c, 0x4ad4u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2F4u)), c.r[0]);
    // 004adb  call dword ptr gs:[ebp + 0x32c]
    X86_AT(c, 0x4adbu);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x32Cu))); push32(c, 0x4ae2u); x86_call(c, t); X86_RET(c, 0x4ae2u); }
    X86_TICK(c, 15);
    // 004ae2  pop dword ptr gs:[ebp + 0x10]
    X86_AT(c, 0x4ae2u);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x10u)), v); }
    // 004ae6  ret 
    X86_AT(c, 0x4ae6u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x4aa5u, "ran off the end of a function");
}
void f_00004aaa(X86Cpu& c) {
    X86_TICK(c, 7);
    // 004aaa  call 0x6120
    X86_AT(c, 0x4aaau);
    push32(c, 0x4aafu); f_00006120(c); X86_RET(c, 0x4aafu);
    X86_TICK(c, 32);
    // 004aaf  mov ebx, dword ptr gs:[ebp + 0x2f0]
    X86_AT(c, 0x4aafu);
    c.r[3] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2F0u)));
    // 004ab6  shld edx, ebx, 0x10
    X86_AT(c, 0x4ab6u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_double(c, true, v, c.r[3], 0x10u, 4, w); if (w) c.r[2] = r; }
    // 004aba  and bl, 0xe0
    X86_AT(c, 0x4abau);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v & 0xE0u, 1)); }
    // 004abd  mov esi, dword ptr gs:[ebp + 0x2e8]
    X86_AT(c, 0x4abdu);
    c.r[6] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2E8u)));
    // 004ac4  movzx eax, byte ptr gs:[ebp + 0x2ee]
    X86_AT(c, 0x4ac4u);
    c.r[0] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x2EEu)));
    // 004acc  mov eax, dword ptr cs:[eax*8 + 0x4bac]
    X86_AT(c, 0x4accu);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 8 + 0x4BACu)));
    // 004ad4  mov dword ptr gs:[ebp + 0x2f4], eax
    X86_AT(c, 0x4ad4u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2F4u)), c.r[0]);
    // 004adb  call dword ptr gs:[ebp + 0x32c]
    X86_AT(c, 0x4adbu);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x32Cu))); push32(c, 0x4ae2u); x86_call(c, t); X86_RET(c, 0x4ae2u); }
    X86_TICK(c, 15);
    // 004ae2  pop dword ptr gs:[ebp + 0x10]
    X86_AT(c, 0x4ae2u);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x10u)), v); }
    // 004ae6  ret 
    X86_AT(c, 0x4ae6u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x4aaau, "ran off the end of a function");
}
void f_00004aaf(X86Cpu& c) {
    X86_TICK(c, 32);
    // 004aaf  mov ebx, dword ptr gs:[ebp + 0x2f0]
    X86_AT(c, 0x4aafu);
    c.r[3] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2F0u)));
    // 004ab6  shld edx, ebx, 0x10
    X86_AT(c, 0x4ab6u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_double(c, true, v, c.r[3], 0x10u, 4, w); if (w) c.r[2] = r; }
    // 004aba  and bl, 0xe0
    X86_AT(c, 0x4abau);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v & 0xE0u, 1)); }
    // 004abd  mov esi, dword ptr gs:[ebp + 0x2e8]
    X86_AT(c, 0x4abdu);
    c.r[6] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2E8u)));
    // 004ac4  movzx eax, byte ptr gs:[ebp + 0x2ee]
    X86_AT(c, 0x4ac4u);
    c.r[0] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x2EEu)));
    // 004acc  mov eax, dword ptr cs:[eax*8 + 0x4bac]
    X86_AT(c, 0x4accu);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 8 + 0x4BACu)));
    // 004ad4  mov dword ptr gs:[ebp + 0x2f4], eax
    X86_AT(c, 0x4ad4u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2F4u)), c.r[0]);
    // 004adb  call dword ptr gs:[ebp + 0x32c]
    X86_AT(c, 0x4adbu);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x32Cu))); push32(c, 0x4ae2u); x86_call(c, t); X86_RET(c, 0x4ae2u); }
    X86_TICK(c, 15);
    // 004ae2  pop dword ptr gs:[ebp + 0x10]
    X86_AT(c, 0x4ae2u);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x10u)), v); }
    // 004ae6  ret 
    X86_AT(c, 0x4ae6u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x4aafu, "ran off the end of a function");
}
void f_00004ab6(X86Cpu& c) {
    X86_TICK(c, 28);
    // 004ab6  shld edx, ebx, 0x10
    X86_AT(c, 0x4ab6u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_double(c, true, v, c.r[3], 0x10u, 4, w); if (w) c.r[2] = r; }
    // 004aba  and bl, 0xe0
    X86_AT(c, 0x4abau);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v & 0xE0u, 1)); }
    // 004abd  mov esi, dword ptr gs:[ebp + 0x2e8]
    X86_AT(c, 0x4abdu);
    c.r[6] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2E8u)));
    // 004ac4  movzx eax, byte ptr gs:[ebp + 0x2ee]
    X86_AT(c, 0x4ac4u);
    c.r[0] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x2EEu)));
    // 004acc  mov eax, dword ptr cs:[eax*8 + 0x4bac]
    X86_AT(c, 0x4accu);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 8 + 0x4BACu)));
    // 004ad4  mov dword ptr gs:[ebp + 0x2f4], eax
    X86_AT(c, 0x4ad4u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2F4u)), c.r[0]);
    // 004adb  call dword ptr gs:[ebp + 0x32c]
    X86_AT(c, 0x4adbu);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x32Cu))); push32(c, 0x4ae2u); x86_call(c, t); X86_RET(c, 0x4ae2u); }
    X86_TICK(c, 15);
    // 004ae2  pop dword ptr gs:[ebp + 0x10]
    X86_AT(c, 0x4ae2u);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x10u)), v); }
    // 004ae6  ret 
    X86_AT(c, 0x4ae6u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x4ab6u, "ran off the end of a function");
}
void f_00004aba(X86Cpu& c) {
    X86_TICK(c, 25);
    // 004aba  and bl, 0xe0
    X86_AT(c, 0x4abau);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v & 0xE0u, 1)); }
    // 004abd  mov esi, dword ptr gs:[ebp + 0x2e8]
    X86_AT(c, 0x4abdu);
    c.r[6] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2E8u)));
    // 004ac4  movzx eax, byte ptr gs:[ebp + 0x2ee]
    X86_AT(c, 0x4ac4u);
    c.r[0] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x2EEu)));
    // 004acc  mov eax, dword ptr cs:[eax*8 + 0x4bac]
    X86_AT(c, 0x4accu);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 8 + 0x4BACu)));
    // 004ad4  mov dword ptr gs:[ebp + 0x2f4], eax
    X86_AT(c, 0x4ad4u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2F4u)), c.r[0]);
    // 004adb  call dword ptr gs:[ebp + 0x32c]
    X86_AT(c, 0x4adbu);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x32Cu))); push32(c, 0x4ae2u); x86_call(c, t); X86_RET(c, 0x4ae2u); }
    X86_TICK(c, 15);
    // 004ae2  pop dword ptr gs:[ebp + 0x10]
    X86_AT(c, 0x4ae2u);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x10u)), v); }
    // 004ae6  ret 
    X86_AT(c, 0x4ae6u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x4abau, "ran off the end of a function");
}
void f_00004abd(X86Cpu& c) {
    X86_TICK(c, 23);
    // 004abd  mov esi, dword ptr gs:[ebp + 0x2e8]
    X86_AT(c, 0x4abdu);
    c.r[6] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2E8u)));
    // 004ac4  movzx eax, byte ptr gs:[ebp + 0x2ee]
    X86_AT(c, 0x4ac4u);
    c.r[0] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x2EEu)));
    // 004acc  mov eax, dword ptr cs:[eax*8 + 0x4bac]
    X86_AT(c, 0x4accu);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 8 + 0x4BACu)));
    // 004ad4  mov dword ptr gs:[ebp + 0x2f4], eax
    X86_AT(c, 0x4ad4u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2F4u)), c.r[0]);
    // 004adb  call dword ptr gs:[ebp + 0x32c]
    X86_AT(c, 0x4adbu);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x32Cu))); push32(c, 0x4ae2u); x86_call(c, t); X86_RET(c, 0x4ae2u); }
    X86_TICK(c, 15);
    // 004ae2  pop dword ptr gs:[ebp + 0x10]
    X86_AT(c, 0x4ae2u);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x10u)), v); }
    // 004ae6  ret 
    X86_AT(c, 0x4ae6u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x4abdu, "ran off the end of a function");
}
void f_00004ac4(X86Cpu& c) {
    X86_TICK(c, 19);
    // 004ac4  movzx eax, byte ptr gs:[ebp + 0x2ee]
    X86_AT(c, 0x4ac4u);
    c.r[0] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x2EEu)));
    // 004acc  mov eax, dword ptr cs:[eax*8 + 0x4bac]
    X86_AT(c, 0x4accu);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 8 + 0x4BACu)));
    // 004ad4  mov dword ptr gs:[ebp + 0x2f4], eax
    X86_AT(c, 0x4ad4u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2F4u)), c.r[0]);
    // 004adb  call dword ptr gs:[ebp + 0x32c]
    X86_AT(c, 0x4adbu);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x32Cu))); push32(c, 0x4ae2u); x86_call(c, t); X86_RET(c, 0x4ae2u); }
    X86_TICK(c, 15);
    // 004ae2  pop dword ptr gs:[ebp + 0x10]
    X86_AT(c, 0x4ae2u);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x10u)), v); }
    // 004ae6  ret 
    X86_AT(c, 0x4ae6u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x4ac4u, "ran off the end of a function");
}
void f_00004acc(X86Cpu& c) {
    X86_TICK(c, 13);
    // 004acc  mov eax, dword ptr cs:[eax*8 + 0x4bac]
    X86_AT(c, 0x4accu);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 8 + 0x4BACu)));
    // 004ad4  mov dword ptr gs:[ebp + 0x2f4], eax
    X86_AT(c, 0x4ad4u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2F4u)), c.r[0]);
    // 004adb  call dword ptr gs:[ebp + 0x32c]
    X86_AT(c, 0x4adbu);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x32Cu))); push32(c, 0x4ae2u); x86_call(c, t); X86_RET(c, 0x4ae2u); }
    X86_TICK(c, 15);
    // 004ae2  pop dword ptr gs:[ebp + 0x10]
    X86_AT(c, 0x4ae2u);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x10u)), v); }
    // 004ae6  ret 
    X86_AT(c, 0x4ae6u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x4accu, "ran off the end of a function");
}
void f_00004ad4(X86Cpu& c) {
    X86_TICK(c, 9);
    // 004ad4  mov dword ptr gs:[ebp + 0x2f4], eax
    X86_AT(c, 0x4ad4u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2F4u)), c.r[0]);
    // 004adb  call dword ptr gs:[ebp + 0x32c]
    X86_AT(c, 0x4adbu);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x32Cu))); push32(c, 0x4ae2u); x86_call(c, t); X86_RET(c, 0x4ae2u); }
    X86_TICK(c, 15);
    // 004ae2  pop dword ptr gs:[ebp + 0x10]
    X86_AT(c, 0x4ae2u);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x10u)), v); }
    // 004ae6  ret 
    X86_AT(c, 0x4ae6u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x4ad4u, "ran off the end of a function");
}
void f_00004adb(X86Cpu& c) {
    X86_TICK(c, 7);
    // 004adb  call dword ptr gs:[ebp + 0x32c]
    X86_AT(c, 0x4adbu);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x32Cu))); push32(c, 0x4ae2u); x86_call(c, t); X86_RET(c, 0x4ae2u); }
    X86_TICK(c, 15);
    // 004ae2  pop dword ptr gs:[ebp + 0x10]
    X86_AT(c, 0x4ae2u);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x10u)), v); }
    // 004ae6  ret 
    X86_AT(c, 0x4ae6u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x4adbu, "ran off the end of a function");
}
void f_00004ae2(X86Cpu& c) {
    X86_TICK(c, 15);
    // 004ae2  pop dword ptr gs:[ebp + 0x10]
    X86_AT(c, 0x4ae2u);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x10u)), v); }
    // 004ae6  ret 
    X86_AT(c, 0x4ae6u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x4ae2u, "ran off the end of a function");
}
void f_00004ae6(X86Cpu& c) {
    X86_TICK(c, 10);
    // 004ae6  ret 
    X86_AT(c, 0x4ae6u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x4ae6u, "ran off the end of a function");
}
void f_00004b50(X86Cpu& c) {
    X86_TICK(c, 8);
    // 004b50  movzx ecx, byte ptr gs:[ebp + 0x2ef]
    X86_AT(c, 0x4b50u);
    c.r[1] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x2EFu)));
    // 004b58  push ecx
    X86_AT(c, 0x4b58u);
    { uint32_t v = c.r[1]; push32(c, v); }
L_4b59:
    X86_TICK(c, 9);
    // 004b59  push ebx
    X86_AT(c, 0x4b59u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 004b5a  call dword ptr gs:[ebp + 0x2f4]
    X86_AT(c, 0x4b5au);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2F4u))); push32(c, 0x4b61u); x86_call(c, t); X86_RET(c, 0x4b61u); }
    X86_TICK(c, 7);
    // 004b61  test eax, eax
    X86_AT(c, 0x4b61u);
    (void)x86_logic(c, c.r[0] & c.r[0], 4);
    // 004b63  je 0x4b96
    X86_AT(c, 0x4b63u);
    if (x86_cc(c, 4)) { goto L_4b96; }
    X86_TICK(c, 22);
    // 004b65  push esi
    X86_AT(c, 0x4b65u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 004b66  push eax
    X86_AT(c, 0x4b66u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 004b67  mov cl, byte ptr gs:[ebp + 0x22b]
    X86_AT(c, 0x4b67u);
    s8(c, 1, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x22Bu))));
    // 004b6e  shr eax, cl
    X86_AT(c, 0x4b6eu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 004b70  push ebx
    X86_AT(c, 0x4b70u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 004b71  push edx
    X86_AT(c, 0x4b71u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 004b72  call dword ptr gs:[ebp + 0x31c]
    X86_AT(c, 0x4b72u);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x31Cu))); push32(c, 0x4b79u); x86_call(c, t); X86_RET(c, 0x4b79u); }
    X86_TICK(c, 32);
    // 004b79  pop edx
    X86_AT(c, 0x4b79u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 004b7a  pop ebx
    X86_AT(c, 0x4b7au);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 004b7b  pop edi
    X86_AT(c, 0x4b7bu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 004b7c  sub eax, eax
    X86_AT(c, 0x4b7cu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 004b7e  mov cl, byte ptr gs:[ebp + 0x22b]
    X86_AT(c, 0x4b7eu);
    s8(c, 1, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x22Bu))));
    // 004b85  shrd eax, edi, cl
    X86_AT(c, 0x4b85u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, false, v, c.r[7], g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 004b88  add bx, 0x20
    X86_AT(c, 0x4b88u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, 0x20u, 0, 2)); }
    // 004b8c  push edx
    X86_AT(c, 0x4b8cu);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 004b8d  call dword ptr gs:[ebp + 0x31c]
    X86_AT(c, 0x4b8du);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x31Cu))); push32(c, 0x4b94u); x86_call(c, t); X86_RET(c, 0x4b94u); }
    X86_TICK(c, 8);
    // 004b94  pop edx
    X86_AT(c, 0x4b94u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 004b95  pop esi
    X86_AT(c, 0x4b95u);
    { uint32_t v = pop32(c); c.r[6] = v; }
L_4b96:
    X86_TICK(c, 28);
    // 004b96  pop ebx
    X86_AT(c, 0x4b96u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 004b97  inc dx
    X86_AT(c, 0x4b97u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_inc(c, v, 2)); }
    // 004b99  mov eax, dword ptr gs:[ebp + 0x20]
    X86_AT(c, 0x4b99u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x20u)));
    // 004b9d  add dword ptr gs:[ebp + 0x1cc], eax
    X86_AT(c, 0x4b9du);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 004ba4  dec dword ptr [esp]
    X86_AT(c, 0x4ba4u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 004ba7  jne 0x4b59
    X86_AT(c, 0x4ba7u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x4b59u); goto L_4b59; }
    X86_TICK(c, 12);
    // 004ba9  add esp, 4
    X86_AT(c, 0x4ba9u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 004bac  ret 
    X86_AT(c, 0x4bacu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x4b50u, "ran off the end of a function");
}
void f_00004b58(X86Cpu& c) {
    X86_TICK(c, 2);
    // 004b58  push ecx
    X86_AT(c, 0x4b58u);
    { uint32_t v = c.r[1]; push32(c, v); }
L_4b59:
    X86_TICK(c, 9);
    // 004b59  push ebx
    X86_AT(c, 0x4b59u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 004b5a  call dword ptr gs:[ebp + 0x2f4]
    X86_AT(c, 0x4b5au);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2F4u))); push32(c, 0x4b61u); x86_call(c, t); X86_RET(c, 0x4b61u); }
    X86_TICK(c, 7);
    // 004b61  test eax, eax
    X86_AT(c, 0x4b61u);
    (void)x86_logic(c, c.r[0] & c.r[0], 4);
    // 004b63  je 0x4b96
    X86_AT(c, 0x4b63u);
    if (x86_cc(c, 4)) { goto L_4b96; }
    X86_TICK(c, 22);
    // 004b65  push esi
    X86_AT(c, 0x4b65u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 004b66  push eax
    X86_AT(c, 0x4b66u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 004b67  mov cl, byte ptr gs:[ebp + 0x22b]
    X86_AT(c, 0x4b67u);
    s8(c, 1, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x22Bu))));
    // 004b6e  shr eax, cl
    X86_AT(c, 0x4b6eu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 004b70  push ebx
    X86_AT(c, 0x4b70u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 004b71  push edx
    X86_AT(c, 0x4b71u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 004b72  call dword ptr gs:[ebp + 0x31c]
    X86_AT(c, 0x4b72u);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x31Cu))); push32(c, 0x4b79u); x86_call(c, t); X86_RET(c, 0x4b79u); }
    X86_TICK(c, 32);
    // 004b79  pop edx
    X86_AT(c, 0x4b79u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 004b7a  pop ebx
    X86_AT(c, 0x4b7au);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 004b7b  pop edi
    X86_AT(c, 0x4b7bu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 004b7c  sub eax, eax
    X86_AT(c, 0x4b7cu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 004b7e  mov cl, byte ptr gs:[ebp + 0x22b]
    X86_AT(c, 0x4b7eu);
    s8(c, 1, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x22Bu))));
    // 004b85  shrd eax, edi, cl
    X86_AT(c, 0x4b85u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, false, v, c.r[7], g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 004b88  add bx, 0x20
    X86_AT(c, 0x4b88u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, 0x20u, 0, 2)); }
    // 004b8c  push edx
    X86_AT(c, 0x4b8cu);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 004b8d  call dword ptr gs:[ebp + 0x31c]
    X86_AT(c, 0x4b8du);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x31Cu))); push32(c, 0x4b94u); x86_call(c, t); X86_RET(c, 0x4b94u); }
    X86_TICK(c, 8);
    // 004b94  pop edx
    X86_AT(c, 0x4b94u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 004b95  pop esi
    X86_AT(c, 0x4b95u);
    { uint32_t v = pop32(c); c.r[6] = v; }
L_4b96:
    X86_TICK(c, 28);
    // 004b96  pop ebx
    X86_AT(c, 0x4b96u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 004b97  inc dx
    X86_AT(c, 0x4b97u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_inc(c, v, 2)); }
    // 004b99  mov eax, dword ptr gs:[ebp + 0x20]
    X86_AT(c, 0x4b99u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x20u)));
    // 004b9d  add dword ptr gs:[ebp + 0x1cc], eax
    X86_AT(c, 0x4b9du);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 004ba4  dec dword ptr [esp]
    X86_AT(c, 0x4ba4u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 004ba7  jne 0x4b59
    X86_AT(c, 0x4ba7u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x4b59u); goto L_4b59; }
    X86_TICK(c, 12);
    // 004ba9  add esp, 4
    X86_AT(c, 0x4ba9u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 004bac  ret 
    X86_AT(c, 0x4bacu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x4b58u, "ran off the end of a function");
}
void f_00004b59(X86Cpu& c) {
L_4b59:
    X86_TICK(c, 9);
    // 004b59  push ebx
    X86_AT(c, 0x4b59u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 004b5a  call dword ptr gs:[ebp + 0x2f4]
    X86_AT(c, 0x4b5au);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2F4u))); push32(c, 0x4b61u); x86_call(c, t); X86_RET(c, 0x4b61u); }
    X86_TICK(c, 7);
    // 004b61  test eax, eax
    X86_AT(c, 0x4b61u);
    (void)x86_logic(c, c.r[0] & c.r[0], 4);
    // 004b63  je 0x4b96
    X86_AT(c, 0x4b63u);
    if (x86_cc(c, 4)) { goto L_4b96; }
    X86_TICK(c, 22);
    // 004b65  push esi
    X86_AT(c, 0x4b65u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 004b66  push eax
    X86_AT(c, 0x4b66u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 004b67  mov cl, byte ptr gs:[ebp + 0x22b]
    X86_AT(c, 0x4b67u);
    s8(c, 1, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x22Bu))));
    // 004b6e  shr eax, cl
    X86_AT(c, 0x4b6eu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 004b70  push ebx
    X86_AT(c, 0x4b70u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 004b71  push edx
    X86_AT(c, 0x4b71u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 004b72  call dword ptr gs:[ebp + 0x31c]
    X86_AT(c, 0x4b72u);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x31Cu))); push32(c, 0x4b79u); x86_call(c, t); X86_RET(c, 0x4b79u); }
    X86_TICK(c, 32);
    // 004b79  pop edx
    X86_AT(c, 0x4b79u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 004b7a  pop ebx
    X86_AT(c, 0x4b7au);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 004b7b  pop edi
    X86_AT(c, 0x4b7bu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 004b7c  sub eax, eax
    X86_AT(c, 0x4b7cu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 004b7e  mov cl, byte ptr gs:[ebp + 0x22b]
    X86_AT(c, 0x4b7eu);
    s8(c, 1, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x22Bu))));
    // 004b85  shrd eax, edi, cl
    X86_AT(c, 0x4b85u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, false, v, c.r[7], g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 004b88  add bx, 0x20
    X86_AT(c, 0x4b88u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, 0x20u, 0, 2)); }
    // 004b8c  push edx
    X86_AT(c, 0x4b8cu);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 004b8d  call dword ptr gs:[ebp + 0x31c]
    X86_AT(c, 0x4b8du);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x31Cu))); push32(c, 0x4b94u); x86_call(c, t); X86_RET(c, 0x4b94u); }
    X86_TICK(c, 8);
    // 004b94  pop edx
    X86_AT(c, 0x4b94u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 004b95  pop esi
    X86_AT(c, 0x4b95u);
    { uint32_t v = pop32(c); c.r[6] = v; }
L_4b96:
    X86_TICK(c, 28);
    // 004b96  pop ebx
    X86_AT(c, 0x4b96u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 004b97  inc dx
    X86_AT(c, 0x4b97u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_inc(c, v, 2)); }
    // 004b99  mov eax, dword ptr gs:[ebp + 0x20]
    X86_AT(c, 0x4b99u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x20u)));
    // 004b9d  add dword ptr gs:[ebp + 0x1cc], eax
    X86_AT(c, 0x4b9du);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 004ba4  dec dword ptr [esp]
    X86_AT(c, 0x4ba4u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 004ba7  jne 0x4b59
    X86_AT(c, 0x4ba7u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x4b59u); goto L_4b59; }
    X86_TICK(c, 12);
    // 004ba9  add esp, 4
    X86_AT(c, 0x4ba9u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 004bac  ret 
    X86_AT(c, 0x4bacu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x4b59u, "ran off the end of a function");
}
void f_00004b5a(X86Cpu& c) {
    goto L_4b5a;
L_4b59:
    X86_TICK(c, 2);
    // 004b59  push ebx
    X86_AT(c, 0x4b59u);
    { uint32_t v = c.r[3]; push32(c, v); }
L_4b5a:
    X86_TICK(c, 7);
    // 004b5a  call dword ptr gs:[ebp + 0x2f4]
    X86_AT(c, 0x4b5au);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2F4u))); push32(c, 0x4b61u); x86_call(c, t); X86_RET(c, 0x4b61u); }
    X86_TICK(c, 7);
    // 004b61  test eax, eax
    X86_AT(c, 0x4b61u);
    (void)x86_logic(c, c.r[0] & c.r[0], 4);
    // 004b63  je 0x4b96
    X86_AT(c, 0x4b63u);
    if (x86_cc(c, 4)) { goto L_4b96; }
    X86_TICK(c, 22);
    // 004b65  push esi
    X86_AT(c, 0x4b65u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 004b66  push eax
    X86_AT(c, 0x4b66u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 004b67  mov cl, byte ptr gs:[ebp + 0x22b]
    X86_AT(c, 0x4b67u);
    s8(c, 1, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x22Bu))));
    // 004b6e  shr eax, cl
    X86_AT(c, 0x4b6eu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 004b70  push ebx
    X86_AT(c, 0x4b70u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 004b71  push edx
    X86_AT(c, 0x4b71u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 004b72  call dword ptr gs:[ebp + 0x31c]
    X86_AT(c, 0x4b72u);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x31Cu))); push32(c, 0x4b79u); x86_call(c, t); X86_RET(c, 0x4b79u); }
    X86_TICK(c, 32);
    // 004b79  pop edx
    X86_AT(c, 0x4b79u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 004b7a  pop ebx
    X86_AT(c, 0x4b7au);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 004b7b  pop edi
    X86_AT(c, 0x4b7bu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 004b7c  sub eax, eax
    X86_AT(c, 0x4b7cu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 004b7e  mov cl, byte ptr gs:[ebp + 0x22b]
    X86_AT(c, 0x4b7eu);
    s8(c, 1, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x22Bu))));
    // 004b85  shrd eax, edi, cl
    X86_AT(c, 0x4b85u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, false, v, c.r[7], g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 004b88  add bx, 0x20
    X86_AT(c, 0x4b88u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, 0x20u, 0, 2)); }
    // 004b8c  push edx
    X86_AT(c, 0x4b8cu);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 004b8d  call dword ptr gs:[ebp + 0x31c]
    X86_AT(c, 0x4b8du);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x31Cu))); push32(c, 0x4b94u); x86_call(c, t); X86_RET(c, 0x4b94u); }
    X86_TICK(c, 8);
    // 004b94  pop edx
    X86_AT(c, 0x4b94u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 004b95  pop esi
    X86_AT(c, 0x4b95u);
    { uint32_t v = pop32(c); c.r[6] = v; }
L_4b96:
    X86_TICK(c, 28);
    // 004b96  pop ebx
    X86_AT(c, 0x4b96u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 004b97  inc dx
    X86_AT(c, 0x4b97u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_inc(c, v, 2)); }
    // 004b99  mov eax, dword ptr gs:[ebp + 0x20]
    X86_AT(c, 0x4b99u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x20u)));
    // 004b9d  add dword ptr gs:[ebp + 0x1cc], eax
    X86_AT(c, 0x4b9du);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 004ba4  dec dword ptr [esp]
    X86_AT(c, 0x4ba4u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 004ba7  jne 0x4b59
    X86_AT(c, 0x4ba7u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x4b59u); goto L_4b59; }
    X86_TICK(c, 12);
    // 004ba9  add esp, 4
    X86_AT(c, 0x4ba9u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 004bac  ret 
    X86_AT(c, 0x4bacu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x4b5au, "ran off the end of a function");
}
void f_00004b61(X86Cpu& c) {
    goto L_4b61;
L_4b59:
    X86_TICK(c, 9);
    // 004b59  push ebx
    X86_AT(c, 0x4b59u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 004b5a  call dword ptr gs:[ebp + 0x2f4]
    X86_AT(c, 0x4b5au);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2F4u))); push32(c, 0x4b61u); x86_call(c, t); X86_RET(c, 0x4b61u); }
L_4b61:
    X86_TICK(c, 7);
    // 004b61  test eax, eax
    X86_AT(c, 0x4b61u);
    (void)x86_logic(c, c.r[0] & c.r[0], 4);
    // 004b63  je 0x4b96
    X86_AT(c, 0x4b63u);
    if (x86_cc(c, 4)) { goto L_4b96; }
    X86_TICK(c, 22);
    // 004b65  push esi
    X86_AT(c, 0x4b65u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 004b66  push eax
    X86_AT(c, 0x4b66u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 004b67  mov cl, byte ptr gs:[ebp + 0x22b]
    X86_AT(c, 0x4b67u);
    s8(c, 1, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x22Bu))));
    // 004b6e  shr eax, cl
    X86_AT(c, 0x4b6eu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 004b70  push ebx
    X86_AT(c, 0x4b70u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 004b71  push edx
    X86_AT(c, 0x4b71u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 004b72  call dword ptr gs:[ebp + 0x31c]
    X86_AT(c, 0x4b72u);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x31Cu))); push32(c, 0x4b79u); x86_call(c, t); X86_RET(c, 0x4b79u); }
    X86_TICK(c, 32);
    // 004b79  pop edx
    X86_AT(c, 0x4b79u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 004b7a  pop ebx
    X86_AT(c, 0x4b7au);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 004b7b  pop edi
    X86_AT(c, 0x4b7bu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 004b7c  sub eax, eax
    X86_AT(c, 0x4b7cu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 004b7e  mov cl, byte ptr gs:[ebp + 0x22b]
    X86_AT(c, 0x4b7eu);
    s8(c, 1, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x22Bu))));
    // 004b85  shrd eax, edi, cl
    X86_AT(c, 0x4b85u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, false, v, c.r[7], g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 004b88  add bx, 0x20
    X86_AT(c, 0x4b88u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, 0x20u, 0, 2)); }
    // 004b8c  push edx
    X86_AT(c, 0x4b8cu);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 004b8d  call dword ptr gs:[ebp + 0x31c]
    X86_AT(c, 0x4b8du);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x31Cu))); push32(c, 0x4b94u); x86_call(c, t); X86_RET(c, 0x4b94u); }
    X86_TICK(c, 8);
    // 004b94  pop edx
    X86_AT(c, 0x4b94u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 004b95  pop esi
    X86_AT(c, 0x4b95u);
    { uint32_t v = pop32(c); c.r[6] = v; }
L_4b96:
    X86_TICK(c, 28);
    // 004b96  pop ebx
    X86_AT(c, 0x4b96u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 004b97  inc dx
    X86_AT(c, 0x4b97u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_inc(c, v, 2)); }
    // 004b99  mov eax, dword ptr gs:[ebp + 0x20]
    X86_AT(c, 0x4b99u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x20u)));
    // 004b9d  add dword ptr gs:[ebp + 0x1cc], eax
    X86_AT(c, 0x4b9du);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 004ba4  dec dword ptr [esp]
    X86_AT(c, 0x4ba4u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 004ba7  jne 0x4b59
    X86_AT(c, 0x4ba7u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x4b59u); goto L_4b59; }
    X86_TICK(c, 12);
    // 004ba9  add esp, 4
    X86_AT(c, 0x4ba9u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 004bac  ret 
    X86_AT(c, 0x4bacu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x4b61u, "ran off the end of a function");
}
void f_00004b63(X86Cpu& c) {
    goto L_4b63;
L_4b59:
    X86_TICK(c, 9);
    // 004b59  push ebx
    X86_AT(c, 0x4b59u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 004b5a  call dword ptr gs:[ebp + 0x2f4]
    X86_AT(c, 0x4b5au);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2F4u))); push32(c, 0x4b61u); x86_call(c, t); X86_RET(c, 0x4b61u); }
    X86_TICK(c, 2);
    // 004b61  test eax, eax
    X86_AT(c, 0x4b61u);
    (void)x86_logic(c, c.r[0] & c.r[0], 4);
L_4b63:
    X86_TICK(c, 5);
    // 004b63  je 0x4b96
    X86_AT(c, 0x4b63u);
    if (x86_cc(c, 4)) { goto L_4b96; }
    X86_TICK(c, 22);
    // 004b65  push esi
    X86_AT(c, 0x4b65u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 004b66  push eax
    X86_AT(c, 0x4b66u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 004b67  mov cl, byte ptr gs:[ebp + 0x22b]
    X86_AT(c, 0x4b67u);
    s8(c, 1, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x22Bu))));
    // 004b6e  shr eax, cl
    X86_AT(c, 0x4b6eu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 004b70  push ebx
    X86_AT(c, 0x4b70u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 004b71  push edx
    X86_AT(c, 0x4b71u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 004b72  call dword ptr gs:[ebp + 0x31c]
    X86_AT(c, 0x4b72u);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x31Cu))); push32(c, 0x4b79u); x86_call(c, t); X86_RET(c, 0x4b79u); }
    X86_TICK(c, 32);
    // 004b79  pop edx
    X86_AT(c, 0x4b79u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 004b7a  pop ebx
    X86_AT(c, 0x4b7au);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 004b7b  pop edi
    X86_AT(c, 0x4b7bu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 004b7c  sub eax, eax
    X86_AT(c, 0x4b7cu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 004b7e  mov cl, byte ptr gs:[ebp + 0x22b]
    X86_AT(c, 0x4b7eu);
    s8(c, 1, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x22Bu))));
    // 004b85  shrd eax, edi, cl
    X86_AT(c, 0x4b85u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, false, v, c.r[7], g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 004b88  add bx, 0x20
    X86_AT(c, 0x4b88u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, 0x20u, 0, 2)); }
    // 004b8c  push edx
    X86_AT(c, 0x4b8cu);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 004b8d  call dword ptr gs:[ebp + 0x31c]
    X86_AT(c, 0x4b8du);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x31Cu))); push32(c, 0x4b94u); x86_call(c, t); X86_RET(c, 0x4b94u); }
    X86_TICK(c, 8);
    // 004b94  pop edx
    X86_AT(c, 0x4b94u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 004b95  pop esi
    X86_AT(c, 0x4b95u);
    { uint32_t v = pop32(c); c.r[6] = v; }
L_4b96:
    X86_TICK(c, 28);
    // 004b96  pop ebx
    X86_AT(c, 0x4b96u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 004b97  inc dx
    X86_AT(c, 0x4b97u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_inc(c, v, 2)); }
    // 004b99  mov eax, dword ptr gs:[ebp + 0x20]
    X86_AT(c, 0x4b99u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x20u)));
    // 004b9d  add dword ptr gs:[ebp + 0x1cc], eax
    X86_AT(c, 0x4b9du);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 004ba4  dec dword ptr [esp]
    X86_AT(c, 0x4ba4u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 004ba7  jne 0x4b59
    X86_AT(c, 0x4ba7u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x4b59u); goto L_4b59; }
    X86_TICK(c, 12);
    // 004ba9  add esp, 4
    X86_AT(c, 0x4ba9u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 004bac  ret 
    X86_AT(c, 0x4bacu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x4b63u, "ran off the end of a function");
}
void f_00004b65(X86Cpu& c) {
    goto L_4b65;
L_4b59:
    X86_TICK(c, 9);
    // 004b59  push ebx
    X86_AT(c, 0x4b59u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 004b5a  call dword ptr gs:[ebp + 0x2f4]
    X86_AT(c, 0x4b5au);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2F4u))); push32(c, 0x4b61u); x86_call(c, t); X86_RET(c, 0x4b61u); }
    X86_TICK(c, 7);
    // 004b61  test eax, eax
    X86_AT(c, 0x4b61u);
    (void)x86_logic(c, c.r[0] & c.r[0], 4);
    // 004b63  je 0x4b96
    X86_AT(c, 0x4b63u);
    if (x86_cc(c, 4)) { goto L_4b96; }
L_4b65:
    X86_TICK(c, 22);
    // 004b65  push esi
    X86_AT(c, 0x4b65u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 004b66  push eax
    X86_AT(c, 0x4b66u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 004b67  mov cl, byte ptr gs:[ebp + 0x22b]
    X86_AT(c, 0x4b67u);
    s8(c, 1, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x22Bu))));
    // 004b6e  shr eax, cl
    X86_AT(c, 0x4b6eu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 004b70  push ebx
    X86_AT(c, 0x4b70u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 004b71  push edx
    X86_AT(c, 0x4b71u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 004b72  call dword ptr gs:[ebp + 0x31c]
    X86_AT(c, 0x4b72u);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x31Cu))); push32(c, 0x4b79u); x86_call(c, t); X86_RET(c, 0x4b79u); }
    X86_TICK(c, 32);
    // 004b79  pop edx
    X86_AT(c, 0x4b79u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 004b7a  pop ebx
    X86_AT(c, 0x4b7au);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 004b7b  pop edi
    X86_AT(c, 0x4b7bu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 004b7c  sub eax, eax
    X86_AT(c, 0x4b7cu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 004b7e  mov cl, byte ptr gs:[ebp + 0x22b]
    X86_AT(c, 0x4b7eu);
    s8(c, 1, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x22Bu))));
    // 004b85  shrd eax, edi, cl
    X86_AT(c, 0x4b85u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, false, v, c.r[7], g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 004b88  add bx, 0x20
    X86_AT(c, 0x4b88u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, 0x20u, 0, 2)); }
    // 004b8c  push edx
    X86_AT(c, 0x4b8cu);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 004b8d  call dword ptr gs:[ebp + 0x31c]
    X86_AT(c, 0x4b8du);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x31Cu))); push32(c, 0x4b94u); x86_call(c, t); X86_RET(c, 0x4b94u); }
    X86_TICK(c, 8);
    // 004b94  pop edx
    X86_AT(c, 0x4b94u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 004b95  pop esi
    X86_AT(c, 0x4b95u);
    { uint32_t v = pop32(c); c.r[6] = v; }
L_4b96:
    X86_TICK(c, 28);
    // 004b96  pop ebx
    X86_AT(c, 0x4b96u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 004b97  inc dx
    X86_AT(c, 0x4b97u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_inc(c, v, 2)); }
    // 004b99  mov eax, dword ptr gs:[ebp + 0x20]
    X86_AT(c, 0x4b99u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x20u)));
    // 004b9d  add dword ptr gs:[ebp + 0x1cc], eax
    X86_AT(c, 0x4b9du);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 004ba4  dec dword ptr [esp]
    X86_AT(c, 0x4ba4u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 004ba7  jne 0x4b59
    X86_AT(c, 0x4ba7u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x4b59u); goto L_4b59; }
    X86_TICK(c, 12);
    // 004ba9  add esp, 4
    X86_AT(c, 0x4ba9u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 004bac  ret 
    X86_AT(c, 0x4bacu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x4b65u, "ran off the end of a function");
}
void f_00004b66(X86Cpu& c) {
    goto L_4b66;
L_4b59:
    X86_TICK(c, 9);
    // 004b59  push ebx
    X86_AT(c, 0x4b59u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 004b5a  call dword ptr gs:[ebp + 0x2f4]
    X86_AT(c, 0x4b5au);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2F4u))); push32(c, 0x4b61u); x86_call(c, t); X86_RET(c, 0x4b61u); }
    X86_TICK(c, 7);
    // 004b61  test eax, eax
    X86_AT(c, 0x4b61u);
    (void)x86_logic(c, c.r[0] & c.r[0], 4);
    // 004b63  je 0x4b96
    X86_AT(c, 0x4b63u);
    if (x86_cc(c, 4)) { goto L_4b96; }
    X86_TICK(c, 2);
    // 004b65  push esi
    X86_AT(c, 0x4b65u);
    { uint32_t v = c.r[6]; push32(c, v); }
L_4b66:
    X86_TICK(c, 20);
    // 004b66  push eax
    X86_AT(c, 0x4b66u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 004b67  mov cl, byte ptr gs:[ebp + 0x22b]
    X86_AT(c, 0x4b67u);
    s8(c, 1, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x22Bu))));
    // 004b6e  shr eax, cl
    X86_AT(c, 0x4b6eu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 004b70  push ebx
    X86_AT(c, 0x4b70u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 004b71  push edx
    X86_AT(c, 0x4b71u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 004b72  call dword ptr gs:[ebp + 0x31c]
    X86_AT(c, 0x4b72u);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x31Cu))); push32(c, 0x4b79u); x86_call(c, t); X86_RET(c, 0x4b79u); }
    X86_TICK(c, 32);
    // 004b79  pop edx
    X86_AT(c, 0x4b79u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 004b7a  pop ebx
    X86_AT(c, 0x4b7au);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 004b7b  pop edi
    X86_AT(c, 0x4b7bu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 004b7c  sub eax, eax
    X86_AT(c, 0x4b7cu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 004b7e  mov cl, byte ptr gs:[ebp + 0x22b]
    X86_AT(c, 0x4b7eu);
    s8(c, 1, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x22Bu))));
    // 004b85  shrd eax, edi, cl
    X86_AT(c, 0x4b85u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, false, v, c.r[7], g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 004b88  add bx, 0x20
    X86_AT(c, 0x4b88u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, 0x20u, 0, 2)); }
    // 004b8c  push edx
    X86_AT(c, 0x4b8cu);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 004b8d  call dword ptr gs:[ebp + 0x31c]
    X86_AT(c, 0x4b8du);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x31Cu))); push32(c, 0x4b94u); x86_call(c, t); X86_RET(c, 0x4b94u); }
    X86_TICK(c, 8);
    // 004b94  pop edx
    X86_AT(c, 0x4b94u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 004b95  pop esi
    X86_AT(c, 0x4b95u);
    { uint32_t v = pop32(c); c.r[6] = v; }
L_4b96:
    X86_TICK(c, 28);
    // 004b96  pop ebx
    X86_AT(c, 0x4b96u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 004b97  inc dx
    X86_AT(c, 0x4b97u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_inc(c, v, 2)); }
    // 004b99  mov eax, dword ptr gs:[ebp + 0x20]
    X86_AT(c, 0x4b99u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x20u)));
    // 004b9d  add dword ptr gs:[ebp + 0x1cc], eax
    X86_AT(c, 0x4b9du);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 004ba4  dec dword ptr [esp]
    X86_AT(c, 0x4ba4u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 004ba7  jne 0x4b59
    X86_AT(c, 0x4ba7u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x4b59u); goto L_4b59; }
    X86_TICK(c, 12);
    // 004ba9  add esp, 4
    X86_AT(c, 0x4ba9u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 004bac  ret 
    X86_AT(c, 0x4bacu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x4b66u, "ran off the end of a function");
}
void f_00004b67(X86Cpu& c) {
    goto L_4b67;
L_4b59:
    X86_TICK(c, 9);
    // 004b59  push ebx
    X86_AT(c, 0x4b59u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 004b5a  call dword ptr gs:[ebp + 0x2f4]
    X86_AT(c, 0x4b5au);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2F4u))); push32(c, 0x4b61u); x86_call(c, t); X86_RET(c, 0x4b61u); }
    X86_TICK(c, 7);
    // 004b61  test eax, eax
    X86_AT(c, 0x4b61u);
    (void)x86_logic(c, c.r[0] & c.r[0], 4);
    // 004b63  je 0x4b96
    X86_AT(c, 0x4b63u);
    if (x86_cc(c, 4)) { goto L_4b96; }
    X86_TICK(c, 4);
    // 004b65  push esi
    X86_AT(c, 0x4b65u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 004b66  push eax
    X86_AT(c, 0x4b66u);
    { uint32_t v = c.r[0]; push32(c, v); }
L_4b67:
    X86_TICK(c, 18);
    // 004b67  mov cl, byte ptr gs:[ebp + 0x22b]
    X86_AT(c, 0x4b67u);
    s8(c, 1, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x22Bu))));
    // 004b6e  shr eax, cl
    X86_AT(c, 0x4b6eu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 004b70  push ebx
    X86_AT(c, 0x4b70u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 004b71  push edx
    X86_AT(c, 0x4b71u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 004b72  call dword ptr gs:[ebp + 0x31c]
    X86_AT(c, 0x4b72u);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x31Cu))); push32(c, 0x4b79u); x86_call(c, t); X86_RET(c, 0x4b79u); }
    X86_TICK(c, 32);
    // 004b79  pop edx
    X86_AT(c, 0x4b79u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 004b7a  pop ebx
    X86_AT(c, 0x4b7au);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 004b7b  pop edi
    X86_AT(c, 0x4b7bu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 004b7c  sub eax, eax
    X86_AT(c, 0x4b7cu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 004b7e  mov cl, byte ptr gs:[ebp + 0x22b]
    X86_AT(c, 0x4b7eu);
    s8(c, 1, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x22Bu))));
    // 004b85  shrd eax, edi, cl
    X86_AT(c, 0x4b85u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, false, v, c.r[7], g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 004b88  add bx, 0x20
    X86_AT(c, 0x4b88u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, 0x20u, 0, 2)); }
    // 004b8c  push edx
    X86_AT(c, 0x4b8cu);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 004b8d  call dword ptr gs:[ebp + 0x31c]
    X86_AT(c, 0x4b8du);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x31Cu))); push32(c, 0x4b94u); x86_call(c, t); X86_RET(c, 0x4b94u); }
    X86_TICK(c, 8);
    // 004b94  pop edx
    X86_AT(c, 0x4b94u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 004b95  pop esi
    X86_AT(c, 0x4b95u);
    { uint32_t v = pop32(c); c.r[6] = v; }
L_4b96:
    X86_TICK(c, 28);
    // 004b96  pop ebx
    X86_AT(c, 0x4b96u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 004b97  inc dx
    X86_AT(c, 0x4b97u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_inc(c, v, 2)); }
    // 004b99  mov eax, dword ptr gs:[ebp + 0x20]
    X86_AT(c, 0x4b99u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x20u)));
    // 004b9d  add dword ptr gs:[ebp + 0x1cc], eax
    X86_AT(c, 0x4b9du);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 004ba4  dec dword ptr [esp]
    X86_AT(c, 0x4ba4u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 004ba7  jne 0x4b59
    X86_AT(c, 0x4ba7u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x4b59u); goto L_4b59; }
    X86_TICK(c, 12);
    // 004ba9  add esp, 4
    X86_AT(c, 0x4ba9u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 004bac  ret 
    X86_AT(c, 0x4bacu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x4b67u, "ran off the end of a function");
}
void f_00004b6e(X86Cpu& c) {
    goto L_4b6e;
L_4b59:
    X86_TICK(c, 9);
    // 004b59  push ebx
    X86_AT(c, 0x4b59u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 004b5a  call dword ptr gs:[ebp + 0x2f4]
    X86_AT(c, 0x4b5au);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2F4u))); push32(c, 0x4b61u); x86_call(c, t); X86_RET(c, 0x4b61u); }
    X86_TICK(c, 7);
    // 004b61  test eax, eax
    X86_AT(c, 0x4b61u);
    (void)x86_logic(c, c.r[0] & c.r[0], 4);
    // 004b63  je 0x4b96
    X86_AT(c, 0x4b63u);
    if (x86_cc(c, 4)) { goto L_4b96; }
    X86_TICK(c, 8);
    // 004b65  push esi
    X86_AT(c, 0x4b65u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 004b66  push eax
    X86_AT(c, 0x4b66u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 004b67  mov cl, byte ptr gs:[ebp + 0x22b]
    X86_AT(c, 0x4b67u);
    s8(c, 1, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x22Bu))));
L_4b6e:
    X86_TICK(c, 14);
    // 004b6e  shr eax, cl
    X86_AT(c, 0x4b6eu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 004b70  push ebx
    X86_AT(c, 0x4b70u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 004b71  push edx
    X86_AT(c, 0x4b71u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 004b72  call dword ptr gs:[ebp + 0x31c]
    X86_AT(c, 0x4b72u);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x31Cu))); push32(c, 0x4b79u); x86_call(c, t); X86_RET(c, 0x4b79u); }
    X86_TICK(c, 32);
    // 004b79  pop edx
    X86_AT(c, 0x4b79u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 004b7a  pop ebx
    X86_AT(c, 0x4b7au);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 004b7b  pop edi
    X86_AT(c, 0x4b7bu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 004b7c  sub eax, eax
    X86_AT(c, 0x4b7cu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 004b7e  mov cl, byte ptr gs:[ebp + 0x22b]
    X86_AT(c, 0x4b7eu);
    s8(c, 1, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x22Bu))));
    // 004b85  shrd eax, edi, cl
    X86_AT(c, 0x4b85u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, false, v, c.r[7], g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 004b88  add bx, 0x20
    X86_AT(c, 0x4b88u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, 0x20u, 0, 2)); }
    // 004b8c  push edx
    X86_AT(c, 0x4b8cu);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 004b8d  call dword ptr gs:[ebp + 0x31c]
    X86_AT(c, 0x4b8du);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x31Cu))); push32(c, 0x4b94u); x86_call(c, t); X86_RET(c, 0x4b94u); }
    X86_TICK(c, 8);
    // 004b94  pop edx
    X86_AT(c, 0x4b94u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 004b95  pop esi
    X86_AT(c, 0x4b95u);
    { uint32_t v = pop32(c); c.r[6] = v; }
L_4b96:
    X86_TICK(c, 28);
    // 004b96  pop ebx
    X86_AT(c, 0x4b96u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 004b97  inc dx
    X86_AT(c, 0x4b97u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_inc(c, v, 2)); }
    // 004b99  mov eax, dword ptr gs:[ebp + 0x20]
    X86_AT(c, 0x4b99u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x20u)));
    // 004b9d  add dword ptr gs:[ebp + 0x1cc], eax
    X86_AT(c, 0x4b9du);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 004ba4  dec dword ptr [esp]
    X86_AT(c, 0x4ba4u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 004ba7  jne 0x4b59
    X86_AT(c, 0x4ba7u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x4b59u); goto L_4b59; }
    X86_TICK(c, 12);
    // 004ba9  add esp, 4
    X86_AT(c, 0x4ba9u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 004bac  ret 
    X86_AT(c, 0x4bacu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x4b6eu, "ran off the end of a function");
}
void f_00004b70(X86Cpu& c) {
    goto L_4b70;
L_4b59:
    X86_TICK(c, 9);
    // 004b59  push ebx
    X86_AT(c, 0x4b59u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 004b5a  call dword ptr gs:[ebp + 0x2f4]
    X86_AT(c, 0x4b5au);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2F4u))); push32(c, 0x4b61u); x86_call(c, t); X86_RET(c, 0x4b61u); }
    X86_TICK(c, 7);
    // 004b61  test eax, eax
    X86_AT(c, 0x4b61u);
    (void)x86_logic(c, c.r[0] & c.r[0], 4);
    // 004b63  je 0x4b96
    X86_AT(c, 0x4b63u);
    if (x86_cc(c, 4)) { goto L_4b96; }
    X86_TICK(c, 11);
    // 004b65  push esi
    X86_AT(c, 0x4b65u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 004b66  push eax
    X86_AT(c, 0x4b66u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 004b67  mov cl, byte ptr gs:[ebp + 0x22b]
    X86_AT(c, 0x4b67u);
    s8(c, 1, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x22Bu))));
    // 004b6e  shr eax, cl
    X86_AT(c, 0x4b6eu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, g8(c, 1), 4, w); if (w) c.r[0] = r; }
L_4b70:
    X86_TICK(c, 11);
    // 004b70  push ebx
    X86_AT(c, 0x4b70u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 004b71  push edx
    X86_AT(c, 0x4b71u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 004b72  call dword ptr gs:[ebp + 0x31c]
    X86_AT(c, 0x4b72u);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x31Cu))); push32(c, 0x4b79u); x86_call(c, t); X86_RET(c, 0x4b79u); }
    X86_TICK(c, 32);
    // 004b79  pop edx
    X86_AT(c, 0x4b79u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 004b7a  pop ebx
    X86_AT(c, 0x4b7au);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 004b7b  pop edi
    X86_AT(c, 0x4b7bu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 004b7c  sub eax, eax
    X86_AT(c, 0x4b7cu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 004b7e  mov cl, byte ptr gs:[ebp + 0x22b]
    X86_AT(c, 0x4b7eu);
    s8(c, 1, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x22Bu))));
    // 004b85  shrd eax, edi, cl
    X86_AT(c, 0x4b85u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, false, v, c.r[7], g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 004b88  add bx, 0x20
    X86_AT(c, 0x4b88u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, 0x20u, 0, 2)); }
    // 004b8c  push edx
    X86_AT(c, 0x4b8cu);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 004b8d  call dword ptr gs:[ebp + 0x31c]
    X86_AT(c, 0x4b8du);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x31Cu))); push32(c, 0x4b94u); x86_call(c, t); X86_RET(c, 0x4b94u); }
    X86_TICK(c, 8);
    // 004b94  pop edx
    X86_AT(c, 0x4b94u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 004b95  pop esi
    X86_AT(c, 0x4b95u);
    { uint32_t v = pop32(c); c.r[6] = v; }
L_4b96:
    X86_TICK(c, 28);
    // 004b96  pop ebx
    X86_AT(c, 0x4b96u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 004b97  inc dx
    X86_AT(c, 0x4b97u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_inc(c, v, 2)); }
    // 004b99  mov eax, dword ptr gs:[ebp + 0x20]
    X86_AT(c, 0x4b99u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x20u)));
    // 004b9d  add dword ptr gs:[ebp + 0x1cc], eax
    X86_AT(c, 0x4b9du);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 004ba4  dec dword ptr [esp]
    X86_AT(c, 0x4ba4u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 004ba7  jne 0x4b59
    X86_AT(c, 0x4ba7u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x4b59u); goto L_4b59; }
    X86_TICK(c, 12);
    // 004ba9  add esp, 4
    X86_AT(c, 0x4ba9u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 004bac  ret 
    X86_AT(c, 0x4bacu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x4b70u, "ran off the end of a function");
}
void f_00004b71(X86Cpu& c) {
    goto L_4b71;
L_4b59:
    X86_TICK(c, 9);
    // 004b59  push ebx
    X86_AT(c, 0x4b59u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 004b5a  call dword ptr gs:[ebp + 0x2f4]
    X86_AT(c, 0x4b5au);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2F4u))); push32(c, 0x4b61u); x86_call(c, t); X86_RET(c, 0x4b61u); }
    X86_TICK(c, 7);
    // 004b61  test eax, eax
    X86_AT(c, 0x4b61u);
    (void)x86_logic(c, c.r[0] & c.r[0], 4);
    // 004b63  je 0x4b96
    X86_AT(c, 0x4b63u);
    if (x86_cc(c, 4)) { goto L_4b96; }
    X86_TICK(c, 13);
    // 004b65  push esi
    X86_AT(c, 0x4b65u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 004b66  push eax
    X86_AT(c, 0x4b66u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 004b67  mov cl, byte ptr gs:[ebp + 0x22b]
    X86_AT(c, 0x4b67u);
    s8(c, 1, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x22Bu))));
    // 004b6e  shr eax, cl
    X86_AT(c, 0x4b6eu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 004b70  push ebx
    X86_AT(c, 0x4b70u);
    { uint32_t v = c.r[3]; push32(c, v); }
L_4b71:
    X86_TICK(c, 9);
    // 004b71  push edx
    X86_AT(c, 0x4b71u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 004b72  call dword ptr gs:[ebp + 0x31c]
    X86_AT(c, 0x4b72u);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x31Cu))); push32(c, 0x4b79u); x86_call(c, t); X86_RET(c, 0x4b79u); }
    X86_TICK(c, 32);
    // 004b79  pop edx
    X86_AT(c, 0x4b79u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 004b7a  pop ebx
    X86_AT(c, 0x4b7au);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 004b7b  pop edi
    X86_AT(c, 0x4b7bu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 004b7c  sub eax, eax
    X86_AT(c, 0x4b7cu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 004b7e  mov cl, byte ptr gs:[ebp + 0x22b]
    X86_AT(c, 0x4b7eu);
    s8(c, 1, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x22Bu))));
    // 004b85  shrd eax, edi, cl
    X86_AT(c, 0x4b85u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, false, v, c.r[7], g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 004b88  add bx, 0x20
    X86_AT(c, 0x4b88u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, 0x20u, 0, 2)); }
    // 004b8c  push edx
    X86_AT(c, 0x4b8cu);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 004b8d  call dword ptr gs:[ebp + 0x31c]
    X86_AT(c, 0x4b8du);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x31Cu))); push32(c, 0x4b94u); x86_call(c, t); X86_RET(c, 0x4b94u); }
    X86_TICK(c, 8);
    // 004b94  pop edx
    X86_AT(c, 0x4b94u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 004b95  pop esi
    X86_AT(c, 0x4b95u);
    { uint32_t v = pop32(c); c.r[6] = v; }
L_4b96:
    X86_TICK(c, 28);
    // 004b96  pop ebx
    X86_AT(c, 0x4b96u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 004b97  inc dx
    X86_AT(c, 0x4b97u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_inc(c, v, 2)); }
    // 004b99  mov eax, dword ptr gs:[ebp + 0x20]
    X86_AT(c, 0x4b99u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x20u)));
    // 004b9d  add dword ptr gs:[ebp + 0x1cc], eax
    X86_AT(c, 0x4b9du);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 004ba4  dec dword ptr [esp]
    X86_AT(c, 0x4ba4u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 004ba7  jne 0x4b59
    X86_AT(c, 0x4ba7u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x4b59u); goto L_4b59; }
    X86_TICK(c, 12);
    // 004ba9  add esp, 4
    X86_AT(c, 0x4ba9u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 004bac  ret 
    X86_AT(c, 0x4bacu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x4b71u, "ran off the end of a function");
}
void f_00004b72(X86Cpu& c) {
    goto L_4b72;
L_4b59:
    X86_TICK(c, 9);
    // 004b59  push ebx
    X86_AT(c, 0x4b59u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 004b5a  call dword ptr gs:[ebp + 0x2f4]
    X86_AT(c, 0x4b5au);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2F4u))); push32(c, 0x4b61u); x86_call(c, t); X86_RET(c, 0x4b61u); }
    X86_TICK(c, 7);
    // 004b61  test eax, eax
    X86_AT(c, 0x4b61u);
    (void)x86_logic(c, c.r[0] & c.r[0], 4);
    // 004b63  je 0x4b96
    X86_AT(c, 0x4b63u);
    if (x86_cc(c, 4)) { goto L_4b96; }
    X86_TICK(c, 15);
    // 004b65  push esi
    X86_AT(c, 0x4b65u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 004b66  push eax
    X86_AT(c, 0x4b66u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 004b67  mov cl, byte ptr gs:[ebp + 0x22b]
    X86_AT(c, 0x4b67u);
    s8(c, 1, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x22Bu))));
    // 004b6e  shr eax, cl
    X86_AT(c, 0x4b6eu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 004b70  push ebx
    X86_AT(c, 0x4b70u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 004b71  push edx
    X86_AT(c, 0x4b71u);
    { uint32_t v = c.r[2]; push32(c, v); }
L_4b72:
    X86_TICK(c, 7);
    // 004b72  call dword ptr gs:[ebp + 0x31c]
    X86_AT(c, 0x4b72u);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x31Cu))); push32(c, 0x4b79u); x86_call(c, t); X86_RET(c, 0x4b79u); }
    X86_TICK(c, 32);
    // 004b79  pop edx
    X86_AT(c, 0x4b79u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 004b7a  pop ebx
    X86_AT(c, 0x4b7au);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 004b7b  pop edi
    X86_AT(c, 0x4b7bu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 004b7c  sub eax, eax
    X86_AT(c, 0x4b7cu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 004b7e  mov cl, byte ptr gs:[ebp + 0x22b]
    X86_AT(c, 0x4b7eu);
    s8(c, 1, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x22Bu))));
    // 004b85  shrd eax, edi, cl
    X86_AT(c, 0x4b85u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, false, v, c.r[7], g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 004b88  add bx, 0x20
    X86_AT(c, 0x4b88u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, 0x20u, 0, 2)); }
    // 004b8c  push edx
    X86_AT(c, 0x4b8cu);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 004b8d  call dword ptr gs:[ebp + 0x31c]
    X86_AT(c, 0x4b8du);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x31Cu))); push32(c, 0x4b94u); x86_call(c, t); X86_RET(c, 0x4b94u); }
    X86_TICK(c, 8);
    // 004b94  pop edx
    X86_AT(c, 0x4b94u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 004b95  pop esi
    X86_AT(c, 0x4b95u);
    { uint32_t v = pop32(c); c.r[6] = v; }
L_4b96:
    X86_TICK(c, 28);
    // 004b96  pop ebx
    X86_AT(c, 0x4b96u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 004b97  inc dx
    X86_AT(c, 0x4b97u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_inc(c, v, 2)); }
    // 004b99  mov eax, dword ptr gs:[ebp + 0x20]
    X86_AT(c, 0x4b99u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x20u)));
    // 004b9d  add dword ptr gs:[ebp + 0x1cc], eax
    X86_AT(c, 0x4b9du);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 004ba4  dec dword ptr [esp]
    X86_AT(c, 0x4ba4u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 004ba7  jne 0x4b59
    X86_AT(c, 0x4ba7u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x4b59u); goto L_4b59; }
    X86_TICK(c, 12);
    // 004ba9  add esp, 4
    X86_AT(c, 0x4ba9u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 004bac  ret 
    X86_AT(c, 0x4bacu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x4b72u, "ran off the end of a function");
}
void f_00004b79(X86Cpu& c) {
    goto L_4b79;
L_4b59:
    X86_TICK(c, 9);
    // 004b59  push ebx
    X86_AT(c, 0x4b59u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 004b5a  call dword ptr gs:[ebp + 0x2f4]
    X86_AT(c, 0x4b5au);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2F4u))); push32(c, 0x4b61u); x86_call(c, t); X86_RET(c, 0x4b61u); }
    X86_TICK(c, 7);
    // 004b61  test eax, eax
    X86_AT(c, 0x4b61u);
    (void)x86_logic(c, c.r[0] & c.r[0], 4);
    // 004b63  je 0x4b96
    X86_AT(c, 0x4b63u);
    if (x86_cc(c, 4)) { goto L_4b96; }
    X86_TICK(c, 22);
    // 004b65  push esi
    X86_AT(c, 0x4b65u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 004b66  push eax
    X86_AT(c, 0x4b66u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 004b67  mov cl, byte ptr gs:[ebp + 0x22b]
    X86_AT(c, 0x4b67u);
    s8(c, 1, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x22Bu))));
    // 004b6e  shr eax, cl
    X86_AT(c, 0x4b6eu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 004b70  push ebx
    X86_AT(c, 0x4b70u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 004b71  push edx
    X86_AT(c, 0x4b71u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 004b72  call dword ptr gs:[ebp + 0x31c]
    X86_AT(c, 0x4b72u);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x31Cu))); push32(c, 0x4b79u); x86_call(c, t); X86_RET(c, 0x4b79u); }
L_4b79:
    X86_TICK(c, 32);
    // 004b79  pop edx
    X86_AT(c, 0x4b79u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 004b7a  pop ebx
    X86_AT(c, 0x4b7au);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 004b7b  pop edi
    X86_AT(c, 0x4b7bu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 004b7c  sub eax, eax
    X86_AT(c, 0x4b7cu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 004b7e  mov cl, byte ptr gs:[ebp + 0x22b]
    X86_AT(c, 0x4b7eu);
    s8(c, 1, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x22Bu))));
    // 004b85  shrd eax, edi, cl
    X86_AT(c, 0x4b85u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, false, v, c.r[7], g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 004b88  add bx, 0x20
    X86_AT(c, 0x4b88u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, 0x20u, 0, 2)); }
    // 004b8c  push edx
    X86_AT(c, 0x4b8cu);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 004b8d  call dword ptr gs:[ebp + 0x31c]
    X86_AT(c, 0x4b8du);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x31Cu))); push32(c, 0x4b94u); x86_call(c, t); X86_RET(c, 0x4b94u); }
    X86_TICK(c, 8);
    // 004b94  pop edx
    X86_AT(c, 0x4b94u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 004b95  pop esi
    X86_AT(c, 0x4b95u);
    { uint32_t v = pop32(c); c.r[6] = v; }
L_4b96:
    X86_TICK(c, 28);
    // 004b96  pop ebx
    X86_AT(c, 0x4b96u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 004b97  inc dx
    X86_AT(c, 0x4b97u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_inc(c, v, 2)); }
    // 004b99  mov eax, dword ptr gs:[ebp + 0x20]
    X86_AT(c, 0x4b99u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x20u)));
    // 004b9d  add dword ptr gs:[ebp + 0x1cc], eax
    X86_AT(c, 0x4b9du);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 004ba4  dec dword ptr [esp]
    X86_AT(c, 0x4ba4u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 004ba7  jne 0x4b59
    X86_AT(c, 0x4ba7u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x4b59u); goto L_4b59; }
    X86_TICK(c, 12);
    // 004ba9  add esp, 4
    X86_AT(c, 0x4ba9u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 004bac  ret 
    X86_AT(c, 0x4bacu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x4b79u, "ran off the end of a function");
}
void f_00004b7a(X86Cpu& c) {
    goto L_4b7a;
L_4b59:
    X86_TICK(c, 9);
    // 004b59  push ebx
    X86_AT(c, 0x4b59u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 004b5a  call dword ptr gs:[ebp + 0x2f4]
    X86_AT(c, 0x4b5au);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2F4u))); push32(c, 0x4b61u); x86_call(c, t); X86_RET(c, 0x4b61u); }
    X86_TICK(c, 7);
    // 004b61  test eax, eax
    X86_AT(c, 0x4b61u);
    (void)x86_logic(c, c.r[0] & c.r[0], 4);
    // 004b63  je 0x4b96
    X86_AT(c, 0x4b63u);
    if (x86_cc(c, 4)) { goto L_4b96; }
    X86_TICK(c, 22);
    // 004b65  push esi
    X86_AT(c, 0x4b65u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 004b66  push eax
    X86_AT(c, 0x4b66u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 004b67  mov cl, byte ptr gs:[ebp + 0x22b]
    X86_AT(c, 0x4b67u);
    s8(c, 1, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x22Bu))));
    // 004b6e  shr eax, cl
    X86_AT(c, 0x4b6eu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 004b70  push ebx
    X86_AT(c, 0x4b70u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 004b71  push edx
    X86_AT(c, 0x4b71u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 004b72  call dword ptr gs:[ebp + 0x31c]
    X86_AT(c, 0x4b72u);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x31Cu))); push32(c, 0x4b79u); x86_call(c, t); X86_RET(c, 0x4b79u); }
    X86_TICK(c, 4);
    // 004b79  pop edx
    X86_AT(c, 0x4b79u);
    { uint32_t v = pop32(c); c.r[2] = v; }
L_4b7a:
    X86_TICK(c, 28);
    // 004b7a  pop ebx
    X86_AT(c, 0x4b7au);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 004b7b  pop edi
    X86_AT(c, 0x4b7bu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 004b7c  sub eax, eax
    X86_AT(c, 0x4b7cu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 004b7e  mov cl, byte ptr gs:[ebp + 0x22b]
    X86_AT(c, 0x4b7eu);
    s8(c, 1, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x22Bu))));
    // 004b85  shrd eax, edi, cl
    X86_AT(c, 0x4b85u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, false, v, c.r[7], g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 004b88  add bx, 0x20
    X86_AT(c, 0x4b88u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, 0x20u, 0, 2)); }
    // 004b8c  push edx
    X86_AT(c, 0x4b8cu);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 004b8d  call dword ptr gs:[ebp + 0x31c]
    X86_AT(c, 0x4b8du);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x31Cu))); push32(c, 0x4b94u); x86_call(c, t); X86_RET(c, 0x4b94u); }
    X86_TICK(c, 8);
    // 004b94  pop edx
    X86_AT(c, 0x4b94u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 004b95  pop esi
    X86_AT(c, 0x4b95u);
    { uint32_t v = pop32(c); c.r[6] = v; }
L_4b96:
    X86_TICK(c, 28);
    // 004b96  pop ebx
    X86_AT(c, 0x4b96u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 004b97  inc dx
    X86_AT(c, 0x4b97u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_inc(c, v, 2)); }
    // 004b99  mov eax, dword ptr gs:[ebp + 0x20]
    X86_AT(c, 0x4b99u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x20u)));
    // 004b9d  add dword ptr gs:[ebp + 0x1cc], eax
    X86_AT(c, 0x4b9du);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 004ba4  dec dword ptr [esp]
    X86_AT(c, 0x4ba4u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 004ba7  jne 0x4b59
    X86_AT(c, 0x4ba7u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x4b59u); goto L_4b59; }
    X86_TICK(c, 12);
    // 004ba9  add esp, 4
    X86_AT(c, 0x4ba9u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 004bac  ret 
    X86_AT(c, 0x4bacu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x4b7au, "ran off the end of a function");
}
void f_00004b7b(X86Cpu& c) {
    goto L_4b7b;
L_4b59:
    X86_TICK(c, 9);
    // 004b59  push ebx
    X86_AT(c, 0x4b59u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 004b5a  call dword ptr gs:[ebp + 0x2f4]
    X86_AT(c, 0x4b5au);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2F4u))); push32(c, 0x4b61u); x86_call(c, t); X86_RET(c, 0x4b61u); }
    X86_TICK(c, 7);
    // 004b61  test eax, eax
    X86_AT(c, 0x4b61u);
    (void)x86_logic(c, c.r[0] & c.r[0], 4);
    // 004b63  je 0x4b96
    X86_AT(c, 0x4b63u);
    if (x86_cc(c, 4)) { goto L_4b96; }
    X86_TICK(c, 22);
    // 004b65  push esi
    X86_AT(c, 0x4b65u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 004b66  push eax
    X86_AT(c, 0x4b66u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 004b67  mov cl, byte ptr gs:[ebp + 0x22b]
    X86_AT(c, 0x4b67u);
    s8(c, 1, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x22Bu))));
    // 004b6e  shr eax, cl
    X86_AT(c, 0x4b6eu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 004b70  push ebx
    X86_AT(c, 0x4b70u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 004b71  push edx
    X86_AT(c, 0x4b71u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 004b72  call dword ptr gs:[ebp + 0x31c]
    X86_AT(c, 0x4b72u);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x31Cu))); push32(c, 0x4b79u); x86_call(c, t); X86_RET(c, 0x4b79u); }
    X86_TICK(c, 8);
    // 004b79  pop edx
    X86_AT(c, 0x4b79u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 004b7a  pop ebx
    X86_AT(c, 0x4b7au);
    { uint32_t v = pop32(c); c.r[3] = v; }
L_4b7b:
    X86_TICK(c, 24);
    // 004b7b  pop edi
    X86_AT(c, 0x4b7bu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 004b7c  sub eax, eax
    X86_AT(c, 0x4b7cu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 004b7e  mov cl, byte ptr gs:[ebp + 0x22b]
    X86_AT(c, 0x4b7eu);
    s8(c, 1, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x22Bu))));
    // 004b85  shrd eax, edi, cl
    X86_AT(c, 0x4b85u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, false, v, c.r[7], g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 004b88  add bx, 0x20
    X86_AT(c, 0x4b88u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, 0x20u, 0, 2)); }
    // 004b8c  push edx
    X86_AT(c, 0x4b8cu);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 004b8d  call dword ptr gs:[ebp + 0x31c]
    X86_AT(c, 0x4b8du);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x31Cu))); push32(c, 0x4b94u); x86_call(c, t); X86_RET(c, 0x4b94u); }
    X86_TICK(c, 8);
    // 004b94  pop edx
    X86_AT(c, 0x4b94u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 004b95  pop esi
    X86_AT(c, 0x4b95u);
    { uint32_t v = pop32(c); c.r[6] = v; }
L_4b96:
    X86_TICK(c, 28);
    // 004b96  pop ebx
    X86_AT(c, 0x4b96u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 004b97  inc dx
    X86_AT(c, 0x4b97u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_inc(c, v, 2)); }
    // 004b99  mov eax, dword ptr gs:[ebp + 0x20]
    X86_AT(c, 0x4b99u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x20u)));
    // 004b9d  add dword ptr gs:[ebp + 0x1cc], eax
    X86_AT(c, 0x4b9du);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 004ba4  dec dword ptr [esp]
    X86_AT(c, 0x4ba4u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 004ba7  jne 0x4b59
    X86_AT(c, 0x4ba7u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x4b59u); goto L_4b59; }
    X86_TICK(c, 12);
    // 004ba9  add esp, 4
    X86_AT(c, 0x4ba9u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 004bac  ret 
    X86_AT(c, 0x4bacu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x4b7bu, "ran off the end of a function");
}
void f_00004b7c(X86Cpu& c) {
    goto L_4b7c;
L_4b59:
    X86_TICK(c, 9);
    // 004b59  push ebx
    X86_AT(c, 0x4b59u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 004b5a  call dword ptr gs:[ebp + 0x2f4]
    X86_AT(c, 0x4b5au);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2F4u))); push32(c, 0x4b61u); x86_call(c, t); X86_RET(c, 0x4b61u); }
    X86_TICK(c, 7);
    // 004b61  test eax, eax
    X86_AT(c, 0x4b61u);
    (void)x86_logic(c, c.r[0] & c.r[0], 4);
    // 004b63  je 0x4b96
    X86_AT(c, 0x4b63u);
    if (x86_cc(c, 4)) { goto L_4b96; }
    X86_TICK(c, 22);
    // 004b65  push esi
    X86_AT(c, 0x4b65u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 004b66  push eax
    X86_AT(c, 0x4b66u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 004b67  mov cl, byte ptr gs:[ebp + 0x22b]
    X86_AT(c, 0x4b67u);
    s8(c, 1, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x22Bu))));
    // 004b6e  shr eax, cl
    X86_AT(c, 0x4b6eu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 004b70  push ebx
    X86_AT(c, 0x4b70u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 004b71  push edx
    X86_AT(c, 0x4b71u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 004b72  call dword ptr gs:[ebp + 0x31c]
    X86_AT(c, 0x4b72u);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x31Cu))); push32(c, 0x4b79u); x86_call(c, t); X86_RET(c, 0x4b79u); }
    X86_TICK(c, 12);
    // 004b79  pop edx
    X86_AT(c, 0x4b79u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 004b7a  pop ebx
    X86_AT(c, 0x4b7au);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 004b7b  pop edi
    X86_AT(c, 0x4b7bu);
    { uint32_t v = pop32(c); c.r[7] = v; }
L_4b7c:
    X86_TICK(c, 20);
    // 004b7c  sub eax, eax
    X86_AT(c, 0x4b7cu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 004b7e  mov cl, byte ptr gs:[ebp + 0x22b]
    X86_AT(c, 0x4b7eu);
    s8(c, 1, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x22Bu))));
    // 004b85  shrd eax, edi, cl
    X86_AT(c, 0x4b85u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, false, v, c.r[7], g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 004b88  add bx, 0x20
    X86_AT(c, 0x4b88u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, 0x20u, 0, 2)); }
    // 004b8c  push edx
    X86_AT(c, 0x4b8cu);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 004b8d  call dword ptr gs:[ebp + 0x31c]
    X86_AT(c, 0x4b8du);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x31Cu))); push32(c, 0x4b94u); x86_call(c, t); X86_RET(c, 0x4b94u); }
    X86_TICK(c, 8);
    // 004b94  pop edx
    X86_AT(c, 0x4b94u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 004b95  pop esi
    X86_AT(c, 0x4b95u);
    { uint32_t v = pop32(c); c.r[6] = v; }
L_4b96:
    X86_TICK(c, 28);
    // 004b96  pop ebx
    X86_AT(c, 0x4b96u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 004b97  inc dx
    X86_AT(c, 0x4b97u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_inc(c, v, 2)); }
    // 004b99  mov eax, dword ptr gs:[ebp + 0x20]
    X86_AT(c, 0x4b99u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x20u)));
    // 004b9d  add dword ptr gs:[ebp + 0x1cc], eax
    X86_AT(c, 0x4b9du);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 004ba4  dec dword ptr [esp]
    X86_AT(c, 0x4ba4u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 004ba7  jne 0x4b59
    X86_AT(c, 0x4ba7u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x4b59u); goto L_4b59; }
    X86_TICK(c, 12);
    // 004ba9  add esp, 4
    X86_AT(c, 0x4ba9u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 004bac  ret 
    X86_AT(c, 0x4bacu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x4b7cu, "ran off the end of a function");
}
void f_00004b7e(X86Cpu& c) {
    goto L_4b7e;
L_4b59:
    X86_TICK(c, 9);
    // 004b59  push ebx
    X86_AT(c, 0x4b59u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 004b5a  call dword ptr gs:[ebp + 0x2f4]
    X86_AT(c, 0x4b5au);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2F4u))); push32(c, 0x4b61u); x86_call(c, t); X86_RET(c, 0x4b61u); }
    X86_TICK(c, 7);
    // 004b61  test eax, eax
    X86_AT(c, 0x4b61u);
    (void)x86_logic(c, c.r[0] & c.r[0], 4);
    // 004b63  je 0x4b96
    X86_AT(c, 0x4b63u);
    if (x86_cc(c, 4)) { goto L_4b96; }
    X86_TICK(c, 22);
    // 004b65  push esi
    X86_AT(c, 0x4b65u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 004b66  push eax
    X86_AT(c, 0x4b66u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 004b67  mov cl, byte ptr gs:[ebp + 0x22b]
    X86_AT(c, 0x4b67u);
    s8(c, 1, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x22Bu))));
    // 004b6e  shr eax, cl
    X86_AT(c, 0x4b6eu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 004b70  push ebx
    X86_AT(c, 0x4b70u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 004b71  push edx
    X86_AT(c, 0x4b71u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 004b72  call dword ptr gs:[ebp + 0x31c]
    X86_AT(c, 0x4b72u);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x31Cu))); push32(c, 0x4b79u); x86_call(c, t); X86_RET(c, 0x4b79u); }
    X86_TICK(c, 14);
    // 004b79  pop edx
    X86_AT(c, 0x4b79u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 004b7a  pop ebx
    X86_AT(c, 0x4b7au);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 004b7b  pop edi
    X86_AT(c, 0x4b7bu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 004b7c  sub eax, eax
    X86_AT(c, 0x4b7cu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
L_4b7e:
    X86_TICK(c, 18);
    // 004b7e  mov cl, byte ptr gs:[ebp + 0x22b]
    X86_AT(c, 0x4b7eu);
    s8(c, 1, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x22Bu))));
    // 004b85  shrd eax, edi, cl
    X86_AT(c, 0x4b85u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, false, v, c.r[7], g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 004b88  add bx, 0x20
    X86_AT(c, 0x4b88u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, 0x20u, 0, 2)); }
    // 004b8c  push edx
    X86_AT(c, 0x4b8cu);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 004b8d  call dword ptr gs:[ebp + 0x31c]
    X86_AT(c, 0x4b8du);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x31Cu))); push32(c, 0x4b94u); x86_call(c, t); X86_RET(c, 0x4b94u); }
    X86_TICK(c, 8);
    // 004b94  pop edx
    X86_AT(c, 0x4b94u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 004b95  pop esi
    X86_AT(c, 0x4b95u);
    { uint32_t v = pop32(c); c.r[6] = v; }
L_4b96:
    X86_TICK(c, 28);
    // 004b96  pop ebx
    X86_AT(c, 0x4b96u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 004b97  inc dx
    X86_AT(c, 0x4b97u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_inc(c, v, 2)); }
    // 004b99  mov eax, dword ptr gs:[ebp + 0x20]
    X86_AT(c, 0x4b99u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x20u)));
    // 004b9d  add dword ptr gs:[ebp + 0x1cc], eax
    X86_AT(c, 0x4b9du);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 004ba4  dec dword ptr [esp]
    X86_AT(c, 0x4ba4u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 004ba7  jne 0x4b59
    X86_AT(c, 0x4ba7u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x4b59u); goto L_4b59; }
    X86_TICK(c, 12);
    // 004ba9  add esp, 4
    X86_AT(c, 0x4ba9u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 004bac  ret 
    X86_AT(c, 0x4bacu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x4b7eu, "ran off the end of a function");
}
void f_00004b85(X86Cpu& c) {
    goto L_4b85;
L_4b59:
    X86_TICK(c, 9);
    // 004b59  push ebx
    X86_AT(c, 0x4b59u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 004b5a  call dword ptr gs:[ebp + 0x2f4]
    X86_AT(c, 0x4b5au);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2F4u))); push32(c, 0x4b61u); x86_call(c, t); X86_RET(c, 0x4b61u); }
    X86_TICK(c, 7);
    // 004b61  test eax, eax
    X86_AT(c, 0x4b61u);
    (void)x86_logic(c, c.r[0] & c.r[0], 4);
    // 004b63  je 0x4b96
    X86_AT(c, 0x4b63u);
    if (x86_cc(c, 4)) { goto L_4b96; }
    X86_TICK(c, 22);
    // 004b65  push esi
    X86_AT(c, 0x4b65u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 004b66  push eax
    X86_AT(c, 0x4b66u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 004b67  mov cl, byte ptr gs:[ebp + 0x22b]
    X86_AT(c, 0x4b67u);
    s8(c, 1, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x22Bu))));
    // 004b6e  shr eax, cl
    X86_AT(c, 0x4b6eu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 004b70  push ebx
    X86_AT(c, 0x4b70u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 004b71  push edx
    X86_AT(c, 0x4b71u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 004b72  call dword ptr gs:[ebp + 0x31c]
    X86_AT(c, 0x4b72u);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x31Cu))); push32(c, 0x4b79u); x86_call(c, t); X86_RET(c, 0x4b79u); }
    X86_TICK(c, 18);
    // 004b79  pop edx
    X86_AT(c, 0x4b79u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 004b7a  pop ebx
    X86_AT(c, 0x4b7au);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 004b7b  pop edi
    X86_AT(c, 0x4b7bu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 004b7c  sub eax, eax
    X86_AT(c, 0x4b7cu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 004b7e  mov cl, byte ptr gs:[ebp + 0x22b]
    X86_AT(c, 0x4b7eu);
    s8(c, 1, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x22Bu))));
L_4b85:
    X86_TICK(c, 14);
    // 004b85  shrd eax, edi, cl
    X86_AT(c, 0x4b85u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, false, v, c.r[7], g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 004b88  add bx, 0x20
    X86_AT(c, 0x4b88u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, 0x20u, 0, 2)); }
    // 004b8c  push edx
    X86_AT(c, 0x4b8cu);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 004b8d  call dword ptr gs:[ebp + 0x31c]
    X86_AT(c, 0x4b8du);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x31Cu))); push32(c, 0x4b94u); x86_call(c, t); X86_RET(c, 0x4b94u); }
    X86_TICK(c, 8);
    // 004b94  pop edx
    X86_AT(c, 0x4b94u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 004b95  pop esi
    X86_AT(c, 0x4b95u);
    { uint32_t v = pop32(c); c.r[6] = v; }
L_4b96:
    X86_TICK(c, 28);
    // 004b96  pop ebx
    X86_AT(c, 0x4b96u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 004b97  inc dx
    X86_AT(c, 0x4b97u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_inc(c, v, 2)); }
    // 004b99  mov eax, dword ptr gs:[ebp + 0x20]
    X86_AT(c, 0x4b99u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x20u)));
    // 004b9d  add dword ptr gs:[ebp + 0x1cc], eax
    X86_AT(c, 0x4b9du);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 004ba4  dec dword ptr [esp]
    X86_AT(c, 0x4ba4u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 004ba7  jne 0x4b59
    X86_AT(c, 0x4ba7u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x4b59u); goto L_4b59; }
    X86_TICK(c, 12);
    // 004ba9  add esp, 4
    X86_AT(c, 0x4ba9u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 004bac  ret 
    X86_AT(c, 0x4bacu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x4b85u, "ran off the end of a function");
}
void f_00004b88(X86Cpu& c) {
    goto L_4b88;
L_4b59:
    X86_TICK(c, 9);
    // 004b59  push ebx
    X86_AT(c, 0x4b59u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 004b5a  call dword ptr gs:[ebp + 0x2f4]
    X86_AT(c, 0x4b5au);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2F4u))); push32(c, 0x4b61u); x86_call(c, t); X86_RET(c, 0x4b61u); }
    X86_TICK(c, 7);
    // 004b61  test eax, eax
    X86_AT(c, 0x4b61u);
    (void)x86_logic(c, c.r[0] & c.r[0], 4);
    // 004b63  je 0x4b96
    X86_AT(c, 0x4b63u);
    if (x86_cc(c, 4)) { goto L_4b96; }
    X86_TICK(c, 22);
    // 004b65  push esi
    X86_AT(c, 0x4b65u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 004b66  push eax
    X86_AT(c, 0x4b66u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 004b67  mov cl, byte ptr gs:[ebp + 0x22b]
    X86_AT(c, 0x4b67u);
    s8(c, 1, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x22Bu))));
    // 004b6e  shr eax, cl
    X86_AT(c, 0x4b6eu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 004b70  push ebx
    X86_AT(c, 0x4b70u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 004b71  push edx
    X86_AT(c, 0x4b71u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 004b72  call dword ptr gs:[ebp + 0x31c]
    X86_AT(c, 0x4b72u);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x31Cu))); push32(c, 0x4b79u); x86_call(c, t); X86_RET(c, 0x4b79u); }
    X86_TICK(c, 21);
    // 004b79  pop edx
    X86_AT(c, 0x4b79u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 004b7a  pop ebx
    X86_AT(c, 0x4b7au);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 004b7b  pop edi
    X86_AT(c, 0x4b7bu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 004b7c  sub eax, eax
    X86_AT(c, 0x4b7cu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 004b7e  mov cl, byte ptr gs:[ebp + 0x22b]
    X86_AT(c, 0x4b7eu);
    s8(c, 1, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x22Bu))));
    // 004b85  shrd eax, edi, cl
    X86_AT(c, 0x4b85u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, false, v, c.r[7], g8(c, 1), 4, w); if (w) c.r[0] = r; }
L_4b88:
    X86_TICK(c, 11);
    // 004b88  add bx, 0x20
    X86_AT(c, 0x4b88u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, 0x20u, 0, 2)); }
    // 004b8c  push edx
    X86_AT(c, 0x4b8cu);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 004b8d  call dword ptr gs:[ebp + 0x31c]
    X86_AT(c, 0x4b8du);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x31Cu))); push32(c, 0x4b94u); x86_call(c, t); X86_RET(c, 0x4b94u); }
    X86_TICK(c, 8);
    // 004b94  pop edx
    X86_AT(c, 0x4b94u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 004b95  pop esi
    X86_AT(c, 0x4b95u);
    { uint32_t v = pop32(c); c.r[6] = v; }
L_4b96:
    X86_TICK(c, 28);
    // 004b96  pop ebx
    X86_AT(c, 0x4b96u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 004b97  inc dx
    X86_AT(c, 0x4b97u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_inc(c, v, 2)); }
    // 004b99  mov eax, dword ptr gs:[ebp + 0x20]
    X86_AT(c, 0x4b99u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x20u)));
    // 004b9d  add dword ptr gs:[ebp + 0x1cc], eax
    X86_AT(c, 0x4b9du);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 004ba4  dec dword ptr [esp]
    X86_AT(c, 0x4ba4u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 004ba7  jne 0x4b59
    X86_AT(c, 0x4ba7u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x4b59u); goto L_4b59; }
    X86_TICK(c, 12);
    // 004ba9  add esp, 4
    X86_AT(c, 0x4ba9u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 004bac  ret 
    X86_AT(c, 0x4bacu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x4b88u, "ran off the end of a function");
}
void f_00004b8c(X86Cpu& c) {
    goto L_4b8c;
L_4b59:
    X86_TICK(c, 9);
    // 004b59  push ebx
    X86_AT(c, 0x4b59u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 004b5a  call dword ptr gs:[ebp + 0x2f4]
    X86_AT(c, 0x4b5au);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2F4u))); push32(c, 0x4b61u); x86_call(c, t); X86_RET(c, 0x4b61u); }
    X86_TICK(c, 7);
    // 004b61  test eax, eax
    X86_AT(c, 0x4b61u);
    (void)x86_logic(c, c.r[0] & c.r[0], 4);
    // 004b63  je 0x4b96
    X86_AT(c, 0x4b63u);
    if (x86_cc(c, 4)) { goto L_4b96; }
    X86_TICK(c, 22);
    // 004b65  push esi
    X86_AT(c, 0x4b65u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 004b66  push eax
    X86_AT(c, 0x4b66u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 004b67  mov cl, byte ptr gs:[ebp + 0x22b]
    X86_AT(c, 0x4b67u);
    s8(c, 1, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x22Bu))));
    // 004b6e  shr eax, cl
    X86_AT(c, 0x4b6eu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 004b70  push ebx
    X86_AT(c, 0x4b70u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 004b71  push edx
    X86_AT(c, 0x4b71u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 004b72  call dword ptr gs:[ebp + 0x31c]
    X86_AT(c, 0x4b72u);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x31Cu))); push32(c, 0x4b79u); x86_call(c, t); X86_RET(c, 0x4b79u); }
    X86_TICK(c, 23);
    // 004b79  pop edx
    X86_AT(c, 0x4b79u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 004b7a  pop ebx
    X86_AT(c, 0x4b7au);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 004b7b  pop edi
    X86_AT(c, 0x4b7bu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 004b7c  sub eax, eax
    X86_AT(c, 0x4b7cu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 004b7e  mov cl, byte ptr gs:[ebp + 0x22b]
    X86_AT(c, 0x4b7eu);
    s8(c, 1, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x22Bu))));
    // 004b85  shrd eax, edi, cl
    X86_AT(c, 0x4b85u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, false, v, c.r[7], g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 004b88  add bx, 0x20
    X86_AT(c, 0x4b88u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, 0x20u, 0, 2)); }
L_4b8c:
    X86_TICK(c, 9);
    // 004b8c  push edx
    X86_AT(c, 0x4b8cu);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 004b8d  call dword ptr gs:[ebp + 0x31c]
    X86_AT(c, 0x4b8du);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x31Cu))); push32(c, 0x4b94u); x86_call(c, t); X86_RET(c, 0x4b94u); }
    X86_TICK(c, 8);
    // 004b94  pop edx
    X86_AT(c, 0x4b94u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 004b95  pop esi
    X86_AT(c, 0x4b95u);
    { uint32_t v = pop32(c); c.r[6] = v; }
L_4b96:
    X86_TICK(c, 28);
    // 004b96  pop ebx
    X86_AT(c, 0x4b96u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 004b97  inc dx
    X86_AT(c, 0x4b97u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_inc(c, v, 2)); }
    // 004b99  mov eax, dword ptr gs:[ebp + 0x20]
    X86_AT(c, 0x4b99u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x20u)));
    // 004b9d  add dword ptr gs:[ebp + 0x1cc], eax
    X86_AT(c, 0x4b9du);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 004ba4  dec dword ptr [esp]
    X86_AT(c, 0x4ba4u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 004ba7  jne 0x4b59
    X86_AT(c, 0x4ba7u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x4b59u); goto L_4b59; }
    X86_TICK(c, 12);
    // 004ba9  add esp, 4
    X86_AT(c, 0x4ba9u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 004bac  ret 
    X86_AT(c, 0x4bacu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x4b8cu, "ran off the end of a function");
}
void f_00004b8d(X86Cpu& c) {
    goto L_4b8d;
L_4b59:
    X86_TICK(c, 9);
    // 004b59  push ebx
    X86_AT(c, 0x4b59u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 004b5a  call dword ptr gs:[ebp + 0x2f4]
    X86_AT(c, 0x4b5au);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2F4u))); push32(c, 0x4b61u); x86_call(c, t); X86_RET(c, 0x4b61u); }
    X86_TICK(c, 7);
    // 004b61  test eax, eax
    X86_AT(c, 0x4b61u);
    (void)x86_logic(c, c.r[0] & c.r[0], 4);
    // 004b63  je 0x4b96
    X86_AT(c, 0x4b63u);
    if (x86_cc(c, 4)) { goto L_4b96; }
    X86_TICK(c, 22);
    // 004b65  push esi
    X86_AT(c, 0x4b65u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 004b66  push eax
    X86_AT(c, 0x4b66u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 004b67  mov cl, byte ptr gs:[ebp + 0x22b]
    X86_AT(c, 0x4b67u);
    s8(c, 1, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x22Bu))));
    // 004b6e  shr eax, cl
    X86_AT(c, 0x4b6eu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 004b70  push ebx
    X86_AT(c, 0x4b70u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 004b71  push edx
    X86_AT(c, 0x4b71u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 004b72  call dword ptr gs:[ebp + 0x31c]
    X86_AT(c, 0x4b72u);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x31Cu))); push32(c, 0x4b79u); x86_call(c, t); X86_RET(c, 0x4b79u); }
    X86_TICK(c, 25);
    // 004b79  pop edx
    X86_AT(c, 0x4b79u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 004b7a  pop ebx
    X86_AT(c, 0x4b7au);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 004b7b  pop edi
    X86_AT(c, 0x4b7bu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 004b7c  sub eax, eax
    X86_AT(c, 0x4b7cu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 004b7e  mov cl, byte ptr gs:[ebp + 0x22b]
    X86_AT(c, 0x4b7eu);
    s8(c, 1, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x22Bu))));
    // 004b85  shrd eax, edi, cl
    X86_AT(c, 0x4b85u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, false, v, c.r[7], g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 004b88  add bx, 0x20
    X86_AT(c, 0x4b88u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, 0x20u, 0, 2)); }
    // 004b8c  push edx
    X86_AT(c, 0x4b8cu);
    { uint32_t v = c.r[2]; push32(c, v); }
L_4b8d:
    X86_TICK(c, 7);
    // 004b8d  call dword ptr gs:[ebp + 0x31c]
    X86_AT(c, 0x4b8du);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x31Cu))); push32(c, 0x4b94u); x86_call(c, t); X86_RET(c, 0x4b94u); }
    X86_TICK(c, 8);
    // 004b94  pop edx
    X86_AT(c, 0x4b94u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 004b95  pop esi
    X86_AT(c, 0x4b95u);
    { uint32_t v = pop32(c); c.r[6] = v; }
L_4b96:
    X86_TICK(c, 28);
    // 004b96  pop ebx
    X86_AT(c, 0x4b96u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 004b97  inc dx
    X86_AT(c, 0x4b97u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_inc(c, v, 2)); }
    // 004b99  mov eax, dword ptr gs:[ebp + 0x20]
    X86_AT(c, 0x4b99u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x20u)));
    // 004b9d  add dword ptr gs:[ebp + 0x1cc], eax
    X86_AT(c, 0x4b9du);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 004ba4  dec dword ptr [esp]
    X86_AT(c, 0x4ba4u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 004ba7  jne 0x4b59
    X86_AT(c, 0x4ba7u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x4b59u); goto L_4b59; }
    X86_TICK(c, 12);
    // 004ba9  add esp, 4
    X86_AT(c, 0x4ba9u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 004bac  ret 
    X86_AT(c, 0x4bacu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x4b8du, "ran off the end of a function");
}
void f_00004b94(X86Cpu& c) {
    goto L_4b94;
L_4b59:
    X86_TICK(c, 9);
    // 004b59  push ebx
    X86_AT(c, 0x4b59u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 004b5a  call dword ptr gs:[ebp + 0x2f4]
    X86_AT(c, 0x4b5au);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2F4u))); push32(c, 0x4b61u); x86_call(c, t); X86_RET(c, 0x4b61u); }
    X86_TICK(c, 7);
    // 004b61  test eax, eax
    X86_AT(c, 0x4b61u);
    (void)x86_logic(c, c.r[0] & c.r[0], 4);
    // 004b63  je 0x4b96
    X86_AT(c, 0x4b63u);
    if (x86_cc(c, 4)) { goto L_4b96; }
    X86_TICK(c, 22);
    // 004b65  push esi
    X86_AT(c, 0x4b65u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 004b66  push eax
    X86_AT(c, 0x4b66u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 004b67  mov cl, byte ptr gs:[ebp + 0x22b]
    X86_AT(c, 0x4b67u);
    s8(c, 1, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x22Bu))));
    // 004b6e  shr eax, cl
    X86_AT(c, 0x4b6eu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 004b70  push ebx
    X86_AT(c, 0x4b70u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 004b71  push edx
    X86_AT(c, 0x4b71u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 004b72  call dword ptr gs:[ebp + 0x31c]
    X86_AT(c, 0x4b72u);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x31Cu))); push32(c, 0x4b79u); x86_call(c, t); X86_RET(c, 0x4b79u); }
    X86_TICK(c, 32);
    // 004b79  pop edx
    X86_AT(c, 0x4b79u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 004b7a  pop ebx
    X86_AT(c, 0x4b7au);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 004b7b  pop edi
    X86_AT(c, 0x4b7bu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 004b7c  sub eax, eax
    X86_AT(c, 0x4b7cu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 004b7e  mov cl, byte ptr gs:[ebp + 0x22b]
    X86_AT(c, 0x4b7eu);
    s8(c, 1, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x22Bu))));
    // 004b85  shrd eax, edi, cl
    X86_AT(c, 0x4b85u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, false, v, c.r[7], g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 004b88  add bx, 0x20
    X86_AT(c, 0x4b88u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, 0x20u, 0, 2)); }
    // 004b8c  push edx
    X86_AT(c, 0x4b8cu);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 004b8d  call dword ptr gs:[ebp + 0x31c]
    X86_AT(c, 0x4b8du);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x31Cu))); push32(c, 0x4b94u); x86_call(c, t); X86_RET(c, 0x4b94u); }
L_4b94:
    X86_TICK(c, 8);
    // 004b94  pop edx
    X86_AT(c, 0x4b94u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 004b95  pop esi
    X86_AT(c, 0x4b95u);
    { uint32_t v = pop32(c); c.r[6] = v; }
L_4b96:
    X86_TICK(c, 28);
    // 004b96  pop ebx
    X86_AT(c, 0x4b96u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 004b97  inc dx
    X86_AT(c, 0x4b97u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_inc(c, v, 2)); }
    // 004b99  mov eax, dword ptr gs:[ebp + 0x20]
    X86_AT(c, 0x4b99u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x20u)));
    // 004b9d  add dword ptr gs:[ebp + 0x1cc], eax
    X86_AT(c, 0x4b9du);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 004ba4  dec dword ptr [esp]
    X86_AT(c, 0x4ba4u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 004ba7  jne 0x4b59
    X86_AT(c, 0x4ba7u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x4b59u); goto L_4b59; }
    X86_TICK(c, 12);
    // 004ba9  add esp, 4
    X86_AT(c, 0x4ba9u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 004bac  ret 
    X86_AT(c, 0x4bacu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x4b94u, "ran off the end of a function");
}
void f_00004b95(X86Cpu& c) {
    goto L_4b95;
L_4b59:
    X86_TICK(c, 9);
    // 004b59  push ebx
    X86_AT(c, 0x4b59u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 004b5a  call dword ptr gs:[ebp + 0x2f4]
    X86_AT(c, 0x4b5au);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2F4u))); push32(c, 0x4b61u); x86_call(c, t); X86_RET(c, 0x4b61u); }
    X86_TICK(c, 7);
    // 004b61  test eax, eax
    X86_AT(c, 0x4b61u);
    (void)x86_logic(c, c.r[0] & c.r[0], 4);
    // 004b63  je 0x4b96
    X86_AT(c, 0x4b63u);
    if (x86_cc(c, 4)) { goto L_4b96; }
    X86_TICK(c, 22);
    // 004b65  push esi
    X86_AT(c, 0x4b65u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 004b66  push eax
    X86_AT(c, 0x4b66u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 004b67  mov cl, byte ptr gs:[ebp + 0x22b]
    X86_AT(c, 0x4b67u);
    s8(c, 1, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x22Bu))));
    // 004b6e  shr eax, cl
    X86_AT(c, 0x4b6eu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 004b70  push ebx
    X86_AT(c, 0x4b70u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 004b71  push edx
    X86_AT(c, 0x4b71u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 004b72  call dword ptr gs:[ebp + 0x31c]
    X86_AT(c, 0x4b72u);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x31Cu))); push32(c, 0x4b79u); x86_call(c, t); X86_RET(c, 0x4b79u); }
    X86_TICK(c, 32);
    // 004b79  pop edx
    X86_AT(c, 0x4b79u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 004b7a  pop ebx
    X86_AT(c, 0x4b7au);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 004b7b  pop edi
    X86_AT(c, 0x4b7bu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 004b7c  sub eax, eax
    X86_AT(c, 0x4b7cu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 004b7e  mov cl, byte ptr gs:[ebp + 0x22b]
    X86_AT(c, 0x4b7eu);
    s8(c, 1, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x22Bu))));
    // 004b85  shrd eax, edi, cl
    X86_AT(c, 0x4b85u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, false, v, c.r[7], g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 004b88  add bx, 0x20
    X86_AT(c, 0x4b88u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, 0x20u, 0, 2)); }
    // 004b8c  push edx
    X86_AT(c, 0x4b8cu);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 004b8d  call dword ptr gs:[ebp + 0x31c]
    X86_AT(c, 0x4b8du);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x31Cu))); push32(c, 0x4b94u); x86_call(c, t); X86_RET(c, 0x4b94u); }
    X86_TICK(c, 4);
    // 004b94  pop edx
    X86_AT(c, 0x4b94u);
    { uint32_t v = pop32(c); c.r[2] = v; }
L_4b95:
    X86_TICK(c, 4);
    // 004b95  pop esi
    X86_AT(c, 0x4b95u);
    { uint32_t v = pop32(c); c.r[6] = v; }
L_4b96:
    X86_TICK(c, 28);
    // 004b96  pop ebx
    X86_AT(c, 0x4b96u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 004b97  inc dx
    X86_AT(c, 0x4b97u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_inc(c, v, 2)); }
    // 004b99  mov eax, dword ptr gs:[ebp + 0x20]
    X86_AT(c, 0x4b99u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x20u)));
    // 004b9d  add dword ptr gs:[ebp + 0x1cc], eax
    X86_AT(c, 0x4b9du);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 004ba4  dec dword ptr [esp]
    X86_AT(c, 0x4ba4u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 004ba7  jne 0x4b59
    X86_AT(c, 0x4ba7u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x4b59u); goto L_4b59; }
    X86_TICK(c, 12);
    // 004ba9  add esp, 4
    X86_AT(c, 0x4ba9u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 004bac  ret 
    X86_AT(c, 0x4bacu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x4b95u, "ran off the end of a function");
}
void f_00004b96(X86Cpu& c) {
    goto L_4b96;
L_4b59:
    X86_TICK(c, 9);
    // 004b59  push ebx
    X86_AT(c, 0x4b59u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 004b5a  call dword ptr gs:[ebp + 0x2f4]
    X86_AT(c, 0x4b5au);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2F4u))); push32(c, 0x4b61u); x86_call(c, t); X86_RET(c, 0x4b61u); }
    X86_TICK(c, 7);
    // 004b61  test eax, eax
    X86_AT(c, 0x4b61u);
    (void)x86_logic(c, c.r[0] & c.r[0], 4);
    // 004b63  je 0x4b96
    X86_AT(c, 0x4b63u);
    if (x86_cc(c, 4)) { goto L_4b96; }
    X86_TICK(c, 22);
    // 004b65  push esi
    X86_AT(c, 0x4b65u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 004b66  push eax
    X86_AT(c, 0x4b66u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 004b67  mov cl, byte ptr gs:[ebp + 0x22b]
    X86_AT(c, 0x4b67u);
    s8(c, 1, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x22Bu))));
    // 004b6e  shr eax, cl
    X86_AT(c, 0x4b6eu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 004b70  push ebx
    X86_AT(c, 0x4b70u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 004b71  push edx
    X86_AT(c, 0x4b71u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 004b72  call dword ptr gs:[ebp + 0x31c]
    X86_AT(c, 0x4b72u);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x31Cu))); push32(c, 0x4b79u); x86_call(c, t); X86_RET(c, 0x4b79u); }
    X86_TICK(c, 32);
    // 004b79  pop edx
    X86_AT(c, 0x4b79u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 004b7a  pop ebx
    X86_AT(c, 0x4b7au);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 004b7b  pop edi
    X86_AT(c, 0x4b7bu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 004b7c  sub eax, eax
    X86_AT(c, 0x4b7cu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 004b7e  mov cl, byte ptr gs:[ebp + 0x22b]
    X86_AT(c, 0x4b7eu);
    s8(c, 1, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x22Bu))));
    // 004b85  shrd eax, edi, cl
    X86_AT(c, 0x4b85u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, false, v, c.r[7], g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 004b88  add bx, 0x20
    X86_AT(c, 0x4b88u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, 0x20u, 0, 2)); }
    // 004b8c  push edx
    X86_AT(c, 0x4b8cu);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 004b8d  call dword ptr gs:[ebp + 0x31c]
    X86_AT(c, 0x4b8du);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x31Cu))); push32(c, 0x4b94u); x86_call(c, t); X86_RET(c, 0x4b94u); }
    X86_TICK(c, 8);
    // 004b94  pop edx
    X86_AT(c, 0x4b94u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 004b95  pop esi
    X86_AT(c, 0x4b95u);
    { uint32_t v = pop32(c); c.r[6] = v; }
L_4b96:
    X86_TICK(c, 28);
    // 004b96  pop ebx
    X86_AT(c, 0x4b96u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 004b97  inc dx
    X86_AT(c, 0x4b97u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_inc(c, v, 2)); }
    // 004b99  mov eax, dword ptr gs:[ebp + 0x20]
    X86_AT(c, 0x4b99u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x20u)));
    // 004b9d  add dword ptr gs:[ebp + 0x1cc], eax
    X86_AT(c, 0x4b9du);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 004ba4  dec dword ptr [esp]
    X86_AT(c, 0x4ba4u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 004ba7  jne 0x4b59
    X86_AT(c, 0x4ba7u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x4b59u); goto L_4b59; }
    X86_TICK(c, 12);
    // 004ba9  add esp, 4
    X86_AT(c, 0x4ba9u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 004bac  ret 
    X86_AT(c, 0x4bacu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x4b96u, "ran off the end of a function");
}
void f_00004b97(X86Cpu& c) {
    goto L_4b97;
L_4b59:
    X86_TICK(c, 9);
    // 004b59  push ebx
    X86_AT(c, 0x4b59u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 004b5a  call dword ptr gs:[ebp + 0x2f4]
    X86_AT(c, 0x4b5au);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2F4u))); push32(c, 0x4b61u); x86_call(c, t); X86_RET(c, 0x4b61u); }
    X86_TICK(c, 7);
    // 004b61  test eax, eax
    X86_AT(c, 0x4b61u);
    (void)x86_logic(c, c.r[0] & c.r[0], 4);
    // 004b63  je 0x4b96
    X86_AT(c, 0x4b63u);
    if (x86_cc(c, 4)) { goto L_4b96; }
    X86_TICK(c, 22);
    // 004b65  push esi
    X86_AT(c, 0x4b65u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 004b66  push eax
    X86_AT(c, 0x4b66u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 004b67  mov cl, byte ptr gs:[ebp + 0x22b]
    X86_AT(c, 0x4b67u);
    s8(c, 1, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x22Bu))));
    // 004b6e  shr eax, cl
    X86_AT(c, 0x4b6eu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 004b70  push ebx
    X86_AT(c, 0x4b70u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 004b71  push edx
    X86_AT(c, 0x4b71u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 004b72  call dword ptr gs:[ebp + 0x31c]
    X86_AT(c, 0x4b72u);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x31Cu))); push32(c, 0x4b79u); x86_call(c, t); X86_RET(c, 0x4b79u); }
    X86_TICK(c, 32);
    // 004b79  pop edx
    X86_AT(c, 0x4b79u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 004b7a  pop ebx
    X86_AT(c, 0x4b7au);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 004b7b  pop edi
    X86_AT(c, 0x4b7bu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 004b7c  sub eax, eax
    X86_AT(c, 0x4b7cu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 004b7e  mov cl, byte ptr gs:[ebp + 0x22b]
    X86_AT(c, 0x4b7eu);
    s8(c, 1, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x22Bu))));
    // 004b85  shrd eax, edi, cl
    X86_AT(c, 0x4b85u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, false, v, c.r[7], g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 004b88  add bx, 0x20
    X86_AT(c, 0x4b88u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, 0x20u, 0, 2)); }
    // 004b8c  push edx
    X86_AT(c, 0x4b8cu);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 004b8d  call dword ptr gs:[ebp + 0x31c]
    X86_AT(c, 0x4b8du);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x31Cu))); push32(c, 0x4b94u); x86_call(c, t); X86_RET(c, 0x4b94u); }
    X86_TICK(c, 8);
    // 004b94  pop edx
    X86_AT(c, 0x4b94u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 004b95  pop esi
    X86_AT(c, 0x4b95u);
    { uint32_t v = pop32(c); c.r[6] = v; }
L_4b96:
    X86_TICK(c, 4);
    // 004b96  pop ebx
    X86_AT(c, 0x4b96u);
    { uint32_t v = pop32(c); c.r[3] = v; }
L_4b97:
    X86_TICK(c, 24);
    // 004b97  inc dx
    X86_AT(c, 0x4b97u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_inc(c, v, 2)); }
    // 004b99  mov eax, dword ptr gs:[ebp + 0x20]
    X86_AT(c, 0x4b99u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x20u)));
    // 004b9d  add dword ptr gs:[ebp + 0x1cc], eax
    X86_AT(c, 0x4b9du);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 004ba4  dec dword ptr [esp]
    X86_AT(c, 0x4ba4u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 004ba7  jne 0x4b59
    X86_AT(c, 0x4ba7u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x4b59u); goto L_4b59; }
    X86_TICK(c, 12);
    // 004ba9  add esp, 4
    X86_AT(c, 0x4ba9u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 004bac  ret 
    X86_AT(c, 0x4bacu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x4b97u, "ran off the end of a function");
}
void f_00004b99(X86Cpu& c) {
    goto L_4b99;
L_4b59:
    X86_TICK(c, 9);
    // 004b59  push ebx
    X86_AT(c, 0x4b59u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 004b5a  call dword ptr gs:[ebp + 0x2f4]
    X86_AT(c, 0x4b5au);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2F4u))); push32(c, 0x4b61u); x86_call(c, t); X86_RET(c, 0x4b61u); }
    X86_TICK(c, 7);
    // 004b61  test eax, eax
    X86_AT(c, 0x4b61u);
    (void)x86_logic(c, c.r[0] & c.r[0], 4);
    // 004b63  je 0x4b96
    X86_AT(c, 0x4b63u);
    if (x86_cc(c, 4)) { goto L_4b96; }
    X86_TICK(c, 22);
    // 004b65  push esi
    X86_AT(c, 0x4b65u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 004b66  push eax
    X86_AT(c, 0x4b66u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 004b67  mov cl, byte ptr gs:[ebp + 0x22b]
    X86_AT(c, 0x4b67u);
    s8(c, 1, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x22Bu))));
    // 004b6e  shr eax, cl
    X86_AT(c, 0x4b6eu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 004b70  push ebx
    X86_AT(c, 0x4b70u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 004b71  push edx
    X86_AT(c, 0x4b71u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 004b72  call dword ptr gs:[ebp + 0x31c]
    X86_AT(c, 0x4b72u);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x31Cu))); push32(c, 0x4b79u); x86_call(c, t); X86_RET(c, 0x4b79u); }
    X86_TICK(c, 32);
    // 004b79  pop edx
    X86_AT(c, 0x4b79u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 004b7a  pop ebx
    X86_AT(c, 0x4b7au);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 004b7b  pop edi
    X86_AT(c, 0x4b7bu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 004b7c  sub eax, eax
    X86_AT(c, 0x4b7cu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 004b7e  mov cl, byte ptr gs:[ebp + 0x22b]
    X86_AT(c, 0x4b7eu);
    s8(c, 1, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x22Bu))));
    // 004b85  shrd eax, edi, cl
    X86_AT(c, 0x4b85u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, false, v, c.r[7], g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 004b88  add bx, 0x20
    X86_AT(c, 0x4b88u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, 0x20u, 0, 2)); }
    // 004b8c  push edx
    X86_AT(c, 0x4b8cu);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 004b8d  call dword ptr gs:[ebp + 0x31c]
    X86_AT(c, 0x4b8du);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x31Cu))); push32(c, 0x4b94u); x86_call(c, t); X86_RET(c, 0x4b94u); }
    X86_TICK(c, 8);
    // 004b94  pop edx
    X86_AT(c, 0x4b94u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 004b95  pop esi
    X86_AT(c, 0x4b95u);
    { uint32_t v = pop32(c); c.r[6] = v; }
L_4b96:
    X86_TICK(c, 6);
    // 004b96  pop ebx
    X86_AT(c, 0x4b96u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 004b97  inc dx
    X86_AT(c, 0x4b97u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_inc(c, v, 2)); }
L_4b99:
    X86_TICK(c, 22);
    // 004b99  mov eax, dword ptr gs:[ebp + 0x20]
    X86_AT(c, 0x4b99u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x20u)));
    // 004b9d  add dword ptr gs:[ebp + 0x1cc], eax
    X86_AT(c, 0x4b9du);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 004ba4  dec dword ptr [esp]
    X86_AT(c, 0x4ba4u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 004ba7  jne 0x4b59
    X86_AT(c, 0x4ba7u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x4b59u); goto L_4b59; }
    X86_TICK(c, 12);
    // 004ba9  add esp, 4
    X86_AT(c, 0x4ba9u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 004bac  ret 
    X86_AT(c, 0x4bacu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x4b99u, "ran off the end of a function");
}
void f_00004b9d(X86Cpu& c) {
    goto L_4b9d;
L_4b59:
    X86_TICK(c, 9);
    // 004b59  push ebx
    X86_AT(c, 0x4b59u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 004b5a  call dword ptr gs:[ebp + 0x2f4]
    X86_AT(c, 0x4b5au);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2F4u))); push32(c, 0x4b61u); x86_call(c, t); X86_RET(c, 0x4b61u); }
    X86_TICK(c, 7);
    // 004b61  test eax, eax
    X86_AT(c, 0x4b61u);
    (void)x86_logic(c, c.r[0] & c.r[0], 4);
    // 004b63  je 0x4b96
    X86_AT(c, 0x4b63u);
    if (x86_cc(c, 4)) { goto L_4b96; }
    X86_TICK(c, 22);
    // 004b65  push esi
    X86_AT(c, 0x4b65u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 004b66  push eax
    X86_AT(c, 0x4b66u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 004b67  mov cl, byte ptr gs:[ebp + 0x22b]
    X86_AT(c, 0x4b67u);
    s8(c, 1, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x22Bu))));
    // 004b6e  shr eax, cl
    X86_AT(c, 0x4b6eu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 004b70  push ebx
    X86_AT(c, 0x4b70u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 004b71  push edx
    X86_AT(c, 0x4b71u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 004b72  call dword ptr gs:[ebp + 0x31c]
    X86_AT(c, 0x4b72u);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x31Cu))); push32(c, 0x4b79u); x86_call(c, t); X86_RET(c, 0x4b79u); }
    X86_TICK(c, 32);
    // 004b79  pop edx
    X86_AT(c, 0x4b79u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 004b7a  pop ebx
    X86_AT(c, 0x4b7au);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 004b7b  pop edi
    X86_AT(c, 0x4b7bu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 004b7c  sub eax, eax
    X86_AT(c, 0x4b7cu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 004b7e  mov cl, byte ptr gs:[ebp + 0x22b]
    X86_AT(c, 0x4b7eu);
    s8(c, 1, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x22Bu))));
    // 004b85  shrd eax, edi, cl
    X86_AT(c, 0x4b85u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, false, v, c.r[7], g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 004b88  add bx, 0x20
    X86_AT(c, 0x4b88u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, 0x20u, 0, 2)); }
    // 004b8c  push edx
    X86_AT(c, 0x4b8cu);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 004b8d  call dword ptr gs:[ebp + 0x31c]
    X86_AT(c, 0x4b8du);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x31Cu))); push32(c, 0x4b94u); x86_call(c, t); X86_RET(c, 0x4b94u); }
    X86_TICK(c, 8);
    // 004b94  pop edx
    X86_AT(c, 0x4b94u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 004b95  pop esi
    X86_AT(c, 0x4b95u);
    { uint32_t v = pop32(c); c.r[6] = v; }
L_4b96:
    X86_TICK(c, 10);
    // 004b96  pop ebx
    X86_AT(c, 0x4b96u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 004b97  inc dx
    X86_AT(c, 0x4b97u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_inc(c, v, 2)); }
    // 004b99  mov eax, dword ptr gs:[ebp + 0x20]
    X86_AT(c, 0x4b99u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x20u)));
L_4b9d:
    X86_TICK(c, 18);
    // 004b9d  add dword ptr gs:[ebp + 0x1cc], eax
    X86_AT(c, 0x4b9du);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 004ba4  dec dword ptr [esp]
    X86_AT(c, 0x4ba4u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 004ba7  jne 0x4b59
    X86_AT(c, 0x4ba7u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x4b59u); goto L_4b59; }
    X86_TICK(c, 12);
    // 004ba9  add esp, 4
    X86_AT(c, 0x4ba9u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 004bac  ret 
    X86_AT(c, 0x4bacu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x4b9du, "ran off the end of a function");
}
void f_00004ba4(X86Cpu& c) {
    goto L_4ba4;
L_4b59:
    X86_TICK(c, 9);
    // 004b59  push ebx
    X86_AT(c, 0x4b59u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 004b5a  call dword ptr gs:[ebp + 0x2f4]
    X86_AT(c, 0x4b5au);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2F4u))); push32(c, 0x4b61u); x86_call(c, t); X86_RET(c, 0x4b61u); }
    X86_TICK(c, 7);
    // 004b61  test eax, eax
    X86_AT(c, 0x4b61u);
    (void)x86_logic(c, c.r[0] & c.r[0], 4);
    // 004b63  je 0x4b96
    X86_AT(c, 0x4b63u);
    if (x86_cc(c, 4)) { goto L_4b96; }
    X86_TICK(c, 22);
    // 004b65  push esi
    X86_AT(c, 0x4b65u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 004b66  push eax
    X86_AT(c, 0x4b66u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 004b67  mov cl, byte ptr gs:[ebp + 0x22b]
    X86_AT(c, 0x4b67u);
    s8(c, 1, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x22Bu))));
    // 004b6e  shr eax, cl
    X86_AT(c, 0x4b6eu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 004b70  push ebx
    X86_AT(c, 0x4b70u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 004b71  push edx
    X86_AT(c, 0x4b71u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 004b72  call dword ptr gs:[ebp + 0x31c]
    X86_AT(c, 0x4b72u);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x31Cu))); push32(c, 0x4b79u); x86_call(c, t); X86_RET(c, 0x4b79u); }
    X86_TICK(c, 32);
    // 004b79  pop edx
    X86_AT(c, 0x4b79u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 004b7a  pop ebx
    X86_AT(c, 0x4b7au);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 004b7b  pop edi
    X86_AT(c, 0x4b7bu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 004b7c  sub eax, eax
    X86_AT(c, 0x4b7cu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 004b7e  mov cl, byte ptr gs:[ebp + 0x22b]
    X86_AT(c, 0x4b7eu);
    s8(c, 1, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x22Bu))));
    // 004b85  shrd eax, edi, cl
    X86_AT(c, 0x4b85u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, false, v, c.r[7], g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 004b88  add bx, 0x20
    X86_AT(c, 0x4b88u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, 0x20u, 0, 2)); }
    // 004b8c  push edx
    X86_AT(c, 0x4b8cu);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 004b8d  call dword ptr gs:[ebp + 0x31c]
    X86_AT(c, 0x4b8du);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x31Cu))); push32(c, 0x4b94u); x86_call(c, t); X86_RET(c, 0x4b94u); }
    X86_TICK(c, 8);
    // 004b94  pop edx
    X86_AT(c, 0x4b94u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 004b95  pop esi
    X86_AT(c, 0x4b95u);
    { uint32_t v = pop32(c); c.r[6] = v; }
L_4b96:
    X86_TICK(c, 17);
    // 004b96  pop ebx
    X86_AT(c, 0x4b96u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 004b97  inc dx
    X86_AT(c, 0x4b97u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_inc(c, v, 2)); }
    // 004b99  mov eax, dword ptr gs:[ebp + 0x20]
    X86_AT(c, 0x4b99u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x20u)));
    // 004b9d  add dword ptr gs:[ebp + 0x1cc], eax
    X86_AT(c, 0x4b9du);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
L_4ba4:
    X86_TICK(c, 11);
    // 004ba4  dec dword ptr [esp]
    X86_AT(c, 0x4ba4u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 004ba7  jne 0x4b59
    X86_AT(c, 0x4ba7u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x4b59u); goto L_4b59; }
    X86_TICK(c, 12);
    // 004ba9  add esp, 4
    X86_AT(c, 0x4ba9u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 004bac  ret 
    X86_AT(c, 0x4bacu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x4ba4u, "ran off the end of a function");
}
void f_00004ba7(X86Cpu& c) {
    goto L_4ba7;
L_4b59:
    X86_TICK(c, 9);
    // 004b59  push ebx
    X86_AT(c, 0x4b59u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 004b5a  call dword ptr gs:[ebp + 0x2f4]
    X86_AT(c, 0x4b5au);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2F4u))); push32(c, 0x4b61u); x86_call(c, t); X86_RET(c, 0x4b61u); }
    X86_TICK(c, 7);
    // 004b61  test eax, eax
    X86_AT(c, 0x4b61u);
    (void)x86_logic(c, c.r[0] & c.r[0], 4);
    // 004b63  je 0x4b96
    X86_AT(c, 0x4b63u);
    if (x86_cc(c, 4)) { goto L_4b96; }
    X86_TICK(c, 22);
    // 004b65  push esi
    X86_AT(c, 0x4b65u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 004b66  push eax
    X86_AT(c, 0x4b66u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 004b67  mov cl, byte ptr gs:[ebp + 0x22b]
    X86_AT(c, 0x4b67u);
    s8(c, 1, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x22Bu))));
    // 004b6e  shr eax, cl
    X86_AT(c, 0x4b6eu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 004b70  push ebx
    X86_AT(c, 0x4b70u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 004b71  push edx
    X86_AT(c, 0x4b71u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 004b72  call dword ptr gs:[ebp + 0x31c]
    X86_AT(c, 0x4b72u);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x31Cu))); push32(c, 0x4b79u); x86_call(c, t); X86_RET(c, 0x4b79u); }
    X86_TICK(c, 32);
    // 004b79  pop edx
    X86_AT(c, 0x4b79u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 004b7a  pop ebx
    X86_AT(c, 0x4b7au);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 004b7b  pop edi
    X86_AT(c, 0x4b7bu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 004b7c  sub eax, eax
    X86_AT(c, 0x4b7cu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 004b7e  mov cl, byte ptr gs:[ebp + 0x22b]
    X86_AT(c, 0x4b7eu);
    s8(c, 1, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x22Bu))));
    // 004b85  shrd eax, edi, cl
    X86_AT(c, 0x4b85u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, false, v, c.r[7], g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 004b88  add bx, 0x20
    X86_AT(c, 0x4b88u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, 0x20u, 0, 2)); }
    // 004b8c  push edx
    X86_AT(c, 0x4b8cu);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 004b8d  call dword ptr gs:[ebp + 0x31c]
    X86_AT(c, 0x4b8du);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x31Cu))); push32(c, 0x4b94u); x86_call(c, t); X86_RET(c, 0x4b94u); }
    X86_TICK(c, 8);
    // 004b94  pop edx
    X86_AT(c, 0x4b94u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 004b95  pop esi
    X86_AT(c, 0x4b95u);
    { uint32_t v = pop32(c); c.r[6] = v; }
L_4b96:
    X86_TICK(c, 23);
    // 004b96  pop ebx
    X86_AT(c, 0x4b96u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 004b97  inc dx
    X86_AT(c, 0x4b97u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_inc(c, v, 2)); }
    // 004b99  mov eax, dword ptr gs:[ebp + 0x20]
    X86_AT(c, 0x4b99u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x20u)));
    // 004b9d  add dword ptr gs:[ebp + 0x1cc], eax
    X86_AT(c, 0x4b9du);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 004ba4  dec dword ptr [esp]
    X86_AT(c, 0x4ba4u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
L_4ba7:
    X86_TICK(c, 5);
    // 004ba7  jne 0x4b59
    X86_AT(c, 0x4ba7u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x4b59u); goto L_4b59; }
    X86_TICK(c, 12);
    // 004ba9  add esp, 4
    X86_AT(c, 0x4ba9u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 004bac  ret 
    X86_AT(c, 0x4bacu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x4ba7u, "ran off the end of a function");
}
void f_00004ba9(X86Cpu& c) {
    X86_TICK(c, 12);
    // 004ba9  add esp, 4
    X86_AT(c, 0x4ba9u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 004bac  ret 
    X86_AT(c, 0x4bacu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x4ba9u, "ran off the end of a function");
}
void f_00004bac(X86Cpu& c) {
    X86_TICK(c, 10);
    // 004bac  ret 
    X86_AT(c, 0x4bacu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x4bacu, "ran off the end of a function");
}
void f_00004be0(X86Cpu& c) {
    X86_TICK(c, 25);
    // 004be0  lodsw ax, word ptr [esi]
    X86_AT(c, 0x4be0u);
    x86_string(c, 3, 2, 0, 4, 3);
    // 004be2  xchg al, ah
    X86_AT(c, 0x4be2u);
    { uint32_t t = g8(c, 0); s8(c, 0, g8(c, 4)); s8(c, 4, t); }
    // 004be4  not ax
    X86_AT(c, 0x4be4u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, ~v & 0xFFFFu); }
    // 004be7  shl eax, 0x10
    X86_AT(c, 0x4be7u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 004bea  ret 
    X86_AT(c, 0x4beau);
    c.eip = pop32(c); return;
    x86_fault(c, 0x4be0u, "ran off the end of a function");
}
void f_00004be2(X86Cpu& c) {
    X86_TICK(c, 18);
    // 004be2  xchg al, ah
    X86_AT(c, 0x4be2u);
    { uint32_t t = g8(c, 0); s8(c, 0, g8(c, 4)); s8(c, 4, t); }
    // 004be4  not ax
    X86_AT(c, 0x4be4u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, ~v & 0xFFFFu); }
    // 004be7  shl eax, 0x10
    X86_AT(c, 0x4be7u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 004bea  ret 
    X86_AT(c, 0x4beau);
    c.eip = pop32(c); return;
    x86_fault(c, 0x4be2u, "ran off the end of a function");
}
void f_00004be4(X86Cpu& c) {
    X86_TICK(c, 15);
    // 004be4  not ax
    X86_AT(c, 0x4be4u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, ~v & 0xFFFFu); }
    // 004be7  shl eax, 0x10
    X86_AT(c, 0x4be7u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 004bea  ret 
    X86_AT(c, 0x4beau);
    c.eip = pop32(c); return;
    x86_fault(c, 0x4be4u, "ran off the end of a function");
}
void f_00004be7(X86Cpu& c) {
    X86_TICK(c, 13);
    // 004be7  shl eax, 0x10
    X86_AT(c, 0x4be7u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 004bea  ret 
    X86_AT(c, 0x4beau);
    c.eip = pop32(c); return;
    x86_fault(c, 0x4be7u, "ran off the end of a function");
}
void f_00004bea(X86Cpu& c) {
    X86_TICK(c, 10);
    // 004bea  ret 
    X86_AT(c, 0x4beau);
    c.eip = pop32(c); return;
    x86_fault(c, 0x4beau, "ran off the end of a function");
}
void f_00004bec(X86Cpu& c) {
    X86_TICK(c, 23);
    // 004bec  lodsw ax, word ptr [esi]
    X86_AT(c, 0x4becu);
    x86_string(c, 3, 2, 0, 4, 3);
    // 004bee  xchg al, ah
    X86_AT(c, 0x4beeu);
    { uint32_t t = g8(c, 0); s8(c, 0, g8(c, 4)); s8(c, 4, t); }
    // 004bf0  shl eax, 0x10
    X86_AT(c, 0x4bf0u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 004bf3  ret 
    X86_AT(c, 0x4bf3u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x4becu, "ran off the end of a function");
}
void f_00004bee(X86Cpu& c) {
    X86_TICK(c, 16);
    // 004bee  xchg al, ah
    X86_AT(c, 0x4beeu);
    { uint32_t t = g8(c, 0); s8(c, 0, g8(c, 4)); s8(c, 4, t); }
    // 004bf0  shl eax, 0x10
    X86_AT(c, 0x4bf0u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 004bf3  ret 
    X86_AT(c, 0x4bf3u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x4beeu, "ran off the end of a function");
}
void f_00004bf0(X86Cpu& c) {
    X86_TICK(c, 13);
    // 004bf0  shl eax, 0x10
    X86_AT(c, 0x4bf0u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 004bf3  ret 
    X86_AT(c, 0x4bf3u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x4bf0u, "ran off the end of a function");
}
void f_00004bf3(X86Cpu& c) {
    X86_TICK(c, 10);
    // 004bf3  ret 
    X86_AT(c, 0x4bf3u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x4bf3u, "ran off the end of a function");
}
void f_00004c14(X86Cpu& c) {
    X86_TICK(c, 28);
    // 004c14  lodsd eax, dword ptr [esi]
    X86_AT(c, 0x4c14u);
    x86_string(c, 3, 4, 0, 4, 3);
    // 004c15  xchg al, ah
    X86_AT(c, 0x4c15u);
    { uint32_t t = g8(c, 0); s8(c, 0, g8(c, 4)); s8(c, 4, t); }
    // 004c17  rol eax, 0x10
    X86_AT(c, 0x4c17u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 0, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 004c1a  xchg al, ah
    X86_AT(c, 0x4c1au);
    { uint32_t t = g8(c, 0); s8(c, 0, g8(c, 4)); s8(c, 4, t); }
    // 004c1c  not eax
    X86_AT(c, 0x4c1cu);
    { uint32_t v = c.r[0]; c.r[0] = ~v & 0xFFFFFFFFu; }
    // 004c1e  ret 
    X86_AT(c, 0x4c1eu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x4c14u, "ran off the end of a function");
}
void f_00004c15(X86Cpu& c) {
    X86_TICK(c, 21);
    // 004c15  xchg al, ah
    X86_AT(c, 0x4c15u);
    { uint32_t t = g8(c, 0); s8(c, 0, g8(c, 4)); s8(c, 4, t); }
    // 004c17  rol eax, 0x10
    X86_AT(c, 0x4c17u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 0, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 004c1a  xchg al, ah
    X86_AT(c, 0x4c1au);
    { uint32_t t = g8(c, 0); s8(c, 0, g8(c, 4)); s8(c, 4, t); }
    // 004c1c  not eax
    X86_AT(c, 0x4c1cu);
    { uint32_t v = c.r[0]; c.r[0] = ~v & 0xFFFFFFFFu; }
    // 004c1e  ret 
    X86_AT(c, 0x4c1eu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x4c15u, "ran off the end of a function");
}
void f_00004c17(X86Cpu& c) {
    X86_TICK(c, 18);
    // 004c17  rol eax, 0x10
    X86_AT(c, 0x4c17u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 0, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 004c1a  xchg al, ah
    X86_AT(c, 0x4c1au);
    { uint32_t t = g8(c, 0); s8(c, 0, g8(c, 4)); s8(c, 4, t); }
    // 004c1c  not eax
    X86_AT(c, 0x4c1cu);
    { uint32_t v = c.r[0]; c.r[0] = ~v & 0xFFFFFFFFu; }
    // 004c1e  ret 
    X86_AT(c, 0x4c1eu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x4c17u, "ran off the end of a function");
}
void f_00004c1a(X86Cpu& c) {
    X86_TICK(c, 15);
    // 004c1a  xchg al, ah
    X86_AT(c, 0x4c1au);
    { uint32_t t = g8(c, 0); s8(c, 0, g8(c, 4)); s8(c, 4, t); }
    // 004c1c  not eax
    X86_AT(c, 0x4c1cu);
    { uint32_t v = c.r[0]; c.r[0] = ~v & 0xFFFFFFFFu; }
    // 004c1e  ret 
    X86_AT(c, 0x4c1eu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x4c1au, "ran off the end of a function");
}
void f_00004c1c(X86Cpu& c) {
    X86_TICK(c, 12);
    // 004c1c  not eax
    X86_AT(c, 0x4c1cu);
    { uint32_t v = c.r[0]; c.r[0] = ~v & 0xFFFFFFFFu; }
    // 004c1e  ret 
    X86_AT(c, 0x4c1eu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x4c1cu, "ran off the end of a function");
}
void f_00004c1e(X86Cpu& c) {
    X86_TICK(c, 10);
    // 004c1e  ret 
    X86_AT(c, 0x4c1eu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x4c1eu, "ran off the end of a function");
}
void f_00004c20(X86Cpu& c) {
    X86_TICK(c, 26);
    // 004c20  lodsd eax, dword ptr [esi]
    X86_AT(c, 0x4c20u);
    x86_string(c, 3, 4, 0, 4, 3);
    // 004c21  xchg al, ah
    X86_AT(c, 0x4c21u);
    { uint32_t t = g8(c, 0); s8(c, 0, g8(c, 4)); s8(c, 4, t); }
    // 004c23  rol eax, 0x10
    X86_AT(c, 0x4c23u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 0, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 004c26  xchg al, ah
    X86_AT(c, 0x4c26u);
    { uint32_t t = g8(c, 0); s8(c, 0, g8(c, 4)); s8(c, 4, t); }
    // 004c28  ret 
    X86_AT(c, 0x4c28u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x4c20u, "ran off the end of a function");
}
void f_00004c21(X86Cpu& c) {
    X86_TICK(c, 19);
    // 004c21  xchg al, ah
    X86_AT(c, 0x4c21u);
    { uint32_t t = g8(c, 0); s8(c, 0, g8(c, 4)); s8(c, 4, t); }
    // 004c23  rol eax, 0x10
    X86_AT(c, 0x4c23u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 0, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 004c26  xchg al, ah
    X86_AT(c, 0x4c26u);
    { uint32_t t = g8(c, 0); s8(c, 0, g8(c, 4)); s8(c, 4, t); }
    // 004c28  ret 
    X86_AT(c, 0x4c28u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x4c21u, "ran off the end of a function");
}
void f_00004c23(X86Cpu& c) {
    X86_TICK(c, 16);
    // 004c23  rol eax, 0x10
    X86_AT(c, 0x4c23u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 0, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 004c26  xchg al, ah
    X86_AT(c, 0x4c26u);
    { uint32_t t = g8(c, 0); s8(c, 0, g8(c, 4)); s8(c, 4, t); }
    // 004c28  ret 
    X86_AT(c, 0x4c28u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x4c23u, "ran off the end of a function");
}
void f_00004c26(X86Cpu& c) {
    X86_TICK(c, 13);
    // 004c26  xchg al, ah
    X86_AT(c, 0x4c26u);
    { uint32_t t = g8(c, 0); s8(c, 0, g8(c, 4)); s8(c, 4, t); }
    // 004c28  ret 
    X86_AT(c, 0x4c28u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x4c26u, "ran off the end of a function");
}
void f_00004c28(X86Cpu& c) {
    X86_TICK(c, 10);
    // 004c28  ret 
    X86_AT(c, 0x4c28u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x4c28u, "ran off the end of a function");
}
void f_00004c2c(X86Cpu& c) {
    X86_TICK(c, 26);
    // 004c2c  sub esp, 0x1800
    X86_AT(c, 0x4c2cu);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, 0x1800u, 0, 4); }
    // 004c32  mov dword ptr gs:[ebp + 0x410], esp
    X86_AT(c, 0x4c32u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x410u)), c.r[4]);
    // 004c39  mov esi, esp
    X86_AT(c, 0x4c39u);
    c.r[6] = c.r[4];
    // 004c3b  lea eax, [esi + 0x17fa]
    X86_AT(c, 0x4c3bu);
    c.r[0] = (uint32_t)(c.r[6] + 0x17FAu);
    // 004c41  mov dword ptr gs:[ebp + 0x414], eax
    X86_AT(c, 0x4c41u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x414u)), c.r[0]);
    // 004c48  mov eax, dword ptr gs:[ebp + 0x1c4]
    X86_AT(c, 0x4c48u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C4u)));
    // 004c4f  cmp word ptr gs:[ebp + 0x28], ax
    X86_AT(c, 0x4c4fu);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x28u))), (c.r[0] & 0xFFFFu), 0, 2);
    // 004c54  jg 0x4c83
    X86_AT(c, 0x4c54u);
    if (x86_cc(c, 15)) { goto L_4c83; }
    X86_TICK(c, 12);
    // 004c56  cmp word ptr gs:[ebp + 0x2c], ax
    X86_AT(c, 0x4c56u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu))), (c.r[0] & 0xFFFFu), 0, 2);
    // 004c5b  jl 0x4c83
    X86_AT(c, 0x4c5bu);
    if (x86_cc(c, 12)) { goto L_4c83; }
    X86_TICK(c, 17);
    // 004c5d  mov word ptr gs:[ebp + 0x430], ax
    X86_AT(c, 0x4c5du);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x430u)), (c.r[0] & 0xFFFFu));
    // 004c65  shr eax, 0x10
    X86_AT(c, 0x4c65u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 004c68  cmp word ptr gs:[ebp + 0x2a], ax
    X86_AT(c, 0x4c68u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Au))), (c.r[0] & 0xFFFFu), 0, 2);
    // 004c6d  jg 0x4c83
    X86_AT(c, 0x4c6du);
    if (x86_cc(c, 15)) { goto L_4c83; }
    X86_TICK(c, 12);
    // 004c6f  cmp word ptr gs:[ebp + 0x2e], ax
    X86_AT(c, 0x4c6fu);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Eu))), (c.r[0] & 0xFFFFu), 0, 2);
    // 004c74  jl 0x4c83
    X86_AT(c, 0x4c74u);
    if (x86_cc(c, 12)) { goto L_4c83; }
    X86_TICK(c, 9);
    // 004c76  mov word ptr gs:[ebp + 0x438], ax
    X86_AT(c, 0x4c76u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x438u)), (c.r[0] & 0xFFFFu));
    // 004c7e  call 0x4c8c
    X86_AT(c, 0x4c7eu);
    push32(c, 0x4c83u); f_00004c8c(c); X86_RET(c, 0x4c83u);
L_4c83:
    X86_TICK(c, 12);
    // 004c83  add esp, 0x1800
    X86_AT(c, 0x4c83u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x1800u, 0, 4); }
    // 004c89  ret 
    X86_AT(c, 0x4c89u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x4c2cu, "ran off the end of a function");
}
void f_00004c8c(X86Cpu& c) {
    X86_TICK(c, 101);
    // 004c8c  mov eax, ss
    X86_AT(c, 0x4c8cu);
    c.r[0] = (uint32_t)c.sreg[2];
    // 004c8e  mov ds, eax
    X86_AT(c, 0x4c8eu);
    x86_load_seg(c, 3, (c.r[0] & 0xFFFFu) & 0xFFFFu);
    // 004c90  mov es, word ptr gs:[ebp + 4]
    X86_AT(c, 0x4c90u);
    x86_load_seg(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x4u))) & 0xFFFFu);
    // 004c94  mov edi, esi
    X86_AT(c, 0x4c94u);
    c.r[7] = c.r[6];
    // 004c96  mov byte ptr gs:[ebp + 0x428], 0
    X86_AT(c, 0x4c96u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x428u)), 0x0u);
    // 004c9e  lea ebx, [esi + 0x14fb]
    X86_AT(c, 0x4c9eu);
    c.r[3] = (uint32_t)(c.r[6] + 0x14FBu);
    // 004ca4  mov dword ptr gs:[ebp + 0x42c], ebx
    X86_AT(c, 0x4ca4u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x42Cu)), c.r[3]);
    // 004cab  movzx ecx, word ptr gs:[ebp + 0x438]
    X86_AT(c, 0x4cabu);
    c.r[1] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x438u)));
    // 004cb3  mov eax, ecx
    X86_AT(c, 0x4cb3u);
    c.r[0] = c.r[1];
    // 004cb5  movzx edx, word ptr gs:[ebp + 0x1c]
    X86_AT(c, 0x4cb5u);
    c.r[2] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1Cu)));
    // 004cba  imul eax, edx
    X86_AT(c, 0x4cbau);
    c.r[0] = x86_imul2(c, c.r[0], c.r[2], 4);
    // 004cbd  add eax, dword ptr gs:[ebp + 8]
    X86_AT(c, 0x4cbdu);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x8u))), 0, 4); }
    // 004cc1  mov dword ptr gs:[ebp + 0x418], eax
    X86_AT(c, 0x4cc1u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x418u)), c.r[0]);
    // 004cc8  imul ecx, dword ptr gs:[ebp + 0x20]
    X86_AT(c, 0x4cc8u);
    c.r[1] = x86_imul2(c, c.r[1], rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x20u))), 4);
    // 004ccd  add ecx, dword ptr gs:[ebp]
    X86_AT(c, 0x4ccdu);
    { uint32_t v = c.r[1]; c.r[1] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5]))), 0, 4); }
    // 004cd1  mov dword ptr gs:[ebp + 0x2b4], ecx
    X86_AT(c, 0x4cd1u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2B4u)), c.r[1]);
    // 004cd8  mov dx, word ptr gs:[ebp + 0x430]
    X86_AT(c, 0x4cd8u);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x430u))));
    // 004ce0  call 0x54b0
    X86_AT(c, 0x4ce0u);
    push32(c, 0x4ce5u); f_000054b0(c); X86_RET(c, 0x4ce5u);
    X86_TICK(c, 15);
    // 004ce5  inc dx
    X86_AT(c, 0x4ce5u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_inc(c, v, 2)); }
    // 004ce7  mov word ptr gs:[ebp + 0x434], dx
    X86_AT(c, 0x4ce7u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x434u)), (c.r[2] & 0xFFFFu));
    // 004cef  mov dx, word ptr gs:[ebp + 0x430]
    X86_AT(c, 0x4cefu);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x430u))));
    // 004cf7  call 0x50c4
    X86_AT(c, 0x4cf7u);
    push32(c, 0x4cfcu); f_000050c4(c); X86_RET(c, 0x4cfcu);
    X86_TICK(c, 15);
    // 004cfc  dec dx
    X86_AT(c, 0x4cfcu);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_dec(c, v, 2)); }
    // 004cfe  mov word ptr gs:[ebp + 0x436], dx
    X86_AT(c, 0x4cfeu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x436u)), (c.r[2] & 0xFFFFu));
    // 004d06  mov ax, word ptr gs:[ebp + 0x434]
    X86_AT(c, 0x4d06u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x434u))));
    // 004d0e  cmp ax, dx
    X86_AT(c, 0x4d0eu);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), (c.r[2] & 0xFFFFu), 0, 2);
    // 004d11  jg 0x4da1
    X86_AT(c, 0x4d11u);
    if (x86_cc(c, 15)) { goto L_4da1; }
    X86_TICK(c, 25);
    // 004d17  mov word ptr gs:[ebp + 0x222], ax
    X86_AT(c, 0x4d17u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u)), (c.r[0] & 0xFFFFu));
    // 004d1f  mov word ptr gs:[ebp + 0x224], dx
    X86_AT(c, 0x4d1fu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u)), (c.r[2] & 0xFFFFu));
    // 004d27  mov ax, word ptr gs:[ebp + 0x438]
    X86_AT(c, 0x4d27u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x438u))));
    // 004d2f  mov word ptr gs:[ebp + 0x226], ax
    X86_AT(c, 0x4d2fu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u)), (c.r[0] & 0xFFFFu));
    // 004d37  push fs
    X86_AT(c, 0x4d37u);
    push32(c, c.sreg[4]);
    // 004d39  push ds
    X86_AT(c, 0x4d39u);
    push32(c, c.sreg[3]);
    // 004d3a  push esi
    X86_AT(c, 0x4d3au);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 004d3b  push edi
    X86_AT(c, 0x4d3bu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 004d3c  call 0x8054
    X86_AT(c, 0x4d3cu);
    push32(c, 0x4d41u); f_00008054(c); X86_RET(c, 0x4d41u);
    X86_TICK(c, 32);
    // 004d41  pop edi
    X86_AT(c, 0x4d41u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 004d42  pop esi
    X86_AT(c, 0x4d42u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 004d43  pop ds
    X86_AT(c, 0x4d43u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 004d44  pop fs
    X86_AT(c, 0x4d44u);
    x86_load_seg(c, 4, pop32(c) & 0xFFFFu);
    // 004d46  mov edx, dword ptr gs:[ebp + 0x434]
    X86_AT(c, 0x4d46u);
    c.r[2] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x434u)));
    // 004d4d  shld ebx, edx, 0x10
    X86_AT(c, 0x4d4du);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_double(c, true, v, c.r[2], 0x10u, 4, w); if (w) c.r[3] = r; }
    // 004d51  clc 
    X86_AT(c, 0x4d51u);
    c.fl &= ~X86_CF;
    // 004d52  call 0x570c
    X86_AT(c, 0x4d52u);
    push32(c, 0x4d57u); f_0000570c(c); X86_RET(c, 0x4d57u);
    X86_TICK(c, 9);
    // 004d57  stc 
    X86_AT(c, 0x4d57u);
    c.fl |= X86_CF;
    // 004d58  call 0x570c
    X86_AT(c, 0x4d58u);
    push32(c, 0x4d5du); f_0000570c(c); X86_RET(c, 0x4d5du);
L_4d5d:
    X86_TICK(c, 7);
    // 004d5d  call 0x5748
    X86_AT(c, 0x4d5du);
    push32(c, 0x4d62u); f_00005748(c); X86_RET(c, 0x4d62u);
    X86_TICK(c, 5);
    // 004d62  jb 0x4da1
    X86_AT(c, 0x4d62u);
    if (x86_cc(c, 2)) { goto L_4da1; }
    X86_TICK(c, 20);
    // 004d64  mov word ptr gs:[ebp + 0x434], dx
    X86_AT(c, 0x4d64u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x434u)), (c.r[2] & 0xFFFFu));
    // 004d6c  mov word ptr gs:[ebp + 0x436], bx
    X86_AT(c, 0x4d6cu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x436u)), (c.r[3] & 0xFFFFu));
    // 004d74  mov word ptr gs:[ebp + 0x438], ax
    X86_AT(c, 0x4d74u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x438u)), (c.r[0] & 0xFFFFu));
    // 004d7c  mov word ptr gs:[ebp + 0x226], ax
    X86_AT(c, 0x4d7cu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u)), (c.r[0] & 0xFFFFu));
    // 004d84  cmp byte ptr gs:[ebp + 0x428], 0
    X86_AT(c, 0x4d84u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x428u))), 0x0u, 0, 1);
    // 004d8c  je 0x4d97
    X86_AT(c, 0x4d8cu);
    if (x86_cc(c, 4)) { goto L_4d97; }
    X86_TICK(c, 7);
    // 004d8e  call 0x4eb0
    X86_AT(c, 0x4d8eu);
    push32(c, 0x4d93u); f_00004eb0(c); X86_RET(c, 0x4d93u);
    X86_TICK(c, 5);
    // 004d93  je 0x4d9e
    X86_AT(c, 0x4d93u);
    if (x86_cc(c, 4)) { goto L_4d9e; }
    X86_TICK(c, 5);
    // 004d95  jb 0x4d5d
    X86_AT(c, 0x4d95u);
    if (x86_cc(c, 2)) { X86_POLL(c, 0x4d5du); goto L_4d5d; }
L_4d97:
    X86_TICK(c, 7);
    // 004d97  call 0x4da4
    X86_AT(c, 0x4d97u);
    push32(c, 0x4d9cu); f_00004da4(c); X86_RET(c, 0x4d9cu);
    X86_TICK(c, 5);
    // 004d9c  jae 0x4d5d
    X86_AT(c, 0x4d9cu);
    if (x86_cc(c, 3)) { X86_POLL(c, 0x4d5du); goto L_4d5d; }
L_4d9e:
    X86_TICK(c, 12);
    // 004d9e  mov ah, 0xa
    X86_AT(c, 0x4d9eu);
    s8(c, 4, 0xAu);
    // 004da0  ret 
    X86_AT(c, 0x4da0u);
    c.eip = pop32(c); return;
L_4da1:
    X86_TICK(c, 12);
    // 004da1  xor ah, ah
    X86_AT(c, 0x4da1u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_logic(c, v ^ g8(c, 4), 1)); }
    // 004da3  ret 
    X86_AT(c, 0x4da3u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x4c8cu, "ran off the end of a function");
}
void f_00004da4(X86Cpu& c) {
    X86_TICK(c, 96);
    // 004da4  mov ax, word ptr gs:[ebp + 0x436]
    X86_AT(c, 0x4da4u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x436u))));
    // 004dac  mov word ptr gs:[ebp + 0x43a], ax
    X86_AT(c, 0x4dacu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x43Au)), (c.r[0] & 0xFFFFu));
    // 004db4  movzx ecx, word ptr gs:[ebp + 0x438]
    X86_AT(c, 0x4db4u);
    c.r[1] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x438u)));
    // 004dbc  mov eax, ecx
    X86_AT(c, 0x4dbcu);
    c.r[0] = c.r[1];
    // 004dbe  movzx edx, word ptr gs:[ebp + 0x1c]
    X86_AT(c, 0x4dbeu);
    c.r[2] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1Cu)));
    // 004dc3  imul eax, edx
    X86_AT(c, 0x4dc3u);
    c.r[0] = x86_imul2(c, c.r[0], c.r[2], 4);
    // 004dc6  add eax, dword ptr gs:[ebp + 8]
    X86_AT(c, 0x4dc6u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x8u))), 0, 4); }
    // 004dca  mov dword ptr gs:[ebp + 0x418], eax
    X86_AT(c, 0x4dcau);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x418u)), c.r[0]);
    // 004dd1  imul ecx, dword ptr gs:[ebp + 0x20]
    X86_AT(c, 0x4dd1u);
    c.r[1] = x86_imul2(c, c.r[1], rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x20u))), 4);
    // 004dd6  add ecx, dword ptr gs:[ebp]
    X86_AT(c, 0x4dd6u);
    { uint32_t v = c.r[1]; c.r[1] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5]))), 0, 4); }
    // 004dda  mov dword ptr gs:[ebp + 0x2b4], ecx
    X86_AT(c, 0x4ddau);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2B4u)), c.r[1]);
    // 004de1  mov dx, word ptr gs:[ebp + 0x434]
    X86_AT(c, 0x4de1u);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x434u))));
    // 004de9  cmp word ptr gs:[ebp + 0x28], dx
    X86_AT(c, 0x4de9u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x28u))), (c.r[2] & 0xFFFFu), 0, 2);
    // 004dee  je 0x4e81
    X86_AT(c, 0x4deeu);
    if (x86_cc(c, 4)) { goto L_4e81; }
    X86_TICK(c, 7);
    // 004df4  call 0x54b0
    X86_AT(c, 0x4df4u);
    push32(c, 0x4df9u); f_000054b0(c); X86_RET(c, 0x4df9u);
    X86_TICK(c, 15);
    // 004df9  inc dx
    X86_AT(c, 0x4df9u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_inc(c, v, 2)); }
    // 004dfb  mov bx, word ptr gs:[ebp + 0x434]
    X86_AT(c, 0x4dfbu);
    s16(c, 3, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x434u))));
    // 004e03  sub bx, 2
    X86_AT(c, 0x4e03u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_sub(c, v, 0x2u, 0, 2)); }
    // 004e07  cmp dx, bx
    X86_AT(c, 0x4e07u);
    (void)x86_sub(c, (c.r[2] & 0xFFFFu), (c.r[3] & 0xFFFFu), 0, 2);
    // 004e0a  jg 0x4e14
    X86_AT(c, 0x4e0au);
    if (x86_cc(c, 15)) { goto L_4e14; }
    X86_TICK(c, 7);
    // 004e0c  call 0x5700
    X86_AT(c, 0x4e0cu);
    push32(c, 0x4e11u); f_00005700(c); X86_RET(c, 0x4e11u);
    X86_TICK(c, 5);
    // 004e11  jae 0x4e28
    X86_AT(c, 0x4e11u);
    if (x86_cc(c, 3)) { goto L_4e28; }
    X86_TICK(c, 10);
    // 004e13  ret 
    X86_AT(c, 0x4e13u);
    c.eip = pop32(c); return;
L_4e14:
    X86_TICK(c, 12);
    // 004e14  cmp word ptr gs:[ebp + 0x434], dx
    X86_AT(c, 0x4e14u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x434u))), (c.r[2] & 0xFFFFu), 0, 2);
    // 004e1c  jge 0x4e28
    X86_AT(c, 0x4e1cu);
    if (x86_cc(c, 13)) { goto L_4e28; }
    X86_TICK(c, 11);
    // 004e1e  mov dx, word ptr gs:[ebp + 0x434]
    X86_AT(c, 0x4e1eu);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x434u))));
    // 004e26  jmp 0x4e81
    X86_AT(c, 0x4e26u);
    goto L_4e81;
L_4e28:
    X86_TICK(c, 6);
    // 004e28  mov cx, dx
    X86_AT(c, 0x4e28u);
    s16(c, 1, (c.r[2] & 0xFFFFu));
    // 004e2b  mov dx, word ptr gs:[ebp + 0x434]
    X86_AT(c, 0x4e2bu);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x434u))));
L_4e33:
    X86_TICK(c, 9);
    // 004e33  push ecx
    X86_AT(c, 0x4e33u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 004e34  call 0x50c4
    X86_AT(c, 0x4e34u);
    push32(c, 0x4e39u); f_000050c4(c); X86_RET(c, 0x4e39u);
    X86_TICK(c, 33);
    // 004e39  pop ecx
    X86_AT(c, 0x4e39u);
    { uint32_t v = pop32(c); c.r[1] = v; }
    // 004e3a  push edx
    X86_AT(c, 0x4e3au);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 004e3b  mov word ptr gs:[ebp + 0x222], cx
    X86_AT(c, 0x4e3bu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u)), (c.r[1] & 0xFFFFu));
    // 004e43  dec dx
    X86_AT(c, 0x4e43u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_dec(c, v, 2)); }
    // 004e45  mov word ptr gs:[ebp + 0x224], dx
    X86_AT(c, 0x4e45u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u)), (c.r[2] & 0xFFFFu));
    // 004e4d  push fs
    X86_AT(c, 0x4e4du);
    push32(c, c.sreg[4]);
    // 004e4f  push ds
    X86_AT(c, 0x4e4fu);
    push32(c, c.sreg[3]);
    // 004e50  push esi
    X86_AT(c, 0x4e50u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 004e51  push edi
    X86_AT(c, 0x4e51u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 004e52  push ebx
    X86_AT(c, 0x4e52u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 004e53  push ecx
    X86_AT(c, 0x4e53u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 004e54  push edx
    X86_AT(c, 0x4e54u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 004e55  call 0x8054
    X86_AT(c, 0x4e55u);
    push32(c, 0x4e5au); f_00008054(c); X86_RET(c, 0x4e5au);
    X86_TICK(c, 47);
    // 004e5a  pop edx
    X86_AT(c, 0x4e5au);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 004e5b  pop ecx
    X86_AT(c, 0x4e5bu);
    { uint32_t v = pop32(c); c.r[1] = v; }
    // 004e5c  pop ebx
    X86_AT(c, 0x4e5cu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 004e5d  pop edi
    X86_AT(c, 0x4e5du);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 004e5e  pop esi
    X86_AT(c, 0x4e5eu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 004e5f  pop ds
    X86_AT(c, 0x4e5fu);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 004e60  pop fs
    X86_AT(c, 0x4e60u);
    x86_load_seg(c, 4, pop32(c) & 0xFFFFu);
    // 004e62  bt dword ptr gs:[ebp + 0x43c], 0
    X86_AT(c, 0x4e62u);
    x86_bitop(c, 0, (c.sbase[5] + (uint32_t)(c.r[5] + 0x43Cu)), false, 0x0u, 4, nullptr, 0);
    // 004e6b  mov ebx, edx
    X86_AT(c, 0x4e6bu);
    c.r[3] = c.r[2];
    // 004e6d  mov edx, ecx
    X86_AT(c, 0x4e6du);
    c.r[2] = c.r[1];
    // 004e6f  call 0x570c
    X86_AT(c, 0x4e6fu);
    push32(c, 0x4e74u); f_0000570c(c); X86_RET(c, 0x4e74u);
    X86_TICK(c, 9);
    // 004e74  pop edx
    X86_AT(c, 0x4e74u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 004e75  jb 0x4e94
    X86_AT(c, 0x4e75u);
    if (x86_cc(c, 2)) { goto L_4e94; }
    X86_TICK(c, 12);
    // 004e77  cmp word ptr gs:[ebp + 0x436], dx
    X86_AT(c, 0x4e77u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x436u))), (c.r[2] & 0xFFFFu), 0, 2);
    // 004e7f  jl 0x4e95
    X86_AT(c, 0x4e7fu);
    if (x86_cc(c, 12)) { goto L_4e95; }
L_4e81:
    X86_TICK(c, 7);
    // 004e81  call 0x52b8
    X86_AT(c, 0x4e81u);
    push32(c, 0x4e86u); f_000052b8(c); X86_RET(c, 0x4e86u);
    X86_TICK(c, 14);
    // 004e86  mov cx, dx
    X86_AT(c, 0x4e86u);
    s16(c, 1, (c.r[2] & 0xFFFFu));
    // 004e89  cmp word ptr gs:[ebp + 0x436], dx
    X86_AT(c, 0x4e89u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x436u))), (c.r[2] & 0xFFFFu), 0, 2);
    // 004e91  jge 0x4e33
    X86_AT(c, 0x4e91u);
    if (x86_cc(c, 13)) { X86_POLL(c, 0x4e33u); goto L_4e33; }
    X86_TICK(c, 2);
    // 004e93  clc 
    X86_AT(c, 0x4e93u);
    c.fl &= ~X86_CF;
L_4e94:
    X86_TICK(c, 10);
    // 004e94  ret 
    X86_AT(c, 0x4e94u);
    c.eip = pop32(c); return;
L_4e95:
    X86_TICK(c, 17);
    // 004e95  mov ebx, edx
    X86_AT(c, 0x4e95u);
    c.r[3] = c.r[2];
    // 004e97  mov dx, word ptr gs:[ebp + 0x436]
    X86_AT(c, 0x4e97u);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x436u))));
    // 004e9f  add dx, 2
    X86_AT(c, 0x4e9fu);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, 0x2u, 0, 2)); }
    // 004ea3  dec bx
    X86_AT(c, 0x4ea3u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_dec(c, v, 2)); }
    // 004ea5  cmp dx, bx
    X86_AT(c, 0x4ea5u);
    (void)x86_sub(c, (c.r[2] & 0xFFFFu), (c.r[3] & 0xFFFFu), 0, 2);
    // 004ea8  jle 0x5700
    X86_AT(c, 0x4ea8u);
    if (x86_cc(c, 14)) { goto L_5700; }
    X86_TICK(c, 12);
    // 004eae  clc 
    X86_AT(c, 0x4eaeu);
    c.fl &= ~X86_CF;
    // 004eaf  ret 
    X86_AT(c, 0x4eafu);
    c.eip = pop32(c); return;
L_5700:
    X86_TICK(c, 36);
    // 005700  bt dword ptr gs:[ebp + 0x43c], 0
    X86_AT(c, 0x5700u);
    x86_bitop(c, 0, (c.sbase[5] + (uint32_t)(c.r[5] + 0x43Cu)), false, 0x0u, 4, nullptr, 0);
    // 005709  cmc 
    X86_AT(c, 0x5709u);
    c.fl ^= X86_CF;
    // 00570a  nop 
    X86_AT(c, 0x570au);
    // 00570b  nop 
    X86_AT(c, 0x570bu);
    // 00570c  pushfd 
    X86_AT(c, 0x570cu);
    push32(c, c.fl & 0x00FCFFFFu);
    // 00570d  mov eax, edi
    X86_AT(c, 0x570du);
    c.r[0] = c.r[7];
    // 00570f  add eax, 6
    X86_AT(c, 0x570fu);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0x6u, 0, 4); }
    // 005714  cmp dword ptr gs:[ebp + 0x414], eax
    X86_AT(c, 0x5714u);
    (void)x86_sub(c, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x414u))), c.r[0], 0, 4);
    // 00571b  jae 0x5724
    X86_AT(c, 0x571bu);
    if (x86_cc(c, 3)) { goto L_5724; }
    X86_TICK(c, 7);
    // 00571d  call 0x56a4
    X86_AT(c, 0x571du);
    push32(c, 0x5722u); f_000056a4(c); X86_RET(c, 0x5722u);
    X86_TICK(c, 5);
    // 005722  jb 0x5743
    X86_AT(c, 0x5722u);
    if (x86_cc(c, 2)) { goto L_5743; }
L_5724:
    X86_TICK(c, 19);
    // 005724  mov word ptr [edi + 2], dx
    X86_AT(c, 0x5724u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x2u)), (c.r[2] & 0xFFFFu));
    // 005728  mov word ptr [edi + 4], bx
    X86_AT(c, 0x5728u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x4u)), (c.r[3] & 0xFFFFu));
    // 00572c  mov ax, word ptr gs:[ebp + 0x438]
    X86_AT(c, 0x572cu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x438u))));
    // 005734  popfd 
    X86_AT(c, 0x5734u);
    x86_popfd(c, 4);
    // 005735  jae 0x573b
    X86_AT(c, 0x5735u);
    if (x86_cc(c, 3)) { goto L_573b; }
    X86_TICK(c, 2);
    // 005737  or ax, 0x4000
    X86_AT(c, 0x5737u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_logic(c, v | 0x4000u, 2)); }
L_573b:
    X86_TICK(c, 16);
    // 00573b  mov word ptr [edi], ax
    X86_AT(c, 0x573bu);
    wr16((c.sbase[3] + (uint32_t)(c.r[7])), (c.r[0] & 0xFFFFu));
    // 00573e  add edi, 6
    X86_AT(c, 0x573eu);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x6u, 0, 4); }
    // 005741  clc 
    X86_AT(c, 0x5741u);
    c.fl &= ~X86_CF;
    // 005742  ret 
    X86_AT(c, 0x5742u);
    c.eip = pop32(c); return;
L_5743:
    X86_TICK(c, 14);
    // 005743  pop eax
    X86_AT(c, 0x5743u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 005744  ret 
    X86_AT(c, 0x5744u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x4da4u, "ran off the end of a function");
}
void f_00004eb0(X86Cpu& c) {
    X86_TICK(c, 23);
    // 004eb0  mov byte ptr gs:[ebp + 0x43d], 0
    X86_AT(c, 0x4eb0u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x43Du)), 0x0u);
    // 004eb8  push edi
    X86_AT(c, 0x4eb8u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 004eb9  mov edi, esi
    X86_AT(c, 0x4eb9u);
    c.r[7] = c.r[6];
    // 004ebb  mov ax, word ptr gs:[ebp + 0x438]
    X86_AT(c, 0x4ebbu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x438u))));
    // 004ec3  bt dword ptr gs:[ebp + 0x43c], 0
    X86_AT(c, 0x4ec3u);
    x86_bitop(c, 0, (c.sbase[5] + (uint32_t)(c.r[5] + 0x43Cu)), false, 0x0u, 4, nullptr, 0);
    // 004ecc  jb 0x4ed2
    X86_AT(c, 0x4eccu);
    if (x86_cc(c, 2)) { goto L_4ed2; }
    X86_TICK(c, 2);
    // 004ece  or ax, 0x4000
    X86_AT(c, 0x4eceu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_logic(c, v | 0x4000u, 2)); }
L_4ed2:
    X86_TICK(c, 2);
    // 004ed2  mov ecx, 6
    X86_AT(c, 0x4ed2u);
    c.r[1] = 0x6u;
L_4ed7:
    X86_TICK(c, 12);
    // 004ed7  cmp byte ptr gs:[ebp + 0x43d], 1
    X86_AT(c, 0x4ed7u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x43Du))), 0x1u, 0, 1);
    // 004edf  jne 0x4eeb
    X86_AT(c, 0x4edfu);
    if (x86_cc(c, 5)) { goto L_4eeb; }
    X86_TICK(c, 4);
    // 004ee1  mov edi, esi
    X86_AT(c, 0x4ee1u);
    c.r[7] = c.r[6];
    // 004ee3  mov byte ptr gs:[ebp + 0x43d], 0
    X86_AT(c, 0x4ee3u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x43Du)), 0x0u);
L_4eeb:
    X86_TICK(c, 12);
    // 004eeb  cmp dword ptr [esp], edi
    X86_AT(c, 0x4eebu);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[4]))), c.r[7], 0, 4);
    // 004eee  jbe 0x4f35
    X86_AT(c, 0x4eeeu);
    if (x86_cc(c, 6)) { goto L_4f35; }
    X86_TICK(c, 12);
    // 004ef0  cmp word ptr [edi], ax
    X86_AT(c, 0x4ef0u);
    (void)x86_sub(c, rd16((c.sbase[3] + (uint32_t)(c.r[7]))), (c.r[0] & 0xFFFFu), 0, 2);
    // 004ef3  je 0x4f1d
    X86_AT(c, 0x4ef3u);
    if (x86_cc(c, 4)) { goto L_4f1d; }
    X86_TICK(c, 14);
    // 004ef5  add edi, ecx
    X86_AT(c, 0x4ef5u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, c.r[1], 0, 4); }
    // 004ef7  cmp dword ptr [esp], edi
    X86_AT(c, 0x4ef7u);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[4]))), c.r[7], 0, 4);
    // 004efa  jbe 0x4f35
    X86_AT(c, 0x4efau);
    if (x86_cc(c, 6)) { goto L_4f35; }
    X86_TICK(c, 12);
    // 004efc  cmp word ptr [edi], ax
    X86_AT(c, 0x4efcu);
    (void)x86_sub(c, rd16((c.sbase[3] + (uint32_t)(c.r[7]))), (c.r[0] & 0xFFFFu), 0, 2);
    // 004eff  je 0x4f1d
    X86_AT(c, 0x4effu);
    if (x86_cc(c, 4)) { goto L_4f1d; }
    X86_TICK(c, 14);
    // 004f01  add edi, ecx
    X86_AT(c, 0x4f01u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, c.r[1], 0, 4); }
    // 004f03  cmp dword ptr [esp], edi
    X86_AT(c, 0x4f03u);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[4]))), c.r[7], 0, 4);
    // 004f06  jbe 0x4f35
    X86_AT(c, 0x4f06u);
    if (x86_cc(c, 6)) { goto L_4f35; }
    X86_TICK(c, 12);
    // 004f08  cmp word ptr [edi], ax
    X86_AT(c, 0x4f08u);
    (void)x86_sub(c, rd16((c.sbase[3] + (uint32_t)(c.r[7]))), (c.r[0] & 0xFFFFu), 0, 2);
    // 004f0b  je 0x4f1d
    X86_AT(c, 0x4f0bu);
    if (x86_cc(c, 4)) { goto L_4f1d; }
    X86_TICK(c, 14);
    // 004f0d  add edi, ecx
    X86_AT(c, 0x4f0du);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, c.r[1], 0, 4); }
    // 004f0f  cmp dword ptr [esp], edi
    X86_AT(c, 0x4f0fu);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[4]))), c.r[7], 0, 4);
    // 004f12  jbe 0x4f35
    X86_AT(c, 0x4f12u);
    if (x86_cc(c, 6)) { goto L_4f35; }
    X86_TICK(c, 12);
    // 004f14  cmp word ptr [edi], ax
    X86_AT(c, 0x4f14u);
    (void)x86_sub(c, rd16((c.sbase[3] + (uint32_t)(c.r[7]))), (c.r[0] & 0xFFFFu), 0, 2);
    // 004f17  je 0x4f1d
    X86_AT(c, 0x4f17u);
    if (x86_cc(c, 4)) { goto L_4f1d; }
    X86_TICK(c, 9);
    // 004f19  add edi, ecx
    X86_AT(c, 0x4f19u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, c.r[1], 0, 4); }
    // 004f1b  jmp 0x4eeb
    X86_AT(c, 0x4f1bu);
    X86_POLL(c, 0x4eebu); goto L_4eeb;
L_4f1d:
    X86_TICK(c, 14);
    // 004f1d  mov edx, dword ptr gs:[ebp + 0x434]
    X86_AT(c, 0x4f1du);
    c.r[2] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x434u)));
    // 004f24  shld ebx, edx, 0x10
    X86_AT(c, 0x4f24u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_double(c, true, v, c.r[2], 0x10u, 4, w); if (w) c.r[3] = r; }
    // 004f28  call 0x4f3c
    X86_AT(c, 0x4f28u);
    push32(c, 0x4f2du); f_00004f3c(c); X86_RET(c, 0x4f2du);
    X86_TICK(c, 5);
    // 004f2d  je 0x4f38
    X86_AT(c, 0x4f2du);
    if (x86_cc(c, 4)) { goto L_4f38; }
    X86_TICK(c, 5);
    // 004f2f  jb 0x4f38
    X86_AT(c, 0x4f2fu);
    if (x86_cc(c, 2)) { goto L_4f38; }
    X86_TICK(c, 9);
    // 004f31  add edi, ecx
    X86_AT(c, 0x4f31u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, c.r[1], 0, 4); }
    // 004f33  jmp 0x4ed7
    X86_AT(c, 0x4f33u);
    X86_POLL(c, 0x4ed7u); goto L_4ed7;
L_4f35:
    X86_TICK(c, 4);
    // 004f35  xor ebx, ebx
    X86_AT(c, 0x4f35u);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v ^ c.r[3], 4); }
    // 004f37  inc ebx
    X86_AT(c, 0x4f37u);
    { uint32_t v = c.r[3]; c.r[3] = x86_inc(c, v, 4); }
L_4f38:
    X86_TICK(c, 14);
    // 004f38  pop edi
    X86_AT(c, 0x4f38u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 004f39  ret 
    X86_AT(c, 0x4f39u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x4eb0u, "ran off the end of a function");
}
void f_00004f3c(X86Cpu& c) {
    X86_TICK(c, 12);
    // 004f3c  cmp word ptr [edi + 2], bx
    X86_AT(c, 0x4f3cu);
    (void)x86_sub(c, rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x2u))), (c.r[3] & 0xFFFFu), 0, 2);
    // 004f40  jge 0x4f88
    X86_AT(c, 0x4f40u);
    if (x86_cc(c, 13)) { goto L_4f88; }
    X86_TICK(c, 12);
    // 004f42  cmp word ptr [edi + 4], dx
    X86_AT(c, 0x4f42u);
    (void)x86_sub(c, rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x4u))), (c.r[2] & 0xFFFFu), 0, 2);
    // 004f46  jl 0x4f88
    X86_AT(c, 0x4f46u);
    if (x86_cc(c, 12)) { goto L_4f88; }
    X86_TICK(c, 12);
    // 004f48  cmp word ptr [edi + 2], dx
    X86_AT(c, 0x4f48u);
    (void)x86_sub(c, rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x2u))), (c.r[2] & 0xFFFFu), 0, 2);
    // 004f4c  jne 0x4f5c
    X86_AT(c, 0x4f4cu);
    if (x86_cc(c, 5)) { goto L_4f5c; }
    X86_TICK(c, 12);
    // 004f4e  cmp word ptr [edi + 4], bx
    X86_AT(c, 0x4f4eu);
    (void)x86_sub(c, rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x4u))), (c.r[3] & 0xFFFFu), 0, 2);
    // 004f52  je 0x4f8c
    X86_AT(c, 0x4f52u);
    if (x86_cc(c, 4)) { goto L_4f8c; }
    X86_TICK(c, 5);
    // 004f54  jg 0x502c
    X86_AT(c, 0x4f54u);
    if (x86_cc(c, 15)) { goto L_502c; }
    X86_TICK(c, 7);
    // 004f5a  jmp 0x4f98
    X86_AT(c, 0x4f5au);
    goto L_4f98;
L_4f5c:
    X86_TICK(c, 12);
    // 004f5c  cmp word ptr [edi + 2], dx
    X86_AT(c, 0x4f5cu);
    (void)x86_sub(c, rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x2u))), (c.r[2] & 0xFFFFu), 0, 2);
    // 004f60  jl 0x4f70
    X86_AT(c, 0x4f60u);
    if (x86_cc(c, 12)) { goto L_4f70; }
    X86_TICK(c, 12);
    // 004f62  cmp word ptr [edi + 4], bx
    X86_AT(c, 0x4f62u);
    (void)x86_sub(c, rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x4u))), (c.r[3] & 0xFFFFu), 0, 2);
    // 004f66  je 0x4fb0
    X86_AT(c, 0x4f66u);
    if (x86_cc(c, 4)) { goto L_4fb0; }
    X86_TICK(c, 5);
    // 004f68  jg 0x5084
    X86_AT(c, 0x4f68u);
    if (x86_cc(c, 15)) { goto L_5084; }
    X86_TICK(c, 7);
    // 004f6e  jmp 0x4fc8
    X86_AT(c, 0x4f6eu);
    goto L_4fc8;
L_4f70:
    X86_TICK(c, 12);
    // 004f70  cmp word ptr [edi + 4], bx
    X86_AT(c, 0x4f70u);
    (void)x86_sub(c, rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x4u))), (c.r[3] & 0xFFFFu), 0, 2);
    // 004f74  je 0x5040
    X86_AT(c, 0x4f74u);
    if (x86_cc(c, 4)) { goto L_5040; }
    X86_TICK(c, 5);
    // 004f7a  jg 0x5054
    X86_AT(c, 0x4f7au);
    if (x86_cc(c, 15)) { goto L_5054; }
    X86_TICK(c, 7);
    // 004f80  jmp 0x50a4
    X86_AT(c, 0x4f80u);
    goto L_50a4;
L_4f88:
    X86_TICK(c, 14);
    // 004f88  xor ebx, ebx
    X86_AT(c, 0x4f88u);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v ^ c.r[3], 4); }
    // 004f8a  inc ebx
    X86_AT(c, 0x4f8au);
    { uint32_t v = c.r[3]; c.r[3] = x86_inc(c, v, 4); }
    // 004f8b  ret 
    X86_AT(c, 0x4f8bu);
    c.eip = pop32(c); return;
L_4f8c:
    X86_TICK(c, 18);
    // 004f8c  mov word ptr [edi], 0x8000
    X86_AT(c, 0x4f8cu);
    wr16((c.sbase[3] + (uint32_t)(c.r[7])), 0x8000u);
    // 004f91  xor ebx, ebx
    X86_AT(c, 0x4f91u);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v ^ c.r[3], 4); }
    // 004f93  inc ebx
    X86_AT(c, 0x4f93u);
    { uint32_t v = c.r[3]; c.r[3] = x86_inc(c, v, 4); }
    // 004f94  stc 
    X86_AT(c, 0x4f94u);
    c.fl |= X86_CF;
    // 004f95  ret 
    X86_AT(c, 0x4f95u);
    c.eip = pop32(c); return;
L_4f98:
    X86_TICK(c, 24);
    // 004f98  mov word ptr [edi], 0x8000
    X86_AT(c, 0x4f98u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7])), 0x8000u);
    // 004f9d  mov bx, word ptr [edi + 4]
    X86_AT(c, 0x4f9du);
    s16(c, 3, rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x4u))));
    // 004fa1  inc bx
    X86_AT(c, 0x4fa1u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_inc(c, v, 2)); }
    // 004fa3  mov word ptr gs:[ebp + 0x434], bx
    X86_AT(c, 0x4fa3u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x434u)), (c.r[3] & 0xFFFFu));
    // 004fab  xor ebx, ebx
    X86_AT(c, 0x4fabu);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v ^ c.r[3], 4); }
    // 004fad  inc ebx
    X86_AT(c, 0x4fadu);
    { uint32_t v = c.r[3]; c.r[3] = x86_inc(c, v, 4); }
    // 004fae  ret 
    X86_AT(c, 0x4faeu);
    c.eip = pop32(c); return;
L_4fb0:
    X86_TICK(c, 24);
    // 004fb0  mov word ptr [edi], 0x8000
    X86_AT(c, 0x4fb0u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7])), 0x8000u);
    // 004fb5  mov bx, word ptr [edi + 2]
    X86_AT(c, 0x4fb5u);
    s16(c, 3, rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x2u))));
    // 004fb9  dec bx
    X86_AT(c, 0x4fb9u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_dec(c, v, 2)); }
    // 004fbb  mov word ptr gs:[ebp + 0x436], bx
    X86_AT(c, 0x4fbbu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x436u)), (c.r[3] & 0xFFFFu));
    // 004fc3  xor ebx, ebx
    X86_AT(c, 0x4fc3u);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v ^ c.r[3], 4); }
    // 004fc5  inc ebx
    X86_AT(c, 0x4fc5u);
    { uint32_t v = c.r[3]; c.r[3] = x86_inc(c, v, 4); }
    // 004fc6  ret 
    X86_AT(c, 0x4fc6u);
    c.eip = pop32(c); return;
L_4fc8:
    X86_TICK(c, 38);
    // 004fc8  mov word ptr [edi], 0x8000
    X86_AT(c, 0x4fc8u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7])), 0x8000u);
    // 004fcd  mov bx, word ptr gs:[ebp + 0x436]
    X86_AT(c, 0x4fcdu);
    s16(c, 3, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x436u))));
    // 004fd5  mov dx, word ptr [edi + 2]
    X86_AT(c, 0x4fd5u);
    s16(c, 2, rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x2u))));
    // 004fd9  dec dx
    X86_AT(c, 0x4fd9u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_dec(c, v, 2)); }
    // 004fdb  mov word ptr gs:[ebp + 0x436], dx
    X86_AT(c, 0x4fdbu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x436u)), (c.r[2] & 0xFFFFu));
    // 004fe3  mov dx, word ptr [edi + 4]
    X86_AT(c, 0x4fe3u);
    s16(c, 2, rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x4u))));
    // 004fe7  inc dx
    X86_AT(c, 0x4fe7u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_inc(c, v, 2)); }
    // 004fe9  push ax
    X86_AT(c, 0x4fe9u);
    { uint32_t v = (c.r[0] & 0xFFFFu); push16(c, v); }
    // 004feb  push word ptr gs:[ebp + 0x438]
    X86_AT(c, 0x4febu);
    { uint32_t v = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x438u))); push16(c, v); }
    // 004ff3  mov al, byte ptr gs:[ebp + 0x43c]
    X86_AT(c, 0x4ff3u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x43Cu))));
    // 004ffa  or al, al
    X86_AT(c, 0x4ffau);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v | g8(c, 0), 1)); }
    // 004ffc  jne 0x5008
    X86_AT(c, 0x4ffcu);
    if (x86_cc(c, 5)) { goto L_5008; }
    X86_TICK(c, 13);
    // 004ffe  inc word ptr gs:[ebp + 0x438]
    X86_AT(c, 0x4ffeu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x438u)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
    // 005006  jmp 0x5010
    X86_AT(c, 0x5006u);
    goto L_5010;
L_5008:
    X86_TICK(c, 6);
    // 005008  dec word ptr gs:[ebp + 0x438]
    X86_AT(c, 0x5008u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x438u)); uint32_t v = rd16(ea); wr16(ea, x86_dec(c, v, 2)); }
L_5010:
    X86_TICK(c, 10);
    // 005010  shr al, 1
    X86_AT(c, 0x5010u);
    { uint32_t v = g8(c, 0); bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 1, w); if (w) s8(c, 0, r); }
    // 005012  call 0x570c
    X86_AT(c, 0x5012u);
    push32(c, 0x5017u); f_0000570c(c); X86_RET(c, 0x5017u);
    X86_TICK(c, 14);
    // 005017  pop word ptr gs:[ebp + 0x438]
    X86_AT(c, 0x5017u);
    { uint32_t v = pop16(c); wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x438u)), v); }
    // 00501f  pop ax
    X86_AT(c, 0x501fu);
    { uint32_t v = pop16(c); s16(c, 0, v); }
    // 005021  jae 0x5026
    X86_AT(c, 0x5021u);
    if (x86_cc(c, 3)) { goto L_5026; }
    X86_TICK(c, 12);
    // 005023  xor ebx, ebx
    X86_AT(c, 0x5023u);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v ^ c.r[3], 4); }
    // 005025  ret 
    X86_AT(c, 0x5025u);
    c.eip = pop32(c); return;
L_5026:
    X86_TICK(c, 14);
    // 005026  xor ebx, ebx
    X86_AT(c, 0x5026u);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v ^ c.r[3], 4); }
    // 005028  inc ebx
    X86_AT(c, 0x5028u);
    { uint32_t v = c.r[3]; c.r[3] = x86_inc(c, v, 4); }
    // 005029  ret 
    X86_AT(c, 0x5029u);
    c.eip = pop32(c); return;
L_502c:
    X86_TICK(c, 24);
    // 00502c  mov dx, word ptr gs:[ebp + 0x436]
    X86_AT(c, 0x502cu);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x436u))));
    // 005034  inc dx
    X86_AT(c, 0x5034u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_inc(c, v, 2)); }
    // 005036  mov word ptr [edi + 2], dx
    X86_AT(c, 0x5036u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x2u)), (c.r[2] & 0xFFFFu));
    // 00503a  xor ebx, ebx
    X86_AT(c, 0x503au);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v ^ c.r[3], 4); }
    // 00503c  inc ebx
    X86_AT(c, 0x503cu);
    { uint32_t v = c.r[3]; c.r[3] = x86_inc(c, v, 4); }
    // 00503d  stc 
    X86_AT(c, 0x503du);
    c.fl |= X86_CF;
    // 00503e  ret 
    X86_AT(c, 0x503eu);
    c.eip = pop32(c); return;
L_5040:
    X86_TICK(c, 24);
    // 005040  mov dx, word ptr gs:[ebp + 0x434]
    X86_AT(c, 0x5040u);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x434u))));
    // 005048  dec dx
    X86_AT(c, 0x5048u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_dec(c, v, 2)); }
    // 00504a  mov word ptr [edi + 4], dx
    X86_AT(c, 0x504au);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x4u)), (c.r[2] & 0xFFFFu));
    // 00504e  xor ebx, ebx
    X86_AT(c, 0x504eu);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v ^ c.r[3], 4); }
    // 005050  inc ebx
    X86_AT(c, 0x5050u);
    { uint32_t v = c.r[3]; c.r[3] = x86_inc(c, v, 4); }
    // 005051  stc 
    X86_AT(c, 0x5051u);
    c.fl |= X86_CF;
    // 005052  ret 
    X86_AT(c, 0x5052u);
    c.eip = pop32(c); return;
L_5054:
    X86_TICK(c, 27);
    // 005054  mov bx, word ptr [edi + 4]
    X86_AT(c, 0x5054u);
    s16(c, 3, rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x4u))));
    // 005058  mov dx, word ptr gs:[ebp + 0x434]
    X86_AT(c, 0x5058u);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x434u))));
    // 005060  dec dx
    X86_AT(c, 0x5060u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_dec(c, v, 2)); }
    // 005062  mov word ptr [edi + 4], dx
    X86_AT(c, 0x5062u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x4u)), (c.r[2] & 0xFFFFu));
    // 005066  mov dx, word ptr gs:[ebp + 0x436]
    X86_AT(c, 0x5066u);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x436u))));
    // 00506e  inc dx
    X86_AT(c, 0x506eu);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_inc(c, v, 2)); }
    // 005070  push eax
    X86_AT(c, 0x5070u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 005071  call 0x5700
    X86_AT(c, 0x5071u);
    push32(c, 0x5076u); f_00005700(c); X86_RET(c, 0x5076u);
    X86_TICK(c, 9);
    // 005076  pop eax
    X86_AT(c, 0x5076u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 005077  jae 0x507d
    X86_AT(c, 0x5077u);
    if (x86_cc(c, 3)) { goto L_507d; }
    X86_TICK(c, 9);
    // 005079  xor ebx, ebx
    X86_AT(c, 0x5079u);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v ^ c.r[3], 4); }
    // 00507b  jmp 0x5080
    X86_AT(c, 0x507bu);
    goto L_5080;
L_507d:
    X86_TICK(c, 4);
    // 00507d  xor ebx, ebx
    X86_AT(c, 0x507du);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v ^ c.r[3], 4); }
    // 00507f  inc ebx
    X86_AT(c, 0x507fu);
    { uint32_t v = c.r[3]; c.r[3] = x86_inc(c, v, 4); }
L_5080:
    X86_TICK(c, 12);
    // 005080  stc 
    X86_AT(c, 0x5080u);
    c.fl |= X86_CF;
    // 005081  ret 
    X86_AT(c, 0x5081u);
    c.eip = pop32(c); return;
L_5084:
    X86_TICK(c, 30);
    // 005084  mov bx, word ptr [edi + 2]
    X86_AT(c, 0x5084u);
    s16(c, 3, rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x2u))));
    // 005088  mov dx, word ptr gs:[ebp + 0x436]
    X86_AT(c, 0x5088u);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x436u))));
    // 005090  inc dx
    X86_AT(c, 0x5090u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_inc(c, v, 2)); }
    // 005092  mov word ptr [edi + 2], dx
    X86_AT(c, 0x5092u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x2u)), (c.r[2] & 0xFFFFu));
    // 005096  dec bx
    X86_AT(c, 0x5096u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_dec(c, v, 2)); }
    // 005098  mov word ptr gs:[ebp + 0x436], bx
    X86_AT(c, 0x5098u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x436u)), (c.r[3] & 0xFFFFu));
    // 0050a0  xor ebx, ebx
    X86_AT(c, 0x50a0u);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v ^ c.r[3], 4); }
    // 0050a2  inc ebx
    X86_AT(c, 0x50a2u);
    { uint32_t v = c.r[3]; c.r[3] = x86_inc(c, v, 4); }
    // 0050a3  ret 
    X86_AT(c, 0x50a3u);
    c.eip = pop32(c); return;
L_50a4:
    X86_TICK(c, 30);
    // 0050a4  mov bx, word ptr [edi + 4]
    X86_AT(c, 0x50a4u);
    s16(c, 3, rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x4u))));
    // 0050a8  mov dx, word ptr gs:[ebp + 0x434]
    X86_AT(c, 0x50a8u);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x434u))));
    // 0050b0  dec dx
    X86_AT(c, 0x50b0u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_dec(c, v, 2)); }
    // 0050b2  mov word ptr [edi + 4], dx
    X86_AT(c, 0x50b2u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x4u)), (c.r[2] & 0xFFFFu));
    // 0050b6  inc bx
    X86_AT(c, 0x50b6u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_inc(c, v, 2)); }
    // 0050b8  mov word ptr gs:[ebp + 0x434], bx
    X86_AT(c, 0x50b8u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x434u)), (c.r[3] & 0xFFFFu));
    // 0050c0  xor ebx, ebx
    X86_AT(c, 0x50c0u);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v ^ c.r[3], 4); }
    // 0050c2  inc ebx
    X86_AT(c, 0x50c2u);
    { uint32_t v = c.r[3]; c.r[3] = x86_inc(c, v, 4); }
    // 0050c3  ret 
    X86_AT(c, 0x50c3u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x4f3cu, "ran off the end of a function");
}
void f_000050c4(X86Cpu& c) {
    X86_TICK(c, 26);
    // 0050c4  push esi
    X86_AT(c, 0x50c4u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0050c5  push edi
    X86_AT(c, 0x50c5u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0050c6  movzx ebx, dx
    X86_AT(c, 0x50c6u);
    c.r[3] = (c.r[2] & 0xFFFFu);
    // 0050c9  mov dx, word ptr gs:[ebp + 0x2c]
    X86_AT(c, 0x50c9u);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu))));
    // 0050ce  mov edi, dword ptr gs:[ebp + 0x2b4]
    X86_AT(c, 0x50ceu);
    c.r[7] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2B4u)));
    // 0050d5  mov esi, dword ptr gs:[ebp + 0x418]
    X86_AT(c, 0x50d5u);
    c.r[6] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x418u)));
    // 0050dc  call dword ptr gs:[ebp + 0x41c]
    X86_AT(c, 0x50dcu);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x41Cu))); push32(c, 0x50e3u); x86_call(c, t); X86_RET(c, 0x50e3u); }
    X86_TICK(c, 20);
    // 0050e3  mov edx, ebx
    X86_AT(c, 0x50e3u);
    c.r[2] = c.r[3];
    // 0050e5  pop edi
    X86_AT(c, 0x50e5u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0050e6  pop esi
    X86_AT(c, 0x50e6u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0050e7  ret 
    X86_AT(c, 0x50e7u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x50c4u, "ran off the end of a function");
}
void f_000052b8(X86Cpu& c) {
    X86_TICK(c, 26);
    // 0052b8  push esi
    X86_AT(c, 0x52b8u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0052b9  push edi
    X86_AT(c, 0x52b9u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0052ba  movzx ebx, dx
    X86_AT(c, 0x52bau);
    c.r[3] = (c.r[2] & 0xFFFFu);
    // 0052bd  mov dx, word ptr gs:[ebp + 0x43a]
    X86_AT(c, 0x52bdu);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x43Au))));
    // 0052c5  mov edi, dword ptr gs:[ebp + 0x2b4]
    X86_AT(c, 0x52c5u);
    c.r[7] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2B4u)));
    // 0052cc  mov esi, dword ptr gs:[ebp + 0x418]
    X86_AT(c, 0x52ccu);
    c.r[6] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x418u)));
    // 0052d3  call dword ptr gs:[ebp + 0x420]
    X86_AT(c, 0x52d3u);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x420u))); push32(c, 0x52dau); x86_call(c, t); X86_RET(c, 0x52dau); }
    X86_TICK(c, 20);
    // 0052da  mov edx, ebx
    X86_AT(c, 0x52dau);
    c.r[2] = c.r[3];
    // 0052dc  pop edi
    X86_AT(c, 0x52dcu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0052dd  pop esi
    X86_AT(c, 0x52ddu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0052de  ret 
    X86_AT(c, 0x52deu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x52b8u, "ran off the end of a function");
}
void f_000054b0(X86Cpu& c) {
    X86_TICK(c, 26);
    // 0054b0  push esi
    X86_AT(c, 0x54b0u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0054b1  push edi
    X86_AT(c, 0x54b1u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0054b2  movzx ebx, dx
    X86_AT(c, 0x54b2u);
    c.r[3] = (c.r[2] & 0xFFFFu);
    // 0054b5  mov dx, word ptr gs:[ebp + 0x28]
    X86_AT(c, 0x54b5u);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x28u))));
    // 0054ba  mov edi, dword ptr gs:[ebp + 0x2b4]
    X86_AT(c, 0x54bau);
    c.r[7] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2B4u)));
    // 0054c1  mov esi, dword ptr gs:[ebp + 0x418]
    X86_AT(c, 0x54c1u);
    c.r[6] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x418u)));
    // 0054c8  call dword ptr gs:[ebp + 0x424]
    X86_AT(c, 0x54c8u);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x424u))); push32(c, 0x54cfu); x86_call(c, t); X86_RET(c, 0x54cfu); }
    X86_TICK(c, 20);
    // 0054cf  mov edx, ebx
    X86_AT(c, 0x54cfu);
    c.r[2] = c.r[3];
    // 0054d1  pop edi
    X86_AT(c, 0x54d1u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0054d2  pop esi
    X86_AT(c, 0x54d2u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0054d3  ret 
    X86_AT(c, 0x54d3u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x54b0u, "ran off the end of a function");
}
void f_000056a4(X86Cpu& c) {
    X86_TICK(c, 22);
    // 0056a4  push ecx
    X86_AT(c, 0x56a4u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 0056a5  push ebx
    X86_AT(c, 0x56a5u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0056a6  push eax
    X86_AT(c, 0x56a6u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0056a7  mov ebx, edi
    X86_AT(c, 0x56a7u);
    c.r[3] = c.r[7];
    // 0056a9  mov edi, dword ptr gs:[ebp + 0x410]
    X86_AT(c, 0x56a9u);
    c.r[7] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x410u)));
    // 0056b0  mov ecx, esi
    X86_AT(c, 0x56b0u);
    c.r[1] = c.r[6];
    // 0056b2  sub ecx, edi
    X86_AT(c, 0x56b2u);
    { uint32_t v = c.r[1]; c.r[1] = x86_sub(c, v, c.r[7], 0, 4); }
    // 0056b4  push es
    X86_AT(c, 0x56b4u);
    push32(c, c.sreg[0]);
    // 0056b5  mov eax, ss
    X86_AT(c, 0x56b5u);
    c.r[0] = (uint32_t)c.sreg[2];
    // 0056b7  mov es, eax
    X86_AT(c, 0x56b7u);
    x86_load_seg(c, 0, (c.r[0] & 0xFFFFu) & 0xFFFFu);
L_56b9:
    X86_TICK(c, 7);
    // 0056b9  cmp esi, ebx
    X86_AT(c, 0x56b9u);
    (void)x86_sub(c, c.r[6], c.r[3], 0, 4);
    // 0056bb  jae 0x56d1
    X86_AT(c, 0x56bbu);
    if (x86_cc(c, 3)) { goto L_56d1; }
    X86_TICK(c, 12);
    // 0056bd  test word ptr [esi], 0x8000
    X86_AT(c, 0x56bdu);
    (void)x86_logic(c, rd16((c.sbase[3] + (uint32_t)(c.r[6]))) & 0x8000u, 2);
    // 0056c2  jne 0x56c9
    X86_AT(c, 0x56c2u);
    if (x86_cc(c, 5)) { goto L_56c9; }
    X86_TICK(c, 21);
    // 0056c4  movsd dword ptr es:[edi], dword ptr [esi]
    X86_AT(c, 0x56c4u);
    x86_string(c, 0, 4, 0, 4, 3);
    // 0056c5  movsw word ptr es:[edi], word ptr [esi]
    X86_AT(c, 0x56c5u);
    x86_string(c, 0, 2, 0, 4, 3);
    // 0056c7  jmp 0x56b9
    X86_AT(c, 0x56c7u);
    X86_POLL(c, 0x56b9u); goto L_56b9;
L_56c9:
    X86_TICK(c, 11);
    // 0056c9  add ecx, 6
    X86_AT(c, 0x56c9u);
    { uint32_t v = c.r[1]; c.r[1] = x86_add(c, v, 0x6u, 0, 4); }
    // 0056cc  add esi, 6
    X86_AT(c, 0x56ccu);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x6u, 0, 4); }
    // 0056cf  jmp 0x56b9
    X86_AT(c, 0x56cfu);
    X86_POLL(c, 0x56b9u); goto L_56b9;
L_56d1:
    X86_TICK(c, 24);
    // 0056d1  pop es
    X86_AT(c, 0x56d1u);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 0056d2  mov esi, dword ptr gs:[ebp + 0x410]
    X86_AT(c, 0x56d2u);
    c.r[6] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x410u)));
    // 0056d9  sub ebx, ecx
    X86_AT(c, 0x56d9u);
    { uint32_t v = c.r[3]; c.r[3] = x86_sub(c, v, c.r[1], 0, 4); }
    // 0056db  xor al, al
    X86_AT(c, 0x56dbu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 0056dd  cmp dword ptr gs:[ebp + 0x42c], ebx
    X86_AT(c, 0x56ddu);
    (void)x86_sub(c, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x42Cu))), c.r[3], 0, 4);
    // 0056e4  jae 0x56e8
    X86_AT(c, 0x56e4u);
    if (x86_cc(c, 3)) { goto L_56e8; }
    X86_TICK(c, 2);
    // 0056e6  inc al
    X86_AT(c, 0x56e6u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_inc(c, v, 1)); }
L_56e8:
    X86_TICK(c, 32);
    // 0056e8  mov byte ptr gs:[ebp + 0x428], al
    X86_AT(c, 0x56e8u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x428u)), g8(c, 0));
    // 0056ef  neg ecx
    X86_AT(c, 0x56efu);
    { uint32_t v = c.r[1]; c.r[1] = x86_neg(c, v, 4); }
    // 0056f1  cmc 
    X86_AT(c, 0x56f1u);
    c.fl ^= X86_CF;
    // 0056f2  mov edi, ebx
    X86_AT(c, 0x56f2u);
    c.r[7] = c.r[3];
    // 0056f4  pop eax
    X86_AT(c, 0x56f4u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 0056f5  pop ebx
    X86_AT(c, 0x56f5u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0056f6  pop ecx
    X86_AT(c, 0x56f6u);
    { uint32_t v = pop32(c); c.r[1] = v; }
    // 0056f7  mov byte ptr gs:[ebp + 0x43d], 1
    X86_AT(c, 0x56f7u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x43Du)), 0x1u);
    // 0056ff  ret 
    X86_AT(c, 0x56ffu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x56a4u, "ran off the end of a function");
}
void f_00005700(X86Cpu& c) {
    X86_TICK(c, 36);
    // 005700  bt dword ptr gs:[ebp + 0x43c], 0
    X86_AT(c, 0x5700u);
    x86_bitop(c, 0, (c.sbase[5] + (uint32_t)(c.r[5] + 0x43Cu)), false, 0x0u, 4, nullptr, 0);
    // 005709  cmc 
    X86_AT(c, 0x5709u);
    c.fl ^= X86_CF;
    // 00570a  nop 
    X86_AT(c, 0x570au);
    // 00570b  nop 
    X86_AT(c, 0x570bu);
    // 00570c  pushfd 
    X86_AT(c, 0x570cu);
    push32(c, c.fl & 0x00FCFFFFu);
    // 00570d  mov eax, edi
    X86_AT(c, 0x570du);
    c.r[0] = c.r[7];
    // 00570f  add eax, 6
    X86_AT(c, 0x570fu);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0x6u, 0, 4); }
    // 005714  cmp dword ptr gs:[ebp + 0x414], eax
    X86_AT(c, 0x5714u);
    (void)x86_sub(c, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x414u))), c.r[0], 0, 4);
    // 00571b  jae 0x5724
    X86_AT(c, 0x571bu);
    if (x86_cc(c, 3)) { goto L_5724; }
    X86_TICK(c, 7);
    // 00571d  call 0x56a4
    X86_AT(c, 0x571du);
    push32(c, 0x5722u); f_000056a4(c); X86_RET(c, 0x5722u);
    X86_TICK(c, 5);
    // 005722  jb 0x5743
    X86_AT(c, 0x5722u);
    if (x86_cc(c, 2)) { goto L_5743; }
L_5724:
    X86_TICK(c, 19);
    // 005724  mov word ptr [edi + 2], dx
    X86_AT(c, 0x5724u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x2u)), (c.r[2] & 0xFFFFu));
    // 005728  mov word ptr [edi + 4], bx
    X86_AT(c, 0x5728u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x4u)), (c.r[3] & 0xFFFFu));
    // 00572c  mov ax, word ptr gs:[ebp + 0x438]
    X86_AT(c, 0x572cu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x438u))));
    // 005734  popfd 
    X86_AT(c, 0x5734u);
    x86_popfd(c, 4);
    // 005735  jae 0x573b
    X86_AT(c, 0x5735u);
    if (x86_cc(c, 3)) { goto L_573b; }
    X86_TICK(c, 2);
    // 005737  or ax, 0x4000
    X86_AT(c, 0x5737u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_logic(c, v | 0x4000u, 2)); }
L_573b:
    X86_TICK(c, 16);
    // 00573b  mov word ptr [edi], ax
    X86_AT(c, 0x573bu);
    wr16((c.sbase[3] + (uint32_t)(c.r[7])), (c.r[0] & 0xFFFFu));
    // 00573e  add edi, 6
    X86_AT(c, 0x573eu);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x6u, 0, 4); }
    // 005741  clc 
    X86_AT(c, 0x5741u);
    c.fl &= ~X86_CF;
    // 005742  ret 
    X86_AT(c, 0x5742u);
    c.eip = pop32(c); return;
L_5743:
    X86_TICK(c, 14);
    // 005743  pop eax
    X86_AT(c, 0x5743u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 005744  ret 
    X86_AT(c, 0x5744u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x5700u, "ran off the end of a function");
}
void f_0000570c(X86Cpu& c) {
    X86_TICK(c, 22);
    // 00570c  pushfd 
    X86_AT(c, 0x570cu);
    push32(c, c.fl & 0x00FCFFFFu);
    // 00570d  mov eax, edi
    X86_AT(c, 0x570du);
    c.r[0] = c.r[7];
    // 00570f  add eax, 6
    X86_AT(c, 0x570fu);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0x6u, 0, 4); }
    // 005714  cmp dword ptr gs:[ebp + 0x414], eax
    X86_AT(c, 0x5714u);
    (void)x86_sub(c, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x414u))), c.r[0], 0, 4);
    // 00571b  jae 0x5724
    X86_AT(c, 0x571bu);
    if (x86_cc(c, 3)) { goto L_5724; }
    X86_TICK(c, 7);
    // 00571d  call 0x56a4
    X86_AT(c, 0x571du);
    push32(c, 0x5722u); f_000056a4(c); X86_RET(c, 0x5722u);
    X86_TICK(c, 5);
    // 005722  jb 0x5743
    X86_AT(c, 0x5722u);
    if (x86_cc(c, 2)) { goto L_5743; }
L_5724:
    X86_TICK(c, 19);
    // 005724  mov word ptr [edi + 2], dx
    X86_AT(c, 0x5724u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x2u)), (c.r[2] & 0xFFFFu));
    // 005728  mov word ptr [edi + 4], bx
    X86_AT(c, 0x5728u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x4u)), (c.r[3] & 0xFFFFu));
    // 00572c  mov ax, word ptr gs:[ebp + 0x438]
    X86_AT(c, 0x572cu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x438u))));
    // 005734  popfd 
    X86_AT(c, 0x5734u);
    x86_popfd(c, 4);
    // 005735  jae 0x573b
    X86_AT(c, 0x5735u);
    if (x86_cc(c, 3)) { goto L_573b; }
    X86_TICK(c, 2);
    // 005737  or ax, 0x4000
    X86_AT(c, 0x5737u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_logic(c, v | 0x4000u, 2)); }
L_573b:
    X86_TICK(c, 16);
    // 00573b  mov word ptr [edi], ax
    X86_AT(c, 0x573bu);
    wr16((c.sbase[3] + (uint32_t)(c.r[7])), (c.r[0] & 0xFFFFu));
    // 00573e  add edi, 6
    X86_AT(c, 0x573eu);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x6u, 0, 4); }
    // 005741  clc 
    X86_AT(c, 0x5741u);
    c.fl &= ~X86_CF;
    // 005742  ret 
    X86_AT(c, 0x5742u);
    c.eip = pop32(c); return;
L_5743:
    X86_TICK(c, 14);
    // 005743  pop eax
    X86_AT(c, 0x5743u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 005744  ret 
    X86_AT(c, 0x5744u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x570cu, "ran off the end of a function");
}
void f_00005748(X86Cpu& c) {
L_5748:
    X86_TICK(c, 7);
    // 005748  cmp edi, esi
    X86_AT(c, 0x5748u);
    (void)x86_sub(c, c.r[7], c.r[6], 0, 4);
    // 00574a  je 0x5798
    X86_AT(c, 0x574au);
    if (x86_cc(c, 4)) { goto L_5798; }
    X86_TICK(c, 13);
    // 00574c  mov ax, word ptr [esi]
    X86_AT(c, 0x574cu);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(c.r[6]))));
    // 00574f  mov dx, ax
    X86_AT(c, 0x574fu);
    s16(c, 2, (c.r[0] & 0xFFFFu));
    // 005752  test ax, 0x8000
    X86_AT(c, 0x5752u);
    (void)x86_logic(c, (c.r[0] & 0xFFFFu) & 0x8000u, 2);
    // 005756  jne 0x5787
    X86_AT(c, 0x5756u);
    if (x86_cc(c, 5)) { goto L_5787; }
    X86_TICK(c, 9);
    // 005758  and ax, 0xbfff
    X86_AT(c, 0x5758u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_logic(c, v & 0xBFFFu, 2)); }
    // 00575c  cmp ax, dx
    X86_AT(c, 0x575cu);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), (c.r[2] & 0xFFFFu), 0, 2);
    // 00575f  jne 0x5774
    X86_AT(c, 0x575fu);
    if (x86_cc(c, 5)) { goto L_5774; }
    X86_TICK(c, 14);
    // 005761  dec ax
    X86_AT(c, 0x5761u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_dec(c, v, 2)); }
    // 005763  cmp word ptr gs:[ebp + 0x2a], ax
    X86_AT(c, 0x5763u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Au))), (c.r[0] & 0xFFFFu), 0, 2);
    // 005768  jg 0x5787
    X86_AT(c, 0x5768u);
    if (x86_cc(c, 15)) { goto L_5787; }
    X86_TICK(c, 9);
    // 00576a  mov byte ptr gs:[ebp + 0x43c], 0
    X86_AT(c, 0x576au);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x43Cu)), 0x0u);
    // 005772  jmp 0x578c
    X86_AT(c, 0x5772u);
    goto L_578c;
L_5774:
    X86_TICK(c, 14);
    // 005774  inc ax
    X86_AT(c, 0x5774u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_inc(c, v, 2)); }
    // 005776  cmp word ptr gs:[ebp + 0x2e], ax
    X86_AT(c, 0x5776u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Eu))), (c.r[0] & 0xFFFFu), 0, 2);
    // 00577b  jl 0x5787
    X86_AT(c, 0x577bu);
    if (x86_cc(c, 12)) { goto L_5787; }
    X86_TICK(c, 9);
    // 00577d  mov byte ptr gs:[ebp + 0x43c], 1
    X86_AT(c, 0x577du);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x43Cu)), 0x1u);
    // 005785  jmp 0x578c
    X86_AT(c, 0x5785u);
    goto L_578c;
L_5787:
    X86_TICK(c, 9);
    // 005787  add esi, 6
    X86_AT(c, 0x5787u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x6u, 0, 4); }
    // 00578a  jmp 0x5748
    X86_AT(c, 0x578au);
    X86_POLL(c, 0x5748u); goto L_5748;
L_578c:
    X86_TICK(c, 21);
    // 00578c  mov edx, dword ptr [esi + 2]
    X86_AT(c, 0x578cu);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0x2u)));
    // 00578f  shld ebx, edx, 0x10
    X86_AT(c, 0x578fu);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_double(c, true, v, c.r[2], 0x10u, 4, w); if (w) c.r[3] = r; }
    // 005793  add esi, 6
    X86_AT(c, 0x5793u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x6u, 0, 4); }
    // 005796  clc 
    X86_AT(c, 0x5796u);
    c.fl &= ~X86_CF;
    // 005797  ret 
    X86_AT(c, 0x5797u);
    c.eip = pop32(c); return;
L_5798:
    X86_TICK(c, 12);
    // 005798  stc 
    X86_AT(c, 0x5798u);
    c.fl |= X86_CF;
    // 005799  ret 
    X86_AT(c, 0x5799u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x5748u, "ran off the end of a function");
}
}

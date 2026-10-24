/* Ground truth: pixelWriter at 0xf3e04 in ENCHANT.EXP is seven instructions with no frame pointer:
 *
 *   0xf3e04  mov eax,[esp+0xc]   ; arg3, row
 *   0xf3e08  shl eax,7           ; * 128
 *   0xf3e0b  mov edx,[esp+0x8]   ; arg2, col
 *   0xf3e0f  mov cx,[esp+0x4]    ; arg1, value
 *   0xf3e14  mov [eax+edx*2+0x77e90],cx
 *   0xf3e1c  ret
 *
 * The C below is the equivalent. If High C 2.31 reproduces that shape, it is the compiler that built the game.
 * This tests the calling convention, the addressing mode and the frame-pointer decision in one function, and it
 * has an exact expected output rather than a shape. */
void plot(unsigned short value, int col, int row) {
    *(unsigned short *)(0x77e90 + row * 128 + col * 2) = value;
}

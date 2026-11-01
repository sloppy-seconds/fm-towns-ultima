/* a54_fe95d: the closest C this routine could plausibly be.
 *
 * Target 0xfe95d is 32 bytes and its FIRST instruction is `movzx ebx, al`, so it takes
 * its argument in a register and has no prologue at all. docs/highc-codegen.md measures
 * that High C passes no arguments in registers, so no C source can produce that opening.
 * The target also reads a word table through `cs:` and returns in dx, which is a 16-bit
 * convention on a 32-bit build.
 *
 * This candidate is written to be as close as the arithmetic allows: the nibble split,
 * the table lookup, the increment, the 16-bit multiply. What it cannot reproduce is the
 * calling convention, and that is the point of recording it rather than skipping the
 * routine. A mismatch here is expected and its SHAPE is the evidence.
 */
extern unsigned short tbl[];

unsigned f(unsigned char c) {
	unsigned v = (c & 0xf) + 1;
	unsigned idx = c >> 4;
	return (unsigned)((tbl[idx] * v) & 0xffffu);
}

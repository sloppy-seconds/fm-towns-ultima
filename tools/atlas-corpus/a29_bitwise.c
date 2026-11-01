/* a29_bitwise: shifts, masks, and/or/xor/not on ints. The baseline for every
 * bitfield decode, and the place to see whether xor is used for anything other
 * than zeroing. */
int f(int a, int b) {
	return ((a << 3) | (b >> 2)) ^ (a & 0xff) ^ ~b;
}

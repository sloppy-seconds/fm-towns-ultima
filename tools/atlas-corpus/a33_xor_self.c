/* a33_xor_self: the one C spelling of zeroing that a compiler is most likely to
 * lower to xor rather than sub. The atlas measured `sub reg,reg` and no
 * `xor reg,reg` across 32 probes, but none of them wrote x ^= x, so the never-
 * emits entry for xor was scoped to the shapes actually tried. This closes that
 * gap before the absence is used to exclude anything. */
int f(int a) {
	a ^= a;
	return a + 1;
}

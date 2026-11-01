/* a30_byte_loop: a byte-at-a-time copy. Byte operands versus a widened word
 * copy is the difference between two very different-looking loops, and the game
 * has several of these in its asset loaders. */
char *f(char *dst, char *src, int n) {
	char *d;
	d = dst;
	while (n-- > 0)
		*d++ = *src++;
	return dst;
}

/* a51_e140c: scan a 6-byte-stride array counting occurrences of 0xf2, and return the
 * element after the n-th one. n == 0 returns the base pointer.
 *
 * Target 0xe140c is 43 bytes. It is classed register-choice because 12 candidate
 * sources were found to produce the same 43 bytes with one register pair differing,
 * so the source is under-determined rather than mismatched. This is one more. */
char *f(char *p, int n) {
	int i;
	i = 0;
	if (n == 0)
		return p;
	for (;;) {
		if (*p == (char)0xf2) {
			i++;
			if (i == n)
				return p + 6;
		}
		p += 6;
	}
}

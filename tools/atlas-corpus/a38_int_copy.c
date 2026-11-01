/* a38_int_copy: a word-at-a-time array copy, the shape most likely to make a
 * compiler reach for a string op. A30 copied bytes and got a manual loop, so the
 * open question is whether a wider element changes the answer. The census found
 * 25 game functions using a string op and that number is only an exclusion signal
 * if this compiler genuinely cannot emit one. */
int f(int *d, int *s, int n) {
	int i;
	i = 0;
	while (i < n) {
		d[i] = s[i];
		i++;
	}
	return n;
}

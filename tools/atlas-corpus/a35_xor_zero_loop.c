/* a35_xor_zero_loop: zeroing a register as a loop accumulator reset, the shape
 * that actually appears in game code and the reason the xor-versus-sub census
 * matters. Written so the answer is about a real use rather than a contrived one. */
int f(int *a, int n) {
	int i;
	int s;
	i = 0;
	s = 0;
	while (i < n) {
		s = s ^ a[i];
		i++;
	}
	return s;
}

/* a02_local: a plain local that is never address-taken. The question is whether
 * a local alone forces a frame. docs/highc-authentic-toolchain.md measured that
 * it does not; this re-measures it inside the atlas corpus. */
int f(int a, int b) {
	int t;
	t = a + b;
	return t * 2;
}

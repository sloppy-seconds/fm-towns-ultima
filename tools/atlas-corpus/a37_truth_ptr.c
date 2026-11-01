/* a37_truth_ptr: a pointer used as a loop condition, which is the other place
 * `and reg,reg` shows up in game code. The pointer is ANDed with itself to force
 * the flags without a memory reference, so this is the register-register form. */
int f(int *p, int *end) {
	int n;
	n = 0;
	while (p) {
		if (p >= end)
			p = 0;
		else
			n++;
	}
	return n;
}

/* a16_switch_sparse: a switch over three distant values. A jump table here
 * would be wasteful, so the expected shape is a compare chain. The contrast
 * with a15 is what makes the switch-lowering claim mean something. */
int f(int a) {
	switch (a) {
	case 1: return 10;
	case 100: return 11;
	case 5000: return 12;
	}
	return 0;
}

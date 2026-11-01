/* a15_switch_dense: a dense switch over 0..5 with distinct bodies. This is the
 * case a jump table is for, so it is where a jump table either appears or does
 * not. */
int f(int a) {
	switch (a) {
	case 0: return 10;
	case 1: return 11;
	case 2: return 12;
	case 3: return 13;
	case 4: return 14;
	case 5: return 15;
	}
	return 0;
}

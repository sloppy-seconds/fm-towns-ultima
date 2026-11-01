/* a17_switch_fall: fallthrough and a default arm. Fallthrough is the switch
 * feature a jump table handles by layout rather than by extra code, so it shows
 * whether the lowering reorders the arms. */
int f(int a) {
	int r;
	r = 0;
	switch (a) {
	case 0:
		r = r + 1;
	case 1:
		r = r + 2;
		break;
	case 2:
		r = r + 4;
		break;
	default:
		r = r + 8;
		break;
	}
	return r;
}

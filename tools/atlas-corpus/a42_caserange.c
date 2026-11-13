/* a42_caserange: a switch case range, `case lo..hi'.
 *
 * THE QUESTION. High C accepts Pascal-style case ranges, which standard C does not, and the
 * lowering of a range cannot be the same as a list of discrete cases: it is either a pair of
 * comparisons or a jump table covering a span. The atlas's switch entries (a15, a16, a17) were all
 * discrete cases, so if the binary contains a switch whose guard shape matches neither of those,
 * this is the construct that would explain it. */
int f(int c) {
	switch (c) {
	case 'A'..'Z':
		return 1;
	case 'a'..'z':
		return 2;
	case '0'..'9':
		return 3;
	default:
		return 0;
	}
}

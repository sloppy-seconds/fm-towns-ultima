/* a23_ptr_walk: a pointer walk against an end pointer. Loop shape, counter
 * versus pointer induction, and which register holds the loop variable. */
int f(int *p, int *end) {
	int s;
	s = 0;
	while (p < end) {
		s = s + *p;
		p++;
	}
	return s;
}

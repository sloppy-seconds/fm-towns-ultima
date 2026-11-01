/* a25_pad: struct alignment and padding. The offsets the compiler chooses are
 * the arithmetic every game struct decode depends on, and sizeof is the check
 * that the chosen layout is the one assumed. */
struct P {
	char c;
	int i;
	char d;
};

int f(struct P *p, int v) {
	p->c = (char)v;
	p->i = v;
	p->d = (char)(v + 1);
	return (int)sizeof(struct P);
}

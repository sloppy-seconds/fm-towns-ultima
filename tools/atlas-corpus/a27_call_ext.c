/* a27_call_ext: a call to a function whose definition is elsewhere. The direct
 * call's displacement is a linker relocation, and the argument push order is a
 * convention. Both matter for reading call sites in the game. */
extern int other(int a, int b);

int f(int a) {
	return other(a, a + 1);
}

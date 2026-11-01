/* a14_mod_var: signed remainder. Same instruction as a10 but the result is
 * taken from edx rather than eax, which is the part worth recording. */
int f(int a, int b) {
	return a % b;
}

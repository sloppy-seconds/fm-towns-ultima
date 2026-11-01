/* a26_fptr: a call through a function pointer. The indirect transfer form is a
 * first-class ledger category (30 unresolved indirect transfers in the game
 * module), so the emitted shape is worth having on record. */
int (*fp)(int);

int f(int a) {
	return fp(a);
}

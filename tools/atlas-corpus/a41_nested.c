/* a41_nested: a nested function that captures its parent's local.
 *
 * THE QUESTION. ENCHANT.EXP contains 220 routines that open with `enter imm16, 0`, and no
 * probe in this corpus has ever produced `enter` at all: every one used `push ebp; mov ebp, esp`.
 * High C has a language extension the corpus was written without, nested functions with captured
 * variables, and a closure is exactly the construct that needs a frame the callee did not create.
 * If this probe emits `enter`, or a frame shape no plain-C probe emits, then the `enter` family in
 * the binary is high-level C rather than a different compiler or hand-written assembly.
 *
 * The syntax is High C's, not standard C: a nested function is declared inside its parent and may
 * read and write the parent's locals. */
int f(int n) {
	int total = 0;
	void add(int x) { total = total + x; }
	add(n);
	add(n + 1);
	return total;
}

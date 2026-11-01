/* a39_call_memcpy: the library call rather than the loop. If the compiler inlines
 * memcpy to `rep movsb`, then a string op in game code is ordinary compiler output
 * and the 25 functions the census flagged are explained. Declared by hand rather
 * than included, because the batch sets no INCLUDE path and a missing header would
 * fail the compile rather than answer the question. */
extern void *memcpy(void *d, const void *s, int n);

void *f(void *d, void *s, int n) {
	return memcpy(d, s, n);
}

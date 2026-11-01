/* a21_char_short: narrow loads and stores. Whether the compiler uses movsx,
 * movzx, or a shift-and-mask for a signed char is a habit that cannot be
 * guessed, and it decides how sub-int fields read in the game's structs. */
struct N {
	signed char c;
	short s;
	unsigned char u;
	unsigned short w;
};

int f(struct N *p) {
	return p->c + p->s + p->u + p->w;
}

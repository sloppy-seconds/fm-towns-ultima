/* a05_static: a static local. Where the storage is placed, and whether a
 * function touching only statics gets a frame. */
static int s;

int f(int a) {
	s = s + a;
	return s;
}

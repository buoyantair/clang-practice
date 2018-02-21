#include <stdio.h>

/* copy input to output; v1 */

void main () {
	int c;
	
	c = getchar();
	while (c != EOF) {
		putchar(c);
		c = getchar();
	}
}

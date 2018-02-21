#include <stdio.h>

#define IN 1 /* inside word */
#define OUT 0 /* outside word */

/*
	print the given input as one word per line

	Author: @buoyantair
*/

void main() {
	int c;
	int state = OUT; 
	while ((c = getchar()) != EOF) {
		if (c == ' ') {
			state = OUT;
			putchar('\n');
		} else if (state == OUT) {
			state = IN;
		}
		
		if (state == IN)
			putchar(c);
	}
}

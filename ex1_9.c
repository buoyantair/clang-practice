#include <stdio.h>

void main() {
	int c;
	int prevBlank = 0;
	
	while((c = getchar()) != EOF) {
		if (c == ' ') {
			prevBlank = 1;
		} else {
			if (prevBlank == 1) {
				putchar(' ');
			}
			putchar(c);
			prevBlank = 0;
		}
	}
}


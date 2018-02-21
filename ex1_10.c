#include <stdio.h>

void main() {
	int c;

	while ((c = getchar()) != EOF)
		switch(c) {
			case '\t':
			case '\b':
			case '\':
				putchar('\\');
				break;
			default:
				putchar(c);
				break;
		}
}

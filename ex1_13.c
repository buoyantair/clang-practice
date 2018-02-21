#include <stdio.h>

*/
	Write a program to print a histogram of lengths of words in its input. It is easy to draw 
	the histogram with the bars horizontal; a vertical orientation is more challenging.
	
	Author: @buoyantair
*/

void main() {
	int c;
	int nwords, inword;
	nwords = inword = 0;

	while ((c = getchar()) != '.')
		if(c == ' ' || c == '\n' || c == '\t' || c == '\r')
			inword = 0;
		else if (inword == 0){
			inword = 1;
			++nwords;
		}
	printf("nwords = %d\n", nwords);		
}

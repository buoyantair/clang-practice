/*
  Write a program to print all input lines that are longer than 80 characters.

  Author: @buoyantair
*/

#include <stdio.h>
#define MIN_LINE_SIZE 80

int _getline(char s[]);

void main() {
  int len;
  char line[100000];

  while(len = _getline(line) > MIN_LINE_SIZE) {
    printf("%s", line);
  }
}

/* getline: read a line into s, return it's length */
int _getline(char s[])
{
  int c, i;
  
  i = 0;
  while((c = getchar()) != EOF && c != '\n') {
    s[i] = c;
    ++i;
  }

  if (c == '\n'){
    s[i] = c;
    ++i;
  }

  return i;
}
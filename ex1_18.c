/*
  Write a program to remove trailing blanks and tabs from each line of input, and to delete entirely blank lines.

  Author: @buoyantair
*/

#include <stdio.h>
#define MAXLINE 10000

int _getline(char s[]);
void removePadding(char s[], int len);

void main() {
  char line[MAXLINE];
  int len = 0;

  // read input into line variable
  len = _getline(line);

  printf("Formatted line: \"%s\"\n", line);
  removePadding(line, len);
}

/*
  getline: read a line into s
*/
int _getline(char s[])
{
  int c;
  int i = 0;
  int len = 0;

  while ((c = getchar()) != EOF && c != '\n') {
    s[i] = c;
    ++i;
  }

  return len;
}

/*
  removePadding: remove trailing blanks and tabs from the given string
*/
void removePadding(char s[], int len)
{
  char newS[MAXLINE];
  int i = 0;
  while (s[i] == ' ' || s[i] == '\t') {
    ++i;
  }

  printf("my length: %i\n", len);

  int j = len;
  while (s[j] == ' ' || s[j] == '\t') {
    --j;
  }

  printf("Start: %i, End: %i\n", i, j);
  int indx = 0;
  for (; i < j; i++) {
    newS[indx] = s[i];
    indx++;
  }
  printf("DER: \"%s\"\n", newS);
}
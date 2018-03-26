/*
  Print the longest line from the given input
  Author: @buoyantair
*/

#include <stdio.h>
#define MAXLINE 10 /* maximum input line length */

int max;                /* maximum length seen so far */
char line[MAXLINE];     /* current input line */
char longest[MAXLINE];  /* longest line saved here */

int _getline(void);
void copy(void);

/* print the longest input line */
void main()
{
  int len;                    /* current line length */
  extern int max;
  extern char longest[];

  max = 0;
  while((len = _getline()) > 0)
    if (len > max){
      max = len;
      copy();
    }
  if (max > 0) /* there was a line */
    printf("%s", longest);
}

/* getline: read a line into s, return it's length */
int _getline(void)
{
  int c, i;
  extern char line[];

  for(i = 0; i < MAXLINE - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
    line[i] = c;

  if (c == '\n'){
    line[i] = c;
    ++i;
  }

  return i;
}

/* copy: copy 'from' into 'to'; assume that to is big enough */
void copy(void)
{
  int i;
  extern char line[], longest[];

  i = 0;
  while ((longest[i] = line[i]) != '\0')
    ++i;
}
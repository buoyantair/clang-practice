/*
  Write a program reverse(s) that reverses the character string s. Use it to write a program that reverses its input  a line at a time.
  Author: @buoyantair
*/



#include <stdio.h>

#define MAXLINE 10000

void _getline(char s[]);
void copy(char from[], char to[]);
void reverse(char s[]);

void main() {
  char line[MAXLINE];

  // TODO: Read lines and reverse them
}

void _getline(char s[]){
  int c;
  int i = 0;

  while((c = getchar()) != EOF && c != '\n') {
    s[i] = c;
    ++i;
  }

  if (c == '\n') {
    s[i] = c;
    ++i;
  }
}

// TODO: Write a copy function that copies characters from one character array to another
void copy(char from[], char to[]) {

}

// TODO: Write a reverse function that reverses a given character array
void reverse(char s[]) {

}
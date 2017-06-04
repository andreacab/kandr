#include <stdio.h>

#define MAXLINE 1000
#define THRESHOLD 80

int getLine(char[], int);
void reverseLine(char[], char[], int);

int main(int argc, char* argv[]) {
  int len;
  char line[MAXLINE];
  char reversed[MAXLINE];

  len = 0;
  while ((len = getLine(line, MAXLINE)) > 0) {
    reverseLine(line, reversed, len);
    printf("original: %sreversed: %s\n", line, reversed);
  }

  return 0;
}

int getLine(char line[], int max) {
  int c, i;

  for (i = 0; (i < max - 1) && ((c = getchar()) != EOF) && (c != '\n'); i++)
    line[i] = c;

  if (c == '\n') {
    line[i] = c;
    ++i;
  }
  line[i] = '\0';

  return i;
}

void reverseLine(char from[], char to[], int size) {
  int i, c;

  i = 0;
  while ((c = from[i]) != '\0') {
    to[size - 2 - i] = from[i];
    ++i;
  }

  to[size - 1] = '\0';
}

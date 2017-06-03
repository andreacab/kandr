#include <stdio.h>

#define MAXLINE 1000
#define THRESHOLD 80

int getLine(char[], int);

int main(int argc, char* argv[]) {
  int len;
  char line[MAXLINE];

  len = 0;
  while ((len = getLine(line, MAXLINE)) > 0) {
    if (len > THRESHOLD) {
      printf("size: %d | line: %s\n", len, line);
    } else {
      printf("size: %d => oops too small..\n", len);
    }
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

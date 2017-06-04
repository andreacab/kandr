#include <stdio.h>

#define MAXLINE 1000
#define THRESHOLD 80

int getLine(char[], int);
void sanitizeLine(char[], char[]);

int main(int argc, char* argv[]) {
  int len;
  char line[MAXLINE];
  char sanitized[MAXLINE];

  len = 0;
  while ((len = getLine(line, MAXLINE)) > 0) {
    sanitizeLine(line, sanitized);
    printf("original: %ssanitized: %s\n", line, sanitized);
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

void sanitizeLine(char from[], char to[]) {
  int i, j, c, isTrail;

  i = j = 0;
  isTrail = 1;
  while ((c = from[i]) != '\0') {
    if (c != ' ' && c != '\t' && isTrail == 1)
      isTrail = 0;

    if (isTrail == 0) {
      to[j] = from[i];
      ++j;
    }

    ++i;
  }

  to[j] = '\0';
}

#include <stdio.h>

#define MAX 10
#define EOS '\0'

int htoi(char[]);
void getInput(char[]);
int dec(char);

int main(int argc, char* argv[]) {
  char buffer[MAX];
  int num;

  getInput(buffer);
  num = htoi(buffer);
  printf("\nhex is: %d", num);

  return 0;
}

void getInput(char buffer[]) {
  int i, c;

  i = 0;
  while ((c = getchar()) != EOF) {
    buffer[i] = c;
    ++i;
  }

  buffer[i] = EOS;
}

int htoi(char str[]) {
  int i, n, c;

  i = 0;
  if (str[0] == '0' && (str[1] == 'x' || str[1] == 'X'))
    i = 2;

  n = 0;
  for (; (c = str[i]) != EOS && c >= '0' && c <= '9' || c >= 'A' && c <= 'F'; ++i) {
    n = 16 * n + dec(c);
  }

  return n;
}

int dec(char c) {
  int n;

  if (c >= 'A' && c <= 'F') {
    n = 10 + (c - 'A');
  } else if (c >= '0' && c <= '9') {
    n = c - '0';
  } else
    n = 0;

  return n;
}



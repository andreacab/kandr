#include <stdio.h>

#define EOS '\0'

char* any(char[], char[]);

int main(int argc, char* argv[]) {
  int i;
  char str[4] = "abc";
  char *pos;
  char test[5][4] = {
    "aaa", // 0
    "bbb", // 1
    "lmc", // 2
    "abd", // 0
    "def" // -1
  };

  printf("for str:%s\n", str);
  for (i = 0; i < 5; i++) {
    printf("original:%s\n", test[i]);
    pos = any(test[i], str);
    if (pos)
      printf("any?: value:%c, address: %p\n", *pos, pos);
    else
      printf("not charachter found\n");
    printf("*********\n");
  }

  return 0;
}

char* any(char s1[], char s2[]) {
  int i, j;

  // c = NULL;
  for (i = 0; s1[i] != EOS; i++) {
    for (j = 0; s2[j] != EOS; j++) {
      if (s1[i] == s2[j]) {
        return s1 + i; // address of the element s1[i]

      }
    }
  }

  return NULL;
}





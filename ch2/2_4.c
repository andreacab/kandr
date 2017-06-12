#include <stdio.h>

#define EOS '\0'

void squeeze(char[], char[]);

int main(int argc, char* argv[]) {
  int i;
  char str[4] = "abc";
  
  char* test[5] = {
    "aaa",
    "abb",
    "cba",
    "abd",
    "def"
  };

  printf("for str:%s\n", str);
  for (i = 0; i < 5; i++) {
    printf("original:%s\n", test[i]);
    squeeze(test[i], str);
    printf("squeezed:%s\n", test[i]);
    printf("*********\n");
  }

  return 0;
}

void squeeze(char s1[], char s2[]) {
  int add, m, i, j;
  printf("s1: %s\n", s1);
  printf("s2: %s\n", s2);
  m = 0;
//  for (i = 0; s1[i] != EOS; i++) {
//    add = 1;
//    
//    for (j = 0; s2[j] != EOS; j++) {
//      if (s1[i] == s2[j]) {
//        add = 0;
//        break;
//      }
//    }
//    if (add)
//      s1[m++] = s1[i];
//  }
  printf("m: %d\n", m);
  s1[m] = EOS;
}

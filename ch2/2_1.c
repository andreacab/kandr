#include <stdio.h>
#include <limits.h>

int main(int argc, char* argv[]) {
  short int si;
  unsigned short int usi;
  int i;
  unsigned int ui;
  long int li;
  unsigned long int uli;

  char c;
  unsigned char uc;

  float f;

  double d;
  long double ld;

  printf("size of int: %ld bytes\n", sizeof(i));
  printf("size of short int: %ld bytes\n", sizeof(si));
  printf("size of long int: %ld bytes\n", sizeof(li));
  printf("size of unsigned int: %ld bytes\n", sizeof(ui));
  printf("size of unsigned short int: %ld bytes\n", sizeof(usi));
  printf("size of unsigned long int: %ld bytes\n", sizeof(uli));

  printf("size of char: %ld bytes\n", sizeof(c));
  printf("size of unsigned char: %ld bytes\n", sizeof(uc));

  printf("size of float: %ld bytes\n", sizeof(f));

  printf("size of double: %ld bytes\n", sizeof(d));
  printf("size of long doulbe: %ld bytes\n", sizeof(ld));

  // constants from limit.h
  printf("the number of bits in a byte %d\n", CHAR_BIT);

  printf("The minimum value of INT = %d\n", INT_MIN);
  printf("The maximum value of INT = %d\n", INT_MAX);
  printf("The minimum value of SHORT INT = %d\n", SHRT_MIN);
  printf("The maximum value of SHORT INT = %d\n", SHRT_MAX);
  printf("The minimum value of LONG = %ld\n", LONG_MIN);
  printf("The maximum value of LONG = %ld\n", LONG_MAX);

  printf("The minimum value of CHAR = %d\n", CHAR_MIN);
  printf("The maximum value of CHAR = %d\n", CHAR_MAX);
  printf("The minimum value of SIGNED CHAR = %d\n", SCHAR_MIN);
  printf("The maximum value of SIGNED CHAR = %d\n", SCHAR_MAX);
  printf("The maximum value of UNSIGNED CHAR = %d\n", UCHAR_MAX);
}



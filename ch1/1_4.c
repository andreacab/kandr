#include <stdio.h>

void main(int argc, char *argv[]) {
  float fahr, celsius;
  int lower, upper, step;

  lower = -20;
  upper = 40;
  step = 1;

  celsius = lower;
  while(celsius <= upper) {
    fahr = ((9.0 / 5.0) * celsius) + 32.0;
    printf("%2.0f\t%6.1f\n", celsius, fahr);
    printf("------------\n");
    celsius += step;
  }
}

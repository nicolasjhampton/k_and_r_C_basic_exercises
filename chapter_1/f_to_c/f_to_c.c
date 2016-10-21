#include <stdio.h>

/* Thus is a comment that explains what the program does
  print Fahrenheit-Celsius table
  for fahr = 0, 20, ..., 300 */

int main() {

  int fahr, celsius; /* int operations truncate values without rounding */
  int lower, upper, step;

  lower = 0; /* lower limit of F temp */
  upper = 300; /* upper limit of F temp */
  step = 20; /* delta of F temp change */

  fahr = lower;
  while(fahr <= upper) {
    celsius = 5 * (fahr - 32) / 9; /* 5/9 would truncate to 0 if done together here */
    printf("%3d\t%3d\n", fahr, celsius);
    fahr = fahr + step;
  }

  return 0;
}

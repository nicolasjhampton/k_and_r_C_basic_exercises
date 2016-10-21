#include <stdio.h>

/* Thus is a comment that explains what the program does
  print Fahrenheit-Celsius table
  for fahr = 0, 20, ..., 300 */

int main() {

  float fahr, celsius; /* floating point values declared */
  int lower, upper, step;

  lower = 0; /* lower limit of F temp */
  upper = 300; /* upper limit of F temp */
  step = 20; /* delta of F temp change */

  fahr = lower; /* int is cast as float here automatically */
  while(fahr <= upper) { /* int is cast as float before statement is evaluated */
    celsius = (5.0/9.0) * (fahr - 32.0); /* 5.0/9.0 isn't truncated, so the math works here */
    /* prints fahr with space for 3 characters and no decimal point (3.0f) */
    /* prints celsius with space for 6 characters and one digit after the decimal point (6.1f) */
    /* decimal accuracy and spacing can be specified independent of each other */
    printf("%3.0f\t%6.1f\n", fahr, celsius); /* floating point numbers require their own format character */
    fahr = fahr + step;
  }

  return 0;
}

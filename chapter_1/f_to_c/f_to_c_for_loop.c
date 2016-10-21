#include <stdio.h>

/* Thus is a comment that explains what the program does
  print Fahrenheit-Celsius table
  for fahr = 0, 20, ..., 300 */

int main() {

  /* fahr is scoped to the for loop, not accessible outside */
  for(int fahr = 300; fahr >= 0; fahr -= 20) {
    /* notice again how the conversion from int to float is automatic */
    /* though going the opposite way would truncate the values */
    printf("%3d\t%6.1f\n", fahr, (5.0/9.0) * (fahr - 32));
  }

  return 0;
}

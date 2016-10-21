#include <stdio.h>

/* Thus is a comment that explains what the program does
  print Fahrenheit-Celsius table
  for fahr = 0, 20, ..., 300 */

int main() {

  for(int fahr = 0; fahr <= 300; fahr = fahr + 20) {
    printf("%3d\t%6.1f\n", fahr, (5.0/9.0) * (fahr - 32));
  }

  return 0;
}

#include <stdio.h>

/* We'll define constants at the top of the program */
/* These are symbolic constants, not variables, and cannot be changed or reassigned */
#define UPPER 300
#define LOWER 0
#define STEP 20

float f_to_c(int fahr);

int main() {

  for(int fahr = UPPER; fahr >= LOWER; fahr -= STEP) {
    printf("%3d\t%6.1f\n", fahr, f_to_c(fahr));
  }

  return 0;
}

float f_to_c(int fahr) {
  return (5.0/9.0) * (fahr - 32);
}

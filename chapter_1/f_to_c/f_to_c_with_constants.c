#include <stdio.h>

/* We'll define constants at the top of the program */
/* These are symbolic constants, not variables, and cannot be changed or reassigned */
#define UPPER 300
#define LOWER 0
#define STEP 20

int main() {

  /* fahr is scoped to the for loop, not accessible outside */
  for(int fahr = UPPER; fahr >= LOWER; fahr -= STEP) {
    /* notice again how the conversion from int to float is automatic */
    /* though going the opposite way would truncate the values */
    printf("%3d\t%6.1f\n", fahr, (5.0/9.0) * (fahr - 32));
  }

  return 0;
}

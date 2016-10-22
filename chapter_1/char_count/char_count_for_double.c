#include <stdio.h>

int main() {

  double nc;

  /* EOF can be inputed with ctrl-d */
  for(nc = 0; getchar() != EOF; ++nc)
    ; /* isolated semicolon called a null statement */

  /* printf uses %f for both double and float */
  printf("%.0f\n", nc);

  return 0;
}

#include <stdio.h>

int main() {
  /* EOF is constant defined in standard library */
  /* EOF simply a number that doesn't have char equivelant */
   printf("%d\n", EOF);
   /* true/false evaluations create the integers 1 and 0 */
   printf("%d\n", (2 != EOF));
   int c;
   c = getchar();
   printf("%d\n", (c != EOF));
   printf("%d\n", (c == EOF));
}

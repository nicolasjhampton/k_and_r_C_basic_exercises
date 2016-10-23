#include <stdio.h>


int exponent(int num, int ex);

int main() {
  int ex = 2;
  for(int index = 0; index < 11; ++index) {
    printf("%3d is %2d to the power of %d\n", exponent(index, ex), index, ex);
  }
  return 0;
}

/* functions must declare return type */
int exponent(int num, int ex) {
  /* we eliminated the index, and brought
     the result initialization into the for loop */
  for(int result = 1; ex > 0; --ex) {
    /* even though we mutate our ex variable, ex is only a copy
       of the VALUE of the argument. ex in the calling function
       is not affected by this mutation */
    result = result * num;
  }
  return result;
}

#include <stdio.h>

/* function must be declared at the start of program */
/* this is called the function prototype */
/* parameter names are optional in the prototype, just the type is needed */
/* parameter names used as documentation */
int exponent(int num, int ex);
/* int exponent(int, int); */

int main() {
  int ex = 2;
  for(int index = 0; index < 11; ++index) {
    printf("%3d is %2d to the power of %d\n", exponent(index, ex), index, ex);
  }
  return 0;
}

/* functions must declare return type */
int exponent(int num, int ex) {
  int result = 1;
  for(int index = 0; index < ex; ++index) {
    result = result * num;
  }
  return result;
}

/* non-ANSI legacy code */
/* still runs on modern compliers, but without type checking */
/* function declaration */
// int exponent();
//
// int exponent(num, ex)
// int num, ex;
// {
//   int result = 1;
//   for(int index = 0; index < ex; ++index) {
//     result = result * num;
//   }
//   return result;
// }

#include <stdio.h>

int main() {

  int new_char;

  /* we'll store counts for numbers, whitespace, and other characters
     in our array this time, to reduce the code needed */
  int nDigit[12];

  for(int index = 0; index < 12; ++index)
    nDigit[index] = 0;

  while((new_char = getchar()) != EOF) {
    /* note: test for char value, not int */
    if(new_char >= '0' && new_char <= '9') {
      /* important: the difference between the numberic values
         of '0' and the current char will be equal to our index
         number that corresponds to the char count */
      ++nDigit[new_char - '0'];
    } else if (new_char == ' ' || new_char == '\n' || new_char == '\t') {
      ++nDigit[10]; /* our whitespace count is indexed at 10 */
    } else {
      ++nDigit[11]; /* our other char count is indexed at 11 */
    }

  }

  /* simple max algorithm to find required graph height*/
  int highest = 0;
  for(int index = 0; index < 13; ++index) {
    if(nDigit[index] < nDigit[index + 1]) {
      highest = nDigit[index + 1];
    }
  }

  /* vertIndex will track our height, which will represent our counts */
  for(int vertIndex = highest; vertIndex > 0; --vertIndex) {
    /* horzIndex will track what item we're counting */
    for(int horzIndex = 0; horzIndex < 12; ++horzIndex) {
      if(nDigit[horzIndex] >= vertIndex) {
        printf("%c", 35);
      } else {
        printf(" ");
      }
    }
    printf("\n");
  }

  /* print our histogram labels */
  printf("0123456789WO\n");
  printf("\n");

  return 0;
}

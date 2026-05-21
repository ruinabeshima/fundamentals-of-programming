// swap() function using pointer params

#include <stdio.h>

void swap(int *a, int *b) { // Two pointer parameters
  int temp = *a;
  *a = *b;
  *b = temp;
}

/* Outside of a function, only the copies are sent, so they cannot be switched
 * (They can be switched if it's within the function). Using pointers directly
 * changes the memory. */

int main() {
  int a = 5;
  int b = 10;
  swap(&a, &b);

  printf("a = %d \n", a);
  printf("b = %d \n", b);

  return 0;
}
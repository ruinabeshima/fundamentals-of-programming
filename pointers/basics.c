// Declares and dereferences int, char, float pointers

#include <stdio.h>

int main() {

  // Integer pointer
  int x = 5;
  int *px = &x;
  printf("The pointer to x = %d is %p \n", x, px);

  // Char pointer
  char c = 'r';
  char *pc = &c;
  printf("The pointer to c = '%c' is %p \n", c, pc);

  // Float pointer
  float f = 1.5;
  float *pf = &f;
  printf("The pointer to f = '%.1f' is %p \n", f, pf);

  // Modify value
  x += 5;
  printf("The value of x is now %d \n", *px);

  return 0;
}
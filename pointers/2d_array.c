/*
Prints out the values in a 2D array using a single pointer variable and a single
for loop
*/

#include <stdio.h>

int main() {
  int A[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

  for (int *p = &A[0][0]; p < &A[0][0] + 9; p++) {
    printf("%d \n", *p);
  }

  return 0;
}
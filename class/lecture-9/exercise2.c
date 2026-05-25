#include <stdio.h>
#include <stdlib.h>

int main() {
  int A[3][3] = {{2, 4, 6}, {3, 8, 7}, {5, 7, 21}};
  int x[3] = {-33, 9, 6};

  int *matrixA = malloc(sizeof(A));
  int *matrixx = malloc(sizeof(x));
  if (matrixA == NULL || matrixx == NULL) {
    printf("Memory unable to be allocated \n");
    return 1;
  }

  // Initialise
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      matrixA[i * j + 3] = A[i][j];
    }
    matrixx = &x[i];
  }

  free(matrixA);
  free(matrixx);
  return 0;
}
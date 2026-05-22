#include <stdio.h>
#include <stdlib.h>

int main() {
  int A[3][3] = {{3, -1, 2}, {1, 2, 3}, {2, -2, -1}};
  int B[3][3] = {{8, 1, -1}, {-1, 7, -2}, {2, 1, 9}};

  int *matrixA = (int *)malloc(9 * sizeof(int));
  int *matrixB = (int *)malloc(9 * sizeof(int));
  int *result = (int *)malloc(9 * sizeof(int));

  if (matrixA == NULL || matrixB == NULL) {
    printf("Memory allocation failed \n");
    return 1;
  }

  for (int i = 0; i < 9; i++) {
    for (int j = 0; j < 9; j++) {
      matrixA[i * 3 + j] = A[i][j];
      matrixB[i * 3 + j] = B[i][j];
      result[i * 3 + j] = 0;
    }
  }

  for (int *i = &matrixA[0]; i < &matrixA[0] + 9; i++) {
    
  }

  free(matrixA);
  free(matrixB);
  return 0;
}
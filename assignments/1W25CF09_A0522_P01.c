#include <stdio.h>
#include <stdlib.h>

int main() {
  int rows = 3;
  int *matrixA = malloc(9 * sizeof(int));

  if (matrixA == NULL) {
    printf("Memory not allocated \n");
    return 1;
  }

  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      scanf("%d", (matrixA + (i * rows) + j));
    }
  }

  int determinant =
      *(matrixA + 0) *
          (*(matrixA + 4) * *(matrixA + 8) - *(matrixA + 5) * *(matrixA + 7)) -
      *(matrixA + 1) *
          (*(matrixA + 3) * *(matrixA + 8) - *(matrixA + 5) * *(matrixA + 6)) +
      *(matrixA + 2) *
          (*(matrixA + 3) * *(matrixA + 7) - *(matrixA + 4) * *(matrixA + 6));
  printf("Determinant: %d \n", determinant);

  free(matrixA);
  return 0;
}
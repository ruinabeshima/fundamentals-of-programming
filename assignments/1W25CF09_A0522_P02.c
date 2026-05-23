#include <stdio.h>
#include <stdlib.h>

int main() {
  // Taking rows = n, columns = m
  int n;
  int m;
  scanf("%d", &n);
  scanf("%d", &m);

  int *matrixA = malloc(n * m * sizeof(int));
  int *matrixB = malloc(m * n * sizeof(int));
  if (matrixA == NULL || matrixB == NULL) {
    printf("Memory allocation failed \n");
    return 1;
  }

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      scanf("%d", matrixA + (i * m) + j);
    }
  }

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      *(matrixB + (j * n) + i) = *(matrixA + (i * m) + j);
    }
  }

  for (int i = 0; i < m; i++) {
    for (int j = 0; j < n; j++) {
      printf("%d ", *(matrixB + (i * n) + j));
    }
    printf("\n");
  }

  free(matrixA);
  free(matrixB);
  return 0;
}
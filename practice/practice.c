#include <stdio.h>
#include <stdlib.h>

int main() {

  // Taking input for m, n and p
  int m, n, p;
  printf("Enter m: ");
  scanf("%d", &m);
  printf("Enter n: ");
  scanf("%d", &n);
  printf("Enter p: ");
  scanf("%d", &p);

  // Allocating memory
  int *matrixA = malloc(m * n * sizeof(int));
  int *matrixB = malloc(n * p * sizeof(int));
  int *matrixC = malloc(m * p * sizeof(int));
  if (matrixA == NULL || matrixB == NULL || matrixC == NULL) {
    printf("Memory not allocated");
    return 1;
  }

  // Input for matrix values
  printf("Enter matrix A: %d x %d", m, n);
  for (int i = 0; i < m * n; i++) {
    scanf("%d", (matrixA + i));
  }
  printf("Enter matrix B: %d x %d", n, p);
  for (int i = 0; i < n * p; i++) {
    scanf("%d", (matrixB + i));
  }

  // Multiply
  for (int i = 0; i < m; i++) {   // Rows of A
    for (int j = 0; j < p; j++) { // Columns of B

      // 1. Find the memory address of C[i][j]
      int *c_ptr = matrixC + (i * p) + j;

      // 2. Initialize its value to 0
      *c_ptr = 0;

      // 3. Compute dot product of row i (from A) and column j (from B)
      for (int k = 0; k < n; k++) {
        int valA = *(matrixA + (i * n) + k);
        int valB = *(matrixB + (k * p) + j);

        *c_ptr += valA * valB;
      }
    }
  }

  // Free memory
  free(matrixA);
  free(matrixB);
  free(matrixC);

  return 0;
}
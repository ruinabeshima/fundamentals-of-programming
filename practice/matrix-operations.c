#include <stdio.h>
#include <stdlib.h>

int main() {
  double *a;
  double A[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
  double B[3] = {1, 2, 3};
  int rows = 3;

  double *matrixA = malloc(9 * sizeof(double));
  double *matrixB = malloc(3 * sizeof(double));
  double *result = malloc(3 * sizeof(double));
  if (matrixA == NULL || matrixB == NULL || result == NULL) {
    printf("Memory not allocaed \n");
    return 1;
  }

  // Initialise matrix A and B
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      *(matrixA + (i * rows) + j) = A[i][j];
    }
    *(matrixB + i) = B[i];
  }

  // Multiply A and B
  for (int i = 0; i < 3; i++) {
    double sum = 0;
    for (int j = 0; j < 3; j++) {
      sum += *(matrixA + (i * rows) + j) * *(matrixB + j);
    }
    *(result + i) = sum;
  }

  // Display result
  for (double *i = result; i < result + 3; i++) {
    printf("%.1f ", *i);
  }
  printf("\n"); 

  free(matrixA);
  free(matrixB);
  free(result);
  return 0;
}
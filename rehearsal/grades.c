#include <stdio.h>

int main() {
  int r, c;
  scanf("%d", &r);
  scanf("%d", &c);

  int matrixA[r][c];
  for (int i = 0; i < r; i++) {
    for (int j = 0; j < c; j++) {
      scanf("%d", &matrixA[i][j]);
    }
  }

  int matrixB[r + 1][c + 1];
  for (int i = 0; i < r; i++) {
    for (int j = 0; j < c; j++) {
      matrixB[i][j] = matrixA[i][j];
    }
  }

  for (int i = 0; i < r; i++) {
    int sum = 0;
    for (int j = 0; j < c; j++) {
      sum += matrixA[i][j];
    }
    matrixB[i][c] = sum;
  }

  for (int i = 0; i < c; i++) {
    int sum = 0;
    for (int j = 0; j < r; j++) {
      sum += matrixA[j][i];
    }
    matrixB[r][i] = sum;
  }

  int total = 0;
  for (int i = 0; i < r; i++) {
    total += matrixB[i][c];
  }
  matrixB[r][c] = total; 

  for (int i = 0; i < c + 1; i++) {
    for (int j = 0; j < r + 1; j++) {
      printf("%d ", matrixB[i][j]);
    }
    printf("\n");
  }
  return 0;
}
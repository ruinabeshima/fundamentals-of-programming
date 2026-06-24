#include <stdio.h>

// 1 4 7 3
// 3 4 3 6
// 9 9 3 5

int main() {
  int r, c;
  scanf("%d", &r);
  scanf("%d", &c);

  int matrix[r + 1][c + 1];

  // Input
  for (int i = 0; i < r; i++) {
    for (int j = 0; j < c; j++) {
      scanf("%d", &matrix[i][j]);
    }
  }

  // Rows
  for (int i = 0; i < r; i++) {
    int total = 0;
    for (int j = 0; j < c; j++) {
      total += matrix[i][j];
    }
    matrix[i][c] = total;
  }

  // Columns
  for (int i = 0; i < c + 1; i++) {
    int total = 0;
    for (int j = 0; j < r; j++) {
      total += matrix[j][i];
    }
    matrix[r][i] = total;
  }

  // Output
  for (int i = 0; i < r + 1; i++) {
    for (int j = 0; j < c + 1; j++) {
      printf("%d ", matrix[i][j]);
    }
    printf("\n");
  }
}
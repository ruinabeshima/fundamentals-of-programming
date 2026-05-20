#include <stdio.h>

void swap(int *a, int *b) {
  int temp = *a;
  *a = *b;
  *b = temp;
}

int main() {
  int matrix[3][3];
  int row1;
  int row2;

  printf("Enter rows to switch: \n");
  scanf("%d", &row1);
  scanf("%d", &row2);

  printf("Enter matrix: \n");
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      scanf("%d", &matrix[i][j]);
    }
  }

  int *left = &matrix[row1 - 1][0];
  int *right = &matrix[row2 - 1][0];

  while (left <= (&matrix[row1 - 1][0] + 2) &&
         (right <= (&matrix[row2 - 1][0] + 2))) {
    swap(left, right);
    left += 1;
    right += 1;
  }

  printf("Swapped matrix: \n");
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      printf("%d", matrix[i][j]);
    }
    printf("\n");
  }

  return 0;
}
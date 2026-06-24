#include <stdio.h>

int main() {
  char shape;
  int param1, param2;

  scanf(" %c", &shape);
  scanf(" %d", &param1);
  scanf(" %d", &param2);

  if (shape == 'R') {
    printf("%d \n", param1 * param2);
  } else if (shape == 'T') {
    printf("%d \n", (param1 * param2) / 2);
  } else if (shape == 'S') {
    printf("%d \n", param1 * param1);
  }

  return 0;
}
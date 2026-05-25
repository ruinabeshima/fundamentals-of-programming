#include <stdio.h>

int main() {
  int array[5];
  for (int i = 0; i < 5; i++) {
    array[i] = i + 10;
  }

  for (int *i = &array[0]; i < &array[0] + 5; i++) {
    printf("%d \n", *i);
  }

  return 0;
}

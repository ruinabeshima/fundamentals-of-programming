#include <stdio.h>

void swap(int *p1, int *p2) {
  int *temp = p1;
  p1 = p2;
  p2 = temp;
}

void swap(int *p1, int *p2) {
  int temp = *p1;
  *p1 = *p2;
  *p2 = temp;
}

int main() {
  int a = 5;
  int b = 10;
  printf("a = %d, b = %d \n", a, b);
  swap(&a, &b);
  printf("a = %d, b = %d \n", a, b);

  return 0;
}
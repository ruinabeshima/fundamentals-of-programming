#include <stdio.h>

void fun(int *p) { printf("%d", p[5]); }

int main() {
  int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  fun(&a[3]);
  return 0;
}
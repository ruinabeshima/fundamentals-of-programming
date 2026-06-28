#include <stdio.h>

int trib(int n) {
  // Base Cases
  if (n == 0) {
    return 0;
  }
  if (n == 1 || n == 2) {
    return 1;
  }

  // Recursive Case
  return trib(n - 1) + trib(n - 2) + trib(n - 3);
}

int main() {
  int n = 0;

  while (n >= 0) {
    int num = trib(n);
    if (num >= 10000) {
      break;
    }
    printf("%d ",  num);
    n += 1;
  }
  printf("\n");

  return 0;
}
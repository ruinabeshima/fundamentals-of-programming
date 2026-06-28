#include <stdio.h>

int binomial(int n, int k) {
  if (k == 0 || k == n)
    return 1;

  return binomial(n - 1, k - 1) + binomial(n - 1, k);
}

int main() {
  for (int n = 0; n < 15; n++) {
    for (int s = 0; s < (14 - n); s++)
      printf("  ");
    for (int k = 0; k <= n; k++) {
      printf("%4d ", binomial(n, k));
    }
    printf("\n");
  }
  return 0;
}

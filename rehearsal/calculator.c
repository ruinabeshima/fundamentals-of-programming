#include <stdio.h>

int main() {
  char op;
  int a, b;

  scanf("%d", &a);
  scanf(" %c", &op);
  scanf("%d", &b);

  if (op == '+') {
    printf("%d + %d = %d \n", a, b, a + b);
  } else if (op == '-') {
    printf("%d - %d = %d \n", a, b, a - b);
  } else if (op == '*') {
    printf("%d * %d = %d \n", a, b, a * b);
  } else if (op == '/') {
    printf("%d / %d = %d \n", a, b, a / b);
  } else if (op == '%') {
    printf("%d mod %d = %d \n", a, b, a % b);
  }

  return 0;
}
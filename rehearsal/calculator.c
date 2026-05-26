#include <stdio.h>



int main() {
  char op[1];
  int a, b;

  scanf("%d", &a);
  scanf("%s", op);
  scanf("%d", &b);

  if (op[0] == '+') {
    printf("%d + %d = %d \n", a, b, a + b);
  } else if (op[0] == '-') {
    printf("%d - %d = %d \n", a, b, a - b);
  } else if (op[0] == '*') {
    printf("%d * %d = %d \n", a, b, a * b);
  } else if (op[0] == '/') {
    printf("%d / %d = %d \n", a, b, a / b);
  } else if (op[0] == '%') {
    printf("%d mod %d = %d \n", a, b, a % b);
  }

  return 0;
}
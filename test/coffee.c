#include <stdio.h>
#include <string.h>

int main() {
  int light;
  int dark;
  int darkQueue = 0;
  int lightQueue = 0;
  char orders[100000];

  scanf("%s", orders);

  int i = 0;
  while (i <= strlen(orders)) {
    if (darkQueue == 4) {
      printf("D \n");
      lightQueue = 0;
      darkQueue = 0;
    } else if (lightQueue == 4) {
      printf("L \n");
      lightQueue = 0;
      darkQueue = 0;
    }

    if (orders[i] == 'L') {
      lightQueue += 1;
    } else if (orders[i] == 'D') {
      darkQueue += 1;
    }

    i++;
  }

  if (lightQueue == 0) {
    printf("0");
  } else {
    for (int i = 0; i < lightQueue; i++) {
      printf("L");
    }
  }
  printf(" | ");
  if (darkQueue == 0) {
    printf("0");
  } else {
    for (int i = 0; i < darkQueue; i++) {
      printf("D");
    }
  }
  printf("\n");

  return 0;
}
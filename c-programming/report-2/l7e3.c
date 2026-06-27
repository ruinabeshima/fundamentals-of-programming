#include <stdbool.h>
#include <stdio.h>

int main() {
  int num;
  scanf("%d", &num);

  int arr[num];
  for (int i = 0; i < num; i++) {
    scanf("%d", &arr[i]);
  }

  int k;
  scanf("%d", &k);

  // Bubble Sort
  for (int i = 0; i < num; i++) {
    bool swapped = false;
    for (int j = 0; j < num - i - 1; j++) {
      if (arr[j] > arr[j + 1]) {
        int temp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = temp;
        swapped = true;
      }
    }
    if (!swapped) {
      break;
    }
  }

  printf("%d \n", arr[k - 1]);
  return 0;
}
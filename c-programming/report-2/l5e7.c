#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
  srand((unsigned)time(NULL));

  // Initialise nums array
  int nums[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
  for (int i = 0; i < 10; i++) {
    nums[i] = rand() % 100 + 1;
  }

  // Extract even numbers
  int even_nums[10];
  int index = 0;
  for (int i = 0; i < 10; i++) {
    if (nums[i] % 2 == 0) {
      even_nums[index] = nums[i];
      index += 1;
    }
  }

  printf("Initial array: ");
  for (int i = 0; i < 10; i++) {
    printf("%d ", nums[i]);
  }
  printf("\n");
  printf("Even numbers: ");
  for (int i = 0; i < index; i++) {
    printf("%d ", even_nums[i]);
  }
  printf("\n");

  // Bubble Sort
  for (int i = 0; i < index - 1; i++) {
    for (int j = 1; j < index - i; j++) {
      if (even_nums[j] < even_nums[j - 1]) {
        int temp = even_nums[j];
        even_nums[j] = even_nums[j - 1];
        even_nums[j - 1] = temp;
      }
    }
  }

  printf("Result array: ");
  for (int i = 0; i < index; i++) {
    printf("%d ", even_nums[i]);
  }
  printf("\n");
}
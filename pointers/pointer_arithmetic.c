// Traverse through an array using pointer arithmetic

#include <stdio.h>

int main() {
  int length;
  printf("Enter length of array: ");
  scanf("%d", &length);

  int nums[length];
  printf("Enter values: \n");
  for (int i = 0; i < length; i++) {
    scanf("%d", &nums[i]);
  }

  // array name nums automatically becomes a pointer to the first element
  // &nums[0]
  for (int *i = nums; i < nums + length; i++) {
    printf("%d ", *i);
  }
  printf("\n");

  return 0;
}
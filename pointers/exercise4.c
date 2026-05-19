/*
Function that reverses an array in place using two pointers
Swap function also utilised
*/

#include <stdio.h>

void swap(int *a, int *b) {
  int temp = *a;
  *a = *b;
  *b = temp;
}

void reverse(int nums[], int end) {
  int *left = &nums[0];
  int *right = &nums[end];

  while (left < right) {
    swap(left, right);
    right -= 1;
    left += 1;
  }
}

int main() {
  int size;
  printf("Enter array size: ");
  scanf("%d", &size);

  int nums[size];
  int i = 0;
  printf("Enter numbers in array: \n");
  while (i < size) {
    scanf("%d", &nums[i]);
    i++;
  }

  reverse(nums, i - 1);

  printf("Reversed values: \n");
  for (int j = 0; j < i; j++) {
    printf("%d \n", nums[j]);
  }
}
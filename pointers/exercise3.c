/*
Pointer arithmetic

If an integer pointer int *p points to address 1000 and sizeof(int) is 4 bytes:
p + 1 results in address 1004
p + 2 results in address 1008

Function takes in int array and size, and returns the sum using pointer
arithmetic
*/

#include <stdio.h>

int main() {
  int size;
  printf("Enter array size: ");
  scanf("%d", &size);

  int nums[size];
  printf("Enter numbers in array: ");
  for (int i = 0; i < size; i++) {
    scanf("%d", &nums[i]);
  }

  // POINTER ADDITION LOOP 
  int sum = 0;
  for (int *i = &nums[0]; i < &nums[0] + size; i++) {
    sum += *i;
  }

  printf("Sum of numbers in array: %d \n", sum);
  return 0;
}
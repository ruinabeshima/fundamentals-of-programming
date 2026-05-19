/* 
Pointer Basics 

& is used to get the memory address of a single variable 
* is used to dereference a pointer variable. * is also used to declare a pointer 
ex. *ptr gets the value stored in the address stored in ptr
*/

#include <stdio.h>

int main() {
  int num = 5;
  printf("Num: %d \n", num);
  printf("Size of int: %d bytes \n", (int)sizeof(num)); 
  printf("Pointer for num: %p \n", &num); 
  return 0;
}

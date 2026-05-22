#include <stdio.h> 

int main(){ 
  int num; 
  int sum = 0; 

  printf("Enter a number: "); 
  scanf("%d", &num);
  
  while (num > 0){
    int digit = num % 10; 
    sum += digit; 
    num = num / 10; 
  }

  printf("Sum of the digits in the number: %d \n", sum); 

  return 0; 
}
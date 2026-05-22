#include <stdio.h> 

int main(){
  int a; 
  int b; 
  int c; 

  printf("Enter the first value: "); 
  scanf("%d", &a); 

  printf("Enter the second value: ");
  scanf("%d", &b);

  printf("Enter the third value: ");
  scanf("%d", &c);

  printf("%d + %d + %d = %d \n", a, b, c, a + b + c);
  printf("%d*%d + %d*%d + %d*%d = %d \n", a, a, b, b, c, c, a * a + b * b + c * c);

  return 0; 
}
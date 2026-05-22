#include <stdio.h> 
#include <stdbool.h>

int main(){
  int a; 
  int b; 
  int c; 

  printf("Enter value of a: "); 
  scanf("%d", &a); 
  printf("Enter value of b: "); 
  scanf("%d", &b); 
  printf("Enter value of c: "); 
  scanf("%d", &c); 

  bool found = false; 

  for (int i=0; i<=100; i++){
    for (int j=0; j<=100; j++){
      if (a * i * i + b * j == c){
        printf("Solution: x = %d and y = %d \n", i, j); 
        found = true; 
      }
    }
  }

  if (!found){
    printf("No solutions were found \n"); 
  }

  return 0; 
}
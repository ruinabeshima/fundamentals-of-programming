#include <stdio.h> 

int main(){
  int rounds; 
  int input; 
  int max_num; 

  printf("How many numbers to input? "); 
  scanf("%d", &rounds); 

  for (int i=0; i<rounds; i++){
    printf("Number %d: ", i); 
    scanf("%d", &input); 

    if (i == 0 || input > max_num){
      max_num = input; 
    } 
  }

  printf("The largest number is %d \n", max_num);
  return 0; 
}
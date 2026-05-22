#include <stdio.h>

int main(void){
  printf("Enter your birthday \n"); 

  int year;
  printf("Year: ");
  scanf("%d", &year);

  int month;
  printf("Month: ");
  scanf("%d", &month);

  int day;
  printf("Day: ");
  scanf("%d", &day);

  printf("Your birthday is %d/%d/%d \n", year, month, day); 
  return 0; 
}
#include <stdio.h> 
#include <stdbool.h> 

int main(){
  int year; 
  int month; 
  int day; 

  // Input 
  printf("Enter your birthday \n");
  printf("Enter year: "); 
  scanf("%d", &year); 
  printf("Enter month: "); 
  scanf("%d", &month); 
  printf("Enter day: "); 
  scanf("%d", &day); 


  // Validate if year is leap year or not 
  bool isLeapYear = false; 
  if (year % 4 == 0){
    isLeapYear = true; 
  } 
  if (year % 100 == 0){
    isLeapYear = false; 
  }
  if (year % 400 == 0){
    isLeapYear = true;
  }

  // Validate days of the month 
  if (month < 1 || month > 12){
    printf("Your birthday does not exist \n"); 
    return 0; 
  }
  switch(month){
    case 1: 
    case 3: 
    case 5: 
    case 7: 
    case 8: 
    case 10: 
    case 12: 
      if( day > 31 || day < 1){
        printf("Your birthday does not exist \n"); 
        return 0; 
      }
      break; 

    case 4: 
    case 6: 
    case 9: 
    case 11: 
      if (day > 30 || day < 1){
        printf("Your birthday does not exist \n"); 
        return 0; 
      }
      break; 

    case 2: 
      if (isLeapYear && (day > 29 || day < 1)){
        printf("Your birthday does not exist \n"); 
        return 0; 
      } else if (!isLeapYear && (day > 28 || day < 1)){
        printf("Your birthday does not exist \n"); 
        return 0; 
      }
      break; 
  }

  printf("Your birthday exists \n"); 

  return 0; 
}
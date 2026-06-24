#include <stdio.h>

int main() {
  float bmi;
  scanf("%f", &bmi);

  if (bmi < 18.5) {
    printf("Underweight \n");
  } else if (bmi >= 18.5 && bmi < 25) {
    printf("Normal \n");
  } else if (bmi >= 25 && bmi < 30) {
    printf("Overweight \n");
  } else {
    printf("Obese \n");
  }

  return 0;
}
#include <stdio.h>

// Prints out a 9x9 multiplication table
void multiplication_table() {
  for (int i = 1; i < 10; i++) {
    for (int j = 1; j < 10; j++) {
      if (i * j >= 10) {
        printf("%d * %d = %d  ", i, j, i * j);
      } else {
        printf("%d * %d = %d   ", i, j, i * j);
      }
    }
    printf("\n");
  }
}

// Prime numbers between 1 and 20
void prime_numbers() {

  for (int i = 2; i <= 20; i++) {
    int isPrime = 1;

    // Check if number is divisible from 2 up to 1/2 of number
    for (int j = 2; j <= i / 2; j++) {
      if (i % j == 0) {
        isPrime = 0;
        break;
      }
    }

    if (isPrime == 1) {
      printf("%d \n", i);
    }
  }
}

int main() {
  multiplication_table();
  prime_numbers();
  return 0;
}
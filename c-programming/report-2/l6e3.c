#include <stdio.h>

struct Result {
  char name[50];
  int score;
  char grade;
};

void set_grading(struct Result *pointer) {
  int score = pointer->score;
  if (score >= 80) {
    pointer->grade = 'A';
  } else if (score >= 70) {
    pointer->grade = 'B';
  } else if (score >= 60) {
    pointer->grade = 'C';
  } else {
    pointer->grade = 'D';
  }
}

int main() {
  struct Result result1;

  printf("Enter name: ");
  scanf("%s", result1.name);
  printf("Enter score: ");
  scanf("%d", &result1.score);

  set_grading(&result1);

  printf("Name: %s \n", result1.name);
  printf("Score: %d \n", result1.score);
  printf("Grade: %c \n", result1.grade);

  return 0;
}
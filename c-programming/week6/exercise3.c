#include <stdio.h>

struct results {
  char name[10];
  int score;
  char grade;
};

void setGrading(struct results *p) {
  if (p->score >= 80) {
    (*p).grade = 'A';
  } else if (p->score >= 70) {
    (*p).grade = 'B';
  } else if (p->score >= 60) {
    (*p).grade = 'C';
  } else {
    (*p).grade = 'D';
  }
}

int main() {
  struct results result;

  printf("Enter name: ");
  scanf("%s", result.name);
  printf("Enter test score: ");
  scanf("%d", &result.score);

  setGrading(&result);
  printf("Name: %s, Score: %d, Grade: %c \n", result.name, result.score,
         result.grade);

  return 0;
}
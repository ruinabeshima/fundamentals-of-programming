#include <stdio.h>

struct result {
  char name[10];
  int score;
  char grade;
};

void setGrading(struct result *p) {
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
  struct result results[4];

  for (int i = 0; i < 4; i++) {
    printf("Enter name: ");
    scanf("%s", results[i].name);
    printf("Enter test score: ");
    scanf("%d", &results[i].score);
    setGrading(&results[i]);
  }

  for (int i = 0; i < 4; i++) {
    printf("Name: %s, Score: %d, Grade: %c \n", results[i].name,
           results[i].score, results[i].grade);
  }

  return 0;
}
#include <stdio.h>
#include <stdlib.h>

struct Student {
  char name[10];
  int math;
  int eng;
};

int main() {
  int num;
  printf("Enter number of students: ");
  scanf("%d", &num);

  struct Student *students = malloc(num * sizeof(struct Student));
  if (students == NULL) {
    printf("Memory not allocated \n");
    return 1;
  }

  for (int i = 0; i < num; i++) {
    printf("Enter student name: ");
    scanf("%s", (students + i)->name);

    printf("Enter math score: ");
    scanf("%d", &(students + i)->math);

    printf("Enter English score: ");
    scanf("%d", &(students + i)->eng);
  }

  for (int i = 0; i < num; i++) {
    printf("Student: %s \n", (students + i)->name);
    printf("Math score: %d \n", (students + i)->math);
    printf("English score: %d \n", (students + i)->eng);
  }

  for (struct Student *i = students; i < students + num; i++) {
    printf("Student: %s \n", i->name);
    printf("Math score: %d \n", i->math);
    printf("English score: %d \n", i->eng);
  }

  free(students);
  return 0;
}
#include <stdio.h>

struct Student {
  char *name;
  int id;
  float gpa;
};

int main() {
  int num;
  printf("How many students: ");
  scanf("%d", &num);

  struct Student *roster = malloc(num * sizeof(struct Student));
  if (roster == NULL) {
    printf("Memory not allocated \n");
    return 1;
  }

  return 0;
}
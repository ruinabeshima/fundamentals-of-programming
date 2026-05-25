#include <stdio.h>

struct books {
  int id;
  char name[10];
  int num;
};

int main() {
  struct books books1[5];

  for (int i = 0; i < 5; i++) {
    scanf("%d", &books1[i].id);
    scanf("%s", books1[i].name);
    scanf("%d", &books1[i].num);
  }

  for (int i = 0; i < 5; i++) {
    printf("id: %d, name: %s, num: %d \n", books1[i].id, books1[i].name,
           books1[i].num);
  }

  return 0;
}
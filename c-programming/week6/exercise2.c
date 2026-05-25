#include <stdio.h>

struct info {
  int month;
  double temp;
};

int main() {
  struct info members[4];

  for (int i = 0; i < 4; i++) {
    members[i].month = i;
    scanf("%lf", &members[i].temp);
  }

  for (int i = 0; i < 4; i++) {
    printf("Month: %d, Temperature: %.1f \n", members[i].month,
           members[i].temp);
  }

  return 0;
}
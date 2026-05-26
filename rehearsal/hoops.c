#include <stdio.h>
#include <string.h>

int main() {
  char game[100000];
  scanf("%s", game);
  int length = strlen(game);

  int gameA = 0;
  int gameB = 0;
  int scoreA = 0;
  int scoreB = 0;

  int i = 0;
  while (i < length) {
    if (scoreA == 5 || scoreB == 5) {
      printf("%d %d \n", scoreA, scoreB);
      scoreA = 0;
      scoreB = 0;
    } else {
      if (game[i] == 'A') {
        scoreA += 1;
      } else if (game[i] == 'B') {
        scoreB += 1;
      }
      i += 1;
    }
  }

  printf("%d %d \n", scoreA, scoreB);

  return 0;
}
#include <stdio.h>

int main() {
  int W, H, x, y;

  scanf("%d", &W);
  scanf("%d", &H);
  scanf("%d", &x);
  scanf("%d", &y);

  char board[H][W];
  for (int i = 0; i < H; i++) {
    for (int j = 0; j < W; j++) {
      board[i][j] = '.';
    }
  }

  for (int i = 0; i < H; i++) {
    board[i][x - 1] = '*';
  }
  for (int i = 0; i < W; i++) {
    board[y - 1][i] = '*';
  }
  board[y - 1][x - 1] = 'R';

  for (int i = 0; i < H; i++) {
    for (int j = 0; j < W; j++) {
      printf("%c", board[i][j]);
    }
    printf("\n");
  }

  return 0;
}
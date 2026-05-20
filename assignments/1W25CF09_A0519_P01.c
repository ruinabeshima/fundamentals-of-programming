#include <stdio.h>
#include <string.h>

int main() {

  int length;
  scanf("%d", &length);
  char text[50];
  scanf("%s", text);

  int enclosed = 0;
  for (int right = 0; right < strlen(text); right++) {

    if (text[right] == '\"') {
      if (enclosed == 1) {
        enclosed = 0;
      } else if (enclosed == 0) {
        enclosed = 1;
      }
    }

    if (text[right] == ',' && enclosed == 0) {
      text[right] = '.';
    }
  }

  printf("%s \n", text);
  return 0;
}
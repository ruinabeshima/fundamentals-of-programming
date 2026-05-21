// Pointer based string reverse

#include <stdio.h>
#include <string.h>

void swap(char *a, char *b) {
  char temp = *a;
  *a = *b;
  *b = temp;
}

int main() {
  char text[100];
  printf("Enter a string: ");
  scanf("%99s", text); // Limit to 99 chars, leave room for the null terminator

  int left = 0;
  int right = strlen(text) - 1;

  while (right > left) {
    swap(&text[right], &text[left]);
    right -= 1;
    left += 1;
  }

  printf("Reversed string: %s \n", text);
  return 0;
}
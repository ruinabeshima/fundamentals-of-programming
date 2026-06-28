#include <stdio.h>

void pm(int start, int end) { printf("%d -> %d \n", start, end); }

/*
n = Number of disks
start = Start rod (1, 2, or 3)
end = End rod (1, 2, or 3)
*/
void hanoi(int n, int start, int end) {
  if (n == 1) {
    // Base case
    pm(start, end);
  } else {
    // Recursive Case
    // 1 + 2 + 3 = 6
    int other = 6 - (start + end);
    hanoi(n - 1, start, other);
    pm(start, end);
    hanoi(n - 1, other, end);
  }
}

int main() {
  hanoi(3, 1, 3);
  return 0;
}
// Linked list implementation in C

#include <stdio.h>

struct Node {
  int val;
  struct Node *next; // Next is a pointer to the next Node
};

int main() {
  struct Node head;
  struct Node node2;
  struct Node node3;

  head.val = 1;
  head.next = &node2;
  node2.val = 2;
  node2.next = &node3;
  node3.val = 3;
  node3.next = NULL;

  // Linked List traversal
  struct Node *current = &head;
  while (current != NULL) {
    printf("%d \n", current->val); // -> is used for a pointer to a struct
    // same as (*current).val
    current = current->next;
  }

  return 0;
}
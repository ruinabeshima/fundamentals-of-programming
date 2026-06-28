#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// LIFO
struct Stack {
  int top;
  int arr[100];
};

bool push(struct Stack *s, int num) {
  // Full stack
  if (s->top >= 99) {
    return false;
  }

  s->arr[s->top] = num;
  s->top += 1;
  return true;
}

int pop(struct Stack *s) {
  // Empty stack
  if (s->top == 0) {
    return -1;
  }

  s->top -= 1;
  int num = s->arr[s->top];
  return num;
}

bool check_operator(char c) {
  if (c == '+' || c == '-' || c == '*' || c == '/') {
    return true;
  }
  return false;
}

int operation(int a, int b, char op) {
  if (op == '+') {
    return a + b;
  } else if (op == '-') {
    return a - b;
  } else if (op == '*') {
    return a * b;
  } else if (op == '/') {
    return a / b;
  }
  return 0;
}

int main() {
  char token[100];
  int result = 0;
  struct Stack stack;
  stack.top = 0;

  while (scanf("%s", token) == 1) {
    if (check_operator(token[0]) && token[1] == '\0') {
      int b = pop(&stack);
      int a = pop(&stack);
      result = operation(a, b, token[0]);
      push(&stack, result);
    } else {
      push(&stack, atoi(token));
    }
  }

  printf("Result: %d \n", pop(&stack));
  return 0;
}

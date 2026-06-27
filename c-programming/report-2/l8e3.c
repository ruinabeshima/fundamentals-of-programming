#include <stdbool.h>
#include <stdio.h>

// FIFO
struct Queue {
  int front;
  int rear;
  int arr[100];
};

bool enqueue(struct Queue *queue, int num) {
  // No space left
  if (queue->rear >= 100) {
    return false;
  }

  queue->arr[queue->rear] = num;
  queue->rear += 1;
  return true;
}

int dequeue(struct Queue *queue) {
  // Empty queue
  if (queue->front == queue->rear) {
    return -1;
  }

  int num = queue->arr[queue->front];
  queue->front += 1;
  return num;
}

void print_queue(struct Queue *queue) {
  printf("[ ");
  for (int i = queue->front; i < queue->rear; i++) {
    printf("%d ", queue->arr[i]);
  }
  printf("]\n");
}

int main() {
  struct Queue queue;
  queue.front = 0;
  queue.rear = 0;
  int nums[8] = {10, 15, 18, 12, 7, 9, 2, 14};

  // Enqueue
  for (int i = 0; i < 8; i++) {
    bool result = enqueue(&queue, nums[i]);
    if (result == false) {
      printf("Enqueue operation failed \n");
      return 1;
    }
    print_queue(&queue);
  }
  printf("\n");

  // Dequeue
  for (int i = 0; i < 8; i++) {
    int result = dequeue(&queue);
    printf("Dequeued %d ->", result);
    print_queue(&queue); 
  }
  printf("\n");

  return 0;
}
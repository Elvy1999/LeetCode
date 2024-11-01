#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
  int data;
  struct Node *next;
} Node;

typedef struct Queue
{
  Node *front;
  Node *rear;
} Queue;

Node *createQueueNode(int data)
{
  Node *newNode = malloc(sizeof(Node));
  newNode->data = data;
  newNode->next = NULL;
  return newNode;
}

Queue *createQueue()
{
  Queue *queue = malloc(sizeof(Queue));
  queue->front = NULL;
  queue->rear = NULL;
  return queue;
}

void enqueue(Queue *queue, int data)
{
  Node *newNode = createQueueNode(data);
  if (queue->front == NULL)
  {
    queue->front = newNode;
    queue->rear = newNode;
  }
  else
  {
    queue->rear->next = newNode;
    queue->rear = newNode;
  }
}

int dequeue(Queue *queue)
{
  if (queue->front == NULL)
  {
    printf("The queue is empty");
    return -1;
  }
  Node *temp = queue->front;
  int data = temp->data;
  queue->front = queue->front->next;

  if (queue->front == NULL)
  {
    queue->front = NULL;
    queue->rear = NULL;
  }
  free(temp);
  return data;
}

int peek(Queue *queue)
{
  if (queue->front == NULL)
  {
    printf("The queue is empty");
    return -1;
  }
  int data = queue->front->data;
  printf("This is the value in the front of the queue: %d", data);
  return data;
}

void display(Queue *queue)
{
  Node *temp = queue->front;
  while (temp != NULL)
  {
    if (temp->next == NULL)
    {
      printf("%d\n", temp->data);
    }
    else
    {
      printf("%d->", temp->data);
    }
    temp = temp->next;
  }
}

int main()
{
  Queue *queue = createQueue();
  enqueue(queue, 1);
  enqueue(queue, 2);
  enqueue(queue, 3);
  enqueue(queue, 4);
  enqueue(queue, 5);
  display(queue);
  return 0;
}
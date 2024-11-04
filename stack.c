#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
  struct Node *next;
  int data;
} Node;

Node *creatNode(int data)
{
  Node *newNode = malloc(sizeof(Node));
  newNode->next = NULL;
  newNode->data = data;
  return newNode;
}

void push(Node **top, int data)
{
  Node *newNode = creatNode(data);
  newNode->next = *top;
  *top = newNode;
  printf("Pushed %d onto the stack\n", data);
}

int pop(Node **top)
{
  if (*top == NULL)
  {
    printf("The stack is empty");
    return -1;
  }
  Node *temp = *top;
  int data = temp->data;
  *top = temp->next;
  free(temp);
  return data;
}

int peek(Node *top)
{
  if (top == NULL)
  {
    printf("The stack is empty");
    return -1;
  }
  return top->data;
}

void displayList(Node *top)
{
  Node *temp = top;
  while (temp != NULL)
  {
    if (temp->next == NULL)
    {
      printf("%d", temp->data);
    }
    else
    {
      printf("%d->", temp->data);
    }
    temp = temp->next;
  }
  printf("\n");
}

int main()
{

  Node *top = NULL;
  push(&top, 1);
  push(&top, 2);
  push(&top, 3);
  push(&top, 4);
  push(&top, 5);
  displayList(top);
  pop(&top);
  pop(&top);
  displayList(top);
  int peekNum = peek(top);
  printf("This is the number peeked %d\n", peekNum);
  displayList(top);
  return 0;
}
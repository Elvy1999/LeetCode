#include <stdio.h>
#include <stdlib.h>

struct Node
{
  struct Node *next;
  int data;
};

struct Node *creatNode(int data)
{
  struct Node *newNode = malloc(sizeof(struct Node));
  newNode->data = data;
  newNode->next = NULL;
}

void insertAtBeginning(struct Node **head, int data)
{
  struct Node *newNode = creatNode(data);
  newNode->next = *head;
  *head = newNode;
}

void insertAtEnd(struct Node **head, int data)
{
  struct Node *newNode = creatNode(data);
  if (*head == NULL)
  {
    *head = newNode;
    return;
  }
  struct Node *temp = *head;
  while (temp->next != NULL)
  {
    temp = temp->next;
  }
  temp->next = newNode;
}

void deleteNode(struct Node **head, int key)
{
  struct Node *current = *head;
  struct Node *prev = NULL;
  if (current->data == key)
  {
    *head = current->next;
    free(current);
    return;
  }
  while (current != NULL && current->data != key)
  {
    prev = current;
    current = current->next;
  }

  if (current == NULL)
  {
    return;
  }
  prev->next = current->next;
  free(current);
}

void displayList(struct Node *head)
{
  struct Node *temp = head;
  while (temp != NULL)
  {
    printf("%d ->", temp->data);
    temp = temp->next;
  }
  printf("NULL");
}

int main()
{
  struct Node *head = NULL;
  insertAtBeginning(&head, 10);
  insertAtBeginning(&head, 5);
  insertAtEnd(&head, 30);
  insertAtEnd(&head, 30);
  displayList(head);
  printf("\n");
  deleteNode(&head, 30);
  printf("\n");
  displayList(head);
  return 0;
}
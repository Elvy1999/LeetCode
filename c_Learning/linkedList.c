#include <stdio.h>
#include <stdlib.h>

struct Node
{
  struct Node *next;
  int data;
};
struct Node *createNewNode(int data)
{
  struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
  newNode->data = data;
  newNode->next = NULL;
  return newNode;
}

void insertAtBeginning(struct Node **head, int value)
{
  struct Node *newNode = createNewNode(value);
  newNode->next = *head;
  *head = newNode;
}

void insertAtEnd(struct Node **head, int value)
{
  struct Node *newNode = createNewNode(value);
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

void displayList(struct Node *head)
{
  struct Node *temp = head;
  while (temp != NULL)
  {
    printf("%d -> ", temp->data);
    temp = temp->next;
  }
  printf("NULL");
}

void deleteNode(struct Node **head, int key)
{
  struct Node *temp = *head;
  struct Node *prev = NULL;

  if (temp != NULL && temp->data == key)
  {
    *head = temp->next;
    free(temp);
    return;
  }

  while (temp->data != key && temp != NULL)
  {
    prev = temp;
    temp = temp->next;
  }

  if (temp == NULL)
    return;

  prev->next = temp->next;
  free(temp);
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
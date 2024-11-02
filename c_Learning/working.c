#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int findMax(int array[], int length)
{
  int largestNum = array[0];
  for (int i = 1; i < length; i++)
  {
    if (array[i] > largestNum)
    {
      largestNum = array[i];
    }
  }
  return largestNum;
}

void reverse(char *str)
{
  int end = strlen(str) - 1;
  int start = 0;
  while (start < end)
  {
    char temp = str[start];
    str[start] = str[end];
    str[end] = temp;
    start++;
    end--;
  }
  printf("Reversed string:%s\n", str);
}

int palindromeChecker(char str[])
{
  int start = 0;
  int end = strlen(str) - 1;
  while (start < end)
  {
    if (str[start] != str[end])
    {
      printf("%s is not a palindrome\n", str);
      return 0;
    }
    start++;
    end--;
  }
  printf("%s is a palindrome\n", str);
  return 1;
}

typedef struct Node
{
  struct Node *next;
  int data;
} Node;

Node *createNode(int data)
{
  Node *newNode = (Node *)malloc(sizeof(Node));
  newNode->data = data;
  newNode->next = NULL;
  return newNode;
}

void displayNodes(Node *head)
{
  Node *temp = head;
  while (temp != NULL)
  {
    printf("%d ->", temp->data);
    temp = temp->next;
  }
  printf("NULL\n");
}

int main()
{
  Node *head = createNode(1);
  Node *val1 = createNode(2);
  head->next = val1;
  displayNodes(head);
  Node *val2 = createNode(3);
  val1->next = val2;
  displayNodes(head);

  return 0;
}

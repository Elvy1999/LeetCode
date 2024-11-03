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

Node *reverseNodes(Node *head)
{
  Node *next = NULL;
  Node *prev = NULL;
  Node *current = head;
  while (current != NULL)
  {
    next = current->next;
    current->next = prev;
    prev = current;
    current = next;
  }

  head = prev;
  return head;
}

void findMinAndMax(int arr[], int length, int *max, int *min)
{
  *min = arr[0];
  *max = arr[0];
  for (int i = 0; i < length; i++)
  {
    if (arr[i] > *max)
      *max = arr[i];
    if (arr[i] < *min)
      *min = arr[i];
  }
}

int main()
{

  int max = 0;
  int min = 0;
  int arr[] = {23, 67, 12, 89, 34, 56};
  int length = sizeof(arr) / sizeof(arr[0]);
  findMinAndMax(arr, length, &max, &min);
  printf("The min is %d and the max is %d\n", min, max);

  return 0;
}

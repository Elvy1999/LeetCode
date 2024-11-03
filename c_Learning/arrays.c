#include <stdio.h>
#include <stdlib.h>

typedef struct Array
{
  int *A;
  int size;
  int length;
} Array;

void display(Array arr)
{
  printf("{ ");
  for (int i = 0; i < arr.length; i++)
  {
    printf("%d ", arr.A[i]);
  }
  printf("}\n");
}

int main()
{

  Array arr;
  int n;
  printf("Enter size of an array:");
  scanf("%d", &arr.size);
  arr.A = malloc(sizeof(arr.size * sizeof(int)));
  arr.length = 0;
  printf("Enter number of numbers:");
  scanf("%d", &n);
  for (int i = 0; i < n; i++)
  {
    scanf("%d", &arr.A[i]);
  }
  arr.length = n;

  display(arr);

  return 0;
}
#include <stdio.h>
#include <stdlib.h>

typedef struct Array
{
  int *A;
  int size[10];
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
  char s[] = "Welcome";
  int i;
  for (i = 0; s[i] != '\0'; i++)
  {
  }
  printf("%d\n", i);

  return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main()
{
  char str[32];
  int number;
  printf("Enter a word: ");
  scanf("%31s", str);
  printf("Enter a count: ");
  scanf("%d", &number);
  char *ptr = malloc(sizeof(char) * (strlen(str) + 1));
  if (ptr == NULL)
  {
    printf("Memory allocation failed!\n");
    exit(1);
  }
  strcpy(ptr, str);
  for (int i = 0; i < number; i++)
  {
    printf("%s", ptr);
  }
  printf("\n");
  free(ptr);
  return 0;
}

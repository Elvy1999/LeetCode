#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

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

int main()
{
  char string[] = "Racecar";
  reverse(string);
  printf("Original was changed also:%s\n", string);

  return 0;
}

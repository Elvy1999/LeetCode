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

void primeChecker(int number)
{
  if (number <= 1)
  { // Check if the number is less than or equal to 1
    printf("%d is not prime\n", number);
    return;
  }

  double range = sqrt(number);
  for (int i = 2; i <= range; i++)
  {
    if (number % i == 0)
    {
      printf("%d is not prime\n", number);
      return;
    }
  }

  // If no divisors are found, the number is prime
  printf("%d is prime\n", number);
}
int main()
{
  primeChecker(5);
  return 0;
}

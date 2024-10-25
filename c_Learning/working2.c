#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <ctype.h>

int isPalindrome(char str[])
{
  int start = 0;
  int end = strlen(str) - 1;

  while (start < end)
  {
    // Skip non-alphanumeric characters
    if (!isalnum(str[start]))
    {
      start++;
    }
    else if (!isalnum(str[end]))
    {
      end--;
    }
    else
    {
      // Compare characters (ignoring case)
      if (tolower(str[start]) != tolower(str[end]))
      {
        return 0; // Not a palindrome
      }
      start++;
      end--;
    }
  }
  return 1; // It's a palindrome
}

int isPalindrome2(char str[])
{
  int start = 0;
  int end = strlen(str) - 1;
  while (start < end)
  {
    if (!isalnum(str[start]))
      start++;
    else if (!isalnum(str[end]))
      end--;
    else
    {
      if (tolower(str[start]) != tolower(str[end]))
        return 0;
    }
    start++;
    end--;
  }
  return 1;
}

int main()
{
  // Take an array of integers as input and find its sum and average.
  // printf("\nEnter a list of number to calculate the sum and the average for them\n");
  // printf("How many numbers are going to be in your list:");
  // int numbers;
  // scanf("%d", &numbers);
  // int *arr = malloc(sizeof(int) * numbers);
  // int sum = 0, number;
  // float average;
  // for (int i = 0; i < numbers; i++)
  // {
  //   printf("\nEnter a number:");
  //   scanf("%d", &number);
  //   sum += number;
  //   arr[i] = number;
  // }
  // average = sum / numbers;
  // printf("The numbers you entered were:");
  // for (int i = 0; i < numbers; i++)
  // {
  //   printf(" %d", arr[i]);
  // }
  // printf("\n");
  // printf("The sum is %d, and the average is %.2f\n", sum, average);
  //

  // check if a string is a palindrome

  printf("Enter a string to see if it is a palindrome:");
  char string[100];
  scanf("%99s", string);
  printf("The word you entered was %s\n", string);
  int result = isPalindrome2(string) == 1 ? 1 : 0;
  if (result == 1)
    printf("%s is a palindrome\n", string);
  else
    printf("%s is not a palindrome\n", string);
  return 0;
}
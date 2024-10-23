#include <stdlib.h>
#include <string.h>
#include <stdio.h>

// Take an array of integers as input and find its sum and average.
int main()
{
  printf("\nEnter a list of number to calculate the sum and the average for them\n");
  printf("How many numbers are going to be in your list:");
  int numbers;
  scanf("%d", &numbers);
  int *arr = malloc(sizeof(int) * numbers);
  int sum = 0, number;
  float average;
  for (int i = 0; i < numbers; i++)
  {
    printf("\nEnter a number:");
    scanf("%d", &number);
    sum += number;
    arr[i] = number;
  }
  average = sum / numbers;
  printf("The numbers you entered were:");
  for (int i = 0; i < numbers; i++)
  {
    printf(" %d", arr[i]);
  }
  printf("\n");
  printf("The sum is %d, and the average is %.2f\n", sum, average);
  return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void numGuesserPrompt(int *number, int *guess);
int main()
{
  printf("Enter how many number in the fibonacci sequence you want: ");
  int n;
  scanf("%d", &n);
  int a, b, c;
  a = 0;
  b = 1;
  for (int i = 0; i < n; i++)
  {
    printf("%d ", a);
    c = a + b;
    a = b;
    b = c;
  }
  printf("\n");

  srand(time(0));
  int random_number = rand() % 100 + 1;
  printf("Enter a number between 1 and 100\n");
  int number;
  int guess = 1;
  scanf("%d", &number);
  while (number != random_number)
  {
    if (number < 1 || number > 100)
    {
      printf("Invalid number");
      numGuesserPrompt(&number, &guess);
    }
    else if (number < random_number)
    {
      printf("Too low\n");
      numGuesserPrompt(&number, &guess);
    }
    else if (number > random_number)
    {
      printf("Too high\n");
      numGuesserPrompt(&number, &guess);
    }
  }
  printf("You guessed the number %d, it took %d guesses\n", random_number, guess);
  return 0; /*  */
}

void numGuesserPrompt(int *number, int *guess)
{
  int current_guess;
  printf("Enter another number:");
  scanf("%d", &current_guess);
  *number = current_guess;
  *guess = *guess + 1;
}
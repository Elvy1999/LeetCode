#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main()
{
  int num1, num2;
  char op;
  printf("Enter two numbers: ");
  scanf("%d %d", &num1, &num2);
  printf("Enter the operation you would like to perform (+,-,*,/): ");
  scanf(" %c", &op);
  switch (op)
  {
  case '+':
    printf("The result is: %d\n", num1 + num2);
    break;
  case '-':
    printf("The result is: %d\n", num1 - num2);
    break;
  case '*':
    printf("The result is: %d\n", num1 * num2);
    break;
  case '/':
    if (num2 == 0)
    {
      printf("Cannot divide by zero\n");
    }
    else
    {
      printf("The result is: %d\n", num1 / num2);
    }
    break;
  default:
    printf("Invalid operator\n");
  }
  return 0;
}
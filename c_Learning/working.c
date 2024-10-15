#include <stdio.h>

int main(){
  printf("\nHello, World\n");
  int num1,num2;
  printf("Enter the 1st number");
  scanf("%d", &num1);
  printf("Enter the 2nd number");
  scanf("%d", &num2);
  int num3 = num1 + num2;
  printf("The sum of the two numbers is %d\n",num3);
  return 0;
}


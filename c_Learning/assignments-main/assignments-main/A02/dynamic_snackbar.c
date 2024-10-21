#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct snack
{
  char name[32];
  float cost;
  int quantity;
};

int main()
{
  int snackNum;
  printf("Enter a number of snack:");
  scanf("%d", &snackNum);
  struct snack *snacks = malloc(sizeof(struct snack) * snackNum);
  for (int i = 0; i < snackNum; i++)
  {
    printf("Enter snack name:");
    scanf("%32s", snacks[i].name);
    printf("Enter snack cost:");
    scanf("%f", &snacks[i].cost);
    printf("Enter snack quantity:");
    scanf("%d", &snacks[i].quantity);
  }
  for (int i = 0; i < snackNum; i++)
  {
    printf("%s\t\tcost: $%.2f\tquantity: %d\n",
           snacks[i].name, snacks[i].cost, snacks[i].quantity);
  }
  return 0;
}

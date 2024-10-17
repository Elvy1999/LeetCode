#include <stdio.h>
#include <string.h>

int main() {
  char str[100];
  printf("Enter a password \n");
  scanf("%99s", str);
  int i;
  int length = strlen(str);
  for(i = 0; i < length; i ++ ){
    if(str[i] == 'e') str[i] = '3';
    else if (str[i] == 'l') str[i] = '1';
    else if (str[i] == 'a') str[i] = '@';
  }
  printf("The modified password: %s\n", str);
  return 0;
}

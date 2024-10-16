#include <stdio.h>

int main(){
  printf("\nHello, World\n");
  int num1,num2;
  printf("Enter the 1st number:");
  scanf("%d", &num1);
  printf("Enter the 2nd number:");
  scanf("%d", &num2);
  int num3 = num1 + num2;
  printf("The sum of the two numbers is %d\n",num3);
  if(num1 > num2){
    printf ("%d is greater than num %d\n", num1,num2);
  }
  else{
    printf("%d is greater than num %d\n", num2,num1);
  }

  //USING A WHILE LOOP

  int num4;
  printf("Enter a number:");
  scanf("%d",&num4);
  if(num4<0){ // make sure number is not negative
    num4 = -num4;
  }
  int val = 1;

  while(val < num4){
    printf("%d\n", val);
    val = val*2;
  }

  // working with pass by value
  int max(int x, int y){
    int bigger = x;
    if(y > x){
      bigger = y;
    }
    return bigger;
  }
  int numX,numY;
  printf("Enter two numbers:");
  scanf("%d%d",&numX,&numY);
  int res = max(numX,numY);
  //here numX and numY stay the same when the number is called because it is 
  //pass by value
  printf("The larger value of num %d and num %d is %d\n", numX,numY,res);

  
  return 0;
}


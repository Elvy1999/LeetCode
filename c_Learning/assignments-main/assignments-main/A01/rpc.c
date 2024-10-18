#include <stdlib.h>
#include <time.h>
#include <stdio.h>


// Define the `snack` struct
struct snack {
  char name[100];
  float price;
  int quantity;
};
// Declare the `menu` function with the correct return type and parameters
void menu(struct snack snack1, struct snack snack2, struct snack snack3);

// Main function
int main() {
  srand(time(0)); // Seed the random number generator

  // Initialize the snacks
  struct snack s1 = {"Coco Puffs", 1.50, 4};
  struct snack s2 = {"Manchego cheese", 15.50, 6};
  struct snack s3 = {"Magic beans", 0.50, 0};

  int choice;
  float money;
  printf("Welcome to the snack shop!\n");
  printf("How much money do you have?$");
  scanf("%f", &money);
  // Call the menu function
  menu(s1, s2, s3);
  printf("\n what snack would you like?\n");
  scanf("%d", &choice);
  if(choice == 0){
    if(money >= s1.price && s1.quantity > 0){
      money -= s1.price;
      s1.quantity--;
      printf("You bought a %s for $%.2f\n", s1.name, s1.price);
      printf("you have $%.2f left\n", money);
    }
    else if(money < s1.price){
      printf("Sorry you cant afford it\n");
    }
    else{
      printf("Sorry we are out of %s\n", s1.name);
    }
  }
    if(choice == 1){
      if(money >= s2.price && s2.quantity > 0){
        money -= s2.price;
        s2.quantity--;
        printf("You bought a %s for $%.2f\n", s2.name, s2.price);
        printf("you have $%.2f left\n", money);
      }
      else if(money < s2.price){
        printf("Sorry you cant afford it\n");
      }
      else{
        printf("Sorry we are out of %s\n", s2.name);
      }
    }
      if(choice == 2){
        if(money >= s3.price && s3.quantity > 0){
          money -= s3.price;
          s3.quantity--;
          printf("You bought a %s for $%.2f\n", s3.name, s3.price);
          printf("you have $%.2f left\n", money);
        }
        else if(money < s3.price){
          printf("Sorry you cant afford it\n");
        }
        else{
          printf("Sorry we are out of %s\n", s3.name);
        }
      }
  


  return 0;
}

// Define the `menu` function
void menu(struct snack snack1, struct snack snack2, struct snack snack3) {
   printf("Available Snacks:\n");
   printf("0) %s\t\tcost: $%.2f\tquantity: %d\n", snack1.name, snack1.price, snack1.quantity);
   printf("1) %s\tcost: $%.2f\tquantity: %d\n", snack2.name, snack2.price, snack2.quantity);
   printf("2) %s\t\tcost: $%.2f\tquantity: %d\n", snack3.name, snack3.price, snack3.quantity);
}



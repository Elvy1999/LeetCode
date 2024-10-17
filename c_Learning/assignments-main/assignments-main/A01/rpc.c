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

  // Call the menu function
  menu(s1, s2, s3);

  return 0;
}

// Define the `menu` function
void menu(struct snack snack1, struct snack snack2, struct snack snack3) {
   printf("Available Snacks:\n");
   printf("0) %s\t\tcost: $%.2f\tquantity: %d\n", snack1.name, snack1.price, snack1.quantity);
   printf("1) %s\tcost: $%.2f\tquantity: %d\n", snack2.name, snack2.price, snack2.quantity);
   printf("2) %s\t\tcost: $%.2f\tquantity: %d\n", snack3.name, snack3.price, snack3.quantity);
}

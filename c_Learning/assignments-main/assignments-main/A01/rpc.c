#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>  // Include time.h for the time() function

// Function prototypes
char* selection(); // Prompts the user to select rock, paper, or scissors
int menu();        // Displays the menu for the user
int convert(char* userChoice); // converts string value to number
char* numToStr(int number); // converts number to string
void gameLogic(int *player2Score, int *player1Score, int player1Choice, int player2Choice); // logic for the game

int main() {
    // Seed the random number generator with the current time
    srand(time(0));

    // Generate a random number between 0 and 2
    int random_number = rand() % 3;

    // Call the menu function to determine how many times the user wants to play
    int times = menu();
    int AIscore = 0;
    int userScore = 0;
    
    while(times > 0) {
        // Convert the user's choice to a number
        char* user_choice = selection();
        int random_number = rand() % 3;
        char* computer_choice = numToStr(random_number);
        printf("AI selected: %s\n", computer_choice);
        int user_choice_number = convert(user_choice);
        {
          if(user_choice_number == -1) {
            printf("You entered an invalid choice: %s.\n",user_choice);
          }
        }
        times--;
        gameLogic(&AIscore, &userScore, user_choice_number, random_number);
        printf("AI score: %d, PlayersScore: %d\n", AIscore, userScore);
    }

    if(AIscore > userScore) {
        printf("AI wins!\n");
    }
    else if(AIscore < userScore){
        printf("Player wins!\n");
    }
    else{
        printf("Draw!\n");
    }

    return 0;
}

// Function to prompt the user for their selection
char* selection() {
    // Dynamically allocate memory for the user's choice
    char* choice = (char*)malloc(100 * sizeof(char));
    if (choice == NULL) {
        printf("Memory allocation failed!\n");
        exit(1);
    }

    // Prompt the user to choose rock, paper, or scissors
    printf("What do you choose? rock, paper, or scissors: ");
    scanf("%99s", choice);  // Use %99s to prevent buffer overflow

    return choice;  // Return the dynamically allocated choice
}

// Function to display the menu and get the number of times to play
int menu() {
    int times;
    printf("How many times do you want to play? ");
    scanf("%d", &times);
    return times;
}

/**
 * Converts the user's choice to a number.
 * 0 = rock
 * 1 = paper
 * 2 = scissors
 * -1 = invalid choice
 *
 * @param userChoice the user's choice
 * @return the converted number
 */

/**
 * Converts a numeric value to its corresponding string representation for rock, paper, or scissors.
 * 
 * @param number The numeric value to be converted
 * @return The string value representing rock, paper, scissors, or "Invalid number" if the input is not 0, 1, or 2
 */
int convert(char* userChoice) {
    if (strcmp(userChoice, "rock") == 0) {
        return 0;
    } else if (strcmp(userChoice, "paper") == 0) {
        return 1;
    } else if (strcmp(userChoice, "scissors") == 0) {
        return 2;
    } else {
        return -1;
    }
}
char* numToStr(int number) {
    if (number == 0) {
        return "rock";
    } else if (number == 1) {
        return "paper";
    } else if (number == 2) {
        return "scissors";
    } else {
        return "Invalid number";
    }
}

void gameLogic(int *player2Score, int *player1Score, int player1Choice, int player2Choice) {
    if (player1Choice == player2Choice) {
        printf("Tie!\n");
    } else if (player1Choice == 2 && player2Choice == 1) {
        printf("Scissors cuts paper\n");
        *player1Score += 1;  // Player wins
    } else if (player1Choice == 0 && player2Choice == 2) {
        printf("Rock bashes scissors\n");
        *player1Score += 1;  // Player wins
    } else if (player1Choice == 1 && player2Choice == 0) {
        printf("Paper covers rock\n");
        *player1Score += 1;  // Player wins
    } else if (player1Choice == 1 && player2Choice == 2) {
        printf("Scissors cuts paper\n");
        *player2Score += 1;  // AI wins
    } else if (player1Choice == 2 && player2Choice == 0) {
        printf("Rock bashes scissors\n");
        *player2Score += 1;  // AI wins
    } else if (player1Choice == 0 && player2Choice == 1) {
        printf("Paper covers rock\n");
        *player2Score += 1;  // AI wins
    }
}









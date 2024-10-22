#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

#define MAX_WORD_LENGTH 100

// Function prototype for print_word
void print_word(char *word);

int main()
{
  FILE *file;
  char word[MAX_WORD_LENGTH];
  int num_words = 0;
  int random_index;

  // Open the file in read mode
  file = fopen("words.txt", "r");
  if (file == NULL)
  {
    printf("Could not open file\n");
    return 1;
  }

  // Count the number of words in the file
  while (fscanf(file, "%s", word) == 1)
  {
    num_words++;
  }

  if (num_words == 0)
  {
    printf("The file is empty.\n");
    fclose(file);
    return 1;
  }

  // Reset the file pointer to the beginning of the file
  rewind(file);

  // Select a random index
  srand(time(NULL));
  random_index = rand() % num_words;

  // Read and assign the random word to a variable
  char random_word[MAX_WORD_LENGTH];
  while (fscanf(file, "%s", word) == 1)
  {
    if (random_index == 0)
    {
      strcpy(random_word, word);
      break;
    }
    random_index--;
  }
  fclose(file);
  printf("Random word: %s\n", random_word);

  int strLength = strlen(random_word);
  int turn = 1;
  char guess;
  char wordGuessed[strLength + 1];

  printf("Welcome to Word Guess!\n\n");
  printf("Turn: %d\n\n", turn);

  // Initialize wordGuessed with underscores and null-terminate it
  for (int i = 0; i < strLength; i++)
  {
    wordGuessed[i] = '_';
  }
  wordGuessed[strLength] = '\0'; // Null-terminate the guessed word

  print_word(wordGuessed);
  printf("\n");

  // Game loop
  while (strcmp(wordGuessed, random_word) != 0)
  {
    printf("\nGuess a character: ");
    scanf(" %c", &guess); // Use " %c" to skip whitespace

    for (int i = 0; i < strLength; i++)
    {
      if (random_word[i] == guess && wordGuessed[i] == '_')
      {
        wordGuessed[i] = guess;
      }
    }

    print_word(wordGuessed);
    printf("\n");

    turn++;
    printf("Turn: %d\n\n", turn);
  }

  printf("You won in %d turns!\n", turn);
  return 0;
}

// Function to print the current state of the guessed word
void print_word(char *word)
{
  int strLength = strlen(word);
  for (int i = 0; i < strLength; i++)
  {
    printf(" %c ", word[i]);
  }
  printf("\n");
}

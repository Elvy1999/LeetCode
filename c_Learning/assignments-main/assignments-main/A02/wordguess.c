#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

#define MAX_WORD_LENGTH 100

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

  // Reset the file pointer to the beginning of the file
  rewind(file);

  // Select a random index
  srand(time(NULL));
  random_index = rand() % num_words;

  // Read and asssign the random word to a variable
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
  char wordGuessed[strLength];
  printf("Welcome to Word Guess!\n\n");
  printf("Turn :%d \n\n", turn);

  for (int i = 0; i < strLength; i++)
  {
    wordGuessed[i] = '_';
  }
  for (int i = 0; i < strLength; i++)
  {
    printf(" %c ", wordGuessed[i]);
  }
  printf("\n");
  printf("\nGuess a character:");
  scanf("%c", &guess);
  // for(int i =  0; i < strLength; i++){
  //   if(random_word[i] == guess &&)
  // }
  return 0;
}

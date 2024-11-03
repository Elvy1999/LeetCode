//---------------------------------------------------------------------
// magic_square.c
// CS223 - Spring 2022
// Identify whether a matrix is a magic square
// Name:
//
#include <stdio.h>
#include <stdlib.h>

int main()
{

  int m, n;
  scanf("%d %d", &m, &n);
  int *matrix = malloc(sizeof(m * n));
  for (int i = 0; i < m; i++)
  {
    for (int j = 0; j < n; j++)
    {
      scanf("%d ", &(matrix[i * n + j]));
    }
  }

  for (int i = 0; i < m; i++)
  {
    for (int j = 0; j < n; j++)
    {
      printf("%d", matrix[i + n + j]);
    }
    printf("\n");
  }
}

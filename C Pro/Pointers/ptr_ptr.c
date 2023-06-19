#include <stdio.h>
#include <stdlib.h>

int main()
{
  int r = 4;
  int c = 3;
  int **arr = (int **)malloc(r * sizeof(int *));
  
  for (int i = 0; i < r; ++i)
  {
    *(arr+i) = (int *)malloc(c * sizeof(int));
  }
  
  for (int i = 0; i < r; ++i)
  {
    for (int j = 0; j < c; ++j)
    {
      scanf("%i", *(arr+i)+j);
    }
  }
  
  for (int i = 0; i < r; ++i)
  {
    for (int j = 0; j < c; ++j)
    {
      printf("%i ", *(*(arr+i)+j));
    }
    printf("\n");
  }
}
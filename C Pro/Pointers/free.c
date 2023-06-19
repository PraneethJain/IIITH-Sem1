#include <stdio.h>
#include <stdlib.h>

int main()
{
  // Allocate
  int *ptr = (int *)malloc(sizeof(int));
  
  // Deallocate
  free(ptr);
  
  return 0;
}

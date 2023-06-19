  #include <stdio.h>
  #include <stdlib.h>

  int main()
  {
    int row = 4;
    int column = 3;
    int *arr[row];
    // Allocate memory to the array
    for (int i = 0; i < row; ++i)
    {
      *(arr+i) = (int *)malloc(column*sizeof(int));
    }
      
    // Read the array from the user
    printf("Enter a 4x3 matrix\n");
    for (int i = 0; i < row; ++i)
    {
      for (int j = 0; j < column; ++j)
      {
        scanf("%i", *(arr+i)+j);
      }
    }
    
    
    // Print the array
    for (int i = 0; i < row; ++i)
    {
      for (int j = 0; j < column; ++j)
      {
        printf("%i ", arr[i][j]);
      }
      printf("\n");
    }
    
    return 0; 
  }

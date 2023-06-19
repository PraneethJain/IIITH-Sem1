#include <stdio.h>
#include <limits.h>

int main()
{
    int currentNum;
    int highestNum, secondHighestNum;

    for (int i = 0; i < 6; i++)
    {
        scanf("%i", &currentNum);
        if (currentNum > highestNum)
        {
            if (i == 0)
            {
                highestNum = currentNum;
                secondHighestNum = INT_MIN;
            }
            else
            {
                secondHighestNum = highestNum;
                highestNum = currentNum;
            }
        }
        else if (currentNum > secondHighestNum)
        {
            secondHighestNum = currentNum;
        }
    }
    printf("The second highest number is: %i\n", secondHighestNum);
}
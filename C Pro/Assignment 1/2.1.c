#include <stdio.h>
#include <limits.h>

int main()
{
    int currentNum;
    int highestNum;
    int secondHighestNum = INT_MIN;

    for (int i = 0; i < 6; i++)
    {
        scanf("%i", &currentNum);

        if (i == 0)
        {
            highestNum = secondHighestNum;
        }
        else if (currentNum > highestNum)
        {
            secondHighestNum = highestNum;
            highestNum = currentNum;
        }
        else if (currentNum > secondHighestNum)
        {
            secondHighestNum = highestNum;
        }
    }

    printf("The second highest number is %i\n", secondHighestNum);

    return 0;
}
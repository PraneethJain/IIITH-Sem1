#include <stdio.h>

int main()
{
    int year;
    scanf("%i", &year);
    int leap = 0;
    if (year % 100 == 0)
    {
        if (year % 400 == 0)
        {
            leap = 1;
        }
    }
    else if (year % 4 == 0)
    {
        leap = 1;
    }
    if (leap)
    {
        printf("Leap Year!\n");
    }
    else
    {
        printf("Not a Leap Year!\n");
    }

    return 0;
}
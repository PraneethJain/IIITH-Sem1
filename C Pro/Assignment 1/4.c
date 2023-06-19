#include <stdio.h>

int power(int base, int exponent)
{
    int result = 1;
    for (int i = 0; i < exponent; i++)
    {
        result *= base;
    }

    return result;
}

int main()
{
    int num;
    scanf("%i", &num);

    int digit;
    int reversedNum = 0;
    for (int i = 3; i >= 0; i--)
    {
        digit = num % 10;
        num /= 10;
        reversedNum += power(10, i) * digit;
    }

    printf("%i\n", reversedNum);

    return 0;
}

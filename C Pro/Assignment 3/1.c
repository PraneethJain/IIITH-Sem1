#include <stdio.h>

int get_highest_digit(int num)
{
    int res = 0, cur;
    while (num)
    {
        cur = num % 10;
        num /= 10;
        if (cur > res)
            res = cur;
    }

    return res;
}

int main()
{
    int n;
    scanf("%i", &n);
    int res = 0;
    while (n)
    {
        res += 1;
        n -= get_highest_digit(n);
    }

    printf("%i\n", res);
    
    return 0;
}
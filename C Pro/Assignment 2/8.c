#include <stdio.h>

int solve(int x, int y, int digit)
{

    int cur;
    x %= y;

    for (int i = 1; i <= y; ++i)
    {
        cur = 10 * x / y;

        if (cur == digit)
        {
            return i;
        }
        x = (10 * x) % y;
    }

    return -1;
}   

int main()
{
    int t, a, n, c;
    scanf("%i", &t);
    for (int l = 0; l < t; ++l)
    {
        scanf("%i %i %i", &a, &n, &c);
        printf("%i\n", solve(a, n, c));
    }

    return 0;
}

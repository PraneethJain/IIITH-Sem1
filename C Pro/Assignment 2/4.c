#include <stdio.h>

int abs(int n)
{
    return n > 0 ? n : -n;
}

int main()
{
    int t, n, sum, cur;
    scanf("%i", &t);
    for (int i = 0; i < t; ++i)
    {
        scanf("%i", &n);
        sum = 0;
        for (int j = 0; j < n; ++j)
        {
            scanf("%i", &cur);
            sum += cur;
        }
        if (sum % 2)
            printf("-1\n");
        else
            printf("%i\n", abs(sum) / 2);
    }

    return 0;
}
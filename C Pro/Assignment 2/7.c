#include <stdio.h>

int abs(int n)
{
    return n > 0 ? n : -n;
}

int min(int a, int b, int c, int d)
{
    int ans = a;
    if (b < ans)
        ans = b;
    if (c < ans)
        ans = c;
    if (d < ans)
        ans = d;

    return ans;
}

int main()
{
    int t, n, k, x, y;
    int above_count, below_count, right_count, left_count;
    scanf("%i", &t);
    for (int l = 0; l < t; ++l)
    {
        above_count = 0;
        below_count = 0;
        right_count = 0;
        left_count = 0;
        scanf("%i %i", &n, &k);
        for (int i = 0; i < n; ++i)
        {
            scanf("%i %i", &x, &y);
            if (x > 0)
                ++right_count;
            else
                ++left_count;

            if (y > 0)
                ++above_count;
            else
                ++below_count;
        }
        if (min(above_count, below_count, right_count, left_count) <= k)
            printf("YES\n");
        else
            printf("NO\n");
    }

    return 0;
}
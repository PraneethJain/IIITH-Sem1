#include <stdio.h>
#include <limits.h>

int abs(int a);

int main()
{
    int n, k, cur, lim;
    scanf("%i %i", &n, &k);
    int heights[n];
    for (int i = 0; i < n; ++i)
    {
        scanf("%i", &heights[i]);
    }
    int optimum[n];
    optimum[0] = 0;
    optimum[1] = abs(heights[1] - heights[0]);

    for (int i = 2; i < n; ++i)
    {
        optimum[i] = INT_MAX;
        lim = i > k ? k : i;
        for (int j = 0; j <= lim; ++j)
        {
            cur = abs(heights[i] - heights[i - j]) + optimum[i - j];
            if (optimum[i] > cur)
                    optimum[i] = cur;
            }
    }
    printf("%i", optimum[n - 1]);
    return 0;
}

int abs(int a)
{
    return a < 0 ? (-a) : a;
}
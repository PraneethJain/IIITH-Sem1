#include <stdio.h>

int abs(int a);
int min(int a, int b);

int main()
{
    int n;
    scanf("%i", &n);
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
        optimum[i] = min(abs(heights[i] - heights[i - 1]) + optimum[i - 1],
                         abs(heights[i] - heights[i - 2]) + optimum[i - 2]);
    }
    printf("%i", optimum[n - 1]);
    return 0;
}

int min(int a, int b)
{
    return a < b ? a : b;
}

int abs(int a)
{
    return a < 0 ? (-a) : a;
}